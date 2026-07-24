# RTTI → struct layout recovery

Recovers per-class struct **layouts** (field offsets + types), keyed to the RTTI class
architecture, and applies them so member functions decompile against named struct fields
instead of raw `*(int*)(this + 0x18)` accesses.

Tool: `tools/RecoverStructs.java` (dry / apply modes). Reports in
`raw/{Server,Cube}.exe.structs.{dry,apply}.txt`.

## Method — and its hard limit

**MSVC RTTI encodes a class's NAME and base-class hierarchy, not its field layout.** So the
layout is inferred from usage: for every member function of a class, Ghidra's
`FillOutStructureHelper.processStructure` builds a struct from how the `this` pointer is
accessed (loads/stores at `this + offset`), tracing into called functions. Those per-function
structs are merged into one class struct (widest observed type wins per offset), which is
applied as the type of each member function's first parameter.

The ceiling this creates, measured:

| | classes | fields | fields/class |
|---|---|---|---|
| Server.exe | 25 | 48 | ~2 |
| Cube.exe | 147 | 1,830 | ~12 |

The server is thin because RTTI assigns only ~3 methods per class (ctor/dtor/vfuncs) and its
classes delegate — the ctor is often a `memset(this, 0, size)` that yields the **size** but
no intermediate fields. The client is rich because its `plasma::`/`cube::` UI + engine
classes have many field-accessing methods, so usage-inference has real material.

So the recovery reliably gives, per class: **name + total size + vftable(s) + whatever
fields its RTTI methods touch.** It does *not* give a complete field map — the field-writing
code often lives in non-RTTI `FUN_` functions that are not grouped under the class.

## What it recovers well

- **Struct sizes**: `cube::Spawn` 0xf78, `cube::World` 0xc0, `cube::Zone` 0xb4.
- **Multiple-inheritance vtable layout**: `plasma::Widget` shows three vftables —
  `Widget_vftable_for_NamedObject` @+0x0, `Object_vftable` @+0x8,
  `Widget_vftable_for_Deformer` @+0x24 — plus 69 typed fields.
- **Load-bearing fields**: `cube::SequentialBehavior +0x4` (typed `int*`) is the
  child-behavior linked-list head the chain-walker iterates — the exact data structure
  behind the 2026-07-21 CWAML frozen-AI bug (`docs/CW_CLIENT_BEHAVIOR_TREE.md`).

Before/after on `cube::SequentialBehavior::vfunction1`:

```c
// before:  piVar1 = (this->SequentialBehavior_data).offset_0x0;
// after:   piVar1 = this->field1_0x4;      // int*, the behavior-chain list head
```

## Applied

Both binaries' Ghidra projects (`ghidra_srv`, `ghidra`) carry the applied structs
(25 + 147). The tree was regenerated so member-function `.cpp` bodies show the typed
`this` and named fields (e.g. `cube/engine/Widget.cpp` — 90 `this->` field accesses).

## Two levers left for richer layouts (future work)

1. **Type-propagation beyond RTTI.** Find the non-RTTI functions that take a `<Class>*` as
   arg 0 (via call sites where a typed object flows in), add them to the class's method set,
   and re-infer. This reaches the field-writing code RTTI misses — the main lever for the
   thin server classes.
2. **Canonical layouts for known templates.** `std::vector<T>` = 3 pointers,
   `std::basic_string` = the MSVC SSO layout, `plasma::Vector<N,float>` = N floats. These are
   higher-confidence than usage-inference but apply to library code (`_library`), so lower
   priority for game RE.

## Pipeline note

`RecoverStructs apply` mutates the Ghidra project; re-dump meta and re-decompile the class
members (`DecompDump … @members`) afterward, then re-emit. Because `structure.py` and
`flirt_islands.py` form a two-pass fixpoint (structure writes `attribution.tsv`, flirt reads
it as a barrier and writes `libislands.json`, structure reads that back), always run
**structure → flirt → structure** after any change that alters attribution.
