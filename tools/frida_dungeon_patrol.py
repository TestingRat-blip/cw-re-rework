#!/usr/bin/env python3
"""Capture the assembler's creature-species containers and every species it assigns.

Two containers, both built in the assembler PROLOGUE (0x500370-0x500727) by the same jump table
on `style - 1` at `0x5003d3`:

  `[ebp-0x2be8]`  the flat species vector  -- the BOSS pick, the guard fans and the centre arc
  `[ebp-0x2bf4]`  a vector of GROUPS       -- the patrol NPC and its companions

A group is 0x18 bytes: two `vector<int>` at +0x00 and +0x0c. The patrol takes
`group = groups[rand() % groups.size()]`, then `spawn[0x2c] = group.list0[rand() % list0.size()]`
(0x508c4a), and its companions take `group.list1[rand() % list1.size()]` (0x509292) -- but only
if `list1` is non-empty (`0x5091ee`), which also SKIPS the companion-count draw.

This rig dumps both containers at the end of the prologue and records every species actually
stored, plus the model byte of the mob pass's own spawns (to settle whether the dungeon mob has
a species at all or takes `FUN_00524540`'s constant).

    python tools/frida_dungeon_patrol.py [zx zz]  -> raw/dungeon_patrol_capture[_zx_zz].json
"""
import base64
import json
import os
import sys
import threading
import time

import frida

SB = r"C:\Users\asuna\AppData\Local\Temp\cw_re\sandbox_42069"
EXE = os.path.join(SB, "Server.exe")
ZONE = (32795, 32796)
NAME = "dungeon_patrol_capture.json"
if len(sys.argv) >= 3:
    ZONE = (int(sys.argv[1]), int(sys.argv[2]))
    NAME = "dungeon_patrol_capture_%d_%d.json" % ZONE
OUT = os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "raw", NAME)

