#!/bin/bash
# Build the vince userdata image from an iPhone X IPSW, end to end:
#
#   tools/mkroot_vince.sh IPSW WORKDIR [SIZE]        (SIZE default 16G)
#
# 1. reads BuildManifest.plist and extracts the OS, SystemOS and AppOS cryptex images to WORKDIR
# 2. tools/mkiosroot.sh -> WORKDIR/ios16-root.img (non-journaled HFS+)
# 3. mounts it and runs tools/sweet-root-tweaks.py (launchd, Setup, activation, audio)
# 4. fsck, then img2simg -> WORKDIR/ios16-root.simg, ready for `fastboot -S 256M flash userdata`
#
# Needs: unzip, apfs-fuse, hfsprogs (mkfs.hfsplus, fsck.hfsplus), rsync, img2simg (android-sdk-libsparse-utils)
# and sudo (mounting and copying as root). SIZE must stay below the userdata partition: vince_mmc's write
# self-test uses a sector past the end of the HFS+ volume.
set -euo pipefail

[[ $# -ge 2 ]] || { sed -n '2,13p' "$0"; exit 2; }
ipsw=$(realpath "$1") work=$2 size=${3:-16G}
tools=$(cd "$(dirname "$0")" && pwd)
mkdir -p "$work"
work=$(realpath "$work")

for tool in unzip img2simg; do
	command -v "$tool" >/dev/null || { echo "missing $tool" >&2; exit 1; }
done

# Component paths from the first iPhone10,3 (D22AP) erase identity.
read -r os sysos appos < <(unzip -p "$ipsw" BuildManifest.plist | python3 -c '
import plistlib, sys
m = plistlib.loads(sys.stdin.buffer.read())
for b in m["BuildIdentities"]:
    if b["Info"].get("DeviceClass", "").lower() == "d22ap" and "Erase" in b["Info"].get("Variant", ""):
        man = b["Manifest"]
        print(man["OS"]["Info"]["Path"], man["Cryptex1,SystemOS"]["Info"]["Path"], man["Cryptex1,AppOS"]["Info"]["Path"])
        break
else:
    sys.exit("no D22AP erase identity in BuildManifest.plist")
')
echo "OS=$os SystemOS=$sysos AppOS=$appos"

for f in "$os" "$sysos" "$appos"; do
	[[ -s $work/$f ]] || unzip -o -j "$ipsw" "$f" -d "$work"
done

img=$work/ios16-root.img
[[ -e $img ]] || "$tools/mkiosroot.sh" "$work/$os" "$work/$sysos" "$work/$appos" "$img" "$size"

mnt=$work/mnt
mkdir -p "$mnt"
sudo fsck.hfsplus -f -y "$img" >/dev/null || true
sudo mount -t hfsplus -o loop,force "$img" "$mnt"
trap 'sudo umount "$mnt" 2>/dev/null || true' EXIT
sudo python3 "$tools/sweet-root-tweaks.py" "$mnt"
sudo umount "$mnt"
trap - EXIT
# Verify with -y (see tools/mkiosroot.sh): fsck -n reports a spurious header "minor repair" on this journaled volume.
fsck.hfsplus -f -y "$img" | tee /dev/stderr | grep -q 'appears to be OK'

img2simg "$img" "$work/ios16-root.simg"
ls -la "$work/ios16-root.simg"
echo "flash with: fastboot -S 256M flash userdata $work/ios16-root.simg"
