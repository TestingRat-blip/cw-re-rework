# The town builder's prop layer — mapped and put under contract

`RE_zone_props.md` closed its census with "the town builder's three emitters
(`004e310a` / `004eaa7a` / `004ee3aa`), the other half of the census". **None of those
three is an emitter, and none is a function.** Each is an `8d 9b 00 00 00 00` MSVC
alignment NOP that an `eb 06` hops over — the three points where Ghidra split
`FUN_004e28e0`'s ~64 KB body. They appeared in the census only because the real call
sites live inside those fragments.

```
python tools/frida_town_props.py --towns 5    # 67 towns -> raw/town_props_capture_towns_5.json
python tools/gate_town_props.py               # 8,646 checks
```

**Gated over 67 towns: 4,106 + 268 + 4,272 + 12,428 + 15,826 = 36,900 checks green.**

On positions: **Z is fully accounted for, and both lattices are derived here and
verified** — the plot lattice and, inside it, the 13-block building lattice. Every one of
the 7,788 town-builder records is placed on one of them.

---

## The real surface

Inside `0x4e28e0`-`0x4f26e9`:

| | |
|---|---|
| 56 | `FUN_004d6670` prop `push_back` (**55 of them fired**) |
| 32 | `FUN_005287b0` `Prop_settleOnTerrain` |
| 12 | `FUN_004c84b0` prop record ctor |
| 16 | `FUN_00524540` `creature_spawn_builder` |
| 170 | `rand()` sites |

The zone builder calls it at `0x51d452` for feature type **1 or 5** only — two of the five
types `camp_populator` skips, so towns and camps are mutually exclusive.

## Finding the towns

Blind sweeping does not work here. A 256-zone sparse grid found **one** town, in a zone at
the edge of its town's radius that emitted nothing at all. Instead the rig asks
`cw_featuregen` — the already-bit-exact port of `FUN_0050e080` — for a region's 64 feature
cells, keeps the type-1 and type-5 ones, and goes straight to their own zones. Twenty-five
regions give 67 town zones and **all 67 fire**.

That is the general move: when a subsystem is gated on a feature type, generate the
feature grid instead of hunting for it.

## What the gate proves

### 1. The settle/push contract — 4,106 checks

Each of the 32 `Prop_settleOnTerrain` sites pairs with **exactly one** push site, 32 for
32. A passing test is always followed immediately by that push; a failing one pushes
nothing. And the pushed record is byte-identical to the record the test left behind —
`Prop_settleOnTerrain` rewrites Z in place and the caller pushes the mutated record, the
same contract `FUN_004e0740` and `camp_populator` obey.

### 2. The container — 268 checks

Every push during a town build targets one vector, the town's own `site+0xc`, and every
pushed record appears in it in push order.

Two things had to be understood before that check could be written, and both are worth
carrying:

* **`push_back` never copies word 1 of the record.** `FUN_004e0740`'s inlined copy writes
  `*dst = *src` and then `dst[2] = src[2]` — `dst[1]` is skipped — and the live records
  confirm `+4` differs between the source record and the vector copy. Comparisons must
  drop it.
* **860 records arrive with no out-of-line push at all**, all of type 1 or 2. They come
  from an **inlined** `push_back` inside `FUN_00524540`, whose two `FUN_004ce8e0` sites
  (`0x525134`, `0x52525e`) push into `[edi+0xc]` — the same vector. No hook on
  `FUN_004d6670` can see them. The gate counts them and names them rather than folding
  them into the total.

⚠ That also sharpens the census this whole line of work rests on: `FUN_004ce8e0` is
`_Reserve`, so it is called only when a push has to **grow** the vector. An emitter that
only ever pushes into spare capacity would be invisible to it too. Every emitter found so
far pushes enough to grow, but the census is "complete for emitters that grow", not
"complete".

### 3. The emitter table — 4,272 checks

Each push site's prop type is what the table says. The layer's shape:

