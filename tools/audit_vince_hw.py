#!/usr/bin/env python3
"""Cross-check MSM8953 hardware addresses from the stock vince kernel DTS against this repo.

  audit_vince_hw.py [--stock ../vince-stock]

For each block, the address is read from the stock DTS (node label + reg index) and then searched for
as a hex literal in xnu/patches, shim/ and tools/. A block that the port never mentions is reported as
MISSING, which is either fine (not used yet) or a hint that a hard-coded value differs from the stock one.
"""
import argparse
import os
import re
import sys

QCOM = "arch/arm64/boot/dts/qcom"

# (name, dtsi, node label or "@name" for unlabeled nodes, reg cell index, required by the port today)
BLOCKS = [
    ("GIC distributor", "msm8953.dtsi", "intc", 0, True),
    ("GIC CPU interface", "msm8953.dtsi", "intc", 1, True),
    ("watchdog", "msm8953.dtsi", "wdog", 0, True),
    ("eMMC SDHCI", "msm8953.dtsi", "sdhc_1", 0, True),
    ("eMMC core", "msm8953.dtsi", "sdhc_1", 1, True),
    ("touch I2C (BLSP1 QUP3)", "msm8953.dtsi", "i2c_3", 0, True),
    ("SPMI core", "msm8953.dtsi", "spmi_bus", 0, True),
    ("SPMI chnls", "msm8953.dtsi", "spmi_bus", 1, False),
    ("SPMI obsrvr", "msm8953.dtsi", "spmi_bus", 2, False),
    ("SPMI cnfg", "msm8953.dtsi", "spmi_bus", 4, False),
    ("framebuffer cont_splash", "msm8953.dtsi", "cont_splash_mem", 0, True),
    ("debug UART blsp1_uart0", "msm8953.dtsi", "blsp1_uart0", 0, False),
    ("WCNSS (Wi-Fi/BT)", "msm8953.dtsi", "@qcom,wcnss-wlan", 0, False),
]

# (name, dtsi, regex with one group = decimal GPIO)
GPIOS = [
    ("touch IRQ GPIO", "vince/vince-qrd.dtsi", r"synaptics,irq-gpio\s*=\s*<&tlmm\s+(\d+)"),
    ("touch reset GPIO", "vince/vince-qrd.dtsi", r"synaptics,rst-gpio\s*=\s*<&tlmm\s+(\d+)"),
    ("volume up GPIO", "msm8953-qrd.dtsi", r"gpios\s*=\s*<&tlmm\s+(\d+)"),
]


def node_body(text, label):
    # The last definition wins: msm8953.dtsi has empty forward stubs (e.g. "sdhc_1: sdhci@7824900 {};").
    if label.startswith("@"):
        hdr = r"(?m)^\s*%s@[0-9a-fA-F]+\s*\{" % re.escape(label[1:])
    else:
        hdr = r"\b%s\s*:\s*[^{;]*\{" % re.escape(label)
    ms = list(re.finditer(hdr, text))
    if not ms:
        return None
    m = ms[-1]
    depth, i = 1, m.end()
    while depth and i < len(text):
        depth += {"{": 1, "}": -1}.get(text[i], 0)
        i += 1
    return text[m.end():i]


def reg_addrs(body):
    """Return the address of each <addr size> / <0 addr 0 size> tuple in reg."""
    m = re.search(r"(?<![-\w])reg\s*=\s*([^;]*);", body)
    if not m:
        return []
    addrs = []
    for tup in re.findall(r"<([^>]*)>", m.group(1)):
        cells = [int(c, 0) for c in tup.split()]
        addrs.append(cells[1] if len(cells) == 4 else cells[0])
    return addrs


def scan_repo(repo):
    files = {}
    for sub in ("xnu/patches", "shim", "tools"):
        for root, _, names in os.walk(os.path.join(repo, sub)):
            for n in names:
                p = os.path.join(root, n)
                if os.path.abspath(p) == os.path.abspath(__file__):
                    continue
                try:
                    files[os.path.relpath(p, repo)] = open(p, encoding="utf-8", errors="replace").read()
                except OSError:
                    pass
    return files


def find_hex(files, value):
    pat = re.compile(r"0x0*%x(?![0-9a-fA-F])" % value, re.I)
    return sorted(p for p, t in files.items() if pat.search(t))


def main():
    repo = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    ap.add_argument("--stock", default=os.path.join(os.path.dirname(repo), "vince-stock"))
    args = ap.parse_args()
    dts_dir = os.path.join(args.stock, QCOM)
    files = scan_repo(repo)
    problems = 0

    for name, dtsi, label, idx, required in BLOCKS:
        body = node_body(open(os.path.join(dts_dir, dtsi)).read(), label)
        addrs = reg_addrs(body) if body else []
        if idx >= len(addrs):
            print(f"[ERR ] {name}: no reg[{idx}] for &{label} in {dtsi}")
            problems += 1
            continue
        hits = find_hex(files, addrs[idx])
        status = "OK  " if hits else ("MISS" if required else "----")
        problems += not hits and required
        where = ", ".join(hits[:4]) + (" ..." if len(hits) > 4 else "")
        print(f"[{status}] {name:28} 0x{addrs[idx]:08x}  {where or '(no aparece en el repo)'}")

    for name, dtsi, rx in GPIOS:
        m = re.search(rx, open(os.path.join(dts_dir, dtsi)).read())
        if not m:
            print(f"[ERR ] {name}: patrón no encontrado en {dtsi}")
            problems += 1
            continue
        gpio = int(m.group(1))
        pat = re.compile(r"(?i)gpio[^\n]{0,40}\b%d\b|\b%d\b[^\n]{0,40}gpio" % (gpio, gpio))
        hits = sorted(p for p, t in files.items() if pat.search(t))
        problems += not hits
        print(f"[{'OK  ' if hits else 'MISS'}] {name:28} GPIO {gpio:<5}     {', '.join(hits[:4]) or '(no aparece en el repo)'}")

    print(f"\n{problems} problema(s)")
    return 1 if problems else 0


if __name__ == "__main__":
    sys.exit(main())
