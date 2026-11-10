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
Firmware: iPhone X (iPhone10,3) **iOS 16.7.16 (20H392)**, el mismo que usa ios-sweet:
`iPhone10,3,iPhone10,6_16.7.16_20H392_Restore.ipsw` (6 171 035 648 B, SHA256 `ece1194f…68fb`, CDN de Apple vía api.ipsw.me).

Dependencias (con sudo): `hfsprogs android-sdk-libsparse-utils` y, para compilar `apfs-fuse` (no está empaquetado en Ubuntu 26.04),
`cmake g++ libfuse3-dev fuse3 libbz2-dev zlib1g-dev libattr1-dev`.

`apfs-fuse` (sgan81/apfs-fuse) en `~/.local/bin`; con CMake 4 y GCC 15 hace falta:
```
cmake .. -DCMAKE_BUILD_TYPE=Release -DUSE_FUSE3=ON -DCMAKE_POLICY_VERSION_MINIMUM=3.5 -DCMAKE_CXX_FLAGS="-include cstdint"
```
**WSL2 no trae HFS+** (`# CONFIG_HFSPLUS_FS is not set`). `tools/wsl-hfsplus.sh` descarga el código del kernel de Microsoft de la
versión exacta (`linux-msft-wsl-$(uname -r)`), compila solo `fs/hfsplus` como módulo y lo carga con `insmod`
(dependencias: `build-essential flex bison bc libelf-dev libssl-dev`). Hay que volver a cargarlo después de reiniciar WSL.

```
tools/mkroot_vince.sh ../ipsw/iPhone10,3_16.7.16_20H392_Restore.ipsw ../rootwork [16G]
fastboot -S 512M flash userdata ../rootwork/ios16-root.simg       # ⚠️ borra los datos de Android
```
- `mkroot_vince.sh` saca del `BuildManifest.plist` las rutas de OS, Cryptex1,SystemOS y Cryptex1,AppOS (identidad D22AP Erase),
  las extrae, llama a `tools/mkiosroot.sh`, monta la imagen, aplica `tools/sweet-root-tweaks.py` y genera la sparse con `img2simg`.
- `tools/mkiosroot.sh` y `tools/sweet-root-tweaks.py` vienen de ios-sweet @ `45263be`. Único cambio: el HFS+ va **sin journal**,
  como en upstream vince (0095 permite montar la raíz sucia en escritura tras un reset).
- Arranque con raíz: `vince-boot-root.img` (payload con `rd=mmcroot0 mmcroot=userdata mmcrw=1 rootrw=1`). `vince_mmc` solo escribe
  con `mmcrw=1`, solo en `userdata` y tras pasar un self-test de escritura en un sector posterior al volumen HFS+.

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
