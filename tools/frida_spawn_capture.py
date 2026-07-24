#!/usr/bin/env python3
"""Live-capture the creature spawn builder FUN_00524540 (Phase 1 gate).

Force-builds a batch of zones on a headless Server.exe; whenever a zone contains a dungeon
that spawns creatures, 524540 fires. For each call we record its args (type=param_5,
position=param_2, orient=param_3, ...) and the exact span of the shared rand() stream it
consumes (start index, end index, and the values). That span is the byte-exact gate target
for the static type-1 decode in Docs/RE_524540_creature_spawn.md.

Usage: frida_spawn_capture.py [zx0 zz0 span]   (default scans a small zone grid)
-> spawn_capture_<seed>.json
"""
import frida, json, os, sys, time

SB = r"C:\Users\asuna\AppData\Local\Temp\cw_re\server_sandbox3"
EXE = os.path.join(SB, "Server.exe")
OUT = os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "raw", "spawn_capture.json")

# zone-coord grid to force-build (world>>8-ish, matching frida_randstream's gen(ZX>>8, ZZ>>8))
ZX0, ZZ0, SPAN = 32000, 32000, 12
if len(sys.argv) >= 4:
    ZX0, ZZ0, SPAN = int(sys.argv[1]), int(sys.argv[2]), int(sys.argv[3])

JS = r"""
const B = Process.getModuleByName('Server.exe').base;
const CRT = Process.getModuleByName('msvcr110.dll');
let world = null;
Interceptor.attach(B.add(0xc8570), { onEnter(){ if (world === null) world = this.context.ecx; } });
const zb = new NativeFunction(B.add(0x118630), 'void', ['pointer','uint32','uint32'], 'thiscall');

let dungeons = 0;               // dungeon-assembler (500300) fire count
Interceptor.attach(B.add(0x100300), { onEnter(){ if (capturing) dungeons++; } });

let n = 0;                      // rand() call counter (global stream)
const vals = [];               // every rand() value while capturing
let capturing = false;
Interceptor.attach(CRT.getExportByName('rand'), {
  onLeave(ret){ if (capturing){ vals.push(ret.toInt32()); n++; } }
});

// --- FUN_00524540 : creature spawn builder --------------------------------
// __thiscall: ecx=this(World). stack args[0]=param_1(src) ... args[4]=param_5(type)
const spawns = [];
let cur = null;
Interceptor.attach(B.add(0x124540), {
  onEnter(args){
    if (!capturing) return;
    let pos = [0,0,0];
    try { const p = args[1]; pos = [p.readU32(), p.add(4).readU32(), p.add(8).readU32()]; } catch(e){}
    cur = {
      type: args[4].toInt32() & 0xffff,     // param_5 creature type
      orient: args[2].toInt32() & 0xffff,   // param_3
      p6: args[5].toInt32(), p7: args[6].toInt32() & 0xff,
      pos: pos,
      rand_start: n
    };
  },
  onLeave(ret){
    if (!capturing || cur === null) return;
    cur.rand_end = n;
    cur.rand_draws = n - cur.rand_start;
    cur.rand_vals = vals.slice(cur.rand_start, cur.rand_end);
    spawns.push(cur);
    cur = null;
  }
});

rpc.exports = {
  world(){ return world ? world.toString() : null; },
  genrow(zx0, zz, span){          // build one row of zones (lets Python show progress)
    if (!world) return 'no-world';
    capturing = true;
    try {
      for (let dx = 0; dx < span; dx++) { try { zb(ptr(world), (zx0+dx)>>>0, zz>>>0); } catch(e){} }
    } finally { capturing = false; }
    return {dungeons: dungeons, spawns: spawns.length};
  },
  spawns(){ return spawns; }
};
"""


def main():
    if not os.path.exists(EXE):
        print("MISSING", EXE); sys.exit(1)
    pid = frida.spawn([EXE], cwd=SB)
    session = frida.attach(pid)
    sc = session.create_script(JS)
    sc.on("message", lambda m, d: print("JS-ERR", m.get("description", m)) if m.get("type") == "error" else None)
    sc.load()
    frida.resume(pid)
    for _ in range(50):
        time.sleep(0.4)
        if sc.exports_sync.world():
            break
    w = sc.exports_sync.world()
    print("world:", w, flush=True)
    if not w:
        print("no world ptr — server didn't reach World_ctor"); frida.kill(pid); return
    from collections import Counter
    print(f"force-building zones [{ZX0}..{ZX0+SPAN})x[{ZZ0}..{ZZ0+SPAN}) ...", flush=True)
    for dz in range(SPAN):
        r = sc.exports_sync.genrow(ZX0, ZZ0 + dz, SPAN)
        sp = sc.exports_sync.spawns()
        types = Counter(s["type"] for s in sp)
        nonzero = {t: c for t, c in types.items() if t != 0}
        print(f"  row {dz+1}/{SPAN} (zz={ZZ0+dz}): dungeons={r['dungeons']} spawns={len(sp)} "
              f"mob-types={nonzero or '-'}", flush=True)
        # incremental write so a timeout still leaves usable data
        with open(OUT, "w") as f:
            json.dump({"seed": 444444, "grid": [ZX0, ZZ0, SPAN], "spawns": sp}, f)
    spawns = sc.exports_sync.spawns()
    print(f"\ncaptured {len(spawns)} spawn-builder calls", flush=True)
    from collections import Counter
    bytype = Counter(s["type"] for s in spawns)
    print("  by creature type:", dict(sorted(bytype.items())), flush=True)
    t1 = [s for s in spawns if s["type"] == 1]
    print(f"\n  TYPE-1 spawns: {len(t1)}", flush=True)
    for s in t1[:5]:
        print(f"    pos={s['pos']} orient={s['orient']} rand_draws={s['rand_draws']} "
              f"vals[:8]={s['rand_vals'][:8]}", flush=True)
    with open(OUT, "w") as f:
        json.dump({"seed": 444444, "grid": [ZX0, ZZ0, SPAN], "spawns": spawns}, f)
    print(f"\nwrote {os.path.normpath(OUT)}", flush=True)
    session.detach()
    try: frida.kill(pid)
    except Exception: pass


if __name__ == "__main__":
    main()
