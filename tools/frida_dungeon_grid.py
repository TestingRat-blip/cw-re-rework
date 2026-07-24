#!/usr/bin/env python3
"""Dump the dungeon CELL GRID + the per-cell mob-pass trace, so the 137 spawns of
FUN_0050702a can be reproduced ab-initio.

Static read (Docs/RE_50702a_mob_populator.md) says the mob pass is a triple loop over the
dungeon cell grid held at [ebp-0x2bcc] of the big assembler (0x500300..0x50931c, of which
0x50702a is a Ghidra-split case-body):

    for I in range(gridDimX):
      for J in range(gridDimY):
        for K in range(gridDimZ):
          cell = grid(I,J,K)                       # FUN_004f84a0, 2 bytes/cell
          if cell[0] not in (3,4): continue        # only room(3) / special(4) cells
          ... box fill / decoration ...
    0x507401: if cell[0] == 4:                      goto flagpass
    0x50742f: if grid(I,J,K+1)[0] == 3:             goto flagpass
    0x50743f: if src == 0:                          goto chandelier
    0x5074a1: if not solid(world, x, y, baseZ+(K+1)*10, site): goto chandelier
              if grid(I-1,J,K)[0] != 3: spawn(orient=0)   # 0x507552
              if grid(I+1,J,K)[0] != 3: spawn(orient=2)   # 0x5075fd
              if grid(I,J-1,K)[0] != 3: spawn(orient=3)   # 0x5076a8
              if grid(I,J+1,K)[0] != 3: spawn(orient=1)   # 0x507753
              # spawn pos = (baseX + I*10, baseY + J*10, baseZ + K*10)

This rig captures the ground truth for that: the grid bytes, the bases, and every cell that
reaches the mob pass (with its gate inputs). Same dungeon recipe as frida_dungeon_spawn.py.

-> raw/dungeon_grid_capture.json
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
NAME = "dungeon_grid_capture.json"
if len(sys.argv) >= 3:
    ZONE = (int(sys.argv[1]), int(sys.argv[2]))
    NAME = "dungeon_grid_capture_%d_%d.json" % ZONE
OUT = os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "raw", NAME)

JS = r"""
const b = Process.mainModule.base;
let world = null, genTid = -1, cap = false, inAsm = false;
let randN = 0;
const spawns = [];
const cells  = [];          // every cell reaching the mob pass (0x507401)
const solids = [];          // result of the block-solid gate (0x507499), in call order
const probes = [];          // the terrain probe's raw block read (0x507492), in call order
const grids  = [];          // grid dumps (expect 1 per dungeon)
let cur = null;

Interceptor.attach(b.add(0xd83a0), { onEnter(){ if (!world) world = this.context.ecx; } });
Interceptor.replace(b.add(0x149550), new NativeCallback(function(){}, 'void', ['pointer'], 'fastcall'));
Interceptor.replace(b.add(0xd78e0), new NativeCallback(function(){}, 'void', ['pointer','int','int'], 'thiscall'));

const m = Process.findModuleByName('MSVCR110.dll') || Process.findModuleByName('msvcr110.dll');
Interceptor.attach(m.getExportByName('rand'), { onLeave(rv){
  if (cap && this.threadId === genTid) randN++;
}});

const getBlock = new NativeFunction(b.add(0x5fd0), 'pointer',
                                    ['pointer','uint32','uint32','int32','pointer'], 'thiscall');

