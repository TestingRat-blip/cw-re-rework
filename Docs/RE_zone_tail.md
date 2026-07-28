# The zone builder's tail — what actually sits between mat-38 and emitter B

```
python tools/gate_zone_tail.py     # 6,558 checks over 28 even zones, no server needed
```

**Status: the "un-RE'd stage" does not exist.** The span between the mat-38 loop
(`0x51d396`) and emitter B (`0x51e5c7`) is the **dense-forest tree pass**, which this
project has had RE'd and bit-exact for months under a different name —
`tools/cw_rederive/cw_forest.py` and `RatForge/src/worldgen/cw/CwForest.cpp`,
`RatForge/docs/rederive/FOREST_TREE_BUILDER_513760.md`.

---

## The wrong turn, and why it was reasonable

`RE_zone_props.md` and the note at the even branch of `CwZoneScatter.cpp` recorded this:

> emitter B's two position draws land at stream index **3,556 / 4,844 / 5,274 / 5,352**
> in the four Exact even zones — thousands of draws past the mat-38 loop, and a
> different count every zone, so the stage is data-dependent. Disassembling
> `0x51d396`-`0x51e5c7` finds twelve unmodelled rand sites plus something spending
> thousands — almost certainly the ground-plant scatter, which has never been RE'd.

Every number there is correct. The **identification** was not:

* the twelve "unmodelled" sites ARE the tree loop's own sites (table below);
* the thousands of draws are **`lib_fn_513760`**'s, the tree builder's;
* they looked like an unknown stage because `tools/frida_zone_props2.py` records only
  draws whose return address falls inside the zone builder's body —
  `inRange(rva) = 0x118630 <= rva < 0x122000 || 0xe0740 <= rva < 0xe0f33` — while the
  global counter it stamps on every record (`randN`) keeps counting through 513760
  (rva `0x113760`). So the builder's draws are **present in the index and absent from
  the list**: exactly the shape of a missing stage.

The lesson generalises: **a filtered capture's own filter is part of the measurement.**
A gap between two recorded draws is not evidence of an unknown stage until you check
whether the rig would have recorded a known one. Cf. the "a filtered capture cannot
falsify" entry in `cubeworld-decoration`.

## The tail, stage by stage (from the recorded return addresses)

`FUN_00518630` is NOP-split by Ghidra into `0x518630` / `0x51880a` / `0x51b26a` /
`0x51ed6a`; all of the addresses below are one body. Draw counts are the 56-zone
totals of `raw/zone_props2_capture.json`.

"how" says on what basis the span is named: **proven** = an existing gate replays those
exact draws; **matched** = the site addresses appear verbatim in an already-proven
port's own site comments; **positional** = ordering + per-zone counts only, i.e. a lead.

| span | ret addrs | what | how | draws |
|---|---|---|---|---|
| `0x51a21a`-`0x51a50e` | 6 sites | LANDFORM 742-loop (0 draws on an Exact zone) | **proven** — replayed ab initio, 16/16 values, `RE_zone_landform.md` | 16,888 |
| `0x51aa86`-`0x51ac7b` | 4 sites | **the TYPE-6 KNOLL GRID** — see below | proven (ported; zone (32792,32748) pre-chain 22/22 ab initio) | 18 + 6 |
| `0x51ad52`-`0x51ae20` | **0 sites** | type 0xd / type 4: a discarded column scan | **byte-proven** — the rand census is exhaustive (`gate_zone_prechain`) | 0 |
| `0x51aed2` | 1 site | type 0xb: one radius-100 knoll, then SKIP the gen-scatter | byte-proven; never seen live (no captured zone is type 0xb) | 0 |
| `0x51afdc` | 1 site | type 0xc: one GIANT tree, then SKIP the gen-scatter | byte-proven; never seen live | 0 |
| `0x51b05a` | — | the gen-scatter's SITE-KIND guard: kinds 1/3/4 skip the pass | proven — 56/56 against the capture (`gate_zone_prechain`) | — |
| `0x51b08a`-`0x51b3dc` | 7 sites | GEN-SCATTER: count + 5/candidate + keep | proven (`rederive_zonescatter`) | 767 |
| `0x51c09a` | 1 site | river/lake BED pass, 1 draw per bed column: `rand() % 200`, and on 0 it appends the mat6 list the next row consumes | **arithmetic proven** (2026-07-26f) — the count of recorded draws ≡ 0 mod 200 equals the observed append count in all 8 zones that run it (18/19/12/2/4/69/74/3); WHICH columns are bed columns is still un-ported, and it is the last thing drifting upstream of the odd-parity site loop | 37,476 |
| `0x51c313`-`0x51c341` | 3 sites | a 3-draw-per-entry consumer, same 8 zones (mat6) | positional | 603 |
| `0x51c6a5`-`0x51c6db` | 3 sites | the BIGROCK consumer, 3 draws per list entry | matched — `cw_forest.build_zone_state` spends exactly 3 per bigrock | 387 |
| `0x51cbc1`/`0x51cbfc` | 2 | the odd-parity retry loop (Y first, then X) — **it really does retry, 1-10 times**, `RE_zone_site_loop.md` | proven (`rederive_zoneprops`, `gate_zone_siteloop`) | 148 |
| `0x51cd9b`-`0x51ceb9` | 6 sites | MAT-38: count + 5/rock — ⚠ **`0x51cd79` skips the whole loop for site kinds 4/1/3**, see below | proven (`rederive_zonescatter`) | 1,760 |
| `0x51d452` | — | town builder — gated on the **DESCRIPTOR type** 1 or 5, not the site kind; `FUN_004e28e0` has **3 rand sites** of its own | proven (`RE_town_props.md`) | — |
| `0x51d46b`-`0x51dbf5` | — | emitter A, the runestone circle (site kind 4) — **ported 2026-07-27c**, `rederive_zoneac` | proven (`RE_zone_emitters_ac.md`) | — |
| **`0x51dc5d`-`0x51e5c7`** | **12 sites** | **the 14x14 TREE loop + `lib_fn_513760`** | **proven here + `rederive_zonepropsb`** | **65,796 + builder** |
| `0x51e5c7` | 3 | **emitter B**, the even-parity statue | proven here | 84 |
| `0x51e839`-`0x51eac7` | — | camp candidate grid + `camp_populator` | proven (`RE_zone_grid.md`, `RE_5104e0_camp.md`) | — |
| **`0x51ed60`-`0x51f981`** | **18 sites** | **the OVERWORLD CREATURE SCATTER** — a 3x3 grid of creature packs; **RE'd + PORTED** | **proven** (`RE_zone_creatures.md`, `gate_zone_creatures` 217/217, `rederive_creatures` 1043/1043) | **3,263** |
| `0x51fa10` | — | emitter C, the village street light | proven (`RE_zone_emitters_ac.md`) | — |
| `0x51fdb1`-`0x52162b` | ~20 sites | **identity not established.** The tail's biggest spender by far | positional | 750,000+ |

