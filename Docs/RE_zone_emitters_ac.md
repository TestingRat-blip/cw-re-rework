# Zone-builder emitters A and C — the runestone and the street light

> **2026-07-28 — the runestone's Y is CLOSED, and the "type-10 terrain drift" it was
> blamed on does not exist.** Emitter A's Z settle probes column `(cx+3, cz+3)`, not the
> zone centre: the walk reuses the record's own `+ftol(229376.0)` = +3.5-block 16.16
> coordinates. The port settled on the centre column, which put the record's Y one or two
> blocks out in **36 of 109** live runestones — read for a whole handoff as a terrain bug
> at type-10 cell centres and carried as the starred open problem. Fixing the probe column
> took Y to **109/109** with cwgen's terrain untouched, and Y is now part of
> `rederive_zoneac`'s pass criterion. Full retraction + the three measurements that killed
> the terrain reading: "★ A new terrain finding" at the bottom of this file.
>
> **Later the same day the gate went GREEN, 109/109**: its other two misses were the
> river/lake bed pass reading the wrong carve level (the ocean repulsion, `RE_zone_tail.md`).
> `rederive_zoneac` is now the first cwgen gate to derive an overworld emitter from the seed
> with nothing left over.

> **2026-07-27c — emitter A is PORTED and gated ab initio, and four things below were
> wrong.** Read this box before the body.
>
> | correction | what it really is | how it was settled |
> |---|---|---|
> | "that sweep gave A no live instance" (`HANDOFF_PROMPT.md`) | **A has 112 live instances.** `zone_ac_capture_zones_112.json` is 112 kind-4 zones and every one emits. The "0 runestones" line is the *144-zone town* file, where the kind is 1. | reading both files' gate output instead of the last one |
> | "`ang = i*PI/N` — HALF a circle" | **a FULL circle**: the ring counter is `add eax,2` at `0x51d994`, so `ang = 2i*PI/N` | disassembly + the decompile's `+ 2`, agreeing |
> | the site list's only insert is `0x51cd56` (`RE_zone_site_loop.md`) | **emitter A inserts a second entry** at `0x51d52d` — the runestone's centre, 16.16 with NO half block. The tree loop (`0x51ded7`) and the creature-spawn scatter (`0x51ef3f`) both walk it. | a byte census of every `lea ecx,[ebp-0x1378]` in the builder: three, the ctor and those two |
> | the mat-38 loop runs in every zone | **`0x51cd79` skips it for site kinds 4/1/3**, the same guard the gen-scatter has at `0x51b05a`, on a second read of the table 7KB later. No port had it. | 41 of the 112 kind-4 zones reach emitter A at stream index **0**, and the one kind-3 zone of `zone_props2_capture` spends 0 mat-38 draws |
>
> **Emitter A is upstream of the tree pass** — `0x51d46b` sits between the mat-38 loop and
> the 14x14 tree loop — so it needs only the pre-chain, which is why it was the cheap
> target and emitter C is not. `cwgen`: `CwForest::zoneRunestone`, gate
> `rederive_zoneac` **109/109** (was 107 — the two River-class misses were the bed pass's
> carve level, closed 07-28).

The last two open slices of Phase 2. `RE_zone_props.md` could only read their record
content statically:

> **Emitters A and C** inside the zone builder, which no sampled zone reached. […] Read
> their gates statically rather than sampling blindly for them.

That was the right instruction, and this is why blind sweeping never found them: **both
gates key off the region's per-zone site-kind grid**, and only 4 of a region's 4096 zones
carry the kind emitter A wants — 0.1%, so a 512-zone sweep expects half a hit. Reading
the gate first turned a hopeless search into four zones, all of which fire.

```
python tools/frida_zone_ac.py --scan --zones 32577,32577 ...   # the site-kind grid
python tools/frida_zone_ac.py --zones 32579,32755 ...          # emitter A
python tools/frida_zone_ac.py --census --zones <town zones>    # emitter C
python tools/gate_zone_ac.py
```

**Gated over 256 zones: 3,937 checks green** — 112 runestone zones (every kind-4 zone of
36 regions) and 144 town zones, yielding 112 runestones and 381 street lights
(251 `street-light01`, 130 `street-light02`) out of 6,523 rolls.

---

## What the gate actually reads: the per-zone SITE-KIND grid

`0x51d46b` compares a byte at `region + idx*16 + 0x18`, and `0x51a959`-`0x51a97c` builds
the index:

```
region = world[0xbc + ((regZ<<10) + regX)*4]          0x518725
idx    = (zx % 64)*64 + (zz % 64)                     0x51a959-0x51a96e   (signed % 64)
kind   = *(u8*)(region + idx*16 + 0x18)
```

