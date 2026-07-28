"""Gate: the town builder's HOUSE PASS, 0x4e6520-0x4e74a5.

Decode: Docs/RE_town_house.md.  Source data: raw/town_props_capture*.json
(tools/frida_town_props.py, seed 42069, 92 towns, 435 houses).

A plot with post-promotion role 2 gets a house, and every house is the same 3x3x4 module
grid (`FUN_004e1f80(h, 3, 3, 4)`). The pass picks a module-TYPE layout out of a decision
tree keyed on `plot[+0x10]` -- the sub-role the PROMOTION pass writes -- plus up to four
`rand()`s, then gives every non-door module a random orientation. 13 rand sites,
17,947 draws.

The gate replays every house against its own recorded draws, in order, and requires the
model to ask for the same draw at the same CALL SITE -- the make_creatures_golden.py
design, where a control-flow error lands on a different site and an arithmetic error on a
different value. The layout tables are not typed anywhere: `extract_house_layouts.py`
executes the region out of Server.exe and this gate calls it, so a table that drifts from
the binary fails here rather than hiding (lesson 7c).
"""
import glob
import json
import os
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
RAW = os.path.join(HERE, "..", "raw")
sys.path.insert(0, HERE)
import extract_house_layouts as EX          # noqa: E402

BASE = 0x400000
SEL = [0x4E6762, 0x4E6849, 0x4E686E, 0x4E6A4D, 0x4E6A9D,
       0x4E6C0F, 0x4E6C60, 0x4E6DB2, 0x4E6DEE, 0x4E6E3E]
COIN8 = 0x4E6FAC        # house[+8] = (rand() & 1) == 0
PICK1 = 0x4E7321        # list[(unsigned)rand() % size] over the collected type-1 cells
ORIENT = 0x4E742E       # rand() % 4 per module whose type is not 5
ALL = set(SEL) | {COIN8, PICK1, ORIENT}
CELLS = 3 * 3 * 4


def plots_of(raw):
    out = []
    for rec in raw:
        if rec is None:
            return None
        out.append(struct.unpack("<iiiiiif", bytes(rec)))
    return out


