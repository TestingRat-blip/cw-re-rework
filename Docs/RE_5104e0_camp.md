# `FUN_005104e0` — the overworld encampment populator

`RE_zone_props.md` found this function by censusing `FUN_004ce8e0`
(`vector<PropRecord>::_Reserve`) instead of the out-of-line `push_back`. It pushes prop
records through an **inlined** `push_back`, so the caller census that had scoped the prop
layer could not see it at all. All that session could prove was that it emits props; the
`Spawn` / `CombatBehavior` / `CompanionBehavior` construction in its body was left as a
lead, explicitly not a label.

It is the **overworld encampment populator**: the zone builder hands it a grid of
candidate positions and it turns them into creature spawns and camp props.

```
python tools/frida_zone_camp.py --block 32780 32740 16     # a solid block
python tools/frida_zone_camp.py --grid  32700 32700 16 13  # sparse: more distinct features
python tools/gate_zone_camp.py
```

**Gated over 99 firing zones (512 zones swept): 2,742 checks green.**

---

## How it is reached

```
FUN_005104e0(world, site, featureDescriptor, &candidates, 5)          @0x51eac7
```

`ret 0x10` — four stack arguments. **The fourth (the literal `5`) is never read**; no
instruction touches `[ebp+0x14]`.

The zone builder calls it only when the zone's feature type (`descriptor+0x18`) is not in
`{0, 1, 5, 0xa, 0xe}` (`0x51e804`-`0x51e833`), and first builds the candidate list at
`0x51e839`-`0x51eab5`: a 14×14 grid stepping 18 blocks over `0..234`, of which the
`(i + 3j) % 5 == 0` cells — a fixed 39 of the 196 — are rolled, and a rolled cell is kept
when `rand()/32767.0 <= max(0, 1 - World_objectFalloffWeight(...))² · 0.75`.  (The first
version of this line said the roll was against `w² · k`; it is against `(1-w)²`, and only
39 cells are rolled at all — see `RE_zone_grid.md`.)  So a zone far from its feature
reaches the populator with an **empty** candidate list and does nothing — 48 of 256 zones
fired in a solid block, 51 of 256 in a sparse grid.

## The prologue — a camp kind, with no rand at all

The camp kind comes from the feature descriptor alone:

```
kinds = [9]                              if featureType == 4
        [0,1,2,3,4,5,1,7,8]              if featureType in {2, 0xd}
        [0,1,2,3,4,5,1,7,8,6,10]         if featureType == 3
        [0,1,2,3,4,5,1,7,8,6]            otherwise
kind  = kinds[ descriptor[+0x20] % len(kinds) ]      # UNSIGNED modulus, zero draws
```

**`descriptor[+0x20]` is derived, not captured (2026-07-26).** It is the region's running
MISSION counter — seeded by the region's third setup draw (`rand()%10000`) and advanced by
`1 + rand()%0x32` per popped Loop-C candidate, the cell keeping the value from before its
own advance. So is `+0x24` (the cell level) and `+0x28` (the count sub-switch). See
`RE_camp_descriptor.md`; this gate now derives all three and checks them against the live
bytes, and picks the kind from the derived value.

`kind - 1` then indexes a 10-way jump table at `0x510728` (table at `0x5133b0`); kind 0 or
> 10 takes the default arm. Each arm fills

* a **prop-id list**, and
* one or more **species groups** — `FUN_004f7540` builds a 0x18-byte group of two
  `vector<int>` (leader list at `+0`, companion list at `+0xc`), `FUN_005285c0` pushes it.

Arms 1–5 and the default spend one or two `rand()`s picking species; arms 6–10 spend
none. **Only the default arm skips `FUN_004f7540`** — it zeroes the group inline — so a
`FUN_004f7540` count of 0 identifies it.

| kind | prop ids | leader list | companion list |
|---|---|---|---|
| 1 | 0x0f 0x10 | `rand()%4` → 0x11 / 0x29 / 0x61 / *(none)* | `rand()%4` → [0x28,0x25,0x26,0x27] / 0x3b / 0x29 / 0x60 |
| 2 | 2 3 | `rand()%3` → 0x5e / 0x4f / 0x52 | `rand()%4` → 0x1e / 0x1a / 0x13 / 0x21 |
| 3 | 9 10 | `rand()%2` → 0x2f / 0x58 | `rand()%3` → 0x57 / 0x5b / 0x21 |
| 4 | 7 8 | 7, 8 | `rand()%3` → 0x3c / 0x35 / 0x3a |
| 5 | 4 5 | 0x58 | 0x57, 0x37, 0x3c |
| 6 | 0x46 0x45 | 0x47 | 0x47 |
| 7 | 0x34 | 0x3e · then 0x3c · then 0x34 | same, three groups |
| 8 | 0x66 0x69 0x68 | 0x68 · 0x66 · 0x69 | same, three groups |
| 9 | 0x56 0x6a | 0x56 · 0x6a | same, two groups |
| 10 | 0x23 0x5a 0x5b | 0x23 · 0x5a · 0x5b | same, three groups |
| *default* | 0x0b 0x0c | 0x2e | 0x13, 0x21, 0x1a |

Every arm ends by resetting the group's two lists to the **prop ids** and pushing the
group once more, so the last group is always the prop-id pair.

Two details the gate reads off the live groups rather than assuming:

* **Arm 2's second draw is `rand()%4`, not `%6`.** The jump table at `0x5133e8` has six
  slots, and the decompiler prints cases 4 and 5 (ids `0x1f`, `0x20`) — but the code masks
  with `0x80000003` before dispatching, so **those two arms are unreachable**.
