#!/usr/bin/env python3
"""Turn the persistent console log (patch 0191) pulled from the end of userdata into text.

  vince-log-decode.py VINCELOG.bin [OUT.txt]

VINCELOG.bin is the last 16385 sectors (8 MiB + 512 bytes) of the userdata partition, pulled from a recovery:

  adb shell 'p=/dev/block/bootdevice/by-name/userdata; n=$(blockdev --getsz $p);
             dd if=$p of=/tmp/vincelog.bin bs=512 skip=$((n-16385)) count=16385'
  adb pull /tmp/vincelog.bin

Sector 0 is the header ("VINCELOG", u32 version, u32 ring size, u64 bytes ever written, u64 flush sequence), then
the ring: byte n of the console is at n % size. Prints the console in order (the last `size` bytes at most).
"""
import struct
import sys

SECTOR = 512


def main():
    if len(sys.argv) < 2:
        sys.exit(__doc__)
    data = open(sys.argv[1], 'rb').read()
    magic, version, size, total, seq = struct.unpack_from('<8sIIQQ', data, 0)
    if magic != b'VINCELOG' or version != 1:
        sys.exit(f'no VINCELOG header (magic {magic!r}, version {version}): not booted with 0191 and mmcrw=1 yet?')
    ring = data[SECTOR:SECTOR + size]
    if len(ring) < size:
        sys.exit(f'dump too short: ring of {size} bytes, have {len(ring)}')
    if total <= size:
        text = ring[:total]
    else:
        at = total % size
        text = ring[at:] + ring[:at]
    out = text.decode('utf-8', errors='replace')
    print(f'# VINCELOG flush {seq}: {total} bytes written, {len(text)} kept', file=sys.stderr)
    if len(sys.argv) > 2:
        open(sys.argv[2], 'w').write(out)
    else:
        sys.stdout.write(out)


if __name__ == '__main__':
    main()
