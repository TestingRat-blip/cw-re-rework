# `FUN_0050702a` — dungeon mob populator

The caller that fills a dungeon with creatures, invoking `creature_spawn_builder`
(`524540`) once per placed mob. Identified live: all 137 creature spawns of the
(32795,32796) dungeon build came from this function's 4 call sites.

## Identification

- 8,946 bytes, 61 callees, **4 call sites to `524540`** (RVAs 0x107552 / 0x1075fd / 0x1076a8
  / 0x107753 → 38 / 35 / 33 / 31 spawns = 137).
- Decompiles with `unaff_EBP`/`unaff_EBX` and 0 incoming references → it is a **case-body of
  the big dungeon dispatcher** (jumped-to via an unresolved jumptable, not `call`-ed). That's
  why Phase 0 mis-tagged it `role:artifact`. Relabelled `dungeon_mob_populator` / game.
- 2,957 lines, **31 loops**, 203 branches, 26 `case`, **5 direct `rand()` calls**.

## Placement pattern (from 137 live spawns)

The 4 call sites each scatter ~34 creatures into the **same dungeon volume**:

```
x [8395572 .. 8395742]   y [8395828 .. 8395988]   z [151 .. 191]     (~170 x 160 x 40)
```

Positions lie on a **10-unit grid** (every x/y/z is a multiple of 10 off the origin):
consecutive spawns step y by 10 at fixed x,z — i.e. the function **scans the dungeon on a
10-unit lattice** and places a creature at qualifying cells. 89 of the 137 positions are
unique (the 4 passes overlap).

So the model is: *grid-scan the dungeon cells → at cells passing some floor/space test →
`524540(type=0, cellPos, orient)`*. The geometry it scans is the already-proven dungeon
layout; this adds the creature layer on top.

## Open questions (next steps)

1. **The 4 call sites** — 4 creature categories? 4 sub-regions? passes? (each ~34 mobs, same
   volume, overlapping positions).
2. **Cell qualification** — what floor/space test gates a spawn at a lattice cell (reads the
   dungeon voxel grid via `World_getBlockAt` etc.).
3. **The 5 `rand()` draws** — density/variant decisions (one is `rand() % 0x28` = 1-in-40).
4. **Parent dispatcher** — RE `0050702a` in the context of its owning switch (`4e310a` /
   `4eaa7a` / `4ee3aa`) since it shares EBP/EBX with it.

## Verification approach

The 137 captured (position, orient, call-site) tuples from
`raw/dungeon_spawn_capture.json` are the gate: reproduce the lattice scan + cell test + the
5 rand decisions and match the 137 placements ab-initio from the dungeon layout + zone seed.
Rig: `../tools/frida_dungeon_spawn.py` (now records the caller RVA per spawn).
