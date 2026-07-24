// SequentialBehavior (ai) -- cube. 6 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "SequentialBehavior.h"

/* cube::SequentialBehavior::SequentialBehavior @ 004dc200  kind=game  attributed-by=rtti  size=200 */

SequentialBehavior * __thiscall
cube::SequentialBehavior::SequentialBehavior(SequentialBehavior *this,int param_1)

{
  void **ppvVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e907b;
  local_10 = ExceptionList;
  uVar2 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  ppvVar1 = &this->field1_0x4;
  this->vftablePtr = &vftable;
  *ppvVar1 = (void *)0x0;
  this[1].vftablePtr = (SequentialBehavior_vftable *)0x0;
  pvVar3 = (void *)FUN_0046d550(0,0);
  *ppvVar1 = pvVar3;
  local_8 = 0;
  piVar5 = (int *)**(int **)(param_1 + 4);
  if (piVar5 != *(int **)(param_1 + 4)) {
    do {
      local_14 = (**(code **)(*(int *)piVar5[2] + 4))(uVar2);
      pvVar3 = *ppvVar1;
      iVar4 = FUN_00583cb0(pvVar3,*(undefined4 *)((int)pvVar3 + 4),&local_14);
      if (this[1].vftablePtr == (SequentialBehavior_vftable *)0x15555554) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("list<T> too long");
      }
      this[1].vftablePtr =
           (SequentialBehavior_vftable *)((int)&(this[1].vftablePtr)->vfunction1 + 1);
      *(int *)((int)pvVar3 + 4) = iVar4;
      **(int **)(iVar4 + 4) = iVar4;
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)*(int *)(param_1 + 4));
  }
  ExceptionList = local_10;
  return this;
}


/* cube::SequentialBehavior::SequentialBehavior @ 004dc2d0  kind=game  attributed-by=rtti  size=44 */

SequentialBehavior * __thiscall
cube::SequentialBehavior::SequentialBehavior(SequentialBehavior *this)

{
  void *pvVar1;
  
  this->vftablePtr = &vftable;
  this->field1_0x4 = (void *)0x0;
  this[1].vftablePtr = (SequentialBehavior_vftable *)0x0;
  pvVar1 = (void *)FUN_0046d550(0,0);
  this->field1_0x4 = pvVar1;
  return this;
}


/* cube::SequentialBehavior::~SequentialBehavior @ 004dc300  kind=game  attributed-by=rtti  size=70 */

void __thiscall cube::SequentialBehavior::~SequentialBehavior(SequentialBehavior *this)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  
  this->vftablePtr = &vftable;
  piVar1 = *(int **)this->field1_0x4;
  if (piVar1 != this->field1_0x4) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)piVar1[2]);
  }
  puVar2 = this->field1_0x4;
  pvVar3 = (void *)*puVar2;
  *puVar2 = puVar2;
  *(void **)((int)this->field1_0x4 + 4) = this->field1_0x4;
  this[1].vftablePtr = (SequentialBehavior_vftable *)0x0;
  if (pvVar3 != this->field1_0x4) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar3);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(this->field1_0x4);
}


/* cube::SequentialBehavior::deleting_destructor @ 004dc360  kind=game  attributed-by=rtti  size=30 */

SequentialBehavior * __thiscall
cube::SequentialBehavior::deleting_destructor(SequentialBehavior *this,byte param_1)

{
  ~SequentialBehavior(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


/* cube::SequentialBehavior::vfunction1 @ 004dc390  kind=game  attributed-by=rtti  size=109 */

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


/* cube::SequentialBehavior::clone @ 004dc400  kind=game  attributed-by=rtti  size=104 */

SequentialBehavior * __thiscall cube::SequentialBehavior::clone(SequentialBehavior *this)

{
  SequentialBehavior *pSVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f661b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pSVar1 = operator_new(0xc);
  local_8 = 0;
  if (pSVar1 != (SequentialBehavior *)0x0) {
    pSVar1 = SequentialBehavior(pSVar1,(int)this);
    ExceptionList = local_10;
    return pSVar1;
  }
  ExceptionList = local_10;
  return (SequentialBehavior *)0x0;
}


