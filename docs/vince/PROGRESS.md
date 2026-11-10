# Progreso

## Estado
| Etapa | Estado | Notas |
|---|---|---|
| Fork y documentación | ✅ | 2026-11-10 |
| CI del kernel en verde (este fork) | ✅ | Run 42761468387, macos-15 + Xcode 16.0, 9m35s, `kernel.development.vince` de 17 MB |
| Auditoría DTS stock ↔ parches | ✅ | `tools/audit_vince_hw.py`: solo falta el watchdog, que LK deja apagado |
| Shim + texto en pantalla | ✅ | MMU 4K, GICv2 y timer virtual OK en el teléfono |
| XNU 1 núcleo (GICv2 + timer) | ✅ | Kernel completo hasta `Waiting on ... Apple_HFS` (sin root) |
| Root en eMMC → launchd | ✅ | launchd pasa las tareas de arranque y lanza LaunchDaemons |
| Emulación LSE/LDAPR | ⏸ no hace falta por ahora | dyld, launchd, daemons y SpringBoard corren en el A53 sin ella |
| SMP 8 núcleos | ✅ 7 de 8 | `cpus=7` arranca y va más fluido; falta CPU1 |
| SpringBoard / lock screen | ✅ | **Pantalla de bloqueo de iOS 16.7.16 en el Redmi 5 Plus** (2026-11-10) |
| Touch TD4310 + teclas | ✅ | Touch y botones power/volumen funcionan |
| Retroiluminación (WLED) | ✅ | 0182: se apaga al bloquear y vuelve al desbloquear |
| Rendimiento | 🟡 en curso | Framebuffer a 10 Hz por defecto; CPU a 1,4 GHz (sin CPR); sin GPU |
| USB ECM / log por red | ⏳ | |
| Wi‑Fi / BT | ⏳ | parches 0119–0179 de upstream |
| GPU Adreno 506 | 🟡 hardware OK | 0181: los 11 pasos SUCCESS en este teléfono; falta la parte de iOS (plan en [GPU.md](GPU.md)) |

## Pendientes conocidos
1. **CI de HEAD roto en upstream**: decidido partir de `c3c7b7f` (rama `vince-port`). Los commits VinceGPU posteriores (`f2feeae`..`401873c`) quedan fuera por ahora.
2. **LSE/LDAPR/CAS**: no hay emulación en `xnu/patches` (no aparecen `handle_uncategorized`, `ldadd` ni `casal`).
3. ~~Watchdog `0xB017000`~~: LK lo deja desactivado (comprobado en el teléfono el 2026-11-10). No hace falta tocarlo en el shim.
4. ~~Rutas rotas en `shim/build.py` y las tools~~: corregidas el 2026-11-10.
5. ~~Falta tooling de la imagen raíz~~: `tools/mkroot_vince.sh` + `mkiosroot.sh`/`sweet-root-tweaks.py` de ios-sweet (2026-11-10).
6. **Alimentación del touch**: comprobar si LK deja L10/L6 encendidos.

## Bitácora
Formato: fecha · qué se probó · resultado · evidencia (log/foto) · siguiente paso.

