# The town builder's HOUSE ENTITY pass (`0x4e74a5`–`0x4ea988`)

*RE'd and gated 2026-07-28 (07-28k); the MODELS identified and every record's position
DERIVED 2026-07-29g. Live gate: `tools/gate_town_entities.py`, **65,954 checks, 0 FAIL**
over the 92 towns in `raw/town_props_capture*.json` (seed 42069) — 70 of which build a
house, 435 houses, **19,352 spawn records**.*

★★ **2026-07-29g — the port's blocker is gone, and it was never a missing input.** §9
said the per-emit anchor field "lives in the server's model DB and nothing in `cwgen`
reads it", so a port would have to be FED one constant per emit site. Both halves are
wrong. `models[]` **is** the world model DB — the same `vector<Model*>` at `+0x1c` that
`RE_town_antique.md` §2 read `m->[+0x44]` / `m->[+0x48]` out of a day earlier — so the
ids resolve through `cw_rederive/model_id_map.json`, which already holds the `.cub`
dimensions of all 2,550 models and knows nothing about this pass. Feeding those in,
**19,352 of 19,352 records land exactly** on

```
X = houseAnchor.x + 13*i + c - model.w/2      Z = houseAnchor.z + 13*j + c - model.d/2
```

with `c = 7` at every emit but the four entrance-stairs ones. **6,401 of the records pin
exactly ONE model id.** Lesson 7h for the fifth time (the input was misfiled, not
missing) and lesson 7u for the second (a second source that knows the id's geometry, and
the agreement is the gate).

```
python tools/gate_town_entities.py
```

**Eleven rand sites spending 7,597 draws, 34 emit sites, 16 spawn tails.** This is the
stage `0x4ea254` belongs to — the largest single rand site left in the builder after
07-28j — and reading its span first turned one table row into a whole closed stage for the
**ninth** time running.

★ **The find: these records are not props, they are `creature_spawn_builder` calls, and
the rig already hooks that function.** Every other town stage has been gated on draw
counts and prop pushes; here the capture carries each record's **position, orientation and
type**, so the geometry is checkable field by field without a new rig.

⚠ **And that array was not unnoticed — it was uncounted-on.** `RE_town_props.md`
§"The creature layer, in passing" has reported "17,488 `creature_spawn_builder` calls from
21 sites" since 07-25 and ends *"nothing here decodes that split"*; `gate_town_props.py`
prints the same total every run. What had never happened was reading one record's
**fields**. A count is not a reading (lesson 7k).

---

## 1. Where it sits

`townHousePass` (`RE_town_house.md`, `0x4e6520`-`0x4e74a5`) picks one of 23 module grids
and stamps a 3×3×4 grid of modules. Everything from `0x4e74a5` to the furnishing walk is
the *rest of that house*, in one plot-loop iteration:

| span | what it does | draws |
|---|---|---|
| `0x4e74a5`-`0x4e767a` | the **ground scan**: max column height over a 15×15 window at each module | 0 |
| `0x4e7680`-`0x4e7742` | the **house anchor** — writes `house+0xc` and pushes the house onto `world+0x88` | 0 |
| `0x4e7743`-`0x4e783a` | the module **bounding box** over cells with `type != 0` | 0 |
| `0x4e783b`-`0x4e7cae` | the **door path** — village-only, `desc+0x1c` not 4 or 5; finds the class-`0xb` ground ring and `writeVoxel`s a noise-coloured path | 0 |
| `0x4e7caf`-`0x4e7d0f` | `houseKind = jumpTable(plot[+0x10])` | 0 |
| **`0x4e7d10`-`0x4e96ea`** | **the four FACE walks** — this document | **4,552** |
| **`0x4e96f4`-`0x4e9fc5`** | **the ROOF walk** | 0 |
| **`0x4e9fc6`-`0x4ea4e6`** | **the WALL/ROOF walk** — `0x4ea254` lives here | **3,045** |
| `0x4ea4e7`-`0x4ea987` | the **four-neighbour walk** (kind-1 modules) | 0 |
| `0x4ea9b0`-`0x4ecd34` | the interior marking sweep (`RE_town_furnish.md` §1) | 0 |
| `0x4ead3a`-`0x4ecf20` | the **furnishing** walk (`RE_town_furnish.md`) | 8,717 |

