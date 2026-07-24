// D3D9Engine (engine) -- cube. 22 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "D3D9Engine.h"

/* plasma::D3D9Engine::~D3D9Engine @ 00653320  kind=game  attributed-by=rtti  size=55 */

int __thiscall plasma::D3D9Engine::~D3D9Engine(D3D9Engine *this)

{
  int *piVar1;
  int *piVar2;
  
  if ((this->ObjectManager_data).offset_0x50 == 0) {
    return 0;
  }
  piVar1 = (int *)(this->ObjectManager_data).offset_0x4c;
  piVar2 = (int *)piVar1[1];
  if (piVar2 != piVar1) {
    *(int *)piVar2[1] = *piVar2;
    *(int *)(*piVar2 + 4) = piVar2[1];
                    /* WARNING: Subroutine does not return */
    operator_delete(piVar2);
  }
  return piVar2[2];
}


/* plasma::D3D9Engine::D3D9Engine @ 006887a0  kind=game  attributed-by=rtti  size=341 */

D3D9Engine * __thiscall plasma::D3D9Engine::D3D9Engine(D3D9Engine *this,undefined4 param_1)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f9284;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  Engine::Engine((Engine *)this);
  this->vftablePtr = &vftable;
  this->field2_0x194 = (int *)0x0;
  this[1].vftablePtr = (D3D9Engine_vftable *)0x0;
  this[1].ObjectManager_data.offset_0x4 = (void *)0x0;
  this[1].ObjectManager_data.offset_0x8 = 0;
  *(undefined4 *)&this[1].ObjectManager_data.field_0xc = 0;
  this[1].ObjectManager_data.offset_0x10 = 0;
  this[1].ObjectManager_data.offset_0x14 = 0;
  this[1].ObjectManager_data.offset_0x18 = 0;
  this[1].ObjectManager_data.offset_0x1c = 0;
  this[1].ObjectManager_data.offset_0x108 = 0x3f333333;
  local_8 = 0;
  this[1].ObjectManager_data.offset_0x10c = 0;
  this[1].ObjectManager_data.offset_0x110 = 0;
  uVar1 = FUN_00688b20(0,0);
  this[1].ObjectManager_data.offset_0x10c = uVar1;
  local_8._0_1_ = 1;
  this[1].ObjectManager_data.offset_0x114 = 0;
  this[1].ObjectManager_data.offset_0x118 = 0;
  uVar1 = FUN_00688b20(0,0);
  this[1].ObjectManager_data.offset_0x114 = uVar1;
  local_8 = CONCAT31(local_8._1_3_,2);
  this[1].ObjectManager_data.offset_0x11c = 0;
  this[1].ObjectManager_data.offset_0x120 = 0;
  uVar1 = FUN_0046d550(0,0);
  this[1].ObjectManager_data.offset_0x11c = uVar1;
  this[1].ObjectManager_data.offset_0x124 = param_1;
  this[1].ObjectManager_data.offset_0x128 = 0;
  this[1].ObjectManager_data.offset_0x12c = 0;
  ExceptionList = local_10;
  return this;
}


/* plasma::D3D9Engine::~D3D9Engine @ 00688900  kind=game  attributed-by=rtti  size=291 */

void __thiscall plasma::D3D9Engine::~D3D9Engine(D3D9Engine *this)

{
  int *piVar1;
  D3D9Engine_vftable *pDVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f92d2;
  local_10 = ExceptionList;
  uVar6 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  piVar1 = (int *)this[1].ObjectManager_data.offset_0x128;
  local_8 = 3;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,uVar6);
  }
  piVar1 = (int *)this[1].ObjectManager_data.offset_0x12c;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = this->field2_0x194;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  pDVar2 = this[1].vftablePtr;
  if (pDVar2 != (D3D9Engine_vftable *)0x0) {
    (**(code **)(pDVar2->deleting_destructor + 8))(pDVar2);
  }
  piVar1 = this[1].ObjectManager_data.offset_0x4;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)this[1].ObjectManager_data.offset_0x8;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)&this[1].ObjectManager_data.field_0xc;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)this[1].ObjectManager_data.offset_0x10;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)this[1].ObjectManager_data.offset_0x14;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)this[1].ObjectManager_data.offset_0x18;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)this[1].ObjectManager_data.offset_0x1c;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  puVar3 = (undefined4 *)this[1].ObjectManager_data.offset_0x11c;
  pvVar4 = (void *)*puVar3;
  *puVar3 = puVar3;
  iVar5 = this[1].ObjectManager_data.offset_0x11c;
  *(int *)(iVar5 + 4) = iVar5;
  this[1].ObjectManager_data.offset_0x120 = 0;
  if (pvVar4 != (void *)this[1].ObjectManager_data.offset_0x11c) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar4);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)this[1].ObjectManager_data.offset_0x11c);
}


/* plasma::D3D9Engine::deleting_destructor @ 00688af0  kind=game  attributed-by=rtti  size=30 */

D3D9Engine * __thiscall plasma::D3D9Engine::deleting_destructor(D3D9Engine *this,byte param_1)

