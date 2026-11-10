# Hardware del Redmi 5 Plus (vince / MSM8953)

Datos extraídos del kernel stock `../vince-stock` (Linux 4.9). Rutas relativas a
`vince-stock/arch/arm64/boot/dts/qcom/` salvo indicación. DTS raíz: `msm8953-qrd-sku3-vince.dts`,
que incluye al final `vince/overlay.dtsi`, cuyos valores prevalecen sobre los de la base.

## CPU
- 8× Cortex-A53 (`arm,cortex-a53`), ARMv8.0. Sin TGran16 → **solo páginas de 4K o 64K**.
- `enable-method = "psci"`, PSCI 1.0 por `smc` (`msm8953-cpu.dtsi:15`). Sin spin-table.
- MPIDR: clúster 0 = `0x0–0x3`, clúster 1 = `0x100–0x103` (`msm8953-cpu.dtsi:58-204`).

## Interrupciones y timer
| Bloque | Valor | Fuente |
|---|---|---|
| GIC | **GICv2** `qcom,msm-qgic2`, GICD `0x0B000000`, GICC `0x0B002000` | `msm8953.dtsi:250` |
| wakegic (MPM) | `0x601d4` + APCS IPC `0xB011008`, SPI 171 | `msm8953.dtsi:259` |
| arch timer | `arm,armv8-timer`, 19.2 MHz. Interrupciones `<1 2>,<1 3>,<1 4>,<1 1>` = físico seguro INTID 18, físico no seguro INTID 19, **virtual INTID 20**, hipervisor INTID 17 (PPI n → INTID n+16). Coincide con el INTID 20 de ios-vince. | `msm8953.dtsi:285` |
| timer MMIO | `0xB120000`, frame0 `0xB121000`, SPI 8/7 | `msm8953.dtsi:294` |

## Memoria
- DRAM empieza en `0x80000000`; el tamaño lo rellena LK. ios-vince entrega a XNU el rango contiguo
  **`0xA0000000–0xFFFFFFFF` (1,5 GB)**, según `/proc/iomem` del teléfono (`tools/mkadt_vince.py:22`).
- Regiones reservadas relevantes (`msm8953.dtsi:63-170`, overrides en `vince/vince-general.dtsi:33-52`):

| Región | Base | Tamaño |
|---|---|---|
| other_ext_mem (vince) | `0x84A00000` | `0x1E00000` |
| modem_mem | `0x86C00000` | `0x6A00000` |
| adsp_fw_mem (vince) | `0x8D600000` | `0x1200000` |
| wcnss_fw_mem (vince) | `0x8E800000` | `0x700000` |
| **cont_splash_mem** | **`0x90001000`** | `0x13FF000` |
| pstore (vince) | `0x9FF00000` | `0x100000` |
| adsp_shmem_device | dentro de `0xC0100000+0x8200000` | `0x800000` (CMA) |

## Pantalla
- MDP `0x01A00000`, DSI0 `0x1A94000` (`msm8953-mdss.dtsi:14,298`). Framebuffer de splash en `0x90001000`.
- Panel preferido: `dsi_td4310_fhdplus_e7_vid`. Todos los paneles vince son **1080×2160, video mode, 60 Hz, 24 bpp**
  (`vince/panel/`, `vince/vince-qrd-sku3.dtsi`). TE GPIO 24, reset GPIO 61. Alimentación por LAB/IBB + WLED (pmi8950).

## Almacenamiento
- **eMMC** `sdhc_1` `qcom,sdhci-msm`: core `0x7824000`, SDHCI `0x7824900`, CMDQ `0x7824E00`; SPI 123 (hc) y 138 (pwr)
  (`msm8953.dtsi:1540`). Reguladores: vdd pm8953_l8 2,9 V, vdd-io pm8953_l5 1,8 V (`msm8953-qrd.dtsi:114`).
- SD: `sdhc_2` `0x7864900`. No hay UFS.

## Touch (variante TD4310)
- Bus: `i2c_3` = BLSP1 QUP3 `0x78B7000`, `qcom,i2c-msm-v2`, SPI 97, 400 kHz (`msm8953.dtsi:793`).
- Chip: `synaptics,dsx-i2c` @**0x20** (`vince/vince-qrd.dtsi:76-102`); variante lansi @0x70 (`:312-338`).
  La alternativa Novatek NT36672 @0x62 (`:104-311`) no está soportada.
- IRQ GPIO **65**, reset GPIO **64**.
- Rails: vdd **pm8953_l10** 2,85 V, avdd **pm8953_l6** 1,8 V. Ambos son **RPM-SMD** (`pm8953-rpm-regulator.dtsi:159,223`).
- Driver Linux de referencia: `vince-stock/drivers/input/touchscreen/td4310_e7/synaptics_dsx_i2c.c`.

## Botones y PMIC
- Volumen +: GPIO **85**, activo en bajo (`msm8953-qrd.dtsi:53-68`).
- Power (KPDPWR) y volumen − (RESIN): PON de PM8953 (`pm8953.dtsi`, `qcom,power-on@800`).
- SPMI arbiter: core `0x200F000`, chnls `0x2400000`, obsrvr `0x2C00000`, intr `0x3800000`, cnfg `0x200A000`, SPI 190
  (`msm8953.dtsi:1677`). PM8953 = USID 0, PMI8950 = USID 2/3.

## Watchdog
- `qcom,msm-watchdog` en **`0xB017000`**, bark SPI 3, bite SPI 4, bark a 11 s (`msm8953.dtsi:1314`).
  `WDT0_EN` está en el offset `0x08`. No se sabe si LK lo deja activo. **El shim de ios-vince no lo toca.**

## Depuración y arranque
- UART `blsp1_uart0` `0x78AF000` (`qcom,msm-uartdm-v1.4`), pines GPIO 4/5 (`msm8953.dtsi:546`).
- Imagen stock: `Image.gz-dtb` (DTB anexado). boot.img v0, page size 2048, base `0x80000000`
  (`tools/mkbootimg_vince.py`). bootargs del DT: `core_ctl_disable_cpumask=0-7 kpti=0`.

## Otros bloques
- Wi‑Fi/BT: WCNSS/Pronto `0x0A000000`, SPI 145/146 (`msm8953.dtsi:2151`).
- GPU: Adreno 506 (chipid `0x05000600`), kgsl `0x1C00000`, SPI 33 (`msm8953-gpu.dtsi:62-69`).
- Audio: codec interno msm8952 + amplificador TI TAS2557 en i2c_2 (`0x78B6000`) @0x4c.
- Huella: SPI, IRQ GPIO 48, reset GPIO 140.
