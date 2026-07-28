# The OVERWORLD CREATURE-SPAWN SCATTER — `0x51ed60`-`0x51f981`

```
python tools/gate_zone_creatures.py     # 211 checks, 56 zones, no server needed
```

**Status: RE'd, byte-checked and gated. Not ported.** The last unmodelled stage of the
zone builder's tail, and the last one upstream of emitter C.

A **3x3 grid** — 85-block spacing, `+0x18 + rand()%10` jitter, same shape as the type-6
knoll grid at `0x51aa57` — that news up a **0x10f0-byte creature entity** per surviving
cell, picks its species off the ground material, rolls a level, and rings a pack of
followers around it at radius 8.

---

## ★ Two corrections to how this stage was scoped

Both were measured before any of the decode below was written, and both change what the
slice is for.

### 1. It is a SMALL stage. The 2,646-draw gap to emitter C is the tree pass.

The previous handoff scoped this stage as "nearly all of the median 2,646-draw gap still
separating cwgen from emitter C". Bucketing all 56 zones of `raw/zone_props2_capture.json`
by the stage map says otherwise:

| stage | median draws/zone | max | 56-zone total |
|---|---|---|---|
| gen-scatter | 13 | 31 | 577 |
| river/lake bed | 0 | 14,110 | 37,476 |
| mat-38 | 28 | 96 | 1,792 |
| **TREE loop + `lib_fn_513760`** | **3,837** | 158,421 | 569,519 |
| emitter B | 2 | 3 | 84 |
| camp grid + populator | 0 | 208 | 544 |
| **this stage** | **58** | 95 | 3,263 |
| the big spender (`0x51fdb1`+) | 14,114 | 21,254 | 782,068 |

The gap between emitter A and emitter C is **the dense-forest tree pass**, which this
project has had bit-exact and ported for months (`rederive_zonepropsb`,
`CwForest::zoneReplayTail` — which already walks it to emitter B ab initio). This stage is
a median **58** draws. It is still the right slice — it is genuinely unported and it is
the last thing before emitter C — but it is not the blocker, and the two unported things
actually standing between cwgen and a street lamp are **this stage** and **the town
builder's three per-plot draws**.

⚠ Scope of that measurement: none of the 56 zones is a town zone (emitter C spends 0 draws
in all of them), so the *composition* is measured outside the zones emitter C fires in.
The tree pass runs everywhere, which is what makes the conclusion hold; the town builder's
own contribution is not measured here.

### 2. It does NOT go through `creature_spawn_builder`, and it did not make `spawn_capture.json`.

`RE_524540_creature_spawn.md` records 6,305 overworld spawns captured by hooking
`FUN_00524540`. **This stage never calls `0x524540`** — a full call census of the span
(asserted in the gate) shows it runs `operator_new(0x10f0)` and `FUN_004e0f40` inline. The
two are separate creature paths, and the handoff's "the thing that produced
`raw/spawn_capture.json`'s 6,305 spawns" is wrong.

⚠ **`raw/spawn_capture.json` is 57 bytes on disk and holds zero spawns.** A later run of
`frida_spawn_capture.py` overwrote it with an empty result (`grid` 3, `spawns` 0). The
6,305 spawns are gone; only the analysis in `RE_524540_creature_spawn.md` survives. Nothing
in this slice needed them — `zone_props2_capture.json` covers this span because
`0x11ed60`-`0x11fa00` is inside that rig's return-address filter.

★ The entity is also not a `cube::Spawn`. `Spawn` (per `RE_524540`) carries facing at
`+0x50` and a model byte at `+0x2c`; this one is 0x10f0 bytes with facing at `+0x54`,
species at `+0x2c`, level at `+0x34` and a flags word at `+0x7a`. Different class.

---

## The decode

`[ebp-0x1304]` is the X (outer) counter, `[ebp-0x1310]` the Z (inner) — **X-outer,
Z-inner**, the same order as the landform 742-loop and both bed nests.

