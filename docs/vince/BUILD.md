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
Herramientas: `clang`, `ld.lld`, `llvm-objcopy`, `llvm-nm`, `python3`.
```
python3 tools/mkadt_vince.py ...            # → artifacts/vince.adt (identidad iPhone10,3/D22AP, RAM 0xA0000000+1.5GB)
python3 tools/verify_adt_vince.py ...       # comprueba el ADT
python3 tools/mkpayload_vince.py KERNEL ADT OUT --cmdline "..."
python3 shim/build.py                       # → artifacts/vince-boot.img (boot.img v0, page 2048)
```
- ⚠️ `shim/build.py` busca las fuentes en `<padre del repo>/vince-bringup/shim` y el DTB en
  `research/device_dumps/live_fdt.dtb`, que no existen en el repo. Hay que adaptar las rutas a `shim/`.
- ⚠️ `tools/mkpayload_vince.py` importa `adt` desde `upstream/ios-sweet/tools`, pero el repo ya incluye `tools/adt.py`.
- ⚠️ `shim/build.py` busca herramientas por winget (Windows). En WSL basta con tenerlas en el PATH.
- DTB del teléfono: copiar `/sys/firmware/fdt` desde Android con root o recovery (`adb pull /sys/firmware/fdt live_fdt.dtb`).

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
