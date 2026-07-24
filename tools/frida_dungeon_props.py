#!/usr/bin/env python3
"""Capture every record the dungeon assembler pushes into its prop list (`site+0xc`).

`site+0xc` is a vector of **0x188-byte object records** -- the same container the box-fill
loop walks (`FUN_0041ba70` indexes it by 0x188, `FUN_0041cb40` counts it). Kind sits at +0x00.
The **light sources** are two of those kinds:

  kind 7  torch light  -- floor cells, `rand() % 0x28 == 0`, then 2 more draws
  kind 4  stub light   -- emitted deterministically, one per wall direction

Record layout used here (from the emitters + the ctor FUN_004c84b0):

  +0x00  kind                      +0x24  colour, 3 floats
  +0x08  position, 3 x int64 16.16 +0x30  = 1 (ctor)
  +0x20  direction / orientation   +0x34  flicker phase (kind 7 only)

`FUN_004d6670` is the push_back. Frida hooks it before its `push ebp`, so `ebp` still belongs
to the assembler and the loop's cell indices are readable at [ebp-0x2b50/0x2b4c/0x2b48] --
the same trick the item-generator rig uses on FUN_00528530.

-> raw/dungeon_props_capture[_zx_zz].json
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
NAME = "dungeon_props_capture.json"
if len(sys.argv) >= 3:
    ZONE = (int(sys.argv[1]), int(sys.argv[2]))
    NAME = "dungeon_props_capture_%d_%d.json" % ZONE
OUT = os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "raw", NAME)

JS = r"""
const b = Process.mainModule.base;
let world = null, genTid = -1, cap = false;
let randN = 0;
const props = [];
const grids = [];
const torchRands = [];      // the torch block's three draws, by exact return address
let scatterRands = [];      // FUN_0052a830's draws since the last prop push
let decorRands = [];        // FUN_0052c370's draws since the last decor push
const decor = [];           // site+4 records (wall decor, chandelier, liana, cobwebs)
const ASM = [0x100300, 0x10931c];
// return addresses of the three `call ebx` sites in the torch block (0x5058ed..0x5059e0):
// the 1-in-40 gate, the rand()%4 direction, and the rand()%4000 flicker phase.
const T_GATE = 0x1058ef, T_ROT = 0x1059bb, T_FLICKER = 0x1059d9;
// and the four stub-light coin flips, one per wall direction (0x5049b5 / b6c / d10 / ebc)
const STUB_COINS = { 0x1049b7: 0, 0x104b6e: 2, 0x104d12: 3, 0x104ebe: 1 };
// FUN_0052a830 = the scatter/furniture builder behind the four 0x1063xx-0x106dxx emitters.
// Its draws are attributed by return-address range so nothing inside it has to be patched.
const SCATTER = [0x12a830, 0x12a830 + 1448];
// FUN_0052c370 = the wall-decor emitter; its record goes to site+4, a std::list, via
// FUN_00528450 -- a different container from the site+0xc prop vector.
const DECOR = [0x12c370, 0x12c370 + 341];   // BYTE size, not the decompiled-C length:
// 4820 is how long its C is, and that range runs past FUN_0052b470's entry at 0x12b470 and
// swallows 72 of the item generator's draws.

Interceptor.attach(b.add(0xd83a0), { onEnter(){ if (!world) world = this.context.ecx; } });
Interceptor.replace(b.add(0x149550), new NativeCallback(function(){}, 'void', ['pointer'], 'fastcall'));
Interceptor.replace(b.add(0xd78e0), new NativeCallback(function(){}, 'void', ['pointer','int','int'], 'thiscall'));

function i32(ebp, off){ return ebp.sub(off).readS32(); }

const m = Process.findModuleByName('MSVCR110.dll') || Process.findModuleByName('msvcr110.dll');
Interceptor.attach(m.getExportByName('rand'), { onLeave(rv){
  if (!cap || this.threadId !== genTid) return;
  randN++;
  let rva = 0; try { rva = this.returnAddress.sub(b).toUInt32(); } catch(e){ return; }
  if (rva >= SCATTER[0] && rva < SCATTER[1]) { scatterRands.push([rva, rv.toInt32()]); return; }
  if (rva >= DECOR[0] && rva < DECOR[1]) { decorRands.push([rva, rv.toInt32()]); return; }
  if (rva === T_GATE || rva === T_ROT || rva === T_FLICKER || (rva in STUB_COINS)) {
    const ebp = this.context.ebp;
    torchRands.push({ ra: rva, v: rv.toInt32(), n: randN - 1,
                      I: i32(ebp,0x2b50), J: i32(ebp,0x2b4c), K: i32(ebp,0x2b48) });
  }
}});

