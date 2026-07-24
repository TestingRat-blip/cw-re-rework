# The dungeon light sources — the torch (kind 7) and the wall stub (kind 4)

The two records the Milestone-3 list calls `TorchLight` and `StubLight`. **Gated on the same 6
dungeons: 663/663 torch-gate cells derived from the cell grid, 18/18 torch records exact
(position, direction, size, flicker phase), and all 280 stubs confirmed as coin+neighbour
candidates with their records exact.**

```
python tools/frida_dungeon_props.py [zx zz]    # capture -> raw/dungeon_props_capture*.json
python tools/gate_dungeon_lights.py --all      # gate
```

## Where they live: the prop vector at `site+0xc`

Both are entries in one container — the assembler's **prop vector at `site+0xc`**, pushed by
`FUN_004d6670`. Its element stride is **0x188**, which is the same container the box-fill loop
walks (`FUN_0041ba70` indexes it by 0x188, `FUN_0041cb40` counts it), so lights, boxes, chests
and the rest share one list discriminated by the kind byte at `+0x00`.

Across the 6 dungeons it receives **494 records of 13 kinds**; the lights are two of them.

| offset | field |
|---|---|
| `+0x00` | kind |
| `+0x08` | position — **3 × int64, 16.16 fixed point, exact `<<16`** (`FUN_004cde40`; no float anywhere, unlike the boss spawn) |
| `+0x20` | direction |
| `+0x24` | **size**, 3 floats |
| `+0x30` | 1 (from the ctor `FUN_004c84b0`) |
| `+0x34` | flicker phase (kind 7 only) |

> **`+0x24` is a size, not a colour.** Reading the emitters alone it looks like an RGB triple —
> the torch writes `(10.0, 10.0, 10.0)` and the stub `(2.0, 0.2, 4.0)`, which are plausible
> light colours. They are extents: the box-fill loop reads the same three floats back as
> `(loopVar - size*0.5) + 0.5` bounds. The stub's `(2.0, 0.2, 4.0)` is a thin wall panel; the
> torch's `(10.0, 10.0, 10.0)` is one whole grid cell. **The server carries no light colour or
> radius at all** — those are the client's, keyed off the kind.

## Torch — kind 7, `0x5059f1`

```c
// reached only from the per-cell body, after the box fill
if (cell.kind == 4)                  goto flag_pass;      // 0x5058d0
if (cell.flags & 1)                  goto mob_pass;       // 0x5058dd
if (grid(I, J, K-1).kind == 3)       goto mob_pass;       // 0x50558e -- room below
if ([ebp+0x1c] != 0)                 goto box_fill;       // 0x5058e3
if (rand() % 40 != 0)                goto box_fill;       // 0x5058ed  <- 1 in 40
    dir     = rand() % 4;                                 // 0x5059b9
    flicker = rand() % 4000;                              // 0x5059d7
    emit { kind 7, pos = cellOrigin + (5, 5, 1), size (10,10,10), dir, flicker }
    goto mob_pass;                                        // skips the box fill entirely
```

Three draws, and a torch cell **skips the box-fill loop** — worth knowing for a port, because
the alternative path consumes a different number of draws.

The set of cells that reach the 1-in-40 gate is fully derivable from the cell grid: **kind 3,
`flags & 1` clear, and the cell below not a room.** 663/663 across the 6 dungeons, exact and in
call order. Given that, `rand() % 40 == 0` reproduces the torch set exactly, and the two
following draws reproduce `dir` and `flicker` — 18/18 records byte-identical on every field.

`[ebp+0x1c]` is an assembler parameter that disables torches wholesale; it was 0 in all six
captures, so the disabled branch is untested.

## Stub — kind 4, four emitters

Four near-identical blocks run early in the per-cell body, one per wall face, each with its own
coin flip:

```c
if (style not in {0, 1, 3})      goto after_all_four;     // 0x50498a
if (cell.kind == 4)              goto after_all_four;
if (cell.flags & 1)              goto after_all_four;
for dir in (0, 2, 3, 1):                                  // this order
    if (rand() % 2 == 0)                    continue;     // the coin is ALWAYS drawn
    if (grid(I+dI, J+dJ, K).kind != 0)      continue;     // neighbour must be solid rock
    if (World_getBlockAt(<point past the wall face>).solid) continue;   // terrain probe
    emit { kind 4, pos = cellOrigin + offset, size (2.0, 0.2, 4.0), dir }
```

| dir | neighbour tested | position offset | emitter |
|---|---|---|---|
| 0 | `(I, J-1, K)` | `(5, -1, 2)` | `0x504b58` |
| 2 | `(I, J+1, K)` | `(5, 11, 2)` | `0x504cfc` |
| 3 | `(I-1, J, K)` | `(-1, 5, 2)` | `0x504ea8` |
| 1 | `(I+1, J, K)` | `(11, 5, 2)` | `0x505046` |

**The direction encoding is not the mob pass's.** There it is west=0 / east=2 / south=3 /
north=1; here it is south=0 / north=2 / west=3 / east=1. Two different conventions inside the
same function — a port that reuses one for the other will place every stub on the wrong wall.

Style gating is stark: styles 0, 1 and 3 emit stubs (38–104 per dungeon); **styles 2 and 4/5
emit none at all**, and do not even draw the coins.

### What is and is not derived

Every one of the **280 stubs** emitted across the 6 dungeons is a coin+neighbour candidate, and
each one's record — position, direction, size — matches the model exactly. What is *not*
modelled is the third gate: a `World_getBlockAt` probe at a point just outside the wall face,
which rejects some candidates (50 of 135 in one dungeon, 4 of 108 in another). It is the same
class of input as the mob pass's probe and could be closed the same way, but its probe points
are **off the 10-unit lattice** (`y = baseY + J*10 - 3`), so the existing lattice dump does not
cover them.

## Gate results

| zone | style | torch-gate cells | torches | stubs | all props |
|---|---|---|---|---|---|
| (32795, 32796) | 3 | 93 | 0 | 38 | 66 |
| (32780, 32788) | 1 | 97 | 3 | 53 | 84 |
| (32787, 32796) | 2 | 100 | 2 | 0 | 45 |
| (32796, 32787) | 0 | 132 | 6 | 85 | 115 |
| (32804, 32788) | 3 | 109 | 4 | 104 | 138 |
| (32804, 32811) | 2 | 132 | 3 | 0 | 46 |
| **total** | | **663** | **18** | **280** | **494** |

The reference dungeon (32795, 32796) produced **zero** torches — 93 cells reached the gate and
none of the 93 draws was ≡ 0 mod 40, which at 1-in-40 happens about 10% of the time. Capturing
only that zone would have made the torch path look dead; five more zones settled it.

## Scope note

This is the *placement* half. The Milestone-3 item "light emission" also covers turning these
records into actual lights in the RatForge renderer — which is engine work in that repo, not
reverse engineering, and is untouched here. What this closes is the input that work needs: the
records exist, and their positions, directions, sizes and flicker phases are now reproducible
from the cell grid and the rand stream.

## Instrumentation

`FUN_004d6670` is hookable and Frida attaches before its `push ebp`, so the assembler's frame
is still live and the loop's cell indices are readable at `[ebp-0x2b50/0x2b4c/0x2b48]` — the
same trick the item-generator rig uses on `FUN_00528530`. The seven `rand()` sites of interest
(the 1-in-40 gate, the torch's two parameters, the four stub coins) are attributed by **exact
return address**, which avoids patching anything inside the assembler body — the failure mode
documented in `RE_50702a_mob_populator.md`. Every capture matched the uninstrumented total of
1,827,917 draws on the reference zone, confirming the rig perturbs nothing.
