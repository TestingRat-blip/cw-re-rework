# The town builder's HOUSE FURNISHING pass (`0x4ead3a`–`0x4ecf20`)

*RE'd and gated 2026-07-28 (07-28i); **PORTED 2026-07-28 (07-28j)**. Live gate:
`tools/gate_town_furnish.py`, **34,307 checks, 0 FAIL** over the 92 towns in
`raw/town_props_capture*.json` (seed 42069). cwgen gate: **`rederive_townfurnish`
1,004/1,004** — 323 houses whose whole draw stream, hidden factory draws included, is
consumed exactly, and 6,759 records derived field by field (§8).*

```
python tools/gate_town_furnish.py                              # 34,307 checks
python tools/cw_rederive/make_townfurnish_golden.py            # the cwgen golden
build/cwgen_test.exe tools/cw_rederive/golden_rederive         # rederive_townfurnish
```

**Thirteen rand sites in the builder body spending 8,717 draws, 21 push sites, 6,759
records** — and the interesting cost is somewhere the rig cannot see: every furniture
record is built by **`FUN_004f2ee0`**, a 1,359-byte factory with **eight more rand
sites**, and `frida_town_props.py` filters to the builder body (lesson 18). Those draws
were recovered anyway, out of each town's own LCG, and the factory now reproduces
**4,958 of 4,958** live records.

★ **The `0x4eafd2` "cluster" was seven table rows and is one stage.** Eighth slice
running where reading the span before budgeting re-scoped the work — and the fourth where
the tell was that neighbouring rows share a town count exactly (all seven fire in exactly
**35** towns).

---

## 1. Where it sits

The house pass (`RE_town_house.md`, `0x4e6520`-`0x4e74a5`) *builds* a house: it picks one
of 23 module grids and stamps 3×3×4 modules. Two later passes walk that same grid again:

| span | what it does |
|---|---|
| `0x4ea9b0`-`0x4ecd34` | a 14×14×? voxel sweep per module that sets **flag bit 6** (`block[3] & 0x40`) on every non-flagged block — the interior marking pass, **no draws** |
| **`0x4ead3a`-`0x4ecf20`** | **this document** — the furnishing walk |

The furnishing walk is a triple loop, **i outer / j middle / k inner**, bounded by the
house object's three extents (`FUN_004d8dc0` / `FUN_004d8de0` / `FUN_004d8e00`):

```
for i in 0 .. dimX-1:                                   0x4ead53
  for j in 0 .. dimY-1:                                 0x4ead70
    yBase = 0
    for k in 0 .. dimZ-1:                               0x4ead89 / 0x4eada0
        ...
        yBase += 7                                      0x4ecebc
```

so the module stride is **13 blocks horizontally and 7 vertically** — the same 13-block
lattice `RE_town_props.md` names. `FUN_004d1950` is `cellAt3D(a, b, c)`; the record it
returns has the fields `extract_house_layouts.py` already interprets: **`+0` type**
(0 unset / 1 wall / 2 base / 3 roof / 5 door), **`+3` a flag**, **`+8` a KIND byte**.

**Villages only** — `0x4eada0` reads the descriptor's `+0x18` and skips the whole module
when it is not 1. Live: the pass fires in **35** towns and never in a ruin.

## 2. The thirteen rand sites

All counts over the 92 captured towns.

