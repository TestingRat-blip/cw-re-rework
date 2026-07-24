// GameController (control) -- cube. 14 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "GameController.h"

/* cube::GameController::GameController @ 00459c40  kind=game  attributed-by=rtti  size=26981 */
// (decompilation unavailable)
undefined __thiscall GameController(GameController * this) { }

/* cube::GameController::~GameController @ 00466d90  kind=game  attributed-by=rtti  size=914 */

void __thiscall cube::GameController::~GameController(GameController *this)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  HANDLE pvVar4;
  SOCKET s;
  void *pvVar5;
  char cVar6;
  uint uVar7;
  int *piVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e536a;
  local_10 = ExceptionList;
  uVar7 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  puVar1 = *(undefined4 **)&this[0x67b7].Controller_data.field_0xe0;
  local_8 = 0x2f;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1,uVar7);
  }
  FUN_00601cb0();
  if (((*(int *)&this[2].Controller_data.field_0x10c != 0) &&
      (iVar2 = *(int *)&this[0x67ba].Controller_data.field_0x70, -1 < iVar2)) &&
     (iVar2 < (int)(this[0x67b9].Controller_data.offset_0x128 -
                   this[0x67b9].Controller_data.offset_0x124) >> 2)) {
    FUN_0044b040(*(int *)&this[0x67b7].Controller_data.field_0xe8 + 0x10);
    FUN_004686e0(*(undefined4 *)(*(int *)&this[0x67b7].Controller_data.field_0xe8 + 0x1d28));
    FUN_0044aff0(*(int *)&this[0x67b7].Controller_data.field_0xe8 + 0x11dc);
    *(undefined4 *)
     (*(int *)(this[0x67b9].Controller_data.offset_0x124 +
              *(int *)&this[0x67ba].Controller_data.field_0x70 * 4) + 0x1198) =
         *(undefined4 *)(*(int *)&this[0x67b7].Controller_data.field_0xe8 + 0x1198);
    *(undefined4 *)
     (*(int *)(this[0x67b9].Controller_data.offset_0x124 +
              *(int *)&this[0x67ba].Controller_data.field_0x70 * 4) + 0x119c) =
         *(undefined4 *)(*(int *)&this[0x67b7].Controller_data.field_0xe8 + 0x119c);
  }
  iVar2 = *(int *)&this[0x67ba].Controller_data.field_0x70;
  if ((-1 < iVar2) &&
     (iVar2 < (int)(this[0x67b9].Controller_data.offset_0x128 -
                   this[0x67b9].Controller_data.offset_0x124) >> 2)) {
    if (*(int *)&this[2].Controller_data.field_0x10c == 0) goto LAB_00466f64;
    FUN_00487520(this,iVar2,*(undefined4 *)(this[0x67b9].Controller_data.offset_0x124 + iVar2 * 4));
  }
  if (((*(int *)&this[2].Controller_data.field_0x10c != 0) &&
      (iVar2 = *(int *)&this[0x67ba].Controller_data.field_0x74, -1 < iVar2)) &&
     ((iVar2 < *(int *)&this[0x67ba].Controller_data.field_0x44 -
               *(int *)&this[0x67ba].Controller_data.field_0x40 >> 2 &&
      ((iVar3 = *(int *)&this[0x67ba].Controller_data.field_0x40,
       *(int *)(*(int *)(iVar3 + iVar2 * 4) + 0x20) ==
       *(int *)&this[0x67b5].Controller_data.field_0xd8 &&
       (cVar6 = FUN_00451440(*(int *)(iVar3 + iVar2 * 4) + 8,&this[2].Controller_data.field_0xfc),
       cVar6 != '\0')))))) {
    iVar2 = *(int *)&this[0x67ba].Controller_data.field_0x74;
    FUN_004878a0(this,iVar2,
                 *(undefined4 *)(*(int *)&this[0x67ba].Controller_data.field_0x40 + iVar2 * 4),1);
  }
LAB_00466f64:
  FUN_00601e90();
  piVar8 = *(int **)&this[0x67b7].Controller_data.field_0xf4;
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 8))(piVar8);
  }
  piVar8 = *(int **)&this[0x67b7].Controller_data.field_0xf8;
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 8))(piVar8);
  }
  pvVar4 = *(HANDLE *)&this[0x67b6].Controller_data.field_0xdc;
  this[0x67b6].Controller_data.field_0xd8 = 0;
  this[0x67b6].Controller_data.field_0xd9 = 0;
  WaitForSingleObject(pvVar4,0xffffffff);
  WaitForSingleObject(*(HANDLE *)&this[0x67b6].Controller_data.field_0xe0,0xffffffff);
  pvVar4 = *(HANDLE *)&this[0x67b6].Controller_data.field_0xe4;
  if (pvVar4 != (HANDLE)0x0) {
    WaitForSingleObject(pvVar4,0xffffffff);
  }
  pvVar4 = *(HANDLE *)&this[0x67b6].Controller_data.field_0xe8;
  if (pvVar4 != (HANDLE)0x0) {
    WaitForSingleObject(pvVar4,0xffffffff);
  }
  s = *(SOCKET *)&this[0x67b7].Controller_data.field_0xe4;
  if (s != 0) {
    closesocket(s);
  }
  pvVar4 = *(HANDLE *)&this[0x67b6].Controller_data.field_0x108;
  this[0x67b6].Controller_data.field_0x104 = 0;
  WaitForSingleObject(pvVar4,0xffffffff);
  puVar1 = *(undefined4 **)&this[2].Controller_data.field_0x64;
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
      operator_delete__(puVar1 + -1);
    }
    else {
      (**(code **)*puVar1)(3);
    }
  }
  puVar1 = *(undefined4 **)((int)&this[0x67b8].Controller_data.offset_0x8 + 4);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)this[0x67b8].Controller_data.offset_0x10;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  piVar8 = (int *)this[0x67b9].Controller_data.offset_0x124;
  if (piVar8 != (int *)this[0x67b9].Controller_data.offset_0x128) {
    do {
      if ((undefined4 *)*piVar8 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar8)(1);
      }
      piVar8 = piVar8 + 1;
    } while (piVar8 != (int *)this[0x67b9].Controller_data.offset_0x128);
  }
  piVar8 = *(int **)&this[0x67ba].Controller_data.field_0x40;
  if (piVar8 != *(int **)&this[0x67ba].Controller_data.field_0x44) {
    do {
      if ((undefined4 *)*piVar8 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar8)(1);
      }
      piVar8 = piVar8 + 1;
    } while (piVar8 != *(int **)&this[0x67ba].Controller_data.field_0x44);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this[0x67b6].Controller_data.field_0x10c);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this[0x67b6].Controller_data.offset_0x124);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this[0x67b7].Controller_data.field_0x18);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this[0x67b7].Controller_data);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this[0x67b7].Controller_data.field_0x30);
  local_8._0_1_ = 0x2e;
  Database::Database((Database *)&this[0xcf71].Controller_data.field_0x90);
  local_8 = CONCAT31(local_8._1_3_,0x2d);
  Database::Database((Database *)&this[0xcf71].Controller_data.field_0x88);
  pvVar5 = *(void **)&this[0xcf71].Controller_data.field_0x18;
  if (pvVar5 == (void *)0x0) {
    puVar1 = *(undefined4 **)&this[0xcf70].Controller_data.field_0x24;
    pvVar5 = (void *)*puVar1;
    *puVar1 = puVar1;
    iVar2 = *(int *)&this[0xcf70].Controller_data.field_0x24;
    *(int *)(iVar2 + 4) = iVar2;
    *(undefined4 *)&this[0xcf70].Controller_data.field_0x28 = 0;
    if (pvVar5 == *(void **)&this[0xcf70].Controller_data.field_0x24) {
                    /* WARNING: Subroutine does not return */
      operator_delete(*(void **)&this[0xcf70].Controller_data.field_0x24);
    }
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar5);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(pvVar5);
}


/* cube::GameController::deleting_destructor @ 0046d340  kind=game  attributed-by=rtti  size=30 */

GameController * __thiscall
cube::GameController::deleting_destructor(GameController *this,byte param_1)