All five walks are the same triple loop over the module grid, `i` over `House_dimX`
(`FUN_004d8dc0` = 3), `j` over `House_dimZ` (`FUN_004d8de0` = 3), `k` over `House_dimY`
(`FUN_004d8e00` = 4), and every one of them multiplies **13** into `i`/`j` and **7** into
`k` — the same lattice as the furnishing pass.

## 2. The eleven rand sites

| VA (of the `call`) | rig ra | form | what it gates | draws | towns |
|---|---|---|---|---|---|
| `0x4e7fd3` | `0x4e7fd9` | `rand() % 6` | face walk 1 (−Z), storey `k == 1` | 803 | 70 |
| `0x4e80a7` | `0x4e80ad` | `rand() % 6` | face walk 1, storey `k > 1` | 338 | 64 |
| `0x4e85ac` | `0x4e85b2` | `rand() % 6` | face walk 2 (+Z), `k == 1` | 800 | 70 |
| `0x4e8680` | `0x4e8686` | `rand() % 6` | face walk 2, `k > 1` | 349 | 65 |
| `0x4e8b85` | `0x4e8b8b` | `rand() % 6` | face walk 3 (−X), `k == 1` | 815 | 70 |
| `0x4e8c58` | `0x4e8c5e` | `rand() % 6` | face walk 3, `k > 1` | 340 | 63 |
| `0x4e9157` | `0x4e915d` | `rand() % 6` | face walk 4 (+X), `k == 1` | 783 | 70 |
| `0x4e922b` | `0x4e9231` | `rand() % 6` | face walk 4, `k > 1` | 324 | 64 |
| **`0x4ea24e`** | **`0x4ea254`** | `rand() & 1` | the wall walk's **inhabitant coin**, villages only | **1,653** | 35 |
| `0x4ea28d` | `0x4ea28f` | `rand() % 3` | its species: `models[0x88a + r]` | 696 | 35 |
| `0x4ea2f9` | `0x4ea2fb` | `rand() & 3` | its facing | 696 | 35 |

The census over `0x4e7d10`–`0x4ea4e7` returns **exactly these eleven** and the gate asserts
it. ⚠ Two are `call esi` (two bytes); a census that only looks for the six-byte
`call [0x5582f4]` misses them, exactly as in `RE_town_furnish.md` §2.

## 3. The four face walks

Structurally identical, one per horizontal neighbour. Writing `jm` for the neighbour
module index (`j-1`, `j+1`, `i-1`, `i+1` respectively):

```
for i, j, k over the 3 x 3 x 4 grid:                              0x4e7d10
    t = cellAt3D(i,j,k)[0]
    if t == 5:  emit(models[B+12], orient = cell[+1], type = 1)   0x4e7d8f  (a DOOR)
    if t == 2:  emit(models[B+0],  orient = cell[+1], type = 1)   0x4e7e65  (a BASE)
    if t != 1:  next module
    # a WALL.  Four faces, tested in the order  -Z, +Z, -X, +X:
    if cellAt3D(jm)[0] != 0:                                      0x4e7f4b
        if cellAt3D(jm)[0] == 1: next face                        0x4e8435
        emit(models[B+3], orient = <face>, type = 1)
    elif cellAt3D(i,j,k)[2] != 0 or cellAt3D(jm, k-1)[0] not in (0, 3):
        emit(models[B+5], orient = <face>, type = houseKind)      0x4e824b
        if cellAt3D(i,j,k)[2] != 0:
            emit(models[0x889], orient = <face>, type = houseKind)
    elif k == 1 and rand() % 6 == 0:                              0x4e7fd3
        emit(models[B+8], orient = <face>, type = 1)
    elif k >  1 and rand() % 6 == 0:                              0x4e80a7
        emit(models[B+7], orient = <face>, type = 1)
    else:
        emit(models[B+4], orient = <face>, type = 1)              0x4e817c
```

