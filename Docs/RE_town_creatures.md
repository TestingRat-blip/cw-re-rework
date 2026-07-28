# The town builder's INHABITANT SCATTER (`0x4eda0b`-`0x4edcbf`) — decoded and gated

> **The question this slice was opened to answer** (`HANDOFF_PROMPT.md` item 1,
> `RE_town_verdict.md` §7.3): `0x4eda58` is the third of the town builder's 176 firing
> rand sites and the first genuinely broad one — **2,968 draws across 69 of the 92
> captured towns**. What is it, and what does it need?
>
> **It is the town's inhabitant creature scatter**, and it needed nothing that was not
> already on disk. Its species list is a **hardcoded five-entry literal** pushed at the
> head of every builder call; its only descriptor input, `desc+0x28`, is the field
> `cw_featuregen` has called `msub` since the camp descriptor was derived; and its level
> table is the one `CwZoneCreatures` already ports. Fourth consecutive slice in which the
> blocking input turned out to be misfiled rather than missing (lessons 26 / 7g).

```
python tools/gate_town_creatures.py                        # 1,072 checks over 92 towns
build/cwgen_test.exe tools/cw_rederive/golden_rederive      # rederive_towncreatures
```

---

## 1. What the stage is

It sits inside the builder's per-plot role dispatch, on the path every plot reaches
(`0x4e3a25` opens the loop; the roles are a long if-chain whose bodies are laid out
linearly, so the *address* order is not the *chain* order). Per plot:

```
if plot[+0xc] == 2:            skip          0x4eda0b   (a plain buildable plot)
if plot[+0x18] <= 0.2f:        skip          0x4eda16   (comiss/jbe -- strict >)
for i in 0, 1:                               0x4eda40   -- X, OUTER
  for j in 0, 1:                             0x4eda52   -- Z, INNER
    if (rand() & 7) != 0:      next          0x4eda58   ★ the site in question
    X = zoneX*256 + (r*256)/N + i*(span/2) + span/4
    Z = zoneZ*256 + (c*256)/N + j*(span/2) + span/4
    if species list is empty:  next          0x4edac2   (provably dead -- see §4)
    col = Chunk_getColumnAt(X, Z, site)      0x4edaf0
    if col == NULL:            next          0x4edaf7
    y = col[+0x14]                           0x4edaff   (== col[+0x10] - 8, see below)
    while Block_isSolid(World_getBlockAt(X, y, Z, site)): ++y      0x4edb30-0x4edb5b
    e = new Entity(0x10f0) ; Entity_ctor(e)  0x4edb62/0x4edb70
    e.pos   = (X<<16, Z<<16, (y+1)<<16)      0x4edb9a-0x4edbce   -- NO half block
    e[+0x54] = rand() * 360.0f / 32767.0f    0x4edbd3   the facing, f32 mul then f32 div
    e[+0x2c] = SPECIES[(unsigned)rand() % 5] 0x4edc02   ★ a hardcoded list
    (lo, hi)  = FUN_0040f0a0(e[+0x2c])       0x4edc32   the species LEVEL range
    e[+0x34] = rand() % (hi-lo+1) + lo       0x4edc3a   signed idiv
    e[+0x28] = 5                             0x4edc65   the kind
    e[+0x58] = (char)desc[+0x28]             0x4edc6f
    site.entities.push_back(e)               0x4edc7c
```

