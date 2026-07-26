#!/usr/bin/env python3
"""Gate the zone builder's TYPE-GATED pre-chain stages against Server.exe's own bytes.

    python tools/gate_zone_prechain.py

`FUN_00518630` runs four descriptor-type-gated stages before the gen-scatter. Only the
first of them had ever been read:

    0x51aa57   type == 6              -> the 3x3 ground-knoll grid   (RE'd 2026-07-26)
    0x51ad52   type == 0xd || == 4    -> a surface scan, ZERO draws  (RE'd here)
    0x51ae29   type == 0xb            -> one giant knoll, 1 draw     (RE'd here)
    0x51af34   type == 0xc            -> one giant tree,  1 draw     (RE'd here)

The last three have **never been observed live** — no zone of any capture in this repo
has a descriptor of type 4, 0xb, 0xc or 0xd — so there is no rand stream to replay them
against and no gate of the usual kind is possible. What IS checkable, and what this file
checks, is the decode itself against the shipped instruction bytes: every branch test,
every branch target, every immediate argument, and (the claim the port actually rests on)
an EXHAUSTIVE census of the rand call sites, so "stage D spends no draws" is a property of
the binary rather than of how hard someone looked.

The census resolves rand reached BOTH ways -- `call dword [0x5582f4]` and `call <reg>`
after that pointer is loaded into the register -- because the zone builder uses both and a
scan for only the direct form silently misses six sites in the landform loop alone.

Docs/RE_zone_tail.md.
"""
import json
import os
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

RAND_PTR = 0x5582F4           # the import thunk slot for msvcr110!rand

# The whole pre-chain, from the landform loop to the gen-scatter's candidate loop.
SCAN_LO, SCAN_HI = 0x51A000, 0x51B200

# Every rand RETURN address in that span, which is what frida_zone_props2.py stamps.
EXPECTED_SITES = (
    # landform 742-loop (RE_zone_landform.md) -- 0x51a4ee/0x51a50e are `call edi`
    0x51A21A, 0x51A22F, 0x51A266, 0x51A37E, 0x51A4EE, 0x51A50E,
    # type-6 knoll grid (RE_zone_tail.md)
    0x51AA86, 0x51AC4D, 0x51AC64, 0x51AC7B,
    # type 0xb / type 0xc -- one draw each, decoded here
    0x51AED2, 0x51AFDC,
    # gen-scatter: count, then 5 per candidate -- 0x51b138/14b/15e are `call esi`
    0x51B08A, 0x51B138, 0x51B14B, 0x51B15E, 0x51B18C, 0x51B1AF,
)

# stage D owns [0x51ad52, 0x51ae20) and must contain none of them.
STAGE_D = (0x51AD52, 0x51AE20)