### 2026-11-10
- Fork `cjxyz/ios-vince` creado desde `arabaci0711-ux/ios-vince` (HEAD `401873c`). Remoto `upstream` configurado.
- Revisado el repo: 177 entradas en `xnu/patches` (sweet 0001–0081 + vince 0090–0181); workflows `xnu-vince` y `userland`; shim C/ASM; tools ADT, payload y bootimg.
- Hardware del kernel stock documentado en [HARDWARE.md](HARDWARE.md). Concuerda con upstream en GICv2 (`0x0B000000`/`0x0B002000`), timer INTID 20, eMMC `0x7824900`, touch @0x20 en I2C-3 y GPIO 64/65.
- Decisión: la rama de trabajo `vince-port` parte de `c3c7b7f`, el último build verde de upstream. `main` del fork sigue igual que upstream.
- Identidad git del repo: `cjxyz <cjxyz776@gmail.com>`.
- Primer CI en el fork cancelado: GitHub retiró el runner `macos-14` ("configuration 'macos-14-arm64-us-default' is not supported"). Workflows pasados a `macos-15`. Riesgo: el Xcode más antiguo de esa imagen debe generar un `iig` compatible con la ABI IORPC de xnu-8796.
- CI relanzado en `macos-15` (run 42761468387).
- `tools/audit_vince_hw.py` (auditoría DTS stock ↔ repo): coinciden GICD/GICC, eMMC SDHCI y core, QUP3, SPMI, cont_splash y GPIO 64/65/85. **Falta**: watchdog `0xB017000`. No aparecen ni la UART `0x78AF000` ni WCNSS `0x0A000000` (sin uso directo por ahora).
- **CI verde** (run 42761468387): macos-15, Xcode 16.0, 9m35s. Artefacto `kernel.development.vince` (Mach-O arm64, 17 765 336 B), descargado en `out/kernel/` (ignorado por git).
  - Se aplican 137 parches; **se saltan 45 "opcionales"**: sweet 0031, 0033, 0035–0036, 0038, 0040, 0043–0047, 0050–0051, 0053–0056, 0058–0081, más los de dxb TrustCache, iobuffermemd_monterey, skywalk_sonoma y syntax_checker_sonoma. Los logs de upstream caducaron y no se pueden comparar.
  - Aun así, el binario contiene los símbolos de esas funciones (IOMobileFramebuffer, AppleKeyStore, `sweet_amfi`, SweetWatchdog, IOHIDEventService) y los drivers vince (`vince_mmc`, `mmcroot`, `vincetouch`, `vincekeys`, `vincesmd`, VinceWLANController, `vince_bt_*`, `vince_vtimer_intid`). Los parches vince ya incluyen ese contenido (verificado más abajo).
  - Pendiente: desensamblar el kernel buscando LSE/LDAPR/PAC (no hay `llvm-objdump` en WSL; instalar LLVM, que además hace falta para el shim).
- Siguiente paso: luego decidir entre desactivar el watchdog en el shim o portar la emulación LSE.
- Rutas corregidas: `shim/build.py` usa `shim/` y `build/shim/` del propio repo; las tools importan `adt` desde `tools/`.
- **Bug corregido en `shim/build.py`**: metía `vince.adt` como ramdisk, pero `shim/loader.c` busca allí el payload `VINCEXNU`. Ahora el ramdisk es `artifacts/vince.payload`, y `--payload`/`--dtb` son configurables.
- Generados en local desde el kernel del CI: `vince.adt` (10 804 B, pasa `verify_adt_vince.py`) y `vince.payload` (17 170 960 B; entry `0xfffffff007480700`, phys_base `0xa0000000`, mem_size `0x57f00000`).
- LLVM instalado por el usuario (clang 21.1.8). El shim compila: `vince-shim.bin` de 147 456 B, con cabecera Image arm64 (`ARM\x64` en 0x38) y `_end` en 0x2c para el DTB_OFFSET de LK.
- **Kernel sin LSE/LDAPR/PAC**: en el desensamblado con `llvm-objdump` solo aparece un `ldumaxah` dentro de `K256` (constantes de SHA-256, datos). El kernel corre en un A53; la emulación sigue haciendo falta para el userland.
- DTB sin root: `tools/mkdtb_vince.sh` compila `dtc` desde `vince-stock/scripts/dtc` y genera `stock_vince.dtb` (358 630 B, msm-id 0x125, board-id 0x1000b/0x8). Es reproducible byte a byte.
- Imagen de diagnóstico lista: `artifacts/vince-boot-diag.img` (shim + DTB stock, sin ramdisk). SHA256 `c91545eb…`.
- Siguiente paso: primera prueba en el teléfono (`fastboot boot artifacts/vince-boot-diag.img`). Lo esperado: fondo azul marino con PROJECT/DEVICE/CPU/FDT, MMU, GIC y TIMER, y luego `LOADER: no initrd in /chosen`. Watchdog: si reinicia a los ~11 s, LK lo dejó activo.
- **Parches saltados verificados** contra el árbol parcheado del CI (artefacto `xnu-buildtree`), comprobando si las líneas que añade cada parche existen ya en el código:
  - 11 aplican al revés limpiamente (su contenido está tal cual): 0036, 0044, 0045, 0063, 0064, 0066, 0068, 0069, 0074, 0076 y 0081.
  - La mayoría tiene entre el 90 y el 100 % de sus líneas presentes: se integraron en parches posteriores y luego evolucionaron.
  - Por debajo del 90 %: 0031, 0059, 0070 y 0071. Las líneas que faltan son guardas `ARM64_BOARD_CONFIG_SWEET` que en el árbol son `SWEET || VINCE`, y en 0071 el borde del touch, ya adaptado a vince (`fMinX/fMaxX`, `SWEET_TOUCH_PANEL_H`).
  - 0065 y 0078 (SMP de sweet, GICv3, 6+2 núcleos) están sustituidos por el SMP PSCI/GICv2 de vince en `osfmk/arm64/cpu.c` (bloques `VINCE`, parches 0101–0112).
  - Los 4 de dxb (TrustCache, iobuffermemd_monterey, skywalk_sonoma, syntax_checker_sonoma) son de otras versiones de macOS y no aplican a xnu-8796.
  - Conclusión: **no se pierde funcionalidad**. Mejora posible: que el workflow use una lista explícita de parches saltados esperados y falle ante cualquier otro.
