# The town builder's HOUSE ENTITY pass (`0x4e74a5`–`0x4ea988`)

*RE'd and gated 2026-07-28 (07-28k). Live gate: `tools/gate_town_entities.py`, **46,338
checks, 0 FAIL** over the 92 towns in `raw/town_props_capture*.json` (seed 42069) — 70 of
which build a house, 435 houses, **19,352 spawn records**.*

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

`models` is the vector at `site+0x1c`. `0x4e5c39` gates the whole house chain on
`plot[+0xc] == 2`, reads `models[0x889]` into `[ebp-0x5c90]`, and then a **second** jump
table at `0x4f2b60`, keyed on `desc[+0x1c]`, picks a thirteen-entry base `B` and loads
`models[B+0 .. B+12]` into thirteen frame slots:

| `desc[+0x1c]` | 0 | 1 | 2 | 3 | 4 | 5 | ruin (`desc[+0x18] != 1`) |
|---|---|---|---|---|---|---|---|
| arm | `0x4e611d` | `0x4e5c7e` | `0x4e5d63` | `0x4e5e48` | `0x4e5f2d` | `0x4e6025` | `0x4e6202` |
| base `B` | `0x88d` | `0x8ef` | `0x8a7` | `0x89a` | `0x8c1` | `0x8c2` | — |

⚠ The
store for entry `N` is emitted *after* the `push` for entry `N+1`, the same MSVC habit
`RE_town_house.md` §2 records, so this table was read by following the stores and not the
pushes:

| slot | `[ebp-]` | used by |
|---|---|---|
| B+0 | `0x5c88` | the BASE module emit |
| B+1 | `0x5cb0` | the wall/roof walk's roof and wall emits |
| B+2 | `0x14` | the wall walk's `cell[+3] != 0` emit |
| B+3 | `0x5c9c` | a face whose neighbour module is neither empty nor a wall |
| B+4 | `0x5d08` | a face's default emit (the coin failed) |
| B+5 | `0x5cd4` | the `cell[+2]` / stacked-wall emit — **the only one that carries `houseKind`** |
| B+6 | `0x5c8c` | the four-neighbour walk (kind-1 modules) |
| B+7 | `0x5d2c` | a face's `k > 1` coin |
| B+8 | `0x5d04` | a face's `k == 1` coin |
| B+9 | `0x5c7c` | — (not reached by any emit in this stage) |
| B+10 | `0x5d00` | the roof walk, `cmove` arm A |
| B+11 | `0x5ca8` | the roof walk, `cmove` arm B |
| B+12 | `0x5ca0` | the DOOR module emit |

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

⚠ **`src[+0x44]` is not an extent and is not always positive.** Records appear at module
offsets that only close if the subtracted value is negative for some models, so this is
recorded as *the model's own anchor field*, not as "half the width". The gate does not
claim a value for it: it asserts only that it is **constant per emit site**, which is what
the lattice needs.

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

Total: **46,338 checks, 0 FAIL.**

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
* **The models themselves are not identified.** `models[]` is `site+0x1c`, indexed by a
  per-`desc[+0x1c]` base (`0x8ef`, `0x8a7`, `0x89a`, … selected through a second jump
  table at `0x4f2b60`); the ids resolve through `prop_ids.json`, but that is the
  `site+0xc` namespace and these go elsewhere — the same reason `RE_town_yard.md` §5
  withdrew its semantic reading (lesson A1). No claim is made here about what they *are*.

## 8. What this leaves

Counted by the same span census as `RE_town_plaza.md` §9: **77 of the 176 firing rand
sites now carry 211,484 of the 228,413 draws the rig records inside the builder body —
92.6%** (was 66 / 203,887 / 89.3%).

The remaining **99 sites spend 16,929 draws** and the largest is now under 1,000. The
per-house region is closed end to end: house pass → entity pass → interior marking →
furnishing. What is left is the plot-level work outside a house.

## 9. Not done, deliberately

* **No port.** The walk needs the module grid *and* a `models[]` anchor field per emit
  site; the grid is in `CwTownHouseTables.h` already (with `kind`/`flag` since 07-28i, and
  the `+1` orientation byte the house pass rolls), but the anchor fields live in the
  server's model DB and nothing in `cwgen` reads it. A port can derive positions only up
  to that per-site constant, so it would have to be **FED** — write the ASSERTED / FED
  table first, as `RE_town_yard.md` §6.1 does.
* **The door path (`0x4e783b`-`0x4e7cae`) is decoded structurally but not gated.** It
  spends no draws and its only output is `writeVoxel`, which `frida_town_props.py` does
  not hook — so nothing here can check it. Recorded as a closed door, not a result.
* **The ground scan's `houseBaseY` is region-cache-blocked**, like every other plot
  height in this builder. The gate works entirely in Y *differences*, which is why the
  lattice check is on `y mod 7` and spans rather than absolute values.
