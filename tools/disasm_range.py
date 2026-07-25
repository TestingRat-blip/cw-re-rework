#!/usr/bin/env python3
"""Disassemble a VA range out of Server.exe / Cube.exe, annotating call targets.

    python tools/disasm_range.py 0x51d396 0x51e5c7            # Server.exe
    python tools/disasm_range.py --cube 0x461ca0 0x461d00

Call/jump targets get the name from `raw/labels.json` when we have one, plus the
function name Ghidra's metadata carries. Data references into `.rdata` are shown as
the float/double they most likely are, because the worldgen constants are what these
ranges are made of.
"""
import argparse
import json
import os
import struct
import sys

try:
    import capstone
except ImportError:                                            # pragma: no cover
    sys.exit("needs capstone (pip install capstone)")

HERE = os.path.dirname(os.path.abspath(__file__))
RAW = os.path.join(HERE, "..", "raw")
GAME = r"C:\Users\asuna\Desktop\RatRealms\CubegameV1"


def sections(data):
    pe = struct.unpack_from("<I", data, 0x3C)[0]
    nsec = struct.unpack_from("<H", data, pe + 6)[0]
    optsz = struct.unpack_from("<H", data, pe + 20)[0]
    base = struct.unpack_from("<I", data, pe + 24 + 28)[0]
    off, secs = pe + 24 + optsz, []
    for _ in range(nsec):
        nm = data[off:off + 8].rstrip(b"\0").decode("latin1")
        vsz, va, rsz, ptr = struct.unpack_from("<IIII", data, off + 8)
        secs.append((nm, base + va, vsz, ptr, rsz))
        off += 40
    return base, secs


class Image(object):
    def __init__(self, path):
        self.data = open(path, "rb").read()
        self.base, self.secs = sections(self.data)

    def off(self, va):
        for nm, sva, vsz, ptr, rsz in self.secs:
            if sva <= va < sva + max(vsz, rsz):
                d = va - sva
                return (ptr + d) if d < rsz else None
        return None

    def read(self, va, n):
        o = self.off(va)
        if o is None:
            return None
        return self.data[o:o + n]

    def sec_of(self, va):
        for nm, sva, vsz, ptr, rsz in self.secs:
            if sva <= va < sva + max(vsz, rsz):
                return nm
        return None


def load_names(prog):
    names = {}
    p = os.path.join(RAW, "labels.json")
    if os.path.exists(p):
        lab = json.load(open(p, encoding="utf-8"))
        for key in (prog, prog.replace(".exe", "")):
            d = lab.get(key)
            if isinstance(d, dict):
                for a, v in d.items():
                    try:
                        va = int(a, 16) if isinstance(a, str) else int(a)
                    except ValueError:
                        continue
                    names[va] = v if isinstance(v, str) else (
                        v.get("name") or v.get("label") or str(v))
    p = os.path.join(RAW, prog + ".meta.jsonl")
    if os.path.exists(p):
        for line in open(p, encoding="utf-8", errors="replace"):
            line = line.strip()
            if not line:
                continue
            try:
                r = json.loads(line)
            except ValueError:
                continue
            a = r.get("addr") or r.get("address") or r.get("entry")
            if a is None:
                continue
            va = int(str(a), 16) if not isinstance(a, int) else a
            nm = r.get("name")
            if nm and va not in names:
                names[va] = nm
    return names


def fmt_data(img, va):
    b = img.read(va, 8)
    if not b or len(b) < 8:
        return ""
    f = struct.unpack_from("<f", b)[0]
    d = struct.unpack_from("<d", b)[0]
    i = struct.unpack_from("<i", b)[0]
    bits = []
    if abs(f) > 1e-30 and abs(f) < 1e30:
        bits.append("f32=%g" % f)
    if abs(d) > 1e-30 and abs(d) < 1e30:
        bits.append("f64=%g" % d)
    bits.append("i32=%d" % i)
    return "  ; " + " ".join(bits)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("start")
    ap.add_argument("end")
    ap.add_argument("--cube", action="store_true")
    ap.add_argument("--no-data", action="store_true")
    a = ap.parse_args()
    prog = "Cube.exe" if a.cube else "Server.exe"
    img = Image(os.path.join(GAME, prog))
    names = load_names(prog)
    start, end = int(a.start, 0), int(a.end, 0)
    code = img.read(start, end - start)
    md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    md.detail = True
    for ins in md.disasm(code, start):
        line = "%08x  %-22s %s %s" % (
            ins.address, ins.bytes.hex(), ins.mnemonic, ins.op_str)
        ann = ""
        if ins.mnemonic.startswith(("call", "j")) and ins.op_str.startswith("0x"):
            t = int(ins.op_str, 16)
            if t in names:
                ann = "  ; %s" % names[t]
        elif not a.no_data:
            for tok in ins.op_str.replace("[", " ").replace("]", " ").split():
                if tok.startswith("0x") and len(tok) >= 8:
                    try:
                        t = int(tok, 16)
                    except ValueError:
                        continue
                    if img.sec_of(t) == ".rdata" or img.sec_of(t) == ".data":
                        ann = fmt_data(img, t)
        print(line + ann)


if __name__ == "__main__":
    main()