Interceptor.attach(b.add(0x100300), {
  onEnter(){ if (this.threadId === genTid){ inAsm = true; send({ev:'asm', randN:randN}); } },
  onLeave(){
    if (this.threadId !== genTid) return;
    inAsm = false;
    // Re-read every probed coordinate now that the assembler has finished. If the values
    // match what the probe saw mid-scan, the dungeon geometry was already final when the
    // mob pass ran -- which is what makes the probe derivable from the (already bit-exact)
    // stamped world rather than from an intermediate assembly state.
    for (const r of probes) {
      try {
        const p = getBlock(world, r.x>>>0, r.y>>>0, r.z, ptr(r.zone));
        const w = p.readU32();
        r.after = [w & 0xff, (w>>>8)&0xff, (w>>>16)&0xff, (w>>>24)&0xff];
      } catch(e){ r.after = null; }
    }
    // Sample the FINISHED world on the dungeon's own 10-unit lattice: every (I,J,L) the mob
    // pass could ever address, whether or not that cell qualifies. This is what lets the gate
    // *derive* the terrain probe -- it reads the voxel and applies FUN_00405fd0 +
    // FUN_004061f0 itself -- instead of replaying the probe's boolean answer.
    for (const g of grids) {
      const nx = (g.rot & 1) ? g.dimY : g.dimX, ny = (g.rot & 1) ? g.dimX : g.dimY;
      const nz = g.dimZ + 1;                       // the pass reads level K+1, so K+1 == dimZ
      const buf = new Uint8Array(nx * ny * nz);
      const z0 = g.zone ? ptr(g.zone) : (probes.length ? ptr(probes[0].zone) : NULL);
      for (let I = 0; I < nx; I++)
        for (let J = 0; J < ny; J++)
          for (let L = 0; L < nz; L++) {
            let v = 0;
            try { v = getBlock(world, (g.baseX + I*10)>>>0, (g.baseY + J*10)>>>0,
                               g.baseZ + L*10, z0).add(3).readU8(); } catch(e){}
            buf[(I*ny + J)*nz + L] = v;
          }
      g.lattice = { nx: nx, ny: ny, nz: nz, bytes: buf.buffer };
    }
    send({ev:'asmLeave', randN:randN});
  }
});

function i32(ebp, off){ return ebp.sub(off).readS32(); }

// ---- grid dump: 0x504784 `mov dword [ebp-0x2b50],0` -- once, just before the I loop ----
Interceptor.attach(b.add(0x104784), { onEnter(){
  if (!cap || this.threadId !== genTid) return;
  const ebp = this.context.ebp;
  const g   = ebp.sub(0x2bcc);                 // the grid object
  const rec = { at: 'loopInit',
                rot:    g.add(4).readS32(),
                mirror: g.add(8).readU8(),
                dimX:   g.add(0xc).readS32(),
                dimY:   g.add(0x10).readS32(),
                dimZ:   g.add(0x14).readS32(),
                data:   g.add(0x18).readPointer().toString(),
                baseX:  i32(ebp, 0x2b38),
                baseY:  i32(ebp, 0x2b34),
                baseZ:  i32(ebp, 0x2b54),
                style:  i32(ebp, 0x2b88),
                src:    i32(ebp, 0x2b9c),
                site:   this.context.esi.toString(),
                zone:   this.context.esi.toString(),
                randN:  randN };
  try {
    const n = rec.dimX * rec.dimY * rec.dimZ * 2;
    if (n > 0 && n < (1<<22))
      rec.bytes = g.add(0x18).readPointer().readByteArray(n);
  } catch(e){ rec.err = ''+e; }
  grids.push(rec);
}});

// ---- per-cell mob-pass entry: 0x507401 `cmp byte [eax],4`, eax = cell ptr ----
Interceptor.attach(b.add(0x107401), { onEnter(){
  if (!cap || this.threadId !== genTid) return;
  const ebp = this.context.ebp, cp = this.context.eax;
  cells.push({ I: i32(ebp,0x2b50), J: i32(ebp,0x2b4c), K: i32(ebp,0x2b48),
               c0: cp.readU8(), c1: cp.add(1).readU8(),
               src: i32(ebp,0x2b9c), baseZ: i32(ebp,0x2b54), randN: randN });
}});

// ---- the terrain probe, 0x107492: eax = FUN_00405fd0's returned block pointer ----
// The three "no block" returns are fixed sentinels: DAT_00583d0c / _10 / _14 are zero in
// the image and nothing in .text ever writes them, so all three read back material 0.
const SENT = { }; SENT[b.add(0x183d0c).toString()] = 'no_block_z_le_0';
SENT[b.add(0x183d10).toString()] = 'above_column'; SENT[b.add(0x183d14).toString()] = 'below_or_no_column';
const getColumn = new NativeFunction(b.add(0x6100), 'pointer',
                                     ['pointer','uint32','uint32','pointer'], 'thiscall');
Interceptor.attach(b.add(0x107492), { onEnter(){
  if (!cap || this.threadId !== genTid) return;
  const ebp = this.context.ebp, p = this.context.eax;
  const x = i32(ebp,0x2b30), y = i32(ebp,0x2b20);
  const z = i32(ebp,0x2b54) + i32(ebp,0x2b28) * 10;
  const r = { I: i32(ebp,0x2b50), J: i32(ebp,0x2b4c), K: i32(ebp,0x2b48),
              x: x, y: y, z: z, ptr: p.toString(), zone: this.context.esi.toString(),
              sentinel: SENT[p.toString()] || null };
  try { const w = p.readU32(); r.b = [w & 0xff, (w>>>8)&0xff, (w>>>16)&0xff, (w>>>24)&0xff]; }
  catch(e){ r.b = null; }
  try {
    const col = getColumn(this.context.edi, x>>>0, y>>>0, this.context.esi);
    if (!col.isNull()) { r.colBase = col.add(0x10).readS32(); r.colCount = col.add(0x1c).readS32(); }
    else r.colBase = null;
  } catch(e){ r.colErr = ''+e; }
  probes.push(r);
}});

