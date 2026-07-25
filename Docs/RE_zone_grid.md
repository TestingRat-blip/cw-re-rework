# The zone builder's candidate grid — `0x51e839`-`0x51eab5`

`RE_5104e0_camp.md` closed the overworld encampment populator `FUN_005104e0` but left one
input captured rather than derived:

> **The candidate grid itself** (`0x51e839`-`0x51eab5`) — the falloff roll that decides
> which of the 196 grid cells survive. The gate takes the candidate list as captured.

This is that loop.  It is inline in the zone builder `FUN_00518630`, immediately before
the camp call at `0x51eac7`, and it is now derived: the lattice and its filter are pure
arithmetic, the weight is `cw_rederive`'s already-proven `cw_feature.falloff_weight`
(`FUN_0052c820`), and the only thing left replayed is the `rand()` stream the loop does
not own.

```
python tools/frida_zone_grid.py --grid 32700 32700 16 13     # sparse: distinct features
python tools/frida_zone_grid.py --block 32780 32740 16       # a solid block
python tools/gate_zone_grid.py
```

**Gated over 99 firing zones (512 swept): 16,250 checks green** — 3,861 cells rolled,
205 candidates kept.  The same 48-of-256 / 51-of-256 firing rate `RE_5104e0_camp.md`
reports, from an independent rig.

---

## The loop

```
if (desc->type in {0, 1, 5, 0xa, 0xe}) return               0x51e804-0x51e833
for i in 0..13:                                             xoff [ebp-0x12ec] += 18, < 0xfc
  for j in 0..13:                                           yoff [ebp-0x1360] += 18, < 0xfc
    counter = i + 3*j                    # [ebp-0x1328]: = i at row start, += 3 per step
    if (counter % M) continue            # M = [ebp-0x1368]                    0x51e885
    X = site[0x60]*256 + 4 + 18*i                                              0x51e893
    Y = site[0x64]*256 + 4 + 18*j                                              0x51e8a4
    w = FUN_0052c820(desc, X<<16, Y<<16)                                       0x51e913
    d = 1.0f - w                                                               0x51e918
    t = d > 0 ? d*d : 0.0f                                                     0x51e931
    if ((float)rand() / 32767.0f > t * 0.75f) continue                         0x51e94c
    z = first block at (X, Y), scanning up from the column base,
        with (block[3] & 0x1f) in {0, 2}                                       0x51e999
    push {(X<<16) + 0x8000, (Y<<16) + 0x8000, z<<16}                           0x51ea53
FUN_005104e0(world, site, desc, &candidates, 5)                                0x51eac7
```

The constants, all read out of the image rather than guessed:

| what | address | value |
|---|---|---|
| grid step | `0x51ea76` / `0x51ea99` | `add 0x12` = 18 blocks |
| grid span | `0x51ea88` / `0x51eaa9` | `cmp 0xfc` = 252, so 14 steps |
| cell origin | `0x51e89f` / `0x51e8aa` | `add 4` |
| the counter's inner step | `0x51ea79` | `add edx, 3` |
| the modulus `M` | `0x51dc82` | literal `5`, and **read live** by the rig — 5 in every zone |
| `1.0f` | `[0x5586dc]` | 1.0 |
| the keep scale | `[0x5586d4]` | 0.75 |
| `RAND_MAX` | `[0x558834]` | 32767.0 |
| the position bias | `[0x5737c0]` | **-32768.0**, *subtracted*, so it adds half a block |

That last row is the one worth stating plainly: the two axes are converted to 16.16 and
then have a **negative** constant subtracted, so every candidate sits at `+0.5` of a
block, not on the lattice point itself.  The z is not biased.

### The lattice is not a full grid

`counter % 5` over `counter = i + 3*j` keeps `j ≡ -2i (mod 5)` — **39 of the 196 cells**,
in a diagonal stripe pattern, and the same 39 in every zone.  A `rand()` is drawn *only*
for those 39, which is what makes the loop's draw count fixed and predictable: **one draw
per qualifying cell, 39 per firing zone, whatever the terrain does**.

### The z scan

`FUN_00406100(X, Y, site)` returns the column; `[col+0x14]` is where the scan starts, and
`FUN_00405fd0(X, Y, z, site)` returns the block, of which only `block[3] & 0x1f` is
tested — stop when it is 0 or 2, otherwise `z++`.  This is the **same material test** the
dungeon wall stub's terrain probe reduces to (`RE_dungeon_markers.md`): non-solid iff
`(block[3] & 0x1f) ∈ {0, 2}`.

