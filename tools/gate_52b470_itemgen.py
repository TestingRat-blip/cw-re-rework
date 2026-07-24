#!/usr/bin/env python3
"""Gate: reproduce the server item generator FUN_0052b470 from (level, rank) + the rand stream.

    FUN_0052b470(ItemData *out, short level, int rank)

is a **fixed 26-entry candidate table**, not a decision tree. It rolls a rarity for each entry,
appends it to a `vector<ItemData>` (stride 0x118), and returns a uniformly random one:

    out = candidates[ rand() % 26 ]              // FUN_00413710 = ItemData_copy

Every candidate is `{kind, subtype, material, rarity, level}`; the 0x100-byte payload at +0x14
is memset to 0 and never written here. The 26th is built by FUN_0052a760 instead (a coin flip
between two sub-generators) and is treated as opaque.

The rarity roll, repeated per candidate (4 draws each):

    r = rand() % (rank + 1)
    if rand() %   100 == 0: r += 1
    if rand() %  1000 == 0: r += 1
    if rand() % 10000 == 0: r += 1
    r = min(r, 4)

Draw accounting for one call: 4 discarded + 1 (subtype of #0) + 25*4 rarity = 110, then 1 for
FUN_0052a760's coin flip, then 24 (FUN_00528bf0) or 16 (FUN_0052c4e0), then 1 for the pick.

Reads raw/itemgen_capture*.json (tools/frida_itemgen.py) and, for the final pick, the matching
raw/dungeon_boss_capture*.json.
"""
import base64
import json
import os
import sys

RAW = os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "raw")

# The candidate table, read off the body and confirmed against every capture.
# (kind, subtype, material) -- subtype None means `rand() % 3`.
# `pre` is the count of draws consumed *before* that entry's rarity roll.
TABLE = [
    (3, None, 1, 4),                                        # 4 discarded, then the subtype draw
    (3, 13, 1, 5),                                          # 5 more discarded
    (3, 6, 2, 0), (3, 7, 2, 0), (3, 10, 2, 0), (3, 11, 2, 0),
    (7, 0, 1, 0), (4, 0, 1, 0), (5, 0, 1, 0), (6, 0, 1, 0),                  # note: no 2nd `7`
    (7, 0, 25, 0), (7, 0, 25, 0), (4, 0, 25, 0), (5, 0, 25, 0), (6, 0, 25, 0),
    (7, 0, 26, 0), (7, 0, 26, 0), (4, 0, 26, 0), (5, 0, 26, 0), (6, 0, 26, 0),
    (7, 0, 27, 0), (7, 0, 27, 0), (4, 0, 27, 0), (5, 0, 27, 0), (6, 0, 27, 0),
]
N_CAND = len(TABLE) + 1                                     # + the FUN_0052a760 special

# FUN_00413710 (ItemData_copy) copies these byte ranges and no others -- +0x02, +0x03, +0x0f,
# +0x12 and +0x13 are padding and carry whatever the source stack slot held.
COPIED = ({0, 1} | set(range(4, 12)) | {0xC, 0xD, 0xE, 0x10, 0x11}
          | set(range(0x14, 0x118)))


def rarity(vals, rank):
    """The roll shared with FUN_0052bf40. Consumes 4 draws."""
    r = vals[0] % (rank + 1)
    if vals[1] % 100 == 0:
        r += 1
    if vals[2] % 1000 == 0:
        r += 1
    if vals[3] % 10000 == 0:
        r += 1
    return min(r, 4)


def generate(level, rank, stream):
    """The 25 modelled candidates, in push order. `stream` = the 110 itemgen draws."""
    out, i = [], 0
    for kind, sub, mat, pre in TABLE:
        i += pre
        if sub is None:
            sub = stream[i] % 3
            i += 1
        r = rarity(stream[i:i + 4], rank)
        i += 4
        out.append({"kind": kind, "sub": sub, "mat": mat, "rarity": r, "level": level})
    assert i == 110, i
    return out


def split_stream(rands):
    """-> (the 110 itemgen draws, the special's sub-draw count).

    A capture window can carry draws that are not this invocation's: the previous call's
    final pick (made after its last push_back, so it lands at the head of the next window),
    and any FUN_0052a760 fired from one of its *other* callers. But this call's own 110
    itemgen draws are always the LAST 110 in the window -- the only itemgen draw after them
    is the pick, which belongs to the next window. Same for the special: take the last one.
    """
    stream = [v for z, v in rands if z == "itemgen"][-110:]
    k = max(i for i, (z, _) in enumerate(rands) if z == "special")
    return stream, sum(1 for z, _ in rands[k + 1:] if z.startswith("sub_"))


def one(name):
    cap = json.load(open(os.path.join(RAW, name)))
    zone = tuple(cap["zone"])
    print(f"== {name}  zone {zone}  ({len(cap['calls'])} invocations)")
    ok = True
    for n, c in enumerate(cap["calls"]):
        cands = [base64.b64decode(cd["b"]) for cd in c["cands"]]
        stream, nsub = split_stream(c["rands"])
        model = generate(c["level"], c["rank"], stream)

        bad = []
        for i, m in enumerate(model):
            b = cands[i]
            live = {"kind": b[0], "sub": b[1], "mat": b[0xD], "rarity": b[0xC],
                    "level": int.from_bytes(b[0x10:0x12], "little")}
            if live != m:
                bad.append((i, m, live))
        # the payload is memset and never written by this function
        payload = all(not any(cands[i][0x14:0x114]) for i in range(len(model)))
        tag = "OK " if not bad and payload else "BAD"
        print(f"   [{tag}] call{n} level={c['level']:<3} rank={c['rank']}  "
              f"site={hex(c['caller'])}  25 candidates, {len(stream)}+1+{nsub} draws"
              + ("" if not bad else f"   {len(bad)} mismatched: {bad[:2]}"))
        ok &= not bad and payload
        ok &= len(cands) == N_CAND and nsub in (16, 24)

    # --- the final pick, for the boss call (its stream is in the boss capture) -----------
    bname = ("dungeon_boss_capture.json" if name == "itemgen_capture.json"
             else "dungeon_boss_capture_%d_%d.json" % zone)
    bpath = os.path.join(RAW, bname)
    if os.path.exists(bpath) and cap.get("boss_item"):
        bcap = json.load(open(bpath))
        rv = bcap["bosses"][0]["rand_vals"]
        boss = next(c for c in cap["calls"] if c["caller"] == 0x107A0B)
        pick = rv[-2] % N_CAND                        # rv[-1] is the boss block's own draw B
        chosen = base64.b64decode(boss["cands"][pick]["b"])
        item = base64.b64decode(cap["boss_item"])
        same = all(chosen[i] == item[i] for i in COPIED)
        print(f"   [{'OK ' if same else 'BAD'}] final pick = rand() %% {N_CAND} = {pick}"
              f"  -> candidate matches the caller's ItemData on all copied bytes")
        ok &= same
        raw_same = chosen == item
        if not raw_same:
            diff = [hex(i) for i in range(0x118) if chosen[i] != item[i]]
            print(f"         (padding differs at {diff} -- not copied by FUN_00413710)")

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
    rc = 0
    total = 0
    for n in names:
        rc |= one(n)
        total += len(json.load(open(os.path.join(RAW, n)))["calls"])
        print()
    if len(names) > 1:
        print(f"== {len(names)} zones, {total} invocations, {total * 25} candidates  "
              + ("ALL PASS" if rc == 0 else "FAILURES"))
    return rc


if __name__ == "__main__":
    sys.exit(main())