`r`/`c` are the plot loop's outer/inner indices, `N = townPlotsPerEdge(ftype)` (5, or 4
for a ruin) and `span = 256/N` (51 or 64) — all three already in the port. The four
candidates are the **centres of the plot's four quadrants**: offsets `{span/4,
span/2 + span/4}` = `{12, 37}` at span 51, `{16, 48}` at span 64.

So a firing plot spends **4 draws**, plus **3 more per coin that comes up 0**.

### The record is the creature scatter's `Entity`, not the camp's `Spawn`

`+0x28` kind, `+0x2c` species, `+0x34` level, `+0x54` facing, `+0x58` the faction byte —
field for field the class `RE_zone_creatures.md` decodes at `0x51ed60`, and *not* the
`Spawn` of `RE_524540_creature_spawn.md` (facing `+0x50`) nor the camp's (msub at
`+0x54`). Kind **5** is new: the overworld scatter emits kinds 1 and 6.

### `col[+0x14]` is `col[+0x10] - 8`

`FUN_0052d860` is a one-instruction `return this[0x14]` accessor shared by several
structs, so the name says nothing. The column's `+0x14` has exactly one writer in the
whole column prologue — `0x519701`: `eax = col[+0x10]; eax += -8; col[+0x14] = eax`. So
the ground walk starts **8 blocks below the record base** and climbs. Because
`World_getBlockAt` substitutes the **class-1 solid** template below the base
(`DAT_00583d14`, one of the three closed doors in `HANDOFF_PROMPT.md`), those eight
probes are always solid and the walk always reaches `col[+0x10]`; it is a start point, not
a real search window. `Block_isSolid` (`0x4061f0`) is `cls = b[3] & 0x1f; cls != 0 &&
cls != 2` — **air and water are not solid**, everything else is.

### ⚠ The position carries NO half block

`FUN_004cde40` is `int -> int64 << 16` and nothing else (`cdq / shld edx,eax,0x10 /
shl eax,0x10`), and `FUN_00406380` copies the three int64s into the vec3 unchanged. This
is the **seventh** copy of this project's 16.16 coordinate build and the first that does
*not* carry `+0x8000` — `RE_zone_site_loop.md`'s site-list entry does, the camp ring does,
emitter A's record does. Lesson 14 says port the arithmetic from the copy that runs; this
one runs and it is bare.

---

## 2. The two inputs, and where they already were

### 2.1 The species list is a hardcoded literal — `0x4e2964`-`0x4e29eb`

Five `push_back`s at the very top of `FUN_004e28e0`, before the plot array is even
allocated, with the value written into `[ebp-0x5c50]` as an immediate each time:

| order | species |
|---|---|
| 0 | `0x22` (34) |
| 1 | `0x1e` (30) |
| 2 | `0x13` (19) |
| 3 | `0x1a` (26) |
| 4 | `0x21` (33) |

Unconditional, seed-independent, climate-independent. The pick is `(unsigned)rand() % 5`
(`xor edx,edx / div esi` — the **unsigned** divide, against the signed `idiv` the level
uses two instructions later; `rand()` is never negative so the two agree, but the port
follows the binary).

Their level ranges out of `FUN_0040f0a0`, which `CwZoneCreatures` already tabulates:
`0x13`/`0x1a`/`0x1e` → 3..6, `0x21`/`0x22` → 2..4. So the level modulus is 4 or 3
depending on the pick — which is *not* observable, because the capture records the draw
and not the level (§4).

**Transcribed data gets a machine check** (lesson 7c): `gate_town_creatures.py` re-reads
all five immediates and the `and eax, 0x80000007` coin mask straight out of `Server.exe`
every run and diffs them against the source literals, so a typo cannot survive a commit.

### 2.2 `desc+0x28` is `cw_featuregen`'s `msub`

The only descriptor field this stage reads beyond `+0x18` (the type). Measured over the 92
captured towns it is **0 in all 50 villages** and 0..4 in the ruins, per *cell* rather than
per region — and `cw_featuregen.py`'s `_subswitch` has been producing exactly this since
the camp descriptor slice ("the shared count sub-switch -> cell+0x28 ... 52/52 vs the
camp/grid captures"), where `CwFeatureGrid` calls it `FeatureCell.msub` and `CwZoneCamp`
already feeds it into a spawn record. Nothing new was needed; it had a different name.

---

## 3. What is gated

### 3.1 `tools/gate_town_creatures.py` — live, over both town captures

| claim | result |
|---|---|
| the coin site fires exactly `4 x #{plots: role != 2 and score > 0.2}` | **70 / 70** towns |
| every coin with `v & 7 == 0` is followed by facing, species, level, in that order | **377 / 377** |
| no coin with `v & 7 != 0` is ever followed by a spawn draw | **2,591 / 2,591** |
| the four spawn-stage return addresses are the only ones in `0x4eda00`-`0x4edd00` | 4 sites |
| the five species immediates + the coin mask, re-read from `Server.exe` | 6 / 6 |

