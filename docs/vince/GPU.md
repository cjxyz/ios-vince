# GPU (Adreno 506): estado y plan

Investigación del 2026-11-10 (repos remotos; las cifras de fps son las que declara cada proyecto).

## Lo que ya tenemos: parche 0181 (upstream ios-vince, en nuestra base `c3c7b7f`)
`bsd/dev/vince_adreno.c` + `vince_gpu_firmware.h` (firmware compilado como arrays C). Desactivado por defecto:
se activa con `adreno=N` (pasos 1..N) o `gpu=1` (los 11). Opciones: `adreno_skip=<máscara>` y `adreno_pause=<ms>`.

| Paso | Qué hace |
|---|---|
| 1–2 | Lee los relojes y GDSC de GCC, y los fusibles de QFPROM |
| 3–4 | Enciende `OXILI_CX_GDSC` y `OXILI_GX_GDSC` y quita el clamp (el GFX LDO queda como lo deja LK) |
| 5 | Relojes OXILI (AHB, GFX3D, GMEM, BIMC, AON, TIMER) y los de crypto para TZ |
| 6 | Llamada TZ `restore_sec_cfg(18,0)`; antes de ella, cualquier acceso a registros de la GPU aborta. Lee `VBIF_VERSION` (0x200d0000) |
| 7 | `a5xx_hw_init` copiado de drm/msm de Linux |
| 8 | Microcódigo `a530_pm4`/`a530_pfp` en PA `0x47800000`, ring de 32 KiB y arranque del ME |
| 9 | `CP_ME_INIT` y un primer `CP_MEM_WRITE` |
| 10 | Zap shader `a506_zap` por TZ PIL 13 (`mem_setup` en `0x95000000`) y `CP_SET_SECURE_MODE 0` |
| 11 | Comando después del zap |

La SMMU de la GPU queda en bypass: las direcciones que ve la GPU son físicas. Todavía no dibuja nada.
Los commits posteriores de upstream (`f2feeae`..`401873c`) añadían `VinceGPU.cpp`, un IOUserClient con la interfaz
msm DRM (GEM_NEW/INFO/CPU_PREP/FINI, GEM_SUBMIT, WAIT_FENCE, SUBMITQUEUE_*) para freedreno. El CI falló solo por
declaraciones (`kvtophys` sin declarar, `pmap_paddr_t` desconocido), no por el diseño.

## Referencias
- **pixellia/ios-casuarina, rama `vince`** (mismo SoC, mismo iOS 16.7.16, mismo 0181 de base). `backboardd` renderiza con
  Mesa 25.0.7 freedreno en la Adreno 506, de unos pocos a ~18 fps.
  - Kernel (0982–0991): 0181 corregido y opcional; carve-out de 4 MiB para el ring y la tabla segura; **pool contiguo de 192 MiB fuera
    de la VM** (sin IOMMU, los buffers tienen que ser físicamente contiguos); `vincecache=1` (mapeos cacheados con mantenimiento
    de caché en el kernel: la relectura baja de 150 a ~30 ms por frame); `vinceplace=1` (render in-place, sin confirmar).
    El firmware se inyecta en el kernel ya compilado con `vince-gpu-fw.py`.
  - Userland: Mesa compilado en CI de macOS; `redwood_drm.c` (sustituto de libdrm: ioctls DRM → IOKit `VinceGPU`);
    `libtopaz-gl.dylib` (EAGLContext/OpenGL ES falso sobre OSMesa, tabla EAGL de iOS 16.7.16); `libtopaz-inject.dylib`
    (parchea vtables de `CA::OGL::GLESContext` con direcciones de la shared cache de 16.7.16); `bbd_wrap.c` (backboardd con
    `DYLD_INSERT_LIBRARIES`).
  - Funcionamiento: sin Metal, CoreAnimation cae a su renderer GL; la GPU dibuja y la CPU relee el frame y lo convierte a 24 bpp.
  - Le falta: Metal, scanout directo desde la GPU, y el pool se agota a los pocos minutos (GL devuelve OOM).
