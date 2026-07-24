#!/usr/bin/env python3
"""Bulk-adjudicate the unattributed (`none`) functions by STRUCTURAL ROLE.

This does not invent names. It reads each function's decompiled body and assigns a role
that is mechanically verifiable from the code, so the review surface splits into:

  * trivial mechanical helpers a reviewer can skip (accessors, mutators, thunks, stubs,
    ctor/dtor-shaped, dispatchers, thin wrappers), and
  * genuine unknown game logic that still needs RE.

For the trivial roles it also emits a descriptive name (`get_0x1c`, `thunk_to_...`) and,
where a function's classified callers agree, a subsystem module. Everything that is not
mechanically classifiable stays `logic` (still unattributed — no claim invented).

Output: raw/<prog>.none_roles.json  {addr: {role, name, module, evidence}}
        raw/none_adjudication_report.md
Consumed by structure.py as the `role` attribution source (below every real identity).
"""
import json
import os
import re
from collections import Counter, defaultdict

HERE = os.path.dirname(os.path.abspath(__file__))
RAW = os.path.join(HERE, "..", "raw")
FOLDER = {"Server.exe": "server", "Cube.exe": "cube"}

# roles a reviewer can skip entirely vs. real functions recovered via indirect refs
SKIP_ROLES = {"accessor", "mutator", "thunk", "identity", "stub", "dispatch", "computed", "artifact"}
INDIRECT_ROLES = {"vfunc-indirect", "dispatch-target", "callback"}

# module a caller belongs to -> subsystem, for majority assignment
def body_of(c):
    i = c.find("{")
    return c[i:] if i >= 0 else c


ACCESSOR = re.compile(r"^\{\s*return\s+\*\(\w[\w ]*\*\)\((?:param_1|this)\s*\+\s*(0x[0-9a-f]+|\d+)\)\s*;\s*\}$")
ACCESSOR0 = re.compile(r"^\{\s*return\s+\*(?:param_1|this)\s*;\s*\}$")
IDENTITY = re.compile(r"^\{\s*return\s+param_1\s*;\s*\}$")
CONSTRET = re.compile(r"^\{\s*return\s+(0x[0-9a-f]+|\d+|0)\s*;\s*\}$")
MUTATOR = re.compile(r"^\{\s*\*\(\w[\w ]*\*\)\((?:param_1|this)\s*\+\s*(0x[0-9a-f]+|\d+)\)\s*=\s*\w+\s*;\s*(return[^;]*;)?\s*\}$")
EMPTYSTUB = re.compile(r"^\{\s*(return\s*;?)?\s*\}$")


def norm(body):
    return re.sub(r"\s+", " ", body).strip()


