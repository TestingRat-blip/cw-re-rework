#!/usr/bin/env python3
"""Structure the raw Ghidra dump into an organised source tree.

Inputs  (raw/):  <prog>.meta.jsonl, <prog>.decomp.jsonl, <prog>.classes.txt, labels.json
Outputs (../):   cube/ and server/ trees, attribution.tsv, GAP_ANALYSIS.md per binary.

Layout mirrors tools/Source_check so the two can be diffed directly, but attribution is
ours: the proven-label ledger outranks RTTI, and RTTI outranks heuristics.
"""
import json
import os
import re
import sys
from collections import defaultdict, Counter

HERE = os.path.dirname(os.path.abspath(__file__))
RAW = os.path.join(HERE, "..", "raw")
OUT = os.path.join(HERE, "..")

BINARIES = {"Server.exe": "server", "Cube.exe": "cube"}

# ---------------------------------------------------------------- module map
# Class-name keyword -> subsystem folder. First match wins, order matters.
MODULE_RULES = [
    ("world",     r"^(World|Zone|Region|Dungeon|House|Spawn|Field|Chunk|ChunkBuffer|"
                  r"LandscapeTile|WorldInfo|WorldMap|ZoneTile|Terrain|Biome|Site)"),
    ("entity",    r"^(Creature|Sprite|SpriteManager|Speech|QuestText|QuestTextNode|Player|Item|Npc|Mob)"),
    ("ai",        r"(Behavior|Behaviour)"),
    ("db",        r"^(Database|Db|Sql)"),
    ("net",       r"^(Server|Connection|Socket|Packet|Net)"),
    ("ui",        r"(Widget|Screen|Menu|Hud|Gui)"),
    ("render",    r"(Shader|Render|Mesh|Texture|Camera|Font)"),
    ("audio",     r"(Music|Audio|Sound|XAudio)"),
    ("control",   r"(Controller|Input)"),
]

# Static third-party code -> _library subfolder, detected from referenced strings.
LIB_STRING_RULES = [
    # SQLite is the biggest static lib in these binaries and its diagnostics are
    # distinctive; matching only "sqlite" missed most of the VM (see 0x4af360).
    ("sqlite",   r"sqlite|SQLITE|PRAGMA |CREATE TABLE|VACUUM|no transaction is active|"
                 r"savepoint|SQL statements in progress|database is locked|"
                 r"unable to open database|database disk image|malformed database|"
                 r"BEGIN|ROLLBACK|COMMIT|out of memory|misuse of aggregate|"
                 r"no such (table|column|index|collation)|datatype mismatch|"
                 r"foreign key|attempt to write a readonly|cannot (commit|rollback|start)"),
    ("freetype", r"FreeType|freetype|FT_|\.ttf|glyph|charmap"),
    ("zlib",     r"inflate|deflate|zlib|incorrect header check|invalid distance|"
                 r"invalid block type|need dictionary"),
    ("openssl",  r"OpenSSL|SSL routines"),
]

# CRT / STL name shapes. Toolchain is MSVC 11.0 (VS2012) /MD /EHsc /GS -- see
# tools/msvc_vs2012_rtm/README.md. Anything matching here is library scaffolding,
# not game code.
CRT_NAME_RE = re.compile(
    r"^(std::|__?std|operator[ _]|_+(malloc|free|calloc|realloc|memcpy|memset|strlen|wcs|mbs|fprintf|"
    r"printf|sprintf|scanf|except|EH|CxxThrow|CxxFrameHandler|security|report_gsfailure|initterm|"
    r"amsg|XcptFilter|onexit|crt|dllonexit|ftol|dtol|CIsin|CIcos|libm|alloca|chkstk)|"
    r"(Catch_All|Unwind|FID_conflict|__SEH|__GSHandler))", re.I)

EH_RE = re.compile(r"^(Catch_All|Unwind)@?", re.I)

# Top-level RTTI namespaces, split by evidence rather than guesswork. Counts are from
# Cube.exe: plasma 323, cube 167, std 96, Concurrency 41, abstr 21, CRefTime 1, type_info 1.
#   plasma / abstr -- Wollay's own engine layer (Widget, MeshShape, D3D9Engine, PlasmaFont).
#                     qad3n filed these as _library; they are first-party game code.
#   Concurrency    -- Microsoft PPL (<ppl.h>), ships with VC11. Library, and we only know
#                     that because the toolchain is pinned to MSVC 11.0.
GAME_NS = {"cube", "plasma", "abstr"}
LIB_NS = {"std", "stdext", "Concurrency", "concurrency", "type_info", "CRefTime"}