# VA -> the exact bytes the decode in RE_zone_tail.md asserts are there.
OPCODES = [
    # --- the four type tests, in the order the builder runs them ------------------
    (0x51AA57, "8379 1806",         "cmp dword [ecx+0x18], 6        (type-6 knoll grid)"),
    (0x51AA5B, "0f85 f1020000",     "jne 0x51ad52                   (-> stage D's test)"),
    (0x51AD52, "8b41 18",           "mov eax, [ecx+0x18]            (reload desc->type)"),
    (0x51AD55, "83f8 0d",           "cmp eax, 0xd"),
    (0x51AD58, "74 09",             "je 0x51ad63                    (0xd enters stage D)"),
    (0x51AD5A, "83f8 04",           "cmp eax, 4"),
    (0x51AD5D, "0f85 bd000000",     "jne 0x51ae20                   (4 enters it too)"),
    (0x51AE29, "83f8 0b",           "cmp eax, 0xb"),
    (0x51AE2C, "0f85 02010000",     "jne 0x51af34"),
    (0x51AF34, "83f8 0c",           "cmp eax, 0xc"),
    (0x51AF37, "0f85 1d010000",     "jne 0x51b05a                   (-> gen-scatter)"),
    # --- the OWNING-ZONE test: the three stages fire only in the zone that holds --
    #     the feature cell's centre.  [ebp-0x2a4/-0x2a0] = centre/256, vs [edi+0x60/0x64].
    (0x51ADC2, "8b848d 5cfdffff",   "mov eax, [ebp+ecx*4-0x2a4]     (stage D own-zone)"),
    (0x51ADC9, "3b02",              "cmp eax, [edx]                 (edx = &zone.zx)"),
    (0x51AEA0, "8b848d 6cfdffff",   "mov eax, [ebp+ecx*4-0x294]     (0xb own-zone)"),
    (0x51AFA0, "8b848d 64fdffff",   "mov eax, [ebp+ecx*4-0x29c]     (0xc own-zone)"),
    # --- stage D: the surface scan, and nothing else ------------------------------
    (0x51ADDF, "e8 1cb3eeff",       "call 0x406100 Chunk_getColumnAt"),
    (0x51ADFC, "e8 cfb1eeff",       "call 0x405fd0 World_getBlockAt"),
    (0x51AE05, "251fffffff",        "and eax, 0xffffff1f            (material, low 5 bits)"),
    (0x51AE18, "ebd2",              "jmp 0x51adec                   (scan down one block)"),
    # --- type 0xb: rand()%100 + 100, then ONE knoll of radius 100 at the zone centre
    (0x51AEBD, "83e8 80",           "sub eax, -0x80                 (zoneX*256 + 128)"),
    (0x51AEC9, "83ef 80",           "sub edi, -0x80                 (zoneZ*256 + 128)"),
    (0x51AECC, "ff15 f4825500",     "call rand"),
    (0x51AED3, "b9 64000000",       "mov ecx, 0x64                  (idiv -> rand()%100)"),
    (0x51AEED, "8d72 64",           "lea esi, [edx+0x64]            (+100)"),
    (0x51AF08, "6a 64",             "push 0x64                      (rx = 100)"),
    (0x51AF0A, "6a 64",             "push 0x64                      (rz = 100)"),
    (0x51AF18, "e8 d34cfeff",       "call 0x4ffbf0 lib_fn_4ffbf0    (the knoll builder)"),
    (0x51AF23, "e9 d9010000",       "jmp 0x51b101                   (SKIPS the gen-scatter)"),
    # --- type 0xc: one discarded draw, then ONE type-6 tree 80x80 at the zone centre
    (0x51AFC4, "83e8 80",           "sub eax, -0x80"),
    (0x51AFC7, "83ee 80",           "sub esi, -0x80"),
    (0x51AFD6, "ff15 f4825500",     "call rand"),
    (0x51AFDC, "8b8d 20edffff",     "mov ecx, [ebp-0x12e0]          (eax dead: draw unused)"),
    (0x51AFF0, "6a 06",             "push 6                         (tree type 6)"),
    (0x51AFF4, "6a 50",             "push 0x50                      (height 80)"),
    (0x51AFFC, "6a 50",             "push 0x50                      (size 80)"),
    (0x51B011, "e8 4a87ffff",       "call 0x513760 lib_fn_513760    (the tree builder)"),
    (0x51B04B, "0f85 b0000000",     "jne 0x51b101                   (SKIPS the gen-scatter)"),
    # --- the gen-scatter both of them skip ----------------------------------------
    (0x51B066, "8a4408 18",         "mov al, [eax+ecx+0x18]         (the site-kind grid)"),
    (0x51B088, "ffd6",              "call esi                       (gen-scatter count)"),
]

# The two builders the new stages call. 4ffbf0 spending no draws is what makes the 0xb
# stage portable at all, and 513760 spending some is why the 0xc stage is not.
BUILDERS = ((0x4FFBF0, 1802, 0, "lib_fn_4ffbf0 ground knoll"),
            (0x513760, 7494, 27, "lib_fn_513760 tree builder"))

# RE_camp_descriptor.md's drift table. None of these zones holds its cell's CENTRE, so
# none of the three new stages can fire in any of them -- which is why decoding them did
# NOT explain the drift they were expected to explain.
DRIFT_ZONES = [(32792, 32748), (32792, 32749), (32793, 32751), (32794, 32744),
               (32795, 32748), (32795, 32751), (32713, 32856), (32726, 32791),
               (32726, 32869), (32752, 32765), (32856, 32739), (32869, 32726),
               (32804, 32830), (32922, 32582)]


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
    return secs


