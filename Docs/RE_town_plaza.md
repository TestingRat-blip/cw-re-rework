# The town builder's ROLE-0/7 plot — the sand plaza (`0x4ef248`–`0x4f0046`)

*RE'd, gated and **PORTED** 2026-07-28 (07-28h). Live gate: `tools/gate_town_plaza.py`,
**11,877 checks, 0 FAIL** over the 92 towns in `raw/town_props_capture*.json` (seed 42069).
Port: `townPlazaPass` in `src/worldgen/cw/CwTown.h`; ab-initio gate **`rederive_townplaza`
169/169**, cwgen_test hash `2D6C3B72E99E055E` -> **`CE700304401BFC57`**.*

**Seven rand sites, 56,181 draws over 855 sites — 24.6% of the 228,413 draws the rig
records inside `FUN_004e28e0`'s body**, and it holds `0x4ef7c8`, the largest single rand
site left in the builder at 52,811 draws. Reached the way the last six slices were:
disassembling the span of one hot site before budgeting for it and censusing the rand
sites inside it. **Seven for seven now.**

★ **And the census re-scoped it downwards, not upwards.** `0x4ef7c8` reads as a monster —
52,811 draws is 23% of the whole builder — and it is a *shade jitter on a voxel*. Every
single input the stage needs was already in a port, three of them under another name
(§7). The slice cost an afternoon.

---

## 0. ⚠ It is not in `FUN_004e28e0` according to Ghidra, and it is

`raw/Server.exe.meta.jsonl` puts `FUN_004e28e0` at **2,083 bytes** and starts three more
"functions" at `0x4e310a`, `0x4eaa7a` and `0x4ee3aa`. All three begin
`8d 9b 00 00 00 00` (`lea ebx, [ebx]`) and are jumped over by an `eb 06` two instructions
earlier: **MSVC alignment NOPs inside one body**, lesson 20's exact shape. The builder is
one function — the "64 KB builder" the handoff names — and `0x4ef7c8` is at offset 0xCEE8
inside it. Check the entry bytes before believing a boundary; `tools/nop_split_audit.py`
exists for this.

⚠ **CORRECTED 2026-07-29 — this section had the END wrong too, and for a different reason.**
It read `0x4e28e0`–`0x4f26e9` = 65,033 bytes off Ghidra's function boundary. The body's
`ret 8` is at **`0x4f2b42`**, so it is `0x4e28e0`–`0x4f2b45` = **66,149 bytes**, 1,116 more.
Lesson 20 was applied to the three interior splits and not to the boundary at the far end:
merging NOP-split fragments fixes where Ghidra cut a body in two, and says nothing about
where Ghidra decided the body stopped. `RE_town_ruin.md` §2 — the last stage in the builder
branches straight over the old end, and `frida_town_props.py` inherits the same wrong bound,
so seven rand sites there have never been recorded.

## 1. Where it sits

The plot loop that owns this stage is *not* the per-plot role chain the house and yard
passes hang off. It is its own loop, at `0x4ef248`:

```
if n <= 0: skip the whole stage                                   0x4ef250
for r in 0 .. n-1:                                                0x4ef260   X
    for c in 0 .. n-1:                                            0x4ef280   Z
        idx  = r + n*c                                            [ebp-0x5c8c], += n
        role = plots[idx][+0xc]
        if role != 0 and role != 7: next plot                     0x4ef28c / 0x4ef293
```

so it runs over the plots the verdict pass **declined** (role 0) and the **SAND** ones
(role 7) — the two roles nothing else in the builder does anything with. Same
r-outer / c-inner order and same `r + n*c` index as every other pass
(`RE_town_yard.md` §1, 59/59).

## 2. The seven rand sites

All draw counts are over the 92 captured towns.

| VA | form | fires | draws | towns |
|---|---|---|---|---|
| `0x4ef7c8` | `0.75 + rand()*0.1/32767` | once per **RING VOXEL** | **52,811** | 28 |
| `0x4ef938` | `rand() % 8 + 0xd` | the tree's `height`, once per site | 825 | 59 |
| `0x4ef94e` | `rand() % 6 + 7` | the tree's `size`, once per site | 825 | 59 |
| `0x4ef98b` | `rand() % 8` | prop 0 coin (`!= 0` builds) | 430 | 28 |
| `0x4efad9` | `rand() % 8` | prop 1 coin | 430 | 28 |
| `0x4efc37` | `rand() % 8` | prop 2 coin | 430 | 28 |
| `0x4efd85` | `rand() % 8` | prop 3 coin | 430 | 28 |