// ---- the block-solid gate result: 0x507499, eax = FUN_004061f0 return ----
Interceptor.attach(b.add(0x107499), { onEnter(){
  if (!cap || this.threadId !== genTid) return;
  solids.push(this.context.eax.toInt32() & 0xff);
}});

// ---- FUN_00524540 creature spawn builder ----
Interceptor.attach(b.add(0x124540), {
  onEnter(args){
    if (!cap || this.threadId !== genTid) return;
    let pos = [0,0,0];
    try { const p = args[1]; pos = [p.readU32(), p.add(4).readU32(), p.add(8).readU32()]; } catch(e){}
    let ra = 0; try { ra = this.returnAddress.sub(b).toUInt32(); } catch(e){}
    cur = { type: args[4].toInt32() & 0xffff, orient: args[2].toInt32() & 0xffff,
            pos: pos, inAsm: inAsm, ra: ra, rand_start: randN };
  },
  onLeave(){
    if (!cap || cur === null) return;
    cur.rand_draws = randN - cur.rand_start;
    spawns.push(cur); cur = null;
  }
});

const zb = new NativeFunction(b.add(0x118630), 'void', ['pointer','uint32','uint32'], 'thiscall');
rpc.exports = {
  ready(){ return world ? world.toString() : null; },
  gen(zx, zz){
    if (!world) return 'no-world';
    cap = true; genTid = Process.getCurrentThreadId();
    try { zb(world, zx>>>0, zz>>>0); return {spawns: spawns.length, cells: cells.length,
                                             grids: grids.length, draws: randN}; }
    catch(e){ return 'EXC:'+e; }
  },
  spawns(){ return spawns; },
  cells(){ return cells; },
  solids(){ return solids; },
  probes(){ return probes; },
  grids(){
    // ArrayBuffer -> base64 for transport
    return grids.map(g => {
      const o = Object.assign({}, g);
      if (g.bytes){ o.bytes = null; }
      if (g.lattice){ o.lattice = { nx: g.lattice.nx, ny: g.lattice.ny, nz: g.lattice.nz }; }
      return o;
    });
  },
  gridBytes(i){ return grids[i] && grids[i].bytes ? grids[i].bytes : null; },
  latticeBytes(i){ return grids[i] && grids[i].lattice ? grids[i].lattice.bytes : null; }
};
"""


def main():
    if not os.path.exists(EXE):
        print("MISSING", EXE)
        sys.exit(1)
    events = []
    pid = frida.spawn(EXE, cwd=SB)
    try:
        s = frida.attach(pid)
        sc = s.create_script(JS)
        sc.on("message", lambda m, d: events.append(m["payload"]) if m.get("type") == "send"
              else print("[msg]", m.get("description", m), flush=True))
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
        spawns = api.spawns()
        cells = api.cells()
        solids = api.solids()
        probes = api.probes()
        grids = api.grids()
        for i, g in enumerate(grids):
            raw = api.grid_bytes(i)
            g["bytes_b64"] = base64.b64encode(bytes(raw)).decode() if raw else None
            g.pop("bytes", None)
            lat = api.lattice_bytes(i)
            if lat and g.get("lattice"):
                g["lattice"]["bytes_b64"] = base64.b64encode(bytes(lat)).decode()
    finally:
        try:
            frida.kill(pid)
        except Exception:
            pass

    print(f"\ngrids: {len(grids)}", flush=True)
    for g in grids:
        print("  ", {k: v for k, v in g.items() if k != "bytes_b64"}, flush=True)
    print(f"mob-pass cells: {len(cells)}   solid-gate results: {len(solids)}   "
          f"probes: {len(probes)}   spawns: {len(spawns)}", flush=True)

    with open(OUT, "w") as f:
        json.dump({"seed": 42069, "zone": ZONE, "grids": grids, "cells": cells,
                   "solids": solids, "probes": probes, "spawns": spawns,
                   "events": events}, f)
    print(f"wrote {os.path.normpath(OUT)}", flush=True)
    sys.stdout.flush()
    os._exit(0)


main()