class Image(object):
    def __init__(self, path):
        self.data = open(path, "rb").read()
        self.secs = sections(self.data)

    def read(self, va, n):
        for sva, vsz, ptr, rsz in self.secs:
            if sva <= va < sva + max(vsz, rsz):
                d = va - sva
                return self.data[ptr + d:ptr + d + n] if d < rsz else None
        return None


def rand_sites(img, lo, hi):
    """Every rand RETURN address in [lo, hi), resolving the register-held form.

    A plain byte search for `ff 15 <&rand>` finds ten of the sixteen; the landform loop
    and the gen-scatter hoist the pointer into edi/esi and `call` the register.
    """
    md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    md.detail = True
    code = img.read(lo, hi - lo)
    holds = set()                       # registers currently holding &rand
    out, va = [], lo
    while va < hi:                      # resync: capstone stops dead on an invalid byte
        got = False
        for ins in md.disasm(code[va - lo:], va):
            got = True
            va = ins.address + ins.size
            txt = "%s %s" % (ins.mnemonic, ins.op_str)
            if ins.mnemonic == "mov" and ("[0x%x]" % RAND_PTR) in ins.op_str:
                reg = ins.op_str.split(",")[0].strip()
                holds.add(reg)
            elif ins.mnemonic == "call":
                if ("[0x%x]" % RAND_PTR) in ins.op_str:
                    out.append(ins.address + ins.size)
                elif ins.op_str.strip() in holds:
                    out.append(ins.address + ins.size)
            elif ins.mnemonic in ("mov", "lea", "pop", "xor") and holds:
                # the register was reused for something else -- stop trusting it
                dst = ins.op_str.split(",")[0].strip()
                if dst in holds and ("[0x%x]" % RAND_PTR) not in ins.op_str:
                    holds.discard(dst)
            del txt
            if va >= hi:
                break
        if not got:
            va += 1
    return sorted(out)


def count_ptr_refs(img, va, size):
    """How many `call` sites in a function can reach rand, either way."""
    md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    return len(rand_sites(img, va, va + size))


