#!/usr/bin/env python3
"""Gate: the OVERWORLD per-zone prop scatter (Phase 2 -- first cut).

>>> SUPERSEDED by tools/gate_zone_props2.py.  Everything below is still true of what it
>>> measures -- the OUT-OF-LINE push_back -- but two of its conclusions do not survive
>>> reading the vector itself (Docs/RE_zone_props.md):
>>>
>>>   * "exactly one prop per zone" is an artifact of the hook.  FUN_004e0740's second
>>>     stage pushes into the same site+0xc through an INLINED push_back, so an odd zone
>>>     actually carries 0-5 props.  The check below is really "at most one out-of-line
>>>     push_back per zone".
>>>   * the caller census that scoped the layer is incomplete for the same reason.  The
>>>     census that holds is over FUN_004ce8e0 (vector<PropRecord>::_Reserve), which an
>>>     inlined push_back still needs, and it turns up a FIFTH emitter: FUN_005104e0.
>>>
>>> Its rand attribution was also capped at 64 draws per record, which silently dropped
>>> the caller's retry loop -- so no position arithmetic could be checked here.

A caller census of the 0x188 prop record's push_back (`FUN_004d6670`) and ctor (`FUN_004c84b0`)
enumerates every prop emitter in the game, and it is a short list:

    004e0740                          a standalone emitter, called only by the zone builder
    004e310a / 004eaa7a / 004ee3aa    the town builder
    00502dca / 005054fa               the dungeon assembler       (DONE)
    0051c90a / 0051ed6a               the ZONE BUILDER            (this gate)
    00524540                          creature_spawn_builder      (DONE, the mob pass)

That census is what retires the plan's old Phase-2 premise: `FUN_004c8420` is not "the prop
entity emitter", it is `DungeonProp_copy_0x188`, the record's copy ctor. The overworld layer is
four emit sites inside the zone builder's body:

    0x51cd1e  -> FUN_004e0740   in a retry loop, up to 10 candidate positions
    0x51dbf5  inline emitter A  (never observed firing in 56 zones)
    0x51e796  inline emitter B
    0x51fcdb  inline emitter C  (never observed firing in 56 zones)

What 56 live zones (a 6x6 block plus 20 scattered across other regions, balanced on parity)
establish:

  * **exactly one prop per zone**, into that zone's own `site+0xc` -- 56 distinct vectors;
  * **which emitter runs is `(zx + zz) & 1`** -- even -> B, odd -> `FUN_004e0740`. Verified
    out of sample; the first attempt at this drew every scattered zone even by accident and
    proved nothing, so the sample is balanced deliberately;
  * **emitter B** always emits type **0** (`goddess2`, the Statue entity) sized `(2, 2, 8)`,
    with `dir = rand() % 4` and its Z one above the first solid block found by scanning DOWN --
    the scan reuses `Block_isSolid`, `(block[3] & 0x1f) not in {0, 2}`, a third independent
    call site for that predicate;
  * **`FUN_004e0740`** always emits type **0x41** sized `(2.4, 2.4, 0.5)`, and is allowed to
    place nothing: it opens with `climateGate(x, y) <= 0.02` -> return (the river field), and 2
    of the 26 odd-parity zones produced no prop at all.

Reads raw/zone_props_capture*.json (tools/frida_zone_props.py).
"""
import collections
import json
import glob
import os
import struct
import sys

RAW = os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "raw")

EMIT_E0, EMIT_B = 0xE092D, 0x11E79B
# emitter -> (type id, size)
SPEC = {EMIT_E0: (0x41, (2.4, 2.4, 0.5)), EMIT_B: (0x00, (2.0, 2.0, 8.0))}
ZONE_SIDE = 256


def rec(b):
    return {"type": struct.unpack_from("<i", b, 0)[0],
            "pos": [struct.unpack_from("<q", b, 8 + i * 8)[0] >> 16 for i in range(3)],
            "dir": struct.unpack_from("<i", b, 0x20)[0],
            "size": tuple(round(struct.unpack_from("<f", b, 0x24 + i * 4)[0], 2)
                          for i in range(3))}


def check(what, bad, total):
    if not bad:
        print(f"[PASS] {what}: {total}")
        return True
    print(f"[FAIL] {what}: {len(bad)} of {total}")
    for x in bad[:6]:
        print(f"        {x}")
    return False


def main():
    names = sorted(glob.glob(os.path.join(RAW, "zone_props_capture*.json")))
    if not names:
        print("no raw/zone_props_capture*.json -- run tools/frida_zone_props.py first")
        return 1
    ok = True
    for f in names:
        cap = json.load(open(f))
        props = cap["props"]
        built = {(z[0], z[1]): z[2] for z in cap["result"]["zones"]}
        print(f"== {os.path.basename(f)}  {len(built)} zones, {len(props)} props")

        # 1. at most one prop per zone, and it lands in that zone's own vector
        bad = [(z, n) for z, n in built.items() if n > 1]
        ok &= check("at most one prop per zone", bad, len(built))
        ok &= check("every zone got its own site+0xc vector",
                    [] if len(set(p["vec"] for p in props)) == len(props) else ["shared vector"],
                    len(props))

        # 2. the emitter is chosen by (zx + zz) & 1
        bad = [(tuple(p["zone"]), hex(p["ra"]))
               for p in props
               if (p["ra"] == EMIT_E0) != bool((p["zone"][0] + p["zone"][1]) & 1)]
        ok &= check("emitter selected by (zx + zz) & 1  (odd -> FUN_004e0740)", bad, len(props))

        # 3. each emitter's fixed type id and size
        bad = []
        for p in props:
            r = rec(bytes(p["b"]))
            want = SPEC.get(p["ra"])
            if want is None:
                bad.append((tuple(p["zone"]), "unknown emitter %#x" % p["ra"]))
            elif (r["type"], r["size"]) != want:
                bad.append((tuple(p["zone"]), (r["type"], r["size"]), want))
        ok &= check("each emitter's fixed type id and size", bad, len(props))

        # 4. the prop lands inside its own zone's 256-block square
        bad = []
        for p in props:
            r = rec(bytes(p["b"]))
            zx, zz = p["zone"]
            if not (zx * ZONE_SIDE <= r["pos"][0] < (zx + 1) * ZONE_SIDE and
                    zz * ZONE_SIDE <= r["pos"][1] < (zz + 1) * ZONE_SIDE):
                bad.append((tuple(p["zone"]), r["pos"]))
        ok &= check("the prop lands inside its own zone square", bad, len(props))

        # 5. direction is a rand()%4
        bad = [(tuple(p["zone"]), rec(bytes(p["b"]))["dir"])
               for p in props if not 0 <= rec(bytes(p["b"]))["dir"] <= 3]
        ok &= check("direction in 0..3 (rand() % 4)", bad, len(props))

        empty = [z for z, n in built.items() if n == 0]
        print(f"   emitters: {dict(collections.Counter(hex(p['ra']) for p in props))}")
        print(f"   zones with no prop: {len(empty)} "
              f"(all odd-parity: {all((z[0] + z[1]) & 1 for z in empty)})")
        print("  " + ("GATE PASS" if ok else "GATE FAIL"))
    return 0 if ok else 1


if __name__ == "__main__":
    sys.exit(main())
