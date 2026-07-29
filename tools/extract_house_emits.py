"""INTERPRET the town builder's HOUSE ENTITY pass emits out of Server.exe.

The pass (`0x4e74a5`-`0x4ea988`, `Docs/RE_town_entities.md`) hands every qualifying
module of a house's 3x3x4 grid to `creature_spawn_builder`.  Its 34 emit sites each
build the same shape -- a zeroed vec4, a model pointer out of a frame slot, a vec3
position and a `type`/`orient` pair -- but MSVC emits that shape in a dozen different
orders, hoists pushes above branches and shares tails between up to seven emits.
Reading the constants off a listing is exactly the trap `RE_town_house.md` 2 and
`RE_town_furnish.md` 5b.2 record, so this file does not read them: it INTERPRETS each
emit block symbolically and prints what the block computes.

Two tables come out, and `gate_town_entities.py` regenerates and diffs both:

  * the MODEL SETS -- the nine arms of the jump table at `0x4f2b60` (plus the default
    and the three ruin arms), each 13 model ids plus the entrance-stairs override;
  * the EMIT DESCRIPTORS -- per emit site: the model slot, the module index used on
    each axis, the constant added on each axis, the Y offset, `type` and `orient`.

    python tools/extract_house_emits.py            # human-readable
    python tools/extract_house_emits.py --cpp      # the generated C++ header
"""
import collections
import json
import os
import struct
import sys

import capstone

HERE = os.path.dirname(os.path.abspath(__file__))
EXE = os.path.normpath(os.path.join(HERE, "..", "..", "..", "..", "Server.exe"))
MODEL_MAP = os.path.normpath(os.path.join(HERE, "..", "..", "cw_rederive", "model_id_map.json"))

STAGE_LO, STAGE_HI = 0x4E74A5, 0x4EA988
SPAWN = 0x524540
MODEL_AT = 0x4013F0          # vector<Model*>::at(world + 0x1c, id)
VEC_AT = 0x4013D0            # the house anchor's component accessor
CELL_AT = 0x4D1950           # VoxelGrid_cellAt3D(i, j, k)
DIM_X, DIM_Z, DIM_Y = 0x402150, 0x402160, 0x402170     # model->[+0x44 / +0x48 / +0x4c]
VEC3 = 0x402990              # Vector3(x, y, z)
VEC4_ZERO = 0x4010B0
VEC4_COPY = 0x4E1200
MODEL_TABLE = 0x4F2B60       # desc[+0x1c] -> a 13-model set (villages)
MODEL_DEFAULT = 0x4E611D
RUIN_HEAD = 0x4E6202

# the frame slots the pass keeps its loop state in
SLOT_I, SLOT_J, SLOT_NB = 0x5C5C, 0x5C60, 0x5C64      # i, j, the face's neighbour index
SLOT_13J, SLOT_13I = 0x5C50, 0x5C74                   # 13*j and 13*i, precomputed
SLOT_KIND, SLOT_SITE = 0x5C6C, 0x5C70
SLOT_ORIGIN_Z, SLOT_ORIGIN_X = 0x5C44, 0x5C84         # pointers to the house anchor
SLOT_7K, SLOT_BASEY = 0x5CD8, 0x5CDC                  # 7*k and &houseBaseY, precomputed

# [ebp-slot] -> the model-set index it holds (see section 3.1 of the doc); ENTR is the
# entrance-stairs slot, which the clay/whiteclay/ruin arms overwrite.
MODEL_SLOT = {0x5C88: 0, 0x5CB0: 1, 0x14: 2, 0x5C9C: 3, 0x5D08: 4, 0x5CD4: 5, 0x5C8C: 6,
              0x5D2C: 7, 0x5D04: 8, 0x5C7C: 9, 0x5D00: 10, 0x5CA8: 11, 0x5CA0: 12,
              0x5C90: "ENTR"}
SLOT_NAME = {v: ("B+%d" % v if isinstance(v, int) else v) for v in MODEL_SLOT.values()}


