#!/usr/bin/env python3
"""Small reader for the iOS 16.7.16 dyld shared cache (split subcaches + .symbols), for reverse engineering on WSL.

Mount the SystemOS cryptex first (no sudo): apfs-fuse ../rootwork/087-86593-047.dmg MNT
and pass DIR = MNT/root/System/Library/Caches/com.apple.dyld (or set DSC_DIR).

  dsc.py sym REGEX            local symbols matching REGEX (address, name)
  dsc.py at ADDR              symbol containing ADDR
  dsc.py dis ADDR [BYTES]     disassemble (llvm-mc), branch/adrp targets resolved, call targets named
  dsc.py calls TARGET IMAGE   bl instructions in IMAGE (substring of its path) that call TARGET (address or symbol)
  dsc.py vt VTABLE [SIZE]     virtual slots of a vtable (address or __ZTV symbol), by offset as VSLOT() counts them
  dsc.py ptr ADDR            8-byte value at ADDR, decoded as a cache pointer
  dsc.py str ADDR             C string at ADDR

The symbol table is cached in ~/.cache/vince-dsc-syms.pkl (built on first use, about a minute).
"""
import bisect
import glob
import os
import pickle
import re
import struct
import subprocess
import sys

D = os.environ.get('DSC_DIR', '')
CACHE = os.path.expanduser('~/.cache/vince-dsc-syms.pkl')
maps = []


def load_maps():
    for f in sorted(glob.glob(os.path.join(D, 'dyld_shared_cache_arm64*'))):
        with open(f, 'rb') as fh:
            h = fh.read(0x200)
        if not h.startswith(b'dyld_v1'):
            continue
        moff, mcnt = struct.unpack_from('<II', h, 0x10)
        with open(f, 'rb') as fh:
            fh.seek(moff)
            for _ in range(mcnt):
                a, s, o, _mx, _ip = struct.unpack('<QQQII', fh.read(32))
                maps.append((a, s, o, f))


def read(addr, n):
    for a, s, o, f in maps:
        if a <= addr < a + s:
            with open(f, 'rb') as fh:
                fh.seek(o + addr - a)
                return fh.read(min(n, a + s - addr))
    return None


def images():
    with open(os.path.join(D, 'dyld_shared_cache_arm64'), 'rb') as fh:
        h = fh.read(0x200)
        off, cnt = struct.unpack_from('<II', h, 0x18)
        if cnt == 0:
            off, cnt = struct.unpack_from('<II', h, 0x1c0)
        fh.seek(off)
        ents = [struct.unpack('<QQQII', fh.read(32)) for _ in range(cnt)]
        out = []
        for a, _mt, _ino, po, _pad in ents:
            fh.seek(po)
            out.append((a, fh.read(256).split(b'\0')[0].decode()))
    return out


def text_of(base):
    hdr = read(base, 0x8000)
    p = 32
    for _ in range(struct.unpack_from('<I', hdr, 16)[0]):
        cmd, sz = struct.unpack_from('<II', hdr, p)
        if cmd == 0x19 and hdr[p + 8:p + 24].split(b'\0')[0] == b'__TEXT':
            return struct.unpack_from('<QQ', hdr, p + 24)
        p += sz


def symbols():
    if os.path.exists(CACHE):
        return pickle.load(open(CACHE, 'rb'))
    fh = open(os.path.join(D, 'dyld_shared_cache_arm64.symbols'), 'rb')
    lso, _ = struct.unpack_from('<QQ', fh.read(0x200), 0x48)
    fh.seek(lso)
    nlo, nlc, so, ss, _eo, _ec = struct.unpack_from('<6I', fh.read(32))
    fh.seek(lso + nlo)
    nl = fh.read(nlc * 16)
    fh.seek(lso + so)
    strs = fh.read(ss)
    syms = []
    for i in range(nlc):
        sx, ty, _sect, _desc, val = struct.unpack_from('<IBBHQ', nl, i * 16)
        if ty & 0x0e == 0x0e and val:
            syms.append((val, strs[sx:strs.find(b'\0', sx)].decode('latin1')))
    syms.sort()
    os.makedirs(os.path.dirname(CACHE), exist_ok=True)
    pickle.dump(syms, open(CACHE, 'wb'))
    return syms