The genuinely enormous counts (`0x520183` alone: 599,782 draws over 56 zones — ~10,700
per zone, i.e. roughly one per six of a zone's 65,536 columns) are in that last row.
Whatever it is, it is **downstream of emitter C**, so it never blocked anything. It was
the tree builder, not this, that made the gap look bottomless.

## The TYPE-6 knoll grid, `0x51aa57`-`0x51ad4c` (found 2026-07-26)

This stage is why the table above was not the whole pre-chain. It is **gated on the
descriptor type alone** — `cmp dword [ecx+0x18], 6` at `0x51aa57` — so it fires in no
zone the 56-zone sweep covered except two, where it read as noise (18 draws over 2 zones)
and went unlabelled. It runs **before everything else in the pre-chain**, so a type-6 zone
that misses it has every later stage reading the wrong draw.

```
if (desc->type != 6) skip                                        0x51aa57
for i in {0, 0x100, 0x200}:            # i += 0x100, < 0x300     0x51ad30
  for j in {0, 0x100, 0x200}:                                    0x51ad14
    if ((rand() & 3) == 0) continue                              0x51aa86
    X = zoneX*256 + i/3 + 42 ;  Z = zoneZ*256 + j/3 + 42         # 85-block spacing
    d = 1 - World_objectFalloffWeight(desc, X<<16, Z<<16)
    if (d <= 0) continue                                         0x51ab5d
    if (d*d < 0.5) continue          # well INSIDE the feature    0x51ab72
    for each entity in the site list:                            0x51ab90-0x51ac41
        if dist^2 < 6400 (80 blocks): continue the grid loop
    rx = rand()%10 + 20                                          0x51ac47
    rz = rand()%10 + 20                                          0x51ac5e
    rv = (rand()&15) + 20                                        0x51ac75
    if dist^2 to the world spawn < 3600: continue   # AFTER the draws -> stream-neutral
    lib_fn_4ffbf0(X, Z, colBase+colCount, rx, rz, rv)   # the ground KNOLL builder
```

So a type-6 zone spends **nine draws unconditionally** plus three per surviving cell —
9 + 0 in zone (32792,32748), 9 + 3 in (32811,32742), (32660,33021) and (32795,32748).

The proximity test is done in **16.16 with the entity's fraction**, not on block
coordinates: each axis difference is `(int64) -> f32`, scaled by `[0x55869c]` = 2^-16,
squared and summed in f32. Zone (32795,32748) sits 89 blocks from its cell centre, close
enough that dropping the fraction would flip a cell and cost three draws.

### What it cost, and how it was found

The camp lattice sits ~1,200 draws downstream, and `rederive_campgrid` had cwgen landing
**37 draws late** there in zone (32792,32748) — with 12 of 14 feature-descriptor zones off
in both directions (`RE_camp_descriptor.md`). One `frida_zone_props2.py` run at that zone
answered it: its whole live pre-chain is **22 draws — 9 here, 7 gen-scatter, 6 mat-38** —
and the histogram of return addresses in zone-stream coordinates showed `0x51aa86` at
index 0, a site no port modelled. With the stage ported, that zone is **pre 22/22 and
lattice 1214/1214 ab initio**, and of the zones cwgen still declines, **13 now reproduce
all 39 lattice draws** (was 2).

★ **The rig's own index is not the zone's index.** `frida_zone_props2.py` stamps a
process-global draw counter, and the zone's `srand` is not hooked, so the recorded indices
start wherever the process happened to be. Locating one recorded run in the zone's own LCG
stream (`base + zz*0x10000 + zx`) recovers the offset — after which every stage's *absolute*
position is readable, which is what made a 22-draw pre-chain legible at a glance.

## The other three type-gated stages, `0x51ad52`-`0x51b058` (read 2026-07-26c)

```
python tools/gate_zone_prechain.py     # 50 checks against Server.exe's own bytes
```

The knoll grid is not the only type-gated stage: three more sit between it and the
gen-scatter, and no port had any of them. **None has ever been observed live** — no
capture in this repo has a zone whose descriptor is type 4, 0xb, 0xc or 0xd — so there
is no rand stream to replay them against. What is checkable is the decode against the
shipped instruction bytes, which is what `gate_zone_prechain.py` does: every branch test,
every branch target, every immediate, and an **exhaustive** rand-site census.

The census is the part the ports rest on. Resolving rand reached BOTH ways — `call
dword [0x5582f4]` and `call <reg>` after the pointer is hoisted — there are exactly
**18** sites in `0x51a000`-`0x51b200`, and the stage map above accounts for all of them.
(A search for only the direct form finds ten and misses the landform loop's `call edi`
pair and three of the gen-scatter's `call esi`.)

| stage | gate | draws | effect |
|---|---|---|---|
| `0x51aa57` | `type == 6` | 9 + 3 per surviving cell | 3x3 grid of ground knolls |
| `0x51ad52` | `type == 0xd` **or** `type == 4` | **0** | a column scan, discarded |
| `0x51ae29` | `type == 0xb` | 1 | ONE radius-100 knoll, and no gen-scatter |
| `0x51af34` | `type == 0xc` | 1 (discarded) | ONE GIANT tree, and no gen-scatter |

The last three additionally require **the zone to hold the feature cell's CENTRE**
(`0x51adbd` / `0x51ae93` / `0x51af98`: the 16.16 centre is divided by `0x10000` and then
by 256, both truncating toward zero, and compared against `[edi+0x60]`/`[edi+0x64]`). A
cell spans 8x8 zones, so they fire in one zone in 64.

### `0x51ad52` — types 0xd and 4, and why it is a dead end in both senses

```
X = desc->pos.x / 0x10000 ;  Z = desc->pos.z / 0x10000        __alldiv, 0x51ad6f/0x51ad8a
if (X/256, Z/256) != (zone.zx, zone.zz): skip                 0x51adc2
y = Chunk_getColumnAt(X, Z)->[0x10] + ->[0x1c]                0x51addf
while (World_getBlockAt(X, Z, y)->[3] & 0x1f) in {0, 2}: --y  0x51adfc-0x51ae18
                                                              ...and that is the whole stage
```

The scanned Y is written only to the frame slot the loop uses (`[ebp-0x1304]`), which the
next writer overwrites, and the stage stamps nothing. **Zero rand sites in the span** — a
property of the binary, not of how hard anyone looked, because the census above is
exhaustive over the whole pre-chain.

⚠ **This was expected to be the type-0xd half of the type-6 drift, and it cannot be.**
`RE_camp_descriptor.md` and the last two handoffs said "type 0xd also fires the camp, so
expect the same class of drift and the same one-run fix". It has no way to move anything.
The same shape recurs at `0x51b016`, which is byte-for-byte the same discarded scan at the
end of the 0xc stage — two occurrences, so it is an idiom in this function, not a misread.

### `0x51ae29` — type 0xb, one giant knoll

```
cx = zone.zx*256 + 128 ;  cz = zone.zz*256 + 128               0x51aebd/0x51aec9 (sub -0x80)
rv = rand() % 100 + 100                                        0x51aecc
y  = Chunk_getColumnAt(cx, cz)->[0x10] + ->[0x1c]
lib_fn_4ffbf0(cx, cz, y, 100, 100, rv)                         0x51af18
jmp 0x51b101                                                   0x51af23  -- past the
                                                               gen-scatter's count draw
```

`lib_fn_4ffbf0` contains **no reference to the rand pointer at all** (checked over its
whole 1,802-byte body), which is why this stage is portable from the disassembly alone:
its entire stream cost is the one draw.

### `0x51af34` — type 0xc, one giant tree

Identical shape, except the draw at `0x51afd6` is **discarded** (`eax` is dead at
`0x51afdc`) and the builder is `lib_fn_513760(cx, cz, y, 0x50, 0x50, 6)` — size 80,
height 80, tree **type 6**. That is the GIANT tree both ports already name as unsupported
(`CwForest.cpp`'s `Unsupported` throw, `cw_forest.py`'s docstring, which had already
guessed "zone-cell 0xc only" — now confirmed from the branch). `lib_fn_513760` has 27
`call ebx` rand sites, so unlike 0xb this stage's stream cost is not statable without
simulating the tree: **type-0xc centre zones are declined, not replayed.**

### ★ The SECOND site-kind guard, `0x51cd79` — the mat-38 loop has one too (2026-07-27c)

```
0051cd79  mov al, [eax + ecx + 0x18]      ; region + idx*16 + 0x18, the site-kind byte
0051cd7d  cmp al, 4 / je 0x51d435
0051cd85  cmp al, 1 / je 0x51d435
0051cd8d  cmp al, 3 / je 0x51d435
0051cd95  call rand                       ; the mat-38 count -- SKIPPED for 4/1/3
```

Byte-for-byte the guard the gen-scatter has at `0x51b05a`, on a **second read of the same
table 7KB further on**, and `0x51d435` lands just before the town builder. **No port had
it** — not `CwForest.cpp`, not `CwZoneScatter::replayMat38`, not `cw_decoration.mat38_loop`.

Two independent live proofs, on two different site kinds and from two different rigs:

* zone **(33020,32660)** is the one kind-3 zone of `raw/zone_props2_capture.json`, and it
  spends **zero** mat-38 draws as well as zero gen-scatter draws;
* **41 of the 112** kind-4 zones of `raw/zone_ac_capture_zones_112.json` reach the
  emitter-A gate at absolute stream index **0** — impossible if the loop ran, because its
  count draw is unconditional. (All 41 are even parity; every odd-parity kind-4 zone
  spends the site loop's draws and none reaches 0.)

Without it every kind-1/3/4 zone spent `1 + 5*count` phantom draws and put the tree pass,
emitter B and the camp lattice out of step behind them. Nothing caught it because **no
gate in the project had ever replayed a zone whose site kind is non-zero** — the 56-zone
sweep contains exactly one, and it is the only one that was ever checked, for the *other*
guard. ★ Fourth instance of "a fix landed in one copy of a duplicated routine"; this time
the fix had never landed in any of the three.

### The gen-scatter's own guard, `0x51b05a` — real, and it was dismissed

Immediately after these stages the builder reads `[ebp-0x1344] + [ebp-0x137c] + 0x18` —
`region + idx*16 + 0x18`, the per-zone **SITE-KIND** grid (`RE_site_kind_grid.md`) — and
skips the whole gen-scatter when the kind is **1 (town), 3 (dungeon) or 4 (runestone
circle)**. `cw_forest.py` carried a note saying the guard "reads a 0x10-stride record
byte, NOT the zone's feature cell — a live type-3-CELL zone runs gen-scatter normally, so
the guard is NOT modeled here". Both halves of that observation are correct and the
conclusion does not follow: the byte is the site kind, the 0x10 stride *is* the site-kind
grid's entry size, and a type-3 feature CELL has nothing to do with site KIND 3.

The capture settles it in one line. Of the 56 zones of `raw/zone_props2_capture.json`,
exactly **one** — (33020,32660) — holds its feature cell's centre; that cell is type 0xE;
a type-0xE cell marks its own zone kind 3; and that zone is the only one of the 56 that
spends **zero** gen-scatter draws. The other 55 own no centre, carry kind 0, and all run
the pass. `gate_zone_prechain.py` checks the implication both ways: **56/56**.

★ **DURABLE: "the guard reads a different table than I assumed" is a reason to find out
which table, not to drop the guard.** Same shape as the roughness deletion in
`RE_zone_landform.md` — a true premise about the wrong operand.

### Ported

| | |
|---|---|
| `CwForest::buildZoneState` | the 0xb stage, the 0xc `Unsupported` throw, the site-kind guard; stage D documented as the no-op it is |
| `CwZoneScatter::replayPreChain` | a store-free copy for the three entry points that had NO pre-chain at all (below) |
| `CwZoneScatter::replayGenScatter` | the site-kind guard |
| `CwFeatureGrid::zoneSiteKind` | the kind lookup, off the already-gated `subMarkers` |
| `cw_forest.zone_prechain` | the Python's first copy of any of this, knoll grid included |

⚠ **The three `CwZoneScatter` entry points had no pre-chain of any kind.**
`zoneScatterRocks`, `zoneScatterProps`'s odd branch and `zoneScatterBlobs` each `srand`
the zone stream and go straight to `replayGenScatter`, so every type-6 zone `classifyZone`
called Exact was nine or more draws out of step there — the 2026-07-26 knoll-grid fix went
into `CwForest::buildZoneState` only. That is the **third** time in this programme a fix
has landed in one copy of a duplicated routine (see the odd-parity site draw below). They
now share `replayPreChain`, which returns false — new class `ZoneClass::Feature` — for any
zone whose pre-chain stamps terrain a store-free replay cannot follow.

## The RIVER/LAKE BED pass, `0x51bbf9`-`0x51c66c` (read + ported 2026-07-26g)

```
python tools/gate_zone_bed.py          # 44 checks: the bytes + all 8 captured zones
```

The last unmodelled stage of the pre-chain, and the whole of what was still drifting
upstream of the odd-parity site loop. **Two** 256x256 column nests sit between the
gen-scatter and the bigrock consumer:

| nest | entry gate | what |
|---|---|---|
| `0x51b470` | `FUN_0052d990` (waterDepth) `<= 0.02` | the SHORE / road carve |
| `0x51bc60` | `FUN_0052cd50` (the river climate gate) `<= 0.02` | the RIVER carve |

An **exhaustive rand-site census of `0x51b467`-`0x51c313`** — resolving `call <reg>` as
well as `call [&rand]`, the discipline `gate_zone_prechain` established — finds exactly
**one** draw site in both nests together, `0x51c094`. So the shore nest is provably
stream-free, and this port deliberately does not model it. (It is also inert in every
zone measured: `biome_border <= 0.02` holds for zero columns in all five river zones the
camp gate reaches.)

Both nests iterate **X-OUTER, Z-INNER**, but through swapped frame slots — in the river
nest `[ebp-0x12e4] <- [ebp-0x1358]` is X (it is `writeVoxel`'s first argument at
`0x51c07c`, and `[ebp-0x1370]` is the same outer bound the landform 742-loop uses) and
`[ebp-0x12cc] <- [ebp-0x132c]` is Z.

```
list = _Buynode(0,0)                                            0x51bbf9  -> [ebp-0x13a8]
[ebp-0x12dc] = 200                                              0x51bc3e
for X in [zx*256, zx*256+256):
  for Z in [zz*256, zz*256+256):
    band = 1 - 50*gate(X, Z)                                    0x51bc65
    if band < 0: continue                                       0x51bc9b
    if road(X, Z) > 0.95: continue         # FUN_004d19f0       0x51bcc9
    l1304   = max(base_height(X, Z), 0)                         0x51bcde
    terrace = ((int)l1304 / 5) * 5
    frac    = (l1304 - terrace) / 5
    w       = frac >= 0.5 ? 1 - (frac-0.5)*4 : frac*2 ; if w<0: w = (w+1)^2 - 1
    bedY      = w < 0 ? (int)(terrace - 5w) : terrace
    carveTop  = (int)(terrace - 5w + 2)
    for y in [carveTop, terrace]:          # mat 2 water        0x51bde1
        if !(block(X,Z,y) & 0x40): writeVoxel(y, mat 2, (0,0,(int)((1-w)*255)))
    if bedY >= terrace                     # always true        0x51bfcf
       and (block(X,Z,bedY) & 0x1f) != 2   # NOT already water  0x51bfed
       and !(block(X,Z,bedY) & 0x40):                           0x51c011
        writeVoxel(bedY, mat 3, ground_color(X,Z,bedY))         0x51c08f
        if rand() % 200 == 0: list.push_back((X, Z, bedY))      0x51c094
    top = (int)( (noise2d(X*.02+55432, Z*.02+974)+1)*2 + (1-(50*gate)^3)*5 + l1304 )
    for y in (bedY, top):                  # AIR = DAT_005842c0 0x51c1e0
        if !(block(X,Z,y) & 0x40): writeVoxel(y, air)
```

`cw_river.river_carve` / `CwColumn::riverCarve` already modelled the water and the
riverbed byte-exact against the writer-hook captures; what was missing was **which
columns spend the draw**, and the channel carve.

### Which columns spend the draw

`carveTop > terrace` is a pure function of the clamped base height — with
`frac = (max(bh,0) mod 5)/5`, the bed fires iff `frac <= 0.1 or frac >= 0.7` — and that
alone predicts **seven of the eight** captured zones exactly.

★ **The eighth is what pinned the water test.** Zone (32610,33111) over-counts by
**1,540** on geometry alone, and 1,540 is exactly the number of its columns whose `bedY`
sits above the terrain record **and** at or below sea level, i.e. standing in the OCEAN:
the pass will not bury water it did not write. Not one other captured zone has a single
such column, so seven green zones could not have found it — the same shape as "a gate
that only ever ran on flat ground does not cover a slope".

| zone | bed draws (live == port) | appends |
|---|---|---|
| 32791,32792 | 445 | 2 |
| 32610,33111 | 950 | 3 |
| 32791,32793 | 1,273 | 4 |
| 32790,32794 | 2,408 | 19 |
| 32790,32795 | 2,578 | 12 |
| 32790,32791 | 3,149 | 18 |
| 32848,32688 | 12,563 | 69 |
| 32996,32476 | 14,110 | 74 |

### The consumer, `0x51c2dc`-`0x51c66c`

Three draws per list entry — `rand()%3 + 2` for X, then Z, then Y — and a noisy **mat-6**
ellipsoid, the same shape as `stoneWrites` with the Y half-extent doubled
(`[C-2ry, C+2ry]`) and gated on **0x80 as well as 0x40** (`shr al,7 / not al / test al,1`
at `0x51c53a`), so a boulder never buries standing water: of the three live-read
templates only `DAT_005842bc` (water) carries 0x80, and a mat-2 voxel the river pass
wrote itself does not.

### What porting it closed

* `gate_zone_siteloop --ab-initio`: **28/28** odd zones reach the site loop at the live
  draw index and get their iteration count and accept flag predicted exactly (was 24/28
  with four excluded — and the four excluded were exactly the four bed-pass zones, each
  drifting by precisely its own `bed + 3*appends`). Gate total **256/256** (was 252).
* `rederive_campgrid` replays **13** zones ab initio (was 7): the four extra correct ones
  are river zones spending up to **8,544** bed draws and **36** appends, and each lands
  its live camp-lattice index exactly — an independent check no wrong bed predicate could
  survive.

### What it did NOT fix — and what that residual turned out to be

Admitting river zones made `rederive_campgrid` claim zone **(32795,32744)**, whose
lattice landed 12 draws short (cpp 1188 / live 1200). **That residual was not the bed
pass**, and the measurements said so three ways: the entire zone has only **19**
gate-passing columns and all 19 spend their draw; none appends; and running the pass
with its terrain writes suppressed leaves every draw index upstream of the tree loop
unchanged. Decisive: with the bed pass **absent** the same zone landed at **1206**
against the same live 1200 — already 6 draws out, invisible only because
`anyRiverInZone` declined the zone.

✅ **Fixed 2026-07-27, and it was in the site list's PROXIMITY TEST**: `0x51cf20` and
`0x51ded7` compare in **16.16 against the site entity's own half block**, not on block
coordinates, and both ports (five copies between them) compared integers. Full decode
in `RE_zone_site_loop.md`, "The consumers test in 16.16". `rederive_campgrid` is
**15990/15990**, and the declined zones reproducing all 39 draws under FORCE went
**17 → 20**.

## The tree loop, `0x51dc5d`-`0x51e5c7`

A **14 x 14 grid, stride 18**, X in the outer loop from `zx*256` and Z in the inner from
`zz*256 + 8`; the loop tails at `0x51e593` (`X += 0x12`) and `0x51e5ae` (`Z += 0x12`).
Per candidate:

| ret addr | draw | note |
|---|---|---|
| `0x51dd8c` | `size` | `rand()%5 + temp*2 + 6 + boost*4`, truncated |
| `0x51dddb` | `height` | `(rand()*8/32767 + boost*6 + 8) * (temp*0.5 + 1)` |
| `0x51e063` | species coin | `(rand()&1) ? 5 : 0` |
| `0x51e093` / `0x51e0b1` | species `%10` | two call sites: the species-noise `> 0.3` / `<= 0.3` branches |
| `0x51e0d5` | `%10` | `== 0` -> type 2 |
| `0x51e15f`, `0x51e180` | jungle pair | only when `humid > 0.8 && temp > 0.7` |
| `0x51e217` / `0x51e299` | pocket `%5` | the `0.2 < humid < 0.3` / `0.3 <= humid < 0.7` noise branches |
| `0x51e30d` | height boost | type 2: `height += rand() % (height/2)` |
| `0x51e3e7` | keep | `rand()/32767 <= density(lib_fn_4d9010) + boost` |

then a column top-scan, the cover gate `{4, 0xa, (9 && y<3)}`, and
`lib_fn_513760(X, Z, y, size, height, type)`.

`boost` is **not** the type-3 forest cell the port's comment guessed at: `0x51dcab`
reads `[site+0x18]`, the per-zone **site-kind grid** (`RE_site_kind_grid.md`), and the
kind it tests is **3 = dungeon**. `boost = max(0, 1 - objectFalloffWeight)^2` there and 0
everywhere else, so it stays 0 outside dungeon zones — which is why hardcoding 0 has
never been observed to bite.

`gate_zone_tail.py` validates this decode by replaying each candidate's recorded return
addresses against the branch structure as a state machine: **5,488 candidates over 28
zones, every token order legal.** A mis-read branch shows up immediately as an illegal
order, which is a much sharper test than a draw count.

## What the gate proves

| claim | checks |
|---|---|
| the loop runs exactly 196 = 14x14 candidates | 28 |
| every candidate's draws follow the decoded branch structure | 5,488 |
| every run of unrecorded draws sits right after a keep roll — the only thing spending draws off-book here is the tree builder | 874 |
| the recorded draw immediately before emitter B is the loop's last keep roll — nothing else separates them | 28 |
| no unmodelled rand site anywhere in the span | 28 |
| emitter B's pushed record derives from its three draws (X first, then Z, then `dir`) | 112 |

**6,558/6,558.**

## Ported, and what the port found

`cwgen` reaches emitter B ab initio through `CwForest::zoneReplayTail`, which runs the
pre-chain and the tree pass and hands the positioned stream to the caller;
`CwZoneScatter::zoneScatterProps` derives the statue there. Gate
`rederive_zonepropsb` **5/5** — and it checks four numbers per zone so a failure says
where the drift is: the pre-chain's draw count, emitter B's absolute stream index, the
tree count, and the record. Live totals: **115 trees, every stream index exact**, on
seed 42069 — a world the forest port had never been run against.

Three corrections came out of it:

1. **The cover MATERIAL of a slope-blended column.** The forest replay's terrain store
   materialised columns with `surface_placer`'s cover mat, but the zone builder's own
   surface pass writes **rock 6** wherever the slope weight exceeds 0.5
   (`cw_color.surface_assembly` / `CwColor::surfaceAssembly`, `FUN_00518630` L880). The
   two agree on flat ground, which is why "flat/dry" test zones never caught it. Zone
   `(32790, 32790)` sits partly in a **type-0xA feature cell with land_mask 0.69**;
   reading grass on those cliff columns let the `{4, 0xa, 9}` gate pass **18 times the
   live server rejected it — 59 trees instead of 41**, putting emitter B 1,459 draws out
   of step. Fixed in both ports.
   ★ **A gate that only ever ran on flat terrain does not cover the cover selection.**
   The bug was not in the tree pass at all; it was in what the tree pass reads.
2. **The temperature probe is at the cell origin + 8, not + 2.** The loop's Z variable
   starts at `zz*256 + 8` and the column call at `0x51dd3b` passes `(X + 8, Z)`. Both
   ports read `+2`. The climate field is flat over 6 blocks so nothing observable moved
   — the live forest gate stays 53/53 either way — but the binary says +8.
   ★ Worth recording as a **non**-falsifiable difference: the live capture cannot
   distinguish the two, so only the disassembly can.

3. **`CwForest.cpp`'s odd-parity site draw was still X-first.** Detail below — it is the
   one that turned `rederive_forest` red and then green at wider coverage.

## What the widened `rederive_forest` then found (2026-07-26c)

The three stages above fire in worlds the forest gate had never visited, so
`forest_oracle.ZONES` gained a type-6 zone, a type-0xb centre zone and a type-0xc centre
zone (seed 444444). Two things fell out immediately:

1. **`cw_forest.py` had hardcoded the mat-38 boost to `True` for the life of the file.**
   The call read `cw_decoration._boost(...) if hasattr(cw_decoration, "_boost") else True`
   — and `cw_decoration` has no `_boost`; the name lives in `cw_genscatter`. So the guard
   was always false and the loop drew `rand()%10 + 10` rocks where the server draws
   `rand()%10`. Every zone the file had ever run on happened to have `boost == True`;
   zone (32840,32843) is the first with `boost == False`, and the Python reached the tree
   loop **50 draws late** — 5 per phantom rock, exactly.
   ★ **DURABLE: a silent `hasattr` fallback is a branch no gate can see.** It does not
   fail, it does not warn, and it reads like defensive code.
2. **The gate now carries the PRE-CHAIN draw count**, both sides. A tree-list mismatch
   used to be ambiguous between "the pre-chain spent the wrong number of draws" and "the
   tree loop did"; `pre{cpp 62 / py 112}` said which in one line, with no bisect. It is
   diagnostic only — a zone whose trees match tree-for-tree necessarily agreed on the
   pre-chain — and it is printed on mismatch and on forced replays.

`rederive_forest` is now **6/6 over 8 zones, 245 trees**, and for the two zones the C++
declines it replays them under `force` and checks the tree list anyway: both **IDENTICAL**
(58 and 60 trees). For the type-0xb stage that forced comparison is the only cover
obtainable — there is no live capture of such a zone in any world.

⚠ **Still uncovered: the type-6 knoll grid's STAMPING path.** Zone (32840,32843) spends
its 9 grid draws and keeps no cell, so the `+3 draws and a knoll` branch is exercised only
by the C++ (live, via `rederive_campgrid`). A surviving cell needs `(1-w)^2 >= 0.5`, i.e.
a column well inside the feature — and those zones are Landform, which the replay declines
by construction. Do not read the Python knoll grid as gated on that branch.

## Open, carried forward

* ✅ **2026-07-26b: the LANDFORM predicate is fixed and descriptor type 6 is admitted**
  (`RE_zone_landform.md`). It was not the predicate — `surfH` was short inside every
  type-6/0xd cell because the builder keeps two land masks and both ports had one.
  `rederive_campgrid` now replays **7 zones ab initio** (was 1) and `rederive_campstream`
  is **4/4** (was 2/2). Types 7 / 0xb / 0xc / 0xf still drift.
* **2026-07-26: the camp lattice IS reached, and doing so found the tail's real limit.**
  Nothing lies between emitter B (`0x51e774`, its dir draw) and the lattice's first roll
  (`0x51e952`) — the capture shows gap 0 in every firing zone, on both parities — so
  `CwZoneCamp::zoneCampGrid` walks straight through. But the camp only fires where the
  zone's descriptor is a present feature cell, and **the replay drifts there**: 12 of 14
  such zones land 2-629 draws off the live lattice index, in both directions
  (`RE_camp_descriptor.md`). Every zone this tail was ever proven on has a descriptor of
  type 0 / 0xa / 0xe. So the tail decode below is intact; its REACHABILITY in feature
  zones is not.
* **Emitter C (`0x51fa10`) — measured 2026-07-27c, and it is a much bigger slice than the
  handoff scoped it as.** Two things were established without a capture session:

  1. **How far it is.** Locating each town zone's recorded emitter-C draws in its own LCG
     (`make_zoneac_golden.py`'s verified-origin search) puts the first street-light roll a
     median of **2,646 draws** past the emitter-A gate — min 1,197, max 101,190, in all
     **137** town zones that fire. Every one of those draws must be reproduced before a
     single lamp can be placed.
  2. **What is in the gap.** A rand-site census of `0x51eac0`-`0x51fd00` finds **18** sites,
     not the 11 the table above lists — the table was built from observed return addresses,
     so stages that never fired in the 56-zone sweep are absent from it. The bulk of the
     gap is `0x51ed70`-`0x51f981`: a **3x3 grid (85-block spacing, `+0x18 + rand()%10`
     jitter) that news up `cube::Spawn` objects** — i.e. the **overworld creature-spawn
     scatter**, the producer of `raw/spawn_capture.json`'s 6,305 spawns. It is a slice of
     its own, and it has plenty of live data to gate against.

     ✅ **RE'd 2026-07-27d (`RE_zone_creatures.md`, `gate_zone_creatures` 211/211) — and
     three claims in that paragraph are wrong.** The grid is real and so is the jitter, but:

     * **it is not the bulk of the gap.** Bucketing all 56 zones by stage puts this stage
       at a median **58** draws and the **tree pass at 3,837** — the gap to emitter C is
       the tree pass, which is already bit-exact and reached ab initio by
       `CwForest::zoneReplayTail`. Table in `RE_zone_creatures.md`.
     * **the entities are not `cube::Spawn`,** and the stage never calls
       `creature_spawn_builder` (`0x524540`) — a call census of the span asserts the
       negative. It runs `operator_new(0x10f0)` + `FUN_004e0f40` inline.
     * **it did not produce `raw/spawn_capture.json`,** which is a different code path —
       and that file is 57 bytes and empty on disk anyway, overwritten by a later run.

     ★ The general shape is the one this file already warns about twice: **a stage sized
     by where its draws are, rather than by counting them, reads as much bigger than it
     is.** One histogram over the 56-zone capture answered it before any decode.

  ⚠ **The town builder is probably NOT the blocker it was assumed to be.** It runs in every
  emitter-C zone (a kind-1 zone's descriptor cell is type 1, and `0x51d43e` gates on
  descriptor type 1/5). Its three rand sites are `0x4e2d83` (`%4`, a rotation), `0x4e2e3b`
  (`/32767`, a 0..1 roll) and `0x4e3039` (`&1`, a coin), and on a static read each is
  spent **unconditionally per plot**, with the region-cache-blocked plot HEIGHT only
  affecting what happens after the draw (`0x4e304d` reads the height *after* the coin).
  The plot lattice itself is already derived (`rederive_townlattice` 16228/16228). So the
  town builder's draw SPEND may well be derivable even though its plot heights are not —
  **a lead from three call sites, not a finding**; it wants the loop structure read before
  anyone relies on it.
* **The pass at `0x51fdb1`-`0x52162b`** is the one part of the tail whose identity is
  still open, and it is the biggest draw consumer in the whole zone build. The obvious
  guess is the per-column ground-vegetation scatter (`CW_RE_MASTER_INDEX.md` lists a
  never-RE'd plant scatter, and ~1 draw per 6 columns fits), **but that is a lead, not a
  finding** — the same guess is what mislabelled the tree pass in the first place. It
  sits *after* emitter C, so it blocks only itself.
* ✅ **A pre-existing Python <-> C++ drift in the forest replay, surfaced here AND fixed.**
  `cw_forest.py` placed 58 trees in zone `(32800, 32799)` where `CwForest.cpp` placed 54 —
  the first 54 byte-identical, the streams parting somewhere after the type-1 tree at
  `gx=7, gz=1`. **Root cause: `CwForest.cpp` carries its own copy of the pre-chain, and
  its odd-parity site draw was still X-first.** The 2026-07-25 "Y is drawn FIRST
  (`0x51cbbb`), X second (`0x51cbf6`)" correction went into `CwZoneScatter.cpp` and
  `cw_decoration.py`; `CwForest::buildZoneState` was missed. The misplaced site rejected
  5 candidates it should not have, and a rejected candidate spends 2 draws instead of 6 —
  exactly the 20-draw offset that put `gx=9` out of step.

  **Why nothing caught it for a session.** Three filters lined up: the site loop is
  ODD-parity only; `rederive_zonepropsb` exercises only EVEN zones (emitter B *is* the
  even branch); and `rederive_forest`'s one odd tree-exact zone was being compared against
  a **stale gitignored golden** that predated the Python fix, so the gate was green
  against the bug. It was not the msvcr110-vs-ucrt `sin`/`cos` gap the code comments
  predicted — forcing the ucrt fallback still gives 58.

  ★ **DURABLE: when a fix lands in a duplicated routine, grep for the duplicate.** All
  four copies of `rand()%0xa0 + 0x30` are now consistent (`CwForest.cpp`,
  `CwZoneScatter.cpp` x2, `cw_decoration.py`).
  ★ **DURABLE: a parity/branch-gated bug needs a gate that runs BOTH branches.** Every
  new gate here happened to be even-parity, so the odd path had no live cover at all.

  `rederive_forest` is now **5/5 with 111/111 trees and 388,538/388,538 colored writes** —
  against a freshly regenerated golden, up from 107/107 and 186,419 against the stale one.
  `VX_FOREST_DUMP=1 cwgen_test <dir>` prints both tree lists side by side; it was the
  common-prefix shape ("the first 54 are identical, then cpp just stops") that localised
  this to a draw-count divergence rather than a formula error.
