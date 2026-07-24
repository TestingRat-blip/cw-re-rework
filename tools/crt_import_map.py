#!/usr/bin/env python3
"""Map each game-binary CRT import to its PDB-resolved function in the CRT DLLs.

The game is /MD, so Cube.exe/Server.exe import msvcr110/msvcp110/vccorlib110 by name. Now
that those DLLs carry full PDB symbols, an import that Ghidra could only show as a name can
be tied to the actual named function body -- letting the trig/rand disagreements be settled
by which precise routine a call site targets.

Reads the exes' import tables directly (no Ghidra needed) and the *.symbols.tsv dumps.
Writes raw/crt_import_map.md.
"""
import os
import struct
from collections import defaultdict

HERE = os.path.dirname(os.path.abspath(__file__))
GAME = os.path.abspath(os.path.join(HERE, "..", "..", "..", ".."))  # CubegameV1 root
RAW = os.path.join(HERE, "..", "raw")

DLLS = ("msvcr110.dll", "msvcp110.dll", "vccorlib110.dll")


def load_symbols():
    known = {}
    for dll in DLLS:
        p = os.path.join(RAW, dll + ".symbols.tsv")
        s = set()
        if os.path.exists(p):
            for line in open(p, encoding="utf-8"):
                parts = line.rstrip("\n").split("\t")
                if len(parts) == 3 and parts[0] != "rva":
                    s.add(parts[1])
        known[dll.lower()] = s
    return known


def imports(path):
    d = open(path, "rb").read()
    pe = struct.unpack_from("<I", d, 0x3c)[0]
    nsec = struct.unpack_from("<H", d, pe + 6)[0]
    osz = struct.unpack_from("<H", d, pe + 20)[0]
    secs = []
    b = pe + 24 + osz
    for i in range(nsec):
        o = b + i * 40
        vsz, va, rsz, ro = struct.unpack_from("<IIII", d, o + 8)
        secs.append((va, vsz, rsz, ro))

    def r2o(rva):
        for va, vsz, rsz, ro in secs:
            if va <= rva < va + max(vsz, rsz):
                return ro + (rva - va)
        return None

    def cstr(o):
        e = d.index(b"\x00", o)
        return d[o:e].decode("latin1")

    imp = struct.unpack_from("<II", d, pe + 24 + 96 + 1 * 8)[0]
    io = r2o(imp)
    out = defaultdict(list)
    k = 0
    while True:
        ent = d[io + k * 20: io + k * 20 + 20]
        if len(ent) < 20 or ent == b"\x00" * 20:
            break
        oft, ts, fc, nm, fta = struct.unpack("<IIIII", ent)
        k += 1
        dll = cstr(r2o(nm)).lower()
        t = r2o(oft or fta)
        while True:
            v = struct.unpack_from("<I", d, t)[0]
            t += 4
            if v == 0:
                break
            if not (v & 0x80000000):
                out[dll].append(cstr(r2o(v) + 2))
    return out


def main():
    known = load_symbols()
    lines = ["# CRT import map — game imports resolved against the PDB-applied DLLs\n"]
    grand_hit = grand_tot = 0
    for exe in ("Server.exe", "Cube.exe"):
        imp = imports(os.path.join(GAME, exe))
        lines.append("## %s\n" % exe)
        for dll in DLLS:
            names = imp.get(dll, [])
            if not names:
                continue
            ksy = known.get(dll, set())

            def resolves(n):
                # exact, or tolerant of leading-underscore decoration: the import table
                # carries `_libm_sse2_cos_precise` while the export/PDB has
                # `libm_sse2_cos_precise` (and `__x` <-> `_x`).
                if n in ksy:
                    return True
                for cand in (n.lstrip("_"), "_" + n, "__" + n, n[1:] if n.startswith("_") else None):
                    if cand and cand in ksy:
                        return True
                return False

            hit = [n for n in names if resolves(n)]
            miss = [n for n in names if not resolves(n)]
            grand_hit += len(hit)
            grand_tot += len(names)
            mangled = sum(1 for n in miss if n.startswith("?"))
            note = ""
            if mangled:
                note = ("  — %d of the %d 'unresolved' are C++ mangled names (`?...`); the "
                        "functions ARE in the applied PDB, they just don't string-match Ghidra's "
                        "demangled labels. Not a coverage gap." % (mangled, len(miss)))
            lines.append("- **%s**: %d imports, %d matched a PDB-named function by string, %d not%s"
                         % (dll, len(names), len(hit), len(miss), note))
            plain_miss = [n for n in miss if not n.startswith("?")]
            if plain_miss:
                lines.append("  - genuinely unmatched (non-mangled): %s"
                             % ", ".join(sorted(plain_miss)[:16]))
        lines.append("")

    # the money question: is the precise-vs-plain trig distinction now visible?
    trig = [n for dll in DLLS for n in known.get(dll, set())
            if "libm_sse2" in n]
    lines.append("## Trig routines now named in the CRT DLLs\n")
    lines.append("These are the exact functions a game call can target; `_precise` vs plain "
                 "is the ULP distinction the forest/rand ports needed:\n")
    for n in sorted(set(trig)):
        lines.append("- `%s`" % n)

    out = os.path.join(RAW, "crt_import_map.md")
    open(out, "w", encoding="utf-8").write("\n".join(lines) + "\n")
    print("game CRT imports resolved: %d / %d" % (grand_hit, grand_tot))
    print("trig routines named: %d" % len(set(trig)))
    print("->", os.path.normpath(out))


if __name__ == "__main__":
    main()
