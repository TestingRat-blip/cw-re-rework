# Adjudication of the label conflicts

Every conflict between `cw_callgraph.py` (**A**) and `CW_CONFIDENCE_XREF.md` (**B**),
settled against the decompiled body -- or the raw bytes where the decompiler lied.

## Verdicts

| verdict | count |
|---|---|
| B | 49 |
| NEITHER | 31 |
| A | 15 |
| UNRESOLVED | 10 |
| COMPATIBLE | 4 |
| A-KIND | 4 |

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
| `0x004013d0` | chunk_origin_lookup | getElemPtr4 | **B** | getElemPtr4 | `return this + i*4` -- a generic element pointer; no chunk semantics |
| `0x004013f0` | model_db_lookup | std_vector_int_at | **B** | std_vector_int_at | bounds-checked `if (0<=i && i < (end-begin)>>2) return begin[i]` -- vector index |
| `0x00402990` | size3_write | vec3_store | **B** | vec3_store | stores 3 dwords, returns this; A's `size3_write` is the same thing, less precise |
| `0x00405f20` | column_record_read | Column_getBlockChecked | **B** | Column_getBlockChecked | checked column read with sentinel fallbacks |
| `0x00405fd0` | occupancy_probe | World_getBlockAt | **B** | World_getBlockAt | column lookup + Z bounds, returns block or sentinel |
| `0x00406050` | column_walkup | World_getBlockFloat | **UNRESOLVED** | - | 64-bit coordinate normalisation; neither name clearly fits |
| `0x00406100` | column_record_lookup | Chunk_getColumnAt | **B** | Chunk_getColumnAt | coord -> chunk -> column lookup, 37 callers |
| `0x00406290` | zone_built_check | Region_getChunkCell | **B** | Region_getChunkCell | coord bounds, >>6 to chunk, &63 to cell |
| `0x00411090` | monster_level_formula | formula_inverse | **B** | formula_inverse | x87/CRT float conversion helper; B names it correctly |
| `0x00413420` | column_allocator | resize_dword_array | **B** | resize_dword_array | STL allocator plumbing; B names it correctly |
| `0x00413710` | loot_copy | struct_copy0x118 | **COMPATIBLE** | ItemData_copy (0x118) | field-wise copy of the 0x118 ItemData struct -- A gives the role, B the structure; both correct |
| `0x0041fe60` | voxel_low_store | VoxelColumn_setBlock | **B** | VoxelColumn_setBlock | writes a 4-byte voxel, grows the column; but kind is GAME, not lib |
| `0x0041ff00` | voxel_writer | writeVoxel | **COMPATIBLE** | writeVoxel | three-way conflict; single-voxel write via column lookup. `World_fillVoxelColumn` overstates it -- it writes at one Z |
| `0x0041ff00` | writeVoxel | World_fillVoxelColumn | **COMPATIBLE** | writeVoxel | three-way conflict; single-voxel write via column lookup. `World_fillVoxelColumn` overstates it -- it writes at one Z |
| `0x00427000` | entity_stack_push | game_inventoryAccumulateCount | **UNRESOLVED** | - | not individually reviewed; B is a placeholder, A unproven |
| `0x00428590` | conn_edge_append | std_list_push_back_428590 | **NEITHER** | std_list_push_back (role: conn edge) | `_Xlength_error("list<T> too long")` -- VC11 <list>:1951 `_Incsize`. Identity is std::list::push_back; A's name is its caller-side role. Both capture something true |
| `0x004286f0` | tile_cell_lookup | World_getTileAtCoords | **B** | World_getTileAtCoords | same shape at 8x tile scale |
| `0x0042e090` | nearest_entity_in_region | World_findNearestEntityInRegio | **NEITHER** | - | x87/CRT float conversion helper; neither name reflects it |
| `0x0042f440` | temp_list_free | std_vector_free | **B** | std_vector_free | `operator_delete(*p)` then zeroes the 3 pointers -- vector deallocate |
| `0x00431400` | cub_loader_server | game_loadVoxelModelsFromDb | **COMPATIBLE** | loadVoxelModels | A and B agree in substance |
| `0x004496a0` | cub_decoder | decode | **UNRESOLVED** | - | no body: the address is not a function in our analysis |
| `0x004c84b0` | entity_init | lib_fn_4c84b0 | **A-KIND** | unproven ctor -- GAME | initialises fields to +0x184; an object ctor, not library code |
| `0x004d1950` | house_cell_tag | VoxelGrid_cellAt3D | **B** | VoxelGrid_cellAt3D | 3D bounds-checked grid index |
| `0x004d19f0` | village_road_field | World_sampleNoiseAt | **NEITHER** | - | x87/CRT float conversion helper; neither name reflects it |
| `0x004d23f0` | cell_read | lib_fn_4d23f0 | **A-KIND** | checked cell read -- GAME | bounds-checked read with sentinel globals |
| `0x004d2500` | solid_box | lib_fn_4d2500 | **B** | lib_fn_4d2500 | x87/CRT float conversion helper; B has the right kind but a placeholder name |
| `0x004d44c0` | leaf_disk | lib_fn_4d44c0 | **B** | lib_fn_4d44c0 | x87/CRT float conversion helper; B has the right kind but a placeholder name |
| `0x004d4820` | tree_root_branch_sphere | lib_fn_4d4820 | **B** | lib_fn_4d4820 | x87/CRT float conversion helper; B has the right kind but a placeholder name |
| `0x004d5a80` | terrain_gradient | World_sampleTerrainGradient | **NEITHER** | - | x87/CRT float conversion helper; neither name reflects it |
| `0x004d5d30` | valueNoise2D | valueNoise2D | **NEITHER** | - | x87/CRT float conversion helper; neither name reflects it |
| `0x004d5d30` | value_noise2d | valueNoise2D | **NEITHER** | - | x87/CRT float conversion helper; neither name reflects it |
| `0x004d6670` | model_commit | lib_fn_4d6670 | **NEITHER** | std_vector_push_back (with EH) | SEH frame + vector grow/append |
| `0x004d7870` | region_tier | lib_fn_4d7870 | **A** | region_tier | distance from world centre (512,512), sqrt, tier = 2 - d*-0.75 |
| `0x004d83a0` | seed_init_cascade | seedInit | **NEITHER** | - | STL allocator plumbing; neither name reflects it |
| `0x004e0740` | deco_site_accept | lib_fn_4e0740 | **B** | lib_fn_4e0740 | STL allocator plumbing; B has the right kind but a placeholder name |
| `0x004e19f0` | plot_sort | lib_fn_4e19f0 | **UNRESOLVED** | - | not individually reviewed; B is a placeholder, A unproven |
| `0x004e20d0` | npc_schedule_a | lib_fn_4e20d0 | **UNRESOLVED** | - | generic 7-field copy; neither name is evidenced |
| `0x004e28e0` | townBuilder | lib_fn_4e28e0 | **A** | town_builder | proven plan-then-populate village/ruins builder |
| `0x004e28e0` | town_builder | townBuilder | **A** | town_builder | proven plan-then-populate village/ruins builder |
| `0x004f2be0` | role_seed_vector | std_vector_push_back_int | **B** | std_vector_push_back_int | grow-if-full then append 4-byte element |
| `0x004f2c50` | npc_schedule_b | lib_fn_4f2c50 | **NEITHER** | std_vector_push_back (32B elem) | `& 0xffffffe0` element stride; A's `npc_schedule_b` wrong |
| `0x004f3490` | prop_descriptor_b | lib_fn_4f3490 | **UNRESOLVED** | - | not individually reviewed; B is a placeholder, A unproven |
| `0x004f3630` | prop_descriptor_a | lib_fn_4f3630 | **A-KIND** | unproven ctor -- GAME | large struct init + copy; B's `lib` kind unsupported |
| `0x004f36f0` | plot_array_alloc | lib_fn_4f36f0 | **UNRESOLVED** | - | not individually reviewed; B is a placeholder, A unproven |
| `0x004f5cc0` | connection_sort | lib_fn_4f5cc0 | **UNRESOLVED** | - | not individually reviewed; B is a placeholder, A unproven |
| `0x004f79f0` | vec_sub_type10 | lib_fn_4f79f0 | **NEITHER** | int128_sub | 4x32 subtract with borrow propagation = ONE 128-bit integer, not a vector |
| `0x004f82d0` | rock_height_color | lib_fn_4f82d0 | **B** | lib_fn_4f82d0 | x87/CRT float conversion helper; B has the right kind but a placeholder name |
| `0x004f84a0` | grid_cell_accessor | lib_fn_4f84a0 | **A-KIND** | grid_cell_accessor -- GAME | 3D grid index, stride 2, into the +0x18 buffer |
| `0x004f8570` | temperature | lib_fn_4f8570 | **B** | lib_fn_4f8570 | x87/CRT float conversion helper; B has the right kind but a placeholder name |
| `0x004f8570` | temperature_blend | temperature | **NEITHER** | - | x87/CRT float conversion helper; neither name reflects it |
| `0x004f8b40` | humidity_blend | lib_fn_4f8b40 | **B** | lib_fn_4f8b40 | x87/CRT float conversion helper; B has the right kind but a placeholder name |
| `0x004f9010` | corridor_connect | lib_fn_4f9010 | **A** | corridor_connect | CW_RE_MASTER_INDEX.md:159 -- bit-exact vs captures |
| `0x004f9450` | surfaceCover | lib_fn_4f9450 | **B** | lib_fn_4f9450 | x87/CRT float conversion helper; B has the right kind but a placeholder name |
| `0x004f9450` | surface_cover_placer | surfaceCover | **NEITHER** | - | x87/CRT float conversion helper; neither name reflects it |
| `0x004f9b70` | baseHeight | World_generateBiomeSample | **NEITHER** | - | x87/CRT float conversion helper; neither name reflects it |
| `0x004f9b70` | base_height_carve_level | baseHeight | **NEITHER** | - | x87/CRT float conversion helper; neither name reflects it |
| `0x004fae90` | rock_base_color | lib_fn_4fae90 | **B** | lib_fn_4fae90 | x87/CRT float conversion helper; B has the right kind but a placeholder name |
| `0x004fb480` | creature_base_stats | lib_fn_4fb480 | **UNRESOLVED** | - | not individually reviewed; B is a placeholder, A unproven |
| `0x004fc180` | bldg_asm_role4 | lib_fn_4fc180 | **B** | lib_fn_4fc180 | STL allocator plumbing; B has the right kind but a placeholder name |
| `0x004fd920` | bldg_asm_role2 | lib_fn_4fd920 | **B** | lib_fn_4fd920 | x87/CRT float conversion helper; B has the right kind but a placeholder name |
| `0x004fde90` | bldg_asm_role35 | lib_fn_4fde90 | **B** | lib_fn_4fde90 | STL allocator plumbing; B has the right kind but a placeholder name |
| `0x004febd0` | chunk_to_region_nearest | World_findNearestFeatureCell | **NEITHER** | - | x87/CRT float conversion helper; neither name reflects it |
| `0x004ff340` | fill_box | lib_fn_4ff340 | **A** | fill_box | triple nested loop calling writeVoxel with material 0x46 |
| `0x004ff3f0` | forestMound | lib_fn_4ff3f0 | **B** | lib_fn_4ff3f0 | x87/CRT float conversion helper; B has the right kind but a placeholder name |
| `0x004ffbf0` | tree_canopy_ellipsoid | lib_fn_4ffbf0 | **B** | lib_fn_4ffbf0 | x87/CRT float conversion helper; B has the right kind but a placeholder name |
| `0x00500300` | dungeonAssembler | lib_fn_500300 | **A** | dungeon_assembler | bit-exact proven dungeon assembler |
| `0x00500300` | dungeon_assembler | dungeonAssembler | **A** | dungeon_assembler | bit-exact proven dungeon assembler |
| `0x00509e40` | ambient_spawner | stl_fn_509e40 | **B** | stl_fn_509e40 | VC11 STL diagnostic string (verified in VC/include); B has the right kind but a placeholder name |
| `0x0050b870` | genSite | lib_fn_50b870 | **B** | lib_fn_50b870 | STL allocator plumbing; B has the right kind but a placeholder name |
| `0x0050b870` | region_site_gen | genSite | **NEITHER** | - | STL allocator plumbing; neither name reflects it |
| `0x0050bd60` | grass_ellipsoid | lib_fn_50bd60 | **B** | lib_fn_50bd60 | x87/CRT float conversion helper; B has the right kind but a placeholder name |
| `0x0050e080` | feature_grid_gen | featureGrid | **NEITHER** | - | VC11 STL diagnostic string (verified in VC/include); neither name reflects it |
| `0x005104e0` | structure_populator_contested | lib_fn_5104e0 | **B** | lib_fn_5104e0 | VC11 STL diagnostic string (verified in VC/include); B has the right kind but a placeholder name |
| `0x00513400` | textured_box | lib_fn_513400 | **B** | lib_fn_513400 | x87/CRT float conversion helper; B has the right kind but a placeholder name |
| `0x00513760` | forestTreeBuilder | lib_fn_513760 | **B** | lib_fn_513760 | VC11 STL diagnostic string (verified in VC/include); B has the right kind but a placeholder name |
| `0x00513760` | plant_blob_generator | forestTreeBuilder | **NEITHER** | - | VC11 STL diagnostic string (verified in VC/include); neither name reflects it |
| `0x00518630` | zoneBuilder | lib_fn_518630 | **A** | zone_builder | the proven zone builder; B's `lib_fn_518630` is badly wrong |
| `0x00518630` | zone_builder | zoneBuilder | **A** | zone_builder | the proven zone builder; B's `lib_fn_518630` is badly wrong |
| `0x00522290` | feature_count_range | lib_fn_522290 | **A** | feature_count_range | climate floats at +0xc/+0x10 select (min,max) count pairs |
| `0x00522320` | grass_base_color | lib_fn_522320 | **B** | lib_fn_522320 | x87/CRT float conversion helper; B has the right kind but a placeholder name |
| `0x00522840` | biomeBorder | World_computeSlopeShade | **NEITHER** | - | x87/CRT float conversion helper; neither name reflects it |
| `0x00522840` | biome_border | biomeBorder | **NEITHER** | - | x87/CRT float conversion helper; neither name reflects it |
| `0x00522cc0` | dist2_16_16 | stub_securityCookie | **A** | dist2_16_16 | DISASSEMBLED: `shld edi,esi,0x10` + `sub`/`sbb` = 64-bit 16.16 fixed-point squared distance. Ghidra collapsed the body to the /GS epilogue; B's `stub_securityCookie` is that artifa |
| `0x00522d80` | site_query_warp | World_terrainOffset2D | **NEITHER** | - | x87/CRT float conversion helper; neither name reflects it |
| `0x00522e20` | wetness | World_waterProximityInfluence | **NEITHER** | - | x87/CRT float conversion helper; neither name reflects it |
| `0x00522e20` | wetness_flag_avg | wetness | **NEITHER** | - | x87/CRT float conversion helper; neither name reflects it |
| `0x00523380` | point_seg_dist2 | pointSegmentDistanceSq | **NEITHER** | - | x87/CRT float conversion helper; neither name reflects it |
| `0x005234b0` | seg_carve | lib_fn_5234b0 | **A** | seg_carve | CW_RE_MASTER_INDEX.md:159 -- bit-exact vs captures |
| `0x005236d0` | room_carve | lib_fn_5236d0 | **A** | room_carve | CW_RE_MASTER_INDEX.md:159 -- bit-exact vs captures |
| `0x00523b90` | vert_gradient | lib_fn_523b90 | **B** | lib_fn_523b90 | x87/CRT float conversion helper; B has the right kind but a placeholder name |
| `0x00523d80` | landMask | lib_fn_523d80 | **B** | lib_fn_523d80 | x87/CRT float conversion helper; B has the right kind but a placeholder name |
| `0x00523d80` | land_mask | landMask | **NEITHER** | - | x87/CRT float conversion helper; neither name reflects it |
| `0x00524540` | model_entity_place | lib_fn_524540 | **B** | lib_fn_524540 | VC11 STL diagnostic string (verified in VC/include); B has the right kind but a placeholder name |
| `0x00528450` | prop_scatter | lib_fn_528450 | **NEITHER** | std_list_push_back | same VC11 <list> signature; A's `prop_scatter` is wrong |
| `0x005287b0` | prop_try_place | lib_fn_5287b0 | **UNRESOLVED** | - | not individually reviewed; B is a placeholder, A unproven |
| `0x00528bf0` | loot_armor | lib_fn_528bf0 | **B** | lib_fn_528bf0 | STL allocator plumbing; B has the right kind but a placeholder name |
| `0x0052a760` | loot_single_item | lib_fn_52a760 | **B** | lib_fn_52a760 | CRT memory/string primitive; B has the right kind but a placeholder name |
| `0x0052b470` | equipment_roller | lib_fn_52b470 | **B** | lib_fn_52b470 | STL allocator plumbing; B has the right kind but a placeholder name |
| `0x0052bf40` | rarityRoll | lib_fn_52bf40 | **A** | rarityRoll | `rand()%(n+1)`, +1 at 1/100, 1/1000, 1/10000, clamped to 4 -- rarity tiers |
| `0x0052c4e0` | loot_weapon | lib_fn_52c4e0 | **B** | lib_fn_52c4e0 | STL allocator plumbing; B has the right kind but a placeholder name |
| `0x0052c820` | featureFalloff | World_objectFalloffWeight | **NEITHER** | - | x87/CRT float conversion helper; neither name reflects it |
| `0x0052c820` | feature_falloff | featureFalloff | **NEITHER** | - | x87/CRT float conversion helper; neither name reflects it |
| `0x0052cd50` | climateGate | World_sampleTerrainHeight | **NEITHER** | - | x87/CRT float conversion helper; neither name reflects it |
| `0x0052cd50` | climate_river_gate | climateGate | **NEITHER** | - | x87/CRT float conversion helper; neither name reflects it |
| `0x0052d030` | ground_color | lib_fn_52d030 | **B** | lib_fn_52d030 | x87/CRT float conversion helper; B has the right kind but a placeholder name |
| `0x0052d5d0` | cold_humid_color | lib_fn_52d5d0 | **B** | lib_fn_52d5d0 | x87/CRT float conversion helper; B has the right kind but a placeholder name |
| `0x0052d870` | snow_color | lib_fn_52d870 | **B** | lib_fn_52d870 | x87/CRT float conversion helper; B has the right kind but a placeholder name |
| `0x0052d990` | water_depth | World_computeClimateColor | **NEITHER** | - | x87/CRT float conversion helper; neither name reflects it |
| `0x0052db90` | roadColor | lib_fn_52db90 | **B** | lib_fn_52db90 | x87/CRT float conversion helper; B has the right kind but a placeholder name |
| `0x0052dee0` | falloff_squared_road_probe | World_falloffSquared | **B** | World_falloffSquared | `f=1-falloff; f<=0?0:f*f`; A's `road_probe` adds unsupported semantics |
| `0x005322d0` | region_init_60kb_red_herring | lib_fn_5322d0 | **B** | lib_fn_5322d0 | STL allocator plumbing; B has the right kind but a placeholder name |
| `0x0054a910` | ftol_helper | lib_fn_54a910 | **A** | ftol_helper | x87 ROUND gated on the SSE2 flag = the CRT `_ftol2`; B's name is a placeholder but B's `lib` kind is right |
| `0x0054a946` | ftol_trunc | ftol2_round | **B** | ftol2_round | x87/CRT float conversion helper; B names it correctly |