The census over `0x4ef248`–`0x4f0046` returns **exactly these seven** and nothing else;
the gate asserts that, so an eighth site cannot appear unnoticed.

## 3. The pass

`span = 256 / n`, so 51 for a village (`n = 5`) and 64 for a ruin (`n = 4`).

```
for each role-0 / role-7 plot (r, c):
  for qx in (0, 1):                                                0x4ef311
    for qz in (0, 1):                                              0x4ef330
      cx = zoneX + (r*256)/n + qx*(span/2) + span/4                 0x4ef330-0x4ef349
      cz = zoneZ + (c*256)/n + qz*(span/2) + span/4                 0x4ef34f-0x4ef37c
      if World_falloffSquared(desc, cx16, cz16) < 0.72: next        0x4ef3ad / 0x4ef3cf
      surf = first NON-SOLID Y at or above col(cx,cz)[+0x10]        0x4ef3d5-0x4ef442
      platform = surf
      if desc[+0x18] == 1:                       # a VILLAGE        0x4ef444
          if class(getBlockAt(cx, cz, surf-1)) != 0xb: next plot    0x4ef47a  -> 0x4efee5
          for dx in -8..8: for dz in -8..8:                         0x4ef490-0x4ef628
              if d2(dx,dz) > 64: skip
              platform = max(platform, surface(cx+dx, cz+dz))
          for dx in -8..8: for dz in -8..8:            # X outer     0x4ef643-0x4ef8e4
              if d2(dx,dz) > 64: skip
              s = surface(cx+dx, cz+dz)
              for y = s-1 .. platform:
                  if d2 >= 49:                                      0x4ef7b8
                      shade = 0.75 + rand()*0.1/32767               0x4ef7c8
                      block = Block(lib_fn_52db90(X, Z, y, shade), class 6, 0)
                  else:
                      block = lib_fn_4f9450(cx, cz, platform, temp, humid, 0, 0)
                  writeVoxel(X, Z, y, block)                        0x4ef888
      wet = World_columnHumidity(cx, cz)                            0x4ef900
      if platform > 1:                                              0x4ef927
          height = rand() % 8 + 0xd                                 0x4ef938
          size   = rand() % 6 + 7                                   0x4ef94e
          lib_fn_513760(cx, cz, platform+1, size, height,
                        wet > 0.8 ? 3 : 5, 0)                       0x4ef970
      if desc[+0x18] == 1:                                          0x4ef97b
          for k in 0..3:
              if rand() % 8 == 0: skip prop k          0x4ef98b/0x4efad9/0x4efc37/0x4efd85
              p = Prop(type 0x12, extents (3.0, 0.4, 0.4), rot ROT[k])
              p.pos = (cx16 + DX[k], cz16 + DZ[k], platform << 16)
              if Prop_settleOnTerrain(p): site[+0xc].push_back(p)   0x4efaac / 0x4efabf
```

### 3.1 The quadrant centres are the same four the inhabitant scatter uses

`(span/4, span/4)`, `(span/4, 3·span/4)`, … — for a village `span/4 = 12` and
`span/2 = 25`, so the plot-local offsets are **12 and 37**. Recovered from the props'
own coordinates in every captured town: **1,510 records, 0 unmatched**, and every one on
a plot whose post-promotion role is 0 (1,462) or 7 (48). Nothing else.

### 3.2 `0x4ef7c8` is a per-voxel shade, not a scatter

`FUN_00401000` is a `vec2<double>` constructor and `FUN_004d8e30` returns `x*x + z*z`, so
the two `.rdata` doubles the loop compares against are **squared** radii: `64` is r = 8
and `49` is r = 7. The offsets are `(centre + 0.5) - i` over `i in [c-8, c+8]`, so the
deltas run over `{-7.5 … 8.5}` and

* **208** cells are in the disc, **52** in the 7..8 annulus.

Each column writes `platform - surface + 2` voxels, and only an annulus column draws. So
the **floor on flat ground is exactly 2 × 52 = 104 draws** — and over the 430 captured
discs the minimum run is **104, never lower, and 178 of the 430 are exactly 104**. That
one number pins the box, the half-block offsets, both radii and the per-column count at
once.