- **Primera prueba en el teléfono** (`fastboot boot vince-boot-diag.img`, SHA256 `c91545eb…`):
  - LK acepta el boot.img v0 con el DTB stock anexado y entrega el control al shim en AArch64.
  - El framebuffer de splash funciona: fondo azul y líneas PROJECT, DEVICE, CPU y `FDT 0x0000000013400000`.
  - **Se detiene antes de la línea MMU.** Causa probable: LK ignora las direcciones de la cabecera (`0x80008000`) y carga el shim cerca de `0x10080000`, con el DTB en `0x13400000` (y, según ios-casuarina, el ramdisk en `0x13600000`). `shim/mmu.c` mapeaba todo el GB 0 como Device + PXN, así que tras activar la MMU la siguiente instrucción (y los vectores) abortan en bucle, sin llegar al panic rojo.
  - Arreglo: `map_normal()` remapea como WB ejecutable los bloques de 2 MB del shim, del DTB (`totalsize`) y del initrd de `/chosen`. El shim muestra además `IMAGE` (dirección real de `_head`, calculada con `adr`). Nueva imagen: `vince-boot-diag.img`, SHA256 `b45d8cf9…`.
  - **Watchdog: LK no lo deja activo.** Con el shim colgado, la pantalla siguió fija sin reinicio (el bark está a 11 s y nadie lo atendía).
- **Segunda prueba (`b45d8cf9…`): diagnóstico completo.** `IMAGE 0x10080000` confirma la dirección de carga de LK; `MMU`, `GIC` y `TIMER` OK; `LOADER: no initrd in /chosen` (esperado, sin ramdisk) y `READY Shim diagnostics PASS! Halting.`
- Siguiente imagen: `artifacts/vince-boot-xnu.img` (17 686 528 B, SHA256 `53701240…`) = shim + DTB stock + payload (kernel del CI + ADT). Cmdline por defecto de `mkpayload_vince.py`: `debug=0xc serial=3 cpus=1 keepsyms=1 -enable_kprintf_spam -noprogress wdt=-1 wdt_test=no_user_checkin sweettouch=0 sweetkeys=0`. No hay root, así que lo esperado en el mejor caso es el log de XNU en pantalla hasta esperar al dispositivo raíz.
- **Primer salto a XNU** (`vince-boot-xnu.img` `53701240…`): `LOADER: Copying kernel segments...`, `ENTRY 0xA1480700`, `BOOTARG 0xA296F000`, `HANDOVER ... entering XNU`, y **el teléfono reinicia a Android**. No aparece ninguna fila de la consola temprana de XNU (`sweet_early.c`, que limpia una fila en negro en `0x90001000`), así que muere antes de `arm_init`.
  - Descubierto en `0113-vince-shim-halt`: el shim real de upstream tenía un monitor USB en CPU1 y compartía con XNU la página `0x913F0000` (marcas SMP y palabra HALT). El shim del repo es una versión reducida sin eso.
  - Hipótesis principal: la ventana de RAM de XNU (`0xA0000000` + `0x57F00000`) se calculó con el `/proc/iomem` de un teléfono de 4 GB. Si esta unidad tiene otra RAM o otro mapa, XNU toca memoria inexistente o protegida y Qualcomm reinicia.
  - Nuevos diagnósticos en el shim: (1) `PREV XNU`/`PREV REG` muestran las marcas que deja `start.s` en `0x913F0800`/`0x913F0C00` (0x13 = `start_first_cpu`, 0x14 = antes de activar la MMU) y luego las borra; (2) `DRAM` lista el nodo `/memory` que rellena LK; (3) el loader no salta si la ventana de XNU no está dentro de la DRAM. Imágenes nuevas: `vince-boot-xnu.img` `33aeb896…` y `vince-boot-diag.img`.
