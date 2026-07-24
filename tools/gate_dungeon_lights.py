#!/usr/bin/env python3
"""Gate: the dungeon's two light sources -- the torch (kind 7) and the wall stub (kind 4).

Both are records in the assembler's prop vector at `site+0xc` (0x188-byte entries, kind at
+0x00, pushed by FUN_004d6670). Layout of the two light kinds:

    +0x00  kind            +0x20  direction
    +0x08  position, 3 x int64 16.16 (exact <<16 -- no float anywhere)
    +0x24  SIZE, 3 floats  -- the box-fill loop reads it as extents, it is not a colour
    +0x34  flicker phase (kind 7 only)

TORCH -- kind 7, emitted at 0x5059f1, three draws:

    reached iff  cell.kind == 3  and  !(cell.flags & 1)  and  grid(I,J,K-1).kind != 3
    if [ebp+0x1c] != 0:      no torches at all in this dungeon
    if rand() % 40 != 0:     no torch here
    dir = rand() % 4 ;  flicker = rand() % 4000
    pos = cellOrigin + (5, 5, 1) ;  size = (10, 10, 10)

STUB -- kind 4, four emitters (0x504b58 / 0x504cfc / 0x504ea8 / 0x505046), no draws of their
own beyond one coin each:

    only if style in {0, 1, 3}, cell.kind != 4, !(cell.flags & 1)
    per direction, in order 0, 2, 3, 1:
        if rand() % 2 == 0:                 skip   (the coin is always drawn)
        if grid(I+dI, J+dJ, K).kind != 0:   skip   (the neighbour must be solid rock)
        if solid(<a point outside that wall face>): skip   <- terrain probe, NOT modelled
        emit at cellOrigin + offset, size (2.0, 0.2, 4.0)

    dir  0 -> neighbour (0,-1), offset (5, -1, 2)      dir 2 -> (0,+1), (5, 11, 2)
    dir  3 -> neighbour (-1,0), offset (-1, 5, 2)      dir 1 -> (+1,0), (11, 5, 2)

Note the stub's direction encoding is NOT the mob pass's: there west=0/east=2/south=3/north=1,
here south=0/north=2/west=3/east=1.

Reads raw/dungeon_props_capture*.json (tools/frida_dungeon_props.py).
"""
import base64
import json
import os
import struct
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from gate_50702a_mobs import CellGrid                                   # noqa: E402

RAW = os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "raw")

T_GATE, T_ROT, T_FLICKER = 0x1058EF, 0x1059BB, 0x1059D9
STUB_COINS = {0x1049B7: 0, 0x104B6E: 2, 0x104D12: 3, 0x104EBE: 1}
# direction -> (neighbour delta, position offset, emitter return address)
STUBS = {0: ((0, -1), (5, -1, 2), 0x104B5D), 2: ((0, 1), (5, 11, 2), 0x104D01),
         3: ((-1, 0), (-1, 5, 2), 0x104EAD), 1: ((1, 0), (11, 5, 2), 0x10504B)}
STUB_ORDER = [0, 2, 3, 1]
STUB_STYLES = {0, 1, 3}


def rec(b):
    return {"kind": b[0],
            "pos": [struct.unpack_from("<q", b, 8 + i * 8)[0] for i in range(3)],
            "dir": struct.unpack_from("<i", b, 0x20)[0],
            "size": [round(struct.unpack_from("<f", b, 0x24 + i * 4)[0], 4) for i in range(3)],
            "flicker": struct.unpack_from("<i", b, 0x34)[0]}


