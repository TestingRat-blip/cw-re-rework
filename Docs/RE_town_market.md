# The town builder's MARKET pass (role 9) — `0x4e3a3f`-`0x4e5023`

*Gate:* `tools/gate_town_market.py` — **445 checks, 0 FAIL**, 6 markets / 20 slots / 90 prop
records checked field by field.
*Source data:* `raw/town_props_capture*.json` (`tools/frida_town_props.py`, seed 42069).
*Status:* **RE + gate only. NOT ported** — §8 says what a port would have to be fed.

This is the **last open band in the town builder**. With it closed, 174 of the 176 firing
rand sites are accounted for.

---

## 0. What it is

The handoff queued `0x4e39ea`-`0x4e4fb3` as "40 sites / 218 draws in 6 towns, but with 20
`prop_push` and 20 settle sites hanging off it, so unlike the last four stages this one *is*
checkable field by field". That was right, and it undersold it: the records are not just
countable, they are **derivable** — type and extents both, out of draws the rig never
recorded.

It is **two plot-role sections**, not one:

| span | gate | |
|---|---|---|
| `0x4e3a3f`-`0x4e3e15` | `plot[+0xc] == 8` | **dead** — see §2 |
| `0x4e3e15`-`0x4e5023` | `plot[+0xc] == 9` | the **market** |

and the market is one plot ringed with market stalls:

```
for each of 20 perimeter slots:
    col = Chunk_getColumnAt(x, y)
    if col: push (x, y, col.top) into [ebp-0x5d80]      <- the NPC pass's flag-B list
    if rand() % 5 != 0:                                    ~80% of slots are used
        jitter = rand() % 3                                along the plot edge
        record = <factory>(pos)                            a HIDDEN rand() picks the model
        if Prop_settleOnTerrain(record, site, 1):
            push record into site+0xc
```

**12 slots take stalls and 8 take goods**, from two different factories.

## 1. ★ The semantic reading — and this time it is in the namespace that resolves

| factory | blocks | type | via `assets/props/prop_ids.json` |
|---|---|---|---|
| `FUN_004f3630` | 0-11 | `0x15 + rand()%3` | **market-stand1 / market-stand2 / market-stand3** |
| `FUN_004f3490` | 12-19 | `0x18 + rand()%4` | **barrel / crate / open-crate / sack** |

Twelve stalls and eight crates of goods around one plot: the town **market**.

⚠ **`RE_town_yard.md` 07-28g had to WITHDRAW exactly this kind of reading**, and the
difference is worth stating precisely, because it is the whole reason one is allowed and the
other was not. The yard's decoration ids resolve through the same file to plausible
furniture — but the yard pushes them to `site+4` / `site+0x30`, which **no capture hooks**,
so nothing tied an id to a model. These records go to **`site+0xc`** (`lea ecx, [edi + 0xc]`
at every one of the 20 push sites), and `site+0xc` is exactly the namespace
`prop_ids.json` was built for. The gate asserts the push target out of the binary, so if
anyone later moves this claim to a stage that does not push there, it fails.

The extents corroborate it independently: a stall is **3.5 × 2.0 × 3.0** blocks (a stall-
sized box), a barrel/crate **2.0³**, a sack **1.5 × 1.5 × 1.4**. Those are `.rdata` literals
in the factory bodies, not fitted.

## 2. ★ Role 8 has a code section and is never assigned

`0x4e3ac0` gates a whole ~950-byte section on `plot[+0xc] == 8`. Censusing **every**
immediate the builder writes to a plot's `+0xc`:

```
0, 2, 3, 5, 6, 7, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20
```

**8 is not among them.** Nor is 4, which also has a section (`0x4edda6`). The plot table is
the builder's own local, so nothing else writes it — the two sections are **dead code in the
shipped game**.

The capture agrees, and not vacuously: the role-8 section has **a rand site of its own
(`0x4e3d7f`, a `rand()%4`) and a prop push of its own (`0x4e3da0`)**, and both are empty in
all 92 towns. If role 8 were merely rare rather than impossible, those two would eventually
fire. The gate asserts both the missing store and the two empty emitters.

