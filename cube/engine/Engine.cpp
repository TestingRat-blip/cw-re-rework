// Engine (engine) -- cube. 5 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Engine.h"

/* plasma::Engine::Engine @ 0064d0f0  kind=game  attributed-by=rtti  size=1649 */

void __thiscall plasma::Engine::Engine(Engine *this)

{
  uint *puVar1;
  void *pvVar2;
  undefined4 uVar3;
  FontEngine *pFVar4;
  int iVar5;
  undefined4 local_2c;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f6299;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
                    /* inlined constructor: plasma::ObjectManager::ObjectManager */
  this->vftablePtr = (Engine_vftable *)&ObjectManager::vftable;
  (this->ObjectManager_data).offset_0x0 = 0;
  (this->ObjectManager_data).offset_0x4 = (void *)0x0;
  (this->ObjectManager_data).offset_0x8 = 0;
  pvVar2 = (void *)FUN_0046d550(0,0);
  (this->ObjectManager_data).offset_0x4 = pvVar2;
  this->vftablePtr = &vftable;
  (this->ObjectManager_data).offset_0x10 = 0x447a0000;
  (this->ObjectManager_data).offset_0x14 = 0x447a0000;
  (this->ObjectManager_data).offset_0x18 = 0x42900000;
  (this->ObjectManager_data).offset_0x1c = 0;
  (this->ObjectManager_data).offset_0x20 = 0x3f800000;
  (this->ObjectManager_data).offset_0x24 = 0x3f800000;
  (this->ObjectManager_data).offset_0x28 = 0x3f800000;
  (this->ObjectManager_data).offset_0x2c = 0;
  (this->ObjectManager_data).offset_0x34 = 0;
  (this->ObjectManager_data).offset_0x38 = 0;
  (this->ObjectManager_data).offset_0x3c = 0;
  (this->ObjectManager_data).offset_0x40 = 0;
  (this->ObjectManager_data).offset_0x44 = 0xffffffff;
  (this->ObjectManager_data).offset_0x48 = 0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  (this->ObjectManager_data).offset_0x4c = 0;
  (this->ObjectManager_data).offset_0x50 = 0;
  uVar3 = FUN_0046d550(0,0);
  (this->ObjectManager_data).offset_0x4c = uVar3;
  local_8._0_1_ = 2;
  (this->ObjectManager_data).offset_0x70 = 0;
  (this->ObjectManager_data).offset_0x74 = 0;
  uVar3 = FUN_0046d550(0,0);
  (this->ObjectManager_data).offset_0x70 = uVar3;
  local_8._0_1_ = 3;
  (this->ObjectManager_data).offset_0x78 = 0;
  (this->ObjectManager_data).offset_0x7c = 0;
  uVar3 = FUN_0046d550(0,0);
  (this->ObjectManager_data).offset_0x78 = uVar3;
  local_8._0_1_ = 4;
  (this->ObjectManager_data).offset_0x80 = 0;
  (this->ObjectManager_data).offset_0x84 = 0;
  uVar3 = FUN_0046d550(0,0);
  (this->ObjectManager_data).offset_0x80 = uVar3;
  local_8._0_1_ = 5;
  (this->ObjectManager_data).offset_0x88 = 0;
  (this->ObjectManager_data).offset_0x8c = 0;
  uVar3 = FUN_0046d550(0,0);
  (this->ObjectManager_data).offset_0x88 = uVar3;
  local_8._0_1_ = 6;
  (this->ObjectManager_data).offset_0x90 = 0;
  (this->ObjectManager_data).offset_0x94 = 0;
  uVar3 = FUN_0046d550(0,0);
  (this->ObjectManager_data).offset_0x90 = uVar3;
  local_8._0_1_ = 7;
  (this->ObjectManager_data).offset_0x98 = 0;
  (this->ObjectManager_data).offset_0x9c = 0;
  uVar3 = FUN_0046d550(0,0);
  (this->ObjectManager_data).offset_0x98 = uVar3;
  local_8._0_1_ = 8;
  (this->ObjectManager_data).offset_0xa0 = 0;
  (this->ObjectManager_data).offset_0xa4 = 0;
  uVar3 = FUN_0046d550(0,0);
  (this->ObjectManager_data).offset_0xa0 = uVar3;
  local_8._0_1_ = 9;
  (this->ObjectManager_data).offset_0xa8 = 0;
  (this->ObjectManager_data).offset_0xac = 0;
  uVar3 = FUN_0064e370();
  (this->ObjectManager_data).offset_0xa8 = uVar3;
  (this->ObjectManager_data).offset_0xbc = 0;
  (this->ObjectManager_data).offset_0xc0 = 0;
  (this->ObjectManager_data).offset_0xc4 = 0;
  (this->ObjectManager_data).offset_0xc8 = 0;
  (this->ObjectManager_data).offset_0xcc = 0;
  (this->ObjectManager_data).offset_0xd0 = 0;
  (this->ObjectManager_data).offset_0xd4 = 0;
  (this->ObjectManager_data).offset_0xd8 = 0;
  (this->ObjectManager_data).offset_0xdc = 0;
  (this->ObjectManager_data).offset_0xe0 = 0;
  (this->ObjectManager_data).offset_0xe4 = 0;
  local_8._0_1_ = 10;
  (this->ObjectManager_data).offset_0xe8 = 0;
  (this->ObjectManager_data).offset_0xec = 0;
  uVar3 = FUN_0064e3a0();
  (this->ObjectManager_data).offset_0xe8 = uVar3;
  (this->ObjectManager_data).offset_0xf0 = 0;
  (this->ObjectManager_data).offset_0xf8 = 0;
  (this->ObjectManager_data).offset_0x100 = 0;
  (this->ObjectManager_data).offset_0x104 = 0;
  (this->ObjectManager_data).offset_0x108 = 1000;
  (this->ObjectManager_data).offset_0x10c = 800;
  (this->ObjectManager_data).offset_0x110 = 0;
  (this->ObjectManager_data).offset_0x114 = 0;
  local_8._0_1_ = 0xb;
  (this->ObjectManager_data).offset_0x118 = 0;
  (this->ObjectManager_data).offset_0x11c = 0;
  uVar3 = FUN_0064e370();
  (this->ObjectManager_data).offset_0x118 = uVar3;
  local_8._0_1_ = 0xc;
  (this->ObjectManager_data).offset_0x120 = 0;
  (this->ObjectManager_data).offset_0x124 = 0;
  uVar3 = FUN_00439600(0,0);
  (this->ObjectManager_data).offset_0x120 = uVar3;
  local_8._0_1_ = 0xd;
  (this->ObjectManager_data).offset_0x128 = 0;
  (this->ObjectManager_data).offset_0x12c = 0;
  uVar3 = FUN_0043c870();
  (this->ObjectManager_data).offset_0x128 = uVar3;
  local_8._0_1_ = 0xe;
  (this->ObjectManager_data).offset_0x130 = 0;
  (this->ObjectManager_data).offset_0x134 = 0;
  uVar3 = FUN_0043c870();
  (this->ObjectManager_data).offset_0x130 = uVar3;
  local_8._0_1_ = 0xf;
  (this->ObjectManager_data).offset_0x138 = 0;
  (this->ObjectManager_data).offset_0x13c = 0;
  uVar3 = FUN_00439600(0,0);
  (this->ObjectManager_data).offset_0x138 = uVar3;
  local_8._0_1_ = 0x10;
  (this->ObjectManager_data).offset_0x140 = 0;
  (this->ObjectManager_data).offset_0x144 = 0;
  uVar3 = FUN_0046d590(0,0);
  (this->ObjectManager_data).offset_0x140 = uVar3;
  local_8._0_1_ = 0x11;
  (this->ObjectManager_data).offset_0x148 = 0;
  (this->ObjectManager_data).offset_0x14c = 0;
  uVar3 = FUN_0046d590(0,0);
  (this->ObjectManager_data).offset_0x148 = uVar3;
  local_8._0_1_ = 0x12;
  (this->ObjectManager_data).offset_0x150 = 0;
  (this->ObjectManager_data).offset_0x154 = 0;
  uVar3 = FUN_0046d590(0,0);
  (this->ObjectManager_data).offset_0x150 = uVar3;
  (this->ObjectManager_data).offset_0x158 = 0x3f800000;
  (this->ObjectManager_data).offset_0x15c = 0x3f800000;
  (this->ObjectManager_data).offset_0x160 = 0x3f800000;
  (this->ObjectManager_data).offset_0x164 = 0x3f800000;
  (this->ObjectManager_data).offset_0x168 = 0x3f800000;
  (this->ObjectManager_data).offset_0x16c = 0x3f800000;
  (this->ObjectManager_data).offset_0x170 = 0x3f800000;
  (this->ObjectManager_data).offset_0x174 = 0x3f800000;
  (this->ObjectManager_data).offset_0x178 = 0x3f800000;
  (this->ObjectManager_data).offset_0x17c = 0x3f800000;
  (this->ObjectManager_data).offset_0x180 = 0x3f800000;
  (this->ObjectManager_data).offset_0x184 = 0x3f800000;
  local_8._0_1_ = 0x13;
  (this->ObjectManager_data).offset_0x188 = 7;
  (this->ObjectManager_data).offset_0x18c = 1;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->ObjectManager_data).field_0x54,0x80000400);
  pFVar4 = operator_new(0x3c);
  local_8._0_1_ = 0x14;
  if (pFVar4 == (FontEngine *)0x0) {
    pFVar4 = (FontEngine *)0x0;
  }
  else {
    pFVar4 = FontEngine::FontEngine(pFVar4,this);
  }
  (this->ObjectManager_data).offset_0x30 = pFVar4;
  local_8._0_1_ = 0x13;
  FUN_0068e900(&(this->ObjectManager_data).field_0x6c);
  local_18 = 7;
  local_1c = 0;
  local_2c = (void *)((uint)local_2c._2_2_ << 0x10);
  FUN_0040f7a0(L"root",4);
  local_8._0_1_ = 0x15;
  uVar3 = FUN_0064f4e0(0,0,0,0,&local_2c);
  (this->ObjectManager_data).offset_0xb0 = uVar3;
  local_8._0_1_ = 0x13;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  local_18 = 7;
  local_1c = 0;
  local_2c = (void *)((uint)local_2c & 0xffff0000);
  FUN_0040f7a0(L"sources",7);
  local_8._0_1_ = 0x16;
  iVar5 = FUN_0064f4e0(0,0,0,0,&local_2c);
  (this->ObjectManager_data).offset_0xb4 = iVar5;
  local_8._0_1_ = 0x13;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  puVar1 = (uint *)((this->ObjectManager_data).offset_0xb4 + 200);
  *puVar1 = *puVar1 | 8;
  local_18 = 7;
  local_1c = 0;
  local_2c = (void *)((uint)local_2c & 0xffff0000);
  FUN_0040f7a0(L"fonts",5);
  local_8 = CONCAT31(local_8._1_3_,0x17);
  iVar5 = FUN_0064f4e0(0,0,0,0,&local_2c);
  (this->ObjectManager_data).offset_0xb8 = iVar5;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  puVar1 = (uint *)((this->ObjectManager_data).offset_0xb8 + 200);
  *puVar1 = *puVar1 | 8;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* plasma::Engine::~Engine @ 0064d840  kind=game  attributed-by=rtti  size=208 */

