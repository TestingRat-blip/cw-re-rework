#!/usr/bin/env python3
"""Gate: the two item sub-generators FUN_00528bf0 / FUN_0052c4e0, and FUN_0052a760's coin flip.

They are what the item generator's 26th candidate wraps (Docs/RE_52b470_item_generator.md):

    FUN_0052a760(ItemData *out, short level, char rank)          // 194 bytes
        zero *out, memset its 0x100 payload
        if (rand() % 2 == 0) FUN_00528bf0(tmp, level, rank, -1)
        else                 FUN_0052c4e0(tmp, level, rank, -1)
        copy tmp -> *out                                          // FUN_00402a70
        out[+0x08] = out[+0x00];  out[+0x00] = 2                  // kind moves aside, kind := 2

Both sub-generators are the same shape as their parent -- a fixed table filtered by `param_4`
(-1 = every group), a per-candidate roll, then a uniform pick -- but they differ from it in two
ways: the rarity byte `+0x0c` is the caller's `rank` **verbatim** (no roll at all), and each
candidate carries a `rand() % 100` value at `+0x04` that the parent's own candidates leave 0.

    FUN_00528bf0  kinds 4..9, one subtype (0)     21 candidates, 24 draws
    FUN_0052c4e0  kind 3, thirteen subtypes       11 candidates, 16 draws

Reads raw/itemgen_capture*.json (tools/frida_itemgen.py).
"""
import base64
import json
import os
import sys

RAW = os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "raw")

# FUN_00528bf0: (material, [kinds]) per `param_4` group, in body order. Subtype is always 0.
BF0_GROUPS = [(1, [7, 4, 5, 6]), (25, [7, 7, 4, 5, 6]),
              (26, [7, 7, 4, 5, 6]), (27, [7, 7, 4, 5, 6])]
BF0_COINED = [8, 9]                       # kinds 8 and 9 get a coin-flipped material

# FUN_0052c4e0: kind is always 3; (subtype, material) in body order. `None` = rolled.
C4E0_PLAN = [("roll3", 1), ("roll3+15", 1), (13, 1),          # param_4 == 1
             (3, 1), (5, 1), (4, 1),                          # param_4 == 4
             (6, 2), (8, 2),                                  # param_4 == 2, with a dead draw
             (10, 2), (11, 2), (12, "coin")]                  # param_4 == 3


def gen_528bf0(level, rank, s):
    """21 candidates from 24 draws."""
    out, i = [], 0
    for mat, kinds in BF0_GROUPS:
        for k in kinds:
            out.append({"kind": k, "sub": 0, "q": s[i] % 100, "mat": mat,
                        "rarity": rank, "level": level})
            i += 1
    for k in BF0_COINED:
        mat = 11 + (1 if s[i] % 2 else 0)          # `!(r%2==0) + 11`
        i += 1
        out.append({"kind": k, "sub": 0, "q": s[i] % 100, "mat": mat,
                    "rarity": rank, "level": level})
        i += 1
    pick = s[i] % len(out)
    i += 1
    assert i == 24, i
    return out, pick


def gen_52c4e0(level, rank, s):
    """11 candidates from 16 draws -- one of which is discarded."""
    out, i = [], 0
    for n, (sub, mat) in enumerate(C4E0_PLAN):
        if sub == "roll3":
            sub = s[i] % 3
            i += 1
        elif sub == "roll3+15":
            sub = s[i] % 3 + 15
            i += 1
        if mat == "coin":
            mat = 12 - (1 if s[i] % 2 else 0)       # `12 - (r%2 != 0)` -- opposite polarity
            i += 1                                  # to FUN_00528bf0's, deliberately
        if n == 7:
            i += 1                                  # a bare rand() between subtypes 6 and 8
        out.append({"kind": 3, "sub": sub, "q": s[i] % 100, "mat": mat,
                    "rarity": rank, "level": level})
        i += 1
    pick = s[i] % len(out)
    i += 1
    assert i == 16, i
    return out, pick


