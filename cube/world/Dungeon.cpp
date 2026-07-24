// Dungeon (world) -- cube. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Dungeon.h"

/* cube::Dungeon::Dungeon @ 005c38c0  kind=game  attributed-by=rtti  size=127 */

Dungeon * __thiscall cube::Dungeon::Dungeon(Dungeon *this,int param_1,int param_2,int param_3)

{
  Dungeon_vftable *pDVar1;
  Dungeon_vftable *pDVar2;
  uint uVar3;
  
  this[1].field1_0x4 = (undefined2 *)param_1;
  uVar3 = param_1 * param_2 * param_3;
  this[2].vftablePtr = (Dungeon_vftable *)param_2;
  this[2].field1_0x4 = (undefined2 *)param_3;
  this->vftablePtr = &vftable;
  this->field1_0x4 = (undefined2 *)0x0;
  *(undefined1 *)&this[1].vftablePtr = 0;
  pDVar2 = (Dungeon_vftable *)
           FUN_0068d652(-(uint)((int)((ulonglong)uVar3 * 2 >> 0x20) != 0) |
                        (uint)((ulonglong)uVar3 * 2));
  pDVar1 = pDVar2;
  if (pDVar2 == (Dungeon_vftable *)0x0) {
    this[3].vftablePtr = (Dungeon_vftable *)0x0;
    return this;
  }
  while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
    *(undefined2 *)&pDVar1->deleting_destructor = 0;
    pDVar1 = (Dungeon_vftable *)((int)&pDVar1->deleting_destructor + 2);
  }
  this[3].vftablePtr = pDVar2;
  return this;
}


/* cube::Dungeon::~Dungeon @ 005c3c60  kind=game  attributed-by=rtti  size=16 */

void __thiscall cube::Dungeon::~Dungeon(Dungeon *this)

{
  this->vftablePtr = &vftable;
  operator_delete__(this[3].vftablePtr);
  return;
}


/* cube::Dungeon::deleting_destructor @ 005c3f80  kind=game  attributed-by=rtti  size=42 */

Dungeon * __thiscall cube::Dungeon::deleting_destructor(Dungeon *this,byte param_1)

{
                    /* inlined destructor: cube::Dungeon::~Dungeon */
  this->vftablePtr = &vftable;
  operator_delete__(this[3].vftablePtr);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