* **Arm 7 resets only the companion list before its third push**, leaving `[0x3c, 0x34]`
  in the leader list. ⚠ **Kind 7 never came up in 99 firings**, so that arm — and only
  that arm — is read statically and not confirmed live.

## The per-candidate branch

```
leaderIndex = -1 unless the descriptor's own zone == this zone      (0x5118e0)
              (then: the candidate with the largest falloff weight)

for each candidate i:
    if i != leaderIndex:
        if rand() % 2 != 0:  skip this candidate                    (0x511b4b)
        if rand() % 2 == 0:  -> CREATURE                            (0x511b95)
    if the prop-id list is empty: -> CREATURE                       (0x511ba9)
    -> STRUCTURE
```

Every arm pushes at least one prop id, so **the leader always takes the structure
branch** — which is what lets the gate account for the two coins it never spends.

### STRUCTURE

`0x511bbb` tests a flag that only arms 1–5 and the default set, and when it is clear
(**arms 6–10**) it jumps straight past the prop placement into the ring. So a kind-9 camp
places *no props at all*, only creatures — which is why the first sweep showed structure
branches with zero `Prop_settleOnTerrain` calls.

When the flag is set it places props using **`FUN_004e0740`'s two shapes verbatim**: a
type-`0x41` `(2.4, 2.4, 0.5)` anchor swept over a 3×3 block grid (X outer), stopping at
the first that passes, then four candidates at ±3.5 blocks drawing from the same four-id
table (`0x10` / `0x0c` / `0x45` / `0x42`). Two differences from `FUN_004e0740`:

* the four-candidate scatter runs **whether or not the anchor found a spot**;
* it offsets from **where the anchor was placed**, not from the original anchor (falling
  back to the anchor when the sweep placed nothing).

Then, always, a **camp ring**:

```
base  = rand() * 2π / 32767                             (0x512707)
n     = rand() % 3 + 1                                  (0x51272d)
for i in 0..n-1:  angle = base + 2πi/n; one species draw; one Spawn -> site+0x18
```

### CREATURE

Picks a species group with `rand()`, then a facing `rand() % 360`, a species from the
group's leader list, and up to three walk-path waypoints chosen from the candidate's
neighbours (those between 5 and 128 blocks away). The `Spawn` goes to `site+0x18` with
`+0x24 = 1`, `+0x30 = descriptor[+0x24]`, `+0x54 = descriptor[+0x28]`. If the group's
companion list is non-empty it then adds `rand() % 3 + 1` companions at the same spot.

## What the gate proves

Over `raw/zone_camp_capture*.json` — 512 zones swept, 99 fired, camp kinds
`{0,1,2,3,4,5,6,8,9,10}` seen:

| claim | checks |
|---|---|
| the camp kind and its species tables, derived from the descriptor | 693 |
| the per-candidate branch, replayed from the coin draws | 1,485 |
| the camp's props are `FUN_004e0740`'s two shapes, verbatim | 564 |

The second row is a full accounting of the draw stream: one coin per candidate, two per
placed one, minus the leader's shortcut; one ring-angle and ring-count draw per structure
branch with `rand()%3+1` creatures each; one group / facing / species draw per creature
branch, waypoints three at a time or not at all, and `rand()%3+1` companions. Every
`Spawn` in `site+0x18` is accounted to one of the three push sites (`0x512b12`,
`0x512f72`, `0x513218`).

## Open

1. ~~**The candidate grid itself** (`0x51e839`-`0x51eab5`)~~ — **DONE,
   `Docs/RE_zone_grid.md`.** The 14×14 lattice is filtered by a literal `(i + 3j) % 5`
   (`M = [ebp-0x1368]`, read live in every zone), which keeps a fixed **39 of the 196**
   cells and so draws exactly 39 `rand()`s per firing zone; the survivors are those with
   `rand()/32767 <= max(0, 1-w)² · 0.75`, where `w` is `FUN_0052c820` — reproduced
   **bit-exactly, ab initio** by `cw_feature.falloff_weight` at all 1,989 rolled cells.
   Positions carry a `+0.5` block bias (`[0x5737c0] = -32768.0`, *subtracted*).
   `tools/frida_zone_grid.py`, `tools/gate_zone_grid.py`, 8,308 checks over 51 zones.
2. **The leader index** — only one zone in the sample was its feature's own zone, so the
   "largest falloff weight" rule is read statically and barely exercised.
3. **Kind 7**, which never came up.
4. **The species ids themselves.** They are `Spawn+0x2c` values; nothing here maps them to
   creature names.
5. ~~**The descriptor**~~ — **DONE, `RE_camp_descriptor.md`.** All seven fields derive from
   the seed, 198/198 firings; `cwgen` carries them as `FeatureCell::mission/level/msub`
   (gate `rederive_campdesc` 693/693).
6. **The port is blocked on reachability, not on knowledge.** `cwgen` can now build the
   candidate lattice ab initio (`CwZoneCamp`), but a camp only fires where the descriptor
   is a present non-{0,1,5,0xa,0xe} cell, and the zone-stream replay drifts in exactly
   those zones — 12 of 14 measured. Fixing that drift is what unblocks the populator; the
   populator's own remaining gaps are `Prop_settleOnTerrain` and the waypoint neighbour
   predicate (its draw COUNT is settled: 3 if the neighbour list is non-empty, else 0).
