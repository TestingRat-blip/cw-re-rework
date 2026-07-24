# The liana, cobweb and chandelier emitters — SOLVED, gated

The three remaining `site+4` emitters. With `RE_52c370_wall_decor.md` this closes that
container: **all six of its emitters are now modelled.**

**Gated on the same 6 dungeons: 160/160 records — id, thickness, angle, scale, flag and
position.**

```
python tools/frida_dungeon_props.py [zx zz]     # capture -> raw/dungeon_props_capture*.json
python tools/gate_hanging_decor.py --all        # gate
```

All three are written inline in the assembler (no helper function of their own), all push
through `FUN_00528450`, and all use the **hanging-decor** id namespace — `0x37` liana, `0x38`
chandelier, `0x39`/`0x3a` cobwebs — not the static-entity ids the wall decor uses.

They share the record `FUN_004c83b0` constructs: scale `(1,1,1)` at `+0x2c..+0x34`, flag `2` at
`+0x38`, with `+0x08` position (3 × int64 16.16), `+0x20` a thickness and `+0x24` an angle in
degrees.

`FUN_00522820`, the predicate two of them use, is simply **`kind ∈ {0, 1, 2}`** — i.e. the
neighbouring cell is *not* a room (3) or the entrance (4).

## Liana — `0x37`, one block, 5 draws

```c
if (!FUN_00522820(grid(I, J, K+1)))  goto webs;      // nothing open above
if (rand() % 3 != 0)                 goto webs;
if (style != 4 && style != 2)        goto webs;
angle = (float)rand() / 32767 * 360;                 // +0x24, a full random rotation
t     = (float)rand() * 0.04f / 32767 + 0.08f;       // +0x20, 0.08 .. 0.12
z     = fixed16f((float)(baseZ + (K+1)*10) - t * 20);
y     = baseY + J*10 + 2 + rand() % 5;               // exact <<16
x     = baseX + I*10 + 2 + rand() % 5;               // exact <<16
```

Both horizontal axes are jittered 2..6 within the cell; the liana hangs from the ceiling by
`t * 20` (1.6 to 2.4 units).

## Cobwebs — `0x39`/`0x3a`, four blocks, 4 draws each

One block per wall, styles 1 and 2 only:

```c
if (rand() % 3 != 0)                    goto next_wall;
if (!FUN_00522820(grid(neighbour)))     goto next_wall;
t = (float)rand() * 0.05f / 32767 + 0.08f;           // note 0.05 -- the liana uses 0.04
z = fixed16f((float)(baseZ + (K+1)*10) - t * 20);
<jitter axis> = base + 2 + rand() % 5;               // exact <<16
<wall axis>   = fixed16f((float)wallBase +/- t * 10);
id = 0x39 + rand() % 2;                              // cobwebs or cobwebs2
```

| push site | wall | jittered axis | wall offset | angle |
|---|---|---|---|---|
| `0x105cf5` | x− | y | `+ t*10` from `baseX + I*10` | 0° |
| `0x105e58` | x+ | y | `− t*10` from `baseX + I*10 + 10` | 180° |
| `0x105fbb` | y+ | x | `− t*10` from `baseY + J*10 + 10` | 270° |
| `0x106118` | y− | x | `+ t*10` from `baseY + J*10` | 90° |

**The wall axis is computed in float and collapses to an integer.** `t * 10` lands in
0.8 .. 1.3, but the base is a world coordinate around 8.4e6 — past float32's 2^23
integer-exact range, where the spacing is 1.0 — so the addition rounds and every cobweb ends
up at exactly `±1.0` from the wall. The captured positions bear that out: `dx` is `1.0` or
`9.0` with no spread at all, while the jittered axis takes all five values. Modelling this in
double would put them at 1.02–1.13 instead.

## Chandelier — `0x38`, one block, 1 draw

```c
if (style != 3 || rand() % 10 != 0)  skip;           // 0x507753 / 0x507760
pos   = (baseX + I*10 + 5.5, baseY + J*10 + 5.5, baseZ + (K+1)*10 - 2.7);
scale = (0.6, 0.5, 0.1);  flag = 1;  angle = 0;
```

Dead centre of the cell, hanging 2.7 below the ceiling. It is the only one of the six `site+4`
emitters whose scale and flag differ from the `FUN_004c83b0` defaults.

### The second dropped multiply

The chandelier's z goes through **`FUN_004dab30`**, which decompiles as a bare `ftol` wrapper —
and is not one. The disassembly is `movsd / mulsd xmm0, [0x5737f0] / fld / call ftol`, with
`DAT_005737f0 = 65536.0`: it is the **double→16.16 converter**, the exact twin of
`FUN_00402a10` for floats, whose `mulss` the decompiler drops in the same way
(`RE_50702a_mob_populator.md` records that one, found via the boss spawn).

That matters here because the multiply happens **before** the truncation, on the whole
coordinate rather than on the offset:

```
trunc((181 - 2.7) * 65536.0)  =  11685068      ->  dz = -176948
        -2.7  * 65536.0       =    -176947.2   ->  dz = -176947   (wrong by one)
```

Every one of the 24 captured chandeliers is at `-176948`. Two functions now, both reading as
plain `ftol` in the decompiler and both actually scaling first — worth assuming it of any such
tail until the disassembly says otherwise.

## Gate results

| zone | style | liana | cobwebs | chandelier | total |
|---|---|---|---|---|---|
| (32795, 32796) | 3 | 0 | 0 | 13 | 13 |
| (32780, 32788) | 1 | 0 | 25 | 0 | 25 |
| (32787, 32796) | 2 | 16 | 39 | 0 | 55 |
| (32796, 32787) | 0 | 0 | 0 | 0 | 0 |
| (32804, 32788) | 3 | 0 | 0 | 11 | 11 |
| (32804, 32811) | 2 | 21 | 35 | 0 | 56 |
| **total** | | **37** | **99** | **24** | **160/160** |

The style gating is stark and matches the code exactly: style 0 emits none of the three, style
3 only chandeliers, style 1 only cobwebs, style 2 both liana and cobwebs. Style 4 would emit
lianas (it shares the liana's `style == 4 || style == 2` test) but no dungeon of that style was
scanned.

## `site+4`, complete

| push site | id(s) | count | emitter |
|---|---|---|---|
| `0x10628c` `0x1065f1` `0x106956` `0x106cc5` | `0x30`–`0x36` | 108 | `FUN_0052c370` wall decor |
| `0x105b84` | `0x37` | 37 | liana |
| `0x1078ad` | `0x38` | 24 | chandelier |
| `0x105cf5` `0x105e58` `0x105fbb` `0x106118` | `0x39`, `0x3a` | 99 | cobwebs |

268 records, all six emitters gated. Together with `site+0xc` (494 records — lights in
`RE_dungeon_lights.md`, furniture in `RE_52a830_scatter.md`), both of the dungeon assembler's
decoration containers are now reproducible.
