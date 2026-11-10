#!/bin/bash
# Mesa 25.0.7 (freedreno + softpipe, OSMesa) for the iOS 16 userland, and userland/gpu/gputest.c, on a GitHub
# macOS runner. From pixellia/ios-casuarina userland/mesa @ 152a3fb, itself from HackiOS ("Darwin on redwood",
# tools/mk-mesa.sh, MIT, see CREDITS.md); the Mesa patches are theirs. The kernel's GPU service is VinceGPU
# (iokit/Kernel/arm/VinceGPU.cpp, patch 0183), not RedwoodGPU. Installed under /vince on the iOS root.
set -e
VERSION=25.0.7
SHA256=592272df3cf01e85e7db300c449df5061092574d099da275d19e97ef0510f8a6
HERE=$(cd "$(dirname "$0")" && pwd)
REPO=$(cd "$HERE/../.." && pwd)
B=$REPO/build-mesa
mkdir -p "$B/out"
cd "$B"
SDK=$(xcrun --sdk iphoneos --show-sdk-path)
CC=$(xcrun --sdk iphoneos -f clang)
if [ ! -d mesa-$VERSION ]; then
	curl -sL --fail -o mesa-$VERSION.tar.xz https://archive.mesa3d.org/mesa-$VERSION.tar.xz
	echo "$SHA256  mesa-$VERSION.tar.xz" | shasum -a 256 -c --quiet
	tar xJf mesa-$VERSION.tar.xz
	for p in "$HERE"/*.patch; do patch -s --no-backup-if-mismatch -d mesa-$VERSION -p1 < "$p"; done
fi
rm -rf mesa-$VERSION/src/redwood-drm
cp -r "$HERE/redwood-drm" mesa-$VERSION/src/redwood-drm
sed -i '' 's/"RedwoodGPU"/"VinceGPU"/' mesa-$VERSION/src/redwood-drm/redwood_drm.c
grep -q '"VinceGPU"' mesa-$VERSION/src/redwood-drm/redwood_drm.c
python3 -m venv venv
venv/bin/pip -q install mako pyyaml packaging
# Homebrew is /opt/homebrew on arm64 runners and /usr/local on Intel ones
export PATH=$B/venv/bin:$(brew --prefix bison)/bin:$(brew --prefix flex)/bin:$PATH
cat > cross.ini <<INI
[binaries]
c = ['$CC', '-target', 'arm64-apple-ios16.0', '-isysroot', '$SDK']
cpp = ['$CC++', '-target', 'arm64-apple-ios16.0', '-isysroot', '$SDK', '-fuse-cxa-atexit']
objc = ['$CC', '-target', 'arm64-apple-ios16.0', '-isysroot', '$SDK']
ar = '$(xcrun -f ar)'
ranlib = '$(xcrun -f ranlib)'
strip = '$(xcrun -f strip)'
pkg-config = 'false'

[host_machine]
system = 'darwin'
subsystem = 'ios'
cpu_family = 'aarch64'
cpu = 'arm64'
endian = 'little'

[properties]
needs_exe_wrapper = true
INI
DRIVERS=${DRIVERS:-softpipe,freedreno}
BUILD=build-${DRIVERS//,/-}
meson setup $BUILD mesa-$VERSION --cross-file cross.ini --wrap-mode=nofallback \
	--prefix=/vince --libdir=lib --buildtype=release -Db_ndebug=true \
	-Dplatforms= -Dgallium-drivers="$DRIVERS" -Dfreedreno-kmds=msm -Dvulkan-drivers= -Dglx=disabled -Degl=disabled -Dgbm=disabled \
	-Dosmesa=true -Dllvm=disabled -Dshared-glapi=enabled -Dgles1=disabled -Dgles2=enabled -Dopengl=true \
	-Dzstd=disabled -Dxmlconfig=disabled -Dexpat=disabled -Dshader-cache=disabled -Dvalgrind=disabled \
	-Dlibunwind=disabled -Dglvnd=disabled -Dvideo-codecs= -Dtools= -Dgallium-vdpau=disabled -Dgallium-va=disabled \
	-Dgallium-xa=disabled -Dlmsensors=disabled -Dbuild-tests=false > meson-setup.log 2>&1 || { tail -60 meson-setup.log; exit 1; }
ninja -C $BUILD > ninja.log 2>&1 || { tail -80 ninja.log; exit 1; }
$(xcrun -f strip) -x -o out/libOSMesa.8.dylib $BUILD/src/gallium/targets/osmesa/libOSMesa.8.dylib
install_name_tool -id /vince/lib/libOSMesa.8.dylib out/libOSMesa.8.dylib
codesign -f -s - out/libOSMesa.8.dylib
nm -gU out/libOSMesa.8.dylib | awk '$3 ~ /^_gl/ { print substr($3, 2) }' > out/exported-gl.txt
"$CC" -target arm64-apple-ios16.0 -isysroot "$SDK" -O1 -Wall -o out/gputest "$REPO/userland/gpu/gputest.c" out/libOSMesa.8.dylib -framework IOKit
codesign -f -s - out/gputest
ls -l out
