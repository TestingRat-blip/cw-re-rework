"""Extract the town house's MODULE-TYPE LAYOUT TABLES straight out of Server.exe.

`FUN_004e28e0`'s house pass writes the 3x3x4 module grid of every house as a run of
hardcoded `VoxelGrid_cellAt3D(house, a, b, c)` + `mov byte [eax + f], v` pairs, selected by
a small decision tree over `plot[+0x10]` and up to four `rand()`s (0x4e6520-0x4e6f8d).
There are hundreds of those pairs. Typing them out by hand is exactly the mistake that put
17 and 109 wrong entries into CwZoneCreatures' species tables and hid there until a
second-order consequence surfaced (HANDOFF_PROMPT.md lesson 7c), so nothing here is typed.

    python tools/extract_house_layouts.py            # human-readable dump
    python tools/extract_house_layouts.py --json     # machine-readable, for the gate/port
    python tools/extract_house_layouts.py --cpp      # the C++ table CwTown.h carries

## Why an INTERPRETER and not a disassembly scrape

Two things defeat reading the region off the listing, and both bit the earlier drafts:

  * MSVC hoists the three `push imm` of a cell lookup ABOVE the conditional branch that
    chooses between two variants (0x4e6880-0x4e6886), so both successors share them. A
    block-at-a-time scan gives that cell to one variant and leaves the other short.
  * the store for call N is emitted AFTER the pushes for call N+1, and it is not always
    `mov byte [eax], t` -- the cell record has fields at +2, +3 and +8 as well, written 19
    times here. Matching only `[eax]` drops those AND leaves the call unpaired, shifting
    every later assignment in the block.

The whole region is 30 distinct instruction forms, so it is simply executed. `simulate()`
is then exactly the function the port needs: `(plot[+0x10], draws) -> grid`, and the gate
drives it with the LIVE recorded draw values.
"""
import argparse
import itertools
import json
import os
import re
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
LO, END = 0x4E6520, 0x4E6F8D     # the type-grid decision tree; END is where it converges
CELL_AT = 0x4D1950               # VoxelGrid_cellAt3D(this, a, b, c), thiscall
HOUSE_CTOR = 0x4E1F80
RAND = 0x5582F4                  # the msvcrt rand() import slot
# Calls in this region that provably cannot touch the module grid. 0x41cb40 is
# `vector::size()` for the site's 0x188-byte prop records (the 0x5397829d/`sar 7`
# reciprocal divide by 0x188) -- the house pass saves it so it knows where its own props
# start. It is the ONLY one; anything else halts the interpreter rather than being
# skipped, so a call that writes a cell can never disappear quietly.
PURE_CALLS = {0x41CB40}
M32 = 0xFFFFFFFF

RE_LINE = re.compile(r"^([0-9a-f]{8})\s+([0-9a-f]+)\s+(.*)$")


def _s32(v):
    v &= M32
    return v - (1 << 32) if v & 0x80000000 else v


class Halt(Exception):
    pass


def disasm(lo, hi):
    out = subprocess.run([sys.executable, os.path.join(HERE, "disasm_range.py"),
                          hex(lo), hex(hi), "--no-data"],
                         capture_output=True, text=True, check=True).stdout
    prog, order = {}, []
    for line in out.splitlines():
        m = RE_LINE.match(line.rstrip())
        if not m:
            continue
        addr = int(m.group(1), 16)
        prog[addr] = m.group(3).split(";")[0].strip()
        order.append(addr)
    nxt = {a: (order[i + 1] if i + 1 < len(order) else None) for i, a in enumerate(order)}
    return prog, nxt