void __thiscall plasma::Engine::~Engine(Engine *this)

{
  undefined4 *puVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f63f6;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  puVar1 = (undefined4 *)(this->ObjectManager_data).offset_0x30;
  local_8 = 0x13;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1,uVar3);
  }
  FUN_0068e950(*(undefined4 *)&(this->ObjectManager_data).field_0x6c);
  iVar4 = 0;
  if (0 < (int)((this->ObjectManager_data).offset_0x38 - (this->ObjectManager_data).offset_0x34 &
               0xfffffffc)) {
    do {
      puVar1 = *(undefined4 **)((this->ObjectManager_data).offset_0x34 + iVar4 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)((this->ObjectManager_data).offset_0x38 -
                          (this->ObjectManager_data).offset_0x34) >> 2);
  }
  puVar1 = (undefined4 *)(this->ObjectManager_data).offset_0x40;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->ObjectManager_data).field_0x54);
  puVar1 = (undefined4 *)(this->ObjectManager_data).offset_0x150;
  pvVar2 = (void *)*puVar1;
  *puVar1 = puVar1;
  iVar4 = (this->ObjectManager_data).offset_0x150;
  *(int *)(iVar4 + 4) = iVar4;
  (this->ObjectManager_data).offset_0x154 = 0;
  if (pvVar2 != (void *)(this->ObjectManager_data).offset_0x150) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar2);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)(this->ObjectManager_data).offset_0x150);
}


/* plasma::Engine::deleting_destructor @ 0064e2b0  kind=game  attributed-by=rtti  size=30 */

Engine * __thiscall plasma::Engine::deleting_destructor(Engine *this,byte param_1)

{
  ~Engine(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


/* plasma::Engine::vfunction14 @ 00650150  kind=game  attributed-by=rtti  size=5 */

undefined4 __thiscall plasma::Engine::vfunction14(void)

{
  return 0;
}


/* plasma::Engine::vfunction28 @ 006509d0  kind=game  attributed-by=rtti  size=3 */

/* plasma::Engine member function inherited by plasma::D3D9Engine */

void __thiscall plasma::Engine::vfunction28(void)

{
  return;
}


