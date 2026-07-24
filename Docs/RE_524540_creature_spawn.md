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

## Live capture — findings & a correction (2026-07-24)

Ran a live rig (`../tools/frida_spawn_capture.py`) on the headless server (sandbox seed
444444): hook `524540` + `rand()`, force-build zones via the zone builder, record each call's
args + the exact `rand()` span it consumes. **6,305 spawn calls captured.** This corrected
the static reading:

- **`param_5` type 0 is the deterministic overworld spawn — it consumes ZERO `rand()`.** All
  6,305 captured calls were type 0 with `rand_draws == 0`; positions are real world coords,
  orientation cycles 0–3 (the `(2-orient)·90°` facing). So type 0 (not "type 1") is the base
  path, and it is **deterministic** — the caller supplies position/type, `524540` just builds
  the entity.
- **The 33 `rand()` draws live in the dungeon-mob path (types 1–15)** — the equipment/stat
  rolls. Type 0 doesn't reach them. My earlier "type-1 = base, 33 draws" conflated the two.

**Blocker for the RNG gate:** a bare `zone_builder(world, zx, zz)` force-call builds terrain
and fires type-0 overworld spawns, but does **not** trigger dungeon generation (dungeons=0
even on the known dungeon zones 32707/32724). Dungeons come from the higher-level
feature-generation path; the existing dungeon captures hooked a *natural* dungeon build
("frozen server", `f0_boxlist_probe.py`). So capturing types 1–15 needs that trigger, not
`zb()`.

## Dungeon capture — the conclusive finding (2026-07-24)

Adapted the proven dungeon rig (`../tools/frida_dungeon_spawn.py`: sandbox_42069, zone
(32795,32796), **stub the region-cache scheduler `0xd78e0` + `0x149550`** so `zb()` generates
the dungeon deterministically). The dungeon assembled (assembler window consumed ~1.8M rand
draws) and **137 creature spawns fired inside it**. Result:

- **All 137 dungeon spawns are type 0, with `rand_draws == 0`.** Combined with the 6,305
  overworld type-0 spawns (also 0 draws): **`524540` consumes ZERO `rand()` for type 0 — the
  only type that occurs in normal overworld *and* dungeon builds.** It is a **deterministic
  constructor** on the live path.
- The 33 `rand()` sites in the body are all in the **types 1–15** branches, which never fired.
  Those are rare/special creatures (bosses, quest NPCs) placed by *different* call sites with a
  non-zero `param_5`; they don't occur in ordinary zone/dungeon generation.

**So there is no "type-1 RNG gate" in normal generation.** `524540`'s live behaviour is
deterministic: given (`src`, `pos`, `orient`, `type=0`) it builds the Spawn record + the
`Sequential{Combat,LookAtPlayer,WalkPath}` tree with no randomness. Porting it needs no
rand-matching — only the field mapping, which the 137+6,305 captured input→output pairs pin
exactly.

## Where the generative RNG actually is: the caller

The randomness that *drives* spawning — how many creatures, at which positions — lives in the
**caller** that invokes `524540` (the dungeon populated 137 of them from one caller). `524540`
is just the constructor. The 7 callers are `FUN_004e310a / 4eaa7a / 4ee3aa` (the big
dispatchers) + `50702a / 5154aa / 515d6a / 51c90a`; the dungeon populator is among them. **That
caller is the real next target** for the "populated worldgen" gate — its rand stream decides
the spawn layout, and 524540 just materialises each entity.

## Status & next steps

- ✅ `524540` fully characterised: deterministic type-0 spawn constructor; field mapping pinned
  by 6,442 captured live spawns. Relabelled `creature_spawn_builder` / game.
- ✅ Live rigs built + validated (overworld `frida_spawn_capture.py`, dungeon
  `frida_dungeon_spawn.py`).
- ▶ **Pivot**: RE the *caller* (dungeon mob populator among the 7) — the count/position RNG is
  there. That is the actual generation logic; `524540` is now a solved downstream constructor.
- (Optional) the rare type-1–15 special-creature path, if a boss/quest spawn can be triggered.