def jload(path):
    rows = []
    if not os.path.exists(path):
        return rows
    with open(path, encoding="utf-8", errors="replace") as fh:
        for line in fh:
            line = line.strip()
            if line:
                try:
                    rows.append(json.loads(line))
                except json.JSONDecodeError:
                    pass
    return rows


def sanitize(name):
    """Filesystem- and C-identifier-safe."""
    n = re.sub(r"[^A-Za-z0-9_]", "_", name)
    return re.sub(r"_+", "_", n).strip("_") or "unnamed"


# Ledger names are snake_case working names ("zone_builder", "region_site_gen"), not
# CamelCase classes, so they need substring matching rather than the anchored rules.
LOOSE_RULES = [
    ("world",   r"world|zone|region|dungeon|house|spawn|field|chunk|terrain|biome|site|column|"
                r"voxel|height|climate|river|road|town|village|forest|tree|noise|surface|rock|"
                r"water|lake|cave|feature|land|grass|snow|mound|knoll|cliff|colou?r|wetness|"
                r"humidity|temperature|uplift|carve|stamp|scatter|plot|prop|vegetation|"
                r"corridor|room|chamber|entrance|ceiling|box"),
    ("entity",  r"creature|sprite|speech|quest|player|item|npc|\bmob|entity|loot|monster|chest|inventory"),
    ("ai",      r"behavio|patrol|aggro|pathfind"),
    # NB: not a bare `connect` -- that swallowed `corridor_connect`, a dungeon routine.
    ("net",     r"socket|packet|connection|net_|protocol|winsock"),
    ("db",      r"database|sqlite|\bsql|\bdb_"),
    ("render",  r"shader|render|mesh|texture|camera|font|matrix|mat4|vec[234]|quat"),
    ("ui",      r"widget|screen|menu|\bhud|\bgui"),
    ("audio",   r"music|audio|sound"),
]


def pick_module(cls):
    for mod, pat in MODULE_RULES:
        if re.search(pat, cls):
            return mod
    return "game_misc"


def pick_module_loose(name):
    """Module for a snake_case working name; falls back to the anchored rules."""
    low = name.lower()
    for mod, pat in LOOSE_RULES:
        if re.search(pat, low):
            return mod
    return pick_module(name[:1].upper() + name[1:])


def load_islands(binary):
    p = os.path.join(RAW, binary + ".libislands.json")
    if os.path.exists(p):
        return json.load(open(p, encoding="utf-8"))
    return {}


def load_roles(binary):
    p = os.path.join(RAW, binary + ".none_roles.json")
    if os.path.exists(p):
        return json.load(open(p, encoding="utf-8"))
    return {}


# structural roles that are trivial mechanical helpers -> separated from genuine logic
TRIVIAL_ROLES = {"accessor", "mutator", "thunk", "identity", "stub", "dispatch", "computed"}


