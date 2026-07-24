// XAudio2Engine (audio) -- cube. 11 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "XAudio2Engine.h"

/* cube::XAudio2Engine::XAudio2Engine @ 00622da0  kind=game  attributed-by=rtti  size=320 */

void __thiscall cube::XAudio2Engine::XAudio2Engine(XAudio2Engine *this)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  void *pvVar4;
  Database *this_00;
  Database *pDVar5;
  undefined4 extraout_EDX;
  XAudio2Engine *pXVar6;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f5334;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  (this->XAudio2Engine_data).offset_0x0 = (int *)0x0;
  (this->XAudio2Engine_data).offset_0x4 = (int *)0x0;
  (this->XAudio2Engine_data).offset_0x8 = 0;
  (this->XAudio2Engine_data).offset_0xc = 0;
  pXVar6 = this;
  local_14 = uVar1;
  uVar2 = FUN_0046d550(0,0);
  (this->XAudio2Engine_data).offset_0x8 = uVar2;
  local_8 = 0;
  (this->XAudio2Engine_data).offset_0x10 = (int *)0x0;
  (this->XAudio2Engine_data).offset_0x14 = 0;
  piVar3 = (int *)FUN_0043c870(uVar1);
  (this->XAudio2Engine_data).offset_0x10 = piVar3;
  local_8._0_1_ = 1;
  (this->XAudio2Engine_data).offset_0x18 = (void *)0x0;
  (this->XAudio2Engine_data).offset_0x1c = 0;
  pvVar4 = (void *)FUN_0064e370();
  (this->XAudio2Engine_data).offset_0x18 = pvVar4;
  local_8._0_1_ = 2;
  (this->XAudio2Engine_data).offset_0x20 = (undefined4 *)0x0;
  (this->XAudio2Engine_data).offset_0x24 = (undefined4 *)0x0;
  (this->XAudio2Engine_data).offset_0x28 = (undefined4 *)0x0;
  (this->XAudio2Engine_data).offset_0x2c = 0;
  this_00 = operator_new(8);
  local_8._0_1_ = 3;
  if (this_00 == (Database *)0x0) {
    pDVar5 = (Database *)0x0;
  }
  else {
    pDVar5 = Database::Database(this_00);
  }
  local_8._0_1_ = 2;
  (this->XAudio2Engine_data).offset_0x28 = &pDVar5->vftablePtr;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_0040c280("data2.db",8);
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_004497b0(local_2c);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc,extraout_EDX,pXVar6,this_00);
  return;
}


/* cube::XAudio2Engine::~XAudio2Engine @ 00622ef0  kind=game  attributed-by=rtti  size=251 */

void __thiscall cube::XAudio2Engine::~XAudio2Engine(XAudio2Engine *this)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  undefined1 local_18 [4];
  XAudio2Engine *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f5381;
  local_10 = ExceptionList;
  uVar5 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  local_8 = 2;
  local_14 = this;
  vfunction1(this);
  piVar2 = (this->XAudio2Engine_data).offset_0x10;
  piVar6 = (int *)*piVar2;
  if (piVar6 != piVar2) {
    do {
      if ((undefined4 *)piVar6[5] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar6[5])(1,uVar5);
      }
      if (*(char *)((int)piVar6 + 0xd) == '\0') {
        piVar2 = (int *)piVar6[2];
        if (*(char *)((int)piVar2 + 0xd) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0xd);
          piVar6 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0xd);
            piVar6 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar6[1] + 0xd);
          piVar4 = (int *)piVar6[1];
          piVar2 = piVar6;
          while ((piVar6 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar6[2]))) {
            cVar1 = *(char *)(piVar6[1] + 0xd);
            piVar4 = (int *)piVar6[1];
            piVar2 = piVar6;
          }
        }
      }
    } while (piVar6 != (this->XAudio2Engine_data).offset_0x10);
  }
  puVar3 = (this->XAudio2Engine_data).offset_0x20;
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  puVar3 = (this->XAudio2Engine_data).offset_0x24;
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  piVar2 = (this->XAudio2Engine_data).offset_0x4;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x48))(piVar2);
  }
  piVar2 = (this->XAudio2Engine_data).offset_0x0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  puVar3 = (this->XAudio2Engine_data).offset_0x28;
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  puVar3 = (this->XAudio2Engine_data).offset_0x18;
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_0040c790(local_18,*puVar3,puVar3);
                    /* WARNING: Subroutine does not return */
  operator_delete((this->XAudio2Engine_data).offset_0x18);
}


/* cube::XAudio2Engine::deleting_destructor @ 006230d0  kind=game  attributed-by=rtti  size=30 */

XAudio2Engine * __thiscall
cube::XAudio2Engine::deleting_destructor(XAudio2Engine *this,byte param_1)