def classify(addr, meta, dec, kindmap):
    m = meta.get(addr, {})
    c = dec.get(addr, {}).get("c", "")
    nb = norm(body_of(c))
    size = m.get("size", 0)
    callees = [x.lower() for x in (m.get("callees") or [])]
    strings = m.get("strings") or []

    # --- structural roles (mechanically verifiable) ---
    mm = ACCESSOR.match(nb)
    if mm:
        return "accessor", "get_%s" % mm.group(1), "field getter: return *(this+%s)" % mm.group(1)
    if ACCESSOR0.match(nb):
        return "accessor", "deref_get", "return *this"
    if IDENTITY.match(nb):
        return "identity", "identity", "return param_1 (this) — often a no-op ctor/cast"
    if CONSTRET.match(nb):
        return "stub", "ret_const", "returns a constant — stub / trivial predicate"
    if MUTATOR.match(nb):
        off = MUTATOR.match(nb).group(1)
        return "mutator", "set_%s" % off, "field setter: *(this+%s)=x" % off
    if EMPTYSTUB.match(nb):
        return "stub", "empty_stub", "empty body"

    # general trivial: small, no function calls, no loops, at most one branch, and only
    # a couple of statements. Catches bitfield extracts (`>>6 & 1`), predicates (`!= 0`),
    # container-size (`end - begin`), computed getters/setters the exact patterns miss.
    has_call = bool(re.search(r"FUN_[0-9a-f]{8}|\(\*\*?\(code|->|_delete|_free\b|operator", nb))
    stmts = nb.count(";")
    if size < 0x20 and not has_call and "while" not in nb and "for (" not in nb and nb.count("if ") <= 1:
        if stmts <= 1 and nb.lstrip("{").lstrip().startswith("return"):
            return "computed", "compute", "single field-derived expression, no calls"
        if stmts <= 3 and "=" in nb and "return" not in nb.split("=")[0]:
            return "mutator", None, "small field store(s), no calls"
        if stmts <= 2:
            return "computed", "compute", "trivial expression, no calls"

    # single tail-call forwarder / thunk
    calls = re.findall(r"(FUN_[0-9a-f]{8}|\b\w+)\s*\(", nb)
    ncalls = nb.count("(")
    if size < 0x40 and len(callees) == 1 and nb.count("(") <= 3:
        tgt = "0x" + callees[0]
        return "thunk", "fwd_%s" % callees[0], "single-call forwarder -> %s" % tgt

    # vtable dispatcher: indirect call through *(*this...)
    if re.search(r"\(\*\*?\(code \*\*?\)", nb) and size < 0x60 and len(callees) <= 1:
        return "dispatch", "vdispatch", "virtual dispatch through vtable"

    # thin wrapper: small, 1-2 direct calls, no loops/branches to speak of
    if size < 0x80 and 1 <= len(callees) <= 2 and "while" not in nb and "for (" not in nb and nb.count("if ") <= 1:
        return "wrapper", None, "thin wrapper around %d call(s)" % len(callees)

    # ctor/dtor shape: many field stores of 0 / returns this, or operator_delete
    if re.search(r"operator_delete|_free\b|~", c) and size < 0x120:
        return "dtor-like", None, "frees memory — destructor-shaped"
    zeros = len(re.findall(r"=\s*0\s*;", nb))
    if zeros >= 4 and ("return param_1" in nb or "return this" in nb):
        return "ctor-like", None, "zero-inits %d fields, returns this" % zeros

    # otherwise: genuine unknown logic
    return "logic", None, None


def module_by_callers(addr, meta, modmap):
    callers = [c.lower() for c in (meta.get(addr, {}).get("callers") or [])]
    mods = [modmap.get(c) for c in callers]
    mods = [x for x in mods if x and x not in ("game_misc", "_library")]
    if not mods:
        return None, 0.0
    cnt = Counter(mods)
    top, n = cnt.most_common(1)[0]
    return (top, n / len(mods)) if n / len(mods) >= 0.6 else (None, 0.0)


def load_indirefs(exe):
    """Indirect incoming references (IndirectRefs.java): recover the callers that Ghidra's
    direct call graph misses — vtable slots, dispatch-table targets, callbacks."""
    p = os.path.join(RAW, exe + ".indirefs.jsonl")
    out = {}
    if os.path.exists(p):
        for line in open(p, encoding="utf-8"):
            r = json.loads(line)
            out[r["addr"].lower()] = r
    return out


def run(exe):
    folder = FOLDER[exe]
    meta = {r["addr"].lower(): r for r in (json.loads(l) for l in open(os.path.join(RAW, exe + ".meta.jsonl"), encoding="utf-8"))}
    dec = {r["addr"].lower(): r for r in (json.loads(l) for l in open(os.path.join(RAW, exe + ".decomp.jsonl"), encoding="utf-8"))}
    indir = load_indirefs(exe)

    modmap, kindmap, none = {}, {}, []
    for line in open(os.path.join(HERE, "..", folder, "attribution.tsv"), encoding="utf-8"):
        p = line.rstrip("\n").split("\t")
        if len(p) < 6 or p[0] == "addr":
            continue
        a = p[0].lower()
        modmap[a] = p[3]
        kindmap[a] = p[5]
        if p[5] == "none":
            none.append(a)

    out = {}
    roles = Counter()
    for a in none:
        role, name, ev = classify(a, meta, dec, kindmap)

        # indirect-reference resolution: recover callers Ghidra's direct graph missed
        ir = indir.get(a, {})
        has_direct = bool(meta.get(a, {}).get("callers"))
        if not has_direct:
            dp = ir.get("data_ptr", [])
            cp = ir.get("code_ptr", [])
            vtable = next((d.get("container", "") for d in dp
                           if "vftable" in (d.get("container") or "").lower()
                           or "vtable" in (d.get("container") or "").lower()), None)
            if vtable:
                role, name, ev = "vfunc-indirect", None, "vtable slot in %s (called via vtable)" % vtable
            elif dp:
                role = "dispatch-target" if role == "logic" else role
                ev = (ev or "") + " | held in dispatch table %s" % (dp[0].get("container") or "?")
            elif cp:
                role = "callback" if role == "logic" else role
                ev = (ev or "") + " | address taken by %s (callback)" % cp[0]
            elif role == "logic":
                role, name, ev = "artifact", None, "no incoming reference of any kind (EH/GS fragment or dead code)"

        roles[role] += 1

        # module: try direct callers, then indirect (vtable class / dispatcher / code-ptr fn)
        mod, conf = module_by_callers(a, meta, modmap)
        if not mod and ir:
            eff = list(ir.get("code_ptr", []))
            for d in ir.get("data_ptr", []):
                c = (d.get("container") or "")
                if "::" in c:                       # vtable class -> its own module chain
                    pass
                elif c.lower().startswith("fun_"):
                    eff.append(c.lower().replace("fun_", ""))
            mods = [modmap.get(x) for x in eff if modmap.get(x) not in (None, "game_misc", "_library")]
            if mods:
                top = Counter(mods).most_common(1)[0]
                if top[1] / len(mods) >= 0.6:
                    mod, conf = top[0], top[1] / len(mods)

        rec = {"role": role, "evidence": ev}
        if name:
            rec["name"] = name
        if mod:
            rec["module"] = mod
            rec["module_conf"] = round(conf, 2)
        out[a] = rec

    json.dump(out, open(os.path.join(RAW, exe + ".none_roles.json"), "w"), indent=0, sort_keys=True)
    trivial = sum(v for k, v in roles.items() if k != "logic")
    return exe, len(none), roles, trivial


