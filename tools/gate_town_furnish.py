"""Gate: the town builder's HOUSE FURNISHING pass, 0x4ead3a-0x4ecf20.

Decode: Docs/RE_town_furnish.md.  Source data: raw/town_props_capture*.json
(tools/frida_town_props.py, seed 42069, 92 towns, 35 of which furnish a house).

The pass walks every house's 3 x 3 x 4 MODULE GRID -- the same grid `townHousePass`
selects and `CwTownHouseTables.h` already holds -- and, at every WALL module, drops
furniture against each of the four horizontal faces whose neighbour is not itself a wall,
then one centre piece chosen by the module's own `+8` KIND byte.

Thirteen rand sites in the body and 21 push sites.  ★ The interesting cost is NOT in the
body: every furniture record is built by `FUN_004f2ee0`, a 1,359-byte factory with
**eight more rand sites**, and `frida_town_props.py` filters to the builder body, so all
of those draws are invisible to it (lesson 18).

★ THE CHECK THIS GATE EXISTS FOR.  msvcrt's rand is a plain LCG, so the factory's hidden
draws are recoverable: step the stream from the town's own zone seed, find the offset at
which EVERY recorded (index, value) fits, and the unrecorded indices then have known
values (the make_creatures_golden.py recipe, lesson 33).  Feeding those to the decoded
factory reproduces the TYPE and the EXTENTS of every pushed record.  The null baseline is
reported alongside: for each gap, how many distinct types the branch structure admits at
all -- half of them admit exactly one, so agreement is a measurement and not a fit
(lesson 5).

⚠ A gap can hold SEVERAL factory calls.  A record whose `isSolid` test fails is never
pushed, but its draws were still spent, so the walk consumes as many calls as the gap
holds and checks the LAST against the record.

    python tools/gate_town_furnish.py
"""
import glob
import json
import os
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
RAW = os.path.join(HERE, "..", "raw")
EXE = os.path.normpath(os.path.join(HERE, "..", "..", "..", "..", "Server.exe"))
IMAGE_BASE = 0x400000

# --- the stage span, and the factory ------------------------------------------------
SPAN_LO, SPAN_HI = 0x4EAD3A, 0x4ECF20
FACTORY_LO, FACTORY_HI = 0x4F2EE0, 0x4F342F

# the eight rand sites in the body, as RVAs (the capture stores draws without the base)
COIN_A, COIN_B = 0xEAFD2, 0xEB162     # the -X wall face, two slots
COIN_C, COIN_D = 0xEB315, 0xEB4A5     # the +X wall face
COIN_F, COIN_G = 0xEB7F3, 0xEB981     # the +Z wall face   (-Z has NO coin)
CENTRE_COIN = 0xEBB42                 # rand() % 5 -- the kind-0 centre piece
CENTRE_ROT = 0xEBC5A                  # rand() & 3 -- its facing
KIND2_ROT = 0xEC376                   # rand() & 3 -- the kind-2 centre's facing
KIND1_ROT = [0xECA6D, 0xECBC7, 0xECCF4, 0xECE21]   # the four kind-1 facings
BODY_SITES = ([COIN_A, COIN_B, COIN_C, COIN_D, COIN_F, COIN_G, CENTRE_COIN, CENTRE_ROT,
               KIND2_ROT] + KIND1_ROT)

# the seven furniture slots: push return address -> (name, facing, dx, dz)
# dx/dz are the module-local offsets in blocks; the module stride is 13.
SLOT = {
    0xEB145: ("A", 1, 1.5, 4.5),
    0xEB2D5: ("B", 1, 1.5, 9.5),
    0xEB488: ("C", 3, 12.5, 4.5),
    0xEB618: ("D", 3, 12.5, 9.5),
    0xEB7B4: ("E", 2, 4.5, 1.5),
    0xEB966: ("F", 0, 4.5, 12.5),
    0xEBAF4: ("G", 0, 9.5, 12.5),
}
# the centre pieces, by the module's +8 kind byte
CENTRE = {
    0xEBCEE: ("kind0", 0x0C, (3.0, 3.0, 1.0), None),   # facing is rand() & 3
    0xEBEC2: ("kind3", 0x1F, (4.0, 1.0, 1.0), 3),
    0xEBFEF: ("kind3", 0x1F, (4.0, 1.0, 1.0), 1),
    0xEC11C: ("kind3", 0x1F, (4.0, 1.0, 1.0), 0),
    0xEC249: ("kind3", 0x1F, (4.0, 1.0, 1.0), 2),
    0xEC40A: ("kind2", 0x0C, (3.0, 3.0, 1.0), None),
    0xEC5AE: ("kind2", 0x10, (1.0, 1.0, 0.5), 1),
    0xEC6DB: ("kind2", 0x10, (1.0, 1.0, 0.5), 3),
    0xEC808: ("kind2", 0x10, (1.0, 1.0, 0.5), 2),
    0xEC935: ("kind2", 0x10, (1.0, 1.0, 0.5), 0),
    0xECB14: ("kind1", 0x13, (2.0, 3.0, 1.0), None),
    0xECC41: ("kind1", 0x13, (2.0, 3.0, 1.0), None),
    0xECD6E: ("kind1", 0x13, (2.0, 3.0, 1.0), None),
    0xECE9B: ("kind1", 0x13, (2.0, 3.0, 1.0), None),
}
ALL_PUSH = list(SLOT) + list(CENTRE)