The `<face>` constant is **0 / 2 / 1 / 3** for the −Z / +Z / −X / +X walk, pushed as an
immediate; the gate checks all 19,352 records against it.

★ **The four walks share one emit-slot sequence, and the gate proves it out of the
binary.** `emit_sites()` follows every `push <src>` that is the last push before a spawn
tail, through the `jmp` chains, and recovers 34 emit sites; the first three walks then
have *byte-identical* six-slot sequences and the fourth ends with the same six. Nothing
about that is typed here.

### 3.1 `models[]` and its frame slots

`models` is the **world model DB**, the `vector<Model*>` at `+0x1c` of the same object the
antique-building pass indexes (`RE_town_antique.md` §0). `0x4e5c39` gates the whole house
chain on `plot[+0xc] == 2`, reads `models[0x889]` into `[ebp-0x5c90]`, and then a
**second** jump table at `0x4f2b60`, keyed on `desc[+0x1c]`, picks a thirteen-entry base
`B` and loads `models[B+0 .. B+12]` into thirteen frame slots.

⚠ The store for entry `N` is emitted *after* the `push` for entry `N+1`, the same MSVC
habit `RE_town_house.md` §2 records, so the table is read by following the stores and not
the pushes — and `tools/extract_house_emits.py` **interprets** the arms rather than
reading them (lesson 7i). Every slot is the model its role names:

| slot | `[ebp-]` | model | used by |
|---|---|---|---|
| B+0 | `0x5c88` | `*-base` | the BASE module emit |
| B+1 | `0x5cb0` | `*-floor` | the wall/roof walk's roof and wall emits |
| B+2 | `0x14` | `*-floor-stairs` | the wall walk's `cell[+3] != 0` emit |
| B+3 | `0x5c9c` | `*-wall` | a face whose neighbour module is neither empty nor a wall |
| B+4 | `0x5d08` | `*-wall-window` | a face's default emit (the coin failed) |
| B+5 | `0x5cd4` | `*-wall-door` | the `cell[+2]` / stacked-wall emit — **the only one that carries `houseKind`** |
| B+6 | `0x5c8c` | `*-wall-indoor` | the four-neighbour walk (kind-1 modules) |
| B+7 | `0x5d2c` | `*-wall-balcony` | a face's `k > 1` coin |
| B+8 | `0x5d04` | `*-wall-lamp` | a face's `k == 1` coin |
| B+9 | `0x5c7c` | `*-roof1` | the roof walk's DEFAULT (see the correction below) |
| B+10 | `0x5d00` | `*-roof2` | the roof walk, `cmove` arm A |
| B+11 | `0x5ca8` | `*-roof3` | the roof walk, `cmove` arm B |
| B+12 | `0x5ca0` | `*-arc` | the DOOR module emit |
| — | `0x5c90` | `*-entrance-stairs` | the `cell[+2] != 0` emit |

### ⚠ CORRECTION 2026-07-29g: the arm bases, and what the first `push` is

The table this section used to carry gave `desc[+0x1c] == 4` the base `0x8c1` and `== 5`
the base `0x8c2`, on the strength of each arm's **first `push imm32`**. That is the right
reading for arms 0–3 and the wrong one for every other arm: the clay, whiteclay and all
three ruin arms **open by overwriting the entrance-stairs slot** `[ebp-0x5c90]` — which
the other arms leave holding the generic `models[0x889]` = `entrance-stairs.cub` — and
only then load their thirteen. The gate asserted the old numbers and passed, because it
was checking the same first push the reading came from. The corrected arms, machine-read
by interpreting the stores:

| kind | `desc[+0x1c]` | arm | base `B` | family | entrance override |
|---|---|---|---|---|---|
| village | 0 / other | `0x4e611d` | `0x88d` | `framework` | — (`0x889`) |
| village | 1 | `0x4e5c7e` | `0x8ef` | `wood` | — |
| village | 2 | `0x4e5d63` | `0x8a7` | `whitewood` | — |
| village | 3 | `0x4e5e48` | `0x89a` | `stone` | — |
| village | 4 | `0x4e5f2d` | **`0x8b4`** | `clay` | `0x8c1` |
| village | 5 | `0x4e6025` | **`0x8c3`** | `whiteclay` | `0x8c2` |
| ruin | 2 | `0x4e6402` | `0x8e5` | `desertruin` | `0x8e4` |
| ruin | 3 | `0x4e630d` | `0x8da` | `jungleruin` | `0x8d9` |
| ruin | other | `0x4e6218` | `0x8d1` | `antiqueruin` | `0x8d0` |

