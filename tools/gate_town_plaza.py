"""Gate: the town builder's ROLE-0/7 PLOT -- the sand plaza, 0x4ef248-0x4f0046.

Decode: Docs/RE_town_plaza.md.  Source data: raw/town_props_capture*.json
(tools/frida_town_props.py, seed 42069, 92 towns).

Every plot whose post-promotion role is 0 or 7 is visited at its FOUR QUADRANT CENTRES.
A centre that passes `World_falloffSquared >= 0.72` reads the column there; in a VILLAGE
the block under the surface must be class 0xb, and then a radius-8 disc is repainted up
to the box's maximum surface (one draw per voxel in the 7..8 annulus, none inside), a
tree is planted and four type-0x12 props are placed at the disc's compass points.  A RUIN
skips the class test and the disc and goes straight to the tree.

Seven rand sites, 55,911 draws over 855 sites -- 24.5% of everything the capture records
inside the builder body, and the single largest remaining site (`0x4ef7c8`, 52,811) is the
per-voxel one.

WHAT THIS GATE PROVES vs WHAT IT READS OFF THE CAPTURE (lesson 12):

  * ASSERTED, from the seed alone -- every plaza site's `falloffSquared >= 0.72`, and the
    RUIN tree-site count as a whole (role + falloff, no terrain at all).
  * ASSERTED, from the stream -- the site sequence per site (FILL* T1 T2 P0 P1 P2 P3 for
    a village, T1 T2 for a ruin), the `rand() % 8 != 0` prop coin against the recorded
    settles, and every prop's type / offset / rotation / extent / Y.
  * ASSERTED, geometric -- every plaza site recovered from its props lands on a quadrant
    centre of a role-0 or role-7 plot.
  * FED -- the per-column surface heights inside the disc.  Nothing records them, so the
    FILL run length is only bounded (`>= 2 * |ring|`, with equality on flat ground), not
    reproduced.  cwgen's own terrain is where that gets checked.

The constants (0.72, 49, 64, 0.8, 0.75/0.1/32767, the prop type, the four rotations, the
extents and the two tree ranges) are re-read out of Server.exe every run and diffed
against the literals here, so a transcription cannot drift from the binary (lesson 7c).

    python tools/gate_town_plaza.py
"""
import glob
import json
import os
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
RAW = os.path.join(HERE, "..", "raw")
EXE = os.path.normpath(os.path.join(HERE, "..", "..", "..", "..", "Server.exe"))
sys.path.insert(0, os.path.normpath(os.path.join(HERE, "..", "..", "cw_rederive")))
import cw_feature  # noqa: E402

IMAGE_BASE = 0x400000
F32 = cw_feature.f32

# --- the seven rand sites, as RVAs (the capture stores draws without the image base) ---
FILL = 0xEF7C8   # 0.75 + rand()*0.1/32767 -- the ring voxel shade, once per RING VOXEL
TREEH = 0xEF938  # rand() % 8 + 0xd  -- the tree's `height` argument
TREES = 0xEF94E  # rand() % 6 + 7    -- the tree's `size` argument
COINS = [0xEF98B, 0xEFAD9, 0xEFC37, 0xEFD85]   # rand() % 8 != 0 -> place prop k
SETTLES = [0xEFAB1, 0xEFC0F, 0xEFD5D, 0xEFEBB]  # Prop_settleOnTerrain return addresses
PUSHES = [0xEFAC4, 0xEFC22, 0xEFD70, 0xEFECE]   # std::vector<Prop>::push_back returns
STAGE = [FILL, TREEH, TREES] + COINS

# The stage's span in the builder body -- the rand-site census must return exactly STAGE.
SPAN_LO, SPAN_HI = 0x4EF248, 0x4F0046