### 3.3 The interior takes the surface cover at the CENTRE, the ring the road colour

* `d² < 49`: `lib_fn_4f9450` (the surface placer, `CwColor::surfacePlacer`) is called with
  the **disc centre** `(cx, cz)` and `platform` — not the cell being written — but with
  the **cell's own** temperature and humidity (`lib_fn_4f8570` / `lib_fn_4f8b40` at
  `0x4ef76a` / `0x4ef780`, per column). Read the pushes, not the shape: the two are
  genuinely different arguments.
* `d² >= 49`: `lib_fn_52db90` (`CwWorldGen::roadSurfaceColor`) with the jittered shade,
  and the block is built with **class 6** (`push 6` at `0x4ef825`).

`lib_fn_52db90` has exactly **one call site in the whole image** — `0x4ef80c`, here.

### 3.4 Villages and ruins take different halves

`desc[+0x18]` is the feature cell's TYPE: **1 = village, 5 = ruin** (`RE_town_verdict.md`
§2 gates the role-6 pass on the same field). The two branches at `0x4ef444` and `0x4ef486`
send a ruin straight to the tree at `0x4ef8ea`, skipping the class-0xb test, the max scan
and the disc entirely; the class test's failure path at `0x4ef47a` jumps past the tree as
well, so a village site that is not on class 0xb gets *nothing*.

The capture agrees exactly, with no exceptions: over 92 towns,

| descriptor type | towns | tree sites | plaza sites |
|---|---|---|---|
| 1 (village) | 50 | = plaza, always | 430 |
| 5 (ruin) | 42 | 395 | **0** |

and `tree == plaza` in **50 of 50** villages, `plaza == 0` in **42 of 42** ruins.

### 3.5 The four props

Type `0x12`, extents `(3.0, 0.4, 0.4)`, all four at `platform`, each on a half block:

| k | offset from the centre | rotation | store |
|---|---|---|---|
| 0 | `(+0.5, −7.5)` | 0 | `0x4efaa2` |
| 1 | `(+0.5, +9.5)` | 2 | `0x4efc00` |
| 2 | `(−7.5, +0.5)` | 3 | `0x4efd4e` |
| 3 | `(+9.5, +0.5)` | 1 | `0x4efeac` |

⚠ **The pairs are −8/+9, not ±8.** `0x4efa07` builds prop 0 with `FUN_00405660` (subtract
8 blocks); `0x4efb46` builds prop 1 by chaining `FUN_00405690` twice, with **8 and then
1**. That reads like a transcription slip and is not one — every one of the 1,510 recorded
records has it, and the two props on an axis are exactly 17 blocks apart.

The coin is `rand() % 8` and the prop is built when it is **non-zero** (`je` skips):
**1,720/1,720** recorded coins agree with whether a `Prop_settleOnTerrain` call followed.

### 3.6 The tree

`lib_fn_513760` is the procedural tree builder `CwForest::tree513760` already ports.
Argument order is `(x, z, y, size, height, type, 0)`, but the **draws come in the other
order**: `0x4ef938` is `height` and `0x4ef94e` is `size`. Its own draws are spent inside
`0x513760` and so are invisible to `frida_town_props.py`, whose filter is the builder body
(lesson 18) — 825 tree builds are missing from the 228,413 for that reason.

⚠ `tree513760` **throws `Unsupported` for type 3**, which is exactly the type this stage
picks in wet columns. Planting the plaza tree in the engine needs that branch; the draw
accounting does not.

## 4. `lib_fn_4fc140` is `World_columnHumidity` — the open thread closes

`HANDOFF_PROMPT.md` carried "`lib_fn_4fc140` is probably misfiled under `_library`; two
independent worldgen decisions threshold it at exactly 0.8" as a lead. It is **fifty
bytes**:

```c
float World_columnHumidity(World* w, int x, int z, int flags) {
    Column* c = Chunk_getColumnAt(w, x, z, flags);
    if (c) return *(float*)((char*)c + 8);     // the column's own cached humidity
    return FUN_004f8b40(w, x, z);              // else the blended climate
}
```

`col+8` is humidity and `col+4` is temperature — a mapping `CwZoneCreatures.cpp` and
`CwClimate.h` already carry. So it is **not a library function**, it is a one-line
worldgen accessor, and the reason three independent decisions threshold it at 0.8 is that
**it is the humidity**: the forest's `humid > 0.8` type pick reaches the same number by
the other route (`FUN_004f8b40` directly). Ten minutes of disassembly, lesson 7g's exact
shape — read the function before budgeting for what is inside it.