| push sites | records | types | size |
|---|---|---|---|
| `e3faf` … `e49cc` (12) | 42 | `0x15`-`0x17` | (3.5, 2, 3) |
| `e4a90` … `e5014` (8) | 30 | `0x18`-`0x1b` | varies |
| `e5967`, `e5b70` | 276 | `0x34`-`0x37` | (2, 1, 1.5) |
| `eb145` … `ebaf4` (7) | 4279 | 18 distinct ids | varies |
| `ebcee`, `ec40a` | 184 | `0x0c` | (3, 3, 1) |
| `ebec2`, `ebfef`, `ec11c`, `ec249` | 104 | `0x1f` | (4, 1, 1) |
| `ec5ae`, `ec6db`, `ec808`, `ec935` | 84 | `0x10` | (1, 1, 0.5) |
| `ecb14`, `ecc41`, `ecd6e`, `ece9b` | 1072 | `0x13` | (2, 3, 1) |
| `ed149` … `ed99e` (8) | 498 | `0x10`,`0x12`,`0x18`-`0x1c` | varies |
| `efac4`, `efc22`, `efd70`, `efece` | 1218 | `0x12` | (3, 0.4, 0.4) |

The `0x15`-`0x17` family is the only row read out of the binary rather than observed:
`FUN_004f3630(record, pos, dir)` fills the record from a position, then ends
`type = rand() % 3 + 0x15` with the size hard-coded to (3.5, 2.0, 3.0). Its fourth
argument is pushed by every caller and never read.

The four-site rows (`0x1f`, `0x10`, `0x13`, `0x12`) fire in exact multiples of four —
one per side or corner of a plot.

## Where the records land — 12,428 checks

### Z is never the emitter's choice

Every pushed record's Z is what `Prop_settleOnTerrain` settled to — the settle/push
contract above already proves the pushed record is byte-identical to what the test left
behind — and it is **always a whole number of blocks**, 12,113 for 12,113. A port that
reproduces the settle needs no Z arithmetic at all.

### Three four-site groups are exact fixed stencils

| group | anchor | offsets (blocks) | records |
|---|---|---|---|
| type `0x1f` | `ebec2` | (0,0) (7,0) (4,-4) (4,3) | **26 / 26** |
| type `0x10` | `ec5ae` | (0,0) (5,0) (3,-3) (3,2) | **21 / 21** |
| type `0x13` | `ecb14` | (0,0) (6,0) (0,6) (6,6) | **268 / 268** |

Exact, not nearest-neighbour: the gate looks the partners up at the predicted block and
fails if they are not there.

⚠ The **fence group** (type `0x12`, `efac4` / `efc22` / `efd70` / `efece`) is *not* one of
these, and an earlier read that said it was came from nearest-neighbour matching, which
happily pairs posts across neighbouring plots. Its per-side counts differ (14/13/14/14 in
one town), so there is no per-anchor 4-tuple; it walks the four sides of a plot boundary.
A span-parametric stencil fits only 150 of its 308 anchors, all at span 17.

### The `+0.5` block-centre bias is per-site

`FUN_004cde40` turns a block coordinate into 16.16 (`shld edx,eax,0x10; shl eax,0x10`) and
some emitters then add 0.5 (`FUN_004e0700` / `FUN_004ce290` with the constant at
`0x5586f0`). It is **not** a global convention: of the 56 sites, **4 always centre, 44
never do, and 8 are mixed** — the mixed ones vary within a single site.

### The plot lattice — derived here, 8,001 checks

Read straight out of the builder's own scan loop (`0x4e291d`-`0x4e2b60`):

```
n     = 4 if featureType == 5 else 5            cmove at 0x4e292a
span  = 256 / n                                 0x4e29f0
plot(r, c):  originX = zoneX*256 + (r*256)/n    0x4e2b20-0x4e2b4c
             originY = zoneY*256 + (c*256)/n
             footprint = span x span blocks
```

The **outer** loop index drives X and the **inner** drives Y, while the plot record
pointer advances by `28*n` per inner step and `0x1c` per outer step — so the record index
is `r + n*c`. That is the array transpose.

Both branches of `n` are exercised and both hold exactly: the 67 towns split 25 villages
(type 1, `plotCount` 25) and 42 ruins (type 5, `plotCount` 16), **67 for 67**. And every
town-builder record falls inside its own zone and inside a plot cell, **7,788 for 7,788**.