★ **The six village families are complete** — `base, floor, floor-stairs, wall,
wall-window, wall-door, wall-indoor, wall-balcony, wall-lamp, roof1, roof2, roof3, arc`,
thirteen consecutive ids in every one. The three **ruin** families are not: the assets
ship no window/balcony/lamp (and `antiqueruin` no door or indoor either), so those arms
repeat `*-wall` into the missing slots — 3, 3 and 5 duplicates. That is reported by the
gate, not asserted; it is a property of the shipped `.cub` set.

⚠ **The corpus never runs the `desertruin` arm** (`desc[+0x18] != 1` and
`desc[+0x1c] == 2`): 28 ruins take the antique arm, 14 the jungle one, 0 the desert one.
Its ids are byte-read, not observed (lesson 9).

## 4. `houseKind` — the jump table at `0x4f2b74`

```
kind = 1
switch (plot[+0x10] - 1) { 0: kind = 2; 1: kind = 3; 2: kind = 4; 3: kind = 5; 4: kind = 6; }
```

`plot[+0x10]` is the same sub-role the **promotion** pass writes and the **house pass**
selects its module grid from (`RE_town_house.md`). So `kind` is `sub + 1` for `sub` in
1..5 and 1 otherwise — and it goes straight into `creature_spawn_builder`'s `type`
argument at the four `models[B+5]` emits. Live, over 435 houses:

| `plot[+0x10]` | 0 | 1 | 2 | 3 | 4 | 5 |
|---|---|---|---|---|---|---|
| houses | 398 | 13 | 6 | 6 | 6 | 6 |
| `type` seen | 1 | 1, 2 | 1, 3 | 1, 4 | 1, 5 | 1, 6 |

Every record's type is **1 or `kind`**, never anything else, in 19,352 of 19,352.

## 5. The wall/roof walk — where `0x4ea254` is

```
for i, j, k:                                                      0x4e9fc6
    t = cellAt3D(i,j,k)[0]
    if t == 3 and cellAt3D(i,j,k-1)[0] == 1:                      0x4ea04a
        emit(models[B+1], orient = cell[+1], type = 1)
    elif t == 1:
        if cellAt3D(i,j,k)[3] != 0:                               0x4ea148
            emit(models[B+2], orient = cell[+1], type = 1)
        else:
            if desc[+0x18] == 1                                   0x4ea23e   VILLAGES ONLY
               and rand() & 1 == 0                                0x4ea24e   <- 0x4ea254
               and cellAt3D(i,j,k+1)[3] == 0:                     0x4ea266
                 species = models[0x88a + rand() % 3]             0x4ea28d
                 emit(species, orient = rand() & 3, type = 1)     0x4ea2f9
            emit(models[B+1], orient = cell[+1], type = 1)        0x4ea392
```

⚠ The coin **passes on even**, `rand() & 1 == 0` (`and eax, 0x80000001` — MSVC's
sign-correct `% 2`, `jne` to skip). It is followed by a second, free test, so a passing
coin does not imply a record: 1,653 coins, **826 even**, **696 records**.

★ **The bookkeeping closes in all 70 towns**: `#draws(0x4ea28f) == #draws(0x4ea2fb) ==
#records(0x4ea386) <= #{coins with v % 2 == 0}`. Two draws per emitted inhabitant, never
more than the coin allowed, never fewer.

## 6. The geometry — and why it is the furnishing pass's lattice

Every record's position is

```
X = plotOriginX + 7 + 13*i + 7 - src[+0x44]/2        FUN_00402150
Z = plotOriginZ + 7 + 13*j + 7 - src[+0x48]/2        FUN_00402160
Y = houseBaseY  + 7*k       (- src[+0x4c], at the emits that take one)
```

