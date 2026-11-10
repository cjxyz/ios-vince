# Contexto del port

## Objetivo
Arrancar iOS 16 (kernel XNU compilado desde fuente pública + userland del iPhone X) en un
**Xiaomi Redmi 5 Plus "vince"** (Qualcomm MSM8953 / Snapdragon 625), siguiendo el enfoque
descrito en <https://hackiosx.dev>. Es un proyecto de investigación, no un sistema de uso diario.

## Linaje
```
dipa-studio/ios-sweet          Redmi Note 10 Pro (SM7150), base de casi todos los ports
  └─ arabaci0711-ux/ios-vince  parches vince 0090–0181 (upstream de este repo)
       └─ cjxyz/ios-vince      este fork
```
Remotos git: `origin` = cjxyz/ios-vince, `upstream` = arabaci0711-ux/ios-vince.

## Decisiones tomadas (2026-11-10)
| Decisión | Motivo |
|---|---|
| Fork de ios-vince en lugar de un port desde cero | Ya tiene kernel 4K, eMMC, GICv2, SMP 8 núcleos, touch TD4310 y Wi‑Fi/BT en curso. |
| Compilar XNU en GitHub Actions (macOS) | El build exige Xcode/iig; el equipo de trabajo es WSL/Linux. El repo es público, así que los runners son gratuitos. |
| Panel/touch objetivo: TD4310 + Synaptics RMI4 (@0x20, I2C-3) | Es la variante del teléfono del autor y la que soporta upstream. NT36672 (Novatek) no está soportada. |
| Arranque siempre con `fastboot boot`, nunca flasheando `boot` | Android sigue arrancable; solo se sobrescribe `userdata`. |
| Kernel fuente stock en `../vince-stock` (Linux 4.9) | Referencia de hardware (DTS, drivers). Ver [HARDWARE.md](HARDWARE.md). |

## Restricciones del hardware
- **Cortex-A53 (ARMv8.0)**: sin granule de 16 KB, así que XNU se compila con páginas de 4 KB (parche 0090) y se aceptan firmas de código con hash de 16 KB (0093). Tampoco tiene LSE, LDAPR ni PAN.
- **Userland del iPhone X (A11, ARMv8.2)**: puede contener instrucciones LSE y LDAPR. En un A53 eso provoca `EXC_BAD_INSTRUCTION` salvo que el kernel las emule. Upstream **no** las emula (ver [PROGRESS.md](PROGRESS.md)).
- **GICv2** (no GICv3 como sweet o topaz), **eMMC** (no UFS) y **RPM** (no RPMh).

## Referencias
- hackiosx.dev: [compatibilidad](https://hackiosx.dev/compatibility.html), [porting](https://hackiosx.dev/porting.html), [cómo funciona](https://hackiosx.dev/how-it-works.html)
- ios-sweet: <https://github.com/dipa-studio/ios-sweet> (README, NOTES.md, `tools/mkiosroot.sh`)
- ios-topaz (Redmi Note 12): <https://github.com/MakrSas/ios-topaz>. Su parche `0081-topaz-armv8.0-no-lse-no-pan.patch` emula LSE/LDAPR/CAS en `sleh.c`.
- ios-casuarina, rama `vince`: <https://github.com/pixellia/ios-casuarina>. Otro port vince con SpringBoard y Adreno 506 vía Mesa.
- ios-sailfish (Pixel 2016): <https://github.com/joranv1/ios-sailfish>. Su `bsd/dev/sweet_rpm.c` sirve de referencia para votar reguladores RPM-SMD.
- r/hackios: <https://www.reddit.com/r/hackios/>