def main():
    results = [run(e) for e in ("Server.exe", "Cube.exe")]
    with open(os.path.join(RAW, "none_adjudication_report.md"), "w", encoding="utf-8") as g:
        g.write("# Adjudication of the unattributed (`none`) functions\n\n")
        g.write("By **structural role**, read from each decompiled body. No names are invented; a\n")
        g.write("function stays `logic` (unattributed) unless its role is mechanically provable.\n")
        g.write("The point is to separate trivial mechanical helpers a reviewer can skip from the\n")
        g.write("genuine unknown game logic that is the real remaining RE surface.\n\n")
        for exe, n, roles, trivial in results:
            g.write("## %s — %d unattributed\n\n" % (exe, n))
            g.write("| role | count | reviewer action |\n|---|---|---|\n")
            action = {
                "accessor": "skip — field getter", "mutator": "skip — field setter",
                "thunk": "skip — forwarder", "identity": "skip — returns this",
                "stub": "skip — trivial/empty", "dispatch": "skip — vtable dispatch",
                "wrapper": "glance — thin wrapper", "ctor-like": "glance — constructor",
                "dtor-like": "glance — destructor",
                "vfunc-indirect": "REVIEW — vtable method (indirect)",
                "dispatch-target": "REVIEW — dispatch-table handler",
                "callback": "REVIEW — callback",
                "artifact": "SKIP — no refs (EH/GS fragment or dead code)",
                "logic": "**REVIEW — genuine logic**"}
            for role, c in roles.most_common():
                g.write("| %s | %d | %s |\n" % (role, c, action.get(role, "")))
            skippable = sum(roles[k] for k in roles if k in SKIP_ROLES)
            indirect = sum(roles[k] for k in roles if k in INDIRECT_ROLES)
            g.write("\n**%d skippable (trivial helpers + artifacts); %d indirect real functions "
                    "recovered (vtable/dispatch/callback); %d remain genuine logic.**\n\n"
                    % (skippable, indirect, roles.get("logic", 0)))
        g.write("Consumed by `structure.py` as the `role` source: skippables get a descriptive name\n")
        g.write("in `game_misc/_helpers_*` / `_artifacts`, indirect-real go to `_indirect_*` under\n")
        g.write("their subsystem, isolating true `logic` in the `Unsorted` files.\n")

    for exe, n, roles, trivial in results:
        skippable = sum(roles[k] for k in roles if k in SKIP_ROLES)
        indirect = sum(roles[k] for k in roles if k in INDIRECT_ROLES)
        print("%-11s none=%d  skip=%d  indirect-real=%d  glance=%d  LOGIC=%d"
              % (exe, n, skippable, indirect,
                 sum(roles[k] for k in roles if k in ("wrapper", "ctor-like", "dtor-like")),
                 roles.get("logic", 0)))
        print("   " + "  ".join("%s:%d" % (k, v) for k, v in roles.most_common()))


if __name__ == "__main__":
    main()
