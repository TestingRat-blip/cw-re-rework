# `FUN_00524540` — creature spawn + behaviour-tree builder (type-1 decode)

Phase 1 of the worldgen plan. This is the **static** decode; the byte-exact rand gate needs a
live `Server.exe` capture (follow-up). Identity is settled: it builds a creature `Spawn`
entity with an AI behaviour tree — **not** the "castle-arc wall stamps" the old label claimed
(0 voxel writes, 321 `Spawn` refs, 33 `rand()` draws).

## Signature (recovered)

```c
void __thiscall creature_spawn_builder(
    World *this,
    void  *src,        // param_1  source object; reads floats at +0x44/+0x48 (a size/extent pair)
    uint  *pos,        // param_2  spawn position [x,y,z]
    uint   orient,     // param_3  orientation/parity -> facing = (2 - orient) * 90 degrees
    undefined4 p4,     // param_4  stored, role TBD
    int    type,       // param_5  creature TYPE, 0..0xf (the 16-way dispatch)
    int    p6,         // param_6  gate flag (early `if (p6 == 0 || ...)`)
    char   p7,         // param_7  boolean mode flag
    int   *outList,    // param_8  output container the Spawn is appended to
    int    p9);        // param_9  stashed to local_6d0, role TBD
```

## What type 1 (the base path) produces

`param_5` special-cases only types **7, 10, 0xd, 0xe, 0xf** (they tweak the `+0x2c` model
byte / a flag). **Type 1 takes the default path**, so it's the right first target; the special
types are deltas on top of this.

### The `Spawn` record it writes (extends the `RecoverStructs` `Spawn` layout)

| field | meaning (from usage) |
|---|---|
| `+0x00` vftable | `Spawn_vftable` |
| `+0x0c` | position block (fed to the WalkPath behaviour) |
| `+0x24` | `= 3` on the base path (a kind/category constant) |
| `+0x28` | type byte — `0x8d` base, `0x8e` for type 10 (`(type!=10)+0x8d`) |
| `+0x2c` (byte) | **model/appearance id, set by the `param_5` switch** — `0x83` base, `0x87` type 0xf, … |
| `+0x30`,`+0x34` | copied from `src` / rolled |
| `+0x44` | vec via `FUN_004c82a0` (copy of `src+0x12·4`) |
| `+0x50` (float) | **facing** = `(float)((2 - orient) * 0x5a)` (0x5a = 90°) |
| `+0x54` (0x118 B) | **equipment** — `ItemData_copy` (`FUN_00413710`) of an `ItemData` struct |

### The behaviour tree (shared tail, all types)

Built as a `SequentialBehavior` chain, children appended via `FUN_004d6620`
(= `SequentialBehavior::addChild`):

```
Sequential {
    Combat(20.0f)          // operator_new(0x14); ctor arg 0x41a00000 = 20.0f
    LookAtPlayer           // operator_new(0x04)
    WalkPath(2.0f, pos)    // operator_new(0x1c); ctor arg 0x40000000 = 2.0f;
                           //   FUN_004e1420 wires in the spawn's +0x0c position
}
```

This is the standard hostile-mob AI. The four `Behavior` classes are already RTTI-recovered
(`server/ai/`), so their `this`-layouts are known.

### RNG draws (the gate targets — exact order matters)

33 `rand()` calls; the base-path sequence (equipment/stat rolls) begins:

| site | expression | likely meaning |
|---|---|---|
| L1012 | `rand() % 5 == 0` | 1-in-5 gate (rare drop / variant?) |
| L1018 | `rand() % 3 + 0x29` (41–43) | material/tier roll |
| L1179 | `rand() % 3 + 0x20` (32–34) | roll |
| L1515 | `rand() % 3 + 0x2f` (47–49) | roll |
| L1556 | `rand() % 9 + 0x38` (56–64) | roll |
| L1257/1286/1320/1569 | bare `rand()` | position jitter / seeds |

These feed the equipment (`+0x54` ItemData) and stat bytes. The gate reproduces this exact
`rand()` sequence ab-initio from the zone seed, as the tree/dungeon passes already do.

## Identified callees (were `FUN_`/`lib_fn_`)

| addr | recovered role |
|---|---|
| `FUN_004d6620` | `SequentialBehavior::addChild` (append behaviour to chain) |
| `FUN_004e1420` | `WalkPathBehavior::setPath` (wires the spawn position) |
| `FUN_004c82a0` | vec3 field copy (`+0x44`) |
| `FUN_00413710` | `ItemData_copy` (0x118) — already known |

## Status & next steps

- ✅ Identity, signature, `Spawn` record, behaviour tree, and the base (type-1) path decoded
  statically.
- ▶ **Live gate**: hook the `Spawn` emit on a dungeon build, match type-1 records
  (position + type bytes + behaviour ids + the 33-draw `rand()` sequence) ab-initio.
- ▶ Then the type deltas (7/10/0xd/0xe/0xf), then port to the `cw_rederive` toolkit.
- Relabel in the ledger: `creature_spawn_builder`, kind **game** (was `lib_fn_524540`).
