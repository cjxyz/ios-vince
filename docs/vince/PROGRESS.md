# Progreso

## Estado
| Etapa | Estado | Notas |
|---|---|---|
| Fork y documentación | ✅ | 2026-11-10 |
| CI del kernel en verde (este fork) | ✅ | Run 42761468387, macos-15 + Xcode 16.0, 9m35s, `kernel.development.vince` de 17 MB |
| Auditoría DTS stock ↔ parches | ✅ | `tools/audit_vince_hw.py`: solo falta el watchdog |
| Shim + texto en pantalla | 🟡 parcial | LK acepta la imagen y el shim pinta la pantalla; se colgaba al activar la MMU (arreglo pendiente de probar) |
| XNU 1 núcleo (GICv2 + timer) | ⏳ | |
| Root en eMMC → launchd | ⏳ | |
| Emulación LSE/LDAPR | ❌ falta | Upstream no la tiene; candidato: portar topaz 0081 |
| SMP 8 núcleos | ⏳ | |
| SpringBoard / lock screen | ⏳ | |
| Touch TD4310 + teclas | ⏳ | 0099 no vota reguladores RPM (L10/L6) |
| USB ECM / log por red | ⏳ | |
| Wi‑Fi / BT | ⏳ | parches 0119–0179 de upstream |
| GPU Adreno 506 | ⏳ | 0181 de upstream; ios-casuarina como referencia |

## Pendientes conocidos
1. **CI de HEAD roto en upstream**: decidido partir de `c3c7b7f` (rama `vince-port`). Los commits VinceGPU posteriores (`f2feeae`..`401873c`) quedan fuera por ahora.
2. **LSE/LDAPR/CAS**: no hay emulación en `xnu/patches` (no aparecen `handle_uncategorized`, `ldadd` ni `casal`).
3. **Watchdog `0xB017000`**: el shim no lo desactiva; solo `tools/mkadt_vince.py` crea un nodo ADT `no-pmu`.
4. ~~Rutas rotas en `shim/build.py` y las tools~~: corregidas el 2026-11-10.
5. **Falta tooling de la imagen raíz** (`mkiosroot.sh`).
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
  - Watchdog: pendiente de saber si el teléfono se reinició solo.
