/*
 * /usr/libexec/backboardd (vince; from pixellia/ios-casuarina userland/gpu, HackiOS lineage, MIT): launchd does not pass
 * DYLD_* variables from a job to a system daemon, so this stands in for the
 * window server: it adds our loader to DYLD_INSERT_LIBRARIES and execs the
 * real one (/usr/libexec/real/backboardd: same name, same pid, same Mach
 * services launchd prepared).
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/sysctl.h>

#define REAL "/usr/libexec/real/backboardd"
#define LOADER "/vince/lib/libvince-inject.dylib"
#define ENVFILE "/vince/backboardd.env"      /* KEY=VALUE lines (tests: FD_MESA_DEBUG=sysmem ...) */

int
main(int argc, char *argv[])
{
	(void)argc;
	if (access(LOADER, R_OK) == 0) {
		setenv("DYLD_INSERT_LIBRARIES", LOADER, 1);
	}
	char bootargs[1024] = "";
	size_t blen = sizeof(bootargs) - 1;
	(void)sysctlbyname("kern.bootargs", bootargs, &blen, NULL, 0);
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
	/* boot-arg bbdlog=1: the window server's stderr/stdout (topaz-gl:, redwood-gl:, crashes) to the console */
	if (strstr(bootargs, "bbdlog=1") != NULL) {
		int console = open("/dev/console", O_WRONLY | O_NOCTTY);
		if (console >= 0) {
			dup2(console, 1);
			dup2(console, 2);
			close(console);
		}
	}
	argv[0] = (char *)REAL;
	execv(REAL, argv);
	return 127;
}
