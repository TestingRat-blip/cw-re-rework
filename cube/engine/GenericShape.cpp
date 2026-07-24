// GenericShape (engine) -- cube. 7 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "GenericShape.h"

/* plasma::GenericShape::GenericShape @ 0067cff0  kind=game  attributed-by=rtti  size=187 */

GenericShape * __thiscall
plasma::GenericShape::GenericShape
          (GenericShape *this,int *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8993;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  Shape::Shape((Shape *)this,(int)param_1,param_3);
  this->vftablePtr = &vftable;
  (this->NamedObject_data).offset_0x50 = 0;
  (this->NamedObject_data).offset_0x54 = 0;
  (this->NamedObject_data).offset_0x58 = 0x42c80000;
  (this->NamedObject_data).offset_0x5c = 0x42c80000;
  *(undefined4 *)&(this->NamedObject_data).offset_0x74 = 7;
  (this->NamedObject_data).offset_0x70 = 0;
  local_8 = 0;
  *(undefined2 *)&(this->NamedObject_data).offset_0x60 = 0;
  FUN_0040f680(param_2,0,0xffffffff);
  *(undefined4 *)&(this->NamedObject_data).field_0x78 = 0;
  (this->NamedObject_data).offset_0x3c = 4;
  local_8 = CONCAT31(local_8._1_3_,1);
  uVar2 = (**(code **)(*param_1 + 0x30))(uVar1);
  *(undefined4 *)&(this->NamedObject_data).field_0x7c = uVar2;
  *(undefined1 *)((int)&(this->NamedObject_data).offset_0x20 + 1) = 1;
  ExceptionList = local_10;
  return this;
}


/* plasma::GenericShape::deleting_destructor @ 0067d0b0  kind=game  attributed-by=rtti  size=154 */

GenericShape * __thiscall plasma::GenericShape::deleting_destructor(GenericShape *this,byte param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f89c3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
                    /* inlined destructor: plasma::GenericShape::~GenericShape */
  this->vftablePtr = &vftable;
  local_8 = 1;
  FUN_006504c0(*(undefined4 *)&(this->NamedObject_data).field_0x7c);
  if (7 < *(uint *)&(this->NamedObject_data).offset_0x74) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)(this->NamedObject_data).offset_0x60);
  }
  *(undefined4 *)&(this->NamedObject_data).offset_0x74 = 7;
  (this->NamedObject_data).offset_0x70 = 0;
  *(undefined2 *)&(this->NamedObject_data).offset_0x60 = 0;
  local_8 = 0xffffffff;
  Shape::~Shape((Shape *)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  ExceptionList = local_10;
  return this;
}


/* plasma::GenericShape::vfunction8 @ 0067d150  kind=game  attributed-by=rtti  size=53 */

float * __thiscall plasma::GenericShape::vfunction8(GenericShape *this,float *param_1)

{
  *param_1 = (float)(this->NamedObject_data).offset_0x50;
  param_1[1] = (float)(this->NamedObject_data).offset_0x54;
  *param_1 = (float)(this->NamedObject_data).offset_0x58 + *param_1;
  param_1[1] = (float)(this->NamedObject_data).offset_0x5c + param_1[1];
  return param_1;
}


/* plasma::GenericShape::vfunction7 @ 0067d190  kind=game  attributed-by=rtti  size=21 */

void __thiscall plasma::GenericShape::vfunction7(GenericShape *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (this->NamedObject_data).offset_0x54;
  *param_1 = (this->NamedObject_data).offset_0x50;
  param_1[1] = uVar1;
  return;
}


/* plasma::GenericShape::vfunction14 @ 0067d1b0  kind=game  attributed-by=rtti  size=60 */

int * __thiscall plasma::GenericShape::vfunction14(GenericShape *this)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0064f280(&(this->NamedObject_data).offset_0x60,&this->NamedObject_data);
  piVar1[0x17] = (this->NamedObject_data).offset_0x50;
  piVar1[0x18] = (this->NamedObject_data).offset_0x54;
  piVar1[0x19] = (this->NamedObject_data).offset_0x58;
  piVar1[0x1a] = (this->NamedObject_data).offset_0x5c;
  (**(code **)(*piVar1 + 4))(1);
  return piVar1;
}


/* plasma::GenericShape::vfunction20 @ 0067d1f0  kind=game  attributed-by=rtti  size=584 */

