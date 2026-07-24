#!/usr/bin/env python3
"""Capture the assembler's FOURTH container (`site+0x48`) and the wall stub's terrain probe.

Two open items of the dungeon entity layer, both reachable in one assembler run.

**`site+0x48`** is a container nothing had looked at -- distinct from the `site+4` decor list,
the `site+0xc` prop vector and the `site+0x30` ground-item vector. Only two call sites in the
whole assembler push into it (`FUN_005284a0`):

    005048c7   from the kind-4 ENTRANCE cell     record type 5
    00507aa0   from the cell.flags&4 BOSS block  record type 6

Both build the record with `FUN_004f7490`, write the type at `+0x00`, and set a position at
`+0x128` via `FUN_00402a40`.

**The stub probe** is the one gate `RE_dungeon_lights.md` could not model: each of the four wall
directions calls `FUN_00405fd0` + `FUN_004061f0` at a point three blocks past the wall face and
rejects the stub when it comes back solid. The points are off the 10-unit lattice, so the grid
rig's lattice dump does not cover them:

    dir 0 (J-1)  (+5, -3, +2)        dir 3 (I-1)  (-3, +5, +2)
    dir 2 (J+1)  (+5, +13, +2)       dir 1 (I+1)  (+13, +5, +2)

relative to `(baseX + I*10, baseY + J*10, baseZ + K*10)`. This rig records every probe (inputs,
block bytes, verdict), re-reads each one at `asmLeave` to test whether the answer was already
final when the probe ran, and dumps the material at all four probe points of every cell so the
gate can DERIVE the verdict instead of replaying it.

    python tools/frida_dungeon_marker.py [zx zz]   -> raw/dungeon_marker_capture[_zx_zz].json
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
NAME = "dungeon_marker_capture.json"
if len(sys.argv) >= 3:
    ZONE = (int(sys.argv[1]), int(sys.argv[2]))
    NAME = "dungeon_marker_capture_%d_%d.json" % ZONE
OUT = os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "raw", NAME)

JS = r"""
const b = Process.mainModule.base;
let world = null, genTid = -1, cap = false, randN = 0;
const markers = [], probes = [], grids = [];
const ASM = [0x100300, 0x10931c];

// the four stub blocks: <FUN_00405fd0 return site> -> <dir, dx, dy, dz>
const PROBE_IN = {};
PROBE_IN[0x104a53] = [0,   5,  -3, 2];
PROBE_IN[0x104c10] = [2,   5,  13, 2];
PROBE_IN[0x104da9] = [3,  -3,   5, 2];
PROBE_IN[0x104f5a] = [1,  13,   5, 2];
// and the matching FUN_004061f0 return sites (eax = the solid verdict)
const PROBE_OUT = {};
PROBE_OUT[0x104a5a] = 0; PROBE_OUT[0x104c17] = 2;
PROBE_OUT[0x104db0] = 3; PROBE_OUT[0x104f61] = 1;

Interceptor.attach(b.add(0xd83a0), { onEnter(){ if (!world) world = this.context.ecx; } });
Interceptor.replace(b.add(0x149550), new NativeCallback(function(){}, 'void', ['pointer'], 'fastcall'));
Interceptor.replace(b.add(0xd78e0), new NativeCallback(function(){}, 'void', ['pointer','int','int'], 'thiscall'));

const m = Process.findModuleByName('MSVCR110.dll') || Process.findModuleByName('msvcr110.dll');
Interceptor.attach(m.getExportByName('rand'), { onLeave(rv){
  if (cap && this.threadId === genTid) randN++;
}});

const getBlock = new NativeFunction(b.add(0x5fd0), 'pointer',
                                    ['pointer','uint32','uint32','int32','pointer'], 'thiscall');

function i32(ebp, off){ return ebp.sub(off).readS32(); }

// ---- grid + origin, once, at the loop head ----
Interceptor.attach(b.add(0x104784), { onEnter(){
  if (!cap || this.threadId !== genTid) return;
  const ebp = this.context.ebp, g = ebp.sub(0x2bcc);
  const rec = { rot: g.add(4).readS32(), mirror: g.add(8).readU8(),
                dimX: g.add(0xc).readS32(), dimY: g.add(0x10).readS32(),
                dimZ: g.add(0x14).readS32(),
                baseX: i32(ebp,0x2b38), baseY: i32(ebp,0x2b34), baseZ: i32(ebp,0x2b54),
                style: i32(ebp,0x2b88), site: this.context.esi.toString() };
  try {
    const n = rec.dimX * rec.dimY * rec.dimZ * 2;
    rec.bytes = g.add(0x18).readPointer().readByteArray(n);
  } catch(e){ rec.err = ''+e; }
  grids.push(rec);
}});

// ---- FUN_005284a0 = push_back on site+0x48 ----
Interceptor.attach(b.add(0x1284a0), { onEnter(args){
  if (!cap || this.threadId !== genTid) return;
  let rva = 0; try { rva = this.returnAddress.sub(b).toUInt32(); } catch(e){ return; }
  if (rva < ASM[0] || rva >= ASM[1]) return;
  const ebp = this.context.ebp;
  const r = { ra: rva, randN: randN, vec: this.context.ecx.toString(),
              I: i32(ebp,0x2b50), J: i32(ebp,0x2b4c), K: i32(ebp,0x2b48),
              baseX: i32(ebp,0x2b38), baseY: i32(ebp,0x2b34), baseZ: i32(ebp,0x2b54) };
  try { r.b = Array.from(new Uint8Array(args[0].readByteArray(0x140))); } catch(e){}
  markers.push(r);
}});