# --- image ---------------------------------------------------------------------------
def load_image(path=EXE):
    data = open(path, "rb").read()
    pe = struct.unpack_from("<I", data, 0x3C)[0]
    nsec = struct.unpack_from("<H", data, pe + 6)[0]
    optsz = struct.unpack_from("<H", data, pe + 20)[0]
    base = struct.unpack_from("<I", data, pe + 24 + 28)[0]
    off, secs = pe + 24 + optsz, []
    for _ in range(nsec):
        vsz, va, rsz, ptr = struct.unpack_from("<IIII", data, off + 8)
        secs.append((base + va, vsz, ptr, rsz))
        off += 40
    return data, secs


def at(data, secs, va, n):
    for sva, vsz, ptr, rsz in secs:
        if sva <= va < sva + max(vsz, rsz):
            d = va - sva
            return data[ptr + d:ptr + d + n] if d < rsz else None
    return None


def u32(data, secs, va):
    return struct.unpack_from("<I", at(data, secs, va, 4))[0]


# --- 1. the model sets ----------------------------------------------------------------
def model_sets(data, secs, md):
    """Interpret each arm of the jump table: `push <id>` / `call vector::at` /
    `mov [ebp-slot], eax`, with the store for entry N emitted after the push for N+1."""
    arms = collections.OrderedDict()
    arms["village d1c=0"] = MODEL_DEFAULT
    for i in range(5):
        arms["village d1c=%d" % (i + 1)] = u32(data, secs, MODEL_TABLE + 4 * i)
    # the ruin head: `sub eax, 2 / je A / dec eax / je B` then falls through
    ins = list(md.disasm(at(data, secs, RUIN_HEAD, 0x20), RUIN_HEAD))
    tgts = [int(x.op_str, 16) for x in ins if x.mnemonic == "je"]
    arms["ruin d1c=2"], arms["ruin d1c=3"] = tgts[0], tgts[1]
    arms["ruin other"] = [x for x in ins if x.mnemonic == "push"][0].address

    out = collections.OrderedDict()
    for name, entry in arms.items():
        slots, va, pend, eax = {}, entry, None, None
        for _ in range(400):
            i = next(md.disasm(at(data, secs, va, 16), va))
            m, o = i.mnemonic, i.op_str
            if m == "push" and o.startswith("0x"):
                pend = int(o, 16)
            elif m == "call" and o == hex(MODEL_AT):
                eax, pend = pend, None
            elif m == "mov" and o.startswith("dword ptr [ebp - 0x") and o.endswith(", eax"):
                slots[int(o.split("[ebp - ")[1].split("]")[0], 16)] = eax
            elif m == "jmp" and o.startswith("0x"):
                va = int(o, 16)
                continue
            elif m == "call":
                break
            va += i.size
        ids = [slots[s] for s, k in sorted(MODEL_SLOT.items(), key=lambda kv: (kv[1] == "ENTR", kv[1]))
               if k != "ENTR"]
        out[name] = {"base": ids, "entr": slots.get(0x5C90)}
        missing = [SLOT_NAME[k] for s, k in MODEL_SLOT.items() if s not in slots and k != "ENTR"]
        if missing:
            raise SystemExit("arm %s never fills %s" % (name, missing))
    return out


# --- 2. the emit descriptors ----------------------------------------------------------
class Sym(object):
    """A tiny linear expression: sum(coeff * symbol) + const."""
    def __init__(self, sym=None, const=0, coeff=1):
        self.t = collections.Counter()
        if sym is not None:
            self.t[sym] = coeff
        self.c = const

    @staticmethod
    def const(v):
        return Sym(None, v)

    def __add__(self, o):
        r = Sym()
        r.t.update(self.t)
        if isinstance(o, Sym):
            r.t.update(o.t)
            r.c = self.c + o.c
        else:
            r.c = self.c + o
        return r

    def __sub__(self, o):
        r = Sym()
        r.t.update(self.t)
        if isinstance(o, Sym):
            for k, v in o.t.items():
                r.t[k] -= v
            r.c = self.c - o.c
        else:
            r.c = self.c - o
        return r

    def __mul__(self, n):
        r = Sym(None, self.c * n)
        for k, v in self.t.items():
            r.t[k] = v * n
        return r

    def terms(self):
        return {k: v for k, v in self.t.items() if v}

    def __repr__(self):
        parts = ["%s*%s" % (v, k) if v != 1 else str(k) for k, v in sorted(self.terms().items())]
        if self.c or not parts:
            parts.append("%+d" % self.c if parts else str(self.c))
        return " ".join(parts)


