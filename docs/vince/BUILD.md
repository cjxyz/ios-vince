# Build y arranque

Estado: **documentación del flujo heredado de upstream, todavía sin reproducir en este fork.**
Los huecos conocidos están marcados con ⚠️ y se resuelven en [PROGRESS.md](PROGRESS.md).

## 1. Kernel XNU (GitHub Actions)
Workflow: `.github/workflows/xnu-vince.yml` (runner `macos-14`, Xcode 15).
- Se dispara con un push a `main` que toque `xnu/patches/**`, `tools/patch_dxb.py` o el propio workflow, o a mano:
  ```
  gh workflow run xnu-vince -R cjxyz/ios-vince          # entradas: macos_version=13.5 (xnu-8796), kernel_config=DEVELOPMENT, machine_config=VINCE
  gh run list -R cjxyz/ios-vince -w xnu-vince
  gh run download <run-id> -R cjxyz/ios-vince -n xnu-kernel-vince -D out/kernel
  ```
- Funcionamiento: clona blacktop/darwin-xnu-build en el SHA fijado, copia `xnu/patches/*` y adapta `build.sh` con
  `tools/patch_dxb.py`, que aplica `-march=armv8-a -mcpu=cortex-a53` y marca como críticos los parches 0004, 0090 y `*vince*`.
- ⚠️ Los parches no críticos que no se aplican **solo generan un warning**. Hay que revisar el log de cada build.
- Artefactos: `xnu-kernel-vince` (`kernel.development.vince` + SHA256SUMS) y `xnu-buildtree` (árbol para compilar ficheros sueltos).
- Coste: repo público, así que no consume minutos de pago.

## 2. Userland auxiliar (GitHub Actions)
Workflow `.github/workflows/userland.yml`: cada `userland/src/NAME.c` se convierte en `vince-NAME` (Mach-O arm64 con firma ad-hoc),
publicado en el artefacto `userland-bin`.

## 3. ADT, payload y boot.img (local, WSL)
Herramientas: `python3` y LLVM (`sudo apt install clang lld llvm`), que aporta `clang`, `ld.lld`, `llvm-objcopy` y `llvm-nm`.
```
python3 tools/mkadt_vince.py artifacts/vince.adt          # ADT: identidad iPhone10,3/D22AP, RAM 0xA0000000
python3 tools/verify_adt_vince.py artifacts/vince.adt     # comprueba GIC, eMMC, touch y DRAM
python3 tools/mkpayload_vince.py out/kernel/kernel.development.vince artifacts/vince.adt artifacts/vince.payload \
    [--cmdline "..."]                                     # payload VINCEXNU = kernel + ADT
tools/mkdtb_vince.sh                                      # DTB desde ../vince-stock → artifacts/stock_vince.dtb
#   (alternativa con root: adb pull /sys/firmware/fdt artifacts/live_fdt.dtb)
python3 shim/build.py --dtb artifacts/stock_vince.dtb     # → artifacts/vince-boot.img
```
- `shim/build.py` compila en `build/shim/` y empaqueta un boot.img v0 (page 2048): **kernel** = shim + DTB anexado, **ramdisk** = payload.
  Opciones `--payload` y `--dtb` (por defecto `artifacts/vince.payload` y `artifacts/live_fdt.dtb`).
- Sin payload, el shim solo muestra su diagnóstico (MMU, GIC, timer) y se detiene. Sirve como primera prueba de pantalla.
- Sin DTB anexado, LK puede rechazar la imagen. `tools/mkdtb_vince.sh` compila `dtc` desde las fuentes del kernel stock
  (solo necesita clang) y genera el DTB de `msm8953-qrd-sku3-vince.dts`, con `qcom,msm-id` 0x125 y `qcom,board-id` 0x1000b/0x8.
- Imagen de diagnóstico (solo el shim, sin XNU): `python3 shim/build.py --payload /nonexistent --dtb artifacts/stock_vince.dtb`.
- `artifacts/`, `build/` y `out/` están en `.gitignore`.

## 4. Imagen raíz iOS
- ⚠️ El repo no incluye las herramientas de ios-sweet `tools/mkiosroot.sh` ni `sweet-root-tweaks.py`. Hay que traerlas de ios-sweet.
- Fuente: IPSW del iPhone X (iPhone10,3) con iOS 16.7.x. Se unen el volumen OS y los cryptexes en un HFS+ sensible a mayúsculas
  (requiere apfs-fuse, hfsprogs y android-sdk-libsparse-utils):
  ```
  tools/mkiosroot.sh OS.dmg SystemOS.dmg AppOS.dmg ios16-root.img 16G
  img2simg ios16-root.img ios16-root.simg
  fastboot -S 512M flash userdata ios16-root.simg
  ```

## 5. Auditoría de hardware
```
python3 tools/audit_vince_hw.py [--stock ../vince-stock]   # exit 1 si falta un bloque requerido
```

## 6. Arranque y recuperación
```
fastboot boot artifacts/vince-boot.img       # nunca "fastboot flash boot"
```
- Recuperación: mantener **volumen − + power** para volver a fastboot. Android sigue intacto salvo `userdata`.
- Volver a Android: `fastboot erase userdata` (o restaurar el backup) y reiniciar.
