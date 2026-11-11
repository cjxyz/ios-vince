#!/usr/bin/env python3
"""Make a package for the "vincepkg" slot of userdata, which backboardd-wrap installs under /vince at the next boot.

  mkvincepkg.py OUT.bin [DEST=SRC ...]    files to install: DEST is relative to /vince (lib/libvince-gl.dylib)
  mkvincepkg.py OUT.bin --gl DIR          the vincegl workflow's artifact: lib/libvince-gl.dylib, lib/libvince-inject.dylib
  mkvincepkg.py OUT.bin --clear           an empty slot (the root's own files stay as they are)

The root is HFS+, which TWRP cannot mount, so files for it went in by rebuilding and reflashing the whole image. The slot
is 32 MiB of raw userdata just before the console log of patch 0191 (past the HFS+ volume); TWRP writes it with dd. Each
package carries a generation (the time it was made), installed once; files outside /vince cannot be named. The wrapper
itself (/usr/libexec/backboardd) is not in a package: it reads the slot, and changes only with addgpu_root.sh.

Then, from TWRP, in PowerShell (the commands are printed at the end):
  .\\adb push OUT.bin /tmp/vincepkg.bin
  .\\adb shell '<dd into the slot>'
"""
import struct
import sys
import time
import zlib

PKG_LOG_SECTORS = 16385
PKG_SECTORS = 65536
HEADER = 4096


def entry(dest, data, mode=0o755):
    path = dest.encode()
    if not path or path.startswith(b'/') or b'..' in path or len(path) >= 120:
        sys.exit(f'bad destination {dest!r}: relative to /vince, no "..", under 120 bytes')
    out = struct.pack('<120sII', path, mode, len(data)) + data
    return out + b'\0' * (-len(out) % 8)


def main():
    if len(sys.argv) < 3:
        sys.exit(__doc__)
    out, args = sys.argv[1], sys.argv[2:]
    files = []
    if args == ['--clear']:
        blob = b'\0' * HEADER
    else:
        if args[0] == '--gl':
            d = args[1]
            pairs = [f'lib/{n}={d}/{n}' for n in ('libvince-gl.dylib', 'libvince-inject.dylib')] + args[2:]
        else:
            pairs = args
        for p in pairs:
            dest, _, src = p.partition('=')
            files.append((dest, open(src, 'rb').read()))
        payload = b''.join(entry(dest, data) for dest, data in files)
        if len(payload) > PKG_SECTORS * 512 - HEADER:
            sys.exit(f'{len(payload)} bytes: the slot holds {PKG_SECTORS * 512 - HEADER}')
        generation = int(time.time())
        head = struct.pack('<8sIIQQI', b'VINCEPKG', 1, len(files), generation, len(payload),
                           zlib.crc32(payload) & 0xffffffff)
        head += struct.pack('<I', zlib.crc32(head) & 0xffffffff)
        blob = head + b'\0' * (HEADER - len(head)) + payload
        blob += b'\0' * (-len(blob) % HEADER)
        for dest, data in files:
            print(f'/vince/{dest}: {len(data)} bytes', file=sys.stderr)
        print(f'generation {generation}, {len(blob)} bytes', file=sys.stderr)
    open(out, 'wb').write(blob)
    seek = f'$(( (n-{PKG_LOG_SECTORS}-{PKG_SECTORS}) / 8 * 8 ))'
    print(f"""
From TWRP (PowerShell, with {out} reachable as \\\\wsl.localhost\\Ubuntu\\...):
  .\\adb push <{out}> /tmp/vincepkg.bin
  .\\adb shell 'p=/dev/block/bootdevice/by-name/userdata; n=$(blockdev --getsz $p); dd if=/tmp/vincepkg.bin of=$p bs=512 seek={seek} && sync && echo ok'""",
          file=sys.stderr)


if __name__ == '__main__':
    main()