### Twenty sites have a fixed position within their plot

With the lattice in hand, 20 of the 55 firing sites resolve to a fixed plot-**perimeter**
position — three per side for the `0x15`-`0x17` family, two per side for `0x18`-`0x1b`:

| family | along-side positions | sites |
|---|---|---|
| `0x15`-`0x17` | 18, 25, 32 | 12 (3 × 4 sides) |
| `0x18`-`0x1b` | 22, 28 | 8 (2 × 4 sides) |

Each is **exactly** constant on the axis running along its side, and sits a few blocks in
from the plot edge with a block or two of jitter on the perpendicular axis. The gate
asserts the constant axis exactly.

### The building sub-lattice — and a retraction

⚠ **The "27-block window" in the previous revision was wrong**, and wrong the same way the
fence stencil was: I reported `min..max` and never looked at the actual set. The offsets
take **three or four values, not twenty-seven**. `ecb14`'s anchor is
`X ∈ {11, 24, 37}` — that is `11 + 13k`, not a window. Print the set, not the range.

Inside each plot the builder walks a **list of buildings**, stepping a block offset by
**13** per entry (`add [ebp-0x5c60], 0xd` at `0x4e7205`, loop bounded by a `size()` call
at `0x4d8dc0`; the interior emitters multiply their own index by 13 at `0x4ec9a8` and
`0x4ec9ed`). So an interior prop's offset inside its plot is

```
offset = residue + 13 * cell,     cell in 0..3
```

with `residue` fixed per site and per axis — the prop's place inside a 13×13 building
footprint. **46 of the 55 firing sites obey this**, and the gate checks every record
against the site's residue set.

The remaining nine: seven are plot-perimeter sites whose one jittering axis takes three
values, and two — `e5967` and `e5b70` — run a fence **along** a plot edge instead: one
axis picks an edge (`0` or `span`), the other steps two blocks at a time down the side
(odd values `1..span-2`).

### The prop layer is village-only

Feature type 1 builds a town **and props**; type 5 (ruins) builds a town and emits **no
props at all**. All 25 villages in the sample emit, all 42 ruins do not — 67 for 67. That
also explains the "25 of 67" split the previous revision left open.

For reference, the fence loop's own coordinate line is

The fence loop computes its block coordinates as

```
X = zoneX*256 + plotOffsetX + (span - span % pitch)/2 + span/4      (0x4ef330-0x4ef349)
Y = zoneY*256 + (i - i % pitch)/2 + plotOffsetY + span/4            (0x4ef34f-0x4ef37d)
```

— the same accumulation the scan loop does. The plot table itself (`FUN_004f36f0`
allocates it, 0x1c bytes a record, `FUN_004e19f0` sorts it) holds heights, roles and a
score, **not coordinates**: a plot's position is implied by its index in the n×n grid,
which is what the lattice above reconstructs. The capture carries the table
(`plotsAtSort`, 60 of 67 towns) next to every record, so the parent project's
`Towns.cpp` can be diffed against it directly.

## The creature layer, in passing

The 67 towns made **17,488** `creature_spawn_builder` calls from 21 sites, which pushed
4,325 prop records out of line and another 860 inline. Sixty of the 67 towns spawned
creatures; only 25 emitted props. Nothing here decodes that split.

## Open

1. **Which building cells are occupied.** Both lattices and the residue table are done,
   so a prop's position is pinned to `plotOrigin + residue + 13*cell`. What is not decoded
   is *which* cells a plot fills — the building list the loop at `0x4e6fe3` walks, whose
   length comes from a `size()` call. That is the house pass, and it is the last piece
   between here and predicted positions.
2. ~~**The 25-of-67 split**~~ — **it is feature type 1 vs 5**, 67 for 67. Villages emit
   props; ruins emit none.
3. **The `eb145`-`ebaf4` interior pass**, 4,279 records over 18 prop ids, the largest
   single block.
4. **`FUN_00524540`'s own prop records** — types 1, 2 and 3, pushed both ways. The
   creature spawn builder was reversed for its `Spawn` output (`RE_524540_creature_spawn.md`);
   its prop output was never looked at.