{
  ~XAudio2Engine(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


/* cube::XAudio2Engine::vfunction1 @ 00623410  kind=game  attributed-by=rtti  size=247 */

void __thiscall cube::XAudio2Engine::vfunction1(XAudio2Engine *this)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined1 local_2c [4];
  int local_28;
  undefined4 *local_1c;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f53a8;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = 0;
  puVar4 = (undefined4 *)FUN_0046d550(0,0);
  piVar1 = (int *)(this->XAudio2Engine_data).offset_0x8;
  local_8 = 0;
  piVar6 = (int *)*piVar1;
  local_1c = puVar4;
  local_14 = piVar6;
  if (piVar6 != piVar1) {
    do {
      local_14 = piVar6;
      (**(code **)(*(int *)piVar6[2] + 100))((int *)piVar6[2],local_2c,uVar3);
      if (local_28 == 0) {
        (**(code **)(*(int *)piVar6[2] + 0x48))((int *)piVar6[2]);
        iVar5 = FUN_00583cb0(puVar4,puVar4[1],&local_14);
        if (local_18 == 0x15555554) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("list<T> too long");
        }
        puVar4[1] = iVar5;
        local_18 = local_18 + 1;
        **(int **)(iVar5 + 4) = iVar5;
      }
      piVar6 = (int *)*piVar6;
      local_14 = piVar6;
    } while (piVar6 != (int *)(this->XAudio2Engine_data).offset_0x8);
  }
  for (puVar2 = (undefined4 *)*puVar4; puVar2 != puVar4; puVar2 = (undefined4 *)*puVar2) {
    piVar1 = (int *)puVar2[2];
    if (piVar1 != (int *)(this->XAudio2Engine_data).offset_0x8) {
      *(int *)piVar1[1] = *piVar1;
      *(int *)(*piVar1 + 4) = piVar1[1];
                    /* WARNING: Subroutine does not return */
      operator_delete(piVar1);
    }
  }
  puVar2 = (undefined4 *)*puVar4;
  *puVar4 = puVar4;
  puVar4[1] = puVar4;
  if (puVar2 != puVar4) {
                    /* WARNING: Subroutine does not return */
    operator_delete(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(puVar4);
}


/* cube::XAudio2Engine::vfunction5 @ 00623600  kind=game  attributed-by=rtti  size=10 */

undefined4 __thiscall cube::XAudio2Engine::vfunction5(XAudio2Engine *this)

{
  undefined4 *puVar1;
  
  puVar1 = (this->XAudio2Engine_data).offset_0x20;
  return CONCAT31((int3)((uint)puVar1 >> 8),*(undefined1 *)(puVar1 + 0x78004));
}


/* cube::XAudio2Engine::vfunction7 @ 00623610  kind=game  attributed-by=rtti  size=241 */

void __thiscall
cube::XAudio2Engine::vfunction7
          (XAudio2Engine *this,int *param_1,float param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if (0.0 < param_2) {
    piVar3 = (int *)FUN_00468910(&param_1);
    iVar1 = *piVar3;
    if (iVar1 != 0) {
      piVar3 = (this->XAudio2Engine_data).offset_0x0;
      param_1 = (int *)0x0;
      (**(code **)(*piVar3 + 0x20))(piVar3,&param_1,iVar1 + 4,0,0x40000000,0,0,0);
      (**(code **)(*param_1 + 0x30))(param_1,param_2,0);
      (**(code **)(*param_1 + 0x54))(param_1,iVar1 + 0x2c,0);
      (**(code **)(*param_1 + 0x4c))(param_1,0,0);
      (**(code **)(*param_1 + 0x30))(param_1,param_2,0);
      (**(code **)(*param_1 + 0x68))(param_1,param_4,0);
      iVar1 = (this->XAudio2Engine_data).offset_0x8;
      iVar4 = FUN_00583cb0(iVar1,*(undefined4 *)(iVar1 + 4),&param_1);
      iVar2 = (this->XAudio2Engine_data).offset_0xc;
      if (iVar2 == 0x15555554) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("list<T> too long");
      }
      (this->XAudio2Engine_data).offset_0xc = iVar2 + 1;
      *(int *)(iVar1 + 4) = iVar4;
      **(int **)(iVar4 + 4) = iVar4;
    }
  }
  return;
}


/* cube::XAudio2Engine::vfunction2 @ 00623980  kind=game  attributed-by=rtti  size=122 */

void __thiscall
cube::XAudio2Engine::vfunction2
          (XAudio2Engine *this,undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  
  if (*(int *)(param_2 + 0x10) == 0) {
    puVar1 = (this->XAudio2Engine_data).offset_0x24;
    piVar2 = (int *)puVar1[0x78003];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x50))(piVar2,0,0);
      FUN_00625a60(puVar1 + 0x78008);
      *(undefined1 *)(puVar1 + 0x78004) = 0;
      *(undefined2 *)((int)puVar1 + 0x1e0012) = 0;
      FUN_00623710(param_1,param_3);
      return;
    }
  }
  else {
    FUN_00623710(param_2,param_3);
  }
  FUN_00623710(param_1,param_3);
  return;
}


