# The overworld prop scatter — derived record for record

Phase 2 of `WORLDGEN_RE_PLAN.md` said to start at `FUN_004c8420`, "the Phase-12
prop/decoration entity emitter". That is wrong — `004c8420` is `DungeonProp_copy_0x188`,
the record's copy ctor (relabelled 2026-07-24 while doing the dungeon lights). This is
where the layer actually lives.

```
python tools/frida_zone_props2.py    # 56 zones -> raw/zone_props2_capture.json
python tools/gate_zone_props2.py     # 7,256 checks
```

**Status:** the zone builder's parity emitters are derived record-for-record from the
`rand()` stream — **336 + 4,364 + 2,556 checks green over 56 live zones**. Two emitters
remain: the town builder, and a fifth zone emitter this session found.

---

## ⚠ Two corrections to the first cut

The first pass (`frida_zone_props.py` / `gate_zone_props.py`, still in the tree and still
passing what it actually claims) hooked `FUN_004d6670`, the *out-of-line* `push_back` on
the 0x188 prop record. Both of its headline claims were shaped by that choice.

**1. "Exactly one prop per zone" is an artifact.** `FUN_004e0740`'s second stage pushes
into the *same* `site+0xc` through an **inlined** `push_back`, so those records were
invisible. Reading the vector instead gives 0–5 props on an odd zone:

```
props per odd zone: 0 0 1 1 1 1 1 1 2 2 2 2 3 3 3 3 4 4 4 4 4 4 4 4 5 5 5 5
```

150 records across the 56 zones, of which only 98 went through the out-of-line call.

**2. The caller census that scoped the layer is incomplete.** Asking who calls
`FUN_004d6670` finds only the emitters whose `push_back` the compiler left out of line.
The census that actually holds is **who calls `FUN_004ce8e0`** — `vector<PropRecord>::
_Reserve`, stride 0x188 — because an inlined `push_back` still has to call it to grow:

| caller of `004ce8e0` | what it is |
|---|---|
| `004d6670` | the out-of-line `push_back` itself, and its nine callers |
| `004e0740` | stage 2, inlined — this document |
| `005104e0` / `0051210a` | **a fifth zone-builder emitter, inlined — missed entirely** |
| `00524540` | `creature_spawn_builder` |

So the open set is not "the zone builder and the town builder". It is the town builder
**and `FUN_005104e0`**, which the old census could not see. Two zones in the sample share
their vector with an emitter this gate does not derive, and both are reported rather than
skipped.

⚠ **Corrected 2026-07-24:** those residual records were first reported as the town
builder's. They are not — the gate now attributes them by the **recorded return address**,
and all 44 in `(33020, 32660)` land inside `FUN_00500300`, the dungeon assembler. That
zone holds a dungeon, not a town. The town builder's own three census rows
(`004e310a` / `004eaa7a` / `004ee3aa`) are not emit sites either: each is an
`8d 9b 00 00 00 00` alignment NOP an `eb 06` hops over — the points where Ghidra split
the builder's ~64 KB body. Its real surface is 56 push sites (`RE_town_props.md`).

This is the same blind spot in a different guise as the one the dungeon work hit: a
census over an out-of-line helper undercounts wherever MSVC inlined it. Census over the
helper the inlined form still needs.

## Which emitter runs: `(zx + zz) & 1`, and it is literal

The first cut observed this correlation 54/54. It is not a correlation. At `0x51cb66`
the zone builder computes

```
0051cb66  mov  eax, [ebp-0x1364]      ; zz
0051cb6c  add  eax, ecx               ; + zx
0051cb6e  and  eax, 0x80000001        ; signed % 2
0051cb7a  mov  [ebp-0x1360], eax
0051cb80  je   0x51cd6d               ; parity 0 -> skip FUN_004e0740 entirely
```

and emitter B reads the same slot at `0x51e5c7` (`cmp [ebp-0x1360], 0; jne skip`).
One `(zx + zz) % 2`, two consumers.

## Emitter B — even parity, `0x51e5c7`

Unconditional; it runs no placement test and always emits exactly one record.

```
x   = zx*256 + 0x10 + rand() % 0xe0          draw @0x51e5d4   (X first)
y   = zz*256 + 0x10 + rand() % 0xe0          draw @0x51e5f3
col = Chunk_getColumnAt(x, y);  if (!col) give up
z   = col.baseZ + col.count;  while (!solid(x,y,z)) z--        (0x51e647)
rec = { type 0, pos (x+.5, y+.5, z+1), dir rand()%4, size (2,2,8) }
```

`type 0` is `goddess2`, the client's `Statue` entity. The `solid` test is
`(block[3] & 0x1f) not in {0, 2}` — a third independent call site for the predicate the
mob pass and the wall stub already proved.

## Emitter `FUN_004e0740` — odd parity, via a retry loop at `0x51cbb0`

The caller tries up to **10** candidate anchors. Each attempt draws **Y first**:

```
y = zz*256 + 0x30 + rand() % 0xa0            draw @0x51cbbb
x = zx*256 + 0x30 + rand() % 0xa0            draw @0x51cbf6
```

so props land in the middle 160 of the zone's 256 blocks. If the zone's site type is
1 or 5 the attempt is additionally rejected when `World_objectFalloffWeight(y, x) < 1.0`
(`0x51cc8e`). The anchor's Z is the column top, `(col.baseZ + col.count) << 16`.

Both emitters bias positions by `+0x8000` — `ftol(-32768.0)` at `0x51cb86` and
`0x51e676` — so a prop sits at the **centre** of its block, not its corner.

`FUN_004e0740(world, site, int64 pos[3])` then:

* **river gate.** Returns immediately when `1.0 - climateGate(x,y)*50.0 >= 0.0`, i.e.
  `gate <= 0.02` — the same constant the river RE proved. 2 of the 26 odd zones in the
  sample placed nothing at all.
* **Stage 1.** Draws `dir = rand()%4` once (`0x4e0825`), then walks a **3×3 block grid**
  offset from the anchor — X outer `0..2`, Y inner `0..2` — testing each with
  `FUN_005287b0` and pushing the **first** that passes: type `0x41`, size
  `(2.4, 2.4, 0.5)`. Returns whether anything was placed.
* **Stage 2.** Only if stage 1 placed something. Four candidates at **±3.5 blocks from
  the anchor** (`{0,7}*0x10000 - ftol(229376.0)`), X outer, Y inner. Each draws a type
  then a direction, is tested, and is pushed if it passes — through the inlined
  `push_back`, into the same `site+0xc`:

  | `rand()%4` | id | size |
  |---|---|---|
  | 1 | `0x10` | (1, 1, 0.5) |
  | 2 | `0x0c` | (3, 3, 1) |
  | 3 | `0x45` | (2, 2, 0.1) |
  | 0 (else) | `0x42` | (4, 4, 3) |

  Both draws happen **before** the test, so a rejected candidate still burns two.
  Stage 2 offsets from the **anchor**, not from stage 1's accepted position.

## `FUN_005287b0` — the placement test, and it is pure

Filed `lib_fn_5287b0` under `_library`. It is game code, and it is the whole reason this
layer is portable: **a pure function of the finished terrain voxels**, no rand, no order
state. `FUN_005287b0(world, rec, site, flag)`:

1. Half-extents `hx = ftol(sizeX*0.5*65536)`, `hy` likewise, with **X and Y swapped when
   `dir & 1`** — an odd direction rotates the footprint 90°.
2. **Drop:** up to 50 times, if no block in the `x0..x1 × y0..y1` footprint at `z` is
   solid, `Z -= 1` block. Stops on the first solid.
3. **Raise:** up to 50 times, if any block in the footprint at `z` is solid, `Z += 1`.
   Stops when the layer is clear.
4. Reject if `Z <= 0`.
5. If `flag` (always 1 here): reject unless **every** block one layer below the footprint
   is solid — full support, no overhang.
6. Return `(block at the record's own position) & 0x1f != 2` — **not standing in water**.

It **rewrites the record's Z in place**; the caller pushes the mutated record. The gate
checks that separately (2,556 invariants): only Z ever changes, always by a whole number
of blocks, never more than 50, and an accepted record always sits above Z = 0.

## What the gate proves

`tools/gate_zone_props2.py`, over `raw/zone_props2_capture.json` (56 zones, seed 42069):

| claim | checks |
|---|---|
| emitter B's record derived from its three draws | 336 |
| the retry loop's anchors + both `FUN_004e0740` stages, record for record, and the vector is exactly the accepted records in order | 4,364 |
| `FUN_005287b0` settles the record in place | 2,556 |

The two shared zones are named in the output, not silently dropped: in them the derived
records are still required to appear in the vector, in order, and the residual is counted
and attributed.

## Open, in order

1. ~~**`FUN_005104e0`**~~ — **DONE, `Docs/RE_5104e0_camp.md`.** It is `camp_populator`,
   the overworld encampment builder: it picks a camp kind from the feature descriptor with
   no rand at all, builds that kind's species groups, and turns each candidate position
   into either a camp structure (**`FUN_004e0740`'s two prop shapes verbatim**, plus a ring
   of `rand()%3+1` creatures) or a creature group. Gated over 99 firing zones, 2,742
   checks. The lead in the earlier version of this list was right, and is now proven.
2. ~~**The town builder's three emitters**~~ — **MAPPED, `Docs/RE_town_props.md`.** Those
   three are not emitters and not functions: each is an alignment NOP where Ghidra split
   `FUN_004e28e0`'s ~64 KB body. Its real surface is **56 push sites, 32 placement tests,
   16 spawn-builder calls, 170 rand sites**, and the layer's contract is now gated over
   67 towns (8,646 checks). Positions are still open.
3. **Emitters A and C** inside the zone builder, which no sampled zone reached. Their
   record content is already read off statically:
   * **A** (`0x51dbf5`): type `0x2d`, size `(4, 4, 5)`, `dir = rand()%4`, raised from its
     start position until it is in a non-solid block (`0x51db56` loop).
   * **C** (`0x51fcdb`): type `0x33` size `(1, 1, 8)` or type `0x32` size `(2, 2, 8)`
     chosen by a float compare against `[0x5586d8]`, and it builds a **string** on the way
     (`FUN_004cde40` × 3, `FUN_00406380`, `FUN_00402a40`) — a named prop, not a plain one.
   Read their gates statically rather than sampling blindly for them.
4. **Ids beyond the table.** `assets/props/prop_ids.json` stops at 0x37; `0x41`, `0x42`
   and `0x45` are unnamed. The client's type→slot table is the source the existing rows
   came from.

## Identities settled here

| addr | name | how |
|---|---|---|
| `005287b0` | `Prop_settleOnTerrain` | full disassembly + 2,556 live invariants; **was `lib_fn_5287b0` in `_library` — it is game code** |
| `004ce8e0` | `PropVector_reserve` | body is `vector::_Reserve` with stride 0x188; its five callers are exactly the prop pushers |
| `005104e0` | `camp_populator` | **was `lib_fn_5104e0` in `_library`**. Renamed once the encampment role was gated — see `RE_5104e0_camp.md` |