void __thiscall plasma::GenericShape::vfunction20(GenericShape *this)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  uint uVar7;
  undefined1 local_1c [4];
  float local_18;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  FUN_00673010();
  if (*(int *)&(this->NamedObject_data).field_0x78 == 0) {
    fVar1 = (float)(this->NamedObject_data).offset_0x50;
    fVar2 = (float)(this->NamedObject_data).offset_0x54;
    local_14 = (float)(this->NamedObject_data).offset_0x58 + fVar1;
    local_18 = (float)(this->NamedObject_data).offset_0x5c + fVar2;
    FUN_0042bea0(4);
    FUN_0042bf80(4);
    local_10 = 0;
    puVar3 = *(undefined4 **)(*(int *)&(this->NamedObject_data).field_0x7c + 0x1c);
    local_c = 0;
    *puVar3 = 0x3f333333;
    puVar3[1] = 0x3f333333;
    puVar3[2] = 0x3f333333;
    puVar3[3] = 0x3f800000;
    iVar4 = *(int *)(*(int *)&(this->NamedObject_data).field_0x7c + 0x1c);
    *(undefined4 *)(iVar4 + 0x10) = 0x3f19999a;
    *(undefined4 *)(iVar4 + 0x14) = 0x3f19999a;
    *(undefined4 *)(iVar4 + 0x18) = 0x3f19999a;
    *(undefined4 *)(iVar4 + 0x1c) = 0x3f800000;
    iVar4 = *(int *)(*(int *)&(this->NamedObject_data).field_0x7c + 0x1c);
    *(undefined4 *)(iVar4 + 0x20) = 0x3f000000;
    *(undefined4 *)(iVar4 + 0x24) = 0x3f000000;
    *(undefined4 *)(iVar4 + 0x28) = 0x3f000000;
    *(undefined4 *)(iVar4 + 0x2c) = 0x3f800000;
    iVar4 = *(int *)(*(int *)&(this->NamedObject_data).field_0x7c + 0x1c);
    *(undefined4 *)(iVar4 + 0x30) = 0x3f19999a;
    *(undefined4 *)(iVar4 + 0x34) = 0x3f19999a;
    *(undefined4 *)(iVar4 + 0x38) = 0x3f19999a;
    *(undefined4 *)(iVar4 + 0x3c) = 0x3f800000;
    iVar4 = *(int *)&(this->NamedObject_data).field_0x7c;
    iVar5 = *(int *)(iVar4 + 0x14);
    iVar4 = *(int *)(iVar4 + 0x10);
    uVar7 = iVar5 - iVar4 >> 3;
    if (uVar7 < 5) {
      if (uVar7 < 4) {
        FUN_00668360(local_1c,iVar5,4 - uVar7,&local_10);
      }
    }
    else {
      FUN_0042b7a0(local_1c,iVar4 + 0x20,iVar5);
    }
    pfVar6 = *(float **)(*(int *)&(this->NamedObject_data).field_0x7c + 4);
    *pfVar6 = fVar1;
    pfVar6[1] = fVar2;
    iVar4 = *(int *)(*(int *)&(this->NamedObject_data).field_0x7c + 4);
    *(float *)(iVar4 + 8) = local_14;
    *(float *)(iVar4 + 0xc) = fVar2;
    iVar4 = *(int *)(*(int *)&(this->NamedObject_data).field_0x7c + 4);
    *(float *)(iVar4 + 0x10) = local_14;
    *(float *)(iVar4 + 0x14) = local_18;
    iVar4 = *(int *)(*(int *)&(this->NamedObject_data).field_0x7c + 4);
    *(float *)(iVar4 + 0x18) = fVar1;
    *(float *)(iVar4 + 0x1c) = local_18;
    FUN_0040d9d0(6);
    **(undefined4 **)(*(int *)&(this->NamedObject_data).field_0x7c + 0x34) = 0;
    *(undefined4 *)(*(int *)(*(int *)&(this->NamedObject_data).field_0x7c + 0x34) + 4) = 1;
    *(undefined4 *)(*(int *)(*(int *)&(this->NamedObject_data).field_0x7c + 0x34) + 8) = 2;
    *(undefined4 *)(*(int *)(*(int *)&(this->NamedObject_data).field_0x7c + 0x34) + 0xc) = 2;
    *(undefined4 *)(*(int *)(*(int *)&(this->NamedObject_data).field_0x7c + 0x34) + 0x10) = 3;
    *(undefined4 *)(*(int *)(*(int *)&(this->NamedObject_data).field_0x7c + 0x34) + 0x14) = 0;
  }
  (**(code **)(**(int **)&(this->NamedObject_data).field_0x7c + 4))();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* plasma::GenericShape::vfunction2 @ 0067d440  kind=game  attributed-by=rtti  size=7 */

void __thiscall plasma::GenericShape::vfunction2(GenericShape *this)

{
  *(undefined1 *)((int)&(this->NamedObject_data).offset_0x20 + 1) = 1;
  return;
}