---

## What is gated

`tools/gate_zone_grid.py`, over `raw/zone_grid_capture*.json`:

| claim | derived from | checks |
|---|---|---|
| the site's zone fields, the live modulus, the 39-cell lattice in emit order, each cell's `(X, Y)`, each cell's squared term, each cell's keep/reject, each accepted record's `x/y`, and that the vector handed to `FUN_005104e0` is exactly the accepted records in order | the seed + the captured `rand()` | 12,389 |
| the falloff weight, **ab initio** | `cw_feature.falloff_weight` driven by the captured descriptor | 3,861 |

The weight is the interesting one: nothing about it is replayed.  `cw_rederive` already
proves `FUN_0052c820` 91,880/91,880 by direct call, and driving it from the descriptor
this loop is handed reproduces the live weight **bit for bit** at every rolled cell — so
the roll's threshold is derived, and only the uniform draw itself is borrowed.

### z is measured, not gated

The scan reads the **finished** column, so a column that carries decoration answers above
the terrain skin.  Against `cw_featuregrid.deformed_surf_height` (the feature-aware
height — the open-terrain `cw_height.surf_height` is the wrong thing here and is off by
up to 56 blocks inside a big feature), the rule is `z == deformedSurfH + 2`, the first
free block over the two terrain voxels at `surfH` and `surfH+1`.  That holds on **124 of
205** candidates; the gate prints the rate and the full residual histogram rather than
asserting it.  Most residuals sit *above* the terrain (a dense `+3..+8` cluster in the
solid block, then a long tail to `+53`), which is what a decoration stamp would look like
— but a few sit *below* it (`-5`, `0`, `+1`), which a decoration stamp cannot explain, so
**the residuals are reported, not interpreted**, and no gate depends on the reading.

---

## The rig, and a trap worth keeping

`tools/frida_zone_grid.py` reads the whole cell — `X`, `Y`, `w`, `t` and the draw — at
**one** hook, on `rand()`, and deliberately places no hook inside the loop.

The first cut hooked the two obvious places: the call to `0x52c820` (to read its two
arguments) and the instruction after the `fstp` (to read its result).  Every zone then
came back with a **constant** weight of `2.740148202229121e+21` and **zero** candidates —
for a zone that really keeps 22.  Frida's ia32 interceptor does not preserve the x87 or
SSE state across a callback, and both sites are inside live float state: at `0x51e918`
the game is holding `1.0f` in `xmm0` for a `subss` two instructions later, and a callback
between the call and the `fstp` at `0x51e920` lands in the middle of `0x52c820`'s x87
result.

`0x51e94c` is safe: by then `X`, `Y`, `w` and `t` are all spilled to the frame
(`[ebp-0x12f0]`, `[ebp-0x12dc]`, `[ebp-0x1330]`, `[ebp-0x12d0]`), and the game reloads
`xmm0`/`xmm1` from memory after the call.  `rand`'s own prologue has not run at the hook
point, so `EBP` there is still the zone builder's.

**The lesson:** a hook that reads a float mid-expression can *change the value it is
reading*.  The tell was that the "weight" was byte-identical at 39 different positions —
a distance-over-radius cannot be.  The cheapest falsifying observation was to run the
already-ported `FUN_0052c820` on the same inputs, which answered 0.189 where the capture
said 2.7e21; that took one command and cost nothing.  (The same shape as the retraction
in `RE_dungeon_markers.md`: a uniform value across cases that cannot be uniform.)

Also worth keeping: `FUN_00406100`, the column lookup the z-scan starts from, is
**deliberately not hooked**.  It is the hottest function in a zone build and an
`Interceptor` on it stalls the whole thing — a first run sat for 13 minutes without
finishing a single zone.  The scanned z arrives in the pushed record anyway.

---

## Where this leaves Phase 2

`gate_zone_camp.py` no longer has a captured input that this repo cannot derive: the
candidate list it takes as given is now reproducible from the seed plus the loop's own
draws.  What is still open in the zone builder is the two emitters no sampled zone
reached, **A** (`0x51dbf5`, type `0x2d`) and **C** (`0x51fcdb`, type `0x32`/`0x33` with a
string), whose record content is read off statically but whose gates are not.
