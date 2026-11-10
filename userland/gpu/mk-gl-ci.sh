#!/bin/bash
# libvince-gl.dylib (OpenGL ES behind EAGLContext: eagl.c + gl_osmesa.c over Mesa's OSMesa), libvince-inject.dylib
# and the backboardd wrapper, built with Xcode's clang. Result: build-gl/out/
# From pixellia/ios-casuarina userland/gpu/mk-topaz-ci.sh @ 152a3fb (HackiOS lineage, MIT, see CREDITS.md).
set -e
HERE=$(cd "$(dirname "$0")" && pwd)
OUT=$(pwd)/build-gl/out
mkdir -p "$OUT"
SDK=$(xcrun --sdk iphoneos --show-sdk-path)
CC=$(xcrun --sdk iphoneos -f clang)
FL="-target arm64-apple-ios16.0 -isysroot $SDK -O2 -fno-objc-arc -Wno-deprecated-declarations -Wno-incompatible-pointer-types-discards-qualifiers"
FW="-framework CoreFoundation -framework IOKit -framework IOSurface"
IOKIT_PRIV=
[ -d "$SDK/System/Library/PrivateFrameworks/IOSurface.framework" ] && IOKIT_PRIV="-iframework $SDK/System/Library/PrivateFrameworks"
mkdir -p stub
"$CC" -target arm64-apple-ios16.0 -isysroot "$SDK" -dynamiclib -install_name /vince/lib/libOSMesa.8.dylib \
	-o stub/libOSMesa.8.dylib "$HERE/stub_osmesa.c"
"$CC" $FL $IOKIT_PRIV -dynamiclib -install_name /vince/lib/libvince-gl.dylib -I"$HERE" \
	-o "$OUT/libvince-gl.dylib" "$HERE/eagl.c" "$HERE/gl_osmesa.c" stub/libOSMesa.8.dylib $FW -lobjc
"$CC" $FL $IOKIT_PRIV -dynamiclib -install_name /vince/lib/libvince-inject.dylib -I"$HERE" \
	-o "$OUT/libvince-inject.dylib" "$HERE/vince_inject.c" $FW -lobjc
"$CC" $FL -o "$OUT/backboardd-wrap" "$HERE/bbd_wrap.c"
for f in libvince-gl.dylib libvince-inject.dylib backboardd-wrap; do codesign -f -s - "$OUT/$f"; done
nm -gU "$OUT/libvince-gl.dylib" | grep redwood_gl_function || echo "NOTE: redwood_gl_function_* not exported"
otool -L "$OUT/libvince-gl.dylib"
ls -l "$OUT"