so it is a **64×64 per-zone table, one 16-byte entry per zone, 4096 entries per region** —
not the 8×8 feature-cell grid `cw_featuregrid` models (that one is at `region + 0x14018`,
stride `0x68`, and is what the camp populator and the candidate grid read).

Scanning all 4096 entries of 118 regions gives a very stable census:

| kind | count per region | what it is |
|---|---|---|
| 0 | ~4076 | nothing |
| 1 | **exactly 4, always** | a **town** |
| 3 | 7–16 (16 near the world centre) | a **dungeon** |
| 4 | 0–5 | a **runestone circle** (emitter A) |

The kind-3 reading is not a guess: the six dungeon zones this project has used as its
holdout set since the dungeon work — `(32795,32796)`, `(32796,32787)`, `(32780,32788)`,
`(32804,32788)`, `(32804,32811)`, `(32787,32796)` — are **6/6** kind 3 in this table, and
the count respects the independently-derived bound: `RE_dungeon_level_rank.md` proved a
region holds **at most 16 dungeons**, and no region exceeds 16.

⚠ **Correction.** The first version of this table said kind 1 is "always a 2×2 block of
zones". It is not — that was a stencil read off one region that does not survive the next.
The four town zones are the **top four of 64 by warped falloff** and scatter around the
town centre, which often is not one of them (`RE_site_kind_grid.md`). Only the *count* of
4 is invariant.

~~⚠ **The grid itself is read live, not re-derived.**~~ — **CLOSED, `RE_site_kind_grid.md`.**
The grid is written by `FUN_0050e080`, the feature generator `cw_featuregen` already
reproduces bit-exact: **kind 3** at every type-14 cell's zone, **kind 4** at every type-10
cell's zone, and **kind 1** at the top four of the 64 zones of the type-1 cell's own tile,
scored by `max(0, 1-w)²` against the same `FUN_0052c820` and sorted descending. Gated over
118 regions, 590 checks, every one of 483,328 grid slots accounted. Nothing in this layer
is captured any more.

---

## Emitter A — the runestone circle

```
if (kind != 4) skip                                                        0x51d46b
z0 = column(zoneCentre)[0x10] + [0x1c]              # base + count         0x51d493
siteList.push_back((cx<<16, cz<<16, z0<<16))        # NO half block        0x51d52d
N = rand()%3 + 6                                                           0x51d563
for i in 0..N-1:                                    # a ring, radius 25
    ang = (float)((double)(2*i) * PI / (double)N)   # a FULL circle
    rx = zoneCentreX + (int)(cosf(ang)*25.0f)       # 0x51d5df -> [0x5582e4] cos
    rz = zoneCentreZ + (int)(sinf(ang)*25.0f)       # 0x51d5c3 -> [0x5582e8] sin
    zc = (column(rx,rz) ? its base+count : z0) + 4
    hx = rand()%4 + 3 ;  hz = rand()%4 + 3          # two draws per ring point
    ... a noisy material-6 ellipsoid over [-2hx,2hx] x [-2hz,2hz] x [zc-20,zc+20] ...
z = z0 descended to the first solid, then ascended to the first clear       0x51da60
    # ⚠ the walk probes column (cx+3, cz+3), NOT the zone centre -- see below
rec.type = 0x2d      (runestone)                                           0x51dbab
rec.pos  = ((zoneCentreX<<16) + ftol(229376.0), (zoneCentreZ<<16) + ftol(229376.0), z<<16)
rec.dir  = rand()%4 ;  rec.size = (4, 4, 5)                                0x51dbb5
push -> site+0xc                                                           0x51dbf5
```

The ring blob, `0x51d700`-`0x51d97f`, per (x, z, y) — **read from the disassembly, not the
decompile**, because Ghidra prints `4d5d30`'s hidden double halves as extra parameters and
the first call therefore reads as one-argument when the binary pushes the same value twice
(`movsd [esp+8], xmm0 / movsd [esp], xmm0` at `0x51d72a`):

```
nz = valueNoise(z*0.05, z*0.05) * 0.3               # BOTH args are z
u  = (float)(y - zc) / 10.0f                        # [0x55873c]
v  = (float)(z - rz) / (float)hz + nz
w  = valueNoise(x*0.05, y*0.05) * 0.3 + (float)(x - rx) / (float)hx
if ((w*w + v*v) + u*u <= 1.0f && !(block & 0x40)) write material 6
```

`valueNoise` = `FUN_004d5d30`, the **truncating**-lattice noise, which matters because
`y*0.05` goes negative near sea level.

Two details worth keeping:

* **The position is the ZONE centre, not the feature centre.** `[ebp-0x138c]` /
  `[ebp-0x1388]` are set once at `0x5187d4`/`0x5187d8` as `zone*256 + 0x80`.
* **The Z settle is not `Prop_settleOnTerrain`.** It is an inline pair of loops over
  `World_getBlockFloat` (`FUN_00406050`): descend one block at a time while the block is
  non-solid, then ascend while it is solid — **uncapped**, where `FUN_005287b0` caps both
  at 50, and with no footprint or support test.
* ★ **The settle probes the RECORD's column, not the zone centre** (2026-07-28).
  `0x51da10`-`0x51da3a` builds the two horizontal arguments of every `World_getBlockFloat`
  call in the walk as `X16 + ftol(229376.0)` and `Z16 + ftol(229376.0)` — the *same* +3.5
  blocks the record carries — and `0x406050` floors a 16.16 coordinate (`__alldiv` by
  `0x10000` after a negative pre-adjust), so the walk reads column **(cx+3, cz+3)**.
  Only the SEED `z0` comes from the centre column: `0x51d493` calls `Chunk_getColumnAt`
  with plain block coordinates. The two coordinates never move during the walk — only the
  Y slot (`[ebp-0x6e0]`) is stepped by `0xffff0000`.
* The `+ftol(229376.0)` = **+3.5 blocks** on both horizontal axes is the same constant
  `FUN_004e0740`'s stage 2 uses (`RE_zone_props.md`), applied here as a plain bias rather
  than a `{0,7}` offset pair.

## Emitter C — the village street light

Inside the per-column loop (`0x51fa10`-`0x520371`), for a column whose top solid block has
class `0xb` with class 0 above it. The run walk is worth stating precisely, because
getting it slightly wrong is what made the first version of this gate fail:

```
0051fa91  dec eax                  ; eax = count - 1
0051fa92  cmp ecx, eax             ; ecx = i
0051fa94  jge 0x51fac0             ; i >= count-1  ->  ALWAYS take the qualify path
```

so the walk is *not* "for every run boundary": for `i < count-1` the block above must be
non-solid, but **the last block always qualifies for the test**, and the class it compares
against 0 is read at index `count` — one past the counted extent. Modelling the loop as
`k < n-1` undercounted the qualifying columns by 3–18 per town and failed the gate; the
census now mirrors the branch exactly.

```
road = FUN_004d19f0(x, y)                       # the VILLAGE ROAD field
if (road <= 0.75) skip                                                     0x51fb53
if ((x + 90*y) % 470) skip                                                 0x51fb70
if (rand() % 16) skip                                                      0x51fb7e
for k in 0..6: if solid(x, y, z0+k) skip        # seven clear blocks       0x51fba0
rec.type = FUN_004fc140(x, y) > 0.8 ? 0x33 (1,1,8) : 0x32 (2,2,8)          0x51fbfa
         # 0x33 = street-light01, 0x32 = street-light02  (RE_prop_ids.md)
rec.pos  = (x<<16, y<<16, z0<<16)               # NO half-block bias
rec.dir  = rand()%4 ;  push -> site+0xc                                    0x51fcdb
```

`0x32` / `0x33` are **`street-light02` / `street-light01`** and `0x2d` is `runestone` —
the client's own type→model table (`RE_prop_ids.md`). ⚠ An earlier version of this line
had the two lights the other way round, taking them from `assets/props/prop_ids.json`,
whose rows for 50/51 are swapped. The gate's own data settles it: `0x33` carries record
size **(1, 1, 8)** and `street-light01.cub` is `[5, 5, 25]`, while `0x32` carries
**(2, 2, 8)** and `street-light02.cub` is `[6, 11, 25]` — the slimmer model takes the
slimmer footprint. Every clause of the gate reads as that:
`road > 0.75` means `(1-w)² > 0.75`, i.e. **inside ~0.37 of the village radius**; the
`% 470` lattice spaces the lamps along a line; seven clear blocks is headroom for an
8-tall post; and the `0xb` ground is why the lights only turn up in **desert** towns.

`FUN_004fc140`'s `> 0.8` here is the *same function and the same threshold* the forest
tree builder uses to pick its tree type (`CW_CONFIDENCE_XREF.md:105`). Two independent
worldgen decisions thresholding one per-column field at the same 0.8 is a strong lead that
`lib_fn_4fc140` is misfiled under `_library` — but a lead is all it is, and the label is
**left alone** until the body itself is read. Recorded here so the next pass has it.

---

## ⚠ Retraction: emitter C does not build a string

`RE_zone_props.md` recorded, and `HANDOFF_PROMPT.md` repeated:

