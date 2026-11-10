# Progreso

## Estado
| Etapa | Estado | Notas |
|---|---|---|
| Fork y documentación | ✅ | 2026-11-10 |
| CI del kernel en verde (este fork) | ⏳ | Upstream: último verde `c3c7b7f` (26 oct); los 4 commits posteriores (VinceGPU) fallaron o se cancelaron |
| Auditoría DTS stock ↔ parches | ⏳ | |
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
- Identidad git del repo: `cjxyz <cjxyzt@gmail.com>`.
- Siguiente paso: lanzar el CI en `vince-port` y escribir el script de auditoría.
