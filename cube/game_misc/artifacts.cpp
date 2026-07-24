// artifacts (game_misc) -- cube. 101 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "artifacts.h"

/* FUN_0042c680 @ 0042c680  kind=gamemisc  attributed-by=role:artifact  size=52 */

uint FUN_0042c680(int param_1)

{
  uint uVar1;
  uint *in_ECX;
  int iVar2;
  
  iVar2 = 0;
  param_1 = param_1 - (int)in_ECX;
  while ((uVar1 = *in_ECX, uVar1 == *(uint *)(param_1 + (int)in_ECX) &&
         (uVar1 = in_ECX[1], uVar1 == *(uint *)(param_1 + 4 + (int)in_ECX)))) {
    iVar2 = iVar2 + 1;
    in_ECX = in_ECX + 2;
    if (2 < iVar2) {
      return uVar1 & 0xffffff00;
    }
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}


/* FUN_00457f70 @ 00457f70  kind=gamemisc  attributed-by=role:artifact  size=180 */

void FUN_00457f70(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 local_1c;
  undefined8 local_14;
  undefined8 local_c;
  
  iVar1 = param_1[1] - *param_1;
  iVar4 = param_1[3] + 4;
  if (iVar1 < iVar4) {
    param_1[3] = iVar1;
    piVar2 = param_1;
  }
  else {
    piVar2 = *(int **)(*param_1 + param_1[3]);
    param_1[3] = iVar4;
  }
  iVar4 = 0;
  if (0 < (int)piVar2) {
    do {
      iVar1 = param_1[3];
      iVar3 = *param_1;
      if (param_1[1] - iVar3 < iVar1 + 0x18) {
        param_1[3] = param_1[1] - iVar3;
      }
      else {
        local_1c = *(undefined8 *)(iVar3 + iVar1);
        local_14 = *(undefined8 *)(iVar3 + 8 + iVar1);
        local_c = *(undefined8 *)(iVar3 + 0x10 + iVar1);
        param_1[3] = iVar1 + 0x18;
      }
      iVar1 = *param_2;
      iVar3 = FUN_00451d00(iVar1,*(undefined4 *)(iVar1 + 4),&local_1c);
      if (param_2[1] == 0x7fffffe) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("list<T> too long");
      }
      param_2[1] = param_2[1] + 1;
      *(int *)(iVar1 + 4) = iVar3;
      iVar4 = iVar4 + 1;
      **(int **)(iVar3 + 4) = iVar3;
    } while (iVar4 < (int)piVar2);
  }
  return;
}


/* FUN_00458030 @ 00458030  kind=gamemisc  attributed-by=role:artifact  size=192 */

void FUN_00458030(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined1 local_2c [16];
  undefined1 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_c;
  
  iVar1 = param_1[1] - *param_1;
  iVar4 = param_1[3] + 4;
  if (iVar1 < iVar4) {
    param_1[3] = iVar1;
    piVar2 = param_1;
  }
  else {
    piVar2 = *(int **)(*param_1 + param_1[3]);
    param_1[3] = iVar4;
  }
  iVar4 = 0;
  if (0 < (int)piVar2) {
    do {
      iVar3 = param_1[1] - *param_1;
      iVar1 = param_1[3] + 0x28;
      local_1c = 0;
      local_18 = 0;
      local_14 = 0;
      local_c = 0;
      if (iVar3 < iVar1) {
        param_1[3] = iVar3;
      }
      else {
        memcpy(local_2c,(void *)(*param_1 + param_1[3]),0x28);
        param_1[3] = iVar1;
      }
      iVar1 = *param_2;
      iVar3 = FUN_00451c70(iVar1,*(undefined4 *)(iVar1 + 4),local_2c);
      if (param_2[1] == 0x5555554) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("list<T> too long");
      }
      param_2[1] = param_2[1] + 1;
      *(int *)(iVar1 + 4) = iVar3;
      iVar4 = iVar4 + 1;
      **(int **)(iVar3 + 4) = iVar3;
    } while (iVar4 < (int)piVar2);
  }
  return;
}


/* FUN_00458100 @ 00458100  kind=gamemisc  attributed-by=role:artifact  size=197 */

void FUN_00458100(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar1 = param_1[1] - *param_1;
  iVar3 = param_1[3] + 4;
  if (iVar1 < iVar3) {
    param_1[3] = iVar1;
  }
  else {
    local_1c = *(int *)(*param_1 + param_1[3]);
    param_1[3] = iVar3;
  }
  iVar3 = 0;
  if (0 < local_1c) {
    do {
      iVar1 = param_1[3];
      iVar2 = *param_1;
      if (param_1[1] - iVar2 < iVar1 + 0x10) {
        param_1[3] = param_1[1] - iVar2;
      }
      else {
        local_18 = *(undefined8 *)(iVar2 + iVar1);
        local_10 = *(undefined8 *)(iVar2 + 8 + iVar1);
        param_1[3] = iVar1 + 0x10;
      }
      iVar1 = *param_2;
      iVar2 = FUN_00608a20(iVar1,*(undefined4 *)(iVar1 + 4),&local_18);
      if (param_2[1] == 0xaaaaaa9) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("list<T> too long");
      }
      param_2[1] = param_2[1] + 1;
      *(int *)(iVar1 + 4) = iVar2;
      iVar3 = iVar3 + 1;
      **(int **)(iVar2 + 4) = iVar2;
    } while (iVar3 < local_1c);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004581d0 @ 004581d0  kind=gamemisc  attributed-by=role:artifact  size=315 */

void FUN_004581d0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar1 = param_1[1] - *param_1;
  iVar3 = param_1[3] + 4;
  if (iVar1 < iVar3) {
    param_1[3] = iVar1;
  }
  else {
    local_7c = *(int *)(*param_1 + param_1[3]);
    param_1[3] = iVar3;
  }
  iVar3 = 0;
  if (0 < local_7c) {
    do {
      iVar2 = param_1[1] - *param_1;
      iVar1 = param_1[3] + 0x70;
      local_78 = 0xffffffff;
      local_74 = 0xffffffff;
      local_70 = 0xffffffff;
      local_6c = 0xffffffff;
      local_68 = 0;
      local_48 = 0;
      local_44 = 0;
      local_40 = 0;
      local_2c = 0x3f000000;
      local_28 = 0x3f800000;
      local_24 = 0x3f800000;
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
      local_c = 0;
      if (iVar2 < iVar1) {
        param_1[3] = iVar2;
      }
      else {
        memcpy(&local_78,(void *)(*param_1 + param_1[3]),0x70);
        param_1[3] = iVar1;
      }
      iVar1 = *param_2;
      iVar2 = FUN_00451da0(iVar1,*(undefined4 *)(iVar1 + 4),&local_78);
      if (param_2[1] == 0x2222221) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("list<T> too long");
      }
      param_2[1] = param_2[1] + 1;
      *(int *)(iVar1 + 4) = iVar2;
      iVar3 = iVar3 + 1;
      **(int **)(iVar2 + 4) = iVar2;
    } while (iVar3 < local_7c);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00458310 @ 00458310  kind=gamemisc  attributed-by=role:artifact  size=218 */

void FUN_00458310(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_20;
  undefined8 local_1c;
  ulonglong local_14;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar1 = param_1[1] - *param_1;
  iVar3 = param_1[3] + 4;
  if (iVar1 < iVar3) {
    param_1[3] = iVar1;
  }
  else {
    local_20 = *(int *)(*param_1 + param_1[3]);
    param_1[3] = iVar3;
  }
  iVar3 = 0;
  if (0 < local_20) {
    do {
      iVar1 = param_1[3];
      iVar2 = *param_1;
      local_14 = local_14 & 0xffffffff;
      local_c = 0;
      if (param_1[1] - iVar2 < iVar1 + 0x14) {
        param_1[3] = param_1[1] - iVar2;
      }
      else {
        local_1c = *(undefined8 *)(iVar2 + iVar1);
        local_c = *(undefined4 *)(iVar2 + 0x10 + iVar1);
        local_14 = *(ulonglong *)(iVar2 + 8 + iVar1);
        param_1[3] = iVar1 + 0x14;
      }
      iVar1 = *param_2;
      iVar2 = FUN_00451e80(iVar1,*(undefined4 *)(iVar1 + 4),&local_1c);
      if (param_2[1] == 0x9249248) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("list<T> too long");
      }
      param_2[1] = param_2[1] + 1;
      *(int *)(iVar1 + 4) = iVar2;
      iVar3 = iVar3 + 1;
      **(int **)(iVar2 + 4) = iVar2;
    } while (iVar3 < local_20);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004583f0 @ 004583f0  kind=gamemisc  attributed-by=role:artifact  size=269 */

void FUN_004583f0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_54;
  undefined1 local_50 [20];
  undefined1 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  undefined1 local_a;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar1 = param_1[1] - *param_1;
  iVar3 = param_1[3] + 4;
  if (iVar1 < iVar3) {
    param_1[3] = iVar1;
  }
  else {
    local_54 = *(int *)(*param_1 + param_1[3]);
    param_1[3] = iVar3;
  }
  iVar3 = 0;
  if (0 < local_54) {
    do {
      iVar2 = param_1[1] - *param_1;
      iVar1 = param_1[3] + 0x48;
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      local_28 = 0;
      local_20 = 0;
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
      local_c = 0;
      local_a = 0;
      if (iVar2 < iVar1) {
        param_1[3] = iVar2;
      }
      else {
        memcpy(local_50,(void *)(*param_1 + param_1[3]),0x48);
        param_1[3] = iVar1;
      }
      iVar1 = *param_2;
      iVar2 = FUN_00451ee0(iVar1,*(undefined4 *)(iVar1 + 4),local_50);
      if (param_2[1] == 0x3333332) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("list<T> too long");
      }
      param_2[1] = param_2[1] + 1;
      *(int *)(iVar1 + 4) = iVar2;
      iVar3 = iVar3 + 1;
      **(int **)(iVar2 + 4) = iVar2;
    } while (iVar3 < local_54);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00458500 @ 00458500  kind=gamemisc  attributed-by=role:artifact  size=326 */

void FUN_00458500(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_12c;
  undefined1 local_128 [8];
  undefined2 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined2 local_114;
  undefined1 local_112;
  undefined2 local_110;
  undefined1 local_10c [256];
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar1 = param_1[1] - *param_1;
  iVar3 = param_1[3] + 4;
  if (iVar1 < iVar3) {
    param_1[3] = iVar1;
  }
  else {
    local_12c = *(int *)(*param_1 + param_1[3]);
    param_1[3] = iVar3;
  }
  iVar3 = 0;
  if (0 < local_12c) {
    do {
      local_110 = 1;
      local_120 = 0;
      local_11c = 0;
      local_118 = 0;
      local_114 = 0;
      local_112 = 0;
      local_c = 0;
      memset(local_10c,0,0x100);
      iVar2 = param_1[1] - *param_1;
      iVar1 = param_1[3] + 0x120;
      if (iVar2 < iVar1) {
        param_1[3] = iVar2;
      }
      else {
        memcpy(local_128,(void *)(*param_1 + param_1[3]),0x120);
        param_1[3] = iVar1;
      }
      iVar1 = *param_2;
      iVar2 = FUN_00451cc0(iVar1,*(undefined4 *)(iVar1 + 4),local_128);
      if (param_2[1] == 0xdd67c7) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("list<T> too long");
      }
      param_2[1] = param_2[1] + 1;
      *(int *)(iVar1 + 4) = iVar2;
      iVar3 = iVar3 + 1;
      **(int **)(iVar2 + 4) = iVar2;
    } while (iVar3 < local_12c);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00458650 @ 00458650  kind=gamemisc  attributed-by=role:artifact  size=293 */

void FUN_00458650(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined2 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar1 = param_1[1] - *param_1;
  iVar3 = param_1[3] + 4;
  if (iVar1 < iVar3) {
    param_1[3] = iVar1;
  }
  else {
    local_44 = *(int *)(*param_1 + param_1[3]);
    param_1[3] = iVar3;
  }
  iVar3 = 0;
  if (0 < local_44) {
    do {
      iVar2 = param_1[1] - *param_1;
      iVar1 = param_1[3] + 0x38;
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
      local_c = 0;
      if (iVar2 < iVar1) {
        param_1[3] = iVar2;
      }
      else {
        memcpy(&local_40,(void *)(*param_1 + param_1[3]),0x38);
        param_1[3] = iVar1;
      }
      iVar1 = *param_2;
      iVar2 = FUN_00451d40(iVar1,*(undefined4 *)(iVar1 + 4),&local_40);
      if (param_2[1] == 0x3fffffe) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("list<T> too long");
      }
      param_2[1] = param_2[1] + 1;
      *(int *)(iVar1 + 4) = iVar2;
      iVar3 = iVar3 + 1;
      **(int **)(iVar2 + 4) = iVar2;
    } while (iVar3 < local_44);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00458780 @ 00458780  kind=gamemisc  attributed-by=role:artifact  size=220 */

void FUN_00458780(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_64;
  undefined1 local_60 [64];
  undefined1 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar1 = param_1[1] - *param_1;
  iVar3 = param_1[3] + 4;
  if (iVar1 < iVar3) {
    param_1[3] = iVar1;
  }
  else {
    local_64 = *(int *)(*param_1 + param_1[3]);
    param_1[3] = iVar3;
  }
  iVar3 = 0;
  if (0 < local_64) {
    do {
      iVar2 = param_1[1] - *param_1;
      iVar1 = param_1[3] + 0x58;
      local_20 = 1;
      local_1c = 0;
      local_18 = 0;
      local_10 = 0;
      if (iVar2 < iVar1) {
        param_1[3] = iVar2;
      }
      else {
        memcpy(local_60,(void *)(*param_1 + param_1[3]),0x58);
        param_1[3] = iVar1;
      }
      iVar1 = *param_2;
      iVar2 = FUN_00452060(iVar1,*(undefined4 *)(iVar1 + 4),local_60);
      if (param_2[1] == 0x2aaaaa9) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("list<T> too long");
      }
      param_2[1] = param_2[1] + 1;
      *(int *)(iVar1 + 4) = iVar2;
      iVar3 = iVar3 + 1;
      **(int **)(iVar2 + 4) = iVar2;
    } while (iVar3 < local_64);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00458860 @ 00458860  kind=gamemisc  attributed-by=role:artifact  size=208 */

void FUN_00458860(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_54;
  undefined1 local_50 [60];
  undefined4 local_14;
  undefined4 local_10;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar1 = param_1[1] - *param_1;
  iVar3 = param_1[3] + 4;
  if (iVar1 < iVar3) {
    param_1[3] = iVar1;
  }
  else {
    local_54 = *(int *)(*param_1 + param_1[3]);
    param_1[3] = iVar3;
  }
  iVar3 = 0;
  if (0 < local_54) {
    do {
      iVar2 = param_1[1] - *param_1;
      iVar1 = param_1[3] + 0x48;
      local_14 = 0;
      local_10 = 0x40400000;
      if (iVar2 < iVar1) {
        param_1[3] = iVar2;
      }
      else {
        memcpy(local_50,(void *)(*param_1 + param_1[3]),0x48);
        param_1[3] = iVar1;
      }
      iVar1 = *param_2;
      iVar2 = FUN_004520d0(iVar1,*(undefined4 *)(iVar1 + 4),local_50);
      if (param_2[1] == 0x3333332) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("list<T> too long");
      }
      param_2[1] = param_2[1] + 1;
      *(int *)(iVar1 + 4) = iVar2;
      iVar3 = iVar3 + 1;
      **(int **)(iVar2 + 4) = iVar2;
    } while (iVar3 < local_54);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00458940 @ 00458940  kind=gamemisc  attributed-by=role:artifact  size=222 */

void FUN_00458940(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar1 = param_1[1] - *param_1;
  iVar3 = param_1[3] + 4;
  if (iVar1 < iVar3) {
    param_1[3] = iVar1;
  }
  else {
    local_24 = *(int *)(*param_1 + param_1[3]);
    param_1[3] = iVar3;
  }
  iVar3 = 0;
  if (0 < local_24) {
    do {
      iVar1 = param_1[3];
      iVar2 = *param_1;
      local_10 = 0x3f8000003f800000;
      if (param_1[1] - iVar2 < iVar1 + 0x18) {
        param_1[3] = param_1[1] - iVar2;
      }
      else {
        local_20 = *(undefined8 *)(iVar2 + iVar1);
        local_18 = *(undefined8 *)(iVar2 + 8 + iVar1);
        local_10 = *(undefined8 *)(iVar2 + 0x10 + iVar1);
        param_1[3] = iVar1 + 0x18;
      }
      iVar1 = *param_2;
      iVar2 = FUN_0058d860(iVar1,*(undefined4 *)(iVar1 + 4),&local_20);
      if (param_2[1] == 0x7fffffe) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("list<T> too long");
      }
      param_2[1] = param_2[1] + 1;
      *(int *)(iVar1 + 4) = iVar2;
      iVar3 = iVar3 + 1;
      **(int **)(iVar2 + 4) = iVar2;
    } while (iVar3 < local_24);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00458a20 @ 00458a20  kind=gamemisc  attributed-by=role:artifact  size=358 */

void FUN_00458a20(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_154;
  undefined2 local_150 [2];
  undefined4 local_14c;
  undefined4 local_148;
  undefined2 local_144;
  undefined1 local_142;
  undefined2 local_140;
  undefined1 local_13c [256];
  undefined4 local_3c;
  undefined4 local_1c;
  undefined1 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar1 = param_1[1] - *param_1;
  iVar3 = param_1[3] + 4;
  if (iVar1 < iVar3) {
    param_1[3] = iVar1;
  }
  else {
    local_154 = *(int *)(*param_1 + param_1[3]);
    param_1[3] = iVar3;
  }
  iVar3 = 0;
  if (0 < local_154) {
    do {
      local_140 = 1;
      local_150[0] = 0;
      local_14c = 0;
      local_148 = 0;
      local_144 = 0;
      local_142 = 0;
      local_3c = 0;
      memset(local_13c,0,0x100);
      iVar2 = param_1[1] - *param_1;
      iVar1 = param_1[3] + 0x148;
      local_1c = 0x3d924925;
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
      local_c = 0xffffffff;
      if (iVar2 < iVar1) {
        param_1[3] = iVar2;
      }
      else {
        memcpy(local_150,(void *)(*param_1 + param_1[3]),0x148);
        param_1[3] = iVar1;
      }
      iVar1 = *param_2;
      iVar2 = FUN_00452190(iVar1,*(undefined4 *)(iVar1 + 4),local_150);
      if (param_2[1] == 0xc30c2f) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("list<T> too long");
      }
      param_2[1] = param_2[1] + 1;
      *(int *)(iVar1 + 4) = iVar2;
      iVar3 = iVar3 + 1;
      **(int **)(iVar2 + 4) = iVar2;
    } while (iVar3 < local_154);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00468b70 @ 00468b70  kind=gamemisc  attributed-by=role:artifact  size=235 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_00468b70(uint *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int *in_ECX;
  undefined4 *puVar6;
  undefined1 local_22e4 [4];
  uint local_22e0;
  uint local_22dc;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  puVar1 = (undefined4 *)*in_ECX;
  puVar6 = puVar1;
  if (*(char *)((int)puVar1[1] + 0xd) == '\0') {
    puVar2 = (undefined4 *)puVar1[1];
    do {
      if (((int)param_1[1] < (int)puVar2[5]) ||
         (((int)param_1[1] <= (int)puVar2[5] && (*param_1 <= (uint)puVar2[4])))) {
        puVar3 = (undefined4 *)*puVar2;
        puVar6 = puVar2;
      }
      else {
        puVar3 = (undefined4 *)puVar2[2];
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar3 + 0xd) == '\0');
  }
  if (puVar6 != puVar1) {
    if (((int)puVar6[5] < (int)param_1[1]) ||
       (((int)puVar6[5] <= (int)param_1[1] && ((uint)puVar6[4] <= *param_1)))) {
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  uVar4 = FUN_0043c100();
  local_22e0 = *param_1;
  local_22dc = param_1[1];
  FUN_00466050(uVar4);
  iVar5 = FUN_004522e0(&local_22e0);
  FUN_00453670(local_22e4,puVar6,iVar5 + 0x10,iVar5);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00486b60 @ 00486b60  kind=gamemisc  attributed-by=role:artifact  size=55 */

int FUN_00486b60(SOCKET param_1,char *param_2,int param_3,int param_4)

{
  int iVar1;
  int len;
  
  len = param_3;
  while ((iVar1 = param_3, 0 < len && (iVar1 = recv(param_1,param_2,len,param_4), 0 < iVar1))) {
    len = len - iVar1;
    param_2 = param_2 + iVar1;
  }
  return iVar1;
}


/* FUN_004870c0 @ 004870c0  kind=gamemisc  attributed-by=role:artifact  size=45 */

void FUN_004870c0(uint param_1)

{
  undefined4 *in_ECX;
  
  if (param_1 <= (uint)in_ECX[4]) {
    in_ECX[4] = param_1;
    if (7 < (uint)in_ECX[5]) {
      in_ECX = (undefined4 *)*in_ECX;
    }
    *(undefined2 *)((int)in_ECX + param_1 * 2) = 0;
    return;
  }
  FUN_00425390();
  return;
}


/* FUN_00488c70 @ 00488c70  kind=gamemisc  attributed-by=role:artifact  size=141 */

void FUN_00488c70(void)

{
  int iVar1;
  int in_ECX;
  bool bVar2;
  
  bVar2 = *(char *)(in_ECX + 0x8008f1) == '\0';
  *(bool *)(in_ECX + 0x8008f1) = bVar2;
  if (bVar2) {
    iVar1 = 0x160;
    do {
      *(undefined4 *)(iVar1 + *(int *)(in_ECX + 0x80090c)) =
           *(undefined4 *)(*(int *)(in_ECX + 0x8006d0) + 0xfd8 + iVar1);
      iVar1 = iVar1 + 4;
    } while (iVar1 < 0x18c);
    *(uint *)(*(int *)(in_ECX + 0x80090c) + 0x18c) =
         (uint)*(byte *)(*(int *)(in_ECX + 0x8006d0) + 0x141);
    iVar1 = *(int *)(*(int *)(in_ECX + 0x8008c0) + 0x3c);
    *(undefined4 *)(*(int *)(iVar1 + 0x94) + *(int *)(iVar1 + 0x68) * 4) = 0;
    iVar1 = *(int *)(*(int *)(in_ECX + 0x800ad4) + 0x3c);
    *(undefined4 *)(*(int *)(iVar1 + 0x94) + *(int *)(iVar1 + 0x68) * 4) = 0;
  }
  return;
}


/* FUN_004c04c0 @ 004c04c0  kind=gamemisc  attributed-by=role:artifact  size=2548 */

void FUN_004c04c0(uint *param_1,undefined8 *param_2,undefined8 *param_3,int param_4,
                 undefined4 param_5,undefined4 param_6,float param_7,float param_8,int param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  int local_a4;
  float local_9c;
  float local_90;
  float local_84;
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float local_10;
  float fStack_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar4 = 0;
  if (0 < param_9) {
    iVar2 = param_4 + (param_4 >> 0x1f & 7U);
    local_a4 = 0;
    iVar3 = param_4 % 10000;
    do {
      fVar5 = (float)(param_4 % 2000) / 2000.0;
      dVar7 = (double)(fVar5 * 3.1415927);
      libm_sse2_cos_precise();
      dVar8 = (double)(fVar5 * 3.1415927);
      libm_sse2_sin_precise();
      fVar6 = (fVar5 - 0.5) * 2.0;
      dVar9 = (double)((float)local_a4 +
                      ((float)(int)(CONCAT44(iVar2 >> 0x1f,iVar2 >> 3) % 500) / 500.0) * 2.0 *
                      3.1415927);
      libm_sse2_cos_precise();
      fVar10 = 1.0 - fVar5;
      fVar13 = ((float)dVar9 * 0.5 + 1.0) * param_8 * (1.0 - fVar6 * fVar6);
      fVar6 = ((float)iVar4 / 10.0 + (float)iVar3 * 0.0001) * 2.0 * 3.1415927;
      local_78 = (float)*param_3;
      fStack_74 = (float)((ulonglong)*param_3 >> 0x20);
      local_70 = (float)param_3[1];
      fStack_6c = (float)((ulonglong)param_3[1] >> 0x20);
      local_18 = (float)*param_2;
      local_18 = local_18 * fVar10;
      fStack_14 = (float)((ulonglong)*param_2 >> 0x20);
      fStack_14 = fStack_14 * fVar10;
      local_10 = (float)param_2[1];
      local_10 = local_10 * fVar10;
      fStack_c = (float)((ulonglong)param_2[1] >> 0x20);
      fStack_c = fStack_c * fVar10;
      _local_28 = CONCAT44(fStack_14 + fStack_74 * fVar5,local_18 + local_78 * fVar5);
      _local_20 = CONCAT44(fStack_c + fStack_6c * fVar5,local_10 + local_70 * fVar5);
      FUN_00448280(&local_28);
      dVar9 = (double)fVar6;
      libm_sse2_cos_precise();
      fVar10 = (float)dVar9 * (float)dVar8 * param_7;
      dVar9 = (double)fVar6;
      libm_sse2_sin_precise();
      fVar14 = (float)dVar9 * (float)dVar8 * param_7;
      fVar11 = fVar14 * 0.0;
      fVar15 = (float)dVar7 * param_7 * 0.0;
      fVar19 = fVar10 * 0.0;
      fVar20 = fVar19 + fVar11;
      fVar21 = (float)CONCAT44(*(int *)(in_ECX + 0x1e4) + param_1[3] +
                               (uint)CARRY4(*(uint *)(in_ECX + 0x1e0),param_1[2]),
                               *(uint *)(in_ECX + 0x1e0) + param_1[2]) * 1.5258789e-05;
      fVar12 = (float)*(longlong *)(param_1 + 4) * 1.5258789e-05 * 0.0;
      fVar16 = (float)CONCAT44(param_1[1] + *(int *)(in_ECX + 0x1dc) +
                               (uint)CARRY4(*param_1,*(uint *)(in_ECX + 0x1d8)),
                               *param_1 + *(uint *)(in_ECX + 0x1d8)) * 1.5258789e-05;
      fVar6 = fVar21 * 0.0;
      fVar17 = fVar16 * 0.0;
      fVar18 = fVar17 + fVar6;
      fVar24 = fVar16 + fVar6 + fVar12 + fVar10 + fVar11 + fVar15 + 0.0;
      fVar22 = fVar21 + fVar17 + fVar12 + fVar14 + fVar19 + fVar15 + 0.0;
      fVar6 = fVar18 + (float)*(longlong *)(param_1 + 4) * 1.5258789e-05 +
              fVar20 + (float)dVar7 * param_7 + 0.0;
      fVar19 = fVar18 + fVar12 + fVar20 + fVar15 + 1.0;
      fVar10 = fVar5 * 40.0 * 0.017453292;
      dVar7 = (double)fVar10;
      local_38 = fVar24;
      local_34 = fVar22;
      local_30 = fVar6;
      local_2c = fVar19;
      libm_sse2_cos_precise();
      fVar11 = (float)dVar7;
      dVar7 = (double)fVar10;
      libm_sse2_sin_precise();
      fVar18 = (float)dVar7;
      fVar10 = fVar11 * 0.0;
      fVar15 = fVar18 * 0.0;
      fVar20 = fVar10 + fVar15;
      fVar21 = fVar10 - fVar15;
      fVar12 = fVar5 * 30.0 * 0.017453292;
      dVar7 = (double)fVar12;
      libm_sse2_cos_precise();
      fVar14 = (float)dVar7;
      dVar7 = (double)fVar12;
      libm_sse2_sin_precise();
      fVar12 = (float)dVar7;
      fVar16 = fVar14 - fVar21 * fVar12;
      fVar25 = fVar14 * 0.0;
      local_84 = fVar21 * fVar14 + fVar12;
      fVar17 = fVar25 - (fVar10 - fVar18) * fVar12;
      local_90 = fVar12 * 0.0;
      local_9c = (fVar10 - fVar18) * fVar14 + local_90;
      fVar23 = fVar25 - (fVar11 - fVar15) * fVar12;
      fVar25 = fVar25 - fVar21 * fVar12;
      fVar26 = (fVar11 - fVar15) * fVar14 + local_90;
      local_90 = fVar21 * fVar14 + local_90;
      fVar5 = fVar5 * 10.0 * 0.017453292;
      dVar7 = (double)fVar5;
      local_48 = local_84;
      local_44 = local_9c;
      local_40 = fVar26;
      local_3c = local_90;
      libm_sse2_cos_precise();
      fVar12 = (float)dVar7;
      dVar7 = (double)fVar5;
      libm_sse2_sin_precise();
      fVar5 = (float)dVar7;
      local_68 = fVar20 * fVar5 + fVar16 * fVar12;
      local_58 = fVar20 * fVar12 - fVar16 * fVar5;
      local_64 = (fVar11 + fVar15) * fVar5 + fVar17 * fVar12;
      local_54 = (fVar11 + fVar15) * fVar12 - fVar17 * fVar5;
      local_60 = (fVar18 + fVar10) * fVar5 + fVar23 * fVar12;
      local_50 = (fVar18 + fVar10) * fVar12 - fVar23 * fVar5;
      local_5c = fVar20 * fVar5 + fVar25 * fVar12;
      local_4c = fVar20 * fVar12 - fVar25 * fVar5;
      if (fVar13 != 1.0) {
        local_68 = local_68 * fVar13;
        local_58 = local_58 * fVar13;
        local_64 = local_64 * fVar13;
        local_54 = local_54 * fVar13;
        local_60 = local_60 * fVar13;
        local_50 = local_50 * fVar13;
        local_5c = local_5c * fVar13;
        local_4c = local_4c * fVar13;
        local_84 = local_84 * fVar13;
        fVar26 = fVar26 * fVar13;
        local_9c = local_9c * fVar13;
        local_90 = local_90 * fVar13;
        local_48 = local_84;
        local_44 = local_9c;
        local_40 = fVar26;
        local_3c = local_90;
      }
      iVar1 = *(int *)(in_ECX + 0x800730);
      fVar5 = (float)*(int *)(iVar1 + 0x48) * -0.5;
      fVar11 = (float)*(int *)(iVar1 + 0x44) * -0.5;
      fVar10 = (float)*(int *)(iVar1 + 0x4c) * -0.5;
      local_38 = local_58 * fVar5 + local_68 * fVar11 + local_84 * fVar10 + fVar24;
      local_34 = local_54 * fVar5 + local_64 * fVar11 + local_9c * fVar10 + fVar22;
      local_30 = local_50 * fVar5 + local_60 * fVar11 + fVar26 * fVar10 + fVar6;
      local_2c = local_4c * fVar5 + local_5c * fVar11 + local_90 * fVar10 + fVar19;
      FUN_004482a0(&local_68,param_5,param_6);
      FUN_004e6df0();
      local_a4 = local_a4 + 0xd;
      iVar4 = iVar4 + 1;
      param_4 = param_4 + 0x1bb;
    } while (iVar4 < param_9);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004ccfa0 @ 004ccfa0  kind=gamemisc  attributed-by=role:artifact  size=1074 */

int FUN_004ccfa0(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 local_c;
  
  iVar3 = param_2;
  piVar2 = param_1;
  iVar4 = param_1[1] - *param_1;
  iVar1 = param_1[3] + 8;
  local_c = 0;
  if (iVar4 < iVar1) {
    param_1[3] = iVar4;
  }
  else {
    local_c = *(undefined8 *)(*param_1 + param_1[3]);
    param_1[3] = iVar1;
  }
  param_1 = (int *)0x0;
  FUN_004cc5c0(piVar2,&local_c,&param_1,param_2);
  FUN_004cc540(piVar2,&local_c,&param_1,iVar3 + 0x18);
  FUN_004cc540(piVar2,&local_c,&param_1,iVar3 + 0x24);
  FUN_004cc540(piVar2,&local_c,&param_1,iVar3 + 0x30);
  FUN_004cc540(piVar2,&local_c,&param_1,iVar3 + 0x3c);
  FUN_004cbfc0(piVar2,&local_c,&param_1,iVar3 + 0x48);
  FUN_004cbfc0(piVar2,&local_c,&param_1,iVar3 + 0x4c);
  FUN_004cbde0(piVar2,&local_c,&param_1,iVar3 + 0x50);
  FUN_004cbfc0(piVar2,&local_c,&param_1,iVar3 + 0x54);
  FUN_004cbde0(piVar2,&local_c,&param_1,iVar3 + 0x58);
  FUN_004cbfc0(piVar2,&local_c,&param_1,iVar3 + 0x5c);
  FUN_004cbfc0(piVar2,&local_c,&param_1,iVar3 + 0x60);
  FUN_004cbfc0(piVar2,&local_c,&param_1,iVar3 + 100);
  FUN_004cc1c0(piVar2,&local_c,&param_1,iVar3 + 0x68);
  FUN_004cbed0(piVar2,&local_c,&param_1,iVar3 + 0x114);
  FUN_004cbfc0(piVar2,&local_c,&param_1,iVar3 + 0x118);
  FUN_004cbfc0(piVar2,&local_c,&param_1,iVar3 + 0x11c);
  FUN_004cbfc0(piVar2,&local_c,&param_1,iVar3 + 0x120);
  FUN_004cbfc0(piVar2,&local_c,&param_1,iVar3 + 0x124);
  FUN_004cbfc0(piVar2,&local_c,&param_1,iVar3 + 0x128);
  FUN_004cbfc0(piVar2,&local_c,&param_1,iVar3 + 300);
  FUN_004cbde0(piVar2,&local_c,&param_1,iVar3 + 0x130);
  FUN_004cbde0(piVar2,&local_c,&param_1,iVar3 + 0x131);
  FUN_004cbfc0(piVar2,&local_c,&param_1,iVar3 + 0x134);
  FUN_004cc540(piVar2,&local_c,&param_1,iVar3 + 0x138);
  FUN_004cc540(piVar2,&local_c,&param_1,iVar3 + 0x144);
  FUN_004cc540(piVar2,&local_c,&param_1,iVar3 + 0x150);
  FUN_004cbfc0(piVar2,&local_c,&param_1,iVar3 + 0x15c);
  FUN_004cbfc0(piVar2,&local_c,&param_1,iVar3 + 0x160);
  FUN_004cbfc0(piVar2,&local_c,&param_1,iVar3 + 0x164);
  FUN_004cc0b0(piVar2,&local_c,&param_1,iVar3 + 0x168);
  FUN_004cbde0(piVar2,&local_c,&param_1,iVar3 + 0x17c);
  FUN_004cbde0(piVar2,&local_c,&param_1,iVar3 + 0x17d);
  FUN_004cbfc0(piVar2,&local_c,&param_1,iVar3 + 0x180);
  FUN_004cbfc0(piVar2,&local_c,&param_1,iVar3 + 0x184);
  FUN_004cc6d0(piVar2,&local_c,&param_1,iVar3 + 0x188);
  FUN_004cc6d0(piVar2,&local_c,&param_1,iVar3 + 400);
  FUN_004cbde0(piVar2,&local_c,&param_1,iVar3 + 0x198);
  FUN_004cbfc0(piVar2,&local_c,&param_1,iVar3 + 0x19c);
  FUN_004cc540(piVar2,&local_c,&param_1,iVar3 + 0x1a0);
  FUN_004cc5c0(piVar2,&local_c,&param_1,iVar3 + 0x1b0);
  FUN_004cc540(piVar2,&local_c,&param_1,iVar3 + 0x1cc);
  FUN_004cbde0(piVar2,&local_c,&param_1,iVar3 + 0x1c8);
  FUN_004cc3c0(piVar2,&local_c,&param_1,iVar3 + 0x1d8);
  FUN_004cc2c0(piVar2,&local_c,&param_1,iVar3 + 0x2f0);
  FUN_004ccda0(piVar2,&local_c,&param_1,iVar3 + 0x1158);
  FUN_004ccea0(piVar2,&local_c,&param_1,iVar3 + 0x1128);
  FUN_004cbfc0(piVar2,&local_c,&param_1,iVar3 + 0x1154);
  return piVar2[1] - *piVar2;
}


/* FUN_004cd3e0 @ 004cd3e0  kind=gamemisc  attributed-by=role:artifact  size=1725 */

int FUN_004cd3e0(SOCKET param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  char local_10 [8];
  char *local_8;
  
  local_8 = local_10;
  local_10[0] = '\0';
  local_10[1] = '\0';
  local_10[2] = '\0';
  local_10[3] = '\0';
  local_10[4] = '\0';
  local_10[5] = '\0';
  local_10[6] = '\0';
  local_10[7] = '\0';
  iVar49 = 8;
  do {
    iVar1 = recv(param_1,local_8,iVar49,0);
    if (iVar1 < 1) {
      if (iVar1 == -1) {
        return 0;
      }
      goto LAB_004cd427;
    }
    iVar49 = iVar49 - iVar1;
    local_8 = local_8 + iVar1;
  } while (0 < iVar49);
  iVar1 = 8;
LAB_004cd427:
  local_8 = (char *)0x0;
  iVar49 = FUN_004cc650(param_1,local_10,&local_8,param_2);
  if (iVar49 != -1) {
    iVar2 = FUN_004cc4c0(param_1,local_10,&local_8,param_2 + 0x18);
    if (iVar2 != -1) {
      iVar3 = FUN_004cc4c0(param_1,local_10,&local_8,param_2 + 0x24);
      if (iVar3 != -1) {
        iVar4 = FUN_004cc4c0(param_1,local_10,&local_8,param_2 + 0x30);
        if (iVar4 != -1) {
          iVar5 = FUN_004cc4c0(param_1,local_10,&local_8,param_2 + 0x3c);
          if (iVar5 != -1) {
            iVar6 = FUN_004cc030(param_1,local_10,&local_8,param_2 + 0x48);
            if (iVar6 != -1) {
              iVar7 = FUN_004cc030(param_1,local_10,&local_8,param_2 + 0x4c);
              if (iVar7 != -1) {
                iVar8 = FUN_004cbe50(param_1,local_10,&local_8,param_2 + 0x50);
                if (iVar8 != -1) {
                  iVar9 = FUN_004cc030(param_1,local_10,&local_8,param_2 + 0x54);
                  if (iVar9 != -1) {
                    iVar10 = FUN_004cbe50(param_1,local_10,&local_8,param_2 + 0x58);
                    if (iVar10 != -1) {
                      iVar11 = FUN_004cc030(param_1,local_10,&local_8,param_2 + 0x5c);
                      if (iVar11 != -1) {
                        iVar12 = FUN_004cc030(param_1,local_10,&local_8,param_2 + 0x60);
                        if (iVar12 != -1) {
                          iVar13 = FUN_004cc030(param_1,local_10,&local_8,param_2 + 100);
                          if (iVar13 != -1) {
                            iVar14 = FUN_004cc240(param_1,local_10,&local_8,param_2 + 0x68);
                            if (iVar14 != -1) {
                              iVar15 = FUN_004cbf40(param_1,local_10,&local_8,param_2 + 0x114);
                              if (iVar15 != -1) {
                                iVar16 = FUN_004cc030(param_1,local_10,&local_8,param_2 + 0x118);
                                if (iVar16 != -1) {
                                  iVar17 = FUN_004cc030(param_1,local_10,&local_8,param_2 + 0x11c);
                                  if (iVar17 != -1) {
                                    iVar18 = FUN_004cc030(param_1,local_10,&local_8,param_2 + 0x120)
                                    ;
                                    if (iVar18 != -1) {
                                      iVar19 = FUN_004cc030(param_1,local_10,&local_8,
                                                            param_2 + 0x124);
                                      if (iVar19 != -1) {
                                        iVar20 = FUN_004cc030(param_1,local_10,&local_8,
                                                              param_2 + 0x128);
                                        if (iVar20 != -1) {
                                          iVar21 = FUN_004cc030(param_1,local_10,&local_8,
                                                                param_2 + 300);
                                          if (iVar21 != -1) {
                                            iVar22 = FUN_004cbe50(param_1,local_10,&local_8,
                                                                  param_2 + 0x130);
                                            if (iVar22 != -1) {
                                              iVar23 = FUN_004cbe50(param_1,local_10,&local_8,
                                                                    param_2 + 0x131);
                                              if (iVar23 != -1) {
                                                iVar24 = FUN_004cc030(param_1,local_10,&local_8,
                                                                      param_2 + 0x134);
                                                if (iVar24 != -1) {
                                                  iVar25 = FUN_004cc4c0(param_1,local_10,&local_8,
                                                                        param_2 + 0x138);
                                                  if (iVar25 != -1) {
                                                    iVar26 = FUN_004cc4c0(param_1,local_10,&local_8,
                                                                          param_2 + 0x144);
                                                    if (iVar26 != -1) {
                                                      iVar27 = FUN_004cc4c0(param_1,local_10,
                                                                            &local_8,param_2 + 0x150
                                                                           );
                                                      if (iVar27 != -1) {
                                                        iVar28 = FUN_004cc030(param_1,local_10,
                                                                              &local_8,param_2 + 
                                                  0x15c);
                                                  if (iVar28 != -1) {
                                                    iVar29 = FUN_004cc030(param_1,local_10,&local_8,
                                                                          param_2 + 0x160);
                                                    if (iVar29 != -1) {
                                                      iVar30 = FUN_004cc030(param_1,local_10,
                                                                            &local_8,param_2 + 0x164
                                                                           );
                                                      if (iVar30 != -1) {
                                                        iVar31 = FUN_004cc140(param_1,local_10,
                                                                              &local_8,param_2 + 
                                                  0x168);
                                                  if (iVar31 != -1) {
                                                    iVar32 = FUN_004cbe50(param_1,local_10,&local_8,
                                                                          param_2 + 0x17c);
                                                    if (iVar32 != -1) {
                                                      iVar33 = FUN_004cbe50(param_1,local_10,
                                                                            &local_8,param_2 + 0x17d
                                                                           );
                                                      if (iVar33 != -1) {
                                                        iVar34 = FUN_004cc030(param_1,local_10,
                                                                              &local_8,param_2 + 
                                                  0x180);
                                                  if (iVar34 != -1) {
                                                    iVar35 = FUN_004cc030(param_1,local_10,&local_8,
                                                                          param_2 + 0x184);
                                                    if (iVar35 != -1) {
                                                      iVar36 = FUN_004cc750(param_1,local_10,
                                                                            &local_8,param_2 + 0x188
                                                                           );
                                                      if (iVar36 != -1) {
                                                        iVar37 = FUN_004cc750(param_1,local_10,
                                                                              &local_8,param_2 + 400
                                                                             );
                                                        if (iVar37 != -1) {
                                                          iVar38 = FUN_004cbe50(param_1,local_10,
                                                                                &local_8,param_2 + 
                                                  0x198);
                                                  if (iVar38 != -1) {
                                                    iVar39 = FUN_004cc030(param_1,local_10,&local_8,
                                                                          param_2 + 0x19c);
                                                    if (iVar39 != -1) {
                                                      iVar40 = FUN_004cc4c0(param_1,local_10,
                                                                            &local_8,param_2 + 0x1a0
                                                                           );
                                                      if (iVar40 != -1) {
                                                        iVar41 = FUN_004cc650(param_1,local_10,
                                                                              &local_8,param_2 + 
                                                  0x1b0);
                                                  if (iVar41 != -1) {
                                                    iVar42 = FUN_004cc4c0(param_1,local_10,&local_8,
                                                                          param_2 + 0x1cc);
                                                    if (iVar42 != -1) {
                                                      iVar43 = FUN_004cbe50(param_1,local_10,
                                                                            &local_8,param_2 + 0x1c8
                                                                           );
                                                      if (iVar43 != -1) {
                                                        iVar44 = FUN_004cc440(param_1,local_10,
                                                                              &local_8,param_2 + 
                                                  0x1d8);
                                                  if (iVar44 != -1) {
                                                    iVar45 = FUN_004cc340(param_1,local_10,&local_8,
                                                                          param_2 + 0x2f0);
                                                    if (iVar45 != -1) {
                                                      iVar46 = FUN_004cce20(param_1,local_10,
                                                                            &local_8,param_2 + 
                                                  0x1158);
                                                  if (iVar46 != -1) {
                                                    iVar47 = FUN_004ccf20(param_1,local_10,&local_8,
                                                                          param_2 + 0x1128);
                                                    if (iVar47 != -1) {
                                                      iVar48 = FUN_004cc030(param_1,local_10,
                                                                            &local_8,param_2 + 
                                                  0x1154);
                                                  if (iVar48 != -1) {
                                                    return iVar48 + iVar1 + iVar49 + iVar2 + iVar3 +
                                                                    iVar4 + iVar5 + iVar6 + iVar7 +
                                                                    iVar8 + iVar9 + iVar10 + iVar11
                                                                    + iVar12 + iVar13 + iVar14 +
                                                                    iVar15 + iVar16 + iVar17 +
                                                                    iVar18 + iVar19 + iVar20 +
                                                                    iVar21 + iVar22 + iVar23 +
                                                                    iVar24 + iVar25 + iVar26 +
                                                                    iVar27 + iVar28 + iVar29 +
                                                                    iVar30 + iVar31 + iVar32 +
                                                                    iVar33 + iVar34 + iVar35 +
                                                                    iVar36 + iVar37 + iVar38 +
                                                                    iVar39 + iVar40 + iVar41 +
                                                                    iVar42 + iVar43 + iVar44 +
                                                                    iVar45 + iVar46 + iVar47;
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
  return 0;
}


/* FUN_0051d320 @ 0051d320  kind=gamemisc  attributed-by=role:artifact  size=48 */

void FUN_0051d320(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0056bce0(param_3[1],1);
  uVar1 = FUN_0051c810(*param_3,&DAT_00716900,uVar1);
  FUN_00525a30(uVar1);
  return;
}


/* FUN_0051d3d0 @ 0051d3d0  kind=gamemisc  attributed-by=role:artifact  size=42 */

void FUN_0051d3d0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0056bce0(*param_3,1);
  if (iVar1 != 0) {
    uVar2 = FUN_005203c0(iVar1);
    FUN_0051d210(param_1,uVar2);
  }
  return;
}


/* FUN_0051d520 @ 0051d520  kind=gamemisc  attributed-by=role:artifact  size=88 */

void FUN_0051d520(int param_1,undefined4 param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  
  uVar1 = FUN_0051c810(*param_3);
  if (uVar1 < 3) {
    puVar2 = (&PTR_s_CURDIR_007120cc)[uVar1];
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  iVar3 = FUN_00575040(param_1 + 8,puVar2,0xffffffff,1,0);
  if (iVar3 == 0x12) {
    *(undefined4 *)(param_1 + 0x38) = 0x12;
    FUN_00575040(param_1 + 8,"string or blob too big",0xffffffff,1,0);
  }
  return;
}


/* FUN_0051d650 @ 0051d650  kind=gamemisc  attributed-by=role:artifact  size=123 */

void FUN_0051d650(int param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined2 *_Src;
  char *pcVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  float10 fVar12;
  undefined4 uStack_4c;
  int local_48;
  undefined8 uStack_44;
  char acStack_3c [52];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar7 = *param_3;
  local_48 = param_1;
  switch(*(undefined1 *)(iVar7 + 0x1e)) {
  case 1:
    FUN_00574570(param_1 + 8,iVar7);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 2:
    fVar12 = (float10)FUN_0051c7a0();
    uStack_44 = (double)fVar12;
    FUN_005240c0(0x32,acStack_3c,"%!.15g",uStack_44);
    FUN_0054a330(acStack_3c,&uStack_4c,0x14,1);
    if (uStack_44 != (double)CONCAT44(local_48,uStack_4c)) {
      FUN_005240c0(0x32,acStack_3c,"%!.20e",uStack_44);
    }
    if (*(int *)(param_1 + 8) == 0) {
      iVar7 = 1000000000;
    }
    else {
      iVar7 = *(int *)(*(int *)(param_1 + 8) + 0x50);
    }
    iVar8 = 0;
    if (-1 < iVar7) {
      do {
        if (acStack_3c[iVar8] == '\0') break;
        iVar8 = iVar8 + 1;
      } while (iVar8 <= iVar7);
    }
    if (iVar8 <= iVar7) {
      iVar7 = FUN_005748c0(param_1 + 8,iVar8 + 1);
      if (iVar7 == 0) {
        memcpy(*(void **)(param_1 + 0xc),acStack_3c,iVar8 + 1);
        *(int *)(param_1 + 0x20) = iVar8;
        *(undefined4 *)(param_1 + 0x24) = 0x1030202;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      goto LAB_0051d996;
    }
    break;
  case 3:
    pcVar5 = (char *)FUN_0056bce0(iVar7,1);
    iVar7 = local_48;
    if (pcVar5 == (char *)0x0) goto LAB_0051d996;
    cVar2 = *pcVar5;
    uStack_44 = 0.0;
    uStack_44._4_4_ = 0;
    uStack_44._0_4_ = 0;
    uVar9 = 0;
    uVar4 = (uint)uStack_44;
    iVar8 = uStack_44._4_4_;
    if (cVar2 != '\0') {
      uVar9 = 0;
      do {
        if (cVar2 == '\'') {
          bVar11 = 0xfffffffe < uVar4;
          uVar4 = uVar4 + 1;
          iVar8 = iVar8 + (uint)bVar11;
        }
        cVar2 = pcVar5[uVar9 + 1];
        uVar9 = uVar9 + 1;
      } while (cVar2 != '\0');
    }
    puVar6 = (undefined1 *)
             FUN_005336b0(local_48,uVar9 + uVar4 + 3,
                          ((int)uVar9 >> 0x1f) + iVar8 + (uint)CARRY4(uVar9,uVar4) +
                          (uint)(0xfffffffc < uVar9 + uVar4));
    if (puVar6 == (undefined1 *)0x0) goto LAB_0051d996;
    *puVar6 = 0x27;
    cVar2 = *pcVar5;
    iVar8 = 1;
    while (cVar2 != '\0') {
      puVar6[iVar8] = *pcVar5;
      iVar10 = iVar8 + 1;
      if (*pcVar5 == '\'') {
        puVar6[iVar10] = 0x27;
        iVar10 = iVar8 + 2;
      }
      pcVar5 = pcVar5 + 1;
      iVar8 = iVar10;
      cVar2 = *pcVar5;
    }
    puVar6[iVar8] = 0x27;
    iVar10 = iVar7 + 8;
    puVar6[iVar8 + 1] = 0;
    iVar8 = FUN_00575040(iVar10,puVar6,iVar8 + 1,1,FUN_00524410);
    if (iVar8 != 0x12) goto LAB_0051d996;
    *(undefined4 *)(iVar7 + 0x38) = 0x12;
    goto LAB_0051d98e;
  case 4:
    uVar3 = FUN_00528890();
    uStack_44 = (double)CONCAT44(uVar3,(uint)uStack_44);
    uVar4 = FUN_005288e0(*param_3);
    _Src = (undefined2 *)
           FUN_005336b0(param_1,(uVar4 + 2) * 2,
                        (((int)uVar4 >> 0x1f) + (uint)(0xfffffffd < uVar4)) * 2 | uVar4 + 2 >> 0x1f)
    ;
    if (_Src != (undefined2 *)0x0) {
      if (0 < (int)uVar4) {
        iVar7 = 0;
        puVar6 = (undefined1 *)((int)_Src + 3);
        do {
          iVar8 = iVar7 + 1;
          puVar6[-1] = (&DAT_007120bc)[*(byte *)(iVar7 + uStack_44._4_4_) >> 4];
          *puVar6 = (&DAT_007120bc)[(int)*(char *)(iVar7 + uStack_44._4_4_) & 0xf];
          iVar7 = iVar8;
          puVar6 = puVar6 + 2;
          param_1 = local_48;
        } while (iVar8 < (int)uVar4);
      }
      piVar1 = (int *)(param_1 + 8);
      _Src[uVar4 + 1] = 0x27;
      *_Src = 0x2758;
      uStack_44 = (double)CONCAT44(piVar1,(uint)uStack_44);
      if (*piVar1 == 0) {
        iVar7 = 1000000000;
      }
      else {
        iVar7 = *(int *)(*piVar1 + 0x50);
      }
      iVar8 = 0;
      if (-1 < iVar7) {
        do {
          if (*(char *)(iVar8 + (int)_Src) == '\0') break;
          iVar8 = iVar8 + 1;
        } while (iVar8 <= iVar7);
      }
      if (iVar7 < iVar8) {
        *(undefined4 *)(param_1 + 0x38) = 0x12;
        FUN_00575040(piVar1,"string or blob too big",0xffffffff,1);
      }
      else {
        iVar7 = FUN_005748c0(piVar1,iVar8 + 1);
        if (iVar7 == 0) {
          memcpy(*(void **)(param_1 + 0xc),_Src,iVar8 + 1);
          *(int *)(param_1 + 0x20) = iVar8;
          *(undefined4 *)(param_1 + 0x24) = 0x1030202;
          FUN_00524410();
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
      }
      FUN_00524410();
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    goto LAB_0051d996;
  default:
    iVar7 = FUN_00575040(param_1 + 8,&DAT_00716880,4,1,0);
    if (iVar7 != 0x12) goto LAB_0051d996;
  }
  iVar10 = param_1 + 8;
  *(undefined4 *)(param_1 + 0x38) = 0x12;
LAB_0051d98e:
  FUN_00575040(iVar10,"string or blob too big",0xffffffff,1);
LAB_0051d996:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0051dc70 @ 0051dc70  kind=gamemisc  attributed-by=role:artifact  size=354 */

void FUN_0051dc70(int param_1,undefined4 param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  
  iVar4 = *param_3;
  if ((*(byte *)(iVar4 + 0x1c) & 0x12) == 0) {
    pbVar7 = (byte *)FUN_0056bce0(iVar4,1);
  }
  else {
    FUN_00574600(iVar4);
    *(ushort *)(iVar4 + 0x1c) = *(ushort *)(iVar4 + 0x1c) & 0xfffd | 0x10;
    if (*(int *)(iVar4 + 0x18) == 0) {
      pbVar7 = (byte *)0x0;
    }
    else {
      pbVar7 = *(byte **)(iVar4 + 4);
    }
  }
  iVar4 = *param_3;
  if (((*(byte *)(iVar4 + 0x1c) & 0x10) == 0) && (iVar2 = FUN_0056bce0(iVar4,1), iVar2 == 0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(uint *)(iVar4 + 0x18);
    if ((*(ushort *)(iVar4 + 0x1c) & 0x4000) != 0) {
      uVar8 = uVar8 + *(int *)(iVar4 + 0x10);
    }
  }
  uVar6 = uVar8 * 2 + 1;
  iVar4 = (((int)uVar8 >> 0x1f) << 1 | uVar8 >> 0x1f) + (uint)(0xfffffffe < uVar8 * 2);
  piVar3 = (int *)(param_1 + 8);
  iVar2 = (int)*(uint *)(*piVar3 + 0x50) >> 0x1f;
  if ((iVar4 < iVar2) || ((iVar4 <= iVar2 && (uVar6 <= *(uint *)(*piVar3 + 0x50))))) {
    param_3 = (int *)FUN_0055da00(uVar6);
    if (param_3 == (int *)0x0) {
      FUN_0051d110(param_1);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = 0x12;
    FUN_00575040(piVar3,"string or blob too big",0xffffffff,1,0);
    param_3 = (int *)0x0;
  }
  if (param_3 != (int *)0x0) {
    puVar5 = (undefined1 *)param_3;
    uVar6 = uVar8;
    if (0 < (int)uVar8) {
      do {
        bVar1 = *pbVar7;
        *puVar5 = (&DAT_007120bc)[bVar1 >> 4];
        puVar5[1] = (&DAT_007120bc)[bVar1 & 0xf];
        puVar5 = puVar5 + 2;
        pbVar7 = pbVar7 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    *puVar5 = 0;
    iVar4 = FUN_00575040(piVar3,param_3,uVar8 * 2,1,FUN_00524410);
    if (iVar4 == 0x12) {
      *(undefined4 *)(param_1 + 0x38) = 0x12;
      FUN_00575040(piVar3,"string or blob too big",0xffffffff,1,0);
    }
  }
  return;
}


/* FUN_0051de50 @ 0051de50  kind=gamemisc  attributed-by=role:artifact  size=182 */

/* WARNING: Removing unreachable block (ram,0x0051decf) */

void FUN_0051de50(int param_1,undefined4 param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong local_c;
  
  iVar2 = *(int *)(param_1 + 8);
  iVar3 = *param_3;
  uVar1 = *(ushort *)(iVar3 + 0x1c);
  if ((uVar1 & 4) == 0) {
    if ((uVar1 & 8) == 0) {
      local_c = 0;
      lVar4 = local_c;
      if ((uVar1 & 0x12) != 0) {
        FUN_0054a9a0(*(undefined4 *)(iVar3 + 4),&local_c,*(undefined4 *)(iVar3 + 0x18),
                     *(undefined1 *)(iVar3 + 0x1f));
        lVar4 = local_c;
      }
    }
    else {
      lVar4 = FUN_00534710(*(undefined8 *)(iVar3 + 8));
    }
  }
  else {
    lVar4 = *(longlong *)(iVar3 + 0x10);
  }
  if (*(int *)(iVar2 + 0x50) < lVar4) {
    *(undefined4 *)(param_1 + 0x38) = 0x12;
    FUN_00575040(param_1 + 8,"string or blob too big",0xffffffff,1,0);
    return;
  }
  FUN_0051d580(param_1,(int)lVar4);
  return;
}


/* FUN_0051dff0 @ 0051dff0  kind=gamemisc  attributed-by=role:artifact  size=637 */

void FUN_0051dff0(int param_1,undefined4 param_2,int *param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  void *_Src;
  size_t _Size;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  uint local_18;
  int local_14;
  int local_8;
  
  iVar3 = FUN_0056bce0(*param_3,1);
  if (iVar3 != 0) {
    iVar10 = *param_3;
    if (((*(byte *)(iVar10 + 0x1c) & 0x10) == 0) && (iVar4 = FUN_0056bce0(iVar10,1), iVar4 == 0)) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar10 + 0x18);
      if ((*(ushort *)(iVar10 + 0x1c) & 0x4000) != 0) {
        iVar4 = iVar4 + *(int *)(iVar10 + 0x10);
      }
    }
    piVar5 = (int *)FUN_0056bce0(param_3[1],1);
    if (piVar5 != (int *)0x0) {
      if ((char)*piVar5 == '\0') {
        FUN_00574570(param_1 + 8,*param_3);
        return;
      }
      uVar6 = FUN_005288e0(param_3[1]);
      _Src = (void *)FUN_0056bce0(param_3[2],1);
      if (_Src != (void *)0x0) {
        _Size = FUN_005288e0(param_3[2]);
        local_18 = iVar4 + 1;
        local_14 = (int)local_18 >> 0x1f;
        local_8 = FUN_005336b0(param_1,local_18,local_14);
        if (local_8 != 0) {
          iVar11 = 0;
          iVar10 = 0;
          if (-1 < (int)(iVar4 - uVar6)) {
            iVar12 = 0;
            do {
              piVar7 = (int *)(iVar3 + iVar10);
              iVar9 = *piVar7;
              piVar2 = piVar5;
              uVar8 = uVar6;
              if ((char)iVar9 == (char)*piVar5) {
                while (uVar1 = uVar8 - 4, 3 < uVar8) {
                  if (*piVar7 != *piVar2) goto LAB_0051e116;
                  piVar7 = piVar7 + 1;
                  piVar2 = piVar2 + 1;
                  uVar8 = uVar1;
                }
                if (uVar1 != 0xfffffffc) {
LAB_0051e116:
                  if (((char)*piVar7 != (char)*piVar2) ||
                     ((uVar1 != 0xfffffffd &&
                      ((*(char *)((int)piVar7 + 1) != *(char *)((int)piVar2 + 1) ||
                       ((uVar1 != 0xfffffffe &&
                        ((*(char *)((int)piVar7 + 2) != *(char *)((int)piVar2 + 2) ||
                         ((uVar1 != 0xffffffff &&
                          (*(char *)((int)piVar7 + 3) != *(char *)((int)piVar2 + 3)))))))))))))
                  goto LAB_0051e1be;
                }
                uVar8 = _Size - uVar6;
                bVar13 = CARRY4(local_18,uVar8);
                local_18 = local_18 + uVar8;
                local_14 = local_14 + ((int)uVar8 >> 0x1f) + (uint)bVar13;
                uVar8 = *(uint *)(*(int *)(param_1 + 8) + 0x50);
                iVar9 = (int)uVar8 >> 0x1f;
                iVar11 = local_14 - (uint)(local_18 == 0);
                if ((iVar9 < iVar11) || ((iVar9 <= iVar11 && (uVar8 < local_18 - 1)))) {
                  FUN_0051d0e0(param_1);
                  FUN_00524410(local_8);
                  return;
                }
                iVar11 = FUN_00579f80();
                if ((iVar11 != 0) || (iVar9 = FUN_00563800(local_8,local_18), iVar9 == 0)) {
                  FUN_0051d110(param_1);
                  FUN_00524410(local_8);
                  return;
                }
                memcpy((void *)(iVar9 + iVar12),_Src,_Size);
                iVar11 = iVar12 + _Size;
                iVar10 = iVar10 + (uVar6 - 1);
                local_8 = iVar9;
              }
              else {
LAB_0051e1be:
                iVar11 = iVar12 + 1;
                *(char *)(iVar12 + local_8) = (char)iVar9;
              }
              iVar10 = iVar10 + 1;
              iVar12 = iVar11;
            } while (iVar10 <= (int)(iVar4 - uVar6));
          }
          memcpy((void *)(iVar11 + local_8),(void *)(iVar3 + iVar10),iVar4 - iVar10);
          iVar11 = iVar11 + (iVar4 - iVar10);
          *(undefined1 *)(iVar11 + local_8) = 0;
          iVar3 = FUN_00575040(param_1 + 8,local_8,iVar11,1,FUN_00524410);
          if (iVar3 == 0x12) {
            *(undefined4 *)(param_1 + 0x38) = 0x12;
            FUN_00575040(param_1 + 8,"string or blob too big",0xffffffff,1,0);
          }
        }
      }
    }
  }
  return;
}


/* FUN_0051eb70 @ 0051eb70  kind=gamemisc  attributed-by=role:artifact  size=111 */

void FUN_0051eb70(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  longlong local_38 [6];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_0053c140(param_1,param_2,param_3,local_38);
  if (iVar1 == 0) {
    FUN_00532a40();
    FUN_00574df0(param_1 + 8,(double)local_38[0] / 86400000.0);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0051ec50 @ 0051ec50  kind=gamemisc  attributed-by=role:artifact  size=1390 */

/* WARNING: Removing unreachable block (ram,0x0051f045) */
/* WARNING: Removing unreachable block (ram,0x0051f050) */
/* WARNING: Removing unreachable block (ram,0x0051f06b) */
/* WARNING: Removing unreachable block (ram,0x0051f072) */
/* WARNING: Removing unreachable block (ram,0x0051f08a) */
/* WARNING: Removing unreachable block (ram,0x0051f09b) */
/* WARNING: Removing unreachable block (ram,0x0051f09f) */
/* WARNING: Removing unreachable block (ram,0x0051f0b9) */
/* WARNING: Removing unreachable block (ram,0x0051f0c4) */
/* WARNING: Removing unreachable block (ram,0x0051f08e) */
/* WARNING: Removing unreachable block (ram,0x0051f079) */
/* WARNING: Removing unreachable block (ram,0x0051f057) */
/* WARNING: Removing unreachable block (ram,0x0051f0dc) */

void FUN_0051ec50(int *param_1,int param_2,int *param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  int *piVar6;
  byte *pbVar7;
  byte *pbVar8;
  int *piVar9;
  ushort uVar10;
  uint uVar11;
  int iVar12;
  byte *local_18;
  undefined **local_14;
  int *local_10;
  int local_c;
  undefined **local_8;
  
  if (*(char *)(*param_3 + 0x1e) == '\x05') {
    return;
  }
  local_10 = (int *)FUN_0056bce0(*param_3,1);
  if (local_10 == (int *)0x0) {
    return;
  }
  iVar12 = *param_3;
  if ((*(byte *)(iVar12 + 0x1c) & 0x10) == 0) {
    iVar4 = FUN_0056bce0(iVar12,1);
    sVar5 = 0;
    if (iVar4 != 0) goto LAB_0051ec94;
  }
  else {
LAB_0051ec94:
    sVar5 = *(size_t *)(iVar12 + 0x18);
    if ((*(ushort *)(iVar12 + 0x1c) & 0x4000) != 0) {
      sVar5 = sVar5 + *(int *)(iVar12 + 0x10);
    }
  }
  if (param_2 == 1) {
    local_c = 1;
    local_8 = (undefined **)&DAT_0071237f;
    local_14 = &PTR_DAT_007124d4;
    local_18 = (byte *)0x0;
  }
  else {
    local_18 = (byte *)FUN_0056bce0(param_3[1],1);
    if (local_18 == (byte *)0x0) {
      return;
    }
    uVar11 = 0;
    pbVar8 = local_18;
    param_3 = (int *)sVar5;
    if (*local_18 == 0) goto LAB_0051ef27;
    do {
      pbVar7 = pbVar8 + 1;
      if (0xbf < *pbVar8) {
        bVar1 = *pbVar7;
        while ((bVar1 & 0xc0) == 0x80) {
          pbVar8 = pbVar7 + 1;
          pbVar7 = pbVar7 + 1;
          bVar1 = *pbVar8;
        }
      }
      uVar11 = uVar11 + 1;
      pbVar8 = pbVar7;
    } while (*pbVar7 != 0);
    if ((int)uVar11 < 1) goto LAB_0051ef27;
    local_14 = (undefined **)
               FUN_005336b0(param_1,uVar11 * 5,
                            ((int)uVar11 >> 0x1f) + (((int)uVar11 >> 0x1f) << 2 | uVar11 >> 0x1e) +
                            (uint)CARRY4(uVar11,uVar11 * 4));
    if (local_14 == (undefined **)0x0) {
      return;
    }
    iVar12 = 0;
    local_8 = local_14 + uVar11;
    pbVar8 = local_18;
    if (*local_18 == 0) goto LAB_0051ef27;
    do {
      local_14[iVar12] = pbVar8;
      pbVar7 = pbVar8 + 1;
      if (0xbf < *pbVar8) {
        bVar1 = *pbVar7;
        while ((bVar1 & 0xc0) == 0x80) {
          pbVar8 = pbVar7 + 1;
          pbVar7 = pbVar7 + 1;
          bVar1 = *pbVar8;
        }
      }
      local_c = iVar12 + 1;
      *(char *)(iVar12 + (int)local_8) = (char)pbVar7 - *(char *)(local_14 + iVar12);
      pbVar8 = pbVar7;
      iVar12 = local_c;
    } while (*pbVar7 != 0);
    if (local_c < 1) goto LAB_0051ef27;
  }
  param_3 = (int *)sVar5;
  if (((*(uint *)(*param_1 + 4) & 1) != 0) && (0 < (int)sVar5)) {
LAB_0051edd0:
    iVar12 = 0;
    param_3 = (int *)sVar5;
    if (0 < local_c) {
      do {
        uVar11 = (uint)*(byte *)(iVar12 + (int)local_8);
        if ((int)uVar11 <= (int)sVar5) {
          piVar9 = (int *)local_14[iVar12];
          piVar6 = local_10;
          uVar3 = uVar11;
          while (uVar2 = uVar3 - 4, 3 < uVar3) {
            if (*piVar6 != *piVar9) goto LAB_0051ee0b;
            piVar6 = piVar6 + 1;
            piVar9 = piVar9 + 1;
            uVar3 = uVar2;
          }
          if (uVar2 == 0xfffffffc) goto LAB_0051ee51;
LAB_0051ee0b:
          if (((char)*piVar6 == (char)*piVar9) &&
             ((uVar2 == 0xfffffffd ||
              ((*(char *)((int)piVar6 + 1) == *(char *)((int)piVar9 + 1) &&
               ((uVar2 == 0xfffffffe ||
                ((*(char *)((int)piVar6 + 2) == *(char *)((int)piVar9 + 2) &&
                 ((uVar2 == 0xffffffff || (*(char *)((int)piVar6 + 3) == *(char *)((int)piVar9 + 3))
                  ))))))))))) goto LAB_0051ee51;
        }
        iVar12 = iVar12 + 1;
        if (local_c <= iVar12) break;
      } while( true );
    }
  }
LAB_0051ee72:
  if (((*(uint *)(*param_1 + 4) & 2) != 0) && (0 < (int)param_3)) {
LAB_0051ee83:
    iVar12 = 0;
    if (0 < local_c) {
      do {
        uVar11 = (uint)*(byte *)(iVar12 + (int)local_8);
        if ((int)uVar11 <= (int)param_3) {
          piVar6 = (int *)(((int)param_3 - uVar11) + (int)local_10);
          piVar9 = (int *)local_14[iVar12];
          uVar3 = uVar11;
          while (uVar2 = uVar3 - 4, 3 < uVar3) {
            if (*piVar6 != *piVar9) goto LAB_0051eec6;
            piVar6 = piVar6 + 1;
            piVar9 = piVar9 + 1;
            uVar3 = uVar2;
          }
          if (uVar2 == 0xfffffffc) goto LAB_0051ef03;
LAB_0051eec6:
          if (((char)*piVar6 == (char)*piVar9) &&
             ((uVar2 == 0xfffffffd ||
              ((*(char *)((int)piVar6 + 1) == *(char *)((int)piVar9 + 1) &&
               ((uVar2 == 0xfffffffe ||
                ((*(char *)((int)piVar6 + 2) == *(char *)((int)piVar9 + 2) &&
                 ((uVar2 == 0xffffffff || (*(char *)((int)piVar6 + 3) == *(char *)((int)piVar9 + 3))
                  ))))))))))) goto LAB_0051ef03;
        }
        iVar12 = iVar12 + 1;
        if (local_c <= iVar12) break;
      } while( true );
    }
  }
LAB_0051ef16:
  if (local_18 != (byte *)0x0) {
    FUN_00524410(local_14);
  }
LAB_0051ef27:
  piVar9 = param_1 + 2;
  if (local_10 == (int *)0x0) {
    if ((*(byte *)(param_1 + 9) & 0x40) != 0) {
      piVar9 = (int *)param_1[6];
      piVar9[1] = *(int *)(*piVar9 + 0xa4);
      *(int **)(*piVar9 + 0xa4) = piVar9;
    }
    if ((*(byte *)(param_1 + 9) & 0x20) != 0) {
      FUN_005644e0(param_1[6]);
    }
    *(ushort *)(param_1 + 9) = *(ushort *)(param_1 + 9) & 0xbe01 | 1;
    *(undefined1 *)((int)param_1 + 0x26) = 5;
    return;
  }
  if (*piVar9 == 0) {
    iVar12 = 1000000000;
  }
  else {
    iVar12 = *(int *)(*piVar9 + 0x50);
  }
  uVar10 = 2;
  if ((int)param_3 < 0) {
    sVar5 = 0;
    param_3 = (int *)0x0;
    if (-1 < iVar12) {
      do {
        param_3 = (int *)sVar5;
        if (*(char *)(sVar5 + (int)local_10) == '\0') break;
        sVar5 = sVar5 + 1;
        param_3 = (int *)sVar5;
      } while ((int)sVar5 <= iVar12);
    }
    uVar10 = 0x202;
  }
  sVar5 = (size_t)param_3;
  if ((uVar10 & 0x200) != 0) {
    sVar5 = (int)param_3 + 1;
  }
  if (iVar12 < (int)param_3) {
    param_1[0xe] = 0x12;
    if (*piVar9 == 0) {
      iVar12 = 1000000000;
    }
    else {
      iVar12 = *(int *)(*piVar9 + 0x50);
    }
    iVar4 = 0;
    if (-1 < iVar12) {
      do {
        if ("string or blob too big"[iVar4] == '\0') break;
        iVar4 = iVar4 + 1;
      } while (iVar4 <= iVar12);
    }
    uVar10 = *(ushort *)(param_1 + 9);
    if ((uVar10 & 0x2460) != 0) {
      if ((uVar10 & 0x2000) == 0) {
        if (((uVar10 & 0x400) == 0) || ((code *)param_1[10] == (code *)0x0)) {
          if ((uVar10 & 0x20) == 0) {
            if ((uVar10 & 0x40) != 0) {
              piVar6 = (int *)param_1[6];
              piVar6[1] = *(int *)(*piVar6 + 0xa4);
              *(int **)(*piVar6 + 0xa4) = piVar6;
              if ((*(byte *)(param_1 + 9) & 0x20) != 0) {
                FUN_005644e0(param_1[6]);
              }
              *(ushort *)(param_1 + 9) = *(ushort *)(param_1 + 9) & 0xbe01 | 1;
              *(undefined1 *)((int)param_1 + 0x26) = 5;
            }
          }
          else {
            FUN_005644e0(param_1[6]);
          }
        }
        else {
          (*(code *)param_1[10])(param_1[3]);
          param_1[10] = 0;
        }
      }
      else {
        FUN_00574670(piVar9,param_1[6]);
        FUN_00574d40(piVar9);
      }
    }
    FUN_005521a0(*piVar9,param_1[0xb]);
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[3] = (int)"string or blob too big";
    param_1[8] = iVar4;
    *(undefined2 *)((int)param_1 + 0x26) = 0x103;
    *(undefined2 *)(param_1 + 9) = 0xa02;
  }
  else {
    iVar12 = FUN_005748c0(piVar9,sVar5,0);
    if (iVar12 == 0) {
      memcpy((void *)param_1[3],local_10,sVar5);
      param_1[8] = (int)param_3;
      *(undefined2 *)((int)param_1 + 0x26) = 0x103;
      *(ushort *)(param_1 + 9) = uVar10;
      return;
    }
  }
  return;
LAB_0051ee51:
  sVar5 = sVar5 - uVar11;
  local_10 = (int *)((int)local_10 + uVar11);
  param_3 = (int *)sVar5;
  if ((int)sVar5 < 1) goto LAB_0051ee72;
  goto LAB_0051edd0;
LAB_0051ef03:
  param_3 = (int *)((int)param_3 - uVar11);
  if ((int)param_3 < 1) goto LAB_0051ef16;
  goto LAB_0051ee83;
}


/* FUN_0051f4c0 @ 0051f4c0  kind=gamemisc  attributed-by=role:artifact  size=478 */

void FUN_0051f4c0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  int iVar10;
  char *pcVar11;
  char local_88 [128];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  pbVar4 = (byte *)FUN_0056bce0(*param_3,1);
  iVar5 = *(int *)(param_1 + 8);
  puVar8 = (undefined4 *)0x0;
  pbVar6 = &DAT_006fc918;
  if (pbVar4 != (byte *)0x0) {
    pbVar6 = pbVar4;
  }
  iVar10 = *(int *)(iVar5 + 0x14);
  iVar7 = 0;
  if (0 < iVar10) {
    puVar3 = *(undefined4 **)(iVar5 + 0x10);
    do {
      puVar8 = puVar3;
      if (puVar8[1] != 0) {
        pbVar4 = (byte *)*puVar8;
        bVar2 = *pbVar4;
        pbVar9 = pbVar6;
        while ((bVar2 != 0 && ((&DAT_007120d8)[bVar2] == (&DAT_007120d8)[*pbVar9]))) {
          pbVar1 = pbVar4 + 1;
          pbVar4 = pbVar4 + 1;
          pbVar9 = pbVar9 + 1;
          bVar2 = *pbVar1;
        }
        if ((&DAT_007120d8)[*pbVar4] == (&DAT_007120d8)[*pbVar9]) break;
      }
      iVar7 = iVar7 + 1;
      puVar3 = puVar8 + 4;
    } while (iVar7 < iVar10);
  }
  if (iVar7 < iVar10) {
    if (iVar7 < 2) {
      pcVar11 = "cannot detach database %s";
    }
    else {
      if (*(char *)(iVar5 + 0x36) == '\0') {
        FUN_005240c0(0x80,local_88,"cannot DETACH database within transaction");
        goto LAB_0051f62c;
      }
      iVar10 = puVar8[1];
      if ((*(char *)(iVar10 + 8) == '\0') && (*(int *)(iVar10 + 0x10) == 0)) {
        FUN_0054c710(iVar10);
        puVar8[1] = 0;
        puVar8[3] = 0;
        FUN_00564000(iVar5);
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      pcVar11 = "database %s is locked";
    }
  }
  else {
    pcVar11 = "no such database: %s";
  }
  FUN_005240c0(0x80,local_88,pcVar11,pbVar6);
LAB_0051f62c:
  *(undefined4 *)(param_1 + 0x38) = 1;
  iVar5 = *(int *)(param_1 + 8);
  if (iVar5 == 0) {
    iVar5 = 1000000000;
  }
  else {
    iVar5 = *(int *)(iVar5 + 0x50);
  }
  iVar10 = 0;
  if (-1 < iVar5) {
    do {
      if (local_88[iVar10] == '\0') break;
      iVar10 = iVar10 + 1;
    } while (iVar10 <= iVar5);
  }
  if ((iVar10 <= iVar5) && (iVar5 = FUN_005748c0((int *)(param_1 + 8),iVar10 + 1U,0), iVar5 == 0)) {
    memcpy(*(void **)(param_1 + 0xc),local_88,iVar10 + 1U);
    *(int *)(param_1 + 0x20) = iVar10;
    *(undefined4 *)(param_1 + 0x24) = 0x1030202;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0051f970 @ 0051f970  kind=gamemisc  attributed-by=role:artifact  size=510 */

void FUN_0051f970(int param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  char *pcVar15;
  uint local_9c;
  int iStack_98;
  undefined1 local_6c [100];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  pcVar4 = (char *)FUN_0056bce0(*param_3,1);
  if ((pcVar4 == (char *)0x0) ||
     (iVar5 = FUN_0053c140(param_1,param_2 + -1,param_3 + 1,&local_9c), iVar5 != 0))
  goto LAB_0051fe24;
  iVar5 = 0;
  uVar11 = 0;
  uVar10 = 1;
  if (*pcVar4 == '\0') {
LAB_0051fa9a:
    puVar6 = local_6c;
LAB_0051faa3:
    FUN_00532a40();
    FUN_00532d10(&local_9c);
    FUN_00532980(&local_9c);
    iVar5 = 0;
    cVar3 = *pcVar4;
    uVar10 = local_9c;
    iVar7 = iStack_98;
    while (cVar3 != '\0') {
      local_9c = uVar10;
      iStack_98 = iVar7;
      if (*pcVar4 != '%') {
        puVar6[iVar5] = *pcVar4;
        goto LAB_0051fdca;
      }
      cVar3 = pcVar4[1];
      pcVar4 = pcVar4 + 1;
      switch(cVar3) {
      case 'H':
        break;
      default:
        puVar6[iVar5] = 0x25;
        goto LAB_0051fdca;
      case 'J':
        pcVar15 = "%.16g";
        uVar14 = 0x14;
        goto LAB_0051fb5f;
      case 'M':
        break;
      case 'S':
        break;
      case 'W':
      case 'j':
        FUN_00532a40();
        iVar2 = iStack_98;
        uVar11 = local_9c;
        __alldiv((local_9c - uVar10) + 43200000,
                 ((iStack_98 - iVar7) - (uint)(local_9c < uVar10)) +
                 (uint)(0xfd6cd1ff < local_9c - uVar10),86400000,0);
        if (cVar3 == 'W') {
          uVar13 = __alldiv(uVar11 + 43200000,iVar2 + (uint)(0xfd6cd1ff < uVar11),86400000,0);
          __allrem(uVar13,7,0);
          break;
        }
        FUN_005240c0(4,puVar6 + iVar5);
        iVar5 = iVar5 + 3;
        goto LAB_0051fdcb;
      case 'Y':
        FUN_005240c0(5,puVar6 + iVar5);
        iVar7 = FUN_00568070(puVar6 + iVar5);
        iVar5 = iVar5 + iVar7;
        goto LAB_0051fdcb;
      case 'd':
        break;
      case 'f':
        pcVar15 = "%06.3f";
        uVar14 = 7;
        goto LAB_0051fb5f;
      case 'm':
        break;
      case 's':
        __alldiv(uVar10,iVar7,1000,0);
        pcVar15 = "%lld";
        uVar14 = 0x1e;
LAB_0051fb5f:
        FUN_005240c0(uVar14,puVar6 + iVar5,pcVar15);
        iVar7 = FUN_00568070(puVar6 + iVar5);
        iVar5 = iVar5 + iVar7;
        goto LAB_0051fdcb;
      case 'w':
        uVar13 = __alldiv(uVar10 + 0x7b98a00,iVar7 + (uint)(0xf84675ff < uVar10),86400000,0);
        cVar3 = __allrem(uVar13,7,0);
        puVar6[iVar5] = cVar3 + '0';
LAB_0051fdca:
        iVar5 = iVar5 + 1;
        goto LAB_0051fdcb;
      }
      FUN_005240c0(3,puVar6 + iVar5);
      iVar5 = iVar5 + 2;
LAB_0051fdcb:
      pcVar4 = pcVar4 + 1;
      uVar10 = local_9c;
      iVar7 = iStack_98;
      cVar3 = *pcVar4;
    }
    pcVar8 = FUN_0055dc20;
    if (puVar6 == local_6c) {
      pcVar8 = (code *)0xffffffff;
    }
    puVar6[iVar5] = 0;
    iVar5 = FUN_00575040(param_1 + 8,puVar6,0xffffffff,CONCAT44(pcVar8,1));
    if (iVar5 != 0x12) goto LAB_0051fe24;
  }
  else {
    do {
      if (pcVar4[iVar5] == '%') {
        switch(pcVar4[iVar5 + 1]) {
        case '%':
        case 'w':
          goto LAB_0051fa2a;
        default:
          goto LAB_0051fe24;
        case 'H':
        case 'M':
        case 'S':
        case 'W':
        case 'd':
        case 'm':
          bVar12 = 0xfffffffe < uVar10;
          uVar10 = uVar10 + 1;
          break;
        case 'J':
        case 's':
          bVar12 = 0xffffffcd < uVar10;
          uVar10 = uVar10 + 0x32;
          break;
        case 'Y':
        case 'f':
          bVar12 = 0xfffffff7 < uVar10;
          uVar10 = uVar10 + 8;
          break;
        case 'j':
          bVar12 = 0xfffffffc < uVar10;
          uVar10 = uVar10 + 3;
        }
        uVar11 = uVar11 + bVar12;
LAB_0051fa2a:
        iVar5 = iVar5 + 1;
      }
      iVar5 = iVar5 + 1;
      bVar12 = 0xfffffffe < uVar10;
      uVar10 = uVar10 + 1;
      uVar11 = uVar11 + bVar12;
    } while (pcVar4[iVar5] != '\0');
    if ((uVar11 == 0) && (uVar10 < 100)) goto LAB_0051fa9a;
    uVar1 = *(uint *)(*(int *)(param_1 + 8) + 0x50);
    uVar9 = (int)uVar1 >> 0x1f;
    if ((uVar11 < uVar9) || ((uVar11 <= uVar9 && (uVar10 <= uVar1)))) {
      puVar6 = (undefined1 *)FUN_00552230(*(int *)(param_1 + 8),uVar10);
      if (puVar6 == (undefined1 *)0x0) {
        FUN_0051d110();
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      goto LAB_0051faa3;
    }
  }
  *(undefined4 *)(param_1 + 0x38) = 0x12;
  FUN_00575040(param_1 + 8,"string or blob too big",0xffffffff,1,0);
LAB_0051fe24:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005204f0 @ 005204f0  kind=gamemisc  attributed-by=role:artifact  size=300 */

void FUN_005204f0(void *param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  void *_Src;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar4 = FUN_0056bce0(*param_3,1);
  iVar3 = (int)param_1;
  uVar2 = *(undefined4 *)((int)param_1 + 8);
  piVar1 = (int *)((int)param_1 + 8);
  param_1 = (void *)0x0;
  if (param_2 == 2) {
    uVar5 = FUN_0056bce0(param_3[1],1);
  }
  else {
    uVar5 = 0;
  }
  if ((iVar4 != 0) && (iVar4 = FUN_0057a1b0(uVar2,iVar4,uVar5,&param_1), _Src = param_1, iVar4 != 0)
     ) {
    *(undefined4 *)(iVar3 + 0x38) = 1;
    if (param_1 == (void *)0x0) {
      if ((*(byte *)(iVar3 + 0x24) & 0x40) != 0) {
        piVar1 = *(int **)(iVar3 + 0x18);
        piVar1[1] = *(int *)(*piVar1 + 0xa4);
        *(int **)(*piVar1 + 0xa4) = piVar1;
      }
      if ((*(byte *)(iVar3 + 0x24) & 0x20) != 0) {
        FUN_005644e0(*(undefined4 *)(iVar3 + 0x18));
      }
      *(ushort *)(iVar3 + 0x24) = *(ushort *)(iVar3 + 0x24) & 0xbe01 | 1;
      *(undefined1 *)(iVar3 + 0x26) = 5;
      FUN_00524410(0);
      return;
    }
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      iVar4 = 1000000000;
    }
    else {
      iVar4 = *(int *)(iVar4 + 0x50);
    }
    iVar6 = 0;
    if (-1 < iVar4) {
      do {
        if (*(char *)(iVar6 + (int)param_1) == '\0') break;
        iVar6 = iVar6 + 1;
      } while (iVar6 <= iVar4);
    }
    if ((iVar6 <= iVar4) && (iVar4 = FUN_005748c0(piVar1,iVar6 + 1,0), iVar4 == 0)) {
      memcpy(*(void **)(iVar3 + 0xc),_Src,iVar6 + 1);
      *(int *)(iVar3 + 0x20) = iVar6;
      *(undefined4 *)(iVar3 + 0x24) = 0x1030202;
    }
    FUN_00524410(_Src);
  }
  return;
}


/* FUN_00523900 @ 00523900  kind=gamemisc  attributed-by=role:artifact  size=203 */

void FUN_00523900(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  char *pcVar8;
  
  puVar1 = param_3;
  pcVar2 = (char *)FUN_0056bce0(*param_3,1);
  uVar3 = FUN_0056bce0(puVar1[1],1);
  uVar6 = *(undefined4 *)(param_1 + 8);
  iVar5 = 0;
  pcVar8 = pcVar2;
  if (pcVar2 != (char *)0x0) {
    do {
      pcVar7 = pcVar8;
      iVar4 = iVar5;
      iVar5 = iVar4;
      pcVar8 = pcVar7;
      if (*pcVar7 == '\0') {
        return;
      }
      do {
        pcVar8 = pcVar8 + iVar5;
        iVar5 = FUN_0055a220(pcVar8,&param_3);
      } while (param_3 == (undefined4 *)0x95);
    } while ((param_3 != (undefined4 *)0x16) && (param_3 != (undefined4 *)0x79));
    uVar6 = FUN_0055d980(uVar6,"%.*s\"%w\"%s",(int)pcVar7 - (int)pcVar2,pcVar2,uVar3,pcVar7 + iVar4)
    ;
    iVar5 = FUN_00575040(param_1 + 8,uVar6,0xffffffff,1,FUN_0055dc20);
    if (iVar5 == 0x12) {
      *(undefined4 *)(param_1 + 0x38) = 0x12;
      FUN_00575040(param_1 + 8,"string or blob too big",0xffffffff,1,0);
    }
  }
  return;
}


/* FUN_00523dd0 @ 00523dd0  kind=gamemisc  attributed-by=role:artifact  size=744 */

void FUN_00523dd0(int *param_1,int param_2,int *param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  undefined4 uVar15;
  bool bVar16;
  double dVar17;
  double dVar18;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  uint local_20;
  undefined8 local_1c;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_20 = -(uint)(*(int *)(*param_1 + 4) != 0);
  local_14 = param_1[0xd];
  local_10 = 0;
  if (*(char *)(*param_3 + 0x1e) != '\x05') {
    local_8 = 1;
    if (1 < param_2) {
      local_c = 0;
      do {
        iVar10 = local_8;
        iVar4 = local_14;
        iVar9 = param_3[local_8];
        if (*(char *)(iVar9 + 0x1e) == '\x05') {
          return;
        }
        iVar3 = *(int *)(local_c + (int)param_3);
        uVar1 = *(ushort *)(iVar9 + 0x1c);
        uVar2 = *(ushort *)(iVar3 + 0x1c);
        uVar7 = uVar1 | uVar2;
        if ((uVar7 & 1) == 0) {
          if ((uVar7 & 0xc) == 0) {
            if ((uVar7 & 2) == 0) {
LAB_00524005:
              uVar6 = *(uint *)(iVar3 + 0x18);
              pbVar12 = *(byte **)(iVar3 + 4);
              pbVar13 = *(byte **)(iVar9 + 4);
              uVar14 = uVar6;
              if (*(int *)(iVar9 + 0x18) < (int)uVar6) {
                uVar14 = *(uint *)(iVar9 + 0x18);
              }
              local_1c = (double)CONCAT44(uVar6,(undefined4)local_1c);
              while (uVar8 = uVar14 - 4, 3 < uVar14) {
                if (*(int *)pbVar12 != *(int *)pbVar13) goto LAB_00524036;
                pbVar12 = pbVar12 + 4;
                pbVar13 = pbVar13 + 4;
                uVar14 = uVar8;
              }
              if (uVar8 == 0xfffffffc) {
LAB_0052406a:
                uVar14 = 0;
              }
              else {
LAB_00524036:
                bVar16 = *pbVar12 < *pbVar13;
                if ((*pbVar12 == *pbVar13) &&
                   ((uVar8 == 0xfffffffd ||
                    ((bVar16 = pbVar12[1] < pbVar13[1], pbVar12[1] == pbVar13[1] &&
                     ((uVar8 == 0xfffffffe ||
                      ((bVar16 = pbVar12[2] < pbVar13[2], pbVar12[2] == pbVar13[2] &&
                       ((uVar8 == 0xffffffff ||
                        (bVar16 = pbVar12[3] < pbVar13[3], pbVar12[3] == pbVar13[3]))))))))))))
                goto LAB_0052406a;
                uVar14 = -(uint)bVar16 | 1;
              }
              if (uVar14 == 0) {
                uVar14 = uVar6 - *(int *)(iVar9 + 0x18);
              }
            }
            else if ((uVar2 & 2) == 0) {
              uVar14 = 1;
            }
            else if ((uVar1 & 2) == 0) {
              uVar14 = 0xffffffff;
            }
            else {
              if (local_14 == 0) goto LAB_00524005;
              if (*(char *)(iVar3 + 0x1f) == *(char *)(local_14 + 4)) {
                uVar14 = (**(code **)(local_14 + 0xc))
                                   (*(undefined4 *)(local_14 + 8),*(undefined4 *)(iVar3 + 0x18),
                                    *(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar9 + 0x18),
                                    *(undefined4 *)(iVar9 + 4));
              }
              else {
                local_48 = 0;
                local_40 = 0;
                local_38 = 0;
                local_30 = 0;
                local_28 = 0;
                local_70 = 0;
                local_68 = 0;
                local_60 = 0;
                local_58 = 0;
                local_50 = 0;
                FUN_005752a0(&local_48,iVar3,0x1000);
                FUN_005752a0(&local_70,iVar9,0x1000);
                iVar9 = FUN_0056bce0(&local_48,*(undefined1 *)(iVar4 + 4));
                uVar15 = (undefined4)local_30;
                if (iVar9 == 0) {
                  uVar15 = 0;
                }
                iVar10 = FUN_0056bce0(&local_70,*(undefined1 *)(iVar4 + 4));
                uVar11 = (undefined4)local_58;
                if (iVar10 == 0) {
                  uVar11 = 0;
                }
                uVar14 = (**(code **)(iVar4 + 0xc))
                                   (*(undefined4 *)(iVar4 + 8),uVar15,iVar9,uVar11,iVar10);
                FUN_00574d40(&local_48);
                FUN_00574d40(&local_70);
                iVar10 = local_8;
              }
            }
          }
          else if ((uVar2 & 0xc) == 0) {
            uVar14 = 1;
          }
          else if ((uVar1 & 0xc) == 0) {
            uVar14 = 0xffffffff;
          }
          else if ((uVar1 & uVar2 & 4) == 0) {
            if ((uVar2 & 8) == 0) {
              dVar18 = (double)*(longlong *)(iVar3 + 0x10);
              local_1c = dVar18;
            }
            else {
              dVar18 = *(double *)(iVar3 + 8);
            }
            if ((uVar1 & 8) == 0) {
              dVar17 = (double)*(longlong *)(iVar9 + 0x10);
              local_1c = dVar17;
            }
            else {
              dVar17 = *(double *)(iVar9 + 8);
            }
            if (dVar17 <= dVar18) {
              uVar14 = (uint)(dVar17 < dVar18);
            }
            else {
              uVar14 = 0xffffffff;
            }
          }
          else {
            iVar4 = *(int *)(iVar3 + 0x14);
            iVar5 = *(int *)(iVar9 + 0x14);
            if (iVar5 < iVar4) {
LAB_00523ef2:
              uVar14 = 1;
            }
            else if ((iVar4 < iVar5) || (*(uint *)(iVar3 + 0x10) < *(uint *)(iVar9 + 0x10))) {
              uVar14 = 0xffffffff;
            }
            else {
              if ((iVar5 <= iVar4) &&
                 ((iVar5 < iVar4 || (*(uint *)(iVar9 + 0x10) < *(uint *)(iVar3 + 0x10)))))
              goto LAB_00523ef2;
              uVar14 = 0;
            }
          }
        }
        else {
          uVar14 = (uVar1 & 1) - (uVar2 & 1);
        }
        if (-1 < (int)(uVar14 ^ local_20)) {
          local_c = iVar10 * 4;
          local_10 = iVar10;
        }
        local_8 = iVar10 + 1;
      } while (local_8 < param_2);
    }
    FUN_00574570(param_1 + 2,param_3[local_10]);
  }
  return;
}


/* FUN_005241a0 @ 005241a0  kind=gamemisc  attributed-by=role:artifact  size=620 */

/* WARNING: Removing unreachable block (ram,0x00524391) */
/* WARNING: Removing unreachable block (ram,0x00524397) */
/* WARNING: Removing unreachable block (ram,0x005243a0) */

void FUN_005241a0(int param_1,undefined4 param_2,char *param_3)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  char *_Src;
  byte *pbVar4;
  undefined4 uVar5;
  size_t _Size;
  byte *_Dst;
  undefined1 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  int iVar10;
  int *piVar11;
  byte *pbVar12;
  int local_10;
  undefined1 *local_c;
  int local_8;
  
  piVar11 = (int *)(param_1 + 8);
  local_8 = *piVar11;
  local_c = (undefined1 *)0x0;
  _Src = (char *)FUN_0056bce0(*(undefined4 *)param_3,1);
  pbVar4 = (byte *)FUN_0056bce0(*(undefined4 *)((int)param_3 + 4),1);
  uVar5 = FUN_0056bce0(*(undefined4 *)((int)param_3 + 8),1);
  cVar2 = *_Src;
  puVar6 = (undefined1 *)0x0;
  param_3 = _Src;
  while (cVar2 != '\0') {
    _Size = FUN_0055a220(_Src,&local_10);
    if (local_10 == 0x66) {
      do {
        _Src = _Src + _Size;
        _Size = FUN_0055a220(_Src,&local_10);
      } while (local_10 == 0x95);
      puVar6 = local_c;
      if ((_Src == (char *)0x0) ||
         (_Dst = (byte *)FUN_00552230(local_8,_Size + 1), puVar6 = local_c, _Dst == (byte *)0x0))
      break;
      memcpy(_Dst,_Src,_Size);
      _Dst[_Size] = 0;
      FUN_00552be0(_Dst);
      bVar3 = *pbVar4;
      pbVar9 = pbVar4;
      pbVar12 = _Dst;
      while ((bVar3 != 0 && ((&DAT_007120d8)[bVar3] == (&DAT_007120d8)[*pbVar12]))) {
        pbVar1 = pbVar9 + 1;
        pbVar9 = pbVar9 + 1;
        pbVar12 = pbVar12 + 1;
        bVar3 = *pbVar1;
      }
      if ((&DAT_007120d8)[*pbVar9] == (&DAT_007120d8)[*pbVar12]) {
        puVar6 = &DAT_006fc918;
        if (local_c != (undefined1 *)0x0) {
          puVar6 = local_c;
        }
        puVar6 = (undefined1 *)
                 FUN_0055d980(local_8,"%s%.*s\"%w\"",puVar6,(int)_Src - (int)param_3,param_3,uVar5);
        FUN_005521a0(local_8,local_c);
        param_3 = _Src + _Size;
        local_c = puVar6;
      }
      FUN_005521a0(local_8,_Dst);
    }
    _Src = _Src + _Size;
    puVar6 = local_c;
    cVar2 = *_Src;
  }
  puVar8 = &DAT_006fc918;
  if (puVar6 != (undefined1 *)0x0) {
    puVar8 = puVar6;
  }
  uVar5 = FUN_0055d980(local_8,&DAT_00716f4c,puVar8,param_3);
  iVar7 = FUN_00575040(piVar11,uVar5,0xffffffff,1,FUN_0055dc20);
  if (iVar7 == 0x12) {
    *(undefined4 *)(param_1 + 0x38) = 0x12;
    if (*piVar11 == 0) {
      iVar7 = 1000000000;
    }
    else {
      iVar7 = *(int *)(*piVar11 + 0x50);
    }
    iVar10 = 0;
    if (-1 < iVar7) {
      do {
        if ("string or blob too big"[iVar10] == '\0') break;
        iVar10 = iVar10 + 1;
      } while (iVar10 <= iVar7);
    }
    if ((*(ushort *)(param_1 + 0x24) & 0x2460) != 0) {
      FUN_00574d80(piVar11);
    }
    FUN_005521a0(*piVar11,*(undefined4 *)(param_1 + 0x2c));
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined2 *)(param_1 + 0x24) = 0xa02;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0xc) = "string or blob too big";
    *(int *)(param_1 + 0x20) = iVar10;
    *(undefined2 *)(param_1 + 0x26) = 0x103;
    puVar6 = local_c;
  }
  FUN_005521a0(local_8,puVar6);
  return;
}


/* FUN_005246a0 @ 005246a0  kind=gamemisc  attributed-by=role:artifact  size=103 */

void FUN_005246a0(int param_1,undefined4 param_2,int *param_3)

{
  byte *pbVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  
  iVar6 = *param_3;
  switch(*(undefined1 *)(iVar6 + 0x1e)) {
  case 1:
  case 2:
  case 4:
    if (((*(byte *)(iVar6 + 0x1c) & 0x10) == 0) && (iVar4 = FUN_0056bce0(iVar6,1), iVar4 == 0)) {
      FUN_0051d210(param_1,0);
      return;
    }
    iVar4 = *(int *)(iVar6 + 0x18);
    if ((*(ushort *)(iVar6 + 0x1c) & 0x4000) != 0) {
      iVar4 = iVar4 + *(int *)(iVar6 + 0x10);
    }
    FUN_0051d210(param_1,iVar4);
    return;
  case 3:
    pbVar5 = (byte *)FUN_0056bce0(iVar6,1);
    if (pbVar5 != (byte *)0x0) {
      iVar6 = 0;
      bVar2 = *pbVar5;
      while (bVar2 != 0) {
        iVar6 = iVar6 + 1;
        pbVar5 = pbVar5 + 1;
        if (0xbf < bVar2) {
          bVar2 = *pbVar5;
          while ((bVar2 & 0xc0) == 0x80) {
            pbVar1 = pbVar5 + 1;
            pbVar5 = pbVar5 + 1;
            bVar2 = *pbVar1;
          }
        }
        bVar2 = *pbVar5;
      }
      FUN_0051d210(param_1,iVar6);
      return;
    }
    break;
  default:
    if ((*(byte *)(param_1 + 0x24) & 0x40) != 0) {
      piVar3 = *(int **)(param_1 + 0x18);
      piVar3[1] = *(int *)(*piVar3 + 0xa4);
      *(int **)(*piVar3 + 0xa4) = piVar3;
    }
    if ((*(byte *)(param_1 + 0x24) & 0x20) != 0) {
      FUN_005644e0(*(undefined4 *)(param_1 + 0x18));
    }
    *(ushort *)(param_1 + 0x24) = *(ushort *)(param_1 + 0x24) & 0xbe01 | 1;
    *(undefined1 *)(param_1 + 0x26) = 5;
  }
  return;
}


/* FUN_00524910 @ 00524910  kind=gamemisc  attributed-by=role:artifact  size=238 */

void FUN_00524910(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  
  puVar1 = param_3;
  pcVar2 = (char *)FUN_0056bce0(*param_3,1);
  uVar3 = FUN_0056bce0(puVar1[1],1);
  uVar6 = *(undefined4 *)(param_1 + 8);
  iVar9 = 3;
  iVar5 = 0;
  pcVar8 = pcVar2;
  if (pcVar2 != (char *)0x0) {
    do {
      while( true ) {
        pcVar7 = pcVar8;
        iVar4 = iVar5;
        iVar5 = iVar4;
        pcVar8 = pcVar7;
        if (*pcVar7 == '\0') {
          return;
        }
        do {
          pcVar8 = pcVar8 + iVar5;
          iVar5 = FUN_0055a220(pcVar8,&param_3);
        } while (param_3 == (undefined4 *)0x95);
        iVar9 = iVar9 + 1;
        if ((param_3 != (undefined4 *)0x76) && (param_3 != (undefined4 *)0x68)) break;
        iVar9 = 0;
      }
    } while ((iVar9 != 2) ||
            (((param_3 != (undefined4 *)0x87 && (param_3 != (undefined4 *)0x2d)) &&
             (param_3 != (undefined4 *)0x5))));
    uVar6 = FUN_0055d980(uVar6,"%.*s\"%w\"%s",(int)pcVar7 - (int)pcVar2,pcVar2,uVar3,pcVar7 + iVar4)
    ;
    iVar5 = FUN_00575040(param_1 + 8,uVar6,0xffffffff,1,FUN_0055dc20);
    if (iVar5 == 0x12) {
      *(undefined4 *)(param_1 + 0x38) = 0x12;
      FUN_00575040(param_1 + 8,"string or blob too big",0xffffffff,1,0);
    }
  }
  return;
}


/* FUN_00525aa0 @ 00525aa0  kind=gamemisc  attributed-by=role:artifact  size=405 */

void FUN_00525aa0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  int local_8;
  
  local_8 = 1;
  iVar3 = *param_3;
  cVar1 = *(char *)(iVar3 + 0x1e);
  cVar2 = *(char *)(param_3[1] + 0x1e);
  if (cVar1 == '\x05') {
    return;
  }
  if (cVar2 == '\x05') {
    return;
  }
  if (((*(byte *)(iVar3 + 0x1c) & 0x10) == 0) && (iVar9 = FUN_0056bce0(iVar3,1), iVar9 == 0)) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(iVar3 + 0x18);
    if ((*(ushort *)(iVar3 + 0x1c) & 0x4000) != 0) {
      iVar9 = iVar9 + *(int *)(iVar3 + 0x10);
    }
  }
  iVar3 = param_3[1];
  if ((*(byte *)(iVar3 + 0x1c) & 0x10) == 0) {
    iVar10 = FUN_0056bce0(iVar3,1);
    uVar11 = 0;
    if (iVar10 == 0) goto LAB_00525b2b;
  }
  uVar11 = *(uint *)(iVar3 + 0x18);
  if ((*(ushort *)(iVar3 + 0x1c) & 0x4000) != 0) {
    uVar11 = uVar11 + *(int *)(iVar3 + 0x10);
  }
LAB_00525b2b:
  if ((cVar1 == '\x04') && (cVar2 == '\x04')) {
    pbVar12 = (byte *)FUN_00528890(*param_3);
    pbVar13 = (byte *)FUN_00528890(param_3[1]);
    bVar4 = false;
  }
  else {
    pbVar12 = (byte *)FUN_0056bce0(*param_3,1);
    pbVar13 = (byte *)FUN_0056bce0(param_3[1],1);
    bVar4 = true;
  }
  pbVar6 = pbVar13;
  pbVar7 = pbVar12;
  uVar8 = uVar11;
  if ((int)uVar11 <= iVar9) {
    while (uVar5 = uVar8 - 4, 3 < uVar8) {
      if (*(int *)pbVar7 == *(int *)pbVar6) {
        pbVar6 = pbVar6 + 4;
        pbVar7 = pbVar7 + 4;
        uVar8 = uVar5;
      }
      else {
LAB_00525ba6:
        if ((*pbVar7 == *pbVar6) &&
           ((uVar5 == 0xfffffffd ||
            ((pbVar7[1] == pbVar6[1] &&
             ((uVar5 == 0xfffffffe ||
              ((pbVar7[2] == pbVar6[2] && ((uVar5 == 0xffffffff || (pbVar7[3] == pbVar6[3]))))))))))
           )) goto LAB_00525c05;
        local_8 = local_8 + 1;
        do {
          iVar9 = iVar9 + -1;
          pbVar12 = pbVar12 + 1;
          if (!bVar4) break;
        } while ((*pbVar12 & 0xc0) == 0x80);
        pbVar6 = pbVar13;
        pbVar7 = pbVar12;
        uVar8 = uVar11;
        if (iVar9 < (int)uVar11) {
          FUN_0051d210(param_1,0);
          return;
        }
      }
    }
    if (uVar5 != 0xfffffffc) goto LAB_00525ba6;
LAB_00525c05:
    if ((int)uVar11 <= iVar9) {
      FUN_0051d210(param_1,local_8);
      return;
    }
  }
  FUN_0051d210(param_1,0);
  return;
}


/* FUN_005260e0 @ 005260e0  kind=gamemisc  attributed-by=role:artifact  size=811 */

void FUN_005260e0(int param_1,int param_2,int *param_3)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  uint local_28;
  uint local_18;
  uint local_10;
  int local_c;
  int local_8;
  
  bVar8 = false;
  if (*(char *)(param_3[1] + 0x1e) == '\x05') {
    return;
  }
  if ((param_2 == 3) && (*(char *)(param_3[2] + 0x1e) == '\x05')) {
    return;
  }
  cVar2 = *(char *)(*param_3 + 0x1e);
  local_18 = FUN_0051c810(param_3[1]);
  local_8 = (int)local_18 >> 0x1f;
  if (cVar2 == '\x04') {
    iVar7 = *param_3;
    if (((*(byte *)(iVar7 + 0x1c) & 0x10) == 0) && (iVar4 = FUN_0056bce0(iVar7,1), iVar4 == 0)) {
      local_10 = 0;
    }
    else if ((*(ushort *)(iVar7 + 0x1c) & 0x4000) == 0) {
      local_10 = *(uint *)(iVar7 + 0x18);
    }
    else {
      local_10 = *(int *)(iVar7 + 0x18) + *(int *)(iVar7 + 0x10);
    }
    pbVar5 = (byte *)FUN_00528890(*param_3);
    if (pbVar5 == (byte *)0x0) {
      return;
    }
  }
  else {
    pbVar5 = (byte *)FUN_0056bce0(*param_3,1);
    if (pbVar5 == (byte *)0x0) {
      return;
    }
    local_10 = 0;
    if ((-1 < (int)local_18 || local_8 < 0) && (local_8 < 0)) {
      bVar3 = *pbVar5;
      local_10 = 0;
      pbVar6 = pbVar5;
      while (bVar3 != 0) {
        bVar3 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        if (0xbf < bVar3) {
          bVar3 = *pbVar6;
          while ((bVar3 & 0xc0) == 0x80) {
            pbVar1 = pbVar6 + 1;
            pbVar6 = pbVar6 + 1;
            bVar3 = *pbVar1;
          }
        }
        local_10 = local_10 + 1;
        bVar3 = *pbVar6;
      }
    }
  }
  if (param_2 == 3) {
    local_28 = FUN_0051c810(param_3[2]);
    local_c = (int)local_28 >> 0x1f;
    if ((-1 < (int)local_28 || local_c < 0) && (local_c < 0)) {
      bVar8 = local_28 != 0;
      local_28 = -local_28;
      local_c = -(local_c + (uint)bVar8);
      bVar8 = true;
    }
  }
  else {
    local_28 = *(uint *)(*(int *)(param_1 + 8) + 0x50);
    local_c = (int)local_28 >> 0x1f;
  }
  iVar7 = (int)local_10 >> 0x1f;
  if (local_8 < 1) {
    if (local_8 < 0) {
      bVar9 = CARRY4(local_18,local_10);
      local_18 = local_18 + local_10;
      local_8 = local_8 + iVar7 + (uint)bVar9;
      if ((local_8 < 1) && (local_8 < 0)) {
        bVar9 = CARRY4(local_28,local_18);
        local_28 = local_28 + local_18;
        local_c = local_c + local_8 + (uint)bVar9;
        if ((local_c < 1) && (local_c < 0)) {
          local_28 = 0;
          local_c = 0;
        }
        local_18 = 0;
        local_8 = 0;
      }
      goto LAB_005262a5;
    }
    if ((local_8 < 0) || ((local_8 < 1 && (local_18 == 0)))) {
      if ((-1 < local_c) && ((0 < local_c || (local_28 != 0)))) {
        bVar9 = local_28 != 0;
        local_28 = local_28 - 1;
        local_c = local_c + -1 + (uint)bVar9;
      }
      goto LAB_005262a5;
    }
  }
  bVar9 = local_18 != 0;
  local_18 = local_18 - 1;
  local_8 = local_8 + -1 + (uint)bVar9;
LAB_005262a5:
  if (bVar8) {
    bVar8 = local_18 < local_28;
    local_18 = local_18 - local_28;
    local_8 = (local_8 - local_c) - (uint)bVar8;
    if ((local_8 < 1) && (local_8 < 0)) {
      bVar8 = CARRY4(local_28,local_18);
      local_28 = local_28 + local_18;
      local_18 = 0;
      local_c = local_c + local_8 + (uint)bVar8;
      local_8 = 0;
    }
  }
  if (cVar2 == '\x04') {
    iVar4 = local_c + local_8 + (uint)CARRY4(local_28,local_18);
    if ((iVar7 <= iVar4) && ((iVar7 < iVar4 || (local_10 < local_28 + local_18)))) {
      local_28 = local_10 - local_18;
      bVar8 = (int)((iVar7 - local_8) - (uint)(local_10 < local_18)) < 0;
      if ((iVar7 - local_8 == (uint)(local_10 < local_18) || bVar8) && (bVar8)) {
        local_28 = 0;
      }
    }
    iVar7 = FUN_00575040(param_1 + 8,pbVar5 + local_18,local_28,0,0xffffffff);
    if (iVar7 == 0x12) {
      *(undefined4 *)(param_1 + 0x38) = 0x12;
      FUN_00575040(param_1 + 8,"string or blob too big",0xffffffff,1,0);
    }
  }
  else {
    bVar3 = *pbVar5;
    for (; (bVar3 != 0 && (local_18 != 0 || local_8 != 0)); local_18 = local_18 - 1) {
      pbVar5 = pbVar5 + 1;
      if (0xbf < bVar3) {
        bVar3 = *pbVar5;
        while ((bVar3 & 0xc0) == 0x80) {
          pbVar6 = pbVar5 + 1;
          pbVar5 = pbVar5 + 1;
          bVar3 = *pbVar6;
        }
      }
      bVar3 = *pbVar5;
      local_8 = local_8 + -1 + (uint)(local_18 != 0);
    }
    bVar3 = *pbVar5;
    pbVar6 = pbVar5;
    for (; (bVar3 != 0 && (local_28 != 0 || local_c != 0)); local_28 = local_28 - 1) {
      bVar3 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      if (0xbf < bVar3) {
        bVar3 = *pbVar6;
        while ((bVar3 & 0xc0) == 0x80) {
          pbVar1 = pbVar6 + 1;
          pbVar6 = pbVar6 + 1;
          bVar3 = *pbVar1;
        }
      }
      local_c = local_c + -1 + (uint)(local_28 != 0);
      bVar3 = *pbVar6;
    }
    iVar7 = FUN_00575040(param_1 + 8,pbVar5,(int)pbVar6 - (int)pbVar5,1,0xffffffff);
    if (iVar7 == 0x12) {
      *(undefined4 *)(param_1 + 0x38) = 0x12;
      FUN_00575040(param_1 + 8,"string or blob too big",0xffffffff,1,0);
      return;
    }
  }
  return;
}


/* FUN_00526940 @ 00526940  kind=gamemisc  attributed-by=role:artifact  size=437 */

void FUN_00526940(int param_1,int param_2,int *param_3)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  double dVar7;
  longlong local_1c;
  double local_14;
  double local_c;
  
  iVar6 = 0;
  if (param_2 == 2) {
    if (*(char *)(param_3[1] + 0x1e) == '\x05') {
      return;
    }
    iVar6 = FUN_0051c810();
    if (iVar6 < 0x1f) {
      if (iVar6 < 0) {
        iVar6 = 0;
      }
    }
    else {
      iVar6 = 0x1e;
    }
  }
  iVar3 = *param_3;
  if (*(char *)(iVar3 + 0x1e) == '\x05') {
    return;
  }
  uVar2 = *(ushort *)(iVar3 + 0x1c);
  if ((uVar2 & 8) == 0) {
    if ((uVar2 & 4) == 0) {
      if ((uVar2 & 0x12) == 0) {
        local_c = 0.0;
      }
      else {
        local_14 = 0.0;
        FUN_0054a330(*(undefined4 *)(iVar3 + 4),&local_14,*(undefined4 *)(iVar3 + 0x18),
                     *(undefined1 *)(iVar3 + 0x1f));
        local_c = local_14;
      }
    }
    else {
      local_c = (double)*(longlong *)(iVar3 + 0x10);
    }
  }
  else {
    local_c = *(double *)(iVar3 + 8);
  }
  if (iVar6 == 0) {
    if ((0.0 <= local_c) && (local_c < 9.223372036854776e+18)) {
      local_14 = (double)FUN_0068d946();
      local_c = (double)(longlong)local_14;
      dVar7 = local_c;
      goto LAB_00526ad8;
    }
    if ((local_c < 0.0) && (-local_c < 9.223372036854776e+18)) {
      local_1c = FUN_0068d946();
      dVar7 = -(double)local_1c;
      goto LAB_00526ad8;
    }
  }
  pcVar4 = (char *)FUN_00523d10(&DAT_007187e4,iVar6,local_c);
  if (pcVar4 == (char *)0x0) {
    FUN_0051d110();
    return;
  }
  cVar1 = *pcVar4;
  pcVar5 = pcVar4;
  while (cVar1 != '\0') {
    pcVar5 = pcVar5 + 1;
    cVar1 = *pcVar5;
  }
  FUN_0054a330(pcVar4,&local_c,(int)pcVar5 - (int)pcVar4 & 0x3fffffff,1);
  FUN_00524410(pcVar4);
  dVar7 = local_c;
LAB_00526ad8:
  FUN_00574df0(param_1 + 8,dVar7);
  return;
}


/* FUN_00527160 @ 00527160  kind=gamemisc  attributed-by=role:artifact  size=191 */

void FUN_00527160(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  
  iVar1 = FUN_0056bce0(*param_3,1);
  iVar4 = *param_3;
  if (((*(byte *)(iVar4 + 0x1c) & 0x10) == 0) && (iVar2 = FUN_0056bce0(iVar4,1), iVar2 == 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(uint *)(iVar4 + 0x18);
    if ((*(ushort *)(iVar4 + 0x1c) & 0x4000) != 0) {
      uVar7 = uVar7 + *(int *)(iVar4 + 0x10);
    }
  }
  if ((iVar1 != 0) &&
     (puVar3 = (undefined1 *)
               FUN_005336b0(param_1,uVar7 + 1,((int)uVar7 >> 0x1f) + (uint)(0xfffffffe < uVar7)),
     puVar3 != (undefined1 *)0x0)) {
    if (0 < (int)uVar7) {
      puVar5 = puVar3;
      uVar6 = uVar7;
      do {
        *puVar5 = (&DAT_007120d8)[(byte)puVar5[iVar1 - (int)puVar3]];
        uVar6 = uVar6 - 1;
        puVar5 = puVar5 + 1;
      } while (uVar6 != 0);
    }
    iVar4 = FUN_00575040(param_1 + 8,puVar3,uVar7,1,FUN_00524410);
    if (iVar4 == 0x12) {
      *(undefined4 *)(param_1 + 0x38) = 0x12;
      FUN_00575040(param_1 + 8,"string or blob too big",0xffffffff,1,0);
    }
  }
  return;
}


/* FUN_00527670 @ 00527670  kind=gamemisc  attributed-by=role:artifact  size=206 */

void FUN_00527670(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int local_c;
  uint local_8;
  
  iVar3 = 8;
  piVar5 = &local_c;
  if (DAT_007665e4 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (*DAT_00766628)(5);
    if (iVar2 != 0) {
      (*DAT_00766630)(iVar2);
    }
  }
  do {
    uVar1 = FUN_00544c20();
    *(undefined1 *)piVar5 = uVar1;
    piVar5 = (int *)((int)piVar5 + 1);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (iVar2 != 0) {
    (*DAT_00766638)(iVar2);
  }
  uVar4 = local_8;
  iVar3 = local_c;
  if (((int)local_8 < 1) && ((int)local_8 < 0)) {
    uVar4 = -((local_8 & 0x7fffffff) + (uint)(local_c != 0));
    iVar3 = -local_c;
  }
  if ((*(ushort *)(param_1 + 0x24) & 0x2460) != 0) {
    FUN_00574d80((undefined4 *)(param_1 + 8));
  }
  FUN_005521a0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x2c));
  *(int *)(param_1 + 0x18) = iVar3;
  *(uint *)(param_1 + 0x1c) = uVar4;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined2 *)(param_1 + 0x24) = 4;
  *(undefined1 *)(param_1 + 0x26) = 1;
  return;
}


/* FUN_00527e00 @ 00527e00  kind=gamemisc  attributed-by=role:artifact  size=155 */

void FUN_00527e00(int param_1,undefined4 param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = FUN_0051c810(*param_3);
  if ((int)uVar2 < 1) {
    uVar2 = 1;
  }
  uVar1 = *(uint *)(*(int *)(param_1 + 8) + 0x50);
  iVar3 = (int)uVar1 >> 0x1f;
  if (((int)uVar2 >> 0x1f < iVar3) || (((int)uVar2 >> 0x1f <= iVar3 && (uVar2 <= uVar1)))) {
    iVar3 = FUN_0055da00(uVar2);
    if (iVar3 == 0) {
      FUN_0051d110(param_1);
      return;
    }
    FUN_005245e0(uVar2,iVar3);
    iVar3 = FUN_00575040(param_1 + 8,iVar3,uVar2,0,FUN_00524410);
    if (iVar3 != 0x12) {
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x38) = 0x12;
  FUN_00575040(param_1 + 8,"string or blob too big",0xffffffff,1,0);
  return;
}


/* FUN_00595850 @ 00595850  kind=gamemisc  attributed-by=role:artifact  size=145 */

void FUN_00595850(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  float10 fVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  undefined8 local_30;
  undefined8 local_28;
  uint local_20;
  float local_1c;
  int local_18;
  undefined4 uStack_14;
  undefined8 local_10;
  float fStack_8;
  
  piVar3 = (int *)FUN_00468910(&param_2);
  uVar1 = local_20;
  uVar5 = param_2;
  if (0 < *piVar3) {
    return;
  }
  local_20 = local_20 & 0xffffff00;
  uVar2 = local_20;
  local_1c = 0.0;
  local_18 = 0;
  local_10 = 0;
  local_38 = (local_38 >> 8 & 0xffffff) << 8;
  local_30 = (ulonglong)local_30._4_4_ << 0x20;
  local_28 = 0;
  local_20._1_3_ = SUB43(uVar1,1);
  switch(param_2) {
  case 0x61:
    local_20 = CONCAT31(local_20._1_3_,3);
    fVar6 = (float10)FUN_0043ed60(0x61,0xffffffff);
    local_18 = (int)((float)fVar6 * 12000.0 + 8000.0);
    break;
  default:
    goto LAB_00595a19;
  case 100:
    local_20 = CONCAT31(local_20._1_3_,0xc);
    local_18 = 10000;
    fVar6 = (float10)FUN_0043ed60(100,0xffffffff);
    local_1c = (float)fVar6 + 1.0;
    break;
  case 0x65:
    local_20 = CONCAT31(local_20._1_3_,1);
    local_18 = 10000;
    fVar6 = (float10)FUN_0043ed60(0x65,0xffffffff);
    local_1c = 0.75 - (float)fVar6 * 0.3;
    FUN_00446af0(&local_20);
    if (0 < *(int *)(param_1 + 300)) {
      *(undefined4 *)(param_1 + 300) = 0;
    }
    goto LAB_005959da;
  case 0x66:
    local_20 = CONCAT31(local_20._1_3_,2);
    local_18 = 10000;
    break;
  case 0x67:
    local_20 = CONCAT31(local_20._1_3_,6);
    local_18 = 30000;
    fVar6 = (float10)FUN_0043ed60(0x67,0xffffffff);
    fStack_8 = (float)fVar6 + 1.0;
    fVar6 = (float10)FUN_00446e80();
    local_1c = (float)fVar6 * 2.0 * fStack_8;
  }
  FUN_00446af0(&local_20);
LAB_005959da:
  local_38 = CONCAT44(local_1c,local_20);
  uStack_44 = *(undefined4 *)(param_1 + 0xc);
  uStack_48 = *(undefined4 *)(param_1 + 8);
  local_30 = CONCAT44(uStack_14,local_18);
  local_28 = local_10;
  uStack_40 = uStack_48;
  uStack_3c = uStack_44;
  FUN_004460a0(&uStack_48);
  uVar2 = local_20;
LAB_00595a19:
  local_20 = uVar2;
  puVar4 = (undefined4 *)FUN_00468910(&param_2);
  uVar5 = FUN_0043e6a0(uVar5,0xffffffff);
  *puVar4 = uVar5;
  return;
}


/* FUN_005a4980 @ 005a4980  kind=gamemisc  attributed-by=role:artifact  size=334 */

void FUN_005a4980(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f3038;
  local_10 = ExceptionList;
  uVar6 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar7 = (undefined4 *)FUN_0046d550(0,0);
  local_8 = 0;
  piVar9 = (int *)**(int **)(local_14 + 4);
  local_18 = piVar9;
  if (piVar9 != *(int **)(local_14 + 4)) {
    do {
      iVar2 = piVar9[6];
      if (((((iVar2 != 0) && (*(char *)(iVar2 + 0x60) != '\0')) &&
           (*(char *)(iVar2 + 0x60) != '\x05')) &&
          ((iVar8 = FUN_00434d10(*(undefined4 *)(iVar2 + 0x1b0),*(undefined4 *)(iVar2 + 0x1b4)),
           iVar8 != 0 && (iVar2 = *(int *)(iVar2 + 0x1b8), -1 < iVar2)))) &&
         (iVar2 < *(int *)(iVar8 + 0x1c) - *(int *)(iVar8 + 0x18) >> 2)) {
        *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x18) + iVar2 * 4) + 0x38) = 0;
        FUN_004860b0(&local_18);
        if ((undefined4 *)piVar9[6] != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)piVar9[6])(1,uVar6);
        }
      }
      if (*(char *)((int)piVar9 + 0xd) == '\0') {
        piVar3 = (int *)piVar9[2];
        if (*(char *)((int)piVar3 + 0xd) == '\0') {
          cVar1 = *(char *)(*piVar3 + 0xd);
          piVar9 = piVar3;
          piVar3 = (int *)*piVar3;
          while (local_18 = piVar9, cVar1 == '\0') {
            cVar1 = *(char *)(*piVar3 + 0xd);
            piVar9 = piVar3;
            piVar3 = (int *)*piVar3;
          }
        }
        else {
          cVar1 = *(char *)(piVar9[1] + 0xd);
          piVar5 = (int *)piVar9[1];
          piVar3 = piVar9;
          while ((piVar9 = piVar5, local_18 = piVar9, cVar1 == '\0' && (piVar3 == (int *)piVar9[2]))
                ) {
            cVar1 = *(char *)(piVar9[1] + 0xd);
            piVar5 = (int *)piVar9[1];
            piVar3 = piVar9;
          }
        }
      }
    } while (piVar9 != *(int **)(local_14 + 4));
  }
  for (puVar4 = (undefined4 *)*puVar7; puVar4 != puVar7; puVar4 = (undefined4 *)*puVar4) {
    FUN_0043ede0(&local_18,puVar4[2]);
  }
  puVar4 = (undefined4 *)*puVar7;
  *puVar7 = puVar7;
  puVar7[1] = puVar7;
  if (puVar4 == puVar7) {
                    /* WARNING: Subroutine does not return */
    operator_delete(puVar7);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(puVar4);
}


/* FUN_005a5af0 @ 005a5af0  kind=gamemisc  attributed-by=role:artifact  size=29 */

void FUN_005a5af0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return;
}


/* FUN_005a5f60 @ 005a5f60  kind=gamemisc  attributed-by=role:artifact  size=770 */

void FUN_005a5f60(int *param_1,uint *param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  undefined8 uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  float local_30;
  int local_2c;
  int iStack_28;
  int local_24;
  uint local_20;
  int iStack_1c;
  uint local_18;
  int iStack_14;
  uint local_10;
  int iStack_c;
  
  uVar8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  uVar3 = param_2[1];
  uVar4 = *param_2;
  iVar9 = __alldiv(uVar4,uVar3,0x10000,0);
  uVar5 = param_2[3];
  uVar6 = param_2[2];
  iVar9 = (int)((iVar9 >> 0x1f & 7U) + iVar9) >> 3;
  iVar10 = __alldiv(uVar6,uVar5,0x10000,0);
  fVar19 = -1.0;
  uVar16 = iVar9 - 1;
  iVar9 = iVar9 + 1;
  iVar10 = (int)(iVar10 + (iVar10 >> 0x1f & 7U)) >> 3;
  local_30 = -1.0;
  local_2c = 0;
  iStack_28 = 0;
  local_24 = -1;
  if ((int)uVar16 <= iVar9) {
    uVar1 = iVar10 - 1;
    iVar17 = -1;
    uVar7 = uVar1;
    do {
      for (; (int)uVar7 <= iVar10 + 1; uVar7 = uVar7 + 1) {
        if ((((-1 < (int)uVar16) && (-1 < (int)uVar7)) && ((int)uVar16 < 0x200000)) &&
           (((int)uVar7 < 0x200000 &&
            (iVar11 = FUN_00434d10((int)(uVar16 + ((int)uVar16 >> 0x1f & 0x1fU)) >> 5,
                                   (int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5),
            fVar19 = local_30, iVar11 != 0)))) {
          uVar14 = uVar7 & 0x8000001f;
          if ((int)uVar14 < 0) {
            uVar14 = (uVar14 - 1 | 0xffffffe0) + 1;
          }
          uVar13 = uVar16 & 0x8000001f;
          if ((int)uVar13 < 0) {
            uVar13 = (uVar13 - 1 | 0xffffffe0) + 1;
          }
          piVar2 = (int *)(*(int *)(iVar11 + 0xac) + (uVar14 * 0x20 + uVar13) * 8);
          if (piVar2 != (int *)0x0) {
            piVar2 = (int *)*piVar2;
            piVar15 = (int *)*piVar2;
            if (piVar15 != piVar2) {
              uVar14 = param_2[4];
              uVar13 = param_2[5];
              do {
                iVar11 = piVar15[2];
                local_20 = (uint)*(undefined8 *)(iVar11 + 8);
                iStack_1c = (int)((ulonglong)*(undefined8 *)(iVar11 + 8) >> 0x20);
                iVar12 = (iStack_1c - uVar3) - (uint)(local_20 < uVar4);
                local_18 = (uint)*(undefined8 *)(iVar11 + 0x10);
                iStack_14 = (int)((ulonglong)*(undefined8 *)(iVar11 + 0x10) >> 0x20);
                iVar17 = (iStack_14 - uVar5) - (uint)(local_18 < uVar6);
                local_10 = (uint)*(undefined8 *)(iVar11 + 0x18);
                iStack_c = (int)((ulonglong)*(undefined8 *)(iVar11 + 0x18) >> 0x20);
                iVar11 = local_10 - uVar14;
                iVar18 = (iStack_c - uVar13) - (uint)(local_10 < uVar14);
                uVar20 = __allmul(local_20 - uVar4,iVar12,local_20 - uVar4,iVar12);
                lVar21 = __alldiv(uVar20,0x10000,0);
                uVar20 = __allmul(iVar11,iVar18,iVar11,iVar18);
                lVar22 = __alldiv(uVar20,0x10000,0);
                uVar20 = __allmul(local_18 - uVar6,iVar17,local_18 - uVar6,iVar17);
                lVar23 = __alldiv(uVar20,0x10000,0);
                fVar19 = (float)(lVar21 + lVar22 + lVar23) * 1.5258789e-05;
                if ((local_24 < 0) || (fVar19 < local_30)) {
                  local_2c = piVar15[3];
                  iStack_28 = piVar15[4];
                  local_24 = piVar15[5];
                  local_30 = fVar19;
                }
                piVar15 = (int *)*piVar15;
                iVar17 = local_24;
                fVar19 = local_30;
              } while (piVar15 != piVar2);
            }
          }
        }
      }
      uVar16 = uVar16 + 1;
      uVar7 = uVar1;
    } while ((int)uVar16 <= iVar9);
    if ((0.0 <= fVar19) && (fVar19 <= 16.0)) {
      *param_1 = local_2c;
      param_1[2] = iVar17;
      param_1[1] = iStack_28;
      __security_check_cookie(uVar8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = -1;
  __security_check_cookie(uVar8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0060aac0 @ 0060aac0  kind=gamemisc  attributed-by=role:artifact  size=99 */

void FUN_0060aac0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *in_ECX;
  
  puVar1 = (undefined4 *)in_ECX[1];
  if ((param_1 < puVar1) && (puVar2 = (undefined4 *)*in_ECX, puVar2 <= param_1)) {
    if (puVar1 == (undefined4 *)in_ECX[2]) {
      FUN_00609400(1);
    }
    param_1 = (undefined4 *)(((int)param_1 - (int)puVar2 & 0xfffffff0U) + *in_ECX);
  }
  else if (puVar1 == (undefined4 *)in_ECX[2]) {
    FUN_00609400(1);
  }
  puVar1 = (undefined4 *)in_ECX[1];
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
    puVar1[3] = param_1[3];
  }
  in_ECX[1] = in_ECX[1] + 0x10;
  return;
}


/* FUN_0069a1e0 @ 0069a1e0  kind=gamemisc  attributed-by=role:artifact  size=1310 */

void FUN_0069a1e0(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  short *psVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  byte *pbVar12;
  int *piVar13;
  byte *pbVar14;
  short sVar15;
  short sVar16;
  bool bVar17;
  int local_34;
  char local_2d;
  int local_2c;
  undefined4 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_34;
  uVar3 = param_2[0x19];
  sVar15 = 0;
  local_18 = param_2;
  local_34 = 0;
  local_2c = 0;
  local_1c = uVar3;
  local_34 = FUN_006908c0(param_1,0);
  if (local_34 != 0) {
LAB_0069a6eb:
    __security_check_cookie(local_4 ^ (uint)&local_34);
    return;
  }
  local_14 = 1;
  local_10 = 1;
  local_c = 0;
  local_8 = 8;
  local_34 = FUN_00699f90(param_1,uVar3,&local_2c);
  iVar10 = local_2c;
  if (local_34 == 0xb0) {
    FUN_00699320(param_2);
    __security_check_cookie(local_4 ^ (uint)&local_34);
    return;
  }
  if (local_34 != 0) goto LAB_0069a6eb;
  param_2[0x23] = local_2c;
  *param_2 = 1;
  param_2[1] = 0;
  param_2[2] = 0x92;
  iVar6 = FUN_00698ff0();
  if ((((iVar6 != 0) && (*(int *)(iVar6 + 4) == 1)) && (*(char **)(iVar6 + 0xc) != (char *)0x0)) &&
     (((cVar1 = **(char **)(iVar6 + 0xc), cVar1 == 'M' || (cVar1 == 'm')) ||
      ((cVar1 == 'C' || (cVar1 == 'c')))))) {
    param_2[2] = 0x96;
  }
  iVar6 = FUN_00698ff0();
  if ((iVar6 == 0) || (*(int *)(iVar6 + 0xc) == 0)) {
    param_2[5] = 0;
  }
  else {
    uVar7 = FUN_00691310(uVar3,*(int *)(iVar6 + 0xc),&local_34);
    param_2[5] = uVar7;
    if (local_34 != 0) goto LAB_0069a6eb;
  }
  local_34 = FUN_00699130(param_2);
  if (local_34 != 0) goto LAB_0069a6eb;
  param_2[4] = *(int *)(iVar10 + 0x30) + 1;
  param_2[7] = 1;
  psVar8 = (short *)FUN_00693a60(uVar3,0x10,0,1,0,&local_34);
  param_2[8] = psVar8;
  if (local_34 != 0) goto LAB_0069a6eb;
  psVar8[0] = 0;
  psVar8[1] = 0;
  psVar8[2] = 0;
  psVar8[3] = 0;
  psVar8[4] = 0;
  psVar8[5] = 0;
  psVar8[6] = 0;
  psVar8[7] = 0;
  sVar16 = *(short *)(iVar10 + 0x2c) + *(short *)(iVar10 + 0x28);
  local_2c = 0;
  *psVar8 = sVar16;
  iVar6 = FUN_00698ff0();
  if (iVar6 == 0) {
    lVar4 = (longlong)(sVar16 * 2) * 0x55555556;
    psVar8[1] = (short)((ulonglong)lVar4 >> 0x20) - (short)(lVar4 >> 0x3f);
  }
  else {
    iVar6 = *(int *)(iVar6 + 0xc) + 5;
    psVar8[1] = ((short)(iVar6 / 10) + (short)(iVar6 >> 0x1f)) -
                (short)((longlong)iVar6 * 0x66666667 >> 0x3f);
  }
  iVar6 = FUN_00698ff0();
  if (iVar6 == 0) {
    *(int *)(psVar8 + 2) = (int)psVar8[1] << 6;
  }
  else {
    *(int *)(psVar8 + 2) = (*(int *)(iVar6 + 0xc) * 0x70800 + 0x8d27) / 0x11a4e;
  }
  iVar6 = FUN_00698ff0();
  if (iVar6 != 0) {
    *(int *)(psVar8 + 6) = (int)*(short *)(iVar6 + 0xc) << 6;
  }
  iVar6 = FUN_00698ff0();
  if (iVar6 == 0) {
    sVar16 = (short)local_2c;
  }
  else {
    sVar16 = *(short *)(iVar6 + 0xc);
  }
  iVar6 = FUN_00698ff0();
  uVar3 = local_1c;
  if (iVar6 != 0) {
    sVar15 = *(short *)(iVar6 + 0xc);
  }
  if (*(int *)(psVar8 + 6) == 0) {
    *(int *)(psVar8 + 6) = *(int *)(psVar8 + 2);
    if (sVar15 != 0) {
      *(int *)(psVar8 + 6) = ((int)sVar15 * *(int *)(psVar8 + 2)) / 0x48;
    }
  }
  if ((sVar16 == 0) || (sVar15 == 0)) {
    *(undefined4 *)(psVar8 + 4) = *(undefined4 *)(psVar8 + 6);
  }
  else {
    *(int *)(psVar8 + 4) = ((int)sVar16 * *(int *)(psVar8 + 6)) / (int)sVar15;
  }
  iVar6 = *(int *)(iVar10 + 0x38);
  uVar7 = FUN_00693a60(local_1c,8,0,*(undefined4 *)(iVar10 + 0x30),0,&local_34);
  puVar5 = local_18;
  local_18[0x24] = uVar7;
  if (local_34 != 0) goto LAB_0069a6eb;
  local_18[0x29] = 0;
  if (*(int *)(iVar10 + 0x30) != 0) {
    piVar13 = (int *)(iVar6 + 4);
    uVar9 = 0;
    do {
      *(int *)(local_18[0x24] + uVar9 * 8) = *piVar13;
      *(short *)(local_18[0x24] + 4 + uVar9 * 8) = (short)uVar9;
      if ((*piVar13 == *(int *)(iVar10 + 0x24)) && (uVar9 != 0xffffffff)) {
        local_18[0x29] = uVar9;
      }
      uVar9 = uVar9 + 1;
      piVar13 = piVar13 + 9;
    } while (uVar9 < *(uint *)(iVar10 + 0x30));
  }
  local_2d = '\0';
  iVar10 = FUN_00698ff0();
  iVar6 = FUN_00698ff0();
  if (((((iVar10 == 0) || (iVar6 == 0)) || (*(int *)(iVar10 + 4) != 1)) ||
      ((*(int *)(iVar6 + 4) != 1 || (*(int *)(iVar10 + 0xc) == 0)))) || (*(int *)(iVar6 + 0xc) == 0)
     ) {
    local_28 = puVar5;
    local_24 = 0x41444f42;
    local_20 = 7;
    local_34 = FUN_00693ed0(&DAT_00723398,0,&local_28,0);
    if (puVar5[9] != 0) {
      puVar5[0x17] = *(undefined4 *)puVar5[10];
    }
    goto LAB_0069a6eb;
  }
  uVar7 = FUN_00691310(uVar3,*(int *)(iVar6 + 0xc),&local_34);
  puVar5[0x21] = uVar7;
  if (local_34 != 0) goto LAB_0069a6eb;
  pcVar11 = (char *)FUN_00691310(uVar3,*(undefined4 *)(iVar10 + 0xc),&local_34);
  puVar5[0x22] = pcVar11;
  if (local_34 != 0) goto LAB_0069a6eb;
  if ((((*pcVar11 != 'i') && (*pcVar11 != 'I')) || ((pcVar11[1] != 's' && (pcVar11[1] != 'S')))) ||
     ((pcVar11[2] != 'o' && (pcVar11[2] != 'O')))) goto LAB_0069a65e;
  pbVar14 = &DAT_007234e0;
  pbVar12 = (byte *)(pcVar11 + 3);
  do {
    bVar2 = *pbVar12;
    bVar17 = bVar2 < *pbVar14;
    if (bVar2 != *pbVar14) {
LAB_0069a5e5:
      iVar10 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
      goto LAB_0069a5ea;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar12[1];
    bVar17 = bVar2 < pbVar14[1];
    if (bVar2 != pbVar14[1]) goto LAB_0069a5e5;
    pbVar12 = pbVar12 + 2;
    pbVar14 = pbVar14 + 2;
  } while (bVar2 != 0);
  iVar10 = 0;
LAB_0069a5ea:
  if (iVar10 != 0) {
    pbVar14 = &DAT_007234d8;
    pbVar12 = (byte *)(pcVar11 + 3);
    do {
      bVar2 = *pbVar12;
      bVar17 = bVar2 < *pbVar14;
      if (bVar2 != *pbVar14) {
LAB_0069a616:
        iVar10 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
        goto LAB_0069a61b;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar12[1];
      bVar17 = bVar2 < pbVar14[1];
      if (bVar2 != pbVar14[1]) goto LAB_0069a616;
      pbVar12 = pbVar12 + 2;
      pbVar14 = pbVar14 + 2;
    } while (bVar2 != 0);
    iVar10 = 0;
LAB_0069a61b:
    if (iVar10 != 0) goto LAB_0069a65e;
    pbVar12 = (byte *)puVar5[0x21];
    pbVar14 = &DAT_007157e0;
    do {
      bVar2 = *pbVar12;
      bVar17 = bVar2 < *pbVar14;
      if (bVar2 != *pbVar14) {
LAB_0069a650:
        iVar10 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
        goto LAB_0069a655;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar12[1];
      bVar17 = bVar2 < pbVar14[1];
      if (bVar2 != pbVar14[1]) goto LAB_0069a650;
      pbVar12 = pbVar12 + 2;
      pbVar14 = pbVar14 + 2;
    } while (bVar2 != 0);
    iVar10 = 0;
LAB_0069a655:
    if (iVar10 != 0) goto LAB_0069a65e;
  }
  local_2d = '\x01';
LAB_0069a65e:
  local_28 = puVar5;
  local_24 = 0;
  local_20 = 0;
  if (local_2d != '\0') {
    local_24 = 0x756e6963;
    local_20 = 0x10003;
  }
  FUN_00693ed0(&DAT_00723398,0,&local_28,0);
  __security_check_cookie(local_4 ^ (uint)&local_34);
  return;
}


/* FUN_0069a730 @ 0069a730  kind=gamemisc  attributed-by=role:artifact  size=187 */

void FUN_0069a730(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int in_EAX;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_8;
  
  puVar1 = *(undefined4 **)(in_EAX + 0x3d8);
  if (0 < *(short *)(in_EAX + 0x3d6)) {
    uVar2 = *puVar1;
    *(undefined4 *)(in_EAX + 0xc) = uVar2;
    *(undefined4 *)(in_EAX + 8) = uVar2;
    iVar6 = puVar1[1];
    piVar5 = puVar1 + 2;
    *(int *)(in_EAX + 0x14) = iVar6;
    *(int *)(in_EAX + 0x10) = iVar6;
    if (piVar5 < puVar1 + *(short *)(in_EAX + 0x3d6) * 2) {
      iVar8 = *(int *)(in_EAX + 8);
      iVar7 = *(int *)(in_EAX + 0xc);
      local_8 = iVar6;
      do {
        iVar3 = *piVar5;
        iVar4 = piVar5[1];
        if (iVar3 < iVar8) {
          *(int *)(in_EAX + 8) = iVar3;
          iVar8 = iVar3;
        }
        if (iVar7 < iVar3) {
          *(int *)(in_EAX + 0xc) = iVar3;
          iVar7 = iVar3;
        }
        if (iVar4 < local_8) {
          *(int *)(in_EAX + 0x10) = iVar4;
          local_8 = iVar4;
        }
        if (iVar6 < iVar4) {
          *(int *)(in_EAX + 0x14) = iVar4;
          iVar6 = iVar4;
        }
        piVar5 = piVar5 + 2;
      } while (piVar5 < puVar1 + *(short *)(in_EAX + 0x3d6) * 2);
    }
    *(int *)(in_EAX + 8) = *(int *)(in_EAX + 8) >> 6;
    *(int *)(in_EAX + 0x10) = *(int *)(in_EAX + 0x10) >> 6;
    *(int *)(in_EAX + 0xc) = *(int *)(in_EAX + 0xc) + 0x3f >> 6;
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 0x3f >> 6;
    return;
  }
  *(undefined4 *)(in_EAX + 0xc) = 0;
  *(undefined4 *)(in_EAX + 8) = 0;
  *(undefined4 *)(in_EAX + 0x14) = 0;
  *(undefined4 *)(in_EAX + 0x10) = 0;
  return;
}


/* FUN_0069b520 @ 0069b520  kind=gamemisc  attributed-by=role:artifact  size=90 */

undefined4 FUN_0069b520(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = setjmp3(param_1 + 0x4f0,0);
  if (iVar1 == 0) {
    uVar2 = FUN_0068ff90(param_1 + 0x3d4,&PTR_LAB_00723508,param_1);
    FUN_0069a860();
    return uVar2;
  }
  return 0x40;
}


/* FUN_0069d450 @ 0069d450  kind=gamemisc  attributed-by=role:artifact  size=312 */

short FUN_0069d450(undefined4 param_1,uint *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  short sVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  param_1 = *param_2 + 1;
  sVar3 = 0;
  if (0xffff < param_1) {
    *param_2 = 0;
    return 0;
  }
  do {
    puVar4 = (undefined1 *)FUN_0069d340();
    if (puVar4 != (undefined1 *)0x0) {
      uVar5 = (uint)CONCAT11(*puVar4,puVar4[1]);
      uVar8 = param_1 & 0xff;
      uVar9 = (uint)CONCAT11(puVar4[6],puVar4[7]);
      if (uVar9 != 0) {
        if (uVar8 < uVar5) {
          uVar7 = 0;
          uVar8 = uVar5;
        }
        else {
          uVar7 = uVar8 - uVar5;
        }
        param_1 = (param_1 & 0xffffff00) + uVar8;
        if (uVar7 < CONCAT11(puVar4[2],puVar4[3])) {
          puVar6 = puVar4 + 6 + uVar9 + uVar7 * 2 + -1;
          do {
            puVar1 = puVar6 + 1;
            puVar2 = puVar6 + 2;
            puVar6 = puVar6 + 2;
            if (CONCAT11(*puVar1,*puVar2) != 0) {
              sVar3 = CONCAT11(*puVar1,*puVar2) + CONCAT11(puVar4[4],puVar4[5]);
              if (sVar3 != 0) {
                *param_2 = param_1;
                return sVar3;
              }
            }
            param_1 = param_1 + 1;
            uVar7 = uVar7 + 1;
          } while (uVar7 < CONCAT11(puVar4[2],puVar4[3]));
        }
      }
    }
    param_1 = (param_1 & 0xffffff00) + 0x100;
  } while (param_1 < 0x10000);
  *param_2 = 0;
  return sVar3;
}


/* FUN_0069dd70 @ 0069dd70  kind=gamemisc  attributed-by=role:artifact  size=1374 */

uint FUN_0069dd70(int *param_1,uint *param_2,char param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  uint local_38;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  undefined1 *local_20;
  char *local_14;
  char *local_10;
  undefined1 *local_c;
  
  iVar8 = param_1[4];
  uVar12 = *param_2;
  uVar4 = CONCAT11(*(undefined1 *)(iVar8 + 6),*(undefined1 *)(iVar8 + 7));
  uVar14 = uVar4 & 0xfffffffe;
  local_24 = 0;
  if ((uVar4 & 0xfffe) == 0) {
    return 0;
  }
  uVar5 = (uint)(uVar4 >> 1);
  local_28 = 0xffff;
  if (param_3 != '\0') {
    uVar12 = uVar12 + 1;
  }
  uVar11 = 0;
  uVar6 = 0;
  local_2c = uVar5;
  if (uVar5 != 0) {
    do {
      uVar6 = local_2c + uVar11 >> 1;
      iVar2 = iVar8 + 0xe + uVar6 * 2;
      local_28 = (uint)CONCAT11(*(undefined1 *)(iVar8 + 0xe + uVar6 * 2),*(undefined1 *)(iVar2 + 1))
      ;
      puVar9 = (undefined1 *)(iVar2 + uVar14 + 2);
      uVar15 = (uint)CONCAT11(*puVar9,*(undefined1 *)(iVar2 + 1 + uVar14 + 2));
      uVar13 = uVar6;
      if (uVar15 <= uVar12) {
        if (uVar12 <= local_28) {
          uVar13 = (int)(short)((short)(char)puVar9[uVar14] << 8) | (uint)(byte)puVar9[uVar14 + 1];
          local_20 = puVar9 + uVar14 * 2;
          uVar11 = (uint)CONCAT11(puVar9[uVar14 * 2],puVar9[uVar14 * 2 + 1]);
          if ((((uVar5 - 1 <= uVar6) && (uVar15 == 0xffff)) && (local_28 == 0xffff)) &&
             ((uVar11 != 0 &&
              ((undefined1 *)(*(int *)(*param_1 + 0x1f8) + *(int *)(*param_1 + 500)) <
               local_20 + uVar11 + 2)))) {
            uVar13 = 1;
            uVar11 = 0;
          }
          if ((*(byte *)(param_1 + 5) & 2) != 0) {
            local_30 = uVar6;
            if (uVar11 == 0xffff) {
              local_30 = uVar6 + 1;
            }
            puVar9 = local_20;
            local_38 = uVar6;
            if (uVar6 == 0) goto LAB_0069dfe1;
            local_14 = (char *)(param_1[4] + 0xc + uVar6 * 2);
            local_10 = (char *)(param_1[4] + 0xe + (uVar6 + uVar14) * 2);
            local_20 = local_14 + uVar14 + 2;
            local_c = (undefined1 *)(param_1[4] + uVar14 * 3 + 0xe + uVar6 * 2);
            goto LAB_0069df34;
          }
          if (uVar11 != 0xffff) goto LAB_0069e22a;
          break;
        }
        uVar11 = uVar6 + 1;
        uVar13 = local_2c;
      }
      local_2c = uVar13;
    } while (uVar11 < local_2c);
  }
  goto LAB_0069e191;
  while( true ) {
    uVar15 = (uint)CONCAT11(*local_20,local_10[1 - uVar14]);
    uVar13 = (int)(short)((short)*local_10 << 8) | (uint)(byte)local_c[1 - uVar14];
    uVar11 = (uint)CONCAT11(*local_c,(local_c + (1 - uVar14))[uVar14]);
    if (uVar11 != 0xffff) {
      local_30 = local_38 - 1;
    }
    local_38 = local_38 - 1;
    local_14 = local_14 + -2;
    local_20 = local_20 + -2;
    local_10 = local_10 + -2;
    puVar9 = local_c;
    local_28 = uVar7;
    local_c = local_c + -2;
    if (local_38 == 0) break;
LAB_0069df34:
    uVar7 = (uint)CONCAT11(*local_14,local_20[1 - (uVar14 + 2)]);
    if (uVar7 < uVar12) break;
  }
LAB_0069dfe1:
  local_20 = puVar9;
  if (local_30 == uVar6 + 1) {
    if (local_38 != uVar6) {
      iVar8 = param_1[4] + 0xe + uVar6 * 2;
      local_28 = (uint)CONCAT11(*(undefined1 *)(param_1[4] + 0xe + uVar6 * 2),
                                *(undefined1 *)(iVar8 + 1));
      iVar2 = iVar8 + 2 + uVar14;
      iVar10 = iVar2 + uVar14;
      uVar15 = (uint)CONCAT11(*(undefined1 *)(iVar8 + 2 + uVar14),
                              *(undefined1 *)(iVar8 + 3 + uVar14));
      local_20 = (undefined1 *)(iVar10 + uVar14);
      uVar13 = (int)(short)((short)*(char *)(iVar2 + uVar14) << 8) | (uint)*(byte *)(iVar10 + 1);
      uVar11 = (uint)CONCAT11(*(undefined1 *)(iVar10 + uVar14),local_20[1]);
    }
    local_38 = uVar6 + 1;
    local_30 = uVar6;
    if (local_38 < uVar5) {
      iVar8 = param_1[4];
      local_10 = (char *)(iVar8 + 0xe + local_38 * 2);
      local_14 = (char *)(iVar8 + 0x10 + (local_38 + uVar14) * 2);
      puVar9 = local_10 + uVar14 + 2;
      local_c = (undefined1 *)(iVar8 + uVar14 * 3 + 0x10 + local_38 * 2);
      do {
        local_20 = puVar9;
        puVar1 = local_20 + (1 - (uVar14 + 2));
        uVar3 = *local_10;
        uVar7 = (uint)CONCAT11(*local_20,local_14[1 - uVar14]);
        if (uVar12 < uVar7) break;
        uVar13 = (int)(short)((short)*local_14 << 8) | (uint)(byte)local_c[1 - uVar14];
        uVar11 = (uint)CONCAT11(*local_c,(local_c + (1 - uVar14))[uVar14]);
        if (uVar11 != 0xffff) {
          local_30 = local_38;
        }
        local_10 = local_10 + 2;
        puVar9 = local_20 + 2;
        local_14 = local_14 + 2;
        local_38 = local_38 + 1;
        local_20 = local_c;
        uVar15 = uVar7;
        local_28 = (uint)CONCAT11(uVar3,*puVar1);
        local_c = local_c + 2;
      } while (local_38 < uVar5);
    }
    local_38 = local_38 - 1;
    bVar16 = local_30 == uVar6;
    uVar6 = local_38;
    if (bVar16) goto LAB_0069e191;
  }
  uVar6 = local_30;
  if (local_30 != local_38) {
    iVar8 = param_1[4] + 0xe + local_30 * 2;
    local_28 = (uint)CONCAT11(*(undefined1 *)(param_1[4] + 0xe + local_30 * 2),
                              *(undefined1 *)(iVar8 + 1));
    iVar2 = iVar8 + 2 + uVar14;
    uVar15 = (uint)CONCAT11(*(undefined1 *)(iVar8 + 2 + uVar14),*(undefined1 *)(iVar2 + 1));
    iVar8 = iVar2 + uVar14;
    uVar13 = (int)(short)((short)*(char *)(iVar2 + uVar14) << 8) | (uint)*(byte *)(iVar8 + 1);
    local_20 = (undefined1 *)(iVar8 + uVar14);
    uVar11 = (uint)CONCAT11(*(undefined1 *)(iVar8 + uVar14),local_20[1]);
  }
LAB_0069e22a:
  if (uVar11 == 0) {
    local_24 = uVar13 + uVar12 & 0xffff;
  }
  else {
    local_24 = (uint)CONCAT11(local_20[uVar11 + (uVar12 - uVar15) * 2],
                              (local_20 + uVar11 + (uVar12 - uVar15) * 2)[1]);
    if (local_24 != 0) {
      local_24 = uVar13 + local_24 & 0xffff;
    }
  }
LAB_0069e191:
  if (param_3 != '\0') {
    if ((local_28 < uVar12) && (uVar6 + 1 == uVar5)) {
      return 0;
    }
    iVar8 = FUN_0069d600();
    if (iVar8 == 0) {
      param_1[6] = uVar12;
      if (local_24 == 0) {
        param_1[6] = uVar12;
        FUN_0069d750();
        local_24 = param_1[7];
      }
      else {
        param_1[7] = local_24;
      }
      if (local_24 != 0) {
        *param_2 = param_1[6];
      }
    }
    else if (local_24 != 0) {
      *param_2 = uVar12;
      return local_24;
    }
  }
  return local_24;
}


/* FUN_0069e3b0 @ 0069e3b0  kind=gamemisc  attributed-by=role:artifact  size=159 */

undefined4 FUN_0069e3b0(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (*(uint *)(param_2 + 4) < param_1 + 10U) {
    FUN_0068f190(param_2,8);
  }
  uVar3 = (uint)CONCAT11(*(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 3));
  iVar5 = param_1 + 9;
  uVar4 = (uint)CONCAT11(*(undefined1 *)(param_1 + 8),*(undefined1 *)(param_1 + 9));
  if ((*(uint *)(param_2 + 4) < uVar3 + param_1) || (uVar3 < uVar4 * 2 + 10)) {
    FUN_0068f190(param_2,8);
  }
  if (0 < *(int *)(param_2 + 8)) {
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      puVar1 = (undefined1 *)(iVar5 + 1);
      puVar2 = (undefined1 *)(iVar5 + 2);
      iVar5 = iVar5 + 2;
      if (*(uint *)(param_2 + 0x50) <= (uint)CONCAT11(*puVar1,*puVar2)) {
        FUN_0068f190(param_2,0x10);
      }
    }
  }
  return 0;
}


/* FUN_0069e550 @ 0069e550  kind=gamemisc  attributed-by=role:artifact  size=708 */

undefined4 FUN_0069e550(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  short sVar6;
  short sVar7;
  uint uVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uStack_c;
  uint uStack_8;
  
  if (*(uint *)(param_2 + 4) < param_1 + 0x2010U) {
    FUN_0068f190(param_2,8);
  }
  uVar8 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_1 + 4),*(undefined1 *)(param_1 + 5)),
                            *(undefined1 *)(param_1 + 6)),*(undefined1 *)(param_1 + 7));
  if (((uint)(*(int *)(param_2 + 4) - param_1) < uVar8) || (uVar8 < 0x2010)) {
    FUN_0068f190(param_2,8);
  }
  iVar12 = param_1 + 0x200c;
  puVar11 = (undefined1 *)(param_1 + 0x200f);
  puVar9 = (undefined1 *)(param_1 + 0x200d);
  iVar10 = param_1 + 0x200e;
  uVar8 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_1 + 0x200c),
                                     *(undefined1 *)(param_1 + 0x200d)),
                            *(undefined1 *)(param_1 + 0x200e)),*puVar11);
  if (*(uint *)(param_2 + 4) < param_1 + 0x2010 + uVar8 * 0xc) {
    FUN_0068f190(param_2,8);
  }
  uStack_8 = 0;
  uStack_c = 0;
  if (uVar8 != 0) {
    do {
      sVar6 = CONCAT11(*(undefined1 *)(iVar12 + 4),puVar9[4]);
      uVar15 = CONCAT31(CONCAT21(sVar6,*(undefined1 *)(iVar10 + 4)),puVar11[4]);
      sVar7 = CONCAT11(*(undefined1 *)(iVar12 + 8),puVar9[8]);
      puVar1 = puVar11 + 8;
      puVar11 = puVar11 + 0xc;
      uVar14 = CONCAT31(CONCAT21(sVar7,*(undefined1 *)(iVar10 + 8)),*puVar1);
      uVar2 = *(undefined1 *)(iVar12 + 0xc);
      iVar12 = iVar12 + 0xc;
      puVar9 = puVar9 + 0xc;
      uVar3 = *puVar9;
      uVar4 = *(undefined1 *)(iVar10 + 0xc);
      iVar10 = iVar10 + 0xc;
      uVar5 = *puVar11;
      if (uVar14 < uVar15) {
        FUN_0068f190(param_2,8);
      }
      if ((uStack_c != 0) && (uVar15 <= uStack_8)) {
        FUN_0068f190(param_2,8);
      }
      if (0 < *(int *)(param_2 + 8)) {
        if (*(uint *)(param_2 + 0x50) <=
            (CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),uVar5) - uVar15) + uVar14) {
          FUN_0068f190(param_2,0x10);
        }
        iVar13 = (uVar14 - uVar15) + 1;
        if (sVar6 == 0) {
          if (sVar7 != 0) {
            FUN_0068f190(param_2,8);
          }
          for (; iVar13 != 0; iVar13 = iVar13 + -1) {
            if ((*(byte *)(((uVar15 & 0xffff) >> 3) + 0xc + param_1) &
                (byte)(0x80 >> ((byte)(uVar15 & 0xffff) & 7))) != 0) {
              FUN_0068f190(param_2,8);
            }
            uVar15 = uVar15 + 1;
          }
        }
        else {
          for (; iVar13 != 0; iVar13 = iVar13 + -1) {
            if ((*(byte *)((uVar15 >> 0x13) + 0xc + param_1) &
                (byte)(0x80 >> ((byte)(uVar15 >> 0x10) & 7))) == 0) {
              FUN_0068f190(param_2,8);
            }
            if ((*(byte *)(((uVar15 & 0xffff) >> 3) + 0xc + param_1) &
                (byte)(0x80 >> ((byte)(uVar15 & 0xffff) & 7))) == 0) {
              FUN_0068f190(param_2,8);
            }
            uVar15 = uVar15 + 1;
          }
        }
      }
      uStack_c = uStack_c + 1;
      uStack_8 = uVar14;
    } while (uStack_c < uVar8);
  }
  return 0;
}


/* FUN_0069f450 @ 0069f450  kind=gamemisc  attributed-by=role:artifact  size=360 */

int FUN_0069f450(int param_1,uint *param_2,char param_3)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint local_10;
  uint local_c;
  uint local_8;
  
  iVar2 = *(int *)(param_1 + 0x10);
  local_10 = *param_2;
  iVar5 = 0;
  uVar7 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar2 + 0xc),*(undefined1 *)(iVar2 + 0xd)),
                            *(undefined1 *)(iVar2 + 0xe)),*(undefined1 *)(iVar2 + 0xf));
  if (uVar7 == 0) {
    return 0;
  }
  uVar4 = 0xffffffff;
  if (param_3 != '\0') {
    local_10 = local_10 + 1;
  }
  local_c = 0;
  uVar6 = 0;
  local_8 = uVar7;
  if (uVar7 != 0) {
    do {
      uVar6 = local_8 + local_c >> 1;
      puVar1 = (undefined1 *)(iVar2 + 0x14 + uVar6 * 0xc);
      uVar4 = CONCAT31(CONCAT21(CONCAT11(*puVar1,*(undefined1 *)(iVar2 + 0x15 + uVar6 * 0xc)),
                                puVar1[2]),puVar1[3]);
      uVar3 = uVar6;
      if (CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar2 + 0x10 + uVar6 * 0xc),
                                     *(undefined1 *)(iVar2 + 0x11 + uVar6 * 0xc)),puVar1[-2]),
                   puVar1[-1]) <= local_10) {
        if (local_10 <= uVar4) {
          iVar5 = CONCAT31(CONCAT21(CONCAT11(puVar1[4],puVar1[5]),puVar1[6]),puVar1[7]);
          goto LAB_0069f558;
        }
        local_c = uVar6 + 1;
        uVar3 = local_8;
      }
      local_8 = uVar3;
    } while (local_c < local_8);
    iVar5 = 0;
  }
LAB_0069f558:
  if (param_3 != '\0') {
    if ((uVar4 < local_10) && (uVar6 = uVar6 + 1, uVar6 == uVar7)) {
      return 0;
    }
    *(undefined1 *)(param_1 + 0x18) = 1;
    *(uint *)(param_1 + 0x1c) = local_10;
    *(uint *)(param_1 + 0x24) = uVar6;
    if (iVar5 == 0) {
      FUN_0069f380();
      if (*(char *)(param_1 + 0x18) == '\0') {
        return 0;
      }
      iVar5 = *(int *)(param_1 + 0x20);
    }
    else {
      *(int *)(param_1 + 0x20) = iVar5;
    }
    if (iVar5 != 0) {
      *param_2 = *(uint *)(param_1 + 0x1c);
    }
  }
  return iVar5;
}


/* FUN_0069f720 @ 0069f720  kind=gamemisc  attributed-by=role:artifact  size=803 */

undefined4 FUN_0069f720(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined1 *puVar12;
  int iVar13;
  uint uVar14;
  undefined1 *puVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  undefined1 *puVar19;
  uint local_28;
  uint local_24;
  uint uStack_20;
  
  puVar10 = (undefined1 *)(param_1 + 6);
  puVar12 = (undefined1 *)(param_1 + 7);
  puVar8 = (undefined1 *)(param_1 + 8);
  uVar9 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 3)),
                            *(undefined1 *)(param_1 + 4)),*(undefined1 *)(param_1 + 5));
  puVar7 = (undefined1 *)(param_1 + 9);
  iVar13 = CONCAT31(CONCAT21(CONCAT11(*puVar10,*puVar12),*puVar8),*puVar7);
  if (((uint)(*(int *)(param_2 + 4) - param_1) < uVar9) || (uVar9 < iVar13 * 0xb + 10U)) {
    FUN_0068f190(param_2,8);
  }
  local_24 = 1;
  for (; iVar13 != 0; iVar13 = iVar13 + -1) {
    uVar17 = (uint)CONCAT21(CONCAT11(puVar12[3],puVar8[3]),puVar7[3]);
    puVar15 = puVar10 + 7;
    puVar10 = puVar10 + 0xb;
    uVar14 = CONCAT31(CONCAT21(CONCAT11(*puVar15,puVar12[7]),puVar8[7]),puVar7[7]);
    puVar12 = puVar12 + 0xb;
    puVar8 = puVar8 + 0xb;
    puVar7 = puVar7 + 0xb;
    uVar11 = CONCAT31(CONCAT21(CONCAT11(*puVar10,*puVar12),*puVar8),*puVar7);
    if ((uVar9 <= uVar14) || (uVar9 <= uVar11)) {
      FUN_0068f190(param_2,8);
    }
    if (uVar17 < local_24) {
      FUN_0068f190(param_2,8);
    }
    local_24 = uVar17 + 1;
    if (uVar14 != 0) {
      puVar15 = (undefined1 *)(uVar14 + 4 + param_1);
      iVar18 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(uVar14 + param_1),
                                          *(undefined1 *)(uVar14 + 1 + param_1)),
                                 *(undefined1 *)(uVar14 + 2 + param_1)),puVar15[-1]);
      local_28 = 0;
      if (*(undefined1 **)(param_2 + 4) < puVar15 + iVar18 * 4) {
        FUN_0068f190(param_2,8);
      }
      for (; iVar18 != 0; iVar18 = iVar18 + -1) {
        uVar17 = (uint)CONCAT21(CONCAT11(*puVar15,puVar15[1]),puVar15[2]);
        uVar14 = (byte)puVar15[3] + uVar17;
        puVar15 = puVar15 + 4;
        if (0x10ffff < uVar14) {
          FUN_0068f190(param_2,8);
        }
        if (uVar17 < local_28) {
          FUN_0068f190(param_2,8);
        }
        local_28 = uVar14 + 1;
      }
    }
    if (uVar11 != 0) {
      iVar4 = uVar11 + 4 + param_1;
      puVar15 = (undefined1 *)(iVar4 + -3);
      puVar19 = (undefined1 *)(iVar4 + -2);
      iVar18 = iVar4 + -1;
      iVar16 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(uVar11 + param_1),*puVar15),
                                 *(undefined1 *)(iVar4 + -2)),*(undefined1 *)(iVar4 + -1));
      uVar11 = *(int *)(param_2 + 4) - iVar4;
      uStack_20 = 0;
      if (uVar11 <= (uint)(iVar16 * 4) && iVar16 * 4 - uVar11 != 0) {
        FUN_0068f190(param_2,8);
      }
      for (; iVar16 != 0; iVar16 = iVar16 + -1) {
        puVar1 = puVar15 + 3;
        puVar2 = puVar19 + 3;
        puVar3 = (undefined1 *)(iVar18 + 3);
        puVar15 = puVar15 + 5;
        puVar19 = puVar19 + 5;
        uVar5 = *puVar19;
        uVar6 = *(undefined1 *)(iVar18 + 5);
        iVar18 = iVar18 + 5;
        uVar11 = (uint)CONCAT21(CONCAT11(*puVar1,*puVar2),*puVar3);
        if (0x10ffff < uVar11) {
          FUN_0068f190(param_2,8);
        }
        if (uVar11 < uStack_20) {
          FUN_0068f190(param_2,8);
        }
        uStack_20 = uVar11 + 1;
        if ((0 < *(int *)(param_2 + 8)) &&
           (*(uint *)(param_2 + 0x50) <= (uint)CONCAT11(uVar5,uVar6))) {
          FUN_0068f190(param_2,0x10);
        }
      }
    }
  }
  return 0;
}


/* FUN_006adad0 @ 006adad0  kind=gamemisc  attributed-by=role:artifact  size=415 */

undefined4 FUN_006adad0(undefined4 param_1,int param_2)

{
  byte bVar1;
  char *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined4 uVar9;
  byte *pbVar10;
  bool bVar11;
  int local_c [3];
  
  iVar4 = FUN_006ad550();
  if (iVar4 != 0) {
    FUN_006ad990(param_2);
    iVar4 = param_2 + 0x84;
    iVar5 = FUN_006cf6b0(iVar4,param_1);
    if (((char)iVar5 == '\a') ||
       ((iVar5 != 0 && ((iVar5 = FUN_006cd080(iVar4,param_1), (char)iVar5 == '\a' || (iVar5 != 0))))
       )) {
LAB_006adb2d:
      FUN_006ad990(param_2);
      return 2;
    }
    *(undefined4 *)(param_2 + 0xac) = param_1;
    *(int *)(param_2 + 0x68) = iVar4;
    iVar4 = FUN_006ad550();
    if (iVar4 != 0) goto LAB_006adb2d;
  }
  pcVar2 = *(char **)(param_2 + 0xb4);
  bVar11 = false;
  bVar3 = false;
  if (((((pcVar2 == (char *)0x0) ||
        (pbVar8 = *(byte **)(param_2 + 0xb0), bVar3 = bVar11, pbVar8 == (byte *)0x0)) ||
       ((*pcVar2 != 'i' && (*pcVar2 != 'I')))) || ((pcVar2[1] != 's' && (pcVar2[1] != 'S')))) ||
     ((pcVar2[2] != 'o' && (pcVar2[2] != 'O')))) goto LAB_006adc2c;
  pbVar7 = (byte *)(pcVar2 + 3);
  pbVar10 = &DAT_007234e0;
  pbVar6 = pbVar7;
  do {
    bVar1 = *pbVar6;
    bVar11 = bVar1 < *pbVar10;
    if (bVar1 != *pbVar10) {
LAB_006adbc0:
      iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_006adbc5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar6[1];
    bVar11 = bVar1 < pbVar10[1];
    if (bVar1 != pbVar10[1]) goto LAB_006adbc0;
    pbVar6 = pbVar6 + 2;
    pbVar10 = pbVar10 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_006adbc5:
  if (iVar4 != 0) {
    pbVar6 = &DAT_007234d8;
    do {
      bVar1 = *pbVar7;
      bVar11 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_006adbf0:
        iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
        goto LAB_006adbf5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar7[1];
      bVar11 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_006adbf0;
      pbVar7 = pbVar7 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_006adbf5:
    if (iVar4 != 0) goto LAB_006adc2c;
    pbVar7 = &DAT_007157e0;
    do {
      bVar1 = *pbVar8;
      bVar11 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_006adc20:
        iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
        goto LAB_006adc25;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar8[1];
      bVar11 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_006adc20;
      pbVar8 = pbVar8 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_006adc25:
    if (iVar4 != 0) goto LAB_006adc2c;
  }
  bVar3 = true;
LAB_006adc2c:
  local_c[0] = param_2;
  local_c[1] = 0;
  local_c[2] = 0;
  if (bVar3) {
    local_c[1] = 0x756e6963;
    local_c[2] = 0x10003;
  }
  uVar9 = FUN_00693ed0(&DAT_007332c4,0,local_c,0);
  return uVar9;
}


/* FUN_006ae0f0 @ 006ae0f0  kind=gamemisc  attributed-by=role:artifact  size=1770 */

void FUN_006ae0f0(uint param_1)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint *in_ECX;
  ushort uVar8;
  int iVar9;
  uint *puVar10;
  undefined1 auStack_bc [4];
  int local_b8;
  uint *local_b4;
  int local_b0;
  short local_ac;
  ushort local_aa;
  uint local_a8;
  short local_a4;
  ushort local_a2;
  ushort local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  int local_90;
  undefined1 local_8c [4];
  uint local_88;
  int local_84;
  uint local_80;
  undefined1 local_7c [4];
  int local_78;
  undefined1 local_74 [8];
  int local_6c;
  int local_64;
  int local_60;
  short local_5c;
  ushort local_5a;
  short local_58;
  short local_56;
  int local_54;
  undefined1 local_4c [12];
  ushort local_40;
  ushort local_3e;
  undefined1 local_3c [12];
  ushort local_30;
  ushort local_2e;
  undefined1 local_2c [12];
  ushort local_20;
  ushort local_1e;
  int local_1c;
  undefined4 local_18;
  uint local_c;
  
  local_c = DAT_0076aa78 ^ (uint)auStack_bc;
  local_9c = in_ECX[0x19];
  uVar2 = in_ECX[0x1a];
  in_ECX[0x21] = 0;
  local_b4 = in_ECX;
  local_b8 = FUN_006908c0(uVar2,0);
  if ((local_b8 != 0) || (iVar4 = FUN_00692010(uVar2,&DAT_00733390,&local_ac), iVar4 != 0))
  goto LAB_006ae7c5;
  local_b8 = 2;
  if (local_ac == 0x5a4d) {
    local_b8 = FUN_006908c0(uVar2,local_aa);
    if ((local_b8 != 0) || (iVar4 = FUN_00692010(uVar2,&DAT_007333a4,&local_a4), iVar4 != 0))
    goto LAB_006ae7c5;
    local_b8 = 2;
    if (local_a4 == 0x454e) {
      local_b0 = 0;
      local_b8 = FUN_006908c0(uVar2,(uint)local_a2 + (uint)local_aa);
      if ((local_b8 != 0) ||
         (local_b8 = FUN_00691f30(uVar2,(uint)local_a0 - (uint)local_a2), local_b8 != 0))
      goto LAB_006ae7c5;
      local_a8 = FUN_00690a70(uVar2);
      local_a8 = local_a8 & 0xffff;
      sVar3 = FUN_00690a70(uVar2);
      while (uVar5 = 0, sVar3 != 0) {
        uVar5 = FUN_00690a70(uVar2);
        uVar5 = uVar5 & 0xffff;
        if (sVar3 == -0x7ff8) {
          iVar4 = FUN_00690930(uVar2);
          local_b0 = iVar4 + 4 + (*(int *)(uVar2 + 0x20) - *(int *)(uVar2 + 0x24));
          break;
        }
        *(int *)(uVar2 + 0x20) = *(int *)(uVar2 + 0x20) + uVar5 * 0xc + 4;
        sVar3 = FUN_00690a70();
      }
      FUN_00691fe0(uVar2);
      puVar10 = local_b4;
      iVar4 = local_b8;
      if ((((short)uVar5 == 0) || (local_b0 == 0)) ||
         (*(uint *)(uVar2 + 4) <= uVar5 * 0x76 && uVar5 * 0x76 - *(uint *)(uVar2 + 4) != 0))
      goto LAB_006ae441;
      *local_b4 = uVar5;
      if ((int)uVar5 <= (int)param_1) goto LAB_006ae2af;
      if ((int)param_1 < 0) goto LAB_006ae7c5;
      uVar5 = FUN_00692230(local_9c,0xac,&local_b8);
      puVar10[0x21] = uVar5;
      if (local_b8 != 0) goto LAB_006ae7c5;
      local_b8 = FUN_006908c0(uVar2,local_b0 + param_1 * 0xc);
      if ((local_b8 != 0) || (local_b8 = FUN_00691f30(uVar2,0xc), uVar5 = local_a8, local_b8 != 0))
      goto LAB_006ae7ba;
      uVar6 = FUN_00690a70(uVar2);
      *(uint *)local_b4[0x21] = (uVar6 & 0xffff) << ((byte)uVar5 & 0x1f);
      uVar6 = FUN_00690a70(uVar2);
      *(uint *)(local_b4[0x21] + 0xa4) = (uVar6 & 0xffff) << ((byte)uVar5 & 0x1f);
      *(int *)(uVar2 + 0x20) = *(int *)(uVar2 + 0x20) + 8;
      FUN_00691fe0(uVar2);
      local_b8 = FUN_006ae030();
      puVar10 = local_b4;
    }
    else {
      puVar10 = in_ECX;
      if (local_a4 == 0x4550) {
        local_b8 = FUN_006908c0(uVar2,local_aa);
        if ((local_b8 == 0) &&
           (local_b8 = FUN_00692010(uVar2,&DAT_007333bc,&local_60), local_b8 == 0)) {
          iVar4 = 0;
          if ((local_60 == 0x4550) &&
             (((local_5c == 0x14c && (local_58 == 0xe0)) && (local_56 == 0x10b)))) {
            *in_ECX = 0;
            uVar8 = 0;
            if (local_5a != 0) {
              do {
                local_b8 = 0;
                local_b8 = FUN_00692010(uVar2,&DAT_007333f0,local_74);
                if (local_b8 != 0) goto LAB_006ae7c5;
                if (local_54 == local_6c) {
                  local_b8 = FUN_006908c0(uVar2,local_64);
                  if ((local_b8 != 0) ||
                     (local_b8 = FUN_00692010(uVar2,&DAT_00733410,local_4c), local_b8 != 0))
                  goto LAB_006ae7c5;
                  local_b0 = local_64;
                  local_a8 = 0;
                  puVar10 = local_b4;
                  if ((uint)local_3e + (uint)local_40 == 0) goto LAB_006ae79d;
                  uVar5 = 0;
                  local_b8 = 0;
                  goto LAB_006ae4bc;
                }
                uVar8 = uVar8 + 1;
                iVar4 = 0;
              } while (uVar8 < local_5a);
            }
          }
          goto LAB_006ae441;
        }
        goto LAB_006ae7c5;
      }
    }
    goto LAB_006ae79d;
  }
  goto LAB_006ae7ba;
  while( true ) {
    iVar4 = 0;
    if (-1 < (int)local_80) goto LAB_006ae441;
    local_80 = local_80 & 0x7fffffff;
    iVar9 = local_80 + local_64;
    local_90 = iVar9;
    local_b8 = FUN_006908c0(uVar2,iVar9);
    if ((local_b8 != 0) || (local_b8 = FUN_00692010(uVar2,&DAT_00733410,local_3c), local_b8 != 0))
    goto LAB_006ae7c5;
    local_94 = 0;
    if ((uint)local_2e + (uint)local_30 != 0) {
      uVar5 = 0;
      local_b8 = 0;
      local_94 = 0;
      do {
        local_b8 = FUN_006908c0(uVar2,iVar9 + 0x10 + uVar5 * 8);
        if ((local_b8 != 0) ||
           (local_b8 = FUN_00692010(uVar2,&DAT_00733430,local_8c), local_b8 != 0))
        goto LAB_006ae7c5;
        iVar4 = 0;
        if (-1 < (int)local_88) goto LAB_006ae441;
        local_88 = local_88 & 0x7fffffff;
        iVar1 = local_88 + local_64;
        local_b8 = FUN_006908c0(uVar2,iVar1);
        if ((local_b8 != 0) ||
           (local_b8 = FUN_00692010(uVar2,&DAT_00733410,local_2c), local_b8 != 0))
        goto LAB_006ae7c5;
        local_98 = 0;
        if ((uint)local_1e + (uint)local_20 != 0) {
          uVar5 = 0;
          local_b8 = 0;
          local_98 = 0;
          do {
            local_b8 = FUN_006908c0(uVar2,iVar1 + 0x10 + uVar5 * 8);
            if ((local_b8 != 0) ||
               (local_b8 = FUN_00692010(uVar2,&DAT_00733430,local_7c), local_b8 != 0))
            goto LAB_006ae7c5;
            iVar4 = 0;
            if ((local_88 & 0x80000000) != 0) goto LAB_006ae441;
            if (local_84 == 8) {
              local_b8 = FUN_006908c0(uVar2,local_78 + local_b0);
              if ((local_b8 != 0) ||
                 (local_b8 = FUN_00692010(uVar2,&DAT_00733440,&local_1c), puVar10 = local_b4,
                 local_b8 != 0)) goto LAB_006ae7c5;
              if (param_1 == *local_b4) {
                piVar7 = (int *)FUN_00692230(local_9c,0xac,&local_b8);
                puVar10[0x21] = (uint)piVar7;
                if (local_b8 != 0) goto LAB_006ae7c5;
                *piVar7 = (local_1c - local_6c) + local_64;
                *(undefined4 *)(puVar10[0x21] + 0xa4) = local_18;
                local_b8 = FUN_006ae030();
                if (local_b8 != 0) goto LAB_006ae7ba;
              }
              *puVar10 = *puVar10 + 1;
            }
            local_98 = local_98 + 1;
            uVar5 = local_98 & 0xffff;
            iVar9 = local_90;
          } while (uVar5 < (uint)local_1e + (uint)local_20);
        }
        local_94 = local_94 + 1;
        uVar5 = local_94 & 0xffff;
      } while (uVar5 < (uint)local_2e + (uint)local_30);
    }
    local_a8 = local_a8 + 1;
    uVar5 = local_a8 & 0xffff;
    puVar10 = local_b4;
    if ((uint)local_3e + (uint)local_40 <= uVar5) break;
LAB_006ae4bc:
    local_b8 = FUN_006908c0(uVar2,local_b0 + 0x10 + uVar5 * 8);
    if ((local_b8 != 0) || (local_b8 = FUN_00692010(uVar2,&DAT_00733430,&local_84), local_b8 != 0))
    goto LAB_006ae7c5;
  }
LAB_006ae79d:
  iVar4 = local_b8;
  if (*puVar10 == 0) {
LAB_006ae441:
    local_b8 = iVar4;
    __security_check_cookie(local_c ^ (uint)auStack_bc);
    return;
  }
  if ((int)*puVar10 <= (int)param_1) {
LAB_006ae2af:
    __security_check_cookie(local_c ^ (uint)auStack_bc);
    return;
  }
  if (local_b8 == 0) goto LAB_006ae7c5;
LAB_006ae7ba:
  FUN_006adfd0();
LAB_006ae7c5:
  __security_check_cookie(local_c ^ (uint)auStack_bc);
  return;
}


/* FUN_006af4b0 @ 006af4b0  kind=gamemisc  attributed-by=role:artifact  size=243 */

void FUN_006af4b0(int param_1,int param_2)

{
  undefined2 extraout_var;
  int iVar1;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  uint uStack_10;
  int iStack_c;
  int iStack_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_1c;
  (**(code **)(param_2 + 0x34))(param_2,6,&local_1c,3);
  iVar1 = (uStack_10 ^ (int)uStack_10 >> 0x1f) - ((int)uStack_10 >> 0x1f);
  FUN_0068ec40(0x3e80000,iVar1);
  *(undefined2 *)(param_1 + 0x44) = extraout_var;
  if (iVar1 != 0x10000) {
    local_1c = FUN_0068ec40(local_1c,iVar1);
    uStack_18 = FUN_0068ec40(uStack_18,iVar1);
    uStack_14 = FUN_0068ec40(uStack_14,iVar1);
    iStack_c = FUN_0068ec40(iStack_c,iVar1);
    iStack_8 = FUN_0068ec40(iStack_8,iVar1);
    uStack_10 = 0x10000;
  }
  *(undefined4 *)(param_1 + 0x1b4) = local_1c;
  *(uint *)(param_1 + 0x1c0) = uStack_10;
  *(undefined4 *)(param_1 + 0x1bc) = uStack_18;
  *(undefined4 *)(param_1 + 0x1b8) = uStack_14;
  *(int *)(param_1 + 0x1c4) = iStack_c >> 0x10;
  *(int *)(param_1 + 0x1c8) = iStack_8 >> 0x10;
  __security_check_cookie(local_4 ^ (uint)&local_1c);
  return;
}


/* FUN_006af5b0 @ 006af5b0  kind=gamemisc  attributed-by=role:artifact  size=802 */

void FUN_006af5b0(int param_1,int *param_2)

{
  byte *pbVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  byte extraout_CL;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  int iStack_10;
  byte *local_c;
  uint uStack_8;
  undefined4 *local_4;
  
  local_4 = *(undefined4 **)(param_1 + 0x1e8);
  pbVar1 = (byte *)param_2[2];
  local_c = pbVar1;
  (*(code *)param_2[7])(param_2);
  pbVar9 = (byte *)*param_2;
  if (pbVar9 < pbVar1) {
    bVar6 = *pbVar9;
    if ((bVar6 - 0x30 < 10) || (bVar6 == 0x5b)) {
      iVar3 = param_2[4];
      if (bVar6 != 0x5b) {
        uStack_8 = (*(code *)param_2[9])(param_2);
      }
      else {
        uStack_8 = 0x100;
        *param_2 = (int)(pbVar9 + 1);
      }
      uVar8 = uStack_8;
      bVar2 = bVar6 == 0x5b;
      (*(code *)param_2[7])(param_2);
      if ((byte *)*param_2 < local_c) {
        *(uint *)(param_1 + 0x174) = uVar8;
        param_2[0x16] = uVar8;
        uVar4 = FUN_00693a60(iVar3,2,0,uVar8,0,&iStack_10);
        *(undefined4 *)(param_1 + 0x180) = uVar4;
        if (iStack_10 == 0) {
          uVar4 = FUN_00693a60(iVar3,4,0,uVar8,0,&iStack_10);
          *(undefined4 *)(param_1 + 0x184) = uVar4;
          if ((iStack_10 == 0) &&
             (iStack_10 = (**(code **)*local_4)(param_2 + 0x17,uVar8,iVar3), iStack_10 == 0)) {
            uVar7 = 0;
            iStack_10 = 0;
            if (uVar8 != 0) {
              do {
                (*(code *)param_2[0x22])(param_2 + 0x17,uVar7,".notdef",8);
                uVar7 = uVar7 + 1;
              } while (uVar7 < uVar8);
            }
            uVar8 = 0;
            local_4 = (undefined4 *)0x0;
            (*(code *)param_2[7])(param_2);
            if ((byte *)*param_2 < local_c) {
              while( true ) {
                pbVar9 = (byte *)*param_2;
                bVar6 = *pbVar9;
                if ((((bVar6 == 100) && (pbVar9 + 3 < local_c)) && (pbVar9[1] == 0x65)) &&
                   ((pbVar9[2] == 0x66 && (iVar3 = FUN_006af480(), bVar6 = extraout_CL, iVar3 != 0))
                   )) {
                  *(undefined4 *)(param_1 + 0x170) = 1;
                  *param_2 = (int)(pbVar9 + 3);
                  return;
                }
                if (bVar6 == 0x5d) break;
                uVar7 = uVar8;
                if (bVar6 - 0x30 < 10) {
                  if (!bVar2) {
                    uVar7 = (*(code *)param_2[9])(param_2);
                    (*(code *)param_2[7])(param_2);
                  }
LAB_006af80c:
                  pbVar9 = (byte *)*param_2;
                  if (((*pbVar9 == 0x2f) && (pbVar9 + 2 < local_c)) && (uVar8 < uStack_8)) {
                    pbVar9 = pbVar9 + 1;
                    *param_2 = (int)pbVar9;
                    (*(code *)param_2[8])(param_2);
                    if (param_2[3] != 0) {
                      return;
                    }
                    iVar3 = *param_2;
                    iVar5 = (*(code *)param_2[0x22])
                                      (param_2 + 0x17,uVar7,pbVar9,(iVar3 - (int)pbVar9) + 1);
                    param_2[3] = iVar5;
                    if (iVar5 != 0) {
                      return;
                    }
                    uVar8 = (int)local_4 + 1;
                    *(undefined1 *)(*(int *)(param_2[0x1d] + uVar7 * 4) + (iVar3 - (int)pbVar9)) = 0
                    ;
                    local_4 = (undefined4 *)uVar8;
                  }
                }
                else {
                  if (bVar2) goto LAB_006af80c;
                  (*(code *)param_2[8])(param_2);
                  if (param_2[3] != 0) {
                    return;
                  }
                }
                (*(code *)param_2[7])(param_2);
                if (local_c <= (byte *)*param_2) {
                  *(undefined4 *)(param_1 + 0x170) = 1;
                  *param_2 = (int)pbVar9;
                  return;
                }
              }
              pbVar9 = pbVar9 + 1;
            }
            *(undefined4 *)(param_1 + 0x170) = 1;
            *param_2 = (int)pbVar9;
            return;
          }
        }
        param_2[3] = iStack_10;
      }
      return;
    }
    if ((pbVar9 + 0x11 < pbVar1) &&
       (iVar3 = strncmp((char *)pbVar9,"StandardEncoding",0x10), iVar3 == 0)) {
      *(undefined4 *)(param_1 + 0x170) = 2;
      return;
    }
    if ((pbVar9 + 0xf < pbVar1) &&
       (iVar3 = strncmp((char *)pbVar9,"ExpertEncoding",0xe), iVar3 == 0)) {
      *(undefined4 *)(param_1 + 0x170) = 4;
      return;
    }
    if ((pbVar9 + 0x12 < pbVar1) &&
       (iVar3 = strncmp((char *)pbVar9,"ISOLatin1Encoding",0x11), iVar3 == 0)) {
      *(undefined4 *)(param_1 + 0x170) = 3;
      return;
    }
  }
  param_2[3] = 3;
  return;
}


/* FUN_006af8e0 @ 006af8e0  kind=gamemisc  attributed-by=role:artifact  size=998 */

void FUN_006af8e0(int param_1,uint *param_2)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uStack_30;
  int local_2c;
  uint uStack_28;
  uint uStack_24;
  uint local_20;
  int iStack_1c;
  int iStack_18;
  byte *pbStack_14;
  char *local_10;
  int iStack_c;
  uint uStack_8;
  int iStack_4;
  
  local_20 = param_2[4];
  pcVar3 = (char *)param_2[2];
  uVar13 = 0;
  uVar12 = 0;
  local_2c = 0;
  bVar5 = false;
  local_10 = pcVar3;
  (*(code *)param_2[7])(param_2);
  pcVar4 = (char *)*param_2;
  if ((pcVar4 < pcVar3) && (cVar1 = *pcVar4, *param_2 = (uint)(pcVar4 + 1), cVar1 == '[')) {
    (*(code *)param_2[7])(param_2);
    uVar10 = 0;
    iStack_18 = 0;
    uStack_28 = 0;
    iStack_c = 0;
    uStack_24 = 0;
    if ((char *)*param_2 < local_10) {
      do {
        pbStack_14 = (byte *)*param_2;
        bVar2 = *pbStack_14;
        if (bVar2 == 0x5d) {
          *param_2 = *param_2 + 1;
          goto LAB_006afcac;
        }
        if (bVar2 == 0x3c) {
          (*(code *)param_2[8])(param_2);
          if (param_2[3] != 0) goto LAB_006afcac;
          iVar11 = (int)((*param_2 - (int)pbStack_14) + -1) / 2;
          local_2c = FUN_00693a60(local_20,1,iStack_c,iVar11,local_2c,&uStack_30);
          if (uStack_30 != 0) goto LAB_006afca9;
          *param_2 = (uint)pbStack_14;
          bVar5 = true;
          (*(code *)param_2[0xb])(param_2,local_2c,iVar11,&uStack_8,1);
          uStack_28 = uStack_8;
          uVar10 = uStack_24;
          iStack_c = iVar11;
        }
        else if (bVar2 - 0x30 < 10) {
          if (!bVar5) {
            uStack_28 = (*(code *)param_2[9])(param_2);
            (*(code *)param_2[8])(param_2);
            if (param_2[3] != 0) {
              return;
            }
            local_2c = *param_2 + 1;
            pcVar3 = (char *)(*param_2 + 1 + uStack_28);
            *param_2 = (uint)pcVar3;
            if (pcVar3 < local_10) goto LAB_006afa51;
          }
          uStack_30 = 3;
          goto LAB_006afca9;
        }
LAB_006afa51:
        if (local_2c == 0) {
LAB_006afc9c:
          uStack_30 = 3;
          goto LAB_006afca9;
        }
        if (*(char *)((uStack_28 - 1) + local_2c) == '\0') {
          uVar8 = uStack_28 & 0x80000001;
          if ((int)uVar8 < 0) {
            uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
          }
          if (uVar8 == 1) {
            uStack_28 = uStack_28 - 1;
          }
        }
        if (uStack_28 == 0) goto LAB_006afc9c;
        pbStack_14 = (byte *)0x0;
        if (0 < (int)uStack_28) {
          do {
            if (iStack_18 == 0) {
              iVar11 = *(int *)(param_1 + 0x1ec);
              if (0xb < uVar10) {
                uVar12 = (uint)*(byte *)(iVar11 + 4) * 0x10 + (uint)*(byte *)(iVar11 + 5);
                uVar13 = uVar12 * 0x10 + 0xc;
                iStack_18 = 1;
                uVar7 = FUN_00693a60(local_20,1,0xc,uVar13,iVar11,&uStack_30);
                *(undefined4 *)(param_1 + 0x1ec) = uVar7;
                if (uStack_30 == 0) goto LAB_006afb1d;
                goto LAB_006afca9;
              }
              *(byte *)(uVar10 + iVar11) = pbStack_14[local_2c];
LAB_006afc4d:
              uVar10 = uVar10 + 1;
              uStack_24 = uVar10;
            }
            else {
              if (iStack_18 == 1) {
LAB_006afb1d:
                if (uVar10 < uVar13) {
LAB_006afc3d:
                  *(byte *)(uVar10 + *(int *)(param_1 + 0x1ec)) = pbStack_14[local_2c];
                  goto LAB_006afc4d;
                }
                iVar11 = 0;
                iStack_18 = 0;
                iStack_1c = 0;
                if (1 < uVar12) {
                  puVar6 = (undefined1 *)(*(int *)(param_1 + 0x1ec) + 0x1a);
                  iVar9 = (uVar12 - 2 >> 1) + 1;
                  iVar11 = iVar9 * 2;
                  do {
                    iStack_18 = iStack_18 +
                                (CONCAT31(CONCAT21(CONCAT11(puVar6[-2],puVar6[-1]),*puVar6),
                                          puVar6[1]) + 3U & 0xfffffffc);
                    iStack_1c = iStack_1c +
                                (CONCAT31(CONCAT21(CONCAT11(puVar6[0xe],puVar6[0xf]),puVar6[0x10]),
                                          puVar6[0x11]) + 3U & 0xfffffffc);
                    puVar6 = puVar6 + 0x20;
                    iVar9 = iVar9 + -1;
                    uVar10 = uStack_24;
                    iStack_4 = iVar11;
                  } while (iVar9 != 0);
                }
                if (iVar11 < (int)uVar12) {
                  iVar9 = *(int *)(param_1 + 0x1ec) + 0x18 + iVar11 * 0x10;
                  uVar13 = uVar13 + (CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)
                                                                 (*(int *)(param_1 + 0x1ec) + 0x18 +
                                                                 iVar11 * 0x10),
                                                                *(undefined1 *)(iVar9 + 1)),
                                                       *(undefined1 *)(iVar9 + 2)),
                                              *(undefined1 *)(iVar9 + 3)) + 3U & 0xfffffffc);
                }
                uVar13 = uVar13 + iStack_1c + iStack_18;
                iStack_18 = 2;
                *(uint *)(param_1 + 0x1f0) = uVar13;
                uVar7 = FUN_00693a60(local_20,1,uVar12 * 0x10 + 0xc,uVar13 + 1,
                                     *(undefined4 *)(param_1 + 0x1ec),&uStack_30);
                *(undefined4 *)(param_1 + 0x1ec) = uVar7;
                if (uStack_30 == 0) goto LAB_006afc39;
                goto LAB_006afca9;
              }
              if (iStack_18 == 2) {
LAB_006afc39:
                if (uVar10 < uVar13) goto LAB_006afc3d;
                goto LAB_006afc9c;
              }
            }
            pbStack_14 = pbStack_14 + 1;
          } while ((int)pbStack_14 < (int)uStack_28);
        }
        (*(code *)param_2[7])(param_2);
      } while ((char *)*param_2 < local_10);
    }
  }
  uStack_30 = 3;
LAB_006afca9:
  param_2[3] = uStack_30;
LAB_006afcac:
  if (bVar5) {
    FUN_00691290(local_20,local_2c);
  }
  return;
}


/* FUN_006afcd0 @ 006afcd0  kind=gamemisc  attributed-by=role:artifact  size=1054 */

void FUN_006afcd0(uint param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  byte extraout_CL;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  int iStack_c;
  
  puVar2 = *(undefined4 **)(param_1 + 0x1e8);
  pbVar8 = (byte *)param_2[2];
  iVar4 = param_2[4];
  param_1 = 0;
  bVar11 = false;
  (*(code *)param_2[7])(param_2);
  if ((byte *)*param_2 < pbVar8) {
    bVar6 = *(byte *)*param_2;
    if (bVar6 - 0x30 < 10) {
      iVar3 = (*(code *)param_2[9])(param_2);
      param_2[0x24] = iVar3;
      if (param_2[3] != 0) {
        return;
      }
LAB_006afdb5:
      if ((byte *)*param_2 < pbVar8) {
        iVar3 = (**(code **)*puVar2)(param_2 + 0x32,param_2[0x24],iVar4);
        if (((iVar3 != 0) ||
            (iVar3 = (**(code **)*puVar2)(param_2 + 0x25,param_2[0x24],iVar4), iVar3 != 0)) ||
           (iVar3 = (**(code **)*puVar2)(param_2 + 0x3f,4,iVar4), iVar3 != 0)) goto LAB_006b00e3;
        uVar9 = 0;
        (*(code *)param_2[7])(param_2);
        pbVar7 = (byte *)*param_2;
        while (((pbVar7 < pbVar8 &&
                (((bVar6 = *pbVar7, bVar6 != 0x65 || (pbVar8 <= pbVar7 + 3)) ||
                 ((pbVar7[1] != 0x6e ||
                  ((pbVar7[2] != 100 || (iVar4 = FUN_006af480(), bVar6 = extraout_CL, iVar4 == 0))))
                 )))) && (bVar6 != 0x3e))) {
          (*(code *)param_2[8])(param_2);
          if (param_2[3] != 0) {
            return;
          }
          if (*pbVar7 == 0x2f) {
            pbVar7 = pbVar7 + 1;
            if (pbVar8 <= pbVar7) goto LAB_006b00de;
            iVar4 = *param_2;
            iVar3 = (*(code *)param_2[0x30])(param_2 + 0x25,uVar9,pbVar7,(iVar4 - (int)pbVar7) + 1);
            if (iVar3 != 0) goto LAB_006b00e3;
            *(undefined1 *)((iVar4 - (int)pbVar7) + *(int *)(param_2[0x2b] + uVar9 * 4)) = 0;
            if (*pbVar7 == 0x2e) {
              pbVar7 = *(byte **)(param_2[0x2b] + uVar9 * 4);
              pcVar5 = ".notdef";
              do {
                bVar6 = *pcVar5;
                bVar10 = bVar6 < *pbVar7;
                if (bVar6 != *pbVar7) {
LAB_006afef0:
                  iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                  goto LAB_006afef5;
                }
                if (bVar6 == 0) break;
                bVar6 = pcVar5[1];
                bVar10 = bVar6 < pbVar7[1];
                if (bVar6 != pbVar7[1]) goto LAB_006afef0;
                pcVar5 = pcVar5 + 2;
                pbVar7 = pbVar7 + 2;
              } while (bVar6 != 0);
              iVar4 = 0;
LAB_006afef5:
              if (iVar4 == 0) {
                bVar11 = true;
                param_1 = uVar9;
              }
            }
            (*(code *)param_2[7])(param_2);
            iVar4 = *param_2;
            (*(code *)param_2[9])(param_2);
            pbVar7 = (byte *)*param_2;
            if (pbVar8 <= pbVar7) goto LAB_006b00de;
            iVar3 = (*(code *)param_2[0x3d])(param_2 + 0x32,uVar9,iVar4,pbVar7 + (1 - iVar4));
            if (iVar3 != 0) goto LAB_006b00e3;
            iVar3 = uVar9 * 4;
            uVar9 = uVar9 + 1;
            pbVar7[*(int *)(param_2[0x38] + iVar3) - iVar4] = 0;
            if ((uint)param_2[0x24] <= uVar9) break;
          }
          (*(code *)param_2[7])(param_2);
          pbVar7 = (byte *)*param_2;
        }
        param_2[0x24] = uVar9;
        if (bVar11) {
          pcVar5 = ".notdef";
          pbVar8 = *(byte **)param_2[0x2b];
          do {
            bVar6 = *pcVar5;
            bVar11 = bVar6 < *pbVar8;
            if (bVar6 != *pbVar8) {
LAB_006affb0:
              iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
              goto LAB_006affb5;
            }
            if (bVar6 == 0) break;
            bVar6 = pcVar5[1];
            bVar11 = bVar6 < pbVar8[1];
            if (bVar6 != pbVar8[1]) goto LAB_006affb0;
            pcVar5 = pcVar5 + 2;
            pbVar8 = pbVar8 + 2;
          } while (bVar6 != 0);
          iVar4 = 0;
LAB_006affb5:
          if (iVar4 == 0) {
            return;
          }
          piVar1 = param_2 + 0x3f;
          iVar3 = (*(code *)param_2[0x4a])
                            (piVar1,0,*(byte **)param_2[0x2b],*(undefined4 *)param_2[0x2c]);
          if (iVar3 == 0) {
            iVar3 = (*(code *)param_2[0x4a])
                              (piVar1,1,*(undefined4 *)param_2[0x38],*(undefined4 *)param_2[0x39]);
            if (((((iVar3 == 0) &&
                  (iVar3 = (*(code *)param_2[0x4a])
                                     (piVar1,2,*(undefined4 *)(param_2[0x2b] + param_1 * 4),
                                      *(undefined4 *)(param_2[0x2c] + param_1 * 4)), iVar3 == 0)) &&
                 (iVar3 = (*(code *)param_2[0x4a])
                                    (piVar1,3,*(undefined4 *)(param_2[0x38] + param_1 * 4),
                                     *(undefined4 *)(param_2[0x39] + param_1 * 4)), iVar3 == 0)) &&
                ((iVar3 = (*(code *)param_2[0x30])
                                    (param_2 + 0x25,param_1,*(undefined4 *)param_2[0x45],
                                     *(undefined4 *)param_2[0x46]), iVar3 == 0 &&
                 (iVar3 = (*(code *)param_2[0x3d])
                                    (param_2 + 0x32,param_1,*(undefined4 *)(param_2[0x45] + 4),
                                     *(undefined4 *)(param_2[0x46] + 4)), iVar3 == 0)))) &&
               ((iVar3 = (*(code *)param_2[0x30])
                                   (param_2 + 0x25,0,*(undefined4 *)(param_2[0x45] + 8),
                                    *(undefined4 *)(param_2[0x46] + 8)), iVar3 == 0 &&
                (iVar3 = (*(code *)param_2[0x3d])
                                   (param_2 + 0x32,0,*(undefined4 *)(param_2[0x45] + 0xc),
                                    *(undefined4 *)(param_2[0x46] + 0xc)), iVar3 == 0)))) {
              return;
            }
          }
          goto LAB_006b00e3;
        }
      }
    }
    else if (bVar6 == 0x3c) {
      iStack_c = 0;
      (*(code *)param_2[8])(param_2);
      if (param_2[3] != 0) {
        return;
      }
      (*(code *)param_2[7])(param_2);
      pbVar7 = (byte *)*param_2;
      if (pbVar7 < pbVar8) {
        do {
          if (*(char *)*param_2 == '/') {
            iStack_c = iStack_c + 1;
          }
          else if (*(char *)*param_2 == '>') {
            param_2[0x24] = iStack_c;
            *param_2 = (int)pbVar7;
            break;
          }
          (*(code *)param_2[8])(param_2);
          if (param_2[3] != 0) {
            return;
          }
          (*(code *)param_2[7])(param_2);
        } while ((byte *)*param_2 < pbVar8);
        goto LAB_006afdb5;
      }
    }
  }
LAB_006b00de:
  iVar3 = 3;
LAB_006b00e3:
  param_2[3] = iVar3;
  return;
}


/* FUN_006b0bc0 @ 006b0bc0  kind=gamemisc  attributed-by=role:artifact  size=479 */

int FUN_006b0bc0(int param_1,byte *param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  int local_14 [5];
  
  local_14[0] = 0;
  if ((byte *)(param_1 + 5U) <= param_2) {
    uVar5 = (uint)*(byte *)(param_1 + 4);
    bVar1 = *(byte *)(param_1 + 3);
    uVar6 = uVar5 + param_3[0x17];
    pbVar8 = (byte *)(param_1 + 5);
    if ((uint)param_3[0x18] < uVar6) {
      uVar6 = uVar6 + 3 & 0xfffffffc;
      uVar2 = FUN_00693a60(*param_3,0x24,param_3[0x17],uVar6,param_3[0x19],local_14);
      param_3[0x19] = uVar2;
      if (local_14[0] != 0) {
        return local_14[0];
      }
      param_3[0x18] = uVar6;
    }
    iVar7 = 8;
    if ((bVar1 & 1) != 0) {
      iVar7 = 9;
    }
    if ((bVar1 & 2) != 0) {
      iVar7 = iVar7 + 1;
    }
    if ((bVar1 & 4) != 0) {
      iVar7 = iVar7 + 1;
    }
    if ((bVar1 & 8) != 0) {
      iVar7 = iVar7 + 1;
    }
    if ((bVar1 & 0x10) != 0) {
      iVar7 = iVar7 + 1;
    }
    puVar4 = (uint *)(param_3[0x19] + param_3[0x17] * 0x24);
    uVar6 = uVar5;
    if (pbVar8 + iVar7 * uVar5 <= param_2) {
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        if ((bVar1 & 1) == 0) {
          uVar3 = (uint)*pbVar8;
          pbVar9 = pbVar8 + 1;
        }
        else {
          pbVar9 = pbVar8 + 2;
          uVar3 = (uint)CONCAT11(*pbVar8,pbVar8[1]);
        }
        *puVar4 = uVar3;
        if ((bVar1 & 2) == 0) {
          uVar3 = (uint)*pbVar9;
          pbVar8 = pbVar9 + 1;
        }
        else {
          pbVar8 = pbVar9 + 2;
          uVar3 = (uint)CONCAT11(*pbVar9,pbVar9[1]);
        }
        puVar4[1] = uVar3;
        puVar4[2] = (uint)*pbVar8;
        if ((bVar1 & 4) == 0) {
          pbVar9 = pbVar8 + 3;
          uVar3 = (uint)pbVar8[1];
        }
        else {
          pbVar9 = pbVar8 + 4;
          uVar3 = (uint)CONCAT11(pbVar8[1],pbVar8[2]);
        }
        puVar4[5] = uVar3 << 8 | (uint)pbVar9[-1];
        if ((bVar1 & 8) == 0) {
          pbVar10 = pbVar9 + 2;
          uVar3 = (uint)*pbVar9;
        }
        else {
          pbVar10 = pbVar9 + 3;
          uVar3 = (uint)CONCAT11(*pbVar9,pbVar9[1]);
        }
        puVar4[6] = uVar3 << 8 | (uint)pbVar10[-1];
        if ((bVar1 & 0x10) == 0) {
          uVar3 = (uint)*pbVar10;
          pbVar8 = pbVar10 + 1;
        }
        else {
          pbVar8 = pbVar10 + 2;
          uVar3 = (uint)CONCAT11(*pbVar10,pbVar10[1]);
        }
        puVar4[7] = uVar3;
        puVar4 = puVar4 + 9;
      }
      param_3[0x17] = param_3[0x17] + uVar5;
      return local_14[0];
    }
  }
  return 8;
}


/* FUN_006b0eb0 @ 006b0eb0  kind=gamemisc  attributed-by=role:artifact  size=416 */

int FUN_006b0eb0(undefined1 *param_1,byte *param_2,undefined4 *param_3)

{
  byte *pbVar1;
  int iVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  byte bVar5;
  uint uVar6;
  undefined4 uVar7;
  int local_8;
  undefined4 local_4;
  
  uVar7 = *param_3;
  local_8 = 0;
  local_4 = uVar7;
  puVar3 = (undefined4 *)FUN_00692230(uVar7,0x18,&local_8);
  if (local_8 != 0) {
    return local_8;
  }
  if (param_1 + 4 <= param_2) {
    *(undefined1 *)(puVar3 + 1) = *param_1;
    *(ushort *)((int)puVar3 + 6) = CONCAT11(param_1[1],param_1[2]);
    *(undefined1 *)((int)puVar3 + 5) = param_1[3];
    pbVar4 = param_1 + 4;
    puVar3[3] = pbVar4 + (param_3[1] - param_3[0x25]);
    bVar5 = *(byte *)((int)puVar3 + 5) & 1;
    puVar3[2] = 3;
    if (bVar5 != 0) {
      puVar3[2] = 5;
    }
    if ((*(byte *)((int)puVar3 + 5) & 2) != 0) {
      puVar3[2] = puVar3[2] + 1;
    }
    uVar6 = (uint)*(byte *)(puVar3 + 1);
    iVar2 = puVar3[2];
    uVar7 = local_4;
    if (pbVar4 + uVar6 * iVar2 <= param_2) {
      if (*(char *)(puVar3 + 1) == '\0') {
        FUN_00691290(local_4,puVar3);
        return local_8;
      }
      if (bVar5 == 0) {
        puVar3[4] = (uint)*pbVar4 << 0x10 | (uint)(byte)param_1[5];
        puVar3[5] = (uint)pbVar4[(uVar6 - 1) * iVar2] << 0x10 |
                    (uint)(pbVar4 + (uVar6 - 1) * iVar2)[1];
      }
      else {
        pbVar1 = pbVar4 + (uVar6 - 1) * iVar2 + 2;
        puVar3[4] = CONCAT22(CONCAT11(*pbVar4,param_1[5]),CONCAT11(param_1[6],param_1[7]));
        puVar3[5] = CONCAT22(CONCAT11(pbVar1[-2],pbVar1[-1]),CONCAT11(*pbVar1,pbVar1[1]));
      }
      *puVar3 = 0;
      *(undefined4 **)param_3[0x23] = puVar3;
      param_3[0x23] = puVar3;
      param_3[0x21] = param_3[0x21] + (uint)*(byte *)(puVar3 + 1);
      return 0;
    }
  }
  FUN_00691290(uVar7,puVar3);
  return 8;
}


/* FUN_006b3400 @ 006b3400  kind=gamemisc  attributed-by=role:artifact  size=825 */

int FUN_006b3400(undefined4 param_1,int *param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  short sVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  undefined2 *puVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int local_10;
  int *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  piVar4 = param_2;
  param_2 = (int *)FUN_006b0b20();
  if (param_2 == (int *)0x0) {
    cVar5 = FUN_006b0b50();
    if (cVar5 == '\0') {
      return 2;
    }
    param_2 = (int *)FUN_006b0b80();
    iVar8 = param_3;
    if ((param_2 == (int *)0x0) && (*piVar4 = local_10, -1 < param_3)) {
      if (local_10 <= param_3) {
        return 6;
      }
      param_2 = (int *)FUN_006b27c0(param_1,piVar4[0x33] != 0);
      if ((param_2 == (int *)0x0) &&
         (param_2 = (int *)FUN_006b1190(param_1,piVar4[0x47]), param_2 == (int *)0x0)) {
        piVar4[1] = iVar8;
        piVar4[4] = piVar4[0x66] + 1;
        piVar4[2] = 1;
        uVar1 = piVar4[0x66];
        uVar6 = 0;
        if (uVar1 != 0) {
          piVar9 = (int *)(piVar4[0x68] + 0xc);
          do {
            if (*piVar9 != 0) break;
            uVar6 = uVar6 + 1;
            piVar9 = piVar9 + 4;
          } while (uVar6 < uVar1);
        }
        if (uVar6 == uVar1) {
          if (piVar4[0x5f] == 0) {
            return 3;
          }
          piVar4[2] = 0;
        }
        if ((*(byte *)(piVar4 + 0x51) & 4) == 0) {
          piVar4[2] = piVar4[2] | 4;
        }
        if ((*(byte *)(piVar4 + 0x51) & 1) == 0) {
          piVar4[2] = piVar4[2] | 0x10;
        }
        else {
          piVar4[2] = piVar4[2] | 0x20;
        }
        if (piVar4[0x5f] != 0) {
          piVar4[2] = piVar4[2] | 2;
        }
        if (piVar4[0x69] != 0) {
          piVar4[2] = piVar4[2] | 0x40;
        }
        piVar4[5] = piVar4[0x5d];
        if (piVar4[0x5d] == 0) {
          piVar4[5] = piVar4[0x5c];
        }
        piVar4[6] = piVar4[0x5e];
        piVar4[7] = 0;
        piVar4[8] = 0;
        piVar4[0xd] = piVar4[0x4d];
        piVar4[0xe] = piVar4[0x4e];
        piVar4[0xf] = piVar4[0x4f];
        piVar4[0x10] = piVar4[0x50];
        *(ushort *)(piVar4 + 0x11) = *(ushort *)(piVar4 + 0x4b);
        *(short *)((int)piVar4 + 0x46) = (short)piVar4[0x50];
        *(short *)(piVar4 + 0x12) = (short)piVar4[0x4e];
        sVar3 = (short)(((uint)*(ushort *)(piVar4 + 0x4b) * 0xc) / 10);
        *(short *)((int)piVar4 + 0x4a) = sVar3;
        if ((int)sVar3 < (int)*(short *)((int)piVar4 + 0x46) - (int)(short)piVar4[0x12]) {
          *(short *)((int)piVar4 + 0x4a) = *(short *)((int)piVar4 + 0x46) - (short)piVar4[0x12];
        }
        iVar8 = piVar4[0x5f];
        if (iVar8 != 0) {
          puVar7 = (undefined2 *)
                   FUN_00693a60(*(undefined4 *)(piVar4[0x1a] + 0x1c),0x10,0,iVar8,0,&param_2);
          piVar4[8] = (int)puVar7;
          if (param_2 != (int *)0x0) {
            return (int)param_2;
          }
          piVar9 = (int *)piVar4[0x61];
          for (iVar10 = iVar8; iVar10 != 0; iVar10 = iVar10 + -1) {
            *puVar7 = (short)piVar9[1];
            puVar7[1] = (short)*piVar9;
            *(int *)(puVar7 + 2) = piVar9[1] << 6;
            *(int *)(puVar7 + 4) = *piVar9 << 6;
            *(int *)(puVar7 + 6) = piVar9[1] << 6;
            puVar7 = puVar7 + 8;
            piVar9 = piVar9 + 9;
          }
          piVar4[7] = iVar8;
        }
        if ((*(byte *)(piVar4 + 0x51) & 4) == 0) {
          *(short *)(piVar4 + 0x13) = (short)piVar4[0x52];
        }
        else {
          iVar8 = piVar4[0x66];
          iVar10 = 0;
          if (iVar8 != 0) {
            piVar9 = (int *)(piVar4[0x68] + 4);
            do {
              if (iVar10 < *piVar9) {
                iVar10 = *piVar9;
              }
              piVar9 = piVar9 + 4;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
          *(short *)(piVar4 + 0x13) = (short)iVar10;
        }
        *(undefined2 *)((int)piVar4 + 0x4e) = *(undefined2 *)((int)piVar4 + 0x4a);
        lVar2 = (longlong)(int)(uint)*(ushort *)(piVar4 + 0x11) * -0x66666667;
        *(short *)(piVar4 + 0x14) = (short)(int)(lVar2 >> 0x22) - (short)(lVar2 >> 0x3f);
        *(ushort *)((int)piVar4 + 0x52) = *(ushort *)(piVar4 + 0x11) / 0x1e;
        local_c = piVar4;
        local_4 = 0x10003;
        local_8 = 0x756e6963;
        param_2 = (int *)FUN_00693ed0(&DAT_00733adc,0,&local_c,0);
        if (piVar4[0x69] != 0) {
          piVar4[2] = piVar4[2] | 0x40;
        }
      }
    }
  }
  return (int)param_2;
}


/* FUN_006b3d50 @ 006b3d50  kind=gamemisc  attributed-by=role:artifact  size=285 */

void FUN_006b3d50(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  uint uStack_10;
  int iStack_c;
  int iStack_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_1c;
  if (-1 < *(int *)(param_2 + 0x60)) {
    iVar2 = *(int *)(param_2 + 0x60) * 0xfc + *(int *)(param_1 + 0x130);
    (**(code **)(param_2 + 0x34))(param_2,6,&local_1c,3);
    iVar4 = (uStack_10 ^ (int)uStack_10 >> 0x1f) - ((int)uStack_10 >> 0x1f);
    uVar3 = FUN_0068ec40(iVar4,1000);
    uVar1 = FUN_0068ec40(0x10000,uVar3);
    *(undefined2 *)(param_1 + 0x44) = uVar1;
    if (iVar4 != 0x10000) {
      local_1c = FUN_0068ec40(local_1c,iVar4);
      uStack_18 = FUN_0068ec40(uStack_18,iVar4);
      uStack_14 = FUN_0068ec40(uStack_14,iVar4);
      iStack_c = FUN_0068ec40(iStack_c,iVar4);
      iStack_8 = FUN_0068ec40(iStack_8,iVar4);
      uStack_10 = 0x10000;
    }
    *(undefined4 *)(iVar2 + 0xd8) = local_1c;
    *(undefined4 *)(iVar2 + 0xe0) = uStack_18;
    *(undefined4 *)(iVar2 + 0xdc) = uStack_14;
    *(uint *)(iVar2 + 0xe4) = uStack_10;
    *(int *)(iVar2 + 0xe8) = iStack_c >> 0x10;
    *(int *)(iVar2 + 0xec) = iStack_8 >> 0x10;
  }
  __security_check_cookie(local_4 ^ (uint)&local_1c);
  return;
}


/* FUN_006bc0c0 @ 006bc0c0  kind=gamemisc  attributed-by=role:artifact  size=359 */

void FUN_006bc0c0(int param_1,int param_2)

{
  int iVar1;
  void *_Dst;
  int *piVar2;
  int iVar3;
  size_t _Size;
  int local_48;
  int local_44;
  int local_40;
  undefined4 *puStack_3c;
  undefined4 uStack_38;
  int local_34 [12];
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_48;
  iVar3 = 0;
  local_40 = param_2;
  local_48 = 0;
  (**(code **)(param_2 + 0x3c))(param_2,local_34,4,&local_44);
  if (local_44 < 0) {
    iVar1 = 0xa2;
  }
  else {
    if ((local_44 == 0) || (4 < local_44)) {
      *(undefined4 *)(param_2 + 0xc) = 3;
      __security_check_cookie(local_4 ^ (uint)&local_48);
      return;
    }
    iVar1 = FUN_006bb770(local_44);
    local_48 = iVar1;
    if (iVar1 == 0) {
      uStack_38 = *(undefined4 *)(param_1 + 100);
      if (0 < local_44) {
        puStack_3c = (undefined4 *)(*(int *)(param_1 + 0x214) + 8);
        piVar2 = local_34;
        local_48 = 0;
        do {
          if (*(char *)*piVar2 == '/') {
            *piVar2 = (int)((char *)*piVar2 + 1);
          }
          _Size = piVar2[1] - *piVar2;
          if (_Size == 0) {
            *(undefined4 *)(param_2 + 0xc) = 3;
            __security_check_cookie(local_4 ^ (uint)&local_48);
            return;
          }
          _Dst = (void *)FUN_00692230(uStack_38,_Size + 1,&local_48);
          *puStack_3c = _Dst;
          if (local_48 != 0) {
            *(int *)(local_40 + 0xc) = local_48;
            __security_check_cookie(local_4 ^ (uint)&local_48);
            return;
          }
          memcpy(_Dst,(void *)*piVar2,_Size);
          puStack_3c = puStack_3c + 1;
          iVar3 = iVar3 + 1;
          *(undefined1 *)((int)_Dst + _Size) = 0;
          piVar2 = piVar2 + 3;
          param_2 = local_40;
        } while (iVar3 < local_44);
        *(int *)(local_40 + 0xc) = local_48;
        __security_check_cookie(local_4 ^ (uint)&local_48);
        return;
      }
    }
  }
  *(int *)(param_2 + 0xc) = iVar1;
  __security_check_cookie(local_4 ^ (uint)&local_48);
  return;
}


/* FUN_006bc890 @ 006bc890  kind=gamemisc  attributed-by=role:artifact  size=303 */

void FUN_006bc890(int param_1,int param_2)

{
  int iVar1;
  undefined2 extraout_var;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  uint uStack_10;
  int iStack_c;
  int iStack_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_1c;
  iVar1 = (**(code **)(param_2 + 0x34))(param_2,6,&local_1c,3);
  if (iVar1 < 0) {
    *(undefined4 *)(param_2 + 0xc) = 3;
    __security_check_cookie(local_4 ^ (uint)&local_1c);
    return;
  }
  iVar1 = (uStack_10 ^ (int)uStack_10 >> 0x1f) - ((int)uStack_10 >> 0x1f);
  if (iVar1 != 0) {
    FUN_0068ec40(0x3e80000,iVar1);
    *(undefined2 *)(param_1 + 0x44) = extraout_var;
    if (iVar1 != 0x10000) {
      local_1c = FUN_0068ec40(local_1c,iVar1);
      uStack_18 = FUN_0068ec40(uStack_18,iVar1);
      uStack_14 = FUN_0068ec40(uStack_14,iVar1);
      iStack_c = FUN_0068ec40(iStack_c,iVar1);
      iStack_8 = FUN_0068ec40(iStack_8,iVar1);
      uStack_10 = 0x10000;
    }
    *(undefined4 *)(param_1 + 0x1b4) = local_1c;
    *(uint *)(param_1 + 0x1c0) = uStack_10;
    *(undefined4 *)(param_1 + 0x1bc) = uStack_18;
    *(undefined4 *)(param_1 + 0x1b8) = uStack_14;
    *(int *)(param_1 + 0x1c4) = iStack_c >> 0x10;
    *(int *)(param_1 + 0x1c8) = iStack_8 >> 0x10;
    __security_check_cookie(local_4 ^ (uint)&local_1c);
    return;
  }
  *(undefined4 *)(param_2 + 0xc) = 3;
  __security_check_cookie(local_4 ^ (uint)&local_1c);
  return;
}


/* FUN_006bcd60 @ 006bcd60  kind=gamemisc  attributed-by=role:artifact  size=569 */

void FUN_006bcd60(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  void *_Dst;
  size_t sStack_18;
  void *pvStack_10;
  undefined4 uStack_c;
  undefined4 *local_8;
  undefined4 uStack_4;
  
  puVar4 = param_2;
  puVar2 = *(undefined4 **)(param_1 + 0x1e8);
  uVar3 = param_2[4];
  puVar1 = param_2 + 0x4f;
  local_8 = puVar2;
  (*(code *)param_2[7])(param_2);
  if (((char *)*puVar4 < (char *)puVar4[2]) && (*(char *)*puVar4 == '[')) {
    (*(code *)puVar4[8])(puVar4);
    (*(code *)puVar4[7])(puVar4);
    if (((char *)puVar4[2] <= (char *)*puVar4) || (*(char *)*puVar4 != ']')) {
      puVar4[3] = 3;
      return;
    }
  }
  else {
    uStack_c = (*(code *)puVar4[9])(puVar4);
    (*(code *)puVar4[8])(puVar4);
    if (puVar4[3] == 0) {
      (*(code *)puVar4[7])(puVar4);
      if ((puVar4[0x4e] == 0) &&
         (param_2 = (undefined4 *)(**(code **)*puVar2)(puVar1,uStack_c,uVar3),
         param_2 != (undefined4 *)0x0)) {
LAB_006bcf8e:
        puVar4[3] = param_2;
      }
      else {
        iVar5 = strncmp((char *)*puVar4,"dup",3);
        while (iVar5 == 0) {
          (*(code *)puVar4[8])(puVar4);
          uVar6 = (*(code *)puVar4[9])(puVar4);
          uStack_4 = uVar6;
          iVar5 = FUN_006bc830(&pvStack_10);
          if (iVar5 == 0) {
            return;
          }
          (*(code *)puVar4[8])(puVar4);
          if (puVar4[3] != 0) {
            return;
          }
          (*(code *)puVar4[7])(puVar4);
          iVar5 = strncmp((char *)*puVar4,"put",3);
          if (iVar5 == 0) {
            (*(code *)puVar4[8])(puVar4);
            (*(code *)puVar4[7])(puVar4);
          }
          if (puVar4[0x4e] == 0) {
            if (*(int *)(param_1 + 0xac) < 0) {
              param_2 = (undefined4 *)(*(code *)puVar4[0x5a])(puVar1,uVar6,pvStack_10,sStack_18);
            }
            else {
              if ((int)sStack_18 < *(int *)(param_1 + 0xac)) {
                param_2 = (undefined4 *)0x3;
                goto LAB_006bcf8e;
              }
              _Dst = (void *)FUN_00692230(uVar3,sStack_18,&param_2);
              if (param_2 != (undefined4 *)0x0) goto LAB_006bcf8e;
              memcpy(_Dst,pvStack_10,sStack_18);
              (*(code *)local_8[4])(_Dst,sStack_18,0x10ea);
              sStack_18 = sStack_18 - *(int *)(param_1 + 0xac);
              param_2 = (undefined4 *)
                        (*(code *)puVar4[0x5a])
                                  (puVar1,uStack_4,*(int *)(param_1 + 0xac) + (int)_Dst,sStack_18);
              FUN_00691290(uVar3,_Dst);
            }
            if (param_2 != (undefined4 *)0x0) goto LAB_006bcf8e;
          }
          iVar5 = strncmp((char *)*puVar4,"dup",3);
        }
        if (puVar4[0x4e] == 0) {
          puVar4[0x4e] = uStack_c;
          return;
        }
      }
    }
  }
  return;
}


/* FUN_006bcfa0 @ 006bcfa0  kind=gamemisc  attributed-by=role:artifact  size=1536 */

void FUN_006bcfa0(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  byte bVar4;
  undefined4 *puVar5;
  size_t _Size;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  void *_Dst;
  byte *pbVar10;
  char *pcVar11;
  bool bVar12;
  int iStack_38;
  char local_31;
  int *local_30;
  int iStack_2c;
  int local_28;
  size_t sStack_24;
  char *local_20;
  void *pvStack_1c;
  int local_18;
  int iStack_14;
  int local_10;
  undefined4 *local_c;
  undefined1 uStack_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&iStack_38;
  puVar5 = *(undefined4 **)(param_1 + 0x1e8);
  pcVar8 = (char *)param_2[2];
  iVar9 = param_2[4];
  local_18 = param_1;
  local_30 = param_2;
  local_28 = 0;
  local_31 = '\0';
  local_20 = pcVar8;
  local_10 = iVar9;
  local_c = puVar5;
  iStack_14 = (*(code *)param_2[9])(param_2);
  if ((iStack_14 == 0) || (param_2[3] != 0)) goto LAB_006bd58d;
  if (param_2[0x26] == 0) {
    iVar1 = iStack_14 + 6;
    iStack_38 = (**(code **)*puVar5)(param_2 + 0x34,iVar1,iVar9);
    iVar7 = iStack_38;
    if (((iStack_38 == 0) &&
        (iStack_38 = (**(code **)*puVar5)(param_2 + 0x27,iVar1,iVar9), iVar7 = iStack_38,
        iStack_38 == 0)) &&
       (iStack_38 = (**(code **)*puVar5)(param_2 + 0x41,4,iVar9), iVar7 = iStack_38,
       pcVar8 = local_20, iStack_38 == 0)) goto LAB_006bd074;
  }
  else {
LAB_006bd074:
    iStack_2c = 0;
    (*(code *)param_2[7])(param_2);
    pcVar11 = (char *)*param_2;
    if (pcVar11 < pcVar8) {
      do {
        if ((pcVar11 + 3 < pcVar8) &&
           (((((cVar3 = pcVar11[3], cVar3 == ' ' || (cVar3 == '\r')) ||
              ((cVar3 == '\n' || ((cVar3 == '\t' || (cVar3 == '\f')))))) ||
             (((cVar3 == '\0' ||
               ((((cVar3 == '/' || (cVar3 == '(')) || (cVar3 == ')')) ||
                ((cVar3 == '<' || (cVar3 == '>')))))) ||
              ((((cVar3 == '[' || ((cVar3 == ']' || (cVar3 == '{')))) || (cVar3 == '}')) ||
               (cVar3 == '%')))))) &&
            (((((*pcVar11 == 'd' && (pcVar11[1] == 'e')) && (pcVar11[2] == 'f')) && (iStack_2c != 0)
              ) || (((*pcVar11 == 'e' && (pcVar11[1] == 'n')) && (pcVar11[2] == 'd')))))))) break;
        (*(code *)param_2[8])(param_2);
        if (param_2[3] != 0) goto LAB_006bd58d;
        if (*pcVar11 == '/') {
          pcVar11 = pcVar11 + 1;
          if (pcVar8 <= pcVar11) {
            iVar7 = 3;
            goto LAB_006bd58a;
          }
          iVar9 = *param_2;
          iVar7 = FUN_006bc830(&pvStack_1c);
          iVar1 = iStack_2c;
          piVar2 = local_30;
          if (iVar7 == 0) goto LAB_006bd58d;
          pcVar8 = local_20;
          param_2 = local_30;
          if (local_30[0x26] == 0) {
            iStack_38 = (*(code *)local_30[0x32])
                                  (local_30 + 0x27,iStack_2c,pcVar11,(iVar9 - (int)pcVar11) + 1);
            iVar6 = local_10;
            _Size = sStack_24;
            iVar7 = iStack_38;
            param_2 = local_30;
            if (iStack_38 != 0) goto LAB_006bd58a;
            *(undefined1 *)((iVar9 - (int)pcVar11) + *(int *)(piVar2[0x2d] + iVar1 * 4)) = 0;
            if (*pcVar11 == '.') {
              pbVar10 = *(byte **)(piVar2[0x2d] + iVar1 * 4);
              pcVar8 = ".notdef";
              do {
                bVar4 = *pcVar8;
                bVar12 = bVar4 < *pbVar10;
                if (bVar4 != *pbVar10) {
LAB_006bd1c2:
                  iVar9 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                  goto LAB_006bd1c7;
                }
                if (bVar4 == 0) break;
                bVar4 = pcVar8[1];
                bVar12 = bVar4 < pbVar10[1];
                if (bVar4 != pbVar10[1]) goto LAB_006bd1c2;
                pcVar8 = pcVar8 + 2;
                pbVar10 = pbVar10 + 2;
              } while (bVar4 != 0);
              iVar9 = 0;
LAB_006bd1c7:
              if (iVar9 == 0) {
                local_28 = iVar1;
                local_31 = '\x01';
              }
            }
            if ((*(int *)(local_18 + 0xac) < 0) || (iStack_14 + 5 <= iVar1)) {
              iStack_38 = (*(code *)local_30[0x3f])(local_30 + 0x34,iVar1,pvStack_1c,sStack_24);
            }
            else {
              if ((int)sStack_24 <= *(int *)(local_18 + 0xac)) {
                iVar7 = 3;
                goto LAB_006bd58a;
              }
              _Dst = (void *)FUN_00692230(local_10,sStack_24,&iStack_38);
              iVar7 = iStack_38;
              param_2 = local_30;
              if (iStack_38 != 0) goto LAB_006bd58a;
              memcpy(_Dst,pvStack_1c,_Size);
              (*(code *)local_c[4])(_Dst,_Size,0x10ea);
              sStack_24 = _Size - *(int *)(local_18 + 0xac);
              iStack_38 = (*(code *)local_30[0x3f])
                                    (local_30 + 0x34,iVar1,*(int *)(local_18 + 0xac) + (int)_Dst,
                                     sStack_24);
              FUN_00691290(iVar6,_Dst);
            }
            iVar7 = iStack_38;
            param_2 = local_30;
            if (iStack_38 != 0) goto LAB_006bd58a;
            iStack_2c = iVar1 + 1;
            pcVar8 = local_20;
          }
        }
        (*(code *)param_2[7])(param_2);
        pcVar11 = (char *)*param_2;
      } while (pcVar11 < pcVar8);
    }
    param_2[0x26] = iStack_2c;
    if (local_31 == '\0') {
      local_c = (undefined4 *)0xde1f78b;
      uStack_8 = 0xe;
      iStack_38 = (*(code *)param_2[0x4c])
                            (param_2 + 0x41,0,*(undefined4 *)param_2[0x2d],
                             *(undefined4 *)param_2[0x2e]);
      iVar7 = iStack_38;
      if (iStack_38 == 0) {
        iStack_38 = (*(code *)param_2[0x4c])
                              (param_2 + 0x41,1,*(undefined4 *)param_2[0x3a],
                               *(undefined4 *)param_2[0x3b]);
        iVar7 = iStack_38;
        if ((((iStack_38 == 0) &&
             (iStack_38 = (*(code *)param_2[0x32])(param_2 + 0x27,0,".notdef",8), iVar7 = iStack_38,
             iStack_38 == 0)) &&
            (iStack_38 = (*(code *)param_2[0x3f])(param_2 + 0x34,0,&local_c,5), iVar7 = iStack_38,
            iStack_38 == 0)) &&
           ((iStack_38 = (*(code *)param_2[0x32])
                                   (param_2 + 0x27,iStack_2c,*(undefined4 *)param_2[0x47],
                                    *(undefined4 *)param_2[0x48]), iVar7 = iStack_38, iStack_38 == 0
            && (iVar7 = (*(code *)param_2[0x3f])
                                  (param_2 + 0x34,iStack_2c,*(undefined4 *)(param_2[0x47] + 4),
                                   *(undefined4 *)(param_2[0x48] + 4)), iVar7 == 0)))) {
          param_2[0x26] = param_2[0x26] + 1;
          __security_check_cookie(local_4 ^ (uint)&iStack_38);
          return;
        }
      }
    }
    else {
      pcVar8 = ".notdef";
      pbVar10 = *(byte **)param_2[0x2d];
      do {
        bVar4 = *pcVar8;
        bVar12 = bVar4 < *pbVar10;
        if (bVar4 != *pbVar10) {
LAB_006bd310:
          iVar9 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
          goto LAB_006bd315;
        }
        if (bVar4 == 0) break;
        bVar4 = pcVar8[1];
        bVar12 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_006bd310;
        pcVar8 = pcVar8 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar9 = 0;
LAB_006bd315:
      if (iVar9 == 0) goto LAB_006bd58d;
      piVar2 = param_2 + 0x41;
      iStack_38 = (*(code *)param_2[0x4c])
                            (piVar2,0,*(byte **)param_2[0x2d],*(undefined4 *)param_2[0x2e]);
      iVar7 = iStack_38;
      if (iStack_38 == 0) {
        iStack_38 = (*(code *)param_2[0x4c])
                              (piVar2,1,*(undefined4 *)param_2[0x3a],*(undefined4 *)param_2[0x3b]);
        iVar7 = iStack_38;
        if ((((iStack_38 == 0) &&
             (iStack_38 = (*(code *)param_2[0x4c])
                                    (piVar2,2,*(undefined4 *)(param_2[0x2d] + local_28 * 4),
                                     *(undefined4 *)(param_2[0x2e] + local_28 * 4)),
             iVar7 = iStack_38, iStack_38 == 0)) &&
            ((iStack_38 = (*(code *)param_2[0x4c])
                                    (piVar2,3,*(undefined4 *)(param_2[0x3a] + local_28 * 4),
                                     *(undefined4 *)(param_2[0x3b] + local_28 * 4)),
             iVar7 = iStack_38, iStack_38 == 0 &&
             (((iStack_38 = (*(code *)param_2[0x32])
                                      (param_2 + 0x27,local_28,*(undefined4 *)param_2[0x47],
                                       *(undefined4 *)param_2[0x48]), iVar7 = iStack_38,
               iStack_38 == 0 &&
               (iStack_38 = (*(code *)param_2[0x3f])
                                      (param_2 + 0x34,local_28,*(undefined4 *)(param_2[0x47] + 4),
                                       *(undefined4 *)(param_2[0x48] + 4)), iVar7 = iStack_38,
               iStack_38 == 0)) &&
              (iStack_38 = (*(code *)param_2[0x32])
                                     (param_2 + 0x27,0,*(undefined4 *)(param_2[0x47] + 8),
                                      *(undefined4 *)(param_2[0x48] + 8)), iVar7 = iStack_38,
              iStack_38 == 0)))))) &&
           (iVar7 = (*(code *)param_2[0x3f])
                              (param_2 + 0x34,0,*(undefined4 *)(param_2[0x47] + 0xc),
                               *(undefined4 *)(param_2[0x48] + 0xc)), iVar7 == 0)) {
          __security_check_cookie(local_4 ^ (uint)&iStack_38);
          return;
        }
      }
    }
  }
LAB_006bd58a:
  param_2[3] = iVar7;
LAB_006bd58d:
  __security_check_cookie(local_4 ^ (uint)&iStack_38);
  return;
}


/* FUN_006c83c0 @ 006c83c0  kind=gamemisc  attributed-by=role:artifact  size=354 */

undefined4 FUN_006c83c0(int *param_1)

{
  int *piVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  undefined **ppuVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint local_c;
  int local_8;
  undefined4 local_4;
  
  iVar2 = *param_1;
  local_4 = *(undefined4 *)(iVar2 + 0x5c);
  _Dst = (void *)param_1[2];
  memset(_Dst,0x7f,param_1[1]);
  iVar3 = FUN_0068fb10(iVar2,0x756e6963);
  if (iVar3 == 0) {
    ppuVar4 = &PTR_DAT_007362b8;
    local_8 = 0;
    do {
      piVar7 = *(int **)(*ppuVar4 + 4);
      if (piVar7 != (int *)0x0) {
        iVar3 = *piVar7;
        while (iVar3 != 0) {
          local_c = FUN_0068fb90(iVar2,iVar3);
          if (((local_c != 0) && (local_c < (uint)param_1[1])) &&
             (*(char *)(local_c + (int)_Dst) == '\x7f')) {
            *(undefined1 *)(local_c + (int)_Dst) = (undefined1)local_8;
          }
          for (uVar5 = FUN_0068fbb0(iVar2,iVar3,&local_c);
              (local_c != 0 && (uVar5 <= (uint)piVar7[1]));
              uVar5 = FUN_0068fbb0(iVar2,uVar5,&local_c)) {
            if ((local_c < (uint)param_1[1]) && (*(char *)(local_c + (int)_Dst) == '\x7f')) {
              *(undefined1 *)(local_c + (int)_Dst) = (undefined1)local_8;
            }
          }
          piVar1 = piVar7 + 2;
          piVar7 = piVar7 + 2;
          iVar3 = *piVar1;
        }
      }
      local_8 = local_8 + 1;
      ppuVar4 = &PTR_DAT_007362b8 + local_8;
    } while ((&PTR_DAT_007362b8)[local_8] != (undefined *)0x0);
    uVar5 = 0x30;
    do {
      uVar6 = FUN_0068fb90(iVar2,uVar5);
      if ((uVar6 != 0) && (uVar6 < (uint)param_1[1])) {
        *(byte *)(uVar6 + (int)_Dst) = *(byte *)(uVar6 + (int)_Dst) | 0x80;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x3a);
  }
  iVar3 = 0;
  if (0 < param_1[1]) {
    do {
      if ((*(byte *)(iVar3 + (int)_Dst) & 0x7f) == 0x7f) {
        *(byte *)(iVar3 + (int)_Dst) = *(byte *)(iVar3 + (int)_Dst) & 0x82 | 2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  FUN_00691a90(iVar2,local_4);
  return 0;
}


/* FUN_006c8910 @ 006c8910  kind=gamemisc  attributed-by=role:artifact  size=830 */

int FUN_006c8910(short *param_1)

{
  undefined4 *puVar1;
  short *psVar2;
  undefined4 *in_EAX;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  short *psVar9;
  int iVar10;
  short *psVar11;
  int local_28;
  short *local_24;
  byte *local_20;
  short *local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  short *local_4;
  
  local_18 = in_EAX[1];
  local_10 = in_EAX[3];
  local_14 = in_EAX[2];
  local_c = in_EAX[4];
  in_EAX[7] = 0;
  in_EAX[10] = 0;
  in_EAX[0xc] = 0;
  in_EAX[0xf] = 0;
  in_EAX[0x13] = 0;
  in_EAX[0x16] = 0;
  local_4 = (short *)*in_EAX;
  local_28 = 0;
  if ((uint)in_EAX[9] < (uint)(int)*param_1) {
    uVar7 = (int)*param_1 + 3U & 0xfffffffc;
    uVar3 = FUN_00693a60(local_4,4,in_EAX[9],uVar7,in_EAX[0xb],&local_28);
    in_EAX[0xb] = uVar3;
    if (local_28 != 0) {
      return local_28;
    }
    in_EAX[9] = uVar7;
  }
  if ((uint)in_EAX[6] < (int)param_1[1] + 2U) {
    uVar7 = (int)param_1[1] + 0xbU & 0xfffffff8;
    uVar3 = FUN_00693a60(local_4,0x28,in_EAX[6],uVar7,in_EAX[8],&local_28);
    in_EAX[8] = uVar3;
    if (local_28 != 0) {
      return local_28;
    }
    in_EAX[6] = uVar7;
  }
  in_EAX[7] = (int)param_1[1];
  in_EAX[10] = (int)*param_1;
  in_EAX[0x12] = 2;
  in_EAX[0x19] = 0xffffffff;
  iVar4 = FUN_006905a0(param_1);
  if (iVar4 == 1) {
    in_EAX[0x12] = 0xfffffffe;
    in_EAX[0x19] = 1;
  }
  psVar2 = (short *)in_EAX[8];
  in_EAX[2] = local_14;
  in_EAX[1] = local_18;
  in_EAX[3] = local_10;
  in_EAX[4] = local_c;
  in_EAX[0x1d] = 0;
  in_EAX[0x1e] = 0;
  if (in_EAX[7] != 0) {
    psVar9 = *(short **)(param_1 + 2);
    local_20 = *(byte **)(param_1 + 4);
    local_1c = psVar2 + in_EAX[7] * 0x14;
    local_24 = psVar2 + **(short **)(param_1 + 6) * 0x14;
    local_8 = 0;
    psVar11 = psVar2;
    local_4 = local_24;
    if (psVar2 < local_1c) {
      do {
        psVar11[6] = *psVar9;
        psVar11[7] = psVar9[2];
        iVar4 = FUN_0068ebc0(*(undefined4 *)psVar9,local_18);
        *(int *)(psVar11 + 8) = iVar4 + local_14;
        *(int *)(psVar11 + 2) = iVar4 + local_14;
        iVar4 = FUN_0068ebc0(*(undefined4 *)(psVar9 + 2),local_10);
        *(int *)(psVar11 + 10) = iVar4 + local_c;
        *(int *)(psVar11 + 4) = iVar4 + local_c;
        if ((*local_20 & 3) == 0) {
          *psVar11 = 1;
        }
        else if ((*local_20 & 3) == 2) {
          *psVar11 = 2;
        }
        else {
          *psVar11 = 0;
        }
        *(short **)(psVar11 + 0x12) = local_24;
        *(short **)(local_24 + 0x10) = psVar11;
        local_24 = psVar11;
        if ((psVar11 == local_4) && (local_8 = local_8 + 1, local_8 < *param_1)) {
          local_24 = psVar2 + *(short *)(*(int *)(param_1 + 6) + local_8 * 2) * 0x14;
          local_4 = local_24;
        }
        local_20 = local_20 + 1;
        psVar11 = psVar11 + 0x14;
        psVar9 = psVar9 + 4;
      } while (psVar11 < local_1c);
    }
    puVar5 = (undefined4 *)in_EAX[0xb];
    puVar1 = puVar5 + in_EAX[10];
    psVar9 = *(short **)(param_1 + 6);
    sVar6 = 0;
    for (; puVar5 < puVar1; puVar5 = puVar5 + 1) {
      *puVar5 = psVar2 + sVar6 * 0x14;
      sVar6 = *psVar9 + 1;
      psVar9 = psVar9 + 1;
    }
    iVar4 = 0;
    local_20 = (byte *)0x0;
    param_1._0_1_ = '\x04';
    if (psVar2 < local_1c) {
      psVar9 = psVar2 + 6;
      local_4 = psVar2;
      do {
        iVar10 = iVar4;
        if (psVar9 + -6 == local_4) {
          iVar4 = *(int *)(local_4 + 0x12);
          iVar10 = (int)local_4[6] - (int)*(short *)(iVar4 + 0xc);
          local_20 = (byte *)((int)local_4[7] - (int)*(short *)(iVar4 + 0xe));
          param_1._0_1_ = FUN_006c87f0();
          local_4 = (short *)(iVar4 + 0x28);
        }
        *(char *)(psVar9 + -5) = (char)param_1;
        iVar4 = (int)*(short *)(*(int *)(psVar9 + 10) + 0xc) - (int)*psVar9;
        iVar8 = (int)*(short *)(*(int *)(psVar9 + 10) + 0xe) - (int)psVar9[1];
        param_1._0_1_ = FUN_006c87f0();
        *(char *)((int)psVar9 + -9) = (char)param_1;
        if ((*(byte *)(psVar9 + -6) & 3) == 0) {
          if ((char)param_1 == (char)psVar9[-5]) {
            if (((char)param_1 != '\x04') ||
               (iVar10 = FUN_0068efc0(iVar10,local_20,iVar4,iVar8), iVar10 != 0)) goto LAB_006c8c28;
          }
          else if ((int)(char)psVar9[-5] == -(int)(char)param_1) goto LAB_006c8c28;
        }
        else {
LAB_006c8c28:
          psVar9[-6] = psVar9[-6] | 0x100;
        }
        psVar2 = psVar9 + 0xe;
        psVar9 = psVar9 + 0x14;
        local_20 = (byte *)iVar8;
      } while (psVar2 < local_1c);
    }
  }
  return local_28;
}


/* FUN_006c8f80 @ 006c8f80  kind=gamemisc  attributed-by=role:artifact  size=287 */

void FUN_006c8f80(int param_1)

{
  int iVar1;
  uint in_EAX;
  int iVar2;
  uint in_ECX;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_EBX;
  int iVar6;
  int *piVar7;
  
  iVar1 = *(int *)(unaff_EBX + 0x1c);
  iVar4 = *(int *)(param_1 + 0x1c);
  iVar6 = *(int *)(unaff_EBX + 0x18) - iVar1;
  iVar3 = *(int *)(param_1 + 0x18) - iVar4;
  if (in_EAX <= in_ECX) {
    if (iVar1 == iVar4) {
      piVar7 = (int *)(in_EAX + 0x18);
      iVar4 = (in_ECX - in_EAX) / 0x28 + 1;
      do {
        iVar5 = iVar3;
        if (piVar7[1] <= iVar1) {
          iVar5 = iVar6;
        }
        *piVar7 = piVar7[1] + iVar5;
        piVar7 = piVar7 + 10;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      return;
    }
    piVar7 = (int *)(in_EAX + 0x18);
    if (iVar1 < iVar4) {
      iVar5 = (in_ECX - in_EAX) / 0x28 + 1;
      do {
        iVar2 = piVar7[1];
        if (iVar1 < iVar2) {
          if (iVar2 < iVar4) {
            iVar2 = FUN_0068ea60(iVar2 - iVar1,*(int *)(param_1 + 0x18) - *(int *)(unaff_EBX + 0x18)
                                 ,iVar4 - iVar1);
            iVar2 = iVar2 + *(int *)(unaff_EBX + 0x18);
          }
          else {
            iVar2 = iVar2 + iVar3;
          }
        }
        else {
          iVar2 = iVar2 + iVar6;
        }
        *piVar7 = iVar2;
        piVar7 = piVar7 + 10;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      return;
    }
    iVar5 = (in_ECX - in_EAX) / 0x28 + 1;
    do {
      iVar2 = piVar7[1];
      if (iVar4 < iVar2) {
        if (iVar2 < iVar1) {
          iVar2 = FUN_0068ea60(iVar2 - iVar1,*(int *)(param_1 + 0x18) - *(int *)(unaff_EBX + 0x18),
                               iVar4 - iVar1);
          iVar2 = iVar2 + *(int *)(unaff_EBX + 0x18);
        }
        else {
          iVar2 = iVar2 + iVar6;
        }
      }
      else {
        iVar2 = iVar2 + iVar3;
      }
      *piVar7 = iVar2;
      piVar7 = piVar7 + 10;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}


/* FUN_006c9b20 @ 006c9b20  kind=gamemisc  attributed-by=role:artifact  size=380 */

void FUN_006c9b20(void)

{
  int iVar1;
  int *piVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int *piVar5;
  int in_ECX;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  short *psVar10;
  int *piVar11;
  int local_18;
  int local_14;
  
  piVar5 = (int *)(in_ECX + 0x30 + in_EAX * 0x1c);
  iVar3 = *(int *)(*(int *)(in_ECX + 0x70) + 0x24);
  piVar2 = (int *)piVar5[2];
  iVar9 = iVar3 * 8;
  piVar11 = piVar2 + *piVar5 * 0xd;
  iVar9 = (int)((iVar9 >> 0x1f & 0x7ffU) + iVar9) >> 0xb;
  if (iVar9 == 0) {
    iVar9 = 1;
  }
  iVar3 = iVar3 * 6000;
  if (piVar2 < piVar11) {
    iVar1 = (uint)((int)piVar11 + (-1 - (int)piVar2)) / 0x34 + 1;
    pcVar6 = (char *)((int)piVar2 + 1);
    local_14 = iVar1;
    do {
      if (((int)*pcVar6 == piVar5[6]) && (*(int *)(pcVar6 + 0x27) != *(int *)(pcVar6 + 0x2b))) {
        psVar10 = (short *)((int)piVar2 + 2);
        local_18 = iVar1;
        do {
          if ((int)*(char *)((int)psVar10 + -1) + (int)*pcVar6 == 0) {
            if (*(short *)(pcVar6 + 1) < *psVar10) {
              iVar8 = (int)*psVar10 - (int)*(short *)(pcVar6 + 1);
              if (iVar8 < 0) {
                iVar8 = -iVar8;
              }
              iVar7 = (int)*(short *)(pcVar6 + 3);
              if ((int)*(short *)(pcVar6 + 3) < (int)psVar10[1]) {
                iVar7 = (int)psVar10[1];
              }
              iVar4 = (int)*(short *)(pcVar6 + 5);
              if ((int)psVar10[2] < (int)*(short *)(pcVar6 + 5)) {
                iVar4 = (int)psVar10[2];
              }
              if (iVar9 <= iVar4 - iVar7) {
                iVar8 = ((int)(iVar3 + (iVar3 >> 0x1f & 0x7ffU)) >> 0xb) / (iVar4 - iVar7) + iVar8;
                if (iVar8 < *(int *)(pcVar6 + 0x1f)) {
                  *(int *)(pcVar6 + 0x1f) = iVar8;
                  *(short **)(pcVar6 + 0x13) = psVar10 + -1;
                }
                if (iVar8 < *(int *)(psVar10 + 0xf)) {
                  *(int *)(psVar10 + 0xf) = iVar8;
                  *(char **)(psVar10 + 9) = pcVar6 + -1;
                }
              }
            }
          }
          psVar10 = psVar10 + 0x1a;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
      }
      pcVar6 = pcVar6 + 0x34;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
    if (piVar2 < piVar11) {
      piVar5 = piVar2 + 5;
      do {
        iVar9 = *piVar5;
        if ((iVar9 != 0) && (*(int **)(iVar9 + 0x14) != piVar5 + -5)) {
          *piVar5 = 0;
          piVar5[1] = *(int *)(iVar9 + 0x14);
        }
        piVar2 = piVar5 + 8;
        piVar5 = piVar5 + 0xd;
      } while (piVar2 < piVar11);
    }
  }
  return;
}


/* FUN_006c9ca0 @ 006c9ca0  kind=gamemisc  attributed-by=role:artifact  size=692 */

int FUN_006c9ca0(void)

{
  char *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  bool bVar5;
  undefined2 *puVar6;
  int in_EAX;
  int iVar7;
  undefined4 uVar8;
  short *psVar9;
  undefined4 *in_ECX;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  undefined1 *puVar13;
  byte *pbVar14;
  char *pcVar15;
  undefined1 *puVar16;
  int iVar17;
  undefined4 uVar18;
  int local_18;
  int local_14;
  undefined2 *local_4;
  
  piVar2 = in_ECX + in_EAX * 7 + 0xc;
  uVar3 = *in_ECX;
  iVar7 = in_ECX[0x1c];
  iVar17 = *piVar2;
  pcVar4 = (char *)piVar2[2];
  piVar2[3] = 0;
  if (in_EAX == 0) {
    uVar18 = in_ECX[1];
    local_14 = FUN_0068ec40(0x40,in_ECX[3]);
  }
  else {
    uVar18 = in_ECX[3];
    local_14 = 0;
  }
  iVar7 = FUN_0068ebc0(*(undefined4 *)(in_EAX * 0x18c + iVar7 + 0xf4),uVar18);
  if (0x10 < iVar7) {
    iVar7 = 0x10;
  }
  iVar7 = FUN_0068ec40(iVar7,uVar18);
  if (pcVar4 < pcVar4 + iVar17 * 0x34) {
    pcVar15 = pcVar4 + 1;
    do {
      if ((local_14 <= *(short *)(pcVar15 + 7)) &&
         ((*(int *)(pcVar15 + 0x17) == 0 || (local_14 * 3 <= *(short *)(pcVar15 + 7) * 2)))) {
        iVar12 = 0;
        if (0 < piVar2[3]) {
          psVar9 = (short *)piVar2[5];
          do {
            iVar10 = (int)*(short *)(pcVar15 + 1) - (int)*psVar9;
            if (iVar10 < 0) {
              iVar10 = -iVar10;
            }
            if ((iVar10 < iVar7) && (*(char *)((int)psVar9 + 0xd) == *pcVar15)) {
              *(undefined4 *)(pcVar15 + 0xf) = *(undefined4 *)(psVar9 + 0x14);
              *(char **)(*(int *)(psVar9 + 0x16) + 0x10) = pcVar15 + -1;
              *(char **)(psVar9 + 0x16) = pcVar15 + -1;
              goto LAB_006c9e0c;
            }
            iVar12 = iVar12 + 1;
            psVar9 = psVar9 + 0x18;
          } while (iVar12 < piVar2[3]);
        }
        iVar12 = FUN_006c8710((int)*(short *)(pcVar15 + 1),(int)*pcVar15,uVar3,&local_4);
        puVar6 = local_4;
        if (iVar12 != 0) {
          return iVar12;
        }
        memset(local_4,0,0x30);
        pcVar1 = pcVar15 + -1;
        *(char **)(puVar6 + 0x14) = pcVar1;
        *(char **)(puVar6 + 0x16) = pcVar1;
        *puVar6 = *(undefined2 *)(pcVar15 + 1);
        *(char *)((int)puVar6 + 0xd) = *pcVar15;
        uVar8 = FUN_0068ebc0((int)*(short *)(pcVar15 + 1),uVar18);
        *(undefined4 *)(puVar6 + 4) = uVar8;
        *(undefined4 *)(puVar6 + 2) = uVar8;
        *(char **)(pcVar15 + 0xf) = pcVar1;
      }
LAB_006c9e0c:
      pcVar1 = pcVar15 + 0x33;
      pcVar15 = pcVar15 + 0x34;
    } while (pcVar1 < pcVar4 + iVar17 * 0x34);
  }
  puVar11 = (undefined1 *)piVar2[5];
  puVar16 = puVar11 + piVar2[3] * 0x30;
  puVar13 = puVar11;
  if (puVar11 < puVar16) {
    do {
      iVar7 = *(int *)(puVar13 + 0x28);
      if (iVar7 != 0) {
        do {
          *(undefined1 **)(iVar7 + 0xc) = puVar13;
          iVar7 = *(int *)(iVar7 + 0x10);
        } while (iVar7 != *(int *)(puVar13 + 0x28));
      }
      puVar13 = puVar13 + 0x30;
    } while (puVar13 < puVar16);
    if (puVar11 < puVar16) {
      puVar11 = puVar11 + 0xc;
      do {
        pbVar14 = *(byte **)(puVar11 + 0x1c);
        local_18 = 0;
        local_14 = 0;
        do {
          if ((*pbVar14 & 1) == 0) {
            local_14 = local_14 + 1;
          }
          else {
            local_18 = local_18 + 1;
          }
          iVar7 = *(int *)(pbVar14 + 0x18);
          if (((iVar7 == 0) || (*(undefined1 **)(iVar7 + 0xc) == (undefined1 *)0x0)) ||
             (*(undefined1 **)(iVar7 + 0xc) == puVar11 + -0xc)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          iVar17 = *(int *)(pbVar14 + 0x14);
          if (((iVar17 != 0) && (*(int *)(iVar17 + 0xc) != 0)) || (bVar5)) {
            psVar9 = *(short **)(puVar11 + 0xc);
            if (bVar5) {
              psVar9 = *(short **)(puVar11 + 0x10);
              iVar17 = iVar7;
            }
            if (psVar9 == (short *)0x0) {
LAB_006c9eec:
              psVar9 = *(short **)(iVar17 + 0xc);
            }
            else {
              iVar7 = (int)*(short *)(puVar11 + -0xc) - (int)*psVar9;
              if (iVar7 < 0) {
                iVar7 = -iVar7;
              }
              iVar12 = (int)*(short *)(pbVar14 + 2) - (int)*(short *)(iVar17 + 2);
              if (iVar12 < 0) {
                iVar12 = -iVar12;
              }
              if (iVar12 < iVar7) goto LAB_006c9eec;
            }
            if (bVar5) {
              *(short **)(puVar11 + 0x10) = psVar9;
              *(byte *)(psVar9 + 6) = *(byte *)(psVar9 + 6) | 2;
            }
            else {
              *(short **)(puVar11 + 0xc) = psVar9;
            }
          }
          pbVar14 = *(byte **)(pbVar14 + 0x10);
        } while (pbVar14 != *(byte **)(puVar11 + 0x1c));
        *puVar11 = 0;
        if ((0 < local_18) && (local_14 <= local_18)) {
          *puVar11 = 1;
        }
        if ((*(int *)(puVar11 + 0x10) != 0) && (*(int *)(puVar11 + 0xc) != 0)) {
          *(undefined4 *)(puVar11 + 0x10) = 0;
        }
        puVar13 = puVar11 + 0x24;
        puVar11 = puVar11 + 0x30;
      } while (puVar13 < puVar16);
    }
  }
  return 0;
}


/* FUN_006ca2f0 @ 006ca2f0  kind=gamemisc  attributed-by=role:artifact  size=1229 */

byte * FUN_006ca2f0(int param_1,int param_2)

{
  int *piVar1;
  byte bVar2;
  undefined1 uVar3;
  byte *pbVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  byte *pbVar18;
  byte *local_1c;
  int local_18;
  int local_10;
  
  iVar7 = param_1 + 0x30 + param_2 * 0x1c;
  pbVar4 = *(byte **)(iVar7 + 0x14);
  pbVar10 = pbVar4 + *(int *)(iVar7 + 0xc) * 0x30;
  local_1c = (byte *)0x0;
  local_10 = 0;
  if (param_2 == 1) {
    pbVar13 = pbVar4;
    if (pbVar4 < pbVar10) {
      do {
        if ((pbVar13[0xc] & 4) == 0) {
          iVar7 = *(int *)(pbVar13 + 0x14);
          pbVar14 = *(byte **)(pbVar13 + 0x18);
          pbVar8 = pbVar14;
          pbVar18 = pbVar13;
          if (((iVar7 != 0) ||
              ((pbVar14 != (byte *)0x0 &&
               (iVar7 = *(int *)(pbVar14 + 0x14), pbVar8 = pbVar13, pbVar18 = pbVar14, iVar7 != 0)))
              ) && (pbVar18 != (byte *)0x0)) {
            uVar5 = *(undefined4 *)(iVar7 + 8);
            pbVar18[0xc] = pbVar18[0xc] | 4;
            *(undefined4 *)(pbVar18 + 8) = uVar5;
            if ((pbVar8 != (byte *)0x0) && (*(int *)(pbVar8 + 0x14) == 0)) {
              FUN_006ca2c0(1);
              pbVar8[0xc] = pbVar8[0xc] | 4;
            }
            if (local_1c == (byte *)0x0) {
              local_1c = pbVar13;
            }
          }
        }
        pbVar13 = pbVar13 + 0x30;
      } while (pbVar13 < pbVar10);
      goto LAB_006ca3a3;
    }
  }
  else {
LAB_006ca3a3:
    if (pbVar4 < pbVar10) {
      pbVar13 = pbVar4 + 0xc;
      do {
        bVar2 = *pbVar13;
        if ((bVar2 & 4) == 0) {
          iVar7 = *(int *)(pbVar13 + 0xc);
          if (iVar7 == 0) {
            local_10 = local_10 + 1;
          }
          else if (*(int *)(iVar7 + 0x14) == 0) {
            if (local_1c == (byte *)0x0) {
              iVar9 = *(int *)(pbVar13 + -8);
              iVar15 = *(int *)(iVar7 + 4);
              iVar6 = FUN_006ca150(bVar2,*(undefined1 *)(iVar7 + 0xc));
              if (iVar6 < 0x41) {
                iVar11 = 0x20;
                local_18 = 0x20;
              }
              else {
                iVar11 = 0x26;
                local_18 = 0x1a;
              }
              if (iVar6 < 0x60) {
                iVar9 = (iVar15 - iVar9 >> 1) + iVar9;
                uVar12 = iVar9 + 0x20U & 0xffffffc0;
                iVar9 = iVar9 - uVar12;
                iVar15 = iVar9 + iVar11;
                if (iVar15 < 0) {
                  iVar15 = -iVar15;
                }
                iVar9 = iVar9 - local_18;
                if (iVar9 < 0) {
                  iVar9 = -iVar9;
                }
                if (iVar15 < iVar9) {
                  local_18 = -iVar11;
                }
                iVar9 = (uVar12 + local_18) - iVar6 / 2;
                *(int *)(pbVar13 + -4) = iVar9;
                *(int *)(iVar7 + 8) = iVar9 + iVar6;
              }
              else {
                *(uint *)(pbVar13 + -4) = iVar9 + 0x20U & 0xffffffc0;
              }
              *pbVar13 = *pbVar13 | 4;
              local_1c = pbVar13 + -0xc;
              FUN_006ca2c0(param_2);
            }
            else {
              iVar9 = *(int *)(pbVar13 + -8) + (*(int *)(local_1c + 8) - *(int *)(local_1c + 4));
              iVar16 = *(int *)(iVar7 + 4) - *(int *)(pbVar13 + -8);
              uVar3 = *(undefined1 *)(iVar7 + 0xc);
              iVar6 = iVar16 >> 1;
              iVar11 = iVar6 + iVar9;
              iVar15 = FUN_006ca150(bVar2,uVar3);
              if ((*(byte *)(iVar7 + 0xc) & 4) == 0) {
                if (iVar15 < 0x60) {
                  uVar12 = iVar11 + 0x20U & 0xffffffc0;
                  if (iVar15 < 0x41) {
                    iVar9 = 0x20;
                    iVar6 = 0x20;
                  }
                  else {
                    iVar6 = 0x26;
                    iVar9 = 0x1a;
                  }
                  iVar16 = (iVar6 - uVar12) + iVar11;
                  if (iVar16 < 0) {
                    iVar16 = -iVar16;
                  }
                  iVar11 = (iVar11 - iVar9) - uVar12;
                  if (iVar11 < 0) {
                    iVar11 = -iVar11;
                  }
                  if (iVar16 < iVar11) {
                    iVar9 = -iVar6;
                  }
                  *(uint *)(pbVar13 + -4) = (uVar12 + iVar9) - iVar15 / 2;
                  *(uint *)(iVar7 + 8) = iVar15 / 2 + uVar12 + iVar9;
                }
                else {
                  iVar11 = FUN_006ca150(bVar2,uVar3);
                  uVar12 = iVar9 + 0x20U & 0xffffffc0;
                  iVar6 = (iVar11 >> 1) - (iVar6 + iVar9);
                  iVar15 = iVar6 + uVar12;
                  if (iVar15 < 0) {
                    iVar15 = -iVar15;
                  }
                  uVar17 = (iVar16 + 0x20 + iVar9 & 0xffffffc0U) - iVar11;
                  iVar6 = iVar6 + uVar17;
                  if (iVar6 < 0) {
                    iVar6 = -iVar6;
                  }
                  if (iVar6 <= iVar15) {
                    uVar12 = uVar17;
                  }
                  *(uint *)(pbVar13 + -4) = uVar12;
                  *(uint *)(iVar7 + 8) = uVar12 + iVar11;
                }
              }
              else {
                *(int *)(pbVar13 + -4) = *(int *)(iVar7 + 8) - iVar15;
              }
              *pbVar13 = *pbVar13 | 4;
              *(byte *)(iVar7 + 0xc) = *(byte *)(iVar7 + 0xc) | 4;
              if ((pbVar4 < pbVar13 + -0xc) && (*(int *)(pbVar13 + -4) < *(int *)(pbVar13 + -0x34)))
              {
                *(int *)(pbVar13 + -4) = *(int *)(pbVar13 + -0x34);
              }
            }
          }
          else {
            FUN_006ca2c0(param_2);
            *pbVar13 = *pbVar13 | 4;
          }
        }
        pbVar14 = pbVar13 + 0x24;
        pbVar13 = pbVar13 + 0x30;
      } while (pbVar14 < pbVar10);
    }
  }
  pbVar13 = (byte *)(((int)pbVar10 - (int)pbVar4) * 0x2aaaaaab);
  iVar7 = ((int)pbVar10 - (int)pbVar4) / 0x30;
  if (param_2 == 0) {
    if (iVar7 == 6) {
      pbVar14 = pbVar4 + 0x60;
      pbVar13 = pbVar4 + 0xc0;
      pbVar8 = pbVar4;
    }
    else {
      if (iVar7 != 0xc) goto LAB_006ca67e;
      pbVar14 = pbVar4 + 0xf0;
      pbVar13 = pbVar4 + 0x1b0;
      pbVar8 = pbVar4 + 0x30;
    }
    iVar9 = (*(int *)(pbVar14 + 4) * 2 - *(int *)(pbVar13 + 4)) - *(int *)(pbVar8 + 4);
    if (iVar9 < 0) {
      iVar9 = -iVar9;
    }
    if (iVar9 < 8) {
      iVar9 = *(int *)(pbVar8 + 8) + *(int *)(pbVar14 + 8) * -2 + *(int *)(pbVar13 + 8);
      *(int *)(pbVar13 + 8) = *(int *)(pbVar13 + 8) - iVar9;
      if (*(int *)(pbVar13 + 0x18) != 0) {
        piVar1 = (int *)(*(int *)(pbVar13 + 0x18) + 8);
        *piVar1 = *piVar1 - iVar9;
      }
      if (iVar7 == 0xc) {
        *(int *)(pbVar4 + 0x188) = *(int *)(pbVar4 + 0x188) - iVar9;
        *(int *)(pbVar4 + 0x218) = *(int *)(pbVar4 + 0x218) - iVar9;
      }
      pbVar13[0xc] = pbVar13[0xc] | 4;
      pbVar13 = *(byte **)(pbVar13 + 0x18);
      if (pbVar13 != (byte *)0x0) {
        pbVar13[0xc] = pbVar13[0xc] | 4;
      }
    }
  }
LAB_006ca67e:
  if (((local_10 != 0) || (local_1c == (byte *)0x0)) && (pbVar4 < pbVar10)) {
    pbVar14 = pbVar4 + 0x1c;
    do {
      if ((pbVar14[-0x10] & 4) == 0) {
        if (*(int *)pbVar14 == 0) {
LAB_006ca6dc:
          if (local_1c == (byte *)0x0) {
            local_1c = pbVar14 + -0x1c;
            uVar12 = *(int *)(pbVar14 + -0x18) + 0x20U & 0xffffffc0;
          }
          else {
            for (pbVar13 = pbVar14 + -0x4c; (pbVar4 <= pbVar13 && ((pbVar13[0xc] & 4) == 0));
                pbVar13 = pbVar13 + -0x30) {
            }
            for (pbVar8 = pbVar14 + 0x14; (pbVar8 < pbVar10 && ((pbVar8[0xc] & 4) == 0));
                pbVar8 = pbVar8 + 0x30) {
            }
            if ((((pbVar13 < pbVar4) || (pbVar14 + -0x1c <= pbVar13)) || (pbVar10 <= pbVar8)) ||
               (pbVar8 <= pbVar14 + -0x1c)) {
              uVar12 = ((*(int *)(pbVar14 + -0x18) - *(int *)(local_1c + 4)) + 0x10U & 0xffffffe0) +
                       *(int *)(local_1c + 8);
            }
            else {
              if (*(int *)(pbVar8 + 4) != *(int *)(pbVar13 + 4)) {
                iVar7 = FUN_0068ea60(*(int *)(pbVar14 + -0x18) - *(int *)(pbVar13 + 4),
                                     *(int *)(pbVar8 + 8) - *(int *)(pbVar13 + 8),
                                     *(int *)(pbVar8 + 4) - *(int *)(pbVar13 + 4));
                *(int *)(pbVar14 + -0x14) = iVar7 + *(int *)(pbVar13 + 8);
                goto LAB_006ca77c;
              }
              uVar12 = *(uint *)(pbVar13 + 8);
            }
          }
          *(uint *)(pbVar14 + -0x14) = uVar12;
        }
        else {
          iVar7 = *(int *)(*(int *)pbVar14 + 4) - *(int *)(pbVar14 + -0x18);
          if (iVar7 < 0) {
            iVar7 = -iVar7;
          }
          if (0x4f < iVar7) goto LAB_006ca6dc;
          FUN_006cb1a0();
        }
LAB_006ca77c:
        pbVar14[-0x10] = pbVar14[-0x10] | 4;
        pbVar13 = pbVar14 + -0x1c;
        if ((pbVar4 < pbVar13) &&
           (pbVar13 = *(byte **)(pbVar14 + -0x44), *(int *)(pbVar14 + -0x14) < (int)pbVar13)) {
          *(byte **)(pbVar14 + -0x14) = pbVar13;
        }
        if (((pbVar14 + 0x14 < pbVar10) && ((pbVar14[0x20] & 4) != 0)) &&
           (pbVar13 = *(byte **)(pbVar14 + 0x1c), (int)pbVar13 < *(int *)(pbVar14 + -0x14))) {
          *(byte **)(pbVar14 + -0x14) = pbVar13;
        }
      }
      pbVar8 = pbVar14 + 0x14;
      pbVar14 = pbVar14 + 0x30;
    } while (pbVar8 < pbVar10);
  }
  return pbVar13;
}


/* FUN_006ca960 @ 006ca960  kind=gamemisc  attributed-by=role:artifact  size=724 */

void FUN_006ca960(void)

{
  int iVar1;
  int *piVar2;
  short *psVar3;
  int in_EAX;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int in_ECX;
  char *pcVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  short *psVar13;
  int *piVar14;
  undefined4 uVar15;
  int iVar16;
  
  piVar9 = *(int **)(in_EAX + 0x38 + in_ECX * 0x1c);
  iVar11 = *(int *)(in_EAX + 0x48 + in_ECX * 0x1c);
  iVar1 = *(int *)(*(int *)(in_EAX + 0x70) + 0x24) * 8;
  piVar14 = piVar9 + *(int *)(in_EAX + 0x30 + in_ECX * 0x1c) * 0xd;
  if (in_ECX == 0) {
    uVar15 = *(undefined4 *)(in_EAX + 4);
  }
  else {
    uVar15 = *(undefined4 *)(in_EAX + 0xc);
  }
  iVar4 = FUN_0068ec40(0xc0,uVar15);
  if (piVar9 < piVar14) {
    pcVar7 = (char *)((int)piVar9 + 1);
    do {
      if ((*(int *)(pcVar7 + 0x27) != *(int *)(pcVar7 + 0x2b)) && (*pcVar7 == iVar11)) {
        piVar5 = piVar9 + 1;
        do {
          if (((piVar5 + -1 != (int *)(pcVar7 + -1)) &&
              ((int)*(char *)((int)piVar5 + -3) + (int)*pcVar7 == 0)) &&
             (iVar12 = (int)*(short *)((int)piVar5 + -2) - (int)*(short *)(pcVar7 + 1), -1 < iVar12)
             ) {
            iVar16 = (int)*(short *)(pcVar7 + 3);
            if ((int)*(short *)(pcVar7 + 3) < (int)(short)*piVar5) {
              iVar16 = (int)(short)*piVar5;
            }
            iVar10 = (int)*(short *)(pcVar7 + 5);
            if ((int)*(short *)((int)piVar5 + 2) < (int)*(short *)(pcVar7 + 5)) {
              iVar10 = (int)*(short *)((int)piVar5 + 2);
            }
            iVar10 = iVar10 - iVar16;
            if ((int)(iVar1 + (iVar1 >> 0x1f & 0x7ffU)) >> 0xb <= iVar10) {
              iVar16 = iVar12 * 8;
              if ((iVar16 < *(int *)(pcVar7 + 0x1f) * 9) &&
                 ((iVar16 < *(int *)(pcVar7 + 0x1f) * 7 || (*(int *)(pcVar7 + 0x23) < iVar10)))) {
                *(int *)(pcVar7 + 0x1f) = iVar12;
                *(int *)(pcVar7 + 0x23) = iVar10;
                *(int **)(pcVar7 + 0x13) = piVar5 + -1;
              }
              if ((iVar16 < piVar5[7] * 9) && ((iVar16 < piVar5[7] * 7 || (piVar5[8] < iVar10)))) {
                piVar5[8] = iVar10;
                piVar5[7] = iVar12;
                piVar5[4] = (int)(pcVar7 + -1);
              }
            }
          }
          piVar2 = piVar5 + 0xc;
          piVar5 = piVar5 + 0xd;
        } while (piVar2 < piVar14);
      }
      piVar5 = (int *)(pcVar7 + 0x33);
      pcVar7 = pcVar7 + 0x34;
    } while (piVar5 < piVar14);
    if (piVar9 < piVar14) {
      piVar5 = piVar9 + 8;
      do {
        piVar2 = (int *)piVar5[-3];
        if ((((piVar2 != (int *)0x0) && ((int *)piVar2[5] == piVar5 + -8)) &&
            (*(short *)((int)piVar5 + -0x1e) < *(short *)((int)piVar2 + 2))) && (*piVar5 < iVar4)) {
          psVar13 = (short *)((int)piVar9 + 2);
          do {
            if (((*psVar13 <= *(short *)((int)piVar5 + -0x1e)) &&
                (piVar5 + -8 != (int *)(psVar13 + -1))) &&
               ((psVar3 = *(short **)(psVar13 + 9), psVar3 != (short *)0x0 &&
                (*(int **)(psVar3 + 10) == (int *)(psVar13 + -1))))) {
              if ((*(short *)((int)piVar2 + 2) <= psVar3[1]) &&
                 ((*(short *)((int)piVar5 + -0x1e) != *psVar13 ||
                  (*(short *)((int)piVar2 + 2) != psVar3[1])))) {
                iVar11 = *(int *)(psVar13 + 0xf);
                if ((*piVar5 < iVar11) &&
                   (iVar1 = *piVar5 * 4, iVar1 - iVar11 != 0 && iVar11 <= iVar1)) {
                  if (piVar5[1] < *(int *)(psVar13 + 0x11) * 3) {
                    piVar2[5] = 0;
                    piVar5[-3] = 0;
                    break;
                  }
                  piVar8 = piVar9 + 5;
                  iVar11 = (uint)((int)piVar14 + (-1 - (int)piVar9)) / 0x34 + 1;
                  do {
                    piVar6 = piVar2;
                    if ((short *)*piVar8 == psVar13 + -1) {
LAB_006caba7:
                      piVar8[1] = (int)piVar6;
                      *piVar8 = 0;
                    }
                    else if ((short *)*piVar8 == psVar3) {
                      piVar6 = piVar5 + -8;
                      goto LAB_006caba7;
                    }
                    piVar8 = piVar8 + 0xd;
                    iVar11 = iVar11 + -1;
                  } while (iVar11 != 0);
                }
              }
            }
            piVar8 = (int *)(psVar13 + 0x19);
            psVar13 = psVar13 + 0x1a;
          } while (piVar8 < piVar14);
        }
        piVar2 = piVar5 + 5;
        piVar5 = piVar5 + 0xd;
      } while (piVar2 < piVar14);
    }
  }
  if (piVar9 < piVar14) {
    piVar9 = piVar9 + 5;
    do {
      iVar11 = *piVar9;
      if ((iVar11 != 0) &&
         (*(int *)(iVar11 + 0x1c) = *(int *)(iVar11 + 0x1c) + 1,
         *(int **)(iVar11 + 0x14) != piVar9 + -5)) {
        *piVar9 = 0;
        if ((*(int *)(iVar11 + 0x20) < iVar4) || (piVar9[3] < *(int *)(iVar11 + 0x20) * 4)) {
          piVar9[1] = *(int *)(iVar11 + 0x14);
        }
        else {
          *(int *)(iVar11 + 0x1c) = *(int *)(iVar11 + 0x1c) + -1;
        }
      }
      piVar5 = piVar9 + 8;
      piVar9 = piVar9 + 0xd;
    } while (piVar5 < piVar14);
  }
  return;
}


/* FUN_006cac40 @ 006cac40  kind=gamemisc  attributed-by=role:artifact  size=803 */

int FUN_006cac40(void)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  short sVar4;
  undefined4 uVar5;
  bool bVar6;
  int in_EAX;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  short *psVar11;
  undefined4 *in_ECX;
  undefined1 *puVar12;
  byte *pbVar13;
  short *psVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined4 uVar17;
  short *psVar18;
  int iVar19;
  int local_30;
  int local_28;
  int local_24;
  int local_1c;
  int local_18;
  short *local_14;
  short *local_4;
  
  piVar2 = in_ECX + in_EAX * 7 + 0xc;
  uVar5 = *in_ECX;
  psVar11 = (short *)piVar2[2];
  iVar8 = in_EAX * 0x18c + 0x28 + in_ECX[0x1c];
  iVar19 = *piVar2;
  piVar2[3] = 0;
  if (in_EAX == 0) {
    uVar17 = in_ECX[1];
  }
  else {
    uVar17 = in_ECX[3];
  }
  iVar7 = FUN_0068ebc0(*(undefined4 *)(iVar8 + 0xcc),uVar17);
  if (iVar7 < 0x11) {
    local_30 = *(int *)(iVar8 + 0xcc);
  }
  else {
    local_30 = FUN_0068ec40(0x10,uVar17);
  }
  if (psVar11 < psVar11 + iVar19 * 0x1a) {
    psVar14 = psVar11 + 1;
    do {
      local_14 = (short *)0x0;
      local_1c = 0xffff;
      if (piVar2[3] < 1) {
LAB_006cad9f:
        iVar8 = FUN_006c8710((int)*psVar14,(int)*(char *)((int)psVar14 + -1),uVar5,&local_4);
        psVar18 = local_4;
        if (iVar8 != 0) {
          return iVar8;
        }
        memset(local_4,0,0x30);
        psVar1 = psVar14 + -1;
        *(short **)(psVar18 + 0x14) = psVar1;
        *(short **)(psVar18 + 0x16) = psVar1;
        *psVar18 = *psVar14;
        uVar10 = FUN_0068ebc0((int)*psVar14,uVar17);
        *(undefined4 *)(psVar18 + 4) = uVar10;
        *(undefined4 *)(psVar18 + 2) = uVar10;
        *(short **)(psVar14 + 7) = psVar1;
        *(undefined1 *)((int)psVar18 + 0xd) = *(undefined1 *)((int)psVar14 + -1);
      }
      else {
        local_18 = piVar2[3];
        psVar18 = (short *)piVar2[5];
        do {
          if (*(char *)((int)psVar18 + 0xd) == *(char *)((int)psVar14 + -1)) {
            iVar8 = (int)*psVar14 - (int)*psVar18;
            if (iVar8 < 0) {
              iVar8 = -iVar8;
            }
            if ((iVar8 < local_30) && (iVar8 < local_1c)) {
              if (*(int *)(psVar14 + 9) != 0) {
                iVar9 = 0;
                iVar7 = *(int *)(psVar18 + 0x14);
                do {
                  if (*(int *)(iVar7 + 0x14) != 0) {
                    sVar3 = *(short *)(*(int *)(psVar14 + 9) + 2);
                    sVar4 = *(short *)(*(int *)(iVar7 + 0x14) + 2);
                    if (sVar4 < sVar3) {
                      iVar9 = (int)sVar3 - (int)sVar4;
                    }
                    else {
                      iVar9 = (int)sVar4 - (int)sVar3;
                    }
                    if (local_30 <= iVar9) goto LAB_006cad8a;
                  }
                  iVar7 = *(int *)(iVar7 + 0x10);
                } while (iVar7 != *(int *)(psVar18 + 0x14));
                if (local_30 <= iVar9) goto LAB_006cad8a;
              }
              local_1c = iVar8;
              local_14 = psVar18;
            }
          }
LAB_006cad8a:
          psVar18 = psVar18 + 0x18;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
        if (local_14 == (short *)0x0) goto LAB_006cad9f;
        *(undefined4 *)(psVar14 + 7) = *(undefined4 *)(local_14 + 0x14);
        *(short **)(*(int *)(local_14 + 0x16) + 0x10) = psVar14 + -1;
        *(short **)(local_14 + 0x16) = psVar14 + -1;
      }
      psVar18 = psVar14 + 0x19;
      psVar14 = psVar14 + 0x1a;
    } while (psVar18 < psVar11 + iVar19 * 0x1a);
  }
  puVar16 = (undefined1 *)piVar2[5];
  puVar15 = puVar16 + piVar2[3] * 0x30;
  puVar12 = puVar16;
  if (puVar16 < puVar15) {
    do {
      iVar8 = *(int *)(puVar12 + 0x28);
      if (iVar8 != 0) {
        do {
          *(undefined1 **)(iVar8 + 0xc) = puVar12;
          iVar8 = *(int *)(iVar8 + 0x10);
        } while (iVar8 != *(int *)(puVar12 + 0x28));
      }
      puVar12 = puVar12 + 0x30;
    } while (puVar12 < puVar15);
    if (puVar16 < puVar15) {
      puVar16 = puVar16 + 0xc;
      do {
        pbVar13 = *(byte **)(puVar16 + 0x1c);
        local_24 = 0;
        local_28 = 0;
        do {
          if ((*pbVar13 & 1) == 0) {
            local_28 = local_28 + 1;
          }
          else {
            local_24 = local_24 + 1;
          }
          iVar8 = *(int *)(pbVar13 + 0x18);
          if ((iVar8 == 0) || (*(undefined1 **)(iVar8 + 0xc) == puVar16 + -0xc)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if ((*(int *)(pbVar13 + 0x14) != 0) || (bVar6)) {
            psVar11 = *(short **)(puVar16 + 0xc);
            iVar19 = *(int *)(pbVar13 + 0x14);
            if (bVar6) {
              psVar11 = *(short **)(puVar16 + 0x10);
              iVar19 = iVar8;
            }
            if (psVar11 == (short *)0x0) {
LAB_006caf09:
              psVar11 = *(short **)(iVar19 + 0xc);
            }
            else {
              iVar8 = (int)*(short *)(puVar16 + -0xc) - (int)*psVar11;
              if (iVar8 < 0) {
                iVar8 = -iVar8;
              }
              sVar3 = *(short *)(pbVar13 + 2);
              sVar4 = *(short *)(iVar19 + 2);
              if (sVar4 < sVar3) {
                iVar7 = (int)sVar3 - (int)sVar4;
              }
              else {
                iVar7 = (int)sVar4 - (int)sVar3;
              }
              if (iVar7 < iVar8) goto LAB_006caf09;
            }
            if (bVar6) {
              *(short **)(puVar16 + 0x10) = psVar11;
              *(byte *)(psVar11 + 6) = *(byte *)(psVar11 + 6) | 2;
            }
            else {
              *(short **)(puVar16 + 0xc) = psVar11;
            }
          }
          pbVar13 = *(byte **)(pbVar13 + 0x10);
        } while (pbVar13 != *(byte **)(puVar16 + 0x1c));
        *puVar16 = 0;
        if ((0 < local_24) && (local_28 <= local_24)) {
          *puVar16 = 1;
        }
        if ((*(int *)(puVar16 + 0x10) != 0) && (*(int *)(puVar16 + 0xc) != 0)) {
          *(undefined4 *)(puVar16 + 0x10) = 0;
        }
        puVar12 = puVar16 + 0x24;
        puVar16 = puVar16 + 0x30;
      } while (puVar12 < puVar15);
    }
  }
  return 0;
}


/* FUN_006cb340 @ 006cb340  kind=gamemisc  attributed-by=role:artifact  size=673 */

short * __cdecl FUN_006cb340(int param_1)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  int iVar4;
  int in_EAX;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
  short *psVar11;
  byte *pbVar12;
  undefined4 local_8;
  short *local_4;
  
  iVar4 = param_1;
  iVar10 = in_EAX + 0x30 + param_1 * 0x1c;
  psVar2 = *(short **)(iVar10 + 0x14);
  psVar5 = psVar2 + *(int *)(iVar10 + 0xc) * 0x18;
  local_4 = (short *)0x0;
  local_8 = 0;
  param_1 = 0;
  for (psVar7 = psVar2; psVar7 < psVar5; psVar7 = psVar7 + 0x18) {
    if ((*(byte *)(psVar7 + 6) & 4) == 0) {
      psVar6 = *(short **)(psVar7 + 0xc);
      if (psVar6 == (short *)0x0) {
        param_1 = param_1 + 1;
      }
      else if (psVar6 < psVar7) {
        FUN_006cb180(in_EAX);
        *(byte *)(psVar7 + 6) = *(byte *)(psVar7 + 6) | 4;
      }
      else {
        if ((iVar4 == 1) || (local_4 != (short *)0x0)) {
          FUN_006cb1b0(psVar7,psVar6,local_8);
        }
        else {
          local_8 = FUN_006cb1b0(psVar7,psVar6,0);
        }
        *(byte *)(psVar7 + 6) = *(byte *)(psVar7 + 6) | 4;
        *(byte *)(psVar6 + 6) = *(byte *)(psVar6 + 6) | 4;
        local_4 = psVar7;
      }
    }
  }
  iVar9 = (int)psVar5 - (int)psVar2;
  psVar7 = (short *)(iVar9 * 0x2aaaaaab);
  iVar10 = iVar9 / 0x30;
  if (iVar4 == 0) {
    if (iVar10 == 6) {
      psVar6 = psVar2 + 0x30;
      psVar8 = psVar2 + 0x60;
      psVar11 = psVar2;
    }
    else {
      if (iVar10 != 0xc) goto LAB_006cb4bc;
      psVar6 = psVar2 + 0x78;
      psVar8 = psVar2 + 0xd8;
      psVar11 = psVar2 + 0x18;
    }
    psVar7 = (short *)((*(int *)(psVar6 + 2) * 2 - *(int *)(psVar8 + 2)) - *(int *)(psVar11 + 2));
    if ((int)psVar7 < 0) {
      psVar7 = (short *)-(int)psVar7;
    }
    if ((((*(short **)(psVar11 + 0xc) == psVar11 + 0x18) &&
         (*(short **)(psVar6 + 0xc) == psVar6 + 0x18)) &&
        (psVar3 = *(short **)(psVar8 + 0xc), psVar3 == psVar8 + 0x18)) && ((int)psVar7 < 8)) {
      psVar7 = (short *)(*(int *)(psVar11 + 4) + *(int *)(psVar6 + 4) * -2 + *(int *)(psVar8 + 4));
      *(int *)(psVar8 + 4) = *(int *)(psVar8 + 4) - (int)psVar7;
      if (psVar3 != (short *)0x0) {
        *(int *)(psVar3 + 4) = *(int *)(psVar3 + 4) - (int)psVar7;
      }
      if (iVar10 == 0xc) {
        *(int *)(psVar2 + 0xc4) = *(int *)(psVar2 + 0xc4) - (int)psVar7;
        *(int *)(psVar2 + 0x10c) = *(int *)(psVar2 + 0x10c) - (int)psVar7;
      }
      *(byte *)(psVar8 + 6) = *(byte *)(psVar8 + 6) | 4;
      if (*(int *)(psVar8 + 0xc) != 0) {
        pbVar12 = (byte *)(*(int *)(psVar8 + 0xc) + 0xc);
        *pbVar12 = *pbVar12 | 4;
      }
    }
  }
LAB_006cb4bc:
  if (param_1 != 0) {
    if (psVar2 < psVar5) {
      psVar7 = (short *)((iVar9 - 1U) * -0x55555555);
      pbVar12 = (byte *)(psVar2 + 6);
      iVar10 = (iVar9 - 1U) / 0x30 + 1;
      do {
        if (((*pbVar12 & 4) == 0) && (*(int *)(pbVar12 + 0x10) != 0)) {
          psVar7 = (short *)FUN_006cb1a0();
          *pbVar12 = *pbVar12 | 4;
          param_1 = param_1 + -1;
        }
        pbVar12 = pbVar12 + 0x30;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    if ((param_1 != 0) && (psVar2 < psVar5)) {
      psVar6 = psVar2 + -0x18;
      do {
        psVar7 = psVar6;
        if ((*(byte *)(psVar6 + 0x1e) & 4) == 0) {
          for (; (psVar2 <= psVar7 && ((*(byte *)(psVar7 + 6) & 4) == 0)); psVar7 = psVar7 + -0x18)
          {
          }
          for (psVar8 = psVar6 + 0x30; (psVar8 < psVar5 && ((*(byte *)(psVar8 + 6) & 4) == 0));
              psVar8 = psVar8 + 0x18) {
          }
          if (psVar7 < psVar2) {
            if (psVar8 < psVar5) {
              FUN_006cb1a0();
            }
          }
          else if (psVar8 < psVar5) {
            sVar1 = *psVar7;
            if (*psVar8 == sVar1) {
              *(undefined4 *)(psVar6 + 0x1c) = *(undefined4 *)(psVar7 + 4);
            }
            else {
              iVar10 = FUN_0068ea60((int)psVar6[0x18] - (int)sVar1,
                                    *(int *)(psVar8 + 4) - *(int *)(psVar7 + 4),
                                    (int)*psVar8 - (int)sVar1);
              *(int *)(psVar6 + 0x1c) = iVar10 + *(int *)(psVar7 + 4);
            }
          }
          else {
            FUN_006cb1a0();
          }
        }
        psVar7 = psVar6 + 0x30;
        psVar6 = psVar6 + 0x18;
      } while (psVar7 < psVar5);
    }
  }
  return psVar7;
}


/* FUN_006d0440 @ 006d0440  kind=gamemisc  attributed-by=role:artifact  size=43 */

undefined4 FUN_006d0440(int param_1,int param_2)

{
  if ((**(int **)(param_1 + 0x1c) < 0x41) && (param_2 != 0)) {
    return 0xffffffff;
  }
  (*(int **)(param_1 + 0x1c))[0x392] = (uint)(param_2 != 0);
  return 0;
}


/* FUN_006d07c0 @ 006d07c0  kind=gamemisc  attributed-by=role:artifact  size=51 */

undefined * FUN_006d07c0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x68) + 4 + param_2 * 4);
  if (iVar1 + -1 < 0) {
    return (undefined *)0x0;
  }
  return (&PTR_DAT_0073fe10)[iVar1 - *(int *)(*(int *)(*(int *)(param_1 + 4) + 0x1c) + 0xe48)];
}


/* FUN_006d0800 @ 006d0800  kind=gamemisc  attributed-by=role:artifact  size=794 */

int FUN_006d0800(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  uint uVar15;
  int local_18;
  int local_14;
  
  iVar2 = *(int *)(param_1 + 4);
  piVar3 = *(int **)(iVar2 + 0x1c);
  iVar4 = piVar3[*(int *)(param_1 + 0x28)];
  bVar9 = (char)piVar3[0x392] + 1;
  iVar13 = piVar3[1] >> (bVar9 & 0x1f);
  uVar6 = *piVar3 >> (bVar9 & 0x1f);
  if (*(int *)(param_1 + 0x18) < 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x30) == iVar13) {
    local_14 = 0;
    if (0 < *(int *)(iVar2 + 4)) {
      do {
        iVar5 = *(int *)(*(int *)(param_1 + 8) + local_14 * 4);
        iVar10 = 0;
        if (3 < iVar13) {
          iVar7 = (iVar13 - 4U >> 2) + 1;
          puVar14 = (undefined4 *)(iVar5 + iVar13 * 4);
          puVar11 = (undefined4 *)(iVar5 + 8);
          iVar10 = iVar7 * 4;
          do {
            uVar1 = puVar11[-2];
            puVar11[-2] = *puVar14;
            *puVar14 = uVar1;
            uVar1 = puVar11[-1];
            puVar11[-1] = puVar14[1];
            puVar14[1] = uVar1;
            uVar1 = *puVar11;
            *puVar11 = puVar14[2];
            puVar14[2] = uVar1;
            uVar1 = puVar11[1];
            puVar11[1] = puVar14[3];
            puVar14[3] = uVar1;
            puVar14 = puVar14 + 4;
            puVar11 = puVar11 + 4;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        if (iVar10 < iVar13) {
          puVar11 = (undefined4 *)(iVar5 + (iVar10 + iVar13) * 4);
          do {
            uVar1 = *(undefined4 *)(iVar5 + iVar10 * 4);
            *(undefined4 *)(iVar5 + iVar10 * 4) = *puVar11;
            iVar10 = iVar10 + 1;
            *puVar11 = uVar1;
            puVar11 = puVar11 + 1;
          } while (iVar10 < iVar13);
        }
        local_14 = local_14 + 1;
      } while (local_14 < *(int *)(iVar2 + 4));
    }
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - iVar13;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - iVar13;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if ((*(uint *)(param_1 + 0x28) ^ *(uint *)(param_1 + 0x24)) == 1) {
    local_18 = 0;
    if (0 < *(int *)(iVar2 + 4)) {
      uVar8 = (int)(uVar6 + iVar13) / 2;
      iVar10 = uVar8 - 1;
      do {
        iVar7 = *(int *)(*(int *)(param_1 + 8) + local_18 * 4);
        iVar5 = ((int)(iVar13 - uVar6) / 2) * 4 + iVar7;
        if (-1 < iVar10) {
          iVar12 = iVar10;
          if (3 < (int)uVar8) {
            uVar15 = uVar8 >> 2;
            puVar14 = (undefined4 *)(iVar7 + (uVar8 - 4) * 4);
            puVar11 = (undefined4 *)(iVar5 + -4 + iVar10 * 4);
            iVar12 = iVar10 + uVar15 * -4;
            do {
              puVar11[1] = puVar14[3];
              *puVar11 = *(undefined4 *)((iVar7 - iVar5) + (int)puVar11);
              puVar11[-1] = puVar14[1];
              puVar11[-2] = *puVar14;
              puVar11 = puVar11 + -4;
              puVar14 = puVar14 + -4;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
          if (-1 < iVar12) {
            puVar11 = (undefined4 *)(iVar5 + iVar12 * 4);
            do {
              iVar12 = iVar12 + -1;
              *puVar11 = *(undefined4 *)((int)puVar11 + (iVar7 - iVar5));
              puVar11 = puVar11 + -1;
            } while (-1 < iVar12);
          }
        }
        local_18 = local_18 + 1;
      } while (local_18 < *(int *)(iVar2 + 4));
    }
    iVar10 = (int)(iVar13 - uVar6) / 2;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + iVar10;
  }
  else {
    if (*(uint *)(param_1 + 0x24) != 0) goto LAB_006d0ada;
    local_14 = 0;
    if (0 < *(int *)(iVar2 + 4)) {
      iVar10 = uVar6 - 1;
      do {
        iVar7 = *(int *)(*(int *)(param_1 + 8) + local_14 * 4);
        iVar5 = (iVar13 - uVar6) * 4 + iVar7;
        if (-1 < iVar10) {
          iVar12 = iVar10;
          if (3 < (int)uVar6) {
            uVar8 = uVar6 >> 2;
            puVar14 = (undefined4 *)(iVar7 + (uVar6 - 4) * 4);
            puVar11 = (undefined4 *)(iVar5 + -4 + iVar10 * 4);
            iVar12 = iVar10 + uVar8 * -4;
            do {
              puVar11[1] = puVar14[3];
              *puVar11 = *(undefined4 *)((iVar7 - iVar5) + (int)puVar11);
              puVar11[-1] = puVar14[1];
              puVar11[-2] = *puVar14;
              puVar11 = puVar11 + -4;
              puVar14 = puVar14 + -4;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          if (-1 < iVar12) {
            puVar11 = (undefined4 *)(iVar5 + iVar12 * 4);
            do {
              iVar12 = iVar12 + -1;
              *puVar11 = *(undefined4 *)((int)puVar11 + (iVar7 - iVar5));
              puVar11 = puVar11 + -1;
            } while (-1 < iVar12);
          }
        }
        local_14 = local_14 + 1;
      } while (local_14 < *(int *)(iVar2 + 4));
    }
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + (iVar13 - uVar6);
    iVar10 = iVar13 - uVar6;
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + iVar10;
LAB_006d0ada:
  if (param_2 != (undefined4 *)0x0) {
    iVar10 = 0;
    if (0 < *(int *)(iVar2 + 4)) {
      do {
        iVar5 = iVar10 * 4;
        iVar10 = iVar10 + 1;
        *(int *)(*(int *)(param_1 + 0xc) + -4 + iVar10 * 4) =
             *(int *)(*(int *)(param_1 + 8) + iVar5) + *(int *)(param_1 + 0x18) * 4;
      } while (iVar10 < *(int *)(iVar2 + 4));
    }
    *param_2 = *(undefined4 *)(param_1 + 0xc);
  }
  return (iVar13 - *(int *)(param_1 + 0x18)) + (iVar4 >> (bVar9 & 0x1f));
}


/* FUN_006d2870 @ 006d2870  kind=gamemisc  attributed-by=role:artifact  size=307 */

undefined4 FUN_006d2870(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  undefined4 *in_EDX;
  double dVar3;
  
  memset(in_ECX,0,0x38);
  in_ECX[3] = in_EDX;
  in_ECX[1] = in_EDX[1];
  in_ECX[2] = in_EDX[1];
  *in_ECX = *in_EDX;
  uVar2 = FUN_006d1fa0(0);
  in_ECX[5] = uVar2;
  uVar2 = FUN_006d1f00();
  in_ECX[0xb] = uVar2;
  uVar1 = in_EDX[4];
  dVar3 = (double)(uVar1 & 0x1fffff);
  if ((int)uVar1 < 0) {
    dVar3 = -dVar3;
  }
  dVar3 = ldexp(dVar3,((int)uVar1 >> 0x15 & 0x3ffU) - 0x314);
  floor((double)((float)dVar3 + 0.5));
  uVar2 = FUN_0068d910();
  in_ECX[0xc] = uVar2;
  uVar1 = in_EDX[5];
  dVar3 = (double)(uVar1 & 0x1fffff);
  if ((int)uVar1 < 0) {
    dVar3 = -dVar3;
  }
  dVar3 = ldexp(dVar3,((int)uVar1 >> 0x15 & 0x3ffU) - 0x314);
  floor((double)((float)dVar3 + 0.5));
  uVar2 = FUN_0068d910();
  in_ECX[0xd] = uVar2;
  return 0;
}


/* FUN_006d2a00 @ 006d2a00  kind=gamemisc  attributed-by=role:artifact  size=91 */

void FUN_006d2a00(void)

{
  void *in_ECX;
  
  if (*(void **)((int)in_ECX + 0x10) != (void *)0x0) {
    free(*(void **)((int)in_ECX + 0x10));
  }
  if (*(void **)((int)in_ECX + 0x14) != (void *)0x0) {
    free(*(void **)((int)in_ECX + 0x14));
  }
  if (*(void **)((int)in_ECX + 0x18) != (void *)0x0) {
    free(*(void **)((int)in_ECX + 0x18));
  }
  if (*(void **)((int)in_ECX + 0x1c) != (void *)0x0) {
    free(*(void **)((int)in_ECX + 0x1c));
  }
  if (*(void **)((int)in_ECX + 0x20) != (void *)0x0) {
    free(*(void **)((int)in_ECX + 0x20));
  }
  memset(in_ECX,0,0x38);
  return;
}


/* FUN_006d3600 @ 006d3600  kind=gamemisc  attributed-by=role:artifact  size=33 */

undefined4 FUN_006d3600(void)

{
  int iVar1;
  int in_ECX;
  
  if (0 < *(int *)(in_ECX + 8)) {
    iVar1 = FUN_006d3630();
    if (-1 < iVar1) {
      return *(undefined4 *)(*(int *)(in_ECX + 0x18) + iVar1 * 4);
    }
  }
  return 0xffffffff;
}


/* FUN_006d48a0 @ 006d48a0  kind=gamemisc  attributed-by=role:artifact  size=278 */

void FUN_006d48a0(float *param_1,int param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *in_ECX;
  int in_EDX;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  iVar3 = *in_ECX;
  fVar1 = (float)in_ECX[0xc];
  fVar2 = *(float *)(in_ECX[1] + 0xc + param_2 * 4);
  iVar4 = 0;
  if (0 < iVar3) {
    param_3 = param_3 - (int)param_1;
    param_5 = param_5 - (int)param_1;
    iVar5 = in_EDX - (int)param_1;
    param_4 = param_4 - (int)param_1;
    do {
      fVar6 = *(float *)(*(int *)(in_ECX[3] + param_2 * 4) + iVar4 * 4) +
              *(float *)(iVar5 + (int)param_1);
      if (*(float *)(in_ECX[1] + 0x6c) < fVar6) {
        fVar6 = *(float *)(in_ECX[1] + 0x6c);
      }
      fVar7 = *param_1 + fVar2;
      if (fVar7 < fVar6) {
        fVar7 = fVar6;
      }
      *(float *)(param_3 + (int)param_1) = fVar7;
      if (param_2 == 1) {
        fVar6 = fVar6 - *(float *)(param_5 + (int)param_1);
        fVar7 = fVar6 - -17.2;
        if (fVar6 <= -17.2) {
          fVar6 = 1.0 - fVar7 * 0.0003 * fVar1;
        }
        else {
          fVar6 = 1.0 - fVar7 * 0.005 * fVar1;
          if (fVar6 < 0.0) {
            fVar6 = 0.0001;
          }
        }
        *(float *)(param_4 + (int)param_1) = *(float *)(param_4 + (int)param_1) * fVar6;
      }
      iVar4 = iVar4 + 1;
      param_1 = param_1 + 1;
    } while (iVar4 < iVar3);
  }
  return;
}


/* FUN_006d5910 @ 006d5910  kind=gamemisc  attributed-by=role:artifact  size=191 */

void FUN_006d5910(int param_1,int param_2,int param_3,float param_4)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  int in_EDX;
  float fVar6;
  float in_XMM2_Da;
  
  iVar4 = (int)(((in_XMM2_Da + param_4) - 30.0) * 0.1);
  iVar5 = 0;
  if (0 < iVar4) {
    iVar5 = iVar4;
  }
  iVar4 = 7;
  if (iVar5 < 7) {
    iVar4 = iVar5;
  }
  pfVar3 = *(float **)(in_EDX + iVar4 * 4);
  fVar2 = pfVar3[1];
  iVar5 = (int)*pfVar3;
  iVar4 = (int)(((*pfVar3 - 16.0) * (float)param_3 + (float)param_1) - (float)(param_3 >> 1));
  while( true ) {
    if ((int)fVar2 <= iVar5) {
      return;
    }
    if ((0 < iVar4) &&
       (fVar6 = pfVar3[iVar5 + 2] + in_XMM2_Da, pfVar1 = (float *)(in_ECX + iVar4 * 4),
       *pfVar1 <= fVar6 && fVar6 != *pfVar1)) {
      *(float *)(in_ECX + iVar4 * 4) = fVar6;
    }
    iVar4 = iVar4 + param_3;
    if (param_2 <= iVar4) break;
    iVar5 = iVar5 + 1;
  }
  return;
}


/* FUN_006d6550 @ 006d6550  kind=gamemisc  attributed-by=role:artifact  size=2236 */

void FUN_006d6550(int *param_1,int param_2,int param_3)

{
  void *pvVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  int in_EDX;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  int local_28;
  int local_20;
  int local_1c;
  int local_18;
  int local_10;
  
  local_18 = -99;
  memset(in_ECX,0,0x34);
  in_ECX[9] = *param_1;
  dVar8 = (double)((float)*param_1 * 8.0);
  libm_sse2_log_precise();
  dVar11 = 2.0;
  libm_sse2_log_precise();
  dVar14 = floor(dVar8 / dVar11 + 0.5);
  dVar11 = (double)param_2;
  in_ECX[8] = (int)(dVar14 - 1.0);
  dVar8 = ((double)((float)param_3 * 0.25) * 0.5) / dVar11;
  libm_sse2_log_precise();
  iVar6 = (int)((dVar8 * 1.4426950216293335 - 5.965784072875977) *
                (double)(1 << ((char)(int)(dVar14 - 1.0) + 1U & 0x1f)) - (double)*param_1);
  in_ECX[7] = iVar6;
  dVar8 = ((double)(((float)param_2 + 0.25) * (float)param_3) * 0.5) / dVar11;
  libm_sse2_log_precise();
  in_ECX[10] = ((int)((dVar8 * 1.4426950216293335 - 5.965784072875977) *
                      (double)(1 << ((char)in_ECX[8] + 1U & 0x1f)) + 0.5) - iVar6) + 1;
  pvVar1 = malloc(param_2 * 4);
  in_ECX[4] = (int)pvVar1;
  pvVar1 = malloc(param_2 * 4);
  in_ECX[5] = (int)pvVar1;
  pvVar1 = malloc(param_2 * 4);
  in_ECX[6] = (int)pvVar1;
  in_ECX[1] = in_EDX;
  *in_ECX = param_2;
  in_ECX[0xb] = param_3;
  in_ECX[0xc] = 0x3f800000;
  if (param_3 < 26000) {
    in_ECX[0xc] = 0;
  }
  else if (param_3 < 38000) {
    in_ECX[0xc] = 0x3f70a3d7;
  }
  else if (46000 < param_3) {
    in_ECX[0xc] = 0x3fa33333;
  }
  param_1 = (int *)0x0;
  iVar6 = 0;
  do {
    iVar2 = (int)param_1 + 1;
    dVar8 = (((double)iVar2 * 0.125 - 2.0) + 5.965784072875977) * 0.6931470036506653;
    libm_sse2_exp_precise();
    dVar8 = floor((dVar8 * 2.0 * dVar11) / (double)param_3 + 0.5);
    iVar4 = (int)dVar8;
    fVar10 = (float)(&DAT_00737960)[(int)param_1];
    if (iVar6 < iVar4) {
      fVar12 = ((float)(&DAT_00737964)[(int)param_1] - fVar10) / (float)(iVar4 - iVar6);
      if (3 < iVar4 - iVar6) {
        iVar3 = iVar6 + 2;
        do {
          if (param_2 <= iVar6) goto LAB_006d68d8;
          *(float *)(in_ECX[4] + iVar6 * 4) = fVar10 + 100.0;
          if (param_2 <= iVar3 + -1) {
            iVar6 = iVar6 + 1;
            goto LAB_006d68d8;
          }
          fVar9 = fVar12 + fVar12 + fVar10;
          *(float *)(in_ECX[4] + 4 + iVar6 * 4) = fVar12 + fVar10 + 100.0;
          if (param_2 <= iVar3) {
            iVar6 = iVar6 + 2;
            goto LAB_006d68d8;
          }
          fVar13 = fVar12 + fVar9;
          *(float *)(in_ECX[4] + 8 + iVar6 * 4) = fVar9 + 100.0;
          if (param_2 <= iVar3 + 1) {
            iVar6 = iVar6 + 3;
            goto LAB_006d68d8;
          }
          iVar6 = iVar6 + 4;
          iVar3 = iVar3 + 4;
          fVar10 = fVar12 + fVar13;
          *(float *)(in_ECX[4] + -4 + iVar6 * 4) = fVar13 + 100.0;
        } while (iVar6 < iVar4 + -3);
      }
      while ((iVar6 < iVar4 && (iVar6 < param_2))) {
        iVar6 = iVar6 + 1;
        *(float *)(in_ECX[4] + -4 + iVar6 * 4) = fVar10 + 100.0;
        fVar10 = fVar10 + fVar12;
      }
    }
LAB_006d68d8:
    param_1 = (int *)iVar2;
  } while (iVar2 < 0x57);
  if (iVar6 < param_2) {
    if (3 < param_2 - iVar6) {
      do {
        iVar6 = iVar6 + 4;
        *(undefined4 *)(in_ECX[4] + -0x10 + iVar6 * 4) =
             *(undefined4 *)(in_ECX[4] + -0x14 + iVar6 * 4);
        *(undefined4 *)(in_ECX[4] + -0xc + iVar6 * 4) =
             *(undefined4 *)(in_ECX[4] + -0x10 + iVar6 * 4);
        *(undefined4 *)(in_ECX[4] + -8 + iVar6 * 4) = *(undefined4 *)(in_ECX[4] + -0xc + iVar6 * 4);
        *(undefined4 *)(in_ECX[4] + -4 + iVar6 * 4) = *(undefined4 *)(in_ECX[4] + -8 + iVar6 * 4);
      } while (iVar6 < param_2 + -3);
    }
    while (iVar6 < param_2) {
      iVar6 = iVar6 + 1;
      *(undefined4 *)(in_ECX[4] + -4 + iVar6 * 4) = *(undefined4 *)(in_ECX[4] + -8 + iVar6 * 4);
    }
  }
  local_10 = 0;
  if (0 < param_2) {
    iVar2 = param_3 / (param_2 * 2);
    iVar4 = iVar2 * iVar2;
    local_1c = 0;
    local_28 = 0;
    iVar6 = 1;
    do {
      dVar8 = (double)((float)(local_28 * local_10) * 1.85e-08);
      libm_sse2_atan_precise();
      dVar14 = (double)((float)local_1c * 0.00074);
      libm_sse2_atan_precise();
      local_20 = *(int *)(in_EDX + 0x78) + local_18;
      fVar10 = (float)(dVar8 * 2.240000009536743 + dVar14 * 13.100000381469727 +
                      (double)((float)local_1c * 0.0001));
      if (local_20 < local_10) {
        fVar12 = *(float *)(in_EDX + 0x70);
        iVar3 = iVar2 * local_18;
        iVar7 = iVar4 * local_18;
        do {
          dVar8 = (double)((float)(iVar7 * local_18) * 1.85e-08);
          libm_sse2_atan_precise();
          dVar14 = (double)((float)iVar3 * 0.00074);
          libm_sse2_atan_precise();
          if ((double)(fVar10 - fVar12) <=
              dVar8 * 2.240000009536743 + dVar14 * 13.100000381469727 +
              (double)((float)iVar3 * 0.0001)) break;
          iVar7 = iVar7 + iVar4;
          iVar3 = iVar3 + iVar2;
          local_20 = local_20 + 1;
          local_18 = local_18 + 1;
        } while (local_20 < local_10);
      }
      if (iVar6 <= param_2) {
        iVar3 = *(int *)(in_EDX + 0x7c);
        iVar5 = iVar2 * iVar6;
        iVar7 = iVar4 * iVar6;
        do {
          if (iVar3 + local_10 <= iVar6) {
            dVar8 = (double)((float)(iVar6 * iVar7) * 1.85e-08);
            libm_sse2_atan_precise();
            dVar14 = (double)((float)iVar5 * 0.00074);
            libm_sse2_atan_precise();
            if ((double)(*(float *)(in_EDX + 0x74) + fVar10) <=
                dVar8 * 2.240000009536743 + dVar14 * 13.100000381469727 +
                (double)((float)iVar5 * 0.0001)) break;
          }
          iVar6 = iVar6 + 1;
          iVar7 = iVar7 + iVar4;
          iVar5 = iVar5 + iVar2;
        } while (iVar6 <= param_2);
      }
      *(int *)(in_ECX[6] + local_10 * 4) = local_18 * 0x10000 + -0x10001 + iVar6;
      local_28 = local_28 + iVar4;
      local_1c = local_1c + iVar2;
      local_10 = local_10 + 1;
    } while (local_10 < param_2);
  }
  iVar6 = 0;
  if (0 < param_2) {
    do {
      dVar8 = ((double)((float)iVar6 + 0.25) * 0.5 * (double)param_3) / dVar11;
      libm_sse2_log_precise();
      iVar6 = iVar6 + 1;
      *(int *)(in_ECX[5] + -4 + iVar6 * 4) =
           (int)((dVar8 * 1.4426950216293335 - 5.965784072875977) *
                 (double)(1 << ((char)in_ECX[8] + 1U & 0x1f)) + 0.5);
    } while (iVar6 < param_2);
  }
  iVar6 = FUN_006d59d0();
  in_ECX[2] = iVar6;
  pvVar1 = malloc(0xc);
  in_ECX[3] = (int)pvVar1;
  iVar6 = 0;
  do {
    pvVar1 = malloc(param_2 * 4);
    iVar2 = iVar6 + 4;
    *(void **)(iVar6 + in_ECX[3]) = pvVar1;
    iVar6 = iVar2;
  } while (iVar2 < 0xc);
  iVar6 = 0;
  if (0 < param_2) {
    do {
      dVar8 = (((double)iVar6 + 0.5) * (double)param_3) / (dVar11 * 2.0);
      libm_sse2_log_precise();
      fVar12 = (float)((dVar8 * 1.4426950216293335 - 5.965784072875977) * 2.0);
      fVar10 = 0.0;
      if ((fVar12 < 0.0) || (fVar10 = 16.0, 16.0 <= fVar12)) {
        fVar12 = fVar10;
      }
      iVar2 = (int)fVar12;
      iVar6 = iVar6 + 1;
      fVar12 = fVar12 - (float)iVar2;
      fVar10 = 1.0 - fVar12;
      *(float *)(*(int *)in_ECX[3] + -4 + iVar6 * 4) =
           *(float *)(in_ECX[1] + 0x88 + iVar2 * 4) * fVar12 +
           *(float *)(in_ECX[1] + 0x84 + iVar2 * 4) * fVar10;
      *(float *)(*(int *)(in_ECX[3] + 4) + -4 + iVar6 * 4) =
           *(float *)(in_ECX[1] + 0xcc + iVar2 * 4) * fVar12 +
           *(float *)(in_ECX[1] + 200 + iVar2 * 4) * fVar10;
      *(float *)(*(int *)(in_ECX[3] + 8) + -4 + iVar6 * 4) =
           *(float *)(in_ECX[1] + 0x110 + iVar2 * 4) * fVar12 +
           *(float *)(in_ECX[1] + 0x10c + iVar2 * 4) * fVar10;
    } while (iVar6 < param_2);
  }
  return;
}


/* FUN_006d88c0 @ 006d88c0  kind=gamemisc  attributed-by=role:artifact  size=57 */

void FUN_006d88c0(void)

{
  undefined8 *in_ECX;
  
  if (in_ECX != (undefined8 *)0x0) {
    if (*(void **)((int)in_ECX + 4) != (void *)0x0) {
      free(*(void **)((int)in_ECX + 4));
    }
    if (*(void **)(in_ECX + 1) != (void *)0x0) {
      free(*(void **)(in_ECX + 1));
    }
    *in_ECX = 0;
    *(undefined4 *)(in_ECX + 1) = 0;
  }
  return;
}


/* FUN_006d9130 @ 006d9130  kind=gamemisc  attributed-by=role:artifact  size=461 */

void FUN_006d9130(int param_1,int param_2)

{
  float *pfVar1;
  float *in_ECX;
  float *pfVar2;
  float *in_EDX;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  pfVar1 = in_EDX + (param_1 >> 1) + -8 + (param_1 - (param_1 >> 1)) + 7;
  pfVar2 = in_EDX + (param_1 >> 1) + -8;
  do {
    fVar6 = *pfVar1;
    fVar8 = pfVar2[7];
    fVar7 = pfVar1[-1] - pfVar2[6];
    pfVar1[-1] = pfVar1[-1] + pfVar2[6];
    *pfVar1 = pfVar2[7] + *pfVar1;
    pfVar2[6] = in_ECX[1] * (fVar6 - fVar8) + *in_ECX * fVar7;
    pfVar3 = in_ECX + param_2;
    pfVar2[7] = *in_ECX * (fVar6 - fVar8) - in_ECX[1] * fVar7;
    fVar6 = pfVar1[-2] - pfVar2[5];
    fVar8 = pfVar1[-3] - pfVar2[4];
    pfVar1[-3] = pfVar1[-3] + pfVar2[4];
    pfVar1[-2] = pfVar1[-2] + pfVar2[5];
    pfVar2[4] = pfVar3[1] * fVar6 + *pfVar3 * fVar8;
    pfVar4 = pfVar3 + param_2;
    pfVar2[5] = *pfVar3 * fVar6 - pfVar3[1] * fVar8;
    fVar6 = pfVar1[-4] - pfVar2[3];
    fVar8 = pfVar1[-5] - pfVar2[2];
    pfVar1[-5] = pfVar1[-5] + pfVar2[2];
    pfVar1[-4] = pfVar1[-4] + pfVar2[3];
    pfVar2[2] = pfVar4[1] * fVar6 + *pfVar4 * fVar8;
    pfVar5 = pfVar4 + param_2;
    pfVar2[3] = *pfVar4 * fVar6 - pfVar4[1] * fVar8;
    fVar8 = pfVar1[-7] - *pfVar2;
    fVar6 = pfVar1[-6] - pfVar2[1];
    pfVar1[-7] = pfVar1[-7] + *pfVar2;
    pfVar1[-6] = pfVar1[-6] + pfVar2[1];
    pfVar3 = pfVar2 + -8;
    pfVar1 = pfVar1 + -8;
    *pfVar2 = pfVar5[1] * fVar6 + *pfVar5 * fVar8;
    in_ECX = pfVar5 + param_2;
    pfVar2[1] = *pfVar5 * fVar6 - pfVar5[1] * fVar8;
    pfVar2 = pfVar3;
  } while (in_EDX <= pfVar3);
  return;
}


/* FUN_006d9c20 @ 006d9c20  kind=gamemisc  attributed-by=role:artifact  size=611 */

void FUN_006d9c20(void)

{
  float *in_ECX;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar2 = *in_ECX - in_ECX[8];
  fVar5 = in_ECX[1] - in_ECX[9];
  in_ECX[8] = in_ECX[8] + *in_ECX;
  fVar1 = in_ECX[10];
  in_ECX[9] = in_ECX[9] + in_ECX[1];
  fVar4 = in_ECX[0xf];
  *in_ECX = (fVar2 + fVar5) * 0.70710677;
  in_ECX[1] = (fVar5 - fVar2) * 0.70710677;
  fVar2 = in_ECX[3];
  in_ECX[10] = in_ECX[2] + in_ECX[10];
  in_ECX[3] = fVar1 - in_ECX[2];
  fVar5 = in_ECX[0xd] - in_ECX[5];
  in_ECX[2] = fVar2 - in_ECX[0xb];
  in_ECX[0xb] = in_ECX[0xb] + fVar2;
  fVar2 = in_ECX[0xc] - in_ECX[4];
  in_ECX[0xd] = in_ECX[5] + in_ECX[0xd];
  in_ECX[0xc] = in_ECX[4] + in_ECX[0xc];
  in_ECX[4] = (fVar2 - fVar5) * 0.70710677;
  fVar3 = in_ECX[0xe] - in_ECX[6];
  fVar1 = in_ECX[4] + *in_ECX;
  fVar6 = in_ECX[4] - *in_ECX;
  in_ECX[0xe] = in_ECX[0xe] + in_ECX[6];
  in_ECX[5] = (fVar5 + fVar2) * 0.70710677;
  fVar5 = in_ECX[2] + fVar3;
  fVar3 = fVar3 - in_ECX[2];
  in_ECX[0xf] = in_ECX[7] + in_ECX[0xf];
  fVar2 = in_ECX[5] - in_ECX[1];
  in_ECX[6] = fVar1 + fVar5;
  in_ECX[4] = fVar5 - fVar1;
  fVar1 = (fVar4 - in_ECX[7]) - in_ECX[3];
  *in_ECX = fVar3 + fVar2;
  fVar5 = in_ECX[5] + in_ECX[1];
  fVar4 = in_ECX[3] + (fVar4 - in_ECX[7]);
  in_ECX[2] = fVar3 - fVar2;
  in_ECX[3] = fVar6 + fVar1;
  in_ECX[1] = fVar1 - fVar6;
  in_ECX[7] = fVar4 + fVar5;
  in_ECX[5] = fVar4 - fVar5;
  fVar1 = in_ECX[0xc] + in_ECX[8];
  fVar5 = in_ECX[0xc] - in_ECX[8];
  fVar2 = in_ECX[10] + in_ECX[0xe];
  fVar6 = in_ECX[0xe] - in_ECX[10];
  fVar4 = in_ECX[0xd] - in_ECX[9];
  fVar3 = in_ECX[9] + in_ECX[0xd];
  in_ECX[0xe] = fVar1 + fVar2;
  in_ECX[0xc] = fVar2 - fVar1;
  fVar1 = in_ECX[0xf] - in_ECX[0xb];
  in_ECX[8] = fVar6 + fVar4;
  fVar2 = in_ECX[0xb] + in_ECX[0xf];
  in_ECX[10] = fVar6 - fVar4;
  in_ECX[0xb] = fVar5 + fVar1;
  in_ECX[9] = fVar1 - fVar5;
  in_ECX[0xf] = fVar2 + fVar3;
  in_ECX[0xd] = fVar2 - fVar3;
  return;
}


/* FUN_006d9e90 @ 006d9e90  kind=gamemisc  attributed-by=role:artifact  size=177 */

void FUN_006d9e90(void)

{
  float *in_ECX;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *in_ECX + in_ECX[4];
  fVar4 = in_ECX[4] - *in_ECX;
  fVar3 = in_ECX[2] + in_ECX[6];
  fVar6 = in_ECX[6] - in_ECX[2];
  fVar2 = in_ECX[5] - in_ECX[1];
  fVar5 = in_ECX[1] + in_ECX[5];
  in_ECX[6] = fVar1 + fVar3;
  in_ECX[4] = fVar3 - fVar1;
  fVar1 = in_ECX[7] - in_ECX[3];
  *in_ECX = fVar6 + fVar2;
  fVar3 = in_ECX[3] + in_ECX[7];
  in_ECX[2] = fVar6 - fVar2;
  in_ECX[3] = fVar4 + fVar1;
  in_ECX[1] = fVar1 - fVar4;
  in_ECX[7] = fVar3 + fVar5;
  in_ECX[5] = fVar3 - fVar5;
  return;
}


/* FUN_006daf40 @ 006daf40  kind=gamemisc  attributed-by=role:artifact  size=86 */

undefined4
FUN_006daf40(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_5) {
    puVar2 = param_3;
    do {
      if (*(int *)((param_4 - (int)param_3) + (int)puVar2) != 0) {
        param_3[iVar3] = *puVar2;
        iVar3 = iVar3 + 1;
      }
      puVar2 = puVar2 + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
    if (iVar3 != 0) {
      uVar1 = FUN_006dafa0(param_3,iVar3,FUN_006d3250);
      return uVar1;
    }
  }
  return 0;
}


/* FUN_006db470 @ 006db470  kind=gamemisc  attributed-by=role:artifact  size=467 */

int * FUN_006db470(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  void *pvVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int in_ECX;
  int *in_EDX;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int local_20;
  int local_10;
  
  iVar5 = param_2;
  piVar2 = (int *)*in_EDX;
  iVar3 = piVar2[3];
  iVar4 = piVar2[2];
  iVar6 = (piVar2[1] - *piVar2) / iVar4;
  iVar9 = *(int *)(in_ECX + 0x48);
  if (*(int *)(in_ECX + 0x4c) < iVar9 + 8) {
    if (*(int *)(in_ECX + 0x44) != 0) {
      puVar7 = malloc(8);
      *(int *)(in_ECX + 0x50) = *(int *)(in_ECX + 0x50) + iVar9;
      puVar7[1] = *(undefined4 *)(in_ECX + 0x54);
      *puVar7 = *(undefined4 *)(in_ECX + 0x44);
      *(undefined4 **)(in_ECX + 0x54) = puVar7;
    }
    *(undefined4 *)(in_ECX + 0x4c) = 8;
    pvVar8 = malloc(8);
    *(void **)(in_ECX + 0x44) = pvVar8;
    *(undefined4 *)(in_ECX + 0x48) = 0;
  }
  piVar1 = (int *)(*(int *)(in_ECX + 0x44) + *(int *)(in_ECX + 0x48));
  iVar9 = *(int *)(in_ECX + 0x48) + 8;
  uVar15 = iVar6 * 4 + 7U & 0xfffffff8;
  *(int *)(in_ECX + 0x48) = iVar9;
  if (*(int *)(in_ECX + 0x4c) < (int)(iVar9 + uVar15)) {
    if (*(int *)(in_ECX + 0x44) != 0) {
      puVar7 = malloc(8);
      *(int *)(in_ECX + 0x50) = *(int *)(in_ECX + 0x50) + iVar9;
      puVar7[1] = *(undefined4 *)(in_ECX + 0x54);
      *puVar7 = *(undefined4 *)(in_ECX + 0x44);
      *(undefined4 **)(in_ECX + 0x54) = puVar7;
    }
    *(uint *)(in_ECX + 0x4c) = uVar15;
    pvVar8 = malloc(uVar15);
    *(void **)(in_ECX + 0x44) = pvVar8;
    *(undefined4 *)(in_ECX + 0x48) = 0;
  }
  pvVar8 = (void *)(*(int *)(in_ECX + 0x44) + *(int *)(in_ECX + 0x48));
  *(uint *)(in_ECX + 0x48) = *(int *)(in_ECX + 0x48) + uVar15;
  *piVar1 = (int)pvVar8;
  memset(pvVar8,0,iVar6 * 4);
  param_2 = *piVar2 / param_2;
  local_20 = 0;
  if (0 < iVar6) {
    do {
      iVar9 = 0;
      iVar14 = 0;
      local_10 = 0;
      if (0 < iVar4) {
        iVar9 = 0;
        do {
          uVar15 = *(uint *)(*param_1 + param_2 * 4);
          uVar13 = (int)uVar15 >> 0x1f;
          iVar10 = (uVar15 ^ uVar13) - uVar13;
          if (iVar14 < iVar10) {
            iVar14 = iVar10;
          }
          iVar10 = 1;
          if (1 < iVar5) {
            do {
              uVar15 = *(uint *)(param_1[iVar10] + param_2 * 4);
              uVar13 = (int)uVar15 >> 0x1f;
              iVar11 = (uVar15 ^ uVar13) - uVar13;
              if (iVar9 < iVar11) {
                iVar9 = iVar11;
              }
              iVar10 = iVar10 + 1;
            } while (iVar10 < iVar5);
          }
          local_10 = local_10 + iVar5;
          param_2 = param_2 + 1;
        } while (local_10 < iVar4);
      }
      iVar10 = 0;
      if (0 < iVar3 + -1) {
        piVar12 = piVar2 + 0x286;
        do {
          if ((iVar14 <= piVar12[-0x40]) && (iVar9 <= *piVar12)) break;
          iVar10 = iVar10 + 1;
          piVar12 = piVar12 + 1;
        } while (iVar10 < iVar3 + -1);
      }
      local_20 = local_20 + 1;
      *(int *)(*piVar1 + -4 + local_20 * 4) = iVar10;
    } while (local_20 < iVar6);
  }
  in_EDX[10] = in_EDX[10] + 1;
  return piVar1;
}


/* FUN_006db650 @ 006db650  kind=gamemisc  attributed-by=role:artifact  size=583 */

int * FUN_006db650(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  void *pvVar7;
  int iVar8;
  int *piVar9;
  int in_ECX;
  code *pcVar10;
  int *piVar11;
  uint *puVar12;
  int *in_EDX;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int local_24;
  int local_20;
  int local_18;
  
  piVar1 = (int *)*in_EDX;
  iVar2 = piVar1[3];
  iVar3 = piVar1[2];
  iVar4 = (piVar1[1] - *piVar1) / iVar3;
  iVar14 = *(int *)(in_ECX + 0x48);
  uVar17 = param_2 * 4 + 7U & 0xfffffff8;
  pcVar10 = malloc_exref;
  if (*(int *)(in_ECX + 0x4c) < (int)(iVar14 + uVar17)) {
    if (*(int *)(in_ECX + 0x44) != 0) {
      puVar5 = malloc(8);
      *(int *)(in_ECX + 0x50) = *(int *)(in_ECX + 0x50) + iVar14;
      puVar5[1] = *(undefined4 *)(in_ECX + 0x54);
      *puVar5 = *(undefined4 *)(in_ECX + 0x44);
      pcVar10 = malloc_exref;
      *(undefined4 **)(in_ECX + 0x54) = puVar5;
    }
    *(uint *)(in_ECX + 0x4c) = uVar17;
    uVar6 = (*pcVar10)(uVar17);
    pcVar10 = malloc_exref;
    *(undefined4 *)(in_ECX + 0x44) = uVar6;
    *(undefined4 *)(in_ECX + 0x48) = 0;
  }
  piVar13 = (int *)(*(int *)(in_ECX + 0x44) + *(int *)(in_ECX + 0x48));
  iVar14 = 0;
  *(uint *)(in_ECX + 0x48) = *(int *)(in_ECX + 0x48) + uVar17;
  if (0 < param_2) {
    uVar17 = iVar4 * 4 + 7U & 0xfffffff8;
    do {
      if (*(int *)(in_ECX + 0x4c) < (int)(*(int *)(in_ECX + 0x48) + uVar17)) {
        if (*(int *)(in_ECX + 0x44) != 0) {
          puVar5 = (undefined4 *)(*pcVar10)(8);
          *(int *)(in_ECX + 0x50) = *(int *)(in_ECX + 0x50) + *(int *)(in_ECX + 0x48);
          puVar5[1] = *(undefined4 *)(in_ECX + 0x54);
          *puVar5 = *(undefined4 *)(in_ECX + 0x44);
          *(undefined4 **)(in_ECX + 0x54) = puVar5;
        }
        *(uint *)(in_ECX + 0x4c) = uVar17;
        pvVar7 = malloc(uVar17);
        *(void **)(in_ECX + 0x44) = pvVar7;
        *(undefined4 *)(in_ECX + 0x48) = 0;
      }
      pvVar7 = (void *)(*(int *)(in_ECX + 0x44) + *(int *)(in_ECX + 0x48));
      *(uint *)(in_ECX + 0x48) = *(int *)(in_ECX + 0x48) + uVar17;
      piVar13[iVar14] = (int)pvVar7;
      memset(pvVar7,0,iVar4 * 4);
      iVar14 = iVar14 + 1;
      pcVar10 = malloc_exref;
    } while (iVar14 < param_2);
  }
  local_18 = 0;
  if (0 < iVar4) {
    local_24 = 0;
    do {
      iVar14 = *piVar1;
      if (0 < param_2) {
        piVar11 = piVar13;
        local_20 = param_2;
        do {
          iVar16 = 0;
          iVar18 = 0;
          if (0 < iVar3) {
            puVar12 = (uint *)(*(int *)((param_1 - (int)piVar13) + (int)piVar11) +
                              (iVar14 + local_24) * 4);
            iVar15 = iVar3;
            do {
              uVar17 = (int)*puVar12 >> 0x1f;
              iVar8 = (*puVar12 ^ uVar17) - uVar17;
              if (iVar16 < iVar8) {
                iVar16 = iVar8;
              }
              iVar18 = iVar18 + iVar8;
              puVar12 = puVar12 + 1;
              iVar15 = iVar15 + -1;
            } while (iVar15 != 0);
          }
          iVar15 = 0;
          if (0 < iVar2 + -1) {
            piVar9 = piVar1 + 0x286;
            do {
              if ((iVar16 <= piVar9[-0x40]) &&
                 ((*piVar9 < 0 || ((int)((float)iVar18 * (100.0 / (float)iVar3)) < *piVar9))))
              break;
              iVar15 = iVar15 + 1;
              piVar9 = piVar9 + 1;
            } while (iVar15 < iVar2 + -1);
          }
          iVar16 = *piVar11;
          piVar11 = piVar11 + 1;
          local_20 = local_20 + -1;
          *(int *)(iVar16 + local_18 * 4) = iVar15;
        } while (local_20 != 0);
      }
      local_18 = local_18 + 1;
      local_24 = local_24 + iVar3;
    } while (local_18 < iVar4);
  }
  in_EDX[10] = in_EDX[10] + 1;
  return piVar13;
}


/* FUN_006dddb0 @ 006dddb0  kind=gamemisc  attributed-by=role:artifact  size=41 */

int FUN_006dddb0(int param_1)

{
  int iVar1;
  int in_ECX;
  int in_EDX;
  
  param_1 = param_1 * 4;
  iVar1 = *(int *)(param_1 + in_ECX);
  if (iVar1 < 0) {
    return *(int *)(param_1 + in_EDX);
  }
  if (-1 < *(int *)(param_1 + in_EDX)) {
    iVar1 = iVar1 + *(int *)(param_1 + in_EDX) >> 1;
  }
  return iVar1;
}


/* FUN_006de430 @ 006de430  kind=gamemisc  attributed-by=role:artifact  size=147 */

void FUN_006de430(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  int in_EDX;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  iVar7 = param_1 - in_EDX;
  uVar8 = param_3 - param_2;
  iVar2 = (int)uVar8 / iVar7;
  iVar4 = iVar2 + -1;
  if (-1 < (int)uVar8) {
    iVar4 = iVar2 + 1;
  }
  uVar6 = iVar2 * iVar7 >> 0x1f;
  iVar5 = 0;
  if (param_1 < in_ECX) {
    in_ECX = param_1;
  }
  if (in_EDX < in_ECX) {
    *(int *)(param_4 + in_EDX * 4) = param_2;
  }
  iVar3 = in_EDX + 1;
  while (iVar3 < in_ECX) {
    iVar5 = iVar5 + (((uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f)) -
                    ((iVar2 * iVar7 ^ uVar6) - uVar6));
    iVar1 = iVar2;
    if (iVar7 <= iVar5) {
      iVar5 = iVar5 - iVar7;
      iVar1 = iVar4;
    }
    param_2 = param_2 + iVar1;
    iVar3 = iVar3 + 1;
    *(int *)(param_4 + -4 + iVar3 * 4) = param_2;
  }
  return;
}


/* FUN_006de5c0 @ 006de5c0  kind=gamemisc  attributed-by=role:artifact  size=74 */

int FUN_006de5c0(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  int in_ECX;
  int in_EDX;
  uint uVar2;
  
  param_1 = param_1 & 0x7fff;
  uVar2 = (param_2 & 0x7fff) - param_1;
  iVar1 = (int)((param_3 - in_ECX) * ((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f))) /
          (in_EDX - in_ECX);
  if ((int)uVar2 < 0) {
    return param_1 - iVar1;
  }
  return param_1 + iVar1;
}


/* FUN_006e0120 @ 006e0120  kind=gamemisc  attributed-by=role:artifact  size=37 */

int FUN_006e0120(float *param_1,float *param_2)

{
  return (uint)(*param_1 < *param_2) - (uint)(*param_2 < *param_1);
}


/* FUN_006e0ec0 @ 006e0ec0  kind=gamemisc  attributed-by=role:artifact  size=778 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_006e0ec0(undefined4 param_1,uint param_2,double *param_3)

{
  int iVar1;
  double dVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  longlong lVar9;
  uint uStack_6c;
  undefined2 uStack_68;
  uint uStack_5c;
  undefined2 uStack_58;
  undefined8 local_40;
  float10 local_38;
  
  if (0x7fefffff < (int)param_2) {
    *(undefined4 *)param_3 = 0xffffffff;
    *(undefined4 *)((int)param_3 + 4) = 0x7fffffff;
    return 0;
  }
  if (param_2 < 0x40ff4000) {
    uVar4 = (int)ROUND(_DAT_0076f7b0 * (float10)(double)CONCAT44(param_2,param_1)) + 1U & 0xfffffffe
    ;
    fVar6 = (float10)(int)uVar4;
    local_38 = ((((float10)(double)CONCAT44(param_2,param_1) - (float10)0.7853981629014015 * fVar6)
                - (float10)4.960467869796759e-10 * fVar6) - (float10)2.8605943548317875e-18 * fVar6)
               - fVar6 * (float10)8.223128468162129e-27;
  }
  else {
    uVar4 = param_2 >> 0x14 & 0x7ff;
    fVar7 = (float10)(double)CONCAT44(param_2 + 0xf3800000,param_1);
    uStack_6c = (uint)((unkuint10)fVar7 >> 0x20);
    uStack_68 = (undefined2)((unkuint10)fVar7 >> 0x40);
    iVar5 = (int)(uVar4 - 0x41c) / 0x19;
    fVar6 = (float10)CONCAT28(uStack_68,((ulonglong)uStack_6c & 0xffffffc0) << 0x20);
    fVar7 = fVar7 - fVar6;
    if ((int)(iVar5 * -0x19 + -0x41c + uVar4) < 0x11) {
      local_38 = _DAT_0076f750;
    }
    else {
      iVar3 = iVar5 * 8;
      iVar1 = iVar5 * 8;
      iVar5 = iVar5 + 1;
      local_38 = (float10)*(double *)(&DAT_0076f5a8 + iVar1) * fVar6 +
                 fVar7 * (float10)*(double *)(&DAT_0076f5a0 + iVar3);
      uStack_5c = (uint)((unkuint10)local_38 >> 0x20);
      uStack_58 = (undefined2)((unkuint10)local_38 >> 0x40);
      local_38 = local_38 - (float10)CONCAT28(uStack_58,((ulonglong)uStack_5c & 0xffffffc0) << 0x20)
      ;
    }
    fVar8 = fVar6 * (float10)*(double *)(&DAT_0076f5b0 + iVar5 * 8) +
            fVar7 * (float10)*(double *)(&DAT_0076f5a8 + iVar5 * 8);
    local_38 = local_38 +
               fVar6 * (float10)*(double *)(&DAT_0076f5a8 + iVar5 * 8) +
               (float10)*(double *)(&DAT_0076f5a0 + iVar5 * 8) * fVar7;
    dVar2 = (double)(local_38 + fVar8);
    iVar3 = 0x433 - ((uint)((ulonglong)dVar2 >> 0x34) & 0x7ff);
    lVar9 = ___common_srl(dVar2,iVar3);
    uVar4 = (uint)(lVar9 + 1) & 0xfffffffe;
    local_40 = (double)___common_sll(uVar4,(int)((ulonglong)(lVar9 + 1) >> 0x20),iVar3);
    fVar6 = (float10)CONCAT28(uStack_68,((ulonglong)uStack_6c & 0xffffffc0) << 0x20);
    local_38 = (fVar6 * (float10)*(double *)(&DAT_0076f5d0 + iVar5 * 8) +
                (float10)*(double *)(&DAT_0076f5c8 + iVar5 * 8) * fVar7 +
                fVar6 * (float10)*(double *)(&DAT_0076f5c8 + iVar5 * 8) +
                (float10)*(double *)(&DAT_0076f5c0 + iVar5 * 8) * fVar7 +
                fVar6 * (float10)*(double *)(&DAT_0076f5c0 + iVar5 * 8) +
                (float10)*(double *)(&DAT_0076f5b8 + iVar5 * 8) * fVar7 +
                (float10)*(double *)(&DAT_0076f5b0 + iVar5 * 8) * fVar7 +
                (float10)*(double *)(&DAT_0076f5b8 + iVar5 * 8) * fVar6 +
                (local_38 - (float10)local_40) + fVar8 +
               (float10)*(double *)(&DAT_0076f5d0 + iVar5 * 8) * fVar7 +
               fVar6 * (float10)*(double *)(&DAT_0076f5d8 + iVar5 * 8)) * _DAT_0076f7a0;
  }
  iVar5 = (int)uVar4 >> 1;
  if (_DAT_0076f7a0 < local_38) {
    iVar5 = iVar5 + -3;
    local_38 = local_38 - _DAT_0076f760;
  }
  *param_3 = (double)local_38;
  return iVar5;
}