| VA | form | what it gates | draws | towns |
|---|---|---|---|---|
| `0x4eafd2` | `rand() % 3` | slot **A**, the −X wall face | 976 | 35 |
| `0x4eb162` | `rand() % 3` | slot **B**, the −X wall face | 976 | 35 |
| `0x4eb315` | `rand() % 3` | slot **C**, the +X face | 997 | 35 |
| `0x4eb4a5` | `rand() % 3` | slot **D**, the +X face | 997 | 35 |
| `0x4eb7f3` | `rand() % 3` | slot **F**, the +Z face | 997 | 35 |
| `0x4eb981` | `rand() % 3` | slot **G**, the +Z face | 997 | 35 |
| `0x4ebb42` | `rand() % 5` | the kind-0 centre piece | 1,260 | 35 |
| `0x4ebc5a` | `rand() & 3` | its facing | 225 | 34 |
| `0x4ec376` | `rand() & 3` | the kind-2 centre's facing | 44 | 13 |
| `0x4eca6d` | `rand() & 3` | kind-1 quartet, facing 0 | 312 | 35 |
| `0x4ecbc7` | `rand() & 3` | kind-1 quartet, facing 1 | 312 | 35 |
| `0x4eccf4` | `rand() & 3` | kind-1 quartet, facing 2 | 312 | 35 |
| `0x4ece21` | `rand() & 3` | kind-1 quartet, facing 3 | 312 | 35 |

The census over `0x4ead3a`–`0x4ecf20` returns **exactly these thirteen**, and the gate
asserts it. ⚠ Four of them are `call edi` (two bytes) rather than `call [0x5582f4]`, and
a census that only looks for the six-byte form misses them — which is why the earlier
whole-builder census found 170 sites where the capture holds 176.

## 3. The pass

```
if desc[+0x18] != 1:  next module                                   0x4eada0
if cellAt3D(i,j,k)[0] == 1 and (i + j) is ODD:                      0x4eadbf / 0x4eadd0
    a record id 0xd, extents (0.6, 0.5, 0.4), scale 0.075, at the
    module CENTRE (+7, +7) and Y = originY + yBase + 5.3            0x4eaf3f
    -> site+4  (⚠ no capture hooks that container, see section 7)
kind = cellAt3D(i,j,k)[8]                                           0x4eaf6a
if cellAt3D(i,j,k)[0] != 1:   next module                           0x4eaf82   (a WALL)
if cellAt3D(i,j,k+1)[3] != 0: next module                           0x4eafa1

if cellAt3D(i-1,j,k)[0] != 1:                                       0x4eafc1
    if rand()%3: furnish(slot A)                                    0x4eafd2
    if rand()%3: furnish(slot B)                                    0x4eb162
if cellAt3D(i+1,j,k)[0] != 1:                                       0x4eb30a
    if rand()%3: furnish(slot C)                                    0x4eb315
    if rand()%3: furnish(slot D)                                    0x4eb4a5
if cellAt3D(i,j-1,k)[0] != 1:                                       0x4eb648
    furnish(slot E)                       # NO coin                 0x4eb651
if cellAt3D(i,j+1,k)[0] != 1:                                       0x4eb7e4
    if rand()%3: furnish(slot F)                                    0x4eb7f3
    if rand()%3: furnish(slot G)                                    0x4eb981

switch (kind):                                                      0x4ebb27
  case 1: four records type 0x13, extents (2.0, 3.0, 1.0), each with
          its own `rand() & 3` facing                               0x4ec94b
  case 2: one type 0x0c (3,3,1) with a `rand() & 3` facing, plus four
          type 0x10 (1,1,0.5) at fixed facings 1/3/2/0              0x4ec254
  case 3: four records type 0x1f, extents (4.0, 1.0, 1.0), fixed
          facings 3/1/0/2                                           0x4ebcf9
  default: if rand() % 5 == 0: one type 0x0c (3,3,1),
           facing = rand() & 3                                      0x4ebb42
```

Every record is offered to `World_getBlockFloat` + `Block_isSolid` at its own position and
is pushed **only when the block there is solid** (`0x4eb12f` and its twenty siblings), so
a spent draw does not imply a record.

### 3.1 The seven furniture slots

Positions are the module origin plus a constant, in blocks; the module origin is
`houseX + i*13`, `houseZ + j*13`, `originY + k*7 + 1`.