// ---- the stub probe: FUN_00405fd0's block pointer, then FUN_004061f0's verdict ----
let pend = null;
for (const ra in PROBE_IN) {
  const spec = PROBE_IN[ra];
  Interceptor.attach(b.add(parseInt(ra)), { onEnter(){
    if (!cap || this.threadId !== genTid) return;
    const ebp = this.context.ebp, p = this.context.eax;
    const I = i32(ebp,0x2b50), J = i32(ebp,0x2b4c), K = i32(ebp,0x2b48);
    const bx = i32(ebp,0x2b38), by = i32(ebp,0x2b34), bz = i32(ebp,0x2b54);
    const r = { dir: spec[0], I: I, J: J, K: K,
                x: bx + I*10 + spec[1], y: by + J*10 + spec[2], z: bz + K*10 + spec[3],
                ptr: p.toString(), zone: this.context.esi.toString(), randN: randN };
    try { const w = p.readU32(); r.b = [w & 0xff, (w>>>8)&0xff, (w>>>16)&0xff, (w>>>24)&0xff]; }
    catch(e){ r.b = null; }
    pend = r;
  }});
}
for (const ra in PROBE_OUT) {
  Interceptor.attach(b.add(parseInt(ra)), { onEnter(){
    if (!cap || this.threadId !== genTid || !pend) return;
    pend.solid = this.context.eax.toInt32() & 0xff;
    probes.push(pend); pend = null;
  }});
}

Interceptor.attach(b.add(0x100300), {
  onEnter(){ if (this.threadId === genTid) send({ev:'asm', randN:randN}); },
  onLeave(){
    if (this.threadId !== genTid) return;
    // (1) re-read every probed point now the assembler has finished. Matching values mean the
    // answer was already final when the stub block ran -- i.e. no assembly-order state.
    for (const r of probes) {
      try {
        const p = getBlock(world, r.x>>>0, r.y>>>0, r.z, ptr(r.zone));
        const w = p.readU32();
        r.after = [w & 0xff, (w>>>8)&0xff, (w>>>16)&0xff, (w>>>24)&0xff];
      } catch(e){ r.after = null; }
    }
    // (2) the material byte at ALL FOUR probe points of every cell, off-lattice, so the gate
    // can derive the verdict for candidates the run rejected as well as those it took.
    const OFF = [[0, 5,-3,2], [2, 5,13,2], [3,-3,5,2], [1,13,5,2]];
    for (const g of grids) {
      const nx = (g.rot & 1) ? g.dimY : g.dimX, ny = (g.rot & 1) ? g.dimX : g.dimY;
      const nz = g.dimZ;
      const buf = new Uint8Array(nx * ny * nz * 4);
      const z0 = probes.length ? ptr(probes[0].zone) : ptr(g.site);
      for (let I = 0; I < nx; I++)
        for (let J = 0; J < ny; J++)
          for (let K = 0; K < nz; K++)
            for (let d = 0; d < 4; d++) {
              let v = 0;
              try { v = getBlock(world, (g.baseX + I*10 + OFF[d][1])>>>0,
                                 (g.baseY + J*10 + OFF[d][2])>>>0,
                                 g.baseZ + K*10 + OFF[d][3], z0).add(3).readU8(); } catch(e){}
              buf[((I*ny + J)*nz + K)*4 + d] = v;
            }
      g.stubmat = { nx: nx, ny: ny, nz: nz, dirs: [0,2,3,1], bytes: buf.buffer };
    }
    send({ev:'asmLeave', randN:randN});
  }
});

const zb = new NativeFunction(b.add(0x118630), 'void', ['pointer','uint32','uint32'], 'thiscall');
rpc.exports = {
  ready(){ return world ? world.toString() : null; },
  gen(zx, zz){
    if (!world) return 'no-world';
    cap = true; genTid = Process.getCurrentThreadId();
    try { zb(world, zx>>>0, zz>>>0);
          return {markers: markers.length, probes: probes.length, draws: randN}; }
    catch(e){ return 'EXC:'+e; }
  },
  markers(){ return markers; },
  probeCount(){ return probes.length; },
  probeSlice(a, n){ return probes.slice(a, a + n); },
  grids(){ return grids.map(g => { const o = Object.assign({}, g);
                                   o.bytes = null; o.stubmat = g.stubmat ?
                                   {nx:g.stubmat.nx, ny:g.stubmat.ny, nz:g.stubmat.nz,
                                    dirs:g.stubmat.dirs} : null; return o; }); },
  gridBytes(i){ return grids[i] && grids[i].bytes ? grids[i].bytes : null; },
  stubMat(i){ return grids[i] && grids[i].stubmat ? grids[i].stubmat.bytes : null; }
};
"""


def main():
    if not os.path.exists(EXE):
        print("MISSING", EXE)
        sys.exit(1)
    pid = frida.spawn(EXE, cwd=SB)
    try:
        s = frida.attach(pid)
        events = []
        sc = s.create_script(JS)
        sc.on("message", lambda mm, d: events.append(mm["payload"])
              if mm.get("type") == "send" else print("[msg]", mm, flush=True))
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
            sm = api.stub_mat(i)
            if g.get("stubmat") and sm:
                g["stubmat"]["bytes_b64"] = base64.b64encode(sm).decode()

        n = api.probe_count()
        probes = []
        for a in range(0, n, 400):
            probes.extend(api.probe_slice(a, 400))

        out = {"seed": 42069, "zone": list(ZONE), "grids": grids,
               "markers": api.markers(), "probes": probes, "events": events}
        with open(OUT, "w") as f:
            json.dump(out, f)
        print("markers %d  probes %d -> %s" % (len(out["markers"]), len(probes), OUT), flush=True)
    finally:
        try:
            frida.kill(pid)
        except Exception:
            pass
    os._exit(0)


if __name__ == "__main__":
    main()
