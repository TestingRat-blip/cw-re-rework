#!/usr/bin/env python3
"""Emit ADJUDICATION.md -- the settled verdicts for the label conflicts.

Rulings below were made by reading the decompiled body (and, where the decompiler was
untrustworthy, the raw bytes), not by preferring a source. Evidence classes used:

  * VC11 STL diagnostics verified against the extracted headers in
    ../msvc_vs2012_rtm/vc11_librarycore86/.../VC/include
  * the shipped CRT symbols in ../crt_symbols/
  * raw disassembly where Ghidra collapsed a /GS function body
  * the corpus' own bit-exact gate records

A = cw_callgraph.py (working names)   B = CW_CONFIDENCE_XREF.md
"""
import json
import os
from collections import Counter

HERE = os.path.dirname(os.path.abspath(__file__))
RAW = os.path.join(HERE, "..", "raw")
OUT = os.path.join(HERE, "..", "ADJUDICATION.md")

# addr -> (winner, settled-name, evidence)
RULINGS = {
    # --- B correct: A applied game semantics to an STL/CRT primitive -------------
    "004013d0": ("B", "getElemPtr4", "`return this + i*4` -- a generic element pointer; no chunk semantics"),
    "004013f0": ("B", "std_vector_int_at", "bounds-checked `if (0<=i && i < (end-begin)>>2) return begin[i]` -- vector index"),
    "0042f440": ("B", "std_vector_free", "`operator_delete(*p)` then zeroes the 3 pointers -- vector deallocate"),
    "00402990": ("B", "vec3_store", "stores 3 dwords, returns this; A's `size3_write` is the same thing, less precise"),
    "004f2be0": ("B", "std_vector_push_back_int", "grow-if-full then append 4-byte element"),
    "0052dee0": ("B", "World_falloffSquared", "`f=1-falloff; f<=0?0:f*f`; A's `road_probe` adds unsupported semantics"),
    "00405fd0": ("B", "World_getBlockAt", "column lookup + Z bounds, returns block or sentinel"),
    "00406290": ("B", "Region_getChunkCell", "coord bounds, >>6 to chunk, &63 to cell"),
    "004286f0": ("B", "World_getTileAtCoords", "same shape at 8x tile scale"),
    "004d1950": ("B", "VoxelGrid_cellAt3D", "3D bounds-checked grid index"),
    "00405f20": ("B", "Column_getBlockChecked", "checked column read with sentinel fallbacks"),
    "00406100": ("B", "Chunk_getColumnAt", "coord -> chunk -> column lookup, 37 callers"),
    "0041fe60": ("B", "VoxelColumn_setBlock", "writes a 4-byte voxel, grows the column; but kind is GAME, not lib"),

    # --- A correct: B is a placeholder or a bad extraction -----------------------
    "0052bf40": ("A", "rarityRoll", "`rand()%(n+1)`, +1 at 1/100, 1/1000, 1/10000, clamped to 4 -- rarity tiers"),
    "004d7870": ("A", "region_tier", "distance from world centre (512,512), sqrt, tier = 2 - d*-0.75"),
    "00522290": ("A", "feature_count_range", "climate floats at +0xc/+0x10 select (min,max) count pairs"),
    "004ff340": ("A", "fill_box", "triple nested loop calling writeVoxel with material 0x46"),
    "00522cc0": ("A", "dist2_16_16", "DISASSEMBLED: `shld edi,esi,0x10` + `sub`/`sbb` = 64-bit 16.16 fixed-point "
                                     "squared distance. Ghidra collapsed the body to the /GS epilogue; B's "
                                     "`stub_securityCookie` is that artifact. Already flagged in "
                                     "CW_RE_MASTER_INDEX.md:153 as `x cookie-stub`"),
    "00518630": ("A", "zone_builder", "the proven zone builder; B's `lib_fn_518630` is badly wrong"),
    "004e28e0": ("A", "town_builder", "proven plan-then-populate village/ruins builder"),
    "00500300": ("A", "dungeon_assembler", "bit-exact proven dungeon assembler"),
    "005236d0": ("A", "room_carve", "CW_RE_MASTER_INDEX.md:159 -- bit-exact vs captures"),
    "005234b0": ("A", "seg_carve", "CW_RE_MASTER_INDEX.md:159 -- bit-exact vs captures"),
    "004f9010": ("A", "corridor_connect", "CW_RE_MASTER_INDEX.md:159 -- bit-exact vs captures"),
    "0054a910": ("A", "ftol_helper", "x87 ROUND gated on the SSE2 flag = the CRT `_ftol2`; B's name is a placeholder "
                                     "but B's `lib` kind is right"),

    # --- neither name is right ---------------------------------------------------
    "004f79f0": ("NEITHER", "int128_sub", "4x32 subtract with borrow propagation = ONE 128-bit integer, not a vector"),
    "00428590": ("NEITHER", "std_list_push_back (role: conn edge)",
                 "`_Xlength_error(\"list<T> too long\")` -- VC11 <list>:1951 `_Incsize`. Identity is "
                 "std::list::push_back; A's name is its caller-side role. Both capture something true"),
    "00528450": ("NEITHER", "std_list_push_back", "same VC11 <list> signature; A's `prop_scatter` is wrong"),
    "004f2c50": ("NEITHER", "std_vector_push_back (32B elem)", "`& 0xffffffe0` element stride; A's `npc_schedule_b` wrong"),
    "004d6670": ("NEITHER", "std_vector_push_back (with EH)", "SEH frame + vector grow/append"),
    # SETTLED 2026-07-24 (Docs/RE_dungeon_level_rank.md): FUN_0050e080 @0x50eab1 stores this
    # function's result, fed `counter/64`, as a dungeon's LEVEL -- which is exactly the
    # semantics A asserted and this ruling had withheld. Superseded by the DEEP_RE entry below.
    "00411090_superseded": ("NEITHER", "unproven -- kind is GAME",
                 "`(1/(1-x) - 1)*20 + 1`. No CRT routine has this shape, so B's `lib` kind is wrong; "
                 "A's `monster_level_formula` asserts semantics the body alone does not establish"),

    # --- compatible: both describe the same function -----------------------------
    "00413710": ("COMPATIBLE", "ItemData_copy (0x118)", "field-wise copy of the 0x118 ItemData struct -- A gives the "
                                                        "role, B the structure; both correct"),
    "0041ff00": ("COMPATIBLE", "writeVoxel", "three-way conflict; single-voxel write via column lookup. "
                                             "`World_fillVoxelColumn` overstates it -- it writes at one Z"),
    "00431400": ("COMPATIBLE", "loadVoxelModels", "A and B agree in substance"),

    # --- kind correction only: B's `lib` is wrong, A's name unproven -------------
    "004c84b0": ("A-KIND", "unproven ctor -- GAME", "initialises fields to +0x184; an object ctor, not library code"),
    "004f84a0": ("A-KIND", "grid_cell_accessor -- GAME", "3D grid index, stride 2, into the +0x18 buffer"),
    "004d23f0": ("A-KIND", "checked cell read -- GAME", "bounds-checked read with sentinel globals"),
    "004f3630": ("A-KIND", "unproven ctor -- GAME", "large struct init + copy; B's `lib` kind unsupported"),

    # --- genuinely unresolved ----------------------------------------------------
    "004496a0": ("UNRESOLVED", "-", "no body: the address is not a function in our analysis"),
    "004e20d0": ("UNRESOLVED", "-", "generic 7-field copy; neither name is evidenced"),
    "00406050": ("UNRESOLVED", "-", "64-bit coordinate normalisation; neither name clearly fits"),
}


