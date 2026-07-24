#!/usr/bin/env python3
"""Capture the dungeon BOSS spawn -- the `cell.flags & 4` block at 0x5078b3.

Sits at the end of the same per-cell body as the mob pass (Docs/RE_50702a_mob_populator.md).
Exactly one cell per dungeon carries flag bit 2, and that cell builds a single big
`cube::Spawn` (0x10f0 bytes, vs the mob pass's ordinary spawns) with its own equipment roll:

    if (cell.flags & 4) {                                        // 0x5078b3
        boss = new cube::Spawn();                                // 0x10f0, ctor 0x4e0f40
        boss->pos = ( fixed16(baseX + I*10 + 4.5f),              // 0x402a10: float*65536 -> ftol
                      fixed16(baseY + J*10 + 4.5f),
                      (int64)(baseZ + K*10 + 1) << 16 );         // 0x4cde40, exact
        boss->[0x28] = 1;  boss->[0x7a] |= 0x1000;
        boss->[0x30] = max(1, <level>);  boss->[0x54] = <byte>;
        boss->[0x2c] = species[ rand() % species.size() ];       // draw A
        rank = FUN_0052bf40(boss->[0x54], 1);                    // 4 rands, forced to +1 branch
        item = FUN_0052b470(level, rank);                        // the item generator
        additem(boss->equip, item);  boss->[0x7a] |= 0x200;
        boss->[0x109c] = new cube::CombatBehavior(20.0f);
        emit record kind 6 -> site+0x48;
        n = rand() % 4;                                          // draw B
        for (i = 0; i < n; i++) additem(boss->equip, <fixed item 0x0101>);
        boss->[0x08] = 150.0f;  boss->[0x10e8] = 1;
        site->spawns.push_back(boss);                            // 0x4f2be0
    }

-> raw/dungeon_boss_capture[_zx_zz].json
"""
import json
import os
import sys
import threading
import time

import frida

SB = r"C:\Users\asuna\AppData\Local\Temp\cw_re\sandbox_42069"
EXE = os.path.join(SB, "Server.exe")
ZONE = (32795, 32796)
NAME = "dungeon_boss_capture.json"
if len(sys.argv) >= 3:
    ZONE = (int(sys.argv[1]), int(sys.argv[2]))
    NAME = "dungeon_boss_capture_%d_%d.json" % ZONE
OUT = os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "raw", NAME)

