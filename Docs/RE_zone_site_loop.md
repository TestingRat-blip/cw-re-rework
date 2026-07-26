# The odd-parity SITE LOOP — and the list both ports invented

```
python tools/gate_zone_siteloop.py     # 228 checks, 56 zones + Server.exe's bytes
```

**Two findings, one live-proven each.**

1. The zone builder's site list holds **at most one entry** — the odd-parity accepted
   site. Both ports were seeding it with every feature-cell centre in the 3×3 region
   neighbourhood, an input the binary never has.
2. The site loop **retries**. `FUN_004e0740` can fail, and the caller redraws a fresh
   candidate up to ten times. Both ports hardcode "the first candidate is accepted",
   which is wrong in **10 of the 28 odd zones** of the 56-zone sweep — and in 2 of them
   nothing is accepted at all, so the list stays empty.

---

## 1. The list is empty until 0x51cd56

The proximity tests in the type-6 knoll grid (`0x51ab78`), the mat-38 loop (`0x51cf20`)
and the tree loop (`0x51ded7`) all walk the **same** circular `std::list`, whose head
pointer lives at `[ebp-0x1378]` and whose nodes carry the 16.16 position at `+0x08`
(Z) and `+0x10` (X):

```
0051ded7  mov  eax, [ebp-0x1378]        ; _Myhead (the sentinel)
0051dee3  mov  ecx, [eax]
0051deeb  cmp  ecx, eax
0051deed  je   0x51dfed                 ; empty -> no rejection possible
0051df30: ...  dist^2 < 1600 -> reject  ; 0x51dfd0
0051dfd9  mov  ecx, [ecx]               ; next
0051dfdb  cmp  ecx, [ebp-0x1378]
```

The whole `0x518630`-`0x522000` body **stores** to that slot exactly once —
`0x51a9b7`, the result of the `_Buynode` call at `0x51a9b2` — and the size word beside
it is initialised to zero two instructions earlier:

```
0051a9a8  mov dword [ebp-0x1374], 0     ; _Mysize := 0
0051a9b2  call 0x4f7b60                 ; _Buynode
0051a9b7  mov [ebp-0x1378], eax         ; _Myhead
...
0051cd56  call 0x4f3ba0                 ; the ONLY insert
0051cd61  mov dword [ebp-0x1374], 1     ; _Mysize := 1
```

Between the construction and the type-6 knoll grid at `0x51aa80` there is nothing but
two climate reads (`0x51a9d0`, `0x51aa18`). So **the knoll grid's 80-block proximity
loop can never execute** — the door is closed, not merely unobserved.

### The live half

If the list were seeded with feature-cell centres, an **even**-parity zone containing a
centre would reject tree candidates. The sweep has exactly one such zone.

| | zones | tree-loop site rejects |
|---|---|---|
| even parity | 28 | **0 in every one** — including (33020,32660), whose feature cell's centre is at (8453248, 8361088), inside the zone |
| odd parity | 28 | 14-18 wherever the site loop accepted, **0 in the two zones where it accepted nothing** |

A rejected candidate spends 2 draws (`size`, `height`) and jumps to the loop tail; an
accepted one spends at least 6. Counting `size`-draws whose successor-but-one is another
`size` counts the live rejects exactly, which is what the table above is.

★ **DURABLE: a list you build yourself is an input you invented.** The mat-38 loop's
40-block rejection was "proven" over 56 zones with the feature centres in it — because
in all 56 no rock ever landed within 40 blocks of one. The tree loop, on a 14×14 grid,
finally put a candidate there and the live server rejected nothing.

## 2. `FUN_004e0740` retries, and 10 of 28 odd zones need it

```
FUN_004e0740(world, candidate):
    h = World_sampleTerrainHeight(X, Z)                     0x4e07b4
    if (1 - h*50) >= 0: return false                        0x4e07db   -- 0 draws
    prop = <ctor 0x188>; prop.kind = 0x41                   0x4e07f1
    prop.rot = rand() & 3                                   0x4e0825   -- 1 draw
    for outer in 0..2:                                      0x4e0845
        for inner in 0..2:                                  0x4e0861
            if Prop_settleOnTerrain(prop, ...): goto accept 0x4e08dc
    return false
accept:
    push_back(prop)                                         0x4e091e
    ... 4 draws at 0x4e0a55, 4 at 0x4e0b20                  -- 8 more
    return true
```

and the caller:

```
for iter in 0..9:                                           -- cap 10
    dz = rand()                                             0x51cbc1
    dx = rand()                                             0x51cbfc
    if FUN_004e0740(zoneX*256 + dx%0xA0 + 0x30,
                    zoneZ*256 + dz%0xA0 + 0x30): break
```

so a failed iteration costs **3** draws and an accepting one **11**. Every odd zone in
the sweep satisfies `draws == 3*iters + 8*accepted` exactly:

| iterations | zones | site-loop draws |
|---|---|---|
| 1 | 18 | 11 |
| 2 | 2 | 14 |
| 3 | 1 | 17 |
| 4 | 2 | 20 |
| 5 | 1 | 23 |
| 6 | 1 | 26 |
| 10, accepted | 1 | 38 |
| **10, accepted nothing** | **2** | **30** |

The 0-draw branch (`h <= 0.02`, i.e. `World_sampleTerrainHeight` — the same
`FUN_0052cd50` the river band uses) never fired in 56 zones: every iteration spent its
rotation draw. It is modelled anyway because it is unambiguous in the disassembly.

### Why it went unseen

The site loop is odd-parity only, and every gate added in this programme except
`rederive_zoneprops` runs even zones (`gate_zone_tail`: 28 even; `rederive_zonepropsb`:
emitter B *is* the even branch). `rederive_forest` keeps one odd zone deliberately —
and that zone's first candidate settles. So the retry branch has never had a gate.

★ **Third occurrence of the same shape** (flat-vs-slope, even-vs-odd parity,
absent-vs-present descriptor): the pass under test was fine and the branch that had
never run was not. Here it is a branch of a *callee* the replay models as a constant.

## What this costs, and what closes it

The retry moves the accepted site, and the tree loop rejects ~15 of its 196 candidates
against it — so a wrong site is worth roughly ±60 draws before any tree-builder cost,
in **either** direction, which is the signature of the residual descriptor-type
7 / 0xb / 0xc / 0xf drift in `RE_camp_descriptor.md`.

The parity correlation is total: **all five still-drifting zones are ODD** —
(32726,32791) type 0xf, (32726,32869) type 7, (32752,32765) type 0xb, (32856,32739)
type 0xc, (32869,32726) type 0xb — while 5 of the 7 zones `rederive_campgrid` replays
ab initio are EVEN, where the site loop does not run at all, and the 2 odd ones that do
replay are exactly what a first-iteration accept looks like.

That is a correlation, not a proof: descriptor type and parity are independent, so it
is real evidence, but only porting `0x5287b0` and re-measuring settles it. (What the drift is **not**: `gate_zone_prechain` censuses the pre-chain's
rand sites exhaustively, and the live terrain probe below rules out a wrong surfH.)

**`Prop_settleOnTerrain` (`FUN_005287b0`, 1077 bytes) is the whole remaining
dependency.** Its callees are `Chunk_getColumnAt` / `World_getBlockAt` / `__alldiv` /
`ftol` only — a pure function of the finished terrain, no rand, no captured state, as
the handoff already assumed. Porting it closes the site loop, and with it the mat-38
rejection and the tree loop's rejection in every odd zone.

## A live terrain oracle that costs nothing

While chasing this, the camp captures turned out to carry one: each firing zone's `cand`
vector is the accepted lattice cells as `FUN_005104e0` sees them, `0x18` bytes each =
int64 `x16`, `z16`, `y16`. So `y16 >> 16` is the **finished world's surface** at a known
column, with no rand stream involved.

Over 27 zones and descriptor types 3, 4, 6, 7 and 0xf the port's `surfH` lands on the
known `surfH + 2` convention on the great majority of columns (the outliers all read
high, i.e. the candidate settled on a knoll, a rock or a tree). Type 0xf zone
(32843,32817) samples terrain at **-19, -31, -33** and the port matches at +2 there too,
so **deeply negative terrain is real, not a port artifact** — worth knowing, because two
of the drifting zones sit at surfH ≈ -85 and that looks like a bug until this is
checked. The tree loop's own `top < 0` bail is likewise real (`test ecx,ecx / js` at
`0x51e462`).

★ Use `cand` before asking for another capture: it is a free surface probe over every
zone the camp rigs ever visited.

## Also checked and ruled out (2026-07-26d)

Reading the *inputs*, as `RE_zone_tail.md` said to:

* **an exhaustive descriptor-type-gate census of the column prologue**
  (`0x518630`-`0x51a300`): the only `cell->type` comparison in the whole prologue is the
  `6`/`0xd` pair at `0x518e6e` that `RE_zone_landform.md` already ported. There is no
  second unmodelled terrain deform hiding there.
* `World_objectFalloffWeight` (`0x52c84a`) special-cases types **0xb, 0xc, 0xe** (the
  simple falloff) and **0xd** (its own warp scale) — `cw_feature.falloff_weight` already
  has all four.
* `FUN_004f9b70` disables the **ocean-site repulsion** for type 0xb (`0x4fa95b`) —
  `cw_height._ocean_repulsion` already has that exclusion.

## Ported

| | |
|---|---|
| `cw_forest.build_zone_state` / `zone_prechain` | the site list starts empty; `sites16` gone |
| `cw_decoration.place_stone`, `feature_sites` | `feature_sites` is no longer wired into any replay, and says so |
| `cw_decoration.site_loop` | docstring carries the real draw arithmetic + the measured blast radius |
| `CwForest::buildZoneState` | same, both halves |
| `CwZoneScatter` | `gatherSites()` **removed**; the type-6 knoll grid's `sites16` is empty |
