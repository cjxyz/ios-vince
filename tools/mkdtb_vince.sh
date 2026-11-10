#!/bin/sh
# Build the vince DTB from the stock kernel source, as an alternative to pulling /sys/firmware/fdt from a
# rooted phone. LK picks the appended DTB by qcom,msm-id (0x125 = MSM8953) and qcom,board-id (0x1000b, QRD SKU3).
#
#   tools/mkdtb_vince.sh [STOCK_KERNEL_DIR] [OUT_DTB]
#
# Needs only clang: dtc is built from the stock tree's shipped sources (no make, no flex/bison).
set -eu

REPO=$(cd "$(dirname "$0")/.." && pwd)
K=${1:-$REPO/../vince-stock}
OUT=${2:-$REPO/artifacts/stock_vince.dtb}
D=$K/scripts/dtc
Q=$K/arch/arm64/boot/dts/qcom
B=$REPO/build/dtc

mkdir -p "$B" "$(dirname "$OUT")"
if [ ! -x "$B/dtc" ]; then
	for f in dtc-lexer.lex.c dtc-parser.tab.c dtc-parser.tab.h; do
		cp "$D/${f}_shipped" "$B/$f"
	done
	clang -O1 -w -fcommon -I"$D" -I"$D/libfdt" -I"$B" -o "$B/dtc" \
		"$D/dtc.c" "$D/flattree.c" "$D/fstree.c" "$D/data.c" "$D/livetree.c" "$D/treesource.c" \
		"$D/srcpos.c" "$D/checks.c" "$D/util.c" "$B/dtc-lexer.lex.c" "$B/dtc-parser.tab.c"
fi

clang -E -P -nostdinc -undef -D__DTS__ -x assembler-with-cpp \
	-I"$Q" -I"$K/arch/arm64/boot/dts" -I"$K/include" -I"$K/scripts/dtc/include-prefixes" \
	"$Q/msm8953-qrd-sku3-vince.dts" -o "$B/vince.dts.pre"
"$B/dtc" -q -I dts -O dtb -i "$Q" -o "$OUT" "$B/vince.dts.pre"
echo "[+] $OUT ($(wc -c < "$OUT") bytes)"
