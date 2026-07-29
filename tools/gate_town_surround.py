"""Gate: the town builder's HOUSE SURROUND pass, 0x4ecfb5-0x4ed9ea.

Decode: Docs/RE_town_surround.md.  Source data: raw/town_props_capture*.json
(tools/frida_town_props.py, seed 42069, 92 towns, 35 of which reach this stage).

After the furnishing walk finishes the inside of a house, this pass walks the house's
GROUND STOREY and drops clutter against its outside walls: at every module whose type is
2 (a BASE) at k == 0, it tests the four horizontal neighbours in the order -X, +X, -Z, +Z,
and an EMPTY neighbour buys that face two independent `rand() % 6 == 0` coins -- two prop
slots, 3 blocks either side of the face's centre line.  Eight rand sites, eight settle
sites, eight push sites, villages only.

★ WHAT MAKES THIS ONE CHECKABLE END TO END.  Nothing here is a count.  Every emitted
record goes through `Prop_settleOnTerrain`, which `frida_town_props.py` hooks and records
in full (`before` = the 0x30 bytes the emit code built), so the gate checks the POSITION,
the ORIENTATION, the TYPE and the EXTENTS of all 1,059 records field by field -- and the
draw-for-draw SITE SEQUENCE of each of the 323 houses is predicted from the house's own
module grid, which `CwTownHouseTables.h` already holds.

★ AND THE PREDICTION HAS NO FREE PARAMETER.  The grid comes from `plot[+0x10]` through
`extract_house_layouts.py`, the rotation from `plot[+0x14]` and the mirror from the house
pass's own `0x4e6fac` coin -- all three already decoded (RE_town_house.md) -- and
`VoxelGrid_cellAt3D` rotates its indices before it indexes (RE_town_furnish.md 5b), so
WHICH face of the grid the -X walk sees depends on the rotation.  The per-direction split
is therefore NOT rotation-invariant and the sequence check really does test the transform
(contrast lesson 13, where a rigid transform hid itself in the totals).

★ THE FACTORY'S HIDDEN DRAWS.  Every record is built by `FUN_004f2cd0`, which spends a
`rand() % 7` of its own -- and one arm in three spends a second for a scale.  Those draws
are outside the builder body, so the rig never lists them (lesson 18); they are recovered
the 07-28j way, by stepping msvcrt's LCG from the town's own zone seed until every
recorded (index, value) fits (lesson 33).  The recovered values then reproduce the type
of 1,059 of 1,059 records and the f32 extents of all 288 that take the second draw.

    python tools/gate_town_surround.py
"""
import collections
import glob
import json
import os
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
RAW = os.path.join(HERE, "..", "raw")
EXE = os.path.normpath(os.path.join(HERE, "..", "..", "..", "..", "Server.exe"))
sys.path.insert(0, HERE)
import extract_house_layouts as EX          # noqa: E402

BASE = 0x400000
SPAN_LO, SPAN_HI = 0x4ECFB5, 0x4ED9EA
FACTORY = 0x4F2CD0
FACT_TABLE = 0x4F2EC4

# --- the house pass's own sites, so this gate can re-derive each house's grid ---------
SEL = [0x4E6762, 0x4E6849, 0x4E686E, 0x4E6A4D, 0x4E6A9D,
       0x4E6C0F, 0x4E6C60, 0x4E6DB2, 0x4E6DEE, 0x4E6E3E]
COIN8, PICK1, ORIENT = 0x4E6FAC, 0x4E7321, 0x4E742E
HOUSE_ALL = set(SEL) | {COIN8, PICK1, ORIENT}

# --- this stage, in emission order ----------------------------------------------------
# direction k -> (di, dj), the two coin sites, the two settle sites, the two push sites,
# and the orientation immediate the prop ctor is called with.
DIRS = [(-1, 0), (1, 0), (0, -1), (0, 1)]
COIN = [(0x4ED03E, 0x4ED162), (0x4ED2A4, 0x4ED3C6),
        (0x4ED513, 0x4ED633), (0x4ED76D, 0x4ED895)]
