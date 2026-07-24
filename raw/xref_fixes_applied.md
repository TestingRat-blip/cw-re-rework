# Fixes applied to `CW_CONFIDENCE_XREF.md`

Backup: `CW_CONFIDENCE_XREF.md.bak`. 16 rows changed.

| addr | was | kind | now | kind | why |
|---|---|---|---|---|---|
| `0x513760` | lib_fn_513760 | lib | **UNRESOLVED_513760** | **gamemisc** | cited line +1: 'Town road-segment writer id -- unknown since the FUN_00513760 falsification'. The doc says UNKNOWN, so lib_fn_/lib overstated it |
| `0x522290` | lib_fn_522290 | lib | **feature_count_range** | **game** | cited line +5: 'feature-count range (site climate -> [1,10])'. Was filed lib |
| `0x4f5cc0` | lib_fn_4f5cc0 | lib | **sort_routine_4f5cc0** | **gamemisc** | cited line +5 calls it 'the SORT'; cw_callgraph.py calls it connection_sort. It is a sort routine, so lib is unsupported, but which sort is unproven |
| `0x5286a0` | lib_fn_5286a0 | lib | **UNRESOLVED_5286a0** | **gamemisc** | cited line +3 only lists it under 'distance calc stubbed'. No identity established; lib was never evidenced |
| `0x54a910` | lib_fn_54a910 | lib | **ftol_round_to_int** | **lib** | cited line +5: 'lib_fn_54a910 = round-to-int'. Kind lib is right; the name was a placeholder |
| `0x549c50` | _(none — SC left it FUN_)_ | lib | **world_create** | **game** | cited line +5: 'world-load / init driver (calls seed-init twice: 123 then 42069)'. The xref had no name at all and filed it lib |
| `0x4286f0` | World_getTileAtCoords | gamemisc | **World_getTileAtCoords** | **gamemisc** | address absent at CW_RE_SOURCE.md:4395, but the label is independently confirmed from the decompiled body (see ADJUDICATION.md). Label stands; citation unreliable |
| `0x4f2ee0` | lib_fn_4f2ee0 | lib | **house_furniture_placer** | **game** | cited line +3: 'indoor/house furniture (BedTable 0x14, Shelf1-3 0x20-0x22, Bench, Stool + jitter)'. Was filed lib |
| `0x5104e0` | lib_fn_5104e0 | lib | **structure_populator_CONTESTED** | **game** | cited line +1: "'Structure populator': FUN_00500300 (loot doc) vs FUN_005104e0 (spawns doc)" -- the docs disagree, so the name records that it is contested. Was filed lib |
| `0x52a830` | lib_fn_52a830 | lib | **dungeon_scatter_emitter** | **game** | the row's own note reads 'DUNGEON scatter (shelf/table/stool/chest) emitter'; corroborated by CW_DUNGEON_DECORATION_RE.md:23. Was filed lib |
| `0x4f8570` | lib_fn_4f8570 | lib | **temperature_blend** | **game** | cited line +1: 'temperature blend (site+0xc weighted avg) | 40/40 live'. Was filed lib |
| `0x4e28e0` | lib_fn_4e28e0 | lib | **town_builder** | **game** | cited line +1: 'town builder (plan-then-populate, 14 phases)'. Was filed lib |
| `0x522840` | World_computeSlopeShade | gamemisc | **biome_border** | **game** | cited line +5: 'biome-border FUN_00522840 100/100'. The old name World_computeSlopeShade was simply wrong, not merely mis-kinded |
| `0x4ffbf0` | lib_fn_4ffbf0 | lib | **ground_knoll** | **game** | cited line +1 says 'tree/canopy ellipsoid ... 60521/60521', but that phrasing was CORRECTED 2026-07-18 to ground KNOLL (CWGEN_PORT_FOREST_CPP_NEXT.md:41: 'knoll (4ffbf0 - geometry identical to cw_forest.knoll_writes)'). Geometry unchanged, naming only |
| `0x523380` | pointSegmentDistanceSq | gamemisc | **pointSegmentDistanceSq** | **gamemisc** | cited line +5 confirms 'point-to-segment FUN_00523380'. Label already correct; citation repaired only |
| `0x54a946` | ftol2_round | lib | **ftol_trunc** | **lib** | cited line +2: 'TRUNCATE toward zero (proven: 303/303 exact 16.16 positions)'. The old name ftol2_round asserted ROUNDING -- the opposite. Corroborated at CW_RE_SOURCE.md:783 and :4593 |