> **C** (`0x51fcdb`): […] it builds a **string** on the way (`FUN_004cde40` × 3,
> `FUN_00406380`, `FUN_00402a40`) — a named prop, not a plain one.

There is no string. The three functions are eight, sixteen and sixteen instructions long
and disassembling any one of them settles it:

| addr | body | what it is |
|---|---|---|
| `004cde40` | `cdq; shld edx,eax,0x10; shl eax,0x10; store [ecx], [ecx+4]` | **int → int64 16.16** |
| `00406380` | copies 6 dwords to `[ecx..ecx+0x14]`, `ret 0x18` | **a 3 × int64 position ctor** |
| `00402a40` | copies the same 24 bytes | **position assign** |

The three calls convert `z`, `y`, `x` (pushed right-to-left, so the ctor receives
`x, y, z`) and the result is assigned to the record's `pos` at `+8`. What made it look
like string building in the decompile is that the calls return a struct by value, so
Ghidra threaded the hidden return-slot pointers through as extra arguments and printed
the *call-site addresses* `0x51fc72` / `0x51fc82` / `0x51fc92` as parameter values.

This is the `RE_dungeon_markers.md` lesson again, on a decompile instead of a capture:
name the cheapest observation that would falsify the reading and make it. Here that was
one disassembly of an eight-instruction function.

---

## What is gated

`tools/gate_zone_ac.py`, over `raw/zone_ac_capture*.json`:

**Emitter A** — that a runestone is emitted **iff** the zone's site kind is 4; that
`N = rand()%3 + 6`; that the ring spends exactly two draws per point and the branch's
whole stream is `1 + 2N + 1`; that the record is type `0x2d`, size `(4,4,5)`; that both
horizontal coordinates are the zone centre `+3.5` blocks exactly; that Z is a whole block;
and that `dir` is the last draw `% 4`.

**Emitter C** — that each pushed record is a street light with the size its type implies;
that its position carries no half-block bias; that its column sits on the
`(x + 90y) % 470` lattice; that `dir` is the matching draw `% 4`; that one dir draw is
spent per pushed record; that a record is only pushed where a roll came up 0; and that
the number of rolls equals the number of class-`0xb` lattice columns with `road > 0.75`,
counted independently by walking the finished zone's own columns and calling the game's
`FUN_004d19f0` on each.

---

## The rig

`tools/frida_zone_ac.py`. Three notes:

* `--scan` reads a whole region's 4096-entry site-kind table after building **one** zone,
  which is how the type-4 zones were found without sweeping.
* `--census` walks the finished zone's columns (`col+0x10` baseZ, `col+0x18` block array,
  `col+0x1c` count — from `FUN_004d23f0`'s in-range path at `0x4d248d`) and evaluates
  emitter C's own class/lattice/road gates, so a town that emits nothing reports *why*
  rather than staying silent.
* `FUN_004d6670` is **thiscall** — `ecx` is the vector and the record is `args[0]`, not
  `args[1]`. Reading the wrong slot gave a record with type `0x80035ff` and a position of
  −82 billion, which is what a plausible-looking garbage read looks like.

---

## The PORT (2026-07-27c) — emitter A, ab initio

```
python tools/cw_rederive/make_zoneac_golden.py    # section 58, from the live captures
build/cwgen_test.exe tools/cw_rederive/golden_rederive     # gate rederive_zoneac
```

`CwForest::zoneRunestone` replays the zone's pre-chain from the seed and derives the
runestone; `cw_forest.build_zone_state` carries the same code (draws, site entry, ring
stamp) so the two ports stay in step.

### What the new gate adds, and why it is a different claim

`gate_zone_ac.py` proves the **decode** against 112 live records. It cannot prove
**reachability** — whether a port starting from the seed arrives with the stream in the
right place — and reachability is what every other emitter in this builder gets wrong.
The golden therefore carries the **absolute zone-stream index** of the emitter-A gate,
recovered by locating each zone's recorded draws in its own LCG.

⚠ Two traps in that recovery, both paid for here:

* the rig's `randN` is **never reset**, so the origin is **negative** for every zone but
  the first. Rejecting `o < 0` rejects every real origin — and the search then "locates" a
  handful of zones on a chance match, which looks like partial success.
* a 3-4 value run matches a 15-bit LCG by accident often enough to matter. An origin is
  accepted only when **every** recorded `(n, value)` of the zone satisfies
  `lcg[n + o] == v`. With that, **249 of 249** zones of both captures locate — which also
  proves each zone's seed is `base + zz*0x10000 + zx` as assumed.

### Result: `rederive_zoneac` 109/109

