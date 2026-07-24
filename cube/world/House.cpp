// House (world) -- cube. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "House.h"

/* cube::House::House @ 005aeb40  kind=game  attributed-by=rtti  size=329 */

House * __thiscall cube::House::House(House *this,int param_1,int param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  House_vftable *pHVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f36d7;
  local_10 = ExceptionList;
  uVar2 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  this->field1_0x4 = 0;
  *(undefined1 *)&this[1].vftablePtr = 0;
  this[3].vftablePtr = (House_vftable *)0xffffffff;
  this[3].field1_0x4 = -1;
  this[4].vftablePtr = (House_vftable *)0x0;
  this[4].field1_0x4 = 0;
  this[5].vftablePtr = (House_vftable *)0x0;
  this[5].field1_0x4 = 0;
  this[6].vftablePtr = (House_vftable *)0x0;
  this[6].field1_0x4 = 0;
  this[7].vftablePtr = (House_vftable *)0x0;
  this[7].field1_0x4 = 0;
  this[8].vftablePtr = (House_vftable *)0x0;
  this[8].field1_0x4 = 0;
  this[9].vftablePtr = (House_vftable *)0x0;
  this[9].field1_0x4 = 0;
  this[10].vftablePtr = (House_vftable *)0x0;
  this[10].field1_0x4 = 0;
  this[0xb].vftablePtr = (House_vftable *)0x0;
  this[0xb].field1_0x4 = 0;
  this[0xc].field1_0x4 = param_1;
  uVar6 = param_1 * param_2 * param_3;
  this[0xd].field1_0x4 = param_3;
  this[0xd].vftablePtr = (House_vftable *)param_2;
  lVar1 = (ulonglong)uVar6 * 0xc;
  local_8 = 4;
  this[0xc].vftablePtr = (House_vftable *)0x0;
  pHVar3 = (House_vftable *)
           FUN_0068d652(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,uVar2);
  if (pHVar3 == (House_vftable *)0x0) {
    this[0xe].vftablePtr = (House_vftable *)0x0;
  }
  else {
    iVar5 = uVar6 - 1;
    if (-1 < iVar5) {
      puVar4 = (undefined1 *)((int)&pHVar3->deleting_destructor + 2);
      do {
        iVar5 = iVar5 + -1;
        ((House_vftable *)(puVar4 + -2))->deleting_destructor = (deleting_destructor *)0x0;
        *(undefined4 *)(puVar4 + 2) = 0;
        puVar4[6] = 0;
        puVar4 = puVar4 + 0xc;
      } while (-1 < iVar5);
    }
    this[0xe].vftablePtr = pHVar3;
  }
  ExceptionList = local_10;
  return this;
}


/* cube::House::~House @ 005aed20  kind=game  attributed-by=rtti  size=87 */

void __thiscall cube::House::~House(House *this)

{
  this->vftablePtr = &vftable;
  operator_delete__(this[0xe].vftablePtr);
  if ((void *)this[10].field1_0x4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)this[10].field1_0x4);
  }
  if (this[9].vftablePtr != (House_vftable *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this[9].vftablePtr);
  }
  if ((void *)this[7].field1_0x4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)this[7].field1_0x4);
  }
  if (this[6].vftablePtr != (House_vftable *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this[6].vftablePtr);
  }
  if ((void *)this[4].field1_0x4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)this[4].field1_0x4);
  }
  return;
}


/* cube::House::deleting_destructor @ 005aee10  kind=game  attributed-by=rtti  size=30 */

House * __thiscall cube::House::deleting_destructor(House *this,byte param_1)

{
  ~House(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