JS = r"""
const b = Process.mainModule.base;
let world = null, genTid = -1, cap = false, randN = 0;
const out = { containers: [], species: [], mobs: [], grids: [] };
const ASM = [0x100300, 0x10931c];

Interceptor.attach(b.add(0xd83a0), { onEnter(){ if (!world) world = this.context.ecx; } });
Interceptor.replace(b.add(0x149550), new NativeCallback(function(){}, 'void', ['pointer'], 'fastcall'));
Interceptor.replace(b.add(0xd78e0), new NativeCallback(function(){}, 'void', ['pointer','int','int'], 'thiscall'));

const m = Process.findModuleByName('MSVCR110.dll') || Process.findModuleByName('msvcr110.dll');
Interceptor.attach(m.getExportByName('rand'), { onLeave(rv){
  if (cap && this.threadId === genTid) randN++;
}});

function i32(ebp, off){ return ebp.sub(off).readS32(); }

// read a std::vector<int> at `p` ({first, last, cap})
function ivec(p){
  const a = p.readPointer(), z = p.add(4).readPointer();
  const n = z.sub(a).toInt32() >> 2, r = [];
  for (let i = 0; i < n && i < 64; i++) r.push(a.add(i*4).readS32());
  return r;
}

// ---- the two containers, at the prologue join (0x50072c, after the temp group's dtor) ----
Interceptor.attach(b.add(0x10072c), { onEnter(){
  if (!cap || this.threadId !== genTid) return;
  const ebp = this.context.ebp;
  const rec = { style: i32(ebp, 0x2b88), randN: randN, groups: [] };
  try { rec.speciesVec = ivec(ebp.sub(0x2be8)); } catch(e){ rec.err = ''+e; }
  try {                                          // vector<Group>, stride 0x18
    const gv = ebp.sub(0x2bf4);
    const a = gv.readPointer(), z = gv.add(4).readPointer();
    const n = z.sub(a).toInt32() / 0x18;
    for (let i = 0; i < n && i < 16; i++) {
      const g = a.add(i * 0x18);
      rec.groups.push({ list0: ivec(g), list1: ivec(g.add(0xc)) });
    }
  } catch(e){ rec.gerr = ''+e; }
  out.containers.push(rec);
}});

// ---- grid + origin, once, at the cell-loop head ----
Interceptor.attach(b.add(0x104784), { onEnter(){
  if (!cap || this.threadId !== genTid) return;
  const ebp = this.context.ebp, g = ebp.sub(0x2bcc);
  const rec = { rot: g.add(4).readS32(), mirror: g.add(8).readU8(),
                dimX: g.add(0xc).readS32(), dimY: g.add(0x10).readS32(),
                dimZ: g.add(0x14).readS32(),
                baseX: i32(ebp,0x2b38), baseY: i32(ebp,0x2b34), baseZ: i32(ebp,0x2b54),
                style: i32(ebp,0x2b88), p1c: ebp.add(0x1c).readS32() };
  try { rec.bytes = g.add(0x18).readPointer()
                     .readByteArray(rec.dimX * rec.dimY * rec.dimZ * 2); } catch(e){}
  out.grids.push(rec);
}});

// ---- every species store: patrol (0x508c57) and companion (0x5092a1) ----
// attach one instruction past the store so eax still holds the value
const SP = {}; SP[0x108c5a] = 'patrol'; SP[0x1092a4] = 'companion';
for (const ra in SP) {
  const tag = SP[ra];
  Interceptor.attach(b.add(parseInt(ra)), { onEnter(){
    if (!cap || this.threadId !== genTid) return;
    out.species.push({ what: tag, sp: this.context.eax.toInt32(), randN: randN });
  }});
}

// ---- the mob pass's own spawns: FUN_00524540's returned Spawn, +0x28 / +0x2c ----
Interceptor.attach(b.add(0x124540), {
  onEnter(){ this.ok = cap && this.threadId === genTid; if (!this.ok) return;
             let rva = 0; try { rva = this.returnAddress.sub(b).toUInt32(); } catch(e){}
             this.ra = rva; this.ok = rva >= ASM[0] && rva < ASM[1]; },
  onLeave(rv){
    if (!this.ok || out.mobs.length > 4000) return;
    const r = { ra: this.ra, randN: randN };
    try { r.f28 = rv.add(0x28).readS32(); r.f2c = rv.add(0x2c).readS32(); } catch(e){}
    out.mobs.push(r);
  }
});

const zb = new NativeFunction(b.add(0x118630), 'void', ['pointer','uint32','uint32'], 'thiscall');
rpc.exports = {
  ready(){ return world ? world.toString() : null; },
  gen(zx, zz){
    if (!world) return 'no-world';
    cap = true; genTid = Process.getCurrentThreadId();
    try { zb(world, zx>>>0, zz>>>0);
          return {containers: out.containers.length, species: out.species.length,
                  mobs: out.mobs.length, draws: randN}; }
    catch(e){ return 'EXC:'+e; }
  },
  containers(){ return out.containers; },
  speciesCount(){ return out.species.length; },
  speciesSlice(a, n){ return out.species.slice(a, a + n); },
  mobsCount(){ return out.mobs.length; },
  mobsSlice(a, n){ return out.mobs.slice(a, a + n); },
  grids(){ return out.grids.map(g => { const o = Object.assign({}, g); o.bytes = null; return o; }); },
  gridBytes(i){ return out.grids[i] && out.grids[i].bytes ? out.grids[i].bytes : null; }
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
        sc.on("message", lambda mm, d: print("[msg]", mm, flush=True)
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
        th.join(240)
        print("gen ->", res[0], flush=True)

        grids = api.grids()
        for i, g in enumerate(grids):
            gb = api.grid_bytes(i)
            g["bytes_b64"] = base64.b64encode(gb).decode() if gb else None

        def pull(count, slicer):
            n, acc = count(), []
            for a in range(0, n, 500):
                acc.extend(slicer(a, 500))
            return acc

        data = {"seed": 42069, "zone": list(ZONE), "grids": grids,
                "containers": api.containers(),
                "species": pull(api.species_count, api.species_slice),
                "mobs": pull(api.mobs_count, api.mobs_slice)}
        with open(OUT, "w") as f:
            json.dump(data, f)
        print("containers %d  species %d  mobs %d -> %s"
              % (len(data["containers"]), len(data["species"]), len(data["mobs"]), OUT),
              flush=True)
    finally:
        try:
            frida.kill(pid)
        except Exception:
            pass
    os._exit(0)


if __name__ == "__main__":
    main()