| slot | facing | dx | dz | coin | records |
|---|---|---|---|---|---|
| A | 1 | 1.5 | 4.5 | `%3` | 653 |
| B | 1 | 1.5 | 9.5 | `%3` | 657 |
| C | 3 | 12.5 | 4.5 | `%3` | 655 |
| D | 3 | 12.5 | 9.5 | `%3` | 664 |
| **E** | 2 | 4.5 | 1.5 | **none** | **1,005** |
| F | 0 | 4.5 | 12.5 | `%3` | 663 |
| G | 0 | 9.5 | 12.5 | `%3` | 661 |

★ **Slot E has no coin, and its record count is the check that says so.** Every other
face carries two slots behind a 2-in-3 coin and lands 653-664 records; E lands **1,005**,
and 1,005 × 2/3 = 670. Nothing else in the span explains a 50% surplus.

## 4. `FUN_004f2ee0` — the furniture factory

Called as `FUN_004f2ee0(out, &pos, facing, kind)`. ⚠ It looks like a two-argument cdecl
call — the caller cleans only 8 bytes — but `facing` and `kind` are pushed further up and
read as `[ebp+0x10]` / `[ebp+0x14]`. **Count the pushes against every `ret n` in the
chain before believing an arity.**

```
if rand() % 50 == 0:                 type 0x0a, extents (1.2, 0.8, 0.8)   [1 draw]
elif kind == 1:
     if rand() & 1 == 0:             type 0x20 + rand()%3, (2.0, 1.0, 1.57)  [3]
     else:                           type 0x14, (1.0, 1.0, 1.0)              [2]
else:
     switch (rand() % 6):
       0:                            type 0x20 + rand()%3, (2.0, 1.0, 1.57)  [3]
       1:                            type 0x12, (3.0, 1.0, 0.4)              [2]
       2:                            type 0x10, (1.0, 1.0, 0.5)              [3]
       3:                            type 0x1e, (3.0, 1.0, 1.0)              [2]
       4:                            type 0x1d, (2.5, 1.0, 3.0)              [2]
       5:                            type 0x38 + rand()%9, (1.0, 1.0, 1.0)   [2]
```

so it spends **1, 2 or 3 draws** and never fewer than one.

Four of the types then nudge the record along the axis their facing names — a jump table
each, all the same shape (`0x4f3430`, `0x4f3458`, `0x4f3468`, `0x4f3478`):

| type | nudge | facing 0 | 1 | 2 | 3 |
|---|---|---|---|---|---|
| `0x0a` | ±0.5 block | Z −0.5 | X +0.5 | Z +0.5 | X −0.5 |
| `0x1e` | ±0.2 | Z −0.2 | X +0.2 | Z +0.2 | X −0.2 |
| `0x1d` | ±0.3 | Z −0.3 | X +0.3 | Z +0.3 | X −0.3 |
| `0x10` | `rand()/32767 × 1 block` | Z − | X + | Z + | X − |

Every other type keeps the slot's own `(.5, .5)`. The gate checks that against all 4,958
records: **the nudged axis is the one the facing names, the other is exactly .5, and the
magnitude is the table's**.

### 4.1 ★ Reproducing it from draws the rig never recorded

`frida_town_props.py` hooks return addresses inside the builder body, so none of the
factory's eight sites appear in the capture. They are recoverable anyway — msvcrt's rand
is a plain LCG, so stepping it from the town's own zone seed and finding the offset at
which **every** recorded `(index, value)` fits pins the absolute index of the whole
stream, after which any index has a known value (lesson 33, the
`make_creatures_golden.py` recipe). Feeding the unrecorded indices between a slot's coin
and its push to the decode above:

> **4,958 of 4,958 records reproduced — type and extents — with 0 failures.**

⚠ **A gap can hold more than one factory call.** A record whose `isSolid` test fails is
never pushed but its draws were still spent, so the gap in front of the *next* push holds
both calls. The check consumes as many calls as the gap holds and tests the last against
the record.