def main():
    fail = pas = 0
    msgs = []

    def chk(cond, msg):
        nonlocal fail, pas
        if cond:
            pas += 1
        else:
            fail += 1
            msgs.append(msg)

    img = Image(os.path.join(GAME, "Server.exe"))

    # 1. every decoded instruction is at the address the doc says, byte for byte
    for va, hexs, what in OPCODES:
        want = bytes.fromhex(hexs.replace(" ", ""))
        got = img.read(va, len(want))
        chk(got == want, "0x%06x: expected %s (%s), found %s"
            % (va, want.hex(), what, got.hex() if got else "<unmapped>"))

    # 2. the rand-site census is exhaustive and matches the documented stage map
    sites = rand_sites(img, SCAN_LO, SCAN_HI)
    chk(tuple(sites) == EXPECTED_SITES,
        "rand-site census: %s\n         expected: %s"
        % ([hex(s) for s in sites], [hex(s) for s in EXPECTED_SITES]))

    # 3. THE claim the port rests on: stage D cannot move the stream
    inD = [s for s in sites if STAGE_D[0] <= s < STAGE_D[1]]
    chk(not inD, "stage D (0x%06x-0x%06x) draws at %s -- it is NOT stream-neutral"
        % (STAGE_D[0], STAGE_D[1], [hex(s) for s in inD]))

    # 4. and each of 0xb / 0xc spends exactly one, before its builder call
    for lo, hi, want, tag in ((0x51AE29, 0x51AF34, 1, "type 0xb"),
                              (0x51AF34, 0x51B05A, 1, "type 0xc")):
        n = len([s for s in sites if lo <= s < hi])
        chk(n == want, "%s stage: %d rand sites, expected %d" % (tag, n, want))

    # 5. both skip targets land PAST the gen-scatter's first draw
    chk(0x51B088 < 0x51B101, "the 0xb/0xc skip target must be past the count draw")

    # 6. the two builders: one draws, one does not
    for va, size, want, tag in BUILDERS:
        n = count_ptr_refs(img, va, size)
        chk(n == want, "%s (0x%06x): %d rand sites, expected %d" % (tag, va, n, want))

    # 7. no capture in this repo has ever entered any of these three stages
    cap = os.path.join(RAW, "zone_props2_capture.json")
    types_seen = None
    if os.path.exists(cap):
        d = json.load(open(cap))
        seen = set()
        for z in d["zones"]:
            for ra, _v, _n in z["draws"]:
                seen.add(ra + 0x400000)
        chk(0x51AED2 not in seen and 0x51AFDC not in seen,
            "the 56-zone capture DOES record a 0xb/0xc draw -- these stages are testable")

        sys.path.insert(0, os.path.join(ROOT, "..", "cw_rederive"))
        try:
            import cw_seed
            import cw_featuregrid
            cw_seed.configure(d["seed"])
            types_seen = sorted({cw_featuregrid.cell_for_column(
                zx * 256 + 128, zz * 256 + 128)["type"] for zx, zz in
                (z["zone"] for z in d["zones"])})
            chk(not ({4, 0xB, 0xC, 0xD} & set(types_seen)),
                "a captured zone has a 4/0xb/0xc/0xd descriptor: %s" % types_seen)

            # 8. and the drift these stages were expected to explain is out of their
            #    reach: not one drifting zone holds its own cell's centre.
            def tdiv(a, b):
                q = abs(a) // abs(b)
                return q if (a >= 0) == (b >= 0) else -q

            owning = []
            for zx, zz in DRIFT_ZONES:
                c = cw_featuregrid.cell_for_column(zx * 256 + 128, zz * 256 + 128)
                cx, cz = tdiv(c["cx"], 0x10000), tdiv(c["cz"], 0x10000)
                if tdiv(cx, 256) == zx and tdiv(cz, 256) == zz:
                    owning.append((zx, zz, c["type"]))
            chk(not owning,
                "a drifting zone DOES hold its cell centre (%s) -- re-open the "
                "question of whether these stages explain the drift" % owning)

            # 9. the GEN-SCATTER's own gate, which is next in the chain and which both
            #    ports had dismissed. 0x51b05a reads the per-zone SITE-KIND byte, not
            #    the feature-cell TYPE, and skips the whole pass for kinds 1/3/4. The
            #    capture decides it: exactly one of the 56 zones spends zero gen-scatter
            #    draws, and it is exactly the one whose derived site kind is non-zero.
            import gate_site_kind
            gen_addrs = {0x11B08A, 0x11B138, 0x11B14B, 0x11B15E, 0x11B18C, 0x11B1AF,
                         0x11B3DC}
            grids, bad = {}, []
            for z in d["zones"]:
                zx, zz = z["zone"]
                rk = (zx // 64, zz // 64)
                if rk not in grids:
                    grids[rk] = gate_site_kind.derive(rk[0], rk[1])
                kind = grids[rk].get((zx, zz), 0)
                gen = sum(1 for ra, _v, _n in z["draws"] if ra in gen_addrs)
                if (gen == 0) != (kind in (1, 3, 4)):
                    bad.append((zx, zz, kind, gen))
            chk(not bad, "gen-scatter site-kind guard mispredicts %s "
                         "(zone, kind, gen draws)" % bad)
            skipped = [tuple(z["zone"]) for z in d["zones"]
                       if grids[(z["zone"][0] // 64, z["zone"][1] // 64)]
                       .get(tuple(z["zone"]), 0) in (1, 3, 4)]
            print("   gen-scatter site-kind guard: %d of %d captured zones skip the "
                  "pass, %s" % (len(skipped), len(d["zones"]), skipped))
        except ImportError as exc:                             # pragma: no cover
            print("   (cw_rederive not importable: %s -- checks 7b/8 skipped)" % exc)

    print("gate_zone_prechain: %d/%d" % (pas, pas + fail))
    print("   %d decoded instructions byte-matched in Server.exe" % len(OPCODES))
    print("   %d rand sites in 0x%06x-0x%06x, 0 of them in stage D"
          % (len(sites), SCAN_LO, SCAN_HI))
    if types_seen is not None:
        print("   descriptor types the 56-zone capture covers: %s"
              % [hex(t) for t in types_seen])
    for m in msgs:
        print("  FAIL " + m)
    return 1 if fail else 0


if __name__ == "__main__":
    sys.exit(main())