`FUN_00402150/60/70` are one-instruction accessors (`mov eax, [ecx+0x44 / +0x48 / +0x4c];
ret`) and take **no argument** — the `push eax` that precedes each of them belongs to the
`vec3_store` three lines later. Reading them as one-argument calls mis-assigns every
coordinate; that is the same MSVC push-hoisting trap as `RE_town_house.md` §2 and
`RE_town_furnish.md` §5b.2, in a third form.

★ **`plotOrigin + 7` then `+ 7` again is the furnishing pass's module centre.** The house
anchor written at `0x4e76bf` is `zoneBlock + plotOrigin + 7` — the `kTownHouseOrigin` the
furnishing port pinned — and the entity record then sits at the module's own `+7`, which
is exactly where `RE_town_furnish.md` §5b.2 puts the kind-0 centre piece (`dx = dz = 7`).
Two stages decoded a week apart, from different observables, agree on the same lattice.

### ⚠ CORRECTION 2026-07-29g: `src[+0x44]` *is* an extent, and it is always positive

This section used to read: *"`src[+0x44]` is not an extent and is not always positive —
records appear at module offsets that only close if the subtracted value is negative for
some models."* Both halves are withdrawn. `+0x44` / `+0x48` / `+0x4c` are the model's
`.cub` **width / depth / height**, exactly as `RE_town_antique.md` §2 reads them, and every
one is positive. What produced the off-lattice records was a constant belonging to the
**emit**, not to the model: the four entrance-stairs emits add **−6** or **+20** instead of
`+7` on their own face's axis — a whole 13-block module onto the neighbour the face looks
at — and **−4** in Y. `extract_house_emits.py` interprets that constant out of each emit
block, so the gate reads it rather than fitting it, and with it every record closes.

The per-emit constants, machine-derived: `+7` on both axes at all 30 other emits;
`(7, −6)`, `(7, 20)`, `(−6, 7)`, `(20, 7)` at the four entrance emits, one per face.
Y is `houseBaseY + 7*k`, less `model.height` (and `+1`) at the wall/roof walk's emits and
`−4` at the entrance emits.

★ **What the 19,352 records now prove.** Every record is predicted exactly by
`anchor + 13*m + c − dim/2` on both axes, `m ∈ 0..2`. Where the tail is fed by one emit
the model id is **pinned**: 6,401 records resolve to a single id, 6,477 to two, 5,685 to
three and 789 to four — and the multi-way ones are only ambiguous because the models
concerned share a footprint (all four `*-roof` variants are 16×16, the three carpets
14×14), which is a statement about the assets and not a gap in the decode.

## 7. Falsification record

| claim | how it was tested | result |
|---|---|---|
| the span holds exactly eleven rand sites | census of `0x4e7d10`–`0x4ea4e7`, **both** call encodings | 11, exact |
| …and exactly sixteen spawn tails | `call rel32` census over `0x4e74a5`–`0x4ea988` | 16, exact |
| all eight face coins are `% 6` | the ten bytes after each `call`, byte-checked | 8 |
| `0x4ea254` is `& 1`, `0x4ea28f` is `% 3` over `0x88a`, `0x4ea2fb` is `& 3` | byte-checked | 4 |
| the four face walks share one emit-slot sequence | derived by walking the `jmp` chains | 3 identical + 1 suffix |
| `houseKind` = the jump table at `0x4f2b74` | the five arms and the immediate each stores | 11 |
| …and it is what reaches `type` | every record at the four `models[B+5]` tails | **1,097** |
| every other tail pushes the literal 1 | every record at the eight literal tails | **10,015** |
| and no record has any other type | `type in {1, kind}` over the rest | 8,240 |
| the per-walk orientation constants 0 / 2 / 1 / 3 | every record's third argument | **19,352** |
| the stage runs iff the town builds a house | ctor count vs record count vs draws | 92 towns, 70 firing |
| the loop-2 coin is villages-only | `desc[+0x18]` vs which towns spend `0x4ea254` | 35 / 35 |
| its two-draws-per-record bookkeeping | species = facing = records ≤ even coins | **70 / 70** |
| the module lattice: one residual class per emit site | residual pairs vs the derived emit count | **5,080** |
| …and single-model tails land on the exact 3×3×4 lattice | span and divisibility, no free parameter | **2,176** |
| the house boundary is decidable | min draws between a ctor and its first record | **38** |
| the nine model-set arms and their entrance overrides | `extract_house_emits.model_sets` interprets the stores | 27 |
| every model in a set belongs to that set's `.cub` family | `model_id_map.json`, by name | 117 |
| …and a VILLAGE family is the complete thirteen roles | by name, per slot | 78 |
| the per-emit axis constants are `+7`, and the four entrance emits `−6`/`+20` | interpreted per emit block | 34 |
| **every record's position, from the model dims** | `anchor + 13*m + c − dim/2`, both axes, `m ∈ 0..2` | **19,352** |