⚠ **And that freedom is exactly why the null baseline is reported.** The walk may choose
`kind` per call, so a wrong decode could in principle be rescued by a lucky path. It is
not: over the 4,958 gaps the branch structure admits **exactly one type in 2,466 of
them**, two in 2,424, three in 56 and four in 12. Half the corpus is forced, and the
decode is right on all of it (lesson 5 — compute the null before believing a fit).

## 5. The centre pieces, by the module's `+8` KIND byte

| kind | what | records | live |
|---|---|---|---|
| 0 (and > 3) | `rand() % 5 == 0` → one type `0x0c`, `(3,3,1)`, facing `rand() & 3` | 1 | 185 of 225 passing coins |
| 1 | four type `0x13`, `(2,3,1)`, four independent `rand() & 3` facings | 4 | 312 each, and **never rejected** |
| 2 | one type `0x0c` `(3,3,1)` with a rolled facing + four type `0x10` `(1,1,.5)` at fixed facings 1/3/2/0 | 5 | 44 each |
| 3 | four type `0x1f`, `(4,1,1)`, fixed facings 3/1/0/2 | 4 | 37 each |

The kind byte lives in the module grids `extract_house_layouts.py` already executes out
of `Server.exe`: across the 23 grids it is **1 at 24 cells, 2 at 9 and 3 at 3**, and the
`+3` flag is 1 at 24 cells. Both fields were being extracted and thrown away — the
generator only emitted `type`. It now emits all three, and `gate_town_house.py` keeps
them honest by regenerating and diffing (lesson 7i).

## 5b. ★ What the PORT found that the RE had not (07-28j)

Four things the 07-28i decode did not have, all of them needed before a record could be
placed rather than merely typed, and all four now under a gate.

### 5b.1 `cellAt3D` is not an array index — it ROTATES

`FUN_004d1950` calls **`FUN_004d8f90` on its three indices before the bounds check**, and
that function is a rigid transform of the module grid driven by two fields the house pass
has already decided:

```
r = house[+4] & 3                                     0x4d8f97
  r == 1:  a, b = 3 - b - 1, a                        0x4d8fdc
  r == 2:  a, b = 3 - a - 1, 3 - b - 1                0x4d8fc7
  r == 3:  a, b = b, 3 - a - 1                        0x4d8fb2
if house[+8]:  b = 3 - b - 1                          0x4d8fef   the mirror COIN
```

So the same layout furnishes **eight** ways, and the layout tables are in RAW index space
— `extract_house_layouts.py` is right to ignore this, because the house pass stores the
rotation at `0x4e6f99` and the coin at `0x4e6fac`, *after* the tree that writes the grid.
An out-of-range index does not fault: `0x4d19e2` returns the zeroed template at
`0x584258`, so type, flag and kind all read 0 — which is what makes the `i±1` / `j±1` face
tests work at the edges of the 3×3.

This is invisible to a draw COUNT. A rigid transform preserves the number of
(wall, non-wall neighbour) pairs, so the total is identical under any rotation; only the
ORDER changes, and with it every record's position. Lesson 13 from the other side: the
count could not have caught it, and the position gate does, in 323 of 323 houses.

### 5b.2 The house sits SEVEN blocks into its plot

Every record is at `plotOrigin + 7 + 13*module + offset`. Reducing all 6,759 live records
modulo the module stride gives each of the 21 push sites **exactly one** offset, 653 to
1,005 samples apiece:

| | A | B | C | D | E | F | G | kind0 | kind1 | kind2 | kind3 |
|---|---|---|---|---|---|---|---|---|---|---|---|
| dx | 1.5 | 1.5 | 12.5 | 12.5 | 4.5 | 4.5 | 9.5 | 7 | 4/10 | 4.5/7/9.5 | 3.5/7/10.5 |
| dz | 4.5 | 9.5 | 4.5 | 9.5 | 1.5 | 12.5 | 12.5 | 7 | 4/10 | 4.5/7/9.5 | 3.5/7/10.5 |

