# Credits and licences

## Lineage
- **ios-sweet** (dipa-studio): the XNU port this tree is built on (xnu-8796 patches, shim, root image tools).
- **ios-vince** (arabaci0711-ux): the Redmi 5 Plus port this fork continues (patches 0090–0181).
- **ios-casuarina** (pixellia, branch `vince`): the Adreno 506 GPU stack ported in patch 0183 and `userland/mesa`, `userland/gpu`.
- **blacktop/darwin-xnu-build**: the XNU build scripts used by CI.
- **Mesa / freedreno**: the OpenGL ES driver for the Adreno, downloaded at build time (MIT).

## HackiOS (OOSEX GANG)
ios-casuarina's GPU work started from HackiOS, which boots XNU and the iOS user space on the POCO X5 Pro:

- kernel: <https://github.com/oosexgang/hackios-xnu-kernel>, Apple Public Source License 2.0.
  `iokit/Kernel/arm/VinceGPU.cpp` (patch 0183) descends from its `RedwoodGPU.cpp` and is APSL 2.0, like XNU.
- user space: <https://github.com/oosexgang/hackios-xnu-userland>, MIT License, Copyright (c) 2026 OOSEX GANG.
  `userland/mesa/*` (the freedreno Darwin patches, `redwood-drm`, the build script) and `userland/gpu/gputest.c` derive from it:

```
MIT License

Copyright (c) 2026 OOSEX GANG

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
```

## Firmware
`bsd/dev/vince_gpu_firmware.h` (from upstream patch 0181) holds Qualcomm's Adreno microcode and zap shader as C arrays,
as upstream ios-vince published them. ios-casuarina keeps them out of its tree instead.

## Not in this repository
Apple's iOS firmware (IPSW, device tree) is downloaded and converted locally and never committed.