⚠ **Nothing here is a claim about what role 8 *would* do.** It calls `FUN_00513400` six
times with colour `0xdcdcdc` and spends no draw before that call; whether `FUN_00513400`
draws is unknown, because it never runs. Recorded as an open door that cannot be opened
from this corpus (lesson 6, inverted: a door that is *nailed shut* is also a result).

Free by-product — **the builder's whole plot-role dispatch**, disassembled by the gate:

```
2@4e2f87  2@4e3119  7@4e3147  8@4e3ac0  9@4e3e15  6@4e502f  2@4e5c34  2@4eda0b
3@4edcc5  4@4edda6  5@4ee5d9  17@4ee76e  19@4eeace  20@4eee3e  18@4ef02d
```

## 3. ★ It closes an input the NPC pass could not name

`RE_town_npcs.md` §2 lists five per-town booleans that fix every villager's draw sequence.
Flag **B** is `[ebp-0x5d80]`, and §8's FED table could only say *"pushed at `0x4e3ea2`, in
the not-yet-RE'd `0x4e3ead` band"*.

`0x4e3ea2` is this pass's landmark push — `FUN_0042feb0([ebp-0x5d80], {x, y, top})`, one per
perimeter slot whose column exists, and **not** gated on the `%5` coin. So:

* **flag B is the market-stall list**, and `B ⟺ D` (which the NPC gate observes but could
  not explain) is just "a town with a market also has the kind-2/3/4/5 buildings";
* the villagers' schedule stop at `0x4f0fc0` — `+ (rand()%0xb4 + 0x3c)` minutes, a **1-3
  hour** visit — is **a trip to the market**.

Two stages decoded eight days apart, from different observables, and the second names the
first's unknown input. Only **flag A** (the 8×8 region-site sweep at `0x4f01b0`) is still
un-derived.

## 4. ★ The hidden draws are DERIVED, not merely priced

Both factories sit outside the builder body, so `frida_town_props.py` never lists their
draws (lesson 18). 07-28m priced that kind of gap off the process-global draw index; here
the draws are **recovered outright**, because msvcrt's `rand` is a plain LCG and the town's
own zone seed pins the whole stream (lesson 33, the 07-28i/j technique).

The measured gap after a block's jitter draw is **2 (×78) or 3 (×15) and nothing else**, and
which one it is corresponds exactly to the recorded prop type:

| gap | hidden draws | types observed |
|---|---|---|
| 2 | 1 | `0x15 0x16 0x17` (all of factory A), `0x18 0x1b` |
| 3 | 2 | **`0x19 0x1a` only** |

because factory B's jump table arms 1 and 2 take a second `rand()` for a float scale and
arms 0 and 3 are constant. Zero exceptions in either direction.

With the hidden values recovered the factories reproduce, from the seed:

| | |
|---|---|
| prop **TYPE** | **90 / 90** |
| prop **EXTENTS** (3 floats each) | **270 / 270** |
| whether the arm costs one hidden draw or two | **93 / 93** |

So the band's real cost is **218 recorded + 108 hidden** draws (93 blocks × 1, plus 15
second draws).

## 5. The perimeter ring

The 20 slots sit on the four edges of the plot, and the `%3` jitter runs **along** the edge
it is on — so its sign flips from side to side:

| edge | blocks | jitter |
|---|---|---|
| +Y | 0, 1, 2, 12, 13 | `+rand()%3` on the record's 2nd coordinate |
| −Y | 3, 4, 5, 14, 15 | `−rand()%3` on the 2nd |
| −X | 6, 7, 8, 16, 17 | `−rand()%3` on the 1st |
| +X | 9, 10, 11, 18, 19 | `+rand()%3` on the 1st |

Once the jitter is removed, each slot's offset from the reference slot is **identical in all
6 towns, on both axes — 40 of 40**. So the ring is 20 fixed literals plus one 3-value jitter
each, and the whole geometry is derivable from the plot lattice alone.