- **Segundo salto a XNU** (`vince-boot-xnu.img` `33aeb896…`, con la comprobación de RAM): **XNU arranca y escribe en pantalla**, pero entra en un bucle infinito imprimiendo `unexpected .../iokit/Kernel/IODeviceTreeSupport.cpp:579`. La comprobación de RAM pasó (si no, el shim no habría saltado). No se sabe por qué el primer intento reinició y este no; si vuelve a pasar, usar la imagen de diagnóstico para leer `PREV XNU`.
  - Causa: en el ADT, `sdhci` y `touchscreen` tenían `interrupts` sin `interrupt-parent`. `IODTFindInterruptParent` usa entonces `arm-io`, que no es controlador ni tiene `interrupt-map`; `IODTGetICellCounts` avisa de que falta `#interrupt-cells` (línea 579) y el `do { … } while (parent)` de `IODTMapOneInterrupt` repite `regEntry = parent` con el mismo `arm-io` para siempre.
  - Arreglo: quitar `interrupts` de esos dos nodos en `tools/mkadt_vince.py`; ningún driver vince los usa (eMMC por PIO sin interrupciones, touch por sondeo). Nueva imagen `vince-boot-xnu.img` `470dafb5…`.
- **Tercer salto a XNU** (`470dafb5…`): **el kernel arranca completo** y se detiene en `Waiting on <dict>IOProviderClass=IOMedia, Content=Apple_HFS</dict>`. Es lo esperado: el cmdline no tiene `rd=` y `userdata` no tiene raíz iOS. En el log aparecen:
  - `VINCE RTC: no valid stored offset` (arranca con la hora del build).
  - AMFI y Sandbox de sweet cargados como políticas permisivas; `SWEET HFS: hfs-627.100.6 registered`.
  - mbinit 64 MB; self-tests de DLIL/Skywalk PASSED; `lo0`, `gif0` y `stf0` creados.
  - `SWEET FB: AppleCLCD 1080x2160 stride 4500 at 0x90001000 ... presented as 1125x2436`, escalado a 1080x2160 con x=40.
  - `SWEET CPU: 1 CPUs, ... MHz 1401`.
  - `SWEET BATTERY: PM6150 / estimated SOC 15%, 3435mV, external=1` (la etiqueta PM6150 viene de sweet, pero la lectura es plausible).