GEN = {"sub_528bf0": (gen_528bf0, 24, 21), "sub_52c4e0": (gen_52c4e0, 16, 11)}


def one(name):
    cap = json.load(open(os.path.join(RAW, name)))
    print(f"== {name}  zone {tuple(cap['zone'])}")
    ok = True
    for n, c in enumerate(cap["calls"]):
        # Which branch the coin took is read off the *last* sub-generator candidate in the
        # window. `level` and `rank` come from the PARENT, not from the captured sub-args:
        # FUN_0052a760 passes both straight through, and a contaminating unrelated call would
        # otherwise supply its own (that is exactly what one window did -- rank 3 vs 4).
        subs = [x for x in c["cands"] if x["z"] != "itemgen"]
        if not subs:
            print(f"   call{n}: no sub-generator recorded")
            ok = False
            continue
        fn = subs[-1]["z"]
        level, rank = c["level"], c["rank"]
        gen, ndraw, ncand = GEN[fn]
        # FUN_0052a760 has callers other than the item generator, so an unrelated invocation
        # can land in the same capture window. This call's sub-generator runs immediately
        # before the parent's closing push_back, so its draws and candidates are the LAST ones.
        allstream = [v for z, v in c["rands"] if z == fn]
        alllive = [base64.b64decode(x["b"]) for x in subs if x["z"] == fn]
        dropped = (len(allstream) - ndraw, len(alllive) - ncand)
        stream, live = allstream[-ndraw:], alllive[-ncand:]
        model, pick = gen(level, rank, stream)

        bad = []
        for i, m in enumerate(model):
            b = live[i]
            got = {"kind": b[0], "sub": b[1], "q": int.from_bytes(b[4:8], "little"),
                   "mat": b[0xD], "rarity": b[0xC],
                   "level": int.from_bytes(b[0x10:0x12], "little")}
            if got != m:
                bad.append((i, m, got))

        # FUN_0052a760's mutation: the picked candidate, with kind moved to +0x08 and kind := 2
        special = [x for x in c["cands"] if x["z"] == "itemgen"][-1]
        sp = base64.b64decode(special["b"])
        chosen = live[pick]
        mutation = (sp[0] == 2 and int.from_bytes(sp[8:12], "little") == chosen[0]
                    and sp[1] == chosen[1] and sp[0xC] == chosen[0xC] and sp[0xD] == chosen[0xD]
                    and sp[4:8] == chosen[4:8]
                    and sp[0x10:0x12] == chosen[0x10:0x12])
        good = not bad and len(live) == len(model) and mutation
        ok &= good
        print(f"   [{'OK ' if good else 'BAD'}] call{n} {fn} level={level:<3} "
              f"rank={rank}  {len(model)} candidates, "
              f"{len(stream)} draws, pick={pick}"
              + ("" if dropped == (0, 0) else
                 f"  [dropped {dropped[0]} draws/{dropped[1]} candidates from an unrelated "
                 f"FUN_0052a760 in the same window]")
              + ("" if not bad else f"   {len(bad)} mismatched: {bad[:2]}")
              + ("" if mutation else "   0052a760 mutation MISMATCH"))
    print("  " + ("GATE PASS" if ok else "GATE FAIL"))
    return 0 if ok else 1


def main():
    args = sys.argv[1:]
    if not args or args == ["--all"]:
        names = sorted(f for f in os.listdir(RAW) if f.startswith("itemgen_capture"))
        if args != ["--all"]:
            names = ["itemgen_capture.json"]
    else:
        names = args
    rc, total = 0, 0
    for n in names:
        rc |= one(n)
        total += len(json.load(open(os.path.join(RAW, n)))["calls"])
        print()
    if len(names) > 1:
        print(f"== {len(names)} zones, {total} sub-generator invocations  "
              + ("ALL PASS" if rc == 0 else "FAILURES"))
    return rc


if __name__ == "__main__":
    sys.exit(main())