⚠ **The SIGN is disassembled; the AXIS is fitted, one bit per block.** A symbolic walk of
each block recovers the jitter's sign for 17 of the 20 (and agrees with the data on all 17),
but not reliably *which* of the two coordinates it lands on: MSVC emits a block's two
coordinates through two different shapes — some call `int_to_fixed16_16`, some inline the
widening as `cdq / shld r2, r1, 16 / shl r1, 16` through whatever register pair is free —
and the walker resolves only one of the pair. The bit is therefore taken from the capture,
and the gate **reports its null baseline**: of the six `(axis, coefficient)` options, exactly
the two the model names survive in **20 of 20** blocks (the right coefficient on the jitter
axis, and 0 on the other). A wrong axis does not survive 6 towns.

⚠ And the reference slot's **own** jitter has to be removed before comparing, or every other
slot inherits a 3-value spread on the reference's axis and nothing looks constant. That is
how the first version of this check read 6 of 74 — worse than a constant, which per lesson 5
means misaligned rows and not a wrong formula. It was.

## 6. The band is TWENTY blocks, not the 19 the ledger could see

`RE_town_npcs.md` §9 gave this band as `0x4e39ea`-`0x4e4fb3`, and `0x4e4fb3` is the band's
**last rand site**. The 20th block's settle (`0x4e5001`) and push (`0x4e5014`) sit past it,
in the gap before the yard pass at `0x4e503a` — so the census counted 20 rand pairs against
19 settles and 19 pushes, and the asymmetry read like a block that legitimately does not
settle.

Second time in two slices that a span was ended at the last thing that *fired* rather than
at a boundary the binary states (`RE_town_ruin.md` §2 was the same mistake at the scale of
the whole function). **A span bounded by its own contents is a hypothesis.**

## 7. Numbers

| | |
|---|---|
| span | `0x4e3a3f`-`0x4e5023` (role 8: `0x4e3a3f`-`0x4e3e15`, dead; role 9: the rest) |
| rand sites | **41** — 40 in the market, 1 in the dead role-8 section |
| recorded draws | **218** over 6 towns |
| hidden draws | **108** (93 factory calls, 15 of them a second draw) |
| slots | 20 per market — 12 stalls, 8 goods |
| records | 98 settles, **90 pushed** (8 rejected by the settle) |
| gate | `gate_town_market.py`, **445 ok / 0 FAIL** |

## 8. What a port would have to be FED

| input | status |
|---|---|
| the plot table's roles | **derived** — `rederive_townpromo` |
| the plot lattice and `span` | **derived** — `rederive_townlattice` |
| the 20 perimeter offsets | **derived** — town-independent literals, §5 |
| both factories | **derived** — §4, moduli and extents read out of their bodies |
| the terrain column at each slot | needed for the landmark push and the settle verdict; the DRAW stream needs only whether the column exists (true at all 120 slots observed) |
| the settle verdict | not derived — 8 of 98 rejected; `Prop_settleOnTerrain` is ported (`0x5287b0`, 07-26e), so this is reachable, just not done here |

Everything the *draw stream* needs is derived. Only the prop's final Z needs terrain.

## 9. What this leaves in the town builder

| span | sites | recorded draws | |
|---|---|---|---|
| … all previously closed stages … | 134 | 228,150 | closed |
| **this pass** `0x4e3a3f`-`0x4e5023` | **40** | **218** | closed |
| `0x4eee3e`-`0x4ef248` | 2 | 45 | ✅ closed 07-29c, `RE_town_antique.md` |

**174 of the 176 firing sites, 228,368 of 228,413 recorded draws — 99.98%** *as this file
was written*. ⚠ **Superseded the same day**: `RE_town_antique.md` §5 closed the last two
sites, so the census is now **176 / 176 and 228,413 / 228,413 — 100.00%, nothing open.**
Those two are the role-`0x14` / role-`0x12` sections at `0x4eee3e` and `0x4ef02d` in the
dispatch table above, and they place `antique-building1..4` — not the "town NPC spawns"
`RE_town_plaza.md` §9 called them.
