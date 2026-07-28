"""Gate: the town builder's ROLE-6 PLOT -- the fenced yard, 0x4e503a-0x4e5b9e.

Decode: Docs/RE_town_yard.md.  Source data: raw/town_props_capture*.json
(tools/frida_town_props.py, seed 42069, 92 towns, 17 of which have a role-6 plot).

A plot whose post-promotion role is 6 is left unbuilt and DRESSED.  A furnishing kind is
rolled once (`rand() % 6`) and a stripe axis once (`rand() % 2`); the plot's whole
span x span footprint is then walked, every column whose top block class is 4 gets its
top voxel recoloured in 2-wide alternating stripes, one qualifying cell in ten drops a
decoration, the centre cell may spawn an entity, and two perpendicular fence rows of
fence01..fence04 may run along the plot's origin edges.

Fourteen rand sites, 113,353 draws over 50 role-6 plots -- 49.6% of everything the
capture records inside the builder body.

SCOPE: the fence props are proven field-by-field because they go to `site+0xc`, the one
vector the rig hooks.  The 1-in-10 decorations go to a std::list at `site+4` and a second
record to `site+0x30`, NEITHER of which any capture records -- so their ids (0x15..0x1e
and 0x10/0x11) are checked here only as the immediates the binary holds, never as
resolved models.  See RE_town_yard.md section 5.

The switch table, the per-kind immediates and the four scale constants are re-read out of
Server.exe every run and diffed against the literals here, so a transcription cannot
drift from the binary (lesson 7c / 7i).
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

# --- the fourteen rand sites, as RVAs (capture stores draws without the image base) ---
AXIS      = 0xE5040   # rand() % 2   -- stripe axis, once per plot
KIND      = 0xE5083   # rand() % 6   -- crop kind, once per plot
K3COIN    = 0xE5136   # rand() % 10  -- kind 3 only, once per FOOTPRINT CELL
CENTRE    = 0xE54A8   # rand() & 3   -- centre entity facing, at most once/plot
CELL      = 0xE54E8   # rand() % 10  -- once per qualifying non-centre cell
CELLKIND  = 0xE54FE   # rand() % 4   -- once per cell that passed CELL
HANGANG   = 0xE55E3   # site+0x30 record angle
CROPANG   = 0xE5668   # site+4 record angle
FENCEA    = 0xE578A   # rand() % 2   -- fence row A coin
FENCEAK   = 0xE57B9   # rand() % 10  -- once per fence-A post slot
FENCEAT   = 0xE5880   # rand() & 3   -- fence-A prop type
FENCEB    = 0xE599D   # rand() % 2   -- fence row B coin
FENCEBK   = 0xE59C8   # rand() % 10
FENCEBT   = 0xE5A89   # rand() & 3   -- fence-B prop type
STAGE = [AXIS, KIND, K3COIN, CENTRE, CELL, CELLKIND, HANGANG, CROPANG,
         FENCEA, FENCEAK, FENCEAT, FENCEB, FENCEBK, FENCEBT]

# the two std::vector<Prop> push_back return addresses the rig records
PUSH_A, PUSH_B = 0xE5967, 0xE5B70

# --- the literals this gate exists to keep honest ------------------------------------
# switch (kind) jump table, 6 entries at 0x4f2b48
JUMP_TABLE_VA = 0x4F2B48
JUMP_TABLE = [0x4E50EB, 0x4E5101, 0x4E511F, 0x4E5130, 0x4E516E, 0x4E5189]

# `mov dword ptr [ebp-0x14], imm32` = c7 45 ec <imm32>  -- the site+4 record id
CROP_IMM_PREFIX = bytes.fromhex("c745ec")
CROP_IMM = {0x4E50F5: 0x17,   # kind 0
            0x4E5109: 0x19,   # kind 1
            0x4E5127: 0x1A,   # kind 2
            0x4E5154: 0x15,   # kind 3, the 1-in-10 variant
            0x4E5165: 0x1D,   # kind 3, the common variant
            0x4E5176: 0x1E,   # kind 4
            0x4E519B: 0x18}   # kind 5

# `mov dword ptr [ebp-0x5c78], imm32` = c7 85 88 a3 ff ff <imm32>  -- site+0x30 subtype
HANG_IMM_PREFIX = bytes.fromhex("c78588a3ffff")
HANG_IMM = {0x4E50EB: 0x10,   # kind 0
            0x4E5191: 0x11}   # kind 5

# the four scale constants in .rdata, referenced by the movss at each case head
SCALE_VA = {0x5586B8: 0.05, 0x5586BC: 0.1, 0x5586C0: 0.15, 0x5586C4: 0.2}

# per furnishing kind: the site+0x30 subtype (B) and the site+4 id (C)
KIND_B = {0: 0x10, 1: 0, 2: 0, 3: 0, 4: 0, 5: 0x11}
KIND_C = {0: 0x17, 1: 0x19, 2: 0x1A, 4: 0x1E, 5: 0x18}   # kind 3 handled inline
NO_ANGLE_ID = 0x19            # `cmp eax, 0x19 / jne` at 0x4e5651 skips the angle draw

FENCE_TYPE_BASE = 0x34        # `add eax, 0x34` at 0x4e588f / 0x4e5a98


def pe_read(path, va, n):
    """Read n bytes at a virtual address out of the on-disk PE."""
    with open(path, "rb") as fh:
        data = fh.read()
    pe = struct.unpack_from("<I", data, 0x3C)[0]
    nsec = struct.unpack_from("<H", data, pe + 6)[0]
    opt = struct.unpack_from("<H", data, pe + 20)[0]
    sec = pe + 24 + opt
    rva = va - IMAGE_BASE
    for i in range(nsec):
        o = sec + i * 40
        vsize = struct.unpack_from("<I", data, o + 8)[0]
        vaddr = struct.unpack_from("<I", data, o + 12)[0]
        rawsz, rawptr = struct.unpack_from("<II", data, o + 16)
        if vaddr <= rva < vaddr + max(vsize, rawsz):
            off = rawptr + (rva - vaddr)
            return data[off:off + n]
    raise SystemExit("VA %08x not in any section" % va)


def plots_of(raw):
    out = []
    for rec in raw:
        if rec is None:
            return None
        m = struct.unpack("<iiiiiif", bytes(rec))
        out.append({"minH": m[0], "maxH": m[1], "interior": m[2], "role": m[3],
                    "sub": m[4], "rot": m[5], "score": m[6]})
    return out


def main():
    hits = []
    for name in sorted(glob.glob(os.path.join(RAW, "town_props_capture*.json"))):
        hits += json.load(open(name, encoding="utf-8"))["hits"]
    if not hits:
        raise SystemExit("no town captures in %s" % RAW)

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

    # --- 0. re-read every literal out of Server.exe ----------------------------------
    binchk = "MISSING"
    if os.path.exists(EXE):
        tbl = list(struct.unpack("<6I", pe_read(EXE, JUMP_TABLE_VA, 24)))
        check(tbl == JUMP_TABLE,
              "switch table at 0x4f2b48 is %s, table says %s"
              % ([hex(v) for v in tbl], [hex(v) for v in JUMP_TABLE]))
        for va, want in sorted(CROP_IMM.items()):
            b = pe_read(EXE, va, len(CROP_IMM_PREFIX) + 4)
            got = struct.unpack_from("<I", b, len(CROP_IMM_PREFIX))[0]
            check(b.startswith(CROP_IMM_PREFIX) and got == want,
                  "crop imm at %08x is %s/%#x, table says %#x" % (va, b[:6].hex(), got, want))
        for va, want in sorted(HANG_IMM.items()):
            b = pe_read(EXE, va, len(HANG_IMM_PREFIX) + 4)
            got = struct.unpack_from("<I", b, len(HANG_IMM_PREFIX))[0]
            check(b.startswith(HANG_IMM_PREFIX) and got == want,
                  "hanging imm at %08x is %s/%#x, table says %#x" % (va, b[:6].hex(), got, want))
        for va, want in sorted(SCALE_VA.items()):
            got = pe_read(EXE, va, 4)
            check(got == struct.pack("<f", want),
                  "scale at %08x is %r, table says %r"
                  % (va, struct.unpack("<f", got)[0], want))
        # `add eax, 0x34` = 83 c0 34 at both fence-type sites
        for va in (0x4E588F, 0x4E5A98):
            b = pe_read(EXE, va, 3)
            check(b == bytes((0x83, 0xC0, FENCE_TYPE_BASE)),
                  "fence type base at %08x is %s" % (va, b.hex()))
        binchk = "OK (%d values)" % (1 + len(CROP_IMM) + len(HANG_IMM) + len(SCALE_VA) + 2)
    else:
        notes.append("Server.exe not found at %s -- literals NOT re-read" % EXE)

    # --- 1. the rand-site census inside the span is exactly these fourteen ------------
    seen = sorted({d[0] for h in hits for d in h["draws"] if 0xE5000 <= d[0] < 0xE5C00})
    check(seen == sorted(STAGE),
          "unexpected rand sites in 0x4e5000-0x4e5c00: %s"
          % [hex(a + 0x400000) for a in seen])

    towns = plots = 0
    no_snapshot = []
    centre_rolls = 0
    located = 0
    fence_props = 0

    for h in hits:
        starts = [n for ra, v, n in h["draws"] if ra == AXIS]
        if not starts:
            continue
        towns += 1
        zx, zz = h["zone"]
        n_edge = 5 if h["plotCount"] == 25 else 4
        span = 256 // n_edge
        half = span // 2

        by = {}
        for ra, val, n in h["draws"]:
            if ra in STAGE:
                by.setdefault(ra, []).append(val)

        # --- 2. one AXIS and one KIND draw per role-6 plot ---------------------------
        snap = plots_of(h.get("plotsLate") or []) or plots_of(h.get("plotsAtSort") or [])
        if snap is None:
            no_snapshot.append(h["zone"])
        else:
            n6 = sum(1 for p in snap if p["role"] == 6)
            check(n6 == len(starts),
                  "%s: %d role-6 plots but %d AXIS draws" % (h["zone"], n6, len(starts)))
        check(len(by.get(KIND, [])) == len(starts),
              "%s: %d AXIS draws but %d KIND draws" % (h["zone"], len(starts), len(by.get(KIND, []))))
        check(len(by.get(FENCEA, [])) == len(starts) and len(by.get(FENCEB, [])) == len(starts),
              "%s: fence coins not once per plot" % (h["zone"],))

        kinds = [v % 6 for v in by.get(KIND, [])]

        # --- 3. kind 3 spends one draw per FOOTPRINT cell, span*span of them ---------
        check(len(by.get(K3COIN, [])) == span * span * sum(1 for k in kinds if k == 3),
              "%s: kind-3 coin count %d != %d x %d^2"
              % (h["zone"], len(by.get(K3COIN, [])), sum(1 for k in kinds if k == 3), span))

        # --- 4. one CELLKIND draw per CELL draw that rolled a zero ------------------
        check(len(by.get(CELLKIND, [])) == sum(1 for v in by.get(CELL, []) if v % 10 == 0),
              "%s: CELLKIND %d != zeros of CELL" % (h["zone"], len(by.get(CELLKIND, []))))

        # --- 5. each fence coin runs span/2 slots iff it came up odd -----------------
        for coin, slot in ((FENCEA, FENCEAK), (FENCEB, FENCEBK)):
            check(len(by.get(slot, [])) == half * sum(1 for v in by.get(coin, []) if v % 2),
                  "%s: fence slot count %d for %d odd coins"
                  % (h["zone"], len(by.get(slot, [])), sum(1 for v in by.get(coin, []) if v % 2)))

        # --- 6. per-plot: which of the two record branches each cell takes -----------
        segs, cur = [], None
        for ra, val, n in h["draws"]:
            if ra == AXIS:
                cur = {}
                segs.append(cur)
            if cur is not None and ra in STAGE:
                cur.setdefault(ra, []).append(val)
        for seg in segs:
            plots += 1
            kind = seg[KIND][0] % 6
            b = KIND_B[kind]
            nk = len(seg.get(CELLKIND, []))
            n_hang = sum(1 for v in seg.get(CELLKIND, []) if v % 4 == 0) if b else 0
            # the crop branch takes everything the hanging branch did not, and spends no
            # angle draw when the crop id is 0x19 (kind 1)
            n_crop = 0 if KIND_C.get(kind) == NO_ANGLE_ID else nk - n_hang
            check(len(seg.get(HANGANG, [])) == n_hang,
                  "%s kind %d: site+0x30 angles %d != %d"
                  % (h["zone"], kind, len(seg.get(HANGANG, [])), n_hang))
            check(len(seg.get(CROPANG, [])) == n_crop,
                  "%s kind %d: site+4 angles %d != %d"
                  % (h["zone"], kind, len(seg.get(CROPANG, [])), n_crop))
            check(len(seg.get(CENTRE, [])) <= 1,
                  "%s: %d centre rolls in one plot" % (h["zone"], len(seg.get(CENTRE, []))))
            centre_rolls += len(seg.get(CENTRE, []))

        # --- 7. every fence prop: type == 0x34 + rand()&3, and its coordinate form ---
        for draw_ra, push_ra in ((FENCEAT, PUSH_A), (FENCEBT, PUSH_B)):
            dv = [v for ra, v, n in h["draws"] if ra == draw_ra]
            ps = [p for p in h["pushes"] if p["ra"] == push_ra]
            check(len(dv) == len(ps),
                  "%s: %d type draws but %d pushes at %s"
                  % (h["zone"], len(dv), len(ps), hex(push_ra + 0x400000)))
            for v, p in zip(dv, ps):
                rec = bytes(p["rec"])
                t = struct.unpack_from("<i", rec, 0)[0]
                x, z, _y = struct.unpack_from("<qqq", rec, 8)
                check(t == FENCE_TYPE_BASE + v % 4,
                      "%s: fence type %d != %d" % (h["zone"], t, FENCE_TYPE_BASE + v % 4))
                check(x % 65536 == 0 and z % 65536 == 32768,
                      "%s: fence coord form x=%d z=%d" % (h["zone"], x, z))
                fence_props += 1

        # --- 8. WHICH plot each stream segment belongs to.  The builder walks the plots
        #        r-outer / c-inner and indexes the table `r + n*c`, so the k-th role-6
        #        segment must be the k-th role-6 plot in that order -- and the fence rows
        #        hand us its origin, so this is checked and not assumed.  Row A varies X
        #        and pins the plot's Z origin; row B varies Z and pins its X origin.
        bounds = starts + [1 << 62]
        rc = [[None, None] for _ in starts]
        for p in h["pushes"]:
            if p["ra"] not in (PUSH_A, PUSH_B):
                continue
            i = max(k for k in range(len(starts)) if bounds[k] <= p["n"])
            rec = bytes(p["rec"])
            x, z, _y = struct.unpack_from("<qqq", rec, 8)
            if p["ra"] == PUSH_A:
                rc[i][1] = (z // 65536 - zz * 256) // span
            else:
                rc[i][0] = (x // 65536 - zx * 256) // span
        if snap is not None:
            pred = [(r, c) for r in range(n_edge) for c in range(n_edge)
                    if snap[r + n_edge * c]["role"] == 6]
            check(len(pred) == len(rc),
                  "%s: %d role-6 plots in the table, %d segments" % (h["zone"], len(pred), len(rc)))
            for (pr, pc), (gr, gc) in zip(pred, rc):
                if gr is not None:
                    check(gr == pr, "%s: plot row %d, expected %d" % (h["zone"], gr, pr))
                    located += 1
                if gc is not None:
                    check(gc == pc, "%s: plot col %d, expected %d" % (h["zone"], gc, pc))
                    located += 1

    # --- report ----------------------------------------------------------------------
    print("gate_town_yard -- the town builder's role-6 plot, the fenced yard (0x4e503a-0x4e5b9e)")
    print("  literals re-read from Server.exe            : %s" % binchk)
    print("  rand sites in 0x4e5000-0x4e5c00             : %d  %s"
          % (len(seen), [hex(a + 0x400000) for a in seen]))
    print("  towns with a role-6 plot / role-6 plots     : %d / %d" % (towns, plots))
    print("  draws attributed to the stage               : %d"
          % sum(1 for h in hits for d in h["draws"] if d[0] in STAGE))
    print("  centre entities (centre cell qualified)     : %d of %d plots"
          % (centre_rolls, plots))
    print("  fence props checked field-by-field          : %d" % fence_props)
    print("  plot origins predicted from the plot table  : %d" % located)
    if no_snapshot:
        print("  %d towns skipped for the role-6 count (no plot snapshot): %s"
              % (len(no_snapshot), no_snapshot[:4]))
    for n in notes:
        print("    ! %s" % n)
    print("%d checks, %d ok, %d FAIL" % (ok + fail, ok, fail))
    print("RESULT: %s" % ("PASS" if fail == 0 else "FAIL"))
    return 1 if fail else 0


if __name__ == "__main__":
    sys.exit(main())