JS = r"""
const b = Process.mainModule.base;
let world = null, genTid = -1, cap = false, bossWin = false;
let randN = 0;
const flagCells = [];      // every cell reaching the flag test (0x5078b3)
const bosses = [];         // one entry per flag-4 cell
const randLog = [];        // rand() values consumed inside the boss block
let cur = null;

Interceptor.attach(b.add(0xd83a0), { onEnter(){ if (!world) world = this.context.ecx; } });
Interceptor.replace(b.add(0x149550), new NativeCallback(function(){}, 'void', ['pointer'], 'fastcall'));
Interceptor.replace(b.add(0xd78e0), new NativeCallback(function(){}, 'void', ['pointer','int','int'], 'thiscall'));

const m = Process.findModuleByName('MSVCR110.dll') || Process.findModuleByName('msvcr110.dll');
Interceptor.attach(m.getExportByName('rand'), { onLeave(rv){
  if (!cap || this.threadId !== genTid) return;
  randN++;
  if (bossWin) randLog.push(rv.toInt32());
}});

function i32(ebp, off){ return ebp.sub(off).readS32(); }

// ---- 0x5078b3 `test byte [eax+1], 4` -- eax = the cell pointer ----
Interceptor.attach(b.add(0x1078b3), { onEnter(){
  if (!cap || this.threadId !== genTid) return;
  const ebp = this.context.ebp, cp = this.context.eax;
  flagCells.push({ I: i32(ebp,0x2b50), J: i32(ebp,0x2b4c), K: i32(ebp,0x2b48),
                   c0: cp.readU8(), c1: cp.add(1).readU8(), randN: randN });
}});

// ---- 0x5078bd -- the flag-4 branch taken; snapshot every input ----
Interceptor.attach(b.add(0x1078bd), { onEnter(){
  if (!cap || this.threadId !== genTid) return;
  const ebp = this.context.ebp;
  const rec = { I: i32(ebp,0x2b50), J: i32(ebp,0x2b4c), K: i32(ebp,0x2b48),
                baseX: i32(ebp,0x2b38), baseY: i32(ebp,0x2b34), baseZ: i32(ebp,0x2b54),
                level: i32(ebp,0x2bac), p2bd4: i32(ebp,0x2bd4),
                style: i32(ebp,0x2b88), rand_start: randN, species: [] };
  try {                                     // std::vector<int> at [ebp-0x2be8]
    const v = ebp.sub(0x2be8);
    const beg = v.readPointer(), end = v.add(4).readPointer();
    const n = end.sub(beg).toInt32() >> 2;
    for (let i = 0; i < n && i < 4096; i++) rec.species.push(beg.add(i*4).readS32());
  } catch(e){ rec.speciesErr = ''+e; }
  cur = rec; bossWin = true; randLog.length = 0;
}});

// NOTE on instrumentation: hooks inside this block have to sit on `ebp`-relative snapshot
// points only. Patching mid-instruction at the two `call ebx` sites (0x5079c2 / 0x507aa7) to
// read the draw values faults the generator, and Frida cannot place a trampoline on
// FUN_00427000 at all ("unable to intercept function"). Hooking FUN_0052b470 / FUN_005284a0
// kills the process outright. So the rand stream is recorded by value in `randLog` and
// attributed from the code structure instead.

// ---- FUN_004f2be0 = site->spawns.push_back(boss), the block's last statement. Hooked on
// ---- its own entry rather than at the call site (0x507b30), which faults.
Interceptor.attach(b.add(0xf2be0), { onEnter(args){
  if (!cap || this.threadId !== genTid || !cur) return;
  const p = args[0].readPointer();          // param_1 -> [ebp-0x2b5c] = the boss pointer
  cur.boss = p.toString();
  cur.rand_end = randN;
  cur.rand_draws = randN - cur.rand_start;
  cur.rand_vals = randLog.slice();
  try {
    cur.head   = Array.from(new Uint8Array(p.readByteArray(0x90)));
    cur.equip  = Array.from(new Uint8Array(p.add(0xf60).readByteArray(0x40)));
    cur.behav  = p.add(0x109c).readU32();
    const eb = p.add(0xf6c).readPointer(), ee = p.add(0xf70).readPointer();
    cur.equipCount = ee.sub(eb).toInt32() / 12;
    cur.b10e8  = p.add(0x10e8).readU8();
  } catch(e){ cur.err = ''+e; }
  bosses.push(cur); cur = null; bossWin = false;
}});

const zb = new NativeFunction(b.add(0x118630), 'void', ['pointer','uint32','uint32'], 'thiscall');
rpc.exports = {
  ready(){ return world ? world.toString() : null; },
  gen(zx, zz){
    if (!world) return 'no-world';
    cap = true; genTid = Process.getCurrentThreadId();
    try { zb(world, zx>>>0, zz>>>0);
          return {flagCells: flagCells.length, bosses: bosses.length, draws: randN}; }
    catch(e){ return 'EXC:'+e; }
  },
  flagCells(){ return flagCells; },
  bosses(){ return bosses; }
};
"""


def main():
    if not os.path.exists(EXE):
        print("MISSING", EXE)
        sys.exit(1)
    pid = frida.spawn(EXE, cwd=SB)
    try:
        s = frida.attach(pid)
        sc = s.create_script(JS)
        sc.on("message", lambda mm, d: print("[msg]", mm.get("description", mm), flush=True)
              if mm.get("type") != "send" else None)
        sc.load()
        frida.resume(pid)
        api = sc.exports_sync
        t0 = time.time()
        while api.ready() is None and time.time() - t0 < 20:
            time.sleep(0.3)
        print("world:", api.ready(), "  zone:", ZONE, flush=True)
        res = [None]

        def driver():
            res[0] = api.gen(ZONE[0], ZONE[1])
        th = threading.Thread(target=driver, daemon=True)
        th.start()
        th.join(timeout=180)
        time.sleep(1.0)
        print("gen ->", res[0], flush=True)
        flag_cells = api.flag_cells()
        bosses = api.bosses()
    finally:
        try:
            frida.kill(pid)
        except Exception:
            pass

    flagged = [c for c in flag_cells if c["c1"] & 4]
    print(f"cells reaching the flag test: {len(flag_cells)}   with flag&4: {len(flagged)}   "
          f"bosses built: {len(bosses)}", flush=True)
    for c in flagged:
        print("   flag cell", {k: c[k] for k in ("I", "J", "K", "c0", "c1")}, flush=True)
    for bo in bosses:
        print("   boss @ I=%d J=%d K=%d  level=%d p2bd4=%d  species=%d entries  "
              "rand_draws=%d  drawA=%s drawB=%s"
              % (bo["I"], bo["J"], bo["K"], bo["level"], bo["p2bd4"], len(bo["species"]),
                 bo["rand_draws"], bo.get("drawA"), bo.get("drawB")), flush=True)

    with open(OUT, "w") as f:
        json.dump({"seed": 42069, "zone": ZONE, "flag_cells": flag_cells, "bosses": bosses}, f)
    print(f"wrote {os.path.normpath(OUT)}", flush=True)
    sys.stdout.flush()
    os._exit(0)


main()