def one(name):
    cap = json.load(open(os.path.join(RAW, name)))
    g = cap["grids"][0]
    grid = CellGrid(g["rot"], g["mirror"], g["dimX"], g["dimY"], g["dimZ"],
                    base64.b64decode(g["bytes_b64"]))
    bx, by, bz, style = g["baseX"], g["baseY"], g["baseZ"], g["style"]
    print(f"== {name}  zone {tuple(cap['zone'])}  style {style}  p1c {g['p1c']}")
    ok = True

    props = [(p, base64.b64decode(p["b"])) for p in cap["props"]]
    draws = cap["torch_rands"]

    # ---- TORCH: which cells reach the 1-in-40 gate, and what it decides -----------------
    model_cells = [(i, j, k)
                   for i in range(grid.dim_x) for j in range(grid.dim_y)
                   for k in range(grid.dim_z)
                   if grid.cell(i, j, k)[0] == 3 and not (grid.cell(i, j, k)[1] & 1)
                   and grid.kind(i, j, k - 1) != 3]
    gates = [d for d in draws if d["ra"] == T_GATE]
    live_cells = [(d["I"], d["J"], d["K"]) for d in gates]
    ok &= check("torch gate reached at exactly these cells, in order",
                model_cells if g["p1c"] == 0 else [], live_cells)

    # the decision, and the two parameters of each torch that fires
    it = iter([d for d in draws if d["ra"] in (T_ROT, T_FLICKER)])
    model_t = []
    for d in gates:
        if d["v"] % 40:
            continue
        i, j, k = d["I"], d["J"], d["K"]
        model_t.append({"kind": 7,
                        "pos": [(bx + i * 10 + 5) << 16, (by + j * 10 + 5) << 16,
                                (bz + k * 10 + 1) << 16],
                        "dir": next(it)["v"] % 4, "size": [10.0, 10.0, 10.0],
                        "flicker": next(it)["v"] % 4000})
    live_t = [rec(b) for _, b in props if b[0] == 7]
    ok &= check("torch records (pos, dir, size, flicker)", model_t, live_t)

    # ---- STUB: coin + neighbour are derivable; the terrain probe is not ------------------
    coins = {}
    for d in draws:
        if d["ra"] in STUB_COINS:
            coins.setdefault((d["I"], d["J"], d["K"], STUB_COINS[d["ra"]]), d["v"])
    live_s = [(p["I"], p["J"], p["K"], rec(b)["dir"], rec(b)) for p, b in props if b[0] == 4]
    cand, bad = [], []
    if style in STUB_STYLES:
        for i, j, k in [(a, b_, c) for a in range(grid.dim_x) for b_ in range(grid.dim_y)
                        for c in range(grid.dim_z)]:
            kind, flags = grid.cell(i, j, k)
            if kind not in (3, 4) or kind == 4 or (flags & 1):
                continue
            for d in STUB_ORDER:
                (di, dj), off, _ = STUBS[d]
                v = coins.get((i, j, k, d))
                if v is None or v % 2 == 0:
                    continue
                if grid.kind(i + di, j + dj, k) != 0:
                    continue
                cand.append((i, j, k, d,
                             {"kind": 4,
                              "pos": [(bx + i * 10 + off[0]) << 16,
                                      (by + j * 10 + off[1]) << 16,
                                      (bz + k * 10 + off[2]) << 16],
                              "dir": d, "size": [2.0, 0.2, 4.0], "flicker": 0}))
    emitted = {(a, b_, c, d) for a, b_, c, d, _ in live_s}
    for a, b_, c, d, m in cand:
        if (a, b_, c, d) in emitted:
            live = next(r for x, y, z, dd, r in live_s if (x, y, z, dd) == (a, b_, c, d))
            if live != m:
                bad.append(((a, b_, c, d), m, live))
    missing = [x[:4] for x in live_s if x[:4] not in {c[:4] for c in cand}]
    ok &= check("every stub emitted was a coin+neighbour candidate", [], missing)
    ok &= check("stub records (pos, dir, size) for the emitted candidates", [], bad)
    print(f"   stubs: {len(live_s)} emitted of {len(cand)} coin+neighbour candidates "
          f"({len(cand) - len(live_s)} rejected by the un-modelled terrain probe)")

    print("  " + ("GATE PASS" if ok else "GATE FAIL"))
    return 0 if ok else 1


def check(what, model, live):
    if model == live:
        print(f"[PASS] {what}: {len(live)}")
        return True
    print(f"[FAIL] {what}: model {len(model)} vs live {len(live)}")
    for n, (a, b) in enumerate(zip(model, live)):
        if a != b:
            print(f"   first diff at {n}: model {a}  live {b}")
            break
    return False


def main():
    args = sys.argv[1:]
    if not args or args == ["--all"]:
        names = sorted(f for f in os.listdir(RAW) if f.startswith("dungeon_props_capture"))
        if args != ["--all"]:
            names = ["dungeon_props_capture.json"]
    else:
        names = args
    rc = 0
    for n in names:
        rc |= one(n)
        print()
    if len(names) > 1:
        print(f"== {len(names)} dungeons  " + ("ALL PASS" if rc == 0 else "FAILURES"))
    return rc


if __name__ == "__main__":
    sys.exit(main())