// the grid + origin, once, at the loop head (same probe as frida_dungeon_grid.py)
Interceptor.attach(b.add(0x104784), { onEnter(){
  if (!cap || this.threadId !== genTid) return;
  const ebp = this.context.ebp, g = ebp.sub(0x2bcc);
  const rec = { rot: g.add(4).readS32(), mirror: g.add(8).readU8(),
                dimX: g.add(0xc).readS32(), dimY: g.add(0x10).readS32(),
                dimZ: g.add(0x14).readS32(),
                baseX: i32(ebp,0x2b38), baseY: i32(ebp,0x2b34), baseZ: i32(ebp,0x2b54),
                style: i32(ebp,0x2b88), p1c: ebp.add(0x1c).readS32() };
  try {
    const n = rec.dimX * rec.dimY * rec.dimZ * 2;
    rec.bytes = g.add(0x18).readPointer().readByteArray(n);
  } catch(e){ rec.err = ''+e; }
  grids.push(rec);
}});

// FUN_004d6670 = the prop vector's push_back (`this` = site+0xc, args[0] = the record)
Interceptor.attach(b.add(0xd6670), { onEnter(args){
  if (!cap || this.threadId !== genTid) return;
  let rva = 0; try { rva = this.returnAddress.sub(b).toUInt32(); } catch(e){ return; }
  if (rva < ASM[0] || rva >= ASM[1]) return;              // assembler call sites only
  const ebp = this.context.ebp;
  const r = { ra: rva, randN: randN,
              I: i32(ebp,0x2b50), J: i32(ebp,0x2b4c), K: i32(ebp,0x2b48) };
  try { r.b = Array.from(new Uint8Array(args[0].readByteArray(0x40))); } catch(e){}
  r.rands = scatterRands; scatterRands = [];
  props.push(r);
}});

// FUN_00528450 = std::list::push_back on site+4 (`this` = the list, args[0] = the record)
Interceptor.attach(b.add(0x128450), { onEnter(args){
  if (!cap || this.threadId !== genTid) return;
  let rva = 0; try { rva = this.returnAddress.sub(b).toUInt32(); } catch(e){ return; }
  if (rva < ASM[0] || rva >= ASM[1]) return;
  const ebp = this.context.ebp;
  const r = { ra: rva, randN: randN,
              I: i32(ebp,0x2b50), J: i32(ebp,0x2b4c), K: i32(ebp,0x2b48) };
  try { r.b = Array.from(new Uint8Array(args[0].readByteArray(0x40))); } catch(e){}
  r.rands = decorRands; decorRands = [];
  decor.push(r);
}});

const zb = new NativeFunction(b.add(0x118630), 'void', ['pointer','uint32','uint32'], 'thiscall');
rpc.exports = {
  ready(){ return world ? world.toString() : null; },
  gen(zx, zz){
    if (!world) return 'no-world';
    cap = true; genTid = Process.getCurrentThreadId();
    try { zb(world, zx>>>0, zz>>>0); return {props: props.length, draws: randN}; }
    catch(e){ return 'EXC:'+e; }
  },
  count(){ return props.length; },
  slice(a, n){ return props.slice(a, a + n); },
  torchRands(){ return torchRands; },
  decorCount(){ return decor.length; },
  decorSlice(a, n){ return decor.slice(a, a + n); },
  grids(){ return grids.map(g => { const o = Object.assign({}, g); o.bytes = null; return o; }); },
  gridBytes(i){ return grids[i] && grids[i].bytes ? grids[i].bytes : null; }
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
        th.join(timeout=300)
        time.sleep(1.0)
        print("gen ->", res[0], flush=True)
        n = api.count()
        props = []
        for a in range(0, n, 500):
            props.extend(api.slice(a, 500))
        torch_rands = api.torch_rands()
        decor = []
        for a in range(0, api.decor_count(), 500):
            decor.extend(api.decor_slice(a, 500))
        grids = api.grids()
        for i, g in enumerate(grids):
            raw = api.grid_bytes(i)
            g["bytes_b64"] = base64.b64encode(bytes(raw)).decode() if raw else None
            g.pop("bytes", None)
    finally:
        try:
            frida.kill(pid)
        except Exception:
            pass

    from collections import Counter
    kinds = Counter(p["b"][0] for p in props if p.get("b"))
    print(f"prop records: {len(props)}   by kind: {dict(sorted(kinds.items()))}", flush=True)
    print("  by call site:", dict(sorted(Counter(hex(p["ra"]) for p in props).items())), flush=True)
    for p in props:
        if p.get("b"):
            p["b"] = base64.b64encode(bytes(p["b"])).decode()
    dk = Counter(d["b"][0] for d in decor if d.get("b"))
    print(f"  torch-block draws: {len(torch_rands)}   site+4 decor records: {len(decor)}"
          f"  by id: {dict(sorted(dk.items()))}", flush=True)
    for d_ in decor:
        if d_.get("b"):
            d_["b"] = base64.b64encode(bytes(d_["b"])).decode()
    with open(OUT, "w") as f:
        json.dump({"seed": 42069, "zone": ZONE, "grids": grids, "props": props,
                   "torch_rands": torch_rands, "decor": decor}, f)
    print(f"wrote {os.path.normpath(OUT)}", flush=True)
    sys.stdout.flush()
    os._exit(0)


main()