_syms = None


def at(addr):
    global _syms
    if _syms is None:
        _syms = (symbols(),)
        _syms = (_syms[0], [v for v, _ in _syms[0]])
    s, keys = _syms
    i = bisect.bisect_right(keys, addr) - 1
    return (s[i][1], addr - s[i][0]) if i >= 0 else ('?', 0)


def addr_of(text):
    if re.fullmatch(r'0x[0-9a-fA-F]+', text):
        return int(text, 16)
    for v, n in symbols():
        if n == text:
            return v
    sys.exit(f'no symbol {text}')


def dis(start, n):
    b = read(start, n)
    out = subprocess.run(['llvm-mc', '--disassemble', '-triple=arm64-apple-ios'],
                         input=' '.join('0x%02x' % x for x in b), capture_output=True, text=True).stdout
    pc = start
    for line in out.splitlines():
        t = line.strip()
        if not t or t.startswith('.'):
            continue
        m = re.match(r'(b|bl|b\.\w+|cbz|cbnz|tbz|tbnz|adrp)\s+(.*?)#(-?\d+)', t)
        if m:
            v = int(m.group(3))
            v = ((pc & ~0xfff) + v) if m.group(1) == 'adrp' else pc + v
            t += '   -> ' + hex(v)
            if m.group(1) in ('bl', 'b'):
                name, off = at(v)
                t += f'  {name}' + (f'+{off:#x}' if off else '')
        print(hex(pc), t)
        pc += 4


def calls(target, img):
    for base, path in images():
        if img not in path:
            continue
        va, vs = text_of(base)
        code = read(va, vs)
        for off in range(0, len(code), 4):
            ins = struct.unpack_from('<I', code, off)[0]
            if ins >> 26 in (0x25, 0x05):
                imm = ins & 0x3ffffff
                if imm & (1 << 25):
                    imm -= 1 << 26
                if va + off + imm * 4 == target:
                    name, o = at(va + off)
                    print(hex(va + off), 'bl' if ins >> 26 == 0x25 else 'b', 'in', name, f'+{o:#x}')


def main():
    global D
    if len(sys.argv) < 3:
        sys.exit(__doc__)
    if not D:
        sys.exit('set DSC_DIR to the mounted cryptex dyld directory')
    load_maps()
    cmd, arg = sys.argv[1], sys.argv[2]
    if cmd == 'sym':
        for v, n in symbols():
            if re.search(arg, n):
                print(hex(v), n)
    elif cmd == 'at':
        name, off = at(int(arg, 16))
        print(name, hex(off))
    elif cmd == 'dis':
        dis(addr_of(arg), int(sys.argv[3], 0) if len(sys.argv) > 3 else 256)
    elif cmd == 'calls':
        calls(addr_of(arg), sys.argv[3])
    elif cmd == 'ptr':
        v = struct.unpack('<Q', read(int(arg, 16), 8))[0]
        t = v & 0xFFFFFFFFF
        print(hex(v), '->', hex(t), *at(t))
    elif cmd == 'vt':
        base = addr_of(arg)
        for off in range(0, int(sys.argv[3], 0) if len(sys.argv) > 3 else 0x200, 8):
            v = struct.unpack('<Q', read(base + 0x10 + off, 8))[0] & 0xFFFFFFFFF
            name, o = at(v)
            print(f'{off:#6x} {v:#x} {name}' + (f'+{o:#x}' if o else ''))
    elif cmd == 'str':
        print(read(int(arg, 16), 512).split(b'\0')[0])


if __name__ == '__main__':
    main()