⚠ **The offsets were NOT read off a listing**, and a listing is exactly where this goes
wrong: MSVC emits the pushes for call N+1 above the store for call N here the same way it
does in the layout tree (`RE_town_house.md` §2), so a block-at-a-time scan hands a site
its neighbour's offset — `push 0xa` sits after `kind1a`'s push and belongs to `kind1b`.

⚠ **And the decomposition alone does not pin the 7**: origin 7 and origin 8 both close,
because shifting the origin by one shifts every offset by one. What breaks the tie is that
the offsets are the span's own **literals** — the eight `.rdata` doubles (1.5, 3.5, 4.5,
0.5, 5.3, 9.5, 10.5, 12.5) and the `push 7` / `push 0xa` / `push 4` integers — and only
origin 7 lands the records on them. The gate reports both halves rather than the
conclusion (lesson 5). The binary corroborates independently: the house's own ground scan
at `0x4e755b` walks a **15**-wide window from `plotBase + 6`, which is the 13-wide module
row with one block of margin on each side.

★ **This corrects `CwTown.h`.** `townHouseCentre2X` had the house anchored at the plot
origin, with a comment asserting it was *not* centred — a claim, never a reading, and
wrong by 6 blocks in the engine's own town rendering. `kTownHouseOrigin` is now 7 and the
39-block house is centred in the 51-block village plot after all.

### 5b.3 The type-`0x10` jitter is SINGLE precision

`0x4f3148` and its three siblings compute the shift as
`ftol2( (float)((float)rand() / 32767.0f) * 65536.0f )` — **`divss` then `mulss`**, not
the doubles the rest of the position math uses. Doing it in double is off by one 16.16
unit in about one record in 5,000; that is literally how it was found (one failing record
out of 6,759, X off by 1). The gate now asserts both opcodes, because nothing about the
decode reads differently when it is wrong.

### 5b.4 The pass's first draw is the house's first recorded body draw

The port is positioned with **no free parameter**. The golden gives it the contiguous LCG
stream starting at the house's first recorded body draw, and the search over start offsets
0..39 finds the pass begins exactly there in **323 of 323** houses — i.e. no `furnish()`
call ever precedes the first coin, which slot E (the one with no coin) could in principle
have caused.

## 6. Falsification record

| claim | how it was tested | result |
|---|---|---|
| the span holds exactly thirteen rand sites | census of `0x4ead3a`–`0x4ecf20`, **both** call encodings | 13, exact |
| the span holds exactly 21 push sites, all firing | census vs the capture's push return addresses | 21 / 21 |
| `FUN_004f2ee0` has eight rand sites | census of `0x4f2ee0`–`0x4f342f` | 8, exact |
| the factory's type + extents decode | LCG-recovered hidden draws vs every pushed record | **4,958 / 4,958** |
| …and it is not a fit | how many types each gap admits | 2,466 admit **one**, 2,424 two |
| each slot's facing is a constant | every record's `+0x20` | 4,958 |
| the per-facing nudge table | the fractional part of every record's X and Z | 4,958, all four shaped types |
| slot E takes no coin | its record count against the six coined slots | 1,005 vs 653-664 |
| the kind-0 centre coin is `% 5` | `#(v % 5 == 0)` vs the facing-roll count | 35 / 35 towns |
| the kind-1 quartet is never rejected | its four facing rolls vs its four push counts | 35 / 35 towns |
| the centre types / extents / fixed facings | every one of the 1,801 centre records | 1,801 |
| the pass is villages-only | descriptor type vs which towns furnish | 35 villages, 0 ruins |
| `cellAt3D` rotates before it indexes | the call to `FUN_004d8f90` + its two selectors, byte-checked | 4 byte checks |
| the type-`0x10` jitter is f32 | the `divss` / `mulss` encodings, byte-checked | 2 byte checks |
| the module lattice, re-derived from the records | every push reduced to `(plot, module, offset)` | **6,759**, 9 of 9 modules |
| …and the offset table is the span's own literals | the eight `.rdata` doubles + the integer pushes | 29 |