**The predicate is not vacuous** (lesson 5). Of 1,435 plots in the 70 towns with a plot
snapshot, **737 qualify** and 698 do not, and the qualifying set spans 15 distinct roles
(0, 3, 5, 6, 7, 9-16, 18, 20) — every role present except the 435 plain 2s. Dropping
either term of the predicate breaks all 70 towns.

**What the gate is fed** (lesson 12): the live `plotsLate` snapshot and the town's own
recorded draws. Deriving the plot table needs the scan's three terrain booleans, which are
region-cache-blocked, so this gate proves the **rule**, and `rederive_towncreatures`
carries the ab-initio half.

22 of the 92 towns have no `plotsLate` (the rig snapshots it at the first
`FUN_004d8dc0`, so a town that builds no house never takes one). They are named and
skipped, not counted as passes.

### 3.2 `rederive_towncreatures` (cwgen, section 62)

Asserted:

* **the rule against the live plot table** — cwgen's `townCreatureCoins` fed the golden's
  live roles and scores reproduces the live coin count, **70 / 70**;
* **the branch logic against the live coin values** — cwgen's spawn count fed the golden's
  coin values reproduces the live hit count, **70 / 70**. This is what pins the `& 7` mask
  and the claim that neither of the two skip guards ever fires.

Measured and never asserted, because they inherit the scan's terrain block: the coin count
against cwgen's *own* derived plan.

The derived candidate positions are hashed into the suite's output hash rather than
asserted, because **no capture records where a town creature landed** (§4).

---

## 4. Deliberately not claimed

1. **No spawn is captured, so every value the record receives is byte-proven only.** The
   facing, species, level, kind and faction formulas are read off the disassembly; the rig
   hooks `FUN_004d6670` (the 0x188-byte *prop* push) and `FUN_00524540`, and this stage
   uses neither — it pushes through `FUN_004f2be0` into `site+0x18`, and only that
   vector's *length* is recorded. Same standing as the creature scatter's positions in
   `RE_zone_creatures.md`, and the same rig change would close both.
2. **`site+0x18` has six push sites in the builder** (`0x4e54d0`, `0x4edc79`, `0x4ee2b7`,
   `0x4f0c94`, `0x4f1ef8`, `0x4f2172`), so `ents - ents0` is a sum over six producers and
   is *not* a count of this stage. Checked and rejected as an observable rather than
   assumed to be one: the delta is 12-31 per town where this stage alone contributes 1-11.
3. **Both skip guards are unfalsified, and one is provably dead.** The empty-list test at
   `0x4edac2` cannot fire — the list is five hardcoded entries — so it is a closed door
   (lesson 6). The `col == NULL` test at `0x4edaf7` never fired in any of the 377 hits;
   the port keeps it because `Chunk_getColumnAt` really can return null off-lattice, but
   nothing here distinguishes it from `true`.
4. **`score > 0.2` is strict but the boundary is unreachable in practice.** `comiss/jbe`,
   so a score of exactly 0.2f skips; no sampled plot is within 1e-6 of it.
5. **This stage does NOT advance the zone stream.** Its draws are interleaved with the
   other 172 rand sites in **66 of the 69** firing towns (median 7 runs per town), so
   knowing it does not let anything downstream be replayed. It closes one site of the
   ledger, not the ledger.

## 5. What is left

`0x4eda58` and its three followers account for **4,099** of the layer's draws. Remaining,
in the measured order from `RE_town_verdict.md` §7.3:

| site | draws | towns | |
|---|---|---|---|
| ~~promotion~~ | 252 | 56 | ✅ closed 07-28d |
| ~~`0x4eda58` + facing/species/level~~ | **4,099** | 69 | ✅ **closed 07-28e — this file** |
| `0x4e742e` | 15,609 | 70 | next |
| `0x4e5136` | 15,606 | 5 | |
| `0x4e54e8`, `0x4ef7c8` | 132,928 | 15 / 28 | per-column loops, 36% of the layer |

**169 firing sites left.** The plot heights stay region-cache-blocked.
