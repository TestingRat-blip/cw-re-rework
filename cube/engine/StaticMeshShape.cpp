// StaticMeshShape (engine) -- cube. 7 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "StaticMeshShape.h"

/* plasma::StaticMeshShape::StaticMeshShape @ 00677290  kind=game  attributed-by=rtti  size=48 */

StaticMeshShape * __thiscall
plasma::StaticMeshShape::StaticMeshShape
          (StaticMeshShape *this,int param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4,undefined4 param_5)

{
  Shape::Shape((Shape *)this,param_1,param_5);
  (this->NamedObject_data).offset_0x50 = param_2;
  (this->NamedObject_data).offset_0x54 = param_3;
  (this->NamedObject_data).offset_0x58 = param_4;
  this->vftablePtr = &vftable;
  return this;
}


/* plasma::StaticMeshShape::deleting_destructor @ 006772c0  kind=game  attributed-by=rtti  size=148 */

StaticMeshShape * __thiscall
plasma::StaticMeshShape::deleting_destructor(StaticMeshShape *this,byte param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f8358;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
                    /* inlined destructor: plasma::StaticMeshShape::~StaticMeshShape */
  this->vftablePtr = &vftable;
  iVar1 = (this->NamedObject_data).offset_0x50;
  local_8 = 0;
  if (iVar1 != 0) {
    FUN_006504c0(iVar1);
  }
  iVar1 = (this->NamedObject_data).offset_0x54;
  if (iVar1 != 0) {
    FUN_006504c0(iVar1);
  }
  iVar1 = (this->NamedObject_data).offset_0x58;
  if (iVar1 != 0) {
    FUN_006504c0(iVar1);
  }
  local_8 = 0xffffffff;
  Shape::~Shape((Shape *)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  ExceptionList = local_10;
  return this;
}


/* plasma::StaticMeshShape::vfunction8 @ 00677360  kind=game  attributed-by=rtti  size=21 */

void __thiscall plasma::StaticMeshShape::vfunction8(StaticMeshShape *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (this->NamedObject_data).offset_0x68;
  *param_1 = (this->NamedObject_data).offset_0x64;
  param_1[1] = uVar1;
  return;
}


/* plasma::StaticMeshShape::vfunction7 @ 00677380  kind=game  attributed-by=rtti  size=21 */

void __thiscall plasma::StaticMeshShape::vfunction7(StaticMeshShape *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (this->NamedObject_data).offset_0x60;
  *param_1 = (this->NamedObject_data).offset_0x5c;
  param_1[1] = uVar1;
  return;
}


/* plasma::StaticMeshShape::vfunction3 @ 006773a0  kind=game  attributed-by=rtti  size=130 */

void __thiscall plasma::StaticMeshShape::vfunction3(StaticMeshShape *this,undefined4 param_1)

{
  int *piVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  piVar1 = (int *)(this->NamedObject_data).offset_0x58;
  if (piVar1 != (int *)0x0) {
    local_18 = 0x3f800000;
    local_14 = 0x3f800000;
    local_10 = 0x3f800000;
    local_c = 0x3f800000;
    (**(code **)(*piVar1 + 8))(param_1,&local_18);
  }
  piVar1 = (int *)(this->NamedObject_data).offset_0x50;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(param_1,(this->Object_data).offset_0x0 + 0x15c);
  }
  piVar1 = (int *)(this->NamedObject_data).offset_0x54;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(param_1,(this->Object_data).offset_0x0 + 0x16c);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* plasma::StaticMeshShape::vfunction5 @ 00677430  kind=game  attributed-by=rtti  size=77 */

undefined1 __thiscall plasma::StaticMeshShape::vfunction5(StaticMeshShape *this,undefined4 param_1)

{
  char cVar1;
  
  if (((this->NamedObject_data).offset_0x50 != 0) && (cVar1 = FUN_006747f0(param_1), cVar1 != '\0'))
  {
    return 1;
  }
  if (((this->NamedObject_data).offset_0x54 != 0) && (cVar1 = FUN_006747f0(param_1), cVar1 != '\0'))
  {
    return 1;
  }
  if (((this->NamedObject_data).offset_0x58 != 0) && (cVar1 = FUN_006747f0(param_1), cVar1 != '\0'))
  {
    return 1;
  }
  return 0;
}


/* plasma::StaticMeshShape::vfunction20 @ 00677480  kind=game  attributed-by=rtti  size=431 */

void __thiscall plasma::StaticMeshShape::vfunction20(StaticMeshShape *this)

{
  undefined4 *puVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  float *pfVar5;
  float *pfVar6;
  bool bVar7;
  
  (this->NamedObject_data).offset_0x5c = 0;
  (this->NamedObject_data).offset_0x60 = 0;
  (this->NamedObject_data).offset_0x64 = 0;
  (this->NamedObject_data).offset_0x68 = 0;
  iVar3 = (this->NamedObject_data).offset_0x50;
  bVar7 = iVar3 != 0;
  if (bVar7) {
    (this->NamedObject_data).offset_0x5c = *(undefined4 *)(iVar3 + 0x110);
    (this->NamedObject_data).offset_0x60 = *(undefined4 *)(iVar3 + 0x114);
    (this->NamedObject_data).offset_0x64 = *(undefined4 *)(iVar3 + 0x118);
    (this->NamedObject_data).offset_0x68 = *(undefined4 *)(iVar3 + 0x11c);
  }
  bVar4 = !bVar7;
  iVar3 = (this->NamedObject_data).offset_0x54;
  if (iVar3 != 0) {
    if (bVar7) {
      fVar2 = (float)(this->NamedObject_data).offset_0x5c;
      pfVar6 = (float *)(iVar3 + 0x110);
      pfVar5 = (float *)&(this->NamedObject_data).offset_0x5c;
      if (*pfVar6 <= fVar2 && fVar2 != *pfVar6) {
        pfVar5 = pfVar6;
      }
      (this->NamedObject_data).offset_0x5c = *pfVar5;
      fVar2 = (float)(this->NamedObject_data).offset_0x60;
      pfVar6 = (float *)((this->NamedObject_data).offset_0x54 + 0x114);
      pfVar5 = (float *)&(this->NamedObject_data).offset_0x60;
      if (*pfVar6 <= fVar2 && fVar2 != *pfVar6) {
        pfVar5 = pfVar6;
      }
      (this->NamedObject_data).offset_0x60 = *pfVar5;
      pfVar6 = (float *)((this->NamedObject_data).offset_0x54 + 0x118);
      fVar2 = *pfVar6;
      puVar1 = &(this->NamedObject_data).offset_0x64;
      pfVar5 = (float *)&(this->NamedObject_data).offset_0x64;
      if ((float)*puVar1 <= fVar2 && fVar2 != (float)*puVar1) {
        pfVar5 = pfVar6;
      }
      (this->NamedObject_data).offset_0x64 = *pfVar5;
      pfVar6 = (float *)((this->NamedObject_data).offset_0x54 + 0x11c);
      fVar2 = *pfVar6;
      puVar1 = &(this->NamedObject_data).offset_0x68;
      pfVar5 = (float *)&(this->NamedObject_data).offset_0x68;
      if ((float)*puVar1 <= fVar2 && fVar2 != (float)*puVar1) {
        pfVar5 = pfVar6;
      }
      (this->NamedObject_data).offset_0x68 = *pfVar5;
    }
    else {
      (this->NamedObject_data).offset_0x5c = *(undefined4 *)(iVar3 + 0x110);
      (this->NamedObject_data).offset_0x60 = *(undefined4 *)(iVar3 + 0x114);
      (this->NamedObject_data).offset_0x64 = *(undefined4 *)(iVar3 + 0x118);
      (this->NamedObject_data).offset_0x68 = *(undefined4 *)(iVar3 + 0x11c);
      bVar4 = false;
    }
  }
  iVar3 = (this->NamedObject_data).offset_0x58;
  if (iVar3 != 0) {
    if (bVar4) {
      (this->NamedObject_data).offset_0x5c = *(undefined4 *)(iVar3 + 0x110);
      (this->NamedObject_data).offset_0x60 = *(undefined4 *)(iVar3 + 0x114);
      (this->NamedObject_data).offset_0x64 = *(undefined4 *)(iVar3 + 0x118);
      (this->NamedObject_data).offset_0x68 = *(undefined4 *)(iVar3 + 0x11c);
      return;
    }
    fVar2 = (float)(this->NamedObject_data).offset_0x5c;
    pfVar6 = (float *)(iVar3 + 0x110);
    pfVar5 = (float *)&(this->NamedObject_data).offset_0x5c;
    if (*pfVar6 <= fVar2 && fVar2 != *pfVar6) {
      pfVar5 = pfVar6;
    }
    (this->NamedObject_data).offset_0x5c = *pfVar5;
    fVar2 = (float)(this->NamedObject_data).offset_0x60;
    pfVar6 = (float *)((this->NamedObject_data).offset_0x58 + 0x114);
    pfVar5 = (float *)&(this->NamedObject_data).offset_0x60;
    if (*pfVar6 <= fVar2 && fVar2 != *pfVar6) {
      pfVar5 = pfVar6;
    }
    (this->NamedObject_data).offset_0x60 = *pfVar5;
    pfVar6 = (float *)((this->NamedObject_data).offset_0x58 + 0x118);
    fVar2 = *pfVar6;
    puVar1 = &(this->NamedObject_data).offset_0x64;
    pfVar5 = (float *)&(this->NamedObject_data).offset_0x64;
    if ((float)*puVar1 <= fVar2 && fVar2 != (float)*puVar1) {
      pfVar5 = pfVar6;
    }
    (this->NamedObject_data).offset_0x64 = *pfVar5;
    pfVar6 = (float *)((this->NamedObject_data).offset_0x58 + 0x11c);
    fVar2 = *pfVar6;
    puVar1 = &(this->NamedObject_data).offset_0x68;
    pfVar5 = (float *)&(this->NamedObject_data).offset_0x68;
    if ((float)*puVar1 <= fVar2 && fVar2 != (float)*puVar1) {
      pfVar5 = pfVar6;
    }
    (this->NamedObject_data).offset_0x68 = *pfVar5;
  }
  return;
}


