"""Gate: the town builder's INHABITANT SCATTER, 0x4eda0b-0x4edcbf.

Decode: Docs/RE_town_creatures.md.  Source data: raw/town_props_capture*.json
(tools/frida_town_props.py, seed 42069, 92 towns).

Per plot whose role is not 2 and whose score is > 0.2, the builder walks a 2x2 grid of
quadrant centres and spends one `rand() & 7` per cell; a zero spawns a kind-5 Entity and
costs three more draws (facing, species, level).  This gate checks the draw accounting --
which is all the capture can see, the spawn records themselves never being recorded
(RE_town_creatures.md section 4).

It also re-reads the five species immediates and the coin mask straight out of Server.exe
and diffs them against the literals below, so a hand-typed table cannot drift from the
binary the way CwZoneCreatures' did (lesson 7c).
"""
import glob
import json
import os
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
RAW = os.path.join(HERE, "..", "raw")
EXE = os.path.normpath(os.path.join(HERE, "..", "..", "..", "..", "Server.exe"))

COIN, FACING, SPECIES_RA, LEVEL = 0xEDA58, 0xEDBD9, 0xEDC08, 0xEDC40

# --- the literals this gate exists to keep honest ---------------------------------
SPECIES = [0x22, 0x1E, 0x13, 0x1A, 0x21]        # 0x4e2971 .. 0x4e29e1
COIN_MASK = 0x80000007                          # 0x4eda58, `and eax, 0x80000007`
# `mov dword ptr [ebp-0x5c50], imm32` = c7 85 b0 a3 ff ff <imm32>, at these VAs
SPECIES_VA = [0x4E2971, 0x4E298D, 0x4E29A9, 0x4E29C5, 0x4E29E1]
IMM_PREFIX = bytes.fromhex("c785b0a3ffff")
COIN_VA = 0x4EDA58
IMAGE_BASE = 0x400000


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
        vaddr, vsize = struct.unpack_from("<II", data, o + 12)[0], struct.unpack_from("<I", data, o + 8)[0]
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


def qualifies(p):
    return p["role"] != 2 and p["score"] > 0.2


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
            if len(notes) < 12:
                notes.append(msg)

    # --- 0. the transcribed literals, re-read from the binary --------------------
    if os.path.exists(EXE):
        for i, va in enumerate(SPECIES_VA):
            b = pe_read(EXE, va, 10)
            got = struct.unpack_from("<I", b, 6)[0] if b[:6] == IMM_PREFIX else None
            check(got == SPECIES[i],
                  "species[%d]: binary %s literal %#x" % (i, got, SPECIES[i]))
        m = struct.unpack_from("<I", pe_read(EXE, COIN_VA, 5), 1)[0]
        check(m == COIN_MASK, "coin mask: binary %#x literal %#x" % (m, COIN_MASK))
        binchk = "6/6 vs Server.exe"
    else:
        binchk = "SKIPPED (Server.exe not found at %s)" % EXE

    # --- 1. the coin count == 4 * #qualifying plots ------------------------------
    towns = coin_ok = 0
    no_snapshot = []
    for h in hits:
        zx, zz = h["zone"]
        coins = [d for d in h["draws"] if d[0] == COIN]
        P = plots_of(h.get("plotsLate") or [])
        if not P:
            no_snapshot.append((zx, zz))
            continue
        towns += 1
        want = 4 * sum(1 for p in P if qualifies(p))
        before = fail
        check(len(coins) == want,
              "%d,%d: %d coins, predicate wants %d" % (zx, zz, len(coins), want))
        if fail == before:
            coin_ok += 1

    # --- 2. the branch structure after each coin ---------------------------------
    STAGE = (COIN, FACING, SPECIES_RA, LEVEL)
    zeros = spawns = nonzero_followed = 0
    for h in hits:
        D = sorted((d for d in h["draws"] if d[0] in STAGE), key=lambda d: d[2])
        i = 0
        while i < len(D):
            ra, v, _n = D[i]
            if ra != COIN:
                check(False, "%s: stray %#x with no coin" % (h["zone"], ra + 0x400000))
                i += 1
                continue
            follow = [d[0] for d in D[i + 1:i + 4]]
            if v & 7 == 0:
                zeros += 1
                if follow == [FACING, SPECIES_RA, LEVEL]:
                    spawns += 1
                    ok += 1
                    i += 4
                    continue
                check(False, "%s: coin %d hit but follow=%s" % (h["zone"], v, follow))
                i += 1
            else:
                if follow[:1] == [FACING]:
                    nonzero_followed += 1
                check(follow[:1] != [FACING],
                      "%s: coin %d missed yet a spawn followed" % (h["zone"], v))
                i += 1

    # --- 3. no unmodelled rand site in the stage's address span ------------------
    span = sorted({d[0] for h in hits for d in h["draws"] if 0xEDA00 <= d[0] < 0xEDD00})
    check(span == sorted(STAGE),
          "unexpected rand sites in 0x4eda00-0x4edd00: %s" % [hex(a + 0x400000) for a in span])

    # --- report -------------------------------------------------------------------
    allplots = [p for h in hits for p in (plots_of(h.get("plotsLate") or []) or [])]
    q = [p for p in allplots if qualifies(p)]
    print("gate_town_creatures -- the town builder's inhabitant scatter (0x4eda0b-0x4edcbf)")
    print("  literals re-read from the binary : %s" % binchk)
    print("  coin count == 4 x #(role != 2 and score > 0.2) : %d / %d towns"
          % (coin_ok, towns))
    print("  coins %d, hits (v&7==0) %d, each followed by facing/species/level : %d"
          % (sum(1 for h in hits for d in h["draws"] if d[0] == COIN), zeros, spawns))
    print("  non-zero coins followed by a spawn draw (must be 0) : %d" % nonzero_followed)
    print("  rand sites in 0x4eda00-0x4edd00 : %s"
          % [hex(a + 0x400000) for a in span])
    print("  predicate is not vacuous: %d of %d plots qualify, over roles %s"
          % (len(q), len(allplots), sorted({p["role"] for p in q})))
    if no_snapshot:
        print("  %d towns skipped (no plotsLate snapshot): %s"
              % (len(no_snapshot), no_snapshot[:4]))
    for n in notes:
        print("    ! %s" % n)
    print("%d checks, %d ok, %d FAIL" % (ok + fail, ok, fail))
    print("RESULT: %s" % ("PASS" if fail == 0 else "FAIL"))
    return 1 if fail else 0


if __name__ == "__main__":
    sys.exit(main())
