#!/bin/bash
# Add the GPU userland (the mesa workflow's artifact "mesa-ios") to an iOS root image made by tools/mkroot_vince.sh,
# then refresh its sparse image for fastboot:
#
#   tools/addgpu_root.sh ROOT.img MESA_DIR [GL_DIR | --no-gl] [--no-test]
#
# MESA_DIR holds libOSMesa.8.dylib and gputest. They go to /vince/lib and /vince/bin (the install name the build gives
# the library), and unless --no-test a launchd job com.vince.gputest runs gputest once at boot with its output on
# /dev/console. The job goes into /System/Library/xpc/launchd.plist, the cache launchd reads with launchd_unsecure_cache=1.
# GL_DIR (the vincegl workflow's artifact) holds libvince-gl.dylib, libvince-inject.dylib and backboardd-wrap: the
# libraries go to /vince/lib, the real backboardd moves to /usr/libexec/real/backboardd and the wrapper takes its place,
# so CoreAnimation's window server draws with the GPU (boot-arg gl=0 turns that off again). --no-gl puts the real
# backboardd back.
# Needs sudo and the hfsplus module (tools/wsl-hfsplus.sh on WSL).
set -euo pipefail

[[ $# -ge 2 ]] || { sed -n '2,15p' "$0"; exit 2; }
img=$(realpath "$1") mesa=$(realpath "$2") test=1 gl= nogl=0
shift 2
for a in "$@"; do
	case $a in
	--no-test) test=0 ;;
	--no-gl) nogl=1 ;;
	*) gl=$(realpath "$a") ;;
	esac
done
for f in libOSMesa.8.dylib gputest; do
	[[ -s $mesa/$f ]] || { echo "missing $mesa/$f" >&2; exit 1; }
done
if [[ -n $gl ]]; then
	for f in libvince-gl.dylib libvince-inject.dylib backboardd-wrap; do
		[[ -s $gl/$f ]] || { echo "missing $gl/$f" >&2; exit 1; }
	done
fi

mnt=$(mktemp -d)
sudo mount -t hfsplus -o loop,force "$img" "$mnt"
trap 'sudo umount "$mnt" 2>/dev/null || true; rmdir "$mnt" 2>/dev/null || true' EXIT

sudo install -d -o 0 -g 0 -m 0755 "$mnt/vince" "$mnt/vince/lib" "$mnt/vince/bin"
sudo install -o 0 -g 0 -m 0755 "$mesa/libOSMesa.8.dylib" "$mnt/vince/lib/libOSMesa.8.dylib"
sudo install -o 0 -g 0 -m 0755 "$mesa/gputest" "$mnt/vince/bin/gputest"

bbd=$mnt/usr/libexec/backboardd real=$mnt/usr/libexec/real/backboardd
if [[ -n $gl ]]; then
	sudo install -o 0 -g 0 -m 0755 "$gl/libvince-gl.dylib" "$mnt/vince/lib/libvince-gl.dylib"
	sudo install -o 0 -g 0 -m 0755 "$gl/libvince-inject.dylib" "$mnt/vince/lib/libvince-inject.dylib"
	if ! sudo test -e "$real"; then
		sudo mkdir -p "$mnt/usr/libexec/real"
		sudo mv "$bbd" "$real"
	fi
	sudo install -o 0 -g 0 -m 0755 "$gl/backboardd-wrap" "$bbd"
	sudo mkdir -p "$mnt/private/var/mobile/vince-logs"
	sudo chown 501:501 "$mnt/private/var/mobile/vince-logs"
	echo "backboardd: wrapper installed, real one at /usr/libexec/real/backboardd"
elif [[ $nogl == 1 ]] && sudo test -e "$real"; then
	sudo mv "$real" "$bbd"
	echo "backboardd: real one restored"
fi

sudo python3 - "$mnt/System/Library/xpc/launchd.plist" "$test" <<'EOF'
import os, plistlib, sys
path, test = sys.argv[1], sys.argv[2] == '1'
st = os.stat(path)
with open(path, 'rb') as f:
    plist = plistlib.load(f)
key = '/System/Library/LaunchDaemons/com.vince.gputest.plist'
if test:
    plist['LaunchDaemons'][key] = {
        'Label': 'com.vince.gputest',
        'ProgramArguments': ['/vince/bin/gputest'],
        'RunAtLoad': True,
        'LaunchOnlyOnce': True,
        'UserName': 'root',
        'StandardOutPath': '/dev/console',
        'StandardErrorPath': '/dev/console',
    }
    print('launchd.plist: com.vince.gputest added')
elif plist['LaunchDaemons'].pop(key, None) is not None:
    print('launchd.plist: com.vince.gputest removed')
with open(path, 'wb') as f:
    plistlib.dump(plist, f, fmt=plistlib.FMT_BINARY)
os.chown(path, st.st_uid, st.st_gid)
os.chmod(path, st.st_mode & 0o7777)
EOF

ls -l "$mnt/vince/lib" "$mnt/vince/bin" "$mnt/usr/libexec/backboardd"
sudo umount "$mnt"
rmdir "$mnt"
trap - EXIT
# Verify with -y (see tools/mkiosroot.sh): fsck -n reports a spurious header "minor repair" on this journaled volume.
fsck.hfsplus -f -y "$img" | grep -q 'appears to be OK'
simg=${img%.img}.simg
rm -f "$simg"
img2simg "$img" "$simg"
ls -l "$simg"
echo "flash with: fastboot -S 450M flash userdata $simg"
