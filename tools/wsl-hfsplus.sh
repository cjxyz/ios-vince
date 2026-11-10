#!/bin/bash
# Build and load the hfsplus module for the running WSL2 kernel, which ships without HFS+
# (CONFIG_HFSPLUS_FS is not set), so tools/mkiosroot.sh can loop-mount the iOS root image.
#
#   tools/wsl-hfsplus.sh [WORKDIR]        (default ../wsl-kernel next to the repo)
#
# Downloads Microsoft's WSL2-Linux-Kernel source for exactly `uname -r` (tag linux-msft-wsl-<version>), uses the
# running kernel's /proc/config.gz with CONFIG_HFSPLUS_FS=m, builds only fs/hfsplus and loads it with insmod.
# Nothing is installed: after a WSL restart run it again (the build is reused, only insmod repeats).
#
# Build deps (once): sudo apt install build-essential flex bison bc libelf-dev libssl-dev dwarves
# (dwarves = pahole: without it olddefconfig silently drops DEBUG_INFO_BTF_MODULES, which changes struct module and
# makes insmod fail with ".gnu.linkonce.this_module section size must match").
set -euo pipefail

rel=$(uname -r)                                 # e.g. 6.18.54.1-microsoft-standard-WSL2
ver=${rel%%-*}                                  # 6.18.54.1
repo=$(cd "$(dirname "$0")/.." && pwd)
work=${1:-$repo/../wsl-kernel}
src=$work/WSL2-Linux-Kernel-linux-msft-wsl-$ver
ko=$src/fs/hfsplus/hfsplus.ko

if grep -qw hfsplus /proc/filesystems; then
	echo "hfsplus already available"
	exit 0
fi

if [[ ! -f $ko ]]; then
	mkdir -p "$work"
	if [[ ! -d $src ]]; then
		curl -fL "https://github.com/microsoft/WSL2-Linux-Kernel/archive/refs/tags/linux-msft-wsl-$ver.tar.gz" |
			tar xz -C "$work"
	fi
	cd "$src"
	zcat /proc/config.gz > .config
	scripts/config --module HFSPLUS_FS
	make olddefconfig >/dev/null
	# Options that change struct module must match the running kernel, or insmod rejects the module.
	for opt in DEBUG_INFO_BTF_MODULES MODULE_UNLOAD KALLSYMS TRACEPOINTS BPF_EVENTS EVENT_TRACING FTRACE_MCOUNT_RECORD \
		LIVEPATCH MODULE_SIG FUNCTION_ERROR_INJECTION DYNAMIC_DEBUG_CORE PRINTK_INDEX KUNIT CODE_TAGGING; do
		want=$(zcat /proc/config.gz | grep "^CONFIG_$opt=" || true)
		have=$(grep "^CONFIG_$opt=" .config || true)
		if [[ $want != "$have" ]]; then
			echo "CONFIG_$opt differs: running '${want:-unset}', build '${have:-unset}' (missing build tool? see deps)" >&2
			rm -f .config
			exit 1
		fi
	done
	make -j"$(nproc)" modules_prepare
	# No Module.symvers for the shipped kernel: let modpost warn instead of failing on the kernel's exports.
	make -j"$(nproc)" M=fs/hfsplus KBUILD_MODPOST_WARN=1 modules
fi

modinfo -F vermagic "$ko"
# CONFIG_MODVERSIONS=y but no Module.symvers: the module has no CRCs for the kernel's symbols, which the kernel
# accepts with "no symbol version" warnings. If insmod still refuses it, build vmlinux once (make -j vmlinux in
# $src, 20-40 min) to get a Module.symvers, delete $ko and run this again.
if ! sudo insmod "$ko"; then
	echo "insmod failed; see dmesg | tail and the note above about Module.symvers" >&2
	exit 1
fi
grep -w hfsplus /proc/filesystems