{
  ~D3D9Engine(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


/* plasma::D3D9Engine::vfunction20 @ 00688b60  kind=game  attributed-by=rtti  size=583 */

void __thiscall plasma::D3D9Engine::vfunction20(D3D9Engine *this)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  
  FUN_00423e70();
  piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
  (**(code **)(*piVar1 + 0xe4))(piVar1,0x16,1);
  piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
  (**(code **)(*piVar1 + 0xe4))(piVar1,0x89,0);
  piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
  (**(code **)(*piVar1 + 0xe4))(piVar1,7,0);
  piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
  (**(code **)(*piVar1 + 0xe4))(piVar1,0x34,0);
  piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
  (**(code **)(*piVar1 + 0xe4))(piVar1,0x1b,1);
  piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
  (**(code **)(*piVar1 + 0xe4))(piVar1,0xce,1);
  piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
  (**(code **)(*piVar1 + 0xe4))(piVar1,0x13,5);
  piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
  (**(code **)(*piVar1 + 0xe4))(piVar1,0x14,6);
  piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
  (**(code **)(*piVar1 + 0xe4))(piVar1,0xcf,2);
  piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
  (**(code **)(*piVar1 + 0xe4))(piVar1,0xd0,6);
  piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
  (**(code **)(*piVar1 + 0x114))(piVar1,1,1,4);
  piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
  (**(code **)(*piVar1 + 0x114))(piVar1,1,2,4);
  fVar2 = (float)(int)(this->ObjectManager_data).offset_0x108;
  fVar3 = (float)(int)(this->ObjectManager_data).offset_0x10c;
  this[1].ObjectManager_data.offset_0xc8 = 2.0 / (fVar2 - 0.0);
  this[1].ObjectManager_data.offset_0xcc = 0;
  this[1].ObjectManager_data.offset_0xd0 = 0;
  this[1].ObjectManager_data.offset_0xd4 = 0;
  this[1].ObjectManager_data.offset_0xd8 = 0;
  this[1].ObjectManager_data.offset_0xdc = 2.0 / (0.0 - fVar3);
  this[1].ObjectManager_data.offset_0xe0 = 0;
  this[1].ObjectManager_data.offset_0xe4 = 0;
  this[1].ObjectManager_data.offset_0xe8 = 0;
  this[1].ObjectManager_data.offset_0xec = 0;
  this[1].ObjectManager_data.offset_0xf0 = 0xb3d6bf93;
  *(undefined4 *)&this[1].ObjectManager_data.field_0xf4 = 0;
  this[1].ObjectManager_data.offset_0xf8 = (fVar2 + 0.0) / (0.0 - fVar2);
  *(float *)&this[1].ObjectManager_data.field_0xfc = (fVar3 + 0.0) / (fVar3 - 0.0);
  this[1].ObjectManager_data.offset_0x100 = 0x33d6bf93;
  this[1].ObjectManager_data.offset_0x104 = 0x3f800000;
  piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
  (**(code **)(*piVar1 + 0x98))(piVar1,0,&this[1].ObjectManager_data.offset_0x130);
  if (((uint)(this->ObjectManager_data).offset_0x188 >> 3 & 1) != 0) {
    piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
    (**(code **)(*piVar1 + 0xac))(piVar1,0,0,6,0,0,0);
  }
  DAT_0076df44 = 1;
  return;
}


/* plasma::D3D9Engine::vfunction22 @ 00688db0  kind=game  attributed-by=rtti  size=186 */

void __thiscall plasma::D3D9Engine::vfunction22(D3D9Engine *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 local_48 [64];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar3 = this[1].ObjectManager_data.offset_0x114;
  puVar5 = &this[1].ObjectManager_data.offset_0x88;
  iVar2 = FUN_00688770(iVar3,*(undefined4 *)(iVar3 + 4),puVar5);
  iVar1 = this[1].ObjectManager_data.offset_0x118;
  if (iVar1 == 0x38e38e2) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  this[1].ObjectManager_data.offset_0x118 = iVar1 + 1;
  *(int *)(iVar3 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  if (this[1].ObjectManager_data.offset_0x118 == 0) {
    puVar4 = (undefined4 *)(*(int *)(param_1 + 0x38) + 0x1b0);
  }
  else {
    puVar4 = (undefined4 *)FUN_00424f30(local_48,*(int *)(param_1 + 0x38) + 0x1b0);
  }
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* plasma::D3D9Engine::vfunction17 @ 00688e70  kind=game  attributed-by=rtti  size=702 */

void __thiscall plasma::D3D9Engine::vfunction17(D3D9Engine *this,int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  D3D9Engine *pDVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_a8 [16];
  undefined4 local_68;
  D3D9Engine *local_64;
  undefined4 local_60;
  char local_59;
  undefined4 local_58 [16];
  float local_18 [4];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if (((param_1 == 0) || ((this->ObjectManager_data).offset_0x48 == 0)) ||
     ((iVar4 = *(int *)(param_1 + 0x3c), (*(byte *)(iVar4 + 0x200) & 1) != 0 &&
      (*(int *)(*(int *)(iVar4 + 0xec) + *(int *)(iVar4 + 0xc0) * 4) == 0)))) {
    local_59 = '\0';
  }
  else {
    local_59 = '\x01';
  }
  local_64 = this;
  FUN_00423e70();
  uVar1 = this[1].ObjectManager_data.offset_0x38;
  puVar6 = local_a8;
  puVar7 = local_58;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  FUN_004490f0();
  pDVar3 = local_64;
  piVar2 = (int *)local_64[1].ObjectManager_data.offset_0x124;
  (**(code **)(*piVar2 + 0x178))(piVar2,uVar1,local_58,2);
  if (local_59 != '\0') {
    (**(code **)(*(int *)(pDVar3->ObjectManager_data).offset_0x48 + 0x10))();
  }
  piVar2 = (int *)pDVar3[1].ObjectManager_data.offset_0x124;
  local_68 = 1;
  (**(code **)(*piVar2 + 0x1c4))
            (piVar2,*(undefined4 *)&pDVar3[1].ObjectManager_data.field_0x58,&local_68,1);
  uVar5 = 0;
  if ((param_1 != 0) &&
     (iVar4 = *(int *)(param_1 + 0x3c),
     *(int *)(*(int *)(iVar4 + 0xec) + *(int *)(iVar4 + 0xc0) * 4) != 0)) {
    if ((*(uint *)(iVar4 + 0x200) & 2) == 0) {
      uVar5 = ((int)(char)*(uint *)(iVar4 + 0x200) & 4U | 2) >> 1;
    }
    else {
      uVar5 = 2;
    }
  }
  piVar2 = (int *)pDVar3[1].ObjectManager_data.offset_0x124;
  local_18[0] = (float)uVar5;
  local_18[1] = 0.0;
  local_18[2] = 0.0;
  local_18[3] = 0.0;
  (**(code **)(*piVar2 + 0x1b4))
            (piVar2,*(undefined4 *)&pDVar3[1].ObjectManager_data.field_0x5c,local_18,1);
  piVar2 = (int *)pDVar3[1].ObjectManager_data.offset_0x124;
  local_18[0] = 1.0;
  local_18[1] = 0.0;
  local_18[2] = 0.0;
  local_18[3] = 0.0;
  (**(code **)(*piVar2 + 0x1b4))
            (piVar2,*(undefined4 *)&pDVar3[1].ObjectManager_data.field_0x60,local_18,1);
  piVar2 = (int *)pDVar3[1].ObjectManager_data.offset_0x124;
  local_18[0] = 1.0;
  local_18[1] = 0.0;
  local_18[2] = 0.0;
  local_18[3] = 0.0;
  (**(code **)(*piVar2 + 0x1b4))
            (piVar2,*(undefined4 *)&pDVar3[1].ObjectManager_data.field_0x64,local_18,1);
  piVar2 = (int *)pDVar3[1].ObjectManager_data.offset_0x124;
  local_18[0] = 1.0;
  local_18[1] = 0.0;
  local_18[2] = 0.0;
  local_18[3] = 0.0;
  (**(code **)(*piVar2 + 0x1b4))
            (piVar2,*(undefined4 *)&pDVar3[1].ObjectManager_data.field_0x68,local_18,1);
  piVar2 = (int *)pDVar3[1].ObjectManager_data.offset_0x124;
  local_18[0] = 1.0;
  local_18[1] = 0.0;
  local_18[2] = 0.0;
  local_18[3] = 0.0;
  (**(code **)(*piVar2 + 0x1b4))
            (piVar2,*(undefined4 *)&pDVar3[1].ObjectManager_data.field_0x6c,local_18,1);
  piVar2 = (int *)pDVar3[1].ObjectManager_data.offset_0x124;
  (**(code **)(*piVar2 + 0x15c))(piVar2,*(undefined4 *)&pDVar3[1].ObjectManager_data);
  piVar2 = (int *)pDVar3[1].ObjectManager_data.offset_0x124;
  (**(code **)(*piVar2 + 0x170))(piVar2,pDVar3->field2_0x194);
  piVar2 = (int *)pDVar3[1].ObjectManager_data.offset_0x124;
  (**(code **)(*piVar2 + 0x1ac))(piVar2,pDVar3[1].vftablePtr);
  piVar2 = (int *)pDVar3[1].ObjectManager_data.offset_0x124;
  local_60 = 0;
  (**(code **)(*piVar2 + 0x188))(piVar2,pDVar3[1].ObjectManager_data.offset_0x20,&local_60,1);
  piVar2 = (int *)pDVar3[1].ObjectManager_data.offset_0x124;
  local_18[0] = 1.0;
  local_18[1] = 1.0;
  local_18[2] = 1.0;
  local_18[3] = 1.0;
  (**(code **)(*piVar2 + 0x178))
            (piVar2,*(undefined4 *)&pDVar3[1].ObjectManager_data.field_0x54,local_18,1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* plasma::D3D9Engine::vfunction26 @ 00689130  kind=game  attributed-by=rtti  size=1317 */

void __thiscall
plasma::D3D9Engine::vfunction26
          (D3D9Engine *this,int *param_1,float *param_2,float *param_3,float param_4,char param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_1c;
  int local_18;
  float local_14;
  float local_10 [2];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  FUN_00653680(param_1);
  (**(code **)(*param_1 + 8))();
  if (param_5 == '\0') {
    puVar1 = &this[1].ObjectManager_data.offset_0xc8;
    this[1].ObjectManager_data.offset_0xb8 =
         (int)(float)(int)((float)this[1].ObjectManager_data.offset_0xb8 + 0.5);
    this[1].ObjectManager_data.offset_0xbc =
         (float)(int)((float)this[1].ObjectManager_data.offset_0xbc + 0.5);
    local_10[1] = (float)this[1].ObjectManager_data.offset_0x10c;
    iVar3 = FUN_00688770(local_10[1],*(undefined4 *)((int)local_10[1] + 4),puVar1);
    iVar2 = this[1].ObjectManager_data.offset_0x110;
    if (iVar2 == 0x38e38e2) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    this[1].ObjectManager_data.offset_0x110 = iVar2 + 1;
    fVar4 = *param_2;
    fVar5 = param_2[1];
    *(int *)((int)local_10[1] + 4) = iVar3;
    **(int **)(iVar3 + 4) = iVar3;
    fVar8 = *param_3 + fVar4;
    fVar6 = param_3[1] + fVar5;
    *puVar1 = 2.0 / (fVar8 - fVar4);
    this[1].ObjectManager_data.offset_0xcc = 0;
    this[1].ObjectManager_data.offset_0xd0 = 0;
    this[1].ObjectManager_data.offset_0xd4 = 0;
    this[1].ObjectManager_data.offset_0xd8 = 0;
    fVar7 = 2.0 / (fVar5 - fVar6);
    this[1].ObjectManager_data.offset_0xdc = fVar7;
    this[1].ObjectManager_data.offset_0xe0 = 0;
    this[1].ObjectManager_data.offset_0xe4 = 0;
    this[1].ObjectManager_data.offset_0xe8 = 0;
    this[1].ObjectManager_data.offset_0xec = 0;
    this[1].ObjectManager_data.offset_0xf0 = 0xb3d6bf93;
    *(undefined4 *)&this[1].ObjectManager_data.field_0xf4 = 0;
    this[1].ObjectManager_data.offset_0xf8 = (fVar4 + fVar8) / (fVar4 - fVar8);
    *(float *)&this[1].ObjectManager_data.field_0xfc = (fVar6 + fVar5) / (fVar6 - fVar5);
    this[1].ObjectManager_data.offset_0x100 = 0x33d6bf93;
    this[1].ObjectManager_data.offset_0x104 = 0x3f800000;
    if (param_4 == 1.0) goto LAB_0068964a;
    *puVar1 = (float)*puVar1 * param_4;
    this[1].ObjectManager_data.offset_0xcc = (float)this[1].ObjectManager_data.offset_0xcc * param_4
    ;
    this[1].ObjectManager_data.offset_0xd0 = (float)this[1].ObjectManager_data.offset_0xd0 * param_4
    ;
    this[1].ObjectManager_data.offset_0xd4 = (float)this[1].ObjectManager_data.offset_0xd4 * param_4
    ;
    this[1].ObjectManager_data.offset_0xd8 = (float)this[1].ObjectManager_data.offset_0xd8 * param_4
    ;
    this[1].ObjectManager_data.offset_0xdc = fVar7 * param_4;
    this[1].ObjectManager_data.offset_0xe0 = (float)this[1].ObjectManager_data.offset_0xe0 * param_4
    ;
    fVar4 = (float)this[1].ObjectManager_data.offset_0xe4;
  }
  else {
    local_10[0] = (float)this[1].ObjectManager_data.offset_0xb8 * param_4;
    local_10[1] = (float)this[1].ObjectManager_data.offset_0xbc * param_4;
    iVar2 = 0;
    do {
      iVar3 = iVar2 + 4;
      *(int *)((int)&local_18 + iVar2) = (int)*(float *)((int)local_10 + iVar2);
      iVar2 = iVar3;
    } while (iVar3 < 8);
    local_1c = local_10[0] - (float)local_18;
    local_14 = local_10[1] - (float)(int)local_14;
    if (param_4 == 1.0) {
      local_1c = 0.0;
      local_14 = 0.0;
    }
    local_10[1] = (float)this[1].ObjectManager_data.offset_0x10c;
    puVar1 = &this[1].ObjectManager_data.offset_0xc8;
    iVar3 = FUN_00688770(local_10[1],*(undefined4 *)((int)local_10[1] + 4),puVar1);
    iVar2 = this[1].ObjectManager_data.offset_0x110;
    if (iVar2 == 0x38e38e2) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    this[1].ObjectManager_data.offset_0x110 = iVar2 + 1;
    *(int *)((int)local_10[1] + 4) = iVar3;
    **(int **)(iVar3 + 4) = iVar3;
    fVar4 = (1.0 - param_4) * 0.5;
    fVar7 = *param_2 - *param_3 * fVar4;
    fVar8 = param_2[1] - param_3[1] * fVar4;
    fVar4 = *param_3 + fVar7;
    fVar5 = param_3[1] + fVar8;
    *puVar1 = 2.0 / (fVar4 - fVar7);
    this[1].ObjectManager_data.offset_0xcc = 0;
    this[1].ObjectManager_data.offset_0xd0 = 0;
    this[1].ObjectManager_data.offset_0xd4 = 0;
    this[1].ObjectManager_data.offset_0xd8 = 0;
    this[1].ObjectManager_data.offset_0xdc = 2.0 / (fVar8 - fVar5);
    this[1].ObjectManager_data.offset_0xe0 = 0;
    this[1].ObjectManager_data.offset_0xe4 = 0;
    this[1].ObjectManager_data.offset_0xe8 = 0;
    this[1].ObjectManager_data.offset_0xec = 0;
    this[1].ObjectManager_data.offset_0xf0 = 0xb3d6bf93;
    *(undefined4 *)&this[1].ObjectManager_data.field_0xf4 = 0;
    this[1].ObjectManager_data.offset_0xf8 = (fVar4 + fVar7) / (fVar7 - fVar4);
    local_1c = -local_1c;
    fVar4 = -local_14;
    *(float *)&this[1].ObjectManager_data.field_0xfc = (fVar5 + fVar8) / (fVar5 - fVar8);
    this[1].ObjectManager_data.offset_0x100 = 0x33d6bf93;
    this[1].ObjectManager_data.offset_0x104 = 0x3f800000;
    this[1].ObjectManager_data.offset_0xf8 =
         (float)*puVar1 * local_1c + (float)this[1].ObjectManager_data.offset_0xd8 * fVar4 +
         (float)this[1].ObjectManager_data.offset_0xe8 * 0.0 +
         (float)this[1].ObjectManager_data.offset_0xf8;
    *(float *)&this[1].ObjectManager_data.field_0xfc =
         (float)this[1].ObjectManager_data.offset_0xdc * fVar4 +
         (float)this[1].ObjectManager_data.offset_0xcc * local_1c +
         (float)this[1].ObjectManager_data.offset_0xec * 0.0 +
         *(float *)&this[1].ObjectManager_data.field_0xfc;
    this[1].ObjectManager_data.offset_0x100 =
         (float)this[1].ObjectManager_data.offset_0xe0 * fVar4 +
         (float)this[1].ObjectManager_data.offset_0xd0 * local_1c +
         (float)this[1].ObjectManager_data.offset_0xf0 * 0.0 +
         (float)this[1].ObjectManager_data.offset_0x100;
    this[1].ObjectManager_data.offset_0x104 =
         (float)this[1].ObjectManager_data.offset_0xe4 * fVar4 +
         (float)this[1].ObjectManager_data.offset_0xd4 * local_1c +
         *(float *)&this[1].ObjectManager_data.field_0xf4 * 0.0 +
         (float)this[1].ObjectManager_data.offset_0x104;
    if (param_4 == 1.0) goto LAB_0068964a;
    *puVar1 = param_4 * (float)*puVar1;
    this[1].ObjectManager_data.offset_0xcc = (float)this[1].ObjectManager_data.offset_0xcc * param_4
    ;
    this[1].ObjectManager_data.offset_0xd0 = (float)this[1].ObjectManager_data.offset_0xd0 * param_4
    ;
    this[1].ObjectManager_data.offset_0xd4 = (float)this[1].ObjectManager_data.offset_0xd4 * param_4
    ;
    this[1].ObjectManager_data.offset_0xd8 = (float)this[1].ObjectManager_data.offset_0xd8 * param_4
    ;
    this[1].ObjectManager_data.offset_0xdc = (float)this[1].ObjectManager_data.offset_0xdc * param_4
    ;
    this[1].ObjectManager_data.offset_0xe0 = (float)this[1].ObjectManager_data.offset_0xe0 * param_4
    ;
    fVar4 = (float)this[1].ObjectManager_data.offset_0xe4;
  }
  this[1].ObjectManager_data.offset_0xe4 = fVar4 * param_4;
LAB_0068964a:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* plasma::D3D9Engine::vfunction13 @ 00689660  kind=game  attributed-by=rtti  size=107 */

D3D9Drawing * __thiscall plasma::D3D9Engine::vfunction13(D3D9Engine *this)

{
  D3D9Drawing *pDVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f661b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pDVar1 = operator_new(0x140);
  local_8 = 0;
  if (pDVar1 != (D3D9Drawing *)0x0) {
    pDVar1 = D3D9Drawing::D3D9Drawing(pDVar1,(D3D9Drawing *)this);
    ExceptionList = local_10;
    return pDVar1;
  }
  ExceptionList = local_10;
  return (D3D9Drawing *)0;
}


/* plasma::D3D9Engine::vfunction14 @ 006896d0  kind=game  attributed-by=rtti  size=111 */

D3D9RenderSurface * __thiscall plasma::D3D9Engine::vfunction14(D3D9Engine *this,undefined4 param_1)

{
  D3D9RenderSurface *pDVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f661b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pDVar1 = operator_new(0x4c);
  local_8 = 0;
  if (pDVar1 != (D3D9RenderSurface *)0x0) {
    pDVar1 = D3D9RenderSurface::D3D9RenderSurface(pDVar1,this,(undefined1)param_1);
    ExceptionList = local_10;
    return pDVar1;
  }
  ExceptionList = local_10;
  return (D3D9RenderSurface *)0;
}


/* plasma::D3D9Engine::vfunction3 @ 00689740  kind=game  attributed-by=rtti  size=126 */

D3D9Texture * __thiscall
plasma::D3D9Engine::vfunction3
          (D3D9Engine *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4,undefined4 param_5,undefined4 param_6)

{
  D3D9Texture *pDVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f661b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pDVar1 = operator_new(0x60);
  local_8 = 0;
  if (pDVar1 != (D3D9Texture *)0x0) {
    pDVar1 = D3D9Texture::D3D9Texture
                       (pDVar1,(int)this,param_1,param_2,param_3,param_4,param_5,(char)param_6);
    ExceptionList = local_10;
    return pDVar1;
  }
  ExceptionList = local_10;
  return (D3D9Texture *)0;
}


/* plasma::D3D9Engine::vfunction4 @ 006897c0  kind=game  attributed-by=rtti  size=391 */

void __thiscall plasma::D3D9Engine::vfunction4(D3D9Engine *this,undefined4 *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  undefined4 local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  uVar2 = (int)(this->ObjectManager_data).offset_0xe4 / 500 & 0x80000001;
  bVar3 = uVar2 == 0;
  if ((int)uVar2 < 0) {
    bVar3 = (uVar2 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if (!bVar3) {
    piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
    (**(code **)(*piVar1 + 0x104))(piVar1,0,0);
    piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
    (**(code **)(*piVar1 + 0x104))(piVar1,1,0);
    piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
    (**(code **)(*piVar1 + 0x164))(piVar1,0x42);
    piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
    (**(code **)(*piVar1 + 0xe4))(piVar1,0xce,0);
    piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
    (**(code **)(*piVar1 + 0xe4))(piVar1,0xab,2);
    piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
    (**(code **)(*piVar1 + 0xe4))(piVar1,0x13,2);
    piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
    (**(code **)(*piVar1 + 0xe4))(piVar1,0x14,2);
    local_28 = *param_1;
    local_24 = (float)param_1[1];
    piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
    local_14 = *(float *)(param_2 + 4) + local_24;
    local_20 = 0;
    local_1c = 0xff000000;
    local_10 = 0;
    local_c = 0xff000000;
    local_18 = local_28;
    (**(code **)(*piVar1 + 0x14c))(piVar1,2,1,&local_28,0x10);
    piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
    (**(code **)(*piVar1 + 0xe4))(piVar1,0xab,1);
    piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
    (**(code **)(*piVar1 + 0xe4))(piVar1,0x13,5);
    piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
    (**(code **)(*piVar1 + 0xe4))(piVar1,0x14,6);
    piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
    (**(code **)(*piVar1 + 0xe4))(piVar1,0xce,1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* plasma::D3D9Engine::vfunction5 @ 00689950  kind=game  attributed-by=rtti  size=407 */

void __thiscall plasma::D3D9Engine::vfunction5(D3D9Engine *this,float *param_1,float *param_2)

{
  int *piVar1;
  float local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
  (**(code **)(*piVar1 + 0x104))(piVar1,0,0);
  piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
  (**(code **)(*piVar1 + 0x104))(piVar1,1,0);
  piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
  (**(code **)(*piVar1 + 0x164))(piVar1,0x42);
  piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
  (**(code **)(*piVar1 + 0xe4))(piVar1,0xce,0);
  piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
  (**(code **)(*piVar1 + 0xe4))(piVar1,0xab,2);
  piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
  (**(code **)(*piVar1 + 0xe4))(piVar1,0x13,2);
  piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
  (**(code **)(*piVar1 + 0xe4))(piVar1,0x14,2);
  local_48 = *param_1;
  local_44 = param_1[1];
  local_38 = local_48 + *param_2;
  piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
  local_24 = param_2[1] + local_44;
  local_40 = 0;
  local_3c = 0xff000000;
  local_30 = 0;
  local_2c = 0xff000000;
  local_20 = 0;
  local_1c = 0xff000000;
  local_10 = 0;
  local_c = 0xff000000;
  local_34 = local_44;
  local_28 = local_38;
  local_18 = local_48;
  local_14 = local_24;
  (**(code **)(*piVar1 + 0x14c))(piVar1,6,2,&local_48,0x10);
  piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
  (**(code **)(*piVar1 + 0xe4))(piVar1,0xab,1);
  piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
  (**(code **)(*piVar1 + 0xe4))(piVar1,0x13,5);
  piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
  (**(code **)(*piVar1 + 0xe4))(piVar1,0x14,6);
  piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
  (**(code **)(*piVar1 + 0xe4))(piVar1,0xce,1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* plasma::D3D9Engine::vfunction6 @ 00689af0  kind=game  attributed-by=rtti  size=594 */

void __thiscall
plasma::D3D9Engine::vfunction6
          (D3D9Engine *this,float *param_1,float *param_2,float *param_3,float *param_4,
          undefined4 *param_5)

{
  float fVar1;
  int *piVar2;
  float local_c8;
  float local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if ((this[1].ObjectManager_data.offset_0x128 != 0) &&
     (this[1].ObjectManager_data.offset_0x12c != 0)) {
    fVar1 = param_1[1];
    local_c4 = fVar1 + 0.0;
    local_c8 = *param_1 + 0.0;
    local_b8 = param_5[2];
    local_9c = param_3[1];
    local_c0 = *param_5;
    local_a0 = *param_3;
    local_bc = param_5[1];
    local_98 = *param_2 + *param_1 + 0.0;
    local_94 = fVar1 + 0.0;
    local_b4 = param_5[3];
    local_90 = *param_5;
    local_8c = param_5[1];
    local_70 = local_a0 + *param_4;
    local_64 = param_2[1] + fVar1 + 0.0;
    local_68 = *param_2 + *param_1 + 0.0;
    local_5c = param_5[1];
    local_60 = *param_5;
    local_3c = param_4[1] + local_9c;
    local_38 = *param_1 + 0.0;
    local_58 = param_5[2];
    local_b0 = 0;
    local_ac = 0;
    local_a8 = 0;
    local_a4 = 0;
    local_80 = 0;
    local_7c = 0;
    local_78 = 0;
    local_74 = 0;
    local_50 = 0;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    local_34 = param_2[1] + fVar1 + 0.0;
    local_30 = *param_5;
    piVar2 = (int *)this[1].ObjectManager_data.offset_0x124;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    local_88 = local_b8;
    local_84 = local_b4;
    local_6c = local_9c;
    local_54 = local_b4;
    local_40 = local_70;
    local_2c = local_5c;
    local_28 = local_58;
    local_24 = local_b4;
    local_10 = local_a0;
    local_c = local_3c;
    (**(code **)(*piVar2 + 0x14c))(piVar2,6,2,&local_c8,0x30);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* plasma::D3D9Engine::vfunction7 @ 00689d50  kind=game  attributed-by=rtti  size=478 */

void __thiscall
plasma::D3D9Engine::vfunction7(D3D9Engine *this,float *param_1,float *param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 local_d0;
  undefined4 local_cc;
  float local_c8;
  float local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  float local_98;
  float local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  float local_68;
  float local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  float local_38;
  float local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
  local_d0 = 0;
  (**(code **)(*piVar1 + 0x1c4))
            (piVar1,*(undefined4 *)&this[1].ObjectManager_data.field_0x58,&local_d0,1);
  piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
  local_cc = 0;
  (**(code **)(*piVar1 + 0x188))(piVar1,this[1].ObjectManager_data.offset_0x20,&local_cc,1);
  local_c8 = *param_1;
  local_c4 = param_1[1];
  local_c0 = *param_3;
  local_bc = param_3[1];
  local_b8 = param_3[2];
  local_b4 = param_3[3];
  piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
  local_98 = *param_2 + local_c8;
  local_64 = param_2[1] + local_c4;
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0;
  local_a4 = 0;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_94 = local_c4;
  local_90 = local_c0;
  local_8c = local_bc;
  local_88 = local_b8;
  local_84 = local_b4;
  local_68 = local_98;
  local_60 = local_c0;
  local_5c = local_bc;
  local_58 = local_b8;
  local_54 = local_b4;
  local_38 = local_c8;
  local_34 = local_64;
  local_30 = local_c0;
  local_2c = local_bc;
  local_28 = local_b8;
  local_24 = local_b4;
  (**(code **)(*piVar1 + 0x14c))(piVar1,6,2,&local_c8,0x30);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* plasma::D3D9Engine::vfunction21 @ 0068a250  kind=game  attributed-by=rtti  size=13 */

void __thiscall plasma::D3D9Engine::vfunction21(D3D9Engine *this)

{
  int *piVar1;
  
  piVar1 = (int *)this[1].ObjectManager_data.offset_0x130;
  (**(code **)(*piVar1 + 8))(piVar1);
  return;
}


/* plasma::D3D9Engine::vfunction23 @ 0068a260  kind=game  attributed-by=rtti  size=73 */

void __thiscall plasma::D3D9Engine::vfunction23(D3D9Engine *this)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (this[1].ObjectManager_data.offset_0x118 != 0) {
    piVar1 = (int *)this[1].ObjectManager_data.offset_0x114;
    puVar4 = (undefined4 *)(piVar1[1] + 8);
    puVar5 = &this[1].ObjectManager_data.offset_0x88;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    piVar2 = (int *)piVar1[1];
    if (piVar2 != piVar1) {
      *(int *)piVar2[1] = *piVar2;
      *(int *)(*piVar2 + 4) = piVar2[1];
                    /* WARNING: Subroutine does not return */
      operator_delete(piVar2);
    }
  }
  return;
}


/* plasma::D3D9Engine::deleting_destructor @ 0068a2c0  kind=game  attributed-by=rtti  size=92 */

void __thiscall plasma::D3D9Engine::deleting_destructor(D3D9Engine *this)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  (**(code **)(**(int **)(*(int *)((this->ObjectManager_data).offset_0x4c + 4) + 8) + 0xc))();
  ~D3D9Engine(this);
  if (this[1].ObjectManager_data.offset_0x110 != 0) {
    piVar1 = (int *)this[1].ObjectManager_data.offset_0x10c;
    puVar4 = (undefined4 *)(piVar1[1] + 8);
    puVar5 = &this[1].ObjectManager_data.offset_0xc8;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    piVar2 = (int *)piVar1[1];
    if (piVar2 != piVar1) {
      *(int *)piVar2[1] = *piVar2;
      *(int *)(*piVar2 + 4) = piVar2[1];
                    /* WARNING: Subroutine does not return */
      operator_delete(piVar2);
    }
  }
  return;
}


/* plasma::D3D9Engine::vfunction15 @ 0068a330  kind=game  attributed-by=rtti  size=27 */

void __thiscall plasma::D3D9Engine::vfunction15(D3D9Engine *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &this[1].ObjectManager_data.offset_0x88;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


/* plasma::D3D9Engine::vfunction2 @ 0068a350  kind=game  attributed-by=rtti  size=860 */

void __thiscall plasma::D3D9Engine::vfunction2(D3D9Engine *this)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *local_3c;
  undefined4 local_38;
  undefined2 local_34;
  undefined4 local_32;
  undefined4 local_2e;
  undefined4 local_2a;
  undefined4 local_26;
  undefined4 local_22;
  undefined4 local_1e;
  undefined4 local_1a;
  undefined4 local_16;
  undefined4 local_12;
  undefined4 local_e;
  undefined2 local_a;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  *(undefined4 *)&this[1].ObjectManager_data = 0;
  local_38 = 0;
  local_32 = 0;
  local_a = 0;
  piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
  local_34 = 1;
  local_2e = 0x30008;
  local_2a = 10;
  local_26 = 0x10018;
  local_22 = 5;
  local_1e = 0x10020;
  local_1a = 0x105;
  local_16 = 0x10028;
  local_12 = 0xff0205;
  local_e = 0x110000;
  iVar2 = (**(code **)(*piVar1 + 0x158))(piVar1,&local_38,&this[1].ObjectManager_data);
  if (iVar2 == 0) {
    piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
    iVar2 = (**(code **)(*piVar1 + 0x16c))(piVar1,&DAT_00720558,&this->field2_0x194);
    if (iVar2 == 0) {
      piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
      iVar2 = (**(code **)(*piVar1 + 0x1a8))(piVar1,&DAT_00720e28,this + 1);
      if (iVar2 == 0) {
        piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
        iVar2 = (**(code **)(*piVar1 + 0x16c))
                          (piVar1,&DAT_007212c0,&this[1].ObjectManager_data.offset_0x4);
        if (iVar2 == 0) {
          piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
          iVar2 = (**(code **)(*piVar1 + 0x1a8))
                            (piVar1,&DAT_00721420,&this[1].ObjectManager_data.offset_0x8);
          if (iVar2 == 0) {
            piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
            iVar2 = (**(code **)(*piVar1 + 0x1a8))
                              (piVar1,&DAT_00721530,&this[1].ObjectManager_data.field_0xc);
            if (iVar2 == 0) {
              piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
              iVar2 = (**(code **)(*piVar1 + 0x1a8))
                                (piVar1,&DAT_00721778,&this[1].ObjectManager_data.offset_0x10);
              if (iVar2 == 0) {
                piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
                iVar2 = (**(code **)(*piVar1 + 0x1a8))
                                  (piVar1,&DAT_00721a98,&this[1].ObjectManager_data.offset_0x14);
                if (iVar2 == 0) {
                  piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
                  iVar2 = (**(code **)(*piVar1 + 0x1a8))
                                    (piVar1,&DAT_00722270,&this[1].ObjectManager_data.offset_0x18);
                  if (iVar2 == 0) {
                    piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
                    iVar2 = (**(code **)(*piVar1 + 0x1a8))
                                      (piVar1,&DAT_00721f00,&this[1].ObjectManager_data.offset_0x1c)
                    ;
                    if (iVar2 == 0) {
                      piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
                      this[1].ObjectManager_data.offset_0x20 = 0;
                      this[1].ObjectManager_data.offset_0x24 = 0;
                      *(undefined4 *)&this[1].ObjectManager_data.field_0x58 = 0;
                      *(undefined4 *)&this[1].ObjectManager_data.field_0x5c = 0;
                      this[1].ObjectManager_data.offset_0x70 = 0;
                      this[1].ObjectManager_data.offset_0x74 = 0;
                      this[1].ObjectManager_data.offset_0x78 = 0;
                      this[1].ObjectManager_data.offset_0x7c = 0;
                      this[1].ObjectManager_data.offset_0x80 = 0;
                      this[1].ObjectManager_data.offset_0x84 = 0;
                      this[1].ObjectManager_data.offset_0x28 = 4;
                      this[1].ObjectManager_data.offset_0x2c = 8;
                      this[1].ObjectManager_data.offset_0x30 = 0xc;
                      this[1].ObjectManager_data.offset_0x34 = 0x10;
                      this[1].ObjectManager_data.offset_0x38 = 0x12;
                      this[1].ObjectManager_data.offset_0x3c = 0x14;
                      this[1].ObjectManager_data.offset_0x40 = 0x16;
                      this[1].ObjectManager_data.offset_0x44 = 0x17;
                      this[1].ObjectManager_data.offset_0x48 = 0x18;
                      this[1].ObjectManager_data.offset_0x4c = 0x19;
                      this[1].ObjectManager_data.offset_0x50 = 0x1a;
                      *(undefined4 *)&this[1].ObjectManager_data.field_0x54 = 0x1b;
                      *(undefined4 *)&this[1].ObjectManager_data.field_0x60 = 1;
                      *(undefined4 *)&this[1].ObjectManager_data.field_0x64 = 2;
                      *(undefined4 *)&this[1].ObjectManager_data.field_0x68 = 3;
                      *(undefined4 *)&this[1].ObjectManager_data.field_0x6c = 4;
                      iVar2 = (**(code **)(*piVar1 + 0x68))
                                        (piVar1,0xc0,0x208,0,0,
                                         &this[1].ObjectManager_data.offset_0x128,0);
                      if (iVar2 == 0) {
                        piVar1 = (int *)this[1].ObjectManager_data.offset_0x124;
                        puVar3 = &this[1].ObjectManager_data.offset_0x12c;
                        iVar2 = (**(code **)(*piVar1 + 0x6c))(piVar1,0x18,8,0x66,1,puVar3,0);
                        if (iVar2 == 0) {
                          (**(code **)(*(int *)*puVar3 + 0x2c))
                                    ((int *)*puVar3,0,0x18,&local_3c,0x2000);
                          *local_3c = 0;
                          local_3c[1] = 1;
                          local_3c[2] = 2;
                          local_3c[3] = 2;
                          local_3c[4] = 3;
                          local_3c[5] = 0;
                          (**(code **)(*(int *)*puVar3 + 0x30))((int *)*puVar3);
                          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* plasma::D3D9Engine::vfunction16 @ 0068a7e0  kind=game  attributed-by=rtti  size=27 */

void __thiscall plasma::D3D9Engine::vfunction16(D3D9Engine *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &this[1].ObjectManager_data.offset_0x88;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}


/* plasma::D3D9Engine::vfunction19 @ 0068a800  kind=game  attributed-by=rtti  size=265 */

void __thiscall plasma::D3D9Engine::vfunction19(D3D9Engine *this)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_88 [16];
  undefined4 local_48 [16];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  uVar1 = this[1].ObjectManager_data.offset_0x24;
  puVar4 = &this[1].ObjectManager_data.offset_0xc8;
  puVar5 = local_48;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_004490f0();
  piVar2 = (int *)this[1].ObjectManager_data.offset_0x124;
  (**(code **)(*piVar2 + 0x178))(piVar2,uVar1,local_48,4);
  uVar1 = this[1].ObjectManager_data.offset_0x28;
  puVar4 = &this[1].ObjectManager_data.offset_0x88;
  puVar5 = local_48;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_004490f0();
  piVar2 = (int *)this[1].ObjectManager_data.offset_0x124;
  (**(code **)(*piVar2 + 0x178))(piVar2,uVar1,local_48,4);
  puVar4 = &this[1].ObjectManager_data.offset_0x88;
  puVar5 = local_48;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_0058c440();
  FUN_004490f0();
  uVar1 = this[1].ObjectManager_data.offset_0x3c;
  puVar4 = local_48;
  puVar5 = local_88;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_004490f0();
  piVar2 = (int *)this[1].ObjectManager_data.offset_0x124;
  (**(code **)(*piVar2 + 0x178))(piVar2,uVar1,local_88,2);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