/* cube::XAudio2Engine::vfunction6 @ 00623a00  kind=game  attributed-by=rtti  size=91 */

void __thiscall
cube::XAudio2Engine::vfunction6(XAudio2Engine *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (this->XAudio2Engine_data).offset_0x20;
  piVar2 = (int *)puVar1[0x78003];
  puVar1[0x78006] = param_1;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x30))(piVar2,param_1,0);
  }
  puVar1 = (this->XAudio2Engine_data).offset_0x24;
  piVar2 = (int *)puVar1[0x78003];
  puVar1[0x78006] = param_2;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x30))(piVar2,param_2,0);
  }
  return;
}


/* cube::XAudio2Engine::deleting_destructor @ 00623a60  kind=game  attributed-by=rtti  size=1006 */

void __thiscall cube::XAudio2Engine::deleting_destructor(XAudio2Engine *this,undefined4 *param_1)

{
  void **ppvVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  LPCWSTR ***ppppWVar9;
  HANDLE hFile;
  DWORD DVar10;
  int local_44;
  XAudio2Engine *local_40;
  HANDLE local_3c;
  undefined4 local_38;
  undefined4 *local_34;
  undefined4 local_30;
  LPCWSTR **local_2c [2];
  LPCWSTR **local_24;
  LPCWSTR **local_20;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f53e0;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  ppvVar1 = &(this->XAudio2Engine_data).offset_0x18;
  local_40 = this;
  local_14 = uVar3;
  local_3c = (HANDLE)FUN_00408fc0(param_1);
  if (local_3c == *ppvVar1) {
LAB_00623ac9:
    local_3c = *ppvVar1;
  }
  else {
    piVar4 = (int *)((int)local_3c + 0x10);
    if (0xf < *(uint *)((int)local_3c + 0x24)) {
      piVar4 = (int *)*piVar4;
    }
    iVar5 = FUN_0040c520(0,param_1[4],piVar4,*(undefined4 *)((int)local_3c + 0x20));
    if (iVar5 < 0) goto LAB_00623ac9;
  }
  if ((local_3c == *ppvVar1) || (*(int *)((int)local_3c + 0x28) == 0)) {
    if ((local_40->XAudio2Engine_data).offset_0x28 == (undefined4 *)0x0) {
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = (undefined4 *)*param_1;
      }
      puVar7 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar7 = (undefined4 *)*param_1;
      }
      local_18 = 7;
      local_1c = 0;
      local_2c[0] = (LPCWSTR **)((uint)local_2c[0] & 0xffff0000);
      FUN_00424da0(puVar7,param_1[4] + (int)puVar8,local_44);
      ppppWVar9 = local_2c;
      if (7 < local_18) {
        ppppWVar9 = (LPCWSTR ***)local_2c[0];
      }
      local_8 = 1;
      hFile = CreateFileW((LPCWSTR)ppppWVar9,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0
                         );
      local_3c = hFile;
      if ((hFile != (HANDLE)0xffffffff) &&
         (DVar10 = SetFilePointer(hFile,0,(PLONG)0x0,0), DVar10 != 0xffffffff)) {
        FUN_006231e0(hFile,0x46464952,&local_38,&local_30);
        FUN_006233a0(hFile,&local_44,4,local_30);
        if (local_44 == 0x45564157) {
          local_34 = operator_new(0x50);
          if (local_34 == (undefined4 *)0x0) {
            local_34 = (undefined4 *)0x0;
          }
          else {
            *local_34 = &Sound::vftable;
          }
          puVar8 = local_34;
          FUN_006231e0(hFile,0x20746d66,&local_38,&local_30);
          *(undefined8 *)(puVar8 + 1) = 0;
          *(undefined8 *)(puVar8 + 3) = 0;
          *(undefined8 *)(puVar8 + 5) = 0;
          *(undefined8 *)(puVar8 + 7) = 0;
          *(undefined8 *)(puVar8 + 9) = 0;
          FUN_006233a0(hFile,puVar8 + 1,local_38,local_30);
          FUN_006231e0(hFile,0x61746164,&local_38,&local_30);
          uVar6 = FUN_0068d652(local_38);
          FUN_006233a0(local_3c,uVar6,local_38,local_30);
          *(undefined8 *)(local_34 + 0xb) = 0;
          *(undefined8 *)(local_34 + 0xd) = 0;
          *(undefined8 *)(local_34 + 0xf) = 0;
          *(undefined8 *)(local_34 + 0x11) = 0;
          local_34[0x13] = 0;
          local_34[0xc] = local_38;
          local_34[0xd] = uVar6;
          local_34[0xb] = 0x40;
          CloseHandle(local_3c);
          puVar8 = &(local_40->XAudio2Engine_data).offset_0x2c;
          *puVar8 = *puVar8 + 1;
          puVar8 = &(local_40->XAudio2Engine_data).offset_0x2c;
          puVar7 = (undefined4 *)FUN_004042e0(param_1);
          *puVar7 = *puVar8;
          puVar8 = (undefined4 *)FUN_00468910(puVar8);
          *puVar8 = local_34;
        }
      }
      ppppWVar9 = (LPCWSTR ***)local_2c[0];
      if (7 < local_18) goto LAB_00623e29;
    }
    else {
      local_24 = (LPCWSTR **)0x0;
      local_20 = (LPCWSTR **)0x0;
      local_1c = 0;
      local_18 = 0;
      local_8 = 0;
      cVar2 = FUN_004498d0(param_1,&local_24);
      if ((cVar2 != '\0') && (local_20 != local_24)) {
        FUN_004496a0(uVar3);
        FUN_00623100(&local_24,0x46464952,&local_38,&local_30);
        local_34 = (undefined4 *)0x0;
        FUN_00623340(&local_24,&local_34,4,local_30);
        if (local_34 == (undefined4 *)0x45564157) {
          local_34 = operator_new(0x50);
          if (local_34 == (undefined4 *)0x0) {
            local_34 = (undefined4 *)0x0;
          }
          else {
                    /* inlined destructor: cube::XAudio2Engine::Sound::~Sound */
            *local_34 = &Sound::vftable;
          }
          puVar8 = local_34;
          FUN_00623100(&local_24,0x20746d66,&local_38,&local_30);
          *(undefined8 *)(puVar8 + 1) = 0;
          *(undefined8 *)(puVar8 + 3) = 0;
          *(undefined8 *)(puVar8 + 5) = 0;
          *(undefined8 *)(puVar8 + 7) = 0;
          *(undefined8 *)(puVar8 + 9) = 0;
          FUN_00623340(&local_24,puVar8 + 1,local_38,local_30);
          FUN_00623100(&local_24,0x61746164,&local_38,&local_30);
          uVar6 = FUN_0068d652(local_38);
          FUN_00623340(&local_24,uVar6,local_38,local_30);
          *(undefined8 *)(local_34 + 0xb) = 0;
          *(undefined8 *)(local_34 + 0xd) = 0;
          *(undefined8 *)(local_34 + 0xf) = 0;
          *(undefined8 *)(local_34 + 0x11) = 0;
          local_34[0x13] = 0;
          local_34[0xc] = local_38;
          local_34[0xd] = uVar6;
          puVar8 = &(local_40->XAudio2Engine_data).offset_0x2c;
          local_34[0xb] = 0x40;
          *puVar8 = *puVar8 + 1;
          puVar7 = (undefined4 *)FUN_004042e0(param_1);
          *puVar7 = *puVar8;
          puVar8 = (undefined4 *)FUN_00468910(puVar8);
          *puVar8 = local_34;
        }
      }
      ppppWVar9 = (LPCWSTR ***)local_24;
      if ((LPCWSTR ***)local_24 != (LPCWSTR ***)0x0) {
LAB_00623e29:
                    /* WARNING: Subroutine does not return */
        operator_delete(ppppWVar9);
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* cube::XAudio2Engine::vfunction4 @ 00623e60  kind=game  attributed-by=rtti  size=115 */

void __thiscall cube::XAudio2Engine::vfunction4(XAudio2Engine *this)

{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (this->XAudio2Engine_data).offset_0x20;
  piVar2 = (int *)puVar1[0x78003];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x50))(piVar2,0,0);
    FUN_00625a60(puVar1 + 0x78008);
    *(undefined1 *)(puVar1 + 0x78004) = 0;
    *(undefined2 *)((int)puVar1 + 0x1e0012) = 0;
  }
  puVar1 = (this->XAudio2Engine_data).offset_0x24;
  piVar2 = (int *)puVar1[0x78003];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x50))(piVar2,0,0);
    FUN_00625a60(puVar1 + 0x78008);
    *(undefined1 *)(puVar1 + 0x78004) = 0;
    *(undefined2 *)((int)puVar1 + 0x1e0012) = 0;
  }
  return;
}


/* cube::XAudio2Engine::vfunction3 @ 006240b0  kind=game  attributed-by=rtti  size=20 */

void __thiscall cube::XAudio2Engine::vfunction3(void)

{
  FUN_00623ee0();
  FUN_00623ee0();
  return;
}