def emit_blocks(data, secs, md):
    """Every emit: the instructions from its block head (`sub esp, 0x10`, the zeroed
    vec4) to the `call FUN_00524540` it reaches through the `jmp` chain."""
    blob = at(data, secs, STAGE_LO, STAGE_HI - STAGE_LO)
    insns = list(md.disasm(blob, STAGE_LO))
    idx = {i.address: n for n, i in enumerate(insns)}
    spawn_at = {i.address for i in insns if i.mnemonic == "call" and i.op_str == hex(SPAWN)}

    def follow(n, depth=0):
        """From instruction n, walk to the spawn call, following unconditional jumps."""
        out = []
        while n < len(insns) and depth < 12:
            i = insns[n]
            out.append(i)
            if i.address in spawn_at:
                return out
            if i.mnemonic == "jmp" and i.op_str.startswith("0x"):
                t = int(i.op_str, 16)
                if t not in idx:
                    return None
                n, depth = idx[t], depth + 1
                continue
            if i.mnemonic.startswith("j"):        # a conditional leaves the block
                return None
            n += 1
        return None

    blocks = []
    for n, i in enumerate(insns):
        if i.mnemonic == "sub" and i.op_str == "esp, 0x10":
            body = follow(n)
            if body:
                blocks.append(body)
    return insns, blocks


def interpret(body):
    """Run one emit block symbolically and return what it hands the spawn call."""
    reg = {}
    stack = []           # the pending pushes, oldest first
    model = None         # the frame slot whose model the last DIM call measured
    st = {"model": None, "x": None, "z": None, "y": None, "type": None, "orient": None}
    last_ecx_slot = None

    def val(op):
        if op.startswith("0x") or op.lstrip("-").isdigit():
            return Sym.const(int(op, 0))
        if op.startswith("dword ptr [ebp - 0x"):
            return Sym("[%s]" % op.split("[ebp - ")[1].split("]")[0])
        return reg.get(op, Sym(op))

    for i in body:
        m, o = i.mnemonic, i.op_str
        if m == "push":
            stack.append(val(o))
            if o.startswith("dword ptr [ebp - 0x"):
                stack[-1] = Sym("[%s]" % o.split("[ebp - ")[1].split("]")[0])
        elif m == "call":
            t = int(o, 16) if o.startswith("0x") else None
            if t == VEC4_ZERO:
                reg["eax"] = Sym("VEC4")
            elif t == VEC4_COPY:
                stack.pop()
                reg["eax"] = Sym("VEC4")
            elif t == CELL_AT:
                del stack[-3:]
                reg["eax"] = Sym("CELL")
            elif t == VEC_AT:
                stack.pop()
                reg["eax"] = Sym("BASEYP")
            elif t == MODEL_AT:
                stack.pop()
                reg["eax"] = Sym("MODEL")
            elif t in (DIM_X, DIM_Z, DIM_Y):
                model = last_ecx_slot
                reg["eax"] = Sym("DIM%s@%s" % ({DIM_X: "X", DIM_Z: "Z", DIM_Y: "Y"}[t], model))
            elif t == VEC3:
                z, y, x = stack.pop(), stack.pop(), stack.pop()
                st["x"], st["z"], st["y"] = x, y, z
                reg["eax"] = Sym("POS")
            elif t == SPAWN:
                st["model"] = stack[-1]
                break
        elif m == "mov":
            d, s = [p.strip() for p in o.split(",", 1)]
            if d == "ecx" and s.startswith("dword ptr [ebp - 0x"):
                last_ecx_slot = s.split("[ebp - ")[1].split("]")[0]
                reg["ecx"] = Sym("[%s]" % last_ecx_slot)
            elif d in ("eax", "ecx", "edx", "esi", "edi"):
                if s.startswith("dword ptr [ebp - 0x"):
                    reg[d] = Sym("[%s]" % s.split("[ebp - ")[1].split("]")[0])
                elif s.startswith("dword ptr ["):     # a dereference
                    inner = reg.get(s.split("[")[1].split("]")[0].strip(), Sym("?"))
                    nm = list(inner.terms())
                    reg[d] = Sym("*" + (nm[0] if nm else "?"))
                else:
                    reg[d] = val(s)
        elif m == "lea":
            d, s = [p.strip() for p in o.split(",", 1)]
            if s == "[esi*8]":
                reg[d] = Sym("k", coeff=8)
            elif s.startswith("[esi -") or s.startswith("[esi +"):
                reg[d] = Sym("k") + int(s.strip("[]").replace("esi ", "").replace(" ", ""), 0)
            elif s.startswith("[e"):
                reg[d] = Sym("&frame")
        elif m == "imul":
            p = [x.strip() for x in o.split(",")]
            if len(p) == 3:
                reg[p[0]] = reg.get(p[1], Sym(p[1])) * int(p[2], 0)
        elif m == "add":
            d, s = [p.strip() for p in o.split(",", 1)]
            if d in reg or d in ("eax", "ecx"):
                base = reg.get(d, Sym(d))
                if s.startswith("dword ptr ["):
                    inner = s.split("[")[1].split("]")[0].strip()
                    nm = list(reg.get(inner, Sym(inner)).terms())
                    reg[d] = base + Sym("*" + (nm[0] if nm else "?"))
                elif s.startswith("0x") or s.lstrip("-").isdigit():
                    reg[d] = base + int(s, 0)
                else:
                    reg[d] = base + reg.get(s, Sym(s))
        elif m == "sub":
            d, s = [p.strip() for p in o.split(",", 1)]
            if d == "esp":
                continue
            if d == "eax" and s == "edx":
                continue                       # the sign half of a signed /2
            reg[d] = reg.get(d, Sym(d)) - reg.get(s, Sym(s))
        elif m == "sar" and o.startswith("eax"):
            e = reg.get("eax", Sym("eax"))
            reg["eax"] = Sym("HALF(%s)" % e)
        elif m == "inc":
            reg[o] = reg.get(o, Sym(o)) + 1
        elif m == "dec":
            reg[o] = reg.get(o, Sym(o)) - 1
        elif m == "movzx":
            d, s = [p.strip() for p in o.split(",", 1)]
            reg[d] = Sym("CELL[%s]" % (s.split("+")[1].split("]")[0].strip() if "+" in s else "0"))

    # the spawn's stack arguments, innermost last:  model, &pos, orient, 6, type, site, ...
    args = stack[::-1]
    st["orient"] = args[2] if len(args) > 2 else None
    st["type"] = args[4] if len(args) > 4 else None
    return st


