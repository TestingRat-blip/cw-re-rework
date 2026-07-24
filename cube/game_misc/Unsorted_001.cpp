// Unsorted_001 (game_misc) -- cube. 150 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Unsorted_001.h"

/* FUN_00458500 @ 00458500  kind=gamemisc  attributed-by=none  size=326 */

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


/* FUN_00458650 @ 00458650  kind=gamemisc  attributed-by=none  size=293 */

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


/* FUN_00458780 @ 00458780  kind=gamemisc  attributed-by=none  size=220 */

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


/* FUN_00458860 @ 00458860  kind=gamemisc  attributed-by=none  size=208 */

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


/* FUN_00458940 @ 00458940  kind=gamemisc  attributed-by=none  size=222 */

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


/* FUN_00458a20 @ 00458a20  kind=gamemisc  attributed-by=none  size=358 */

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


/* FUN_00459660 @ 00459660  kind=gamemisc  attributed-by=none  size=115 */

void FUN_00459660(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0xffffffff;
  in_ECX[1] = 0xffffffff;
  in_ECX[2] = 0xffffffff;
  in_ECX[3] = 0xffffffff;
  in_ECX[4] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0x13] = 0x3f000000;
  in_ECX[0x14] = 0x3f800000;
  in_ECX[0x15] = 0x3f800000;
  in_ECX[0x16] = 0;
  *(undefined1 *)(in_ECX + 0x17) = 0;
  in_ECX[0x18] = 0;
  *(undefined1 *)(in_ECX + 0x19) = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  return;
}


/* FUN_00459a90 @ 00459a90  kind=gamemisc  attributed-by=none  size=30 */

void FUN_00459a90(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  return;
}


/* FUN_00459b10 @ 00459b10  kind=gamemisc  attributed-by=none  size=240 */

void FUN_00459b10(int param_1)

{
  FUN_0040ee70(param_1);
  FUN_0040ee70(param_1 + 0x118);
  FUN_0040ee70(param_1 + 0x230);
  FUN_0040ee70(param_1 + 0x348);
  FUN_0040ee70(param_1 + 0x460);
  FUN_0040ee70(param_1 + 0x578);
  FUN_0040ee70(param_1 + 0x690);
  FUN_0040ee70(param_1 + 0x7a8);
  FUN_0040ee70(param_1 + 0x8c0);
  FUN_0040ee70(param_1 + 0x9d8);
  FUN_0040ee70(param_1 + 0xaf0);
  FUN_0040ee70(param_1 + 0xc08);
  FUN_0040ee70(param_1 + 0xd20);
  return;
}


/* FUN_00466050 @ 00466050  kind=gamemisc  attributed-by=none  size=950 */

void FUN_00466050(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  in_ECX[7] = param_1[7];
  in_ECX[8] = param_1[8];
  in_ECX[9] = param_1[9];
  in_ECX[10] = param_1[10];
  in_ECX[0xb] = param_1[0xb];
  in_ECX[0xc] = param_1[0xc];
  in_ECX[0xd] = param_1[0xd];
  in_ECX[0xe] = param_1[0xe];
  in_ECX[0xf] = param_1[0xf];
  in_ECX[0x10] = param_1[0x10];
  in_ECX[0x11] = param_1[0x11];
  in_ECX[0x12] = param_1[0x12];
  in_ECX[0x13] = param_1[0x13];
  *(undefined1 *)(in_ECX + 0x14) = *(undefined1 *)(param_1 + 0x14);
  in_ECX[0x15] = param_1[0x15];
  *(undefined1 *)(in_ECX + 0x16) = *(undefined1 *)(param_1 + 0x16);
  in_ECX[0x17] = param_1[0x17];
  in_ECX[0x18] = param_1[0x18];
  in_ECX[0x19] = param_1[0x19];
  FUN_00459800(param_1 + 0x1a);
  *(undefined2 *)(in_ECX + 0x45) = *(undefined2 *)(param_1 + 0x45);
  in_ECX[0x46] = param_1[0x46];
  in_ECX[0x47] = param_1[0x47];
  in_ECX[0x48] = param_1[0x48];
  in_ECX[0x49] = param_1[0x49];
  in_ECX[0x4a] = param_1[0x4a];
  in_ECX[0x4b] = param_1[0x4b];
  *(undefined1 *)(in_ECX + 0x4c) = *(undefined1 *)(param_1 + 0x4c);
  *(undefined1 *)((int)in_ECX + 0x131) = *(undefined1 *)((int)param_1 + 0x131);
  in_ECX[0x4d] = param_1[0x4d];
  in_ECX[0x4e] = param_1[0x4e];
  in_ECX[0x4f] = param_1[0x4f];
  in_ECX[0x50] = param_1[0x50];
  in_ECX[0x51] = param_1[0x51];
  in_ECX[0x52] = param_1[0x52];
  in_ECX[0x53] = param_1[0x53];
  in_ECX[0x54] = param_1[0x54];
  in_ECX[0x55] = param_1[0x55];
  in_ECX[0x56] = param_1[0x56];
  in_ECX[0x57] = param_1[0x57];
  in_ECX[0x58] = param_1[0x58];
  in_ECX[0x59] = param_1[0x59];
  *(undefined8 *)(in_ECX + 0x5a) = *(undefined8 *)(param_1 + 0x5a);
  *(undefined8 *)(in_ECX + 0x5c) = *(undefined8 *)(param_1 + 0x5c);
  in_ECX[0x5e] = param_1[0x5e];
  *(undefined1 *)(in_ECX + 0x5f) = *(undefined1 *)(param_1 + 0x5f);
  *(undefined1 *)((int)in_ECX + 0x17d) = *(undefined1 *)((int)param_1 + 0x17d);
  in_ECX[0x60] = param_1[0x60];
  in_ECX[0x61] = param_1[0x61];
  in_ECX[0x62] = param_1[0x62];
  in_ECX[99] = param_1[99];
  in_ECX[100] = param_1[100];
  in_ECX[0x65] = param_1[0x65];
  *(undefined1 *)(in_ECX + 0x66) = *(undefined1 *)(param_1 + 0x66);
  in_ECX[0x67] = param_1[0x67];
  in_ECX[0x68] = param_1[0x68];
  in_ECX[0x69] = param_1[0x69];
  in_ECX[0x6a] = param_1[0x6a];
  in_ECX[0x6c] = param_1[0x6c];
  in_ECX[0x6d] = param_1[0x6d];
  in_ECX[0x6e] = param_1[0x6e];
  in_ECX[0x6f] = param_1[0x6f];
  in_ECX[0x70] = param_1[0x70];
  in_ECX[0x71] = param_1[0x71];
  *(undefined1 *)(in_ECX + 0x72) = *(undefined1 *)(param_1 + 0x72);
  in_ECX[0x73] = param_1[0x73];
  in_ECX[0x74] = param_1[0x74];
  in_ECX[0x75] = param_1[0x75];
  FUN_0040ee70(param_1 + 0x76);
  FUN_00459b10(param_1 + 0xbc);
  *(undefined8 *)(in_ECX + 0x44a) = *(undefined8 *)(param_1 + 0x44a);
  *(undefined8 *)(in_ECX + 0x44c) = *(undefined8 *)(param_1 + 0x44c);
  *(undefined8 *)(in_ECX + 0x44e) = *(undefined8 *)(param_1 + 0x44e);
  *(undefined8 *)(in_ECX + 0x450) = *(undefined8 *)(param_1 + 0x450);
  *(undefined8 *)(in_ECX + 0x452) = *(undefined8 *)(param_1 + 0x452);
  in_ECX[0x454] = param_1[0x454];
  in_ECX[0x455] = param_1[0x455];
  *(undefined8 *)(in_ECX + 0x456) = *(undefined8 *)(param_1 + 0x456);
  *(undefined8 *)(in_ECX + 0x458) = *(undefined8 *)(param_1 + 0x458);
  return;
}


/* FUN_00466650 @ 00466650  kind=gamemisc  attributed-by=none  size=556 */

void FUN_00466650(undefined1 *param_1,int param_2,float *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  undefined1 *in_ECX;
  int iVar4;
  int local_14 [4];
  
  local_14[3] = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  uVar1 = param_1[8];
  uVar2 = param_1[4];
  *in_ECX = *param_1;
  in_ECX[2] = uVar1;
  in_ECX[1] = uVar2;
  in_ECX[3] = 1;
  local_14[0] = 1;
  local_14[1] = 0;
  local_14[2] = 0;
  *(uint *)(in_ECX + 4) =
       (((int)(param_3[3] * 255.0) << 8 | (int)(*param_3 * 255.0) & 0xffU) << 8 |
       (int)(param_3[1] * 255.0) & 0xffU) << 8 | (int)(param_3[2] * 255.0) & 0xffU;
  iVar4 = 0;
  while (*(int *)(param_2 + iVar4 * 4) == local_14[iVar4]) {
    iVar4 = iVar4 + 1;
    if (2 < iVar4) {
      in_ECX[3] = 0;
      __security_check_cookie(local_14[3] ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  iVar4 = 0;
  local_14[0] = -1;
  local_14[1] = 0;
  local_14[2] = 0;
  while (*(int *)(param_2 + iVar4 * 4) == local_14[iVar4]) {
    iVar4 = iVar4 + 1;
    if (2 < iVar4) {
      in_ECX[3] = 1;
      __security_check_cookie(local_14[3] ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  iVar4 = 0;
  local_14[0] = 0;
  local_14[1] = 1;
  local_14[2] = 0;
  while (*(int *)(param_2 + iVar4 * 4) == local_14[iVar4]) {
    iVar4 = iVar4 + 1;
    if (2 < iVar4) {
      in_ECX[3] = 2;
      __security_check_cookie(local_14[3] ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  local_14[0] = 0;
  local_14[1] = 0xffffffff;
  local_14[2] = 0;
  cVar3 = FUN_00468870(local_14);
  if (cVar3 != '\0') {
    in_ECX[3] = 3;
    __security_check_cookie(local_14[3] ^ (uint)&stack0xfffffffc);
    return;
  }
  local_14[0] = 0;
  local_14[1] = 0;
  local_14[2] = 1;
  cVar3 = FUN_00468870(local_14);
  if (cVar3 != '\0') {
    in_ECX[3] = 4;
    __security_check_cookie(local_14[3] ^ (uint)&stack0xfffffffc);
    return;
  }
  local_14[0] = 0;
  local_14[1] = 0;
  local_14[2] = 0xffffffff;
  cVar3 = FUN_00468870(local_14);
  if (cVar3 != '\0') {
    in_ECX[3] = 5;
  }
  __security_check_cookie(local_14[3] ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00468430 @ 00468430  kind=gamemisc  attributed-by=none  size=405 */

void FUN_00468430(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar5 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e53f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (in_ECX != param_1) {
    iVar8 = *param_1;
    if (iVar8 == param_1[1]) {
      FUN_00452650(*in_ECX,in_ECX[1],(int)&param_1 + 3,param_1);
      iVar8 = *in_ECX;
    }
    else {
      uVar3 = (param_1[1] - iVar8) / 0x18;
      uVar4 = (in_ECX[1] - *in_ECX) / 0x18;
      if (uVar4 < uVar3) {
        if ((uint)((in_ECX[2] - *in_ECX) / 0x18) < uVar3) {
          if (*in_ECX != 0) {
            param_1 = (int *)uVar3;
            FUN_00452650(*in_ECX,in_ECX[1],(int)&param_1 + 3,uVar3);
                    /* WARNING: Subroutine does not return */
            operator_delete((void *)*in_ECX);
          }
          piVar1 = param_1 + 1;
          iVar8 = *param_1;
          param_1 = (int *)uVar3;
          cVar6 = FUN_0058cfe0((*piVar1 - iVar8) / 0x18);
          if (cVar6 == '\0') {
            ExceptionList = local_10;
            return;
          }
          local_8 = 0;
          iVar8 = FUN_00456ae0(*piVar5,piVar5[1],*in_ECX,(int)&param_1 + 3,param_1);
        }
        else {
          iVar8 = iVar8 + uVar4 * 0x18;
          iVar2 = *param_1;
          param_1 = (int *)uVar3;
          FUN_00452500(iVar2,iVar8,*in_ECX);
          iVar8 = FUN_00456ae0(iVar8,piVar5[1],in_ECX[1],(int)&param_1 + 3,param_1);
        }
      }
      else {
        piVar1 = param_1 + 1;
        param_1 = (int *)uVar3;
        uVar7 = FUN_00452500(iVar8,*piVar1,*in_ECX);
        FUN_00452650(uVar7,in_ECX[1],(int)&param_1 + 3,param_1);
        iVar8 = *in_ECX + ((piVar5[1] - *piVar5) / 0x18) * 0x18;
      }
    }
    in_ECX[1] = iVar8;
  }
  ExceptionList = local_10;
  return;
}


/* FUN_004689a0 @ 004689a0  kind=gamemisc  attributed-by=none  size=290 */

void FUN_004689a0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  undefined1 local_60 [4];
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e99d0;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = FUN_004e3790(param_1);
  if (iVar1 != *in_ECX) {
    piVar2 = (int *)(iVar1 + 0x10);
    if (7 < *(uint *)(iVar1 + 0x24)) {
      piVar2 = (int *)*piVar2;
    }
    iVar3 = FUN_00428db0(0,*(undefined4 *)(param_1 + 0x10),piVar2,*(undefined4 *)(iVar1 + 0x20));
    if (-1 < iVar3) goto LAB_00468aaa;
  }
  local_48 = 7;
  local_4c = 0;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
  local_8 = 0;
  FUN_0040eaf0(param_1);
  FUN_0040eaf0(local_5c);
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar3 = FUN_00452260(local_44);
  FUN_00453230(local_60,iVar1,iVar3 + 0x10,iVar3);
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  local_18 = 7;
  local_1c = 0;
  local_2c = (void *)((uint)local_2c & 0xffff0000);
  if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  local_30 = 7;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
  if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_5c[0]);
  }
LAB_00468aaa:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00468b70 @ 00468b70  kind=gamemisc  attributed-by=none  size=235 */

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


/* FUN_00468ca0 @ 00468ca0  kind=gamemisc  attributed-by=none  size=70 */

undefined8 * FUN_00468ca0(undefined8 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0068d946();
  uVar1 = __allmul(uVar1,*param_3,param_3[1]);
  uVar1 = __alldiv(uVar1,0x10000,0);
  *param_1 = uVar1;
  return param_1;
}


/* FUN_00468d90 @ 00468d90  kind=gamemisc  attributed-by=none  size=19 */

void FUN_00468d90(int *param_1)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  *param_1 = iVar1;
  *in_ECX = iVar1 + 4;
  return;
}


/* FUN_00468dd0 @ 00468dd0  kind=gamemisc  attributed-by=none  size=19 */

void FUN_00468dd0(int *param_1)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  *param_1 = iVar1;
  *in_ECX = iVar1 + -0xc;
  return;
}


/* FUN_00468f20 @ 00468f20  kind=gamemisc  attributed-by=none  size=40 */

void FUN_00468f20(float *param_1,float *param_2)

{
  float *in_ECX;
  
  *param_1 = *param_2 + *in_ECX;
  param_1[1] = param_2[1] + in_ECX[1];
  return;
}


/* FUN_004690a0 @ 004690a0  kind=gamemisc  attributed-by=none  size=1234 */

/* WARNING: Removing unreachable block (ram,0x0046949b) */
/* WARNING: Removing unreachable block (ram,0x00469417) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_004690a0(void)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  DWORD DVar7;
  int *in_ECX;
  int *piVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  int *piVar12;
  uint *puVar13;
  uint *puVar14;
  int iVar15;
  uint *puVar16;
  bool bVar17;
  undefined8 uVar18;
  longlong lVar19;
  uint local_68;
  uint *local_54;
  int local_48;
  uint local_44;
  undefined4 uStack_40;
  uint local_3c;
  uint local_38;
  undefined8 local_34;
  int local_2c;
  int local_24;
  int iStack_20;
  undefined8 local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uStack_40 = (uint)(uint3)uStack_40;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e5418;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar3;
  timeGetTime();
  cVar2 = *(char *)(*in_ECX + 0x800584);
  do {
    uVar10 = uStack_40;
    if (cVar2 == '\0') {
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(*in_ECX + 0x8005d0));
    iVar15 = *in_ECX;
    local_1c = *(undefined8 *)(iVar15 + 0x2ac);
    if (*(int *)(iVar15 + 0x800a50) == *(int *)(iVar15 + 0x800448)) {
      uVar6 = *(uint *)(iVar15 + 0x388);
      piVar8 = (int *)(iVar15 + 0x378);
      piVar12 = (int *)(iVar15 + 0x800a54);
      if (0xf < *(uint *)(iVar15 + 0x38c)) {
        piVar8 = (int *)*piVar8;
      }
      uVar1 = *(uint *)(iVar15 + 0x800a64);
      if (0xf < *(uint *)(iVar15 + 0x800a68)) {
        piVar12 = (int *)*piVar12;
      }
      uVar4 = uVar6;
      if (uVar1 < uVar6) {
        uVar4 = uVar1;
      }
      iVar5 = FUN_0040c590(piVar12,piVar8,uVar4,uVar3);
      bVar17 = false;
      if (iVar5 == 0) {
        if (uVar1 < uVar6) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (uint)(uVar1 != uVar6);
        }
        bVar17 = uVar6 == 0;
      }
      uStack_40 = uStack_40 & 0xffffff;
      if (!bVar17) goto LAB_00469175;
    }
    else {
LAB_00469175:
      uStack_40 = CONCAT13(1,(int3)uVar10);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(iVar15 + 0x8005d0));
    if (uStack_40._3_1_ == '\0') {
      puVar14 = (uint *)0x0;
      local_54 = (uint *)0x0;
      iVar15 = *(int *)(*in_ECX + 0x2dc);
      local_8 = 0;
      local_44 = (int)local_1c;
      if ((int)local_1c < (int)local_1c + iVar15) {
        do {
          iVar5 = local_1c._4_4_;
          if (local_1c._4_4_ < local_1c._4_4_ + iVar15) {
            do {
              if ((((-1 < (int)local_44) && (-1 < iVar5)) && ((int)local_44 < 0x80000)) &&
                 (iVar5 < 0x80000)) {
                local_2c = (local_44 - iVar15 / 2) - (int)local_1c;
                iVar9 = (iVar5 - iVar15 / 2) - local_1c._4_4_;
                uVar6 = local_2c * local_2c + iVar9 * iVar9;
                uVar18 = CONCAT44(iVar5,local_44);
                uVar10 = ((iVar5 % iVar15) * iVar15 + (int)local_44 % iVar15) * 0x268 +
                         *(int *)(*in_ECX + 0x2e0);
                local_3c = uVar10;
                local_38 = uVar6;
                local_34 = uVar18;
                local_24 = local_44;
                iStack_20 = iVar5;
                if (&local_3c < puVar14) {
                  if (puVar14 == (uint *)0x0) {
                    FUN_0046e780(1);
                    puVar14 = local_54;
                  }
                  if (puVar14 != (uint *)0x0) {
                    *puVar14 = uStack_40;
                    puVar14[1] = local_3c;
                    puVar14[2] = local_38;
                    puVar14[3] = (uint)local_34;
                  }
                }
                else {
                  if (puVar14 == (uint *)0x0) {
                    FUN_0046e780(1);
                    uVar18 = CONCAT44(iStack_20,local_24);
                    puVar14 = local_54;
                  }
                  if (puVar14 != (uint *)0x0) {
                    *puVar14 = uVar10;
                    puVar14[1] = uVar6;
                    *(undefined8 *)(puVar14 + 2) = uVar18;
                  }
                }
                puVar14 = puVar14 + 4;
                local_54 = puVar14;
              }
              iVar5 = iVar5 + 1;
              iVar15 = *(int *)(*in_ECX + 0x2dc);
            } while (iVar5 < local_1c._4_4_ + iVar15);
          }
          local_44 = local_44 + 1;
          iVar15 = *(int *)(*in_ECX + 0x2dc);
        } while ((int)local_44 < (int)local_1c + iVar15);
      }
      local_68 = local_68 & 0xffffff00;
      FUN_00455d80(0,puVar14,(int)puVar14 >> 4,local_68);
      FUN_00601cb0();
      lVar19 = FUN_0068d946();
      FUN_00601e90();
      uStack_40 = CONCAT13(1,(uint3)uStack_40);
      EnterCriticalSection((LPCRITICAL_SECTION)(*in_ECX + 0x800600));
      puVar14 = (uint *)0x0;
      if (local_54 != (uint *)0x0) {
        local_48 = 0;
        local_44 = 0;
        do {
          if (lVar19 < CONCAT44(local_48,local_44)) {
            FUN_00486ba0();
          }
          else {
            iVar15 = 0;
            puVar13 = (uint *)(*puVar14 + 0x18);
            puVar11 = puVar14 + 2;
            puVar16 = puVar13;
            do {
              if (*puVar16 != *puVar11) goto LAB_00469533;
              iVar15 = iVar15 + 1;
              puVar16 = puVar16 + 1;
              puVar11 = puVar11 + 1;
            } while (iVar15 < 2);
            if (*(char *)(*puVar14 + 0x74) != '\0') {
LAB_00469533:
              iVar15 = 0;
              puVar11 = puVar14 + 2;
              do {
                if (*puVar13 != *puVar11) {
                  FUN_00486ba0();
                  break;
                }
                iVar15 = iVar15 + 1;
                puVar13 = puVar13 + 1;
                puVar11 = puVar11 + 1;
              } while (iVar15 < 2);
              if (uStack_40._3_1_ != '\0') {
                uVar10 = puVar14[3];
                cVar2 = FUN_0046f490(puVar14[2],uVar10);
                if (cVar2 != '\0') {
                  uStack_40 = uStack_40 & 0xffffff;
                  cube::ChunkBuffer::~ChunkBuffer
                            ((ChunkBuffer *)*in_ECX,(undefined4 *)puVar14[2],uVar10);
                }
              }
            }
            uVar10 = *(uint *)(*puVar14 + 0x23c);
            bVar17 = CARRY4(local_44,uVar10);
            local_44 = local_44 + uVar10;
            local_48 = local_48 + ((int)uVar10 >> 0x1f) + (uint)bVar17;
          }
          puVar14 = puVar14 + 4;
        } while (puVar14 != local_54);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(*in_ECX + 0x800600));
      local_8 = 0xffffffff;
    }
    else {
      EnterCriticalSection((LPCRITICAL_SECTION)(*in_ECX + 0x800600));
      if (0 < *(int *)(*in_ECX + 0x2dc) * *(int *)(*in_ECX + 0x2dc)) {
        iVar15 = 0;
        do {
          FUN_00486ba0();
          iVar15 = iVar15 + 1;
        } while (iVar15 < *(int *)(*in_ECX + 0x2dc) * *(int *)(*in_ECX + 0x2dc));
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(*in_ECX + 0x800600));
    }
    DVar7 = timeGetTime();
    if (((60000 < (int)(DVar7 - _DAT_0076b078)) && (*(int *)(*in_ECX + 0x388) != 0)) &&
       (*(char *)(*in_ECX + 0x800584) != '\0')) {
      iVar15 = *in_ECX;
      FUN_00487520(iVar15,*(undefined4 *)(iVar15 + 0x800a0c),*(undefined4 *)(iVar15 + 0x8006d0));
      _DAT_0076b078 = DVar7;
    }
    Sleep(5);
    cVar2 = *(char *)(*in_ECX + 0x800584);
  } while( true );
}


/* FUN_00469590 @ 00469590  kind=gamemisc  attributed-by=none  size=1650 */

void FUN_00469590(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  DWORD DVar12;
  int *in_ECX;
  int *piVar13;
  byte *pbVar14;
  int iVar15;
  int *piVar16;
  byte *pbVar17;
  uint uVar18;
  code *pcVar19;
  uint uVar20;
  bool bVar21;
  DWORD local_5c;
  int local_4c;
  int local_48;
  int local_40;
  int local_28;
  int iStack_24;
  undefined8 local_18;
  
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_5c = timeGetTime();
  cVar1 = *(char *)(*in_ECX + 0x800584);
  do {
    if (cVar1 == '\0') {
      __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(*in_ECX + 0x8005e8));
    EnterCriticalSection((LPCRITICAL_SECTION)(*in_ECX + 0x8005d0));
    iVar7 = *in_ECX;
    local_28 = (int)*(undefined8 *)(iVar7 + 700);
    iStack_24 = (int)((ulonglong)*(undefined8 *)(iVar7 + 700) >> 0x20);
    iVar4 = (int)(*(float *)(iVar7 + 0x1000e4c) * 0.00390625 + (float)local_28);
    iVar5 = (int)(*(float *)(iVar7 + 0x1000e50) * 0.00390625 + (float)iStack_24);
    if (*(int *)(iVar7 + 0x800a50) == *(int *)(iVar7 + 0x800448)) {
      uVar20 = *(uint *)(iVar7 + 0x388);
      piVar16 = (int *)(iVar7 + 0x378);
      piVar13 = (int *)(iVar7 + 0x800a54);
      if (0xf < *(uint *)(iVar7 + 0x38c)) {
        piVar16 = (int *)*piVar16;
      }
      uVar18 = *(uint *)(iVar7 + 0x800a64);
      if (0xf < *(uint *)(iVar7 + 0x800a68)) {
        piVar13 = (int *)*piVar13;
      }
      uVar9 = uVar20;
      if (uVar18 < uVar20) {
        uVar9 = uVar18;
      }
      iVar6 = FUN_0040c590(piVar13,piVar16,uVar9);
      if ((((iVar6 != 0) || (uVar18 < uVar20)) || (uVar18 != uVar20)) ||
         (*(char *)(iVar7 + 0x800584) == '\0')) goto LAB_0046969a;
      bVar21 = false;
    }
    else {
LAB_0046969a:
      bVar21 = true;
    }
    pcVar19 = LeaveCriticalSection_exref;
    LeaveCriticalSection((LPCRITICAL_SECTION)(*in_ECX + 0x8005d0));
    if (!bVar21) {
      iVar7 = (int)(iVar4 + (iVar4 >> 0x1f & 0x3fU)) >> 6;
      local_40 = iVar7 + -3;
      iVar7 = iVar7 + 3;
      if (local_40 <= iVar7) {
        iVar8 = (int)(iVar5 + (iVar5 >> 0x1f & 0x3fU)) >> 6;
        iVar6 = iVar8 + -3;
        iVar10 = iVar6;
        iVar15 = local_40;
        do {
          for (; iVar10 <= iVar8 + 3; iVar10 = iVar10 + 1) {
            EnterCriticalSection((LPCRITICAL_SECTION)(*in_ECX + 0x8005d0));
            iVar2 = *in_ECX;
            if (*(int *)(iVar2 + 0x800a50) == *(int *)(iVar2 + 0x800448)) {
              uVar20 = *(uint *)(iVar2 + 0x388);
              pbVar17 = (byte *)(iVar2 + 0x378);
              pbVar14 = (byte *)(iVar2 + 0x800a54);
              if (0xf < *(uint *)(iVar2 + 0x38c)) {
                pbVar17 = *(byte **)pbVar17;
              }
              uVar18 = *(uint *)(iVar2 + 0x800a64);
              if (0xf < *(uint *)(iVar2 + 0x800a68)) {
                pbVar14 = *(byte **)pbVar14;
              }
              uVar9 = uVar20;
              if (uVar18 < uVar20) {
                uVar9 = uVar18;
              }
              if (uVar9 != 0) {
                while (uVar11 = uVar9 - 4, 3 < uVar9) {
                  if (*(int *)pbVar14 != *(int *)pbVar17) goto LAB_00469776;
                  pbVar14 = pbVar14 + 4;
                  pbVar17 = pbVar17 + 4;
                  uVar9 = uVar11;
                }
                if (uVar11 == 0xfffffffc) {
LAB_004697aa:
                  uVar9 = 0;
                }
                else {
LAB_00469776:
                  bVar21 = *pbVar14 < *pbVar17;
                  if ((*pbVar14 == *pbVar17) &&
                     ((uVar11 == 0xfffffffd ||
                      ((bVar21 = pbVar14[1] < pbVar17[1], pbVar14[1] == pbVar17[1] &&
                       ((uVar11 == 0xfffffffe ||
                        ((bVar21 = pbVar14[2] < pbVar17[2], pbVar14[2] == pbVar17[2] &&
                         ((uVar11 == 0xffffffff ||
                          (bVar21 = pbVar14[3] < pbVar17[3], pbVar14[3] == pbVar17[3]))))))))))))
                  goto LAB_004697aa;
                  uVar9 = -(uint)bVar21 | 1;
                }
                if (uVar9 != 0) goto LAB_004697c7;
              }
              if ((uVar18 < uVar20) || (uVar18 != uVar20)) goto LAB_004697c7;
              bVar21 = false;
            }
            else {
LAB_004697c7:
              bVar21 = true;
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)(*in_ECX + 0x8005d0));
            if (bVar21) goto LAB_00469835;
            FUN_0059c480();
            FUN_00603230(*in_ECX + 0x800d44,iVar15,iVar10);
            FUN_00601ea0();
          }
          iVar15 = iVar15 + 1;
          iVar10 = iVar6;
        } while (iVar15 <= iVar7);
      }
LAB_00469835:
      if (local_40 <= iVar7) {
        iVar10 = (int)(iVar5 + (iVar5 >> 0x1f & 0x3fU)) >> 6;
        iVar6 = iVar10 + -3;
        iVar10 = iVar10 + 3;
        do {
          local_48 = iVar6;
          if (iVar10 < iVar6) {
            if (bVar21) break;
          }
          else {
            do {
              EnterCriticalSection((LPCRITICAL_SECTION)(*in_ECX + 0x8005d0));
              iVar15 = *in_ECX;
              if (*(int *)(iVar15 + 0x800a50) == *(int *)(iVar15 + 0x800448)) {
                uVar20 = *(uint *)(iVar15 + 0x388);
                pbVar17 = (byte *)(iVar15 + 0x378);
                pbVar14 = (byte *)(iVar15 + 0x800a54);
                if (0xf < *(uint *)(iVar15 + 0x38c)) {
                  pbVar17 = *(byte **)pbVar17;
                }
                uVar18 = *(uint *)(iVar15 + 0x800a64);
                if (0xf < *(uint *)(iVar15 + 0x800a68)) {
                  pbVar14 = *(byte **)pbVar14;
                }
                uVar9 = uVar20;
                if (uVar18 < uVar20) {
                  uVar9 = uVar18;
                }
                if (uVar9 != 0) {
                  while (uVar11 = uVar9 - 4, 3 < uVar9) {
                    if (*(int *)pbVar14 != *(int *)pbVar17) goto LAB_004698d6;
                    pbVar14 = pbVar14 + 4;
                    pbVar17 = pbVar17 + 4;
                    uVar9 = uVar11;
                  }
                  if (uVar11 == 0xfffffffc) {
LAB_0046990a:
                    uVar9 = 0;
                  }
                  else {
LAB_004698d6:
                    bVar21 = *pbVar14 < *pbVar17;
                    if ((*pbVar14 == *pbVar17) &&
                       ((uVar11 == 0xfffffffd ||
                        ((bVar21 = pbVar14[1] < pbVar17[1], pbVar14[1] == pbVar17[1] &&
                         ((uVar11 == 0xfffffffe ||
                          ((bVar21 = pbVar14[2] < pbVar17[2], pbVar14[2] == pbVar17[2] &&
                           ((uVar11 == 0xffffffff ||
                            (bVar21 = pbVar14[3] < pbVar17[3], pbVar14[3] == pbVar17[3]))))))))))))
                    goto LAB_0046990a;
                    uVar9 = -(uint)bVar21 | 1;
                  }
                  if (uVar9 != 0) goto LAB_00469927;
                }
                if ((uVar18 < uVar20) || (uVar18 != uVar20)) goto LAB_00469927;
                bVar21 = false;
              }
              else {
LAB_00469927:
                bVar21 = true;
              }
              LeaveCriticalSection((LPCRITICAL_SECTION)(iVar15 + 0x8005d0));
              if (bVar21) goto LAB_00469993;
              FUN_0059c480();
              FUN_006024d0(*in_ECX + 0x800d44,local_40,local_48);
              FUN_00601ea0();
              local_48 = local_48 + 1;
            } while (local_48 <= iVar10);
            bVar21 = false;
          }
          local_40 = local_40 + 1;
        } while (local_40 <= iVar7);
      }
LAB_00469993:
      local_48 = 10;
      do {
        iVar7 = -1;
        local_4c = -1;
        local_18 = 0xffffffffffffffff;
        if ((int)(iVar4 - 10U) < iVar4 + 10) {
          uVar20 = iVar4 - 10U;
          do {
            uVar18 = iVar5 - 10U;
            if ((int)(iVar5 - 10U) < iVar5 + 10) {
              do {
                FUN_0059c480();
                FUN_00601cb0();
                iVar7 = FUN_00602440(uVar20,uVar18);
                if (iVar7 == 0) {
LAB_00469ac7:
                  bVar21 = true;
                }
                else {
                  if ((*(int *)(iVar7 + 8) == 0) || (*(char *)(iVar7 + 0x28) != '\0')) {
                    if ((*(byte *)(iVar7 + 0x30) & 2) != 0) goto LAB_00469ac7;
                    if ((((-1 < (int)uVar20) && (-1 < (int)uVar18)) && ((int)uVar20 < 0x10000)) &&
                       ((int)uVar18 < 0x10000)) {
                      iVar6 = (int)(((int)uVar18 >> 0x1f & 0x3fU) + uVar18) >> 6;
                      iVar7 = (int)(((int)uVar20 >> 0x1f & 0x3fU) + uVar20) >> 6;
                      if (((-1 < iVar7) && (-1 < iVar6)) &&
                         ((iVar7 < 0x400 &&
                          ((iVar6 < 0x400 &&
                           (iVar7 = *(int *)(*in_ECX + 0x3a0 + (iVar7 * 0x400 + iVar6) * 4),
                           iVar7 != 0)))))) {
                        uVar9 = uVar20 & 0x8000003f;
                        if ((int)uVar9 < 0) {
                          uVar9 = (uVar9 - 1 | 0xffffffc0) + 1;
                        }
                        uVar11 = uVar18 & 0x8000003f;
                        if ((int)uVar11 < 0) {
                          uVar11 = (uVar11 - 1 | 0xffffffc0) + 1;
                        }
                        if (*(int *)(iVar7 + 0x10018 + (uVar9 * 0x40 + uVar11) * 4) != 0)
                        goto LAB_00469ac7;
                      }
                    }
                  }
                  bVar21 = false;
                }
                FUN_00601e90();
                FUN_00601ea0();
                if ((bVar21) &&
                   ((iVar7 = (uVar20 - iVar4) * (uVar20 - iVar4) +
                             (uVar18 - iVar5) * (uVar18 - iVar5), local_4c < 0 || (iVar7 < local_4c)
                    ))) {
                  local_18 = CONCAT44(uVar18,uVar20);
                  local_4c = iVar7;
                }
                uVar18 = uVar18 + 1;
                iVar7 = local_4c;
              } while ((int)uVar18 < iVar5 + 10);
            }
            uVar20 = uVar20 + 1;
          } while ((int)uVar20 < iVar4 + 10);
          if (-1 < iVar7) {
            FUN_0059c480();
            FUN_00603a00(*in_ECX + 0x800d44,(undefined4)local_18,local_18._4_4_);
            FUN_00601ea0();
          }
        }
        local_48 = local_48 + -1;
        pcVar19 = LeaveCriticalSection_exref;
      } while (local_48 != 0);
    }
    DVar12 = timeGetTime();
    if (1000 < (int)(DVar12 - local_5c)) {
      FUN_005fbed0(iVar4,iVar5);
      local_5c = DVar12;
    }
    (*pcVar19)(*in_ECX + 0x8005e8);
    Sleep(10);
    cVar1 = *(char *)(*in_ECX + 0x800584);
  } while( true );
}


/* FUN_00469c10 @ 00469c10  kind=gamemisc  attributed-by=none  size=2309 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_00469c10(void)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  DWORD DVar6;
  int *in_ECX;
  int *piVar7;
  bool bVar8;
  undefined1 local_2490 [4];
  undefined4 local_248c;
  undefined4 uStack_2488;
  char local_2484 [8];
  uint local_247c;
  DWORD local_2478;
  int local_2474;
  int local_2470;
  int *local_246c;
  int *local_2464;
  undefined4 local_2460;
  char local_2459;
  char *local_2458;
  char *local_2454;
  undefined4 local_2450;
  int local_244c;
  char local_2448 [4];
  int *local_2444;
  int *local_243c;
  int *local_2434;
  undefined4 local_2430;
  undefined1 local_2429;
  undefined1 local_2428 [4456];
  undefined1 local_12c0 [4456];
  char local_158 [280];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined2 local_2e;
  undefined4 local_2c;
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e547f;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_247c = CONCAT31(local_247c._1_3_,1);
  FUN_0043c100(local_14);
  local_2429 = 0;
  timeBeginPeriod(1);
  local_2478 = timeGetTime();
  if (*(char *)(*in_ECX + 0x800585) == '\0') goto LAB_0046a870;
  local_2448[0] = '\0';
  local_2448[1] = '\0';
  local_2448[2] = '\0';
  local_2448[3] = '\0';
  iVar3 = send(*(SOCKET *)(*in_ECX + 0x8006cc),local_2448,4,0);
  if (iVar3 != -1) {
    local_2458 = (char *)0x0;
    local_2454 = (char *)0x0;
    local_2450 = 0;
    local_244c = 0;
    local_8 = 0;
    FUN_00601cb0();
    FUN_00458fd0(*in_ECX + 0x8006ec);
    local_8._0_1_ = 1;
    FUN_00458df0(*in_ECX + 0x8006f4);
    local_8._0_1_ = 2;
    FUN_00458f30(*in_ECX + 0x8006fc);
    local_18 = 7;
    local_1c = 0;
    local_2c = (char *)((uint)local_2c._2_2_ << 0x10);
    local_8 = CONCAT31(local_8._1_3_,4);
    if (*(int *)(*in_ECX + 0x1000e64) != 0) {
      puVar4 = (undefined4 *)(**(int **)(*in_ECX + 0x1000e60) + 8);
      if (&local_2c != puVar4) {
        FUN_0040f680(puVar4,0,0xffffffff);
      }
      FUN_00477d20(local_2490,**(undefined4 **)(*in_ECX + 0x1000e60));
    }
    bVar8 = *(int *)(*(int *)(*in_ECX + 0x8006d0) + 0x1310) != 0;
    local_2459 = bVar8;
    FUN_00459530();
    if (bVar8) {
      iVar3 = **(int **)(*(int *)(*in_ECX + 0x8006d0) + 0x130c);
      FUN_0042c5e0(iVar3 + 8);
      local_40 = *(undefined4 *)(iVar3 + 0x120);
      local_3c = *(undefined4 *)(iVar3 + 0x124);
      local_38 = *(undefined4 *)(iVar3 + 0x128);
      local_34 = *(undefined4 *)(iVar3 + 300);
      local_30 = *(undefined1 *)(iVar3 + 0x130);
      local_2e = *(undefined2 *)(iVar3 + 0x132);
      piVar7 = *(int **)(*(int *)(*in_ECX + 0x8006d0) + 0x130c);
      piVar1 = (int *)*piVar7;
      if (piVar1 != piVar7) {
        *(int *)piVar1[1] = *piVar1;
        *(int *)(*piVar1 + 4) = piVar1[1];
                    /* WARNING: Subroutine does not return */
        operator_delete(piVar1);
      }
    }
    iVar3 = *in_ECX;
    puVar4 = *(undefined4 **)(iVar3 + 0x8006ec);
    pvVar2 = (void *)*puVar4;
    *puVar4 = puVar4;
    *(int *)(*(int *)(iVar3 + 0x8006ec) + 4) = *(int *)(iVar3 + 0x8006ec);
    *(undefined4 *)(iVar3 + 0x8006f0) = 0;
    if (pvVar2 != *(void **)(iVar3 + 0x8006ec)) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    iVar3 = *in_ECX;
    puVar4 = *(undefined4 **)(iVar3 + 0x8006f4);
    pvVar2 = (void *)*puVar4;
    *puVar4 = puVar4;
    *(int *)(*(int *)(iVar3 + 0x8006f4) + 4) = *(int *)(iVar3 + 0x8006f4);
    *(undefined4 *)(iVar3 + 0x8006f8) = 0;
    if (pvVar2 != *(void **)(iVar3 + 0x8006f4)) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    iVar3 = *in_ECX;
    puVar4 = *(undefined4 **)(iVar3 + 0x8006fc);
    pvVar2 = (void *)*puVar4;
    *puVar4 = puVar4;
    *(int *)(*(int *)(iVar3 + 0x8006fc) + 4) = *(int *)(iVar3 + 0x8006fc);
    *(undefined4 *)(iVar3 + 0x800700) = 0;
    if (pvVar2 != *(void **)(iVar3 + 0x8006fc)) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    iVar3 = *(int *)(*in_ECX + 0x8006d0);
    local_248c = *(undefined4 *)(iVar3 + 8);
    uStack_2488 = *(undefined4 *)(iVar3 + 0xc);
    FUN_00466050(iVar3 + 0x10);
    FUN_00601e90();
    FUN_005870c0(local_2454 + (8 - (int)local_2458));
    *(ulonglong *)(local_2458 + local_244c) = CONCAT44(uStack_2488,local_248c);
    local_244c = local_244c + 8;
    FUN_004cdaa0(&local_2458,local_12c0,local_2428,local_247c);
    FUN_00449420();
    local_2474 = (int)local_2454 - (int)local_2458;
    iVar3 = send(*(SOCKET *)(*in_ECX + 0x8006cc),(char *)&local_2474,4,0);
    if (iVar3 == -1) {
      if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_2c);
      }
      local_2c = (char *)((uint)local_2c & 0xffff0000);
      local_18 = 7;
      local_1c = 0;
      piVar7 = (int *)*local_2434;
      *local_2434 = (int)local_2434;
      local_2434[1] = (int)local_2434;
      local_2430 = 0;
      if (piVar7 != local_2434) {
                    /* WARNING: Subroutine does not return */
        operator_delete(piVar7);
      }
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2434);
    }
    pcVar5 = local_2458;
    if (local_2458 == local_2454) {
      pcVar5 = (char *)0x0;
    }
    iVar3 = send(*(SOCKET *)(*in_ECX + 0x8006cc),pcVar5,local_2474,0);
    if (iVar3 == -1) {
LAB_0046a5a2:
      if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_2c);
      }
      local_18 = 7;
      local_1c = 0;
      local_2c = (char *)((uint)local_2c & 0xffff0000);
      FUN_004da480();
      FUN_004da480();
      FUN_004da480();
      if (local_2458 != (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_2458);
      }
    }
    else {
      local_247c = local_247c & 0xffffff00;
      FUN_0044b040(local_2428);
      if (local_1c == 0) {
LAB_0046a095:
        if (local_2459 == '\0') {
LAB_0046a0ed:
          piVar7 = (int *)*local_2444;
          if (piVar7 != local_2444) {
            do {
              local_2448[0] = '\a';
              local_2448[1] = '\0';
              local_2448[2] = '\0';
              local_2448[3] = '\0';
              iVar3 = send(*(SOCKET *)(*in_ECX + 0x8006cc),local_2448,4,0);
              if ((iVar3 == -1) ||
                 (iVar3 = send(*(SOCKET *)(*in_ECX + 0x8006cc),(char *)(piVar7 + 2),0x48,0),
                 iVar3 == -1)) goto LAB_0046a5a2;
              piVar7 = (int *)*piVar7;
            } while (piVar7 != local_2444);
          }
          piVar7 = (int *)*local_243c;
          if (piVar7 != local_243c) {
            do {
              local_2448[0] = '\b';
              local_2448[1] = '\0';
              local_2448[2] = '\0';
              local_2448[3] = '\0';
              iVar3 = send(*(SOCKET *)(*in_ECX + 0x8006cc),local_2448,4,0);
              if ((iVar3 == -1) ||
                 (iVar3 = send(*(SOCKET *)(*in_ECX + 0x8006cc),(char *)(piVar7 + 2),0x28,0),
                 iVar3 == -1)) goto LAB_0046a5a2;
              piVar7 = (int *)*piVar7;
            } while (piVar7 != local_243c);
          }
          piVar7 = (int *)*local_2434;
          if (piVar7 != local_2434) {
            do {
              local_2448[0] = '\t';
              local_2448[1] = '\0';
              local_2448[2] = '\0';
              local_2448[3] = '\0';
              iVar3 = send(*(SOCKET *)(*in_ECX + 0x8006cc),local_2448,4,0);
              if ((iVar3 == -1) ||
                 (iVar3 = send(*(SOCKET *)(*in_ECX + 0x8006cc),(char *)(piVar7 + 2),0x70,0),
                 iVar3 == -1)) {
                if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
                  operator_delete(local_2c);
                }
                local_2c = (char *)((uint)local_2c & 0xffff0000);
                local_18 = 7;
                local_1c = 0;
                piVar7 = (int *)*local_2434;
                *local_2434 = (int)local_2434;
                local_2434[1] = (int)local_2434;
                local_2430 = 0;
                if (piVar7 != local_2434) {
                    /* WARNING: Subroutine does not return */
                  operator_delete(piVar7);
                }
                    /* WARNING: Subroutine does not return */
                operator_delete(local_2434);
              }
              piVar7 = (int *)*piVar7;
            } while (piVar7 != local_2434);
          }
          EnterCriticalSection((LPCRITICAL_SECTION)(*in_ECX + 0x8005d0));
          FUN_00459250(*in_ECX + 0x2cc);
          local_8 = CONCAT31(local_8._1_3_,5);
          FUN_00459250(*in_ECX + 0x2d4);
          LeaveCriticalSection((LPCRITICAL_SECTION)(*in_ECX + 0x8005d0));
          DVar6 = timeGetTime();
          if (1000 < (int)(DVar6 - local_2478)) {
            piVar7 = (int *)*local_246c;
            local_2478 = DVar6;
            if (piVar7 != local_246c) {
              do {
                local_2484[4] = '\v';
                local_2484[5] = '\0';
                local_2484[6] = '\0';
                local_2484[7] = '\0';
                iVar3 = send(*(SOCKET *)(*in_ECX + 0x8006cc),local_2484 + 4,4,0);
                if ((iVar3 == -1) ||
                   (iVar3 = send(*(SOCKET *)(*in_ECX + 0x8006cc),(char *)(piVar7 + 2),8,0),
                   iVar3 == -1)) {
                  local_2429 = 1;
                  break;
                }
                piVar7 = (int *)*piVar7;
              } while (piVar7 != local_246c);
            }
            piVar7 = (int *)*local_2464;
            if (piVar7 != local_2464) {
              do {
                local_2484[0] = '\f';
                local_2484[1] = '\0';
                local_2484[2] = '\0';
                local_2484[3] = '\0';
                iVar3 = send(*(SOCKET *)(*in_ECX + 0x8006cc),local_2484,4,0);
                if (iVar3 == -1) {
                  local_2429 = 1;
                  break;
                }
                iVar3 = send(*(SOCKET *)(*in_ECX + 0x8006cc),(char *)(piVar7 + 2),8,0);
                if (iVar3 == -1) {
                  local_2429 = 1;
                  break;
                }
                piVar7 = (int *)*piVar7;
              } while (piVar7 != local_2464);
            }
          }
          if ((int)(DVar6 - DAT_0076b07c) < 0x14) {
            Sleep((DAT_0076b07c - DVar6) + 0x14);
          }
          piVar7 = (int *)*local_2464;
          *local_2464 = (int)local_2464;
          DAT_0076b07c = DVar6;
          local_2464[1] = (int)local_2464;
          local_2460 = 0;
          if (piVar7 != local_2464) {
                    /* WARNING: Subroutine does not return */
            operator_delete(piVar7);
          }
                    /* WARNING: Subroutine does not return */
          operator_delete(local_2464);
        }
        local_2448[0] = '\x06';
        local_2448[1] = '\0';
        local_2448[2] = '\0';
        local_2448[3] = '\0';
        iVar3 = send(*(SOCKET *)(*in_ECX + 0x8006cc),local_2448,4,0);
        if ((iVar3 != -1) &&
           (iVar3 = send(*(SOCKET *)(*in_ECX + 0x8006cc),local_158,300,0), iVar3 != -1))
        goto LAB_0046a0ed;
      }
      else {
        local_2470 = local_1c;
        local_2448[0] = '\n';
        local_2448[1] = '\0';
        local_2448[2] = '\0';
        local_2448[3] = '\0';
        iVar3 = send(*(SOCKET *)(*in_ECX + 0x8006cc),local_2448,4,0);
        if (iVar3 == -1) goto LAB_0046a5a2;
        iVar3 = send(*(SOCKET *)(*in_ECX + 0x8006cc),(char *)&local_2470,4,0);
        if (iVar3 != -1) {
          pcVar5 = (char *)&local_2c;
          if (7 < local_18) {
            pcVar5 = local_2c;
          }
          iVar3 = send(*(SOCKET *)(*in_ECX + 0x8006cc),pcVar5,local_2470 * 2,0);
          if (iVar3 != -1) goto LAB_0046a095;
        }
      }
      FUN_00593e50();
      FUN_004da480();
      FUN_004da480();
      FUN_004da480();
      FUN_005fb860();
    }
  }
  if (*(char *)(*in_ECX + 0x800585) != '\0') {
    closesocket(*(SOCKET *)(*in_ECX + 0x8006cc));
    *(undefined4 *)(*in_ECX + 0x8006cc) = 0;
    *(undefined1 *)(*in_ECX + 0x398) = 0;
  }
LAB_0046a870:
  timeEndPeriod(1);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0046b740 @ 0046b740  kind=gamemisc  attributed-by=none  size=382 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void __fastcall FUN_0046b740(int *param_1)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  Creature *pCVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  undefined1 auStack_1368 [76];
  undefined1 local_131c [156];
  undefined8 auStack_1280 [2];
  int *local_126c;
  undefined4 local_1264;
  DWORD local_1260;
  int iStack_1244;
  int iStack_1240;
  undefined4 uStack_123c;
  undefined4 uStack_1238;
  int aiStack_122c [2];
  int local_1224 [7];
  undefined4 local_1208;
  undefined4 local_1204;
  undefined4 *local_11f8;
  undefined4 local_11f4;
  char cStack_11dd;
  Creature *local_11dc;
  char local_11d5;
  undefined1 auStack_11d4 [24];
  undefined4 uStack_11bc;
  undefined4 uStack_11b8;
  undefined4 uStack_11b4;
  undefined1 auStack_1024 [4112];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e560e;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1264 = 0;
  local_1208 = 0;
  local_1204 = 0;
  local_126c = param_1;
  local_1208 = FUN_0046d4e0(local_14);
  local_8 = 0;
  local_11d5 = '\0';
  local_1260 = 0;
  local_11f8 = (undefined4 *)0x0;
  local_11f4 = 0;
  local_11f8 = (undefined4 *)FUN_0043c870();
  local_8 = CONCAT31(local_8._1_3_,1);
  timeBeginPeriod(1);
  if (*(char *)(*param_1 + 0x800585) != '\0') {
    while (local_11d5 == '\0') {
      local_1224[0] = 0;
      local_11dc = *(Creature **)(*param_1 + 0x8006cc);
      iVar6 = 4;
      piVar7 = local_1224;
      do {
        iVar2 = recv((SOCKET)local_11dc,(char *)piVar7,iVar6,0);
        if (iVar2 < 1) {
          if (iVar2 == -1) goto LAB_0046d0f2;
          break;
        }
        iVar6 = iVar6 - iVar2;
        piVar7 = (int *)((int)piVar7 + iVar2);
      } while (0 < iVar6);
      if (local_1224[0] == 2) {
        DVar3 = timeGetTime();
        FUN_00601cb0();
        if (local_1260 != 0) {
          _DAT_0076b048 = DVar3 - local_1260;
        }
        FUN_00601e90();
        local_1260 = DVar3;
      }
      switch(local_1224[0]) {
      case 0x46baad:
                    /* WARNING: This code block may not be properly labeled as switch case */
        iStack_1244 = 0;
        iStack_1240 = 0;
        uStack_123c = 0;
        uStack_1238 = 0;
        aiStack_122c[0] = 0;
        local_11dc = *(Creature **)(*param_1 + 0x8006cc);
        local_8._0_1_ = 7;
        iVar6 = 4;
        piVar7 = aiStack_122c;
        do {
          iVar2 = recv((SOCKET)local_11dc,(char *)piVar7,iVar6,0);
          if (iVar2 < 1) {
            if (iVar2 == -1) goto code_r0x0046bb46;
            break;
          }
          iVar6 = iVar6 - iVar2;
          piVar7 = (int *)((int)piVar7 + iVar2);
        } while (0 < iVar6);
        if (aiStack_122c[0] == 0) {
          local_11d5 = '\x01';
          local_8 = CONCAT31(local_8._1_3_,1);
          FUN_005fb860();
        }
        else {
          FUN_005870c0(aiStack_122c[0]);
          iVar6 = iStack_1244;
          if (iStack_1244 == iStack_1240) {
            iVar6 = 0;
          }
          iVar6 = FUN_00486b60(*(undefined4 *)(*param_1 + 0x8006cc),iVar6,aiStack_122c[0],0);
          if (iVar6 == -1) {
            local_11d5 = '\x01';
            local_8 = CONCAT31(local_8._1_3_,1);
            FUN_005fb860();
          }
          else {
            FUN_004494b0();
            auStack_1280[0] = 0;
            FUN_0044d620(auStack_1280,8);
            FUN_00601cb0();
            pCVar4 = (Creature *)FUN_0042f000(auStack_1280);
            cStack_11dd = '\0';
            if (pCVar4 == (Creature *)0x0) {
              local_11dc = operator_new(0x1e60);
              local_8._0_1_ = 8;
              if (local_11dc == (Creature *)0x0) {
                pCVar4 = (Creature *)0x0;
              }
              else {
                pCVar4 = cube::Creature::Creature(local_11dc,(undefined4 *)auStack_1280);
              }
              local_8._0_1_ = 7;
              puVar5 = (undefined4 *)FUN_00468ad0(auStack_1280);
              *puVar5 = pCVar4;
              cStack_11dd = '\x01';
            }
            local_11dc = pCVar4 + 1;
            FUN_00466050(local_11dc);
            FUN_00601e90();
            iVar6 = FUN_004ccfa0(&iStack_1244,auStack_11d4);
            if (iVar6 == -1) {
code_r0x0046bb46:
              local_11d5 = '\x01';
              local_8 = CONCAT31(local_8._1_3_,1);
              FUN_005fb860();
            }
            else {
              FUN_00453de0(auStack_1368,0,auStack_1280,DAT_0076b060);
              FUN_00601cb0();
              if (pCVar4 != *(Creature **)(*param_1 + 0x8006d0)) {
                if (((cStack_11dd != '\0') || (cVar1 = FUN_0042c680(auStack_1024), cVar1 != '\0'))
                   || ((float)pCVar4[0x16].Creature_data.offset_0x8 <= 0.0)) {
                  pCVar4[0x139].Creature_data.offset_0x4 = 0;
                  FUN_0043e630();
                  FUN_0042c5b0(auStack_11d4);
                  *(undefined4 *)&pCVar4[0x137].Creature_data = uStack_11bc;
                  pCVar4[0x137].Creature_data.offset_0x4 = uStack_11b8;
                  pCVar4[0x137].Creature_data.offset_0x8 = uStack_11b4;
                  FUN_0042c5b0(pCVar4 + 0x135);
                  pCVar4[0x136].Creature_data.offset_0x4 =
                       *(undefined4 *)&pCVar4[0x137].Creature_data;
                  pCVar4[0x136].Creature_data.offset_0x8 = pCVar4[0x137].Creature_data.offset_0x4;
                  pCVar4[0x137].vftablePtr =
                       (Creature_vftable *)pCVar4[0x137].Creature_data.offset_0x8;
                }
                else {
                  pCVar4[0x139].Creature_data.offset_0x4 = 0x3c;
                  FUN_0042c5b0(pCVar4 + 0x135);
                  pCVar4[0x136].Creature_data.offset_0x4 =
                       *(undefined4 *)&pCVar4[0x137].Creature_data;
                  pCVar4[0x136].Creature_data.offset_0x8 = pCVar4[0x137].Creature_data.offset_0x4;
                  pCVar4[0x137].vftablePtr =
                       (Creature_vftable *)pCVar4[0x137].Creature_data.offset_0x8;
                  pCVar4[0x138].vftablePtr =
                       (Creature_vftable *)pCVar4[0x138].Creature_data.offset_0x8;
                  *(Creature_vftable **)&pCVar4[0x138].Creature_data = pCVar4[0x139].vftablePtr;
                  pCVar4[0x138].Creature_data.offset_0x4 =
                       *(undefined4 *)&pCVar4[0x139].Creature_data;
                }
                FUN_0044b040(auStack_11d4);
              }
              FUN_00601e90();
              local_8 = CONCAT31(local_8._1_3_,1);
              FUN_005fb860();
            }
          }
        }
      }
      if (*(char *)(*param_1 + 0x800585) == '\0') break;
    }
  }
LAB_0046d0f2:
  timeEndPeriod(1);
  local_8 = local_8 & 0xffffff00;
  FUN_0067eb10(local_131c,*local_11f8,local_11f8);
                    /* WARNING: Subroutine does not return */
  operator_delete(local_11f8);
}


/* FUN_0046b8be @ 0046b8be  kind=gamemisc  attributed-by=none  size=566 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0046b8be(void *this)

{
  longlong lVar1;
  undefined4 *puVar2;
  _Container_base0 *p_Var3;
  bool bVar4;
  int *piVar5;
  char cVar6;
  DWORD DVar7;
  int iVar8;
  basic_ostream<char,std::char_traits<char>_> *this_00;
  int *piVar9;
  void *pvVar10;
  undefined4 *puVar11;
  SOCKET SVar12;
  int *piVar13;
  undefined4 uVar14;
  int iVar15;
  int *unaff_EBX;
  Creature *pCVar16;
  _Container_base0 *this_01;
  int unaff_EBP;
  int iVar17;
  char *pcVar18;
  Creature *pCVar19;
  
code_r0x0046b8be:
  iVar17 = *unaff_EBX;
  *(undefined4 *)(unaff_EBP + -0x120c) = 0;
  SVar12 = *(SOCKET *)(iVar17 + 0x8006cc);
  iVar17 = 4;
  pcVar18 = (char *)(unaff_EBP + -0x120c);
  *(SOCKET *)(unaff_EBP + -0x11d8) = SVar12;
  do {
    iVar8 = recv(SVar12,pcVar18,iVar17,0);
    if (iVar8 < 1) {
      if (iVar8 == -1) {
        cVar6 = '\x01';
        *(undefined1 *)(unaff_EBP + -0x11d1) = 1;
        goto LAB_0046d0e3;
      }
      break;
    }
    iVar17 = iVar17 - iVar8;
    pcVar18 = pcVar18 + iVar8;
    SVar12 = *(SOCKET *)(unaff_EBP + -0x11d8);
  } while (0 < iVar17);
  *(basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vbtable **)
   (unaff_EBP + -0x1424) =
       &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vbtable
  ;
  *(undefined **)(unaff_EBP + -0x1414) = &DAT_006fcd08;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>
            ((basic_ios<char,std::char_traits<char>_> *)(unaff_EBP + -0x13bc));
  *(uint *)(unaff_EBP + -0x1260) = *(uint *)(unaff_EBP + -0x1260) | 1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)(unaff_EBP + -0x1424),
             (basic_streambuf<char,std::char_traits<char>_> *)(unaff_EBP + -0x140c));
  *(undefined4 *)(unaff_EBP + -4) = 3;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   (unaff_EBP + -0x1424 + *(int *)(*(int *)(unaff_EBP + -0x1424) + 4)) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  iVar17 = *(int *)(*(int *)(unaff_EBP + -0x1424) + 4);
  *(int *)(unaff_EBP + -0x1428 + iVar17) = iVar17 + -0x68;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)(unaff_EBP + -0x140c));
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
  *(basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   (unaff_EBP + -0x140c) =
       &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(undefined4 *)(unaff_EBP + -0x13d4) = 0;
  *(undefined4 *)(unaff_EBP + -0x13d0) = 0;
  iVar17 = *(int *)(unaff_EBP + -0x120c);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  this_00 = (basic_ostream<char,std::char_traits<char>_> *)
            FUN_00449150(unaff_EBP + -0x1414,"online_");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(this_00,iVar17);
  FUN_0040e140(unaff_EBP + -0x68);
  iVar17 = *unaff_EBX;
  iVar8 = *(int *)(unaff_EBP + -0x120c);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar8 == *(int *)(iVar17 + 0x800a50)) {
    cVar6 = FUN_004514b0(iVar17 + 0x800a54,unaff_EBP + -0x68);
    if (cVar6 == '\0') goto LAB_0046ba7b;
    iVar8 = *(int *)(unaff_EBP + -0x120c);
  }
  FUN_0046f620(iVar8,unaff_EBP + -0x68);
  iVar17 = *(int *)(*(int *)(*unaff_EBX + 0x800884) + 0x3c);
  *(undefined4 *)(*(int *)(iVar17 + 0x94) + *(int *)(iVar17 + 0x68) * 4) = 1;
  iVar17 = *(int *)(*(int *)(*unaff_EBX + 0x800880) + 0x3c);
  *(undefined4 *)(*(int *)(iVar17 + 0x94) + *(int *)(iVar17 + 0x68) * 4) = 0;
  iVar17 = *(int *)(*(int *)(*unaff_EBX + 0x800888) + 0x3c);
  *(undefined4 *)(*(int *)(iVar17 + 0x94) + *(int *)(iVar17 + 0x68) * 4) = 0;
  iVar17 = *(int *)(*(int *)(*unaff_EBX + 0x80088c) + 0x3c);
  *(undefined4 *)(*(int *)(iVar17 + 0x94) + *(int *)(iVar17 + 0x68) * 4) = 0;
LAB_0046ba7b:
  FUN_00403eb0();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00404420(unaff_EBP + -0x1424);
LAB_0046d0dd:
  cVar6 = *(char *)(unaff_EBP + -0x11d1);
LAB_0046d0e3:
  if ((*(char *)(*unaff_EBX + 0x800585) == '\0') || (cVar6 != '\0')) {
LAB_0046d0f2:
    timeEndPeriod(1);
    uVar14 = **(undefined4 **)(unaff_EBP + -0x11f4);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_0067eb10(unaff_EBP + -0x1318,uVar14,*(undefined4 **)(unaff_EBP + -0x11f4));
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(unaff_EBP + -0x11f4));
  }
  iVar17 = *unaff_EBX;
  *(undefined4 *)(unaff_EBP + -0x1220) = 0;
  SVar12 = *(SOCKET *)(iVar17 + 0x8006cc);
  iVar17 = 4;
  pcVar18 = (char *)(unaff_EBP + -0x1220);
  *(SOCKET *)(unaff_EBP + -0x11d8) = SVar12;
  do {
    iVar8 = recv(SVar12,pcVar18,iVar17,0);
    if (iVar8 < 1) {
      if (iVar8 == -1) goto LAB_0046d0f2;
      break;
    }
    iVar17 = iVar17 - iVar8;
    pcVar18 = pcVar18 + iVar8;
    SVar12 = *(SOCKET *)(unaff_EBP + -0x11d8);
  } while (0 < iVar17);
  iVar17 = *(int *)(unaff_EBP + -0x1220);
  if (iVar17 == 2) {
    DVar7 = timeGetTime();
    FUN_00601cb0();
    if (*(int *)(unaff_EBP + -0x125c) != 0) {
      _DAT_0076b048 = DVar7 - *(int *)(unaff_EBP + -0x125c);
    }
    FUN_00601e90();
    iVar17 = *(int *)(unaff_EBP + -0x1220);
    *(DWORD *)(unaff_EBP + -0x125c) = DVar7;
  }
  switch(iVar17) {
  case 0:
    *(undefined4 *)(unaff_EBP + -0x1240) = 0;
    *(undefined4 *)(unaff_EBP + -0x123c) = 0;
    *(undefined4 *)(unaff_EBP + -0x1238) = 0;
    *(undefined4 *)(unaff_EBP + -0x1234) = 0;
    iVar17 = *unaff_EBX;
    *(undefined4 *)(unaff_EBP + -0x1228) = 0;
    SVar12 = *(SOCKET *)(iVar17 + 0x8006cc);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iVar17 = 4;
    pcVar18 = (char *)(unaff_EBP + -0x1228);
    *(SOCKET *)(unaff_EBP + -0x11d8) = SVar12;
    goto code_r0x0046bb00;
  case 1:
    goto DAT_0046c296;
  case 2:
    *(undefined4 *)(unaff_EBP + -0x1270) = 0;
    puVar11 = (undefined4 *)FUN_0046d550(0,0);
    *(undefined4 **)(unaff_EBP + -0x1274) = puVar11;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_00601cb0();
    iVar17 = *unaff_EBX;
    iVar8 = **(int **)(iVar17 + 0x2e8);
    *(int *)(unaff_EBP + -0x1230) = iVar8;
    if (iVar8 != *(int *)(iVar17 + 0x2e8)) {
      do {
        if (((*(int *)(iVar8 + 0x18) != 0) &&
            (*(int *)(iVar8 + 0x18) != *(int *)(iVar17 + 0x8006d0))) &&
           (piVar9 = (int *)FUN_00477d90(unaff_EBP + -0x132c,iVar8 + 0x10),
           *piVar9 == *(int *)(unaff_EBP + -0x11f4))) {
          FUN_004860b0(unaff_EBP + -0x1230);
        }
        FUN_005c3ea0();
        iVar17 = *unaff_EBX;
        iVar8 = *(int *)(unaff_EBP + -0x1230);
      } while (iVar8 != *(int *)(iVar17 + 0x2e8));
      puVar11 = *(undefined4 **)(unaff_EBP + -0x1274);
    }
    for (puVar2 = (undefined4 *)*puVar11; puVar2 != puVar11; puVar2 = (undefined4 *)*puVar2) {
      if (*(undefined4 **)(puVar2[2] + 0x18) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(puVar2[2] + 0x18))(1);
      }
      FUN_0043ede0(unaff_EBP + -0x1320,puVar2[2]);
    }
    FUN_00601e90();
    iVar17 = *(int *)(unaff_EBP + -0x11f4);
    pvVar10 = *(void **)(iVar17 + 4);
    if (*(char *)((int)pvVar10 + 0xd) != '\0') {
      *(int *)(iVar17 + 4) = iVar17;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      *(undefined4 *)*(undefined4 *)(unaff_EBP + -0x11f4) = *(undefined4 *)(unaff_EBP + -0x11f4);
      *(undefined4 *)(unaff_EBP + -0x1270) = 0;
      *(int *)(*(int *)(unaff_EBP + -0x11f4) + 8) = *(int *)(unaff_EBP + -0x11f4);
      *(undefined4 *)(unaff_EBP + -0x11f0) = 0;
      puVar2 = (undefined4 *)*puVar11;
      *puVar11 = puVar11;
      puVar11[1] = puVar11;
      if (puVar2 == puVar11) {
                    /* WARNING: Subroutine does not return */
        operator_delete(puVar11);
      }
                    /* WARNING: Subroutine does not return */
      operator_delete(puVar2);
    }
    FUN_0042ca80(*(undefined4 *)((int)pvVar10 + 8));
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar10);
  case 3:
    iVar17 = *unaff_EBX;
    *(undefined4 *)(unaff_EBP + -0x1224) = 0;
    SVar12 = *(SOCKET *)(iVar17 + 0x8006cc);
    iVar17 = 4;
    pcVar18 = (char *)(unaff_EBP + -0x1224);
    *(SOCKET *)(unaff_EBP + -0x11d8) = SVar12;
    while (iVar8 = recv(SVar12,pcVar18,iVar17,0), 0 < iVar8) {
      iVar17 = iVar17 - iVar8;
      pcVar18 = pcVar18 + iVar8;
      SVar12 = *(SOCKET *)(unaff_EBP + -0x11d8);
      if (iVar17 < 1) goto code_r0x0046bfef;
    }
    if (iVar8 != -1) {
code_r0x0046bfef:
      if (0 < *(int *)(unaff_EBP + -0x1224)) {
        FUN_004593b0(*(int *)(unaff_EBP + -0x1224));
        iVar17 = *(int *)(unaff_EBP + -0x1258);
        uVar14 = *(undefined4 *)(*unaff_EBX + 0x8006cc);
        *(undefined1 *)(unaff_EBP + -4) = 10;
        iVar8 = FUN_00486b60(uVar14,iVar17,
                             (*(int *)(unaff_EBP + -0x1224) * 0x10 - *(int *)(unaff_EBP + -0x1224))
                             * 8,0);
        if (iVar8 != -1) {
          FUN_00601cb0();
          iVar8 = *unaff_EBX;
          iVar15 = **(int **)(iVar8 + 0x2f0);
          *(int *)(unaff_EBP + -0x1284) = iVar15;
          if (iVar15 != *(int *)(iVar8 + 0x2f0)) {
            do {
              puVar11 = *(undefined4 **)(iVar15 + 0x18);
              *puVar11 = 0;
              puVar11[1] = 0;
              FUN_005c3ea0();
              iVar15 = *(int *)(unaff_EBP + -0x1284);
            } while (iVar15 != *(int *)(*unaff_EBX + 0x2f0));
          }
          if (iVar17 != *(int *)(unaff_EBP + -0x1254)) {
            do {
              piVar9 = (int *)FUN_00468ad0(iVar17);
              if (*piVar9 == 0) {
                pvVar10 = operator_new(0xa0);
                *(void **)(unaff_EBP + -0x11d8) = pvVar10;
                *(undefined1 *)(unaff_EBP + -4) = 0xb;
                if (pvVar10 == (void *)0x0) {
                  uVar14 = 0;
                }
                else {
                  uVar14 = FUN_00466510();
                }
                *(undefined1 *)(unaff_EBP + -4) = 10;
                puVar11 = (undefined4 *)FUN_00468ad0(iVar17);
                *puVar11 = uVar14;
              }
              FUN_00468790(iVar17);
              iVar17 = iVar17 + 0x78;
            } while (iVar17 != *(int *)(unaff_EBP + -0x1254));
          }
          iVar15 = 0;
          *(undefined4 *)(unaff_EBP + -0x1244) = 0;
          puVar11 = (undefined4 *)FUN_0046d550(0,0);
          *(undefined4 **)(unaff_EBP + -0x1248) = puVar11;
          iVar17 = *unaff_EBX;
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          iVar8 = **(int **)(iVar17 + 0x2f0);
          *(int *)(unaff_EBP + -0x121c) = iVar8;
          if (iVar8 != *(int *)(iVar17 + 0x2f0)) {
            do {
              if (**(int **)(iVar8 + 0x18) == 0 && (*(int **)(iVar8 + 0x18))[1] == 0) {
                iVar17 = FUN_00583cb0(puVar11,puVar11[1],unaff_EBP + -0x121c);
                if (iVar15 == 0x15555554) goto code_r0x0046d173;
                puVar11[1] = iVar17;
                piVar9 = *(int **)(iVar17 + 4);
                iVar15 = iVar15 + 1;
                *(int *)(unaff_EBP + -0x1244) = iVar15;
                *piVar9 = iVar17;
              }
              FUN_005c3ea0();
              iVar8 = *(int *)(unaff_EBP + -0x121c);
            } while (iVar8 != *(int *)(*unaff_EBX + 0x2f0));
          }
          for (puVar2 = (undefined4 *)*puVar11; puVar2 != puVar11; puVar2 = (undefined4 *)*puVar2) {
            iVar17 = *(int *)(puVar2[2] + 0x18);
            *(int *)(unaff_EBP + -0x11d8) = iVar17;
            if (iVar17 != 0) {
              puVar11 = *(undefined4 **)(iVar17 + 0x78);
              FUN_0067eb10(unaff_EBP + -0x1340,*puVar11,puVar11);
                    /* WARNING: Subroutine does not return */
              operator_delete(*(void **)(iVar17 + 0x78));
            }
            FUN_0043ede0(unaff_EBP + -0x1328,puVar2[2]);
          }
          FUN_00601e90();
          puVar2 = (undefined4 *)*puVar11;
          *puVar11 = puVar11;
          puVar11[1] = puVar11;
          *(undefined4 *)(unaff_EBP + -0x1244) = 0;
          if (puVar2 == puVar11) {
                    /* WARNING: Subroutine does not return */
            operator_delete(puVar11);
          }
                    /* WARNING: Subroutine does not return */
          operator_delete(puVar2);
        }
        *(undefined1 *)(unaff_EBP + -0x11d1) = 1;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_005fb860();
      }
      goto LAB_0046d0dd;
    }
    cVar6 = '\x01';
    *(undefined1 *)(unaff_EBP + -0x11d1) = 1;
    goto LAB_0046d0e3;
  case 4:
    iVar17 = *unaff_EBX;
    *(undefined4 *)(unaff_EBP + -0x122c) = 0;
    SVar12 = *(SOCKET *)(iVar17 + 0x8006cc);
    iVar17 = 4;
    pcVar18 = (char *)(unaff_EBP + -0x122c);
    *(SOCKET *)(unaff_EBP + -0x11d8) = SVar12;
    while (iVar8 = recv(SVar12,pcVar18,iVar17,0), 0 < iVar8) {
      iVar17 = iVar17 - iVar8;
      pcVar18 = pcVar18 + iVar8;
      SVar12 = *(SOCKET *)(unaff_EBP + -0x11d8);
      if (iVar17 < 1) goto code_r0x0046cc4d;
    }
    if (iVar8 != -1) {
code_r0x0046cc4d:
      FUN_00459a90();
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      FUN_005870c0(*(undefined4 *)(unaff_EBP + -0x122c));
      iVar17 = *(int *)(unaff_EBP + -0x11ec);
      if (iVar17 == *(int *)(unaff_EBP + -0x11e8)) {
        iVar17 = 0;
      }
      iVar17 = FUN_00486b60(*(undefined4 *)(*unaff_EBX + 0x8006cc),iVar17,
                            *(undefined4 *)(unaff_EBP + -0x122c),0);
      if (iVar17 == -1) {
        *(undefined1 *)(unaff_EBP + -0x11d1) = 1;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_005fb860();
      }
      else {
        FUN_004494b0();
        FUN_00466880();
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        FUN_00458310(unaff_EBP + -0x11ec,unaff_EBP + -0x12e8);
        FUN_004583f0(unaff_EBP + -0x11ec,unaff_EBP + -0x1300);
        FUN_00458860(unaff_EBP + -0x11ec,unaff_EBP + -0x12f0);
        FUN_00458940(unaff_EBP + -0x11ec,unaff_EBP + -0x12f8);
        FUN_004581d0(unaff_EBP + -0x11ec,unaff_EBP + -0x12e0);
        FUN_00458780(unaff_EBP + -0x11ec,unaff_EBP + -0x12d0);
        *(undefined4 *)(unaff_EBP + -0x126c) = 0;
        FUN_0044d620(unaff_EBP + -0x126c,4);
        iVar17 = *(int *)(unaff_EBP + -0x126c);
        if (0 < iVar17) {
          do {
            FUN_00465b30();
            *(undefined1 *)(unaff_EBP + -4) = 0x13;
            FUN_0044d620(unaff_EBP + -0x50,8);
            FUN_00458a20(unaff_EBP + -0x11ec,unaff_EBP + -0x48);
            FUN_00486330(unaff_EBP + -0x50);
            *(undefined1 *)(unaff_EBP + -4) = 0x12;
            FUN_00467a70();
            iVar17 = iVar17 + -1;
          } while (iVar17 != 0);
        }
        *(undefined4 *)(unaff_EBP + -0x124c) = 0;
        FUN_0044d620(unaff_EBP + -0x124c,4);
        iVar17 = *(int *)(unaff_EBP + -0x124c);
        if (0 < iVar17) {
          do {
            *(undefined4 *)(unaff_EBP + -0x14) = 0;
            uVar14 = FUN_0046d590(0,0);
            *(undefined4 *)(unaff_EBP + -0x18) = uVar14;
            iVar15 = *(int *)(unaff_EBP + -0x11e8) - *(int *)(unaff_EBP + -0x11ec);
            iVar8 = *(int *)(unaff_EBP + -0x11e0) + 8;
            *(undefined1 *)(unaff_EBP + -4) = 0x14;
            if (iVar15 < iVar8) {
              *(int *)(unaff_EBP + -0x11e0) = iVar15;
            }
            else {
              puVar11 = (undefined4 *)
                        (*(int *)(unaff_EBP + -0x11e0) + *(int *)(unaff_EBP + -0x11ec));
              uVar14 = puVar11[1];
              *(undefined4 *)(unaff_EBP + -0x20) = *puVar11;
              *(undefined4 *)(unaff_EBP + -0x1c) = uVar14;
              *(int *)(unaff_EBP + -0x11e0) = iVar8;
            }
            FUN_00458100(unaff_EBP + -0x11ec,unaff_EBP + -0x18);
            FUN_0060aa70(unaff_EBP + -0x20);
            *(undefined1 *)(unaff_EBP + -4) = 0x12;
            FUN_00467a70();
            iVar17 = iVar17 + -1;
          } while (iVar17 != 0);
        }
        FUN_00458500(unaff_EBP + -0x11ec,unaff_EBP + -0x12c0);
        FUN_00457f70(unaff_EBP + -0x11ec,unaff_EBP + -0x12b8);
        FUN_00457f70(unaff_EBP + -0x11ec,unaff_EBP + -0x12b0);
        FUN_00458030(unaff_EBP + -0x11ec,unaff_EBP + -0x12a8);
        FUN_00458650(unaff_EBP + -0x11ec,unaff_EBP + -0x12a0);
        FUN_00601cb0();
        FUN_00457b30(unaff_EBP + -0x1308,*(undefined4 *)(*unaff_EBX + 0x800648),
                     **(undefined4 **)(unaff_EBP + -0x12e8),*(undefined4 **)(unaff_EBP + -0x12e8));
        FUN_00457b80(unaff_EBP + -0x1324,*(undefined4 *)(*unaff_EBX + 0x800630),
                     **(undefined4 **)(unaff_EBP + -0x1300),*(undefined4 **)(unaff_EBP + -0x1300));
        FUN_00457d10(unaff_EBP + -0x1304,*(undefined4 *)(*unaff_EBX + 0x800640),
                     **(undefined4 **)(unaff_EBP + -0x12f0),*(undefined4 **)(unaff_EBP + -0x12f0));
        FUN_00457d60(unaff_EBP + -0x1334,*(undefined4 *)(*unaff_EBX + 0x800638),
                     **(undefined4 **)(unaff_EBP + -0x12f8),*(undefined4 **)(unaff_EBP + -0x12f8));
        FUN_00457ae0(unaff_EBP + -0x133c,*(undefined4 *)(*unaff_EBX + 0x800650),
                     **(undefined4 **)(unaff_EBP + -0x12e0),*(undefined4 **)(unaff_EBP + -0x12e0));
        FUN_00457bd0(unaff_EBP + -0x1344,*(undefined4 *)(*unaff_EBX + 0x800658),
                     **(undefined4 **)(unaff_EBP + -0x12d8),*(undefined4 **)(unaff_EBP + -0x12d8));
        FUN_00457cc0(unaff_EBP + -0x134c,*(undefined4 *)(*unaff_EBX + 0x800660),
                     **(undefined4 **)(unaff_EBP + -0x12d0),*(undefined4 **)(unaff_EBP + -0x12d0));
        FUN_00457a90(unaff_EBP + -0x1354,*(undefined4 *)(*unaff_EBX + 0x800668),
                     **(undefined4 **)(unaff_EBP + -0x12c8),*(undefined4 **)(unaff_EBP + -0x12c8));
        FUN_00457c20(unaff_EBP + -0x135c,*(undefined4 *)(*unaff_EBX + 0x800670),
                     **(undefined4 **)(unaff_EBP + -0x12c0),*(undefined4 **)(unaff_EBP + -0x12c0));
        FUN_004579c0(unaff_EBP + -0x1310,*(undefined4 *)(*unaff_EBX + 0x800678),
                     **(undefined4 **)(unaff_EBP + -0x12b8),*(undefined4 **)(unaff_EBP + -0x12b8));
        FUN_004579c0(unaff_EBP + -0x1314,*(undefined4 *)(*unaff_EBX + 0x800680),
                     **(undefined4 **)(unaff_EBP + -0x12b0),*(undefined4 **)(unaff_EBP + -0x12b0));
        FUN_00457a10(unaff_EBP + -0x131c,*(undefined4 *)(*unaff_EBX + 0x800688),
                     **(undefined4 **)(unaff_EBP + -0x12a8),*(undefined4 **)(unaff_EBP + -0x12a8));
        FUN_00457c70(unaff_EBP + -0x1338,*(undefined4 *)(*unaff_EBX + 0x800690),
                     **(undefined4 **)(unaff_EBP + -0x12a0),*(undefined4 **)(unaff_EBP + -0x12a0));
        FUN_00601e90();
        FUN_00467c70();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (*(int *)(unaff_EBP + -0x11ec) != 0) {
          std::_Container_base0::_Orphan_all((_Container_base0 *)(unaff_EBP + -0x11ec));
                    /* WARNING: Subroutine does not return */
          operator_delete(*(void **)(unaff_EBP + -0x11ec));
        }
      }
      goto LAB_0046d0dd;
    }
    cVar6 = '\x01';
    *(undefined1 *)(unaff_EBP + -0x11d1) = 1;
    goto LAB_0046d0e3;
  case 5:
    iVar17 = 4;
    SVar12 = *(SOCKET *)(*unaff_EBX + 0x8006cc);
    pcVar18 = (char *)(unaff_EBP + -0x1298);
    *(SOCKET *)(unaff_EBP + -0x11d8) = SVar12;
    do {
      iVar8 = recv(SVar12,pcVar18,iVar17,0);
      if (iVar8 < 1) {
        if (iVar8 == -1) {
          cVar6 = '\x01';
          *(undefined1 *)(unaff_EBP + -0x11d1) = 1;
          goto LAB_0046d0e3;
        }
        break;
      }
      iVar17 = iVar17 - iVar8;
      pcVar18 = pcVar18 + iVar8;
      SVar12 = *(SOCKET *)(unaff_EBP + -0x11d8);
    } while (0 < iVar17);
    iVar17 = 4;
    SVar12 = *(SOCKET *)(*unaff_EBX + 0x8006cc);
    pcVar18 = (char *)(unaff_EBP + -0x1294);
    *(SOCKET *)(unaff_EBP + -0x11d8) = SVar12;
    while (iVar8 = recv(SVar12,pcVar18,iVar17,0), 0 < iVar8) {
      iVar17 = iVar17 - iVar8;
      pcVar18 = pcVar18 + iVar8;
      SVar12 = *(SOCKET *)(unaff_EBP + -0x11d8);
      if (iVar17 < 1) goto code_r0x0046cbb1;
    }
    if (iVar8 != -1) goto code_r0x0046cbb1;
    cVar6 = '\x01';
    *(undefined1 *)(unaff_EBP + -0x11d1) = 1;
    goto LAB_0046d0e3;
  default:
    goto LAB_0046d0dd;
  case 10:
    *(undefined4 *)(unaff_EBP + -0x24) = 7;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    *(undefined2 *)(unaff_EBP + -0x38) = 0;
    iVar17 = 8;
    iVar8 = *unaff_EBX;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    SVar12 = *(SOCKET *)(iVar8 + 0x8006cc);
    pcVar18 = (char *)(unaff_EBP + -0x40);
    *(SOCKET *)(unaff_EBP + -0x11d8) = SVar12;
    break;
  case 0xf:
    goto code_r0x0046b8be;
  }
  while( true ) {
    iVar17 = iVar17 - iVar8;
    pcVar18 = pcVar18 + iVar8;
    SVar12 = *(SOCKET *)(unaff_EBP + -0x11d8);
    if (iVar17 < 1) break;
    iVar8 = recv(SVar12,pcVar18,iVar17,0);
    if (iVar8 < 1) {
      if (iVar8 == -1) goto code_r0x0046caa8;
      break;
    }
  }
  iVar17 = 4;
  SVar12 = *(SOCKET *)(*unaff_EBX + 0x8006cc);
  pcVar18 = (char *)(unaff_EBP + -0x1264);
  *(SOCKET *)(unaff_EBP + -0x11d8) = SVar12;
  do {
    iVar8 = recv(SVar12,pcVar18,iVar17,0);
    if (iVar8 < 1) {
      if (iVar8 == -1) goto code_r0x0046caa8;
      break;
    }
    iVar17 = iVar17 - iVar8;
    pcVar18 = pcVar18 + iVar8;
    SVar12 = *(SOCKET *)(unaff_EBP + -0x11d8);
  } while (0 < iVar17);
  if (0 < *(int *)(unaff_EBP + -0x1264)) {
    FUN_004870c0(*(int *)(unaff_EBP + -0x1264),0);
    iVar17 = unaff_EBP + -0x38;
    if (7 < *(uint *)(unaff_EBP + -0x24)) {
      iVar17 = *(int *)(unaff_EBP + -0x38);
    }
    iVar17 = FUN_00486b60(*(undefined4 *)(*unaff_EBX + 0x8006cc),iVar17,
                          *(int *)(unaff_EBP + -0x1264) * 2,0);
    if (iVar17 != -1) {
      FUN_00601cb0();
      FUN_004861f0(unaff_EBP + -0x40);
      FUN_00601e90();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00593e20();
      goto LAB_0046d0dd;
    }
code_r0x0046caa8:
    *(undefined1 *)(unaff_EBP + -0x11d1) = 1;
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00593e20();
  goto LAB_0046d0dd;
code_r0x0046cbb1:
  FUN_00601cb0();
  iVar17 = *unaff_EBX;
  uVar14 = *(undefined4 *)(unaff_EBP + -0x1294);
  *(undefined4 *)(iVar17 + 0x800444) = *(undefined4 *)(unaff_EBP + -0x1298);
  *(undefined4 *)(iVar17 + 0x800440) = uVar14;
  FUN_00601e90();
  goto LAB_0046d0dd;
DAT_0046c296:
  iVar17 = *unaff_EBX;
  *(undefined4 *)(unaff_EBP + -0x1218) = 0;
  SVar12 = *(SOCKET *)(iVar17 + 0x8006cc);
  iVar17 = 4;
  pcVar18 = (char *)(unaff_EBP + -0x1218);
  *(SOCKET *)(unaff_EBP + -0x11d8) = SVar12;
  while (iVar8 = recv(SVar12,pcVar18,iVar17,0), 0 < iVar8) {
    iVar17 = iVar17 - iVar8;
    pcVar18 = pcVar18 + iVar8;
    SVar12 = *(SOCKET *)(unaff_EBP + -0x11d8);
    if (iVar17 < 1) goto code_r0x0046c2e0;
  }
  if (iVar8 == -1) {
    cVar6 = '\x01';
    *(undefined1 *)(unaff_EBP + -0x11d1) = 1;
    goto LAB_0046d0e3;
  }
code_r0x0046c2e0:
  FUN_00601cb0();
  FUN_0067e480();
  iVar17 = *unaff_EBX;
  iVar8 = **(int **)(iVar17 + 0x2e8);
  *(int *)(unaff_EBP + -0x1280) = iVar8;
  if (iVar8 != *(int *)(iVar17 + 0x2e8)) {
    do {
      if (*(int *)(iVar8 + 0x18) != 0) {
        iVar17 = *(int *)(iVar8 + 0x18) + 0x10;
        FUN_00468b70(*(int *)(iVar8 + 0x18) + 8);
        FUN_0044b040(iVar17);
      }
      FUN_005c3ea0();
      iVar8 = *(int *)(unaff_EBP + -0x1280);
    } while (iVar8 != *(int *)(*unaff_EBX + 0x2e8));
  }
  FUN_00601e90();
  *(undefined4 *)(unaff_EBP + -0x11fc) = 0;
  *(undefined4 *)(unaff_EBP + -0x11f8) = 0;
  uVar14 = FUN_0043c870();
  *(undefined4 *)(unaff_EBP + -0x11fc) = uVar14;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  *(undefined4 *)(unaff_EBP + -0x1208) = 0;
  if (0 < *(int *)(unaff_EBP + -0x1218)) {
    do {
      iVar17 = *unaff_EBX;
      *(undefined8 *)(unaff_EBP + -0x1290) = 0;
      SVar12 = *(SOCKET *)(iVar17 + 0x8006cc);
      iVar17 = 8;
      pcVar18 = (char *)(unaff_EBP + -0x1290);
      *(SOCKET *)(unaff_EBP + -0x11d8) = SVar12;
      do {
        iVar8 = recv(SVar12,pcVar18,iVar17,0);
        if (iVar8 < 1) {
          if (iVar8 == -1) goto code_r0x0046c56c;
          break;
        }
        iVar17 = iVar17 - iVar8;
        pcVar18 = pcVar18 + iVar8;
        SVar12 = *(SOCKET *)(unaff_EBP + -0x11d8);
      } while (0 < iVar17);
      uVar14 = FUN_00468b70(unaff_EBP + -0x1290);
      iVar17 = FUN_004cd3e0(*(undefined4 *)(*unaff_EBX + 0x8006cc),uVar14);
      if (iVar17 == -1) {
code_r0x0046c56c:
        uVar14 = **(undefined4 **)(unaff_EBP + -0x11fc);
        *(undefined1 *)(unaff_EBP + -0x11d1) = 1;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_0067eb10(unaff_EBP + -0x1350,uVar14,*(undefined4 **)(unaff_EBP + -0x11fc));
                    /* WARNING: Subroutine does not return */
        operator_delete(*(void **)(unaff_EBP + -0x11fc));
      }
      FUN_00453de0(unaff_EBP + -0x136c,0,unaff_EBP + -0x1290,DAT_0076b060);
      iVar17 = *(int *)(unaff_EBP + -0x1208) + 1;
      *(int *)(unaff_EBP + -0x1208) = iVar17;
    } while (iVar17 < *(int *)(unaff_EBP + -0x1218));
  }
  FUN_00453de0(unaff_EBP + -0x1374,0,*(int *)(*unaff_EBX + 0x8006d0) + 8,DAT_0076b060);
  *(undefined4 *)(unaff_EBP + -0x1210) = 0;
  puVar11 = (undefined4 *)FUN_0046d550(0,0);
  *(undefined4 **)(unaff_EBP + -0x1214) = puVar11;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00601cb0();
  iVar17 = *unaff_EBX;
  piVar9 = (int *)**(int **)(iVar17 + 0x2e8);
  *(int **)(unaff_EBP + -0x1208) = piVar9;
  if (piVar9 != *(int **)(iVar17 + 0x2e8)) {
    do {
      if ((piVar9[6] != 0) &&
         (piVar13 = (int *)FUN_00477d90(unaff_EBP + -0x1330,piVar9 + 4),
         *piVar13 == *(int *)(unaff_EBP + -0x11fc))) {
        iVar8 = FUN_00583cb0(puVar11,puVar11[1],unaff_EBP + -0x1208);
        iVar17 = *(int *)(unaff_EBP + -0x1210);
        if (iVar17 == 0x15555554) {
code_r0x0046d173:
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("list<T> too long");
        }
        puVar11[1] = iVar8;
        piVar13 = *(int **)(iVar8 + 4);
        *(int *)(unaff_EBP + -0x1210) = iVar17 + 1;
        *piVar13 = iVar8;
      }
      if (*(char *)((int)piVar9 + 0xd) == '\0') {
        piVar13 = (int *)piVar9[2];
        if (*(char *)((int)piVar13 + 0xd) == '\0') {
          cVar6 = *(char *)(*piVar13 + 0xd);
          piVar9 = piVar13;
          piVar13 = (int *)*piVar13;
          while (cVar6 == '\0') {
            cVar6 = *(char *)(*piVar13 + 0xd);
            piVar9 = piVar13;
            piVar13 = (int *)*piVar13;
          }
        }
        else {
          cVar6 = *(char *)(piVar9[1] + 0xd);
          piVar5 = (int *)piVar9[1];
          piVar13 = piVar9;
          while ((piVar9 = piVar5, cVar6 == '\0' && (piVar13 == (int *)piVar9[2]))) {
            cVar6 = *(char *)(piVar9[1] + 0xd);
            piVar5 = (int *)piVar9[1];
            piVar13 = piVar9;
          }
        }
        *(int **)(unaff_EBP + -0x1208) = piVar9;
      }
    } while (piVar9 != *(int **)(*unaff_EBX + 0x2e8));
  }
  for (puVar2 = (undefined4 *)*puVar11; puVar2 != puVar11; puVar2 = (undefined4 *)*puVar2) {
    if (*(undefined4 **)(puVar2[2] + 0x18) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(puVar2[2] + 0x18))(1);
    }
    FUN_0043ede0(unaff_EBP + -0x1348,puVar2[2]);
  }
  piVar9 = (int *)**(int **)(unaff_EBP + -0x11fc);
  if (piVar9 == *(int **)(unaff_EBP + -0x11fc)) goto code_r0x0046c9c9;
  do {
    iVar17 = *unaff_EBX;
    FUN_00477d90(unaff_EBP + -0x1288,piVar9 + 4);
    if (*(int *)(unaff_EBP + -0x1288) == *(int *)(iVar17 + 0x2e8)) {
      pCVar19 = (Creature *)0x0;
    }
    else {
      pCVar19 = *(Creature **)(*(int *)(unaff_EBP + -0x1288) + 0x18);
    }
    bVar4 = false;
    if (pCVar19 == (Creature *)0x0) {
      pCVar19 = operator_new(0x1e60);
      *(Creature **)(unaff_EBP + -0x11d8) = pCVar19;
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      if (pCVar19 == (Creature *)0x0) {
        pCVar19 = (Creature *)0x0;
      }
      else {
        pCVar19 = cube::Creature::Creature(pCVar19,piVar9 + 4);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      puVar11 = (undefined4 *)FUN_00468ad0(piVar9 + 4);
      *puVar11 = pCVar19;
      bVar4 = true;
    }
    if (pCVar19 != *(Creature **)(*unaff_EBX + 0x8006d0)) {
      if (bVar4) {
code_r0x0046c7ab:
        pCVar19[0x139].Creature_data.offset_0x4 = 0;
        std::_Container_base0::_Orphan_all
                  ((_Container_base0 *)&pCVar19[0x11d].Creature_data.offset_0x8);
        p_Var3 = (_Container_base0 *)pCVar19[0x11e].vftablePtr;
        this_01 = (_Container_base0 *)pCVar19[0x11d].Creature_data.offset_0x8;
        *(_Container_base0 **)(unaff_EBP + -0x11d8) = p_Var3;
        for (; this_01 != p_Var3; this_01 = this_01 + 0xc) {
          if (*(int *)this_01 != 0) {
            std::_Container_base0::_Orphan_all(this_01);
                    /* WARNING: Subroutine does not return */
            operator_delete(*(void **)this_01);
          }
        }
        pCVar19[0x11e].vftablePtr = (Creature_vftable *)pCVar19[0x11d].Creature_data.offset_0x8;
        puVar11 = (undefined4 *)FUN_00468b70(piVar9 + 4);
        pCVar19[0x135].vftablePtr = (Creature_vftable *)*puVar11;
        *(undefined4 *)&pCVar19[0x135].Creature_data = puVar11[1];
        pCVar19[0x135].Creature_data.offset_0x4 = puVar11[2];
        pCVar19[0x135].Creature_data.offset_0x8 = puVar11[3];
        pCVar19[0x136].vftablePtr = (Creature_vftable *)puVar11[4];
        *(undefined4 *)&pCVar19[0x136].Creature_data = puVar11[5];
        iVar17 = FUN_00468b70(piVar9 + 4);
        *(undefined4 *)&pCVar19[0x137].Creature_data = *(undefined4 *)(iVar17 + 0x18);
        pCVar19[0x137].Creature_data.offset_0x4 = *(undefined4 *)(iVar17 + 0x1c);
        pCVar19[0x137].Creature_data.offset_0x8 = *(undefined4 *)(iVar17 + 0x20);
        pCVar19[0x133].Creature_data.offset_0x4 = pCVar19[0x135].vftablePtr;
        pCVar19[0x133].Creature_data.offset_0x8 = *(undefined4 *)&pCVar19[0x135].Creature_data;
        pCVar19[0x134].vftablePtr = (Creature_vftable *)pCVar19[0x135].Creature_data.offset_0x4;
        *(undefined4 *)&pCVar19[0x134].Creature_data = pCVar19[0x135].Creature_data.offset_0x8;
        pCVar19[0x134].Creature_data.offset_0x4 = pCVar19[0x136].vftablePtr;
        pCVar19[0x134].Creature_data.offset_0x8 = *(undefined4 *)&pCVar19[0x136].Creature_data;
        *(float *)(unaff_EBP + -0x11d8) = (float)*(longlong *)(pCVar19 + 0x135);
        *(undefined4 *)(unaff_EBP + -0x11d8) = *(undefined4 *)(unaff_EBP + -0x11d8);
        pCVar19[0x136].Creature_data.offset_0x4 = *(float *)(unaff_EBP + -0x11d8) * 1.5258789e-05;
        lVar1._0_4_ = pCVar19[0x135].Creature_data.offset_0x4;
        lVar1._4_4_ = pCVar19[0x135].Creature_data.offset_0x8;
        *(float *)(unaff_EBP + -0x11d8) = (float)lVar1;
        *(undefined4 *)(unaff_EBP + -0x11d8) = *(undefined4 *)(unaff_EBP + -0x11d8);
        pCVar19[0x136].Creature_data.offset_0x8 = *(float *)(unaff_EBP + -0x11d8) * 1.5258789e-05;
        *(float *)(unaff_EBP + -0x11d8) = (float)*(longlong *)(pCVar19 + 0x136);
        *(undefined4 *)(unaff_EBP + -0x11d8) = *(undefined4 *)(unaff_EBP + -0x11d8);
        pCVar19[0x137].vftablePtr =
             (Creature_vftable *)(*(float *)(unaff_EBP + -0x11d8) * 1.5258789e-05);
      }
      else {
        iVar17 = FUN_00468b70(piVar9 + 4);
        iVar17 = iVar17 + 0x1b0;
        *(int *)(unaff_EBP + -0x11d8) = iVar17;
        iVar8 = 0;
        pCVar16 = pCVar19 + 0x1c;
        do {
          if ((pCVar16->vftablePtr != *(Creature_vftable **)(iVar17 + iVar8 * 8)) ||
             (iVar17 = *(int *)(unaff_EBP + -0x11d8),
             *(int *)&pCVar16->Creature_data != *(int *)(iVar17 + 4 + iVar8 * 8)))
          goto code_r0x0046c7ab;
          iVar8 = iVar8 + 1;
          pCVar16 = (Creature *)&(pCVar16->Creature_data).offset_0x4;
        } while (iVar8 < 3);
        if ((float)pCVar19[0x16].Creature_data.offset_0x8 <= 0.0) goto code_r0x0046c7ab;
        pCVar19[0x139].Creature_data.offset_0x4 = 0x3c;
        pCVar19[0x133].Creature_data.offset_0x4 = pCVar19[0x135].vftablePtr;
        pCVar19[0x133].Creature_data.offset_0x8 = *(undefined4 *)&pCVar19[0x135].Creature_data;
        pCVar19[0x134].vftablePtr = (Creature_vftable *)pCVar19[0x135].Creature_data.offset_0x4;
        *(undefined4 *)&pCVar19[0x134].Creature_data = pCVar19[0x135].Creature_data.offset_0x8;
        pCVar19[0x134].Creature_data.offset_0x4 = pCVar19[0x136].vftablePtr;
        pCVar19[0x134].Creature_data.offset_0x8 = *(undefined4 *)&pCVar19[0x136].Creature_data;
        pCVar19[0x136].Creature_data.offset_0x4 = *(undefined4 *)&pCVar19[0x137].Creature_data;
        pCVar19[0x136].Creature_data.offset_0x8 = pCVar19[0x137].Creature_data.offset_0x4;
        pCVar19[0x137].vftablePtr = (Creature_vftable *)pCVar19[0x137].Creature_data.offset_0x8;
        pCVar19[0x138].vftablePtr = (Creature_vftable *)pCVar19[0x138].Creature_data.offset_0x8;
        *(Creature_vftable **)&pCVar19[0x138].Creature_data = pCVar19[0x139].vftablePtr;
        pCVar19[0x138].Creature_data.offset_0x4 = *(undefined4 *)&pCVar19[0x139].Creature_data;
      }
      uVar14 = FUN_00468b70(piVar9 + 4);
      FUN_0044b040(uVar14);
      unaff_EBX = *(int **)(unaff_EBP + -0x1268);
    }
    if (*(char *)((int)piVar9 + 0xd) == '\0') {
      piVar13 = (int *)piVar9[2];
      if (*(char *)((int)piVar13 + 0xd) == '\0') {
        cVar6 = *(char *)(*piVar13 + 0xd);
        piVar9 = piVar13;
        piVar13 = (int *)*piVar13;
        while (cVar6 == '\0') {
          cVar6 = *(char *)(*piVar13 + 0xd);
          piVar9 = piVar13;
          piVar13 = (int *)*piVar13;
        }
      }
      else {
        cVar6 = *(char *)(piVar9[1] + 0xd);
        piVar5 = (int *)piVar9[1];
        piVar13 = piVar9;
        while ((piVar9 = piVar5, cVar6 == '\0' && (piVar13 == (int *)piVar9[2]))) {
          cVar6 = *(char *)(piVar9[1] + 0xd);
          piVar5 = (int *)piVar9[1];
          piVar13 = piVar9;
        }
      }
    }
    if (piVar9 == *(int **)(unaff_EBP + -0x11fc)) {
      puVar11 = *(undefined4 **)(unaff_EBP + -0x1214);
code_r0x0046c9c9:
      FUN_00601e90();
      puVar2 = (undefined4 *)*puVar11;
      *puVar11 = puVar11;
      puVar11[1] = puVar11;
      *(undefined4 *)(unaff_EBP + -0x1210) = 0;
      if (puVar2 == puVar11) {
                    /* WARNING: Subroutine does not return */
        operator_delete(puVar11);
      }
                    /* WARNING: Subroutine does not return */
      operator_delete(puVar2);
    }
  } while( true );
  while( true ) {
    iVar17 = iVar17 - iVar8;
    pcVar18 = pcVar18 + iVar8;
    SVar12 = *(SOCKET *)(unaff_EBP + -0x11d8);
    if (iVar17 < 1) break;
code_r0x0046bb00:
    iVar8 = recv(SVar12,pcVar18,iVar17,0);
    if (iVar8 < 1) {
      if (iVar8 == -1) goto code_r0x0046bb46;
      break;
    }
  }
  if (*(int *)(unaff_EBP + -0x1228) == 0) {
    *(undefined1 *)(unaff_EBP + -0x11d1) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_005fb860();
  }
  else {
    FUN_005870c0(*(int *)(unaff_EBP + -0x1228));
    iVar17 = *(int *)(unaff_EBP + -0x1240);
    if (iVar17 == *(int *)(unaff_EBP + -0x123c)) {
      iVar17 = 0;
    }
    iVar17 = FUN_00486b60(*(undefined4 *)(*unaff_EBX + 0x8006cc),iVar17,
                          *(undefined4 *)(unaff_EBP + -0x1228),0);
    if (iVar17 == -1) {
      *(undefined1 *)(unaff_EBP + -0x11d1) = 1;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_005fb860();
    }
    else {
      FUN_004494b0();
      *(undefined8 *)(unaff_EBP + -0x127c) = 0;
      FUN_0044d620(unaff_EBP + -0x127c,8);
      FUN_00601cb0();
      pCVar19 = (Creature *)FUN_0042f000(unaff_EBP + -0x127c);
      *(undefined1 *)(unaff_EBP + -0x11d9) = 0;
      if (pCVar19 == (Creature *)0x0) {
        pCVar19 = operator_new(0x1e60);
        *(Creature **)(unaff_EBP + -0x11d8) = pCVar19;
        *(undefined1 *)(unaff_EBP + -4) = 8;
        if (pCVar19 == (Creature *)0x0) {
          pCVar19 = (Creature *)0x0;
        }
        else {
          pCVar19 = cube::Creature::Creature(pCVar19,(undefined4 *)(unaff_EBP + -0x127c));
        }
        *(undefined1 *)(unaff_EBP + -4) = 7;
        puVar11 = (undefined4 *)FUN_00468ad0(unaff_EBP + -0x127c);
        *puVar11 = pCVar19;
        *(undefined1 *)(unaff_EBP + -0x11d9) = 1;
      }
      *(Creature **)(unaff_EBP + -0x11d8) = pCVar19 + 1;
      FUN_00466050(pCVar19 + 1);
      FUN_00601e90();
      iVar17 = FUN_004ccfa0(unaff_EBP + -0x1240,unaff_EBP + -0x11d0);
      if (iVar17 == -1) {
code_r0x0046bb46:
        *(undefined1 *)(unaff_EBP + -0x11d1) = 1;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_005fb860();
      }
      else {
        FUN_00453de0(unaff_EBP + -0x1364,0,unaff_EBP + -0x127c,DAT_0076b060);
        FUN_00601cb0();
        if (pCVar19 != *(Creature **)(*unaff_EBX + 0x8006d0)) {
          if (((*(char *)(unaff_EBP + -0x11d9) != '\0') ||
              (cVar6 = FUN_0042c680(unaff_EBP + -0x1020), cVar6 != '\0')) ||
             ((float)pCVar19[0x16].Creature_data.offset_0x8 <= 0.0)) {
            pCVar19[0x139].Creature_data.offset_0x4 = 0;
            FUN_0043e630();
            FUN_0042c5b0(unaff_EBP + -0x11d0);
            *(undefined4 *)&pCVar19[0x137].Creature_data = *(undefined4 *)(unaff_EBP + -0x11b8);
            pCVar19[0x137].Creature_data.offset_0x4 = *(undefined4 *)(unaff_EBP + -0x11b4);
            pCVar19[0x137].Creature_data.offset_0x8 = *(undefined4 *)(unaff_EBP + -0x11b0);
            FUN_0042c5b0(pCVar19 + 0x135);
            pCVar19[0x136].Creature_data.offset_0x4 = *(undefined4 *)&pCVar19[0x137].Creature_data;
            pCVar19[0x136].Creature_data.offset_0x8 = pCVar19[0x137].Creature_data.offset_0x4;
            pCVar19[0x137].vftablePtr = (Creature_vftable *)pCVar19[0x137].Creature_data.offset_0x8;
          }
          else {
            pCVar19[0x139].Creature_data.offset_0x4 = 0x3c;
            FUN_0042c5b0(pCVar19 + 0x135);
            pCVar19[0x136].Creature_data.offset_0x4 = *(undefined4 *)&pCVar19[0x137].Creature_data;
            pCVar19[0x136].Creature_data.offset_0x8 = pCVar19[0x137].Creature_data.offset_0x4;
            pCVar19[0x137].vftablePtr = (Creature_vftable *)pCVar19[0x137].Creature_data.offset_0x8;
            pCVar19[0x138].vftablePtr = (Creature_vftable *)pCVar19[0x138].Creature_data.offset_0x8;
            *(Creature_vftable **)&pCVar19[0x138].Creature_data = pCVar19[0x139].vftablePtr;
            pCVar19[0x138].Creature_data.offset_0x4 = *(undefined4 *)&pCVar19[0x139].Creature_data;
          }
          FUN_0044b040(unaff_EBP + -0x11d0);
        }
        FUN_00601e90();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_005fb860();
      }
    }
  }
  goto LAB_0046d0dd;
}


/* FUN_0046d4b0 @ 0046d4b0  kind=gamemisc  attributed-by=none  size=47 */

void FUN_0046d4b0(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x1c);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0046d4be. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
    std::_Xbad_alloc();
    return;
  }
  *(void **)pvVar1 = pvVar1;
  if ((undefined4 *)((int)pvVar1 + 4) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 4) = pvVar1;
  }
  if ((undefined4 *)((int)pvVar1 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 8) = pvVar1;
  }
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


/* FUN_0046d4e0 @ 0046d4e0  kind=gamemisc  attributed-by=none  size=50 */

void FUN_0046d4e0(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x1180);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0046d4f1. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
    std::_Xbad_alloc();
    return;
  }
  *(void **)pvVar1 = pvVar1;
  if ((undefined4 *)((int)pvVar1 + 4) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 4) = pvVar1;
  }
  if ((undefined4 *)((int)pvVar1 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 8) = pvVar1;
  }
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


/* FUN_0046d520 @ 0046d520  kind=gamemisc  attributed-by=none  size=47 */

void FUN_0046d520(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x28);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0046d52e. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
    std::_Xbad_alloc();
    return;
  }
  *(void **)pvVar1 = pvVar1;
  if ((undefined4 *)((int)pvVar1 + 4) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 4) = pvVar1;
  }
  if ((undefined4 *)((int)pvVar1 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 8) = pvVar1;
  }
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


/* FUN_0046d550 @ 0046d550  kind=gamemisc  attributed-by=none  size=54 */

void FUN_0046d550(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0xc);
  if (puVar1 != (void *)0x0) {
    if (param_1 == (void *)0x0) {
      param_1 = puVar1;
      param_2 = puVar1;
    }
    *puVar1 = param_1;
    if (puVar1 + 1 != (undefined4 *)0x0) {
      puVar1[1] = param_2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_alloc();
}


/* FUN_0046d950 @ 0046d950  kind=gamemisc  attributed-by=none  size=58 */

undefined4 * FUN_0046d950(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = operator_new(0x1180);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
  *puVar1 = *in_ECX;
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = *in_ECX;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *in_ECX;
  }
  return puVar1;
}


/* FUN_0046dd00 @ 0046dd00  kind=gamemisc  attributed-by=none  size=56 */

uint FUN_0046dd00(uint param_1)

{
  int *in_ECX;
  uint uVar1;
  
  uVar1 = in_ECX[2] - *in_ECX >> 4;
  if (0xfffffff - (uVar1 >> 1) < uVar1) {
    uVar1 = 0;
    if (param_1 != 0) {
      uVar1 = param_1;
    }
    return uVar1;
  }
  uVar1 = uVar1 + (uVar1 >> 1);
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}


/* FUN_0046dd90 @ 0046dd90  kind=gamemisc  attributed-by=none  size=75 */

uint FUN_0046dd90(uint param_1)

{
  int *in_ECX;
  uint uVar1;
  
  uVar1 = (in_ECX[2] - *in_ECX) / 0x78;
  if (0x2222222 - (uVar1 >> 1) < uVar1) {
    uVar1 = 0;
    if (param_1 != 0) {
      uVar1 = param_1;
    }
    return uVar1;
  }
  uVar1 = uVar1 + (uVar1 >> 1);
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}


/* FUN_0046e530 @ 0046e530  kind=gamemisc  attributed-by=none  size=186 */

void FUN_0046e530(uint param_1)

{
  void *pvVar1;
  uint uVar2;
  undefined4 *in_ECX;
  void *pvVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar2 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e56f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar3 = (void *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0x20000000) {
      pvVar3 = operator_new(param_1 * 8);
      if (pvVar3 != (void *)0x0) goto LAB_0046e590;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_0046e590:
  local_8 = 0;
  FUN_00456f20(*in_ECX,in_ECX[1],pvVar3,(int)&param_1 + 3,0,param_1);
  pvVar1 = (void *)*in_ECX;
  param_1 = in_ECX[1] - (int)pvVar1 >> 3;
  if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  in_ECX[2] = (void *)((int)pvVar3 + uVar2 * 8);
  *in_ECX = pvVar3;
  in_ECX[1] = (void *)((int)pvVar3 + param_1 * 8);
  ExceptionList = local_10;
  return;
}


/* FUN_0046e780 @ 0046e780  kind=gamemisc  attributed-by=none  size=115 */

void FUN_0046e780(uint param_1)

{
  int *in_ECX;
  uint uVar1;
  
  if (param_1 <= (uint)(in_ECX[2] - in_ECX[1] >> 4)) {
    return;
  }
  if (0xfffffffU - (in_ECX[1] - *in_ECX >> 4) < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar1 = in_ECX[2] - *in_ECX >> 4;
  if (0xfffffff - (uVar1 >> 1) < uVar1) {
    FUN_0046e250();
    return;
  }
  FUN_0046e250();
  return;
}


/* FUN_0046e880 @ 0046e880  kind=gamemisc  attributed-by=none  size=111 */

int FUN_0046e880(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  
  iVar3 = in_ECX[2] - in_ECX[1];
  iVar2 = iVar3 * -0x77777777;
  if ((uint)(iVar3 / 0x78) < param_1) {
    iVar2 = (in_ECX[1] - *in_ECX) / 0x78;
    if (0x2222222U - iVar2 < param_1) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("vector<T> too long");
    }
    uVar1 = FUN_0046dd90(iVar2 + param_1);
    iVar2 = FUN_0046e430(uVar1);
  }
  return iVar2;
}


/* FUN_0046e8f0 @ 0046e8f0  kind=gamemisc  attributed-by=none  size=115 */

void FUN_0046e8f0(uint param_1)

{
  int *in_ECX;
  uint uVar1;
  
  if (param_1 <= (uint)(in_ECX[2] - in_ECX[1] >> 3)) {
    return;
  }
  if (0x1fffffffU - (in_ECX[1] - *in_ECX >> 3) < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar1 = in_ECX[2] - *in_ECX >> 3;
  if (0x1fffffff - (uVar1 >> 1) < uVar1) {
    FUN_0046e530();
    return;
  }
  FUN_0046e530();
  return;
}


/* FUN_0046ef60 @ 0046ef60  kind=gamemisc  attributed-by=none  size=237 */

void FUN_0046ef60(undefined4 *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int *in_ECX;
  int *piVar3;
  
  if ((uint)param_1[4] < param_2) {
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("invalid string position");
  }
  uVar2 = param_1[4] - param_2;
  iVar1 = in_ECX[4];
  if (uVar2 < param_3) {
    param_3 = uVar2;
  }
  if (-iVar1 - 1U <= param_3) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("string too long");
  }
  if (param_3 != 0) {
    uVar2 = iVar1 + param_3;
    if (uVar2 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("string too long");
    }
    if ((uint)in_ECX[5] < uVar2) {
      FUN_004054f0(uVar2,iVar1);
      if (uVar2 == 0) {
        return;
      }
    }
    else if (uVar2 == 0) {
      in_ECX[4] = 0;
      if (0xf < (uint)in_ECX[5]) {
        *(undefined1 *)*in_ECX = 0;
        return;
      }
      *(undefined1 *)in_ECX = 0;
      return;
    }
    if (0xf < (uint)param_1[5]) {
      param_1 = (undefined4 *)*param_1;
    }
    piVar3 = in_ECX;
    if (0xf < (uint)in_ECX[5]) {
      piVar3 = (int *)*in_ECX;
    }
    if (param_3 != 0) {
      memcpy((void *)(in_ECX[4] + (int)piVar3),(void *)(param_2 + (int)param_1),param_3);
    }
    in_ECX[4] = uVar2;
    if (0xf < (uint)in_ECX[5]) {
      *(undefined1 *)(*in_ECX + uVar2) = 0;
      return;
    }
    *(undefined1 *)((int)in_ECX + uVar2) = 0;
  }
  return;
}


/* FUN_0046f050 @ 0046f050  kind=gamemisc  attributed-by=none  size=287 */

void FUN_0046f050(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  
  if (param_1 != (int *)0x0) {
    uVar1 = in_ECX[5];
    piVar3 = in_ECX;
    if (0xf < uVar1) {
      piVar3 = (int *)*in_ECX;
    }
    if (piVar3 <= param_1) {
      piVar3 = in_ECX;
      if (0xf < uVar1) {
        piVar3 = (int *)*in_ECX;
      }
      if (param_1 < (int *)(in_ECX[4] + (int)piVar3)) {
        if (0xf < uVar1) {
          FUN_0046ef60(in_ECX,(int)param_1 - *in_ECX,param_2);
          return;
        }
        FUN_0046ef60(in_ECX,(int)param_1 - (int)in_ECX,param_2);
        return;
      }
    }
  }
  iVar2 = in_ECX[4];
  if (-iVar2 - 1U <= param_2) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("string too long");
  }
  if (param_2 != 0) {
    uVar1 = iVar2 + param_2;
    if (uVar1 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("string too long");
    }
    if ((uint)in_ECX[5] < uVar1) {
      FUN_004054f0(uVar1,iVar2);
      if (uVar1 == 0) {
        return;
      }
    }
    else if (uVar1 == 0) {
      in_ECX[4] = 0;
      if (0xf < (uint)in_ECX[5]) {
        *(undefined1 *)*in_ECX = 0;
        return;
      }
      *(undefined1 *)in_ECX = 0;
      return;
    }
    piVar3 = in_ECX;
    if (0xf < (uint)in_ECX[5]) {
      piVar3 = (int *)*in_ECX;
    }
    if (param_2 != 0) {
      memcpy((void *)(in_ECX[4] + (int)piVar3),param_1,param_2);
    }
    in_ECX[4] = uVar1;
    if (0xf < (uint)in_ECX[5]) {
      *(undefined1 *)(*in_ECX + uVar1) = 0;
      return;
    }
    *(undefined1 *)((int)in_ECX + uVar1) = 0;
  }
  return;
}


/* FUN_0046f170 @ 0046f170  kind=gamemisc  attributed-by=none  size=253 */

void FUN_0046f170(undefined4 *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int *in_ECX;
  int *piVar3;
  
  if ((uint)param_1[4] < param_2) {
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("invalid string position");
  }
  uVar2 = param_1[4] - param_2;
  iVar1 = in_ECX[4];
  if (uVar2 < param_3) {
    param_3 = uVar2;
  }
  if (-iVar1 - 1U <= param_3) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("string too long");
  }
  if (param_3 != 0) {
    uVar2 = iVar1 + param_3;
    if (0x7ffffffe < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("string too long");
    }
    if ((uint)in_ECX[5] < uVar2) {
      FUN_0040f170(uVar2,iVar1);
      if (uVar2 == 0) {
        return;
      }
    }
    else if (uVar2 == 0) {
      in_ECX[4] = 0;
      if (7 < (uint)in_ECX[5]) {
        *(undefined2 *)*in_ECX = 0;
        return;
      }
      *(undefined2 *)in_ECX = 0;
      return;
    }
    if (7 < (uint)param_1[5]) {
      param_1 = (undefined4 *)*param_1;
    }
    piVar3 = in_ECX;
    if (7 < (uint)in_ECX[5]) {
      piVar3 = (int *)*in_ECX;
    }
    if (param_3 != 0) {
      memcpy((void *)((int)piVar3 + in_ECX[4] * 2),(void *)((int)param_1 + param_2 * 2),param_3 * 2)
      ;
    }
    in_ECX[4] = uVar2;
    if (7 < (uint)in_ECX[5]) {
      *(undefined2 *)(*in_ECX + uVar2 * 2) = 0;
      return;
    }
    *(undefined2 *)((int)in_ECX + uVar2 * 2) = 0;
  }
  return;
}


/* FUN_0046f270 @ 0046f270  kind=gamemisc  attributed-by=none  size=287 */

void FUN_0046f270(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  
  if (param_1 != (int *)0x0) {
    uVar1 = in_ECX[5];
    piVar3 = in_ECX;
    if (7 < uVar1) {
      piVar3 = (int *)*in_ECX;
    }
    if (piVar3 <= param_1) {
      piVar3 = in_ECX;
      if (7 < uVar1) {
        piVar3 = (int *)*in_ECX;
      }
      if (param_1 < (int *)((int)piVar3 + in_ECX[4] * 2)) {
        piVar3 = in_ECX;
        if (7 < uVar1) {
          piVar3 = (int *)*in_ECX;
        }
        FUN_0046f170(in_ECX,(int)param_1 - (int)piVar3 >> 1,param_2);
        return;
      }
    }
  }
  iVar2 = in_ECX[4];
  if (-iVar2 - 1U <= param_2) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("string too long");
  }
  if (param_2 != 0) {
    uVar1 = iVar2 + param_2;
    if (0x7ffffffe < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("string too long");
    }
    if ((uint)in_ECX[5] < uVar1) {
      FUN_0040f170(uVar1,iVar2);
      if (uVar1 == 0) {
        return;
      }
    }
    else if (uVar1 == 0) {
      in_ECX[4] = 0;
      if (7 < (uint)in_ECX[5]) {
        *(undefined2 *)*in_ECX = 0;
        return;
      }
      *(undefined2 *)in_ECX = 0;
      return;
    }
    piVar3 = in_ECX;
    if (7 < (uint)in_ECX[5]) {
      piVar3 = (int *)*in_ECX;
    }
    if (param_2 != 0) {
      memcpy((void *)((int)piVar3 + in_ECX[4] * 2),param_1,param_2 * 2);
    }
    in_ECX[4] = uVar1;
    if (7 < (uint)in_ECX[5]) {
      *(undefined2 *)(*in_ECX + uVar1 * 2) = 0;
      return;
    }
    *(undefined2 *)((int)in_ECX + uVar1 * 2) = 0;
  }
  return;
}


/* FUN_0046f390 @ 0046f390  kind=gamemisc  attributed-by=none  size=152 */

void FUN_0046f390(undefined8 *param_1)

{
  int in_ECX;
  
  FUN_00601cb0();
  *(undefined8 *)(in_ECX + 0x170) = *param_1;
  *(undefined8 *)(in_ECX + 0x178) = param_1[1];
  *(undefined8 *)(in_ECX + 0x180) = param_1[2];
  *(undefined8 *)(in_ECX + 0x188) = param_1[3];
  *(undefined8 *)(in_ECX + 400) = param_1[4];
  *(undefined8 *)(in_ECX + 0x198) = param_1[5];
  FUN_004cef80();
  (**(code **)(**(int **)(in_ECX + 0x800714) + 0x14))((float)*(int *)(param_1 + 3) * 0.01,0);
  FUN_00601e90();
  return;
}


/* FUN_0046f490 @ 0046f490  kind=gamemisc  attributed-by=none  size=386 */

undefined4 FUN_0046f490(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  if ((((-1 < param_1) && (-1 < param_2)) && (uVar7 = param_1 * 0x20, (int)uVar7 < 0x1000000)) &&
     (uVar8 = param_2 * 0x20, (int)uVar8 < 0x1000000)) {
    iVar4 = (int)(((int)uVar8 >> 0x1f & 0xffU) + uVar8) >> 8;
    iVar1 = (int)(uVar7 + ((int)uVar7 >> 0x1f & 0xffU)) >> 8;
    iVar2 = FUN_00434d10(iVar1,iVar4);
    if (iVar2 != 0) {
      iVar2 = 0;
      iVar6 = 0;
      uVar7 = uVar7 & 0x800000ff;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xffffff00) + 1;
      }
      if (uVar7 == 0) {
        iVar2 = -1;
      }
      uVar8 = uVar8 & 0x800000ff;
      if ((int)uVar8 < 0) {
        uVar8 = (uVar8 - 1 | 0xffffff00) + 1;
      }
      if (uVar8 == 0) {
        iVar6 = -1;
      }
      if (uVar7 == 0xe0) {
        iVar2 = 1;
      }
      if (uVar8 == 0xe0) {
        iVar6 = 1;
      }
      if ((iVar2 == 0) && (iVar6 == 0)) {
        return 1;
      }
      iVar3 = (param_1 + iVar2) * 0x20;
      iVar5 = (param_2 + iVar6) * 0x20;
      iVar3 = FUN_00434d10((int)((iVar3 >> 0x1f & 0xffU) + iVar3) >> 8,
                           (int)(iVar5 + (iVar5 >> 0x1f & 0xffU)) >> 8);
      if (iVar3 != 0) {
        if (iVar2 == 0) {
          return 1;
        }
        if (iVar6 == 0) {
          return 1;
        }
        iVar2 = (param_1 + iVar2) * 0x20;
        iVar2 = FUN_00434d10((int)(iVar2 + (iVar2 >> 0x1f & 0xffU)) >> 8,iVar4);
        if ((iVar2 != 0) &&
           (iVar2 = (param_2 + iVar6) * 0x20,
           iVar1 = FUN_00434d10(iVar1,(int)(iVar2 + (iVar2 >> 0x1f & 0xffU)) >> 8), iVar1 != 0)) {
          return 1;
        }
      }
    }
  }
  return 0;
}


/* FUN_00470d80 @ 00470d80  kind=gamemisc  attributed-by=none  size=2847 */

void FUN_00470d80(int param_1,float *param_2)

{
  char cVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float *in_stack_00000020;
  undefined4 in_stack_00000024;
  int local_1a4;
  int local_1a0;
  int local_19c;
  uint local_170 [6];
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float fStack_148;
  float local_144;
  undefined4 uStack_140;
  undefined4 local_13c;
  int local_138;
  uint local_134 [7];
  int local_118;
  uint local_114;
  int local_110;
  uint local_10c;
  int local_108;
  undefined8 local_104;
  undefined4 local_fc;
  undefined8 local_f8;
  float local_f0;
  float fStack_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined8 local_dc;
  float local_d4;
  float local_d0 [17];
  undefined2 local_8c;
  undefined4 local_88;
  float local_84;
  float fStack_80;
  float local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  float local_6c;
  float fStack_68;
  float local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  float local_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float local_18;
  undefined8 local_14;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if (param_1 != 0) {
    iVar6 = *(int *)(param_1 + 0x4c);
    fVar11 = (float)*(int *)(param_1 + 0x48) * 0.5;
    fVar12 = (float)*(int *)(param_1 + 0x44) * 0.5;
    fVar10 = (float)iVar6 * 0.5;
    local_150 = 1.0 / (fVar12 * param_2[3] + fVar11 * param_2[7] + fVar10 * param_2[0xb] +
                      param_2[0xf]);
    local_158 = (fVar11 * param_2[4] + *param_2 * fVar12 + fVar10 * param_2[8] + param_2[0xc]) *
                local_150;
    local_154 = (param_2[1] * fVar12 + param_2[5] * fVar11 + fVar10 * param_2[9] + param_2[0xd]) *
                local_150;
    local_19c = 0;
    local_150 = (fVar12 * param_2[2] + fVar11 * param_2[6] + fVar10 * param_2[10] + param_2[0xe]) *
                local_150;
    if (0 < *(int *)(param_1 + 0x44)) {
      iVar5 = *(int *)(param_1 + 0x48);
      do {
        local_1a4 = 0;
        if (0 < iVar5) {
          do {
            local_1a0 = 0;
            if (0 < iVar6) {
              do {
                if ((((local_19c < 0) || (local_1a4 < 0)) || (local_1a0 < 0)) ||
                   (((*(int *)(param_1 + 0x44) <= local_19c ||
                     (*(int *)(param_1 + 0x48) <= local_1a4)) || (iVar6 <= local_1a0)))) {
                  pbVar2 = &DAT_0076b340;
                }
                else {
                  pbVar2 = (byte *)(((local_1a0 * *(int *)(param_1 + 0x48) + local_1a4) *
                                     *(int *)(param_1 + 0x44) + local_19c) * 3 +
                                   *(int *)(param_1 + 0x30));
                }
                cVar1 = FUN_004e71d0(pbVar2,0);
                if (cVar1 == '\0') {
                  iVar6 = local_19c + -1;
                  if (((iVar6 < 0) || (local_1a4 < 0)) ||
                     ((local_1a0 < 0 ||
                      (((*(int *)(param_1 + 0x44) <= iVar6 ||
                        (*(int *)(param_1 + 0x48) <= local_1a4)) ||
                       (*(int *)(param_1 + 0x4c) <= local_1a0)))))) {
                    puVar3 = &DAT_0076b340;
                  }
                  else {
                    puVar3 = (undefined1 *)
                             (((local_1a0 * *(int *)(param_1 + 0x48) + local_1a4) *
                               *(int *)(param_1 + 0x44) + iVar6) * 3 + *(int *)(param_1 + 0x30));
                  }
                  cVar1 = FUN_004e71d0(puVar3,0);
                  if (cVar1 == '\0') {
                    iVar6 = local_19c + 1;
                    if (((iVar6 < 0) || (local_1a4 < 0)) ||
                       (((local_1a0 < 0 ||
                         ((*(int *)(param_1 + 0x44) <= iVar6 ||
                          (*(int *)(param_1 + 0x48) <= local_1a4)))) ||
                        (*(int *)(param_1 + 0x4c) <= local_1a0)))) {
                      puVar3 = &DAT_0076b340;
                    }
                    else {
                      puVar3 = (undefined1 *)
                               (((local_1a0 * *(int *)(param_1 + 0x48) + local_1a4) *
                                 *(int *)(param_1 + 0x44) + iVar6) * 3 + *(int *)(param_1 + 0x30));
                    }
                    cVar1 = FUN_004e71d0(puVar3,0);
                    if (cVar1 == '\0') {
                      iVar6 = local_1a4 + -1;
                      if (((((local_19c < 0) || (iVar6 < 0)) || (local_1a0 < 0)) ||
                          ((*(int *)(param_1 + 0x44) <= local_19c ||
                           (*(int *)(param_1 + 0x48) <= iVar6)))) ||
                         (*(int *)(param_1 + 0x4c) <= local_1a0)) {
                        puVar3 = &DAT_0076b340;
                      }
                      else {
                        puVar3 = (undefined1 *)
                                 (((local_1a0 * *(int *)(param_1 + 0x48) + iVar6) *
                                   *(int *)(param_1 + 0x44) + local_19c) * 3 +
                                 *(int *)(param_1 + 0x30));
                      }
                      cVar1 = FUN_004e71d0(puVar3,0);
                      if (cVar1 == '\0') {
                        iVar6 = local_1a4 + 1;
                        if (((local_19c < 0) || (iVar6 < 0)) ||
                           ((local_1a0 < 0 ||
                            (((*(int *)(param_1 + 0x44) <= local_19c ||
                              (*(int *)(param_1 + 0x48) <= iVar6)) ||
                             (*(int *)(param_1 + 0x4c) <= local_1a0)))))) {
                          puVar3 = &DAT_0076b340;
                        }
                        else {
                          puVar3 = (undefined1 *)
                                   (((local_1a0 * *(int *)(param_1 + 0x48) + iVar6) *
                                     *(int *)(param_1 + 0x44) + local_19c) * 3 +
                                   *(int *)(param_1 + 0x30));
                        }
                        cVar1 = FUN_004e71d0(puVar3,0);
                        if (cVar1 == '\0') {
                          iVar6 = local_1a0 + -1;
                          if ((((local_19c < 0) || (local_1a4 < 0)) ||
                              ((iVar6 < 0 ||
                               ((*(int *)(param_1 + 0x44) <= local_19c ||
                                (*(int *)(param_1 + 0x48) <= local_1a4)))))) ||
                             (*(int *)(param_1 + 0x4c) <= iVar6)) {
                            puVar3 = &DAT_0076b340;
                          }
                          else {
                            puVar3 = (undefined1 *)
                                     (((iVar6 * *(int *)(param_1 + 0x48) + local_1a4) *
                                       *(int *)(param_1 + 0x44) + local_19c) * 3 +
                                     *(int *)(param_1 + 0x30));
                          }
                          cVar1 = FUN_004e71d0(puVar3,0);
                          if (cVar1 == '\0') {
                            iVar6 = local_1a0 + 1;
                            if ((((local_19c < 0) || (local_1a4 < 0)) || (iVar6 < 0)) ||
                               (((*(int *)(param_1 + 0x44) <= local_19c ||
                                 (*(int *)(param_1 + 0x48) <= local_1a4)) ||
                                (*(int *)(param_1 + 0x4c) <= iVar6)))) {
                              puVar3 = &DAT_0076b340;
                            }
                            else {
                              puVar3 = (undefined1 *)
                                       (((iVar6 * *(int *)(param_1 + 0x48) + local_1a4) *
                                         *(int *)(param_1 + 0x44) + local_19c) * 3 +
                                       *(int *)(param_1 + 0x30));
                            }
                            cVar1 = FUN_004e71d0(puVar3,0);
                            if (cVar1 == '\0') goto LAB_0047184d;
                          }
                        }
                      }
                    }
                  }
                  uVar4 = rand();
                  uVar4 = uVar4 & 0x80000001;
                  bVar9 = uVar4 == 0;
                  if ((int)uVar4 < 0) {
                    bVar9 = (uVar4 - 1 | 0xfffffffe) == 0xffffffff;
                  }
                  if (bVar9) {
                    local_104 = 0;
                    local_fc = 0;
                    local_e8 = 0.0;
                    local_e4 = 0.0;
                    local_e0 = 0.0;
                    local_dc = 0;
                    local_d4 = 0.0;
                    local_d0[0x10] = 1.0;
                    local_8c = 0;
                    local_88 = 4000;
                    local_d0[0] = 1.0;
                    local_d0[1] = 0.0;
                    local_d0[2] = 0.0;
                    local_d0[3] = 0.0;
                    local_d0[4] = 0.0;
                    local_d0[5] = 1.0;
                    local_d0[6] = 0.0;
                    local_d0[7] = 0.0;
                    local_d0[8] = 0.0;
                    local_d0[9] = 0.0;
                    local_d0[10] = 1.0;
                    local_d0[0xb] = 0.0;
                    local_d0[0xc] = 0.0;
                    local_d0[0xd] = 0.0;
                    local_d0[0xe] = 0.0;
                    local_d0[0xf] = 1.0;
                    local_13c = in_stack_00000024;
                    iVar6 = rand();
                    fVar11 = (float)local_19c;
                    fVar12 = (float)local_1a4;
                    fVar10 = (float)local_1a0;
                    local_138 = -(iVar6 % 1000);
                    local_6c = *param_2 * fVar11 + param_2[4] * fVar12 + param_2[8] * fVar10 +
                               param_2[0xc];
                    fStack_68 = param_2[5] * fVar12 + param_2[1] * fVar11 + fVar10 * param_2[9] +
                                param_2[0xd];
                    local_64 = fVar12 * param_2[6] + fVar11 * param_2[2] + param_2[10] * fVar10 +
                               param_2[0xe];
                    fVar10 = 1.0 / (fVar12 * param_2[7] + fVar11 * param_2[3] +
                                    fVar10 * param_2[0xb] + param_2[0xf]);
                    iVar6 = 0;
                    _local_20 = CONCAT44(fStack_68 * fVar10,local_6c * fVar10);
                    local_18 = local_64 * fVar10;
                    do {
                      uVar13 = FUN_0068d946();
                      local_134[iVar6 * 2] = (uint)uVar13;
                      local_134[iVar6 * 2 + 1] = (uint)((ulonglong)uVar13 >> 0x20);
                      iVar6 = iVar6 + 1;
                    } while (iVar6 < 3);
                    iVar6 = 0;
                    do {
                      uVar13 = FUN_0068d946();
                      local_170[iVar6 * 2] = (uint)uVar13;
                      local_170[iVar6 * 2 + 1] = (uint)((ulonglong)uVar13 >> 0x20);
                      iVar6 = iVar6 + 1;
                    } while (iVar6 < 3);
                    uVar13 = FUN_0068d946();
                    iVar6 = (local_134[1] - local_170[1]) - (uint)(local_134[0] < local_170[0]);
                    local_60 = CONCAT44(iVar6,local_134[0] - local_170[0]);
                    local_58 = CONCAT44((local_134[3] - local_170[3]) -
                                        (uint)(local_134[2] < local_170[2]),
                                        local_134[2] - local_170[2]);
                    local_48 = local_60;
                    local_50 = CONCAT44((local_134[5] - local_170[5]) -
                                        (uint)(local_134[4] < local_170[4]),
                                        local_134[4] - local_170[4]);
                    local_40 = local_58;
                    local_38 = local_50;
                    uVar14 = __allmul(uVar13,local_134[0] - local_170[0],iVar6);
                    local_48 = __alldiv(uVar14,0x10000,0);
                    uVar14 = __allmul(uVar13,(undefined4)local_40,local_40._4_4_);
                    local_40 = __alldiv(uVar14,0x10000,0);
                    uVar13 = __allmul(uVar13,(undefined4)local_38,local_38._4_4_);
                    local_38 = __alldiv(uVar13,0x10000,0);
                    local_e8 = (float)local_48 * 1.5258789e-05;
                    local_e4 = (float)local_40 * 1.5258789e-05;
                    local_78 = 0;
                    uStack_74 = 0;
                    local_e0 = (float)local_38 * 1.5258789e-05;
                    local_70 = 0;
                    local_104 = 0;
                    local_fc = 0;
                    iVar6 = rand();
                    local_84 = (float)iVar6 / 32767.0 - 0.5;
                    iVar6 = rand();
                    fStack_80 = (float)iVar6 / 32767.0 - 0.5;
                    iVar6 = rand();
                    local_7c = (float)iVar6 / 32767.0 - 0.5;
                    uStack_140 = 0x3f800000;
                    local_14 = CONCAT44(fStack_80 * 100.0,local_84 * 100.0);
                    local_d4 = local_7c * 100.0;
                    local_dc = local_14;
                    local_14c = (float)*pbVar2 / 255.0;
                    fStack_148 = (float)pbVar2[1] / 255.0;
                    local_144 = (float)pbVar2[2] / 255.0;
                    local_30 = CONCAT44(in_stack_00000020[1] * fStack_148,
                                        local_14c * *in_stack_00000020);
                    local_f0 = in_stack_00000020[2] * local_144;
                    local_d0[0x10] = 1.0;
                    fStack_ec = in_stack_00000020[3] * 1.0;
                    _local_28 = CONCAT44(fStack_ec,local_f0);
                    local_f8 = local_30;
                    pfVar7 = param_2;
                    pfVar8 = local_d0;
                    local_c = local_d4;
                    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
                      *pfVar8 = *pfVar7;
                      pfVar7 = pfVar7 + 1;
                      pfVar8 = pfVar8 + 1;
                    }
                    bVar9 = local_134[0] < *(uint *)(in_ECX + 0x1d8);
                    local_134[0] = local_134[0] - *(uint *)(in_ECX + 0x1d8);
                    local_134[1] = (local_134[1] - *(int *)(in_ECX + 0x1dc)) - (uint)bVar9;
                    bVar9 = local_134[2] < *(uint *)(in_ECX + 0x1e0);
                    local_134[2] = local_134[2] - *(uint *)(in_ECX + 0x1e0);
                    local_134[3] = (local_134[3] - *(int *)(in_ECX + 0x1e4)) - (uint)bVar9;
                    local_10c = local_134[4];
                    local_108 = local_134[5];
                    iVar6 = **(int **)(in_ECX + 0x800740);
                    local_d0[0xc] = 0.0;
                    local_d0[0xd] = 0.0;
                    local_d0[0xe] = 0.0;
                    local_8c = CONCAT11(local_8c._1_1_,1);
                    local_88 = 5000;
                    local_134[6] = local_134[0];
                    local_118 = local_134[1];
                    local_114 = local_134[2];
                    local_110 = local_134[3];
                    iVar5 = FUN_004520a0(iVar6,*(undefined4 *)(iVar6 + 4),&local_13c);
                    if (*(int *)(in_ECX + 0x800744) == 0x1555554) {
                    /* WARNING: Subroutine does not return */
                      std::_Xlength_error("list<T> too long");
                    }
                    *(int *)(in_ECX + 0x800744) = *(int *)(in_ECX + 0x800744) + 1;
                    *(int *)(iVar6 + 4) = iVar5;
                    **(int **)(iVar5 + 4) = iVar5;
                  }
                }
LAB_0047184d:
                iVar6 = *(int *)(param_1 + 0x4c);
                local_1a0 = local_1a0 + 1;
              } while (local_1a0 < iVar6);
            }
            iVar5 = *(int *)(param_1 + 0x48);
            local_1a4 = local_1a4 + 1;
          } while (local_1a4 < iVar5);
        }
        local_19c = local_19c + 1;
      } while (local_19c < *(int *)(param_1 + 0x44));
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004718b0 @ 004718b0  kind=gamemisc  attributed-by=none  size=87 */

byte FUN_004718b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = FUN_0042f7e0(param_1,param_2,param_3,param_4);
  bVar2 = *(byte *)(iVar1 + 3) & 0x1f;
  if (bVar2 == 0xd) {
    return 0xff;
  }
  if (((*(byte *)(iVar1 + 3) & 0x1f) != 0) && (bVar2 != 2)) {
    return 0;
  }
  if (*(byte *)(iVar1 + param_5) < 5) {
    return 5;
  }
  return *(byte *)(iVar1 + param_5);
}


/* FUN_00471d50 @ 00471d50  kind=gamemisc  attributed-by=none  size=15203 */

void FUN_00471d50(uint *param_1,float *param_2,int param_3,undefined8 *param_4,undefined4 param_5,
                 undefined4 param_6,int param_7,undefined4 param_8,undefined4 param_9,float param_10
                 ,float param_11,float param_12,int param_13,char param_14)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  uint uVar6;
  float fVar7;
  bool bVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float local_50c;
  float local_508;
  float local_504;
  float local_500;
  float local_4fc;
  float local_4f8;
  float local_4f4;
  float local_4f0;
  float local_4ec;
  float local_4e8;
  float local_4e4;
  float local_4e0;
  float local_4dc;
  float local_4d8;
  float local_4d4;
  float local_4d0;
  float local_4cc;
  float local_4c8;
  float local_4c4;
  float local_4c0;
  float local_4bc;
  float local_4b8;
  float local_4b4;
  float local_4b0;
  float local_4ac;
  float local_4a8;
  float local_4a4;
  float local_4a0;
  float local_49c;
  uint local_498;
  undefined4 local_494;
  float local_490;
  undefined4 local_48c;
  double local_488;
  int local_480;
  undefined8 *local_47c;
  undefined4 local_478;
  float local_474;
  float local_470;
  float local_46c;
  float local_468;
  undefined4 local_464;
  float local_460;
  float local_45c;
  float local_458;
  float local_454;
  float local_450;
  float local_44c;
  float local_448;
  float local_444;
  float local_440;
  float local_43c;
  float local_438;
  float local_434;
  float local_430;
  float local_42c;
  float local_428;
  float local_424;
  undefined8 local_420;
  float local_418;
  float local_414;
  float fStack_410;
  float local_40c;
  float local_408;
  float fStack_404;
  float local_400;
  float local_3fc;
  float fStack_3f8;
  float local_3f4;
  undefined8 local_3f0;
  float local_3e8;
  float local_3e4;
  float fStack_3e0;
  float local_3dc;
  float local_3d8;
  float fStack_3d4;
  float local_3d0;
  float local_3cc;
  float fStack_3c8;
  float local_3c4;
  float local_3c0;
  float fStack_3bc;
  float local_3b8;
  float local_3b4;
  float fStack_3b0;
  float local_3ac;
  float local_3a8;
  float fStack_3a4;
  float local_3a0;
  float local_39c;
  float fStack_398;
  float local_394;
  float local_390;
  float fStack_38c;
  float local_388;
  float local_384;
  float fStack_380;
  float local_37c;
  undefined8 local_378;
  float local_370;
  undefined8 local_36c;
  float local_364;
  float local_360;
  float fStack_35c;
  float local_358;
  float local_354;
  float fStack_350;
  float local_34c;
  float local_348;
  float fStack_344;
  float local_340;
  float local_33c;
  float fStack_338;
  float local_334;
  float local_330;
  float fStack_32c;
  float local_328;
  float local_324;
  float fStack_320;
  float local_31c;
  float local_318;
  float fStack_314;
  float local_310;
  float local_30c;
  float fStack_308;
  float local_304;
  float local_300;
  float fStack_2fc;
  float local_2f8;
  float local_2f4;
  float fStack_2f0;
  float local_2ec;
  float local_2e8;
  float fStack_2e4;
  float local_2e0;
  float local_2dc;
  float fStack_2d8;
  float local_2d4;
  float local_2d0;
  float fStack_2cc;
  float local_2c8;
  float local_2c4;
  float fStack_2c0;
  float local_2bc;
  float local_2b8 [6];
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  float local_288;
  float fStack_284;
  float local_280;
  float local_27c;
  float fStack_278;
  float local_274;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  float local_254;
  float fStack_250;
  float local_24c;
  float local_248;
  float fStack_244;
  float local_240;
  float local_23c;
  float fStack_238;
  float local_234;
  float local_230;
  float fStack_22c;
  float local_228;
  float local_224;
  float fStack_220;
  float local_21c;
  float local_218;
  float fStack_214;
  float local_210;
  float local_20c;
  float fStack_208;
  float local_204;
  float local_200;
  float fStack_1fc;
  float local_1f8;
  float local_1f4;
  float fStack_1f0;
  float local_1ec;
  uint local_1e8;
  int iStack_1e4;
  uint local_1e0;
  int iStack_1dc;
  undefined8 local_1d8;
  uint local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float fStack_1b4;
  float local_1b0;
  float local_1ac [3];
  uint local_1a0 [19];
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_138;
  float local_134;
  float local_130;
  float local_128;
  float local_124;
  float local_120;
  float local_108;
  float local_104;
  float local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined4 local_c8 [2];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  float local_6c;
  float local_1c;
  uint local_c;
  
  local_c = DAT_0076aa78 ^ (uint)&local_50c;
  local_47c = param_4;
  local_464 = param_5;
  local_478 = param_6;
  local_48c = param_8;
  local_494 = param_9;
  local_4e8 = param_2[2];
  local_4f0 = *param_2;
  local_4c0 = param_2[1];
  local_4ec = local_4e8 * 0.0;
  local_50c = local_4f0 * 0.0;
  local_4a4 = local_4f0 - local_4ec;
  local_508 = local_4c0 * 0.0;
  local_4b0 = local_508 - local_50c;
  local_4c4 = local_4ec - local_4c0;
  local_504 = local_4f0 * local_4f0 + local_4c0 * local_4c0 + local_4e8 * local_4e8;
  if (local_504 < 1e-05) {
    local_4a4 = local_50c - local_4ec;
    local_4c4 = local_4e8 - local_508;
    local_4b0 = local_508 - local_4f0;
    local_154 = local_4c4;
    local_150 = local_4a4;
    local_14c = local_4b0;
  }
  dVar10 = (double)(local_4a4 * local_4a4 + local_4c4 * local_4c4 + local_4b0 * local_4b0);
  local_480 = in_ECX;
  local_348 = local_4f0;
  fStack_344 = local_4c0;
  local_340 = local_4e8;
  libm_sse2_sqrt_precise();
  fVar11 = 1.0 / (float)dVar10;
  local_4b0 = local_4b0 * fVar11;
  local_4a4 = local_4a4 * fVar11;
  local_4c4 = local_4c4 * fVar11;
  local_4fc = local_4a4 * local_4e8 - local_4b0 * local_4c0;
  local_500 = local_4b0 * local_4f0 - local_4e8 * local_4c4;
  local_4f4 = local_4c0 * local_4c4 - local_4f0 * local_4a4;
  dVar10 = (double)(local_500 * local_500 + local_4fc * local_4fc + local_4f4 * local_4f4);
  libm_sse2_sqrt_precise();
  fVar11 = 1.0 / (float)dVar10;
  local_4fc = local_4fc * fVar11;
  local_500 = local_500 * fVar11;
  local_4f4 = local_4f4 * fVar11;
  dVar10 = (double)local_504;
  libm_sse2_sqrt_precise();
  local_490 = (float)dVar10;
  local_414 = local_4c4 * local_490;
  fStack_410 = local_4a4 * local_490;
  local_40c = local_4b0 * local_490;
  local_354 = local_4fc * local_490;
  fStack_350 = local_500 * local_490;
  local_34c = local_4f4 * local_490;
  local_508 = (float)param_1[1];
  uVar6 = *param_1;
  local_4a0 = 0.0;
  local_50c = (float)param_1[2];
  local_4fc = (float)param_1[3];
  local_500 = (float)param_1[4];
  dVar10 = (double)(local_4c0 * local_4c0 + local_4f0 * local_4f0 + local_4e8 * local_4e8);
  local_4f4 = (float)param_1[5];
  local_498 = uVar6;
  local_1d0 = uVar6;
  local_1cc = local_508;
  local_1c8 = local_50c;
  local_1c4 = local_4fc;
  local_1c0 = local_500;
  local_1bc = local_4f4;
  libm_sse2_sqrt_precise();
  fVar11 = 1.0 / (float)dVar10;
  local_1ac[0] = fVar11 * local_4f0;
  local_1ac[1] = local_4c0 * fVar11;
  local_1ac[2] = local_4e8 * fVar11;
  if (param_14 != '\0') {
    local_4ec = (float)(in_ECX + 0x2e4);
    local_4ac = 0.0;
    fVar11 = local_508;
    fVar7 = local_50c;
    do {
      iVar5 = FUN_0042f860(uVar6,fVar11,fVar7,local_4fc,local_500,local_4f4,0);
      if (((*(byte *)(iVar5 + 3) & 0x1f) != 0) && ((*(byte *)(iVar5 + 3) & 0x1f) != 2)) break;
      iVar5 = 0;
      do {
        local_508 = local_1ac[iVar5] * 65536.0;
        uVar17 = FUN_0068d946();
        local_1a0[iVar5 * 2 + 6] = (uint)uVar17;
        local_1a0[iVar5 * 2 + 7] = (uint)((ulonglong)uVar17 >> 0x20);
        iVar5 = iVar5 + 1;
      } while (iVar5 < 3);
      uVar6 = local_498 + local_1a0[6];
      fVar11 = (float)((int)fVar11 + local_1a0[7] + (uint)CARRY4(local_498,local_1a0[6]));
      bVar8 = CARRY4((uint)fVar7,local_1a0[8]);
      fVar7 = (float)((int)fVar7 + local_1a0[8]);
      local_4fc = (float)((int)local_4fc + local_1a0[9] + (uint)bVar8);
      bVar8 = CARRY4((uint)local_500,local_1a0[10]);
      local_500 = (float)((int)local_500 + local_1a0[10]);
      local_4f4 = (float)((int)local_4f4 + local_1a0[0xb] + (uint)bVar8);
      local_4ac = (float)((int)local_4ac + 1);
      local_4a0 = local_4a0 + 1.0;
      local_498 = uVar6;
      local_1d0 = uVar6;
      local_1cc = fVar11;
      local_1c8 = fVar7;
      local_1c4 = local_4fc;
      local_1c0 = local_500;
      local_1bc = local_4f4;
    } while ((int)local_4ac < 0x14);
    local_348 = local_4f0 * local_4a0;
    fStack_344 = local_4c0 * local_4a0;
    local_340 = local_4e8 * local_4a0;
    in_ECX = local_480;
  }
  local_498 = 0;
  if (0 < param_13) {
    local_470 = (float)param_13;
    local_46c = (float)(param_7 % param_13) / local_470;
    do {
      iVar5 = 0;
      local_49c = ((float)(int)local_498 + 1.0 + local_46c) / local_470;
      local_2b8[4] = fStack_344 * local_49c;
      local_2b8[3] = local_348 * local_49c;
      local_2b8[5] = local_340 * local_49c;
      do {
        local_468 = local_2b8[iVar5 + 3] * 65536.0;
        uVar17 = FUN_0068d946();
        local_1a0[iVar5 * 2] = (uint)uVar17;
        local_1a0[iVar5 * 2 + 1] = (uint)((ulonglong)uVar17 >> 0x20);
        iVar5 = iVar5 + 1;
      } while (iVar5 < 3);
      local_1d8 = *(undefined8 *)(param_1 + 4);
      local_1e8 = (uint)*(undefined8 *)param_1;
      uVar6 = local_1e8 + *(uint *)(in_ECX + 0x1d8);
      iStack_1e4 = (int)((ulonglong)*(undefined8 *)param_1 >> 0x20);
      iVar5 = iStack_1e4 + *(int *)(in_ECX + 0x1dc) +
              (uint)CARRY4(local_1e8,*(uint *)(in_ECX + 0x1d8));
      _local_1e8 = CONCAT44(iVar5,uVar6);
      local_1e0 = (uint)*(undefined8 *)(param_1 + 2);
      uVar3 = local_1e0 + *(uint *)(in_ECX + 0x1e0);
      iStack_1dc = (int)((ulonglong)*(undefined8 *)(param_1 + 2) >> 0x20);
      iVar4 = iStack_1dc + *(int *)(in_ECX + 0x1e4) +
              (uint)CARRY4(local_1e0,*(uint *)(in_ECX + 0x1e0));
      _local_1e0 = CONCAT44(iVar4,uVar3);
      local_270 = CONCAT44(iVar5 + local_1a0[1] + (uint)CARRY4(uVar6,local_1a0[0]),
                           uVar6 + local_1a0[0]);
      local_268 = CONCAT44(iVar4 + local_1a0[3] + (uint)CARRY4(uVar3,local_1a0[2]),
                           uVar3 + local_1a0[2]);
      local_260._0_4_ = (uint)local_1d8;
      local_260._4_4_ = (int)((ulonglong)local_1d8 >> 0x20);
      local_260 = CONCAT44(local_260._4_4_ + local_1a0[5] +
                           (uint)CARRY4((uint)local_260,local_1a0[4]),(uint)local_260 + local_1a0[4]
                          );
      local_27c = (float)local_270 * 1.5258789e-05;
      local_508 = (float)local_260;
      fStack_278 = (float)local_268 * 1.5258789e-05;
      local_274 = local_508 * 1.5258789e-05;
      if (param_14 != '\0') {
        uVar6 = rand();
        uVar6 = uVar6 & 0x80000007;
        bVar8 = uVar6 == 0;
        if ((int)uVar6 < 0) {
          bVar8 = (uVar6 - 1 | 0xfffffff8) == 0xffffffff;
        }
        if ((bVar8) &&
           (iVar5 = (int)(local_498 * 200) / param_13, piVar1 = (int *)(in_ECX + 0x8003a0),
           piVar2 = (int *)(in_ECX + 0x8006e8), in_ECX = local_480,
           (*piVar1 + iVar5) / 200 != (*piVar2 + *piVar1 + iVar5) / 200)) {
          FUN_00465de0();
          iVar5 = 0;
          local_2b8[1] = fStack_344 * local_49c;
          local_2b8[0] = local_348 * local_49c;
          local_2b8[2] = local_340 * local_49c;
          do {
            local_474 = local_2b8[iVar5] * 65536.0;
            uVar17 = FUN_0068d946();
            local_1a0[iVar5 * 2 + 0xc] = (uint)uVar17;
            local_1a0[iVar5 * 2 + 0xd] = (uint)((ulonglong)uVar17 >> 0x20);
            iVar5 = iVar5 + 1;
          } while (iVar5 < 3);
          local_2a0._0_4_ = (uint)*(undefined8 *)param_1;
          local_2a0._4_4_ = (int)((ulonglong)*(undefined8 *)param_1 >> 0x20);
          local_2a0 = CONCAT44(local_2a0._4_4_ + local_1a0[0xd] +
                               (uint)CARRY4((uint)local_2a0,local_1a0[0xc]),
                               (uint)local_2a0 + local_1a0[0xc]);
          local_298._0_4_ = (uint)*(undefined8 *)(param_1 + 2);
          local_298._4_4_ = (int)((ulonglong)*(undefined8 *)(param_1 + 2) >> 0x20);
          local_298 = CONCAT44(local_298._4_4_ + local_1a0[0xf] +
                               (uint)CARRY4((uint)local_298,local_1a0[0xe]),
                               (uint)local_298 + local_1a0[0xe]);
          local_290._0_4_ = (uint)*(undefined8 *)(param_1 + 4);
          local_290._4_4_ = (int)((ulonglong)*(undefined8 *)(param_1 + 4) >> 0x20);
          local_290 = CONCAT44(local_290._4_4_ + local_1a0[0x11] +
                               (uint)CARRY4((uint)local_290,local_1a0[0x10]),
                               (uint)local_290 + local_1a0[0x10]);
          local_c0 = local_2a0;
          local_b8 = local_298;
          local_b0 = local_290;
          local_c8[0] = 2;
          iVar5 = rand();
          local_50c = ((float)iVar5 * 5.0) / 32767.0 + 5.0;
          iVar5 = rand();
          local_508 = 5.0 - ((float)iVar5 * 10.0) / 32767.0;
          iVar5 = rand();
          local_1b8 = 5.0 - ((float)iVar5 * 10.0) / 32767.0;
          fStack_1b4 = local_508;
          local_1b0 = local_50c;
          local_74 = CONCAT44(local_508,local_1b8);
          local_6c = local_50c;
          local_84 = *local_47c;
          local_7c = local_47c[1];
          iVar5 = rand();
          in_ECX = local_480;
          local_508 = *(float *)(local_480 + 0x800740);
          local_1c = (((float)iVar5 * 0.005) / 32767.0 + 0.05) * param_11;
          iVar5 = FUN_004520a0(local_508,*(undefined4 *)((int)local_508 + 4),local_c8);
          if (*(int *)(in_ECX + 0x800744) == 0x1555554) {
                    /* WARNING: Subroutine does not return */
            std::_Xlength_error("list<T> too long");
          }
          *(int *)(in_ECX + 0x800744) = *(int *)(in_ECX + 0x800744) + 1;
          *(int *)((int)local_508 + 4) = iVar5;
          **(int **)(iVar5 + 4) = iVar5;
        }
      }
      local_49c = local_49c + 0.1;
      local_508 = (float)param_7;
      local_4cc = local_49c * param_10;
      local_488 = (double)local_49c * 3.141592653589793;
      local_4bc = (float)((local_488 * 2.0 * (double)local_490 -
                          (double)(local_508 * 0.005) * 3.141592653589793) * (double)param_12);
      dVar10 = (double)local_4bc;
      libm_sse2_sin_precise();
      fVar11 = local_34c;
      local_4f4 = (float)dVar10;
      _local_3d8 = CONCAT44(fStack_350 * local_4cc,local_354 * local_4cc);
      local_3d0 = local_34c * local_4cc;
      local_4fc = local_4f4 * local_354 * local_4cc;
      local_500 = local_4f4 * fStack_350 * local_4cc;
      local_4f4 = local_4f4 * local_3d0;
      _local_200 = CONCAT44(local_500,local_4fc);
      dVar10 = (double)local_4bc;
      local_1f8 = local_4f4;
      libm_sse2_cos_precise();
      local_21c = (float)dVar10;
      _local_2c4 = CONCAT44(local_4cc * fStack_410,local_4cc * local_414);
      local_2bc = local_4cc * local_40c;
      fVar14 = local_21c * local_4cc * local_414;
      fVar12 = local_21c * local_4cc * fStack_410;
      fVar7 = local_27c + fVar14;
      local_21c = local_21c * local_2bc;
      fVar9 = fStack_278 + fVar12;
      _local_224 = CONCAT44(fVar12,fVar14);
      local_3f0 = CONCAT44(fVar9,fVar7);
      local_418 = local_274 + local_21c;
      local_420 = local_3f0;
      local_4fc = local_4fc + fVar7;
      local_500 = local_500 + fVar9;
      local_4f4 = local_4f4 + local_418;
      local_50c = local_4bc * -0.3;
      dVar10 = (double)local_50c;
      local_3e8 = local_418;
      libm_sse2_sin_precise();
      local_4d4 = (float)dVar10;
      _local_3c0 = CONCAT44(local_4cc * fStack_350,local_4cc * local_354);
      local_3b8 = local_4cc * fVar11;
      local_4ec = local_4d4 * local_4cc * local_354;
      local_504 = local_4d4 * local_4cc * fStack_350;
      local_4d4 = local_4d4 * local_3b8;
      _local_20c = CONCAT44(local_504,local_4ec);
      dVar10 = (double)local_50c;
      local_204 = local_4d4;
      libm_sse2_cos_precise();
      local_3a0 = (float)dVar10;
      local_4b0 = 1.0;
      _local_300 = CONCAT44(local_4cc * fStack_410,local_4cc * local_414);
      local_2f8 = local_4cc * local_40c;
      local_4c4 = 0.0;
      fVar7 = local_3a0 * local_4cc * local_414;
      local_4a4 = 0.0;
      fVar9 = local_3a0 * local_4cc * fStack_410;
      local_3a0 = local_3a0 * local_2f8;
      _local_3a8 = CONCAT44(fVar9,fVar7);
      fVar9 = fVar9 + local_504;
      fVar7 = fVar7 + local_4ec;
      local_1ec = local_3a0 + local_4d4;
      local_500 = fVar9 + local_500;
      _local_1f4 = CONCAT44(fVar9,fVar7);
      fVar7 = fVar7 + local_4fc;
      fVar9 = local_500 * 0.0;
      local_4e8 = 0.0;
      fVar14 = fVar7 * 0.0;
      fVar12 = (local_1ec + local_4f4) * 0.0;
      local_4e4 = 0.0;
      local_4d0 = 0.0;
      local_4c8 = 1.0;
      local_4d4 = 0.0;
      local_4b8 = 0.0;
      local_4a8 = 0.0;
      local_4a0 = fVar9 + fVar7 + fVar12 + 0.0;
      local_504 = 1.0;
      local_4f0 = 0.0;
      fVar9 = fVar14 + fVar9;
      local_4f4 = fVar9 + local_1ec + local_4f4 + 0.0;
      local_4ac = fVar14 + local_500 + fVar12 + 0.0;
      local_4b4 = fVar9 + fVar12 + 1.0;
      local_4dc = *(float *)(param_3 + 8);
      local_500 = 0.0;
      local_4fc = 0.0;
      dVar10 = 1.0;
      libm_sse2_sqrt_precise();
      local_4e0 = (float)dVar10;
      if (local_4e0 != 0.0) {
        local_4dc = local_4dc * 0.017453292;
        dVar10 = (double)local_4dc;
        libm_sse2_cos_precise();
        local_50c = (float)dVar10;
        dVar10 = (double)local_4dc;
        libm_sse2_sin_precise();
        fVar7 = 1.0 / local_4e0;
        fVar14 = 0.0 / local_4e0;
        fVar12 = (float)dVar10;
        fVar9 = 1.0 - local_50c;
        local_108 = fVar14 * fVar14 * fVar9 + local_50c;
        local_104 = fVar9 * fVar14 * fVar14;
        local_f8 = local_104 - fVar12 * fVar7;
        local_104 = fVar12 * fVar7 + local_104;
        local_f0 = fVar9 * fVar14 * fVar7;
        local_4ec = fVar9 * fVar14 * fVar7;
        local_e8 = fVar12 * fVar14 + local_4ec;
        local_e4 = local_f0 - fVar12 * fVar14;
        local_f0 = fVar12 * fVar14 + local_f0;
        local_f4 = fVar14 * fVar14 * fVar9 + local_50c;
        local_4ec = local_4ec - fVar12 * fVar14;
        local_4dc = fVar7 * fVar7 * fVar9 + local_50c;
        local_4d8 = local_4ec * 0.0;
        local_4b8 = local_4a0 * 0.0;
        fVar16 = local_f0 * 0.0;
        local_4b0 = local_104 * 0.0 + local_108 + local_4d8 + local_4b8;
        local_4d0 = local_f4 * 0.0 + local_f8 + fVar16 + local_4b8;
        fVar14 = local_4dc * 0.0;
        fVar7 = local_500 + 0.0 + local_500;
        local_4b8 = local_e4 * 0.0 + local_e8 + fVar14 + local_4b8;
        local_4a0 = fVar7 + local_4a0;
        local_4a8 = local_4ac * 0.0;
        local_4a4 = local_108 * 0.0 + local_104 + local_4d8 + local_4a8;
        local_4c8 = local_f8 * 0.0 + local_f4 + fVar16 + local_4a8;
        fVar15 = local_108 * 0.0 + local_104 * 0.0;
        local_4a8 = local_e8 * 0.0 + local_e4 + fVar14 + local_4a8;
        local_504 = local_4f4 * 0.0;
        local_4c4 = fVar15 + local_4ec + local_504;
        fVar12 = local_f8 * 0.0 + local_f4 * 0.0;
        local_4d4 = fVar12 + local_f0 + local_504;
        fVar9 = local_e8 * 0.0 + local_e4 * 0.0;
        local_504 = fVar9 + local_4dc + local_504;
        local_4f4 = local_4fc + 0.0 + local_4f4;
        local_4f0 = local_4b4 * 0.0;
        local_4e4 = fVar15 + local_4d8 + local_4f0;
        local_4e8 = fVar12 + fVar16 + local_4f0;
        local_4f0 = fVar9 + fVar14 + local_4f0;
        local_4b4 = local_500 + local_4fc + local_4b4;
        local_4ac = fVar7 + local_4ac;
        local_100 = local_4ec;
        local_e0 = local_4dc;
      }
      local_49c = local_49c * local_490;
      local_4c0 = local_49c * 360.0;
      local_50c = local_4c0 * 0.017453292;
      dVar10 = (double)local_50c;
      libm_sse2_cos_precise();
      local_4dc = (float)dVar10;
      dVar10 = (double)local_50c;
      libm_sse2_sin_precise();
      fVar7 = (float)dVar10;
      local_4d8 = local_4dc * local_4d0 + fVar7 * local_4b8;
      local_4b8 = local_4dc * local_4b8 - local_4d0 * fVar7;
      fVar9 = local_4c8 * fVar7;
      local_4c8 = local_4dc * local_4c8 + fVar7 * local_4a8;
      local_4a8 = local_4dc * local_4a8 - fVar9;
      local_4d0 = local_4dc * local_4d4 + fVar7 * local_504;
      local_504 = local_4dc * local_504 - local_4d4 * fVar7;
      local_4f8 = local_4dc * local_4e8 + fVar7 * local_4f0;
      local_50c = local_4c0 * 0.017453292;
      local_4dc = local_4dc * local_4f0 - local_4e8 * fVar7;
      dVar10 = (double)local_50c;
      libm_sse2_cos_precise();
      local_4ec = (float)dVar10;
      dVar10 = (double)local_50c;
      libm_sse2_sin_precise();
      fVar9 = (float)dVar10;
      fVar12 = local_4b0 * local_4ec;
      fVar7 = fVar9 * local_4b8;
      local_4b0 = local_4b0 * fVar9 + local_4ec * local_4b8;
      local_4d4 = local_4ec * local_4a4 - fVar9 * local_4a8;
      local_4a4 = local_4a4 * fVar9 + local_4ec * local_4a8;
      local_4a8 = local_4ec * local_4c4 - fVar9 * local_504;
      local_4c4 = local_4c4 * fVar9 + local_4ec * local_504;
      local_4b8 = local_4ec * local_4e4 - fVar9 * local_4dc;
      local_49c = local_49c * -360.0;
      local_4e4 = local_4e4 * fVar9 + local_4ec * local_4dc;
      local_50c = local_49c * 0.017453292;
      dVar10 = (double)local_50c;
      local_4ec = fVar12 - fVar7;
      local_440 = local_4b0;
      local_43c = local_4a4;
      local_438 = local_4c4;
      local_434 = local_4e4;
      libm_sse2_cos_precise();
      local_4dc = (float)dVar10;
      dVar10 = (double)local_50c;
      libm_sse2_sin_precise();
      fVar7 = (float)dVar10;
      local_504 = local_4ec * local_4dc + fVar7 * local_4d8;
      local_4f0 = local_4dc * local_4d8 - local_4ec * fVar7;
      local_4e8 = fVar7 * local_4c8 + local_4dc * local_4d4;
      local_4d4 = local_4dc * local_4c8 - local_4d4 * fVar7;
      local_4d8 = fVar7 * local_4d0 + local_4dc * local_4a8;
      local_4d0 = local_4dc * local_4d0 - local_4a8 * fVar7;
      local_4c8 = fVar7 * local_4f8 + local_4dc * local_4b8;
      local_4dc = local_4dc * local_4f8 - local_4b8 * fVar7;
      dVar10 = (double)(local_4bc * 0.9);
      local_460 = local_504;
      local_45c = local_4e8;
      local_458 = local_4d8;
      local_454 = local_4c8;
      local_450 = local_4f0;
      local_44c = local_4d4;
      local_448 = local_4d0;
      local_444 = local_4dc;
      libm_sse2_cos_precise();
      fVar13 = ((float)dVar10 * 0.1 + 0.2) * (local_4cc + 0.2) * param_11;
      fVar14 = local_4d4;
      fVar15 = local_4c4;
      fVar16 = local_4dc;
      fVar7 = local_4b0;
      fVar9 = local_4a4;
      fVar12 = local_504;
      if (fVar13 != 1.0) {
        local_4e8 = fVar13 * local_4e8;
        local_460 = local_504 * fVar13;
        local_4d8 = fVar13 * local_4d8;
        local_4c8 = fVar13 * local_4c8;
        local_4f0 = fVar13 * local_4f0;
        local_44c = fVar13 * local_4d4;
        local_4d0 = fVar13 * local_4d0;
        local_444 = fVar13 * local_4dc;
        local_440 = fVar13 * local_4b0;
        local_43c = fVar13 * local_4a4;
        local_438 = fVar13 * local_4c4;
        local_4e4 = fVar13 * local_4e4;
        fVar14 = local_44c;
        fVar15 = local_438;
        fVar16 = local_444;
        fVar7 = local_440;
        fVar9 = local_43c;
        fVar12 = local_460;
        local_45c = local_4e8;
        local_458 = local_4d8;
        local_454 = local_4c8;
        local_450 = local_4f0;
        local_448 = local_4d0;
        local_434 = local_4e4;
      }
      local_430 = local_4a0 - (fVar12 * 0.5 + local_4f0 * 0.5 + fVar7 * 0.5);
      local_42c = local_4ac - (fVar14 * 0.5 + local_4e8 * 0.5 + fVar9 * 0.5);
      local_428 = local_4f4 - (local_4d0 * 0.5 + local_4d8 * 0.5 + fVar15 * 0.5);
      local_424 = local_4b4 - (fVar16 * 0.5 + local_4c8 * 0.5 + local_4e4 * 0.5);
      FUN_004482a0(&local_460,local_48c,local_494);
      FUN_00448280(local_47c);
      FUN_004e6df0();
      local_4cc = local_4cc * 1.01;
      local_488 = local_488 * 3.0 * (double)local_490;
      local_4c8 = (float)((local_488 - (double)(local_508 * 0.004) * 3.141592653589793) *
                         (double)param_12);
      dVar10 = (double)local_4c8;
      libm_sse2_sin_precise();
      local_280 = (float)dVar10;
      _local_330 = CONCAT44(local_4cc * fStack_350,local_4cc * local_354);
      local_328 = local_4cc * fVar11;
      local_4f8 = local_280 * local_4cc * local_354;
      local_50c = local_280 * local_4cc * fStack_350;
      _local_288 = CONCAT44(local_50c,local_4f8);
      local_280 = local_328 * local_280;
      dVar10 = (double)local_4c8;
      libm_sse2_cos_precise();
      local_234 = (float)dVar10;
      _local_390 = CONCAT44(fStack_410 * local_4cc,local_414 * local_4cc);
      local_388 = local_40c * local_4cc;
      fVar14 = local_234 * local_414 * local_4cc;
      fVar12 = local_234 * fStack_410 * local_4cc;
      fVar7 = local_27c + fVar14;
      local_234 = local_234 * local_388;
      fVar9 = fStack_278 + fVar12;
      _local_23c = CONCAT44(fVar12,fVar14);
      _local_2d0 = CONCAT44(fVar9,fVar7);
      local_2c8 = local_274 + local_234;
      local_378 = CONCAT44(fVar9 + local_50c,fVar7 + local_4f8);
      local_418 = local_2c8 + local_280;
      local_420 = local_378;
      local_4f8 = local_4c8 * 0.3;
      dVar10 = (double)local_4f8;
      local_370 = local_418;
      libm_sse2_sin_precise();
      local_504 = (float)dVar10;
      _local_318 = CONCAT44(fStack_350 * local_4cc,local_354 * local_4cc);
      local_310 = fVar11 * local_4cc;
      local_50c = local_354 * local_4cc * 0.5;
      local_4ec = fStack_350 * local_4cc * 0.5;
      _local_360 = CONCAT44(local_4ec,local_50c);
      local_358 = local_310 * 0.5;
      local_50c = local_504 * local_50c;
      local_4ec = local_504 * local_4ec;
      local_504 = local_504 * local_358;
      _local_230 = CONCAT44(local_4ec,local_50c);
      dVar10 = (double)local_4f8;
      local_228 = local_504;
      libm_sse2_cos_precise();
      local_3c4 = (float)dVar10;
      _local_2e8 = CONCAT44(fStack_410 * local_4cc,local_414 * local_4cc);
      local_2e0 = local_40c * local_4cc;
      fVar7 = local_414 * local_4cc * 0.5;
      fVar9 = fStack_410 * local_4cc * 0.5;
      _local_3e4 = CONCAT44(fVar9,fVar7);
      local_3dc = local_2e0 * 0.5;
      fVar7 = local_3c4 * fVar7;
      fVar9 = local_3c4 * fVar9;
      local_3c4 = local_3c4 * local_3dc;
      _local_3cc = CONCAT44(fVar9,fVar7);
      fVar9 = fVar9 + local_4ec;
      fVar7 = fVar7 + local_50c;
      local_24c = local_3c4 + local_504;
      fVar14 = fVar9 + local_420._4_4_;
      _local_254 = CONCAT44(fVar9,fVar7);
      fVar7 = fVar7 + (float)local_420;
      fVar9 = fVar14 * 0.0;
      local_4e8 = 0.0;
      fVar15 = fVar7 * 0.0;
      fVar12 = (local_24c + local_418) * 0.0;
      local_4b0 = 1.0;
      local_4ec = 0.0;
      local_50c = 0.0;
      local_4e4 = 0.0;
      local_4b8 = 0.0;
      local_4a0 = fVar9 + fVar7 + fVar12 + 0.0;
      local_4d8 = 1.0;
      local_4bc = 0.0;
      local_4a8 = 0.0;
      local_504 = 0.0;
      fVar9 = fVar15 + fVar9;
      local_4d0 = 1.0;
      local_4f0 = 0.0;
      local_4c4 = fVar9 + local_24c + local_418 + 0.0;
      local_4dc = fVar15 + fVar14 + fVar12 + 0.0;
      local_4a4 = fVar9 + fVar12 + 1.0;
      if (local_4e0 != 0.0) {
        local_4f8 = *(float *)(param_3 + 8) * 0.017453292;
        dVar10 = (double)local_4f8;
        libm_sse2_cos_precise();
        local_50c = (float)dVar10;
        dVar10 = (double)local_4f8;
        libm_sse2_sin_precise();
        fVar7 = 1.0 / local_4e0;
        local_4e0 = 0.0 / local_4e0;
        fVar12 = (float)dVar10;
        fVar9 = 1.0 - local_50c;
        local_148 = local_4e0 * local_4e0 * fVar9 + local_50c;
        local_144 = fVar9 * local_4e0 * local_4e0;
        local_138 = local_144 - fVar12 * fVar7;
        local_144 = fVar12 * fVar7 + local_144;
        local_4f4 = fVar9 * local_4e0 * fVar7;
        local_140 = fVar9 * local_4e0 * fVar7;
        local_128 = fVar12 * local_4e0 + local_140;
        local_124 = local_4f4 - fVar12 * local_4e0;
        local_4f4 = fVar12 * local_4e0 + local_4f4;
        local_134 = local_4e0 * local_4e0 * fVar9 + local_50c;
        local_140 = local_140 - fVar12 * local_4e0;
        local_4ac = fVar7 * fVar7 * fVar9 + local_50c;
        local_4d4 = local_140 * 0.0;
        local_4a8 = local_4a0 * 0.0;
        fVar16 = local_4f4 * 0.0;
        local_4b0 = local_144 * 0.0 + local_148 + local_4d4 + local_4a8;
        local_4b8 = local_134 * 0.0 + local_138 + fVar16 + local_4a8;
        fVar14 = local_4ac * 0.0;
        fVar7 = local_500 + 0.0 + local_500;
        local_4a8 = local_124 * 0.0 + local_128 + fVar14 + local_4a8;
        local_4a0 = fVar7 + local_4a0;
        local_504 = local_4dc * 0.0;
        local_4ec = local_148 * 0.0 + local_144 + local_4d4 + local_504;
        local_4d8 = local_138 * 0.0 + local_134 + fVar16 + local_504;
        fVar15 = local_148 * 0.0 + local_144 * 0.0;
        local_504 = local_128 * 0.0 + local_124 + fVar14 + local_504;
        local_4d0 = local_4c4 * 0.0;
        local_50c = fVar15 + local_140 + local_4d0;
        fVar12 = local_138 * 0.0 + local_134 * 0.0;
        local_4bc = fVar12 + local_4f4 + local_4d0;
        fVar9 = local_128 * 0.0 + local_124 * 0.0;
        local_4d0 = fVar9 + local_4ac + local_4d0;
        local_4c4 = local_4fc + 0.0 + local_4c4;
        local_4f0 = local_4a4 * 0.0;
        local_4e4 = fVar15 + local_4d4 + local_4f0;
        local_4e8 = fVar12 + fVar16 + local_4f0;
        local_4f0 = fVar9 + fVar14 + local_4f0;
        local_4a4 = local_500 + local_4fc + local_4a4;
        local_4dc = fVar7 + local_4dc;
        local_130 = local_4f4;
        local_120 = local_4ac;
      }
      local_4e0 = local_4c0 * 2.0;
      local_4f8 = local_4e0 * 0.017453292;
      dVar10 = (double)local_4f8;
      libm_sse2_cos_precise();
      local_4b4 = (float)dVar10;
      dVar10 = (double)local_4f8;
      libm_sse2_sin_precise();
      fVar9 = (float)dVar10;
      local_500 = fVar9 * local_4a8 + local_4b4 * local_4b8;
      local_4d4 = local_4b4 * local_4a8 - local_4b8 * fVar9;
      local_4f4 = fVar9 * local_504 + local_4b4 * local_4d8;
      local_504 = local_4b4 * local_504 - local_4d8 * fVar9;
      fVar7 = local_4b4 * local_4bc;
      local_4b8 = local_4b4 * local_4d0 - local_4bc * fVar9;
      local_4ac = fVar9 * local_4f0 + local_4b4 * local_4e8;
      local_4e0 = local_4e0 * 0.017453292;
      local_4b4 = local_4b4 * local_4f0 - local_4e8 * fVar9;
      dVar10 = (double)local_4e0;
      local_4d0 = fVar9 * local_4d0 + fVar7;
      libm_sse2_cos_precise();
      local_4f8 = (float)dVar10;
      dVar10 = (double)local_4e0;
      libm_sse2_sin_precise();
      fVar14 = (float)dVar10;
      fVar7 = local_4b0 * local_4f8;
      local_4a8 = fVar14 * local_4b0 + local_4f8 * local_4d4;
      fVar9 = local_4f8 * local_4ec;
      local_4d8 = fVar14 * local_4ec + local_4f8 * local_504;
      fVar12 = local_4f8 * local_50c;
      local_4bc = fVar14 * local_50c + local_4f8 * local_4b8;
      local_4b0 = local_4f8 * local_4e4 - fVar14 * local_4b4;
      local_50c = fVar14 * local_4e4 + local_4f8 * local_4b4;
      local_4f8 = local_49c * 2.0 * 0.017453292;
      dVar10 = (double)local_4f8;
      local_504 = fVar9 - fVar14 * local_504;
      local_4d4 = fVar7 - fVar14 * local_4d4;
      local_4b8 = fVar12 - fVar14 * local_4b8;
      local_440 = local_4a8;
      local_43c = local_4d8;
      local_438 = local_4bc;
      local_434 = local_50c;
      libm_sse2_cos_precise();
      local_4fc = (float)dVar10;
      dVar10 = (double)local_4f8;
      libm_sse2_sin_precise();
      fVar7 = (float)dVar10;
      local_4ec = local_4d4 * local_4fc + fVar7 * local_500;
      local_4e0 = local_4fc * local_500 - local_4d4 * fVar7;
      local_4b4 = fVar7 * local_4f4 + local_4fc * local_504;
      local_504 = local_4fc * local_4f4 - local_504 * fVar7;
      local_458 = fVar7 * local_4d0 + local_4fc * local_4b8;
      local_4d4 = local_4fc * local_4d0 - local_4b8 * fVar7;
      local_500 = fVar7 * local_4ac + local_4fc * local_4b0;
      local_4fc = local_4fc * local_4ac - local_4b0 * fVar7;
      dVar10 = (double)(local_4c8 * 0.9);
      local_4d0 = local_458;
      local_460 = local_4ec;
      local_45c = local_4b4;
      local_454 = local_500;
      local_450 = local_4e0;
      local_44c = local_504;
      local_448 = local_4d4;
      local_444 = local_4fc;
      libm_sse2_cos_precise();
      fVar13 = ((float)dVar10 * 0.1 + 0.2) * (local_4cc + 0.2) * param_11;
      fVar14 = local_4d4;
      fVar15 = local_4a8;
      fVar16 = local_4fc;
      fVar7 = local_4ec;
      fVar9 = local_50c;
      fVar12 = local_504;
      if (fVar13 != 1.0) {
        local_4b4 = fVar13 * local_4b4;
        local_460 = local_4ec * fVar13;
        local_4d0 = fVar13 * local_4d0;
        local_500 = fVar13 * local_500;
        local_4e0 = fVar13 * local_4e0;
        local_44c = fVar13 * local_504;
        local_448 = fVar13 * local_4d4;
        local_444 = fVar13 * local_4fc;
        local_440 = fVar13 * local_4a8;
        local_4d8 = fVar13 * local_4d8;
        local_434 = fVar13 * local_50c;
        local_4bc = fVar13 * local_4bc;
        fVar14 = local_448;
        fVar15 = local_440;
        fVar16 = local_444;
        fVar7 = local_460;
        fVar9 = local_434;
        fVar12 = local_44c;
        local_45c = local_4b4;
        local_458 = local_4d0;
        local_454 = local_500;
        local_450 = local_4e0;
        local_43c = local_4d8;
        local_438 = local_4bc;
      }
      local_430 = local_4a0 - (fVar7 * 0.5 + local_4e0 * 0.5 + fVar15 * 0.5);
      local_42c = local_4dc - (fVar12 * 0.5 + local_4b4 * 0.5 + local_4d8 * 0.5);
      local_428 = local_4c4 - (fVar14 * 0.5 + local_4d0 * 0.5 + local_4bc * 0.5);
      local_424 = local_4a4 - (fVar16 * 0.5 + local_500 * 0.5 + fVar9 * 0.5);
      FUN_004482a0(&local_460,local_48c,local_494);
      FUN_00448280(local_464);
      FUN_004e6df0();
      local_4cc = local_4cc * 1.01;
      local_488 = (local_488 - (double)(local_508 * 0.006) * 3.141592653589793) * (double)param_12;
      dVar10 = (double)(float)local_488;
      libm_sse2_sin_precise();
      local_3f4 = (float)dVar10;
      _local_3b4 = CONCAT44(fStack_350 * local_4cc,local_354 * local_4cc);
      local_3ac = fVar11 * local_4cc;
      _local_3fc = CONCAT44(fStack_350 * local_4cc * local_3f4,local_354 * local_4cc * local_3f4);
      local_3f4 = local_3ac * local_3f4;
      dVar10 = (double)(float)local_488;
      libm_sse2_cos_precise();
      local_210 = (float)dVar10;
      _local_39c = CONCAT44(fStack_410 * local_4cc,local_414 * local_4cc);
      local_394 = local_40c * local_4cc;
      fVar14 = local_210 * local_414 * local_4cc;
      fVar12 = local_210 * fStack_410 * local_4cc;
      fVar7 = local_27c + fVar14;
      local_210 = local_210 * local_394;
      fVar9 = fStack_278 + fVar12;
      _local_218 = CONCAT44(fVar12,fVar14);
      _local_384 = CONCAT44(fVar9,fVar7);
      local_37c = local_274 + local_210;
      local_36c = CONCAT44(fVar9 + fStack_3f8,fVar7 + local_3fc);
      local_418 = local_37c + local_3f4;
      local_420 = local_36c;
      local_4f8 = (float)local_488 * 0.3;
      dVar10 = (double)local_4f8;
      local_364 = local_418;
      libm_sse2_sin_precise();
      local_400 = (float)dVar10;
      _local_33c = CONCAT44(fStack_350 * local_4cc,local_354 * local_4cc);
      local_334 = fVar11 * local_4cc;
      fVar11 = local_354 * local_4cc * 0.5;
      fVar7 = fStack_350 * local_4cc * 0.5;
      _local_324 = CONCAT44(fVar7,fVar11);
      local_31c = local_334 * 0.5;
      _local_408 = CONCAT44(fVar7 * local_400,fVar11 * local_400);
      local_400 = local_31c * local_400;
      dVar10 = (double)local_4f8;
      libm_sse2_cos_precise();
      local_2d4 = (float)dVar10;
      _local_30c = CONCAT44(fStack_410 * local_4cc,local_414 * local_4cc);
      local_304 = local_40c * local_4cc;
      fVar11 = local_414 * local_4cc * 0.5;
      local_508 = fStack_410 * local_4cc * 0.5;
      _local_2f4 = CONCAT44(local_508,fVar11);
      local_2ec = local_304 * 0.5;
      fVar11 = fVar11 * local_2d4;
      local_508 = local_508 * local_2d4;
      _local_2dc = CONCAT44(local_508,fVar11);
      local_2d4 = local_2ec * local_2d4;
      fVar11 = fVar11 + local_408;
      local_508 = local_508 + fStack_404;
      local_240 = local_2d4 + local_400;
      local_4f8 = fVar11 + (float)local_420;
      _local_248 = CONCAT44(local_508,fVar11);
      local_508 = local_508 + local_420._4_4_;
      local_50c = local_240 + local_418;
      local_420 = CONCAT44(local_508,local_4f8);
      local_418 = local_50c;
      FUN_00423e70();
      local_430 = local_460 * local_4f8 + local_508 * local_450 + local_50c * local_440 + local_430;
      local_42c = local_508 * local_44c + local_4f8 * local_45c + local_50c * local_43c + local_42c;
      local_428 = local_508 * local_448 + local_4f8 * local_458 + local_50c * local_438 + local_428;
      local_424 = local_508 * local_444 + local_4f8 * local_454 + local_50c * local_434 + local_424;
      FUN_004241b0(*(undefined4 *)(param_3 + 8),0,0,0x3f800000);
      local_4c0 = local_4c0 * 3.0;
      local_4f8 = local_4c0 * 0.017453292;
      dVar10 = (double)local_4f8;
      libm_sse2_cos_precise();
      local_4e0 = (float)dVar10;
      dVar10 = (double)local_4f8;
      libm_sse2_sin_precise();
      fVar11 = (float)dVar10;
      local_4ec = fVar11 * local_440 + local_4e0 * local_450;
      local_4f8 = local_4e0 * local_440 - fVar11 * local_450;
      local_4d4 = fVar11 * local_43c + local_4e0 * local_44c;
      local_508 = local_4e0 * local_43c - fVar11 * local_44c;
      local_4b8 = fVar11 * local_438 + local_4e0 * local_448;
      local_50c = local_4e0 * local_438 - fVar11 * local_448;
      local_4bc = fVar11 * local_434 + local_4e0 * local_444;
      local_4c0 = local_4c0 * 0.017453292;
      local_4e0 = local_4e0 * local_434 - fVar11 * local_444;
      dVar10 = (double)local_4c0;
      libm_sse2_cos_precise();
      local_500 = (float)dVar10;
      dVar10 = (double)local_4c0;
      libm_sse2_sin_precise();
      fVar11 = (float)dVar10;
      fVar7 = local_460 * local_500;
      local_504 = local_500 * local_4f8 + local_460 * fVar11;
      local_4a8 = local_500 * local_45c - fVar11 * local_508;
      local_4c8 = local_500 * local_508 + local_45c * fVar11;
      local_4d8 = local_500 * local_458 - fVar11 * local_50c;
      local_4d0 = local_500 * local_50c + local_458 * fVar11;
      local_4f4 = local_500 * local_454;
      local_500 = local_500 * local_4e0 + local_454 * fVar11;
      local_4f4 = local_4f4 - fVar11 * local_4e0;
      local_49c = local_49c * 3.0 * 0.017453292;
      dVar10 = (double)local_49c;
      local_4f8 = fVar7 - fVar11 * local_4f8;
      local_440 = local_504;
      local_43c = local_4c8;
      local_438 = local_4d0;
      local_434 = local_500;
      libm_sse2_cos_precise();
      local_4fc = (float)dVar10;
      dVar10 = (double)local_49c;
      libm_sse2_sin_precise();
      fVar11 = (float)dVar10;
      local_508 = local_4f8 * local_4fc + fVar11 * local_4ec;
      local_4e0 = local_4fc * local_4ec - local_4f8 * fVar11;
      local_4b4 = fVar11 * local_4d4 + local_4fc * local_4a8;
      local_50c = local_4fc * local_4d4 - local_4a8 * fVar11;
      local_4ec = local_4d8 * fVar11;
      local_4d8 = fVar11 * local_4b8 + local_4fc * local_4d8;
      local_4ec = local_4fc * local_4b8 - local_4ec;
      local_454 = fVar11 * local_4bc + local_4fc * local_4f4;
      local_4fc = local_4fc * local_4bc - local_4f4 * fVar11;
      dVar10 = (double)((float)local_488 * 0.9);
      local_4bc = local_454;
      local_460 = local_508;
      local_45c = local_4b4;
      local_458 = local_4d8;
      local_450 = local_4e0;
      local_44c = local_50c;
      local_448 = local_4ec;
      local_444 = local_4fc;
      libm_sse2_cos_precise();
      fVar16 = ((float)dVar10 * 0.1 + 0.2) * (local_4cc + 0.2) * param_11;
      fVar12 = local_500;
      fVar14 = local_504;
      fVar15 = local_508;
      fVar11 = local_4fc;
      fVar7 = local_50c;
      fVar9 = local_4ec;
      if (fVar16 != 1.0) {
        local_4b4 = fVar16 * local_4b4;
        local_460 = local_508 * fVar16;
        local_4d8 = fVar16 * local_4d8;
        local_4bc = fVar16 * local_4bc;
        local_4e0 = fVar16 * local_4e0;
        local_44c = fVar16 * local_50c;
        local_448 = fVar16 * local_4ec;
        local_444 = fVar16 * local_4fc;
        local_440 = fVar16 * local_504;
        local_4c8 = fVar16 * local_4c8;
        local_4d0 = fVar16 * local_4d0;
        local_434 = fVar16 * local_500;
        fVar12 = local_434;
        fVar14 = local_440;
        fVar15 = local_460;
        fVar11 = local_444;
        fVar7 = local_44c;
        fVar9 = local_448;
        local_45c = local_4b4;
        local_458 = local_4d8;
        local_454 = local_4bc;
        local_450 = local_4e0;
        local_43c = local_4c8;
        local_438 = local_4d0;
      }
      local_430 = local_430 - (fVar15 * 0.5 + local_4e0 * 0.5 + fVar14 * 0.5);
      local_42c = local_42c - (fVar7 * 0.5 + local_4b4 * 0.5 + local_4c8 * 0.5);
      local_428 = local_428 - (fVar9 * 0.5 + local_4d8 * 0.5 + local_4d0 * 0.5);
      local_424 = local_424 - (fVar11 * 0.5 + local_4bc * 0.5 + fVar12 * 0.5);
      FUN_004482a0(&local_460,local_48c,local_494);
      FUN_00448280(local_478);
      FUN_004e6df0();
      local_498 = local_498 + 1;
    } while ((int)local_498 < param_13);
  }
  __security_check_cookie(local_c ^ (uint)&local_50c);
  return;
}


/* FUN_00476660 @ 00476660  kind=gamemisc  attributed-by=none  size=3004 */

void FUN_00476660(float param_1,float param_2,float *param_3,float param_4,int param_5,float param_6
                 )

{
  int in_ECX;
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
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
  float local_120;
  float local_11c;
  float local_118;
  float local_110;
  undefined1 local_108 [64];
  float local_c8 [4];
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88 [4];
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
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
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if (param_5 != 0) {
    (**(code **)(**(int **)(in_ECX + 0x134) + 0xe4))(*(int **)(in_ECX + 0x134),7,1);
    (**(code **)(**(int **)(in_ECX + 0x134) + 0xe4))(*(int **)(in_ECX + 0x134),0x17,2);
    FUN_00423e70();
    fVar8 = local_48 * 0.0 + local_38 * 0.0 + local_28;
    fVar9 = local_34 * 0.0 + local_44 * 0.0 + local_24;
    fVar10 = local_30 * 0.0 + local_40 * 0.0 + local_20;
    fVar11 = local_2c * 0.0 + local_3c * 0.0 + local_1c;
    fVar7 = *param_3;
    dVar5 = (double)(fVar7 * 0.017453292);
    libm_sse2_cos_precise();
    fVar4 = (float)dVar5;
    dVar5 = (double)(fVar7 * 0.017453292);
    libm_sse2_sin_precise();
    fVar6 = (float)dVar5;
    fVar13 = local_28 * fVar6 + local_38 * fVar4;
    fVar17 = local_28 * fVar4 - local_38 * fVar6;
    fVar14 = local_34 * fVar4 + local_24 * fVar6;
    fVar18 = local_24 * fVar4 - local_34 * fVar6;
    fVar19 = local_20 * fVar4 - local_30 * fVar6;
    fVar15 = local_30 * fVar4 + local_20 * fVar6;
    fVar16 = local_2c * fVar4 + local_1c * fVar6;
    fVar7 = param_3[1];
    dVar5 = (double)(fVar7 * 0.017453292);
    fVar20 = local_1c * fVar4 - local_2c * fVar6;
    libm_sse2_cos_precise();
    fVar4 = (float)dVar5;
    dVar5 = (double)(fVar7 * 0.017453292);
    libm_sse2_sin_precise();
    fVar6 = (float)dVar5;
    local_118 = fVar17 * fVar4 + local_48 * fVar6;
    fVar17 = local_48 * fVar4 - fVar17 * fVar6;
    local_120 = fVar18 * fVar4 + local_44 * fVar6;
    fVar18 = local_44 * fVar4 - fVar18 * fVar6;
    fVar12 = local_40 * fVar4 - fVar19 * fVar6;
    local_11c = fVar19 * fVar4 + local_40 * fVar6;
    fVar19 = local_3c * fVar4 - fVar20 * fVar6;
    fVar7 = param_3[2];
    dVar5 = (double)(fVar7 * 0.017453292);
    local_110 = fVar20 * fVar4 + local_3c * fVar6;
    local_28 = local_118;
    local_24 = local_120;
    local_20 = local_11c;
    local_1c = local_110;
    libm_sse2_cos_precise();
    fVar4 = (float)dVar5;
    dVar5 = (double)(fVar7 * 0.017453292);
    libm_sse2_sin_precise();
    fVar7 = (float)dVar5;
    local_48 = fVar13 * fVar7 + fVar17 * fVar4;
    local_38 = fVar13 * fVar4 - fVar17 * fVar7;
    local_44 = fVar14 * fVar7 + fVar18 * fVar4;
    local_34 = fVar14 * fVar4 - fVar18 * fVar7;
    local_40 = fVar15 * fVar7 + fVar12 * fVar4;
    local_30 = fVar15 * fVar4 - fVar12 * fVar7;
    local_3c = fVar16 * fVar7 + fVar19 * fVar4;
    local_2c = fVar16 * fVar4 - fVar19 * fVar7;
    if (param_4 != 1.0) {
      local_48 = local_48 * param_4;
      local_38 = local_38 * param_4;
      local_44 = local_44 * param_4;
      local_34 = local_34 * param_4;
      local_40 = local_40 * param_4;
      local_30 = local_30 * param_4;
      local_3c = local_3c * param_4;
      local_2c = local_2c * param_4;
      local_118 = local_118 * param_4;
      local_120 = local_120 * param_4;
      local_11c = local_11c * param_4;
      local_110 = local_110 * param_4;
      local_28 = local_118;
      local_24 = local_120;
      local_20 = local_11c;
      local_1c = local_110;
    }
    fVar6 = (float)*(int *)(param_5 + 0x44) * -0.5;
    fVar7 = (float)*(int *)(param_5 + 0x48) * -0.5;
    fVar4 = (float)*(int *)(param_5 + 0x4c) * -0.5;
    local_18 = local_38 * fVar7 + local_48 * fVar6 + local_118 * fVar4 + fVar8 + local_18;
    local_14 = local_34 * fVar7 + local_44 * fVar6 + local_120 * fVar4 + fVar9 + local_14;
    local_10 = local_30 * fVar7 + local_40 * fVar6 + local_11c * fVar4 + fVar10 + local_10;
    local_c = local_2c * fVar7 + local_3c * fVar6 + local_110 * fVar4 + fVar11 + local_c;
    FUN_00423e70();
    dVar5 = 0.39269909262657166;
    libm_sse2_tan_precise();
    fVar6 = 1.0 / (float)dVar5;
    fVar7 = fVar6 / -((float)*(int *)(in_ECX + 0x11c) / (float)*(int *)(in_ECX + 0x120));
    FUN_00423e70();
    fVar9 = ((param_1 - (float)*(int *)(in_ECX + 0x11c) * 0.5) / (float)*(int *)(in_ECX + 0x11c)) *
            2.0;
    fVar8 = ((param_2 - (float)*(int *)(in_ECX + 0x120) * 0.5) / (float)*(int *)(in_ECX + 0x120)) *
            -2.0;
    fVar4 = local_c8[0] * fVar9 + local_b8 * fVar8 + local_a8 * param_6 + local_98;
    local_94 = local_c8[1] * fVar9 + local_b4 * fVar8 + local_a4 * param_6 + local_94;
    local_90 = local_c8[2] * fVar9 + local_b0 * fVar8 + local_a0 * param_6 + local_90;
    local_8c = local_c8[3] * fVar9 + local_ac * fVar8 + local_9c * param_6 + local_8c;
    local_98 = fVar4;
    FUN_00447d10();
    fVar8 = fVar4 * 0.0;
    pfVar2 = local_c8;
    pfVar3 = local_88;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pfVar3 = *pfVar2;
      pfVar2 = pfVar2 + 1;
      pfVar3 = pfVar3 + 1;
    }
    local_88[0] = local_c8[0] * fVar7 + local_b8 * 0.0 + local_a8 * 0.0 + fVar8;
    fVar9 = local_c8[0] * 0.0 + local_b8 * 0.0;
    local_78 = local_b8 * fVar6 + local_c8[0] * 0.0 + local_a8 * 0.0 + fVar8;
    local_68 = local_a8 * 1.0001 + fVar9 + fVar4;
    local_58 = (fVar9 - local_a8 * 0.10001) + fVar8;
    fVar10 = local_74 * 0.0;
    fVar4 = local_64 * 0.0;
    fVar18 = local_54 * 0.0;
    fVar8 = local_64 * 0.10001;
    fVar9 = local_88[1] * 0.0 + fVar10;
    local_74 = local_74 * fVar6 + local_88[1] * 0.0 + fVar4 + fVar18;
    local_64 = local_64 * 1.0001 + fVar9 + local_54;
    local_54 = (fVar9 - fVar8) + fVar18;
    fVar12 = local_70 * 0.0;
    fVar8 = local_60 * 0.0;
    fVar11 = local_50 * 0.0;
    fVar17 = local_60 * 0.10001;
    fVar9 = fVar12 + local_88[2] * 0.0;
    local_60 = local_60 * 1.0001 + fVar9 + local_50;
    local_70 = local_70 * fVar6 + local_88[2] * 0.0 + fVar8 + fVar11;
    local_50 = (fVar9 - fVar17) + fVar11;
    fVar19 = local_6c * 0.0;
    fVar9 = local_5c * 0.0;
    fVar17 = local_4c * 0.0;
    fVar14 = local_5c * 0.10001;
    fVar13 = fVar19 + local_88[3] * 0.0;
    local_5c = local_5c * 1.0001 + fVar13 + local_4c;
    local_6c = local_6c * fVar6 + local_88[3] * 0.0 + fVar9 + fVar17;
    local_4c = (fVar13 - fVar14) + fVar17;
    local_88[1] = local_88[1] * fVar7 + fVar10 + fVar4 + fVar18;
    local_88[2] = local_88[2] * fVar7 + fVar12 + fVar8 + fVar11;
    local_88[3] = local_88[3] * fVar7 + fVar19 + fVar9 + fVar17;
    FUN_004482a0(&local_48,local_108,local_88);
    FUN_00447fb0(0x3f800000);
    FUN_00448fe0(0);
    FUN_004e6df0();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00477d90 @ 00477d90  kind=gamemisc  attributed-by=none  size=115 */

void FUN_00477d90(int *param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *in_ECX;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)*in_ECX;
  puVar4 = puVar1;
  if (*(char *)((int)puVar1[1] + 0xd) == '\0') {
    puVar2 = (undefined4 *)puVar1[1];
    do {
      if (((int)param_2[1] < (int)puVar2[5]) ||
         (((int)param_2[1] <= (int)puVar2[5] && (*param_2 <= (uint)puVar2[4])))) {
        puVar3 = (undefined4 *)*puVar2;
        puVar4 = puVar2;
      }
      else {
        puVar3 = (undefined4 *)puVar2[2];
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar3 + 0xd) == '\0');
  }
  if (puVar4 != puVar1) {
    if (((int)puVar4[5] <= (int)param_2[1]) &&
       (((int)puVar4[5] < (int)param_2[1] || ((uint)puVar4[4] <= *param_2)))) {
      *param_1 = (int)puVar4;
      return;
    }
  }
  *param_1 = (int)puVar1;
  return;
}


/* FUN_0047f9f0 @ 0047f9f0  kind=gamemisc  attributed-by=none  size=32 */

undefined1 FUN_0047f9f0(void)

{
  char cVar1;
  char *in_ECX;
  
  cVar1 = *in_ECX;
  if ((((cVar1 != '\x01') && (cVar1 != '\n')) && (cVar1 != '\f')) &&
     (((cVar1 != '\r' && (cVar1 != '\v')) && (cVar1 != '\x15')))) {
    return 0;
  }
  return 1;
}


/* FUN_0047fa30 @ 0047fa30  kind=gamemisc  attributed-by=none  size=64 */

undefined4 FUN_0047fa30(undefined1 *param_1)

{
  switch(*param_1) {
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 0x17:
  case 0x18:
    return 0;
  default:
    return 1;
  case 0xb:
    return 2;
  case 0x13:
  case 0x14:
    return 3;
  }
}


/* FUN_0047fae0 @ 0047fae0  kind=gamemisc  attributed-by=none  size=2977 */

void FUN_0047fae0(uint param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  uint uVar5;
  int iVar6;
  undefined2 uVar7;
  bool bVar8;
  undefined2 local_120;
  int local_11c;
  undefined4 local_118;
  undefined2 local_114;
  undefined1 local_112;
  undefined2 local_110;
  undefined1 local_10c [256];
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_120 = local_120 & 0xff00;
  local_11c = 0;
  local_118 = 0;
  local_112 = 0;
  local_c = 0;
  memset(local_10c,0,0x100);
  uVar7 = (undefined2)param_1;
  local_114 = 0;
  uVar5 = param_1 & 0x80000003;
  if ((int)uVar5 < 0) {
    uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
  }
  local_110 = uVar7;
  if (uVar5 == 1) {
    local_120 = 0x101;
    cVar2 = FUN_00444a90(&local_120);
    if (cVar2 == '\0') {
      iVar6 = *(int *)(*(int *)(in_ECX + 0x8006d0) + 0x1d28);
      iVar1 = *(int *)(iVar6 + 0x14);
      iVar3 = FUN_00449b70(iVar1,*(undefined4 *)(iVar1 + 4),&local_120);
      if (*(int *)(iVar6 + 0x18) == 0xe38e37) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("list<T> too long");
      }
      *(int *)(iVar6 + 0x18) = *(int *)(iVar6 + 0x18) + 1;
      *(int *)(iVar1 + 4) = iVar3;
      **(int **)(iVar3 + 4) = iVar3;
    }
  }
  if (uVar5 == 3) {
    local_120 = 0x201;
    cVar2 = FUN_00444a90(&local_120);
    if (cVar2 == '\0') {
      iVar6 = *(int *)(*(int *)(in_ECX + 0x8006d0) + 0x1d28);
      iVar1 = *(int *)(iVar6 + 0x14);
      iVar3 = FUN_00449b70(iVar1,*(undefined4 *)(iVar1 + 4),&local_120);
      if (*(int *)(iVar6 + 0x18) == 0xe38e37) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("list<T> too long");
      }
      *(int *)(iVar6 + 0x18) = *(int *)(iVar6 + 0x18) + 1;
      *(int *)(iVar1 + 4) = iVar3;
      **(int **)(iVar3 + 4) = iVar3;
    }
  }
  iVar6 = (int)param_1 % 5;
  if (iVar6 == 1) {
    local_120 = 0x401;
    cVar2 = FUN_00444a90(&local_120);
    if (cVar2 == '\0') {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x8006d0) + 0x1d28);
      iVar3 = *(int *)(iVar1 + 0x14);
      iVar4 = FUN_00449b70(iVar3,*(undefined4 *)(iVar3 + 4),&local_120);
      if (*(int *)(iVar1 + 0x18) == 0xe38e37) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("list<T> too long");
      }
      *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + 1;
      *(int *)(iVar3 + 4) = iVar4;
      **(int **)(iVar4 + 4) = iVar4;
    }
    local_120 = 0x801;
    cVar2 = FUN_00444a90(&local_120);
    if (cVar2 == '\0') {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x8006d0) + 0x1d28);
      iVar3 = *(int *)(iVar1 + 0x14);
      iVar4 = FUN_00449b70(iVar3,*(undefined4 *)(iVar3 + 4),&local_120);
      if (*(int *)(iVar1 + 0x18) == 0xe38e37) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("list<T> too long");
      }
      *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + 1;
      *(int *)(iVar3 + 4) = iVar4;
      **(int **)(iVar4 + 4) = iVar4;
    }
  }
  if (iVar6 == 2) {
    local_120 = 0x901;
    cVar2 = FUN_00444a90(&local_120);
    if (cVar2 == '\0') {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x8006d0) + 0x1d28);
      iVar3 = *(int *)(iVar1 + 0x14);
      iVar4 = FUN_00449b70(iVar3,*(undefined4 *)(iVar3 + 4),&local_120);
      if (*(int *)(iVar1 + 0x18) == 0xe38e37) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("list<T> too long");
      }
      *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + 1;
      *(int *)(iVar3 + 4) = iVar4;
      **(int **)(iVar4 + 4) = iVar4;
    }
  }
  if (iVar6 == 3) {
    local_120 = 0x601;
    cVar2 = FUN_00444a90(&local_120);
    if (cVar2 == '\0') {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x8006d0) + 0x1d28);
      iVar3 = *(int *)(iVar1 + 0x14);
      iVar4 = FUN_00449b70(iVar3,*(undefined4 *)(iVar3 + 4),&local_120);
      if (*(int *)(iVar1 + 0x18) == 0xe38e37) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("list<T> too long");
      }
      *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + 1;
      *(int *)(iVar3 + 4) = iVar4;
      **(int **)(iVar4 + 4) = iVar4;
    }
  }
  if (iVar6 == 4) {
    local_120 = 0x501;
    cVar2 = FUN_00444a90(&local_120);
    if (cVar2 == '\0') {
      iVar6 = *(int *)(*(int *)(in_ECX + 0x8006d0) + 0x1d28);
      iVar1 = *(int *)(iVar6 + 0x14);
      iVar3 = FUN_00449b70(iVar1,*(undefined4 *)(iVar1 + 4),&local_120);
      if (*(int *)(iVar6 + 0x18) == 0xe38e37) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("list<T> too long");
      }
      *(int *)(iVar6 + 0x18) = *(int *)(iVar6 + 0x18) + 1;
      *(int *)(iVar1 + 4) = iVar3;
      **(int **)(iVar3 + 4) = iVar3;
    }
  }
  if (param_1 == 1) {
    local_120 = 0x1a0b;
    local_110 = uVar7;
    cVar2 = FUN_00444a90(&local_120);
    if (cVar2 == '\0') {
      iVar6 = *(int *)(*(int *)(in_ECX + 0x8006d0) + 0x1d28);
      iVar1 = *(int *)(iVar6 + 0x14);
      iVar3 = FUN_00449b70(iVar1,*(undefined4 *)(iVar1 + 4),&local_120);
      if (*(int *)(iVar6 + 0x18) == 0xe38e37) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("list<T> too long");
      }
      *(int *)(iVar6 + 0x18) = *(int *)(iVar6 + 0x18) + 1;
      *(int *)(iVar1 + 4) = iVar3;
      **(int **)(iVar3 + 4) = iVar3;
    }
    local_120 = 0x160b;
    cVar2 = FUN_00444a90(&local_120);
    if (cVar2 == '\0') {
      iVar6 = *(int *)(*(int *)(in_ECX + 0x8006d0) + 0x1d28);
      iVar1 = *(int *)(iVar6 + 0x14);
      iVar3 = FUN_00449b70(iVar1,*(undefined4 *)(iVar1 + 4),&local_120);
      if (*(int *)(iVar6 + 0x18) == 0xe38e37) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("list<T> too long");
      }
      *(int *)(iVar6 + 0x18) = *(int *)(iVar6 + 0x18) + 1;
      *(int *)(iVar1 + 4) = iVar3;
      **(int **)(iVar3 + 4) = iVar3;
    }
    if (*(char *)(*(int *)(in_ECX + 0x8006d0) + 0x140) == '\x04') {
      local_120 = 0x90b;
      local_114 = CONCAT11(0x1b,(undefined1)local_114);
      local_110 = 1;
      cVar2 = FUN_00444a90(&local_120);
      if (cVar2 == '\0') {
        FUN_0044d460(&local_120);
      }
    }
    if (*(char *)(*(int *)(in_ECX + 0x8006d0) + 0x140) == '\x02') {
      local_120 = 0x90b;
      local_114 = CONCAT11(0x1a,(undefined1)local_114);
      local_110 = 1;
      cVar2 = FUN_00444a90(&local_120);
      if (cVar2 == '\0') {
        FUN_0044d460(&local_120);
      }
    }
    if (*(char *)(*(int *)(in_ECX + 0x8006d0) + 0x140) == '\x03') {
      local_120 = 0x90b;
      local_114 = CONCAT11(0x19,(undefined1)local_114);
      local_110 = 1;
      cVar2 = FUN_00444a90(&local_120);
      if (cVar2 == '\0') {
        FUN_0044d460(&local_120);
      }
    }
    if (*(char *)(*(int *)(in_ECX + 0x8006d0) + 0x140) == '\x03') {
      local_120 = 0x90b;
      local_114 = CONCAT11(0x19,(undefined1)local_114);
      local_110 = 1;
      cVar2 = FUN_00444a90(&local_120);
      if (cVar2 == '\0') {
        FUN_0044d460(&local_120);
      }
    }
    local_120 = 0xa0b;
    local_114 = CONCAT11(1,(undefined1)local_114);
    local_110 = 1;
    cVar2 = FUN_00444a90(&local_120);
    if (cVar2 == '\0') {
      iVar6 = *(int *)(*(int *)(in_ECX + 0x8006d0) + 0x1d28);
      iVar1 = *(int *)(iVar6 + 0x14);
      iVar3 = FUN_00449b70(iVar1,*(undefined4 *)(iVar1 + 4),&local_120);
      if (*(int *)(iVar6 + 0x18) == 0xe38e37) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("list<T> too long");
      }
      *(int *)(iVar6 + 0x18) = *(int *)(iVar6 + 0x18) + 1;
      *(int *)(iVar1 + 4) = iVar3;
      **(int **)(iVar3 + 4) = iVar3;
    }
    local_120 = 0xa0b;
    local_114 = CONCAT11(2,(undefined1)local_114);
    local_110 = 1;
    cVar2 = FUN_00444a90(&local_120);
    if (cVar2 == '\0') {
      iVar6 = *(int *)(*(int *)(in_ECX + 0x8006d0) + 0x1d28);
      iVar1 = *(int *)(iVar6 + 0x14);
      iVar3 = FUN_00449b70(iVar1,*(undefined4 *)(iVar1 + 4),&local_120);
      if (*(int *)(iVar6 + 0x18) == 0xe38e37) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("list<T> too long");
      }
      *(int *)(iVar6 + 0x18) = *(int *)(iVar6 + 0x18) + 1;
      *(int *)(iVar1 + 4) = iVar3;
      **(int **)(iVar3 + 4) = iVar3;
    }
    local_120 = 0xa0b;
    local_114 = CONCAT11(0xb,(undefined1)local_114);
    local_110 = 1;
    cVar2 = FUN_00444a90(&local_120);
    if (cVar2 == '\0') {
      iVar6 = *(int *)(*(int *)(in_ECX + 0x8006d0) + 0x1d28);
      iVar1 = *(int *)(iVar6 + 0x14);
      iVar3 = FUN_00449b70(iVar1,*(undefined4 *)(iVar1 + 4),&local_120);
      if (*(int *)(iVar6 + 0x18) == 0xe38e37) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("list<T> too long");
      }
      *(int *)(iVar6 + 0x18) = *(int *)(iVar6 + 0x18) + 1;
      *(int *)(iVar1 + 4) = iVar3;
      **(int **)(iVar3 + 4) = iVar3;
    }
    local_120 = 0xa0b;
    local_114 = CONCAT11(0xc,(undefined1)local_114);
    local_110 = 1;
    cVar2 = FUN_00444a90(&local_120);
    if (cVar2 == '\0') {
      iVar6 = *(int *)(*(int *)(in_ECX + 0x8006d0) + 0x1d28);
      iVar1 = *(int *)(iVar6 + 0x14);
      iVar3 = FUN_00449b70(iVar1,*(undefined4 *)(iVar1 + 4),&local_120);
      if (*(int *)(iVar6 + 0x18) == 0xe38e37) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("list<T> too long");
      }
      *(int *)(iVar6 + 0x18) = *(int *)(iVar6 + 0x18) + 1;
      *(int *)(iVar1 + 4) = iVar3;
      **(int **)(iVar3 + 4) = iVar3;
    }
  }
  local_120 = local_120 & 0xff;
  local_110 = uVar7;
  local_11c = rand();
  local_11c = local_11c % 0xb;
  switch(uVar5) {
  case 0:
    local_120 = CONCAT11(local_120._1_1_,7);
    break;
  case 1:
    local_120 = CONCAT11(local_120._1_1_,4);
    break;
  case 2:
    local_120 = CONCAT11(local_120._1_1_,6);
    break;
  case 3:
    local_120 = CONCAT11(local_120._1_1_,5);
  }
  switch(*(undefined1 *)(*(int *)(in_ECX + 0x8006d0) + 0x140)) {
  case 1:
    local_114 = CONCAT11(1,(undefined1)local_114);
    break;
  case 2:
    local_114 = CONCAT11(0x1a,(undefined1)local_114);
    break;
  case 3:
    local_114 = CONCAT11(0x19,(undefined1)local_114);
    break;
  case 4:
    local_114 = CONCAT11(0x1b,(undefined1)local_114);
  }
  cVar2 = FUN_00444a90(&local_120);
  if (cVar2 == '\0') {
    iVar6 = *(int *)(*(int *)(in_ECX + 0x8006d0) + 0x1d28);
    iVar1 = *(int *)(iVar6 + 0x14);
    iVar3 = FUN_00449b70(iVar1,*(undefined4 *)(iVar1 + 4),&local_120);
    if (*(int *)(iVar6 + 0x18) == 0xe38e37) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    *(int *)(iVar6 + 0x18) = *(int *)(iVar6 + 0x18) + 1;
    *(int *)(iVar1 + 4) = iVar3;
    **(int **)(iVar3 + 4) = iVar3;
  }
  local_120 = CONCAT11(local_120._1_1_,3);
  local_11c = rand();
  local_11c = local_11c % 0xb;
  switch(*(undefined1 *)(*(int *)(in_ECX + 0x8006d0) + 0x140)) {
  case 1:
    local_114 = CONCAT11(1,(undefined1)local_114);
    iVar6 = (int)param_1 % 3;
    if (iVar6 == 0) {
      iVar6 = rand();
      local_120 = CONCAT11((char)(iVar6 % 3) + '\x0f',(undefined1)local_120);
    }
    else if (iVar6 == 1) {
      iVar6 = rand();
      local_120 = CONCAT11((char)(iVar6 % 3),(undefined1)local_120);
    }
    else if (iVar6 == 2) {
      local_120 = CONCAT11(0xd,(undefined1)local_120);
    }
    break;
  case 2:
    local_114 = CONCAT11(2,(undefined1)local_114);
    iVar6 = (int)param_1 % 3;
    if (iVar6 == 0) {
      local_120 = CONCAT11(6,(undefined1)local_120);
    }
    else if (iVar6 == 1) {
      local_120 = CONCAT11(7,(undefined1)local_120);
    }
    else if (iVar6 == 2) {
      local_120 = CONCAT11(8,(undefined1)local_120);
    }
    break;
  case 3:
    iVar6 = (int)param_1 % 3;
    if (iVar6 == 0) {
      local_120 = CONCAT11(10,(undefined1)local_120);
    }
    else {
      if (iVar6 != 1) {
        if (iVar6 == 2) {
          local_120 = CONCAT11(0xc,(undefined1)local_120);
          uVar5 = rand();
          uVar5 = uVar5 & 0x80000001;
          bVar8 = uVar5 == 0;
          if ((int)uVar5 < 0) {
            bVar8 = (uVar5 - 1 | 0xfffffffe) == 0xffffffff;
          }
          local_114 = CONCAT11(!bVar8 + '\v',(undefined1)local_114);
        }
        break;
      }
      local_120 = CONCAT11(0xb,(undefined1)local_120);
    }
    local_114 = CONCAT11(2,(undefined1)local_114);
    break;
  case 4:
    local_114 = CONCAT11(1,(undefined1)local_114);
    iVar6 = (int)param_1 % 3;
    if (iVar6 == 0) {
      local_120 = CONCAT11(3,(undefined1)local_120);
    }
    else if (iVar6 == 1) {
      local_120 = CONCAT11(5,(undefined1)local_120);
    }
    else if (iVar6 == 2) {
      local_120 = CONCAT11(4,(undefined1)local_120);
    }
  }
  cVar2 = FUN_00444a90(&local_120);
  if (cVar2 == '\0') {
    iVar6 = *(int *)(*(int *)(in_ECX + 0x8006d0) + 0x1d28);
    iVar1 = *(int *)(iVar6 + 0x14);
    iVar3 = FUN_00449b70(iVar1,*(undefined4 *)(iVar1 + 4),&local_120);
    if (*(int *)(iVar6 + 0x18) == 0xe38e37) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    *(int *)(iVar6 + 0x18) = *(int *)(iVar6 + 0x18) + 1;
    *(int *)(iVar1 + 4) = iVar3;
    **(int **)(iVar3 + 4) = iVar3;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004814f0 @ 004814f0  kind=gamemisc  attributed-by=none  size=193 */

void FUN_004814f0(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0x800890) + 0x3c);
  iVar2 = *(int *)(iVar1 + 0x68);
  iVar1 = *(int *)(iVar1 + 0x94);
  if (*(int *)(iVar1 + iVar2 * 4) == 0) {
    iVar1 = *(int *)(*(int *)(in_ECX + 0x80088c) + 0x3c);
    iVar2 = *(int *)(iVar1 + 0x68);
    iVar1 = *(int *)(iVar1 + 0x94);
    if (*(int *)(iVar1 + iVar2 * 4) == 0) {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x800880) + 0x3c);
      iVar2 = *(int *)(iVar1 + 0x68);
      iVar1 = *(int *)(iVar1 + 0x94);
      if (*(int *)(iVar1 + iVar2 * 4) == 0) {
        iVar1 = *(int *)(*(int *)(in_ECX + 0x800888) + 0x3c);
        iVar2 = *(int *)(iVar1 + 0x68);
        iVar1 = *(int *)(iVar1 + 0x94);
        if (*(int *)(iVar1 + iVar2 * 4) != 0) {
          *(undefined4 *)(iVar1 + iVar2 * 4) = 0;
          iVar1 = *(int *)(in_ECX + 0x800874);
          goto LAB_0048159b;
        }
        iVar1 = *(int *)(*(int *)(in_ECX + 0x800894) + 0x3c);
        iVar2 = *(int *)(iVar1 + 0x68);
        iVar1 = *(int *)(iVar1 + 0x94);
        if (*(int *)(iVar1 + iVar2 * 4) == 0) {
          return;
        }
        goto LAB_0048158e;
      }
    }
    *(undefined4 *)(iVar1 + iVar2 * 4) = 0;
    iVar1 = *(int *)(in_ECX + 0x800888);
  }
  else {
LAB_0048158e:
    *(undefined4 *)(iVar1 + iVar2 * 4) = 0;
    iVar1 = *(int *)(in_ECX + 0x80088c);
  }
LAB_0048159b:
  *(undefined4 *)
   (*(int *)(*(int *)(iVar1 + 0x3c) + 0x94) + *(int *)(*(int *)(iVar1 + 0x3c) + 0x68) * 4) = 1;
  return;
}


/* FUN_004816f0 @ 004816f0  kind=gamemisc  attributed-by=none  size=1568 */

void __thiscall FUN_004816f0(void *this)

{
  void *_Src;
  void *_Dst;
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iStack_278;
  basic_iostream<char,std::char_traits<char>_> local_274;
  basic_streambuf<char,std::char_traits<char>_> local_25c [2];
  undefined1 local_254 [8];
  undefined4 *local_24c;
  undefined4 *local_23c;
  undefined4 *local_22c;
  undefined4 local_224;
  uint local_220;
  basic_ios<char,std::char_traits<char>_> local_20c [5];
  int iStack_1c8;
  basic_iostream<char,std::char_traits<char>_> local_1c4;
  basic_streambuf<char,std::char_traits<char>_> local_1ac [2];
  undefined1 local_1a4 [8];
  undefined4 *local_19c;
  undefined4 *local_18c;
  undefined4 *local_17c;
  undefined4 local_174;
  uint local_170;
  basic_ios<char,std::char_traits<char>_> local_15c [5];
  int iStack_118;
  basic_iostream<char,std::char_traits<char>_> local_114;
  basic_streambuf<char,std::char_traits<char>_> local_fc [2];
  undefined1 local_f4 [8];
  undefined4 *local_ec;
  undefined4 *local_dc;
  undefined4 *local_cc;
  undefined4 local_c4;
  uint local_c0;
  basic_ios<char,std::char_traits<char>_> local_ac [6];
  int local_64;
  int local_60;
  void *local_5c;
  void *local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  uint local_48;
  void *local_44 [5];
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e6498;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_48 = 0;
  puVar1 = *(undefined4 **)(*(int *)((int)this + 0x800984) + *(int *)((int)this + 0x800a0c) * 4);
  local_5c = this;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1,local_14);
  }
  _Dst = (void *)(*(int *)((int)this + 0x800984) + *(int *)((int)this + 0x800a0c) * 4);
  _Src = (void *)((int)_Dst + 4);
  memmove(_Dst,_Src,*(int *)((int)this + 0x800988) - (int)_Src & 0xfffffffc);
  *(int *)((int)this + 0x800988) = *(int *)((int)this + 0x800988) + -4;
  local_58 = (void *)0x0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_8 = 0;
  iVar5 = *(int *)((int)this + 0x800988) - *(int *)((int)this + 0x800984) >> 2;
  FUN_005870c0(4);
  *(int *)((int)local_58 + local_4c) = iVar5;
  local_4c = local_4c + 4;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_0040c280(&DAT_00700e68,3);
  local_64 = (int)this + 0x1001008;
  local_8._0_1_ = 1;
  FUN_004499c0(local_2c,&local_58);
  local_8._0_1_ = 0;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_274.vbtablePtr =
       (basic_iostream<char,std::char_traits<char>_>_vbtable *)
       &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vbtable
  ;
  local_274.basic_ostream<char,std::char_traits<char>_>.vbtablePtr =
       (basic_ostream<char,std::char_traits<char>_>_vbtable *)&DAT_006fcd08;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(local_20c);
  local_8 = CONCAT31(local_8._1_3_,2);
  local_48 = 1;
  std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
            (&local_274,(basic_streambuf<char,std::char_traits<char>_> *)local_25c);
  local_8 = 3;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((int)&local_274.vbtablePtr +
   (local_274.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((int)&iStack_278 + (local_274.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset
          ) = (local_274.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            (local_25c);
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
  local_25c[0] = (basic_streambuf<char,std::char_traits<char>_>)
                 &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  local_224 = 0;
  local_220 = 0;
  local_8._0_1_ = 5;
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            (&local_274.basic_ostream<char,std::char_traits<char>_>,*(int *)((int)this + 0x800a0c));
  uVar3 = FUN_0040e140(local_2c);
  local_8._0_1_ = 6;
  FUN_00449720(uVar3);
  local_8._0_1_ = 5;
  uVar2 = (undefined1)local_8;
  local_8._0_1_ = 5;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  iVar5 = iVar5 + 1;
  if (*(int *)((int)this + 0x800a0c) < iVar5) {
    uVar7 = 1;
    iVar6 = *(int *)((int)this + 0x800a0c);
    do {
      local_1c4.vbtablePtr =
           (basic_iostream<char,std::char_traits<char>_>_vbtable *)
           &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
            vbtable;
      local_1c4.basic_ostream<char,std::char_traits<char>_>.vbtablePtr =
           (basic_ostream<char,std::char_traits<char>_>_vbtable *)&DAT_006fcd08;
      std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>
                (local_15c);
      local_48 = uVar7 | 2;
      local_8 = CONCAT31(local_8._1_3_,7);
      std::basic_iostream<char,std::char_traits<char>_>::
      basic_iostream<char,std::char_traits<char>_>
                (&local_1c4,(basic_streambuf<char,std::char_traits<char>_> *)local_1ac);
      local_8 = 8;
      *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
       ((int)&local_1c4.vbtablePtr +
       (local_1c4.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
           &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
      *(int *)((int)&iStack_1c8 +
              (local_1c4.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
           (local_1c4.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
      std::basic_streambuf<char,std::char_traits<char>_>::
      basic_streambuf<char,std::char_traits<char>_>(local_1ac);
      local_1ac[0] = (basic_streambuf<char,std::char_traits<char>_>)
                     &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
                      vftable;
      local_174 = 0;
      local_170 = 0;
      local_60 = iVar6 + 1;
      local_8._0_1_ = 10;
      std::basic_ostream<char,std::char_traits<char>_>::operator<<
                (&local_1c4.basic_ostream<char,std::char_traits<char>_>,local_60);
      local_114.vbtablePtr =
           (basic_iostream<char,std::char_traits<char>_>_vbtable *)
           &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
            vbtable;
      local_114.basic_ostream<char,std::char_traits<char>_>.vbtablePtr =
           (basic_ostream<char,std::char_traits<char>_>_vbtable *)&DAT_006fcd08;
      std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>
                (local_ac);
      uVar7 = uVar7 | 6;
      local_8 = CONCAT31(local_8._1_3_,0xb);
      local_48 = uVar7;
      std::basic_iostream<char,std::char_traits<char>_>::
      basic_iostream<char,std::char_traits<char>_>
                (&local_114,(basic_streambuf<char,std::char_traits<char>_> *)local_fc);
      local_8 = 0xc;
      *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
       ((int)&local_114.vbtablePtr +
       (local_114.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
           &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
      *(int *)((int)&iStack_118 +
              (local_114.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
           (local_114.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
      std::basic_streambuf<char,std::char_traits<char>_>::
      basic_streambuf<char,std::char_traits<char>_>(local_fc);
      local_fc[0] = (basic_streambuf<char,std::char_traits<char>_>)
                    &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
                     vftable;
      local_c4 = 0;
      local_c0 = 0;
      local_8._0_1_ = 0xe;
      std::basic_ostream<char,std::char_traits<char>_>::operator<<
                (&local_114.basic_ostream<char,std::char_traits<char>_>,iVar6);
      uVar3 = FUN_0040e140(local_44);
      local_8._0_1_ = 0xf;
      uVar4 = FUN_0040e140(local_2c);
      local_8._0_1_ = 0x10;
      FUN_00449920(uVar4,uVar3);
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_2c[0]);
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_44[0]);
      }
      local_8._0_1_ = 10;
      *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
       ((int)&local_114.vbtablePtr +
       (local_114.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
           &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
      *(int *)((int)&iStack_118 +
              (local_114.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
           (local_114.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
      local_fc[0] = (basic_streambuf<char,std::char_traits<char>_>)
                    &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
                     vftable;
      if ((local_c0 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(*(void **)local_f4._4_4_);
      }
      std::basic_streambuf<char,std::char_traits<char>_>::setg
                (local_fc,(char *)0x0,(char *)0x0,(char *)0x0);
      *local_ec = 0;
      *local_dc = 0;
      *local_cc = 0;
      local_c0 = local_c0 & 0xfffffffe;
      local_c4 = 0;
      std::basic_streambuf<char,std::char_traits<char>_>::
      ~basic_streambuf<char,std::char_traits<char>_>(local_fc);
      std::basic_iostream<char,std::char_traits<char>_>::
      ~basic_iostream<char,std::char_traits<char>_>
                ((basic_iostream<char,std::char_traits<char>_> *)local_f4);
      std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
                (local_ac);
      local_8._0_1_ = 5;
      *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
       ((int)&local_1c4.vbtablePtr +
       (local_1c4.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
           &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
      *(int *)((int)&iStack_1c8 +
              (local_1c4.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
           (local_1c4.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
      local_1ac[0] = (basic_streambuf<char,std::char_traits<char>_>)
                     &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
                      vftable;
      if ((local_170 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(*(void **)local_1a4._4_4_);
      }
      std::basic_streambuf<char,std::char_traits<char>_>::setg
                (local_1ac,(char *)0x0,(char *)0x0,(char *)0x0);
      *local_19c = 0;
      *local_18c = 0;
      *local_17c = 0;
      local_170 = local_170 & 0xfffffffe;
      local_174 = 0;
      std::basic_streambuf<char,std::char_traits<char>_>::
      ~basic_streambuf<char,std::char_traits<char>_>(local_1ac);
      std::basic_iostream<char,std::char_traits<char>_>::
      ~basic_iostream<char,std::char_traits<char>_>
                ((basic_iostream<char,std::char_traits<char>_> *)local_1a4);
      std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
                (local_15c);
      iVar6 = local_60;
      uVar2 = (undefined1)local_8;
    } while (local_60 < iVar5);
  }
  local_8._0_1_ = uVar2;
  FUN_0049d650();
  local_8 = (uint)local_8._1_3_ << 8;
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((int)&local_274.vbtablePtr +
   (local_274.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((int)&iStack_278 + (local_274.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset
          ) = (local_274.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
  local_25c[0] = (basic_streambuf<char,std::char_traits<char>_>)
                 &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  if ((local_220 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)local_254._4_4_);
  }
  std::basic_streambuf<char,std::char_traits<char>_>::setg
            (local_25c,(char *)0x0,(char *)0x0,(char *)0x0);
  *local_24c = 0;
  *local_23c = 0;
  *local_22c = 0;
  local_220 = local_220 & 0xfffffffe;
  local_224 = 0;
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (local_25c);
  std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)local_254);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_20c);
  if (local_58 == (void *)0x0) {
    ExceptionList = local_10;
    __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(local_58);
}


/* FUN_00481d30 @ 00481d30  kind=gamemisc  attributed-by=none  size=647 */

void FUN_00481d30(void)

{
  void *_Src;
  void *_Dst;
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  LPCSTR **pppCVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  void *local_84;
  undefined4 local_80;
  undefined4 local_7c;
  int local_78;
  LPCSTR *local_74 [5];
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  LPCSTR *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e64f0;
  local_10 = ExceptionList;
  uVar2 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar5 = *(int *)(in_ECX + 0x800a10);
  local_14 = uVar2;
  if ((-1 < iVar5) && (iVar5 < *(int *)(in_ECX + 0x8009e0) - *(int *)(in_ECX + 0x8009dc) >> 2)) {
    uVar3 = FUN_004516e0(local_5c,"Save\\world_",
                         *(int *)(*(int *)(in_ECX + 0x8009dc) + iVar5 * 4) + 8,uVar2);
    local_8 = 0;
    FUN_00451550(local_74,uVar3,&DAT_00701e5c);
    local_8._0_1_ = 2;
    if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_5c[0]);
    }
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
    uVar3 = FUN_004516e0(local_2c,"Save\\map_",
                         *(int *)(*(int *)(in_ECX + 0x8009dc) + *(int *)(in_ECX + 0x800a10) * 4) + 8
                         ,uVar2);
    local_8._0_1_ = 3;
    FUN_00451550(local_44,uVar3,&DAT_00701e5c);
    local_8 = CONCAT31(local_8._1_3_,5);
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    pppCVar4 = local_74;
    if (0xf < local_60) {
      pppCVar4 = (LPCSTR **)local_74[0];
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    DeleteFileA((LPCSTR)pppCVar4);
    pppCVar4 = local_44;
    if (0xf < local_30) {
      pppCVar4 = (LPCSTR **)local_44[0];
    }
    DeleteFileA((LPCSTR)pppCVar4);
    puVar1 = *(undefined4 **)(*(int *)(in_ECX + 0x8009dc) + *(int *)(in_ECX + 0x800a10) * 4);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    _Dst = (void *)(*(int *)(in_ECX + 0x8009dc) + *(int *)(in_ECX + 0x800a10) * 4);
    _Src = (void *)((int)_Dst + 4);
    memmove(_Dst,_Src,*(int *)(in_ECX + 0x8009e0) - (int)_Src & 0xfffffffc);
    *(int *)(in_ECX + 0x8009e0) = *(int *)(in_ECX + 0x8009e0) + -4;
    iVar5 = *(int *)(in_ECX + 0x8009e0) - *(int *)(in_ECX + 0x8009dc) >> 2;
    if (iVar5 < *(int *)(in_ECX + 0x800a10)) {
      *(int *)(in_ECX + 0x800a10) = iVar5 + -1;
    }
    local_84 = (void *)0x0;
    local_80 = 0;
    local_7c = 0;
    local_78 = 0;
    local_8._0_1_ = 6;
    iVar5 = *(int *)(in_ECX + 0x8009e0) - *(int *)(in_ECX + 0x8009dc) >> 2;
    FUN_005870c0(4);
    *(int *)((int)local_84 + local_78) = iVar5;
    local_78 = local_78 + 4;
    FUN_00403350(&DAT_00700e68);
    local_8._0_1_ = 7;
    FUN_004499c0(local_2c,&local_84);
    local_8 = CONCAT31(local_8._1_3_,6);
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    iVar6 = 0;
    if (0 < iVar5) {
      do {
        FUN_004878a0();
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar5);
    }
    FUN_004a23d0();
    if (local_84 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_84);
    }
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_44[0]);
    }
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = (LPCSTR *)((uint)local_44[0] & 0xffffff00);
    if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_74[0]);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00481fe0 @ 00481fe0  kind=gamemisc  attributed-by=none  size=424 */

void FUN_00481fe0(void)

{
  int iVar1;
  int in_ECX;
  undefined4 local_74;
  undefined4 local_64;
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  undefined4 local_44;
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e6540;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_48 = 7;
  iVar1 = *(int *)(*(int *)(in_ECX + 0x800894) + 0x3c);
  local_4c = 0;
  *(undefined4 *)(*(int *)(iVar1 + 0x94) + *(int *)(iVar1 + 0x68) * 4) = 1;
  iVar1 = *(int *)(*(int *)(in_ECX + 0x80088c) + 0x3c);
  *(undefined4 *)(*(int *)(iVar1 + 0x94) + *(int *)(iVar1 + 0x68) * 4) = 0;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8 = 0;
  local_30 = 7;
  local_34 = 0;
  local_44 = (void *)((uint)local_44._2_2_ << 0x10);
  FUN_0040f7a0(L"edit",4);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_00636a00(&local_44,local_5c,1);
  if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44);
  }
  local_30 = 7;
  local_34 = 0;
  local_44 = (void *)((uint)local_44 & 0xffff0000);
  local_8 = 0xffffffff;
  if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_5c[0]);
  }
  local_60 = 7;
  local_64 = 0;
  local_74 = (void *)((uint)local_74._2_2_ << 0x10);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8 = 2;
  local_18 = 7;
  local_1c = 0;
  local_2c = (void *)((uint)local_2c._2_2_ << 0x10);
  FUN_0040f7a0(L"edit",4);
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_00636a00(&local_2c,&local_74,1);
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  local_18 = 7;
  local_1c = 0;
  local_2c = (void *)((uint)local_2c & 0xffff0000);
  if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_74);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004821a0 @ 004821a0  kind=gamemisc  attributed-by=none  size=873 */

void FUN_004821a0(void)

{
  char cVar1;
  undefined4 *puVar2;
  Creature *pCVar3;
  uint uVar4;
  undefined4 uVar5;
  Creature *pCVar6;
  void *pvVar7;
  undefined4 *puVar8;
  int in_ECX;
  char ****ppppcVar9;
  char *pcVar10;
  int iVar11;
  Creature *local_78;
  undefined8 local_74;
  void *local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  char ***local_44 [5];
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e65ae;
  local_10 = ExceptionList;
  uVar4 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar11 = *(int *)(*(int *)(in_ECX + 0x800880) + 0x3c);
  local_18 = 7;
  *(undefined4 *)(*(int *)(iVar11 + 0x94) + *(int *)(iVar11 + 0x68) * 4) = 0;
  local_1c = 0;
  iVar11 = *(int *)(*(int *)(in_ECX + 0x80088c) + 0x3c);
  *(undefined4 *)(*(int *)(iVar11 + 0x94) + *(int *)(iVar11 + 0x68) * 4) = 1;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  local_14 = uVar4;
  FUN_0040f7a0(L"edit",4);
  local_8 = 0;
  uVar5 = FUN_00635550(local_5c,local_2c,1);
  local_8._0_1_ = 1;
  FUN_00659f50(local_44,uVar5,uVar4);
  if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_5c[0]);
  }
  local_48 = 7;
  local_4c = 0;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  ppppcVar9 = local_44;
  if (0xf < local_30) {
    ppppcVar9 = (char ****)local_44[0];
  }
  pcVar10 = (char *)(*(int *)(in_ECX + 0x8006d0) + 0x1168);
  do {
    cVar1 = *(char *)ppppcVar9;
    *pcVar10 = cVar1;
    ppppcVar9 = (char ****)((int)ppppcVar9 + 1);
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  *(undefined4 *)(*(int *)(in_ECX + 0x8006d0) + 400) = 1;
  local_6c = (void *)0x0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  iVar11 = *(int *)(in_ECX + 0x800988) - *(int *)(in_ECX + 0x800984) >> 2;
  local_8._0_1_ = 5;
  FUN_005870c0(4);
  *(int *)((int)local_6c + local_60) = iVar11 + 1;
  local_60 = local_60 + 4;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_0040c280(&DAT_00700e68,3);
  local_8._0_1_ = 6;
  FUN_004499c0(local_2c,&local_6c);
  local_8._0_1_ = 5;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  *(int *)(in_ECX + 0x800a0c) = iVar11;
  FUN_00487520();
  local_78 = operator_new(0x1e60);
  local_8._0_1_ = 7;
  if (local_78 == (Creature *)0x0) {
    pCVar6 = (Creature *)0x0;
  }
  else {
    local_74 = 0;
    pCVar6 = cube::Creature::Creature(local_78,(undefined4 *)&local_74);
  }
  local_8._0_1_ = 5;
  local_78 = pCVar6;
  local_74._4_4_ = pCVar6;
  FUN_0044b040(*(int *)(in_ECX + 0x8006d0) + 0x10);
  pCVar3 = local_74._4_4_;
  iVar11 = *(int *)(in_ECX + 0x8006d0);
  FUN_0044ad30(iVar11 + 0x11dc);
  pCVar3[0x11e].Creature_data.offset_0x4 = *(undefined4 *)(iVar11 + 0x11e8);
  FUN_0042c5e0(iVar11 + 0x11ec);
  *(undefined4 *)&pCVar3[0x130].Creature_data = *(undefined4 *)(iVar11 + 0x1304);
  pCVar3[0x130].Creature_data.offset_0x4 = *(undefined4 *)(iVar11 + 0x1308);
  pCVar3[0x135].vftablePtr = pCVar6[1].vftablePtr;
  *(undefined4 *)&pCVar3[0x135].Creature_data = *(undefined4 *)&pCVar6[1].Creature_data;
  pCVar3[0x135].Creature_data.offset_0x4 = pCVar6[1].Creature_data.offset_0x4;
  pCVar3[0x135].Creature_data.offset_0x8 = pCVar6[1].Creature_data.offset_0x8;
  pCVar3[0x136].vftablePtr = pCVar6[2].vftablePtr;
  *(undefined4 *)&pCVar3[0x136].Creature_data = *(undefined4 *)&pCVar6[2].Creature_data;
  pvVar7 = operator_new(0x40);
  local_74 = CONCAT44(pvVar7,(undefined4)local_74);
  local_8._0_1_ = 8;
  if (pvVar7 == (void *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar8 = (undefined4 *)FUN_0044a7e0();
  }
  pCVar3[0x1d2].Creature_data.offset_0x4 = puVar8;
  local_8 = CONCAT31(local_8._1_3_,5);
  puVar2 = *(undefined4 **)(*(int *)(in_ECX + 0x8006d0) + 0x1d28);
  *puVar8 = *puVar2;
  *(undefined1 *)(puVar8 + 1) = *(undefined1 *)(puVar2 + 1);
  puVar8[2] = puVar2[2];
  puVar8[3] = puVar2[3];
  *(undefined1 *)(puVar8 + 4) = *(undefined1 *)(puVar2 + 4);
  *(undefined1 *)((int)puVar8 + 0x11) = *(undefined1 *)((int)puVar2 + 0x11);
  *(undefined1 *)((int)puVar8 + 0x12) = *(undefined1 *)((int)puVar2 + 0x12);
  puVar8 = (undefined4 *)(*(int *)(*(int *)(in_ECX + 0x8006d0) + 0x1d28) + 0x14);
  if ((undefined4 *)(pCVar3[0x1d2].Creature_data.offset_0x4 + 0x14) != puVar8) {
    puVar8 = (undefined4 *)*puVar8;
    FUN_004571d0(*puVar8,puVar8);
  }
  FUN_0066add0(&local_78);
  FUN_0049d650();
  if (local_6c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_6c);
  }
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00483e70 @ 00483e70  kind=gamemisc  attributed-by=none  size=756 */

void FUN_00483e70(void)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  int in_ECX;
  float10 fVar4;
  undefined4 local_2c;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e6693;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = *(int *)(*(int *)(in_ECX + 0x800888) + 0x3c);
  *(undefined4 *)(*(int *)(iVar1 + 0x94) + *(int *)(iVar1 + 0x68) * 4) = 0;
  if ((*(int *)(in_ECX + 0x800a0c) < 0) ||
     (*(int *)(in_ECX + 0x800988) - *(int *)(in_ECX + 0x800984) >> 2 <= *(int *)(in_ECX + 0x800a0c))
     ) {
    *(undefined4 *)(in_ECX + 0x1c0) = 0x40a00000;
    *(undefined4 *)(in_ECX + 0x1bc) = 0x40a00000;
    *(undefined4 *)(in_ECX + 0x1b0) = 0x42b40000;
    *(undefined4 *)(in_ECX + 0x1b4) = 0;
    *(undefined4 *)(in_ECX + 0x1b8) = 0;
    *(undefined4 *)(in_ECX + 0x1a4) = *(undefined4 *)(in_ECX + 0x1b0);
    *(undefined4 *)(in_ECX + 0x1a8) = *(undefined4 *)(in_ECX + 0x1b4);
    *(undefined4 *)(in_ECX + 0x1ac) = *(undefined4 *)(in_ECX + 0x1b8);
    iVar1 = *(int *)(*(int *)(in_ECX + 0x800880) + 0x3c);
    *(undefined4 *)(*(int *)(iVar1 + 0x94) + *(int *)(iVar1 + 0x68) * 4) = 1;
    FUN_00446330(local_14);
    *(undefined1 *)(*(int *)(in_ECX + 0x8006d0) + 0x1168) = 0;
    *(undefined1 *)(*(int *)(in_ECX + 0x8006d0) + 0x60) = 0;
    iVar1 = *(int *)(in_ECX + 0x8006d0);
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    *(undefined4 *)(iVar1 + 0x30) = 0;
    iVar1 = *(int *)(in_ECX + 0x8006d0);
    *(undefined4 *)(iVar1 + 0x34) = 0;
    *(undefined4 *)(iVar1 + 0x38) = 0;
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    *(undefined4 *)(*(int *)(in_ECX + 0x8006d0) + 0x5c) = 0;
    *(undefined4 *)(*(int *)(in_ECX + 0x8006d0) + 0x180) = 0x3f800000;
    *(undefined4 *)(*(int *)(in_ECX + 0x8006d0) + 400) = 1;
    fVar4 = (float10)FUN_00444db0();
    *(float *)(*(int *)(in_ECX + 0x8006d0) + 0x16c) = (float)fVar4;
    *(undefined1 *)(*(int *)(in_ECX + 0x8006d0) + 0xaa8) = 3;
    *(undefined1 *)(*(int *)(in_ECX + 0x8006d0) + 0xaa9) = 0;
    *(undefined1 *)(*(int *)(in_ECX + 0x8006d0) + 0xab5) = 1;
    *(undefined1 *)(*(int *)(in_ECX + 0x8006d0) + 0x990) = 3;
    *(undefined1 *)(*(int *)(in_ECX + 0x8006d0) + 0x991) = 0;
    *(undefined1 *)(*(int *)(in_ECX + 0x8006d0) + 0x99d) = 1;
    *(undefined1 *)(*(int *)(in_ECX + 0x8006d0) + 0x53d) = 1;
    *(undefined1 *)(*(int *)(in_ECX + 0x8006d0) + 0x60) = 0;
    *(undefined1 *)(*(int *)(in_ECX + 0x8006d0) + 0x140) = 1;
    pvVar2 = *(void **)(*(int *)(in_ECX + 0x8006d0) + 0x1d28);
    if (pvVar2 != (void *)0x0) {
      FUN_0043c790();
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    pvVar2 = operator_new(0x40);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0044a7e0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(*(int *)(in_ECX + 0x8006d0) + 0x1d28) = uVar3;
    local_18 = 7;
    local_1c = 0;
    local_2c = (void *)((uint)local_2c._2_2_ << 0x10);
    FUN_0040f7a0(&PTR_006fccac,0);
    local_8 = 1;
    FUN_00636ad0(&local_2c);
    local_8 = 0xffffffff;
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c);
    }
    local_18 = 7;
    local_1c = 0;
    local_2c = (void *)((uint)local_2c & 0xffff0000);
    FUN_0042bd90();
    FUN_0042c080(0);
  }
  else {
    FUN_004806c0();
    iVar1 = *(int *)(*(int *)(in_ECX + 0x80088c) + 0x3c);
    *(undefined4 *)(*(int *)(iVar1 + 0x94) + *(int *)(iVar1 + 0x68) * 4) = 1;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00484170 @ 00484170  kind=gamemisc  attributed-by=none  size=187 */

void FUN_00484170(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0x80088c) + 0x3c);
  *(undefined4 *)(*(int *)(iVar1 + 0x94) + *(int *)(iVar1 + 0x68) * 4) = 0;
  *(undefined4 *)(in_ECX + 0x1c0) = 0x40a00000;
  *(undefined4 *)(in_ECX + 0x1bc) = 0x40a00000;
  *(undefined4 *)(in_ECX + 0x1b0) = 0x42b40000;
  *(undefined4 *)(in_ECX + 0x1b4) = 0;
  *(undefined4 *)(in_ECX + 0x1b8) = 0x43340000;
  *(undefined4 *)(in_ECX + 0x1a4) = *(undefined4 *)(in_ECX + 0x1b0);
  *(undefined4 *)(in_ECX + 0x1a8) = *(undefined4 *)(in_ECX + 0x1b4);
  *(undefined4 *)(in_ECX + 0x1ac) = *(undefined4 *)(in_ECX + 0x1b8);
  if (*(int *)(in_ECX + 0x800a10) < *(int *)(in_ECX + 0x8009e0) - *(int *)(in_ECX + 0x8009dc) >> 2)
  {
    iVar1 = *(int *)(*(int *)(in_ECX + 0x8009dc) + *(int *)(in_ECX + 0x800a10) * 4);
    FUN_0046f620(*(undefined4 *)(iVar1 + 0x20),iVar1 + 8);
    return;
  }
  iVar1 = *(int *)(*(int *)(in_ECX + 0x800890) + 0x3c);
  *(undefined4 *)(*(int *)(iVar1 + 0x94) + *(int *)(iVar1 + 0x68) * 4) = 1;
  return;
}


/* FUN_00486700 @ 00486700  kind=gamemisc  attributed-by=none  size=118 */

void FUN_00486700(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *in_ECX;
  
  puVar1 = (undefined4 *)in_ECX[1];
  if ((param_1 < puVar1) && (puVar2 = (undefined4 *)*in_ECX, puVar2 <= param_1)) {
    if (puVar1 == (undefined4 *)in_ECX[2]) {
      FUN_0044bcc0(1);
    }
    param_1 = (undefined4 *)((((int)param_1 - (int)puVar2) / 0x11c) * 0x11c + *in_ECX);
  }
  else if (puVar1 == (undefined4 *)in_ECX[2]) {
    FUN_0044bcc0(1);
  }
  if ((undefined4 *)in_ECX[1] != (undefined4 *)0x0) {
    *(undefined4 *)in_ECX[1] = *param_1;
    FUN_0040ee70(param_1 + 1);
  }
  in_ECX[1] = in_ECX[1] + 0x11c;
  return;
}


/* FUN_00486830 @ 00486830  kind=gamemisc  attributed-by=none  size=159 */

void FUN_00486830(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int *in_ECX;
  
  puVar1 = (undefined1 *)in_ECX[1];
  if ((param_1 < puVar1) && (puVar2 = (undefined1 *)*in_ECX, puVar2 <= param_1)) {
    if (puVar1 == (undefined1 *)in_ECX[2]) {
      FUN_0046e8f0(1);
    }
    puVar3 = (undefined1 *)in_ECX[1];
    puVar1 = (undefined1 *)(*in_ECX + ((int)param_1 - (int)puVar2 >> 3) * 8);
    if (puVar3 != (undefined1 *)0x0) {
      *puVar3 = *puVar1;
      puVar3[1] = puVar1[1];
      puVar3[2] = puVar1[2];
      puVar3[3] = puVar1[3];
      *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(puVar1 + 4);
      in_ECX[1] = in_ECX[1] + 8;
      return;
    }
  }
  else {
    if (puVar1 == (undefined1 *)in_ECX[2]) {
      FUN_0046e8f0(1);
    }
    puVar1 = (undefined1 *)in_ECX[1];
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = *param_1;
      puVar1[1] = param_1[1];
      puVar1[2] = param_1[2];
      puVar1[3] = param_1[3];
      *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 4);
    }
  }
  in_ECX[1] = in_ECX[1] + 8;
  return;
}


/* FUN_00486b60 @ 00486b60  kind=gamemisc  attributed-by=none  size=55 */

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


/* FUN_00486d00 @ 00486d00  kind=gamemisc  attributed-by=none  size=949 */

void FUN_00486d00(uint param_1,uint param_2,int *param_3,uint param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *in_ECX;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int *local_c;
  
  uVar4 = in_ECX[4];
  if ((uVar4 < param_1) || ((uint)param_3[4] < param_4)) {
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("invalid string position");
  }
  uVar6 = uVar4 - param_1;
  if (uVar6 < param_2) {
    param_2 = uVar6;
  }
  uVar2 = param_3[4] - param_4;
  if (uVar2 < param_5) {
    param_5 = uVar2;
  }
  if (uVar4 - param_2 < -param_5 - 1) {
    iVar1 = uVar6 - param_2;
    uVar6 = (uVar4 - param_2) + param_5;
    if (uVar4 < uVar6) {
      if (0x7ffffffe < uVar6) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("string too long");
      }
      if ((uint)in_ECX[5] < uVar6) {
        FUN_0040f170(uVar6,uVar4);
      }
      else if (uVar6 == 0) {
        in_ECX[4] = 0;
        piVar3 = in_ECX;
        if (7 < (uint)in_ECX[5]) {
          piVar3 = (int *)*in_ECX;
        }
        *(undefined2 *)piVar3 = 0;
      }
    }
    if (in_ECX == param_3) {
      if (param_2 < param_5) {
        if (param_1 < param_4) {
          uVar4 = param_2 + param_1;
          if (param_4 < uVar4) {
            piVar5 = in_ECX;
            piVar3 = in_ECX;
            if (7 < (uint)in_ECX[5]) {
              piVar5 = (int *)*in_ECX;
              piVar3 = (int *)*in_ECX;
            }
            if (param_2 != 0) {
              memmove((void *)((int)piVar5 + param_1 * 2),(void *)((int)piVar3 + param_4 * 2),
                      param_2 * 2);
            }
            piVar5 = in_ECX;
            piVar3 = in_ECX;
            if (7 < (uint)in_ECX[5]) {
              piVar5 = (int *)*in_ECX;
              piVar3 = (int *)*in_ECX;
            }
            if (iVar1 != 0) {
              memmove((void *)((int)piVar5 + (param_1 + param_5) * 2),
                      (void *)((int)piVar3 + uVar4 * 2),iVar1 * 2);
            }
            piVar5 = in_ECX;
            piVar3 = in_ECX;
            if (7 < (uint)in_ECX[5]) {
              piVar5 = (int *)*in_ECX;
              piVar3 = (int *)*in_ECX;
            }
            if (param_5 - param_2 != 0) {
              memmove((void *)((int)piVar5 + uVar4 * 2),
                      (void *)((int)piVar3 + (param_4 + param_5) * 2),(param_5 - param_2) * 2);
            }
          }
          else {
            piVar5 = in_ECX;
            piVar3 = in_ECX;
            if (7 < (uint)in_ECX[5]) {
              piVar5 = (int *)*in_ECX;
              piVar3 = (int *)*in_ECX;
            }
            if (iVar1 != 0) {
              memmove((void *)((int)piVar5 + (param_1 + param_5) * 2),
                      (void *)((int)piVar3 + uVar4 * 2),iVar1 * 2);
            }
            piVar5 = in_ECX;
            piVar3 = in_ECX;
            if (7 < (uint)in_ECX[5]) {
              piVar5 = (int *)*in_ECX;
              piVar3 = (int *)*in_ECX;
            }
            if (param_5 != 0) {
              memmove((void *)((int)piVar5 + param_1 * 2),
                      (void *)((int)piVar3 + ((param_4 - param_2) + param_5) * 2),param_5 * 2);
            }
          }
        }
        else {
          piVar5 = in_ECX;
          piVar3 = in_ECX;
          if (7 < (uint)in_ECX[5]) {
            piVar5 = (int *)*in_ECX;
            piVar3 = (int *)*in_ECX;
          }
          if (iVar1 != 0) {
            memmove((void *)((int)piVar5 + (param_1 + param_5) * 2),
                    (void *)((int)piVar3 + (param_2 + param_1) * 2),iVar1 * 2);
          }
          piVar5 = in_ECX;
          piVar3 = in_ECX;
          if (7 < (uint)in_ECX[5]) {
            piVar5 = (int *)*in_ECX;
            piVar3 = (int *)*in_ECX;
          }
          if (param_5 != 0) {
            memmove((void *)((int)piVar5 + param_1 * 2),(void *)((int)piVar3 + param_4 * 2),
                    param_5 * 2);
          }
        }
      }
      else {
        piVar5 = in_ECX;
        piVar3 = in_ECX;
        if (7 < (uint)in_ECX[5]) {
          piVar5 = (int *)*in_ECX;
          piVar3 = (int *)*in_ECX;
        }
        if (param_5 != 0) {
          memmove((void *)((int)piVar5 + param_1 * 2),(void *)((int)piVar3 + param_4 * 2),
                  param_5 * 2);
        }
        piVar5 = in_ECX;
        piVar3 = in_ECX;
        if (7 < (uint)in_ECX[5]) {
          piVar5 = (int *)*in_ECX;
          piVar3 = (int *)*in_ECX;
        }
        if (iVar1 != 0) {
          memmove((void *)((int)piVar5 + (param_1 + param_5) * 2),
                  (void *)((int)piVar3 + (param_2 + param_1) * 2),iVar1 * 2);
        }
      }
    }
    else {
      piVar3 = in_ECX;
      local_c = in_ECX;
      if (7 < (uint)in_ECX[5]) {
        local_c = (int *)*in_ECX;
        piVar3 = (int *)*in_ECX;
      }
      if (iVar1 != 0) {
        memmove((void *)((int)piVar3 + (param_1 + param_5) * 2),
                (void *)((int)local_c + (param_2 + param_1) * 2),iVar1 * 2);
      }
      if (7 < (uint)param_3[5]) {
        param_3 = (int *)*param_3;
      }
      piVar3 = in_ECX;
      if (7 < (uint)in_ECX[5]) {
        piVar3 = (int *)*in_ECX;
      }
      if (param_5 != 0) {
        memcpy((void *)((int)piVar3 + param_1 * 2),(void *)((int)param_3 + param_4 * 2),param_5 * 2)
        ;
      }
    }
    in_ECX[4] = uVar6;
    if (7 < (uint)in_ECX[5]) {
      *(undefined2 *)(*in_ECX + uVar6 * 2) = 0;
      return;
    }
    *(undefined2 *)((int)in_ECX + uVar6 * 2) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("string too long");
}


/* FUN_004870c0 @ 004870c0  kind=gamemisc  attributed-by=none  size=45 */

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


/* FUN_00487250 @ 00487250  kind=gamemisc  attributed-by=none  size=275 */

int FUN_00487250(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar3 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e6c30;
  local_10 = ExceptionList;
  uVar2 = (in_ECX[1] - *in_ECX) / 0x78;
  if (param_1 < uVar2) {
    iVar1 = *in_ECX;
    iVar4 = iVar1 + param_1 * 0x78;
    if (iVar4 == iVar1) {
      in_ECX[1] = iVar1;
      return iVar4;
    }
    iVar1 = in_ECX[1];
    if (iVar4 == iVar1) {
      return iVar4;
    }
    ExceptionList = &local_10;
    iVar4 = FUN_004555c0(iVar1,iVar1,iVar4,param_1);
  }
  else {
    if (param_1 <= uVar2) {
      return (in_ECX[1] - *in_ECX) * -0x77777777;
    }
    ExceptionList = &local_10;
    FUN_0046e880(param_1 - uVar2);
    local_8 = 0;
    FUN_00456d30(in_ECX[1],uVar3 - (in_ECX[1] - *in_ECX) / 0x78,(int)&param_1 + 3,0,param_1);
    iVar4 = in_ECX[1] + (uVar3 - (in_ECX[1] - *in_ECX) / 0x78) * 0x78;
  }
  in_ECX[1] = iVar4;
  ExceptionList = local_10;
  return iVar4;
}


/* FUN_00487380 @ 00487380  kind=gamemisc  attributed-by=none  size=240 */

int FUN_00487380(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *in_ECX;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar2 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e6c50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar4 = in_ECX[1] - *in_ECX;
  iVar3 = iVar4 * 0x2aaaaaab;
  uVar1 = iVar4 / 0xc;
  if (param_1 < uVar1) {
    iVar3 = FUN_006413b0(&param_1,*in_ECX + param_1 * 0xc,in_ECX[1]);
  }
  else if (uVar1 < param_1) {
    FUN_0063ddc0(param_1 - uVar1);
    local_8 = 0;
    FUN_00427a80(in_ECX[1],uVar2 - (in_ECX[1] - *in_ECX) / 0xc,(int)&param_1 + 3,0,param_1);
    iVar3 = in_ECX[1] + (uVar2 - (in_ECX[1] - *in_ECX) / 0xc) * 0xc;
    in_ECX[1] = iVar3;
    ExceptionList = local_10;
    return iVar3;
  }
  ExceptionList = local_10;
  return iVar3;
}


/* FUN_004874a0 @ 004874a0  kind=gamemisc  attributed-by=none  size=127 */

float10 FUN_004874a0(float param_1)

{
  float10 fVar1;
  
  if (param_1 < 0.0) {
    fVar1 = (float10)FUN_004874a0(-param_1);
    param_1 = -(float)fVar1;
    if (param_1 == 0.0) {
      param_1 = 0.0;
    }
    return (float10)param_1;
  }
  return (float10)((float)(int)(param_1 * 100.0 + 0.5) * 0.01);
}


/* FUN_00488c70 @ 00488c70  kind=gamemisc  attributed-by=none  size=141 */

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


/* FUN_00488d00 @ 00488d00  kind=gamemisc  attributed-by=none  size=89 */

void FUN_00488d00(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0x800910) + 0x3c);
  iVar2 = *(int *)(iVar1 + 0x68);
  iVar1 = *(int *)(iVar1 + 0x94);
  *(uint *)(iVar1 + iVar2 * 4) = (uint)(*(int *)(iVar1 + iVar2 * 4) == 0);
  iVar1 = *(int *)(*(int *)(in_ECX + 0x800910) + 0x3c);
  if (*(int *)(*(int *)(iVar1 + 0x94) + *(int *)(iVar1 + 0x68) * 4) != 0) {
    iVar1 = *(int *)(*(int *)(in_ECX + 0x8008bc) + 0x3c);
    *(undefined4 *)(*(int *)(iVar1 + 0x94) + *(int *)(iVar1 + 0x68) * 4) = 0;
  }
  return;
}


/* FUN_00498d0b @ 00498d0b  kind=gamemisc  attributed-by=none  size=10740 */

/* WARNING (jumptable): Unable to track spacebase fully for stack */

void FUN_00498d0b(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CRefTime *pCVar4;
  long lVar5;
  float *pfVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  int iVar10;
  int *piVar11;
  pair<unsigned___int64,unsigned___int64> *ppVar12;
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> *pbVar13;
  basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *this;
  int *piVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  uint *puVar17;
  undefined1 *puVar18;
  int unaff_EDI;
  int iVar19;
  float10 fVar20;
  float fVar21;
  undefined4 uStack00000008;
  int in_stack_00000010;
  undefined3 uStack00000014;
  char cStack00000017;
  float *in_stack_00000018;
  float *in_stack_0000001c;
  CRefTime *in_stack_00000020;
  int *in_stack_00000024;
  undefined4 *in_stack_00000028;
  int *in_stack_0000002c;
  int *in_stack_00000030;
  int iStack00000034;
  float *in_stack_00000040;
  float *in_stack_00000048;
  undefined1 *in_stack_00000054;
  uint in_stack_00000060;
  uint in_stack_00000064;
  float *in_stack_00000068;
  uint in_stack_0000006c;
  int iStack00000070;
  CRefTime *in_stack_00000074;
  undefined1 *puStack0000007c;
  float *pfStack00000080;
  float fStack00000084;
  float fStack00000088;
  float in_stack_0000008c;
  undefined1 *in_stack_00000090;
  undefined1 *in_stack_00000094;
  int *in_stack_0000009c;
  int *in_stack_000000a0;
  int in_stack_000000a4;
  float *in_stack_000000a8;
  float in_stack_000000ac;
  int in_stack_000000b4;
  undefined4 in_stack_000000bc;
  undefined4 in_stack_000000c4;
  float in_stack_000000d0;
  float in_stack_000000d4;
  undefined4 in_stack_000000d8;
  undefined1 *in_stack_000000e0;
  float in_stack_000000e4;
  int in_stack_000000fc;
  int in_stack_00000104;
  float *in_stack_00000110;
  undefined1 *in_stack_00000114;
  int in_stack_00000118;
  int iStack000001ac;
  int iStack000001b0;
  float in_stack_000001c0;
  undefined1 *in_stack_000001c4;
  undefined4 uStack000001cc;
  int iStack000001d0;
  uint in_stack_00004758;
  void *in_stack_00004760;
  _func_basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_>_ptr_basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_>_ptr
  *p_Var22;
  
  iStack00000034 = in_stack_00000118;
  puStack0000007c = in_stack_00000114;
  if (*(int *)(unaff_EDI + 0x800940) != 0) {
    iVar19 = *(int *)(*(int *)(unaff_EDI + 0x800940) + 0x188);
    *(undefined4 *)(unaff_EDI + 0x800a70) = *(undefined4 *)(iVar19 + 8);
    *(undefined4 *)(unaff_EDI + 0x800a74) = *(undefined4 *)(iVar19 + 0xc);
  }
  if ((0.0 <= in_stack_000000d0) && (*(char *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) != '1')) {
    FUN_00424b70();
    FUN_00451510();
    FUN_0042c460();
    FUN_0042c800();
    FUN_0042c7a0();
    FUN_0042c4a0();
    fVar20 = (float10)FUN_00412350();
    in_stack_00000018 = (float *)(float)fVar20;
    if (0.0 < (float)in_stack_00000018) {
      FUN_0042c5b0();
    }
  }
  if ((*(char *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) == '\"') &&
     (puStack0000007c != (undefined1 *)0x0 || in_stack_00000118 != 0)) {
    iVar19 = *(int *)(unaff_EDI + 0x8006d0);
    iVar3 = FUN_0043caa0();
    if (*(int *)(iVar19 + 0x6c) < iVar3) {
      *(undefined1 **)(iVar19 + 0x1a0) = puStack0000007c;
      *(int *)(iVar19 + 0x1a4) = iStack00000034;
    }
  }
  if (*(char *)(unaff_EDI + 0x14) != '\0') {
    iVar19 = *(int *)(unaff_EDI + 0x8006d0);
    *(undefined4 *)(iVar19 + 0x1a0) = *(undefined4 *)(iVar19 + 8);
    *(undefined4 *)(iVar19 + 0x1a4) = *(undefined4 *)(iVar19 + 0xc);
  }
  cVar2 = *(char *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68);
  if ((((cVar2 == '\x1e') || (cVar2 == '\x1f')) || (cVar2 == ' ')) || (cVar2 == '!')) {
    FUN_0043caa0();
    FUN_0042c5b0();
  }
  pCVar4 = (CRefTime *)FUN_004120b0();
  lVar5 = CRefTime::Millisecs(pCVar4);
  iVar19 = (int)((lVar5 >> 0x1f & 7U) + lVar5) >> 3;
  pCVar4 = (CRefTime *)FUN_004120b0();
  lVar5 = CRefTime::Millisecs(pCVar4);
  pfVar6 = (float *)(iVar19 + -1);
  iStack000001d0 = iVar19 + 1;
  iVar19 = (int)(lVar5 + (lVar5 >> 0x1f & 7U)) >> 3;
  pfStack00000080 = pfVar6;
  if ((int)pfVar6 <= iStack000001d0) {
    in_stack_000001c4 = (undefined1 *)(iVar19 + -1);
    iVar19 = iVar19 + 1;
    puVar9 = in_stack_000001c4;
    in_stack_000000fc = iVar19;
    do {
      puVar18 = puVar9;
      in_stack_00000054 = puVar9;
      pfStack00000080 = pfVar6;
      if ((int)puVar9 <= iVar19) {
        do {
          in_stack_00000054 = puVar9;
          in_stack_00000104 = FUN_0042f640();
          if (in_stack_00000104 != 0) {
            FUN_0046f440();
            FUN_0060a9f0();
            cVar2 = FUN_004688d0();
            iVar19 = in_stack_00000010;
            while (cVar2 != '\0') {
              pfVar6 = (float *)FUN_0042c6c0();
              in_stack_0000001c = pfVar6;
              FUN_0042c7a0();
              FUN_0043b4a0();
              fVar20 = (float10)FUN_004120f0();
              in_stack_00000020 = (CRefTime *)(float)fVar20;
              if ((float)in_stack_00000020 <= 16.0) {
                FUN_00428970();
                FUN_0040ea90();
                FUN_0042c460();
                FUN_0042c7a0();
                FUN_0042c7a0();
                FUN_0043b4a0();
                fVar20 = (float10)FUN_004120f0();
                in_stack_00000048 = (float *)(float)fVar20;
                if (((float)in_stack_00000090 < 0.0) ||
                   ((float)in_stack_00000020 < (float)in_stack_00000090)) {
                  in_stack_00000090 = in_stack_00000020;
                  _iStack000001ac = 0;
                  FUN_00411e30();
                }
                if (((float)in_stack_00000040 < 0.0) ||
                   ((float)in_stack_00000048 < (float)in_stack_00000040)) {
                  FUN_00428970();
                  FUN_0040ea90();
                  FUN_0042c460();
                  FUN_0042c800();
                  cVar2 = FUN_0059ee90();
                  if (cVar2 != '\0') {
                    FUN_00411e30();
                    uVar7 = *(uint *)((int)*pfVar6 + 0x20) & 0x80000001;
                    if ((int)uVar7 < 0) {
                      uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
                    }
                    uVar8 = 0;
                    if (uVar7 != 0) {
                      FUN_00428970();
                      FUN_00428970();
                      uVar8 = FUN_00458bf0();
                    }
                    puStack0000007c = (undefined1 *)(uVar8 & 0xffffff00);
                    in_stack_00000064 = in_stack_00000064 & 0xffffff00;
                    in_stack_00000060 = in_stack_00000060 & 0xffffff00;
                    in_stack_0000006c = 0;
                    in_stack_00000094 = puStack0000007c;
                    in_stack_00000068 = (float *)FUN_00428970();
                    in_stack_00000018 = (float *)FUN_00428970();
                    in_stack_00000028 = (undefined4 *)FUN_00428970();
                    in_stack_00000110 = (float *)FUN_00428970();
                    do {
                      in_stack_00000020 = (CRefTime *)0x0;
                      do {
                        iVar3 = 0;
                        do {
                          in_stack_0000008c = *in_stack_00000018;
                          in_stack_000000bc = *in_stack_00000028;
                          FUN_00412080();
                          FUN_0043b610();
                          FUN_0042c580();
                          FUN_0042c580();
                          FUN_0042c580();
                          FUN_0043b610();
                          FUN_0042c800();
                          FUN_0042c800();
                          FUN_0042c4a0();
                          FUN_004248a0();
                          if (0.0 < *in_stack_00000110) {
                            FUN_00488d60();
                            pfVar6 = (float *)FUN_00428970();
                            in_stack_0000008c = *pfVar6;
                            in_stack_00000094 = (undefined1 *)((uint)in_stack_00000094 & 0xff);
                            if (in_stack_0000008c < 0.0) {
                              in_stack_00000094 = (undefined1 *)0x1;
                            }
                            pfVar6 = (float *)FUN_00428970();
                            in_stack_00000064 = in_stack_00000064 & 0xff;
                            if (*pfVar6 < 0.0) {
                              in_stack_00000064 = 1;
                            }
                            in_stack_00000060 = in_stack_00000060 & 0xff;
                            if (0.0 < in_stack_0000008c) {
                              in_stack_00000060 = 1;
                            }
                            puStack0000007c = (undefined1 *)((uint)puStack0000007c & 0xff);
                            if (0.0 < *pfVar6) {
                              puStack0000007c = in_stack_000000e0;
                            }
                          }
                          iVar3 = iVar3 + 1;
                        } while (iVar3 < 2);
                        in_stack_00000020 = in_stack_00000020 + 1;
                      } while ((int)in_stack_00000020 < 2);
                      in_stack_0000006c = in_stack_0000006c + 1;
                    } while ((int)in_stack_0000006c < 2);
                    if (((((char)in_stack_00000094 != '\0') && ((char)in_stack_00000060 != '\0')) &&
                        ((char)in_stack_00000064 != '\0')) && ((char)puStack0000007c != '\0')) {
                      *(undefined4 *)(iVar19 + 0x800a70) = 0;
                      in_stack_00000040 = in_stack_00000048;
                      *(undefined4 *)(iVar19 + 0x800a74) = 0;
                      FUN_00411e30();
                    }
                  }
                }
              }
              FUN_00468d30();
              FUN_0060a9f0();
              cVar2 = FUN_004688d0();
              pfVar6 = pfStack00000080;
            }
          }
          puVar9 = in_stack_00000054 + 1;
          iVar19 = in_stack_000000fc;
          puVar18 = in_stack_000001c4;
          in_stack_00000054 = puVar9;
        } while ((int)puVar9 <= in_stack_000000fc);
      }
      pfVar6 = (float *)((int)pfVar6 + 1);
      puVar9 = puVar18;
      pfStack00000080 = pfVar6;
    } while ((int)pfVar6 <= iStack000001d0);
  }
  iVar19 = in_stack_00000010;
  if (*(float *)(*(int *)(in_stack_00000010 + 0x8006d0) + 0x16c) <= 0.0) {
    *(undefined4 *)(in_stack_00000010 + 0x800a70) = 0;
    *(undefined4 *)(in_stack_00000010 + 0x800a74) = 0;
    FUN_0040ea90();
    FUN_004511e0();
  }
  in_stack_00000068 = (float *)FUN_00428970();
  iVar3 = (int)*in_stack_00000068 + -1;
  iStack00000070 = iVar3;
  if (iVar3 <= (int)*in_stack_00000068 + 1) {
    in_stack_000000a0 = (int *)FUN_00428970();
    do {
      in_stack_000000b4 = *in_stack_000000a0 + -1;
      if (in_stack_000000b4 <= *in_stack_000000a0 + 1) {
        do {
          iVar10 = FUN_00434d10();
          if (iVar10 != 0) {
            in_stack_000000a4 = iVar10 + 0x30;
            iVar10 = -1;
            FUN_0060a9f0();
            FUN_0042f030();
            cVar2 = FUN_004688d0();
            iVar3 = iStack00000070;
            while (iStack00000070 = iVar3, cVar2 != '\0') {
              iStack00000034 = iVar10 + 1;
              puVar9 = (undefined1 *)FUN_0042c6d0();
              in_stack_00000054 = puVar9;
              cVar2 = FUN_0043e550();
              iVar10 = iStack00000034;
              if (cVar2 != '\0') {
                in_stack_00000020 = (CRefTime *)(puVar9 + 0x118);
                FUN_0042c7a0();
                FUN_0042c4a0();
                fVar20 = (float10)FUN_00424860();
                in_stack_00000018 = (float *)(float)fVar20;
                iVar10 = iStack00000034;
                in_stack_0000001c = in_stack_00000018;
                if ((float)in_stack_00000018 <= 16.0) {
                  FUN_0042c7a0();
                  FUN_0042c4a0();
                  fVar20 = (float10)FUN_00424860();
                  in_stack_00000018 = (float *)(float)fVar20;
                  iVar10 = iStack00000034;
                  if ((float)in_stack_00000018 <= 100.0) {
                    FUN_0042c7a0();
                    FUN_0042c4a0();
                    fVar20 = (float10)FUN_00424860();
                    in_stack_00000048 = (float *)(float)fVar20;
                    cVar2 = FUN_0043e4a0();
                    if (cVar2 == '\0') {
                      pfStack00000080 = (float *)((float)in_stack_00000048 + 16.0);
                      pfVar6 = (float *)((float)in_stack_0000001c + 16.0);
                    }
                    else {
                      pfStack00000080 = in_stack_00000048;
                      pfVar6 = in_stack_0000001c;
                    }
                    if (((float)in_stack_00000074 < 0.0) ||
                       ((float)pfVar6 < (float)in_stack_00000074)) {
                      _iStack000001ac = 0;
                      in_stack_00000074 = (CRefTime *)pfVar6;
                      FUN_0042c500();
                      FUN_00411e30();
                      FUN_0042c500();
                      FUN_00411e30();
                    }
                    if ((((float)in_stack_00000040 < 0.0) ||
                        (iVar10 = iStack00000034, (float)pfStack00000080 < (float)in_stack_00000040)
                        ) && ((cVar2 = FUN_0059ee90(), iVar10 = iStack00000034, cVar2 != '\0' &&
                              (in_stack_00000060 = FUN_004ec400(), iVar10 = iStack00000034,
                              in_stack_00000060 != 0)))) {
                      FUN_00423e70();
                      FUN_004120b0();
                      FUN_004120b0();
                      FUN_004120b0();
                      FUN_004120f0();
                      FUN_004122c0();
                      FUN_004120f0();
                      FUN_004122c0();
                      FUN_004120f0();
                      FUN_00424a60();
                      FUN_00424730();
                      switch(*in_stack_00000054) {
                      case 3:
                      case 4:
                        FUN_00424610();
                      case 0xc:
                      case 0xd:
                        FUN_00424810();
                        FUN_00424a60();
                        FUN_004244f0();
                        FUN_0047b5f0();
                        break;
                      default:
                        FUN_00424610();
                      }
                      FUN_00424820();
                      FUN_00424810();
                      uVar7 = FUN_00424a60();
                      puStack0000007c = (undefined1 *)(uVar7 & 0xffffff00);
                      in_stack_0000006c = in_stack_0000006c & 0xffffff00;
                      in_stack_00000064 = in_stack_00000064 & 0xffffff00;
                      in_stack_00000094 = (undefined1 *)0x0;
                      in_stack_00000090 = puStack0000007c;
                      in_stack_00000018 = (float *)FUN_00428970();
                      do {
                        in_stack_00000020 = (CRefTime *)0x0;
                        do {
                          iVar3 = 0;
                          do {
                            FUN_0047b5f0();
                            FUN_00424820();
                            FUN_00424810();
                            FUN_0040ea90();
                            FUN_004248a0();
                            FUN_004248a0();
                            if (0.0 < *in_stack_00000018) {
                              FUN_00488d60();
                              in_stack_00000028 = (undefined4 *)FUN_00428970();
                              in_stack_00000028 = (undefined4 *)*in_stack_00000028;
                              puStack0000007c = (undefined1 *)((uint)puStack0000007c & 0xff);
                              if ((float)in_stack_00000028 < 0.0) {
                                puStack0000007c = (undefined1 *)0x1;
                              }
                              pfVar6 = (float *)FUN_00428970();
                              in_stack_0000006c = in_stack_0000006c & 0xff;
                              if (*pfVar6 < 0.0) {
                                in_stack_0000006c = 1;
                              }
                              in_stack_00000064 = in_stack_00000064 & 0xff;
                              if (0.0 < (float)in_stack_00000028) {
                                in_stack_00000064 = 1;
                              }
                              in_stack_00000090 = (undefined1 *)((uint)in_stack_00000090 & 0xff);
                              if (0.0 < *pfVar6) {
                                in_stack_00000090 = in_stack_000000e0;
                              }
                            }
                            iVar10 = iStack00000034;
                            iVar3 = iVar3 + 1;
                          } while (iVar3 < 2);
                          in_stack_00000020 = in_stack_00000020 + 1;
                        } while ((int)in_stack_00000020 < 2);
                        in_stack_00000094 = in_stack_00000094 + 1;
                      } while ((int)in_stack_00000094 < 2);
                      if (((((char)puStack0000007c != '\0') && ((char)in_stack_00000064 != '\0')) &&
                          ((char)in_stack_0000006c != '\0')) && ((char)in_stack_00000090 != '\0')) {
                        in_stack_00000040 = pfStack00000080;
                        FUN_0042c500();
                        FUN_00411e30();
                        *(undefined4 *)(iVar19 + 0x800a70) = 0;
                        *(undefined4 *)(iVar19 + 0x800a74) = 0;
                        FUN_0042c500();
                        FUN_00411e30();
                      }
                    }
                  }
                }
              }
              FUN_0044b580();
              FUN_0042f030();
              cVar2 = FUN_004688d0();
              iVar3 = iStack00000070;
            }
          }
          in_stack_000000b4 = in_stack_000000b4 + 1;
        } while (in_stack_000000b4 <= *in_stack_000000a0 + 1);
      }
      iVar3 = iVar3 + 1;
      iStack00000070 = iVar3;
    } while (iVar3 <= (int)*in_stack_00000068 + 1);
  }
  if ((*(int *)(iVar19 + 0x800a70) == 0 && *(int *)(iVar19 + 0x800a74) == 0) &&
     (piVar11 = (int *)FUN_00428970(), *piVar11 < 0)) {
    if (iStack000001ac != 0 || iStack000001b0 != 0) {
      *(int *)(iVar19 + 0x800a70) = iStack000001ac;
      *(int *)(iVar19 + 0x800a74) = iStack000001b0;
    }
    piVar11 = (int *)FUN_00428970();
    if (-1 < *piVar11) {
      FUN_00411e30();
    }
  }
  if ((*in_stack_0000009c < 0) && (piVar11 = (int *)FUN_00428970(), -1 < *piVar11)) {
    FUN_00411e30();
  }
  if ((0.0 <= in_stack_000000d4) && (*(int *)(iVar19 + 0x8006d8) != 0)) {
    FUN_0042c7a0();
    FUN_0042c4a0();
    fVar20 = (float10)FUN_00424860();
    in_stack_00000018 = (float *)(float)fVar20;
    if ((float)in_stack_00000018 < in_stack_000000d4 * in_stack_000000d4) {
      FUN_0042c7a0();
      FUN_0042c4a0();
      FUN_00423f20();
      FUN_00451510();
      FUN_0042c460();
      FUN_0042c800();
      FUN_0042c5b0();
    }
  }
  FUN_00632870();
  FUN_0042f030();
  FUN_0060a9f0();
  cVar2 = FUN_004a8f20();
  while (cVar2 != '\0') {
    in_stack_00000030 = (int *)FUN_00468c80();
    iVar3 = *in_stack_00000030;
    if ((iVar3 != *(int *)(iVar19 + 0x8006d0)) &&
       (((iVar10 = *(int *)(iVar19 + 0x8006d0), *(char *)(iVar10 + 0x68) != 'j' ||
         (*(int *)(iVar3 + 0x198) != *(int *)(iVar10 + 8))) ||
        (*(int *)(iVar3 + 0x19c) != *(int *)(iVar10 + 0xc))))) {
      pCVar4 = (CRefTime *)FUN_004120b0();
      CRefTime::Millisecs(pCVar4);
      pCVar4 = (CRefTime *)FUN_004120b0();
      CRefTime::Millisecs(pCVar4);
      pCVar4 = (CRefTime *)FUN_004120b0();
      CRefTime::Millisecs(pCVar4);
      iVar3 = FUN_004718b0();
      fVar21 = ((float)iVar3 / 255.0) * in_stack_000000e4;
      in_stack_00000048 = (float *)0x43480000;
      if (fVar21 < 0.3) {
        in_stack_00000048 = (float *)(((fVar21 * 0.9) / 0.3) * 200.0 + 20.0);
      }
      FUN_00428970();
      FUN_0040ea90();
      FUN_0042c460();
      FUN_0042c800();
      cVar2 = FUN_0059ee90();
      if (cVar2 != '\0') {
        FUN_00428970();
        FUN_0040ea90();
        FUN_0042c460();
        FUN_00412080();
        FUN_0043b610();
        piVar11 = in_stack_00000030;
        FUN_0042c800();
        FUN_0042c800();
        FUN_0042c4a0();
        FUN_004248a0();
        if ((*(char *)(*piVar11 + 0x68) == 'k') || (*(char *)(*piVar11 + 0x68) == 'j')) {
          pfVar6 = (float *)FUN_00428970();
          *pfVar6 = *pfVar6 + 2.0;
        }
        if ((((*(int *)(*piVar11 + 0x198) == 0 && *(int *)(*piVar11 + 0x19c) == 0) ||
             (iVar3 = FUN_0042f000(), iVar3 == 0)) || (*(char *)(iVar3 + 0x68) != 'j')) &&
           (pfVar6 = (float *)FUN_00428970(), 0.0 < *pfVar6)) {
          FUN_00488d60();
          if ((char)piVar11[2] == '\0') {
            pfVar6 = (float *)FUN_00428970();
            if ((-1.0 <= *pfVar6) && (*pfVar6 <= 1.0)) {
              pfVar6 = (float *)FUN_00428970();
              if ((-1.0 <= *pfVar6) && (*pfVar6 <= 1.0)) goto LAB_0049a235;
            }
          }
          else {
LAB_0049a235:
            FUN_004279e0();
            FUN_004279f0();
            FUN_0040ea90();
            FUN_00451510();
            FUN_0046d220();
            FUN_004279e0();
            FUN_004279f0();
            FUN_0040ea90();
            FUN_00451510();
            FUN_00412850();
            in_stack_00000068 = (float *)FUN_00428970();
            if (*in_stack_00000068 <= 50.0 && *in_stack_00000068 != 50.0) {
              *in_stack_00000068 = 50.0;
            }
            if ((char)in_stack_00000030[2] == '\0') {
              if (((*(char *)(iVar19 + 0x8007b4) == '\0') &&
                  (*(char *)(*in_stack_00000030 + 0x60) != '\0')) ||
                 (*in_stack_00000030 == *(int *)(iVar19 + 0x8006d0))) goto LAB_0049b14a;
              if (*(char *)(*in_stack_00000030 + 0x60) == '\x01') {
                FUN_00444680();
              }
              FUN_00636040();
              if (*(char *)(iVar19 + 0x8007b4) == '\0') {
                FUN_00428d80();
                FUN_00428da0();
                cVar2 = FUN_004688d0();
                while (cVar2 != '\0') {
                  in_stack_00000020 = (CRefTime *)FUN_0042c6c0();
                  FUN_0042b800();
                  cVar2 = FUN_004391d0();
                  if (cVar2 != '\0') {
                    piVar11 = (int *)FUN_0040f8e0();
                    (**(code **)(*piVar11 + 8))();
                    FUN_006368e0();
                    FUN_00411a90();
                  }
                  FUN_00468d30();
                  FUN_00428da0();
                  cVar2 = FUN_004688d0();
                }
              }
              else {
                FUN_00428d80();
                FUN_00428da0();
                cVar2 = FUN_004688d0();
                while (cVar2 != '\0') {
                  in_stack_00000018 = (float *)FUN_0042c6c0();
                  FUN_0042b800();
                  cVar2 = FUN_004391d0();
                  if (cVar2 != '\0') {
                    FUN_00411a90();
                  }
                  FUN_00468d30();
                  FUN_00428da0();
                  cVar2 = FUN_004688d0();
                }
              }
            }
            else if (*(char *)(*in_stack_00000030 + 0x60) == '\x01') {
              cVar2 = FUN_00444680();
              if (cVar2 == '\0') {
                FUN_00636040();
              }
              else {
                FUN_00636040();
              }
            }
            else if (*(char *)(*in_stack_00000030 + 0x60) == '\x06') {
              FUN_00636040();
            }
            else {
              FUN_00636040();
            }
            piVar11 = (int *)FUN_00411c70();
            (**(code **)(*piVar11 + 8))();
            FUN_00636b70();
            piVar11 = (int *)FUN_0040f8e0();
            (**(code **)(*piVar11 + 8))();
            FUN_006368e0();
            FUN_00608f20();
            FUN_0040eb60();
            FUN_00633dd0();
            FUN_00593e50();
            FUN_0040eb60();
            FUN_00633dd0();
            FUN_00593e50();
            FUN_0040eb60();
            FUN_00633dd0();
            FUN_00593e50();
            FUN_0046f440();
            FUN_0060a9f0();
            cVar2 = FUN_004688d0();
            while (cVar2 != '\0') {
              in_stack_00000028 = (undefined4 *)FUN_0042c6c0();
              in_stack_00000018 = (float *)*in_stack_00000028;
              iVar3 = FUN_00411320();
              if (iVar3 != 0) {
                piVar11 = (int *)FUN_00411320();
                (**(code **)(*piVar11 + 0x34))();
                FUN_00636990();
              }
              FUN_00468d30();
              FUN_0060a9f0();
              cVar2 = FUN_004688d0();
            }
            FUN_0040eb60();
            iStack00000070 = FUN_00633d70();
            FUN_00593e50();
            piVar11 = (int *)FUN_00411c70();
            (**(code **)(*piVar11 + 8))();
            FUN_00636b70();
            FUN_0040eb60();
            in_stack_000000c4 = FUN_00633d70();
            FUN_00593e50();
            piVar11 = (int *)FUN_00411c70();
            (**(code **)(*piVar11 + 8))();
            FUN_00636b70();
            FUN_00411c70();
            FUN_0040ef70();
            FUN_00428970();
            FUN_0040ea50();
            FUN_00468df0();
            FUN_00411c70();
            FUN_004288b0();
            piVar11 = (int *)FUN_00411c70();
            (**(code **)(*piVar11 + 4))();
            iVar3 = *in_stack_0000002c;
            in_stack_00000024 = (int *)(iVar3 + 0x1168);
            _uStack00000014 = (int *)(iVar3 + 0x1169);
            piVar11 = in_stack_00000024;
            do {
              iVar10 = *piVar11;
              piVar11 = (int *)((int)piVar11 + 1);
            } while ((char)iVar10 != '\0');
            if (piVar11 == _uStack00000014) {
              if ((*(ushort *)(iVar3 + 0x7e) & 0x200) == 0) {
                if (*(char *)(iVar3 + 0x60) == '\x03') {
                  FUN_0040eb60();
                  FUN_005a0ed0();
                  FUN_00636a00();
                  FUN_00593e50();
                }
                else {
                  FUN_0040eb60();
                  FUN_0040eb60();
                  FUN_00636a00();
                  FUN_00593e50();
                }
              }
              else {
                FUN_0040eb60();
                FUN_005a0ed0();
                FUN_00636a00();
                FUN_00593e50();
              }
              FUN_00593e50();
            }
            else {
              FUN_00403350();
              FUN_0040eb60();
              FUN_00487ea0();
              FUN_00593e50();
              FUN_00403eb0();
            }
            std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
            basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
                      ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        *)&stack0x00000b68,3,1);
            FUN_00608f20();
            FUN_0040eb60();
            FUN_00633dd0();
            FUN_00593e50();
            FUN_0040eac0();
            if ((*(char *)(*in_stack_0000002c + 0x60) == '\0') ||
               (*(char *)(*in_stack_0000002c + 0x60) == '\x06')) {
LAB_0049ad01:
              ppVar12 = (pair<unsigned___int64,unsigned___int64> *)FUN_0040eac0();
              std::pair<unsigned___int64,unsigned___int64>::
              operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                        ((pair<unsigned___int64,unsigned___int64> *)&stack0x00001414,ppVar12);
            }
            else {
              fVar20 = (float10)FUN_0043ca60();
              in_stack_00000024 = (int *)(float)fVar20;
              fVar20 = (float10)FUN_0043ca60();
              _uStack00000014 = (int *)(float)fVar20;
              if ((float)_uStack00000014 + 0.3 < (float)in_stack_00000024) goto LAB_0049ad01;
              fVar20 = (float10)FUN_0043ca60();
              in_stack_00000024 = (int *)(float)fVar20;
              fVar20 = (float10)FUN_0043ca60();
              _uStack00000014 = (int *)(float)fVar20;
              if ((float)_uStack00000014 + 0.1 < (float)in_stack_00000024) goto LAB_0049ad01;
              fVar20 = (float10)FUN_0043ca60();
              in_stack_00000024 = (int *)(float)fVar20;
              fVar20 = (float10)FUN_0043ca60();
              _uStack00000014 = (int *)(float)fVar20;
              if ((float)_uStack00000014 - 0.1 < (float)in_stack_00000024) goto LAB_0049ad01;
            }
            FUN_0046f440();
            FUN_0060a9f0();
            cVar2 = FUN_004688d0();
            while (cVar2 != '\0') {
              FUN_0042c6c0();
              FUN_00411320();
              _uStack00000014 = (int *)FUN_00488bb0();
              if (_uStack00000014 != (int *)0x0) {
                FUN_004288e0();
                (**(code **)(*_uStack00000014 + 4))();
              }
              FUN_00468d30();
              FUN_0060a9f0();
              cVar2 = FUN_004688d0();
            }
            FUN_0040eb60();
            FUN_0059aa60();
            FUN_00480e00();
            FUN_00424ba0();
            FUN_00593e50();
            FUN_00593e50();
            if (*(byte *)(*in_stack_0000002c + 0x1a8) != 0) {
              uVar7 = (uint)*(byte *)(*in_stack_0000002c + 0x1a8);
              p_Var22 = endl_exref;
              pbVar13 = (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)FUN_0040e440();
              this = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                               (pbVar13,uVar7);
              std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                        ((basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)this,p_Var22);
            }
            FUN_0040eb60();
            FUN_00411bc0();
            FUN_00636a00();
            FUN_00593e50();
            FUN_00593e50();
            FUN_0040eb60();
            FUN_00411b90();
            FUN_00593e50();
            FUN_00444db0();
            iVar3 = FUN_0068d910();
            std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                      ((basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)&stack0x00000b78,
                       (int)*(float *)(*in_stack_0000002c + 0x16c));
            pbVar13 = (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)FUN_0040e440();
            std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(pbVar13,iVar3);
            FUN_0040eb60();
            FUN_00411bc0();
            FUN_00636a00();
            FUN_00593e50();
            FUN_00593e50();
            FUN_00411c70();
            FUN_0042f590();
            FUN_00423e70();
            piVar11 = in_stack_0000002c;
            _uStack00000014 = *(int **)(*in_stack_0000002c + 0x16c);
            fVar20 = (float10)FUN_00444db0();
            in_stack_00000024 = (int *)(float)fVar20;
            FUN_00411c70();
            FUN_0042f590();
            FUN_00424730();
            piVar14 = (int *)FUN_00411c70();
            (**(code **)(*piVar14 + 4))();
            FUN_00411c70();
            FUN_0042f590();
            FUN_00423e70();
            in_stack_00000010 = *(int *)(*piVar11 + 0x16c);
            fVar20 = (float10)FUN_00444db0();
            in_stack_00000020 = (CRefTime *)(float)fVar20;
            FUN_00411c70();
            FUN_0042f590();
            FUN_00424730();
            piVar11 = (int *)FUN_00411c70();
            (**(code **)(*piVar11 + 4))();
            FUN_004da480();
            std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
            basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
                      ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        *)&stack0x00000b60);
            FUN_004da480();
          }
        }
      }
    }
LAB_0049b14a:
    FUN_00468dd0();
    FUN_0060a9f0();
    cVar2 = FUN_004a8f20();
  }
  if (*(char *)(iVar19 + 0x800704) == '\0') {
    if (DAT_0076b040 == '\0') {
      if (*(char *)(iVar19 + 0x14) == '\0') {
        FUN_0042c7a0();
        FUN_0042c4a0();
      }
      else {
        FUN_00423e70();
        FUN_00428970();
        FUN_00424610();
        FUN_0040ea90();
        FUN_00488e50();
        FUN_00411e30();
      }
    }
  }
  else {
    FUN_00423e70();
    FUN_00428970();
    FUN_00424610();
    if (*(char *)(iVar19 + 0xb) != '\0') {
      FUN_0040ea90();
      FUN_00488e50();
      FUN_00451510();
      FUN_00412850();
    }
    if (*(char *)(iVar19 + 0xc) != '\0') {
      FUN_0040ea90();
      FUN_00488e50();
      FUN_00451510();
      FUN_00412850();
    }
    if (*(char *)(iVar19 + 0xd) != '\0') {
      FUN_0040ea90();
      FUN_00488e50();
      FUN_00451510();
      FUN_00412850();
    }
    if (*(char *)(iVar19 + 0xe) != '\0') {
      FUN_0040ea90();
      FUN_00488e50();
      FUN_00451510();
      FUN_00412850();
    }
    if (*(char *)(iVar19 + 0x13) != '\0') {
      FUN_0040ea90();
      FUN_00488e50();
      FUN_00451510();
      FUN_00412850();
    }
    if (*(char *)(iVar19 + 0x12) != '\0') {
      FUN_0040ea90();
      FUN_00488e50();
      FUN_00451510();
      FUN_00412850();
    }
  }
  DAT_0076b138 = *(undefined1 *)(iVar19 + 0xf);
  DAT_0076b139 = *(undefined1 *)(iVar19 + 0x11);
  DAT_0076b13a = *(undefined1 *)(iVar19 + 0x10);
  if ((cStack00000017 == '\0') && (*(char *)(iVar19 + 0x800704) == '\0')) {
    _uStack00000014 = (int *)((uint)_uStack00000014 & 0xffffff);
    if (((*(char *)(iVar19 + 0x18) != '\0') && (DAT_0076b14e == '\0')) &&
       ((iVar3 = *(int *)(iVar19 + 0x8006d0), *(char *)(iVar3 + 0x68) == '\0' ||
        (iVar10 = FUN_0043d1a0(), iVar10 < *(int *)(iVar3 + 0x6c))))) {
      *(undefined1 *)(iVar3 + 0x68) = 0x69;
      *(undefined4 *)(*(int *)(iVar19 + 0x8006d0) + 0x6c) = 0;
    }
    DAT_0076b14e = *(char *)(iVar19 + 0x18);
    iVar3 = FUN_00487f50();
    if (iVar3 == 1 || iVar3 + -1 < 0) {
LAB_0049bf70:
      if (((*(char *)(*(int *)(iVar19 + 0x8006d0) + 0x68) != '0') && (*(char *)(iVar19 + 4) != '\0')
          ) && (FUN_00445410(), *(char *)(*(int *)(iVar19 + 0x8006d0) + 0x1020) == '\x14')) {
        FUN_0046ebe0();
        FUN_0042f3e0();
        FUN_0042c5e0();
      }
    }
    else {
      iStack00000070 = 1;
      iVar3 = 1;
      do {
        piVar11 = (int *)FUN_00468c60();
        if (*piVar11 == 0) goto LAB_0049bf4d;
        if (*(char *)(iVar19 + 4 + iVar3) == '\0') {
          puVar17 = (uint *)FUN_00468c60();
          if (*puVar17 == (uint)*(byte *)(*(int *)(iVar19 + 0x8006d0) + 0x68)) {
            puVar15 = (undefined4 *)FUN_00468c60();
            switch(*puVar15) {
            case 8:
              *(undefined1 *)(*(int *)(iVar19 + 0x8006d0) + 0x68) = 0x68;
              *(undefined4 *)(*(int *)(iVar19 + 0x8006d0) + 0x6c) = 0;
              break;
            case 10:
              in_stack_000000ac = *(float *)(iVar19 + 0x8006d0);
              iVar10 = FUN_0043d1a0();
              if (iVar10 < *(int *)((int)in_stack_000000ac + 0x6c)) {
                *(undefined1 *)((int)in_stack_000000ac + 0x68) = 3;
                uVar16 = FUN_0043d1a0();
                *(undefined4 *)(*(int *)(iVar19 + 0x8006d0) + 0x6c) = uVar16;
              }
              break;
            case 0x18:
              *(undefined1 *)(*(int *)(iVar19 + 0x8006d0) + 0x68) = 0x17;
              *(undefined4 *)(*(int *)(iVar19 + 0x8006d0) + 0x6c) = 0;
              break;
            case 0x19:
              *(undefined1 *)(*(int *)(iVar19 + 0x8006d0) + 0x68) = 0x37;
              *(undefined4 *)(*(int *)(iVar19 + 0x8006d0) + 0x6c) = 0;
              break;
            case 0x1b:
              *(undefined1 *)(*(int *)(iVar19 + 0x8006d0) + 0x68) = 0x1a;
              *(undefined4 *)(*(int *)(iVar19 + 0x8006d0) + 0x6c) = 0;
              break;
            case 0x23:
              *(undefined1 *)(*(int *)(iVar19 + 0x8006d0) + 0x68) = 0;
              *(undefined4 *)(*(int *)(iVar19 + 0x8006d0) + 0x6c) = 0;
              break;
            case 0x24:
              *(undefined1 *)(*(int *)(iVar19 + 0x8006d0) + 0x68) = 0x25;
              *(undefined4 *)(*(int *)(iVar19 + 0x8006d0) + 0x6c) = 0;
              break;
            case 0x3b:
              iVar10 = *(int *)(iVar19 + 0x8006d0);
              if (*(char *)(iVar10 + 0x141) != '\x01') {
                *(undefined1 *)(iVar10 + 0x68) = 0x3c;
                FUN_0043caa0();
                FUN_0049bf44();
                return;
              }
              *(undefined1 *)(iVar10 + 0x68) = 0x3d;
              *(undefined4 *)(*(int *)(iVar19 + 0x8006d0) + 0x6c) = 0;
              break;
            case 0x3f:
              *(undefined1 *)(*(int *)(iVar19 + 0x8006d0) + 0x68) = 0xb;
              FUN_0043caa0();
              FUN_0049bf44();
              return;
            case 0x40:
              *(undefined1 *)(*(int *)(iVar19 + 0x8006d0) + 0x68) = 0x10;
              FUN_0043caa0();
              FUN_0049bf44();
              return;
            }
          }
          goto LAB_0049bf4d;
        }
        _uStack00000014 = (int *)CONCAT13(1,uStack00000014);
        cVar2 = FUN_0043e350();
        if ((cVar2 == '\0') && (iVar3 == 1 || iVar3 + -1 < 0)) goto LAB_0049bf4d;
        FUN_00468c60();
        cVar2 = FUN_0043e5a0();
        if (cVar2 == '\0') goto LAB_0049bf4d;
        if (*(char *)(*(int *)(iVar19 + 0x8006d0) + 0x1020) == '\x14') {
          FUN_0046ebe0();
          FUN_0042f3e0();
          FUN_0042c5e0();
        }
        puVar15 = (undefined4 *)FUN_00468c60();
        switch(*puVar15) {
        case 3:
        case 4:
        case 0x17:
        case 0x1f:
        case 0x21:
        case 0x25:
        case 0x2d:
        case 0x2e:
        case 0x41:
        case 0x42:
        case 0x5e:
        case 0x5f:
          FUN_004456a0();
          break;
        case 5:
          if (0.0 < *(float *)(*(int *)(iVar19 + 0x8006d0) + 0x170)) {
            *(undefined1 *)(*(int *)(iVar19 + 0x8006d0) + 0x68) = 5;
            goto code_r0x0049bd98;
          }
          break;
        default:
          FUN_00468c60();
          in_stack_00000048 = *(float **)(iVar19 + 0x8006d0);
          fVar20 = (float10)FUN_00444ae0();
          in_stack_000000ac = (float)fVar20;
          if (in_stack_000000ac <= in_stack_00000048[0x5c]) {
            puVar9 = (undefined1 *)FUN_00468c60();
            pfVar6 = in_stack_00000048;
code_r0x0049bd93:
            *(undefined1 *)(pfVar6 + 0x1a) = *puVar9;
            goto code_r0x0049bd98;
          }
          break;
        case 8:
        case 0x18:
        case 0x19:
        case 0x1b:
        case 0x3b:
        case 0x3f:
        case 0x40:
          puVar17 = (uint *)FUN_00468c60();
          if ((uint)*(byte *)(*(int *)(iVar19 + 0x8006d0) + 0x68) != *puVar17) {
            puVar9 = (undefined1 *)FUN_00468c60();
            pfVar6 = *(float **)(iVar19 + 0x8006d0);
            goto code_r0x0049bd93;
          }
          break;
        case 10:
          if (*(char *)(*(int *)(iVar19 + 0x8006d0) + 0x68) != '\n') {
            *(undefined1 *)(*(int *)(iVar19 + 0x8006d0) + 0x68) = 10;
            goto code_r0x0049bd98;
          }
          break;
        case 0xb:
          *(undefined1 *)(*(int *)(iVar19 + 0x8006d0) + 0x68) = 0xb;
code_r0x0049bd98:
          *(undefined4 *)(*(int *)(iVar19 + 0x8006d0) + 0x6c) = 0;
          *(undefined4 *)(*(int *)(iVar19 + 0x8006d0) + 0x128) = 0;
          break;
        case 0x11:
          if (0.0 < *(float *)(*(int *)(iVar19 + 0x8006d0) + 0x170)) {
            *(undefined1 *)(*(int *)(iVar19 + 0x8006d0) + 0x68) = 0x11;
            goto code_r0x0049bd98;
          }
          break;
        case 0x14:
          if (0.0 < *(float *)(*(int *)(iVar19 + 0x8006d0) + 0x170)) {
            *(undefined1 *)(*(int *)(iVar19 + 0x8006d0) + 0x68) = 0x14;
            goto code_r0x0049bd98;
          }
          break;
        case 0x1c:
          if ((0.0 < *(float *)(*(int *)(iVar19 + 0x8006d0) + 0x170)) &&
             (puVar17 = (uint *)FUN_00468c60(),
             (uint)*(byte *)(*(int *)(iVar19 + 0x8006d0) + 0x68) != *puVar17)) {
            puVar9 = (undefined1 *)FUN_00468c60();
            *(undefined1 *)(*(int *)(iVar19 + 0x8006d0) + 0x68) = *puVar9;
            *(undefined4 *)(*(int *)(iVar19 + 0x8006d0) + 0x6c) = 0;
          }
          break;
        case 0x22:
          in_stack_00000018 = *(float **)(iVar19 + 0x8006d0);
          iVar10 = FUN_0043d1a0();
          if (iVar10 <= (int)in_stack_00000018[0x1b]) {
            *(undefined1 *)(in_stack_00000018 + 0x1a) = 0x22;
            *(undefined4 *)(*(int *)(iVar19 + 0x8006d0) + 0x6c) = 0;
            iVar10 = *(int *)(iVar19 + 0x8006d0);
            *(undefined4 *)(iVar10 + 0x1a0) = *(undefined4 *)(iVar10 + 8);
            *(undefined4 *)(iVar10 + 0x1a4) = *(undefined4 *)(iVar10 + 0xc);
          }
          break;
        case 0x30:
          puVar9 = (undefined1 *)FUN_00468c60();
          *(undefined1 *)(*(int *)(iVar19 + 0x8006d0) + 0x68) = *puVar9;
          FUN_00411e30();
          iVar3 = *(int *)(iVar19 + 0x8006d0);
          fVar20 = (float10)FUN_00423f20();
          in_stack_00000018 = (float *)(float)fVar20;
          *(int *)(iVar3 + 0x11d8) = (int)(((float)in_stack_00000018 / 50.0) * 1000.0);
          iVar3 = *(int *)(iVar19 + 0x8006d0);
          in_stack_00000028 = (undefined4 *)(iVar3 + 0x34);
          fVar20 = (float10)FUN_00424860();
          in_stack_00000018 = (float *)(float)fVar20;
          if (0.0 < (float)in_stack_00000018) {
            FUN_004240f0();
            FUN_00412780();
            iVar3 = *(int *)(iVar19 + 0x8006d0);
            pfVar6 = (float *)FUN_00428970();
            if (5.0 < *pfVar6) {
              *pfVar6 = 5.0;
            }
          }
          goto code_r0x0049b8d5;
        case 0x32:
          FUN_00468e20();
          FUN_00411e30();
          in_stack_00000048 = *(float **)(iVar19 + 0x8006d0);
          puVar15 = (undefined4 *)FUN_00428970();
          *puVar15 = 0;
          fVar20 = (float10)FUN_00424860();
          in_stack_00000018 = (float *)(float)fVar20;
          if (0.0 < (float)in_stack_00000018) {
            FUN_004240f0();
            fVar20 = (float10)FUN_0043ed60();
            in_stack_00000018 = (float *)(float)fVar20;
            FUN_00412780();
            in_stack_00000048 = *(float **)(iVar19 + 0x8006d0);
            fVar20 = (float10)FUN_0043ed60();
            in_stack_00000018 = (float *)((float)fVar20 * 12.0 + 5.0);
            puVar15 = (undefined4 *)FUN_00428970();
            *puVar15 = in_stack_00000018;
          }
          in_stack_000001c0 = 7.00649e-44;
          puVar15 = (undefined4 *)FUN_00468910();
          uVar16 = FUN_0043e6a0();
          *puVar15 = uVar16;
          iVar3 = iStack00000070;
          break;
        case 0x36:
          puVar9 = (undefined1 *)FUN_00468c60();
          *(undefined1 *)(*(int *)(iVar19 + 0x8006d0) + 0x68) = *puVar9;
          FUN_004252f0();
          FUN_00411e30();
          iVar3 = *(int *)(iVar19 + 0x8006d0);
          fVar20 = (float10)FUN_00423f20();
          in_stack_00000018 = (float *)(float)fVar20;
          *(int *)(iVar3 + 0x11d8) = (int)(((float)in_stack_00000018 / 50.0) * 1000.0);
          fVar20 = (float10)FUN_00424860();
          in_stack_00000018 = (float *)(float)fVar20;
          if (2500.0 < (float)in_stack_00000018) {
            FUN_004240f0();
            FUN_00412780();
          }
          iVar3 = *(int *)(iVar19 + 0x8006d0);
          puVar15 = (undefined4 *)FUN_00428970();
          *puVar15 = 0x41700000;
code_r0x0049b8d5:
          *(undefined4 *)(iVar3 + 0x6c) = 0;
          *(undefined4 *)(*(int *)(iVar19 + 0x8006d0) + 0x128) = 0;
          iVar3 = iStack00000070;
          break;
        case 0x60:
          *(undefined1 *)(*(int *)(iVar19 + 0x8006d0) + 0x68) = 0x60;
          FUN_00468e20();
          FUN_00411e30();
          in_stack_0000001c = *(float **)(iVar19 + 0x8006d0);
          in_stack_00000048 = in_stack_0000001c + 0xd;
          puVar15 = (undefined4 *)FUN_00428970();
          *puVar15 = 0;
          fVar20 = (float10)FUN_00424860();
          in_stack_000000ac = (float)fVar20;
          if (0.0 < in_stack_000000ac) {
            FUN_004240f0();
            FUN_00412780();
            in_stack_0000001c = *(float **)(iVar19 + 0x8006d0);
            puVar15 = (undefined4 *)FUN_00428970();
            *puVar15 = 0x41a00000;
          }
          in_stack_0000001c[0x1b] = 0.0;
          *(undefined4 *)(*(int *)(iVar19 + 0x8006d0) + 0x128) = 600;
          break;
        case 0x61:
          goto code_r0x0049b794;
        case 99:
          FUN_0042f160();
          in_stack_000000ac = 1.38729e-43;
          puVar15 = (undefined4 *)FUN_00468910();
          uVar16 = FUN_0043e6a0();
          *puVar15 = uVar16;
          iVar3 = iStack00000070;
          break;
        case 100:
          goto code_r0x0049b794;
        case 0x65:
          FUN_00595850();
          FUN_00484350();
          break;
        case 0x66:
code_r0x0049b794:
          FUN_00595850();
          break;
        case 0x67:
          FUN_00595850();
          FUN_00484350();
        }
LAB_0049bf4d:
        iStack00000070 = iVar3 + 1;
        iVar10 = FUN_00487f50();
        bVar1 = iVar3 < iVar10 + -1;
        iVar3 = iVar3 + 1;
      } while (bVar1);
      if (cStack00000017 == '\0') goto LAB_0049bf70;
    }
    if (((*(char *)(iVar19 + 5) == '\0') && (piVar11 = (int *)FUN_00468c60(), *piVar11 == 0x1c)) &&
       (*(char *)(*(int *)(iVar19 + 0x8006d0) + 0x68) == '\x1c')) {
      *(undefined1 *)(*(int *)(iVar19 + 0x8006d0) + 0x68) = 0;
    }
    if (((*(char *)(iVar19 + 4) == '\0') && (piVar11 = (int *)FUN_00468c60(), *piVar11 == 0x1d)) &&
       (*(char *)(*(int *)(iVar19 + 0x8006d0) + 0x68) == '\x1d')) {
      *(undefined1 *)(*(int *)(iVar19 + 0x8006d0) + 0x68) = 0;
    }
    if (cStack00000017 != '\0') {
      FUN_0042f160();
    }
  }
  if (*(int *)(iVar19 + 0x8006cc) != 0) {
    FUN_0046f440();
    FUN_0060a9f0();
    cVar2 = FUN_004688d0();
    while (cVar2 != '\0') {
      piVar11 = (int *)FUN_0042c6c0();
      if ((*piVar11 == *(int *)(*(int *)(iVar19 + 0x8006d0) + 8)) &&
         (piVar11[1] == *(int *)(*(int *)(iVar19 + 0x8006d0) + 0xc))) {
        FUN_0042c6c0();
        FUN_00486290();
      }
      FUN_00468d30();
      FUN_0060a9f0();
      cVar2 = FUN_004688d0();
    }
    FUN_0046f440();
    FUN_0060a9f0();
    cVar2 = FUN_004688d0();
    while (cVar2 != '\0') {
      piVar11 = (int *)FUN_0042c6c0();
      if ((*piVar11 == *(int *)(*(int *)(iVar19 + 0x8006d0) + 8)) &&
         (piVar11[1] == *(int *)(*(int *)(iVar19 + 0x8006d0) + 0xc))) {
        FUN_0042c6c0();
        FUN_004460a0();
      }
      FUN_00468d30();
      FUN_0060a9f0();
      cVar2 = FUN_004688d0();
    }
    FUN_0046f440();
    FUN_0060a9f0();
    cVar2 = FUN_004688d0();
    while (cVar2 != '\0') {
      piVar11 = (int *)FUN_0042c6c0();
      if ((*piVar11 == *(int *)(*(int *)(iVar19 + 0x8006d0) + 8)) &&
         (piVar11[1] == *(int *)(*(int *)(iVar19 + 0x8006d0) + 0xc))) {
        FUN_0042c6c0();
        FUN_004861a0();
      }
      FUN_00468d30();
      FUN_0060a9f0();
      cVar2 = FUN_004688d0();
    }
  }
  if (*(int *)(iVar19 + 0x8006c8) != 0) {
    FUN_004dc8e0();
  }
  iVar3 = *(int *)(iVar19 + 0x8006d0);
  cVar2 = *(char *)(iVar3 + 0x68);
  if ((((((cVar2 != 'S') && (cVar2 != 'j')) && (cVar2 != 'k')) && ((cVar2 != 'R' && (cVar2 != 'T')))
       ) && (cVar2 != '\b')) &&
     (((cVar2 != '#' && (cVar2 != 'O')) &&
      ((cVar2 != '\x1c' &&
       (((cVar2 != '\x1d' && (cVar2 != '$')) && (*(char *)(iVar19 + 5) == '\0')))))))) {
    if (*(char *)(iVar3 + 0x1020) == '\x14') {
      iVar10 = FUN_0043d1a0();
      iVar3 = *(int *)(iVar19 + 0x8006d0);
      if (iVar10 + 500 < *(int *)(iVar3 + 0x6c)) {
        *(undefined1 *)(iVar3 + 0x68) = 0x52;
        goto LAB_0049c2e6;
      }
    }
    if (10000 < *(int *)(iVar3 + 0x6c)) {
      *(undefined1 *)(iVar3 + 0x68) = 0;
    }
  }
LAB_0049c2e6:
  FUN_00423e70();
  in_stack_0000006c = FUN_00428970();
  FUN_00424610();
  in_stack_00000064 = FUN_00428970();
  FUN_004244f0();
  in_stack_00000060 = FUN_00428970();
  FUN_004243d0();
  FUN_0042c7a0();
  FUN_0042c4a0();
  fVar20 = (float10)FUN_00424860();
  in_stack_000000ac = (float)fVar20;
  if (2500.0 < in_stack_000000ac) {
    FUN_0042c5b0();
  }
  cVar2 = FUN_0047fa10();
  if (((cVar2 == '\0') && (cVar2 = FUN_0047fa10(), cVar2 == '\0')) &&
     ((cVar2 = FUN_0047fa10(), cVar2 == '\0' && (cVar2 = FUN_0047fa10(), cVar2 == '\0')))) {
    in_stack_000000d8 = 0;
    fStack00000084 = 1.0;
    FUN_004aba20();
    in_stack_00000074 = (CRefTime *)FUN_004120b0();
    FUN_004120b0();
    FUN_00412200();
    FUN_00468ca0();
    FUN_0042c9b0();
    in_stack_00000020 = (CRefTime *)FUN_004120b0();
    FUN_004120b0();
    FUN_00412200();
    FUN_00468ca0();
    FUN_0042c9b0();
    cVar2 = FUN_0047fa10();
    if ((cVar2 == '\0') && (cVar2 = FUN_0047fa10(), cVar2 == '\0')) {
      cVar2 = *(char *)(*(int *)(iVar19 + 0x8006d0) + 0x68);
      if ((cVar2 == 'T') || (cVar2 == 'S')) {
        FUN_00428970();
        FUN_004120b0();
        FUN_00412220();
      }
      else {
        if ((cVar2 == 'j') || (cVar2 == 'k')) {
          FUN_00428970();
        }
        else {
          FUN_00428970();
        }
        FUN_004120b0();
        FUN_00412220();
        FUN_004122e0();
      }
      FUN_004122e0();
    }
    else {
      FUN_004120b0();
      FUN_00412220();
    }
    FUN_004120b0();
    FUN_004573d0();
  }
  else {
    FUN_00487fe0();
    FUN_0042c460();
    in_stack_00000020 = (CRefTime *)FUN_004120b0();
    pCVar4 = (CRefTime *)FUN_004120b0();
    in_stack_00000074 = pCVar4;
    CRefTime::Millisecs(in_stack_00000020);
    CRefTime::Millisecs(pCVar4);
    fStack00000084 = (float)FUN_004347a0();
    if (fStack00000084 != 0.0) {
      FUN_004348b0();
      FUN_00434b70();
      FUN_004120b0();
      FUN_00412080();
    }
    FUN_00412080();
    FUN_004120b0();
    FUN_0042c9b0();
  }
  in_stack_00000054 = (undefined1 *)(iVar19 + 0x140);
  FUN_0042c5b0();
  FUN_0040ea90();
  FUN_00488e50();
  pfVar6 = in_stack_000000a8;
  FUN_00451510();
  FUN_0042c460();
  FUN_0042c9d0();
  fStack00000088 = *pfVar6;
  in_stack_0000001c = (float *)0x0;
  FUN_004120b0();
  fStack00000084 = (float)FUN_004120b0();
  in_stack_000000ac = (float)FUN_004120b0();
  do {
    in_stack_00000048 = (float *)0x0;
    do {
      iVar19 = 0;
      do {
        FUN_00459c00();
        FUN_00459c00();
        FUN_00459c00();
        FUN_00459c00();
        FUN_0043b610();
        FUN_0042c6e0();
        FUN_0042c800();
        FUN_0042f860();
        cVar2 = FUN_0043b480();
        if (cVar2 != '\0') {
          fVar20 = (float10)FUN_005a35d0();
          in_stack_000001c0 = (float)fVar20;
          if (*in_stack_000000a8 - in_stack_000001c0 < fStack00000088) {
            fStack00000088 = *in_stack_000000a8 - in_stack_000001c0;
          }
        }
        iVar19 = iVar19 + 1;
      } while (iVar19 < 2);
      in_stack_00000048 = (float *)((int)in_stack_00000048 + 1);
    } while ((int)in_stack_00000048 < 2);
    in_stack_0000001c = (float *)((int)in_stack_0000001c + 1);
  } while ((int)in_stack_0000001c < 2);
  *in_stack_000000a8 = fStack00000088;
  FUN_00451510();
  FUN_0042c460();
  FUN_0042c7a0();
  FUN_0042c5b0();
  iVar19 = in_stack_00000010;
  *(float *)(in_stack_00000010 + 0x1cc) = *in_stack_000000a8;
  FUN_0042c5b0();
  in_stack_000000d8 = FUN_004120b0();
  fStack00000088 = (float)FUN_004120b0();
  FUN_004120b0();
  FUN_0042f860();
  cVar2 = FUN_0043b480();
  if (cVar2 != '\0') {
    FUN_0042c7a0();
    FUN_0042c4a0();
    fVar20 = (float10)FUN_00424860();
    fStack00000084 = (float)fVar20;
    if (0.0 < fStack00000084) {
      FUN_004240f0();
      fVar20 = (float10)FUN_005a35d0();
      fStack00000084 = (float)fVar20;
      if (0.0 <= fStack00000084) {
        FUN_00451510();
        FUN_0042c460();
        FUN_0042c800();
        FUN_0042c5b0();
      }
    }
  }
  FUN_00423e70();
  FUN_0042c4a0();
  FUN_00424990();
  FUN_00424610();
  FUN_004244f0();
  FUN_004243d0();
  FUN_00423e70();
  FUN_004243d0();
  FUN_004244f0();
  FUN_00424610();
  FUN_00468e70();
  FUN_0042c4a0();
  FUN_00424990();
  FUN_00412260();
  FUN_00411df0();
  FUN_00412260();
  FUN_00411df0();
  FUN_00423e70();
  in_stack_00000048 = (float *)(*(float *)(iVar19 + 0x1e8) * 0.5);
  FUN_00488b80();
  fVar20 = (float10)FUN_0040e420();
  fStack00000084 = (float)fVar20;
  FUN_00488b80();
  fVar20 = (float10)FUN_0040e420();
  fStack00000084 = (float)fVar20;
  FUN_00434b80();
  FUN_004243d0();
  FUN_004244f0();
  FUN_00424610();
  FUN_00412080();
  FUN_0043b610();
  FUN_00468e70();
  FUN_0042c7a0();
  FUN_0042c4a0();
  FUN_00424990();
  uStack000001cc = 0;
  FUN_004aba20();
  EnterCriticalSection((LPCRITICAL_SECTION)(iVar19 + 0x8005d0));
  FUN_00469060();
  FUN_0043abc0();
  FUN_004120f0();
  FUN_00469060();
  FUN_0043abc0();
  FUN_004120f0();
  FUN_0040ea50();
  FUN_0062f720();
  FUN_004120f0();
  FUN_004120f0();
  FUN_0040ea50();
  FUN_0062f720();
  in_stack_00000048 = (float *)(iVar19 + 0x2c4);
  FUN_0046f870();
  if (*(int *)(iVar19 + 0x8006c8) == 0) {
    pCVar4 = (CRefTime *)FUN_004120b0();
    CRefTime::Millisecs(pCVar4);
    pCVar4 = (CRefTime *)FUN_004120b0();
    CRefTime::Millisecs(pCVar4);
    FUN_0040ea30();
    FUN_00469000();
    FUN_00486560();
  }
  else {
    FUN_0046f440();
    FUN_0060a9f0();
    cVar2 = FUN_004688d0();
    while (cVar2 != '\0') {
      iVar19 = FUN_00468c90();
      if ((*(int *)(iVar19 + 8) != 0) && (*(char *)(*(int *)(iVar19 + 8) + 0x60) == '\0')) {
        pCVar4 = (CRefTime *)FUN_004120b0();
        CRefTime::Millisecs(pCVar4);
        pCVar4 = (CRefTime *)FUN_004120b0();
        CRefTime::Millisecs(pCVar4);
        FUN_0040ea30();
        FUN_00469000();
        FUN_00486560();
      }
      FUN_00468d70();
      FUN_0060a9f0();
      cVar2 = FUN_004688d0();
      iVar19 = in_stack_00000010;
    }
  }
  in_stack_0000001c = (float *)(iVar19 + 0x2cc);
  FUN_0046f870();
  fStack00000084 = (float)(iVar19 + 0x2d4);
  FUN_0046f870();
  FUN_0046f440();
  FUN_0060a9f0();
  cVar2 = FUN_004688d0();
  while (cVar2 != '\0') {
    FUN_0042c6c0();
    in_stack_00000048 = (float *)FUN_00428970();
    uStack000001cc = FUN_00428970();
    iVar19 = FUN_00434d10();
    if ((iVar19 != 0) && (*(char *)(iVar19 + 0x74) != '\0')) {
      FUN_00486560();
    }
    iVar19 = FUN_00434a90();
    if ((iVar19 != 0) && (*(char *)(iVar19 + 8) != '\0')) {
      FUN_00469000();
      FUN_00486560();
    }
    FUN_00468d30();
    FUN_0060a9f0();
    cVar2 = FUN_004688d0();
    iVar19 = in_stack_00000010;
  }
  FUN_00469060();
  FUN_004120f0();
  FUN_00469060();
  FUN_004120f0();
  FUN_0040ea50();
  FUN_0062f720();
  if (*(int *)(iVar19 + 0x8006cc) == 0) {
    FUN_0046f870();
    FUN_0046f870();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(iVar19 + 0x8005d0));
  FUN_00601e90();
  FUN_00659fb0();
  FUN_004da480();
  FUN_004da480();
  FUN_004da480();
  std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
            ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
             &stack0x00000e2c);
  FUN_00593e50();
  FUN_00593e50();
  FUN_005fb860();
  FUN_005fb860();
  FUN_00467c70();
  uStack00000008 = 0x49d389;
  ExceptionList = in_stack_00004760;
  __security_check_cookie(in_stack_00004758 ^ (uint)&stack0x0000000c);
  return;
}


/* FUN_0049be00 @ 0049be00  kind=gamemisc  attributed-by=none  size=59 */

/* WARNING (jumptable): Unable to track spacebase fully for stack */

void FUN_0049be00(void)

{
  char cVar1;
  undefined4 *puVar2;
  float *pfVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint *puVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  CRefTime *pCVar10;
  int unaff_ESI;
  int unaff_EDI;
  float10 fVar11;
  undefined4 uStack00000008;
  int in_stack_00000010;
  char in_stack_00000017;
  float in_stack_00000018;
  int in_stack_0000001c;
  CRefTime *pCStack00000020;
  int in_stack_00000028;
  float in_stack_00000048;
  int iStack00000054;
  undefined4 uStack00000060;
  undefined4 uStack00000064;
  undefined4 uStack0000006c;
  int in_stack_00000070;
  CRefTime *pCStack00000074;
  float fStack00000084;
  float fStack00000088;
  float *in_stack_000000a8;
  float in_stack_000000ac;
  undefined4 in_stack_000000d8;
  float in_stack_000001c0;
  undefined4 uStack000001cc;
  uint in_stack_00004758;
  void *in_stack_00004760;
  
code_r0x0049be00:
  iVar7 = *(int *)(unaff_EDI + 0x8006d0);
  if (*(char *)(iVar7 + 0x141) != '\x01') {
    *(undefined1 *)(iVar7 + 0x68) = 0x3c;
    FUN_0043caa0();
    FUN_0049bf44();
    return;
  }
  *(undefined1 *)(iVar7 + 0x68) = 0x3d;
  *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
  goto LAB_0049bf4d;
code_r0x0049bdd8:
  puVar2 = (undefined4 *)FUN_00468c60();
  switch(*puVar2) {
  case 8:
    *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x68;
    *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
  default:
LAB_0049bf4d:
    do {
      do {
        do {
          iVar9 = unaff_ESI;
          unaff_ESI = iVar9 + 1;
          in_stack_00000070 = unaff_ESI;
          iVar7 = FUN_00487f50();
          if (iVar7 + -1 <= iVar9) {
            if ((((in_stack_00000017 == '\0') &&
                 (*(char *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) != '0')) &&
                (*(char *)(unaff_EDI + 4) != '\0')) &&
               (FUN_00445410(), *(char *)(*(int *)(unaff_EDI + 0x8006d0) + 0x1020) == '\x14')) {
              FUN_0046ebe0();
              FUN_0042f3e0();
              FUN_0042c5e0();
            }
            if (((*(char *)(unaff_EDI + 5) == '\0') &&
                (piVar8 = (int *)FUN_00468c60(), *piVar8 == 0x1c)) &&
               (*(char *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) == '\x1c')) {
              *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0;
            }
            if (((*(char *)(unaff_EDI + 4) == '\0') &&
                (piVar8 = (int *)FUN_00468c60(), *piVar8 == 0x1d)) &&
               (*(char *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) == '\x1d')) {
              *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0;
            }
            if (in_stack_00000017 != '\0') {
              FUN_0042f160();
            }
            if (*(int *)(unaff_EDI + 0x8006cc) != 0) {
              FUN_0046f440();
              FUN_0060a9f0();
              cVar1 = FUN_004688d0();
              while (cVar1 != '\0') {
                piVar8 = (int *)FUN_0042c6c0();
                if ((*piVar8 == *(int *)(*(int *)(unaff_EDI + 0x8006d0) + 8)) &&
                   (piVar8[1] == *(int *)(*(int *)(unaff_EDI + 0x8006d0) + 0xc))) {
                  FUN_0042c6c0();
                  FUN_00486290();
                }
                FUN_00468d30();
                FUN_0060a9f0();
                cVar1 = FUN_004688d0();
              }
              FUN_0046f440();
              FUN_0060a9f0();
              cVar1 = FUN_004688d0();
              while (cVar1 != '\0') {
                piVar8 = (int *)FUN_0042c6c0();
                if ((*piVar8 == *(int *)(*(int *)(unaff_EDI + 0x8006d0) + 8)) &&
                   (piVar8[1] == *(int *)(*(int *)(unaff_EDI + 0x8006d0) + 0xc))) {
                  FUN_0042c6c0();
                  FUN_004460a0();
                }
                FUN_00468d30();
                FUN_0060a9f0();
                cVar1 = FUN_004688d0();
              }
              FUN_0046f440();
              FUN_0060a9f0();
              cVar1 = FUN_004688d0();
              while (cVar1 != '\0') {
                piVar8 = (int *)FUN_0042c6c0();
                if ((*piVar8 == *(int *)(*(int *)(unaff_EDI + 0x8006d0) + 8)) &&
                   (piVar8[1] == *(int *)(*(int *)(unaff_EDI + 0x8006d0) + 0xc))) {
                  FUN_0042c6c0();
                  FUN_004861a0();
                }
                FUN_00468d30();
                FUN_0060a9f0();
                cVar1 = FUN_004688d0();
              }
            }
            if (*(int *)(unaff_EDI + 0x8006c8) != 0) {
              FUN_004dc8e0();
            }
            iVar7 = *(int *)(unaff_EDI + 0x8006d0);
            cVar1 = *(char *)(iVar7 + 0x68);
            if ((((((cVar1 != 'S') && (cVar1 != 'j')) && (cVar1 != 'k')) &&
                 (((cVar1 != 'R' && (cVar1 != 'T')) &&
                  ((cVar1 != '\b' && ((cVar1 != '#' && (cVar1 != 'O')))))))) && (cVar1 != '\x1c'))
               && (((cVar1 != '\x1d' && (cVar1 != '$')) && (*(char *)(unaff_EDI + 5) == '\0')))) {
              if (*(char *)(iVar7 + 0x1020) == '\x14') {
                iVar9 = FUN_0043d1a0();
                iVar7 = *(int *)(unaff_EDI + 0x8006d0);
                if (iVar9 + 500 < *(int *)(iVar7 + 0x6c)) {
                  *(undefined1 *)(iVar7 + 0x68) = 0x52;
                  goto LAB_0049c2e6;
                }
              }
              if (10000 < *(int *)(iVar7 + 0x6c)) {
                *(undefined1 *)(iVar7 + 0x68) = 0;
              }
            }
LAB_0049c2e6:
            FUN_00423e70();
            uStack0000006c = FUN_00428970();
            FUN_00424610();
            uStack00000064 = FUN_00428970();
            FUN_004244f0();
            uStack00000060 = FUN_00428970();
            FUN_004243d0();
            FUN_0042c7a0();
            FUN_0042c4a0();
            fVar11 = (float10)FUN_00424860();
            in_stack_000000ac = (float)fVar11;
            if (2500.0 < in_stack_000000ac) {
              FUN_0042c5b0();
            }
            cVar1 = FUN_0047fa10();
            if (((cVar1 == '\0') && (cVar1 = FUN_0047fa10(), cVar1 == '\0')) &&
               ((cVar1 = FUN_0047fa10(), cVar1 == '\0' && (cVar1 = FUN_0047fa10(), cVar1 == '\0'))))
            {
              in_stack_000000d8 = 0;
              fStack00000084 = 1.0;
              FUN_004aba20();
              pCStack00000074 = (CRefTime *)FUN_004120b0();
              FUN_004120b0();
              FUN_00412200();
              FUN_00468ca0();
              FUN_0042c9b0();
              pCStack00000020 = (CRefTime *)FUN_004120b0();
              FUN_004120b0();
              FUN_00412200();
              FUN_00468ca0();
              FUN_0042c9b0();
              cVar1 = FUN_0047fa10();
              if ((cVar1 == '\0') && (cVar1 = FUN_0047fa10(), cVar1 == '\0')) {
                cVar1 = *(char *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68);
                if ((cVar1 == 'T') || (cVar1 == 'S')) {
                  FUN_00428970();
                  FUN_004120b0();
                  FUN_00412220();
                }
                else {
                  if ((cVar1 == 'j') || (cVar1 == 'k')) {
                    FUN_00428970();
                  }
                  else {
                    FUN_00428970();
                  }
                  FUN_004120b0();
                  FUN_00412220();
                  FUN_004122e0();
                }
                FUN_004122e0();
              }
              else {
                FUN_004120b0();
                FUN_00412220();
              }
              FUN_004120b0();
              FUN_004573d0();
            }
            else {
              FUN_00487fe0();
              FUN_0042c460();
              pCStack00000020 = (CRefTime *)FUN_004120b0();
              pCVar10 = (CRefTime *)FUN_004120b0();
              pCStack00000074 = pCVar10;
              CRefTime::Millisecs(pCStack00000020);
              CRefTime::Millisecs(pCVar10);
              fStack00000084 = (float)FUN_004347a0();
              if (fStack00000084 != 0.0) {
                FUN_004348b0();
                FUN_00434b70();
                FUN_004120b0();
                FUN_00412080();
              }
              FUN_00412080();
              FUN_004120b0();
              FUN_0042c9b0();
            }
            iStack00000054 = unaff_EDI + 0x140;
            FUN_0042c5b0();
            FUN_0040ea90();
            FUN_00488e50();
            pfVar3 = in_stack_000000a8;
            FUN_00451510();
            FUN_0042c460();
            FUN_0042c9d0();
            fStack00000088 = *pfVar3;
            in_stack_0000001c = 0;
            FUN_004120b0();
            fStack00000084 = (float)FUN_004120b0();
            in_stack_000000ac = (float)FUN_004120b0();
            do {
              in_stack_00000048 = 0.0;
              do {
                iVar7 = 0;
                do {
                  FUN_00459c00();
                  FUN_00459c00();
                  FUN_00459c00();
                  FUN_00459c00();
                  FUN_0043b610();
                  FUN_0042c6e0();
                  FUN_0042c800();
                  FUN_0042f860();
                  cVar1 = FUN_0043b480();
                  if (cVar1 != '\0') {
                    fVar11 = (float10)FUN_005a35d0();
                    in_stack_000001c0 = (float)fVar11;
                    if (*in_stack_000000a8 - in_stack_000001c0 < fStack00000088) {
                      fStack00000088 = *in_stack_000000a8 - in_stack_000001c0;
                    }
                  }
                  iVar7 = iVar7 + 1;
                } while (iVar7 < 2);
                in_stack_00000048 = (float)((int)in_stack_00000048 + 1);
              } while ((int)in_stack_00000048 < 2);
              in_stack_0000001c = in_stack_0000001c + 1;
            } while (in_stack_0000001c < 2);
            *in_stack_000000a8 = fStack00000088;
            FUN_00451510();
            FUN_0042c460();
            FUN_0042c7a0();
            FUN_0042c5b0();
            iVar7 = in_stack_00000010;
            *(float *)(in_stack_00000010 + 0x1cc) = *in_stack_000000a8;
            FUN_0042c5b0();
            in_stack_000000d8 = FUN_004120b0();
            fStack00000088 = (float)FUN_004120b0();
            FUN_004120b0();
            FUN_0042f860();
            cVar1 = FUN_0043b480();
            if (cVar1 != '\0') {
              FUN_0042c7a0();
              FUN_0042c4a0();
              fVar11 = (float10)FUN_00424860();
              fStack00000084 = (float)fVar11;
              if (0.0 < fStack00000084) {
                FUN_004240f0();
                fVar11 = (float10)FUN_005a35d0();
                fStack00000084 = (float)fVar11;
                if (0.0 <= fStack00000084) {
                  FUN_00451510();
                  FUN_0042c460();
                  FUN_0042c800();
                  FUN_0042c5b0();
                }
              }
            }
            FUN_00423e70();
            FUN_0042c4a0();
            FUN_00424990();
            FUN_00424610();
            FUN_004244f0();
            FUN_004243d0();
            FUN_00423e70();
            FUN_004243d0();
            FUN_004244f0();
            FUN_00424610();
            FUN_00468e70();
            FUN_0042c4a0();
            FUN_00424990();
            FUN_00412260();
            FUN_00411df0();
            FUN_00412260();
            FUN_00411df0();
            FUN_00423e70();
            in_stack_00000048 = *(float *)(iVar7 + 0x1e8) * 0.5;
            FUN_00488b80();
            fVar11 = (float10)FUN_0040e420();
            fStack00000084 = (float)fVar11;
            FUN_00488b80();
            fVar11 = (float10)FUN_0040e420();
            fStack00000084 = (float)fVar11;
            FUN_00434b80();
            FUN_004243d0();
            FUN_004244f0();
            FUN_00424610();
            FUN_00412080();
            FUN_0043b610();
            FUN_00468e70();
            FUN_0042c7a0();
            FUN_0042c4a0();
            FUN_00424990();
            uStack000001cc = 0;
            FUN_004aba20();
            EnterCriticalSection((LPCRITICAL_SECTION)(iVar7 + 0x8005d0));
            FUN_00469060();
            FUN_0043abc0();
            FUN_004120f0();
            FUN_00469060();
            FUN_0043abc0();
            FUN_004120f0();
            FUN_0040ea50();
            FUN_0062f720();
            FUN_004120f0();
            FUN_004120f0();
            FUN_0040ea50();
            FUN_0062f720();
            in_stack_00000048 = (float)(iVar7 + 0x2c4);
            FUN_0046f870();
            if (*(int *)(iVar7 + 0x8006c8) == 0) {
              pCVar10 = (CRefTime *)FUN_004120b0();
              CRefTime::Millisecs(pCVar10);
              pCVar10 = (CRefTime *)FUN_004120b0();
              CRefTime::Millisecs(pCVar10);
              FUN_0040ea30();
              FUN_00469000();
              FUN_00486560();
            }
            else {
              FUN_0046f440();
              FUN_0060a9f0();
              cVar1 = FUN_004688d0();
              while (cVar1 != '\0') {
                iVar7 = FUN_00468c90();
                if ((*(int *)(iVar7 + 8) != 0) && (*(char *)(*(int *)(iVar7 + 8) + 0x60) == '\0')) {
                  pCVar10 = (CRefTime *)FUN_004120b0();
                  CRefTime::Millisecs(pCVar10);
                  pCVar10 = (CRefTime *)FUN_004120b0();
                  CRefTime::Millisecs(pCVar10);
                  FUN_0040ea30();
                  FUN_00469000();
                  FUN_00486560();
                }
                FUN_00468d70();
                FUN_0060a9f0();
                cVar1 = FUN_004688d0();
                iVar7 = in_stack_00000010;
              }
            }
            in_stack_0000001c = iVar7 + 0x2cc;
            FUN_0046f870();
            fStack00000084 = (float)(iVar7 + 0x2d4);
            FUN_0046f870();
            FUN_0046f440();
            FUN_0060a9f0();
            cVar1 = FUN_004688d0();
            while (cVar1 != '\0') {
              FUN_0042c6c0();
              in_stack_00000048 = (float)FUN_00428970();
              uStack000001cc = FUN_00428970();
              iVar7 = FUN_00434d10();
              if ((iVar7 != 0) && (*(char *)(iVar7 + 0x74) != '\0')) {
                FUN_00486560();
              }
              iVar7 = FUN_00434a90();
              if ((iVar7 != 0) && (*(char *)(iVar7 + 8) != '\0')) {
                FUN_00469000();
                FUN_00486560();
              }
              FUN_00468d30();
              FUN_0060a9f0();
              cVar1 = FUN_004688d0();
              iVar7 = in_stack_00000010;
            }
            FUN_00469060();
            FUN_004120f0();
            FUN_00469060();
            FUN_004120f0();
            FUN_0040ea50();
            FUN_0062f720();
            if (*(int *)(iVar7 + 0x8006cc) == 0) {
              FUN_0046f870();
              FUN_0046f870();
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)(iVar7 + 0x8005d0));
            FUN_00601e90();
            FUN_00659fb0();
            FUN_004da480();
            FUN_004da480();
            FUN_004da480();
            std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
            basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
                      ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        *)&stack0x00000e2c);
            FUN_00593e50();
            FUN_00593e50();
            FUN_005fb860();
            FUN_005fb860();
            FUN_00467c70();
            uStack00000008 = 0x49d389;
            ExceptionList = in_stack_00004760;
            __security_check_cookie(in_stack_00004758 ^ (uint)&stack0x0000000c);
            return;
          }
          piVar8 = (int *)FUN_00468c60();
        } while (*piVar8 == 0);
        if (*(char *)(unaff_EDI + 4 + unaff_ESI) == '\0') {
          puVar6 = (uint *)FUN_00468c60();
          if (*puVar6 == (uint)*(byte *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68))
          goto code_r0x0049bdd8;
          goto LAB_0049bf4d;
        }
        in_stack_00000017 = '\x01';
        cVar1 = FUN_0043e350();
      } while ((cVar1 == '\0') && (iVar9 < 1));
      FUN_00468c60();
      cVar1 = FUN_0043e5a0();
    } while (cVar1 == '\0');
    if (*(char *)(*(int *)(unaff_EDI + 0x8006d0) + 0x1020) == '\x14') {
      FUN_0046ebe0();
      FUN_0042f3e0();
      FUN_0042c5e0();
    }
    puVar2 = (undefined4 *)FUN_00468c60();
    switch(*puVar2) {
    case 3:
    case 4:
    case 0x17:
    case 0x1f:
    case 0x21:
    case 0x25:
    case 0x2d:
    case 0x2e:
    case 0x41:
    case 0x42:
    case 0x5e:
    case 0x5f:
      FUN_004456a0();
      goto LAB_0049bf4d;
    case 5:
      if (*(float *)(*(int *)(unaff_EDI + 0x8006d0) + 0x170) <= 0.0) goto LAB_0049bf4d;
      *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 5;
      break;
    default:
      FUN_00468c60();
      in_stack_00000048 = *(float *)(unaff_EDI + 0x8006d0);
      fVar11 = (float10)FUN_00444ae0();
      in_stack_000000ac = (float)fVar11;
      if (in_stack_000000ac <= *(float *)((int)in_stack_00000048 + 0x170)) {
        puVar5 = (undefined1 *)FUN_00468c60();
        iVar7 = (int)in_stack_00000048;
        goto code_r0x0049bd93;
      }
      goto LAB_0049bf4d;
    case 8:
    case 0x18:
    case 0x19:
    case 0x1b:
    case 0x3b:
    case 0x3f:
    case 0x40:
      puVar6 = (uint *)FUN_00468c60();
      if ((uint)*(byte *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) == *puVar6) goto LAB_0049bf4d;
      puVar5 = (undefined1 *)FUN_00468c60();
      iVar7 = *(int *)(unaff_EDI + 0x8006d0);
code_r0x0049bd93:
      *(undefined1 *)(iVar7 + 0x68) = *puVar5;
      break;
    case 10:
      if (*(char *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) == '\n') goto LAB_0049bf4d;
      *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 10;
      break;
    case 0xb:
      *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0xb;
      break;
    case 0x11:
      if (*(float *)(*(int *)(unaff_EDI + 0x8006d0) + 0x170) <= 0.0) goto LAB_0049bf4d;
      *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x11;
      break;
    case 0x14:
      if (*(float *)(*(int *)(unaff_EDI + 0x8006d0) + 0x170) <= 0.0) goto LAB_0049bf4d;
      *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x14;
      break;
    case 0x1c:
      if ((0.0 < *(float *)(*(int *)(unaff_EDI + 0x8006d0) + 0x170)) &&
         (puVar6 = (uint *)FUN_00468c60(),
         (uint)*(byte *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) != *puVar6)) {
        puVar5 = (undefined1 *)FUN_00468c60();
        *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = *puVar5;
        *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
      }
      goto LAB_0049bf4d;
    case 0x22:
      in_stack_00000018 = *(float *)(unaff_EDI + 0x8006d0);
      iVar7 = FUN_0043d1a0();
      if (iVar7 <= *(int *)((int)in_stack_00000018 + 0x6c)) {
        *(undefined1 *)((int)in_stack_00000018 + 0x68) = 0x22;
        *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
        iVar7 = *(int *)(unaff_EDI + 0x8006d0);
        *(undefined4 *)(iVar7 + 0x1a0) = *(undefined4 *)(iVar7 + 8);
        *(undefined4 *)(iVar7 + 0x1a4) = *(undefined4 *)(iVar7 + 0xc);
      }
      goto LAB_0049bf4d;
    case 0x30:
      puVar5 = (undefined1 *)FUN_00468c60();
      *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = *puVar5;
      FUN_00411e30();
      iVar7 = *(int *)(unaff_EDI + 0x8006d0);
      fVar11 = (float10)FUN_00423f20();
      in_stack_00000018 = (float)fVar11;
      *(int *)(iVar7 + 0x11d8) = (int)((in_stack_00000018 / 50.0) * 1000.0);
      iVar7 = *(int *)(unaff_EDI + 0x8006d0);
      in_stack_00000028 = iVar7 + 0x34;
      fVar11 = (float10)FUN_00424860();
      in_stack_00000018 = (float)fVar11;
      if (0.0 < in_stack_00000018) {
        FUN_004240f0();
        FUN_00412780();
        iVar7 = *(int *)(unaff_EDI + 0x8006d0);
        pfVar3 = (float *)FUN_00428970();
        if (5.0 < *pfVar3) {
          *pfVar3 = 5.0;
        }
      }
      goto code_r0x0049b8d5;
    case 0x32:
      FUN_00468e20();
      FUN_00411e30();
      in_stack_00000048 = *(float *)(unaff_EDI + 0x8006d0);
      puVar2 = (undefined4 *)FUN_00428970();
      *puVar2 = 0;
      fVar11 = (float10)FUN_00424860();
      in_stack_00000018 = (float)fVar11;
      if (0.0 < in_stack_00000018) {
        FUN_004240f0();
        fVar11 = (float10)FUN_0043ed60();
        in_stack_00000018 = (float)fVar11;
        FUN_00412780();
        in_stack_00000048 = *(float *)(unaff_EDI + 0x8006d0);
        fVar11 = (float10)FUN_0043ed60();
        in_stack_00000018 = (float)fVar11 * 12.0 + 5.0;
        pfVar3 = (float *)FUN_00428970();
        *pfVar3 = in_stack_00000018;
      }
      in_stack_000001c0 = 7.00649e-44;
      puVar2 = (undefined4 *)FUN_00468910();
      uVar4 = FUN_0043e6a0();
      *puVar2 = uVar4;
      unaff_ESI = in_stack_00000070;
      goto LAB_0049bf4d;
    case 0x36:
      puVar5 = (undefined1 *)FUN_00468c60();
      *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = *puVar5;
      FUN_004252f0();
      FUN_00411e30();
      iVar7 = *(int *)(unaff_EDI + 0x8006d0);
      fVar11 = (float10)FUN_00423f20();
      in_stack_00000018 = (float)fVar11;
      *(int *)(iVar7 + 0x11d8) = (int)((in_stack_00000018 / 50.0) * 1000.0);
      fVar11 = (float10)FUN_00424860();
      in_stack_00000018 = (float)fVar11;
      if (2500.0 < in_stack_00000018) {
        FUN_004240f0();
        FUN_00412780();
      }
      iVar7 = *(int *)(unaff_EDI + 0x8006d0);
      puVar2 = (undefined4 *)FUN_00428970();
      *puVar2 = 0x41700000;
code_r0x0049b8d5:
      *(undefined4 *)(iVar7 + 0x6c) = 0;
      *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x128) = 0;
      unaff_ESI = in_stack_00000070;
      goto LAB_0049bf4d;
    case 0x60:
      *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x60;
      FUN_00468e20();
      FUN_00411e30();
      in_stack_0000001c = *(int *)(unaff_EDI + 0x8006d0);
      in_stack_00000048 = (float)(in_stack_0000001c + 0x34);
      puVar2 = (undefined4 *)FUN_00428970();
      *puVar2 = 0;
      fVar11 = (float10)FUN_00424860();
      in_stack_000000ac = (float)fVar11;
      if (0.0 < in_stack_000000ac) {
        FUN_004240f0();
        FUN_00412780();
        in_stack_0000001c = *(int *)(unaff_EDI + 0x8006d0);
        puVar2 = (undefined4 *)FUN_00428970();
        *puVar2 = 0x41a00000;
      }
      *(undefined4 *)(in_stack_0000001c + 0x6c) = 0;
      *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x128) = 600;
      goto LAB_0049bf4d;
    case 0x61:
      goto code_r0x0049b794;
    case 99:
      FUN_0042f160();
      in_stack_000000ac = 1.38729e-43;
      puVar2 = (undefined4 *)FUN_00468910();
      uVar4 = FUN_0043e6a0();
      *puVar2 = uVar4;
      unaff_ESI = in_stack_00000070;
      goto LAB_0049bf4d;
    case 100:
      goto code_r0x0049b794;
    case 0x65:
      FUN_00595850();
      FUN_00484350();
      goto LAB_0049bf4d;
    case 0x66:
code_r0x0049b794:
      FUN_00595850();
      goto LAB_0049bf4d;
    case 0x67:
      FUN_00595850();
      FUN_00484350();
      goto LAB_0049bf4d;
    }
    *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
    *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x128) = 0;
    goto LAB_0049bf4d;
  case 10:
    in_stack_000000ac = *(float *)(unaff_EDI + 0x8006d0);
    iVar7 = FUN_0043d1a0();
    if (iVar7 < *(int *)((int)in_stack_000000ac + 0x6c)) {
      *(undefined1 *)((int)in_stack_000000ac + 0x68) = 3;
      uVar4 = FUN_0043d1a0();
      *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = uVar4;
    }
    goto LAB_0049bf4d;
  case 0x18:
    *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x17;
    *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
    goto LAB_0049bf4d;
  case 0x19:
    *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x37;
    *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
    goto LAB_0049bf4d;
  case 0x1b:
    *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x1a;
    *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
    goto LAB_0049bf4d;
  case 0x23:
    *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0;
    *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
    goto LAB_0049bf4d;
  case 0x24:
    *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x25;
    *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
    goto LAB_0049bf4d;
  case 0x3b:
    goto code_r0x0049be00;
  case 0x3f:
    *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0xb;
    FUN_0043caa0();
    FUN_0049bf44();
    return;
  case 0x40:
    *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x10;
    FUN_0043caa0();
    FUN_0049bf44();
    return;
  }
}


/* FUN_0049be73 @ 0049be73  kind=gamemisc  attributed-by=none  size=28 */

/* WARNING (jumptable): Unable to track spacebase fully for stack */

void FUN_0049be73(void)

{
  char cVar1;
  undefined4 *puVar2;
  float *pfVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint *puVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  CRefTime *pCVar10;
  int unaff_ESI;
  int unaff_EDI;
  float10 fVar11;
  undefined4 uStack00000008;
  int in_stack_00000010;
  char in_stack_00000017;
  float in_stack_00000018;
  int in_stack_0000001c;
  CRefTime *pCStack00000020;
  int in_stack_00000028;
  float in_stack_00000048;
  int iStack00000054;
  undefined4 uStack00000060;
  undefined4 uStack00000064;
  undefined4 uStack0000006c;
  int iStack00000070;
  CRefTime *pCStack00000074;
  float fStack00000084;
  float fStack00000088;
  float *in_stack_000000a8;
  float in_stack_000000ac;
  undefined4 in_stack_000000d8;
  float in_stack_000001c0;
  undefined4 uStack000001cc;
  uint in_stack_00004758;
  void *in_stack_00004760;
  
code_r0x0049be73:
  *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x17;
  *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
  goto LAB_0049bf4d;
code_r0x0049bdd8:
  puVar2 = (undefined4 *)FUN_00468c60();
  switch(*puVar2) {
  case 8:
    *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x68;
    *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
  default:
LAB_0049bf4d:
    do {
      do {
        do {
          iVar9 = unaff_ESI;
          unaff_ESI = iVar9 + 1;
          iStack00000070 = unaff_ESI;
          iVar7 = FUN_00487f50();
          if (iVar7 + -1 <= iVar9) {
            if ((((in_stack_00000017 == '\0') &&
                 (*(char *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) != '0')) &&
                (*(char *)(unaff_EDI + 4) != '\0')) &&
               (FUN_00445410(), *(char *)(*(int *)(unaff_EDI + 0x8006d0) + 0x1020) == '\x14')) {
              FUN_0046ebe0();
              FUN_0042f3e0();
              FUN_0042c5e0();
            }
            if (((*(char *)(unaff_EDI + 5) == '\0') &&
                (piVar8 = (int *)FUN_00468c60(), *piVar8 == 0x1c)) &&
               (*(char *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) == '\x1c')) {
              *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0;
            }
            if (((*(char *)(unaff_EDI + 4) == '\0') &&
                (piVar8 = (int *)FUN_00468c60(), *piVar8 == 0x1d)) &&
               (*(char *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) == '\x1d')) {
              *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0;
            }
            if (in_stack_00000017 != '\0') {
              FUN_0042f160();
            }
            if (*(int *)(unaff_EDI + 0x8006cc) != 0) {
              FUN_0046f440();
              FUN_0060a9f0();
              cVar1 = FUN_004688d0();
              while (cVar1 != '\0') {
                piVar8 = (int *)FUN_0042c6c0();
                if ((*piVar8 == *(int *)(*(int *)(unaff_EDI + 0x8006d0) + 8)) &&
                   (piVar8[1] == *(int *)(*(int *)(unaff_EDI + 0x8006d0) + 0xc))) {
                  FUN_0042c6c0();
                  FUN_00486290();
                }
                FUN_00468d30();
                FUN_0060a9f0();
                cVar1 = FUN_004688d0();
              }
              FUN_0046f440();
              FUN_0060a9f0();
              cVar1 = FUN_004688d0();
              while (cVar1 != '\0') {
                piVar8 = (int *)FUN_0042c6c0();
                if ((*piVar8 == *(int *)(*(int *)(unaff_EDI + 0x8006d0) + 8)) &&
                   (piVar8[1] == *(int *)(*(int *)(unaff_EDI + 0x8006d0) + 0xc))) {
                  FUN_0042c6c0();
                  FUN_004460a0();
                }
                FUN_00468d30();
                FUN_0060a9f0();
                cVar1 = FUN_004688d0();
              }
              FUN_0046f440();
              FUN_0060a9f0();
              cVar1 = FUN_004688d0();
              while (cVar1 != '\0') {
                piVar8 = (int *)FUN_0042c6c0();
                if ((*piVar8 == *(int *)(*(int *)(unaff_EDI + 0x8006d0) + 8)) &&
                   (piVar8[1] == *(int *)(*(int *)(unaff_EDI + 0x8006d0) + 0xc))) {
                  FUN_0042c6c0();
                  FUN_004861a0();
                }
                FUN_00468d30();
                FUN_0060a9f0();
                cVar1 = FUN_004688d0();
              }
            }
            if (*(int *)(unaff_EDI + 0x8006c8) != 0) {
              FUN_004dc8e0();
            }
            iVar7 = *(int *)(unaff_EDI + 0x8006d0);
            cVar1 = *(char *)(iVar7 + 0x68);
            if ((((((cVar1 != 'S') && (cVar1 != 'j')) && (cVar1 != 'k')) &&
                 (((cVar1 != 'R' && (cVar1 != 'T')) &&
                  ((cVar1 != '\b' && ((cVar1 != '#' && (cVar1 != 'O')))))))) && (cVar1 != '\x1c'))
               && (((cVar1 != '\x1d' && (cVar1 != '$')) && (*(char *)(unaff_EDI + 5) == '\0')))) {
              if (*(char *)(iVar7 + 0x1020) == '\x14') {
                iVar9 = FUN_0043d1a0();
                iVar7 = *(int *)(unaff_EDI + 0x8006d0);
                if (iVar9 + 500 < *(int *)(iVar7 + 0x6c)) {
                  *(undefined1 *)(iVar7 + 0x68) = 0x52;
                  goto LAB_0049c2e6;
                }
              }
              if (10000 < *(int *)(iVar7 + 0x6c)) {
                *(undefined1 *)(iVar7 + 0x68) = 0;
              }
            }
LAB_0049c2e6:
            FUN_00423e70();
            uStack0000006c = FUN_00428970();
            FUN_00424610();
            uStack00000064 = FUN_00428970();
            FUN_004244f0();
            uStack00000060 = FUN_00428970();
            FUN_004243d0();
            FUN_0042c7a0();
            FUN_0042c4a0();
            fVar11 = (float10)FUN_00424860();
            in_stack_000000ac = (float)fVar11;
            if (2500.0 < in_stack_000000ac) {
              FUN_0042c5b0();
            }
            cVar1 = FUN_0047fa10();
            if (((cVar1 == '\0') && (cVar1 = FUN_0047fa10(), cVar1 == '\0')) &&
               ((cVar1 = FUN_0047fa10(), cVar1 == '\0' && (cVar1 = FUN_0047fa10(), cVar1 == '\0'))))
            {
              in_stack_000000d8 = 0;
              fStack00000084 = 1.0;
              FUN_004aba20();
              pCStack00000074 = (CRefTime *)FUN_004120b0();
              FUN_004120b0();
              FUN_00412200();
              FUN_00468ca0();
              FUN_0042c9b0();
              pCStack00000020 = (CRefTime *)FUN_004120b0();
              FUN_004120b0();
              FUN_00412200();
              FUN_00468ca0();
              FUN_0042c9b0();
              cVar1 = FUN_0047fa10();
              if ((cVar1 == '\0') && (cVar1 = FUN_0047fa10(), cVar1 == '\0')) {
                cVar1 = *(char *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68);
                if ((cVar1 == 'T') || (cVar1 == 'S')) {
                  FUN_00428970();
                  FUN_004120b0();
                  FUN_00412220();
                }
                else {
                  if ((cVar1 == 'j') || (cVar1 == 'k')) {
                    FUN_00428970();
                  }
                  else {
                    FUN_00428970();
                  }
                  FUN_004120b0();
                  FUN_00412220();
                  FUN_004122e0();
                }
                FUN_004122e0();
              }
              else {
                FUN_004120b0();
                FUN_00412220();
              }
              FUN_004120b0();
              FUN_004573d0();
            }
            else {
              FUN_00487fe0();
              FUN_0042c460();
              pCStack00000020 = (CRefTime *)FUN_004120b0();
              pCVar10 = (CRefTime *)FUN_004120b0();
              pCStack00000074 = pCVar10;
              CRefTime::Millisecs(pCStack00000020);
              CRefTime::Millisecs(pCVar10);
              fStack00000084 = (float)FUN_004347a0();
              if (fStack00000084 != 0.0) {
                FUN_004348b0();
                FUN_00434b70();
                FUN_004120b0();
                FUN_00412080();
              }
              FUN_00412080();
              FUN_004120b0();
              FUN_0042c9b0();
            }
            iStack00000054 = unaff_EDI + 0x140;
            FUN_0042c5b0();
            FUN_0040ea90();
            FUN_00488e50();
            pfVar3 = in_stack_000000a8;
            FUN_00451510();
            FUN_0042c460();
            FUN_0042c9d0();
            fStack00000088 = *pfVar3;
            in_stack_0000001c = 0;
            FUN_004120b0();
            fStack00000084 = (float)FUN_004120b0();
            in_stack_000000ac = (float)FUN_004120b0();
            do {
              in_stack_00000048 = 0.0;
              do {
                iVar7 = 0;
                do {
                  FUN_00459c00();
                  FUN_00459c00();
                  FUN_00459c00();
                  FUN_00459c00();
                  FUN_0043b610();
                  FUN_0042c6e0();
                  FUN_0042c800();
                  FUN_0042f860();
                  cVar1 = FUN_0043b480();
                  if (cVar1 != '\0') {
                    fVar11 = (float10)FUN_005a35d0();
                    in_stack_000001c0 = (float)fVar11;
                    if (*in_stack_000000a8 - in_stack_000001c0 < fStack00000088) {
                      fStack00000088 = *in_stack_000000a8 - in_stack_000001c0;
                    }
                  }
                  iVar7 = iVar7 + 1;
                } while (iVar7 < 2);
                in_stack_00000048 = (float)((int)in_stack_00000048 + 1);
              } while ((int)in_stack_00000048 < 2);
              in_stack_0000001c = in_stack_0000001c + 1;
            } while (in_stack_0000001c < 2);
            *in_stack_000000a8 = fStack00000088;
            FUN_00451510();
            FUN_0042c460();
            FUN_0042c7a0();
            FUN_0042c5b0();
            iVar7 = in_stack_00000010;
            *(float *)(in_stack_00000010 + 0x1cc) = *in_stack_000000a8;
            FUN_0042c5b0();
            in_stack_000000d8 = FUN_004120b0();
            fStack00000088 = (float)FUN_004120b0();
            FUN_004120b0();
            FUN_0042f860();
            cVar1 = FUN_0043b480();
            if (cVar1 != '\0') {
              FUN_0042c7a0();
              FUN_0042c4a0();
              fVar11 = (float10)FUN_00424860();
              fStack00000084 = (float)fVar11;
              if (0.0 < fStack00000084) {
                FUN_004240f0();
                fVar11 = (float10)FUN_005a35d0();
                fStack00000084 = (float)fVar11;
                if (0.0 <= fStack00000084) {
                  FUN_00451510();
                  FUN_0042c460();
                  FUN_0042c800();
                  FUN_0042c5b0();
                }
              }
            }
            FUN_00423e70();
            FUN_0042c4a0();
            FUN_00424990();
            FUN_00424610();
            FUN_004244f0();
            FUN_004243d0();
            FUN_00423e70();
            FUN_004243d0();
            FUN_004244f0();
            FUN_00424610();
            FUN_00468e70();
            FUN_0042c4a0();
            FUN_00424990();
            FUN_00412260();
            FUN_00411df0();
            FUN_00412260();
            FUN_00411df0();
            FUN_00423e70();
            in_stack_00000048 = *(float *)(iVar7 + 0x1e8) * 0.5;
            FUN_00488b80();
            fVar11 = (float10)FUN_0040e420();
            fStack00000084 = (float)fVar11;
            FUN_00488b80();
            fVar11 = (float10)FUN_0040e420();
            fStack00000084 = (float)fVar11;
            FUN_00434b80();
            FUN_004243d0();
            FUN_004244f0();
            FUN_00424610();
            FUN_00412080();
            FUN_0043b610();
            FUN_00468e70();
            FUN_0042c7a0();
            FUN_0042c4a0();
            FUN_00424990();
            uStack000001cc = 0;
            FUN_004aba20();
            EnterCriticalSection((LPCRITICAL_SECTION)(iVar7 + 0x8005d0));
            FUN_00469060();
            FUN_0043abc0();
            FUN_004120f0();
            FUN_00469060();
            FUN_0043abc0();
            FUN_004120f0();
            FUN_0040ea50();
            FUN_0062f720();
            FUN_004120f0();
            FUN_004120f0();
            FUN_0040ea50();
            FUN_0062f720();
            in_stack_00000048 = (float)(iVar7 + 0x2c4);
            FUN_0046f870();
            if (*(int *)(iVar7 + 0x8006c8) == 0) {
              pCVar10 = (CRefTime *)FUN_004120b0();
              CRefTime::Millisecs(pCVar10);
              pCVar10 = (CRefTime *)FUN_004120b0();
              CRefTime::Millisecs(pCVar10);
              FUN_0040ea30();
              FUN_00469000();
              FUN_00486560();
            }
            else {
              FUN_0046f440();
              FUN_0060a9f0();
              cVar1 = FUN_004688d0();
              while (cVar1 != '\0') {
                iVar7 = FUN_00468c90();
                if ((*(int *)(iVar7 + 8) != 0) && (*(char *)(*(int *)(iVar7 + 8) + 0x60) == '\0')) {
                  pCVar10 = (CRefTime *)FUN_004120b0();
                  CRefTime::Millisecs(pCVar10);
                  pCVar10 = (CRefTime *)FUN_004120b0();
                  CRefTime::Millisecs(pCVar10);
                  FUN_0040ea30();
                  FUN_00469000();
                  FUN_00486560();
                }
                FUN_00468d70();
                FUN_0060a9f0();
                cVar1 = FUN_004688d0();
                iVar7 = in_stack_00000010;
              }
            }
            in_stack_0000001c = iVar7 + 0x2cc;
            FUN_0046f870();
            fStack00000084 = (float)(iVar7 + 0x2d4);
            FUN_0046f870();
            FUN_0046f440();
            FUN_0060a9f0();
            cVar1 = FUN_004688d0();
            while (cVar1 != '\0') {
              FUN_0042c6c0();
              in_stack_00000048 = (float)FUN_00428970();
              uStack000001cc = FUN_00428970();
              iVar7 = FUN_00434d10();
              if ((iVar7 != 0) && (*(char *)(iVar7 + 0x74) != '\0')) {
                FUN_00486560();
              }
              iVar7 = FUN_00434a90();
              if ((iVar7 != 0) && (*(char *)(iVar7 + 8) != '\0')) {
                FUN_00469000();
                FUN_00486560();
              }
              FUN_00468d30();
              FUN_0060a9f0();
              cVar1 = FUN_004688d0();
              iVar7 = in_stack_00000010;
            }
            FUN_00469060();
            FUN_004120f0();
            FUN_00469060();
            FUN_004120f0();
            FUN_0040ea50();
            FUN_0062f720();
            if (*(int *)(iVar7 + 0x8006cc) == 0) {
              FUN_0046f870();
              FUN_0046f870();
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)(iVar7 + 0x8005d0));
            FUN_00601e90();
            FUN_00659fb0();
            FUN_004da480();
            FUN_004da480();
            FUN_004da480();
            std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
            basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
                      ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        *)&stack0x00000e2c);
            FUN_00593e50();
            FUN_00593e50();
            FUN_005fb860();
            FUN_005fb860();
            FUN_00467c70();
            uStack00000008 = 0x49d389;
            ExceptionList = in_stack_00004760;
            __security_check_cookie(in_stack_00004758 ^ (uint)&stack0x0000000c);
            return;
          }
          piVar8 = (int *)FUN_00468c60();
        } while (*piVar8 == 0);
        if (*(char *)(unaff_EDI + 4 + unaff_ESI) == '\0') {
          puVar6 = (uint *)FUN_00468c60();
          if (*puVar6 == (uint)*(byte *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68))
          goto code_r0x0049bdd8;
          goto LAB_0049bf4d;
        }
        in_stack_00000017 = '\x01';
        cVar1 = FUN_0043e350();
      } while ((cVar1 == '\0') && (iVar9 < 1));
      FUN_00468c60();
      cVar1 = FUN_0043e5a0();
    } while (cVar1 == '\0');
    if (*(char *)(*(int *)(unaff_EDI + 0x8006d0) + 0x1020) == '\x14') {
      FUN_0046ebe0();
      FUN_0042f3e0();
      FUN_0042c5e0();
    }
    puVar2 = (undefined4 *)FUN_00468c60();
    switch(*puVar2) {
    case 3:
    case 4:
    case 0x17:
    case 0x1f:
    case 0x21:
    case 0x25:
    case 0x2d:
    case 0x2e:
    case 0x41:
    case 0x42:
    case 0x5e:
    case 0x5f:
      FUN_004456a0();
      goto LAB_0049bf4d;
    case 5:
      if (*(float *)(*(int *)(unaff_EDI + 0x8006d0) + 0x170) <= 0.0) goto LAB_0049bf4d;
      *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 5;
      break;
    default:
      FUN_00468c60();
      in_stack_00000048 = *(float *)(unaff_EDI + 0x8006d0);
      fVar11 = (float10)FUN_00444ae0();
      in_stack_000000ac = (float)fVar11;
      if (in_stack_000000ac <= *(float *)((int)in_stack_00000048 + 0x170)) {
        puVar5 = (undefined1 *)FUN_00468c60();
        iVar7 = (int)in_stack_00000048;
        goto code_r0x0049bd93;
      }
      goto LAB_0049bf4d;
    case 8:
    case 0x18:
    case 0x19:
    case 0x1b:
    case 0x3b:
    case 0x3f:
    case 0x40:
      puVar6 = (uint *)FUN_00468c60();
      if ((uint)*(byte *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) == *puVar6) goto LAB_0049bf4d;
      puVar5 = (undefined1 *)FUN_00468c60();
      iVar7 = *(int *)(unaff_EDI + 0x8006d0);
code_r0x0049bd93:
      *(undefined1 *)(iVar7 + 0x68) = *puVar5;
      break;
    case 10:
      if (*(char *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) == '\n') goto LAB_0049bf4d;
      *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 10;
      break;
    case 0xb:
      *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0xb;
      break;
    case 0x11:
      if (*(float *)(*(int *)(unaff_EDI + 0x8006d0) + 0x170) <= 0.0) goto LAB_0049bf4d;
      *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x11;
      break;
    case 0x14:
      if (*(float *)(*(int *)(unaff_EDI + 0x8006d0) + 0x170) <= 0.0) goto LAB_0049bf4d;
      *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x14;
      break;
    case 0x1c:
      if ((0.0 < *(float *)(*(int *)(unaff_EDI + 0x8006d0) + 0x170)) &&
         (puVar6 = (uint *)FUN_00468c60(),
         (uint)*(byte *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) != *puVar6)) {
        puVar5 = (undefined1 *)FUN_00468c60();
        *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = *puVar5;
        *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
      }
      goto LAB_0049bf4d;
    case 0x22:
      in_stack_00000018 = *(float *)(unaff_EDI + 0x8006d0);
      iVar7 = FUN_0043d1a0();
      if (iVar7 <= *(int *)((int)in_stack_00000018 + 0x6c)) {
        *(undefined1 *)((int)in_stack_00000018 + 0x68) = 0x22;
        *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
        iVar7 = *(int *)(unaff_EDI + 0x8006d0);
        *(undefined4 *)(iVar7 + 0x1a0) = *(undefined4 *)(iVar7 + 8);
        *(undefined4 *)(iVar7 + 0x1a4) = *(undefined4 *)(iVar7 + 0xc);
      }
      goto LAB_0049bf4d;
    case 0x30:
      puVar5 = (undefined1 *)FUN_00468c60();
      *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = *puVar5;
      FUN_00411e30();
      iVar7 = *(int *)(unaff_EDI + 0x8006d0);
      fVar11 = (float10)FUN_00423f20();
      in_stack_00000018 = (float)fVar11;
      *(int *)(iVar7 + 0x11d8) = (int)((in_stack_00000018 / 50.0) * 1000.0);
      iVar7 = *(int *)(unaff_EDI + 0x8006d0);
      in_stack_00000028 = iVar7 + 0x34;
      fVar11 = (float10)FUN_00424860();
      in_stack_00000018 = (float)fVar11;
      if (0.0 < in_stack_00000018) {
        FUN_004240f0();
        FUN_00412780();
        iVar7 = *(int *)(unaff_EDI + 0x8006d0);
        pfVar3 = (float *)FUN_00428970();
        if (5.0 < *pfVar3) {
          *pfVar3 = 5.0;
        }
      }
      goto code_r0x0049b8d5;
    case 0x32:
      FUN_00468e20();
      FUN_00411e30();
      in_stack_00000048 = *(float *)(unaff_EDI + 0x8006d0);
      puVar2 = (undefined4 *)FUN_00428970();
      *puVar2 = 0;
      fVar11 = (float10)FUN_00424860();
      in_stack_00000018 = (float)fVar11;
      if (0.0 < in_stack_00000018) {
        FUN_004240f0();
        fVar11 = (float10)FUN_0043ed60();
        in_stack_00000018 = (float)fVar11;
        FUN_00412780();
        in_stack_00000048 = *(float *)(unaff_EDI + 0x8006d0);
        fVar11 = (float10)FUN_0043ed60();
        in_stack_00000018 = (float)fVar11 * 12.0 + 5.0;
        pfVar3 = (float *)FUN_00428970();
        *pfVar3 = in_stack_00000018;
      }
      in_stack_000001c0 = 7.00649e-44;
      puVar2 = (undefined4 *)FUN_00468910();
      uVar4 = FUN_0043e6a0();
      *puVar2 = uVar4;
      unaff_ESI = iStack00000070;
      goto LAB_0049bf4d;
    case 0x36:
      puVar5 = (undefined1 *)FUN_00468c60();
      *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = *puVar5;
      FUN_004252f0();
      FUN_00411e30();
      iVar7 = *(int *)(unaff_EDI + 0x8006d0);
      fVar11 = (float10)FUN_00423f20();
      in_stack_00000018 = (float)fVar11;
      *(int *)(iVar7 + 0x11d8) = (int)((in_stack_00000018 / 50.0) * 1000.0);
      fVar11 = (float10)FUN_00424860();
      in_stack_00000018 = (float)fVar11;
      if (2500.0 < in_stack_00000018) {
        FUN_004240f0();
        FUN_00412780();
      }
      iVar7 = *(int *)(unaff_EDI + 0x8006d0);
      puVar2 = (undefined4 *)FUN_00428970();
      *puVar2 = 0x41700000;
code_r0x0049b8d5:
      *(undefined4 *)(iVar7 + 0x6c) = 0;
      *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x128) = 0;
      unaff_ESI = iStack00000070;
      goto LAB_0049bf4d;
    case 0x60:
      *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x60;
      FUN_00468e20();
      FUN_00411e30();
      in_stack_0000001c = *(int *)(unaff_EDI + 0x8006d0);
      in_stack_00000048 = (float)(in_stack_0000001c + 0x34);
      puVar2 = (undefined4 *)FUN_00428970();
      *puVar2 = 0;
      fVar11 = (float10)FUN_00424860();
      in_stack_000000ac = (float)fVar11;
      if (0.0 < in_stack_000000ac) {
        FUN_004240f0();
        FUN_00412780();
        in_stack_0000001c = *(int *)(unaff_EDI + 0x8006d0);
        puVar2 = (undefined4 *)FUN_00428970();
        *puVar2 = 0x41a00000;
      }
      *(undefined4 *)(in_stack_0000001c + 0x6c) = 0;
      *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x128) = 600;
      goto LAB_0049bf4d;
    case 0x61:
      goto code_r0x0049b794;
    case 99:
      FUN_0042f160();
      in_stack_000000ac = 1.38729e-43;
      puVar2 = (undefined4 *)FUN_00468910();
      uVar4 = FUN_0043e6a0();
      *puVar2 = uVar4;
      unaff_ESI = iStack00000070;
      goto LAB_0049bf4d;
    case 100:
      goto code_r0x0049b794;
    case 0x65:
      FUN_00595850();
      FUN_00484350();
      goto LAB_0049bf4d;
    case 0x66:
code_r0x0049b794:
      FUN_00595850();
      goto LAB_0049bf4d;
    case 0x67:
      FUN_00595850();
      FUN_00484350();
      goto LAB_0049bf4d;
    }
    *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
    *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x128) = 0;
    goto LAB_0049bf4d;
  case 10:
    in_stack_000000ac = *(float *)(unaff_EDI + 0x8006d0);
    iVar7 = FUN_0043d1a0();
    if (iVar7 < *(int *)((int)in_stack_000000ac + 0x6c)) {
      *(undefined1 *)((int)in_stack_000000ac + 0x68) = 3;
      uVar4 = FUN_0043d1a0();
      *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = uVar4;
    }
    goto LAB_0049bf4d;
  case 0x18:
    goto code_r0x0049be73;
  case 0x19:
    *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x37;
    *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
    goto LAB_0049bf4d;
  case 0x1b:
    *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x1a;
    *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
    goto LAB_0049bf4d;
  case 0x23:
    *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0;
    *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
    goto LAB_0049bf4d;
  case 0x24:
    *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x25;
    *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
    goto LAB_0049bf4d;
  case 0x3b:
    iVar7 = *(int *)(unaff_EDI + 0x8006d0);
    if (*(char *)(iVar7 + 0x141) != '\x01') {
      *(undefined1 *)(iVar7 + 0x68) = 0x3c;
      FUN_0043caa0();
      FUN_0049bf44();
      return;
    }
    *(undefined1 *)(iVar7 + 0x68) = 0x3d;
    *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
    goto LAB_0049bf4d;
  case 0x3f:
    *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0xb;
    FUN_0043caa0();
    FUN_0049bf44();
    return;
  case 0x40:
    *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x10;
    FUN_0043caa0();
    FUN_0049bf44();
    return;
  }
}


/* FUN_0049bf44 @ 0049bf44  kind=gamemisc  attributed-by=none  size=5184 */

/* WARNING (jumptable): Unable to track spacebase fully for stack */

void FUN_0049bf44(void)

{
  char cVar1;
  undefined4 *puVar2;
  float *pfVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint *puVar6;
  undefined4 in_EAX;
  int iVar7;
  int *piVar8;
  int iVar9;
  CRefTime *pCVar10;
  int unaff_ESI;
  int unaff_EDI;
  float10 fVar11;
  undefined4 uStack00000008;
  int in_stack_00000010;
  char in_stack_00000017;
  float in_stack_00000018;
  int in_stack_0000001c;
  CRefTime *pCStack00000020;
  int in_stack_00000028;
  float in_stack_00000048;
  int iStack00000054;
  undefined4 uStack00000060;
  undefined4 uStack00000064;
  undefined4 uStack0000006c;
  int iStack00000070;
  CRefTime *pCStack00000074;
  float fStack00000084;
  float fStack00000088;
  float *in_stack_000000a8;
  float in_stack_000000ac;
  undefined4 in_stack_000000d8;
  float in_stack_000001c0;
  undefined4 uStack000001cc;
  uint in_stack_00004758;
  void *in_stack_00004760;
  
code_r0x0049bf44:
  *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = in_EAX;
LAB_0049bf4d:
  do {
    do {
      do {
        iVar9 = unaff_ESI;
        unaff_ESI = iVar9 + 1;
        iStack00000070 = unaff_ESI;
        iVar7 = FUN_00487f50();
        if (iVar7 + -1 <= iVar9) {
          if ((((in_stack_00000017 == '\0') &&
               (*(char *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) != '0')) &&
              (*(char *)(unaff_EDI + 4) != '\0')) &&
             (FUN_00445410(), *(char *)(*(int *)(unaff_EDI + 0x8006d0) + 0x1020) == '\x14')) {
            FUN_0046ebe0();
            FUN_0042f3e0();
            FUN_0042c5e0();
          }
          if (((*(char *)(unaff_EDI + 5) == '\0') &&
              (piVar8 = (int *)FUN_00468c60(), *piVar8 == 0x1c)) &&
             (*(char *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) == '\x1c')) {
            *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0;
          }
          if (((*(char *)(unaff_EDI + 4) == '\0') &&
              (piVar8 = (int *)FUN_00468c60(), *piVar8 == 0x1d)) &&
             (*(char *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) == '\x1d')) {
            *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0;
          }
          if (in_stack_00000017 != '\0') {
            FUN_0042f160();
          }
          if (*(int *)(unaff_EDI + 0x8006cc) != 0) {
            FUN_0046f440();
            FUN_0060a9f0();
            cVar1 = FUN_004688d0();
            while (cVar1 != '\0') {
              piVar8 = (int *)FUN_0042c6c0();
              if ((*piVar8 == *(int *)(*(int *)(unaff_EDI + 0x8006d0) + 8)) &&
                 (piVar8[1] == *(int *)(*(int *)(unaff_EDI + 0x8006d0) + 0xc))) {
                FUN_0042c6c0();
                FUN_00486290();
              }
              FUN_00468d30();
              FUN_0060a9f0();
              cVar1 = FUN_004688d0();
            }
            FUN_0046f440();
            FUN_0060a9f0();
            cVar1 = FUN_004688d0();
            while (cVar1 != '\0') {
              piVar8 = (int *)FUN_0042c6c0();
              if ((*piVar8 == *(int *)(*(int *)(unaff_EDI + 0x8006d0) + 8)) &&
                 (piVar8[1] == *(int *)(*(int *)(unaff_EDI + 0x8006d0) + 0xc))) {
                FUN_0042c6c0();
                FUN_004460a0();
              }
              FUN_00468d30();
              FUN_0060a9f0();
              cVar1 = FUN_004688d0();
            }
            FUN_0046f440();
            FUN_0060a9f0();
            cVar1 = FUN_004688d0();
            while (cVar1 != '\0') {
              piVar8 = (int *)FUN_0042c6c0();
              if ((*piVar8 == *(int *)(*(int *)(unaff_EDI + 0x8006d0) + 8)) &&
                 (piVar8[1] == *(int *)(*(int *)(unaff_EDI + 0x8006d0) + 0xc))) {
                FUN_0042c6c0();
                FUN_004861a0();
              }
              FUN_00468d30();
              FUN_0060a9f0();
              cVar1 = FUN_004688d0();
            }
          }
          if (*(int *)(unaff_EDI + 0x8006c8) != 0) {
            FUN_004dc8e0();
          }
          iVar7 = *(int *)(unaff_EDI + 0x8006d0);
          cVar1 = *(char *)(iVar7 + 0x68);
          if ((((((cVar1 != 'S') && (cVar1 != 'j')) && (cVar1 != 'k')) &&
               (((cVar1 != 'R' && (cVar1 != 'T')) &&
                ((cVar1 != '\b' && ((cVar1 != '#' && (cVar1 != 'O')))))))) && (cVar1 != '\x1c')) &&
             (((cVar1 != '\x1d' && (cVar1 != '$')) && (*(char *)(unaff_EDI + 5) == '\0')))) {
            if (*(char *)(iVar7 + 0x1020) == '\x14') {
              iVar9 = FUN_0043d1a0();
              iVar7 = *(int *)(unaff_EDI + 0x8006d0);
              if (iVar9 + 500 < *(int *)(iVar7 + 0x6c)) {
                *(undefined1 *)(iVar7 + 0x68) = 0x52;
                goto LAB_0049c2e6;
              }
            }
            if (10000 < *(int *)(iVar7 + 0x6c)) {
              *(undefined1 *)(iVar7 + 0x68) = 0;
            }
          }
LAB_0049c2e6:
          FUN_00423e70();
          uStack0000006c = FUN_00428970();
          FUN_00424610();
          uStack00000064 = FUN_00428970();
          FUN_004244f0();
          uStack00000060 = FUN_00428970();
          FUN_004243d0();
          FUN_0042c7a0();
          FUN_0042c4a0();
          fVar11 = (float10)FUN_00424860();
          in_stack_000000ac = (float)fVar11;
          if (2500.0 < in_stack_000000ac) {
            FUN_0042c5b0();
          }
          cVar1 = FUN_0047fa10();
          if (((cVar1 == '\0') && (cVar1 = FUN_0047fa10(), cVar1 == '\0')) &&
             ((cVar1 = FUN_0047fa10(), cVar1 == '\0' && (cVar1 = FUN_0047fa10(), cVar1 == '\0')))) {
            in_stack_000000d8 = 0;
            fStack00000084 = 1.0;
            FUN_004aba20();
            pCStack00000074 = (CRefTime *)FUN_004120b0();
            FUN_004120b0();
            FUN_00412200();
            FUN_00468ca0();
            FUN_0042c9b0();
            pCStack00000020 = (CRefTime *)FUN_004120b0();
            FUN_004120b0();
            FUN_00412200();
            FUN_00468ca0();
            FUN_0042c9b0();
            cVar1 = FUN_0047fa10();
            if ((cVar1 == '\0') && (cVar1 = FUN_0047fa10(), cVar1 == '\0')) {
              cVar1 = *(char *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68);
              if ((cVar1 == 'T') || (cVar1 == 'S')) {
                FUN_00428970();
                FUN_004120b0();
                FUN_00412220();
              }
              else {
                if ((cVar1 == 'j') || (cVar1 == 'k')) {
                  FUN_00428970();
                }
                else {
                  FUN_00428970();
                }
                FUN_004120b0();
                FUN_00412220();
                FUN_004122e0();
              }
              FUN_004122e0();
            }
            else {
              FUN_004120b0();
              FUN_00412220();
            }
            FUN_004120b0();
            FUN_004573d0();
          }
          else {
            FUN_00487fe0();
            FUN_0042c460();
            pCStack00000020 = (CRefTime *)FUN_004120b0();
            pCVar10 = (CRefTime *)FUN_004120b0();
            pCStack00000074 = pCVar10;
            CRefTime::Millisecs(pCStack00000020);
            CRefTime::Millisecs(pCVar10);
            fStack00000084 = (float)FUN_004347a0();
            if (fStack00000084 != 0.0) {
              FUN_004348b0();
              FUN_00434b70();
              FUN_004120b0();
              FUN_00412080();
            }
            FUN_00412080();
            FUN_004120b0();
            FUN_0042c9b0();
          }
          iStack00000054 = unaff_EDI + 0x140;
          FUN_0042c5b0();
          FUN_0040ea90();
          FUN_00488e50();
          pfVar3 = in_stack_000000a8;
          FUN_00451510();
          FUN_0042c460();
          FUN_0042c9d0();
          fStack00000088 = *pfVar3;
          in_stack_0000001c = 0;
          FUN_004120b0();
          fStack00000084 = (float)FUN_004120b0();
          in_stack_000000ac = (float)FUN_004120b0();
          do {
            in_stack_00000048 = 0.0;
            do {
              iVar7 = 0;
              do {
                FUN_00459c00();
                FUN_00459c00();
                FUN_00459c00();
                FUN_00459c00();
                FUN_0043b610();
                FUN_0042c6e0();
                FUN_0042c800();
                FUN_0042f860();
                cVar1 = FUN_0043b480();
                if (cVar1 != '\0') {
                  fVar11 = (float10)FUN_005a35d0();
                  in_stack_000001c0 = (float)fVar11;
                  if (*in_stack_000000a8 - in_stack_000001c0 < fStack00000088) {
                    fStack00000088 = *in_stack_000000a8 - in_stack_000001c0;
                  }
                }
                iVar7 = iVar7 + 1;
              } while (iVar7 < 2);
              in_stack_00000048 = (float)((int)in_stack_00000048 + 1);
            } while ((int)in_stack_00000048 < 2);
            in_stack_0000001c = in_stack_0000001c + 1;
          } while (in_stack_0000001c < 2);
          *in_stack_000000a8 = fStack00000088;
          FUN_00451510();
          FUN_0042c460();
          FUN_0042c7a0();
          FUN_0042c5b0();
          iVar7 = in_stack_00000010;
          *(float *)(in_stack_00000010 + 0x1cc) = *in_stack_000000a8;
          FUN_0042c5b0();
          in_stack_000000d8 = FUN_004120b0();
          fStack00000088 = (float)FUN_004120b0();
          FUN_004120b0();
          FUN_0042f860();
          cVar1 = FUN_0043b480();
          if (cVar1 != '\0') {
            FUN_0042c7a0();
            FUN_0042c4a0();
            fVar11 = (float10)FUN_00424860();
            fStack00000084 = (float)fVar11;
            if (0.0 < fStack00000084) {
              FUN_004240f0();
              fVar11 = (float10)FUN_005a35d0();
              fStack00000084 = (float)fVar11;
              if (0.0 <= fStack00000084) {
                FUN_00451510();
                FUN_0042c460();
                FUN_0042c800();
                FUN_0042c5b0();
              }
            }
          }
          FUN_00423e70();
          FUN_0042c4a0();
          FUN_00424990();
          FUN_00424610();
          FUN_004244f0();
          FUN_004243d0();
          FUN_00423e70();
          FUN_004243d0();
          FUN_004244f0();
          FUN_00424610();
          FUN_00468e70();
          FUN_0042c4a0();
          FUN_00424990();
          FUN_00412260();
          FUN_00411df0();
          FUN_00412260();
          FUN_00411df0();
          FUN_00423e70();
          in_stack_00000048 = *(float *)(iVar7 + 0x1e8) * 0.5;
          FUN_00488b80();
          fVar11 = (float10)FUN_0040e420();
          fStack00000084 = (float)fVar11;
          FUN_00488b80();
          fVar11 = (float10)FUN_0040e420();
          fStack00000084 = (float)fVar11;
          FUN_00434b80();
          FUN_004243d0();
          FUN_004244f0();
          FUN_00424610();
          FUN_00412080();
          FUN_0043b610();
          FUN_00468e70();
          FUN_0042c7a0();
          FUN_0042c4a0();
          FUN_00424990();
          uStack000001cc = 0;
          FUN_004aba20();
          EnterCriticalSection((LPCRITICAL_SECTION)(iVar7 + 0x8005d0));
          FUN_00469060();
          FUN_0043abc0();
          FUN_004120f0();
          FUN_00469060();
          FUN_0043abc0();
          FUN_004120f0();
          FUN_0040ea50();
          FUN_0062f720();
          FUN_004120f0();
          FUN_004120f0();
          FUN_0040ea50();
          FUN_0062f720();
          in_stack_00000048 = (float)(iVar7 + 0x2c4);
          FUN_0046f870();
          if (*(int *)(iVar7 + 0x8006c8) == 0) {
            pCVar10 = (CRefTime *)FUN_004120b0();
            CRefTime::Millisecs(pCVar10);
            pCVar10 = (CRefTime *)FUN_004120b0();
            CRefTime::Millisecs(pCVar10);
            FUN_0040ea30();
            FUN_00469000();
            FUN_00486560();
          }
          else {
            FUN_0046f440();
            FUN_0060a9f0();
            cVar1 = FUN_004688d0();
            while (cVar1 != '\0') {
              iVar7 = FUN_00468c90();
              if ((*(int *)(iVar7 + 8) != 0) && (*(char *)(*(int *)(iVar7 + 8) + 0x60) == '\0')) {
                pCVar10 = (CRefTime *)FUN_004120b0();
                CRefTime::Millisecs(pCVar10);
                pCVar10 = (CRefTime *)FUN_004120b0();
                CRefTime::Millisecs(pCVar10);
                FUN_0040ea30();
                FUN_00469000();
                FUN_00486560();
              }
              FUN_00468d70();
              FUN_0060a9f0();
              cVar1 = FUN_004688d0();
              iVar7 = in_stack_00000010;
            }
          }
          in_stack_0000001c = iVar7 + 0x2cc;
          FUN_0046f870();
          fStack00000084 = (float)(iVar7 + 0x2d4);
          FUN_0046f870();
          FUN_0046f440();
          FUN_0060a9f0();
          cVar1 = FUN_004688d0();
          while (cVar1 != '\0') {
            FUN_0042c6c0();
            in_stack_00000048 = (float)FUN_00428970();
            uStack000001cc = FUN_00428970();
            iVar7 = FUN_00434d10();
            if ((iVar7 != 0) && (*(char *)(iVar7 + 0x74) != '\0')) {
              FUN_00486560();
            }
            iVar7 = FUN_00434a90();
            if ((iVar7 != 0) && (*(char *)(iVar7 + 8) != '\0')) {
              FUN_00469000();
              FUN_00486560();
            }
            FUN_00468d30();
            FUN_0060a9f0();
            cVar1 = FUN_004688d0();
            iVar7 = in_stack_00000010;
          }
          FUN_00469060();
          FUN_004120f0();
          FUN_00469060();
          FUN_004120f0();
          FUN_0040ea50();
          FUN_0062f720();
          if (*(int *)(iVar7 + 0x8006cc) == 0) {
            FUN_0046f870();
            FUN_0046f870();
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)(iVar7 + 0x8005d0));
          FUN_00601e90();
          FUN_00659fb0();
          FUN_004da480();
          FUN_004da480();
          FUN_004da480();
          std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
          basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
                    ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                      *)&stack0x00000e2c);
          FUN_00593e50();
          FUN_00593e50();
          FUN_005fb860();
          FUN_005fb860();
          FUN_00467c70();
          uStack00000008 = 0x49d389;
          ExceptionList = in_stack_00004760;
          __security_check_cookie(in_stack_00004758 ^ (uint)&stack0x0000000c);
          return;
        }
        piVar8 = (int *)FUN_00468c60();
      } while (*piVar8 == 0);
      if (*(char *)(unaff_EDI + 4 + unaff_ESI) == '\0') {
        puVar6 = (uint *)FUN_00468c60();
        if (*puVar6 == (uint)*(byte *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68)) {
          puVar2 = (undefined4 *)FUN_00468c60();
          switch(*puVar2) {
          case 8:
            *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x68;
            *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
            break;
          case 10:
            goto DAT_0049bf15;
          case 0x18:
            *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x17;
            *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
            break;
          case 0x19:
            *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x37;
            *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
            break;
          case 0x1b:
            *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x1a;
            *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
            break;
          case 0x23:
            *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0;
            *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
            break;
          case 0x24:
            *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x25;
            *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
            break;
          case 0x3b:
            iVar7 = *(int *)(unaff_EDI + 0x8006d0);
            if (*(char *)(iVar7 + 0x141) != '\x01') {
              *(undefined1 *)(iVar7 + 0x68) = 0x3c;
              FUN_0043caa0();
              FUN_0049bf44();
              return;
            }
            *(undefined1 *)(iVar7 + 0x68) = 0x3d;
            *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
            break;
          case 0x3f:
            *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0xb;
            FUN_0043caa0();
            FUN_0049bf44();
            return;
          case 0x40:
            *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x10;
            FUN_0043caa0();
            FUN_0049bf44();
            return;
          }
        }
        goto LAB_0049bf4d;
      }
      in_stack_00000017 = '\x01';
      cVar1 = FUN_0043e350();
    } while ((cVar1 == '\0') && (iVar9 < 1));
    FUN_00468c60();
    cVar1 = FUN_0043e5a0();
  } while (cVar1 == '\0');
  if (*(char *)(*(int *)(unaff_EDI + 0x8006d0) + 0x1020) == '\x14') {
    FUN_0046ebe0();
    FUN_0042f3e0();
    FUN_0042c5e0();
  }
  puVar2 = (undefined4 *)FUN_00468c60();
  switch(*puVar2) {
  case 3:
  case 4:
  case 0x17:
  case 0x1f:
  case 0x21:
  case 0x25:
  case 0x2d:
  case 0x2e:
  case 0x41:
  case 0x42:
  case 0x5e:
  case 0x5f:
    FUN_004456a0();
    goto LAB_0049bf4d;
  case 5:
    if (*(float *)(*(int *)(unaff_EDI + 0x8006d0) + 0x170) <= 0.0) goto LAB_0049bf4d;
    *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 5;
    break;
  default:
    FUN_00468c60();
    in_stack_00000048 = *(float *)(unaff_EDI + 0x8006d0);
    fVar11 = (float10)FUN_00444ae0();
    in_stack_000000ac = (float)fVar11;
    if (in_stack_000000ac <= *(float *)((int)in_stack_00000048 + 0x170)) {
      puVar5 = (undefined1 *)FUN_00468c60();
      iVar7 = (int)in_stack_00000048;
      goto code_r0x0049bd93;
    }
    goto LAB_0049bf4d;
  case 8:
  case 0x18:
  case 0x19:
  case 0x1b:
  case 0x3b:
  case 0x3f:
  case 0x40:
    puVar6 = (uint *)FUN_00468c60();
    if ((uint)*(byte *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) == *puVar6) goto LAB_0049bf4d;
    puVar5 = (undefined1 *)FUN_00468c60();
    iVar7 = *(int *)(unaff_EDI + 0x8006d0);
code_r0x0049bd93:
    *(undefined1 *)(iVar7 + 0x68) = *puVar5;
    break;
  case 10:
    if (*(char *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) == '\n') goto LAB_0049bf4d;
    *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 10;
    break;
  case 0xb:
    *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0xb;
    break;
  case 0x11:
    if (*(float *)(*(int *)(unaff_EDI + 0x8006d0) + 0x170) <= 0.0) goto LAB_0049bf4d;
    *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x11;
    break;
  case 0x14:
    if (*(float *)(*(int *)(unaff_EDI + 0x8006d0) + 0x170) <= 0.0) goto LAB_0049bf4d;
    *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x14;
    break;
  case 0x1c:
    if ((0.0 < *(float *)(*(int *)(unaff_EDI + 0x8006d0) + 0x170)) &&
       (puVar6 = (uint *)FUN_00468c60(),
       (uint)*(byte *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) != *puVar6)) {
      puVar5 = (undefined1 *)FUN_00468c60();
      *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = *puVar5;
      *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
    }
    goto LAB_0049bf4d;
  case 0x22:
    in_stack_00000018 = *(float *)(unaff_EDI + 0x8006d0);
    iVar7 = FUN_0043d1a0();
    if (iVar7 <= *(int *)((int)in_stack_00000018 + 0x6c)) {
      *(undefined1 *)((int)in_stack_00000018 + 0x68) = 0x22;
      *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
      iVar7 = *(int *)(unaff_EDI + 0x8006d0);
      *(undefined4 *)(iVar7 + 0x1a0) = *(undefined4 *)(iVar7 + 8);
      *(undefined4 *)(iVar7 + 0x1a4) = *(undefined4 *)(iVar7 + 0xc);
    }
    goto LAB_0049bf4d;
  case 0x30:
    puVar5 = (undefined1 *)FUN_00468c60();
    *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = *puVar5;
    FUN_00411e30();
    iVar7 = *(int *)(unaff_EDI + 0x8006d0);
    fVar11 = (float10)FUN_00423f20();
    in_stack_00000018 = (float)fVar11;
    *(int *)(iVar7 + 0x11d8) = (int)((in_stack_00000018 / 50.0) * 1000.0);
    iVar7 = *(int *)(unaff_EDI + 0x8006d0);
    in_stack_00000028 = iVar7 + 0x34;
    fVar11 = (float10)FUN_00424860();
    in_stack_00000018 = (float)fVar11;
    if (0.0 < in_stack_00000018) {
      FUN_004240f0();
      FUN_00412780();
      iVar7 = *(int *)(unaff_EDI + 0x8006d0);
      pfVar3 = (float *)FUN_00428970();
      if (5.0 < *pfVar3) {
        *pfVar3 = 5.0;
      }
    }
    goto code_r0x0049b8d5;
  case 0x32:
    FUN_00468e20();
    FUN_00411e30();
    in_stack_00000048 = *(float *)(unaff_EDI + 0x8006d0);
    puVar2 = (undefined4 *)FUN_00428970();
    *puVar2 = 0;
    fVar11 = (float10)FUN_00424860();
    in_stack_00000018 = (float)fVar11;
    if (0.0 < in_stack_00000018) {
      FUN_004240f0();
      fVar11 = (float10)FUN_0043ed60();
      in_stack_00000018 = (float)fVar11;
      FUN_00412780();
      in_stack_00000048 = *(float *)(unaff_EDI + 0x8006d0);
      fVar11 = (float10)FUN_0043ed60();
      in_stack_00000018 = (float)fVar11 * 12.0 + 5.0;
      pfVar3 = (float *)FUN_00428970();
      *pfVar3 = in_stack_00000018;
    }
    in_stack_000001c0 = 7.00649e-44;
    puVar2 = (undefined4 *)FUN_00468910();
    uVar4 = FUN_0043e6a0();
    *puVar2 = uVar4;
    unaff_ESI = iStack00000070;
    goto LAB_0049bf4d;
  case 0x36:
    puVar5 = (undefined1 *)FUN_00468c60();
    *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = *puVar5;
    FUN_004252f0();
    FUN_00411e30();
    iVar7 = *(int *)(unaff_EDI + 0x8006d0);
    fVar11 = (float10)FUN_00423f20();
    in_stack_00000018 = (float)fVar11;
    *(int *)(iVar7 + 0x11d8) = (int)((in_stack_00000018 / 50.0) * 1000.0);
    fVar11 = (float10)FUN_00424860();
    in_stack_00000018 = (float)fVar11;
    if (2500.0 < in_stack_00000018) {
      FUN_004240f0();
      FUN_00412780();
    }
    iVar7 = *(int *)(unaff_EDI + 0x8006d0);
    puVar2 = (undefined4 *)FUN_00428970();
    *puVar2 = 0x41700000;
code_r0x0049b8d5:
    *(undefined4 *)(iVar7 + 0x6c) = 0;
    *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x128) = 0;
    unaff_ESI = iStack00000070;
    goto LAB_0049bf4d;
  case 0x60:
    *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x60;
    FUN_00468e20();
    FUN_00411e30();
    in_stack_0000001c = *(int *)(unaff_EDI + 0x8006d0);
    in_stack_00000048 = (float)(in_stack_0000001c + 0x34);
    puVar2 = (undefined4 *)FUN_00428970();
    *puVar2 = 0;
    fVar11 = (float10)FUN_00424860();
    in_stack_000000ac = (float)fVar11;
    if (0.0 < in_stack_000000ac) {
      FUN_004240f0();
      FUN_00412780();
      in_stack_0000001c = *(int *)(unaff_EDI + 0x8006d0);
      puVar2 = (undefined4 *)FUN_00428970();
      *puVar2 = 0x41a00000;
    }
    *(undefined4 *)(in_stack_0000001c + 0x6c) = 0;
    *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x128) = 600;
    goto LAB_0049bf4d;
  case 0x61:
    goto code_r0x0049b794;
  case 99:
    FUN_0042f160();
    in_stack_000000ac = 1.38729e-43;
    puVar2 = (undefined4 *)FUN_00468910();
    uVar4 = FUN_0043e6a0();
    *puVar2 = uVar4;
    unaff_ESI = iStack00000070;
    goto LAB_0049bf4d;
  case 100:
    goto code_r0x0049b794;
  case 0x65:
    FUN_00595850();
    FUN_00484350();
    goto LAB_0049bf4d;
  case 0x66:
code_r0x0049b794:
    FUN_00595850();
    goto LAB_0049bf4d;
  case 0x67:
    FUN_00595850();
    FUN_00484350();
    goto LAB_0049bf4d;
  }
  *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
  *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x128) = 0;
  goto LAB_0049bf4d;
DAT_0049bf15:
  in_stack_000000ac = *(float *)(unaff_EDI + 0x8006d0);
  iVar7 = FUN_0043d1a0();
  if (iVar7 < *(int *)((int)in_stack_000000ac + 0x6c)) goto code_r0x0049bf35;
  goto LAB_0049bf4d;
code_r0x0049bf35:
  *(undefined1 *)((int)in_stack_000000ac + 0x68) = 3;
  in_EAX = FUN_0043d1a0();
  goto code_r0x0049bf44;
}


/* FUN_004a2300 @ 004a2300  kind=gamemisc  attributed-by=none  size=195 */

void FUN_004a2300(void)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  
  if (*(int *)(*(int *)(in_ECX + 0x80095c) + 0x1b4) == 1) {
    FUN_00487380(2);
    *(undefined4 *)(*(int *)(in_ECX + 0x800c0c) + 0x10) =
         *(undefined4 *)(*(int *)(in_ECX + 0x800c0c) + 0xc);
    piVar2 = *(int **)(in_ECX + 0x800d3c);
    if (piVar2 != (int *)*piVar2) {
      do {
        FUN_00486700(piVar2[1] + 8);
        piVar2 = (int *)piVar2[1];
      } while (piVar2 != (int *)**(undefined4 **)(in_ECX + 0x800d3c));
    }
  }
  else {
    iVar1 = *(int *)(in_ECX + 0x8008d8);
    if (iVar1 != 0) {
      FUN_0044ad30(iVar1 + 0x11dc);
      *(undefined4 *)(in_ECX + 0x800c18) = *(undefined4 *)(iVar1 + 0x11e8);
      FUN_0042c5e0(iVar1 + 0x11ec);
      *(undefined4 *)(in_ECX + 0x800d34) = *(undefined4 *)(iVar1 + 0x1304);
      *(undefined4 *)(in_ECX + 0x800d38) = *(undefined4 *)(iVar1 + 0x1308);
    }
  }
  FUN_004c6350();
  FUN_004c64c0();
  return;
}


/* FUN_004a23d0 @ 004a23d0  kind=gamemisc  attributed-by=none  size=912 */

void FUN_004a23d0(void)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  void *pvVar7;
  int *piVar8;
  int in_ECX;
  int iVar9;
  char cVar10;
  bool bVar11;
  int local_40;
  int local_3c;
  int local_38;
  uint local_34;
  int local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e79fc;
  local_10 = ExceptionList;
  uVar2 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_34 = 0;
  local_14 = uVar2;
  FUN_00636950(0);
  FUN_00636950(0);
  FUN_00636950(0);
  FUN_00632870(uVar2);
  *(undefined4 *)(in_ECX + 0x8009c4) = *(undefined4 *)(in_ECX + 0x8009c0);
  FUN_0067e480();
  FUN_0067e480();
  iVar5 = *(int *)(in_ECX + 0x8009dc);
  iVar9 = *(int *)(in_ECX + 0x8009e0) - iVar5 >> 2;
  local_38 = 0;
  if (iVar9 != -1 && -1 < iVar9 + 1) {
    local_3c = 0x32;
    do {
      local_40 = 0;
      if (local_38 < iVar9) {
        local_40 = *(int *)(iVar5 + local_38 * 4);
        if (*(uint *)(local_40 + 0x18) < 7) {
LAB_004a2508:
          cVar10 = '\0';
        }
        else {
          puVar3 = (undefined4 *)FUN_00487ff0(local_2c,0,7);
          local_34 = local_34 | 1;
          uVar2 = puVar3[4];
          if (0xf < (uint)puVar3[5]) {
            puVar3 = (undefined4 *)*puVar3;
          }
          uVar4 = 7;
          if (uVar2 < 7) {
            uVar4 = uVar2;
          }
          iVar5 = FUN_0040c590(puVar3,"online_",uVar4);
          bVar11 = false;
          if (iVar5 == 0) {
            if (uVar2 < 7) {
              uVar2 = 0xffffffff;
            }
            else {
              uVar2 = (uint)(uVar2 != 7);
            }
            bVar11 = uVar2 == 0;
          }
          if (!bVar11) goto LAB_004a2508;
          cVar10 = '\x01';
        }
        local_8 = 0xffffffff;
        if (((local_34 & 1) != 0) && (local_34 = local_34 & 0xfffffffe, 0xf < local_18)) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_2c[0]);
        }
        if (*(char *)(in_ECX + 0x8009b0) == cVar10) goto LAB_004a253b;
      }
      else {
LAB_004a253b:
        iVar5 = FUN_00636040(*(undefined4 *)(in_ECX + 0x80088c));
        local_30 = iVar5;
        uVar6 = (**(code **)(**(int **)(iVar5 + 0x38) + 8))();
        FUN_00636b70(uVar6);
        uVar6 = (**(code **)(**(int **)(iVar5 + 0x3c) + 8))();
        FUN_006368e0(uVar6);
        FUN_0062c570(0x44160000,0x435c0000,1);
        local_18 = 7;
        local_1c = 0;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
        FUN_0040f7a0(&PTR_006fccac,0);
        local_8 = 1;
        uVar6 = FUN_0064f4e0(0,0,0,0,local_2c);
        local_8 = 0xffffffff;
        if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_2c[0]);
        }
        local_18 = 7;
        local_1c = 0;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
        pvVar7 = operator_new(0x16c);
        local_8 = 2;
        if (pvVar7 == (void *)0x0) {
          iVar9 = 0;
        }
        else {
          iVar9 = FUN_00605a20(*(undefined4 *)(in_ECX + 0x800710),uVar6,in_ECX);
        }
        *(int *)(iVar9 + 0x160) = local_40;
        local_8 = 0xffffffff;
        FUN_00631460(*(int *)(in_ECX + 0x8008c8) + 0xc,iVar9,1);
        FUN_0062a650(0x43960000,(float)local_3c,1);
        piVar8 = *(int **)(in_ECX + 0x8009c4);
        if (&local_30 < piVar8) {
          piVar1 = *(int **)(in_ECX + 0x8009c0);
          if (&local_30 < piVar1) goto LAB_004a26ad;
          if (piVar8 == *(int **)(in_ECX + 0x8009c8)) {
            FUN_0063dc90(1);
          }
          iVar5 = local_30;
          if (*(undefined4 **)(in_ECX + 0x8009c4) != (undefined4 *)0x0) {
            **(undefined4 **)(in_ECX + 0x8009c4) =
                 *(undefined4 *)
                  (*(uint *)(in_ECX + 0x8009c0) + ((int)&local_30 - (int)piVar1 >> 2) * 4);
          }
        }
        else {
LAB_004a26ad:
          if (piVar8 == *(int **)(in_ECX + 0x8009c8)) {
            FUN_0063dc90(1);
          }
          if (*(int **)(in_ECX + 0x8009c4) != (int *)0x0) {
            **(int **)(in_ECX + 0x8009c4) = iVar5;
          }
        }
        *(int *)(in_ECX + 0x8009c4) = *(int *)(in_ECX + 0x8009c4) + 4;
        piVar8 = (int *)FUN_0063d730(&local_30);
        *piVar8 = local_38;
        piVar8 = (int *)FUN_00468910(&local_38);
        local_3c = local_3c + 0xe6;
        *piVar8 = iVar5;
      }
      iVar5 = *(int *)(in_ECX + 0x8009dc);
      iVar9 = *(int *)(in_ECX + 0x8009e0) - iVar5 >> 2;
      local_38 = local_38 + 1;
    } while (local_38 < iVar9 + 1);
  }
  FUN_00635700();
  FUN_00636950(*(undefined4 *)(in_ECX + 0x80088c));
  FUN_00636950(*(undefined4 *)(in_ECX + 0x80088c));
  FUN_00636950(*(undefined4 *)(in_ECX + 0x80088c));
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004a8f40 @ 004a8f40  kind=gamemisc  attributed-by=none  size=70 */

void FUN_004a8f40(float *param_1,float param_2,float *param_3)

{
  *param_1 = *param_3 * param_2;
  param_1[1] = param_3[1] * param_2;
  param_1[2] = param_3[2] * param_2;
  param_1[3] = param_3[3] * param_2;
  return;
}


/* FUN_004a9030 @ 004a9030  kind=gamemisc  attributed-by=none  size=211 */

void FUN_004a9030(int param_1,int param_2,int param_3,undefined8 *param_4)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  
  iVar1 = param_2;
  while( true ) {
    iVar4 = iVar1 * 2 + 2;
    if (param_3 <= iVar4) break;
    fVar3 = *(float *)(param_1 + 4 + iVar4 * 0xc);
    pfVar2 = (float *)(param_1 + -8 + iVar4 * 0xc);
    if (*pfVar2 <= fVar3 && fVar3 != *pfVar2) {
      iVar4 = iVar1 * 2 + 1;
    }
    *(undefined8 *)(param_1 + iVar1 * 0xc) = *(undefined8 *)(param_1 + iVar4 * 0xc);
    *(undefined4 *)(param_1 + 8 + iVar1 * 0xc) = *(undefined4 *)(param_1 + 8 + iVar4 * 0xc);
    iVar1 = iVar4;
  }
  if (iVar4 == param_3) {
    *(undefined8 *)(param_1 + iVar1 * 0xc) = *(undefined8 *)(param_1 + -0xc + param_3 * 0xc);
    *(undefined4 *)(param_1 + 8 + iVar1 * 0xc) = *(undefined4 *)(param_1 + -4 + param_3 * 0xc);
    iVar1 = param_3 + -1;
  }
  while ((param_2 < iVar1 &&
         (iVar4 = (iVar1 + -1) / 2, fVar3 = *(float *)(param_1 + 4 + iVar4 * 0xc),
         *(float *)((int)param_4 + 4) <= fVar3 && fVar3 != *(float *)((int)param_4 + 4)))) {
    *(undefined8 *)(param_1 + iVar1 * 0xc) = *(undefined8 *)(param_1 + iVar4 * 0xc);
    *(undefined4 *)(param_1 + 8 + iVar1 * 0xc) = *(undefined4 *)(param_1 + 8 + iVar4 * 0xc);
    iVar1 = iVar4;
  }
  *(undefined8 *)(param_1 + iVar1 * 0xc) = *param_4;
  *(undefined4 *)(param_1 + 8 + iVar1 * 0xc) = *(undefined4 *)(param_4 + 1);
  return;
}


/* FUN_004a9110 @ 004a9110  kind=gamemisc  attributed-by=none  size=227 */

void FUN_004a9110(int param_1,int param_2,int param_3,undefined8 *param_4)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  
  iVar1 = param_2;
  while( true ) {
    iVar4 = iVar1 * 2 + 2;
    if (param_3 <= iVar4) break;
    fVar3 = *(float *)(param_1 + 8 + iVar4 * 0x10);
    pfVar2 = (float *)(param_1 + -8 + iVar4 * 0x10);
    if (*pfVar2 <= fVar3 && fVar3 != *pfVar2) {
      iVar4 = iVar1 * 2 + 1;
    }
    *(undefined8 *)(param_1 + iVar1 * 0x10) = *(undefined8 *)(param_1 + iVar4 * 0x10);
    *(undefined8 *)(param_1 + 8 + iVar1 * 0x10) = *(undefined8 *)(param_1 + 8 + iVar4 * 0x10);
    iVar1 = iVar4;
  }
  if (iVar4 == param_3) {
    *(undefined8 *)(param_1 + iVar1 * 0x10) = *(undefined8 *)(param_1 + -0x10 + param_3 * 0x10);
    *(undefined8 *)(param_1 + 8 + iVar1 * 0x10) = *(undefined8 *)(param_1 + -8 + param_3 * 0x10);
    iVar1 = param_3 + -1;
  }
  while ((param_2 < iVar1 &&
         (iVar4 = (iVar1 + -1) / 2, fVar3 = *(float *)(param_1 + 8 + iVar4 * 0x10),
         *(float *)(param_4 + 1) <= fVar3 && fVar3 != *(float *)(param_4 + 1)))) {
    *(undefined8 *)(param_1 + iVar1 * 0x10) = *(undefined8 *)(param_1 + iVar4 * 0x10);
    *(undefined8 *)(param_1 + 8 + iVar1 * 0x10) = *(undefined8 *)(param_1 + 8 + iVar4 * 0x10);
    iVar1 = iVar4;
  }
  *(undefined8 *)(param_1 + iVar1 * 0x10) = *param_4;
  *(undefined8 *)(param_1 + 8 + iVar1 * 0x10) = param_4[1];
  return;
}


/* FUN_004a93c0 @ 004a93c0  kind=gamemisc  attributed-by=none  size=161 */

void FUN_004a93c0(undefined8 *param_1,undefined8 *param_2)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  float fStack_c;
  
  puVar4 = param_1;
  if (param_1 != param_2) {
    while (puVar4 = (undefined8 *)((int)puVar4 + 0xc), puVar4 != param_2) {
      uVar2 = *puVar4;
      uVar3 = *(undefined4 *)(puVar4 + 1);
      fStack_c = (float)((ulonglong)uVar2 >> 0x20);
      puVar6 = puVar4;
      if (fStack_c < *(float *)((int)param_1 + 4) || fStack_c == *(float *)((int)param_1 + 4)) {
        puVar5 = puVar4;
        if (*(float *)(puVar4 + -1) <= fStack_c && fStack_c != *(float *)(puVar4 + -1)) {
          do {
            puVar5 = (undefined8 *)((int)puVar6 + -0xc);
            *puVar6 = *puVar5;
            *(undefined4 *)(puVar6 + 1) = *(undefined4 *)((int)puVar6 + -4);
            pfVar1 = (float *)((int)puVar6 + -0x14);
            puVar6 = puVar5;
          } while (*pfVar1 <= fStack_c && fStack_c != *pfVar1);
        }
        *puVar5 = uVar2;
        *(undefined4 *)(puVar5 + 1) = uVar3;
      }
      else {
        for (; param_1 != puVar6; puVar6 = (undefined8 *)((int)puVar6 + -0xc)) {
          *puVar6 = *(undefined8 *)((int)puVar6 + -0xc);
          *(undefined4 *)(puVar6 + 1) = *(undefined4 *)((int)puVar6 + -4);
        }
        *param_1 = uVar2;
        *(undefined4 *)(param_1 + 1) = uVar3;
      }
    }
  }
  return;
}


/* FUN_004a9470 @ 004a9470  kind=gamemisc  attributed-by=none  size=164 */

void FUN_004a9470(undefined8 *param_1,undefined8 *param_2)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  float local_c;
  
  puVar5 = param_1;
  if (param_1 != param_2) {
    while (puVar4 = puVar5 + 2, puVar4 != param_2) {
      uVar2 = puVar5[3];
      uVar3 = *puVar4;
      local_c = (float)uVar2;
      puVar6 = puVar4;
      if (local_c < *(float *)(param_1 + 1) || local_c == *(float *)(param_1 + 1)) {
        puVar7 = puVar4;
        if (*(float *)(puVar5 + 1) <= local_c && local_c != *(float *)(puVar5 + 1)) {
          do {
            puVar7 = puVar6 + -2;
            *puVar6 = *puVar7;
            puVar6[1] = puVar6[-1];
            pfVar1 = (float *)(puVar6 + -3);
            puVar6 = puVar7;
          } while (*pfVar1 <= local_c && local_c != *pfVar1);
        }
        *puVar7 = uVar3;
        puVar7[1] = uVar2;
        puVar5 = puVar4;
      }
      else {
        for (; param_1 != puVar6; puVar6 = puVar6 + -2) {
          *puVar6 = puVar6[-2];
          puVar6[1] = puVar6[-1];
        }
        *param_1 = uVar3;
        param_1[1] = uVar2;
        puVar5 = puVar4;
      }
    }
  }
  return;
}


/* FUN_004a9790 @ 004a9790  kind=gamemisc  attributed-by=none  size=302 */

void FUN_004a9790(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float *pfVar3;
  float fVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float fStack_10;
  
  iVar7 = (param_2 - param_1) / 0xc;
  iVar14 = iVar7 / 2;
  if (0 < iVar14) {
    iVar9 = iVar14 * 2 + 2;
    iVar10 = param_1 + iVar14 * 0xc;
    do {
      uVar5 = *(undefined8 *)(iVar10 + -0xc);
      uVar6 = *(undefined4 *)(iVar10 + -4);
      iVar9 = iVar9 + -2;
      iVar14 = iVar14 + -1;
      iVar13 = iVar9;
      iVar11 = iVar14;
      while (iVar12 = iVar13, iVar12 < iVar7) {
        fVar4 = *(float *)(param_1 + 4 + iVar12 * 0xc);
        pfVar3 = (float *)(param_1 + -8 + iVar12 * 0xc);
        if (*pfVar3 <= fVar4 && fVar4 != *pfVar3) {
          iVar12 = iVar12 + -1;
        }
        puVar1 = (undefined4 *)(param_1 + iVar12 * 0xc);
        uVar8 = puVar1[1];
        puVar2 = (undefined4 *)(param_1 + iVar11 * 0xc);
        *puVar2 = *puVar1;
        puVar2[1] = uVar8;
        *(undefined4 *)(param_1 + 8 + iVar11 * 0xc) = *(undefined4 *)(param_1 + 8 + iVar12 * 0xc);
        iVar11 = iVar12;
        iVar13 = iVar12 * 2 + 2;
      }
      if (iVar12 == iVar7) {
        puVar2 = (undefined4 *)(param_1 + -0xc + iVar7 * 0xc);
        uVar8 = puVar2[1];
        puVar1 = (undefined4 *)(param_1 + iVar11 * 0xc);
        *puVar1 = *puVar2;
        puVar1[1] = uVar8;
        *(undefined4 *)(param_1 + 8 + iVar11 * 0xc) = *(undefined4 *)(param_1 + -4 + iVar7 * 0xc);
        iVar11 = iVar7 + -1;
      }
      if (iVar14 < iVar11) {
        fStack_10 = (float)((ulonglong)uVar5 >> 0x20);
        do {
          iVar13 = (iVar11 + -1) / 2;
          if (*(float *)(param_1 + 4 + iVar13 * 0xc) <= fStack_10) break;
          puVar1 = (undefined4 *)(param_1 + iVar13 * 0xc);
          uVar8 = puVar1[1];
          puVar2 = (undefined4 *)(param_1 + iVar11 * 0xc);
          *puVar2 = *puVar1;
          puVar2[1] = uVar8;
          *(undefined4 *)(param_1 + 8 + iVar11 * 0xc) = *(undefined4 *)(param_1 + 8 + iVar13 * 0xc);
          iVar11 = iVar13;
        } while (iVar14 < iVar13);
      }
      *(undefined8 *)(param_1 + iVar11 * 0xc) = uVar5;
      *(undefined4 *)(param_1 + 8 + iVar11 * 0xc) = uVar6;
      iVar10 = iVar10 + -0xc;
    } while (0 < iVar14);
  }
  return;
}


/* FUN_004a98d0 @ 004a98d0  kind=gamemisc  attributed-by=none  size=290 */

void FUN_004a98d0(int param_1,int param_2)

{
  float *pfVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float local_c;
  
  iVar13 = param_2 - param_1 >> 4;
  iVar14 = iVar13 - (param_2 - param_1 >> 0x1f) >> 1;
  if (0 < iVar14) {
    iVar10 = iVar14 * 2 + 2;
    iVar8 = iVar14 * 0x10 + param_1;
    do {
      uVar5 = *(undefined8 *)(iVar8 + -8);
      uVar6 = *(undefined8 *)(iVar8 + -0x10);
      iVar8 = iVar8 + -0x10;
      iVar10 = iVar10 + -2;
      iVar14 = iVar14 + -1;
      iVar12 = iVar10;
      iVar9 = iVar14;
      while (iVar11 = iVar12, iVar11 < iVar13) {
        fVar4 = *(float *)(param_1 + 8 + iVar11 * 0x10);
        pfVar1 = (float *)(param_1 + -8 + iVar11 * 0x10);
        if (*pfVar1 <= fVar4 && fVar4 != *pfVar1) {
          iVar11 = iVar11 + -1;
        }
        *(undefined8 *)(param_1 + iVar9 * 0x10) = *(undefined8 *)(param_1 + iVar11 * 0x10);
        puVar2 = (undefined4 *)(param_1 + 8 + iVar11 * 0x10);
        uVar7 = puVar2[1];
        puVar3 = (undefined4 *)(param_1 + 8 + iVar9 * 0x10);
        *puVar3 = *puVar2;
        puVar3[1] = uVar7;
        iVar9 = iVar11;
        iVar12 = iVar11 * 2 + 2;
      }
      if (iVar11 == iVar13) {
        *(undefined8 *)(param_1 + iVar9 * 0x10) = *(undefined8 *)(param_1 + -0x10 + iVar13 * 0x10);
        puVar2 = (undefined4 *)(param_1 + -8 + iVar13 * 0x10);
        uVar7 = puVar2[1];
        puVar3 = (undefined4 *)(param_1 + 8 + iVar9 * 0x10);
        *puVar3 = *puVar2;
        puVar3[1] = uVar7;
        iVar9 = iVar13 + -1;
      }
      if (iVar14 < iVar9) {
        local_c = (float)uVar5;
        do {
          iVar12 = (iVar9 + -1) / 2;
          if (*(float *)(param_1 + 8 + iVar12 * 0x10) <= local_c) break;
          *(undefined8 *)(param_1 + iVar9 * 0x10) = *(undefined8 *)(param_1 + iVar12 * 0x10);
          puVar2 = (undefined4 *)(param_1 + 8 + iVar12 * 0x10);
          uVar7 = puVar2[1];
          puVar3 = (undefined4 *)(param_1 + 8 + iVar9 * 0x10);
          *puVar3 = *puVar2;
          puVar3[1] = uVar7;
          iVar9 = iVar12;
        } while (iVar14 < iVar12);
      }
      *(undefined8 *)(param_1 + iVar9 * 0x10) = uVar6;
      *(undefined8 *)(param_1 + 8 + iVar9 * 0x10) = uVar5;
    } while (0 < iVar14);
  }
  return;
}


/* FUN_004a9ad0 @ 004a9ad0  kind=gamemisc  attributed-by=none  size=128 */

void FUN_004a9ad0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  if (*(float *)((int)param_1 + 4) <= *(float *)((int)param_2 + 4) &&
      *(float *)((int)param_2 + 4) != *(float *)((int)param_1 + 4)) {
    uVar1 = *param_2;
    uVar2 = *(undefined4 *)(param_2 + 1);
    *param_2 = *param_1;
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
    *param_1 = uVar1;
    *(undefined4 *)(param_1 + 1) = uVar2;
  }
  if (*(float *)((int)param_2 + 4) <= *(float *)((int)param_3 + 4) &&
      *(float *)((int)param_3 + 4) != *(float *)((int)param_2 + 4)) {
    uVar1 = *param_3;
    uVar2 = *(undefined4 *)(param_3 + 1);
    *param_3 = *param_2;
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_2 + 1);
    *param_2 = uVar1;
    *(undefined4 *)(param_2 + 1) = uVar2;
    if (*(float *)((int)param_1 + 4) <= *(float *)((int)param_2 + 4) &&
        *(float *)((int)param_2 + 4) != *(float *)((int)param_1 + 4)) {
      *param_2 = *param_1;
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
      *param_1 = uVar1;
      *(undefined4 *)(param_1 + 1) = uVar2;
    }
  }
  return;
}


/* FUN_004a9b50 @ 004a9b50  kind=gamemisc  attributed-by=none  size=146 */

void FUN_004a9b50(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(float *)(param_1 + 1) <= *(float *)(param_2 + 1) &&
      *(float *)(param_2 + 1) != *(float *)(param_1 + 1)) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    *param_1 = uVar1;
    param_1[1] = uVar2;
  }
  if (*(float *)(param_2 + 1) <= *(float *)(param_3 + 1) &&
      *(float *)(param_3 + 1) != *(float *)(param_2 + 1)) {
    uVar1 = *param_3;
    uVar2 = param_3[1];
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    *param_2 = uVar1;
    param_2[1] = uVar2;
    if (*(float *)(param_1 + 1) <= *(float *)(param_2 + 1) &&
        *(float *)(param_2 + 1) != *(float *)(param_1 + 1)) {
      *param_2 = *param_1;
      param_2[1] = param_1[1];
      *param_1 = uVar1;
      param_1[1] = uVar2;
    }
  }
  return;
}


/* FUN_004a9db0 @ 004a9db0  kind=gamemisc  attributed-by=none  size=173 */

void FUN_004a9db0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (param_3 - param_1) / 0xc;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar1 = iVar2 * 0xc + param_1;
    FUN_004a9ad0(param_1,iVar1,iVar2 * 0x18 + param_1,param_4);
    FUN_004a9ad0(param_2 + iVar2 * -0xc,param_2,iVar2 * 0xc + param_2,param_4);
    iVar3 = param_3 + iVar2 * -0xc;
    FUN_004a9ad0(param_3 + iVar2 * -0x18,iVar3,param_3,param_4);
    FUN_004a9ad0(iVar1,param_2,iVar3,param_4);
    return;
  }
  FUN_004a9ad0(param_1,param_2,param_3,param_4);
  return;
}


/* FUN_004a9e60 @ 004a9e60  kind=gamemisc  attributed-by=none  size=153 */

void FUN_004a9e60(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_3 - param_1 >> 4;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = (int)((iVar1 >> 0x1f & 7U) + iVar1) >> 3;
    iVar1 = iVar2 * 0x10 + param_1;
    FUN_004a9b50(param_1,iVar1,iVar2 * 0x20 + param_1,param_4);
    FUN_004a9b50(param_2 + iVar2 * -0x10,param_2,iVar2 * 0x10 + param_2,param_4);
    iVar3 = param_3 + iVar2 * -0x10;
    FUN_004a9b50(param_3 + iVar2 * -0x20,iVar3,param_3,param_4);
    FUN_004a9b50(iVar1,param_2,iVar3,param_4);
    return;
  }
  FUN_004a9b50(param_1,param_2,param_3,param_4);
  return;
}


/* FUN_004aa350 @ 004aa350  kind=gamemisc  attributed-by=none  size=310 */

void FUN_004aa350(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 local_c [8];
  
  iVar2 = param_2 - param_1;
  do {
    iVar2 = iVar2 / 0xc;
    if (iVar2 < 0x21) {
LAB_004aa428:
      if (1 < iVar2) {
        FUN_004a93c0(param_1,param_2,param_4,0);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (1 < (param_2 - param_1) / 0xc) {
          FUN_004a9790(param_1,param_2,param_4,0,0);
        }
        FUN_004aa720(param_1,param_2,param_4);
        return;
      }
      goto LAB_004aa428;
    }
    piVar1 = (int *)FUN_004aabd0(local_c,param_1,param_2,param_4);
    iVar3 = *piVar1;
    iVar2 = piVar1[1];
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((iVar3 - param_1) / 0xc < (param_2 - iVar2) / 0xc) {
      FUN_004aa350(param_1,iVar3,param_3,param_4);
      param_1 = iVar2;
      iVar3 = param_2;
    }
    else {
      FUN_004aa350(iVar2,param_2,param_3,param_4);
    }
    iVar2 = iVar3 - param_1;
    param_2 = iVar3;
  } while( true );
}


/* FUN_004aa490 @ 004aa490  kind=gamemisc  attributed-by=none  size=232 */

void FUN_004aa490(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined1 local_c [8];
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 4;
    if (iVar1 < 0x21) {
LAB_004aa527:
      if (1 < iVar1) {
        FUN_004a9470(param_1,param_2,param_4,0);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (0x10 < (int)(param_2 - param_1 & 0xfffffff0U)) {
          FUN_004a98d0(param_1,param_2,param_4,0,0);
        }
        FUN_004aa7c0(param_1,param_2,param_4);
        return;
      }
      goto LAB_004aa527;
    }
    piVar2 = (int *)FUN_004aaeb0(local_c,param_1,param_2,param_4);
    iVar3 = *piVar2;
    iVar1 = piVar2[1];
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(iVar3 - param_1 & 0xfffffff0U) < (int)(param_2 - iVar1 & 0xfffffff0U)) {
      FUN_004aa490(param_1,iVar3,param_3,param_4);
      iVar3 = param_2;
      param_1 = iVar1;
    }
    else {
      FUN_004aa490(iVar1,param_2,param_3,param_4);
    }
    iVar1 = iVar3 - param_1;
    param_2 = iVar3;
  } while( true );
}


/* FUN_004aa720 @ 004aa720  kind=gamemisc  attributed-by=none  size=151 */

void FUN_004aa720(undefined8 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 local_10;
  undefined4 local_8;
  
  iVar1 = param_2 - (int)param_1;
  if (1 < iVar1 / 0xc) {
    puVar2 = (undefined8 *)(param_2 + -0xc);
    do {
      local_10 = *puVar2;
      local_8 = *(undefined4 *)(puVar2 + 1);
      *puVar2 = *param_1;
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 1);
      FUN_004a9030(param_1,0,(iVar1 + -0xc) / 0xc,&local_10,param_3);
      puVar2 = (undefined8 *)((int)puVar2 + -0xc);
      iVar1 = (int)puVar2 + (0xc - (int)param_1);
    } while (1 < iVar1 / 0xc);
  }
  return;
}


/* FUN_004aa7c0 @ 004aa7c0  kind=gamemisc  attributed-by=none  size=122 */

void FUN_004aa7c0(undefined8 *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 local_14;
  undefined8 local_c;
  
  uVar1 = param_2 - (int)param_1;
  if (0x10 < (int)(uVar1 & 0xfffffff0)) {
    puVar2 = (undefined8 *)(param_2 + -0x10);
    do {
      local_14 = *puVar2;
      local_c = puVar2[1];
      *puVar2 = *param_1;
      puVar2[1] = param_1[1];
      FUN_004a9110(param_1,0,(int)(uVar1 - 0x10) >> 4,&local_14,param_3);
      puVar2 = puVar2 + -2;
      uVar1 = (int)puVar2 + (0x10 - (int)param_1);
    } while (0x10 < (int)(uVar1 & 0xfffffff0));
  }
  return;
}


/* FUN_004aabd0 @ 004aabd0  kind=gamemisc  attributed-by=none  size=715 */

void FUN_004aabd0(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  float fVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *local_c;
  undefined8 *local_8;
  
  local_8 = (undefined8 *)((int)param_2 + (((int)param_3 - (int)param_2) / 0x18) * 0xc);
  FUN_004a9db0(param_2,local_8,(int)param_3 + -0xc,param_4);
  puVar7 = (undefined8 *)((int)local_8 + 0xc);
  for (; param_2 < local_8; local_8 = (undefined8 *)((int)local_8 + -0xc)) {
    if ((*(float *)((int)local_8 + 4) < *(float *)(local_8 + -1)) ||
       (*(float *)(local_8 + -1) < *(float *)((int)local_8 + 4))) break;
  }
  puVar4 = puVar7;
  local_c = puVar7;
  puVar9 = local_8;
  if (puVar7 < param_3) {
    if (3 < ((int)param_3 + (0xb - (int)puVar7)) / 0xc) {
      fVar1 = *(float *)((int)local_8 + 4);
      do {
        puVar4 = puVar7;
        local_c = puVar7;
        if ((fVar1 < *(float *)((int)puVar7 + 4)) || (*(float *)((int)puVar7 + 4) < fVar1))
        goto joined_r0x004aad02;
        if ((fVar1 < *(float *)(puVar7 + 2)) || (*(float *)(puVar7 + 2) < fVar1)) {
          puVar7 = (undefined8 *)((int)puVar7 + 0xc);
          puVar4 = puVar7;
          local_c = puVar7;
          goto joined_r0x004aad02;
        }
        if ((fVar1 < *(float *)((int)puVar7 + 0x1c)) || (*(float *)((int)puVar7 + 0x1c) < fVar1)) {
          puVar7 = puVar7 + 3;
          puVar4 = puVar7;
          local_c = puVar7;
          goto joined_r0x004aad02;
        }
        if ((fVar1 < *(float *)(puVar7 + 5)) || (*(float *)(puVar7 + 5) < fVar1)) {
          puVar7 = (undefined8 *)((int)puVar7 + 0x24);
          puVar4 = puVar7;
          local_c = puVar7;
          goto joined_r0x004aad02;
        }
        puVar7 = puVar7 + 6;
      } while ((int)puVar7 < (int)param_3 + -0x24);
    }
    puVar4 = puVar7;
    local_c = puVar7;
    if (puVar7 < param_3) {
      do {
        puVar4 = puVar7;
        local_c = puVar7;
        if ((*(float *)((int)local_8 + 4) < *(float *)((int)puVar7 + 4)) ||
           (*(float *)((int)puVar7 + 4) < *(float *)((int)local_8 + 4))) break;
        puVar7 = (undefined8 *)((int)puVar7 + 0xc);
        puVar4 = puVar7;
        local_c = puVar7;
      } while (puVar7 < param_3);
    }
  }
joined_r0x004aad02:
  do {
    puVar5 = local_8;
    if (param_3 <= puVar7) {
joined_r0x004aad5a:
      for (; param_2 < local_8; local_8 = (undefined8 *)((int)local_8 + -0xc)) {
        puVar6 = (undefined8 *)((int)puVar5 + -0xc);
        puVar8 = puVar9;
        puVar7 = local_c;
        if (*(float *)(puVar5 + -1) <= *(float *)((int)puVar9 + 4)) {
          if (*(float *)(puVar5 + -1) < *(float *)((int)puVar9 + 4)) break;
          uVar3 = *(undefined4 *)((int)puVar9 + -4);
          uVar2 = *(undefined8 *)((int)puVar9 + -0xc);
          puVar8 = (undefined8 *)((int)puVar9 + -0xc);
          *puVar8 = *puVar6;
          *(undefined4 *)((int)puVar9 + -4) = *(undefined4 *)((int)puVar5 + -4);
          *puVar6 = uVar2;
          *(undefined4 *)((int)puVar5 + -4) = uVar3;
        }
        puVar9 = puVar8;
        puVar5 = puVar6;
      }
      if (local_8 == param_2) {
        if (puVar7 == param_3) {
          *param_1 = puVar9;
          param_1[1] = puVar4;
          return;
        }
        if (puVar4 != puVar7) {
          uVar2 = *puVar9;
          uVar3 = *(undefined4 *)(puVar9 + 1);
          *puVar9 = *puVar4;
          *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar4 + 1);
          *puVar4 = uVar2;
          *(undefined4 *)(puVar4 + 1) = uVar3;
        }
        uVar2 = *puVar9;
        uVar3 = *(undefined4 *)(puVar9 + 1);
        *puVar9 = *puVar7;
        *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar7 + 1);
        *puVar7 = uVar2;
        *(undefined4 *)(puVar7 + 1) = uVar3;
        puVar7 = (undefined8 *)((int)puVar7 + 0xc);
        puVar4 = (undefined8 *)((int)puVar4 + 0xc);
        local_c = puVar7;
        puVar9 = (undefined8 *)((int)puVar9 + 0xc);
      }
      else {
        puVar5 = (undefined8 *)((int)local_8 + -0xc);
        if (puVar7 == param_3) {
          puVar8 = (undefined8 *)((int)puVar9 + -0xc);
          if (puVar5 != puVar8) {
            uVar2 = *puVar5;
            uVar3 = *(undefined4 *)((int)local_8 + -4);
            *puVar5 = *puVar8;
            *(undefined4 *)((int)local_8 + -4) = *(undefined4 *)((int)puVar9 + -4);
            *puVar8 = uVar2;
            *(undefined4 *)((int)puVar9 + -4) = uVar3;
          }
          uVar2 = *puVar8;
          uVar3 = *(undefined4 *)((int)puVar9 + -4);
          *puVar8 = *(undefined8 *)((int)puVar4 - 0xc);
          *(undefined4 *)((int)puVar9 + -4) = *(undefined4 *)((int)puVar4 - 4);
          *(undefined8 *)((int)puVar4 - 0xcU) = uVar2;
          *(undefined4 *)((int)puVar4 - 4) = uVar3;
          puVar4 = (undefined8 *)((int)puVar4 - 0xcU);
          local_8 = puVar5;
          puVar9 = puVar8;
        }
        else {
          uVar2 = *puVar7;
          uVar3 = *(undefined4 *)(puVar7 + 1);
          *puVar7 = *puVar5;
          *(undefined4 *)(puVar7 + 1) = *(undefined4 *)((int)local_8 + -4);
          *puVar5 = uVar2;
          *(undefined4 *)((int)local_8 + -4) = uVar3;
          puVar7 = (undefined8 *)((int)puVar7 + 0xc);
          local_c = puVar7;
          local_8 = puVar5;
        }
      }
      goto joined_r0x004aad02;
    }
    puVar8 = puVar4;
    if (*(float *)((int)puVar9 + 4) <= *(float *)((int)puVar7 + 4)) {
      local_c = puVar7;
      if (*(float *)((int)puVar9 + 4) < *(float *)((int)puVar7 + 4)) goto joined_r0x004aad5a;
      puVar8 = (undefined8 *)((int)puVar4 + 0xc);
      uVar2 = *puVar4;
      uVar3 = *(undefined4 *)(puVar4 + 1);
      *puVar4 = *puVar7;
      *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar7 + 1);
      *puVar7 = uVar2;
      *(undefined4 *)(puVar7 + 1) = uVar3;
    }
    puVar7 = (undefined8 *)((int)puVar7 + 0xc);
    puVar4 = puVar8;
    local_c = puVar7;
  } while( true );
}


/* FUN_004aaeb0 @ 004aaeb0  kind=gamemisc  attributed-by=none  size=707 */

void FUN_004aaeb0(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  puVar9 = param_2 + (((int)param_3 - (int)param_2 >> 4) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1) * 2;
  FUN_004a9e60(param_2,puVar9,param_3 + -2,param_4);
  puVar11 = puVar9 + 2;
  for (; param_2 < puVar9; puVar9 = puVar9 + -2) {
    if ((*(float *)(puVar9 + 1) < *(float *)(puVar9 + -1)) ||
       (*(float *)(puVar9 + -1) < *(float *)(puVar9 + 1))) break;
  }
  puVar4 = puVar11;
  puVar7 = puVar9;
  if (puVar11 < param_3) {
    iVar5 = (int)param_3 + (0xf - (int)puVar11);
    if (3 < (int)(iVar5 + (iVar5 >> 0x1f & 0xfU)) >> 4) {
      fVar1 = *(float *)(puVar9 + 1);
      do {
        puVar4 = puVar11;
        if ((fVar1 < *(float *)(puVar11 + 1)) || (*(float *)(puVar11 + 1) < fVar1))
        goto joined_r0x004aafc2;
        if ((fVar1 < *(float *)(puVar11 + 3)) || (*(float *)(puVar11 + 3) < fVar1)) {
          puVar11 = puVar11 + 2;
          puVar4 = puVar11;
          goto joined_r0x004aafc2;
        }
        if ((fVar1 < *(float *)(puVar11 + 5)) || (*(float *)(puVar11 + 5) < fVar1)) {
          puVar11 = puVar11 + 4;
          puVar4 = puVar11;
          goto joined_r0x004aafc2;
        }
        if ((fVar1 < *(float *)(puVar11 + 7)) || (*(float *)(puVar11 + 7) < fVar1)) {
          puVar11 = puVar11 + 6;
          puVar4 = puVar11;
          goto joined_r0x004aafc2;
        }
        puVar11 = puVar11 + 8;
      } while ((int)puVar11 < (int)(param_3 + -6));
    }
    puVar4 = puVar11;
    if (puVar11 < param_3) {
      do {
        puVar4 = puVar11;
        if ((*(float *)(puVar9 + 1) < *(float *)(puVar11 + 1)) ||
           (*(float *)(puVar11 + 1) < *(float *)(puVar9 + 1))) break;
        puVar11 = puVar11 + 2;
        puVar4 = puVar11;
      } while (puVar11 < param_3);
    }
  }
joined_r0x004aafc2:
  do {
    puVar8 = puVar7;
    if (param_3 <= puVar11) {
joined_r0x004ab019:
      for (; param_2 < puVar7; puVar7 = puVar7 + -2) {
        puVar6 = puVar8 + -2;
        puVar10 = puVar9;
        if (*(float *)(puVar8 + -1) <= *(float *)(puVar9 + 1)) {
          if (*(float *)(puVar8 + -1) < *(float *)(puVar9 + 1)) break;
          uVar2 = puVar9[-2];
          uVar3 = puVar9[-1];
          puVar10 = puVar9 + -2;
          *puVar10 = *puVar6;
          puVar9[-1] = puVar8[-1];
          *puVar6 = uVar2;
          puVar8[-1] = uVar3;
        }
        puVar8 = puVar6;
        puVar9 = puVar10;
      }
      if (puVar7 == param_2) {
        if (puVar11 == param_3) {
          param_1[1] = puVar4;
          *param_1 = puVar9;
          return;
        }
        if (puVar4 != puVar11) {
          uVar2 = *puVar9;
          uVar3 = puVar9[1];
          *puVar9 = *puVar4;
          puVar9[1] = puVar4[1];
          *puVar4 = uVar2;
          puVar4[1] = uVar3;
        }
        uVar2 = *puVar9;
        uVar3 = puVar9[1];
        *puVar9 = *puVar11;
        puVar9[1] = puVar11[1];
        *puVar11 = uVar2;
        puVar9 = puVar9 + 2;
        puVar11[1] = uVar3;
        puVar11 = puVar11 + 2;
        puVar4 = puVar4 + 2;
      }
      else {
        puVar8 = puVar7 + -2;
        if (puVar11 == param_3) {
          puVar10 = puVar9 + -2;
          if (puVar8 != puVar10) {
            uVar2 = *puVar8;
            uVar3 = puVar7[-1];
            *puVar8 = *puVar10;
            puVar7[-1] = puVar9[-1];
            *puVar10 = uVar2;
            puVar9[-1] = uVar3;
          }
          uVar2 = *puVar10;
          uVar3 = puVar9[-1];
          *puVar10 = puVar4[-2];
          puVar9[-1] = puVar4[-1];
          puVar4[-2] = uVar2;
          puVar4[-1] = uVar3;
          puVar4 = puVar4 + -2;
          puVar9 = puVar10;
          puVar7 = puVar8;
        }
        else {
          uVar2 = *puVar11;
          uVar3 = puVar11[1];
          *puVar11 = *puVar8;
          puVar11[1] = puVar7[-1];
          *puVar8 = uVar2;
          puVar7[-1] = uVar3;
          puVar11 = puVar11 + 2;
          puVar7 = puVar8;
        }
      }
      goto joined_r0x004aafc2;
    }
    puVar10 = puVar4;
    if (*(float *)(puVar9 + 1) <= *(float *)(puVar11 + 1)) {
      if (*(float *)(puVar9 + 1) < *(float *)(puVar11 + 1)) goto joined_r0x004ab019;
      puVar10 = puVar4 + 2;
      uVar2 = *puVar4;
      uVar3 = puVar4[1];
      *puVar4 = *puVar11;
      puVar4[1] = puVar11[1];
      *puVar11 = uVar2;
      puVar11[1] = uVar3;
    }
    puVar11 = puVar11 + 2;
    puVar4 = puVar10;
  } while( true );
}


/* FUN_004ab870 @ 004ab870  kind=gamemisc  attributed-by=none  size=50 */

void FUN_004ab870(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
    }
    param_3 = param_3 + 2;
  }
  return;
}


/* FUN_004abc00 @ 004abc00  kind=gamemisc  attributed-by=none  size=16 */

void FUN_004abc00(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  return;
}


/* FUN_004abc60 @ 004abc60  kind=gamemisc  attributed-by=none  size=19 */

void FUN_004abc60(int *param_1)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  *param_1 = iVar1;
  *in_ECX = iVar1 + 0x10;
  return;
}


/* FUN_004abca0 @ 004abca0  kind=gamemisc  attributed-by=none  size=19 */

void FUN_004abca0(int *param_1)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  *param_1 = iVar1;
  *in_ECX = iVar1 + -4;
  return;
}


/* FUN_004ac020 @ 004ac020  kind=gamemisc  attributed-by=none  size=115 */

void FUN_004ac020(uint param_1)

{
  int *in_ECX;
  uint uVar1;
  
  if (param_1 <= (uint)(in_ECX[2] - in_ECX[1] >> 4)) {
    return;
  }
  if (0xfffffffU - (in_ECX[1] - *in_ECX >> 4) < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar1 = in_ECX[2] - *in_ECX >> 4;
  if (0xfffffff - (uVar1 >> 1) < uVar1) {
    FUN_004abdb0();
    return;
  }
  FUN_004abdb0();
  return;
}


/* FUN_004b21f3 @ 004b21f3  kind=gamemisc  attributed-by=none  size=5018 */

/* WARNING (jumptable): Unable to track spacebase fully for stack */

void __fastcall
FUN_004b21f3(int param_1,int param_2,undefined4 param_3,byte *param_4,byte *param_5,int param_6,
            undefined4 param_7,byte *param_8)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  CRefTime *pCVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  int *piVar15;
  int *piVar16;
  pair<unsigned___int64,unsigned___int64> *ppVar17;
  float *pfVar18;
  int unaff_ESI;
  uint *puVar19;
  pair<unsigned___int64,unsigned___int64> *ppVar20;
  float10 fVar21;
  float fVar22;
  int in_stack_00000028;
  float in_stack_0000003c;
  int in_stack_000000a4;
  int in_stack_000000a8;
  int iStack000000d4;
  int in_stack_000000d8;
  uint in_stack_00003e10;
  void *in_stack_00003e18;
  byte *pbStack_114;
  uint uStack_fc;
  byte *pbStack_f8;
  int *piStack_f4;
  undefined1 *puStack_f0;
  int iStack_cc;
  int iStack_a4;
  uint uStack_88;
  byte *pbStack_68;
  int iStack_64;
  byte *pbStack_4c;
  byte *local_34;
  int local_2c;
  byte *local_28;
  int iStack_20;
  int iStack_14;
  int local_8;
  
  do {
    iVar2 = unaff_ESI;
    iStack000000d4 = unaff_ESI;
    if (unaff_ESI <= param_2) {
      do {
        iStack000000d4 = unaff_ESI;
        iVar2 = FUN_00434d10();
        if (iVar2 != 0) {
          FUN_0060a9f0();
          FUN_0042f030();
          cVar1 = FUN_004688d0();
          while (cVar1 != '\0') {
            pcVar3 = (char *)FUN_0042c6d0();
            if (*(int *)(pcVar3 + 0x140) != 0) goto LAB_004b2c50;
            param_7 = FUN_004ec400();
            FUN_00424810();
            FUN_0042c5b0();
            if (0 < *(int *)(pcVar3 + 0x13c)) {
              FUN_0042c580();
              FUN_004120b0();
              FUN_0042c9b0();
            }
            cVar1 = FUN_0043e550();
            if (cVar1 == '\0') goto LAB_004b2c50;
            FUN_0047b5f0();
            FUN_00459c00();
            FUN_00412080();
            FUN_00412080();
            FUN_0043b610();
            FUN_0042c800();
            cVar1 = FUN_0047f760();
            if (cVar1 == '\0') goto LAB_004b2c50;
            FUN_00423e70();
            FUN_004120b0();
            FUN_004120b0();
            FUN_004120b0();
            FUN_004120f0();
            FUN_004122c0();
            FUN_004120f0();
            FUN_004122c0();
            FUN_004120f0();
            FUN_00424a60();
            FUN_00424730();
            pCVar4 = (CRefTime *)FUN_004120b0();
            CRefTime::Millisecs(pCVar4);
            pCVar4 = (CRefTime *)FUN_004120b0();
            CRefTime::Millisecs(pCVar4);
            pCVar4 = (CRefTime *)FUN_004120b0();
            CRefTime::Millisecs(pCVar4);
            FUN_004718b0();
            FUN_0040eac0();
            if (((*pcVar3 == '\v') && (pcVar3[1] == '\x13')) || (*pcVar3 == '\x12')) {
              puVar5 = (undefined4 *)FUN_00428970();
              *puVar5 = 0x3f800000;
            }
            switch(*pcVar3) {
            case '\x03':
            case '\x04':
              goto LAB_004b28be;
            default:
              FUN_00424610();
              break;
            case '\f':
            case '\r':
              FUN_00488b80();
              FUN_0040e420();
              FUN_00412810();
              FUN_00488b80();
LAB_004b28be:
              FUN_00424610();
              FUN_00424810();
              FUN_00424a60();
              FUN_004244f0();
              FUN_0047b5f0();
              break;
            case '\x19':
              FUN_00488b80();
              FUN_00424610();
              FUN_0047b5f0();
              FUN_00424a60();
              FUN_004243d0();
              FUN_004244f0();
              FUN_0047b5f0();
            }
            FUN_00424820();
            FUN_00424810();
            FUN_00424a60();
            if (*(int *)(pcVar3 + 0x13c) != 0) {
              FUN_0047b5f0();
              FUN_00424820();
              FUN_00424810();
              FUN_00424a60();
              FUN_004243d0();
              FUN_004244f0();
              FUN_0047b5f0();
              FUN_00424820();
              FUN_00424810();
              FUN_00424a60();
            }
            std::pair<unsigned___int64,unsigned___int64>::
            operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                      ((pair<unsigned___int64,unsigned___int64> *)&stack0x00000bbc,
                       (pair<unsigned___int64,unsigned___int64> *)&stack0x00000c48);
            FUN_0042c500();
            cVar1 = FUN_00468870();
            if (cVar1 != '\0') {
              FUN_0040eac0();
              FUN_004289e0();
            }
            FUN_004482a0();
            FUN_00448280();
            FUN_004e6df0();
            FUN_00471b60();
LAB_004b2c50:
            FUN_0044b580();
            FUN_0042f030();
            cVar1 = FUN_004688d0();
          }
          FUN_0060a9f0();
          FUN_0042f030();
          cVar1 = FUN_004688d0();
          while (cVar1 != '\0') {
            piVar6 = (int *)FUN_0042c6d0();
            iVar2 = *piVar6;
            if ((-1 < iVar2) && (iVar7 = FUN_00487f50(), iVar2 < iVar7)) {
              FUN_00428970();
              FUN_00428970();
              FUN_00428970();
              FUN_00459c00();
              FUN_00412080();
              FUN_00412080();
              FUN_0043b610();
              FUN_0042c800();
              cVar1 = FUN_0047f760();
              if (cVar1 != '\0') {
                if ((*piVar6 == 6) && ((char)piVar6[0xc] != '\0')) {
                  FUN_0040ea90();
                  iVar2 = piVar6[8];
                  if ((iVar2 == 1) || ((iVar2 == 2 || (iVar2 == 3)))) {
                    FUN_0040ea90();
                    FUN_00411e30();
                  }
                  FUN_00447fb0();
                  FUN_00451510();
                  FUN_0042c460();
                  FUN_00488b80();
                  FUN_0040eac0();
                  FUN_0040eac0();
                  FUN_0040eac0();
                  FUN_0040ea90();
                  FUN_0042c7a0();
                  FUN_00471d50();
                }
                FUN_0042c7a0();
                FUN_0042c4a0();
                fVar21 = (float10)FUN_00424860();
                if ((float)fVar21 <= in_stack_0000003c * in_stack_0000003c) {
                  std::pair<unsigned___int64,unsigned___int64>::
                  operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                            ((pair<unsigned___int64,unsigned___int64> *)&stack0x00000d08,
                             (pair<unsigned___int64,unsigned___int64> *)&stack0x0000073c);
                  FUN_0042c500();
                  cVar1 = FUN_00468870();
                  if (cVar1 != '\0') {
                    FUN_0040eac0();
                    FUN_004289e0();
                  }
                  FUN_0042c6d0();
                  FUN_004be760();
                  if (*piVar6 == 0x41) {
                    FUN_0040ea90();
                    FUN_0042c460();
                    FUN_0040eac0();
                    FUN_0040eac0();
                    FUN_0042c800();
                    FUN_004bbd80();
                  }
                }
                else {
                  FUN_004abc00();
                  FUN_0042c6d0();
                  FUN_004c1190();
                }
              }
            }
            FUN_004abc40();
            FUN_0042f030();
            cVar1 = FUN_004688d0();
          }
        }
        unaff_ESI = iStack000000d4 + 1;
        param_1 = in_stack_00000028;
        param_2 = in_stack_000000d8;
        iVar2 = in_stack_000000a8;
        iStack000000d4 = unaff_ESI;
      } while (unaff_ESI <= in_stack_000000d8);
    }
    param_1 = param_1 + 1;
    unaff_ESI = iVar2;
    in_stack_00000028 = param_1;
  } while (param_1 <= in_stack_000000a4);
  FUN_00447fb0();
  FUN_00458ce0();
  FUN_0042f030();
  FUN_0060a9f0();
  FUN_004abac0();
  if ((param_8[0x800704] != 0) && (iVar2 = FUN_00598840(), iVar2 != 0)) {
    FUN_0040ea90();
    FUN_0042c460();
    FUN_0042c460();
    FUN_0042c800();
    FUN_0042c800();
    FUN_00450f60();
    FUN_00423e70();
    FUN_004122e0();
    FUN_004122e0();
    FUN_0042c580();
    FUN_0043b610();
    FUN_005a6a70();
    FUN_0042c800();
    FUN_0042c4a0();
    FUN_00424990();
    FUN_00424610();
    FUN_00424820();
    FUN_00424810();
    FUN_00424a60();
    FUN_004482a0();
    FUN_00488b80();
    FUN_0040e420();
    FUN_0040eac0();
    FUN_00448280();
    FUN_004e6df0();
  }
  FUN_0046f440();
  FUN_0060a9f0();
  cVar1 = FUN_004688d0();
  while (cVar1 != '\0') {
    iVar2 = FUN_00468c90();
    if (((*(int *)(iVar2 + 8) != 0) && (cVar1 = FUN_0047f760(), cVar1 != '\0')) &&
       (param_6 = FUN_004120c0(), param_6 != 0)) {
      FUN_00423e70();
      FUN_004120b0();
      FUN_004120f0();
      FUN_004120b0();
      FUN_004122c0();
      FUN_004120f0();
      FUN_004120b0();
      FUN_004122c0();
      FUN_004120f0();
      FUN_00424a60();
      FUN_00424610();
      FUN_0047b5f0();
      FUN_00424820();
      FUN_00424810();
      FUN_00424a60();
      FUN_00448280();
      FUN_004482a0();
      FUN_004e6df0();
    }
    FUN_00468d70();
    FUN_0060a9f0();
    cVar1 = FUN_004688d0();
  }
  FUN_005aea70();
  FUN_0046f440();
  FUN_0060a9f0();
  cVar1 = FUN_004688d0();
  while (cVar1 != '\0') {
    iVar2 = FUN_00468c90();
    if (*(int *)(iVar2 + 8) != 0) {
      FUN_0042c7a0();
      FUN_0042c4a0();
      FUN_00424860();
      FUN_004c1100();
    }
    FUN_00468d70();
    FUN_0060a9f0();
    cVar1 = FUN_004688d0();
  }
  cVar1 = FUN_0047fa10();
  if (((cVar1 != '\0') || (cVar1 = FUN_0047fa10(), cVar1 != '\0')) ||
     ((cVar1 = FUN_0047fa10(), cVar1 != '\0' || (cVar1 = FUN_0047fa10(), cVar1 != '\0')))) {
    FUN_0044be20();
  }
  FUN_0042f030();
  FUN_0060a9f0();
  FUN_004aba90();
  FUN_00608f20();
  FUN_0060a9f0();
  FUN_0042f030();
  cVar1 = FUN_004688d0();
  if (cVar1 != '\0') {
    FUN_004b39e0(param_3,param_4,param_5,param_6,param_7,param_8);
    return;
  }
  if (param_8[0x1001004] != 0) {
    FUN_0060a9f0();
    FUN_0042f030();
    cVar1 = FUN_004688d0();
    while (cVar1 != '\0') {
      FUN_0042c6d0();
      FUN_0046f440();
      FUN_0060a9f0();
      cVar1 = FUN_004688d0();
      while (cVar1 != '\0') {
        FUN_0040eac0();
        FUN_00448280();
        FUN_00423e70();
        FUN_00468c90();
        FUN_00468c60();
        FUN_00468c60();
        FUN_00468c60();
        FUN_00412080();
        FUN_004122e0();
        FUN_004122c0();
        FUN_004120f0();
        FUN_00412080();
        FUN_004122e0();
        FUN_004122c0();
        FUN_004120f0();
        FUN_00424a60();
        FUN_00424730();
        FUN_00424820();
        FUN_00424810();
        FUN_00424a60();
        FUN_004482a0();
        FUN_004e6df0();
        FUN_00468d70();
        FUN_0060a9f0();
        cVar1 = FUN_004688d0();
      }
      FUN_0046f440();
      FUN_0060a9f0();
      cVar1 = FUN_004688d0();
      while (cVar1 != '\0') {
        FUN_0040eac0();
        FUN_00448280();
        FUN_00423e70();
        FUN_0042c6c0();
        FUN_00428970();
        FUN_00428970();
        FUN_00412080();
        FUN_004122e0();
        FUN_004122c0();
        FUN_004120f0();
        FUN_00428970();
        FUN_00412080();
        FUN_004122e0();
        FUN_004122c0();
        FUN_004120f0();
        FUN_00424a60();
        FUN_00424730();
        FUN_00424820();
        FUN_00424810();
        FUN_00424a60();
        FUN_004482a0();
        FUN_004e6df0();
        FUN_00468d30();
        FUN_0060a9f0();
        cVar1 = FUN_004688d0();
      }
      cVar1 = FUN_00477230();
      if (cVar1 == '\0') {
        FUN_0040eac0();
        FUN_00448280();
        FUN_00423e70();
        FUN_004120b0();
        FUN_0042f100();
        FUN_004120b0();
        FUN_0042f100();
        FUN_00412080();
        FUN_004122e0();
        FUN_004122c0();
        FUN_004120f0();
        FUN_004120b0();
        FUN_0042f100();
        FUN_00412080();
        FUN_004122e0();
        FUN_004122c0();
        FUN_004120f0();
        FUN_00424a60();
        FUN_00424730();
        FUN_00424820();
        FUN_00424810();
        FUN_00424a60();
        FUN_004482a0();
        FUN_004e6df0();
        FUN_0040eac0();
        FUN_00448280();
        FUN_00423e70();
        FUN_004120b0();
        FUN_0042f100();
        FUN_004120b0();
        FUN_0042f100();
        FUN_00412080();
        FUN_004122e0();
        FUN_004122c0();
        FUN_004120f0();
        FUN_004120b0();
        FUN_0042f100();
        FUN_00412080();
        FUN_004122e0();
        FUN_004122c0();
        FUN_004120f0();
        FUN_00424a60();
        FUN_00424730();
        FUN_00424820();
        FUN_00424810();
        FUN_00424a60();
        FUN_004482a0();
        FUN_004e6df0();
      }
      FUN_00468db0();
      FUN_0042f030();
      cVar1 = FUN_004688d0();
    }
  }
  (**(code **)(**(int **)(param_8 + 0x134) + 0xe4))();
  FUN_0046f440();
  FUN_0060a9f0();
  cVar1 = FUN_004688d0();
  while (cVar1 != '\0') {
    piVar6 = (int *)FUN_0042c6c0();
    cVar1 = FUN_0047f760();
    if (cVar1 != '\0') {
      if ((*piVar6 == 0) || (*piVar6 == 4)) {
        pCVar4 = (CRefTime *)FUN_004120b0();
        CRefTime::Millisecs(pCVar4);
        pCVar4 = (CRefTime *)FUN_004120b0();
        CRefTime::Millisecs(pCVar4);
        pCVar4 = (CRefTime *)FUN_004120b0();
        CRefTime::Millisecs(pCVar4);
        FUN_004718b0();
      }
      FUN_0040eac0();
      FUN_00412120();
      FUN_00412120();
      if ((*piVar6 != 0) && (*piVar6 != 4)) {
        puVar5 = (undefined4 *)FUN_00428970();
        *puVar5 = 0x3f800000;
      }
      FUN_00448280();
      FUN_00423e70();
      FUN_00412080();
      FUN_0043b610();
      FUN_0042c800();
      FUN_0042c4a0();
      FUN_00424990();
      FUN_00428970();
      FUN_004241b0();
      FUN_00428970();
      FUN_004241b0();
      FUN_00428970();
      FUN_004241b0();
      FUN_00424730();
      FUN_00412400();
      FUN_00424a60();
      FUN_004482a0();
      FUN_004e6df0();
    }
    FUN_00468d30();
    FUN_0060a9f0();
    cVar1 = FUN_004688d0();
  }
  (**(code **)(**(int **)(param_8 + 0x134) + 0xe4))();
  FUN_0046f440();
  FUN_0060a9f0();
  cVar1 = FUN_004688d0();
  while (cVar1 != '\0') {
    iVar2 = FUN_0042c6c0();
    cVar1 = FUN_0047f760();
    if (cVar1 == '\0') goto LAB_004b8b7c;
    switch(*(undefined4 *)(iVar2 + 0x60)) {
    case 0:
      param_4 = (byte *)FUN_004120c0();
      if (*(float *)(iVar2 + 0x54) != 0.0) {
        FUN_00427870();
        FUN_0042c460();
        FUN_0040eac0();
        FUN_0040eac0();
        FUN_0040eac0();
        FUN_0040ea90();
        FUN_00427870();
        FUN_0042c800();
        FUN_00471d50();
      }
      break;
    case 1:
      FUN_00427870();
      FUN_004252f0();
      FUN_004252f0();
      FUN_0040eac0();
      FUN_0040eac0();
      FUN_0040eac0();
      iVar2 = FUN_0042f000();
      if ((iVar2 != 0) && (iVar2 = FUN_0042f000(), *(char *)(iVar2 + 0x141) == '\x01')) {
        ppVar20 = (pair<unsigned___int64,unsigned___int64> *)FUN_0040eac0();
        std::pair<unsigned___int64,unsigned___int64>::
        operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                  ((pair<unsigned___int64,unsigned___int64> *)&stack0x00000ce0,ppVar20);
        ppVar20 = (pair<unsigned___int64,unsigned___int64> *)FUN_0040eac0();
        std::pair<unsigned___int64,unsigned___int64>::
        operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                  ((pair<unsigned___int64,unsigned___int64> *)&stack0x00000cc0,ppVar20);
        ppVar20 = (pair<unsigned___int64,unsigned___int64> *)FUN_0040eac0();
        std::pair<unsigned___int64,unsigned___int64>::
        operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                  ((pair<unsigned___int64,unsigned___int64> *)&stack0x00000cd0,ppVar20);
      }
      FUN_004252f0();
      FUN_0042c460();
      FUN_0040ea90();
      FUN_0042c7a0();
      FUN_00471d50();
      goto LAB_004b8b7c;
    case 2:
      iVar7 = FUN_0042f000();
      if (((iVar7 == 0) || (iVar7 = FUN_0042f000(), *(char *)(iVar7 + 0xaa8) != '\x03')) ||
         (iVar7 = FUN_0042f000(), *(char *)(iVar7 + 0xaa9) != '\b')) {
        param_4 = (byte *)FUN_004120c0();
      }
      else {
        FUN_0042f000();
        param_4 = (byte *)FUN_004ec400();
      }
      break;
    default:
      goto LAB_004b8b7c;
    case 4:
      param_4 = (byte *)FUN_004120c0();
    }
    if (param_4 != (byte *)0x0) {
      if (*(int *)(iVar2 + 0x60) != 1) {
        pCVar4 = (CRefTime *)FUN_004120b0();
        CRefTime::Millisecs(pCVar4);
        pCVar4 = (CRefTime *)FUN_004120b0();
        CRefTime::Millisecs(pCVar4);
        pCVar4 = (CRefTime *)FUN_004120b0();
        CRefTime::Millisecs(pCVar4);
        FUN_004718b0();
      }
      FUN_0040eac0();
      FUN_00412120();
      FUN_00448280();
      FUN_00423e70();
      FUN_00412080();
      FUN_0043b610();
      FUN_0042c800();
      FUN_0042c4a0();
      FUN_00424990();
      if (*(int *)(iVar2 + 0x60) == 2) {
        FUN_004244f0();
        FUN_004243d0();
      }
      else if (*(int *)(iVar2 + 0x60) == 4) {
        FUN_0040ea90();
        FUN_00412390();
        FUN_00424170();
      }
      else {
        fVar21 = (float10)FUN_00424860();
        if (0.0 < (float)fVar21) {
          FUN_00427870();
          FUN_0040ea90();
          FUN_004c12f0();
        }
      }
      FUN_00424730();
      FUN_0047b5f0();
      FUN_00424820();
      FUN_00424810();
      FUN_00424a60();
      FUN_004482a0();
      FUN_004e6df0();
    }
LAB_004b8b7c:
    FUN_00468d30();
    FUN_0060a9f0();
    cVar1 = FUN_004688d0();
  }
  FUN_00448280();
  (**(code **)(**(int **)(param_8 + 0x134) + 0x1ac))();
  local_28 = *(byte **)(param_8 + 0x134);
  (**(code **)(*(int *)local_28 + 0x170))();
  (**(code **)(**(int **)(param_8 + 0x134) + 0xe4))();
  (**(code **)(**(int **)(param_8 + 0x134) + 0x164))();
  (**(code **)(**(int **)(param_8 + 0x134) + 0xb0))();
  (**(code **)(**(int **)(param_8 + 0x134) + 0xb0))();
  (**(code **)(**(int **)(param_8 + 0x134) + 0x104))();
  pbStack_68 = (byte *)0x1;
  (**(code **)(**(int **)(param_8 + 0x134) + 0x114))();
  (**(code **)(**(int **)(param_8 + 0x134) + 0x114))();
  FUN_0046f440();
  FUN_0060a9f0();
  cVar1 = FUN_004688d0();
  while (cVar1 != '\0') {
    iVar2 = FUN_0042c6c0();
    if ((*(int *)(iVar2 + 0x60) == 3) && (cVar1 = FUN_0047f760(), cVar1 != '\0')) {
      FUN_00450f60();
      fVar22 = *(float *)(iVar2 + 0x4c);
      FUN_0040e420();
      iVar2 = (int)(fVar22 + 1.0);
      pbVar8 = (byte *)-iVar2;
      local_28 = pbVar8;
      if (-iVar2 == iVar2 || SBORROW4((int)pbVar8,iVar2) != iVar2 * -2 < 0) {
        do {
          if ((int)pbVar8 <= iVar2) {
            FUN_00428970();
            param_4 = (byte *)FUN_00428970();
            FUN_00428970();
            pbStack_4c = pbVar8;
            do {
              iStack_64 = 0;
              FUN_0042f7e0();
              cVar1 = FUN_0043b480();
              while (cVar1 == '\0') {
                iStack_64 = iStack_64 + 1;
                if (100 < iStack_64) goto LAB_004b9253;
                FUN_0042f7e0();
                cVar1 = FUN_0043b480();
              }
              FUN_004120b0();
              FUN_0043abc0();
              FUN_004120f0();
              FUN_004120b0();
              FUN_0043abc0();
              FUN_004120f0();
              FUN_0040ea90();
              FUN_0040ea50();
              FUN_0040ea90();
              FUN_0040ea50();
              FUN_0040ea90();
              FUN_0040ea50();
              FUN_0040ea90();
              FUN_0040ea50();
              FUN_00423e70();
              FUN_00412080();
              FUN_004122c0();
              FUN_004120f0();
              FUN_00412080();
              FUN_004122c0();
              FUN_004120f0();
              FUN_00424a60();
              (**(code **)(**(int **)(param_8 + 0x134) + 0xb0))();
              (**(code **)(**(int **)(param_8 + 0x134) + 0x14c))();
LAB_004b9253:
              pbStack_4c = pbStack_4c + 1;
            } while ((int)pbStack_4c <= iVar2);
          }
          local_28 = local_28 + 1;
        } while ((int)local_28 <= iVar2);
      }
    }
    FUN_00468d30();
    FUN_0060a9f0();
    cVar1 = FUN_004688d0();
  }
  cVar1 = FUN_0047fa10();
  if ((((cVar1 == '\0') && (cVar1 = FUN_0047fa10(), cVar1 == '\0')) &&
      (cVar1 = FUN_0047fa10(), cVar1 == '\0')) && (cVar1 = FUN_0047fa10(), cVar1 == '\0')) {
    FUN_0046f440();
    FUN_0060a9f0();
    cVar1 = FUN_004688d0();
    while (cVar1 != '\0') {
      iVar7 = FUN_00468c90();
      iVar2 = *(int *)(iVar7 + 8);
      if ((iVar2 != 0) && (0.0 < *(float *)(iVar2 + 0x16c))) {
        FUN_00428970();
        cVar1 = FUN_0047f760();
        if ((cVar1 != '\0') &&
           ((param_8[0x8006e6] == 0 || (*(int *)(iVar7 + 8) == *(int *)(param_8 + 0x8006d0))))) {
          FUN_00423e70();
          FUN_00428970();
          FUN_00424610();
          FUN_00488e50();
          FUN_0042c460();
          FUN_0042c800();
          FUN_00450f60();
          pbStack_4c = (byte *)0xfffffffe;
          piVar6 = (int *)FUN_00428970();
          FUN_00428970();
          FUN_00428970();
          do {
            local_8 = -2;
            do {
              iVar2 = *piVar6;
              iStack_64 = 0;
              FUN_0042f7e0();
              cVar1 = FUN_0043b480();
              while (cVar1 == '\0') {
                iStack_64 = iStack_64 + 1;
                iVar2 = iVar2 + -1;
                if (100 < iStack_64) goto LAB_004b991e;
                FUN_0042f7e0();
                cVar1 = FUN_0043b480();
              }
              param_4 = (byte *)(iVar2 + 1);
              FUN_00428970();
              FUN_004120b0();
              FUN_004122e0();
              FUN_0043abc0();
              FUN_004120f0();
              FUN_00428970();
              FUN_004120b0();
              FUN_004122e0();
              FUN_0043abc0();
              FUN_004120f0();
              FUN_0040ea90();
              FUN_0040ea50();
              FUN_0040ea90();
              FUN_0040ea50();
              FUN_0040ea90();
              FUN_0040ea50();
              FUN_0040ea90();
              FUN_0040ea50();
              FUN_00423e70();
              FUN_00412080();
              FUN_004122c0();
              FUN_004120f0();
              FUN_00412080();
              FUN_004122c0();
              FUN_004120f0();
              FUN_00424a60();
              (**(code **)(*piRam00000135 + 0xb0))();
              (**(code **)(*piRam00000135 + 0x14c))();
              param_8 = pbStack_68;
LAB_004b991e:
              local_8 = local_8 + 1;
            } while (local_8 < 3);
            pbStack_4c = (byte *)((int)pbStack_4c + 1);
          } while ((int)pbStack_4c < 3);
        }
      }
      FUN_00468d70();
      FUN_0060a9f0();
      cVar1 = FUN_004688d0();
    }
  }
  uStack_88 = 0;
  (**(code **)(**(int **)(param_8 + 0x134) + 0x104))();
  (**(code **)(**(int **)(param_8 + 0x134) + 0xe4))();
  (**(code **)(**(int **)(param_8 + 0x134) + 0xe4))();
  pbVar8 = *(byte **)(param_8 + 0x134);
  (**(code **)(*(int *)pbVar8 + 0x164))();
  FUN_0046f440();
  FUN_0060a9f0();
  cVar1 = FUN_004688d0();
  while (cVar1 != '\0') {
    iVar2 = FUN_00468c90();
    piVar6 = (int *)(iVar2 + 8);
    if ((*piVar6 != 0) && (0.0 < *(float *)(*piVar6 + 0x16c))) {
      FUN_00428970();
      cVar1 = FUN_0047f760();
      if ((cVar1 != '\0') &&
         ((cVar1 = FUN_00444520(), cVar1 == '\0' &&
          (iVar2 = FUN_0043d1a0(), *(int *)(*piVar6 + 0x6c) <= iVar2)))) {
        FUN_00423e70();
        (**(code **)(**(int **)(param_8 + 0x134) + 0xb0))();
        (**(code **)(**(int **)(param_8 + 0x134) + 0xb0))();
        FUN_0040f0d0();
        FUN_004120b0();
        FUN_00412260();
        FUN_00412200();
        FUN_004120f0();
        FUN_004120b0();
        FUN_00412260();
        FUN_00412200();
        FUN_004120f0();
        FUN_0040ea90();
        FUN_0040ea90();
        FUN_00451510();
        FUN_0040ea90();
        FUN_00451510();
        FUN_00412280();
        FUN_004a8ef0();
        FUN_0040ea90();
        FUN_00451510();
        FUN_0040ea90();
        FUN_00451510();
        FUN_00412280();
        FUN_004a8ef0();
        FUN_0040ea90();
        FUN_004a8ef0();
        FUN_0040ea90();
        FUN_004a8ef0();
        local_2c = 0;
        pbVar9 = (byte *)FUN_004120a0();
        pbVar10 = (byte *)FUN_004120a0();
        pbVar11 = (byte *)FUN_004120a0();
        pbVar12 = (byte *)FUN_004120a0();
        pbVar13 = (byte *)FUN_004120a0();
        pbVar14 = (byte *)FUN_004120a0();
        local_34 = (byte *)0x1a04;
        puVar19 = (uint *)&stack0x00003c5c;
        do {
          fVar22 = ((1.0 - (float)local_2c / 15.0) - 0.5) * 2.0;
          fVar22 = 1.0 - fVar22 * fVar22;
          fVar22 = fVar22 * fVar22;
          FUN_004121c0();
          FUN_00411e30();
          *puVar19 = (((int)(fVar22 * 50.0) << 8 | (uint)*pbVar9) << 8 | (uint)*pbVar10) << 8 |
                     (uint)*pbVar11;
          FUN_004121c0();
          FUN_00411e30();
          puVar19[4] = (((int)(fVar22 * 200.0) << 8 | (uint)*pbVar12) << 8 | (uint)*pbVar13) << 8 |
                       (uint)*pbVar14;
          local_34 = local_34 + 0xc;
          local_2c = local_2c + 1;
          puVar19 = puVar19 + 8;
        } while ((int)local_34 < 0x1ac4);
        (**(code **)(**(int **)(pbVar8 + 0x134) + 0x14c))();
        param_8 = pbVar8;
        if (*(char *)(*piVar6 + 0x990) == '\x03') {
          iVar2 = 0;
          iStack_14 = 0x1b84;
          puVar19 = (uint *)&stack0x00003c74;
          do {
            fVar22 = ((1.0 - (float)iVar2 / 15.0) - 0.5) * 2.0;
            fVar22 = 1.0 - fVar22 * fVar22;
            fVar22 = fVar22 * fVar22;
            FUN_004121c0();
            FUN_00411e30();
            *puVar19 = (((int)(fVar22 * 50.0) << 8 | (uint)bRam00000004) << 8 | (uint)*local_34) <<
                       8 | (uint)*local_28;
            FUN_004121c0();
            FUN_00411e30();
            puVar19[4] = (((int)(fVar22 * 255.0) << 8 | (uint)DAT_00000000) << 8 | (uint)*param_5)
                         << 8 | (uint)*param_4;
            iStack_14 = iStack_14 + 0xc;
            iVar2 = iVar2 + 1;
            puVar19 = puVar19 + 8;
          } while (iStack_14 < 0x1c44);
          param_8 = (byte *)0x16;
          (**(code **)(*piRam0000014a + 0x14c))();
        }
      }
    }
    FUN_00468d70();
    FUN_0060a9f0();
    cVar1 = FUN_004688d0();
  }
  FUN_00447fb0();
  FUN_00447dd0();
  (**(code **)(**(int **)(param_8 + 0x134) + 0xe4))();
  piVar6 = *(int **)(param_8 + 0x134);
  (**(code **)(*piVar6 + 0xe4))();
  pbVar9 = *(byte **)(param_8 + 0x134);
  (**(code **)(*(int *)pbVar9 + 0xe4))();
  FUN_00448280();
  FUN_0042f030();
  FUN_0060a9f0();
  cVar1 = FUN_004a8f20();
  while (cVar1 != '\0') {
    piVar15 = (int *)FUN_004abc30();
    iVar2 = *piVar15;
    EnterCriticalSection((LPCRITICAL_SECTION)(iVar2 + 0x250));
    FUN_0046f440();
    FUN_0060a9f0();
    cVar1 = FUN_004688d0();
    while (cVar1 != '\0') {
      piVar15 = (int *)FUN_0042c6c0();
      if (*(int *)(*piVar15 + 0xc) != 0) {
        FUN_00423e70();
        FUN_00428970();
        FUN_00412080();
        FUN_004122c0();
        FUN_004120f0();
        FUN_00428970();
        FUN_00412080();
        FUN_004122c0();
        FUN_004120f0();
        FUN_00424a60();
        FUN_00448f10();
        FUN_004482a0();
        (**(code **)(**(int **)(param_8 + 0x134) + 400))();
        puStack_f0 = (undefined1 *)0x4ba385;
        (**(code **)(**(int **)(param_8 + 0x134) + 0x1a0))();
        puStack_f0 = *(undefined1 **)(*piVar15 + 0x18);
        piStack_f4 = (int *)0x0;
        pbStack_f8 = *(byte **)(*piVar15 + 0x10);
        uStack_fc = 0;
        (**(code **)(**(int **)(param_8 + 0x134) + 0x148))();
      }
      FUN_00468d30();
      FUN_0060a9f0();
      cVar1 = FUN_004688d0();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(iVar2 + 0x250));
    FUN_004abca0();
    FUN_0060a9f0();
    cVar1 = FUN_004a8f20();
  }
  piVar15 = *(int **)(param_8 + 0x134);
  (**(code **)(*piVar15 + 0xe4))();
  (**(code **)(**(int **)(param_8 + 0x134) + 0xe4))();
  FUN_00447d10();
  puStack_f0 = (undefined1 *)0x4ba47b;
  FUN_0060a9f0();
  puStack_f0 = (undefined1 *)0x4ba48f;
  FUN_0042f030();
  puStack_f0 = (undefined1 *)0x4ba49c;
  cVar1 = FUN_004688d0();
  while (cVar1 != '\0') {
    piVar16 = (int *)FUN_0042c6d0();
    if (*piVar16 != 0) {
      puStack_f0 = &stack0x00000664;
      piStack_f4 = (int *)&stack0x000006b4;
      pbStack_f8 = (byte *)piVar16[3];
      uStack_fc = uStack_88;
      FUN_004bd160();
    }
    if (piVar16[1] != 0) {
      puStack_f0 = &stack0x00000664;
      piStack_f4 = (int *)&stack0x000006b4;
      uStack_fc = 0;
      pbStack_f8 = pbVar8;
      FUN_004be760();
    }
    puStack_f0 = &stack0x000001cc;
    piStack_f4 = (int *)0x4ba565;
    FUN_004abc60();
    puStack_f0 = (undefined1 *)0x4ba579;
    FUN_0042f030();
    puStack_f0 = (undefined1 *)0x4ba586;
    cVar1 = FUN_004688d0();
  }
  puStack_f0 = (undefined1 *)0x4ba5a2;
  FUN_0046f440();
  puStack_f0 = (undefined1 *)0x4ba5b6;
  FUN_0060a9f0();
  puStack_f0 = (undefined1 *)0x4ba5c3;
  cVar1 = FUN_004688d0();
  pbStack_114 = param_8;
  while (cVar1 != '\0') {
    piVar16 = (int *)FUN_0042c6c0();
    iVar2 = *piVar16;
    puStack_f0 = (undefined1 *)0x0;
    piStack_f4 = (int *)0x3dcccccd;
    pbStack_f8 = &stack0x00000444;
    uStack_fc = 2;
    FUN_004120b0();
    uStack_fc = 0x4ba60d;
    pCVar4 = (CRefTime *)FUN_00412220();
    piStack_f4 = (int *)0x4ba614;
    piStack_f4 = (int *)CRefTime::Millisecs(pCVar4);
    pbStack_f8 = (byte *)0x1;
    uStack_fc = 0x4ba61e;
    pCVar4 = (CRefTime *)FUN_004120b0();
    pbStack_f8 = (byte *)0x4ba625;
    pbStack_f8 = (byte *)CRefTime::Millisecs(pCVar4);
    uStack_fc = 0;
    pCVar4 = (CRefTime *)FUN_004120b0();
    uStack_fc = 0x4ba636;
    uStack_fc = CRefTime::Millisecs(pCVar4);
    FUN_004718b0();
    if (iVar2 == *(int *)(pbStack_114 + 0x8006d0)) {
      FUN_004c0ed0();
    }
    puStack_f0 = (undefined1 *)0x3f800000;
    piStack_f4 = (int *)0x3f800000;
    pbStack_f8 = (byte *)0x3f800000;
    uStack_fc = 0x4ba6aa;
    FUN_0040eac0();
    if (0 < *(int *)(iVar2 + 0x134)) {
      puStack_f0 = (undefined1 *)0x3fc00000;
      piStack_f4 = (int *)0x3f000000;
      pbStack_f8 = (byte *)0x3f000000;
      uStack_fc = 0x4ba6e1;
      FUN_0040eac0();
      puStack_f0 = (undefined1 *)0x4ba6ee;
      FUN_004127c0();
    }
    puStack_f0 = (undefined1 *)0x4ba701;
    FUN_0046f440();
    puStack_f0 = (undefined1 *)0x4ba714;
    FUN_0060a9f0();
    puStack_f0 = (undefined1 *)0x4ba721;
    cVar1 = FUN_004688d0();
    while (cVar1 != '\0') {
      pcVar3 = (char *)FUN_0042c6c0();
      if (*pcVar3 == '\x01') {
        puStack_f0 = (undefined1 *)0x3f000000;
        piStack_f4 = (int *)0x3f000000;
        pbStack_f8 = (byte *)0x3f800000;
        uStack_fc = 0x4ba76f;
        FUN_0040eac0();
        puStack_f0 = (undefined1 *)0x4ba77c;
        FUN_004127c0();
      }
      puStack_f0 = &stack0x000001a8;
      piStack_f4 = (int *)0x4ba792;
      FUN_00468d30();
      puStack_f0 = (undefined1 *)0x4ba7a5;
      FUN_0060a9f0();
      puStack_f0 = (undefined1 *)0x4ba7b2;
      cVar1 = FUN_004688d0();
      pbStack_114 = pbVar9;
    }
    puStack_f0 = &stack0x00000bb8;
    piStack_f4 = (int *)0x4ba7da;
    FUN_00412120();
    if ((*(ushort *)(iVar2 + 0x7e) & 0x200) != 0) {
      puStack_f0 = (undefined1 *)0x4ba7f4;
      FUN_004460f0();
      puStack_f0 = &stack0x0000251c;
      piStack_f4 = (int *)0x3f800000;
      pbStack_f8 = (byte *)0x3f800000;
      uStack_fc = 0x3f800000;
      FUN_0040eac0();
      piStack_f4 = (int *)0x4ba832;
      FUN_00468f50();
      piStack_f4 = (int *)&stack0x0000255c;
      puStack_f0 = (undefined1 *)0x3f000000;
      pbStack_f8 = (byte *)0x4ba848;
      FUN_004a8f40();
      puStack_f0 = (undefined1 *)0x4ba858;
      FUN_004127c0();
    }
    puStack_f0 = (undefined1 *)0x4ba871;
    FUN_00449090();
    if (0.0 < *(float *)(iVar2 + 0x1190)) {
      piStack_f4 = *(int **)(pbStack_114 + 0x134);
      puStack_f0 = (undefined1 *)0xa8;
      pbStack_f8 = (byte *)0x4ba89e;
      (**(code **)(*piStack_f4 + 0xe4))();
      pbStack_f8 = (byte *)(iVar2 + 0x11c8);
      uStack_fc = 0x4ba8b6;
      pbStack_f8 = (byte *)FUN_0042f000();
      pbStack_114 = (byte *)(piVar15 + 0xc0);
      uStack_fc = (uint)piVar6 >> 0x18;
      FUN_004128f0();
      (**(code **)(*(int *)CONCAT13(uRam00000139,piRam00000135._1_3_) + 0xe4))();
      FUN_00447fb0();
      FUN_0042f000();
      FUN_004128f0();
      puStack_f0 = (undefined1 *)0x4ba9bd;
      FUN_00447fb0();
    }
    puStack_f0 = &stack0x000001ec;
    piStack_f4 = (int *)0x4ba9d3;
    FUN_00468d30();
    puStack_f0 = (undefined1 *)0x4ba9e7;
    FUN_0060a9f0();
    puStack_f0 = (undefined1 *)0x4ba9f4;
    cVar1 = FUN_004688d0();
  }
  puStack_f0 = (undefined1 *)0x4baa0f;
  FUN_00449090();
  FUN_00447d10();
  puStack_f0 = (undefined1 *)0x4baa2d;
  FUN_00447fb0();
  puStack_f0 = (undefined1 *)0x3f800000;
  piStack_f4 = (int *)0x3f800000;
  pbStack_f8 = (byte *)0x3f800000;
  uStack_fc = 0x4baa5b;
  FUN_0040eac0();
  puStack_f0 = (undefined1 *)0x4baa67;
  FUN_00448280();
  FUN_00632870();
  pbVar8 = (byte *)0x0;
  puStack_f0 = (undefined1 *)0x3f800000;
  piStack_f4 = (int *)0xffffffff;
  pbStack_f8 = (byte *)0x2;
  uStack_fc = 0;
  (**(code **)(**(int **)(pbStack_114 + 0x134) + 0xac))();
  cVar1 = FUN_0047fa10();
  if (cVar1 != '\0') {
    FUN_00487490();
    cVar1 = FUN_0047fa10();
    if (cVar1 != '\0') {
      if (0.35 <= *(float *)(pbStack_114 + 0x1c4)) {
        if (*(float *)(pbStack_114 + 0x1c4) < 2.0) {
          pbStack_114 = (byte *)0x3f4ccccd;
          FUN_00428970();
          pbVar9 = pbVar8;
        }
        else {
          pbStack_114 = (byte *)0x3fcccccd;
          FUN_00428970();
          pbVar9 = pbVar8;
        }
      }
      else {
        pbStack_114 = (byte *)0x3ccccccd;
        FUN_00428970();
        pbVar9 = pbVar8;
      }
      FUN_0040ea90();
      pbVar8 = pbVar9;
      FUN_005fc1b0();
      FUN_0040eac0();
      FUN_0040ea90();
      FUN_00427870();
      FUN_0040eac0();
      FUN_0040eac0();
      FUN_00448170();
      FUN_0047ae10();
      if (pbVar9[0x800a40] == 0) {
        pbVar9[0x800a48] = 0;
        pbVar9[0x800a49] = 0;
        pbVar9[0x800a4a] = 0;
        pbVar9[0x800a4b] = 0;
        pbStack_114 = pbVar9;
      }
      else {
        FUN_004aba20();
        puStack_f0 = (undefined1 *)FUN_00487f60();
        FUN_004aba20();
        (**(code **)(**(int **)(pbVar9 + 0x134) + 0xe4))();
        FUN_00447d10();
        FUN_0040f0d0();
        FUN_0040f0d0();
        ppVar20 = (pair<unsigned___int64,unsigned___int64> *)&stack0x000039e8;
        iStack_cc = 0x10;
        do {
          ppVar17 = (pair<unsigned___int64,unsigned___int64> *)FUN_0040eac0();
          std::pair<unsigned___int64,unsigned___int64>::
          operator=<std::pair<unsigned___int64,unsigned___int64>,0>(ppVar20,ppVar17);
          FUN_0040ea90();
          FUN_00411e30();
          ppVar20 = ppVar20 + 0x10;
          iStack_cc = iStack_cc + -1;
        } while (iStack_cc != 0);
        FUN_00448f10();
        FUN_0040eac0();
        FUN_00448280();
        FUN_00447fb0();
        FUN_00448fe0();
        iStack_cc = 0;
        if (0 < (int)puStack_f0) {
          FUN_00428970();
          FUN_00428970();
          do {
            FUN_00424b50();
            FUN_0040e420();
            FUN_0040ea50();
            FUN_00468c70();
            FUN_00428970();
            FUN_00428970();
            FUN_004db110();
            FUN_0040ef50();
            FUN_004758c0();
            iStack_cc = iStack_cc + 1;
          } while (iStack_cc < (int)puStack_f0);
        }
      }
      (**(code **)(**(int **)(pbStack_114 + 0x134) + 0xb0))();
      FUN_005fb860();
    }
  }
  FUN_00650980();
  cVar1 = FUN_0047fa10();
  if (cVar1 == '\0') goto LAB_004bbb1a;
  FUN_00487490();
  cVar1 = FUN_0047fa10();
  if (cVar1 == '\0') goto LAB_004bbb1a;
  (**(code **)(**(int **)(pbStack_114 + 0x134) + 0xe4))();
  FUN_00447d10();
  (**(code **)(**(int **)(pbStack_114 + 0x134) + 0xac))();
  FUN_0043a490();
  FUN_00424b50();
  FUN_0043a490();
  FUN_0040e420();
  FUN_0040ea90();
  FUN_0040eac0();
  FUN_0040ea90();
  FUN_00427870();
  FUN_0040eac0();
  FUN_0040eac0();
  FUN_00448170();
  FUN_0040f0d0();
  FUN_0040f0d0();
  ppVar20 = (pair<unsigned___int64,unsigned___int64> *)&stack0x00003b10;
  iStack_a4 = 0x10;
  pbStack_114 = pbVar8;
  do {
    ppVar17 = (pair<unsigned___int64,unsigned___int64> *)FUN_0040eac0();
    std::pair<unsigned___int64,unsigned___int64>::
    operator=<std::pair<unsigned___int64,unsigned___int64>,0>(ppVar20,ppVar17);
    FUN_0040ea90();
    FUN_00411e30();
    ppVar20 = ppVar20 + 0x10;
    iStack_a4 = iStack_a4 + -1;
  } while (iStack_a4 != 0);
  FUN_00448f10();
  FUN_0040eac0();
  FUN_00448280();
  FUN_004120c0();
  FUN_0040ea90();
  FUN_00412280();
  FUN_00476660();
  FUN_004120a0();
  FUN_004120a0();
  FUN_004120a0();
  FUN_0040eac0();
  FUN_00448280();
  FUN_004120c0();
  FUN_0040ea90();
  FUN_00412280();
  FUN_00476660();
  iVar2 = FUN_0042f000();
  if (iVar2 != 0) {
    FUN_0040eac0();
    FUN_00448280();
    if (*(short *)(iVar2 + 0x8c) < 0) {
      if (*(short *)(iVar2 + 0x94) < 0) goto LAB_004bb615;
      FUN_004120c0();
    }
    else {
      FUN_004120c0();
    }
    FUN_0040ea90();
    FUN_00412280();
    FUN_00476660();
  }
LAB_004bb615:
  FUN_0040eac0();
  FUN_00448280();
  FUN_004120c0();
  FUN_00428970();
  FUN_0040ea90();
  FUN_00476660();
  iStack_20 = 0;
  FUN_0046f440();
  FUN_0060a9f0();
  cVar1 = FUN_004688d0();
  while (cVar1 != '\0') {
    iVar2 = FUN_00468c90();
    iVar2 = *(int *)(iVar2 + 8);
    if (iVar2 != 0) {
      iVar7 = FUN_00487f50();
      if (iVar7 <= iStack_20) break;
      if ((*(char *)(iVar2 + 0x60) == '\0') && (iVar2 != *(int *)(pbStack_114 + 0x8006d0))) {
        FUN_0043a490();
        FUN_00424b50();
        FUN_0043a490();
        FUN_0040e420();
        FUN_0040ea90();
        FUN_0040eac0();
        FUN_00448280();
        FUN_004120c0();
        FUN_0040ea90();
        FUN_00412280();
        FUN_00476660();
        FUN_004120a0();
        FUN_004120a0();
        FUN_004120a0();
        FUN_0040eac0();
        FUN_00448280();
        FUN_004120c0();
        FUN_0040ea90();
        FUN_00412280();
        FUN_00476660();
        iStack_20 = iStack_20 + 1;
      }
    }
    FUN_00468d70();
    FUN_0060a9f0();
    cVar1 = FUN_004688d0();
  }
  FUN_0040eac0();
  FUN_00448280();
  puVar5 = (undefined4 *)FUN_00428970();
  *puVar5 = 0x43610000;
  puVar5 = (undefined4 *)FUN_00428970();
  *puVar5 = 0;
  pfVar18 = (float *)FUN_00428970();
  *pfVar18 = (float)*(int *)(pbStack_114 + 0x8006e8) * 0.002 * 5.0 * 3.0 + *pfVar18;
LAB_004bbb1a:
  (**(code **)(**(int **)(pbStack_114 + 0x134) + 0xa8))();
  FUN_00601e90();
  FUN_004da480();
  FUN_005fb860();
  FUN_005fb860();
  FUN_0043c3e0();
  FUN_005fb860();
  FUN_005fb860();
  ExceptionList = in_stack_00003e18;
  __security_check_cookie(in_stack_00003e10 ^ (uint)&uStack_fc);
  return;
}


/* FUN_004b39e0 @ 004b39e0  kind=gamemisc  attributed-by=none  size=29233 */

/* WARNING (jumptable): Unable to track spacebase fully for stack */

void FUN_004b39e0(undefined4 param_1,byte *param_2,byte *param_3,int param_4,undefined4 param_5,
                 byte *param_6)

{
  char cVar1;
  int *piVar2;
  CRefTime *this;
  CRefTime *this_00;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  CRefTime *pCVar6;
  undefined4 *puVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  int *piVar17;
  int *piVar18;
  char *pcVar19;
  pair<unsigned___int64,unsigned___int64> *ppVar20;
  float *pfVar21;
  byte *unaff_EDI;
  undefined4 *puVar22;
  uint *puVar23;
  pair<unsigned___int64,unsigned___int64> *ppVar24;
  bool bVar25;
  float10 fVar26;
  float fVar27;
  int iStack00000044;
  int iStack000000b0;
  uint in_stack_00003e10;
  void *in_stack_00003e18;
  byte *pbStack_114;
  uint uStack_fc;
  byte *pbStack_f8;
  int *piStack_f4;
  undefined1 *puStack_f0;
  int iStack_cc;
  int iStack_a4;
  uint uStack_88;
  byte *pbStack_68;
  int iStack_64;
  byte *pbStack_4c;
  byte *pbStack_34;
  int local_2c;
  byte *local_28;
  int local_20;
  int local_14;
  int local_8;
  
  do {
    piVar2 = (int *)FUN_0042c6d0();
    iVar8 = *piVar2;
    if (0.0 < *(float *)(iVar8 + 0x16c)) {
      *(undefined1 *)(iVar8 + 0x1d10) = 0;
      cVar1 = *(char *)(iVar8 + 0x68);
      if (((((cVar1 == '\x1e') || (cVar1 == '\x1f')) || (cVar1 == ' ')) || (cVar1 == '!')) &&
         (iVar10 = FUN_0043d1a0(), *(int *)(iVar8 + 0x6c) < iVar10)) {
        FUN_0042c460();
        FUN_0042c800();
        cVar1 = FUN_0047f760();
        if (cVar1 != '\0') {
          FUN_0043caa0();
          FUN_0043d1a0();
          FUN_0043caa0();
          FUN_0040eac0();
          FUN_0040eac0();
          if (*(char *)(iVar8 + 0x141) == '\x01') {
            ppVar24 = (pair<unsigned___int64,unsigned___int64> *)FUN_0040eac0();
            std::pair<unsigned___int64,unsigned___int64>::
            operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                      ((pair<unsigned___int64,unsigned___int64> *)&stack0x00000be4,ppVar24);
            ppVar24 = (pair<unsigned___int64,unsigned___int64> *)FUN_0040eac0();
            std::pair<unsigned___int64,unsigned___int64>::
            operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                      ((pair<unsigned___int64,unsigned___int64> *)&stack0x00000bac,ppVar24);
          }
          FUN_0042c460();
          FUN_0040ea90();
          FUN_0042c460();
          FUN_0043d1a0();
          FUN_0042c7a0();
          FUN_0042c800();
          FUN_004bc760();
          if ((*(char *)(iVar8 + 0x68) == '\x1f') || (*(char *)(iVar8 + 0x68) == '!')) {
            FUN_0042c460();
            FUN_0040ea90();
            FUN_0042c460();
            FUN_0043d1a0();
            FUN_0042c7a0();
            FUN_0042c800();
            FUN_004bc760();
          }
        }
      }
      if (((*(int *)(iVar8 + 0x1a0) != 0 || *(int *)(iVar8 + 0x1a4) != 0) &&
          (*(char *)(iVar8 + 0x68) == '\"')) &&
         ((iVar10 = FUN_0043d1a0(), *(int *)(iVar8 + 0x6c) < iVar10 &&
          (iVar10 = FUN_0042f000(), iVar10 != 0)))) {
        FUN_00428970();
        cVar1 = FUN_0047f760();
        if (cVar1 != '\0') {
          FUN_00428970();
          FUN_0040eac0();
          FUN_0040eac0();
          FUN_004bbd80();
        }
      }
      cVar1 = *(char *)(iVar8 + 0x68);
      if ((((cVar1 != '\x1c') || (*(float *)(iVar8 + 0x170) <= 0.0)) &&
          (((cVar1 != '_' && (cVar1 != '^')) ||
           (iVar10 = FUN_0043d1a0(), iVar10 <= *(int *)(iVar8 + 0x6c))))) ||
         (((iVar10 = FUN_0043caa0(), *(int *)(iVar8 + 0x6c) < iVar10 || (0 < *(int *)(iVar8 + 300)))
          || (cVar1 = FUN_0047f760(), cVar1 == '\0')))) {
        FUN_00428970();
        cVar1 = FUN_0047f760();
        if (cVar1 == '\0') goto LAB_004b7685;
      }
      else {
        FUN_00427870();
        FUN_00446bb0();
        FUN_005a35d0();
        FUN_00451510();
        FUN_0042c460();
        FUN_0042c800();
        if (((*(byte *)(iVar8 + 0x7e) & 4) == 0) || (*(int *)(iVar8 + 0x1554) == 0)) {
          if (*(int *)(iVar8 + 0x1564) == 0) {
            FUN_0040ea90();
            FUN_004248a0();
            FUN_0042c460();
            FUN_00412260();
            FUN_00412260();
            FUN_00412080();
          }
          else {
            FUN_0047b5f0();
            FUN_00424820();
            FUN_00424810();
            FUN_0040ea90();
            FUN_00451510();
            FUN_004248a0();
            FUN_0042c460();
            FUN_00412260();
            FUN_00412260();
            FUN_00412080();
          }
        }
        else {
          FUN_0047b5f0();
          FUN_00424820();
          FUN_00424810();
          FUN_0040ea90();
          FUN_00451510();
          FUN_004248a0();
          FUN_0042c460();
          FUN_00412260();
          FUN_00412260();
          FUN_00412080();
        }
        FUN_0043b610();
        FUN_0042c800();
        FUN_0042c5b0();
        FUN_00423e70();
        FUN_004120b0();
        FUN_004120f0();
        FUN_004120b0();
        FUN_004122c0();
        FUN_004120f0();
        FUN_004120b0();
        FUN_004122c0();
        FUN_004120f0();
        FUN_00424a60();
        FUN_0042c7a0();
        FUN_0042c4a0();
        FUN_0040ea90();
        FUN_004c12f0();
        iVar10 = FUN_0043caa0();
        if ((float)(*(int *)(iVar8 + 0x6c) - iVar10) * 0.01 < 1.0) {
          FUN_0043caa0();
        }
        FUN_0042c7a0();
        FUN_0042c4a0();
        FUN_00423f20();
        FUN_00424730();
        FUN_00424a60();
        FUN_004482a0();
        if (*(char *)(iVar8 + 0x141) == '\x01') {
          FUN_00488b80();
          FUN_0040e420();
          FUN_00488b80();
          FUN_0040e420();
        }
        else if (*(char *)(iVar8 + 0x141) == '\x02') {
          FUN_00488b80();
          FUN_0040e420();
          FUN_00488b80();
          FUN_0040e420();
        }
        else {
          FUN_00488b80();
          FUN_0040e420();
        }
        FUN_0040eac0();
        FUN_00448280();
        FUN_004e6df0();
        unaff_EDI = param_6;
      }
      if ((unaff_EDI[0x8006e6] == 0) || (iVar8 == *(int *)(unaff_EDI + 0x8006d0))) {
        FUN_004120b0();
        pCVar6 = (CRefTime *)FUN_004120b0();
        this = (CRefTime *)FUN_004120b0();
        this_00 = (CRefTime *)FUN_00412220();
        CRefTime::Millisecs(this_00);
        CRefTime::Millisecs(pCVar6);
        CRefTime::Millisecs(this);
        FUN_004718b0();
        *(undefined4 *)(iVar8 + 0x149c) = *(undefined4 *)(iVar8 + 0x6c);
        switch(*(undefined1 *)(iVar8 + 0x68)) {
        case 1:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x10;
          break;
        case 2:
          *(undefined4 *)(iVar8 + 0x14a0) = 0xf;
          break;
        case 3:
        case 9:
        case 0x13:
        case 0x3e:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x12;
          break;
        case 4:
        case 0x12:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x11;
          break;
        case 5:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x21;
          break;
        case 6:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x14;
          break;
        case 7:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x13;
          break;
        case 8:
LAB_004b5203:
          *(undefined4 *)(iVar8 + 0x14a0) = 9;
          break;
        case 10:
          *(undefined4 *)(iVar8 + 0x14a0) = 10;
          break;
        case 0xb:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x1c;
          break;
        case 0xc:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x1d;
          break;
        case 0xd:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x1e;
          break;
        case 0xe:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x1f;
          break;
        case 0xf:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x20;
          break;
        case 0x10:
        case 0x11:
LAB_004b5216:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x23;
          break;
        case 0x14:
        case 0x15:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x32;
          break;
        case 0x16:
        case 0x17:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x15;
          break;
        case 0x18:
        case 0x19:
        case 0x32:
        case 0x37:
LAB_004b51e1:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x16;
          break;
        case 0x1a:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x42;
          break;
        case 0x1b:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x43;
          break;
        case 0x1c:
          *(undefined4 *)(iVar8 + 0x14a0) = 0xb;
          break;
        default:
          *(undefined4 *)(iVar8 + 0x14a0) = 0;
          break;
        case 0x1e:
        case 0x1f:
        case 0x20:
        case 0x21:
        case 0x22:
        case 0x31:
        case 0x57:
        case 0x58:
        case 0x59:
        case 0x5a:
        case 0x5c:
        case 0x69:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x3d;
          break;
        case 0x23:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x3e;
          break;
        case 0x24:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x1b;
          break;
        case 0x25:
        case 0x2b:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x17;
          break;
        case 0x26:
        case 0x2c:
        case 0x2d:
        case 0x2e:
        case 0x5e:
        case 0x5f:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x1a;
          break;
        case 0x27:
        case 0x29:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x18;
          break;
        case 0x28:
        case 0x2a:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x19;
          break;
        case 0x2f:
        case 0x36:
          *(undefined4 *)(iVar8 + 0x14a0) = 1;
          break;
        case 0x30:
          if ((*(char *)(iVar8 + 0xaa8) == '\x03') &&
             ((*(char *)(iVar8 + 0xaa9) == '\x06' || (*(char *)(iVar8 + 0xaa9) == '\a'))))
          goto LAB_004b51e1;
          if (*(char *)(iVar8 + 0x990) == '\x03') {
            if (*(char *)(iVar8 + 0x991) != '\r') goto LAB_004b5216;
            goto LAB_004b5203;
          }
          *(undefined4 *)(iVar8 + 0x14a0) = 0x22;
          break;
        case 0x33:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x46;
          break;
        case 0x39:
        case 0x3c:
          *(undefined4 *)(iVar8 + 0x14a0) = 2;
          break;
        case 0x3a:
          *(undefined4 *)(iVar8 + 0x14a0) = 3;
          break;
        case 0x3b:
          *(undefined4 *)(iVar8 + 0x14a0) = 4;
          break;
        case 0x3d:
        case 0x42:
LAB_004b4fbd:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x31;
          break;
        case 0x3f:
          *(undefined4 *)(iVar8 + 0x14a0) = 6;
          break;
        case 0x40:
          *(undefined4 *)(iVar8 + 0x14a0) = 5;
          break;
        case 0x41:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x30;
          break;
        case 0x43:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x25;
          break;
        case 0x44:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x26;
          break;
        case 0x45:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x27;
          break;
        case 0x46:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x28;
          break;
        case 0x47:
        case 0x48:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x29;
          break;
        case 0x49:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x2a;
          break;
        case 0x4a:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x2b;
          break;
        case 0x4b:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x2c;
          break;
        case 0x4c:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x2d;
          break;
        case 0x4d:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x2e;
          break;
        case 0x4e:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x2f;
          break;
        case 0x4f:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x36;
          break;
        case 0x50:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x33;
          break;
        case 0x51:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x34;
          break;
        case 0x52:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x35;
          break;
        case 0x53:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x39;
          break;
        case 0x54:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x37;
          break;
        case 0x56:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x3c;
          break;
        case 0x5b:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x3f;
          break;
        case 0x5d:
          if (*(char *)(iVar8 + 0x990) == '\0') goto LAB_004b4fbd;
          *(undefined4 *)(iVar8 + 0x14a0) = 0x23;
          break;
        case 0x60:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x41;
          break;
        case 0x62:
          *(undefined4 *)(iVar8 + 0x14a0) = 8;
          break;
        case 0x65:
        case 0x67:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x44;
          break;
        case 0x68:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x45;
          break;
        case 0x6a:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x3a;
          break;
        case 0x6b:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x3b;
          break;
        case 0x6c:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x47;
          break;
        case 0x6d:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x48;
          break;
        case 0x6e:
          *(undefined4 *)(iVar8 + 0x14a0) = 0x49;
        }
        if (0 < *(int *)(iVar8 + 0x130)) {
          *(undefined4 *)(iVar8 + 0x14a0) = 0x38;
        }
        if (iVar8 == *(int *)(unaff_EDI + 0x8006d0)) {
          FUN_004c0ed0();
        }
        FUN_0040eac0();
        if (0 < *(int *)(iVar8 + 0x134)) {
          FUN_0040eac0();
          FUN_004127c0();
        }
        FUN_0046f440();
        FUN_0060a9f0();
        cVar1 = FUN_004688d0();
        while (cVar1 != '\0') {
          pcVar19 = (char *)FUN_0042c6c0();
          if ((*pcVar19 == '\x01') || (*pcVar19 == '\x02')) {
            FUN_0040eac0();
            FUN_004127c0();
          }
          if (*pcVar19 == '\x04') {
            FUN_0040eac0();
            FUN_004127c0();
            FUN_0040ea90();
            FUN_0042c460();
            FUN_00428970();
            FUN_0040eac0();
            FUN_0040eac0();
            FUN_0042c7a0();
            FUN_004bbd80();
          }
          if (*pcVar19 == '\a') {
            FUN_004120c0();
            FUN_0040eac0();
            FUN_00448280();
            FUN_00423e70();
            FUN_00428970();
            FUN_004122e0();
            FUN_004122e0();
            FUN_00412220();
            FUN_004120f0();
            FUN_004122c0();
            FUN_004120f0();
            FUN_004122c0();
            FUN_004120f0();
            FUN_00424a60();
            FUN_00424730();
            FUN_00488b80();
            FUN_0040e420();
            FUN_00428970();
            FUN_00424610();
            FUN_00424820();
            FUN_00424810();
            FUN_00424a60();
            FUN_004482a0();
            FUN_004e6df0();
          }
          if (*pcVar19 == '\b') {
            FUN_004120c0();
            FUN_0040eac0();
            FUN_00448280();
            FUN_00423e70();
            FUN_00428970();
            FUN_004122e0();
            FUN_004122e0();
            FUN_00412220();
            FUN_004120f0();
            FUN_004122c0();
            FUN_004120f0();
            FUN_004122c0();
            FUN_004120f0();
            FUN_00424a60();
            FUN_00488b80();
            FUN_0040e420();
            FUN_00428970();
            FUN_00424730();
            FUN_00488b80();
            FUN_00424610();
            FUN_00424820();
            FUN_00424810();
            FUN_00424a60();
            FUN_004482a0();
            FUN_004e6df0();
            unaff_EDI = param_6;
          }
          FUN_00468d30();
          FUN_0060a9f0();
          cVar1 = FUN_004688d0();
        }
        FUN_00412120();
        if ((*(ushort *)(iVar8 + 0x7e) & 0x200) != 0) {
          FUN_004460f0();
          FUN_0040eac0();
          FUN_00468f50();
          FUN_004a8f40();
          FUN_004127c0();
        }
        FUN_00449090();
        if ((((((*(char *)(iVar8 + 0x140) == '\x04') && (*(char *)(iVar8 + 0x141) == '\x01')) &&
              (iVar10 = FUN_0043d1a0(), *(int *)(iVar8 + 0x6c) < iVar10)) &&
             (((cVar1 = *(char *)(iVar8 + 0x68), cVar1 == '\x11' || (cVar1 == '\x05')) ||
              (cVar1 == '\x14')))) ||
            ((*(char *)(iVar8 + 0x68) == '0' || (*(char *)(iVar8 + 0x68) == ']')))) ||
           ((iVar10 = FUN_00443f10(), iVar10 != 0 || (iVar10 = FUN_00443f10(), iVar10 != 0)))) {
          (**(code **)(**(int **)(unaff_EDI + 0x134) + 0xe4))();
          param_4 = 0;
          do {
            FUN_00447fb0();
            puVar7 = (undefined4 *)&stack0x00000790;
            puVar22 = (undefined4 *)&stack0x000029e8;
            for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
              *puVar22 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar22 = puVar22 + 1;
            }
            FUN_00451510();
            FUN_004252f0();
            FUN_00424990();
            FUN_0042f000();
            FUN_004128f0();
            param_4 = param_4 + 1;
          } while (param_4 < 5);
          FUN_00447fb0();
          (**(code **)(**(int **)(param_3 + 0x134) + 0xe4))();
          unaff_EDI = param_3;
        }
        if (*(float *)(iVar8 + 0x1190) <= 0.0) {
          FUN_0042f000();
          FUN_004128f0();
        }
        else {
          FUN_004860b0();
        }
        FUN_00444cb0();
        if (*(int *)(iVar8 + 0x1574) != 0) {
          FUN_00471b60();
        }
        if (*(int *)(iVar8 + 0x1578) != 0) {
          FUN_00471b60();
        }
        if (*(int *)(iVar8 + 0x155c) != 0) {
          FUN_00471b60();
        }
        if (*(int *)(iVar8 + 0x157c) != 0) {
          FUN_00471b60();
        }
        FUN_00449090();
        if (*(int *)(iVar8 + 300) < -2999) {
          if (*(char *)(iVar8 + 0x68) == 'T') {
            FUN_004120c0();
            FUN_0040eac0();
            FUN_00448280();
            FUN_00423e70();
            FUN_00428970();
            FUN_004122e0();
            FUN_004120f0();
            FUN_004122c0();
            FUN_004120f0();
            FUN_004122c0();
            FUN_004120f0();
            FUN_00424a60();
            FUN_0040e420();
            FUN_00428970();
            FUN_00424730();
            FUN_00428970();
            FUN_0040e420();
            FUN_00424610();
            FUN_004482a0();
            FUN_004e6df0();
            unaff_EDI = param_6;
          }
        }
        else {
          FUN_004120c0();
          FUN_0040eac0();
          FUN_00448280();
          FUN_00423e70();
          FUN_00428970();
          FUN_004122e0();
          FUN_004120f0();
          FUN_004122c0();
          FUN_004120f0();
          FUN_004122c0();
          FUN_004120f0();
          FUN_00424a60();
          FUN_00428970();
          FUN_00424730();
          FUN_00424610();
          FUN_00424820();
          FUN_00424810();
          FUN_00424a60();
          FUN_004482a0();
          FUN_004e6df0();
          unaff_EDI = param_6;
        }
        if (*(int *)(iVar8 + 300) < 1) {
          cVar1 = *(char *)(iVar8 + 0x68);
          if (((((cVar1 == '%') || (cVar1 == '&')) || (cVar1 == '+')) || (cVar1 == ',')) &&
             (iVar10 = FUN_0043caa0(), *(int *)(iVar8 + 0x6c) < iVar10)) {
            FUN_0040eac0();
            FUN_0040eac0();
            FUN_0040eac0();
            if (*(char *)(iVar8 + 0x141) == '\x01') {
              ppVar24 = (pair<unsigned___int64,unsigned___int64> *)FUN_0040eac0();
              std::pair<unsigned___int64,unsigned___int64>::
              operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                        ((pair<unsigned___int64,unsigned___int64> *)&stack0x00000da8,ppVar24);
              ppVar24 = (pair<unsigned___int64,unsigned___int64> *)FUN_0040eac0();
              std::pair<unsigned___int64,unsigned___int64>::
              operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                        ((pair<unsigned___int64,unsigned___int64> *)&stack0x00000d28,ppVar24);
              ppVar24 = (pair<unsigned___int64,unsigned___int64> *)FUN_0040eac0();
              std::pair<unsigned___int64,unsigned___int64>::
              operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                        ((pair<unsigned___int64,unsigned___int64> *)&stack0x00000d68,ppVar24);
            }
            FUN_0043caa0();
            FUN_00446bb0();
            if (((*(byte *)(iVar8 + 0x7e) & 4) == 0) || (*(int *)(iVar8 + 0x1554) == 0)) {
              if (*(char *)(iVar8 + 0xaa9) == '\f') {
                uVar3 = *(uint *)(iVar8 + 0x70) & 0x80000001;
                bVar25 = uVar3 == 0;
                if ((int)uVar3 < 0) {
                  bVar25 = (uVar3 - 1 | 0xfffffffe) == 0xffffffff;
                }
                if (!bVar25) {
                  if (*(int *)(iVar8 + 0x1564) == 0) {
                    FUN_0040ea90();
                    FUN_004248a0();
                    FUN_0042c460();
                    FUN_00412260();
                    FUN_00412260();
                    FUN_00412080();
                  }
                  else {
                    FUN_0047b5f0();
                    FUN_00424820();
                    FUN_00424810();
                    FUN_0040ea90();
                    FUN_00451510();
                    FUN_004248a0();
                    FUN_0042c460();
                    FUN_00412260();
                    FUN_00412260();
                    FUN_00412080();
                  }
                  goto LAB_004b6841;
                }
              }
              if (*(int *)(iVar8 + 0x1564) != 0) {
                FUN_0047b5f0();
                FUN_00424820();
                FUN_00424810();
                FUN_0040ea90();
                FUN_00451510();
                FUN_004248a0();
                FUN_0042c460();
                FUN_00412260();
                FUN_00412260();
                FUN_00412080();
                goto LAB_004b6841;
              }
            }
            else {
              FUN_0047b5f0();
              FUN_00424820();
              FUN_00424810();
              FUN_0040ea90();
              FUN_00451510();
              FUN_004248a0();
              FUN_0042c460();
              FUN_00412260();
              FUN_00412260();
              FUN_00412080();
LAB_004b6841:
              FUN_0043b610();
              FUN_0042c800();
              FUN_0042c5b0();
              unaff_EDI = param_6;
            }
            FUN_00427870();
            FUN_004252f0();
            FUN_00471d50();
          }
          FUN_0046f440();
          FUN_0060a9f0();
          cVar1 = FUN_004688d0();
          while (cVar1 != '\0') {
            puVar4 = (undefined1 *)FUN_0042c6c0();
            switch(*puVar4) {
            case 6:
              FUN_0040ea90();
              FUN_0042c460();
              FUN_00428970();
              FUN_0040eac0();
              FUN_0040eac0();
              FUN_0042c7a0();
              FUN_004c04c0();
            default:
              goto LAB_004b6d09;
            case 9:
              FUN_0040ea90();
              FUN_0042c460();
              FUN_00428970();
              FUN_0040eac0();
              FUN_0040eac0();
              break;
            case 10:
              FUN_0040ea90();
              FUN_0042c460();
              FUN_00428970();
              FUN_0040eac0();
              FUN_0040eac0();
              break;
            case 0xb:
              FUN_0040ea90();
              FUN_0042c460();
              FUN_00428970();
              FUN_0040eac0();
              FUN_0040eac0();
            }
            FUN_0042c7a0();
            FUN_004bbd80();
LAB_004b6d09:
            FUN_00468d30();
            FUN_0060a9f0();
            cVar1 = FUN_004688d0();
          }
          if ((*(char *)(iVar8 + 0x68) == '\x18') || (*(char *)(iVar8 + 0x68) == '\x19')) {
            FUN_00427870();
            FUN_0042c460();
            FUN_0040eac0();
            FUN_0040eac0();
            FUN_0040eac0();
            FUN_00427870();
            FUN_0042c800();
            FUN_00471d50();
          }
          if (((*(char *)(iVar8 + 0x68) == 'W') || (*(char *)(iVar8 + 0x68) == 'X')) &&
             (iVar10 = *(int *)(iVar8 + 0x6c), iVar5 = FUN_0043d1a0(), iVar10 < iVar5)) {
            FUN_0043caa0();
            iStack000000b0 = 0x14;
            do {
              FUN_0040ea90();
              FUN_0042c460();
              FUN_0040eac0();
              FUN_0040eac0();
              FUN_0042c7a0();
              FUN_004bbd80();
              iStack000000b0 = iStack000000b0 + 0xd;
            } while (iStack000000b0 < 0x48);
          }
        }
        if (((*(char *)(iVar8 + 0x68) == 'e') &&
            (iVar10 = FUN_0043d1a0(), *(int *)(iVar8 + 0x6c) < iVar10)) &&
           (iVar10 = FUN_004120c0(), iVar10 != 0)) {
          FUN_00423e70();
          FUN_00428970();
          FUN_0042c580();
          FUN_0043b610();
          FUN_0042c800();
          FUN_0042c4a0();
          FUN_00424990();
          FUN_00428970();
          FUN_004241b0();
          FUN_00424810();
          iVar10 = FUN_0043d1a0();
          if (iVar10 + -200 < *(int *)(iVar8 + 0x6c)) {
            FUN_0043d1a0();
          }
          FUN_00424730();
          FUN_00424820();
          FUN_00424810();
          FUN_00424a60();
          FUN_004482a0();
          FUN_00448280();
          FUN_004e6df0();
        }
        if (*(char *)(iVar8 + 0x60) == '\x03') {
          iStack00000044 = 0;
          FUN_0040eac0();
          cVar1 = *(char *)(iVar8 + 0x140);
          if (((cVar1 == -0x80) || (cVar1 == -0x7f)) || (cVar1 == -0x7e)) {
            iStack00000044 = FUN_004120c0();
            cVar1 = *(char *)(iVar8 + 0x140);
          }
          if (cVar1 == -0x7d) {
            iStack00000044 = FUN_004120c0();
            cVar1 = *(char *)(iVar8 + 0x140);
          }
          if (cVar1 == -0x77) {
            iStack00000044 = FUN_004120c0();
          }
          piVar2 = (int *)FUN_00428970();
          if (-1 < *piVar2) {
            FUN_00428970();
            iVar8 = FUN_00602440();
            pcVar19 = (char *)FUN_004a6ad0();
            if ((pcVar19 == (char *)0x0) || (*pcVar19 == '\0')) {
LAB_004b7409:
              iVar10 = FUN_00487da0();
              if ((iVar10 != 0) && (*(int *)(iVar10 + 0x18) != 0)) {
                if ((*(int *)(*(int *)(unaff_EDI + 0x8006d0) + 400) + -2 <= *(int *)(iVar10 + 0x24))
                   && (*(int *)(iVar10 + 0x24) <= *(int *)(*(int *)(unaff_EDI + 0x8006d0) + 400) + 2
                      )) goto LAB_004b73f3;
              }
            }
            else {
              if ((*(int *)(pcVar19 + 8) < *(int *)(*(int *)(unaff_EDI + 0x8006d0) + 400) + -2) ||
                 (*(int *)(*(int *)(unaff_EDI + 0x8006d0) + 400) + 2 < *(int *)(pcVar19 + 8)))
              goto LAB_004b7409;
LAB_004b73f3:
              iStack00000044 = FUN_004120c0();
            }
            if (iStack00000044 == 0) goto LAB_004b7685;
            if (iVar8 != 0) {
              FUN_004c0ec0();
            }
            ppVar24 = (pair<unsigned___int64,unsigned___int64> *)FUN_0040eac0();
            std::pair<unsigned___int64,unsigned___int64>::
            operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                      ((pair<unsigned___int64,unsigned___int64> *)&stack0x00000c68,ppVar24);
          }
          if (iStack00000044 != 0) {
            FUN_00423e70();
            FUN_00428970();
            FUN_0042c580();
            FUN_0043b610();
            FUN_0042c800();
            FUN_0042c4a0();
            FUN_00424990();
            FUN_00428970();
            FUN_004241b0();
            FUN_00424810();
            FUN_00424730();
            FUN_00424820();
            FUN_00424810();
            FUN_00424a60();
            FUN_004482a0();
            FUN_00448280();
            FUN_004e6df0();
          }
        }
      }
    }
    else {
      FUN_00428970();
      if (*(char *)(iVar8 + 0x1d10) != '\0') {
        FUN_0040ea90();
        FUN_0042c460();
        FUN_0042c800();
        cVar1 = FUN_0047f760();
        if (cVar1 != '\0') {
          FUN_0042c4a0();
          FUN_0040eac0();
          FUN_004120f0();
          FUN_004120f0();
          FUN_00470d80();
          if ((*(ushort *)(iVar8 + 0x7e) & 0x400) == 0) {
            FUN_0042c4a0();
            FUN_004120a0();
            FUN_004120a0();
            FUN_004120a0();
            FUN_0040eac0();
            FUN_004120f0();
            FUN_004120f0();
            FUN_00470d80();
          }
          FUN_0042c4a0();
          FUN_0040eac0();
          FUN_004120f0();
          FUN_004120f0();
          FUN_00470d80();
          FUN_0042c4a0();
          FUN_0040eac0();
          FUN_004120f0();
          FUN_004120f0();
          FUN_00470d80();
          FUN_0042c4a0();
          FUN_0040eac0();
          FUN_004120f0();
          FUN_004120f0();
          FUN_00470d80();
          FUN_0042c4a0();
          FUN_0040eac0();
          FUN_004120f0();
          FUN_004120f0();
          FUN_00470d80();
          FUN_0042c4a0();
          FUN_0040eac0();
          FUN_004120f0();
          FUN_004120f0();
          FUN_00470d80();
          FUN_0042c4a0();
          FUN_0040eac0();
          FUN_004120f0();
          FUN_004120f0();
          FUN_00470d80();
          FUN_0042c4a0();
          FUN_0040eac0();
          FUN_004120f0();
          FUN_004120f0();
          FUN_00470d80();
          FUN_0042c4a0();
          FUN_0040eac0();
          FUN_004120f0();
          FUN_004120f0();
          FUN_00470d80();
          if (*(int *)(iVar8 + 100) == 0x90) {
            FUN_0042c5b0();
            FUN_0040ea90();
            FUN_00411e30();
            FUN_004863d0();
          }
        }
      }
      *(undefined1 *)(iVar8 + 0x1d10) = 0;
    }
LAB_004b7685:
    FUN_00468db0();
    FUN_0042f030();
    cVar1 = FUN_004688d0();
  } while (cVar1 != '\0');
  if (unaff_EDI[0x1001004] != 0) {
    FUN_0060a9f0();
    FUN_0042f030();
    cVar1 = FUN_004688d0();
    while (cVar1 != '\0') {
      FUN_0042c6d0();
      FUN_0046f440();
      FUN_0060a9f0();
      cVar1 = FUN_004688d0();
      while (cVar1 != '\0') {
        FUN_0040eac0();
        FUN_00448280();
        FUN_00423e70();
        FUN_00468c90();
        FUN_00468c60();
        FUN_00468c60();
        FUN_00468c60();
        FUN_00412080();
        FUN_004122e0();
        FUN_004122c0();
        FUN_004120f0();
        FUN_00412080();
        FUN_004122e0();
        FUN_004122c0();
        FUN_004120f0();
        FUN_00424a60();
        FUN_00424730();
        FUN_00424820();
        FUN_00424810();
        FUN_00424a60();
        FUN_004482a0();
        FUN_004e6df0();
        FUN_00468d70();
        FUN_0060a9f0();
        cVar1 = FUN_004688d0();
      }
      FUN_0046f440();
      FUN_0060a9f0();
      cVar1 = FUN_004688d0();
      while (cVar1 != '\0') {
        FUN_0040eac0();
        FUN_00448280();
        FUN_00423e70();
        FUN_0042c6c0();
        FUN_00428970();
        FUN_00428970();
        FUN_00412080();
        FUN_004122e0();
        FUN_004122c0();
        FUN_004120f0();
        FUN_00428970();
        FUN_00412080();
        FUN_004122e0();
        FUN_004122c0();
        FUN_004120f0();
        FUN_00424a60();
        FUN_00424730();
        FUN_00424820();
        FUN_00424810();
        FUN_00424a60();
        FUN_004482a0();
        FUN_004e6df0();
        FUN_00468d30();
        FUN_0060a9f0();
        cVar1 = FUN_004688d0();
      }
      cVar1 = FUN_00477230();
      if (cVar1 == '\0') {
        FUN_0040eac0();
        FUN_00448280();
        FUN_00423e70();
        FUN_004120b0();
        FUN_0042f100();
        FUN_004120b0();
        FUN_0042f100();
        FUN_00412080();
        FUN_004122e0();
        FUN_004122c0();
        FUN_004120f0();
        FUN_004120b0();
        FUN_0042f100();
        FUN_00412080();
        FUN_004122e0();
        FUN_004122c0();
        FUN_004120f0();
        FUN_00424a60();
        FUN_00424730();
        FUN_00424820();
        FUN_00424810();
        FUN_00424a60();
        FUN_004482a0();
        FUN_004e6df0();
        FUN_0040eac0();
        FUN_00448280();
        FUN_00423e70();
        FUN_004120b0();
        FUN_0042f100();
        FUN_004120b0();
        FUN_0042f100();
        FUN_00412080();
        FUN_004122e0();
        FUN_004122c0();
        FUN_004120f0();
        FUN_004120b0();
        FUN_0042f100();
        FUN_00412080();
        FUN_004122e0();
        FUN_004122c0();
        FUN_004120f0();
        FUN_00424a60();
        FUN_00424730();
        FUN_00424820();
        FUN_00424810();
        FUN_00424a60();
        FUN_004482a0();
        FUN_004e6df0();
      }
      FUN_00468db0();
      FUN_0042f030();
      cVar1 = FUN_004688d0();
      unaff_EDI = param_6;
    }
  }
  (**(code **)(**(int **)(unaff_EDI + 0x134) + 0xe4))();
  FUN_0046f440();
  FUN_0060a9f0();
  cVar1 = FUN_004688d0();
  while (cVar1 != '\0') {
    piVar2 = (int *)FUN_0042c6c0();
    cVar1 = FUN_0047f760();
    if (cVar1 != '\0') {
      if ((*piVar2 == 0) || (*piVar2 == 4)) {
        pCVar6 = (CRefTime *)FUN_004120b0();
        CRefTime::Millisecs(pCVar6);
        pCVar6 = (CRefTime *)FUN_004120b0();
        CRefTime::Millisecs(pCVar6);
        pCVar6 = (CRefTime *)FUN_004120b0();
        CRefTime::Millisecs(pCVar6);
        FUN_004718b0();
      }
      FUN_0040eac0();
      FUN_00412120();
      FUN_00412120();
      if ((*piVar2 != 0) && (*piVar2 != 4)) {
        puVar7 = (undefined4 *)FUN_00428970();
        *puVar7 = 0x3f800000;
      }
      FUN_00448280();
      FUN_00423e70();
      FUN_00412080();
      FUN_0043b610();
      FUN_0042c800();
      FUN_0042c4a0();
      FUN_00424990();
      FUN_00428970();
      FUN_004241b0();
      FUN_00428970();
      FUN_004241b0();
      FUN_00428970();
      FUN_004241b0();
      FUN_00424730();
      FUN_00412400();
      FUN_00424a60();
      FUN_004482a0();
      FUN_004e6df0();
    }
    FUN_00468d30();
    FUN_0060a9f0();
    cVar1 = FUN_004688d0();
  }
  (**(code **)(**(int **)(unaff_EDI + 0x134) + 0xe4))();
  FUN_0046f440();
  FUN_0060a9f0();
  cVar1 = FUN_004688d0();
  while (cVar1 != '\0') {
    iVar8 = FUN_0042c6c0();
    cVar1 = FUN_0047f760();
    if (cVar1 == '\0') goto LAB_004b8b7c;
    switch(*(undefined4 *)(iVar8 + 0x60)) {
    case 0:
      param_2 = (byte *)FUN_004120c0();
      if (*(float *)(iVar8 + 0x54) != 0.0) {
        FUN_00427870();
        FUN_0042c460();
        FUN_0040eac0();
        FUN_0040eac0();
        FUN_0040eac0();
        FUN_0040ea90();
        FUN_00427870();
        FUN_0042c800();
        FUN_00471d50();
      }
      break;
    case 1:
      FUN_00427870();
      FUN_004252f0();
      FUN_004252f0();
      FUN_0040eac0();
      FUN_0040eac0();
      FUN_0040eac0();
      iVar8 = FUN_0042f000();
      if ((iVar8 != 0) && (iVar8 = FUN_0042f000(), *(char *)(iVar8 + 0x141) == '\x01')) {
        ppVar24 = (pair<unsigned___int64,unsigned___int64> *)FUN_0040eac0();
        std::pair<unsigned___int64,unsigned___int64>::
        operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                  ((pair<unsigned___int64,unsigned___int64> *)&stack0x00000ce0,ppVar24);
        ppVar24 = (pair<unsigned___int64,unsigned___int64> *)FUN_0040eac0();
        std::pair<unsigned___int64,unsigned___int64>::
        operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                  ((pair<unsigned___int64,unsigned___int64> *)&stack0x00000cc0,ppVar24);
        ppVar24 = (pair<unsigned___int64,unsigned___int64> *)FUN_0040eac0();
        std::pair<unsigned___int64,unsigned___int64>::
        operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                  ((pair<unsigned___int64,unsigned___int64> *)&stack0x00000cd0,ppVar24);
      }
      FUN_004252f0();
      FUN_0042c460();
      FUN_0040ea90();
      FUN_0042c7a0();
      FUN_00471d50();
      goto LAB_004b8b7c;
    case 2:
      iVar10 = FUN_0042f000();
      if (((iVar10 == 0) || (iVar10 = FUN_0042f000(), *(char *)(iVar10 + 0xaa8) != '\x03')) ||
         (iVar10 = FUN_0042f000(), *(char *)(iVar10 + 0xaa9) != '\b')) {
        param_2 = (byte *)FUN_004120c0();
      }
      else {
        FUN_0042f000();
        param_2 = (byte *)FUN_004ec400();
      }
      break;
    default:
      goto LAB_004b8b7c;
    case 4:
      param_2 = (byte *)FUN_004120c0();
    }
    if (param_2 != (byte *)0x0) {
      if (*(int *)(iVar8 + 0x60) != 1) {
        pCVar6 = (CRefTime *)FUN_004120b0();
        CRefTime::Millisecs(pCVar6);
        pCVar6 = (CRefTime *)FUN_004120b0();
        CRefTime::Millisecs(pCVar6);
        pCVar6 = (CRefTime *)FUN_004120b0();
        CRefTime::Millisecs(pCVar6);
        FUN_004718b0();
      }
      FUN_0040eac0();
      FUN_00412120();
      FUN_00448280();
      FUN_00423e70();
      FUN_00412080();
      FUN_0043b610();
      FUN_0042c800();
      FUN_0042c4a0();
      FUN_00424990();
      if (*(int *)(iVar8 + 0x60) == 2) {
        FUN_004244f0();
        FUN_004243d0();
      }
      else if (*(int *)(iVar8 + 0x60) == 4) {
        FUN_0040ea90();
        FUN_00412390();
        FUN_00424170();
      }
      else {
        fVar26 = (float10)FUN_00424860();
        if (0.0 < (float)fVar26) {
          FUN_00427870();
          FUN_0040ea90();
          FUN_004c12f0();
        }
      }
      FUN_00424730();
      FUN_0047b5f0();
      FUN_00424820();
      FUN_00424810();
      FUN_00424a60();
      FUN_004482a0();
      FUN_004e6df0();
    }
LAB_004b8b7c:
    FUN_00468d30();
    FUN_0060a9f0();
    cVar1 = FUN_004688d0();
  }
  FUN_00448280();
  (**(code **)(**(int **)(unaff_EDI + 0x134) + 0x1ac))();
  local_28 = *(byte **)(unaff_EDI + 0x134);
  (**(code **)(*(int *)local_28 + 0x170))();
  (**(code **)(**(int **)(unaff_EDI + 0x134) + 0xe4))();
  (**(code **)(**(int **)(unaff_EDI + 0x134) + 0x164))();
  (**(code **)(**(int **)(unaff_EDI + 0x134) + 0xb0))();
  (**(code **)(**(int **)(unaff_EDI + 0x134) + 0xb0))();
  (**(code **)(**(int **)(unaff_EDI + 0x134) + 0x104))();
  pbStack_68 = (byte *)0x1;
  (**(code **)(**(int **)(unaff_EDI + 0x134) + 0x114))();
  (**(code **)(**(int **)(unaff_EDI + 0x134) + 0x114))();
  FUN_0046f440();
  FUN_0060a9f0();
  cVar1 = FUN_004688d0();
  while (cVar1 != '\0') {
    iVar8 = FUN_0042c6c0();
    if ((*(int *)(iVar8 + 0x60) == 3) && (cVar1 = FUN_0047f760(), cVar1 != '\0')) {
      FUN_00450f60();
      fVar27 = *(float *)(iVar8 + 0x4c);
      FUN_0040e420();
      iVar8 = (int)(fVar27 + 1.0);
      pbVar9 = (byte *)-iVar8;
      local_28 = pbVar9;
      if (-iVar8 == iVar8 || SBORROW4((int)pbVar9,iVar8) != iVar8 * -2 < 0) {
        do {
          if ((int)pbVar9 <= iVar8) {
            FUN_00428970();
            param_2 = (byte *)FUN_00428970();
            FUN_00428970();
            pbStack_4c = pbVar9;
            do {
              iStack_64 = 0;
              FUN_0042f7e0();
              cVar1 = FUN_0043b480();
              while (cVar1 == '\0') {
                iStack_64 = iStack_64 + 1;
                if (100 < iStack_64) goto LAB_004b9253;
                FUN_0042f7e0();
                cVar1 = FUN_0043b480();
              }
              FUN_004120b0();
              FUN_0043abc0();
              FUN_004120f0();
              FUN_004120b0();
              FUN_0043abc0();
              FUN_004120f0();
              FUN_0040ea90();
              FUN_0040ea50();
              FUN_0040ea90();
              FUN_0040ea50();
              FUN_0040ea90();
              FUN_0040ea50();
              FUN_0040ea90();
              FUN_0040ea50();
              FUN_00423e70();
              FUN_00412080();
              FUN_004122c0();
              FUN_004120f0();
              FUN_00412080();
              FUN_004122c0();
              FUN_004120f0();
              FUN_00424a60();
              (**(code **)(**(int **)(unaff_EDI + 0x134) + 0xb0))();
              (**(code **)(**(int **)(unaff_EDI + 0x134) + 0x14c))();
LAB_004b9253:
              pbStack_4c = pbStack_4c + 1;
            } while ((int)pbStack_4c <= iVar8);
          }
          local_28 = local_28 + 1;
        } while ((int)local_28 <= iVar8);
      }
    }
    FUN_00468d30();
    FUN_0060a9f0();
    cVar1 = FUN_004688d0();
  }
  cVar1 = FUN_0047fa10();
  if ((((cVar1 == '\0') && (cVar1 = FUN_0047fa10(), cVar1 == '\0')) &&
      (cVar1 = FUN_0047fa10(), cVar1 == '\0')) && (cVar1 = FUN_0047fa10(), cVar1 == '\0')) {
    FUN_0046f440();
    FUN_0060a9f0();
    cVar1 = FUN_004688d0();
    while (cVar1 != '\0') {
      iVar10 = FUN_00468c90();
      iVar8 = *(int *)(iVar10 + 8);
      if ((iVar8 != 0) && (0.0 < *(float *)(iVar8 + 0x16c))) {
        FUN_00428970();
        cVar1 = FUN_0047f760();
        if ((cVar1 != '\0') &&
           ((unaff_EDI[0x8006e6] == 0 || (*(int *)(iVar10 + 8) == *(int *)(unaff_EDI + 0x8006d0)))))
        {
          FUN_00423e70();
          FUN_00428970();
          FUN_00424610();
          FUN_00488e50();
          FUN_0042c460();
          FUN_0042c800();
          FUN_00450f60();
          pbStack_4c = (byte *)0xfffffffe;
          piVar2 = (int *)FUN_00428970();
          FUN_00428970();
          FUN_00428970();
          do {
            local_8 = -2;
            do {
              iVar8 = *piVar2;
              iStack_64 = 0;
              FUN_0042f7e0();
              cVar1 = FUN_0043b480();
              while (cVar1 == '\0') {
                iStack_64 = iStack_64 + 1;
                iVar8 = iVar8 + -1;
                if (100 < iStack_64) goto LAB_004b991e;
                FUN_0042f7e0();
                cVar1 = FUN_0043b480();
              }
              param_2 = (byte *)(iVar8 + 1);
              FUN_00428970();
              FUN_004120b0();
              FUN_004122e0();
              FUN_0043abc0();
              FUN_004120f0();
              FUN_00428970();
              FUN_004120b0();
              FUN_004122e0();
              FUN_0043abc0();
              FUN_004120f0();
              FUN_0040ea90();
              FUN_0040ea50();
              FUN_0040ea90();
              FUN_0040ea50();
              FUN_0040ea90();
              FUN_0040ea50();
              FUN_0040ea90();
              FUN_0040ea50();
              FUN_00423e70();
              FUN_00412080();
              FUN_004122c0();
              FUN_004120f0();
              FUN_00412080();
              FUN_004122c0();
              FUN_004120f0();
              FUN_00424a60();
              (**(code **)(*piRam00000135 + 0xb0))();
              (**(code **)(*piRam00000135 + 0x14c))();
              unaff_EDI = pbStack_68;
LAB_004b991e:
              local_8 = local_8 + 1;
            } while (local_8 < 3);
            pbStack_4c = (byte *)((int)pbStack_4c + 1);
          } while ((int)pbStack_4c < 3);
        }
      }
      FUN_00468d70();
      FUN_0060a9f0();
      cVar1 = FUN_004688d0();
    }
  }
  uStack_88 = 0;
  (**(code **)(**(int **)(unaff_EDI + 0x134) + 0x104))();
  (**(code **)(**(int **)(unaff_EDI + 0x134) + 0xe4))();
  (**(code **)(**(int **)(unaff_EDI + 0x134) + 0xe4))();
  pbVar9 = *(byte **)(unaff_EDI + 0x134);
  (**(code **)(*(int *)pbVar9 + 0x164))();
  FUN_0046f440();
  FUN_0060a9f0();
  cVar1 = FUN_004688d0();
  while (cVar1 != '\0') {
    iVar8 = FUN_00468c90();
    piVar2 = (int *)(iVar8 + 8);
    if ((*piVar2 != 0) && (0.0 < *(float *)(*piVar2 + 0x16c))) {
      FUN_00428970();
      cVar1 = FUN_0047f760();
      if ((cVar1 != '\0') &&
         ((cVar1 = FUN_00444520(), cVar1 == '\0' &&
          (iVar8 = FUN_0043d1a0(), *(int *)(*piVar2 + 0x6c) <= iVar8)))) {
        FUN_00423e70();
        (**(code **)(**(int **)(unaff_EDI + 0x134) + 0xb0))();
        (**(code **)(**(int **)(unaff_EDI + 0x134) + 0xb0))();
        FUN_0040f0d0();
        FUN_004120b0();
        FUN_00412260();
        FUN_00412200();
        FUN_004120f0();
        FUN_004120b0();
        FUN_00412260();
        FUN_00412200();
        FUN_004120f0();
        FUN_0040ea90();
        FUN_0040ea90();
        FUN_00451510();
        FUN_0040ea90();
        FUN_00451510();
        FUN_00412280();
        FUN_004a8ef0();
        FUN_0040ea90();
        FUN_00451510();
        FUN_0040ea90();
        FUN_00451510();
        FUN_00412280();
        FUN_004a8ef0();
        FUN_0040ea90();
        FUN_004a8ef0();
        FUN_0040ea90();
        FUN_004a8ef0();
        local_2c = 0;
        pbVar11 = (byte *)FUN_004120a0();
        pbVar12 = (byte *)FUN_004120a0();
        pbVar13 = (byte *)FUN_004120a0();
        pbVar14 = (byte *)FUN_004120a0();
        pbVar15 = (byte *)FUN_004120a0();
        pbVar16 = (byte *)FUN_004120a0();
        pbStack_34 = (byte *)0x1a04;
        puVar23 = (uint *)&stack0x00003c5c;
        do {
          fVar27 = ((1.0 - (float)local_2c / 15.0) - 0.5) * 2.0;
          fVar27 = 1.0 - fVar27 * fVar27;
          fVar27 = fVar27 * fVar27;
          FUN_004121c0();
          FUN_00411e30();
          *puVar23 = (((int)(fVar27 * 50.0) << 8 | (uint)*pbVar11) << 8 | (uint)*pbVar12) << 8 |
                     (uint)*pbVar13;
          FUN_004121c0();
          FUN_00411e30();
          puVar23[4] = (((int)(fVar27 * 200.0) << 8 | (uint)*pbVar14) << 8 | (uint)*pbVar15) << 8 |
                       (uint)*pbVar16;
          pbStack_34 = pbStack_34 + 0xc;
          local_2c = local_2c + 1;
          puVar23 = puVar23 + 8;
        } while ((int)pbStack_34 < 0x1ac4);
        (**(code **)(**(int **)(pbVar9 + 0x134) + 0x14c))();
        unaff_EDI = pbVar9;
        if (*(char *)(*piVar2 + 0x990) == '\x03') {
          iVar8 = 0;
          local_14 = 0x1b84;
          puVar23 = (uint *)&stack0x00003c74;
          do {
            fVar27 = ((1.0 - (float)iVar8 / 15.0) - 0.5) * 2.0;
            fVar27 = 1.0 - fVar27 * fVar27;
            fVar27 = fVar27 * fVar27;
            FUN_004121c0();
            FUN_00411e30();
            *puVar23 = (((int)(fVar27 * 50.0) << 8 | (uint)bRam00000004) << 8 | (uint)*pbStack_34)
                       << 8 | (uint)*local_28;
            FUN_004121c0();
            FUN_00411e30();
            puVar23[4] = (((int)(fVar27 * 255.0) << 8 | (uint)DAT_00000000) << 8 | (uint)*param_3)
                         << 8 | (uint)*param_2;
            local_14 = local_14 + 0xc;
            iVar8 = iVar8 + 1;
            puVar23 = puVar23 + 8;
          } while (local_14 < 0x1c44);
          unaff_EDI = (byte *)0x16;
          (**(code **)(*piRam0000014a + 0x14c))();
        }
      }
    }
    FUN_00468d70();
    FUN_0060a9f0();
    cVar1 = FUN_004688d0();
  }
  FUN_00447fb0();
  FUN_00447dd0();
  (**(code **)(**(int **)(unaff_EDI + 0x134) + 0xe4))();
  piVar2 = *(int **)(unaff_EDI + 0x134);
  (**(code **)(*piVar2 + 0xe4))();
  pbVar11 = *(byte **)(unaff_EDI + 0x134);
  (**(code **)(*(int *)pbVar11 + 0xe4))();
  FUN_00448280();
  FUN_0042f030();
  FUN_0060a9f0();
  cVar1 = FUN_004a8f20();
  while (cVar1 != '\0') {
    piVar17 = (int *)FUN_004abc30();
    iVar8 = *piVar17;
    EnterCriticalSection((LPCRITICAL_SECTION)(iVar8 + 0x250));
    FUN_0046f440();
    FUN_0060a9f0();
    cVar1 = FUN_004688d0();
    while (cVar1 != '\0') {
      piVar17 = (int *)FUN_0042c6c0();
      if (*(int *)(*piVar17 + 0xc) != 0) {
        FUN_00423e70();
        FUN_00428970();
        FUN_00412080();
        FUN_004122c0();
        FUN_004120f0();
        FUN_00428970();
        FUN_00412080();
        FUN_004122c0();
        FUN_004120f0();
        FUN_00424a60();
        FUN_00448f10();
        FUN_004482a0();
        (**(code **)(**(int **)(unaff_EDI + 0x134) + 400))();
        puStack_f0 = (undefined1 *)0x4ba385;
        (**(code **)(**(int **)(unaff_EDI + 0x134) + 0x1a0))();
        puStack_f0 = *(undefined1 **)(*piVar17 + 0x18);
        piStack_f4 = (int *)0x0;
        pbStack_f8 = *(byte **)(*piVar17 + 0x10);
        uStack_fc = 0;
        (**(code **)(**(int **)(unaff_EDI + 0x134) + 0x148))();
      }
      FUN_00468d30();
      FUN_0060a9f0();
      cVar1 = FUN_004688d0();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(iVar8 + 0x250));
    FUN_004abca0();
    FUN_0060a9f0();
    cVar1 = FUN_004a8f20();
  }
  piVar17 = *(int **)(unaff_EDI + 0x134);
  (**(code **)(*piVar17 + 0xe4))();
  (**(code **)(**(int **)(unaff_EDI + 0x134) + 0xe4))();
  FUN_00447d10();
  puStack_f0 = (undefined1 *)0x4ba47b;
  FUN_0060a9f0();
  puStack_f0 = (undefined1 *)0x4ba48f;
  FUN_0042f030();
  puStack_f0 = (undefined1 *)0x4ba49c;
  cVar1 = FUN_004688d0();
  while (cVar1 != '\0') {
    piVar18 = (int *)FUN_0042c6d0();
    if (*piVar18 != 0) {
      puStack_f0 = &stack0x00000664;
      piStack_f4 = (int *)&stack0x000006b4;
      pbStack_f8 = (byte *)piVar18[3];
      uStack_fc = uStack_88;
      FUN_004bd160();
    }
    if (piVar18[1] != 0) {
      puStack_f0 = &stack0x00000664;
      piStack_f4 = (int *)&stack0x000006b4;
      uStack_fc = 0;
      pbStack_f8 = pbVar9;
      FUN_004be760();
    }
    puStack_f0 = &stack0x000001cc;
    piStack_f4 = (int *)0x4ba565;
    FUN_004abc60();
    puStack_f0 = (undefined1 *)0x4ba579;
    FUN_0042f030();
    puStack_f0 = (undefined1 *)0x4ba586;
    cVar1 = FUN_004688d0();
  }
  puStack_f0 = (undefined1 *)0x4ba5a2;
  FUN_0046f440();
  puStack_f0 = (undefined1 *)0x4ba5b6;
  FUN_0060a9f0();
  puStack_f0 = (undefined1 *)0x4ba5c3;
  cVar1 = FUN_004688d0();
  pbStack_114 = unaff_EDI;
  while (cVar1 != '\0') {
    piVar18 = (int *)FUN_0042c6c0();
    iVar8 = *piVar18;
    puStack_f0 = (undefined1 *)0x0;
    piStack_f4 = (int *)0x3dcccccd;
    pbStack_f8 = &stack0x00000444;
    uStack_fc = 2;
    FUN_004120b0();
    uStack_fc = 0x4ba60d;
    pCVar6 = (CRefTime *)FUN_00412220();
    piStack_f4 = (int *)0x4ba614;
    piStack_f4 = (int *)CRefTime::Millisecs(pCVar6);
    pbStack_f8 = (byte *)0x1;
    uStack_fc = 0x4ba61e;
    pCVar6 = (CRefTime *)FUN_004120b0();
    pbStack_f8 = (byte *)0x4ba625;
    pbStack_f8 = (byte *)CRefTime::Millisecs(pCVar6);
    uStack_fc = 0;
    pCVar6 = (CRefTime *)FUN_004120b0();
    uStack_fc = 0x4ba636;
    uStack_fc = CRefTime::Millisecs(pCVar6);
    FUN_004718b0();
    if (iVar8 == *(int *)(pbStack_114 + 0x8006d0)) {
      FUN_004c0ed0();
    }
    puStack_f0 = (undefined1 *)0x3f800000;
    piStack_f4 = (int *)0x3f800000;
    pbStack_f8 = (byte *)0x3f800000;
    uStack_fc = 0x4ba6aa;
    FUN_0040eac0();
    if (0 < *(int *)(iVar8 + 0x134)) {
      puStack_f0 = (undefined1 *)0x3fc00000;
      piStack_f4 = (int *)0x3f000000;
      pbStack_f8 = (byte *)0x3f000000;
      uStack_fc = 0x4ba6e1;
      FUN_0040eac0();
      puStack_f0 = (undefined1 *)0x4ba6ee;
      FUN_004127c0();
    }
    puStack_f0 = (undefined1 *)0x4ba701;
    FUN_0046f440();
    puStack_f0 = (undefined1 *)0x4ba714;
    FUN_0060a9f0();
    puStack_f0 = (undefined1 *)0x4ba721;
    cVar1 = FUN_004688d0();
    while (cVar1 != '\0') {
      pcVar19 = (char *)FUN_0042c6c0();
      if (*pcVar19 == '\x01') {
        puStack_f0 = (undefined1 *)0x3f000000;
        piStack_f4 = (int *)0x3f000000;
        pbStack_f8 = (byte *)0x3f800000;
        uStack_fc = 0x4ba76f;
        FUN_0040eac0();
        puStack_f0 = (undefined1 *)0x4ba77c;
        FUN_004127c0();
      }
      puStack_f0 = &stack0x000001a8;
      piStack_f4 = (int *)0x4ba792;
      FUN_00468d30();
      puStack_f0 = (undefined1 *)0x4ba7a5;
      FUN_0060a9f0();
      puStack_f0 = (undefined1 *)0x4ba7b2;
      cVar1 = FUN_004688d0();
      pbStack_114 = pbVar11;
    }
    puStack_f0 = &stack0x00000bb8;
    piStack_f4 = (int *)0x4ba7da;
    FUN_00412120();
    if ((*(ushort *)(iVar8 + 0x7e) & 0x200) != 0) {
      puStack_f0 = (undefined1 *)0x4ba7f4;
      FUN_004460f0();
      puStack_f0 = &stack0x0000251c;
      piStack_f4 = (int *)0x3f800000;
      pbStack_f8 = (byte *)0x3f800000;
      uStack_fc = 0x3f800000;
      FUN_0040eac0();
      piStack_f4 = (int *)0x4ba832;
      FUN_00468f50();
      piStack_f4 = (int *)&stack0x0000255c;
      puStack_f0 = (undefined1 *)0x3f000000;
      pbStack_f8 = (byte *)0x4ba848;
      FUN_004a8f40();
      puStack_f0 = (undefined1 *)0x4ba858;
      FUN_004127c0();
    }
    puStack_f0 = (undefined1 *)0x4ba871;
    FUN_00449090();
    if (0.0 < *(float *)(iVar8 + 0x1190)) {
      piStack_f4 = *(int **)(pbStack_114 + 0x134);
      puStack_f0 = (undefined1 *)0xa8;
      pbStack_f8 = (byte *)0x4ba89e;
      (**(code **)(*piStack_f4 + 0xe4))();
      pbStack_f8 = (byte *)(iVar8 + 0x11c8);
      uStack_fc = 0x4ba8b6;
      pbStack_f8 = (byte *)FUN_0042f000();
      pbStack_114 = (byte *)(piVar17 + 0xc0);
      uStack_fc = (uint)piVar2 >> 0x18;
      FUN_004128f0();
      (**(code **)(*(int *)CONCAT13(uRam00000139,piRam00000135._1_3_) + 0xe4))();
      FUN_00447fb0();
      FUN_0042f000();
      FUN_004128f0();
      puStack_f0 = (undefined1 *)0x4ba9bd;
      FUN_00447fb0();
    }
    puStack_f0 = &stack0x000001ec;
    piStack_f4 = (int *)0x4ba9d3;
    FUN_00468d30();
    puStack_f0 = (undefined1 *)0x4ba9e7;
    FUN_0060a9f0();
    puStack_f0 = (undefined1 *)0x4ba9f4;
    cVar1 = FUN_004688d0();
  }
  puStack_f0 = (undefined1 *)0x4baa0f;
  FUN_00449090();
  FUN_00447d10();
  puStack_f0 = (undefined1 *)0x4baa2d;
  FUN_00447fb0();
  puStack_f0 = (undefined1 *)0x3f800000;
  piStack_f4 = (int *)0x3f800000;
  pbStack_f8 = (byte *)0x3f800000;
  uStack_fc = 0x4baa5b;
  FUN_0040eac0();
  puStack_f0 = (undefined1 *)0x4baa67;
  FUN_00448280();
  FUN_00632870();
  pbVar9 = (byte *)0x0;
  puStack_f0 = (undefined1 *)0x3f800000;
  piStack_f4 = (int *)0xffffffff;
  pbStack_f8 = (byte *)0x2;
  uStack_fc = 0;
  (**(code **)(**(int **)(pbStack_114 + 0x134) + 0xac))();
  cVar1 = FUN_0047fa10();
  if (cVar1 != '\0') {
    FUN_00487490();
    cVar1 = FUN_0047fa10();
    if (cVar1 != '\0') {
      if (0.35 <= *(float *)(pbStack_114 + 0x1c4)) {
        if (*(float *)(pbStack_114 + 0x1c4) < 2.0) {
          pbStack_114 = (byte *)0x3f4ccccd;
          FUN_00428970();
          pbVar11 = pbVar9;
        }
        else {
          pbStack_114 = (byte *)0x3fcccccd;
          FUN_00428970();
          pbVar11 = pbVar9;
        }
      }
      else {
        pbStack_114 = (byte *)0x3ccccccd;
        FUN_00428970();
        pbVar11 = pbVar9;
      }
      FUN_0040ea90();
      pbVar9 = pbVar11;
      FUN_005fc1b0();
      FUN_0040eac0();
      FUN_0040ea90();
      FUN_00427870();
      FUN_0040eac0();
      FUN_0040eac0();
      FUN_00448170();
      FUN_0047ae10();
      if (pbVar11[0x800a40] == 0) {
        pbVar11[0x800a48] = 0;
        pbVar11[0x800a49] = 0;
        pbVar11[0x800a4a] = 0;
        pbVar11[0x800a4b] = 0;
        pbStack_114 = pbVar11;
      }
      else {
        FUN_004aba20();
        puStack_f0 = (undefined1 *)FUN_00487f60();
        FUN_004aba20();
        (**(code **)(**(int **)(pbVar11 + 0x134) + 0xe4))();
        FUN_00447d10();
        FUN_0040f0d0();
        FUN_0040f0d0();
        ppVar24 = (pair<unsigned___int64,unsigned___int64> *)&stack0x000039e8;
        iStack_cc = 0x10;
        do {
          ppVar20 = (pair<unsigned___int64,unsigned___int64> *)FUN_0040eac0();
          std::pair<unsigned___int64,unsigned___int64>::
          operator=<std::pair<unsigned___int64,unsigned___int64>,0>(ppVar24,ppVar20);
          FUN_0040ea90();
          FUN_00411e30();
          ppVar24 = ppVar24 + 0x10;
          iStack_cc = iStack_cc + -1;
        } while (iStack_cc != 0);
        FUN_00448f10();
        FUN_0040eac0();
        FUN_00448280();
        FUN_00447fb0();
        FUN_00448fe0();
        iStack_cc = 0;
        if (0 < (int)puStack_f0) {
          FUN_00428970();
          FUN_00428970();
          do {
            FUN_00424b50();
            FUN_0040e420();
            FUN_0040ea50();
            FUN_00468c70();
            FUN_00428970();
            FUN_00428970();
            FUN_004db110();
            FUN_0040ef50();
            FUN_004758c0();
            iStack_cc = iStack_cc + 1;
          } while (iStack_cc < (int)puStack_f0);
        }
      }
      (**(code **)(**(int **)(pbStack_114 + 0x134) + 0xb0))();
      FUN_005fb860();
    }
  }
  FUN_00650980();
  cVar1 = FUN_0047fa10();
  if (cVar1 == '\0') goto LAB_004bbb1a;
  FUN_00487490();
  cVar1 = FUN_0047fa10();
  if (cVar1 == '\0') goto LAB_004bbb1a;
  (**(code **)(**(int **)(pbStack_114 + 0x134) + 0xe4))();
  FUN_00447d10();
  (**(code **)(**(int **)(pbStack_114 + 0x134) + 0xac))();
  FUN_0043a490();
  FUN_00424b50();
  FUN_0043a490();
  FUN_0040e420();
  FUN_0040ea90();
  FUN_0040eac0();
  FUN_0040ea90();
  FUN_00427870();
  FUN_0040eac0();
  FUN_0040eac0();
  FUN_00448170();
  FUN_0040f0d0();
  FUN_0040f0d0();
  ppVar24 = (pair<unsigned___int64,unsigned___int64> *)&stack0x00003b10;
  iStack_a4 = 0x10;
  pbStack_114 = pbVar9;
  do {
    ppVar20 = (pair<unsigned___int64,unsigned___int64> *)FUN_0040eac0();
    std::pair<unsigned___int64,unsigned___int64>::
    operator=<std::pair<unsigned___int64,unsigned___int64>,0>(ppVar24,ppVar20);
    FUN_0040ea90();
    FUN_00411e30();
    ppVar24 = ppVar24 + 0x10;
    iStack_a4 = iStack_a4 + -1;
  } while (iStack_a4 != 0);
  FUN_00448f10();
  FUN_0040eac0();
  FUN_00448280();
  FUN_004120c0();
  FUN_0040ea90();
  FUN_00412280();
  FUN_00476660();
  FUN_004120a0();
  FUN_004120a0();
  FUN_004120a0();
  FUN_0040eac0();
  FUN_00448280();
  FUN_004120c0();
  FUN_0040ea90();
  FUN_00412280();
  FUN_00476660();
  iVar8 = FUN_0042f000();
  if (iVar8 != 0) {
    FUN_0040eac0();
    FUN_00448280();
    if (*(short *)(iVar8 + 0x8c) < 0) {
      if (*(short *)(iVar8 + 0x94) < 0) goto LAB_004bb615;
      FUN_004120c0();
    }
    else {
      FUN_004120c0();
    }
    FUN_0040ea90();
    FUN_00412280();
    FUN_00476660();
  }
LAB_004bb615:
  FUN_0040eac0();
  FUN_00448280();
  FUN_004120c0();
  FUN_00428970();
  FUN_0040ea90();
  FUN_00476660();
  local_20 = 0;
  FUN_0046f440();
  FUN_0060a9f0();
  cVar1 = FUN_004688d0();
  while (cVar1 != '\0') {
    iVar8 = FUN_00468c90();
    iVar8 = *(int *)(iVar8 + 8);
    if (iVar8 != 0) {
      iVar10 = FUN_00487f50();
      if (iVar10 <= local_20) break;
      if ((*(char *)(iVar8 + 0x60) == '\0') && (iVar8 != *(int *)(pbStack_114 + 0x8006d0))) {
        FUN_0043a490();
        FUN_00424b50();
        FUN_0043a490();
        FUN_0040e420();
        FUN_0040ea90();
        FUN_0040eac0();
        FUN_00448280();
        FUN_004120c0();
        FUN_0040ea90();
        FUN_00412280();
        FUN_00476660();
        FUN_004120a0();
        FUN_004120a0();
        FUN_004120a0();
        FUN_0040eac0();
        FUN_00448280();
        FUN_004120c0();
        FUN_0040ea90();
        FUN_00412280();
        FUN_00476660();
        local_20 = local_20 + 1;
      }
    }
    FUN_00468d70();
    FUN_0060a9f0();
    cVar1 = FUN_004688d0();
  }
  FUN_0040eac0();
  FUN_00448280();
  puVar7 = (undefined4 *)FUN_00428970();
  *puVar7 = 0x43610000;
  puVar7 = (undefined4 *)FUN_00428970();
  *puVar7 = 0;
  pfVar21 = (float *)FUN_00428970();
  *pfVar21 = (float)*(int *)(pbStack_114 + 0x8006e8) * 0.002 * 5.0 * 3.0 + *pfVar21;
LAB_004bbb1a:
  (**(code **)(**(int **)(pbStack_114 + 0x134) + 0xa8))();
  FUN_00601e90();
  FUN_004da480();
  FUN_005fb860();
  FUN_005fb860();
  FUN_0043c3e0();
  FUN_005fb860();
  FUN_005fb860();
  ExceptionList = in_stack_00003e18;
  __security_check_cookie(in_stack_00003e10 ^ (uint)&uStack_fc);
  return;
}


/* FUN_004bbd80 @ 004bbd80  kind=gamemisc  attributed-by=none  size=2502 */

void FUN_004bbd80(uint *param_1,undefined8 *param_2,undefined8 *param_3,int param_4,
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
  float fVar9;
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
  int local_a8;
  float local_98;
  float local_94;
  float local_88;
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
    iVar2 = param_4 % 500;
    iVar3 = param_4 % 10000;
    local_a8 = 0;
    do {
      fVar5 = (float)(param_4 % 2000) / 2000.0;
      fVar6 = (fVar5 - 0.5) * 2.0;
      dVar7 = (double)((float)local_a8 + ((float)iVar2 / 500.0) * 2.0 * 3.1415927);
      libm_sse2_cos_precise();
      fVar9 = 1.0 - fVar5;
      fVar11 = ((float)dVar7 * 0.5 + 1.0) * param_8 * (1.0 - fVar6 * fVar6);
      fVar6 = ((float)iVar4 / 10.0 + (float)iVar3 * 0.0001) * 2.0 * 3.1415927;
      local_18 = (float)*param_2;
      local_18 = local_18 * fVar9;
      local_78 = (float)*param_3;
      fStack_74 = (float)((ulonglong)*param_3 >> 0x20);
      fStack_14 = (float)((ulonglong)*param_2 >> 0x20);
      fStack_14 = fStack_14 * fVar9;
      local_70 = (float)param_3[1];
      fStack_6c = (float)((ulonglong)param_3[1] >> 0x20);
      local_10 = (float)param_2[1];
      local_10 = local_10 * fVar9;
      fStack_c = (float)((ulonglong)param_2[1] >> 0x20);
      fStack_c = fStack_c * fVar9;
      _local_28 = CONCAT44(fStack_14 + fStack_74 * fVar5,local_18 + local_78 * fVar5);
      _local_20 = CONCAT44(fStack_c + fStack_6c * fVar5,local_10 + local_70 * fVar5);
      FUN_00448280(&local_28);
      dVar7 = (double)fVar6;
      libm_sse2_cos_precise();
      dVar8 = (double)fVar6;
      libm_sse2_sin_precise();
      fVar17 = fVar5 * param_7 * 2.0;
      fVar20 = (float)dVar7 * param_7 * 0.0;
      fVar9 = (float)dVar8 * param_7 * 0.0;
      fVar12 = fVar17 * 0.0;
      fVar21 = fVar20 + fVar9;
      fVar13 = (float)CONCAT44(*(int *)(in_ECX + 0x1e4) + param_1[3] +
                               (uint)CARRY4(*(uint *)(in_ECX + 0x1e0),param_1[2]),
                               *(uint *)(in_ECX + 0x1e0) + param_1[2]) * 1.5258789e-05;
      fVar14 = (float)CONCAT44(*(int *)(in_ECX + 0x1dc) + param_1[1] +
                               (uint)CARRY4(*(uint *)(in_ECX + 0x1d8),*param_1),
                               *(uint *)(in_ECX + 0x1d8) + *param_1) * 1.5258789e-05;
      fVar6 = fVar13 * 0.0;
      fVar10 = (float)*(longlong *)(param_1 + 4) * 1.5258789e-05 * 0.0;
      fVar15 = fVar14 * 0.0;
      fVar22 = fVar14 + fVar6 + fVar10 + (float)dVar7 * param_7 + fVar9 + fVar12 + 0.0;
      fVar6 = fVar15 + fVar6;
      fVar9 = fVar5 * 40.0 * 0.017453292;
      fVar18 = (float)*(longlong *)(param_1 + 4) * 1.5258789e-05 + fVar6 + fVar17 + fVar21 + 0.0;
      dVar7 = (double)fVar9;
      fVar23 = fVar15 + fVar13 + fVar10 + (float)dVar8 * param_7 + fVar20 + fVar12 + 0.0;
      fVar20 = fVar6 + fVar10 + fVar21 + fVar12 + 1.0;
      local_38 = fVar22;
      local_34 = fVar23;
      local_30 = fVar18;
      local_2c = fVar20;
      libm_sse2_cos_precise();
      fVar6 = (float)dVar7;
      dVar7 = (double)fVar9;
      libm_sse2_sin_precise();
      fVar17 = (float)dVar7;
      fVar9 = fVar6 * 0.0;
      fVar13 = fVar17 * 0.0;
      fVar21 = fVar9 + fVar13;
      fVar16 = fVar9 - fVar13;
      fVar10 = fVar5 * 30.0 * 0.017453292;
      dVar7 = (double)fVar10;
      libm_sse2_cos_precise();
      fVar12 = (float)dVar7;
      dVar7 = (double)fVar10;
      libm_sse2_sin_precise();
      fVar10 = (float)dVar7;
      fVar14 = fVar12 - fVar16 * fVar10;
      local_88 = fVar16 * fVar12 + fVar10;
      fVar24 = fVar12 * 0.0;
      fVar15 = fVar24 - (fVar9 - fVar17) * fVar10;
      local_98 = fVar10 * 0.0;
      local_94 = (fVar9 - fVar17) * fVar12 + local_98;
      fVar19 = fVar24 - (fVar6 - fVar13) * fVar10;
      fVar24 = fVar24 - fVar16 * fVar10;
      fVar25 = (fVar6 - fVar13) * fVar12 + local_98;
      local_98 = fVar16 * fVar12 + local_98;
      fVar5 = fVar5 * 10.0 * 0.017453292;
      dVar7 = (double)fVar5;
      local_48 = local_88;
      local_44 = local_94;
      local_40 = fVar25;
      local_3c = local_98;
      libm_sse2_cos_precise();
      fVar10 = (float)dVar7;
      dVar7 = (double)fVar5;
      libm_sse2_sin_precise();
      fVar5 = (float)dVar7;
      local_68 = fVar21 * fVar5 + fVar14 * fVar10;
      local_58 = fVar21 * fVar10 - fVar14 * fVar5;
      local_64 = (fVar6 + fVar13) * fVar5 + fVar15 * fVar10;
      local_54 = (fVar6 + fVar13) * fVar10 - fVar15 * fVar5;
      local_60 = (fVar17 + fVar9) * fVar5 + fVar19 * fVar10;
      local_50 = (fVar17 + fVar9) * fVar10 - fVar19 * fVar5;
      local_5c = fVar21 * fVar5 + fVar24 * fVar10;
      local_4c = fVar21 * fVar10 - fVar24 * fVar5;
      if (fVar11 != 1.0) {
        local_68 = local_68 * fVar11;
        local_58 = local_58 * fVar11;
        local_64 = local_64 * fVar11;
        local_54 = local_54 * fVar11;
        local_60 = local_60 * fVar11;
        local_50 = local_50 * fVar11;
        local_5c = local_5c * fVar11;
        local_4c = local_4c * fVar11;
        local_88 = local_88 * fVar11;
        fVar25 = fVar25 * fVar11;
        local_94 = local_94 * fVar11;
        local_98 = local_98 * fVar11;
        local_48 = local_88;
        local_44 = local_94;
        local_40 = fVar25;
        local_3c = local_98;
      }
      iVar1 = *(int *)(in_ECX + 0x800730);
      fVar6 = (float)*(int *)(iVar1 + 0x48) * -0.5;
      fVar9 = (float)*(int *)(iVar1 + 0x44) * -0.5;
      fVar5 = (float)*(int *)(iVar1 + 0x4c) * -0.5;
      local_38 = local_58 * fVar6 + local_68 * fVar9 + local_88 * fVar5 + fVar22;
      local_34 = local_54 * fVar6 + local_64 * fVar9 + local_94 * fVar5 + fVar23;
      local_30 = local_50 * fVar6 + local_60 * fVar9 + fVar25 * fVar5 + fVar18;
      local_2c = local_4c * fVar6 + local_5c * fVar9 + local_98 * fVar5 + fVar20;
      FUN_004482a0(&local_68,param_5,param_6);
      FUN_004e6df0();
      iVar4 = iVar4 + 1;
      local_a8 = local_a8 + 0xd;
      param_4 = param_4 + 0x1bb;
    } while (iVar4 < param_9);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004bc760 @ 004bc760  kind=gamemisc  attributed-by=none  size=2556 */

void FUN_004bc760(uint *param_1,undefined8 *param_2,undefined8 *param_3,int param_4,
                 undefined4 param_5,undefined4 param_6,float param_7,float param_8,float param_9,
                 int param_10)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
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
  int local_a8;
  float local_9c;
  float local_94;
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
  if (0 < param_10) {
    iVar2 = param_4 % 500;
    iVar3 = param_4 % 10000;
    local_a8 = 0;
    do {
      fVar5 = (float)(param_4 % 2000) / 2000.0;
      fVar6 = (fVar5 - 0.5) * 2.0;
      dVar8 = (double)((float)local_a8 + ((float)iVar2 / 500.0) * 2.0 * 3.1415927);
      libm_sse2_cos_precise();
      fVar13 = ((float)dVar8 * 0.5 + 1.0) * param_8 * (1.0 - fVar6 * fVar6);
      fVar6 = fVar5 * fVar5 * 4.0 * 3.1415927 * param_9 +
              ((float)iVar4 / 10.0 + (float)iVar3 * 0.0001) * 2.0 * 3.1415927;
      local_78 = (float)*param_3;
      fStack_74 = (float)((ulonglong)*param_3 >> 0x20);
      local_70 = (float)param_3[1];
      fStack_6c = (float)((ulonglong)param_3[1] >> 0x20);
      local_18 = (float)*param_2;
      fVar10 = 1.0 - fVar5;
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
      fVar10 = fVar5 * param_7;
      dVar8 = (double)fVar6;
      libm_sse2_cos_precise();
      dVar9 = (double)fVar6;
      libm_sse2_sin_precise();
      fVar19 = (float)dVar8 * fVar10 * 0.0;
      fVar11 = (float)dVar9 * fVar10 * 0.0;
      fVar20 = fVar19 + fVar11;
      fVar14 = fVar10 * 2.0 * 0.0;
      fVar18 = (float)CONCAT44(*(int *)(in_ECX + 0x1e4) + param_1[3] +
                               (uint)CARRY4(*(uint *)(in_ECX + 0x1e0),param_1[2]),
                               *(uint *)(in_ECX + 0x1e0) + param_1[2]) * 1.5258789e-05;
      fVar12 = (float)*(longlong *)(param_1 + 4) * 1.5258789e-05 * 0.0;
      fVar15 = (float)CONCAT44(*(int *)(in_ECX + 0x1dc) + param_1[1] +
                               (uint)CARRY4(*(uint *)(in_ECX + 0x1d8),*param_1),
                               *(uint *)(in_ECX + 0x1d8) + *param_1) * 1.5258789e-05;
      fVar6 = fVar18 * 0.0;
      fVar16 = fVar15 * 0.0;
      fVar17 = fVar16 + fVar6;
      fVar7 = fVar5 * 40.0 * 0.017453292;
      fVar23 = fVar15 + fVar6 + fVar12 + (float)dVar8 * fVar10 + fVar11 + fVar14 + 0.0;
      fVar21 = (float)*(longlong *)(param_1 + 4) * 1.5258789e-05 + fVar17 +
               fVar10 * 2.0 + fVar20 + 0.0;
      fVar18 = fVar18 + fVar16 + fVar12 + (float)dVar9 * fVar10 + fVar19 + fVar14 + 0.0;
      dVar8 = (double)fVar7;
      fVar16 = fVar17 + fVar12 + fVar20 + fVar14 + 1.0;
      local_38 = fVar23;
      local_34 = fVar18;
      local_30 = fVar21;
      local_2c = fVar16;
      libm_sse2_cos_precise();
      fVar6 = (float)dVar8;
      dVar8 = (double)fVar7;
      libm_sse2_sin_precise();
      fVar17 = (float)dVar8;
      fVar10 = fVar6 * 0.0;
      fVar12 = fVar17 * 0.0;
      fVar19 = fVar10 + fVar12;
      fVar20 = fVar10 - fVar12;
      fVar7 = fVar5 * 30.0 * 0.017453292;
      dVar8 = (double)fVar7;
      libm_sse2_cos_precise();
      fVar11 = (float)dVar8;
      dVar8 = (double)fVar7;
      libm_sse2_sin_precise();
      fVar7 = (float)dVar8;
      fVar14 = fVar11 - fVar20 * fVar7;
      fVar24 = fVar11 * 0.0;
      local_84 = fVar20 * fVar11 + fVar7;
      fVar15 = fVar24 - (fVar10 - fVar17) * fVar7;
      local_9c = fVar7 * 0.0;
      local_94 = (fVar10 - fVar17) * fVar11 + local_9c;
      fVar22 = fVar24 - (fVar6 - fVar12) * fVar7;
      fVar24 = fVar24 - fVar20 * fVar7;
      fVar25 = (fVar6 - fVar12) * fVar11 + local_9c;
      local_9c = fVar20 * fVar11 + local_9c;
      fVar5 = fVar5 * 10.0 * 0.017453292;
      dVar8 = (double)fVar5;
      local_48 = local_84;
      local_44 = local_94;
      local_40 = fVar25;
      local_3c = local_9c;
      libm_sse2_cos_precise();
      fVar7 = (float)dVar8;
      dVar8 = (double)fVar5;
      libm_sse2_sin_precise();
      fVar5 = (float)dVar8;
      local_68 = fVar19 * fVar5 + fVar14 * fVar7;
      local_58 = fVar19 * fVar7 - fVar14 * fVar5;
      local_64 = (fVar6 + fVar12) * fVar5 + fVar15 * fVar7;
      local_54 = (fVar6 + fVar12) * fVar7 - fVar15 * fVar5;
      local_60 = (fVar17 + fVar10) * fVar5 + fVar22 * fVar7;
      local_50 = (fVar17 + fVar10) * fVar7 - fVar22 * fVar5;
      local_5c = fVar19 * fVar5 + fVar24 * fVar7;
      local_4c = fVar19 * fVar7 - fVar24 * fVar5;
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
        fVar25 = fVar25 * fVar13;
        local_94 = local_94 * fVar13;
        local_9c = local_9c * fVar13;
        local_48 = local_84;
        local_44 = local_94;
        local_40 = fVar25;
        local_3c = local_9c;
      }
      iVar1 = *(int *)(in_ECX + 0x800730);
      fVar6 = (float)*(int *)(iVar1 + 0x48) * -0.5;
      fVar10 = (float)*(int *)(iVar1 + 0x44) * -0.5;
      fVar5 = (float)*(int *)(iVar1 + 0x4c) * -0.5;
      local_38 = local_58 * fVar6 + local_68 * fVar10 + local_84 * fVar5 + fVar23;
      local_34 = local_54 * fVar6 + local_64 * fVar10 + local_94 * fVar5 + fVar18;
      local_30 = local_50 * fVar6 + local_60 * fVar10 + fVar25 * fVar5 + fVar21;
      local_2c = local_4c * fVar6 + local_5c * fVar10 + local_9c * fVar5 + fVar16;
      FUN_004482a0(&local_68,param_5,param_6);
      FUN_004e6df0();
      iVar4 = iVar4 + 1;
      local_a8 = local_a8 + 0xd;
      param_4 = param_4 + 0x1bb;
    } while (iVar4 < param_10);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004bd160 @ 004bd160  kind=gamemisc  attributed-by=none  size=5601 */

void FUN_004bd160(int *param_1,float param_2,float param_3,float param_4,int param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  int in_ECX;
  float fVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  int iStack_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  undefined4 local_f0;
  float local_ec;
  float local_e8;
  undefined4 local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_98;
  float local_94;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_58;
  float local_54;
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
  float local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  uint local_c;
  
  local_c = DAT_0076aa78 ^ (uint)&local_164;
  local_f0 = param_6;
  local_e4 = param_7;
  fVar1 = *(float *)(*(int *)(in_ECX + 0x800718) + *param_1 * 4);
  local_f8 = fVar1;
  if (fVar1 != 0.0) {
    FUN_00423e70();
    fVar5 = (float)*(longlong *)(param_1 + 6) * 1.5258789e-05;
    local_108 = (float)(*(uint *)(in_ECX + 0x1d8) + param_1[2]);
    iStack_104 = *(int *)(in_ECX + 0x1dc) + param_1[3] +
                 (uint)CARRY4(*(uint *)(in_ECX + 0x1d8),param_1[2]);
    fVar4 = (float)CONCAT44(*(int *)(in_ECX + 0x1e4) + param_1[5] +
                            (uint)CARRY4(*(uint *)(in_ECX + 0x1e0),param_1[4]),
                            *(uint *)(in_ECX + 0x1e0) + param_1[4]) * 1.5258789e-05;
    local_150 = (float)CONCAT44(iStack_104,local_108);
    fVar3 = local_150 * 1.5258789e-05;
    local_120 = local_e0 * fVar3 + local_d0 * fVar4 + local_c0 * fVar5 + local_b0;
    local_130 = local_dc * fVar3 + local_cc * fVar4 + local_bc * fVar5 + local_ac;
    local_134 = local_d8 * fVar3 + local_c8 * fVar4 + local_b8 * fVar5 + local_a8;
    local_13c = local_d4 * fVar3 + local_c4 * fVar4 + local_b4 * fVar5 + local_a4;
    fVar3 = (float)param_1[8];
    if (fVar3 != 1.0) {
      local_e0 = local_e0 * fVar3;
      local_dc = local_dc * fVar3;
      local_d8 = local_d8 * fVar3;
      local_d4 = local_d4 * fVar3;
      local_d0 = local_d0 * fVar3;
      local_cc = local_cc * fVar3;
      local_c8 = local_c8 * fVar3;
      local_c4 = local_c4 * fVar3;
      local_c0 = local_c0 * fVar3;
      local_b4 = local_b4 * fVar3;
      local_bc = local_bc * fVar3;
      local_b8 = local_b8 * fVar3;
    }
    local_160 = local_cc;
    local_15c = local_d4;
    local_158 = local_c4;
    local_154 = local_d0;
    local_148 = local_e0;
    local_144 = local_d8;
    local_138 = local_dc;
    local_124 = local_c8;
    local_b0 = local_120;
    local_ac = local_130;
    local_a8 = local_134;
    local_a4 = local_13c;
    if ((*(byte *)(param_1 + 0xe) & 4) != 0) {
      local_150 = 0.1 / ((float)*(int *)((int)fVar1 + 0x4c) * fVar3);
      dVar2 = -1.5707963705062866;
      local_164 = local_b4;
      local_14c = local_c0;
      local_140 = local_b8;
      local_12c = local_bc;
      libm_sse2_cos_precise();
      local_f4 = (float)dVar2;
      dVar2 = -1.5707963705062866;
      libm_sse2_sin_precise();
      local_110 = (float)dVar2;
      local_10c = local_14c * local_110;
      local_14c = local_14c * local_f4 + local_148 * local_110;
      local_10c = local_148 * local_f4 - local_10c;
      local_128 = local_138 * local_f4 - local_12c * local_110;
      local_148 = local_140 * local_110;
      local_140 = local_140 * local_f4 + local_144 * local_110;
      local_148 = local_144 * local_f4 - local_148;
      local_114 = local_15c * local_f4 - local_164 * local_110;
      local_15c = local_15c * local_110 + local_164 * local_f4;
      local_12c = local_12c * local_f4 + local_138 * local_110;
      FUN_00423e70();
      dVar2 = (double)((float)*(int *)(in_ECX + 0x8003a0) * 0.004 + (float)(param_5 * 0x1e) + 84.0);
      libm_sse2_cos_precise();
      local_164 = (float)dVar2;
      dVar2 = (double)((float)*(int *)(in_ECX + 0x8003a0) * 0.0027 + 93.0);
      libm_sse2_cos_precise();
      fVar3 = (local_164 + (float)dVar2) * local_150;
      local_fc = local_60 * local_10c + fVar3 * local_154 + local_58 * local_14c +
                 local_54 * local_120;
      local_e8 = local_4c * local_154 + local_10c * 0.0 + local_48 * local_14c +
                 local_44 * local_120;
      local_ec = local_3c * local_154 + local_40 * local_10c + local_38 * local_14c +
                 local_34 * local_120;
      local_11c = local_2c * local_154 + local_30 * local_10c + local_28 * local_14c +
                  local_24 * local_120;
      local_144 = local_60 * local_128 + fVar3 * local_160 + local_58 * local_12c +
                  local_54 * local_130;
      local_118 = local_4c * local_160 + local_128 * 0.0 + local_48 * local_12c +
                  local_44 * local_130;
      local_14c = local_3c * local_160 + local_40 * local_128 + local_38 * local_12c +
                  local_34 * local_130;
      local_100 = local_2c * local_160 + local_30 * local_128 + local_28 * local_12c +
                  local_24 * local_130;
      local_154 = local_60 * local_148 + fVar3 * local_124 + local_58 * local_140 +
                  local_54 * local_134;
      local_138 = local_4c * local_124 + local_148 * 0.0 + local_48 * local_140 +
                  local_44 * local_134;
      fVar1 = local_40 * local_148;
      local_128 = local_2c * local_124 + local_30 * local_148 + local_28 * local_140 +
                  local_24 * local_134;
      local_160 = local_60 * local_114 + fVar3 * local_158 + local_58 * local_15c +
                  local_54 * local_13c;
      local_148 = local_4c * local_158 + local_114 * 0.0 + local_48 * local_15c +
                  local_44 * local_13c;
      local_164 = local_3c * local_158 + local_40 * local_114 + local_38 * local_15c +
                  local_34 * local_13c;
      local_114 = local_2c * local_158 + local_30 * local_114 + local_28 * local_15c +
                  local_24 * local_13c;
      dVar2 = 1.5707963705062866;
      local_140 = local_3c * local_124 + fVar1 + local_38 * local_140 + local_34 * local_134;
      libm_sse2_cos_precise();
      local_10c = (float)dVar2;
      dVar2 = 1.5707963705062866;
      libm_sse2_sin_precise();
      local_108 = (float)dVar2;
      local_120 = local_fc * local_10c - local_ec * local_108;
      fVar4 = local_fc * local_108 + local_ec * local_10c;
      local_130 = local_144 * local_10c - local_14c * local_108;
      fVar1 = local_144 * local_108 + local_14c * local_10c;
      local_134 = local_154 * local_10c - local_140 * local_108;
      fVar3 = local_154 * local_108 + local_140 * local_10c;
      fVar5 = local_160 * local_108 + local_164 * local_10c;
      local_13c = local_160 * local_10c - local_164 * local_108;
      local_fc = fVar4 * local_f4 - local_110 * local_e8;
      local_158 = local_118 * local_f4 + fVar1 * local_110;
      local_144 = fVar1 * local_f4 - local_110 * local_118;
      local_15c = fVar3 * local_110 + local_138 * local_f4;
      local_154 = fVar3 * local_f4 - local_110 * local_138;
      local_118 = local_148 * local_f4 + fVar5 * local_110;
      local_160 = fVar5 * local_f4 - local_110 * local_148;
      local_110 = local_e8 * local_f4 + fVar4 * local_110;
      FUN_00423e70();
      dVar2 = (double)((float)*(int *)(in_ECX + 0x8003a0) * 0.005 + (float)(param_5 * 0x1e));
      libm_sse2_cos_precise();
      local_164 = (float)dVar2;
      dVar2 = (double)((float)*(int *)(in_ECX + 0x8003a0) * 0.003);
      libm_sse2_cos_precise();
      fVar1 = (local_164 + (float)dVar2) * local_150 * 0.8;
      local_148 = local_a0 * local_120 + local_110 * 0.0 + local_98 * local_fc +
                  local_94 * local_11c;
      fVar3 = local_8c * local_110 + fVar1 * local_120 + local_88 * local_fc + local_84 * local_11c;
      fVar4 = local_7c * local_110 + local_80 * local_120 + local_78 * local_fc +
              local_74 * local_11c;
      local_b0 = local_120 * local_70 + local_110 * local_6c + local_fc * local_68 +
                 local_11c * local_64;
      local_138 = local_a0 * local_130 + local_158 * 0.0 + local_98 * local_144 +
                  local_94 * local_100;
      local_11c = local_8c * local_158 + fVar1 * local_130 + local_88 * local_144 +
                  local_84 * local_100;
      fVar5 = local_7c * local_158 + local_80 * local_130 + local_78 * local_144 +
              local_74 * local_100;
      local_ac = local_130 * local_70 + local_158 * local_6c + local_144 * local_68 +
                 local_100 * local_64;
      local_144 = local_a0 * local_134 + local_15c * 0.0 + local_98 * local_154 +
                  local_94 * local_128;
      fVar6 = local_8c * local_15c + fVar1 * local_134 + local_88 * local_154 + local_84 * local_128
      ;
      fVar7 = local_7c * local_15c + local_80 * local_134 + local_78 * local_154 +
              local_74 * local_128;
      local_a8 = local_134 * local_70 + local_15c * local_6c + local_154 * local_68 +
                 local_128 * local_64;
      local_15c = local_a0 * local_13c + local_118 * 0.0 + local_98 * local_160 +
                  local_94 * local_114;
      local_128 = local_8c * local_118 + fVar1 * local_13c + local_88 * local_160 +
                  local_84 * local_114;
      fVar1 = local_7c * local_118 + local_80 * local_13c + local_78 * local_160 +
              local_74 * local_114;
      local_a4 = local_13c * local_70 + local_118 * local_6c + local_160 * local_68 +
                 local_114 * local_64;
      local_c0 = fVar4 * local_10c - fVar3 * local_108;
      local_154 = fVar4 * local_108 + fVar3 * local_10c;
      local_160 = fVar5 * local_108 + local_11c * local_10c;
      local_bc = fVar5 * local_10c - local_11c * local_108;
      local_b8 = fVar7 * local_10c - fVar6 * local_108;
      local_124 = fVar6 * local_10c + fVar7 * local_108;
      local_158 = fVar1 * local_108 + local_128 * local_10c;
      local_b4 = fVar1 * local_10c - local_128 * local_108;
      fVar1 = local_f8;
      local_110 = fVar3;
    }
    local_f8 = (float)param_1[9] * 0.017453292;
    dVar2 = (double)local_f8;
    local_164 = local_b4;
    local_14c = local_c0;
    local_140 = local_b8;
    local_13c = local_a4;
    local_134 = local_a8;
    local_130 = local_ac;
    local_12c = local_bc;
    local_120 = local_b0;
    libm_sse2_cos_precise();
    local_108 = (float)dVar2;
    dVar2 = (double)local_f8;
    libm_sse2_sin_precise();
    fVar3 = (float)dVar2;
    local_e0 = local_154 * fVar3 + local_148 * local_108;
    local_154 = local_154 * local_108 - fVar3 * local_148;
    local_dc = local_160 * fVar3 + local_138 * local_108;
    local_160 = local_160 * local_108 - fVar3 * local_138;
    local_d8 = local_124 * fVar3 + local_144 * local_108;
    local_c8 = local_124 * local_108 - fVar3 * local_144;
    local_d4 = local_15c * local_108 + local_158 * fVar3;
    local_158 = local_158 * local_108 - fVar3 * local_15c;
    fVar3 = (float)*(int *)((int)fVar1 + 0x44) * -0.5;
    fVar1 = (float)*(int *)((int)fVar1 + 0x48) * -0.5;
    local_b0 = local_e0 * fVar3 + local_154 * fVar1 + local_14c * 0.0 + local_120;
    local_ac = local_dc * fVar3 + local_160 * fVar1 + local_12c * 0.0 + local_130;
    local_a8 = local_d8 * fVar3 + local_c8 * fVar1 + local_140 * 0.0 + local_134;
    local_a4 = local_d4 * fVar3 + local_158 * fVar1 + local_164 * 0.0 + local_13c;
    local_d0 = local_154;
    local_cc = local_160;
    local_c4 = local_158;
    if (param_2 <= param_4 * param_4) {
      fVar1 = 1.0;
    }
    else {
      dVar2 = (double)param_2;
      libm_sse2_sqrt_precise();
      fVar1 = 1.0 - ((float)dVar2 - param_4) / (param_3 - param_4);
    }
    FUN_00447fb0(fVar1);
    FUN_004482a0(&local_e0,local_f0,local_e4);
    local_1c = *param_8;
    local_18 = param_8[1];
    local_14 = param_8[2];
    if ((*(byte *)(param_1 + 0xe) & 1) == 0) {
      local_10 = ((float)param_1[10] / 255.0) * (float)param_8[3];
    }
    else {
      local_10 = 1.0;
    }
    FUN_00448280(&local_1c);
    FUN_004e6df0();
  }
  __security_check_cookie(local_c ^ (uint)&local_164);
  return;
}


/* FUN_004be760 @ 004be760  kind=gamemisc  attributed-by=none  size=7509 */

void FUN_004be760(float *param_1,float param_2,float param_3,float param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 *param_7)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte *pbVar7;
  byte bVar8;
  int in_ECX;
  double dVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float *local_f0;
  float local_ec;
  int local_e8;
  float local_e4;
  float local_e0;
  float fStack_dc;
  float local_d4;
  float local_d0;
  int local_cc;
  float local_c8;
  int iStack_c4;
  undefined4 local_bc;
  undefined4 local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
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
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  uint local_c;
  
  local_c = DAT_0076aa78 ^ (uint)&local_140;
  local_b8 = param_5;
  local_cc = *(int *)(*(int *)(in_ECX + 0x800724) + (int)*param_1 * 4);
  local_f0 = param_1;
  local_bc = param_6;
  local_e8 = in_ECX;
  if (*param_1 == 1.4013e-44) {
    local_124 = (float)*(int *)(local_cc + 0x44);
    local_120 = param_1[9] / local_124;
    FUN_00423e70();
    pfVar1 = local_f0;
    local_13c = local_f0[6];
    local_11c = local_f0[7];
    fVar12 = (float)*(longlong *)(local_f0 + 6) * 1.5258789e-05;
    local_c8 = (float)(*(uint *)(local_e8 + 0x1d8) + (int)param_1[2]);
    iStack_c4 = *(int *)(local_e8 + 0x1dc) + (int)param_1[3] +
                (uint)CARRY4(*(uint *)(local_e8 + 0x1d8),(uint)param_1[2]);
    fVar11 = (float)CONCAT44(*(int *)(local_e8 + 0x1e4) + (int)param_1[5] +
                             (uint)CARRY4(*(uint *)(local_e8 + 0x1e0),(uint)param_1[4]),
                             *(uint *)(local_e8 + 0x1e0) + (int)param_1[4]) * 1.5258789e-05;
    fVar10 = (float)CONCAT44(iStack_c4,local_c8) * 1.5258789e-05;
    local_108 = local_70;
    local_110 = local_60;
    local_130 = local_6c;
    local_fc = local_70 * fVar10 + local_60 * fVar11 + local_50 * fVar12 + local_40;
    local_134 = local_5c;
    local_104 = local_68;
    local_10c = local_6c * fVar10 + local_5c * fVar11 + local_4c * fVar12 + local_3c;
    local_140 = local_58;
    local_128 = local_58 * fVar11 + local_68 * fVar10 + local_48 * fVar12 + local_38;
    local_138 = local_64;
    local_118 = local_54;
    local_114 = local_64 * fVar10 + local_54 * fVar11 + local_44 * fVar12 + local_34;
    if (local_120 != 1.0) {
      local_108 = local_70 * local_120;
      local_50 = local_50 * local_120;
      local_130 = local_6c * local_120;
      local_4c = local_4c * local_120;
      local_104 = local_68 * local_120;
      local_48 = local_48 * local_120;
      local_138 = local_64 * local_120;
      local_44 = local_44 * local_120;
      local_110 = local_60 * local_120;
      local_140 = local_58 * local_120;
      local_134 = local_5c * local_120;
      local_118 = local_54 * local_120;
    }
    local_120 = (float)((int)local_f0[8] * 0x5a) * 0.017453292;
    dVar9 = (double)local_120;
    local_12c = local_50;
    local_f8 = local_4c;
    local_f4 = local_48;
    local_ec = local_44;
    local_e0 = local_13c;
    fStack_dc = local_11c;
    libm_sse2_cos_precise();
    local_100 = (float)dVar9;
    dVar9 = (double)local_120;
    libm_sse2_sin_precise();
    fVar10 = (float)dVar9;
    local_70 = local_110 * fVar10;
    local_110 = local_110 * local_100 - local_108 * fVar10;
    local_70 = local_108 * local_100 + local_70;
    local_6c = local_134 * fVar10;
    local_134 = local_134 * local_100 - local_130 * fVar10;
    local_6c = local_130 * local_100 + local_6c;
    local_58 = local_140 * local_100 - local_104 * fVar10;
    local_68 = local_140 * fVar10 + local_104 * local_100;
    local_64 = local_138 * local_100 + local_118 * fVar10;
    local_124 = local_124 * -0.5;
    local_118 = local_118 * local_100 - local_138 * fVar10;
    fVar10 = (float)*(int *)(local_cc + 0x48) * -0.5;
    local_40 = local_70 * local_124 + local_110 * fVar10 + local_12c * 0.0 + local_fc;
    local_38 = local_58 * fVar10 + local_68 * local_124 + local_f4 * 0.0 + local_128;
    local_3c = local_6c * local_124 + local_134 * fVar10 + local_f8 * 0.0 + local_10c;
    local_34 = local_64 * local_124 + local_118 * fVar10 + local_ec * 0.0 + local_114;
    local_60 = local_110;
    local_5c = local_134;
    local_54 = local_118;
    uVar4 = __alldiv(local_13c,local_11c,0x10000,0);
    uVar5 = __alldiv(pfVar1[4],pfVar1[5],0x10000,0);
    uVar6 = __alldiv(local_f0[2],local_f0[3],0x10000,0);
    iVar3 = local_e8;
    pbVar7 = (byte *)FUN_0042f7e0(uVar6,uVar5,uVar4,0);
    bVar8 = pbVar7[3] & 0x1f;
    if (bVar8 == 0xd) {
      bVar8 = 0xff;
    }
    else if (((pbVar7[3] & 0x1f) == 0) || (bVar8 == 2)) {
      bVar8 = *pbVar7;
      if (bVar8 < 5) {
        bVar8 = 5;
      }
    }
    else {
      bVar8 = 0;
    }
    local_1c = *param_7;
    local_10 = ((float)bVar8 / 255.0) * (float)param_7[3];
    local_18 = param_7[1];
    local_14 = param_7[2];
    FUN_004482a0(&local_70,local_b8,local_bc);
    FUN_00448280(&local_1c);
    FUN_004e6df0();
    local_cc = *(int *)(*(int *)(iVar3 + 0x800724) + 0x2c);
  }
  pfVar1 = local_f0;
  if (local_cc != 0) {
    local_f8 = local_f0[9] / (float)*(int *)(local_cc + 0x44);
    FUN_00423e70();
    pfVar2 = local_f0;
    local_e4 = *pfVar1;
    if (local_e4 == 7.00649e-45) {
      if (*(char *)(pfVar1 + 0xc) == '\0') {
        fVar10 = (float)(int)pfVar1[0xd] * 0.001;
        if (1.0 < fVar10) {
          fVar10 = 1.0;
        }
      }
      else {
        fVar10 = 1.0 - (float)(int)pfVar1[0xd] * 0.001;
        if (fVar10 < 0.0) {
          fVar10 = 0.0;
        }
      }
      fVar10 = pfVar1[0xb] * 0.8 * fVar10;
      local_80 = local_a0 * 0.0 + local_b0 * 0.0 + local_90 * fVar10 + local_80;
      local_7c = local_9c * 0.0 + local_ac * 0.0 + local_8c * fVar10 + local_7c;
      local_78 = local_98 * 0.0 + local_a8 * 0.0 + local_88 * fVar10 + local_78;
      local_74 = local_94 * 0.0 + local_a4 * 0.0 + local_84 * fVar10 + local_74;
    }
    if (local_e4 == 9.80909e-45) {
      if (*(char *)(pfVar1 + 0xc) == '\0') {
        fVar10 = (float)(int)pfVar1[0xd] * 0.001;
        if (1.0 < fVar10) {
          fVar10 = 1.0;
        }
      }
      else {
        fVar10 = 1.0 - (float)(int)pfVar1[0xd] * 0.01;
        if (fVar10 < 0.0) {
          fVar10 = 0.0;
        }
      }
      fVar10 = -(pfVar1[0xb] * fVar10) - 1.0;
      local_80 = local_a0 * 0.0 + local_b0 * 0.0 + local_90 * fVar10 + local_80;
      local_7c = local_9c * 0.0 + local_ac * 0.0 + local_8c * fVar10 + local_7c;
      local_78 = local_98 * 0.0 + local_a8 * 0.0 + local_88 * fVar10 + local_78;
      local_74 = fVar10 * local_84 + local_94 * 0.0 + local_a4 * 0.0 + local_74;
    }
    if (local_e4 == 1.12104e-44) {
      if (*(char *)(pfVar1 + 0xc) == '\0') {
        fVar10 = (float)(int)pfVar1[0xd] * 0.001;
        if (1.0 < (float)(int)pfVar1[0xd] * 0.001) {
          fVar10 = 1.0;
        }
      }
      else {
        fVar10 = 1.0 - (float)(int)pfVar1[0xd] * 0.01;
        if (fVar10 < 0.0) {
          fVar10 = 0.0;
        }
      }
      fVar10 = pfVar1[0xb] * fVar10;
      local_80 = local_a0 * 0.0 + local_b0 * 0.0 + local_90 * fVar10 + local_80;
      local_7c = local_9c * 0.0 + local_ac * 0.0 + local_8c * fVar10 + local_7c;
      local_78 = local_98 * 0.0 + local_a8 * 0.0 + local_88 * fVar10 + local_78;
      local_74 = local_94 * 0.0 + local_a4 * 0.0 + local_84 * fVar10 + local_74;
    }
    local_140 = pfVar1[2];
    local_c8 = local_f0[6];
    local_b4 = local_f0[7];
    fVar12 = (float)*(longlong *)(local_f0 + 6) * 1.5258789e-05;
    local_e0 = (float)(*(uint *)(local_e8 + 0x1d8) + (int)local_140);
    fStack_dc = (float)(*(int *)(local_e8 + 0x1dc) + (int)pfVar1[3] +
                       (uint)CARRY4(*(uint *)(local_e8 + 0x1d8),(uint)local_140));
    fVar11 = (float)CONCAT44(*(int *)(local_e8 + 0x1e4) + (int)pfVar1[5] +
                             (uint)CARRY4(*(uint *)(local_e8 + 0x1e0),(uint)pfVar1[4]),
                             *(uint *)(local_e8 + 0x1e0) + (int)pfVar1[4]) * 1.5258789e-05;
    fVar10 = (float)CONCAT44(fStack_dc,local_e0) * 1.5258789e-05;
    local_138 = local_b0;
    local_114 = local_a0;
    local_108 = local_ac;
    local_f4 = local_a0 * fVar11 + local_b0 * fVar10 + local_90 * fVar12 + local_80;
    local_110 = local_9c;
    local_d0 = local_9c * fVar11 + local_ac * fVar10 + local_8c * fVar12 + local_7c;
    local_118 = local_98;
    local_134 = local_a8;
    local_130 = local_98 * fVar11 + local_a8 * fVar10 + local_88 * fVar12 + local_78;
    local_10c = local_94;
    local_12c = local_a4;
    local_d4 = local_94 * fVar11 + local_a4 * fVar10 + local_84 * fVar12 + local_74;
    if (local_f8 != 1.0) {
      local_138 = local_b0 * local_f8;
      local_84 = local_84 * local_f8;
      local_108 = local_ac * local_f8;
      local_114 = local_a0 * local_f8;
      local_134 = local_a8 * local_f8;
      local_110 = local_9c * local_f8;
      local_12c = local_a4 * local_f8;
      local_118 = local_98 * local_f8;
      local_10c = local_94 * local_f8;
      local_90 = local_90 * local_f8;
      local_8c = local_8c * local_f8;
      local_88 = local_88 * local_f8;
    }
    local_13c = (float)((int)local_f0[8] * 0x5a) * 0.017453292;
    dVar9 = (double)local_13c;
    local_124 = local_88;
    local_120 = local_8c;
    local_100 = local_90;
    local_fc = local_84;
    local_80 = local_f4;
    local_7c = local_d0;
    local_78 = local_130;
    local_74 = local_d4;
    libm_sse2_cos_precise();
    local_140 = (float)dVar9;
    dVar9 = (double)local_13c;
    libm_sse2_sin_precise();
    fVar10 = local_e4;
    fVar11 = (float)dVar9;
    local_104 = local_138 * local_140 + local_114 * fVar11;
    local_114 = local_114 * local_140 - local_138 * fVar11;
    local_128 = local_108 * local_140 + local_110 * fVar11;
    local_110 = local_110 * local_140 - local_108 * fVar11;
    fVar12 = local_134 * fVar11;
    local_134 = local_134 * local_140 + local_118 * fVar11;
    local_118 = local_118 * local_140 - fVar12;
    local_11c = local_12c * local_140 + local_10c * fVar11;
    local_10c = local_10c * local_140 - local_12c * fVar11;
    fVar12 = (float)*(int *)(local_cc + 0x44) * -0.5;
    local_ec = local_100 * 0.0;
    fVar11 = (float)*(int *)(local_cc + 0x48) * -0.5;
    local_12c = local_104 * fVar12 + local_114 * fVar11 + local_ec + local_f4;
    local_f4 = local_120 * 0.0;
    local_f8 = local_124 * 0.0;
    local_108 = local_128 * fVar12 + local_110 * fVar11 + local_f4 + local_d0;
    local_140 = local_fc * 0.0;
    local_78 = local_134 * fVar12 + local_118 * fVar11 + local_f8 + local_130;
    local_74 = local_11c * fVar12 + local_10c * fVar11 + local_140 + local_d4;
    local_b0 = local_104;
    local_ac = local_128;
    local_a8 = local_134;
    local_a4 = local_11c;
    local_a0 = local_114;
    local_94 = local_10c;
    if (((local_e4 == 1.4013e-45) || (local_e4 == 2.8026e-45)) ||
       (local_80 = local_12c, local_7c = local_108, local_e4 == 4.2039e-45)) {
      if (*(char *)(pfVar2 + 0xc) == '\0') {
        fVar11 = (float)(int)pfVar2[0xd] * 0.001;
        if (1.0 < fVar11) {
          fVar11 = 1.0;
        }
      }
      else {
        fVar11 = 1.0 - (float)(int)pfVar2[0xd] * 0.001;
        if (fVar11 < 0.0) {
          fVar11 = 0.0;
        }
      }
      fVar12 = (float)*(int *)(local_cc + 0x48) * 0.5;
      local_e4 = fVar11 * 90.0 * 0.017453292;
      local_d0 = local_114 * fVar12 + local_104 * 0.0 + local_ec + local_12c;
      local_13c = local_110 * fVar12 + local_128 * 0.0 + local_f4 + local_108;
      local_130 = local_118 * fVar12 + local_134 * 0.0 + local_f8 + local_78;
      dVar9 = (double)local_e4;
      local_138 = local_10c * fVar12 + local_11c * 0.0 + local_140 + local_74;
      local_9c = local_110;
      local_98 = local_118;
      local_80 = local_d0;
      local_7c = local_13c;
      local_78 = local_130;
      local_74 = local_138;
      libm_sse2_cos_precise();
      local_d4 = (float)dVar9;
      dVar9 = (double)local_e4;
      libm_sse2_sin_precise();
      fVar11 = (float)dVar9;
      local_b0 = local_104 * local_d4 + local_114 * fVar11;
      local_a0 = local_114 * local_d4 - fVar11 * local_104;
      local_ac = local_128 * local_d4 + local_110 * fVar11;
      local_110 = local_110 * local_d4 - fVar11 * local_128;
      local_a8 = local_134 * local_d4 + local_118 * fVar11;
      local_118 = local_118 * local_d4 - fVar11 * local_134;
      local_a4 = local_10c * fVar11 + local_11c * local_d4;
      local_94 = local_10c * local_d4 - fVar11 * local_11c;
      fVar11 = (float)*(int *)(local_cc + 0x48) * -0.5;
      local_80 = local_a0 * fVar11 + local_b0 * 0.0 + local_ec + local_d0;
      local_7c = local_110 * fVar11 + local_ac * 0.0 + local_f4 + local_13c;
      local_78 = local_118 * fVar11 + local_a8 * 0.0 + local_f8 + local_130;
      local_74 = local_94 * fVar11 + local_a4 * 0.0 + local_140 + local_138;
    }
    local_134 = local_a8;
    local_128 = local_ac;
    local_11c = local_a4;
    local_104 = local_b0;
    local_9c = local_110;
    local_98 = local_118;
    if (fVar10 == 1.4013e-44) {
      if (*(char *)(pfVar2 + 0xc) == '\0') {
        fVar11 = (float)(int)pfVar2[0xd] * 0.001;
        if (1.0 < fVar11) {
          fVar11 = 1.0;
        }
      }
      else {
        fVar11 = 1.0 - (float)(int)pfVar2[0xd] * 0.001;
        if (fVar11 < 0.0) {
          fVar11 = 0.0;
        }
      }
      local_d0 = local_b0 * 0.0;
      local_e4 = fVar11 * 80.0 * 0.017453292;
      local_140 = local_ac * 0.0;
      local_13c = local_a0 * 0.0 + local_d0 + local_100 * 9.0 + local_80;
      local_f4 = local_a8 * 0.0;
      local_f8 = local_110 * 0.0 + local_140 + local_120 * 9.0 + local_7c;
      local_e0 = local_a4 * 0.0;
      local_ec = local_118 * 0.0 + local_f4 + local_124 * 9.0 + local_78;
      dVar9 = (double)local_e4;
      local_138 = local_94 * 0.0 + local_e0 + local_fc * 9.0 + local_74;
      local_130 = local_78;
      local_12c = local_80;
      local_114 = local_a0;
      local_10c = local_94;
      local_108 = local_7c;
      libm_sse2_cos_precise();
      local_d4 = (float)dVar9;
      dVar9 = (double)local_e4;
      libm_sse2_sin_precise();
      fVar11 = (float)dVar9;
      local_a0 = local_100 * fVar11;
      local_100 = local_100 * local_d4 - local_114 * fVar11;
      local_a0 = local_114 * local_d4 + local_a0;
      local_9c = local_110 * local_d4 + local_120 * fVar11;
      local_120 = local_120 * local_d4 - local_110 * fVar11;
      local_98 = local_124 * fVar11;
      local_124 = local_124 * local_d4 - local_118 * fVar11;
      local_98 = local_118 * local_d4 + local_98;
      local_94 = local_fc * fVar11 + local_10c * local_d4;
      local_fc = local_fc * local_d4 - local_10c * fVar11;
      local_80 = ((local_a0 * 0.0 + local_d0) - local_100) + local_13c;
      local_7c = ((local_9c * 0.0 + local_140) - local_120) + local_f8;
      local_78 = ((local_98 * 0.0 + local_f4) - local_124) + local_ec;
      local_74 = ((local_94 * 0.0 + local_e0) - local_fc) + local_138;
      local_90 = local_100;
      local_8c = local_120;
      local_88 = local_124;
      local_84 = local_fc;
    }
    iVar3 = local_cc;
    local_138 = local_74;
    local_130 = local_78;
    local_12c = local_80;
    local_118 = local_98;
    local_114 = local_a0;
    local_110 = local_9c;
    local_10c = local_94;
    local_108 = local_7c;
    if (fVar10 == 1.26117e-44) {
      if (*(char *)(pfVar2 + 0xc) == '\0') {
        fVar10 = (float)(int)pfVar2[0xd] * 0.001;
        if (1.0 < fVar10) {
          fVar10 = 1.0;
        }
      }
      else {
        fVar10 = 1.0 - (float)(int)pfVar2[0xd] * 0.001;
        if (fVar10 < 0.0) {
          fVar10 = 0.0;
        }
      }
      local_104 = local_104 * 0.0;
      fVar11 = (float)*(int *)(local_cc + 0x48) * 0.5;
      local_128 = local_128 * 0.0;
      local_e0 = (fVar10 * 60.0 - 30.0) * 0.017453292;
      local_d4 = ((local_a0 * fVar11 + local_104) - local_100 * 0.5) + local_80;
      local_134 = local_134 * 0.0;
      local_d0 = ((local_9c * fVar11 + local_128) - local_120 * 0.5) + local_7c;
      local_11c = local_11c * 0.0;
      local_13c = ((local_98 * fVar11 + local_134) - local_124 * 0.5) + local_78;
      dVar9 = (double)local_e0;
      local_140 = ((local_94 * fVar11 + local_11c) - local_fc * 0.5) + local_74;
      local_80 = local_d4;
      local_7c = local_d0;
      local_78 = local_13c;
      local_74 = local_140;
      libm_sse2_cos_precise();
      local_e4 = (float)dVar9;
      dVar9 = (double)local_e0;
      libm_sse2_sin_precise();
      fVar10 = (float)dVar9;
      local_a0 = local_100 * fVar10 + local_114 * local_e4;
      local_100 = local_100 * local_e4 - fVar10 * local_114;
      local_9c = local_120 * fVar10 + local_110 * local_e4;
      local_120 = local_120 * local_e4 - fVar10 * local_110;
      local_98 = local_124 * fVar10 + local_118 * local_e4;
      local_124 = local_124 * local_e4 - fVar10 * local_118;
      local_94 = local_fc * fVar10 + local_10c * local_e4;
      local_fc = local_fc * local_e4;
      local_84 = local_fc - fVar10 * local_10c;
      fVar10 = (float)*(int *)(iVar3 + 0x48) * -0.5;
      local_80 = local_a0 * fVar10 + local_104 + local_100 * 0.0 + local_d4;
      local_7c = local_9c * fVar10 + local_128 + local_120 * 0.0 + local_d0;
      local_74 = local_94 * fVar10 + local_11c + local_84 * 0.0 + local_140;
      local_78 = local_98 * fVar10 + local_134 + local_124 * 0.0 + local_13c;
      local_90 = local_100;
      local_8c = local_120;
      local_88 = local_124;
    }
    uVar4 = __alldiv(local_c8,local_b4,0x10000,0);
    uVar5 = __alldiv(pfVar2[4],pfVar2[5],0x10000,0);
    uVar6 = __alldiv(local_f0[2],local_f0[3],0x10000,0);
    pbVar7 = (byte *)FUN_0042f7e0(uVar6,uVar5,uVar4,0);
    bVar8 = pbVar7[3] & 0x1f;
    if (bVar8 == 0xd) {
      bVar8 = 0xff;
    }
    else if (((pbVar7[3] & 0x1f) == 0) || (bVar8 == 2)) {
      bVar8 = *pbVar7;
      if (bVar8 < 5) {
        bVar8 = 5;
      }
    }
    else {
      bVar8 = 0;
    }
    local_2c = *param_7;
    local_28 = param_7[1];
    local_24 = param_7[2];
    local_20 = (float)param_7[3] * ((float)bVar8 / 255.0);
    if ((*local_f0 == 7.00649e-44) || (*local_f0 == 7.14662e-44)) {
      local_20 = 1.0;
    }
    if (param_2 <= param_4 * param_4) {
      fVar10 = 1.0;
    }
    else {
      dVar9 = (double)param_2;
      libm_sse2_sqrt_precise();
      fVar10 = 1.0 - ((float)dVar9 - param_4) / (param_3 - param_4);
    }
    FUN_00447fb0(fVar10);
    FUN_004482a0(&local_b0,local_b8,local_bc);
    FUN_00448280(&local_2c);
    FUN_004e6df0();
  }
  __security_check_cookie(local_c ^ (uint)&local_140);
  return;
}


/* FUN_004c04c0 @ 004c04c0  kind=gamemisc  attributed-by=none  size=2548 */

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


/* FUN_004c1190 @ 004c1190  kind=gamemisc  attributed-by=none  size=95 */

void FUN_004c1190(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int *in_ECX;
  
  puVar1 = (undefined8 *)in_ECX[1];
  if ((param_1 < puVar1) && (puVar2 = (undefined8 *)*in_ECX, puVar2 <= param_1)) {
    if (puVar1 == (undefined8 *)in_ECX[2]) {
      FUN_004ac020(1);
    }
    param_1 = (undefined8 *)(((int)param_1 - (int)puVar2 & 0xfffffff0U) + *in_ECX);
  }
  else if (puVar1 == (undefined8 *)in_ECX[2]) {
    FUN_004ac020(1);
  }
  puVar1 = (undefined8 *)in_ECX[1];
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
  }
  in_ECX[1] = in_ECX[1] + 0x10;
  return;
}


/* FUN_004c12f0 @ 004c12f0  kind=gamemisc  attributed-by=none  size=480 */

void FUN_004c12f0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  dVar7 = (double)(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
  libm_sse2_sqrt_precise();
  if (0.0001 <= ABS((float)dVar7)) {
    dVar8 = (double)(*param_2 * *param_2 + param_2[1] * param_2[1] + param_2[2] * param_2[2]);
    libm_sse2_sqrt_precise();
    if (0.0001 <= ABS((float)dVar8)) {
      fVar4 = param_2[2];
      fVar5 = param_2[1];
      fVar6 = *param_2;
      fVar9 = fVar4 * param_1[1] - fVar5 * param_1[2];
      fVar10 = fVar6 * param_1[2] - fVar4 * *param_1;
      fVar11 = fVar5 * *param_1 - fVar6 * param_1[1];
      if (0.0001 <= ABS(fVar10 * fVar10 + fVar9 * fVar9 + fVar11 * fVar11)) {
        dVar7 = (double)((fVar6 * fVar1 + fVar5 * fVar2 + fVar4 * fVar3) /
                        ((float)dVar8 * (float)dVar7));
        libm_sse2_acos_precise(fVar9,fVar10,fVar11);
        FUN_004241b0((float)dVar7 * 57.29578,fVar9,fVar10,fVar11);
      }
    }
  }
  return;
}


/* FUN_004c5a00 @ 004c5a00  kind=gamemisc  attributed-by=none  size=86 */

void FUN_004c5a00(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x160) != 0) {
    FUN_004c6350();
    iVar1 = *(int *)(in_ECX + 0x198);
    iVar2 = *(int *)(in_ECX + 0x1b4);
    if ((iVar2 < *(int *)(in_ECX + 0x19c) - iVar1 >> 2) &&
       (iVar3 = *(int *)(iVar1 + iVar2 * 4), iVar3 < *(int *)(in_ECX + 0x1a4) + -1)) {
      *(int *)(iVar1 + iVar2 * 4) = iVar3 + 1;
      FUN_004c6610(0);
      FUN_004c64c0();
      return;
    }
  }
  return;
}


/* FUN_004c5a60 @ 004c5a60  kind=gamemisc  attributed-by=none  size=328 */

void FUN_004c5a60(void)

{
  basic_ostream<char,std::char_traits<char>_> *pbVar1;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar2;
  int in_ECX;
  float10 fVar3;
  int iVar4;
  int iVar5;
  _func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
  *p_Var6;
  
  if (((*(int *)(in_ECX + 0x160) != 0) && (iVar5 = *(int *)(in_ECX + 0x1b0), -1 < iVar5)) &&
     (iVar4 = *(int *)(in_ECX + 0x1b4), iVar4 != iVar5)) {
    p_Var6 = endl_exref;
    pbVar1 = (basic_ostream<char,std::char_traits<char>_> *)
             FUN_00449150(cout_exref,"tab: ",iVar4,&DAT_006fcfbc);
    pbVar2 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar1,iVar4);
    pbVar1 = (basic_ostream<char,std::char_traits<char>_> *)FUN_00449150(pbVar2);
    pbVar2 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar1,iVar5);
    std::basic_ostream<char,std::char_traits<char>_>::operator<<
              ((basic_ostream<char,std::char_traits<char>_> *)pbVar2,p_Var6);
    *(undefined4 *)(in_ECX + 0x1b4) = *(undefined4 *)(in_ECX + 0x1b0);
    FUN_004c6350();
    iVar5 = *(int *)(in_ECX + 0x1b4);
    if (((*(int *)(**(int **)(in_ECX + 0x160) + iVar5 * 0xc) ==
          *(int *)(**(int **)(in_ECX + 0x160) + 4 + iVar5 * 0xc)) || (iVar5 < 0)) ||
       (*(int *)(in_ECX + 0x19c) - *(int *)(in_ECX + 0x198) >> 2 <= iVar5)) {
      *(undefined4 *)(in_ECX + 0x18c) = 0xffffffff;
      *(undefined4 *)(in_ECX + 400) = 0xffffffff;
    }
    else {
      fVar3 = (float10)FUN_0062f600();
      iVar5 = *(int *)(*(int *)(in_ECX + 0x198) + *(int *)(in_ECX + 0x1b4) * 4);
      *(int *)(in_ECX + 0x18c) = *(int *)(in_ECX + 0x1b4);
      *(int *)(in_ECX + 400) =
           iVar5 * (int)(((float)fVar3 - 10.0) / (float)(*(int *)(in_ECX + 0x1a8) + 5));
    }
    FUN_004c6610(0);
    FUN_004c64c0();
    FUN_00484320(0x56);
    FUN_004815c0(in_ECX);
  }
  return;
}


/* FUN_004c5bb0 @ 004c5bb0  kind=gamemisc  attributed-by=none  size=401 */

void FUN_004c5bb0(void)

{
  int iVar1;
  int iVar2;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar3;
  basic_ostream<char,std::char_traits<char>_> *this;
  int in_ECX;
  int iVar4;
  float10 fVar5;
  undefined4 *puVar6;
  _func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
  *p_Var7;
  undefined1 local_10 [4];
  int local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if (((*(int *)(in_ECX + 0x160) != 0) && ((*(byte *)(*(int *)(in_ECX + 4) + 0xf4) & 1) != 0)) &&
     (0 < *(int *)(in_ECX + 0x1a4))) {
    fVar5 = (float10)FUN_006291d0();
    iVar4 = (int)((float)fVar5 - 70.0);
    iVar1 = iVar4 / *(int *)(in_ECX + 0x1a4);
    iVar2 = FUN_0062b510(local_10);
    puVar6 = &DAT_006fcfbc;
    iVar2 = (int)((*(float *)(*(int *)(in_ECX + 4) + 0xd8) - *(float *)(*(int *)(in_ECX + 4) + 0xe0)
                  ) + *(float *)(iVar2 + 4));
    if (iVar2 < 0x23) {
      iVar2 = 0x23;
    }
    local_c = iVar4 - iVar1;
    if (local_c + 0x23 < iVar2) {
      iVar2 = local_c + 0x23;
    }
    p_Var7 = endl_exref;
    pbVar3 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                       ((basic_ostream<char,std::char_traits<char>_> *)cout_exref,iVar4);
    this = (basic_ostream<char,std::char_traits<char>_> *)FUN_00449150(pbVar3,puVar6);
    pbVar3 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(this,iVar1);
    std::basic_ostream<char,std::char_traits<char>_>::operator<<
              ((basic_ostream<char,std::char_traits<char>_> *)pbVar3,p_Var7);
    if (0 < local_c) {
      *(int *)(*(int *)(in_ECX + 0x198) + *(int *)(in_ECX + 0x1b4) * 4) =
           ((iVar2 + -0x23) * (*(int *)(in_ECX + 0x1a4) + -1)) / local_c;
    }
    if (*(int *)(*(int *)(in_ECX + 0x198) + *(int *)(in_ECX + 0x1b4) * 4) < 0) {
      *(undefined4 *)(*(int *)(in_ECX + 0x198) + *(int *)(in_ECX + 0x1b4) * 4) = 0;
    }
    if (*(int *)(in_ECX + 0x1a4) <=
        *(int *)(*(int *)(in_ECX + 0x198) + *(int *)(in_ECX + 0x1b4) * 4)) {
      *(int *)(*(int *)(in_ECX + 0x198) + *(int *)(in_ECX + 0x1b4) * 4) =
           *(int *)(in_ECX + 0x1a4) + -1;
    }
    FUN_004c6610(0);
    puVar6 = (undefined4 *)FUN_0062b510(local_10);
    FUN_0062a650(*puVar6,(float)iVar2,1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004c60f0 @ 004c60f0  kind=gamemisc  attributed-by=none  size=74 */

void FUN_004c60f0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x160) != 0) {
    FUN_004c6350();
    iVar1 = *(int *)(in_ECX + 0x198);
    iVar2 = *(int *)(in_ECX + 0x1b4);
    if ((iVar2 < *(int *)(in_ECX + 0x19c) - iVar1 >> 2) &&
       (iVar3 = *(int *)(iVar1 + iVar2 * 4), 0 < iVar3)) {
      *(int *)(iVar1 + iVar2 * 4) = iVar3 + -1;
      FUN_004c6610(0);
      FUN_004c64c0();
      return;
    }
  }
  return;
}


/* FUN_004c6350 @ 004c6350  kind=gamemisc  attributed-by=none  size=358 */

void FUN_004c6350(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  float10 fVar7;
  float fVar8;
  float local_8;
  
  if (*(int *)(in_ECX + 0x160) != 0) {
    fVar7 = (float10)FUN_0062f600();
    local_8 = (float)fVar7;
    iVar6 = *(int *)(in_ECX + 0x1a8);
    fVar8 = local_8 - 10.0;
    fVar7 = (float10)FUN_006291d0();
    iVar1 = *(int *)(in_ECX + 0x1ac);
    local_8 = 0.0;
    FUN_004871e0(((*(int **)(in_ECX + 0x160))[1] - **(int **)(in_ECX + 0x160)) / 0xc,&local_8);
    piVar2 = *(int **)(in_ECX + 0x160);
    if ((*piVar2 == piVar2[1]) ||
       (iVar3 = *(int *)(in_ECX + 0x1b4), (piVar2[1] - *piVar2) / 0xc <= iVar3)) {
      *(undefined4 *)(in_ECX + 0x1a4) = 1;
    }
    else {
      iVar4 = *piVar2;
      iVar5 = *(int *)(iVar4 + iVar3 * 0xc);
      if (iVar5 == *(int *)(iVar4 + 4 + iVar3 * 0xc)) {
        *(undefined4 *)(in_ECX + 0x1a4) = 0;
        *(undefined4 *)(*(int *)(in_ECX + 0x198) + iVar3 * 4) = 0;
        return;
      }
      iVar6 = (((*(int *)(iVar4 + 4 + iVar3 * 0xc) - iVar5) / 0x11c - 1U) /
               (uint)(int)(fVar8 / (float)(iVar6 + 5)) -
              (int)(((float)fVar7 - 40.0) / (float)(iVar1 + 5))) + 2;
      if (iVar6 < 1) {
        iVar6 = 1;
      }
      *(int *)(in_ECX + 0x1a4) = iVar6;
      if (iVar6 + -1 < *(int *)(*(int *)(in_ECX + 0x198) + iVar3 * 4)) {
        *(int *)(*(int *)(in_ECX + 0x198) + iVar3 * 4) = iVar6 + -1;
        return;
      }
    }
  }
  return;
}


/* FUN_004c64c0 @ 004c64c0  kind=gamemisc  attributed-by=none  size=333 */

void FUN_004c64c0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  float10 fVar4;
  float10 fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if (*(int *)(in_ECX + 0x160) != 0) {
    FUN_0062f600();
    if (((*(int *)(in_ECX + 0x178) != 0) && (*(int *)(in_ECX + 0x1a4) != 0)) &&
       (*(int *)(in_ECX + 0x198) != *(int *)(in_ECX + 0x19c))) {
      fVar4 = (float10)FUN_006291d0();
      iVar3 = (int)((float)fVar4 - 70.0) / *(int *)(in_ECX + 0x1a4);
      fVar6 = (float)iVar3;
      if (1 < *(int *)(in_ECX + 0x1a4)) {
        iVar1 = *(int *)(in_ECX + 0x1b4);
        iVar2 = *(int *)(in_ECX + 0x198);
        uVar9 = 1;
        fVar5 = (float10)FUN_0062f600(fVar6,1);
        fVar8 = (float)fVar5;
        fVar7 = (float)((((int)((float)fVar4 - 70.0) - iVar3) * *(int *)(iVar2 + iVar1 * 4)) /
                        (*(int *)(in_ECX + 0x1a4) + -1) + 0x23);
        fVar4 = (float10)FUN_0062f600(fVar7,fVar8);
        FUN_0062bb20((float)fVar4 - 28.0,fVar7,fVar8,fVar6,uVar9);
        return;
      }
      uVar10 = 1;
      fVar4 = (float10)FUN_0062f600(fVar6,1);
      fVar8 = (float)fVar4;
      uVar9 = 0x420c0000;
      fVar4 = (float10)FUN_0062f600(0x420c0000,fVar8);
      FUN_0062bb20((float)fVar4 - 28.0,uVar9,fVar8,fVar6,uVar10);
    }
  }
  return;
}


/* FUN_004c67b0 @ 004c67b0  kind=gamemisc  attributed-by=none  size=61 */

int FUN_004c67b0(int param_1,int param_2,int param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != 0) {
      FUN_0040ee70(param_1);
    }
    param_1 = param_1 + 0x118;
    param_3 = param_3 + 0x118;
  } while (param_1 != param_2);
  return param_3;
}


/* FUN_004c6b80 @ 004c6b80  kind=gamemisc  attributed-by=none  size=26 */

undefined4 FUN_004c6b80(void)

{
  undefined4 uVar1;
  char *in_ECX;
  
  if (*in_ECX != '\x01') {
    return 0;
  }
  uVar1 = 10000;
  if (in_ECX[1] == '\x01') {
    uVar1 = 3000;
  }
  return uVar1;
}


/* FUN_004c7be0 @ 004c7be0  kind=gamemisc  attributed-by=none  size=30 */

float10 FUN_004c7be0(void)

{
  char cVar1;
  char *in_ECX;
  
  if ((*in_ECX != '\0') &&
     ((((cVar1 = in_ECX[0xd], cVar1 == '\x01' || (cVar1 == '\v')) || (cVar1 == '\f')) ||
      (cVar1 == '\x16')))) {
    return (float10)1;
  }
  return (float10)0;
}


/* FUN_004c7c00 @ 004c7c00  kind=gamemisc  attributed-by=none  size=275 */

float10 FUN_004c7c00(void)

{
  char cVar1;
  char cVar2;
  char *in_ECX;
  float10 fVar3;
  float local_c;
  float local_8;
  
  cVar1 = *in_ECX;
  if ((((cVar1 == '\b') || (cVar1 == '\t')) || (cVar1 == '\x03')) ||
     (((cVar1 == '\x04' || (cVar1 == '\a')) || ((cVar1 == '\x05' || (cVar1 == '\x06')))))) {
    local_8 = 0.1;
    if (((cVar1 == '\x03') &&
        ((((cVar2 = in_ECX[1], cVar2 == '\x0f' || (cVar2 == '\x10')) ||
          ((cVar2 == '\x11' ||
           ((((cVar2 == '\x05' || (cVar2 == '\n')) || (cVar2 == '\v')) ||
            ((cVar2 == '\x12' || (cVar2 == '\b')))))))) || ((cVar2 == '\x06' || (cVar2 == '\a'))))))
       || (cVar1 == '\x04')) {
      local_8 = 0.2;
    }
    local_c = ((float)(int)((ulonglong)*(uint *)(in_ECX + 4) % 0x15) + 0.0) / 20.0;
    if (in_ECX[0xd] == '\f') {
      local_c = local_c + 1.0;
    }
    fVar3 = (float10)FUN_00445ff0((float)(int)*(short *)(in_ECX + 0x10),in_ECX[0xc]);
    local_c = (float)fVar3 * local_8 * local_c;
    if (0.001 <= local_c) {
      return (float10)local_c;
    }
  }
  return (float10)0;
}


/* FUN_004c7ed0 @ 004c7ed0  kind=gamemisc  attributed-by=none  size=143 */

int FUN_004c7ed0(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  int iVar3;
  int unaff_EDI;
  float10 fVar4;
  float fVar5;
  
  fVar4 = (float10)FUN_004462f0();
  *(float *)(unaff_EBP + -4) = (float)fVar4;
  iVar2 = (int)*(float *)(unaff_EBP + -4);
  iVar3 = (int)*(short *)(unaff_EDI + 0x10);
  if (iVar2 < 1) {
    iVar2 = 1;
  }
  if (*(char *)(unaff_EBP + 0xc) != '\0') {
    fVar4 = (float10)FUN_0043ca60((float)iVar3);
    *(float *)(unaff_EBP + 0xc) = (float)fVar4;
    fVar5 = *(float *)(unaff_EBP + 0xc) + *(float *)(unaff_EBP + 8);
    if (0.9999 < fVar5) {
      fVar5 = 0.9999;
    }
    fVar4 = (float10)FUN_004462f0(fVar5);
    *(float *)(unaff_EBP + 0xc) = (float)fVar4;
    iVar3 = (int)*(float *)(unaff_EBP + 0xc);
  }
  iVar1 = rand();
  iVar3 = (iVar3 - iVar2) + 1;
  *(short *)(unaff_EDI + 0x10) = (short)(iVar1 % iVar3) + (short)iVar2;
  return iVar1 / iVar3;
}


/* FUN_004c83f0 @ 004c83f0  kind=gamemisc  attributed-by=none  size=240 */

undefined4 FUN_004c83f0(HWND param_1,uint param_2,int param_3)

{
  short sVar1;
  undefined4 uVar2;
  
  if (param_2 < 0x201) {
    if (param_2 != 0x200) {
      if (param_2 < 0x11) {
        if (param_2 == 0x10) {
          DestroyWindow(param_1);
          return 1;
        }
        switch(param_2) {
        case 2:
          PostQuitMessage(0);
          return 1;
        case 5:
        case 7:
          FUN_004c8940(0);
          return 1;
        case 8:
          goto LAB_004c858e;
        }
      }
      else {
        if (param_2 == 0x100) {
          FUN_00652730(param_3);
          (**(code **)(*DAT_0076b1c8 + 8))(param_3);
          return 0;
        }
        if (param_2 == 0x101) {
          FUN_00652790(param_3);
          (**(code **)(*DAT_0076b1c8 + 0xc))(param_3);
          return 0;
        }
        if (param_2 == 0x102) {
          FUN_00652710(param_3);
          (**(code **)(*DAT_0076b1c8 + 0x14))(param_3);
          return 0;
        }
      }
LAB_004c8596:
                    /* WARNING: Could not recover jumptable at 0x004c859c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = DefWindowProcW();
      return uVar2;
    }
  }
  else {
    switch(param_2) {
    case 0x201:
      (**(code **)(*DAT_0076b1c8 + 0x1c))(0);
      return 1;
    case 0x202:
      (**(code **)(*DAT_0076b1c8 + 0x20))(0);
      return 1;
    default:
      goto LAB_004c8596;
    case 0x204:
      (**(code **)(*DAT_0076b1c8 + 0x1c))(1);
      return 1;
    case 0x205:
      (**(code **)(*DAT_0076b1c8 + 0x20))(1);
      return 1;
    case 0x207:
      (**(code **)(*DAT_0076b1c8 + 0x1c))(2);
      return 1;
    case 0x208:
      (**(code **)(*DAT_0076b1c8 + 0x20))(2);
      return 1;
    case 0x20a:
      if (param_3 < 0) {
        sVar1 = -1;
      }
      else {
        sVar1 = 0;
        if ((short)((uint)param_3 >> 0x10) != 0) {
          sVar1 = 1;
        }
      }
      (**(code **)(*DAT_0076b1c8 + 0x24))((int)sVar1);
    }
  }
LAB_004c858e:
  return 1;
}


/* FUN_004c8720 @ 004c8720  kind=gamemisc  attributed-by=none  size=530 */

void FUN_004c8720(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int local_78;
  int local_74;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_44;
  D3D9Engine *local_40;
  tagRECT local_3c;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e842e;
  local_10 = ExceptionList;
  uVar2 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar2;
  DAT_0076b1b8 = (int *)Direct3DCreate9(0x20);
  if (DAT_0076b1b8 != (int *)0x0) {
    memset(&local_78,0,0x38);
    local_68 = 0;
    local_64 = 0;
    local_78 = GetSystemMetrics(0);
    local_74 = GetSystemMetrics(1);
    local_58 = 1;
    local_60 = 1;
    local_44 = 0x80000000;
    local_54 = 1;
    local_50 = 0x4b;
    iVar3 = (**(code **)(*DAT_0076b1b8 + 0x40))
                      (DAT_0076b1b8,0,1,DAT_0076b1c0,0x44,&local_78,&DAT_0076b1b4,uVar2);
    if (iVar3 == 0) {
      local_40 = operator_new(0x2d0);
      local_8 = 0;
      if (local_40 == (D3D9Engine *)0x0) {
        DAT_0076b1cc = (D3D9Engine *)0x0;
      }
      else {
        DAT_0076b1cc = plasma::D3D9Engine::D3D9Engine(local_40,DAT_0076b1b4);
      }
      local_8 = 0xffffffff;
      FUN_0040eb60(L"c:\\windows\\fonts");
      local_8 = 1;
      FUN_00639390(local_2c);
      local_8 = 0xffffffff;
      if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_2c[0]);
      }
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
      local_18 = 7;
      local_1c = 0;
      cVar1 = (*DAT_0076b1cc->vftablePtr->vfunction2)();
      if (cVar1 != '\0') {
        local_40 = operator_new(0x74);
        local_8 = 2;
        if (local_40 == (D3D9Engine *)0x0) {
          DAT_0076b1bc = (CubeShader *)0x0;
        }
        else {
          DAT_0076b1bc = cube::CubeShader::CubeShader((CubeShader *)local_40,DAT_0076b1b4);
        }
        local_8 = 0xffffffff;
        cVar1 = FUN_00447e10();
        if (cVar1 != '\0') {
          GetClientRect(DAT_0076b1c0,&local_3c);
          FUN_00659d70(0,0,local_3c.right,local_3c.bottom,1);
          goto LAB_004c891c;
        }
        if (DAT_0076b1bc != (CubeShader *)0x0) {
          (*DAT_0076b1bc->vftablePtr->deleting_destructor)(DAT_0076b1bc,1);
        }
      }
      (**(code **)(*DAT_0076b1b4 + 8))(DAT_0076b1b4);
      DAT_0076b1b4 = (int *)0x0;
    }
    (**(code **)(*DAT_0076b1b8 + 8))(DAT_0076b1b8);
    DAT_0076b1b8 = (int *)0x0;
  }
LAB_004c891c:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004c9640 @ 004c9640  kind=gamemisc  attributed-by=none  size=55 */

undefined4 * FUN_004c9640(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = operator_new(0x14);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
  *puVar1 = *in_ECX;
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = *in_ECX;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *in_ECX;
  }
  return puVar1;
}


/* FUN_004cb5d0 @ 004cb5d0  kind=gamemisc  attributed-by=none  size=147 */

undefined1
FUN_004cb5d0(int *param_1,uint *param_2,uint *param_3,char *param_4,char *param_5,char param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  char *local_c;
  undefined4 local_8;
  
  uVar4 = 0;
  if ((param_6 != '\0') || (*param_4 != *param_5)) {
    iVar1 = *param_1;
    local_c = param_5;
    local_8 = 1;
    iVar3 = FUN_004cb5a0(iVar1,*(undefined4 *)(iVar1 + 4),&local_c);
    if (param_1[1] == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    param_1[1] = param_1[1] + 1;
    *(int *)(iVar1 + 4) = iVar3;
    **(int **)(iVar3 + 4) = iVar3;
    uVar2 = *param_3;
    uVar5 = 1 << (uVar2 & 0x1f);
    uVar6 = 0;
    if (0x1f < uVar2) {
      uVar6 = uVar5;
    }
    uVar5 = uVar5 ^ uVar6;
    if (0x3f < uVar2) {
      uVar6 = uVar5;
    }
    *param_2 = *param_2 | uVar5;
    param_2[1] = param_2[1] | uVar6;
    uVar4 = 1;
  }
  *param_3 = *param_3 + 1;
  return uVar4;
}


/* FUN_004cb670 @ 004cb670  kind=gamemisc  attributed-by=none  size=149 */

undefined1
FUN_004cb670(int *param_1,uint *param_2,uint *param_3,short *param_4,short *param_5,char param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  short *local_c;
  undefined4 local_8;
  
  uVar4 = 0;
  if ((param_6 != '\0') || (*param_4 != *param_5)) {
    iVar1 = *param_1;
    local_c = param_5;
    local_8 = 2;
    iVar3 = FUN_004cb5a0(iVar1,*(undefined4 *)(iVar1 + 4),&local_c);
    if (param_1[1] == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    param_1[1] = param_1[1] + 1;
    *(int *)(iVar1 + 4) = iVar3;
    **(int **)(iVar3 + 4) = iVar3;
    uVar2 = *param_3;
    uVar5 = 1 << (uVar2 & 0x1f);
    uVar6 = 0;
    if (0x1f < uVar2) {
      uVar6 = uVar5;
    }
    uVar5 = uVar5 ^ uVar6;
    if (0x3f < uVar2) {
      uVar6 = uVar5;
    }
    *param_2 = *param_2 | uVar5;
    param_2[1] = param_2[1] | uVar6;
    uVar4 = 1;
  }
  *param_3 = *param_3 + 1;
  return uVar4;
}


/* FUN_004cb710 @ 004cb710  kind=gamemisc  attributed-by=none  size=147 */

undefined1
FUN_004cb710(int *param_1,uint *param_2,uint *param_3,int *param_4,int *param_5,char param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  int *local_c;
  undefined4 local_8;
  
  uVar4 = 0;
  if ((param_6 != '\0') || (*param_4 != *param_5)) {
    iVar1 = *param_1;
    local_c = param_5;
    local_8 = 4;
    iVar3 = FUN_004cb5a0(iVar1,*(undefined4 *)(iVar1 + 4),&local_c);
    if (param_1[1] == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    param_1[1] = param_1[1] + 1;
    *(int *)(iVar1 + 4) = iVar3;
    **(int **)(iVar3 + 4) = iVar3;
    uVar2 = *param_3;
    uVar5 = 1 << (uVar2 & 0x1f);
    uVar6 = 0;
    if (0x1f < uVar2) {
      uVar6 = uVar5;
    }
    uVar5 = uVar5 ^ uVar6;
    if (0x3f < uVar2) {
      uVar6 = uVar5;
    }
    *param_2 = *param_2 | uVar5;
    param_2[1] = param_2[1] | uVar6;
    uVar4 = 1;
  }
  *param_3 = *param_3 + 1;
  return uVar4;
}


/* FUN_004cb7b0 @ 004cb7b0  kind=gamemisc  attributed-by=none  size=154 */

undefined1
FUN_004cb7b0(int *param_1,uint *param_2,uint *param_3,float *param_4,float *param_5,char param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  float *local_c;
  undefined4 local_8;
  
  uVar4 = 0;
  if (param_6 == '\0') {
    if (*param_4 == *param_5) goto LAB_004cb841;
  }
  iVar1 = *param_1;
  local_c = param_5;
  local_8 = 4;
  iVar3 = FUN_004cb5a0(iVar1,*(undefined4 *)(iVar1 + 4),&local_c);
  if (param_1[1] == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  param_1[1] = param_1[1] + 1;
  *(int *)(iVar1 + 4) = iVar3;
  **(int **)(iVar3 + 4) = iVar3;
  uVar2 = *param_3;
  uVar5 = 1 << (uVar2 & 0x1f);
  uVar6 = 0;
  if (0x1f < uVar2) {
    uVar6 = uVar5;
  }
  uVar5 = uVar5 ^ uVar6;
  if (0x3f < uVar2) {
    uVar6 = uVar5;
  }
  *param_2 = *param_2 | uVar5;
  param_2[1] = param_2[1] | uVar6;
  uVar4 = 1;
LAB_004cb841:
  *param_3 = *param_3 + 1;
  return uVar4;
}


/* FUN_004cb850 @ 004cb850  kind=gamemisc  attributed-by=none  size=212 */

undefined4
FUN_004cb850(int *param_1,uint *param_2,uint *param_3,float *param_4,float *param_5,char param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  float *local_c;
  undefined4 local_8;
  
  if ((((param_6 == '\0') && (*param_4 == *param_5)) && (param_4[1] == param_5[1])) &&
     ((param_4[2] == param_5[2] && (param_4[3] == param_5[3])))) {
    uVar4 = 0;
    if (param_4[4] == param_5[4]) goto LAB_004cb91d;
  }
  iVar1 = *param_1;
  local_c = param_5;
  local_8 = 0x14;
  iVar3 = FUN_004cb5a0(iVar1,*(undefined4 *)(iVar1 + 4),&local_c);
  if (param_1[1] == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  param_1[1] = param_1[1] + 1;
  *(int *)(iVar1 + 4) = iVar3;
  **(int **)(iVar3 + 4) = iVar3;
  uVar2 = *param_3;
  uVar5 = 1 << (uVar2 & 0x1f);
  uVar6 = 0;
  if (0x1f < uVar2) {
    uVar6 = uVar5;
  }
  uVar5 = uVar5 ^ uVar6;
  if (0x3f < uVar2) {
    uVar6 = uVar5;
  }
  *param_2 = *param_2 | uVar5;
  param_2[1] = param_2[1] | uVar6;
  uVar4 = 1;
LAB_004cb91d:
  *param_3 = *param_3 + 1;
  return uVar4;
}


/* FUN_004cb930 @ 004cb930  kind=gamemisc  attributed-by=none  size=151 */

undefined1
FUN_004cb930(int *param_1,uint *param_2,uint *param_3,undefined4 param_4,undefined4 param_5,
            char param_6)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 uVar7;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar7 = 0;
  if (param_6 == '\0') {
    cVar3 = FUN_004cc840(param_5);
    if (cVar3 == '\0') goto LAB_004cb9bc;
  }
  local_c = param_5;
  iVar1 = *param_1;
  local_8 = 0xac;
  iVar4 = FUN_004cb5a0(iVar1,*(undefined4 *)(iVar1 + 4),&local_c);
  if (param_1[1] == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  param_1[1] = param_1[1] + 1;
  *(int *)(iVar1 + 4) = iVar4;
  **(int **)(iVar4 + 4) = iVar4;
  uVar2 = *param_3;
  uVar5 = 1 << (uVar2 & 0x1f);
  uVar7 = 1;
  uVar6 = 0;
  if (0x1f < uVar2) {
    uVar6 = uVar5;
  }
  uVar5 = uVar5 ^ uVar6;
  if (0x3f < uVar2) {
    uVar6 = uVar5;
  }
  *param_2 = *param_2 | uVar5;
  param_2[1] = param_2[1] | uVar6;
LAB_004cb9bc:
  *param_3 = *param_3 + 1;
  return uVar7;
}


/* FUN_004cb9d0 @ 004cb9d0  kind=gamemisc  attributed-by=none  size=151 */

undefined1
FUN_004cb9d0(int *param_1,uint *param_2,uint *param_3,undefined4 param_4,undefined4 param_5,
            char param_6)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 uVar7;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar7 = 0;
  if (param_6 == '\0') {
    cVar3 = FUN_004ccaa0(param_5);
    if (cVar3 == '\0') goto LAB_004cba5c;
  }
  local_c = param_5;
  iVar1 = *param_1;
  local_8 = 0xe38;
  iVar4 = FUN_004cb5a0(iVar1,*(undefined4 *)(iVar1 + 4),&local_c);
  if (param_1[1] == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  param_1[1] = param_1[1] + 1;
  *(int *)(iVar1 + 4) = iVar4;
  **(int **)(iVar4 + 4) = iVar4;
  uVar2 = *param_3;
  uVar5 = 1 << (uVar2 & 0x1f);
  uVar7 = 1;
  uVar6 = 0;
  if (0x1f < uVar2) {
    uVar6 = uVar5;
  }
  uVar5 = uVar5 ^ uVar6;
  if (0x3f < uVar2) {
    uVar6 = uVar5;
  }
  *param_2 = *param_2 | uVar5;
  param_2[1] = param_2[1] | uVar6;
LAB_004cba5c:
  *param_3 = *param_3 + 1;
  return uVar7;
}


/* FUN_004cba70 @ 004cba70  kind=gamemisc  attributed-by=none  size=151 */

undefined1
FUN_004cba70(int *param_1,uint *param_2,uint *param_3,undefined4 param_4,undefined4 param_5,
            char param_6)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 uVar7;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar7 = 0;
  if (param_6 == '\0') {
    cVar3 = FUN_0042f4a0(param_5);
    if (cVar3 != '\0') goto LAB_004cbafc;
  }
  local_c = param_5;
  iVar1 = *param_1;
  local_8 = 0x118;
  iVar4 = FUN_004cb5a0(iVar1,*(undefined4 *)(iVar1 + 4),&local_c);
  if (param_1[1] == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  param_1[1] = param_1[1] + 1;
  *(int *)(iVar1 + 4) = iVar4;
  **(int **)(iVar4 + 4) = iVar4;
  uVar2 = *param_3;
  uVar5 = 1 << (uVar2 & 0x1f);
  uVar7 = 1;
  uVar6 = 0;
  if (0x1f < uVar2) {
    uVar6 = uVar5;
  }
  uVar5 = uVar5 ^ uVar6;
  if (0x3f < uVar2) {
    uVar6 = uVar5;
  }
  *param_2 = *param_2 | uVar5;
  param_2[1] = param_2[1] | uVar6;
LAB_004cbafc:
  *param_3 = *param_3 + 1;
  return uVar7;
}


/* FUN_004cbb10 @ 004cbb10  kind=gamemisc  attributed-by=none  size=176 */

undefined4
FUN_004cbb10(int *param_1,uint *param_2,uint *param_3,int param_4,int *param_5,char param_6)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *local_10;
  undefined4 local_c;
  undefined1 local_5;
  
  local_5 = 0;
  if (param_6 == '\0') {
    iVar5 = 0;
    piVar2 = param_5;
    while (*(int *)((param_4 - (int)param_5) + (int)piVar2) == *piVar2) {
      iVar5 = iVar5 + 1;
      piVar2 = piVar2 + 1;
      if (2 < iVar5) {
        *param_3 = *param_3 + 1;
        return 0;
      }
    }
  }
  local_10 = param_5;
  iVar5 = *param_1;
  local_c = 0xc;
  iVar3 = FUN_004cb5a0(iVar5,*(undefined4 *)(iVar5 + 4),&local_10);
  if (param_1[1] == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  param_1[1] = param_1[1] + 1;
  *(int *)(iVar5 + 4) = iVar3;
  **(int **)(iVar3 + 4) = iVar3;
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  uVar6 = 0;
  if (0x1f < uVar1) {
    uVar6 = uVar4;
  }
  uVar4 = uVar4 ^ uVar6;
  if (0x3f < uVar1) {
    uVar6 = uVar4;
  }
  *param_2 = *param_2 | uVar4;
  param_2[1] = param_2[1] | uVar6;
  *param_3 = *param_3 + 1;
  return 1;
}


/* FUN_004cbbc0 @ 004cbbc0  kind=gamemisc  attributed-by=none  size=178 */

undefined4
FUN_004cbbc0(int *param_1,uint *param_2,uint *param_3,int param_4,float *param_5,char param_6)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  float *local_c;
  undefined4 local_8;
  
  if (param_6 == '\0') {
    iVar5 = 0;
    pfVar3 = param_5;
    while( true ) {
      if (*(float *)((param_4 - (int)param_5) + (int)pfVar3) != *pfVar3) break;
      iVar5 = iVar5 + 1;
      pfVar3 = pfVar3 + 1;
      if (2 < iVar5) {
        *param_3 = *param_3 + 1;
        return 0;
      }
    }
  }
  local_c = param_5;
  iVar5 = *param_1;
  local_8 = 0xc;
  iVar2 = FUN_004cb5a0(iVar5,*(undefined4 *)(iVar5 + 4),&local_c);
  if (param_1[1] == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  param_1[1] = param_1[1] + 1;
  *(int *)(iVar5 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  uVar6 = 0;
  if (0x1f < uVar1) {
    uVar6 = uVar4;
  }
  uVar4 = uVar4 ^ uVar6;
  if (0x3f < uVar1) {
    uVar6 = uVar4;
  }
  *param_2 = *param_2 | uVar4;
  param_2[1] = param_2[1] | uVar6;
  *param_3 = *param_3 + 1;
  return 1;
}


/* FUN_004cbc80 @ 004cbc80  kind=gamemisc  attributed-by=none  size=185 */

undefined4
FUN_004cbc80(int *param_1,uint *param_2,uint *param_3,int param_4,int *param_5,char param_6)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *local_10;
  undefined4 local_c;
  undefined1 local_5;
  
  local_5 = 0;
  if (param_6 == '\0') {
    iVar5 = 0;
    piVar2 = param_5;
    while ((*(int *)((param_4 - (int)param_5) + (int)piVar2) == *piVar2 &&
           (*(int *)((param_4 - (int)param_5) + 4 + (int)piVar2) == piVar2[1]))) {
      iVar5 = iVar5 + 1;
      piVar2 = piVar2 + 2;
      if (2 < iVar5) {
        *param_3 = *param_3 + 1;
        return 0;
      }
    }
  }
  local_10 = param_5;
  iVar5 = *param_1;
  local_c = 0x18;
  iVar3 = FUN_004cb5a0(iVar5,*(undefined4 *)(iVar5 + 4),&local_10);
  if (param_1[1] == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  param_1[1] = param_1[1] + 1;
  *(int *)(iVar5 + 4) = iVar3;
  **(int **)(iVar3 + 4) = iVar3;
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  uVar6 = 0;
  if (0x1f < uVar1) {
    uVar6 = uVar4;
  }
  uVar4 = uVar4 ^ uVar6;
  if (0x3f < uVar1) {
    uVar6 = uVar4;
  }
  *param_2 = *param_2 | uVar4;
  param_2[1] = param_2[1] | uVar6;
  *param_3 = *param_3 + 1;
  return 1;
}


/* FUN_004cbd40 @ 004cbd40  kind=gamemisc  attributed-by=none  size=155 */

undefined1
FUN_004cbd40(int *param_1,uint *param_2,uint *param_3,int *param_4,int *param_5,char param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar6;
  int *local_c;
  undefined4 local_8;
  
  uVar6 = 0;
  if (((param_6 != '\0') || (*param_4 != *param_5)) || (param_4[1] != param_5[1])) {
    iVar1 = *param_1;
    local_c = param_5;
    local_8 = 8;
    iVar3 = FUN_004cb5a0(iVar1,*(undefined4 *)(iVar1 + 4),&local_c);
    if (param_1[1] == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    param_1[1] = param_1[1] + 1;
    *(int *)(iVar1 + 4) = iVar3;
    **(int **)(iVar3 + 4) = iVar3;
    uVar2 = *param_3;
    uVar4 = 1 << (uVar2 & 0x1f);
    uVar6 = 1;
    uVar5 = 0;
    if (0x1f < uVar2) {
      uVar5 = uVar4;
    }
    uVar4 = uVar4 ^ uVar5;
    if (0x3f < uVar2) {
      uVar5 = uVar4;
    }
    *param_2 = *param_2 | uVar4;
    param_2[1] = param_2[1] | uVar5;
  }
  *param_3 = *param_3 + 1;
  return uVar6;
}


/* FUN_004cbde0 @ 004cbde0  kind=gamemisc  attributed-by=none  size=109 */

undefined4 FUN_004cbde0(int *param_1,uint *param_2,uint *param_3,undefined1 *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  uVar2 = 0;
  if (0x1f < uVar1) {
    uVar2 = uVar4;
  }
  uVar4 = uVar4 ^ uVar2;
  if (0x3f < uVar1) {
    uVar2 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar2 & param_2[1]) != 0) {
    iVar3 = param_1[1] - *param_1;
    if (iVar3 < param_1[3] + 1) {
      param_1[3] = iVar3;
      *param_3 = *param_3 + 1;
      return 1;
    }
    *param_4 = *(undefined1 *)(*param_1 + param_1[3]);
    param_1[3] = param_1[3] + 1;
    *param_3 = *param_3 + 1;
    return 1;
  }
  *param_3 = *param_3 + 1;
  return 0;
}


/* FUN_004cbe50 @ 004cbe50  kind=gamemisc  attributed-by=none  size=113 */

int FUN_004cbe50(SOCKET param_1,uint *param_2,uint *param_3,char *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int len;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  iVar2 = 0;
  uVar3 = 0;
  if (0x1f < uVar1) {
    uVar3 = uVar4;
  }
  uVar4 = uVar4 ^ uVar3;
  if (0x3f < uVar1) {
    uVar3 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar3 & param_2[1]) != 0) {
    len = 1;
    do {
      iVar2 = recv(param_1,param_4,len,0);
      if (iVar2 < 1) {
        if (iVar2 == -1) {
          return -1;
        }
        goto LAB_004cbeab;
      }
      len = len - iVar2;
      param_4 = param_4 + iVar2;
    } while (0 < len);
    iVar2 = 1;
  }
LAB_004cbeab:
  *param_3 = *param_3 + 1;
  return iVar2;
}


/* FUN_004cbed0 @ 004cbed0  kind=gamemisc  attributed-by=none  size=112 */

undefined4 FUN_004cbed0(int *param_1,uint *param_2,uint *param_3,undefined2 *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  uVar2 = 0;
  if (0x1f < uVar1) {
    uVar2 = uVar4;
  }
  uVar4 = uVar4 ^ uVar2;
  if (0x3f < uVar1) {
    uVar2 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar2 & param_2[1]) != 0) {
    iVar3 = param_1[1] - *param_1;
    if (iVar3 < param_1[3] + 2) {
      param_1[3] = iVar3;
      *param_3 = *param_3 + 1;
      return 2;
    }
    *param_4 = *(undefined2 *)(*param_1 + param_1[3]);
    param_1[3] = param_1[3] + 2;
    *param_3 = *param_3 + 1;
    return 2;
  }
  *param_3 = *param_3 + 1;
  return 0;
}


/* FUN_004cbf40 @ 004cbf40  kind=gamemisc  attributed-by=none  size=113 */

int FUN_004cbf40(SOCKET param_1,uint *param_2,uint *param_3,char *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int len;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  iVar2 = 0;
  uVar3 = 0;
  if (0x1f < uVar1) {
    uVar3 = uVar4;
  }
  uVar4 = uVar4 ^ uVar3;
  if (0x3f < uVar1) {
    uVar3 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar3 & param_2[1]) != 0) {
    len = 2;
    do {
      iVar2 = recv(param_1,param_4,len,0);
      if (iVar2 < 1) {
        if (iVar2 == -1) {
          return -1;
        }
        goto LAB_004cbf9b;
      }
      len = len - iVar2;
      param_4 = param_4 + iVar2;
    } while (0 < len);
    iVar2 = 2;
  }
LAB_004cbf9b:
  *param_3 = *param_3 + 1;
  return iVar2;
}


/* FUN_004cbfc0 @ 004cbfc0  kind=gamemisc  attributed-by=none  size=110 */

undefined4 FUN_004cbfc0(int *param_1,uint *param_2,uint *param_3,undefined4 *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  uVar2 = 0;
  if (0x1f < uVar1) {
    uVar2 = uVar4;
  }
  uVar4 = uVar4 ^ uVar2;
  if (0x3f < uVar1) {
    uVar2 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar2 & param_2[1]) != 0) {
    iVar3 = param_1[1] - *param_1;
    if (iVar3 < param_1[3] + 4) {
      param_1[3] = iVar3;
      *param_3 = *param_3 + 1;
      return 4;
    }
    *param_4 = *(undefined4 *)(*param_1 + param_1[3]);
    param_1[3] = param_1[3] + 4;
    *param_3 = *param_3 + 1;
    return 4;
  }
  *param_3 = *param_3 + 1;
  return 0;
}


/* FUN_004cc030 @ 004cc030  kind=gamemisc  attributed-by=none  size=113 */

int FUN_004cc030(SOCKET param_1,uint *param_2,uint *param_3,char *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int len;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  iVar2 = 0;
  uVar3 = 0;
  if (0x1f < uVar1) {
    uVar3 = uVar4;
  }
  uVar4 = uVar4 ^ uVar3;
  if (0x3f < uVar1) {
    uVar3 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar3 & param_2[1]) != 0) {
    len = 4;
    do {
      iVar2 = recv(param_1,param_4,len,0);
      if (iVar2 < 1) {
        if (iVar2 == -1) {
          return -1;
        }
        goto LAB_004cc08b;
      }
      len = len - iVar2;
      param_4 = param_4 + iVar2;
    } while (0 < len);
    iVar2 = 4;
  }
LAB_004cc08b:
  *param_3 = *param_3 + 1;
  return iVar2;
}


/* FUN_004cc0b0 @ 004cc0b0  kind=gamemisc  attributed-by=none  size=132 */

undefined4 FUN_004cc0b0(int *param_1,uint *param_2,uint *param_3,undefined8 *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *param_3;
  uVar5 = 1 << (uVar1 & 0x1f);
  uVar4 = 0;
  if (0x1f < uVar1) {
    uVar4 = uVar5;
  }
  uVar5 = uVar5 ^ uVar4;
  if (0x3f < uVar1) {
    uVar4 = uVar5;
  }
  if ((uVar5 & *param_2) != 0 || (uVar4 & param_2[1]) != 0) {
    iVar2 = param_1[3];
    iVar3 = *param_1;
    if (param_1[1] - iVar3 < iVar2 + 0x14) {
      param_1[3] = param_1[1] - iVar3;
      *param_3 = *param_3 + 1;
      return 0x14;
    }
    *param_4 = *(undefined8 *)(iVar3 + iVar2);
    param_4[1] = *(undefined8 *)(iVar3 + 8 + iVar2);
    *(undefined4 *)(param_4 + 2) = *(undefined4 *)(iVar3 + 0x10 + iVar2);
    param_1[3] = param_1[3] + 0x14;
    *param_3 = *param_3 + 1;
    return 0x14;
  }
  *param_3 = *param_3 + 1;
  return 0;
}


/* FUN_004cc140 @ 004cc140  kind=gamemisc  attributed-by=none  size=113 */

int FUN_004cc140(SOCKET param_1,uint *param_2,uint *param_3,char *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int len;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  iVar2 = 0;
  uVar3 = 0;
  if (0x1f < uVar1) {
    uVar3 = uVar4;
  }
  uVar4 = uVar4 ^ uVar3;
  if (0x3f < uVar1) {
    uVar3 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar3 & param_2[1]) != 0) {
    len = 0x14;
    do {
      iVar2 = recv(param_1,param_4,len,0);
      if (iVar2 < 1) {
        if (iVar2 == -1) {
          return -1;
        }
        goto LAB_004cc19b;
      }
      len = len - iVar2;
      param_4 = param_4 + iVar2;
    } while (0 < len);
    iVar2 = 0x14;
  }
LAB_004cc19b:
  *param_3 = *param_3 + 1;
  return iVar2;
}


/* FUN_004cc1c0 @ 004cc1c0  kind=gamemisc  attributed-by=none  size=128 */

undefined4 FUN_004cc1c0(int *param_1,uint *param_2,uint *param_3,void *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  uVar2 = 0;
  if (0x1f < uVar1) {
    uVar2 = uVar4;
  }
  uVar4 = uVar4 ^ uVar2;
  if (0x3f < uVar1) {
    uVar2 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar2 & param_2[1]) != 0) {
    iVar3 = param_1[1] - *param_1;
    if (iVar3 < param_1[3] + 0xac) {
      param_1[3] = iVar3;
      *param_3 = *param_3 + 1;
      return 0xac;
    }
    memcpy(param_4,(void *)(*param_1 + param_1[3]),0xac);
    param_1[3] = param_1[3] + 0xac;
    *param_3 = *param_3 + 1;
    return 0xac;
  }
  *param_3 = *param_3 + 1;
  return 0;
}


/* FUN_004cc240 @ 004cc240  kind=gamemisc  attributed-by=none  size=113 */

int FUN_004cc240(SOCKET param_1,uint *param_2,uint *param_3,char *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int len;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  iVar2 = 0;
  uVar3 = 0;
  if (0x1f < uVar1) {
    uVar3 = uVar4;
  }
  uVar4 = uVar4 ^ uVar3;
  if (0x3f < uVar1) {
    uVar3 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar3 & param_2[1]) != 0) {
    len = 0xac;
    do {
      iVar2 = recv(param_1,param_4,len,0);
      if (iVar2 < 1) {
        if (iVar2 == -1) {
          return -1;
        }
        goto LAB_004cc29b;
      }
      len = len - iVar2;
      param_4 = param_4 + iVar2;
    } while (0 < len);
    iVar2 = 0xac;
  }
LAB_004cc29b:
  *param_3 = *param_3 + 1;
  return iVar2;
}


/* FUN_004cc2c0 @ 004cc2c0  kind=gamemisc  attributed-by=none  size=128 */

undefined4 FUN_004cc2c0(int *param_1,uint *param_2,uint *param_3,void *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  uVar2 = 0;
  if (0x1f < uVar1) {
    uVar2 = uVar4;
  }
  uVar4 = uVar4 ^ uVar2;
  if (0x3f < uVar1) {
    uVar2 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar2 & param_2[1]) != 0) {
    iVar3 = param_1[1] - *param_1;
    if (iVar3 < param_1[3] + 0xe38) {
      param_1[3] = iVar3;
      *param_3 = *param_3 + 1;
      return 0xe38;
    }
    memcpy(param_4,(void *)(*param_1 + param_1[3]),0xe38);
    param_1[3] = param_1[3] + 0xe38;
    *param_3 = *param_3 + 1;
    return 0xe38;
  }
  *param_3 = *param_3 + 1;
  return 0;
}


/* FUN_004cc340 @ 004cc340  kind=gamemisc  attributed-by=none  size=113 */

int FUN_004cc340(SOCKET param_1,uint *param_2,uint *param_3,char *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int len;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  iVar2 = 0;
  uVar3 = 0;
  if (0x1f < uVar1) {
    uVar3 = uVar4;
  }
  uVar4 = uVar4 ^ uVar3;
  if (0x3f < uVar1) {
    uVar3 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar3 & param_2[1]) != 0) {
    len = 0xe38;
    do {
      iVar2 = recv(param_1,param_4,len,0);
      if (iVar2 < 1) {
        if (iVar2 == -1) {
          return -1;
        }
        goto LAB_004cc39b;
      }
      len = len - iVar2;
      param_4 = param_4 + iVar2;
    } while (0 < len);
    iVar2 = 0xe38;
  }
LAB_004cc39b:
  *param_3 = *param_3 + 1;
  return iVar2;
}


/* FUN_004cc3c0 @ 004cc3c0  kind=gamemisc  attributed-by=none  size=128 */

undefined4 FUN_004cc3c0(int *param_1,uint *param_2,uint *param_3,void *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  uVar2 = 0;
  if (0x1f < uVar1) {
    uVar2 = uVar4;
  }
  uVar4 = uVar4 ^ uVar2;
  if (0x3f < uVar1) {
    uVar2 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar2 & param_2[1]) != 0) {
    iVar3 = param_1[1] - *param_1;
    if (iVar3 < param_1[3] + 0x118) {
      param_1[3] = iVar3;
      *param_3 = *param_3 + 1;
      return 0x118;
    }
    memcpy(param_4,(void *)(*param_1 + param_1[3]),0x118);
    param_1[3] = param_1[3] + 0x118;
    *param_3 = *param_3 + 1;
    return 0x118;
  }
  *param_3 = *param_3 + 1;
  return 0;
}


/* FUN_004cc440 @ 004cc440  kind=gamemisc  attributed-by=none  size=113 */

int FUN_004cc440(SOCKET param_1,uint *param_2,uint *param_3,char *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int len;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  iVar2 = 0;
  uVar3 = 0;
  if (0x1f < uVar1) {
    uVar3 = uVar4;
  }
  uVar4 = uVar4 ^ uVar3;
  if (0x3f < uVar1) {
    uVar3 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar3 & param_2[1]) != 0) {
    len = 0x118;
    do {
      iVar2 = recv(param_1,param_4,len,0);
      if (iVar2 < 1) {
        if (iVar2 == -1) {
          return -1;
        }
        goto LAB_004cc49b;
      }
      len = len - iVar2;
      param_4 = param_4 + iVar2;
    } while (0 < len);
    iVar2 = 0x118;
  }
LAB_004cc49b:
  *param_3 = *param_3 + 1;
  return iVar2;
}


/* FUN_004cc4c0 @ 004cc4c0  kind=gamemisc  attributed-by=none  size=113 */

int FUN_004cc4c0(SOCKET param_1,uint *param_2,uint *param_3,char *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int len;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  iVar2 = 0;
  uVar3 = 0;
  if (0x1f < uVar1) {
    uVar3 = uVar4;
  }
  uVar4 = uVar4 ^ uVar3;
  if (0x3f < uVar1) {
    uVar3 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar3 & param_2[1]) != 0) {
    len = 0xc;
    do {
      iVar2 = recv(param_1,param_4,len,0);
      if (iVar2 < 1) {
        if (iVar2 == -1) {
          return -1;
        }
        goto LAB_004cc51b;
      }
      len = len - iVar2;
      param_4 = param_4 + iVar2;
    } while (0 < len);
    iVar2 = 0xc;
  }
LAB_004cc51b:
  *param_3 = *param_3 + 1;
  return iVar2;
}


/* FUN_004cc540 @ 004cc540  kind=gamemisc  attributed-by=none  size=121 */

undefined4 FUN_004cc540(int *param_1,uint *param_2,uint *param_3,undefined8 *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *param_3;
  uVar5 = 1 << (uVar1 & 0x1f);
  uVar4 = 0;
  if (0x1f < uVar1) {
    uVar4 = uVar5;
  }
  uVar5 = uVar5 ^ uVar4;
  if (0x3f < uVar1) {
    uVar4 = uVar5;
  }
  if ((uVar5 & *param_2) != 0 || (uVar4 & param_2[1]) != 0) {
    iVar2 = param_1[3];
    iVar3 = *param_1;
    if (param_1[1] - iVar3 < iVar2 + 0xc) {
      param_1[3] = param_1[1] - iVar3;
      *param_3 = *param_3 + 1;
      return 0xc;
    }
    *param_4 = *(undefined8 *)(iVar3 + iVar2);
    *(undefined4 *)(param_4 + 1) = *(undefined4 *)(iVar3 + 8 + iVar2);
    param_1[3] = param_1[3] + 0xc;
    *param_3 = *param_3 + 1;
    return 0xc;
  }
  *param_3 = *param_3 + 1;
  return 0;
}


/* FUN_004cc5c0 @ 004cc5c0  kind=gamemisc  attributed-by=none  size=136 */

undefined4 FUN_004cc5c0(int *param_1,uint *param_2,uint *param_3,undefined8 *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *param_3;
  uVar5 = 1 << (uVar1 & 0x1f);
  uVar4 = 0;
  if (0x1f < uVar1) {
    uVar4 = uVar5;
  }
  uVar5 = uVar5 ^ uVar4;
  if (0x3f < uVar1) {
    uVar4 = uVar5;
  }
  if ((uVar5 & *param_2) != 0 || (uVar4 & param_2[1]) != 0) {
    iVar2 = param_1[3];
    iVar3 = *param_1;
    if (param_1[1] - iVar3 < iVar2 + 0x18) {
      param_1[3] = param_1[1] - iVar3;
      *param_3 = *param_3 + 1;
      return 0x18;
    }
    *param_4 = *(undefined8 *)(iVar3 + iVar2);
    param_4[1] = *(undefined8 *)(iVar3 + 8 + iVar2);
    param_4[2] = *(undefined8 *)(iVar3 + 0x10 + iVar2);
    param_1[3] = param_1[3] + 0x18;
    *param_3 = *param_3 + 1;
    return 0x18;
  }
  *param_3 = *param_3 + 1;
  return 0;
}


/* FUN_004cc650 @ 004cc650  kind=gamemisc  attributed-by=none  size=113 */

int FUN_004cc650(SOCKET param_1,uint *param_2,uint *param_3,char *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int len;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  iVar2 = 0;
  uVar3 = 0;
  if (0x1f < uVar1) {
    uVar3 = uVar4;
  }
  uVar4 = uVar4 ^ uVar3;
  if (0x3f < uVar1) {
    uVar3 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar3 & param_2[1]) != 0) {
    len = 0x18;
    do {
      iVar2 = recv(param_1,param_4,len,0);
      if (iVar2 < 1) {
        if (iVar2 == -1) {
          return -1;
        }
        goto LAB_004cc6ab;
      }
      len = len - iVar2;
      param_4 = param_4 + iVar2;
    } while (0 < len);
    iVar2 = 0x18;
  }
LAB_004cc6ab:
  *param_3 = *param_3 + 1;
  return iVar2;
}


/* FUN_004cc6d0 @ 004cc6d0  kind=gamemisc  attributed-by=none  size=114 */

undefined4 FUN_004cc6d0(int *param_1,uint *param_2,uint *param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = *param_3;
  uVar3 = 1 << (uVar1 & 0x1f);
  uVar2 = 0;
  if (0x1f < uVar1) {
    uVar2 = uVar3;
  }
  uVar3 = uVar3 ^ uVar2;
  if (0x3f < uVar1) {
    uVar2 = uVar3;
  }
  if ((uVar3 & *param_2) != 0 || (uVar2 & param_2[1]) != 0) {
    iVar4 = param_1[1] - *param_1;
    if (iVar4 < param_1[3] + 8) {
      param_1[3] = iVar4;
      *param_3 = *param_3 + 1;
      return 8;
    }
    *param_4 = *(undefined8 *)(*param_1 + param_1[3]);
    param_1[3] = param_1[3] + 8;
    *param_3 = *param_3 + 1;
    return 8;
  }
  *param_3 = *param_3 + 1;
  return 0;
}


/* FUN_004cc750 @ 004cc750  kind=gamemisc  attributed-by=none  size=113 */

int FUN_004cc750(SOCKET param_1,uint *param_2,uint *param_3,char *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int len;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  iVar2 = 0;
  uVar3 = 0;
  if (0x1f < uVar1) {
    uVar3 = uVar4;
  }
  uVar4 = uVar4 ^ uVar3;
  if (0x3f < uVar1) {
    uVar3 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar3 & param_2[1]) != 0) {
    len = 8;
    do {
      iVar2 = recv(param_1,param_4,len,0);
      if (iVar2 < 1) {
        if (iVar2 == -1) {
          return -1;
        }
        goto LAB_004cc7ab;
      }
      len = len - iVar2;
      param_4 = param_4 + iVar2;
    } while (0 < len);
    iVar2 = 8;
  }
LAB_004cc7ab:
  *param_3 = *param_3 + 1;
  return iVar2;
}


/* FUN_004cc800 @ 004cc800  kind=gamemisc  attributed-by=none  size=50 */

undefined1 FUN_004cc800(float *param_1)

{
  int in_ECX;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = in_ECX - (int)param_1;
  do {
    if (*(float *)(iVar1 + (int)param_1) != *param_1) {
      return 1;
    }
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 1;
  } while (iVar2 < 3);
  return 0;
}


/* FUN_004cc840 @ 004cc840  kind=gamemisc  attributed-by=none  size=607 */

undefined1 FUN_004cc840(int param_1)

{
  char cVar1;
  char *in_ECX;
  char *pcVar2;
  int iVar3;
  
  iVar3 = 0;
  pcVar2 = in_ECX;
  do {
    if (*pcVar2 != pcVar2[param_1 - (int)in_ECX]) {
      return 1;
    }
    iVar3 = iVar3 + 1;
    pcVar2 = pcVar2 + 1;
  } while (iVar3 < 2);
  pcVar2 = in_ECX + 2;
  do {
    if (*pcVar2 != pcVar2[param_1 - (int)in_ECX]) {
      return 1;
    }
    pcVar2 = pcVar2 + 1;
  } while ((int)(pcVar2 + (-2 - (int)in_ECX)) < 3);
  if ((((((((*(short *)(in_ECX + 6) == *(short *)(param_1 + 6)) &&
           (cVar1 = FUN_004cc800(param_1 + 8), cVar1 == '\0')) &&
          (*(short *)(in_ECX + 0x14) == *(short *)(param_1 + 0x14))) &&
         (((*(short *)(in_ECX + 0x16) == *(short *)(param_1 + 0x16) &&
           (*(short *)(in_ECX + 0x18) == *(short *)(param_1 + 0x18))) &&
          ((*(short *)(in_ECX + 0x1a) == *(short *)(param_1 + 0x1a) &&
           ((*(short *)(in_ECX + 0x1c) == *(short *)(param_1 + 0x1c) &&
            (*(short *)(in_ECX + 0x1e) == *(short *)(param_1 + 0x1e))))))))) &&
        (*(short *)(in_ECX + 0x20) == *(short *)(param_1 + 0x20))) &&
       (((*(short *)(in_ECX + 0x22) == *(short *)(param_1 + 0x22) &&
         (*(float *)(in_ECX + 0x24) == *(float *)(param_1 + 0x24))) &&
        (*(float *)(in_ECX + 0x28) == *(float *)(param_1 + 0x28))))) &&
      (((*(float *)(in_ECX + 0x2c) == *(float *)(param_1 + 0x2c) &&
        (*(float *)(in_ECX + 0x30) == *(float *)(param_1 + 0x30))) &&
       ((*(float *)(in_ECX + 0x34) == *(float *)(param_1 + 0x34) &&
        ((*(float *)(in_ECX + 0x38) == *(float *)(param_1 + 0x38) &&
         (*(float *)(in_ECX + 0x3c) == *(float *)(param_1 + 0x3c))))))))) &&
     (((*(float *)(in_ECX + 0x40) == *(float *)(param_1 + 0x40) &&
       (((((*(float *)(in_ECX + 0x44) == *(float *)(param_1 + 0x44) &&
           (*(float *)(in_ECX + 0x48) == *(float *)(param_1 + 0x48))) &&
          (cVar1 = FUN_004cc800(param_1 + 0x4c), cVar1 == '\0')) &&
         ((*(float *)(in_ECX + 0x58) == *(float *)(param_1 + 0x58) &&
          (*(float *)(in_ECX + 0x5c) == *(float *)(param_1 + 0x5c))))) &&
        ((*(float *)(in_ECX + 0x60) == *(float *)(param_1 + 0x60) &&
         ((cVar1 = FUN_004cc800(param_1 + 100), cVar1 == '\0' &&
          (cVar1 = FUN_004cc800(param_1 + 0x70), cVar1 == '\0')))))))) &&
      ((cVar1 = FUN_004cc800(param_1 + 0x7c), cVar1 == '\0' &&
       (((cVar1 = FUN_004cc800(param_1 + 0x88), cVar1 == '\0' &&
         (cVar1 = FUN_004cc800(param_1 + 0xa0), cVar1 == '\0')) &&
        (cVar1 = FUN_004cc800(param_1 + 0x94), cVar1 == '\0')))))))) {
    return 0;
  }
  return 1;
}


