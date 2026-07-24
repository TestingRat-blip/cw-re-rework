#!/usr/bin/env python3
"""Capture creature spawns (FUN_00524540) during a DUNGEON build — types 1-15 RNG gate.

Adapts the proven dungeon rig (cw_rederive/f0_dungeoncarve_probe.py): sandbox_42069, the
known dungeon zone (32795,32796), and the crucial trick — stub the region-cache scheduler
(0xd78e0) + 0x149550 so a bare zone_builder() force-call generates the dungeon
deterministically. A plain zb() without these stubs builds terrain only (that gave the
type-0 overworld finding); with them the dungeon assembles and its creature spawns fire.

For each 524540 call on the gen thread we record args (type=param_5, pos, orient) and the
exact span of the shared rand() stream it consumed. That span is the byte-exact gate target
for the dungeon-mob path of Docs/RE_524540_creature_spawn.md.

-> raw/dungeon_spawn_capture.json
"""
import json, os, sys, threading, time
import frida

SB = r"C:\Users\asuna\AppData\Local\Temp\cw_re\sandbox_42069"
EXE = os.path.join(SB, "Server.exe")
ZONE = (32795, 32796)
if len(sys.argv) >= 3:
    ZONE = (int(sys.argv[1]), int(sys.argv[2]))
OUT = os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "raw", "dungeon_spawn_capture.json")

JS = r"""
const b = Process.mainModule.base;
let world = null, genTid = -1, cap = false, inAsm = false;
let randN = 0;
const randVals = [];          // every gen-thread rand() value while capturing
const spawns = [];
let cur = null;

Interceptor.attach(b.add(0xd83a0), { onEnter(){ if (!world) world = this.context.ecx; } });
// stub the region-cache scheduler + 0x149550 so zb() generates the dungeon deterministically
Interceptor.replace(b.add(0x149550), new NativeCallback(function(){}, 'void', ['pointer'], 'fastcall'));
Interceptor.replace(b.add(0xd78e0), new NativeCallback(function(){}, 'void', ['pointer','int','int'], 'thiscall'));

const m = Process.findModuleByName('MSVCR110.dll') || Process.findModuleByName('msvcr110.dll');
Interceptor.attach(m.getExportByName('rand'), { onLeave(rv){
  if (!cap || this.threadId !== genTid) return;
  randVals.push(rv.toInt32()); randN++;
}});

Interceptor.attach(b.add(0x100300), {   // dungeon assembler window
  onEnter(){ if (this.threadId === genTid){ inAsm = true; send({ev:'asm', randN:randN}); } },
  onLeave(){ if (this.threadId === genTid){ inAsm = false; send({ev:'asmLeave', randN:randN}); } }
});

// FUN_00524540 creature spawn builder (__thiscall; stack args[0]=param_1 .. args[4]=param_5)
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
    cur.rand_end = randN;
    cur.rand_draws = randN - cur.rand_start;
    cur.rand_vals = randVals.slice(cur.rand_start, cur.rand_end);
    spawns.push(cur); cur = null;
  }
});

const zb = new NativeFunction(b.add(0x118630), 'void', ['pointer','uint32','uint32'], 'thiscall');
rpc.exports = {
  ready(){ return world ? world.toString() : null; },
  gen(zx, zz){
    if (!world) return 'no-world';
    cap = true; genTid = Process.getCurrentThreadId();
    try { zb(world, zx>>>0, zz>>>0); return {spawns: spawns.length, draws: randN}; }
    catch(e){ return 'EXC:'+e; }
  },
  spawns(){ return spawns; }
};
"""


def main():
    if not os.path.exists(EXE):
        print("MISSING", EXE); sys.exit(1)
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
        th.join(timeout=120)
        time.sleep(1.0)
        print("gen ->", res[0], flush=True)
        spawns = api.spawns()
    finally:
        try: frida.kill(pid)
        except Exception: pass

    from collections import Counter
    print(f"\ncaptured {len(spawns)} spawn calls on the gen thread", flush=True)
    print("  by type:", dict(sorted(Counter(s["type"] for s in spawns).items())), flush=True)
    print("  asm window events:", [e for e in events if e.get("ev") in ("asm", "asmLeave")], flush=True)
    mobs = [s for s in spawns if s["type"] != 0]
    print(f"\n  MOB spawns (type != 0): {len(mobs)}", flush=True)
    for s in mobs[:8]:
        print(f"    type={s['type']} pos={s['pos']} orient={s['orient']} inAsm={s['inAsm']} "
              f"rand_draws={s['rand_draws']} vals={s['rand_vals'][:10]}", flush=True)
    with open(OUT, "w") as f:
        json.dump({"seed": 42069, "zone": ZONE, "spawns": spawns, "events": events}, f)
    print(f"\nwrote {os.path.normpath(OUT)}", flush=True)
    sys.stdout.flush()
    os._exit(0)


main()
