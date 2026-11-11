/*
 * /usr/libexec/backboardd (vince; from pixellia/ios-casuarina userland/gpu, HackiOS lineage, MIT): launchd does not pass
 * DYLD_* variables from a job to a system daemon, so this stands in for the
 * window server: it adds our loader to DYLD_INSERT_LIBRARIES and execs the
 * real one (/usr/libexec/real/backboardd: same name, same pid, same Mach
 * services launchd prepared).
 *
 * Before that it installs the package of the "vincepkg" slot, if there is a new one: 32 MiB of raw userdata just before
 * the console log of patch 0191, past the HFS+ root, that TWRP can write with dd (tools/mkvincepkg.py). The root is
 * HFS+, which TWRP cannot mount, so without this every new library meant rebuilding and reflashing the whole 16 GB
 * image. The files go under /vince only; boot-arg vincepkg=0 skips the slot.
 */
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/ioctl.h>
#include <sys/stat.h>
#include <sys/sysctl.h>

/* <sys/disk.h> is not in the iOS SDK; these are its values */
#define DKIOCGETBLOCKSIZE  _IOR('d', 24, uint32_t)
#define DKIOCGETBLOCKCOUNT _IOR('d', 25, uint64_t)

#define REAL "/usr/libexec/real/backboardd"
#define LOADER "/vince/lib/libvince-inject.dylib"
#define ENVFILE "/vince/backboardd.env"      /* KEY=VALUE lines (tests: FD_MESA_DEBUG=sysmem ...) */

/* The slot, as tools/mkvincepkg.py writes it. Sectors of 512 bytes from the start of the partition. */
#define PKG_DEVICE      "/dev/rmmcroot0"
#define PKG_GENFILE     "/vince/pkg.gen"
#define PKG_LOG_SECTORS 16385ULL                /* 0191: header + 8 MiB ring at the very end */
#define PKG_SECTORS     65536ULL                /* 32 MiB */
#define PKG_HEADER      4096                    /* header block; the entries follow it */
#define PKG_CHUNK       (1024 * 1024)

struct pkg_header {
	char     magic[8];                      /* "VINCEPKG" */
	uint32_t version;                       /* 1 */
	uint32_t count;                         /* entries */
	uint64_t generation;                    /* installed once: /vince/pkg.gen keeps the last one */
	uint64_t payload_size;                  /* bytes of entries after the header block */
	uint32_t payload_crc32;
	uint32_t header_crc32;                  /* of the 36 bytes above */
};

struct pkg_entry {                              /* then size bytes of data, then zeroes up to a multiple of 8 */
	char     path[120];                     /* relative to /vince, NUL-terminated */
	uint32_t mode;
	uint32_t size;
};

static int pkg_log = -1;

static void
pkg_say(const char *format, const char *a, unsigned long long b)
{
	char line[256];
	int n = snprintf(line, sizeof(line), format, a, b);

	if (pkg_log >= 0 && n > 0) {
		write(pkg_log, line, (size_t)n < sizeof(line) ? (size_t)n : sizeof(line) - 1);
	}
}

static uint32_t
crc32(const uint8_t *p, size_t n)
{
	uint32_t c = 0xffffffffu;

	while (n--) {
		c ^= *p++;
		for (int k = 0; k < 8; k++) {
			c = c & 1 ? (c >> 1) ^ 0xedb88320u : c >> 1;
		}
	}
	return ~c;
}

static int
safe_path(const char *path)
{
	return path[0] != 0 && path[0] != '/' && strstr(path, "..") == NULL && memchr(path, 0, 120) != NULL;
}

/* Write one file next to its place and rename it there (a new vnode: no stale code signature for dyld). */
static int
pkg_install_file(const char *path, const uint8_t *data, uint32_t size, uint32_t mode)
{
	char dest[160], tmp[170];
	int fd;

	snprintf(dest, sizeof(dest), "/vince/%s", path);
	snprintf(tmp, sizeof(tmp), "%s.pkgtmp", dest);
	for (char *s = strchr(dest + 7, '/'); s != NULL; s = strchr(s + 1, '/')) {
		*s = 0;
		mkdir(dest, 0755);
		*s = '/';
	}
	fd = open(tmp, O_WRONLY | O_CREAT | O_TRUNC, mode & 0777);
	if (fd < 0) {
		return -1;
	}
	for (uint32_t done = 0; done < size;) {
		ssize_t w = write(fd, data + done, size - done);
		if (w <= 0) {
			close(fd);
			unlink(tmp);
			return -1;
		}
		done += (uint32_t)w;
	}
	fchmod(fd, mode & 0777);
	fsync(fd);
	close(fd);
	return rename(tmp, dest);
}

