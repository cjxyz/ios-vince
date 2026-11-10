# Progreso

## Estado
| Etapa | Estado | Notas |
|---|---|---|
| Fork y documentación | ✅ | 2026-11-10 |
| CI del kernel en verde (este fork) | ✅ | Run 42761468387, macos-15 + Xcode 16.0, 9m35s, `kernel.development.vince` de 17 MB |
| Auditoría DTS stock ↔ parches | ✅ | `tools/audit_vince_hw.py`: solo falta el watchdog |
| Shim + texto en pantalla | ⏳ | |
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
4. **Rutas rotas** en `shim/build.py` y `tools/mkpayload_vince.py` (ver [BUILD.md](BUILD.md)).
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
  - Aun así, el binario contiene los símbolos de esas funciones (IOMobileFramebuffer, AppleKeyStore, `sweet_amfi`, SweetWatchdog, IOHIDEventService) y los drivers vince (`vince_mmc`, `mmcroot`, `vincetouch`, `vincekeys`, `vincesmd`, VinceWLANController, `vince_bt_*`, `vince_vtimer_intid`). Parece que los parches vince ya incluyen ese contenido. Por confirmar que no se haya perdido nada (p. ej. sweet 0065 PSCI frente a vince 0101).
  - Pendiente: desensamblar el kernel buscando LSE/LDAPR/PAC (no hay `llvm-objdump` en WSL; instalar LLVM, que además hace falta para el shim).
- Siguiente paso: luego decidir entre desactivar el watchdog en el shim o portar la emulación LSE.