## 5. The RUIN site set is derivable from the seed with no terrain at all

A ruin skips the class test, so its whole rule is *role 0/7* plus *falloffSquared ≥ 0.72*
plus the `platform > 1` gate at `0x4ef927`. `World_falloffSquared` is a pure function of
the feature cell (`gate_town_verdict.py` derives every plot's `+0x18` this way, 1,485 /
1,485), so the first two are free. Predicting each captured ruin's tree-site count from
role + falloff alone:

* **32 of 35 ruins exact**, first try.
* The 3 misses are **all** the ruins with a contributing plot at `minH <= 1`, and the
  gate marks exactly those as coastal and bounds them instead of asserting them.

The residual is `platform > 1`. ⚠ Note what that gate actually reads: the surface walk
starts at the column record's **base** (`col[+0x10]`) and stops at the first non-solid
block, so a column with water standing on its bed reports the **bed**, not the water top.
It is a coastal test, and the plot table's own `minH` — which is `base + count - 1`, the
record *top* — is a different number, which is why the split is stated as "a plot reaches
minH <= 1" (a sufficient condition for the gate to be able to fire) and not as a
prediction.

## 6. The port

`townPlazaPass` in `src/worldgen/cw/CwTown.h`, gated by `rederive_townplaza` (section 65,
golden written by `tools/cw_rederive/make_townplaza_golden.py`). It takes a draw source
rather than an `MsvcrtRand&` for the same reason `townYardPass` does — the stage is
interleaved with the builder's other 126 un-RE'd rand sites — and emits a **per-draw site
tag** (`TownPlazaDraw`) so the gate compares sequences and not merely counts.

The terrain questions are behind a `TownPlazaGround` interface; `TownTerrainPlazaGround`
is the column-store implementation the engine uses.

### 6.1 What the gate asserts, feeds and measures

| | |
|---|---|
| **ASSERTED** | the SITE SET — a quadrant centre of a role-0/7 plot passing the falloff gate. **59/59 towns** (the four coastal ruins bounded, see below) |
| **ASSERTED** | the 0.72 falloff gate itself, recomputed by cwgen's **own** `featureFalloff` from the golden's feature cell, at every live site — **430/430** |
| **ASSERTED** | the SITE SEQUENCE, draw for draw — **55/55** towns, all 56,181 draws |
| **ASSERTED** | the PROP RECORDS: `type`, `rot`, `x16`, `z16` of all 1,510, in stream order — **6,040 fields**. Their positions are pure arithmetic on the plot origin and the quadrant |
| **ASSERTED** | the prop coin `rand() % 8 != 0`, against which props the live run actually built — 1,720 (in `gate_town_plaza.py`) |
| **FED** | the class-0xb answer per candidate. Terrain, and no capture records a block class |
| **FED** | `platform`, and therefore each prop's `y16`. It *is* observable (off the props' own `y16`) but it is a terrain read either way |
| **FED** | `ringDraws`. Nothing records the per-column surfaces |
| **BOUNDED, not asserted** | the 4 coastal ruins, where the `platform > 1` gate can fire and no capture pins a ruin's site positions |

### 6.2 Why front-loading the ring tape is safe here, and why that needed saying

`RE_town_yard.md` §6.2 is the standing warning: feeding a gate a terrain COUNT is fine,
feeding it a terrain SHAPE is not, and the yard's first tape desynchronised 5 of 17 towns
by front-loading. This gate front-loads deliberately — it pays the whole of a run's extra
height with **one** lowered ring column — and that is safe for a reason worth writing
down rather than assuming: **every fill draw carries the same site tag and the run is
contiguous**, so no ordering inside it is observable at all. The yard's centre draw was
observable *because it had a different tag*. State which of the two you are in before
choosing a tape.

## 7. Every input was already in a port

Lesson 7h, for the fifth slice running — and this time it was all six of them:

