#!/usr/bin/env python3
"""Gate: the `counter` that feeds `monster_level_formula` is the feature loop index.

`RE_dungeon_level_rank.md` left one input open -- the value at `[esp+0x28]` in `FUN_0050e080`
that the level formula is fed:

    0050eab1   level = ftol( FUN_00411090( (float)[esp+0x28] * 0.015625f ) )

The disassembly settles it. `[esp+0x28]` is the induction variable of the **candidate-processing
loop** (Pass 3 of the feature generator):

    0050ea0c   xor ecx, ecx
    0050ea0e   mov [esp+0x28], ecx            ; counter = 0
    0050ea12   cmp eax, esi / je  0x50f28a    ; candidate list empty -> loop exits
    0050ea1a   test cl, 1 / jne 0x50f27c      ; ODD counter -> no work, just increment
    ...
    0050eab1   ... level = f(counter)
    0050eabc   and eax, 0x80000001            ; bit 1 of counter -> the DUNGEON branch
    ...
    0050f27c   inc ecx / mov [esp+0x28], ecx
    0050f281   cmp ecx, 0x40 / jl 0x50ea12    ; 64 iterations

So the counter runs 0..63; even iterations pop one candidate off the sorted list, and the
`(counter >> 1) & 1` branch at `0x50eac8` is the one that makes the cell a dungeon (type 0xe).

Two consequences:

  * a dungeon can only ever sit at a counter `== 2 (mod 4)`, so every observed level pins to a
    UNIQUE counter -- the three ranges `RE_dungeon_level_rank.md` could not narrow (levels
    1, 3 and 6) collapse to 2, 6 and 14;
  * `cw_rederive` already computes it. `cw_featuregen.pass3` iterates exactly this `idx` and
    calls it `_sub_count(idx)`, using the value only to gate the rank draw. It IS the level.

This gate derives the counter ab-initio -- generate the region's feature grid from the seed,
locate the type-0xe cell that lands in the captured zone, take its position in the sorted
candidate list (k) -> counter = 2k -> level -- and checks it against the live capture.

    python tools/gate_dungeon_counter.py
"""
import glob
import json
import os
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
RAW = os.path.join(HERE, "..", "raw")
REDERIVE = os.path.normpath(os.path.join(HERE, "..", "..", "cw_rederive"))
sys.path.insert(0, REDERIVE)


def f32(x):
    return struct.unpack("<f", struct.pack("<f", x))[0]


def level_of(counter):
    """The one store at 0x50eab1: ftol(formula_inverse(counter/64))."""
    x = f32(f32(counter) * f32(0.015625))
    return int((1.0 / (1.0 - x) - 1.0) * 20.0 + 1.0)


def rank_band(level):
    """0x50ed37 -- (modulus, offset); rank = rand() % modulus + offset, or a fixed 0."""
    if level < 5:
        return (0, 0)
    if level < 10:
        return (2, 0)
    if level < 15:
        return (3, 0)
    if level < 19:
        return (3, 1)
    return (4, 1)


def rank_of(level, draw):
    """0x50ed37 exactly -- the branch and the modulus, given the one rand() the band consumes."""
    if level < 5:
        return 0                                  # 0x50ed43: no draw at all
    if level < 10:
        return draw % 2                           # 0x50ed57: and 0x80000001
    if level < 15:
        return draw % 3                           # 0x50ed7a: idiv 3
    if level < 19:
        return draw % 3 + 1                       # 0x50ed96: idiv 3, inc
    return draw % 4 + 1                           # 0x50edae: and 0x80000003, inc


def counters_for(zones):
    """Ab-initio: {zone -> (counter, cellidx, rank)} for every type-0xe cell of the regions."""
    import cw_seed
    import cw_featuregen

    base = cw_seed.configure(42069)

    # The rank roll IS cw_featuregen's `_subswitch` -- the port draws it and throws the value
    # away (it only needed the draw for the stream). Record it: one call per popped candidate,
    # in loop order, so the j-th call belongs to counter 2j.
    real_subswitch = cw_featuregen._subswitch
    rolls = []

    def spy(rng, cnt):
        before = len(rng.draws) if hasattr(rng, "draws") else None
        real_subswitch(rng, cnt)
        val = None
        if before is not None and len(rng.draws) > before:
            val = rng.draws[before]
        rolls.append(val)

    out = {}
    regions = sorted({(zx * 256 // 0x4000, zz * 256 // 0x4000) for zx, zz in zones})
    for (rx, rz) in regions:
        del rolls[:]
        cw_featuregen._subswitch = spy
        try:
            reg, _ = cw_featuregen.generate_region(base, rx, rz, with_cells=True)
        finally:
            cw_featuregen._subswitch = real_subswitch
        for k, cand in enumerate(reg.sorted_cands or []):
            counter = 2 * k                      # even iterations pop; the k-th pop is idx 2k
            cell = reg.cells[cand[3]]
            if not cell or cell.get("type") != 0xE:
                continue
            zone = ((cell["cx16"] >> 16) >> 8, (cell["cz16"] >> 16) >> 8)
            draw = rolls[k] if k < len(rolls) else None
            rank = rank_of(level_of(counter), draw if draw is not None else 0)
            out[zone] = (counter, cand[3], rank)
    return out


def main():
    names = sorted(glob.glob(os.path.join(RAW, "dungeon_site_capture*.json")))
    if not names:
        print("no raw/dungeon_site_capture*.json -- run tools/frida_dungeon_site.py first")
        return 1

    caps = []
    for f in names:
        cap = json.load(open(f))
        for s in cap["sites"]:
            caps.append((tuple(cap["zone"]), s["style"], s["level"], s["rank"]))

    derived = counters_for([z for z, _, _, _ in caps])

    print("%-16s %-5s %-8s %-6s %-7s %-6s %-7s %-6s %s"
          % ("zone", "style", "counter", "cell", "level", "live", "rank", "live", "rank rule"))
    ok = True
    nlvl = nrank = 0
    for zone, style, lvl, rank in caps:
        got = derived.get(zone)
        counter, cellidx, prank = got if got else (None, None, None)
        pred = level_of(counter) if counter is not None else None
        mod, off = rank_band(lvl)
        nlvl += (pred == lvl)
        nrank += (prank == rank)
        good = (pred == lvl) and (prank == rank) and counter is not None and counter % 4 == 2
        ok &= good
        rule = "0 (level < 5)" if mod == 0 else "rand()%%%d + %d" % (mod, off)
        print("%-16s %-5d %-8s %-6s %-7s %-6d %-7s %-6d %-16s %s"
              % (str(zone), style,
                 "-" if counter is None else counter,
                 "-" if cellidx is None else cellidx,
                 "-" if pred is None else pred, lvl,
                 "-" if prank is None else prank, rank, rule,
                 "OK" if good else "BAD"))

    print()
    print("  counter = the Pass-3 loop index (dungeons at counter == 2 mod 4)")
    print("  level reproduced ab-initio from the seed: %d/%d" % (nlvl, len(caps)))
    print("  rank  reproduced ab-initio from the seed: %d/%d" % (nrank, len(caps)))
    print("  %s" % ("ALL PASS" if ok else "FAILURES"))
    print()
    print("  the 16 dungeon slots of a region:")
    print("    " + "  ".join("m=%d:idx%d->L%d" % (m, 4 * m + 2, level_of(4 * m + 2))
                             for m in range(8)))
    print("    " + "  ".join("m=%d:idx%d->L%d" % (m, 4 * m + 2, level_of(4 * m + 2))
                             for m in range(8, 16)))
    return 0 if ok else 1


if __name__ == "__main__":
    sys.exit(main())
