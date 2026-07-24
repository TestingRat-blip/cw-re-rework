#!/usr/bin/env python3
"""Capture the server item generator FUN_0052b470 -- candidates, rand stream, and result.

    FUN_0052b470(ItemData *out, short level, int rank)

builds a fixed list of candidate `ItemData` records (0x118 bytes each) -- rolling a rarity for
each -- and then returns a uniformly random one:

    out = candidates[ rand() % candidates.size() ]        // FUN_00413710 = ItemData_copy

FUN_0052b470 itself cannot be hooked (Frida trampolines on it kill the process), so this rig
instruments its two helpers and filters on the return address instead:

  * FUN_00528530 = vector<ItemData>::push_back -- one hit per candidate, in order
  * FUN_00413710 = ItemData_copy -- the final pick (the copy into `out`)

rand() is hooked with return-address attribution so each draw is charged to the function that
made it (FUN_0052b470 itself, or the FUN_0052a760 / FUN_00528bf0 / FUN_0052c4e0 sub-path).

-> raw/itemgen_capture[_zx_zz].json
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
NAME = "itemgen_capture.json"
if len(sys.argv) >= 3:
    ZONE = (int(sys.argv[1]), int(sys.argv[2]))
    NAME = "itemgen_capture_%d_%d.json" % ZONE
OUT = os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "raw", NAME)

JS = r"""
const b = Process.mainModule.base;
let world = null, genTid = -1, cap = false;
let randN = 0;
let bossItem = null;
let pending = [];          // attributed draws since the last completed invocation
const calls = [];            // one entry per FUN_0052b470 invocation
let cur = null;

// [start, end) RVAs of the functions whose rand() draws we attribute
const ITEMGEN = [0x12b470, 0x12b470 + 2765];
const SPECIAL = [0x12a760, 0x12a760 + 194];
const RECIPE  = [0x128bf0, 0x128bf0 + 1240];
const OTHER   = [0x12c4e0, 0x12c4e0 + 820];
function zone_of(rva){
  if (rva >= ITEMGEN[0] && rva < ITEMGEN[1]) return 'itemgen';
  if (rva >= SPECIAL[0] && rva < SPECIAL[1]) return 'special';
  if (rva >= RECIPE[0]  && rva < RECIPE[1])  return 'sub_528bf0';
  if (rva >= OTHER[0]   && rva < OTHER[1])   return 'sub_52c4e0';
  return null;
}

Interceptor.attach(b.add(0xd83a0), { onEnter(){ if (!world) world = this.context.ecx; } });
Interceptor.replace(b.add(0x149550), new NativeCallback(function(){}, 'void', ['pointer'], 'fastcall'));
Interceptor.replace(b.add(0xd78e0), new NativeCallback(function(){}, 'void', ['pointer','int','int'], 'thiscall'));

const m = Process.findModuleByName('MSVCR110.dll') || Process.findModuleByName('msvcr110.dll');
Interceptor.attach(m.getExportByName('rand'), { onLeave(rv){
  if (!cap || this.threadId !== genTid) return;
  randN++;
  let z = null;
  try { z = zone_of(this.returnAddress.sub(b).toUInt32()); } catch(e){}
  if (z) pending.push([z, rv.toInt32()]);
}});

function bytes(p, n){ return Array.from(new Uint8Array(p.readByteArray(n))); }

// FUN_00528530 = push_back(candidate). Its own internal ItemData_copy has a return address
// inside 0x528530, so the two hooks never confuse each other.
Interceptor.attach(b.add(0x128530), { onEnter(args){
  if (!cap || this.threadId !== genTid) return;
  let rva = 0; try { rva = this.returnAddress.sub(b).toUInt32(); } catch(e){ return; }
  if (rva < ITEMGEN[0] || rva >= ITEMGEN[1]) return;
  if (!cur) {
    cur = { cands: [], site: rva };
    // Frida hooks FUN_00528530 before its prologue, so `ebp` still belongs to
    // FUN_0052b470: its args are at [ebp+8] (out), [ebp+0xc] (level), [ebp+0x10] (rank),
    // and its own return address at [ebp+4] identifies the call site.
    try {
      const fp = this.context.ebp;
      cur.out    = fp.add(8).readPointer().toString();
      cur.level  = fp.add(0xc).readS32() & 0xffff;
      cur.rank   = fp.add(0x10).readS32();
      cur.caller = fp.add(4).readPointer().sub(b).toUInt32();
    } catch(e){ cur.argErr = ''+e; }
  }
  try { cur.cands.push({ ra: rva, at: randN, b: bytes(args[0], 0x118) }); } catch(e){}
  if (rva === LAST_PUSH_RA) {
    cur.rands = pending; pending = [];
    cur.randTotal = cur.rands.length;
    calls.push(cur); cur = null;
  }
}});

// The 26th and last push (return address 0x12becf, right after the FUN_0052a760 special
// item) closes the invocation. FUN_00413710 cannot be hooked -- Frida reports "unable to
// intercept function" on it, same as FUN_00427000 -- so the final pick is recomputed from
// the rand stream instead and checked against the caller's stored result below.
const LAST_PUSH_RA = 0x12becf;

// The boss block's copy of the generated item: 0x507a0b is the instruction after
// `call 0x52b470`, where [ebp-0x28c4] holds the finished ItemData. An ebp-relative snapshot
// point like this is the only kind that is safe inside the dungeon assembler.
Interceptor.attach(b.add(0x107a0b), { onEnter(){
  if (!cap || this.threadId !== genTid) return;
  try { bossItem = bytes(this.context.ebp.sub(0x28c4), 0x118); } catch(e){}
}});

const zb = new NativeFunction(b.add(0x118630), 'void', ['pointer','uint32','uint32'], 'thiscall');
rpc.exports = {
  ready(){ return world ? world.toString() : null; },
  gen(zx, zz){
    if (!world) return 'no-world';
    cap = true; genTid = Process.getCurrentThreadId();
    try { zb(world, zx>>>0, zz>>>0); return {calls: calls.length, draws: randN}; }
    catch(e){ return 'EXC:'+e; }
  },
  count(){ return calls.length; },
  bossItem(){ return bossItem; },
  slice(a, n){ return calls.slice(a, a + n); }
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
        boss_item = api.boss_item()
        calls = []
        for a in range(0, n, 25):                      # chunked: each call is ~30 KB of JSON
            calls.extend(api.slice(a, 25))
    finally:
        try:
            frida.kill(pid)
        except Exception:
            pass

    print(f"FUN_0052b470 invocations captured: {len(calls)}", flush=True)
    if calls:
        c = calls[0]
        from collections import Counter
        print("  first call: %d candidates, %d attributed rand draws %s"
              % (len(c["cands"]), len(c["rands"]), dict(Counter(z for z, _ in c["rands"]))),
              flush=True)
    # shrink: byte arrays -> base64
    for c in calls:
        for cd in c["cands"]:
            cd["b"] = base64.b64encode(bytes(cd["b"])).decode()
        if c.get("result"):
            c["result"] = base64.b64encode(bytes(c["result"])).decode()
    with open(OUT, "w") as f:
        json.dump({"seed": 42069, "zone": ZONE, "calls": calls,
                   "boss_item": base64.b64encode(bytes(boss_item)).decode()
                   if boss_item else None}, f)
    print(f"wrote {os.path.normpath(OUT)}", flush=True)
    sys.stdout.flush()
    os._exit(0)


main()