{
  ~GameController(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


/* cube::GameController::vfunction8 @ 0047b600  kind=game  attributed-by=rtti  size=10026 */

void __thiscall cube::GameController::vfunction8(GameController *this,int param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  bool bVar14;
  undefined4 uVar15;
  int local_3dc;
  int local_3d8;
  undefined1 local_3bc [280];
  undefined2 local_2a4 [2];
  undefined4 local_2a0;
  undefined4 local_29c;
  uint local_298;
  undefined2 local_294 [2];
  undefined4 local_290;
  undefined4 local_28c;
  undefined2 local_288;
  undefined1 local_286;
  undefined2 local_284;
  undefined1 local_280 [240];
  undefined4 local_190;
  undefined4 local_18c;
  void *local_188;
  undefined4 local_184;
  undefined4 local_180;
  void *local_17c [4];
  undefined4 local_16c;
  uint local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  char local_154 [4];
  undefined4 local_150;
  undefined4 local_14c;
  undefined2 local_148;
  undefined1 local_146;
  short local_144;
  undefined1 local_140 [256];
  undefined4 local_40;
  void *local_3c [4];
  undefined4 local_2c;
  uint local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e6044;
  local_10 = ExceptionList;
  uVar4 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar4;
  Controller::vfunction8((Controller *)this,param_1);
  DAT_0076b04c = *(undefined4 *)(this[0x67b7].Controller_data.offset_0x128 + 0xd8);
  cVar3 = (*this->vftablePtr->vfunction2)(this,uVar4);
  if (cVar3 != '\0') {
    if (param_1 == 0) {
      FUN_006527f0();
    }
    else if (param_1 == 1) {
      FUN_00652a70();
    }
  }
  iVar5 = *(int *)&this[0x67b9].Controller_data.offset_0x14;
  iVar6 = *(int *)(iVar5 + 0x3c);
  if ((((*(int *)(*(int *)(iVar6 + 0x94) + *(int *)(iVar6 + 0x68) * 4) != 0) &&
       (iVar6 = *(int *)(*(int *)&this[0x67b9].Controller_data.field_0xb8 + 0x3c),
       *(int *)(*(int *)(iVar6 + 0x94) + *(int *)(iVar6 + 0x68) * 4) != 0)) && (param_1 == 0)) &&
     (iVar6 = *(int *)(*(int *)&this[0x67b9].Controller_data.field_0xbc + 0x160), -1 < iVar6)) {
    if (iVar6 == 0) {
      iVar5 = *(int *)(iVar5 + 0x3c);
      *(undefined4 *)(*(int *)(iVar5 + 0x94) + *(int *)(iVar5 + 0x68) * 4) = 0;
      iVar5 = *(int *)&this[0x67b9].Controller_data.field_0x28;
    }
    else {
      if (iVar6 != 1) {
        if (iVar6 == 2) {
          this[1].Controller_data.field_0x60 = 1;
        }
        goto LAB_0047b70f;
      }
      iVar5 = *(int *)&this[0x67ba].Controller_data.field_0x64;
    }
    *(undefined4 *)
     (*(int *)(*(int *)(iVar5 + 0x3c) + 0x94) + *(int *)(*(int *)(iVar5 + 0x3c) + 0x68) * 4) = 1;
  }
LAB_0047b70f:
  *(undefined4 *)&this[0x67ba].Controller_data.field_0x68 = 0;
  if ((param_1 == 1) && (iVar5 = FUN_00650ae0(), iVar5 == 0)) {
    *(undefined2 *)&this[0x67b9].Controller_data.field_0x90 = 0;
    this[0x67b9].Controller_data.field_0x92 = 0;
    iVar5 = *(int *)(*(int *)&this[0x67b9].Controller_data.field_0x5c + 0x3c);
    *(undefined4 *)(*(int *)(iVar5 + 0x94) + *(int *)(iVar5 + 0x68) * 4) = 0;
    iVar5 = *(int *)(*(int *)&this[0x67b9].Controller_data.field_0x60 + 0x3c);
    *(undefined4 *)(*(int *)(iVar5 + 0x94) + *(int *)(iVar5 + 0x68) * 4) = 0;
    iVar5 = *(int *)(*(int *)&this[0x67b9].Controller_data.field_0x7c + 0x3c);
    *(undefined4 *)(*(int *)(iVar5 + 0x94) + *(int *)(iVar5 + 0x68) * 4) = 0;
  }
  if (((this[0x67b9].Controller_data.field_0x92 != '\0') && (param_1 == 0)) &&
     (iVar5 = 0,
     0 < (int)(*(int *)&this[0x67b8].Controller_data.field_0x118 -
               *(int *)&this[0x67b8].Controller_data.field_0x114 & 0xfffffffcU))) {
    do {
      cVar3 = FUN_006294c0();
      if (cVar3 != '\0') {
        switch(iVar5) {
        case 0:
          iVar6 = *(int *)&this[0x67b9].Controller_data.field_0x3c;
          iVar12 = *(int *)(iVar6 + 0x3c);
          iVar6 = *(int *)(iVar6 + 0x3c);
          *(uint *)(*(int *)(iVar6 + 0x94) + *(int *)(iVar6 + 0x68) * 4) =
               (uint)(*(int *)(*(int *)(iVar12 + 0x94) + *(int *)(iVar12 + 0x68) * 4) == 0);
          break;
        case 1:
          FUN_00488c70();
          break;
        case 2:
          FUN_00488bd0();
          break;
        case 3:
          FUN_00488c00();
          break;
        case 4:
          this[0x67b7].Controller_data.field_0xfc = 1;
          break;
        case 5:
          FUN_00488d00();
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)&this[0x67b8].Controller_data.field_0x118 -
                     *(int *)&this[0x67b8].Controller_data.field_0x114 >> 2);
  }
  if (this[0x67b9].Controller_data.field_0x91 != '\0') {
    if (param_1 == 0) {
      iVar5 = 0;
      do {
        cVar3 = FUN_006294c0();
        if (cVar3 != '\0') {
          *(int *)(*(int *)&this[0x67b9].Controller_data.field_0xac + 0x18c) = iVar5;
          FUN_00484350(0x55,&this[1].Controller_data,0x3f800000,0x3f800000);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 2);
    }
    iVar5 = 0;
    do {
      cVar3 = FUN_006294c0();
      if (cVar3 != '\0') {
        if (param_1 == 0) {
          iVar6 = *(int *)&this[0x67b7].Controller_data.field_0xe8;
          iVar12 = *(int *)(iVar6 + 0x1164);
          iVar7 = *(int *)&this[0x67b9].Controller_data.field_0xac;
          local_3d8 = 5;
          piVar9 = (int *)(iVar7 + 0x164);
          iVar8 = 0;
          iVar11 = 0;
          do {
            iVar11 = iVar11 + piVar9[-1];
            iVar8 = iVar8 + *piVar9;
            local_3d8 = local_3d8 + -1;
            piVar9 = piVar9 + 2;
          } while (local_3d8 != 0);
          if (*(int *)(iVar7 + 0x188) + iVar8 + iVar11 <
              ((int)(iVar12 + (iVar12 >> 0x1f & 3U)) >> 2) + *(int *)(iVar6 + 400) * 2 + -2) {
            if (iVar5 == 7) {
              iVar6 = *(int *)(iVar7 + 0x178);
joined_r0x0047b99c:
              if (iVar6 < 5) goto LAB_0047ba9e;
            }
            else {
              if (iVar5 == 8) {
                iVar6 = *(int *)(iVar7 + 0x17c);
                goto joined_r0x0047b99c;
              }
              if (iVar5 == 9) {
                iVar6 = *(int *)(iVar7 + 0x180);
                goto joined_r0x0047b99c;
              }
              if (iVar5 == 1) {
                iVar6 = *(int *)(iVar7 + 0x160);
                goto joined_r0x0047b99c;
              }
              if (iVar5 == 3) {
                iVar6 = *(int *)(iVar7 + 0x168);
                goto joined_r0x0047b99c;
              }
              if (iVar5 == 5) {
                iVar6 = *(int *)(iVar7 + 0x170);
                goto joined_r0x0047b99c;
              }
            }
            piVar9 = (int *)(iVar7 + 0x160 + iVar5 * 4);
            *piVar9 = *piVar9 + 1;
            FUN_00484350(0x55,&this[1].Controller_data,0x3f800000,0x3f800000);
          }
        }
        else {
          iVar6 = *(int *)&this[0x67b9].Controller_data.field_0xac;
          iVar12 = *(int *)(iVar6 + 0x160 + iVar5 * 4);
          if (iVar12 < 6) {
            if (iVar5 == 6) {
              iVar7 = *(int *)(iVar6 + 0x17c);
            }
            else if (iVar5 == 7) {
              iVar7 = *(int *)(iVar6 + 0x180);
            }
            else if (iVar5 == 8) {
              iVar7 = *(int *)(iVar6 + 0x184);
            }
            else if (iVar5 == 0) {
              iVar7 = *(int *)(iVar6 + 0x164);
            }
            else if (iVar5 == 2) {
              iVar7 = *(int *)(iVar6 + 0x16c);
            }
            else {
              if (iVar5 != 4) goto LAB_0047ba59;
              iVar7 = *(int *)(iVar6 + 0x174);
            }
            if (0 < iVar7) goto LAB_0047ba9e;
          }
LAB_0047ba59:
          *(int *)(iVar6 + 0x160 + iVar5 * 4) = iVar12 + -1;
          FUN_00484350(0x58,&this[1].Controller_data,0x3f800000,0x3f800000);
          iVar6 = *(int *)&this[0x67b9].Controller_data.field_0xac;
          if (*(int *)(iVar6 + 0x160 + iVar5 * 4) < 0) {
            *(undefined4 *)(iVar6 + 0x160 + iVar5 * 4) = 0;
          }
        }
      }
LAB_0047ba9e:
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0xb);
  }
  if (param_1 != 0) {
    if (param_1 == 1) {
      if (this[0x67b7].Controller_data.field_0x11c == '\0') {
        iVar5 = *(int *)(*(int *)&this[0x67b9].Controller_data.field_0x7c + 0x3c);
        if (*(int *)(*(int *)(iVar5 + 0x94) + *(int *)(iVar5 + 0x68) * 4) != 0) {
          FUN_0058ce20();
        }
      }
      else {
        pcVar10 = (char *)(*(int *)&this[0x67b7].Controller_data.field_0xe8 + 0x18c);
        *pcVar10 = *pcVar10 + '\x01';
      }
    }
    else if (param_1 != 2) goto LAB_0047dd8d;
    FUN_0047b450(&local_1c);
    iVar5 = local_1c;
    if ((local_1c < 0) || (local_18 < 0)) {
      pcVar10 = (char *)FUN_0047b1b0();
      if ((pcVar10 == (char *)0x0) || (*pcVar10 == '\0')) {
        iVar5 = FUN_0047b550();
        if (iVar5 != 0) {
          iVar6 = *(int *)&this[0x67b9].Controller_data.field_0xfc;
          if (*(int *)(iVar6 + 0x1b4) == 1) {
            piVar9 = (int *)this[0x67bc].Controller_data.offset_0x128;
            iVar5 = this[0x67bc].Controller_data.offset_0x12c;
            piVar13 = (int *)*piVar9;
            if (piVar13 != piVar9) {
              do {
                iVar5 = iVar5 + -1;
                if (iVar5 == *(int *)(iVar6 + 0x188)) {
                  local_3dc = 0;
                  local_3d8 = 0;
                  iVar5 = 0;
                  if (piVar13[2] < 1) goto LAB_0047dbe1;
                  goto LAB_0047daa0;
                }
                piVar13 = (int *)*piVar13;
              } while (piVar13 != piVar9);
            }
          }
          else {
            iVar6 = *(int *)&this[0x67b7].Controller_data.field_0xe8;
            iVar12 = FUN_004c76e0();
            if (iVar12 <= *(int *)(iVar6 + 0x1304)) {
              cVar3 = FUN_0043e4a0(iVar5);
              if (cVar3 != '\0') {
                FUN_0046ebe0(iVar5,0xffffffff);
                iVar5 = *(int *)&this[0x67b7].Controller_data.field_0xe8;
                iVar6 = FUN_004c76e0();
                piVar9 = (int *)(iVar5 + 0x1304);
                *piVar9 = *piVar9 - iVar6;
                FUN_00484350(0x39,*(int *)&this[0x67b7].Controller_data.field_0xe8 + 0x10,0x3f800000
                             ,0x3f800000);
                goto LAB_0047dd70;
              }
              local_28 = 7;
              local_2c = 0;
              local_3c[0] = (void *)((uint)local_3c[0] & 0xffff0000);
              FUN_0040f7a0(L"You can\'t carry more of these items.\n",0x25);
              local_8 = 4;
              local_164 = 0x3f800000;
              local_160 = 0x3e4ccccd;
              local_15c = 0x3e4ccccd;
              local_158 = 0x3f800000;
              FUN_0043ab30(local_3c,&local_164);
              local_8 = 0xffffffff;
              if (7 < local_28) {
                    /* WARNING: Subroutine does not return */
                operator_delete(local_3c[0]);
              }
              local_3c[0] = (void *)((uint)local_3c[0] & 0xffff0000);
              local_28 = 7;
              local_2c = 0;
              FUN_00484350(0x31,*(int *)&this[0x67b7].Controller_data.field_0xe8 + 0x10,0x3f800000,
                           0x3f800000);
            }
          }
        }
      }
      else {
        iVar5 = *(int *)(*(int *)&this[0x67b9].Controller_data.field_0xa0 + 0x3c);
        if (*(int *)(*(int *)(iVar5 + 0x94) + *(int *)(iVar5 + 0x68) * 4) == 0) {
          iVar5 = *(int *)(*(int *)&this[0x67b9].Controller_data.field_0x64 + 0x3c);
          if (*(int *)(*(int *)(iVar5 + 0x94) + *(int *)(iVar5 + 0x68) * 4) == 0) {
            iVar5 = *(int *)(*(int *)&this[0x67b9].Controller_data.field_0x7c + 0x3c);
            if (*(int *)(*(int *)(iVar5 + 0x94) + *(int *)(iVar5 + 0x68) * 4) == 0) {
              FUN_0046ebe0(pcVar10,0xffffffff);
              pcVar10[0] = '\0';
              pcVar10[1] = '\0';
              FUN_004c6350();
              FUN_004c64c0();
              FUN_00484350(0x58,&this[1].Controller_data,0x3f800000,0x3f800000);
            }
            else {
              if (*pcVar10 != '\x03') goto LAB_0047d7c6;
              *(char **)(*(int *)&this[0x67b9].Controller_data.field_0x94 + 0x160) = pcVar10;
              FUN_0058ce20();
            }
          }
          else {
            iVar5 = *(int *)&this[0x67b7].Controller_data.field_0xe8;
            iVar6 = FUN_004c76e0();
            piVar9 = (int *)(iVar5 + 0x1304);
            *piVar9 = *piVar9 + iVar6;
            FUN_00484350(0x3a,*(int *)&this[0x67b7].Controller_data.field_0xe8 + 0x10,0x3f400000,
                         0x3f800000);
            local_284 = 1;
            local_294[0] = 0;
            local_290 = 0;
            local_28c = 0;
            local_288 = 0;
            local_286 = 0;
            local_180 = 0;
            memset(local_280,0,0x100);
            local_298 = 1;
            FUN_0042c5e0(pcVar10);
            iVar5 = this[0x67bc].Controller_data.offset_0x128;
            iVar12 = FUN_00451f10(iVar5,*(undefined4 *)(iVar5 + 4),&local_298);
            iVar6 = this[0x67bc].Controller_data.offset_0x12c;
            if (iVar6 == 0xe07037) {
                    /* WARNING: Subroutine does not return */
              std::_Xlength_error("list<T> too long");
            }
            this[0x67bc].Controller_data.offset_0x12c = iVar6 + 1;
            *(int *)(iVar5 + 4) = iVar12;
            **(int **)(iVar12 + 4) = iVar12;
            if ((10 < (uint)this[0x67bc].Controller_data.offset_0x12c) &&
               (piVar9 = (int *)this[0x67bc].Controller_data.offset_0x128, piVar13 = (int *)*piVar9,
               piVar13 != piVar9)) {
              *(int *)piVar13[1] = *piVar13;
              *(int *)(*piVar13 + 4) = piVar13[1];
                    /* WARNING: Subroutine does not return */
              operator_delete(piVar13);
            }
            FUN_004a2300();
            pcVar10[0] = '\0';
            pcVar10[1] = '\0';
          }
        }
        else {
          iVar5 = *(int *)&this[0x67b9].Controller_data.field_0xa4;
          *(undefined4 *)(iVar5 + 0x164) = 0xffffffff;
          *(undefined4 *)(iVar5 + 0x168) = 0xffffffff;
          *(char **)(*(int *)&this[0x67b9].Controller_data.field_0xa4 + 0x160) = pcVar10;
        }
      }
    }
    else {
      iVar6 = *(int *)(*(int *)&this[0x67b9].Controller_data.field_0xa0 + 0x3c);
      if (*(int *)(*(int *)(iVar6 + 0x94) + *(int *)(iVar6 + 0x68) * 4) == 0) {
        iVar6 = *(int *)(*(int *)&this[0x67b9].Controller_data.field_0x98 + 0x3c);
        if (*(int *)(*(int *)(iVar6 + 0x94) + *(int *)(iVar6 + 0x68) * 4) == 0) {
          iVar12 = local_18 * 0x11c;
          iVar6 = *(int *)(*(int *)&this[0x67b9].Controller_data.field_0x64 + 0x3c);
          if (*(int *)(*(int *)(iVar6 + 0x94) + *(int *)(iVar6 + 0x68) * 4) == 0) {
            iVar5 = *(int *)(*(int *)&this[0x67b9].Controller_data.field_0x7c + 0x3c);
            if (*(int *)(*(int *)(iVar5 + 0x94) + *(int *)(iVar5 + 0x68) * 4) == 0) {
              piVar13 = (int *)(iVar12 + *(int *)(*(int *)(*(int *)&this[0x67b7].Controller_data.
                                                                    field_0xe8 + 0x11dc) +
                                                 local_1c * 0xc));
              piVar9 = piVar13 + 1;
              cVar3 = FUN_0043e420(piVar9);
              if (cVar3 == '\0') {
                FUN_00484350(0x32,&this[1].Controller_data,0x3f800000,0x3f800000);
              }
              else if (*piVar13 != 0) {
                if ((char)*piVar9 == '\x03') {
                  FUN_0040ee70(piVar9);
                  *piVar13 = *piVar13 + -1;
                  if (*piVar13 < 1) {
                    *piVar13 = 0;
                    *(undefined1 *)piVar9 = 0;
                    *(undefined1 *)((int)piVar13 + 5) = 0;
                  }
                  if ((local_154[1] == '\r') || (local_154[1] == '\x0e')) {
                    iVar5 = *(int *)&this[0x67b7].Controller_data.field_0xe8;
                    cVar3 = FUN_00444820();
                    if (cVar3 != '\0') {
                      FUN_0046ebe0(iVar5 + 0xaa8,0xffffffff);
                      uVar15 = FUN_0042f3e0();
                      FUN_0042c5e0(uVar15);
                    }
LAB_0047d1ab:
                    FUN_0046ebe0(*(int *)&this[0x67b7].Controller_data.field_0xe8 + 0x990,0xffffffff
                                );
                    pcVar10 = local_154;
LAB_0047d1d7:
                    FUN_0042c5e0(pcVar10);
                  }
                  else {
                    if (param_1 == 1) {
                      if ((local_154[1] == '\x06') || (local_154[1] == '\a')) {
                        FUN_0046ebe0(*(int *)&this[0x67b7].Controller_data.field_0xe8 + 0x990,
                                     0xffffffff);
                        FUN_0042c5e0(local_154);
                        FUN_0046ebe0(*(int *)&this[0x67b7].Controller_data.field_0xe8 + 0xaa8,
                                     0xffffffff);
                        pcVar10 = (char *)FUN_0042f3e0();
                        goto LAB_0047d1d7;
                      }
                    }
                    else {
                      cVar3 = FUN_00444820();
                      if (cVar3 == '\0') {
                        if (param_1 != 2) goto LAB_0047d1fc;
                        goto LAB_0047d1ab;
                      }
                    }
                    FUN_0046ebe0(*(int *)&this[0x67b7].Controller_data.field_0xe8 + 0xaa8,0xffffffff
                                );
                    FUN_0042c5e0(local_154);
                    cVar3 = FUN_00444820();
                    if (cVar3 != '\0') {
                      FUN_0046ebe0(*(int *)&this[0x67b7].Controller_data.field_0xe8 + 0x990,
                                   0xffffffff);
                      pcVar10 = (char *)FUN_0042f3e0();
                      goto LAB_0047d1d7;
                    }
                  }
                  FUN_004c6350();
                  FUN_004c64c0();
                  FUN_00484320(0x58);
                }
LAB_0047d1fc:
                if (((char)*piVar9 == '\x13') ||
                   (((char)*piVar9 == '\x14' &&
                    (cVar3 = FUN_0042f4a0(*(int *)&this[0x67b7].Controller_data.field_0xe8 + 0x1020)
                    , cVar3 == '\0')))) {
                  FUN_0040ee70(piVar9);
                  FUN_0046ebe0(*(int *)&this[0x67b7].Controller_data.field_0xe8 + 0x1020,0xffffffff)
                  ;
                  FUN_0042c5e0(local_154);
                  *piVar13 = *piVar13 + -1;
                  if (*piVar13 < 1) {
                    *piVar13 = 0;
                    *(undefined1 *)piVar9 = 0;
                    *(undefined1 *)((int)piVar13 + 5) = 0;
                  }
                  FUN_004c6350();
                  FUN_004c64c0();
                  FUN_00484350(0x58,&this[1].Controller_data,0x3f800000,0x3f800000);
                }
                if ((char)*piVar9 == '\x04') {
                  FUN_0040ee70(piVar9);
                  *piVar13 = *piVar13 + -1;
                  if (*piVar13 < 1) {
                    *piVar13 = 0;
                    *(undefined1 *)piVar9 = 0;
                    *(undefined1 *)((int)piVar13 + 5) = 0;
                  }
                  FUN_0046ebe0(*(int *)&this[0x67b7].Controller_data.field_0xe8 + 0x530,0xffffffff);
                  FUN_0042c5e0(local_154);
                  FUN_004c6350();
                  FUN_004c64c0();
                  FUN_00484320(0x58);
                }
                if ((char)*piVar9 == '\a') {
                  FUN_0040ee70(piVar9);
                  *piVar13 = *piVar13 + -1;
                  if (*piVar13 < 1) {
                    *piVar13 = 0;
                    *(undefined1 *)piVar9 = 0;
                    *(undefined1 *)((int)piVar13 + 5) = 0;
                  }
                  FUN_0046ebe0(*(int *)&this[0x67b7].Controller_data.field_0xe8 + 0x878,0xffffffff);
                  FUN_0042c5e0(local_154);
                  FUN_004c6350();
                  FUN_004c64c0();
                  FUN_00484320(0x58);
                }
                if ((char)*piVar9 == '\b') {
                  FUN_0040ee70(piVar9);
                  *piVar13 = *piVar13 + -1;
                  if (*piVar13 < 1) {
                    *piVar13 = 0;
                    *(undefined1 *)piVar9 = 0;
                    *(undefined1 *)((int)piVar13 + 5) = 0;
                  }
                  FUN_0046ebe0(*(int *)&this[0x67b7].Controller_data.field_0xe8 + 0x418,0xffffffff);
                  FUN_0042c5e0(local_154);
                  FUN_004c6350();
                  FUN_004c64c0();
                  FUN_00484320(0x58);
                }
                if ((char)*piVar9 == '\t') {
                  FUN_0040ee70(piVar9);
                  *piVar13 = *piVar13 + -1;
                  if (*piVar13 < 1) {
                    *piVar13 = 0;
                    *(undefined1 *)piVar9 = 0;
                    *(undefined1 *)((int)piVar13 + 5) = 0;
                  }
                  iVar5 = *(int *)&this[0x67b7].Controller_data.field_0xe8;
                  if (param_1 == 1) {
                    FUN_0046ebe0(iVar5 + 0xcd8,0xffffffff);
                  }
                  else {
                    FUN_0046ebe0(iVar5 + 0xbc0,0xffffffff);
                  }
                  FUN_0042c5e0(local_154);
                  FUN_004c6350();
                  FUN_004c64c0();
                  FUN_00484320(0x58);
                }
                if ((char)*piVar9 == '\x17') {
                  FUN_0040ee70(piVar9);
                  *piVar13 = *piVar13 + -1;
                  if (*piVar13 < 1) {
                    *piVar13 = 0;
                    *(undefined1 *)piVar9 = 0;
                    *(undefined1 *)((int)piVar13 + 5) = 0;
                  }
                  FUN_0046ebe0(*(int *)&this[0x67b7].Controller_data.field_0xe8 + 0xf08,0xffffffff);
                  FUN_0042c5e0(local_154);
                  *(undefined1 *)(*(int *)&this[0x67b7].Controller_data.field_0xe8 + 0x68) = 0;
                  FUN_004c6350();
                  FUN_004c64c0();
                  FUN_00484320(0x58);
                }
                if ((char)*piVar9 == '\x18') {
                  FUN_0040ee70(piVar9);
                  *piVar13 = *piVar13 + -1;
                  if (*piVar13 < 1) {
                    *piVar13 = 0;
                    *(undefined1 *)piVar9 = 0;
                    *(undefined1 *)((int)piVar13 + 5) = 0;
                  }
                  FUN_0046ebe0(*(int *)&this[0x67b7].Controller_data.field_0xe8 + 0xdf0,0xffffffff);
                  FUN_0042c5e0(local_154);
                  FUN_004c6350();
                  FUN_004c64c0();
                  FUN_00484320(0x58);
                }
                if ((char)*piVar9 == '\x05') {
                  FUN_0040ee70(piVar9);
                  *piVar13 = *piVar13 + -1;
                  if (*piVar13 < 1) {
                    *piVar13 = 0;
                    *(undefined1 *)piVar9 = 0;
                    *(undefined1 *)((int)piVar13 + 5) = 0;
                  }
                  FUN_0046ebe0(*(int *)&this[0x67b7].Controller_data.field_0xe8 + 0x760,0xffffffff);
                  FUN_0042c5e0(local_154);
                  FUN_004c6350();
                  FUN_004c64c0();
                  FUN_00484320(0x58);
                }
                if ((char)*piVar9 == '\x06') {
                  FUN_0040ee70(piVar9);
                  *piVar13 = *piVar13 + -1;
                  if (*piVar13 < 1) {
                    *piVar13 = 0;
                    *(undefined1 *)piVar9 = 0;
                    *(undefined1 *)((int)piVar13 + 5) = 0;
                  }
                  FUN_0046ebe0(*(int *)&this[0x67b7].Controller_data.field_0xe8 + 0x648,0xffffffff);
                  FUN_0042c5e0(local_154);
                  FUN_004c6350();
                  FUN_004c64c0();
                  FUN_00484320(0x58);
                }
                if (((char)*piVar9 == '\v') && (1 < *piVar13)) {
                  FUN_0040ee70(piVar9);
                  local_144 = local_144 + 1;
                  FUN_0042f140();
                  FUN_0042f140();
                  FUN_0046ebe0(local_154,0xffffffff);
                  FUN_004c6350();
                  FUN_004c64c0();
                  FUN_00484320(0x58);
                }
                if ((char)*piVar9 == '\x01') {
                  FUN_00601cb0();
                  FUN_004a2780(piVar13);
                  FUN_00601e90();
                }
                else if ((char)*piVar9 == '\x02') {
                  FUN_0040ee70(piVar9);
                  local_154[0] = (char)piVar13[3];
                  local_14c = 0;
                  cVar3 = FUN_00444a90(local_154);
                  if (cVar3 != '\0') goto LAB_0047d7c6;
                  FUN_0044d460(local_154);
                  FUN_0042f140();
                  FUN_00484350(0x2f,&this[1].Controller_data,0x3f800000,0x3f800000);
                }
              }
            }
            else {
              pcVar10 = (char *)(iVar12 + 4 +
                                *(int *)(*(int *)(*(int *)&this[0x67b7].Controller_data.field_0xe8 +
                                                 0x11dc) + local_1c * 0xc));
              if (*pcVar10 == '\x03') {
                *(char **)(*(int *)&this[0x67b9].Controller_data.field_0x94 + 0x160) = pcVar10;
                FUN_0058ce20();
                goto LAB_0047dd86;
              }
LAB_0047d7c6:
              FUN_00484350(0x31,&this[1].Controller_data,0x3f800000,0x3f800000);
            }
          }
          else {
            FUN_0040ee70(*(int *)(*(int *)(*(int *)&this[0x67b7].Controller_data.field_0xe8 + 0x11dc
                                          ) + local_1c * 0xc) + 4 + iVar12);
            iVar5 = *(int *)(*(int *)(*(int *)&this[0x67b7].Controller_data.field_0xe8 + 0x11dc) +
                            iVar5 * 0xc);
            piVar9 = (int *)(iVar5 + iVar12);
            *piVar9 = *piVar9 + -1;
            piVar9 = (int *)(iVar5 + iVar12);
            if (*piVar9 < 1) {
              *piVar9 = 0;
              *(undefined2 *)(piVar9 + 1) = 0;
            }
            iVar5 = *(int *)&this[0x67b7].Controller_data.field_0xe8;
            iVar6 = FUN_004c76e0();
            piVar9 = (int *)(iVar5 + 0x1304);
            *piVar9 = *piVar9 + iVar6;
            FUN_00484350(0x3a,*(int *)&this[0x67b7].Controller_data.field_0xe8 + 0x10,0x3f400000,
                         0x3f800000);
            local_284 = 1;
            local_294[0] = 0;
            local_290 = 0;
            local_28c = 0;
            local_288 = 0;
            local_286 = 0;
            local_180 = 0;
            memset(local_280,0,0x100);
            local_298 = 1;
            FUN_0042c5e0(local_154);
            iVar5 = this[0x67bc].Controller_data.offset_0x128;
            iVar12 = FUN_00451f10(iVar5,*(undefined4 *)(iVar5 + 4),&local_298);
            iVar6 = this[0x67bc].Controller_data.offset_0x12c;
            if (iVar6 == 0xe07037) {
                    /* WARNING: Subroutine does not return */
              std::_Xlength_error("list<T> too long");
            }
            this[0x67bc].Controller_data.offset_0x12c = iVar6 + 1;
            *(int *)(iVar5 + 4) = iVar12;
            **(int **)(iVar12 + 4) = iVar12;
            if ((10 < (uint)this[0x67bc].Controller_data.offset_0x12c) &&
               (piVar9 = (int *)this[0x67bc].Controller_data.offset_0x128, piVar13 = (int *)*piVar9,
               piVar13 != piVar9)) {
              *(int *)piVar13[1] = *piVar13;
              *(int *)(*piVar13 + 4) = piVar13[1];
                    /* WARNING: Subroutine does not return */
              operator_delete(piVar13);
            }
            FUN_004a2300();
          }
        }
        else {
          iVar5 = *(int *)&this[0x67b9].Controller_data.field_0x9c;
          *(int *)(iVar5 + 0x160) = local_1c;
          *(int *)(iVar5 + 0x164) = local_18;
        }
      }
      else {
        iVar5 = *(int *)&this[0x67b9].Controller_data.field_0xa4;
        *(int *)(iVar5 + 0x164) = local_1c;
        *(int *)(iVar5 + 0x168) = local_18;
        *(undefined4 *)(*(int *)&this[0x67b9].Controller_data.field_0xa4 + 0x160) = 0;
      }
    }
LAB_0047dd86:
    FUN_004a14c0();
    goto LAB_0047dd8d;
  }
  iVar5 = *(int *)(*(int *)&this[0x67b9].Controller_data.field_0x60 + 0x3c);
  if (*(int *)(*(int *)(iVar5 + 0x94) + *(int *)(iVar5 + 0x68) * 4) != 0) {
    FUN_004c6610(1);
    iVar5 = *(int *)&this[0x67b9].Controller_data.field_0xf8;
    if ((((*(int *)(iVar5 + 0x18c) < 0) ||
         ((*(int *)&this[0x67bb].Controller_data.offset_0x8 -
          *(int *)((int)&this[0x67bb].Controller_data.offset_0x0 + 4)) / 0xc <=
          *(int *)(iVar5 + 0x18c))) || (*(int *)(iVar5 + 400) < 0)) ||
       (iVar6 = *(int *)((int)&this[0x67bb].Controller_data.offset_0x0 + 4),
       (*(int *)(iVar6 + 4 + *(int *)(iVar5 + 0x18c) * 0xc) -
       *(int *)(iVar6 + *(int *)(iVar5 + 0x18c) * 0xc)) / 0x11c <= *(int *)(iVar5 + 400))) {
      local_2a4[0] = 0;
      local_2a0 = 0;
      local_29c = 0;
      local_298 = local_298 & 0xff000000;
      local_294[0] = 1;
      local_190 = 0;
      memset(&local_290,0,0x100);
      local_18c = 0;
      local_188 = (void *)0x0;
      local_184 = 0;
      local_180 = 0;
      local_8 = 2;
LAB_0047bc99:
      iVar5 = *(int *)&this[0x67b9].Controller_data.field_0x104;
      FUN_0042c5e0(local_2a4);
      *(undefined4 *)(iVar5 + 0x284) = local_18c;
      FUN_00468050(&local_188);
    }
    else {
      FUN_0042f360();
      iVar5 = *(int *)&this[0x67b9].Controller_data.field_0xf8;
      local_8 = 0;
      cVar3 = FUN_0059cff0(*(int *)(iVar5 + 400) * 0x11c +
                           *(int *)(*(int *)((int)&this[0x67bb].Controller_data.offset_0x0 + 4) +
                                   *(int *)(iVar5 + 0x18c) * 0xc) + 4,local_2a4);
      if (cVar3 != '\0') goto LAB_0047bc99;
      iVar6 = FUN_0042f360();
      iVar5 = *(int *)&this[0x67b9].Controller_data.field_0x104;
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_0042c5e0(iVar6);
      *(undefined4 *)(iVar5 + 0x284) = *(undefined4 *)(iVar6 + 0x118);
      FUN_00468050(iVar6 + 0x11c);
      FUN_0042f430();
    }
    local_8 = 0xffffffff;
    if (local_188 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_188);
    }
  }
  iVar5 = *(int *)(*(int *)&this[0x67b9].Controller_data.field_0x7c + 0x3c);
  if (*(int *)(*(int *)(iVar5 + 0x94) + *(int *)(iVar5 + 0x68) * 4) != 0) {
    iVar5 = *(int *)&this[0x67b9].Controller_data.field_0x94;
    iVar6 = *(int *)(iVar5 + 0x160);
    if (iVar6 != 0) {
      if ((*(int *)(iVar5 + 0x2ac) < 0) || (iVar5 == -0x2b0)) {
        FUN_00588250(*(undefined1 *)(iVar6 + 0xd),(int)*(short *)(iVar6 + 0x10));
      }
      else {
        FUN_0058ce40();
      }
    }
  }
  if (this[0x67b9].Controller_data.field_0x90 != '\0') {
    iVar6 = FUN_0047b1b0();
    iVar5 = *(int *)&this[0x67b7].Controller_data.field_0xe8;
    if (((*(char *)(iVar5 + 0x11ec) == '\0') ||
        (cVar3 = FUN_0043e420(iVar5 + 0x11ec), cVar3 != '\0')) || (iVar6 == 0)) {
      iVar5 = *(int *)&this[0x67b7].Controller_data.field_0xe8;
      bVar14 = false;
      if ((iVar6 == iVar5 + 0xaa8) &&
         ((*(int *)(iVar5 + 0x11e8) == 0 || (*(char *)(iVar5 + 0x11ec) == '\x03')))) {
        if ((*(char *)(iVar5 + 0x11ec) == '\x03') &&
           (((((((cVar3 = *(char *)(iVar5 + 0x11ed), cVar3 == '\x0f' || (cVar3 == '\x10')) ||
                (cVar3 == '\x11')) || ((cVar3 == '\x05' || (cVar3 == '\n')))) ||
              (((cVar3 == '\v' || ((cVar3 == '\x12' || (cVar3 == '\b')))) || (cVar3 == '\x06')))) ||
             (cVar3 == '\a')) && (*(char *)(iVar5 + 0x990) != '\0')))) {
          FUN_0046ebe0(iVar5 + 0x990,0xffffffff);
          FUN_004c6350();
          FUN_004c64c0();
          local_154[0] = '\0';
          local_154[1] = '\0';
          local_150 = 0;
          local_14c = 0;
          local_148 = 0;
          local_146 = 0;
          local_144 = 1;
          local_40 = 0;
          memset(local_140,0,0x100);
          FUN_0042c5e0(local_154);
        }
        iVar5 = *(int *)&this[0x67b7].Controller_data.field_0xe8;
        FUN_0040ee70(iVar5 + 0xaa8);
        FUN_0042c5e0(iVar5 + 0x11ec);
        FUN_0042c5e0(local_154);
        bVar14 = true;
      }
      iVar5 = *(int *)&this[0x67b7].Controller_data.field_0xe8;
      if (iVar6 == iVar5 + 0x990) {
        if ((*(char *)(iVar5 + 0x11ec) == '\x03') &&
           ((((((cVar3 = *(char *)(iVar5 + 0x11ed), cVar3 == '\x0f' || (cVar3 == '\x10')) ||
               (cVar3 == '\x11')) ||
              (((cVar3 == '\x05' || (cVar3 == '\n')) ||
               ((cVar3 == '\v' || ((cVar3 == '\x12' || (cVar3 == '\b')))))))) ||
             ((cVar3 == '\x06' || (cVar3 == '\a')))) &&
            ((*(char *)(iVar5 + 0x11ed) != '\x06' && (*(char *)(iVar5 + 0x11ed) != '\a')))))) {
          FUN_00484350(0x32,&this[1].Controller_data,0x3f800000,0x3f800000);
        }
        else if ((*(int *)(iVar5 + 0x11e8) == 0) || (*(char *)(iVar5 + 0x11ec) == '\x03')) {
          if ((((*(char *)(iVar5 + 0x11ec) == '\x03') &&
               ((((cVar3 = *(char *)(iVar5 + 0x11ed), cVar3 == '\x0f' || (cVar3 == '\x10')) ||
                 (cVar3 == '\x11')) ||
                (((((cVar3 == '\x05' || (cVar3 == '\n')) ||
                   ((cVar3 == '\v' || ((cVar3 == '\x12' || (cVar3 == '\b')))))) || (cVar3 == '\x06')
                  ) || (cVar3 == '\a')))))) ||
              ((*(char *)(iVar5 + 0xaa8) == '\x03' &&
               (((((((cVar3 = *(char *)(iVar5 + 0xaa9), cVar3 == '\x0f' || (cVar3 == '\x10')) ||
                    (cVar3 == '\x11')) || ((cVar3 == '\x05' || (cVar3 == '\n')))) || (cVar3 == '\v')
                  ) || ((cVar3 == '\x12' || (cVar3 == '\b')))) ||
                ((cVar3 == '\x06' || (cVar3 == '\a')))))))) && (*(char *)(iVar5 + 0xaa8) != '\0')) {
            FUN_0046ebe0(iVar5 + 0xaa8,0xffffffff);
            FUN_004c6350();
            FUN_004c64c0();
            local_144 = 1;
            local_154[0] = '\0';
            local_154[1] = '\0';
            local_150 = 0;
            local_14c = 0;
            local_148 = 0;
            local_146 = 0;
            local_40 = 0;
            memset(local_140,0,0x100);
            FUN_0042c5e0(local_154);
          }
          iVar5 = *(int *)&this[0x67b7].Controller_data.field_0xe8;
          FUN_0040ee70(iVar5 + 0x990);
          FUN_0042c5e0(iVar5 + 0x11ec);
          FUN_0042c5e0(local_154);
          bVar14 = true;
        }
      }
      iVar12 = *(int *)&this[0x67b7].Controller_data.field_0xe8;
      iVar5 = iVar12 + 0x1020;
      if ((iVar6 == iVar5) &&
         (((*(int *)(iVar12 + 0x11e8) == 0 || (*(char *)(iVar12 + 0x11ec) == '\x13')) ||
          (*(char *)(iVar12 + 0x11ec) == '\x14')))) {
        if ((*(int *)(iVar12 + 0x11e8) < 2) || (*(char *)(iVar12 + 0x11ec) != '\x14')) {
          FUN_0040ee70(iVar5);
          FUN_0042c5e0(iVar12 + 0x11ec);
          FUN_0042c5e0(local_154);
          bVar14 = true;
        }
        else {
          cVar3 = FUN_0042f4a0(iVar5);
          if (cVar3 == '\0') {
            if (*(char *)(iVar12 + 0x1020) != '\0') {
              FUN_0046ebe0(iVar12 + 0x1020,0xffffffff);
            }
            FUN_0042c5e0(*(int *)&this[0x67b7].Controller_data.field_0xe8 + 0x11ec);
            iVar5 = *(int *)&this[0x67b7].Controller_data.field_0xe8;
            *(int *)(iVar5 + 0x11e8) = *(int *)(iVar5 + 0x11e8) + -1;
            if (*(int *)(iVar5 + 0x11e8) < 1) {
              *(int *)(iVar5 + 0x11e8) = 0;
              *(undefined2 *)(iVar5 + 0x11ec) = 0;
            }
          }
        }
      }
      iVar5 = *(int *)&this[0x67b7].Controller_data.field_0xe8;
      if ((iVar6 == iVar5 + 0x418) &&
         ((*(int *)(iVar5 + 0x11e8) == 0 || (*(char *)(iVar5 + 0x11ec) == '\b')))) {
        FUN_0040ee70(iVar5 + 0x418);
        FUN_0042c5e0(iVar5 + 0x11ec);
        FUN_0042c5e0(local_154);
        bVar14 = true;
      }
      iVar5 = *(int *)&this[0x67b7].Controller_data.field_0xe8;
      if ((iVar6 == iVar5 + 0xbc0) &&
         ((*(int *)(iVar5 + 0x11e8) == 0 || (*(char *)(iVar5 + 0x11ec) == '\t')))) {
        FUN_0040ee70(iVar5 + 0xbc0);
        FUN_0042c5e0(iVar5 + 0x11ec);
        FUN_0042c5e0(local_154);
        bVar14 = true;
      }
      iVar5 = *(int *)&this[0x67b7].Controller_data.field_0xe8;
      if ((iVar6 == iVar5 + 0xcd8) &&
         ((*(int *)(iVar5 + 0x11e8) == 0 || (*(char *)(iVar5 + 0x11ec) == '\t')))) {
        FUN_0040ee70(iVar5 + 0xcd8);
        FUN_0042c5e0(iVar5 + 0x11ec);
        FUN_0042c5e0(local_154);
        bVar14 = true;
      }
      iVar5 = *(int *)&this[0x67b7].Controller_data.field_0xe8;
      if ((iVar6 == iVar5 + 0x878) &&
         ((*(int *)(iVar5 + 0x11e8) == 0 || (*(char *)(iVar5 + 0x11ec) == '\a')))) {
        FUN_0040ee70(iVar5 + 0x878);
        FUN_0042c5e0(iVar5 + 0x11ec);
        FUN_0042c5e0(local_154);
        bVar14 = true;
      }
      iVar5 = *(int *)&this[0x67b7].Controller_data.field_0xe8;
      if ((iVar6 == iVar5 + 0xf08) &&
         ((*(int *)(iVar5 + 0x11e8) == 0 || (*(char *)(iVar5 + 0x11ec) == '\x17')))) {
        FUN_0040ee70(iVar5 + 0xf08);
        FUN_0042c5e0(iVar5 + 0x11ec);
        FUN_0042c5e0(local_154);
        bVar14 = true;
      }
      iVar5 = *(int *)&this[0x67b7].Controller_data.field_0xe8;
      if ((iVar6 == iVar5 + 0xdf0) &&
         ((*(int *)(iVar5 + 0x11e8) == 0 || (*(char *)(iVar5 + 0x11ec) == '\x18')))) {
        FUN_0040ee70(iVar5 + 0xdf0);
        FUN_0042c5e0(iVar5 + 0x11ec);
        FUN_0042c5e0(local_154);
        bVar14 = true;
      }
      iVar5 = *(int *)&this[0x67b7].Controller_data.field_0xe8;
      if ((iVar6 == iVar5 + 0x530) &&
         ((*(int *)(iVar5 + 0x11e8) == 0 || (*(char *)(iVar5 + 0x11ec) == '\x04')))) {
        FUN_0040ee70(iVar5 + 0x530);
        FUN_0042c5e0(iVar5 + 0x11ec);
        FUN_0042c5e0(local_154);
        bVar14 = true;
      }
      iVar5 = *(int *)&this[0x67b7].Controller_data.field_0xe8;
      if ((iVar6 == iVar5 + 0x760) &&
         ((*(int *)(iVar5 + 0x11e8) == 0 || (*(char *)(iVar5 + 0x11ec) == '\x05')))) {
        FUN_0040ee70(iVar5 + 0x760);
        FUN_0042c5e0(iVar5 + 0x11ec);
        FUN_0042c5e0(local_154);
        bVar14 = true;
      }
      iVar5 = *(int *)&this[0x67b7].Controller_data.field_0xe8;
      if ((iVar6 == iVar5 + 0x648) &&
         ((*(int *)(iVar5 + 0x11e8) == 0 || (*(char *)(iVar5 + 0x11ec) == '\x06')))) {
        FUN_0040ee70(iVar5 + 0x648);
        FUN_0042c5e0(iVar5 + 0x11ec);
        FUN_0042c5e0(local_154);
      }
      else if (!bVar14) goto LAB_0047c54d;
      iVar5 = *(int *)&this[0x67b7].Controller_data.field_0xe8;
      if (*(char *)(iVar5 + 0x11ec) == '\0') {
        *(int *)(iVar5 + 0x11e8) = *(int *)(iVar5 + 0x11e8) + -1;
        if (*(int *)(iVar5 + 0x11e8) < 1) {
          *(undefined4 *)(iVar5 + 0x11e8) = 0;
          *(undefined2 *)(iVar5 + 0x11ec) = 0;
        }
      }
      else {
        *(undefined4 *)(iVar5 + 0x11e8) = 1;
      }
      if (*(int *)(*(int *)&this[0x67b7].Controller_data.field_0xe8 + 0x11e8) == 0) {
        uVar15 = 0x58;
      }
      else {
        uVar15 = 0x57;
      }
    }
    else {
      uVar15 = 0x32;
    }
    FUN_00484350(uVar15,&this[1].Controller_data,0x3f800000,0x3f800000);
  }
LAB_0047c54d:
  iVar5 = *(int *)(*(int *)&this[0x67b9].Controller_data.field_0x5c + 0x3c);
  if ((((*(int *)(*(int *)(iVar5 + 0x94) + *(int *)(iVar5 + 0x68) * 4) != 0) &&
       (iVar5 = *(int *)&this[0x67b9].Controller_data.field_0xf4, -1 < *(int *)(iVar5 + 0x184))) &&
      (iVar6 = *(int *)&this[0x67b7].Controller_data.field_0xe8,
      *(int *)(iVar5 + 0x184) < (*(int *)(iVar6 + 0x11e0) - *(int *)(iVar6 + 0x11dc)) / 0xc)) &&
     ((-1 < *(int *)(iVar5 + 0x188) &&
      (*(int *)(iVar5 + 0x188) <
       (*(int *)(*(int *)(iVar6 + 0x11dc) + 4 + *(int *)(iVar5 + 0x184) * 0xc) -
       *(int *)(*(int *)(iVar6 + 0x11dc) + *(int *)(iVar5 + 0x184) * 0xc)) / 0x11c)))) {
    iVar12 = *(int *)(iVar6 + 0x11e8);
    if (iVar12 == 0) {
LAB_0047c6f9:
      iVar7 = *(int *)(iVar6 + 0x11dc);
    }
    else {
      iVar7 = FUN_0047fa30(iVar6 + 0x11ec);
      if (iVar7 != *(int *)(iVar5 + 0x1b4)) {
        FUN_00484350(0x32,&this[1].Controller_data,0x3f800000,0x3f800000);
        goto LAB_0047c748;
      }
      if ((iVar12 == 0) ||
         (((cVar3 = *(char *)(iVar6 + 0x11ec), cVar3 != '\x01' && (cVar3 != '\n')) &&
          ((cVar3 != '\f' && (((cVar3 != '\r' && (cVar3 != '\v')) && (cVar3 != '\x15'))))))))
      goto LAB_0047c6f9;
      iVar7 = *(int *)(iVar6 + 0x11dc);
      cVar3 = FUN_0042f4a0(*(int *)(iVar7 + *(int *)(iVar5 + 0x184) * 0xc) + 4 +
                           *(int *)(iVar5 + 0x188) * 0x11c);
      if (cVar3 != '\0') {
        piVar9 = (int *)(*(int *)(iVar7 + *(int *)(iVar5 + 0x184) * 0xc) +
                        *(int *)(iVar5 + 0x188) * 0x11c);
        *piVar9 = *piVar9 + iVar12;
        *(undefined4 *)(*(int *)&this[0x67b7].Controller_data.field_0xe8 + 0x11e8) = 0;
        *(undefined1 *)(*(int *)&this[0x67b7].Controller_data.field_0xe8 + 0x11ec) = 0;
        *(undefined1 *)(*(int *)&this[0x67b7].Controller_data.field_0xe8 + 0x11ed) = 0;
        goto LAB_0047c748;
      }
    }
    if ((this->Controller_data).field_0x25 == '\0') {
      FUN_0044a690(*(int *)(iVar5 + 0x188) * 0x11c + *(int *)(iVar7 + *(int *)(iVar5 + 0x184) * 0xc)
                   ,(int *)(iVar6 + 0x11e8));
      if (*(int *)(*(int *)&this[0x67b7].Controller_data.field_0xe8 + 0x11e8) == 0) {
        uVar15 = 0x58;
      }
      else {
        uVar15 = 0x57;
      }
      FUN_00484320(uVar15);
    }
  }
LAB_0047c748:
  iVar5 = *(int *)(*(int *)&this[0x67b9].Controller_data.field_0xa0 + 0x3c);
  if (((*(int *)(*(int *)(iVar5 + 0x94) + *(int *)(iVar5 + 0x68) * 4) != 0) &&
      (cVar3 = FUN_00411340(), cVar3 != '\0')) && (iVar5 = FUN_0040f570(), iVar5 != 0)) {
    iVar6 = FUN_0040f4f0();
    iVar5 = *(int *)&this[0x67b7].Controller_data.field_0xe8;
    if (iVar6 <= *(int *)(iVar5 + 0x1308)) {
      iVar6 = FUN_0040f4f0();
      piVar9 = (int *)(iVar5 + 0x1308);
      *piVar9 = *piVar9 - iVar6;
      uVar2 = *(undefined2 *)(*(int *)&this[0x67b7].Controller_data.field_0xe8 + 400);
      iVar5 = FUN_0040f570();
      *(undefined2 *)(iVar5 + 0x10) = uVar2;
      iVar5 = FUN_0040f570();
      *(byte *)(iVar5 + 0xe) = *(byte *)(iVar5 + 0xe) | 1;
      FUN_00484350(0x2e,*(int *)&this[0x67b7].Controller_data.field_0xe8 + 0x10,0x3f800000,
                   0x3f800000);
    }
  }
  if (this[0x67b9].Controller_data.field_0x91 != '\0') {
    cVar3 = FUN_004df880();
    if (cVar3 != '\0') {
      iVar6 = FUN_004df9c0();
      iVar5 = *(int *)&this[0x67b7].Controller_data.field_0xe8;
      if (iVar6 <= *(int *)(iVar5 + 0x1304)) {
        iVar6 = FUN_004df9c0();
        piVar9 = (int *)(iVar5 + 0x1304);
        *piVar9 = *piVar9 - iVar6;
        iVar5 = 0x1138;
        do {
          *(undefined4 *)(iVar5 + *(int *)&this[0x67b7].Controller_data.field_0xe8) =
               *(undefined4 *)(*(int *)&this[0x67b9].Controller_data.field_0xac + -0xfd8 + iVar5);
          iVar5 = iVar5 + 4;
        } while (iVar5 < 0x1164);
        *(undefined1 *)(*(int *)&this[0x67b7].Controller_data.field_0xe8 + 0x141) =
             *(undefined1 *)(*(int *)&this[0x67b9].Controller_data.field_0xac + 0x18c);
      }
    }
    cVar3 = FUN_004df760();
    if (cVar3 != '\0') {
      iVar5 = 0x160;
      do {
        *(undefined4 *)(iVar5 + *(int *)&this[0x67b9].Controller_data.field_0xac) =
             *(undefined4 *)(*(int *)&this[0x67b7].Controller_data.field_0xe8 + 0xfd8 + iVar5);
        iVar5 = iVar5 + 4;
      } while (iVar5 < 0x18c);
      *(uint *)(*(int *)&this[0x67b9].Controller_data.field_0xac + 0x18c) =
           (uint)*(byte *)(*(int *)&this[0x67b7].Controller_data.field_0xe8 + 0x141);
    }
  }
  iVar5 = *(int *)(*(int *)&this[0x67b9].Controller_data.field_0x98 + 0x3c);
  if ((*(int *)(*(int *)(iVar5 + 0x94) + *(int *)(iVar5 + 0x68) * 4) != 0) &&
     (cVar3 = FUN_00450ab0(), cVar3 != '\0')) {
    iVar5 = *(int *)&this[0x67b7].Controller_data.field_0xe8;
    iVar6 = FUN_00450920();
    if (iVar6 <= *(int *)(iVar5 + 0x1304)) {
      iVar6 = *(int *)&this[0x67b9].Controller_data.field_0x9c;
      if (*(int *)(iVar6 + 0x168) == 1) {
        if (((-1 < *(int *)(iVar6 + 0x160)) &&
            (iVar12 = *(int *)(iVar6 + 0x160),
            iVar12 < (*(int *)(iVar5 + 0x11e0) - *(int *)(iVar5 + 0x11dc)) / 0xc)) &&
           ((iVar6 = *(int *)(iVar6 + 0x164), -1 < iVar6 &&
            (((iVar5 = *(int *)(iVar5 + 0x11dc),
              iVar6 < (*(int *)(iVar5 + 4 + iVar12 * 0xc) - *(int *)(iVar5 + iVar12 * 0xc)) / 0x11c
              && (*(int *)(iVar6 * 0x11c + *(int *)(iVar5 + iVar12 * 0xc)) != 0)) &&
             (cVar3 = FUN_00450b70(), cVar3 != '\0')))))) {
          iVar5 = *(int *)&this[0x67b7].Controller_data.field_0xe8;
          iVar6 = FUN_00450920();
          piVar9 = (int *)(iVar5 + 0x1304);
          *piVar9 = *piVar9 - iVar6;
          iVar5 = *(int *)&this[0x67b9].Controller_data.field_0x9c;
          iVar5 = *(int *)(*(int *)(*(int *)&this[0x67b7].Controller_data.field_0xe8 + 0x11dc) +
                          *(int *)(iVar5 + 0x160) * 0xc) + *(int *)(iVar5 + 0x164) * 0x11c;
          FUN_0042f140();
          uVar4 = rand();
          uVar4 = uVar4 & 0x80000001;
          bVar14 = uVar4 == 0;
          if ((int)uVar4 < 0) {
            bVar14 = (uVar4 - 1 | 0xfffffffe) == 0xffffffff;
          }
          uVar1 = *(undefined1 *)(iVar5 + 0x10);
          iVar5 = (int)*(short *)(iVar5 + 0x14);
          if (bVar14) {
            uVar15 = FUN_005f8ad0(local_3bc,iVar5,uVar1,0xffffffff);
          }
          else {
            uVar15 = FUN_005f51e0(local_294,iVar5,uVar1,0xffffffff);
          }
          FUN_0040ee70(uVar15);
          FUN_0046ebe0(local_154,0xffffffff);
          FUN_004c6350();
          FUN_004c64c0();
          FUN_00484350(0x2e,*(int *)&this[0x67b7].Controller_data.field_0xe8 + 0x10,0x3f800000,
                       0x3f800000);
          std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
          basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
                    ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                      *)this,local_154,*(int *)&this[0x67b7].Controller_data.field_0xe8);
        }
      }
      else if (((((*(int *)(iVar6 + 0x168) == 0) && (-1 < *(int *)(iVar6 + 0x160))) &&
                (iVar12 = *(int *)(iVar6 + 0x160),
                iVar12 < (*(int *)(iVar5 + 0x11e0) - *(int *)(iVar5 + 0x11dc)) / 0xc)) &&
               ((iVar6 = *(int *)(iVar6 + 0x164), -1 < iVar6 &&
                (iVar5 = *(int *)(iVar5 + 0x11dc),
                iVar6 < (*(int *)(iVar5 + 4 + iVar12 * 0xc) - *(int *)(iVar5 + iVar12 * 0xc)) /
                        0x11c)))) &&
              ((*(int *)(iVar6 * 0x11c + *(int *)(iVar5 + iVar12 * 0xc)) != 0 &&
               (cVar3 = FUN_00450b70(), cVar3 != '\0')))) {
        iVar5 = *(int *)&this[0x67b9].Controller_data.field_0x9c;
        iVar5 = *(int *)(*(int *)(*(int *)&this[0x67b7].Controller_data.field_0xe8 + 0x11dc) +
                        *(int *)(iVar5 + 0x160) * 0xc) + *(int *)(iVar5 + 0x164) * 0x11c;
        if (*(char *)(iVar5 + 0x11) != '\0') {
          FUN_0042f140();
          iVar6 = *(int *)&this[0x67b9].Controller_data.field_0x9c;
          if (*(int *)(*(int *)(iVar6 + 0x164) * 0x11c +
                      *(int *)(*(int *)(*(int *)&this[0x67b7].Controller_data.field_0xe8 + 0x11dc) +
                              *(int *)(iVar6 + 0x160) * 0xc)) != 0) {
            *(undefined4 *)(iVar6 + 0x160) = 0xffffffff;
            *(undefined4 *)(iVar6 + 0x164) = 0xffffffff;
          }
          iVar6 = rand();
          iVar6 = iVar6 % 6 + 5;
          FUN_0042f3e0();
          local_154[0] = 10;
          local_148 = CONCAT11(*(undefined1 *)(iVar5 + 0x11),(undefined1)local_148);
          if (0 < iVar6) {
            do {
              FUN_0044d460(local_154);
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          iVar5 = *(int *)&this[0x67b7].Controller_data.field_0xe8;
          *(undefined4 *)&this[0xcf70].Controller_data.field_0x2c = 0;
          FUN_00484350(0x2e,iVar5 + 0x10,0x3f800000,0x3f800000);
        }
        iVar5 = *(int *)&this[0x67b9].Controller_data.field_0x9c;
        piVar9 = (int *)(*(int *)(iVar5 + 0x164) * 0x11c +
                        *(int *)(*(int *)(*(int *)&this[0x67b7].Controller_data.field_0xe8 + 0x11dc)
                                + *(int *)(iVar5 + 0x160) * 0xc));
        *piVar9 = *piVar9 + -1;
        if (*piVar9 < 1) {
          *piVar9 = 0;
          *(undefined2 *)(piVar9 + 1) = 0;
        }
      }
    }
  }
LAB_0047dd8d:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
  while( true ) {
    local_18 = *(int *)&this[0x67b7].Controller_data.field_0xe8;
    iVar5 = FUN_004c76e0();
    if (iVar5 <= *(int *)(local_18 + 0x1304)) {
      FUN_0046ebe0(piVar13 + 3,0xffffffff);
      iVar5 = *(int *)&this[0x67b7].Controller_data.field_0xe8;
      iVar6 = FUN_004c76e0();
      piVar9 = (int *)(iVar5 + 0x1304);
      *piVar9 = *piVar9 - iVar6;
      local_3dc = local_3dc + 1;
    }
    local_3d8 = local_3d8 + 1;
    iVar5 = local_3dc;
    if (piVar13[2] <= local_3d8) break;
LAB_0047daa0:
    cVar3 = FUN_0043e4a0(piVar13 + 3);
    if (cVar3 == '\0') {
      local_168 = 7;
      local_16c = 0;
      local_17c[0] = (void *)((uint)local_17c[0] & 0xffff0000);
      FUN_0040f7a0(L"You can\'t carry more of these items.\n",0x25);
      local_8 = 3;
      local_24 = 0x3f800000;
      local_20 = 0x3e4ccccd;
      local_1c = 0x3e4ccccd;
      local_18 = 0x3f800000;
      FUN_0043ab30(local_17c,&local_24);
      local_8 = 0xffffffff;
      if (7 < local_168) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_17c[0]);
      }
      FUN_00484350(0x31,*(int *)&this[0x67b7].Controller_data.field_0xe8 + 0x10,0x3f800000,
                   0x3f800000);
      iVar5 = local_3dc;
      break;
    }
  }
LAB_0047dbe1:
  piVar9 = piVar13 + 2;
  *piVar9 = *piVar9 - iVar5;
  if ((*piVar9 == 0) && (piVar13 != (int *)this[0x67bc].Controller_data.offset_0x128)) {
    *(int *)piVar13[1] = *piVar13;
    *(int *)(*piVar13 + 4) = piVar13[1];
                    /* WARNING: Subroutine does not return */
    operator_delete(piVar13);
  }
  FUN_00484350(0x39,*(int *)&this[0x67b7].Controller_data.field_0xe8 + 0x10,0x3f800000,0x3f800000);
  FUN_004a2300();
LAB_0047dd70:
  FUN_004c6350();
  FUN_004c64c0();
  goto LAB_0047dd86;
}


/* cube::GameController::vfunction9 @ 0047ddd0  kind=game  attributed-by=rtti  size=979 */

void __thiscall cube::GameController::vfunction9(GameController *this,int param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  DWORD DVar5;
  int iVar6;
  void **ppvVar7;
  void *local_4c [5];
  uint local_38;
  int local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e6078;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar3;
  Controller::vfunction9((Controller *)this,param_1);
  cVar2 = (*this->vftablePtr->vfunction2)(this,uVar3);
  if (cVar2 != '\0') {
    if (param_1 == 0) {
      FUN_00652940();
    }
    else if (param_1 == 1) {
      FUN_00652b60();
    }
  }
  iVar6 = *(int *)(*(int *)&this[0x67b9].Controller_data.field_0x98 + 0x3c);
  if ((*(int *)(*(int *)(iVar6 + 0x94) + *(int *)(iVar6 + 0x68) * 4) != 0) &&
     (cVar2 = FUN_00450a00(), cVar2 != '\0')) {
    iVar6 = *(int *)(*(int *)&this[0x67b9].Controller_data.field_0x98 + 0x3c);
    *(undefined4 *)(*(int *)(iVar6 + 0x94) + *(int *)(iVar6 + 0x68) * 4) = 0;
    iVar6 = *(int *)&this[0x67b9].Controller_data.field_0x9c;
    *(undefined4 *)(iVar6 + 0x160) = 0xffffffff;
    *(undefined4 *)(iVar6 + 0x164) = 0xffffffff;
  }
  iVar6 = *(int *)(*(int *)&this[0x67b9].Controller_data.field_0xa0 + 0x3c);
  if ((*(int *)(*(int *)(iVar6 + 0x94) + *(int *)(iVar6 + 0x68) * 4) != 0) &&
     (cVar2 = FUN_00450a00(), cVar2 != '\0')) {
    iVar6 = *(int *)(*(int *)&this[0x67b9].Controller_data.field_0xa0 + 0x3c);
    *(undefined4 *)(*(int *)(iVar6 + 0x94) + *(int *)(iVar6 + 0x68) * 4) = 0;
    iVar6 = *(int *)&this[0x67b9].Controller_data.field_0xa4;
    *(undefined4 *)(iVar6 + 0x164) = 0xffffffff;
    *(undefined4 *)(iVar6 + 0x168) = 0xffffffff;
    *(undefined4 *)(*(int *)&this[0x67b9].Controller_data.field_0xa4 + 0x160) = 0;
  }
  if ((param_1 == 0) && (this[0x67b7].Controller_data.field_0xfc != '\0')) {
    if (this[0x67bd].Controller_data.field_0x94 != '\0') {
      local_1c = 0xffffffff;
      local_18 = 0xffffffff;
      cVar2 = FUN_004688a0(&local_1c);
      if ((cVar2 != '\0') &&
         (cVar2 = FUN_00468840(&this[0x67bd].Controller_data.field_0x84), cVar2 != '\0')) {
        FUN_00601cb0();
        uVar3 = *(int *)&this[0x67bd].Controller_data.field_0x90 * 0x100 + 0x80;
        uVar4 = *(int *)&this[0x67bd].Controller_data.field_0x8c * 0x100 + 0x80;
        local_28 = ((int)uVar3 >> 0x1f) << 0x10 | uVar3 >> 0x10;
        local_30 = ((int)uVar4 >> 0x1f) << 0x10 | uVar4 >> 0x10;
        local_2c = uVar3 * 0x10000;
        local_34 = uVar4 * 0x10000;
        local_24 = 0;
        FUN_0042c5b0(&local_34);
        FUN_00601e90();
        *(undefined4 *)&this[0x67bd].Controller_data.field_0x8c = 0xffffffff;
        *(undefined4 *)&this[0x67bd].Controller_data.field_0x90 = 0xffffffff;
        *(undefined4 *)&this[0x67bd].Controller_data.field_0x84 = 0xffffffff;
        *(undefined4 *)&this[0x67bd].Controller_data.field_0x88 = 0xffffffff;
        this[0x67b7].Controller_data.field_0xfc = 0;
        goto LAB_0047e00e;
      }
    }
    *(undefined4 *)&this[0x67bd].Controller_data.field_0x8c =
         *(undefined4 *)&this[0x67bd].Controller_data.field_0x84;
    *(undefined4 *)&this[0x67bd].Controller_data.field_0x90 =
         *(undefined4 *)&this[0x67bd].Controller_data.field_0x88;
  }
LAB_0047e00e:
  iVar6 = *(int *)&this[0x67b9].Controller_data.field_0xb0;
  iVar1 = *(int *)(iVar6 + 0x3c);
  if (((*(int *)(*(int *)(iVar1 + 0x94) + *(int *)(iVar1 + 0x68) * 4) != 0) && (param_1 == 0)) &&
     (-1 < *(int *)(*(int *)&this[0x67b9].Controller_data.field_0xb4 + 0x160))) {
    iVar6 = *(int *)(iVar6 + 0x3c);
    *(undefined4 *)(*(int *)(iVar6 + 0x94) + *(int *)(iVar6 + 0x68) * 4) = 0;
    iVar6 = *(int *)&this[0x67b9].Controller_data.field_0xb4;
    this[0x67b9].Controller_data.field_0x92 = 0;
    iVar6 = *(int *)(iVar6 + 0x160);
    if (iVar6 == 0) {
      iVar6 = *(int *)(*(int *)&this[0x67ba].Controller_data.field_0x64 + 0x3c);
      *(undefined4 *)(*(int *)(iVar6 + 0x94) + *(int *)(iVar6 + 0x68) * 4) = 1;
    }
    else if (iVar6 == 1) {
      FUN_00487520(this,*(undefined4 *)&this[0x67ba].Controller_data.field_0x70,
                   *(undefined4 *)&this[0x67b7].Controller_data.field_0xe8);
      iVar6 = *(int *)&this[0x67ba].Controller_data.field_0x74;
      FUN_004878a0(this,iVar6,
                   *(undefined4 *)(*(int *)&this[0x67ba].Controller_data.field_0x40 + iVar6 * 4),1);
      FUN_004719f0();
      iVar6 = 0;
      if (0 < (int)(this[0x67b9].Controller_data.offset_0x128 -
                    this[0x67b9].Controller_data.offset_0x124 & 0xfffffffc)) {
        do {
          FUN_004806c0(this,iVar6,
                       *(undefined4 *)(this[0x67b9].Controller_data.offset_0x124 + iVar6 * 4));
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)(this[0x67b9].Controller_data.offset_0x128 -
                              this[0x67b9].Controller_data.offset_0x124) >> 2);
      }
      iVar6 = *(int *)(*(int *)&this[0x67b9].Controller_data.offset_0x14 + 0x3c);
      *(undefined4 *)(*(int *)(iVar6 + 0x94) + *(int *)(iVar6 + 0x68) * 4) = 1;
      FUN_00403350(&DAT_006fc918);
      ppvVar7 = local_4c;
      local_8 = 0;
      DVar5 = timeGetTime();
      FUN_0046f620(DVar5,ppvVar7);
      if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_4c[0]);
      }
      *(undefined4 *)&this[1].Controller_data.field_0x7c = 0;
      *(undefined4 *)&this[1].Controller_data.field_0x80 = 0;
      *(undefined4 *)&this[1].Controller_data.field_0x70 = 0x42f00000;
      *(undefined4 *)&this[1].Controller_data.field_0x78 = 0;
    }
    else if (iVar6 == 2) {
      this[1].Controller_data.field_0x60 = 1;
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* cube::GameController::vfunction3 @ 0047e1b0  kind=game  attributed-by=rtti  size=1502 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall cube::GameController::vfunction3(GameController *this,byte param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 *****pppppuVar7;
  undefined2 *puVar8;
  char *pcVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  undefined1 local_144 [24];
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> local_12c [20];
  basic_ios<wchar_t,std::char_traits<wchar_t>_> local_dc [6];
  float local_94;
  undefined1 local_8d;
  undefined4 local_8c;
  undefined4 local_88;
  undefined2 local_84 [8];
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_6c [24];
  undefined2 local_54 [8];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *local_30;
  undefined4 ****local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  puStack_c = &LAB_006e6116;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_94 = 0.0;
  iVar4 = *(int *)(*(int *)&this[0x67b9].Controller_data.field_0x20 + 0x3c);
  if (((((*(int *)(*(int *)(iVar4 + 0x94) + *(int *)(iVar4 + 0x68) * 4) == 0) &&
        (iVar4 = *(int *)(*(int *)&this[0x67b9].Controller_data.field_0x30 + 0x3c),
        *(int *)(*(int *)(iVar4 + 0x94) + *(int *)(iVar4 + 0x68) * 4) == 0)) &&
       (iVar4 = *(int *)(*(int *)&this[0x67b9].Controller_data.field_0x28 + 0x3c),
       *(int *)(*(int *)(iVar4 + 0x94) + *(int *)(iVar4 + 0x68) * 4) == 0)) &&
      ((iVar4 = *(int *)(*(int *)&this[0x67b9].Controller_data.field_0x34 + 0x3c),
       *(int *)(*(int *)(iVar4 + 0x94) + *(int *)(iVar4 + 0x68) * 4) == 0 &&
       (iVar4 = *(int *)(*(int *)&this[0x67b9].Controller_data.field_0x2c + 0x3c),
       *(int *)(*(int *)(iVar4 + 0x94) + *(int *)(iVar4 + 0x68) * 4) == 0)))) &&
     (iVar4 = FUN_006531e0(local_14), iVar4 == 0)) {
    iVar4 = *(int *)&this[0x67ba].Controller_data.field_0x78;
    if (*(char *)(iVar4 + 0x180) == '\0') {
      if (param_1 == 0xd) {
        *(undefined1 *)(iVar4 + 0x180) = 1;
      }
      else {
        Controller::vfunction3((Controller *)this,param_1);
        if ((DAT_0076b08c & 1) == 0) {
          DAT_0076b08c = DAT_0076b08c | 1;
          _DAT_0076b080 = 0;
          _DAT_0076b084 = 0;
          _DAT_0076b088 = 0;
        }
        switch(param_1) {
        case 9:
          this[0x67ba].Controller_data.field_0xa4 = this[0x67ba].Controller_data.field_0xa4 == '\0';
          break;
        case 0x1b:
          cVar3 = this[0x67b9].Controller_data.field_0x92;
          this[0x67b7].Controller_data.field_0xfc = 0;
          this[0x67b9].Controller_data.field_0x92 = cVar3 == '\0';
          break;
        case 0x42:
        case 0x49:
          FUN_00488c00();
          break;
        case 0x43:
          FUN_00488bd0();
          break;
        case 0x46:
          FUN_0042f160(0x200,~(byte)((ushort)*(undefined2 *)
                                              (*(int *)&this[0x67b7].Controller_data.field_0xe8 +
                                              0x124) >> 9) & 1);
          break;
        case 0x47:
          iVar4 = *(int *)&this[0x67b7].Controller_data.field_0xe8;
          if (*(char *)(iVar4 + 0xf08) == '\0') {
            *(ushort *)(iVar4 + 0x124) = *(ushort *)(iVar4 + 0x124) & 0xffef;
            iVar4 = *(int *)&this[0x67b7].Controller_data.field_0xe8;
            if (*(char *)(iVar4 + 0x68) != 'k') break;
          }
          else {
            if (*(char *)(iVar4 + 0xf09) == '\0') {
              local_94 = *(float *)(iVar4 + 0x13bc) * 65536.0;
              uVar12 = FUN_0068d946();
              local_34 = (uint)uVar12 - *(uint *)(iVar4 + 0x20);
              local_30 = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)
                         (((int)((ulonglong)uVar12 >> 0x20) - *(int *)(iVar4 + 0x24)) -
                         (uint)((uint)uVar12 < *(uint *)(iVar4 + 0x20)));
              cVar3 = FUN_0042c860(2);
              if ((cVar3 == '\0') || ((*(byte *)(iVar4 + 0x124) & 0x10) != 0)) {
                uVar6 = 0;
              }
              else {
                uVar6 = 1;
              }
              FUN_0042f160(0x10,uVar6);
              *(undefined1 *)(*(int *)&this[0x67b7].Controller_data.field_0xe8 + 0x68) = 0;
            }
            iVar4 = *(int *)&this[0x67b7].Controller_data.field_0xe8;
            if (*(char *)(iVar4 + 0xf09) != '\x01') break;
            if (*(char *)(iVar4 + 0x68) != 'k') {
              if ((*(byte *)(iVar4 + 0x5c) & 2) != 0) {
                *(undefined1 *)(iVar4 + 0x68) = 0x6b;
                *(undefined4 *)(*(int *)&this[0x67b7].Controller_data.field_0xe8 + 0x6c) = 0;
              }
              break;
            }
          }
          *(undefined1 *)(iVar4 + 0x68) = 0;
          break;
        case 0x4d:
          this[0x67b7].Controller_data.field_0xfc = this[0x67b7].Controller_data.field_0xfc == '\0';
          break;
        case 0x4f:
          FUN_00488d00();
          break;
        case 0x56:
          this[0x67b8].Controller_data.field_0x90 = this[0x67b8].Controller_data.field_0x90 == '\0';
          break;
        case 0x58:
          FUN_00488c70();
          break;
        case 0x70:
          iVar4 = *(int *)(*(int *)&this[0x67b9].Controller_data.field_0x3c + 0x3c);
          iVar1 = *(int *)(iVar4 + 0x68);
          iVar4 = *(int *)(iVar4 + 0x94);
          *(uint *)(iVar4 + iVar1 * 4) = (uint)(*(int *)(iVar4 + iVar1 * 4) == 0);
        }
      }
    }
    else if (param_1 == 0xd) {
      *(undefined1 *)(iVar4 + 0x134) = 1;
      iVar4 = *(int *)&this[0x67ba].Controller_data.field_0x78;
      if (*(int *)(iVar4 + 0x178) != 0) {
        puVar11 = (undefined4 *)(iVar4 + 0x168);
        local_144._0_4_ =
             &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
              vbtable;
        local_144._16_4_ = &DAT_006fcd08;
        std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::
        basic_ios<wchar_t,std::char_traits<wchar_t>_>(local_dc);
        local_8 = 0;
        local_94 = 1.4013e-45;
        std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
        basic_iostream<wchar_t,std::char_traits<wchar_t>_>
                  ((basic_iostream<wchar_t,std::char_traits<wchar_t>_> *)local_144,
                   (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)local_12c);
        local_8 = 1;
        *(basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable **)
         (local_144 + *(int *)(local_144._0_4_ + 4)) =
             &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
              vftable;
        *(int *)(&local_12c[-7].field_0x0 + *(int *)(local_144._0_4_ + 4)) =
             *(int *)(local_144._0_4_ + 4) + -0x68;
        local_30 = local_12c;
        std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
        basic_streambuf<wchar_t,std::char_traits<wchar_t>_>(local_30);
        local_12c[0] = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_>)
                       &std::
                        basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        ::vftable;
        local_8 = CONCAT31(local_8._1_3_,2);
        if (7 < *(uint *)(iVar4 + 0x17c)) {
          puVar11 = (undefined4 *)*puVar11;
        }
        FUN_0040f3c0(puVar11,*(undefined4 *)(iVar4 + 0x178),0);
        local_40 = 7;
        local_44 = 0;
        local_54[0] = 0;
        local_8._0_1_ = 4;
        local_8._1_3_ = 0;
        FUN_00451210(local_144,local_54);
        cVar3 = FUN_00439190(local_54,L"/name");
        if (cVar3 == '\0') {
          cVar3 = FUN_00439190(local_54,L"/connect");
          if (cVar3 == '\0') {
            cVar3 = FUN_00439190(local_54,L"/disconnect");
            if (cVar3 == '\0') {
              cVar3 = FUN_00439190(local_54,L"/namepet");
              if (cVar3 == '\0') {
                if (*(int *)&this[0x67b7].Controller_data.field_0xe4 == 0) {
                  local_70 = 7;
                  local_74 = 0;
                  local_84[0] = 0;
                  iVar4 = *(int *)&this[0x67b7].Controller_data.field_0xe8;
                  local_8._0_1_ = 9;
                  local_8c = *(undefined4 *)(iVar4 + 8);
                  local_88 = *(undefined4 *)(iVar4 + 0xc);
                  puVar8 = (undefined2 *)(*(int *)&this[0x67ba].Controller_data.field_0x78 + 0x168);
                  if (local_84 != puVar8) {
                    FUN_0040f680(puVar8,0,0xffffffff);
                  }
                  FUN_004861f0(&local_8c);
                  local_8._0_1_ = 4;
                  FUN_00593e20();
                }
                else {
                  FUN_00601cb0();
                  FUN_004865b0(*(int *)&this[0x67ba].Controller_data.field_0x78 + 0x168);
                  FUN_00601e90();
                }
              }
              else {
                local_18 = 7;
                local_1c = 0;
                local_2c[0] = (undefined4 ****)((uint)local_2c[0] & 0xffff0000);
                local_8._0_1_ = 7;
                FUN_00451210(local_144,local_2c);
                uVar2 = local_1c;
                if (local_1c < 0x10) {
                  if (*(char *)(*(int *)&this[0x67b7].Controller_data.field_0xe8 + 0x1020) == '\x13'
                     ) {
                    FUN_00601cb0();
                    uVar10 = 0;
                    *(uint *)(*(int *)&this[0x67b7].Controller_data.field_0xe8 + 0x1134) = uVar2;
                    if (uVar2 != 0) {
                      local_94 = (float)((uint)local_94 & 0xffff0000);
                      local_8d = 0;
                      do {
                        pppppuVar7 = local_2c;
                        if (7 < local_18) {
                          pppppuVar7 = (undefined4 *****)local_2c[0];
                        }
                        uVar10 = uVar10 + 1;
                        *(undefined1 *)
                         (*(int *)&this[0x67b7].Controller_data.field_0xe8 + 0x102f + uVar10 * 8) =
                             *(undefined1 *)((int)pppppuVar7 + uVar10 * 2 + -2);
                        iVar4 = *(int *)&this[0x67b7].Controller_data.field_0xe8;
                        *(undefined2 *)(iVar4 + 0x102c + uVar10 * 8) = 0;
                        *(undefined1 *)(iVar4 + 0x102e + uVar10 * 8) = 0;
                      } while (uVar10 < uVar2);
                    }
                    FUN_00601e90();
                  }
                  local_8._0_1_ = 4;
                  FUN_00593e50();
                }
                else {
                  FUN_0040eb60(L"Pet name too long");
                  local_8._0_1_ = 8;
                  local_3c = 0x3f800000;
                  local_38 = 0x3e4ccccd;
                  local_34 = 0x3e4ccccd;
                  local_30 = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)0x3f800000;
                  FUN_0043ab30(local_6c,&local_3c);
                  FUN_00593e50();
                  local_8._0_1_ = 4;
                  FUN_00593e50();
                }
              }
            }
            else {
              FUN_004719f0();
            }
          }
          else {
            local_18 = 7;
            local_1c = 0;
            local_2c[0] = (undefined4 ****)((uint)local_2c[0] & 0xffff0000);
            local_8._0_1_ = 6;
            FUN_00451210(local_144,local_2c);
            uVar6 = FUN_00659f50(local_6c,local_2c);
            FUN_00404090(uVar6);
            FUN_00403eb0();
            std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
            basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
                      ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        *)this,&this[0x67b6].Controller_data.field_0xec);
            local_8._0_1_ = 4;
            FUN_00593e50();
          }
        }
        else {
          local_18 = 7;
          local_1c = 0;
          local_2c[0] = (undefined4 ****)((uint)local_2c[0] & 0xffff0000);
          local_8 = CONCAT31(local_8._1_3_,5);
          FUN_00451210(local_144,local_2c);
          if (local_1c != 0) {
            pcVar5 = (char *)FUN_00659f50(local_6c,local_2c);
            if (0xf < *(uint *)(pcVar5 + 0x14)) {
              pcVar5 = *(char **)pcVar5;
            }
            pcVar9 = (char *)(*(int *)&this[0x67b7].Controller_data.field_0xe8 + 0x1168);
            do {
              cVar3 = *pcVar5;
              *pcVar9 = cVar3;
              pcVar5 = pcVar5 + 1;
              pcVar9 = pcVar9 + 1;
            } while (cVar3 != '\0');
            FUN_00403eb0();
          }
          local_8._0_1_ = 4;
          FUN_00593e50();
        }
        FUN_00468000(&PTR_006fccac);
        FUN_00593e50();
        std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
        basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
                  ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *
                   )local_144);
      }
      *(undefined1 *)(*(int *)&this[0x67ba].Controller_data.field_0x78 + 0x180) = 0;
    }
    else {
      FUN_0043a0d0(param_1);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* cube::GameController::vfunction4 @ 0047e9d0  kind=game  attributed-by=rtti  size=36 */

void __thiscall cube::GameController::vfunction4(GameController *this,byte param_1)

{
  int iVar1;
  
  iVar1 = FUN_006531e0();
  if (iVar1 == 0) {
    Controller::vfunction4((Controller *)this,param_1);
  }
  return;
}


/* cube::GameController::vfunction7 @ 0047ea00  kind=game  attributed-by=rtti  size=1333 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall cube::GameController::vfunction7(GameController *this,float param_1,float param_2)

{
  undefined1 *puVar1;
  int iVar2;
  char cVar3;
  DWORD DVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  
  Controller::vfunction5();
  if ((DAT_0076b094 & 1) == 0) {
    DAT_0076b094 = DAT_0076b094 | 1;
    _DAT_0076b090 = timeGetTime();
  }
  DVar4 = timeGetTime();
  iVar5 = DVar4 - _DAT_0076b090;
  _DAT_0076b090 = DVar4;
  fVar7 = (float10)FUN_004ac150(iVar5,0x3c23d70a);
  fVar8 = (1.0 - (float)fVar7) * DAT_0076b04c +
          *(float *)(this[0x67b7].Controller_data.offset_0x128 + 0xd8) * (float)fVar7;
  fVar9 = fVar8 - DAT_0076b04c;
  iVar6 = *(int *)(*(int *)&this[0x67b9].Controller_data.field_0x28 + 0x3c);
  DAT_0076b04c = fVar8;
  if ((*(int *)(*(int *)(iVar6 + 0x94) + *(int *)(iVar6 + 0x68) * 4) != 0) &&
     ((*(byte *)(this[0x67b7].Controller_data.offset_0x128 + 0xf4) & 1) != 0)) {
    FUN_00652c10(param_1,param_2);
    iVar6 = *(int *)&this[0x67b9].Controller_data.field_0x118;
    if (iVar6 != *(int *)&this[0x67b9].Controller_data.field_0x11c) {
      do {
        uVar10 = 1;
        iVar2 = *(int *)&(this->Controller_data).field_0x118;
        fVar7 = (float10)FUN_0062f660(1);
        fVar8 = (float)fVar7 + fVar9;
        fVar7 = (float10)FUN_0062f600(fVar8);
        FUN_0062a650((float)(iVar2 / 2) - (float)fVar7 * 0.5,fVar8,uVar10);
        iVar6 = iVar6 + 4;
      } while (iVar6 != *(int *)&this[0x67b9].Controller_data.field_0x11c);
    }
    iVar6 = this[0x67b7].Controller_data.offset_0x128;
    *(float *)&this[0x67ba].Controller_data.field_0x68 =
         (*(float *)(iVar6 + 0xd8) - *(float *)(iVar6 + 0xe0)) * (float)iVar5 * 2.0 +
         *(float *)&this[0x67ba].Controller_data.field_0x68;
    return;
  }
  iVar6 = *(int *)(*(int *)&this[0x67b9].Controller_data.field_0x2c + 0x3c);
  if ((*(int *)(*(int *)(iVar6 + 0x94) + *(int *)(iVar6 + 0x68) * 4) != 0) &&
     ((*(byte *)(this[0x67b7].Controller_data.offset_0x128 + 0xf4) & 1) != 0)) {
    FUN_00652c10(param_1,param_2);
    iVar6 = *(int *)&this[0x67ba].Controller_data.field_0x24;
    if (iVar6 != *(int *)&this[0x67ba].Controller_data.field_0x28) {
      do {
        uVar10 = 1;
        iVar2 = *(int *)&(this->Controller_data).field_0x118;
        fVar7 = (float10)FUN_0062f660(1);
        fVar8 = (float)fVar7 + fVar9;
        fVar7 = (float10)FUN_0062f600(fVar8);
        FUN_0062a650((float)(iVar2 / 2) - (float)fVar7 * 0.5,fVar8,uVar10);
        iVar6 = iVar6 + 4;
      } while (iVar6 != *(int *)&this[0x67ba].Controller_data.field_0x28);
    }
    iVar6 = this[0x67b7].Controller_data.offset_0x128;
    *(float *)&this[0x67ba].Controller_data.field_0x6c =
         (*(float *)(iVar6 + 0xd8) - *(float *)(iVar6 + 0xe0)) * (float)iVar5 * 2.0 +
         *(float *)&this[0x67ba].Controller_data.field_0x6c;
    return;
  }
  cVar3 = (*this->vftablePtr->vfunction2)(this);
  if (cVar3 == '\0') {
    FUN_00650ae0();
    if (*(int *)&this[1].Controller_data.field_0x54 == 0) {
      fVar8 = (float)*(int *)&this[1].Controller_data.field_0x4c * 0.005 * param_2 +
              *(float *)&this[1].Controller_data.field_0x70;
    }
    else {
      fVar8 = *(float *)&this[1].Controller_data.field_0x70 -
              (float)*(int *)&this[1].Controller_data.field_0x4c * 0.005 * param_2;
    }
    *(float *)&this[1].Controller_data.field_0x70 = fVar8;
    if (180.0 < fVar8) {
      *(undefined4 *)&this[1].Controller_data.field_0x70 = 0x43340000;
    }
    puVar1 = &this[1].Controller_data.field_0x70;
    if (*(float *)puVar1 <= 0.0 && *(float *)puVar1 != 0.0) {
      *(undefined4 *)&this[1].Controller_data.field_0x70 = 0;
    }
    *(float *)&this[1].Controller_data.field_0x78 =
         *(float *)&this[1].Controller_data.field_0x78 -
         (float)*(int *)&this[1].Controller_data.field_0x4c * 0.005 * param_1;
  }
  else {
    FUN_00652c10(param_1,param_2);
    iVar6 = FUN_00650ae0();
    if ((iVar6 == 0) && (*(char *)&(this->Controller_data).offset_0x0 != '\0')) {
      iVar6 = this[0x67b7].Controller_data.offset_0x128;
      fVar8 = (*(float *)(iVar6 + 0xd8) - *(float *)(iVar6 + 0xe0)) *
              (float)*(int *)&this[1].Controller_data.field_0x4c * 0.005;
      if (*(int *)&this[1].Controller_data.field_0x54 == 0) {
        *(float *)&this[1].Controller_data.field_0x70 =
             fVar8 + *(float *)&this[1].Controller_data.field_0x70;
      }
      else {
        *(float *)&this[1].Controller_data.field_0x70 =
             *(float *)&this[1].Controller_data.field_0x70 - fVar8;
      }
      if (180.0 < *(float *)&this[1].Controller_data.field_0x70) {
        *(undefined4 *)&this[1].Controller_data.field_0x70 = 0x43340000;
      }
      puVar1 = &this[1].Controller_data.field_0x70;
      if (*(float *)puVar1 <= 0.0 && *(float *)puVar1 != 0.0) {
        *(undefined4 *)&this[1].Controller_data.field_0x70 = 0;
      }
      iVar6 = this[0x67b7].Controller_data.offset_0x128;
      *(float *)&this[1].Controller_data.field_0x78 =
           *(float *)&this[1].Controller_data.field_0x78 -
           (*(float *)(iVar6 + 0xd4) - *(float *)(iVar6 + 0xdc)) *
           (float)*(int *)&this[1].Controller_data.field_0x4c * 0.005;
    }
    if ((*(char *)((int)&(this->Controller_data).offset_0x0 + 6) != '\0') &&
       (iVar6 = *(int *)(*(int *)&this[0x67b9].Controller_data.field_0x7c + 0x3c),
       *(int *)(*(int *)(iVar6 + 0x94) + *(int *)(iVar6 + 0x68) * 4) != 0)) {
      iVar6 = this[0x67b7].Controller_data.offset_0x128;
      iVar5 = *(int *)&this[0x67b9].Controller_data.field_0x94;
      *(float *)(iVar5 + 0x16c) =
           (*(float *)(iVar6 + 0xd4) - *(float *)(iVar6 + 0xdc)) * 0.5 + *(float *)(iVar5 + 0x16c);
      iVar6 = this[0x67b7].Controller_data.offset_0x128;
      iVar5 = *(int *)&this[0x67b9].Controller_data.field_0x94;
      *(float *)(iVar5 + 0x164) =
           *(float *)(iVar5 + 0x164) - (*(float *)(iVar6 + 0xd8) - *(float *)(iVar6 + 0xe0)) * 0.5;
      return;
    }
  }
  return;
}


/* cube::GameController::vfunction10 @ 0047ef40  kind=game  attributed-by=rtti  size=183 */

void __thiscall cube::GameController::vfunction10(GameController *this,int param_1)

{
  undefined1 *puVar1;
  float fVar2;
  
  if (this[0x67b7].Controller_data.field_0xfc == '\0') {
    fVar2 = *(float *)&this[1].Controller_data.field_0x80 - (float)(param_1 * 2);
    *(float *)&this[1].Controller_data.field_0x80 = fVar2;
    if (fVar2 < 0.0) {
      *(undefined4 *)&this[1].Controller_data.field_0x80 = 0;
    }
    if (14.0 < *(float *)&this[1].Controller_data.field_0x80) {
      *(undefined4 *)&this[1].Controller_data.field_0x80 = 0x41600000;
    }
  }
  else {
    fVar2 = *(float *)&this[1].Controller_data.field_0x88;
    if (param_1 < 0) {
      fVar2 = fVar2 * 0.9;
    }
    else {
      fVar2 = fVar2 / 0.9;
    }
    *(float *)&this[1].Controller_data.field_0x88 = fVar2;
    if (10.0 < fVar2) {
      *(undefined4 *)&this[1].Controller_data.field_0x88 = 0x41200000;
    }
    puVar1 = &this[1].Controller_data.field_0x88;
    if (*(float *)puVar1 <= 0.01 && *(float *)puVar1 != 0.01) {
      *(undefined4 *)&this[1].Controller_data.field_0x88 = 0x3c23d70a;
      return;
    }
  }
  return;
}


/* cube::GameController::vfunction2 @ 0047f1d0  kind=game  attributed-by=rtti  size=475 */

uint __thiscall cube::GameController::vfunction2(GameController *this)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)&this[0x67ba].Controller_data.field_0x78;
  if (((((((uVar2 == 0) || (*(char *)(uVar2 + 0x180) == '\0')) &&
         (this[0x67b7].Controller_data.field_0xfc == '\0')) &&
        (((this[0x67b9].Controller_data.field_0x90 == '\0' &&
          (this[0x67b9].Controller_data.field_0x91 == '\0')) &&
         ((iVar1 = *(int *)(*(int *)&this[0x67b9].Controller_data.field_0xb0 + 0x3c),
          uVar2 = *(uint *)(iVar1 + 0x94), *(int *)(uVar2 + *(int *)(iVar1 + 0x68) * 4) == 0 &&
          (this[0x67b9].Controller_data.field_0x92 == '\0')))))) &&
       (((iVar1 = *(int *)&this[0x67b9].Controller_data.field_0x5c, iVar1 == 0 ||
         (iVar1 = *(int *)(iVar1 + 0x3c), uVar2 = *(uint *)(iVar1 + 0x94),
         *(int *)(uVar2 + *(int *)(iVar1 + 0x68) * 4) == 0)) &&
        ((iVar1 = *(int *)&this[0x67b9].Controller_data.field_0x64, iVar1 == 0 ||
         (iVar1 = *(int *)(iVar1 + 0x3c), uVar2 = *(uint *)(iVar1 + 0x94),
         *(int *)(uVar2 + *(int *)(iVar1 + 0x68) * 4) == 0)))))) &&
      ((((iVar1 = *(int *)&this[0x67b9].Controller_data.field_0x98, iVar1 == 0 ||
         (iVar1 = *(int *)(iVar1 + 0x3c), uVar2 = *(uint *)(iVar1 + 0x94),
         *(int *)(uVar2 + *(int *)(iVar1 + 0x68) * 4) == 0)) &&
        ((iVar1 = *(int *)&this[0x67b9].Controller_data.field_0xa0, iVar1 == 0 ||
         (iVar1 = *(int *)(iVar1 + 0x3c), uVar2 = *(uint *)(iVar1 + 0x94),
         *(int *)(uVar2 + *(int *)(iVar1 + 0x68) * 4) == 0)))) &&
       ((iVar1 = *(int *)&this[0x67b9].Controller_data.field_0x7c, iVar1 == 0 ||
        (iVar1 = *(int *)(iVar1 + 0x3c), uVar2 = *(uint *)(iVar1 + 0x94),
        *(int *)(uVar2 + *(int *)(iVar1 + 0x68) * 4) == 0)))))) &&
     (((iVar1 = *(int *)&this[0x67b9].Controller_data.field_0x60, iVar1 == 0 ||
       (iVar1 = *(int *)(iVar1 + 0x3c), uVar2 = *(uint *)(iVar1 + 0x94),
       *(int *)(uVar2 + *(int *)(iVar1 + 0x68) * 4) == 0)) &&
      (((((iVar1 = *(int *)(*(int *)&this[0x67b9].Controller_data.field_0x20 + 0x3c),
          uVar2 = *(uint *)(iVar1 + 0x94), *(int *)(uVar2 + *(int *)(iVar1 + 0x68) * 4) == 0 &&
          (iVar1 = *(int *)(*(int *)&this[0x67b9].Controller_data.field_0x28 + 0x3c),
          uVar2 = *(uint *)(iVar1 + 0x94), *(int *)(uVar2 + *(int *)(iVar1 + 0x68) * 4) == 0)) &&
         (iVar1 = *(int *)(*(int *)&this[0x67b9].Controller_data.offset_0x14 + 0x3c),
         uVar2 = *(uint *)(iVar1 + 0x94), *(int *)(uVar2 + *(int *)(iVar1 + 0x68) * 4) == 0)) &&
        ((iVar1 = *(int *)(*(int *)&this[0x67b9].Controller_data.field_0x2c + 0x3c),
         uVar2 = *(uint *)(iVar1 + 0x94), *(int *)(uVar2 + *(int *)(iVar1 + 0x68) * 4) == 0 &&
         (iVar1 = *(int *)(*(int *)&this[0x67b9].Controller_data.field_0x34 + 0x3c),
         uVar2 = *(uint *)(iVar1 + 0x94), *(int *)(uVar2 + *(int *)(iVar1 + 0x68) * 4) == 0)))) &&
       ((iVar1 = *(int *)(*(int *)&this[0x67b9].Controller_data.field_0x30 + 0x3c),
        uVar2 = *(uint *)(iVar1 + 0x94), *(int *)(uVar2 + *(int *)(iVar1 + 0x68) * 4) == 0 &&
        (iVar1 = *(int *)(*(int *)&this[0x67ba].Controller_data.field_0x64 + 0x3c),
        uVar2 = *(uint *)(iVar1 + 0x94), *(int *)(uVar2 + *(int *)(iVar1 + 0x68) * 4) == 0)))))))) {
    return uVar2 & 0xffffff00;
  }
  return CONCAT31((int3)(uVar2 >> 8),1);
}


