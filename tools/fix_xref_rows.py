#!/usr/bin/env python3
"""Apply the 16 bad-citation fixes to docs/CW_CONFIDENCE_XREF.md.

The citation audit found 14 off-by-N rows and 2 whose address is absent at the cited
line (server only -- cube verified 89/89). Each fix below takes the identity from what
the cited document ACTUALLY says at the line where the address really appears.

A backup is written next to the file before anything is changed, and every edit is
reported. Rows whose label was already correct get their citation line repaired only.
"""
import json
import os
import re
import shutil

HERE = os.path.dirname(os.path.abspath(__file__))
REPO = os.path.abspath(os.path.join(HERE, "..", "..", "..", ".."))
XREF = os.path.join(REPO, "RatForge", "docs", "CW_CONFIDENCE_XREF.md")
RAW = os.path.join(HERE, "..", "raw")

# addr -> (new_name, new_kind, new_line_or_None, why)
FIXES = {
    "4f8570":  ("temperature_blend", "game", 136,
                "cited line +1: 'temperature blend (site+0xc weighted avg) | 40/40 live'. Was filed lib"),
    "4e28e0":  ("town_builder", "game", 162,
                "cited line +1: 'town builder (plan-then-populate, 14 phases)'. Was filed lib"),
    "4ffbf0":  ("ground_knoll", "game", 161,
                "cited line +1 says 'tree/canopy ellipsoid ... 60521/60521', but that phrasing was "
                "CORRECTED 2026-07-18 to ground KNOLL (CWGEN_PORT_FOREST_CPP_NEXT.md:41: 'knoll (4ffbf0 "
                "- geometry identical to cw_forest.knoll_writes)'). Geometry unchanged, naming only"),
    "522840":  ("biome_border", "game", 671,
                "cited line +5: 'biome-border FUN_00522840 100/100'. The old name "
                "World_computeSlopeShade was simply wrong, not merely mis-kinded"),
    "523380":  ("pointSegmentDistanceSq", "gamemisc", 671,
                "cited line +5 confirms 'point-to-segment FUN_00523380'. Label already correct; "
                "citation repaired only"),
    "4286f0":  ("World_getTileAtCoords", "gamemisc", None,
                "address absent at CW_RE_SOURCE.md:4395, but the label is independently confirmed "
                "from the decompiled body (see ADJUDICATION.md). Label stands; citation unreliable"),
    "522290":  ("feature_count_range", "game", 1092,
                "cited line +5: 'feature-count range (site climate -> [1,10])'. Was filed lib"),
    "4f2ee0":  ("house_furniture_placer", "game", 4575,
                "cited line +3: 'indoor/house furniture (BedTable 0x14, Shelf1-3 0x20-0x22, Bench, "
                "Stool + jitter)'. Was filed lib"),
    "52a830":  ("dungeon_scatter_emitter", "game", None,
                "the row's own note reads 'DUNGEON scatter (shelf/table/stool/chest) emitter'; "
                "corroborated by CW_DUNGEON_DECORATION_RE.md:23. Was filed lib"),
    "549c50":  ("world_create", "game", 560,
                "cited line +5: 'world-load / init driver (calls seed-init twice: 123 then 42069)'. "
                "The xref had no name at all and filed it lib"),
    "54a946":  ("ftol_trunc", "lib", 927,
                "cited line +2: 'TRUNCATE toward zero (proven: 303/303 exact 16.16 positions)'. "
                "The old name ftol2_round asserted ROUNDING -- the opposite. Corroborated at "
                "CW_RE_SOURCE.md:783 and :4593"),
    "54a910":  ("ftol_round_to_int", "lib", 1116,
                "cited line +5: 'lib_fn_54a910 = round-to-int'. Kind lib is right; the name was a placeholder"),
    "5104e0":  ("structure_populator_CONTESTED", "game", 172,
                "cited line +1: \"'Structure populator': FUN_00500300 (loot doc) vs FUN_005104e0 "
                "(spawns doc)\" -- the docs disagree, so the name records that it is contested. Was filed lib"),
    "4f5cc0":  ("sort_routine_4f5cc0", "gamemisc", 1114,
                "cited line +5 calls it 'the SORT'; cw_callgraph.py calls it connection_sort. It is a "
                "sort routine, so lib is unsupported, but which sort is unproven"),
    "5286a0":  ("UNRESOLVED_5286a0", "gamemisc", 1097,
                "cited line +3 only lists it under 'distance calc stubbed'. No identity established; "
                "lib was never evidenced"),
    "513760":  ("UNRESOLVED_513760", "gamemisc", 177,
                "cited line +1: 'Town road-segment writer id -- unknown since the FUN_00513760 "
                "falsification'. The doc says UNKNOWN, so lib_fn_/lib overstated it"),
}