MODULE_STRIDE_XZ = 13          # imul ..., 0xd throughout the span
MODULE_STRIDE_Y = 7            # add [ebp-0x5c5c], 7 at 0x4ecebc

BASE = 6346                    # world[0x800188] for seed 42069, the capture's world

# --- the factory's own literals -----------------------------------------------------
FACT_RARE_MOD = 50             # rand() % 0x32 at 0x4f2fbc -- the 1-in-50 type 10
FACT_KIND1_MASK = 1            # rand() & 1 at 0x4f306f
FACT_MAIN_MOD = 6              # rand() % 6 at 0x4f30c4
FACT_TRIPLE_MOD = 3            # rand() % 3 at 0x4f309a -- picks 0x20..0x22
FACT_NINE_MOD = 9              # rand() % 9 at 0x4f33a2 -- picks 0x38..0x40
EXT = {
    0x0A: (1.2, 0.8, 0.8),
    0x10: (1.0, 1.0, 0.5),
    0x12: (3.0, 1.0, 0.4),
    0x14: (1.0, 1.0, 1.0),
    0x1D: (2.5, 1.0, 3.0),
    0x1E: (3.0, 1.0, 1.0),
}
EXT_TRIPLE = (2.0, 1.0, 1.57)          # 0x20..0x22
EXT_NINE = (1.0, 1.0, 1.0)             # 0x38..0x40
# The per-facing position nudge each shaped type takes, in blocks. Facing 1/3 move X,
# facing 0/2 move Z -- 0x4f3430 / 0x4f3468 / 0x4f3478, all four tables the same shape.
NUDGE = {0x0A: 0.5, 0x1E: 0.2, 0x1D: 0.3}
NUDGE_SIGN = {0: -1, 1: +1, 2: +1, 3: -1}      # facing -> the sign it applies


def load_image():
    data = open(EXE, "rb").read()
    pe = struct.unpack_from("<I", data, 0x3C)[0]
    nsec = struct.unpack_from("<H", data, pe + 6)[0]
    optsz = struct.unpack_from("<H", data, pe + 20)[0]
    base = struct.unpack_from("<I", data, pe + 24 + 28)[0]
    off, secs = pe + 24 + optsz, []
    for _ in range(nsec):
        vsz, va, rsz, ptr = struct.unpack_from("<IIII", data, off + 8)
        secs.append((base + va, vsz, ptr, rsz))
        off += 40
    return data, secs


def at(data, secs, va, n):
    for sva, vsz, ptr, rsz in secs:
        if sva <= va < sva + max(vsz, rsz):
            d = va - sva
            return data[ptr + d:ptr + d + n] if d < rsz else None
    return None


def census(data, secs, lo, hi):
    """Both encodings: `call [0x5582f4]` and the `call edi` the four -X/+X coins use."""
    direct = bytes.fromhex("ff15f4825500")
    out, va = [], lo
    while va < hi:
        if at(data, secs, va, 6) == direct:
            out.append(va + 6)
            va += 6
        elif at(data, secs, va, 2) == b"\xff\xd7":
            out.append(va + 2)
            va += 2
        else:
            va += 1
    return out


def stream(seed, n):
    s, out = seed & 0xFFFFFFFF, []
    for _ in range(n):
        s = (s * 214013 + 2531011) & 0xFFFFFFFF
        out.append((s >> 16) & 0x7FFF)
    return out


def locate(seq, draws):
    first_v, first_n = draws[0][1], draws[0][2]
    for i, v in enumerate(seq):
        if v != first_v:
            continue
        o = i - first_n
        if all(0 <= n + o < len(seq) and seq[n + o] == val for _ra, val, n in draws):
            return o
    return None


