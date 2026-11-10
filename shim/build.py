#!/usr/bin/env python3
"""Build the Vince Boot Shim using Clang/LLVM and pack vince-boot.img.

  shim/build.py [--payload artifacts/vince.payload] [--dtb artifacts/live_fdt.dtb]

The payload (tools/mkpayload_vince.py: XNU kernel + ADT) goes in the boot.img ramdisk, where
loader.c looks for the VINCEXNU header. Without one the shim only runs its diagnostics and halts.
"""
import argparse
import os
import sys
import subprocess
import shutil

BASE_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SHIM_DIR = os.path.join(BASE_DIR, "shim")
OUT_DIR = os.path.join(BASE_DIR, "build", "shim")
ARTIFACTS_DIR = os.path.join(BASE_DIR, "artifacts")
TOOLS_DIR = os.path.join(BASE_DIR, "tools")

os.makedirs(OUT_DIR, exist_ok=True)
os.makedirs(ARTIFACTS_DIR, exist_ok=True)

def find_tool(name):
    # Check standard path
    p = shutil.which(name)
    if p: return p
    # Check common winget links
    winget_link = os.path.join(os.environ.get("LOCALAPPDATA", ""), "Microsoft", "WinGet", "Links", f"{name}.exe")
    if os.path.exists(winget_link): return winget_link
    # Check WinGet Packages
    pkg_dir = os.path.join(os.environ.get("LOCALAPPDATA", ""), "Microsoft", "WinGet", "Packages")
    if os.path.exists(pkg_dir):
        for root, _, files in os.walk(pkg_dir):
            if f"{name}.exe" in files:
                return os.path.join(root, f"{name}.exe")
    return name

def build(payload_path, dtb_path):
    print("[*] Building Vince Boot Shim...")
    clang = find_tool("clang")
    ld_lld = find_tool("ld.lld")
    llvm_objcopy = find_tool("llvm-objcopy")
    llvm_nm = find_tool("llvm-nm")

    print(f"    Compiler: {clang}")
    print(f"    Linker:   {ld_lld}")
    print(f"    Objcopy:  {llvm_objcopy}")

    cflags = [
        "-target", "aarch64-none-elf",
        "-O2", "-ffreestanding", "-nostdlib",
        "-fno-pic", "-mgeneral-regs-only", "-mstrict-align",
        "-fno-stack-protector", "-Wall", "-Wextra",
        "-I", SHIM_DIR
    ]

    sources = ["start.S", "shim.c", "console.c", "mmu.c", "fdt.c", "loader.c"]
    objs = []

    for src in sources:
        src_path = os.path.join(SHIM_DIR, src)
        obj_name = os.path.splitext(src)[0] + ".o"
        obj_path = os.path.join(OUT_DIR, obj_name)
        objs.append(obj_path)

        cmd = [clang] + cflags + ["-c", src_path, "-o", obj_path]
        print(f"[*] Compiling {src}...")
        res = subprocess.run(cmd)
        if res.returncode != 0:
            print(f"[!] Compilation failed for {src}")
            return False

    # Link ELF
    elf_path = os.path.join(OUT_DIR, "shim.elf")
    ld_script = os.path.join(SHIM_DIR, "shim.ld")
    ld_flags = [
        "-T", ld_script,
        "--build-id=none",
        "-N",
        "-o", elf_path
    ] + objs

    print("[*] Linking shim.elf...")
    res = subprocess.run([ld_lld] + ld_flags)
    if res.returncode != 0:
        print("[!] Linking failed!")
        return False

    # Convert to binary
    bin_path = os.path.join(OUT_DIR, "Image")
    print(f"[*] Generating binary: {bin_path}...")
    res = subprocess.run([llvm_objcopy, "-O", "binary", elf_path, bin_path])
    if res.returncode != 0:
        print("[!] Objcopy failed!")
        return False

    # Pad binary to _end symbol
    try:
        nm_out = subprocess.check_output([llvm_nm, elf_path], text=True)
        end_size = None
        for line in nm_out.splitlines():
            parts = line.split()
            if len(parts) >= 3 and parts[2] == "_end":
                end_size = int(parts[0], 16)
                break
        if end_size:
            with open(bin_path, "a+b") as f:
                cur_len = f.tell()
                if end_size > cur_len:
                    f.write(b"\0" * (end_size - cur_len))
            print(f"    [+] Padded shim binary to _end (0x{end_size:x} bytes)")
    except Exception as e:
        print(f"    [!] Warning during padding: {e}")

    # Copy binary to artifacts
    final_shim = os.path.join(ARTIFACTS_DIR, "vince-shim.bin")
    shutil.copyfile(bin_path, final_shim)
    print(f"[+] Final Vince Shim Binary: {final_shim} ({os.path.getsize(final_shim)} bytes)")

    # Append live Qualcomm DTB to shim binary for LK validation
    kernel_to_pack = final_shim
    if not os.path.exists(dtb_path):
        print(f"    [!] No DTB at {dtb_path}: LK may refuse an image without an appended DTB")
    else:
        shim_dtb_path = os.path.join(ARTIFACTS_DIR, "vince-shim-dtb.bin")
        with open(final_shim, "rb") as f_shim, open(dtb_path, "rb") as f_dtb, open(shim_dtb_path, "wb") as f_out:
            f_out.write(f_shim.read())
            f_out.write(f_dtb.read())
        kernel_to_pack = shim_dtb_path
        print(f"[+] Appended Hardware DTB: {shim_dtb_path} ({os.path.getsize(shim_dtb_path)} bytes)")

    # Pack Android boot.img using mkbootimg_vince
    bootimg_path = os.path.join(ARTIFACTS_DIR, "vince-boot.img")
    sys.path.append(TOOLS_DIR)
    import mkbootimg_vince
    print("[*] Packing vince-boot.img...")
    sha = mkbootimg_vince.pack_bootimg(
        kernel_path=kernel_to_pack,
        ramdisk_path=payload_path if os.path.exists(payload_path) else None,
        out_path=bootimg_path,
        cmdline="console=null loop.max_part=7",
        page_size=2048
    )

    if not os.path.exists(payload_path):
        print(f"    [!] No payload at {payload_path}: the shim will only run its diagnostics")
    print(f"[SUCCESS] Built {bootimg_path} (SHA256: {sha})")
    return True

if __name__ == "__main__":
    ap = argparse.ArgumentParser(description="Build the Vince Boot Shim and pack vince-boot.img")
    ap.add_argument("--payload", default=os.path.join(ARTIFACTS_DIR, "vince.payload"),
                    help="VINCEXNU payload from tools/mkpayload_vince.py, packed as the ramdisk")
    ap.add_argument("--dtb", default=os.path.join(ARTIFACTS_DIR, "live_fdt.dtb"),
                    help="Device DTB (adb pull /sys/firmware/fdt), appended to the shim for LK")
    a = ap.parse_args()
    success = build(a.payload, a.dtb)
    sys.exit(0 if success else 1)