- Siguiente etapa: imagen raíz iOS en `userdata` y arranque con `rd=mmcroot0 mmcroot=userdata`.
- Decisiones del usuario: se puede borrar `userdata` (no importan los datos de Android); la unidad es de **4 GB de RAM**, igual que la de upstream, así que la ventana `0xA0000000`+1,4 GB es coherente.
- Etapa raíz preparada: IPSW iOS 16.7.16 en descarga; `tools/mkroot_vince.sh` (proceso completo); `vince-boot-root.img` (`61b631e3…`) con `rd=mmcroot0 mmcroot=userdata mmcrw=1 rootrw=1`. Falta: instalar dependencias (sudo) y compilar `apfs-fuse`.
- `apfs-fuse` compilado por el usuario (con `CMAKE_POLICY_VERSION_MINIMUM=3.5` y `-include cstdint` para CMake 4/GCC 15).
- **Bloqueo**: el kernel WSL2 6.18.54.1 no tiene HFS+, así que `mkiosroot.sh` no puede montar la imagen. Nuevo `tools/wsl-hfsplus.sh`: compila `hfsplus.ko` desde la etiqueta `linux-msft-wsl-6.18.54.1` de Microsoft y lo carga con `insmod` (MODVERSIONS sin `Module.symvers`; plan B: compilar `vmlinux`).
- IPSW descargado y verificado (SHA256 `ece1194f…` OK). Imágenes extraídas a `../rootwork`: OS `087-86698-044.dmg`, SystemOS `087-86593-047.dmg` y AppOS `087-86715-047.dmg`.
- **`hfsplus.ko` cargado en WSL2** al tercer intento. (1) Sin `pahole`, `olddefconfig` quitaba `DEBUG_INFO_BTF_MODULES` y `struct module` medía `0x4c0` en vez de `0x500` (comparado con `zsmalloc.ko` de Microsoft y con `pahole -C module /sys/kernel/btf/vmlinux`). (2) Ya con BTF, los `.o` del primer intento solo se volvían a enlazar; ahora el script hace `make M=fs/hfsplus clean`. Los avisos de modpost por falta de `Module.symvers` son inofensivos.
- **Imagen raíz construida**: `../rootwork/ios16-root.img` (HFS+ sin journal, sensible a mayúsculas, 16 GB, 12 GB usados) y `ios16-root.simg` (12 145 443 072 B). `fsck.hfsplus -n`: "The volume iOSRoot appears to be OK".
  - `mkiosroot.sh` falló tras copiar con `install: invalid user: '272'` (uutils coreutils de Ubuntu 26.04). Se corrigió el script y se reanudó a mano (logd + keybag) sin repetir la copia; `mkroot_vince.sh` se salta `mkiosroot.sh` si la imagen ya existe.
  - `sweet-root-tweaks.py`: 7 `_PanicOnCrash` renombrados, 2 jobs de CommCenter quitados, containers creados, VirtualAudio desactivado, StartRecorderServer off (D22, D221, Default), Setup saltado. Aviso: "no mobileactivationd system container in the image; skipped data ark". Según sweet, el estado activado sale de las propiedades `/chosen` de seguridad del ADT, que `mkadt_vince.py` define.
- Siguiente paso: `fastboot -S 512M flash userdata ios16-root.simg` y arrancar `vince-boot-root.img`.
- `userdata` flasheado con `ios16-root.simg` (`-S 512M` falló en el bloque 9: `max-download-size` es `0x1fe00000`; repetido con un bloque menor). El último `Writing` tarda bastante, pero termina.
- **Primer arranque con raíz iOS** (`vince-boot-root.img` `61b631e3…`): XNU monta la raíz desde la eMMC y ejecuta userland de iOS. Panic: `launchd_cache_loader[22] exited -- exit reason namespace 7 subcode 0x1 description: Unable to find AMFI`, `iBoot version: vince-shim`, `secure boot?: NO`. Causa: faltaban los boot-args de userland de ios-sweet (`launchd_unsecure_cache=1`, `ignition_level=1`, `unentitled_ios_sim_launch=1`). Hecho relevante: **dyld y launchd del iPhone X arrancan en el Cortex-A53**, así que al menos esa parte del userland no tropieza con LSE.
- Nueva `vince-boot-root.img` con esos boot-args.
- **Segundo arranque con raíz** (`vince-boot-root.img` `df420217…`, con los boot-args de userland): sin panic. launchd lanza los daemons y **SpringBoard llega a ejecutarse** (pid 346), pero se cae: `crashed: Too many corpses`, igual que sweet en su boot 0041u. El sistema sigue imprimiendo logs. Pendiente: ver si se estabiliza en los 4-5 min que sweet tardaba en el primer arranque y capturar el motivo real del crash.
- **Motivo del crash de SpringBoard** (foto del log): `*** Assertion failure in ... _loadBitmapForScreen:type:`, luego `Terminating app due to uncaught exception 'NSInternalInconsistencyException', reason: 'Failed to load bitmap data from the asset manager for asset name: ap-1125x2436-375x812-3.00x'`. Visto también: bluetoothd cae con sig 11 y aparece `Too many corpses being created`.
  - Causa: `mkadt_vince.py` copia el `/product` del iPhone X desde `research/ipsw-x/d22ap.adt`, que no estaba en el repo, y caía en un `/product` mínimo de 4 propiedades sin artwork traits (`artwork-device-subtype` 2436, `artwork-scale-factor` 3, `artwork-display-gamut` P3, `artwork-device-idiom` phone…), con los que UIKit elige ese asset.
  - Arreglo: extraer `Firmware/all_flash/DeviceTree.d22ap.im4p` del IPSW, descomprimirlo (LZFSE; CLI `lzfse` compilado desde las fuentes de apfs-fuse) y guardarlo en `research/ipsw-x/d22ap.adt` (no versionado). El ADT pasa a 13 124 B con `/product` de 63 propiedades. Nueva `vince-boot-root.img` `8ffe46e5…`.