- **joranv1/ios-sailfish** (Pixel 1, Adreno 530, también A5xx): misma arquitectura (`sweet_gpu.c`, `SweetGPU.cpp`, `tools/sweetgl`),
  pero la GPU escala el frame directamente sobre el panel con doble buffer (parche 0164), sin copia por CPU: 20–40 fps.
  Usa SMMU con mapeo identidad (vince no). Parches útiles: 0119–0164.
- HackiOS: origen del enfoque freedreno + EAGL. UniXNU e ios-flame usan Metal→Vulkan sobre Turnip, que **solo soporta A6xx en adelante**:
  no sirve para la A506.

## Plan
1. **Verificar 0181 en nuestro teléfono**: `vince-boot-gpu.img` (sin raíz, `mmcprobe=1 adreno=11 adreno_pause=2000`) y ver hasta qué paso llega.
   ✅ 2026-11-10: los 11 pasos SUCCESS en este teléfono (detalle en PROGRESS.md).
   Ojo: `vince_adreno_init()` solo se ejecuta tras inicializar `vince_mmc` (`rd=mmcroot0` o `mmcprobe=1`), porque la llama `vince_input_start()`.
2. **Fase A — kernel** (parche 0183 `vince-gpu-service`, 2026-11-10):
   - `vince_adreno.c` = el de casuarina 0982 (nuestro 0181 + exportaciones `vince_gpu_ready/parameter/submit/done/last`,
     **corrección del ring**, que antes no daba la vuelta (`rb_wptr++`), y un hilo propio que arranca 3 s después de
     `vince_input_start`). Conserva nuestro firmware compilado. Tras el paso 11 llama a `VinceGPUStart()`.
   - `VinceGPU.cpp` = casuarina 0982/0984/0986–0988/0991: servicio IOKit `VinceGPU` + `VinceGPUUserClient` con la interfaz msm DRM
     (selectores 0x09, 0x40–0x4c), self-test (`adreno_test=1`), buffers contiguos, **pool de 192 MiB** en `0xec000000–0xf8000000`
     y `vincecache=1` (mapeos cacheados con `FlushPoC_DcacheRegion`). Sin `vinceplace` (0989/0990), que queda para la fase E.
   - `tools/mkadt_vince.py`: la RAM de XNU pasa de `0x58000000` a `0x4c000000` (`0xa0000000–0xebf00000` + panic log hasta
     `0xec000000`), para que el pool sea RAM que XNU nunca gestiona (casuarina recortaba `memSize` en `arm_vm_init.c` con el
     mismo efecto). `verify_adt_vince.py` comprueba que no se solapan.
   - Licencias: los parches de kernel derivados de HackiOS son APSL 2.0 (como XNU) y el userland es MIT (CREDITS.md de casuarina).
   - ✅ 2026-11-10: self-test 4/4 en el teléfono, tras 0186 (el contador de fences en `scratch+0x20` sobrevivía al reinicio en caliente).
3. **Portar el stack de casuarina** (kernel 0982–0988 + userland Mesa/EAGL/inject) sobre nuestro árbol. Puntos a resolver:
   - encajarlo con nuestro `SweetFramebuffer`/`SweetSurface` (0046);
   - el mapa de RAM: casuarina usa XNU en `0x20000000–0x7fffffff` con el pool arriba; nosotros, XNU en `0xA0000000` y 0181 en `0x47800000`/`0x95000000`;
   - el firmware fuera del árbol si es posible, y Mesa compilado en CI de macOS.
3. **Presentación sin copia por CPU** (sailfish 0164 / casuarina 0989–0990): la GPU escribe en el framebuffer de scanout.
   En vince, el formato empaquetado de 24 bpp y la falta de un driver MDP lo complican.

Riesgos: sin IOMMU, buffers contiguos y pool limitado; la GPU no hace snoop de las cachés de la CPU; licencia del firmware;
vtables atadas a esta build exacta de iOS; sin Metal no hay apps solo-Metal; los pasos 6 y 10 dependen de TrustZone.