def simulate(prog, nxt, sub, rot, draws, limit=20000):
    """Run 0x4e6520..0x4e6f8d with plot[+0x10] = sub and rand() drawing from `draws`.

    Returns (grid, used, house) -- grid is {(a,b,c,field): value}, `used` the draw values
    actually consumed, `house` the two house-object fields the region writes.
    """
    reg = {"eax": 0, "ecx": 0, "edx": 0, "esi": 0, "edi": 0}
    zf = sf = 0
    pend, grid, used, house = [], {}, [], {}
    it = iter(draws)
    pc = LO
    steps = 0
    while pc is not None and LO <= pc < END:
        steps += 1
        if steps > limit:
            raise Halt("step limit at %s" % hex(pc))
        ins = prog[pc]
        nx = nxt[pc]

        if ins.startswith("push "):
            arg = ins[5:]
            pend.append(int(arg, 0) if re.fullmatch(r"-?(0x[0-9a-f]+|\d+)", arg) else None)
            pc = nx
            continue
        if ins.startswith("call dword ptr ["):
            slot = int(ins[ins.index("[") + 1:ins.index("]")], 16)
            if slot != RAND:
                raise Halt("unknown indirect call at %s" % hex(pc))
            try:
                v = next(it)
            except StopIteration:
                raise Halt("ran out of draws at %s" % hex(pc))
            used.append(v)
            reg["eax"] = v & M32
            pend.clear()
            pc = nx
            continue
        if ins.startswith("call "):
            tgt = int(ins.split()[1], 16)
            if tgt == CELL_AT:
                if len(pend) < 3 or any(p is None for p in pend[-3:]):
                    raise Halt("cellAt3D without three immediates at %s" % hex(pc))
                c, b, a = pend[-3:]
                del pend[-3:]
                reg["eax"] = ("cell", a, b, c)
            elif tgt == HOUSE_CTOR:
                reg["eax"] = ("house",)
                pend.clear()
            elif tgt in PURE_CALLS:
                # Whitelisted by NAME, not skipped by default: an unmodelled call is a
                # hard error, because one that writes a cell would vanish silently.
                reg["eax"] = 0
                pend.clear()
            else:
                raise Halt("unknown call %s at %s" % (hex(tgt), hex(pc)))
            pc = nx
            continue

        m = re.fullmatch(r"mov byte ptr \[eax(?: \+ (\d+|0x[0-9a-f]+))?\], (\d+|0x[0-9a-f]+)", ins)
        if m:
            tgt = reg["eax"]
            if not (isinstance(tgt, tuple) and tgt[0] == "cell"):
                raise Halt("byte store to a non-cell at %s" % hex(pc))
            f = int(m.group(1), 0) if m.group(1) else 0
            grid[(tgt[1], tgt[2], tgt[3], f)] = int(m.group(2), 0)
            pc = nx
            continue
        m = re.fullmatch(r"mov dword ptr \[eax \+ (0x[0-9a-f]+|\d+)\], ecx", ins)
        if m:
            house[int(m.group(1), 0)] = reg["ecx"]
            pc = nx
            continue
        m = re.fullmatch(r"mov dword ptr \[ebp - (0x[0-9a-f]+)\], eax", ins)
        if m:
            reg["m" + m.group(1)] = reg["eax"]
            pc = nx
            continue
        m = re.fullmatch(r"mov (eax|ecx|edx) , ?dword ptr \[ebp - (0x[0-9a-f]+)\]".replace(" , ?", ", "), ins)
        if m:
            reg[m.group(1)] = reg.get("m" + m.group(2), 0)
            pc = nx
            continue
        # plot[+0x10] (the promotion sub-role) and plot[+0x14] (the rotation) -- the two
        # inputs the whole selector reads. Both are `[reg + edx*4 + disp]` with edx the
        # plot index times seven.
        m = re.fullmatch(r"mov ecx, dword ptr \[(eax|ecx) \+ edx\*4 \+ (0x[0-9a-f]+)\]", ins)
        if m:
            d = int(m.group(2), 0)
            reg["ecx"] = sub if d == 0x10 else rot if d == 0x14 else 0
            pc = nx
            continue
        m = re.fullmatch(r"mov ecx, (\d+)", ins)
        if m:
            reg["ecx"] = int(m.group(1))
            pc = nx
            continue
        if ins == "mov ecx, eax":
            reg["ecx"] = reg["eax"]
            pc = nx
            continue
        m = re.fullmatch(r"lea eax, \[edi \+ (0x[0-9a-f]+)\]", ins)
        if m:
            reg["eax"] = ("ptr", int(m.group(1), 0))
            pc = nx
            continue
        if ins == "xor eax, eax":
            reg["eax"] = 0
            zf, sf = 1, 0
            pc = nx
            continue
        m = re.fullmatch(r"(and|or) eax, (0x[0-9a-f]+)", ins)
        if m:
            v = int(m.group(2), 0)
            reg["eax"] = (reg["eax"] & v if m.group(1) == "and" else reg["eax"] | v) & M32
            zf, sf = int(reg["eax"] == 0), (reg["eax"] >> 31) & 1
            pc = nx
            continue
        m = re.fullmatch(r"(inc|dec) (eax|edx)", ins)
        if m:
            r = m.group(2)
            reg[r] = (reg[r] + (1 if m.group(1) == "inc" else -1)) & M32
            zf, sf = int(reg[r] == 0), (reg[r] >> 31) & 1
            pc = nx
            continue
        m = re.fullmatch(r"sub edx, (\d+)", ins)
        if m:
            reg["edx"] = (reg["edx"] - int(m.group(1))) & M32
            zf, sf = int(reg["edx"] == 0), (reg["edx"] >> 31) & 1
            pc = nx
            continue
        m = re.fullmatch(r"cmp ecx, (\d+)", ins)
        if m:
            d = _s32(reg["ecx"]) - int(m.group(1))
            zf, sf = int(d == 0), int(d < 0)
            pc = nx
            continue
        if ins == "cdq":
            reg["edx"] = M32 if (reg["eax"] >> 31) & 1 else 0
            pc = nx
            continue
        if ins == "idiv ecx":
            n = _s32(reg["eax"]) if reg["edx"] in (0, M32) else None
            if n is None:
                raise Halt("idiv with a wide dividend at %s" % hex(pc))
            d = _s32(reg["ecx"])
            q = int(abs(n) // abs(d)) * (1 if (n < 0) == (d < 0) else -1)
            reg["eax"], reg["edx"] = q & M32, (n - q * d) & M32
            pc = nx
            continue
        m = re.fullmatch(r"(je|jne|jns|jmp) (0x[0-9a-f]+)", ins)
        if m:
            k, tgt = m.group(1), int(m.group(2), 16)
            take = (k == "jmp" or (k == "je" and zf) or (k == "jne" and not zf)
                    or (k == "jns" and not sf))
            pc = tgt if take else nx
            continue
        raise Halt("unhandled %r at %s" % (ins, hex(pc)))
    return grid, used, house


# The selector, as the interpreter proves it out. Each entry is the DRAW ALPHABET that
# realises every distinct outcome; `simulate` reports how many are actually consumed.
def enumerate_layouts(prog, nxt):
    out = {}
    cases = []
    for sub in (0, 1, 2, 3, 4, 5):
        for tup in itertools.product((0, 1, 2), repeat=4):
            cases.append((sub, tup))
    for sub, tup in cases:
        try:
            grid, used, house = simulate(prog, nxt, sub, 0, list(tup) + [0] * 8)
        except Halt:
            continue
        key = (sub if sub in (0, 1) else 2, tuple(used))
        out.setdefault(key, (grid, house))
    return out


def canon(grid):
    return tuple(sorted(grid.items()))


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--json", action="store_true")
    ap.add_argument("--cpp", action="store_true")
    args = ap.parse_args()

    prog, nxt = disasm(LO, END + 0x20)
    table = enumerate_layouts(prog, nxt)

    # collapse to distinct grids
    grids, order = {}, []
    entries = []
    for (subc, used), (grid, house) in sorted(table.items()):
        k = canon(grid)
        if k not in grids:
            grids[k] = len(order)
            order.append(grid)
        entries.append({"subClass": subc, "draws": list(used), "layout": grids[k]})

    layouts = []
    for g in order:
        types = {(a, b, c): v for (a, b, c, f), v in g.items() if f == 0}
        layouts.append({
            "types": [[a, b, c, v] for (a, b, c), v in sorted(types.items())],
            "extra": [[a, b, c, f, v] for (a, b, c, f), v in sorted(g.items()) if f != 0],
            "nType5": sum(1 for v in types.values() if v == 5),
            "nAssigned": len(types),
        })

    if args.json:
        json.dump({"layouts": layouts, "entries": entries}, sys.stdout, indent=1)
        return 0

    if args.cpp:
        # Normalised selector key: for plot[+0x10] == 0 the first draw is taken % 3 and
        # every later one & 1; for == 1 the single draw is & 1; for 2..5 there is no
        # draw at all. Verified by construction -- the interpreter was run over the whole
        # {0,1,2} alphabet and draw values that agree under this reduction land on the
        # same grid every time.
        sel = {}
        for e in entries:
            d = e["draws"]
            if e["subClass"] == 0:
                key = (0, d[0] % 3) + tuple(v & 1 for v in d[1:])
            elif e["subClass"] == 1:
                key = (1, d[0] & 1)
            else:
                key = (2,)
            if key in sel and sel[key] != e["layout"]:
                raise SystemExit("selector key %s is ambiguous: %d vs %d"
                                 % (key, sel[key], e["layout"]))
            sel[key] = e["layout"]

        print("// GENERATED by tools/extract_house_layouts.py in cw_decomp -- DO NOT EDIT.")
        print("// It executes 0x4e6520-0x4e6f8d out of Server.exe; gate_town_house.py")
        print("// re-runs it every time and diffs the result against these literals, so a")
        print("// hand edit here fails the gate rather than surviving (lesson 7c).")
        print("//")
        print("// %d module grids, %d selector outcomes." % (len(layouts), len(sel)))
        print("#pragma once")
        print("#include <cstdint>")
        print("")
        print("namespace vx::cw {")
        print("")
        print("// One module grid: 3 x 3 x 4 type bytes, index a*12 + b*4 + c. 0 = unset")
        print("// (the ctor leaves it), 1 wall, 2 base, 3 roof, 5 door.")
        print("struct HouseLayout { uint8_t type[36]; uint8_t nDoors; };")
        print("")
        print("constexpr HouseLayout kHouseLayouts[%d] = {" % len(layouts))
        for i, L in enumerate(layouts):
            g = {(a, b, c): v for a, b, c, v in L["types"]}
            flat = [g.get((a, b, c), 0) for a in range(3) for b in range(3) for c in range(4)]
            print("    {{%s}, %d},   // %2d" % (",".join(str(v) for v in flat), L["nType5"], i))
        print("};")
        print("")
        print("// The selector, keyed as described above.")
        print("//   plot[+0x10] in 2..5 -> kHouseFixed, no draw")
        print("//   plot[+0x10] == 1    -> kHouseSub1[rand() & 1], one draw")
        print("//   otherwise           -> kHouseSub0[rand()%%3][..], three or four draws")
        print("constexpr int kHouseFixed = %d;" % sel[(2,)])
        print("constexpr int kHouseSub1[2] = {%s};"
              % ", ".join(str(sel[(1, c)]) for c in (0, 1)))
        v1 = [[sel[(0, 1, a, b)] for b in (0, 1)] for a in (0, 1)]
        print("// v == 1 spends only TWO coins; the other two residues spend three.")
        print("constexpr int kHouseSub0v1[2][2] = {%s};"
              % ", ".join("{%d, %d}" % (r[0], r[1]) for r in v1))
        for v in (0, 2):
            rows = []
            for a in (0, 1):
                for b in (0, 1):
                    rows.append("{%d, %d}" % (sel[(0, v, a, b, 0)], sel[(0, v, a, b, 1)]))
            print("constexpr int kHouseSub0v%d[2][2][2] = {{%s, %s}, {%s, %s}};"
                  % (v, rows[0], rows[1], rows[2], rows[3]))
        print("")
        print("}  // namespace vx::cw")
        return 0

    print("house module layouts, executed out of Server.exe %s-%s" % (hex(LO), hex(END)))
    print("  %d selector outcomes -> %d distinct grids" % (len(entries), len(layouts)))
    bysub = {}
    for e in entries:
        bysub.setdefault(e["subClass"], []).append(e)
    for s in sorted(bysub):
        name = {0: "plot[+0x10] == 0", 1: "plot[+0x10] == 1", 2: "plot[+0x10] in 2..5"}[s]
        ds = {len(e["draws"]) for e in bysub[s]}
        print("\n  %-22s %2d outcomes, %s draw(s) each"
              % (name, len(bysub[s]), sorted(ds)))
        for e in sorted(bysub[s], key=lambda e: e["draws"]):
            L = layouts[e["layout"]]
            print("      draws %-12s -> layout %2d  (%d assigned, %d type-5, %d orientation draws)"
                  % (str(e["draws"]), e["layout"], L["nAssigned"], L["nType5"],
                     36 - L["nType5"]))
    print("\n  distinct grids:")
    for i, L in enumerate(layouts):
        g = {(a, b, c): v for a, b, c, v in L["types"]}
        print("    layout %2d  type-5 %d" % (i, L["nType5"]))
        for c in range(4):
            print("       z=%d  %s" % (c, "  ".join(
                "".join(str(g.get((a, b, c), 0)) for b in range(3)) for a in range(3))))
        if L["extra"]:
            print("       extra: %s" % L["extra"])
    return 0


if __name__ == "__main__":
    sys.exit(main())