```
for i in 0..2:                                              # 0x51ed60
  for j in 0..2:                                            # 0x51ed70
    if rand() % 4 == 0: continue                            # 0x51ed7e -> 0x51f975
    X = zoneBaseX + i*85 + 24 + rand()%10                   # 0x51ed92
    Z = zoneBaseZ + j*85 + 24 + rand()%10                   # 0x51edba

    t = desc->type                                          # [ebp-0x1300] + 0x18
    if t != 0 and t != 0xa:                                 # 0x51ede1 / 0x51edea
        d = 1 - World_objectFalloffWeight(desc, X<<16, Z<<16)
        if d > 0 and d*d > 0.3: continue                    # 0x51ee58

    temp  = column(X,Z) ? col[+8] : FUN_004f8b40(X,Z)
    if temp  < 0.2 and rand()%4 == 0: continue              # 0x51eec0
    humid = column(X,Z) ? col[+4] : FUN_004f8570(X,Z)
    if humid < 0.2 and rand()%4 == 0: continue              # 0x51ef2d

    for e in siteList([ebp-0x1378]):                        # 0x51ef90
        dx = (X<<16) - e[+0x08] ; dz = (Z<<16) - e[+0x10]   # int64, 16.16
        if (f32)dx*2^-16)^2 + ((f32)dz*2^-16)^2 < 400: continue-cell

    y = column(X,Z)[+0x14]
    while (block(X,Z,y)[3] & 0x1f) not in {0, 2}: y += 1     # 0x51f05e
    mat = block(X,Z,y-1)[3] & 0x1f                          # the ground material

    if FUN_004d19f0(X,Z) >  0.0: continue                   # 0x51f0e5  the road field
    if FUN_0052d990(X,Z) <  1.0: continue                   # 0x51f114  the water field

    E = new Entity(0x10f0) ; FUN_004e0f40(E)                # ctor sets +0x28 = 1
    E[+0x10] = (int64)(X<<16) + 32768                       # a HALF BLOCK on X
    E[+0x18] = (int64)(Z<<16) + 32768                       # ...and on Z
    E[+0x20] = (int64)(y<<16)                               # ...but NOT on Y
    E[+0x54] = rand() * 360.0f / 32767.0f                   # 0x51f227  facing
    E[+0x34] = 1
    E[+0x2c] = FUN_005290d0(X, Z, y, 0)                     # the default species pick
                                                            #   -- spends ONE rand()
    <the species tree, below>
    <the common tail, below>
```

### The species tree — keyed on the ground material

Every branch here sets `E[+0x28] = 6` and jumps straight to the loop tail, so a creature
picked by material is **solo**: no rare roll, no level roll, no pack.

| mat | gate | pick | species |
|---|---|---|---|
| **12** | — | `rand()&1` | `0x82`, or `0x7e` when odd — **NEVER FIRED LIVE** |
| **10** | `rand()%4 != 0` -> default path | `rand()&3` | `{0:0x79, 1:0x7b, 2:0x7d, 3:0x7a}`, `+0xf58 = 25.0f` |
| **4, 5, 9** | `rand()%3 != 0` **and** `temp > 0.8` **and** `humid < 0.1` | `rand()&1` | `{0:0x7c, 1:0x80}` — the desert pair, no `+0xf58` |
| **4** (not desert) | `rand()%3 != 0` **and** `humid > 0.1` | `rand()&3` | `{0:0x78, 1:0x7b, 2:0x7f, 3:0x7d}`, `+0xf58 = 25.0f` |
| anything else | — | — | keeps `FUN_005290d0`'s pick and falls to the tail |

`y < 0` short-circuits to the default path before any of this (`0x51f2c8`), so only mat 12
can spawn below zero.

### The common tail — only when `+0x28` is still 1

