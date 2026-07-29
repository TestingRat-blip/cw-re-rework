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
    # SETTLED 2026-07-25 (Docs/RE_zone_grid.md). Both of this address's rows used to read
    # "NEITHER -- x87/CRT float conversion helper", a ruling made off the body's float shape
    # alone. The caller settles it: the zone builder's candidate grid rolls
    # `rand()/32767 <= (1-w)^2 * 0.75` against it, and cw_rederive's port reproduces the live
    # return BIT-EXACTLY at 3,861 rolled cells over 99 zones. All three candidate names
    # (featureFalloff / feature_falloff / World_objectFalloffWeight) describe the same thing.
    "0052c820": ("COMPATIBLE", "World_objectFalloffWeight",
                 "thiscall on the feature descriptor, two 16.16 positions by pointer -> d^2/r^2 "
                 "to the feature centre, noise-warped for every type outside {0xb,0xc,0xe}; "
                 "gated ab initio 3,861/3,861 (gate_zone_grid.py) on top of 91,880/91,880 direct-call"),
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
    # SETTLED 2026-07-25 (Docs/RE_zone_emitters_ac.md). "64-bit coordinate normalisation" is
    # what the body does; the CALL SITE says what it is for. Emitter A's Z settle calls it in a
    # pair of loops with three int64 16.16 coordinates plus the site and tests
    # `(ret[3] & 0x1f) in {0,2}` -- the project's own Block_isSolid predicate -- on the returned
    # pointer, descending to the first solid block and then ascending to the first clear one.
    # It is the fixed-point-position variant of the block lookup FUN_00405fd0 does with integer
    # block coordinates. B's name is right; A's `column_walkup` is the caller-side role.
    "00406050": ("B", "World_getBlockFloat",
                 "16.16 position -> block pointer; proven by emitter A's descend/ascend settle "
                 "at 0x51dad1/0x51db56, whose verdict is Block_isSolid on the return value"),
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
        # the OVERWORLD prop scatter (Docs/RE_zone_props.md). Was lib_fn_4e0740, but its only
        # caller is the zone builder (0x51cd1e, in a 10-try retry loop) and it pushes a 0x188
        # prop record into site+0xc: type 0x41, size (2.4, 2.4, 0.5), after returning early on
        # river bands (FUN_0052cd50 <= 0.02). Both its stages are now derived record-for-record
        # from the rand stream over 56 live zones (tools/gate_zone_props2.py, 4364 checks).
        "004e0740": {"name": "zone_prop_emitter", "kind": "game", "verdict": "DEEP-RE"},
        # the placement test both prop emitters use, and the reason the layer is portable:
        # a PURE function of the finished terrain voxels -- drop <=50 blocks to the first
        # solid under the (dir-rotated) footprint, raise <=50 until the layer is clear,
        # then reject unless Z > 0, the whole footprint one block below is solid, and the
        # record's own block is not water. It rewrites the record's Z in place. Was filed
        # `lib_fn_5287b0` under `_library`; it is game code. Full disassembly plus 2,556
        # live before/after invariants (Docs/RE_zone_props.md).
        "005287b0": {"name": "Prop_settleOnTerrain", "kind": "game", "verdict": "DEEP-RE"},
        # Was filed `lib_fn_4fc140` under `_library` and carried in HANDOFF_PROMPT.md as
        # "probably misfiled -- two independent worldgen decisions threshold it at exactly
        # 0.8". It is FIFTY BYTES and it is not a library function: it returns the resident
        # column's own cached humidity (`col+8`), falling back to the blended climate
        # FUN_004f8b40 when there is no column. The reason three separate decisions
        # threshold it at 0.8 is that it IS the humidity -- the forest's `humid > 0.8`
        # reaches the same number through FUN_004f8b40 directly. Read out of the binary in
        # full, 2026-07-28 (Docs/RE_town_plaza.md section 4).
        "004fc140": {"name": "World_columnHumidity", "kind": "gamemisc", "verdict": "DEEP-RE"},
        # `movzx eax, byte [ecx+3]; and eax, 0x1f; ret` -- the block record's 5-bit MATERIAL
        # CLASS, the value every `cls == 2 / == 0xb / == 4` test in the worldgen compares.
        # Its sibling FUN_004061f0 (Block_isSolid) is the same read with `!= 0 && != 2`.
        "00406280": {"name": "Block_class", "kind": "gamemisc", "verdict": "DEEP-RE"},
        # x*x + z*z on a vec2<double> -- length SQUARED, not length. That is why the town
        # plaza's two .rdata constants are 49 and 64 and its disc has radius 8
        # (Docs/RE_town_plaza.md section 3.2); reading it as a length made the whole stage
        # unreadable, because a +-8 box can never reach a distance of 49.
        "004d8e30": {"name": "vec2d_lengthSquared", "kind": "gamemisc", "verdict": "DEEP-RE"},
        # The town HOUSE FURNITURE factory (Docs/RE_town_furnish.md section 4). 1,359 bytes,
        # EIGHT rand sites, called as (out, &pos, facing, kind) -- note the last two are
        # pushed further up the frame than the caller's own `add esp, 8` suggests. It picks
        # the record type (0xa / 0x10 / 0x12 / 0x14 / 0x1d / 0x1e / 0x20..0x22 / 0x38..0x40),
        # its extents, and a per-facing position nudge, spending 1-3 draws. Every one of
        # those draws is INVISIBLE to frida_town_props.py (its filter is the builder body),
        # so the decode was checked by recovering them out of each town's own LCG:
        # 4,958 of 4,958 live records reproduced, type and extents.
        "004f2ee0": {"name": "town_furniture_factory", "kind": "game", "verdict": "DEEP-RE"},
        # FUN_004f2cd0 -- the HOUSE SURROUND pass's prop ctor (Docs/RE_town_surround.md 5).
        # Called as (out, &pos, orient, 0): copies the three int64 16.16 coordinates to
        # +0x08/+0x10/+0x18 and the orientation to +0x20, then spends a `rand() % 7` of its
        # own to pick the model out of the jump table at 0x4f2ec4 -- 0x18 barrel, 0x19
        # crate, 0x1a open-crate, 0x1b sack, 0x12 bench, 0x10 stool, 0x1c shelter -- with
        # two of the seven arms spending a SECOND draw for an f32 scale. Those draws are
        # outside the builder body and so invisible to frida_town_props.py; recovered out
        # of each town's own LCG they reproduce the type AND the extents of 1,059 of 1,059
        # live records (tools/gate_town_surround.py). Sibling of 0x4f2ee0, not the same
        # function: different table, different arity, different namespace.
        "004f2cd0": {"name": "town_surround_prop_factory", "kind": "game", "verdict": "DEEP-RE"},
        # --- the town builder's NPC / DAILY-ROUTINE pass (Docs/RE_town_npcs.md) ----------
        # FUN_004e0f40 -- the 0x10f0-byte NPC record ctor every one of the builder's seven
        # `operator_new(0x10f0)` sites calls. The NPC pass fills +0x10 position, +0x28 = 3,
        # +0x2c = 2 + rand()%2, +0x30 entity type, +0x34 level, +0x5c behaviour id, +0x109c
        # the behaviour tree and +0x10a0 the daily-schedule vector (32-byte elements).
        "004e0f40": {"name": "npc_spawn_ctor", "kind": "game", "verdict": "DEEP-RE"},
        # FUN_004e20d0 -- the schedule-waypoint ctor, called as (out, &pos, timeMs). Its
        # 0x20-byte record carries the time at +0x18, which the pass reads back off the
        # vector's last element to chain the next stop. `0xea60` = 60000 ms = one minute:
        # decoded against the live draw values the chain puts every villager's first
        # waypoint at 07:00-09:59 and the last at 10:17-20:45, 440 of 440 inside a day.
        "004e20d0": {"name": "npc_schedule_waypoint", "kind": "game", "verdict": "DEEP-RE"},
        # ⚠ NOT library functions, whatever the `lib_fn_` names say (lesson 25). All three
        # are called ONLY from the town builder's named-occupant arms, and all three spend
        # rand() outside the builder body where frida_town_props.py cannot list them --
        # their cost is measured from the rig's global draw index instead:
        #   0x4fd920  kind-2 occupant, 669-1038 draws; calls monster_level_formula on
        #             level/30.0f, so it is a stock/level generator.
        #   0x4fc180  kind-4 occupant, 3322-3335 draws.
        #   0x4fde90  kinds 3 AND 5, 2010-2018 draws over 11 priced gaps.
        # Bodies not decoded; what is settled is that they are game code in the NPC layer
        # and what each costs (tools/gate_town_npcs.py).
        "004fd920": {"name": "npc_occupant_kind2_init", "kind": "game", "verdict": "DEEP-RE"},
        "004fc180": {"name": "npc_occupant_kind4_init", "kind": "game", "verdict": "DEEP-RE"},
        "004fde90": {"name": "npc_occupant_kind35_init", "kind": "game", "verdict": "DEEP-RE"},
        # The SpeciesGroup container, shared by the ruin-occupant pass (0x4f16bb-0x4f2b45)
        # and the dungeon assembler's prologue (Docs/RE_dungeon_species.md). A SpeciesGroup
        # is 0x18 bytes = two `vector<int>`: list0 (the identity pool) and list1 (the
        # dungeon's companion pool, dead in a ruin). Proven from the bodies themselves --
        # 0x4f7540 zeroes exactly six dwords, 0x4f3820 divides the byte span by 24 and
        # 0x4f79b0 is `begin + idx*24`, so the element size is read three independent ways.
        # tools/gate_town_ruin.py interprets the table region using all four.
        # (0x4dafd0 -- `[ecx+4] = [ecx]`, std::vector::clear without freeing -- belongs in
        # this list and is NOT here on purpose: Ghidra never created a function there, so it
        # is absent from raw/Server.exe.meta.jsonl and a DEEP_RE row would be a no-op. It is
        # six real bytes between `int3` fillers, not an alignment NOP inside a body, i.e.
        # lesson 20's inverse -- a MISSING boundary rather than a spurious one. The ruin's
        # species table calls it to REUSE the temp group between two push_backs, so a reader
        # who takes it for a destructor loses the second group of three arms.)
        "004f7540": {"name": "SpeciesGroup_ctor", "kind": "gamemisc", "verdict": "DEEP-RE"},
        "004f77a0": {"name": "SpeciesGroup_dtor", "kind": "gamemisc", "verdict": "DEEP-RE"},
        "004f3820": {"name": "SpeciesGroupVector_size", "kind": "gamemisc",
                     "verdict": "DEEP-RE"},
        "004f79b0": {"name": "SpeciesGroupVector_at", "kind": "gamemisc",
                     "verdict": "DEEP-RE"},
        # The town MARKET's two prop factories (Docs/RE_town_market.md).  Both are called
        # from the town builder and nowhere else, and both spend a rand() the rig cannot
        # see -- LCG-recovered, they reproduce the TYPE and all three EXTENTS of 90 of 90
        # live records.
        #   0x4f3630  type = 0x15 + rand()%3  -> market-stand1/2/3, extents 3.5/2.0/3.0
        #   0x4f3490  type = 0x18 + rand()%4  -> barrel/crate/open-crate/sack, via a
        #             4-entry jump table at 0x4f3620; arms 1 and 2 spend a SECOND draw.
        # (0x4f3630's row is further down, where it already lived.)
        "004f3490": {"name": "town_market_goods_factory", "kind": "game",
                     "verdict": "DEEP-RE"},
        # FUN_0042feb0 -- std::vector<T>::push_back for a 12-byte element (the 0x2aaaaaab /
        # sar 1 reciprocal divide is /12).  The market pass uses it for the landmark list
        # `[ebp-0x5d80]`, which is the NPC pass's flag B.
        "0042feb0": {"name": "vec3i_vector_push_back", "kind": "gamemisc",
                     "verdict": "DEEP-RE"},
        # lib_fn_513400 -- the SEVENTH `lib_fn_*` in this neighbourhood that is not a
        # library function.  Its callers are the town builder and FIVE sites inside the
        # dungeon assembler (0x502dca, 0x50529a, 0x5053ca, 0x5054fa, 0x50702a), so it is
        # game code in the structure-building layer.  NOT decoded: the town builder's only
        # call is in the role-8 section, which is dead (RE_town_market.md sec.2), so this
        # project has never observed it running from there.
        "00513400": {"name": "structure_stamp_513400", "kind": "game", "verdict": "DEEP-RE"},
        # FUN_004024c0 / FUN_004024a0 -- sinf / cosf through __libm_sse2_{sin,cos}_precise,
        # the /fp:precise imports (they are wrappers, not the CRT routines themselves). The
        # ruin pack ring is `2 * cos/sin(i * PI / n)`.
        "004024c0": {"name": "sinf_precise", "kind": "gamemisc", "verdict": "DEEP-RE"},
        "004024a0": {"name": "cosf_precise", "kind": "gamemisc", "verdict": "DEEP-RE"},
        # FUN_004e0700 / FUN_004ce290 -- the two 16.16 +/- double helpers the surround pass
        # builds its face offsets with. Both are `*out = *this -/+ (int64)ftol(d * 65536)`;
        # 0x4e0700 multiplies by +65536 and subtracts, 0x4ce290 by -65536 and so ADDS.
        # Byte-proven, and the sign of each is asserted per emit site by the gate.
        "004e0700": {"name": "fixed16_subDouble", "kind": "gamemisc", "verdict": "DEEP-RE"},
        # (0x4d1950 keeps its adjudicated name `VoxelGrid_cellAt3D` -- the body really is a
        # generic bounds-checked 3D index and narrowing it to "module" would be wrong. What
        # 2026-07-28 adds is the CALL SITES: the house builder, the interior marking sweep
        # and the furnishing walk all index the 3x3x4 module records through it, and
        # tools/extract_house_layouts.py interprets those sites to recover the grids.)
        # `movzx eax, byte [ecx+3]; shr eax, 6; and eax, 1` -- bit 6 of the block record's
        # class byte, the INTERIOR flag the town builder's marking sweep sets at 0x4eab29.
        "004061e0": {"name": "Block_isInterior", "kind": "gamemisc", "verdict": "DEEP-RE"},
        # vector<PropRecord>::_Reserve -- the body divides by the 0x188 record stride, and
        # its five callers are exactly the prop pushers. It is the census that actually
        # scopes the prop layer: an INLINED push_back skips FUN_004d6670 but still has to
        # call this to grow, which is how FUN_005104e0 was found.
        "004ce8e0": {"name": "PropVector_reserve", "kind": "gamemisc", "verdict": "DEEP-RE"},
        # the overworld ENCAMPMENT populator (Docs/RE_5104e0_camp.md) -- a FIFTH prop emitter,
        # invisible to the old census because its push_back is inlined. Called only from the
        # zone builder (0x51eac7) with a grid of candidate positions, it picks a camp KIND
        # from the feature descriptor with no rand at all (`kinds[desc[+0x20] % len]`, a
        # 10-way jump table at 0x510728), builds that kind's species groups, and turns each
        # candidate into either a camp structure (FUN_004e0740's two prop shapes verbatim,
        # plus a ring of rand()%3+1 creatures) or a creature group. Gated over 99 firing
        # zones, 2,742 checks. Was `lib_fn_5104e0` under `_library` -- it is game code.
        "005104e0": {"name": "camp_populator", "kind": "game", "verdict": "DEEP-RE"},
        # the town MARKET's stall factory (Docs/RE_town_market.md; was
        # Docs/RE_town_props.md). It fills the record from a position and a direction and
        # then ends `type = rand() % 3 + 0x15` with the size hard-coded to (3.5, 2, 3).
        # Its fourth argument is pushed by every caller and never read.
        # RENAMED 2026-07-29 from `TownProp_make_0x15`. The old comment had the decode
        # right -- `rand() % 3 + 0x15` is right there in it -- and the NAME still said the
        # function makes type 0x15, which is the one thing it does not do: it makes one of
        # THREE, and through prop_ids.json those three are market-stand1/2/3. A name is a
        # claim; this one contradicted the comment directly above it for two slices.
        "004f3630": {"name": "town_market_stall_factory", "kind": "game",
                     "verdict": "DEEP-RE"},
        # CONFIRMED library, and worth pinning because the previous handoff asked for
        # "FUN_004e19f0's sort key" as if the function had one (Docs/RE_town_promotion.md).
        # It is MSVC's std::_Sort over a 4-byte element -- the `sar eax,2` count, the
        # _ISORT_MAX `cmp eax,0x20` at 0x4e1a06, the ideal-halving recursion on the smaller
        # half, _Insertion_sort below 32 and _Make_heap/_Sort_heap when ideal runs out --
        # and the KEY lives in the predicate it forwards as [ebp+0x14]. In the town builder
        # that predicate is the one-dword functor `&plotBase` and compares plot[+0x18]
        # ascending, which MSVC inlined identically into both instantiations below.
        "004e19f0": {"name": "std_sort_4byte", "kind": "lib", "verdict": "DEEP-RE"},
        # _Insertion_sort_unchecked for the same (iterator, predicate): the front-insert
        # memmove at 0x4e1675, then the walk-back loop, comparing score(plot[*]) at
        # 0x4e164e/0x4e1696. This is the ONLY body that runs for a town -- plotCount is 16
        # or 25, so the introsort above never leaves its `count <= 0x20` arm.
        "004e15f0": {"name": "std_insertion_sort_4byte", "kind": "lib", "verdict": "DEEP-RE"},
        # --- the town builder's INHABITANT SCATTER (Docs/RE_town_creatures.md) ---------
        # Three one-liner helpers the scatter's position build goes through, all read
        # rather than guessed. NOTE what each is NOT: 0x4cde40 does NOT add a half block
        # (`cdq / shld edx,eax,0x10 / shl eax,0x10` and nothing else), unlike five of the
        # six other 16.16 coordinate builds in this project -- lesson 14, port the
        # arithmetic from the copy that runs.
        "004cde40": {"name": "int_to_fixed16_16", "kind": "gamemisc", "verdict": "DEEP-RE"},
        # writes six dwords from its stack args into `this` = three int64s = a vec3 of
        # 16.16 coordinates. The town scatter builds (X, Z, Y) with it at 0x4edbc5.
        "00406380": {"name": "vec3_i64_store", "kind": "gamemisc", "verdict": "DEEP-RE"},
        # a bare `return this[0x14]` accessor, shared by several unrelated structs, so the
        # NAME cannot say what the field means. On a column record it is the ground-walk
        # start, and the whole column prologue has exactly one writer for it -- 0x519701,
        # `col[+0x14] = col[+0x10] - 8`.
        "0052d860": {"name": "field_at_0x14", "kind": "gamemisc", "verdict": "DEEP-RE"},
        # --- the town builder's HOUSE PASS (Docs/RE_town_house.md) ---------------------
        # The house's module-grid extents, and the reason the port can hardcode 3x3x4:
        # the two HORIZONTAL accessors are mirrors of each other over `house[+4] % 2`
        # (the plot rotation), so an odd rotation swaps them -- inert here only because
        # the single ctor call site is FUN_004e1f80(h, 3, 3, 4) and the two counts are
        # both 3. The vertical one is an unconditional `house[+0x6c]`.
        "004d8dc0": {"name": "House_dimX", "kind": "gamemisc", "verdict": "DEEP-RE"},
        "004d8de0": {"name": "House_dimZ", "kind": "gamemisc", "verdict": "DEEP-RE"},
        "004d8e00": {"name": "House_dimY", "kind": "gamemisc", "verdict": "DEEP-RE"},
        # --- the town builder's HOUSE ENTITY pass (Docs/RE_town_entities.md) -----------
        # Three one-instruction accessors on the model record the entity pass centres its
        # records with. They take NO argument -- `mov eax, [ecx+N]; ret`, no `ret n` -- so
        # the `push eax` that precedes each of them belongs to the vec3_store three lines
        # later, and reading them as one-argument calls mis-assigns every coordinate.
        # The names say the FIELD, not its meaning: the pass subtracts field/2 from X and
        # Z and the whole field from Y, and the value is not always positive, so calling
        # them extents would be a claim. Proven by the lattice: one residual class per
        # emit site in 2,176 single-model houses (gate_town_entities, 46,344 checks).
        "00402150": {"name": "model_field_0x44", "kind": "gamemisc", "verdict": "DEEP-RE"},
        "00402160": {"name": "model_field_0x48", "kind": "gamemisc", "verdict": "DEEP-RE"},
        "00402170": {"name": "model_field_0x4c", "kind": "gamemisc", "verdict": "DEEP-RE"},
        # ★ The reason VoxelGrid_cellAt3D (0x4d1950) is not an array index: it calls this
        # on its three indices BEFORE the bounds check, and this rotates (a, b) by
        # `house[+4] & 3` and then mirrors b when `house[+8]` is set. Every consumer of a
        # module grid after the house pass therefore sees a TRANSFORMED grid; the grid
        # tables themselves are raw, because the house pass writes them before it stores
        # either field. Proven by the furnishing port: 6,759 record positions, 323 of 323
        # houses (Docs/RE_town_furnish.md §5b.1).
        "004d8f90": {"name": "VoxelGrid_rotateIndices", "kind": "gamemisc",
                     "verdict": "DEEP-RE"},
        # the two fixed-point accumulators the town prop builds chain. 0x405690 adds an
        # INT (`shld/shl 0x10` then a 64-bit add); 0x4ce290 adds a DOUBLE, and does it as
        # `fixed - ftol2(d * -65536.0)` -- the multiplier really is negative, so the
        # truncation is taken on the negated product (lesson 16: ftol2 truncates).
        "00405690": {"name": "fixed16_addInt", "kind": "gamemisc", "verdict": "DEEP-RE"},
        "004ce290": {"name": "fixed16_addDouble", "kind": "gamemisc", "verdict": "DEEP-RE"},
        # `vector::size()` for the site's 0x188-byte prop records -- the 0x5397829d
        # reciprocal and `sar 7` divide by 0x188. The house pass saves it at 0x4e6546 so
        # it knows where its own props begin. Proven by the divisor, not by its callers.
        "0041cb40": {"name": "propvec_size", "kind": "gamemisc", "verdict": "DEEP-RE"},
        # its MSVC alignment-NOP body split, pinned here because adjudicate_none.py stamped
        # the fragment with the parent's OLD name and must not be re-run on a structured tree
        "0051210a": {"name": "camp_populator__split_51210a", "kind": "game",
                     "verdict": "DEEP-RE"},
        # the creature-species containers the dungeon assembler builds in its prologue and
        # the three helpers that index them (Docs/RE_dungeon_species.md, gated 6/6).
        # 402bb0 / 41fff0 / 4e28d0 are vector<int> operator[] / size / empty: proven by the
        # three index sites (boss 0x5079cd, patrol 0x508c4a, companion 0x509292) each doing
        # `list[rand() % size(list)]` guarded by `empty(list)`.
        "00402bb0": {"name": "int_vector_at", "kind": "gamemisc", "verdict": "DEEP-RE"},
        "0041fff0": {"name": "int_vector_size", "kind": "gamemisc", "verdict": "DEEP-RE"},
        "004e28d0": {"name": "int_vector_empty", "kind": "gamemisc", "verdict": "DEEP-RE"},
        # the 0x18 species GROUP (two vector<int>) and the vector of them
        "004f7540": {"name": "SpeciesGroup_ctor", "kind": "gamemisc", "verdict": "DEEP-RE"},
        "005285c0": {"name": "SpeciesGroup_push_back", "kind": "gamemisc", "verdict": "DEEP-RE"},
        # NOT a species list, despite sitting one instruction from the mob spawn call: a
        # 12-instruction vec4 float store and its cvttss2si companion (0x5074f7/0x507503).
        "004010b0": {"name": "vec4_store_f32", "kind": "gamemisc", "verdict": "DEEP-RE"},
        "004e1200": {"name": "vec4_f32_to_i32", "kind": "gamemisc", "verdict": "DEEP-RE"},
        # site+0x48, the assembler's FOURTH container: the two structure markers (kind-4
        # entrance = type 5 @0x5048c7, boss = type 6 @0x507aa0). Those are the only two
        # pushes into it in the whole 36 KB body (Docs/RE_dungeon_markers.md, 12/12).
        "005284a0": {"name": "StructureMarker_push_back", "kind": "gamemisc",
                     "verdict": "DEEP-RE"},
        "004f7490": {"name": "StructureMarker_ctor", "kind": "game", "verdict": "DEEP-RE"},
        # was filed lib/_library as `check_type_low5_active`, which describes the body but
        # misfiles it: it is the BLOCK-SOLID predicate the world applies to a
        # World_getBlockAt result -- `(block[3] & 0x1f) not in (0, 2)`. Proven on both of the
        # assembler's probes: the mob pass (757/757) and the wall stub (480/480).
        "004061f0": {"name": "Block_isSolid", "kind": "gamemisc", "verdict": "DEEP-RE"},
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
        # OVERTURNS this repo's own ADJUDICATION.md rows, which ruled BOTH candidate names
        # "NEITHER -- x87/CRT float conversion helper". It is neither a helper nor CRT: a
        # thiscall on the feature descriptor taking two 16.16 positions by pointer and
        # returning the normalised squared distance to the feature centre (d^2/r^2), with a
        # noise warp for every type outside {0xb, 0xc, 0xe}. The adjudication was made off
        # the body's float shape alone; the caller settles it -- the zone builder's candidate
        # grid rolls `rand()/32767 <= (1-w)^2 * 0.75` against it (Docs/RE_zone_grid.md), and
        # cw_rederive's port reproduces the live return BIT-EXACTLY at 1,989 rolled cells
        # over 51 zones (gate_zone_grid.py), on top of its own 91,880/91,880 direct-call gate.
        "0052c820": {"name": "World_objectFalloffWeight", "kind": "game", "verdict": "DEEP-RE"},
        # ---- the overworld creature scatter, 0x51ed60-0x51f981 (Docs/RE_zone_creatures.md,
        # tools/gate_zone_creatures.py 211/211 over 56 zones and 324 spawned leaders).
        #
        # The two range tables. Both are jump tables keyed on the creature species id, and
        # both are read straight out of the image by the gate. 0040efc0 is additionally
        # LIVE-proven: `count = rand()%(hi-lo+1) + lo - 1` reproduces all 167 captured pack
        # sizes from each leader's own recorded group roll, and only (1,1)/(1,3)/(1,5) exist.
        "0040efc0": {"name": "species_groupRange", "kind": "game", "verdict": "DEEP-RE"},
        # 0040f0a0 is the same shape one table over; its (lo,hi) feeds `rand()%(hi-lo+1)+lo`
        # stored to the entity's +0x34, the field the ctor 004e0f40 initialises to 1 (level).
        "0040f0a0": {"name": "species_levelRange", "kind": "game", "verdict": "DEEP-RE"},
        # Named from the CALL SITE, which is ground truth for what the return value is:
        # 0051f26c stores it to entity+0x2c, and +0x2c is (a) the argument to both range
        # tables above and (b) the field the material branches overwrite with the literal
        # species ids 0x78-0x82. So the return is a creature species id. The body is NOT yet
        # decoded -- what IS proven about it is its stream cost: an exhaustive rand-site
        # census of all 5,775 bytes finds exactly ONE site (0x52a712), and the capture shows
        # exactly one unrecorded draw after every one of the 324 live leader spawns.
        "005290d0": {"name": "World_pickCreatureSpecies", "kind": "game", "verdict": "DEEP-RE"},
        # Same field, same tables, called once per pack member at 0x51f8bd with the member's
        # block position and the LEADER's species as the fourth argument. 11 rand sites; 0 or
        # 1 spent per call (fired in 5 of 96 captured members). Body not yet decoded.
        "0052bfa0": {"name": "World_pickPackMemberSpecies", "kind": "game",
                     "verdict": "DEEP-RE"},
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