Total: **65,954 checks, 0 FAIL** (was 46,338 before 07-29g).

### 7.1 The null baseline, and what the gate cannot see

* The residual-class check is **not** vacuous: it is `<=` the emit count derived from the
  binary, and for the eight single-model tails that means **exactly one class in every one
  of the 2,176 houses those tails fire in** — the wrong lattice would need a 1/13²
  coincidence per extra record to hide.
* It is also **not tight** at the multi-emit tails: two emit sites whose anchor fields
  differ by a multiple of 13 collapse into one residual class, so `0x4e96a2` (seven emit
  sites) is only ever seen with 2–4 classes. That is reported, not asserted.
* ⚠ **Counting `push` sites under-counts the models.** Four tails take their source
  through a register or through a frame slot the walk itself rewrites — `0x4ea386`
  (`models[0x88a + rand()%3]`, three), `0x4ea47e` (`esi` from two slots), `0x4e9ebd` (a
  `cmove` between `B+10` and `B+11`, four times over). Those limits are overridden with
  the byte-checked instructions that load the source, so the bound stays a reading of the
  binary. Each of the three nevertheless shows **one** class in every house, so those
  models share an anchor — a reading of the data, reported and not relied on.
* ~~**The models themselves are not identified.**~~ ✅ **They are, 07-29g** — and the
  reason the old note gave for not identifying them was the right reason applied to the
  wrong map. `prop_ids.json` really is the `site+0xc` namespace and really does not cover
  these; but `models[]` is the **world model DB**, whose namespace is
  `model_id_map.json`, built from 2,550 live model pointers joined to the loader and
  verified against the decoded `.cub` files — the same map `RE_town_antique.md` §2 used
  for `0x84c`-`0x84f`. Lesson 7t from the other side: the namespace is what licenses the
  reading, and here it is the *right* namespace, so the reading stands and the gate
  asserts it.

## 8. What this leaves

Counted by the same span census as `RE_town_plaza.md` §9: **77 of the 176 firing rand
sites now carry 211,484 of the 228,413 draws the rig records inside the builder body —
92.6%** (was 66 / 203,887 / 89.3%).

The remaining **99 sites spend 16,929 draws** and the largest is now under 1,000. The
per-house region is closed end to end: house pass → entity pass → interior marking →
furnishing. What is left is the plot-level work outside a house.

✅ **Updated 07-28l:** the HOUSE SURROUND pass (`RE_town_surround.md`) turned out to be the
last per-house stage, not "plot-level work" — eight more sites at `0x4ecfb5`-`0x4ed9ea`,
6,408 draws, the clutter against the house's outside walls. The census is now **85 of 176
sites / 217,892 draws / 95.4%**, and the per-house chain runs house pass → entity pass →
interior marking → furnishing → surround with no unexplained draw in between.
★ It also corroborates §6 from a second observable: this file derived the module lattice
`anchor + 13*m + 7` from the entity records, and the surround pass's own literals
decompose to the *same* centre — and its anchor sweep pins the `+7` outright.

## 8b. ★ What the 07-29g re-read corrected, beyond the models

