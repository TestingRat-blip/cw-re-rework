#!/usr/bin/env python3
"""Extract the client's TYPE -> MODEL tables for the two static-entity namespaces.

`RE_zone_props.md` left this open:

> **Ids beyond the table.** `assets/props/prop_ids.json` stops at 0x37; `0x41`, `0x42`
> and `0x45` are unnamed. The client's type->slot table is the source the existing rows
> came from.

There is such a table, and it is not a table -- it is a straight-line init block in
`Cube.exe` at **`0x461ca0`-`0x4634e0`** that fills two `vector<VoxelModel*>` members of
the client's world object, one entry at a time:

    push  <type>                       ; the slot index
    lea   ecx, [ebx + <ARRAY>]         ; +0x800718 or +0x800724
    call  0x468c60                     ; &array[type]
    push  <dbId>                       ; the world model-DB index
    mov   ecx, edi                     ; edi = the model DB
    call  0x4120c0                     ; &db[dbId]
    mov   [esi], eax                   ; array[type] = &db[dbId]

**The two arrays are different namespaces**, which is the whole reason the ids looked
unreachable:

* **`world+0x800718`** -- vegetation and wall decor (flowers, grass, signs, torches,
  liana, chandelier, cobwebs). This is the "hanging" namespace `prop_ids.json` already
  documents, and this extraction reproduces those rows exactly.
* **`world+0x800724`** -- the **static-entity / prop** namespace the server's prop
  emitters write into `descriptor[0]`. Sized to 78 slots by a `resize(0x4e)` at
  `0x462c02`.

Reading the decompile instead of the disassembly merges the two (the `this` pointer is
implicit in a thiscall, so both arrays print as a bare `vector_at_stride4(type)`), which
produces a single bogus table where every low type is assigned twice.

    python tools/extract_prop_models.py        -> raw/static_prop_models.json
"""
import json
import os
import re
import struct
import sys

try:
    import capstone
except ImportError:                                            # pragma: no cover
    sys.exit("needs capstone (pip install capstone)")

HERE = os.path.dirname(os.path.abspath(__file__))
RAW = os.path.join(HERE, "..", "raw")
CUBE = r"C:\Users\asuna\Desktop\RatRealms\CubegameV1\Cube.exe"
MODEL_MAP = os.path.normpath(os.path.join(
    HERE, "..", "..", "cw_rederive", "model_id_map.json"))

START, END = 0x461C00, 0x463800          # the init block, with slack either side
ARR_VEG = 0x800718
ARR_PROP = 0x800724


def sections(data):
    pe = struct.unpack_from("<I", data, 0x3C)[0]
    nsec = struct.unpack_from("<H", data, pe + 6)[0]
    optsz = struct.unpack_from("<H", data, pe + 20)[0]
    base = struct.unpack_from("<I", data, pe + 24 + 28)[0]
    off, secs = pe + 24 + optsz, []
    for _ in range(nsec):
        nm = data[off:off + 8].rstrip(b"\0").decode("latin1")
        vsz, va, rsz, ptr = struct.unpack_from("<IIII", data, off + 8)
        secs.append((nm, va, vsz, ptr, rsz))
        off += 40
    return base, secs


def main():
    if not os.path.exists(CUBE):
        sys.exit("no Cube.exe at %s" % CUBE)
    data = open(CUBE, "rb").read()
    base, secs = sections(data)
    txt = [s for s in secs if s[0] == ".text"][0]
    off = txt[3] + (START - base - txt[1])
    md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)

    tables, idx, arr = {}, None, None
    resize = {}
    for ins in md.disasm(data[off:off + (END - START)], START):
        text = "%s %s" % (ins.mnemonic, ins.op_str)
        m = re.fullmatch(r"push (0x[0-9a-f]+|\d+)", text)
        if m:
            v = int(m.group(1), 0)
            if arr is None:
                idx = v
            else:
                tables.setdefault(arr, {})[idx] = v
                arr, idx = None, None
            continue
        m = re.fullmatch(r"lea ecx, \[ebx \+ (0x[0-9a-f]+)\]", text)
        if m and idx is not None:
            arr = int(m.group(1), 0)
            continue
        # the `resize(n)` that sizes an array is a `push n; lea ecx; call 0x4871e0`
        if text == "call 0x4871e0" and arr is not None:
            resize[arr] = idx
            arr, idx = None, None

    names = {}
    if os.path.exists(MODEL_MAP):
        db = json.load(open(MODEL_MAP, encoding="utf-8"))["world_model_db"]
        names = {int(k): v["name"] for k, v in db.items()}

    out = {}
    for arr_off, label in ((ARR_PROP, "static_prop"), (ARR_VEG, "veg_decor")):
        t = tables.get(arr_off, {})
        out[label] = {
            "array": "world+0x%06x" % arr_off,
            "slots": resize.get(arr_off),
            "types": {str(k): {"db": v, "model": names.get(v, "?")}
                      for k, v in sorted(t.items())},
        }
        print("%s  world+0x%06x  %d assigned, %s slots"
              % (label, arr_off, len(t), resize.get(arr_off)))
        for k in sorted(t):
            print("   type %3d (0x%02x)  db %4d  %s" % (k, k, t[k], names.get(t[k], "?")))
        missing = [i for i in range(resize.get(arr_off) or 0) if i not in t]
        print("   unassigned slots: %s" % missing)
        out[label]["unassigned"] = missing

    path = os.path.join(RAW, "static_prop_models.json")
    json.dump(out, open(path, "w", encoding="utf-8"), indent=1)
    print("-> %s" % os.path.abspath(path))
    return 0


if __name__ == "__main__":
    sys.exit(main())