ROW = re.compile(r"^(\|\s*`0x)([0-9a-fA-F]{5,8})(`\s*\|\s*)(server|cube)(\s*\|\s*)`?([^`|]*?)`?(\s*\|\s*)([a-z]+)(\s*\|)")


def main():
    shutil.copy2(XREF, XREF + ".bak")
    lines = open(XREF, encoding="utf-8").read().splitlines()
    applied, out = [], []

    for line in lines:
        m = ROW.match(line)
        if not m:
            out.append(line)
            continue
        addr = m.group(2).lower().lstrip("0")
        key = next((k for k in FIXES if k.lstrip("0") == addr), None)
        if key is None:
            out.append(line)
            continue
        new_name, new_kind, new_line, why = FIXES[key]
        old_name, old_kind = m.group(6).strip(), m.group(8)
        new = (m.group(1) + m.group(2) + m.group(3) + m.group(4) + m.group(5) +
               "`" + new_name + "`" + m.group(7) + new_kind + m.group(9) +
               line[m.end():])
        if new_line:
            new = re.sub(r"(\[[A-Za-z0-9_./-]+\.md):\d+\]", r"\1:%d]" % new_line, new, count=1)
        out.append(new)
        applied.append((key, old_name, old_kind, new_name, new_kind, why))

    open(XREF, "w", encoding="utf-8").write("\n".join(out) + "\n")

    # feed the corrected identities into the adjudicated ledger too
    p = os.path.join(RAW, "adjudicated.json")
    data = json.load(open(p, encoding="utf-8")) if os.path.exists(p) else {}
    srv = data.setdefault("Server.exe", {})
    for key, on, ok, nn, nk, why in applied:
        if nn.startswith("UNRESOLVED"):
            srv.pop(key.rjust(8, "0"), None)
            continue
        srv[key.rjust(8, "0")] = {"name": nn, "kind": nk, "verdict": "XREF-FIX"}
    json.dump(data, open(p, "w", encoding="utf-8"), indent=1, sort_keys=True)

    rep = os.path.join(RAW, "xref_fixes_applied.md")
    with open(rep, "w", encoding="utf-8") as g:
        g.write("# Fixes applied to `CW_CONFIDENCE_XREF.md`\n\n")
        g.write("Backup: `CW_CONFIDENCE_XREF.md.bak`. %d rows changed.\n\n" % len(applied))
        g.write("| addr | was | kind | now | kind | why |\n|---|---|---|---|---|---|\n")
        for key, on, ok, nn, nk, why in applied:
            g.write("| `0x%s` | %s | %s | **%s** | **%s** | %s |\n" % (key, on, ok, nn, nk, why))
    print("rows changed: %d" % len(applied))
    for key, on, ok, nn, nk, why in applied:
        print("  0x%-7s %-26s %-9s -> %-28s %s" % (key, on[:26], ok, nn[:28], nk))
    print("\nreport -> %s" % os.path.normpath(rep))


if __name__ == "__main__":
    main()