Four more things the decode had wrong or missing, all found by asking what a port would
have to compute:

1. **B+9 is reached.** §3.1 said `*-roof1` "is not reached by any emit in this stage". It
   is the roof walk's **default**: `0x4e9774` stores it into *both* of the walk's model
   temps (`[ebp-0x5c54]` and `[ebp-0x5cd4]`) before the classifier runs, and the `cmove`s
   only replace it when a neighbour is also a roof.
2. **`0x4e9f65`'s model is not B+5.** `gate_town_entities.REG_SRC` recorded, correctly,
   that its `esi` comes from `[ebp-0x5cd4]` "with no other write" — but that slot holds
   the *wall-door* only in the face walk; the **roof walk repurposes it**, so the model
   there is one of the three roofs. The tell was arithmetic: those 1,985 records need a
   16-wide model and `*-wall-door` is 18. Lesson 7z's shape — a frame slot is not a
   variable.
3. **The roof walk emits a PAIR per roof module**, at `orient = cell[+1]` and
   `orient = cell[+1] + 2`, each half independently upgraded to `roof2`/`roof3` by a
   four-arm classifier (jump table at `0x4f2b88`, keyed on `cell[+1] % 4`) that tests
   whether the neighbour on that side is also a roof and compares the two modules'
   orientation parities. Both emits also pass the walk's own **four-int neighbour array**
   (`[ebp-0x74]`, one flag per non-empty horizontal neighbour) where every other emit
   passes a zeroed vec4, and their fourth argument is **`0xe`**, not the `6` every other
   emit pushes.
4. **The `0x4ea254` "inhabitant" is a CARPET.** `models[0x88a + rand() % 3]` is
   `carpet1/carpet2/carpet3.cub` — 14×14×1, laid on a wall module's floor with a random
   `rand() & 3` facing when the module above has `[+3] == 0`. The old name came from the
   callee's label, `creature_spawn_builder`, which is the generic entity builder — the
   same mistake `RE_town_antique.md` §1 corrected for the antique buildings (lesson 7u).

## 9. Not done, deliberately

* **No cwgen port yet — but the blocker is gone.** §9 used to say the anchor fields "live
  in the server's model DB and nothing in `cwgen` reads it". `cw_rederive/model_id_map.json`
  *is* that DB, it is already in the tree, and `rederive_townantique` already reads
  `w`/`h` out of it. What a port now needs:
  * **ASSERTED / derived:** the module grid (`CwTownHouseTables.h`, with `kind`/`flag`),
    the layout, rotation and mirror (`TownHouse`, derived), the per-module `+1`
    orientation (`TownHouse::orient[36]`, derived), the plot lattice, the model set from
    `desc[+0x18]`/`desc[+0x1c]`, and the `.cub` dimensions.
  * **FED, and both are terrain:** the house's **base Y** (region-cache-blocked like every
    plot height, exactly as the surround port FEDs it), and the **wall pick** — `0x4e7321`
    stamps `cell[+2] = 1` on one module and its candidate list applies a terrain test
    (`RE_town_house.md`'s 07-29e correction), so *which* module is stamped is blocked.
    ★ It is not un-measurable, though: the pick is the only module that emits an
    entrance-stairs record, so the capture **measures** it, and a gate can feed the
    measured value rather than fit one.
  * **Still to decode before the port:** the roof walk's four classifier arms (§8b.3).
    They spend no draws, so the draw stream does not depend on them — only ~4,000 of the
    19,352 records do.
* ⚠ The wall pick also **steers the draw stream**: a marked module takes the `models[B+5]`
  branch and so skips that face's `rand() % 6`. So the FED value is not cosmetic.
* **The door path (`0x4e783b`-`0x4e7cae`) is decoded structurally but not gated.** It
  spends no draws and its only output is `writeVoxel`, which `frida_town_props.py` does
  not hook — so nothing here can check it. Recorded as a closed door, not a result.
* **The ground scan's `houseBaseY` is region-cache-blocked**, like every other plot
  height in this builder. The gate works entirely in Y *differences*, which is why the
  lattice check is on `y mod 7` and spans rather than absolute values.
