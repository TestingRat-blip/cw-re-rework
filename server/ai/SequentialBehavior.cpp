// SequentialBehavior (ai) -- server. 6 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "SequentialBehavior.h"

/* cube::SequentialBehavior::SequentialBehavior @ 0041cef0  kind=game  attributed-by=rtti  size=200 */

SequentialBehavior * __thiscall
cube::SequentialBehavior::SequentialBehavior(SequentialBehavior *this,int param_1)

{
  void **ppvVar1;
  undefined4 *puVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  int *piVar6;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054be8b;
  local_10 = ExceptionList;
  uVar3 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  ppvVar1 = &this->field1_0x4;
  this->vftablePtr = &vftable;
  *ppvVar1 = (void *)0x0;
  this[1].vftablePtr = (SequentialBehavior_vftable *)0x0;
  pvVar4 = (void *)FUN_004ce660((undefined4 *)0x0,(undefined4 *)0x0);
  *ppvVar1 = pvVar4;
  local_8 = 0;
  piVar6 = (int *)**(int **)(param_1 + 4);
  if (piVar6 != *(int **)(param_1 + 4)) {
    do {
      local_14 = (**(code **)(*(int *)piVar6[2] + 4))(uVar3);
      puVar2 = *ppvVar1;
      iVar5 = FUN_0052dfb0(puVar2,(undefined4 *)puVar2[1],&local_14);
      if (this[1].vftablePtr == (SequentialBehavior_vftable *)0x15555554) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("list<T> too long");
      }
      this[1].vftablePtr =
           (SequentialBehavior_vftable *)((int)&(this[1].vftablePtr)->vfunction1 + 1);
      puVar2[1] = iVar5;
      **(int **)(iVar5 + 4) = iVar5;
      piVar6 = (int *)*piVar6;
    } while (piVar6 != (int *)*(int *)(param_1 + 4));
  }
  ExceptionList = local_10;
  return this;
}


/* cube::SequentialBehavior::SequentialBehavior @ 0041cfc0  kind=game  attributed-by=rtti  size=44 */

SequentialBehavior * __thiscall
cube::SequentialBehavior::SequentialBehavior(SequentialBehavior *this)

{
  void *pvVar1;
  
  this->vftablePtr = &vftable;
  this->field1_0x4 = (void *)0x0;
  this[1].vftablePtr = (SequentialBehavior_vftable *)0x0;
  pvVar1 = (void *)FUN_004ce660((undefined4 *)0x0,(undefined4 *)0x0);
  this->field1_0x4 = pvVar1;
  return this;
}


/* cube::SequentialBehavior::~SequentialBehavior @ 0041cff0  kind=game  attributed-by=rtti  size=96 */

void __thiscall cube::SequentialBehavior::~SequentialBehavior(SequentialBehavior *this)

{
  int *piVar1;
  int *piVar2;
  
  this->vftablePtr = &vftable;
  piVar2 = *(int **)this->field1_0x4;
  if (piVar2 != this->field1_0x4) {
    do {
      operator_delete((void *)piVar2[2]);
      piVar2 = (int *)*piVar2;
    } while (piVar2 != this->field1_0x4);
  }
  piVar2 = this->field1_0x4;
  piVar1 = (int *)*piVar2;
  *piVar2 = (int)piVar2;
  *(void **)((int)this->field1_0x4 + 4) = this->field1_0x4;
  this[1].vftablePtr = (SequentialBehavior_vftable *)0x0;
  if (piVar1 != this->field1_0x4) {
    do {
      piVar2 = (int *)*piVar1;
      operator_delete(piVar1);
      piVar1 = piVar2;
    } while (piVar2 != this->field1_0x4);
  }
  operator_delete(this->field1_0x4);
  return;
}


/* cube::SequentialBehavior::scalar_deleting_destructor @ 0041d050  kind=game  attributed-by=rtti  size=33 */

undefined4 * __thiscall
cube::SequentialBehavior::scalar_deleting_destructor(SequentialBehavior *this,byte param_1)

{
  ~SequentialBehavior(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return &this->vftablePtr;
}


/* cube::SequentialBehavior::vfunction1 @ 0041d080  kind=game  attributed-by=rtti  size=109 */

uint __thiscall
cube::SequentialBehavior::vfunction1
          (SequentialBehavior *this,int param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = this->field1_0x4;
  piVar2 = (int *)*piVar1;
  if (piVar2 != piVar1) {
    do {
      piVar1 = (int *)(*(code *)**(undefined4 **)piVar2[2])(param_1,param_2,param_3,param_4);
      if ((char)piVar1 != '\0') {
        return CONCAT31((int3)((uint)piVar1 >> 8),1);
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != this->field1_0x4);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  return (uint)piVar1 & 0xffffff00;
}


/* cube::SequentialBehavior::clone @ 0041d0f0  kind=game  attributed-by=rtti  size=104 */

undefined4 * __thiscall cube::SequentialBehavior::clone(SequentialBehavior *this)

{
  SequentialBehavior *pSVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054bebb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pSVar1 = operator_new(0xc);
  local_8 = 0;
  if (pSVar1 != (SequentialBehavior *)0x0) {
    pSVar1 = SequentialBehavior(pSVar1,(int)this);
    ExceptionList = local_10;
    return &pSVar1->vftablePtr;
  }
  ExceptionList = local_10;
  return (undefined4 *)0x0;
}