## 7. The port — `townFurnishHouse` in `CwTown.h`

Ported 07-28j. It takes a draw source (the stage is interleaved with the builder's other
un-RE'd sites, like the yard's and the plaza's), the `TownHouse` the house pass produced,
the plot origin, the house's base Y and a `TownFurnishGround` whose one method is the
accept bit.

What each input is, and where it came from — five of the six were already in a port
(lesson 7h, ninth slice running):

* **the module grid** — `CwTownHouseTables.h`, carrying `kind` and `flag` since 07-28i.
* **the layout / rotation / coin** — `townHouseOne`, split out of `townHousePass` for
  this: the two passes run in the SAME plot-loop iteration, so their draws alternate
  strictly per house in every captured stream, and a gate has to interleave them.
* **the geometry** — §5b.2, pure arithmetic.
* **the factory** — §4, `townFurnitureFactory`.
* **the terrain read** — `World_getBlockFloat` + `Block_isSolid` at each record's own
  16.16 position, the one genuinely new requirement. It is FED, and the tape is keyed on
  `(drawIndex, pushSite)`: a rejected record still leaves its factory draws in the stream,
  so the draw index at which each live push happened is recorded, and the port derives the
  same pair with no help. Only **40 of 6,799** candidates are rejected.
* **the base Y** — region-cache-blocked. The port runs with `originY = 0` and the gate
  requires `liveY - derivedY` to be ONE constant across the house, which is what puts the
  `originY + 7k + 1` module stride under test. 323 of 323.

⚠ **the `id 0xd` record at `0x4eaf3f` goes to `site+4`**, the container
`RE_town_yard.md` §5 records as **hooked by no capture**. It spends no draws, so it costs
the stream nothing, but its output cannot be checked — so the port does not emit it, and
says so at the call site rather than emitting something unfalsifiable.

⚠ **No Python mirror**, deliberately, and this is the second stage in the tail without one
(`cw_creatures.py` is the other). Nothing needs it: the golden is built straight out of
the capture — the walk is not run to make it — so the C++ is checked against the game and
not against a second implementation of the same guess (lesson 17). A throwaway Python
prototype did drive the decode, and every finding in §5b came out of it.

## 8. What the cwgen gate asserts — `rederive_townfurnish`, 1,004/1,004

| claim | result |
|---|---|
| the SITE SEQUENCE over a whole house, draw for draw **including the gaps** | **323 / 323** |
| …which is 8,717 recorded body draws plus **12,248 the rig never saw** | — |
| every pushed record's type / extents×3 / facing / x16 / z16 | **6,759** records, 40,554 fields |
| the base Y is one constant per house (the `+7k + 1` stride) | **323 / 323** |
| the pass is villages-only | **35 / 35** |

★ **The sequence check is what tests the factory.** The golden ships the CONTIGUOUS
stream, so a body draw only lands back on its recorded index if every hidden factory draw
in front of it was spent too. One draw too few or too many anywhere in a house
desynchronises every later body draw in it.

## 9. What this leaves

Counted by the same span census as `RE_town_plaza.md` §9: **66 of the 176 firing rand
sites now carry 203,887 of the 228,413 draws the rig records inside the builder body —
89.3%.**

The remaining 110 sites spend 24,526 draws between them and the largest is `0x4ea254`
(1,653 draws, 35 towns) — which sits just **upstream of this stage**, in the same
per-house region, and is the natural next read: `0x4e9f00`-`0x4eab00` covers it, the
interior marking sweep and the `0x4e7fd9` / `0x4e85b2` / `0x4e8b8b` family (800-815 draws
each, 70 towns) that runs per house before them.