# --- the literals this gate exists to keep honest ------------------------------------
# .rdata doubles / floats read by the stage
K_FALLOFF_VA, K_FALLOFF = 0x573890, 0.72      # comisd at 0x4ef3cb, `ja` -> skip
K_RING_VA, K_RING = 0x5738D0, 49.0            # comisd at 0x4ef7b8, `jb` -> interior
K_DISC_VA, K_DISC = 0x5738D8, 64.0            # comisd at 0x4ef6ec / 0x4ef55c, `ja` -> skip
K_HUMID_VA, K_HUMID = 0x5586D8, 0.800000011920929   # comiss at 0x4ef913
K_SHADE_VA, K_SHADE = 0x5586D4, 0.75          # addss at 0x4ef7e8
K_JITTER_VA, K_JITTER = 0x5586BC, 0.10000000149011612  # mulss at 0x4ef7d0
K_32767_VA, K_32767 = 0x558834, 32767.0       # divss at 0x4ef7e0

PROP_TYPE = 0x12                              # mov [ebp-0x21a8], 0x12 at 0x4ef9c5 etc.
# FUN_00401080 at 0x4ef9d6 etc. -- the three f32 immediates the prologue pushes. Stored as
# their bit patterns so nothing here is a decimal transcription of a float (lesson 7c).
PROP_EXTENT_BITS = (0x40400000, 0x3ECCCCCD, 0x3ECCCCCD)
PROP_EXTENT = struct.unpack("<3f", struct.pack("<3I", *PROP_EXTENT_BITS))
# where those immediates live: `mov [esp], imm32` / `mov [esp+4], imm32` / `[esp+8]`
PROP_EXTENT_VA = [(0x4EF9CF + 3, 0x4EF9B9 + 4, 0x4EF9B1 + 4),
                  (0x4EFB1D + 3, 0x4EFB07 + 4, 0x4EFAFF + 4),
                  (0x4EFC7B + 3, 0x4EFC65 + 4, 0x4EFC5D + 4),
                  (0x4EFDC9 + 3, 0x4EFDB3 + 4, 0x4EFDAB + 4)]
# (dx, dz) of the four props relative to the disc centre, and the rotation each carries.
PROP_OFFSET = [(0.5, -7.5), (0.5, 9.5), (-7.5, 0.5), (9.5, 0.5)]
PROP_ROT = [0, 2, 3, 1]
# the type-byte stores at 0x4ef9c5 / 0x4efb13 / 0x4efc71 / 0x4efdbf
PROP_TYPE_VA = [0x4EF9C5, 0x4EFB13, 0x4EFC71, 0x4EFDBF]
# the rotation stores at 0x4efaa2 / 0x4efc00 / 0x4efd4e / 0x4efeac
PROP_ROT_VA = [0x4EFAA2, 0x4EFC00, 0x4EFD4E, 0x4EFEAC]

TREE_H_ADD, TREE_H_MOD = 0x0D, 8              # add eax, 0xd at 0x4ef944 after `% 8`
TREE_S_ADD, TREE_S_MOD = 7, 6                 # add edx, 7 at 0x4ef95f after `% 6`
TREE_TYPE_WET, TREE_TYPE_DRY = 3, 5           # mov eax,5 / mov ecx,3 / cmova at 0x4ef91a
BLOCK_CLASS_SAND = 0x0B                       # cmp eax, 0xb at 0x4ef477
RING_BLOCK_CLASS = 6                          # push 6 at 0x4ef825

CAPTURES = ("town_props_capture_towns_5.json", "town_props_capture_32730_32746_5.json")


# ------------------------------------------------------------------ image helpers ----
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


# ------------------------------------------------------------------ derived helpers --
def falloff_squared(desc, x, z):
    """FUN_0052dee0 on the town's own feature descriptor -- max(0, 1-w)^2, the same
    helper gate_town_verdict.py uses for plot[+0x18] (1,485/1,485)."""
    cx, cz = struct.unpack_from("<qq", desc, 0)
    radius, = struct.unpack_from("<f", desc, 0x10)
    ftype, = struct.unpack_from("<i", desc, 0x18)
    w = cw_feature.falloff_weight(cx, cz, radius, ftype, x << 16, z << 16)
    onemw = F32(1.0 - w)
    return F32(onemw * onemw) if onemw > 0.0 else 0.0


def ring_cells():
    """The two disc predicates, evaluated exactly as the loop does: the box is +-8 and
    the offsets are (centre + 0.5) - i, so dx runs over {-7.5 .. 8.5}."""
    disc = ring = 0
    for dx in range(-8, 9):
        for dz in range(-8, 9):
            d2 = (0.5 + dx) ** 2 + (0.5 + dz) ** 2
            if d2 <= K_DISC:
                disc += 1
                if d2 >= K_RING:
                    ring += 1
    return disc, ring


