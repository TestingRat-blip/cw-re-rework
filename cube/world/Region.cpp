// Region (world) -- cube. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Region.h"

/* cube::Region::Region @ 005c3ac0  kind=game  attributed-by=rtti  size=174 */

Region * __thiscall cube::Region::Region(Region *this)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  Region *pRVar4;
  
  this->vftablePtr = &vftable;
  (this->Region_data).offset_0x4 = 1;
  (this->Region_data).offset_0x8 = 1;
  (this->Region_data).offset_0xc = 0;
  (this->Region_data).offset_0x10 = 0;
  iVar3 = 0xfff;
  puVar1 = (undefined1 *)((int)&(this->Region_data).offset_0x14 + 2);
  do {
    iVar3 = iVar3 + -1;
    *(undefined4 *)(puVar1 + -2) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *(undefined4 *)(puVar1 + 6) = 1;
    puVar1[10] = 0;
    puVar1 = puVar1 + 0x10;
  } while (-1 < iVar3);
  iVar3 = 0x3f;
  do {
    FUN_005c3bb0();
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  *(undefined1 *)&this[0x7dd].Region_data.offset_0x18 = 0;
  this[0x7dd].Region_data.offset_0x1c = 0;
  *(undefined4 *)&this[0x7dd].Region_data.offset_0x20 = 0;
  uVar2 = FUN_0046d4b0();
  this[0x7dd].Region_data.offset_0x1c = uVar2;
  pRVar4 = this + 0x5d2;
  for (iVar3 = 0x1000; iVar3 != 0; iVar3 = iVar3 + -1) {
    pRVar4->vftablePtr = (Region_vftable *)0x0;
    pRVar4 = (Region *)&pRVar4->Region_data;
  }
  return this;
}


/* cube::Region::~Region @ 005c3cc0  kind=game  attributed-by=rtti  size=138 */

void __thiscall cube::Region::~Region(Region *this)

{
  undefined4 *puVar1;
  Region *pRVar2;
  uint uVar3;
  int iVar4;
  Region *pRVar5;
  int iVar6;
  Region *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f3d4e;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  local_8 = 0;
  pRVar5 = this + 0x5d2;
  iVar4 = 0x40;
  local_14 = this;
  do {
    iVar6 = 0x40;
    do {
      if (pRVar5->vftablePtr != (Region_vftable *)0x0) {
        (**(code **)pRVar5->vftablePtr->deleting_destructor)(1,uVar3);
      }
      pRVar2 = local_14;
      pRVar5 = (Region *)&pRVar5->Region_data;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_8 = 0xffffffff;
  puVar1 = (undefined4 *)local_14[0x7dd].Region_data.offset_0x1c;
  FUN_0067eb10(&local_14,*puVar1,puVar1);
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)pRVar2[0x7dd].Region_data.offset_0x1c);
}


/* cube::Region::deleting_destructor @ 005c3fb0  kind=game  attributed-by=rtti  size=30 */

Region * __thiscall cube::Region::deleting_destructor(Region *this,byte param_1)

{
  ~Region(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