| what the stage needs | where it already was |
|---|---|
| `FUN_0052dee0` the 0.72 gate | `World_falloffSquared`, `rederive_falloff`, and `gate_town_verdict.py` derives it per plot |
| `lib_fn_4f8570` / `lib_fn_4f8b40` | temperature / humidity, `CwClimate` |
| `lib_fn_4f9450` the interior colour | the surface placer, `CwColor::surfacePlacer` |
| `lib_fn_52db90` the ring colour | `CwWorldGen::roadSurfaceColor`, "proven 270/270 live" |
| `lib_fn_513760` the tree | `CwForest::tree513760` |
| `lib_fn_4fc140` the tree type | **misfiled as a library function** — it is a 50-byte humidity accessor (§4) |

Nothing needed new RE. What needed doing was *looking*.

## 8. Falsification record

| claim | how it was tested | result |
|---|---|---|
| the stage is gated on role 0 or 7 | recover every plaza site from its props, look up the plot | 1,510 records, roles {0: 1462, 7: 48}, **0 other** |
| the sites are the four quadrant centres | the same recovery against `(r*256)/n + q*(span/2) + span/4` | **1,510 / 1,510**, 0 unmatched |
| the gate is `falloffSquared >= 0.72` | derive it from the seed at every live site | **430 / 430**, minimum 0.721361 |
| `FUN_004d8e30` is length **squared**, so 49/64 are r=7/r=8 | its twelve instructions; then the run floor | disassembly + min run **104 = 2 × 52** |
| a ring column writes `platform - surface + 2` | the flat-ground floor against 430 runs | min **104**, never lower; 178 exactly |
| villages need class 0xb, ruins skip it | tree count vs plaza count per descriptor type | 50/50 villages equal, 42/42 ruins zero |
| the prop coin is `rand() % 8 != 0` | every recorded coin vs whether a settle followed | **1,720 / 1,720** |
| the four offsets / rotations / extents | every recorded record, field by field | **1,510 records** |
| the ruin site set is derivable from the seed | role + falloff vs the recorded tree count | **32 / 32** dry ruins; 3 coastal bounded |
| no eighth rand site in the span | census of `0x4ef248`–`0x4f0046` | 7, exact |
| the port reproduces the stage | `rederive_townplaza`, site tag vs recorded, draw for draw | 55/55 towns, 56,181 draws |
| `lib_fn_4fc140` is a library function | read its 15 instructions | **FALSE** — it is `World_columnHumidity` |

## 9. What this leaves

Counted by the same span census: with the plaza closed, **50 of the 176 firing rand sites
carry 194,039 of the 228,413 draws the rig records inside the builder body — 85.0%**.

⚠ **That recount does not line up with the 07-28g handoff's "39 sites / 138,935 draws",
and the difference is bookkeeping, not work.** Summing the same spans *without* the plaza
gives 43 sites / 137,858 draws (scan 3/3,310, promotion 12/280, yard 14/113,353, house
13/17,947, inhabitant scatter 1/2,968). The method is in this file so the next recount is
reproducible: take every distinct `ra` in `raw/town_props_capture*.json` and bucket it by
the VA span its `Docs/RE_town_*.md` names.

**The largest single site now left is `0x4ea254`** (1,653 draws, 35 towns), and the
remaining 34,374 draws are spread thin — 126 sites, none over 1,700. There is no third
monster: the two that carried "36% of everything the layer spends" were `0x4e54e8` (the
yard, 07-28g) and `0x4ef7c8` (this), and both are closed. **The rest of the town chain is
now a long tail, not a wall.**

A conspicuous cluster worth taking next: `0x4eafd2` / `0x4eb162` / `0x4eb315` / `0x4eb4a5`
/ `0x4eb7f3` / `0x4eb981` / `0x4ebb42` all fire in exactly **35** towns for 976–1,260
draws each, and each has a matching `push_back` in the capture (653–1,005 records). Seven
sites, ~7,200 draws, one span — read `0x4eaf00`–`0x4ebd00` before budgeting for it.

Two smaller things the plaza slice did **not** close, both adjacent and both cheap:
`0x4eee4f` (31 draws, `rand() % 2 + 0x84c` into `world[+0x1c]`, then
`creature_spawn_builder`) and `0x4ef03e` (14 draws, `rand() % 4 + 0x84c`, the same shape).
They are the role-`0x14` and role-`0x12` plots' **town NPC** spawns — the two roles the
promotion pass hands out at `0x4e36d8` and `0x4e3921` — and `FUN_00524540` is already
RE'd and gated (`RE_524540_creature_spawn.md`, 6,442 live spawns).