def describe(data, secs, md):
    insns, blocks = emit_blocks(data, secs, md)
    out = []
    for body in blocks:
        st = interpret(body)
        mslot = list(st["model"].terms())
        mslot = mslot[0].strip("[]") if mslot else "?"
        out.append({
            "emit": body[0].address,
            "tail": body[-1].address + body[-1].size,
            "slot": int(mslot, 16) if mslot not in ("?",) else None,
            "x": st["x"], "z": st["z"], "y": st["y"],
            "type": st["type"], "orient": st["orient"],
        })
    return out


def main():
    data, secs = load_image()
    md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    md.detail = False
    sets = model_sets(data, secs, md)
    db = json.load(open(MODEL_MAP, encoding="utf-8"))["world_model_db"]
    print("=== the model sets (the jump table at 0x%x, plus the default and the ruins)" % MODEL_TABLE)
    for name, s in sets.items():
        print("  %-16s entrance=%s  base=%s" % (
            name, ("0x%x" % s["entr"]) if s["entr"] else "0x889 (kept)",
            " ".join("0x%x" % i for i in s["base"])))
        print("      %s" % ", ".join(db[str(i)]["name"].replace(".cub", "") for i in s["base"]))
    print()
    print("=== the emit descriptors")
    for e in describe(data, secs, md):
        print("  emit 0x%06x -> tail 0x%06x  model=%s" % (
            e["emit"], e["tail"], SLOT_NAME.get(e["slot"], hex(e["slot"] or 0))))
        print("        x = %s\n        z = %s\n        y = %s\n        type=%s orient=%s"
              % (e["x"], e["z"], e["y"], e["type"], e["orient"]))
    return 0


if __name__ == "__main__":
    sys.exit(main())