def classify(fn, labels, class_names, islands, roles):
    """-> (kind, module, cls, name, why)

    kind:   game | gamemisc | lib
    module: folder name
    cls:    owning class / file stem
    """
    addr = fn["addr"].lower().lstrip("0") or "0"
    key = fn["addr"].lower()[-8:].rjust(8, "0")
    name = fn["name"]

    # 1. our proven ledger -- highest authority
    lab = labels.get(key)
    if lab:
        kind = lab["kind"]
        nm = lab["name"]
        if kind == "lib":
            return "lib", "_library", "cw_lib", nm, "ledger"
        if "::" in nm:
            cls = nm.split("::")[0]
            return kind, pick_module(cls), cls, nm, "ledger"
        mod = pick_module_loose(nm)
        # File stem: group proven worldgen etc. by subsystem rather than one catch-all.
        cls = "Proven" if mod != "game_misc" else "Game"
        return kind, mod, cls, nm, "ledger"

    # 1b. static-library island (SQLite / FreeType), carved by call-graph reachability
    #     inside the linker block. Below the proven ledger, above every name heuristic.
    lib_isl = islands.get(fn["addr"].lower())
    if lib_isl:
        return "lib", "_library", lib_isl, name, "lib-island"

    # 2. RTTI namespace -- recovered class architecture.
    #    Names inside a class are bare ("vfunction1", "CombatBehavior"), so the CLASS
    #    comes from the namespace, never from the name.
    ns = fn.get("ns") or ""
    if ns and ns != "Global":
        if ns.startswith("std::") or "::std::" in ns:
            return "lib", "_library", "stl", ns + "::" + name, "stl-ns"
        if ".DLL" in ns.upper():
            return "lib", "_library", "imports", ns + "::" + name, "import-ns"
        # Strip template arguments BEFORE splitting on "::" -- a parameter such as
        # plasma::Widget::MemberFunctionConnection<cube::CharacterStyleWidget> contains
        # "::" itself, so splitting first yields the parameter, not the class.
        cls = re.sub(r"<.*", "", ns).split("::")[-1]
        if cls:
            top = ns.split("::")[0].split("<")[0]
            if top in LIB_NS:
                bucket = "ppl" if top.lower() == "concurrency" else "sdk_classes"
                return "lib", "_library", bucket, ns + "::" + name, "rtti-lib-ns"
            if top in GAME_NS:
                # `plasma`/`abstr` are a coherent first-party engine layer (proven in
                # ADJUDICATION_CUBE.md), so they get their own folder rather than being
                # scattered through game_misc by class-name keyword. `cube::` is the
                # game layer above it and keeps the subsystem split.
                if top in ("plasma", "abstr"):
                    return "game", "engine", cls, ns + "::" + name, "rtti"
                return "game", pick_module(cls), cls, ns + "::" + name, "rtti"
            # Microsoft SDK/MFC/ATL convention is CClassName (e.g. CRefTime, a
            # DirectShow base class) -- qad3n's tree got that right.
            if re.match(r"^C[A-Z]", cls):
                return "lib", "_library", "sdk_classes", ns + "::" + name, "rtti-sdk"
            return "game", pick_module(cls), cls, ns + "::" + name, "rtti-other"

    # 3. exception-handling funclets emitted by MSVC /EHsc
    if EH_RE.match(name):
        return "lib", "_library", "eh_funclets", name, "eh"

    # 4. CRT / STL name shapes
    if CRT_NAME_RE.match(name):
        return "lib", "_library", "crt_stl", name, "crt-name"

    # 5. static third-party, by referenced strings
    blob = " ".join(fn.get("strings") or [])
    if blob:
        for lib, pat in LIB_STRING_RULES:
            if re.search(pat, blob):
                return "lib", "_library", lib, name, "lib-string"

    # 6. structural role (from adjudicate_none.py) — splits trivial helpers from real logic
    r = roles.get(fn["addr"].lower())
    if r:
        role = r["role"]
        if role in TRIVIAL_ROLES:
            nm = r.get("name") or role
            if name.startswith("FUN_"):
                name = "%s_%s" % (nm, fn["addr"].lstrip("0") or "0")
            return "gamemisc", "game_misc", "_helpers_" + role, name, "role:" + role
        # not a function: Ghidra started one on an MSVC alignment NOP inside a bigger body
        # (nop_split_audit.py). Real code, so it files under its OWNER's subsystem rather
        # than the artifact bin — discarding it would discard e.g. the town builder.
        if role == "body-split":
            if name.startswith("FUN_") and r.get("name"):
                name = r["name"]
            return "gamemisc", r.get("module") or "game_misc", "_body_splits", name, "role:body-split"
        # true artifact: no incoming reference of any kind — dead code or an EH fragment
        if role == "artifact":
            return "gamemisc", "game_misc", "_artifacts", name, "role:artifact"
        # real functions reached INDIRECTLY (recovered by IndirectRefs) — review surface,
        # now with a subsystem home from the vtable class / dispatcher / callback taker
        if role in ("vfunc-indirect", "dispatch-target", "callback"):
            mod = r.get("module") or "game_misc"
            return "gamemisc", mod, "_indirect_" + role.replace("-indirect", ""), name, "role:" + role
        if role in ("ctor-like", "dtor-like", "wrapper"):
            mod = r.get("module") or "game_misc"
            return "gamemisc", mod, "_helpers_" + role, name, "role:" + role
        # role == "logic": genuine unknown; keep module hint if callers agree
        if r.get("module"):
            return "gamemisc", r["module"], "Unsorted", name, "logic:caller-vote"

    # 7. unattributed genuine logic
    return "gamemisc", "game_misc", "Unsorted", name, "none"