SETTLE = [(0x4ED133, 0x4ED255), (0x4ED397, 0x4ED4B9),
          (0x4ED601, 0x4ED721), (0x4ED862, 0x4ED988)]
PUSH = [(0x4ED149, 0x4ED26B), (0x4ED3AD, 0x4ED4CF),
        (0x4ED617, 0x4ED737), (0x4ED878, 0x4ED99E)]
ORIENT_OF = [3, 1, 0, 2]
ALLCOIN = set(c for p in COIN for c in p)
ALLSETTLE = set(c for p in SETTLE for c in p)
ALLPUSH = set(c for p in PUSH for c in p)

# The offsets, straight out of the span.  Along the face NORMAL the emit adds one of two
# .rdata doubles -- 1.5 SUBTRACTED (FUN_004e0700) on the -X/-Z walks, 15.5 ADDED
# (FUN_004ce290) on the +X/+Z ones -- and along the face it adds the integer 4 or 0xa.
NEAR, FAR = -1.5, 15.5
SLOT_OFF = [4.0, 10.0]
STRIDE = 13                                   # imul ..., 0xd throughout the span
HOUSE_ORIGIN = 7                              # RE_town_furnish.md 5b.2 / RE_town_entities.md 6
PLOT_BASES = [(i * 256) // 5 for i in range(5)]
SEED_BASE = 6346                              # world[0x800188] for seed 42069

# --- FUN_004f2cd0's seven arms, read off the jump table at 0x4f2ec4 -------------------
# (arm VA, type, fixed extents or None, does it spend a second rand)
ARMS = [(0x4F2D7C, 0x18, (2.0, 2.0, 2.0), False),
        (0x4F2D9F, 0x19, None, True),
        (0x4F2DE5, 0x1A, None, True),
        (0x4F2E36, 0x1B, (1.5, 1.5, 1.4), False),
        (0x4F2E59, 0x12, (3.0, 1.0, 0.4), False),
        (0x4F2E7C, 0x10, (1.0, 1.0, 0.5), False),
        (0x4F2E9F, 0x1C, (3.0, 3.0, 2.5), False)]
# the models these seven resolve to in the site+0xc namespace (raw/static_prop_models.json)
MODEL = {0x10: "stool", 0x12: "bench", 0x18: "barrel", 0x19: "crate",
         0x1A: "open-crate", 0x1B: "sack", 0x1C: "shelter"}


# ---------------------------------------------------------------------------------------
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
    """Both call encodings: `call [0x5582f4]` (6 bytes) and `call edi` (2)."""
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
    fv, fn = draws[0][1], draws[0][2]
    for i, v in enumerate(seq):
        if v != fv:
            continue
        o = i - fn
        if all(0 <= n + o < len(seq) and seq[n + o] == val for _r, val, n in draws):
            return o
    return None


def f32(x):
    return struct.unpack("<f", struct.pack("<f", x))[0]


def arm_scale(r):
    """The two variable arms: xmm = ((float)r * 0.5f / 32767.0f) + 1.0f, then *1.5f and
    (arm 2 only) *0.75f.  Every operation is single precision -- movd/cvtdq2ps/mulss."""
    x = f32(f32(f32(f32(r) * f32(0.5)) / f32(32767.0)) + f32(1.0))
    return f32(x * f32(1.5)), f32(x * f32(0.75))


def xform(a, b, rot, mirror, dimX=3, dimZ=3):
    """VoxelGrid_rotateIndices, FUN_004d8f90 -- run on the indices BEFORE the bounds
    check, so an out-of-range neighbour stays out of range under every rotation."""
    r = rot & 3
    if r == 1:
        a, b = dimX - b - 1, a
    elif r == 2:
        a, b = dimX - a - 1, dimZ - b - 1
    elif r == 3:
        a, b = b, dimZ - a - 1
    if mirror:
        b = dimZ - b - 1
    return a, b


def cell_type(grid, a, b, c, rot, mirror):
    a, b = xform(a, b, rot, mirror)
    if not (0 <= a < 3 and 0 <= b < 3 and 0 <= c < 4):
        return 0            # cellAt3D returns the zeroed global at 0x584258
    return grid.get((a, b, c, 0), 0)


def plots_of(raw):
    if not raw or any(r is None for r in raw):
        return None
    return [struct.unpack("<iiiiiif", bytes(r)) for r in raw]


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
            if len(notes) < 14:
                notes.append(msg)

    def u8(va):
        return at(data, secs, va, 1)[0]

    def i32(va):
        return struct.unpack("<i", at(data, secs, va, 4))[0]

    def f64(va):
        return struct.unpack("<d", at(data, secs, va, 8))[0]

    # === 1. the span's own literals, byte-checked out of Server.exe ====================
    sites = census(data, secs, SPAN_LO, SPAN_HI)
    check(sorted(sites) == sorted(ALLCOIN),
          "the census over %x-%x returns %s, not the eight coin sites"
          % (SPAN_LO, SPAN_HI, [hex(s) for s in sites]))

    # every coin is `% 6`.  Three encodings: `mov ecx,6 / idiv ecx`, `mov edi,6 / idiv
    # edi`, and a bare `idiv edi` where edi was loaded 6 earlier (0x4ed4da / 0x4ed628).
    for va in sorted(ALLCOIN):
        check(u8(va) == 0x99, "%s is not preceded by a cdq" % hex(va))
        tail = at(data, secs, va + 1, 7)
        if tail[:5] == bytes.fromhex("b906000000"):
            check(tail[5:7] == b"\xf7\xf9", "%s: mov ecx,6 not followed by idiv ecx" % hex(va))
        elif tail[:5] == bytes.fromhex("bf06000000"):
            check(tail[5:7] == b"\xf7\xff", "%s: mov edi,6 not followed by idiv edi" % hex(va))
        else:
            check(tail[:2] == b"\xf7\xff", "%s: neither a loaded 6 nor `idiv edi`" % hex(va))
    for va in (0x4ED4DA, 0x4ED628):
        check(at(data, secs, va, 5) == bytes.fromhex("bf06000000"),
              "%s does not reload edi = 6 for the bare idiv" % hex(va))

    # the stage is villages only: `cmp dword [eax+0x18], 1` / `jne <past the stage>`
    check(at(data, secs, 0x4ECFBB, 4) == bytes.fromhex("83781801"),
          "0x4ecfbb is not `cmp dword [eax+0x18], 1`")
    check(at(data, secs, 0x4ECFBF, 2) == b"\x0f\x85"
          and 0x4ECFBF + 6 + i32(0x4ECFC1) == SPAN_HI,
          "0x4ecfbf does not jump past the whole stage when desc[+0x18] != 1")

    # the module gate and the four neighbour gates
    check(at(data, secs, 0x4ED011, 3) == bytes.fromhex("803802"),
          "0x4ed011 is not `cmp byte [eax], 2` -- the BASE module test")
    for va in (0x4ED02D, 0x4ED299, 0x4ED504, 0x4ED75E):
        check(at(data, secs, va, 3) == bytes.fromhex("803800"),
              "%s is not `cmp byte [eax], 0` -- an EMPTY neighbour test" % hex(va))
    # ...and the four neighbour index forms: i-1, i+1, j-1, j+1
    check(at(data, secs, 0x4ED022, 3) == bytes.fromhex("8d46ff"), "0x4ed022 is not lea eax,[esi-1]")
    check(at(data, secs, 0x4ED290, 3) == bytes.fromhex("8d4601"), "0x4ed290 is not lea eax,[esi+1]")
    check(at(data, secs, 0x4ED4F1, 1) == b"\x40" and at(data, secs, 0x4ED4FA, 3) == bytes.fromhex("83c0fe"),
          "0x4ed4f1/0x4ed4fa are not `inc eax` then `add eax,-2` (j+1 saved, j-1 used)")

    # the stride, and the j accumulator
    for va in (0x4ED08C, 0x4ED1A6, 0x4ED2E8, 0x4ED40A, 0x4ED560, 0x4ED680, 0x4ED7C1, 0x4ED8E7):
        b = at(data, secs, va, 3)
        check(b in (bytes.fromhex("6bc90d"), bytes.fromhex("6bf60d")),
              "%s is not an `imul ..., 13`" % hex(va))
    check(at(data, secs, 0x4ED9BB, 4) == bytes.fromhex("8345ec0d"),
          "0x4ed9bb is not `add [ebp-0x14], 13` -- the j accumulator")

    # the two .rdata doubles and the two integer pushes, per site
    check(f64(0x558820) == 1.5, "0x558820 is not 1.5")
    check(f64(0x5738C8) == 15.5, "0x5738c8 is not 15.5")
    SUB, ADD = 0x4E0700, 0x4CE290           # this - d   /   this + d
    NORMAL_CALL = {0x4ED03E: (0x4ED0BD, SUB), 0x4ED162: (0x4ED1DF, SUB),
                   0x4ED2A4: (0x4ED321, ADD), 0x4ED3C6: (0x4ED443, ADD),
                   0x4ED513: (0x4ED554, SUB), 0x4ED633: (0x4ED674, SUB),
                   0x4ED76D: (0x4ED7B3, ADD), 0x4ED895: (0x4ED8DB, ADD)}
    for coin, (call_va, target) in NORMAL_CALL.items():
        check(at(data, secs, call_va, 1) == b"\xe8"
              and call_va + 5 + i32(call_va + 1) == target,
              "%s: the face-normal helper at %s is not %s"
              % (hex(coin), hex(call_va), hex(target)))
    SLOT_PUSH = {0x4ED03E: (0x4ED058, 4), 0x4ED162: (0x4ED17C, 0xA),
                 0x4ED2A4: (0x4ED2BE, 4), 0x4ED3C6: (0x4ED3E0, 0xA),
                 0x4ED513: (0x4ED56D, 4), 0x4ED633: (0x4ED68D, 0xA),
                 0x4ED76D: (0x4ED7CE, 4), 0x4ED895: (0x4ED8F4, 0xA)}
    for coin, (va, want) in SLOT_PUSH.items():
        check(at(data, secs, va, 2) == bytes([0x6A, want]),
              "%s: the along-face push at %s is not `push %d`" % (hex(coin), hex(va), want))

    # the orientation immediate at each prop-ctor call
    ORIENT_PUSH = {0x4ED03E: (0x4ED0FB, 3), 0x4ED162: (0x4ED21D, 3),
                   0x4ED2A4: (0x4ED35F, 1), 0x4ED3C6: (0x4ED481, 1),
                   0x4ED513: (0x4ED5C9, 0), 0x4ED633: (0x4ED6E9, 0),
                   0x4ED76D: (0x4ED82A, 2), 0x4ED895: (0x4ED950, 2)}
    for coin, (va, want) in ORIENT_PUSH.items():
        check(at(data, secs, va, 4) == bytes([0x6A, 0, 0x6A, want]),
              "%s: the ctor call at %s does not push 0 then %d" % (hex(coin), hex(va), want))

    # === 2. the prop factory FUN_004f2cd0 =============================================
    tbl = [struct.unpack_from("<I", at(data, secs, FACT_TABLE, 28), 4 * i)[0] for i in range(7)]
    check(tbl == [a[0] for a in ARMS],
          "the jump table at %s is %s" % (hex(FACT_TABLE), [hex(t) for t in tbl]))
    check(at(data, secs, 0x4F2D64, 8) == bytes.fromhex("99b907000000f7f9"),
          "0x4f2d64 is not `cdq / mov ecx,7 / idiv ecx`")
    check(at(data, secs, 0x4F2D6C, 3) == bytes.fromhex("83fa06"),
          "0x4f2d6c does not bound the switch at 6")
    for va, ty, ext, extra in ARMS:
        check(at(data, secs, va, 2) == bytes.fromhex("c706") and i32(va + 2) == ty,
              "%s does not store type 0x%02x" % (hex(va), ty))
        spends = at(data, secs, va + 6, 2) == b"\xff\xd7" or \
            at(data, secs, va + 7, 2) == b"\xff\xd7"
        check(spends == extra, "%s: second rand draw expected=%s" % (hex(va), extra))
        if ext is not None:
            # ⚠ Do not transcribe the offsets: the three `mov dword [esi+0x24/28/2c], imm`
            # stores are emitted in a DIFFERENT ORDER in different arms (0x4f2e59 and
            # 0x4f2e9f write +0x28 and +0x2c before +0x24), and a hand-typed offset table
            # got two of the five silently wrong the first time (lesson 7i).  Scan.
            got = {}
            p = va
            while p < va + 0x24:
                ins = at(data, secs, p, 7)
                if ins[:2] == b"\xc7\x46" and ins[2] in (0x24, 0x28, 0x2C):
                    got[ins[2]] = struct.unpack("<f", ins[3:7])[0]
                    p += 7
                else:
                    p += 1
            trip = tuple(got.get(o) for o in (0x24, 0x28, 0x2C))
            check(None not in trip and tuple(round(g, 4) for g in trip) == ext,
                  "%s: extents %s, want %s" % (hex(va), trip, ext))
    # the two variable arms' own constants
    for va, want in ((0x5586D0, 0.5), (0x558834, 32767.0), (0x5586DC, 1.0),
                     (0x5586E8, 1.5), (0x5586D4, 0.75)):
        check(struct.unpack("<f", at(data, secs, va, 4))[0] == want,
              "%s is not %s" % (hex(va), want))

    # === 3. the live capture ==========================================================
    hits = []
    for name in sorted(glob.glob(os.path.join(RAW, "town_props_capture*.json"))):
        hits += json.load(open(name, encoding="utf-8"))["hits"]
    if not hits:
        raise SystemExit("no town captures in %s" % RAW)
    prog, nxt = EX.disasm(EX.LO, EX.END + 0x20)

    towns = fires = houses = recs = pushes_seen = accepted = 0
    seq_ok = pos_ok = or_ok = ty_ok = ext_ok = 0
    lcg_ok = 0
    hidden = {1: 0, 2: 0}
    bytype = {}
    village_with_house = 0
    ycount = 0
    null = {k: collections.Counter()
            for k in ("rotmirror", "transposed", "dirperm", "count", "origin")}

    for h in hits:
        zx, zz = h["zone"]
        desc = bytes(h["desc"])
        village = struct.unpack_from("<i", desc, 0x18)[0] == 1
        draws = sorted([d for d in h["draws"] if d[0] + BASE in ALLCOIN], key=lambda d: d[2])
        settles = sorted([s for s in h["settles"] if s["ra"] + BASE in ALLSETTLE],
                         key=lambda s: s["n"])
        P = plots_of(h.get("plotsLate"))
        towns += 1
        n = 4 if struct.unpack_from("<i", desc, 0x18)[0] == 5 else 5
        nhouse = len(h.get("houses") or [])
        if village and nhouse:
            village_with_house += 1
        # 3a. the stage fires exactly when the town is a village that builds a house
        check(bool(draws) == bool(village and nhouse),
              "%d,%d: fires=%s but village=%s houses=%d" % (zx, zz, bool(draws), village, nhouse))
        if not draws:
            continue
        fires += 1

        # 3b. the two coins of a face are always drawn together
        for a, b in COIN:
            na = sum(1 for d in draws if d[0] + BASE == a)
            nb = sum(1 for d in draws if d[0] + BASE == b)
            check(na == nb, "%d,%d: %s drawn %d times, %s %d" % (zx, zz, hex(a), na, hex(b), nb))
        # 3c. a coin of 0 mod 6 is exactly a settle, per site
        for k in range(4):
            for s in (0, 1):
                nz = sum(1 for d in draws if d[0] + BASE == COIN[k][s] and d[1] % 6 == 0)
                ns = sum(1 for x in settles if x["ra"] + BASE == SETTLE[k][s])
                check(nz == ns, "%d,%d: %s has %d zero coins and %d settles"
                                % (zx, zz, hex(COIN[k][s]), nz, ns))
        # 3d. an accepted settle is exactly a push, into site+0xc
        site = int(h["site"], 16)
        mypush = [p for p in h["pushes"] if p["ra"] + BASE in ALLPUSH]
        nok = sum(1 for s in settles if s["ok"])
        check(nok == len(mypush), "%d,%d: %d accepted settles, %d pushes" % (zx, zz, nok, len(mypush)))
        check(all(int(p["vec"], 16) == site + 0xC for p in mypush),
              "%d,%d: a push went somewhere other than site+0xc" % (zx, zz))
        pushes_seen += len(mypush)
        accepted += nok

        # 3e. re-derive every house's module grid, rotation and mirror
        order = [(r, c) for r in range(n) for c in range(n)]
        housed = [(r, c, P[r + n * c]) for (r, c) in order if P[r + n * c][3] == 2]
        hd = [d for d in sorted(h["draws"], key=lambda d: d[2]) if d[0] + BASE in HOUSE_ALL]
        atx, grids = 0, []
        for (r, c, p) in housed:
            grid, used, _ = EX.simulate(prog, nxt, p[4], p[5], [d[1] for d in hd[atx:atx + 8]])
            atx += len(used)
            mirror = (hd[atx][1] % 2) == 0            # house[+8] = sete after `% 2`
            atx += 2
            while atx < len(hd) and hd[atx][0] + BASE == ORIENT:
                atx += 1
            grids.append((r, c, grid, p[5], mirror))

        # the LCG, so the factory's unrecorded draws are readable
        alld = sorted(h["draws"], key=lambda d: d[2])
        seq = stream(SEED_BASE + zz * 0x10000 + zx, alld[-1][2] + 400000)
        off = locate(seq, alld[:400])
        check(off is not None, "%d,%d: could not locate the LCG origin" % (zx, zz))
        if off is not None:
            lcg_ok += 1

        bounds = sorted(x[3] for x in h["houses"]) + [1 << 62]
        si = 0
        for hi, (r, c, grid, rot, mirror) in enumerate(grids):
            houses += 1
            mine = [d for d in draws if bounds[hi] <= d[2] < bounds[hi + 1]]
            ox = zx * 256 + PLOT_BASES[r] + HOUSE_ORIGIN
            oz = zz * 256 + PLOT_BASES[c] + HOUSE_ORIGIN
            want = []
            for i in range(3):
                for j in range(3):
                    if cell_type(grid, i, j, 0, rot, mirror) != 2:
                        continue
                    for k, (di, dj) in enumerate(DIRS):
                        if cell_type(grid, i + di, j + dj, 0, rot, mirror) != 0:
                            continue
                        want.append((COIN[k][0], i, j, k, 0))
                        want.append((COIN[k][1], i, j, k, 1))
            # 3f. THE SITE SEQUENCE, draw for draw, from the module grid alone
            if [w[0] for w in want] == [d[0] + BASE for d in mine]:
                seq_ok += 1
                ok += 1
            else:
                check(False, "%d,%d house %d: model wants %d draws, capture has %d"
                             % (zx, zz, hi, len(want), len(mine)))
                continue
            yseen = set()
            for w, d in zip(want, mine):
                if d[1] % 6 != 0:
                    continue
                s = settles[si]
                si += 1
                _ra, i, j, k, slot = w
                di, dj = DIRS[k]
                if di:
                    px = ox + STRIDE * i + (NEAR if di < 0 else FAR)
                    pz = oz + STRIDE * j + SLOT_OFF[slot]
                else:
                    px = ox + STRIDE * i + SLOT_OFF[slot]
                    pz = oz + STRIDE * j + (NEAR if dj < 0 else FAR)
                b = bytes(s["before"])
                x16, z16, y16 = struct.unpack_from("<qqq", b, 8)
                recs += 1
                # 3g. the position, at full 16.16
                if x16 == int(px * 65536) and z16 == int(pz * 65536):
                    pos_ok += 1
                    ok += 1
                else:
                    check(False, "%d,%d h%d: want (%.1f,%.1f) got (%.4f,%.4f)"
                                 % (zx, zz, hi, px, pz, x16 / 65536.0, z16 / 65536.0))
                # 3h. the orientation is the walk's own immediate
                if struct.unpack_from("<i", b, 0x20)[0] == ORIENT_OF[k]:
                    or_ok += 1
                    ok += 1
                else:
                    check(False, "%d,%d h%d: orient %d, want %d"
                                 % (zx, zz, hi, struct.unpack_from("<i", b, 0x20)[0], ORIENT_OF[k]))
                check(y16 % 65536 == 0, "%d,%d h%d: Y carries a fraction" % (zx, zz, hi))
                yseen.add(y16)
                # 3i. the factory, from the recovered hidden draw
                if off is None:
                    continue
                arm = seq[d[2] + 1 + off] % 7
                _va, ty, ext, extra = ARMS[arm]
                hidden[2 if extra else 1] += 1
                bytype[ty] = bytype.get(ty, 0) + 1
                got_ty = struct.unpack_from("<i", b, 0)[0]
                if got_ty == ty:
                    ty_ok += 1
                    ok += 1
                else:
                    check(False, "%d,%d h%d: factory arm %d wants type 0x%02x, record has 0x%02x"
                                 % (zx, zz, hi, arm, ty, got_ty))
                got = struct.unpack_from("<3f", b, 0x24)
                if extra:
                    a1, a2 = arm_scale(seq[d[2] + 2 + off])
                    exp = (a1, a1, a1) if arm == 1 else (a1, a1, a2)
                else:
                    exp = ext
                if tuple(round(g, 4) for g in got) == tuple(round(e, 4) for e in exp):
                    ext_ok += 1
                    ok += 1
                else:
                    check(False, "%d,%d h%d: extents %s, want %s" % (zx, zz, hi, got, exp))
            # 3j. every record of one house shares one base Y (reported: it is a column read)
            if yseen:
                ycount += 1
                check(len(yseen) == 1,
                      "%d,%d house %d: %d distinct base Y" % (zx, zz, hi, len(yseen)))

            # === 4. the NULL BASELINES, measured every run, not once ==================
            # How much of the model does the data actually pin?  Re-derive the sequence
            # under every wrong variant and count what still fits (lesson 5).
            def seq_under(rr, mm, dirs, transpose=False):
                w = []
                for a in range(3):
                    for b in range(3):
                        i2, j2 = (b, a) if transpose else (a, b)
                        if cell_type(grid, i2, j2, 0, rr, mm) != 2:
                            continue
                        for k2 in dirs:
                            d2 = DIRS[k2]
                            if cell_type(grid, i2 + d2[0], j2 + d2[1], 0, rr, mm) != 0:
                                continue
                            w += [COIN[k2][0], COIN[k2][1]]
                return w
            truth = [d[0] + BASE for d in mine]
            null["rotmirror"][sum(1 for rr in range(4) for mm in (False, True)
                                  if seq_under(rr, mm, range(4)) == truth)] += 1
            if seq_under(rot, mirror, range(4), transpose=True) == truth:
                null["transposed"][0] += 1
            for p in ((0, 1, 3, 2), (1, 0, 2, 3), (1, 0, 3, 2), (2, 3, 0, 1)):
                if seq_under(rot, mirror, p) == truth:
                    null["dirperm"][p] += 1
            null["count"][len(truth)] += 1

            # ...and sweep the HOUSE ORIGIN over a whole module stride.  Every offset in
            # this stage is a literal RELATIVE to the anchor, and the plot base comes from
            # the derived lattice, so the sweep pins the anchor with nothing left over --
            # which RE_town_furnish.md 5b could not do from its own decomposition.
            si2 = si - sum(1 for w, d in zip(want, mine) if d[1] % 6 == 0)
            for w, d in zip(want, mine):
                if d[1] % 6 != 0:
                    continue
                s2 = settles[si2]
                si2 += 1
                _ra, i, j, k, slot = w
                di, dj = DIRS[k]
                x16, z16 = struct.unpack_from("<qq", bytes(s2["before"]), 8)
                for org in range(STRIDE):
                    if di:
                        px = zx * 256 + PLOT_BASES[r] + org + STRIDE * i + (NEAR if di < 0 else FAR)
                        pz = zz * 256 + PLOT_BASES[c] + org + STRIDE * j + SLOT_OFF[slot]
                    else:
                        px = zx * 256 + PLOT_BASES[r] + org + STRIDE * i + SLOT_OFF[slot]
                        pz = zz * 256 + PLOT_BASES[c] + org + STRIDE * j + (NEAR if dj < 0 else FAR)
                    if x16 == int(px * 65536) and z16 == int(pz * 65536):
                        null["origin"][org] += 1

    print("gate_town_surround -- the town builder's HOUSE SURROUND pass (0x4ecfb5-0x4ed9ea)")
    print("  %d towns in the capture; %d are villages that build a house; %d fire"
          % (towns, village_with_house, fires))
    print("  %d houses, %d records, %d accepted by Prop_settleOnTerrain -> %d pushes into site+0xc"
          % (houses, recs, accepted, pushes_seen))
    print("  ASSERTED from the module grid alone (no free parameter):")
    print("    the per-house SITE SEQUENCE, draw for draw       : %d / %d houses" % (seq_ok, houses))
    print("    the record POSITION at full 16.16 (X and Z)      : %d / %d" % (pos_ok, recs))
    print("    the record ORIENTATION                           : %d / %d" % (or_ok, recs))
    print("  ASSERTED from the LCG-recovered factory draws (the rig cannot see them):")
    print("    the record TYPE   (7 arms)                       : %d / %d" % (ty_ok, recs))
    print("    the record EXTENTS (5 fixed, 2 computed in f32)  : %d / %d" % (ext_ok, recs))
    print("    the LCG origin located                           : %d / %d towns" % (lcg_ok, fires))
    print("    hidden factory draws per record: %d cost 1, %d cost 2" % (hidden[1], hidden[2]))
    print("  models (site+0xc namespace, raw/static_prop_models.json): %s"
          % ", ".join("%s %d" % (MODEL[t], c) for t, c in sorted(bytype.items())))
    print("  REPORTED, not asserted: the base Y is a column read (region-cache-blocked);"
          " it is checked only for being one integer per house (%d houses)" % ycount)

    # ★ the anchor sweep is an ASSERTION: 7 must close everything and nothing else may
    check(null["origin"].get(HOUSE_ORIGIN, 0) == recs
          and all(v == 0 for o, v in null["origin"].items() if o != HOUSE_ORIGIN),
          "the house-anchor sweep does not single out %d: %s" % (HOUSE_ORIGIN, dict(null["origin"])))
    print("  THE NULL BASELINES (measured every run -- what the data does NOT pin):")
    print("    the house ANCHOR, swept over a whole 13 stride  : only +%d closes"
          " (%d / %d records; every other offset 0)"
          % (HOUSE_ORIGIN, null["origin"].get(HOUSE_ORIGIN, 0), recs))
    print("    houses whose sequence fits exactly ONE of the 8 rotation/mirror settings"
          " : %d of %d" % (null["rotmirror"].get(1, 0), houses))
    print("      (the full spread, settings-that-fit -> houses: %s -- a layout symmetric"
          " under all 8 tests nothing)" % dict(sorted(null["rotmirror"].items())))
    print("    the TRANSPOSED loop (j outer, i inner) still fits : %d of %d houses"
          % (null["transposed"][0], houses))
    print("    a wrong DIRECTION ORDER still fits (permutation -> houses): %s"
          % {"".join(str(x) for x in p): v for p, v in sorted(null["dirperm"].items())})
    print("      (the direction IDENTITY is pinned separately and completely, by the"
          " position and the orientation immediate: %d / %d records each)" % (pos_ok, recs))
    print("    per-house draw counts take only %d values %s -- it is the SITE SEQUENCE that"
          " carries the information here, not the total"
          % (len(null["count"]), sorted(null["count"])))
    print("  %d ok, %d FAIL" % (ok, fail))
    for m in notes:
        print("    !", m)
    return 1 if fail else 0


if __name__ == "__main__":
    sys.exit(main())
