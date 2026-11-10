#!/usr/bin/env python3
# Usage: slots_from_dylib.py OpenGLES.dis > eagl_slots.txt   (llvm-objdump --macho -d --no-show-raw-insn OpenGLES)
import re,sys
cur=None; fn={}
for line in open(sys.argv[1]):
    m=re.match(r'^(_gl\w+):',line)
    if m: cur=m.group(1); fn[cur]=[]; continue
    if re.match(r'^\S.*:$',line): cur=None; continue
    if cur and re.match(r'^[0-9a-f]+:',line): fn[cur].append(line.split(':',1)[1].strip())
for f,ins in sorted(fn.items()):
    base=None; off=None
    for i in ins:
        m=re.match(r'ldr\t(x\d+), \[(x\d+), #0xf0\]',i)
        if m and base is None:
            base=m.group(1); continue
        if base:
            m=re.match(r'ldr\t(x\d+), \[%s(?:, #(0x[0-9a-f]+))?\]'%base,i)
            if m and m.group(1)!='x0' and m.group(2) and int(m.group(2),16)!=0x20:
                off=int(m.group(2),16); break
    print("%#x %s"%(off,f[1:]) if off is not None else "?? %s"%f[1:])