static void
pkg_install(void)
{
	uint64_t blocks = 0, nsect, at, installed = 0;
	uint32_t blocksize = 0;
	struct pkg_header h;
	uint8_t *buf = NULL;
	size_t size, off;
	FILE *gen;
	int fd;

	fd = open(PKG_DEVICE, O_RDONLY);
	if (fd < 0 || ioctl(fd, DKIOCGETBLOCKCOUNT, &blocks) != 0 || ioctl(fd, DKIOCGETBLOCKSIZE, &blocksize) != 0) {
		pkg_say("vincepkg: %s: cannot read the partition (%llu)\n", PKG_DEVICE, (unsigned long long)errno);
		goto out;
	}
	nsect = blocks * blocksize / 512;
	if (nsect < PKG_LOG_SECTORS + PKG_SECTORS + 8) {
		goto out;
	}
	at = ((nsect - PKG_LOG_SECTORS - PKG_SECTORS) & ~7ULL) * 512;
	if (posix_memalign((void **)&buf, 4096, PKG_HEADER) != 0 || pread(fd, buf, PKG_HEADER, (off_t)at) != PKG_HEADER) {
		pkg_say("vincepkg: %s: header not readable (%llu)\n", PKG_DEVICE, (unsigned long long)errno);
		goto out;
	}
	memcpy(&h, buf, sizeof(h));
	if (memcmp(h.magic, "VINCEPKG", 8) != 0) {
		goto out;                       /* an empty slot: nothing to say */
	}
	if (h.version != 1 || crc32((const uint8_t *)&h, offsetof(struct pkg_header, header_crc32)) != h.header_crc32 ||
	    h.payload_size > PKG_SECTORS * 512 - PKG_HEADER) {
		pkg_say("vincepkg: bad header%s (version %llu)\n", "", h.version);
		goto out;
	}
	if ((gen = fopen(PKG_GENFILE, "r")) != NULL) {
		if (fscanf(gen, "%llu", &installed) != 1) {
			installed = 0;
		}
		fclose(gen);
	}
	if (installed == h.generation) {
		goto out;                       /* already there (every restart of backboardd comes by here) */
	}
	size = (size_t)((h.payload_size + 4095) & ~4095ULL);
	free(buf);
	buf = NULL;
	if (posix_memalign((void **)&buf, 4096, size ? size : 4096) != 0) {
		goto out;
	}
	for (off = 0; off < size; off += PKG_CHUNK) {
		size_t n = size - off < PKG_CHUNK ? size - off : PKG_CHUNK;
		if (pread(fd, buf + off, n, (off_t)(at + PKG_HEADER + off)) != (ssize_t)n) {
			pkg_say("vincepkg: payload not readable%s (%llu)\n", "", (unsigned long long)errno);
			goto out;
		}
	}
	if (crc32(buf, (size_t)h.payload_size) != h.payload_crc32) {
		pkg_say("vincepkg: generation %s%llu: payload checksum wrong, left alone\n", "", h.generation);
		goto out;
	}
	off = 0;
	for (uint32_t i = 0; i < h.count; i++) {
		struct pkg_entry e;

		if (off + sizeof(e) > h.payload_size) {
			pkg_say("vincepkg: entry %s%llu past the end\n", "", i);
			goto out;
		}
		memcpy(&e, buf + off, sizeof(e));
		off += sizeof(e);
		if (!safe_path(e.path) || off + e.size > h.payload_size) {
			pkg_say("vincepkg: entry %s%llu refused\n", "", i);
			goto out;
		}
		if (pkg_install_file(e.path, buf + off, e.size, e.mode) != 0) {
			pkg_say("vincepkg: /vince/%s: not written (%llu)\n", e.path, (unsigned long long)errno);
			goto out;
		}
		pkg_say("vincepkg: /vince/%s (%llu bytes)\n", e.path, e.size);
		off += (e.size + 7) & ~7u;
	}
	if ((gen = fopen(PKG_GENFILE, "w")) != NULL) {
		fprintf(gen, "%llu\n", (unsigned long long)h.generation);
		fclose(gen);
	}
	sync();
	pkg_say("vincepkg: generation %s%llu installed\n", "", h.generation);
out:
	free(buf);
	if (fd >= 0) {
		close(fd);
	}
}

int
main(int argc, char *argv[])
{
	(void)argc;
	char bootargs[1024] = "";
	size_t blen = sizeof(bootargs) - 1;
	(void)sysctlbyname("kern.bootargs", bootargs, &blen, NULL, 0);
	/* boot-arg bbdlog=1: the window server's stderr/stdout (topaz-gl:, redwood-gl:, crashes) to the console */
	if (strstr(bootargs, "bbdlog=1") != NULL) {
		int console = open("/dev/console", O_WRONLY | O_NOCTTY);
		if (console >= 0) {
			dup2(console, 1);
			dup2(console, 2);
			close(console);
		}
	}
	/* what the package does is always said on the console (and so in the persistent log) */
	pkg_log = open("/dev/console", O_WRONLY | O_NOCTTY);
	if (strstr(bootargs, "vincepkg=0") == NULL) {
		pkg_install();
	}
	if (pkg_log >= 0) {
		close(pkg_log);
	}
	if (access(LOADER, R_OK) == 0) {
		setenv("DYLD_INSERT_LIBRARIES", LOADER, 1);
	}
	/* only with boot-arg bbdenv=1: a RAM-booted test, the normal boot stays as it is */
	FILE *f = strstr(bootargs, "bbdenv=1") != NULL ? fopen(ENVFILE, "r") : NULL;
	if (f != NULL) {
		char line[256];
		while (fgets(line, sizeof(line), f) != NULL) {
			char *eq = strchr(line, '='), *nl = strchr(line, '\n');
			if (nl != NULL) {
				*nl = 0;
			}
			if (eq != NULL && line[0] != '#' && eq != line) {
				*eq = 0;
				setenv(line, eq + 1, 1);
			}
		}
		fclose(f);
	}
	argv[0] = (char *)REAL;
	execv(REAL, argv);
	return 127;
}