def main():
    rows = json.load(open(os.path.join(RAW, "adjudication.json"), encoding="utf-8"))
    seen, tally = set(), Counter()
    lines = []

    for r in sorted(rows, key=lambda x: x["addr"]):
        a = r["addr"]
        if a in RULINGS:
            w, name, ev = RULINGS[a]
        elif r["verdict"] in ("B", "B-kind/A-name"):
            w, name, ev = "B", r["b_name"], r["note"]
        elif r["verdict"] == "NEITHER":
            w, name, ev = "NEITHER", "-", r["note"]
        elif r["verdict"] == "NO-BODY":
            w, name, ev = "UNRESOLVED", "-", "no decompiled body"
        else:
            w, name, ev = "UNRESOLVED", "-", "not individually reviewed; B is a placeholder, A unproven"
        key = (a, r["a_name"], r["b_name"])
        if key in seen:
            continue
        seen.add(key)
        tally[w] += 1
        lines.append((a, r["a_name"], r["b_name"], w, name, ev, r["size"]))

    with open(OUT, "w", encoding="utf-8") as g:
        g.write("# Adjudication of the label conflicts\n\n")
        g.write("Every conflict between `cw_callgraph.py` (**A**) and `CW_CONFIDENCE_XREF.md` (**B**),\n")
        g.write("settled against the decompiled body -- or the raw bytes where the decompiler lied.\n\n")
        g.write("## Verdicts\n\n| verdict | count |\n|---|---|\n")
        for k, v in tally.most_common():
            g.write("| %s | %d |\n" % (k, v))
        g.write("""
## The systematic finding

**`CW_CONFIDENCE_XREF.md`'s `lib_fn_*` rows are an extraction artifact, not an assessment.**
`0x4f9010`, `0x5234b0` and `0x5236d0` are filed there as `lib_fn_*` / kind `lib`, each citing
`CW_RE_MASTER_INDEX.md:158`. Line **159** of that same document records them as
*room carve / corridor / seg carve -- bit-exact vs captures*. The citation is off by one row,
so proven worldgen functions were imported as library placeholders. `0x518630` (zone builder),
`0x4e28e0` (town builder) and `0x500300` (dungeon assembler) are mislabelled the same way.

**The opposite error runs through `cw_callgraph.py`:** it gives game semantics to STL and CRT
primitives. `0x4013f0` is `std::vector<int>` indexing, not `model_db_lookup`; `0x428590` and
`0x528450` are `std::list::push_back`, not `conn_edge_append` and `prop_scatter`;
`0x42f440` is a vector deallocate, not `temp_list_free`.

Neither source is reliable as a whole. They fail in opposite directions, which is why reading
the body was the only way to settle these.

## Full verdict table

| addr | A (callgraph) | B (xref) | winner | settled name | evidence |
|---|---|---|---|---|---|
""")
        for a, an, bn, w, name, ev, size in lines:
            g.write("| `0x%s` | %s | %s | **%s** | %s | %s |\n"
                    % (a, an[:30], bn[:30], w, name[:36], ev[:180]))

    # Feed the settled identities back as the top-authority ledger, so the emitted tree
    # reflects the adjudication instead of whichever source happened to win precedence.
    settled = {}
    for a, an, bn, w, name, ev, size in lines:
        if w == "UNRESOLVED" or name == "-":
            continue                       # no claim -> stays unattributed, by design
        low = name.lower()
        if w in ("A", "A-KIND"):
            kind = "game"
        elif low.startswith(("std_", "stl_", "int128", "lib")) or "push_back" in low:
            kind = "lib"
        elif w == "B":
            kind = "lib" if low.startswith(("std_", "stl_")) else "gamemisc"
        else:
            kind = "gamemisc"
        settled[a] = {"name": name, "kind": kind, "verdict": w}

    # Identities settled by dedicated deep-RE (not label-conflict adjudication).
    # Each cites the write-up under Docs/.
    DEEP_RE = {
        # FUN_00524540 — creature spawn + behaviour-tree builder (Docs/RE_524540_creature_spawn.md).
        # Falsifies the old "castle-arc wall stamps" label: 0 voxel writes, 321 Spawn refs.
        "00524540": {"name": "creature_spawn_builder", "kind": "game", "verdict": "DEEP-RE"},
        # 0x50702a is NOT a function (Docs/RE_50702a_mob_populator.md): the bytes there are
        # `8d 9b 00 00 00 00`, the alignment NOP a `jmp` at 0x507028 hops over, inside the
        # dungeon assembler FUN_00500300 (0x500300-0x50931c). Ghidra started a function on
        # padding. Same for its seven siblings -- see tools/nop_split_audit.py.
        # The dungeon mob pass lives at 0x507401-0x50775a within that body and is gated
        # bit-exact (tools/gate_50702a_mobs.py).
        "0050702a": {"name": "dungeon_assembler__split_50702a", "kind": "game",
                     "verdict": "DEEP-RE"},
        "00501e0a": {"name": "dungeon_assembler__split_501e0a", "kind": "game",
                     "verdict": "DEEP-RE"},
        "00502a7a": {"name": "dungeon_assembler__split_502a7a", "kind": "game",
                     "verdict": "DEEP-RE"},
        "00502dca": {"name": "dungeon_assembler__split_502dca", "kind": "game",
                     "verdict": "DEEP-RE"},
        "0050529a": {"name": "dungeon_assembler__split_50529a", "kind": "game",
                     "verdict": "DEEP-RE"},
        "005053ca": {"name": "dungeon_assembler__split_5053ca", "kind": "game",
                     "verdict": "DEEP-RE"},
        "005054fa": {"name": "dungeon_assembler__split_5054fa", "kind": "game",
                     "verdict": "DEEP-RE"},
        "0050998a": {"name": "dungeon_assembler__split_50998a", "kind": "game",
                     "verdict": "DEEP-RE"},
        # The item-generation family (Docs/RE_52b470_item_generator.md). All gated live:
        # 18 invocations, 450 candidates, 6 final picks reproduced from (level, rank) + the
        # rand stream. The first two were filed `lib_fn_*` -- they are game code.
        "0052b470": {"name": "item_generator", "kind": "game", "verdict": "DEEP-RE"},
        "0052a760": {"name": "item_special_candidate", "kind": "game", "verdict": "DEEP-RE"},
        # the two branches of item_special_candidate's coin flip, both gated
        # (18 invocations, 298 candidates). Named for what their tables provably emit:
        # 528bf0 builds only kinds 4-9 with subtype 0; 52c4e0 builds only kind 3, across
        # 15 subtypes. (That reads as equipment-vs-weapon, but this work does not prove it.)
        "00528bf0": {"name": "item_gen_kinds_4_9", "kind": "game", "verdict": "DEEP-RE"},
        "0052c4e0": {"name": "item_gen_kind_3", "kind": "game", "verdict": "DEEP-RE"},
        # was `loot_append` (cw_callgraph guess); the body is a vector push_back with an
        # 0x118 stride calling ItemData_copy -- so it is specifically vector<ItemData>.
        "00528530": {"name": "ItemData_vector_push_back", "kind": "gamemisc",
                     "verdict": "DEEP-RE"},
        # `(1/(1-x) - 1)*20 + 1`. ADJUDICATION left this "unproven -- kind is GAME" because
        # the body alone did not establish cw_callgraph's `monster_level_formula`. Its one
        # real call site does: FUN_0050e080 @0x50eab1 stores ftol(FUN_00411090(counter/64))
        # as the dungeon's level (Docs/RE_dungeon_level_rank.md). `counter` is now identified
        # too -- the Pass-3 candidate loop index [esp+0x28] (0x50ea0e/0x50f27c); level and rank
        # are reproduced 6/6 ab-initio by tools/gate_dungeon_counter.py.
        "00411090": {"name": "monster_level_formula", "kind": "game", "verdict": "DEEP-RE"},
        # the dungeon prop record (0x188) that lives in the assembler's site+0xc vector, and
        # the two emitters that fill it (Docs/RE_dungeon_lights.md, RE_52a830_scatter.md).
        # 004c8420 was filed lib_fn_*; it copies base fields, a vec at +0x48, an ItemData at
        # +0x58 (FUN_00413710) and +0x170..+0x184 -- i.e. exactly one 0x188 prop record.
        "004c8420": {"name": "DungeonProp_copy_0x188", "kind": "gamemisc", "verdict": "DEEP-RE"},
        # was "unproven ctor -- GAME": it is that record's ctor, paired with the 004cd8f0 dtor
        # around every site+0xc emit, and its field extent (+0x184) matches the 0x188 stride.
        "004c84b0": {"name": "DungeonProp_ctor_0x188", "kind": "game", "verdict": "DEEP-RE"},
        # was lib_fn_52c370: the wall-decor emitter, called from the same four wall-direction
        # blocks as the scatter but pushing its record to site+4 (a std::list) instead.
        "0052c370": {"name": "dungeon_decor_emitter", "kind": "game", "verdict": "DEEP-RE"},
    }
    settled.update(DEEP_RE)

    # Merge, don't clobber: final_adjudication_cube.py writes its verdicts into the same file,
    # and a plain overwrite here silently demoted 11 client identities back to their
    # CW_CONFIDENCE_XREF.md rows (two of them from game/gamemisc to lib) on the next harvest.
    path = os.path.join(RAW, "adjudicated.json")
    data = json.load(open(path, encoding="utf-8")) if os.path.exists(path) else {}
    data["Server.exe"] = settled
    with open(path, "w", encoding="utf-8") as g:
        json.dump(data, g, indent=1, sort_keys=True)

    for k, v in tally.most_common():
        print("  %-12s %d" % (k, v))
    print("\nsettled identities exported: %d (unresolved stay unattributed)" % len(settled))
    print("-> %s" % os.path.normpath(OUT))


if __name__ == "__main__":
    main()