- **Tercer arranque con raíz** (ADT con `/product` real): bucle de errores HFS, `hfs: BlockMarkFreeInternal() trying to free unallocated blocks on volume iOSRoot <3063196, 7>` y `hfs_mark_inconsistent: Runtime corruption detected on iOSRoot, fsck will be forced on next mount`, cada vez que `accountsd` y otros intentan liberar bloques. No se ve el resultado del cambio de ADT.
  - Causa: raíz HFS+ **sin journal** montada en escritura y dos arranques terminados sin desmontar (panic de launchd y apagado forzado). Al crearla, `fsck` estaba limpio. Upstream vince documenta lo mismo en 0113 ("left it dirty and, twice, corrupt") y lo evitaba con un halt limpio desde el monitor USB de su shim, que este repo no tiene.
  - Decisión: volver al HFS+ **con journal** de sweet (`mkfs.hfsplus -J`). `vince_mmc` atiende `DKIOCSYNCHRONIZE` y escribe de forma síncrona. Hay que reconstruir la imagen y volver a flashear.
- Imagen raíz reconstruida **con journal** (`mkfs.hfsplus -J`, journal de 8 MB). Detalle: en un volumen con journal montado por Linux (`lastMountedVersion H+Lx`), `fsck.hfsplus -n` informa siempre de "Volume header needs minor repair" (debug: `invalid primary VHB at 2 result 35`), mientras `-y` no cambia nada y dice "appears to be OK". La verificación pasa a usar `-y`. Nueva `ios16-root.simg` generada.
- 🎉 **PANTALLA DE BLOQUEO.** Con la raíz con journal y el `/product` real del iPhone X (`vince-boot-root.img` `8ffe46e5…`), iOS llega a la pantalla de bloqueo. El texto del kernel sigue dibujándose encima. Nueva imagen con `sweetfb_noconsole=1`. Touch (`vincetouch`) y teclas (`vincekeys`) de vince están activos por defecto: pendiente de confirmar si responden.
- Con `sweetfb_noconsole=1` (`b9aaaed9…`): **el touch responde** en la pantalla de bloqueo, pero todo va muy lento (1 núcleo, render por CPU, primer arranque).
- SMP: `SweetCPU.cpp` arranca los núcleos de los nodos `/cpus` del ADT por PSCI `CPU_ON`. `mkadt_vince.py` declara 0 y 2–7 (CPU1 la usaba el monitor USB del shim de upstream; nuestro shim la deja aparcada en `wfe`, así que se podría añadir después). Nueva imagen `vince-boot-smp.img` con `cpus=7`; la de 1 núcleo se conserva como respaldo.
- **`vince-boot-smp.img` (`cpus=7`) arranca hasta la pantalla de bloqueo y va más fluido.** Con esto, iOS 16.7.16 corre en el Redmi 5 Plus con 7 núcleos, touch, raíz HFS+ con journal en la eMMC y consola silenciosa.
- Hasta ahora nada ha fallado por instrucciones LSE/LDAPR: la emulación queda en espera hasta que algún proceso caiga con `EXC_BAD_INSTRUCTION`.
- Botones: **power y volumen funcionan**. Al bloquear, la pantalla queda negra pero con la retroiluminación encendida: `SweetFramebuffer` solo funde a negro (pensado para el AMOLED de sweet) y en el LCD del vince la luz la da la WLED del PMI8950 (SID 3, `0xd800`).
- **Parche 0182 `vince-wled-backlight`**: `vince_pmic_write()` (escritura SPMI genérica por el canal propio de las aplicaciones, con la misma comprobación EE 0 que la escritura del RTC y canales cacheados) y `vince_wled_set()`, que cambia solo el bit 7 de `MODULE_EN` (`0xd846`), como `qpnp_wled_module_en()` en Linux. `SweetFramebuffer` lo llama en cada `RequestPowerChange`. Aplica limpio sobre el árbol del CI (`patch --dry-run`).
- CI del 0182: el run en `macos-15` se quedó en cola más de 8 min por falta de capacidad. Nueva entrada `runner` en el workflow; relanzado con `-f runner=macos-15-intel` (run 42844953204): empezó al instante y quedó **verde en 13 min**, 0182 aplicado, los mismos 45 parches saltados. El kernel contiene `VINCE WLED` y sigue sin LSE/PAC (solo el `ldumaxah` de los datos de `K256`). Nueva `vince-boot-smp.img` (`819a024c…`, `cpus=7`).
- **0182 probado en el teléfono** (`vince-boot-smp.img` `819a024c…`): al bloquear con power, la pantalla queda negra y **sin retroiluminación**. La escritura SPMI por el canal de las aplicaciones funciona: la WLED del PMI8950 (PPID 0x3d8) pertenece a EE 0.
- Retroiluminación: vuelve a encenderse al pulsar power. 0182 completo.
- **Análisis de lentitud**:
  1. `SweetFramebuffer` refresca el panel a **10 Hz** por defecto (`sweetfb_hz`, "copying 10 MB on every swap took the whole CPU"), así que el touch parece retrasado aunque iOS dibuje más rápido. Sweet usaba 30. Cada flush escala 1125x2436→1080x2160 y convierte 32→24 bpp ("about 9 MB read, 7 MB written; a few ms").
  2. CPU a **1401,6 MHz**: `vince_cpu_clock_init` (SweetCPU.cpp) arranca el PLL A53 con L=73 a la tensión por defecto de VDD_APC. Pasar de ~1,4 GHz exige control de tensión CPR, que no está implementado ("The A53 PLL for more than 800 MHz… needs CPR voltage control").
  3. CPU1 sin usar (7/8 núcleos).
  4. Sin GPU: CoreAnimation renderiza por CPU.