| claim | result |
|---|---|
| the emitter is reached at the live absolute stream index | **109 / 109** (was 107, fixed 07-28) |
| `N = rand()%3 + 6`, and the ring spends exactly 2 draws per point | 109 / 109 |
| the record's X and Z are the zone centre + 3.5 blocks | 109 / 109 |
| the record's **Y** — the settle at `(cx+3, cz+3)` | **109 / 109** (was 73, fixed 07-28) |
| `dir` is the last draw `% 4` | 109 / 109 |
| cwgen declines the zone rather than guessing | 3 of 112 |

✅ **The two index misses were the river/lake BED pass, and they are CLOSED (07-28).**
Once the gen-scatter and the mat-38 loop are both skipped by the site-kind guards and the
parity is even, a kind-4 zone's pre-chain has exactly one draw source left — so the
attribution was never a guess. cwgen spent 30 draws where the server spends 0 in
`(32523,32659)` and 12,808 against 5,533 in `(32595,32891)`. The cause was the bed pass's
CARVE LEVEL: `0x51bcde` calls `FUN_004f9b70` in full, and the ocean-site repulsion lives
inside it, but all three ports used the *open* base height. Both zones are ocean-adjacent
(the open base at a bed column of the first is **-99.99**, the repulsion's own -100 site
elevation); none of the eight zones the bed pass was proven on has an ocean nearest-site,
which is why it stayed invisible. Full account in `RE_zone_tail.md`. `gate_zone_bed` is
still 44/44 with the fix.

### ~~★ A new terrain finding, from the same gate~~ — RETRACTED 2026-07-28

The gate reported the record's Y separately from its pass criterion, and Y disagreed in
**36 of 109** zones, bidirectionally:

| live − cwgen | −2 | −1 | 0 | +1 | +2 |
|---|---|---|---|---|---|
| columns | 3 | 16 | 73 | 14 | 3 |

This file, `HANDOFF_PROMPT.md` and `cwgen_test/main.cpp` all read that as **"cwgen's
terrain is 1-2 blocks out at a type-10 cell CENTRE ... a small error in the pre-truncation
float `surf` inside the type-10 deform"**, and filed closing it as a terrain-pipeline
slice — open problem 0, the starred one.

**The terrain was never wrong.** cwgen's height at all 109 type-10 cell centres is exact.
The residual was **emitter A settling on the wrong column**: the port walked the zone
centre, the game walks `(cx+3, cz+3)` (see the settle note above). Correcting the probe
column took Y from **73/109 to 109/109** with no terrain change at all, and Y is now part
of the gate's pass criterion so it cannot rot back.

Three cheap measurements falsified the terrain reading *before* anything was changed, and
they are the reusable part:

1. **The land mask cannot pay for it.** Dumping `special` at all 109 columns: the type-10
   deform drives it to ≤ 0.0089, worth at most **0.32 blocks** of `surf` (the coefficient
   is `term_a + 8*SUM` ≈ 98) — and it is < 0.0001 in 20 of the 38 drifting zones, several
   of which need |δ| > 0.9. E.g. (32652,32763) has `frac(surf) = 0.944`, `lmTerm = 0.0000`
   and live one block LOW: no land-mask term of any size can move it.
2. **The ocean repulsion cannot pay for it either.** `FUN_004f9b70`'s repulsion is
   `smoothstep(min((1-fall)*1.1, 1)) * (int)elev` with `cvtdq2ps` on an integer site
   elevation (`0x4fab33`), and at a cell centre `fall ≈ 0.06` so the smoothstep is
   saturated. It is therefore **exactly 0 or +100** in all 109 columns — never a fraction —
   and it fires in 33 of them at the *same* rate in the agreeing zones (20/71) as in the
   drifting ones (13/38).
3. **No constant or proportional bias fits.** Sweeping a constant δ over [−2, +2] at 0.001
   scores at best **74/109** against the then-current 73; scaling by `surf` or `baseH` does
   no better. The error was per-column and zero-mean — which is what reading a column three
   blocks away looks like.

Also checked and clean along the way: the type-10 branch of `FUN_00523d80`
(`0x524305`-`0x5243f6`) transliterates exactly as the port has it — the `radius > 0` guard,
`w = (dx² + dz²)/r²` off `lib_fn_4f79f0`'s plain 128-bit centre−position subtract, the
`w < 1` guard and `l88 *= 1 - (1-w)²`; and `FUN_0052cd50`'s feature repulsion covers
`{1,2,4,0xd}` and `{6,7}` only, so type 10 correctly adds nothing to the climate gate.
**Closed doors, recorded so they stay shut.**
