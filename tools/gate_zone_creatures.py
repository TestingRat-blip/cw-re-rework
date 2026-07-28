#!/usr/bin/env python3
"""Gate the OVERWORLD CREATURE-SPAWN SCATTER, `0x51ed60`-`0x51f981`.

    python tools/gate_zone_creatures.py

The last unported stage of the zone builder's tail. A **3x3 grid** (85-block spacing,
`+0x18 + rand()%10` jitter) that news up a 0x10f0-byte creature entity per surviving
cell, picks its species off the ground material, rolls a level, and rings a pack of
followers around it at radius 8.

Two things this gate checks, in increasing sharpness:

1. **The bytes.** Every branch test, branch target and immediate of the decode, read
   straight out of Server.exe, plus an EXHAUSTIVE rand-site census of the span
   (resolving `call <reg>` as well as `call [&rand]`, the discipline
   `gate_zone_prechain` established). 18 sites; the stage map accounts for all of them.

2. **The live stream as a state machine.** `raw/zone_props2_capture.json` records every
   draw whose return address lands in the zone builder, and this span is inside that
   filter, so all 56 zones' scatter draws are on disk with their return addresses. The
   decode is replayed as a grammar over those tokens: a mis-read branch shows up
   immediately as an illegal token order, which is a far sharper test than a draw count
   (cf. `gate_zone_tail`).

   The sharpest single check here is the **pack size**. `FUN_0040efc0` is a jump table
   over the species id and only 27 of 288 species have a group range other than (1,1),
   so `count = rand() % (hi-lo+1) + lo - 1` can only ever be `v%5`, `v%3` or 0. The
   number of `(0x51f8f9, 0x51f924)` member pairs actually recorded after each group roll
   must equal one of those three, computed from that roll's own recorded VALUE. Nothing
   about the pack loop was fed to the checker; it is derived from the draw and counted
   in the stream.

⚠ Site `0x51f285` (the mat-12 branch) has NEVER fired in any capture in this repo, so it
is byte-checked only. Same for the `(1,3)`/`(1,5)` split when a leader's roll is
consistent with more than one -- the gate reports how many observations are unambiguous
rather than claiming the ambiguous ones as proof.

Docs/RE_zone_creatures.md.
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
ROOT = os.path.dirname(HERE)
RAW = os.path.join(ROOT, "raw")
GAME = r"C:\Users\asuna\Desktop\RatRealms\CubegameV1"

RAND_PTR = 0x5582F4
SCAN_LO, SCAN_HI = 0x51ED60, 0x51FA00

# ---------------------------------------------------------------- the stage map
#
# name -> rand RETURN address.  These are what frida_zone_props2.py stamps.
S_CELL      = 0x51ED7E   # (rand() & 3) == 0  -> skip the cell
S_JITX      = 0x51ED92   # rand() % 10, the X jitter
S_JITZ      = 0x51EDBA   # rand() % 10, the Z jitter
S_COLD      = 0x51EEC0   # only when HUMIDITY    < 0.2; (rand()&3)==0 -> skip
S_DRY       = 0x51EF2D   # only when TEMPERATURE < 0.2; (rand()&3)==0 -> skip
S_FACING    = 0x51F227   # the entity exists: facing = rand()*360/32767
S_MAT12     = 0x51F285   # mat 12: (rand()&1) ? 0x7e : 0x82        -- NEVER OBSERVED
S_M10GATE   = 0x51F2F8   # mat 10: (rand()&3) != 0 -> fall to the tail
S_M10PICK   = 0x51F310   # mat 10: rand()&3 -> {0x79,0x7b,0x7d,0x7a}
S_DESGATE   = 0x51F383   # mat 4/5/9: rand()%3 == 0 -> fall through
S_DESPICK   = 0x51F3B7   # desert: rand()&1 -> {0x7c, 0x80}
S_M4GATE    = 0x51F3FA   # mat 4: rand()%3 == 0 -> fall to the tail
S_M4PICK    = 0x51F463   # mat 4: rand()&3 -> {0x78,0x7b,0x7f,0x7d}
S_RARE      = 0x51F4F4   # rand()%100 == 0 -> set the +0x7a bit 0x200
S_LEVEL     = 0x51F5A0   # leader level
S_GROUP     = 0x51F668   # the pack size roll
S_MLEVEL    = 0x51F8F9   # pack member level
S_MFACING   = 0x51F924   # pack member facing

NAMES = {v: k for k, v in list(globals().items()) if k.startswith("S_")}

EXPECTED_SITES = (
    S_CELL, S_JITX, S_JITZ, S_COLD, S_DRY, S_FACING,
    S_MAT12, S_M10GATE, S_M10PICK, S_DESGATE, S_DESPICK, S_M4GATE, S_M4PICK,
    S_RARE, S_LEVEL, S_GROUP, S_MLEVEL, S_MFACING,
)

# The species each material branch can hand out.  Read off the dec-chains.
PICK_M10 = {0: 0x79, 1: 0x7B, 2: 0x7D, 3: 0x7A}     # 0x51f31c..0x51f378
PICK_M4  = {0: 0x78, 1: 0x7B, 2: 0x7F, 3: 0x7D}     # 0x51f46f..0x51f4a5
PICK_DES = {0: 0x7C, 1: 0x80}                        # 0x51f3c3..0x51f3d6

# ---------------------------------------------------------------- byte assertions
#
# (va, hex bytes, what it is).  A decode claim that is not in this table is not gated.
BYTES = [
    # -- the 3x3 loop.  X outer ([ebp-0x1304]), Z inner ([ebp-0x1310]).
    (0x51ED7E, "2503000080",        "and eax, 0x80000003            (rand() % 4, toward zero)"),
    (0x51ED8A, "0f84e50b0000",      "je 0x51f975                    -- skip the cell"),
    (0x51ED93, "b90a000000",        "mov ecx, 0xa                   (X jitter = rand()%10)"),
    (0x51EDA0, "6bf655",            "imul esi, esi, 0x55            -- 85-block X spacing"),
    (0x51EDA3, "83c618",            "add esi, 0x18                  -- +24"),
    (0x51EDBA, "6bff55",            "imul edi, edi, 0x55            -- 85-block Z spacing"),
    (0x51EDBE, "b90a000000",        "mov ecx, 0xa                   (Z jitter = rand()%10)"),
    (0x51EDCB, "83c718",            "add edi, 0x18                  -- +24"),
    (0x51F987, "40",                "inc eax                        -- inner (Z) counter"),
    (0x51F98E, "83f803",            "cmp eax, 3                     -- 3 inner iterations"),
    (0x51F9A4, "83f803",            "cmp eax, 3                     -- 3 outer iterations"),

    # -- the descriptor gate: types 0 and 0xa bypass the falloff test entirely
    (0x51EDCE, "8b4118",            "mov eax, [ecx + 0x18]          -- desc->type"),
    (0x51EDE1, "0f8477000000",      "je 0x51ee5e                    -- type 0 bypasses"),
    (0x51EDE7, "83f80a",            "cmp eax, 0xa"),
    (0x51EDEA, "0f846e000000",      "je 0x51ee5e                    -- type 0xa bypasses"),
    (0x51EE2A, "e8f1d90000",        "call 0x52c820                  World_objectFalloffWeight"),
    (0x51EE4B, "7311",              "jae 0x51ee5e                   -- d <= 0 passes"),
    (0x51EE4D, "f30f59c0",          "mulss xmm0, xmm0               -- d*d"),
    (0x51EE58, "0f87170b0000",      "ja 0x51f975                    -- d*d > 0.3 skips"),

    # -- the two climate gates, each a 1-in-4 rejection
    (0x51EE7D, "f30f104008",        "movss xmm0, [eax + 8]          -- column HUMIDITY (4f8b40)"),
    (0x51EEB8, "7618",              "jbe 0x51eed2                   -- 0.2 <= humid: no draw"),
    (0x51EECC, "0f84af0a0000",      "je 0x51f981                    -- dry + 1-in-4: skip"),
    (0x51EEEA, "f30f104004",        "movss xmm0, [eax + 4]          -- column TEMPERATURE (4f8570)"),
    (0x51EF25, "7618",              "jbe 0x51ef3f                   -- 0.2 <= temp: no draw"),
    (0x51EF39, "0f84420a0000",      "je 0x51f981                    -- cold + 1-in-4: skip"),

    # -- the site-list proximity test, in 16.16 against the entity's own fraction
    (0x51EF3F, "8b8588ecffff",      "mov eax, [ebp - 0x1378]        -- the builder's site list"),
    (0x51EF55, "f30f10159c865500",  "movss xmm2, [0x55869c]         -- 2^-16"),
    (0x51EF96, "2b5110",            "sub edx, [ecx + 0x10]          -- Z delta, 16.16 int64"),
    (0x51EFCC, "2b5108",            "sub edx, [ecx + 8]             -- X delta, 16.16 int64"),
    (0x51F028, "f30f1005f0885500",  "movss xmm0, [0x5588f0]         -- 400 = (20 blocks)^2"),
    (0x51F033, "0f8748090000",      "ja 0x51f981                    -- within 20 blocks: skip"),

    # -- the column scan: up to the first air/water, then read the block BELOW
    (0x51F05B, "8b4014",            "mov eax, [eax + 0x14]          -- column scan start"),
    (0x51F07D, "251fffffff",        "and eax, 0xffffff1f            -- material = b[3] & 0x1f"),
    (0x51F082, "740e",              "je 0x51f092                    -- 0 (air) stops the scan"),
    (0x51F084, "83f802",            "cmp eax, 2                     -- 2 (water) stops it too"),
    (0x51F099, "48",                "dec eax                        -- the block BELOW the stop"),

    # -- the two field gates, neither of which spends a draw
    (0x51F0CB, "e82029fbff",        "call 0x4d19f0                  the road/path field"),
    (0x51F0E5, "0f8796080000",      "ja 0x51f981                    -- road > 0 skips"),
    (0x51F0FA, "e891e80000",        "call 0x52d990                  the water field"),
    (0x51F114, "0f8767080000",      "ja 0x51f981                    -- field < 1.0 skips"),

    # -- the entity
    (0x51F11A, "68f0100000",        "push 0x10f0                    -- sizeof(creature)"),
    (0x51F12D, "e80e1efcff",        "call 0x4e0f40                  spawn_ctor (+0x28 = 1)"),
    (0x51F13C, "d905a0375700",      "fld [0x5737a0]                 -- 32768 = a HALF BLOCK"),
    (0x51F182, "e8bfb70200",        "call 0x54a946                  ftol2 (TRUNCATES)"),
    (0x51F234, "f30f590580875500",  "mulss xmm0, [0x558780]         -- facing *= 360"),
    (0x51F244, "f30f5e0534885500",  "divss xmm0, [0x558834]         -- facing /= 32767"),
    (0x51F252, "f30f114754",        "movss [edi + 0x54], xmm0       -- +0x54 = facing"),
    (0x51F265, "c7473401000000",    "mov [edi + 0x34], 1            -- +0x34 = level"),
    (0x51F26C, "e85f9e0000",        "call 0x5290d0                  the default species pick"),
    (0x51F271, "89472c",            "mov [edi + 0x2c], eax          -- +0x2c = species"),

    # -- the species tree, keyed on the ground material
    (0x51F27A, "83f80c",            "cmp eax, 0xc                   -- mat 12"),
    (0x51F298, "0582000000",        "add eax, 0x82                  -- 0x82, or 0x7e when odd"),
    (0x51F2A0, "c7472806000000",    "mov [edi + 0x28], 6            -- solo: no level, no pack"),
    (0x51F2C1, "83bd28edffff00",    "cmp [ebp - 0x12d8], 0"),
    (0x51F2C8, "0f8c03020000",      "jl 0x51f4d1                    -- y < 0 -> default path"),
    (0x51F2CE, "83f804",            "cmp eax, 4"),
    (0x51F2D7, "83f805",            "cmp eax, 5"),
    (0x51F2E0, "83f809",            "cmp eax, 9"),
    (0x51F2E9, "83f80a",            "cmp eax, 0xa"),
    (0x51F304, "0f85c7010000",      "jne 0x51f4d1                   -- mat 10 keeps 1 in 4"),
    (0x51F325, "c7472c79000000",    "mov [edi + 0x2c], 0x79"),
    (0x51F33B, "c7472c7a000000",    "mov [edi + 0x2c], 0x7a"),
    (0x51F351, "c7472c7d000000",    "mov [edi + 0x2c], 0x7d"),
    (0x51F367, "c7472c7b000000",    "mov [edi + 0x2c], 0x7b"),
    (0x51F384, "b903000000",        "mov ecx, 3                     -- desert gate rand()%3"),
    (0x51F397, "0f2f05d8865500",    "comiss xmm0, [0x5586d8]        -- HUMIDITY vs 0.8"),
    (0x51F3A8, "0f2f8524edffff",    "comiss xmm0, [ebp - 0x12dc]    -- 0.1 vs TEMPERATURE"),
    (0x51F3CF, "c7472c80000000",    "mov [edi + 0x2c], 0x80"),
    (0x51F3DB, "c7472c7c000000",    "mov [edi + 0x2c], 0x7c"),
    (0x51F3E7, "83bd10edffff04",    "cmp [ebp - 0x12f0], 4          -- only mat 4 continues"),
    (0x51F3FB, "b903000000",        "mov ecx, 3                     -- mat-4 gate rand()%3"),
    (0x51F450, "0f2f05bc865500",    "comiss xmm0, [0x5586bc]        -- TEMPERATURE vs 0.1"),
    (0x51F47E, "c7402c78000000",    "mov [eax + 0x2c], 0x78"),
    (0x51F487, "c7402c7d000000",    "mov [eax + 0x2c], 0x7d"),
    (0x51F496, "c7402c7f000000",    "mov [eax + 0x2c], 0x7f"),
    (0x51F4A5, "c7402c7b000000",    "mov [eax + 0x2c], 0x7b"),
    (0x51F4AC, "c780580f00000000c841", "mov [eax + 0xf58], 25.0f"),

    # -- the common tail: only reached with +0x28 still 1
    (0x51F4DD, "83782801",          "cmp [eax + 0x28], 1            -- solo creatures skip"),
    (0x51F4E8, "6685487a",          "test [eax + 0x7a], cx          -- 0x1000 already set?"),
    (0x51F4F5, "b964000000",        "mov ecx, 0x64                  -- rand()%100"),
    (0x51F50B, "6609487a",          "or [eax + 0x7a], cx            -- 0x200, the rare bit"),
    (0x51F566, "e88591f0ff",        "call 0x4286f0                  the region tile lookup"),
    (0x51F577, "837e2806",          "cmp [esi + 0x28], 6            -- solo: no level roll"),
    (0x51F592, "e809fbeeff",        "call 0x40f0a0                  the species LEVEL range"),
    (0x51F5AD, "41",                "inc ecx                        -- hi - lo + 1"),
    (0x51F5BC, "895634",            "mov [esi + 0x34], edx          -- +0x34 = level"),
    (0x51F61E, "c7464000974901",    "mov [esi + 0x40], 0x1499700"),
    (0x51F625, "c74644005c2605",    "mov [esi + 0x44], 0x5265c00"),

    # -- the pack ring
    (0x51F65A, "e861f9eeff",        "call 0x40efc0                  the species GROUP range"),
    (0x51F677, "41",                "inc ecx                        -- hi - lo + 1"),
    (0x51F67A, "8d46ff",            "lea eax, [esi - 1]             -- count = roll + lo - 1"),
    (0x51F68F, "0f8ee6020000",      "jle 0x51f97b                   -- count <= 0: no pack"),
    (0x51F6CE, "f20f590548385700",  "mulsd xmm0, [0x573848]         -- 2*pi"),
    (0x51F6E1, "f20f5ec1",          "divsd xmm0, xmm1               -- theta = i*2pi/count"),
    (0x51F6EB, "660f5ac8",          "cvtpd2ps xmm1, xmm0            -- ONE f32 round"),
    (0x51F6FA, "0f5ac1",            "cvtps2pd xmm0, xmm1            -- ...then back to double"),
    (0x51F70B, "e8b8b20200",        "call 0x54a9c8                  sin, _precise"),
    (0x51F714, "f30f590538875500",  "mulss xmm0, [0x558738]         -- radius 8"),
    (0x51F71C, "f30f59058c875500",  "mulss xmm0, [0x55878c]         -- << 16"),
    (0x51F750, "e86db20200",        "call 0x54a9c2                  cos, _precise"),
    (0x51F6DA, "c7402801000000",    "mov [eax + 0x28], 1            -- members are never solo"),
    (0x51F809, "03c7",              "add eax, edi                   -- X += cos(theta)*8"),
    (0x51F811, "039574ebffff",      "add edx, [ebp - 0x148c]        -- Z += sin(theta)*8"),
    (0x51F8BD, "e8dec60000",        "call 0x52bfa0                  the member species pick"),
    (0x51F8D0, "6621477a",          "and [edi + 0x7a], ax           -- clear the rare bit"),
    (0x51F91B, "884758",            "mov [edi + 0x58], al           -- inherit the leader's +0x58"),
    (0x51F967, "0f8c33fdffff",      "jl 0x51f6a0                    -- the pack loop tail"),
]

# The floats the decode names, and what they must be.
CONSTS = [
    (0x5586CC, 0.3,     "the falloff-squared cutoff"),
    (0x5586C4, 0.2,     "the humidity / temperature coin threshold"),
    (0x5586DC, 1.0,     "one"),
    (0x5586D8, 0.8,     "the wet-branch humidity"),
    (0x5586BC, 0.1,     "the wet-branch / mat-4 temperature"),
    (0x5588F0, 400.0,   "the site proximity radius squared"),
    (0x558780, 360.0,   "degrees"),
    (0x558834, 32767.0, "RAND_MAX"),
    (0x558738, 8.0,     "the pack ring radius"),
    (0x55878C, 65536.0, "16.16"),
    (0x55869C, 1.0 / 65536.0, "2^-16"),
    (0x5737A0, 32768.0, "a half block, in 16.16"),
    (0x558698, 0.0,     "the road cutoff -- the field must be exactly <= 0"),
]

# The one f64 the stage uses: the pack ring's 2*pi.
CONSTS64 = [(0x573848, 6.283185307179586, "2*pi, the pack ring")]


# ---------------------------------------------------------------- image plumbing
def sections(data):
    pe = struct.unpack_from("<I", data, 0x3C)[0]
    nsec = struct.unpack_from("<H", data, pe + 6)[0]
    optsz = struct.unpack_from("<H", data, pe + 20)[0]
    base = struct.unpack_from("<I", data, pe + 24 + 28)[0]
    off, secs = pe + 24 + optsz, []
    for _ in range(nsec):
        vsz, va, rsz, ptr = struct.unpack_from("<IIII", data, off + 8)
        secs.append((base + va, vsz, ptr, rsz))
        off += 40
    return base, secs


class Image(object):
    def __init__(self, path):
        self.data = open(path, "rb").read()
        self.base, self.secs = sections(self.data)

    def read(self, va, n):
        for sva, vsz, ptr, rsz in self.secs:
            if sva <= va < sva + max(vsz, rsz):
                d = va - sva
                return self.data[ptr + d:ptr + d + n] if d < rsz else None
        return None

    def f32(self, va):
        return struct.unpack("<f", self.read(va, 4))[0]


def rand_sites(img, lo, hi):
    """Every rand RETURN address in [lo, hi), resolving the register-held form too."""
    md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    code = img.read(lo, hi - lo)
    holds, out, va = set(), [], lo
    while va < hi:
        got = False
        for ins in md.disasm(code[va - lo:], va):
            got = True
            va = ins.address + ins.size
            ptr = "[0x%x]" % RAND_PTR
            if ins.mnemonic == "mov" and ptr in ins.op_str:
                holds.add(ins.op_str.split(",")[0].strip())
            elif ins.mnemonic == "call":
                if ptr in ins.op_str or ins.op_str.strip() in holds:
                    out.append(ins.address + ins.size)
            elif ins.mnemonic in ("mov", "lea", "pop", "xor") and holds:
                dst = ins.op_str.split(",")[0].strip()
                if dst in holds and ptr not in ins.op_str:
                    holds.discard(dst)
            if va >= hi:
                break
        if not got:
            va += 1
    return sorted(out)


def call_targets(img, lo, hi):
    """Every call target in [lo, hi), as a multiset of operand strings."""
    md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    code = img.read(lo, hi - lo)
    out, va = {}, lo
    while va < hi:
        got = False
        for ins in md.disasm(code[va - lo:], va):
            got = True
            va = ins.address + ins.size
            if ins.mnemonic == "call":
                k = ins.op_str.strip()
                out[k] = out.get(k, 0) + 1
            if va >= hi:
                break
        if not got:
            va += 1
    return out


def jump_table(img, bias, nmax, idxtab, jmptab, dflt):
    """`FUN_0040efc0` / `FUN_0040f0a0`: species -> (lo, hi) through a byte index table."""
    out = {}
    for s in range(0, 0x120):
        e = s - bias
        if e < 0 or e > nmax:
            out[s] = dflt
            continue
        bi = img.read(idxtab + e, 1)[0]
        tgt = struct.unpack("<I", img.read(jmptab + bi * 4, 4))[0]
        b = img.read(tgt, 16)
        if b[0] == 0xC7 and b[1] == 0x01 and b[6] == 0xC7 and b[7] == 0x02:
            out[s] = (struct.unpack("<i", b[2:6])[0], struct.unpack("<i", b[8:12])[0])
        else:
            out[s] = dflt
    return out


# ---------------------------------------------------------------- the grammar
#
# One cell of the 3x3 grid, as the token sequence it can legally produce.  `rest` is the
# cell's draws after the header; each handler consumes what it recognises and returns the
# remainder, or raises.
class Bad(Exception):
    pass


def take(toks, want, why):
    if not toks or toks[0][0] != want:
        got = "0x%06x" % toks[0][0] if toks else "end of cell"
        raise Bad("expected %s (%s), got %s" % (NAMES.get(want, hex(want)), why, got))
    return toks[0], toks[1:]


def parse_species(toks, stats):
    """The material branch.  Returns (rest, solo) -- solo means +0x28 became 6."""
    if not toks:
        return toks, None                      # nothing recorded: the default path
    site = toks[0][0]

    if site == S_MAT12:                        # never observed; here for completeness
        (_, v, _), toks = take(toks, S_MAT12, "mat 12")
        stats["mat12"] += 1
        return toks, True

    if site == S_M10GATE:
        (_, v, _), toks = take(toks, S_M10GATE, "mat 10 gate")
        if v % 4 != 0:
            stats["m10_reject"] += 1
            return toks, False                 # falls through to the default tail
        (_, v2, _), toks = take(toks, S_M10PICK, "mat 10 pick")
        stats["m10_pick"] += 1
        stats["species"][PICK_M10[v2 % 4]] += 1
        return toks, True

    if site == S_DESGATE:
        (_, v, _), toks = take(toks, S_DESGATE, "mat 4/5/9 gate")
        if v % 3 != 0:
            # humid > 0.8 and temp < 0.1 -- if it held, the wet-branch pick is next
            if toks and toks[0][0] == S_DESPICK:
                (_, v2, _), toks = take(toks, S_DESPICK, "wet-branch pick")
                stats["desert"] += 1
                stats["species"][PICK_DES[v2 % 2]] += 1
                return toks, True
        # not desert: mat 5/9 fall to the tail, mat 4 gets its own gate
        if toks and toks[0][0] == S_M4GATE:
            return parse_mat4(toks, stats)
        stats["mat59"] += 1
        return toks, False

    if site == S_M4GATE:                       # reached when the 4/5/9 gate rolled 0
        return parse_mat4(toks, stats)

    return toks, False                         # no species branch: the default path


def parse_mat4(toks, stats):
    (_, v, _), toks = take(toks, S_M4GATE, "mat 4 gate")
    if v % 3 == 0:
        stats["m4_reject"] += 1
        return toks, False
    if not toks or toks[0][0] != S_M4PICK:     # humidity <= 0.1 -> the default tail
        stats["m4_dry"] += 1
        return toks, False
    (_, v2, _), toks = take(toks, S_M4PICK, "mat 4 pick")
    stats["m4_pick"] += 1
    stats["species"][PICK_M4[v2 % 4]] += 1
    return toks, True


def parse_cell(toks, stats, grp):
    """Consume exactly one grid cell. Returns the remaining tokens."""
    (_, v, _), toks = take(toks, S_CELL, "the cell coin")
    if v % 4 == 0:
        stats["skip_coin"] += 1
        return toks, True                      # nothing else may belong to this cell
    _, toks = take(toks, S_JITX, "the X jitter")
    _, toks = take(toks, S_JITZ, "the Z jitter")

    if toks and toks[0][0] == S_COLD:
        (_, v, _), toks = take(toks, S_COLD, "the cold coin")
        stats["cold"] += 1
        if v % 4 == 0:
            stats["skip_cold"] += 1
            return toks, True
    if toks and toks[0][0] == S_DRY:
        (_, v, _), toks = take(toks, S_DRY, "the dry coin")
        stats["dry"] += 1
        if v % 4 == 0:
            stats["skip_dry"] += 1
            return toks, True

    if not toks or toks[0][0] != S_FACING:
        # the site-proximity / road / water gates spend no draw, so a cell may simply end
        stats["skip_silent"] += 1
        return toks, True

    _, toks = take(toks, S_FACING, "the facing roll")
    stats["spawn"] += 1
    toks, solo = parse_species(toks, stats)

    if solo:
        stats["solo"] += 1
        return toks, True                      # jumps straight to the loop tail

    # -- the common tail.  +0x28 is still 1, so both of these are unconditional.
    _, toks = take(toks, S_RARE, "the 1-in-100 rare roll")
    _, toks = take(toks, S_LEVEL, "the leader level roll")
    (_, gv, _), toks = take(toks, S_GROUP, "the pack size roll")

    n = 0
    while toks and toks[0][0] == S_MLEVEL:
        _, toks = take(toks, S_MLEVEL, "a member level roll")
        _, toks = take(toks, S_MFACING, "a member facing roll")
        n += 1
    stats["members"] += n
    stats["packs"] += 1

    # count = roll % (hi-lo+1) + lo - 1, and only (1,1) / (1,3) / (1,5) exist
    opts = sorted({gv % (hi - lo + 1) + lo - 1 for (lo, hi) in grp})
    if n not in opts:
        raise Bad("pack size %d is not reachable from roll %d (options %s)" % (n, gv, opts))
    stats["pack_ok"] += 1
    if len(opts) == 1:                         # the roll admits exactly one size
        stats["pack_forced"] += 1
    return toks, True


# ---------------------------------------------------------------- the gate
PASS = FAIL = 0
FAILS = []


def chk(ok, what):
    global PASS, FAIL
    if ok:
        PASS += 1
    else:
        FAIL += 1
        FAILS.append(what)


def main():
    img = Image(os.path.join(GAME, "Server.exe"))

    # 1. every byte the decode claims
    for va, hexb, what in BYTES:
        want = bytes.fromhex(hexb)
        got = img.read(va, len(want))
        chk(got == want, "0x%06x %s\n         want %s\n         got  %s"
            % (va, what, hexb, got.hex() if got else "<unmapped>"))

    # 2. every float the decode names, compared at f32 (0.3f is not 0.3)
    for va, want, what in CONSTS:
        got = img.f32(va)
        want32 = struct.unpack("<f", struct.pack("<f", want))[0]
        chk(got == want32, "0x%06x %s: want %r, got %r" % (va, what, want32, got))
    for va, want, what in CONSTS64:
        got = struct.unpack("<d", img.read(va, 8))[0]
        chk(got == want, "0x%06x %s: want %r, got %r" % (va, what, want, got))

    # 3. the rand-site census is exhaustive
    sites = rand_sites(img, SCAN_LO, SCAN_HI)
    chk(tuple(sites) == tuple(sorted(EXPECTED_SITES)),
        "rand-site census: %s\n         expected: %s"
        % ([hex(s) for s in sites], [hex(s) for s in sorted(EXPECTED_SITES)]))

    # 3b. the CALL census -- what the stage can and cannot reach.
    #
    # ★ The negative here is the point. `FUN_00524540` (creature_spawn_builder, the
    # subject of RE_524540_creature_spawn.md) is NOT called from this span: the stage
    # news up its own 0x10f0-byte entity and runs `FUN_004e0f40` on it. So this stage
    # did not produce the 6,305 spawns that doc's rig recorded, and the two are separate
    # creature paths. Asserted so the question cannot drift back open.
    calls = call_targets(img, SCAN_LO, SCAN_HI)
    chk("0x524540" not in calls,
        "the scatter must NOT call creature_spawn_builder (0x524540); it constructs "
        "its entity inline")
    want_calls = {
        "dword ptr [0x5582f4]": 16,   # rand
        "0x54aa30": 5,                # __alldiv
        "0x406100": 4,                # Chunk_getColumnAt
        "0x4f2be0": 4,                # vector push_back
        "0x54a946": 3,                # ftol2
        "esi": 2,                     # rand, hoisted
        "0x52c820": 2,                # World_objectFalloffWeight
        "0x4f8570": 2,                # the humidity fallback
        "0x405fd0": 2,                # World_getBlockAt
        "0x54a7b6": 2,                # operator new
        "0x4e0f40": 2,                # the entity ctor
        "0x40f0a0": 2,                # the species LEVEL range
        "0x4f8b40": 1,                # the temperature fallback
        "0x4d19f0": 1, "0x52d990": 1, "0x5290d0": 1, "0x4286f0": 1,
        "0x40efc0": 1,                # the species GROUP range
        "0x54a9c8": 1, "0x54a9c2": 1,  # sin / cos, _precise
        "0x52bfa0": 1,                # the member species pick
        "dword ptr [0x55819c]": 1, "0x54a7bc": 1,   # the list teardown
    }
    chk(calls == want_calls,
        "call census:\n         extra:   %s\n         missing: %s"
        % ({k: v for k, v in calls.items() if want_calls.get(k) != v},
           {k: v for k, v in want_calls.items() if calls.get(k) != v}))
    chk(sum(1 for k, v in calls.items() if k in ("dword ptr [0x5582f4]", "esi")
            for _ in range(v)) == 18,
        "the 16 direct + 2 hoisted rand calls are the 18 the census found")

    # 3c. THE CALLEES' OWN DRAWS -- the whole point of doing this by census.
    #
    # frida_zone_props2.py records only draws whose return address is inside the zone
    # builder, so a callee's draws are counted in the index and absent from the list:
    # exactly the shape of a missing stage (RE_zone_tail.md's "the rig's own filter is
    # part of the measurement"). Rather than guess, census every callee:
    #
    #   FUN_005290d0  the default species pick   1 site  -> 1 draw, EVERY call
    #   FUN_0052bfa0  the member species pick   11 sites -> 0 or 1, branch-dependent
    #   everything else                          0 sites -> provably free
    #
    # and then check the census against the gaps the capture actually shows.
    for va, size, want, nm in ((0x4F8B40, 1228, 0, "the temperature fallback"),
                               (0x4F8570, 1482, 0, "the humidity fallback"),
                               (0x4D19F0, 116, 0, "the road field"),
                               (0x52D990, 498, 0, "the water field"),
                               (0x4286F0, 133, 0, "the region tile lookup"),
                               (0x5290D0, 5775, 1, "the default species pick"),
                               (0x52BFA0, 311, 11, "the member species pick")):
        n = len(rand_sites(img, va, va + size))
        chk(n == want, "0x%06x %s: %d rand sites, expected %d" % (va, nm, n, want))

    # 4. the species range tables
    grp_tab = jump_table(img, 0x15, 0x85, 0x40F018, 0x40F00C, (1, 1))
    lvl_tab = jump_table(img, 0x11, 0x8A, 0x40F188, 0x40F160, (1, 1))
    grp_ranges = sorted(set(grp_tab.values()))
    chk(grp_ranges == [(1, 1), (1, 3), (1, 5)],
        "group ranges are exactly (1,1)/(1,3)/(1,5), got %s" % (grp_ranges,))
    for s in list(PICK_M10.values()) + list(PICK_M4.values()) + list(PICK_DES.values()):
        chk(grp_tab[s] == (1, 1),
            "species 0x%02x is handed out by a solo branch, so its group range must be "
            "(1,1); it is %s" % (s, grp_tab[s]))
    chk(all(lvl_tab[s] == (2, 4) for s in range(0x78, 0x84)),
        "the material-branch species all level 2-4")

    # 4b. THE PORT'S TRANSCRIPTION of those tables.
    #
    # CwZoneCreatures.cpp carries kGroupRange / kLevelRange / kMemberFamily as literal
    # arrays. They were hand-written once and were wrong in 17 and 109 entries -- caught
    # only because rederive_creatures predicts a pack SIZE from the group range and one
    # zone's pack came out short. A literal table copied out of an image needs a machine
    # to keep it honest, so diff every entry against the image on every run.
    cpp = os.path.join(ROOT, "..", "..", "src", "worldgen", "cw", "CwZoneCreatures.cpp")
    if os.path.exists(cpp):
        src = open(cpp, encoding="utf-8").read()

        def cpp_table(decl):
            m = re.search(re.escape(decl) + r" = \{(.*?)\n\};", src, re.S)
            if not m:
                return None
            return [(int(a), int(b)) for a, b in re.findall(r"\{(\d+),(\d+)\}", m.group(1))]

        fam_tab = img.read(0x52C108, 0x55)
        jt = [struct.unpack("<I", img.read(0x52C0D8 + 4 * i, 4))[0] for i in range(12)]

        def case(t):
            b = img.read(t, 26)
            if b[0] == 0x8B:
                return (0, 0)
            mod = (struct.unpack("<I", b[7:11])[0] & 0x7FFFFFFF) + 1
            for off in range(11, 24):
                if b[off] == 0x83 and b[off + 1] == 0xC0:
                    return (mod, b[off + 2])
                if b[off] == 0x5D:
                    return (mod, 0)
            return None

        cases = [case(t) for t in jt]
        want_tables = [
            ("constexpr SpeciesRange kGroupRange[kSpeciesMax]", grp_tab),
            ("constexpr SpeciesRange kLevelRange[kSpeciesMax]", lvl_tab),
            ("constexpr Family kMemberFamily[kFamilyMax]",
             {s: cases[fam_tab[s]] for s in range(0x55)}),
        ]
        for decl, want in want_tables:
            got = cpp_table(decl)
            chk(got is not None, "CwZoneCreatures.cpp has %s" % decl)
            if got is None:
                continue
            bad = [i for i in range(len(got)) if got[i] != want[i]]
            chk(not bad, "%s: %d of %d entries differ from Server.exe%s"
                % (decl.split()[-1], len(bad), len(got),
                   "".join("\n           0x%02x: source %s, image %s" % (i, got[i], want[i])
                           for i in bad[:6])))
    else:
        print("   (CwZoneCreatures.cpp not found -- the port's tables are NOT checked)")

    # 5. the live stream, as a grammar
    cap = json.load(open(os.path.join(RAW, "zone_props2_capture.json")))
    stats = {k: 0 for k in ("skip_coin", "cold", "dry", "skip_cold", "skip_dry",
                            "skip_silent", "spawn", "solo", "mat12", "m10_reject",
                            "m10_pick", "desert", "mat59", "m4_reject", "m4_dry",
                            "m4_pick", "members", "packs", "pack_ok", "pack_forced")}
    stats["species"] = {}
    for s in set(list(PICK_M10.values()) + list(PICK_M4.values()) + list(PICK_DES.values())):
        stats["species"][s] = 0

    # frida_zone_props2.py stamps the RVA; everything above is a VA.
    IB = 0x400000
    zones = cells = 0
    for z in cap["zones"]:
        toks = [(t[0] + IB, t[1], t[2]) for t in sorted(z["draws"], key=lambda t: t[2])
                if SCAN_LO - IB <= t[0] < SCAN_HI - IB]
        zones += 1
        n = 0
        try:
            while toks:
                toks, _ = parse_cell(toks, stats, grp_ranges)
                n += 1
            chk(n == 9, "zone %s: %d cells, want 9 (the grid is 3x3)" % (z["zone"], n))
        except Bad as e:
            chk(False, "zone %s cell %d: %s" % (z["zone"], n + 1, e))
        cells += n
    chk(zones == 56, "56 zones in the capture, got %d" % zones)

    # 6. the derived totals must agree with the raw site histogram
    hist = {}
    for z in cap["zones"]:
        for ra, v, n in z["draws"]:
            if SCAN_LO - IB <= ra < SCAN_HI - IB:
                hist[ra + IB] = hist.get(ra + IB, 0) + 1
    chk(hist.get(S_CELL, 0) == 9 * 56,
        "the cell coin is unconditional: %d draws, want %d" % (hist.get(S_CELL, 0), 9 * 56))
    chk(hist.get(S_JITX, 0) == hist.get(S_JITZ, 0),
        "the X and Z jitters are paired: %d vs %d" % (hist.get(S_JITX, 0), hist.get(S_JITZ, 0)))
    chk(hist.get(S_MLEVEL, 0) == hist.get(S_MFACING, 0) == stats["members"],
        "member rolls are paired and counted: %s / %s / %d"
        % (hist.get(S_MLEVEL), hist.get(S_MFACING), stats["members"]))
    chk(hist.get(S_RARE, 0) == hist.get(S_LEVEL, 0) == hist.get(S_GROUP, 0) == stats["packs"],
        "the tail's three rolls are unconditional together: %s / %s / %s / %d"
        % (hist.get(S_RARE), hist.get(S_LEVEL), hist.get(S_GROUP), stats["packs"]))
    chk(stats["spawn"] == stats["solo"] + stats["packs"],
        "every spawned leader is solo or gets a pack: %d != %d + %d"
        % (stats["spawn"], stats["solo"], stats["packs"]))
    chk(S_MAT12 not in hist, "0x51f285 (mat 12) has still never fired live")

    # 7. every UNRECORDED draw inside the span is attributed to a censused callee.
    #
    # This is the check that makes the stage's draw cost statable. A gap that followed
    # anything other than the facing roll (0x5290d0), the group roll or a member facing
    # (both 0x52bfa0) would be an unmodelled stage, and would show up here.
    gaps = {}
    lead_gap = mem_gap = 0
    for z in cap["zones"]:
        ins = [t for t in sorted(z["draws"], key=lambda t: t[2])
               if SCAN_LO - IB <= t[0] < SCAN_HI - IB]
        for a, b in zip(ins, ins[1:]):
            g = b[2] - a[2] - 1
            if g:
                gaps.setdefault(a[0] + IB, []).append(g)
    chk(set(gaps) <= {S_FACING, S_GROUP, S_MFACING},
        "unrecorded draws follow only the facing / group / member-facing rolls, got %s"
        % [hex(k) for k in gaps])
    chk(all(g == 1 for v in gaps.values() for g in v),
        "every unrecorded run is exactly one draw long")
    lead_gap = len(gaps.get(S_FACING, []))
    chk(lead_gap == stats["spawn"],
        "0x5290d0 draws exactly once per leader: %d gaps for %d leaders"
        % (lead_gap, stats["spawn"]))
    mem_gap = len(gaps.get(S_GROUP, [])) + len(gaps.get(S_MFACING, []))
    chk(mem_gap <= stats["members"],
        "0x52bfa0 draws at most once per member: %d gaps for %d members"
        % (mem_gap, stats["members"]))

    # ---------------------------------------------------------------- report
    print("gate_zone_creatures -- the overworld creature scatter, 0x51ed60-0x51f981")
    print("   %d rand sites in 0x%06x-0x%06x, census exhaustive" % (len(sites), SCAN_LO, SCAN_HI))
    print("   %d zones, %d grid cells (9 per zone)" % (zones, cells))
    print("   cells skipped: %d coin, %d dry, %d cold, %d by a draw-free gate"
          % (stats["skip_coin"], stats["skip_cold"], stats["skip_dry"], stats["skip_silent"]))
    print("   climate coins spent: %d low-humidity, %d low-temperature"
          % (stats["cold"], stats["dry"]))
    print("   %d leaders spawned: %d solo (material branch), %d with a pack roll"
          % (stats["spawn"], stats["solo"], stats["packs"]))
    print("   material branches: mat10 %d kept / %d fell through, wet-branch %d, "
          "mat4 %d kept / %d rolled out / %d too dry, mat5|9 %d, mat12 %d"
          % (stats["m10_pick"], stats["m10_reject"], stats["desert"], stats["m4_pick"],
             stats["m4_reject"], stats["m4_dry"], stats["mat59"], stats["mat12"]))
    print("   species handed out by the material branches: %s"
          % ", ".join("0x%02x x%d" % (k, v) for k, v in sorted(stats["species"].items()) if v))
    print("   %d pack members over %d packs, every count derived from its own roll"
          % (stats["members"], stats["packs"]))
    print("   (%d of those packs have a size only ONE of (1,1)/(1,3)/(1,5) can produce)"
          % stats["pack_forced"])
    print("   unrecorded draws, ALL attributed: %d in the species pick (exactly 1 per "
          "leader), %d in the member species pick (of %d members)"
          % (lead_gap, mem_gap, stats["members"]))
    print("   -> the stage's cost is 18 in-span sites + 1 per leader + 0..1 per member")
    print()
    for f in FAILS[:20]:
        print("  [FAIL] %s" % f)
    if len(FAILS) > 20:
        print("  ... and %d more" % (len(FAILS) - 20))
    print("%s  %d/%d" % ("PASS" if not FAIL else "FAIL", PASS, PASS + FAIL))
    return 1 if FAIL else 0


if __name__ == "__main__":
    sys.exit(main())