- Prueba rápida, solo boot-args: `vince-boot-hz30.img` (`08d957de…`) y `vince-boot-hz60.img` (`73a0580b…`), iguales a smp con `sweetfb_hz=30/60`.
- **GPU**: investigación en [GPU.md](GPU.md). 0181 (en nuestra base) despierta la A506 hasta ejecutar comandos y cargar el zap, pero está desactivado por defecto (`adreno=N`/`gpu=1`). ios-casuarina (rama `vince`) ya renderiza backboardd con Mesa freedreno sobre ese mismo 0181 (~18 fps). Plan: verificar 0181 en este teléfono y portar su stack. Imagen de prueba `vince-boot-gpu.img` (`6b017329…`, sin raíz, `adreno=11 adreno_pause=2000`).
- Primera prueba de `vince-boot-gpu.img` (`6b017329…`): no aparece ninguna línea `VINCE ADRENO`. `vince_adreno_init()` se llama desde `vince_input_start()`, y esta al final de la inicialización de `vince_mmc`, que solo ocurre con `rd=mmcroot0` o `mmcprobe=1`. Nueva imagen con `mmcprobe=1` (eMMC solo lectura, sin montar raíz).
- **0181 verificado en el teléfono** (`vince-boot-gpu.img` `9dd990da…`, `mmcprobe=1 adreno=11 adreno_pause=2000`): **los 11 pasos SUCCESS**.
  - Relojes: `AHB=0x20008001`, `GFX=0x4f01`, `CFG=0x507`.
  - `restore_sec_cfg(18,0) -> ret=0`; `VBIF_VER=0x200d0000`.
  - PM4 (19 652 B) y PFP (16 820 B) cargados, ring en PA `0x47800000`, `ME running`, `CP_HW_FAULT=0`.
  - Paso 9: `CP_MEM_WRITE -> 0xc0ffee01`, RPTR=13.
  - Paso 10: tabla segura de `0x21000` en `0x47900000`, `mem_setup(0x95000000, 0x2000)`, `auth_and_reset` correcto, "GPU out of secure mode".
  - Paso 11: `CP_MEM_WRITE -> 0xc0ffee02`, RPTR=19, "Adreno 506 command processor is up (ring at PA 0x47820000)".
  - Después, el touch se inicializa con normalidad (RMI4 F12, 4 dedos).
- **Fase A de GPU**: parche 0183 `vince-gpu-service` (servicio IOKit `VinceGPU` con la interfaz msm DRM, pool de 192 MiB, self-test) y ADT con la RAM de XNU reducida a `0x4bf00000` + panic log, para que el pool `0xec000000–0xf8000000` quede fuera. Detalle en [GPU.md](GPU.md). Aplica limpio (`git apply --check`); CI pendiente.