```
if E[+0x28] == 1 and !(E[+0x7a] & 0x1000):
    if rand()%100 == 0: E[+0x7a] |= 0x200          # 0x51f4f4  a rare/elite bit
cellX = floordiv(floordiv(E.X >> 16, 256), 8)      # __alldiv then two signed floors
cellZ = floordiv(floordiv(E.Z >> 16, 256), 8)      # a feature cell spans 8x8 zones
tile  = World_getTileAtCoords(cellX, cellZ)        # 0x4286f0

if E[+0x28] != 6:
    (lo, hi) = FUN_0040f0a0(E[+0x2c])              # the species LEVEL range
    E[+0x34] = rand() % (hi-lo+1) + lo             # 0x51f5a0
    if tile and lo <= tile[+0x24] <= hi:
        d = 1 - World_objectFalloffWeight(tile, &E[+0x10], &E[+0x18])
        if d > 0 and d*d > 0: E[+0x58] = tile[+0x28]
if E[+0x28] == 1:
    E[+0x40] = 0x1499700 ; E[+0x44] = 0x5265c00
push E

# -- the pack ring
(glo, ghi) = FUN_0040efc0(E[+0x2c])                # the species GROUP range
count = rand() % (ghi-glo+1) + glo - 1             # 0x51f668
for k in 0 .. count-1:
    M = new Entity(0x10f0) ; FUN_004e0f40(M) ; M[+0x28] = 1
    theta = (f32)( (double)k * 6.283185307179586 / (double)count )   # ONE f32 round
    M.X = E.X + ftol2( (f32)cos((double)theta) * 8.0f * 65536.0f )
    M.Z = E.Z + ftol2( (f32)sin((double)theta) * 8.0f * 65536.0f )
    M.Y = E.Y
    M[+0x2c] = FUN_0052bfa0(M.X>>16, M.Z>>16, M.Y>>16, E[+0x2c])     # 0 or 1 rand()
    M[+0x7a] &= ~0x200
    if M[+0x28] != 6:                              # always true: members are never solo
        (lo2, hi2) = FUN_0040f0a0(M[+0x2c])
        M[+0x34] = rand() % (hi2-lo2+1) + lo2      # 0x51f8f9
        M[+0x58] = E[+0x58]
    M[+0x54] = rand() * 360.0f / 32767.0f          # 0x51f924
    push M
```

★ **`cvtpd2ps` then `cvtps2pd` at `0x51f6eb`/`0x51f6fa`.** `theta` is computed in double,
rounded **once** to f32, then widened back to double for `sin`/`cos`. Same trap the forest
blob radius/angle chains carry (`cw-forest-re`: "the decompile hides `cvtps2pd`"). A port
that keeps the angle in double throughout, or in f32 throughout, is wrong.

★ **`ftol2` TRUNCATES** (`FUN_0054a946` = `_ftol2`). The ring offsets are 16.16, so an
error here is 1/65536 of a block and no draw-counting gate could ever see it — the same
shape as the camp ring in `RE_5104e0_camp.md`.

★ **The site-proximity test is 16.16 against the entity's own fraction**, threshold **400**
= 20 blocks, strict (`ja`, so exactly 400 does not skip). This is the **sixth** copy of the
test decoded in `RE_zone_site_loop.md`'s "The consumers test in 16.16". Port the arithmetic
from a copy that runs (lesson 14).

---

## The draw accounting — closed

The rig records only draws whose return address is inside the zone builder, so a callee's
draws are counted in the index and absent from the list: exactly the shape of a missing
stage. Rather than guess at the gap, **census every callee**:

| callee | rand sites in its whole body | observed |
|---|---|---|
| `FUN_004f8b40` temperature | 0 | — |
| `FUN_004f8570` humidity | 0 | — |
| `FUN_004d19f0` road field | 0 | — |
| `FUN_0052d990` water field | 0 | — |
| `FUN_004286f0` region tile | 0 | — |
| `FUN_0052c820` objectFalloffWeight | 0 | — |
| **`FUN_005290d0` default species** | **1** (`0x52a712`, in 5,775 bytes) | **1 draw, all 324 leaders** |
| **`FUN_0052bfa0` member species** | **11** | 0 or 1; fired in **5 of 96** members |

and then check the census against the gaps the capture actually shows. Every unrecorded
draw in the span follows the facing roll (324 of them, one each) or a member's species
pick (5) — **nothing else, and every run is exactly one draw long.**

> **So the stage's total cost is: the 18 in-span sites, + 1 per leader, + 0..1 per member.**

That accounting is what makes the stage portable. It also means a stream-exact port
**needs `FUN_005290d0`** — not only for its draw, but because the species it returns
selects the group range, which sets how many member draws follow.