/* cube::GameController::vfunction6 @ 00482a00  kind=game  attributed-by=rtti  size=58 */

void __thiscall cube::GameController::vfunction6(GameController *this)

{
  int iVar1;
  
  iVar1 = FUN_006531e0();
  if ((iVar1 == 0) && (*(char *)(*(int *)&this[0x67ba].Controller_data.field_0x78 + 0x180) != '\0'))
  {
    FUN_0043a010();
    return;
  }
  return;
}


/* cube::GameController::vfunction5 @ 00482a40  kind=game  attributed-by=rtti  size=5159 */

void __thiscall cube::GameController::vfunction5(GameController *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int local_28;
  uint local_24;
  undefined8 local_20;
  float local_18;
  float fStack_14;
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if (*(int *)&this[0x67b9].Controller_data.field_0xdc != 0) {
    iVar7 = *(int *)&(this->Controller_data).field_0x118;
    fVar8 = (float10)FUN_0062f600();
    iVar1 = *(int *)(*(int *)&this[0x67b9].Controller_data.field_0xdc + 0x38);
    iVar2 = *(int *)(iVar1 + 0x68);
    iVar1 = *(int *)(iVar1 + 0x94);
    *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0x43960000;
    *(float *)(iVar1 + iVar2 * 8) = (float)(iVar7 / 2) - (float)fVar8 * 0.5;
    (**(code **)(**(int **)(*(int *)&this[0x67b9].Controller_data.field_0xdc + 0x38) + 4))(1);
  }
  iVar7 = *(int *)&this[0x67b9].Controller_data.offset_0x8;
  if (iVar7 != 0) {
    iVar7 = *(int *)(iVar7 + 0x38);
    iVar1 = *(int *)&(this->Controller_data).field_0x11c;
    iVar2 = *(int *)(iVar7 + 0x94);
    fVar12 = *(float *)(*(int *)(iVar7 + 0x19c) + 4 + *(int *)(iVar7 + 0x170) * 8);
    iVar3 = *(int *)(iVar7 + 0x68);
    *(float *)(iVar2 + iVar3 * 8) =
         (float)(*(int *)&(this->Controller_data).field_0x118 / 2) -
         *(float *)(*(int *)(iVar7 + 0x19c) + *(int *)(iVar7 + 0x170) * 8);
    *(float *)(iVar2 + 4 + iVar3 * 8) = (float)(iVar1 + -300) - fVar12;
    (**(code **)(**(int **)(*(int *)&this[0x67b9].Controller_data.offset_0x8 + 0x38) + 4))(1);
  }
  iVar7 = *(int *)((int)&this[0x67b9].Controller_data.offset_0x8 + 4);
  if (iVar7 != 0) {
    iVar1 = *(int *)&(this->Controller_data).field_0x118;
    iVar7 = *(int *)(iVar7 + 0x38);
    iVar2 = *(int *)(iVar7 + 0x94);
    fVar12 = *(float *)(*(int *)(iVar7 + 0x19c) + *(int *)(iVar7 + 0x170) * 8);
    iVar3 = *(int *)(iVar7 + 0x68);
    *(float *)(iVar2 + 4 + iVar3 * 8) =
         400.0 - *(float *)(*(int *)(iVar7 + 0x19c) + 4 + *(int *)(iVar7 + 0x170) * 8);
    *(float *)(iVar2 + iVar3 * 8) = (float)(iVar1 + -200) - fVar12;
    (**(code **)(**(int **)(*(int *)((int)&this[0x67b9].Controller_data.offset_0x8 + 4) + 0x38) + 4)
    )(1);
  }
  iVar7 = *(int *)&this[0x67b9].Controller_data.field_0x18;
  if (iVar7 != 0) {
    iVar7 = *(int *)(iVar7 + 0x38);
    iVar1 = *(int *)&(this->Controller_data).field_0x11c;
    iVar2 = *(int *)(iVar7 + 0x94);
    fVar12 = *(float *)(*(int *)(iVar7 + 0x19c) + 4 + *(int *)(iVar7 + 0x170) * 8);
    iVar3 = *(int *)(iVar7 + 0x68);
    *(float *)(iVar2 + iVar3 * 8) =
         (float)(*(int *)&(this->Controller_data).field_0x118 / 2) -
         *(float *)(*(int *)(iVar7 + 0x19c) + *(int *)(iVar7 + 0x170) * 8);
    *(float *)(iVar2 + 4 + iVar3 * 8) = (float)(iVar1 / 2) - fVar12;
    (**(code **)(**(int **)(*(int *)&this[0x67b9].Controller_data.field_0x18 + 0x38) + 4))(1);
  }
  iVar7 = *(int *)&(this->Controller_data).field_0x118;
  fVar12 = (float)(*(int *)&(this->Controller_data).field_0x11c / 2 + 0x32);
  uVar15 = 1;
  fVar8 = (float10)FUN_0062f600(fVar12,1);
  FUN_0062a650(((float)iVar7 - (float)fVar8) * 0.5,fVar12,uVar15);
  iVar7 = *(int *)&this[0x67b9].Controller_data.field_0x1c;
  if (iVar7 != 0) {
    iVar7 = *(int *)(iVar7 + 0x38);
    iVar1 = *(int *)&(this->Controller_data).field_0x11c;
    iVar2 = *(int *)(iVar7 + 0x94);
    fVar12 = *(float *)(*(int *)(iVar7 + 0x19c) + 4 + *(int *)(iVar7 + 0x170) * 8);
    iVar3 = *(int *)(iVar7 + 0x68);
    *(float *)(iVar2 + iVar3 * 8) =
         (float)(*(int *)&(this->Controller_data).field_0x118 + -0x14) -
         *(float *)(*(int *)(iVar7 + 0x19c) + *(int *)(iVar7 + 0x170) * 8);
    *(float *)(iVar2 + 4 + iVar3 * 8) = (float)(iVar1 + -0x14) - fVar12;
    (**(code **)(**(int **)(*(int *)&this[0x67b9].Controller_data.field_0x1c + 0x38) + 4))(1);
  }
  iVar7 = this[0x67ba].field2_0x138[0xe];
  iVar1 = *(int *)&(this->Controller_data).field_0x11c;
  iVar2 = *(int *)(iVar7 + 0x94);
  fVar12 = *(float *)(*(int *)(iVar7 + 0x19c) + 4 + *(int *)(iVar7 + 0x170) * 8);
  iVar3 = *(int *)(iVar7 + 0x68);
  *(float *)(iVar2 + iVar3 * 8) =
       (float)(*(int *)&(this->Controller_data).field_0x118 / 2) -
       *(float *)(*(int *)(iVar7 + 0x19c) + *(int *)(iVar7 + 0x170) * 8);
  *(float *)(iVar2 + 4 + iVar3 * 8) = (float)(iVar1 + -0xbe) - fVar12;
  (**(code **)(*(int *)this[0x67ba].field2_0x138[0xe] + 4))(1);
  iVar7 = *(int *)&(this->Controller_data).field_0x11c;
  iVar1 = *(int *)(*(int *)&this[0x67b9].Controller_data.field_0x38 + 0x38);
  iVar2 = *(int *)(iVar1 + 0x68);
  iVar1 = *(int *)(iVar1 + 0x94);
  *(float *)(iVar1 + iVar2 * 8) = (float)(*(int *)&(this->Controller_data).field_0x118 / 2);
  *(float *)(iVar1 + 4 + iVar2 * 8) = (float)(iVar7 / 2);
  (**(code **)(**(int **)(*(int *)&this[0x67b9].Controller_data.field_0x38 + 0x38) + 4))(1);
  iVar7 = *(int *)&(this->Controller_data).field_0x11c;
  iVar1 = *(int *)(*(int *)&this[0x67ba].Controller_data.field_0x58 + 0x38);
  iVar2 = *(int *)(iVar1 + 0x68);
  iVar1 = *(int *)(iVar1 + 0x94);
  *(float *)(iVar1 + iVar2 * 8) = (float)(*(int *)&(this->Controller_data).field_0x118 / 2);
  *(float *)(iVar1 + 4 + iVar2 * 8) = (float)(iVar7 + -200);
  (**(code **)(**(int **)(*(int *)&this[0x67ba].Controller_data.field_0x58 + 0x38) + 4))(1);
  iVar7 = *(int *)&(this->Controller_data).field_0x11c;
  iVar1 = *(int *)(*(int *)&this[0x67ba].Controller_data.field_0x5c + 0x38);
  iVar2 = *(int *)(iVar1 + 0x68);
  iVar1 = *(int *)(iVar1 + 0x94);
  *(float *)(iVar1 + iVar2 * 8) = (float)(*(int *)&(this->Controller_data).field_0x118 / 2);
  *(float *)(iVar1 + 4 + iVar2 * 8) = (float)(iVar7 / 2 + 100);
  (**(code **)(**(int **)(*(int *)&this[0x67ba].Controller_data.field_0x5c + 0x38) + 4))(1);
  iVar7 = *(int *)&(this->Controller_data).field_0x11c;
  iVar1 = *(int *)(*(int *)&this[0x67b9].Controller_data.field_0x114 + 0x38);
  iVar2 = *(int *)(iVar1 + 0x68);
  iVar1 = *(int *)(iVar1 + 0x94);
  *(float *)(iVar1 + iVar2 * 8) = (float)(*(int *)&(this->Controller_data).field_0x118 / 2);
  *(float *)(iVar1 + 4 + iVar2 * 8) = (float)(iVar7 + -0x32);
  (**(code **)(**(int **)(*(int *)&this[0x67b9].Controller_data.field_0x114 + 0x38) + 4))(1);
  uVar15 = 1;
  iVar7 = *(int *)&(this->Controller_data).field_0x11c;
  iVar1 = *(int *)&(this->Controller_data).field_0x118;
  fVar8 = (float10)FUN_006291d0(1);
  fVar12 = (float)(iVar7 + -0x14) - (float)fVar8;
  fVar8 = (float10)FUN_0062f600(fVar12);
  FUN_0062a650((float)(iVar1 + -0x14) - (float)fVar8,fVar12,uVar15);
  uVar15 = 1;
  iVar7 = *(int *)&(this->Controller_data).field_0x11c;
  fVar8 = (float10)FUN_006291d0(1);
  FUN_0062a650(0x41a00000,(float)(iVar7 + -0x14) - (float)fVar8,uVar15);
  iVar7 = *(int *)&(this->Controller_data).field_0x11c;
  local_10._4_4_ = (float)*(int *)&(this->Controller_data).field_0x118;
  uVar15 = 1;
  fVar8 = (float10)FUN_006291d0(1);
  fVar12 = ((float)iVar7 - (float)fVar8) * 0.5;
  fVar8 = (float10)FUN_0062f600(fVar12);
  FUN_0062a650((local_10._4_4_ - (float)fVar8) * 0.5,fVar12,uVar15);
  local_10._4_4_ = (float)*(int *)&(this->Controller_data).field_0x11c;
  iVar7 = *(int *)&(this->Controller_data).field_0x118;
  uVar15 = 1;
  fVar8 = (float10)FUN_006291d0(1);
  fVar12 = (local_10._4_4_ - (float)fVar8) * 0.5;
  fVar8 = (float10)FUN_0062f600(fVar12);
  local_10 = CONCAT44((float)fVar8,(undefined4)local_10);
  FUN_0062a650(((float)iVar7 - (float)fVar8) * 0.5,fVar12,uVar15);
  FUN_0062a650(0x41a00000,0x41a00000,1);
  uVar14 = 1;
  uVar15 = 0x41a00000;
  local_10._4_4_ = (float)*(int *)&(this->Controller_data).field_0x118;
  fVar8 = (float10)FUN_0062f600(0x41a00000,1);
  FUN_0062a650((local_10._4_4_ - (float)fVar8) - 20.0,uVar15,uVar14);
  iVar7 = *(int *)&(this->Controller_data).field_0x11c;
  iVar1 = *(int *)(this[0x67ba].Controller_data.offset_0x10 + 0x38);
  iVar2 = *(int *)(iVar1 + 0x68);
  iVar1 = *(int *)(iVar1 + 0x94);
  *(float *)(iVar1 + iVar2 * 8) = (float)(*(int *)&(this->Controller_data).field_0x118 / 2);
  *(float *)(iVar1 + 4 + iVar2 * 8) = (float)(iVar7 / 2 + -100);
  (**(code **)(**(int **)(this[0x67ba].Controller_data.offset_0x10 + 0x38) + 4))(1);
  local_10._4_4_ = (float)*(int *)&(this->Controller_data).field_0x11c;
  iVar7 = *(int *)&(this->Controller_data).field_0x118;
  uVar15 = 1;
  fVar8 = (float10)FUN_006291d0(1);
  fVar12 = (local_10._4_4_ - (float)fVar8) - 20.0;
  fVar8 = (float10)FUN_0062f600(fVar12);
  local_10 = CONCAT44((float)fVar8,(undefined4)local_10);
  FUN_0062a650(((float)iVar7 - (float)fVar8) - 20.0,fVar12,uVar15);
  iVar7 = *(int *)&(this->Controller_data).field_0x118;
  uVar15 = 1;
  local_10._4_4_ = (float)*(int *)&(this->Controller_data).field_0x11c;
  fVar8 = (float10)FUN_006291d0(1);
  fVar12 = (local_10._4_4_ - (float)fVar8) * 0.5;
  fVar8 = (float10)FUN_0062f600(fVar12);
  local_10 = CONCAT44((float)fVar8,(undefined4)local_10);
  FUN_0062a650(((float)iVar7 - (float)fVar8) * 0.5,fVar12,uVar15);
  iVar7 = *(int *)&(this->Controller_data).field_0x11c;
  iVar1 = *(int *)(*(int *)&this[0x67ba].Controller_data.field_0x20 + 0x38);
  iVar2 = *(int *)(iVar1 + 0x68);
  iVar1 = *(int *)(iVar1 + 0x94);
  *(float *)(iVar1 + iVar2 * 8) = (float)(*(int *)&(this->Controller_data).field_0x118 / 2);
  *(float *)(iVar1 + 4 + iVar2 * 8) = (float)(iVar7 + -0x32);
  (**(code **)(**(int **)(*(int *)&this[0x67ba].Controller_data.field_0x20 + 0x38) + 4))(1);
  iVar7 = *(int *)&(this->Controller_data).field_0x11c;
  iVar1 = *(int *)(*(int *)&this[0x67ba].Controller_data.field_0x1c + 0x38);
  iVar2 = *(int *)(iVar1 + 0x68);
  iVar1 = *(int *)(iVar1 + 0x94);
  *(float *)(iVar1 + iVar2 * 8) = (float)(*(int *)&(this->Controller_data).field_0x118 / 2);
  *(float *)(iVar1 + 4 + iVar2 * 8) = (float)(iVar7 + -100);
  (**(code **)(**(int **)(*(int *)&this[0x67ba].Controller_data.field_0x1c + 0x38) + 4))(1);
  uVar15 = 1;
  iVar7 = *(int *)&(this->Controller_data).field_0x11c;
  iVar1 = *(int *)&(this->Controller_data).field_0x118;
  fVar8 = (float10)FUN_006291d0(1);
  local_10 = CONCAT44((float)fVar8,(undefined4)local_10);
  fVar12 = (float)(iVar7 + -0x14) - (float)fVar8;
  fVar8 = (float10)FUN_0062f600(fVar12);
  local_10 = CONCAT44((float)fVar8,(undefined4)local_10);
  FUN_0062a650((float)(iVar1 + -0x14) - (float)fVar8,fVar12,uVar15);
  iVar7 = *(int *)&this[0x67b9].Controller_data.field_0x118;
  if (iVar7 != *(int *)&this[0x67b9].Controller_data.field_0x11c) {
    do {
      uVar15 = 1;
      iVar1 = *(int *)&(this->Controller_data).field_0x118;
      fVar8 = (float10)FUN_0062f660(1);
      fVar12 = (float)fVar8;
      fVar8 = (float10)FUN_0062f600(fVar12);
      local_10 = CONCAT44((float)fVar8,(undefined4)local_10);
      FUN_0062a650((float)(iVar1 / 2) - (float)fVar8 * 0.5,fVar12,uVar15);
      iVar7 = iVar7 + 4;
    } while (iVar7 != *(int *)&this[0x67b9].Controller_data.field_0x11c);
  }
  local_28 = 0;
  if (0 < (int)(*(int *)&this[0x67b8].Controller_data.field_0xdc -
                *(int *)&this[0x67b8].Controller_data.field_0xd8 & 0xfffffffcU)) {
    local_24 = 0;
    do {
      piVar4 = *(int **)(*(int *)(*(int *)&this[0x67b8].Controller_data.field_0xd8 + local_28 * 4) +
                        0x38);
      iVar7 = *(int *)&(this->Controller_data).field_0x118 / 2 +
              (local_24 -
              (*(int *)&this[0x67b8].Controller_data.field_0xdc -
               *(int *)&this[0x67b8].Controller_data.field_0xd8 >> 2)) * 0x18 + 6;
      local_10 = CONCAT44((float)(*(int *)&(this->Controller_data).field_0x11c + -0x32) -
                          *(float *)(piVar4[0x67] + 4 + piVar4[0x5c] * 8),
                          (float)((double)iVar7 + *(double *)(&DAT_00745f30 + (iVar7 >> 0x1f) * -8))
                          - *(float *)(piVar4[0x67] + piVar4[0x5c] * 8));
      *(undefined8 *)(piVar4[0x25] + piVar4[0x1a] * 8) = local_10;
      (**(code **)(*piVar4 + 4))(1);
      local_24 = local_24 + 2;
      local_28 = local_28 + 1;
    } while (local_28 <
             *(int *)&this[0x67b8].Controller_data.field_0xdc -
             *(int *)&this[0x67b8].Controller_data.field_0xd8 >> 2);
  }
  local_28 = 0;
  if (0 < (int)(*(int *)&this[0x67b8].Controller_data.field_0x118 -
                *(int *)&this[0x67b8].Controller_data.field_0x114 & 0xfffffffcU)) {
    local_24 = 0;
    do {
      piVar4 = *(int **)(*(int *)(*(int *)&this[0x67b8].Controller_data.field_0x114 + local_28 * 4)
                        + 0x38);
      local_10 = CONCAT44(piVar4,(undefined4)local_10);
      iVar7 = *(int *)&(this->Controller_data).field_0x118 / 2 +
              ((local_24 -
               (*(int *)&this[0x67b8].Controller_data.field_0x118 -
                *(int *)&this[0x67b8].Controller_data.field_0x114 >> 2)) + 1) * 0x1e;
      local_18 = (float)((double)iVar7 + *(double *)(&DAT_00745f30 + (iVar7 >> 0x1f) * -8));
      fStack_14 = (float)(*(int *)&(this->Controller_data).field_0x11c + -0x8c);
      local_20 = CONCAT44(fStack_14 - *(float *)(piVar4[0x67] + 4 + piVar4[0x5c] * 8),
                          local_18 - *(float *)(piVar4[0x67] + piVar4[0x5c] * 8));
      *(undefined8 *)(piVar4[0x25] + piVar4[0x1a] * 8) = local_20;
      (**(code **)(*piVar4 + 4))(1);
      local_28 = local_28 + 1;
      local_24 = local_24 + 2;
    } while (local_28 <
             *(int *)&this[0x67b8].Controller_data.field_0x118 -
             *(int *)&this[0x67b8].Controller_data.field_0x114 >> 2);
  }
  if (*(int *)&this[0x67b9].Controller_data.field_0x5c != 0) {
    iVar7 = *(int *)&(this->Controller_data).field_0x118;
    uVar15 = 0;
    local_10._4_4_ = (float)*(int *)&(this->Controller_data).field_0x11c;
    fVar8 = (float10)FUN_006291d0(0);
    fVar12 = (local_10._4_4_ - (float)fVar8) - 220.0;
    fVar8 = (float10)FUN_0062f600(fVar12);
    local_10 = CONCAT44((float)fVar8,(undefined4)local_10);
    FUN_0062a650((float)(iVar7 + -0x14) - (float)fVar8,fVar12,uVar15);
  }
  iVar7 = *(int *)&this[0x67b8].Controller_data.field_0x34;
  if (iVar7 != 0) {
    iVar1 = *(int *)&(this->Controller_data).field_0x118;
    iVar7 = *(int *)(iVar7 + 0x38);
    iVar2 = *(int *)(iVar7 + 0x94);
    fVar12 = *(float *)(*(int *)(iVar7 + 0x19c) + *(int *)(iVar7 + 0x170) * 8);
    iVar3 = *(int *)(iVar7 + 0x68);
    *(float *)(iVar2 + 4 + iVar3 * 8) =
         230.0 - *(float *)(*(int *)(iVar7 + 0x19c) + 4 + *(int *)(iVar7 + 0x170) * 8);
    *(float *)(iVar2 + iVar3 * 8) = (float)(iVar1 / 2) - fVar12;
    (**(code **)(**(int **)(*(int *)&this[0x67b8].Controller_data.field_0x34 + 0x38) + 4))(1);
  }
  FUN_0062a650(0x41a00000,(float)(*(int *)&(this->Controller_data).field_0x11c + -0xdc),1);
  iVar7 = *(int *)&this[0x67b9].Controller_data.field_0x7c;
  if (iVar7 != 0) {
    iVar7 = *(int *)(iVar7 + 0x38);
    iVar1 = this[0x67b7].Controller_data.offset_0x128;
    iVar2 = *(int *)(iVar1 + 0x110);
    iVar3 = *(int *)(iVar7 + 0x68);
    iVar5 = *(int *)(iVar7 + 0x94);
    fVar12 = *(float *)(*(int *)(iVar7 + 0x19c) + 4 + *(int *)(iVar7 + 0x170) * 8);
    *(float *)(iVar5 + iVar3 * 8) =
         (float)(*(int *)(iVar1 + 0x10c) / 2 + -0x154) -
         *(float *)(*(int *)(iVar7 + 0x19c) + *(int *)(iVar7 + 0x170) * 8);
    *(float *)(iVar5 + 4 + iVar3 * 8) = (float)(iVar2 / 2 + -0xfa) - fVar12;
    (**(code **)(**(int **)(*(int *)&this[0x67b9].Controller_data.field_0x7c + 0x38) + 4))(1);
  }
  iVar7 = *(int *)&this[0x67b9].Controller_data.field_0xe4;
  if (iVar7 != 0) {
    iVar7 = *(int *)(iVar7 + 0x38);
    iVar1 = *(int *)(iVar7 + 0x68);
    iVar7 = *(int *)(iVar7 + 0x94);
    *(undefined4 *)(iVar7 + iVar1 * 8) = 0x41a00000;
    *(undefined4 *)(iVar7 + 4 + iVar1 * 8) = 0x432a0000;
    (**(code **)(**(int **)(*(int *)&this[0x67b9].Controller_data.field_0xe4 + 0x38) + 4))(1);
  }
  iVar7 = *(int *)&this[0x67b9].Controller_data.field_0xec;
  if (iVar7 != 0) {
    iVar7 = *(int *)(iVar7 + 0x38);
    iVar1 = *(int *)(iVar7 + 0x68);
    iVar7 = *(int *)(iVar7 + 0x94);
    *(undefined4 *)(iVar7 + iVar1 * 8) = 0x41a00000;
    *(undefined4 *)(iVar7 + 4 + iVar1 * 8) = 0x43eb0000;
    (**(code **)(**(int **)(*(int *)&this[0x67b9].Controller_data.field_0xec + 0x38) + 4))(1);
  }
  local_24 = 0;
  if (0 < (int)(*(int *)&this[0x67ba].Controller_data.field_0x9c -
                *(int *)&this[0x67ba].Controller_data.field_0x98 & 0xfffffffcU)) {
    do {
      iVar7 = *(int *)(*(int *)(*(int *)&this[0x67ba].Controller_data.field_0x98 + local_24 * 4) +
                      0x38);
      uVar6 = local_24 & 0x80000001;
      if ((int)uVar6 < 0) {
        uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
      }
      local_18 = (float)(int)(*(int *)&(this->Controller_data).field_0x118 / 2 + -200 + uVar6 * 400)
      ;
      fStack_14 = (float)(*(int *)&(this->Controller_data).field_0x11c / 2 +
                          ((int)local_24 / 2) * 0x38 + 10);
      local_20 = CONCAT44(fStack_14 -
                          *(float *)(*(int *)(iVar7 + 0x19c) + 4 + *(int *)(iVar7 + 0x170) * 8),
                          local_18 -
                          *(float *)(*(int *)(iVar7 + 0x19c) + *(int *)(iVar7 + 0x170) * 8));
      *(undefined8 *)(*(int *)(iVar7 + 0x94) + *(int *)(iVar7 + 0x68) * 8) = local_20;
      (**(code **)(**(int **)(*(int *)(*(int *)&this[0x67ba].Controller_data.field_0x98 +
                                      local_24 * 4) + 0x38) + 4))(1);
      local_24 = local_24 + 1;
    } while ((int)local_24 <
             *(int *)&this[0x67ba].Controller_data.field_0x9c -
             *(int *)&this[0x67ba].Controller_data.field_0x98 >> 2);
  }
  uVar13 = 1;
  uVar14 = 0x43aa0000;
  uVar15 = 0x41a00000;
  FUN_0062b400(0x41a00000,0x43aa0000,1);
  FUN_0062a650(uVar15,uVar14,uVar13);
  if (*(int *)&this[0x67b9].Controller_data.field_0x5c != 0) {
    iVar7 = *(int *)&(this->Controller_data).field_0x118;
    fVar8 = (float10)FUN_0062f600();
    iVar1 = *(int *)&(this->Controller_data).field_0x11c;
    local_10 = CONCAT44((float)fVar8,(undefined4)local_10);
    fVar9 = (float10)FUN_006291d0();
    local_10 = CONCAT44((float)fVar9,(undefined4)local_10);
    fStack_14 = (float)(iVar1 / 2) - (float)fVar9;
    local_18 = (float)(iVar7 / 2) - (float)fVar8 * 0.5;
    FUN_006295a0(&local_18,1);
  }
  if (*(int *)&this[0x67b9].Controller_data.field_0x60 != 0) {
    iVar7 = *(int *)&(this->Controller_data).field_0x118;
    fVar8 = (float10)FUN_0062f600();
    local_10 = CONCAT44((float)fVar8,(undefined4)local_10);
    fVar9 = (float10)FUN_0062f600();
    local_10 = CONCAT44((float)fVar9,(undefined4)local_10);
    iVar1 = *(int *)&(this->Controller_data).field_0x11c;
    fVar10 = (float10)FUN_006291d0();
    local_10 = CONCAT44((float)fVar10,(undefined4)local_10);
    fStack_14 = (float)(iVar1 / 2) - (float)fVar10;
    local_18 = (((float)(iVar7 / 2) - (float)fVar8 * 0.5) - (float)fVar9) - 10.0;
    FUN_006295a0(&local_18,1);
  }
  if (this[0x67bb].vftablePtr != (GameController_vftable *)0x0) {
    iVar7 = *(int *)&(this->Controller_data).field_0x118;
    fVar8 = (float10)FUN_0062f600();
    local_10 = CONCAT44((float)fVar8,(undefined4)local_10);
    fVar9 = (float10)FUN_0062f600();
    local_10 = CONCAT44((float)fVar9,(undefined4)local_10);
    iVar1 = *(int *)&(this->Controller_data).field_0x11c;
    fVar10 = (float10)FUN_006291d0();
    local_10 = CONCAT44((float)fVar10,(undefined4)local_10);
    fVar11 = (float10)FUN_006291d0();
    local_10 = CONCAT44((float)fVar11,(undefined4)local_10);
    fStack_14 = (float)fVar11 + ((float)(iVar1 / 2) - (float)fVar10) + 10.0;
    local_18 = (((float)(iVar7 / 2) - (float)fVar8 * 0.5) - (float)fVar9) - 10.0;
    FUN_006295a0(&local_18,1);
  }
  if (*(int *)&this[0x67b9].Controller_data.field_0xa8 != 0) {
    iVar7 = *(int *)&(this->Controller_data).field_0x118;
    fVar8 = (float10)FUN_0062f600();
    local_10 = CONCAT44((float)fVar8,(undefined4)local_10);
    fVar9 = (float10)FUN_0062f600();
    local_10 = CONCAT44((float)fVar9,(undefined4)local_10);
    iVar1 = *(int *)&(this->Controller_data).field_0x11c;
    fVar10 = (float10)FUN_006291d0();
    local_10 = CONCAT44((float)fVar10,(undefined4)local_10);
    fStack_14 = (float)(iVar1 / 2) - (float)fVar10;
    local_18 = (((float)(iVar7 / 2) - (float)fVar8 * 0.5) - (float)fVar9) - 10.0;
    FUN_006295a0(&local_18,1);
  }
  if (*(int *)&this[0x67b9].Controller_data.field_0x64 != 0) {
    fVar8 = (float10)FUN_0062f600();
    local_10 = CONCAT44((float)fVar8,(undefined4)local_10);
    iVar7 = *(int *)&(this->Controller_data).field_0x118;
    iVar1 = *(int *)&(this->Controller_data).field_0x11c;
    fVar9 = (float10)FUN_006291d0();
    local_10 = CONCAT44((float)fVar9,(undefined4)local_10);
    fStack_14 = (float)(iVar1 / 2) - (float)fVar9;
    local_18 = (float)fVar8 * 0.5 + (float)(iVar7 / 2) + 10.0;
    FUN_006295a0(&local_18,1);
  }
  if (*(int *)&this[0x67b9].Controller_data.field_0x98 != 0) {
    fVar8 = (float10)FUN_0062f600();
    local_10 = CONCAT44((float)fVar8,(undefined4)local_10);
    iVar7 = *(int *)&(this->Controller_data).field_0x118;
    iVar1 = *(int *)&(this->Controller_data).field_0x11c;
    fVar9 = (float10)FUN_006291d0();
    local_10 = CONCAT44((float)fVar9,(undefined4)local_10);
    fStack_14 = (float)(iVar1 / 2) - (float)fVar9;
    local_18 = (float)fVar8 * 0.5 + (float)(iVar7 / 2) + 10.0;
    FUN_006295a0(&local_18,1);
  }
  if (*(int *)&this[0x67b9].Controller_data.field_0xa0 != 0) {
    fVar8 = (float10)FUN_0062f600();
    local_10 = CONCAT44((float)fVar8,(undefined4)local_10);
    iVar7 = *(int *)&(this->Controller_data).field_0x118;
    iVar1 = *(int *)&(this->Controller_data).field_0x11c;
    fVar9 = (float10)FUN_006291d0();
    local_10 = CONCAT44((float)fVar9,(undefined4)local_10);
    fStack_14 = (float)(iVar1 / 2) - (float)fVar9;
    local_18 = (float)fVar8 * 0.5 + (float)(iVar7 / 2) + 10.0;
    FUN_006295a0(&local_18,1);
  }
  if (*(int *)&this[0x67b9].Controller_data.field_0x7c != 0) {
    iVar7 = *(int *)&(this->Controller_data).field_0x118;
    fVar8 = (float10)FUN_0062f600();
    local_10 = CONCAT44((float)fVar8,(undefined4)local_10);
    fVar9 = (float10)FUN_0062f600();
    local_10 = CONCAT44((float)fVar9,(undefined4)local_10);
    iVar1 = *(int *)&(this->Controller_data).field_0x11c;
    fVar10 = (float10)FUN_006291d0();
    local_10 = CONCAT44((float)fVar10,(undefined4)local_10);
    fStack_14 = (float)(iVar1 / 2) - (float)fVar10;
    local_18 = (((float)(iVar7 / 2) - (float)fVar8 * 0.5) - (float)fVar9) - 10.0;
    FUN_006295a0(&local_18,1);
  }
  iVar7 = *(int *)(*(int *)&this[0x67b9].Controller_data.field_0x3c + 0x38);
  iVar1 = *(int *)(iVar7 + 0x68);
  iVar7 = *(int *)(iVar7 + 0x94);
  *(float *)(iVar7 + iVar1 * 8) = (float)(*(int *)&(this->Controller_data).field_0x118 / 2 + -0x1ae)
  ;
  *(undefined4 *)(iVar7 + 4 + iVar1 * 8) = 0x42480000;
  (**(code **)(**(int **)(*(int *)&this[0x67b9].Controller_data.field_0x3c + 0x38) + 4))(1);
  FUN_00652c10((float)(param_1 / 2),(float)(param_2 / 2));
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* cube::GameController::vfunction11 @ 00488ee0  kind=game  attributed-by=rtti  size=61417 */
// (decompilation unavailable)
undefined __thiscall vfunction11(GameController * this) { }

/* cube::GameController::vfunction12 @ 004ac260  kind=game  attributed-by=rtti  size=24384 */
// (decompilation unavailable)
undefined __thiscall vfunction12(GameController * this) { }

