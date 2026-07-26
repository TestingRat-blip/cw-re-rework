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
| `0x51a21a`-`0x51a50e` | 6 sites | LANDFORM 742-loop (0 draws on an Exact zone) | matched — `cw_decoration.landform_pass` names `0x51a266` / `0x51a37e` / `0x51a4ee` | 16,888 |
| `0x51aa86`-`0x51ac7b` | 4 sites | **the TYPE-6 KNOLL GRID** — see below | proven (ported; zone (32792,32748) pre-chain 22/22 ab initio) | 18 + 6 |
| `0x51b08a`-`0x51b3dc` | 7 sites | GEN-SCATTER: count + 5/candidate + keep | proven (`rederive_zonescatter`) | 767 |
| `0x51c09a` | 1 site | river/lake BED pass, 1 draw per bed column | positional — fires in only 8 of 56 zones, the water ones, at ~4,700 draws each | 37,476 |
| `0x51c313`-`0x51c341` | 3 sites | a 3-draw-per-entry consumer, same 8 zones (mat6) | positional | 603 |
| `0x51c6a5`-`0x51c6db` | 3 sites | the BIGROCK consumer, 3 draws per list entry | matched — `cw_forest.build_zone_state` spends exactly 3 per bigrock | 387 |
| `0x51cbc1`/`0x51cbfc` | 2 | the odd-parity retry loop (Y first, then X) | proven (`rederive_zoneprops`) | 148 |
| `0x51cd9b`-`0x51ceb9` | 6 sites | MAT-38: count + 5/rock | proven (`rederive_zonescatter`) | 1,760 |
| `0x51d452` | — | town builder (site kind 1/5) | proven (`RE_town_props.md`) | — |
| `0x51d46b`-`0x51dbf5` | — | emitter A, the runestone circle (site kind 4) | proven (`RE_zone_emitters_ac.md`) | — |
| **`0x51dc5d`-`0x51e5c7`** | **12 sites** | **the 14x14 TREE loop + `lib_fn_513760`** | **proven here + `rederive_zonepropsb`** | **65,796 + builder** |
| `0x51e5c7` | 3 | **emitter B**, the even-parity statue | proven here | 84 |
| `0x51e839`-`0x51eac7` | — | camp candidate grid + `camp_populator` | proven (`RE_zone_grid.md`, `RE_5104e0_camp.md`) | — |
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

⚠ `0x51ad52` immediately after this tests `desc->type == 0xd` and branches to another
stage. **Not examined.** Type 0xd also fires the camp, so it is the obvious next candidate
for a drift of the same kind.

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

## Open, carried forward

* **2026-07-26: the camp lattice IS reached, and doing so found the tail's real limit.**
  Nothing lies between emitter B (`0x51e774`, its dir draw) and the lattice's first roll
  (`0x51e952`) — the capture shows gap 0 in every firing zone, on both parities — so
  `CwZoneCamp::zoneCampGrid` walks straight through. But the camp only fires where the
  zone's descriptor is a present feature cell, and **the replay drifts there**: 12 of 14
  such zones land 2-629 draws off the live lattice index, in both directions
  (`RE_camp_descriptor.md`). Every zone this tail was ever proven on has a descriptor of
  type 0 / 0xa / 0xe. So the tail decode below is intact; its REACHABILITY in feature
  zones is not.
* **Emitter C (`0x51fa10`)** is reachable in principle — `zoneReplayTail` leaves the stream at `0x51e5c7` and the sites between
  there and them are enumerated in the table above (`0x51e774`, `0x51e952`,
  `0x51ed7e`/`0x51ed92`/`0x51edba`, `0x51f227`, `0x51f383`/`0x51f3fa`/`0x51f463`,
  `0x51f4f4`/`0x51f5a0`/`0x51f668`, `0x51f8f9`/`0x51f924`). Each needs decoding the way
  the tree loop just was; none of it is a mystery stage.
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