def emit(binary, folder):
    meta = jload(os.path.join(RAW, binary + ".meta.jsonl"))
    if not meta:
        print("  ! no metadata for %s -- run MetaDump first" % binary)
        return None
    dec = {r["addr"].lower(): r for r in jload(os.path.join(RAW, binary + ".decomp.jsonl"))}
    labels = json.load(open(os.path.join(RAW, "labels.json"), encoding="utf-8")).get(binary, {})

    class_file = os.path.join(RAW, binary + ".classes.txt")
    class_names = set()
    if os.path.exists(class_file):
        class_names = {l.strip() for l in open(class_file, encoding="utf-8") if l.strip()}

    # --- pass 1: direct classification -------------------------------------
    islands = load_islands(binary)
    roles = load_roles(binary)
    byaddr = {fn["addr"].lower(): fn for fn in meta}
    decided = {a: list(classify(fn, labels, class_names, islands, roles)) for a, fn in byaddr.items()}

    # --- pass 2: caller vote -----------------------------------------------
    # An unattributed function whose *classified* callers all sit in one subsystem
    # almost certainly belongs to that subsystem. Unanimity only -- a split vote
    # stays unattributed rather than being guessed at.
    for _round in range(3):
        changed = 0
        for a, fn in byaddr.items():
            if decided[a][4] != "none":
                continue
            mods = {decided[c.lower()][1] for c in (fn.get("callers") or [])
                    if c.lower() in decided
                    and decided[c.lower()][0] != "lib"
                    and decided[c.lower()][1] != "game_misc"}
            if len(mods) == 1:
                mod = mods.pop()
                decided[a] = ["gamemisc", mod, "Helpers", decided[a][3], "caller-vote"]
                changed += 1
        if not changed:
            break

    # --- pass 3: chunk the remainder so no file is unreadable ---------------
    leftover = sorted(a for a in decided if decided[a][4] == "none")
    for i, a in enumerate(leftover):
        decided[a][2] = "Unsorted_%03d" % (i // 150)

    groups = defaultdict(list)
    attrib = []
    stats = Counter()
    gaps = []

    for fn in meta:
        kind, module, cls, name, why = decided[fn["addr"].lower()]
        stats[kind] += 1
        stats["why:" + why] += 1
        groups[(module, sanitize(cls))].append((fn, name, kind, why))
        attrib.append((fn["addr"], name, kind, module, cls, why, fn["size"]))
        if fn["name"].startswith("FUN_") and kind != "lib":
            gaps.append((fn["addr"], fn["size"], len(fn.get("callers") or []),
                         len(fn.get("callees") or []), (fn.get("strings") or [])[:3]))

    # No file gets so large it stops being readable. Split oversized groups into parts,
    # keeping address order so a part maps to a contiguous span of the binary.
    # Function count alone is not enough: Ghidra boundary artifacts decompile to
    # half-megabyte bodies, and 150 of those made one 10.9 MB file. Cap on bytes too.
    MAXF, MAXB = 200, 1_500_000

    def bodylen(fn):
        return len(dec.get(fn["addr"].lower(), {}).get("c", "")) + 200

    split = {}
    for key, items in groups.items():
        if len(items) <= MAXF and sum(bodylen(i[0]) for i in items) <= MAXB:
            split[key] = items
            continue
        items.sort(key=lambda x: x[0]["addr"])
        part, cur, curb = 0, [], 0
        for it in items:
            b = bodylen(it[0])
            if cur and (len(cur) >= MAXF or curb + b > MAXB):
                split[(key[0], "%s_%02d" % (key[1], part))] = cur
                part, cur, curb = part + 1, [], 0
            cur.append(it)
            curb += b
        if cur:
            split[(key[0], "%s_%02d" % (key[1], part))] = cur
    groups = split

    root = os.path.join(OUT, folder)
    for (module, cls), items in sorted(groups.items()):
        d = os.path.join(root, module)
        os.makedirs(d, exist_ok=True)
        items.sort(key=lambda x: x[0]["addr"])

        with open(os.path.join(d, cls + ".h"), "w", encoding="utf-8") as h:
            h.write("// %s (%s) -- %s. %d functions.\n" % (cls, module, folder, len(items)))
            h.write("// Generated by tools/cw_decomp/tools/structure.py -- do not hand-edit.\n")
            h.write("#pragma once\n#include \"../include/cw_types.h\"\n\n")
            for fn, name, kind, why in items:
                # surface a recovered name (ledger / role) when it differs from the raw FUN_
                tag = ("  ~%s" % name) if (name and name != fn["name"] and fn["name"].startswith("FUN_")) else ""
                h.write("/* %s  %s  [%s]%s */\n%s;\n\n" % (fn["addr"], kind, why, tag, fn["proto"]))

        with open(os.path.join(d, cls + ".cpp"), "w", encoding="utf-8") as c:
            c.write("// %s (%s) -- %s. %d functions. Bodies = Ghidra pseudo-C.\n" % (cls, module, folder, len(items)))
            c.write("// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).\n")
            c.write("#include \"%s.h\"\n\n" % cls)
            for fn, name, kind, why in items:
                body = dec.get(fn["addr"].lower(), {}).get("c", "")
                c.write("/* %s @ %s  kind=%s  attributed-by=%s  size=%d */\n"
                        % (name, fn["addr"], kind, why, fn["size"]))
                c.write(body if body.strip() else "// (decompilation unavailable)\n%s { }\n" % fn["proto"])
                c.write("\n")

    with open(os.path.join(root, "attribution.tsv"), "w", encoding="utf-8") as t:
        t.write("addr\tname\tkind\tmodule\tclass\tattributed_by\tsize\n")
        for r in sorted(attrib):
            t.write("\t".join(str(x) for x in r) + "\n")

    with open(os.path.join(root, "GAP_ANALYSIS.md"), "w", encoding="utf-8") as g:
        g.write("# Gap analysis -- %s\n\n" % binary)
        g.write("Functions automation could not name (still `FUN_`), excluding library code.\n")
        g.write("Ordered by size: the big ones are where the remaining game logic is.\n\n")
        g.write("Rows flagged **orphan** have zero callers. At this size that usually means a\n")
        g.write("**body split**: Ghidra started a function on the 6-byte alignment NOP MSVC emits\n")
        g.write("to 16-align a loop head, mid-body, and gave it the rest of the enclosing function.\n")
        g.write("The code is real -- `0x4eaa7a` is the town builder, `0x50702a` the dungeon\n")
        g.write("assembler -- so treat an orphan as a fragment of its owner, not as dead code.\n")
        g.write("`tools/nop_split_audit.py` identifies them and names the owner.\n\n")
        g.write("| addr | size | callers | callees | flag | sample strings |\n|---|---|---|---|---|---|\n")
        norphan = 0
        for addr, size, ncr, nce, strs in sorted(gaps, key=lambda x: -x[1])[:400]:
            s = ", ".join(x[:40] for x in strs).replace("|", "\\|")
            flag = "orphan" if ncr == 0 else ""
            if ncr == 0:
                norphan += 1
            g.write("| `%s` | %d | %d | %d | %s | %s |\n" % (addr, size, ncr, nce, flag, s))
        g.write("\n**Total unnamed non-library functions: %d** (%d of the listed %d are orphans)\n"
                % (len(gaps), norphan, min(400, len(gaps))))

    inc = os.path.join(root, "include")
    os.makedirs(inc, exist_ok=True)
    with open(os.path.join(inc, "cw_types.h"), "w", encoding="utf-8") as th:
        th.write("// Ghidra base types for the reconstructed %s tree.\n#pragma once\n\n" % binary)
        th.write("typedef unsigned char   undefined, undefined1, byte, uchar;\n"
                 "typedef unsigned short  undefined2, ushort, word;\n"
                 "typedef unsigned int    undefined4, uint, dword;\n"
                 "typedef unsigned long long undefined8, ulonglong, qword;\n"
                 "typedef signed char     sbyte;\n"
                 "typedef int             code;\n")

    return {"binary": binary, "folder": folder, "functions": len(meta),
            "files": len(groups), "gaps": len(gaps), "stats": stats,
            "decompiled": len(dec)}


def main():
    results = []
    for binary, folder in BINARIES.items():
        r = emit(binary, folder)
        if r:
            results.append(r)
            print("%-11s -> %-7s %5d functions, %4d files, %4d unnamed, %d bodies"
                  % (binary, folder, r["functions"], r["files"], r["gaps"], r["decompiled"]))
            k = r["stats"]
            print("             kind: game=%d gamemisc=%d lib=%d" % (k["game"], k["gamemisc"], k["lib"]))
            print("             by:   " + " ".join("%s=%d" % (a[len("why:"):], b)
                                                   for a, b in sorted(k.items()) if a.startswith("why:")))
    return results


if __name__ == "__main__":
    main()