---

## What the gate proves

```
python tools/gate_zone_creatures.py
```

| claim | checks |
|---|---|
| every branch test, target and immediate of the decode, against the shipped bytes | 107 |
| every float the decode names, compared at f32 (`0.3f` is not `0.3`) | 13 |
| the pack ring's 2*pi, compared as a double | 1 |
| the rand-site census of the span is exhaustive — 18 sites, all in the stage map | 1 |
| the call census: 23 distinct targets, and **`0x524540` is not among them** | 3 |
| each callee's own rand-site count, over its whole body | 7 |
| the group table is exactly `(1,1)`/`(1,3)`/`(1,5)`, and every material-branch species is `(1,1)` | 12 |
| all 56 zones parse as exactly 9 grid cells, with a legal token order throughout | 57 |
| the site histogram agrees with the parse (pairing, unconditionality, totals) | 6 |
| every unrecorded draw is attributed to a censused callee, one draw per run | 4 |

**211/211**, over 504 grid cells and 324 spawned leaders.

The 57 zone-parse checks are the sharp ones, because each is a whole zone's token stream
run through the decoded branch structure as a grammar — a mis-read branch shows up as an
illegal order, not as a count that happens to be off. Folded inside them are **167 pack
sizes, each derived from its own recorded group roll**: nothing about the pack loop is fed
to the checker; `count = roll % (hi-lo+1) + lo - 1` is computed from the recorded VALUE of
that leader's group roll and compared against the number of `(0x51f8f9, 0x51f924)` pairs
actually counted in the stream, and a mismatch raises. 13 of the 167 rolls admit only one
possible size under the three ranges, so those are unambiguous on their own.

### Live totals, 56 zones

```
504 grid cells: 140 skipped by the coin, 10 cold, 7 dry, 23 by a draw-free gate
27 cold coins spent, 31 dry
324 leaders: 157 solo (a material branch), 167 with a pack roll
  mat 10:  1 kept, 9 fell through      desert: 14
  mat 4: 142 kept, 77 rolled out, 0 too dry
  mat 5|9: 8 rejected                  mat 12: 0 (never observed)
species from the material branches: 0x78 x28, 0x7a x1, 0x7b x35, 0x7c x5,
                                    0x7d x37, 0x7f x42, 0x80 x9
96 pack members over 167 packs
```

---

## Not covered

* **`0x51f285`, the mat-12 branch** — byte-checked only; no captured zone has a mat-12
  column at a scatter cell. The gate asserts the negative so it cannot drift.
* **`0 too dry`** — no captured cell reaches the mat-4 branch with `humid <= 0.1`, so that
  fall-through is decoded but unexercised. It implies all 14 desert cells are mat 5 or 9,
  which is a prediction, not a measurement.
* **Positions.** Nothing in this capture records where a creature landed — only draws. The
  85-spacing, the `+0x18`, the half-block and the ring radius are **byte-proven, not
  live-proven**. A rig that reads the `[ebp-0x1308]+0x18` vector the way
  `frida_zone_props2.py` reads the prop vector would close that, and it is the one thing
  here that would want a capture session.
* **`FUN_005290d0` itself** (5,775 bytes, 9 callees, 1 rand site) and **`FUN_0052bfa0`**
  (311 bytes, 11 rand sites) are un-decoded. They are what a port needs next.

## Porting — what it needs

Everything upstream is already in cwgen: the pre-chain, the tree pass and emitter B are
reached ab initio by `CwForest::zoneReplayTail`, the site list and its 16.16 test are
ported, `World_objectFalloffWeight` and the climate fields are ported, and the finished
zone voxel state the column scan reads is what `zoneReplayTail` already builds.

What is missing is exactly two functions:

1. **`FUN_005290d0`** — draw-free apart from one `rand()`, so its stream cost is known;
   but its RESULT selects the group range and therefore the member draw count, so a
   stream-exact port cannot stub it.
2. **`FUN_0052bfa0`** — 11 rand sites, 0 or 1 spent per call; only reached when a pack has
   members.

Neither needs a capture session. Both are pure functions of position and climate, and the
gate above will measure a port the moment one exists.