def factory(vals, pos, kind):
    """FUN_004f2ee0's type/extent choice. Returns (type, extents, draws consumed)."""
    i = pos
    if vals[i] % FACT_RARE_MOD == 0:
        return 0x0A, EXT[0x0A], i + 1 - pos
    i += 1
    if kind == 1:
        r = vals[i] & FACT_KIND1_MASK
        i += 1
        if r == 0:
            t = 0x20 + vals[i] % FACT_TRIPLE_MOD
            return t, EXT_TRIPLE, i + 1 - pos
        return 0x14, EXT[0x14], i - pos
    r = vals[i] % FACT_MAIN_MOD
    i += 1
    if r == 0:
        return 0x20 + vals[i] % FACT_TRIPLE_MOD, EXT_TRIPLE, i + 1 - pos
    if r == 1:
        return 0x12, EXT[0x12], i - pos
    if r == 2:
        return 0x10, EXT[0x10], i + 1 - pos        # + the position jitter draw
    if r == 3:
        return 0x1E, EXT[0x1E], i - pos
    if r == 4:
        return 0x1D, EXT[0x1D], i - pos
    return 0x38 + vals[i] % FACT_NINE_MOD, EXT_NINE, i + 1 - pos


def main():
    data, secs = load_image()
    ok = fail = 0
    notes = []

    def check(cond, msg):
        nonlocal ok, fail
        if cond:
            ok += 1
        else:
            fail += 1
            notes.append(msg)

    # --- 1. literals, straight out of Server.exe --------------------------------------
    def imm32(va):
        return struct.unpack("<i", at(data, secs, va, 4))[0]

    for va, want, name in ((0x4EAFD3 + 1, 3, "the -X slot-A coin modulus"),
                           (0x4EB163 + 1, 3, "the -X slot-B coin modulus"),
                           (0x4EB316 + 1, 3, "the +X slot-C coin modulus"),
                           (0x4EB4A6 + 1, 3, "the +X slot-D coin modulus"),
                           (0x4EB7F4 + 1, 3, "the +Z slot-F coin modulus"),
                           (0x4EB982 + 1, 3, "the +Z slot-G coin modulus"),
                           (0x4EBB43 + 1, 5, "the kind-0 centre coin modulus"),
                           (0x4F2FC3 + 1, FACT_RARE_MOD, "the factory 1-in-50"),
                           (0x4F309B + 1, FACT_TRIPLE_MOD, "the factory %3"),
                           (0x4F30CB + 1, FACT_MAIN_MOD, "the factory %6"),
                           (0x4F33A3 + 1, FACT_NINE_MOD, "the factory %9")):
        check(imm32(va) == want, "%s: binary %d, source %d" % (name, imm32(va), want))
    # the factory's type immediates
    for va, want in ((0x4F2FD5 + 6, 0x0A), (0x4F3089 + 6, 0x14), (0x4F30EA + 6, 0x12),
                     (0x4F3110 + 6, 0x10), (0x4F326B + 6, 0x1E), (0x4F3314 + 6, 0x1D)):
        check(imm32(va) == want, "factory type at %s: binary %d, source %d"
              % (hex(va), imm32(va), want))
    check(at(data, secs, 0x4F30B6, 3) == b"\x83\xc2\x20", "0x4f30b6 is not `add edx, 0x20`")
    check(at(data, secs, 0x4F33AA, 3) == b"\x83\xc2\x38", "0x4f33aa is not `add edx, 0x38`")
    # the module strides
    check(at(data, secs, 0x4EAFEC, 3) == b"\x6b\xc0\x0d",
          "0x4eafec is not `imul eax, eax, 13`")
    check(at(data, secs, 0x4ECEBC, 7)[-1] == MODULE_STRIDE_Y,
          "0x4ecebc does not add %d to the module Y" % MODULE_STRIDE_Y)
    binchk = "%d ok" % ok

    # --- 2. the two censuses ----------------------------------------------------------
    body = census(data, secs, SPAN_LO, SPAN_HI)
    check(sorted(body) == sorted(s + IMAGE_BASE for s in BODY_SITES),
          "body rand census over 0x%x-0x%x returned %s"
          % (SPAN_LO, SPAN_HI, [hex(s) for s in body]))
    fact = census(data, secs, FACTORY_LO, FACTORY_HI)
    check(len(fact) == 8, "FUN_004f2ee0 has %d rand sites, expected 8" % len(fact))
    for va in [0x4EBC5A, 0x4EC376] + [a + IMAGE_BASE for a in KIND1_ROT]:
        check(at(data, secs, va, 5) == bytes((0x25, 0x03, 0x00, 0x00, 0x80)),
              "%s is not `and eax, 0x80000003` (a facing roll)" % hex(va))

    # --- the captures -----------------------------------------------------------------
    hits = []
    for p in sorted(glob.glob(os.path.join(RAW, "town_props_capture*.json"))):
        hits += json.load(open(p, encoding="utf-8"))["hits"]
    if not hits:
        print("no town_props captures on disk")
        return 1

    towns = 0
    slotRecs = 0
    factOk = factBad = 0
    reach = {}
    centreRecs = 0
    pushSeen = set()
    coinChecks = 0

    for h in hits:
        zx, zz = h["zone"]
        draws = sorted(h["draws"], key=lambda t: t[2])
        pushes = [p for p in h["pushes"] if p["ra"] in ALL_PUSH]
        if not pushes:
            continue
        towns += 1
        for p in pushes:
            pushSeen.add(p["ra"])

        # --- 3a. every slot record: rotation, extents and the fractional offset -------
        for p in pushes:
            rec = bytes(p["rec"])
            typ = struct.unpack_from("<i", rec, 0)[0]
            x16, z16, y16 = struct.unpack_from("<qqq", rec, 8)
            rot = struct.unpack_from("<i", rec, 0x20)[0]
            ext = struct.unpack_from("<3f", rec, 0x24)
            if p["ra"] in SLOT:
                name, facing, dx, dz = SLOT[p["ra"]]
                slotRecs += 1
                check(rot == facing, "%s: slot %s rot %d, expected %d"
                      % (h["zone"], name, rot, facing))
                # The base fraction is always (.5, .5); a shaped type moves the axis its
                # facing names by a fixed amount, and type 0x10 by a random 0..1 block.
                fx, fz = (x16 % 65536) / 65536.0, (z16 % 65536) / 65536.0
                if typ in NUDGE:
                    d = NUDGE[typ] * NUDGE_SIGN[facing]
                    want = (0.5 + d) % 1.0
                    got = fx if facing in (1, 3) else fz
                    other = fz if facing in (1, 3) else fx
                    check(abs(got - want) < 1e-4,
                          "%s: slot %s type %d nudged axis %.4f, expected %.4f"
                          % (h["zone"], name, typ, got, want))
                    check(abs(other - 0.5) < 1e-4,
                          "%s: slot %s type %d moved the wrong axis" % (h["zone"], name, typ))
                elif typ != 0x10:
                    check(abs(fx - 0.5) < 1e-4 and abs(fz - 0.5) < 1e-4,
                          "%s: slot %s type %d frac (%.4f, %.4f), expected (.5, .5)"
                          % (h["zone"], name, typ, fx, fz))
                else:
                    other = fz if facing in (1, 3) else fx
                    check(abs(other - 0.5) < 1e-4,
                          "%s: slot %s type 16 jittered the wrong axis" % (h["zone"], name))
                check(y16 % 65536 == 0, "%s: slot %s Y carries a fraction" % (h["zone"], name))
            else:
                nm, wantT, wantE, wantR = CENTRE[p["ra"]]
                centreRecs += 1
                check(typ == wantT, "%s: %s centre type %d, expected %d"
                      % (h["zone"], nm, typ, wantT))
                check(all(abs(a - b) < 1e-4 for a, b in zip(ext, wantE)),
                      "%s: %s centre extents %s, expected %s" % (h["zone"], nm, ext, wantE))
                if wantR is not None:
                    check(rot == wantR, "%s: %s centre rot %d, expected %d"
                          % (h["zone"], nm, rot, wantR))

        # --- 3b. the factory, from the town's own LCG ---------------------------------
        maxn = max(n for _r, _v, n in draws)
        seq = stream(BASE + zz * 0x10000 + zx, maxn + 200000)
        o = locate(seq, draws)
        if o is None:
            notes.append("%s: no LCG origin" % (h["zone"],))
            fail += 1
            continue
        ok += 1
        idx = set(n for _r, _v, n in draws)
        for p in sorted((q for q in pushes if q["ra"] in SLOT), key=lambda q: q["n"]):
            g = None
            for k in range(p["n"] - 1, -1, -1):
                if k in idx:
                    g = k
                    break
            if g is None:
                continue
            hidden = [seq[k + o] for k in range(g + 1, p["n"])]
            if not hidden:
                continue
            rec = bytes(p["rec"])
            typ = struct.unpack_from("<i", rec, 0)[0]
            ext = struct.unpack_from("<3f", rec, 0x24)
            hits_ = []
            adm = set()

            def walk(pos, kind, depth):
                if depth > 5:
                    return
                try:
                    t, e, used = factory(hidden, pos, kind)
                except IndexError:
                    return
                if pos + used == len(hidden):
                    adm.add(t)
                    if t == typ:
                        hits_.append(e)
                    return
                for k2 in (1, 0):
                    walk(pos + used, k2, depth + 1)

            for kind in (1, 0):
                walk(0, kind, 0)
            reach[len(adm)] = reach.get(len(adm), 0) + 1
            if hits_:
                factOk += 1
                e = hits_[0]
                check(all(abs(a - b) < 1e-2 for a, b in zip(ext, e)),
                      "%s: type %d extents %s, factory says %s" % (h["zone"], typ, ext, e))
            else:
                factBad += 1
                if factBad <= 6:
                    notes.append("%s: type %d not reachable from hidden %s"
                                 % (h["zone"], typ, hidden))
        check(factBad == 0, "the factory fails to reproduce %d records" % factBad)

        # --- 3c. the kind-0 centre coin ----------------------------------------------
        five = sum(1 for ra, v, n in draws if ra == CENTRE_COIN and v % 5 == 0)
        rots = sum(1 for ra, v, n in draws if ra == CENTRE_ROT)
        check(rots == five, "%s: %d kind-0 facings for %d passing coins"
              % (h["zone"], rots, five))
        coinChecks += 1
        # Every centre piece that takes a facing roll gets exactly one, and the four
        # kind-1 slots are a fixed quartet -- so their four counts must agree with each
        # other and with the four push counts (nothing in that branch is ever rejected).
        k1d = [sum(1 for ra, v, n in draws if ra == r) for r in KIND1_ROT]
        k1p = [sum(1 for q in pushes if q["ra"] == r) for r in (0xECB14, 0xECC41, 0xECD6E, 0xECE9B)]
        check(len(set(k1d)) == 1 and k1d == k1p,
              "%s: kind-1 facing rolls %s vs pushes %s" % (h["zone"], k1d, k1p))
        k2d = sum(1 for ra, v, n in draws if ra == KIND2_ROT)
        k2p = sum(1 for q in pushes if q["ra"] == 0xEC40A)
        check(k2d == k2p, "%s: %d kind-2 facing rolls vs %d pushes" % (h["zone"], k2d, k2p))
        # the facings the rolls produce are in range on every record that takes one
        for q in pushes:
            if q["ra"] in (0xECB14, 0xECC41, 0xECD6E, 0xECE9B, 0xEC40A, 0xEBCEE):
                r = struct.unpack_from("<i", bytes(q["rec"]), 0x20)[0]
                check(0 <= r <= 3, "%s: facing %d out of range" % (h["zone"], r))

    check(sorted(pushSeen) == sorted(ALL_PUSH),
          "only %d of the %d push sites fire in the corpus" % (len(pushSeen), len(ALL_PUSH)))

    # --- report ---------------------------------------------------------------------
    print("gate_town_furnish -- the town builder's HOUSE FURNISHING pass "
          "(0x4ead3a-0x4ecf20)")
    print("  literals re-read from Server.exe            : %s" % binchk)
    print("  rand sites in the body / in FUN_004f2ee0    : %d / %d"
          % (len(body), len(fact)))
    print("  push sites, all of which fire               : %d" % len(pushSeen))
    print("  towns that furnish a house                  : %d" % towns)
    print("  furniture records (rot + offset asserted)   : %d" % slotRecs)
    print("  centre records (type/extent/rot asserted)   : %d" % centreRecs)
    print("  draws attributed to the body                : %d"
          % sum(1 for h in hits for d in h["draws"] if d[0] in BODY_SITES))
    print("  ** FUN_004f2ee0 reproduced from the town's own LCG, for every record it")
    print("     built -- draws the rig never recorded    : %d ok, %d FAIL"
          % (factOk, factBad))
    print("     null baseline (types each gap ADMITS)    : %s"
          % dict(sorted(reach.items())))
    print("  kind-0 centre coin (rand() %% 5 == 0)        : %d towns" % coinChecks)
    for m in notes[:20]:
        print("    ! %s" % m)
    print("%d checks, %d ok, %d FAIL" % (ok + fail, ok, fail))
    print("RESULT: %s" % ("PASS" if fail == 0 else "FAIL"))
    return 1 if fail else 0


if __name__ == "__main__":
    sys.exit(main())