def main():
    hits = []
    for name in sorted(glob.glob(os.path.join(RAW, "town_props_capture*.json"))):
        hits += json.load(open(name, encoding="utf-8"))["hits"]
    if not hits:
        raise SystemExit("no town captures in %s" % RAW)

    prog, nxt = EX.disasm(EX.LO, EX.END + 0x20)

    ok = fail = 0
    notes = []
    towns = houses = 0
    skipped = []
    sel_ok = site_ok = orient_ok = count_ok = 0
    type5_total = 0

    def check(cond, msg):
        nonlocal ok, fail
        if cond:
            ok += 1
        else:
            fail += 1
            if len(notes) < 12:
                notes.append(msg)

    for h in hits:
        zx, zz = h["zone"]
        late = h.get("plotsLate")
        P = plots_of(late or [])
        if not P:
            skipped.append((zx, zz, "no plotsLate"))
            continue
        towns += 1
        n = 4 if struct.unpack_from("<i", bytes(h["desc"]), 0x18)[0] == 5 else 5
        # houses are built in the plot loop's own order: r outer -> X, c inner -> Z,
        # record index r + n*c. A plot gets a house iff its post-promotion role is 2.
        housed = [P[r + n * c] for r in range(n) for c in range(n)
                  if P[r + n * c][3] == 2]
        check(len(housed) == len(h.get("houses") or []),
              "%d,%d: %d role-2 plots, %d house ctors"
              % (zx, zz, len(housed), len(h.get("houses") or [])))

        draws = [d for d in sorted(h["draws"], key=lambda d: d[2]) if d[0] + BASE in ALL]
        at = 0
        for hi, p in enumerate(housed):
            houses += 1
            sub, rot = p[4], p[5]
            # 1. the selector: run the extracted interpreter on this house's own draws
            try:
                grid, used, _hf = EX.simulate(prog, nxt, sub, rot,
                                              [d[1] for d in draws[at:at + 8]])
            except EX.Halt as e:
                check(False, "%d,%d house %d: interpreter halted: %s" % (zx, zz, hi, e))
                break
            want = [d[0] + BASE for d in draws[at:at + len(used)]]
            if all(w in SEL for w in want):
                sel_ok += 1
                ok += 1
            else:
                check(False, "%d,%d house %d (sub %d): selector used %d draws, sites %s"
                             % (zx, zz, hi, sub, len(used), [hex(w) for w in want]))
            at += len(used)

            # 2. the two per-house draws, in order
            got = [draws[at + k][0] + BASE if at + k < len(draws) else None
                   for k in range(2)]
            if got == [COIN8, PICK1]:
                site_ok += 1
                ok += 1
            else:
                check(False, "%d,%d house %d: expected 0x4e6fac,0x4e7321 got %s"
                             % (zx, zz, hi, [hex(g) if g else None for g in got]))
            at += 2

            # 3. the orientation fill: one draw per module whose TYPE is not 5
            n5 = sum(1 for (a, b, c, f), v in grid.items() if f == 0 and v == 5)
            type5_total += n5
            want_n = CELLS - n5
            run = 0
            while at + run < len(draws) and draws[at + run][0] + BASE == ORIENT:
                run += 1
            if run == want_n:
                orient_ok += 1
                ok += 1
            else:
                check(False, "%d,%d house %d (sub %d): %d orientation draws, model wants"
                             " %d (36 - %d type-5)" % (zx, zz, hi, sub, run, want_n, n5))
            at += run

        if at == len(draws):
            count_ok += 1
            ok += 1
        else:
            check(False, "%d,%d: replay consumed %d of %d house-pass draws"
                         % (zx, zz, at, len(draws)))

    census = {}
    for h in hits:
        for ra, _v, _n in h["draws"]:
            if ra + BASE in ALL:
                census[ra + BASE] = census.get(ra + BASE, 0) + 1

    # The C++ carries its own copy of the tables (a generated header). Diff it against a
    # fresh extraction in the SAME run, so the two cannot drift -- the whole point of
    # generating it (lesson 7c).
    hdr = os.path.normpath(os.path.join(HERE, "..", "..", "..", "src", "worldgen", "cw",
                                        "CwTownHouseTables.h"))
    if os.path.exists(hdr):
        import subprocess
        fresh = subprocess.run([sys.executable, os.path.join(HERE, "extract_house_layouts.py"),
                                "--cpp"], capture_output=True, text=True, check=True).stdout
        on_disk = open(hdr, encoding="utf-8").read()
        same = fresh.replace("\r\n", "\n").strip() == on_disk.replace("\r\n", "\n").strip()
        check(same, "CwTownHouseTables.h differs from a fresh extraction -- regenerate it")
        hdrmsg = "matches a fresh extraction" if same else "DIFFERS -- regenerate"
    else:
        hdrmsg = "NOT FOUND at %s" % hdr

    print("gate_town_house -- the town builder's house pass (0x4e6520-0x4e74a5)")
    print("  layout tables: executed out of Server.exe by extract_house_layouts.py")
    print("  the generated C++ header: %s" % hdrmsg)
    print("  %d towns with a plot snapshot, %d houses" % (towns, houses))
    print("  the selector asks for its draws at a selector site : %d / %d" % (sel_ok, houses))
    print("  0x4e6fac then 0x4e7321 follow it, once each        : %d / %d" % (site_ok, houses))
    print("  orientation draws == 36 - (type-5 modules)         : %d / %d" % (orient_ok, houses))
    print("  the whole town's house-pass stream is consumed     : %d / %d" % (count_ok, towns))
    print("  type-5 (door) modules the model predicts: %d" % type5_total)
    print("  live rand-site census: %s"
          % {hex(k): v for k, v in sorted(census.items())})
    if skipped:
        print("  %d towns skipped (no plotsLate): %s" % (len(skipped), skipped[:3]))
    for m in notes:
        print("    ! %s" % m)
    print("%d checks, %d ok, %d FAIL" % (ok + fail, ok, fail))
    print("RESULT: %s" % ("PASS" if fail == 0 else "FAIL"))
    return 1 if fail else 0


if __name__ == "__main__":
    sys.exit(main())