def plots_of(h):
    raw = h.get("plotsLate")
    if not raw or any(p is None for p in raw):
        return None
    return [struct.unpack_from("<7i", bytes(p)) for p in raw]


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

    # --- 1. the literals, straight out of Server.exe ----------------------------------
    for va, want, name in ((K_FALLOFF_VA, K_FALLOFF, "falloff 0.72"),
                           (K_RING_VA, K_RING, "ring d^2 49"),
                           (K_DISC_VA, K_DISC, "disc d^2 64")):
        got = struct.unpack("<d", at(data, secs, va, 8))[0]
        check(got == want, "%s: binary holds %r, source says %r" % (name, got, want))
    for va, want, name in ((K_HUMID_VA, K_HUMID, "humid 0.8"),
                           (K_SHADE_VA, K_SHADE, "shade base 0.75"),
                           (K_JITTER_VA, K_JITTER, "shade jitter 0.1"),
                           (K_32767_VA, K_32767, "32767")):
        got = struct.unpack("<f", at(data, secs, va, 4))[0]
        check(got == want, "%s: binary holds %r, source says %r" % (name, got, want))
    for k, va in enumerate(PROP_TYPE_VA):        # c7 85 <disp32> <imm32>
        imm = struct.unpack("<i", at(data, secs, va + 6, 4))[0]
        check(imm == PROP_TYPE, "prop %d type: binary %d, source %d" % (k, imm, PROP_TYPE))
    for k, va in enumerate(PROP_ROT_VA):
        imm = struct.unpack("<i", at(data, secs, va + 6, 4))[0]
        check(imm == PROP_ROT[k], "prop %d rot: binary %d, source %d" % (k, imm, PROP_ROT[k]))
    for k, vas in enumerate(PROP_EXTENT_VA):
        got = tuple(struct.unpack("<I", at(data, secs, va, 4))[0] for va in vas)
        check(got == PROP_EXTENT_BITS, "prop %d extent: binary %s, source %s"
              % (k, [hex(g) for g in got], [hex(g) for g in PROP_EXTENT_BITS]))
    check(at(data, secs, 0x4EF477, 3) == bytes((0x83, 0xF8, BLOCK_CLASS_SAND)),
          "0x4ef477 is not `cmp eax, 0x%x`" % BLOCK_CLASS_SAND)
    check(at(data, secs, 0x4EF825, 2) == bytes((0x6A, RING_BLOCK_CLASS)),
          "0x4ef825 is not `push %d`" % RING_BLOCK_CLASS)
    check(at(data, secs, 0x4EF944, 3) == bytes((0x83, 0xC0, TREE_H_ADD)),
          "0x4ef944 is not `add eax, 0x%x`" % TREE_H_ADD)
    check(at(data, secs, 0x4EF95F, 3) == bytes((0x83, 0xC2, TREE_S_ADD)),
          "0x4ef95f is not `add edx, %d`" % TREE_S_ADD)
    check(struct.unpack("<i", at(data, secs, 0x4EF91B, 4))[0] == TREE_TYPE_DRY,
          "0x4ef91a does not load tree type %d" % TREE_TYPE_DRY)
    check(struct.unpack("<i", at(data, secs, 0x4EF920, 4))[0] == TREE_TYPE_WET,
          "0x4ef91f does not load tree type %d" % TREE_TYPE_WET)
    binchk = "%d ok" % ok

    # --- 2. the rand-site census over the stage's span --------------------------------
    call_rand = bytes.fromhex("ff15f4825500")
    seen = []
    va = SPAN_LO
    while va < SPAN_HI:
        if at(data, secs, va, 6) == call_rand:
            seen.append(va + 6)
            va += 6
        else:
            va += 1
    check(sorted(seen) == sorted(s + IMAGE_BASE for s in STAGE),
          "rand-site census over 0x%x-0x%x returned %s" % (SPAN_LO, SPAN_HI,
                                                           [hex(s) for s in seen]))

    # --- 3. the disc geometry ---------------------------------------------------------
    disc, ring = ring_cells()
    check(disc == 208 and ring == 52,
          "disc/ring cell counts are %d/%d, expected 208/52" % (disc, ring))

    # --- the captures -----------------------------------------------------------------
    hits = []
    for name in CAPTURES:
        p = os.path.join(RAW, name)
        if os.path.exists(p):
            hits += json.load(open(p))["hits"]
    if not hits:
        print("no town_props captures on disk")
        return 1

    villages = ruins = 0
    sites_v = sites_r = 0
    props_checked = 0
    coin_checks = 0
    fill_runs = []
    geom_checked = 0
    falloff_checked = 0
    ruin_exact = ruin_coastal = 0
    seq_checked = 0

    for h in hits:
        zx, zz = h["zone"]
        desc = bytes(h["desc"])
        ftype = struct.unpack_from("<i", desc, 0x18)[0]
        n = 4 if ftype == 5 else 5
        span = 256 // n
        quad = (256 // n) // 2
        base = span // 4
        stage_draws = [(ra, v, k) for ra, v, k in h["draws"] if ra in STAGE]
        if ftype == 1:
            villages += 1
        elif ftype == 5:
            ruins += 1

        # --- 3a. the site sequence, draw for draw ------------------------------------
        # A village site is FILL* T1 T2 P0 P1 P2 P3; a ruin site is T1 T2.
        i = 0
        while i < len(stage_draws):
            if stage_draws[i][0] == FILL:
                run = 0
                while i < len(stage_draws) and stage_draws[i][0] == FILL:
                    run += 1
                    i += 1
                fill_runs.append(run)
                check(run >= 2 * ring,
                      "%s: fill run %d < 2 * |ring| = %d" % (h["zone"], run, 2 * ring))
                want = [TREEH, TREES] + COINS
            else:
                want = [TREEH, TREES]
            got = [d[0] for d in stage_draws[i:i + len(want)]]
            check(got == want, "%s: site sequence %s, expected %s"
                  % (h["zone"], [hex(g) for g in got], [hex(w) for w in want]))
            seq_checked += 1
            if ftype == 1:
                sites_v += 1
            else:
                sites_r += 1
            i += len(want)

        # --- 3b. the prop coin against the recorded settles ---------------------------
        settles = {}
        for s in h["settles"]:
            if s["ra"] in SETTLES:
                settles[(SETTLES.index(s["ra"]), s["n"])] = s
        for ra, v, k in h["draws"]:
            if ra in COINS:
                j = COINS.index(ra)
                check(((v % 8) != 0) == ((j, k + 1) in settles),
                      "%s: prop %d coin %d vs settle at n=%d" % (h["zone"], j, v, k + 1))
                coin_checks += 1

        # --- 3c. every prop record, field by field, and the site geometry -------------
        # Group the four props of a site by the settle index: they are consecutive.
        centres = {}
        for s in h["settles"]:
            if s["ra"] not in SETTLES:
                continue
            j = SETTLES.index(s["ra"])
            rec = bytes(s["before"])
            typ = struct.unpack_from("<i", rec, 0)[0]
            x16, z16, y16 = struct.unpack_from("<qqq", rec, 8)
            rot = struct.unpack_from("<i", rec, 0x20)[0]
            ext = struct.unpack_from("<3f", rec, 0x24)
            dx, dz = PROP_OFFSET[j]
            check(typ == PROP_TYPE, "%s: prop type %d" % (h["zone"], typ))
            check(rot == PROP_ROT[j], "%s: prop %d rot %d" % (h["zone"], j, rot))
            check(ext == PROP_EXTENT, "%s: prop extent %s" % (h["zone"], ext))
            check(x16 % 65536 == 0x8000 and z16 % 65536 == 0x8000,
                  "%s: prop %d is not on a half block" % (h["zone"], j))
            check(y16 % 65536 == 0, "%s: prop %d Y carries a fraction" % (h["zone"], j))
            props_checked += 1
            cx = int(x16 / 65536.0 - dx)
            cz = int(z16 / 65536.0 - dz)
            centres.setdefault((cx, cz), []).append((j, y16 >> 16))

        pl = plots_of(h)
        for (cx, cz), members in sorted(centres.items()):
            # every prop of a site stands at the same platform level
            ys = set(y for _, y in members)
            check(len(ys) == 1, "%s: site (%d,%d) props at %s" % (h["zone"], cx, cz, ys))
            # the falloff gate, from the seed alone
            check(falloff_squared(desc, cx, cz) >= K_FALLOFF,
                  "%s: site (%d,%d) falloffSq %.6f < %.2f"
                  % (h["zone"], cx, cz, falloff_squared(desc, cx, cz), K_FALLOFF))
            falloff_checked += 1
            if pl is None:
                continue
            hit = None
            for r in range(n):
                for c in range(n):
                    for qa in (0, quad):
                        for qb in (0, quad):
                            if (cx == zx * 256 + (r * 256) // n + qa + base and
                                    cz == zz * 256 + (c * 256) // n + qb + base):
                                hit = pl[r + n * c][3]
            check(hit in (0, 7),
                  "%s: site (%d,%d) is not a quadrant centre of a role-0/7 plot (role %s)"
                  % (h["zone"], cx, cz, hit))
            geom_checked += 1

        # --- 3d. the RUIN tree-site count, derived from the seed alone ----------------
        if ftype == 5 and pl is not None:
            pred = 0
            lowest = 1 << 30
            for r in range(n):
                for c in range(n):
                    p = pl[r + n * c]
                    if p[3] not in (0, 7):
                        continue
                    q = sum(1 for qa in (0, quad) for qb in (0, quad)
                            if falloff_squared(desc, zx * 256 + (r * 256) // n + qa + base,
                                               zz * 256 + (c * 256) // n + qb + base) >= K_FALLOFF)
                    if q:
                        pred += q
                        lowest = min(lowest, p[0])
            got = sum(1 for ra, v, k in h["draws"] if ra == TREEH)
            if lowest >= 2:
                # No contributing plot reaches sea level, so the `surface > 1` gate at
                # 0x4ef927 cannot fire and the count is a pure function of the seed.
                check(got == pred, "%s: ruin tree sites %d, derived %d"
                      % (h["zone"], got, pred))
                ruin_exact += 1
            else:
                check(got <= pred, "%s: ruin tree sites %d exceeds the derived bound %d"
                      % (h["zone"], got, pred))
                ruin_coastal += 1

    # --- report ---------------------------------------------------------------------
    print("gate_town_plaza -- the town builder's role-0/7 plot, the sand plaza "
          "(0x4ef248-0x4f0046)")
    print("  literals re-read from Server.exe            : %s" % binchk)
    print("  rand sites in 0x%x-0x%x               : %d  %s"
          % (SPAN_LO, SPAN_HI, len(seen), [hex(s) for s in sorted(seen)]))
    print("  disc / ring cells from the two constants    : %d / %d  (flat-ground floor %d draws)"
          % (disc, ring, 2 * ring))
    print("  towns: %d villages, %d ruins" % (villages, ruins))
    print("  plaza sites (village) / tree-only (ruin)    : %d / %d" % (sites_v, sites_r))
    print("  site sequences checked draw for draw        : %d" % seq_checked)
    print("  draws attributed to the stage               : %d"
          % sum(1 for h in hits for d in h["draws"] if d[0] in STAGE))
    print("  fill runs: %d, min %d, max %d, exactly the floor %d"
          % (len(fill_runs), min(fill_runs), max(fill_runs),
             sum(1 for r in fill_runs if r == 2 * ring)))
    print("  prop coin rule (rand() %% 8 != 0)            : %d" % coin_checks)
    print("  prop records checked field by field         : %d" % props_checked)
    print("  sites on a role-0/7 quadrant centre         : %d" % geom_checked)
    print("  sites with falloffSq >= %.2f, from the seed : %d" % (K_FALLOFF, falloff_checked))
    print("  ruin tree count derived from the seed alone : %d exact, %d coastal (bounded)"
          % (ruin_exact, ruin_coastal))
    for m in notes[:20]:
        print("    ! %s" % m)
    print("%d checks, %d ok, %d FAIL" % (ok + fail, ok, fail))
    print("RESULT: %s" % ("PASS" if fail == 0 else "FAIL"))
    return 1 if fail else 0


if __name__ == "__main__":
    sys.exit(main())
