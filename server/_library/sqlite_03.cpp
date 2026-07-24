// sqlite_03 (_library) -- server. 200 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "sqlite_03.h"

/* FUN_004a6290 @ 004a6290  kind=lib  attributed-by=lib-island  size=670 */

void __cdecl FUN_004a6290(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  byte bVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  
  piVar4 = param_1;
  iVar11 = -1000000;
  piVar1 = (int *)param_2[3];
  iVar2 = param_1[0x12];
  iVar6 = iVar2 + 1;
  param_1[0x12] = iVar2 + 2;
  iVar8 = *param_1;
  if (param_2[6] != 0) {
    iVar11 = 0;
    if (0 < *(int *)(iVar8 + 0x14)) {
      piVar7 = (int *)(*(int *)(iVar8 + 0x10) + 0xc);
      do {
        if (*piVar7 == param_2[6]) break;
        iVar11 = iVar11 + 1;
        piVar7 = piVar7 + 4;
      } while (iVar11 < *(int *)(iVar8 + 0x14));
      iVar8 = *param_1;
    }
  }
  iVar8 = FUN_0048d4b0(param_1,0x1b,*param_2,0,
                       *(undefined4 *)(*(int *)(iVar8 + 0x10) + iVar11 * 0x10));
  if (iVar8 == 0) {
    FUN_004aab20(param_1,iVar11,piVar1[8],'\x01',*piVar1);
    piVar7 = (int *)param_1[2];
    if (piVar7 == (int *)0x0) {
      piVar7 = FUN_004af150(*param_1);
      param_1[2] = (int)piVar7;
      if (piVar7 == (int *)0x0) {
        return;
      }
      FUN_004ae760(piVar7,0x94);
    }
    if (param_3 < 0) {
      param_1 = (int *)param_2[10];
      FUN_004ae830(piVar7,0x67,param_1,iVar11);
    }
    else {
      param_1 = (int *)param_3;
    }
    piVar9 = FUN_0049dbf0(piVar4,(int)param_2);
    FUN_004ae8f0(piVar7,0x28,iVar6,param_1,iVar11,piVar9,0xfffffff0);
    if (piVar7[1] != 0) {
      *(byte *)(piVar7[1] + -0x11 + piVar7[7] * 0x14) = (param_3 < 0) - 1U & 2 | 1;
    }
    iVar8 = piVar4[0x12];
    piVar4[0x12] = iVar8 + 1;
    FUN_004ae8f0(piVar7,0x2b,iVar8,0,0,piVar9,0xfffffffa);
    FUN_004a0f40(piVar4,iVar2,iVar11,piVar1,0x27);
    uVar10 = FUN_004ae830(piVar7,0x48,iVar2,0);
    if (*(char *)((int)piVar4 + 0x13) == '\0') {
      piVar4[0x13] = piVar4[0x13] + 1;
      iVar11 = piVar4[0x13];
    }
    else {
      bVar5 = *(char *)((int)piVar4 + 0x13) - 1;
      *(byte *)((int)piVar4 + 0x13) = bVar5;
      iVar11 = piVar4[bVar5 + 7];
    }
    FUN_0049c270(piVar4,param_2,iVar2,iVar11,1);
    FUN_004ae830(piVar7,0x60,iVar8,iVar11);
    FUN_004ae830(piVar7,0x5f,iVar2,uVar10 + 1);
    if ((-1 < (int)uVar10) && (uVar10 < (uint)piVar7[7])) {
      *(int *)(piVar7[1] + 8 + uVar10 * 0x14) = piVar7[7];
    }
    uVar10 = FUN_004ae830(piVar7,0x46,iVar8,0);
    if ((char)param_2[0xb] == '\0') {
      param_2 = (int *)piVar7[7];
    }
    else {
      iVar3 = piVar7[7];
      FUN_004ae830(piVar7,1,0,iVar3 + 3);
      param_2 = (int *)piVar7[7];
      FUN_004ae890(piVar7,0x3d,iVar8,iVar3 + 3,iVar11);
      FUN_0049d510(piVar4,2,(int *)"indexed columns are not unique",0xfffffffe);
    }
    FUN_004ae830(piVar7,0x3e,iVar8,iVar11);
    FUN_004ae890(piVar7,0x61,iVar6,iVar11,1);
    if (piVar7[1] != 0) {
      *(undefined1 *)(piVar7[1] + -0x11 + piVar7[7] * 0x14) = 0x10;
    }
    FUN_004a68f0((int)piVar4,iVar11);
    FUN_004ae830(piVar7,0x51,iVar8,param_2);
    if ((-1 < (int)uVar10) && (uVar10 < (uint)piVar7[7])) {
      *(int *)(piVar7[1] + 8 + uVar10 * 0x14) = piVar7[7];
    }
    FUN_004ae7d0(piVar7,0x2d,iVar2);
    FUN_004ae7d0(piVar7,0x2d,iVar6);
    FUN_004ae7d0(piVar7,0x2d,iVar8);
  }
  return;
}


/* FUN_004a6530 @ 004a6530  kind=lib  attributed-by=lib-island  size=140 */

void FUN_004a6530(void)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  
  puVar8 = &DAT_00582bc8;
  do {
    pbVar2 = *(byte **)(puVar8 + 0x18);
    uVar6 = 0;
    if (pbVar2 != (byte *)0x0) {
      bVar1 = *pbVar2;
      pbVar5 = pbVar2;
      while (bVar1 != 0) {
        pbVar5 = pbVar5 + 1;
        bVar1 = *pbVar5;
      }
      uVar6 = (int)pbVar5 - (int)pbVar2 & 0x3fffffff;
    }
    uVar7 = ((byte)(&DAT_00569620)[*pbVar2] + uVar6) % 0x17;
    iVar4 = FUN_0047c390(0x583f68,uVar7,pbVar2,uVar6);
    if (iVar4 == 0) {
      uVar3 = *(undefined4 *)(&DAT_00583f68 + uVar7 * 4);
      *(undefined4 *)(puVar8 + 8) = 0;
      *(undefined4 *)(puVar8 + 0x1c) = uVar3;
      *(undefined **)(&DAT_00583f68 + uVar7 * 4) = puVar8;
    }
    else {
      *(undefined4 *)(puVar8 + 8) = *(undefined4 *)(iVar4 + 8);
      *(undefined **)(iVar4 + 8) = puVar8;
    }
    puVar8 = puVar8 + 0x24;
  } while ((int)puVar8 < 0x582ce8);
  return;
}


/* FUN_004a65c0 @ 004a65c0  kind=lib  attributed-by=lib-island  size=149 */

void FUN_004a65c0(void)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  
  puVar8 = &DAT_00582ce8;
  do {
    pbVar2 = *(byte **)(puVar8 + 0x18);
    uVar6 = 0;
    if (pbVar2 != (byte *)0x0) {
      bVar1 = *pbVar2;
      pbVar5 = pbVar2;
      while (bVar1 != 0) {
        pbVar5 = pbVar5 + 1;
        bVar1 = *pbVar5;
      }
      uVar6 = (int)pbVar5 - (int)pbVar2 & 0x3fffffff;
    }
    uVar7 = ((byte)(&DAT_00569620)[*pbVar2] + uVar6) % 0x17;
    iVar4 = FUN_0047c390(0x583f68,uVar7,pbVar2,uVar6);
    if (iVar4 == 0) {
      uVar3 = *(undefined4 *)(&DAT_00583f68 + uVar7 * 4);
      *(undefined4 *)(puVar8 + 8) = 0;
      *(undefined4 *)(puVar8 + 0x1c) = uVar3;
      *(undefined **)(&DAT_00583f68 + uVar7 * 4) = puVar8;
    }
    else {
      *(undefined4 *)(puVar8 + 8) = *(undefined4 *)(iVar4 + 8);
      *(undefined **)(iVar4 + 8) = puVar8;
    }
    puVar8 = puVar8 + 0x24;
  } while ((int)puVar8 < 0x58345c);
  FUN_004a6530();
  FUN_0048c460();
  return;
}


/* FUN_004a6660 @ 004a6660  kind=lib  attributed-by=lib-island  size=240 */

void __cdecl FUN_004a6660(int param_1,int param_2)

{
  char *pcVar1;
  short *psVar2;
  char *pcVar3;
  undefined *puVar4;
  
  puVar4 = &DAT_0056c7b4;
  if (param_2 == 0) {
    puVar4 = &DAT_0056c7b0;
  }
  FUN_00493f20(param_1,&DAT_0056d0e0,2,1,puVar4,0x45f3e0,0,0,(int *)0x0);
  FUN_00493f20(param_1,&DAT_0056d0e0,3,1,puVar4,0x45f3e0,0,0,(int *)0x0);
  FUN_00493f20(param_1,&DAT_0056d0e8,2,1,&DAT_0056c7ac,0x45f3e0,0,0,(int *)0x0);
  pcVar1 = "glob";
  do {
    pcVar3 = pcVar1;
    pcVar1 = pcVar3 + 1;
  } while (*pcVar1 != '\0');
  psVar2 = FUN_004995c0(param_1,&DAT_0056d0e8,(uint)(pcVar3 + -0x56d0e7) & 0x3fffffff,2,1,'\0');
  if (psVar2 != (short *)0x0) {
    *(undefined1 *)((int)psVar2 + 3) = 3;
  }
  pcVar1 = "like";
  do {
    pcVar3 = pcVar1;
    pcVar1 = pcVar3 + 1;
  } while (*pcVar1 != '\0');
  psVar2 = FUN_004995c0(param_1,&DAT_0056d0e0,(uint)(pcVar3 + -0x56d0df) & 0x3fffffff,2,1,'\0');
  if (psVar2 != (short *)0x0) {
    *(char *)((int)psVar2 + 3) = (param_2 != 0) * '\x02' + '\x01';
  }
  return;
}


/* FUN_004a6750 @ 004a6750  kind=lib  attributed-by=lib-island  size=356 */

void __cdecl FUN_004a6750(int *param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int *piVar4;
  uint uVar5;
  byte *local_8;
  
  iVar1 = *param_1;
  if ((*(char *)(iVar1 + 0x81) == '\0') && (iVar2 = FUN_0049ddb0(iVar1,param_1 + 1), iVar2 != 0)) {
    param_1[0x11] = param_1[0x11] + 1;
    param_1[3] = iVar2;
    return;
  }
  if (param_2 == (undefined4 *)0x0) {
    FUN_00487d80(param_1,(byte *)0x0);
    return;
  }
  if ((param_3 == (int *)0x0) || (*param_3 == 0)) {
    pbVar3 = (byte *)FUN_004a0d40(*param_1,param_2);
    if (pbVar3 == (byte *)0x0) {
      return;
    }
    piVar4 = FUN_00499500(iVar1,*(byte *)(*(int *)(*(int *)(iVar1 + 0x10) + 0xc) + 0x4d),pbVar3,0);
    if (piVar4 != (int *)0x0) {
      FUN_00487d80(param_1,pbVar3);
      FUN_00494b00(iVar1,(undefined4 *)pbVar3);
      return;
    }
    FUN_00494b00(iVar1,(undefined4 *)pbVar3);
  }
  uVar5 = FUN_004ab150(param_1,param_2,(int)param_3,(int *)&local_8);
  if ((-1 < (int)uVar5) &&
     (pbVar3 = (byte *)FUN_004a0d40(iVar1,(undefined4 *)local_8), pbVar3 != (byte *)0x0)) {
    local_8 = *(byte **)(*(int *)(iVar1 + 0x10) + uVar5 * 0x10);
    iVar2 = FUN_00499c30(iVar1,pbVar3,local_8);
    if (iVar2 != 0) {
      FUN_00487e80(param_1,iVar2,(byte *)0x0);
      FUN_00494b00(iVar1,(undefined4 *)pbVar3);
      return;
    }
    local_8 = (byte *)FUN_00499af0(iVar1,pbVar3,local_8);
    FUN_00494b00(iVar1,(undefined4 *)pbVar3);
    pbVar3 = local_8;
    if (local_8 != (byte *)0x0) {
      FUN_0048e5e0(param_1,0,uVar5);
      FUN_004a6290(param_1,(int *)pbVar3,-1);
      return;
    }
    FUN_004962b0(param_1,(byte *)"unable to identify the object to be reindexed");
  }
  return;
}


/* FUN_004a68c0 @ 004a68c0  kind=lib  attributed-by=lib-island  size=42 */

void __cdecl FUN_004a68c0(int param_1,int param_2,int param_3)

{
  FUN_00496d90(param_1,param_2,param_3);
  if (*(int *)(param_1 + 0x3c) < param_3) {
    *(int *)(param_1 + 0x3c) = param_3;
    *(int *)(param_1 + 0x40) = param_2;
  }
  return;
}


/* FUN_004a68f0 @ 004a68f0  kind=lib  attributed-by=lib-island  size=68 */

void __cdecl FUN_004a68f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 != 0) && (*(byte *)(param_1 + 0x13) < 8)) {
    iVar2 = 0;
    iVar1 = param_1 + 100;
    while (*(int *)(iVar1 + 0x10) != param_2) {
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x18;
      if (9 < iVar2) {
        *(int *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0x13) * 4) = param_2;
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
        return;
      }
    }
    *(undefined1 *)(iVar1 + 8) = 1;
  }
  return;
}


/* FUN_004a6940 @ 004a6940  kind=lib  attributed-by=lib-island  size=88 */

void __cdecl FUN_004a6940(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_0048fca0(param_1);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0xc + iVar2);
      if (iVar1 != 0) {
        FUN_004a7960(iVar1);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0x14));
  }
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffffd;
  FUN_004ba070(param_1);
  FUN_00490780(param_1);
  FUN_004934c0(param_1);
  return;
}


/* FUN_004a69a0 @ 004a69a0  kind=lib  attributed-by=lib-island  size=50 */

void __cdecl FUN_004a69a0(int param_1,int param_2)

{
  FUN_004a7960(*(int *)(*(int *)(param_1 + 0x10) + 0xc + param_2 * 0x10));
  if (param_2 != 1) {
    FUN_004a7960(*(int *)(*(int *)(param_1 + 0x10) + 0x1c));
  }
  return;
}


/* FUN_004a69e0 @ 004a69e0  kind=lib  attributed-by=lib-island  size=215 */

ushort __cdecl FUN_004a69e0(int *param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  code *local_18;
  code *local_14;
  int local_10;
  int *local_8;
  
  if (param_2 == 0) {
    return 0;
  }
  piVar2 = (int *)*param_1;
  if (*(int *)(*piVar2 + 0x5c) < piVar2[0x78] + *(int *)(param_2 + 0x14)) {
    FUN_004962b0(piVar2,(byte *)"Expression tree is too large (maximum depth %d)");
    return 1;
  }
  piVar2[0x78] = piVar2[0x78] + *(int *)(param_2 + 0x14);
  bVar1 = *(byte *)(param_1 + 7);
  *(byte *)(param_1 + 7) = bVar1 & 0xfd;
  local_10 = *param_1;
  local_18 = FUN_00488dd0;
  local_14 = FUN_00489430;
  local_8 = param_1;
  FUN_004bb020(&local_18,param_2);
  *(int *)(*param_1 + 0x1e0) = *(int *)(*param_1 + 0x1e0) - *(int *)(param_2 + 0x14);
  if ((0 < param_1[6]) || (0 < *(int *)(local_10 + 0x44))) {
    *(ushort *)(param_2 + 2) = *(ushort *)(param_2 + 2) | 8;
  }
  if ((*(byte *)(param_1 + 7) & 2) != 0) {
    *(ushort *)(param_2 + 2) = *(ushort *)(param_2 + 2) | 2;
    return *(ushort *)(param_2 + 2) >> 3 & 1;
  }
  if ((bVar1 & 2) != 0) {
    *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) | 2;
  }
  return *(ushort *)(param_2 + 2) >> 3 & 1;
}


/* FUN_004a6ac0 @ 004a6ac0  kind=lib  attributed-by=lib-island  size=172 */

undefined4 __cdecl FUN_004a6ac0(int *param_1,undefined4 *param_2,int *param_3,char *param_4)

{
  ushort uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (param_3 != (int *)0x0) {
    if (*(char *)(*param_1 + 0x38) == '\0') {
      if (*(int *)(*param_1 + 0x58) < *param_3) {
        FUN_004962b0(param_1,(byte *)"too many terms in %s BY clause");
        return 1;
      }
      piVar2 = (int *)*param_2;
      puVar3 = (undefined4 *)param_3[2];
      iVar4 = 0;
      if (0 < *param_3) {
        do {
          uVar1 = *(ushort *)((int)puVar3 + 0xe);
          if (uVar1 != 0) {
            if (*piVar2 < (int)(uint)uVar1) {
              FUN_004962b0(param_1,(byte *)"%r %s BY term out of range - should be between 1 and %d"
                          );
              return 1;
            }
            FUN_00488860(param_1,(int)piVar2,uVar1 - 1,(char *)*puVar3,param_4,0);
          }
          iVar4 = iVar4 + 1;
          puVar3 = puVar3 + 5;
        } while (iVar4 < *param_3);
      }
      return 0;
    }
  }
  return 0;
}


/* FUN_004a6b70 @ 004a6b70  kind=lib  attributed-by=lib-island  size=51 */

void __cdecl FUN_004a6b70(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  code *local_18;
  code *local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  local_10 = param_1;
  local_8 = param_3;
  local_18 = FUN_00488dd0;
  local_14 = FUN_00489430;
  FUN_004bb100((int)&local_18,param_2);
  return;
}


/* FUN_004a6bb0 @ 004a6bb0  kind=lib  attributed-by=lib-island  size=205 */

undefined4 * __cdecl FUN_004a6bb0(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *_Dst;
  
  iVar1 = *param_1;
  uVar2 = *(uint *)(iVar1 + 0x18);
  *(uint *)(iVar1 + 0x18) = uVar2 & 0xfffffffb | 8;
  FUN_004a99a0(param_1,param_2,0);
  if (param_1[0x11] == 0) {
    piVar4 = (int *)param_2[0xf];
    while (piVar3 = piVar4, piVar3 != (int *)0x0) {
      param_2 = piVar3;
      piVar4 = (int *)piVar3[0xf];
    }
    *(uint *)(iVar1 + 0x18) = uVar2;
    _Dst = FUN_00494b90(iVar1,0x48);
    if (_Dst != (undefined4 *)0x0) {
      memset(_Dst,0,0x48);
      *(undefined2 *)(_Dst + 10) = 1;
      *_Dst = 0;
      _Dst[7] = 1000000;
      FUN_0048a240(param_1,(int *)*param_2,(short *)((int)_Dst + 0x26),_Dst + 1);
      FUN_0048a080(param_1,(int)*(short *)((int)_Dst + 0x26),_Dst[1],param_2);
      *(undefined2 *)(_Dst + 9) = 0xffff;
      if (*(char *)(iVar1 + 0x38) == '\0') {
        return _Dst;
      }
      FUN_00495300(iVar1,_Dst);
    }
  }
  return (undefined4 *)0x0;
}


/* FUN_004a6c80 @ 004a6c80  kind=lib  attributed-by=lib-island  size=42 */

void __cdecl FUN_004a6c80(int param_1,uint param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  bVar2 = false;
  if (DAT_00583e74 != (code *)0x0) {
    (*DAT_00583e74)();
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar4 = 0;
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x10) + 4 + iVar4);
      if (piVar1 != (int *)0x0) {
        if ((char)piVar1[2] == '\x02') {
          bVar2 = true;
        }
        FUN_004916b0(piVar1,param_2);
        *(undefined1 *)(*(int *)(param_1 + 0x10) + 8 + iVar4) = 0;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0x14));
  }
  FUN_004719f0(param_1,0x44);
  if (DAT_00583e78 != (code *)0x0) {
    (*DAT_00583e78)();
  }
  if ((*(byte *)(param_1 + 0x18) & 2) != 0) {
    for (iVar3 = *(int *)(param_1 + 4); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x3c)) {
      *(uint *)(iVar3 + 0x60) = *(uint *)(iVar3 + 0x60) | 0x20;
    }
    FUN_004a6940(param_1);
  }
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  if ((*(code **)(param_1 + 0xb4) != (code *)0x0) &&
     ((bVar2 || (*(char *)(param_1 + 0x36) == '\0')))) {
    (**(code **)(param_1 + 0xb4))(*(undefined4 *)(param_1 + 0xb0));
  }
  return;
}


/* FUN_004a6d60 @ 004a6d60  kind=lib  attributed-by=lib-string  size=91 */

void __cdecl FUN_004a6d60(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_0048d4b0(param_1,0x16,"ROLLBACK",0,0);
  if (iVar1 == 0) {
    piVar2 = (int *)param_1[2];
    if (piVar2 == (int *)0x0) {
      piVar2 = FUN_004af150(*param_1);
      param_1[2] = (int)piVar2;
      if (piVar2 == (int *)0x0) {
        return;
      }
      FUN_004ae760(piVar2,0x94);
    }
    FUN_004ae830(piVar2,0x22,1,1);
  }
  return;
}


/* FUN_004a6dc0 @ 004a6dc0  kind=lib  attributed-by=lib-island  size=85 */

void __cdecl FUN_004a6dc0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = param_2 * 0x10 + *(int *)(param_1 + 0x10);
  for (puVar1 = *(undefined4 **)(*(int *)(iVar2 + 0xc) + 0x10); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    if (*(int *)(puVar1[2] + 0x20) == param_3) {
      *(undefined4 *)(puVar1[2] + 0x20) = param_4;
    }
  }
  for (puVar1 = *(undefined4 **)(*(int *)(iVar2 + 0xc) + 0x20); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    if (*(int *)(puVar1[2] + 0x28) == param_3) {
      *(undefined4 *)(puVar1[2] + 0x28) = param_4;
    }
  }
  return;
}


/* FUN_004a6e20 @ 004a6e20  kind=lib  attributed-by=lib-island  size=173 */

void __cdecl FUN_004a6e20(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar3 = (undefined4 *)*param_1;
joined_r0x004a6e2b:
  do {
    if (puVar3 == (undefined4 *)0x0) {
      *param_1 = 0;
      *(undefined2 *)(param_1 + 6) = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[5] = 0;
      *(undefined1 *)((int)param_1 + 0x1a) = 1;
      return;
    }
    iVar1 = param_1[1];
    puVar2 = (undefined4 *)*puVar3;
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 0x1f0) != 0) {
        if ((puVar3 < *(undefined4 **)(iVar1 + 0x104)) ||
           (*(undefined4 **)(iVar1 + 0x108) <= puVar3)) {
          iVar4 = (*DAT_00582af0._4_4_)(puVar3);
          **(int **)(iVar1 + 0x1f0) = **(int **)(iVar1 + 0x1f0) + iVar4;
          puVar3 = puVar2;
        }
        else {
          **(int **)(iVar1 + 0x1f0) = **(int **)(iVar1 + 0x1f0) + (uint)*(ushort *)(iVar1 + 0xe8);
          puVar3 = puVar2;
        }
        goto joined_r0x004a6e2b;
      }
      if ((*(undefined4 **)(iVar1 + 0x104) <= puVar3) && (puVar3 < *(undefined4 **)(iVar1 + 0x108)))
      {
        *puVar3 = *(undefined4 *)(iVar1 + 0x100);
        *(int *)(iVar1 + 0xec) = *(int *)(iVar1 + 0xec) + -1;
        *(undefined4 **)(iVar1 + 0x100) = puVar3;
        puVar3 = puVar2;
        goto joined_r0x004a6e2b;
      }
    }
    FUN_00466dd0((int)puVar3);
    puVar3 = puVar2;
  } while( true );
}


/* FUN_004a6ed0 @ 004a6ed0  kind=lib  attributed-by=lib-island  size=151 */

void __cdecl FUN_004a6ed0(undefined4 *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  
  if (*(short *)(param_1 + 6) == 0) {
    puVar3 = FUN_00494b90(param_1[1],0x3f8);
    if (puVar3 == (undefined4 *)0x0) {
      return;
    }
    *puVar3 = *param_1;
    *param_1 = puVar3;
    param_1[4] = puVar3 + 2;
    *(undefined2 *)(param_1 + 6) = 0x3f;
  }
  puVar1 = (uint *)param_1[4];
  *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + -1;
  param_1[4] = puVar1 + 4;
  if (puVar1 != (uint *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = 0;
    puVar2 = (uint *)param_1[3];
    if (puVar2 != (uint *)0x0) {
      if ((((*(byte *)((int)param_1 + 0x1a) & 1) != 0) && ((int)param_3 <= (int)puVar2[1])) &&
         (((int)param_3 < (int)puVar2[1] || (param_2 <= *puVar2)))) {
        *(byte *)((int)param_1 + 0x1a) = *(byte *)((int)param_1 + 0x1a) & 0xfe;
      }
      puVar2[2] = (uint)puVar1;
      param_1[3] = puVar1;
      return;
    }
    param_1[2] = puVar1;
    param_1[3] = puVar1;
  }
  return;
}


/* FUN_004a6f70 @ 004a6f70  kind=lib  attributed-by=lib-island  size=91 */

undefined4 __cdecl FUN_004a6f70(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((*(byte *)((int)param_1 + 0x1a) & 2) == 0) {
    if ((*(byte *)((int)param_1 + 0x1a) & 1) == 0) {
      uVar3 = FUN_00489940((uint *)param_1[2]);
      param_1[2] = uVar3;
    }
    *(byte *)((int)param_1 + 0x1a) = *(byte *)((int)param_1 + 0x1a) | 2;
  }
  puVar1 = (undefined4 *)param_1[2];
  if (puVar1 != (undefined4 *)0x0) {
    *param_2 = *puVar1;
    param_2[1] = puVar1[1];
    iVar2 = *(int *)(param_1[2] + 8);
    param_1[2] = iVar2;
    if (iVar2 == 0) {
      FUN_004a6e20(param_1);
    }
    return 1;
  }
  return 0;
}


/* FUN_004a6fd0 @ 004a6fd0  kind=lib  attributed-by=lib-island  size=353 */

undefined4 __cdecl FUN_004a6fd0(undefined4 *param_1,char param_2,uint param_3,int param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int local_c;
  uint *local_8;
  
  if (param_2 == *(char *)((int)param_1 + 0x1b)) goto LAB_004a70d6;
  puVar3 = (uint *)param_1[2];
  if (puVar3 != (uint *)0x0) {
    puVar2 = param_1 + 5;
    if ((*(byte *)((int)param_1 + 0x1a) & 1) == 0) {
      puVar3 = (uint *)FUN_00489940(puVar3);
    }
    puVar4 = (undefined4 *)*puVar2;
    while (puVar4 != (undefined4 *)0x0) {
      puVar2 = puVar4 + 2;
      if (puVar4[3] == 0) goto LAB_004a70b2;
      FUN_00489b70(puVar4[3],(int *)&local_8,&local_c);
      puVar4[3] = 0;
      puVar3 = (uint *)FUN_004898d0(local_8,puVar3);
      puVar4 = (undefined4 *)*puVar2;
    }
    if (*(short *)(param_1 + 6) == 0) {
      puVar4 = FUN_00494b90(param_1[1],0x3f8);
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *param_1;
        param_1[4] = puVar4 + 2;
        *param_1 = puVar4;
        *(undefined2 *)(param_1 + 6) = 0x3f;
        goto LAB_004a7083;
      }
      puVar4 = (undefined4 *)0x0;
    }
    else {
LAB_004a7083:
      puVar4 = (undefined4 *)param_1[4];
      *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + -1;
      param_1[4] = puVar4 + 4;
    }
    *puVar2 = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
LAB_004a70b2:
      iVar5 = FUN_00489a60((int)puVar3);
      puVar4[3] = iVar5;
    }
    *(byte *)((int)param_1 + 0x1a) = *(byte *)((int)param_1 + 0x1a) | 1;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  *(char *)((int)param_1 + 0x1b) = param_2;
LAB_004a70d6:
  iVar5 = param_1[5];
joined_r0x004a70db:
  if (iVar5 == 0) {
    return 0;
  }
  puVar3 = *(uint **)(iVar5 + 0xc);
joined_r0x004a70e8:
  do {
    if (puVar3 == (uint *)0x0) break;
    uVar1 = puVar3[1];
    if ((int)uVar1 <= param_4) {
      if (((int)uVar1 < param_4) || (*puVar3 < param_3)) {
        puVar3 = (uint *)puVar3[2];
        goto joined_r0x004a70e8;
      }
      if (((int)uVar1 < param_4) || (((int)uVar1 <= param_4 && (*puVar3 <= param_3)))) {
        return 1;
      }
    }
    puVar3 = (uint *)puVar3[3];
  } while( true );
  iVar5 = *(int *)(iVar5 + 8);
  goto joined_r0x004a70db;
}


/* FUN_004a7140 @ 004a7140  kind=lib  attributed-by=lib-island  size=938 */

int __cdecl FUN_004a7140(int *param_1,int param_2,int *param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  bool bVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  int *extraout_ECX;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  iVar3 = *param_1;
  local_10 = 0;
  local_18 = *(int *)(iVar3 + 0x54);
  local_14 = -1;
  if (*(int *)(iVar3 + 0x84) == 0) {
    *(undefined4 *)(iVar3 + 0xe0) = 0;
  }
  param_1[3] = 0;
  param_1[0x7e] = param_2;
  local_8 = (int *)FUN_004a0350(0x64c);
  if (local_8 == (int *)0x0) {
    *(undefined1 *)(iVar3 + 0x38) = 1;
    return 7;
  }
  *local_8 = -1;
  uVar1 = *(undefined1 *)(iVar3 + 0xea);
  if (*(int *)(iVar3 + 0x104) != 0) {
    *(undefined1 *)(iVar3 + 0xea) = 1;
  }
  cVar2 = *(char *)(iVar3 + 0x38);
  iVar10 = 0;
  while( true ) {
    if ((cVar2 != '\0') || (pbVar8 = (byte *)(param_2 + iVar10), *pbVar8 == 0)) goto LAB_004a72a7;
    param_1[0x84] = (int)pbVar8;
    uVar9 = FUN_0049cb70(pbVar8,&local_1c);
    iVar4 = local_1c;
    local_c = iVar10 + uVar9;
    param_1[0x85] = uVar9;
    if (local_18 < local_c) break;
    if (local_1c == 1) {
      param_1[0x7e] = local_c + param_2;
LAB_004a723b:
      FUN_004a3440(local_8,local_1c,param_1[0x84],param_1[0x85],(int)param_1);
      local_14 = iVar4;
      iVar10 = local_c;
      if (param_1[3] != 0) goto LAB_004a72a7;
    }
    else {
      if (local_1c == 0x94) {
        FUN_00494b00(iVar3,(undefined4 *)*param_3);
        iVar10 = FUN_004a02d0(iVar3,(byte *)"unrecognized token: \"%T\"");
        bVar7 = true;
        *param_3 = iVar10;
        local_10 = 1;
        iVar10 = local_c;
        goto LAB_004a72a9;
      }
      if (local_1c != 0x95) goto LAB_004a723b;
      if (*(int *)(iVar3 + 0xe0) != 0) {
        FUN_004962b0(param_1,(byte *)"interrupt");
        param_1[3] = 9;
        iVar10 = local_c;
        goto LAB_004a72a7;
      }
    }
    cVar2 = *(char *)(iVar3 + 0x38);
    iVar10 = local_c;
  }
  param_1[3] = 0x12;
  iVar10 = local_c;
LAB_004a72a7:
  bVar7 = false;
LAB_004a72a9:
  if (((*(char *)(iVar10 + param_2) == '\0') && (!bVar7)) && (param_1[3] == 0)) {
    if (local_14 != 1) {
      FUN_004a3440(local_8,1,param_1[0x84],param_1[0x85],(int)param_1);
      param_1[0x7e] = iVar10 + param_2;
    }
    FUN_004a3440(local_8,0,param_1[0x84],param_1[0x85],(int)param_1);
  }
  FUN_004a3580(local_8,FUN_00466dd0);
  *(undefined1 *)(iVar3 + 0xea) = uVar1;
  if (*(char *)(iVar3 + 0x38) != '\0') {
    param_1[3] = 7;
  }
  uVar9 = param_1[3];
  if (((uVar9 != 0) && (uVar9 != 0x65)) && (param_1[1] == 0)) {
    FUN_004961c0(uVar9);
    FUN_004a9a30(extraout_ECX,iVar3,&DAT_0056de50);
  }
  if (param_1[1] != 0) {
    *param_3 = param_1[1];
    FUN_004683f0(param_1[3],&DAT_0056de50);
    local_10 = local_10 + 1;
    param_1[1] = 0;
  }
  if (((int *)param_1[2] != (int *)0x0) && (0 < param_1[0x11])) {
    if (*(char *)((int)param_1 + 0x12) != '\0') goto LAB_004a73bc;
    FUN_004af250((int *)param_1[2]);
    param_1[2] = 0;
  }
  if (*(char *)((int)param_1 + 0x12) == '\0') {
    FUN_00494b00(iVar3,(undefined4 *)param_1[0x6a]);
    param_1[0x6a] = 0;
    param_1[0x69] = 0;
  }
LAB_004a73bc:
  FUN_00466dd0(param_1[0x88]);
  if (*(char *)((int)param_1 + 0x1d5) == '\0') {
    FUN_00495300(iVar3,(undefined4 *)param_1[0x7f]);
  }
  puVar5 = (undefined4 *)param_1[0x80];
  if (puVar5 != (undefined4 *)0x0) {
    FUN_00495480(iVar3,(undefined4 *)puVar5[7]);
    FUN_00494b00(iVar3,(undefined4 *)*puVar5);
    FUN_00494b00(iVar3,(undefined4 *)puVar5[1]);
    FUN_00498790(iVar3,(undefined4 *)puVar5[3]);
    FUN_0049d910(iVar3,(int *)puVar5[4]);
    FUN_00494b00(iVar3,puVar5);
  }
  iVar10 = param_1[0x74];
  while (iVar10 = iVar10 + -1, -1 < iVar10) {
    FUN_00494b00(iVar3,*(undefined4 **)(param_1[0x7b] + iVar10 * 4));
  }
  FUN_00494b00(iVar3,(undefined4 *)param_1[0x7b]);
  FUN_00494b00(iVar3,(undefined4 *)param_1[0x7d]);
  iVar10 = param_1[0x6b];
  while (iVar10 != 0) {
    piVar6 = (int *)param_1[0x6b];
    param_1[0x6b] = *piVar6;
    FUN_00494b00(iVar3,piVar6);
    iVar10 = param_1[0x6b];
  }
  iVar10 = param_1[0x89];
  while (iVar10 != 0) {
    puVar5 = (undefined4 *)param_1[0x89];
    param_1[0x89] = puVar5[0x11];
    FUN_00495300(iVar3,puVar5);
    iVar10 = param_1[0x89];
  }
  if ((0 < local_10) && (param_1[3] == 0)) {
    param_1[3] = 1;
    return local_10;
  }
  return local_10;
}


/* FUN_004a74f0 @ 004a74f0  kind=lib  attributed-by=lib-string  size=858 */

uint __cdecl FUN_004a74f0(int *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  char *pcVar11;
  uint local_14;
  int local_10;
  uint local_c;
  int *local_8;
  
  local_10 = 0;
  if (*(char *)(param_2 + 0x36) == '\0') {
    pcVar11 = "cannot VACUUM from within a transaction";
  }
  else {
    if (*(int *)(param_2 + 0x84) < 2) {
      uVar1 = *(uint *)(param_2 + 0x18);
      uVar2 = *(undefined4 *)(param_2 + 0x48);
      *(uint *)(param_2 + 0x18) = uVar1 & 0xfffaffff | 0x100500;
      uVar3 = *(undefined4 *)(param_2 + 0x4c);
      uVar4 = *(undefined4 *)(param_2 + 0x98);
      *(undefined4 *)(param_2 + 0x98) = 0;
      local_8 = *(int **)(*(int *)(param_2 + 0x10) + 4);
      iVar9 = *(int *)(param_2 + 0x14);
      local_14 = (uint)*(byte *)(*(int *)local_8[1] + 0xe);
      pcVar11 = "ATTACH \':memory:\' AS vacuum_db;";
      if (*(char *)(param_2 + 0x37) != '\x02') {
        pcVar11 = "ATTACH \'\' AS vacuum_db;";
      }
      uVar8 = FUN_00477530(param_2,param_1,(int *)pcVar11);
      iVar5 = *(int *)(param_2 + 0x14);
      if (iVar9 < iVar5) {
        local_10 = *(int *)(param_2 + 0x10) + -0x10 + iVar5 * 0x10;
      }
      piVar10 = local_8;
      if (uVar8 == 0) {
        piVar6 = *(int **)(*(int *)(param_2 + 0x10) + -0xc + iVar5 * 0x10);
        FUN_0048f290(piVar6);
        piVar10 = local_8;
        local_c = FUN_0048fee0(local_8);
        uVar8 = FUN_00477530(param_2,param_1,(int *)"PRAGMA vacuum_db.synchronous=OFF");
        if (((uVar8 == 0) && (uVar8 = FUN_00477530(param_2,param_1,(int *)"BEGIN;"), uVar8 == 0)) &&
           (uVar8 = FUN_0048ed50(piVar10,2), uVar8 == 0)) {
          if (*(char *)(*(int *)piVar10[1] + 5) == '\x05') {
            *(undefined4 *)(param_2 + 0x40) = 0;
          }
          iVar9 = FUN_00491c00(piVar6,*(uint *)(piVar10[1] + 0x20),local_c,0);
          if (((iVar9 == 0) &&
              ((local_14 != 0 ||
               (iVar9 = FUN_00491c00(piVar6,*(uint *)(param_2 + 0x40),local_c,0), iVar9 == 0)))) &&
             (*(char *)(param_2 + 0x38) == '\0')) {
            cVar7 = *(char *)(param_2 + 0x3a);
            if (cVar7 < '\0') {
              cVar7 = FUN_0048fe00(piVar10);
            }
            FUN_00491ab0(piVar6,cVar7);
            uVar8 = FUN_004773d0(param_2,param_1,
                                 "SELECT \'CREATE TABLE vacuum_db.\' || substr(sql,14)   FROM sqlite_master WHERE type=\'table\' AND name!=\'sqlite_sequence\'   AND rootpage>0"
                                );
            if (((uVar8 == 0) &&
                (uVar8 = FUN_004773d0(param_2,param_1,
                                      "SELECT \'CREATE INDEX vacuum_db.\' || substr(sql,14)  FROM sqlite_master WHERE sql LIKE \'CREATE INDEX %\' "
                                     ), uVar8 == 0)) &&
               ((uVar8 = FUN_004773d0(param_2,param_1,
                                      "SELECT \'CREATE UNIQUE INDEX vacuum_db.\' || substr(sql,21)   FROM sqlite_master WHERE sql LIKE \'CREATE UNIQUE INDEX %\'"
                                     ), uVar8 == 0 &&
                ((((uVar8 = FUN_004773d0(param_2,param_1,
                                         "SELECT \'INSERT INTO vacuum_db.\' || quote(name) || \' SELECT * FROM main.\' || quote(name) || \';\'FROM main.sqlite_master WHERE type = \'table\' AND name!=\'sqlite_sequence\'   AND rootpage>0"
                                        ), uVar8 == 0 &&
                   (uVar8 = FUN_004773d0(param_2,param_1,
                                         "SELECT \'DELETE FROM vacuum_db.\' || quote(name) || \';\' FROM vacuum_db.sqlite_master WHERE name=\'sqlite_sequence\' "
                                        ), uVar8 == 0)) &&
                  (uVar8 = FUN_004773d0(param_2,param_1,
                                        "SELECT \'INSERT INTO vacuum_db.\' || quote(name) || \' SELECT * FROM main.\' || quote(name) || \';\' FROM vacuum_db.sqlite_master WHERE name==\'sqlite_sequence\';"
                                       ), uVar8 == 0)) &&
                 (uVar8 = FUN_00477530(param_2,param_1,
                                       (int *)
                                       "INSERT INTO vacuum_db.sqlite_master   SELECT type, name, tbl_name, rootpage, sql    FROM main.sqlite_master   WHERE type=\'view\' OR type=\'trigger\'      OR (type=\'table\' AND rootpage=0)"
                                      ), uVar8 == 0)))))) {
              iVar9 = 0;
              do {
                FUN_0048fe70(local_8,(uint)(byte)(&DAT_00569b44)[iVar9],&local_14);
                uVar8 = FUN_00492040(piVar6,(uint)(byte)(&DAT_00569b44)[iVar9],
                                     (byte)(&DAT_00569b45)[iVar9] + local_14);
                piVar10 = local_8;
                if (uVar8 != 0) goto LAB_004a77ea;
                iVar9 = iVar9 + 2;
              } while (iVar9 < 8);
              uVar8 = FUN_0048f420(local_8,piVar6);
              if ((uVar8 == 0) && (uVar8 = FUN_0048f290(piVar6), uVar8 == 0)) {
                cVar7 = FUN_0048fe00(piVar6);
                FUN_00491ab0(piVar10,cVar7);
                uVar8 = FUN_00491c00(piVar10,*(uint *)(piVar6[1] + 0x20),local_c,1);
              }
            }
          }
          else {
            uVar8 = 7;
          }
        }
      }
LAB_004a77ea:
      *(uint *)(param_2 + 0x18) = uVar1;
      *(undefined4 *)(param_2 + 0x48) = uVar2;
      *(undefined4 *)(param_2 + 0x4c) = uVar3;
      *(undefined4 *)(param_2 + 0x98) = uVar4;
      FUN_00491c00(piVar10,0xffffffff,0xffffffff,1);
      iVar9 = local_10;
      *(undefined1 *)(param_2 + 0x36) = 1;
      if (local_10 != 0) {
        FUN_0048f070(*(int **)(local_10 + 4));
        *(undefined4 *)(iVar9 + 4) = 0;
        *(undefined4 *)(iVar9 + 0xc) = 0;
      }
      FUN_004a6940(param_2);
      return uVar8;
    }
    pcVar11 = "cannot VACUUM - SQL statements in progress";
  }
  FUN_004a9a30(param_1,param_2,(byte *)pcVar11);
  return 1;
}


/* FUN_004a7850 @ 004a7850  kind=lib  attributed-by=lib-island  size=113 */

undefined4 __cdecl FUN_004a7850(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    FUN_004683f0(0x15,"API call with %s database connection pointer");
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x44);
  if (iVar1 != -0x5fd65969) {
    if ((iVar1 != 0x4b771290) && (iVar1 != -0xfc486fa)) {
      FUN_004683f0(0x15,"API call with %s database connection pointer");
      return 0;
    }
    FUN_004683f0(0x15,"API call with %s database connection pointer");
    return 0;
  }
  return 1;
}


/* FUN_004a78d0 @ 004a78d0  kind=lib  attributed-by=lib-island  size=136 */

void __cdecl FUN_004a78d0(int *param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)FUN_004a0d40(*param_1,param_3);
  if (piVar1 == (int *)0x0) {
    return;
  }
  piVar2 = (int *)param_1[2];
  if (piVar2 == (int *)0x0) {
    piVar2 = FUN_004af150(*param_1);
    param_1[2] = (int)piVar2;
    if (piVar2 == (int *)0x0) goto LAB_004a7948;
    FUN_004ae760(piVar2,0x94);
  }
  iVar3 = FUN_0048d4b0(param_1,0x20,(&PTR_s_BEGIN_005695b0)[param_2],piVar1,0);
  if (iVar3 == 0) {
    FUN_004ae8f0(piVar2,0x21,param_2,0,0,piVar1,0xffffffff);
    return;
  }
LAB_004a7948:
  FUN_00494b00(*param_1,piVar1);
  return;
}


/* FUN_004a7960 @ 004a7960  kind=lib  attributed-by=lib-island  size=287 */

void __cdecl FUN_004a7960(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 local_24;
  undefined8 local_1c;
  undefined8 local_14;
  undefined8 local_c;
  
  local_24 = *(undefined8 *)(param_1 + 8);
  local_1c = *(undefined8 *)(param_1 + 0x10);
  local_14 = *(undefined8 *)(param_1 + 0x28);
  local_c = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  FUN_0049d5c0((undefined4 *)(param_1 + 0x18));
  for (puVar2 = (undefined4 *)local_c; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2)
  {
    piVar1 = (int *)puVar2[2];
    if (piVar1 != (int *)0x0) {
      FUN_00495480(0,(undefined4 *)piVar1[7]);
      FUN_00466dd0(*piVar1);
      FUN_00466dd0(piVar1[1]);
      FUN_00498790(0,(undefined4 *)piVar1[3]);
      FUN_0049d910(0,(int *)piVar1[4]);
      FUN_00466dd0((int)piVar1);
    }
  }
  FUN_0049d5c0((undefined4 *)&local_14);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  for (puVar2 = (undefined4 *)local_1c; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2)
  {
    FUN_00495300(0,(undefined4 *)puVar2[2]);
  }
  FUN_0049d5c0((undefined4 *)&local_24);
  FUN_0049d5c0((undefined4 *)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x48) = 0;
  if ((*(ushort *)(param_1 + 0x4e) & 1) != 0) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    *(ushort *)(param_1 + 0x4e) = *(ushort *)(param_1 + 0x4e) & 0xfffe;
  }
  return;
}


/* FUN_004a7a80 @ 004a7a80  kind=lib  attributed-by=lib-island  size=284 */

void * __cdecl FUN_004a7a80(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  
  if (param_2 == (undefined4 *)0x0) {
    pvVar3 = (void *)FUN_004a0350(0x54);
    if (pvVar3 == (void *)0x0) goto LAB_004a7b11;
    memset(pvVar3,0,0x54);
  }
  else {
    iVar2 = param_2[1];
    FUN_0048fbc0(param_2);
    if (*(int *)(iVar2 + 0x30) == 0) {
      pvVar3 = (void *)FUN_004a0350(0x54);
      if (pvVar3 != (void *)0x0) {
        memset(pvVar3,0,0x54);
      }
      *(void **)(iVar2 + 0x30) = pvVar3;
      *(code **)(iVar2 + 0x34) = FUN_004a7960;
    }
    if (*(char *)((int)param_2 + 9) != '\0') {
      piVar1 = param_2 + 3;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        if (*(int *)(param_2[1] + 0x38) != 0) {
          (*DAT_00582b20)(*(int *)(param_2[1] + 0x38));
        }
        *(undefined1 *)((int)param_2 + 10) = 0;
      }
    }
    pvVar3 = *(void **)(iVar2 + 0x30);
  }
  if (pvVar3 != (void *)0x0) {
    if (*(char *)((int)pvVar3 + 0x4c) == '\0') {
      *(undefined4 *)((int)pvVar3 + 0x10) = 0;
      *(undefined4 *)((int)pvVar3 + 0xc) = 0;
      *(undefined4 *)((int)pvVar3 + 8) = 0;
      *(undefined4 *)((int)pvVar3 + 0x14) = 0;
      *(undefined4 *)((int)pvVar3 + 0x20) = 0;
      *(undefined4 *)((int)pvVar3 + 0x1c) = 0;
      *(undefined4 *)((int)pvVar3 + 0x18) = 0;
      *(undefined4 *)((int)pvVar3 + 0x24) = 0;
      *(undefined4 *)((int)pvVar3 + 0x30) = 0;
      *(undefined4 *)((int)pvVar3 + 0x2c) = 0;
      *(undefined4 *)((int)pvVar3 + 0x28) = 0;
      *(undefined4 *)((int)pvVar3 + 0x34) = 0;
      *(undefined4 *)((int)pvVar3 + 0x40) = 0;
      *(undefined4 *)((int)pvVar3 + 0x3c) = 0;
      *(undefined4 *)((int)pvVar3 + 0x38) = 0;
      *(undefined4 *)((int)pvVar3 + 0x44) = 0;
      *(undefined1 *)((int)pvVar3 + 0x4d) = 1;
    }
    return pvVar3;
  }
LAB_004a7b11:
  *(undefined1 *)(param_1 + 0x38) = 1;
  return (void *)0x0;
}


/* FUN_004a7ba0 @ 004a7ba0  kind=lib  attributed-by=lib-island  size=54 */

int __cdecl FUN_004a7ba0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 == 0) {
    return -1000000;
  }
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    piVar2 = (int *)(*(int *)(param_1 + 0x10) + 0xc);
    do {
      if (*piVar2 == param_2) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 4;
    } while (iVar1 < *(int *)(param_1 + 0x14));
  }
  return iVar1;
}


/* FUN_004a7be0 @ 004a7be0  kind=lib  attributed-by=lib-island  size=297 */

void __cdecl FUN_004a7be0(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    if ((param_1 < DAT_00582b70) || (DAT_00583f58 <= param_1)) {
      if (DAT_00582ac8 == 0) {
        (*DAT_00582aec)(param_1);
      }
      else {
        iVar1 = (*DAT_00582af0._4_4_)(param_1);
        if (DAT_00583f40 != 0) {
          (*DAT_00582b18)(DAT_00583f40);
        }
        DAT_00583e28 = DAT_00583e28 - iVar1;
        if (DAT_00583e50 < DAT_00583e28) {
          DAT_00583e50 = DAT_00583e28;
        }
        DAT_00583e18 = DAT_00583e18 - iVar1;
        if (DAT_00583e40 < DAT_00583e18) {
          DAT_00583e40 = DAT_00583e18;
        }
        DAT_00583e3c = DAT_00583e3c + -1;
        if (DAT_00583e64 < DAT_00583e3c) {
          DAT_00583e64 = DAT_00583e3c;
        }
        (*DAT_00582aec)(param_1);
        if (DAT_00583f40 != 0) {
                    /* WARNING: Could not recover jumptable at 0x004a7cf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*DAT_00582b20)();
          return;
        }
      }
    }
    else {
      if (DAT_00583f40 != 0) {
        (*DAT_00582b18)(DAT_00583f40);
      }
      *param_1 = DAT_00583f5c;
      DAT_00583f60 = DAT_00583f60 + 1;
      DAT_00583e24 = DAT_00583e24 + -1;
      if (DAT_00583e4c < DAT_00583e24) {
        DAT_00583e4c = DAT_00583e24;
      }
      DAT_00583f5c = param_1;
      if (DAT_00583f40 != 0) {
                    /* WARNING: Could not recover jumptable at 0x004a7c53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*DAT_00582b20)();
        return;
      }
    }
  }
  return;
}


/* FUN_004a7d10 @ 004a7d10  kind=lib  attributed-by=lib-island  size=280 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __cdecl FUN_004a7d10(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *local_8;
  
  if (DAT_00583f40 != 0) {
    (*DAT_00582b18)(DAT_00583f40);
  }
  puVar2 = DAT_00583f5c;
  if ((DAT_00583f60 != 0) && (param_1 <= DAT_00582b74)) {
    DAT_00583f60 = DAT_00583f60 + -1;
    _DAT_00583e38 = param_1;
    DAT_00583f5c = (undefined4 *)*DAT_00583f5c;
    DAT_00583e24 = DAT_00583e24 + 1;
    if (DAT_00583e4c < DAT_00583e24) {
      DAT_00583e4c = DAT_00583e24;
    }
    if (DAT_00583e60 < param_1) {
      DAT_00583e60 = param_1;
    }
    if (DAT_00583f40 != 0) {
      (*DAT_00582b20)(DAT_00583f40);
    }
    return puVar2;
  }
  if (DAT_00582ac8 == 0) {
    if (DAT_00583f40 != 0) {
      (*DAT_00582b20)(DAT_00583f40);
    }
    puVar2 = (undefined4 *)(*DAT_00582ae8)(param_1);
    return puVar2;
  }
  if (DAT_00583e60 < param_1) {
    DAT_00583e60 = param_1;
  }
  _DAT_00583e38 = param_1;
  uVar1 = FUN_00480650(param_1,(int *)&local_8);
  if ((local_8 != (undefined4 *)0x0) &&
     (DAT_00583e28 = DAT_00583e28 + uVar1, DAT_00583e50 < DAT_00583e28)) {
    DAT_00583e50 = DAT_00583e28;
  }
  if (DAT_00583f40 != 0) {
    (*DAT_00582b20)(DAT_00583f40);
  }
  return local_8;
}


/* FUN_004a7e30 @ 004a7e30  kind=lib  attributed-by=lib-island  size=6161 */

void __cdecl FUN_004a7e30(int *param_1,int *param_2,byte *param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined1 *puVar7;
  int *piVar8;
  undefined2 *puVar9;
  uint uVar10;
  byte *pbVar11;
  short *psVar12;
  int *piVar13;
  ushort in_FPUControlWord;
  size_t sVar14;
  undefined8 local_ec;
  longlong local_e4;
  undefined8 local_dc;
  undefined8 local_d4;
  byte local_cc;
  undefined1 local_cb;
  int local_c8;
  int local_c4;
  int local_c0;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_94;
  uint local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  uint local_78;
  uint local_74;
  int *local_70;
  int *local_6c;
  int *local_68;
  int local_64;
  int *local_60;
  int *local_5c;
  byte *local_58;
  int *local_54;
  int *local_50;
  int *local_4c;
  byte *local_48;
  int *local_44;
  int *local_40;
  int *local_3c;
  uint *local_38;
  int local_34;
  undefined4 local_30;
  undefined1 *local_2c;
  uint *local_28;
  int local_24;
  byte *local_20;
  short *local_1c;
  undefined2 local_18 [2];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_58 = param_3;
  local_c0 = param_1[0x79];
  iVar6 = *param_1;
  param_1[0x79] = param_1[0x7a];
  local_50 = param_1;
  local_6c = param_2;
  local_20 = (byte *)0x1;
  param_1[0x7a] = param_1[0x7a] + 1;
  local_34 = iVar6;
  if ((((param_2 == (int *)0x0) || (*(char *)(iVar6 + 0x38) != '\0')) || (param_1[0x11] != 0)) ||
     (iVar3 = FUN_0048d4b0(param_1,0x15,0,0,0), iVar3 != 0)) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  local_b4 = 0;
  local_ac = 0;
  local_a4 = 0;
  local_9c = 0;
  local_94 = 0;
  if (*local_58 < 5) {
    FUN_00499060(iVar6,(int *)param_2[0xe]);
    *(ushort *)((int)param_2 + 6) = *(ushort *)((int)param_2 + 6) & 0xfffe;
    param_2[0xe] = 0;
  }
  FUN_004a99a0(param_1,param_2,0);
  local_38 = (uint *)param_2[0xe];
  local_3c = (int *)*param_2;
  local_1c = (short *)param_2[10];
  if ((param_1[0x11] != 0) || (*(char *)(iVar6 + 0x38) != '\0')) goto LAB_004a95e5;
  local_40 = (int *)(*(ushort *)((int)param_2 + 6) >> 2 & 1);
  piVar4 = FUN_0049d4d0(param_1);
  iVar6 = local_34;
  local_44 = piVar4;
  if (piVar4 == (int *)0x0) goto LAB_004a95e5;
  if ((1 < *local_3c) && ((*local_58 == 6 || (*local_58 == 7)))) {
    FUN_004962b0(param_1,(byte *)
                         "only a single result allowed for a SELECT that is part of an expression");
    iVar6 = local_34;
    goto LAB_004a95e5;
  }
  local_28 = (uint *)0x0;
  iVar3 = param_2[0xf];
  piVar13 = param_1;
  param_1 = local_50;
  psVar12 = local_1c;
  for (; (local_50 = param_1, local_34 = iVar6, iVar3 == 0 && ((int)local_28 < (int)*psVar12));
      local_28 = (uint *)((int)local_28 + 1)) {
    local_24 = (int)local_28 * 9;
    local_4c = *(int **)(psVar12 + (int)local_28 * 0x24 + 0xe);
    if (local_4c != (int *)0x0) {
      if (*(int *)(psVar12 + (int)local_28 * 0x24 + 0x10) == 0) {
        iVar6 = FUN_004a97a0(param_2);
        param_1[0x78] = param_1[0x78] + iVar6;
        local_54 = (int *)(*(ushort *)((int)local_4c + 6) >> 2 & 1);
        iVar3 = FUN_0047b730(param_1,param_2,(int)local_28,(int)local_40,(int)local_54);
        iVar6 = local_24;
        if (iVar3 == 0) {
          if (((*local_1c == 1) && ((*(ushort *)((int)param_2 + 6) & 0x100) == 0)) &&
             ((*(ushort *)(local_34 + 0x34) & 0x100) == 0)) {
            param_1[0x13] = param_1[0x13] + 1;
            *(int *)(local_1c + local_24 * 4 + 0x12) = param_1[0x13];
            param_1[0x13] = param_1[0x13] + 1;
            iVar3 = param_1[0x13];
            FUN_00493400(local_50,-1);
            FUN_004ae760(piVar4,1);
            uVar10 = FUN_004ae7d0(piVar4,0x2c,*(undefined4 *)(local_1c + iVar6 * 4 + 0x1a));
            FUN_004aee30((int)piVar4,1);
            *(uint *)(local_1c + local_24 * 4 + 0x10) = uVar10;
            FUN_004ae830(piVar4,7,0,iVar3);
            FUN_004aee30((int)piVar4,1);
            local_14 = *(undefined4 *)(local_1c + local_24 * 4 + 0x12);
            local_18[0] = 10;
            local_10 = 0;
            local_c = 0;
            *(char *)(local_1c + local_24 * 4 + 0x18) = (char)local_50[0x7a];
            FUN_004a7e30(local_50,local_4c,(byte *)local_18);
            local_30 = CONCAT22(in_FPUControlWord,(undefined2)local_30);
            local_54 = (int *)(in_FPUControlWord | 0xc00);
            local_bc = (longlong)ROUND(*(double *)(local_4c + 8));
            *(undefined4 *)(*(int *)(local_1c + local_24 * 4 + 0xc) + 0x1c) = (undefined4)local_bc;
            *(uint *)(local_1c + local_24 * 4 + 0x16) =
                 *(uint *)(local_1c + local_24 * 4 + 0x16) | 4;
            FUN_004aec80((int)piVar4,uVar10,local_10);
            FUN_004aeca0((int)piVar4,uVar10,local_c);
            FUN_004ae830(piVar4,7,1,iVar3);
            FUN_004ae7d0(piVar4,4,*(undefined4 *)(local_1c + local_24 * 4 + 0x12));
            FUN_004b6720((int)piVar4,uVar10 - 1);
            param_2 = local_6c;
            param_1 = local_50;
          }
          else {
            local_60 = (int *)0x0;
            iVar6 = param_1[0x13] + 1;
            param_1[0x13] = iVar6;
            *(int *)(local_1c + local_24 * 4 + 0x12) = iVar6;
            local_5c = (int *)FUN_004ae830(piVar4,7,0,iVar6);
            *(uint *)(local_1c + local_24 * 4 + 0x10) = (int)local_5c + 1;
            if ((*(byte *)(local_1c + local_24 * 4 + 0x16) & 2) == 0) {
              local_60 = (int *)FUN_00492ce0(param_1);
            }
            local_14 = *(undefined4 *)(local_1c + local_24 * 4 + 0x1a);
            local_18[0] = 9;
            local_10 = 0;
            local_c = 0;
            *(char *)(local_1c + local_24 * 4 + 0x18) = (char)param_1[0x7a];
            FUN_004a7e30(param_1,local_4c,(byte *)local_18);
            local_30 = CONCAT22(in_FPUControlWord,(undefined2)local_30);
            local_54 = (int *)(in_FPUControlWord | 0xc00);
            local_bc = (longlong)ROUND(*(double *)(local_4c + 8));
            *(undefined4 *)(*(int *)(local_1c + local_24 * 4 + 0xc) + 0x1c) = (undefined4)local_bc;
            if (local_60 != (int *)0x0) {
              FUN_004b6720((int)piVar4,(uint)local_60);
            }
            iVar6 = FUN_004ae7d0(piVar4,3,*(undefined4 *)(local_1c + local_24 * 4 + 0x12));
            FUN_004aec60((int)piVar4,(uint)local_5c,iVar6);
          }
          param_1[0xf] = 0;
          *(undefined1 *)((int)param_1 + 0x13) = 0;
        }
        else {
          if (local_54 != (int *)0x0) {
            *(ushort *)((int)param_2 + 6) = *(ushort *)((int)param_2 + 6) | 4;
            local_40 = (int *)0x1;
          }
          local_28 = (uint *)0xffffffff;
        }
        iVar6 = local_34;
        if (*(char *)(local_34 + 0x38) != '\0') goto LAB_004a95e5;
        iVar6 = FUN_004a97a0(param_2);
        param_1[0x78] = param_1[0x78] - iVar6;
        psVar12 = (short *)param_2[10];
        local_1c = psVar12;
        if (4 < *local_58) {
          local_38 = (uint *)param_2[0xe];
        }
      }
      else if ((*(byte *)(psVar12 + (int)local_28 * 0x24 + 0x16) & 4) == 0) {
        FUN_004ae830(piVar4,2,*(undefined4 *)(psVar12 + (int)local_28 * 0x24 + 0x12),
                     *(undefined4 *)(psVar12 + (int)local_28 * 0x24 + 0x10));
        psVar12 = local_1c;
      }
    }
    iVar3 = param_2[0xf];
    piVar13 = param_1;
    param_1 = local_50;
    iVar6 = local_34;
  }
  local_3c = (int *)*param_2;
  local_28 = (uint *)param_2[0xc];
  local_48 = (byte *)param_2[0xb];
  local_60 = (int *)param_2[0xd];
  local_cc = *(byte *)((int)param_2 + 6) & 1;
  local_30 = CONCAT13(*(byte *)((int)param_2 + 6),(undefined3)local_30) & 0x1ffffff;
  if (param_2[0xf] != 0) {
    if (param_2[0x11] == 0) {
      iVar3 = 0;
      piVar4 = param_2;
      piVar8 = (int *)0x0;
      do {
        piVar5 = piVar4;
        piVar5[0x10] = (int)piVar8;
        piVar5[0x11] = (int)param_2;
        iVar3 = iVar3 + 1;
        piVar4 = (int *)piVar5[0xf];
        piVar8 = piVar5;
      } while ((int *)piVar5[0xf] != (int *)0x0);
      if ((*(int *)(iVar6 + 0x60) != 0) && (*(int *)(iVar6 + 0x60) < iVar3)) {
        FUN_004962b0(piVar13,(byte *)"too many terms in compound SELECT");
        param_1 = piVar13;
        goto LAB_004a95e5;
      }
    }
    FUN_00480e10(piVar13,param_2,(char *)local_58);
    piVar13[0x79] = local_c0;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar6 = FUN_00498fe0((int *)local_28,(int *)local_38);
  if ((iVar6 == 0) && ((*(byte *)(local_34 + 0x34) & 4) == 0)) {
    local_38 = (uint *)0x0;
  }
  if (((*(byte *)((int)param_2 + 6) & 5) == 1) &&
     (iVar6 = FUN_00498fe0((int *)local_38,(int *)*param_2), iVar6 == 0)) {
    *(ushort *)((int)param_2 + 6) = *(ushort *)((int)param_2 + 6) & 0xfffe;
    local_28 = (uint *)FUN_00499140(local_34,(int *)*param_2,0);
    param_2[0xc] = (int)local_28;
    local_38 = (uint *)0x0;
LAB_004a83b3:
    local_2c = (undefined1 *)0xffffffff;
  }
  else {
    if (local_38 == (uint *)0x0) goto LAB_004a83b3;
    piVar8 = FUN_0047f5f0(piVar13,local_38);
    local_38[1] = piVar13[0x12];
    piVar13[0x12] = piVar13[0x12] + 1;
    local_2c = (undefined1 *)FUN_004ae8f0(piVar4,0x2a,local_38[1],*local_38 + 2,0,piVar8,0xfffffff0)
    ;
    param_2[6] = (int)local_2c;
  }
  if (*local_58 == 9) {
    FUN_004ae830(piVar4,0x2a,*(undefined4 *)(local_58 + 4),*local_3c);
  }
  iVar6 = FUN_004b6b80(piVar4);
  local_bc = CONCAT44(iVar6,(undefined4)local_bc);
  param_2[8] = 0;
  param_2[9] = 0x43e00000;
  puVar7 = (undefined1 *)FUN_004754f0(piVar13,(int)param_2,iVar6);
  if ((param_2[2] == 0) && (puVar7 = local_2c, -1 < (int)local_2c)) {
    puVar7 = FUN_004b6050(piVar4,(int)local_2c);
    *puVar7 = 0x2b;
    *(ushort *)((int)param_2 + 6) = *(ushort *)((int)param_2 + 6) | 0x40;
  }
  if ((*(byte *)((int)param_2 + 6) & 1) == 0) {
    local_4c = (int *)((uint)puVar7 & 0xffffff00);
  }
  else {
    iVar6 = piVar13[0x12];
    sVar14 = 0xfffffff0;
    piVar13[0x12] = iVar6 + 1;
    local_c8 = iVar6;
    piVar8 = FUN_0047f5f0(piVar13,(uint *)*local_6c);
    local_c4 = FUN_004ae8f0(piVar4,0x2a,iVar6,0,0,piVar8,sVar14);
    FUN_004aee30((int)piVar4,8);
    local_4c = (int *)0x3;
    param_2 = local_6c;
  }
  local_cb = SUB41(local_4c,0);
  if ((local_40 == (int *)0x0) && (local_28 == (uint *)0x0)) {
    if (local_30._3_1_ == '\0') {
      piVar8 = (int *)0x0;
    }
    else {
      piVar8 = (int *)*param_2;
    }
    local_60 = FUN_004bb240(piVar13,local_1c,local_48,(undefined2 *)local_38,piVar8,0,0);
    iVar6 = local_34;
    param_1 = piVar13;
    if (local_60 == (int *)0x0) goto LAB_004a95e5;
    if (*(double *)(local_60 + 0xc) < *(double *)(param_2 + 8)) {
      *(double *)(param_2 + 8) = *(double *)(local_60 + 0xc);
    }
    local_4c = (int *)((uint)local_4c & 0xff);
    if (*(byte *)((int)local_60 + 0xe) != 0) {
      local_4c = (int *)(uint)*(byte *)((int)local_60 + 0xe);
    }
    local_cb = SUB41(local_4c,0);
    if (local_38 != (uint *)0x0) {
      local_44 = (int *)0x0;
      if ((uint)*(ushort *)(local_60 + 2) == *local_38) {
        local_38 = (uint *)0x0;
      }
    }
    if ((-1 < (int)local_2c) && (local_38 == (uint *)0x0)) {
      FUN_004aee50(piVar4,(int)local_2c);
      param_2[6] = -1;
    }
    FUN_0048abe0(piVar13,(int)param_2,local_3c,0,(int *)0x0,(int *)local_38,(int)&local_cc,
                 (char *)local_58,local_60[5],local_60[6]);
    FUN_004bbe40(local_60);
  }
  else {
    local_78 = 0;
    local_2c = (undefined1 *)0x0;
    if (local_28 == (uint *)0x0) {
      param_2[8] = 0;
      param_2[9] = 0x3ff00000;
    }
    else {
      iVar6 = *(int *)*param_2;
      if (0 < iVar6) {
        puVar9 = (undefined2 *)(((int *)*param_2)[2] + 0x10);
        do {
          iVar6 = iVar6 + -1;
          *puVar9 = 0;
          puVar9 = puVar9 + 10;
          piVar4 = local_44;
        } while (0 < iVar6);
      }
      uVar10 = *local_28;
      if (0 < (int)uVar10) {
        puVar9 = (undefined2 *)(local_28[2] + 0x10);
        do {
          uVar10 = uVar10 - 1;
          *puVar9 = 0;
          puVar9 = puVar9 + 10;
        } while (0 < (int)uVar10);
      }
      if (100.0 < *(double *)(param_2 + 8)) {
        param_2[8] = 0;
        param_2[9] = 0x40590000;
      }
    }
    local_84 = FUN_004b6b80(piVar4);
    local_dc = 0;
    local_d4 = 0;
    local_ec = CONCAT44(local_1c,piVar13);
    local_e4 = ZEXT48(&local_b4) << 0x20;
    if (local_28 == (uint *)0x0) {
      local_ac = local_ac & 0xffffffff;
    }
    else {
      local_ac = CONCAT44(*local_28 + 1,(undefined4)local_ac);
    }
    local_a4 = CONCAT44(local_a4._4_4_,local_28);
    FUN_00496610(&local_ec,local_3c);
    FUN_00496610(&local_ec,(int *)local_38);
    if (local_60 != (int *)0x0) {
      FUN_00496680(&local_ec,(int)local_60);
    }
    local_9c = CONCAT44((int)local_9c,(int)local_9c);
    if (0 < local_94._4_4_) {
      iVar6 = 0;
      iVar3 = 0;
      bVar1 = local_d4._4_1_;
      do {
        local_d4 = CONCAT35(local_d4._5_3_,CONCAT14(bVar1,(undefined4)local_d4)) | 0x800000000;
        FUN_00496610(&local_ec,*(int **)(*(int *)(iVar6 + (int)(undefined4 *)local_94) + 0x10));
        bVar1 = local_d4._4_1_ & 0xf7;
        iVar3 = iVar3 + 1;
        local_d4 = local_d4 & 0xfffffff7ffffffff;
        iVar6 = iVar6 + 0x10;
        param_2 = local_6c;
        piVar13 = local_50;
      } while (iVar3 < local_94._4_4_);
    }
    iVar6 = local_34;
    param_1 = piVar13;
    if (*(char *)(local_34 + 0x38) != '\0') goto LAB_004a95e5;
    if (local_28 == (uint *)0x0) {
      local_70 = (int *)0x0;
      local_40 = (int *)FUN_0047f140(param_2,(int)&local_b4);
      if (local_40 == (int *)0x0) {
        local_44 = (int *)0x0;
        cVar2 = FUN_004807d0(param_2);
        local_30 = CONCAT13(cVar2,(undefined3)local_30);
        if (((cVar2 != '\0') &&
            (local_70 = FUN_00499140(local_34,*(int **)(**(int **)(*param_2 + 8) + 0x10),0),
            local_44 = local_70, local_70 != (int *)0x0)) && (*(char *)(local_34 + 0x38) == '\0')) {
          *(bool *)(local_70[2] + 0xc) = local_30._3_1_ != '\x01';
          **(undefined1 **)local_70[2] = 0x98;
        }
        FUN_00488640(piVar13,(int)&local_b4);
        local_44 = FUN_004bb240(piVar13,local_1c,local_48,(undefined2 *)local_44,(int *)0x0,
                                local_30 >> 0x18,0);
        iVar6 = local_34;
        if (local_44 == (int *)0x0) {
          FUN_00499060(local_34,local_70);
          goto LAB_004a95e5;
        }
        FUN_004bdd50(piVar13,(undefined1 *)&local_b4);
        if ((short)local_44[2] != 0) {
          FUN_004ae830(piVar4,1,0,local_44[6]);
        }
        FUN_004bbe40(local_44);
        FUN_00479800((int)piVar13,(int)&local_b4);
      }
      else {
        local_44 = (int *)FUN_004a7ba0(*piVar13,local_40[0x10]);
        local_80 = piVar13[0x12];
        piVar13[0x12] = local_80 + 1;
        local_54 = (int *)local_40[8];
        local_5c = (int *)0x0;
        local_7c = 0;
        FUN_00493400(piVar13,(int)local_44);
        FUN_004aab20(piVar13,(int)local_44,local_40[8],'\0',*local_40);
        iVar6 = local_40[2];
        if (iVar6 != 0) {
          local_7c = 0;
          do {
            if ((*(char *)(iVar6 + 0x2e) == '\0') &&
               ((local_7c == 0 || (*(int *)(iVar6 + 0x24) < *(int *)(local_7c + 0x24))))) {
              local_7c = iVar6;
            }
            iVar6 = *(int *)(iVar6 + 0x14);
          } while (iVar6 != 0);
          param_2 = local_6c;
          if ((local_7c != 0) && (*(int *)(local_7c + 0x24) < (int)*(short *)((int)local_40 + 0x26))
             ) {
            local_54 = *(int **)(local_7c + 0x28);
            local_5c = FUN_0049dbf0(piVar13,local_7c);
          }
        }
        FUN_004ae890(piVar4,0x27,local_80,local_54,local_44);
        if (local_5c != (int *)0x0) {
          local_64 = piVar4[1];
          iVar6 = *piVar4;
          if ((local_64 == 0) || (*(char *)(iVar6 + 0x38) != '\0')) {
            FUN_0047bc80(iVar6,0xfffffff0,local_5c);
          }
          else {
            iVar3 = piVar4[7] + -1;
            FUN_0047bc80(iVar6,(int)*(char *)(local_64 + 1 + iVar3 * 0x14),
                         *(int **)(local_64 + 0x10 + iVar3 * 0x14));
            *(int **)(local_64 + 0x10 + iVar3 * 0x14) = local_5c;
            *(undefined1 *)(local_64 + 1 + iVar3 * 0x14) = 0xfa;
            param_2 = local_6c;
          }
        }
        FUN_004ae830(piVar4,0x20,local_80,*(undefined4 *)((int)(undefined4 *)local_94 + 8));
        FUN_004ae7d0(piVar4,0x2d,local_80);
        FUN_00477b20(piVar13);
      }
      local_38 = (uint *)0x0;
      FUN_004988a0(piVar13,(char *)local_60,local_84,8);
      FUN_0048abe0(piVar13,(int)param_2,(int *)*param_2,0,(int *)0x0,(int *)0x0,0,(char *)local_58,
                   local_84,local_84);
      FUN_00499060(local_34,local_70);
    }
    else {
      local_b4 = CONCAT44(piVar13[0x12],(undefined4)local_b4);
      piVar13[0x12] = piVar13[0x12] + 1;
      local_68 = FUN_0047f5f0(piVar13,local_28);
      local_64 = FUN_004ae8f0(piVar4,0x2b,local_b4._4_4_,local_ac._4_4_,0,local_68,0xfffffff0);
      piVar13[0x13] = piVar13[0x13] + 1;
      local_24 = piVar13[0x13];
      piVar13[0x13] = local_24 + 2;
      local_7c = FUN_004b6b80(piVar4);
      piVar13[0x13] = piVar13[0x13] + 1;
      local_5c = (int *)piVar13[0x13];
      local_80 = FUN_004b6b80(piVar4);
      local_70 = (int *)(piVar13[0x13] + 1);
      iVar6 = piVar13[0x13] + *local_28;
      piVar13[0x13] = iVar6;
      local_40 = (int *)(iVar6 + 1);
      piVar13[0x13] = *local_28 + iVar6;
      FUN_004ae830(piVar4,7,0,local_24 + 1);
      FUN_004ae830(piVar4,7,0,local_24);
      FUN_004ae890(piVar4,10,0,local_70,(*local_28 - 1) + (int)local_70);
      FUN_004ae830(piVar4,2,local_5c,local_80);
      local_54 = FUN_004bb240(piVar13,local_1c,local_48,(undefined2 *)local_28,(int *)0x0,0,0);
      iVar6 = local_34;
      if (local_54 == (int *)0x0) goto LAB_004a95e5;
      if ((uint)*(ushort *)(local_54 + 2) == *local_28) {
        local_30 = 0;
      }
      else {
        FUN_00477c30(piVar13);
        local_20 = (byte *)*local_28;
        local_8c = (int)local_20 + 1;
        local_30 = 1;
        local_78 = local_8c;
        if (0 < (int)local_9c) {
          piVar8 = (int *)((int)local_a4._4_4_ + 0xc);
          uVar10 = local_8c;
          iVar6 = (int)local_9c;
          do {
            if ((int)uVar10 <= *piVar8) {
              local_78 = local_78 + 1;
              uVar10 = uVar10 + 1;
            }
            piVar8 = piVar8 + 6;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        local_2c = (undefined1 *)piVar13[0x10];
        if (piVar13[0xf] < (int)local_78) {
          local_2c = (undefined1 *)(piVar13[0x13] + 1);
          piVar13[0x13] = piVar13[0x13] + local_78;
        }
        else {
          piVar13[0x10] = (int)local_2c + local_78;
          piVar13[0xf] = piVar13[0xf] - local_78;
        }
        FUN_00496a90((int)piVar13);
        puVar7 = local_2c;
        FUN_00497010((int)piVar13,(int *)local_28,(int)local_2c,0);
        FUN_004ae830(piVar4,0x37,local_b4._4_4_,(int)local_20 + (int)puVar7);
        local_20 = (byte *)0x0;
        if (0 < (int)local_9c) {
          pbVar11 = (byte *)((int)puVar7 + local_8c);
          iVar6 = 0;
          uVar10 = local_8c;
          local_48 = pbVar11;
          do {
            if ((int)uVar10 <= *(int *)(iVar6 + 0xc + (int)local_a4._4_4_)) {
              pbVar11 = (byte *)FUN_004970c0(piVar13,*(int **)(iVar6 + (int)local_a4._4_4_),
                                             *(int *)(iVar6 + 8 + (int)local_a4._4_4_),
                                             *(int *)(iVar6 + 4 + (int)local_a4._4_4_),(int)pbVar11,
                                             '\0');
              if (local_48 != pbVar11) {
                FUN_004ae830(piVar4,0xf,pbVar11,local_48);
              }
              uVar10 = local_8c + 1;
              pbVar11 = local_48 + 1;
              local_8c = uVar10;
              local_48 = pbVar11;
            }
            local_20 = (byte *)((int)local_20 + 1);
            iVar6 = iVar6 + 0x18;
          } while ((int)local_20 < (int)local_9c);
        }
        if (*(char *)((int)piVar13 + 0x13) == '\0') {
          piVar13[0x13] = piVar13[0x13] + 1;
          iVar6 = piVar13[0x13];
        }
        else {
          bVar1 = *(char *)((int)piVar13 + 0x13) - 1;
          *(byte *)((int)piVar13 + 0x13) = bVar1;
          iVar6 = piVar13[bVar1 + 7];
        }
        local_20 = (byte *)piVar4[7];
        if (((int)local_20 < piVar4[8]) || (iVar3 = FUN_0047de10(piVar4), iVar3 == 0)) {
          piVar4[7] = piVar4[7] + 1;
          iVar3 = piVar4[1];
          *(undefined1 **)(iVar3 + 4 + (int)local_20 * 0x14) = local_2c;
          *(undefined2 *)(iVar3 + (int)local_20 * 0x14) = 0x1f;
          *(undefined1 *)(iVar3 + 3 + (int)local_20 * 0x14) = 0;
          *(uint *)(iVar3 + 8 + (int)local_20 * 0x14) = local_78;
          *(int *)(iVar3 + 0xc + (int)local_20 * 0x14) = iVar6;
          *(undefined4 *)(iVar3 + 0x10 + (int)local_20 * 0x14) = 0;
        }
        local_48 = local_b4._4_4_;
        local_20 = (byte *)piVar4[7];
        if (((int)local_20 < piVar4[8]) || (iVar3 = FUN_0047de10(piVar4), iVar3 == 0)) {
          piVar4[7] = piVar4[7] + 1;
          iVar3 = piVar4[1];
          *(undefined2 *)(iVar3 + (int)local_20 * 0x14) = 0x60;
          *(undefined1 *)(iVar3 + 3 + (int)local_20 * 0x14) = 0;
          *(byte **)(iVar3 + 4 + (int)local_20 * 0x14) = local_48;
          *(int *)(iVar3 + 8 + (int)local_20 * 0x14) = iVar6;
          *(undefined4 *)(iVar3 + 0xc + (int)local_20 * 0x14) = 0;
          *(undefined4 *)(iVar3 + 0x10 + (int)local_20 * 0x14) = 0;
        }
        uVar10 = local_78;
        if ((iVar6 != 0) && (*(byte *)((int)piVar13 + 0x13) < 8)) {
          iVar3 = 0;
          piVar8 = piVar13 + 0x19;
          do {
            if (piVar8[4] == iVar6) {
              *(undefined1 *)(piVar8 + 2) = 1;
              goto LAB_004a8a4e;
            }
            iVar3 = iVar3 + 1;
            piVar8 = piVar8 + 6;
          } while (iVar3 < 10);
          piVar13[*(byte *)((int)piVar13 + 0x13) + 7] = iVar6;
          *(char *)((int)piVar13 + 0x13) = *(char *)((int)piVar13 + 0x13) + '\x01';
        }
LAB_004a8a4e:
        FUN_00496d90((int)piVar13,(int)local_2c,local_78);
        if (piVar13[0xf] < (int)uVar10) {
          piVar13[0xf] = uVar10;
          piVar13[0x10] = (int)local_2c;
        }
        FUN_004bbe40(local_54);
        local_78 = piVar13[0x12];
        local_ac = CONCAT44(local_ac._4_4_,local_78);
        piVar13[0x12] = local_78 + 1;
        if (*(char *)((int)piVar13 + 0x13) == '\0') {
          piVar13[0x13] = piVar13[0x13] + 1;
          local_2c = (undefined1 *)piVar13[0x13];
        }
        else {
          bVar1 = *(char *)((int)piVar13 + 0x13) - 1;
          *(byte *)((int)piVar13 + 0x13) = bVar1;
          local_2c = (undefined1 *)piVar13[bVar1 + 7];
        }
        local_20 = (byte *)piVar4[7];
        if (((int)local_20 < piVar4[8]) || (iVar6 = FUN_0047de10(piVar4), iVar6 == 0)) {
          piVar4[7] = piVar4[7] + 1;
          iVar6 = piVar4[1];
          *(uint *)(iVar6 + 4 + (int)local_20 * 0x14) = local_78;
          *(undefined2 *)(iVar6 + (int)local_20 * 0x14) = 0x2c;
          *(undefined1 *)(iVar6 + 3 + (int)local_20 * 0x14) = 0;
          *(undefined1 **)(iVar6 + 8 + (int)local_20 * 0x14) = local_2c;
          *(uint *)(iVar6 + 0xc + (int)local_20 * 0x14) = uVar10;
          *(undefined4 *)(iVar6 + 0x10 + (int)local_20 * 0x14) = 0;
        }
        iVar6 = piVar4[7];
        local_20 = local_b4._4_4_;
        if ((iVar6 < piVar4[8]) || (iVar3 = FUN_0047de10(piVar4), iVar3 == 0)) {
          iVar3 = piVar4[1];
          piVar4[7] = piVar4[7] + 1;
          *(byte **)(iVar3 + 4 + iVar6 * 0x14) = local_20;
          *(undefined2 *)(iVar3 + iVar6 * 0x14) = 0x46;
          *(undefined1 *)(iVar3 + 3 + iVar6 * 0x14) = 0;
          *(int *)(iVar3 + 8 + iVar6 * 0x14) = local_84;
          *(undefined4 *)(iVar3 + 0xc + iVar6 * 0x14) = 0;
          *(undefined4 *)(iVar3 + 0x10 + iVar6 * 0x14) = 0;
        }
        local_b4._0_2_ = CONCAT11(1,(undefined1)local_b4);
        FUN_00496a90((int)piVar13);
      }
      local_88 = piVar4[7];
      FUN_00496a90((int)piVar13);
      if (local_30 != 0) {
        iVar6 = piVar4[7];
        local_20 = local_b4._4_4_;
        if ((iVar6 < piVar4[8]) || (iVar3 = FUN_0047de10(piVar4), iVar3 == 0)) {
          iVar3 = piVar4[1];
          piVar4[7] = piVar4[7] + 1;
          *(byte **)(iVar3 + 4 + iVar6 * 0x14) = local_20;
          *(undefined2 *)(iVar3 + iVar6 * 0x14) = 0x3e;
          *(undefined1 *)(iVar3 + 3 + iVar6 * 0x14) = 0;
          *(undefined1 **)(iVar3 + 8 + iVar6 * 0x14) = local_2c;
          *(undefined4 *)(iVar3 + 0xc + iVar6 * 0x14) = 0;
          *(undefined4 *)(iVar3 + 0x10 + iVar6 * 0x14) = 0;
        }
      }
      local_2c = (undefined1 *)0x0;
      if (0 < (int)*local_28) {
        do {
          puVar7 = local_2c;
          if (local_30 == 0) {
            local_b4 = CONCAT71(local_b4._1_7_,1);
            local_48 = (byte *)((int)local_40 + (int)local_2c);
            pbVar11 = *(byte **)(local_28[2] + (int)local_2c * 0x14);
            if ((pbVar11 == (byte *)0x0) || (*pbVar11 != 0x84)) {
              local_20 = (byte *)FUN_00497780(piVar13,pbVar11,(int)local_48);
              if (((local_20 != local_48) &&
                  (piVar8 = (int *)piVar13[2], puVar7 = local_2c, piVar8 != (int *)0x0)) &&
                 ((local_74 = piVar8[7], (int)local_74 < piVar8[8] ||
                  (iVar6 = FUN_0047de10(piVar8), puVar7 = local_2c, iVar6 == 0)))) {
                piVar8[7] = piVar8[7] + 1;
                iVar6 = piVar8[1];
                *(byte **)(iVar6 + 4 + local_74 * 0x14) = local_20;
                *(undefined2 *)(iVar6 + local_74 * 0x14) = 0xf;
                uVar10 = local_74;
                goto LAB_004a8d00;
              }
            }
            else {
              local_74 = *(uint *)(pbVar11 + 0x18);
              local_20 = (byte *)piVar13[2];
              local_8c = *(uint *)(local_20 + 0x1c);
              if (((int)local_8c < *(int *)(local_20 + 0x20)) ||
                 (iVar6 = FUN_0047de10((int *)local_20), iVar6 == 0)) {
                *(int *)(local_20 + 0x1c) = *(int *)(local_20 + 0x1c) + 1;
                iVar6 = *(int *)(local_20 + 4);
                *(undefined2 *)(iVar6 + local_8c * 0x14) = 0xe;
                *(uint *)(iVar6 + 4 + local_8c * 0x14) = local_74;
                uVar10 = local_8c;
LAB_004a8d00:
                *(undefined4 *)(iVar6 + 0x10 + uVar10 * 0x14) = 0;
                *(undefined4 *)(iVar6 + 0xc + uVar10 * 0x14) = 0;
                *(byte **)(iVar6 + 8 + uVar10 * 0x14) = local_48;
                *(undefined1 *)(iVar6 + 3 + uVar10 * 0x14) = 0;
                puVar7 = local_2c;
              }
            }
          }
          else {
            local_20 = (byte *)piVar4[7];
            if (((int)local_20 < piVar4[8]) || (iVar6 = FUN_0047de10(piVar4), iVar6 == 0)) {
              iVar6 = piVar4[1];
              piVar4[7] = piVar4[7] + 1;
              *(uint *)(iVar6 + 4 + (int)local_20 * 0x14) = local_78;
              *(undefined2 *)(iVar6 + (int)local_20 * 0x14) = 0x1d;
              *(undefined1 *)(iVar6 + 3 + (int)local_20 * 0x14) = 0;
              *(undefined1 **)(iVar6 + 8 + (int)local_20 * 0x14) = puVar7;
              *(undefined1 **)(iVar6 + 0xc + (int)local_20 * 0x14) =
                   (undefined1 *)((int)local_40 + (int)puVar7);
              *(undefined4 *)(iVar6 + 0x10 + (int)local_20 * 0x14) = 0;
            }
            if ((puVar7 == (undefined1 *)0x0) && (piVar4[1] != 0)) {
              *(undefined1 *)(piVar4[1] + -0x11 + piVar4[7] * 0x14) = 0x20;
            }
          }
          local_2c = puVar7 + 1;
        } while ((int)local_2c < (int)*local_28);
      }
      iVar6 = piVar4[7];
      local_74 = *local_28;
      if ((iVar6 < piVar4[8]) || (iVar3 = FUN_0047de10(piVar4), iVar3 == 0)) {
        iVar3 = piVar4[1];
        piVar4[7] = piVar4[7] + 1;
        *(int **)(iVar3 + 4 + iVar6 * 0x14) = local_70;
        *(int **)(iVar3 + 8 + iVar6 * 0x14) = local_40;
        *(undefined2 *)(iVar3 + iVar6 * 0x14) = 0x18;
        *(undefined1 *)(iVar3 + 3 + iVar6 * 0x14) = 0;
        *(uint *)(iVar3 + 0xc + iVar6 * 0x14) = local_74;
        *(undefined4 *)(iVar3 + 0x10 + iVar6 * 0x14) = 0;
      }
      else {
        iVar6 = 1;
      }
      FUN_004aecc0(piVar4,iVar6,local_68,0xfffffffa);
      uVar10 = piVar4[7];
      local_74 = uVar10;
      if (((int)uVar10 < piVar4[8]) || (iVar6 = FUN_0047de10(piVar4), iVar6 == 0)) {
        iVar6 = piVar4[1];
        piVar4[7] = piVar4[7] + 1;
        *(undefined2 *)(iVar6 + uVar10 * 0x14) = 0x19;
        *(undefined1 *)(iVar6 + 3 + uVar10 * 0x14) = 0;
        *(uint *)(iVar6 + 4 + uVar10 * 0x14) = uVar10 + 1;
        *(undefined4 *)(iVar6 + 8 + uVar10 * 0x14) = 0;
        *(uint *)(iVar6 + 0xc + uVar10 * 0x14) = uVar10 + 1;
        *(undefined4 *)(iVar6 + 0x10 + uVar10 * 0x14) = 0;
      }
      FUN_00497600((int)piVar13,(int)local_40,(int)local_70,*local_28);
      local_68 = (int *)piVar4[7];
      if (((int)local_68 < piVar4[8]) || (iVar6 = FUN_0047de10(piVar4), iVar6 == 0)) {
        piVar4[7] = piVar4[7] + 1;
        iVar6 = piVar4[1];
        *(int *)(iVar6 + 4 + (int)local_68 * 0x14) = local_24 + 2;
        *(undefined2 *)(iVar6 + (int)local_68 * 0x14) = 2;
        *(undefined1 *)(iVar6 + 3 + (int)local_68 * 0x14) = 0;
        *(int *)(iVar6 + 8 + (int)local_68 * 0x14) = local_7c;
        *(undefined4 *)(iVar6 + 0xc + (int)local_68 * 0x14) = 0;
        *(undefined4 *)(iVar6 + 0x10 + (int)local_68 * 0x14) = 0;
        uVar10 = local_74;
        piVar13 = local_50;
      }
      local_68 = (int *)piVar4[7];
      if (((int)local_68 < piVar4[8]) || (iVar6 = FUN_0047de10(piVar4), iVar6 == 0)) {
        piVar4[7] = piVar4[7] + 1;
        iVar6 = piVar4[1];
        *(int *)(iVar6 + 4 + (int)local_68 * 0x14) = local_24 + 1;
        *(undefined2 *)(iVar6 + (int)local_68 * 0x14) = 0x78;
        *(undefined1 *)(iVar6 + 3 + (int)local_68 * 0x14) = 0;
        *(int *)(iVar6 + 8 + (int)local_68 * 0x14) = local_84;
        *(undefined4 *)(iVar6 + 0xc + (int)local_68 * 0x14) = 0;
        *(undefined4 *)(iVar6 + 0x10 + (int)local_68 * 0x14) = 0;
        piVar13 = local_50;
      }
      local_68 = (int *)piVar4[7];
      if (((int)local_68 < piVar4[8]) || (iVar6 = FUN_0047de10(piVar4), iVar6 == 0)) {
        piVar4[7] = piVar4[7] + 1;
        iVar6 = piVar4[1];
        *(int **)(iVar6 + 4 + (int)local_68 * 0x14) = local_5c;
        *(undefined2 *)(iVar6 + (int)local_68 * 0x14) = 2;
        *(undefined1 *)(iVar6 + 3 + (int)local_68 * 0x14) = 0;
        *(int *)(iVar6 + 8 + (int)local_68 * 0x14) = local_80;
        *(undefined4 *)(iVar6 + 0xc + (int)local_68 * 0x14) = 0;
        *(undefined4 *)(iVar6 + 0x10 + (int)local_68 * 0x14) = 0;
      }
      if ((-1 < (int)uVar10) && (uVar10 < (uint)piVar4[7])) {
        *(int *)(piVar4[1] + 8 + uVar10 * 0x14) = piVar4[7];
      }
      FUN_004bdd50(piVar13,(undefined1 *)&local_b4);
      iVar6 = piVar4[7];
      if ((iVar6 < piVar4[8]) || (iVar3 = FUN_0047de10(piVar4), iVar3 == 0)) {
        iVar3 = piVar4[1];
        piVar4[7] = piVar4[7] + 1;
        *(undefined2 *)(iVar3 + iVar6 * 0x14) = 7;
        *(undefined1 *)(iVar3 + 3 + iVar6 * 0x14) = 0;
        *(undefined4 *)(iVar3 + 4 + iVar6 * 0x14) = 1;
        *(int *)(iVar3 + 8 + iVar6 * 0x14) = local_24;
        *(undefined4 *)(iVar3 + 0xc + iVar6 * 0x14) = 0;
        *(undefined4 *)(iVar3 + 0x10 + iVar6 * 0x14) = 0;
      }
      if (local_30 == 0) {
        FUN_004bbe40(local_54);
        iVar6 = local_64;
        local_88 = piVar4[1];
        if (local_88 != 0) {
          FUN_0047bc80(*piVar4,(int)*(char *)(local_88 + 1 + local_64 * 0x14),
                       *(int **)(local_88 + 0x10 + local_64 * 0x14));
          *(undefined8 *)(local_88 + iVar6 * 0x14) = 0;
          *(undefined8 *)(local_88 + 8 + iVar6 * 0x14) = 0;
          *(undefined4 *)(local_88 + 0x10 + iVar6 * 0x14) = 0;
          *(undefined1 *)(local_88 + iVar6 * 0x14) = 0x95;
        }
      }
      else {
        iVar6 = piVar4[7];
        local_68 = (int *)local_b4._4_4_;
        if ((iVar6 < piVar4[8]) || (iVar3 = FUN_0047de10(piVar4), iVar3 == 0)) {
          iVar3 = piVar4[1];
          piVar4[7] = piVar4[7] + 1;
          *(int **)(iVar3 + 4 + iVar6 * 0x14) = local_68;
          *(undefined2 *)(iVar3 + iVar6 * 0x14) = 0x51;
          *(undefined1 *)(iVar3 + 3 + iVar6 * 0x14) = 0;
          *(int *)(iVar3 + 8 + iVar6 * 0x14) = local_88;
          *(undefined4 *)(iVar3 + 0xc + iVar6 * 0x14) = 0;
          *(undefined4 *)(iVar3 + 0x10 + iVar6 * 0x14) = 0;
        }
      }
      iVar6 = piVar4[7];
      if ((iVar6 < piVar4[8]) || (iVar3 = FUN_0047de10(piVar4), iVar3 == 0)) {
        piVar4[7] = piVar4[7] + 1;
        iVar3 = piVar4[1];
        *(int *)(iVar3 + 4 + iVar6 * 0x14) = local_24 + 2;
        *(undefined2 *)(iVar3 + iVar6 * 0x14) = 2;
        *(undefined1 *)(iVar3 + 3 + iVar6 * 0x14) = 0;
        *(int *)(iVar3 + 8 + iVar6 * 0x14) = local_7c;
        *(undefined4 *)(iVar3 + 0xc + iVar6 * 0x14) = 0;
        *(undefined4 *)(iVar3 + 0x10 + iVar6 * 0x14) = 0;
        piVar13 = local_50;
      }
      iVar6 = piVar4[7];
      if ((iVar6 < piVar4[8]) || (iVar3 = FUN_0047de10(piVar4), iVar3 == 0)) {
        iVar3 = piVar4[1];
        piVar4[7] = piVar4[7] + 1;
        *(undefined2 *)(iVar3 + iVar6 * 0x14) = 1;
        *(undefined1 *)(iVar3 + 3 + iVar6 * 0x14) = 0;
        *(undefined4 *)(iVar3 + 4 + iVar6 * 0x14) = 0;
        *(int *)(iVar3 + 8 + iVar6 * 0x14) = local_84;
        *(undefined4 *)(iVar3 + 0xc + iVar6 * 0x14) = 0;
        *(undefined4 *)(iVar3 + 0x10 + iVar6 * 0x14) = 0;
      }
      iVar6 = piVar4[7];
      local_88 = iVar6;
      if ((iVar6 < piVar4[8]) || (iVar3 = FUN_0047de10(piVar4), iVar3 == 0)) {
        piVar4[7] = piVar4[7] + 1;
        iVar3 = piVar4[1];
        *(undefined2 *)(iVar3 + iVar6 * 0x14) = 7;
        *(undefined1 *)(iVar3 + 3 + iVar6 * 0x14) = 0;
        *(undefined4 *)(iVar3 + 4 + iVar6 * 0x14) = 1;
        *(int *)(iVar3 + 8 + iVar6 * 0x14) = local_24 + 1;
        *(undefined4 *)(iVar3 + 0xc + iVar6 * 0x14) = 0;
        *(undefined4 *)(iVar3 + 0x10 + iVar6 * 0x14) = 0;
      }
      iVar6 = piVar4[7];
      if ((iVar6 < piVar4[8]) || (iVar3 = FUN_0047de10(piVar4), iVar3 == 0)) {
        piVar4[7] = piVar4[7] + 1;
        iVar3 = piVar4[1];
        *(undefined2 *)(iVar3 + iVar6 * 0x14) = 3;
        *(undefined1 *)(iVar3 + 3 + iVar6 * 0x14) = 0;
        *(int *)(iVar3 + 4 + iVar6 * 0x14) = local_24 + 2;
        *(undefined4 *)(iVar3 + 8 + iVar6 * 0x14) = 0;
        *(undefined4 *)(iVar3 + 0xc + iVar6 * 0x14) = 0;
        *(undefined4 *)(iVar3 + 0x10 + iVar6 * 0x14) = 0;
        piVar13 = local_50;
      }
      if (piVar4[10] != 0) {
        *(int *)(piVar4[10] - (local_7c * 4 + 4)) = piVar4[7];
      }
      iVar6 = piVar4[7];
      if ((iVar6 < piVar4[8]) || (iVar3 = FUN_0047de10(piVar4), iVar3 == 0)) {
        iVar3 = piVar4[1];
        piVar4[7] = piVar4[7] + 1;
        *(int *)(iVar3 + 4 + iVar6 * 0x14) = local_24;
        *(undefined2 *)(iVar3 + iVar6 * 0x14) = 0x78;
        *(undefined1 *)(iVar3 + 3 + iVar6 * 0x14) = 0;
        *(int *)(iVar3 + 8 + iVar6 * 0x14) = iVar6 + 2;
        *(undefined4 *)(iVar3 + 0xc + iVar6 * 0x14) = 0;
        *(undefined4 *)(iVar3 + 0x10 + iVar6 * 0x14) = 0;
      }
      local_64 = piVar4[7];
      if ((local_64 < piVar4[8]) || (iVar3 = FUN_0047de10(piVar4), iVar3 == 0)) {
        piVar4[7] = piVar4[7] + 1;
        iVar3 = piVar4[1];
        *(undefined2 *)(iVar3 + local_64 * 0x14) = 3;
        *(undefined1 *)(iVar3 + 3 + local_64 * 0x14) = 0;
        *(int *)(iVar3 + 4 + local_64 * 0x14) = local_24 + 2;
        *(undefined4 *)(iVar3 + 8 + local_64 * 0x14) = 0;
        *(undefined4 *)(iVar3 + 0xc + local_64 * 0x14) = 0;
        *(undefined4 *)(iVar3 + 0x10 + local_64 * 0x14) = 0;
        piVar4 = local_44;
        piVar13 = local_50;
      }
      FUN_00479800((int)piVar13,(int)&local_b4);
      FUN_004988a0(piVar13,(char *)local_60,iVar6 + 1,8);
      param_2 = local_6c;
      FUN_0048abe0(piVar13,(int)local_6c,(int *)*local_6c,0,(int *)0x0,(int *)local_38,
                   (int)&local_cc,(char *)local_58,iVar6 + 1,local_88);
      local_64 = piVar4[7];
      if ((local_64 < piVar4[8]) || (iVar6 = FUN_0047de10(piVar4), iVar6 == 0)) {
        piVar4[7] = piVar4[7] + 1;
        iVar6 = piVar4[1];
        *(undefined2 *)(iVar6 + local_64 * 0x14) = 3;
        *(undefined1 *)(iVar6 + 3 + local_64 * 0x14) = 0;
        *(int *)(iVar6 + 4 + local_64 * 0x14) = local_24 + 2;
        *(undefined4 *)(iVar6 + 8 + local_64 * 0x14) = 0;
        *(undefined4 *)(iVar6 + 0xc + local_64 * 0x14) = 0;
        *(undefined4 *)(iVar6 + 0x10 + local_64 * 0x14) = 0;
        piVar13 = local_50;
      }
      if (piVar4[10] != 0) {
        *(int *)(piVar4[10] - (local_80 * 4 + 4)) = piVar4[7];
      }
      FUN_00488640(piVar13,(int)&local_b4);
      local_64 = piVar4[7];
      if ((local_64 < piVar4[8]) || (iVar6 = FUN_0047de10(piVar4), iVar6 == 0)) {
        piVar4[7] = piVar4[7] + 1;
        iVar6 = piVar4[1];
        *(undefined2 *)(iVar6 + local_64 * 0x14) = 3;
        *(undefined1 *)(iVar6 + 3 + local_64 * 0x14) = 0;
        *(int **)(iVar6 + 4 + local_64 * 0x14) = local_5c;
        *(undefined4 *)(iVar6 + 8 + local_64 * 0x14) = 0;
        *(undefined4 *)(iVar6 + 0xc + local_64 * 0x14) = 0;
        *(undefined4 *)(iVar6 + 0x10 + local_64 * 0x14) = 0;
      }
    }
    if (piVar4[10] != 0) {
      *(int *)(piVar4[10] - (local_84 * 4 + 4)) = piVar4[7];
    }
  }
  if ((char)local_4c == '\x03') {
    FUN_00477c30(piVar13);
  }
  if (local_38 != (uint *)0x0) {
    FUN_00477c30(piVar13);
    FUN_0047ca50((int)piVar13,(int)param_2,piVar4,*local_3c,(char *)local_58);
  }
  if (piVar4[10] != 0) {
    *(int *)(piVar4[10] - (local_bc._4_4_ * 4 + 4)) = piVar4[7];
  }
  local_20 = (byte *)0x0;
  iVar6 = local_34;
  param_1 = piVar13;
LAB_004a95e5:
  param_1[0x79] = local_c0;
  if ((local_20 == (byte *)0x0) && (*local_58 == 5)) {
    FUN_0047c420(param_1,local_1c,local_3c);
  }
  FUN_00494b00(iVar6,local_a4._4_4_);
  FUN_00494b00(iVar6,(undefined4 *)local_94);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004a9650 @ 004a9650  kind=lib  attributed-by=lib-island  size=35 */

void __cdecl FUN_004a9650(int param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    FUN_00472d10(param_1,param_2);
    FUN_00494b00(param_1,param_2);
  }
  return;
}


/* FUN_004a9680 @ 004a9680  kind=lib  attributed-by=lib-island  size=278 */

undefined4 * __cdecl FUN_004a9680(int param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  short *psVar3;
  undefined4 *puVar4;
  
  if (param_2 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar1 = FUN_00494b90(param_1,0x50);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  piVar2 = FUN_00499140(param_1,(int *)*param_2,param_3);
  *puVar1 = piVar2;
  psVar3 = FUN_004a9d60(param_1,(short *)param_2[10],param_3);
  puVar1[10] = psVar3;
  puVar4 = FUN_00478bb0(param_1,(undefined4 *)param_2[0xb],param_3,(int *)0x0);
  puVar1[0xb] = puVar4;
  piVar2 = FUN_00499140(param_1,(int *)param_2[0xc],param_3);
  puVar1[0xc] = piVar2;
  puVar4 = FUN_00478bb0(param_1,(undefined4 *)param_2[0xd],param_3,(int *)0x0);
  puVar1[0xd] = puVar4;
  piVar2 = FUN_00499140(param_1,(int *)param_2[0xe],param_3);
  puVar1[0xe] = piVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_2 + 1);
  puVar4 = FUN_004a9680(param_1,(undefined4 *)param_2[0xf],param_3);
  puVar1[0xf] = puVar4;
  if (puVar4 != (undefined4 *)0x0) {
    puVar4[0x10] = puVar1;
  }
  puVar1[0x10] = 0;
  puVar4 = FUN_00478bb0(param_1,(undefined4 *)param_2[0x12],param_3,(int *)0x0);
  puVar1[0x12] = puVar4;
  puVar4 = FUN_00478bb0(param_1,(undefined4 *)param_2[0x13],param_3,(int *)0x0);
  puVar1[0x13] = puVar4;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(ushort *)((int)puVar1 + 6) = *(ushort *)((int)param_2 + 6) & 0xfff7;
  puVar1[0x11] = 0;
  puVar1[4] = 0xffffffff;
  puVar1[5] = 0xffffffff;
  puVar1[6] = 0xffffffff;
  return puVar1;
}


/* FUN_004a97a0 @ 004a97a0  kind=lib  attributed-by=lib-island  size=33 */

int __cdecl FUN_004a97a0(undefined4 *param_1)

{
  int local_8;
  
  local_8 = 0;
  FUN_0047e0d0(param_1,&local_8);
  return local_8;
}


/* FUN_004a97d0 @ 004a97d0  kind=lib  attributed-by=lib-island  size=455 */

void __cdecl
FUN_004a97d0(int *param_1,int *param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,int param_8,undefined4 param_9,undefined4 param_10
            )

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *_Dst;
  undefined4 *_Dst_00;
  undefined4 *puVar4;
  undefined4 local_58 [20];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  iVar2 = *param_1;
  _Dst = FUN_00494b90(iVar2,0x50);
  if ((_Dst == (undefined4 *)0x0) || (memset(_Dst,0,0x50), _Dst == (undefined4 *)0x0)) {
    _Dst = local_58;
    memset(_Dst,0,0x50);
  }
  if (param_2 == (int *)0x0) {
    _Dst_00 = FUN_00494b90(iVar2,0x2d);
    if (_Dst_00 != (undefined4 *)0x0) {
      memset(_Dst_00,0,0x2d);
      *(undefined2 *)((int)_Dst_00 + 0x1e) = 0xffff;
      *(undefined1 *)_Dst_00 = 0x71;
      _Dst_00[1] = _Dst_00 + 0xb;
      *(undefined1 *)(_Dst_00 + 0xb) = 0;
      _Dst_00[5] = 1;
    }
    iVar3 = *param_1;
    param_2 = FUN_00494b90(iVar3,0xc);
    if (param_2 != (int *)0x0) {
      param_2[0] = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      puVar4 = FUN_00494b90(iVar3,0x14);
      param_2[2] = (int)puVar4;
      if (puVar4 != (undefined4 *)0x0) {
        puVar1 = (undefined8 *)(puVar4 + *param_2 * 5);
        *param_2 = *param_2 + 1;
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined4 *)(puVar1 + 2) = 0;
        *(undefined4 **)puVar1 = _Dst_00;
        goto LAB_004a98de;
      }
    }
    FUN_00498790(iVar3,_Dst_00);
    FUN_00499060(iVar3,param_2);
    param_2 = (int *)0x0;
  }
LAB_004a98de:
  *_Dst = param_2;
  if ((param_3 == (undefined4 *)0x0) &&
     (param_3 = FUN_00494b90(iVar2,0x50), param_3 != (undefined4 *)0x0)) {
    memset(param_3,0,0x50);
  }
  _Dst[0xb] = param_4;
  _Dst[0xc] = param_5;
  _Dst[0xd] = param_6;
  _Dst[0xe] = param_7;
  _Dst[10] = param_3;
  *(undefined1 *)(_Dst + 1) = 0x74;
  *(ushort *)((int)_Dst + 6) = (ushort)(param_8 != 0);
  _Dst[0x12] = param_9;
  _Dst[0x13] = param_10;
  _Dst[4] = 0xffffffff;
  _Dst[5] = 0xffffffff;
  _Dst[6] = 0xffffffff;
  if (*(char *)(iVar2 + 0x38) == '\0') {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  FUN_00472d10(iVar2,_Dst);
  if (_Dst != local_58) {
    FUN_00494b00(iVar2,_Dst);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004a99a0 @ 004a99a0  kind=lib  attributed-by=lib-island  size=131 */

void __cdecl FUN_004a99a0(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 *local_18;
  code *local_14;
  int *local_10;
  
  if ((param_2 != (undefined4 *)0x0) &&
     (iVar1 = *param_1, (*(byte *)((int)param_2 + 6) & 0x20) == 0)) {
    local_14 = FUN_0048a4d0;
    local_18 = &LAB_0046a020;
    local_10 = param_1;
    FUN_004bb100((int)&local_18,param_2);
    if ((param_1[0x11] == 0) &&
       (((*(char *)(iVar1 + 0x38) == '\0' &&
         (FUN_004a6b70(param_1,param_2,param_3), param_1[0x11] == 0)) &&
        (*(char *)(iVar1 + 0x38) == '\0')))) {
      local_14 = FUN_0048a1c0;
      local_18 = &LAB_0046a020;
      local_10 = param_1;
      FUN_004bb100((int)&local_18,param_2);
    }
  }
  return;
}


/* FUN_004a9a30 @ 004a9a30  kind=lib  attributed-by=lib-island  size=139 */

void __cdecl FUN_004a9a30(int *param_1,int param_2,byte *param_3)

{
  int iVar1;
  int local_6c;
  undefined1 *local_68;
  undefined1 *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  char local_54;
  undefined2 local_53;
  undefined1 local_50 [72];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_68 = local_50;
  local_58 = *(undefined4 *)(param_2 + 0x50);
  local_60 = 0;
  local_5c = 0x46;
  local_53 = 1;
  local_54 = '\0';
  local_6c = param_2;
  local_64 = local_68;
  FUN_004ad370(&local_6c,1,param_3,(double *)&stack0x00000010);
  iVar1 = FUN_004aa8f0(&local_6c);
  if (local_54 != '\0') {
    *(undefined1 *)(param_2 + 0x38) = 1;
  }
  FUN_00494b00(param_2,(undefined4 *)*param_1);
  *param_1 = iVar1;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004a9ac0 @ 004a9ac0  kind=lib  attributed-by=lib-island  size=181 */

short * __cdecl FUN_004a9ac0(int param_1,short *param_2,int *param_3,int *param_4)

{
  int iVar1;
  short *psVar2;
  char *pcVar3;
  
  if (param_2 == (short *)0x0) {
    param_2 = (short *)FUN_00494b90(param_1,0x50);
    if ((param_2 == (short *)0x0) || (memset(param_2,0,0x50), param_2 == (short *)0x0)) {
      return (short *)0x0;
    }
    param_2[1] = 1;
  }
  psVar2 = FUN_004a9fc0(param_1,param_2,1,(int)*param_2);
  if (*(char *)(param_1 + 0x38) == '\0') {
    iVar1 = *psVar2 * 9 + -8;
    if ((param_4 == (int *)0x0) || (*param_4 == 0)) {
      param_4 = param_3;
      param_3 = (int *)0x0;
    }
    pcVar3 = FUN_004a0d40(param_1,param_4);
    *(char **)(psVar2 + iVar1 * 4 + 4) = pcVar3;
    pcVar3 = FUN_004a0d40(param_1,param_3);
    *(char **)(psVar2 + iVar1 * 4 + 2) = pcVar3;
    return psVar2;
  }
  FUN_004a9cb0(param_1,psVar2);
  return (short *)0x0;
}


/* FUN_004a9b80 @ 004a9b80  kind=lib  attributed-by=lib-island  size=199 */

short * __cdecl
FUN_004a9b80(int *param_1,short *param_2,int *param_3,int *param_4,undefined4 *param_5,
            undefined4 *param_6,undefined4 *param_7,int *param_8)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  char *pcVar4;
  
  iVar2 = *param_1;
  if ((param_2 == (short *)0x0) && ((param_7 != (undefined4 *)0x0 || (param_8 != (int *)0x0)))) {
    FUN_004962b0(param_1,(byte *)"a JOIN clause is required before %s");
  }
  else {
    psVar3 = FUN_004a9ac0(iVar2,param_2,param_3,param_4);
    if ((psVar3 != (short *)0x0) && (sVar1 = *psVar3, sVar1 != 0)) {
      if (param_5[1] != 0) {
        pcVar4 = FUN_004a0d40(iVar2,param_5);
        *(char **)(psVar3 + sVar1 * 0x24 + -0x1a) = pcVar4;
      }
      *(undefined4 **)(psVar3 + sVar1 * 0x24 + -0x16) = param_6;
      *(undefined4 **)(psVar3 + sVar1 * 0x24 + -8) = param_7;
      *(int **)(psVar3 + sVar1 * 0x24 + -6) = param_8;
      return psVar3;
    }
  }
  FUN_00498790(iVar2,param_7);
  FUN_0049d910(iVar2,param_8);
  if (param_6 != (undefined4 *)0x0) {
    FUN_00472d10(iVar2,param_6);
    FUN_00494b00(iVar2,param_6);
  }
  return (short *)0x0;
}


/* FUN_004a9c50 @ 004a9c50  kind=lib  attributed-by=lib-island  size=84 */

void __cdecl FUN_004a9c50(int param_1,short *param_2)

{
  int *piVar1;
  int iVar2;
  
  if ((param_2 != (short *)0x0) && (iVar2 = 0, 0 < *param_2)) {
    piVar1 = (int *)(param_2 + 0xe);
    do {
      if (-1 < piVar1[6]) {
        return;
      }
      piVar1[6] = *(int *)(param_1 + 0x48);
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
      if (*piVar1 != 0) {
        FUN_004a9c50(param_1,*(short **)(*piVar1 + 0x28));
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0x12;
    } while (iVar2 < *param_2);
  }
  return;
}


/* FUN_004a9cb0 @ 004a9cb0  kind=lib  attributed-by=lib-island  size=170 */

void __cdecl FUN_004a9cb0(int param_1,short *param_2)

{
  undefined4 *puVar1;
  short *psVar2;
  int local_8;
  
  if (param_2 != (short *)0x0) {
    local_8 = 0;
    if (0 < *param_2) {
      psVar2 = param_2 + 8;
      do {
        FUN_00494b00(param_1,*(undefined4 **)(psVar2 + -2));
        FUN_00494b00(param_1,*(undefined4 **)psVar2);
        FUN_00494b00(param_1,*(undefined4 **)(psVar2 + 2));
        FUN_00494b00(param_1,*(undefined4 **)(psVar2 + 0x1c));
        FUN_00495300(param_1,*(undefined4 **)(psVar2 + 4));
        puVar1 = *(undefined4 **)(psVar2 + 6);
        if (puVar1 != (undefined4 *)0x0) {
          FUN_00472d10(param_1,puVar1);
          FUN_00494b00(param_1,puVar1);
        }
        FUN_00498790(param_1,*(undefined4 **)(psVar2 + 0x14));
        FUN_0049d910(param_1,*(int **)(psVar2 + 0x16));
        local_8 = local_8 + 1;
        psVar2 = psVar2 + 0x24;
      } while (local_8 < *param_2);
    }
    FUN_00494b00(param_1,(undefined4 *)param_2);
  }
  return;
}


/* FUN_004a9d60 @ 004a9d60  kind=lib  attributed-by=lib-island  size=599 */

short * __cdecl FUN_004a9d60(int param_1,short *param_2,uint param_3)

{
  char cVar1;
  short sVar2;
  char *pcVar3;
  int iVar4;
  short *psVar5;
  undefined4 *puVar6;
  char *pcVar7;
  size_t sVar8;
  int *piVar9;
  short *psVar10;
  short *psVar11;
  int local_8;
  
  if (param_2 != (short *)0x0) {
    if (*param_2 < 1) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*param_2 + -1) * 0x48;
    }
    psVar5 = (short *)FUN_00494b90(param_1,iVar4 + 0x50);
    if (psVar5 != (short *)0x0) {
      sVar2 = *param_2;
      psVar5[1] = sVar2;
      *psVar5 = sVar2;
      local_8 = 0;
      if (0 < *param_2) {
        psVar11 = param_2 + 0x14;
        psVar10 = psVar5 + 8;
        do {
          *(undefined4 *)(psVar10 + -4) = *(undefined4 *)(psVar11 + -0x10);
          pcVar3 = *(char **)(psVar11 + -0xe);
          if (pcVar3 == (char *)0x0) {
            puVar6 = (undefined4 *)0x0;
          }
          else {
            cVar1 = *pcVar3;
            pcVar7 = pcVar3;
            while (cVar1 != '\0') {
              pcVar7 = pcVar7 + 1;
              cVar1 = *pcVar7;
            }
            sVar8 = ((int)pcVar7 - (int)pcVar3 & 0x3fffffffU) + 1;
            puVar6 = FUN_00494b90(param_1,sVar8);
            if (puVar6 != (undefined4 *)0x0) {
              memcpy(puVar6,pcVar3,sVar8);
            }
          }
          *(undefined4 **)(psVar10 + -2) = puVar6;
          pcVar3 = *(char **)((int)psVar10 + ((int)param_2 - (int)psVar5));
          if (pcVar3 == (char *)0x0) {
            puVar6 = (undefined4 *)0x0;
          }
          else {
            cVar1 = *pcVar3;
            pcVar7 = pcVar3;
            while (cVar1 != '\0') {
              pcVar7 = pcVar7 + 1;
              cVar1 = *pcVar7;
            }
            sVar8 = ((int)pcVar7 - (int)pcVar3 & 0x3fffffffU) + 1;
            puVar6 = FUN_00494b90(param_1,sVar8);
            if (puVar6 != (undefined4 *)0x0) {
              memcpy(puVar6,pcVar3,sVar8);
            }
          }
          *(undefined4 **)psVar10 = puVar6;
          pcVar3 = *(char **)(psVar11 + -10);
          if (pcVar3 == (char *)0x0) {
            puVar6 = (undefined4 *)0x0;
          }
          else {
            cVar1 = *pcVar3;
            pcVar7 = pcVar3;
            while (cVar1 != '\0') {
              pcVar7 = pcVar7 + 1;
              cVar1 = *pcVar7;
            }
            sVar8 = ((int)pcVar7 - (int)pcVar3 & 0x3fffffffU) + 1;
            puVar6 = FUN_00494b90(param_1,sVar8);
            if (puVar6 != (undefined4 *)0x0) {
              memcpy(puVar6,pcVar3,sVar8);
            }
          }
          *(undefined4 **)(psVar10 + 2) = puVar6;
          *(char *)(psVar10 + 0xc) = (char)*psVar11;
          *(undefined4 *)(psVar10 + 0x12) = *(undefined4 *)(psVar11 + 6);
          *(undefined4 *)(psVar10 + 8) = *(undefined4 *)(psVar11 + -4);
          *(undefined4 *)(psVar10 + 10) = *(undefined4 *)(psVar11 + -2);
          *(uint *)(psVar10 + 0xe) =
               *(uint *)(psVar10 + 0xe) ^ (*(uint *)(psVar10 + 0xe) ^ *(uint *)(psVar11 + 2)) & 2;
          *(uint *)(psVar10 + 0xe) =
               *(uint *)(psVar10 + 0xe) ^ (*(uint *)(psVar11 + 2) ^ *(uint *)(psVar10 + 0xe)) & 4;
          pcVar3 = *(char **)(psVar11 + 0x10);
          if (pcVar3 == (char *)0x0) {
            puVar6 = (undefined4 *)0x0;
          }
          else {
            cVar1 = *pcVar3;
            pcVar7 = pcVar3;
            while (cVar1 != '\0') {
              pcVar7 = pcVar7 + 1;
              cVar1 = *pcVar7;
            }
            sVar8 = ((int)pcVar7 - (int)pcVar3 & 0x3fffffffU) + 1;
            puVar6 = FUN_00494b90(param_1,sVar8);
            if (puVar6 != (undefined4 *)0x0) {
              memcpy(puVar6,pcVar3,sVar8);
            }
          }
          *(undefined4 **)(psVar10 + 0x1c) = puVar6;
          *(uint *)(psVar10 + 0xe) =
               *(uint *)(psVar10 + 0xe) ^ (*(uint *)(psVar10 + 0xe) ^ *(uint *)(psVar11 + 2)) & 1;
          *(undefined4 *)(psVar10 + 0x1e) = *(undefined4 *)(psVar11 + 0x12);
          iVar4 = *(int *)(psVar11 + -8);
          *(int *)(psVar10 + 4) = iVar4;
          if (iVar4 != 0) {
            *(short *)(iVar4 + 0x28) = *(short *)(iVar4 + 0x28) + 1;
          }
          puVar6 = FUN_004a9680(param_1,*(undefined4 **)(psVar11 + -6),param_3);
          *(undefined4 **)(psVar10 + 6) = puVar6;
          puVar6 = FUN_00478bb0(param_1,*(undefined4 **)(psVar11 + 8),param_3,(int *)0x0);
          *(undefined4 **)(psVar10 + 0x14) = puVar6;
          piVar9 = FUN_0049d9d0(param_1,*(int **)(psVar11 + 10));
          *(int **)(psVar10 + 0x16) = piVar9;
          *(undefined4 *)(psVar10 + 0x18) = *(undefined4 *)(psVar11 + 0xc);
          *(undefined4 *)(psVar10 + 0x1a) = *(undefined4 *)(psVar11 + 0xe);
          local_8 = local_8 + 1;
          psVar10 = psVar10 + 0x24;
          psVar11 = psVar11 + 0x24;
        } while (local_8 < *param_2);
      }
      return psVar5;
    }
  }
  return (short *)0x0;
}


/* FUN_004a9fc0 @ 004a9fc0  kind=lib  attributed-by=lib-island  size=277 */

short * __cdecl FUN_004a9fc0(int param_1,short *param_2,int param_3,int param_4)

{
  short *psVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  
  if ((int)param_2[1] < *param_2 + param_3) {
    psVar1 = (short *)FUN_00494cf0(param_1,(undefined4 *)param_2,(*param_2 + param_3) * 0x48 + 8);
    if (psVar1 == (short *)0x0) {
      return param_2;
    }
    if (((param_1 == 0) || (psVar1 < *(short **)(param_1 + 0x104))) ||
       (*(short **)(param_1 + 0x108) <= psVar1)) {
      uVar2 = (*DAT_00582af0._4_4_)(psVar1);
    }
    else {
      uVar2 = (uint)*(ushort *)(param_1 + 0xe8);
    }
    psVar1[1] = (short)((uVar2 - 0x50) / 0x48) + 1;
    param_2 = psVar1;
  }
  iVar3 = *param_2 + -1;
  if (param_4 <= iVar3) {
    iVar4 = (iVar3 - param_4) + 1;
    psVar1 = param_2 + ((iVar3 + param_3) * 9 + 1) * 4;
    psVar5 = param_2 + (iVar3 * 9 + 1) * 4;
    do {
      psVar6 = psVar5;
      psVar7 = psVar1;
      for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)psVar7 = *(undefined4 *)psVar6;
        psVar6 = psVar6 + 2;
        psVar7 = psVar7 + 2;
      }
      iVar4 = iVar4 + -1;
      psVar1 = psVar1 + -0x24;
      psVar5 = psVar5 + -0x24;
    } while (iVar4 != 0);
  }
  *param_2 = *param_2 + (short)param_3;
  memset(param_2 + param_4 * 0x24 + 4,0,param_3 * 0x48);
  if (param_4 < param_3 + param_4) {
    psVar1 = param_2 + param_4 * 0x24 + 0x1a;
    iVar3 = (param_3 + param_4) - param_4;
    do {
      psVar1[0] = -1;
      psVar1[1] = -1;
      psVar1 = psVar1 + 0x24;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return param_2;
}


/* FUN_004aa0e0 @ 004aa0e0  kind=lib  attributed-by=lib-island  size=66 */

void __cdecl FUN_004aa0e0(int *param_1,short *param_2,int *param_3)

{
  short *psVar1;
  char *pcVar2;
  
  if ((param_2 != (short *)0x0) && (0 < *param_2)) {
    psVar1 = param_2 + *param_2 * 0x24;
    if ((param_3[1] == 1) && (*param_3 == 0)) {
      *(uint *)(psVar1 + -0xe) = *(uint *)(psVar1 + -0xe) | 1;
      return;
    }
    pcVar2 = FUN_004a0d40(*param_1,param_3);
    *(char **)psVar1 = pcVar2;
  }
  return;
}


/* FUN_004aa130 @ 004aa130  kind=lib  attributed-by=lib-island  size=74 */

int __cdecl FUN_004aa130(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004a0120(param_1,0,(int *)(param_2 + 8));
  FUN_00495300(*param_1,*(undefined4 **)(param_2 + 0x18));
  *(int *)(param_2 + 0x18) = iVar1;
  if (iVar1 != 0) {
    *(short *)(iVar1 + 0x28) = *(short *)(iVar1 + 0x28) + 1;
  }
  iVar2 = FUN_0049dd10(param_1,param_2 + 8);
  if (iVar2 != 0) {
    iVar1 = 0;
  }
  return iVar1;
}


/* FUN_004aa180 @ 004aa180  kind=lib  attributed-by=lib-island  size=52 */

void __cdecl FUN_004aa180(short *param_1)

{
  int iVar1;
  short *psVar2;
  
  if (param_1 != (short *)0x0) {
    iVar1 = *param_1 + -1;
    if (0 < iVar1) {
      psVar2 = param_1 + (iVar1 * 9 + 5) * 4;
      do {
        iVar1 = iVar1 + -1;
        *(char *)psVar2 = (char)psVar2[-0x24];
        psVar2 = psVar2 + -0x24;
      } while (0 < iVar1);
    }
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  return;
}


/* FUN_004aa1c0 @ 004aa1c0  kind=lib  attributed-by=lib-string  size=947 */

void __cdecl
FUN_004aa1c0(int *param_1,undefined4 *param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int *piVar5;
  int *piVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  bool bVar12;
  undefined1 uVar13;
  char *pcVar14;
  int *piVar15;
  int *local_8;
  
  piVar5 = param_1;
  iVar2 = *param_1;
  piVar6 = (int *)FUN_004ab150(param_1,param_2,param_3,(int *)&local_8);
  if ((int)piVar6 < 0) {
    return;
  }
  if (param_4 != 0) {
    if ((*(int *)(param_3 + 4) != 0) && (piVar6 != (int *)0x1)) {
      FUN_004962b0(param_1,(byte *)"temporary table name must be unqualified");
      return;
    }
    param_1 = (int *)0x1;
    piVar6 = param_1;
  }
  param_1 = piVar6;
  piVar5[0x82] = *local_8;
  piVar5[0x83] = local_8[1];
  pbVar7 = (byte *)FUN_004a0d40(iVar2,local_8);
  if (pbVar7 == (byte *)0x0) {
    return;
  }
  iVar8 = FUN_00492220(piVar5,pbVar7);
  if (iVar8 == 0) {
    if (*(char *)(iVar2 + 0x80) == '\x01') {
      param_4 = 1;
    }
    iVar8 = (int)param_1 * 0x10;
    uVar3 = *(undefined4 *)(iVar8 + *(int *)(iVar2 + 0x10));
    pcVar14 = "sqlite_temp_master";
    if (param_4 != 1) {
      pcVar14 = "sqlite_master";
    }
    iVar9 = FUN_0048d4b0(piVar5,0x12,pcVar14,0,uVar3);
    if (iVar9 == 0) {
      if (param_5 == 0) {
        iVar9 = (uint)(param_4 != 0) * 2 + 2;
      }
      else {
        iVar9 = (uint)(param_4 == 0) * 2 + 6;
      }
      if ((param_6 != 0) || (iVar9 = FUN_0048d4b0(piVar5,iVar9,pbVar7,0,uVar3), iVar9 == 0)) {
        if (*(char *)((int)piVar5 + 0x1d5) != '\0') {
LAB_004aa377:
          puVar10 = FUN_00494c20(iVar2,0x48);
          if (puVar10 == (undefined4 *)0x0) {
            *(undefined1 *)(iVar2 + 0x38) = 1;
            piVar5[0x11] = piVar5[0x11] + 1;
            piVar5[3] = 7;
            FUN_00494b00(iVar2,(undefined4 *)pbVar7);
            return;
          }
          *(undefined2 *)(puVar10 + 9) = 0xffff;
          *puVar10 = pbVar7;
          puVar10[0x10] = *(undefined4 *)(iVar8 + 0xc + *(int *)(iVar2 + 0x10));
          *(undefined2 *)(puVar10 + 10) = 1;
          puVar10[7] = 1000000;
          piVar5[0x7f] = (int)puVar10;
          if (*(char *)((int)piVar5 + 0x12) == '\0') {
            pcVar14 = "sqlite_sequence";
            do {
              bVar1 = *pbVar7;
              bVar12 = bVar1 < (byte)*pcVar14;
              if (bVar1 != *pcVar14) {
LAB_004aa400:
                uVar11 = -(uint)bVar12 | 1;
                goto LAB_004aa405;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar7[1];
              bVar12 = bVar1 < (byte)pcVar14[1];
              if (bVar1 != pcVar14[1]) goto LAB_004aa400;
              pbVar7 = pbVar7 + 2;
              pcVar14 = pcVar14 + 2;
            } while (bVar1 != 0);
            uVar11 = 0;
LAB_004aa405:
            if (uVar11 == 0) {
              *(undefined4 **)(puVar10[0x10] + 0x48) = puVar10;
            }
          }
          if (*(char *)(iVar2 + 0x81) != '\0') {
            return;
          }
          piVar6 = FUN_0049d4d0(piVar5);
          if (piVar6 == (int *)0x0) {
            return;
          }
          FUN_0048e5e0(piVar5,0,(int)param_1);
          if (param_6 != 0) {
            FUN_004ae760(piVar6,0x84);
          }
          iVar8 = piVar5[0x13];
          iVar9 = iVar8 + 1;
          piVar5[100] = iVar9;
          local_8 = (int *)(iVar8 + 2);
          piVar5[0x65] = (int)local_8;
          piVar5[0x13] = iVar8 + 3;
          FUN_004ae890(piVar6,0x24,param_1,iVar8 + 3,2);
          FUN_004b9540(piVar6,(int)param_1);
          uVar11 = FUN_004ae7d0(piVar6,0x1b,(int)local_8 + 1);
          FUN_004ae830(piVar6,7,(-(uint)((*(uint *)(iVar2 + 0x18) & 0x1000) != 0) & 0xfffffffd) + 4,
                       (int)local_8 + 1);
          FUN_004ae890(piVar6,0x25,param_1,2,(int)local_8 + 1);
          FUN_004ae830(piVar6,7,(uint)*(byte *)(*(int *)(*(int *)(iVar2 + 0x10) + 0xc) + 0x4d),
                       (int)local_8 + 1);
          FUN_004ae890(piVar6,0x25,param_1,5,(int)local_8 + 1);
          FUN_004b6720((int)piVar6,uVar11);
          if ((param_5 == 0) && (param_6 == 0)) {
            uVar13 = 0x69;
            piVar15 = param_1;
          }
          else {
            piVar15 = (int *)0x0;
            uVar13 = 7;
          }
          FUN_004ae830(piVar6,uVar13,piVar15,local_8);
          FUN_004a0e40(piVar5,(int)param_1);
          FUN_004ae830(piVar6,0x38,0,iVar9);
          FUN_004ae830(piVar6,10,0,iVar8 + 3);
          FUN_004ae890(piVar6,0x39,0,iVar8 + 3,iVar9);
          FUN_004aee30((int)piVar6,8);
          FUN_004ae760(piVar6,0x2d);
          return;
        }
        pbVar4 = *(byte **)(iVar8 + *(int *)(iVar2 + 0x10));
        iVar9 = FUN_004a6100(piVar5);
        if (iVar9 == 0) {
          iVar9 = FUN_00499c30(iVar2,pbVar7,pbVar4);
          if (iVar9 == 0) {
            iVar9 = FUN_00499af0(iVar2,pbVar7,pbVar4);
            if (iVar9 == 0) goto LAB_004aa377;
            pcVar14 = "there is already an index named %s";
          }
          else {
            if (param_7 != 0) {
              FUN_00493400(piVar5,(int)param_1);
              FUN_00494b00(iVar2,(undefined4 *)pbVar7);
              return;
            }
            pcVar14 = "table %T already exists";
          }
          FUN_004962b0(piVar5,(byte *)pcVar14);
        }
      }
    }
  }
  FUN_00494b00(iVar2,(undefined4 *)pbVar7);
  return;
}


/* FUN_004aa580 @ 004aa580  kind=lib  attributed-by=lib-island  size=41 */

void __cdecl FUN_004aa580(int param_1,int param_2)

{
  (&DAT_00583e18)[param_1] = (&DAT_00583e18)[param_1] + param_2;
  if ((int)(&DAT_00583e40)[param_1] < (int)(&DAT_00583e18)[param_1]) {
    (&DAT_00583e40)[param_1] = (&DAT_00583e18)[param_1];
  }
  return;
}


/* FUN_004aa5b0 @ 004aa5b0  kind=lib  attributed-by=lib-island  size=34 */

void __cdecl FUN_004aa5b0(int param_1,int param_2)

{
  (&DAT_00583e18)[param_1] = param_2;
  if ((int)(&DAT_00583e40)[param_1] < param_2) {
    (&DAT_00583e40)[param_1] = param_2;
  }
  return;
}


/* FUN_004aa5e0 @ 004aa5e0  kind=lib  attributed-by=lib-island  size=457 */

uint __cdecl FUN_004aa5e0(uint *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  uint local_c;
  int local_8;
  
  if (param_1[0xc] != 0xbdf20da3) {
    FUN_0046aab0((int *)param_1);
  }
  puVar1 = (undefined4 *)*param_1;
  if (*(char *)(puVar1 + 0xe) == '\0') {
    if (((int)param_1[0x15] < 1) && ((param_1[0x18] & 0x20) != 0)) {
      param_1[0x16] = 0x11;
      uVar4 = 1;
    }
    else {
      if ((int)param_1[0x15] < 0) {
        if (puVar1[0x21] == 0) {
          puVar1[0x38] = 0;
        }
        if ((puVar1[0x28] != 0) && (*(char *)((int)puVar1 + 0x81) == '\0')) {
          FUN_004a1280((int *)*puVar1,(ulonglong *)(param_1 + 0x20));
        }
        puVar1[0x21] = puVar1[0x21] + 1;
        if ((param_1[0x18] & 0x100) == 0) {
          puVar1[0x22] = puVar1[0x22] + 1;
        }
        param_1[0x15] = 0;
      }
      if ((param_1[0x18] & 3) == 0) {
        puVar1[0x23] = puVar1[0x23] + 1;
        uVar4 = FUN_004af360(param_1);
        puVar1[0x23] = puVar1[0x23] + -1;
      }
      else {
        uVar4 = FUN_004b67d0((int *)param_1);
      }
      if ((((uVar4 != 100) && (puVar1[0x28] != 0)) && (*(char *)((int)puVar1 + 0x81) == '\0')) &&
         (param_1[0x26] != 0)) {
        FUN_004a1280((int *)*puVar1,(ulonglong *)&local_c);
        lVar5 = __allmul(local_c - param_1[0x20],
                         (local_8 - param_1[0x21]) - (uint)(local_c < param_1[0x20]),1000000,0);
        (*(code *)puVar1[0x28])(puVar1[0x29],param_1[0x26],lVar5);
      }
      if (uVar4 == 0x65) {
        uVar2 = FUN_00476ff0((int)puVar1);
        param_1[0x16] = uVar2;
        if (uVar2 != 0) {
          uVar4 = 1;
        }
      }
      puVar1[0xb] = uVar4;
      uVar2 = *param_1;
      uVar3 = param_1[0x16];
      if (uVar2 == 0) {
        uVar2 = 0xff;
      }
      else {
        if ((*(char *)(uVar2 + 0x38) != '\0') || (uVar3 == 0xc0a)) {
          FUN_004961f0(uVar2,7,(byte *)0x0);
          *(undefined1 *)(uVar2 + 0x38) = 0;
          uVar3 = 7;
        }
        uVar2 = *(uint *)(uVar2 + 0x30);
      }
      if ((uVar2 & uVar3) == 7) {
        param_1[0x16] = 7;
      }
    }
    if ((((param_1[0x18] & 0x200) != 0) && (uVar4 != 100)) && (uVar4 != 0x65)) {
      uVar4 = FUN_004b9420((int *)param_1);
    }
    return puVar1[0xc] & uVar4;
  }
  param_1[0x16] = 7;
  return 7;
}


/* FUN_004aa7b0 @ 004aa7b0  kind=lib  attributed-by=lib-island  size=313 */

void __cdecl FUN_004aa7b0(int *param_1,char *param_2,size_t param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *_Dst;
  int iVar6;
  int iVar7;
  char *pcVar8;
  
  if ((char)param_1[6] == '\0' && *(char *)((int)param_1 + 0x1a) == '\0') {
    if ((int)param_3 < 0) {
      if (param_2 == (char *)0x0) {
        return;
      }
      cVar3 = *param_2;
      pcVar8 = param_2;
      while (cVar3 != '\0') {
        pcVar8 = pcVar8 + 1;
        cVar3 = *pcVar8;
      }
      param_3 = (int)pcVar8 - (int)param_2 & 0x3fffffff;
    }
    if (param_3 == 0) {
      return;
    }
    if (param_2 == (char *)0x0) {
      return;
    }
    if (param_1[4] <= (int)(param_1[3] + param_3)) {
      if (*(char *)((int)param_1 + 0x19) == '\0') {
        param_3 = (param_1[4] - param_1[3]) - 1;
        *(undefined1 *)((int)param_1 + 0x1a) = 1;
        if ((int)param_3 < 1) {
          return;
        }
      }
      else {
        puVar5 = (undefined4 *)param_1[2];
        if (puVar5 == (undefined4 *)param_1[1]) {
          puVar5 = (undefined4 *)0x0;
        }
        uVar1 = param_3 + 1;
        uVar4 = param_1[3];
        uVar2 = uVar1 + uVar4;
        iVar6 = ((int)uVar1 >> 0x1f) + ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar1,uVar4);
        iVar7 = param_1[5] >> 0x1f;
        if ((iVar7 <= iVar6) && ((iVar7 < iVar6 || ((uint)param_1[5] < uVar2)))) {
          FUN_004aa970(param_1);
          *(undefined1 *)((int)param_1 + 0x1a) = 1;
          return;
        }
        param_1[4] = uVar2;
        if (*(char *)((int)param_1 + 0x19) == '\x01') {
          _Dst = FUN_00494cf0(*param_1,puVar5,uVar2);
        }
        else {
          iVar6 = FUN_004bc920();
          if (iVar6 != 0) goto LAB_004aa8d5;
          _Dst = (undefined4 *)FUN_004a6140((int)puVar5,uVar2);
        }
        if (_Dst == (undefined4 *)0x0) {
LAB_004aa8d5:
          *(undefined1 *)(param_1 + 6) = 1;
          FUN_004aa970(param_1);
          return;
        }
        if ((puVar5 == (undefined4 *)0x0) && (0 < param_1[3])) {
          memcpy(_Dst,(void *)param_1[2],param_1[3]);
        }
        param_1[2] = (int)_Dst;
      }
    }
    memcpy((void *)(param_1[2] + param_1[3]),param_2,param_3);
    param_1[3] = param_1[3] + param_3;
  }
  return;
}


/* FUN_004aa8f0 @ 004aa8f0  kind=lib  attributed-by=lib-island  size=127 */

int __cdecl FUN_004aa8f0(int *param_1)

{
  int iVar1;
  undefined4 *_Dst;
  int iVar2;
  
  if (param_1[2] != 0) {
    *(undefined1 *)(param_1[2] + param_1[3]) = 0;
    iVar1 = param_1[2];
    if (*(char *)((int)param_1 + 0x19) == '\0') {
      return iVar1;
    }
    if (iVar1 != param_1[1]) {
      return iVar1;
    }
    if (*(char *)((int)param_1 + 0x19) == '\x01') {
      _Dst = FUN_00494b90(*param_1,param_1[3] + 1);
    }
    else {
      iVar1 = param_1[3];
      iVar2 = FUN_004bc920();
      if (iVar2 == 0) {
        _Dst = (undefined4 *)FUN_004a0350(iVar1 + 1);
      }
      else {
        _Dst = (undefined4 *)0x0;
      }
    }
    param_1[2] = (int)_Dst;
    if (_Dst != (undefined4 *)0x0) {
      memcpy(_Dst,(void *)param_1[1],param_1[3] + 1);
      return param_1[2];
    }
    *(undefined1 *)(param_1 + 6) = 1;
  }
  return 0;
}


/* FUN_004aa970 @ 004aa970  kind=lib  attributed-by=lib-island  size=60 */

void __cdecl FUN_004aa970(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1[2];
  if (puVar1 != (undefined4 *)param_1[1]) {
    if (*(char *)((int)param_1 + 0x19) == '\x01') {
      FUN_00494b00(*param_1,puVar1);
      param_1[2] = 0;
      return;
    }
    FUN_00466dd0((int)puVar1);
  }
  param_1[2] = 0;
  return;
}


/* FUN_004aa9b0 @ 004aa9b0  kind=lib  attributed-by=lib-island  size=34 */

uint __cdecl FUN_004aa9b0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  if (param_1 != (char *)0x0) {
    cVar1 = *param_1;
    pcVar2 = param_1;
    while (cVar1 != '\0') {
      pcVar2 = pcVar2 + 1;
      cVar1 = *pcVar2;
    }
    return (int)pcVar2 - (int)param_1 & 0x3fffffff;
  }
  return 0;
}


/* FUN_004aa9e0 @ 004aa9e0  kind=lib  attributed-by=lib-island  size=85 */

undefined4 __cdecl FUN_004aa9e0(uint *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((param_2 == 0) && (param_3 == -0x80000000)) {
    if ((int)param_1[1] < 0) {
      *param_1 = *param_1;
      param_1[1] = param_1[1] + 0x80000000;
      return 0;
    }
    return 1;
  }
  uVar1 = FUN_0048bce0(param_1,-param_2,-(param_3 + (uint)(param_2 != 0)));
  return uVar1;
}


/* FUN_004aaa40 @ 004aaa40  kind=lib  attributed-by=lib-island  size=217 */

void __cdecl FUN_004aaa40(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (*(int *)(param_2 + 0x14) == 0) {
    iVar7 = *param_1;
    iVar2 = FUN_004a0350(*(short *)(param_2 + 0x26) + 1);
    if (iVar2 == 0) {
      *(undefined1 *)(iVar7 + 0x38) = 1;
      return;
    }
    if (0 < *(short *)(param_2 + 0x26)) {
      iVar7 = 0;
      iVar5 = 0;
      do {
        iVar6 = iVar5 + 1;
        *(undefined1 *)(iVar5 + iVar2) = *(undefined1 *)(iVar7 + 0x15 + *(int *)(param_2 + 4));
        iVar7 = iVar7 + 0x18;
        iVar5 = iVar6;
      } while (iVar6 < *(short *)(param_2 + 0x26));
    }
    *(undefined1 *)(*(short *)(param_2 + 0x26) + iVar2) = 0;
    *(int *)(param_2 + 0x14) = iVar2;
  }
  iVar7 = param_1[1];
  piVar1 = *(int **)(param_2 + 0x14);
  iVar2 = *param_1;
  if ((iVar7 != 0) && (*(char *)(iVar2 + 0x38) == '\0')) {
    iVar5 = iVar7 + (param_1[7] + -1) * 0x14;
    FUN_0047bc80(iVar2,(int)*(char *)(iVar5 + 1),*(int **)(iVar7 + 0x10 + (param_1[7] + -1) * 0x14))
    ;
    *(undefined4 *)(iVar5 + 0x10) = 0;
    if (piVar1 == (int *)0x0) {
      *(undefined4 *)(iVar5 + 0x10) = 0;
      *(undefined1 *)(iVar5 + 1) = 0;
      return;
    }
    uVar3 = FUN_004aa9b0((char *)piVar1);
    puVar4 = FUN_00494e00(*param_1,piVar1,uVar3);
    *(undefined4 **)(iVar5 + 0x10) = puVar4;
    *(undefined1 *)(iVar5 + 1) = 0xff;
    return;
  }
  FUN_0047bc80(iVar2,0,piVar1);
  return;
}


/* FUN_004aab20 @ 004aab20  kind=lib  attributed-by=lib-island  size=238 */

void __cdecl FUN_004aab20(int *param_1,int param_2,int param_3,char param_4,int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if ((int *)param_1[0x6c] != (int *)0x0) {
    param_1 = (int *)param_1[0x6c];
  }
  iVar5 = 0;
  iVar1 = param_1[0x69];
  if (0 < iVar1) {
    piVar3 = (int *)param_1[0x6a];
    do {
      if ((*piVar3 == param_2) && (piVar3[1] == param_3)) {
        if (((char)piVar3[2] == '\0') && (param_4 == '\0')) {
          *(undefined1 *)(piVar3 + 2) = 0;
          return;
        }
        *(undefined1 *)(piVar3 + 2) = 1;
        return;
      }
      iVar5 = iVar5 + 1;
      piVar3 = piVar3 + 4;
    } while (iVar5 < iVar1);
  }
  puVar2 = (undefined4 *)param_1[0x6a];
  iVar5 = *param_1;
  puVar4 = FUN_00494cf0(iVar5,puVar2,(iVar1 + 1) * 0x10);
  if (puVar4 == (undefined4 *)0x0) {
    FUN_00494b00(iVar5,puVar2);
  }
  param_1[0x6a] = (int)puVar4;
  if (puVar4 != (undefined4 *)0x0) {
    piVar3 = puVar4 + param_1[0x69] * 4;
    param_1[0x69] = param_1[0x69] + 1;
    piVar3[1] = param_3;
    *(char *)(piVar3 + 2) = param_4;
    *piVar3 = param_2;
    piVar3[3] = param_5;
    return;
  }
  param_1[0x69] = 0;
  *(undefined1 *)(*param_1 + 0x38) = 1;
  return;
}


/* FUN_004aac10 @ 004aac10  kind=lib  attributed-by=lib-island  size=58 */

undefined4 __thiscall FUN_004aac10(void *this,int param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  undefined8 *puVar4;
  int iVar5;
  
  if (*(int *)(*param_2 + 0xc) != 0) {
    (*DAT_00582b18)(*(int *)(*param_2 + 0xc),this);
  }
  iVar5 = 0;
  if (0 < *(short *)(param_1 + 0x4c)) {
    iVar2 = 0;
    do {
      uVar1 = *(ushort *)(param_2[0x11] + 0x1c + iVar2);
      piVar3 = (int *)(param_2[0x11] + iVar2);
      puVar4 = (undefined8 *)(*(int *)(param_1 + 0x44) + iVar2);
      if ((uVar1 & 0x2460) != 0) {
        if ((uVar1 & 0x2000) == 0) {
          if (((uVar1 & 0x400) == 0) || ((code *)piVar3[8] == (code *)0x0)) {
            if ((uVar1 & 0x20) == 0) {
              if ((uVar1 & 0x40) != 0) {
                FUN_004b78c0((int)piVar3);
              }
            }
            else {
              FUN_004a6e20((undefined4 *)piVar3[4]);
            }
          }
          else {
            (*(code *)piVar3[8])(piVar3[1]);
            piVar3[8] = 0;
          }
        }
        else {
          FUN_004b7010(piVar3,piVar3[4]);
          FUN_004b76e0(piVar3);
        }
      }
      FUN_00494b00(*piVar3,(undefined4 *)piVar3[9]);
      piVar3[1] = 0;
      piVar3[9] = 0;
      piVar3[8] = 0;
      *(undefined8 *)piVar3 = *puVar4;
      *(undefined8 *)(piVar3 + 2) = puVar4[1];
      *(undefined8 *)(piVar3 + 4) = puVar4[2];
      *(undefined8 *)(piVar3 + 6) = puVar4[3];
      *(undefined8 *)(piVar3 + 8) = puVar4[4];
      *(undefined2 *)((int)puVar4 + 0x1c) = 1;
      *(undefined4 *)(puVar4 + 4) = 0;
      *(undefined4 *)((int)puVar4 + 0x24) = 0;
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + 0x28;
    } while (iVar5 < *(short *)(param_1 + 0x4c));
  }
  if (*(int *)(*param_2 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(*param_2 + 0xc));
  }
  return 0;
}


/* FUN_004aad60 @ 004aad60  kind=lib  attributed-by=lib-island  size=186 */

uint __cdecl
FUN_004aad60(int *param_1,int param_2,int *param_3,int param_4,byte param_5,int param_6,int param_7)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint local_8;
  
  local_8 = 0;
  if (param_2 == 0) {
    return 0;
  }
  do {
    if (((char)*(int *)(param_2 + 8) == (char)((param_3 != (int *)0x0) + 'j')) &&
       ((*(byte *)(param_2 + 9) & param_5) != 0)) {
      puVar1 = *(undefined4 **)(param_2 + 0x10);
      if ((puVar1 == (undefined4 *)0x0) || (param_3 == (int *)0x0)) {
LAB_004aadd9:
        piVar3 = FUN_0047d6f0(param_1,(int *)param_2,param_6,param_7);
        if (piVar3 != (int *)0x0) {
          local_8 = local_8 | piVar3[param_4 + 4];
        }
      }
      else {
        iVar5 = 0;
        if (0 < *param_3) {
          puVar4 = (undefined4 *)(param_3[2] + 4);
          do {
            iVar2 = FUN_0049dab0(puVar1,(byte *)*puVar4);
            if (-1 < iVar2) goto LAB_004aadd9;
            puVar1 = *(undefined4 **)(param_2 + 0x10);
            iVar5 = iVar5 + 1;
            puVar4 = puVar4 + 5;
          } while (iVar5 < *param_3);
        }
      }
    }
    param_2 = *(int *)(param_2 + 0x20);
    if ((int *)param_2 == (int *)0x0) {
      return local_8;
    }
  } while( true );
}


/* FUN_004aae20 @ 004aae20  kind=lib  attributed-by=lib-island  size=117 */

undefined4 * __cdecl FUN_004aae20(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *_Dst;
  undefined4 *puVar2;
  
  iVar1 = param_2[1];
  _Dst = FUN_00494b90(param_1,iVar1 + 0x28U);
  if (_Dst != (undefined4 *)0x0) {
    memset(_Dst,0,iVar1 + 0x28U);
    memcpy(_Dst + 10,(void *)*param_2,param_2[1]);
    _Dst[3] = _Dst + 10;
    _Dst[4] = param_2[1];
    *(undefined1 *)_Dst = 0x6a;
    puVar2 = FUN_00478bb0(param_1,param_3,1,(int *)0x0);
    _Dst[5] = puVar2;
    *(undefined1 *)((int)_Dst + 1) = 99;
  }
  FUN_00498790(param_1,param_3);
  return _Dst;
}


/* FUN_004aaea0 @ 004aaea0  kind=lib  attributed-by=lib-island  size=184 */

undefined4 * __cdecl
FUN_004aaea0(int param_1,undefined4 *param_2,int *param_3,int *param_4,undefined4 *param_5,
            undefined1 param_6)

{
  int iVar1;
  undefined4 *_Dst;
  undefined4 *puVar2;
  int *piVar3;
  
  iVar1 = param_2[1];
  _Dst = FUN_00494b90(param_1,iVar1 + 0x28U);
  if (_Dst == (undefined4 *)0x0) {
    FUN_0049d910(param_1,param_3);
  }
  else {
    memset(_Dst,0,iVar1 + 0x28U);
    memcpy(_Dst + 10,(void *)*param_2,param_2[1]);
    _Dst[3] = _Dst + 10;
    _Dst[4] = param_2[1];
    *(undefined1 *)_Dst = 0x69;
    puVar2 = FUN_004a9680(param_1,param_5,1);
    _Dst[2] = puVar2;
    _Dst[7] = param_3;
    piVar3 = FUN_00499140(param_1,param_4,1);
    _Dst[6] = piVar3;
    *(undefined1 *)((int)_Dst + 1) = param_6;
  }
  FUN_00499060(param_1,param_4);
  if (param_5 != (undefined4 *)0x0) {
    FUN_00472d10(param_1,param_5);
    FUN_00494b00(param_1,param_5);
  }
  return _Dst;
}


/* FUN_004aaf60 @ 004aaf60  kind=lib  attributed-by=lib-island  size=112 */

int __cdecl FUN_004aaf60(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  iVar1 = *(int *)(*(int *)(*param_1 + 0x10) + 0x1c);
  if (*(char *)((int)param_1 + 0x1ca) != '\0') {
    return 0;
  }
  if ((iVar1 != param_2[0x10]) && (piVar4 = *(int **)(iVar1 + 0x30), piVar4 != (int *)0x0)) {
    do {
      iVar1 = piVar4[2];
      if ((*(int *)(iVar1 + 0x18) == param_2[0x10]) &&
         (iVar2 = FUN_004bcc60(*(byte **)(iVar1 + 4),(byte *)*param_2), iVar2 == 0)) {
        if (iVar3 == 0) {
          iVar3 = param_2[0xf];
        }
        *(int *)(iVar1 + 0x20) = iVar3;
        iVar3 = iVar1;
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)0x0);
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  return param_2[0xf];
}


/* FUN_004aafd0 @ 004aafd0  kind=lib  attributed-by=lib-island  size=98 */

undefined8 * __cdecl FUN_004aafd0(int param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00494b90(param_1,0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *(undefined4 **)(puVar1 + 1) = param_2;
    *(undefined2 *)puVar1 = 0x6374;
    return puVar1;
  }
  if (param_2 != (undefined4 *)0x0) {
    FUN_00472d10(param_1,param_2);
    FUN_00494b00(param_1,param_2);
  }
  return (undefined8 *)0x0;
}


/* FUN_004ab040 @ 004ab040  kind=lib  attributed-by=lib-island  size=146 */

undefined4 * __cdecl
FUN_004ab040(int param_1,undefined4 *param_2,int *param_3,undefined4 *param_4,undefined1 param_5)

{
  int iVar1;
  undefined4 *_Dst;
  int *piVar2;
  undefined4 *puVar3;
  
  iVar1 = param_2[1];
  _Dst = FUN_00494b90(param_1,iVar1 + 0x28U);
  if (_Dst != (undefined4 *)0x0) {
    memset(_Dst,0,iVar1 + 0x28U);
    memcpy(_Dst + 10,(void *)*param_2,param_2[1]);
    _Dst[3] = _Dst + 10;
    _Dst[4] = param_2[1];
    *(undefined1 *)_Dst = 0x6b;
    piVar2 = FUN_00499140(param_1,param_3,1);
    _Dst[6] = piVar2;
    puVar3 = FUN_00478bb0(param_1,param_4,1,(int *)0x0);
    _Dst[5] = puVar3;
    *(undefined1 *)((int)_Dst + 1) = param_5;
  }
  FUN_00499060(param_1,param_3);
  FUN_00498790(param_1,param_4);
  return _Dst;
}


/* FUN_004ab0e0 @ 004ab0e0  kind=lib  attributed-by=lib-island  size=109 */

int __cdecl FUN_004ab0e0(int *param_1,undefined4 *param_2,uint param_3,int *param_4,uint *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar2 = 0;
  iVar3 = iVar2;
  if ((*(uint *)(*param_1 + 0x18) & 0x400000) != 0) {
    iVar2 = FUN_004aaf60(param_1,param_2);
    iVar3 = iVar2;
  }
  for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x20)) {
    if ((*(byte *)(iVar2 + 8) == param_3) &&
       (iVar1 = FUN_00471c90(*(undefined4 **)(iVar2 + 0x10),param_4), iVar1 != 0)) {
      uVar4 = uVar4 | *(byte *)(iVar2 + 9);
    }
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = uVar4;
  }
  iVar2 = 0;
  if (uVar4 != 0) {
    iVar2 = iVar3;
  }
  return iVar2;
}


/* FUN_004ab150 @ 004ab150  kind=lib  attributed-by=lib-island  size=147 */

uint __cdecl FUN_004ab150(int *param_1,undefined4 *param_2,int param_3,int *param_4)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  
  iVar1 = *param_1;
  if ((param_3 == 0) || (*(int *)(param_3 + 4) == 0)) {
    uVar3 = (uint)*(byte *)(iVar1 + 0x80);
    *param_4 = (int)param_2;
  }
  else {
    if (*(char *)(iVar1 + 0x81) != '\0') {
      FUN_004962b0(param_1,(byte *)"corrupt database");
      param_1[0x11] = param_1[0x11] + 1;
      return 0xffffffff;
    }
    *param_4 = param_3;
    pbVar2 = (byte *)FUN_004a0d40(iVar1,param_2);
    uVar3 = FUN_00499540(iVar1,pbVar2);
    FUN_00494b00(iVar1,(undefined4 *)pbVar2);
    if ((int)uVar3 < 0) {
      FUN_004962b0(param_1,(byte *)"unknown database %T");
      param_1[0x11] = param_1[0x11] + 1;
      return 0xffffffff;
    }
  }
  return uVar3;
}


/* FUN_004ab1f0 @ 004ab1f0  kind=lib  attributed-by=lib-island  size=210 */

void __cdecl FUN_004ab1f0(int param_1,uint param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint uVar7;
  int *piVar8;
  byte *pbVar9;
  uint uVar10;
  
  puVar6 = (uint *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc + param_2 * 0x10) + 0x18);
  uVar10 = 0;
  if (param_3 != (byte *)0x0) {
    bVar1 = *param_3;
    pbVar9 = param_3;
    while (bVar1 != 0) {
      pbVar9 = pbVar9 + 1;
      bVar1 = *pbVar9;
    }
    uVar10 = (int)pbVar9 - (int)param_3 & 0x3fffffff;
  }
  uVar2 = *puVar6;
  if (uVar2 == 0) {
    param_2 = 0;
  }
  else {
    uVar7 = FUN_004bd210(param_3,uVar10);
    param_2 = uVar7 % uVar2;
  }
  piVar8 = FUN_00479af0((int)puVar6,param_3,uVar10,param_2);
  if (piVar8 != (int *)0x0) {
    puVar3 = (undefined4 *)piVar8[2];
    FUN_004884b0(puVar6,piVar8,param_2);
    if (puVar3 != (undefined4 *)0x0) {
      puVar4 = *(undefined4 **)(puVar3[3] + 8);
      if (puVar4 == puVar3) {
        *(undefined4 *)(puVar3[3] + 8) = puVar3[5];
      }
      else {
        do {
          puVar5 = puVar4;
          if (puVar5 == (undefined4 *)0x0) goto LAB_004ab2a6;
          puVar4 = (undefined4 *)puVar5[5];
        } while ((undefined4 *)puVar5[5] != puVar3);
        puVar5[5] = puVar3[5];
      }
LAB_004ab2a6:
      FUN_00494b00(param_1,(undefined4 *)puVar3[4]);
      FUN_00494b00(param_1,puVar3);
    }
  }
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 2;
  return;
}


/* FUN_004ab2d0 @ 004ab2d0  kind=lib  attributed-by=lib-island  size=168 */

void __cdecl FUN_004ab2d0(int param_1,uint param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint uVar5;
  int *piVar6;
  byte *pbVar7;
  uint uVar8;
  
  uVar8 = 0;
  if (param_3 != (byte *)0x0) {
    bVar1 = *param_3;
    pbVar7 = param_3;
    while (bVar1 != 0) {
      pbVar7 = pbVar7 + 1;
      bVar1 = *pbVar7;
    }
    uVar8 = (int)pbVar7 - (int)param_3 & 0x3fffffff;
  }
  puVar4 = (uint *)(*(int *)(param_2 * 0x10 + *(int *)(param_1 + 0x10) + 0xc) + 8);
  uVar2 = *puVar4;
  if (uVar2 == 0) {
    param_2 = 0;
  }
  else {
    uVar5 = FUN_004bd210(param_3,uVar8);
    param_2 = uVar5 % uVar2;
  }
  piVar6 = FUN_00479af0((int)puVar4,param_3,uVar8,param_2);
  if (piVar6 == (int *)0x0) {
    FUN_00495300(param_1,(undefined4 *)0x0);
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 2;
    return;
  }
  puVar3 = (undefined4 *)piVar6[2];
  FUN_004884b0(puVar4,piVar6,param_2);
  FUN_00495300(param_1,puVar3);
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 2;
  return;
}


/* FUN_004ab380 @ 004ab380  kind=lib  attributed-by=lib-island  size=244 */

void __cdecl FUN_004ab380(int param_1,uint param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint *puVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  
  puVar5 = (uint *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc + param_2 * 0x10) + 0x28);
  uVar10 = 0;
  if (param_3 != (byte *)0x0) {
    bVar1 = *param_3;
    pbVar9 = param_3;
    while (bVar1 != 0) {
      pbVar9 = pbVar9 + 1;
      bVar1 = *pbVar9;
    }
    uVar10 = (int)pbVar9 - (int)param_3 & 0x3fffffff;
  }
  uVar2 = *puVar5;
  if (uVar2 == 0) {
    param_2 = 0;
  }
  else {
    uVar6 = FUN_004bd210(param_3,uVar10);
    param_2 = uVar6 % uVar2;
  }
  piVar7 = FUN_00479af0((int)puVar5,param_3,uVar10,param_2);
  if (piVar7 != (int *)0x0) {
    puVar3 = (undefined4 *)piVar7[2];
    FUN_004884b0(puVar5,piVar7,param_2);
    if (puVar3 != (undefined4 *)0x0) {
      if (puVar3[5] == puVar3[6]) {
        iVar8 = FUN_004bd9c0((int)puVar3);
        piVar7 = (int *)(iVar8 + 0x3c);
        puVar4 = (undefined4 *)*piVar7;
        while (puVar4 != puVar3) {
          piVar7 = puVar4 + 8;
          puVar4 = (undefined4 *)*piVar7;
        }
        *piVar7 = *(int *)(*piVar7 + 0x20);
      }
      FUN_00495480(param_1,(undefined4 *)puVar3[7]);
      FUN_00494b00(param_1,(undefined4 *)*puVar3);
      FUN_00494b00(param_1,(undefined4 *)puVar3[1]);
      FUN_00498790(param_1,(undefined4 *)puVar3[3]);
      FUN_0049d910(param_1,(int *)puVar3[4]);
      FUN_00494b00(param_1,puVar3);
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 2;
    }
  }
  return;
}


/* FUN_004ab480 @ 004ab480  kind=lib  attributed-by=lib-string  size=7341 */

/* WARNING: Removing unreachable block (ram,0x004acf79) */
/* WARNING: Removing unreachable block (ram,0x004acf84) */
/* WARNING: Removing unreachable block (ram,0x004acf9f) */
/* WARNING: Removing unreachable block (ram,0x004acfa6) */
/* WARNING: Removing unreachable block (ram,0x004acfbe) */
/* WARNING: Removing unreachable block (ram,0x004acfcf) */
/* WARNING: Removing unreachable block (ram,0x004acfd3) */
/* WARNING: Removing unreachable block (ram,0x004acfed) */
/* WARNING: Removing unreachable block (ram,0x004acff8) */
/* WARNING: Removing unreachable block (ram,0x004acfc2) */
/* WARNING: Removing unreachable block (ram,0x004acfad) */
/* WARNING: Removing unreachable block (ram,0x004acf8b) */
/* WARNING: Removing unreachable block (ram,0x004ad010) */

void FUN_004ab480(int *param_1,short *param_2,int *param_3,byte *param_4,int *param_5)

{
  byte *pbVar1;
  undefined2 *puVar2;
  int iVar3;
  byte bVar4;
  int *piVar5;
  uint uVar6;
  bool bVar7;
  ushort uVar8;
  int *piVar9;
  int iVar10;
  undefined2 extraout_var_00;
  undefined3 extraout_var;
  int *piVar11;
  undefined2 extraout_var_01;
  undefined4 *puVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  byte *pbVar17;
  int iVar18;
  byte *pbVar19;
  uint *puVar20;
  uint uVar21;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  short *local_6c;
  uint local_68;
  int local_64;
  byte *local_60;
  int local_5c;
  byte *local_58;
  undefined4 *local_54;
  uint local_50;
  uint *local_4c;
  int *local_48;
  int local_44;
  int *local_40;
  int local_3c;
  int local_38;
  uint *local_34;
  int *local_30;
  uint *local_2c;
  uint *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 *local_14;
  uint local_10;
  uint *local_c;
  int *local_8;
  
  local_1c = *param_1;
  local_40 = (int *)0x0;
  local_14 = (undefined4 *)0x0;
  local_60 = (byte *)0x0;
  local_44 = 0;
  local_64 = 0;
  local_58 = (byte *)0x0;
  local_74 = 0;
  if ((param_1[0x11] != 0) || (*(char *)(local_1c + 0x38) != '\0')) {
    local_6c = param_2;
    puVar12 = local_14;
    goto LAB_004ad0fd;
  }
  local_6c = param_2;
  piVar9 = (int *)FUN_004aa130(param_1,(int)param_2);
  puVar12 = local_14;
  local_8 = piVar9;
  if (piVar9 == (int *)0x0) goto LAB_004ad0fd;
  local_24 = FUN_004a7ba0(*param_1,piVar9[0x10]);
  local_48 = (int *)FUN_004ab0e0(param_1,piVar9,0x6b,param_3,&local_68);
  local_50 = (uint)(piVar9[3] != 0);
  iVar10 = FUN_004b9570(param_1,(int)piVar9);
  puVar12 = local_14;
  if (((iVar10 != 0) ||
      (iVar10 = FUN_0049f850(param_1,(int)piVar9,local_68), puVar12 = local_14, iVar10 != 0)) ||
     (local_14 = FUN_00494b90(local_1c,(int)*(short *)((int)piVar9 + 0x26) << 2), puVar12 = local_14
     , local_14 == (undefined4 *)0x0)) goto LAB_004ad0fd;
  iVar10 = 0;
  if (0 < *(short *)((int)piVar9 + 0x26)) {
    do {
      local_14[iVar10] = 0xffffffff;
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(short *)((int)piVar9 + 0x26));
  }
  local_18 = param_1[0x12];
  *(int *)(param_2 + 0x1a) = local_18;
  param_1[0x12] = param_1[0x12] + 1;
  iVar15 = param_1[0x12];
  for (iVar10 = piVar9[2]; iVar10 != 0; iVar10 = *(int *)(iVar10 + 0x14)) {
    iVar15 = iVar15 + 1;
    param_1[0x12] = iVar15;
  }
  local_8c = 0;
  local_84 = 0;
  local_7c = 0;
  local_94 = CONCAT44(param_2,param_1);
  local_3c = 0;
  local_10 = 0;
  if (0 < *param_3) {
    local_30 = (int *)0x0;
    do {
      piVar9 = local_30;
      uVar8 = FUN_004a69e0((int *)&local_94,*(int *)(param_3[2] + (int)local_30));
      puVar12 = local_14;
      if (CONCAT22(extraout_var_00,uVar8) != 0) goto LAB_004ad0fd;
      iVar10 = 0;
      if (0 < *(short *)((int)local_8 + 0x26)) {
        local_54 = (undefined4 *)(param_3[2] + (int)piVar9);
        puVar12 = (undefined4 *)local_8[1];
        do {
          pbVar17 = (byte *)*puVar12;
          pbVar19 = (byte *)local_54[1];
          bVar4 = *pbVar17;
          while ((bVar4 != 0 && ((&DAT_00569620)[bVar4] == (&DAT_00569620)[*pbVar19]))) {
            pbVar1 = pbVar17 + 1;
            pbVar17 = pbVar17 + 1;
            pbVar19 = pbVar19 + 1;
            bVar4 = *pbVar1;
          }
          piVar9 = local_30;
          if ((&DAT_00569620)[*pbVar17] == (&DAT_00569620)[*pbVar19]) {
            if (iVar10 == (short)local_8[9]) {
              local_3c = 1;
              local_60 = (byte *)*local_54;
            }
            local_14[iVar10] = local_10;
            break;
          }
          iVar10 = iVar10 + 1;
          puVar12 = puVar12 + 6;
        } while (iVar10 < *(short *)((int)local_8 + 0x26));
      }
      if (*(short *)((int)local_8 + 0x26) <= iVar10) {
        iVar15 = param_3[2];
        bVar7 = FUN_0049f8e0(*(byte **)(iVar15 + 4 + (int)piVar9));
        if (CONCAT31(extraout_var,bVar7) == 0) {
          FUN_004962b0(param_1,(byte *)"no such column: %s");
          *(undefined1 *)((int)param_1 + 0x11) = 1;
          puVar12 = local_14;
          goto LAB_004ad0fd;
        }
        local_60 = *(byte **)(iVar15 + (int)piVar9);
        local_3c = 1;
      }
      iVar15 = FUN_0048d4b0(param_1,0x17,*local_8,*(undefined4 *)(local_8[1] + iVar10 * 0x18),
                            *(undefined4 *)(*(int *)(local_1c + 0x10) + local_24 * 0x10));
      puVar12 = local_14;
      if (iVar15 == 1) goto LAB_004ad0fd;
      if (iVar15 == 2) {
        local_14[iVar10] = 0xffffffff;
      }
      local_10 = local_10 + 1;
      local_30 = piVar9 + 5;
      piVar9 = local_8;
    } while ((int)local_10 < *param_3);
  }
  local_38 = FUN_0049aed0(param_1,piVar9,(int)local_14,local_3c);
  iVar10 = piVar9[2];
  iVar15 = 0;
  if (iVar10 == 0) {
LAB_004ab7cc:
    piVar11 = (int *)0x0;
  }
  else {
    do {
      iVar10 = *(int *)(iVar10 + 0x14);
      iVar15 = iVar15 + 1;
    } while (iVar10 != 0);
    if (iVar15 < 1) goto LAB_004ab7cc;
    piVar11 = FUN_00494b90(local_1c,iVar15 * 4);
    puVar12 = local_14;
    local_40 = piVar11;
    if (piVar11 == (int *)0x0) goto LAB_004ad0fd;
  }
  for (iVar10 = piVar9[2]; iVar10 != 0; iVar10 = *(int *)(iVar10 + 0x14)) {
    if ((local_38 == 0) && (local_3c == 0)) {
      iVar15 = 0;
      if (0 < *(int *)(iVar10 + 0x24)) {
        piVar9 = *(int **)(iVar10 + 4);
        iVar18 = 0;
        do {
          if (-1 < (int)local_14[*piVar9]) {
            param_1[0x13] = param_1[0x13] + 1;
            iVar15 = param_1[0x13];
            break;
          }
          iVar18 = iVar18 + 1;
          piVar9 = piVar9 + 1;
        } while (iVar18 < *(int *)(iVar10 + 0x24));
      }
    }
    else {
      param_1[0x13] = param_1[0x13] + 1;
      iVar15 = param_1[0x13];
    }
    *piVar11 = iVar15;
    piVar11 = piVar11 + 1;
  }
  piVar9 = (int *)param_1[2];
  local_30 = piVar9;
  if (piVar9 == (int *)0x0) {
    iVar10 = *param_1;
    piVar9 = FUN_00494b90(iVar10,0xc0);
    if (piVar9 == (int *)0x0) {
      piVar9 = (int *)0x0;
      local_30 = (int *)0x0;
    }
    else {
      local_30 = piVar9;
      memset(piVar9,0,0xc0);
      *piVar9 = iVar10;
      if (*(int *)(iVar10 + 4) != 0) {
        *(int **)(*(int *)(iVar10 + 4) + 0x38) = piVar9;
      }
      piVar9[0xf] = *(int *)(iVar10 + 4);
      piVar9[0xe] = 0;
      *(int **)(iVar10 + 4) = piVar9;
      piVar9[0xc] = 0x26bceaa5;
    }
    param_1[2] = (int)piVar9;
    puVar12 = local_14;
    if (piVar9 == (int *)0x0) goto LAB_004ad0fd;
    iVar10 = piVar9[7];
    if ((iVar10 < piVar9[8]) || (iVar15 = FUN_0047de10(piVar9), iVar15 == 0)) {
      iVar15 = piVar9[1];
      piVar9[7] = piVar9[7] + 1;
      *(undefined2 *)(iVar15 + iVar10 * 0x14) = 0x94;
      *(undefined1 *)(iVar15 + 3 + iVar10 * 0x14) = 0;
      *(undefined4 *)(iVar15 + 4 + iVar10 * 0x14) = 0;
      *(undefined4 *)(iVar15 + 8 + iVar10 * 0x14) = 0;
      *(undefined4 *)(iVar15 + 0xc + iVar10 * 0x14) = 0;
      *(undefined4 *)(iVar15 + 0x10 + iVar10 * 0x14) = 0;
    }
  }
  if (*(char *)((int)param_1 + 0x12) == '\0') {
    piVar9[0x18] = piVar9[0x18] | 0x10;
  }
  piVar11 = param_1;
  if ((int *)param_1[0x6c] != (int *)0x0) {
    piVar11 = (int *)param_1[0x6c];
  }
  FUN_00493400(param_1,local_24);
  puVar12 = local_14;
  *(byte *)((int)piVar11 + 0x17) = *(byte *)((int)piVar11 + 0x17) | 1;
  piVar11[0x55] = piVar11[0x55] | 1 << ((byte)local_24 & 0x1f);
  if ((*(byte *)((int)local_8 + 0x2a) & 0x10) != 0) {
    FUN_004be390(param_1,(undefined4 *)param_2,(int)local_8,(int)param_3,(undefined4 *)local_60,
                 (int)local_14,param_4,(int)param_5);
    param_4 = (byte *)0x0;
    local_6c = (short *)0x0;
    goto LAB_004ad0fd;
  }
  param_1[0x13] = param_1[0x13] + 1;
  puVar20 = (uint *)param_1[0x13];
  local_28 = (uint *)((int)puVar20 + 1);
  param_1[0x13] = (int)local_28;
  if ((local_48 != (int *)0x0) || (local_38 != 0)) {
    local_58 = (byte *)((int)puVar20 + 2);
    param_1[0x13] = (int)((int)*(short *)((int)local_8 + 0x26) + (int)local_28);
  }
  if (((local_3c != 0) || (local_48 != (int *)0x0)) || (local_2c = local_28, local_38 != 0)) {
    param_1[0x13] = param_1[0x13] + 1;
    local_2c = (uint *)param_1[0x13];
  }
  local_20 = param_1[0x13] + 1;
  param_1[0x13] = (int)*(short *)((int)local_8 + 0x26) + param_1[0x13];
  local_34 = puVar20;
  if (local_50 != 0) {
    local_74 = CONCAT44(param_1,param_1[0x81]);
    param_1[0x81] = *local_8;
    FUN_004a05b0(param_1,local_8,(undefined4 *)param_4,local_18);
  }
  uVar8 = FUN_004a69e0((int *)&local_94,(int)param_4);
  puVar12 = local_14;
  if (CONCAT22(extraout_var_01,uVar8) != 0) goto LAB_004ad0fd;
  iVar10 = piVar9[7];
  if ((iVar10 < piVar9[8]) || (iVar15 = FUN_0047de10(piVar9), iVar15 == 0)) {
    iVar15 = piVar9[1];
    piVar9[7] = piVar9[7] + 1;
    *(undefined2 *)(iVar15 + iVar10 * 0x14) = 10;
    *(undefined1 *)(iVar15 + 3 + iVar10 * 0x14) = 0;
    *(undefined4 *)(iVar15 + 4 + iVar10 * 0x14) = 0;
    *(uint **)(iVar15 + 8 + iVar10 * 0x14) = puVar20;
    *(uint **)(iVar15 + 0xc + iVar10 * 0x14) = local_28;
    *(undefined4 *)(iVar15 + 0x10 + iVar10 * 0x14) = 0;
  }
  piVar11 = FUN_004bb240(param_1,param_2,param_4,(undefined2 *)0x0,(int *)0x0,4,0);
  puVar12 = local_14;
  if (piVar11 == (int *)0x0) goto LAB_004ad0fd;
  local_54 = (undefined4 *)(uint)*(byte *)(piVar11 + 3);
  iVar10 = piVar9[7];
  if ((iVar10 < piVar9[8]) || (iVar15 = FUN_0047de10(piVar9), iVar15 == 0)) {
    iVar15 = piVar9[1];
    piVar9[7] = piVar9[7] + 1;
    *(int *)(iVar15 + 4 + iVar10 * 0x14) = local_18;
    *(undefined2 *)(iVar15 + iVar10 * 0x14) = 0x41;
    *(undefined1 *)(iVar15 + 3 + iVar10 * 0x14) = 0;
    *(uint **)(iVar15 + 8 + iVar10 * 0x14) = local_28;
    *(undefined4 *)(iVar15 + 0xc + iVar10 * 0x14) = 0;
    *(undefined4 *)(iVar15 + 0x10 + iVar10 * 0x14) = 0;
  }
  if ((local_54 == (undefined4 *)0x0) &&
     ((iVar10 = piVar9[7], iVar10 < piVar9[8] || (iVar15 = FUN_0047de10(piVar9), iVar15 == 0)))) {
    iVar15 = piVar9[1];
    piVar9[7] = piVar9[7] + 1;
    *(uint **)(iVar15 + 4 + iVar10 * 0x14) = local_34;
    *(undefined2 *)(iVar15 + iVar10 * 0x14) = 0x70;
    *(undefined1 *)(iVar15 + 3 + iVar10 * 0x14) = 0;
    *(uint **)(iVar15 + 8 + iVar10 * 0x14) = local_28;
    *(undefined4 *)(iVar15 + 0xc + iVar10 * 0x14) = 0;
    *(undefined4 *)(iVar15 + 0x10 + iVar10 * 0x14) = 0;
  }
  FUN_004bbe40(piVar11);
  if (((*(byte *)(local_1c + 0x18) & 0x10) != 0) && (param_1[0x6d] == 0)) {
    param_1[0x13] = param_1[0x13] + 1;
    iVar10 = piVar9[7];
    iVar15 = param_1[0x13];
    local_64 = iVar15;
    if ((iVar10 < piVar9[8]) || (iVar18 = FUN_0047de10(piVar9), iVar18 == 0)) {
      iVar18 = piVar9[1];
      piVar9[7] = piVar9[7] + 1;
      *(undefined2 *)(iVar18 + iVar10 * 0x14) = 7;
      *(undefined1 *)(iVar18 + 3 + iVar10 * 0x14) = 0;
      *(undefined4 *)(iVar18 + 4 + iVar10 * 0x14) = 0;
      *(int *)(iVar18 + 8 + iVar10 * 0x14) = iVar15;
      *(undefined4 *)(iVar18 + 0xc + iVar10 * 0x14) = 0;
      *(undefined4 *)(iVar18 + 0x10 + iVar10 * 0x14) = 0;
    }
  }
  piVar11 = local_8;
  if (local_50 == 0) {
    if (local_54 == (undefined4 *)0x0) {
      FUN_004a0f40(param_1,local_18,local_24,local_8,0x28);
    }
    if (param_5 == (int *)0x5) {
LAB_004abbc2:
      iVar15 = 1;
      local_44 = 1;
    }
    else {
      iVar10 = piVar11[2];
      iVar15 = 0;
      local_44 = 0;
      for (; iVar10 != 0; iVar10 = *(int *)(iVar10 + 0x14)) {
        if (*(char *)(iVar10 + 0x2c) == '\x05') goto LAB_004abbc2;
      }
    }
    iVar10 = piVar11[2];
    local_10 = 0;
    uVar16 = local_10;
    while (local_5c = iVar10, local_10 = uVar16, iVar10 != 0) {
      if ((iVar15 != 0) || (iVar15 = 0, 0 < local_40[uVar16])) {
        local_4c = (uint *)FUN_0049dbf0(param_1,iVar10);
        iVar15 = piVar9[8];
        local_c = *(uint **)(iVar10 + 0x28);
        iVar10 = piVar9[7];
        if (iVar10 < iVar15) {
LAB_004abc78:
          piVar9[7] = piVar9[7] + 1;
          puVar2 = (undefined2 *)(piVar9[1] + iVar10 * 0x14);
          *(uint *)(puVar2 + 2) = local_18 + 1 + uVar16;
          *(uint **)(puVar2 + 4) = local_c;
          *puVar2 = 0x28;
          *(undefined1 *)((int)puVar2 + 3) = 0;
          *(int *)(puVar2 + 6) = local_24;
          *(undefined4 *)(puVar2 + 8) = 0;
        }
        else {
          if (iVar15 == 0) {
            iVar15 = 0x33;
          }
          else {
            iVar15 = iVar15 * 2;
          }
          puVar12 = FUN_00494cf0(*piVar9,(undefined4 *)piVar9[1],iVar15 * 0x14);
          if (puVar12 != (undefined4 *)0x0) {
            iVar15 = *piVar9;
            if (((iVar15 == 0) || (puVar12 < *(undefined4 **)(iVar15 + 0x104))) ||
               (*(undefined4 **)(iVar15 + 0x108) <= puVar12)) {
              uVar16 = (*DAT_00582af0._4_4_)(puVar12);
            }
            else {
              uVar16 = (uint)*(ushort *)(iVar15 + 0xe8);
            }
            piVar9[1] = (int)puVar12;
            piVar9[8] = uVar16 / 0x14;
            uVar16 = local_10;
            goto LAB_004abc78;
          }
          iVar10 = 1;
          uVar16 = local_10;
        }
        iVar15 = piVar9[1];
        iVar18 = *piVar9;
        if ((iVar15 == 0) || (*(char *)(iVar18 + 0x38) != '\0')) {
          FUN_0047bc80(iVar18,0xfffffff0,(int *)local_4c);
          iVar15 = local_44;
        }
        else {
          if (iVar10 < 0) {
            iVar10 = piVar9[7] + -1;
          }
          iVar3 = iVar15 + iVar10 * 0x14;
          FUN_0047bc80(iVar18,(int)*(char *)(iVar3 + 1),*(int **)(iVar15 + 0x10 + iVar10 * 0x14));
          *(undefined4 *)(iVar3 + 0x10) = 0;
          iVar15 = local_44;
          uVar16 = local_10;
          if (local_4c == (uint *)0x0) {
            *(undefined4 *)(iVar3 + 0x10) = 0;
            *(undefined1 *)(iVar3 + 1) = 0;
          }
          else {
            *(uint **)(iVar3 + 0x10) = local_4c;
            *(undefined1 *)(iVar3 + 1) = 0xfa;
          }
        }
      }
      uVar16 = uVar16 + 1;
      iVar10 = *(int *)(local_5c + 0x14);
    }
  }
  uVar16 = piVar9[7];
  if (local_54 == (undefined4 *)0x0) {
    local_10 = uVar16;
    if (((int)uVar16 < piVar9[8]) || (iVar10 = FUN_0047de10(piVar9), iVar10 == 0)) {
      iVar10 = piVar9[1];
      piVar9[7] = piVar9[7] + 1;
      *(uint **)(iVar10 + 4 + uVar16 * 0x14) = local_34;
      *(undefined2 *)(iVar10 + uVar16 * 0x14) = 0x71;
      *(undefined1 *)(iVar10 + 3 + uVar16 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 8 + uVar16 * 0x14) = 0;
      *(uint **)(iVar10 + 0xc + uVar16 * 0x14) = local_28;
      *(undefined4 *)(iVar10 + 0x10 + uVar16 * 0x14) = 0;
    }
    else {
      local_10 = 1;
    }
  }
  else {
    if (((int)uVar16 < piVar9[8]) || (iVar10 = FUN_0047de10(piVar9), iVar10 == 0)) {
      iVar10 = piVar9[1];
      piVar9[7] = piVar9[7] + 1;
      *(undefined2 *)(iVar10 + uVar16 * 0x14) = 0x4a;
      *(undefined1 *)(iVar10 + 3 + uVar16 * 0x14) = 0;
      *(uint **)(iVar10 + 4 + uVar16 * 0x14) = local_28;
      *(undefined4 *)(iVar10 + 8 + uVar16 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 0xc + uVar16 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 0x10 + uVar16 * 0x14) = 0;
    }
    else {
      uVar16 = 1;
    }
    uVar13 = piVar9[7];
    local_10 = uVar13;
    if (((int)uVar13 < piVar9[8]) || (iVar10 = FUN_0047de10(piVar9), iVar10 == 0)) {
      iVar10 = piVar9[1];
      piVar9[7] = piVar9[7] + 1;
      *(undefined2 *)(iVar10 + uVar13 * 0x14) = 1;
      *(undefined1 *)(iVar10 + 3 + uVar13 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 4 + uVar13 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 8 + uVar13 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 0xc + uVar13 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 0x10 + uVar13 * 0x14) = 0;
    }
    else {
      local_10 = 1;
    }
    if ((-1 < (int)uVar16) && (uVar16 < (uint)piVar9[7])) {
      *(int *)(piVar9[1] + 8 + uVar16 * 0x14) = piVar9[7];
    }
  }
  iVar10 = piVar9[7];
  iVar15 = piVar9[8];
  if (iVar10 < iVar15) {
LAB_004abeb4:
    iVar15 = piVar9[1];
    piVar9[7] = piVar9[7] + 1;
    *(int *)(iVar15 + 4 + iVar10 * 0x14) = local_18;
    *(uint *)(iVar15 + 8 + iVar10 * 0x14) = local_10;
    *(undefined2 *)(iVar15 + iVar10 * 0x14) = 0x36;
    *(undefined1 *)(iVar15 + 3 + iVar10 * 0x14) = 0;
    *(uint **)(iVar15 + 0xc + iVar10 * 0x14) = local_28;
    *(undefined4 *)(iVar15 + 0x10 + iVar10 * 0x14) = 0;
  }
  else {
    if (iVar15 == 0) {
      iVar15 = 0x33;
    }
    else {
      iVar15 = iVar15 * 2;
    }
    puVar12 = FUN_00494cf0(*piVar9,(undefined4 *)piVar9[1],iVar15 * 0x14);
    if (puVar12 != (undefined4 *)0x0) {
      iVar15 = *piVar9;
      if (((iVar15 == 0) || (puVar12 < *(undefined4 **)(iVar15 + 0x104))) ||
         (*(undefined4 **)(iVar15 + 0x108) <= puVar12)) {
        uVar16 = (*DAT_00582af0._4_4_)(puVar12);
      }
      else {
        uVar16 = (uint)*(ushort *)(iVar15 + 0xe8);
      }
      piVar9[8] = uVar16 / 0x14;
      piVar9[1] = (int)puVar12;
      goto LAB_004abeb4;
    }
  }
  puVar20 = local_2c;
  if (local_3c != 0) {
    if ((local_60 == (byte *)0x0) || (*local_60 != 0x84)) {
      local_c = (uint *)FUN_00497780(param_1,local_60,(int)local_2c);
      if (((local_c != puVar20) && (piVar11 = (int *)param_1[2], piVar11 != (int *)0x0)) &&
         ((iVar10 = piVar11[7], iVar10 < piVar11[8] || (iVar15 = FUN_0047de10(piVar11), iVar15 == 0)
          ))) {
        iVar15 = piVar11[1];
        piVar11[7] = piVar11[7] + 1;
        *(undefined2 *)(iVar15 + iVar10 * 0x14) = 0xf;
        goto LAB_004abf2b;
      }
    }
    else {
      local_c = *(uint **)(local_60 + 0x18);
      piVar11 = (int *)param_1[2];
      iVar10 = piVar11[7];
      if ((iVar10 < piVar11[8]) || (iVar15 = FUN_0047de10(piVar11), iVar15 == 0)) {
        iVar15 = piVar11[1];
        piVar11[7] = piVar11[7] + 1;
        *(undefined2 *)(iVar15 + iVar10 * 0x14) = 0xe;
LAB_004abf2b:
        *(undefined1 *)(iVar15 + 3 + iVar10 * 0x14) = 0;
        *(uint **)(iVar15 + 4 + iVar10 * 0x14) = local_c;
        *(uint **)(iVar15 + 8 + iVar10 * 0x14) = local_2c;
        *(undefined4 *)(iVar15 + 0xc + iVar10 * 0x14) = 0;
        *(undefined4 *)(iVar15 + 0x10 + iVar10 * 0x14) = 0;
      }
    }
    puVar20 = local_2c;
    iVar10 = piVar9[7];
    if ((iVar10 < piVar9[8]) || (iVar15 = FUN_0047de10(piVar9), iVar15 == 0)) {
      iVar15 = piVar9[1];
      piVar9[7] = piVar9[7] + 1;
      *(undefined2 *)(iVar15 + iVar10 * 0x14) = 0x15;
      *(undefined1 *)(iVar15 + 3 + iVar10 * 0x14) = 0;
      *(uint **)(iVar15 + 4 + iVar10 * 0x14) = puVar20;
      *(undefined4 *)(iVar15 + 8 + iVar10 * 0x14) = 0;
      *(undefined4 *)(iVar15 + 0xc + iVar10 * 0x14) = 0;
      *(undefined4 *)(iVar15 + 0x10 + iVar10 * 0x14) = 0;
    }
  }
  piVar11 = local_8;
  if (local_38 == 0) {
    if (local_48 != (int *)0x0) {
      uVar16 = 0;
      goto LAB_004ac005;
    }
  }
  else {
    uVar16 = FUN_0049ad30(param_1,local_8);
LAB_004ac005:
    uVar13 = FUN_004aad60(param_1,(int)local_48,param_3,0,3,piVar11,param_5);
    local_34 = (uint *)(uVar16 | uVar13);
    iVar10 = 0;
    piVar11 = local_8;
    if (0 < *(short *)((int)local_8 + 0x26)) {
      do {
        if ((((int)local_14[iVar10] < 0) || (local_34 == (uint *)0xffffffff)) ||
           ((iVar10 < 0x20 && (((uint)local_34 & 1 << ((byte)iVar10 & 0x1f)) != 0)))) {
          FUN_00497170(piVar9,piVar11,local_18,iVar10,(int)(local_58 + iVar10));
          piVar11 = local_8;
        }
        else {
          local_c = (uint *)piVar9[7];
          iVar15 = piVar9[8];
          if (iVar15 <= (int)local_c) {
            if (iVar15 == 0) {
              iVar15 = 0x33;
            }
            else {
              iVar15 = iVar15 * 2;
            }
            puVar12 = FUN_00494cf0(*piVar9,(undefined4 *)piVar9[1],iVar15 * 0x14);
            piVar11 = local_8;
            if (puVar12 == (undefined4 *)0x0) goto LAB_004ac130;
            iVar15 = *piVar9;
            if (((iVar15 == 0) || (puVar12 < *(undefined4 **)(iVar15 + 0x104))) ||
               (*(undefined4 **)(iVar15 + 0x108) <= puVar12)) {
              uVar16 = (*DAT_00582af0._4_4_)(puVar12);
            }
            else {
              uVar16 = (uint)*(ushort *)(iVar15 + 0xe8);
            }
            piVar9[8] = uVar16 / 0x14;
            piVar9[1] = (int)puVar12;
            piVar11 = local_8;
          }
          piVar9[7] = piVar9[7] + 1;
          puVar2 = (undefined2 *)(piVar9[1] + (int)local_c * 0x14);
          *puVar2 = 10;
          *(undefined1 *)((int)puVar2 + 3) = 0;
          *(undefined4 *)(puVar2 + 2) = 0;
          *(byte **)(puVar2 + 4) = local_58 + iVar10;
          *(undefined4 *)(puVar2 + 6) = 0;
          *(undefined4 *)(puVar2 + 8) = 0;
        }
LAB_004ac130:
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(short *)((int)piVar11 + 0x26));
    }
    if (local_3c == 0) {
      iVar10 = piVar9[7];
      iVar15 = piVar9[8];
      if (iVar15 <= iVar10) {
        if (iVar15 == 0) {
          iVar15 = 0x33;
        }
        else {
          iVar15 = iVar15 * 2;
        }
        puVar12 = FUN_00494cf0(*piVar9,(undefined4 *)piVar9[1],iVar15 * 0x14);
        if (puVar12 == (undefined4 *)0x0) goto LAB_004ac1e8;
        iVar15 = *piVar9;
        if (((iVar15 == 0) || (puVar12 < *(undefined4 **)(iVar15 + 0x104))) ||
           (*(undefined4 **)(iVar15 + 0x108) <= puVar12)) {
          uVar16 = (*DAT_00582af0._4_4_)(puVar12);
        }
        else {
          uVar16 = (uint)*(ushort *)(iVar15 + 0xe8);
        }
        piVar9[8] = uVar16 / 0x14;
        piVar9[1] = (int)puVar12;
      }
      iVar15 = piVar9[1];
      piVar9[7] = piVar9[7] + 1;
      *(uint **)(iVar15 + 4 + iVar10 * 0x14) = local_28;
      *(undefined2 *)(iVar15 + iVar10 * 0x14) = 0xe;
      *(undefined1 *)(iVar15 + 3 + iVar10 * 0x14) = 0;
      *(uint **)(iVar15 + 8 + iVar10 * 0x14) = local_2c;
      *(undefined4 *)(iVar15 + 0xc + iVar10 * 0x14) = 0;
      *(undefined4 *)(iVar15 + 0x10 + iVar10 * 0x14) = 0;
    }
  }
LAB_004ac1e8:
  piVar11 = local_8;
  local_58 = (byte *)FUN_004aad60(param_1,(int)local_48,param_3,1,1,local_8,param_5);
  iVar10 = piVar9[7];
  local_c = (uint *)(local_20 + -1 + (int)*(short *)((int)piVar11 + 0x26));
  iVar15 = piVar9[8];
  if (iVar10 < iVar15) {
LAB_004ac280:
    iVar15 = piVar9[1];
    piVar9[7] = piVar9[7] + 1;
    *(undefined2 *)(iVar15 + iVar10 * 0x14) = 10;
    *(undefined1 *)(iVar15 + 3 + iVar10 * 0x14) = 0;
    *(undefined4 *)(iVar15 + 4 + iVar10 * 0x14) = 0;
    *(int *)(iVar15 + 8 + iVar10 * 0x14) = local_20;
    *(uint **)(iVar15 + 0xc + iVar10 * 0x14) = local_c;
    *(undefined4 *)(iVar15 + 0x10 + iVar10 * 0x14) = 0;
  }
  else {
    if (iVar15 == 0) {
      iVar15 = 0x33;
    }
    else {
      iVar15 = iVar15 * 2;
    }
    puVar12 = FUN_00494cf0(*piVar9,(undefined4 *)piVar9[1],iVar15 * 0x14);
    if (puVar12 != (undefined4 *)0x0) {
      iVar15 = *piVar9;
      if (((iVar15 == 0) || (puVar12 < *(undefined4 **)(iVar15 + 0x104))) ||
         (*(undefined4 **)(iVar15 + 0x108) <= puVar12)) {
        uVar16 = (*DAT_00582af0._4_4_)(puVar12);
      }
      else {
        uVar16 = (uint)*(ushort *)(iVar15 + 0xe8);
      }
      piVar9[8] = uVar16 / 0x14;
      piVar9[1] = (int)puVar12;
      goto LAB_004ac280;
    }
  }
  local_24 = 0;
  piVar11 = local_8;
  iVar10 = local_20;
  if (0 < *(short *)((int)local_8 + 0x26)) {
    do {
      iVar15 = local_24;
      if (local_24 != (short)piVar11[9]) {
        if ((int)local_14[local_24] < 0) {
          if ((((local_68 & 1) == 0) || (0x1f < local_24)) ||
             (((uint)local_58 & 1 << ((byte)local_24 & 0x1f)) != 0)) {
            iVar10 = piVar9[7];
            iVar15 = piVar9[8];
            if (iVar10 < iVar15) {
LAB_004ac567:
              piVar9[7] = piVar9[7] + 1;
              puVar2 = (undefined2 *)(piVar9[1] + iVar10 * 0x14);
              *(int *)(puVar2 + 2) = local_18;
              *puVar2 = 0x1d;
              *(undefined1 *)((int)puVar2 + 3) = 0;
              *(int *)(puVar2 + 4) = local_24;
              *(int *)(puVar2 + 6) = local_20 + local_24;
              *(undefined4 *)(puVar2 + 8) = 0;
            }
            else {
              if (iVar15 == 0) {
                iVar15 = 0x33;
              }
              else {
                iVar15 = iVar15 * 2;
              }
              puVar12 = FUN_00494cf0(*piVar9,(undefined4 *)piVar9[1],iVar15 * 0x14);
              if (puVar12 != (undefined4 *)0x0) {
                iVar15 = *piVar9;
                if (((iVar15 == 0) || (puVar12 < *(undefined4 **)(iVar15 + 0x104))) ||
                   (*(undefined4 **)(iVar15 + 0x108) <= puVar12)) {
                  uVar16 = (*DAT_00582af0._4_4_)(puVar12);
                }
                else {
                  uVar16 = (uint)*(ushort *)(iVar15 + 0xe8);
                }
                piVar9[1] = (int)puVar12;
                piVar9[8] = uVar16 / 0x14;
                goto LAB_004ac567;
              }
            }
            iVar10 = local_20;
            iVar15 = local_24;
            FUN_00493630(piVar9,local_8,local_24,local_20 + local_24);
            piVar11 = local_8;
          }
        }
        else {
          pbVar17 = *(byte **)(param_3[2] + local_14[local_24] * 0x14);
          if ((pbVar17 == (byte *)0x0) || (*pbVar17 != 0x84)) {
            puVar20 = (uint *)(iVar10 + local_24);
            local_c = puVar20;
            local_4c = (uint *)FUN_00497780(param_1,pbVar17,(int)puVar20);
            piVar11 = local_8;
            iVar10 = local_20;
            if ((local_4c != puVar20) &&
               (piVar5 = (int *)param_1[2], iVar15 = local_24, piVar5 != (int *)0x0)) {
              local_34 = (uint *)piVar5[7];
              iVar10 = piVar5[8];
              if (iVar10 <= (int)local_34) {
                if (iVar10 == 0) {
                  iVar10 = 0x33;
                }
                else {
                  iVar10 = iVar10 * 2;
                }
                puVar12 = FUN_00494cf0(*piVar5,(undefined4 *)piVar5[1],iVar10 * 0x14);
                piVar11 = local_8;
                iVar10 = local_20;
                iVar15 = local_24;
                if (puVar12 == (undefined4 *)0x0) goto LAB_004ac49e;
                iVar10 = *piVar5;
                if (((iVar10 == 0) || (puVar12 < *(undefined4 **)(iVar10 + 0x104))) ||
                   (*(undefined4 **)(iVar10 + 0x108) <= puVar12)) {
                  uVar16 = (*DAT_00582af0._4_4_)(puVar12);
                }
                else {
                  uVar16 = (uint)*(ushort *)(iVar10 + 0xe8);
                }
                piVar5[1] = (int)puVar12;
                piVar5[8] = uVar16 / 0x14;
                puVar20 = local_c;
              }
              iVar10 = piVar5[1];
              piVar5[7] = piVar5[7] + 1;
              *(undefined2 *)(iVar10 + (int)local_34 * 0x14) = 0xf;
              *(undefined1 *)(iVar10 + 3 + (int)local_34 * 0x14) = 0;
              *(uint **)(iVar10 + 4 + (int)local_34 * 0x14) = local_4c;
              *(uint **)(iVar10 + 8 + (int)local_34 * 0x14) = puVar20;
              *(undefined4 *)(iVar10 + 0xc + (int)local_34 * 0x14) = 0;
              *(undefined4 *)(iVar10 + 0x10 + (int)local_34 * 0x14) = 0;
              piVar11 = local_8;
              iVar10 = local_20;
              iVar15 = local_24;
            }
          }
          else {
            local_34 = *(uint **)(pbVar17 + 0x18);
            piVar5 = (int *)param_1[2];
            local_c = (uint *)piVar5[7];
            iVar15 = piVar5[8];
            if (iVar15 <= (int)local_c) {
              if (iVar15 == 0) {
                iVar15 = 0x33;
              }
              else {
                iVar15 = iVar15 * 2;
              }
              puVar12 = FUN_00494cf0(*piVar5,(undefined4 *)piVar5[1],iVar15 * 0x14);
              piVar11 = local_8;
              iVar10 = local_20;
              iVar15 = local_24;
              if (puVar12 == (undefined4 *)0x0) goto LAB_004ac49e;
              iVar10 = *piVar5;
              if (((iVar10 == 0) || (puVar12 < *(undefined4 **)(iVar10 + 0x104))) ||
                 (*(undefined4 **)(iVar10 + 0x108) <= puVar12)) {
                uVar16 = (*DAT_00582af0._4_4_)(puVar12);
              }
              else {
                uVar16 = (uint)*(ushort *)(iVar10 + 0xe8);
              }
              piVar5[8] = uVar16 / 0x14;
              piVar5[1] = (int)puVar12;
              piVar11 = local_8;
              iVar10 = local_20;
            }
            piVar5[7] = piVar5[7] + 1;
            puVar2 = (undefined2 *)(piVar5[1] + (int)local_c * 0x14);
            *(uint **)(puVar2 + 2) = local_34;
            *puVar2 = 0xe;
            *(undefined1 *)((int)puVar2 + 3) = 0;
            *(int *)(puVar2 + 4) = iVar10 + local_24;
            *(undefined4 *)(puVar2 + 6) = 0;
            *(undefined4 *)(puVar2 + 8) = 0;
            iVar15 = local_24;
          }
        }
      }
LAB_004ac49e:
      local_24 = iVar15 + 1;
    } while (local_24 < *(short *)((int)piVar11 + 0x26));
  }
  if ((local_68 & 1) != 0) {
    local_c = (uint *)(int)*(short *)((int)piVar11 + 0x26);
    iVar10 = piVar9[7];
    iVar15 = piVar9[8];
    if (iVar10 < iVar15) {
LAB_004ac60d:
      iVar15 = piVar9[1];
      piVar9[7] = piVar9[7] + 1;
      *(int *)(iVar15 + 4 + iVar10 * 0x14) = local_20;
      *(undefined2 *)(iVar15 + iVar10 * 0x14) = 0x1e;
      *(undefined1 *)(iVar15 + 3 + iVar10 * 0x14) = 0;
      *(uint **)(iVar15 + 8 + iVar10 * 0x14) = local_c;
      *(undefined4 *)(iVar15 + 0xc + iVar10 * 0x14) = 0;
      *(undefined4 *)(iVar15 + 0x10 + iVar10 * 0x14) = 0;
    }
    else {
      if (iVar15 == 0) {
        iVar15 = 0x33;
      }
      else {
        iVar15 = iVar15 * 2;
      }
      puVar12 = FUN_00494cf0(*piVar9,(undefined4 *)piVar9[1],iVar15 * 0x14);
      if (puVar12 != (undefined4 *)0x0) {
        iVar15 = *piVar9;
        if (((iVar15 == 0) || (puVar12 < *(undefined4 **)(iVar15 + 0x104))) ||
           (*(undefined4 **)(iVar15 + 0x108) <= puVar12)) {
          uVar16 = (*DAT_00582af0._4_4_)(puVar12);
        }
        else {
          uVar16 = (uint)*(ushort *)(iVar15 + 0xe8);
        }
        piVar9[8] = uVar16 / 0x14;
        piVar9[1] = (int)puVar12;
        goto LAB_004ac60d;
      }
    }
    piVar11 = local_8;
    FUN_004aaa40(piVar9,(int)local_8);
    FUN_00492d70(param_1,local_48,0x6b,param_3,1,piVar11,local_28,param_5,local_10);
    iVar10 = piVar9[7];
    iVar15 = piVar9[8];
    if (iVar10 < iVar15) {
LAB_004ac6d4:
      iVar15 = piVar9[1];
      piVar9[7] = piVar9[7] + 1;
      *(int *)(iVar15 + 4 + iVar10 * 0x14) = local_18;
      *(uint *)(iVar15 + 8 + iVar10 * 0x14) = local_10;
      *(undefined2 *)(iVar15 + iVar10 * 0x14) = 0x36;
      *(undefined1 *)(iVar15 + 3 + iVar10 * 0x14) = 0;
      *(uint **)(iVar15 + 0xc + iVar10 * 0x14) = local_28;
      *(undefined4 *)(iVar15 + 0x10 + iVar10 * 0x14) = 0;
    }
    else {
      if (iVar15 == 0) {
        iVar15 = 0x33;
      }
      else {
        iVar15 = iVar15 * 2;
      }
      puVar12 = FUN_00494cf0(*piVar9,(undefined4 *)piVar9[1],iVar15 * 0x14);
      if (puVar12 != (undefined4 *)0x0) {
        iVar15 = *piVar9;
        if (((iVar15 == 0) || (puVar12 < *(undefined4 **)(iVar15 + 0x104))) ||
           (*(undefined4 **)(iVar15 + 0x108) <= puVar12)) {
          uVar16 = (*DAT_00582af0._4_4_)(puVar12);
        }
        else {
          uVar16 = (uint)*(ushort *)(iVar15 + 0xe8);
        }
        piVar9[8] = uVar16 / 0x14;
        piVar9[1] = (int)puVar12;
        goto LAB_004ac6d4;
      }
    }
    iVar10 = 0;
    piVar11 = local_8;
    if (0 < *(short *)((int)local_8 + 0x26)) {
      do {
        if (((int)local_14[iVar10] < 0) && (iVar10 != (short)piVar11[9])) {
          local_c = (uint *)piVar9[7];
          iVar15 = piVar9[8];
          if ((int)local_c < iVar15) {
LAB_004ac7ab:
            piVar9[7] = piVar9[7] + 1;
            puVar2 = (undefined2 *)(piVar9[1] + (int)local_c * 0x14);
            *(int *)(puVar2 + 2) = local_18;
            *puVar2 = 0x1d;
            *(undefined1 *)((int)puVar2 + 3) = 0;
            *(int *)(puVar2 + 4) = iVar10;
            *(int *)(puVar2 + 6) = local_20 + iVar10;
            *(undefined4 *)(puVar2 + 8) = 0;
          }
          else {
            if (iVar15 == 0) {
              iVar15 = 0x33;
            }
            else {
              iVar15 = iVar15 * 2;
            }
            puVar12 = FUN_00494cf0(*piVar9,(undefined4 *)piVar9[1],iVar15 * 0x14);
            if (puVar12 != (undefined4 *)0x0) {
              iVar15 = *piVar9;
              if (((iVar15 == 0) || (puVar12 < *(undefined4 **)(iVar15 + 0x104))) ||
                 (*(undefined4 **)(iVar15 + 0x108) <= puVar12)) {
                uVar16 = (*DAT_00582af0._4_4_)(puVar12);
              }
              else {
                uVar16 = (uint)*(ushort *)(iVar15 + 0xe8);
              }
              piVar9[8] = uVar16 / 0x14;
              piVar9[1] = (int)puVar12;
              goto LAB_004ac7ab;
            }
          }
          FUN_00493630(piVar9,local_8,iVar10,local_20 + iVar10);
          piVar11 = local_8;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(short *)((int)piVar11 + 0x26));
    }
  }
  puVar20 = local_28;
  if (local_50 == 0) {
    puVar14 = (uint *)0x0;
    if (local_3c != 0) {
      puVar14 = local_28;
    }
    FUN_0049b1e0(param_1,piVar11,local_18,(int)local_2c,(int)local_40,(int)puVar14,1,param_5,
                 local_10,(int *)0x0);
    if (local_38 != 0) {
      FUN_0049a610(param_1,local_8,(int)puVar20,0);
    }
    uVar16 = piVar9[7];
    iVar10 = piVar9[8];
    if ((int)uVar16 < iVar10) {
LAB_004ac8b9:
      iVar10 = piVar9[1];
      piVar9[7] = piVar9[7] + 1;
      *(undefined2 *)(iVar10 + uVar16 * 0x14) = 0x36;
      *(undefined1 *)(iVar10 + 3 + uVar16 * 0x14) = 0;
      *(int *)(iVar10 + 4 + uVar16 * 0x14) = local_18;
      *(undefined4 *)(iVar10 + 8 + uVar16 * 0x14) = 0;
      *(uint **)(iVar10 + 0xc + uVar16 * 0x14) = puVar20;
      *(undefined4 *)(iVar10 + 0x10 + uVar16 * 0x14) = 0;
    }
    else {
      if (iVar10 == 0) {
        iVar10 = 0x33;
      }
      else {
        iVar10 = iVar10 * 2;
      }
      puVar12 = FUN_00494cf0(*piVar9,(undefined4 *)piVar9[1],iVar10 * 0x14);
      if (puVar12 != (undefined4 *)0x0) {
        iVar10 = *piVar9;
        if (((iVar10 == 0) || (puVar12 < *(undefined4 **)(iVar10 + 0x104))) ||
           (*(undefined4 **)(iVar10 + 0x108) <= puVar12)) {
          uVar13 = (*DAT_00582af0._4_4_)(puVar12);
        }
        else {
          uVar13 = (uint)*(ushort *)(iVar10 + 0xe8);
        }
        piVar9[1] = (int)puVar12;
        piVar9[8] = uVar13 / 0x14;
        puVar20 = local_28;
        goto LAB_004ac8b9;
      }
      uVar16 = 1;
    }
    FUN_0049c860(param_1,(int)local_8,local_18,local_40);
    if ((local_38 != 0) || (local_3c != 0)) {
      local_c = (uint *)piVar9[7];
      iVar10 = piVar9[8];
      if (iVar10 <= (int)local_c) {
        if (iVar10 == 0) {
          iVar10 = 0x33;
        }
        else {
          iVar10 = iVar10 * 2;
        }
        puVar12 = FUN_00494cf0(*piVar9,(undefined4 *)piVar9[1],iVar10 * 0x14);
        if (puVar12 == (undefined4 *)0x0) goto LAB_004ac9b8;
        iVar10 = *piVar9;
        if (((iVar10 == 0) || (puVar12 < *(undefined4 **)(iVar10 + 0x104))) ||
           (*(undefined4 **)(iVar10 + 0x108) <= puVar12)) {
          uVar13 = (*DAT_00582af0._4_4_)(puVar12);
        }
        else {
          uVar13 = (uint)*(ushort *)(iVar10 + 0xe8);
        }
        piVar9[8] = uVar13 / 0x14;
        piVar9[1] = (int)puVar12;
      }
      iVar10 = piVar9[1];
      piVar9[7] = piVar9[7] + 1;
      *(undefined2 *)(iVar10 + (int)local_c * 0x14) = 0x3b;
      *(undefined1 *)(iVar10 + 3 + (int)local_c * 0x14) = 0;
      *(int *)(iVar10 + 4 + (int)local_c * 0x14) = local_18;
      *(undefined4 *)(iVar10 + 8 + (int)local_c * 0x14) = 0;
      *(undefined4 *)(iVar10 + 0xc + (int)local_c * 0x14) = 0;
      *(undefined4 *)(iVar10 + 0x10 + (int)local_c * 0x14) = 0;
    }
LAB_004ac9b8:
    iVar10 = local_38;
    if ((-1 < (int)uVar16) && (uVar16 < (uint)piVar9[7])) {
      *(int *)(piVar9[1] + 8 + uVar16 * 0x14) = piVar9[7];
    }
    if (local_38 != 0) {
      FUN_0049a610(param_1,local_8,0,(int)local_2c);
    }
    FUN_00493790(param_1,local_8,local_18,(int)local_2c,(int)local_40,1,0,0);
    if ((iVar10 != 0) && ((*(uint *)(*param_1 + 0x18) & 0x40000) != 0)) {
      local_c = (uint *)*local_8;
      uVar16 = 0;
      if (local_c != (uint *)0x0) {
        bVar4 = (byte)*local_c;
        puVar20 = local_c;
        while (bVar4 != 0) {
          puVar20 = (uint *)((int)puVar20 + 1);
          bVar4 = *(byte *)puVar20;
        }
        uVar16 = (int)puVar20 - (int)local_c & 0x3fffffff;
      }
      local_4c = (uint *)(local_8[0x10] + 0x38);
      if (*(int *)(local_8[0x10] + 0x44) == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = 0;
        local_34 = local_c;
        if (uVar16 != 0) {
          uVar13 = 0;
          uVar21 = uVar16;
          do {
            uVar6 = *local_34;
            local_34 = (uint *)((int)local_34 + 1);
            uVar21 = uVar21 - 1;
            uVar13 = uVar13 ^ (uint)(byte)(&DAT_00569620)[(byte)uVar6] ^ uVar13 * 8;
            piVar9 = local_30;
          } while (0 < (int)uVar21);
        }
        uVar13 = uVar13 % *local_4c;
      }
      puVar12 = FUN_00479af0((int)local_4c,(byte *)local_c,uVar16,uVar13);
      piVar11 = local_8;
      if (puVar12 != (undefined4 *)0x0) {
        for (piVar5 = (int *)puVar12[2]; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[3]) {
          puVar20 = FUN_00479db0(param_1,(int)piVar11,piVar5,(int)param_3);
          if (puVar20 != (uint *)0x0) {
            FUN_00492dd0(param_1,(int *)puVar20,piVar11,local_28,2,0);
          }
          piVar9 = local_30;
        }
      }
    }
  }
  if (((*(byte *)(local_1c + 0x18) & 0x10) != 0) && (param_1[0x6d] == 0)) {
    iVar10 = piVar9[7];
    iVar15 = piVar9[8];
    if (iVar15 <= iVar10) {
      if (iVar15 == 0) {
        iVar15 = 0x33;
      }
      else {
        iVar15 = iVar15 * 2;
      }
      puVar12 = FUN_00494cf0(*piVar9,(undefined4 *)piVar9[1],iVar15 * 0x14);
      if (puVar12 == (undefined4 *)0x0) goto LAB_004acb9d;
      iVar15 = *piVar9;
      if (((iVar15 == 0) || (puVar12 < *(undefined4 **)(iVar15 + 0x104))) ||
         (*(undefined4 **)(iVar15 + 0x108) <= puVar12)) {
        uVar16 = (*DAT_00582af0._4_4_)(puVar12);
      }
      else {
        uVar16 = (uint)*(ushort *)(iVar15 + 0xe8);
      }
      piVar9[8] = uVar16 / 0x14;
      piVar9[1] = (int)puVar12;
    }
    iVar15 = piVar9[1];
    piVar9[7] = piVar9[7] + 1;
    *(undefined2 *)(iVar15 + iVar10 * 0x14) = 0x14;
    *(undefined1 *)(iVar15 + 3 + iVar10 * 0x14) = 0;
    *(int *)(iVar15 + 4 + iVar10 * 0x14) = local_64;
    *(undefined4 *)(iVar15 + 8 + iVar10 * 0x14) = 1;
    *(undefined4 *)(iVar15 + 0xc + iVar10 * 0x14) = 0;
    *(undefined4 *)(iVar15 + 0x10 + iVar10 * 0x14) = 0;
  }
LAB_004acb9d:
  FUN_00492d70(param_1,local_48,0x6b,param_3,2,local_8,local_28,param_5,local_10);
  iVar10 = piVar9[7];
  iVar15 = piVar9[8];
  if (iVar10 < iVar15) {
LAB_004acc2a:
    iVar15 = piVar9[1];
    piVar9[7] = piVar9[7] + 1;
    *(undefined2 *)(iVar15 + iVar10 * 0x14) = 1;
    *(undefined1 *)(iVar15 + 3 + iVar10 * 0x14) = 0;
    *(undefined4 *)(iVar15 + 4 + iVar10 * 0x14) = 0;
    *(uint *)(iVar15 + 8 + iVar10 * 0x14) = local_10;
    *(undefined4 *)(iVar15 + 0xc + iVar10 * 0x14) = 0;
    *(undefined4 *)(iVar15 + 0x10 + iVar10 * 0x14) = 0;
  }
  else {
    if (iVar15 == 0) {
      iVar15 = 0x33;
    }
    else {
      iVar15 = iVar15 * 2;
    }
    puVar12 = FUN_00494cf0(*piVar9,(undefined4 *)piVar9[1],iVar15 * 0x14);
    if (puVar12 != (undefined4 *)0x0) {
      iVar15 = *piVar9;
      if (((iVar15 == 0) || (puVar12 < *(undefined4 **)(iVar15 + 0x104))) ||
         (*(undefined4 **)(iVar15 + 0x108) <= puVar12)) {
        uVar16 = (*DAT_00582af0._4_4_)(puVar12);
      }
      else {
        uVar16 = (uint)*(ushort *)(iVar15 + 0xe8);
      }
      piVar9[8] = uVar16 / 0x14;
      piVar9[1] = (int)puVar12;
      goto LAB_004acc2a;
    }
  }
  if ((-1 < (int)local_10) && (local_10 < (uint)piVar9[7])) {
    *(int *)(piVar9[1] + 8 + local_10 * 0x14) = piVar9[7];
  }
  iVar10 = 0;
  for (local_50 = local_8[2]; local_50 != 0; local_50 = *(uint *)(local_50 + 0x14)) {
    if ((local_44 != 0) || (0 < local_40[iVar10])) {
      local_c = (uint *)piVar9[7];
      iVar15 = piVar9[8];
      if (iVar15 <= (int)local_c) {
        if (iVar15 == 0) {
          iVar15 = 0x33;
        }
        else {
          iVar15 = iVar15 * 2;
        }
        puVar12 = FUN_00494cf0(*piVar9,(undefined4 *)piVar9[1],iVar15 * 0x14);
        if (puVar12 == (undefined4 *)0x0) goto LAB_004acd48;
        iVar15 = *piVar9;
        if (((iVar15 == 0) || (puVar12 < *(undefined4 **)(iVar15 + 0x104))) ||
           (*(undefined4 **)(iVar15 + 0x108) <= puVar12)) {
          uVar16 = (*DAT_00582af0._4_4_)(puVar12);
        }
        else {
          uVar16 = (uint)*(ushort *)(iVar15 + 0xe8);
        }
        piVar9[8] = uVar16 / 0x14;
        piVar9[1] = (int)puVar12;
      }
      piVar9[7] = piVar9[7] + 1;
      puVar2 = (undefined2 *)(piVar9[1] + (int)local_c * 0x14);
      *puVar2 = 0x2d;
      *(undefined1 *)((int)puVar2 + 3) = 0;
      *(int *)(puVar2 + 2) = local_18 + 1 + iVar10;
      *(undefined4 *)(puVar2 + 4) = 0;
      *(undefined4 *)(puVar2 + 6) = 0;
      *(undefined4 *)(puVar2 + 8) = 0;
    }
LAB_004acd48:
    iVar10 = iVar10 + 1;
  }
  iVar10 = piVar9[7];
  iVar15 = piVar9[8];
  if (iVar10 < iVar15) {
LAB_004acdc3:
    iVar15 = piVar9[1];
    piVar9[7] = piVar9[7] + 1;
    *(undefined2 *)(iVar15 + iVar10 * 0x14) = 0x2d;
    *(undefined1 *)(iVar15 + 3 + iVar10 * 0x14) = 0;
    *(int *)(iVar15 + 4 + iVar10 * 0x14) = local_18;
    *(undefined4 *)(iVar15 + 8 + iVar10 * 0x14) = 0;
    *(undefined4 *)(iVar15 + 0xc + iVar10 * 0x14) = 0;
    *(undefined4 *)(iVar15 + 0x10 + iVar10 * 0x14) = 0;
  }
  else {
    if (iVar15 == 0) {
      iVar15 = 0x33;
    }
    else {
      iVar15 = iVar15 * 2;
    }
    puVar12 = FUN_00494cf0(*piVar9,(undefined4 *)piVar9[1],iVar15 * 0x14);
    if (puVar12 != (undefined4 *)0x0) {
      iVar15 = *piVar9;
      if (((iVar15 == 0) || (puVar12 < *(undefined4 **)(iVar15 + 0x104))) ||
         (*(undefined4 **)(iVar15 + 0x108) <= puVar12)) {
        uVar16 = (*DAT_00582af0._4_4_)(puVar12);
      }
      else {
        uVar16 = (uint)*(ushort *)(iVar15 + 0xe8);
      }
      piVar9[8] = uVar16 / 0x14;
      piVar9[1] = (int)puVar12;
      goto LAB_004acdc3;
    }
  }
  if ((*(char *)((int)param_1 + 0x12) == '\0') && (param_1[0x6d] == 0)) {
    FUN_0048dbc0(param_1);
  }
  puVar12 = local_14;
  if ((((*(byte *)(local_1c + 0x18) & 0x10) == 0) || (param_1[0x6d] != 0)) ||
     (*(char *)((int)param_1 + 0x12) != '\0')) goto LAB_004ad0fd;
  iVar10 = piVar9[7];
  iVar15 = piVar9[8];
  if (iVar10 < iVar15) {
LAB_004acea4:
    iVar15 = piVar9[1];
    piVar9[7] = piVar9[7] + 1;
    *(undefined2 *)(iVar15 + iVar10 * 0x14) = 0x10;
    *(undefined1 *)(iVar15 + 3 + iVar10 * 0x14) = 0;
    *(int *)(iVar15 + 4 + iVar10 * 0x14) = local_64;
    *(undefined4 *)(iVar15 + 8 + iVar10 * 0x14) = 1;
    *(undefined4 *)(iVar15 + 0xc + iVar10 * 0x14) = 0;
    *(undefined4 *)(iVar15 + 0x10 + iVar10 * 0x14) = 0;
  }
  else {
    if (iVar15 == 0) {
      iVar15 = 0x33;
    }
    else {
      iVar15 = iVar15 * 2;
    }
    puVar12 = FUN_00494cf0(*piVar9,(undefined4 *)piVar9[1],iVar15 * 0x14);
    if (puVar12 != (undefined4 *)0x0) {
      iVar15 = *piVar9;
      if (((iVar15 == 0) || (puVar12 < *(undefined4 **)(iVar15 + 0x104))) ||
         (*(undefined4 **)(iVar15 + 0x108) <= puVar12)) {
        uVar16 = (*DAT_00582af0._4_4_)(puVar12);
      }
      else {
        uVar16 = (uint)*(ushort *)(iVar15 + 0xe8);
      }
      piVar9[8] = uVar16 / 0x14;
      piVar9[1] = (int)puVar12;
      goto LAB_004acea4;
    }
  }
  iVar10 = *piVar9;
  FUN_00487fb0((int *)piVar9[4],(uint)*(ushort *)(piVar9 + 0xb) * 2);
  FUN_00494b00(iVar10,(undefined4 *)piVar9[4]);
  *(undefined2 *)(piVar9 + 0xb) = 1;
  piVar11 = FUN_00494b90(iVar10,0x50);
  if (piVar11 != (int *)0x0) {
    memset(piVar11,0,0x50);
  }
  piVar9[4] = (int)piVar11;
  if (piVar11 != (int *)0x0) {
    *(undefined2 *)(piVar11 + 7) = 1;
    *piVar11 = *piVar9;
    *(undefined2 *)(piVar11 + 0x11) = 1;
    piVar11[10] = *piVar9;
  }
  puVar12 = local_14;
  if (*(char *)(*piVar9 + 0x38) == '\0') {
    piVar9 = (int *)piVar9[4];
    if (*piVar9 == 0) {
      iVar10 = 1000000000;
    }
    else {
      iVar10 = *(int *)(*piVar9 + 0x50);
    }
    iVar15 = 0;
    if (-1 < iVar10) {
      do {
        if ("rows updated"[iVar15] == '\0') break;
        iVar15 = iVar15 + 1;
      } while (iVar15 <= iVar10);
    }
    uVar8 = *(ushort *)(piVar9 + 7);
    if ((uVar8 & 0x2460) != 0) {
      if ((uVar8 & 0x2000) == 0) {
        if (((uVar8 & 0x400) == 0) || ((code *)piVar9[8] == (code *)0x0)) {
          if ((uVar8 & 0x20) == 0) {
            if ((uVar8 & 0x40) != 0) {
              piVar11 = (int *)piVar9[4];
              piVar11[1] = *(int *)(*piVar11 + 0xa4);
              *(int **)(*piVar11 + 0xa4) = piVar11;
              if ((*(byte *)(piVar9 + 7) & 0x20) != 0) {
                FUN_004a6e20((undefined4 *)piVar9[4]);
              }
              *(ushort *)(piVar9 + 7) = *(ushort *)(piVar9 + 7) & 0xbe01 | 1;
              *(undefined1 *)((int)piVar9 + 0x1e) = 5;
            }
          }
          else {
            FUN_004a6e20((undefined4 *)piVar9[4]);
          }
        }
        else {
          (*(code *)piVar9[8])(piVar9[1]);
          piVar9[8] = 0;
        }
      }
      else {
        FUN_004b7010(piVar9,piVar9[4]);
        FUN_004b76e0(piVar9);
      }
    }
    FUN_00494b00(*piVar9,(undefined4 *)piVar9[9]);
    piVar9[9] = 0;
    piVar9[8] = 0;
    piVar9[1] = (int)"rows updated";
    piVar9[6] = iVar15;
    *(undefined2 *)(piVar9 + 7) = 0xa02;
    *(undefined2 *)((int)piVar9 + 0x1e) = 0x103;
    puVar12 = local_14;
  }
LAB_004ad0fd:
  if (local_74._4_4_ != 0) {
    *(undefined4 *)(local_74._4_4_ + 0x204) = (undefined4)local_74;
  }
  FUN_00494b00(local_1c,local_40);
  iVar10 = local_1c;
  FUN_00494b00(local_1c,puVar12);
  FUN_004a9cb0(iVar10,local_6c);
  FUN_00499060(iVar10,param_3);
  FUN_00498790(iVar10,(undefined4 *)param_4);
  return;
}


/* FUN_004ad230 @ 004ad230  kind=lib  attributed-by=lib-island  size=77 */

int __cdecl FUN_004ad230(byte *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  
  iVar3 = 0;
  if (param_2 < 0) {
    pbVar4 = (byte *)0xffffffff;
  }
  else {
    pbVar4 = param_1 + param_2;
  }
  bVar2 = *param_1;
  while ((bVar2 != 0 && (param_1 < pbVar4))) {
    bVar2 = *param_1;
    param_1 = param_1 + 1;
    if (0xbf < bVar2) {
      bVar2 = *param_1;
      while ((bVar2 & 0xc0) == 0x80) {
        pbVar1 = param_1 + 1;
        param_1 = param_1 + 1;
        bVar2 = *pbVar1;
      }
    }
    iVar3 = iVar3 + 1;
    bVar2 = *param_1;
  }
  return iVar3;
}


/* FUN_004ad2f0 @ 004ad2f0  kind=lib  attributed-by=lib-island  size=118 */

void __cdecl FUN_004ad2f0(int param_1,byte *param_2,double *param_3)

{
  int local_6c;
  undefined1 *local_68;
  undefined1 *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  char local_54;
  undefined2 local_53;
  undefined1 local_50 [72];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_68 = local_50;
  local_58 = *(undefined4 *)(param_1 + 0x50);
  local_60 = 0;
  local_5c = 0x46;
  local_53 = 1;
  local_54 = '\0';
  local_6c = param_1;
  local_64 = local_68;
  FUN_004ad370(&local_6c,1,param_2,param_3);
  FUN_004aa8f0(&local_6c);
  if (local_54 != '\0') {
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004ad370 @ 004ad370  kind=lib  attributed-by=lib-island  size=3513 */

/* WARNING: Removing unreachable block (ram,0x004ad973) */

void __cdecl FUN_004ad370(int *param_1,int param_2,byte *param_3,double *param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  byte bVar3;
  byte *pbVar4;
  char cVar5;
  size_t sVar6;
  int iVar7;
  int extraout_ECX;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *unaff_EBX;
  byte *pbVar11;
  char *pcVar12;
  double *pdVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  int *piVar17;
  bool bVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  longlong lVar22;
  byte *local_a4;
  uint local_a0;
  byte *local_9c;
  undefined8 local_98;
  byte *local_90;
  byte *local_8c;
  undefined1 *local_88;
  byte *local_80;
  int *local_7c;
  byte *local_78;
  byte *local_74;
  byte *local_70;
  char local_6a;
  char local_69;
  byte local_68;
  bool local_67;
  bool local_66;
  char local_65;
  byte *local_64;
  byte local_5d;
  byte *local_5c;
  double *local_58;
  char local_52;
  byte local_51;
  byte local_50;
  int local_4f [17];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  bVar3 = *param_3;
  pbVar15 = (byte *)0x0;
  local_5c = (byte *)0x0;
  local_7c = param_1;
  local_58 = param_4;
  do {
    if (bVar3 == 0) {
switchD_004ad606_default:
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    pbVar11 = param_3;
    if (bVar3 != 0x25) {
      local_78 = param_3 + 1;
      sVar6 = 1;
      bVar3 = *local_78;
      while ((bVar3 != 0x25 && (bVar18 = bVar3 != 0, bVar3 = 0, bVar18))) {
        pbVar15 = local_78 + 1;
        local_78 = local_78 + 1;
        sVar6 = sVar6 + 1;
        bVar3 = *pbVar15;
      }
      local_5c = param_3;
      FUN_004aa7b0(local_7c,(char *)param_3,sVar6);
      pbVar11 = local_78;
      pbVar15 = param_3;
      if (bVar3 == 0) goto switchD_004ad606_default;
    }
    iVar7 = (int)(char)pbVar11[1];
    pbVar11 = pbVar11 + 1;
    if (iVar7 == 0) {
      FUN_004aa7b0(local_7c,"%",1);
      goto switchD_004ad606_default;
    }
    local_69 = '\0';
    local_67 = false;
    local_68 = 0;
    local_51 = 0;
    local_5d = 0;
    local_65 = '\0';
    do {
      switch(iVar7) {
      case 0x20:
        local_51 = 1;
        break;
      case 0x21:
        local_67 = true;
        break;
      default:
        goto switchD_004ad464_caseD_22;
      case 0x23:
        local_68 = 1;
        break;
      case 0x2b:
        local_5d = 1;
        break;
      case 0x2d:
        local_65 = '\x01';
        break;
      case 0x30:
        local_69 = '\x01';
      }
      iVar7 = (int)(char)pbVar11[1];
      pbVar11 = pbVar11 + 1;
    } while (iVar7 != 0);
switchD_004ad464_caseD_22:
    local_64 = (byte *)0x0;
    if (iVar7 == 0x2a) {
      local_64 = *(byte **)local_58;
      local_58 = (double *)((int)local_58 + 4);
      if ((int)local_64 < 0) {
        local_64 = (byte *)-(int)local_64;
        local_65 = '\x01';
      }
      iVar7 = (int)(char)pbVar11[1];
      pbVar11 = pbVar11 + 1;
    }
    else if (0x2f < iVar7) {
      local_64 = (byte *)0x0;
      do {
        pbVar15 = local_5c;
        if (0x39 < iVar7) break;
        pbVar11 = pbVar11 + 1;
        local_64 = (byte *)(iVar7 + ((int)local_64 * 5 + -0x18) * 2);
        iVar7 = (int)(char)*pbVar11;
      } while (0x2f < iVar7);
    }
    if (iVar7 == 0x2e) {
      iVar7 = (int)(char)pbVar11[1];
      local_78 = pbVar11 + 1;
      local_74 = (byte *)0x0;
      if (iVar7 == 0x2a) {
        local_74 = *(byte **)local_58;
        if ((int)local_74 < 0) {
          local_74 = (byte *)-(int)local_74;
        }
        iVar7 = (int)(char)pbVar11[2];
        local_78 = pbVar11 + 2;
        local_58 = (double *)((int)local_58 + 4);
      }
      else {
        while ((0x2f < iVar7 && (iVar7 < 0x3a))) {
          local_78 = local_78 + 1;
          local_74 = (byte *)(iVar7 + ((int)local_74 * 5 + -0x18) * 2);
          iVar7 = (int)(char)*local_78;
        }
      }
    }
    else {
      local_74 = (byte *)0xffffffff;
      local_78 = pbVar11;
    }
    if (iVar7 == 0x6c) {
      iVar7 = (int)(char)local_78[1];
      local_66 = true;
      pbVar11 = local_78 + 1;
      if (iVar7 != 0x6c) goto LAB_004ad57d;
      iVar7 = (int)(char)local_78[2];
      local_78 = local_78 + 2;
      local_6a = '\x01';
    }
    else {
      local_66 = false;
      pbVar11 = local_78;
LAB_004ad57d:
      local_78 = pbVar11;
      local_6a = '\0';
    }
    local_88 = &DAT_00569ab8;
    local_52 = '\0';
    local_8c = (byte *)0x0;
    pcVar12 = "d\n\x01\x01";
    do {
      if (iVar7 == *pcVar12) {
        iVar7 = (int)local_8c * 6;
        local_88 = &DAT_00569ab8 + iVar7;
        if ((param_2 == 0) && (((&DAT_00569aba)[iVar7] & 2) != 0)) goto switchD_004ad606_default;
        local_52 = (&DAT_00569abb)[iVar7];
        break;
      }
      local_8c = local_8c + 1;
      pcVar12 = pcVar12 + 6;
    } while ((int)pcVar12 < 0x569b42);
    local_8c = (byte *)0x0;
    switch(local_52) {
    case '\x01':
    case '\x10':
      cVar5 = local_6a;
      goto LAB_004ad619;
    case '\x02':
    case '\x03':
    case '\x04':
      pdVar13 = local_58 + 1;
      local_98 = *local_58;
      if ((int)local_74 < 0) {
        local_74 = (byte *)0x6;
      }
      if (0.0 <= local_98) {
        if (local_5d == 0) {
          local_51 = -(local_51 != 0) & 0x20;
        }
        else {
          local_51 = 0x2b;
        }
      }
      else {
        local_98 = -local_98;
        local_51 = 0x2d;
      }
      if ((local_52 == '\x04') && (0 < (int)local_74)) {
        local_74 = local_74 + -1;
      }
      dVar19 = 0.5;
      pbVar15 = local_74;
      if (7 < (int)local_74) {
        iVar7 = ((uint)(local_74 + -8) >> 3) + 1;
        pbVar15 = local_74 + iVar7 * -8;
        do {
          dVar19 = dVar19 * 0.1 * 0.1 * 0.1 * 0.1 * 0.1 * 0.1 * 0.1 * 0.1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      for (; 0 < (int)pbVar15; pbVar15 = pbVar15 + -1) {
        dVar19 = dVar19 * 0.1;
      }
      if (local_52 == '\x02') {
        local_98 = local_98 + dVar19;
      }
      pbVar15 = (byte *)0x0;
      local_80 = (byte *)0x0;
      local_58 = pdVar13;
      if (0.0 < local_98) {
        dVar20 = 1.0;
        if (1e+100 <= local_98) {
          do {
            local_80 = pbVar15;
            if (0x15e < (int)pbVar15) break;
            dVar20 = dVar20 * 1e+100;
            pbVar15 = pbVar15 + 100;
            local_80 = pbVar15;
          } while (dVar20 * 1e+100 <= local_98);
        }
        for (; (dVar20 * 1e+64 <= local_98 && ((int)local_80 < 0x15f)); local_80 = local_80 + 0x40)
        {
          dVar20 = dVar20 * 1e+64;
        }
        for (; (dVar20 * 100000000.0 <= local_98 && ((int)local_80 < 0x15f));
            local_80 = local_80 + 8) {
          dVar20 = dVar20 * 100000000.0;
        }
        for (; (dVar20 * 10.0 <= local_98 && ((int)local_80 < 0x15f)); local_80 = local_80 + 1) {
          dVar20 = dVar20 * 10.0;
        }
        for (local_98 = local_98 / dVar20; local_98 < 1e-08; local_98 = local_98 * 100000000.0) {
          local_80 = local_80 + -8;
        }
        for (; local_98 < 1.0; local_98 = local_98 * 10.0) {
          local_80 = local_80 + -1;
        }
        if (0x15e < (int)local_80) {
          if (local_51 == 0x2d) {
            local_5c = &DAT_0056ddbc;
          }
          else {
            local_5c = &DAT_0056ddc4;
            if (local_51 != 0x2b) {
              local_5c = &DAT_0056ddcc;
            }
          }
          if (local_5c == (byte *)0x0) goto LAB_004ae0a4;
          bVar3 = *local_5c;
          pbVar15 = local_5c;
          while (bVar3 != 0) {
            pbVar15 = pbVar15 + 1;
            bVar3 = *pbVar15;
          }
LAB_004adae6:
          pbVar11 = (byte *)((int)pbVar15 - (int)local_5c & 0x3fffffff);
          pbVar15 = local_5c;
          break;
        }
      }
      pbVar15 = &local_50;
      if ((local_52 != '\x02') && (local_98 = local_98 + dVar19, 10.0 <= local_98)) {
        local_98 = local_98 * 0.1;
        local_80 = local_80 + 1;
      }
      local_70 = local_80;
      if (local_52 == '\x04') {
        local_66 = local_68 == 0;
        if (((int)local_80 < -4) || ((int)local_74 < (int)local_80)) {
          local_52 = '\x03';
LAB_004adb4c:
          local_70 = (byte *)0x0;
        }
        else {
          local_74 = local_74 + -(int)local_80;
          local_52 = '\x02';
        }
      }
      else {
        local_66 = local_67;
        if (local_52 == '\x03') goto LAB_004adb4c;
      }
      if ((0x37 < (int)(local_70 + (int)local_74 + (int)local_64)) &&
         (pbVar15 = (byte *)FUN_004a0350((int)(local_70 + (int)local_74 + (int)local_64 + 0xf)),
         local_8c = pbVar15, pbVar15 == (byte *)0x0)) goto LAB_004adfc7;
      local_90 = (byte *)((uint)local_67 * 10 + 0x10);
      local_5d = 0 < (int)local_74 | local_67 | local_68;
      pbVar11 = pbVar15;
      if (local_51 != 0) {
        *pbVar15 = local_51;
        pbVar11 = pbVar15 + 1;
      }
      dVar19 = local_98;
      if ((int)local_70 < 0) {
        *pbVar11 = 0x30;
        pbVar11 = pbVar11 + 1;
      }
      else {
        do {
          if ((int)local_90 < 1) {
            bVar3 = 0x30;
          }
          else {
            local_90 = local_90 + -1;
            bVar3 = (char)(int)dVar19 + 0x30;
            dVar19 = (dVar19 - (double)(int)dVar19) * 10.0;
          }
          *pbVar11 = bVar3;
          pbVar11 = pbVar11 + 1;
          local_70 = local_70 + -1;
        } while (-1 < (int)local_70);
      }
      if (local_5d != 0) {
        *pbVar11 = 0x2e;
        pbVar11 = pbVar11 + 1;
      }
      pbVar4 = local_70 + 1;
      pbVar14 = local_90;
      pbVar10 = local_74;
      if ((int)pbVar4 < 0) {
        local_70 = (byte *)-(int)pbVar4;
        pbVar16 = pbVar11;
        for (uVar9 = (uint)local_70 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          pbVar16[0] = 0x30;
          pbVar16[1] = 0x30;
          pbVar16[2] = 0x30;
          pbVar16[3] = 0x30;
          pbVar16 = pbVar16 + 4;
        }
        pbVar11 = pbVar11 + (int)local_70;
        pbVar10 = local_74 + (int)pbVar4;
        for (uVar9 = (uint)local_70 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pbVar16 = 0x30;
          pbVar16 = pbVar16 + 1;
        }
      }
      while (0 < (int)pbVar10) {
        if ((int)pbVar14 < 1) {
          bVar3 = 0x30;
        }
        else {
          pbVar14 = pbVar14 + -1;
          bVar3 = (char)(int)dVar19 + 0x30;
          dVar19 = (dVar19 - (double)(int)dVar19) * 10.0;
        }
        *pbVar11 = bVar3;
        pbVar11 = pbVar11 + 1;
        pbVar10 = pbVar10 + -1;
      }
      if ((local_66 != false) && (local_5d != 0)) {
        bVar3 = pbVar11[-1];
        pbVar14 = pbVar11 + -1;
        while (pbVar10 = pbVar14, bVar3 == 0x30) {
          *pbVar10 = 0;
          pbVar14 = pbVar10 + -1;
          pbVar11 = pbVar10;
          bVar3 = pbVar10[-1];
        }
        if (pbVar11[-1] == 0x2e) {
          if (local_67 == false) {
            pbVar11 = pbVar11 + -1;
            *pbVar11 = 0;
          }
          else {
            *pbVar11 = 0x30;
            pbVar11 = pbVar11 + 1;
          }
        }
      }
      if (local_52 == '\x03') {
        *pbVar11 = "0123456789ABCDEF0123456789abcdef"[(byte)local_88[4]];
        if ((int)local_80 < 0) {
          pbVar11[1] = 0x2d;
          local_80 = (byte *)-(int)local_80;
        }
        else {
          pbVar11[1] = 0x2b;
        }
        pbVar14 = pbVar11 + 2;
        if (99 < (int)local_80) {
          *pbVar14 = (char)((int)local_80 / 100) + 0x30;
          pbVar14 = pbVar11 + 3;
          local_80 = (byte *)((int)local_80 % 100);
        }
        cVar5 = (char)((int)local_80 / 10);
        *pbVar14 = cVar5 + 0x30;
        pbVar14[1] = (char)local_80 + cVar5 * -10 + 0x30;
        pbVar11 = pbVar14 + 2;
      }
      *pbVar11 = 0;
      pbVar11 = pbVar11 + -(int)pbVar15;
      local_5c = pbVar15;
      if (local_69 == '\0') break;
      if (local_65 == '\0') {
        if ((int)pbVar11 < (int)local_64) {
          uVar9 = (int)local_64 - (int)pbVar11;
          if ((int)uVar9 <= (int)local_64) {
            pbVar11 = local_64;
            do {
              pbVar15[(int)pbVar11] = pbVar15[(int)pbVar11 - uVar9];
              pbVar11 = pbVar11 + -1;
            } while ((int)uVar9 <= (int)pbVar11);
          }
          pbVar11 = local_64;
          if (uVar9 != 0) {
            pbVar14 = pbVar15 + (local_51 != 0);
            for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              pbVar14[0] = 0x30;
              pbVar14[1] = 0x30;
              pbVar14[2] = 0x30;
              pbVar14[3] = 0x30;
              pbVar14 = pbVar14 + 4;
            }
            for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
              *pbVar14 = 0x30;
              pbVar14 = pbVar14 + 1;
            }
          }
        }
        goto LAB_004ae0af;
      }
      goto LAB_004ae0c1;
    case '\x05':
      **(int **)local_58 = local_7c[3];
      local_64 = (byte *)0x0;
      pbVar11 = (byte *)0x0;
      local_58 = (double *)((int)local_58 + 4);
      break;
    case '\x06':
    case '\a':
      pdVar13 = (double *)((int)local_58 + 4);
      local_5c = *(byte **)local_58;
      if (local_5c == (byte *)0x0) {
        local_5c = &DAT_0055b524;
      }
      else {
        local_8c = (byte *)0x0;
        if (local_52 == '\a') {
          local_8c = local_5c;
        }
      }
      pbVar15 = local_5c;
      local_58 = pdVar13;
      if ((int)local_74 < 0) {
        if (local_5c == (byte *)0x0) {
LAB_004ae0a4:
          pbVar11 = (byte *)0x0;
          pbVar15 = local_5c;
        }
        else {
          pbVar11 = local_5c;
          if (*local_5c == 0) goto LAB_004adae6;
          do {
            pbVar11 = pbVar11 + 1;
          } while (*pbVar11 != 0);
          pbVar11 = (byte *)((int)pbVar11 - (int)local_5c & 0x3fffffff);
        }
      }
      else {
        pbVar11 = (byte *)0x0;
        if (0 < (int)local_74) {
          do {
            if (local_5c[(int)pbVar11] == 0) break;
            pbVar11 = pbVar11 + 1;
          } while ((int)pbVar11 < (int)local_74);
        }
      }
      break;
    case '\b':
      local_50 = 0x25;
      pbVar11 = (byte *)0x1;
      pbVar15 = &local_50;
      local_5c = &local_50;
      break;
    case '\t':
      local_50 = (byte)*(uint *)local_58;
      if ((int)local_74 < 0) {
        pbVar11 = (byte *)0x1;
        pbVar15 = &local_50;
        local_5c = &local_50;
        local_58 = (double *)((int)local_58 + 4);
      }
      else {
        if (1 < (int)local_74) {
          iVar7 = (*(uint *)local_58 & 0xff) * 0x1010101;
          piVar17 = local_4f;
          for (uVar9 = (uint)(local_74 + -1) >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *piVar17 = iVar7;
            piVar17 = piVar17 + 1;
          }
          for (uVar9 = (uint)(local_74 + -1) & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(char *)piVar17 = (char)iVar7;
            piVar17 = (int *)((int)piVar17 + 1);
          }
        }
        pbVar11 = local_74;
        pbVar15 = &local_50;
        local_5c = &local_50;
        local_58 = (double *)((int)local_58 + 4);
      }
      break;
    case '\n':
    case '\v':
    case '\x0f':
      local_70 = (byte *)0x27;
      if (local_52 == '\x0f') {
        local_70 = (byte *)0x22;
      }
      local_80 = *(byte **)local_58;
      local_58 = (double *)((int)local_58 + 4);
      bVar18 = local_80 == (byte *)0x0;
      local_98 = (double)(ulonglong)CONCAT14(bVar18,(undefined4)local_98);
      if ((bVar18) && (local_80 = &DAT_0056ddd0, local_52 != '\v')) {
        local_80 = &DAT_0056ddd8;
      }
      iVar7 = 0;
      pbVar15 = local_74;
      for (local_90 = (byte *)0x0; (pbVar15 != (byte *)0x0 && (local_90[(int)local_80] != 0));
          local_90 = local_90 + 1) {
        if (local_90[(int)local_80] == (byte)local_70) {
          iVar7 = iVar7 + 1;
        }
        pbVar15 = pbVar15 + -1;
      }
      if ((bVar18) || (local_52 != '\v')) {
        local_88 = (undefined1 *)0x0;
      }
      else {
        local_88 = (undefined1 *)0x1;
      }
      pbVar15 = local_90 + iVar7 + 1 + (int)local_88 * 2;
      if ((int)pbVar15 < 0x47) {
        local_5c = &local_50;
      }
      else {
        if (pbVar15 + -1 < (byte *)0x7ffffeff) {
          if (DAT_00582ac8 == 0) {
            local_a4 = (byte *)(*DAT_00582ae8)(pbVar15);
          }
          else {
            if (DAT_00583f40 != 0) {
              (*DAT_00582b18)(DAT_00583f40);
            }
            FUN_00480650((int)pbVar15,(int *)&local_a4);
            if (DAT_00583f40 != 0) {
              (*DAT_00582b20)(DAT_00583f40);
            }
          }
        }
        else {
          local_a4 = (byte *)0x0;
        }
        local_8c = local_a4;
        local_5c = local_a4;
        if (local_a4 == (byte *)0x0) goto LAB_004adfc7;
      }
      bVar3 = (byte)local_70;
      if (local_88 != (undefined1 *)0x0) {
        *local_5c = bVar3;
      }
      pbVar11 = (byte *)(uint)(local_88 != (undefined1 *)0x0);
      iVar7 = 0;
      pbVar15 = pbVar11;
      if (0 < (int)local_90) {
        do {
          pbVar11 = pbVar15 + 1;
          bVar1 = local_80[iVar7];
          local_5c[(int)pbVar15] = bVar1;
          if (bVar1 == bVar3) {
            local_5c[(int)pbVar11] = bVar1;
            pbVar11 = pbVar15 + 2;
          }
          iVar7 = iVar7 + 1;
          pbVar15 = pbVar11;
        } while (iVar7 < (int)local_90);
      }
      if (local_88 != (undefined1 *)0x0) {
        local_5c[(int)pbVar11] = bVar3;
        pbVar11 = pbVar11 + 1;
      }
      local_5c[(int)pbVar11] = 0;
      pbVar15 = local_5c;
      break;
    case '\f':
      pdVar13 = (double *)((int)local_58 + 4);
      puVar2 = *(undefined4 **)local_58;
      local_58 = pdVar13;
      if (puVar2 != (undefined4 *)0x0) {
        sVar6 = puVar2[1];
        pcVar12 = (char *)*puVar2;
        goto LAB_004ae045;
      }
      goto LAB_004ae050;
    case '\r':
      pdVar13 = local_58 + 1;
      iVar7 = *(int *)local_58;
      local_98 = (double)CONCAT44(*(int *)((int)local_58 + 4) * 9,(undefined4)local_98);
      pcVar12 = *(char **)(iVar7 + 0xc + *(int *)((int)local_58 + 4) * 0x48);
      local_58 = pdVar13;
      if (pcVar12 != (char *)0x0) {
        FUN_004aa7b0(local_7c,pcVar12,0xffffffff);
        FUN_004aa7b0(local_7c,".",1);
      }
      sVar6 = 0xffffffff;
      pcVar12 = *(char **)(iVar7 + 0x10 + local_98._4_4_ * 8);
LAB_004ae045:
      FUN_004aa7b0(local_7c,pcVar12,sVar6);
LAB_004ae050:
      local_64 = (byte *)0x0;
      pbVar11 = (byte *)0x0;
      break;
    case '\x0e':
      cVar5 = '\0';
LAB_004ad619:
      if ((local_88[2] & 1) == 0) {
        if (cVar5 == '\0') {
          local_80 = *(byte **)local_58;
          pdVar13 = (double *)((int)local_58 + 4);
          local_5c = (byte *)0x0;
        }
        else {
          local_80 = *(byte **)local_58;
          pdVar13 = local_58 + 1;
          local_5c = *(byte **)((int)local_58 + 4);
        }
        local_51 = 0;
        local_58 = pdVar13;
      }
      else {
        if (cVar5 == '\0') {
          local_80 = *(byte **)local_58;
          local_58 = (double *)((int)local_58 + 4);
          local_5c = (byte *)((int)local_80 >> 0x1f);
        }
        else {
          local_80 = *(byte **)local_58;
          local_5c = *(byte **)((int)local_58 + 4);
          local_58 = local_58 + 1;
        }
        if (((int)local_5c < 1) && ((int)local_5c < 0)) {
          if ((local_80 == (byte *)0x0) && (local_5c == (byte *)0x80000000)) {
            local_51 = 0x2d;
          }
          else {
            bVar18 = local_80 != (byte *)0x0;
            local_80 = (byte *)-(int)local_80;
            local_5c = (byte *)-(int)(local_5c + bVar18);
            local_51 = 0x2d;
          }
        }
        else if (local_5d == 0) {
          local_51 = -(local_51 != 0) & 0x20;
        }
        else {
          local_51 = 0x2b;
        }
      }
      if (local_80 == (byte *)0x0 && local_5c == (byte *)0x0) {
        local_68 = 0;
      }
      if ((local_69 != '\0') && ((int)local_74 < (int)(local_64 + -(uint)(local_51 != 0)))) {
        local_74 = local_64 + -(uint)(local_51 != 0);
      }
      if ((int)local_74 < 0x3c) {
        pbVar15 = (byte *)0x46;
        local_90 = &local_50;
        local_70 = (byte *)0x46;
      }
      else {
        pbVar15 = local_74 + 10;
        local_70 = pbVar15;
        local_90 = (byte *)FUN_004a0350((int)pbVar15);
        local_8c = local_90;
        if (local_90 == (byte *)0x0) {
LAB_004adfc7:
          *(undefined1 *)(local_7c + 6) = 1;
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
      }
      pbVar15 = local_90 + (int)(pbVar15 + -1);
      if (local_52 == '\x10') {
        uVar21 = __aulldiv((uint)local_80,(uint)local_5c,10,0);
        local_a0 = (uint)uVar21;
        local_9c = local_80 + local_a0 * -10;
        if ((3 < (int)local_9c) ||
           (lVar22 = __aullrem(local_a0,(uint)((ulonglong)uVar21 >> 0x20),10,0), lVar22 == 1)) {
          local_9c = (byte *)0x0;
        }
        pbVar15[-1] = "thstndrd"[(int)local_9c * 2 + 1];
        pbVar15 = pbVar15 + -2;
        *pbVar15 = "thstndrd"[(int)local_9c * 2];
      }
      local_98 = (double)CONCAT44("0123456789ABCDEF0123456789abcdef" + (byte)local_88[4],
                                  (undefined4)local_98);
      local_a0 = (uint)(byte)local_88[1];
      lVar22 = CONCAT44(local_5c,local_80);
      local_9c = (byte *)0x0;
      do {
        pbVar11 = unaff_EBX;
        pbVar15 = pbVar15 + -1;
        unaff_EBX = pbVar11;
        lVar22 = __aulldvrm((uint)lVar22,(uint)((ulonglong)lVar22 >> 0x20),local_a0,(uint)local_9c);
        *pbVar15 = *(byte *)(extraout_ECX + local_98._4_4_);
        local_80 = pbVar11;
      } while (lVar22 != 0);
      local_5c = pbVar15;
      for (pbVar11 = pbVar15 + (int)(local_74 + (-(int)local_70 - (int)local_90) + 1);
          0 < (int)pbVar11; pbVar11 = pbVar11 + -1) {
        local_5c = local_5c + -1;
        *local_5c = 0x30;
      }
      if (local_51 != 0) {
        local_5c = local_5c + -1;
        *local_5c = local_51;
      }
      if ((local_68 != 0) && (local_88[5] != 0)) {
        pbVar15 = &DAT_00569ab0 + (byte)local_88[5];
        bVar3 = *pbVar15;
        while (bVar3 != 0) {
          local_5c = local_5c + -1;
          pbVar15 = pbVar15 + 1;
          *local_5c = bVar3;
          bVar3 = *pbVar15;
        }
      }
      pbVar11 = local_90 + (int)(local_70 + (-1 - (int)local_5c));
      pbVar15 = local_5c;
      break;
    default:
      goto switchD_004ad606_default;
    }
    if (local_65 == '\0') {
LAB_004ae0af:
      if (0 < (int)local_64 - (int)pbVar11) {
        FUN_0048cac0(local_7c,(int)local_64 - (int)pbVar11);
      }
    }
LAB_004ae0c1:
    if (0 < (int)pbVar11) {
      FUN_004aa7b0(local_7c,(char *)pbVar15,(size_t)pbVar11);
    }
    if ((local_65 != '\0') && (0 < (int)local_64 - (int)pbVar11)) {
      FUN_0048cac0(local_7c,(int)local_64 - (int)pbVar11);
    }
    FUN_00466dd0((int)local_8c);
    param_3 = local_78 + 1;
    bVar3 = *param_3;
  } while( true );
}


/* FUN_004ae1b0 @ 004ae1b0  kind=lib  attributed-by=lib-island  size=147 */

void __cdecl FUN_004ae1b0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)param_1[2];
  if (piVar2 == (int *)0x0) {
    piVar2 = FUN_004af150(*param_1);
    param_1[2] = (int)piVar2;
    if (piVar2 == (int *)0x0) {
      return;
    }
    FUN_004ae760(piVar2,0x94);
  }
  iVar1 = piVar2[7];
  if ((iVar1 < piVar2[8]) || (iVar3 = FUN_0047de10(piVar2), iVar3 == 0)) {
    iVar3 = piVar2[1];
    piVar2[7] = piVar2[7] + 1;
    *(undefined2 *)(iVar3 + iVar1 * 0x14) = 0x7f;
    *(undefined1 *)(iVar3 + 3 + iVar1 * 0x14) = 0;
    *(undefined4 *)(iVar3 + 4 + iVar1 * 0x14) = 0;
    *(undefined4 *)(iVar3 + 8 + iVar1 * 0x14) = 0;
    *(undefined4 *)(iVar3 + 0xc + iVar1 * 0x14) = 0;
    *(undefined4 *)(iVar3 + 0x10 + iVar1 * 0x14) = 0;
  }
  piVar2[0x1a] = piVar2[0x1a] | 1;
  if (*(char *)(*(int *)(*(int *)(*piVar2 + 0x10) + 4) + 9) != '\0') {
    piVar2[0x1b] = piVar2[0x1b] | 1;
  }
  return;
}


/* FUN_004ae250 @ 004ae250  kind=lib  attributed-by=lib-island  size=86 */

void __cdecl FUN_004ae250(int *param_1,char param_2,byte param_3)

{
  if (param_2 == 'a') {
    if (((*(ushort *)(param_1 + 7) & 2) == 0) && ((*(ushort *)(param_1 + 7) & 0xc) != 0)) {
      FUN_004b7cf0(param_1,(uint)param_3);
    }
    *(ushort *)(param_1 + 7) = *(ushort *)(param_1 + 7) & 0xfff3;
    return;
  }
  if (param_2 != 'b') {
    FUN_0046dfa0((int)param_1);
    if ((*(byte *)(param_1 + 7) & 8) != 0) {
      FUN_004b6650((int)param_1);
    }
  }
  return;
}


/* FUN_004ae2b0 @ 004ae2b0  kind=lib  attributed-by=lib-island  size=76 */

void __cdecl FUN_004ae2b0(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if ((*(ushort *)(param_1 + 7) & 0x2460) != 0) {
      FUN_004b7720(param_1);
    }
    FUN_00494b00(*param_1,(undefined4 *)param_1[9]);
    param_1[1] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    FUN_00494b00(*param_1,param_1);
  }
  return;
}


/* FUN_004ae300 @ 004ae300  kind=lib  attributed-by=lib-island  size=801 */

undefined4 __cdecl
FUN_004ae300(int param_1,char *param_2,uint param_3,undefined4 param_4,undefined4 *param_5)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  size_t sVar5;
  undefined4 *puVar6;
  void *pvVar7;
  int *piVar8;
  char cVar9;
  char cVar10;
  undefined8 uVar11;
  int local_c;
  int *local_8;
  
  piVar8 = (int *)0x0;
  local_8 = (int *)0x0;
  local_c = 1;
  if (param_2 == (char *)0x0) {
    *param_5 = 0;
    return 0;
  }
  cVar9 = *param_2;
  if (cVar9 == -0x7c) {
    cVar9 = param_2[0x23];
  }
  cVar10 = (char)param_4;
  bVar2 = (byte)param_3;
  if (cVar9 == -100) {
    pcVar1 = *(char **)(param_2 + 8);
    if ((*pcVar1 == -0x7f) || (*pcVar1 == -0x7e)) {
      cVar9 = *pcVar1;
      local_c = -1;
      param_2 = pcVar1;
      goto LAB_004ae369;
    }
LAB_004ae396:
    iVar3 = FUN_004ae300(param_1,*(char **)(param_2 + 8),param_3,param_4,&local_8);
    if (iVar3 == 0) {
      FUN_004b75f0((int)local_8);
      iVar3 = local_8[4];
      if ((iVar3 == 0) && (local_8[5] == -0x80000000)) {
        *(ushort *)(local_8 + 7) = *(ushort *)(local_8 + 7) & 4;
        *(ushort *)(local_8 + 7) = *(ushort *)(local_8 + 7) | 8;
        local_8[2] = 0;
        local_8[3] = 0x43e00000;
      }
      else {
        local_8[4] = -iVar3;
        local_8[5] = -(local_8[5] + (uint)(iVar3 != 0));
      }
      *(ulonglong *)(local_8 + 2) = *(ulonglong *)(local_8 + 2) ^ 0x8000000000000000;
      FUN_004ae250(local_8,cVar10,bVar2);
    }
LAB_004ae604:
    piVar8 = local_8;
    if (local_8 == (int *)0x0) goto LAB_004ae614;
  }
  else {
LAB_004ae369:
    if (((cVar9 == '^') || (cVar9 == -0x7e)) || (cVar9 == -0x7f)) {
      local_8 = FUN_00494b90(param_1,0x28);
      if (local_8 == (int *)0x0) {
LAB_004ae44a:
        *(undefined1 *)(param_1 + 0x38) = 1;
        FUN_00494b00(param_1,(undefined4 *)0x0);
        FUN_004ae2b0(local_8);
        *param_5 = 0;
        return 7;
      }
      local_8[0] = 0;
      local_8[1] = 0;
      local_8[2] = 0;
      local_8[3] = 0;
      local_8[4] = 0;
      local_8[5] = 0;
      local_8[6] = 0;
      local_8[7] = 0;
      local_8[8] = 0;
      local_8[9] = 0;
      *(undefined2 *)(local_8 + 7) = 1;
      *(undefined1 *)((int)local_8 + 0x1e) = 5;
      *local_8 = param_1;
      if ((*(ushort *)(param_2 + 2) & 0x400) == 0) {
        pvVar7 = (void *)FUN_004a02d0(param_1,&DAT_0056e49c);
        if (pvVar7 == (void *)0x0) goto LAB_004ae44a;
        if (local_8 != (int *)0x0) {
          FUN_004b79e0(local_8,pvVar7,0xffffffff,'\x01',FUN_004a0570);
        }
        if (cVar9 != -0x7e) goto LAB_004ae53e;
        *(undefined1 *)((int)local_8 + 0x1e) = 2;
LAB_004ae54e:
        piVar8 = local_8;
        if (cVar10 != 'b') goto LAB_004ae5bc;
        FUN_0046dfa0((int)local_8);
        if ((*(byte *)(piVar8 + 7) & 8) != 0) {
          FUN_004b6650((int)piVar8);
        }
      }
      else {
        FUN_004b7860(local_8,(int)((longlong)*(int *)(param_2 + 4) * (longlong)local_c),
                     (int)((ulonglong)((longlong)*(int *)(param_2 + 4) * (longlong)local_c) >> 0x20)
                    );
LAB_004ae53e:
        if ((cVar9 == -0x7f) || (cVar9 == -0x7e)) goto LAB_004ae54e;
LAB_004ae5bc:
        FUN_004ae250(local_8,cVar10,1);
      }
      if ((*(ushort *)(local_8 + 7) & 0xc) != 0) {
        *(ushort *)(local_8 + 7) = *(ushort *)(local_8 + 7) & 0xfffd;
      }
      if (((bVar2 != 1) && ((*(byte *)(local_8 + 7) & 2) != 0)) &&
         ((uint)*(byte *)((int)local_8 + 0x1f) != (param_3 & 0xff))) {
        FUN_004b7dc0(local_8,bVar2);
      }
      goto LAB_004ae604;
    }
    if (cVar9 == -100) goto LAB_004ae396;
    if (cVar9 != 'b') {
      if (cVar9 != -0x7d) goto LAB_004ae614;
      local_8 = (int *)FUN_004ae630(param_1);
      if (local_8 == (int *)0x0) goto LAB_004ae44a;
      iVar3 = *(int *)(param_2 + 4);
      uVar4 = FUN_004aa9b0((char *)(iVar3 + 2));
      uVar11 = 0x4a057000000000;
      sVar5 = (int)(uVar4 - 1) / 2;
      puVar6 = FUN_0049d800(param_1,iVar3 + 2,uVar4 - 1);
      FUN_004b79e0(local_8,puVar6,sVar5,(char)uVar11,(undefined *)((ulonglong)uVar11 >> 0x20));
      goto LAB_004ae604;
    }
    local_8 = (int *)FUN_004ae630(param_1);
    if (local_8 == (int *)0x0) goto LAB_004ae44a;
  }
  FUN_004b7cb0((int)local_8);
  piVar8 = local_8;
LAB_004ae614:
  *param_5 = piVar8;
  return 0;
}


/* FUN_004ae630 @ 004ae630  kind=lib  attributed-by=lib-island  size=67 */

void __cdecl FUN_004ae630(int param_1)

{
  int *piVar1;
  
  piVar1 = FUN_00494b90(param_1,0x28);
  if (piVar1 != (int *)0x0) {
    piVar1[0] = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
    piVar1[3] = 0;
    piVar1[4] = 0;
    piVar1[5] = 0;
    piVar1[6] = 0;
    piVar1[7] = 0;
    piVar1[8] = 0;
    piVar1[9] = 0;
    *(undefined2 *)(piVar1 + 7) = 1;
    *(undefined1 *)((int)piVar1 + 0x1e) = 5;
    *piVar1 = param_1;
  }
  return;
}


/* FUN_004ae680 @ 004ae680  kind=lib  attributed-by=lib-island  size=169 */

int __cdecl FUN_004ae680(int *param_1,byte param_2)

{
  ushort uVar1;
  int iVar2;
  
  if ((param_1 == (int *)0x0) || (uVar1 = *(ushort *)(param_1 + 7), (uVar1 & 1) != 0)) {
    return 0;
  }
  *(ushort *)(param_1 + 7) = uVar1 >> 3 & 2 | uVar1;
  if ((uVar1 & 0x4000) != 0) {
    FUN_004b6fa0(param_1);
  }
  if ((*(byte *)(param_1 + 7) & 2) == 0) {
    FUN_004b7cf0(param_1,(uint)param_2);
  }
  else {
    if (*(byte *)((int)param_1 + 0x1f) != (param_2 & 0xf7)) {
      FUN_004b7dc0(param_1,param_2 & 0xf7);
    }
    if ((((param_2 & 8) != 0) && ((param_1[1] & 1U) != 0)) &&
       (iVar2 = FUN_004b7490(param_1), iVar2 != 0)) {
      return 0;
    }
    FUN_004b7590(param_1);
  }
  if (*(byte *)((int)param_1 + 0x1f) != (param_2 & 0xf7)) {
    return 0;
  }
  return param_1[1];
}


/* FUN_004ae730 @ 004ae730  kind=lib  attributed-by=lib-island  size=38 */

void __cdecl FUN_004ae730(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    param_1 = param_1 >> 7 | param_2 << 0x19;
    param_2 = param_2 >> 7;
    iVar1 = iVar1 + 1;
    if (param_1 == 0 && param_2 == 0) {
      return;
    }
  } while (iVar1 < 9);
  return;
}


/* FUN_004ae760 @ 004ae760  kind=lib  attributed-by=lib-island  size=97 */

int __cdecl FUN_004ae760(int *param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[7];
  if (param_1[8] <= iVar2) {
    iVar3 = FUN_0047de10(param_1);
    if (iVar3 != 0) {
      return 1;
    }
  }
  param_1[7] = param_1[7] + 1;
  puVar1 = (undefined1 *)(param_1[1] + iVar2 * 0x14);
  *puVar1 = param_2;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  puVar1[1] = 0;
  return iVar2;
}


/* FUN_004ae7d0 @ 004ae7d0  kind=lib  attributed-by=lib-island  size=96 */

int __cdecl FUN_004ae7d0(int *param_1,undefined1 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[7];
  if (param_1[8] <= iVar2) {
    iVar3 = FUN_0047de10(param_1);
    if (iVar3 != 0) {
      return 1;
    }
  }
  param_1[7] = param_1[7] + 1;
  puVar1 = (undefined1 *)(param_1[1] + iVar2 * 0x14);
  *puVar1 = param_2;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = param_3;
  *(undefined4 *)(puVar1 + 8) = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  puVar1[1] = 0;
  return iVar2;
}


/* FUN_004ae830 @ 004ae830  kind=lib  attributed-by=lib-island  size=95 */

int __cdecl FUN_004ae830(int *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[7];
  if (param_1[8] <= iVar2) {
    iVar3 = FUN_0047de10(param_1);
    if (iVar3 != 0) {
      return 1;
    }
  }
  param_1[7] = param_1[7] + 1;
  puVar1 = (undefined1 *)(param_1[1] + iVar2 * 0x14);
  *puVar1 = param_2;
  *(undefined4 *)(puVar1 + 4) = param_3;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 8) = param_4;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  puVar1[1] = 0;
  return iVar2;
}


/* FUN_004ae890 @ 004ae890  kind=lib  attributed-by=lib-island  size=94 */

int __cdecl
FUN_004ae890(int *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[7];
  if (param_1[8] <= iVar2) {
    iVar3 = FUN_0047de10(param_1);
    if (iVar3 != 0) {
      return 1;
    }
  }
  param_1[7] = param_1[7] + 1;
  puVar1 = (undefined1 *)(param_1[1] + iVar2 * 0x14);
  *(undefined4 *)(puVar1 + 4) = param_3;
  *puVar1 = param_2;
  *(undefined4 *)(puVar1 + 8) = param_4;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 0xc) = param_5;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  puVar1[1] = 0;
  return iVar2;
}


/* FUN_004ae8f0 @ 004ae8f0  kind=lib  attributed-by=lib-island  size=108 */

int __cdecl
FUN_004ae8f0(int *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int *param_6,size_t param_7)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1[7];
  if (param_1[8] <= iVar3) {
    iVar2 = FUN_0047de10(param_1);
    if (iVar2 != 0) {
      iVar3 = 1;
      goto LAB_004ae946;
    }
  }
  param_1[7] = param_1[7] + 1;
  puVar1 = (undefined1 *)(param_1[1] + iVar3 * 0x14);
  *puVar1 = param_2;
  *(undefined4 *)(puVar1 + 4) = param_3;
  *(undefined4 *)(puVar1 + 8) = param_4;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 0xc) = param_5;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  puVar1[1] = 0;
LAB_004ae946:
  FUN_004aecc0(param_1,iVar3,param_6,param_7);
  return iVar3;
}


/* FUN_004ae960 @ 004ae960  kind=lib  attributed-by=lib-island  size=171 */

int __cdecl
FUN_004ae960(int *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int *param_6)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = param_1[7];
  if (param_1[8] <= iVar6) {
    iVar4 = FUN_0047de10(param_1);
    if (iVar4 != 0) {
      iVar6 = 1;
      goto LAB_004ae9b6;
    }
  }
  param_1[7] = param_1[7] + 1;
  puVar1 = (undefined1 *)(param_1[1] + iVar6 * 0x14);
  *puVar1 = param_2;
  *(undefined4 *)(puVar1 + 4) = param_3;
  *(undefined4 *)(puVar1 + 8) = param_4;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 0xc) = param_5;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  puVar1[1] = 0;
LAB_004ae9b6:
  iVar4 = param_1[1];
  iVar3 = *param_1;
  if ((iVar4 != 0) && (*(char *)(iVar3 + 0x38) == '\0')) {
    iVar5 = iVar6;
    if (iVar6 < 0) {
      iVar5 = param_1[7] + -1;
    }
    iVar2 = iVar4 + iVar5 * 0x14;
    FUN_0047bc80(iVar3,(int)*(char *)(iVar2 + 1),*(int **)(iVar4 + 0x10 + iVar5 * 0x14));
    *(int **)(iVar2 + 0x10) = param_6;
    *(undefined1 *)(iVar2 + 1) = 0xf2;
    return iVar6;
  }
  FUN_0047bc80(iVar3,0xfffffff2,param_6);
  return iVar6;
}


/* FUN_004aea10 @ 004aea10  kind=lib  attributed-by=lib-island  size=168 */

int __cdecl FUN_004aea10(int *param_1,int param_2,int param_3)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  byte *pbVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  
  piVar2 = param_1;
  if (param_1[8] < param_1[7] + param_2) {
    iVar3 = FUN_0047de10(param_1);
    if (iVar3 != 0) {
      return 0;
    }
  }
  iVar3 = param_1[7];
  if (0 < param_2) {
    pcVar5 = (char *)(param_3 + 1);
    iVar6 = iVar3 * 0x14;
    param_1 = (int *)param_2;
    do {
      iVar7 = (int)pcVar5[1];
      pbVar4 = (byte *)(piVar2[1] + iVar6);
      *pbVar4 = pcVar5[-1];
      *(int *)(pbVar4 + 4) = (int)*pcVar5;
      if ((iVar7 < 0) && (((&DAT_00569830)[*pbVar4] & 1) != 0)) {
        *(int *)(pbVar4 + 8) = (iVar3 - iVar7) + -1;
      }
      else {
        *(int *)(pbVar4 + 8) = iVar7;
      }
      pcVar1 = pcVar5 + 2;
      iVar6 = iVar6 + 0x14;
      pcVar5 = pcVar5 + 4;
      param_1 = (int *)((int)param_1 + -1);
      *(int *)(pbVar4 + 0xc) = (int)*pcVar1;
      pbVar4[1] = 0;
      pbVar4[0x10] = 0;
      pbVar4[0x11] = 0;
      pbVar4[0x12] = 0;
      pbVar4[0x13] = 0;
      pbVar4[3] = 0;
    } while (param_1 != (int *)0x0);
    piVar2 = piVar2 + 7;
    *piVar2 = *piVar2 + param_2;
  }
  return iVar3;
}


/* FUN_004aeac0 @ 004aeac0  kind=lib  attributed-by=lib-island  size=241 */

void __cdecl FUN_004aeac0(int *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = param_1[7];
  if ((iVar7 < param_1[8]) || (iVar4 = FUN_0047de10(param_1), iVar4 == 0)) {
    param_1[7] = param_1[7] + 1;
    puVar2 = (undefined2 *)(param_1[1] + iVar7 * 0x14);
    *puVar2 = 0x6a;
    *(undefined1 *)((int)puVar2 + 3) = 0;
    *(undefined4 *)(puVar2 + 2) = param_2;
    *(undefined4 *)(puVar2 + 4) = 0;
    *(undefined4 *)(puVar2 + 6) = 0;
    *(undefined4 *)(puVar2 + 8) = 0;
  }
  else {
    iVar7 = 1;
  }
  iVar4 = param_1[1];
  iVar8 = *param_1;
  if ((iVar4 == 0) || (*(char *)(iVar8 + 0x38) != '\0')) {
    FUN_0047bc80(iVar8,0xffffffff,param_3);
  }
  else {
    if (iVar7 < 0) {
      iVar7 = param_1[7] + -1;
    }
    iVar3 = iVar4 + iVar7 * 0x14;
    FUN_0047bc80(iVar8,(int)*(char *)(iVar3 + 1),*(int **)(iVar4 + 0x10 + iVar7 * 0x14));
    *(undefined4 *)(iVar3 + 0x10) = 0;
    if (param_3 == (int *)0x0) {
      *(undefined4 *)(iVar3 + 0x10) = 0;
      *(undefined1 *)(iVar3 + 1) = 0;
    }
    else {
      *(int **)(iVar3 + 0x10) = param_3;
      *(undefined1 *)(iVar3 + 1) = 0xff;
    }
  }
  iVar7 = *param_1;
  iVar4 = 0;
  if (0 < *(int *)(iVar7 + 0x14)) {
    uVar6 = param_1[0x1a];
    iVar8 = 0;
    do {
      uVar5 = 1 << ((byte)iVar4 & 0x1f);
      uVar6 = uVar6 | uVar5;
      param_1[0x1a] = uVar6;
      if ((iVar4 != 1) &&
         (piVar1 = (int *)(iVar7 + 0x10), iVar7 = *param_1,
         *(char *)(*(int *)(*piVar1 + 4 + iVar8) + 9) != '\0')) {
        param_1[0x1b] = param_1[0x1b] | uVar5;
      }
      iVar4 = iVar4 + 1;
      iVar8 = iVar8 + 0x10;
    } while (iVar4 < *(int *)(iVar7 + 0x14));
  }
  return;
}


/* FUN_004aebc0 @ 004aebc0  kind=lib  attributed-by=lib-island  size=102 */

undefined4 * __cdecl FUN_004aebc0(int *param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = (uint)*(ushort *)((int)param_1 + 6) * 0x28 + 0x40;
  if ((int)(param_3 + (-param_2 & 7U)) < iVar1) {
    puVar2 = FUN_00494b90(*param_1,iVar1);
    *param_4 = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
  }
  else {
    puVar2 = (undefined4 *)(param_2 + (-param_2 & 7U));
    *param_4 = 0;
  }
  puVar2[4] = puVar2 + 6;
  *puVar2 = param_1;
  *(short *)(puVar2 + 1) = *(short *)((int)param_1 + 6) + 1;
  return puVar2;
}


/* FUN_004aec30 @ 004aec30  kind=lib  attributed-by=lib-island  size=39 */

undefined4 __cdecl FUN_004aec30(int *param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (((*(byte *)(param_1 + 7) & 2) != 0) && (*(byte *)((int)param_1 + 0x1f) != param_2)) {
    uVar1 = FUN_004b7dc0(param_1,(char)param_2);
    return uVar1;
  }
  return 0;
}


/* FUN_004aec60 @ 004aec60  kind=lib  attributed-by=lib-island  size=29 */

void __cdecl FUN_004aec60(int param_1,uint param_2,undefined4 param_3)

{
  if (param_2 < *(uint *)(param_1 + 0x1c)) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 4 + param_2 * 0x14) = param_3;
  }
  return;
}


/* FUN_004aec80 @ 004aec80  kind=lib  attributed-by=lib-island  size=29 */

void __cdecl FUN_004aec80(int param_1,uint param_2,undefined4 param_3)

{
  if (param_2 < *(uint *)(param_1 + 0x1c)) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 8 + param_2 * 0x14) = param_3;
  }
  return;
}


/* FUN_004aeca0 @ 004aeca0  kind=lib  attributed-by=lib-island  size=29 */

void __cdecl FUN_004aeca0(int param_1,uint param_2,undefined4 param_3)

{
  if (param_2 < *(uint *)(param_1 + 0x1c)) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0xc + param_2 * 0x14) = param_3;
  }
  return;
}


/* FUN_004aecc0 @ 004aecc0  kind=lib  attributed-by=lib-island  size=359 */

void __cdecl FUN_004aecc0(int *param_1,int param_2,int *param_3,size_t param_4)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  int iVar3;
  void *_Src;
  uint _Size;
  void *_Dst_00;
  undefined4 *puVar4;
  
  iVar2 = param_1[1];
  iVar3 = *param_1;
  if ((iVar2 == 0) || (*(char *)(iVar3 + 0x38) != '\0')) {
    if ((param_4 != 0xfffffffa) && (param_4 != 0xfffffff6)) {
      FUN_0047bc80(iVar3,param_4,param_3);
      return;
    }
  }
  else {
    if (param_2 < 0) {
      param_2 = param_1[7] + -1;
    }
    iVar1 = iVar2 + param_2 * 0x14;
    FUN_0047bc80(iVar3,(int)*(char *)(iVar1 + 1),*(int **)(iVar2 + 0x10 + param_2 * 0x14));
    *(undefined4 *)(iVar1 + 0x10) = 0;
    if (param_4 == 0xfffffff2) {
      *(int **)(iVar1 + 0x10) = param_3;
      *(undefined1 *)(iVar1 + 1) = 0xf2;
      return;
    }
    if (param_3 == (int *)0x0) {
      *(undefined4 *)(iVar1 + 0x10) = 0;
      *(undefined1 *)(iVar1 + 1) = 0;
      return;
    }
    if (param_4 != 0xfffffffa) {
      if (param_4 == 0xfffffff0) {
        *(int **)(iVar1 + 0x10) = param_3;
        *(undefined1 *)(iVar1 + 1) = 0xfa;
        return;
      }
      if (param_4 == 0xfffffff6) {
        *(int **)(iVar1 + 0x10) = param_3;
        *(undefined1 *)(iVar1 + 1) = 0xf6;
        param_3[3] = param_3[3] + 1;
        return;
      }
      if ((int)param_4 < 0) {
        *(int **)(iVar1 + 0x10) = param_3;
        *(char *)(iVar1 + 1) = (char)param_4;
        return;
      }
      if (param_4 == 0) {
        param_4 = FUN_004aa9b0((char *)param_3);
      }
      puVar4 = FUN_00494e00(*param_1,param_3,param_4);
      *(undefined4 **)(iVar1 + 0x10) = puVar4;
      *(undefined1 *)(iVar1 + 1) = 0xff;
      return;
    }
    _Size = (uint)*(ushort *)((int)param_3 + 6);
    _Dst_00 = (void *)FUN_004a0350(_Size * 5 + 0xc);
    *(void **)(iVar1 + 0x10) = _Dst_00;
    if (_Dst_00 == (void *)0x0) {
      *(undefined1 *)(*param_1 + 0x38) = 1;
      *(undefined1 *)(iVar1 + 1) = 0;
      return;
    }
    memcpy(_Dst_00,param_3,_Size * 4 + 0xc);
    _Src = *(void **)((int)_Dst_00 + 8);
    _Dst = (void *)((int)_Dst_00 + (_Size + 3) * 4);
    *(void **)((int)_Dst_00 + 8) = _Dst;
    memcpy(_Dst,_Src,_Size);
    *(undefined1 *)(iVar1 + 1) = 0xfa;
  }
  return;
}


/* FUN_004aee30 @ 004aee30  kind=lib  attributed-by=lib-island  size=28 */

void __cdecl FUN_004aee30(int param_1,undefined1 param_2)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 4) + -0x11 + *(int *)(param_1 + 0x1c) * 0x14) = param_2;
  }
  return;
}


/* FUN_004aee50 @ 004aee50  kind=lib  attributed-by=lib-island  size=67 */

void __cdecl FUN_004aee50(int *param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = param_1[1];
  if (iVar2 != 0) {
    puVar1 = (undefined8 *)(iVar2 + param_2 * 0x14);
    FUN_0047bc80(*param_1,(int)*(char *)((int)puVar1 + 1),*(int **)(iVar2 + 0x10 + param_2 * 0x14));
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *(undefined1 *)puVar1 = 0x95;
  }
  return;
}


/* FUN_004aeea0 @ 004aeea0  kind=lib  attributed-by=lib-string  size=94 */

undefined4 __cdecl FUN_004aeea0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (param_2 == 0) {
    if (param_1[0x23] < 0) {
      return 0;
    }
    if (0 < param_1[0x23]) goto LAB_004aeeda;
    iVar2 = param_1[0x22];
  }
  else {
    if (0 < *(int *)(iVar1 + 0x1ec)) goto LAB_004aeeda;
    if (*(int *)(iVar1 + 0x1ec) < 0) {
      return 0;
    }
    iVar2 = *(int *)(iVar1 + 0x1e8);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_004aeeda:
  param_1[0x16] = 0x13;
  *(undefined1 *)(param_1 + 0x17) = 2;
  FUN_004a9a30(param_1 + 0xd,iVar1,(byte *)"foreign key constraint failed");
  return 1;
}


/* FUN_004aef00 @ 004aef00  kind=lib  attributed-by=lib-island  size=327 */

void __cdecl FUN_004aef00(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  
  FUN_00487fb0(*(int **)(param_2 + 0x44),(int)*(short *)(param_2 + 0x4c));
  FUN_00487fb0(*(int **)(param_2 + 0x10),(uint)*(ushort *)(param_2 + 0x2c) * 2);
  puVar3 = *(undefined4 **)(param_2 + 0xb0);
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar3;
    puVar2 = (undefined4 *)puVar3[6];
    if ((puVar1 != (undefined4 *)0x0) && (puVar1 < puVar1 + puVar3[1] * 5)) {
      pcVar5 = (char *)((int)puVar1 + 1);
      iVar4 = (uint)((int)(puVar1 + puVar3[1] * 5) + (-1 - (int)puVar1)) / 0x14 + 1;
      do {
        FUN_0047bc80(param_1,(int)*pcVar5,*(int **)(pcVar5 + 0xf));
        pcVar5 = pcVar5 + 0x14;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_00494b00(param_1,puVar1);
    FUN_00494b00(param_1,puVar3);
    puVar3 = puVar2;
  }
  iVar4 = (int)*(short *)(param_2 + 0x4e);
  while (iVar4 = iVar4 + -1, -1 < iVar4) {
    FUN_00494b00(param_1,*(undefined4 **)(*(int *)(param_2 + 0x48) + iVar4 * 4));
  }
  puVar3 = *(undefined4 **)(param_2 + 4);
  if ((puVar3 != (undefined4 *)0x0) && (puVar3 < puVar3 + *(int *)(param_2 + 0x1c) * 5)) {
    pcVar5 = (char *)((int)puVar3 + 1);
    iVar4 = (uint)((int)(puVar3 + *(int *)(param_2 + 0x1c) * 5) + (-1 - (int)puVar3)) / 0x14 + 1;
    do {
      FUN_0047bc80(param_1,(int)*pcVar5,*(int **)(pcVar5 + 0xf));
      pcVar5 = pcVar5 + 0x14;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00494b00(param_1,puVar3);
  FUN_00494b00(param_1,*(undefined4 **)(param_2 + 0x28));
  FUN_00494b00(param_1,*(undefined4 **)(param_2 + 0x10));
  FUN_00494b00(param_1,*(undefined4 **)(param_2 + 0x98));
  FUN_00494b00(param_1,*(undefined4 **)(param_2 + 0x9c));
  return;
}


/* FUN_004af050 @ 004af050  kind=lib  attributed-by=lib-island  size=250 */

uint __cdecl FUN_004af050(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int local_10;
  int local_c;
  
  iVar1 = *param_1;
  uVar5 = 0;
  if (*(int *)(iVar1 + 0x1e4) == 0) {
    return 0;
  }
  if (param_1[0x1c] == 0) {
    return 0;
  }
  iVar4 = param_1[0x1c] + -1;
  local_c = 0;
  if (0 < *(int *)(iVar1 + 0x14)) {
    local_10 = 0;
    do {
      puVar2 = *(undefined4 **)(local_10 + 4 + *(int *)(iVar1 + 0x10));
      if (puVar2 != (undefined4 *)0x0) {
        if ((param_2 != 2) || (uVar3 = FUN_00491910(puVar2,2,iVar4), uVar3 == 0)) {
          uVar3 = FUN_00491910(puVar2,1,iVar4);
        }
        if (uVar5 == 0) {
          uVar5 = uVar3;
        }
      }
      local_c = local_c + 1;
      local_10 = local_10 + 0x10;
    } while (local_c < *(int *)(iVar1 + 0x14));
  }
  *(int *)(iVar1 + 0x1e4) = *(int *)(iVar1 + 0x1e4) + -1;
  param_1[0x1c] = 0;
  if (uVar5 == 0) {
    if ((param_2 == 2) && (uVar5 = FUN_004b9ef0(iVar1,2,iVar4), uVar5 != 0)) goto LAB_004af11e;
    uVar5 = FUN_004b9ef0(iVar1,1,iVar4);
  }
  if (param_2 != 2) {
    return uVar5;
  }
LAB_004af11e:
  *(int *)(iVar1 + 0x1e8) = param_1[0x24];
  *(int *)(iVar1 + 0x1ec) = param_1[0x25];
  return uVar5;
}


/* FUN_004af150 @ 004af150  kind=lib  attributed-by=lib-island  size=91 */

int * __cdecl FUN_004af150(int param_1)

{
  int *_Dst;
  
  _Dst = FUN_00494b90(param_1,0xc0);
  if (_Dst != (int *)0x0) {
    memset(_Dst,0,0xc0);
    *_Dst = param_1;
    if (*(int *)(param_1 + 4) != 0) {
      *(int **)(*(int *)(param_1 + 4) + 0x38) = _Dst;
    }
    _Dst[0xf] = *(int *)(param_1 + 4);
    _Dst[0xe] = 0;
    *(int **)(param_1 + 4) = _Dst;
    _Dst[0xc] = 0x26bceaa5;
    return _Dst;
  }
  return (int *)0x0;
}


/* FUN_004af1b0 @ 004af1b0  kind=lib  attributed-by=lib-island  size=152 */

uint __cdecl FUN_004af1b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (*(char *)((int)param_1 + 0x1d) == '\0') {
    if ((int *)*param_1 != (int *)0x0) {
      uVar2 = FUN_0048f7e0((int *)*param_1,&param_1);
      if (uVar2 != 0) {
        return uVar2;
      }
      if (param_1 != (undefined4 *)0x0) {
        *(undefined1 *)(puVar1 + 7) = 1;
        puVar1[0x14] = 0;
      }
    }
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004908e0((int *)*param_1,(int *)0x0,param_1[0xe],param_1[0xf],0,(uint *)&param_1);
    if (uVar2 == 0) {
      puVar1[0x10] = puVar1[0xe];
      puVar1[0x11] = puVar1[0xf];
      if (param_1 == (undefined4 *)0x0) {
        *(undefined1 *)((int)puVar1 + 0x19) = 1;
        *(undefined1 *)((int)puVar1 + 0x1d) = 0;
        puVar1[0x14] = 0;
        return 0;
      }
      FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
      return 0xb;
    }
  }
  return uVar2;
}


/* FUN_004af250 @ 004af250  kind=lib  attributed-by=lib-island  size=82 */

void __cdecl FUN_004af250(int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    FUN_004aef00(iVar1,(int)param_1);
    if (param_1[0xe] == 0) {
      *(int *)(iVar1 + 4) = param_1[0xf];
    }
    else {
      *(int *)(param_1[0xe] + 0x3c) = param_1[0xf];
    }
    if (param_1[0xf] != 0) {
      *(int *)(param_1[0xf] + 0x38) = param_1[0xe];
    }
    param_1[0xc] = -0x49f93c38;
    *param_1 = 0;
    FUN_00494b00(iVar1,param_1);
  }
  return;
}


/* FUN_004af2b0 @ 004af2b0  kind=lib  attributed-by=lib-island  size=77 */

void __cdecl FUN_004af2b0(int *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  piVar1 = param_1;
  if (0 < param_1[1]) {
    do {
      piVar3 = piVar1 + 2;
      if (((0x1f < iVar2) || ((param_2 & 1 << ((byte)iVar2 & 0x1f)) == 0)) && (*piVar3 != 0)) {
        if ((code *)piVar1[3] != (code *)0x0) {
          (*(code *)piVar1[3])(*piVar3);
        }
        *piVar3 = 0;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar3;
    } while (iVar2 < param_1[1]);
  }
  return;
}


/* FUN_004af300 @ 004af300  kind=lib  attributed-by=lib-island  size=87 */

void __cdecl FUN_004af300(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_1[0x1b] != 0) {
    iVar1 = *(int *)(*param_1 + 0x14);
    iVar3 = 0;
    uVar2 = 1;
    if (0 < iVar1) {
      puVar4 = (undefined4 *)(*(int *)(*param_1 + 0x10) + 4);
      do {
        if (((iVar3 != 1) && ((param_1[0x1b] & uVar2) != 0)) &&
           ((undefined4 *)*puVar4 != (undefined4 *)0x0)) {
          FUN_0048fbc0((undefined4 *)*puVar4);
        }
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 4;
        uVar2 = uVar2 * 2;
      } while (iVar3 < iVar1);
    }
  }
  return;
}


/* FUN_004af360 @ 004af360  kind=lib  attributed-by=lib-string  size=15286 */

/* WARNING: Removing unreachable block (ram,0x004b467d) */
/* WARNING: Removing unreachable block (ram,0x004b03a7) */

void FUN_004af360(uint *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  void *_Dst;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  uint6 uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  char cVar11;
  byte bVar12;
  undefined1 uVar13;
  bool bVar14;
  undefined2 uVar15;
  int iVar16;
  undefined3 extraout_var;
  undefined4 *puVar17;
  undefined3 extraout_var_00;
  int *piVar18;
  int *piVar19;
  undefined4 uVar20;
  byte *pbVar21;
  size_t sVar22;
  undefined3 extraout_var_01;
  char *pcVar23;
  undefined3 extraout_var_02;
  undefined4 *puVar24;
  undefined3 extraout_var_03;
  uint uVar25;
  int iVar26;
  int iVar27;
  undefined4 uVar28;
  uint *puVar29;
  int iVar30;
  ushort uVar31;
  uint extraout_ECX;
  int *piVar32;
  int *piVar33;
  void *extraout_EDX;
  uint extraout_EDX_00;
  uint *puVar34;
  uint uVar35;
  int *piVar36;
  undefined8 *puVar37;
  uint uVar38;
  uint uVar39;
  float10 fVar40;
  longlong lVar41;
  ulonglong uVar42;
  int local_130;
  int iStack_12c;
  int local_11c;
  undefined4 local_118;
  int local_114;
  uint local_110;
  int local_10c;
  undefined4 *local_108;
  uint local_104;
  uint local_100;
  byte local_f9;
  undefined8 local_f8;
  uint local_f0;
  uint local_ec;
  int *local_e8;
  uint local_e4;
  uint local_e0;
  int *local_dc;
  uint *local_d8;
  uint *local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  uint local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  byte *local_98;
  int *local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  byte *local_68;
  byte *local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  int local_4c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  piVar18 = (int *)*param_1;
  local_e0 = param_1[1];
  local_e4 = param_1[2];
  local_f0 = CONCAT31(local_f0._1_3_,*(undefined1 *)(*(int *)(piVar18[4] + 0xc) + 0x4d));
  local_10c = 0;
  local_104 = piVar18[8];
  local_100 = piVar18[9];
  piVar36 = (int *)0x0;
  local_d8 = param_1;
  local_ec = 0;
  local_d4 = (uint *)0x0;
  local_f9 = 0;
  local_114 = 0;
  local_dc = (int *)0x0;
  local_110 = 0;
  local_e8 = piVar18;
  FUN_004af300((int *)param_1);
  if (local_d8[0x16] == 7) goto LAB_004b57a6;
  local_d8[0x16] = 0;
  local_d8[5] = 0;
  piVar18[0x6d] = 0;
  if (piVar18[0x38] == 0) {
    iVar30 = piVar18[0x45];
    local_ec = local_d8[0x15];
LAB_004af440:
    uVar39 = local_ec;
    if ((char)piVar18[0xe] != '\0') goto LAB_004b57a6;
    if (iVar30 != 0) {
      iVar27 = local_114;
      if (piVar18[0x47] == local_114) {
        iVar16 = (*(code *)piVar18[0x45])();
        iVar27 = 0;
        if (iVar16 != 0) {
          puVar29 = (uint *)0x9;
          local_d4 = puVar29;
          goto LAB_004b57cd;
        }
      }
      local_114 = iVar27 + 1;
    }
    if ((*(byte *)(local_e0 + 2 + uVar39 * 0x14) & 2) != 0) {
      piVar36 = (int *)(local_e4 + *(int *)(local_e0 + 8 + uVar39 * 0x14) * 0x28);
      local_dc = piVar36;
      if ((*(ushort *)(piVar36 + 7) & 0x2460) != 0) {
        FUN_004b7720(piVar36);
      }
      *(undefined2 *)(piVar36 + 7) = 4;
    }
    uVar7 = local_c8;
    puVar34 = local_d8;
    piVar19 = local_dc;
    uVar35 = local_e0;
    uVar25 = local_e4;
    piVar33 = local_e8;
    bVar12 = *(byte *)(local_e0 + uVar39 * 0x14);
    puVar29 = local_d4;
    piVar10 = local_dc;
    uVar42 = local_d0;
    if (0x93 < bVar12 - 1) goto LAB_004b0d11;
    uVar38 = (uint)(int *)local_d0;
    uVar8 = (uint)local_c8._4_4_;
    uVar28 = local_c0._4_4_;
    uVar9 = (uint)local_b8._4_4_;
    switch(bVar12) {
    case 1:
      if (piVar18[0x38] == 0) goto LAB_004b0d00;
      goto LAB_004af4ee;
    case 2:
      iVar27 = *(int *)(local_e0 + 4 + uVar39 * 0x14);
      *(undefined2 *)(local_e4 + 0x1c + iVar27 * 0x28) = 4;
      *(uint *)(local_e4 + 0x10 + iVar27 * 0x28) = local_ec;
      *(int *)(local_e4 + 0x14 + iVar27 * 0x28) = (int)local_ec >> 0x1f;
      goto LAB_004af55f;
    case 3:
      local_ec = *(uint *)(local_e4 + 0x10 + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x28);
      break;
    case 4:
      iVar27 = *(int *)(local_e0 + 4 + uVar39 * 0x14);
      *(undefined2 *)(local_e4 + 0x1c + iVar27 * 0x28) = 4;
      uVar39 = *(uint *)(local_e4 + 0x10 + iVar27 * 0x28);
      local_d0 = CONCAT44(local_d0._4_4_,uVar39);
      *(uint *)(local_e4 + 0x10 + iVar27 * 0x28) = local_ec;
      *(int *)(local_e4 + 0x14 + iVar27 * 0x28) = (int)local_ec >> 0x1f;
      local_ec = uVar39;
      uVar42 = local_d0;
      break;
    case 5:
      if ((*(byte *)(local_e4 + 0x1c + *(int *)(local_e0 + 0xc + uVar39 * 0x14) * 0x28) & 1) != 0)
      goto switchD_004af4da_caseD_6;
      break;
    case 6:
switchD_004af4da_caseD_6:
      if ((*(int *)(local_e0 + 4 + uVar39 * 0x14) != 0) ||
         (piVar33 = (int *)local_d8[0x28], piVar33 == (int *)0x0)) {
        local_d8[0x16] = *(uint *)(local_e0 + 4 + uVar39 * 0x14);
        *(undefined1 *)(local_d8 + 0x17) = *(undefined1 *)(local_e0 + 8 + uVar39 * 0x14);
        local_d8[0x15] = local_ec;
        if (*(int *)(local_e0 + 0x10 + uVar39 * 0x14) == 0) {
          if (local_d8[0x16] != 0) {
            FUN_004683f0(*(undefined4 *)(local_e0 + 4 + uVar39 * 0x14),
                         "constraint failed at %d in [%s]");
          }
        }
        else {
          FUN_004a9a30((int *)(local_d8 + 0xd),(int)piVar18,&DAT_0056de50);
          FUN_004683f0(*(undefined4 *)(local_e0 + 4 + uVar39 * 0x14),"abort at %d in [%s]: %s");
        }
        iVar30 = FUN_004b60e0((int *)local_d8);
        puVar29 = local_d8;
        if (iVar30 == 5) {
LAB_004b564b:
          puVar29[0x16] = 5;
        }
        goto LAB_004b5847;
      }
      uVar25 = piVar33[1];
      local_d8[0x2a] = local_d8[0x2a] - 1;
      local_d8[0x28] = uVar25;
      uVar25 = local_d8[0x19];
      piVar18[0x13] = piVar18[0x13] + uVar25;
      piVar18[0x12] = uVar25;
      local_ec = FUN_004b5f90(piVar33);
      local_104 = piVar18[8];
      local_100 = piVar18[9];
      if (*(int *)(local_e0 + 8 + uVar39 * 0x14) == 4) {
        local_ec = *(int *)(local_d8[1] + 8 + local_ec * 0x14) - 1;
      }
      local_e0 = local_d8[1];
      local_e4 = local_d8[2];
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 7:
      iVar27 = *(int *)(local_e0 + 4 + uVar39 * 0x14);
      piVar36[4] = iVar27;
      piVar36[5] = iVar27 >> 0x1f;
      break;
    case 8:
      piVar33 = *(int **)(local_e0 + 0x10 + uVar39 * 0x14);
      piVar36[4] = *piVar33;
      piVar36[5] = piVar33[1];
      break;
    case 9:
      goto switchD_004af4da_caseD_9;
    case 10:
      iVar27 = *(int *)(local_e0 + 0xc + uVar39 * 0x14) - *(int *)(local_e0 + 8 + uVar39 * 0x14);
      uVar15 = 1;
      if (*(int *)(local_e0 + 4 + uVar39 * 0x14) != 0) {
        uVar15 = 0x101;
      }
      local_d0._0_6_ = CONCAT24(uVar15,iVar27);
      *(undefined2 *)(local_dc + 7) = uVar15;
      piVar36 = local_dc;
      while (puVar29 = local_d4, piVar10 = piVar36, uVar42 = local_d0, 0 < iVar27) {
        if ((*(ushort *)(piVar36 + 0x11) & 0x2460) != 0) {
          FUN_004b7720(piVar36 + 10);
        }
        *(undefined2 *)(piVar36 + 0x11) = local_d0._4_2_;
        iVar27 = (int)(int *)local_d0 - 1;
        local_d0 = CONCAT44(local_d0._4_4_,iVar27);
        piVar18 = local_e8;
        piVar36 = piVar36 + 10;
      }
      break;
    case 0xb:
      FUN_004b79e0(piVar36,*(void **)(local_e0 + 0x10 + uVar39 * 0x14),
                   *(size_t *)(local_e0 + 4 + uVar39 * 0x14),'\0',(undefined *)0x0);
      *(char *)((int)piVar36 + 0x1f) = (char)local_f0;
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0xc:
      piVar33 = (int *)(local_d8[0x11] + (*(int *)(local_e0 + 4 + uVar39 * 0x14) * 5 + -5) * 8);
      local_d0 = CONCAT44(local_d0._4_4_,piVar33);
      bVar14 = FUN_004b7d90(piVar33);
      piVar36 = local_dc;
      if (CONCAT31(extraout_var,bVar14) != 0) goto LAB_004b5780;
      FUN_004b7c40(local_dc,(undefined8 *)piVar33,0x800);
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0xd:
      local_d0 = local_d0 & 0xffffffff;
      iVar27 = *(int *)(local_e0 + 4 + uVar39 * 0x14);
      iVar16 = *(int *)(local_e0 + 8 + uVar39 * 0x14);
      local_c8 = CONCAT44(iVar16,iVar27);
      puVar37 = (undefined8 *)(local_e4 + iVar27 * 0x28);
      piVar36 = (int *)(local_e4 + iVar16 * 0x28);
      iVar27 = *(int *)(local_e0 + 0xc + uVar39 * 0x14) + 1;
      local_dc = piVar36;
      while (iVar27 != 0) {
        local_d0 = CONCAT44(iVar27 + -1,piVar36[9]);
        piVar36[9] = 0;
        FUN_004b7500(piVar36,puVar37);
        *(int **)((int)puVar37 + 0x24) = (int *)local_d0;
        puVar37 = puVar37 + 5;
        piVar36 = piVar36 + 10;
        iVar27 = (int)local_d0._4_4_;
      }
      local_d0 = CONCAT44(0xffffffff,(int *)local_d0);
      puVar29 = local_d4;
      piVar10 = piVar36;
      uVar42 = local_d0;
      break;
    case 0xe:
      local_d0 = CONCAT44(local_d0._4_4_,*(undefined4 *)(local_e0 + 0xc + uVar39 * 0x14));
      puVar37 = (undefined8 *)(local_e4 + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x28);
      piVar33 = (int *)(local_e4 + *(int *)(local_e0 + 8 + uVar39 * 0x14) * 0x28);
      while( true ) {
        local_dc = piVar33;
        FUN_004b7c40(piVar33,puVar37,0x1000);
        if (((*(ushort *)(piVar33 + 7) & 0x1000) != 0) &&
           (iVar27 = FUN_004b7490(piVar33), iVar27 != 0)) goto LAB_004b57a6;
        uVar39 = (uint)(int *)local_d0;
        local_d0 = CONCAT44(local_d0._4_4_,(int)(int *)local_d0 - 1);
        puVar29 = local_d4;
        piVar36 = local_dc;
        piVar10 = local_dc;
        uVar42 = local_d0;
        if (uVar39 == 0) break;
        piVar33 = piVar33 + 10;
        puVar37 = puVar37 + 5;
      }
      break;
    case 0xf:
      piVar36 = (int *)(local_e4 + *(int *)(local_e0 + 8 + uVar39 * 0x14) * 0x28);
      local_dc = piVar36;
      FUN_004b7c40(piVar36,(undefined8 *)(local_e4 + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x28),
                   0x1000);
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x10:
      local_d4 = (uint *)FUN_004aeea0((int *)local_d8,0);
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      if ((local_d4 == (uint *)0x0) &&
         (local_d4 = (uint *)FUN_004af050((int *)local_d8,1), uVar25 = local_e0, puVar29 = local_d4,
         piVar10 = local_dc, uVar42 = local_d0, local_d4 == (uint *)0x0)) {
        local_d8[0x14] = local_d8[0x14] + 2 | 1;
        uVar35 = local_e4 + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x28;
        local_d8[5] = uVar35;
        iVar30 = 0;
        local_d0 = (ulonglong)uVar35;
        if (0 < *(int *)(local_e0 + 8 + uVar39 * 0x14)) goto LAB_004afa70;
        goto LAB_004b55f4;
      }
      break;
    case 0x11:
      iVar27 = *(int *)(local_e0 + 4 + uVar39 * 0x14);
      if (iVar27 != 0) {
        FUN_004b7860((int *)(local_e4 + iVar27 * 0x28),0,0);
        puVar29 = local_d4;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      break;
    case 0x12:
      cVar11 = *(char *)(local_e0 + 3 + uVar39 * 0x14);
      local_88 = (ulonglong)CONCAT14(cVar11,local_d8[3]);
      local_dc = (int *)(local_e4 + *(int *)(local_e0 + 0xc + uVar39 * 0x14) * 0x28);
      uVar25 = local_e4 + *(int *)(local_e0 + 8 + uVar39 * 0x14) * 0x28;
      iVar27 = 0;
      local_d0 = (ulonglong)uVar25 << 0x20;
      uVar35 = local_d8[3];
      if (cVar11 != '\0') {
        while( true ) {
          *(uint *)(uVar35 + iVar27 * 4) = uVar25;
          if ((*(ushort *)(local_d0._4_4_ + 7) & 0x1000) != 0) {
            iVar27 = FUN_004b7490((int *)local_d0._4_4_);
            piVar18 = piVar33;
            if (iVar27 != 0) goto LAB_004b57a6;
          }
          FUN_004b7cb0((int)local_d0._4_4_);
          iVar27 = (int)(int *)local_d0 + 1;
          uVar25 = (int)local_d0._4_4_ + 0x28;
          local_d0 = CONCAT44(uVar25,iVar27);
          if (local_88._4_4_ <= iVar27) break;
          uVar35 = (uint)(uint *)local_88;
        }
      }
      piVar36 = local_dc;
      puVar24 = *(undefined4 **)(local_e0 + 0x10 + uVar39 * 0x14);
      if (*(char *)(local_e0 + 1 + uVar39 * 0x14) == -5) {
        puVar17 = puVar24;
        puVar24 = (undefined4 *)0x0;
      }
      else {
        puVar17 = (undefined4 *)*puVar24;
      }
      local_c8 = CONCAT44(puVar24,puVar17);
      local_a4._0_2_ = 1;
      local_c0 = CONCAT44(local_c0._4_4_,piVar33);
      local_a0 = 0;
      FUN_004b7500((int *)&local_c0,(undefined8 *)local_dc);
      local_a4 = (int *)(CONCAT22(local_a4._2_2_,(undefined2)local_a4) & 0xffffbe01 | 1);
      local_90 = local_90 & 0xffffffff00000000;
      if ((*(byte *)((int)(int *)local_c8 + 3) & 8) != 0) {
        local_94 = *(int **)((local_e0 - 4) + uVar39 * 0x14);
      }
      piVar33[8] = local_104;
      piVar33[9] = local_100;
      (**(code **)((int)(int *)local_c8 + 0xc))();
      local_104 = piVar33[8];
      local_100 = piVar33[9];
      if (local_c8._4_4_ != (int *)0x0) {
        FUN_004af2b0(local_c8._4_4_,*(uint *)(local_e0 + 4 + uVar39 * 0x14));
        *(int **)(local_e0 + 0x10 + uVar39 * 0x14) = local_c8._4_4_;
        *(undefined1 *)(local_e0 + 1 + uVar39 * 0x14) = 0xf9;
      }
      if ((char)piVar33[0xe] == '\0') {
        if ((uint *)local_90 != (uint *)0x0) {
          FUN_004ae680((int *)&local_c0,1);
          FUN_004a9a30((int *)(local_d8 + 0xd),(int)piVar33,&DAT_0056de50);
          local_d4 = (uint *)local_90;
        }
        FUN_004aec30((int *)&local_c0,local_f0 & 0xff);
        FUN_004b7500(piVar36,&local_c0);
        bVar14 = FUN_004b7d90(piVar36);
        iVar27 = CONCAT31(extraout_var_00,bVar14);
        piVar18 = piVar33;
        goto joined_r0x004b5145;
      }
      FUN_004b76e0((int *)&local_c0);
      piVar18 = piVar33;
      goto LAB_004b57a6;
    case 0x13:
      iVar27 = *(int *)(local_e0 + 4 + uVar39 * 0x14);
      piVar36 = (int *)(local_e4 + *(int *)(local_e0 + 8 + uVar39 * 0x14) * 0x28);
      local_dc = piVar36;
      if ((*(byte *)(local_e4 + 0x1c + iVar27 * 0x28) & 1) == 0) {
        uVar42 = FUN_004b65e0(local_e4 + iVar27 * 0x28);
        if (uVar42 == 0) {
          FUN_004b7860(piVar36,1,0);
          puVar29 = local_d4;
          piVar36 = local_dc;
          piVar10 = local_dc;
          uVar42 = local_d0;
        }
        else {
          FUN_004b7860(piVar36,0,0);
          puVar29 = local_d4;
          piVar36 = local_dc;
          piVar10 = local_dc;
          uVar42 = local_d0;
        }
      }
      else {
        FUN_004b78c0((int)piVar36);
        puVar29 = local_d4;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      break;
    case 0x14:
      iVar27 = local_e4 + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x28;
      FUN_004b7410(iVar27);
      uVar25 = *(uint *)(local_e0 + 8 + uVar39 * 0x14);
      puVar29 = (uint *)(iVar27 + 0x10);
      uVar39 = *puVar29;
      *puVar29 = *puVar29 + uVar25;
      *(int *)(iVar27 + 0x14) =
           *(int *)(iVar27 + 0x14) + ((int)uVar25 >> 0x1f) + (uint)CARRY4(uVar39,uVar25);
      puVar29 = local_d4;
      piVar36 = local_dc;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x15:
      iVar27 = local_e4 + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x28;
      FUN_0046dfa0(iVar27);
      if ((*(byte *)(iVar27 + 0x1c) & 8) != 0) {
        FUN_004b6650(iVar27);
      }
      piVar36 = local_dc;
      if ((*(ushort *)(iVar27 + 0x1c) & 4) == 0) {
        iVar27 = *(int *)(local_e0 + 8 + uVar39 * 0x14);
        if (iVar27 == 0) {
          local_d4 = (uint *)0x14;
          goto LAB_004b572c;
        }
        goto LAB_004b0d04;
      }
      *(ushort *)(iVar27 + 0x1c) = *(ushort *)(iVar27 + 0x1c) & 0xbe04 | 4;
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x16:
      iVar27 = *(int *)(local_e0 + 4 + uVar39 * 0x14);
      if ((*(byte *)(local_e4 + 0x1c + iVar27 * 0x28) & 4) != 0) {
        FUN_004b7670(local_e4 + iVar27 * 0x28);
        puVar29 = local_d4;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      break;
    case 0x17:
      local_10c = *(int *)(local_e0 + 0x10 + uVar39 * 0x14);
      break;
    case 0x18:
      if ((*(byte *)(local_e0 + 3 + uVar39 * 0x14) & 1) == 0) {
        local_10c = 0;
      }
      uVar25 = *(uint *)(local_e0 + 0xc + uVar39 * 0x14);
      uVar35 = *(uint *)(local_e0 + 0x10 + uVar39 * 0x14);
      local_c0 = CONCAT44(uVar28,uVar35);
      uVar28 = *(undefined4 *)(local_e0 + 4 + uVar39 * 0x14);
      iVar27 = *(int *)(local_e0 + 8 + uVar39 * 0x14);
      iVar16 = 0;
      local_f8 = (double)CONCAT44(uVar28,(undefined4)local_f8);
      local_c8 = CONCAT44(iVar27,uVar28);
      local_d0 = (ulonglong)uVar25;
      if (0 < (int)uVar25) {
        while( true ) {
          iVar26 = iVar16;
          if (local_10c != 0) {
            iVar26 = *(int *)(local_10c + iVar16 * 4);
          }
          local_c0 = CONCAT44(iVar26,(int *)local_c0);
          iVar4 = *(int *)(uVar35 + 0xc + iVar16 * 4);
          local_b8 = (double)(ulonglong)
                             CONCAT14(*(undefined1 *)(*(int *)(uVar35 + 8) + iVar16),iVar4);
          local_110 = FUN_004a0720((undefined8 *)(local_e4 + ((int)local_f8._4_4_ + iVar26) * 0x28),
                                   (undefined8 *)(local_e4 + (iVar26 + iVar27) * 0x28),iVar4);
          if (local_110 != 0) break;
          iVar16 = (int)local_d0._4_4_ + 1;
          local_d0 = CONCAT44(iVar16,(int *)local_d0);
          if ((int)(int *)local_d0 <= iVar16) goto LAB_004b0a43;
          local_f8 = (double)CONCAT44((int *)local_c8,(undefined4)local_f8);
          uVar35 = (uint)(int *)local_c0;
          iVar27 = (int)local_c8._4_4_;
        }
        if (local_b8._4_4_ != (byte *)0x0) {
          local_110 = -local_110;
        }
      }
LAB_004b0a43:
      local_10c = 0;
      puVar29 = local_d4;
      piVar18 = local_e8;
      piVar36 = local_dc;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x19:
      if ((int)local_110 < 0) {
        iVar27 = *(int *)(local_e0 + 4 + uVar39 * 0x14);
      }
      else {
        if (local_110 == 0) goto LAB_004b0d00;
        iVar27 = *(int *)(local_e0 + 0xc + uVar39 * 0x14);
      }
      goto LAB_004b0d04;
    case 0x1a:
      iVar27 = *(int *)(local_e0 + 4 + uVar39 * 0x14);
      if (*(char *)(local_d8[0x2e] + iVar27) != '\0') goto LAB_004b0d00;
      *(undefined1 *)(local_d8[0x2e] + iVar27) = 1;
      break;
    case 0x1b:
    case 0x1c:
      iVar27 = *(int *)(local_e0 + 4 + uVar39 * 0x14);
      if ((*(byte *)(local_e4 + 0x1c + iVar27 * 0x28) & 1) == 0) {
        fVar40 = FUN_004b8350(local_e4 + iVar27 * 0x28);
        local_f8 = (double)fVar40;
        uVar25 = (uint)(local_f8 != 0.0);
        local_d0 = CONCAT44(local_d0._4_4_,uVar25);
        if (*(char *)(local_e0 + uVar39 * 0x14) == '\x1c') {
          uVar25 = (uint)(uVar25 == 0);
          goto LAB_004b0cca;
        }
      }
      else {
        uVar25 = *(uint *)(local_e0 + 0xc + uVar39 * 0x14);
LAB_004b0cca:
        local_d0 = CONCAT44(local_d0._4_4_,uVar25);
      }
joined_r0x004b4649:
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      if (uVar25 != 0) goto LAB_004b0d00;
      break;
    case 0x1d:
      iVar27 = *(int *)(local_e0 + 4 + uVar39 * 0x14);
      iVar16 = *(int *)(local_e0 + 8 + uVar39 * 0x14);
      local_c0 = CONCAT44(iVar16,iVar27);
      local_90 = 0;
      local_88 = 0;
      local_80 = 0;
      local_78 = (undefined1  [8])0x0;
      local_70 = 0;
      local_94 = (int *)(local_e4 + *(int *)(local_e0 + 0xc + uVar39 * 0x14) * 0x28);
      piVar36 = *(int **)(local_d8[0x10] + iVar27 * 4);
      local_b8 = (double)ZEXT48(piVar36);
      local_b0 = (double)CONCAT44(local_b0._4_4_,*piVar36);
      if (*piVar36 == 0) {
        if (piVar36[4] < 1) {
LAB_004b0dd6:
          local_d0 = local_d0 & 0xffffffff00000000;
LAB_004b0de0:
          *(ushort *)(local_94 + 7) = *(ushort *)(local_94 + 7) & 0xbe01 | 1;
          puVar29 = local_d4;
          piVar18 = local_e8;
          piVar36 = local_dc;
          piVar10 = local_dc;
          uVar42 = local_d0;
        }
        else {
          local_4c = local_e4 + piVar36[4] * 0x28;
          if (*(char *)((int)piVar36 + 0x22) == '\0') {
            local_d0 = CONCAT44(local_d0._4_4_,*(undefined4 *)(local_4c + 0x18));
            local_b8 = (double)CONCAT44(*(undefined4 *)(local_4c + 4),piVar36);
            if ((*(byte *)(local_e0 + 3 + uVar39 * 0x14) & 0x20) == 0) {
              uVar25 = local_d8[0x14];
            }
            else {
              uVar25 = 0;
            }
            piVar36[0x14] = uVar25;
LAB_004b0f05:
            uVar25 = (uint)(int *)local_d0;
LAB_004b0f0b:
            iVar27 = (int)(uint *)local_b8;
            goto LAB_004b0f11;
          }
          FUN_004b7c40(local_94,(undefined8 *)(local_4c + iVar16 * 0x28),0x1000);
          puVar29 = local_d4;
          piVar18 = local_e8;
          piVar36 = local_dc;
          piVar10 = local_dc;
          uVar42 = local_d0;
          if (((*(ushort *)(local_94 + 7) & 0x1000) != 0) &&
             (iVar27 = FUN_004b7490(local_94), puVar29 = local_d4, piVar18 = local_e8,
             piVar36 = local_dc, piVar10 = local_dc, uVar42 = local_d0, iVar27 != 0))
          goto LAB_004b57a6;
        }
      }
      else {
        local_d4 = (uint *)FUN_004af1b0(piVar36);
        piVar18 = local_e8;
        if (local_d4 != (uint *)0x0) goto LAB_004b572c;
        if (*(char *)((int)(uint *)local_b8 + 0x1c) != '\0') goto LAB_004b0dd6;
        if (*(uint *)((int)(uint *)local_b8 + 0x50) != puVar34[0x14]) {
          if (*(char *)((int)(uint *)local_b8 + 0x1f) == '\0') {
            FUN_0048f8d0((int)(int *)local_b0,(undefined4 *)&local_d0);
            goto LAB_004b0f05;
          }
          FUN_004906b0((int)(int *)local_b0,(undefined4 *)&local_c8);
          local_d0 = CONCAT44(local_d0._4_4_,(int *)local_c8);
          uVar25 = (uint)(int *)local_c8;
          goto LAB_004b0f0b;
        }
        uVar25 = *(uint *)((int)(uint *)local_b8 + 0x54);
        local_d0 = CONCAT44(local_d0._4_4_,uVar25);
        local_b8 = (double)CONCAT44(*(undefined4 *)((int)(uint *)local_b8 + 0x60),(uint *)local_b8);
        iVar27 = (int)(uint *)local_b8;
LAB_004b0f11:
        piVar18 = local_e8;
        if (uVar25 == 0) goto LAB_004b0de0;
        if ((uint)local_e8[0x14] < uVar25) goto LAB_004b5780;
        local_a4 = *(int **)(iVar27 + 0x14);
        iVar16 = *(int *)(iVar27 + 0x58);
        local_b0 = (double)CONCAT44(iVar16,(int *)local_b0);
        if (*(uint *)(iVar27 + 0x50) == local_d8[0x14]) {
          local_a8 = *(uint *)(iVar27 + 0x5c);
LAB_004b11c6:
          piVar18 = local_e8;
          if (*(int *)(local_a8 + (int)local_c0._4_4_ * 4) == 0) {
            if (*(char *)(local_e0 + 1 + uVar39 * 0x14) == -8) {
              FUN_004b7c40(local_94,*(undefined8 **)(local_e0 + 0x10 + uVar39 * 0x14),0x800);
            }
            else {
              *(ushort *)(local_94 + 7) = *(ushort *)(local_94 + 7) & 0xbe01 | 1;
            }
          }
          else {
            if (local_b8._4_4_ == (byte *)0x0) {
              local_50 = *(uint *)(iVar16 + (int)local_c0._4_4_ * 4);
              bVar12 = *(byte *)(local_e0 + 3 + uVar39 * 0x14);
              if (((bVar12 & 0xc0) == 0) ||
                 (((local_50 < 0xc || ((local_50 & 1) != 0)) && (-1 < (char)bVar12)))) {
                uVar39 = FUN_004b8bf0(local_50);
                local_a0 = CONCAT44(local_a0._4_4_,uVar39);
                FUN_004b7500((int *)&local_90,(undefined8 *)local_94);
                local_d4 = (uint *)FUN_004b70b0((int *)local_b0,
                                                *(uint *)(local_a8 + (int)local_c0._4_4_ * 4),
                                                (size_t)(int *)local_a0,
                                                (uint)*(byte *)((int)(uint *)local_b8 + 0x1f),
                                                (int *)&local_90);
                puVar29 = local_d4;
                piVar36 = local_dc;
                piVar10 = local_dc;
                uVar42 = local_d0;
                if (local_d4 != (uint *)0x0) break;
                pbVar21 = local_90._4_4_;
                local_98 = local_90._4_4_;
                uVar39 = local_50;
              }
              else {
                local_98 = (byte *)(-(uint)(local_50 < 0xc) & (uint)&local_c8);
                pbVar21 = local_98;
                uVar39 = local_50;
              }
            }
            else {
              if ((*(ushort *)(local_94 + 7) & 0x2460) != 0) {
                FUN_004b7720(local_94);
                iVar16 = local_b0._4_4_;
              }
              pbVar21 = (byte *)(*(int *)(local_a8 + (int)local_c0._4_4_ * 4) + (int)local_b8._4_4_)
              ;
              uVar39 = *(uint *)(iVar16 + (int)local_c0._4_4_ * 4);
            }
            FUN_004b87d0((char *)pbVar21,uVar39,(int)local_94);
            *(char *)((int)local_94 + 0x1f) = (char)local_f0;
          }
          if (local_70._4_4_ != 0) {
            *(ushort *)(local_94 + 7) = *(ushort *)(local_94 + 7) & 0xe7ff;
            *(ushort *)(local_94 + 7) = *(ushort *)(local_94 + 7) | 0x200;
            local_94[1] = (int)local_90._4_4_;
            local_94[9] = local_70._4_4_;
          }
          local_d4 = (uint *)FUN_004b7490(local_94);
          puVar29 = local_d4;
          piVar36 = local_dc;
          piVar10 = local_dc;
          uVar42 = local_d0;
        }
        else {
          local_a8 = iVar16 + (int)local_a4 * 4;
          local_54 = 0;
          *(uint *)(iVar27 + 0x5c) = local_a8;
          *(int **)((int)(uint *)local_b8 + 0x54) = (int *)local_d0;
          *(uint *)((int)(uint *)local_b8 + 0x50) = local_d8[0x14];
          if (local_b8._4_4_ == (byte *)0x0) {
            if (*(char *)((int)(uint *)local_b8 + 0x1f) == '\0') {
              local_98 = (byte *)FUN_0048f8b0((int)(int *)local_b0,&local_54);
            }
            else {
              local_98 = (byte *)FUN_00490640((int)(int *)local_b0,&local_54);
            }
            if (local_54 < (int *)local_d0) {
              *(undefined4 *)((int)(uint *)local_b8 + 0x60) = 0;
            }
            else {
              local_b8 = (double)CONCAT44(local_98,(uint *)local_b8);
              *(byte **)((int)(uint *)local_b8 + 0x60) = local_98;
            }
          }
          else {
            local_98 = local_b8._4_4_;
          }
          if (*local_98 < 0x80) {
            local_60 = (uint)*local_98;
            local_58 = 1;
          }
          else {
            local_58 = FUN_0049d440(local_98,&local_60);
            local_58 = local_58 & 0xff;
          }
          if (local_60 < 0x18004) {
            sVar22 = (int)local_a4 * 5 + 3;
            if ((int)local_60 < (int)sVar22) {
              sVar22 = local_60;
            }
            local_a0 = CONCAT44(local_a0._4_4_,sVar22);
            if ((local_b8._4_4_ == (byte *)0x0) && ((int)local_54 < (int)sVar22)) {
              local_78._4_2_ = 0;
              local_90 = local_90 & 0xffffffff00000000;
              local_d4 = (uint *)FUN_004b70b0((int *)local_b0,0,sVar22,
                                              (uint)*(byte *)((int)(uint *)local_b8 + 0x1f),
                                              (int *)&local_90);
              puVar29 = local_d4;
              piVar18 = local_e8;
              piVar36 = local_dc;
              piVar10 = local_dc;
              uVar42 = local_d0;
              if (local_d4 != (uint *)0x0) break;
              local_98 = local_90._4_4_;
              sVar22 = (size_t)(int *)local_a0;
            }
            local_64 = local_98 + sVar22;
            local_68 = local_98 + local_58;
            iVar27 = 0;
            local_a0 = local_a0 & 0xffffffff;
            if (0 < (int)local_a4) {
              do {
                if (local_68 < local_64) {
                  *(uint *)(local_a8 + iVar27 * 4) = local_60;
                  if (*local_68 < 0x80) {
                    local_50 = (uint)*local_68;
                    local_68 = local_68 + 1;
                  }
                  else {
                    uVar25 = FUN_0049d440(local_68,&local_50);
                    local_68 = local_68 + (uVar25 & 0xff);
                  }
                  *(uint *)(local_b0._4_4_ + local_a0._4_4_ * 4) = local_50;
                  local_5c = FUN_004b8bf0(local_50);
                  local_60 = local_60 + local_5c;
                  if (local_60 < local_5c) {
                    local_68 = local_64 + 1;
                    break;
                  }
                }
                else {
                  *(undefined4 *)(local_a8 + iVar27 * 4) = 0;
                }
                iVar27 = local_a0._4_4_ + 1;
                local_a0 = CONCAT44(iVar27,(int *)local_a0);
              } while (iVar27 < (int)local_a4);
            }
            FUN_004b76e0((int *)&local_90);
            local_78._4_2_ = 1;
            if (((local_68 <= local_64) && (local_60 <= (int *)local_d0)) &&
               ((local_68 != local_64 || ((int *)local_60 == (int *)local_d0)))) {
              iVar16 = local_b0._4_4_;
              goto LAB_004b11c6;
            }
            local_d4 = (uint *)FUN_00493af0();
            puVar29 = local_d4;
            piVar18 = local_e8;
            piVar36 = local_dc;
            piVar10 = local_dc;
            uVar42 = local_d0;
          }
          else {
            local_d4 = (uint *)FUN_00493af0();
            puVar29 = local_d4;
            piVar36 = local_dc;
            piVar10 = local_dc;
            uVar42 = local_d0;
          }
        }
      }
      break;
    case 0x1e:
      pcVar23 = *(char **)(local_e0 + 0x10 + uVar39 * 0x14);
      piVar36 = (int *)(local_e4 + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x28);
      cVar11 = *pcVar23;
      uVar28 = CONCAT31(local_d0._5_3_,cVar11);
      local_d0._0_4_ = (int *)pcVar23;
      while (cVar11 != '\0') {
        local_d0 = CONCAT44(uVar28,(char *)((int)(int *)local_d0 + 1));
        if ((*(ushort *)(piVar36 + 7) & 0x4000) != 0) {
          FUN_004b6fa0(piVar36);
        }
        FUN_004ae250(piVar36,(char)(local_d0 >> 0x20),(byte)local_f0);
        cVar11 = *(char *)(int *)local_d0;
        piVar36 = piVar36 + 10;
        uVar28 = CONCAT31(local_d0._5_3_,cVar11);
        piVar18 = local_e8;
      }
      local_d0 = CONCAT44(uVar28,(char *)((int)(int *)local_d0 + 1));
      puVar29 = local_d4;
      piVar36 = local_dc;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x1f:
      local_c0._0_4_ = (int *)0x0;
      uVar25 = 0;
      local_b0 = (double)((ulonglong)local_b0._4_4_ << 0x20);
      local_c8 = 0;
      local_98 = *(byte **)(local_e0 + 0x10 + uVar39 * 0x14);
      local_f8 = (double)CONCAT44(local_98,(undefined4)local_f8);
      piVar36 = (int *)(local_e4 + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x28);
      iVar27 = *(int *)(local_e0 + 8 + uVar39 * 0x14);
      local_94 = (int *)(uint)*(byte *)((int)local_d8 + 0x5d);
      local_a0 = CONCAT44(iVar27,piVar36 + iVar27 * 10 + -10);
      local_dc = (int *)(local_e4 + *(int *)(local_e0 + 0xc + uVar39 * 0x14) * 0x28);
      local_d0 = CONCAT44(piVar36,(int *)local_d0);
      local_a4 = piVar36;
      local_c0._4_4_ = (undefined4 *)uVar28;
      if (piVar36 <= piVar36 + iVar27 * 10 + -10) {
        uVar25 = 0;
        do {
          if (local_f8._4_4_ != (byte *)0x0) {
            FUN_004ae250(piVar36,*(char *)(((int)piVar36 - (int)local_a4) / 0x28 +
                                          (int)local_f8._4_4_),(byte)local_f0);
            local_f8 = (double)CONCAT44(local_98,(undefined4)local_f8);
            uVar25 = (uint)(int *)local_b0;
            piVar36 = (int *)local_d0._4_4_;
          }
          if (((*(ushort *)(piVar36 + 7) & 0x4000) != 0) && (0 < piVar36[6])) {
            FUN_004b6fa0(piVar36);
            local_f8 = (double)CONCAT44(local_98,(undefined4)local_f8);
            uVar25 = (uint)(int *)local_b0;
            piVar36 = (int *)local_d0._4_4_;
          }
          local_a8 = FUN_004b8ae0((int)piVar36,(int)local_94);
          uVar39 = FUN_004b8bf0(local_a8);
          local_c8 = CONCAT44((int)local_c8._4_4_ + ((int)uVar39 >> 0x1f) +
                              (uint)CARRY4((uint)(int *)local_c8,uVar39),
                              (int)(int *)local_c8 + uVar39);
          local_90 = CONCAT44(uVar39,(uint *)local_90);
          iVar27 = FUN_004ae730(extraout_ECX,0);
          local_c0._0_4_ = (int *)((int)(int *)local_c0 + iVar27);
          if ((*(ushort *)(piVar36 + 7) & 0x4000) == 0) {
            if (uVar39 != 0) {
              uVar25 = 0;
            }
          }
          else {
            uVar25 = uVar25 + piVar36[4];
          }
          piVar36 = piVar36 + 10;
          local_b0 = (double)CONCAT44(local_b0._4_4_,uVar25);
          local_d0 = CONCAT44(piVar36,(int *)local_d0);
        } while (piVar36 <= (int *)local_a0);
      }
      iVar27 = FUN_004ae730((uint)(int *)local_c0,(int)(int *)local_c0 >> 0x1f);
      uVar39 = (int)(int *)local_c0 + iVar27;
      local_b0 = (double)CONCAT44(iVar27,(int *)local_b0);
      local_c0 = CONCAT44(local_c0._4_4_,uVar39);
      iVar16 = FUN_004ae730(uVar39,(int)uVar39 >> 0x1f);
      piVar36 = local_dc;
      if (iVar27 < iVar16) {
        uVar39 = uVar39 + 1;
        local_c0 = CONCAT44(local_c0._4_4_,uVar39);
      }
      uVar35 = (uVar39 - uVar25) + (int)(int *)local_c8;
      iVar16 = ((((int)uVar39 >> 0x1f) - ((int)uVar25 >> 0x1f)) - (uint)(uVar39 < uVar25)) +
               (int)local_c8._4_4_ + (uint)CARRY4(uVar39 - uVar25,(uint)(int *)local_c8);
      local_b8 = (double)CONCAT44(iVar16,uVar35);
      iVar27 = local_e8[0x14] >> 0x1f;
      piVar18 = local_e8;
      if ((iVar27 < iVar16) || ((iVar27 <= iVar16 && ((uint)local_e8[0x14] < uVar35))))
      goto LAB_004b5780;
      iVar27 = FUN_004b7260(local_dc,uVar35,0);
      piVar18 = local_e8;
      if (iVar27 != 0) goto LAB_004b57a6;
      pbVar21 = (byte *)piVar36[1];
      local_d0 = CONCAT44(local_d0._4_4_,pbVar21);
      if ((int *)local_c0 < 0x80) {
        *pbVar21 = (byte)local_c0;
        uVar39 = 1;
      }
      else {
        uVar39 = FUN_004a60c0(pbVar21,(uint)(int *)local_c0);
      }
      uVar25 = uVar39 & 0xff;
      local_90 = CONCAT44(local_90._4_4_,uVar39) & 0xffffffff000000ff;
      local_d0 = CONCAT44(local_a4,(int *)local_d0);
      piVar18 = local_a4;
      if (local_a4 <= (int *)local_a0) {
        do {
          local_a8 = FUN_004b8ae0((int)piVar18,(int)local_94);
          if (local_a8 < 0x80) {
            *(char *)(uVar25 + (int)(int *)local_d0) = (char)local_a8;
            uVar39 = 1;
          }
          else {
            uVar39 = FUN_004a60c0((byte *)((int)(int *)local_d0 + uVar25),local_a8);
          }
          uVar25 = (int)(uint *)local_90 + (uVar39 & 0xff);
          piVar18 = (int *)((int)local_d0._4_4_ + 0x28);
          local_90 = CONCAT44(local_90._4_4_,uVar25);
          local_d0 = CONCAT44(piVar18,(int *)local_d0);
        } while (piVar18 <= (int *)local_a0);
      }
      local_d0 = CONCAT44(local_a4,(int *)local_d0);
      piVar18 = local_a4;
      if (local_a4 <= (int *)local_a0) {
        do {
          uVar25 = FUN_004b8a30((void *)((int)(int *)local_d0 + uVar25),
                                (int)(uint *)local_b8 - uVar25,(int)piVar18,(int)local_94);
          uVar25 = (int)(uint *)local_90 + uVar25;
          piVar18 = (int *)((int)local_d0._4_4_ + 0x28);
          local_90 = CONCAT44(local_90._4_4_,uVar25);
          local_d0 = CONCAT44(piVar18,(int *)local_d0);
        } while (piVar18 <= (int *)local_a0);
      }
      piVar36[6] = (int)(uint *)local_b8;
      *(undefined2 *)(piVar36 + 7) = 0x410;
      piVar36[8] = 0;
      if ((int *)local_b0 != (int *)0x0) {
        piVar36[4] = (int)(int *)local_b0;
        *(undefined2 *)(piVar36 + 7) = 0x4410;
      }
      *(undefined1 *)((int)piVar36 + 0x1f) = 1;
      puVar29 = local_d4;
      piVar18 = local_e8;
      piVar36 = local_dc;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x20:
      piVar33 = (int *)**(undefined4 **)
                         (local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4);
      local_c8 = CONCAT44(uVar8,piVar33);
      if (piVar33 == (int *)0x0) {
        local_d0 = 0;
        piVar36[4] = 0;
        piVar36[5] = 0;
        uVar42 = local_d0;
      }
      else {
        local_d4 = (uint *)FUN_0048f530(piVar33,(uint *)&local_d0);
        piVar36[4] = (int)(int *)local_d0;
        piVar36[5] = (int)local_d0._4_4_;
        puVar29 = local_d4;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      break;
    case 0x21:
      uVar25 = *(uint *)(local_e0 + 4 + uVar39 * 0x14);
      pbVar21 = *(byte **)(local_e0 + 0x10 + uVar39 * 0x14);
      local_f8 = (double)CONCAT44(pbVar21,(undefined4)local_f8);
      local_d0 = CONCAT44(pbVar21,uVar25);
      if (uVar25 == 0) {
        if (local_e8[0x22] < 1) {
          uVar39 = FUN_004aa9b0((char *)pbVar21);
          local_c8 = CONCAT44(local_c8._4_4_,uVar39);
          local_d4 = (uint *)FUN_004b9ef0((int)piVar33,0,piVar33[0x79] + piVar33[0x78]);
          piVar18 = piVar33;
          if (local_d4 != (uint *)0x0) goto LAB_004b572c;
          piVar19 = FUN_00494b90((int)piVar33,(int)(int *)local_c8 + 0x19);
          local_c8 = CONCAT44(piVar19,(int *)local_c8);
          puVar29 = local_d4;
          piVar10 = local_dc;
          uVar42 = local_d0;
          if (piVar19 != (int *)0x0) {
            *piVar19 = (int)(piVar19 + 6);
            memcpy((void *)*piVar19,local_d0._4_4_,(int)(int *)local_c8 + 1);
            if (*(char *)((int)piVar33 + 0x36) == '\0') {
              piVar33[0x78] = piVar33[0x78] + 1;
            }
            else {
              *(undefined1 *)((int)piVar33 + 0x36) = 0;
              *(undefined1 *)((int)piVar33 + 0x3d) = 1;
            }
            *(int *)((int)local_c8._4_4_ + 0x10) = piVar33[0x76];
            piVar33[0x76] = (int)local_c8._4_4_;
            *(int *)((int)local_c8._4_4_ + 8) = piVar33[0x7a];
            *(int *)((int)local_c8._4_4_ + 0xc) = piVar33[0x7b];
            puVar29 = local_d4;
            piVar10 = local_dc;
            uVar42 = local_d0;
          }
        }
        else {
          pcVar23 = "cannot open savepoint - SQL statements in progress";
          piVar18 = local_e8;
LAB_004b188b:
          FUN_004a9a30((int *)(local_d8 + 0xd),(int)piVar18,(byte *)pcVar23);
          local_d4 = (uint *)0x5;
          puVar29 = (uint *)0x5;
          piVar10 = local_dc;
          uVar42 = local_d0;
        }
      }
      else {
        iVar27 = 0;
        local_b8 = (double)((ulonglong)uVar9 << 0x20);
        puVar24 = (undefined4 *)local_e8[0x76];
        local_c0 = CONCAT44(uVar28,puVar24);
        if (puVar24 != (undefined4 *)0x0) {
LAB_004b1996:
          iVar16 = FUN_004bcc60((byte *)*puVar24,pbVar21);
          puVar29 = local_d8;
          piVar18 = local_e8;
          if (iVar16 != 0) goto code_r0x004b19a5;
          if ((0 < local_e8[0x22]) && (uVar25 == 1)) {
            FUN_004a9a30((int *)(local_d8 + 0xd),(int)local_e8,
                         (byte *)"cannot release savepoint - SQL statements in progress");
            local_d4 = (uint *)0x5;
            puVar29 = (uint *)0x5;
            piVar36 = local_dc;
            piVar10 = local_dc;
            uVar42 = local_d0;
            break;
          }
          if ((puVar24[4] == 0) && (*(char *)((int)local_e8 + 0x3d) != '\0')) {
            local_f8 = (double)CONCAT44(1,(undefined4)local_f8);
            if (uVar25 == 1) {
              iVar27 = FUN_004aeea0((int *)local_d8,1);
              piVar18 = local_e8;
              if (iVar27 != 0) goto LAB_004b5847;
              *(undefined1 *)((int)local_e8 + 0x36) = 1;
              iVar27 = FUN_004b60e0((int *)puVar29);
              if (iVar27 == 5) {
                puVar29[0x15] = local_ec;
                *(undefined1 *)((int)piVar18 + 0x36) = 0;
                goto LAB_004b564b;
              }
              *(undefined1 *)((int)piVar18 + 0x3d) = 0;
              local_d4 = (uint *)puVar29[0x16];
              goto LAB_004b1b7c;
            }
          }
          else {
            local_f8 = (double)((ulonglong)local_f8 & 0xffffffff);
          }
          local_b8._0_4_ = (uint *)((local_e8[0x78] - iVar27) - 1);
          if ((uVar25 == 2) && (local_b8._4_4_ = (byte *)0x0, 0 < local_e8[5])) {
            do {
              FUN_00491f60(*(undefined4 **)(piVar18[4] + 4 + (int)local_b8._4_4_ * 0x10),4);
              local_b8._4_4_ = (byte *)((int)local_b8._4_4_ + 1);
            } while ((int)local_b8._4_4_ < piVar18[5]);
            uVar25 = (uint)(int *)local_d0;
            puVar24 = (int *)local_c0;
          }
          iVar27 = 0;
          local_b8 = (double)ZEXT48((uint *)local_b8);
          puVar29 = local_d4;
          if (0 < piVar18[5]) {
            while (local_d4 = puVar29, piVar18 = local_e8,
                  local_d4 = (uint *)FUN_00491910(*(undefined4 **)(local_e8[4] + 4 + iVar27 * 0x10),
                                                  uVar25,SUB84(local_b8,0)), local_d4 == (uint *)0x0
                  ) {
              iVar27 = (int)local_b8._4_4_ + 1;
              local_b8 = (double)CONCAT44(iVar27,(uint *)local_b8);
              uVar25 = (uint)(int *)local_d0;
              puVar29 = (uint *)0x0;
              if (piVar18[5] <= iVar27) {
                puVar24 = (int *)local_c0;
                piVar18 = local_e8;
                goto LAB_004b1b60;
              }
            }
            goto LAB_004b572c;
          }
LAB_004b1b60:
          if ((uVar25 == 2) && ((*(byte *)(piVar18 + 6) & 2) != 0)) {
            FUN_00496370((int)piVar18);
            FUN_004a6940((int)piVar18);
            piVar18[6] = piVar18[6] | 2;
LAB_004b1b7c:
            uVar25 = (uint)(int *)local_d0;
            puVar24 = (int *)local_c0;
          }
          if ((undefined4 *)piVar18[0x76] != puVar24) {
            do {
              puVar24 = (undefined4 *)piVar18[0x76];
              local_c0 = CONCAT44(puVar24,(int *)local_c0);
              piVar18[0x76] = puVar24[4];
              FUN_00494b00((int)piVar18,puVar24);
              piVar18[0x78] = piVar18[0x78] + -1;
            } while ((undefined4 *)piVar18[0x76] != (int *)local_c0);
            uVar25 = (uint)(int *)local_d0;
            puVar24 = (int *)local_c0;
          }
          piVar18 = local_e8;
          if (uVar25 == 1) {
            local_e8[0x76] = puVar24[4];
            FUN_00494b00((int)local_e8,(undefined4 *)local_c0);
            puVar29 = local_d4;
            piVar36 = local_dc;
            piVar10 = local_dc;
            uVar42 = local_d0;
            if (local_f8._4_4_ == (byte *)0x0) {
              piVar18[0x78] = piVar18[0x78] + -1;
LAB_004b1c25:
              local_d4 = (uint *)FUN_004b9ef0((int)piVar18,(int)(int *)local_d0,SUB84(local_b8,0));
              puVar29 = local_d4;
              piVar36 = local_dc;
              piVar10 = local_dc;
              uVar42 = local_d0;
              if (local_d4 != (uint *)0x0) goto LAB_004b572c;
            }
          }
          else {
            local_e8[0x7a] = puVar24[2];
            local_e8[0x7b] = puVar24[3];
            puVar29 = local_d4;
            piVar36 = local_dc;
            piVar10 = local_dc;
            uVar42 = local_d0;
            if (local_f8._4_4_ == (byte *)0x0) goto LAB_004b1c25;
          }
          break;
        }
LAB_004b19bf:
        piVar18 = local_e8;
        FUN_004a9a30((int *)(local_d8 + 0xd),(int)local_e8,(byte *)"no such savepoint: %s");
        local_d4 = (uint *)0x1;
        puVar29 = (uint *)0x1;
        piVar36 = local_dc;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      break;
    case 0x22:
      uVar25 = *(uint *)(local_e0 + 4 + uVar39 * 0x14);
      iVar27 = *(int *)(local_e0 + 8 + uVar39 * 0x14);
      local_d0 = CONCAT44(iVar27,uVar25);
      if ((uVar25 == 0) || (*(char *)((int)piVar18 + 0x36) != '\0')) {
        local_c8 = (ulonglong)uVar8 << 0x20;
      }
      else {
        local_c8 = CONCAT44(uVar8,1);
        if ((iVar27 == 0) && (0 < piVar18[0x22])) {
          pcVar23 = "cannot commit transaction - SQL statements in progress";
          goto LAB_004b188b;
        }
      }
      if (uVar25 != *(byte *)((int)piVar18 + 0x36)) {
        if (iVar27 == 0) {
          iVar30 = FUN_004aeea0((int *)local_d8,1);
          puVar29 = local_d8;
          if (iVar30 != 0) goto LAB_004b5847;
          *(char *)((int)piVar18 + 0x36) = (char)local_d0;
          iVar30 = FUN_004b60e0((int *)local_d8);
          if (iVar30 == 5) {
            puVar29[0x15] = local_ec;
            *(char *)((int)piVar18 + 0x36) = '\x01' - (char)local_d0;
            local_d8[0x16] = 5;
            goto LAB_004b5847;
          }
        }
        else {
          FUN_004a6c80((int)piVar18,0x204);
          *(undefined1 *)((int)piVar18 + 0x36) = 1;
        }
        FUN_00492710((int)piVar18);
        goto LAB_004b5847;
      }
      if (uVar25 == 0) {
        pcVar23 = "cannot start a transaction within a transaction";
      }
      else {
        pcVar23 = "cannot rollback - no transaction is active";
        if (iVar27 == 0) {
          pcVar23 = "cannot commit - no transaction is active";
        }
      }
      FUN_004a9a30((int *)(local_d8 + 0xd),(int)piVar18,(byte *)pcVar23);
      local_d4 = (uint *)0x1;
      puVar29 = (uint *)0x1;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x23:
      piVar33 = *(int **)(piVar18[4] + 4 + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x10);
      local_d0 = CONCAT44(local_d0._4_4_,piVar33);
      uVar42 = local_d0;
      if (piVar33 != (int *)0x0) {
        local_d4 = (uint *)FUN_0048ed50(piVar33,*(int *)(local_e0 + 8 + uVar39 * 0x14));
        if (local_d4 == (uint *)0x5) {
          local_d8[0x15] = local_ec;
          local_d8[0x16] = 5;
          goto LAB_004b5847;
        }
        if (local_d4 != (uint *)0x0) goto LAB_004b572c;
        puVar29 = local_d4;
        piVar10 = local_dc;
        uVar42 = local_d0;
        if (((*(int *)(local_e0 + 8 + uVar39 * 0x14) != 0) && ((local_d8[0x18] & 0x80) != 0)) &&
           ((*(char *)((int)piVar18 + 0x36) == '\0' || (1 < piVar18[0x21])))) {
          if (local_d8[0x1c] == 0) {
            piVar18[0x79] = piVar18[0x79] + 1;
            local_d8[0x1c] = piVar18[0x78] + piVar18[0x79];
          }
          local_d4 = (uint *)FUN_004b9ef0((int)piVar18,0,local_d8[0x1c] - 1);
          if (local_d4 == (uint *)0x0) {
            local_d4 = (uint *)FUN_0048ed00((int *)local_d0,local_d8[0x1c]);
          }
          local_d8[0x24] = piVar18[0x7a];
          local_d8[0x25] = piVar18[0x7b];
          puVar29 = local_d4;
          piVar10 = local_dc;
          uVar42 = local_d0;
        }
      }
      break;
    case 0x24:
      iVar27 = *(int *)(local_e0 + 4 + uVar39 * 0x14);
      local_d0 = CONCAT44(iVar27,(int *)local_d0);
      iVar16 = *(int *)(local_e0 + 0xc + uVar39 * 0x14);
      local_c8 = CONCAT44(uVar8,iVar16);
      FUN_0048fe70(*(undefined4 **)(piVar18[4] + 4 + iVar27 * 0x10),iVar16,(undefined4 *)&local_d0);
      piVar36[4] = (int)(int *)local_d0;
      piVar36[5] = (int)(int *)local_d0 >> 0x1f;
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x25:
      local_d0 = CONCAT44(local_d0._4_4_,*(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x10 + piVar18[4])
      ;
      iVar27 = local_e4 + *(int *)(local_e0 + 0xc + uVar39 * 0x14) * 0x28;
      FUN_004b7410(iVar27);
      local_d4 = (uint *)FUN_00492040(*(undefined4 **)((int)(int *)local_d0 + 4),
                                      *(int *)(local_e0 + 8 + uVar39 * 0x14),
                                      *(undefined4 *)(iVar27 + 0x10));
      iVar16 = *(int *)(local_e0 + 8 + uVar39 * 0x14);
      if (iVar16 == 1) {
        **(undefined4 **)((int)(int *)local_d0 + 0xc) = *(undefined4 *)(iVar27 + 0x10);
        piVar18[6] = piVar18[6] | 2;
      }
      else if (iVar16 == 2) {
        *(undefined1 *)(*(int *)((int)(int *)local_d0 + 0xc) + 0x4c) =
             *(undefined1 *)(iVar27 + 0x10);
      }
      puVar29 = local_d4;
      piVar36 = local_dc;
      piVar10 = local_dc;
      uVar42 = local_d0;
      if (*(int *)(local_e0 + 4 + uVar39 * 0x14) == 1) {
        FUN_00496370((int)piVar18);
        local_d8[0x18] = local_d8[0x18] & 0xffffffdf;
        puVar29 = local_d4;
        piVar36 = local_dc;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      break;
    case 0x26:
      puVar24 = *(undefined4 **)(piVar18[4] + 4 + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x10);
      local_c8 = CONCAT44(uVar8,puVar24);
      if (puVar24 == (undefined4 *)0x0) {
        uVar25 = 0;
        local_d0 = 0;
        iVar27 = 0;
      }
      else {
        FUN_0048fe70(puVar24,1,(undefined4 *)&local_d0);
        iVar27 = *(int *)(*(int *)(piVar18[4] + 0xc + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x10)
                         + 4);
        uVar25 = (uint)(int *)local_d0;
      }
      local_d0 = CONCAT44(iVar27,(int *)local_d0);
      if ((uVar25 != *(uint *)(local_e0 + 8 + uVar39 * 0x14)) ||
         (puVar29 = local_d4, piVar10 = local_dc, uVar42 = local_d0,
         iVar27 != *(int *)(local_e0 + 0xc + uVar39 * 0x14))) {
        FUN_00494b00((int)piVar18,(undefined4 *)local_d8[0xd]);
        puVar24 = FUN_00494db0((int)piVar18,"database schema has changed");
        local_d8[0xd] = (uint)puVar24;
        iVar27 = *(int *)(local_e0 + 4 + uVar39 * 0x14);
        if ((int *)**(uint **)(piVar18[4] + 0xc + iVar27 * 0x10) != (int *)local_d0) {
          FUN_004a69a0((int)piVar18,iVar27);
        }
        local_d8[0x18] = local_d8[0x18] | 0x20;
        local_d4 = (uint *)0x11;
        puVar29 = (uint *)0x11;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      break;
    case 0x27:
    case 0x28:
      if ((local_d8[0x18] & 0x20) == 0) {
        local_d0 = 0;
        iVar27 = *(int *)(local_e0 + 8 + uVar39 * 0x14);
        iVar16 = *(int *)(local_e0 + 0xc + uVar39 * 0x14);
        local_c8 = CONCAT44(iVar16,iVar27);
        iVar26 = iVar16 * 0x10 + local_e8[4];
        local_b8 = (double)CONCAT44(iVar26,(uint *)local_b8);
        if (*(char *)(local_e0 + uVar39 * 0x14) == '(') {
          local_c0 = CONCAT44(*(uint *)(iVar26 + 4),1);
          bVar12 = *(byte *)(*(int *)(iVar26 + 0xc) + 0x4c);
          if (bVar12 < *(byte *)((int)local_d8 + 0x5d)) {
            *(byte *)((int)local_d8 + 0x5d) = bVar12;
          }
        }
        else {
          local_c0 = (ulonglong)*(uint *)(iVar26 + 4) << 0x20;
        }
        uVar25 = 0;
        if ((*(byte *)(local_e0 + 3 + uVar39 * 0x14) & 2) != 0) {
          iVar27 = local_e4 + iVar27 * 0x28;
          FUN_004b7410(iVar27);
          iVar27 = *(int *)(iVar27 + 0x10);
          local_c8 = CONCAT44(local_c8._4_4_,iVar27);
          if (iVar27 < 2) {
            local_d4 = (uint *)FUN_00493af0();
            piVar18 = local_e8;
            goto LAB_004b572c;
          }
          uVar25 = (uint)(int *)local_d0;
          iVar16 = (int)local_c8._4_4_;
        }
        uVar35 = local_e0;
        cVar11 = *(char *)(local_e0 + 1 + uVar39 * 0x14);
        if (cVar11 == -6) {
          uVar25 = *(uint *)(local_e0 + 0x10 + uVar39 * 0x14);
          local_d0 = (ulonglong)uVar25 << 0x20;
          *(undefined1 *)(uVar25 + 4) =
               *(undefined1 *)(*(int *)(*(int *)(*local_d8 + 0x10) + 0xc) + 0x4d);
          uVar25 = *(ushort *)(uVar25 + 6) + 1;
          iVar16 = (int)local_c8._4_4_;
LAB_004b20a8:
          local_d0 = CONCAT44(local_d0._4_4_,uVar25);
        }
        else if (cVar11 == -0xe) {
          uVar25 = *(uint *)(local_e0 + 0x10 + uVar39 * 0x14);
          goto LAB_004b20a8;
        }
        puVar24 = FUN_0046c260((int *)local_d8,*(int *)(local_e0 + 4 + uVar39 * 0x14),uVar25,iVar16,
                               1);
        local_b8 = (double)CONCAT44(local_b8._4_4_,puVar24);
        piVar18 = local_e8;
        if (puVar24 == (undefined4 *)0x0) goto LAB_004b57a6;
        *(undefined1 *)(puVar24 + 7) = 1;
        *(undefined1 *)(puVar24 + 8) = 1;
        local_d4 = (uint *)FUN_0048f790(local_c0._4_4_,(int)(int *)local_c8,(int)local_c0,
                                        (int)local_d0._4_4_,(int *)*puVar24);
        ((uint *)local_b8)[2] = (uint)local_d0._4_4_;
        *(byte *)(*(uint *)local_b8 + 0x5d) = *(byte *)(uVar35 + 3 + uVar39 * 0x14) & 1;
        *(bool *)((int)(uint *)local_b8 + 0x1e) = *(char *)(uVar35 + 1 + uVar39 * 0x14) != -6;
        *(bool *)((int)(uint *)local_b8 + 0x1f) = *(char *)((int)(uint *)local_b8 + 0x1e) == '\0';
        puVar29 = local_d4;
        piVar18 = local_e8;
        piVar36 = local_dc;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      else {
        local_d4 = (uint *)0x4;
        puVar29 = (uint *)0x4;
      }
      break;
    case 0x29:
    case 0x2a:
      puVar24 = FUN_0046c260((int *)local_d8,*(int *)(local_e0 + 4 + uVar39 * 0x14),
                             *(int *)(local_e0 + 8 + uVar39 * 0x14),0xffffffff,1);
      local_d0 = CONCAT44(local_d0._4_4_,puVar24);
      if (puVar24 == (undefined4 *)0x0) goto LAB_004b57a6;
      *(undefined1 *)(puVar24 + 7) = 1;
      local_d4 = (uint *)FUN_00490e00((undefined *)*piVar18,(byte *)0x0,(int)piVar18,puVar24 + 1,
                                      *(byte *)(local_e0 + 3 + uVar39 * 0x14) | 5,0x41e);
      if (local_d4 == (uint *)0x0) {
        local_d4 = (uint *)FUN_0048ed50(*(int **)((int)(int *)local_d0 + 4),1);
        if (local_d4 == (uint *)0x0) {
          if (*(int *)(local_e0 + 0x10 + uVar39 * 0x14) == 0) {
            local_d4 = (uint *)FUN_0048f790((undefined4 *)((int *)local_d0)[1],1,1,0,
                                            (int *)*(int *)local_d0);
            *(undefined1 *)((int)(int *)local_d0 + 0x1e) = 1;
          }
          else {
            local_d4 = (uint *)FUN_0048f740((undefined4 *)((int *)local_d0)[1],&local_11c,
                                            *(byte *)(local_e0 + 3 + uVar39 * 0x14) | 2);
            if (local_d4 == (uint *)0x0) {
              local_d4 = (uint *)FUN_0048f790((undefined4 *)((int *)local_d0)[1],local_11c,1,
                                              *(int *)(local_e0 + 0x10 + uVar39 * 0x14),
                                              (int *)*(int *)local_d0);
              *(undefined4 *)((int)(int *)local_d0 + 8) =
                   *(undefined4 *)(local_e0 + 0x10 + uVar39 * 0x14);
              *(undefined1 *)(*(int *)((int)(int *)local_d0 + 8) + 4) =
                   *(undefined1 *)(*(int *)(*(int *)(*local_d8 + 0x10) + 0xc) + 0x4d);
            }
            *(undefined1 *)((int)(int *)local_d0 + 0x1e) = 0;
          }
        }
      }
      *(bool *)((int)(int *)local_d0 + 0x20) = *(char *)(local_e0 + 3 + uVar39 * 0x14) != '\b';
      *(bool *)((int)(int *)local_d0 + 0x1f) = *(char *)((int)(int *)local_d0 + 0x1e) == '\0';
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x2b:
      puVar24 = FUN_0046c260((int *)local_d8,*(int *)(local_e0 + 4 + uVar39 * 0x14),
                             *(int *)(local_e0 + 8 + uVar39 * 0x14),0xffffffff,1);
      local_d0 = CONCAT44(local_d0._4_4_,puVar24);
      if (puVar24 == (undefined4 *)0x0) goto LAB_004b57a6;
      puVar24[2] = *(undefined4 *)(local_e0 + 0x10 + uVar39 * 0x14);
      *(undefined1 *)(puVar24[2] + 4) =
           *(undefined1 *)(*(int *)(*(int *)(*local_d8 + 0x10) + 0xc) + 0x4d);
      *(undefined1 *)((int)puVar24 + 0x21) = 1;
      local_d4 = (uint *)FUN_004b8e80((int)piVar18,(int)puVar24);
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x2c:
      puVar24 = FUN_0046c260((int *)local_d8,*(int *)(local_e0 + 4 + uVar39 * 0x14),
                             *(int *)(local_e0 + 0xc + uVar39 * 0x14),0xffffffff,0);
      local_d0 = CONCAT44(local_d0._4_4_,puVar24);
      if (puVar24 == (undefined4 *)0x0) goto LAB_004b57a6;
      *(undefined1 *)(puVar24 + 7) = 1;
      puVar24[4] = *(undefined4 *)(local_e0 + 8 + uVar39 * 0x14);
      *(undefined1 *)((int)puVar24 + 0x1e) = 1;
      *(undefined1 *)((int)puVar24 + 0x1f) = 0;
      *(undefined1 *)((int)puVar24 + 0x22) = *(undefined1 *)(local_e0 + 3 + uVar39 * 0x14);
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x2d:
      FUN_004b5ff0((int *)local_d8,
                   *(undefined4 **)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4));
      *(undefined4 *)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4) = 0;
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
      piVar33 = *(int **)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4);
      local_c8 = CONCAT44(uVar8,piVar33);
      if (*piVar33 == 0) goto LAB_004b0d00;
      uVar13 = *(undefined1 *)(local_e0 + uVar39 * 0x14);
      local_d0 = (ulonglong)CONCAT14(uVar13,(int *)local_d0);
      *(undefined1 *)(piVar33 + 7) = 0;
      if (*(char *)((int)piVar33 + 0x1e) == '\0') {
        local_a8 = *(uint *)(local_e0 + 0x10 + uVar39 * 0x14);
        local_c0._0_6_ = CONCAT24((undefined2)local_a8,piVar33[2]);
        local_c0 = CONCAT17(local_c0._7_1_,CONCAT16(uVar13,(uint6)local_c0)) & 0xff01ffffffffffff;
        piVar36 = (int *)(local_e4 + *(int *)(local_e0 + 0xc + uVar39 * 0x14) * 0x28);
        local_b0 = (double)CONCAT44(local_b0._4_4_,piVar36);
        if ((*(ushort *)(piVar36 + 7) & 0x4000) != 0) {
          FUN_004b6fa0(piVar36);
          piVar33 = (int *)local_c8;
        }
        local_d4 = (uint *)FUN_004908e0((int *)*piVar33,(int *)&local_c0,0,0,0,(uint *)&local_d0);
        if (local_d4 != (uint *)0x0) goto LAB_004b572c;
        *(undefined1 *)((int)(int *)local_c8 + 0x19) = 0;
      }
      else {
        iVar27 = local_e4 + *(int *)(local_e0 + 0xc + uVar39 * 0x14) * 0x28;
        FUN_0046dfa0(iVar27);
        uVar42 = FUN_004b65e0(iVar27);
        *(undefined1 *)((int)(int *)local_c8 + 0x19) = 0;
        local_a0._0_4_ = (int *)uVar42;
        local_a0._4_4_ = (int)(uVar42 >> 0x20);
        uVar25 = (uint)(int *)local_a0;
        iVar16 = local_a0._4_4_;
        if ((*(ushort *)(iVar27 + 0x1c) & 4) == 0) {
          local_a0 = uVar42;
          if ((*(ushort *)(iVar27 + 0x1c) & 8) == 0) {
            iVar27 = *(int *)(local_e0 + 8 + uVar39 * 0x14);
            piVar36 = local_dc;
            goto LAB_004b0d04;
          }
          if (((int *)local_a0 == (int *)0x0) && (local_a0._4_4_ == -0x80000000)) {
            local_f8 = -9.223372036854776e+18;
            if ((*(double *)(iVar27 + 8) < -9.223372036854776e+18) ||
               (0.0 < *(double *)(iVar27 + 8))) {
              local_d0 = CONCAT44(local_d0._4_4_,1);
              if (0.0 < *(double *)(iVar27 + 8) || *(double *)(iVar27 + 8) == 0.0) {
                if ((int)local_d0._4_4_ < 0x30) {
                  local_d4 = (uint *)FUN_004906f0((int *)*(int *)local_c8,(undefined4 *)&local_d0);
                  goto LAB_004b2547;
                }
              }
              else if (0x2f < (int)local_d0._4_4_) {
                local_d4 = (uint *)FUN_0048fdc0((int *)*(int *)local_c8,(undefined4 *)&local_d0);
LAB_004b2547:
                if (local_d4 != (uint *)0x0) goto LAB_004b572c;
                puVar29 = local_d4;
                piVar36 = local_dc;
                piVar10 = local_dc;
                uVar42 = local_d0;
                if ((int *)local_d0 != (int *)0x0) {
                  iVar27 = *(int *)(local_e0 + 8 + uVar39 * 0x14);
                  goto LAB_004b0d04;
                }
                break;
              }
LAB_004af55f:
              puVar29 = local_d4;
              piVar36 = local_dc;
              local_ec = *(int *)(local_e0 + 8 + uVar39 * 0x14) - 1;
              piVar10 = local_dc;
              uVar42 = local_d0;
              break;
            }
          }
          if ((local_d0._4_4_ == (uint *)0x2e) || (local_d0._4_4_ == (uint *)0x30)) {
            local_f8 = (double)(longlong)uVar42;
            if (local_f8 < *(double *)(iVar27 + 8)) {
              uVar25 = (int)(int *)local_a0 + 1;
              iVar16 = local_a0._4_4_ + (uint)(0xfffffffe < (int *)local_a0);
              local_a0 = CONCAT44(iVar16,uVar25);
              uVar42 = local_a0;
            }
          }
          else {
            local_f8 = (double)(longlong)uVar42;
            if (*(double *)(iVar27 + 8) <= local_f8 && local_f8 != *(double *)(iVar27 + 8)) {
              uVar25 = (int)(int *)local_a0 - 1;
              iVar16 = local_a0._4_4_ + -1 + (uint)((int *)local_a0 != (int *)0x0);
              local_a0 = CONCAT44(iVar16,uVar25);
              uVar42 = local_a0;
            }
          }
        }
        local_a0 = uVar42;
        local_d4 = (uint *)FUN_004908e0((int *)*(int *)local_c8,(int *)0x0,uVar25,iVar16,0,
                                        (uint *)&local_d0);
        if (local_d4 != (uint *)0x0) goto LAB_004b572c;
        if ((int *)local_d0 == (int *)0x0) {
          *(undefined1 *)((int)(int *)local_c8 + 0x19) = 1;
          *(int **)((int)(int *)local_c8 + 0x40) = (int *)local_a0;
          *(int *)((int)(int *)local_c8 + 0x44) = local_a0._4_4_;
        }
      }
      *(undefined1 *)((int)(int *)local_c8 + 0x1d) = 0;
      ((int *)local_c8)[0x14] = 0;
      piVar36 = local_dc;
      if ((int)local_d0._4_4_ < 0x30) {
        if (((int)(int *)local_d0 < 1) &&
           (((int *)local_d0 != (int *)0x0 || (local_d0._4_4_ != (uint *)0x2e)))) {
          uVar25 = (uint)(*(char *)(*(int *)local_c8 + 0x5b) != '\x01');
          local_d0 = CONCAT44(local_d0._4_4_,uVar25);
          bVar14 = uVar25 == 0;
          goto LAB_004b07bb;
        }
        local_d4 = (uint *)FUN_00491450((int *)*(int *)local_c8,(undefined4 *)&local_d0);
      }
      else {
        if ((-1 < (int)(int *)local_d0) &&
           (((int *)local_d0 != (int *)0x0 || (local_d0._4_4_ != (uint *)0x31)))) {
          local_d0 = ZEXT48(local_d0._4_4_) << 0x20;
          puVar29 = local_d4;
          piVar10 = local_dc;
          uVar42 = local_d0;
          break;
        }
        local_d4 = (uint *)FUN_00490c90((int *)*(int *)local_c8,(undefined4 *)&local_d0);
      }
      if (local_d4 != (uint *)0x0) goto LAB_004b572c;
      *(undefined1 *)((int)(int *)local_c8 + 0x19) = 0;
      bVar14 = (int *)local_d0 == (int *)0x0;
      piVar36 = local_dc;
      goto LAB_004b07bb;
    case 0x32:
      piVar33 = *(int **)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4);
      local_d0 = CONCAT44(local_d0._4_4_,piVar33);
      uVar42 = local_d0;
      if (*piVar33 != 0) {
        *(undefined1 *)(piVar33 + 7) = 0;
        uVar42 = FUN_004b65e0(local_e4 + *(int *)(local_e0 + 8 + uVar39 * 0x14) * 0x28);
        *(ulonglong *)((int)(int *)local_d0 + 0x38) = uVar42;
        *(undefined1 *)((int)(int *)local_d0 + 0x19) = 0;
        *(undefined1 *)((int)(int *)local_d0 + 0x1d) = 1;
        puVar29 = local_d4;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      break;
    case 0x33:
    case 0x34:
      uVar35 = 0;
      piVar36 = *(int **)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4);
      local_d0 = ZEXT48(piVar36) << 0x20;
      uVar25 = local_e4 + *(int *)(local_e0 + 0xc + uVar39 * 0x14) * 0x28;
      if (*piVar36 != 0) {
        if (*(int *)(local_e0 + 0x10 + uVar39 * 0x14) < 1) {
          puVar24 = FUN_004aebc0((int *)piVar36[2],(int)&local_a0,0x97,
                                 (undefined4 *)((int)&local_c8 + 4));
          local_c0 = CONCAT44(local_c0._4_4_,puVar24);
          if (puVar24 == (undefined4 *)0x0) goto LAB_004b57a6;
          FUN_004b8560(*(undefined4 **)((int)local_d0._4_4_ + 8),*(int *)(uVar25 + 0x18),
                       *(byte **)(uVar25 + 4),(uint)puVar24);
          *(byte *)((int)(int *)local_c0 + 6) = *(byte *)((int)(int *)local_c0 + 6) | 2;
          piVar33 = (int *)local_c0;
          piVar36 = (int *)local_d0._4_4_;
        }
        else {
          local_b8._0_6_ = CONCAT24(*(undefined2 *)(local_e0 + 0x10 + uVar39 * 0x14),piVar36[2]);
          local_b8._0_7_ = CONCAT16(2,(undefined6)local_b8);
          local_c0 = CONCAT44(uVar28,&local_b8);
          piVar33 = (int *)&local_b8;
          local_a8 = uVar25;
        }
        local_d4 = (uint *)FUN_004908e0((int *)*piVar36,piVar33,0,0,0,(uint *)&local_c8);
        if (*(int *)(local_e0 + 0x10 + uVar39 * 0x14) == 0) {
          FUN_00494b00((int)piVar18,(undefined4 *)(local_c8 >> 0x20));
        }
        puVar29 = local_d4;
        piVar36 = local_dc;
        piVar10 = local_dc;
        uVar42 = local_d0;
        if (local_d4 != (uint *)0x0) break;
        uVar35 = (uint)((int *)local_c8 == (int *)0x0);
        local_d0 = CONCAT44(local_d0._4_4_,uVar35);
        *(undefined1 *)((int)local_d0._4_4_ + 0x1d) = 0;
        *(undefined4 *)((int)local_d0._4_4_ + 0x50) = 0;
      }
      piVar36 = local_dc;
      uVar42 = local_d0;
      puVar29 = local_d4;
      piVar10 = local_dc;
      if (*(char *)(local_e0 + uVar39 * 0x14) == '4') {
        if (uVar35 != 0) {
          iVar27 = *(int *)(local_e0 + 8 + uVar39 * 0x14);
          goto LAB_004b0d04;
        }
      }
      else if (uVar35 == 0) {
        iVar27 = *(int *)(local_e0 + 8 + uVar39 * 0x14);
        goto LAB_004b0d04;
      }
      break;
    case 0x35:
      iVar27 = local_e4 + *(int *)(local_e0 + 0xc + uVar39 * 0x14) * 0x28;
      uVar25 = local_e4 + *(int *)(local_e0 + 0x10 + uVar39 * 0x14) * 0x28;
      local_c0 = CONCAT44(uVar28,uVar25);
      piVar36 = *(int **)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4);
      local_d0 = CONCAT44(piVar36,(int *)local_d0);
      piVar36[0x13] = 0;
      piVar36[0x14] = 0;
      iVar16 = *piVar36;
      local_f8 = (double)CONCAT44(iVar16,(undefined4)local_f8);
      uVar3 = *(ushort *)(piVar36[2] + 6);
      uVar31 = 0;
      local_c8._0_6_ = CONCAT24(uVar3,iVar16);
      local_d0 = local_d0 & 0xffffffffffff0000;
      if (uVar3 != 0) {
        uVar35 = 0;
        do {
          if ((*(byte *)(uVar25 + 0x1c + uVar35 * 0x28) & 1) != 0) {
            iVar27 = *(int *)(local_e0 + 8 + uVar39 * 0x14);
            local_c8 = local_c8 & 0xffffffff00000000;
            piVar18 = local_e8;
            piVar36 = local_dc;
            goto LAB_004b0d04;
          }
          uVar31 = uVar31 + 1;
          uVar35 = (uint)uVar31;
          local_d0 = CONCAT62(local_d0._2_6_,uVar31);
        } while (uVar35 < uVar3);
      }
      piVar18 = piVar33;
      piVar36 = piVar19;
      uVar42 = local_d0;
      if (iVar16 != 0) {
        local_b8._0_6_ = CONCAT24(uVar3 + 1,*(undefined4 *)((int)local_d0._4_4_ + 8));
        local_b8._0_7_ = CONCAT16(4,(undefined6)local_b8);
        local_a8 = uVar25;
        FUN_004b7410(iVar27);
        local_a0 = *(ulonglong *)(iVar27 + 0x10);
        local_d4 = (uint *)FUN_004908e0((int *)local_c8,(int *)&local_b8,0,0,0,
                                        (uint *)((int)local_d0._4_4_ + 0x4c));
        if (((ulonglong)local_b8 & 0x4000000000000) == 0) {
          if (((int *)local_b0 != (int *)local_a0) || (local_b0._4_4_ != local_a0._4_4_)) {
            *(int **)(iVar27 + 0x10) = (int *)local_b0;
            *(uint *)(iVar27 + 0x14) = local_b0._4_4_;
            puVar29 = local_d4;
            piVar18 = local_e8;
            piVar36 = local_dc;
            piVar10 = local_dc;
            uVar42 = local_d0;
            break;
          }
        }
LAB_004b4170:
        iVar27 = *(int *)(local_e0 + 8 + uVar39 * 0x14);
        piVar18 = local_e8;
        piVar36 = local_dc;
        goto LAB_004b0d04;
      }
      break;
    case 0x36:
      iVar27 = *(int *)(local_e0 + 0xc + uVar39 * 0x14);
      puVar24 = *(undefined4 **)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4);
      piVar36 = (int *)*puVar24;
      local_d0 = CONCAT44(piVar36,puVar24);
      if (piVar36 == (int *)0x0) {
        iVar27 = *(int *)(local_e0 + 8 + uVar39 * 0x14);
        puVar24[0x13] = 0;
        piVar36 = piVar19;
        local_ec = iVar27 - 1;
        uVar42 = local_d0;
      }
      else {
        local_c8 = (ulonglong)uVar8 << 0x20;
        uVar25 = *(uint *)(local_e4 + 0x10 + iVar27 * 0x28);
        iVar16 = *(int *)(local_e4 + 0x14 + iVar27 * 0x28);
        local_c0 = CONCAT44(iVar16,uVar25);
        local_d4 = (uint *)FUN_004908e0(piVar36,(int *)0x0,uVar25,iVar16,0,(uint *)&local_c8);
        *(undefined4 *)((int)(int *)local_d0 + 0x40) =
             *(undefined4 *)(local_e4 + 0x10 + iVar27 * 0x28);
        *(undefined4 *)((int)(int *)local_d0 + 0x44) =
             *(undefined4 *)(local_e4 + 0x14 + iVar27 * 0x28);
        *(bool *)((int)(int *)local_d0 + 0x19) = (int *)local_c8 == (int *)0x0;
        *(undefined1 *)((int)(int *)local_d0 + 0x1c) = 0;
        *(undefined4 *)((int)(int *)local_d0 + 0x50) = 0;
        *(undefined1 *)((int)(int *)local_d0 + 0x1d) = 0;
        if ((int *)local_c8 != (int *)0x0) {
          local_ec = *(int *)(local_e0 + 8 + uVar39 * 0x14) - 1;
        }
        *(int **)((int)(int *)local_d0 + 0x4c) = (int *)local_c8;
        puVar29 = local_d4;
        piVar18 = local_e8;
        piVar36 = local_dc;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      break;
    case 0x37:
      iVar27 = *(int *)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4);
      piVar36[4] = *(int *)(iVar27 + 0x30);
      piVar36[5] = *(int *)(iVar27 + 0x34);
      iVar27 = *(int *)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4);
      puVar34 = (uint *)(iVar27 + 0x30);
      uVar39 = *puVar34;
      *puVar34 = *puVar34 + 1;
      piVar33 = (int *)(iVar27 + 0x34);
      *piVar33 = *piVar33 + (uint)(0xfffffffe < uVar39);
      break;
    case 0x38:
      local_d0 = 0;
      piVar36 = *(int **)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4);
      local_c8 = ZEXT48(piVar36);
      iVar27 = *piVar36;
      if (iVar27 != 0) {
        if (*(char *)((int)piVar36 + 0x1b) == '\0') {
          uVar25 = *(uint *)(iVar27 + 0x20);
          iStack_12c = *(int *)(iVar27 + 0x24);
          local_d0 = *(ulonglong *)(iVar27 + 0x20);
          if (uVar25 == 0 && iStack_12c == 0) {
            local_d4 = (uint *)FUN_004906f0((int *)*piVar36,(undefined4 *)((int)&local_c8 + 4));
            if (local_d4 != (uint *)0x0) goto LAB_004b572c;
            if (local_c8._4_4_ == (int *)0x0) {
              local_d4 = (uint *)FUN_004906b0(*(int *)local_c8,(undefined4 *)&local_d0);
              if (((int)local_d0._4_4_ < 0x7fffffff) || ((int *)local_d0 != (int *)0xffffffff)) {
                iStack_12c = (int)local_d0._4_4_ + (uint)(0xfffffffe < (int *)local_d0);
                goto LAB_004b2d88;
              }
              *(undefined1 *)((int)(int *)local_c8 + 0x1b) = 1;
              uVar25 = 0xffffffff;
              iStack_12c = (int)local_d0._4_4_;
            }
            else {
              iStack_12c = 0;
              local_d0._0_4_ = (int *)0x0;
LAB_004b2d88:
              uVar25 = (int)(int *)local_d0 + 1;
              local_d0 = CONCAT44(iStack_12c,uVar25);
            }
            piVar36 = (int *)local_c8;
          }
          iVar27 = *(int *)(local_e0 + 0xc + uVar39 * 0x14);
          if (iVar27 != 0) {
            uVar25 = local_d8[0x28];
            if (uVar25 == 0) {
              iVar27 = local_e4 + iVar27 * 0x28;
            }
            else {
              local_b8 = (double)CONCAT44(local_b8._4_4_,uVar25);
              for (uVar35 = *(uint *)(uVar25 + 4); uVar35 != 0; uVar35 = *(uint *)(uVar35 + 4)) {
                local_b8._4_4_ = (byte *)((ulonglong)local_b8 >> 0x20);
                local_b8 = (double)CONCAT44(local_b8._4_4_,uVar35);
                uVar25 = uVar35;
              }
              iVar27 = *(int *)(uVar25 + 0xc) + *(int *)(local_e0 + 0xc + uVar39 * 0x14) * 0x28;
            }
            local_c0 = CONCAT44(iVar27,(int *)local_c0);
            FUN_004b7410(iVar27);
            uVar39 = *(uint *)((int)local_c0._4_4_ + 0x10);
            uVar42 = local_c8;
            if (((uVar39 == 0xffffffff) && (*(int *)((int)local_c0._4_4_ + 0x14) == 0x7fffffff)) ||
               (*(char *)((int)(int *)local_c8 + 0x1b) != '\0')) {
LAB_004b573f:
              local_c8 = uVar42;
              local_d4 = (uint *)0xd;
              goto LAB_004b572c;
            }
            uVar25 = uVar39 + 1;
            iVar27 = *(int *)((int)local_c0._4_4_ + 0x14) + (uint)(0xfffffffe < uVar39);
            uVar39 = (uint)(int *)local_d0;
            if (((int)local_d0._4_4_ <= iVar27) &&
               (((int)local_d0._4_4_ < iVar27 || ((int *)local_d0 < uVar25)))) {
              local_d0 = CONCAT44(iVar27,uVar25);
              uVar39 = uVar25;
            }
            *(uint *)((int)local_c0._4_4_ + 0x10) = uVar39;
            *(uint **)((int)local_c0._4_4_ + 0x14) = local_d0._4_4_;
            uVar25 = (uint)(int *)local_d0;
            iStack_12c = (int)local_d0._4_4_;
            piVar36 = (int *)local_c8;
          }
          if ((iStack_12c < 0x7fffffff) || (uVar25 != 0xffffffff)) {
            local_130 = uVar25 + 1;
            iStack_12c = iStack_12c + (uint)(0xfffffffe < uVar25);
          }
          else {
            iStack_12c = 0;
            local_130 = 0;
          }
          FUN_00491bc0(*piVar36,local_130,iStack_12c);
          piVar36 = (int *)local_c8;
          uVar42 = local_c8;
          if (*(char *)((int)(int *)local_c8 + 0x1b) != '\0') goto LAB_004b2ed4;
        }
        else {
LAB_004b2ed4:
          iVar27 = (local_100 & 0x3fffffff) + (uint)(0xfffffffe < local_104);
          local_d0 = CONCAT44(iVar27,local_104 + 1);
          local_c0 = local_c0 & 0xffffffff00000000;
          local_d4 = (uint *)FUN_004908e0((int *)*piVar36,(int *)0x0,local_104 + 1,iVar27,0,
                                          (uint *)((int)&local_c8 + 4));
          uVar42 = local_c8;
          while (local_d4 == (uint *)0x0) {
            local_c8._4_4_ = (int *)(uVar42 >> 0x20);
            if (local_c8._4_4_ != (int *)0x0) {
LAB_004b2fc6:
              if (local_c8._4_4_ == (int *)0x0) goto LAB_004b573f;
              break;
            }
            iVar27 = (int)(int *)local_c0 + 1;
            local_c0._4_4_ = (undefined4 *)(local_c0 >> 0x20);
            local_c0 = CONCAT44(local_c0._4_4_,iVar27);
            if (99 < iVar27) goto LAB_004b2fc6;
            local_c8 = uVar42;
            FUN_00466fa0(8,(undefined1 *)&local_d0);
            if ((int)(int *)local_c0 < 5) {
              local_d0._0_4_ = (int *)((uint)(int *)local_d0 & 0xffffff);
              uVar39 = 0;
            }
            else {
              uVar39 = (uint)local_d0._4_4_ & 0x3fffffff;
            }
            uVar25 = (int)(int *)local_d0 + 1;
            iVar27 = uVar39 + (0xfffffffe < (int *)local_d0);
            local_d0 = CONCAT44(iVar27,uVar25);
            local_d4 = (uint *)FUN_004908e0((int *)*(int *)local_c8,(int *)0x0,uVar25,iVar27,0,
                                            (uint *)((int)&local_c8 + 4));
            uVar42 = local_c8;
          }
          local_c8._0_4_ = (int *)uVar42;
        }
        local_c8 = uVar42;
        puVar1 = (undefined1 *)((int)(int *)local_c8 + 0x19);
        *puVar1 = 0;
        *(undefined1 *)((int)(int *)local_c8 + 0x1d) = 0;
        *(undefined4 *)((int)(int *)local_c8 + 0x50) = 0;
      }
      local_dc[4] = (int)(int *)local_d0;
      local_dc[5] = (int)local_d0._4_4_;
      puVar29 = local_d4;
      piVar36 = local_dc;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x39:
    case 0x3a:
      iVar27 = local_e4 + *(int *)(local_e0 + 8 + uVar39 * 0x14) * 0x28;
      piVar36 = *(int **)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4);
      uVar25 = *(uint *)(local_e0 + 0xc + uVar39 * 0x14);
      if (*(char *)(local_e0 + uVar39 * 0x14) == '9') {
        local_d0._4_4_ = (uint *)(local_e4 + uVar25 * 0x28);
        uVar25 = *(uint *)((int)local_d0._4_4_ + 0x10);
        uVar35 = *(uint *)((int)local_d0._4_4_ + 0x14);
      }
      else {
        uVar35 = (int)uVar25 >> 0x1f;
      }
      local_d0 = CONCAT44(local_d0._4_4_,iVar27);
      local_c8 = CONCAT44(uVar35,uVar25);
      if ((*(byte *)(local_e0 + 3 + uVar39 * 0x14) & 1) != 0) {
        local_d8[0x19] = local_d8[0x19] + 1;
      }
      if ((*(byte *)(local_e0 + 3 + uVar39 * 0x14) & 2) != 0) {
        local_e8[8] = uVar25;
        local_e8[9] = uVar35;
        local_104 = uVar25;
        local_100 = uVar35;
      }
      if ((*(byte *)(iVar27 + 0x1c) & 1) != 0) {
        *(undefined4 *)(iVar27 + 4) = 0;
        *(undefined4 *)(iVar27 + 0x18) = 0;
      }
      if ((*(byte *)(local_e0 + 3 + uVar39 * 0x14) & 0x10) == 0) {
        local_b8 = (double)((ulonglong)uVar9 << 0x20);
      }
      else {
        local_b8 = (double)CONCAT44(uVar9,piVar36[0x13]);
      }
      if ((*(ushort *)(iVar27 + 0x1c) & 0x4000) == 0) {
        local_c0 = ZEXT48(piVar36);
      }
      else {
        local_c0 = CONCAT44(*(undefined4 *)(iVar27 + 0x10),piVar36);
      }
      FUN_00491bc0(*piVar36,0,0);
      uVar25 = local_e0;
      local_d4 = FUN_0048ffe0((uint *)*(int *)local_c0,(byte *)0x0,(uint)(int *)local_c8,
                              (uint)local_c8._4_4_,*(void **)((int)(int *)local_d0 + 4),
                              *(size_t *)((int)(int *)local_d0 + 0x18),(size_t)local_c0._4_4_,
                              *(byte *)(local_e0 + 3 + uVar39 * 0x14) & 8,(uint *)local_b8);
      piVar18 = local_e8;
      *(undefined1 *)((int)(int *)local_c0 + 0x19) = 0;
      *(undefined1 *)((int)(int *)local_c0 + 0x1d) = 0;
      *(undefined4 *)((int)(int *)local_c0 + 0x50) = 0;
      puVar29 = local_d4;
      piVar36 = local_dc;
      piVar10 = local_dc;
      uVar42 = local_d0;
      if (((local_d4 == (uint *)0x0) && (local_e8[0x2f] != 0)) &&
         (*(int *)(uVar25 + 0x10 + uVar39 * 0x14) != 0)) {
        uVar28 = *(undefined4 *)(local_e8[4] + *(int *)((int)(int *)local_c0 + 0xc) * 0x10);
        local_b8 = (double)CONCAT44(uVar28,(uint *)local_b8);
        uVar5 = *(undefined4 *)(uVar25 + 0x10 + uVar39 * 0x14);
        uVar20 = 0x12;
        if ((*(byte *)(uVar25 + 3 + uVar39 * 0x14) & 4) != 0) {
          uVar20 = 0x17;
        }
        local_b0 = (double)CONCAT44(uVar20,uVar5);
        (*(code *)local_e8[0x2f])(local_e8[0x2e],uVar20,uVar28,uVar5,(int *)local_c8);
        puVar29 = local_d4;
        piVar36 = local_dc;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      break;
    case 0x3b:
      local_d0 = 0;
      puVar24 = *(undefined4 **)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4);
      local_c8 = CONCAT44(uVar8,puVar24);
      if ((piVar18[0x2f] != 0) && (*(int *)(local_e0 + 0x10 + uVar39 * 0x14) != 0)) {
        local_d0 = *(ulonglong *)(puVar24 + 0x10);
      }
      local_d4 = (uint *)FUN_004af1b0(puVar24);
      if (local_d4 != (uint *)0x0) {
LAB_004b572c:
        if ((char)piVar18[0xe] == '\0') {
          puVar29 = local_d4;
          if (local_d4 == (uint *)0xc0a) goto LAB_004b57cd;
        }
        else {
          local_d4 = (uint *)0x7;
        }
        FUN_004961c0((uint)local_d4);
        FUN_004a9a30((int *)(local_d8 + 0xd),(int)piVar18,&DAT_0056de50);
        puVar29 = local_d4;
        goto LAB_004b57cd;
      }
      FUN_00491bc0(*(int *)local_c8,0,0);
      local_d4 = (uint *)FUN_0048f930((uint *)*(int *)local_c8);
      *(undefined4 *)((int)(int *)local_c8 + 0x50) = 0;
      if (((local_d4 == (uint *)0x0) && ((code *)piVar18[0x2f] != (code *)0x0)) &&
         (iVar27 = *(int *)(local_e0 + 0x10 + uVar39 * 0x14), iVar27 != 0)) {
        (*(code *)piVar18[0x2f])
                  (piVar18[0x2e],9,
                   *(undefined4 *)(piVar18[4] + *(int *)((int)(int *)local_c8 + 0xc) * 0x10),iVar27,
                   (int *)local_d0);
      }
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      if ((*(byte *)(local_e0 + 8 + uVar39 * 0x14) & 1) != 0) {
        local_d8[0x19] = local_d8[0x19] + 1;
      }
      break;
    case 0x3c:
      uVar39 = local_d8[0x19];
      piVar18[0x13] = piVar18[0x13] + uVar39;
      piVar18[0x12] = uVar39;
      local_d8[0x19] = 0;
      break;
    case 0x3d:
      iVar27 = *(int *)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4);
      local_d0 = CONCAT44(local_d0._4_4_,iVar27);
      local_d4 = (uint *)FUN_004b8dd0(iVar27,local_e4 +
                                             *(int *)(local_e0 + 0xc + uVar39 * 0x14) * 0x28,
                                      (uint *)((int)&local_d0 + 4));
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      if (local_d0._4_4_ != (uint *)0x0) {
        iVar27 = *(int *)(local_e0 + 8 + uVar39 * 0x14);
        goto LAB_004b0d04;
      }
      break;
    case 0x3e:
      piVar36 = (int *)(local_e4 + *(int *)(local_e0 + 8 + uVar39 * 0x14) * 0x28);
      iVar27 = *(int *)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4);
      local_d0 = CONCAT44(local_d0._4_4_,iVar27);
      local_dc = piVar36;
      local_d4 = (uint *)FUN_004b92e0(iVar27,piVar36);
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x3f:
    case 0x40:
      local_dc = (int *)(local_e4 + *(int *)(local_e0 + 8 + uVar39 * 0x14) * 0x28);
      puVar24 = *(undefined4 **)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4);
      local_d0 = CONCAT44(*puVar24,puVar24);
      local_d4 = (uint *)FUN_004af1b0(puVar24);
      if (local_d4 != (uint *)0x0) goto LAB_004b572c;
      if (*(char *)((int)(int *)local_d0 + 0x1f) != '\0') {
        FUN_004906b0((int)local_d0._4_4_,(undefined4 *)&local_c0);
        iVar27 = piVar18[0x14] >> 0x1f;
        if ((iVar27 < (int)local_c0._4_4_) ||
           ((iVar27 <= (int)local_c0._4_4_ && ((uint)piVar18[0x14] < (int *)local_c0))))
        goto LAB_004b5780;
        local_c8 = CONCAT44(local_c8._4_4_,(int *)local_c0);
        uVar39 = (uint)(int *)local_c0;
LAB_004b3497:
        piVar36 = local_dc;
        iVar27 = FUN_004b7260(local_dc,uVar39,0);
        if (iVar27 == 0) {
          piVar36[6] = (int)(int *)local_c8;
          *(ushort *)(piVar36 + 7) = *(ushort *)(piVar36 + 7) & 0xbe10 | 0x10;
          if (*(char *)((int)(int *)local_d0 + 0x1f) == '\0') {
            local_d4 = (uint *)FUN_0048f870((int *)local_d0._4_4_,0,(size_t)(int *)local_c8,
                                            (void *)piVar36[1]);
            *(undefined1 *)((int)piVar36 + 0x1f) = 1;
            puVar29 = local_d4;
            piVar36 = local_dc;
            piVar10 = local_dc;
            uVar42 = local_d0;
          }
          else {
            local_d4 = (uint *)FUN_0046b2f0((int)local_d0._4_4_,0,(size_t)(int *)local_c8,
                                            (void *)piVar36[1],0);
            *(undefined1 *)((int)piVar36 + 0x1f) = 1;
            puVar29 = local_d4;
            piVar10 = local_dc;
            uVar42 = local_d0;
          }
          break;
        }
        goto LAB_004b57a6;
      }
      FUN_0048f8d0((int)local_d0._4_4_,(undefined4 *)&local_c8);
      uVar39 = (uint)(int *)local_c8;
      if ((int *)local_c8 <= (uint)piVar18[0x14]) goto LAB_004b3497;
LAB_004b5780:
      FUN_004a9a30((int *)(local_d8 + 0xd),(int)piVar18,(byte *)"string or blob too big");
      puVar29 = (uint *)0x12;
      local_d4 = puVar29;
      goto LAB_004b57cd;
    case 0x41:
      puVar24 = *(undefined4 **)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4);
      local_d0 = CONCAT44(local_d0._4_4_,puVar24);
      uVar42 = local_d0;
      if (*(char *)(puVar24 + 7) == '\0') {
        if (*(char *)((int)puVar24 + 0x1d) == '\0') {
          if ((undefined4 *)puVar24[9] == (undefined4 *)0x0) {
            local_d4 = (uint *)FUN_004af1b0(puVar24);
            if (local_d4 != (uint *)0x0) goto LAB_004b572c;
            if (*(char *)((int)(int *)local_d0 + 0x19) == '\0') {
              local_d4 = (uint *)FUN_004906b0(*(int *)local_d0,(undefined4 *)&local_c8);
              piVar36[4] = (int)(int *)local_c8;
              piVar36[5] = (int)local_c8._4_4_;
              puVar29 = local_d4;
              piVar10 = local_dc;
              uVar42 = local_d0;
            }
            else {
              iVar27 = ((int *)local_d0)[0x11];
              local_c8 = *(ulonglong *)((int *)local_d0 + 0x10);
              piVar36[4] = (int)*(ulonglong *)((int *)local_d0 + 0x10);
              piVar36[5] = iVar27;
              puVar29 = local_d4;
              piVar10 = local_dc;
              uVar42 = local_d0;
            }
          }
          else {
            piVar33 = *(int **)puVar24[9];
            iVar27 = *piVar33;
            local_c0 = CONCAT44(iVar27,piVar33);
            local_d4 = (uint *)(**(code **)(iVar27 + 0x30))(puVar24[9]);
            FUN_0047e200((int *)local_d8,(int)local_c0);
            piVar36[4] = (int)(int *)local_c8;
            piVar36[5] = (int)local_c8._4_4_;
            puVar29 = local_d4;
            piVar10 = local_dc;
            uVar42 = local_d0;
          }
        }
        else {
          iVar27 = puVar24[0xf];
          local_c8 = *(ulonglong *)(puVar24 + 0xe);
          piVar36[4] = (int)*(ulonglong *)(puVar24 + 0xe);
          piVar36[5] = iVar27;
        }
      }
      else {
        *(undefined2 *)(piVar36 + 7) = 1;
      }
      break;
    case 0x42:
      piVar33 = *(int **)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4);
      local_d0 = CONCAT44(local_d0._4_4_,piVar33);
      *(undefined1 *)(piVar33 + 7) = 1;
      *(undefined1 *)((int)piVar33 + 0x19) = 0;
      uVar42 = local_d0;
      if (*piVar33 != 0) {
        FUN_0048efd0(*piVar33);
        puVar29 = local_d4;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      break;
    case 0x43:
      puVar24 = *(undefined4 **)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4);
      piVar33 = (int *)*puVar24;
      local_d0 = CONCAT44(piVar33,puVar24);
      local_c8 = (ulonglong)uVar8 << 0x20;
      if (piVar33 != (int *)0x0) {
        local_d4 = (uint *)FUN_004906f0(piVar33,(undefined4 *)&local_c8);
        puVar24 = (int *)local_d0;
      }
      *(undefined1 *)(puVar24 + 7) = (undefined1)local_c8;
      *(undefined1 *)((int)(int *)local_d0 + 0x1d) = 0;
      *(undefined1 *)((int)(int *)local_d0 + 0x19) = 0;
      *(undefined4 *)((int)(int *)local_d0 + 0x50) = 0;
      iVar27 = *(int *)(local_e0 + 8 + uVar39 * 0x14);
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      if ((0 < iVar27) && ((int *)local_c8 != (int *)0x0)) goto LAB_004b0d04;
      break;
    case 0x44:
    case 0x45:
      iVar27 = *(int *)(local_e0 + 4 + uVar39 * 0x14);
      if ((*(byte *)(local_e4 + 0x1c + iVar27 * 0x28) & 1) == 0) {
        uVar42 = FUN_004b65e0(local_e4 + iVar27 * 0x28);
        if (uVar42 == 0) {
          uVar35 = 0;
        }
        else {
          uVar35 = 1;
        }
      }
      else {
        uVar35 = 2;
      }
      local_d0 = CONCAT44(local_d0._4_4_,uVar35);
      iVar27 = *(int *)(local_e0 + 8 + uVar39 * 0x14);
      if ((*(byte *)(uVar25 + 0x1c + iVar27 * 0x28) & 1) == 0) {
        uVar42 = FUN_004b65e0(uVar25 + iVar27 * 0x28);
        if (uVar42 == 0) {
          iVar27 = 0;
        }
        else {
          iVar27 = 1;
        }
      }
      else {
        iVar27 = 2;
        local_d0._0_4_ = (int *)uVar35;
      }
      iVar16 = iVar27 + (int)(int *)local_d0 * 2;
      if (*(char *)(local_e0 + uVar39 * 0x14) == 'E') {
        bVar12 = (&UNK_0056a1cc)[iVar16 + (int)(int *)local_d0];
      }
      else {
        bVar12 = (&UNK_0056a284)[iVar16 + (int)(int *)local_d0];
      }
      uVar35 = (uint)bVar12;
      local_d0 = CONCAT44(iVar27,uVar35);
      piVar36 = (int *)(uVar25 + *(int *)(local_e0 + 0xc + uVar39 * 0x14) * 0x28);
      uVar42 = local_d0;
      puVar29 = local_d4;
      piVar10 = piVar36;
      if (uVar35 == 2) {
        *(ushort *)(piVar36 + 7) = *(ushort *)(piVar36 + 7) & 0xbe01 | 1;
      }
      else {
        piVar36[4] = uVar35;
        piVar36[5] = 0;
        *(ushort *)(piVar36 + 7) = *(ushort *)(piVar36 + 7) & 0xbe04 | 4;
      }
      break;
    case 0x46:
    case 0x47:
      local_d8[0x1e] = local_d8[0x1e] + 1;
      goto LAB_004b3746;
    case 0x48:
LAB_004b3746:
      puVar24 = *(undefined4 **)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4);
      local_d0 = CONCAT44(local_d0._4_4_,puVar24);
      local_c8 = CONCAT44(uVar8,1);
      if (puVar24[0x12] == 0) {
        local_d0 = CONCAT44((int *)*puVar24,puVar24);
        local_d4 = (uint *)FUN_0048fdc0((int *)*puVar24,(undefined4 *)&local_c8);
        uVar25 = (uint)(int *)local_c8;
        *(bool *)((int)(int *)local_d0 + 0x1a) = (int *)local_c8 == (int *)0x0;
        *(undefined1 *)((int)(int *)local_d0 + 0x1d) = 0;
        *(undefined4 *)((int)(int *)local_d0 + 0x50) = 0;
        *(undefined1 *)((int)(int *)local_d0 + 0x19) = 0;
        *(undefined1 *)((int)(int *)local_d0 + 0x1c) = (undefined1)local_c8;
        bVar14 = uVar25 == 0;
      }
      else {
        local_d4 = (uint *)FUN_004b9000(piVar18,(int)puVar24,(uint *)&local_c8);
        *(undefined1 *)((int)(int *)local_d0 + 0x1c) = (undefined1)local_c8;
        bVar14 = (int *)local_c8 == (int *)0x0;
      }
LAB_004b07bb:
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      if (!bVar14) {
        iVar27 = *(int *)(local_e0 + 8 + uVar39 * 0x14);
LAB_004b0d04:
        puVar29 = local_d4;
        local_ec = iVar27 - 1;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      break;
    case 0x49:
      if ((*(byte *)(local_e4 + 0x1c + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x28) & 1) != 0)
      goto LAB_004b0d00;
      break;
    case 0x4a:
      bVar14 = (*(byte *)(local_e4 + 0x1c + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x28) & 1) == 0
      ;
      goto LAB_004b0cfe;
    default:
      piVar36 = (int *)(local_e4 + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x28);
      piVar19 = (int *)(local_e4 + *(int *)(local_e0 + 0xc + uVar39 * 0x14) * 0x28);
      uVar3 = *(ushort *)(piVar36 + 7);
      local_d0 = CONCAT26(uVar3,(undefined6)local_d0);
      uVar42 = local_d0;
      uVar31 = *(ushort *)(piVar19 + 7);
      local_d0._6_1_ = (byte)uVar3;
      local_c8 = CONCAT62(local_c8._2_6_,uVar31);
      bVar12 = *(byte *)(local_e0 + 3 + uVar39 * 0x14);
      if ((((byte)uVar31 | local_d0._6_1_) & 1) == 0) {
        local_d0._5_3_ = SUB83(uVar42,5);
        local_d0 = CONCAT35(local_d0._5_3_,CONCAT14(bVar12,uVar38)) & 0xffffff67ffffffff;
        if ((bVar12 & 0x67) != 0) {
          FUN_004ae250(piVar36,(char)(local_d0 >> 0x20),(byte)local_f0);
          FUN_004ae250(piVar19,(char)(local_d0 >> 0x20),(byte)local_f0);
          piVar18 = local_e8;
          if ((char)local_e8[0xe] != '\0') goto LAB_004b57a6;
        }
        if ((*(ushort *)(piVar36 + 7) & 0x4000) != 0) {
          FUN_004b6fa0(piVar36);
        }
        if ((*(ushort *)(piVar19 + 7) & 0x4000) != 0) {
          FUN_004b6fa0(piVar19);
        }
        uVar25 = FUN_004a0720((undefined8 *)piVar19,(undefined8 *)piVar36,
                              *(int *)(local_e0 + 0x10 + uVar39 * 0x14));
      }
      else {
        local_d0 = uVar42;
        if (-1 < (char)bVar12) {
          if ((bVar12 & 0x10) != 0) {
            piVar36 = (int *)(local_e4 + *(int *)(local_e0 + 8 + uVar39 * 0x14) * 0x28);
            *(ushort *)(piVar36 + 7) = *(ushort *)(piVar36 + 7) & 0xbe01 | 1;
            piVar18 = piVar33;
            piVar10 = piVar36;
            break;
          }
          bVar14 = (bVar12 & 8) == 0;
          piVar18 = local_e8;
          piVar36 = local_dc;
          goto LAB_004b07bb;
        }
        if ((((uVar3 & 1) == 0) || ((uVar31 & 1) == 0)) || ((uVar31 & 0x100) != 0)) {
          uVar25 = 1;
        }
        else {
          uVar25 = 0;
        }
      }
      switch(*(undefined1 *)(local_e0 + uVar39 * 0x14)) {
      case 0x4b:
        uVar25 = (uint)(uVar25 != 0);
        break;
      case 0x4c:
        uVar25 = (uint)(uVar25 == 0);
        break;
      case 0x4d:
        uVar25 = (uint)(0 < (int)uVar25);
        break;
      case 0x4e:
        uVar25 = (uint)((int)uVar25 < 1);
        break;
      case 0x4f:
        uVar25 = (uint)((int)uVar25 < 0);
        break;
      default:
        uVar25 = (uint)(-1 < (int)uVar25);
      }
      if ((*(byte *)(local_e0 + 3 + uVar39 * 0x14) & 0x10) == 0) {
        if (uVar25 != 0) {
          local_ec = *(int *)(local_e0 + 8 + uVar39 * 0x14) - 1;
        }
      }
      else {
        local_dc = (int *)(local_e4 + *(int *)(local_e0 + 8 + uVar39 * 0x14) * 0x28);
        *(ushort *)(local_dc + 7) = *(ushort *)(local_dc + 7) & 0xbe04 | 4;
        local_dc[4] = uVar25;
        local_dc[5] = 0;
      }
      *(ushort *)(piVar36 + 7) =
           *(ushort *)(piVar36 + 7) ^
           (*(ushort *)(piVar36 + 7) ^ (ushort)(local_d0 >> 0x30)) & 0x1ff;
      *(ushort *)(piVar19 + 7) =
           *(ushort *)(piVar19 + 7) ^ (*(ushort *)(piVar19 + 7) ^ (ushort)local_c8) & 0x1ff;
      puVar29 = local_d4;
      piVar18 = local_e8;
      piVar36 = local_dc;
      piVar10 = local_dc;
      uVar42 = CONCAT44((int)(local_d0 >> 0x20),uVar25);
      break;
    case 0x51:
    case 0x5c:
    case 0x5f:
      if (piVar18[0x38] != 0) goto LAB_004af4ee;
      puVar24 = *(undefined4 **)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4);
      local_d0 = CONCAT44(local_d0._4_4_,puVar24);
      uVar42 = local_d0;
      if (puVar24 != (undefined4 *)0x0) {
        if (puVar24[0x12] == 0) {
          local_d0 = CONCAT44(1,puVar24);
          local_d4 = (uint *)(**(code **)(local_e0 + 0x10 + uVar39 * 0x14))(*puVar24);
        }
        else {
          local_d4 = (uint *)FUN_004b8f40((int)piVar18,(int)puVar24,(uint *)((int)&local_d0 + 4));
        }
        *(undefined1 *)((int)(int *)local_d0 + 0x1c) = local_d0._4_1_;
        *(undefined4 *)((int)(int *)local_d0 + 0x50) = 0;
        if (local_d0._4_4_ == (uint *)0x0) {
          bVar12 = *(byte *)(local_e0 + 3 + uVar39 * 0x14);
          local_ec = *(int *)(local_e0 + 8 + uVar39 * 0x14) - 1;
          if (bVar12 != 0) {
            local_d8[bVar12 + 0x1c] = local_d8[bVar12 + 0x1c] + 1;
          }
        }
        *(undefined1 *)((int)(int *)local_d0 + 0x19) = 0;
        puVar29 = local_d4;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      break;
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
      iVar27 = local_e4 + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x28;
      iVar16 = local_e4 + *(int *)(local_e0 + 8 + uVar39 * 0x14) * 0x28;
      piVar36 = (int *)(local_e4 + *(int *)(local_e0 + 0xc + uVar39 * 0x14) * 0x28);
      local_dc = piVar36;
      if (((*(byte *)(iVar16 + 0x1c) | *(byte *)(iVar27 + 0x1c)) & 1) == 0) {
        local_d0 = FUN_004b65e0(iVar16);
        local_c0 = FUN_004b65e0(iVar27);
        uVar35 = (uint)(local_c0 >> 0x20);
        uVar25 = (uint)local_c0;
        cVar11 = *(char *)(local_e0 + uVar39 * 0x14);
        local_b8 = (double)CONCAT71(local_b8._1_7_,cVar11);
        if (cVar11 == 'R') {
          uVar39 = (uint)(int *)local_d0 & uVar25;
          local_d0 = CONCAT44((uint)local_d0._4_4_ & uVar35,uVar39);
        }
        else if (cVar11 == 'S') {
          uVar39 = (uint)(int *)local_d0 | uVar25;
          local_d0 = CONCAT44((uint)local_d0._4_4_ | uVar35,uVar39);
        }
        else {
          uVar39 = (uint)(int *)local_d0;
          if (local_c0 != 0) {
            if (uVar35 == 0 || (longlong)local_c0 < 0) {
              if ((longlong)local_c0 < 0) {
                cVar11 = -0x57 - cVar11;
                local_b8 = (double)CONCAT71(local_b8._1_7_,cVar11);
                if (((longlong)local_c0 < -0x100000000) ||
                   ((0x7fffffffffffffff < local_c0 && (uVar25 < 0xffffffc1)))) {
                  local_c0 = 0x40;
                  goto LAB_004b03ac;
                }
                local_c0 = CONCAT44(-(uVar35 + (uVar25 != 0)),-uVar25);
              }
              if ((longlong)local_c0 < 0x40) {
                if (cVar11 == 'T') {
                  local_d0 = local_d0 << (local_c0 & 0xffffffff);
                  local_c8._0_4_ = (int *)local_d0;
                  uVar39 = (uint)(int *)local_c8;
                  local_c8 = local_d0;
                }
                else {
                  local_c8 = local_d0 >> (local_c0 & 0xffffffff);
                  if (((int)local_d0._4_4_ < 1) && ((longlong)local_d0 < 0)) {
                    lVar41 = __allshl(0x40 - (char)local_c0,-1);
                    local_c8 = CONCAT44((uint)local_c8._4_4_ | (uint)((ulonglong)lVar41 >> 0x20),
                                        (uint)(int *)local_c8 | (uint)lVar41);
                  }
                  local_d0 = local_c8;
                  uVar39 = (uint)(int *)local_c8;
                }
                goto LAB_004b049d;
              }
            }
LAB_004b03ac:
            if ((((int)local_d0._4_4_ < 1) && ((longlong)local_d0 < 0)) && (cVar11 != 'T')) {
              local_d0 = 0xffffffffffffffff;
              uVar39 = 0xffffffff;
            }
            else {
              local_d0 = 0;
              uVar39 = 0;
            }
          }
        }
LAB_004b049d:
        local_dc[4] = uVar39;
        local_dc[5] = (int)local_d0._4_4_;
        *(ushort *)(local_dc + 7) = *(ushort *)(local_dc + 7) & 0xbe04 | 4;
        puVar29 = local_d4;
        piVar36 = local_dc;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      else {
        FUN_004b78c0((int)piVar36);
        puVar29 = local_d4;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      break;
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5a:
      iVar27 = local_e4 + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x28;
      FUN_0046dfa0(iVar27);
      iVar16 = uVar25 + *(int *)(local_e0 + 8 + uVar39 * 0x14) * 0x28;
      FUN_0046dfa0(iVar16);
      local_dc = (int *)(local_e4 + *(int *)(local_e0 + 0xc + uVar39 * 0x14) * 0x28);
      uVar3 = *(ushort *)(iVar27 + 0x1c) | *(ushort *)(iVar16 + 0x1c);
      uVar6 = CONCAT24(uVar3,(int *)local_d0);
      local_d0 = (ulonglong)uVar6;
      if ((uVar3 & 1) != 0) goto LAB_004b001a;
      local_d0._1_7_ = (uint7)(uint5)(uVar6 >> 8);
      if ((*(byte *)(iVar27 + 0x1c) & *(byte *)(iVar16 + 0x1c) & 4) == 0) {
        local_d0 = (ulonglong)local_d0._1_7_ << 8;
        goto LAB_004afe6d;
      }
      uVar25 = *(uint *)(iVar27 + 0x10);
      uVar35 = *(uint *)(iVar27 + 0x14);
      local_c8 = *(ulonglong *)(iVar27 + 0x10);
      uVar38 = *(uint *)(iVar16 + 0x10);
      local_f8 = (double)CONCAT44(uVar38,(undefined4)local_f8);
      local_108 = *(undefined4 **)(iVar16 + 0x14);
      local_c0 = *(ulonglong *)(iVar16 + 0x10);
      local_d0 = CONCAT71(local_d0._1_7_,1);
      switch(*(undefined1 *)(local_e0 + uVar39 * 0x14)) {
      case 0x56:
        iVar26 = FUN_0048bce0((uint *)&local_c0,uVar25,uVar35);
        if (iVar26 != 0) goto LAB_004afe6d;
        break;
      case 0x57:
        iVar26 = FUN_004aa9e0((uint *)&local_c0,uVar25,uVar35);
        goto joined_r0x004afda1;
      case 0x58:
        iVar26 = FUN_004a0bf0((uint *)&local_c0,uVar25,uVar35);
joined_r0x004afda1:
        if (iVar26 == 0) break;
LAB_004afe6d:
        fVar40 = FUN_004b8350(iVar27);
        local_b8 = (double)fVar40;
        fVar40 = FUN_004b8350(iVar16);
        local_b0 = (double)fVar40;
        switch(*(undefined1 *)(local_e0 + uVar39 * 0x14)) {
        case 0x56:
          local_b0 = local_b0 + local_b8;
          break;
        case 0x57:
          local_b0 = local_b0 - local_b8;
          break;
        case 0x58:
          local_b0 = local_b0 * local_b8;
          break;
        case 0x59:
          if (local_b8 != 0.0) {
            local_b0 = local_b0 / local_b8;
            break;
          }
          goto LAB_004b001a;
        default:
          uVar42 = FUN_0054a946();
          local_c8 = uVar42;
          local_c0 = FUN_0054a946();
          if (uVar42 == 0) goto LAB_004b001a;
          if (uVar42 == 0xffffffffffffffff) {
            uVar42 = 1;
            local_c8 = 1;
          }
          lVar41 = __allrem((uint)local_c0,(uint)(local_c0 >> 0x20),(uint)uVar42,
                            (uint)(uVar42 >> 0x20));
          local_b0 = (double)lVar41;
        }
        iVar27 = FUN_0049f810();
        piVar36 = local_dc;
        if (iVar27 == 0) {
          *(double *)(local_dc + 2) = local_b0;
          *(ushort *)(local_dc + 7) = *(ushort *)(local_dc + 7) & 0xbe08 | 8;
          puVar29 = local_d4;
          piVar18 = local_e8;
          piVar10 = local_dc;
          uVar42 = local_d0;
          if (((local_d0 & 0x800000000) == 0) && ((char)local_d0 == '\0')) {
            FUN_004b6650((int)local_dc);
            puVar29 = local_d4;
            piVar18 = local_e8;
            piVar10 = local_dc;
            uVar42 = local_d0;
          }
        }
        else {
LAB_004b001a:
          piVar36 = local_dc;
          FUN_004b78c0((int)local_dc);
          puVar29 = local_d4;
          piVar18 = local_e8;
          piVar10 = local_dc;
          uVar42 = local_d0;
        }
        goto LAB_004b0d11;
      case 0x59:
        if (uVar25 != 0 || uVar35 != 0) {
          if ((((uVar25 & uVar35) == 0xffffffff) && (uVar38 == 0)) &&
             (local_108 == (undefined4 *)0x80000000)) goto LAB_004afe6d;
          local_c0 = __alldiv(uVar38,(uint)local_108,uVar25,uVar35);
          break;
        }
        goto LAB_004b001a;
      default:
        if (uVar25 == 0 && uVar35 == 0) goto LAB_004b001a;
        if ((uVar25 & uVar35) == 0xffffffff) {
          uVar25 = 1;
          uVar35 = 0;
          local_c8 = 1;
        }
        local_c0 = __allrem(uVar38,(uint)local_108,uVar25,uVar35);
      }
      local_dc[4] = (int)(int *)local_c0;
      local_dc[5] = (int)local_c0._4_4_;
      *(ushort *)(local_dc + 7) = *(ushort *)(local_dc + 7) & 0xbe04 | 4;
      puVar29 = local_d4;
      piVar18 = local_e8;
      piVar36 = local_dc;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x5b:
      piVar33 = (int *)(local_e4 + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x28);
      piVar19 = (int *)(local_e4 + *(int *)(local_e0 + 8 + uVar39 * 0x14) * 0x28);
      piVar36 = (int *)(local_e4 + *(int *)(local_e0 + 0xc + uVar39 * 0x14) * 0x28);
      local_dc = piVar36;
      if (((*(byte *)(piVar19 + 7) | (byte)*(ushort *)(piVar33 + 7)) & 1) == 0) {
        if ((((((*(ushort *)(piVar33 + 7) & 0x4000) != 0) &&
              (iVar27 = FUN_004b6fa0(piVar33), piVar18 = local_e8, iVar27 != 0)) ||
             (((*(ushort *)(piVar19 + 7) & 0x4000) != 0 &&
              (iVar27 = FUN_004b6fa0(piVar19), piVar18 = local_e8, iVar27 != 0)))) ||
            (((*(byte *)(piVar33 + 7) & 0x12) == 0 &&
             (iVar27 = FUN_004b7cf0(piVar33,local_f0 & 0xff), piVar18 = local_e8, iVar27 != 0)))) ||
           (((*(byte *)(piVar19 + 7) & 0x12) == 0 &&
            (iVar27 = FUN_004b7cf0(piVar19,local_f0 & 0xff), piVar18 = local_e8, iVar27 != 0))))
        goto LAB_004b57a6;
        piVar36 = local_dc;
        uVar39 = piVar33[6] + piVar19[6];
        local_d0 = (ulonglong)(int)uVar39;
        iVar27 = local_e8[0x14] >> 0x1f;
        piVar18 = local_e8;
        if ((iVar27 < (int)uVar39 >> 0x1f) ||
           ((iVar27 <= (int)uVar39 >> 0x1f && ((uint)local_e8[0x14] < uVar39)))) goto LAB_004b5780;
        *(ushort *)(local_dc + 7) = *(ushort *)(local_dc + 7) & 0xbe02 | 2;
        iVar27 = FUN_004b7260(local_dc,uVar39 + 2,(uint)(local_dc == piVar19));
        piVar18 = local_e8;
        if (iVar27 != 0) goto LAB_004b57a6;
        if (piVar36 != piVar19) {
          memcpy((void *)piVar36[1],(void *)piVar19[1],piVar19[6]);
        }
        memcpy((void *)(piVar36[1] + piVar19[6]),(void *)piVar33[1],piVar33[6]);
        *(undefined1 *)((int)(int *)local_d0 + piVar36[1]) = 0;
        *(undefined1 *)(piVar36[1] + 1 + (int)(int *)local_d0) = 0;
        *(ushort *)(piVar36 + 7) = *(ushort *)(piVar36 + 7) | 0x200;
        piVar36[6] = (int)(int *)local_d0;
        *(char *)((int)piVar36 + 0x1f) = (char)local_f0;
        puVar29 = local_d4;
        piVar18 = local_e8;
        piVar36 = local_dc;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      else {
        FUN_004b78c0((int)piVar36);
        puVar29 = local_d4;
        piVar18 = local_e8;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      break;
    case 0x5d:
      iVar27 = *(int *)(local_e0 + 4 + uVar39 * 0x14);
      piVar36 = (int *)(local_e4 + *(int *)(local_e0 + 8 + uVar39 * 0x14) * 0x28);
      local_dc = piVar36;
      if ((*(byte *)(local_e4 + 0x1c + iVar27 * 0x28) & 1) == 0) {
        uVar42 = FUN_004b65e0(local_e4 + iVar27 * 0x28);
        FUN_004b7860(piVar36,~(uint)uVar42,~(uint)(uVar42 >> 0x20));
        puVar29 = local_d4;
        piVar36 = local_dc;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      else {
        FUN_004b78c0((int)piVar36);
        puVar29 = local_d4;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      break;
    case 0x5e:
      *(undefined1 *)(local_e0 + uVar39 * 0x14) = 9;
      uVar25 = FUN_004aa9b0(*(char **)(local_e0 + 0x10 + uVar39 * 0x14));
      *(uint *)(local_e0 + 4 + uVar39 * 0x14) = uVar25;
      if ((char)local_f0 != '\x01') {
        local_d4 = (uint *)FUN_004b79e0(piVar36,extraout_EDX,0xffffffff,'\x01',(undefined *)0x0);
        if (local_d4 == (uint *)0x12) goto LAB_004b5780;
        iVar27 = FUN_004aec30(piVar36,local_f0 & 0xff);
        if (iVar27 != 0) goto LAB_004b57a6;
        piVar36[9] = 0;
        *(ushort *)(piVar36 + 7) = *(ushort *)(piVar36 + 7) & 0xfbff | 0x800;
        if (*(char *)(local_e0 + 1 + uVar39 * 0x14) == -1) {
          FUN_00494b00((int)piVar18,*(undefined4 **)(local_e0 + 0x10 + uVar39 * 0x14));
        }
        *(undefined1 *)(local_e0 + 1 + uVar39 * 0x14) = 0xff;
        *(int *)(local_e0 + 0x10 + uVar39 * 0x14) = piVar36[1];
        *(int *)(local_e0 + 4 + uVar39 * 0x14) = piVar36[6];
      }
      if (piVar18[0x14] < *(int *)(local_e0 + 4 + uVar39 * 0x14)) goto LAB_004b5780;
switchD_004af4da_caseD_9:
      *(undefined2 *)(piVar36 + 7) = 0xa02;
      piVar36[1] = *(int *)(local_e0 + 0x10 + uVar39 * 0x14);
      piVar36[6] = *(int *)(local_e0 + 4 + uVar39 * 0x14);
      *(char *)((int)piVar36 + 0x1f) = (char)local_f0;
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x60:
    case 0x61:
      piVar32 = *(int **)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4);
      puVar34 = (uint *)*piVar32;
      local_d0 = CONCAT44(puVar34,piVar32);
      piVar2 = (int *)(local_e4 + *(int *)(local_e0 + 8 + uVar39 * 0x14) * 0x28);
      piVar18 = piVar33;
      piVar36 = piVar19;
      uVar42 = local_d0;
      if (puVar34 != (uint *)0x0) {
        if ((*(ushort *)(piVar2 + 7) & 0x4000) != 0) {
          local_d4 = (uint *)FUN_004b6fa0(piVar2);
          puVar29 = local_d4;
          piVar18 = local_e8;
          piVar36 = local_dc;
          piVar10 = local_dc;
          uVar42 = local_d0;
          if (local_d4 != (uint *)0x0) break;
          piVar32 = (int *)local_d0;
          puVar34 = local_d0._4_4_;
        }
        piVar18 = local_e8;
        if (piVar32[0x12] == 0) {
          uVar25 = piVar2[6];
          local_c8 = CONCAT44((byte *)piVar2[1],uVar25);
          if ((*(byte *)(local_e0 + 3 + uVar39 * 0x14) & 0x10) == 0) {
            puVar29 = (uint *)0x0;
          }
          else {
            puVar29 = (uint *)piVar32[0x13];
          }
          local_d4 = FUN_0048ffe0(puVar34,(byte *)piVar2[1],uVar25,(int)uVar25 >> 0x1f,&DAT_0055b524
                                  ,0,0,*(int *)(local_e0 + 0xc + uVar39 * 0x14),puVar29);
          *(undefined4 *)((int)(int *)local_d0 + 0x50) = 0;
          puVar29 = local_d4;
          piVar18 = local_e8;
          piVar36 = local_dc;
          piVar10 = local_dc;
          uVar42 = local_d0;
        }
        else {
          local_d4 = (uint *)FUN_004b9360(local_e8,(int)piVar32,(int)piVar2);
          puVar29 = local_d4;
          piVar36 = local_dc;
          piVar10 = local_dc;
          uVar42 = local_d0;
        }
      }
      break;
    case 0x62:
      puVar24 = *(undefined4 **)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4);
      piVar33 = (int *)*puVar24;
      local_d0 = CONCAT44(piVar33,puVar24);
      uVar42 = local_d0;
      if (piVar33 != (int *)0x0) {
        local_c0._0_6_ = CONCAT24(*(undefined2 *)(local_e0 + 0xc + uVar39 * 0x14),puVar24[2]);
        local_c0._0_7_ = (uint7)(uint6)local_c0;
        local_b0 = (double)CONCAT44(local_b0._4_4_,
                                    local_e4 + *(int *)(local_e0 + 8 + uVar39 * 0x14) * 0x28);
        local_d4 = (uint *)FUN_004908e0(piVar33,(int *)&local_c0,0,0,0,(uint *)&local_c8);
        if ((local_d4 == (uint *)0x0) && ((int *)local_c8 == (int *)0x0)) {
          local_d4 = (uint *)FUN_0048f930((uint *)(local_d0 >> 0x20));
        }
        *(undefined4 *)((int)(int *)local_d0 + 0x50) = 0;
        puVar29 = local_d4;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      break;
    case 99:
      piVar33 = *(int **)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4);
      iVar27 = *piVar33;
      local_d0 = CONCAT44(piVar33,iVar27);
      *(undefined2 *)(local_dc + 7) = 1;
      piVar36 = piVar19;
      uVar42 = local_d0;
      if (iVar27 != 0) {
        local_d4 = (uint *)FUN_004af1b0(piVar33);
        if (local_d4 != (uint *)0x0) goto LAB_004b572c;
        puVar29 = local_d4;
        piVar36 = local_dc;
        piVar10 = local_dc;
        uVar42 = local_d0;
        if (*(char *)((int)local_d0._4_4_ + 0x1c) == '\0') {
          local_d4 = (uint *)FUN_004b6480(piVar18,(int *)local_d0,(undefined4 *)&local_c8);
          if (local_d4 != (uint *)0x0) goto LAB_004b572c;
          piVar19[4] = (int)(int *)local_c8;
          piVar19[5] = (int)local_c8._4_4_;
          *(undefined2 *)(piVar19 + 7) = 4;
          puVar29 = local_d4;
          piVar36 = piVar19;
          piVar10 = local_dc;
          uVar42 = local_d0;
        }
      }
      break;
    case 100:
    case 0x65:
      piVar33 = *(int **)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4);
      local_d0 = CONCAT44(local_d0._4_4_,piVar33);
      uVar42 = local_d0;
      if (*piVar33 != 0) {
        local_c8._0_6_ = CONCAT24(*(undefined2 *)(local_e0 + 0x10 + uVar39 * 0x14),piVar33[2]);
        local_c8._7_1_ = SUB81(uVar7,7);
        local_c8._0_7_ =
             CONCAT16((*(char *)(local_e0 + 3 + uVar39 * 0x14) != '\0') + '\x02',
                      (undefined6)local_c8);
        local_b8 = (double)CONCAT44(uVar9,local_e4 + *(int *)(local_e0 + 0xc + uVar39 * 0x14) * 0x28
                                   );
        local_d4 = (uint *)FUN_004b63c0(piVar33,(int *)&local_c8,(uint *)((int)&local_d0 + 4));
        if (*(char *)(local_e0 + uVar39 * 0x14) == 'd') {
          iVar27 = -(int)local_d0._4_4_;
        }
        else {
          iVar27 = (int)local_d0._4_4_ + 1;
        }
        local_d0 = CONCAT44(iVar27,(int *)local_d0);
        puVar29 = local_d4;
        piVar10 = local_dc;
        uVar42 = local_d0;
        if (0 < iVar27) {
          iVar27 = *(int *)(local_e0 + 8 + uVar39 * 0x14);
          goto LAB_004b0d04;
        }
      }
      break;
    case 0x66:
      iVar16 = 0;
      local_d0 = local_d0 & 0xffffffff;
      iVar27 = piVar18[1];
      local_c8 = CONCAT44(uVar8,iVar27);
      uVar42 = local_d0;
      while (local_d0 = uVar42, iVar27 != 0) {
        if (((*(int *)(iVar27 + 0x30) == -0x420df25d) &&
            (((byte)*(undefined4 *)(iVar27 + 0x60) & 0xc) < 8)) && (-1 < *(int *)(iVar27 + 0x54))) {
          iVar16 = iVar16 + 1;
          local_d0._0_4_ = (int *)uVar42;
          local_d0 = CONCAT44(iVar16,(int *)local_d0);
        }
        iVar27 = *(int *)(iVar27 + 0x3c);
        local_c8._4_4_ = (int *)(local_c8 >> 0x20);
        local_c8 = CONCAT44(local_c8._4_4_,iVar27);
        uVar42 = local_d0;
      }
      *(undefined2 *)(piVar36 + 7) = 1;
      local_d0._4_4_ = (uint *)(uVar42 >> 0x20);
      if ((int)local_d0._4_4_ < 2) {
        iVar27 = *(int *)(local_e0 + 0xc + uVar39 * 0x14);
        local_c8 = CONCAT44(iVar27,(int *)local_c8);
        local_d4 = (uint *)FUN_0048fb70(*(undefined4 **)(piVar18[4] + 4 + iVar27 * 0x10),
                                        *(char **)(local_e0 + 4 + uVar39 * 0x14),(uint *)&local_d0);
        *(undefined2 *)(piVar36 + 7) = 4;
        piVar36[4] = (int)(int *)local_d0;
        piVar36[5] = (int)(int *)local_d0 >> 0x1f;
        puVar29 = local_d4;
        piVar10 = local_dc;
        uVar42 = local_d0;
        if ((local_d4 == (uint *)0x0) && ((int *)local_d0 != (int *)0x0)) {
          FUN_004a6dc0((int)piVar18,(int)(local_c8 >> 0x20),(int)(int *)local_d0,
                       *(undefined4 *)(local_e0 + 4 + uVar39 * 0x14));
          local_f9 = local_c8._4_1_ + 1;
          puVar29 = local_d4;
          piVar10 = local_dc;
          uVar42 = local_d0;
        }
      }
      else {
        local_d4 = (uint *)0x6;
        *(undefined1 *)(local_d8 + 0x17) = 2;
        puVar29 = (uint *)0x6;
      }
      break;
    case 0x67:
      local_d0 = ZEXT48(local_d0._4_4_) << 0x20;
      piVar33 = (int *)&local_d0;
      if (*(int *)(local_e0 + 0xc + uVar39 * 0x14) == 0) {
        piVar33 = (int *)0x0;
      }
      local_d4 = (uint *)FUN_0048eff0(*(undefined4 **)
                                       (piVar18[4] + 4 +
                                       *(int *)(local_e0 + 8 + uVar39 * 0x14) * 0x10),
                                      *(uint *)(local_e0 + 4 + uVar39 * 0x14),piVar33);
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      if (*(int *)(local_e0 + 0xc + uVar39 * 0x14) != 0) {
        local_d8[0x19] = local_d8[0x19] + (int)(int *)local_d0;
        iVar27 = *(int *)(local_e0 + 0xc + uVar39 * 0x14);
        if (0 < iVar27) {
          puVar34 = (uint *)(local_e4 + 0x10 + iVar27 * 0x28);
          uVar39 = *puVar34;
          *puVar34 = *puVar34 + (int)(int *)local_d0;
          piVar33 = (int *)(local_e4 + 0x14 + iVar27 * 0x28);
          *piVar33 = *piVar33 + ((int)(int *)local_d0 >> 0x1f) +
                     (uint)CARRY4(uVar39,(uint)(int *)local_d0);
        }
      }
      break;
    case 0x68:
    case 0x69:
      iVar27 = *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x10 + piVar18[4];
      local_c8 = CONCAT44(uVar8,iVar27);
      uVar39 = (*(char *)(local_e0 + uVar39 * 0x14) != 'i') + 1;
      local_d0 = (ulonglong)uVar39 << 0x20;
      local_d4 = (uint *)FUN_0048f740(*(undefined4 **)(iVar27 + 4),(undefined4 *)&local_d0,
                                      (byte)uVar39);
      piVar36[4] = (int)(int *)local_d0;
      piVar36[5] = (int)(int *)local_d0 >> 0x1f;
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x6a:
      iVar27 = *(int *)(local_e0 + 4 + uVar39 * 0x14);
      pcVar23 = "sqlite_temp_master";
      if (iVar27 != 1) {
        pcVar23 = "sqlite_master";
      }
      local_d0 = CONCAT44(pcVar23,iVar27);
      local_c0 = CONCAT44(*(undefined4 *)(local_e0 + 4 + uVar39 * 0x14),local_d8 + 0xd);
      local_c8._4_4_ = piVar18;
      pbVar21 = (byte *)FUN_004a02d0((int)piVar18,
                                     (byte *)
                                     "SELECT name, rootpage, sql FROM \'%q\'.%s WHERE %s ORDER BY rowid"
                                    );
      local_c8 = CONCAT44(local_c8._4_4_,pbVar21);
      if (pbVar21 == (byte *)0x0) {
        local_d4 = (uint *)0x7;
LAB_004b3e54:
        FUN_004a6940((int)piVar18);
      }
      else {
        *(undefined1 *)((int)piVar18 + 0x81) = 1;
        local_b8 = (double)((ulonglong)local_b8 & 0xffffffff00000000);
        local_d4 = (uint *)FUN_00463120((int)piVar18,pbVar21,FUN_0049de90,(int)&local_c8 + 4,
                                        (int *)0x0);
        if (local_d4 == (uint *)0x0) {
          local_d4 = (uint *)local_b8;
        }
        FUN_00494b00((int)piVar18,(int *)local_c8);
        *(undefined1 *)((int)piVar18 + 0x81) = 0;
        if (local_d4 != (uint *)0x0) goto LAB_004b3e54;
      }
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      if (local_d4 == (uint *)0x7) goto LAB_004b57a6;
      break;
    case 0x6b:
      local_d4 = (uint *)FUN_0048c830((int)piVar18,*(int *)(local_e0 + 4 + uVar39 * 0x14));
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x6c:
      FUN_004ab2d0((int)piVar18,*(uint *)(local_e0 + 4 + uVar39 * 0x14),
                   *(byte **)(local_e0 + 0x10 + uVar39 * 0x14));
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x6d:
      FUN_004ab1f0((int)piVar18,*(uint *)(local_e0 + 4 + uVar39 * 0x14),
                   *(byte **)(local_e0 + 0x10 + uVar39 * 0x14));
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x6e:
      FUN_004ab380((int)piVar18,*(uint *)(local_e0 + 4 + uVar39 * 0x14),
                   *(byte **)(local_e0 + 0x10 + uVar39 * 0x14));
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x6f:
      iVar27 = *(int *)(local_e0 + 8 + uVar39 * 0x14);
      local_d0 = CONCAT44(local_d0._4_4_,iVar27);
      puVar24 = FUN_00494b90((int)piVar18,iVar27 * 4 + 4);
      local_d0 = CONCAT44(puVar24,(int *)local_d0);
      if (puVar24 == (undefined4 *)0x0) goto LAB_004b57a6;
      iVar27 = local_e4 + *(int *)(local_e0 + 0xc + uVar39 * 0x14) * 0x28;
      piVar36 = (int *)(local_e4 + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x28);
      iVar16 = 0;
      local_c8 = local_c8 & 0xffffffff00000000;
      local_c0._4_4_ = (undefined4 *)iVar27;
      if (0 < (int)(int *)local_d0) {
        do {
          uVar42 = FUN_004b65e0((int)(piVar36 + iVar16 * 10));
          local_d0._4_4_[(int)(int *)local_c8] = (int)uVar42;
          iVar16 = (int)(int *)local_c8 + 1;
          local_c8 = CONCAT44(local_c8._4_4_,iVar16);
          puVar24 = local_d0._4_4_;
        } while (iVar16 < (int)(int *)local_d0);
      }
      puVar24[iVar16] = 0;
      uVar28 = FUN_004901e0(*(undefined4 **)
                             (piVar18[4] + 4 + (uint)*(byte *)(local_e0 + 3 + uVar39 * 0x14) * 0x10)
                            ,(int)local_d0._4_4_,(int)local_d0,*(int *)((int)local_c0._4_4_ + 0x10),
                            (int *)((int)&local_c8 + 4));
      local_c0 = CONCAT44(local_c0._4_4_,uVar28);
      FUN_00494b00((int)piVar18,local_d0._4_4_);
      puVar29 = (uint *)((int)local_c0._4_4_ + 0x10);
      uVar39 = *puVar29;
      *puVar29 = *puVar29 - (int)local_c8._4_4_;
      *(int *)((int)local_c0._4_4_ + 0x14) =
           (*(int *)((int)local_c0._4_4_ + 0x14) - ((int)local_c8._4_4_ >> 0x1f)) -
           (uint)(uVar39 < local_c8._4_4_);
      FUN_004b78c0((int)piVar36);
      if (local_c8._4_4_ != (int *)0x0) {
        if ((int *)local_c0 == (void *)0x0) goto LAB_004b57a6;
        FUN_004b79e0(piVar36,(int *)local_c0,0xffffffff,'\x01',FUN_00466dd0);
      }
      FUN_004aec30(piVar36,local_f0 & 0xff);
      puVar29 = local_d4;
      piVar36 = local_dc;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x70:
      iVar27 = *(int *)(local_e0 + 4 + uVar39 * 0x14);
      piVar36 = (int *)(local_e4 + iVar27 * 0x28);
      iVar16 = *(int *)(local_e0 + 8 + uVar39 * 0x14);
      if (((*(byte *)(local_e4 + 0x1c + iVar27 * 0x28) & 0x20) == 0) &&
         (FUN_004b7910(piVar36), (*(byte *)(piVar36 + 7) & 0x20) == 0)) goto LAB_004b57a6;
      FUN_004a6ed0((undefined4 *)piVar36[4],*(uint *)(local_e4 + 0x10 + iVar16 * 0x28),
                   *(uint *)(local_e4 + 0x14 + iVar16 * 0x28));
      puVar29 = local_d4;
      piVar36 = local_dc;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x71:
      if (piVar18[0x38] != 0) goto LAB_004af4ee;
      iVar16 = *(int *)(local_e0 + 4 + uVar39 * 0x14);
      iVar27 = local_e4 + iVar16 * 0x28;
      if (((*(byte *)(local_e4 + 0x1c + iVar16 * 0x28) & 0x20) == 0) ||
         (iVar16 = FUN_004a6f70(*(undefined4 **)(iVar27 + 0x10),(undefined4 *)&local_d0),
         iVar16 == 0)) {
        FUN_004b78c0(iVar27);
        iVar27 = *(int *)(local_e0 + 8 + uVar39 * 0x14);
        piVar36 = local_dc;
        goto LAB_004b0d04;
      }
      FUN_004b7860((int *)(local_e4 + *(int *)(local_e0 + 0xc + uVar39 * 0x14) * 0x28),
                   (int)(int *)local_d0,(int)(local_d0 >> 0x20));
      puVar29 = local_d4;
      piVar36 = local_dc;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x72:
      piVar33 = (int *)(local_e4 + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x28);
      iVar27 = *(int *)(local_e0 + 0xc + uVar39 * 0x14);
      uVar25 = *(uint *)(local_e0 + 0x10 + uVar39 * 0x14);
      local_d0 = CONCAT44(local_d0._4_4_,uVar25);
      if ((*(byte *)(piVar33 + 7) & 0x20) == 0) {
        FUN_004b7910(piVar33);
        piVar18 = local_e8;
        if ((*(byte *)(piVar33 + 7) & 0x20) == 0) goto LAB_004b57a6;
        uVar25 = (uint)(int *)local_d0;
      }
      bVar14 = (int)uVar25 < 0;
      if (uVar25 != 0) {
        if (bVar14) {
          bVar12 = 0xff;
        }
        else {
          bVar12 = (byte)uVar25 & 0xf;
        }
        iVar16 = FUN_004a6fd0((undefined4 *)piVar33[4],bVar12,
                              *(uint *)(local_e4 + 0x10 + iVar27 * 0x28),
                              *(int *)(local_e4 + 0x14 + iVar27 * 0x28));
        local_d0 = CONCAT44(iVar16,(int *)local_d0);
        if (iVar16 != 0) goto LAB_004b4170;
        bVar14 = (int)(int *)local_d0 < 0;
      }
      puVar29 = local_d4;
      piVar18 = local_e8;
      piVar36 = local_dc;
      piVar10 = local_dc;
      uVar42 = local_d0;
      if (!bVar14) {
        FUN_004a6ed0((undefined4 *)piVar33[4],*(uint *)(local_e4 + 0x10 + iVar27 * 0x28),
                     *(uint *)(local_e4 + 0x14 + iVar27 * 0x28));
        puVar29 = local_d4;
        piVar18 = local_e8;
        piVar36 = local_dc;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      break;
    case 0x73:
      iVar16 = *(int *)(local_e0 + 0x10 + uVar39 * 0x14);
      local_b8 = (double)CONCAT44(uVar9,iVar16);
      iVar27 = local_e4 + *(int *)(local_e0 + 0xc + uVar39 * 0x14) * 0x28;
      local_c8 = CONCAT44(uVar8,iVar27);
      if (*(char *)(local_e0 + 3 + uVar39 * 0x14) != '\0') {
        uVar39 = local_d8[0x28];
        local_b8 = (double)CONCAT44(*(int *)(iVar16 + 0x14),iVar16);
        local_c0 = CONCAT44(uVar39,(int *)local_c0);
        while (uVar39 != 0) {
          piVar36 = piVar19;
          if (*(int *)(uVar39 + 0x18) == *(int *)(iVar16 + 0x14)) goto LAB_004b0d11;
          uVar39 = *(uint *)(uVar39 + 4);
          local_c0 = CONCAT44(uVar39,(int *)local_c0);
        }
      }
      if ((int)local_d8[0x2a] < piVar18[0x1e]) {
        if ((*(byte *)(iVar27 + 0x1c) & 0x40) == 0) {
          iVar27 = *(int *)(iVar16 + 8) + *(int *)(iVar16 + 0xc);
          sVar22 = *(int *)(iVar16 + 0x10) + (*(int *)(iVar16 + 0xc) + iVar27 * 10) * 4 + 0x48;
          local_d0 = CONCAT44(sVar22,iVar27);
          puVar24 = FUN_00494c20((int)piVar18,sVar22);
          local_c0 = CONCAT44(puVar24,(int *)local_c0);
          if (puVar24 == (undefined4 *)0x0) goto LAB_004b57a6;
          FUN_004b76e0((int *)local_c8);
          *(undefined2 *)((int)(int *)local_c8 + 0x1c) = 0x40;
          *(undefined4 **)((int)(int *)local_c8 + 0x10) = local_c0._4_4_;
          *local_c0._4_4_ = local_d8;
          local_c0._4_4_[0xf] = (int *)local_d0;
          local_c0._4_4_[0x10] = *(undefined4 *)((int)(uint *)local_b8 + 0xc);
          local_c0._4_4_[0xb] = local_ec;
          local_c0._4_4_[3] = local_d8[2];
          local_c0._4_4_[0xd] = local_d8[6];
          local_c0._4_4_[5] = local_d8[0x10];
          *(undefined2 *)(local_c0._4_4_ + 10) = *(undefined2 *)((int)local_d8 + 0x2e);
          local_c0._4_4_[2] = local_d8[1];
          local_c0._4_4_[0xc] = local_d8[7];
          local_c0._4_4_[6] = *(undefined4 *)((int)(uint *)local_b8 + 0x14);
          local_c0._4_4_[4] = local_d8[0x2e];
          local_c0._4_4_[0xe] = local_d8[0x2d];
          iVar27 = local_c0._4_4_[0xf];
          puVar17 = local_c0._4_4_ + 0x12;
          local_c8 = CONCAT44(puVar17,(int *)local_c8);
          local_c0 = CONCAT44(local_c0._4_4_,local_c0._4_4_ + (iVar27 * 5 + 9) * 2);
          uVar42 = local_c8;
          while (puVar24 = local_c0._4_4_, local_c8 = uVar42,
                puVar17 != local_c0._4_4_ + (iVar27 * 5 + 9) * 2) {
            *(undefined2 *)(puVar17 + 7) = 0x80;
            local_c8._4_4_ = (int *)(uVar42 >> 0x20);
            *local_c8._4_4_ = (int)piVar18;
            puVar17 = local_c8._4_4_ + 10;
            local_c8._0_4_ = (int *)uVar42;
            local_c8 = CONCAT44(puVar17,(int *)local_c8);
            uVar42 = local_c8;
          }
        }
        else {
          puVar24 = *(undefined4 **)(iVar27 + 0x10);
          local_c0 = CONCAT44(puVar24,(int *)local_c0);
        }
        local_d8[0x2a] = local_d8[0x2a] + 1;
        puVar24[1] = local_d8[0x28];
        *(uint *)((int)local_c0._4_4_ + 0x20) = local_104;
        *(uint *)((int)local_c0._4_4_ + 0x24) = local_100;
        *(uint *)((int)local_c0._4_4_ + 0x44) = local_d8[0x19];
        local_d8[0x28] = (uint)local_c0._4_4_;
        local_e4 = (int)local_c0._4_4_ + 0x20;
        local_d8[0x19] = 0;
        local_d8[2] = local_e4;
        local_d8[6] = *(uint *)((int)local_c0._4_4_ + 0x3c);
        *(undefined2 *)((int)local_d8 + 0x2e) = *(undefined2 *)((int)local_c0._4_4_ + 0x40);
        uVar39 = local_e4 + (local_d8[6] + 1) * 0x28;
        local_d8[0x10] = uVar39;
        local_e0 = *(uint *)local_b8;
        local_d8[1] = local_e0;
        local_d8[7] = ((uint *)local_b8)[1];
        _Dst = (void *)(uVar39 + (uint)*(ushort *)((int)local_d8 + 0x2e) * 4);
        local_d8[0x2e] = (uint)_Dst;
        sVar22 = ((uint *)local_b8)[4];
        local_d8[0x2d] = sVar22;
        local_ec = 0xffffffff;
        memset(_Dst,0,sVar22);
        puVar29 = local_d4;
        piVar36 = local_dc;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      else {
        local_d4 = (uint *)0x1;
        FUN_004a9a30((int *)(local_d8 + 0xd),(int)piVar18,
                     (byte *)"too many levels of trigger recursion");
        puVar29 = (uint *)0x1;
        piVar36 = local_dc;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      break;
    case 0x74:
      uVar25 = local_d8[0x28];
      puVar37 = (undefined8 *)
                (*(int *)(uVar25 + 0xc) +
                (*(int *)(*(int *)(uVar25 + 8) + 4 + *(int *)(uVar25 + 0x2c) * 0x14) +
                *(int *)(local_e0 + 4 + uVar39 * 0x14)) * 0x28);
      local_d0 = CONCAT44(puVar37,uVar25);
      FUN_004b7c40(piVar36,puVar37,0x1000);
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x75:
      uVar25 = *(uint *)(local_e0 + 8 + uVar39 * 0x14);
      if (*(int *)(local_e0 + 4 + uVar39 * 0x14) == 0) {
        puVar34 = local_d8 + 0x22;
        uVar39 = *puVar34;
        *puVar34 = *puVar34 + uVar25;
        local_d8[0x23] = local_d8[0x23] + ((int)uVar25 >> 0x1f) + (uint)CARRY4(uVar39,uVar25);
      }
      else {
        puVar34 = (uint *)(piVar18 + 0x7a);
        uVar39 = *puVar34;
        *puVar34 = *puVar34 + uVar25;
        piVar18[0x7b] = piVar18[0x7b] + ((int)uVar25 >> 0x1f) + (uint)CARRY4(uVar39,uVar25);
      }
      break;
    case 0x76:
      if (*(int *)(local_e0 + 4 + uVar39 * 0x14) == 0) {
        bVar14 = local_d8[0x22] == 0 && local_d8[0x23] == 0;
      }
      else {
        bVar14 = piVar18[0x7a] == 0 && piVar18[0x7b] == 0;
      }
LAB_004b0cfe:
      if (!bVar14) break;
LAB_004b0d00:
      iVar27 = *(int *)(local_e0 + 8 + uVar39 * 0x14);
      goto LAB_004b0d04;
    case 0x77:
      uVar25 = local_d8[0x28];
      if (uVar25 == 0) {
        iVar27 = local_e4 + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x28;
      }
      else {
        for (uVar35 = *(uint *)(uVar25 + 4); uVar35 != 0; uVar35 = *(uint *)(uVar35 + 4)) {
          uVar25 = uVar35;
        }
        local_d0 = (ulonglong)uVar25 << 0x20;
        iVar27 = *(int *)(uVar25 + 0xc) + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x28;
      }
      local_d0 = CONCAT44(local_d0._4_4_,iVar27);
      FUN_004b7410(iVar27);
      iVar27 = local_e4 + *(int *)(local_e0 + 8 + uVar39 * 0x14) * 0x28;
      FUN_004b7410(iVar27);
      iVar16 = *(int *)(iVar27 + 0x14);
      puVar29 = local_d4;
      piVar36 = local_dc;
      piVar10 = local_dc;
      uVar42 = local_d0;
      if ((*(int *)((int)(int *)local_d0 + 0x14) <= iVar16) &&
         ((*(int *)((int)(int *)local_d0 + 0x14) < iVar16 ||
          (*(uint *)((int)(int *)local_d0 + 0x10) < *(uint *)(iVar27 + 0x10))))) {
        *(uint *)((int)(int *)local_d0 + 0x10) = *(uint *)(iVar27 + 0x10);
        *(int *)((int)(int *)local_d0 + 0x14) = iVar16;
      }
      break;
    case 0x78:
      iVar27 = *(int *)(local_e0 + 4 + uVar39 * 0x14);
      iVar16 = *(int *)(local_e4 + 0x14 + iVar27 * 0x28);
      if (-1 < iVar16) {
        if (iVar16 < 1) {
          uVar25 = *(uint *)(local_e4 + 0x10 + iVar27 * 0x28);
          goto joined_r0x004b4649;
        }
        goto LAB_004b0d00;
      }
      break;
    case 0x79:
      iVar27 = *(int *)(local_e4 + 0x14 + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x28);
      if ((iVar27 < 1) && (iVar27 < 0)) goto LAB_004b0d00;
      break;
    case 0x7a:
      iVar27 = *(int *)(local_e0 + 4 + uVar39 * 0x14);
      uVar35 = *(uint *)(local_e0 + 0xc + uVar39 * 0x14);
      puVar34 = (uint *)(local_e4 + 0x10 + iVar27 * 0x28);
      uVar25 = *puVar34;
      *puVar34 = *puVar34 + uVar35;
      piVar18 = (int *)(local_e4 + 0x14 + iVar27 * 0x28);
      *piVar18 = *piVar18 + ((int)uVar35 >> 0x1f) + (uint)CARRY4(uVar25,uVar35);
      piVar18 = piVar33;
      if (*(int *)(local_e4 + 0x10 + iVar27 * 0x28) == 0 &&
          *(int *)(local_e4 + 0x14 + iVar27 * 0x28) == 0) {
        iVar27 = *(int *)(local_e0 + 8 + uVar39 * 0x14);
        piVar18 = local_e8;
        goto LAB_004b0d04;
      }
      break;
    case 0x7b:
      uVar35 = (uint)*(byte *)(local_e0 + 3 + uVar39 * 0x14);
      local_c8._4_4_ = (int *)(local_e4 + *(int *)(local_e0 + 8 + uVar39 * 0x14) * 0x28);
      uVar25 = local_d8[3];
      iVar27 = 0;
      local_80 = CONCAT44(local_80._4_4_,uVar25);
      local_d0 = (ulonglong)uVar35;
      if (uVar35 != 0) {
        while( true ) {
          *(int **)(uVar25 + iVar27 * 4) = local_c8._4_4_;
          FUN_004b7cb0((int)local_c8._4_4_);
          iVar27 = (int)local_d0._4_4_ + 1;
          local_c8._4_4_ = (int *)((int)local_c8._4_4_ + 0x28);
          local_d0 = CONCAT44(iVar27,(int *)local_d0);
          if ((int)(int *)local_d0 <= iVar27) break;
          uVar25 = (uint)local_80;
        }
      }
      uVar35 = local_e0;
      iVar27 = *(int *)(local_e0 + 0x10 + uVar39 * 0x14);
      local_c0 = CONCAT44(local_c0._4_4_,iVar27);
      uVar25 = local_e4 + *(int *)(local_e0 + 0xc + uVar39 * 0x14) * 0x28;
      local_c8 = CONCAT44(local_c8._4_4_,uVar25);
      *(int *)(uVar25 + 0x18) = *(int *)(uVar25 + 0x18) + 1;
      local_a0._0_6_ = CONCAT24(1,(int *)local_a0);
      local_94 = (int *)0x0;
      local_98 = (byte *)0x0;
      local_b8 = (double)ZEXT48(piVar18);
      local_90 = (ulonglong)uVar25;
      local_88 = 0;
      if ((*(byte *)(iVar27 + 3) & 8) != 0) {
        local_90 = CONCAT44(*(undefined4 *)((local_e0 - 4) + uVar39 * 0x14),uVar25);
      }
      (**(code **)(iVar27 + 0x10))();
      if ((uint *)local_88 != (uint *)0x0) {
        FUN_004ae680((int *)&local_b8,1);
        FUN_004a9a30((int *)(local_d8 + 0xd),(int)piVar18,&DAT_0056de50);
        local_d4 = (uint *)local_88;
      }
      if (local_88._4_4_ != 0) {
        iVar27 = *(int *)((uVar35 - 0x10) + uVar39 * 0x14);
        local_d0 = CONCAT44(iVar27,(int *)local_d0);
        if (iVar27 != 0) {
          FUN_004b7860((int *)(local_e4 + iVar27 * 0x28),1,0);
        }
      }
      FUN_004b76e0((int *)&local_b8);
      puVar29 = local_d4;
      piVar36 = local_dc;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x7c:
      piVar33 = (int *)(local_e4 + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x28);
      local_d0 = CONCAT44(local_d0._4_4_,piVar33);
      local_d4 = (uint *)FUN_004b7010(piVar33,*(int *)(local_e0 + 0x10 + uVar39 * 0x14));
      if (local_d4 != (uint *)0x0) {
        FUN_004ae680((int *)local_d0,1);
        FUN_004a9a30((int *)(local_d8 + 0xd),(int)piVar18,&DAT_0056de50);
      }
      FUN_004aec30((int *)local_d0,local_f0 & 0xff);
      bVar14 = FUN_004b7d90((int *)local_d0);
      iVar27 = CONCAT31(extraout_var_01,bVar14);
joined_r0x004b5145:
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      if (iVar27 != 0) goto LAB_004b5780;
      break;
    case 0x7d:
      local_d0 = local_d0 & 0xffffffff;
      local_c8 = 0xffffffffffffffff;
      local_d4 = (uint *)FUN_00492280((int)piVar18,*(int *)(local_e0 + 4 + uVar39 * 0x14),
                                      *(int *)(local_e0 + 8 + uVar39 * 0x14),(undefined4 *)&local_c8
                                      ,(undefined4 *)((int)&local_c8 + 4));
      if (local_d4 == (uint *)0x5) {
        local_d4 = (uint *)0x0;
        local_d0 = 0x100000000;
      }
      iVar27 = 0;
      local_d0 = local_d0 & 0xffffffff00000000;
      piVar33 = (int *)(local_e4 + *(int *)(local_e0 + 0xc + uVar39 * 0x14) * 0x28);
      local_c0 = CONCAT44(local_c0._4_4_,piVar33);
      do {
        iVar27 = *(int *)((int)&local_d0 + iVar27 * 4 + 4);
        FUN_004b7860(piVar33,iVar27,iVar27 >> 0x1f);
        iVar27 = (int)(int *)local_d0 + 1;
        piVar33 = (int *)((int)(int *)local_c0 + 0x28);
        local_d0 = CONCAT44(local_d0._4_4_,iVar27);
        local_c0 = CONCAT44(local_c0._4_4_,piVar33);
        puVar29 = local_d4;
        piVar10 = local_dc;
        uVar42 = local_d0;
      } while (iVar27 < 3);
      break;
    case 0x7e:
      uVar25 = *(uint *)(local_e0 + 0xc + uVar39 * 0x14);
      piVar36 = *(int **)(piVar18[4] + 4 + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x10);
      local_f8 = (double)CONCAT44(piVar36,(undefined4)local_f8);
      puVar29 = *(uint **)piVar36[1];
      local_d0 = CONCAT44(puVar29,piVar36);
      bVar12 = *(byte *)((int)puVar29 + 5);
      uVar35 = (uint)bVar12;
      if (uVar25 == 0xffffffff) {
        uVar25 = uVar35;
      }
      local_c8 = (ulonglong)CONCAT14(bVar12,uVar25);
      if ((2 < *(byte *)((int)puVar29 + 0xf)) ||
         (((*(int *)puVar29[0x10] != 0 && (-1 < (int)puVar29[0x13])) &&
          ((0 < (int)puVar29[0x13] || (puVar29[0x12] != 0)))))) {
        local_c8 = (ulonglong)CONCAT14(bVar12,uVar35);
        uVar25 = uVar35;
      }
      pcVar23 = "";
      if (*(char *)((int)puVar29 + 0xe) == '\0') {
        pcVar23 = (char *)puVar29[0x24];
      }
      local_c0 = CONCAT44(uVar28,pcVar23);
      if (uVar25 == 5) {
        uVar25 = FUN_004aa9b0(pcVar23);
        if ((uVar25 != 0) && (iVar27 = FUN_004a2c50((int)puVar29), iVar27 != 0)) {
          piVar36 = (int *)local_f8._4_4_;
          uVar25 = extraout_EDX_00;
          goto LAB_004b4abb;
        }
        local_c8 = CONCAT44(local_c8._4_4_,uVar35);
        uVar25 = uVar35;
LAB_004b4a59:
        if (local_d4 != (uint *)0x0) goto LAB_004b4a62;
      }
      else {
LAB_004b4abb:
        piVar18 = local_e8;
        if ((uVar25 == uVar35) || ((uVar35 != 5 && (uVar25 != 5)))) goto LAB_004b4a59;
        if ((*(char *)((int)local_e8 + 0x36) == '\0') || (1 < local_e8[0x21])) {
          local_d4 = (uint *)0x1;
          FUN_004a9a30((int *)(local_d8 + 0xd),(int)local_e8,
                       (byte *)"cannot change %s wal mode from within a transaction");
          puVar29 = (uint *)0x1;
          piVar36 = local_dc;
          piVar10 = local_dc;
          uVar42 = local_d0;
          break;
        }
        if (uVar35 == 5) {
          local_d4 = (uint *)FUN_004a18e0((int *)puVar29);
          if (local_d4 == (uint *)0x0) {
            FUN_004a26f0(local_d0._4_4_,(uint)local_c8);
            piVar36 = (int *)local_d0;
            uVar25 = (uint)(int *)local_c8;
LAB_004b4b68:
            local_d4 = (uint *)FUN_00491d30(piVar36,(uVar25 == 5) + 1);
            uVar25 = (uint)(int *)local_c8;
            uVar35 = (uint)local_c8._4_4_;
            puVar29 = local_d0._4_4_;
            goto LAB_004b4a59;
          }
          uVar35 = (uint)local_c8._4_4_;
          puVar29 = local_d0._4_4_;
        }
        else {
          if (uVar35 == 4) {
            FUN_004a26f0(puVar29,2);
            piVar36 = (int *)local_d0;
            uVar25 = (uint)(int *)local_c8;
            uVar35 = (uint)local_c8._4_4_;
            puVar29 = local_d0._4_4_;
          }
          if (local_d4 == (uint *)0x0) goto LAB_004b4b68;
        }
LAB_004b4a62:
        uVar25 = uVar35;
        local_c8 = CONCAT44(local_c8._4_4_,uVar25);
      }
      uVar13 = FUN_004a26f0(puVar29,uVar25);
      iVar27 = CONCAT31(extraout_var_02,uVar13);
      local_c8 = CONCAT44(local_c8._4_4_,iVar27);
      piVar36 = (int *)(local_e4 + *(int *)(local_e0 + 8 + uVar39 * 0x14) * 0x28);
      *(undefined2 *)(piVar36 + 7) = 0xa02;
      if (iVar27 == 6) {
        pcVar23 = (char *)0x0;
      }
      else {
        pcVar23 = (&PTR_s_delete_0056a9c4)[iVar27];
      }
      piVar36[1] = (int)pcVar23;
      local_dc = piVar36;
      uVar39 = FUN_004aa9b0(pcVar23);
      piVar36[6] = uVar39;
      *(undefined1 *)((int)piVar36 + 0x1f) = 1;
      FUN_004aec30(piVar36,local_f0 & 0xff);
      puVar29 = local_d4;
      piVar18 = local_e8;
      piVar36 = local_dc;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x7f:
      local_d4 = (uint *)FUN_004a74f0((int *)(local_d8 + 0xd),(int)piVar18);
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x80:
      puVar24 = *(undefined4 **)(piVar18[4] + 4 + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x10);
      local_d0 = CONCAT44(local_d0._4_4_,puVar24);
      local_d4 = (uint *)FUN_0048ff20(puVar24);
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      if (local_d4 == (uint *)0x65) {
        local_d4 = (uint *)0x0;
        puVar29 = (uint *)0x0;
        local_ec = *(int *)(local_e0 + 8 + uVar39 * 0x14) - 1;
      }
      break;
    case 0x81:
      if (*(int *)(local_e0 + 4 + uVar39 * 0x14) == 0) {
        FUN_00496370((int)piVar18);
        puVar29 = local_d4;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      else {
        local_d8[0x18] = local_d8[0x18] | 0x20;
      }
      break;
    case 0x82:
      *(undefined2 *)(piVar36 + 7) = 8;
      *(undefined8 *)(piVar36 + 2) = **(undefined8 **)(local_e0 + 0x10 + uVar39 * 0x14);
      break;
    case 0x83:
      cVar11 = *(char *)(local_e0 + 0xc + uVar39 * 0x14);
      local_118 = CONCAT31(local_118._1_3_,cVar11);
      if (((cVar11 != '\0') || ((piVar18[6] & 0x800U) == 0)) &&
         (local_d4 = (uint *)FUN_00490810(*(undefined8 **)
                                           (piVar18[4] + 4 +
                                           *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x10),
                                          *(int *)(local_e0 + 8 + uVar39 * 0x14),cVar11),
         puVar29 = local_d4, piVar10 = local_dc, uVar42 = local_d0, (char)local_d4 == '\x06')) {
        FUN_004a9a30((int *)(local_d8 + 0xd),(int)piVar18,(byte *)"database table is locked: %s");
        puVar29 = local_d4;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      break;
    case 0x84:
      iVar27 = *(int *)(local_e0 + 0x10 + uVar39 * 0x14);
      local_d0 = CONCAT44(local_d0._4_4_,iVar27);
      local_d4 = (uint *)FUN_004b96f0((int)piVar18,iVar27);
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      if ((int *)local_d0 != (int *)0x0) {
        FUN_0047e200((int *)local_d8,*(int *)((int)(int *)local_d0 + 8));
        puVar29 = local_d4;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      break;
    case 0x85:
      local_d4 = (uint *)FUN_004b9980((int)piVar18,*(int *)(local_e0 + 4 + uVar39 * 0x14),
                                      *(byte **)(local_e0 + 0x10 + uVar39 * 0x14),local_d8 + 0xd);
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x86:
      local_d8[0x18] = local_d8[0x18] & 0xfffffffb | 8;
      local_d4 = (uint *)FUN_004b9aa0((int)piVar18,*(int *)(local_e0 + 4 + uVar39 * 0x14),
                                      *(byte **)(local_e0 + 0x10 + uVar39 * 0x14));
      local_d8[0x18] = local_d8[0x18] & 0xfffffff3;
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x87:
      local_d0 = 0;
      piVar33 = *(int **)(*(int *)(local_e0 + 0x10 + uVar39 * 0x14) + 8);
      local_c8 = CONCAT44(*piVar33,piVar33);
      local_d4 = (uint *)(**(code **)(*piVar33 + 0x18))(piVar33);
      FUN_0047e200((int *)local_d8,(int)local_c8);
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      if (local_d4 == (uint *)0x0) {
        *local_d0._4_4_ = (uint)(int *)local_c8;
        puVar24 = FUN_0046c260((int *)local_d8,*(int *)(local_e0 + 4 + uVar39 * 0x14),0,0xffffffff,0
                              );
        local_d0 = CONCAT44(local_d0._4_4_,puVar24);
        if (puVar24 == (undefined4 *)0x0) {
          *(undefined1 *)(piVar18 + 0xe) = 1;
          (**(code **)((int)local_c8._4_4_ + 0x1c))();
          puVar29 = local_d4;
          piVar10 = local_dc;
          uVar42 = local_d0;
        }
        else {
          puVar24[9] = local_d0._4_4_;
          puVar24[10] = *(undefined4 *)*local_d0._4_4_;
          puVar29 = local_d4;
          piVar10 = local_dc;
          uVar42 = local_d0;
        }
      }
      break;
    case 0x88:
      iVar27 = local_e4 + *(int *)(local_e0 + 0xc + uVar39 * 0x14) * 0x28;
      iVar16 = *(int *)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4);
      local_108 = *(undefined4 **)(iVar16 + 0x24);
      local_c0 = CONCAT44(local_108,iVar27 + 0x28U);
      local_b8 = (double)CONCAT44(iVar16,(uint *)*local_108);
      uVar25 = *(uint *)*local_108;
      local_c8 = CONCAT44(iVar27,uVar25);
      uVar35 = *(uint *)(iVar27 + 0x38);
      local_f8 = (double)CONCAT44(*(undefined4 *)(iVar27 + 0x10),(undefined4)local_f8);
      local_d0 = CONCAT44(*(undefined4 *)(iVar27 + 0x10),uVar35);
      iVar16 = 0;
      local_a8 = local_d8[3];
      local_b0 = 0.0;
      uVar38 = iVar27 + 0x28U;
      local_d4 = (uint *)uVar25;
      if (0 < (int)uVar35) {
        while( true ) {
          *(uint *)(local_a8 + iVar16 * 4) = uVar38 + (iVar16 + 1) * 0x28;
          FUN_004b7cb0(*(int *)(local_a8 + local_b0._4_4_ * 4));
          iVar16 = local_b0._4_4_ + 1;
          local_b0 = (double)CONCAT44(iVar16,(int *)local_b0);
          if ((int)(int *)local_d0 <= iVar16) break;
          uVar38 = (uint)(int *)local_c0;
        }
        local_f8 = (double)CONCAT44(local_d0._4_4_,(undefined4)local_f8);
        local_108 = local_c0._4_4_;
        uVar35 = (uint)(int *)local_d0;
        uVar25 = (uint)(int *)local_c8;
      }
      uVar38 = local_e0;
      local_d8[0x18] = local_d8[0x18] & 0xfffffff7 | 4;
      local_d4 = (uint *)(**(code **)(uVar25 + 0x20))
                                   (local_108,local_f8._4_4_,
                                    *(undefined4 *)(local_e0 + 0x10 + uVar39 * 0x14),uVar35);
      local_d8[0x18] = local_d8[0x18] & 0xfffffff3;
      FUN_0047e200((int *)local_d8,(int)(uint *)local_b8);
      if (local_d4 == (uint *)0x0) {
        iVar27 = (**(code **)((int)(int *)local_c8 + 0x28))();
        local_b0 = (double)CONCAT44(local_b0._4_4_,iVar27);
      }
      else {
        iVar27 = (int)(int *)local_b0;
      }
      if (iVar27 != 0) {
        local_ec = *(int *)(uVar38 + 8 + uVar39 * 0x14) - 1;
      }
      *(undefined1 *)((int)local_b8._4_4_ + 0x1c) = 0;
      puVar29 = local_d4;
      piVar18 = local_e8;
      piVar36 = local_dc;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x89:
      iVar16 = *(int *)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4);
      iVar27 = local_e4 + *(int *)(local_e0 + 0xc + uVar39 * 0x14) * 0x28;
      local_c8 = CONCAT44(uVar8,iVar27);
      if (*(char *)(iVar16 + 0x1c) == '\0') {
        local_d0 = CONCAT44(*(undefined4 *)**(undefined4 **)(iVar16 + 0x24),
                            (undefined4 *)**(undefined4 **)(iVar16 + 0x24));
        memset(&local_c0,0,0x40);
        FUN_004b7500((int *)&local_b8,(undefined8 *)(int *)local_c8);
        local_a0 = local_a0 & 0xffffbe01ffffffff | 0x100000000;
        local_d4 = (uint *)(**(code **)((int)local_d0._4_4_ + 0x2c))
                                     (*(undefined4 *)(iVar16 + 0x24),&local_c0,
                                      *(undefined4 *)(local_e0 + 8 + uVar39 * 0x14));
        FUN_0047e200((int *)local_d8,(int)(int *)local_d0);
        if ((uint *)local_88 != (uint *)0x0) {
          local_d4 = (uint *)local_88;
        }
        FUN_004aec30((int *)&local_b8,local_f0 & 0xff);
        FUN_004b7500((int *)local_c8,&local_b8);
        bVar14 = FUN_004b7d90((int *)local_c8);
        iVar27 = CONCAT31(extraout_var_03,bVar14);
        piVar36 = local_dc;
        goto joined_r0x004b5145;
      }
      FUN_004b78c0(iVar27);
      puVar29 = local_d4;
      piVar36 = local_dc;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x8a:
      uVar25 = *(uint *)(local_d8[0x10] + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 4);
      local_c8 = (ulonglong)uVar25 << 0x20;
      if (*(char *)(uVar25 + 0x1c) == '\0') {
        iVar27 = *(int *)**(undefined4 **)(uVar25 + 0x24);
        local_d0 = CONCAT44(iVar27,(int *)**(undefined4 **)(uVar25 + 0x24));
        local_d8[0x18] = local_d8[0x18] & 0xfffffff7 | 4;
        local_d4 = (uint *)(**(code **)(iVar27 + 0x24))();
        puVar34[0x18] = puVar34[0x18] & 0xfffffff3;
        FUN_0047e200((int *)puVar34,(int)(int *)local_d0);
        piVar18 = local_e8;
        if (local_d4 == (uint *)0x0) {
          uVar25 = (**(code **)((int)local_d0._4_4_ + 0x28))();
          local_c8 = CONCAT44(local_c8._4_4_,uVar25);
        }
        else {
          uVar25 = (uint)(int *)local_c8;
        }
        puVar29 = local_d4;
        piVar10 = local_dc;
        uVar42 = local_d0;
        if (uVar25 == 0) {
          iVar27 = *(int *)(local_e0 + 8 + uVar39 * 0x14);
          goto LAB_004b0d04;
        }
      }
      break;
    case 0x8b:
      piVar33 = (int *)(local_e4 + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x28);
      local_d0 = CONCAT44(piVar33,*(undefined4 *)(*(int *)(local_e0 + 0x10 + uVar39 * 0x14) + 8));
      local_d4 = (uint *)FUN_004aec30(piVar33,1);
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      if (local_d4 == (uint *)0x0) {
        local_d4 = (uint *)(**(code **)(*(int *)local_d0 + 0x4c))((int *)local_d0);
        FUN_0047e200((int *)local_d8,(int)local_d0);
        local_d8[0x18] = local_d8[0x18] & 0xffffffdf;
        puVar29 = local_d4;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      break;
    case 0x8c:
      piVar33 = *(int **)(*(int *)(local_e0 + 0x10 + uVar39 * 0x14) + 8);
      iVar27 = *piVar33;
      local_d0 = CONCAT44(iVar27,piVar33);
      uVar25 = *(uint *)(local_e0 + 8 + uVar39 * 0x14);
      local_c8 = CONCAT44(uVar8,uVar25);
      uVar42 = local_d0;
      if (*(int *)(iVar27 + 0x34) != 0) {
        iVar16 = piVar18[0xf];
        local_c8 = (ulonglong)uVar25;
        iVar27 = local_e4 + *(int *)(local_e0 + 0xc + uVar39 * 0x14) * 0x28;
        local_b8 = (double)CONCAT44(iVar27,local_d8[3]);
        if (0 < (int)uVar25) {
          do {
            FUN_004b7cb0(iVar27);
            *(byte **)((int)(uint *)local_b8 + (int)local_c8._4_4_ * 4) = local_b8._4_4_;
            iVar26 = (int)local_c8._4_4_ + 1;
            iVar27 = (int)local_b8._4_4_ + 0x28;
            local_b8 = (double)CONCAT44(iVar27,(uint *)local_b8);
            local_c8 = CONCAT44(iVar26,(int *)local_c8);
          } while (iVar26 < (int)(int *)local_c8);
        }
        piVar36 = local_e8;
        *(undefined1 *)(local_e8 + 0xf) = *(undefined1 *)(uVar35 + 3 + uVar39 * 0x14);
        local_d4 = (uint *)(**(code **)((int)local_d0._4_4_ + 0x34))
                                     ((int *)local_d0,(int)local_c8,(uint *)local_b8);
        puVar34 = local_d8;
        *(char *)(piVar36 + 0xf) = (char)iVar16;
        FUN_0047e200((int *)local_d8,(int)(int *)local_d0);
        piVar18 = local_e8;
        piVar36 = local_dc;
        uVar42 = local_d0;
        puVar29 = local_d4;
        piVar10 = local_dc;
        if (local_d4 == (uint *)0x0) {
          if (*(int *)(local_e0 + 4 + uVar39 * 0x14) == 0) {
LAB_004b5458:
            puVar34[0x19] = puVar34[0x19] + 1;
          }
          else {
            local_100 = (uint)local_c0._4_4_;
            local_104 = (uint)(int *)local_c0;
            local_e8[8] = (int)(int *)local_c0;
            local_e8[9] = (int)local_c0._4_4_;
            puVar34[0x19] = puVar34[0x19] + 1;
          }
        }
        else {
          if ((local_d4 != (uint *)0x13) ||
             (*(char *)(*(int *)(local_e0 + 0x10 + uVar39 * 0x14) + 0x10) == '\0'))
          goto LAB_004b5458;
          cVar11 = *(char *)(local_e0 + 3 + uVar39 * 0x14);
          if (cVar11 == '\x04') {
            local_d4 = (uint *)0x0;
            puVar29 = (uint *)0x0;
          }
          else if (cVar11 == '\x05') {
            *(undefined1 *)(puVar34 + 0x17) = 2;
          }
          else {
            *(char *)(puVar34 + 0x17) = cVar11;
          }
        }
      }
      break;
    case 0x8d:
      piVar33 = (int *)(local_e4 + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x28);
      uVar3 = *(ushort *)(piVar33 + 7);
      piVar36 = piVar19;
      if ((uVar3 & 1) == 0) {
        *(ushort *)(piVar33 + 7) = uVar3 >> 3 & 2 | uVar3;
        if (((uVar3 >> 3 & 2) == 0 && (uVar3 & 2) == 0) && ((uVar3 & 0xc) != 0)) {
          FUN_004b7cf0(piVar33,local_f0 & 0xff);
        }
        *(ushort *)(piVar33 + 7) = *(ushort *)(piVar33 + 7) & 0xfff3;
        if ((*(ushort *)(piVar33 + 7) & 0x4000) == 0) {
          *(ushort *)(piVar33 + 7) = *(ushort *)(piVar33 + 7) & 0xbfe3;
          local_d4 = (uint *)0x0;
          puVar29 = local_d4;
          piVar36 = local_dc;
          piVar10 = local_dc;
          uVar42 = local_d0;
        }
        else {
          local_d4 = (uint *)FUN_004b6fa0(piVar33);
          *(ushort *)(piVar33 + 7) = *(ushort *)(piVar33 + 7) & 0xbfe3;
          puVar29 = local_d4;
          piVar36 = local_dc;
          piVar10 = local_dc;
          uVar42 = local_d0;
        }
      }
      break;
    case 0x8e:
      piVar33 = (int *)(local_e4 + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x28);
      uVar3 = *(ushort *)(piVar33 + 7);
      piVar36 = piVar19;
      if ((uVar3 & 1) == 0) {
        if ((uVar3 & 0x10) == 0) {
          if (((uVar3 & 2) == 0) && ((uVar3 & 0xc) != 0)) {
            FUN_004b7cf0(piVar33,local_f0 & 0xff);
          }
          *(ushort *)(piVar33 + 7) = *(ushort *)(piVar33 + 7) & 0xbe10 | 0x10;
          puVar29 = local_d4;
          piVar36 = local_dc;
          piVar10 = local_dc;
          uVar42 = local_d0;
        }
        else {
          *(ushort *)(piVar33 + 7) = uVar3 & 0xfe10;
        }
      }
      break;
    case 0x8f:
      FUN_004b75f0(local_e4 + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x28);
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x90:
      iVar27 = *(int *)(local_e0 + 4 + uVar39 * 0x14);
      if ((*(byte *)(local_e4 + 0x1c + iVar27 * 0x28) & 1) == 0) {
        FUN_004b7410(local_e4 + iVar27 * 0x28);
        puVar29 = local_d4;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      break;
    case 0x91:
      iVar27 = *(int *)(local_e0 + 4 + uVar39 * 0x14);
      if ((*(byte *)(local_e4 + 0x1c + iVar27 * 0x28) & 1) == 0) {
        FUN_004b7670(local_e4 + iVar27 * 0x28);
        puVar29 = local_d4;
        piVar10 = local_dc;
        uVar42 = local_d0;
      }
      break;
    case 0x92:
      piVar36[4] = *(int *)(*(int *)(*(int *)(piVar18[4] + 4 +
                                             *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x10) + 4) +
                           0x2c);
      piVar36[5] = 0;
      break;
    case 0x93:
      puVar24 = *(undefined4 **)(piVar18[4] + 4 + *(int *)(local_e0 + 4 + uVar39 * 0x14) * 0x10);
      uVar39 = *(uint *)(local_e0 + 0xc + uVar39 * 0x14);
      uVar25 = 0;
      if ((uVar39 != 0) && (uVar25 = *(uint *)(puVar24[1] + 0x2c), uVar25 < uVar39)) {
        uVar25 = uVar39;
      }
      iVar27 = FUN_00490880(puVar24,uVar25);
      piVar36[4] = iVar27;
      piVar36[5] = iVar27 >> 0x1f;
      puVar29 = local_d4;
      piVar10 = local_dc;
      uVar42 = local_d0;
      break;
    case 0x94:
      if ((piVar18[0x26] != 0) && ((local_d8[0x18] & 0x400) == 0)) {
        pbVar21 = *(byte **)(local_e0 + 0x10 + uVar39 * 0x14);
        if (pbVar21 == (byte *)0x0) {
          pbVar21 = (byte *)local_d8[0x26];
        }
        local_d0 = CONCAT44(local_d0._4_4_,pbVar21);
        uVar42 = local_d0;
        if (pbVar21 != (byte *)0x0) {
          uVar28 = FUN_004b5b10(local_d8,pbVar21);
          local_d0 = CONCAT44(uVar28,(int *)local_d0);
          (*(code *)piVar18[0x26])(piVar18[0x27]);
          FUN_00494b00((int)piVar18,local_d0._4_4_);
          puVar29 = local_d4;
          piVar10 = local_dc;
          uVar42 = local_d0;
        }
      }
    }
LAB_004b0d11:
    local_d0 = uVar42;
    local_dc = piVar10;
    local_ec = local_ec + 1;
    if (puVar29 != (uint *)0x0) goto LAB_004b57cd;
    goto LAB_004af440;
  }
LAB_004af4ee:
  local_d8[0x16] = 9;
  local_d4 = (uint *)0x9;
  FUN_004a9a30((int *)(local_d8 + 0xd),(int)piVar18,&DAT_0056de50);
  puVar29 = (uint *)0x9;
  goto LAB_004b57cd;
code_r0x004b19a5:
  iVar27 = iVar27 + 1;
  local_b8 = (double)CONCAT44(local_b8._4_4_,iVar27);
  puVar24 = (undefined4 *)puVar24[4];
  local_c0 = CONCAT44(local_c0._4_4_,puVar24);
  pbVar21 = local_f8._4_4_;
  if (puVar24 == (undefined4 *)0x0) goto LAB_004b19bf;
  goto LAB_004b1996;
LAB_004afa70:
  do {
    piVar18 = local_e8;
    if ((*(ushort *)(uVar35 + 0x1c + iVar30 * 0x28) & 0x1000) != 0) {
      iVar30 = FUN_004b7490((int *)(uVar35 + iVar30 * 0x28));
      if (iVar30 != 0) goto LAB_004b57a6;
      iVar30 = (int)local_d0._4_4_;
      uVar35 = (uint)(int *)local_d0;
    }
    FUN_004b7590((int *)(uVar35 + iVar30 * 0x28));
    FUN_004b7cb0((int)(int *)local_d0 + (int)local_d0._4_4_ * 0x28);
    iVar30 = (int)local_d0._4_4_ + 1;
    local_d0 = CONCAT44(iVar30,(int *)local_d0);
    uVar35 = (uint)(int *)local_d0;
  } while (iVar30 < *(int *)(uVar25 + 8 + uVar39 * 0x14));
LAB_004b55f4:
  if ((char)piVar18[0xe] == '\0') {
    local_d8[0x15] = local_ec + 1;
    goto LAB_004b5847;
  }
LAB_004b57a6:
  *(undefined1 *)(piVar18 + 0xe) = 1;
  FUN_004a9a30((int *)(local_d8 + 0xd),(int)piVar18,(byte *)"out of memory");
  puVar29 = (uint *)0x7;
  local_d4 = puVar29;
LAB_004b57cd:
  local_d8[0x16] = (uint)puVar29;
  FUN_004683f0(puVar29,"statement aborts at %d: [%s] %s");
  FUN_004b60e0((int *)local_d8);
  if (local_d4 == (uint *)0xc0a) {
    *(undefined1 *)(piVar18 + 0xe) = 1;
  }
  if ((local_f9 != 0) &&
     (uVar39 = (uint)local_f9, FUN_004a7960(*(int *)(piVar18[4] + 0xc + (uVar39 - 1) * 0x10)),
     uVar39 - 1 != 1)) {
    FUN_004a7960(*(int *)(piVar18[4] + 0x1c));
  }
LAB_004b5847:
  local_e8[8] = local_104;
  local_e8[9] = local_100;
  FUN_004b6750((int *)local_d8);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004b2f2a @ 004b2f2a  kind=lib  attributed-by=lib-string  size=6713 */

/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x004b467d) */
/* WARNING: Removing unreachable block (ram,0x004b03a7) */

void __fastcall FUN_004b2f2a(undefined4 param_1,int param_2)

{
  ushort *puVar1;
  void *_Dst;
  double dVar2;
  byte bVar3;
  ushort uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  char cVar9;
  byte bVar10;
  undefined1 uVar11;
  bool bVar12;
  undefined2 uVar13;
  int iVar14;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar15;
  byte *pbVar16;
  int iVar17;
  uint uVar18;
  undefined4 uVar19;
  uint *puVar20;
  uint *puVar21;
  size_t sVar22;
  undefined3 extraout_var_01;
  int iVar23;
  char *pcVar24;
  undefined3 extraout_var_02;
  uint uVar25;
  undefined4 *puVar26;
  undefined3 extraout_var_03;
  undefined4 uVar27;
  int *piVar28;
  ushort uVar29;
  uint extraout_ECX;
  uint uVar30;
  int iVar31;
  int *piVar32;
  int iVar33;
  void *extraout_EDX;
  uint extraout_EDX_00;
  int *unaff_EBX;
  uint unaff_EBP;
  undefined8 *puVar34;
  byte *pbVar35;
  float10 fVar36;
  undefined8 uVar37;
  ulonglong uVar38;
  longlong lVar39;
  ulonglong uVar40;
  undefined4 uStack00000008;
  
LAB_004b2f30:
  while ((iVar31 = *(int *)(unaff_EBP - 0xc0), iVar31 == 0 &&
         (iVar17 = *(int *)(unaff_EBP - 0xbc) + 1, *(int *)(unaff_EBP - 0xbc) = iVar17, iVar17 < 100
         ))) {
    FUN_00466fa0(8,(undefined1 *)(unaff_EBP - 0xcc));
    uVar18 = *(uint *)(unaff_EBP - 0xcc);
    if (*(int *)(unaff_EBP - 0xbc) < 5) {
      uVar18 = uVar18 & 0xffffff;
      uVar30 = 0;
    }
    else {
      uVar30 = *(uint *)(unaff_EBP - 200) & 0x3fffffff;
    }
    iVar31 = uVar30 + (0xfffffffe < uVar18);
    *(uint *)(unaff_EBP - 0xcc) = uVar18 + 1;
    puVar26 = *(undefined4 **)(unaff_EBP - 0xc4);
    *(int *)(unaff_EBP - 200) = iVar31;
    uVar18 = FUN_004908e0((int *)*puVar26,(int *)0x0,uVar18 + 1,iVar31,0,(uint *)(unaff_EBP - 0xc0))
    ;
    *(uint *)(unaff_EBP - 0xd0) = uVar18;
    param_2 = 0;
    if (uVar18 != 0) {
LAB_004b2fd2:
      piVar28 = *(int **)(unaff_EBP - 0xc4);
LAB_004b2fd8:
      *(undefined1 *)((int)piVar28 + 0x19) = 0;
      *(undefined1 *)(*(int *)(unaff_EBP - 0xc4) + 0x1d) = 0;
      *(undefined4 *)(*(int *)(unaff_EBP - 0xc4) + 0x50) = 0;
LAB_004b2ff3:
      piVar28 = *(int **)(unaff_EBP - 0xd8);
      piVar28[4] = *(int *)(unaff_EBP - 0xcc);
      piVar28[5] = *(int *)(unaff_EBP - 200);
LAB_004b0d0b:
      uVar18 = *(uint *)(unaff_EBP - 0xd0);
LAB_004b0d11:
      *(int *)(unaff_EBP - 0xe8) = *(int *)(unaff_EBP - 0xe8) + 1;
      if (uVar18 != 0) goto LAB_004b57cd;
      iVar31 = *(int *)(unaff_EBP - 0xe8);
      if ((char)unaff_EBX[0xe] != '\0') goto LAB_004b57a6;
      if (*(int *)(unaff_EBP - 0x11c) != 0) {
        iVar17 = *(int *)(unaff_EBP - 0x110);
        if (unaff_EBX[0x47] == iVar17) {
          iVar14 = (*(code *)unaff_EBX[0x45])();
          iVar17 = 0;
          if (iVar14 != 0) {
            uVar18 = 9;
            goto LAB_004b57c7;
          }
        }
        *(int *)(unaff_EBP - 0x110) = iVar17 + 1;
      }
      iVar17 = *(int *)(unaff_EBP - 0xdc);
      if ((*(byte *)(iVar17 + 2 + iVar31 * 0x14) & 2) != 0) {
        piVar28 = (int *)(*(int *)(unaff_EBP - 0xe0) + *(int *)(iVar17 + 8 + iVar31 * 0x14) * 0x28);
        *(int **)(unaff_EBP - 0xd8) = piVar28;
        if ((*(ushort *)(piVar28 + 7) & 0x2460) != 0) {
          FUN_004b7720(piVar28);
          iVar17 = *(int *)(unaff_EBP - 0xdc);
        }
        *(undefined2 *)(piVar28 + 7) = 4;
      }
      switch(*(undefined1 *)(iVar17 + iVar31 * 0x14)) {
      case 1:
        if (unaff_EBX[0x38] == 0) break;
        goto LAB_004af4ee;
      case 2:
        iVar17 = *(int *)(iVar17 + 4 + iVar31 * 0x14);
        iVar14 = *(int *)(unaff_EBP - 0xe0);
        *(undefined2 *)(*(int *)(unaff_EBP - 0xe0) + 0x1c + iVar17 * 0x28) = 4;
        iVar23 = *(int *)(unaff_EBP - 0xe8);
        *(int *)(iVar14 + 0x10 + iVar17 * 0x28) = iVar23;
        *(int *)(iVar14 + 0x14 + iVar17 * 0x28) = iVar23 >> 0x1f;
        goto LAB_004af55f;
      case 3:
        iVar31 = *(int *)(*(int *)(unaff_EBP - 0xe0) + 0x10 +
                         *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x28);
        goto LAB_004b0d05;
      case 4:
        iVar31 = *(int *)(iVar17 + 4 + iVar31 * 0x14);
        iVar17 = *(int *)(unaff_EBP - 0xe0);
        *(undefined2 *)(iVar17 + 0x1c + iVar31 * 0x28) = 4;
        *(undefined4 *)(unaff_EBP - 0xcc) = *(undefined4 *)(iVar17 + 0x10 + iVar31 * 0x28);
        iVar14 = *(int *)(unaff_EBP - 0xe8);
        *(int *)(iVar17 + 0x10 + iVar31 * 0x28) = iVar14;
        *(int *)(iVar17 + 0x14 + iVar31 * 0x28) = iVar14 >> 0x1f;
        iVar31 = *(int *)(unaff_EBP - 0xcc);
        goto LAB_004b0d05;
      case 5:
        if ((*(byte *)(*(int *)(unaff_EBP - 0xe0) + 0x1c +
                      *(int *)(iVar17 + 0xc + iVar31 * 0x14) * 0x28) & 1) != 0)
        goto switchD_004af4da_caseD_6;
        goto LAB_004b0d0b;
      case 6:
switchD_004af4da_caseD_6:
        if ((*(int *)(iVar17 + 4 + iVar31 * 0x14) == 0) &&
           (piVar32 = *(int **)(*(int *)(unaff_EBP - 0xd4) + 0xa0), piVar32 != (int *)0x0)) {
          iVar17 = piVar32[1];
          iVar14 = *(int *)(unaff_EBP - 0xd4);
          *(int *)(iVar14 + 0xa8) = *(int *)(iVar14 + 0xa8) + -1;
          *(int *)(iVar14 + 0xa0) = iVar17;
          iVar17 = *(int *)(iVar14 + 100);
          unaff_EBX[0x13] = unaff_EBX[0x13] + iVar17;
          unaff_EBX[0x12] = iVar17;
          iVar17 = FUN_004b5f90(piVar32);
          *(int *)(unaff_EBP - 0xe8) = iVar17;
          *(int *)(unaff_EBP - 0x100) = unaff_EBX[8];
          *(int *)(unaff_EBP - 0xfc) = unaff_EBX[9];
          if (*(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar31 * 0x14) == 4) {
            *(int *)(unaff_EBP - 0xe8) =
                 *(int *)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 4) + 8 +
                         *(int *)(unaff_EBP - 0xe8) * 0x14) + -1;
          }
          *(undefined4 *)(unaff_EBP - 0xdc) = *(undefined4 *)(*(int *)(unaff_EBP - 0xd4) + 4);
          *(undefined4 *)(unaff_EBP - 0xe0) = *(undefined4 *)(*(int *)(unaff_EBP - 0xd4) + 8);
          goto LAB_004b0d0b;
        }
        piVar28 = *(int **)(unaff_EBP - 0xd4);
        iVar14 = *(int *)(unaff_EBP - 0xe8);
        piVar28[0x16] = *(int *)(iVar17 + 4 + iVar31 * 0x14);
        *(undefined1 *)(piVar28 + 0x17) = *(undefined1 *)(iVar17 + 8 + iVar31 * 0x14);
        piVar28[0x15] = iVar14;
        if (*(int *)(iVar17 + 0x10 + iVar31 * 0x14) == 0) {
          if (piVar28[0x16] != 0) {
            FUN_004683f0(*(undefined4 *)(iVar17 + 4 + iVar31 * 0x14),
                         "constraint failed at %d in [%s]");
            goto LAB_004b55c4;
          }
        }
        else {
          FUN_004a9a30(piVar28 + 0xd,(int)unaff_EBX,&DAT_0056de50);
          FUN_004683f0(*(undefined4 *)(*(int *)(unaff_EBP - 0xdc) + 4 + iVar31 * 0x14),
                       "abort at %d in [%s]: %s");
LAB_004b55c4:
          piVar28 = *(int **)(unaff_EBP - 0xd4);
        }
        iVar31 = FUN_004b60e0(piVar28);
        piVar28 = *(int **)(unaff_EBP - 0xd4);
        if (iVar31 == 5) {
LAB_004b564b:
          piVar28[0x16] = 5;
        }
        goto LAB_004b5847;
      case 7:
        iVar31 = *(int *)(iVar17 + 4 + iVar31 * 0x14);
        piVar28[4] = iVar31;
        piVar28[5] = iVar31 >> 0x1f;
        goto LAB_004b0d0b;
      case 8:
        piVar32 = *(int **)(iVar17 + 0x10 + iVar31 * 0x14);
        piVar28[4] = *piVar32;
        piVar28[5] = piVar32[1];
        goto LAB_004b0d0b;
      case 9:
        goto switchD_004af4da_caseD_9;
      case 10:
        *(int *)(unaff_EBP - 0xcc) =
             *(int *)(iVar17 + 0xc + iVar31 * 0x14) - *(int *)(iVar17 + 8 + iVar31 * 0x14);
        piVar28 = *(int **)(unaff_EBP - 0xd8);
        uVar13 = 1;
        if (*(int *)(iVar17 + 4 + iVar31 * 0x14) != 0) {
          uVar13 = 0x101;
        }
        *(undefined2 *)(unaff_EBP - 200) = uVar13;
        *(undefined2 *)(piVar28 + 7) = uVar13;
        if (0 < *(int *)(unaff_EBP - 0xcc)) goto LAB_004af800;
        goto LAB_004af570;
      case 0xb:
        FUN_004b79e0(piVar28,*(void **)(iVar17 + 0x10 + iVar31 * 0x14),
                     *(size_t *)(iVar17 + 4 + iVar31 * 0x14),'\0',(undefined *)0x0);
        *(undefined1 *)((int)piVar28 + 0x1f) = *(undefined1 *)(unaff_EBP - 0xec);
        goto LAB_004b0d0b;
      case 0xc:
        piVar32 = (int *)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x44) +
                         (*(int *)(iVar17 + 4 + iVar31 * 0x14) * 5 + -5) * 8);
        *(int **)(unaff_EBP - 0xcc) = piVar32;
        bVar12 = FUN_004b7d90(piVar32);
        if (CONCAT31(extraout_var,bVar12) != 0) goto LAB_004b5780;
        piVar28 = *(int **)(unaff_EBP - 0xd8);
        FUN_004b7c40(piVar28,(undefined8 *)piVar32,0x800);
        goto LAB_004b0d0b;
      case 0xd:
        iVar14 = *(int *)(unaff_EBP - 0xdc);
        iVar23 = *(int *)(iVar17 + 0xc + iVar31 * 0x14) + 1;
        *(int *)(unaff_EBP - 200) = iVar23;
        iVar17 = *(int *)(iVar14 + 4 + iVar31 * 0x14);
        *(int *)(unaff_EBP - 0xc4) = iVar17;
        iVar31 = *(int *)(iVar14 + 8 + iVar31 * 0x14);
        iVar14 = *(int *)(unaff_EBP - 0xe0);
        *(int *)(unaff_EBP - 0xc0) = iVar31;
        puVar34 = (undefined8 *)(iVar14 + iVar17 * 0x28);
        piVar28 = (int *)(iVar14 + iVar31 * 0x28);
        *(int **)(unaff_EBP - 0xd8) = piVar28;
        if (iVar23 != 0) {
          do {
            *(int *)(unaff_EBP - 200) = iVar23 + -1;
            *(int *)(unaff_EBP - 0xcc) = piVar28[9];
            piVar28[9] = 0;
            FUN_004b7500(piVar28,puVar34);
            *(undefined4 *)((int)puVar34 + 0x24) = *(undefined4 *)(unaff_EBP - 0xcc);
            iVar23 = *(int *)(unaff_EBP - 200);
            puVar34 = puVar34 + 5;
            piVar28 = piVar28 + 10;
          } while (iVar23 != 0);
          *(int **)(unaff_EBP - 0xd8) = piVar28;
        }
        piVar28 = *(int **)(unaff_EBP - 0xd8);
        *(undefined4 *)(unaff_EBP - 200) = 0xffffffff;
        goto LAB_004b0d0b;
      case 0xe:
        iVar14 = *(int *)(unaff_EBP - 0xe0);
        *(undefined4 *)(unaff_EBP - 0xcc) = *(undefined4 *)(iVar17 + 0xc + iVar31 * 0x14);
        puVar34 = (undefined8 *)(iVar14 + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x28);
        piVar28 = (int *)(iVar14 + *(int *)(iVar17 + 8 + iVar31 * 0x14) * 0x28);
        goto LAB_004af966;
      case 0xf:
        iVar14 = *(int *)(unaff_EBP - 0xe0);
        piVar28 = (int *)(iVar14 + *(int *)(iVar17 + 8 + iVar31 * 0x14) * 0x28);
        iVar31 = *(int *)(iVar17 + 4 + iVar31 * 0x14);
        *(int **)(unaff_EBP - 0xd8) = piVar28;
        FUN_004b7c40(piVar28,(undefined8 *)(iVar14 + iVar31 * 0x28),0x1000);
        goto LAB_004b0d0b;
      case 0x10:
        uVar18 = FUN_004aeea0(*(int **)(unaff_EBP - 0xd4),0);
        *(uint *)(unaff_EBP - 0xd0) = uVar18;
        if (uVar18 == 0) {
          uVar18 = FUN_004af050(*(int **)(unaff_EBP - 0xd4),1);
          *(uint *)(unaff_EBP - 0xd0) = uVar18;
          if (uVar18 == 0) {
            iVar14 = *(int *)(unaff_EBP - 0xd4);
            iVar23 = *(int *)(unaff_EBP - 0xdc);
            iVar17 = *(int *)(unaff_EBP - 0xe0);
            *(uint *)(iVar14 + 0x50) = *(int *)(iVar14 + 0x50) + 2U | 1;
            iVar17 = iVar17 + *(int *)(iVar23 + 4 + iVar31 * 0x14) * 0x28;
            *(int *)(iVar14 + 0x14) = iVar17;
            iVar14 = 0;
            *(int *)(unaff_EBP - 0xcc) = iVar17;
            *(undefined4 *)(unaff_EBP - 200) = 0;
            if (*(int *)(iVar23 + 8 + iVar31 * 0x14) < 1) goto LAB_004b55f4;
            goto LAB_004afa70;
          }
        }
        goto LAB_004b0d11;
      case 0x11:
        iVar31 = *(int *)(iVar17 + 4 + iVar31 * 0x14);
        if (iVar31 != 0) {
          FUN_004b7860((int *)(*(int *)(unaff_EBP - 0xe0) + iVar31 * 0x28),0,0);
        }
        goto LAB_004b0d0b;
      case 0x12:
        uVar18 = (uint)*(byte *)(iVar17 + 3 + iVar31 * 0x14);
        iVar14 = *(int *)(unaff_EBP - 0xe0);
        iVar23 = *(int *)(*(int *)(unaff_EBP - 0xd4) + 0xc);
        *(uint *)(unaff_EBP - 0x80) = uVar18;
        *(int *)(unaff_EBP - 0x84) = iVar23;
        *(int *)(unaff_EBP - 0xd8) = iVar14 + *(int *)(iVar17 + 0xc + iVar31 * 0x14) * 0x28;
        unaff_EBX = *(int **)(unaff_EBP - 0xe4);
        iVar14 = iVar14 + *(int *)(iVar17 + 8 + iVar31 * 0x14) * 0x28;
        iVar17 = 0;
        *(int *)(unaff_EBP - 200) = iVar14;
        *(undefined4 *)(unaff_EBP - 0xcc) = 0;
        if (uVar18 != 0) goto LAB_004b00b0;
        goto LAB_004b010d;
      case 0x13:
        iVar14 = *(int *)(iVar17 + 4 + iVar31 * 0x14);
        iVar23 = *(int *)(unaff_EBP - 0xe0);
        bVar10 = *(byte *)(iVar23 + 0x1c + iVar14 * 0x28);
        piVar28 = (int *)(iVar23 + *(int *)(iVar17 + 8 + iVar31 * 0x14) * 0x28);
        *(int **)(unaff_EBP - 0xd8) = piVar28;
        if ((bVar10 & 1) == 0) {
          uVar40 = FUN_004b65e0(iVar23 + iVar14 * 0x28);
          if (uVar40 == 0) {
            FUN_004b7860(piVar28,1,0);
            piVar28 = *(int **)(unaff_EBP - 0xd8);
          }
          else {
            FUN_004b7860(piVar28,0,0);
            piVar28 = *(int **)(unaff_EBP - 0xd8);
          }
        }
        else {
          FUN_004b78c0((int)piVar28);
        }
        goto LAB_004b0d0b;
      case 0x14:
        iVar17 = *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x28;
        FUN_004b7410(iVar17);
        uVar30 = *(uint *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar31 * 0x14);
        puVar21 = (uint *)(iVar17 + 0x10);
        uVar18 = *puVar21;
        *puVar21 = *puVar21 + uVar30;
        *(int *)(iVar17 + 0x14) =
             *(int *)(iVar17 + 0x14) + ((int)uVar30 >> 0x1f) + (uint)CARRY4(uVar18,uVar30);
        piVar28 = *(int **)(unaff_EBP - 0xd8);
        goto LAB_004b0d0b;
      case 0x15:
        iVar17 = *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x28;
        FUN_0046dfa0(iVar17);
        if ((*(byte *)(iVar17 + 0x1c) & 8) != 0) {
          FUN_004b6650(iVar17);
        }
        if ((*(ushort *)(iVar17 + 0x1c) & 4) != 0) {
          *(ushort *)(iVar17 + 0x1c) = *(ushort *)(iVar17 + 0x1c) & 0xbe04 | 4;
          piVar28 = *(int **)(unaff_EBP - 0xd8);
          goto LAB_004b0d0b;
        }
        iVar31 = *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar31 * 0x14);
        if (iVar31 != 0) {
          piVar28 = *(int **)(unaff_EBP - 0xd8);
          goto LAB_004b0d04;
        }
        uVar18 = 0x14;
        *(undefined4 *)(unaff_EBP - 0xd0) = 0x14;
        goto LAB_004b572c;
      case 0x16:
        iVar31 = *(int *)(iVar17 + 4 + iVar31 * 0x14);
        if ((*(byte *)(*(int *)(unaff_EBP - 0xe0) + 0x1c + iVar31 * 0x28) & 4) != 0) {
          FUN_004b7670(*(int *)(unaff_EBP - 0xe0) + iVar31 * 0x28);
        }
        goto LAB_004b0d0b;
      case 0x17:
        *(undefined4 *)(unaff_EBP - 0x108) = *(undefined4 *)(iVar17 + 0x10 + iVar31 * 0x14);
        goto LAB_004b0d0b;
      case 0x18:
        iVar14 = *(int *)(unaff_EBP - 0x108);
        if ((*(byte *)(iVar17 + 3 + iVar31 * 0x14) & 1) == 0) {
          iVar14 = 0;
        }
        iVar23 = *(int *)(iVar17 + 0xc + iVar31 * 0x14);
        *(int *)(unaff_EBP - 0xcc) = iVar23;
        iVar15 = *(int *)(iVar17 + 0x10 + iVar31 * 0x14);
        *(int *)(unaff_EBP - 0xbc) = iVar15;
        uVar27 = *(undefined4 *)(iVar17 + 4 + iVar31 * 0x14);
        *(undefined4 *)(unaff_EBP - 0xc4) = uVar27;
        iVar31 = *(int *)(iVar17 + 8 + iVar31 * 0x14);
        iVar17 = 0;
        *(int *)(unaff_EBP - 0x108) = iVar14;
        *(undefined4 *)(unaff_EBP - 0xf0) = uVar27;
        *(int *)(unaff_EBP - 0xc0) = iVar31;
        *(undefined4 *)(unaff_EBP - 200) = 0;
        if (iVar23 < 1) goto LAB_004b0a43;
        goto LAB_004b09a0;
      case 0x19:
        if (*(int *)(unaff_EBP - 0x10c) < 0) {
          iVar31 = *(int *)(iVar17 + 4 + iVar31 * 0x14);
          goto LAB_004b0d04;
        }
        if (*(int *)(unaff_EBP - 0x10c) != 0) {
          iVar31 = *(int *)(iVar17 + 0xc + iVar31 * 0x14);
          goto LAB_004b0d04;
        }
        break;
      case 0x1a:
        iVar14 = *(int *)(iVar17 + 4 + iVar31 * 0x14);
        iVar23 = *(int *)(*(int *)(unaff_EBP - 0xd4) + 0xb8);
        if (*(char *)(iVar23 + iVar14) == '\0') {
          *(undefined1 *)(iVar23 + iVar14) = 1;
          goto LAB_004b0d0b;
        }
        break;
      case 0x1b:
      case 0x1c:
        iVar14 = *(int *)(iVar17 + 4 + iVar31 * 0x14);
        if ((*(byte *)(*(int *)(unaff_EBP - 0xe0) + 0x1c + iVar14 * 0x28) & 1) == 0) {
          fVar36 = FUN_004b8350(*(int *)(unaff_EBP - 0xe0) + iVar14 * 0x28);
          *(double *)(unaff_EBP - 0xf4) = (double)fVar36;
          uVar18 = (uint)(*(double *)(unaff_EBP - 0xf4) != 0.0);
          iVar17 = *(int *)(unaff_EBP - 0xdc);
          *(uint *)(unaff_EBP - 0xcc) = uVar18;
          if (*(char *)(iVar17 + iVar31 * 0x14) != '\x1c') goto joined_r0x004b4649;
          uVar18 = (uint)(uVar18 == 0);
        }
        else {
          uVar18 = *(uint *)(iVar17 + 0xc + iVar31 * 0x14);
        }
        *(uint *)(unaff_EBP - 0xcc) = uVar18;
joined_r0x004b4649:
        if (uVar18 == 0) goto LAB_004b0d0b;
        break;
      case 0x1d:
        iVar14 = *(int *)(iVar17 + 4 + iVar31 * 0x14);
        iVar23 = *(int *)(unaff_EBP - 0xd4);
        *(int *)(unaff_EBP - 0xbc) = iVar14;
        iVar15 = *(int *)(iVar17 + 8 + iVar31 * 0x14);
        *(undefined4 *)(unaff_EBP - 0xb4) = 0;
        *(int *)(unaff_EBP - 0xb8) = iVar15;
        *(undefined8 *)(unaff_EBP - 0x8c) = 0;
        *(undefined8 *)(unaff_EBP - 0x84) = 0;
        *(undefined8 *)(unaff_EBP - 0x7c) = 0;
        *(undefined8 *)(unaff_EBP - 0x74) = 0;
        *(undefined8 *)(unaff_EBP - 0x6c) = 0;
        iVar17 = *(int *)(iVar17 + 0xc + iVar31 * 0x14);
        iVar33 = *(int *)(unaff_EBP - 0xe0);
        *(undefined4 *)(unaff_EBP - 0xb0) = 0;
        piVar32 = (int *)(iVar33 + iVar17 * 0x28);
        iVar17 = *(int *)(iVar23 + 0x40);
        *(int **)(unaff_EBP - 0x90) = piVar32;
        piVar28 = *(int **)(iVar17 + iVar14 * 4);
        *(int **)(unaff_EBP - 0xb4) = piVar28;
        iVar17 = *piVar28;
        *(int *)(unaff_EBP - 0xac) = iVar17;
        if (iVar17 == 0) {
          if (piVar28[4] < 1) goto LAB_004b0dd6;
          iVar17 = *(int *)(unaff_EBP - 0xe0) + piVar28[4] * 0x28;
          *(int *)(unaff_EBP - 0x48) = iVar17;
          if (*(char *)((int)piVar28 + 0x22) != '\0') {
            FUN_004b7c40(piVar32,(undefined8 *)(iVar17 + iVar15 * 0x28),0x1000);
            if ((*(ushort *)(*(int **)(unaff_EBP - 0x90) + 7) & 0x1000) == 0) goto LAB_004af834;
            iVar31 = FUN_004b7490(*(int **)(unaff_EBP - 0x90));
            unaff_EBX = *(int **)(unaff_EBP - 0xe4);
            if (iVar31 != 0) goto LAB_004b57a6;
            piVar28 = *(int **)(unaff_EBP - 0xd8);
            goto LAB_004b0d0b;
          }
          *(undefined4 *)(unaff_EBP - 0xcc) = *(undefined4 *)(iVar17 + 0x18);
          *(undefined4 *)(unaff_EBP - 0xb0) = *(undefined4 *)(iVar17 + 4);
          if ((*(byte *)(*(int *)(unaff_EBP - 0xdc) + 3 + iVar31 * 0x14) & 0x20) == 0) {
            iVar17 = *(int *)(*(int *)(unaff_EBP - 0xd4) + 0x50);
          }
          else {
            iVar17 = 0;
          }
          piVar28[0x14] = iVar17;
LAB_004b0f05:
          uVar18 = *(uint *)(unaff_EBP - 0xcc);
LAB_004b0f0b:
          iVar17 = *(int *)(unaff_EBP - 0xb4);
LAB_004b0f11:
          if (uVar18 != 0) {
            unaff_EBX = *(int **)(unaff_EBP - 0xe4);
            if ((uint)unaff_EBX[0x14] < uVar18) goto LAB_004b5780;
            iVar23 = *(int *)(iVar17 + 0x14);
            iVar15 = *(int *)(unaff_EBP - 0xd4);
            *(int *)(unaff_EBP - 0xa0) = iVar23;
            iVar14 = *(int *)(iVar17 + 0x58);
            *(int *)(unaff_EBP - 0xa8) = iVar14;
            unaff_EBX = *(int **)(unaff_EBP - 0xe4);
            if (*(int *)(iVar17 + 0x50) == *(int *)(iVar15 + 0x50)) {
              iVar17 = *(int *)(iVar17 + 0x5c);
              *(int *)(unaff_EBP - 0xa4) = iVar17;
LAB_004b11c6:
              iVar23 = *(int *)(unaff_EBP - 0xb8);
              if (*(int *)(iVar17 + iVar23 * 4) == 0) {
                if (*(char *)(*(int *)(unaff_EBP - 0xdc) + 1 + iVar31 * 0x14) == -8) {
                  FUN_004b7c40(*(int **)(unaff_EBP - 0x90),
                               *(undefined8 **)(*(int *)(unaff_EBP - 0xdc) + 0x10 + iVar31 * 0x14),
                               0x800);
                }
                else {
                  *(ushort *)(*(int *)(unaff_EBP - 0x90) + 0x1c) =
                       *(ushort *)(*(int *)(unaff_EBP - 0x90) + 0x1c) & 0xbe01 | 1;
                }
              }
              else {
                if (*(int *)(unaff_EBP - 0xb0) == 0) {
                  uVar18 = *(uint *)(iVar14 + iVar23 * 4);
                  iVar17 = *(int *)(unaff_EBP - 0xdc);
                  *(uint *)(unaff_EBP - 0x4c) = uVar18;
                  bVar10 = *(byte *)(iVar17 + 3 + iVar31 * 0x14);
                  if (((bVar10 & 0xc0) == 0) ||
                     (((uVar18 < 0xc || ((uVar18 & 1) != 0)) && (-1 < (char)bVar10)))) {
                    uVar18 = FUN_004b8bf0(uVar18);
                    puVar34 = *(undefined8 **)(unaff_EBP - 0x90);
                    *(uint *)(unaff_EBP - 0x9c) = uVar18;
                    FUN_004b7500((int *)(unaff_EBP - 0x8c),puVar34);
                    uVar18 = FUN_004b70b0(*(int **)(unaff_EBP - 0xac),
                                          *(uint *)(*(int *)(unaff_EBP - 0xa4) +
                                                   *(int *)(unaff_EBP - 0xb8) * 4),
                                          *(size_t *)(unaff_EBP - 0x9c),
                                          (uint)*(byte *)(*(int *)(unaff_EBP - 0xb4) + 0x1f),
                                          (int *)(unaff_EBP - 0x8c));
                    *(uint *)(unaff_EBP - 0xd0) = uVar18;
                    if (uVar18 != 0) goto LAB_004b0616;
                    pcVar24 = *(char **)(unaff_EBP - 0x88);
                    uVar18 = *(uint *)(unaff_EBP - 0x4c);
                  }
                  else {
                    pcVar24 = (char *)(-(uint)(uVar18 < 0xc) & unaff_EBP - 0xc4);
                  }
                  piVar28 = *(int **)(unaff_EBP - 0x90);
                  *(char **)(unaff_EBP - 0x94) = pcVar24;
                }
                else {
                  piVar28 = *(int **)(unaff_EBP - 0x90);
                  if ((*(ushort *)(piVar28 + 7) & 0x2460) != 0) {
                    FUN_004b7720(piVar28);
                    piVar28 = *(int **)(unaff_EBP - 0x90);
                    iVar17 = *(int *)(unaff_EBP - 0xa4);
                    iVar14 = *(int *)(unaff_EBP - 0xa8);
                    iVar23 = *(int *)(unaff_EBP - 0xb8);
                  }
                  pcVar24 = (char *)(*(int *)(iVar17 + iVar23 * 4) + *(int *)(unaff_EBP - 0xb0));
                  uVar18 = *(uint *)(iVar14 + iVar23 * 4);
                }
                FUN_004b87d0(pcVar24,uVar18,(int)piVar28);
                *(undefined1 *)(*(int *)(unaff_EBP - 0x90) + 0x1f) =
                     *(undefined1 *)(unaff_EBP - 0xec);
              }
              if (*(int *)(unaff_EBP - 0x68) != 0) {
                puVar1 = (ushort *)(*(int *)(unaff_EBP - 0x90) + 0x1c);
                *puVar1 = *puVar1 & 0xe7ff;
                puVar1 = (ushort *)(*(int *)(unaff_EBP - 0x90) + 0x1c);
                *puVar1 = *puVar1 | 0x200;
                *(undefined4 *)(*(int *)(unaff_EBP - 0x90) + 4) = *(undefined4 *)(unaff_EBP - 0x88);
                *(undefined4 *)(*(int *)(unaff_EBP - 0x90) + 0x24) =
                     *(undefined4 *)(unaff_EBP - 0x68);
              }
              uVar18 = FUN_004b7490(*(int **)(unaff_EBP - 0x90));
              piVar28 = *(int **)(unaff_EBP - 0xd8);
              *(uint *)(unaff_EBP - 0xd0) = uVar18;
            }
            else {
              iVar14 = iVar14 + iVar23 * 4;
              *(int *)(unaff_EBP - 0xa4) = iVar14;
              *(undefined4 *)(unaff_EBP - 0x50) = 0;
              *(int *)(iVar17 + 0x5c) = iVar14;
              *(undefined4 *)(*(int *)(unaff_EBP - 0xb4) + 0x54) = *(undefined4 *)(unaff_EBP - 0xcc)
              ;
              *(undefined4 *)(*(int *)(unaff_EBP - 0xb4) + 0x50) =
                   *(undefined4 *)(*(int *)(unaff_EBP - 0xd4) + 0x50);
              pbVar35 = *(byte **)(unaff_EBP - 0xb0);
              if (pbVar35 == (byte *)0x0) {
                if (*(char *)(*(int *)(unaff_EBP - 0xb4) + 0x1f) == '\0') {
                  iVar17 = FUN_0048f8b0(*(int *)(unaff_EBP - 0xac),(uint *)(unaff_EBP - 0x50));
                }
                else {
                  iVar17 = FUN_00490640(*(int *)(unaff_EBP - 0xac),(uint *)(unaff_EBP - 0x50));
                }
                uVar30 = *(uint *)(unaff_EBP - 0xcc);
                uVar18 = *(uint *)(unaff_EBP - 0x50);
                iVar14 = *(int *)(unaff_EBP - 0xb4);
                *(int *)(unaff_EBP - 0x94) = iVar17;
                if (uVar18 < uVar30) {
                  *(undefined4 *)(iVar14 + 0x60) = 0;
                }
                else {
                  *(int *)(unaff_EBP - 0xb0) = iVar17;
                  *(int *)(iVar14 + 0x60) = iVar17;
                }
                pbVar35 = *(byte **)(unaff_EBP - 0x94);
              }
              else {
                *(byte **)(unaff_EBP - 0x94) = pbVar35;
              }
              if (*pbVar35 < 0x80) {
                uVar18 = (uint)*pbVar35;
                *(uint *)(unaff_EBP - 0x5c) = uVar18;
                uVar30 = 1;
              }
              else {
                uVar30 = FUN_0049d440(pbVar35,(uint *)(unaff_EBP - 0x5c));
                uVar18 = *(uint *)(unaff_EBP - 0x5c);
                pbVar35 = *(byte **)(unaff_EBP - 0x94);
                uVar30 = uVar30 & 0xff;
              }
              *(uint *)(unaff_EBP - 0x54) = uVar30;
              if (uVar18 < 0x18004) {
                iVar17 = *(int *)(unaff_EBP - 0xa0);
                sVar22 = iVar17 * 5 + 3;
                if ((int)uVar18 < (int)sVar22) {
                  sVar22 = uVar18;
                }
                iVar14 = *(int *)(unaff_EBP - 0xb0);
                *(size_t *)(unaff_EBP - 0x9c) = sVar22;
                if ((iVar14 == 0) && (*(int *)(unaff_EBP - 0x50) < (int)sVar22)) {
                  *(undefined2 *)(unaff_EBP - 0x70) = 0;
                  *(undefined4 *)(unaff_EBP - 0x8c) = 0;
                  uVar18 = FUN_004b70b0(*(int **)(unaff_EBP - 0xac),0,sVar22,
                                        (uint)*(byte *)(*(int *)(unaff_EBP - 0xb4) + 0x1f),
                                        (int *)(unaff_EBP - 0x8c));
                  *(uint *)(unaff_EBP - 0xd0) = uVar18;
                  if (uVar18 != 0) goto LAB_004af834;
                  pbVar35 = *(byte **)(unaff_EBP - 0x88);
                  uVar18 = *(uint *)(unaff_EBP - 0x5c);
                  sVar22 = *(size_t *)(unaff_EBP - 0x9c);
                  iVar17 = *(int *)(unaff_EBP - 0xa0);
                  *(byte **)(unaff_EBP - 0x94) = pbVar35;
                }
                pbVar16 = pbVar35 + sVar22;
                pbVar35 = pbVar35 + *(int *)(unaff_EBP - 0x54);
                iVar14 = 0;
                *(byte **)(unaff_EBP - 0x60) = pbVar16;
                *(byte **)(unaff_EBP - 100) = pbVar35;
                *(undefined4 *)(unaff_EBP - 0x98) = 0;
                if (0 < iVar17) {
                  do {
                    if (pbVar35 < pbVar16) {
                      *(uint *)(*(int *)(unaff_EBP - 0xa4) + iVar14 * 4) = uVar18;
                      pbVar35 = *(byte **)(unaff_EBP - 100);
                      if (*pbVar35 < 0x80) {
                        uVar18 = (uint)*pbVar35;
                        *(uint *)(unaff_EBP - 0x4c) = uVar18;
                        *(byte **)(unaff_EBP - 100) = pbVar35 + 1;
                      }
                      else {
                        uVar30 = FUN_0049d440(pbVar35,(uint *)(unaff_EBP - 0x4c));
                        uVar18 = *(uint *)(unaff_EBP - 0x4c);
                        *(int *)(unaff_EBP - 100) = *(int *)(unaff_EBP - 100) + (uVar30 & 0xff);
                      }
                      *(uint *)(*(int *)(unaff_EBP - 0xa8) + *(int *)(unaff_EBP - 0x98) * 4) =
                           uVar18;
                      uVar30 = FUN_004b8bf0(*(uint *)(unaff_EBP - 0x4c));
                      uVar18 = *(int *)(unaff_EBP - 0x5c) + uVar30;
                      *(uint *)(unaff_EBP - 0x58) = uVar30;
                      *(uint *)(unaff_EBP - 0x5c) = uVar18;
                      if (uVar18 < uVar30) {
                        *(int *)(unaff_EBP - 100) = *(int *)(unaff_EBP - 0x60) + 1;
                        break;
                      }
                    }
                    else {
                      *(undefined4 *)(*(int *)(unaff_EBP - 0xa4) + iVar14 * 4) = 0;
                      uVar18 = *(uint *)(unaff_EBP - 0x5c);
                    }
                    iVar14 = *(int *)(unaff_EBP - 0x98) + 1;
                    *(int *)(unaff_EBP - 0x98) = iVar14;
                    if (*(int *)(unaff_EBP - 0xa0) <= iVar14) break;
                    pbVar16 = *(byte **)(unaff_EBP - 0x60);
                    pbVar35 = *(byte **)(unaff_EBP - 100);
                  } while( true );
                }
                FUN_004b76e0((int *)(unaff_EBP - 0x8c));
                uVar18 = *(uint *)(unaff_EBP - 100);
                uVar30 = *(uint *)(unaff_EBP - 0x60);
                *(undefined2 *)(unaff_EBP - 0x70) = 1;
                if (uVar18 <= uVar30) {
                  if ((*(uint *)(unaff_EBP - 0x5c) <= *(uint *)(unaff_EBP - 0xcc)) &&
                     ((uVar18 != uVar30 ||
                      (*(uint *)(unaff_EBP - 0x5c) == *(uint *)(unaff_EBP - 0xcc))))) {
                    iVar17 = *(int *)(unaff_EBP - 0xa4);
                    iVar14 = *(int *)(unaff_EBP - 0xa8);
                    unaff_EBX = *(int **)(unaff_EBP - 0xe4);
                    goto LAB_004b11c6;
                  }
                }
                uVar27 = FUN_00493af0();
                unaff_EBX = *(int **)(unaff_EBP - 0xe4);
                piVar28 = *(int **)(unaff_EBP - 0xd8);
                *(undefined4 *)(unaff_EBP - 0xd0) = uVar27;
                goto LAB_004b0d0b;
              }
              uVar18 = FUN_00493af0();
              piVar28 = *(int **)(unaff_EBP - 0xd8);
              *(uint *)(unaff_EBP - 0xd0) = uVar18;
            }
            goto LAB_004b0d11;
          }
          piVar32 = *(int **)(unaff_EBP - 0x90);
        }
        else {
          uVar18 = FUN_004af1b0(piVar28);
          *(uint *)(unaff_EBP - 0xd0) = uVar18;
          if (uVar18 != 0) {
LAB_004b5720:
            uVar18 = *(uint *)(unaff_EBP - 0xd0);
            unaff_EBX = *(int **)(unaff_EBP - 0xe4);
            goto LAB_004b572c;
          }
          iVar17 = *(int *)(unaff_EBP - 0xb4);
          if (*(char *)(iVar17 + 0x1c) == '\0') {
            if (*(int *)(iVar17 + 0x50) != *(int *)(iVar23 + 0x50)) {
              if (*(char *)(iVar17 + 0x1f) == '\0') {
                FUN_0048f8d0(*(int *)(unaff_EBP - 0xac),(undefined4 *)(unaff_EBP - 0xcc));
                goto LAB_004b0f05;
              }
              FUN_004906b0(*(int *)(unaff_EBP - 0xac),(undefined4 *)(unaff_EBP - 0xc4));
              uVar18 = *(uint *)(unaff_EBP - 0xc4);
              *(uint *)(unaff_EBP - 0xcc) = uVar18;
              goto LAB_004b0f0b;
            }
            uVar18 = *(uint *)(iVar17 + 0x54);
            *(uint *)(unaff_EBP - 0xcc) = uVar18;
            *(undefined4 *)(unaff_EBP - 0xb0) = *(undefined4 *)(iVar17 + 0x60);
            goto LAB_004b0f11;
          }
          piVar32 = *(int **)(unaff_EBP - 0x90);
LAB_004b0dd6:
          *(undefined4 *)(unaff_EBP - 0xcc) = 0;
        }
        unaff_EBX = *(int **)(unaff_EBP - 0xe4);
        piVar28 = *(int **)(unaff_EBP - 0xd8);
        *(ushort *)(piVar32 + 7) = *(ushort *)(piVar32 + 7) & 0xbe01 | 1;
        goto LAB_004b0d0b;
      case 0x1e:
        pcVar24 = *(char **)(iVar17 + 0x10 + iVar31 * 0x14);
        *(char **)(unaff_EBP - 0xcc) = pcVar24;
        piVar28 = (int *)(*(int *)(unaff_EBP - 0xe0) + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x28);
        cVar9 = *pcVar24;
        *(char *)(unaff_EBP - 200) = cVar9;
        if (cVar9 != '\0') {
          do {
            *(char **)(unaff_EBP - 0xcc) = pcVar24 + 1;
            if ((*(ushort *)(piVar28 + 7) & 0x4000) != 0) {
              FUN_004b6fa0(piVar28);
            }
            FUN_004ae250(piVar28,(char)*(undefined4 *)(unaff_EBP - 200),
                         (byte)*(undefined4 *)(unaff_EBP - 0xec));
            pcVar24 = *(char **)(unaff_EBP - 0xcc);
            cVar9 = *pcVar24;
            piVar28 = piVar28 + 10;
            *(char *)(unaff_EBP - 200) = cVar9;
          } while (cVar9 != '\0');
          unaff_EBX = *(int **)(unaff_EBP - 0xe4);
        }
        piVar28 = *(int **)(unaff_EBP - 0xd8);
        *(char **)(unaff_EBP - 0xcc) = pcVar24 + 1;
        goto LAB_004b0d0b;
      case 0x1f:
        iVar14 = *(int *)(unaff_EBP - 0xdc);
        uVar30 = 0;
        *(undefined4 *)(unaff_EBP - 0xbc) = 0;
        uVar18 = 0;
        *(undefined4 *)(unaff_EBP - 0xac) = 0;
        *(undefined8 *)(unaff_EBP - 0xc4) = 0;
        iVar17 = *(int *)(iVar14 + 4 + iVar31 * 0x14);
        *(int *)(unaff_EBP - 0x98) = iVar17;
        uVar27 = *(undefined4 *)(iVar14 + 0x10 + iVar31 * 0x14);
        *(undefined4 *)(unaff_EBP - 0x94) = uVar27;
        *(undefined4 *)(unaff_EBP - 0xf0) = uVar27;
        iVar17 = *(int *)(unaff_EBP - 0xe0) + iVar17 * 0x28;
        *(int *)(unaff_EBP - 0xa0) = iVar17;
        iVar23 = *(int *)(iVar14 + 8 + iVar31 * 0x14);
        *(int *)(unaff_EBP - 0x98) = iVar23;
        piVar32 = (int *)((iVar17 + iVar23 * 0x28) - 0x28);
        *(uint *)(unaff_EBP - 0x90) = (uint)*(byte *)(*(int *)(unaff_EBP - 0xd4) + 0x5d);
        *(int **)(unaff_EBP - 0x9c) = piVar32;
        *(int *)(unaff_EBP - 0xd8) =
             *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar14 + 0xc + iVar31 * 0x14) * 0x28;
        piVar28 = *(int **)(unaff_EBP - 0xa0);
        *(int **)(unaff_EBP - 200) = piVar28;
        if (piVar28 <= piVar32) {
          uVar18 = 0;
          piVar32 = piVar28;
          do {
            if (*(int *)(unaff_EBP - 0xf0) != 0) {
              FUN_004ae250(piVar32,*(char *)(((int)piVar32 - (int)piVar28) / 0x28 +
                                            *(int *)(unaff_EBP - 0xf0)),
                           (byte)*(undefined4 *)(unaff_EBP - 0xec));
              uVar18 = *(uint *)(unaff_EBP - 0xac);
              piVar32 = *(int **)(unaff_EBP - 200);
              *(undefined4 *)(unaff_EBP - 0xf0) = *(undefined4 *)(unaff_EBP - 0x94);
            }
            if (((*(ushort *)(piVar32 + 7) & 0x4000) != 0) && (0 < piVar32[6])) {
              FUN_004b6fa0(piVar32);
              uVar18 = *(uint *)(unaff_EBP - 0xac);
              piVar32 = *(int **)(unaff_EBP - 200);
              *(undefined4 *)(unaff_EBP - 0xf0) = *(undefined4 *)(unaff_EBP - 0x94);
            }
            uVar30 = FUN_004b8ae0((int)piVar32,*(int *)(unaff_EBP - 0x90));
            *(uint *)(unaff_EBP - 0xa4) = uVar30;
            uVar25 = FUN_004b8bf0(uVar30);
            puVar21 = (uint *)(unaff_EBP - 0xc4);
            uVar30 = *puVar21;
            *puVar21 = *puVar21 + uVar25;
            *(int *)(unaff_EBP - 0xc0) =
                 *(int *)(unaff_EBP - 0xc0) + ((int)uVar25 >> 0x1f) + (uint)CARRY4(uVar30,uVar25);
            *(uint *)(unaff_EBP - 0x88) = uVar25;
            iVar31 = FUN_004ae730(extraout_ECX,0);
            uVar30 = *(int *)(unaff_EBP - 0xbc) + iVar31;
            *(uint *)(unaff_EBP - 0xbc) = uVar30;
            if ((*(ushort *)(piVar32 + 7) & 0x4000) == 0) {
              if (uVar25 != 0) {
                uVar18 = 0;
              }
            }
            else {
              uVar18 = uVar18 + piVar32[4];
            }
            piVar28 = *(int **)(unaff_EBP - 0xa0);
            piVar32 = piVar32 + 10;
            *(uint *)(unaff_EBP - 0xac) = uVar18;
            *(int **)(unaff_EBP - 200) = piVar32;
          } while (piVar32 <= *(int **)(unaff_EBP - 0x9c));
        }
        iVar31 = FUN_004ae730(uVar30,(int)uVar30 >> 0x1f);
        uVar30 = *(int *)(unaff_EBP - 0xbc) + iVar31;
        *(int *)(unaff_EBP - 0xa8) = iVar31;
        *(uint *)(unaff_EBP - 0xbc) = uVar30;
        iVar17 = FUN_004ae730(uVar30,(int)uVar30 >> 0x1f);
        if (iVar31 < iVar17) {
          uVar30 = uVar30 + 1;
          *(uint *)(unaff_EBP - 0xbc) = uVar30;
        }
        iVar31 = *(int *)(unaff_EBP - 0xe4);
        uVar25 = (uVar30 - uVar18) + *(uint *)(unaff_EBP - 0xc4);
        iVar17 = ((((int)uVar30 >> 0x1f) - ((int)uVar18 >> 0x1f)) - (uint)(uVar30 < uVar18)) +
                 *(int *)(unaff_EBP - 0xc0) +
                 (uint)CARRY4(uVar30 - uVar18,*(uint *)(unaff_EBP - 0xc4));
        *(uint *)(unaff_EBP - 0xb4) = uVar25;
        *(int *)(unaff_EBP - 0xb0) = iVar17;
        uVar18 = *(uint *)(iVar31 + 0x50);
        iVar31 = (int)uVar18 >> 0x1f;
        if ((iVar31 < iVar17) || ((iVar31 <= iVar17 && (uVar18 < uVar25)))) {
LAB_004b577a:
          unaff_EBX = *(int **)(unaff_EBP - 0xe4);
          goto LAB_004b5780;
        }
        piVar32 = *(int **)(unaff_EBP - 0xd8);
        iVar31 = FUN_004b7260(piVar32,uVar25,0);
        if (iVar31 != 0) {
LAB_004b57a0:
          unaff_EBX = *(int **)(unaff_EBP - 0xe4);
          goto LAB_004b57a6;
        }
        uVar18 = *(uint *)(unaff_EBP - 0xbc);
        pbVar35 = (byte *)piVar32[1];
        *(byte **)(unaff_EBP - 0xcc) = pbVar35;
        if (uVar18 < 0x80) {
          *pbVar35 = (byte)uVar18;
          uVar18 = 1;
        }
        else {
          uVar18 = FUN_004a60c0(pbVar35,uVar18);
        }
        uVar30 = *(uint *)(unaff_EBP - 0x9c);
        uVar18 = uVar18 & 0xff;
        uVar25 = *(uint *)(unaff_EBP - 0xa0);
        *(uint *)(unaff_EBP - 0x8c) = uVar18;
        *(uint *)(unaff_EBP - 200) = uVar25;
        if (uVar25 <= uVar30) {
          do {
            uVar30 = FUN_004b8ae0(uVar25,*(int *)(unaff_EBP - 0x90));
            *(uint *)(unaff_EBP - 0xa4) = uVar30;
            if (uVar30 < 0x80) {
              *(char *)(uVar18 + *(int *)(unaff_EBP - 0xcc)) = (char)uVar30;
              uVar18 = 1;
            }
            else {
              uVar18 = FUN_004a60c0((byte *)(*(int *)(unaff_EBP - 0xcc) + uVar18),uVar30);
            }
            uVar30 = *(uint *)(unaff_EBP - 0x9c);
            uVar18 = *(int *)(unaff_EBP - 0x8c) + (uVar18 & 0xff);
            uVar25 = *(int *)(unaff_EBP - 200) + 0x28;
            *(uint *)(unaff_EBP - 0x8c) = uVar18;
            *(uint *)(unaff_EBP - 200) = uVar25;
          } while (uVar25 <= uVar30);
          uVar25 = *(uint *)(unaff_EBP - 0xa0);
        }
        *(uint *)(unaff_EBP - 200) = uVar25;
        if (uVar25 <= uVar30) {
          do {
            uVar18 = FUN_004b8a30((void *)(*(int *)(unaff_EBP - 0xcc) + uVar18),
                                  *(int *)(unaff_EBP - 0xb4) - uVar18,uVar25,
                                  *(int *)(unaff_EBP - 0x90));
            uVar18 = *(int *)(unaff_EBP - 0x8c) + uVar18;
            uVar25 = *(int *)(unaff_EBP - 200) + 0x28;
            *(uint *)(unaff_EBP - 0x8c) = uVar18;
            *(uint *)(unaff_EBP - 200) = uVar25;
          } while (uVar25 <= *(uint *)(unaff_EBP - 0x9c));
        }
        piVar32[6] = *(int *)(unaff_EBP - 0xb4);
        *(undefined2 *)(piVar32 + 7) = 0x410;
        piVar32[8] = 0;
        if (*(int *)(unaff_EBP - 0xac) != 0) {
          piVar32[4] = *(int *)(unaff_EBP - 0xac);
          *(undefined2 *)(piVar32 + 7) = 0x4410;
        }
        unaff_EBX = *(int **)(unaff_EBP - 0xe4);
        piVar28 = *(int **)(unaff_EBP - 0xd8);
        *(undefined1 *)((int)piVar32 + 0x1f) = 1;
        goto LAB_004b0d0b;
      case 0x20:
        piVar32 = (int *)**(undefined4 **)
                           (*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                           *(int *)(iVar17 + 4 + iVar31 * 0x14) * 4);
        *(int **)(unaff_EBP - 0xc4) = piVar32;
        if (piVar32 == (int *)0x0) {
          *(undefined8 *)(unaff_EBP - 0xcc) = 0;
          piVar28[4] = *(int *)(unaff_EBP - 0xcc);
          piVar28[5] = *(int *)(unaff_EBP - 200);
        }
        else {
          iVar31 = FUN_0048f530(piVar32,(uint *)(unaff_EBP - 0xcc));
          *(int *)(unaff_EBP - 0xd0) = iVar31;
          piVar28[4] = *(int *)(unaff_EBP - 0xcc);
          piVar28[5] = *(int *)(unaff_EBP - 200);
        }
        goto LAB_004b0d0b;
      case 0x21:
        iVar14 = *(int *)(iVar17 + 4 + iVar31 * 0x14);
        *(int *)(unaff_EBP - 0xcc) = iVar14;
        pbVar35 = *(byte **)(iVar17 + 0x10 + iVar31 * 0x14);
        *(byte **)(unaff_EBP - 0xf0) = pbVar35;
        *(byte **)(unaff_EBP - 200) = pbVar35;
        if (iVar14 == 0) {
          unaff_EBX = *(int **)(unaff_EBP - 0xe4);
          if (unaff_EBX[0x22] < 1) {
            uVar18 = FUN_004aa9b0((char *)pbVar35);
            *(uint *)(unaff_EBP - 0xc4) = uVar18;
            uVar18 = FUN_004b9ef0((int)unaff_EBX,0,unaff_EBX[0x79] + unaff_EBX[0x78]);
            *(uint *)(unaff_EBP - 0xd0) = uVar18;
            if (uVar18 != 0) goto LAB_004b572c;
            piVar32 = FUN_00494b90((int)unaff_EBX,*(int *)(unaff_EBP - 0xc4) + 0x19);
            *(int **)(unaff_EBP - 0xc0) = piVar32;
            if (piVar32 != (int *)0x0) {
              *piVar32 = (int)(piVar32 + 6);
              memcpy((void *)**(undefined4 **)(unaff_EBP - 0xc0),*(void **)(unaff_EBP - 200),
                     *(int *)(unaff_EBP - 0xc4) + 1);
              if (*(char *)((int)unaff_EBX + 0x36) == '\0') {
                unaff_EBX[0x78] = unaff_EBX[0x78] + 1;
              }
              else {
                *(undefined1 *)((int)unaff_EBX + 0x36) = 0;
                *(undefined1 *)((int)unaff_EBX + 0x3d) = 1;
              }
              *(int *)(*(int *)(unaff_EBP - 0xc0) + 0x10) = unaff_EBX[0x76];
              unaff_EBX[0x76] = *(int *)(unaff_EBP - 0xc0);
              *(int *)(*(int *)(unaff_EBP - 0xc0) + 8) = unaff_EBX[0x7a];
              *(int *)(*(int *)(unaff_EBP - 0xc0) + 0xc) = unaff_EBX[0x7b];
            }
            goto LAB_004b0d0b;
          }
          pcVar24 = "cannot open savepoint - SQL statements in progress";
LAB_004b188b:
          FUN_004a9a30((int *)(*(int *)(unaff_EBP - 0xd4) + 0x34),(int)unaff_EBX,(byte *)pcVar24);
          uVar18 = 5;
          *(undefined4 *)(unaff_EBP - 0xd0) = 5;
        }
        else {
          iVar31 = *(int *)(unaff_EBP - 0xe4);
          iVar17 = 0;
          *(undefined4 *)(unaff_EBP - 0xb4) = 0;
          puVar26 = *(undefined4 **)(iVar31 + 0x1d8);
          *(undefined4 **)(unaff_EBP - 0xbc) = puVar26;
joined_r0x004b1994:
          if (puVar26 == (undefined4 *)0x0) goto LAB_004b19bf;
          iVar31 = FUN_004bcc60((byte *)*puVar26,pbVar35);
          if (iVar31 != 0) goto code_r0x004b19a5;
          unaff_EBX = *(int **)(unaff_EBP - 0xe4);
          if ((0 < unaff_EBX[0x22]) && (iVar14 == 1)) {
            FUN_004a9a30((int *)(*(int *)(unaff_EBP - 0xd4) + 0x34),(int)unaff_EBX,
                         (byte *)"cannot release savepoint - SQL statements in progress");
            piVar28 = *(int **)(unaff_EBP - 0xd8);
            uVar18 = 5;
            *(undefined4 *)(unaff_EBP - 0xd0) = 5;
            goto LAB_004b0d11;
          }
          if ((puVar26[4] == 0) && (*(char *)((int)unaff_EBX + 0x3d) != '\0')) {
            *(undefined4 *)(unaff_EBP - 0xf0) = 1;
            if (iVar14 == 1) {
              piVar28 = *(int **)(unaff_EBP - 0xd4);
              iVar31 = FUN_004aeea0(piVar28,1);
              if (iVar31 != 0) goto LAB_004b5847;
              iVar31 = *(int *)(unaff_EBP - 0xe4);
              *(undefined1 *)(iVar31 + 0x36) = 1;
              iVar17 = FUN_004b60e0(piVar28);
              if (iVar17 != 5) {
                *(undefined1 *)(iVar31 + 0x3d) = 0;
                *(int *)(unaff_EBP - 0xd0) = piVar28[0x16];
                goto LAB_004b1b7c;
              }
              piVar28[0x15] = *(int *)(unaff_EBP - 0xe8);
              *(undefined1 *)(iVar31 + 0x36) = 0;
              goto LAB_004b564b;
            }
          }
          else {
            *(undefined4 *)(unaff_EBP - 0xf0) = 0;
          }
          iVar31 = *(int *)(unaff_EBP - 0xe4);
          *(int *)(unaff_EBP - 0xb4) = (unaff_EBX[0x78] - iVar17) + -1;
          if (iVar14 == 2) {
            iVar17 = 0;
            *(undefined4 *)(unaff_EBP - 0xb0) = 0;
            if (0 < *(int *)(iVar31 + 0x14)) {
              do {
                FUN_00491f60(*(undefined4 **)(*(int *)(iVar31 + 0x10) + 4 + iVar17 * 0x10),4);
                iVar17 = *(int *)(unaff_EBP - 0xb0) + 1;
                *(int *)(unaff_EBP - 0xb0) = iVar17;
              } while (iVar17 < *(int *)(iVar31 + 0x14));
              puVar26 = *(undefined4 **)(unaff_EBP - 0xbc);
              iVar14 = *(int *)(unaff_EBP - 0xcc);
            }
          }
          iVar17 = 0;
          *(undefined4 *)(unaff_EBP - 0xb0) = 0;
          if (0 < *(int *)(iVar31 + 0x14)) {
            while( true ) {
              unaff_EBX = *(int **)(unaff_EBP - 0xe4);
              uVar18 = FUN_00491910(*(undefined4 **)(unaff_EBX[4] + 4 + iVar17 * 0x10),iVar14,
                                    *(int *)(unaff_EBP - 0xb4));
              *(uint *)(unaff_EBP - 0xd0) = uVar18;
              if (uVar18 != 0) break;
              iVar17 = *(int *)(unaff_EBP - 0xb0) + 1;
              *(int *)(unaff_EBP - 0xb0) = iVar17;
              iVar14 = *(int *)(unaff_EBP - 0xcc);
              if (unaff_EBX[5] <= iVar17) {
                puVar26 = *(undefined4 **)(unaff_EBP - 0xbc);
                iVar31 = *(int *)(unaff_EBP - 0xe4);
                goto LAB_004b1b60;
              }
            }
            goto LAB_004b572c;
          }
LAB_004b1b60:
          if ((iVar14 == 2) && ((*(byte *)(iVar31 + 0x18) & 2) != 0)) {
            FUN_00496370(iVar31);
            FUN_004a6940(iVar31);
            *(uint *)(iVar31 + 0x18) = *(uint *)(iVar31 + 0x18) | 2;
LAB_004b1b7c:
            iVar14 = *(int *)(unaff_EBP - 0xcc);
            puVar26 = *(undefined4 **)(unaff_EBP - 0xbc);
          }
          if (*(undefined4 **)(iVar31 + 0x1d8) != puVar26) {
            do {
              iVar17 = *(int *)(iVar31 + 0x1d8);
              *(int *)(unaff_EBP - 0xb8) = iVar17;
              *(undefined4 *)(iVar31 + 0x1d8) = *(undefined4 *)(iVar17 + 0x10);
              FUN_00494b00(iVar31,*(undefined4 **)(unaff_EBP - 0xb8));
              *(int *)(iVar31 + 0x1e0) = *(int *)(iVar31 + 0x1e0) + -1;
              puVar26 = *(undefined4 **)(unaff_EBP - 0xbc);
            } while (*(undefined4 **)(iVar31 + 0x1d8) != puVar26);
            iVar14 = *(int *)(unaff_EBP - 0xcc);
          }
          unaff_EBX = *(int **)(unaff_EBP - 0xe4);
          if (iVar14 != 1) {
            iVar31 = *(int *)(unaff_EBP - 0xf0);
            unaff_EBX[0x7a] = puVar26[2];
            unaff_EBX[0x7b] = puVar26[3];
            if (iVar31 == 0) goto LAB_004b1c25;
            goto LAB_004af570;
          }
          unaff_EBX[0x76] = puVar26[4];
          FUN_00494b00((int)unaff_EBX,*(undefined4 **)(unaff_EBP - 0xbc));
          if (*(int *)(unaff_EBP - 0xf0) != 0) goto LAB_004af570;
          unaff_EBX[0x78] = unaff_EBX[0x78] + -1;
LAB_004b1c25:
          uVar18 = FUN_004b9ef0((int)unaff_EBX,*(int *)(unaff_EBP - 0xcc),*(int *)(unaff_EBP - 0xb4)
                               );
          *(uint *)(unaff_EBP - 0xd0) = uVar18;
          if (uVar18 != 0) goto LAB_004b572c;
          piVar28 = *(int **)(unaff_EBP - 0xd8);
        }
        goto LAB_004b0d11;
      case 0x22:
        uVar18 = *(uint *)(iVar17 + 4 + iVar31 * 0x14);
        iVar17 = *(int *)(unaff_EBP - 0xdc);
        *(uint *)(unaff_EBP - 0xcc) = uVar18;
        iVar31 = *(int *)(iVar17 + 8 + iVar31 * 0x14);
        *(int *)(unaff_EBP - 200) = iVar31;
        if ((uVar18 == 0) || (*(char *)((int)unaff_EBX + 0x36) != '\0')) {
          *(undefined4 *)(unaff_EBP - 0xc4) = 0;
        }
        else {
          *(undefined4 *)(unaff_EBP - 0xc4) = 1;
          if ((iVar31 == 0) && (0 < unaff_EBX[0x22])) {
            pcVar24 = "cannot commit transaction - SQL statements in progress";
            goto LAB_004b188b;
          }
        }
        if (uVar18 != *(byte *)((int)unaff_EBX + 0x36)) {
          if (iVar31 == 0) {
            iVar31 = FUN_004aeea0(*(int **)(unaff_EBP - 0xd4),1);
            if (iVar31 != 0) goto LAB_004b5847;
            piVar28 = *(int **)(unaff_EBP - 0xd4);
            *(undefined1 *)((int)unaff_EBX + 0x36) = *(undefined1 *)(unaff_EBP - 0xcc);
            iVar31 = FUN_004b60e0(piVar28);
            if (iVar31 == 5) {
              cVar9 = *(char *)(unaff_EBP - 0xcc);
              piVar28[0x15] = *(int *)(unaff_EBP - 0xe8);
              *(char *)((int)unaff_EBX + 0x36) = '\x01' - cVar9;
              *(undefined4 *)(*(int *)(unaff_EBP - 0xd4) + 0x58) = 5;
              goto LAB_004b5847;
            }
          }
          else {
            FUN_004a6c80((int)unaff_EBX,0x204);
            *(undefined1 *)((int)unaff_EBX + 0x36) = 1;
          }
          FUN_00492710((int)unaff_EBX);
          goto LAB_004b5847;
        }
        if (uVar18 == 0) {
          pcVar24 = "cannot start a transaction within a transaction";
        }
        else {
          pcVar24 = "cannot rollback - no transaction is active";
          if (iVar31 == 0) {
            pcVar24 = "cannot commit - no transaction is active";
          }
        }
        FUN_004a9a30((int *)(*(int *)(unaff_EBP - 0xd4) + 0x34),(int)unaff_EBX,(byte *)pcVar24);
        uVar18 = 1;
        *(undefined4 *)(unaff_EBP - 0xd0) = 1;
        goto LAB_004b0d11;
      case 0x23:
        piVar32 = *(int **)(unaff_EBX[4] + 4 + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x10);
        *(int **)(unaff_EBP - 0xcc) = piVar32;
        if (piVar32 == (int *)0x0) goto LAB_004b0d0b;
        uVar18 = FUN_0048ed50(piVar32,*(int *)(iVar17 + 8 + iVar31 * 0x14));
        *(uint *)(unaff_EBP - 0xd0) = uVar18;
        if (uVar18 == 5) {
          iVar31 = *(int *)(unaff_EBP - 0xd4);
          *(undefined4 *)(iVar31 + 0x54) = *(undefined4 *)(unaff_EBP - 0xe8);
          *(undefined4 *)(iVar31 + 0x58) = 5;
          goto LAB_004b5847;
        }
        if (uVar18 != 0) goto LAB_004b572c;
        if (((*(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar31 * 0x14) != 0) &&
            (iVar31 = *(int *)(unaff_EBP - 0xd4), (*(byte *)(iVar31 + 0x60) & 0x80) != 0)) &&
           ((*(char *)((int)unaff_EBX + 0x36) == '\0' || (1 < unaff_EBX[0x21])))) {
          if (*(int *)(iVar31 + 0x70) == 0) {
            unaff_EBX[0x79] = unaff_EBX[0x79] + 1;
            iVar31 = *(int *)(unaff_EBP - 0xd4);
            *(int *)(iVar31 + 0x70) = unaff_EBX[0x78] + unaff_EBX[0x79];
          }
          iVar31 = FUN_004b9ef0((int)unaff_EBX,0,*(int *)(iVar31 + 0x70) + -1);
          *(int *)(unaff_EBP - 0xd0) = iVar31;
          if (iVar31 == 0) {
            uVar27 = FUN_0048ed00(*(undefined4 **)(unaff_EBP - 0xcc),
                                  *(int *)(*(int *)(unaff_EBP - 0xd4) + 0x70));
            *(undefined4 *)(unaff_EBP - 0xd0) = uVar27;
          }
          iVar31 = *(int *)(unaff_EBP - 0xd4);
          *(int *)(iVar31 + 0x90) = unaff_EBX[0x7a];
          *(int *)(iVar31 + 0x94) = unaff_EBX[0x7b];
        }
        goto LAB_004b0d0b;
      case 0x24:
        iVar14 = *(int *)(iVar17 + 4 + iVar31 * 0x14);
        *(int *)(unaff_EBP - 200) = iVar14;
        iVar31 = *(int *)(iVar17 + 0xc + iVar31 * 0x14);
        *(int *)(unaff_EBP - 0xc4) = iVar31;
        FUN_0048fe70(*(undefined4 **)(unaff_EBX[4] + 4 + iVar14 * 0x10),iVar31,
                     (undefined4 *)(unaff_EBP - 0xcc));
        iVar31 = *(int *)(unaff_EBP - 0xcc);
        piVar28[4] = iVar31;
        piVar28[5] = iVar31 >> 0x1f;
        goto LAB_004b0d0b;
      case 0x25:
        iVar14 = *(int *)(unaff_EBP - 0xe0);
        *(int *)(unaff_EBP - 0xcc) = *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x10 + unaff_EBX[4];
        iVar14 = iVar14 + *(int *)(iVar17 + 0xc + iVar31 * 0x14) * 0x28;
        FUN_004b7410(iVar14);
        uVar18 = FUN_00492040(*(undefined4 **)(*(int *)(unaff_EBP - 0xcc) + 4),
                              *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar31 * 0x14),
                              *(undefined4 *)(iVar14 + 0x10));
        iVar17 = *(int *)(unaff_EBP - 0xdc);
        *(uint *)(unaff_EBP - 0xd0) = uVar18;
        iVar23 = *(int *)(iVar17 + 8 + iVar31 * 0x14);
        if (iVar23 == 1) {
          **(undefined4 **)(*(int *)(unaff_EBP - 0xcc) + 0xc) = *(undefined4 *)(iVar14 + 0x10);
          unaff_EBX[6] = unaff_EBX[6] | 2;
        }
        else if (iVar23 == 2) {
          *(undefined1 *)(*(int *)(*(int *)(unaff_EBP - 0xcc) + 0xc) + 0x4c) =
               *(undefined1 *)(iVar14 + 0x10);
        }
        if (*(int *)(iVar17 + 4 + iVar31 * 0x14) != 1) goto LAB_004af570;
        FUN_00496370((int)unaff_EBX);
        piVar28 = *(int **)(unaff_EBP - 0xd8);
        puVar21 = (uint *)(*(int *)(unaff_EBP - 0xd4) + 0x60);
        *puVar21 = *puVar21 & 0xffffffdf;
        goto LAB_004b0d0b;
      case 0x26:
        puVar26 = *(undefined4 **)(unaff_EBX[4] + 4 + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x10);
        *(undefined4 **)(unaff_EBP - 0xc4) = puVar26;
        if (puVar26 == (undefined4 *)0x0) {
          iVar14 = 0;
          *(undefined4 *)(unaff_EBP - 0xcc) = 0;
          iVar23 = 0;
        }
        else {
          FUN_0048fe70(puVar26,1,(undefined4 *)(unaff_EBP - 0xcc));
          iVar17 = *(int *)(unaff_EBP - 0xdc);
          iVar14 = *(int *)(unaff_EBP - 0xcc);
          iVar23 = *(int *)(*(int *)(unaff_EBX[4] + 0xc +
                                    *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x10) + 4);
        }
        *(int *)(unaff_EBP - 200) = iVar23;
        if ((iVar14 == *(int *)(iVar17 + 8 + iVar31 * 0x14)) &&
           (iVar23 == *(int *)(iVar17 + 0xc + iVar31 * 0x14))) goto LAB_004b0d0b;
        FUN_00494b00((int)unaff_EBX,*(undefined4 **)(*(int *)(unaff_EBP - 0xd4) + 0x34));
        puVar26 = FUN_00494db0((int)unaff_EBX,"database schema has changed");
        *(undefined4 **)(*(int *)(unaff_EBP - 0xd4) + 0x34) = puVar26;
        iVar31 = *(int *)(*(int *)(unaff_EBP - 0xdc) + 4 + iVar31 * 0x14);
        if (**(int **)(unaff_EBX[4] + 0xc + iVar31 * 0x10) != *(int *)(unaff_EBP - 0xcc)) {
          FUN_004a69a0((int)unaff_EBX,iVar31);
        }
        puVar21 = (uint *)(*(int *)(unaff_EBP - 0xd4) + 0x60);
        *puVar21 = *puVar21 | 0x20;
        uVar18 = 0x11;
        *(undefined4 *)(unaff_EBP - 0xd0) = 0x11;
        goto LAB_004b0d11;
      case 0x27:
      case 0x28:
        if ((*(byte *)(*(int *)(unaff_EBP - 0xd4) + 0x60) & 0x20) == 0) {
          iVar14 = *(int *)(unaff_EBP - 0xe4);
          iVar15 = 0;
          *(undefined4 *)(unaff_EBP - 0xcc) = 0;
          *(undefined4 *)(unaff_EBP - 200) = 0;
          iVar23 = *(int *)(iVar17 + 8 + iVar31 * 0x14);
          *(int *)(unaff_EBP - 0xc4) = iVar23;
          iVar17 = *(int *)(iVar17 + 0xc + iVar31 * 0x14);
          *(int *)(unaff_EBP - 0xc0) = iVar17;
          iVar14 = iVar17 * 0x10 + *(int *)(iVar14 + 0x10);
          *(int *)(unaff_EBP - 0xb0) = iVar14;
          *(undefined4 *)(unaff_EBP - 0xb8) = *(undefined4 *)(iVar14 + 4);
          if (*(char *)(*(int *)(unaff_EBP - 0xdc) + iVar31 * 0x14) == '(') {
            *(undefined4 *)(unaff_EBP - 0xbc) = 1;
            bVar10 = *(byte *)(*(int *)(iVar14 + 0xc) + 0x4c);
            if (bVar10 < *(byte *)(*(int *)(unaff_EBP - 0xd4) + 0x5d)) {
              *(byte *)(*(int *)(unaff_EBP - 0xd4) + 0x5d) = bVar10;
            }
          }
          else {
            *(undefined4 *)(unaff_EBP - 0xbc) = 0;
          }
          if ((*(byte *)(*(int *)(unaff_EBP - 0xdc) + 3 + iVar31 * 0x14) & 2) != 0) {
            iVar17 = *(int *)(unaff_EBP - 0xe0) + iVar23 * 0x28;
            FUN_004b7410(iVar17);
            iVar17 = *(int *)(iVar17 + 0x10);
            *(int *)(unaff_EBP - 0xc4) = iVar17;
            if (iVar17 < 2) {
              uVar27 = FUN_00493af0();
              *(undefined4 *)(unaff_EBP - 0xd0) = uVar27;
              goto LAB_004b5720;
            }
            iVar17 = *(int *)(unaff_EBP - 0xc0);
            iVar15 = *(int *)(unaff_EBP - 0xcc);
          }
          iVar14 = *(int *)(unaff_EBP - 0xdc);
          cVar9 = *(char *)(iVar14 + 1 + iVar31 * 0x14);
          if (cVar9 == -6) {
            iVar17 = *(int *)(iVar14 + 0x10 + iVar31 * 0x14);
            iVar23 = **(int **)(unaff_EBP - 0xd4);
            *(int *)(unaff_EBP - 200) = iVar17;
            *(undefined1 *)(iVar17 + 4) =
                 *(undefined1 *)(*(int *)(*(int *)(iVar23 + 0x10) + 0xc) + 0x4d);
            iVar17 = *(int *)(unaff_EBP - 0xc0);
            iVar15 = *(ushort *)(*(int *)(unaff_EBP - 200) + 6) + 1;
LAB_004b20a8:
            *(int *)(unaff_EBP - 0xcc) = iVar15;
          }
          else if (cVar9 == -0xe) {
            iVar15 = *(int *)(iVar14 + 0x10 + iVar31 * 0x14);
            goto LAB_004b20a8;
          }
          puVar26 = FUN_0046c260(*(int **)(unaff_EBP - 0xd4),*(int *)(iVar14 + 4 + iVar31 * 0x14),
                                 iVar15,iVar17,1);
          *(undefined4 **)(unaff_EBP - 0xb4) = puVar26;
          if (puVar26 == (undefined4 *)0x0) goto LAB_004b57a0;
          *(undefined1 *)(puVar26 + 7) = 1;
          *(undefined1 *)(*(int *)(unaff_EBP - 0xb4) + 0x20) = 1;
          uVar27 = FUN_0048f790(*(undefined4 **)(unaff_EBP - 0xb8),*(int *)(unaff_EBP - 0xc4),
                                *(int *)(unaff_EBP - 0xbc),*(int *)(unaff_EBP - 200),
                                (int *)**(undefined4 **)(unaff_EBP - 0xb4));
          iVar17 = *(int *)(unaff_EBP - 0xb4);
          piVar28 = *(int **)(unaff_EBP - 0xd8);
          *(undefined4 *)(unaff_EBP - 0xd0) = uVar27;
          *(undefined4 *)(iVar17 + 8) = *(undefined4 *)(unaff_EBP - 200);
          *(byte *)(**(int **)(unaff_EBP - 0xb4) + 0x5d) = *(byte *)(iVar14 + 3 + iVar31 * 0x14) & 1
          ;
          unaff_EBX = *(int **)(unaff_EBP - 0xe4);
          *(bool *)(*(int *)(unaff_EBP - 0xb4) + 0x1e) = *(char *)(iVar14 + 1 + iVar31 * 0x14) != -6
          ;
          *(bool *)(*(int *)(unaff_EBP - 0xb4) + 0x1f) =
               *(char *)(*(int *)(unaff_EBP - 0xb4) + 0x1e) == '\0';
          goto LAB_004b0d0b;
        }
        uVar18 = 4;
        *(undefined4 *)(unaff_EBP - 0xd0) = 4;
        goto LAB_004b0d11;
      case 0x29:
      case 0x2a:
        puVar26 = FUN_0046c260(*(int **)(unaff_EBP - 0xd4),*(int *)(iVar17 + 4 + iVar31 * 0x14),
                               *(int *)(iVar17 + 8 + iVar31 * 0x14),0xffffffff,1);
        *(undefined4 **)(unaff_EBP - 0xcc) = puVar26;
        if (puVar26 == (undefined4 *)0x0) goto LAB_004b57a6;
        *(undefined1 *)(puVar26 + 7) = 1;
        iVar17 = FUN_00490e00((undefined *)*unaff_EBX,(byte *)0x0,(int)unaff_EBX,
                              (undefined4 *)(*(int *)(unaff_EBP - 0xcc) + 4),
                              *(byte *)(*(int *)(unaff_EBP - 0xdc) + 3 + iVar31 * 0x14) | 5,0x41e);
        *(int *)(unaff_EBP - 0xd0) = iVar17;
        if (iVar17 == 0) {
          uVar18 = FUN_0048ed50(*(int **)(*(int *)(unaff_EBP - 0xcc) + 4),1);
          *(uint *)(unaff_EBP - 0xd0) = uVar18;
          if (uVar18 == 0) {
            if (*(int *)(*(int *)(unaff_EBP - 0xdc) + 0x10 + iVar31 * 0x14) == 0) {
              uVar27 = FUN_0048f790((undefined4 *)(*(undefined4 **)(unaff_EBP - 0xcc))[1],1,1,0,
                                    (int *)**(undefined4 **)(unaff_EBP - 0xcc));
              *(undefined4 *)(unaff_EBP - 0xd0) = uVar27;
              *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x1e) = 1;
            }
            else {
              pcVar24 = FUN_0048f740(*(undefined4 **)(*(int *)(unaff_EBP - 0xcc) + 4),
                                     (undefined4 *)(unaff_EBP - 0x118),
                                     *(byte *)(*(int *)(unaff_EBP - 0xdc) + 3 + iVar31 * 0x14) | 2);
              *(char **)(unaff_EBP - 0xd0) = pcVar24;
              if (pcVar24 == (char *)0x0) {
                uVar27 = FUN_0048f790((undefined4 *)(*(undefined4 **)(unaff_EBP - 0xcc))[1],
                                      *(int *)(unaff_EBP - 0x118),1,
                                      *(int *)(*(int *)(unaff_EBP - 0xdc) + 0x10 + iVar31 * 0x14),
                                      (int *)**(undefined4 **)(unaff_EBP - 0xcc));
                *(undefined4 *)(unaff_EBP - 0xd0) = uVar27;
                *(undefined4 *)(*(int *)(unaff_EBP - 0xcc) + 8) =
                     *(undefined4 *)(*(int *)(unaff_EBP - 0xdc) + 0x10 + iVar31 * 0x14);
                *(undefined1 *)(*(int *)(*(int *)(unaff_EBP - 0xcc) + 8) + 4) =
                     *(undefined1 *)
                      (*(int *)(*(int *)(**(int **)(unaff_EBP - 0xd4) + 0x10) + 0xc) + 0x4d);
              }
              *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x1e) = 0;
            }
          }
        }
        *(bool *)(*(int *)(unaff_EBP - 0xcc) + 0x20) =
             *(char *)(*(int *)(unaff_EBP - 0xdc) + 3 + iVar31 * 0x14) != '\b';
        *(bool *)(*(int *)(unaff_EBP - 0xcc) + 0x1f) =
             *(char *)(*(int *)(unaff_EBP - 0xcc) + 0x1e) == '\0';
        goto LAB_004b0d0b;
      case 0x2b:
        puVar26 = FUN_0046c260(*(int **)(unaff_EBP - 0xd4),*(int *)(iVar17 + 4 + iVar31 * 0x14),
                               *(int *)(iVar17 + 8 + iVar31 * 0x14),0xffffffff,1);
        *(undefined4 **)(unaff_EBP - 0xcc) = puVar26;
        if (puVar26 == (undefined4 *)0x0) goto LAB_004b57a6;
        puVar26[2] = *(undefined4 *)(*(int *)(unaff_EBP - 0xdc) + 0x10 + iVar31 * 0x14);
        *(undefined1 *)(*(int *)(*(int *)(unaff_EBP - 0xcc) + 8) + 4) =
             *(undefined1 *)(*(int *)(*(int *)(**(int **)(unaff_EBP - 0xd4) + 0x10) + 0xc) + 0x4d);
        *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x21) = 1;
        uVar18 = FUN_004b8e80((int)unaff_EBX,*(int *)(unaff_EBP - 0xcc));
        *(uint *)(unaff_EBP - 0xd0) = uVar18;
        goto LAB_004b0d11;
      case 0x2c:
        puVar26 = FUN_0046c260(*(int **)(unaff_EBP - 0xd4),*(int *)(iVar17 + 4 + iVar31 * 0x14),
                               *(int *)(iVar17 + 0xc + iVar31 * 0x14),0xffffffff,0);
        *(undefined4 **)(unaff_EBP - 0xcc) = puVar26;
        if (puVar26 == (undefined4 *)0x0) goto LAB_004b57a6;
        iVar17 = *(int *)(unaff_EBP - 0xdc);
        *(undefined1 *)(puVar26 + 7) = 1;
        *(undefined4 *)(*(int *)(unaff_EBP - 0xcc) + 0x10) =
             *(undefined4 *)(iVar17 + 8 + iVar31 * 0x14);
        *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x1e) = 1;
        *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x1f) = 0;
        *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x22) =
             *(undefined1 *)(iVar17 + 3 + iVar31 * 0x14);
        goto LAB_004b0d0b;
      case 0x2d:
        FUN_004b5ff0(*(int **)(unaff_EBP - 0xd4),
                     *(undefined4 **)
                      ((*(int **)(unaff_EBP - 0xd4))[0x10] +
                      *(int *)(iVar17 + 4 + iVar31 * 0x14) * 4));
        *(undefined4 *)
         (*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
         *(int *)(*(int *)(unaff_EBP - 0xdc) + 4 + iVar31 * 0x14) * 4) = 0;
        goto LAB_004b0d0b;
      case 0x2e:
      case 0x2f:
      case 0x30:
      case 0x31:
        piVar32 = *(int **)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                           *(int *)(iVar17 + 4 + iVar31 * 0x14) * 4);
        *(int **)(unaff_EBP - 0xc4) = piVar32;
        if (*piVar32 == 0) break;
        *(uint *)(unaff_EBP - 200) = (uint)*(byte *)(iVar17 + iVar31 * 0x14);
        *(undefined1 *)(piVar32 + 7) = 0;
        puVar26 = *(undefined4 **)(unaff_EBP - 0xc4);
        if (*(char *)((int)puVar26 + 0x1e) == '\0') {
          *(undefined4 *)(unaff_EBP - 0xa4) = *(undefined4 *)(iVar17 + 0x10 + iVar31 * 0x14);
          *(undefined4 *)(unaff_EBP - 0xbc) = puVar26[2];
          *(undefined2 *)(unaff_EBP - 0xb8) = *(undefined2 *)(unaff_EBP - 0xa4);
          *(byte *)(unaff_EBP - 0xb6) = *(byte *)(unaff_EBP - 200) & 1;
          piVar28 = (int *)(*(int *)(unaff_EBP - 0xe0) +
                           *(int *)(iVar17 + 0xc + iVar31 * 0x14) * 0x28);
          *(int **)(unaff_EBP - 0xac) = piVar28;
          if ((*(ushort *)(piVar28 + 7) & 0x4000) != 0) {
            FUN_004b6fa0(piVar28);
            puVar26 = *(undefined4 **)(unaff_EBP - 0xc4);
          }
          uVar18 = FUN_004908e0((int *)*puVar26,(int *)(unaff_EBP - 0xbc),0,0,0,
                                (uint *)(unaff_EBP - 0xcc));
          *(uint *)(unaff_EBP - 0xd0) = uVar18;
          if (uVar18 != 0) goto LAB_004b572c;
          *(undefined1 *)(*(int *)(unaff_EBP - 0xc4) + 0x19) = 0;
        }
        else {
          iVar17 = *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar17 + 0xc + iVar31 * 0x14) * 0x28;
          FUN_0046dfa0(iVar17);
          uVar40 = FUN_004b65e0(iVar17);
          iVar14 = *(int *)(unaff_EBP - 0xc4);
          *(ulonglong *)(unaff_EBP - 0x9c) = uVar40;
          *(undefined1 *)(iVar14 + 0x19) = 0;
          if ((*(ushort *)(iVar17 + 0x1c) & 4) == 0) {
            if ((*(ushort *)(iVar17 + 0x1c) & 8) == 0) {
              piVar28 = *(int **)(unaff_EBP - 0xd8);
              iVar31 = *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar31 * 0x14);
              goto LAB_004b0d04;
            }
            if ((*(int *)(unaff_EBP - 0x9c) == 0) && (*(int *)(unaff_EBP - 0x98) == -0x80000000)) {
              dVar2 = *(double *)(iVar17 + 8);
              *(undefined4 *)(unaff_EBP - 0x124) = 0;
              *(undefined4 *)(unaff_EBP - 0x120) = 0x80000000;
              *(double *)(unaff_EBP - 0xf4) = (double)*(longlong *)(unaff_EBP - 0x124);
              *(undefined8 *)(unaff_EBP - 0xf4) = *(undefined8 *)(unaff_EBP - 0xf4);
              if ((dVar2 < *(double *)(unaff_EBP - 0xf4)) || (0.0 < dVar2)) {
                *(undefined4 *)(unaff_EBP - 0xcc) = 1;
                if (0.0 < *(double *)(iVar17 + 8) || *(double *)(iVar17 + 8) == 0.0) {
                  if (*(int *)(unaff_EBP - 200) < 0x30) {
                    uVar18 = FUN_004906f0((int *)**(undefined4 **)(unaff_EBP - 0xc4),
                                          (undefined4 *)(unaff_EBP - 0xcc));
                    goto LAB_004b2547;
                  }
                }
                else if (0x2f < *(int *)(unaff_EBP - 200)) {
                  uVar18 = FUN_0048fdc0((int *)**(undefined4 **)(unaff_EBP - 0xc4),
                                        (undefined4 *)(unaff_EBP - 0xcc));
LAB_004b2547:
                  *(uint *)(unaff_EBP - 0xd0) = uVar18;
                  if (uVar18 != 0) goto LAB_004b572c;
                  if (*(int *)(unaff_EBP - 0xcc) == 0) goto LAB_004b0616;
                  piVar28 = *(int **)(unaff_EBP - 0xd8);
                  iVar31 = *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar31 * 0x14);
                  goto LAB_004b0d04;
                }
LAB_004af55f:
                *(int *)(unaff_EBP - 0xe8) =
                     *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar31 * 0x14) + -1;
                goto LAB_004af570;
              }
            }
            if ((*(int *)(unaff_EBP - 200) == 0x2e) || (*(int *)(unaff_EBP - 200) == 0x30)) {
              *(double *)(unaff_EBP - 0xf4) = (double)*(longlong *)(unaff_EBP - 0x9c);
              dVar2 = *(double *)(iVar17 + 8);
              *(undefined8 *)(unaff_EBP - 0xf4) = *(undefined8 *)(unaff_EBP - 0xf4);
              if (dVar2 < *(double *)(unaff_EBP - 0xf4) || dVar2 == *(double *)(unaff_EBP - 0xf4))
              goto LAB_004b2618;
              uVar18 = *(uint *)(unaff_EBP - 0x9c) + 1;
              iVar17 = *(int *)(unaff_EBP - 0x98) + (uint)(0xfffffffe < *(uint *)(unaff_EBP - 0x9c))
              ;
              *(uint *)(unaff_EBP - 0x9c) = uVar18;
              *(int *)(unaff_EBP - 0x98) = iVar17;
            }
            else {
              *(double *)(unaff_EBP - 0xf4) = (double)*(longlong *)(unaff_EBP - 0x9c);
              *(undefined8 *)(unaff_EBP - 0xf4) = *(undefined8 *)(unaff_EBP - 0xf4);
              if (*(double *)(unaff_EBP - 0xf4) < *(double *)(iVar17 + 8) ||
                  *(double *)(unaff_EBP - 0xf4) == *(double *)(iVar17 + 8)) goto LAB_004b2618;
              uVar18 = *(int *)(unaff_EBP - 0x9c) - 1;
              iVar17 = *(int *)(unaff_EBP - 0x98) + -1 + (uint)(*(int *)(unaff_EBP - 0x9c) != 0);
              *(uint *)(unaff_EBP - 0x9c) = uVar18;
              *(int *)(unaff_EBP - 0x98) = iVar17;
            }
          }
          else {
LAB_004b2618:
            iVar17 = *(int *)(unaff_EBP - 0x98);
            uVar18 = *(uint *)(unaff_EBP - 0x9c);
          }
          uVar18 = FUN_004908e0((int *)**(undefined4 **)(unaff_EBP - 0xc4),(int *)0x0,uVar18,iVar17,
                                0,(uint *)(unaff_EBP - 0xcc));
          *(uint *)(unaff_EBP - 0xd0) = uVar18;
          if (uVar18 != 0) goto LAB_004b572c;
          if (*(int *)(unaff_EBP - 0xcc) == 0) {
            *(undefined1 *)(*(int *)(unaff_EBP - 0xc4) + 0x19) = 1;
            *(undefined4 *)(*(int *)(unaff_EBP - 0xc4) + 0x40) = *(undefined4 *)(unaff_EBP - 0x9c);
            *(undefined4 *)(*(int *)(unaff_EBP - 0xc4) + 0x44) = *(undefined4 *)(unaff_EBP - 0x98);
          }
        }
        *(undefined1 *)(*(int *)(unaff_EBP - 0xc4) + 0x1d) = 0;
        *(undefined4 *)(*(int *)(unaff_EBP - 0xc4) + 0x50) = 0;
        iVar17 = *(int *)(unaff_EBP - 200);
        iVar14 = *(int *)(unaff_EBP - 0xcc);
        if (iVar17 < 0x30) {
          if ((iVar14 < 1) && ((iVar14 != 0 || (iVar17 != 0x2e)))) {
            uVar18 = (uint)(*(char *)(**(int **)(unaff_EBP - 0xc4) + 0x5b) != '\x01');
            *(uint *)(unaff_EBP - 0xcc) = uVar18;
            bVar12 = uVar18 == 0;
            goto LAB_004b07b5;
          }
          uVar18 = FUN_00491450((int *)**(undefined4 **)(unaff_EBP - 0xc4),
                                (undefined4 *)(unaff_EBP - 0xcc));
        }
        else {
          if ((-1 < iVar14) && ((iVar14 != 0 || (iVar17 != 0x31)))) {
            piVar28 = *(int **)(unaff_EBP - 0xd8);
            *(undefined4 *)(unaff_EBP - 0xcc) = 0;
            goto LAB_004b0d0b;
          }
          uVar18 = FUN_00490c90((int *)**(undefined4 **)(unaff_EBP - 0xc4),
                                (undefined4 *)(unaff_EBP - 0xcc));
        }
        *(uint *)(unaff_EBP - 0xd0) = uVar18;
        if (uVar18 == 0) {
          *(undefined1 *)(*(int *)(unaff_EBP - 0xc4) + 0x19) = 0;
          bVar12 = *(int *)(unaff_EBP - 0xcc) == 0;
LAB_004b07b5:
          piVar28 = *(int **)(unaff_EBP - 0xd8);
          goto LAB_004b07bb;
        }
        goto LAB_004b572c;
      case 0x32:
        piVar32 = *(int **)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                           *(int *)(iVar17 + 4 + iVar31 * 0x14) * 4);
        *(int **)(unaff_EBP - 0xcc) = piVar32;
        if (*piVar32 != 0) {
          iVar14 = *(int *)(unaff_EBP - 0xe0);
          *(undefined1 *)(piVar32 + 7) = 0;
          uVar40 = FUN_004b65e0(iVar14 + *(int *)(iVar17 + 8 + iVar31 * 0x14) * 0x28);
          *(int *)(*(int *)(unaff_EBP - 0xcc) + 0x38) = (int)uVar40;
          *(int *)(*(int *)(unaff_EBP - 0xcc) + 0x3c) = (int)(uVar40 >> 0x20);
          *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x19) = 0;
          *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x1d) = 1;
        }
        goto LAB_004b0d0b;
      case 0x33:
      case 0x34:
        iVar17 = *(int *)(unaff_EBP - 0xdc);
        iVar23 = 0;
        iVar14 = *(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40);
        *(undefined4 *)(unaff_EBP - 0xcc) = 0;
        piVar28 = *(int **)(iVar14 + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 4);
        *(int **)(unaff_EBP - 200) = piVar28;
        iVar17 = *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar17 + 0xc + iVar31 * 0x14) * 0x28;
        if (*piVar28 != 0) {
          iVar14 = *(int *)(unaff_EBP - 0xdc);
          if (*(int *)(iVar14 + 0x10 + iVar31 * 0x14) < 1) {
            puVar26 = FUN_004aebc0((int *)piVar28[2],unaff_EBP - 0x9c,0x97,
                                   (undefined4 *)(unaff_EBP - 0xc0));
            *(undefined4 **)(unaff_EBP - 0xbc) = puVar26;
            if (puVar26 == (undefined4 *)0x0) goto LAB_004b57a6;
            FUN_004b8560(*(undefined4 **)(*(int *)(unaff_EBP - 200) + 8),*(int *)(iVar17 + 0x18),
                         *(byte **)(iVar17 + 4),(uint)puVar26);
            pbVar35 = (byte *)(*(int *)(unaff_EBP - 0xbc) + 6);
            *pbVar35 = *pbVar35 | 2;
            piVar32 = *(int **)(unaff_EBP - 0xbc);
            piVar28 = *(int **)(unaff_EBP - 200);
          }
          else {
            *(int *)(unaff_EBP - 0xb4) = piVar28[2];
            *(undefined2 *)(unaff_EBP - 0xb0) = *(undefined2 *)(iVar14 + 0x10 + iVar31 * 0x14);
            piVar32 = (int *)(unaff_EBP - 0xb4);
            *(int *)(unaff_EBP - 0xa4) = iVar17;
            *(undefined1 *)(unaff_EBP - 0xae) = 2;
            *(int **)(unaff_EBP - 0xbc) = piVar32;
          }
          uVar18 = FUN_004908e0((int *)*piVar28,piVar32,0,0,0,(uint *)(unaff_EBP - 0xc4));
          *(uint *)(unaff_EBP - 0xd0) = uVar18;
          if (*(int *)(*(int *)(unaff_EBP - 0xdc) + 0x10 + iVar31 * 0x14) == 0) {
            FUN_00494b00((int)unaff_EBX,*(undefined4 **)(unaff_EBP - 0xc0));
          }
          uVar18 = *(uint *)(unaff_EBP - 0xd0);
          if (uVar18 != 0) goto LAB_004b0616;
          *(uint *)(unaff_EBP - 0xcc) = (uint)(*(int *)(unaff_EBP - 0xc4) == 0);
          *(undefined1 *)(*(int *)(unaff_EBP - 200) + 0x1d) = 0;
          *(undefined4 *)(*(int *)(unaff_EBP - 200) + 0x50) = 0;
          iVar23 = *(int *)(unaff_EBP - 0xcc);
        }
        iVar17 = *(int *)(unaff_EBP - 0xdc);
        piVar28 = *(int **)(unaff_EBP - 0xd8);
        if (*(char *)(iVar17 + iVar31 * 0x14) == '4') {
          if (iVar23 == 0) goto LAB_004b0d0b;
          iVar31 = *(int *)(iVar17 + 8 + iVar31 * 0x14);
        }
        else {
          if (iVar23 != 0) goto LAB_004b0d0b;
          iVar31 = *(int *)(iVar17 + 8 + iVar31 * 0x14);
        }
        goto LAB_004b0d04;
      case 0x35:
        iVar14 = *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar17 + 0xc + iVar31 * 0x14) * 0x28;
        *(int *)(unaff_EBP - 0xbc) =
             *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar17 + 0x10 + iVar31 * 0x14) * 0x28;
        iVar17 = *(int *)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                         *(int *)(iVar17 + 4 + iVar31 * 0x14) * 4);
        *(int *)(unaff_EBP - 200) = iVar17;
        *(undefined4 *)(iVar17 + 0x4c) = 0;
        *(undefined4 *)(*(int *)(unaff_EBP - 200) + 0x50) = 0;
        puVar26 = *(undefined4 **)(unaff_EBP - 200);
        iVar17 = *(int *)(unaff_EBP - 0xbc);
        uVar27 = *puVar26;
        *(undefined4 *)(unaff_EBP - 0xc4) = uVar27;
        iVar23 = puVar26[2];
        *(undefined4 *)(unaff_EBP - 0xf0) = uVar27;
        uVar4 = *(ushort *)(iVar23 + 6);
        uVar29 = 0;
        *(ushort *)(unaff_EBP - 0xc0) = uVar4;
        *(undefined2 *)(unaff_EBP - 0xcc) = 0;
        if (uVar4 == 0) goto LAB_004b2a6e;
        uVar18 = 0;
        goto LAB_004b2a50;
      case 0x36:
        iVar14 = *(int *)(iVar17 + 0xc + iVar31 * 0x14);
        puVar26 = *(undefined4 **)
                   (*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                   *(int *)(iVar17 + 4 + iVar31 * 0x14) * 4);
        *(undefined4 **)(unaff_EBP - 0xcc) = puVar26;
        piVar28 = (int *)*puVar26;
        *(int **)(unaff_EBP - 200) = piVar28;
        if (piVar28 == (int *)0x0) {
          *(int *)(unaff_EBP - 0xe8) = *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar31 * 0x14) + -1
          ;
          piVar28 = *(int **)(unaff_EBP - 0xd8);
          puVar26[0x13] = 0;
        }
        else {
          iVar17 = *(int *)(unaff_EBP - 0xe0);
          *(undefined4 *)(unaff_EBP - 0xc4) = 0;
          uVar18 = *(uint *)(iVar17 + 0x10 + iVar14 * 0x28);
          *(uint *)(unaff_EBP - 0xbc) = uVar18;
          iVar17 = *(int *)(iVar17 + 0x14 + iVar14 * 0x28);
          *(int *)(unaff_EBP - 0xb8) = iVar17;
          uVar18 = FUN_004908e0(piVar28,(int *)0x0,uVar18,iVar17,0,(uint *)(unaff_EBP - 0xc4));
          iVar17 = *(int *)(unaff_EBP - 0xe0);
          *(uint *)(unaff_EBP - 0xd0) = uVar18;
          *(undefined4 *)(*(int *)(unaff_EBP - 0xcc) + 0x40) =
               *(undefined4 *)(iVar17 + 0x10 + iVar14 * 0x28);
          unaff_EBX = *(int **)(unaff_EBP - 0xe4);
          *(undefined4 *)(*(int *)(unaff_EBP - 0xcc) + 0x44) =
               *(undefined4 *)(iVar17 + 0x14 + iVar14 * 0x28);
          *(bool *)(*(int *)(unaff_EBP - 0xcc) + 0x19) = *(int *)(unaff_EBP - 0xc4) == 0;
          *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x1c) = 0;
          *(undefined4 *)(*(int *)(unaff_EBP - 0xcc) + 0x50) = 0;
          *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x1d) = 0;
          iVar17 = *(int *)(unaff_EBP - 0xc4);
          if (iVar17 != 0) {
            *(int *)(unaff_EBP - 0xe8) =
                 *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar31 * 0x14) + -1;
          }
          piVar28 = *(int **)(unaff_EBP - 0xd8);
          *(int *)(*(int *)(unaff_EBP - 0xcc) + 0x4c) = iVar17;
        }
        goto LAB_004b0d0b;
      case 0x37:
        iVar14 = *(int *)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                         *(int *)(iVar17 + 4 + iVar31 * 0x14) * 4);
        piVar28[4] = *(int *)(iVar14 + 0x30);
        piVar28[5] = *(int *)(iVar14 + 0x34);
        iVar31 = *(int *)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                         *(int *)(iVar17 + 4 + iVar31 * 0x14) * 4);
        puVar21 = (uint *)(iVar31 + 0x30);
        uVar18 = *puVar21;
        *puVar21 = *puVar21 + 1;
        piVar32 = (int *)(iVar31 + 0x34);
        *piVar32 = *piVar32 + (uint)(0xfffffffe < uVar18);
        goto LAB_004b0d0b;
      case 0x38:
        goto switchD_004af4da_caseD_38;
      case 0x39:
      case 0x3a:
        iVar14 = *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar17 + 8 + iVar31 * 0x14) * 0x28;
        iVar23 = *(int *)(unaff_EBP - 0xd4);
        *(int *)(unaff_EBP - 0xcc) = iVar14;
        piVar28 = *(int **)(*(int *)(iVar23 + 0x40) + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 4);
        *(int **)(unaff_EBP - 0xbc) = piVar28;
        iVar23 = *(int *)(iVar17 + 0xc + iVar31 * 0x14);
        if (*(char *)(iVar17 + iVar31 * 0x14) == '9') {
          iVar17 = *(int *)(unaff_EBP - 0xe0) + iVar23 * 0x28;
          *(int *)(unaff_EBP - 200) = iVar17;
          iVar23 = *(int *)(iVar17 + 0x10);
          *(int *)(unaff_EBP - 0xc4) = iVar23;
          iVar17 = *(int *)(iVar17 + 0x14);
        }
        else {
          iVar17 = iVar23 >> 0x1f;
          *(int *)(unaff_EBP - 0xc4) = iVar23;
        }
        iVar15 = *(int *)(unaff_EBP - 0xdc);
        *(int *)(unaff_EBP - 0xc0) = iVar17;
        if ((*(byte *)(iVar15 + 3 + iVar31 * 0x14) & 1) != 0) {
          piVar32 = (int *)(*(int *)(unaff_EBP - 0xd4) + 100);
          *piVar32 = *piVar32 + 1;
          iVar15 = *(int *)(unaff_EBP - 0xdc);
        }
        if ((*(byte *)(iVar15 + 3 + iVar31 * 0x14) & 2) != 0) {
          *(int *)(unaff_EBP - 0xfc) = iVar17;
          iVar17 = *(int *)(unaff_EBP - 0xe4);
          *(int *)(unaff_EBP - 0x100) = iVar23;
          *(int *)(iVar17 + 0x20) = iVar23;
          *(undefined4 *)(iVar17 + 0x24) = *(undefined4 *)(unaff_EBP - 0xc0);
          piVar28 = *(int **)(unaff_EBP - 0xbc);
          iVar14 = *(int *)(unaff_EBP - 0xcc);
        }
        if ((*(byte *)(iVar14 + 0x1c) & 1) != 0) {
          *(undefined4 *)(iVar14 + 4) = 0;
          *(undefined4 *)(*(int *)(unaff_EBP - 0xcc) + 0x18) = 0;
          piVar28 = *(int **)(unaff_EBP - 0xbc);
          iVar14 = *(int *)(unaff_EBP - 0xcc);
        }
        if ((*(byte *)(*(int *)(unaff_EBP - 0xdc) + 3 + iVar31 * 0x14) & 0x10) == 0) {
          *(undefined4 *)(unaff_EBP - 0xb4) = 0;
        }
        else {
          *(int *)(unaff_EBP - 0xb4) = piVar28[0x13];
        }
        if ((*(ushort *)(iVar14 + 0x1c) & 0x4000) == 0) {
          *(undefined4 *)(unaff_EBP - 0xb8) = 0;
        }
        else {
          *(undefined4 *)(unaff_EBP - 0xb8) = *(undefined4 *)(iVar14 + 0x10);
        }
        FUN_00491bc0(*piVar28,0,0);
        iVar17 = *(int *)(unaff_EBP - 0xdc);
        puVar21 = FUN_0048ffe0((uint *)**(undefined4 **)(unaff_EBP - 0xbc),(byte *)0x0,
                               *(uint *)(unaff_EBP - 0xc4),*(uint *)(unaff_EBP - 0xc0),
                               *(void **)(*(int *)(unaff_EBP - 0xcc) + 4),
                               *(size_t *)(*(int *)(unaff_EBP - 0xcc) + 0x18),
                               *(size_t *)(unaff_EBP - 0xb8),
                               *(byte *)(iVar17 + 3 + iVar31 * 0x14) & 8,
                               *(uint **)(unaff_EBP - 0xb4));
        *(undefined1 *)(*(int *)(unaff_EBP - 0xbc) + 0x19) = 0;
        iVar14 = *(int *)(unaff_EBP - 0xbc);
        *(uint **)(unaff_EBP - 0xd0) = puVar21;
        *(undefined1 *)(iVar14 + 0x1d) = 0;
        unaff_EBX = *(int **)(unaff_EBP - 0xe4);
        *(undefined4 *)(*(int *)(unaff_EBP - 0xbc) + 0x50) = 0;
        if (((puVar21 != (uint *)0x0) || (unaff_EBX[0x2f] == 0)) ||
           (*(int *)(iVar17 + 0x10 + iVar31 * 0x14) == 0)) goto LAB_004af570;
        uVar27 = *(undefined4 *)(unaff_EBP - 0xc4);
        uVar6 = *(undefined4 *)(unaff_EBX[4] + *(int *)(*(int *)(unaff_EBP - 0xbc) + 0xc) * 0x10);
        *(undefined4 *)(unaff_EBP - 0xb0) = uVar6;
        uVar7 = *(undefined4 *)(iVar17 + 0x10 + iVar31 * 0x14);
        *(undefined4 *)(unaff_EBP - 0xac) = uVar7;
        uVar19 = 0x12;
        if ((*(byte *)(iVar17 + 3 + iVar31 * 0x14) & 4) != 0) {
          uVar19 = 0x17;
        }
        *(undefined4 *)(unaff_EBP - 0xa8) = uVar19;
        (*(code *)unaff_EBX[0x2f])(unaff_EBX[0x2e],uVar19,uVar6,uVar7,uVar27);
        piVar28 = *(int **)(unaff_EBP - 0xd8);
        goto LAB_004b0d0b;
      case 0x3b:
        iVar14 = *(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40);
        *(undefined8 *)(unaff_EBP - 0xcc) = 0;
        puVar26 = *(undefined4 **)(iVar14 + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 4);
        *(undefined4 **)(unaff_EBP - 0xc4) = puVar26;
        if ((unaff_EBX[0x2f] != 0) && (*(int *)(iVar17 + 0x10 + iVar31 * 0x14) != 0)) {
          *(undefined4 *)(unaff_EBP - 0xcc) = puVar26[0x10];
          *(undefined4 *)(unaff_EBP - 200) = puVar26[0x11];
        }
        uVar18 = FUN_004af1b0(puVar26);
        *(uint *)(unaff_EBP - 0xd0) = uVar18;
        if (uVar18 != 0) goto LAB_004b572c;
        FUN_00491bc0(**(int **)(unaff_EBP - 0xc4),0,0);
        uVar18 = FUN_0048f930((uint *)**(undefined4 **)(unaff_EBP - 0xc4));
        *(uint *)(unaff_EBP - 0xd0) = uVar18;
        iVar17 = *(int *)(unaff_EBP - 0xd0);
        *(undefined4 *)(*(int *)(unaff_EBP - 0xc4) + 0x50) = 0;
        if (((iVar17 == 0) && ((code *)unaff_EBX[0x2f] != (code *)0x0)) &&
           (iVar17 = *(int *)(*(int *)(unaff_EBP - 0xdc) + 0x10 + iVar31 * 0x14), iVar17 != 0)) {
          (*(code *)unaff_EBX[0x2f])
                    (unaff_EBX[0x2e],9,
                     *(undefined4 *)
                      (unaff_EBX[4] + *(int *)(*(int *)(unaff_EBP - 0xc4) + 0xc) * 0x10),iVar17,
                     *(undefined4 *)(unaff_EBP - 0xcc));
        }
        if ((*(byte *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar31 * 0x14) & 1) != 0) {
          piVar32 = (int *)(*(int *)(unaff_EBP - 0xd4) + 100);
          *piVar32 = *piVar32 + 1;
        }
        goto LAB_004b0d0b;
      case 0x3c:
        iVar31 = *(int *)(*(int *)(unaff_EBP - 0xd4) + 100);
        unaff_EBX[0x13] = unaff_EBX[0x13] + iVar31;
        unaff_EBX[0x12] = iVar31;
        *(undefined4 *)(*(int *)(unaff_EBP - 0xd4) + 100) = 0;
        goto LAB_004b0d0b;
      case 0x3d:
        iVar14 = *(int *)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                         *(int *)(iVar17 + 4 + iVar31 * 0x14) * 4);
        *(int *)(unaff_EBP - 0xcc) = iVar14;
        uVar18 = FUN_004b8dd0(iVar14,*(int *)(unaff_EBP - 0xe0) +
                                     *(int *)(iVar17 + 0xc + iVar31 * 0x14) * 0x28,
                              (uint *)(unaff_EBP - 200));
        iVar17 = *(int *)(unaff_EBP - 200);
        *(uint *)(unaff_EBP - 0xd0) = uVar18;
        if (iVar17 != 0) {
          iVar31 = *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar31 * 0x14);
          goto LAB_004b0d04;
        }
        goto LAB_004b0d11;
      case 0x3e:
        piVar28 = (int *)(*(int *)(unaff_EBP - 0xe0) + *(int *)(iVar17 + 8 + iVar31 * 0x14) * 0x28);
        iVar31 = *(int *)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                         *(int *)(iVar17 + 4 + iVar31 * 0x14) * 4);
        *(int **)(unaff_EBP - 0xd8) = piVar28;
        *(int *)(unaff_EBP - 0xcc) = iVar31;
        uVar18 = FUN_004b92e0(iVar31,piVar28);
        *(uint *)(unaff_EBP - 0xd0) = uVar18;
        goto LAB_004b0d11;
      case 0x3f:
      case 0x40:
        iVar14 = *(int *)(iVar17 + 4 + iVar31 * 0x14);
        *(int *)(unaff_EBP - 0xd8) =
             *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar17 + 8 + iVar31 * 0x14) * 0x28;
        puVar26 = *(undefined4 **)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) + iVar14 * 4);
        *(undefined4 **)(unaff_EBP - 0xcc) = puVar26;
        *(undefined4 *)(unaff_EBP - 200) = *puVar26;
        uVar18 = FUN_004af1b0(puVar26);
        *(uint *)(unaff_EBP - 0xd0) = uVar18;
        if (uVar18 != 0) goto LAB_004b572c;
        if (*(char *)(*(int *)(unaff_EBP - 0xcc) + 0x1f) == '\0') {
          FUN_0048f8d0(*(int *)(unaff_EBP - 200),(undefined4 *)(unaff_EBP - 0xc4));
          uVar18 = *(uint *)(unaff_EBP - 0xc4);
          if ((uint)unaff_EBX[0x14] < uVar18) goto LAB_004b5780;
        }
        else {
          FUN_004906b0(*(int *)(unaff_EBP - 200),(undefined4 *)(unaff_EBP - 0xbc));
          iVar31 = unaff_EBX[0x14] >> 0x1f;
          if ((iVar31 < *(int *)(unaff_EBP - 0xb8)) ||
             ((uVar18 = *(uint *)(unaff_EBP - 0xbc), iVar31 <= *(int *)(unaff_EBP - 0xb8) &&
              ((uint)unaff_EBX[0x14] < uVar18)))) goto LAB_004b5780;
          *(uint *)(unaff_EBP - 0xc4) = uVar18;
        }
        piVar32 = *(int **)(unaff_EBP - 0xd8);
        iVar31 = FUN_004b7260(piVar32,uVar18,0);
        if (iVar31 != 0) goto LAB_004b57a6;
        piVar32[6] = *(int *)(unaff_EBP - 0xc4);
        *(ushort *)(piVar32 + 7) = *(ushort *)(piVar32 + 7) & 0xbe10 | 0x10;
        if (*(char *)(*(int *)(unaff_EBP - 0xcc) + 0x1f) == '\0') {
          uVar18 = FUN_0048f870(*(int **)(unaff_EBP - 200),0,*(size_t *)(unaff_EBP - 0xc4),
                                (void *)piVar32[1]);
          piVar28 = *(int **)(unaff_EBP - 0xd8);
          *(uint *)(unaff_EBP - 0xd0) = uVar18;
          *(undefined1 *)((int)piVar32 + 0x1f) = 1;
        }
        else {
          uVar18 = FUN_0046b2f0(*(int *)(unaff_EBP - 200),0,*(size_t *)(unaff_EBP - 0xc4),
                                (void *)piVar32[1],0);
          *(uint *)(unaff_EBP - 0xd0) = uVar18;
          *(undefined1 *)((int)piVar32 + 0x1f) = 1;
          piVar28 = piVar32;
        }
        goto LAB_004b0d11;
      case 0x41:
        puVar26 = *(undefined4 **)
                   (*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                   *(int *)(iVar17 + 4 + iVar31 * 0x14) * 4);
        *(undefined4 **)(unaff_EBP - 0xcc) = puVar26;
        if (*(char *)(puVar26 + 7) != '\0') {
          *(undefined2 *)(piVar28 + 7) = 1;
          goto LAB_004b0d0b;
        }
        if (*(char *)((int)puVar26 + 0x1d) != '\0') {
          *(undefined4 *)(unaff_EBP - 0xc4) = puVar26[0xe];
          *(undefined4 *)(unaff_EBP - 0xc0) = puVar26[0xf];
          piVar28[4] = *(int *)(unaff_EBP - 0xc4);
          piVar28[5] = *(int *)(unaff_EBP - 0xc0);
          goto LAB_004b0d0b;
        }
        if ((undefined4 *)puVar26[9] == (undefined4 *)0x0) {
          uVar18 = FUN_004af1b0(puVar26);
          *(uint *)(unaff_EBP - 0xd0) = uVar18;
          if (uVar18 != 0) goto LAB_004b572c;
          piVar32 = *(int **)(unaff_EBP - 0xcc);
          if (*(char *)((int)piVar32 + 0x19) == '\0') {
            uVar27 = FUN_004906b0(*piVar32,(undefined4 *)(unaff_EBP - 0xc4));
            *(undefined4 *)(unaff_EBP - 0xd0) = uVar27;
            piVar28[4] = *(int *)(unaff_EBP - 0xc4);
            piVar28[5] = *(int *)(unaff_EBP - 0xc0);
          }
          else {
            *(int *)(unaff_EBP - 0xc4) = piVar32[0x10];
            *(int *)(unaff_EBP - 0xc0) = piVar32[0x11];
            piVar28[4] = *(int *)(unaff_EBP - 0xc4);
            piVar28[5] = *(int *)(unaff_EBP - 0xc0);
          }
        }
        else {
          piVar32 = *(int **)puVar26[9];
          *(int **)(unaff_EBP - 0xbc) = piVar32;
          iVar31 = *piVar32;
          *(int *)(unaff_EBP - 0xb8) = iVar31;
          uVar27 = (**(code **)(iVar31 + 0x30))(puVar26[9]);
          iVar31 = *(int *)(unaff_EBP - 0xbc);
          *(undefined4 *)(unaff_EBP - 0xd0) = uVar27;
          FUN_0047e200(*(int **)(unaff_EBP - 0xd4),iVar31);
          piVar28[4] = *(int *)(unaff_EBP - 0xc4);
          piVar28[5] = *(int *)(unaff_EBP - 0xc0);
        }
        goto LAB_004b0d0b;
      case 0x42:
        iVar31 = *(int *)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                         *(int *)(iVar17 + 4 + iVar31 * 0x14) * 4);
        *(int *)(unaff_EBP - 0xcc) = iVar31;
        *(undefined1 *)(iVar31 + 0x1c) = 1;
        *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x19) = 0;
        if (**(int **)(unaff_EBP - 0xcc) != 0) {
          FUN_0048efd0(**(int **)(unaff_EBP - 0xcc));
        }
        goto LAB_004b0d0b;
      case 0x43:
        puVar26 = *(undefined4 **)
                   (*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                   *(int *)(iVar17 + 4 + iVar31 * 0x14) * 4);
        *(undefined4 **)(unaff_EBP - 0xcc) = puVar26;
        piVar32 = (int *)*puVar26;
        *(int **)(unaff_EBP - 200) = piVar32;
        *(undefined4 *)(unaff_EBP - 0xc4) = 0;
        if (piVar32 != (int *)0x0) {
          iVar14 = FUN_004906f0(piVar32,(undefined4 *)(unaff_EBP - 0xc4));
          puVar26 = *(undefined4 **)(unaff_EBP - 0xcc);
          iVar17 = *(int *)(unaff_EBP - 0xdc);
          *(int *)(unaff_EBP - 0xd0) = iVar14;
        }
        *(undefined1 *)(puVar26 + 7) = *(undefined1 *)(unaff_EBP - 0xc4);
        *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x1d) = 0;
        *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x19) = 0;
        *(undefined4 *)(*(int *)(unaff_EBP - 0xcc) + 0x50) = 0;
        iVar31 = *(int *)(iVar17 + 8 + iVar31 * 0x14);
        if ((iVar31 < 1) || (*(int *)(unaff_EBP - 0xc4) == 0)) goto LAB_004b0d0b;
        goto LAB_004b0d04;
      case 0x44:
      case 0x45:
        iVar14 = *(int *)(iVar17 + 4 + iVar31 * 0x14);
        iVar23 = *(int *)(unaff_EBP - 0xe0);
        if ((*(byte *)(iVar23 + 0x1c + iVar14 * 0x28) & 1) == 0) {
          uVar40 = FUN_004b65e0(iVar23 + iVar14 * 0x28);
          iVar17 = *(int *)(unaff_EBP - 0xdc);
          if (uVar40 == 0) {
            iVar14 = 0;
          }
          else {
            iVar14 = 1;
          }
        }
        else {
          iVar14 = 2;
        }
        *(int *)(unaff_EBP - 0xcc) = iVar14;
        iVar15 = *(int *)(iVar17 + 8 + iVar31 * 0x14);
        if ((*(byte *)(iVar23 + 0x1c + iVar15 * 0x28) & 1) == 0) {
          uVar40 = FUN_004b65e0(iVar23 + iVar15 * 0x28);
          iVar14 = *(int *)(unaff_EBP - 0xcc);
          iVar17 = *(int *)(unaff_EBP - 0xdc);
          if (uVar40 == 0) {
            iVar15 = 0;
          }
          else {
            iVar15 = 1;
          }
        }
        else {
          iVar15 = 2;
        }
        *(int *)(unaff_EBP - 200) = iVar15;
        iVar15 = iVar15 + iVar14 * 2;
        if (*(char *)(iVar17 + iVar31 * 0x14) == 'E') {
          bVar10 = (&UNK_0056a1cc)[iVar15 + iVar14];
        }
        else {
          bVar10 = (&UNK_0056a284)[iVar15 + iVar14];
        }
        uVar18 = (uint)bVar10;
        *(uint *)(unaff_EBP - 0xcc) = uVar18;
        piVar28 = (int *)(iVar23 + *(int *)(iVar17 + 0xc + iVar31 * 0x14) * 0x28);
        *(int **)(unaff_EBP - 0xd8) = piVar28;
        if (uVar18 == 2) {
          *(ushort *)(piVar28 + 7) = *(ushort *)(piVar28 + 7) & 0xbe01 | 1;
        }
        else {
          piVar28[4] = uVar18;
          piVar28[5] = 0;
          *(ushort *)(piVar28 + 7) = *(ushort *)(piVar28 + 7) & 0xbe04 | 4;
        }
        goto LAB_004b0d0b;
      case 0x46:
      case 0x47:
        iVar14 = *(int *)(unaff_EBP - 0xd4);
        *(int *)(iVar14 + 0x78) = *(int *)(iVar14 + 0x78) + 1;
        goto LAB_004b3746;
      case 0x48:
        iVar14 = *(int *)(unaff_EBP - 0xd4);
LAB_004b3746:
        puVar26 = *(undefined4 **)
                   (*(int *)(iVar14 + 0x40) + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 4);
        *(undefined4 **)(unaff_EBP - 0xcc) = puVar26;
        *(undefined4 *)(unaff_EBP - 0xc4) = 1;
        if (puVar26[0x12] == 0) {
          piVar32 = (int *)*puVar26;
          *(int **)(unaff_EBP - 200) = piVar32;
          uVar27 = FUN_0048fdc0(piVar32,(uint *)(unaff_EBP - 0xc4));
          *(undefined4 *)(unaff_EBP - 0xd0) = uVar27;
          *(bool *)(*(int *)(unaff_EBP - 0xcc) + 0x1a) = *(int *)(unaff_EBP - 0xc4) == 0;
          *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x1d) = 0;
          *(undefined4 *)(*(int *)(unaff_EBP - 0xcc) + 0x50) = 0;
          *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x19) = 0;
          *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x1c) = *(undefined1 *)(unaff_EBP - 0xc4);
          bVar12 = *(int *)(unaff_EBP - 0xc4) == 0;
        }
        else {
          uVar27 = FUN_004b9000(unaff_EBX,(int)puVar26,(uint *)(unaff_EBP - 0xc4));
          uVar11 = *(undefined1 *)(unaff_EBP - 0xc4);
          *(undefined4 *)(unaff_EBP - 0xd0) = uVar27;
          *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x1c) = uVar11;
          bVar12 = *(int *)(unaff_EBP - 0xc4) == 0;
        }
LAB_004b07bb:
        if (bVar12) goto LAB_004b0d0b;
        iVar31 = *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar31 * 0x14);
        goto LAB_004b0d04;
      case 0x49:
        if ((*(byte *)(*(int *)(unaff_EBP - 0xe0) + 0x1c +
                      *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x28) & 1) == 0) goto LAB_004b0d0b;
        break;
      case 0x4a:
        bVar12 = (*(byte *)(*(int *)(unaff_EBP - 0xe0) + 0x1c +
                           *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x28) & 1) == 0;
        goto LAB_004b0cfe;
      case 0x4b:
      case 0x4c:
      case 0x4d:
      case 0x4e:
      case 0x4f:
      case 0x50:
        piVar28 = (int *)(*(int *)(unaff_EBP - 0xe0) + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x28);
        piVar32 = (int *)(*(int *)(unaff_EBP - 0xe0) + *(int *)(iVar17 + 0xc + iVar31 * 0x14) * 0x28
                         );
        *(short *)(unaff_EBP - 0xc6) = (short)piVar28[7];
        uVar4 = *(ushort *)(piVar32 + 7);
        bVar10 = *(byte *)(unaff_EBP - 0xc6);
        *(ushort *)(unaff_EBP - 0xc4) = uVar4;
        bVar3 = *(byte *)(*(int *)(unaff_EBP - 0xdc) + 3 + iVar31 * 0x14);
        if ((((byte)uVar4 | bVar10) & 1) == 0) {
          *(byte *)(unaff_EBP - 200) = bVar3 & 0x67;
          if ((bVar3 & 0x67) != 0) {
            FUN_004ae250(piVar28,(char)*(undefined4 *)(unaff_EBP - 200),
                         (byte)*(undefined4 *)(unaff_EBP - 0xec));
            FUN_004ae250(piVar32,(char)*(undefined4 *)(unaff_EBP - 200),
                         (byte)*(undefined4 *)(unaff_EBP - 0xec));
            unaff_EBX = *(int **)(unaff_EBP - 0xe4);
            if ((char)unaff_EBX[0xe] != '\0') goto LAB_004b57a6;
          }
          if ((*(ushort *)(piVar28 + 7) & 0x4000) != 0) {
            FUN_004b6fa0(piVar28);
          }
          if ((*(ushort *)(piVar32 + 7) & 0x4000) != 0) {
            FUN_004b6fa0(piVar32);
          }
          uVar18 = FUN_004a0720((undefined8 *)piVar32,(undefined8 *)piVar28,
                                *(int *)(*(int *)(unaff_EBP - 0xdc) + 0x10 + iVar31 * 0x14));
        }
        else {
          if (-1 < (char)bVar3) {
            unaff_EBX = *(int **)(unaff_EBP - 0xe4);
            if ((bVar3 & 0x10) == 0) {
              bVar12 = (bVar3 & 8) == 0;
              goto LAB_004b07b5;
            }
            piVar28 = (int *)(*(int *)(unaff_EBP - 0xe0) +
                             *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar31 * 0x14) * 0x28);
            uVar4 = *(ushort *)(piVar28 + 7);
            *(int **)(unaff_EBP - 0xd8) = piVar28;
            *(ushort *)(piVar28 + 7) = uVar4 & 0xbe01 | 1;
            goto LAB_004b0d0b;
          }
          if ((((bVar10 & 1) == 0) || ((uVar4 & 1) == 0)) ||
             ((*(uint *)(unaff_EBP - 0xc4) & 0x100) != 0)) {
            uVar18 = 1;
          }
          else {
            uVar18 = 0;
          }
        }
        iVar17 = *(int *)(unaff_EBP - 0xdc);
        *(uint *)(unaff_EBP - 0xcc) = uVar18;
        switch(*(undefined1 *)(iVar17 + iVar31 * 0x14)) {
        case 0x4b:
          uVar18 = (uint)(uVar18 != 0);
          break;
        case 0x4c:
          uVar18 = (uint)(uVar18 == 0);
          break;
        case 0x4d:
          uVar18 = (uint)(0 < (int)uVar18);
          break;
        case 0x4e:
          uVar18 = (uint)((int)uVar18 < 1);
          break;
        case 0x4f:
          uVar18 = (uint)((int)uVar18 < 0);
          break;
        default:
          uVar18 = (uint)(-1 < (int)uVar18);
        }
        iVar17 = *(int *)(unaff_EBP - 0xdc);
        *(uint *)(unaff_EBP - 0xcc) = uVar18;
        if ((*(byte *)(iVar17 + 3 + iVar31 * 0x14) & 0x10) == 0) {
          if (uVar18 != 0) {
            *(int *)(unaff_EBP - 0xe8) = *(int *)(iVar17 + 8 + iVar31 * 0x14) + -1;
          }
        }
        else {
          iVar31 = *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar17 + 8 + iVar31 * 0x14) * 0x28;
          *(int *)(unaff_EBP - 0xd8) = iVar31;
          *(ushort *)(iVar31 + 0x1c) = *(ushort *)(iVar31 + 0x1c) & 0xbe04 | 4;
          iVar17 = *(int *)(unaff_EBP - 0xcc);
          *(int *)(iVar31 + 0x10) = iVar17;
          *(int *)(iVar31 + 0x14) = iVar17 >> 0x1f;
        }
        *(ushort *)(piVar28 + 7) =
             *(ushort *)(piVar28 + 7) ^
             (*(ushort *)(piVar28 + 7) ^ *(ushort *)(unaff_EBP - 0xc6)) & 0x1ff;
        piVar28 = *(int **)(unaff_EBP - 0xd8);
        *(ushort *)(piVar32 + 7) =
             *(ushort *)(piVar32 + 7) ^
             (*(ushort *)(piVar32 + 7) ^ *(ushort *)(unaff_EBP - 0xc4)) & 0x1ff;
        unaff_EBX = *(int **)(unaff_EBP - 0xe4);
        goto LAB_004b0d0b;
      case 0x51:
      case 0x5c:
      case 0x5f:
        if (unaff_EBX[0x38] != 0) goto LAB_004af4ee;
        puVar26 = *(undefined4 **)
                   (*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                   *(int *)(iVar17 + 4 + iVar31 * 0x14) * 4);
        *(undefined4 **)(unaff_EBP - 0xcc) = puVar26;
        if (puVar26 != (undefined4 *)0x0) {
          if (puVar26[0x12] == 0) {
            *(undefined4 *)(unaff_EBP - 200) = 1;
            iVar17 = (**(code **)(iVar17 + 0x10 + iVar31 * 0x14))(*puVar26);
          }
          else {
            iVar17 = FUN_004b8f40((int)unaff_EBX,(int)puVar26,(uint *)(unaff_EBP - 200));
          }
          iVar14 = *(int *)(unaff_EBP - 0xcc);
          *(int *)(unaff_EBP - 0xd0) = iVar17;
          *(undefined1 *)(iVar14 + 0x1c) = *(undefined1 *)(unaff_EBP - 200);
          *(undefined4 *)(*(int *)(unaff_EBP - 0xcc) + 0x50) = 0;
          if (*(int *)(unaff_EBP - 200) == 0) {
            bVar10 = *(byte *)(*(int *)(unaff_EBP - 0xdc) + 3 + iVar31 * 0x14);
            *(int *)(unaff_EBP - 0xe8) =
                 *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar31 * 0x14) + -1;
            if (bVar10 != 0) {
              piVar32 = (int *)(*(int *)(unaff_EBP - 0xd4) + 0x70 + (uint)bVar10 * 4);
              *piVar32 = *piVar32 + 1;
            }
          }
          *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x19) = 0;
        }
        goto LAB_004b0d0b;
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
        iVar14 = *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x28;
        iVar23 = *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar17 + 8 + iVar31 * 0x14) * 0x28;
        *(int *)(unaff_EBP - 0xd8) =
             *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar17 + 0xc + iVar31 * 0x14) * 0x28;
        if (((*(byte *)(iVar23 + 0x1c) | *(byte *)(iVar14 + 0x1c)) & 1) == 0) {
          uVar40 = FUN_004b65e0(iVar23);
          *(ulonglong *)(unaff_EBP - 0xcc) = uVar40;
          uVar40 = FUN_004b65e0(iVar14);
          uVar30 = (uint)(uVar40 >> 0x20);
          uVar18 = (uint)uVar40;
          iVar17 = *(int *)(unaff_EBP - 0xdc);
          *(ulonglong *)(unaff_EBP - 0xbc) = uVar40;
          cVar9 = *(char *)(iVar17 + iVar31 * 0x14);
          *(char *)(unaff_EBP - 0xb4) = cVar9;
          if (cVar9 == 'R') {
            uVar18 = *(uint *)(unaff_EBP - 0xcc) & uVar18;
            *(uint *)(unaff_EBP - 200) = *(uint *)(unaff_EBP - 200) & uVar30;
            *(uint *)(unaff_EBP - 0xcc) = uVar18;
          }
          else if (cVar9 == 'S') {
            uVar18 = *(uint *)(unaff_EBP - 0xcc) | uVar18;
            *(uint *)(unaff_EBP - 200) = *(uint *)(unaff_EBP - 200) | uVar30;
            *(uint *)(unaff_EBP - 0xcc) = uVar18;
          }
          else if (uVar40 == 0) {
            uVar18 = *(uint *)(unaff_EBP - 0xcc);
          }
          else {
            if (uVar30 == 0 || (longlong)uVar40 < 0) {
              if ((longlong)uVar40 < 0) {
                cVar9 = -0x57 - cVar9;
                *(char *)(unaff_EBP - 0xb4) = cVar9;
                if (((longlong)uVar40 < -0x100000000) ||
                   ((0x7fffffffffffffff < uVar40 && (uVar18 < 0xffffffc1)))) {
                  *(undefined4 *)(unaff_EBP - 0xbc) = 0x40;
                  *(undefined4 *)(unaff_EBP - 0xb8) = 0;
                  goto LAB_004b03ac;
                }
                iVar31 = -(uVar30 + (uVar18 != 0));
                uVar40 = CONCAT44(iVar31,-uVar18);
                *(uint *)(unaff_EBP - 0xbc) = -uVar18;
                *(int *)(unaff_EBP - 0xb8) = iVar31;
              }
              if ((longlong)uVar40 < 0x40) {
                if (cVar9 == 'T') {
                  *(ulonglong *)(unaff_EBP - 0xc4) =
                       *(ulonglong *)(unaff_EBP - 0xcc) << (uVar40 & 0xffffffff);
                  uVar18 = *(uint *)(unaff_EBP - 0xc4);
                  uVar27 = *(undefined4 *)(unaff_EBP - 0xc0);
                  *(uint *)(unaff_EBP - 0xcc) = uVar18;
                  *(undefined4 *)(unaff_EBP - 200) = uVar27;
                }
                else {
                  iVar31 = *(int *)(unaff_EBP - 200);
                  *(ulonglong *)(unaff_EBP - 0xc4) =
                       *(ulonglong *)(unaff_EBP - 0xcc) >> (uVar40 & 0xffffffff);
                  if ((iVar31 < 1) && (iVar31 < 0)) {
                    lVar39 = __allshl(0x40 - (char)uVar40,-1);
                    *(uint *)(unaff_EBP - 0xc4) = *(uint *)(unaff_EBP - 0xc4) | (uint)lVar39;
                    *(uint *)(unaff_EBP - 0xc0) =
                         *(uint *)(unaff_EBP - 0xc0) | (uint)((ulonglong)lVar39 >> 0x20);
                  }
                  uVar18 = *(uint *)(unaff_EBP - 0xc4);
                  uVar27 = *(undefined4 *)(unaff_EBP - 0xc0);
                  *(uint *)(unaff_EBP - 0xcc) = uVar18;
                  *(undefined4 *)(unaff_EBP - 200) = uVar27;
                }
                goto LAB_004b049d;
              }
            }
LAB_004b03ac:
            if (((*(int *)(unaff_EBP - 200) < 1) && (*(int *)(unaff_EBP - 200) < 0)) &&
               (cVar9 != 'T')) {
              uVar18 = 0xffffffff;
              *(undefined4 *)(unaff_EBP - 0xcc) = 0xffffffff;
              *(undefined4 *)(unaff_EBP - 200) = 0xffffffff;
            }
            else {
              uVar18 = 0;
              *(undefined4 *)(unaff_EBP - 0xcc) = 0;
              *(undefined4 *)(unaff_EBP - 200) = 0;
            }
          }
LAB_004b049d:
          piVar28 = *(int **)(unaff_EBP - 0xd8);
          piVar28[4] = uVar18;
          piVar28[5] = *(int *)(unaff_EBP - 200);
          *(ushort *)(piVar28 + 7) = *(ushort *)(piVar28 + 7) & 0xbe04 | 4;
        }
        else {
          piVar28 = *(int **)(unaff_EBP - 0xd8);
          FUN_004b78c0((int)piVar28);
        }
        goto LAB_004b0d0b;
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5a:
        iVar14 = *(int *)(unaff_EBP - 0xe0);
        iVar17 = iVar14 + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x28;
        FUN_0046dfa0(iVar17);
        iVar14 = iVar14 + *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar31 * 0x14) * 0x28;
        FUN_0046dfa0(iVar14);
        uVar4 = *(ushort *)(iVar17 + 0x1c);
        *(int *)(unaff_EBP - 0xd8) =
             *(int *)(unaff_EBP - 0xe0) +
             *(int *)(*(int *)(unaff_EBP - 0xdc) + 0xc + iVar31 * 0x14) * 0x28;
        uVar4 = uVar4 | *(ushort *)(iVar14 + 0x1c);
        *(uint *)(unaff_EBP - 200) = (uint)uVar4;
        if ((uVar4 & 1) != 0) goto LAB_004b001a;
        if ((*(byte *)(iVar17 + 0x1c) & *(byte *)(iVar14 + 0x1c) & 4) == 0) {
          *(undefined1 *)(unaff_EBP - 0xcc) = 0;
          goto LAB_004afe6d;
        }
        uVar18 = *(uint *)(iVar17 + 0x10);
        *(uint *)(unaff_EBP - 0xc4) = uVar18;
        uVar30 = *(uint *)(iVar17 + 0x14);
        *(uint *)(unaff_EBP - 0xc0) = uVar30;
        uVar27 = *(undefined4 *)(iVar14 + 0x10);
        *(undefined4 *)(unaff_EBP - 0xf0) = uVar27;
        *(undefined4 *)(unaff_EBP - 0xbc) = uVar27;
        uVar27 = *(undefined4 *)(iVar14 + 0x14);
        *(undefined4 *)(unaff_EBP - 0x104) = uVar27;
        *(undefined4 *)(unaff_EBP - 0xb8) = uVar27;
        iVar23 = *(int *)(unaff_EBP - 0xdc);
        *(undefined1 *)(unaff_EBP - 0xcc) = 1;
        switch(*(undefined1 *)(iVar23 + iVar31 * 0x14)) {
        case 0x56:
          iVar23 = FUN_0048bce0((uint *)(unaff_EBP - 0xbc),uVar18,uVar30);
          if (iVar23 != 0) goto LAB_004afe6d;
          break;
        case 0x57:
          iVar23 = FUN_004aa9e0((uint *)(unaff_EBP - 0xbc),uVar18,uVar30);
          goto joined_r0x004afda1;
        case 0x58:
          iVar23 = FUN_004a0bf0((uint *)(unaff_EBP - 0xbc),uVar18,uVar30);
joined_r0x004afda1:
          if (iVar23 == 0) break;
LAB_004afe6d:
          fVar36 = FUN_004b8350(iVar17);
          *(double *)(unaff_EBP - 0xb4) = (double)fVar36;
          fVar36 = FUN_004b8350(iVar14);
          *(double *)(unaff_EBP - 0xac) = (double)fVar36;
          switch(*(undefined1 *)(*(int *)(unaff_EBP - 0xdc) + iVar31 * 0x14)) {
          case 0x56:
            *(double *)(unaff_EBP - 0xac) =
                 *(double *)(unaff_EBP - 0xac) + *(double *)(unaff_EBP - 0xb4);
            break;
          case 0x57:
            *(double *)(unaff_EBP - 0xac) =
                 *(double *)(unaff_EBP - 0xac) - *(double *)(unaff_EBP - 0xb4);
            break;
          case 0x58:
            *(double *)(unaff_EBP - 0xac) =
                 *(double *)(unaff_EBP - 0xac) * *(double *)(unaff_EBP - 0xb4);
            break;
          case 0x59:
            if (*(double *)(unaff_EBP - 0xb4) != 0.0) {
              *(double *)(unaff_EBP - 0xac) =
                   *(double *)(unaff_EBP - 0xac) / *(double *)(unaff_EBP - 0xb4);
              break;
            }
            goto LAB_004b001a;
          default:
            uVar40 = FUN_0054a946();
            *(ulonglong *)(unaff_EBP - 0xc4) = uVar40;
            uVar38 = FUN_0054a946();
            *(ulonglong *)(unaff_EBP - 0xbc) = uVar38;
            if (uVar40 == 0) goto LAB_004b001a;
            if (uVar40 == 0xffffffffffffffff) {
              uVar40 = 1;
              *(undefined4 *)(unaff_EBP - 0xc4) = 1;
              *(undefined4 *)(unaff_EBP - 0xc0) = 0;
            }
            uVar37 = __allrem((uint)uVar38,(uint)(uVar38 >> 0x20),(uint)uVar40,
                              (uint)(uVar40 >> 0x20));
            *(undefined8 *)(unaff_EBP - 0x134) = uVar37;
            *(double *)(unaff_EBP - 0xac) = (double)*(longlong *)(unaff_EBP - 0x134);
          }
          iVar31 = FUN_0049f810();
          if (iVar31 == 0) {
            piVar28 = *(int **)(unaff_EBP - 0xd8);
            *(undefined8 *)(piVar28 + 2) = *(undefined8 *)(unaff_EBP - 0xac);
            *(ushort *)(piVar28 + 7) = *(ushort *)(piVar28 + 7) & 0xbe08 | 8;
            if (((*(byte *)(unaff_EBP - 200) & 8) != 0) || (*(char *)(unaff_EBP - 0xcc) != '\0'))
            goto LAB_004af834;
            FUN_004b6650((int)piVar28);
            unaff_EBX = *(int **)(unaff_EBP - 0xe4);
          }
          else {
LAB_004b001a:
            piVar28 = *(int **)(unaff_EBP - 0xd8);
            FUN_004b78c0((int)piVar28);
            unaff_EBX = *(int **)(unaff_EBP - 0xe4);
          }
          goto LAB_004b0d0b;
        case 0x59:
          if (uVar18 != 0 || uVar30 != 0) {
            if ((((uVar18 & uVar30) != 0xffffffff) || (*(uint *)(unaff_EBP - 0xf0) != 0)) ||
               (*(int *)(unaff_EBP - 0x104) != -0x80000000)) {
              uVar37 = __alldiv(*(uint *)(unaff_EBP - 0xf0),*(uint *)(unaff_EBP - 0x104),uVar18,
                                uVar30);
              goto LAB_004afe23;
            }
            goto LAB_004afe6d;
          }
          goto LAB_004b001a;
        default:
          if (uVar18 == 0 && uVar30 == 0) goto LAB_004b001a;
          if ((uVar18 & uVar30) == 0xffffffff) {
            uVar18 = 1;
            uVar30 = 0;
            *(undefined4 *)(unaff_EBP - 0xc4) = 1;
            *(undefined4 *)(unaff_EBP - 0xc0) = 0;
          }
          uVar37 = __allrem(*(uint *)(unaff_EBP - 0xf0),*(uint *)(unaff_EBP - 0x104),uVar18,uVar30);
LAB_004afe23:
          *(undefined8 *)(unaff_EBP - 0xbc) = uVar37;
        }
        piVar28 = *(int **)(unaff_EBP - 0xd8);
        unaff_EBX = *(int **)(unaff_EBP - 0xe4);
        piVar28[4] = *(int *)(unaff_EBP - 0xbc);
        piVar28[5] = *(int *)(unaff_EBP - 0xb8);
        *(ushort *)(piVar28 + 7) = *(ushort *)(piVar28 + 7) & 0xbe04 | 4;
        goto LAB_004b0d0b;
      case 0x5b:
        iVar14 = *(int *)(unaff_EBP - 0xe0);
        piVar32 = (int *)(iVar14 + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x28);
        piVar8 = (int *)(iVar14 + *(int *)(iVar17 + 8 + iVar31 * 0x14) * 0x28);
        piVar28 = (int *)(iVar14 + *(int *)(iVar17 + 0xc + iVar31 * 0x14) * 0x28);
        uVar4 = *(ushort *)(piVar32 + 7);
        bVar10 = *(byte *)(piVar8 + 7);
        *(int **)(unaff_EBP - 0xd8) = piVar28;
        if (((bVar10 | (byte)uVar4) & 1) != 0) {
          FUN_004b78c0((int)piVar28);
          unaff_EBX = *(int **)(unaff_EBP - 0xe4);
          goto LAB_004b0d0b;
        }
        if ((((((uVar4 & 0x4000) != 0) && (iVar31 = FUN_004b6fa0(piVar32), iVar31 != 0)) ||
             (((*(ushort *)(piVar8 + 7) & 0x4000) != 0 &&
              (iVar31 = FUN_004b6fa0(piVar8), iVar31 != 0)))) ||
            (((*(byte *)(piVar32 + 7) & 0x12) == 0 &&
             (iVar31 = FUN_004b7cf0(piVar32,(uint)*(byte *)(unaff_EBP - 0xec)), iVar31 != 0)))) ||
           (((*(byte *)(piVar8 + 7) & 0x12) == 0 &&
            (iVar31 = FUN_004b7cf0(piVar8,(uint)*(byte *)(unaff_EBP - 0xec)), iVar31 != 0))))
        goto LAB_004b57a0;
        uVar30 = piVar32[6] + piVar8[6];
        iVar17 = (int)uVar30 >> 0x1f;
        iVar31 = *(int *)(unaff_EBP - 0xe4);
        *(uint *)(unaff_EBP - 0xcc) = uVar30;
        *(int *)(unaff_EBP - 200) = iVar17;
        uVar18 = *(uint *)(iVar31 + 0x50);
        iVar31 = (int)uVar18 >> 0x1f;
        if ((iVar31 < iVar17) || ((iVar31 <= iVar17 && (uVar18 < uVar30)))) goto LAB_004b577a;
        piVar5 = *(int **)(unaff_EBP - 0xd8);
        *(ushort *)(piVar5 + 7) = *(ushort *)(piVar5 + 7) & 0xbe02 | 2;
        iVar31 = FUN_004b7260(piVar5,*(int *)(unaff_EBP - 0xcc) + 2,(uint)(piVar5 == piVar8));
        if (iVar31 != 0) goto LAB_004b57a0;
        if (piVar5 != piVar8) {
          memcpy((void *)piVar5[1],(void *)piVar8[1],piVar8[6]);
        }
        memcpy((void *)(piVar5[1] + piVar8[6]),(void *)piVar32[1],piVar32[6]);
        unaff_EBX = *(int **)(unaff_EBP - 0xe4);
        piVar28 = *(int **)(unaff_EBP - 0xd8);
        *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + piVar5[1]) = 0;
        *(undefined1 *)(piVar5[1] + 1 + *(int *)(unaff_EBP - 0xcc)) = 0;
        *(ushort *)(piVar5 + 7) = *(ushort *)(piVar5 + 7) | 0x200;
        piVar5[6] = *(int *)(unaff_EBP - 0xcc);
        *(undefined1 *)((int)piVar5 + 0x1f) = *(undefined1 *)(unaff_EBP - 0xec);
        goto LAB_004b0d0b;
      case 0x5d:
        iVar14 = *(int *)(iVar17 + 4 + iVar31 * 0x14);
        iVar23 = *(int *)(unaff_EBP - 0xe0);
        bVar10 = *(byte *)(iVar23 + 0x1c + iVar14 * 0x28);
        piVar28 = (int *)(iVar23 + *(int *)(iVar17 + 8 + iVar31 * 0x14) * 0x28);
        *(int **)(unaff_EBP - 0xd8) = piVar28;
        if ((bVar10 & 1) == 0) {
          uVar40 = FUN_004b65e0(iVar23 + iVar14 * 0x28);
          FUN_004b7860(piVar28,~(uint)uVar40,~(uint)(uVar40 >> 0x20));
          piVar28 = *(int **)(unaff_EBP - 0xd8);
        }
        else {
          FUN_004b78c0((int)piVar28);
        }
        goto LAB_004b0d0b;
      case 0x5e:
        *(undefined1 *)(iVar17 + iVar31 * 0x14) = 9;
        uVar18 = FUN_004aa9b0(*(char **)(iVar17 + 0x10 + iVar31 * 0x14));
        cVar9 = *(char *)(unaff_EBP - 0xec);
        *(uint *)(*(int *)(unaff_EBP - 0xdc) + 4 + iVar31 * 0x14) = uVar18;
        if (cVar9 == '\x01') {
          iVar17 = *(int *)(unaff_EBP - 0xdc);
        }
        else {
          iVar17 = FUN_004b79e0(piVar28,extraout_EDX,0xffffffff,'\x01',(undefined *)0x0);
          *(int *)(unaff_EBP - 0xd0) = iVar17;
          if (iVar17 == 0x12) goto LAB_004b5780;
          iVar17 = FUN_004aec30(piVar28,(uint)*(byte *)(unaff_EBP - 0xec));
          if (iVar17 != 0) goto LAB_004b57a6;
          iVar17 = *(int *)(unaff_EBP - 0xdc);
          piVar28[9] = 0;
          *(ushort *)(piVar28 + 7) = *(ushort *)(piVar28 + 7) & 0xfbff | 0x800;
          if (*(char *)(iVar17 + 1 + iVar31 * 0x14) == -1) {
            FUN_00494b00((int)unaff_EBX,*(undefined4 **)(iVar17 + 0x10 + iVar31 * 0x14));
            iVar17 = *(int *)(unaff_EBP - 0xdc);
          }
          *(undefined1 *)(iVar17 + 1 + iVar31 * 0x14) = 0xff;
          *(int *)(iVar17 + 0x10 + iVar31 * 0x14) = piVar28[1];
          *(int *)(iVar17 + 4 + iVar31 * 0x14) = piVar28[6];
        }
        if (unaff_EBX[0x14] < *(int *)(iVar17 + 4 + iVar31 * 0x14)) goto LAB_004b5780;
switchD_004af4da_caseD_9:
        *(undefined2 *)(piVar28 + 7) = 0xa02;
        piVar28[1] = *(int *)(iVar17 + 0x10 + iVar31 * 0x14);
        piVar28[6] = *(int *)(iVar17 + 4 + iVar31 * 0x14);
        *(undefined1 *)((int)piVar28 + 0x1f) = *(undefined1 *)(unaff_EBP - 0xec);
        goto LAB_004b0d0b;
      case 0x60:
      case 0x61:
        piVar32 = *(int **)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                           *(int *)(iVar17 + 4 + iVar31 * 0x14) * 4);
        *(int **)(unaff_EBP - 0xcc) = piVar32;
        iVar17 = *(int *)(iVar17 + 8 + iVar31 * 0x14);
        puVar21 = (uint *)*piVar32;
        iVar14 = *(int *)(unaff_EBP - 0xe0);
        *(uint **)(unaff_EBP - 200) = puVar21;
        piVar28 = (int *)(iVar14 + iVar17 * 0x28);
        if (puVar21 == (uint *)0x0) goto LAB_004af834;
        if ((*(ushort *)(piVar28 + 7) & 0x4000) != 0) {
          iVar17 = FUN_004b6fa0(piVar28);
          *(int *)(unaff_EBP - 0xd0) = iVar17;
          if (iVar17 != 0) goto LAB_004af834;
          puVar21 = *(uint **)(unaff_EBP - 200);
          piVar32 = *(int **)(unaff_EBP - 0xcc);
        }
        if (piVar32[0x12] == 0) {
          uVar18 = piVar28[6];
          iVar17 = *(int *)(unaff_EBP - 0xdc);
          *(uint *)(unaff_EBP - 0xc4) = uVar18;
          pbVar35 = (byte *)piVar28[1];
          *(byte **)(unaff_EBP - 0xc0) = pbVar35;
          if ((*(byte *)(iVar17 + 3 + iVar31 * 0x14) & 0x10) == 0) {
            puVar20 = (uint *)0x0;
          }
          else {
            puVar20 = (uint *)piVar32[0x13];
          }
          puVar21 = FUN_0048ffe0(puVar21,pbVar35,uVar18,(int)uVar18 >> 0x1f,&DAT_0055b524,0,0,
                                 *(int *)(*(int *)(unaff_EBP - 0xdc) + 0xc + iVar31 * 0x14),puVar20)
          ;
          unaff_EBX = *(int **)(unaff_EBP - 0xe4);
          piVar28 = *(int **)(unaff_EBP - 0xd8);
          *(uint **)(unaff_EBP - 0xd0) = puVar21;
          *(undefined4 *)(*(int *)(unaff_EBP - 0xcc) + 0x50) = 0;
          goto LAB_004b0d0b;
        }
        unaff_EBX = *(int **)(unaff_EBP - 0xe4);
        uVar18 = FUN_004b9360(unaff_EBX,(int)piVar32,(int)piVar28);
        piVar28 = *(int **)(unaff_EBP - 0xd8);
        *(uint *)(unaff_EBP - 0xd0) = uVar18;
        goto LAB_004b0d11;
      case 0x62:
        puVar26 = *(undefined4 **)
                   (*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                   *(int *)(iVar17 + 4 + iVar31 * 0x14) * 4);
        *(undefined4 **)(unaff_EBP - 0xcc) = puVar26;
        piVar32 = (int *)*puVar26;
        *(int **)(unaff_EBP - 200) = piVar32;
        if (piVar32 != (int *)0x0) {
          *(undefined4 *)(unaff_EBP - 0xbc) = puVar26[2];
          *(undefined2 *)(unaff_EBP - 0xb8) = *(undefined2 *)(iVar17 + 0xc + iVar31 * 0x14);
          *(undefined1 *)(unaff_EBP - 0xb6) = 0;
          *(int *)(unaff_EBP - 0xac) =
               *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar17 + 8 + iVar31 * 0x14) * 0x28;
          uVar18 = FUN_004908e0(piVar32,(int *)(unaff_EBP - 0xbc),0,0,0,(uint *)(unaff_EBP - 0xc4));
          *(uint *)(unaff_EBP - 0xd0) = uVar18;
          if ((uVar18 == 0) && (*(int *)(unaff_EBP - 0xc4) == 0)) {
            uVar18 = FUN_0048f930(*(uint **)(unaff_EBP - 200));
            *(uint *)(unaff_EBP - 0xd0) = uVar18;
          }
          *(undefined4 *)(*(int *)(unaff_EBP - 0xcc) + 0x50) = 0;
        }
        goto LAB_004b0d0b;
      case 99:
        piVar28 = *(int **)(unaff_EBP - 0xd8);
        puVar26 = *(undefined4 **)
                   (*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                   *(int *)(iVar17 + 4 + iVar31 * 0x14) * 4);
        *(undefined4 **)(unaff_EBP - 200) = puVar26;
        *(undefined4 *)(unaff_EBP - 0xcc) = *puVar26;
        *(undefined2 *)(piVar28 + 7) = 1;
        if (*(int *)(unaff_EBP - 0xcc) == 0) goto LAB_004af570;
        uVar18 = FUN_004af1b0(*(undefined4 **)(unaff_EBP - 200));
        *(uint *)(unaff_EBP - 0xd0) = uVar18;
        if (uVar18 != 0) goto LAB_004b572c;
        if (*(char *)(*(int *)(unaff_EBP - 200) + 0x1c) != '\0') goto LAB_004af570;
        uVar18 = FUN_004b6480(unaff_EBX,*(int **)(unaff_EBP - 0xcc),(undefined4 *)(unaff_EBP - 0xc4)
                             );
        *(uint *)(unaff_EBP - 0xd0) = uVar18;
        if (uVar18 != 0) goto LAB_004b572c;
        piVar28[4] = *(int *)(unaff_EBP - 0xc4);
        piVar28[5] = *(int *)(unaff_EBP - 0xc0);
        *(undefined2 *)(piVar28 + 7) = 4;
        goto LAB_004b0d0b;
      case 100:
      case 0x65:
        piVar32 = *(int **)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                           *(int *)(iVar17 + 4 + iVar31 * 0x14) * 4);
        *(int **)(unaff_EBP - 0xcc) = piVar32;
        if (*piVar32 == 0) goto LAB_004b0d0b;
        *(int *)(unaff_EBP - 0xc4) = piVar32[2];
        *(undefined2 *)(unaff_EBP - 0xc0) = *(undefined2 *)(iVar17 + 0x10 + iVar31 * 0x14);
        *(char *)(unaff_EBP - 0xbe) = (*(char *)(iVar17 + 3 + iVar31 * 0x14) != '\0') + '\x02';
        *(int *)(unaff_EBP - 0xb4) =
             *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar17 + 0xc + iVar31 * 0x14) * 0x28;
        uVar18 = FUN_004b63c0(piVar32,(int *)(unaff_EBP - 0xc4),(uint *)(unaff_EBP - 200));
        iVar17 = *(int *)(unaff_EBP - 0xdc);
        cVar9 = *(char *)(iVar17 + iVar31 * 0x14);
        *(uint *)(unaff_EBP - 0xd0) = uVar18;
        if (cVar9 == 'd') {
          iVar14 = -*(int *)(unaff_EBP - 200);
        }
        else {
          iVar14 = *(int *)(unaff_EBP - 200) + 1;
        }
        *(int *)(unaff_EBP - 200) = iVar14;
        if (iVar14 < 1) goto LAB_004b0d0b;
        iVar31 = *(int *)(iVar17 + 8 + iVar31 * 0x14);
        goto LAB_004b0d04;
      case 0x66:
        iVar14 = 0;
        *(undefined4 *)(unaff_EBP - 200) = 0;
        iVar17 = unaff_EBX[1];
        *(int *)(unaff_EBP - 0xc4) = iVar17;
        while (iVar17 != 0) {
          if (((*(int *)(iVar17 + 0x30) == -0x420df25d) &&
              (((byte)*(undefined4 *)(iVar17 + 0x60) & 0xc) < 8)) && (-1 < *(int *)(iVar17 + 0x54)))
          {
            iVar14 = iVar14 + 1;
            *(int *)(unaff_EBP - 200) = iVar14;
          }
          iVar17 = *(int *)(iVar17 + 0x3c);
          *(int *)(unaff_EBP - 0xc4) = iVar17;
        }
        *(undefined2 *)(piVar28 + 7) = 1;
        if (*(int *)(unaff_EBP - 200) < 2) {
          iVar17 = *(int *)(unaff_EBP - 0xdc);
          iVar14 = *(int *)(iVar17 + 0xc + iVar31 * 0x14);
          *(int *)(unaff_EBP - 0xc0) = iVar14;
          uVar18 = FUN_0048fb70(*(undefined4 **)(unaff_EBX[4] + 4 + iVar14 * 0x10),
                                *(char **)(iVar17 + 4 + iVar31 * 0x14),(uint *)(unaff_EBP - 0xcc));
          *(uint *)(unaff_EBP - 0xd0) = uVar18;
          *(undefined2 *)(piVar28 + 7) = 4;
          iVar17 = *(int *)(unaff_EBP - 0xcc);
          piVar28[4] = iVar17;
          uVar18 = *(uint *)(unaff_EBP - 0xd0);
          piVar28[5] = iVar17 >> 0x1f;
          if (uVar18 == 0) {
            if (*(int *)(unaff_EBP - 0xcc) != 0) {
              FUN_004a6dc0((int)unaff_EBX,*(int *)(unaff_EBP - 0xc0),*(int *)(unaff_EBP - 0xcc),
                           *(undefined4 *)(*(int *)(unaff_EBP - 0xdc) + 4 + iVar31 * 0x14));
              *(char *)(unaff_EBP - 0xf5) = *(char *)(unaff_EBP - 0xc0) + '\x01';
            }
            goto LAB_004b0d0b;
          }
        }
        else {
          iVar31 = *(int *)(unaff_EBP - 0xd4);
          uVar18 = 6;
          *(undefined4 *)(unaff_EBP - 0xd0) = 6;
          *(undefined1 *)(iVar31 + 0x5c) = 2;
        }
        goto LAB_004b0d11;
      case 0x67:
        *(undefined4 *)(unaff_EBP - 0xcc) = 0;
        piVar32 = (int *)(unaff_EBP - 0xcc);
        if (*(int *)(iVar17 + 0xc + iVar31 * 0x14) == 0) {
          piVar32 = (int *)0x0;
        }
        uVar18 = FUN_0048eff0(*(undefined4 **)
                               (unaff_EBX[4] + 4 + *(int *)(iVar17 + 8 + iVar31 * 0x14) * 0x10),
                              *(uint *)(iVar17 + 4 + iVar31 * 0x14),piVar32);
        iVar17 = *(int *)(unaff_EBP - 0xdc);
        iVar14 = *(int *)(iVar17 + 0xc + iVar31 * 0x14);
        *(uint *)(unaff_EBP - 0xd0) = uVar18;
        if (iVar14 != 0) {
          uVar18 = *(uint *)(unaff_EBP - 0xcc);
          piVar32 = (int *)(*(int *)(unaff_EBP - 0xd4) + 100);
          *piVar32 = *piVar32 + uVar18;
          iVar31 = *(int *)(iVar17 + 0xc + iVar31 * 0x14);
          if (0 < iVar31) {
            iVar17 = *(int *)(unaff_EBP - 0xe0);
            puVar21 = (uint *)(iVar17 + 0x10 + iVar31 * 0x28);
            uVar30 = *puVar21;
            *puVar21 = *puVar21 + uVar18;
            piVar32 = (int *)(iVar17 + 0x14 + iVar31 * 0x28);
            *piVar32 = *piVar32 + ((int)uVar18 >> 0x1f) + (uint)CARRY4(uVar30,uVar18);
          }
        }
        goto LAB_004b0d0b;
      case 0x68:
      case 0x69:
        *(undefined4 *)(unaff_EBP - 0xcc) = 0;
        iVar14 = *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x10 + unaff_EBX[4];
        *(int *)(unaff_EBP - 0xc4) = iVar14;
        iVar31 = (*(char *)(iVar17 + iVar31 * 0x14) != 'i') + 1;
        *(int *)(unaff_EBP - 200) = iVar31;
        pcVar24 = FUN_0048f740(*(undefined4 **)(iVar14 + 4),(undefined4 *)(unaff_EBP - 0xcc),
                               (byte)iVar31);
        *(char **)(unaff_EBP - 0xd0) = pcVar24;
        iVar31 = *(int *)(unaff_EBP - 0xcc);
        piVar28[4] = iVar31;
        piVar28[5] = iVar31 >> 0x1f;
        goto LAB_004b0d0b;
      case 0x6a:
        iVar17 = *(int *)(iVar17 + 4 + iVar31 * 0x14);
        *(int *)(unaff_EBP - 0xcc) = iVar17;
        pcVar24 = "sqlite_temp_master";
        if (iVar17 != 1) {
          pcVar24 = "sqlite_master";
        }
        iVar17 = *(int *)(unaff_EBP - 0xdc);
        *(char **)(unaff_EBP - 200) = pcVar24;
        *(int **)(unaff_EBP - 0xc0) = unaff_EBX;
        *(undefined4 *)(unaff_EBP - 0xb8) = *(undefined4 *)(iVar17 + 4 + iVar31 * 0x14);
        *(int *)(unaff_EBP - 0xbc) = *(int *)(unaff_EBP - 0xd4) + 0x34;
        iVar31 = FUN_004a02d0((int)unaff_EBX,
                              (byte *)
                              "SELECT name, rootpage, sql FROM \'%q\'.%s WHERE %s ORDER BY rowid");
        *(int *)(unaff_EBP - 0xc4) = iVar31;
        if (iVar31 == 0) {
          *(undefined4 *)(unaff_EBP - 0xd0) = 7;
LAB_004b3e54:
          FUN_004a6940((int)unaff_EBX);
          uVar18 = *(uint *)(unaff_EBP - 0xd0);
        }
        else {
          *(undefined1 *)((int)unaff_EBX + 0x81) = 1;
          pbVar35 = *(byte **)(unaff_EBP - 0xc4);
          *(undefined4 *)(unaff_EBP - 0xb4) = 0;
          uVar18 = FUN_00463120((int)unaff_EBX,pbVar35,FUN_0049de90,unaff_EBP - 0xc0,(int *)0x0);
          puVar26 = *(undefined4 **)(unaff_EBP - 0xc4);
          if (uVar18 == 0) {
            uVar18 = *(uint *)(unaff_EBP - 0xb4);
          }
          *(uint *)(unaff_EBP - 0xd0) = uVar18;
          FUN_00494b00((int)unaff_EBX,puVar26);
          iVar31 = *(int *)(unaff_EBP - 0xd0);
          *(undefined1 *)((int)unaff_EBX + 0x81) = 0;
          uVar18 = 0;
          if (iVar31 != 0) goto LAB_004b3e54;
        }
        if (uVar18 == 7) goto LAB_004b57a6;
        goto LAB_004b0d11;
      case 0x6b:
        uVar18 = FUN_0048c830((int)unaff_EBX,*(int *)(iVar17 + 4 + iVar31 * 0x14));
        *(uint *)(unaff_EBP - 0xd0) = uVar18;
        goto LAB_004b0d11;
      case 0x6c:
        FUN_004ab2d0((int)unaff_EBX,*(uint *)(iVar17 + 4 + iVar31 * 0x14),
                     *(byte **)(iVar17 + 0x10 + iVar31 * 0x14));
        goto LAB_004b0d0b;
      case 0x6d:
        FUN_004ab1f0((int)unaff_EBX,*(uint *)(iVar17 + 4 + iVar31 * 0x14),
                     *(byte **)(iVar17 + 0x10 + iVar31 * 0x14));
        goto LAB_004b0d0b;
      case 0x6e:
        FUN_004ab380((int)unaff_EBX,*(uint *)(iVar17 + 4 + iVar31 * 0x14),
                     *(byte **)(iVar17 + 0x10 + iVar31 * 0x14));
        goto LAB_004b0d0b;
      case 0x6f:
        iVar17 = *(int *)(iVar17 + 8 + iVar31 * 0x14);
        *(int *)(unaff_EBP - 0xcc) = iVar17;
        puVar26 = FUN_00494b90((int)unaff_EBX,iVar17 * 4 + 4);
        *(undefined4 **)(unaff_EBP - 200) = puVar26;
        if (puVar26 == (undefined4 *)0x0) goto LAB_004b57a6;
        iVar17 = *(int *)(unaff_EBP - 0xdc);
        iVar14 = *(int *)(unaff_EBP - 0xe0);
        *(int *)(unaff_EBP - 0xb8) = iVar14 + *(int *)(iVar17 + 0xc + iVar31 * 0x14) * 0x28;
        piVar28 = (int *)(iVar14 + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x28);
        iVar17 = 0;
        *(undefined4 *)(unaff_EBP - 0xc4) = 0;
        if (0 < *(int *)(unaff_EBP - 0xcc)) {
          do {
            uVar40 = FUN_004b65e0((int)(piVar28 + iVar17 * 10));
            *(int *)(*(int *)(unaff_EBP - 200) + *(int *)(unaff_EBP - 0xc4) * 4) = (int)uVar40;
            iVar17 = *(int *)(unaff_EBP - 0xc4) + 1;
            *(int *)(unaff_EBP - 0xc4) = iVar17;
          } while (iVar17 < *(int *)(unaff_EBP - 0xcc));
          puVar26 = *(undefined4 **)(unaff_EBP - 200);
        }
        puVar26[iVar17] = 0;
        uVar27 = FUN_004901e0(*(undefined4 **)
                               (unaff_EBX[4] + 4 +
                               (uint)*(byte *)(*(int *)(unaff_EBP - 0xdc) + 3 + iVar31 * 0x14) *
                               0x10),*(int *)(unaff_EBP - 200),*(int *)(unaff_EBP - 0xcc),
                              *(int *)(*(int *)(unaff_EBP - 0xb8) + 0x10),(int *)(unaff_EBP - 0xc0))
        ;
        puVar26 = *(undefined4 **)(unaff_EBP - 200);
        *(undefined4 *)(unaff_EBP - 0xbc) = uVar27;
        FUN_00494b00((int)unaff_EBX,puVar26);
        uVar30 = *(uint *)(unaff_EBP - 0xc0);
        iVar31 = *(int *)(unaff_EBP - 0xb8);
        puVar21 = (uint *)(iVar31 + 0x10);
        uVar18 = *puVar21;
        *puVar21 = *puVar21 - uVar30;
        piVar32 = (int *)(iVar31 + 0x14);
        *piVar32 = (*piVar32 - ((int)uVar30 >> 0x1f)) - (uint)(uVar18 < uVar30);
        FUN_004b78c0((int)piVar28);
        if (*(int *)(unaff_EBP - 0xc0) != 0) {
          if (*(void **)(unaff_EBP - 0xbc) == (void *)0x0) goto LAB_004b57a6;
          FUN_004b79e0(piVar28,*(void **)(unaff_EBP - 0xbc),0xffffffff,'\x01',FUN_00466dd0);
        }
        FUN_004aec30(piVar28,(uint)*(byte *)(unaff_EBP - 0xec));
        piVar28 = *(int **)(unaff_EBP - 0xd8);
        goto LAB_004b0d0b;
      case 0x70:
        iVar14 = *(int *)(iVar17 + 4 + iVar31 * 0x14);
        piVar28 = (int *)(*(int *)(unaff_EBP - 0xe0) + iVar14 * 0x28);
        iVar31 = *(int *)(iVar17 + 8 + iVar31 * 0x14);
        if (((*(byte *)(*(int *)(unaff_EBP - 0xe0) + 0x1c + iVar14 * 0x28) & 0x20) == 0) &&
           (FUN_004b7910(piVar28), (*(byte *)(piVar28 + 7) & 0x20) == 0)) goto LAB_004b57a6;
        FUN_004a6ed0((undefined4 *)piVar28[4],
                     *(uint *)(*(int *)(unaff_EBP - 0xe0) + 0x10 + iVar31 * 0x28),
                     *(uint *)(*(int *)(unaff_EBP - 0xe0) + 0x14 + iVar31 * 0x28));
        piVar28 = *(int **)(unaff_EBP - 0xd8);
        goto LAB_004b0d0b;
      case 0x71:
        if (unaff_EBX[0x38] != 0) {
LAB_004af4ee:
          iVar31 = *(int *)(unaff_EBP - 0xd4);
          *(undefined4 *)(iVar31 + 0x58) = 9;
          *(undefined4 *)(unaff_EBP - 0xd0) = 9;
          FUN_004a9a30((int *)(iVar31 + 0x34),(int)unaff_EBX,&DAT_0056de50);
          uVar18 = 9;
          goto LAB_004b57cd;
        }
        iVar14 = *(int *)(iVar17 + 4 + iVar31 * 0x14);
        iVar17 = *(int *)(unaff_EBP - 0xe0) + iVar14 * 0x28;
        if (((*(byte *)(*(int *)(unaff_EBP - 0xe0) + 0x1c + iVar14 * 0x28) & 0x20) == 0) ||
           (iVar14 = FUN_004a6f70(*(undefined4 **)(iVar17 + 0x10),(undefined4 *)(unaff_EBP - 0xcc)),
           iVar14 == 0)) {
          FUN_004b78c0(iVar17);
          piVar28 = *(int **)(unaff_EBP - 0xd8);
          iVar31 = *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar31 * 0x14);
          goto LAB_004b0d04;
        }
        FUN_004b7860((int *)(*(int *)(unaff_EBP - 0xe0) +
                            *(int *)(*(int *)(unaff_EBP - 0xdc) + 0xc + iVar31 * 0x14) * 0x28),
                     *(int *)(unaff_EBP - 0xcc),*(int *)(unaff_EBP - 200));
        piVar28 = *(int **)(unaff_EBP - 0xd8);
        goto LAB_004b0d0b;
      case 0x72:
        iVar14 = *(int *)(unaff_EBP - 0xe0);
        piVar28 = (int *)(iVar14 + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x28);
        iVar23 = *(int *)(iVar17 + 0xc + iVar31 * 0x14);
        iVar17 = *(int *)(iVar17 + 0x10 + iVar31 * 0x14);
        *(int *)(unaff_EBP - 0xcc) = iVar17;
        if ((*(byte *)(piVar28 + 7) & 0x20) == 0) {
          FUN_004b7910(piVar28);
          if ((*(byte *)(piVar28 + 7) & 0x20) == 0) goto LAB_004b57a0;
          iVar17 = *(int *)(unaff_EBP - 0xcc);
          iVar14 = *(int *)(unaff_EBP - 0xe0);
        }
        bVar12 = iVar17 < 0;
        if (iVar17 != 0) {
          if (bVar12) {
            bVar10 = 0xff;
          }
          else {
            bVar10 = (byte)iVar17 & 0xf;
          }
          iVar17 = FUN_004a6fd0((undefined4 *)piVar28[4],bVar10,
                                *(uint *)(iVar14 + 0x10 + iVar23 * 0x28),
                                *(int *)(iVar14 + 0x14 + iVar23 * 0x28));
          *(int *)(unaff_EBP - 200) = iVar17;
          if (iVar17 != 0) goto LAB_004b4170;
          bVar12 = *(int *)(unaff_EBP - 0xcc) < 0;
        }
        if (bVar12) goto LAB_004af834;
        FUN_004a6ed0((undefined4 *)piVar28[4],
                     *(uint *)(*(int *)(unaff_EBP - 0xe0) + 0x10 + iVar23 * 0x28),
                     *(uint *)(*(int *)(unaff_EBP - 0xe0) + 0x14 + iVar23 * 0x28));
        unaff_EBX = *(int **)(unaff_EBP - 0xe4);
        piVar28 = *(int **)(unaff_EBP - 0xd8);
        goto LAB_004b0d0b;
      case 0x73:
        iVar14 = *(int *)(iVar17 + 0x10 + iVar31 * 0x14);
        iVar23 = *(int *)(unaff_EBP - 0xdc);
        iVar17 = *(int *)(unaff_EBP - 0xe0);
        *(int *)(unaff_EBP - 0xb4) = iVar14;
        iVar17 = iVar17 + *(int *)(iVar23 + 0xc + iVar31 * 0x14) * 0x28;
        *(int *)(unaff_EBP - 0xc4) = iVar17;
        if (*(char *)(iVar23 + 3 + iVar31 * 0x14) != '\0') {
          iVar31 = *(int *)(iVar14 + 0x14);
          iVar23 = *(int *)(*(int *)(unaff_EBP - 0xd4) + 0xa0);
          *(int *)(unaff_EBP - 0xb0) = iVar31;
          *(int *)(unaff_EBP - 0xb8) = iVar23;
          while (iVar23 != 0) {
            if (*(int *)(iVar23 + 0x18) == iVar31) goto LAB_004af570;
            iVar23 = *(int *)(iVar23 + 4);
            *(int *)(unaff_EBP - 0xb8) = iVar23;
          }
        }
        iVar31 = *(int *)(unaff_EBP - 0xd4);
        if (unaff_EBX[0x1e] <= *(int *)(iVar31 + 0xa8)) {
          *(undefined4 *)(unaff_EBP - 0xd0) = 1;
          FUN_004a9a30((int *)(iVar31 + 0x34),(int)unaff_EBX,
                       (byte *)"too many levels of trigger recursion");
          uVar18 = 1;
          piVar28 = *(int **)(unaff_EBP - 0xd8);
          goto LAB_004b0d11;
        }
        if ((*(byte *)(iVar17 + 0x1c) & 0x40) == 0) {
          iVar31 = *(int *)(iVar14 + 8) + *(int *)(iVar14 + 0xc);
          *(int *)(unaff_EBP - 0xcc) = iVar31;
          sVar22 = *(int *)(iVar14 + 0x10) + (*(int *)(iVar14 + 0xc) + iVar31 * 10) * 4 + 0x48;
          *(size_t *)(unaff_EBP - 200) = sVar22;
          puVar26 = FUN_00494c20((int)unaff_EBX,sVar22);
          *(undefined4 **)(unaff_EBP - 0xb8) = puVar26;
          if (puVar26 == (undefined4 *)0x0) goto LAB_004b57a6;
          FUN_004b76e0(*(int **)(unaff_EBP - 0xc4));
          iVar31 = *(int *)(unaff_EBP - 0xd4);
          uVar27 = *(undefined4 *)(unaff_EBP - 0xe8);
          *(undefined2 *)(*(int *)(unaff_EBP - 0xc4) + 0x1c) = 0x40;
          *(undefined4 *)(*(int *)(unaff_EBP - 0xc4) + 0x10) = *(undefined4 *)(unaff_EBP - 0xb8);
          **(int **)(unaff_EBP - 0xb8) = iVar31;
          *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 0x3c) = *(undefined4 *)(unaff_EBP - 0xcc);
          *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 0x40) =
               *(undefined4 *)(*(int *)(unaff_EBP - 0xb4) + 0xc);
          *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 0x2c) = uVar27;
          *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 0xc) = *(undefined4 *)(iVar31 + 8);
          *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 0x34) = *(undefined4 *)(iVar31 + 0x18);
          *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 0x14) = *(undefined4 *)(iVar31 + 0x40);
          *(undefined2 *)(*(int *)(unaff_EBP - 0xb8) + 0x28) = *(undefined2 *)(iVar31 + 0x2e);
          *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 8) = *(undefined4 *)(iVar31 + 4);
          *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 0x30) = *(undefined4 *)(iVar31 + 0x1c);
          *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 0x18) =
               *(undefined4 *)(*(int *)(unaff_EBP - 0xb4) + 0x14);
          *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 0x10) = *(undefined4 *)(iVar31 + 0xb8);
          *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 0x38) = *(undefined4 *)(iVar31 + 0xb4);
          iVar17 = *(int *)(unaff_EBP - 0xb8);
          iVar23 = *(int *)(iVar17 + 0x3c);
          iVar14 = iVar17 + 0x48;
          *(int *)(unaff_EBP - 0xc0) = iVar14;
          iVar23 = iVar17 + (iVar23 * 5 + 9) * 8;
          *(int *)(unaff_EBP - 0xbc) = iVar23;
          if (iVar14 != iVar23) {
            do {
              *(undefined2 *)(iVar14 + 0x1c) = 0x80;
              **(undefined4 **)(unaff_EBP - 0xc0) = unaff_EBX;
              iVar14 = *(int *)(unaff_EBP - 0xc0) + 0x28;
              *(int *)(unaff_EBP - 0xc0) = iVar14;
            } while (iVar14 != *(int *)(unaff_EBP - 0xbc));
            iVar31 = *(int *)(unaff_EBP - 0xd4);
            iVar17 = *(int *)(unaff_EBP - 0xb8);
          }
        }
        else {
          iVar17 = *(int *)(iVar17 + 0x10);
          *(int *)(unaff_EBP - 0xb8) = iVar17;
        }
        *(int *)(iVar31 + 0xa8) = *(int *)(iVar31 + 0xa8) + 1;
        uVar27 = *(undefined4 *)(unaff_EBP - 0x100);
        *(undefined4 *)(iVar17 + 4) = *(undefined4 *)(iVar31 + 0xa0);
        *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 0x20) = uVar27;
        *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 0x24) = *(undefined4 *)(unaff_EBP - 0xfc);
        *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 0x44) = *(undefined4 *)(iVar31 + 100);
        iVar14 = *(int *)(unaff_EBP - 0xb8);
        puVar26 = *(undefined4 **)(unaff_EBP - 0xb4);
        *(int *)(iVar31 + 0xa0) = iVar14;
        iVar17 = iVar14 + 0x20;
        *(undefined4 *)(iVar31 + 100) = 0;
        *(int *)(iVar31 + 8) = iVar17;
        *(undefined4 *)(iVar31 + 0x18) = *(undefined4 *)(iVar14 + 0x3c);
        *(undefined2 *)(iVar31 + 0x2e) = *(undefined2 *)(iVar14 + 0x40);
        iVar14 = *(int *)(iVar31 + 0x18);
        *(int *)(unaff_EBP - 0xe0) = iVar17;
        iVar17 = iVar17 + (iVar14 + 1) * 0x28;
        *(int *)(iVar31 + 0x40) = iVar17;
        uVar27 = *puVar26;
        *(undefined4 *)(unaff_EBP - 0xdc) = uVar27;
        *(undefined4 *)(iVar31 + 4) = uVar27;
        *(undefined4 *)(iVar31 + 0x1c) = puVar26[1];
        _Dst = (void *)(iVar17 + (uint)*(ushort *)(iVar31 + 0x2e) * 4);
        *(void **)(iVar31 + 0xb8) = _Dst;
        sVar22 = puVar26[4];
        *(size_t *)(iVar31 + 0xb4) = sVar22;
        *(undefined4 *)(unaff_EBP - 0xe8) = 0xffffffff;
        memset(_Dst,0,sVar22);
        piVar28 = *(int **)(unaff_EBP - 0xd8);
        goto LAB_004b0d0b;
      case 0x74:
        iVar17 = *(int *)(*(int *)(unaff_EBP - 0xd4) + 0xa0);
        *(int *)(unaff_EBP - 0xcc) = iVar17;
        puVar34 = (undefined8 *)
                  (*(int *)(iVar17 + 0xc) +
                  (*(int *)(*(int *)(iVar17 + 8) + 4 + *(int *)(iVar17 + 0x2c) * 0x14) +
                  *(int *)(*(int *)(unaff_EBP - 0xdc) + 4 + iVar31 * 0x14)) * 0x28);
        *(undefined8 **)(unaff_EBP - 200) = puVar34;
        FUN_004b7c40(piVar28,puVar34,0x1000);
        goto LAB_004b0d0b;
      case 0x75:
        uVar18 = *(uint *)(iVar17 + 8 + iVar31 * 0x14);
        if (*(int *)(iVar17 + 4 + iVar31 * 0x14) == 0) {
          iVar31 = *(int *)(unaff_EBP - 0xd4);
          puVar21 = (uint *)(iVar31 + 0x88);
          uVar30 = *puVar21;
          *puVar21 = *puVar21 + uVar18;
          piVar32 = (int *)(iVar31 + 0x8c);
          *piVar32 = *piVar32 + ((int)uVar18 >> 0x1f) + (uint)CARRY4(uVar30,uVar18);
        }
        else {
          puVar21 = (uint *)(unaff_EBX + 0x7a);
          uVar30 = *puVar21;
          *puVar21 = *puVar21 + uVar18;
          unaff_EBX[0x7b] = unaff_EBX[0x7b] + ((int)uVar18 >> 0x1f) + (uint)CARRY4(uVar30,uVar18);
        }
        goto LAB_004b0d0b;
      case 0x76:
        if (*(int *)(iVar17 + 4 + iVar31 * 0x14) == 0) {
          bVar12 = *(int *)(*(int *)(unaff_EBP - 0xd4) + 0x88) == 0 &&
                   *(int *)(*(int *)(unaff_EBP - 0xd4) + 0x8c) == 0;
        }
        else {
          bVar12 = unaff_EBX[0x7a] == 0 && unaff_EBX[0x7b] == 0;
        }
LAB_004b0cfe:
        if (!bVar12) goto LAB_004b0d0b;
        break;
      case 0x77:
        iVar17 = *(int *)(*(int *)(unaff_EBP - 0xd4) + 0xa0);
        if (iVar17 == 0) {
          iVar17 = *(int *)(unaff_EBP - 0xe0) +
                   *(int *)(*(int *)(unaff_EBP - 0xdc) + 4 + iVar31 * 0x14) * 0x28;
        }
        else {
          *(int *)(unaff_EBP - 200) = iVar17;
          for (iVar14 = *(int *)(iVar17 + 4); iVar14 != 0; iVar14 = *(int *)(iVar14 + 4)) {
            *(int *)(unaff_EBP - 200) = iVar14;
            iVar17 = iVar14;
          }
          iVar17 = *(int *)(iVar17 + 0xc) +
                   *(int *)(*(int *)(unaff_EBP - 0xdc) + 4 + iVar31 * 0x14) * 0x28;
        }
        *(int *)(unaff_EBP - 0xcc) = iVar17;
        FUN_004b7410(iVar17);
        iVar31 = *(int *)(unaff_EBP - 0xe0) +
                 *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar31 * 0x14) * 0x28;
        FUN_004b7410(iVar31);
        iVar17 = *(int *)(unaff_EBP - 0xcc);
        iVar14 = *(int *)(iVar31 + 0x14);
        if ((iVar14 < *(int *)(iVar17 + 0x14)) ||
           ((iVar14 <= *(int *)(iVar17 + 0x14) &&
            (*(uint *)(iVar31 + 0x10) <= *(uint *)(iVar17 + 0x10))))) goto LAB_004af570;
        piVar28 = *(int **)(unaff_EBP - 0xd8);
        *(uint *)(iVar17 + 0x10) = *(uint *)(iVar31 + 0x10);
        *(int *)(iVar17 + 0x14) = iVar14;
        goto LAB_004b0d0b;
      case 0x78:
        iVar14 = *(int *)(iVar17 + 4 + iVar31 * 0x14);
        iVar23 = *(int *)(*(int *)(unaff_EBP - 0xe0) + 0x14 + iVar14 * 0x28);
        if (iVar23 < 0) goto LAB_004b0d0b;
        if (iVar23 < 1) {
          uVar18 = *(uint *)(*(int *)(unaff_EBP - 0xe0) + 0x10 + iVar14 * 0x28);
          goto joined_r0x004b4649;
        }
        break;
      case 0x79:
        iVar14 = *(int *)(*(int *)(unaff_EBP - 0xe0) + 0x14 +
                         *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x28);
        if ((0 < iVar14) || (-1 < iVar14)) goto LAB_004b0d0b;
        break;
      case 0x7a:
        iVar14 = *(int *)(iVar17 + 4 + iVar31 * 0x14);
        iVar23 = *(int *)(unaff_EBP - 0xe0);
        uVar30 = *(uint *)(iVar17 + 0xc + iVar31 * 0x14);
        puVar21 = (uint *)(iVar23 + 0x10 + iVar14 * 0x28);
        uVar18 = *puVar21;
        *puVar21 = *puVar21 + uVar30;
        piVar32 = (int *)(iVar23 + 0x14 + iVar14 * 0x28);
        *piVar32 = *piVar32 + ((int)uVar30 >> 0x1f) + (uint)CARRY4(uVar18,uVar30);
        unaff_EBX = *(int **)(unaff_EBP - 0xe4);
        if (*(int *)(iVar23 + 0x10 + iVar14 * 0x28) != 0 ||
            *(int *)(iVar23 + 0x14 + iVar14 * 0x28) != 0) goto LAB_004b0d0b;
        iVar31 = *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar31 * 0x14);
        goto LAB_004b0d04;
      case 0x7b:
        uVar18 = (uint)*(byte *)(iVar17 + 3 + iVar31 * 0x14);
        *(uint *)(unaff_EBP - 0xcc) = uVar18;
        iVar17 = *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar17 + 8 + iVar31 * 0x14) * 0x28;
        iVar14 = *(int *)(unaff_EBP - 0xd4);
        *(int *)(unaff_EBP - 0xc0) = iVar17;
        iVar14 = *(int *)(iVar14 + 0xc);
        iVar23 = 0;
        *(int *)(unaff_EBP - 0x7c) = iVar14;
        *(undefined4 *)(unaff_EBP - 200) = 0;
        if (uVar18 != 0) {
          while( true ) {
            *(int *)(iVar14 + iVar23 * 4) = iVar17;
            FUN_004b7cb0(*(int *)(unaff_EBP - 0xc0));
            iVar23 = *(int *)(unaff_EBP - 200) + 1;
            iVar17 = *(int *)(unaff_EBP - 0xc0) + 0x28;
            *(int *)(unaff_EBP - 200) = iVar23;
            *(int *)(unaff_EBP - 0xc0) = iVar17;
            if (*(int *)(unaff_EBP - 0xcc) <= iVar23) break;
            iVar14 = *(int *)(unaff_EBP - 0x7c);
          }
        }
        iVar14 = *(int *)(unaff_EBP - 0xdc);
        iVar17 = *(int *)(unaff_EBP - 0xe0);
        *(undefined4 *)(unaff_EBP - 0xbc) = *(undefined4 *)(iVar14 + 0x10 + iVar31 * 0x14);
        iVar17 = iVar17 + *(int *)(iVar14 + 0xc + iVar31 * 0x14) * 0x28;
        *(int *)(unaff_EBP - 0xc4) = iVar17;
        *(int *)(unaff_EBP - 0x8c) = iVar17;
        *(int *)(iVar17 + 0x18) = *(int *)(iVar17 + 0x18) + 1;
        iVar17 = *(int *)(unaff_EBP - 0xbc);
        *(undefined2 *)(unaff_EBP - 0x98) = 1;
        *(undefined4 *)(unaff_EBP - 0xb0) = 0;
        *(undefined4 *)(unaff_EBP - 0x90) = 0;
        *(undefined4 *)(unaff_EBP - 0x94) = 0;
        *(int **)(unaff_EBP - 0xb4) = unaff_EBX;
        *(undefined4 *)(unaff_EBP - 0x84) = 0;
        *(undefined4 *)(unaff_EBP - 0x88) = 0;
        *(undefined4 *)(unaff_EBP - 0x80) = 0;
        if ((*(byte *)(iVar17 + 3) & 8) != 0) {
          *(undefined4 *)(unaff_EBP - 0x88) = *(undefined4 *)(iVar14 + -4 + iVar31 * 0x14);
        }
        (**(code **)(iVar17 + 0x10))();
        if (*(int *)(unaff_EBP - 0x84) != 0) {
          FUN_004ae680((int *)(unaff_EBP - 0xb4),1);
          FUN_004a9a30((int *)(*(int *)(unaff_EBP - 0xd4) + 0x34),(int)unaff_EBX,&DAT_0056de50);
          *(undefined4 *)(unaff_EBP - 0xd0) = *(undefined4 *)(unaff_EBP - 0x84);
        }
        if (*(int *)(unaff_EBP - 0x80) != 0) {
          iVar31 = *(int *)(iVar14 + -0x10 + iVar31 * 0x14);
          *(int *)(unaff_EBP - 200) = iVar31;
          if (iVar31 != 0) {
            FUN_004b7860((int *)(*(int *)(unaff_EBP - 0xe0) + iVar31 * 0x28),1,0);
          }
        }
        FUN_004b76e0((int *)(unaff_EBP - 0xb4));
        piVar28 = *(int **)(unaff_EBP - 0xd8);
        goto LAB_004b0d0b;
      case 0x7c:
        piVar32 = (int *)(*(int *)(unaff_EBP - 0xe0) + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x28);
        *(int **)(unaff_EBP - 0xcc) = piVar32;
        iVar31 = FUN_004b7010(piVar32,*(int *)(iVar17 + 0x10 + iVar31 * 0x14));
        *(int *)(unaff_EBP - 0xd0) = iVar31;
        if (iVar31 != 0) {
          FUN_004ae680(*(int **)(unaff_EBP - 0xcc),1);
          FUN_004a9a30((int *)(*(int *)(unaff_EBP - 0xd4) + 0x34),(int)unaff_EBX,&DAT_0056de50);
        }
        FUN_004aec30(*(int **)(unaff_EBP - 0xcc),(uint)*(byte *)(unaff_EBP - 0xec));
        bVar12 = FUN_004b7d90(*(int **)(unaff_EBP - 0xcc));
        iVar31 = CONCAT31(extraout_var_01,bVar12);
        goto joined_r0x004b48db;
      case 0x7d:
        *(undefined4 *)(unaff_EBP - 200) = 0;
        *(undefined4 *)(unaff_EBP - 0xc0) = 0xffffffff;
        *(undefined4 *)(unaff_EBP - 0xc4) = 0xffffffff;
        iVar17 = FUN_00492280((int)unaff_EBX,*(int *)(iVar17 + 4 + iVar31 * 0x14),
                              *(int *)(iVar17 + 8 + iVar31 * 0x14),(undefined4 *)(unaff_EBP - 0xc4),
                              (undefined4 *)(unaff_EBP - 0xc0));
        *(int *)(unaff_EBP - 0xd0) = iVar17;
        if (iVar17 == 5) {
          *(undefined4 *)(unaff_EBP - 0xd0) = 0;
          *(undefined4 *)(unaff_EBP - 200) = 1;
        }
        iVar17 = *(int *)(unaff_EBP - 0xdc);
        iVar14 = *(int *)(unaff_EBP - 0xe0);
        iVar23 = 0;
        *(undefined4 *)(unaff_EBP - 0xcc) = 0;
        piVar32 = (int *)(iVar14 + *(int *)(iVar17 + 0xc + iVar31 * 0x14) * 0x28);
        *(int **)(unaff_EBP - 0xbc) = piVar32;
        do {
          iVar31 = *(int *)((unaff_EBP - 200) + iVar23 * 4);
          FUN_004b7860(piVar32,iVar31,iVar31 >> 0x1f);
          iVar23 = *(int *)(unaff_EBP - 0xcc) + 1;
          piVar32 = (int *)(*(int *)(unaff_EBP - 0xbc) + 0x28);
          *(int *)(unaff_EBP - 0xcc) = iVar23;
          *(int **)(unaff_EBP - 0xbc) = piVar32;
        } while (iVar23 < 3);
        goto LAB_004b0d0b;
      case 0x7e:
        uVar18 = *(uint *)(iVar17 + 0xc + iVar31 * 0x14);
        iVar17 = *(int *)(unaff_EBP - 0xdc);
        *(uint *)(unaff_EBP - 0xc4) = uVar18;
        piVar28 = *(int **)(unaff_EBX[4] + 4 + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x10);
        *(int **)(unaff_EBP - 0xcc) = piVar28;
        puVar26 = (undefined4 *)piVar28[1];
        *(int **)(unaff_EBP - 0xf0) = piVar28;
        puVar21 = (uint *)*puVar26;
        *(uint **)(unaff_EBP - 200) = puVar21;
        uVar30 = (uint)*(byte *)((int)puVar21 + 5);
        if (uVar18 == 0xffffffff) {
          uVar18 = uVar30;
        }
        *(uint *)(unaff_EBP - 0xc0) = uVar30;
        *(uint *)(unaff_EBP - 0xc4) = uVar18;
        if ((2 < *(byte *)((int)puVar21 + 0xf)) ||
           (((*(int *)puVar21[0x10] != 0 && (-1 < (int)puVar21[0x13])) &&
            ((0 < (int)puVar21[0x13] || (puVar21[0x12] != 0)))))) {
          *(uint *)(unaff_EBP - 0xc4) = uVar30;
          uVar18 = uVar30;
        }
        pcVar24 = "";
        if (*(char *)((int)puVar21 + 0xe) == '\0') {
          pcVar24 = (char *)puVar21[0x24];
        }
        *(char **)(unaff_EBP - 0xbc) = pcVar24;
        if (uVar18 == 5) {
          uVar18 = FUN_004aa9b0(pcVar24);
          if ((uVar18 != 0) && (iVar17 = FUN_004a2c50((int)puVar21), iVar17 != 0)) {
            piVar28 = *(int **)(unaff_EBP - 0xf0);
            uVar18 = extraout_EDX_00;
            goto LAB_004b4abb;
          }
          *(uint *)(unaff_EBP - 0xc4) = uVar30;
          uVar18 = uVar30;
LAB_004b4a59:
          if (*(int *)(unaff_EBP - 0xd0) != 0) goto LAB_004b4a62;
        }
        else {
LAB_004b4abb:
          if ((uVar18 == uVar30) || ((uVar30 != 5 && (uVar18 != 5)))) goto LAB_004b4a59;
          if ((*(char *)(*(int *)(unaff_EBP - 0xe4) + 0x36) == '\0') ||
             (1 < *(int *)(*(int *)(unaff_EBP - 0xe4) + 0x84))) {
            unaff_EBX = *(int **)(unaff_EBP - 0xe4);
            iVar31 = *(int *)(unaff_EBP - 0xd4);
            *(undefined4 *)(unaff_EBP - 0xd0) = 1;
            FUN_004a9a30((int *)(iVar31 + 0x34),(int)unaff_EBX,
                         (byte *)"cannot change %s wal mode from within a transaction");
            uVar18 = 1;
            piVar28 = *(int **)(unaff_EBP - 0xd8);
            goto LAB_004b0d11;
          }
          if (uVar30 == 5) {
            iVar17 = FUN_004a18e0((int *)puVar21);
            *(int *)(unaff_EBP - 0xd0) = iVar17;
            if (iVar17 == 0) {
              FUN_004a26f0(*(uint **)(unaff_EBP - 200),*(uint *)(unaff_EBP - 0xc4));
              uVar18 = *(uint *)(unaff_EBP - 0xc4);
              piVar28 = *(int **)(unaff_EBP - 0xcc);
LAB_004b4b68:
              uVar25 = FUN_00491d30(piVar28,(uVar18 == 5) + 1);
              uVar30 = *(uint *)(unaff_EBP - 0xc0);
              uVar18 = *(uint *)(unaff_EBP - 0xc4);
              puVar21 = *(uint **)(unaff_EBP - 200);
              *(uint *)(unaff_EBP - 0xd0) = uVar25;
              goto LAB_004b4a59;
            }
            puVar21 = *(uint **)(unaff_EBP - 200);
            uVar30 = *(uint *)(unaff_EBP - 0xc0);
          }
          else {
            if (uVar30 == 4) {
              FUN_004a26f0(puVar21,2);
              uVar30 = *(uint *)(unaff_EBP - 0xc0);
              uVar18 = *(uint *)(unaff_EBP - 0xc4);
              puVar21 = *(uint **)(unaff_EBP - 200);
              piVar28 = *(int **)(unaff_EBP - 0xcc);
            }
            if (*(int *)(unaff_EBP - 0xd0) == 0) goto LAB_004b4b68;
          }
LAB_004b4a62:
          uVar18 = uVar30;
          *(uint *)(unaff_EBP - 0xc4) = uVar18;
        }
        uVar11 = FUN_004a26f0(puVar21,uVar18);
        iVar17 = *(int *)(unaff_EBP - 0xe0);
        *(uint *)(unaff_EBP - 0xc4) = CONCAT31(extraout_var_02,uVar11);
        piVar28 = (int *)(iVar17 + *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar31 * 0x14) * 0x28);
        *(undefined2 *)(piVar28 + 7) = 0xa02;
        iVar31 = *(int *)(unaff_EBP - 0xc4);
        *(int **)(unaff_EBP - 0xd8) = piVar28;
        if (iVar31 == 6) {
          pcVar24 = (char *)0x0;
        }
        else {
          pcVar24 = (&PTR_s_delete_0056a9c4)[iVar31];
        }
        piVar28[1] = (int)pcVar24;
        uVar18 = FUN_004aa9b0(pcVar24);
        piVar28[6] = uVar18;
        bVar10 = *(byte *)(unaff_EBP - 0xec);
        *(undefined1 *)((int)piVar28 + 0x1f) = 1;
        FUN_004aec30(piVar28,(uint)bVar10);
        unaff_EBX = *(int **)(unaff_EBP - 0xe4);
        piVar28 = *(int **)(unaff_EBP - 0xd8);
        goto LAB_004b0d0b;
      case 0x7f:
        uVar18 = FUN_004a74f0((int *)(*(int *)(unaff_EBP - 0xd4) + 0x34),(int)unaff_EBX);
        *(uint *)(unaff_EBP - 0xd0) = uVar18;
        goto LAB_004b0d11;
      case 0x80:
        puVar26 = *(undefined4 **)(unaff_EBX[4] + 4 + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x10);
        *(undefined4 **)(unaff_EBP - 0xcc) = puVar26;
        uVar18 = FUN_0048ff20(puVar26);
        *(uint *)(unaff_EBP - 0xd0) = uVar18;
        if (uVar18 == 0x65) {
          *(int *)(unaff_EBP - 0xe8) = *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar31 * 0x14) + -1
          ;
          uVar18 = 0;
          *(undefined4 *)(unaff_EBP - 0xd0) = 0;
        }
        goto LAB_004b0d11;
      case 0x81:
        if (*(int *)(iVar17 + 4 + iVar31 * 0x14) == 0) {
          FUN_00496370((int)unaff_EBX);
        }
        else {
          puVar21 = (uint *)(*(int *)(unaff_EBP - 0xd4) + 0x60);
          *puVar21 = *puVar21 | 0x20;
        }
        goto LAB_004b0d0b;
      case 0x82:
        *(undefined2 *)(piVar28 + 7) = 8;
        *(undefined8 *)(piVar28 + 2) = **(undefined8 **)(iVar17 + 0x10 + iVar31 * 0x14);
        goto LAB_004b0d0b;
      case 0x83:
        cVar9 = *(char *)(iVar17 + 0xc + iVar31 * 0x14);
        *(char *)(unaff_EBP - 0x114) = cVar9;
        if ((cVar9 == '\0') && ((unaff_EBX[6] & 0x800U) != 0)) goto LAB_004b0d0b;
        uVar18 = FUN_00490810(*(undefined8 **)
                               (unaff_EBX[4] + 4 + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x10),
                              *(int *)(iVar17 + 8 + iVar31 * 0x14),
                              (char)*(undefined4 *)(unaff_EBP - 0x114));
        *(uint *)(unaff_EBP - 0xd0) = uVar18;
        if ((char)uVar18 == '\x06') {
          FUN_004a9a30((int *)(*(int *)(unaff_EBP - 0xd4) + 0x34),(int)unaff_EBX,
                       (byte *)"database table is locked: %s");
          goto LAB_004b0d0b;
        }
        goto LAB_004b0d11;
      case 0x84:
        iVar31 = *(int *)(iVar17 + 0x10 + iVar31 * 0x14);
        *(int *)(unaff_EBP - 0xcc) = iVar31;
        iVar31 = FUN_004b96f0((int)unaff_EBX,iVar31);
        *(int *)(unaff_EBP - 0xd0) = iVar31;
        if (*(int *)(unaff_EBP - 0xcc) != 0) {
          FUN_0047e200(*(int **)(unaff_EBP - 0xd4),*(int *)(*(int *)(unaff_EBP - 0xcc) + 8));
        }
        goto LAB_004b0d0b;
      case 0x85:
        uVar18 = FUN_004b9980((int)unaff_EBX,*(int *)(iVar17 + 4 + iVar31 * 0x14),
                              *(byte **)(iVar17 + 0x10 + iVar31 * 0x14),
                              (undefined4 *)(*(int *)(unaff_EBP - 0xd4) + 0x34));
        *(uint *)(unaff_EBP - 0xd0) = uVar18;
        goto LAB_004b0d11;
      case 0x86:
        *(uint *)(*(int *)(unaff_EBP - 0xd4) + 0x60) =
             *(uint *)(*(int *)(unaff_EBP - 0xd4) + 0x60) & 0xfffffffb | 8;
        uVar18 = FUN_004b9aa0((int)unaff_EBX,*(int *)(iVar17 + 4 + iVar31 * 0x14),
                              *(byte **)(iVar17 + 0x10 + iVar31 * 0x14));
        puVar21 = (uint *)(*(int *)(unaff_EBP - 0xd4) + 0x60);
        *puVar21 = *puVar21 & 0xfffffff3;
        *(uint *)(unaff_EBP - 0xd0) = uVar18;
        goto LAB_004b0d11;
      case 0x87:
        *(undefined4 *)(unaff_EBP - 0xcc) = 0;
        *(undefined4 *)(unaff_EBP - 200) = 0;
        piVar32 = *(int **)(*(int *)(iVar17 + 0x10 + iVar31 * 0x14) + 8);
        *(int **)(unaff_EBP - 0xc4) = piVar32;
        iVar17 = *piVar32;
        *(int *)(unaff_EBP - 0xc0) = iVar17;
        uVar27 = (**(code **)(iVar17 + 0x18))(piVar32);
        iVar17 = *(int *)(unaff_EBP - 0xc4);
        *(undefined4 *)(unaff_EBP - 0xd0) = uVar27;
        FUN_0047e200(*(int **)(unaff_EBP - 0xd4),iVar17);
        uVar18 = *(uint *)(unaff_EBP - 0xd0);
        if (uVar18 == 0) {
          **(undefined4 **)(unaff_EBP - 200) = *(undefined4 *)(unaff_EBP - 0xc4);
          puVar26 = FUN_0046c260(*(int **)(unaff_EBP - 0xd4),
                                 *(int *)(*(int *)(unaff_EBP - 0xdc) + 4 + iVar31 * 0x14),0,
                                 0xffffffff,0);
          *(undefined4 **)(unaff_EBP - 0xcc) = puVar26;
          if (puVar26 == (undefined4 *)0x0) {
            *(undefined1 *)(unaff_EBX + 0xe) = 1;
            (**(code **)(*(int *)(unaff_EBP - 0xc0) + 0x1c))();
          }
          else {
            puVar26[9] = *(undefined4 *)(unaff_EBP - 200);
            *(undefined4 *)(*(int *)(unaff_EBP - 0xcc) + 0x28) =
                 *(undefined4 *)**(undefined4 **)(unaff_EBP - 200);
          }
          goto LAB_004b0d0b;
        }
        goto LAB_004b0d11;
      case 0x88:
        iVar14 = *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar17 + 0xc + iVar31 * 0x14) * 0x28;
        iVar23 = *(int *)(unaff_EBP - 0xdc);
        *(int *)(unaff_EBP - 0xc0) = iVar14;
        iVar17 = iVar14 + 0x28;
        *(int *)(unaff_EBP - 0xbc) = iVar17;
        iVar23 = *(int *)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                         *(int *)(iVar23 + 4 + iVar31 * 0x14) * 4);
        *(int *)(unaff_EBP - 0xb0) = iVar23;
        puVar26 = *(undefined4 **)(iVar23 + 0x24);
        *(undefined4 **)(unaff_EBP - 0xb8) = puVar26;
        *(undefined4 **)(unaff_EBP - 0x104) = puVar26;
        puVar26 = (undefined4 *)*puVar26;
        *(undefined4 **)(unaff_EBP - 0xb4) = puVar26;
        uVar27 = *puVar26;
        *(undefined4 *)(unaff_EBP - 0xc4) = uVar27;
        iVar23 = *(int *)(iVar14 + 0x38);
        *(undefined4 *)(unaff_EBP - 0xd0) = uVar27;
        *(int *)(unaff_EBP - 0xcc) = iVar23;
        uVar27 = *(undefined4 *)(iVar14 + 0x10);
        *(undefined4 *)(unaff_EBP - 0xf0) = uVar27;
        *(undefined4 *)(unaff_EBP - 200) = uVar27;
        iVar15 = *(int *)(unaff_EBP - 0xd4);
        iVar33 = 0;
        iVar14 = *(int *)(iVar15 + 0xc);
        *(undefined4 *)(unaff_EBP - 0xac) = 0;
        *(int *)(unaff_EBP - 0xa4) = iVar14;
        *(undefined4 *)(unaff_EBP - 0xa8) = 0;
        if (iVar23 < 1) {
          iVar17 = *(int *)(unaff_EBP - 0xd0);
        }
        else {
          while( true ) {
            *(int *)(iVar14 + iVar33 * 4) = iVar17 + (iVar33 + 1) * 0x28;
            FUN_004b7cb0(*(int *)(*(int *)(unaff_EBP - 0xa4) + *(int *)(unaff_EBP - 0xa8) * 4));
            iVar23 = *(int *)(unaff_EBP - 0xcc);
            iVar14 = *(int *)(unaff_EBP - 0xa4);
            iVar33 = *(int *)(unaff_EBP - 0xa8) + 1;
            *(int *)(unaff_EBP - 0xa8) = iVar33;
            if (iVar23 <= iVar33) break;
            iVar17 = *(int *)(unaff_EBP - 0xbc);
          }
          uVar27 = *(undefined4 *)(unaff_EBP - 0xb8);
          iVar17 = *(int *)(unaff_EBP - 0xc4);
          *(undefined4 *)(unaff_EBP - 0xf0) = *(undefined4 *)(unaff_EBP - 200);
          iVar15 = *(int *)(unaff_EBP - 0xd4);
          *(undefined4 *)(unaff_EBP - 0x104) = uVar27;
        }
        iVar14 = *(int *)(unaff_EBP - 0xdc);
        *(uint *)(*(int *)(unaff_EBP - 0xd4) + 0x60) = *(uint *)(iVar15 + 0x60) & 0xfffffff7 | 4;
        uVar27 = (**(code **)(iVar17 + 0x20))
                           (*(undefined4 *)(unaff_EBP - 0x104),*(undefined4 *)(unaff_EBP - 0xf0),
                            *(undefined4 *)(iVar14 + 0x10 + iVar31 * 0x14),iVar23);
        iVar17 = *(int *)(unaff_EBP - 0xb4);
        *(undefined4 *)(unaff_EBP - 0xd0) = uVar27;
        piVar28 = *(int **)(unaff_EBP - 0xd4);
        puVar21 = (uint *)(piVar28 + 0x18);
        *puVar21 = *puVar21 & 0xfffffff3;
        FUN_0047e200(piVar28,iVar17);
        if (*(int *)(unaff_EBP - 0xd0) == 0) {
          iVar17 = (**(code **)(*(int *)(unaff_EBP - 0xc4) + 0x28))();
          *(int *)(unaff_EBP - 0xac) = iVar17;
        }
        else {
          iVar17 = *(int *)(unaff_EBP - 0xac);
        }
        if (iVar17 != 0) {
          *(int *)(unaff_EBP - 0xe8) = *(int *)(iVar14 + 8 + iVar31 * 0x14) + -1;
        }
        unaff_EBX = *(int **)(unaff_EBP - 0xe4);
        piVar28 = *(int **)(unaff_EBP - 0xd8);
        *(undefined1 *)(*(int *)(unaff_EBP - 0xb0) + 0x1c) = 0;
        goto LAB_004b0d0b;
      case 0x89:
        iVar14 = *(int *)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                         *(int *)(iVar17 + 4 + iVar31 * 0x14) * 4);
        iVar17 = *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar17 + 0xc + iVar31 * 0x14) * 0x28;
        *(int *)(unaff_EBP - 0xc4) = iVar17;
        if (*(char *)(iVar14 + 0x1c) != '\0') {
          FUN_004b78c0(iVar17);
          piVar28 = *(int **)(unaff_EBP - 0xd8);
          goto LAB_004b0d0b;
        }
        puVar26 = (undefined4 *)**(undefined4 **)(iVar14 + 0x24);
        *(undefined4 **)(unaff_EBP - 0xcc) = puVar26;
        *(undefined4 *)(unaff_EBP - 200) = *puVar26;
        memset((void *)(unaff_EBP - 0xbc),0,0x40);
        FUN_004b7500((int *)(unaff_EBP - 0xb4),*(undefined8 **)(unaff_EBP - 0xc4));
        *(ushort *)(unaff_EBP - 0x98) = (ushort)*(undefined4 *)(unaff_EBP - 0x98) & 0xbe01 | 1;
        uVar27 = (**(code **)(*(int *)(unaff_EBP - 200) + 0x2c))
                           (*(undefined4 *)(iVar14 + 0x24),unaff_EBP - 0xbc,
                            *(undefined4 *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar31 * 0x14));
        iVar31 = *(int *)(unaff_EBP - 0xcc);
        *(undefined4 *)(unaff_EBP - 0xd0) = uVar27;
        FUN_0047e200(*(int **)(unaff_EBP - 0xd4),iVar31);
        iVar31 = *(int *)(unaff_EBP - 0xd0);
        if (*(int *)(unaff_EBP - 0x84) != 0) {
          iVar31 = *(int *)(unaff_EBP - 0x84);
        }
        bVar10 = *(byte *)(unaff_EBP - 0xec);
        *(int *)(unaff_EBP - 0xd0) = iVar31;
        FUN_004aec30((int *)(unaff_EBP - 0xb4),(uint)bVar10);
        FUN_004b7500(*(int **)(unaff_EBP - 0xc4),(undefined8 *)(unaff_EBP - 0xb4));
        bVar12 = FUN_004b7d90(*(int **)(unaff_EBP - 0xc4));
        if (CONCAT31(extraout_var_03,bVar12) != 0) goto LAB_004b5780;
        piVar28 = *(int **)(unaff_EBP - 0xd8);
        goto LAB_004b0d0b;
      case 0x8a:
        iVar14 = *(int *)(unaff_EBP - 0xd4);
        *(undefined4 *)(unaff_EBP - 0xc4) = 0;
        iVar17 = *(int *)(*(int *)(iVar14 + 0x40) + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 4);
        *(int *)(unaff_EBP - 0xc0) = iVar17;
        if (*(char *)(iVar17 + 0x1c) != '\0') goto LAB_004b0d0b;
        piVar32 = *(int **)(unaff_EBP - 0xd4);
        piVar8 = (int *)**(undefined4 **)(iVar17 + 0x24);
        *(int **)(unaff_EBP - 0xcc) = piVar8;
        iVar17 = *piVar8;
        iVar14 = *(int *)(unaff_EBP - 0xd4);
        *(int *)(unaff_EBP - 200) = iVar17;
        piVar32[0x18] = *(uint *)(iVar14 + 0x60) & 0xfffffff7 | 4;
        uVar27 = (**(code **)(iVar17 + 0x24))();
        iVar17 = *(int *)(unaff_EBP - 0xcc);
        *(undefined4 *)(unaff_EBP - 0xd0) = uVar27;
        piVar32[0x18] = piVar32[0x18] & 0xfffffff3;
        FUN_0047e200(piVar32,iVar17);
        unaff_EBX = *(int **)(unaff_EBP - 0xe4);
        if (*(int *)(unaff_EBP - 0xd0) == 0) {
          iVar17 = (**(code **)(*(int *)(unaff_EBP - 200) + 0x28))();
          *(int *)(unaff_EBP - 0xc4) = iVar17;
        }
        else {
          iVar17 = *(int *)(unaff_EBP - 0xc4);
        }
        if (iVar17 != 0) goto LAB_004b0d0b;
        iVar31 = *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar31 * 0x14);
        goto LAB_004b0d04;
      case 0x8b:
        goto switchD_004af4da_caseD_8b;
      case 0x8c:
        piVar32 = *(int **)(*(int *)(iVar17 + 0x10 + iVar31 * 0x14) + 8);
        *(int **)(unaff_EBP - 0xcc) = piVar32;
        iVar14 = *piVar32;
        *(int *)(unaff_EBP - 200) = iVar14;
        iVar17 = *(int *)(iVar17 + 8 + iVar31 * 0x14);
        *(int *)(unaff_EBP - 0xc4) = iVar17;
        if (*(int *)(iVar14 + 0x34) == 0) goto LAB_004b0d0b;
        iVar33 = unaff_EBX[0xf];
        iVar23 = *(int *)(unaff_EBP - 0xdc);
        iVar14 = *(int *)(unaff_EBP - 0xe0);
        *(undefined4 *)(unaff_EBP - 0xb4) = *(undefined4 *)(*(int *)(unaff_EBP - 0xd4) + 0xc);
        iVar15 = *(int *)(iVar23 + 0xc + iVar31 * 0x14);
        *(undefined4 *)(unaff_EBP - 0xc0) = 0;
        iVar14 = iVar14 + iVar15 * 0x28;
        *(int *)(unaff_EBP - 0xb0) = iVar14;
        if (0 < iVar17) {
          do {
            FUN_004b7cb0(iVar14);
            *(undefined4 *)(*(int *)(unaff_EBP - 0xb4) + *(int *)(unaff_EBP - 0xc0) * 4) =
                 *(undefined4 *)(unaff_EBP - 0xb0);
            iVar17 = *(int *)(unaff_EBP - 0xc0) + 1;
            iVar14 = *(int *)(unaff_EBP - 0xb0) + 0x28;
            *(int *)(unaff_EBP - 0xb0) = iVar14;
            *(int *)(unaff_EBP - 0xc0) = iVar17;
          } while (iVar17 < *(int *)(unaff_EBP - 0xc4));
        }
        iVar17 = *(int *)(unaff_EBP - 0xe4);
        *(undefined1 *)(iVar17 + 0x3c) = *(undefined1 *)(iVar23 + 3 + iVar31 * 0x14);
        uVar27 = (**(code **)(*(int *)(unaff_EBP - 200) + 0x34))
                           (*(undefined4 *)(unaff_EBP - 0xcc),*(undefined4 *)(unaff_EBP - 0xc4),
                            *(undefined4 *)(unaff_EBP - 0xb4));
        *(char *)(iVar17 + 0x3c) = (char)iVar33;
        iVar17 = *(int *)(unaff_EBP - 0xcc);
        piVar28 = *(int **)(unaff_EBP - 0xd4);
        *(undefined4 *)(unaff_EBP - 0xd0) = uVar27;
        FUN_0047e200(piVar28,iVar17);
        if (*(int *)(unaff_EBP - 0xd0) == 0) {
          unaff_EBX = *(int **)(unaff_EBP - 0xe4);
          if (*(int *)(*(int *)(unaff_EBP - 0xdc) + 4 + iVar31 * 0x14) != 0) {
            uVar27 = *(undefined4 *)(unaff_EBP - 0xb8);
            iVar31 = *(int *)(unaff_EBP - 0xbc);
            unaff_EBX[8] = iVar31;
            *(undefined4 *)(unaff_EBP - 0xfc) = uVar27;
            unaff_EBX[9] = *(int *)(unaff_EBP - 0xb8);
            piVar28[0x19] = piVar28[0x19] + 1;
            piVar28 = *(int **)(unaff_EBP - 0xd8);
            *(int *)(unaff_EBP - 0x100) = iVar31;
            goto LAB_004b0d0b;
          }
        }
        else {
          if ((*(int *)(unaff_EBP - 0xd0) == 0x13) &&
             (*(char *)(*(int *)(*(int *)(unaff_EBP - 0xdc) + 0x10 + iVar31 * 0x14) + 0x10) != '\0')
             ) {
            cVar9 = *(char *)(*(int *)(unaff_EBP - 0xdc) + 3 + iVar31 * 0x14);
            if (cVar9 != '\x04') {
              if (cVar9 == '\x05') {
                unaff_EBX = *(int **)(unaff_EBP - 0xe4);
                *(undefined1 *)(piVar28 + 0x17) = 2;
                piVar28 = *(int **)(unaff_EBP - 0xd8);
              }
              else {
                unaff_EBX = *(int **)(unaff_EBP - 0xe4);
                *(char *)(piVar28 + 0x17) = cVar9;
                piVar28 = *(int **)(unaff_EBP - 0xd8);
              }
              goto LAB_004b0d0b;
            }
            unaff_EBX = *(int **)(unaff_EBP - 0xe4);
            piVar28 = *(int **)(unaff_EBP - 0xd8);
            *(undefined4 *)(unaff_EBP - 0xd0) = 0;
            uVar18 = 0;
            goto LAB_004b0d11;
          }
          unaff_EBX = *(int **)(unaff_EBP - 0xe4);
        }
        piVar28[0x19] = piVar28[0x19] + 1;
        piVar28 = *(int **)(unaff_EBP - 0xd8);
        goto LAB_004b0d0b;
      case 0x8d:
        piVar28 = (int *)(*(int *)(unaff_EBP - 0xe0) + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x28);
        uVar4 = *(ushort *)(piVar28 + 7);
        if ((uVar4 & 1) != 0) goto LAB_004af570;
        *(ushort *)(piVar28 + 7) = uVar4 >> 3 & 2 | uVar4;
        if (((uVar4 >> 3 & 2) == 0 && (uVar4 & 2) == 0) && ((uVar4 & 0xc) != 0)) {
          FUN_004b7cf0(piVar28,(uint)*(byte *)(unaff_EBP - 0xec));
        }
        *(ushort *)(piVar28 + 7) = *(ushort *)(piVar28 + 7) & 0xfff3;
        if ((*(ushort *)(piVar28 + 7) & 0x4000) == 0) {
          uVar18 = 0;
          *(ushort *)(piVar28 + 7) = *(ushort *)(piVar28 + 7) & 0xbfe3;
          *(undefined4 *)(unaff_EBP - 0xd0) = 0;
LAB_004b0616:
          piVar28 = *(int **)(unaff_EBP - 0xd8);
        }
        else {
          uVar18 = FUN_004b6fa0(piVar28);
          *(ushort *)(piVar28 + 7) = *(ushort *)(piVar28 + 7) & 0xbfe3;
          piVar28 = *(int **)(unaff_EBP - 0xd8);
          *(uint *)(unaff_EBP - 0xd0) = uVar18;
        }
        goto LAB_004b0d11;
      case 0x8e:
        piVar28 = (int *)(*(int *)(unaff_EBP - 0xe0) + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x28);
        uVar4 = *(ushort *)(piVar28 + 7);
        if ((uVar4 & 1) != 0) goto LAB_004af570;
        if ((uVar4 & 0x10) == 0) {
          if (((uVar4 & 2) == 0) && ((uVar4 & 0xc) != 0)) {
            FUN_004b7cf0(piVar28,(uint)*(byte *)(unaff_EBP - 0xec));
          }
          *(ushort *)(piVar28 + 7) = *(ushort *)(piVar28 + 7) & 0xbe10 | 0x10;
          piVar28 = *(int **)(unaff_EBP - 0xd8);
        }
        else {
          *(ushort *)(piVar28 + 7) = uVar4 & 0xfe10;
          piVar28 = *(int **)(unaff_EBP - 0xd8);
        }
        goto LAB_004b0d0b;
      case 0x8f:
        FUN_004b75f0(*(int *)(unaff_EBP - 0xe0) + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x28);
        goto LAB_004b0d0b;
      case 0x90:
        iVar31 = *(int *)(iVar17 + 4 + iVar31 * 0x14);
        if ((*(byte *)(*(int *)(unaff_EBP - 0xe0) + 0x1c + iVar31 * 0x28) & 1) == 0) {
          FUN_004b7410(*(int *)(unaff_EBP - 0xe0) + iVar31 * 0x28);
        }
        goto LAB_004b0d0b;
      case 0x91:
        iVar31 = *(int *)(iVar17 + 4 + iVar31 * 0x14);
        if ((*(byte *)(*(int *)(unaff_EBP - 0xe0) + 0x1c + iVar31 * 0x28) & 1) == 0) {
          FUN_004b7670(*(int *)(unaff_EBP - 0xe0) + iVar31 * 0x28);
        }
        goto LAB_004b0d0b;
      case 0x92:
        piVar28[4] = *(int *)(*(int *)(*(int *)(unaff_EBX[4] + 4 +
                                               *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x10) + 4) +
                             0x2c);
        piVar28[5] = 0;
        goto LAB_004b0d0b;
      case 0x93:
        puVar26 = *(undefined4 **)(unaff_EBX[4] + 4 + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x10);
        uVar18 = *(uint *)(*(int *)(unaff_EBP - 0xdc) + 0xc + iVar31 * 0x14);
        uVar30 = 0;
        if ((uVar18 != 0) && (uVar30 = *(uint *)(puVar26[1] + 0x2c), uVar30 < uVar18)) {
          uVar30 = uVar18;
        }
        iVar31 = FUN_00490880(puVar26,uVar30);
        piVar28[4] = iVar31;
        piVar28[5] = iVar31 >> 0x1f;
        goto LAB_004b0d0b;
      case 0x94:
        if ((unaff_EBX[0x26] != 0) && ((*(uint *)(*(int *)(unaff_EBP - 0xd4) + 0x60) & 0x400) == 0))
        {
          pbVar35 = *(byte **)(iVar17 + 0x10 + iVar31 * 0x14);
          if (pbVar35 == (byte *)0x0) {
            pbVar35 = *(byte **)(*(int *)(unaff_EBP - 0xd4) + 0x98);
          }
          *(byte **)(unaff_EBP - 0xcc) = pbVar35;
          if (pbVar35 != (byte *)0x0) {
            uVar27 = FUN_004b5b10(*(uint **)(unaff_EBP - 0xd4),pbVar35);
            *(undefined4 *)(unaff_EBP - 200) = uVar27;
            (*(code *)unaff_EBX[0x26])(unaff_EBX[0x27]);
            FUN_00494b00((int)unaff_EBX,*(undefined4 **)(unaff_EBP - 200));
          }
        }
      default:
        goto LAB_004b0d0b;
      }
      iVar31 = *(int *)(iVar17 + 8 + iVar31 * 0x14);
      goto LAB_004b0d04;
    }
  }
  if ((param_2 != 0) || (iVar31 != 0)) goto LAB_004b2fd2;
LAB_004b573f:
  uVar18 = 0xd;
  *(undefined4 *)(unaff_EBP - 0xd0) = 0xd;
LAB_004b572c:
  if ((char)unaff_EBX[0xe] == '\0') {
    if (uVar18 == 0xc0a) goto LAB_004b57cd;
  }
  else {
    uVar18 = 7;
    *(undefined4 *)(unaff_EBP - 0xd0) = 7;
  }
  FUN_004961c0(uVar18);
  FUN_004a9a30((int *)(*(int *)(unaff_EBP - 0xd4) + 0x34),(int)unaff_EBX,&DAT_0056de50);
  uVar18 = *(uint *)(unaff_EBP - 0xd0);
  goto LAB_004b57cd;
switchD_004af4da_caseD_8b:
  iVar14 = *(int *)(unaff_EBP - 0xe0);
  *(undefined4 *)(unaff_EBP - 0xcc) = *(undefined4 *)(*(int *)(iVar17 + 0x10 + iVar31 * 0x14) + 8);
  piVar32 = (int *)(iVar14 + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 0x28);
  *(int **)(unaff_EBP - 200) = piVar32;
  uVar18 = FUN_004aec30(piVar32,1);
  *(uint *)(unaff_EBP - 0xd0) = uVar18;
  if (uVar18 == 0) goto code_r0x004b5255;
  goto LAB_004b0d11;
code_r0x004b5255:
  uVar27 = (**(code **)(**(int **)(unaff_EBP - 0xcc) + 0x4c))(*(int **)(unaff_EBP - 0xcc));
  iVar31 = *(int *)(unaff_EBP - 0xcc);
  *(undefined4 *)(unaff_EBP - 0xd0) = uVar27;
  FUN_0047e200(*(int **)(unaff_EBP - 0xd4),iVar31);
  puVar21 = (uint *)(*(int *)(unaff_EBP - 0xd4) + 0x60);
  *puVar21 = *puVar21 & 0xffffffdf;
  goto LAB_004b0d0b;
switchD_004af4da_caseD_38:
  iVar14 = *(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40);
  *(undefined8 *)(unaff_EBP - 0xcc) = 0;
  *(undefined4 *)(unaff_EBP - 0xc0) = 0;
  piVar28 = *(int **)(iVar14 + *(int *)(iVar17 + 4 + iVar31 * 0x14) * 4);
  *(int **)(unaff_EBP - 0xc4) = piVar28;
  iVar17 = *piVar28;
  if (iVar17 == 0) goto LAB_004b2ff3;
  if (*(char *)((int)piVar28 + 0x1b) != '\0') goto LAB_004b2ed4;
  uVar18 = *(uint *)(iVar17 + 0x20);
  *(uint *)(unaff_EBP - 0xcc) = uVar18;
  iVar17 = *(int *)(iVar17 + 0x24);
  *(int *)(unaff_EBP - 200) = iVar17;
  if (uVar18 == 0 && iVar17 == 0) {
    uVar18 = FUN_004906f0((int *)*piVar28,(undefined4 *)(unaff_EBP - 0xc0));
    *(uint *)(unaff_EBP - 0xd0) = uVar18;
    if (uVar18 != 0) goto LAB_004b572c;
    if (*(int *)(unaff_EBP - 0xc0) == 0) {
      uVar27 = FUN_004906b0(**(int **)(unaff_EBP - 0xc4),(undefined4 *)(unaff_EBP - 0xcc));
      iVar17 = *(int *)(unaff_EBP - 200);
      uVar18 = *(uint *)(unaff_EBP - 0xcc);
      *(undefined4 *)(unaff_EBP - 0xd0) = uVar27;
      if ((iVar17 < 0x7fffffff) || (uVar18 != 0xffffffff)) {
        iVar17 = iVar17 + (uint)(0xfffffffe < uVar18);
        goto LAB_004b2d88;
      }
      *(undefined1 *)(*(int *)(unaff_EBP - 0xc4) + 0x1b) = 1;
      iVar17 = *(int *)(unaff_EBP - 200);
      uVar18 = *(uint *)(unaff_EBP - 0xcc);
    }
    else {
      iVar17 = 0;
      uVar18 = 0;
LAB_004b2d88:
      uVar18 = uVar18 + 1;
      *(int *)(unaff_EBP - 200) = iVar17;
      *(uint *)(unaff_EBP - 0xcc) = uVar18;
    }
    piVar28 = *(int **)(unaff_EBP - 0xc4);
  }
  iVar14 = *(int *)(*(int *)(unaff_EBP - 0xdc) + 0xc + iVar31 * 0x14);
  if (iVar14 != 0) {
    iVar17 = *(int *)(*(int *)(unaff_EBP - 0xd4) + 0xa0);
    if (iVar17 == 0) {
      iVar31 = *(int *)(unaff_EBP - 0xe0) + iVar14 * 0x28;
    }
    else {
      *(int *)(unaff_EBP - 0xb4) = iVar17;
      for (iVar14 = *(int *)(iVar17 + 4); iVar14 != 0; iVar14 = *(int *)(iVar14 + 4)) {
        *(int *)(unaff_EBP - 0xb4) = iVar14;
        iVar17 = iVar14;
      }
      iVar31 = *(int *)(iVar17 + 0xc) +
               *(int *)(*(int *)(unaff_EBP - 0xdc) + 0xc + iVar31 * 0x14) * 0x28;
    }
    *(int *)(unaff_EBP - 0xb8) = iVar31;
    FUN_004b7410(iVar31);
    iVar31 = *(int *)(unaff_EBP - 0xb8);
    uVar18 = *(uint *)(iVar31 + 0x10);
    if (((uVar18 == 0xffffffff) && (*(int *)(iVar31 + 0x14) == 0x7fffffff)) ||
       (*(char *)(*(int *)(unaff_EBP - 0xc4) + 0x1b) != '\0')) goto LAB_004b573f;
    uVar30 = uVar18 + 1;
    iVar17 = *(int *)(iVar31 + 0x14) + (uint)(0xfffffffe < uVar18);
    if (iVar17 < *(int *)(unaff_EBP - 200)) {
      uVar18 = *(uint *)(unaff_EBP - 0xcc);
    }
    else if ((*(int *)(unaff_EBP - 200) < iVar17) ||
            (uVar18 = *(uint *)(unaff_EBP - 0xcc), *(uint *)(unaff_EBP - 0xcc) < uVar30)) {
      *(uint *)(unaff_EBP - 0xcc) = uVar30;
      *(int *)(unaff_EBP - 200) = iVar17;
      uVar18 = uVar30;
    }
    *(uint *)(iVar31 + 0x10) = uVar18;
    *(undefined4 *)(iVar31 + 0x14) = *(undefined4 *)(unaff_EBP - 200);
    piVar28 = *(int **)(unaff_EBP - 0xc4);
    iVar17 = *(int *)(unaff_EBP - 200);
    uVar18 = *(uint *)(unaff_EBP - 0xcc);
  }
  if ((iVar17 < 0x7fffffff) || (uVar18 != 0xffffffff)) {
    iVar31 = uVar18 + 1;
    iVar17 = iVar17 + (uint)(0xfffffffe < uVar18);
  }
  else {
    *(undefined8 *)(unaff_EBP - 300) = 0;
    iVar17 = *(int *)(unaff_EBP - 0x128);
    iVar31 = *(int *)(unaff_EBP - 300);
  }
  FUN_00491bc0(*piVar28,iVar31,iVar17);
  piVar28 = *(int **)(unaff_EBP - 0xc4);
  if (*(char *)((int)piVar28 + 0x1b) == '\0') goto LAB_004b2fd8;
LAB_004b2ed4:
  uVar18 = *(uint *)(unaff_EBP - 0x100) + 1;
  iVar31 = (*(uint *)(unaff_EBP - 0xfc) & 0x3fffffff) +
           (uint)(0xfffffffe < *(uint *)(unaff_EBP - 0x100));
  *(uint *)(unaff_EBP - 0xcc) = uVar18;
  *(int *)(unaff_EBP - 200) = iVar31;
  *(undefined4 *)(unaff_EBP - 0xbc) = 0;
  uVar18 = FUN_004908e0((int *)*piVar28,(int *)0x0,uVar18,iVar31,0,(uint *)(unaff_EBP - 0xc0));
  *(uint *)(unaff_EBP - 0xd0) = uVar18;
  if (uVar18 != 0) goto LAB_004b2fd2;
  param_2 = 0;
  goto LAB_004b2f30;
  while( true ) {
    uVar29 = uVar29 + 1;
    uVar18 = (uint)uVar29;
    *(ushort *)(unaff_EBP - 0xcc) = uVar29;
    if (uVar4 <= uVar18) break;
LAB_004b2a50:
    if ((*(byte *)(iVar17 + 0x1c + uVar18 * 0x28) & 1) != 0) {
      unaff_EBX = *(int **)(unaff_EBP - 0xe4);
      iVar31 = *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar31 * 0x14);
      piVar28 = *(int **)(unaff_EBP - 0xd8);
      *(undefined4 *)(unaff_EBP - 0xc4) = 0;
      goto LAB_004b0d04;
    }
  }
LAB_004b2a6e:
  if (*(int *)(unaff_EBP - 0xf0) != 0) {
    *(undefined4 *)(unaff_EBP - 0xb4) = *(undefined4 *)(*(int *)(unaff_EBP - 200) + 8);
    *(short *)(unaff_EBP - 0xb0) = (short)*(undefined4 *)(unaff_EBP - 0xc0) + 1;
    *(undefined1 *)(unaff_EBP - 0xae) = 4;
    *(int *)(unaff_EBP - 0xa4) = iVar17;
    FUN_004b7410(iVar14);
    *(undefined4 *)(unaff_EBP - 0x9c) = *(undefined4 *)(iVar14 + 0x10);
    *(undefined4 *)(unaff_EBP - 0x98) = *(undefined4 *)(iVar14 + 0x14);
    uVar18 = FUN_004908e0(*(int **)(unaff_EBP - 0xc4),(int *)(unaff_EBP - 0xb4),0,0,0,
                          (uint *)(*(int *)(unaff_EBP - 200) + 0x4c));
    bVar10 = *(byte *)(unaff_EBP - 0xae);
    *(uint *)(unaff_EBP - 0xd0) = uVar18;
    if (((bVar10 & 4) == 0) &&
       ((*(int *)(unaff_EBP - 0xac) != *(int *)(unaff_EBP - 0x9c) ||
        (*(int *)(unaff_EBP - 0xa8) != *(int *)(unaff_EBP - 0x98))))) {
      piVar28 = *(int **)(unaff_EBP - 0xd8);
      *(int *)(iVar14 + 0x10) = *(int *)(unaff_EBP - 0xac);
      *(undefined4 *)(iVar14 + 0x14) = *(undefined4 *)(unaff_EBP - 0xa8);
      unaff_EBX = *(int **)(unaff_EBP - 0xe4);
    }
    else {
LAB_004b4170:
      unaff_EBX = *(int **)(unaff_EBP - 0xe4);
      iVar31 = *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar31 * 0x14);
      piVar28 = *(int **)(unaff_EBP - 0xd8);
LAB_004b0d04:
      iVar31 = iVar31 + -1;
LAB_004b0d05:
      *(int *)(unaff_EBP - 0xe8) = iVar31;
    }
    goto LAB_004b0d0b;
  }
LAB_004af834:
  unaff_EBX = *(int **)(unaff_EBP - 0xe4);
  piVar28 = *(int **)(unaff_EBP - 0xd8);
  goto LAB_004b0d0b;
LAB_004b19bf:
  unaff_EBX = *(int **)(unaff_EBP - 0xe4);
  FUN_004a9a30((int *)(*(int *)(unaff_EBP - 0xd4) + 0x34),(int)unaff_EBX,
               (byte *)"no such savepoint: %s");
  piVar28 = *(int **)(unaff_EBP - 0xd8);
  uVar18 = 1;
  *(undefined4 *)(unaff_EBP - 0xd0) = 1;
  goto LAB_004b0d11;
code_r0x004b19a5:
  pbVar35 = *(byte **)(unaff_EBP - 0xf0);
  iVar17 = iVar17 + 1;
  *(int *)(unaff_EBP - 0xb4) = iVar17;
  puVar26 = (undefined4 *)puVar26[4];
  *(undefined4 **)(unaff_EBP - 0xbc) = puVar26;
  goto joined_r0x004b1994;
LAB_004b09a0:
  iVar23 = iVar17;
  if (iVar14 != 0) {
    iVar23 = *(int *)(iVar14 + iVar17 * 4);
  }
  *(int *)(unaff_EBP - 0xb8) = iVar23;
  iVar14 = *(int *)(iVar15 + 0xc + iVar17 * 4);
  *(int *)(unaff_EBP - 0xb4) = iVar14;
  *(uint *)(unaff_EBP - 0xb0) = (uint)*(byte *)(*(int *)(iVar15 + 8) + iVar17);
  uVar18 = FUN_004a0720((undefined8 *)
                        (*(int *)(unaff_EBP - 0xe0) + (*(int *)(unaff_EBP - 0xf0) + iVar23) * 0x28),
                        (undefined8 *)(*(int *)(unaff_EBP - 0xe0) + (iVar23 + iVar31) * 0x28),iVar14
                       );
  *(uint *)(unaff_EBP - 0x10c) = uVar18;
  if (uVar18 == 0) {
    iVar17 = *(int *)(unaff_EBP - 200) + 1;
    *(int *)(unaff_EBP - 200) = iVar17;
    if (*(int *)(unaff_EBP - 0xcc) <= iVar17) goto LAB_004b0a43;
    iVar15 = *(int *)(unaff_EBP - 0xbc);
    iVar31 = *(int *)(unaff_EBP - 0xc0);
    iVar14 = *(int *)(unaff_EBP - 0x108);
    *(undefined4 *)(unaff_EBP - 0xf0) = *(undefined4 *)(unaff_EBP - 0xc4);
    goto LAB_004b09a0;
  }
  if (*(int *)(unaff_EBP - 0xb0) != 0) {
    *(uint *)(unaff_EBP - 0x10c) = -uVar18;
  }
LAB_004b0a43:
  unaff_EBX = *(int **)(unaff_EBP - 0xe4);
  piVar28 = *(int **)(unaff_EBP - 0xd8);
  *(undefined4 *)(unaff_EBP - 0x108) = 0;
  goto LAB_004b0d0b;
LAB_004b00b0:
  *(int *)(iVar23 + iVar17 * 4) = iVar14;
  piVar28 = *(int **)(unaff_EBP - 200);
  if ((*(ushort *)(piVar28 + 7) & 0x1000) != 0) {
    iVar17 = FUN_004b7490(piVar28);
    if (iVar17 != 0) goto LAB_004b57a6;
    piVar28 = *(int **)(unaff_EBP - 200);
  }
  FUN_004b7cb0((int)piVar28);
  iVar17 = *(int *)(unaff_EBP - 0xcc) + 1;
  iVar14 = *(int *)(unaff_EBP - 200) + 0x28;
  *(int *)(unaff_EBP - 0xcc) = iVar17;
  *(int *)(unaff_EBP - 200) = iVar14;
  if (*(int *)(unaff_EBP - 0x80) <= iVar17) goto LAB_004b010d;
  iVar23 = *(int *)(unaff_EBP - 0x84);
  goto LAB_004b00b0;
LAB_004b010d:
  puVar26 = *(undefined4 **)(*(int *)(unaff_EBP - 0xdc) + 0x10 + iVar31 * 0x14);
  if (*(char *)(*(int *)(unaff_EBP - 0xdc) + 1 + iVar31 * 0x14) == -5) {
    *(undefined4 *)(unaff_EBP - 0xc0) = 0;
  }
  else {
    *(undefined4 **)(unaff_EBP - 0xc0) = puVar26;
    puVar26 = (undefined4 *)*puVar26;
  }
  piVar28 = *(int **)(unaff_EBP - 0xd8);
  *(undefined4 **)(unaff_EBP - 0xc4) = puVar26;
  *(undefined2 *)(unaff_EBP - 0xa0) = 1;
  *(int **)(unaff_EBP - 0xbc) = unaff_EBX;
  *(undefined4 *)(unaff_EBP - 0x9c) = 0;
  *(undefined4 *)(unaff_EBP - 0x98) = 0;
  FUN_004b7500((int *)(unaff_EBP - 0xbc),(undefined8 *)piVar28);
  *(ushort *)(unaff_EBP - 0xa0) = (ushort)*(undefined4 *)(unaff_EBP - 0xa0) & 0xbe01 | 1;
  iVar17 = *(int *)(unaff_EBP - 0xc4);
  *(undefined4 *)(unaff_EBP - 0x8c) = 0;
  if ((*(byte *)(iVar17 + 3) & 8) != 0) {
    *(undefined4 *)(unaff_EBP - 0x90) =
         *(undefined4 *)(*(int *)(unaff_EBP - 0xdc) + -4 + iVar31 * 0x14);
  }
  unaff_EBX[8] = *(int *)(unaff_EBP - 0x100);
  unaff_EBX[9] = *(int *)(unaff_EBP - 0xfc);
  (**(code **)(*(int *)(unaff_EBP - 0xc4) + 0xc))();
  *(int *)(unaff_EBP - 0x100) = unaff_EBX[8];
  *(int *)(unaff_EBP - 0xfc) = unaff_EBX[9];
  if (*(int **)(unaff_EBP - 0xc0) != (int *)0x0) {
    FUN_004af2b0(*(int **)(unaff_EBP - 0xc0),
                 *(uint *)(*(int *)(unaff_EBP - 0xdc) + 4 + iVar31 * 0x14));
    iVar17 = *(int *)(unaff_EBP - 0xdc);
    *(undefined4 *)(iVar17 + 0x10 + iVar31 * 0x14) = *(undefined4 *)(unaff_EBP - 0xc0);
    *(undefined1 *)(iVar17 + 1 + iVar31 * 0x14) = 0xf9;
  }
  if ((char)unaff_EBX[0xe] != '\0') {
    FUN_004b76e0((int *)(unaff_EBP - 0xbc));
    goto LAB_004b57a6;
  }
  if (*(int *)(unaff_EBP - 0x8c) != 0) {
    FUN_004ae680((int *)(unaff_EBP - 0xbc),1);
    FUN_004a9a30((int *)(*(int *)(unaff_EBP - 0xd4) + 0x34),(int)unaff_EBX,&DAT_0056de50);
    *(undefined4 *)(unaff_EBP - 0xd0) = *(undefined4 *)(unaff_EBP - 0x8c);
  }
  FUN_004aec30((int *)(unaff_EBP - 0xbc),(uint)*(byte *)(unaff_EBP - 0xec));
  FUN_004b7500(piVar28,(undefined8 *)(unaff_EBP - 0xbc));
  bVar12 = FUN_004b7d90(piVar28);
  iVar31 = CONCAT31(extraout_var_00,bVar12);
joined_r0x004b48db:
  if (iVar31 != 0) {
LAB_004b5780:
    FUN_004a9a30((int *)(*(int *)(unaff_EBP - 0xd4) + 0x34),(int)unaff_EBX,
                 (byte *)"string or blob too big");
    uVar18 = 0x12;
    goto LAB_004b57c7;
  }
  goto LAB_004b0d0b;
LAB_004afa70:
  unaff_EBX = *(int **)(unaff_EBP - 0xe4);
  if ((*(ushort *)(iVar17 + 0x1c + iVar14 * 0x28) & 0x1000) != 0) {
    iVar17 = FUN_004b7490((int *)(iVar17 + iVar14 * 0x28));
    if (iVar17 != 0) goto LAB_004b57a6;
    iVar14 = *(int *)(unaff_EBP - 200);
    iVar17 = *(int *)(unaff_EBP - 0xcc);
  }
  FUN_004b7590((int *)(iVar17 + iVar14 * 0x28));
  FUN_004b7cb0(*(int *)(unaff_EBP - 0xcc) + *(int *)(unaff_EBP - 200) * 0x28);
  iVar14 = *(int *)(unaff_EBP - 200) + 1;
  *(int *)(unaff_EBP - 200) = iVar14;
  if (*(int *)(iVar23 + 8 + iVar31 * 0x14) <= iVar14) {
LAB_004b55f4:
    if ((char)unaff_EBX[0xe] == '\0') {
      *(int *)(*(int *)(unaff_EBP - 0xd4) + 0x54) = *(int *)(unaff_EBP - 0xe8) + 1;
    }
    else {
LAB_004b57a6:
      iVar31 = *(int *)(unaff_EBP - 0xd4);
      *(undefined1 *)(unaff_EBX + 0xe) = 1;
      FUN_004a9a30((int *)(iVar31 + 0x34),(int)unaff_EBX,(byte *)"out of memory");
      uVar18 = 7;
LAB_004b57c7:
      *(uint *)(unaff_EBP - 0xd0) = uVar18;
LAB_004b57cd:
      *(uint *)(*(int *)(unaff_EBP - 0xd4) + 0x58) = uVar18;
      FUN_004683f0(uVar18,"statement aborts at %d: [%s] %s");
      FUN_004b60e0(*(int **)(unaff_EBP - 0xd4));
      if (*(int *)(unaff_EBP - 0xd0) == 0xc0a) {
        *(undefined1 *)(unaff_EBX + 0xe) = 1;
      }
      if ((*(byte *)(unaff_EBP - 0xf5) != 0) &&
         (iVar31 = *(byte *)(unaff_EBP - 0xf5) - 1,
         FUN_004a7960(*(int *)(unaff_EBX[4] + 0xc + iVar31 * 0x10)), iVar31 != 1)) {
        FUN_004a7960(*(int *)(unaff_EBX[4] + 0x1c));
      }
    }
LAB_004b5847:
    iVar31 = *(int *)(unaff_EBP - 0xe4);
    piVar28 = *(int **)(unaff_EBP - 0xd4);
    *(undefined4 *)(iVar31 + 0x20) = *(undefined4 *)(unaff_EBP - 0x100);
    *(undefined4 *)(iVar31 + 0x24) = *(undefined4 *)(unaff_EBP - 0xfc);
    FUN_004b6750(piVar28);
    uStack00000008 = 0x4b587c;
    __security_check_cookie(*(uint *)(unaff_EBP - 4) ^ unaff_EBP);
    return;
  }
  iVar17 = *(int *)(unaff_EBP - 0xcc);
  goto LAB_004afa70;
LAB_004af966:
  *(int **)(unaff_EBP - 0xd8) = piVar28;
  FUN_004b7c40(piVar28,puVar34,0x1000);
  if (((*(ushort *)(piVar28 + 7) & 0x1000) != 0) && (iVar31 = FUN_004b7490(piVar28), iVar31 != 0))
  goto LAB_004b57a6;
  iVar31 = *(int *)(unaff_EBP - 0xcc);
  *(int *)(unaff_EBP - 0xcc) = iVar31 + -1;
  if (iVar31 == 0) goto LAB_004af570;
  piVar28 = piVar28 + 10;
  puVar34 = puVar34 + 5;
  goto LAB_004af966;
LAB_004af800:
  do {
    piVar32 = piVar28 + 10;
    if ((*(ushort *)(piVar28 + 0x11) & 0x2460) != 0) {
      FUN_004b7720(piVar32);
    }
    *(undefined2 *)(piVar28 + 0x11) = *(undefined2 *)(unaff_EBP - 200);
    iVar31 = *(int *)(unaff_EBP - 0xcc) + -1;
    *(int *)(unaff_EBP - 0xcc) = iVar31;
    piVar28 = piVar32;
  } while (0 < iVar31);
  *(int **)(unaff_EBP - 0xd8) = piVar32;
  goto LAB_004af834;
LAB_004af570:
  piVar28 = *(int **)(unaff_EBP - 0xd8);
  goto LAB_004b0d0b;
}


/* FUN_004b496a @ 004b496a  kind=lib  attributed-by=lib-string  size=3862 */

/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x004b467d) */
/* WARNING: Removing unreachable block (ram,0x004b03a7) */

void __fastcall FUN_004b496a(int *param_1)

{
  ushort *puVar1;
  void *_Dst;
  double dVar2;
  byte bVar3;
  ushort uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  byte bVar9;
  undefined1 uVar10;
  bool bVar11;
  undefined2 uVar12;
  int iVar13;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar14;
  byte *pbVar15;
  undefined4 uVar16;
  uint *puVar17;
  uint *puVar18;
  int *piVar19;
  size_t sVar20;
  int iVar21;
  undefined3 extraout_var_01;
  int in_EAX;
  char *pcVar22;
  undefined3 extraout_var_02;
  uint uVar23;
  undefined4 *puVar24;
  undefined3 extraout_var_03;
  int iVar25;
  undefined4 uVar26;
  uint uVar27;
  ushort uVar28;
  int *piVar29;
  uint extraout_ECX;
  int iVar30;
  void *extraout_EDX;
  uint extraout_EDX_00;
  int *unaff_EBX;
  uint uVar31;
  uint unaff_EBP;
  undefined8 *puVar32;
  byte *pbVar33;
  int *unaff_ESI;
  int iVar34;
  float10 fVar35;
  undefined8 uVar36;
  ulonglong uVar37;
  longlong lVar38;
  ulonglong uVar39;
  undefined4 uStack00000008;
  
LAB_004b4970:
  do {
    iVar34 = *(int *)((unaff_EBP - 200) + in_EAX * 4);
    FUN_004b7860(param_1,iVar34,iVar34 >> 0x1f);
    in_EAX = *(int *)(unaff_EBP - 0xcc) + 1;
    param_1 = (int *)(*(int *)(unaff_EBP - 0xbc) + 0x28);
    *(int *)(unaff_EBP - 0xcc) = in_EAX;
    *(int **)(unaff_EBP - 0xbc) = param_1;
  } while (in_EAX < 3);
LAB_004b0d0b:
  uVar27 = *(uint *)(unaff_EBP - 0xd0);
LAB_004b0d11:
  *(int *)(unaff_EBP - 0xe8) = *(int *)(unaff_EBP - 0xe8) + 1;
  if (uVar27 != 0) goto LAB_004b57cd;
  iVar34 = *(int *)(unaff_EBP - 0xe8);
  if ((char)unaff_EBX[0xe] != '\0') goto LAB_004b57a6;
  if (*(int *)(unaff_EBP - 0x11c) != 0) {
    iVar25 = *(int *)(unaff_EBP - 0x110);
    if (unaff_EBX[0x47] == iVar25) {
      iVar13 = (*(code *)unaff_EBX[0x45])();
      iVar25 = 0;
      if (iVar13 != 0) {
        uVar27 = 9;
        goto LAB_004b57c7;
      }
    }
    *(int *)(unaff_EBP - 0x110) = iVar25 + 1;
  }
  iVar25 = *(int *)(unaff_EBP - 0xdc);
  if ((*(byte *)(iVar25 + 2 + iVar34 * 0x14) & 2) != 0) {
    unaff_ESI = (int *)(*(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 8 + iVar34 * 0x14) * 0x28);
    *(int **)(unaff_EBP - 0xd8) = unaff_ESI;
    if ((*(ushort *)(unaff_ESI + 7) & 0x2460) != 0) {
      FUN_004b7720(unaff_ESI);
      iVar25 = *(int *)(unaff_EBP - 0xdc);
    }
    *(undefined2 *)(unaff_ESI + 7) = 4;
  }
  switch(*(undefined1 *)(iVar25 + iVar34 * 0x14)) {
  case 1:
    if (unaff_EBX[0x38] == 0) break;
    goto LAB_004af4ee;
  case 2:
    iVar25 = *(int *)(iVar25 + 4 + iVar34 * 0x14);
    iVar13 = *(int *)(unaff_EBP - 0xe0);
    *(undefined2 *)(*(int *)(unaff_EBP - 0xe0) + 0x1c + iVar25 * 0x28) = 4;
    iVar21 = *(int *)(unaff_EBP - 0xe8);
    *(int *)(iVar13 + 0x10 + iVar25 * 0x28) = iVar21;
    *(int *)(iVar13 + 0x14 + iVar25 * 0x28) = iVar21 >> 0x1f;
    goto LAB_004af55f;
  case 3:
    iVar34 = *(int *)(*(int *)(unaff_EBP - 0xe0) + 0x10 +
                     *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x28);
    goto LAB_004b0d05;
  case 4:
    iVar34 = *(int *)(iVar25 + 4 + iVar34 * 0x14);
    iVar25 = *(int *)(unaff_EBP - 0xe0);
    *(undefined2 *)(iVar25 + 0x1c + iVar34 * 0x28) = 4;
    *(undefined4 *)(unaff_EBP - 0xcc) = *(undefined4 *)(iVar25 + 0x10 + iVar34 * 0x28);
    iVar13 = *(int *)(unaff_EBP - 0xe8);
    *(int *)(iVar25 + 0x10 + iVar34 * 0x28) = iVar13;
    *(int *)(iVar25 + 0x14 + iVar34 * 0x28) = iVar13 >> 0x1f;
    iVar34 = *(int *)(unaff_EBP - 0xcc);
    goto LAB_004b0d05;
  case 5:
    if ((*(byte *)(*(int *)(unaff_EBP - 0xe0) + 0x1c + *(int *)(iVar25 + 0xc + iVar34 * 0x14) * 0x28
                  ) & 1) != 0) goto switchD_004af4da_caseD_6;
    goto LAB_004b0d0b;
  case 6:
switchD_004af4da_caseD_6:
    if ((*(int *)(iVar25 + 4 + iVar34 * 0x14) == 0) &&
       (piVar19 = *(int **)(*(int *)(unaff_EBP - 0xd4) + 0xa0), piVar19 != (int *)0x0)) {
      iVar25 = piVar19[1];
      iVar13 = *(int *)(unaff_EBP - 0xd4);
      *(int *)(iVar13 + 0xa8) = *(int *)(iVar13 + 0xa8) + -1;
      *(int *)(iVar13 + 0xa0) = iVar25;
      iVar25 = *(int *)(iVar13 + 100);
      unaff_EBX[0x13] = unaff_EBX[0x13] + iVar25;
      unaff_EBX[0x12] = iVar25;
      iVar25 = FUN_004b5f90(piVar19);
      *(int *)(unaff_EBP - 0xe8) = iVar25;
      *(int *)(unaff_EBP - 0x100) = unaff_EBX[8];
      *(int *)(unaff_EBP - 0xfc) = unaff_EBX[9];
      if (*(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar34 * 0x14) == 4) {
        *(int *)(unaff_EBP - 0xe8) =
             *(int *)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 4) + 8 +
                     *(int *)(unaff_EBP - 0xe8) * 0x14) + -1;
      }
      *(undefined4 *)(unaff_EBP - 0xdc) = *(undefined4 *)(*(int *)(unaff_EBP - 0xd4) + 4);
      *(undefined4 *)(unaff_EBP - 0xe0) = *(undefined4 *)(*(int *)(unaff_EBP - 0xd4) + 8);
      goto LAB_004b0d0b;
    }
    piVar19 = *(int **)(unaff_EBP - 0xd4);
    iVar13 = *(int *)(unaff_EBP - 0xe8);
    piVar19[0x16] = *(int *)(iVar25 + 4 + iVar34 * 0x14);
    *(undefined1 *)(piVar19 + 0x17) = *(undefined1 *)(iVar25 + 8 + iVar34 * 0x14);
    piVar19[0x15] = iVar13;
    if (*(int *)(iVar25 + 0x10 + iVar34 * 0x14) == 0) {
      if (piVar19[0x16] != 0) {
        FUN_004683f0(*(undefined4 *)(iVar25 + 4 + iVar34 * 0x14),"constraint failed at %d in [%s]");
        goto LAB_004b55c4;
      }
    }
    else {
      FUN_004a9a30(piVar19 + 0xd,(int)unaff_EBX,&DAT_0056de50);
      FUN_004683f0(*(undefined4 *)(*(int *)(unaff_EBP - 0xdc) + 4 + iVar34 * 0x14),
                   "abort at %d in [%s]: %s");
LAB_004b55c4:
      piVar19 = *(int **)(unaff_EBP - 0xd4);
    }
    iVar34 = FUN_004b60e0(piVar19);
    piVar19 = *(int **)(unaff_EBP - 0xd4);
    if (iVar34 == 5) {
LAB_004b564b:
      piVar19[0x16] = 5;
    }
    goto LAB_004b5847;
  case 7:
    iVar34 = *(int *)(iVar25 + 4 + iVar34 * 0x14);
    unaff_ESI[4] = iVar34;
    unaff_ESI[5] = iVar34 >> 0x1f;
    goto LAB_004b0d0b;
  case 8:
    piVar19 = *(int **)(iVar25 + 0x10 + iVar34 * 0x14);
    unaff_ESI[4] = *piVar19;
    unaff_ESI[5] = piVar19[1];
    goto LAB_004b0d0b;
  case 9:
    goto switchD_004af4da_caseD_9;
  case 10:
    *(int *)(unaff_EBP - 0xcc) =
         *(int *)(iVar25 + 0xc + iVar34 * 0x14) - *(int *)(iVar25 + 8 + iVar34 * 0x14);
    piVar19 = *(int **)(unaff_EBP - 0xd8);
    uVar12 = 1;
    if (*(int *)(iVar25 + 4 + iVar34 * 0x14) != 0) {
      uVar12 = 0x101;
    }
    *(undefined2 *)(unaff_EBP - 200) = uVar12;
    *(undefined2 *)(piVar19 + 7) = uVar12;
    if (0 < *(int *)(unaff_EBP - 0xcc)) goto LAB_004af800;
    goto LAB_004af570;
  case 0xb:
    FUN_004b79e0(unaff_ESI,*(void **)(iVar25 + 0x10 + iVar34 * 0x14),
                 *(size_t *)(iVar25 + 4 + iVar34 * 0x14),'\0',(undefined *)0x0);
    *(undefined1 *)((int)unaff_ESI + 0x1f) = *(undefined1 *)(unaff_EBP - 0xec);
    goto LAB_004b0d0b;
  case 0xc:
    piVar19 = (int *)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x44) +
                     (*(int *)(iVar25 + 4 + iVar34 * 0x14) * 5 + -5) * 8);
    *(int **)(unaff_EBP - 0xcc) = piVar19;
    bVar11 = FUN_004b7d90(piVar19);
    if (CONCAT31(extraout_var,bVar11) != 0) goto LAB_004b5780;
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    FUN_004b7c40(unaff_ESI,(undefined8 *)piVar19,0x800);
    goto LAB_004b0d0b;
  case 0xd:
    iVar13 = *(int *)(unaff_EBP - 0xdc);
    iVar21 = *(int *)(iVar25 + 0xc + iVar34 * 0x14) + 1;
    *(int *)(unaff_EBP - 200) = iVar21;
    iVar25 = *(int *)(iVar13 + 4 + iVar34 * 0x14);
    *(int *)(unaff_EBP - 0xc4) = iVar25;
    iVar34 = *(int *)(iVar13 + 8 + iVar34 * 0x14);
    iVar13 = *(int *)(unaff_EBP - 0xe0);
    *(int *)(unaff_EBP - 0xc0) = iVar34;
    puVar32 = (undefined8 *)(iVar13 + iVar25 * 0x28);
    piVar19 = (int *)(iVar13 + iVar34 * 0x28);
    *(int **)(unaff_EBP - 0xd8) = piVar19;
    if (iVar21 != 0) {
      do {
        *(int *)(unaff_EBP - 200) = iVar21 + -1;
        *(int *)(unaff_EBP - 0xcc) = piVar19[9];
        piVar19[9] = 0;
        FUN_004b7500(piVar19,puVar32);
        *(undefined4 *)((int)puVar32 + 0x24) = *(undefined4 *)(unaff_EBP - 0xcc);
        iVar21 = *(int *)(unaff_EBP - 200);
        puVar32 = puVar32 + 5;
        piVar19 = piVar19 + 10;
      } while (iVar21 != 0);
      *(int **)(unaff_EBP - 0xd8) = piVar19;
    }
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    *(undefined4 *)(unaff_EBP - 200) = 0xffffffff;
    goto LAB_004b0d0b;
  case 0xe:
    iVar13 = *(int *)(unaff_EBP - 0xe0);
    *(undefined4 *)(unaff_EBP - 0xcc) = *(undefined4 *)(iVar25 + 0xc + iVar34 * 0x14);
    puVar32 = (undefined8 *)(iVar13 + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x28);
    piVar19 = (int *)(iVar13 + *(int *)(iVar25 + 8 + iVar34 * 0x14) * 0x28);
    goto LAB_004af966;
  case 0xf:
    iVar13 = *(int *)(unaff_EBP - 0xe0);
    unaff_ESI = (int *)(iVar13 + *(int *)(iVar25 + 8 + iVar34 * 0x14) * 0x28);
    iVar34 = *(int *)(iVar25 + 4 + iVar34 * 0x14);
    *(int **)(unaff_EBP - 0xd8) = unaff_ESI;
    FUN_004b7c40(unaff_ESI,(undefined8 *)(iVar13 + iVar34 * 0x28),0x1000);
    goto LAB_004b0d0b;
  case 0x10:
    uVar27 = FUN_004aeea0(*(int **)(unaff_EBP - 0xd4),0);
    *(uint *)(unaff_EBP - 0xd0) = uVar27;
    if (uVar27 == 0) {
      uVar27 = FUN_004af050(*(int **)(unaff_EBP - 0xd4),1);
      *(uint *)(unaff_EBP - 0xd0) = uVar27;
      if (uVar27 == 0) {
        iVar13 = *(int *)(unaff_EBP - 0xd4);
        iVar21 = *(int *)(unaff_EBP - 0xdc);
        iVar25 = *(int *)(unaff_EBP - 0xe0);
        *(uint *)(iVar13 + 0x50) = *(int *)(iVar13 + 0x50) + 2U | 1;
        iVar25 = iVar25 + *(int *)(iVar21 + 4 + iVar34 * 0x14) * 0x28;
        *(int *)(iVar13 + 0x14) = iVar25;
        iVar13 = 0;
        *(int *)(unaff_EBP - 0xcc) = iVar25;
        *(undefined4 *)(unaff_EBP - 200) = 0;
        if (*(int *)(iVar21 + 8 + iVar34 * 0x14) < 1) goto LAB_004b55f4;
        goto LAB_004afa70;
      }
    }
    goto LAB_004b0d11;
  case 0x11:
    iVar34 = *(int *)(iVar25 + 4 + iVar34 * 0x14);
    if (iVar34 != 0) {
      FUN_004b7860((int *)(*(int *)(unaff_EBP - 0xe0) + iVar34 * 0x28),0,0);
    }
    goto LAB_004b0d0b;
  case 0x12:
    uVar27 = (uint)*(byte *)(iVar25 + 3 + iVar34 * 0x14);
    iVar13 = *(int *)(unaff_EBP - 0xe0);
    iVar21 = *(int *)(*(int *)(unaff_EBP - 0xd4) + 0xc);
    *(uint *)(unaff_EBP - 0x80) = uVar27;
    *(int *)(unaff_EBP - 0x84) = iVar21;
    *(int *)(unaff_EBP - 0xd8) = iVar13 + *(int *)(iVar25 + 0xc + iVar34 * 0x14) * 0x28;
    unaff_EBX = *(int **)(unaff_EBP - 0xe4);
    iVar13 = iVar13 + *(int *)(iVar25 + 8 + iVar34 * 0x14) * 0x28;
    iVar25 = 0;
    *(int *)(unaff_EBP - 200) = iVar13;
    *(undefined4 *)(unaff_EBP - 0xcc) = 0;
    if (uVar27 == 0) goto LAB_004b010d;
    goto LAB_004b00b0;
  case 0x13:
    iVar13 = *(int *)(iVar25 + 4 + iVar34 * 0x14);
    iVar21 = *(int *)(unaff_EBP - 0xe0);
    bVar9 = *(byte *)(iVar21 + 0x1c + iVar13 * 0x28);
    unaff_ESI = (int *)(iVar21 + *(int *)(iVar25 + 8 + iVar34 * 0x14) * 0x28);
    *(int **)(unaff_EBP - 0xd8) = unaff_ESI;
    if ((bVar9 & 1) == 0) {
      uVar39 = FUN_004b65e0(iVar21 + iVar13 * 0x28);
      if (uVar39 == 0) {
        FUN_004b7860(unaff_ESI,1,0);
        unaff_ESI = *(int **)(unaff_EBP - 0xd8);
      }
      else {
        FUN_004b7860(unaff_ESI,0,0);
        unaff_ESI = *(int **)(unaff_EBP - 0xd8);
      }
    }
    else {
      FUN_004b78c0((int)unaff_ESI);
    }
    goto LAB_004b0d0b;
  case 0x14:
    iVar25 = *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x28;
    FUN_004b7410(iVar25);
    uVar31 = *(uint *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar34 * 0x14);
    puVar18 = (uint *)(iVar25 + 0x10);
    uVar27 = *puVar18;
    *puVar18 = *puVar18 + uVar31;
    *(int *)(iVar25 + 0x14) =
         *(int *)(iVar25 + 0x14) + ((int)uVar31 >> 0x1f) + (uint)CARRY4(uVar27,uVar31);
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    goto LAB_004b0d0b;
  case 0x15:
    iVar25 = *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x28;
    FUN_0046dfa0(iVar25);
    if ((*(byte *)(iVar25 + 0x1c) & 8) != 0) {
      FUN_004b6650(iVar25);
    }
    if ((*(ushort *)(iVar25 + 0x1c) & 4) != 0) {
      *(ushort *)(iVar25 + 0x1c) = *(ushort *)(iVar25 + 0x1c) & 0xbe04 | 4;
      unaff_ESI = *(int **)(unaff_EBP - 0xd8);
      goto LAB_004b0d0b;
    }
    iVar34 = *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar34 * 0x14);
    if (iVar34 == 0) {
      uVar27 = 0x14;
      *(undefined4 *)(unaff_EBP - 0xd0) = 0x14;
      goto LAB_004b572c;
    }
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    goto LAB_004b0d04;
  case 0x16:
    iVar34 = *(int *)(iVar25 + 4 + iVar34 * 0x14);
    if ((*(byte *)(*(int *)(unaff_EBP - 0xe0) + 0x1c + iVar34 * 0x28) & 4) != 0) {
      FUN_004b7670(*(int *)(unaff_EBP - 0xe0) + iVar34 * 0x28);
    }
    goto LAB_004b0d0b;
  case 0x17:
    *(undefined4 *)(unaff_EBP - 0x108) = *(undefined4 *)(iVar25 + 0x10 + iVar34 * 0x14);
    goto LAB_004b0d0b;
  case 0x18:
    iVar13 = *(int *)(unaff_EBP - 0x108);
    if ((*(byte *)(iVar25 + 3 + iVar34 * 0x14) & 1) == 0) {
      iVar13 = 0;
    }
    iVar21 = *(int *)(iVar25 + 0xc + iVar34 * 0x14);
    *(int *)(unaff_EBP - 0xcc) = iVar21;
    iVar14 = *(int *)(iVar25 + 0x10 + iVar34 * 0x14);
    *(int *)(unaff_EBP - 0xbc) = iVar14;
    uVar26 = *(undefined4 *)(iVar25 + 4 + iVar34 * 0x14);
    *(undefined4 *)(unaff_EBP - 0xc4) = uVar26;
    iVar34 = *(int *)(iVar25 + 8 + iVar34 * 0x14);
    iVar25 = 0;
    *(int *)(unaff_EBP - 0x108) = iVar13;
    *(undefined4 *)(unaff_EBP - 0xf0) = uVar26;
    *(int *)(unaff_EBP - 0xc0) = iVar34;
    *(undefined4 *)(unaff_EBP - 200) = 0;
    if (iVar21 < 1) goto LAB_004b0a43;
    goto LAB_004b09a0;
  case 0x19:
    if (*(int *)(unaff_EBP - 0x10c) < 0) {
      iVar34 = *(int *)(iVar25 + 4 + iVar34 * 0x14);
      goto LAB_004b0d04;
    }
    if (*(int *)(unaff_EBP - 0x10c) != 0) {
      iVar34 = *(int *)(iVar25 + 0xc + iVar34 * 0x14);
      goto LAB_004b0d04;
    }
    break;
  case 0x1a:
    iVar13 = *(int *)(iVar25 + 4 + iVar34 * 0x14);
    iVar21 = *(int *)(*(int *)(unaff_EBP - 0xd4) + 0xb8);
    if (*(char *)(iVar21 + iVar13) == '\0') {
      *(undefined1 *)(iVar21 + iVar13) = 1;
      goto LAB_004b0d0b;
    }
    break;
  case 0x1b:
  case 0x1c:
    iVar13 = *(int *)(iVar25 + 4 + iVar34 * 0x14);
    if ((*(byte *)(*(int *)(unaff_EBP - 0xe0) + 0x1c + iVar13 * 0x28) & 1) == 0) {
      fVar35 = FUN_004b8350(*(int *)(unaff_EBP - 0xe0) + iVar13 * 0x28);
      *(double *)(unaff_EBP - 0xf4) = (double)fVar35;
      uVar27 = (uint)(*(double *)(unaff_EBP - 0xf4) != 0.0);
      iVar25 = *(int *)(unaff_EBP - 0xdc);
      *(uint *)(unaff_EBP - 0xcc) = uVar27;
      if (*(char *)(iVar25 + iVar34 * 0x14) != '\x1c') goto joined_r0x004b4649;
      uVar27 = (uint)(uVar27 == 0);
    }
    else {
      uVar27 = *(uint *)(iVar25 + 0xc + iVar34 * 0x14);
    }
    *(uint *)(unaff_EBP - 0xcc) = uVar27;
joined_r0x004b4649:
    if (uVar27 == 0) goto LAB_004b0d0b;
    break;
  case 0x1d:
    iVar13 = *(int *)(iVar25 + 4 + iVar34 * 0x14);
    iVar21 = *(int *)(unaff_EBP - 0xd4);
    *(int *)(unaff_EBP - 0xbc) = iVar13;
    iVar14 = *(int *)(iVar25 + 8 + iVar34 * 0x14);
    *(undefined4 *)(unaff_EBP - 0xb4) = 0;
    *(int *)(unaff_EBP - 0xb8) = iVar14;
    *(undefined8 *)(unaff_EBP - 0x8c) = 0;
    *(undefined8 *)(unaff_EBP - 0x84) = 0;
    *(undefined8 *)(unaff_EBP - 0x7c) = 0;
    *(undefined8 *)(unaff_EBP - 0x74) = 0;
    *(undefined8 *)(unaff_EBP - 0x6c) = 0;
    iVar25 = *(int *)(iVar25 + 0xc + iVar34 * 0x14);
    iVar30 = *(int *)(unaff_EBP - 0xe0);
    *(undefined4 *)(unaff_EBP - 0xb0) = 0;
    piVar19 = (int *)(iVar30 + iVar25 * 0x28);
    iVar25 = *(int *)(iVar21 + 0x40);
    *(int **)(unaff_EBP - 0x90) = piVar19;
    piVar29 = *(int **)(iVar25 + iVar13 * 4);
    *(int **)(unaff_EBP - 0xb4) = piVar29;
    iVar25 = *piVar29;
    *(int *)(unaff_EBP - 0xac) = iVar25;
    if (iVar25 == 0) {
      if (piVar29[4] < 1) goto LAB_004b0dd6;
      iVar25 = *(int *)(unaff_EBP - 0xe0) + piVar29[4] * 0x28;
      *(int *)(unaff_EBP - 0x48) = iVar25;
      if (*(char *)((int)piVar29 + 0x22) != '\0') {
        FUN_004b7c40(piVar19,(undefined8 *)(iVar25 + iVar14 * 0x28),0x1000);
        if ((*(ushort *)(*(int **)(unaff_EBP - 0x90) + 7) & 0x1000) == 0) goto LAB_004af834;
        iVar34 = FUN_004b7490(*(int **)(unaff_EBP - 0x90));
        unaff_EBX = *(int **)(unaff_EBP - 0xe4);
        if (iVar34 != 0) goto LAB_004b57a6;
        unaff_ESI = *(int **)(unaff_EBP - 0xd8);
        goto LAB_004b0d0b;
      }
      *(undefined4 *)(unaff_EBP - 0xcc) = *(undefined4 *)(iVar25 + 0x18);
      *(undefined4 *)(unaff_EBP - 0xb0) = *(undefined4 *)(iVar25 + 4);
      if ((*(byte *)(*(int *)(unaff_EBP - 0xdc) + 3 + iVar34 * 0x14) & 0x20) == 0) {
        iVar25 = *(int *)(*(int *)(unaff_EBP - 0xd4) + 0x50);
      }
      else {
        iVar25 = 0;
      }
      piVar29[0x14] = iVar25;
LAB_004b0f05:
      uVar27 = *(uint *)(unaff_EBP - 0xcc);
LAB_004b0f0b:
      iVar25 = *(int *)(unaff_EBP - 0xb4);
LAB_004b0f11:
      if (uVar27 != 0) {
        unaff_EBX = *(int **)(unaff_EBP - 0xe4);
        if ((uint)unaff_EBX[0x14] < uVar27) goto LAB_004b5780;
        iVar21 = *(int *)(iVar25 + 0x14);
        iVar14 = *(int *)(unaff_EBP - 0xd4);
        *(int *)(unaff_EBP - 0xa0) = iVar21;
        iVar13 = *(int *)(iVar25 + 0x58);
        *(int *)(unaff_EBP - 0xa8) = iVar13;
        unaff_EBX = *(int **)(unaff_EBP - 0xe4);
        if (*(int *)(iVar25 + 0x50) == *(int *)(iVar14 + 0x50)) {
          iVar25 = *(int *)(iVar25 + 0x5c);
          *(int *)(unaff_EBP - 0xa4) = iVar25;
LAB_004b11c6:
          iVar21 = *(int *)(unaff_EBP - 0xb8);
          if (*(int *)(iVar25 + iVar21 * 4) == 0) {
            if (*(char *)(*(int *)(unaff_EBP - 0xdc) + 1 + iVar34 * 0x14) == -8) {
              FUN_004b7c40(*(int **)(unaff_EBP - 0x90),
                           *(undefined8 **)(*(int *)(unaff_EBP - 0xdc) + 0x10 + iVar34 * 0x14),0x800
                          );
            }
            else {
              *(ushort *)(*(int *)(unaff_EBP - 0x90) + 0x1c) =
                   *(ushort *)(*(int *)(unaff_EBP - 0x90) + 0x1c) & 0xbe01 | 1;
            }
          }
          else {
            if (*(int *)(unaff_EBP - 0xb0) == 0) {
              uVar27 = *(uint *)(iVar13 + iVar21 * 4);
              iVar25 = *(int *)(unaff_EBP - 0xdc);
              *(uint *)(unaff_EBP - 0x4c) = uVar27;
              bVar9 = *(byte *)(iVar25 + 3 + iVar34 * 0x14);
              if (((bVar9 & 0xc0) == 0) ||
                 (((uVar27 < 0xc || ((uVar27 & 1) != 0)) && (-1 < (char)bVar9)))) {
                uVar27 = FUN_004b8bf0(uVar27);
                puVar32 = *(undefined8 **)(unaff_EBP - 0x90);
                *(uint *)(unaff_EBP - 0x9c) = uVar27;
                FUN_004b7500((int *)(unaff_EBP - 0x8c),puVar32);
                uVar27 = FUN_004b70b0(*(int **)(unaff_EBP - 0xac),
                                      *(uint *)(*(int *)(unaff_EBP - 0xa4) +
                                               *(int *)(unaff_EBP - 0xb8) * 4),
                                      *(size_t *)(unaff_EBP - 0x9c),
                                      (uint)*(byte *)(*(int *)(unaff_EBP - 0xb4) + 0x1f),
                                      (int *)(unaff_EBP - 0x8c));
                *(uint *)(unaff_EBP - 0xd0) = uVar27;
                if (uVar27 != 0) goto LAB_004b0616;
                pcVar22 = *(char **)(unaff_EBP - 0x88);
                uVar27 = *(uint *)(unaff_EBP - 0x4c);
              }
              else {
                pcVar22 = (char *)(-(uint)(uVar27 < 0xc) & unaff_EBP - 0xc4);
              }
              piVar19 = *(int **)(unaff_EBP - 0x90);
              *(char **)(unaff_EBP - 0x94) = pcVar22;
            }
            else {
              piVar19 = *(int **)(unaff_EBP - 0x90);
              if ((*(ushort *)(piVar19 + 7) & 0x2460) != 0) {
                FUN_004b7720(piVar19);
                piVar19 = *(int **)(unaff_EBP - 0x90);
                iVar25 = *(int *)(unaff_EBP - 0xa4);
                iVar13 = *(int *)(unaff_EBP - 0xa8);
                iVar21 = *(int *)(unaff_EBP - 0xb8);
              }
              pcVar22 = (char *)(*(int *)(iVar25 + iVar21 * 4) + *(int *)(unaff_EBP - 0xb0));
              uVar27 = *(uint *)(iVar13 + iVar21 * 4);
            }
            FUN_004b87d0(pcVar22,uVar27,(int)piVar19);
            *(undefined1 *)(*(int *)(unaff_EBP - 0x90) + 0x1f) = *(undefined1 *)(unaff_EBP - 0xec);
          }
          if (*(int *)(unaff_EBP - 0x68) != 0) {
            puVar1 = (ushort *)(*(int *)(unaff_EBP - 0x90) + 0x1c);
            *puVar1 = *puVar1 & 0xe7ff;
            puVar1 = (ushort *)(*(int *)(unaff_EBP - 0x90) + 0x1c);
            *puVar1 = *puVar1 | 0x200;
            *(undefined4 *)(*(int *)(unaff_EBP - 0x90) + 4) = *(undefined4 *)(unaff_EBP - 0x88);
            *(undefined4 *)(*(int *)(unaff_EBP - 0x90) + 0x24) = *(undefined4 *)(unaff_EBP - 0x68);
          }
          uVar27 = FUN_004b7490(*(int **)(unaff_EBP - 0x90));
          unaff_ESI = *(int **)(unaff_EBP - 0xd8);
          *(uint *)(unaff_EBP - 0xd0) = uVar27;
        }
        else {
          iVar13 = iVar13 + iVar21 * 4;
          *(int *)(unaff_EBP - 0xa4) = iVar13;
          *(undefined4 *)(unaff_EBP - 0x50) = 0;
          *(int *)(iVar25 + 0x5c) = iVar13;
          *(undefined4 *)(*(int *)(unaff_EBP - 0xb4) + 0x54) = *(undefined4 *)(unaff_EBP - 0xcc);
          *(undefined4 *)(*(int *)(unaff_EBP - 0xb4) + 0x50) =
               *(undefined4 *)(*(int *)(unaff_EBP - 0xd4) + 0x50);
          pbVar33 = *(byte **)(unaff_EBP - 0xb0);
          if (pbVar33 == (byte *)0x0) {
            if (*(char *)(*(int *)(unaff_EBP - 0xb4) + 0x1f) == '\0') {
              iVar25 = FUN_0048f8b0(*(int *)(unaff_EBP - 0xac),(uint *)(unaff_EBP - 0x50));
            }
            else {
              iVar25 = FUN_00490640(*(int *)(unaff_EBP - 0xac),(uint *)(unaff_EBP - 0x50));
            }
            uVar31 = *(uint *)(unaff_EBP - 0xcc);
            uVar27 = *(uint *)(unaff_EBP - 0x50);
            iVar13 = *(int *)(unaff_EBP - 0xb4);
            *(int *)(unaff_EBP - 0x94) = iVar25;
            if (uVar27 < uVar31) {
              *(undefined4 *)(iVar13 + 0x60) = 0;
            }
            else {
              *(int *)(unaff_EBP - 0xb0) = iVar25;
              *(int *)(iVar13 + 0x60) = iVar25;
            }
            pbVar33 = *(byte **)(unaff_EBP - 0x94);
          }
          else {
            *(byte **)(unaff_EBP - 0x94) = pbVar33;
          }
          if (*pbVar33 < 0x80) {
            uVar27 = (uint)*pbVar33;
            *(uint *)(unaff_EBP - 0x5c) = uVar27;
            uVar31 = 1;
          }
          else {
            uVar31 = FUN_0049d440(pbVar33,(uint *)(unaff_EBP - 0x5c));
            uVar27 = *(uint *)(unaff_EBP - 0x5c);
            pbVar33 = *(byte **)(unaff_EBP - 0x94);
            uVar31 = uVar31 & 0xff;
          }
          *(uint *)(unaff_EBP - 0x54) = uVar31;
          if (uVar27 < 0x18004) {
            iVar25 = *(int *)(unaff_EBP - 0xa0);
            sVar20 = iVar25 * 5 + 3;
            if ((int)uVar27 < (int)sVar20) {
              sVar20 = uVar27;
            }
            iVar13 = *(int *)(unaff_EBP - 0xb0);
            *(size_t *)(unaff_EBP - 0x9c) = sVar20;
            if ((iVar13 == 0) && (*(int *)(unaff_EBP - 0x50) < (int)sVar20)) {
              *(undefined2 *)(unaff_EBP - 0x70) = 0;
              *(undefined4 *)(unaff_EBP - 0x8c) = 0;
              uVar27 = FUN_004b70b0(*(int **)(unaff_EBP - 0xac),0,sVar20,
                                    (uint)*(byte *)(*(int *)(unaff_EBP - 0xb4) + 0x1f),
                                    (int *)(unaff_EBP - 0x8c));
              *(uint *)(unaff_EBP - 0xd0) = uVar27;
              if (uVar27 != 0) goto LAB_004af834;
              pbVar33 = *(byte **)(unaff_EBP - 0x88);
              uVar27 = *(uint *)(unaff_EBP - 0x5c);
              sVar20 = *(size_t *)(unaff_EBP - 0x9c);
              iVar25 = *(int *)(unaff_EBP - 0xa0);
              *(byte **)(unaff_EBP - 0x94) = pbVar33;
            }
            pbVar15 = pbVar33 + sVar20;
            pbVar33 = pbVar33 + *(int *)(unaff_EBP - 0x54);
            iVar13 = 0;
            *(byte **)(unaff_EBP - 0x60) = pbVar15;
            *(byte **)(unaff_EBP - 100) = pbVar33;
            *(undefined4 *)(unaff_EBP - 0x98) = 0;
            if (0 < iVar25) {
              do {
                if (pbVar33 < pbVar15) {
                  *(uint *)(*(int *)(unaff_EBP - 0xa4) + iVar13 * 4) = uVar27;
                  pbVar33 = *(byte **)(unaff_EBP - 100);
                  if (*pbVar33 < 0x80) {
                    uVar27 = (uint)*pbVar33;
                    *(uint *)(unaff_EBP - 0x4c) = uVar27;
                    *(byte **)(unaff_EBP - 100) = pbVar33 + 1;
                  }
                  else {
                    uVar31 = FUN_0049d440(pbVar33,(uint *)(unaff_EBP - 0x4c));
                    uVar27 = *(uint *)(unaff_EBP - 0x4c);
                    *(int *)(unaff_EBP - 100) = *(int *)(unaff_EBP - 100) + (uVar31 & 0xff);
                  }
                  *(uint *)(*(int *)(unaff_EBP - 0xa8) + *(int *)(unaff_EBP - 0x98) * 4) = uVar27;
                  uVar31 = FUN_004b8bf0(*(uint *)(unaff_EBP - 0x4c));
                  uVar27 = *(int *)(unaff_EBP - 0x5c) + uVar31;
                  *(uint *)(unaff_EBP - 0x58) = uVar31;
                  *(uint *)(unaff_EBP - 0x5c) = uVar27;
                  if (uVar27 < uVar31) {
                    *(int *)(unaff_EBP - 100) = *(int *)(unaff_EBP - 0x60) + 1;
                    break;
                  }
                }
                else {
                  *(undefined4 *)(*(int *)(unaff_EBP - 0xa4) + iVar13 * 4) = 0;
                  uVar27 = *(uint *)(unaff_EBP - 0x5c);
                }
                iVar13 = *(int *)(unaff_EBP - 0x98) + 1;
                *(int *)(unaff_EBP - 0x98) = iVar13;
                if (*(int *)(unaff_EBP - 0xa0) <= iVar13) break;
                pbVar15 = *(byte **)(unaff_EBP - 0x60);
                pbVar33 = *(byte **)(unaff_EBP - 100);
              } while( true );
            }
            FUN_004b76e0((int *)(unaff_EBP - 0x8c));
            uVar27 = *(uint *)(unaff_EBP - 100);
            uVar31 = *(uint *)(unaff_EBP - 0x60);
            *(undefined2 *)(unaff_EBP - 0x70) = 1;
            if (uVar27 <= uVar31) {
              if ((*(uint *)(unaff_EBP - 0x5c) <= *(uint *)(unaff_EBP - 0xcc)) &&
                 ((uVar27 != uVar31 || (*(uint *)(unaff_EBP - 0x5c) == *(uint *)(unaff_EBP - 0xcc)))
                 )) {
                iVar25 = *(int *)(unaff_EBP - 0xa4);
                iVar13 = *(int *)(unaff_EBP - 0xa8);
                unaff_EBX = *(int **)(unaff_EBP - 0xe4);
                goto LAB_004b11c6;
              }
            }
            uVar26 = FUN_00493af0();
            unaff_EBX = *(int **)(unaff_EBP - 0xe4);
            unaff_ESI = *(int **)(unaff_EBP - 0xd8);
            *(undefined4 *)(unaff_EBP - 0xd0) = uVar26;
            goto LAB_004b0d0b;
          }
          uVar27 = FUN_00493af0();
          unaff_ESI = *(int **)(unaff_EBP - 0xd8);
          *(uint *)(unaff_EBP - 0xd0) = uVar27;
        }
        goto LAB_004b0d11;
      }
      piVar19 = *(int **)(unaff_EBP - 0x90);
    }
    else {
      uVar27 = FUN_004af1b0(piVar29);
      *(uint *)(unaff_EBP - 0xd0) = uVar27;
      if (uVar27 != 0) {
LAB_004b5720:
        uVar27 = *(uint *)(unaff_EBP - 0xd0);
        unaff_EBX = *(int **)(unaff_EBP - 0xe4);
        goto LAB_004b572c;
      }
      iVar25 = *(int *)(unaff_EBP - 0xb4);
      if (*(char *)(iVar25 + 0x1c) == '\0') {
        if (*(int *)(iVar25 + 0x50) != *(int *)(iVar21 + 0x50)) {
          if (*(char *)(iVar25 + 0x1f) == '\0') {
            FUN_0048f8d0(*(int *)(unaff_EBP - 0xac),(undefined4 *)(unaff_EBP - 0xcc));
            goto LAB_004b0f05;
          }
          FUN_004906b0(*(int *)(unaff_EBP - 0xac),(undefined4 *)(unaff_EBP - 0xc4));
          uVar27 = *(uint *)(unaff_EBP - 0xc4);
          *(uint *)(unaff_EBP - 0xcc) = uVar27;
          goto LAB_004b0f0b;
        }
        uVar27 = *(uint *)(iVar25 + 0x54);
        *(uint *)(unaff_EBP - 0xcc) = uVar27;
        *(undefined4 *)(unaff_EBP - 0xb0) = *(undefined4 *)(iVar25 + 0x60);
        goto LAB_004b0f11;
      }
      piVar19 = *(int **)(unaff_EBP - 0x90);
LAB_004b0dd6:
      *(undefined4 *)(unaff_EBP - 0xcc) = 0;
    }
    unaff_EBX = *(int **)(unaff_EBP - 0xe4);
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    *(ushort *)(piVar19 + 7) = *(ushort *)(piVar19 + 7) & 0xbe01 | 1;
    goto LAB_004b0d0b;
  case 0x1e:
    pcVar22 = *(char **)(iVar25 + 0x10 + iVar34 * 0x14);
    *(char **)(unaff_EBP - 0xcc) = pcVar22;
    piVar19 = (int *)(*(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x28);
    cVar8 = *pcVar22;
    *(char *)(unaff_EBP - 200) = cVar8;
    if (cVar8 != '\0') {
      do {
        *(char **)(unaff_EBP - 0xcc) = pcVar22 + 1;
        if ((*(ushort *)(piVar19 + 7) & 0x4000) != 0) {
          FUN_004b6fa0(piVar19);
        }
        FUN_004ae250(piVar19,(char)*(undefined4 *)(unaff_EBP - 200),
                     (byte)*(undefined4 *)(unaff_EBP - 0xec));
        pcVar22 = *(char **)(unaff_EBP - 0xcc);
        cVar8 = *pcVar22;
        piVar19 = piVar19 + 10;
        *(char *)(unaff_EBP - 200) = cVar8;
      } while (cVar8 != '\0');
      unaff_EBX = *(int **)(unaff_EBP - 0xe4);
    }
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    *(char **)(unaff_EBP - 0xcc) = pcVar22 + 1;
    goto LAB_004b0d0b;
  case 0x1f:
    iVar13 = *(int *)(unaff_EBP - 0xdc);
    uVar31 = 0;
    *(undefined4 *)(unaff_EBP - 0xbc) = 0;
    uVar27 = 0;
    *(undefined4 *)(unaff_EBP - 0xac) = 0;
    *(undefined8 *)(unaff_EBP - 0xc4) = 0;
    iVar25 = *(int *)(iVar13 + 4 + iVar34 * 0x14);
    *(int *)(unaff_EBP - 0x98) = iVar25;
    uVar26 = *(undefined4 *)(iVar13 + 0x10 + iVar34 * 0x14);
    *(undefined4 *)(unaff_EBP - 0x94) = uVar26;
    *(undefined4 *)(unaff_EBP - 0xf0) = uVar26;
    iVar25 = *(int *)(unaff_EBP - 0xe0) + iVar25 * 0x28;
    *(int *)(unaff_EBP - 0xa0) = iVar25;
    iVar21 = *(int *)(iVar13 + 8 + iVar34 * 0x14);
    *(int *)(unaff_EBP - 0x98) = iVar21;
    piVar29 = (int *)((iVar25 + iVar21 * 0x28) - 0x28);
    *(uint *)(unaff_EBP - 0x90) = (uint)*(byte *)(*(int *)(unaff_EBP - 0xd4) + 0x5d);
    *(int **)(unaff_EBP - 0x9c) = piVar29;
    *(int *)(unaff_EBP - 0xd8) =
         *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar13 + 0xc + iVar34 * 0x14) * 0x28;
    piVar19 = *(int **)(unaff_EBP - 0xa0);
    *(int **)(unaff_EBP - 200) = piVar19;
    if (piVar19 <= piVar29) {
      uVar27 = 0;
      piVar29 = piVar19;
      do {
        if (*(int *)(unaff_EBP - 0xf0) != 0) {
          FUN_004ae250(piVar29,*(char *)(((int)piVar29 - (int)piVar19) / 0x28 +
                                        *(int *)(unaff_EBP - 0xf0)),
                       (byte)*(undefined4 *)(unaff_EBP - 0xec));
          uVar27 = *(uint *)(unaff_EBP - 0xac);
          piVar29 = *(int **)(unaff_EBP - 200);
          *(undefined4 *)(unaff_EBP - 0xf0) = *(undefined4 *)(unaff_EBP - 0x94);
        }
        if (((*(ushort *)(piVar29 + 7) & 0x4000) != 0) && (0 < piVar29[6])) {
          FUN_004b6fa0(piVar29);
          uVar27 = *(uint *)(unaff_EBP - 0xac);
          piVar29 = *(int **)(unaff_EBP - 200);
          *(undefined4 *)(unaff_EBP - 0xf0) = *(undefined4 *)(unaff_EBP - 0x94);
        }
        uVar31 = FUN_004b8ae0((int)piVar29,*(int *)(unaff_EBP - 0x90));
        *(uint *)(unaff_EBP - 0xa4) = uVar31;
        uVar23 = FUN_004b8bf0(uVar31);
        puVar18 = (uint *)(unaff_EBP - 0xc4);
        uVar31 = *puVar18;
        *puVar18 = *puVar18 + uVar23;
        *(int *)(unaff_EBP - 0xc0) =
             *(int *)(unaff_EBP - 0xc0) + ((int)uVar23 >> 0x1f) + (uint)CARRY4(uVar31,uVar23);
        *(uint *)(unaff_EBP - 0x88) = uVar23;
        iVar34 = FUN_004ae730(extraout_ECX,0);
        uVar31 = *(int *)(unaff_EBP - 0xbc) + iVar34;
        *(uint *)(unaff_EBP - 0xbc) = uVar31;
        if ((*(ushort *)(piVar29 + 7) & 0x4000) == 0) {
          if (uVar23 != 0) {
            uVar27 = 0;
          }
        }
        else {
          uVar27 = uVar27 + piVar29[4];
        }
        piVar19 = *(int **)(unaff_EBP - 0xa0);
        piVar29 = piVar29 + 10;
        *(uint *)(unaff_EBP - 0xac) = uVar27;
        *(int **)(unaff_EBP - 200) = piVar29;
      } while (piVar29 <= *(int **)(unaff_EBP - 0x9c));
    }
    iVar34 = FUN_004ae730(uVar31,(int)uVar31 >> 0x1f);
    uVar31 = *(int *)(unaff_EBP - 0xbc) + iVar34;
    *(int *)(unaff_EBP - 0xa8) = iVar34;
    *(uint *)(unaff_EBP - 0xbc) = uVar31;
    iVar25 = FUN_004ae730(uVar31,(int)uVar31 >> 0x1f);
    if (iVar34 < iVar25) {
      uVar31 = uVar31 + 1;
      *(uint *)(unaff_EBP - 0xbc) = uVar31;
    }
    iVar34 = *(int *)(unaff_EBP - 0xe4);
    uVar23 = (uVar31 - uVar27) + *(uint *)(unaff_EBP - 0xc4);
    iVar25 = ((((int)uVar31 >> 0x1f) - ((int)uVar27 >> 0x1f)) - (uint)(uVar31 < uVar27)) +
             *(int *)(unaff_EBP - 0xc0) + (uint)CARRY4(uVar31 - uVar27,*(uint *)(unaff_EBP - 0xc4));
    *(uint *)(unaff_EBP - 0xb4) = uVar23;
    *(int *)(unaff_EBP - 0xb0) = iVar25;
    uVar27 = *(uint *)(iVar34 + 0x50);
    iVar34 = (int)uVar27 >> 0x1f;
    if ((iVar34 < iVar25) || ((iVar34 <= iVar25 && (uVar27 < uVar23)))) {
LAB_004b577a:
      unaff_EBX = *(int **)(unaff_EBP - 0xe4);
      goto LAB_004b5780;
    }
    piVar19 = *(int **)(unaff_EBP - 0xd8);
    iVar34 = FUN_004b7260(piVar19,uVar23,0);
    if (iVar34 != 0) {
LAB_004b57a0:
      unaff_EBX = *(int **)(unaff_EBP - 0xe4);
      goto LAB_004b57a6;
    }
    uVar27 = *(uint *)(unaff_EBP - 0xbc);
    pbVar33 = (byte *)piVar19[1];
    *(byte **)(unaff_EBP - 0xcc) = pbVar33;
    if (uVar27 < 0x80) {
      *pbVar33 = (byte)uVar27;
      uVar27 = 1;
    }
    else {
      uVar27 = FUN_004a60c0(pbVar33,uVar27);
    }
    uVar31 = *(uint *)(unaff_EBP - 0x9c);
    uVar27 = uVar27 & 0xff;
    uVar23 = *(uint *)(unaff_EBP - 0xa0);
    *(uint *)(unaff_EBP - 0x8c) = uVar27;
    *(uint *)(unaff_EBP - 200) = uVar23;
    if (uVar23 <= uVar31) {
      do {
        uVar31 = FUN_004b8ae0(uVar23,*(int *)(unaff_EBP - 0x90));
        *(uint *)(unaff_EBP - 0xa4) = uVar31;
        if (uVar31 < 0x80) {
          *(char *)(uVar27 + *(int *)(unaff_EBP - 0xcc)) = (char)uVar31;
          uVar27 = 1;
        }
        else {
          uVar27 = FUN_004a60c0((byte *)(*(int *)(unaff_EBP - 0xcc) + uVar27),uVar31);
        }
        uVar31 = *(uint *)(unaff_EBP - 0x9c);
        uVar27 = *(int *)(unaff_EBP - 0x8c) + (uVar27 & 0xff);
        uVar23 = *(int *)(unaff_EBP - 200) + 0x28;
        *(uint *)(unaff_EBP - 0x8c) = uVar27;
        *(uint *)(unaff_EBP - 200) = uVar23;
      } while (uVar23 <= uVar31);
      uVar23 = *(uint *)(unaff_EBP - 0xa0);
    }
    *(uint *)(unaff_EBP - 200) = uVar23;
    if (uVar23 <= uVar31) {
      do {
        uVar27 = FUN_004b8a30((void *)(*(int *)(unaff_EBP - 0xcc) + uVar27),
                              *(int *)(unaff_EBP - 0xb4) - uVar27,uVar23,*(int *)(unaff_EBP - 0x90))
        ;
        uVar27 = *(int *)(unaff_EBP - 0x8c) + uVar27;
        uVar23 = *(int *)(unaff_EBP - 200) + 0x28;
        *(uint *)(unaff_EBP - 0x8c) = uVar27;
        *(uint *)(unaff_EBP - 200) = uVar23;
      } while (uVar23 <= *(uint *)(unaff_EBP - 0x9c));
    }
    piVar19[6] = *(int *)(unaff_EBP - 0xb4);
    *(undefined2 *)(piVar19 + 7) = 0x410;
    piVar19[8] = 0;
    if (*(int *)(unaff_EBP - 0xac) != 0) {
      piVar19[4] = *(int *)(unaff_EBP - 0xac);
      *(undefined2 *)(piVar19 + 7) = 0x4410;
    }
    unaff_EBX = *(int **)(unaff_EBP - 0xe4);
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    *(undefined1 *)((int)piVar19 + 0x1f) = 1;
    goto LAB_004b0d0b;
  case 0x20:
    piVar19 = (int *)**(undefined4 **)
                       (*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                       *(int *)(iVar25 + 4 + iVar34 * 0x14) * 4);
    *(int **)(unaff_EBP - 0xc4) = piVar19;
    if (piVar19 == (int *)0x0) {
      *(undefined8 *)(unaff_EBP - 0xcc) = 0;
      unaff_ESI[4] = *(int *)(unaff_EBP - 0xcc);
      unaff_ESI[5] = *(int *)(unaff_EBP - 200);
    }
    else {
      iVar34 = FUN_0048f530(piVar19,(uint *)(unaff_EBP - 0xcc));
      *(int *)(unaff_EBP - 0xd0) = iVar34;
      unaff_ESI[4] = *(int *)(unaff_EBP - 0xcc);
      unaff_ESI[5] = *(int *)(unaff_EBP - 200);
    }
    goto LAB_004b0d0b;
  case 0x21:
    iVar13 = *(int *)(iVar25 + 4 + iVar34 * 0x14);
    *(int *)(unaff_EBP - 0xcc) = iVar13;
    pbVar33 = *(byte **)(iVar25 + 0x10 + iVar34 * 0x14);
    *(byte **)(unaff_EBP - 0xf0) = pbVar33;
    *(byte **)(unaff_EBP - 200) = pbVar33;
    if (iVar13 == 0) {
      unaff_EBX = *(int **)(unaff_EBP - 0xe4);
      if (unaff_EBX[0x22] < 1) {
        uVar27 = FUN_004aa9b0((char *)pbVar33);
        *(uint *)(unaff_EBP - 0xc4) = uVar27;
        uVar27 = FUN_004b9ef0((int)unaff_EBX,0,unaff_EBX[0x79] + unaff_EBX[0x78]);
        *(uint *)(unaff_EBP - 0xd0) = uVar27;
        if (uVar27 != 0) goto LAB_004b572c;
        piVar19 = FUN_00494b90((int)unaff_EBX,*(int *)(unaff_EBP - 0xc4) + 0x19);
        *(int **)(unaff_EBP - 0xc0) = piVar19;
        if (piVar19 != (int *)0x0) {
          *piVar19 = (int)(piVar19 + 6);
          memcpy((void *)**(undefined4 **)(unaff_EBP - 0xc0),*(void **)(unaff_EBP - 200),
                 *(int *)(unaff_EBP - 0xc4) + 1);
          if (*(char *)((int)unaff_EBX + 0x36) == '\0') {
            unaff_EBX[0x78] = unaff_EBX[0x78] + 1;
          }
          else {
            *(undefined1 *)((int)unaff_EBX + 0x36) = 0;
            *(undefined1 *)((int)unaff_EBX + 0x3d) = 1;
          }
          *(int *)(*(int *)(unaff_EBP - 0xc0) + 0x10) = unaff_EBX[0x76];
          unaff_EBX[0x76] = *(int *)(unaff_EBP - 0xc0);
          *(int *)(*(int *)(unaff_EBP - 0xc0) + 8) = unaff_EBX[0x7a];
          *(int *)(*(int *)(unaff_EBP - 0xc0) + 0xc) = unaff_EBX[0x7b];
        }
        goto LAB_004b0d0b;
      }
      pcVar22 = "cannot open savepoint - SQL statements in progress";
LAB_004b188b:
      FUN_004a9a30((int *)(*(int *)(unaff_EBP - 0xd4) + 0x34),(int)unaff_EBX,(byte *)pcVar22);
      uVar27 = 5;
      *(undefined4 *)(unaff_EBP - 0xd0) = 5;
    }
    else {
      iVar34 = *(int *)(unaff_EBP - 0xe4);
      iVar25 = 0;
      *(undefined4 *)(unaff_EBP - 0xb4) = 0;
      puVar24 = *(undefined4 **)(iVar34 + 0x1d8);
      *(undefined4 **)(unaff_EBP - 0xbc) = puVar24;
joined_r0x004b1994:
      if (puVar24 == (undefined4 *)0x0) goto LAB_004b19bf;
      iVar34 = FUN_004bcc60((byte *)*puVar24,pbVar33);
      if (iVar34 != 0) goto code_r0x004b19a5;
      unaff_EBX = *(int **)(unaff_EBP - 0xe4);
      if ((0 < unaff_EBX[0x22]) && (iVar13 == 1)) {
        FUN_004a9a30((int *)(*(int *)(unaff_EBP - 0xd4) + 0x34),(int)unaff_EBX,
                     (byte *)"cannot release savepoint - SQL statements in progress");
        unaff_ESI = *(int **)(unaff_EBP - 0xd8);
        uVar27 = 5;
        *(undefined4 *)(unaff_EBP - 0xd0) = 5;
        goto LAB_004b0d11;
      }
      if ((puVar24[4] == 0) && (*(char *)((int)unaff_EBX + 0x3d) != '\0')) {
        *(undefined4 *)(unaff_EBP - 0xf0) = 1;
        if (iVar13 == 1) {
          piVar19 = *(int **)(unaff_EBP - 0xd4);
          iVar34 = FUN_004aeea0(piVar19,1);
          if (iVar34 != 0) goto LAB_004b5847;
          iVar34 = *(int *)(unaff_EBP - 0xe4);
          *(undefined1 *)(iVar34 + 0x36) = 1;
          iVar25 = FUN_004b60e0(piVar19);
          if (iVar25 == 5) {
            piVar19[0x15] = *(int *)(unaff_EBP - 0xe8);
            *(undefined1 *)(iVar34 + 0x36) = 0;
            goto LAB_004b564b;
          }
          *(undefined1 *)(iVar34 + 0x3d) = 0;
          *(int *)(unaff_EBP - 0xd0) = piVar19[0x16];
          goto LAB_004b1b7c;
        }
      }
      else {
        *(undefined4 *)(unaff_EBP - 0xf0) = 0;
      }
      iVar34 = *(int *)(unaff_EBP - 0xe4);
      *(int *)(unaff_EBP - 0xb4) = (unaff_EBX[0x78] - iVar25) + -1;
      if (iVar13 == 2) {
        iVar25 = 0;
        *(undefined4 *)(unaff_EBP - 0xb0) = 0;
        if (0 < *(int *)(iVar34 + 0x14)) {
          do {
            FUN_00491f60(*(undefined4 **)(*(int *)(iVar34 + 0x10) + 4 + iVar25 * 0x10),4);
            iVar25 = *(int *)(unaff_EBP - 0xb0) + 1;
            *(int *)(unaff_EBP - 0xb0) = iVar25;
          } while (iVar25 < *(int *)(iVar34 + 0x14));
          puVar24 = *(undefined4 **)(unaff_EBP - 0xbc);
          iVar13 = *(int *)(unaff_EBP - 0xcc);
        }
      }
      iVar25 = 0;
      *(undefined4 *)(unaff_EBP - 0xb0) = 0;
      if (0 < *(int *)(iVar34 + 0x14)) {
        while( true ) {
          unaff_EBX = *(int **)(unaff_EBP - 0xe4);
          uVar27 = FUN_00491910(*(undefined4 **)(unaff_EBX[4] + 4 + iVar25 * 0x10),iVar13,
                                *(int *)(unaff_EBP - 0xb4));
          *(uint *)(unaff_EBP - 0xd0) = uVar27;
          if (uVar27 != 0) break;
          iVar25 = *(int *)(unaff_EBP - 0xb0) + 1;
          *(int *)(unaff_EBP - 0xb0) = iVar25;
          iVar13 = *(int *)(unaff_EBP - 0xcc);
          if (unaff_EBX[5] <= iVar25) {
            puVar24 = *(undefined4 **)(unaff_EBP - 0xbc);
            iVar34 = *(int *)(unaff_EBP - 0xe4);
            goto LAB_004b1b60;
          }
        }
        goto LAB_004b572c;
      }
LAB_004b1b60:
      if ((iVar13 == 2) && ((*(byte *)(iVar34 + 0x18) & 2) != 0)) {
        FUN_00496370(iVar34);
        FUN_004a6940(iVar34);
        *(uint *)(iVar34 + 0x18) = *(uint *)(iVar34 + 0x18) | 2;
LAB_004b1b7c:
        iVar13 = *(int *)(unaff_EBP - 0xcc);
        puVar24 = *(undefined4 **)(unaff_EBP - 0xbc);
      }
      if (*(undefined4 **)(iVar34 + 0x1d8) != puVar24) {
        do {
          iVar25 = *(int *)(iVar34 + 0x1d8);
          *(int *)(unaff_EBP - 0xb8) = iVar25;
          *(undefined4 *)(iVar34 + 0x1d8) = *(undefined4 *)(iVar25 + 0x10);
          FUN_00494b00(iVar34,*(undefined4 **)(unaff_EBP - 0xb8));
          *(int *)(iVar34 + 0x1e0) = *(int *)(iVar34 + 0x1e0) + -1;
          puVar24 = *(undefined4 **)(unaff_EBP - 0xbc);
        } while (*(undefined4 **)(iVar34 + 0x1d8) != puVar24);
        iVar13 = *(int *)(unaff_EBP - 0xcc);
      }
      unaff_EBX = *(int **)(unaff_EBP - 0xe4);
      if (iVar13 != 1) {
        iVar34 = *(int *)(unaff_EBP - 0xf0);
        unaff_EBX[0x7a] = puVar24[2];
        unaff_EBX[0x7b] = puVar24[3];
        if (iVar34 == 0) goto LAB_004b1c25;
        goto LAB_004af570;
      }
      unaff_EBX[0x76] = puVar24[4];
      FUN_00494b00((int)unaff_EBX,*(undefined4 **)(unaff_EBP - 0xbc));
      if (*(int *)(unaff_EBP - 0xf0) != 0) goto LAB_004af570;
      unaff_EBX[0x78] = unaff_EBX[0x78] + -1;
LAB_004b1c25:
      uVar27 = FUN_004b9ef0((int)unaff_EBX,*(int *)(unaff_EBP - 0xcc),*(int *)(unaff_EBP - 0xb4));
      *(uint *)(unaff_EBP - 0xd0) = uVar27;
      if (uVar27 != 0) goto LAB_004b572c;
      unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    }
    goto LAB_004b0d11;
  case 0x22:
    uVar27 = *(uint *)(iVar25 + 4 + iVar34 * 0x14);
    iVar25 = *(int *)(unaff_EBP - 0xdc);
    *(uint *)(unaff_EBP - 0xcc) = uVar27;
    iVar34 = *(int *)(iVar25 + 8 + iVar34 * 0x14);
    *(int *)(unaff_EBP - 200) = iVar34;
    if ((uVar27 == 0) || (*(char *)((int)unaff_EBX + 0x36) != '\0')) {
      *(undefined4 *)(unaff_EBP - 0xc4) = 0;
    }
    else {
      *(undefined4 *)(unaff_EBP - 0xc4) = 1;
      if ((iVar34 == 0) && (0 < unaff_EBX[0x22])) {
        pcVar22 = "cannot commit transaction - SQL statements in progress";
        goto LAB_004b188b;
      }
    }
    if (uVar27 != *(byte *)((int)unaff_EBX + 0x36)) {
      if (iVar34 == 0) {
        iVar34 = FUN_004aeea0(*(int **)(unaff_EBP - 0xd4),1);
        if (iVar34 != 0) goto LAB_004b5847;
        piVar19 = *(int **)(unaff_EBP - 0xd4);
        *(undefined1 *)((int)unaff_EBX + 0x36) = *(undefined1 *)(unaff_EBP - 0xcc);
        iVar34 = FUN_004b60e0(piVar19);
        if (iVar34 == 5) {
          cVar8 = *(char *)(unaff_EBP - 0xcc);
          piVar19[0x15] = *(int *)(unaff_EBP - 0xe8);
          *(char *)((int)unaff_EBX + 0x36) = '\x01' - cVar8;
          *(undefined4 *)(*(int *)(unaff_EBP - 0xd4) + 0x58) = 5;
          goto LAB_004b5847;
        }
      }
      else {
        FUN_004a6c80((int)unaff_EBX,0x204);
        *(undefined1 *)((int)unaff_EBX + 0x36) = 1;
      }
      FUN_00492710((int)unaff_EBX);
      goto LAB_004b5847;
    }
    if (uVar27 == 0) {
      pcVar22 = "cannot start a transaction within a transaction";
    }
    else {
      pcVar22 = "cannot rollback - no transaction is active";
      if (iVar34 == 0) {
        pcVar22 = "cannot commit - no transaction is active";
      }
    }
    FUN_004a9a30((int *)(*(int *)(unaff_EBP - 0xd4) + 0x34),(int)unaff_EBX,(byte *)pcVar22);
    uVar27 = 1;
    *(undefined4 *)(unaff_EBP - 0xd0) = 1;
    goto LAB_004b0d11;
  case 0x23:
    piVar19 = *(int **)(unaff_EBX[4] + 4 + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x10);
    *(int **)(unaff_EBP - 0xcc) = piVar19;
    if (piVar19 == (int *)0x0) goto LAB_004b0d0b;
    uVar27 = FUN_0048ed50(piVar19,*(int *)(iVar25 + 8 + iVar34 * 0x14));
    *(uint *)(unaff_EBP - 0xd0) = uVar27;
    if (uVar27 == 5) {
      iVar34 = *(int *)(unaff_EBP - 0xd4);
      *(undefined4 *)(iVar34 + 0x54) = *(undefined4 *)(unaff_EBP - 0xe8);
      *(undefined4 *)(iVar34 + 0x58) = 5;
      goto LAB_004b5847;
    }
    if (uVar27 != 0) goto LAB_004b572c;
    if (((*(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar34 * 0x14) != 0) &&
        (iVar34 = *(int *)(unaff_EBP - 0xd4), (*(byte *)(iVar34 + 0x60) & 0x80) != 0)) &&
       ((*(char *)((int)unaff_EBX + 0x36) == '\0' || (1 < unaff_EBX[0x21])))) {
      if (*(int *)(iVar34 + 0x70) == 0) {
        unaff_EBX[0x79] = unaff_EBX[0x79] + 1;
        iVar34 = *(int *)(unaff_EBP - 0xd4);
        *(int *)(iVar34 + 0x70) = unaff_EBX[0x78] + unaff_EBX[0x79];
      }
      iVar34 = FUN_004b9ef0((int)unaff_EBX,0,*(int *)(iVar34 + 0x70) + -1);
      *(int *)(unaff_EBP - 0xd0) = iVar34;
      if (iVar34 == 0) {
        uVar26 = FUN_0048ed00(*(undefined4 **)(unaff_EBP - 0xcc),
                              *(int *)(*(int *)(unaff_EBP - 0xd4) + 0x70));
        *(undefined4 *)(unaff_EBP - 0xd0) = uVar26;
      }
      iVar34 = *(int *)(unaff_EBP - 0xd4);
      *(int *)(iVar34 + 0x90) = unaff_EBX[0x7a];
      *(int *)(iVar34 + 0x94) = unaff_EBX[0x7b];
    }
    goto LAB_004b0d0b;
  case 0x24:
    iVar13 = *(int *)(iVar25 + 4 + iVar34 * 0x14);
    *(int *)(unaff_EBP - 200) = iVar13;
    iVar34 = *(int *)(iVar25 + 0xc + iVar34 * 0x14);
    *(int *)(unaff_EBP - 0xc4) = iVar34;
    FUN_0048fe70(*(undefined4 **)(unaff_EBX[4] + 4 + iVar13 * 0x10),iVar34,
                 (undefined4 *)(unaff_EBP - 0xcc));
    iVar34 = *(int *)(unaff_EBP - 0xcc);
    unaff_ESI[4] = iVar34;
    unaff_ESI[5] = iVar34 >> 0x1f;
    goto LAB_004b0d0b;
  case 0x25:
    iVar13 = *(int *)(unaff_EBP - 0xe0);
    *(int *)(unaff_EBP - 0xcc) = *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x10 + unaff_EBX[4];
    iVar13 = iVar13 + *(int *)(iVar25 + 0xc + iVar34 * 0x14) * 0x28;
    FUN_004b7410(iVar13);
    uVar27 = FUN_00492040(*(undefined4 **)(*(int *)(unaff_EBP - 0xcc) + 4),
                          *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar34 * 0x14),
                          *(undefined4 *)(iVar13 + 0x10));
    iVar25 = *(int *)(unaff_EBP - 0xdc);
    *(uint *)(unaff_EBP - 0xd0) = uVar27;
    iVar21 = *(int *)(iVar25 + 8 + iVar34 * 0x14);
    if (iVar21 == 1) {
      **(undefined4 **)(*(int *)(unaff_EBP - 0xcc) + 0xc) = *(undefined4 *)(iVar13 + 0x10);
      unaff_EBX[6] = unaff_EBX[6] | 2;
    }
    else if (iVar21 == 2) {
      *(undefined1 *)(*(int *)(*(int *)(unaff_EBP - 0xcc) + 0xc) + 0x4c) =
           *(undefined1 *)(iVar13 + 0x10);
    }
    if (*(int *)(iVar25 + 4 + iVar34 * 0x14) != 1) goto LAB_004af570;
    FUN_00496370((int)unaff_EBX);
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    puVar18 = (uint *)(*(int *)(unaff_EBP - 0xd4) + 0x60);
    *puVar18 = *puVar18 & 0xffffffdf;
    goto LAB_004b0d0b;
  case 0x26:
    puVar24 = *(undefined4 **)(unaff_EBX[4] + 4 + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x10);
    *(undefined4 **)(unaff_EBP - 0xc4) = puVar24;
    if (puVar24 == (undefined4 *)0x0) {
      iVar13 = 0;
      *(undefined4 *)(unaff_EBP - 0xcc) = 0;
      iVar21 = 0;
    }
    else {
      FUN_0048fe70(puVar24,1,(undefined4 *)(unaff_EBP - 0xcc));
      iVar25 = *(int *)(unaff_EBP - 0xdc);
      iVar13 = *(int *)(unaff_EBP - 0xcc);
      iVar21 = *(int *)(*(int *)(unaff_EBX[4] + 0xc + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x10) +
                       4);
    }
    *(int *)(unaff_EBP - 200) = iVar21;
    if ((iVar13 == *(int *)(iVar25 + 8 + iVar34 * 0x14)) &&
       (iVar21 == *(int *)(iVar25 + 0xc + iVar34 * 0x14))) goto LAB_004b0d0b;
    FUN_00494b00((int)unaff_EBX,*(undefined4 **)(*(int *)(unaff_EBP - 0xd4) + 0x34));
    puVar24 = FUN_00494db0((int)unaff_EBX,"database schema has changed");
    *(undefined4 **)(*(int *)(unaff_EBP - 0xd4) + 0x34) = puVar24;
    iVar34 = *(int *)(*(int *)(unaff_EBP - 0xdc) + 4 + iVar34 * 0x14);
    if (**(int **)(unaff_EBX[4] + 0xc + iVar34 * 0x10) != *(int *)(unaff_EBP - 0xcc)) {
      FUN_004a69a0((int)unaff_EBX,iVar34);
    }
    puVar18 = (uint *)(*(int *)(unaff_EBP - 0xd4) + 0x60);
    *puVar18 = *puVar18 | 0x20;
    uVar27 = 0x11;
    *(undefined4 *)(unaff_EBP - 0xd0) = 0x11;
    goto LAB_004b0d11;
  case 0x27:
  case 0x28:
    if ((*(byte *)(*(int *)(unaff_EBP - 0xd4) + 0x60) & 0x20) == 0) {
      iVar13 = *(int *)(unaff_EBP - 0xe4);
      iVar14 = 0;
      *(undefined4 *)(unaff_EBP - 0xcc) = 0;
      *(undefined4 *)(unaff_EBP - 200) = 0;
      iVar21 = *(int *)(iVar25 + 8 + iVar34 * 0x14);
      *(int *)(unaff_EBP - 0xc4) = iVar21;
      iVar25 = *(int *)(iVar25 + 0xc + iVar34 * 0x14);
      *(int *)(unaff_EBP - 0xc0) = iVar25;
      iVar13 = iVar25 * 0x10 + *(int *)(iVar13 + 0x10);
      *(int *)(unaff_EBP - 0xb0) = iVar13;
      *(undefined4 *)(unaff_EBP - 0xb8) = *(undefined4 *)(iVar13 + 4);
      if (*(char *)(*(int *)(unaff_EBP - 0xdc) + iVar34 * 0x14) == '(') {
        *(undefined4 *)(unaff_EBP - 0xbc) = 1;
        bVar9 = *(byte *)(*(int *)(iVar13 + 0xc) + 0x4c);
        if (bVar9 < *(byte *)(*(int *)(unaff_EBP - 0xd4) + 0x5d)) {
          *(byte *)(*(int *)(unaff_EBP - 0xd4) + 0x5d) = bVar9;
        }
      }
      else {
        *(undefined4 *)(unaff_EBP - 0xbc) = 0;
      }
      if ((*(byte *)(*(int *)(unaff_EBP - 0xdc) + 3 + iVar34 * 0x14) & 2) != 0) {
        iVar25 = *(int *)(unaff_EBP - 0xe0) + iVar21 * 0x28;
        FUN_004b7410(iVar25);
        iVar25 = *(int *)(iVar25 + 0x10);
        *(int *)(unaff_EBP - 0xc4) = iVar25;
        if (iVar25 < 2) {
          uVar26 = FUN_00493af0();
          *(undefined4 *)(unaff_EBP - 0xd0) = uVar26;
          goto LAB_004b5720;
        }
        iVar25 = *(int *)(unaff_EBP - 0xc0);
        iVar14 = *(int *)(unaff_EBP - 0xcc);
      }
      iVar13 = *(int *)(unaff_EBP - 0xdc);
      cVar8 = *(char *)(iVar13 + 1 + iVar34 * 0x14);
      if (cVar8 == -6) {
        iVar25 = *(int *)(iVar13 + 0x10 + iVar34 * 0x14);
        iVar21 = **(int **)(unaff_EBP - 0xd4);
        *(int *)(unaff_EBP - 200) = iVar25;
        *(undefined1 *)(iVar25 + 4) =
             *(undefined1 *)(*(int *)(*(int *)(iVar21 + 0x10) + 0xc) + 0x4d);
        iVar25 = *(int *)(unaff_EBP - 0xc0);
        iVar14 = *(ushort *)(*(int *)(unaff_EBP - 200) + 6) + 1;
LAB_004b20a8:
        *(int *)(unaff_EBP - 0xcc) = iVar14;
      }
      else if (cVar8 == -0xe) {
        iVar14 = *(int *)(iVar13 + 0x10 + iVar34 * 0x14);
        goto LAB_004b20a8;
      }
      puVar24 = FUN_0046c260(*(int **)(unaff_EBP - 0xd4),*(int *)(iVar13 + 4 + iVar34 * 0x14),iVar14
                             ,iVar25,1);
      *(undefined4 **)(unaff_EBP - 0xb4) = puVar24;
      if (puVar24 == (undefined4 *)0x0) goto LAB_004b57a0;
      *(undefined1 *)(puVar24 + 7) = 1;
      *(undefined1 *)(*(int *)(unaff_EBP - 0xb4) + 0x20) = 1;
      uVar26 = FUN_0048f790(*(undefined4 **)(unaff_EBP - 0xb8),*(int *)(unaff_EBP - 0xc4),
                            *(int *)(unaff_EBP - 0xbc),*(int *)(unaff_EBP - 200),
                            (int *)**(undefined4 **)(unaff_EBP - 0xb4));
      iVar25 = *(int *)(unaff_EBP - 0xb4);
      unaff_ESI = *(int **)(unaff_EBP - 0xd8);
      *(undefined4 *)(unaff_EBP - 0xd0) = uVar26;
      *(undefined4 *)(iVar25 + 8) = *(undefined4 *)(unaff_EBP - 200);
      *(byte *)(**(int **)(unaff_EBP - 0xb4) + 0x5d) = *(byte *)(iVar13 + 3 + iVar34 * 0x14) & 1;
      unaff_EBX = *(int **)(unaff_EBP - 0xe4);
      *(bool *)(*(int *)(unaff_EBP - 0xb4) + 0x1e) = *(char *)(iVar13 + 1 + iVar34 * 0x14) != -6;
      *(bool *)(*(int *)(unaff_EBP - 0xb4) + 0x1f) =
           *(char *)(*(int *)(unaff_EBP - 0xb4) + 0x1e) == '\0';
      goto LAB_004b0d0b;
    }
    uVar27 = 4;
    *(undefined4 *)(unaff_EBP - 0xd0) = 4;
    goto LAB_004b0d11;
  case 0x29:
  case 0x2a:
    puVar24 = FUN_0046c260(*(int **)(unaff_EBP - 0xd4),*(int *)(iVar25 + 4 + iVar34 * 0x14),
                           *(int *)(iVar25 + 8 + iVar34 * 0x14),0xffffffff,1);
    *(undefined4 **)(unaff_EBP - 0xcc) = puVar24;
    if (puVar24 == (undefined4 *)0x0) goto LAB_004b57a6;
    *(undefined1 *)(puVar24 + 7) = 1;
    iVar25 = FUN_00490e00((undefined *)*unaff_EBX,(byte *)0x0,(int)unaff_EBX,
                          (undefined4 *)(*(int *)(unaff_EBP - 0xcc) + 4),
                          *(byte *)(*(int *)(unaff_EBP - 0xdc) + 3 + iVar34 * 0x14) | 5,0x41e);
    *(int *)(unaff_EBP - 0xd0) = iVar25;
    if (iVar25 == 0) {
      uVar27 = FUN_0048ed50(*(int **)(*(int *)(unaff_EBP - 0xcc) + 4),1);
      *(uint *)(unaff_EBP - 0xd0) = uVar27;
      if (uVar27 == 0) {
        if (*(int *)(*(int *)(unaff_EBP - 0xdc) + 0x10 + iVar34 * 0x14) == 0) {
          uVar26 = FUN_0048f790((undefined4 *)(*(undefined4 **)(unaff_EBP - 0xcc))[1],1,1,0,
                                (int *)**(undefined4 **)(unaff_EBP - 0xcc));
          *(undefined4 *)(unaff_EBP - 0xd0) = uVar26;
          *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x1e) = 1;
        }
        else {
          pcVar22 = FUN_0048f740(*(undefined4 **)(*(int *)(unaff_EBP - 0xcc) + 4),
                                 (undefined4 *)(unaff_EBP - 0x118),
                                 *(byte *)(*(int *)(unaff_EBP - 0xdc) + 3 + iVar34 * 0x14) | 2);
          *(char **)(unaff_EBP - 0xd0) = pcVar22;
          if (pcVar22 == (char *)0x0) {
            uVar26 = FUN_0048f790((undefined4 *)(*(undefined4 **)(unaff_EBP - 0xcc))[1],
                                  *(int *)(unaff_EBP - 0x118),1,
                                  *(int *)(*(int *)(unaff_EBP - 0xdc) + 0x10 + iVar34 * 0x14),
                                  (int *)**(undefined4 **)(unaff_EBP - 0xcc));
            *(undefined4 *)(unaff_EBP - 0xd0) = uVar26;
            *(undefined4 *)(*(int *)(unaff_EBP - 0xcc) + 8) =
                 *(undefined4 *)(*(int *)(unaff_EBP - 0xdc) + 0x10 + iVar34 * 0x14);
            *(undefined1 *)(*(int *)(*(int *)(unaff_EBP - 0xcc) + 8) + 4) =
                 *(undefined1 *)
                  (*(int *)(*(int *)(**(int **)(unaff_EBP - 0xd4) + 0x10) + 0xc) + 0x4d);
          }
          *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x1e) = 0;
        }
      }
    }
    *(bool *)(*(int *)(unaff_EBP - 0xcc) + 0x20) =
         *(char *)(*(int *)(unaff_EBP - 0xdc) + 3 + iVar34 * 0x14) != '\b';
    *(bool *)(*(int *)(unaff_EBP - 0xcc) + 0x1f) =
         *(char *)(*(int *)(unaff_EBP - 0xcc) + 0x1e) == '\0';
    goto LAB_004b0d0b;
  case 0x2b:
    puVar24 = FUN_0046c260(*(int **)(unaff_EBP - 0xd4),*(int *)(iVar25 + 4 + iVar34 * 0x14),
                           *(int *)(iVar25 + 8 + iVar34 * 0x14),0xffffffff,1);
    *(undefined4 **)(unaff_EBP - 0xcc) = puVar24;
    if (puVar24 == (undefined4 *)0x0) goto LAB_004b57a6;
    puVar24[2] = *(undefined4 *)(*(int *)(unaff_EBP - 0xdc) + 0x10 + iVar34 * 0x14);
    *(undefined1 *)(*(int *)(*(int *)(unaff_EBP - 0xcc) + 8) + 4) =
         *(undefined1 *)(*(int *)(*(int *)(**(int **)(unaff_EBP - 0xd4) + 0x10) + 0xc) + 0x4d);
    *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x21) = 1;
    uVar27 = FUN_004b8e80((int)unaff_EBX,*(int *)(unaff_EBP - 0xcc));
    *(uint *)(unaff_EBP - 0xd0) = uVar27;
    goto LAB_004b0d11;
  case 0x2c:
    puVar24 = FUN_0046c260(*(int **)(unaff_EBP - 0xd4),*(int *)(iVar25 + 4 + iVar34 * 0x14),
                           *(int *)(iVar25 + 0xc + iVar34 * 0x14),0xffffffff,0);
    *(undefined4 **)(unaff_EBP - 0xcc) = puVar24;
    if (puVar24 == (undefined4 *)0x0) goto LAB_004b57a6;
    iVar25 = *(int *)(unaff_EBP - 0xdc);
    *(undefined1 *)(puVar24 + 7) = 1;
    *(undefined4 *)(*(int *)(unaff_EBP - 0xcc) + 0x10) = *(undefined4 *)(iVar25 + 8 + iVar34 * 0x14)
    ;
    *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x1e) = 1;
    *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x1f) = 0;
    *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x22) = *(undefined1 *)(iVar25 + 3 + iVar34 * 0x14)
    ;
    goto LAB_004b0d0b;
  case 0x2d:
    FUN_004b5ff0(*(int **)(unaff_EBP - 0xd4),
                 *(undefined4 **)
                  ((*(int **)(unaff_EBP - 0xd4))[0x10] + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 4));
    *(undefined4 *)
     (*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
     *(int *)(*(int *)(unaff_EBP - 0xdc) + 4 + iVar34 * 0x14) * 4) = 0;
    goto LAB_004b0d0b;
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
    piVar19 = *(int **)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                       *(int *)(iVar25 + 4 + iVar34 * 0x14) * 4);
    *(int **)(unaff_EBP - 0xc4) = piVar19;
    if (*piVar19 == 0) break;
    *(uint *)(unaff_EBP - 200) = (uint)*(byte *)(iVar25 + iVar34 * 0x14);
    *(undefined1 *)(piVar19 + 7) = 0;
    puVar24 = *(undefined4 **)(unaff_EBP - 0xc4);
    if (*(char *)((int)puVar24 + 0x1e) == '\0') {
      *(undefined4 *)(unaff_EBP - 0xa4) = *(undefined4 *)(iVar25 + 0x10 + iVar34 * 0x14);
      *(undefined4 *)(unaff_EBP - 0xbc) = puVar24[2];
      *(undefined2 *)(unaff_EBP - 0xb8) = *(undefined2 *)(unaff_EBP - 0xa4);
      *(byte *)(unaff_EBP - 0xb6) = *(byte *)(unaff_EBP - 200) & 1;
      piVar19 = (int *)(*(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 0xc + iVar34 * 0x14) * 0x28);
      *(int **)(unaff_EBP - 0xac) = piVar19;
      if ((*(ushort *)(piVar19 + 7) & 0x4000) != 0) {
        FUN_004b6fa0(piVar19);
        puVar24 = *(undefined4 **)(unaff_EBP - 0xc4);
      }
      uVar27 = FUN_004908e0((int *)*puVar24,(int *)(unaff_EBP - 0xbc),0,0,0,
                            (uint *)(unaff_EBP - 0xcc));
      *(uint *)(unaff_EBP - 0xd0) = uVar27;
      if (uVar27 != 0) goto LAB_004b572c;
      *(undefined1 *)(*(int *)(unaff_EBP - 0xc4) + 0x19) = 0;
    }
    else {
      iVar25 = *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 0xc + iVar34 * 0x14) * 0x28;
      FUN_0046dfa0(iVar25);
      uVar39 = FUN_004b65e0(iVar25);
      iVar13 = *(int *)(unaff_EBP - 0xc4);
      *(ulonglong *)(unaff_EBP - 0x9c) = uVar39;
      *(undefined1 *)(iVar13 + 0x19) = 0;
      if ((*(ushort *)(iVar25 + 0x1c) & 4) == 0) {
        if ((*(ushort *)(iVar25 + 0x1c) & 8) == 0) {
          unaff_ESI = *(int **)(unaff_EBP - 0xd8);
          iVar34 = *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar34 * 0x14);
          goto LAB_004b0d04;
        }
        if ((*(int *)(unaff_EBP - 0x9c) == 0) && (*(int *)(unaff_EBP - 0x98) == -0x80000000)) {
          dVar2 = *(double *)(iVar25 + 8);
          *(undefined4 *)(unaff_EBP - 0x124) = 0;
          *(undefined4 *)(unaff_EBP - 0x120) = 0x80000000;
          *(double *)(unaff_EBP - 0xf4) = (double)*(longlong *)(unaff_EBP - 0x124);
          *(undefined8 *)(unaff_EBP - 0xf4) = *(undefined8 *)(unaff_EBP - 0xf4);
          if ((dVar2 < *(double *)(unaff_EBP - 0xf4)) || (0.0 < dVar2)) {
            *(undefined4 *)(unaff_EBP - 0xcc) = 1;
            if (0.0 < *(double *)(iVar25 + 8) || *(double *)(iVar25 + 8) == 0.0) {
              if (*(int *)(unaff_EBP - 200) < 0x30) {
                uVar27 = FUN_004906f0((int *)**(undefined4 **)(unaff_EBP - 0xc4),
                                      (undefined4 *)(unaff_EBP - 0xcc));
                goto LAB_004b2547;
              }
            }
            else if (0x2f < *(int *)(unaff_EBP - 200)) {
              uVar27 = FUN_0048fdc0((int *)**(undefined4 **)(unaff_EBP - 0xc4),
                                    (undefined4 *)(unaff_EBP - 0xcc));
LAB_004b2547:
              *(uint *)(unaff_EBP - 0xd0) = uVar27;
              if (uVar27 != 0) goto LAB_004b572c;
              if (*(int *)(unaff_EBP - 0xcc) == 0) goto LAB_004b0616;
              unaff_ESI = *(int **)(unaff_EBP - 0xd8);
              iVar34 = *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar34 * 0x14);
              goto LAB_004b0d04;
            }
LAB_004af55f:
            *(int *)(unaff_EBP - 0xe8) =
                 *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar34 * 0x14) + -1;
            goto LAB_004af570;
          }
        }
        if ((*(int *)(unaff_EBP - 200) == 0x2e) || (*(int *)(unaff_EBP - 200) == 0x30)) {
          *(double *)(unaff_EBP - 0xf4) = (double)*(longlong *)(unaff_EBP - 0x9c);
          dVar2 = *(double *)(iVar25 + 8);
          *(undefined8 *)(unaff_EBP - 0xf4) = *(undefined8 *)(unaff_EBP - 0xf4);
          if (dVar2 < *(double *)(unaff_EBP - 0xf4) || dVar2 == *(double *)(unaff_EBP - 0xf4))
          goto LAB_004b2618;
          uVar27 = *(uint *)(unaff_EBP - 0x9c) + 1;
          iVar25 = *(int *)(unaff_EBP - 0x98) + (uint)(0xfffffffe < *(uint *)(unaff_EBP - 0x9c));
          *(uint *)(unaff_EBP - 0x9c) = uVar27;
          *(int *)(unaff_EBP - 0x98) = iVar25;
        }
        else {
          *(double *)(unaff_EBP - 0xf4) = (double)*(longlong *)(unaff_EBP - 0x9c);
          *(undefined8 *)(unaff_EBP - 0xf4) = *(undefined8 *)(unaff_EBP - 0xf4);
          if (*(double *)(unaff_EBP - 0xf4) < *(double *)(iVar25 + 8) ||
              *(double *)(unaff_EBP - 0xf4) == *(double *)(iVar25 + 8)) goto LAB_004b2618;
          uVar27 = *(int *)(unaff_EBP - 0x9c) - 1;
          iVar25 = *(int *)(unaff_EBP - 0x98) + -1 + (uint)(*(int *)(unaff_EBP - 0x9c) != 0);
          *(uint *)(unaff_EBP - 0x9c) = uVar27;
          *(int *)(unaff_EBP - 0x98) = iVar25;
        }
      }
      else {
LAB_004b2618:
        iVar25 = *(int *)(unaff_EBP - 0x98);
        uVar27 = *(uint *)(unaff_EBP - 0x9c);
      }
      uVar27 = FUN_004908e0((int *)**(undefined4 **)(unaff_EBP - 0xc4),(int *)0x0,uVar27,iVar25,0,
                            (uint *)(unaff_EBP - 0xcc));
      *(uint *)(unaff_EBP - 0xd0) = uVar27;
      if (uVar27 != 0) goto LAB_004b572c;
      if (*(int *)(unaff_EBP - 0xcc) == 0) {
        *(undefined1 *)(*(int *)(unaff_EBP - 0xc4) + 0x19) = 1;
        *(undefined4 *)(*(int *)(unaff_EBP - 0xc4) + 0x40) = *(undefined4 *)(unaff_EBP - 0x9c);
        *(undefined4 *)(*(int *)(unaff_EBP - 0xc4) + 0x44) = *(undefined4 *)(unaff_EBP - 0x98);
      }
    }
    *(undefined1 *)(*(int *)(unaff_EBP - 0xc4) + 0x1d) = 0;
    *(undefined4 *)(*(int *)(unaff_EBP - 0xc4) + 0x50) = 0;
    iVar25 = *(int *)(unaff_EBP - 200);
    iVar13 = *(int *)(unaff_EBP - 0xcc);
    if (iVar25 < 0x30) {
      if ((iVar13 < 1) && ((iVar13 != 0 || (iVar25 != 0x2e)))) {
        uVar27 = (uint)(*(char *)(**(int **)(unaff_EBP - 0xc4) + 0x5b) != '\x01');
        *(uint *)(unaff_EBP - 0xcc) = uVar27;
        bVar11 = uVar27 == 0;
        goto LAB_004b07b5;
      }
      uVar27 = FUN_00491450((int *)**(undefined4 **)(unaff_EBP - 0xc4),
                            (undefined4 *)(unaff_EBP - 0xcc));
    }
    else {
      if ((-1 < iVar13) && ((iVar13 != 0 || (iVar25 != 0x31)))) {
        unaff_ESI = *(int **)(unaff_EBP - 0xd8);
        *(undefined4 *)(unaff_EBP - 0xcc) = 0;
        goto LAB_004b0d0b;
      }
      uVar27 = FUN_00490c90((int *)**(undefined4 **)(unaff_EBP - 0xc4),
                            (undefined4 *)(unaff_EBP - 0xcc));
    }
    *(uint *)(unaff_EBP - 0xd0) = uVar27;
    if (uVar27 == 0) {
      *(undefined1 *)(*(int *)(unaff_EBP - 0xc4) + 0x19) = 0;
      bVar11 = *(int *)(unaff_EBP - 0xcc) == 0;
LAB_004b07b5:
      unaff_ESI = *(int **)(unaff_EBP - 0xd8);
      goto LAB_004b07bb;
    }
    goto LAB_004b572c;
  case 0x32:
    piVar19 = *(int **)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                       *(int *)(iVar25 + 4 + iVar34 * 0x14) * 4);
    *(int **)(unaff_EBP - 0xcc) = piVar19;
    if (*piVar19 != 0) {
      iVar13 = *(int *)(unaff_EBP - 0xe0);
      *(undefined1 *)(piVar19 + 7) = 0;
      uVar39 = FUN_004b65e0(iVar13 + *(int *)(iVar25 + 8 + iVar34 * 0x14) * 0x28);
      *(int *)(*(int *)(unaff_EBP - 0xcc) + 0x38) = (int)uVar39;
      *(int *)(*(int *)(unaff_EBP - 0xcc) + 0x3c) = (int)(uVar39 >> 0x20);
      *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x19) = 0;
      *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x1d) = 1;
    }
    goto LAB_004b0d0b;
  case 0x33:
  case 0x34:
    iVar25 = *(int *)(unaff_EBP - 0xdc);
    iVar21 = 0;
    iVar13 = *(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40);
    *(undefined4 *)(unaff_EBP - 0xcc) = 0;
    piVar19 = *(int **)(iVar13 + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 4);
    *(int **)(unaff_EBP - 200) = piVar19;
    iVar25 = *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 0xc + iVar34 * 0x14) * 0x28;
    if (*piVar19 != 0) {
      iVar13 = *(int *)(unaff_EBP - 0xdc);
      if (*(int *)(iVar13 + 0x10 + iVar34 * 0x14) < 1) {
        puVar24 = FUN_004aebc0((int *)piVar19[2],unaff_EBP - 0x9c,0x97,
                               (undefined4 *)(unaff_EBP - 0xc0));
        *(undefined4 **)(unaff_EBP - 0xbc) = puVar24;
        if (puVar24 == (undefined4 *)0x0) goto LAB_004b57a6;
        FUN_004b8560(*(undefined4 **)(*(int *)(unaff_EBP - 200) + 8),*(int *)(iVar25 + 0x18),
                     *(byte **)(iVar25 + 4),(uint)puVar24);
        pbVar33 = (byte *)(*(int *)(unaff_EBP - 0xbc) + 6);
        *pbVar33 = *pbVar33 | 2;
        piVar29 = *(int **)(unaff_EBP - 0xbc);
        piVar19 = *(int **)(unaff_EBP - 200);
      }
      else {
        *(int *)(unaff_EBP - 0xb4) = piVar19[2];
        *(undefined2 *)(unaff_EBP - 0xb0) = *(undefined2 *)(iVar13 + 0x10 + iVar34 * 0x14);
        piVar29 = (int *)(unaff_EBP - 0xb4);
        *(int *)(unaff_EBP - 0xa4) = iVar25;
        *(undefined1 *)(unaff_EBP - 0xae) = 2;
        *(int **)(unaff_EBP - 0xbc) = piVar29;
      }
      uVar27 = FUN_004908e0((int *)*piVar19,piVar29,0,0,0,(uint *)(unaff_EBP - 0xc4));
      *(uint *)(unaff_EBP - 0xd0) = uVar27;
      if (*(int *)(*(int *)(unaff_EBP - 0xdc) + 0x10 + iVar34 * 0x14) == 0) {
        FUN_00494b00((int)unaff_EBX,*(undefined4 **)(unaff_EBP - 0xc0));
      }
      uVar27 = *(uint *)(unaff_EBP - 0xd0);
      if (uVar27 != 0) goto LAB_004b0616;
      *(uint *)(unaff_EBP - 0xcc) = (uint)(*(int *)(unaff_EBP - 0xc4) == 0);
      *(undefined1 *)(*(int *)(unaff_EBP - 200) + 0x1d) = 0;
      *(undefined4 *)(*(int *)(unaff_EBP - 200) + 0x50) = 0;
      iVar21 = *(int *)(unaff_EBP - 0xcc);
    }
    iVar25 = *(int *)(unaff_EBP - 0xdc);
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    if (*(char *)(iVar25 + iVar34 * 0x14) == '4') {
      if (iVar21 == 0) goto LAB_004b0d0b;
      iVar34 = *(int *)(iVar25 + 8 + iVar34 * 0x14);
    }
    else {
      if (iVar21 != 0) goto LAB_004b0d0b;
      iVar34 = *(int *)(iVar25 + 8 + iVar34 * 0x14);
    }
    goto LAB_004b0d04;
  case 0x35:
    iVar13 = *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 0xc + iVar34 * 0x14) * 0x28;
    *(int *)(unaff_EBP - 0xbc) =
         *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 0x10 + iVar34 * 0x14) * 0x28;
    iVar25 = *(int *)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                     *(int *)(iVar25 + 4 + iVar34 * 0x14) * 4);
    *(int *)(unaff_EBP - 200) = iVar25;
    *(undefined4 *)(iVar25 + 0x4c) = 0;
    *(undefined4 *)(*(int *)(unaff_EBP - 200) + 0x50) = 0;
    puVar24 = *(undefined4 **)(unaff_EBP - 200);
    iVar25 = *(int *)(unaff_EBP - 0xbc);
    uVar26 = *puVar24;
    *(undefined4 *)(unaff_EBP - 0xc4) = uVar26;
    iVar21 = puVar24[2];
    *(undefined4 *)(unaff_EBP - 0xf0) = uVar26;
    uVar4 = *(ushort *)(iVar21 + 6);
    uVar28 = 0;
    *(ushort *)(unaff_EBP - 0xc0) = uVar4;
    *(undefined2 *)(unaff_EBP - 0xcc) = 0;
    if (uVar4 == 0) goto LAB_004b2a6e;
    uVar27 = 0;
    goto LAB_004b2a50;
  case 0x36:
    iVar13 = *(int *)(iVar25 + 0xc + iVar34 * 0x14);
    puVar24 = *(undefined4 **)
               (*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
               *(int *)(iVar25 + 4 + iVar34 * 0x14) * 4);
    *(undefined4 **)(unaff_EBP - 0xcc) = puVar24;
    piVar19 = (int *)*puVar24;
    *(int **)(unaff_EBP - 200) = piVar19;
    if (piVar19 == (int *)0x0) {
      *(int *)(unaff_EBP - 0xe8) = *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar34 * 0x14) + -1;
      unaff_ESI = *(int **)(unaff_EBP - 0xd8);
      puVar24[0x13] = 0;
    }
    else {
      iVar25 = *(int *)(unaff_EBP - 0xe0);
      *(undefined4 *)(unaff_EBP - 0xc4) = 0;
      uVar27 = *(uint *)(iVar25 + 0x10 + iVar13 * 0x28);
      *(uint *)(unaff_EBP - 0xbc) = uVar27;
      iVar25 = *(int *)(iVar25 + 0x14 + iVar13 * 0x28);
      *(int *)(unaff_EBP - 0xb8) = iVar25;
      uVar27 = FUN_004908e0(piVar19,(int *)0x0,uVar27,iVar25,0,(uint *)(unaff_EBP - 0xc4));
      iVar25 = *(int *)(unaff_EBP - 0xe0);
      *(uint *)(unaff_EBP - 0xd0) = uVar27;
      *(undefined4 *)(*(int *)(unaff_EBP - 0xcc) + 0x40) =
           *(undefined4 *)(iVar25 + 0x10 + iVar13 * 0x28);
      unaff_EBX = *(int **)(unaff_EBP - 0xe4);
      *(undefined4 *)(*(int *)(unaff_EBP - 0xcc) + 0x44) =
           *(undefined4 *)(iVar25 + 0x14 + iVar13 * 0x28);
      *(bool *)(*(int *)(unaff_EBP - 0xcc) + 0x19) = *(int *)(unaff_EBP - 0xc4) == 0;
      *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x1c) = 0;
      *(undefined4 *)(*(int *)(unaff_EBP - 0xcc) + 0x50) = 0;
      *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x1d) = 0;
      iVar25 = *(int *)(unaff_EBP - 0xc4);
      if (iVar25 != 0) {
        *(int *)(unaff_EBP - 0xe8) = *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar34 * 0x14) + -1;
      }
      unaff_ESI = *(int **)(unaff_EBP - 0xd8);
      *(int *)(*(int *)(unaff_EBP - 0xcc) + 0x4c) = iVar25;
    }
    goto LAB_004b0d0b;
  case 0x37:
    iVar13 = *(int *)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                     *(int *)(iVar25 + 4 + iVar34 * 0x14) * 4);
    unaff_ESI[4] = *(int *)(iVar13 + 0x30);
    unaff_ESI[5] = *(int *)(iVar13 + 0x34);
    iVar34 = *(int *)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                     *(int *)(iVar25 + 4 + iVar34 * 0x14) * 4);
    puVar18 = (uint *)(iVar34 + 0x30);
    uVar27 = *puVar18;
    *puVar18 = *puVar18 + 1;
    piVar19 = (int *)(iVar34 + 0x34);
    *piVar19 = *piVar19 + (uint)(0xfffffffe < uVar27);
    goto LAB_004b0d0b;
  case 0x38:
    iVar13 = *(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40);
    *(undefined8 *)(unaff_EBP - 0xcc) = 0;
    *(undefined4 *)(unaff_EBP - 0xc0) = 0;
    piVar19 = *(int **)(iVar13 + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 4);
    *(int **)(unaff_EBP - 0xc4) = piVar19;
    iVar25 = *piVar19;
    if (iVar25 == 0) goto LAB_004b2ff3;
    if (*(char *)((int)piVar19 + 0x1b) != '\0') goto LAB_004b2ed4;
    uVar27 = *(uint *)(iVar25 + 0x20);
    *(uint *)(unaff_EBP - 0xcc) = uVar27;
    iVar25 = *(int *)(iVar25 + 0x24);
    *(int *)(unaff_EBP - 200) = iVar25;
    if (uVar27 == 0 && iVar25 == 0) {
      uVar27 = FUN_004906f0((int *)*piVar19,(undefined4 *)(unaff_EBP - 0xc0));
      *(uint *)(unaff_EBP - 0xd0) = uVar27;
      if (uVar27 != 0) goto LAB_004b572c;
      if (*(int *)(unaff_EBP - 0xc0) == 0) {
        uVar26 = FUN_004906b0(**(int **)(unaff_EBP - 0xc4),(undefined4 *)(unaff_EBP - 0xcc));
        iVar25 = *(int *)(unaff_EBP - 200);
        uVar27 = *(uint *)(unaff_EBP - 0xcc);
        *(undefined4 *)(unaff_EBP - 0xd0) = uVar26;
        if ((iVar25 < 0x7fffffff) || (uVar27 != 0xffffffff)) {
          iVar25 = iVar25 + (uint)(0xfffffffe < uVar27);
          goto LAB_004b2d88;
        }
        *(undefined1 *)(*(int *)(unaff_EBP - 0xc4) + 0x1b) = 1;
        iVar25 = *(int *)(unaff_EBP - 200);
        uVar27 = *(uint *)(unaff_EBP - 0xcc);
      }
      else {
        iVar25 = 0;
        uVar27 = 0;
LAB_004b2d88:
        uVar27 = uVar27 + 1;
        *(int *)(unaff_EBP - 200) = iVar25;
        *(uint *)(unaff_EBP - 0xcc) = uVar27;
      }
      piVar19 = *(int **)(unaff_EBP - 0xc4);
    }
    iVar13 = *(int *)(*(int *)(unaff_EBP - 0xdc) + 0xc + iVar34 * 0x14);
    if (iVar13 == 0) goto LAB_004b2e8a;
    iVar25 = *(int *)(*(int *)(unaff_EBP - 0xd4) + 0xa0);
    if (iVar25 == 0) {
      iVar34 = *(int *)(unaff_EBP - 0xe0) + iVar13 * 0x28;
    }
    else {
      *(int *)(unaff_EBP - 0xb4) = iVar25;
      for (iVar13 = *(int *)(iVar25 + 4); iVar13 != 0; iVar13 = *(int *)(iVar13 + 4)) {
        *(int *)(unaff_EBP - 0xb4) = iVar13;
        iVar25 = iVar13;
      }
      iVar34 = *(int *)(iVar25 + 0xc) +
               *(int *)(*(int *)(unaff_EBP - 0xdc) + 0xc + iVar34 * 0x14) * 0x28;
    }
    *(int *)(unaff_EBP - 0xb8) = iVar34;
    FUN_004b7410(iVar34);
    iVar34 = *(int *)(unaff_EBP - 0xb8);
    uVar27 = *(uint *)(iVar34 + 0x10);
    if (((uVar27 == 0xffffffff) && (*(int *)(iVar34 + 0x14) == 0x7fffffff)) ||
       (*(char *)(*(int *)(unaff_EBP - 0xc4) + 0x1b) != '\0')) {
LAB_004b573f:
      uVar27 = 0xd;
      *(undefined4 *)(unaff_EBP - 0xd0) = 0xd;
LAB_004b572c:
      if ((char)unaff_EBX[0xe] == '\0') {
        if (uVar27 != 0xc0a) goto LAB_004b5753;
      }
      else {
        uVar27 = 7;
        *(undefined4 *)(unaff_EBP - 0xd0) = 7;
LAB_004b5753:
        FUN_004961c0(uVar27);
        FUN_004a9a30((int *)(*(int *)(unaff_EBP - 0xd4) + 0x34),(int)unaff_EBX,&DAT_0056de50);
        uVar27 = *(uint *)(unaff_EBP - 0xd0);
      }
      goto LAB_004b57cd;
    }
    uVar31 = uVar27 + 1;
    iVar25 = *(int *)(iVar34 + 0x14) + (uint)(0xfffffffe < uVar27);
    if (iVar25 < *(int *)(unaff_EBP - 200)) {
      uVar27 = *(uint *)(unaff_EBP - 0xcc);
    }
    else if ((*(int *)(unaff_EBP - 200) < iVar25) ||
            (uVar27 = *(uint *)(unaff_EBP - 0xcc), *(uint *)(unaff_EBP - 0xcc) < uVar31)) {
      *(uint *)(unaff_EBP - 0xcc) = uVar31;
      *(int *)(unaff_EBP - 200) = iVar25;
      uVar27 = uVar31;
    }
    *(uint *)(iVar34 + 0x10) = uVar27;
    *(undefined4 *)(iVar34 + 0x14) = *(undefined4 *)(unaff_EBP - 200);
    piVar19 = *(int **)(unaff_EBP - 0xc4);
    iVar25 = *(int *)(unaff_EBP - 200);
    uVar27 = *(uint *)(unaff_EBP - 0xcc);
LAB_004b2e8a:
    if ((iVar25 < 0x7fffffff) || (uVar27 != 0xffffffff)) {
      iVar34 = uVar27 + 1;
      iVar25 = iVar25 + (uint)(0xfffffffe < uVar27);
    }
    else {
      *(undefined8 *)(unaff_EBP - 300) = 0;
      iVar25 = *(int *)(unaff_EBP - 0x128);
      iVar34 = *(int *)(unaff_EBP - 300);
    }
    FUN_00491bc0(*piVar19,iVar34,iVar25);
    piVar19 = *(int **)(unaff_EBP - 0xc4);
    if (*(char *)((int)piVar19 + 0x1b) != '\0') {
LAB_004b2ed4:
      uVar27 = *(uint *)(unaff_EBP - 0x100) + 1;
      iVar34 = (*(uint *)(unaff_EBP - 0xfc) & 0x3fffffff) +
               (uint)(0xfffffffe < *(uint *)(unaff_EBP - 0x100));
      *(uint *)(unaff_EBP - 0xcc) = uVar27;
      *(int *)(unaff_EBP - 200) = iVar34;
      *(undefined4 *)(unaff_EBP - 0xbc) = 0;
      uVar27 = FUN_004908e0((int *)*piVar19,(int *)0x0,uVar27,iVar34,0,(uint *)(unaff_EBP - 0xc0));
      *(uint *)(unaff_EBP - 0xd0) = uVar27;
      while (uVar27 == 0) {
        iVar34 = *(int *)(unaff_EBP - 0xc0);
        if ((iVar34 != 0) ||
           (iVar25 = *(int *)(unaff_EBP - 0xbc) + 1, *(int *)(unaff_EBP - 0xbc) = iVar25,
           99 < iVar25)) {
          if (iVar34 == 0) goto LAB_004b573f;
          break;
        }
        FUN_00466fa0(8,(undefined1 *)(unaff_EBP - 0xcc));
        uVar27 = *(uint *)(unaff_EBP - 0xcc);
        if (*(int *)(unaff_EBP - 0xbc) < 5) {
          uVar27 = uVar27 & 0xffffff;
          uVar31 = 0;
        }
        else {
          uVar31 = *(uint *)(unaff_EBP - 200) & 0x3fffffff;
        }
        iVar34 = uVar31 + (0xfffffffe < uVar27);
        *(uint *)(unaff_EBP - 0xcc) = uVar27 + 1;
        puVar24 = *(undefined4 **)(unaff_EBP - 0xc4);
        *(int *)(unaff_EBP - 200) = iVar34;
        uVar27 = FUN_004908e0((int *)*puVar24,(int *)0x0,uVar27 + 1,iVar34,0,
                              (uint *)(unaff_EBP - 0xc0));
        *(uint *)(unaff_EBP - 0xd0) = uVar27;
      }
      piVar19 = *(int **)(unaff_EBP - 0xc4);
    }
    *(undefined1 *)((int)piVar19 + 0x19) = 0;
    *(undefined1 *)(*(int *)(unaff_EBP - 0xc4) + 0x1d) = 0;
    *(undefined4 *)(*(int *)(unaff_EBP - 0xc4) + 0x50) = 0;
LAB_004b2ff3:
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    unaff_ESI[4] = *(int *)(unaff_EBP - 0xcc);
    unaff_ESI[5] = *(int *)(unaff_EBP - 200);
    goto LAB_004b0d0b;
  case 0x39:
  case 0x3a:
    iVar13 = *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 8 + iVar34 * 0x14) * 0x28;
    iVar21 = *(int *)(unaff_EBP - 0xd4);
    *(int *)(unaff_EBP - 0xcc) = iVar13;
    piVar19 = *(int **)(*(int *)(iVar21 + 0x40) + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 4);
    *(int **)(unaff_EBP - 0xbc) = piVar19;
    iVar21 = *(int *)(iVar25 + 0xc + iVar34 * 0x14);
    if (*(char *)(iVar25 + iVar34 * 0x14) == '9') {
      iVar25 = *(int *)(unaff_EBP - 0xe0) + iVar21 * 0x28;
      *(int *)(unaff_EBP - 200) = iVar25;
      iVar21 = *(int *)(iVar25 + 0x10);
      *(int *)(unaff_EBP - 0xc4) = iVar21;
      iVar25 = *(int *)(iVar25 + 0x14);
    }
    else {
      iVar25 = iVar21 >> 0x1f;
      *(int *)(unaff_EBP - 0xc4) = iVar21;
    }
    iVar14 = *(int *)(unaff_EBP - 0xdc);
    *(int *)(unaff_EBP - 0xc0) = iVar25;
    if ((*(byte *)(iVar14 + 3 + iVar34 * 0x14) & 1) != 0) {
      piVar29 = (int *)(*(int *)(unaff_EBP - 0xd4) + 100);
      *piVar29 = *piVar29 + 1;
      iVar14 = *(int *)(unaff_EBP - 0xdc);
    }
    if ((*(byte *)(iVar14 + 3 + iVar34 * 0x14) & 2) != 0) {
      *(int *)(unaff_EBP - 0xfc) = iVar25;
      iVar25 = *(int *)(unaff_EBP - 0xe4);
      *(int *)(unaff_EBP - 0x100) = iVar21;
      *(int *)(iVar25 + 0x20) = iVar21;
      *(undefined4 *)(iVar25 + 0x24) = *(undefined4 *)(unaff_EBP - 0xc0);
      piVar19 = *(int **)(unaff_EBP - 0xbc);
      iVar13 = *(int *)(unaff_EBP - 0xcc);
    }
    if ((*(byte *)(iVar13 + 0x1c) & 1) != 0) {
      *(undefined4 *)(iVar13 + 4) = 0;
      *(undefined4 *)(*(int *)(unaff_EBP - 0xcc) + 0x18) = 0;
      piVar19 = *(int **)(unaff_EBP - 0xbc);
      iVar13 = *(int *)(unaff_EBP - 0xcc);
    }
    if ((*(byte *)(*(int *)(unaff_EBP - 0xdc) + 3 + iVar34 * 0x14) & 0x10) == 0) {
      *(undefined4 *)(unaff_EBP - 0xb4) = 0;
    }
    else {
      *(int *)(unaff_EBP - 0xb4) = piVar19[0x13];
    }
    if ((*(ushort *)(iVar13 + 0x1c) & 0x4000) == 0) {
      *(undefined4 *)(unaff_EBP - 0xb8) = 0;
    }
    else {
      *(undefined4 *)(unaff_EBP - 0xb8) = *(undefined4 *)(iVar13 + 0x10);
    }
    FUN_00491bc0(*piVar19,0,0);
    iVar25 = *(int *)(unaff_EBP - 0xdc);
    puVar18 = FUN_0048ffe0((uint *)**(undefined4 **)(unaff_EBP - 0xbc),(byte *)0x0,
                           *(uint *)(unaff_EBP - 0xc4),*(uint *)(unaff_EBP - 0xc0),
                           *(void **)(*(int *)(unaff_EBP - 0xcc) + 4),
                           *(size_t *)(*(int *)(unaff_EBP - 0xcc) + 0x18),
                           *(size_t *)(unaff_EBP - 0xb8),*(byte *)(iVar25 + 3 + iVar34 * 0x14) & 8,
                           *(uint **)(unaff_EBP - 0xb4));
    *(undefined1 *)(*(int *)(unaff_EBP - 0xbc) + 0x19) = 0;
    iVar13 = *(int *)(unaff_EBP - 0xbc);
    *(uint **)(unaff_EBP - 0xd0) = puVar18;
    *(undefined1 *)(iVar13 + 0x1d) = 0;
    unaff_EBX = *(int **)(unaff_EBP - 0xe4);
    *(undefined4 *)(*(int *)(unaff_EBP - 0xbc) + 0x50) = 0;
    if (((puVar18 != (uint *)0x0) || (unaff_EBX[0x2f] == 0)) ||
       (*(int *)(iVar25 + 0x10 + iVar34 * 0x14) == 0)) goto LAB_004af570;
    uVar26 = *(undefined4 *)(unaff_EBP - 0xc4);
    uVar6 = *(undefined4 *)(unaff_EBX[4] + *(int *)(*(int *)(unaff_EBP - 0xbc) + 0xc) * 0x10);
    *(undefined4 *)(unaff_EBP - 0xb0) = uVar6;
    uVar7 = *(undefined4 *)(iVar25 + 0x10 + iVar34 * 0x14);
    *(undefined4 *)(unaff_EBP - 0xac) = uVar7;
    uVar16 = 0x12;
    if ((*(byte *)(iVar25 + 3 + iVar34 * 0x14) & 4) != 0) {
      uVar16 = 0x17;
    }
    *(undefined4 *)(unaff_EBP - 0xa8) = uVar16;
    (*(code *)unaff_EBX[0x2f])(unaff_EBX[0x2e],uVar16,uVar6,uVar7,uVar26);
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    goto LAB_004b0d0b;
  case 0x3b:
    iVar13 = *(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40);
    *(undefined8 *)(unaff_EBP - 0xcc) = 0;
    puVar24 = *(undefined4 **)(iVar13 + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 4);
    *(undefined4 **)(unaff_EBP - 0xc4) = puVar24;
    if ((unaff_EBX[0x2f] != 0) && (*(int *)(iVar25 + 0x10 + iVar34 * 0x14) != 0)) {
      *(undefined4 *)(unaff_EBP - 0xcc) = puVar24[0x10];
      *(undefined4 *)(unaff_EBP - 200) = puVar24[0x11];
    }
    uVar27 = FUN_004af1b0(puVar24);
    *(uint *)(unaff_EBP - 0xd0) = uVar27;
    if (uVar27 != 0) goto LAB_004b572c;
    FUN_00491bc0(**(int **)(unaff_EBP - 0xc4),0,0);
    uVar27 = FUN_0048f930((uint *)**(undefined4 **)(unaff_EBP - 0xc4));
    *(uint *)(unaff_EBP - 0xd0) = uVar27;
    iVar25 = *(int *)(unaff_EBP - 0xd0);
    *(undefined4 *)(*(int *)(unaff_EBP - 0xc4) + 0x50) = 0;
    if (((iVar25 == 0) && ((code *)unaff_EBX[0x2f] != (code *)0x0)) &&
       (iVar25 = *(int *)(*(int *)(unaff_EBP - 0xdc) + 0x10 + iVar34 * 0x14), iVar25 != 0)) {
      (*(code *)unaff_EBX[0x2f])
                (unaff_EBX[0x2e],9,
                 *(undefined4 *)(unaff_EBX[4] + *(int *)(*(int *)(unaff_EBP - 0xc4) + 0xc) * 0x10),
                 iVar25,*(undefined4 *)(unaff_EBP - 0xcc));
    }
    if ((*(byte *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar34 * 0x14) & 1) != 0) {
      piVar19 = (int *)(*(int *)(unaff_EBP - 0xd4) + 100);
      *piVar19 = *piVar19 + 1;
    }
    goto LAB_004b0d0b;
  case 0x3c:
    iVar34 = *(int *)(*(int *)(unaff_EBP - 0xd4) + 100);
    unaff_EBX[0x13] = unaff_EBX[0x13] + iVar34;
    unaff_EBX[0x12] = iVar34;
    *(undefined4 *)(*(int *)(unaff_EBP - 0xd4) + 100) = 0;
    goto LAB_004b0d0b;
  case 0x3d:
    iVar13 = *(int *)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                     *(int *)(iVar25 + 4 + iVar34 * 0x14) * 4);
    *(int *)(unaff_EBP - 0xcc) = iVar13;
    uVar27 = FUN_004b8dd0(iVar13,*(int *)(unaff_EBP - 0xe0) +
                                 *(int *)(iVar25 + 0xc + iVar34 * 0x14) * 0x28,
                          (uint *)(unaff_EBP - 200));
    iVar25 = *(int *)(unaff_EBP - 200);
    *(uint *)(unaff_EBP - 0xd0) = uVar27;
    if (iVar25 != 0) {
      iVar34 = *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar34 * 0x14);
      goto LAB_004b0d04;
    }
    goto LAB_004b0d11;
  case 0x3e:
    unaff_ESI = (int *)(*(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 8 + iVar34 * 0x14) * 0x28);
    iVar34 = *(int *)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                     *(int *)(iVar25 + 4 + iVar34 * 0x14) * 4);
    *(int **)(unaff_EBP - 0xd8) = unaff_ESI;
    *(int *)(unaff_EBP - 0xcc) = iVar34;
    uVar27 = FUN_004b92e0(iVar34,unaff_ESI);
    *(uint *)(unaff_EBP - 0xd0) = uVar27;
    goto LAB_004b0d11;
  case 0x3f:
  case 0x40:
    iVar13 = *(int *)(iVar25 + 4 + iVar34 * 0x14);
    *(int *)(unaff_EBP - 0xd8) =
         *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 8 + iVar34 * 0x14) * 0x28;
    puVar24 = *(undefined4 **)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) + iVar13 * 4);
    *(undefined4 **)(unaff_EBP - 0xcc) = puVar24;
    *(undefined4 *)(unaff_EBP - 200) = *puVar24;
    uVar27 = FUN_004af1b0(puVar24);
    *(uint *)(unaff_EBP - 0xd0) = uVar27;
    if (uVar27 != 0) goto LAB_004b572c;
    if (*(char *)(*(int *)(unaff_EBP - 0xcc) + 0x1f) == '\0') {
      FUN_0048f8d0(*(int *)(unaff_EBP - 200),(undefined4 *)(unaff_EBP - 0xc4));
      uVar27 = *(uint *)(unaff_EBP - 0xc4);
      if ((uint)unaff_EBX[0x14] < uVar27) goto LAB_004b5780;
    }
    else {
      FUN_004906b0(*(int *)(unaff_EBP - 200),(undefined4 *)(unaff_EBP - 0xbc));
      iVar34 = unaff_EBX[0x14] >> 0x1f;
      if ((iVar34 < *(int *)(unaff_EBP - 0xb8)) ||
         ((uVar27 = *(uint *)(unaff_EBP - 0xbc), iVar34 <= *(int *)(unaff_EBP - 0xb8) &&
          ((uint)unaff_EBX[0x14] < uVar27)))) goto LAB_004b5780;
      *(uint *)(unaff_EBP - 0xc4) = uVar27;
    }
    piVar19 = *(int **)(unaff_EBP - 0xd8);
    iVar34 = FUN_004b7260(piVar19,uVar27,0);
    if (iVar34 != 0) goto LAB_004b57a6;
    piVar19[6] = *(int *)(unaff_EBP - 0xc4);
    *(ushort *)(piVar19 + 7) = *(ushort *)(piVar19 + 7) & 0xbe10 | 0x10;
    if (*(char *)(*(int *)(unaff_EBP - 0xcc) + 0x1f) == '\0') {
      uVar27 = FUN_0048f870(*(int **)(unaff_EBP - 200),0,*(size_t *)(unaff_EBP - 0xc4),
                            (void *)piVar19[1]);
      unaff_ESI = *(int **)(unaff_EBP - 0xd8);
      *(uint *)(unaff_EBP - 0xd0) = uVar27;
      *(undefined1 *)((int)piVar19 + 0x1f) = 1;
    }
    else {
      uVar27 = FUN_0046b2f0(*(int *)(unaff_EBP - 200),0,*(size_t *)(unaff_EBP - 0xc4),
                            (void *)piVar19[1],0);
      *(uint *)(unaff_EBP - 0xd0) = uVar27;
      *(undefined1 *)((int)piVar19 + 0x1f) = 1;
      unaff_ESI = piVar19;
    }
    goto LAB_004b0d11;
  case 0x41:
    puVar24 = *(undefined4 **)
               (*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
               *(int *)(iVar25 + 4 + iVar34 * 0x14) * 4);
    *(undefined4 **)(unaff_EBP - 0xcc) = puVar24;
    if (*(char *)(puVar24 + 7) != '\0') {
      *(undefined2 *)(unaff_ESI + 7) = 1;
      goto LAB_004b0d0b;
    }
    if (*(char *)((int)puVar24 + 0x1d) != '\0') {
      *(undefined4 *)(unaff_EBP - 0xc4) = puVar24[0xe];
      *(undefined4 *)(unaff_EBP - 0xc0) = puVar24[0xf];
      unaff_ESI[4] = *(int *)(unaff_EBP - 0xc4);
      unaff_ESI[5] = *(int *)(unaff_EBP - 0xc0);
      goto LAB_004b0d0b;
    }
    if ((undefined4 *)puVar24[9] == (undefined4 *)0x0) {
      uVar27 = FUN_004af1b0(puVar24);
      *(uint *)(unaff_EBP - 0xd0) = uVar27;
      if (uVar27 != 0) goto LAB_004b572c;
      piVar19 = *(int **)(unaff_EBP - 0xcc);
      if (*(char *)((int)piVar19 + 0x19) == '\0') {
        uVar26 = FUN_004906b0(*piVar19,(undefined4 *)(unaff_EBP - 0xc4));
        *(undefined4 *)(unaff_EBP - 0xd0) = uVar26;
        unaff_ESI[4] = *(int *)(unaff_EBP - 0xc4);
        unaff_ESI[5] = *(int *)(unaff_EBP - 0xc0);
      }
      else {
        *(int *)(unaff_EBP - 0xc4) = piVar19[0x10];
        *(int *)(unaff_EBP - 0xc0) = piVar19[0x11];
        unaff_ESI[4] = *(int *)(unaff_EBP - 0xc4);
        unaff_ESI[5] = *(int *)(unaff_EBP - 0xc0);
      }
    }
    else {
      piVar19 = *(int **)puVar24[9];
      *(int **)(unaff_EBP - 0xbc) = piVar19;
      iVar34 = *piVar19;
      *(int *)(unaff_EBP - 0xb8) = iVar34;
      uVar26 = (**(code **)(iVar34 + 0x30))(puVar24[9]);
      iVar34 = *(int *)(unaff_EBP - 0xbc);
      *(undefined4 *)(unaff_EBP - 0xd0) = uVar26;
      FUN_0047e200(*(int **)(unaff_EBP - 0xd4),iVar34);
      unaff_ESI[4] = *(int *)(unaff_EBP - 0xc4);
      unaff_ESI[5] = *(int *)(unaff_EBP - 0xc0);
    }
    goto LAB_004b0d0b;
  case 0x42:
    iVar34 = *(int *)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                     *(int *)(iVar25 + 4 + iVar34 * 0x14) * 4);
    *(int *)(unaff_EBP - 0xcc) = iVar34;
    *(undefined1 *)(iVar34 + 0x1c) = 1;
    *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x19) = 0;
    if (**(int **)(unaff_EBP - 0xcc) != 0) {
      FUN_0048efd0(**(int **)(unaff_EBP - 0xcc));
    }
    goto LAB_004b0d0b;
  case 0x43:
    puVar24 = *(undefined4 **)
               (*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
               *(int *)(iVar25 + 4 + iVar34 * 0x14) * 4);
    *(undefined4 **)(unaff_EBP - 0xcc) = puVar24;
    piVar19 = (int *)*puVar24;
    *(int **)(unaff_EBP - 200) = piVar19;
    *(undefined4 *)(unaff_EBP - 0xc4) = 0;
    if (piVar19 != (int *)0x0) {
      iVar13 = FUN_004906f0(piVar19,(undefined4 *)(unaff_EBP - 0xc4));
      puVar24 = *(undefined4 **)(unaff_EBP - 0xcc);
      iVar25 = *(int *)(unaff_EBP - 0xdc);
      *(int *)(unaff_EBP - 0xd0) = iVar13;
    }
    *(undefined1 *)(puVar24 + 7) = *(undefined1 *)(unaff_EBP - 0xc4);
    *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x1d) = 0;
    *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x19) = 0;
    *(undefined4 *)(*(int *)(unaff_EBP - 0xcc) + 0x50) = 0;
    iVar34 = *(int *)(iVar25 + 8 + iVar34 * 0x14);
    if ((iVar34 < 1) || (*(int *)(unaff_EBP - 0xc4) == 0)) goto LAB_004b0d0b;
    goto LAB_004b0d04;
  case 0x44:
  case 0x45:
    iVar13 = *(int *)(iVar25 + 4 + iVar34 * 0x14);
    iVar21 = *(int *)(unaff_EBP - 0xe0);
    if ((*(byte *)(iVar21 + 0x1c + iVar13 * 0x28) & 1) == 0) {
      uVar39 = FUN_004b65e0(iVar21 + iVar13 * 0x28);
      iVar25 = *(int *)(unaff_EBP - 0xdc);
      if (uVar39 == 0) {
        iVar13 = 0;
      }
      else {
        iVar13 = 1;
      }
    }
    else {
      iVar13 = 2;
    }
    *(int *)(unaff_EBP - 0xcc) = iVar13;
    iVar14 = *(int *)(iVar25 + 8 + iVar34 * 0x14);
    if ((*(byte *)(iVar21 + 0x1c + iVar14 * 0x28) & 1) == 0) {
      uVar39 = FUN_004b65e0(iVar21 + iVar14 * 0x28);
      iVar13 = *(int *)(unaff_EBP - 0xcc);
      iVar25 = *(int *)(unaff_EBP - 0xdc);
      if (uVar39 == 0) {
        iVar14 = 0;
      }
      else {
        iVar14 = 1;
      }
    }
    else {
      iVar14 = 2;
    }
    *(int *)(unaff_EBP - 200) = iVar14;
    iVar14 = iVar14 + iVar13 * 2;
    if (*(char *)(iVar25 + iVar34 * 0x14) == 'E') {
      bVar9 = (&UNK_0056a1cc)[iVar14 + iVar13];
    }
    else {
      bVar9 = (&UNK_0056a284)[iVar14 + iVar13];
    }
    uVar27 = (uint)bVar9;
    *(uint *)(unaff_EBP - 0xcc) = uVar27;
    unaff_ESI = (int *)(iVar21 + *(int *)(iVar25 + 0xc + iVar34 * 0x14) * 0x28);
    *(int **)(unaff_EBP - 0xd8) = unaff_ESI;
    if (uVar27 == 2) {
      *(ushort *)(unaff_ESI + 7) = *(ushort *)(unaff_ESI + 7) & 0xbe01 | 1;
    }
    else {
      unaff_ESI[4] = uVar27;
      unaff_ESI[5] = 0;
      *(ushort *)(unaff_ESI + 7) = *(ushort *)(unaff_ESI + 7) & 0xbe04 | 4;
    }
    goto LAB_004b0d0b;
  case 0x46:
  case 0x47:
    iVar13 = *(int *)(unaff_EBP - 0xd4);
    *(int *)(iVar13 + 0x78) = *(int *)(iVar13 + 0x78) + 1;
    goto LAB_004b3746;
  case 0x48:
    iVar13 = *(int *)(unaff_EBP - 0xd4);
LAB_004b3746:
    puVar24 = *(undefined4 **)(*(int *)(iVar13 + 0x40) + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 4);
    *(undefined4 **)(unaff_EBP - 0xcc) = puVar24;
    *(undefined4 *)(unaff_EBP - 0xc4) = 1;
    if (puVar24[0x12] == 0) {
      piVar19 = (int *)*puVar24;
      *(int **)(unaff_EBP - 200) = piVar19;
      uVar26 = FUN_0048fdc0(piVar19,(uint *)(unaff_EBP - 0xc4));
      *(undefined4 *)(unaff_EBP - 0xd0) = uVar26;
      *(bool *)(*(int *)(unaff_EBP - 0xcc) + 0x1a) = *(int *)(unaff_EBP - 0xc4) == 0;
      *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x1d) = 0;
      *(undefined4 *)(*(int *)(unaff_EBP - 0xcc) + 0x50) = 0;
      *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x19) = 0;
      *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x1c) = *(undefined1 *)(unaff_EBP - 0xc4);
      bVar11 = *(int *)(unaff_EBP - 0xc4) == 0;
    }
    else {
      uVar26 = FUN_004b9000(unaff_EBX,(int)puVar24,(uint *)(unaff_EBP - 0xc4));
      uVar10 = *(undefined1 *)(unaff_EBP - 0xc4);
      *(undefined4 *)(unaff_EBP - 0xd0) = uVar26;
      *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x1c) = uVar10;
      bVar11 = *(int *)(unaff_EBP - 0xc4) == 0;
    }
LAB_004b07bb:
    if (bVar11) goto LAB_004b0d0b;
    iVar34 = *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar34 * 0x14);
    goto LAB_004b0d04;
  case 0x49:
    if ((*(byte *)(*(int *)(unaff_EBP - 0xe0) + 0x1c + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x28)
        & 1) == 0) goto LAB_004b0d0b;
    break;
  case 0x4a:
    bVar11 = (*(byte *)(*(int *)(unaff_EBP - 0xe0) + 0x1c +
                       *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x28) & 1) == 0;
    goto LAB_004b0cfe;
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
    piVar19 = (int *)(*(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x28);
    piVar29 = (int *)(*(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 0xc + iVar34 * 0x14) * 0x28);
    *(short *)(unaff_EBP - 0xc6) = (short)piVar19[7];
    uVar4 = *(ushort *)(piVar29 + 7);
    bVar9 = *(byte *)(unaff_EBP - 0xc6);
    *(ushort *)(unaff_EBP - 0xc4) = uVar4;
    bVar3 = *(byte *)(*(int *)(unaff_EBP - 0xdc) + 3 + iVar34 * 0x14);
    if ((((byte)uVar4 | bVar9) & 1) == 0) {
      *(byte *)(unaff_EBP - 200) = bVar3 & 0x67;
      if ((bVar3 & 0x67) != 0) {
        FUN_004ae250(piVar19,(char)*(undefined4 *)(unaff_EBP - 200),
                     (byte)*(undefined4 *)(unaff_EBP - 0xec));
        FUN_004ae250(piVar29,(char)*(undefined4 *)(unaff_EBP - 200),
                     (byte)*(undefined4 *)(unaff_EBP - 0xec));
        unaff_EBX = *(int **)(unaff_EBP - 0xe4);
        if ((char)unaff_EBX[0xe] != '\0') goto LAB_004b57a6;
      }
      if ((*(ushort *)(piVar19 + 7) & 0x4000) != 0) {
        FUN_004b6fa0(piVar19);
      }
      if ((*(ushort *)(piVar29 + 7) & 0x4000) != 0) {
        FUN_004b6fa0(piVar29);
      }
      uVar27 = FUN_004a0720((undefined8 *)piVar29,(undefined8 *)piVar19,
                            *(int *)(*(int *)(unaff_EBP - 0xdc) + 0x10 + iVar34 * 0x14));
    }
    else {
      if (-1 < (char)bVar3) {
        unaff_EBX = *(int **)(unaff_EBP - 0xe4);
        if ((bVar3 & 0x10) == 0) {
          bVar11 = (bVar3 & 8) == 0;
          goto LAB_004b07b5;
        }
        unaff_ESI = (int *)(*(int *)(unaff_EBP - 0xe0) +
                           *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar34 * 0x14) * 0x28);
        uVar4 = *(ushort *)(unaff_ESI + 7);
        *(int **)(unaff_EBP - 0xd8) = unaff_ESI;
        *(ushort *)(unaff_ESI + 7) = uVar4 & 0xbe01 | 1;
        goto LAB_004b0d0b;
      }
      if ((((bVar9 & 1) == 0) || ((uVar4 & 1) == 0)) || ((*(uint *)(unaff_EBP - 0xc4) & 0x100) != 0)
         ) {
        uVar27 = 1;
      }
      else {
        uVar27 = 0;
      }
    }
    iVar25 = *(int *)(unaff_EBP - 0xdc);
    *(uint *)(unaff_EBP - 0xcc) = uVar27;
    switch(*(undefined1 *)(iVar25 + iVar34 * 0x14)) {
    case 0x4b:
      uVar27 = (uint)(uVar27 != 0);
      break;
    case 0x4c:
      uVar27 = (uint)(uVar27 == 0);
      break;
    case 0x4d:
      uVar27 = (uint)(0 < (int)uVar27);
      break;
    case 0x4e:
      uVar27 = (uint)((int)uVar27 < 1);
      break;
    case 0x4f:
      uVar27 = (uint)((int)uVar27 < 0);
      break;
    default:
      uVar27 = (uint)(-1 < (int)uVar27);
    }
    iVar25 = *(int *)(unaff_EBP - 0xdc);
    *(uint *)(unaff_EBP - 0xcc) = uVar27;
    if ((*(byte *)(iVar25 + 3 + iVar34 * 0x14) & 0x10) == 0) {
      if (uVar27 != 0) {
        *(int *)(unaff_EBP - 0xe8) = *(int *)(iVar25 + 8 + iVar34 * 0x14) + -1;
      }
    }
    else {
      iVar34 = *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 8 + iVar34 * 0x14) * 0x28;
      *(int *)(unaff_EBP - 0xd8) = iVar34;
      *(ushort *)(iVar34 + 0x1c) = *(ushort *)(iVar34 + 0x1c) & 0xbe04 | 4;
      iVar25 = *(int *)(unaff_EBP - 0xcc);
      *(int *)(iVar34 + 0x10) = iVar25;
      *(int *)(iVar34 + 0x14) = iVar25 >> 0x1f;
    }
    *(ushort *)(piVar19 + 7) =
         *(ushort *)(piVar19 + 7) ^
         (*(ushort *)(piVar19 + 7) ^ *(ushort *)(unaff_EBP - 0xc6)) & 0x1ff;
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    *(ushort *)(piVar29 + 7) =
         *(ushort *)(piVar29 + 7) ^
         (*(ushort *)(piVar29 + 7) ^ *(ushort *)(unaff_EBP - 0xc4)) & 0x1ff;
    unaff_EBX = *(int **)(unaff_EBP - 0xe4);
    goto LAB_004b0d0b;
  case 0x51:
  case 0x5c:
  case 0x5f:
    if (unaff_EBX[0x38] != 0) goto LAB_004af4ee;
    puVar24 = *(undefined4 **)
               (*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
               *(int *)(iVar25 + 4 + iVar34 * 0x14) * 4);
    *(undefined4 **)(unaff_EBP - 0xcc) = puVar24;
    if (puVar24 != (undefined4 *)0x0) {
      if (puVar24[0x12] == 0) {
        *(undefined4 *)(unaff_EBP - 200) = 1;
        iVar25 = (**(code **)(iVar25 + 0x10 + iVar34 * 0x14))(*puVar24);
      }
      else {
        iVar25 = FUN_004b8f40((int)unaff_EBX,(int)puVar24,(uint *)(unaff_EBP - 200));
      }
      iVar13 = *(int *)(unaff_EBP - 0xcc);
      *(int *)(unaff_EBP - 0xd0) = iVar25;
      *(undefined1 *)(iVar13 + 0x1c) = *(undefined1 *)(unaff_EBP - 200);
      *(undefined4 *)(*(int *)(unaff_EBP - 0xcc) + 0x50) = 0;
      if (*(int *)(unaff_EBP - 200) == 0) {
        bVar9 = *(byte *)(*(int *)(unaff_EBP - 0xdc) + 3 + iVar34 * 0x14);
        *(int *)(unaff_EBP - 0xe8) = *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar34 * 0x14) + -1;
        if (bVar9 != 0) {
          piVar19 = (int *)(*(int *)(unaff_EBP - 0xd4) + 0x70 + (uint)bVar9 * 4);
          *piVar19 = *piVar19 + 1;
        }
      }
      *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + 0x19) = 0;
    }
    goto LAB_004b0d0b;
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
    iVar13 = *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x28;
    iVar21 = *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 8 + iVar34 * 0x14) * 0x28;
    *(int *)(unaff_EBP - 0xd8) =
         *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 0xc + iVar34 * 0x14) * 0x28;
    if (((*(byte *)(iVar21 + 0x1c) | *(byte *)(iVar13 + 0x1c)) & 1) == 0) {
      uVar39 = FUN_004b65e0(iVar21);
      *(ulonglong *)(unaff_EBP - 0xcc) = uVar39;
      uVar39 = FUN_004b65e0(iVar13);
      uVar31 = (uint)(uVar39 >> 0x20);
      uVar27 = (uint)uVar39;
      iVar25 = *(int *)(unaff_EBP - 0xdc);
      *(ulonglong *)(unaff_EBP - 0xbc) = uVar39;
      cVar8 = *(char *)(iVar25 + iVar34 * 0x14);
      *(char *)(unaff_EBP - 0xb4) = cVar8;
      if (cVar8 == 'R') {
        uVar27 = *(uint *)(unaff_EBP - 0xcc) & uVar27;
        *(uint *)(unaff_EBP - 200) = *(uint *)(unaff_EBP - 200) & uVar31;
        *(uint *)(unaff_EBP - 0xcc) = uVar27;
      }
      else if (cVar8 == 'S') {
        uVar27 = *(uint *)(unaff_EBP - 0xcc) | uVar27;
        *(uint *)(unaff_EBP - 200) = *(uint *)(unaff_EBP - 200) | uVar31;
        *(uint *)(unaff_EBP - 0xcc) = uVar27;
      }
      else if (uVar39 == 0) {
        uVar27 = *(uint *)(unaff_EBP - 0xcc);
      }
      else {
        if (uVar31 == 0 || (longlong)uVar39 < 0) {
          if ((longlong)uVar39 < 0) {
            cVar8 = -0x57 - cVar8;
            *(char *)(unaff_EBP - 0xb4) = cVar8;
            if (((longlong)uVar39 < -0x100000000) ||
               ((0x7fffffffffffffff < uVar39 && (uVar27 < 0xffffffc1)))) {
              *(undefined4 *)(unaff_EBP - 0xbc) = 0x40;
              *(undefined4 *)(unaff_EBP - 0xb8) = 0;
              goto LAB_004b03ac;
            }
            iVar34 = -(uVar31 + (uVar27 != 0));
            uVar39 = CONCAT44(iVar34,-uVar27);
            *(uint *)(unaff_EBP - 0xbc) = -uVar27;
            *(int *)(unaff_EBP - 0xb8) = iVar34;
          }
          if ((longlong)uVar39 < 0x40) {
            if (cVar8 == 'T') {
              *(ulonglong *)(unaff_EBP - 0xc4) =
                   *(ulonglong *)(unaff_EBP - 0xcc) << (uVar39 & 0xffffffff);
              uVar27 = *(uint *)(unaff_EBP - 0xc4);
              uVar26 = *(undefined4 *)(unaff_EBP - 0xc0);
              *(uint *)(unaff_EBP - 0xcc) = uVar27;
              *(undefined4 *)(unaff_EBP - 200) = uVar26;
            }
            else {
              iVar34 = *(int *)(unaff_EBP - 200);
              *(ulonglong *)(unaff_EBP - 0xc4) =
                   *(ulonglong *)(unaff_EBP - 0xcc) >> (uVar39 & 0xffffffff);
              if ((iVar34 < 1) && (iVar34 < 0)) {
                lVar38 = __allshl(0x40 - (char)uVar39,-1);
                *(uint *)(unaff_EBP - 0xc4) = *(uint *)(unaff_EBP - 0xc4) | (uint)lVar38;
                *(uint *)(unaff_EBP - 0xc0) =
                     *(uint *)(unaff_EBP - 0xc0) | (uint)((ulonglong)lVar38 >> 0x20);
              }
              uVar27 = *(uint *)(unaff_EBP - 0xc4);
              uVar26 = *(undefined4 *)(unaff_EBP - 0xc0);
              *(uint *)(unaff_EBP - 0xcc) = uVar27;
              *(undefined4 *)(unaff_EBP - 200) = uVar26;
            }
            goto LAB_004b049d;
          }
        }
LAB_004b03ac:
        if (((*(int *)(unaff_EBP - 200) < 1) && (*(int *)(unaff_EBP - 200) < 0)) && (cVar8 != 'T'))
        {
          uVar27 = 0xffffffff;
          *(undefined4 *)(unaff_EBP - 0xcc) = 0xffffffff;
          *(undefined4 *)(unaff_EBP - 200) = 0xffffffff;
        }
        else {
          uVar27 = 0;
          *(undefined4 *)(unaff_EBP - 0xcc) = 0;
          *(undefined4 *)(unaff_EBP - 200) = 0;
        }
      }
LAB_004b049d:
      unaff_ESI = *(int **)(unaff_EBP - 0xd8);
      unaff_ESI[4] = uVar27;
      unaff_ESI[5] = *(int *)(unaff_EBP - 200);
      *(ushort *)(unaff_ESI + 7) = *(ushort *)(unaff_ESI + 7) & 0xbe04 | 4;
    }
    else {
      unaff_ESI = *(int **)(unaff_EBP - 0xd8);
      FUN_004b78c0((int)unaff_ESI);
    }
    goto LAB_004b0d0b;
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
    iVar13 = *(int *)(unaff_EBP - 0xe0);
    iVar25 = iVar13 + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x28;
    FUN_0046dfa0(iVar25);
    iVar13 = iVar13 + *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar34 * 0x14) * 0x28;
    FUN_0046dfa0(iVar13);
    uVar4 = *(ushort *)(iVar25 + 0x1c);
    *(int *)(unaff_EBP - 0xd8) =
         *(int *)(unaff_EBP - 0xe0) +
         *(int *)(*(int *)(unaff_EBP - 0xdc) + 0xc + iVar34 * 0x14) * 0x28;
    uVar4 = uVar4 | *(ushort *)(iVar13 + 0x1c);
    *(uint *)(unaff_EBP - 200) = (uint)uVar4;
    if ((uVar4 & 1) != 0) goto LAB_004b001a;
    if ((*(byte *)(iVar25 + 0x1c) & *(byte *)(iVar13 + 0x1c) & 4) == 0) {
      *(undefined1 *)(unaff_EBP - 0xcc) = 0;
      goto LAB_004afe6d;
    }
    uVar27 = *(uint *)(iVar25 + 0x10);
    *(uint *)(unaff_EBP - 0xc4) = uVar27;
    uVar31 = *(uint *)(iVar25 + 0x14);
    *(uint *)(unaff_EBP - 0xc0) = uVar31;
    uVar26 = *(undefined4 *)(iVar13 + 0x10);
    *(undefined4 *)(unaff_EBP - 0xf0) = uVar26;
    *(undefined4 *)(unaff_EBP - 0xbc) = uVar26;
    uVar26 = *(undefined4 *)(iVar13 + 0x14);
    *(undefined4 *)(unaff_EBP - 0x104) = uVar26;
    *(undefined4 *)(unaff_EBP - 0xb8) = uVar26;
    iVar21 = *(int *)(unaff_EBP - 0xdc);
    *(undefined1 *)(unaff_EBP - 0xcc) = 1;
    switch(*(undefined1 *)(iVar21 + iVar34 * 0x14)) {
    case 0x56:
      iVar21 = FUN_0048bce0((uint *)(unaff_EBP - 0xbc),uVar27,uVar31);
      if (iVar21 != 0) goto LAB_004afe6d;
      break;
    case 0x57:
      iVar21 = FUN_004aa9e0((uint *)(unaff_EBP - 0xbc),uVar27,uVar31);
      goto joined_r0x004afda1;
    case 0x58:
      iVar21 = FUN_004a0bf0((uint *)(unaff_EBP - 0xbc),uVar27,uVar31);
joined_r0x004afda1:
      if (iVar21 == 0) break;
LAB_004afe6d:
      fVar35 = FUN_004b8350(iVar25);
      *(double *)(unaff_EBP - 0xb4) = (double)fVar35;
      fVar35 = FUN_004b8350(iVar13);
      *(double *)(unaff_EBP - 0xac) = (double)fVar35;
      switch(*(undefined1 *)(*(int *)(unaff_EBP - 0xdc) + iVar34 * 0x14)) {
      case 0x56:
        *(double *)(unaff_EBP - 0xac) =
             *(double *)(unaff_EBP - 0xac) + *(double *)(unaff_EBP - 0xb4);
        break;
      case 0x57:
        *(double *)(unaff_EBP - 0xac) =
             *(double *)(unaff_EBP - 0xac) - *(double *)(unaff_EBP - 0xb4);
        break;
      case 0x58:
        *(double *)(unaff_EBP - 0xac) =
             *(double *)(unaff_EBP - 0xac) * *(double *)(unaff_EBP - 0xb4);
        break;
      case 0x59:
        if (*(double *)(unaff_EBP - 0xb4) != 0.0) {
          *(double *)(unaff_EBP - 0xac) =
               *(double *)(unaff_EBP - 0xac) / *(double *)(unaff_EBP - 0xb4);
          break;
        }
        goto LAB_004b001a;
      default:
        uVar39 = FUN_0054a946();
        *(ulonglong *)(unaff_EBP - 0xc4) = uVar39;
        uVar37 = FUN_0054a946();
        *(ulonglong *)(unaff_EBP - 0xbc) = uVar37;
        if (uVar39 == 0) goto LAB_004b001a;
        if (uVar39 == 0xffffffffffffffff) {
          uVar39 = 1;
          *(undefined4 *)(unaff_EBP - 0xc4) = 1;
          *(undefined4 *)(unaff_EBP - 0xc0) = 0;
        }
        uVar36 = __allrem((uint)uVar37,(uint)(uVar37 >> 0x20),(uint)uVar39,(uint)(uVar39 >> 0x20));
        *(undefined8 *)(unaff_EBP - 0x134) = uVar36;
        *(double *)(unaff_EBP - 0xac) = (double)*(longlong *)(unaff_EBP - 0x134);
      }
      iVar34 = FUN_0049f810();
      if (iVar34 == 0) {
        unaff_ESI = *(int **)(unaff_EBP - 0xd8);
        *(undefined8 *)(unaff_ESI + 2) = *(undefined8 *)(unaff_EBP - 0xac);
        *(ushort *)(unaff_ESI + 7) = *(ushort *)(unaff_ESI + 7) & 0xbe08 | 8;
        if (((*(byte *)(unaff_EBP - 200) & 8) != 0) || (*(char *)(unaff_EBP - 0xcc) != '\0'))
        goto LAB_004af834;
        FUN_004b6650((int)unaff_ESI);
        unaff_EBX = *(int **)(unaff_EBP - 0xe4);
      }
      else {
LAB_004b001a:
        unaff_ESI = *(int **)(unaff_EBP - 0xd8);
        FUN_004b78c0((int)unaff_ESI);
        unaff_EBX = *(int **)(unaff_EBP - 0xe4);
      }
      goto LAB_004b0d0b;
    case 0x59:
      if (uVar27 != 0 || uVar31 != 0) {
        if ((((uVar27 & uVar31) != 0xffffffff) || (*(uint *)(unaff_EBP - 0xf0) != 0)) ||
           (*(int *)(unaff_EBP - 0x104) != -0x80000000)) {
          uVar36 = __alldiv(*(uint *)(unaff_EBP - 0xf0),*(uint *)(unaff_EBP - 0x104),uVar27,uVar31);
          goto LAB_004afe23;
        }
        goto LAB_004afe6d;
      }
      goto LAB_004b001a;
    default:
      if (uVar27 == 0 && uVar31 == 0) goto LAB_004b001a;
      if ((uVar27 & uVar31) == 0xffffffff) {
        uVar27 = 1;
        uVar31 = 0;
        *(undefined4 *)(unaff_EBP - 0xc4) = 1;
        *(undefined4 *)(unaff_EBP - 0xc0) = 0;
      }
      uVar36 = __allrem(*(uint *)(unaff_EBP - 0xf0),*(uint *)(unaff_EBP - 0x104),uVar27,uVar31);
LAB_004afe23:
      *(undefined8 *)(unaff_EBP - 0xbc) = uVar36;
    }
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    unaff_EBX = *(int **)(unaff_EBP - 0xe4);
    unaff_ESI[4] = *(int *)(unaff_EBP - 0xbc);
    unaff_ESI[5] = *(int *)(unaff_EBP - 0xb8);
    *(ushort *)(unaff_ESI + 7) = *(ushort *)(unaff_ESI + 7) & 0xbe04 | 4;
    goto LAB_004b0d0b;
  case 0x5b:
    iVar13 = *(int *)(unaff_EBP - 0xe0);
    piVar19 = (int *)(iVar13 + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x28);
    piVar29 = (int *)(iVar13 + *(int *)(iVar25 + 8 + iVar34 * 0x14) * 0x28);
    unaff_ESI = (int *)(iVar13 + *(int *)(iVar25 + 0xc + iVar34 * 0x14) * 0x28);
    uVar4 = *(ushort *)(piVar19 + 7);
    bVar9 = *(byte *)(piVar29 + 7);
    *(int **)(unaff_EBP - 0xd8) = unaff_ESI;
    if (((bVar9 | (byte)uVar4) & 1) != 0) {
      FUN_004b78c0((int)unaff_ESI);
      unaff_EBX = *(int **)(unaff_EBP - 0xe4);
      goto LAB_004b0d0b;
    }
    if ((((((uVar4 & 0x4000) != 0) && (iVar34 = FUN_004b6fa0(piVar19), iVar34 != 0)) ||
         (((*(ushort *)(piVar29 + 7) & 0x4000) != 0 && (iVar34 = FUN_004b6fa0(piVar29), iVar34 != 0)
          ))) || (((*(byte *)(piVar19 + 7) & 0x12) == 0 &&
                  (iVar34 = FUN_004b7cf0(piVar19,(uint)*(byte *)(unaff_EBP - 0xec)), iVar34 != 0))))
       || (((*(byte *)(piVar29 + 7) & 0x12) == 0 &&
           (iVar34 = FUN_004b7cf0(piVar29,(uint)*(byte *)(unaff_EBP - 0xec)), iVar34 != 0))))
    goto LAB_004b57a0;
    uVar31 = piVar19[6] + piVar29[6];
    iVar25 = (int)uVar31 >> 0x1f;
    iVar34 = *(int *)(unaff_EBP - 0xe4);
    *(uint *)(unaff_EBP - 0xcc) = uVar31;
    *(int *)(unaff_EBP - 200) = iVar25;
    uVar27 = *(uint *)(iVar34 + 0x50);
    iVar34 = (int)uVar27 >> 0x1f;
    if ((iVar34 < iVar25) || ((iVar34 <= iVar25 && (uVar27 < uVar31)))) goto LAB_004b577a;
    piVar5 = *(int **)(unaff_EBP - 0xd8);
    *(ushort *)(piVar5 + 7) = *(ushort *)(piVar5 + 7) & 0xbe02 | 2;
    iVar34 = FUN_004b7260(piVar5,*(int *)(unaff_EBP - 0xcc) + 2,(uint)(piVar5 == piVar29));
    if (iVar34 != 0) goto LAB_004b57a0;
    if (piVar5 != piVar29) {
      memcpy((void *)piVar5[1],(void *)piVar29[1],piVar29[6]);
    }
    memcpy((void *)(piVar5[1] + piVar29[6]),(void *)piVar19[1],piVar19[6]);
    unaff_EBX = *(int **)(unaff_EBP - 0xe4);
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    *(undefined1 *)(*(int *)(unaff_EBP - 0xcc) + piVar5[1]) = 0;
    *(undefined1 *)(piVar5[1] + 1 + *(int *)(unaff_EBP - 0xcc)) = 0;
    *(ushort *)(piVar5 + 7) = *(ushort *)(piVar5 + 7) | 0x200;
    piVar5[6] = *(int *)(unaff_EBP - 0xcc);
    *(undefined1 *)((int)piVar5 + 0x1f) = *(undefined1 *)(unaff_EBP - 0xec);
    goto LAB_004b0d0b;
  case 0x5d:
    iVar13 = *(int *)(iVar25 + 4 + iVar34 * 0x14);
    iVar21 = *(int *)(unaff_EBP - 0xe0);
    bVar9 = *(byte *)(iVar21 + 0x1c + iVar13 * 0x28);
    unaff_ESI = (int *)(iVar21 + *(int *)(iVar25 + 8 + iVar34 * 0x14) * 0x28);
    *(int **)(unaff_EBP - 0xd8) = unaff_ESI;
    if ((bVar9 & 1) == 0) {
      uVar39 = FUN_004b65e0(iVar21 + iVar13 * 0x28);
      FUN_004b7860(unaff_ESI,~(uint)uVar39,~(uint)(uVar39 >> 0x20));
      unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    }
    else {
      FUN_004b78c0((int)unaff_ESI);
    }
    goto LAB_004b0d0b;
  case 0x5e:
    *(undefined1 *)(iVar25 + iVar34 * 0x14) = 9;
    uVar27 = FUN_004aa9b0(*(char **)(iVar25 + 0x10 + iVar34 * 0x14));
    cVar8 = *(char *)(unaff_EBP - 0xec);
    *(uint *)(*(int *)(unaff_EBP - 0xdc) + 4 + iVar34 * 0x14) = uVar27;
    if (cVar8 == '\x01') {
      iVar25 = *(int *)(unaff_EBP - 0xdc);
    }
    else {
      iVar25 = FUN_004b79e0(unaff_ESI,extraout_EDX,0xffffffff,'\x01',(undefined *)0x0);
      *(int *)(unaff_EBP - 0xd0) = iVar25;
      if (iVar25 == 0x12) goto LAB_004b5780;
      iVar25 = FUN_004aec30(unaff_ESI,(uint)*(byte *)(unaff_EBP - 0xec));
      if (iVar25 != 0) goto LAB_004b57a6;
      iVar25 = *(int *)(unaff_EBP - 0xdc);
      unaff_ESI[9] = 0;
      *(ushort *)(unaff_ESI + 7) = *(ushort *)(unaff_ESI + 7) & 0xfbff | 0x800;
      if (*(char *)(iVar25 + 1 + iVar34 * 0x14) == -1) {
        FUN_00494b00((int)unaff_EBX,*(undefined4 **)(iVar25 + 0x10 + iVar34 * 0x14));
        iVar25 = *(int *)(unaff_EBP - 0xdc);
      }
      *(undefined1 *)(iVar25 + 1 + iVar34 * 0x14) = 0xff;
      *(int *)(iVar25 + 0x10 + iVar34 * 0x14) = unaff_ESI[1];
      *(int *)(iVar25 + 4 + iVar34 * 0x14) = unaff_ESI[6];
    }
    if (unaff_EBX[0x14] < *(int *)(iVar25 + 4 + iVar34 * 0x14)) goto LAB_004b5780;
switchD_004af4da_caseD_9:
    *(undefined2 *)(unaff_ESI + 7) = 0xa02;
    unaff_ESI[1] = *(int *)(iVar25 + 0x10 + iVar34 * 0x14);
    unaff_ESI[6] = *(int *)(iVar25 + 4 + iVar34 * 0x14);
    *(undefined1 *)((int)unaff_ESI + 0x1f) = *(undefined1 *)(unaff_EBP - 0xec);
    goto LAB_004b0d0b;
  case 0x60:
  case 0x61:
    piVar29 = *(int **)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                       *(int *)(iVar25 + 4 + iVar34 * 0x14) * 4);
    *(int **)(unaff_EBP - 0xcc) = piVar29;
    iVar25 = *(int *)(iVar25 + 8 + iVar34 * 0x14);
    puVar18 = (uint *)*piVar29;
    iVar13 = *(int *)(unaff_EBP - 0xe0);
    *(uint **)(unaff_EBP - 200) = puVar18;
    piVar19 = (int *)(iVar13 + iVar25 * 0x28);
    if (puVar18 == (uint *)0x0) goto LAB_004af834;
    if ((*(ushort *)(piVar19 + 7) & 0x4000) != 0) {
      iVar25 = FUN_004b6fa0(piVar19);
      *(int *)(unaff_EBP - 0xd0) = iVar25;
      if (iVar25 != 0) goto LAB_004af834;
      puVar18 = *(uint **)(unaff_EBP - 200);
      piVar29 = *(int **)(unaff_EBP - 0xcc);
    }
    if (piVar29[0x12] == 0) {
      uVar27 = piVar19[6];
      iVar25 = *(int *)(unaff_EBP - 0xdc);
      *(uint *)(unaff_EBP - 0xc4) = uVar27;
      pbVar33 = (byte *)piVar19[1];
      *(byte **)(unaff_EBP - 0xc0) = pbVar33;
      if ((*(byte *)(iVar25 + 3 + iVar34 * 0x14) & 0x10) == 0) {
        puVar17 = (uint *)0x0;
      }
      else {
        puVar17 = (uint *)piVar29[0x13];
      }
      puVar18 = FUN_0048ffe0(puVar18,pbVar33,uVar27,(int)uVar27 >> 0x1f,&DAT_0055b524,0,0,
                             *(int *)(*(int *)(unaff_EBP - 0xdc) + 0xc + iVar34 * 0x14),puVar17);
      unaff_EBX = *(int **)(unaff_EBP - 0xe4);
      unaff_ESI = *(int **)(unaff_EBP - 0xd8);
      *(uint **)(unaff_EBP - 0xd0) = puVar18;
      *(undefined4 *)(*(int *)(unaff_EBP - 0xcc) + 0x50) = 0;
      goto LAB_004b0d0b;
    }
    unaff_EBX = *(int **)(unaff_EBP - 0xe4);
    uVar27 = FUN_004b9360(unaff_EBX,(int)piVar29,(int)piVar19);
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    *(uint *)(unaff_EBP - 0xd0) = uVar27;
    goto LAB_004b0d11;
  case 0x62:
    puVar24 = *(undefined4 **)
               (*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
               *(int *)(iVar25 + 4 + iVar34 * 0x14) * 4);
    *(undefined4 **)(unaff_EBP - 0xcc) = puVar24;
    piVar19 = (int *)*puVar24;
    *(int **)(unaff_EBP - 200) = piVar19;
    if (piVar19 != (int *)0x0) {
      *(undefined4 *)(unaff_EBP - 0xbc) = puVar24[2];
      *(undefined2 *)(unaff_EBP - 0xb8) = *(undefined2 *)(iVar25 + 0xc + iVar34 * 0x14);
      *(undefined1 *)(unaff_EBP - 0xb6) = 0;
      *(int *)(unaff_EBP - 0xac) =
           *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 8 + iVar34 * 0x14) * 0x28;
      uVar27 = FUN_004908e0(piVar19,(int *)(unaff_EBP - 0xbc),0,0,0,(uint *)(unaff_EBP - 0xc4));
      *(uint *)(unaff_EBP - 0xd0) = uVar27;
      if ((uVar27 == 0) && (*(int *)(unaff_EBP - 0xc4) == 0)) {
        uVar27 = FUN_0048f930(*(uint **)(unaff_EBP - 200));
        *(uint *)(unaff_EBP - 0xd0) = uVar27;
      }
      *(undefined4 *)(*(int *)(unaff_EBP - 0xcc) + 0x50) = 0;
    }
    goto LAB_004b0d0b;
  case 99:
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    puVar24 = *(undefined4 **)
               (*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
               *(int *)(iVar25 + 4 + iVar34 * 0x14) * 4);
    *(undefined4 **)(unaff_EBP - 200) = puVar24;
    *(undefined4 *)(unaff_EBP - 0xcc) = *puVar24;
    *(undefined2 *)(unaff_ESI + 7) = 1;
    if (*(int *)(unaff_EBP - 0xcc) == 0) goto LAB_004af570;
    uVar27 = FUN_004af1b0(*(undefined4 **)(unaff_EBP - 200));
    *(uint *)(unaff_EBP - 0xd0) = uVar27;
    if (uVar27 != 0) goto LAB_004b572c;
    if (*(char *)(*(int *)(unaff_EBP - 200) + 0x1c) != '\0') goto LAB_004af570;
    uVar27 = FUN_004b6480(unaff_EBX,*(int **)(unaff_EBP - 0xcc),(undefined4 *)(unaff_EBP - 0xc4));
    *(uint *)(unaff_EBP - 0xd0) = uVar27;
    if (uVar27 != 0) goto LAB_004b572c;
    unaff_ESI[4] = *(int *)(unaff_EBP - 0xc4);
    unaff_ESI[5] = *(int *)(unaff_EBP - 0xc0);
    *(undefined2 *)(unaff_ESI + 7) = 4;
    goto LAB_004b0d0b;
  case 100:
  case 0x65:
    piVar19 = *(int **)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                       *(int *)(iVar25 + 4 + iVar34 * 0x14) * 4);
    *(int **)(unaff_EBP - 0xcc) = piVar19;
    if (*piVar19 == 0) goto LAB_004b0d0b;
    *(int *)(unaff_EBP - 0xc4) = piVar19[2];
    *(undefined2 *)(unaff_EBP - 0xc0) = *(undefined2 *)(iVar25 + 0x10 + iVar34 * 0x14);
    *(char *)(unaff_EBP - 0xbe) = (*(char *)(iVar25 + 3 + iVar34 * 0x14) != '\0') + '\x02';
    *(int *)(unaff_EBP - 0xb4) =
         *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 0xc + iVar34 * 0x14) * 0x28;
    uVar27 = FUN_004b63c0(piVar19,(int *)(unaff_EBP - 0xc4),(uint *)(unaff_EBP - 200));
    iVar25 = *(int *)(unaff_EBP - 0xdc);
    cVar8 = *(char *)(iVar25 + iVar34 * 0x14);
    *(uint *)(unaff_EBP - 0xd0) = uVar27;
    if (cVar8 == 'd') {
      iVar13 = -*(int *)(unaff_EBP - 200);
    }
    else {
      iVar13 = *(int *)(unaff_EBP - 200) + 1;
    }
    *(int *)(unaff_EBP - 200) = iVar13;
    if (iVar13 < 1) goto LAB_004b0d0b;
    iVar34 = *(int *)(iVar25 + 8 + iVar34 * 0x14);
    goto LAB_004b0d04;
  case 0x66:
    iVar13 = 0;
    *(undefined4 *)(unaff_EBP - 200) = 0;
    iVar25 = unaff_EBX[1];
    *(int *)(unaff_EBP - 0xc4) = iVar25;
    while (iVar25 != 0) {
      if (((*(int *)(iVar25 + 0x30) == -0x420df25d) &&
          (((byte)*(undefined4 *)(iVar25 + 0x60) & 0xc) < 8)) && (-1 < *(int *)(iVar25 + 0x54))) {
        iVar13 = iVar13 + 1;
        *(int *)(unaff_EBP - 200) = iVar13;
      }
      iVar25 = *(int *)(iVar25 + 0x3c);
      *(int *)(unaff_EBP - 0xc4) = iVar25;
    }
    *(undefined2 *)(unaff_ESI + 7) = 1;
    if (*(int *)(unaff_EBP - 200) < 2) {
      iVar25 = *(int *)(unaff_EBP - 0xdc);
      iVar13 = *(int *)(iVar25 + 0xc + iVar34 * 0x14);
      *(int *)(unaff_EBP - 0xc0) = iVar13;
      uVar27 = FUN_0048fb70(*(undefined4 **)(unaff_EBX[4] + 4 + iVar13 * 0x10),
                            *(char **)(iVar25 + 4 + iVar34 * 0x14),(uint *)(unaff_EBP - 0xcc));
      *(uint *)(unaff_EBP - 0xd0) = uVar27;
      *(undefined2 *)(unaff_ESI + 7) = 4;
      iVar25 = *(int *)(unaff_EBP - 0xcc);
      unaff_ESI[4] = iVar25;
      uVar27 = *(uint *)(unaff_EBP - 0xd0);
      unaff_ESI[5] = iVar25 >> 0x1f;
      if (uVar27 == 0) {
        if (*(int *)(unaff_EBP - 0xcc) != 0) {
          FUN_004a6dc0((int)unaff_EBX,*(int *)(unaff_EBP - 0xc0),*(int *)(unaff_EBP - 0xcc),
                       *(undefined4 *)(*(int *)(unaff_EBP - 0xdc) + 4 + iVar34 * 0x14));
          *(char *)(unaff_EBP - 0xf5) = *(char *)(unaff_EBP - 0xc0) + '\x01';
        }
        goto LAB_004b0d0b;
      }
    }
    else {
      iVar34 = *(int *)(unaff_EBP - 0xd4);
      uVar27 = 6;
      *(undefined4 *)(unaff_EBP - 0xd0) = 6;
      *(undefined1 *)(iVar34 + 0x5c) = 2;
    }
    goto LAB_004b0d11;
  case 0x67:
    *(undefined4 *)(unaff_EBP - 0xcc) = 0;
    piVar19 = (int *)(unaff_EBP - 0xcc);
    if (*(int *)(iVar25 + 0xc + iVar34 * 0x14) == 0) {
      piVar19 = (int *)0x0;
    }
    uVar27 = FUN_0048eff0(*(undefined4 **)
                           (unaff_EBX[4] + 4 + *(int *)(iVar25 + 8 + iVar34 * 0x14) * 0x10),
                          *(uint *)(iVar25 + 4 + iVar34 * 0x14),piVar19);
    iVar25 = *(int *)(unaff_EBP - 0xdc);
    iVar13 = *(int *)(iVar25 + 0xc + iVar34 * 0x14);
    *(uint *)(unaff_EBP - 0xd0) = uVar27;
    if (iVar13 != 0) {
      uVar27 = *(uint *)(unaff_EBP - 0xcc);
      piVar19 = (int *)(*(int *)(unaff_EBP - 0xd4) + 100);
      *piVar19 = *piVar19 + uVar27;
      iVar34 = *(int *)(iVar25 + 0xc + iVar34 * 0x14);
      if (0 < iVar34) {
        iVar25 = *(int *)(unaff_EBP - 0xe0);
        puVar18 = (uint *)(iVar25 + 0x10 + iVar34 * 0x28);
        uVar31 = *puVar18;
        *puVar18 = *puVar18 + uVar27;
        piVar19 = (int *)(iVar25 + 0x14 + iVar34 * 0x28);
        *piVar19 = *piVar19 + ((int)uVar27 >> 0x1f) + (uint)CARRY4(uVar31,uVar27);
      }
    }
    goto LAB_004b0d0b;
  case 0x68:
  case 0x69:
    *(undefined4 *)(unaff_EBP - 0xcc) = 0;
    iVar13 = *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x10 + unaff_EBX[4];
    *(int *)(unaff_EBP - 0xc4) = iVar13;
    iVar34 = (*(char *)(iVar25 + iVar34 * 0x14) != 'i') + 1;
    *(int *)(unaff_EBP - 200) = iVar34;
    pcVar22 = FUN_0048f740(*(undefined4 **)(iVar13 + 4),(undefined4 *)(unaff_EBP - 0xcc),
                           (byte)iVar34);
    *(char **)(unaff_EBP - 0xd0) = pcVar22;
    iVar34 = *(int *)(unaff_EBP - 0xcc);
    unaff_ESI[4] = iVar34;
    unaff_ESI[5] = iVar34 >> 0x1f;
    goto LAB_004b0d0b;
  case 0x6a:
    iVar25 = *(int *)(iVar25 + 4 + iVar34 * 0x14);
    *(int *)(unaff_EBP - 0xcc) = iVar25;
    pcVar22 = "sqlite_temp_master";
    if (iVar25 != 1) {
      pcVar22 = "sqlite_master";
    }
    iVar25 = *(int *)(unaff_EBP - 0xdc);
    *(char **)(unaff_EBP - 200) = pcVar22;
    *(int **)(unaff_EBP - 0xc0) = unaff_EBX;
    *(undefined4 *)(unaff_EBP - 0xb8) = *(undefined4 *)(iVar25 + 4 + iVar34 * 0x14);
    *(int *)(unaff_EBP - 0xbc) = *(int *)(unaff_EBP - 0xd4) + 0x34;
    iVar34 = FUN_004a02d0((int)unaff_EBX,
                          (byte *)
                          "SELECT name, rootpage, sql FROM \'%q\'.%s WHERE %s ORDER BY rowid");
    *(int *)(unaff_EBP - 0xc4) = iVar34;
    if (iVar34 == 0) {
      *(undefined4 *)(unaff_EBP - 0xd0) = 7;
LAB_004b3e54:
      FUN_004a6940((int)unaff_EBX);
      uVar27 = *(uint *)(unaff_EBP - 0xd0);
    }
    else {
      *(undefined1 *)((int)unaff_EBX + 0x81) = 1;
      pbVar33 = *(byte **)(unaff_EBP - 0xc4);
      *(undefined4 *)(unaff_EBP - 0xb4) = 0;
      uVar27 = FUN_00463120((int)unaff_EBX,pbVar33,FUN_0049de90,unaff_EBP - 0xc0,(int *)0x0);
      puVar24 = *(undefined4 **)(unaff_EBP - 0xc4);
      if (uVar27 == 0) {
        uVar27 = *(uint *)(unaff_EBP - 0xb4);
      }
      *(uint *)(unaff_EBP - 0xd0) = uVar27;
      FUN_00494b00((int)unaff_EBX,puVar24);
      iVar34 = *(int *)(unaff_EBP - 0xd0);
      *(undefined1 *)((int)unaff_EBX + 0x81) = 0;
      uVar27 = 0;
      if (iVar34 != 0) goto LAB_004b3e54;
    }
    if (uVar27 == 7) goto LAB_004b57a6;
    goto LAB_004b0d11;
  case 0x6b:
    uVar27 = FUN_0048c830((int)unaff_EBX,*(int *)(iVar25 + 4 + iVar34 * 0x14));
    *(uint *)(unaff_EBP - 0xd0) = uVar27;
    goto LAB_004b0d11;
  case 0x6c:
    FUN_004ab2d0((int)unaff_EBX,*(uint *)(iVar25 + 4 + iVar34 * 0x14),
                 *(byte **)(iVar25 + 0x10 + iVar34 * 0x14));
    goto LAB_004b0d0b;
  case 0x6d:
    FUN_004ab1f0((int)unaff_EBX,*(uint *)(iVar25 + 4 + iVar34 * 0x14),
                 *(byte **)(iVar25 + 0x10 + iVar34 * 0x14));
    goto LAB_004b0d0b;
  case 0x6e:
    FUN_004ab380((int)unaff_EBX,*(uint *)(iVar25 + 4 + iVar34 * 0x14),
                 *(byte **)(iVar25 + 0x10 + iVar34 * 0x14));
    goto LAB_004b0d0b;
  case 0x6f:
    iVar25 = *(int *)(iVar25 + 8 + iVar34 * 0x14);
    *(int *)(unaff_EBP - 0xcc) = iVar25;
    puVar24 = FUN_00494b90((int)unaff_EBX,iVar25 * 4 + 4);
    *(undefined4 **)(unaff_EBP - 200) = puVar24;
    if (puVar24 == (undefined4 *)0x0) goto LAB_004b57a6;
    iVar25 = *(int *)(unaff_EBP - 0xdc);
    iVar13 = *(int *)(unaff_EBP - 0xe0);
    *(int *)(unaff_EBP - 0xb8) = iVar13 + *(int *)(iVar25 + 0xc + iVar34 * 0x14) * 0x28;
    piVar19 = (int *)(iVar13 + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x28);
    iVar25 = 0;
    *(undefined4 *)(unaff_EBP - 0xc4) = 0;
    if (0 < *(int *)(unaff_EBP - 0xcc)) {
      do {
        uVar39 = FUN_004b65e0((int)(piVar19 + iVar25 * 10));
        *(int *)(*(int *)(unaff_EBP - 200) + *(int *)(unaff_EBP - 0xc4) * 4) = (int)uVar39;
        iVar25 = *(int *)(unaff_EBP - 0xc4) + 1;
        *(int *)(unaff_EBP - 0xc4) = iVar25;
      } while (iVar25 < *(int *)(unaff_EBP - 0xcc));
      puVar24 = *(undefined4 **)(unaff_EBP - 200);
    }
    puVar24[iVar25] = 0;
    uVar26 = FUN_004901e0(*(undefined4 **)
                           (unaff_EBX[4] + 4 +
                           (uint)*(byte *)(*(int *)(unaff_EBP - 0xdc) + 3 + iVar34 * 0x14) * 0x10),
                          *(int *)(unaff_EBP - 200),*(int *)(unaff_EBP - 0xcc),
                          *(int *)(*(int *)(unaff_EBP - 0xb8) + 0x10),(int *)(unaff_EBP - 0xc0));
    puVar24 = *(undefined4 **)(unaff_EBP - 200);
    *(undefined4 *)(unaff_EBP - 0xbc) = uVar26;
    FUN_00494b00((int)unaff_EBX,puVar24);
    uVar31 = *(uint *)(unaff_EBP - 0xc0);
    iVar34 = *(int *)(unaff_EBP - 0xb8);
    puVar18 = (uint *)(iVar34 + 0x10);
    uVar27 = *puVar18;
    *puVar18 = *puVar18 - uVar31;
    piVar29 = (int *)(iVar34 + 0x14);
    *piVar29 = (*piVar29 - ((int)uVar31 >> 0x1f)) - (uint)(uVar27 < uVar31);
    FUN_004b78c0((int)piVar19);
    if (*(int *)(unaff_EBP - 0xc0) != 0) {
      if (*(void **)(unaff_EBP - 0xbc) == (void *)0x0) goto LAB_004b57a6;
      FUN_004b79e0(piVar19,*(void **)(unaff_EBP - 0xbc),0xffffffff,'\x01',FUN_00466dd0);
    }
    FUN_004aec30(piVar19,(uint)*(byte *)(unaff_EBP - 0xec));
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    goto LAB_004b0d0b;
  case 0x70:
    iVar13 = *(int *)(iVar25 + 4 + iVar34 * 0x14);
    piVar19 = (int *)(*(int *)(unaff_EBP - 0xe0) + iVar13 * 0x28);
    iVar34 = *(int *)(iVar25 + 8 + iVar34 * 0x14);
    if (((*(byte *)(*(int *)(unaff_EBP - 0xe0) + 0x1c + iVar13 * 0x28) & 0x20) == 0) &&
       (FUN_004b7910(piVar19), (*(byte *)(piVar19 + 7) & 0x20) == 0)) goto LAB_004b57a6;
    FUN_004a6ed0((undefined4 *)piVar19[4],
                 *(uint *)(*(int *)(unaff_EBP - 0xe0) + 0x10 + iVar34 * 0x28),
                 *(uint *)(*(int *)(unaff_EBP - 0xe0) + 0x14 + iVar34 * 0x28));
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    goto LAB_004b0d0b;
  case 0x71:
    if (unaff_EBX[0x38] != 0) {
LAB_004af4ee:
      iVar34 = *(int *)(unaff_EBP - 0xd4);
      *(undefined4 *)(iVar34 + 0x58) = 9;
      *(undefined4 *)(unaff_EBP - 0xd0) = 9;
      FUN_004a9a30((int *)(iVar34 + 0x34),(int)unaff_EBX,&DAT_0056de50);
      uVar27 = 9;
      goto LAB_004b57cd;
    }
    iVar13 = *(int *)(iVar25 + 4 + iVar34 * 0x14);
    iVar25 = *(int *)(unaff_EBP - 0xe0) + iVar13 * 0x28;
    if (((*(byte *)(*(int *)(unaff_EBP - 0xe0) + 0x1c + iVar13 * 0x28) & 0x20) != 0) &&
       (iVar13 = FUN_004a6f70(*(undefined4 **)(iVar25 + 0x10),(undefined4 *)(unaff_EBP - 0xcc)),
       iVar13 != 0)) {
      FUN_004b7860((int *)(*(int *)(unaff_EBP - 0xe0) +
                          *(int *)(*(int *)(unaff_EBP - 0xdc) + 0xc + iVar34 * 0x14) * 0x28),
                   *(int *)(unaff_EBP - 0xcc),*(int *)(unaff_EBP - 200));
      unaff_ESI = *(int **)(unaff_EBP - 0xd8);
      goto LAB_004b0d0b;
    }
    FUN_004b78c0(iVar25);
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    iVar34 = *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar34 * 0x14);
    goto LAB_004b0d04;
  case 0x72:
    iVar13 = *(int *)(unaff_EBP - 0xe0);
    piVar19 = (int *)(iVar13 + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x28);
    iVar21 = *(int *)(iVar25 + 0xc + iVar34 * 0x14);
    iVar25 = *(int *)(iVar25 + 0x10 + iVar34 * 0x14);
    *(int *)(unaff_EBP - 0xcc) = iVar25;
    if ((*(byte *)(piVar19 + 7) & 0x20) == 0) {
      FUN_004b7910(piVar19);
      if ((*(byte *)(piVar19 + 7) & 0x20) == 0) goto LAB_004b57a0;
      iVar25 = *(int *)(unaff_EBP - 0xcc);
      iVar13 = *(int *)(unaff_EBP - 0xe0);
    }
    bVar11 = iVar25 < 0;
    if (iVar25 != 0) {
      if (bVar11) {
        bVar9 = 0xff;
      }
      else {
        bVar9 = (byte)iVar25 & 0xf;
      }
      iVar25 = FUN_004a6fd0((undefined4 *)piVar19[4],bVar9,*(uint *)(iVar13 + 0x10 + iVar21 * 0x28),
                            *(int *)(iVar13 + 0x14 + iVar21 * 0x28));
      *(int *)(unaff_EBP - 200) = iVar25;
      if (iVar25 != 0) goto LAB_004b4170;
      bVar11 = *(int *)(unaff_EBP - 0xcc) < 0;
    }
    if (bVar11) goto LAB_004af834;
    FUN_004a6ed0((undefined4 *)piVar19[4],
                 *(uint *)(*(int *)(unaff_EBP - 0xe0) + 0x10 + iVar21 * 0x28),
                 *(uint *)(*(int *)(unaff_EBP - 0xe0) + 0x14 + iVar21 * 0x28));
    unaff_EBX = *(int **)(unaff_EBP - 0xe4);
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    goto LAB_004b0d0b;
  case 0x73:
    iVar13 = *(int *)(iVar25 + 0x10 + iVar34 * 0x14);
    iVar21 = *(int *)(unaff_EBP - 0xdc);
    iVar25 = *(int *)(unaff_EBP - 0xe0);
    *(int *)(unaff_EBP - 0xb4) = iVar13;
    iVar25 = iVar25 + *(int *)(iVar21 + 0xc + iVar34 * 0x14) * 0x28;
    *(int *)(unaff_EBP - 0xc4) = iVar25;
    if (*(char *)(iVar21 + 3 + iVar34 * 0x14) != '\0') {
      iVar34 = *(int *)(iVar13 + 0x14);
      iVar21 = *(int *)(*(int *)(unaff_EBP - 0xd4) + 0xa0);
      *(int *)(unaff_EBP - 0xb0) = iVar34;
      *(int *)(unaff_EBP - 0xb8) = iVar21;
      while (iVar21 != 0) {
        if (*(int *)(iVar21 + 0x18) == iVar34) goto LAB_004af570;
        iVar21 = *(int *)(iVar21 + 4);
        *(int *)(unaff_EBP - 0xb8) = iVar21;
      }
    }
    iVar34 = *(int *)(unaff_EBP - 0xd4);
    if (unaff_EBX[0x1e] <= *(int *)(iVar34 + 0xa8)) {
      *(undefined4 *)(unaff_EBP - 0xd0) = 1;
      FUN_004a9a30((int *)(iVar34 + 0x34),(int)unaff_EBX,
                   (byte *)"too many levels of trigger recursion");
      uVar27 = 1;
      unaff_ESI = *(int **)(unaff_EBP - 0xd8);
      goto LAB_004b0d11;
    }
    if ((*(byte *)(iVar25 + 0x1c) & 0x40) == 0) {
      iVar34 = *(int *)(iVar13 + 8) + *(int *)(iVar13 + 0xc);
      *(int *)(unaff_EBP - 0xcc) = iVar34;
      sVar20 = *(int *)(iVar13 + 0x10) + (*(int *)(iVar13 + 0xc) + iVar34 * 10) * 4 + 0x48;
      *(size_t *)(unaff_EBP - 200) = sVar20;
      puVar24 = FUN_00494c20((int)unaff_EBX,sVar20);
      *(undefined4 **)(unaff_EBP - 0xb8) = puVar24;
      if (puVar24 == (undefined4 *)0x0) goto LAB_004b57a6;
      FUN_004b76e0(*(int **)(unaff_EBP - 0xc4));
      iVar34 = *(int *)(unaff_EBP - 0xd4);
      uVar26 = *(undefined4 *)(unaff_EBP - 0xe8);
      *(undefined2 *)(*(int *)(unaff_EBP - 0xc4) + 0x1c) = 0x40;
      *(undefined4 *)(*(int *)(unaff_EBP - 0xc4) + 0x10) = *(undefined4 *)(unaff_EBP - 0xb8);
      **(int **)(unaff_EBP - 0xb8) = iVar34;
      *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 0x3c) = *(undefined4 *)(unaff_EBP - 0xcc);
      *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 0x40) =
           *(undefined4 *)(*(int *)(unaff_EBP - 0xb4) + 0xc);
      *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 0x2c) = uVar26;
      *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 0xc) = *(undefined4 *)(iVar34 + 8);
      *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 0x34) = *(undefined4 *)(iVar34 + 0x18);
      *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 0x14) = *(undefined4 *)(iVar34 + 0x40);
      *(undefined2 *)(*(int *)(unaff_EBP - 0xb8) + 0x28) = *(undefined2 *)(iVar34 + 0x2e);
      *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 8) = *(undefined4 *)(iVar34 + 4);
      *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 0x30) = *(undefined4 *)(iVar34 + 0x1c);
      *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 0x18) =
           *(undefined4 *)(*(int *)(unaff_EBP - 0xb4) + 0x14);
      *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 0x10) = *(undefined4 *)(iVar34 + 0xb8);
      *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 0x38) = *(undefined4 *)(iVar34 + 0xb4);
      iVar25 = *(int *)(unaff_EBP - 0xb8);
      iVar21 = *(int *)(iVar25 + 0x3c);
      iVar13 = iVar25 + 0x48;
      *(int *)(unaff_EBP - 0xc0) = iVar13;
      iVar21 = iVar25 + (iVar21 * 5 + 9) * 8;
      *(int *)(unaff_EBP - 0xbc) = iVar21;
      if (iVar13 != iVar21) {
        do {
          *(undefined2 *)(iVar13 + 0x1c) = 0x80;
          **(undefined4 **)(unaff_EBP - 0xc0) = unaff_EBX;
          iVar13 = *(int *)(unaff_EBP - 0xc0) + 0x28;
          *(int *)(unaff_EBP - 0xc0) = iVar13;
        } while (iVar13 != *(int *)(unaff_EBP - 0xbc));
        iVar34 = *(int *)(unaff_EBP - 0xd4);
        iVar25 = *(int *)(unaff_EBP - 0xb8);
      }
    }
    else {
      iVar25 = *(int *)(iVar25 + 0x10);
      *(int *)(unaff_EBP - 0xb8) = iVar25;
    }
    *(int *)(iVar34 + 0xa8) = *(int *)(iVar34 + 0xa8) + 1;
    uVar26 = *(undefined4 *)(unaff_EBP - 0x100);
    *(undefined4 *)(iVar25 + 4) = *(undefined4 *)(iVar34 + 0xa0);
    *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 0x20) = uVar26;
    *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 0x24) = *(undefined4 *)(unaff_EBP - 0xfc);
    *(undefined4 *)(*(int *)(unaff_EBP - 0xb8) + 0x44) = *(undefined4 *)(iVar34 + 100);
    iVar13 = *(int *)(unaff_EBP - 0xb8);
    puVar24 = *(undefined4 **)(unaff_EBP - 0xb4);
    *(int *)(iVar34 + 0xa0) = iVar13;
    iVar25 = iVar13 + 0x20;
    *(undefined4 *)(iVar34 + 100) = 0;
    *(int *)(iVar34 + 8) = iVar25;
    *(undefined4 *)(iVar34 + 0x18) = *(undefined4 *)(iVar13 + 0x3c);
    *(undefined2 *)(iVar34 + 0x2e) = *(undefined2 *)(iVar13 + 0x40);
    iVar13 = *(int *)(iVar34 + 0x18);
    *(int *)(unaff_EBP - 0xe0) = iVar25;
    iVar25 = iVar25 + (iVar13 + 1) * 0x28;
    *(int *)(iVar34 + 0x40) = iVar25;
    uVar26 = *puVar24;
    *(undefined4 *)(unaff_EBP - 0xdc) = uVar26;
    *(undefined4 *)(iVar34 + 4) = uVar26;
    *(undefined4 *)(iVar34 + 0x1c) = puVar24[1];
    _Dst = (void *)(iVar25 + (uint)*(ushort *)(iVar34 + 0x2e) * 4);
    *(void **)(iVar34 + 0xb8) = _Dst;
    sVar20 = puVar24[4];
    *(size_t *)(iVar34 + 0xb4) = sVar20;
    *(undefined4 *)(unaff_EBP - 0xe8) = 0xffffffff;
    memset(_Dst,0,sVar20);
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    goto LAB_004b0d0b;
  case 0x74:
    iVar25 = *(int *)(*(int *)(unaff_EBP - 0xd4) + 0xa0);
    *(int *)(unaff_EBP - 0xcc) = iVar25;
    puVar32 = (undefined8 *)
              (*(int *)(iVar25 + 0xc) +
              (*(int *)(*(int *)(iVar25 + 8) + 4 + *(int *)(iVar25 + 0x2c) * 0x14) +
              *(int *)(*(int *)(unaff_EBP - 0xdc) + 4 + iVar34 * 0x14)) * 0x28);
    *(undefined8 **)(unaff_EBP - 200) = puVar32;
    FUN_004b7c40(unaff_ESI,puVar32,0x1000);
    goto LAB_004b0d0b;
  case 0x75:
    uVar27 = *(uint *)(iVar25 + 8 + iVar34 * 0x14);
    if (*(int *)(iVar25 + 4 + iVar34 * 0x14) == 0) {
      iVar34 = *(int *)(unaff_EBP - 0xd4);
      puVar18 = (uint *)(iVar34 + 0x88);
      uVar31 = *puVar18;
      *puVar18 = *puVar18 + uVar27;
      piVar19 = (int *)(iVar34 + 0x8c);
      *piVar19 = *piVar19 + ((int)uVar27 >> 0x1f) + (uint)CARRY4(uVar31,uVar27);
    }
    else {
      puVar18 = (uint *)(unaff_EBX + 0x7a);
      uVar31 = *puVar18;
      *puVar18 = *puVar18 + uVar27;
      unaff_EBX[0x7b] = unaff_EBX[0x7b] + ((int)uVar27 >> 0x1f) + (uint)CARRY4(uVar31,uVar27);
    }
    goto LAB_004b0d0b;
  case 0x76:
    if (*(int *)(iVar25 + 4 + iVar34 * 0x14) == 0) {
      bVar11 = *(int *)(*(int *)(unaff_EBP - 0xd4) + 0x88) == 0 &&
               *(int *)(*(int *)(unaff_EBP - 0xd4) + 0x8c) == 0;
    }
    else {
      bVar11 = unaff_EBX[0x7a] == 0 && unaff_EBX[0x7b] == 0;
    }
LAB_004b0cfe:
    if (!bVar11) goto LAB_004b0d0b;
    break;
  case 0x77:
    iVar25 = *(int *)(*(int *)(unaff_EBP - 0xd4) + 0xa0);
    if (iVar25 == 0) {
      iVar25 = *(int *)(unaff_EBP - 0xe0) +
               *(int *)(*(int *)(unaff_EBP - 0xdc) + 4 + iVar34 * 0x14) * 0x28;
    }
    else {
      *(int *)(unaff_EBP - 200) = iVar25;
      for (iVar13 = *(int *)(iVar25 + 4); iVar13 != 0; iVar13 = *(int *)(iVar13 + 4)) {
        *(int *)(unaff_EBP - 200) = iVar13;
        iVar25 = iVar13;
      }
      iVar25 = *(int *)(iVar25 + 0xc) +
               *(int *)(*(int *)(unaff_EBP - 0xdc) + 4 + iVar34 * 0x14) * 0x28;
    }
    *(int *)(unaff_EBP - 0xcc) = iVar25;
    FUN_004b7410(iVar25);
    iVar34 = *(int *)(unaff_EBP - 0xe0) +
             *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar34 * 0x14) * 0x28;
    FUN_004b7410(iVar34);
    iVar25 = *(int *)(unaff_EBP - 0xcc);
    iVar13 = *(int *)(iVar34 + 0x14);
    if ((iVar13 < *(int *)(iVar25 + 0x14)) ||
       ((iVar13 <= *(int *)(iVar25 + 0x14) && (*(uint *)(iVar34 + 0x10) <= *(uint *)(iVar25 + 0x10))
        ))) goto LAB_004af570;
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    *(uint *)(iVar25 + 0x10) = *(uint *)(iVar34 + 0x10);
    *(int *)(iVar25 + 0x14) = iVar13;
    goto LAB_004b0d0b;
  case 0x78:
    iVar13 = *(int *)(iVar25 + 4 + iVar34 * 0x14);
    iVar21 = *(int *)(*(int *)(unaff_EBP - 0xe0) + 0x14 + iVar13 * 0x28);
    if (iVar21 < 0) goto LAB_004b0d0b;
    if (iVar21 < 1) {
      uVar27 = *(uint *)(*(int *)(unaff_EBP - 0xe0) + 0x10 + iVar13 * 0x28);
      goto joined_r0x004b4649;
    }
    break;
  case 0x79:
    iVar13 = *(int *)(*(int *)(unaff_EBP - 0xe0) + 0x14 +
                     *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x28);
    if ((0 < iVar13) || (-1 < iVar13)) goto LAB_004b0d0b;
    break;
  case 0x7a:
    iVar13 = *(int *)(iVar25 + 4 + iVar34 * 0x14);
    iVar21 = *(int *)(unaff_EBP - 0xe0);
    uVar31 = *(uint *)(iVar25 + 0xc + iVar34 * 0x14);
    puVar18 = (uint *)(iVar21 + 0x10 + iVar13 * 0x28);
    uVar27 = *puVar18;
    *puVar18 = *puVar18 + uVar31;
    piVar19 = (int *)(iVar21 + 0x14 + iVar13 * 0x28);
    *piVar19 = *piVar19 + ((int)uVar31 >> 0x1f) + (uint)CARRY4(uVar27,uVar31);
    unaff_EBX = *(int **)(unaff_EBP - 0xe4);
    if (*(int *)(iVar21 + 0x10 + iVar13 * 0x28) != 0 || *(int *)(iVar21 + 0x14 + iVar13 * 0x28) != 0
       ) goto LAB_004b0d0b;
    iVar34 = *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar34 * 0x14);
    goto LAB_004b0d04;
  case 0x7b:
    uVar27 = (uint)*(byte *)(iVar25 + 3 + iVar34 * 0x14);
    *(uint *)(unaff_EBP - 0xcc) = uVar27;
    iVar25 = *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 8 + iVar34 * 0x14) * 0x28;
    iVar13 = *(int *)(unaff_EBP - 0xd4);
    *(int *)(unaff_EBP - 0xc0) = iVar25;
    iVar13 = *(int *)(iVar13 + 0xc);
    iVar21 = 0;
    *(int *)(unaff_EBP - 0x7c) = iVar13;
    *(undefined4 *)(unaff_EBP - 200) = 0;
    if (uVar27 != 0) {
      while( true ) {
        *(int *)(iVar13 + iVar21 * 4) = iVar25;
        FUN_004b7cb0(*(int *)(unaff_EBP - 0xc0));
        iVar21 = *(int *)(unaff_EBP - 200) + 1;
        iVar25 = *(int *)(unaff_EBP - 0xc0) + 0x28;
        *(int *)(unaff_EBP - 200) = iVar21;
        *(int *)(unaff_EBP - 0xc0) = iVar25;
        if (*(int *)(unaff_EBP - 0xcc) <= iVar21) break;
        iVar13 = *(int *)(unaff_EBP - 0x7c);
      }
    }
    iVar13 = *(int *)(unaff_EBP - 0xdc);
    iVar25 = *(int *)(unaff_EBP - 0xe0);
    *(undefined4 *)(unaff_EBP - 0xbc) = *(undefined4 *)(iVar13 + 0x10 + iVar34 * 0x14);
    iVar25 = iVar25 + *(int *)(iVar13 + 0xc + iVar34 * 0x14) * 0x28;
    *(int *)(unaff_EBP - 0xc4) = iVar25;
    *(int *)(unaff_EBP - 0x8c) = iVar25;
    *(int *)(iVar25 + 0x18) = *(int *)(iVar25 + 0x18) + 1;
    iVar25 = *(int *)(unaff_EBP - 0xbc);
    *(undefined2 *)(unaff_EBP - 0x98) = 1;
    *(undefined4 *)(unaff_EBP - 0xb0) = 0;
    *(undefined4 *)(unaff_EBP - 0x90) = 0;
    *(undefined4 *)(unaff_EBP - 0x94) = 0;
    *(int **)(unaff_EBP - 0xb4) = unaff_EBX;
    *(undefined4 *)(unaff_EBP - 0x84) = 0;
    *(undefined4 *)(unaff_EBP - 0x88) = 0;
    *(undefined4 *)(unaff_EBP - 0x80) = 0;
    if ((*(byte *)(iVar25 + 3) & 8) != 0) {
      *(undefined4 *)(unaff_EBP - 0x88) = *(undefined4 *)(iVar13 + -4 + iVar34 * 0x14);
    }
    (**(code **)(iVar25 + 0x10))();
    if (*(int *)(unaff_EBP - 0x84) != 0) {
      FUN_004ae680((int *)(unaff_EBP - 0xb4),1);
      FUN_004a9a30((int *)(*(int *)(unaff_EBP - 0xd4) + 0x34),(int)unaff_EBX,&DAT_0056de50);
      *(undefined4 *)(unaff_EBP - 0xd0) = *(undefined4 *)(unaff_EBP - 0x84);
    }
    if (*(int *)(unaff_EBP - 0x80) != 0) {
      iVar34 = *(int *)(iVar13 + -0x10 + iVar34 * 0x14);
      *(int *)(unaff_EBP - 200) = iVar34;
      if (iVar34 != 0) {
        FUN_004b7860((int *)(*(int *)(unaff_EBP - 0xe0) + iVar34 * 0x28),1,0);
      }
    }
    FUN_004b76e0((int *)(unaff_EBP - 0xb4));
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    goto LAB_004b0d0b;
  case 0x7c:
    piVar19 = (int *)(*(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x28);
    *(int **)(unaff_EBP - 0xcc) = piVar19;
    iVar34 = FUN_004b7010(piVar19,*(int *)(iVar25 + 0x10 + iVar34 * 0x14));
    *(int *)(unaff_EBP - 0xd0) = iVar34;
    if (iVar34 != 0) {
      FUN_004ae680(*(int **)(unaff_EBP - 0xcc),1);
      FUN_004a9a30((int *)(*(int *)(unaff_EBP - 0xd4) + 0x34),(int)unaff_EBX,&DAT_0056de50);
    }
    FUN_004aec30(*(int **)(unaff_EBP - 0xcc),(uint)*(byte *)(unaff_EBP - 0xec));
    bVar11 = FUN_004b7d90(*(int **)(unaff_EBP - 0xcc));
    iVar34 = CONCAT31(extraout_var_01,bVar11);
    goto joined_r0x004b48db;
  case 0x7d:
    *(undefined4 *)(unaff_EBP - 200) = 0;
    *(undefined4 *)(unaff_EBP - 0xc0) = 0xffffffff;
    *(undefined4 *)(unaff_EBP - 0xc4) = 0xffffffff;
    iVar25 = FUN_00492280((int)unaff_EBX,*(int *)(iVar25 + 4 + iVar34 * 0x14),
                          *(int *)(iVar25 + 8 + iVar34 * 0x14),(undefined4 *)(unaff_EBP - 0xc4),
                          (undefined4 *)(unaff_EBP - 0xc0));
    *(int *)(unaff_EBP - 0xd0) = iVar25;
    if (iVar25 == 5) {
      *(undefined4 *)(unaff_EBP - 0xd0) = 0;
      *(undefined4 *)(unaff_EBP - 200) = 1;
    }
    iVar25 = *(int *)(unaff_EBP - 0xdc);
    iVar13 = *(int *)(unaff_EBP - 0xe0);
    in_EAX = 0;
    *(undefined4 *)(unaff_EBP - 0xcc) = 0;
    param_1 = (int *)(iVar13 + *(int *)(iVar25 + 0xc + iVar34 * 0x14) * 0x28);
    *(int **)(unaff_EBP - 0xbc) = param_1;
    goto LAB_004b4970;
  case 0x7e:
    uVar27 = *(uint *)(iVar25 + 0xc + iVar34 * 0x14);
    iVar25 = *(int *)(unaff_EBP - 0xdc);
    *(uint *)(unaff_EBP - 0xc4) = uVar27;
    piVar19 = *(int **)(unaff_EBX[4] + 4 + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x10);
    *(int **)(unaff_EBP - 0xcc) = piVar19;
    puVar24 = (undefined4 *)piVar19[1];
    *(int **)(unaff_EBP - 0xf0) = piVar19;
    puVar18 = (uint *)*puVar24;
    *(uint **)(unaff_EBP - 200) = puVar18;
    uVar31 = (uint)*(byte *)((int)puVar18 + 5);
    if (uVar27 == 0xffffffff) {
      uVar27 = uVar31;
    }
    *(uint *)(unaff_EBP - 0xc0) = uVar31;
    *(uint *)(unaff_EBP - 0xc4) = uVar27;
    if ((2 < *(byte *)((int)puVar18 + 0xf)) ||
       (((*(int *)puVar18[0x10] != 0 && (-1 < (int)puVar18[0x13])) &&
        ((0 < (int)puVar18[0x13] || (puVar18[0x12] != 0)))))) {
      *(uint *)(unaff_EBP - 0xc4) = uVar31;
      uVar27 = uVar31;
    }
    pcVar22 = "";
    if (*(char *)((int)puVar18 + 0xe) == '\0') {
      pcVar22 = (char *)puVar18[0x24];
    }
    *(char **)(unaff_EBP - 0xbc) = pcVar22;
    if (uVar27 == 5) {
      uVar27 = FUN_004aa9b0(pcVar22);
      if ((uVar27 != 0) && (iVar25 = FUN_004a2c50((int)puVar18), iVar25 != 0)) {
        piVar19 = *(int **)(unaff_EBP - 0xf0);
        uVar27 = extraout_EDX_00;
        goto LAB_004b4abb;
      }
      *(uint *)(unaff_EBP - 0xc4) = uVar31;
      uVar27 = uVar31;
LAB_004b4a59:
      if (*(int *)(unaff_EBP - 0xd0) != 0) goto LAB_004b4a62;
    }
    else {
LAB_004b4abb:
      if ((uVar27 == uVar31) || ((uVar31 != 5 && (uVar27 != 5)))) goto LAB_004b4a59;
      if ((*(char *)(*(int *)(unaff_EBP - 0xe4) + 0x36) == '\0') ||
         (1 < *(int *)(*(int *)(unaff_EBP - 0xe4) + 0x84))) {
        unaff_EBX = *(int **)(unaff_EBP - 0xe4);
        iVar34 = *(int *)(unaff_EBP - 0xd4);
        *(undefined4 *)(unaff_EBP - 0xd0) = 1;
        FUN_004a9a30((int *)(iVar34 + 0x34),(int)unaff_EBX,
                     (byte *)"cannot change %s wal mode from within a transaction");
        uVar27 = 1;
        unaff_ESI = *(int **)(unaff_EBP - 0xd8);
        goto LAB_004b0d11;
      }
      if (uVar31 == 5) {
        iVar25 = FUN_004a18e0((int *)puVar18);
        *(int *)(unaff_EBP - 0xd0) = iVar25;
        if (iVar25 == 0) {
          FUN_004a26f0(*(uint **)(unaff_EBP - 200),*(uint *)(unaff_EBP - 0xc4));
          uVar27 = *(uint *)(unaff_EBP - 0xc4);
          piVar19 = *(int **)(unaff_EBP - 0xcc);
LAB_004b4b68:
          uVar23 = FUN_00491d30(piVar19,(uVar27 == 5) + 1);
          uVar31 = *(uint *)(unaff_EBP - 0xc0);
          uVar27 = *(uint *)(unaff_EBP - 0xc4);
          puVar18 = *(uint **)(unaff_EBP - 200);
          *(uint *)(unaff_EBP - 0xd0) = uVar23;
          goto LAB_004b4a59;
        }
        puVar18 = *(uint **)(unaff_EBP - 200);
        uVar31 = *(uint *)(unaff_EBP - 0xc0);
      }
      else {
        if (uVar31 == 4) {
          FUN_004a26f0(puVar18,2);
          uVar31 = *(uint *)(unaff_EBP - 0xc0);
          uVar27 = *(uint *)(unaff_EBP - 0xc4);
          puVar18 = *(uint **)(unaff_EBP - 200);
          piVar19 = *(int **)(unaff_EBP - 0xcc);
        }
        if (*(int *)(unaff_EBP - 0xd0) == 0) goto LAB_004b4b68;
      }
LAB_004b4a62:
      uVar27 = uVar31;
      *(uint *)(unaff_EBP - 0xc4) = uVar27;
    }
    uVar10 = FUN_004a26f0(puVar18,uVar27);
    iVar25 = *(int *)(unaff_EBP - 0xe0);
    *(uint *)(unaff_EBP - 0xc4) = CONCAT31(extraout_var_02,uVar10);
    piVar19 = (int *)(iVar25 + *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar34 * 0x14) * 0x28);
    *(undefined2 *)(piVar19 + 7) = 0xa02;
    iVar34 = *(int *)(unaff_EBP - 0xc4);
    *(int **)(unaff_EBP - 0xd8) = piVar19;
    if (iVar34 == 6) {
      pcVar22 = (char *)0x0;
    }
    else {
      pcVar22 = (&PTR_s_delete_0056a9c4)[iVar34];
    }
    piVar19[1] = (int)pcVar22;
    uVar27 = FUN_004aa9b0(pcVar22);
    piVar19[6] = uVar27;
    bVar9 = *(byte *)(unaff_EBP - 0xec);
    *(undefined1 *)((int)piVar19 + 0x1f) = 1;
    FUN_004aec30(piVar19,(uint)bVar9);
    unaff_EBX = *(int **)(unaff_EBP - 0xe4);
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    goto LAB_004b0d0b;
  case 0x7f:
    uVar27 = FUN_004a74f0((int *)(*(int *)(unaff_EBP - 0xd4) + 0x34),(int)unaff_EBX);
    *(uint *)(unaff_EBP - 0xd0) = uVar27;
    goto LAB_004b0d11;
  case 0x80:
    puVar24 = *(undefined4 **)(unaff_EBX[4] + 4 + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x10);
    *(undefined4 **)(unaff_EBP - 0xcc) = puVar24;
    uVar27 = FUN_0048ff20(puVar24);
    *(uint *)(unaff_EBP - 0xd0) = uVar27;
    if (uVar27 == 0x65) {
      *(int *)(unaff_EBP - 0xe8) = *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar34 * 0x14) + -1;
      uVar27 = 0;
      *(undefined4 *)(unaff_EBP - 0xd0) = 0;
    }
    goto LAB_004b0d11;
  case 0x81:
    if (*(int *)(iVar25 + 4 + iVar34 * 0x14) == 0) {
      FUN_00496370((int)unaff_EBX);
    }
    else {
      puVar18 = (uint *)(*(int *)(unaff_EBP - 0xd4) + 0x60);
      *puVar18 = *puVar18 | 0x20;
    }
    goto LAB_004b0d0b;
  case 0x82:
    *(undefined2 *)(unaff_ESI + 7) = 8;
    *(undefined8 *)(unaff_ESI + 2) = **(undefined8 **)(iVar25 + 0x10 + iVar34 * 0x14);
    goto LAB_004b0d0b;
  case 0x83:
    cVar8 = *(char *)(iVar25 + 0xc + iVar34 * 0x14);
    *(char *)(unaff_EBP - 0x114) = cVar8;
    if ((cVar8 == '\0') && ((unaff_EBX[6] & 0x800U) != 0)) goto LAB_004b0d0b;
    uVar27 = FUN_00490810(*(undefined8 **)
                           (unaff_EBX[4] + 4 + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x10),
                          *(int *)(iVar25 + 8 + iVar34 * 0x14),
                          (char)*(undefined4 *)(unaff_EBP - 0x114));
    *(uint *)(unaff_EBP - 0xd0) = uVar27;
    if ((char)uVar27 == '\x06') {
      FUN_004a9a30((int *)(*(int *)(unaff_EBP - 0xd4) + 0x34),(int)unaff_EBX,
                   (byte *)"database table is locked: %s");
      goto LAB_004b0d0b;
    }
    goto LAB_004b0d11;
  case 0x84:
    iVar34 = *(int *)(iVar25 + 0x10 + iVar34 * 0x14);
    *(int *)(unaff_EBP - 0xcc) = iVar34;
    iVar34 = FUN_004b96f0((int)unaff_EBX,iVar34);
    *(int *)(unaff_EBP - 0xd0) = iVar34;
    if (*(int *)(unaff_EBP - 0xcc) != 0) {
      FUN_0047e200(*(int **)(unaff_EBP - 0xd4),*(int *)(*(int *)(unaff_EBP - 0xcc) + 8));
    }
    goto LAB_004b0d0b;
  case 0x85:
    uVar27 = FUN_004b9980((int)unaff_EBX,*(int *)(iVar25 + 4 + iVar34 * 0x14),
                          *(byte **)(iVar25 + 0x10 + iVar34 * 0x14),
                          (undefined4 *)(*(int *)(unaff_EBP - 0xd4) + 0x34));
    *(uint *)(unaff_EBP - 0xd0) = uVar27;
    goto LAB_004b0d11;
  case 0x86:
    *(uint *)(*(int *)(unaff_EBP - 0xd4) + 0x60) =
         *(uint *)(*(int *)(unaff_EBP - 0xd4) + 0x60) & 0xfffffffb | 8;
    uVar27 = FUN_004b9aa0((int)unaff_EBX,*(int *)(iVar25 + 4 + iVar34 * 0x14),
                          *(byte **)(iVar25 + 0x10 + iVar34 * 0x14));
    puVar18 = (uint *)(*(int *)(unaff_EBP - 0xd4) + 0x60);
    *puVar18 = *puVar18 & 0xfffffff3;
    *(uint *)(unaff_EBP - 0xd0) = uVar27;
    goto LAB_004b0d11;
  case 0x87:
    *(undefined4 *)(unaff_EBP - 0xcc) = 0;
    *(undefined4 *)(unaff_EBP - 200) = 0;
    piVar19 = *(int **)(*(int *)(iVar25 + 0x10 + iVar34 * 0x14) + 8);
    *(int **)(unaff_EBP - 0xc4) = piVar19;
    iVar25 = *piVar19;
    *(int *)(unaff_EBP - 0xc0) = iVar25;
    uVar26 = (**(code **)(iVar25 + 0x18))(piVar19);
    iVar25 = *(int *)(unaff_EBP - 0xc4);
    *(undefined4 *)(unaff_EBP - 0xd0) = uVar26;
    FUN_0047e200(*(int **)(unaff_EBP - 0xd4),iVar25);
    uVar27 = *(uint *)(unaff_EBP - 0xd0);
    if (uVar27 == 0) {
      **(undefined4 **)(unaff_EBP - 200) = *(undefined4 *)(unaff_EBP - 0xc4);
      puVar24 = FUN_0046c260(*(int **)(unaff_EBP - 0xd4),
                             *(int *)(*(int *)(unaff_EBP - 0xdc) + 4 + iVar34 * 0x14),0,0xffffffff,0
                            );
      *(undefined4 **)(unaff_EBP - 0xcc) = puVar24;
      if (puVar24 == (undefined4 *)0x0) {
        *(undefined1 *)(unaff_EBX + 0xe) = 1;
        (**(code **)(*(int *)(unaff_EBP - 0xc0) + 0x1c))();
      }
      else {
        puVar24[9] = *(undefined4 *)(unaff_EBP - 200);
        *(undefined4 *)(*(int *)(unaff_EBP - 0xcc) + 0x28) =
             *(undefined4 *)**(undefined4 **)(unaff_EBP - 200);
      }
      goto LAB_004b0d0b;
    }
    goto LAB_004b0d11;
  case 0x88:
    iVar13 = *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 0xc + iVar34 * 0x14) * 0x28;
    iVar21 = *(int *)(unaff_EBP - 0xdc);
    *(int *)(unaff_EBP - 0xc0) = iVar13;
    iVar25 = iVar13 + 0x28;
    *(int *)(unaff_EBP - 0xbc) = iVar25;
    iVar21 = *(int *)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                     *(int *)(iVar21 + 4 + iVar34 * 0x14) * 4);
    *(int *)(unaff_EBP - 0xb0) = iVar21;
    puVar24 = *(undefined4 **)(iVar21 + 0x24);
    *(undefined4 **)(unaff_EBP - 0xb8) = puVar24;
    *(undefined4 **)(unaff_EBP - 0x104) = puVar24;
    puVar24 = (undefined4 *)*puVar24;
    *(undefined4 **)(unaff_EBP - 0xb4) = puVar24;
    uVar26 = *puVar24;
    *(undefined4 *)(unaff_EBP - 0xc4) = uVar26;
    iVar21 = *(int *)(iVar13 + 0x38);
    *(undefined4 *)(unaff_EBP - 0xd0) = uVar26;
    *(int *)(unaff_EBP - 0xcc) = iVar21;
    uVar26 = *(undefined4 *)(iVar13 + 0x10);
    *(undefined4 *)(unaff_EBP - 0xf0) = uVar26;
    *(undefined4 *)(unaff_EBP - 200) = uVar26;
    iVar14 = *(int *)(unaff_EBP - 0xd4);
    iVar30 = 0;
    iVar13 = *(int *)(iVar14 + 0xc);
    *(undefined4 *)(unaff_EBP - 0xac) = 0;
    *(int *)(unaff_EBP - 0xa4) = iVar13;
    *(undefined4 *)(unaff_EBP - 0xa8) = 0;
    if (iVar21 < 1) {
      iVar25 = *(int *)(unaff_EBP - 0xd0);
    }
    else {
      while( true ) {
        *(int *)(iVar13 + iVar30 * 4) = iVar25 + (iVar30 + 1) * 0x28;
        FUN_004b7cb0(*(int *)(*(int *)(unaff_EBP - 0xa4) + *(int *)(unaff_EBP - 0xa8) * 4));
        iVar21 = *(int *)(unaff_EBP - 0xcc);
        iVar13 = *(int *)(unaff_EBP - 0xa4);
        iVar30 = *(int *)(unaff_EBP - 0xa8) + 1;
        *(int *)(unaff_EBP - 0xa8) = iVar30;
        if (iVar21 <= iVar30) break;
        iVar25 = *(int *)(unaff_EBP - 0xbc);
      }
      uVar26 = *(undefined4 *)(unaff_EBP - 0xb8);
      iVar25 = *(int *)(unaff_EBP - 0xc4);
      *(undefined4 *)(unaff_EBP - 0xf0) = *(undefined4 *)(unaff_EBP - 200);
      iVar14 = *(int *)(unaff_EBP - 0xd4);
      *(undefined4 *)(unaff_EBP - 0x104) = uVar26;
    }
    iVar13 = *(int *)(unaff_EBP - 0xdc);
    *(uint *)(*(int *)(unaff_EBP - 0xd4) + 0x60) = *(uint *)(iVar14 + 0x60) & 0xfffffff7 | 4;
    uVar26 = (**(code **)(iVar25 + 0x20))
                       (*(undefined4 *)(unaff_EBP - 0x104),*(undefined4 *)(unaff_EBP - 0xf0),
                        *(undefined4 *)(iVar13 + 0x10 + iVar34 * 0x14),iVar21);
    iVar25 = *(int *)(unaff_EBP - 0xb4);
    *(undefined4 *)(unaff_EBP - 0xd0) = uVar26;
    piVar19 = *(int **)(unaff_EBP - 0xd4);
    puVar18 = (uint *)(piVar19 + 0x18);
    *puVar18 = *puVar18 & 0xfffffff3;
    FUN_0047e200(piVar19,iVar25);
    if (*(int *)(unaff_EBP - 0xd0) == 0) {
      iVar25 = (**(code **)(*(int *)(unaff_EBP - 0xc4) + 0x28))();
      *(int *)(unaff_EBP - 0xac) = iVar25;
    }
    else {
      iVar25 = *(int *)(unaff_EBP - 0xac);
    }
    if (iVar25 != 0) {
      *(int *)(unaff_EBP - 0xe8) = *(int *)(iVar13 + 8 + iVar34 * 0x14) + -1;
    }
    unaff_EBX = *(int **)(unaff_EBP - 0xe4);
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    *(undefined1 *)(*(int *)(unaff_EBP - 0xb0) + 0x1c) = 0;
    goto LAB_004b0d0b;
  case 0x89:
    iVar13 = *(int *)(*(int *)(*(int *)(unaff_EBP - 0xd4) + 0x40) +
                     *(int *)(iVar25 + 4 + iVar34 * 0x14) * 4);
    iVar25 = *(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 0xc + iVar34 * 0x14) * 0x28;
    *(int *)(unaff_EBP - 0xc4) = iVar25;
    if (*(char *)(iVar13 + 0x1c) != '\0') {
      FUN_004b78c0(iVar25);
      unaff_ESI = *(int **)(unaff_EBP - 0xd8);
      goto LAB_004b0d0b;
    }
    puVar24 = (undefined4 *)**(undefined4 **)(iVar13 + 0x24);
    *(undefined4 **)(unaff_EBP - 0xcc) = puVar24;
    *(undefined4 *)(unaff_EBP - 200) = *puVar24;
    memset((void *)(unaff_EBP - 0xbc),0,0x40);
    FUN_004b7500((int *)(unaff_EBP - 0xb4),*(undefined8 **)(unaff_EBP - 0xc4));
    *(ushort *)(unaff_EBP - 0x98) = (ushort)*(undefined4 *)(unaff_EBP - 0x98) & 0xbe01 | 1;
    uVar26 = (**(code **)(*(int *)(unaff_EBP - 200) + 0x2c))
                       (*(undefined4 *)(iVar13 + 0x24),unaff_EBP - 0xbc,
                        *(undefined4 *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar34 * 0x14));
    iVar34 = *(int *)(unaff_EBP - 0xcc);
    *(undefined4 *)(unaff_EBP - 0xd0) = uVar26;
    FUN_0047e200(*(int **)(unaff_EBP - 0xd4),iVar34);
    iVar34 = *(int *)(unaff_EBP - 0xd0);
    if (*(int *)(unaff_EBP - 0x84) != 0) {
      iVar34 = *(int *)(unaff_EBP - 0x84);
    }
    bVar9 = *(byte *)(unaff_EBP - 0xec);
    *(int *)(unaff_EBP - 0xd0) = iVar34;
    FUN_004aec30((int *)(unaff_EBP - 0xb4),(uint)bVar9);
    FUN_004b7500(*(int **)(unaff_EBP - 0xc4),(undefined8 *)(unaff_EBP - 0xb4));
    bVar11 = FUN_004b7d90(*(int **)(unaff_EBP - 0xc4));
    if (CONCAT31(extraout_var_03,bVar11) != 0) goto LAB_004b5780;
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    goto LAB_004b0d0b;
  case 0x8a:
    iVar13 = *(int *)(unaff_EBP - 0xd4);
    *(undefined4 *)(unaff_EBP - 0xc4) = 0;
    iVar25 = *(int *)(*(int *)(iVar13 + 0x40) + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 4);
    *(int *)(unaff_EBP - 0xc0) = iVar25;
    if (*(char *)(iVar25 + 0x1c) != '\0') goto LAB_004b0d0b;
    piVar19 = *(int **)(unaff_EBP - 0xd4);
    piVar29 = (int *)**(undefined4 **)(iVar25 + 0x24);
    *(int **)(unaff_EBP - 0xcc) = piVar29;
    iVar25 = *piVar29;
    iVar13 = *(int *)(unaff_EBP - 0xd4);
    *(int *)(unaff_EBP - 200) = iVar25;
    piVar19[0x18] = *(uint *)(iVar13 + 0x60) & 0xfffffff7 | 4;
    uVar26 = (**(code **)(iVar25 + 0x24))();
    iVar25 = *(int *)(unaff_EBP - 0xcc);
    *(undefined4 *)(unaff_EBP - 0xd0) = uVar26;
    piVar19[0x18] = piVar19[0x18] & 0xfffffff3;
    FUN_0047e200(piVar19,iVar25);
    unaff_EBX = *(int **)(unaff_EBP - 0xe4);
    if (*(int *)(unaff_EBP - 0xd0) == 0) {
      iVar25 = (**(code **)(*(int *)(unaff_EBP - 200) + 0x28))();
      *(int *)(unaff_EBP - 0xc4) = iVar25;
    }
    else {
      iVar25 = *(int *)(unaff_EBP - 0xc4);
    }
    if (iVar25 != 0) goto LAB_004b0d0b;
    iVar34 = *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar34 * 0x14);
    goto LAB_004b0d04;
  case 0x8b:
    goto switchD_004af4da_caseD_8b;
  case 0x8c:
    piVar19 = *(int **)(*(int *)(iVar25 + 0x10 + iVar34 * 0x14) + 8);
    *(int **)(unaff_EBP - 0xcc) = piVar19;
    iVar13 = *piVar19;
    *(int *)(unaff_EBP - 200) = iVar13;
    iVar25 = *(int *)(iVar25 + 8 + iVar34 * 0x14);
    *(int *)(unaff_EBP - 0xc4) = iVar25;
    if (*(int *)(iVar13 + 0x34) == 0) goto LAB_004b0d0b;
    iVar30 = unaff_EBX[0xf];
    iVar21 = *(int *)(unaff_EBP - 0xdc);
    iVar13 = *(int *)(unaff_EBP - 0xe0);
    *(undefined4 *)(unaff_EBP - 0xb4) = *(undefined4 *)(*(int *)(unaff_EBP - 0xd4) + 0xc);
    iVar14 = *(int *)(iVar21 + 0xc + iVar34 * 0x14);
    *(undefined4 *)(unaff_EBP - 0xc0) = 0;
    iVar13 = iVar13 + iVar14 * 0x28;
    *(int *)(unaff_EBP - 0xb0) = iVar13;
    if (0 < iVar25) {
      do {
        FUN_004b7cb0(iVar13);
        *(undefined4 *)(*(int *)(unaff_EBP - 0xb4) + *(int *)(unaff_EBP - 0xc0) * 4) =
             *(undefined4 *)(unaff_EBP - 0xb0);
        iVar25 = *(int *)(unaff_EBP - 0xc0) + 1;
        iVar13 = *(int *)(unaff_EBP - 0xb0) + 0x28;
        *(int *)(unaff_EBP - 0xb0) = iVar13;
        *(int *)(unaff_EBP - 0xc0) = iVar25;
      } while (iVar25 < *(int *)(unaff_EBP - 0xc4));
    }
    iVar25 = *(int *)(unaff_EBP - 0xe4);
    *(undefined1 *)(iVar25 + 0x3c) = *(undefined1 *)(iVar21 + 3 + iVar34 * 0x14);
    uVar26 = (**(code **)(*(int *)(unaff_EBP - 200) + 0x34))
                       (*(undefined4 *)(unaff_EBP - 0xcc),*(undefined4 *)(unaff_EBP - 0xc4),
                        *(undefined4 *)(unaff_EBP - 0xb4));
    *(char *)(iVar25 + 0x3c) = (char)iVar30;
    iVar25 = *(int *)(unaff_EBP - 0xcc);
    piVar19 = *(int **)(unaff_EBP - 0xd4);
    *(undefined4 *)(unaff_EBP - 0xd0) = uVar26;
    FUN_0047e200(piVar19,iVar25);
    if (*(int *)(unaff_EBP - 0xd0) == 0) {
      unaff_EBX = *(int **)(unaff_EBP - 0xe4);
      if (*(int *)(*(int *)(unaff_EBP - 0xdc) + 4 + iVar34 * 0x14) != 0) {
        uVar26 = *(undefined4 *)(unaff_EBP - 0xb8);
        iVar34 = *(int *)(unaff_EBP - 0xbc);
        unaff_EBX[8] = iVar34;
        *(undefined4 *)(unaff_EBP - 0xfc) = uVar26;
        unaff_EBX[9] = *(int *)(unaff_EBP - 0xb8);
        piVar19[0x19] = piVar19[0x19] + 1;
        unaff_ESI = *(int **)(unaff_EBP - 0xd8);
        *(int *)(unaff_EBP - 0x100) = iVar34;
        goto LAB_004b0d0b;
      }
    }
    else {
      if ((*(int *)(unaff_EBP - 0xd0) == 0x13) &&
         (*(char *)(*(int *)(*(int *)(unaff_EBP - 0xdc) + 0x10 + iVar34 * 0x14) + 0x10) != '\0')) {
        cVar8 = *(char *)(*(int *)(unaff_EBP - 0xdc) + 3 + iVar34 * 0x14);
        if (cVar8 != '\x04') {
          if (cVar8 == '\x05') {
            unaff_EBX = *(int **)(unaff_EBP - 0xe4);
            *(undefined1 *)(piVar19 + 0x17) = 2;
            unaff_ESI = *(int **)(unaff_EBP - 0xd8);
          }
          else {
            unaff_EBX = *(int **)(unaff_EBP - 0xe4);
            *(char *)(piVar19 + 0x17) = cVar8;
            unaff_ESI = *(int **)(unaff_EBP - 0xd8);
          }
          goto LAB_004b0d0b;
        }
        unaff_EBX = *(int **)(unaff_EBP - 0xe4);
        unaff_ESI = *(int **)(unaff_EBP - 0xd8);
        *(undefined4 *)(unaff_EBP - 0xd0) = 0;
        uVar27 = 0;
        goto LAB_004b0d11;
      }
      unaff_EBX = *(int **)(unaff_EBP - 0xe4);
    }
    piVar19[0x19] = piVar19[0x19] + 1;
    unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    goto LAB_004b0d0b;
  case 0x8d:
    piVar19 = (int *)(*(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x28);
    uVar4 = *(ushort *)(piVar19 + 7);
    if ((uVar4 & 1) != 0) goto LAB_004af570;
    *(ushort *)(piVar19 + 7) = uVar4 >> 3 & 2 | uVar4;
    if (((uVar4 >> 3 & 2) == 0 && (uVar4 & 2) == 0) && ((uVar4 & 0xc) != 0)) {
      FUN_004b7cf0(piVar19,(uint)*(byte *)(unaff_EBP - 0xec));
    }
    *(ushort *)(piVar19 + 7) = *(ushort *)(piVar19 + 7) & 0xfff3;
    if ((*(ushort *)(piVar19 + 7) & 0x4000) == 0) {
      uVar27 = 0;
      *(ushort *)(piVar19 + 7) = *(ushort *)(piVar19 + 7) & 0xbfe3;
      *(undefined4 *)(unaff_EBP - 0xd0) = 0;
LAB_004b0616:
      unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    }
    else {
      uVar27 = FUN_004b6fa0(piVar19);
      *(ushort *)(piVar19 + 7) = *(ushort *)(piVar19 + 7) & 0xbfe3;
      unaff_ESI = *(int **)(unaff_EBP - 0xd8);
      *(uint *)(unaff_EBP - 0xd0) = uVar27;
    }
    goto LAB_004b0d11;
  case 0x8e:
    piVar19 = (int *)(*(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x28);
    uVar4 = *(ushort *)(piVar19 + 7);
    if ((uVar4 & 1) != 0) goto LAB_004af570;
    if ((uVar4 & 0x10) == 0) {
      if (((uVar4 & 2) == 0) && ((uVar4 & 0xc) != 0)) {
        FUN_004b7cf0(piVar19,(uint)*(byte *)(unaff_EBP - 0xec));
      }
      *(ushort *)(piVar19 + 7) = *(ushort *)(piVar19 + 7) & 0xbe10 | 0x10;
      unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    }
    else {
      *(ushort *)(piVar19 + 7) = uVar4 & 0xfe10;
      unaff_ESI = *(int **)(unaff_EBP - 0xd8);
    }
    goto LAB_004b0d0b;
  case 0x8f:
    FUN_004b75f0(*(int *)(unaff_EBP - 0xe0) + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x28);
    goto LAB_004b0d0b;
  case 0x90:
    iVar34 = *(int *)(iVar25 + 4 + iVar34 * 0x14);
    if ((*(byte *)(*(int *)(unaff_EBP - 0xe0) + 0x1c + iVar34 * 0x28) & 1) == 0) {
      FUN_004b7410(*(int *)(unaff_EBP - 0xe0) + iVar34 * 0x28);
    }
    goto LAB_004b0d0b;
  case 0x91:
    iVar34 = *(int *)(iVar25 + 4 + iVar34 * 0x14);
    if ((*(byte *)(*(int *)(unaff_EBP - 0xe0) + 0x1c + iVar34 * 0x28) & 1) == 0) {
      FUN_004b7670(*(int *)(unaff_EBP - 0xe0) + iVar34 * 0x28);
    }
    goto LAB_004b0d0b;
  case 0x92:
    unaff_ESI[4] = *(int *)(*(int *)(*(int *)(unaff_EBX[4] + 4 +
                                             *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x10) + 4) +
                           0x2c);
    unaff_ESI[5] = 0;
    goto LAB_004b0d0b;
  case 0x93:
    puVar24 = *(undefined4 **)(unaff_EBX[4] + 4 + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x10);
    uVar27 = *(uint *)(*(int *)(unaff_EBP - 0xdc) + 0xc + iVar34 * 0x14);
    uVar31 = 0;
    if ((uVar27 != 0) && (uVar31 = *(uint *)(puVar24[1] + 0x2c), uVar31 < uVar27)) {
      uVar31 = uVar27;
    }
    iVar34 = FUN_00490880(puVar24,uVar31);
    unaff_ESI[4] = iVar34;
    unaff_ESI[5] = iVar34 >> 0x1f;
    goto LAB_004b0d0b;
  case 0x94:
    if ((unaff_EBX[0x26] != 0) && ((*(uint *)(*(int *)(unaff_EBP - 0xd4) + 0x60) & 0x400) == 0)) {
      pbVar33 = *(byte **)(iVar25 + 0x10 + iVar34 * 0x14);
      if (pbVar33 == (byte *)0x0) {
        pbVar33 = *(byte **)(*(int *)(unaff_EBP - 0xd4) + 0x98);
      }
      *(byte **)(unaff_EBP - 0xcc) = pbVar33;
      if (pbVar33 != (byte *)0x0) {
        uVar26 = FUN_004b5b10(*(uint **)(unaff_EBP - 0xd4),pbVar33);
        *(undefined4 *)(unaff_EBP - 200) = uVar26;
        (*(code *)unaff_EBX[0x26])(unaff_EBX[0x27]);
        FUN_00494b00((int)unaff_EBX,*(undefined4 **)(unaff_EBP - 200));
      }
    }
  default:
    goto LAB_004b0d0b;
  }
  iVar34 = *(int *)(iVar25 + 8 + iVar34 * 0x14);
  goto LAB_004b0d04;
switchD_004af4da_caseD_8b:
  iVar13 = *(int *)(unaff_EBP - 0xe0);
  *(undefined4 *)(unaff_EBP - 0xcc) = *(undefined4 *)(*(int *)(iVar25 + 0x10 + iVar34 * 0x14) + 8);
  piVar19 = (int *)(iVar13 + *(int *)(iVar25 + 4 + iVar34 * 0x14) * 0x28);
  *(int **)(unaff_EBP - 200) = piVar19;
  uVar27 = FUN_004aec30(piVar19,1);
  *(uint *)(unaff_EBP - 0xd0) = uVar27;
  if (uVar27 == 0) goto code_r0x004b5255;
  goto LAB_004b0d11;
code_r0x004b5255:
  uVar26 = (**(code **)(**(int **)(unaff_EBP - 0xcc) + 0x4c))(*(int **)(unaff_EBP - 0xcc));
  iVar34 = *(int *)(unaff_EBP - 0xcc);
  *(undefined4 *)(unaff_EBP - 0xd0) = uVar26;
  FUN_0047e200(*(int **)(unaff_EBP - 0xd4),iVar34);
  puVar18 = (uint *)(*(int *)(unaff_EBP - 0xd4) + 0x60);
  *puVar18 = *puVar18 & 0xffffffdf;
  goto LAB_004b0d0b;
  while( true ) {
    uVar28 = uVar28 + 1;
    uVar27 = (uint)uVar28;
    *(ushort *)(unaff_EBP - 0xcc) = uVar28;
    if (uVar4 <= uVar27) break;
LAB_004b2a50:
    if ((*(byte *)(iVar25 + 0x1c + uVar27 * 0x28) & 1) != 0) {
      unaff_EBX = *(int **)(unaff_EBP - 0xe4);
      iVar34 = *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar34 * 0x14);
      unaff_ESI = *(int **)(unaff_EBP - 0xd8);
      *(undefined4 *)(unaff_EBP - 0xc4) = 0;
      goto LAB_004b0d04;
    }
  }
LAB_004b2a6e:
  if (*(int *)(unaff_EBP - 0xf0) != 0) {
    *(undefined4 *)(unaff_EBP - 0xb4) = *(undefined4 *)(*(int *)(unaff_EBP - 200) + 8);
    *(short *)(unaff_EBP - 0xb0) = (short)*(undefined4 *)(unaff_EBP - 0xc0) + 1;
    *(undefined1 *)(unaff_EBP - 0xae) = 4;
    *(int *)(unaff_EBP - 0xa4) = iVar25;
    FUN_004b7410(iVar13);
    *(undefined4 *)(unaff_EBP - 0x9c) = *(undefined4 *)(iVar13 + 0x10);
    *(undefined4 *)(unaff_EBP - 0x98) = *(undefined4 *)(iVar13 + 0x14);
    uVar27 = FUN_004908e0(*(int **)(unaff_EBP - 0xc4),(int *)(unaff_EBP - 0xb4),0,0,0,
                          (uint *)(*(int *)(unaff_EBP - 200) + 0x4c));
    bVar9 = *(byte *)(unaff_EBP - 0xae);
    *(uint *)(unaff_EBP - 0xd0) = uVar27;
    if (((bVar9 & 4) == 0) &&
       ((*(int *)(unaff_EBP - 0xac) != *(int *)(unaff_EBP - 0x9c) ||
        (*(int *)(unaff_EBP - 0xa8) != *(int *)(unaff_EBP - 0x98))))) {
      unaff_ESI = *(int **)(unaff_EBP - 0xd8);
      *(int *)(iVar13 + 0x10) = *(int *)(unaff_EBP - 0xac);
      *(undefined4 *)(iVar13 + 0x14) = *(undefined4 *)(unaff_EBP - 0xa8);
      unaff_EBX = *(int **)(unaff_EBP - 0xe4);
    }
    else {
LAB_004b4170:
      unaff_EBX = *(int **)(unaff_EBP - 0xe4);
      iVar34 = *(int *)(*(int *)(unaff_EBP - 0xdc) + 8 + iVar34 * 0x14);
      unaff_ESI = *(int **)(unaff_EBP - 0xd8);
LAB_004b0d04:
      iVar34 = iVar34 + -1;
LAB_004b0d05:
      *(int *)(unaff_EBP - 0xe8) = iVar34;
    }
    goto LAB_004b0d0b;
  }
LAB_004af834:
  unaff_EBX = *(int **)(unaff_EBP - 0xe4);
  unaff_ESI = *(int **)(unaff_EBP - 0xd8);
  goto LAB_004b0d0b;
LAB_004b19bf:
  unaff_EBX = *(int **)(unaff_EBP - 0xe4);
  FUN_004a9a30((int *)(*(int *)(unaff_EBP - 0xd4) + 0x34),(int)unaff_EBX,
               (byte *)"no such savepoint: %s");
  unaff_ESI = *(int **)(unaff_EBP - 0xd8);
  uVar27 = 1;
  *(undefined4 *)(unaff_EBP - 0xd0) = 1;
  goto LAB_004b0d11;
code_r0x004b19a5:
  pbVar33 = *(byte **)(unaff_EBP - 0xf0);
  iVar25 = iVar25 + 1;
  *(int *)(unaff_EBP - 0xb4) = iVar25;
  puVar24 = (undefined4 *)puVar24[4];
  *(undefined4 **)(unaff_EBP - 0xbc) = puVar24;
  goto joined_r0x004b1994;
LAB_004b09a0:
  iVar21 = iVar25;
  if (iVar13 != 0) {
    iVar21 = *(int *)(iVar13 + iVar25 * 4);
  }
  *(int *)(unaff_EBP - 0xb8) = iVar21;
  iVar13 = *(int *)(iVar14 + 0xc + iVar25 * 4);
  *(int *)(unaff_EBP - 0xb4) = iVar13;
  *(uint *)(unaff_EBP - 0xb0) = (uint)*(byte *)(*(int *)(iVar14 + 8) + iVar25);
  uVar27 = FUN_004a0720((undefined8 *)
                        (*(int *)(unaff_EBP - 0xe0) + (*(int *)(unaff_EBP - 0xf0) + iVar21) * 0x28),
                        (undefined8 *)(*(int *)(unaff_EBP - 0xe0) + (iVar21 + iVar34) * 0x28),iVar13
                       );
  *(uint *)(unaff_EBP - 0x10c) = uVar27;
  if (uVar27 == 0) {
    iVar25 = *(int *)(unaff_EBP - 200) + 1;
    *(int *)(unaff_EBP - 200) = iVar25;
    if (*(int *)(unaff_EBP - 0xcc) <= iVar25) goto LAB_004b0a43;
    iVar14 = *(int *)(unaff_EBP - 0xbc);
    iVar34 = *(int *)(unaff_EBP - 0xc0);
    iVar13 = *(int *)(unaff_EBP - 0x108);
    *(undefined4 *)(unaff_EBP - 0xf0) = *(undefined4 *)(unaff_EBP - 0xc4);
    goto LAB_004b09a0;
  }
  if (*(int *)(unaff_EBP - 0xb0) != 0) {
    *(uint *)(unaff_EBP - 0x10c) = -uVar27;
  }
LAB_004b0a43:
  unaff_EBX = *(int **)(unaff_EBP - 0xe4);
  unaff_ESI = *(int **)(unaff_EBP - 0xd8);
  *(undefined4 *)(unaff_EBP - 0x108) = 0;
  goto LAB_004b0d0b;
LAB_004b00b0:
  *(int *)(iVar21 + iVar25 * 4) = iVar13;
  piVar19 = *(int **)(unaff_EBP - 200);
  if ((*(ushort *)(piVar19 + 7) & 0x1000) != 0) {
    iVar25 = FUN_004b7490(piVar19);
    if (iVar25 != 0) goto LAB_004b57a6;
    piVar19 = *(int **)(unaff_EBP - 200);
  }
  FUN_004b7cb0((int)piVar19);
  iVar25 = *(int *)(unaff_EBP - 0xcc) + 1;
  iVar13 = *(int *)(unaff_EBP - 200) + 0x28;
  *(int *)(unaff_EBP - 0xcc) = iVar25;
  *(int *)(unaff_EBP - 200) = iVar13;
  if (*(int *)(unaff_EBP - 0x80) <= iVar25) goto LAB_004b010d;
  iVar21 = *(int *)(unaff_EBP - 0x84);
  goto LAB_004b00b0;
LAB_004b010d:
  puVar24 = *(undefined4 **)(*(int *)(unaff_EBP - 0xdc) + 0x10 + iVar34 * 0x14);
  if (*(char *)(*(int *)(unaff_EBP - 0xdc) + 1 + iVar34 * 0x14) == -5) {
    *(undefined4 *)(unaff_EBP - 0xc0) = 0;
  }
  else {
    *(undefined4 **)(unaff_EBP - 0xc0) = puVar24;
    puVar24 = (undefined4 *)*puVar24;
  }
  unaff_ESI = *(int **)(unaff_EBP - 0xd8);
  *(undefined4 **)(unaff_EBP - 0xc4) = puVar24;
  *(undefined2 *)(unaff_EBP - 0xa0) = 1;
  *(int **)(unaff_EBP - 0xbc) = unaff_EBX;
  *(undefined4 *)(unaff_EBP - 0x9c) = 0;
  *(undefined4 *)(unaff_EBP - 0x98) = 0;
  FUN_004b7500((int *)(unaff_EBP - 0xbc),(undefined8 *)unaff_ESI);
  *(ushort *)(unaff_EBP - 0xa0) = (ushort)*(undefined4 *)(unaff_EBP - 0xa0) & 0xbe01 | 1;
  iVar25 = *(int *)(unaff_EBP - 0xc4);
  *(undefined4 *)(unaff_EBP - 0x8c) = 0;
  if ((*(byte *)(iVar25 + 3) & 8) != 0) {
    *(undefined4 *)(unaff_EBP - 0x90) =
         *(undefined4 *)(*(int *)(unaff_EBP - 0xdc) + -4 + iVar34 * 0x14);
  }
  unaff_EBX[8] = *(int *)(unaff_EBP - 0x100);
  unaff_EBX[9] = *(int *)(unaff_EBP - 0xfc);
  (**(code **)(*(int *)(unaff_EBP - 0xc4) + 0xc))();
  *(int *)(unaff_EBP - 0x100) = unaff_EBX[8];
  *(int *)(unaff_EBP - 0xfc) = unaff_EBX[9];
  if (*(int **)(unaff_EBP - 0xc0) != (int *)0x0) {
    FUN_004af2b0(*(int **)(unaff_EBP - 0xc0),
                 *(uint *)(*(int *)(unaff_EBP - 0xdc) + 4 + iVar34 * 0x14));
    iVar25 = *(int *)(unaff_EBP - 0xdc);
    *(undefined4 *)(iVar25 + 0x10 + iVar34 * 0x14) = *(undefined4 *)(unaff_EBP - 0xc0);
    *(undefined1 *)(iVar25 + 1 + iVar34 * 0x14) = 0xf9;
  }
  if ((char)unaff_EBX[0xe] != '\0') {
    FUN_004b76e0((int *)(unaff_EBP - 0xbc));
    goto LAB_004b57a6;
  }
  if (*(int *)(unaff_EBP - 0x8c) != 0) {
    FUN_004ae680((int *)(unaff_EBP - 0xbc),1);
    FUN_004a9a30((int *)(*(int *)(unaff_EBP - 0xd4) + 0x34),(int)unaff_EBX,&DAT_0056de50);
    *(undefined4 *)(unaff_EBP - 0xd0) = *(undefined4 *)(unaff_EBP - 0x8c);
  }
  FUN_004aec30((int *)(unaff_EBP - 0xbc),(uint)*(byte *)(unaff_EBP - 0xec));
  FUN_004b7500(unaff_ESI,(undefined8 *)(unaff_EBP - 0xbc));
  bVar11 = FUN_004b7d90(unaff_ESI);
  iVar34 = CONCAT31(extraout_var_00,bVar11);
joined_r0x004b48db:
  if (iVar34 != 0) {
LAB_004b5780:
    FUN_004a9a30((int *)(*(int *)(unaff_EBP - 0xd4) + 0x34),(int)unaff_EBX,
                 (byte *)"string or blob too big");
    uVar27 = 0x12;
    goto LAB_004b57c7;
  }
  goto LAB_004b0d0b;
LAB_004afa70:
  unaff_EBX = *(int **)(unaff_EBP - 0xe4);
  if ((*(ushort *)(iVar25 + 0x1c + iVar13 * 0x28) & 0x1000) != 0) {
    iVar25 = FUN_004b7490((int *)(iVar25 + iVar13 * 0x28));
    if (iVar25 != 0) goto LAB_004b57a6;
    iVar13 = *(int *)(unaff_EBP - 200);
    iVar25 = *(int *)(unaff_EBP - 0xcc);
  }
  FUN_004b7590((int *)(iVar25 + iVar13 * 0x28));
  FUN_004b7cb0(*(int *)(unaff_EBP - 0xcc) + *(int *)(unaff_EBP - 200) * 0x28);
  iVar13 = *(int *)(unaff_EBP - 200) + 1;
  *(int *)(unaff_EBP - 200) = iVar13;
  if (*(int *)(iVar21 + 8 + iVar34 * 0x14) <= iVar13) {
LAB_004b55f4:
    if ((char)unaff_EBX[0xe] == '\0') {
      *(int *)(*(int *)(unaff_EBP - 0xd4) + 0x54) = *(int *)(unaff_EBP - 0xe8) + 1;
    }
    else {
LAB_004b57a6:
      iVar34 = *(int *)(unaff_EBP - 0xd4);
      *(undefined1 *)(unaff_EBX + 0xe) = 1;
      FUN_004a9a30((int *)(iVar34 + 0x34),(int)unaff_EBX,(byte *)"out of memory");
      uVar27 = 7;
LAB_004b57c7:
      *(uint *)(unaff_EBP - 0xd0) = uVar27;
LAB_004b57cd:
      *(uint *)(*(int *)(unaff_EBP - 0xd4) + 0x58) = uVar27;
      FUN_004683f0(uVar27,"statement aborts at %d: [%s] %s");
      FUN_004b60e0(*(int **)(unaff_EBP - 0xd4));
      if (*(int *)(unaff_EBP - 0xd0) == 0xc0a) {
        *(undefined1 *)(unaff_EBX + 0xe) = 1;
      }
      if ((*(byte *)(unaff_EBP - 0xf5) != 0) &&
         (iVar34 = *(byte *)(unaff_EBP - 0xf5) - 1,
         FUN_004a7960(*(int *)(unaff_EBX[4] + 0xc + iVar34 * 0x10)), iVar34 != 1)) {
        FUN_004a7960(*(int *)(unaff_EBX[4] + 0x1c));
      }
    }
LAB_004b5847:
    iVar34 = *(int *)(unaff_EBP - 0xe4);
    piVar19 = *(int **)(unaff_EBP - 0xd4);
    *(undefined4 *)(iVar34 + 0x20) = *(undefined4 *)(unaff_EBP - 0x100);
    *(undefined4 *)(iVar34 + 0x24) = *(undefined4 *)(unaff_EBP - 0xfc);
    FUN_004b6750(piVar19);
    uStack00000008 = 0x4b587c;
    __security_check_cookie(*(uint *)(unaff_EBP - 4) ^ unaff_EBP);
    return;
  }
  iVar25 = *(int *)(unaff_EBP - 0xcc);
  goto LAB_004afa70;
LAB_004af966:
  *(int **)(unaff_EBP - 0xd8) = piVar19;
  FUN_004b7c40(piVar19,puVar32,0x1000);
  if (((*(ushort *)(piVar19 + 7) & 0x1000) != 0) && (iVar34 = FUN_004b7490(piVar19), iVar34 != 0))
  goto LAB_004b57a6;
  iVar34 = *(int *)(unaff_EBP - 0xcc);
  *(int *)(unaff_EBP - 0xcc) = iVar34 + -1;
  if (iVar34 == 0) goto LAB_004af570;
  piVar19 = piVar19 + 10;
  puVar32 = puVar32 + 5;
  goto LAB_004af966;
LAB_004af800:
  do {
    piVar29 = piVar19 + 10;
    if ((*(ushort *)(piVar19 + 0x11) & 0x2460) != 0) {
      FUN_004b7720(piVar29);
    }
    *(undefined2 *)(piVar19 + 0x11) = *(undefined2 *)(unaff_EBP - 200);
    iVar34 = *(int *)(unaff_EBP - 0xcc) + -1;
    *(int *)(unaff_EBP - 0xcc) = iVar34;
    piVar19 = piVar29;
  } while (0 < iVar34);
  *(int **)(unaff_EBP - 0xd8) = piVar29;
  goto LAB_004af834;
LAB_004af570:
  unaff_ESI = *(int **)(unaff_EBP - 0xd8);
  goto LAB_004b0d0b;
}


/* FUN_004b5b10 @ 004b5b10  kind=lib  attributed-by=lib-island  size=860 */

void __cdecl FUN_004b5b10(uint *param_1,byte *param_2)

{
  char cVar1;
  ushort uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  size_t sVar6;
  byte *pbVar7;
  int iVar8;
  undefined8 uVar9;
  ulonglong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  byte *local_a8;
  undefined4 local_a4;
  int local_a0;
  uint local_9c;
  uint *local_98;
  uint local_94;
  uint local_90;
  undefined1 *local_8c;
  undefined1 *local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78;
  undefined2 local_77;
  uint local_74;
  uint local_70;
  undefined1 local_6c [100];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_9c = *param_1;
  local_8c = local_6c;
  local_7c = *(undefined4 *)(local_9c + 0x50);
  local_74 = 0;
  local_94 = 1;
  local_84 = 0;
  local_80 = 100;
  local_77 = 1;
  local_78 = 0;
  local_90 = local_9c;
  local_88 = local_8c;
  local_98 = param_1;
  if (*(int *)(local_9c + 0x8c) < 2) {
    bVar3 = *param_2;
    while (bVar3 != 0) {
      sVar6 = 0;
      local_70 = 0;
      pbVar7 = param_2;
      while ((uVar4 = local_70, bVar3 != 0 &&
             (uVar4 = FUN_0049cb70(pbVar7,&local_a0), local_a0 != 0x85))) {
        pbVar7 = pbVar7 + uVar4;
        sVar6 = sVar6 + uVar4;
        bVar3 = *pbVar7;
      }
      local_70 = uVar4;
      FUN_004aa7b0((int *)&local_90,(char *)param_2,sVar6);
      uVar4 = local_70;
      pbVar7 = param_2 + sVar6;
      if (local_70 == 0) break;
      if (*pbVar7 == 0x3f) {
        uVar5 = local_94;
        if (1 < (int)local_70) {
          FUN_0049ca30((char *)(pbVar7 + 1),&local_74);
          uVar5 = local_74;
        }
      }
      else {
        uVar5 = FUN_004b8290((int)local_98,(int *)pbVar7,local_70);
      }
      local_74 = uVar5;
      uVar5 = local_74;
      local_94 = local_74 + 1;
      param_2 = pbVar7 + uVar4;
      uVar4 = local_98[0x11];
      uVar2 = *(ushort *)((uVar4 - 0xc) + local_74 * 0x28);
      local_a8 = param_2;
      if ((uVar2 & 1) == 0) {
        if ((uVar2 & 4) == 0) {
          if ((uVar2 & 8) == 0) {
            if ((uVar2 & 2) == 0) {
              if ((uVar2 & 0x4000) == 0) {
                FUN_004aa7b0((int *)&local_90,"x\'",2);
                local_70 = 0;
                if (0 < *(int *)((uVar4 - 0x10) + uVar5 * 0x28)) {
                  iVar8 = 0;
                  do {
                    FUN_004bc420((int *)&local_90,&DAT_0056e630);
                    iVar8 = iVar8 + 1;
                    param_2 = local_a8;
                  } while (iVar8 < *(int *)((uVar4 - 0x10) + uVar5 * 0x28));
                }
                uVar9 = 0x10056e638;
                goto LAB_004b5e36;
              }
              FUN_004bc420((int *)&local_90,(byte *)"zeroblob(%d)");
            }
            else {
              cVar1 = *(char *)(*(int *)(*(int *)(local_9c + 0x10) + 0xc) + 0x4d);
              local_a4 = CONCAT31(local_a4._1_3_,cVar1);
              if (cVar1 == '\x01') {
                FUN_004bc420((int *)&local_90,(byte *)"\'%.*q\'");
              }
              else {
                local_c8 = 0;
                local_c0 = 0;
                local_b8 = 0;
                local_b0 = 0;
                local_d0 = (ulonglong)local_9c;
                FUN_004b79e0((int *)&local_d0,*(void **)((uVar4 - 0x24) + local_74 * 0x28),
                             *(size_t *)((uVar4 - 0x10) + local_74 * 0x28),cVar1,(undefined *)0x0);
                FUN_004aec30((int *)&local_d0,1);
                FUN_004bc420((int *)&local_90,(byte *)"\'%.*q\'");
                FUN_004b76e0((int *)&local_d0);
              }
            }
          }
          else {
            FUN_004bc420((int *)&local_90,(byte *)"%!.15g");
          }
        }
        else {
          FUN_004bc420((int *)&local_90,&DAT_0056dd58);
        }
      }
      else {
        uVar9 = 0x40056ddd0;
LAB_004b5e36:
        FUN_004aa7b0((int *)&local_90,(char *)uVar9,(size_t)((ulonglong)uVar9 >> 0x20));
      }
      bVar3 = *param_2;
    }
  }
  else {
    bVar3 = *param_2;
    while (pbVar7 = param_2, bVar3 != 0) {
      do {
        pbVar7 = pbVar7 + 1;
        if (bVar3 == 10) break;
        bVar3 = *pbVar7;
      } while (bVar3 != 0);
      FUN_004aa7b0((int *)&local_90,"-- ",3);
      FUN_004aa7b0((int *)&local_90,(char *)param_2,(int)pbVar7 - (int)param_2);
      param_2 = pbVar7;
      bVar3 = *pbVar7;
    }
  }
  FUN_004aa8f0((int *)&local_90);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004b5e70 @ 004b5e70  kind=lib  attributed-by=lib-island  size=112 */

uint __cdecl FUN_004b5e70(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ((param_1[0xc] == -0x420df25d) || (param_1[0xc] == 0x519c2973)) {
    uVar2 = FUN_004b8640(param_1);
  }
  iVar1 = *param_1;
  FUN_004aef00(iVar1,(int)param_1);
  if (param_1[0xe] == 0) {
    *(int *)(iVar1 + 4) = param_1[0xf];
  }
  else {
    *(int *)(param_1[0xe] + 0x3c) = param_1[0xf];
  }
  if (param_1[0xf] != 0) {
    *(int *)(param_1[0xf] + 0x38) = param_1[0xe];
  }
  param_1[0xc] = -0x49f93c38;
  *param_1 = 0;
  FUN_00494b00(iVar1,param_1);
  return uVar2;
}


/* FUN_004b5ee0 @ 004b5ee0  kind=lib  attributed-by=lib-island  size=164 */

void __cdecl FUN_004b5ee0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = param_1[0xf];
  iVar6 = 0;
  if (0 < param_1[0x10]) {
    do {
      puVar2 = (undefined4 *)param_1[iVar1 * 10 + iVar6 + 0x12];
      piVar3 = (int *)*param_1;
      if (puVar2 != (undefined4 *)0x0) {
        FUN_004b8d00(*piVar3,(int)puVar2);
        if ((int *)puVar2[1] == (int *)0x0) {
          if ((undefined4 *)*puVar2 != (undefined4 *)0x0) {
            FUN_0048f150((undefined4 *)*puVar2);
          }
        }
        else {
          FUN_0048f070((int *)puVar2[1]);
        }
        iVar4 = puVar2[9];
        if (iVar4 != 0) {
          iVar5 = puVar2[10];
          piVar3[0x18] = piVar3[0x18] & 0xfffffff7U | 4;
          (**(code **)(iVar5 + 0x1c))(iVar4);
          piVar3[0x18] = piVar3[0x18] & 0xfffffff3;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_1[0x10]);
  }
  FUN_00487fb0(param_1 + 0x12,param_1[0xf]);
  FUN_00494b00(*(int *)*param_1,param_1);
  return;
}


/* FUN_004b5f90 @ 004b5f90  kind=lib  attributed-by=lib-island  size=93 */

int __cdecl FUN_004b5f90(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)*param_1;
  piVar1[0x2e] = param_1[4];
  iVar2 = *piVar1;
  piVar1[0x2d] = param_1[0xe];
  piVar1[1] = param_1[2];
  piVar1[7] = param_1[0xc];
  piVar1[2] = param_1[3];
  piVar1[6] = param_1[0xd];
  piVar1[0x10] = param_1[5];
  *(short *)((int)piVar1 + 0x2e) = (short)param_1[10];
  *(int *)(iVar2 + 0x20) = param_1[8];
  *(int *)(iVar2 + 0x24) = param_1[9];
  piVar1[0x19] = param_1[0x11];
  return param_1[0xb];
}


/* FUN_004b5ff0 @ 004b5ff0  kind=lib  attributed-by=lib-island  size=95 */

void __cdecl FUN_004b5ff0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != (undefined4 *)0x0) {
    FUN_004b8d00(*param_1,(int)param_2);
    if ((int *)param_2[1] == (int *)0x0) {
      if ((undefined4 *)*param_2 != (undefined4 *)0x0) {
        FUN_0048f150((undefined4 *)*param_2);
      }
    }
    else {
      FUN_0048f070((int *)param_2[1]);
    }
    iVar1 = param_2[9];
    if (iVar1 != 0) {
      iVar2 = param_2[10];
      param_1[0x18] = param_1[0x18] & 0xfffffff7U | 4;
      (**(code **)(iVar2 + 0x1c))(iVar1);
      param_1[0x18] = param_1[0x18] & 0xfffffff3;
    }
  }
  return;
}


/* FUN_004b6050 @ 004b6050  kind=lib  attributed-by=lib-island  size=43 */

undefined1 * __cdecl FUN_004b6050(int *param_1,int param_2)

{
  if (param_2 < 0) {
    param_2 = param_1[7] + -1;
  }
  if (*(char *)(*param_1 + 0x38) != '\0') {
    return &DAT_00583fc4;
  }
  return (undefined1 *)(param_1[1] + param_2 * 0x14);
}


/* FUN_004b6080 @ 004b6080  kind=lib  attributed-by=lib-island  size=88 */

int * __cdecl FUN_004b6080(int *param_1,int param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if ((param_1 != (int *)0x0) &&
     (iVar2 = param_1[0x11], iVar1 = param_2 * 5 + -5,
     (*(byte *)(iVar2 + 0x1c + iVar1 * 8) & 1) == 0)) {
    piVar3 = (int *)FUN_004ae630(*param_1);
    if (piVar3 != (int *)0x0) {
      FUN_004b6f10(piVar3,(undefined8 *)(iVar2 + iVar1 * 8));
      FUN_004ae250(piVar3,param_3,1);
      FUN_004b7cb0((int)piVar3);
    }
    return piVar3;
  }
  return (int *)0x0;
}


/* FUN_004b60e0 @ 004b60e0  kind=lib  attributed-by=lib-string  size=721 */

undefined4 __cdecl FUN_004b60e0(int *param_1)

{
  char cVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  
  piVar2 = (int *)*param_1;
  if ((char)piVar2[0xe] != '\0') {
    param_1[0x16] = 7;
  }
  if ((void *)param_1[0x2e] != (void *)0x0) {
    memset((void *)param_1[0x2e],0,param_1[0x2d]);
  }
  FUN_00472d90(param_1);
  if (param_1[0xc] != -0x420df25d) {
    return 0;
  }
  if (param_1[0x15] < 0) goto LAB_004b6389;
  iVar7 = 0;
  FUN_004af300(param_1);
  cVar1 = (char)param_1[0x16];
  if ((((cVar1 == '\a') || (cVar1 == '\n')) || (cVar1 == '\t')) || (cVar1 == '\r')) {
    bVar3 = true;
    if (((param_1[0x18] & 0x100U) == 0) || (cVar1 != '\t')) {
      if (((cVar1 == '\a') || (cVar1 == '\r')) && ((char)param_1[0x18] < '\0')) {
        iVar7 = 2;
      }
      else {
        FUN_004a6c80((int)piVar2,0x204);
        FUN_00492710((int)piVar2);
        *(undefined1 *)((int)piVar2 + 0x36) = 1;
      }
    }
  }
  else {
    bVar3 = false;
  }
  if (((param_1[0x16] == 0) && (-1 < param_1[0x23])) &&
     ((0 < param_1[0x23] || (param_1[0x22] != 0)))) {
    param_1[0x16] = 0x13;
    *(undefined1 *)(param_1 + 0x17) = 2;
    FUN_004a9a30(param_1 + 0xd,*param_1,(byte *)"foreign key constraint failed");
  }
  if ((((piVar2[0x48] < 1) || (piVar2[0x4e] != 0)) && (*(char *)((int)piVar2 + 0x36) != '\0')) &&
     (piVar2[0x22] == (~((uint)param_1[0x18] >> 8) & 1))) {
    if ((param_1[0x16] == 0) || (((char)param_1[0x17] == '\x03' && (!bVar3)))) {
      iVar4 = FUN_004aeea0(param_1,1);
      if (iVar4 == 0) {
        uVar5 = FUN_004bec40(piVar2,(int)param_1);
        if (uVar5 == 5) {
          if ((param_1[0x18] & 0x100U) != 0) {
            FUN_004b6750(param_1);
            return 5;
          }
        }
        else if (uVar5 == 0) {
          piVar2[6] = piVar2[6] & 0xfffffffd;
          piVar2[0x7a] = 0;
          piVar2[0x7b] = 0;
          goto LAB_004b62c9;
        }
        param_1[0x16] = uVar5;
        FUN_004a6c80((int)piVar2,0);
      }
      else {
        if ((param_1[0x18] & 0x100U) != 0) {
          FUN_004b6750(param_1);
          return 1;
        }
        param_1[0x16] = 0x13;
        FUN_004a6c80((int)piVar2,0);
      }
    }
    else {
      FUN_004a6c80((int)piVar2,0);
    }
LAB_004b62c9:
    piVar2[0x79] = 0;
    if (iVar7 != 0) goto LAB_004b62f9;
  }
  else {
    if (iVar7 == 0) {
      if ((param_1[0x16] == 0) || ((char)param_1[0x17] == '\x03')) {
        iVar7 = 1;
        goto LAB_004b62f9;
      }
      if ((char)param_1[0x17] == '\x02') {
        iVar7 = 2;
        goto LAB_004b62f9;
      }
    }
    else {
LAB_004b62f9:
      uVar5 = FUN_004af050(param_1,iVar7);
      if (uVar5 == 0) goto LAB_004b6341;
      if ((param_1[0x16] == 0) || (param_1[0x16] == 0x13)) {
        param_1[0x16] = uVar5;
        FUN_00494b00((int)piVar2,(undefined4 *)param_1[0xd]);
        param_1[0xd] = 0;
      }
    }
    FUN_004a6c80((int)piVar2,0x204);
    FUN_00492710((int)piVar2);
    *(undefined1 *)((int)piVar2 + 0x36) = 1;
  }
LAB_004b6341:
  if ((*(byte *)(param_1 + 0x18) & 0x10) != 0) {
    if (iVar7 == 2) {
      piVar2[0x12] = 0;
    }
    else {
      iVar7 = param_1[0x19];
      piVar2[0x13] = piVar2[0x13] + iVar7;
      piVar2[0x12] = iVar7;
    }
    param_1[0x19] = 0;
  }
  FUN_004b6750(param_1);
  if ((-1 < param_1[0x15]) && (piVar2[0x21] = piVar2[0x21] + -1, (param_1[0x18] & 0x100U) == 0)) {
    piVar2[0x22] = piVar2[0x22] + -1;
  }
LAB_004b6389:
  param_1[0xc] = 0x519c2973;
  if (*(char *)(*param_1 + 0x38) != '\0') {
    param_1[0x16] = 7;
  }
  uVar6 = 0;
  if (param_1[0x16] == 5) {
    uVar6 = 5;
  }
  return uVar6;
}


/* FUN_004b63c0 @ 004b63c0  kind=lib  attributed-by=lib-island  size=191 */

uint __cdecl FUN_004b63c0(int *param_1,int *param_2,uint *param_3)

{
  int iVar1;
  size_t sVar2;
  uint uVar3;
  int local_2c;
  byte *pbStack_28;
  undefined8 local_24;
  undefined8 local_1c;
  undefined8 local_14;
  undefined8 local_c;
  
  iVar1 = *param_1;
  if (*(char *)(iVar1 + 0x5b) == '\x01') {
    FUN_0047d150(iVar1);
    sVar2 = *(size_t *)(iVar1 + 0x28);
    if ((*(int *)(iVar1 + 0x2c) + -1 + (uint)(sVar2 != 0) == 0) && (sVar2 - 1 < 0x7fffffff)) {
      _local_2c = 0;
      local_24 = 0;
      local_1c = 0;
      local_14 = 0;
      local_c = 0;
      uVar3 = FUN_004b70b0((int *)*param_1,0,sVar2,1,&local_2c);
      if (uVar3 != 0) {
        return uVar3;
      }
      uVar3 = FUN_004b83b0((int)local_14,pbStack_28,param_2);
      *param_3 = uVar3;
      FUN_004b76e0(&local_2c);
      return 0;
    }
  }
  *param_3 = 0;
  FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
  return 0xb;
}


/* FUN_004b6480 @ 004b6480  kind=lib  attributed-by=lib-island  size=347 */

uint __cdecl FUN_004b6480(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  size_t sVar6;
  int *piVar7;
  uint extraout_EDX;
  int *piVar8;
  undefined1 local_5c [16];
  undefined4 local_4c;
  undefined4 local_48;
  undefined8 local_34;
  undefined8 local_2c;
  undefined8 local_24;
  ulonglong local_1c;
  undefined8 local_14;
  undefined8 local_c;
  
  piVar8 = param_2;
  if (*(char *)((int)param_2 + 0x5b) == '\x01') {
    FUN_0047d150((int)param_2);
    sVar6 = piVar8[10];
    local_c = CONCAT44(piVar8[0xb],(size_t)local_c);
  }
  else {
    local_c = 0;
    local_c._0_4_ = 0;
    sVar6 = (size_t)local_c;
  }
  local_34 = 0;
  local_2c = 0;
  local_24 = 0;
  local_1c = 0;
  local_14 = 0;
  uVar3 = FUN_004b70b0(piVar8,0,sVar6,1,(int *)&local_34);
  if (uVar3 == 0) {
    pbVar2 = local_34._4_4_;
    if (*local_34._4_4_ < 0x80) {
      piVar8 = (int *)(uint)*local_34._4_4_;
    }
    else {
      FUN_0049d440(local_34._4_4_,(uint *)&param_2);
      piVar8 = param_2;
    }
    if (((int *)0x2 < piVar8) && (uVar3 = (uint)local_1c, (int)piVar8 <= (int)(uint)local_1c)) {
      pbVar4 = pbVar2 + -1 + (int)piVar8;
      bVar1 = *pbVar4;
      if (bVar1 < 0x80) {
        piVar7 = (int *)(uint)bVar1;
      }
      else {
        FUN_0049d440(pbVar4,(uint *)&param_2);
        piVar7 = param_2;
      }
      if (((int)piVar7 - 1U < 9) && (piVar7 != (int *)0x7)) {
        uVar5 = FUN_004b8bf0((uint)piVar7);
        if (uVar5 + (int)piVar8 <= uVar3) {
          FUN_004b87d0((char *)(pbVar2 + (uVar3 - uVar5)),extraout_EDX,(int)local_5c);
          *param_3 = local_4c;
          param_3[1] = local_48;
          FUN_004b76e0((int *)&local_34);
          return 0;
        }
      }
    }
    if ((local_1c & 0x246000000000) != 0) {
      FUN_004b7720((int *)&local_34);
    }
    FUN_00494b00((int)local_34,local_14._4_4_);
    local_34 = local_34 & 0xffffffff;
    local_14 = 0;
    FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
    uVar3 = 0xb;
  }
  return uVar3;
}


/* FUN_004b65e0 @ 004b65e0  kind=lib  attributed-by=lib-island  size=109 */

ulonglong __cdecl FUN_004b65e0(int param_1)

{
  ushort uVar1;
  ulonglong uVar2;
  ulonglong local_c;
  
  uVar1 = *(ushort *)(param_1 + 0x1c);
  if ((uVar1 & 4) != 0) {
    return *(ulonglong *)(param_1 + 0x10);
  }
  if ((uVar1 & 8) != 0) {
    uVar2 = FUN_00477080(*(double *)(param_1 + 8));
    return uVar2;
  }
  if ((uVar1 & 0x12) != 0) {
    local_c = 0;
    FUN_0048d300(*(byte **)(param_1 + 4),(uint *)&local_c,*(int *)(param_1 + 0x18),
                 *(char *)(param_1 + 0x1f));
    return local_c;
  }
  return 0;
}


/* FUN_004b6650 @ 004b6650  kind=lib  attributed-by=lib-island  size=202 */

/* WARNING: Removing unreachable block (ram,0x004b66fd) */

void __cdecl FUN_004b6650(int param_1)

{
  double dVar1;
  ulonglong uVar2;
  
  dVar1 = *(double *)(param_1 + 8);
  if (-9.223372036854776e+18 <= dVar1) {
    if (dVar1 <= 9.223372036854776e+18) {
      uVar2 = FUN_0054a946();
    }
    else {
      uVar2 = 0x8000000000000000;
    }
  }
  else {
    uVar2 = 0x8000000000000000;
  }
  *(ulonglong *)(param_1 + 0x10) = uVar2;
  if (((dVar1 == (double)(longlong)uVar2) && (-0x8000000000000000 < (longlong)uVar2)) &&
     (((longlong)uVar2 < 0x7fffffff00000000 || ((int)uVar2 != -1)))) {
    *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) | 4;
  }
  return;
}


/* FUN_004b6720 @ 004b6720  kind=lib  attributed-by=lib-island  size=34 */

void __cdecl FUN_004b6720(int param_1,uint param_2)

{
  if ((-1 < (int)param_2) && (param_2 < *(uint *)(param_1 + 0x1c))) {
    *(uint *)(*(int *)(param_1 + 4) + 8 + param_2 * 0x14) = *(uint *)(param_1 + 0x1c);
  }
  return;
}


/* FUN_004b6750 @ 004b6750  kind=lib  attributed-by=lib-island  size=128 */

void __cdecl FUN_004b6750(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint local_8;
  
  if (param_1[0x1b] != 0) {
    iVar2 = *(int *)(*param_1 + 0x14);
    local_8 = 1;
    if (0 < iVar2) {
      piVar5 = (int *)(*(int *)(*param_1 + 0x10) + 4);
      iVar6 = 0;
      do {
        if ((((iVar6 != 1) && ((param_1[0x1b] & local_8) != 0)) && (iVar3 = *piVar5, iVar3 != 0)) &&
           (*(char *)(iVar3 + 9) != '\0')) {
          piVar1 = (int *)(iVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            iVar4 = *(int *)(*(int *)(iVar3 + 4) + 0x38);
            if (iVar4 != 0) {
              (*DAT_00582b20)(iVar4);
            }
            *(undefined1 *)(iVar3 + 10) = 0;
          }
        }
        iVar6 = iVar6 + 1;
        local_8 = local_8 * 2;
        piVar5 = piVar5 + 4;
      } while (iVar6 < iVar2);
    }
  }
  return;
}


/* FUN_004b67d0 @ 004b67d0  kind=lib  attributed-by=lib-island  size=933 */

undefined4 __cdecl FUN_004b67d0(int *param_1)

{
  byte *pbVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int local_18;
  int local_14;
  int *local_10;
  uint local_c;
  
  iVar7 = param_1[2];
  iVar6 = *param_1;
  piVar11 = (int *)(iVar7 + 0x28);
  piVar10 = (int *)0x0;
  local_c = 0;
  local_10 = (int *)0x0;
  FUN_00487fb0(piVar11,8);
  param_1[5] = 0;
  if (param_1[0x16] == 7) {
    *(undefined1 *)(iVar6 + 0x38) = 1;
  }
  else {
    local_18 = param_1[7];
    if ((param_1[0x18] & 3U) == 1) {
      iVar8 = param_1[2];
      local_10 = (int *)(iVar8 + 0x168);
      if ((*(byte *)(iVar8 + 0x184) & 0x10) != 0) {
        piVar10 = *(int **)(iVar8 + 0x16c);
        local_c = *(uint *)(iVar8 + 0x180) >> 2;
      }
      iVar8 = 0;
      local_14 = 0;
      local_18 = 0;
      if (1 < local_c) {
        local_14 = 0;
        local_18 = 0;
        iVar9 = iVar8;
        do {
          iVar8 = iVar9 + 2;
          local_14 = local_14 + *(int *)(piVar10[iVar9] + 4);
          local_18 = local_18 + *(int *)(piVar10[iVar9 + 1] + 4);
          iVar9 = iVar8;
        } while (iVar8 < (int)(local_c - 1));
      }
      iVar9 = param_1[7];
      if (iVar8 < (int)local_c) {
        iVar9 = iVar9 + *(int *)(piVar10[iVar8] + 4);
      }
      local_18 = iVar9 + local_14 + local_18;
    }
    do {
      iVar8 = param_1[0x15];
      param_1[0x15] = iVar8 + 1;
      if (local_18 <= iVar8) {
        param_1[0x16] = 0;
        return 0x65;
      }
    } while (((param_1[0x18] & 3U) == 2) && (*(char *)(param_1[1] + iVar8 * 0x14) != -0x6a));
    if (*(int *)(iVar6 + 0xe0) != 0) {
      param_1[0x16] = 9;
      FUN_004a9a30(param_1 + 0xd,iVar6,&DAT_0056de50);
      return 1;
    }
    if (iVar8 < param_1[7]) {
      iVar6 = param_1[1];
    }
    else {
      iVar8 = iVar8 - param_1[7];
      iVar9 = 0;
      iVar6 = *(int *)(*piVar10 + 4);
      if (iVar6 <= iVar8) {
        do {
          iVar9 = iVar9 + 1;
          iVar8 = iVar8 - iVar6;
          iVar6 = *(int *)(piVar10[iVar9] + 4);
        } while (iVar6 <= iVar8);
      }
      iVar6 = *(int *)piVar10[iVar9];
    }
    pbVar1 = (byte *)(iVar6 + iVar8 * 0x14);
    if (((byte)param_1[0x18] & 3) == 1) {
      *(undefined2 *)(iVar7 + 0x44) = 4;
      *(int *)(iVar7 + 0x38) = iVar8;
      *(int *)(iVar7 + 0x3c) = iVar8 >> 0x1f;
      *(undefined1 *)(iVar7 + 0x46) = 1;
      *(undefined2 *)(iVar7 + 0x6c) = 0xa02;
      pcVar3 = (&PTR_DAT_0056a750)[*pbVar1];
      *(char **)(iVar7 + 0x54) = pcVar3;
      uVar5 = 0;
      if (pcVar3 != (char *)0x0) {
        cVar2 = *pcVar3;
        pcVar4 = pcVar3;
        while (cVar2 != '\0') {
          pcVar4 = pcVar4 + 1;
          cVar2 = *pcVar4;
        }
        uVar5 = (int)pcVar4 - (int)pcVar3 & 0x3fffffff;
      }
      *(uint *)(iVar7 + 0x68) = uVar5;
      *(undefined2 *)(iVar7 + 0x6e) = 0x103;
      piVar11 = (int *)(iVar7 + 0x78);
      if (pbVar1[1] == 0xee) {
        iVar7 = local_c * 4;
        uVar5 = 0;
        if (local_c != 0) {
          do {
            if (piVar10[uVar5] == *(int *)(pbVar1 + 0x10)) break;
            uVar5 = uVar5 + 1;
          } while ((int)uVar5 < (int)local_c);
        }
        if ((uVar5 == local_c) &&
           (iVar6 = FUN_004b7260(local_10,iVar7 + 4,(uint)(local_c != 0)), iVar6 == 0)) {
          *(undefined4 *)(iVar7 + local_10[1]) = *(undefined4 *)(pbVar1 + 0x10);
          *(ushort *)(local_10 + 7) = *(ushort *)(local_10 + 7) | 0x10;
          local_10[6] = iVar7 + 4;
        }
      }
    }
    *(undefined2 *)(piVar11 + 7) = 4;
    iVar7 = *(int *)(pbVar1 + 4);
    *(undefined1 *)((int)piVar11 + 0x1e) = 1;
    piVar11[4] = iVar7;
    piVar11[5] = iVar7 >> 0x1f;
    *(undefined2 *)(piVar11 + 0x11) = 4;
    iVar7 = *(int *)(pbVar1 + 8);
    piVar11[0xe] = iVar7;
    piVar11[0xf] = iVar7 >> 0x1f;
    *(undefined1 *)((int)piVar11 + 0x46) = 1;
    *(undefined2 *)(piVar11 + 0x1b) = 4;
    iVar7 = *(int *)(pbVar1 + 0xc);
    piVar11[0x18] = iVar7;
    piVar11[0x19] = iVar7 >> 0x1f;
    *(undefined1 *)((int)piVar11 + 0x6e) = 1;
    iVar7 = FUN_004b7260(piVar11 + 0x1e,0x20,0);
    if (iVar7 == 0) {
      *(undefined2 *)(piVar11 + 0x25) = 0x602;
      pcVar4 = FUN_00476d20((int)pbVar1,(char *)piVar11[0x1f],0x20);
      pcVar3 = (char *)piVar11[0x1f];
      if (pcVar4 == pcVar3) {
        uVar5 = 0;
        if (pcVar3 != (char *)0x0) {
          cVar2 = *pcVar3;
          pcVar4 = pcVar3;
          while (cVar2 != '\0') {
            pcVar4 = pcVar4 + 1;
            cVar2 = *pcVar4;
          }
          uVar5 = (int)pcVar4 - (int)pcVar3 & 0x3fffffff;
        }
        piVar11[0x24] = uVar5;
        *(undefined1 *)((int)piVar11 + 0x97) = 1;
      }
      else {
        FUN_004b79e0(piVar11 + 0x1e,pcVar4,0xffffffff,'\x01',(undefined *)0x0);
      }
      *(undefined1 *)((int)piVar11 + 0x96) = 3;
      if (((byte)param_1[0x18] & 3) == 1) {
        iVar7 = FUN_004b7260(piVar11 + 0x28,4,0);
        if (iVar7 != 0) {
          return 1;
        }
        *(undefined2 *)(piVar11 + 0x2f) = 0x602;
        piVar11[0x2e] = 2;
        FUN_00466a80(3,piVar11[0x29],&DAT_0056e4f4);
        *(undefined2 *)((int)piVar11 + 0xbe) = 0x103;
        *(undefined2 *)(piVar11 + 0x39) = 1;
        *(undefined1 *)((int)piVar11 + 0xe6) = 5;
      }
      *(ushort *)(param_1 + 0xb) = (2 - ((*(ushort *)(param_1 + 0x18) & 3) - 1)) * 4;
      param_1[5] = param_1[2] + 0x28;
      param_1[0x16] = 0;
      return 100;
    }
  }
  return 1;
}


/* FUN_004b6b80 @ 004b6b80  kind=lib  attributed-by=lib-island  size=104 */

int __cdecl FUN_004b6b80(int *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  uVar1 = param_1[9];
  param_1[9] = uVar1 + 1;
  if ((uVar1 & uVar1 - 1) == 0) {
    puVar2 = (undefined4 *)param_1[10];
    iVar3 = *param_1;
    puVar4 = FUN_00494cf0(iVar3,puVar2,uVar1 * 8 + 4);
    if (puVar4 == (undefined4 *)0x0) {
      FUN_00494b00(iVar3,puVar2);
    }
    param_1[10] = (int)puVar4;
  }
  if (param_1[10] != 0) {
    *(undefined4 *)(param_1[10] + uVar1 * 4) = 0xffffffff;
  }
  return -1 - uVar1;
}


/* FUN_004b6bf0 @ 004b6bf0  kind=lib  attributed-by=lib-island  size=780 */

void __cdecl FUN_004b6bf0(int *param_1,int param_2)

{
  void *_Dst;
  short sVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *_Dst_00;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  size_t _Size;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  
  piVar2 = param_1;
  iVar8 = *(int *)(param_2 + 0x48);
  local_8 = *param_1;
  local_c = *(int *)(param_2 + 0x1cc);
  local_14 = *(uint *)(param_2 + 0x198);
  iVar3 = *(int *)(param_2 + 0x54);
  if (iVar3 == 0) {
    iVar3 = 1;
  }
  iVar11 = *(int *)(param_2 + 0x4c) + iVar8;
  _Dst = (void *)(param_1[1] + param_1[7] * 0x14);
  piVar6 = (int *)(param_1[1] + param_1[8] * 0x14);
  local_10 = iVar11;
  FUN_00489330(param_1,&local_14);
  if ((*(char *)(param_2 + 0x17) == '\0') || (*(char *)(param_2 + 0x18) == '\0')) {
    iVar4 = 0;
  }
  else {
    iVar4 = 1;
  }
  param_1[0x18] = param_1[0x18] ^ (iVar4 << 7 ^ param_1[0x18]) & 0x80U;
  if ((*(char *)(param_2 + 0x1d4) != '\0') && (local_10 = iVar11, iVar11 < 10)) {
    local_10 = 10;
  }
  memset(_Dst,0,(int)piVar6 - (int)_Dst);
  piVar10 = (int *)((int)_Dst + ((uint)_Dst & 7));
  param_1[0x18] = param_1[0x18] & 0xffffffdf;
  param_1 = piVar6;
  do {
    piVar6 = (int *)piVar2[2];
    _Size = 0;
    if (piVar6 == (int *)0x0) {
      _Size = local_10 * 0x28;
      if (piVar10 + local_10 * 10 <= param_1) {
        piVar6 = piVar10;
        piVar10 = piVar10 + local_10 * 10;
        _Size = 0;
      }
    }
    piVar2[2] = (int)piVar6;
    piVar9 = (int *)piVar2[0x11];
    piVar7 = piVar9;
    piVar6 = piVar10;
    if (piVar9 == (int *)0x0) {
      piVar6 = piVar10 + local_c * 10;
      piVar7 = piVar10;
      if (param_1 < piVar6) {
        _Size = _Size + local_c * 0x28;
        piVar7 = piVar9;
        piVar6 = piVar10;
      }
    }
    piVar2[0x11] = (int)piVar7;
    piVar9 = (int *)piVar2[3];
    piVar7 = piVar9;
    piVar10 = piVar6;
    if (piVar9 == (int *)0x0) {
      uVar5 = local_14 * 4 + 7 & 0xfffffff8;
      piVar10 = (int *)(uVar5 + (int)piVar6);
      piVar7 = piVar6;
      if (param_1 < piVar10) {
        _Size = _Size + uVar5;
        piVar7 = piVar9;
        piVar10 = piVar6;
      }
    }
    piVar2[3] = (int)piVar7;
    piVar9 = (int *)piVar2[0x12];
    piVar7 = piVar9;
    piVar6 = piVar10;
    if (piVar9 == (int *)0x0) {
      uVar5 = local_c * 4 + 7U & 0xfffffff8;
      piVar6 = (int *)(uVar5 + (int)piVar10);
      piVar7 = piVar10;
      if (param_1 < piVar6) {
        _Size = _Size + uVar5;
        piVar7 = piVar9;
        piVar6 = piVar10;
      }
    }
    piVar2[0x12] = (int)piVar7;
    piVar9 = (int *)piVar2[0x10];
    piVar7 = piVar9;
    piVar10 = piVar6;
    if (piVar9 == (int *)0x0) {
      uVar5 = iVar8 * 4 + 7U & 0xfffffff8;
      piVar10 = (int *)(uVar5 + (int)piVar6);
      piVar7 = piVar6;
      if (param_1 < piVar10) {
        _Size = _Size + uVar5;
        piVar7 = piVar9;
        piVar10 = piVar6;
      }
    }
    piVar6 = (int *)piVar2[0x2e];
    piVar2[0x10] = (int)piVar7;
    piVar9 = piVar6;
    if ((piVar6 == (int *)0x0) &&
       (uVar5 = iVar3 + 7U & 0xfffffff8, piVar9 = piVar10, param_1 < (int *)(uVar5 + (int)piVar10)))
    {
      _Size = _Size + uVar5;
      piVar9 = piVar6;
    }
    piVar2[0x2e] = (int)piVar9;
    if (_Size != 0) {
      _Dst_00 = FUN_00494b90(local_8,_Size);
      if (_Dst_00 != (undefined4 *)0x0) {
        memset(_Dst_00,0,_Size);
      }
      piVar2[0x27] = (int)_Dst_00;
    }
    iVar11 = local_8;
    piVar10 = (int *)piVar2[0x27];
    param_1 = (int *)(_Size + (int)piVar10);
  } while ((_Size != 0) && (*(char *)(local_8 + 0x38) == '\0'));
  *(short *)((int)piVar2 + 0x2e) = (short)iVar8;
  piVar2[0x2d] = iVar3;
  if ((piVar2[0x11] != 0) && (*(short *)(piVar2 + 0x13) = (short)local_c, 0 < local_c)) {
    iVar8 = 0;
    iVar3 = local_c;
    do {
      *(undefined2 *)(iVar8 + 0x1c + piVar2[0x11]) = 1;
      *(int *)(iVar8 + piVar2[0x11]) = local_8;
      iVar3 = iVar3 + -1;
      iVar8 = iVar8 + 0x28;
    } while (iVar3 != 0);
  }
  if ((void *)piVar2[0x12] != (void *)0x0) {
    sVar1 = *(short *)(param_2 + 0x1d0);
    *(short *)((int)piVar2 + 0x4e) = sVar1;
    memcpy((void *)piVar2[0x12],*(void **)(param_2 + 0x1ec),(int)sVar1 << 2);
    memset(*(void **)(param_2 + 0x1ec),0,*(int *)(param_2 + 0x1d0) << 2);
  }
  if (piVar2[2] != 0) {
    piVar2[2] = piVar2[2] + -0x28;
    piVar2[6] = local_10;
    if (0 < local_10) {
      iVar8 = 0x28;
      do {
        *(undefined2 *)(iVar8 + 0x1c + piVar2[2]) = 0x80;
        *(int *)(iVar8 + piVar2[2]) = iVar11;
        local_10 = local_10 + -1;
        iVar8 = iVar8 + 0x28;
      } while (local_10 != 0);
    }
  }
  piVar2[0x18] = piVar2[0x18] ^ ((uint)*(byte *)(param_2 + 0x1d4) ^ piVar2[0x18]) & 3;
  piVar2[0x15] = -1;
  piVar2[0x16] = 0;
  *(undefined2 *)(piVar2 + 0x17) = 0xff02;
  piVar2[0xc] = -0x420df25d;
  piVar2[0x19] = 0;
  piVar2[0x14] = 1;
  piVar2[0x1c] = 0;
  piVar2[0x22] = 0;
  piVar2[0x23] = 0;
  return;
}


/* FUN_004b6f10 @ 004b6f10  kind=lib  attributed-by=lib-island  size=138 */

undefined4 __cdecl FUN_004b6f10(int *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  if ((*(ushort *)(param_1 + 7) & 0x2460) != 0) {
    FUN_004b7720(param_1);
  }
  *(undefined8 *)param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = param_2[1];
  *(undefined8 *)(param_1 + 4) = param_2[2];
  *(undefined8 *)(param_1 + 6) = param_2[3];
  param_1[8] = *(int *)(param_2 + 4);
  *(ushort *)(param_1 + 7) = *(ushort *)(param_1 + 7) & 0xfbff;
  if (((*(ushort *)(param_1 + 7) & 0x12) != 0) && ((*(ushort *)((int)param_2 + 0x1c) & 0x800) == 0))
  {
    *(ushort *)(param_1 + 7) = *(ushort *)(param_1 + 7) | 0x1000;
    uVar1 = FUN_004b7490(param_1);
    return uVar1;
  }
  return 0;
}


/* FUN_004b6fa0 @ 004b6fa0  kind=lib  attributed-by=lib-island  size=97 */

undefined4 __cdecl FUN_004b6fa0(int *param_1)

{
  int iVar1;
  
  if ((*(ushort *)(param_1 + 7) & 0x4000) != 0) {
    iVar1 = param_1[4] + param_1[6];
    if (iVar1 < 1) {
      iVar1 = 1;
    }
    iVar1 = FUN_004b7260(param_1,iVar1,1);
    if (iVar1 != 0) {
      return 7;
    }
    memset((void *)(param_1[1] + param_1[6]),0,param_1[4]);
    param_1[6] = param_1[6] + param_1[4];
    *(ushort *)(param_1 + 7) = *(ushort *)(param_1 + 7) & 0xbdff;
  }
  return 0;
}


/* FUN_004b7010 @ 004b7010  kind=lib  attributed-by=lib-island  size=156 */

undefined4 __cdecl FUN_004b7010(int *param_1,int param_2)

{
  code *pcVar1;
  int local_44 [2];
  int local_3c;
  undefined4 uStack_38;
  undefined8 local_34;
  undefined8 local_2c;
  undefined4 local_24;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined8 local_1c;
  int *local_14;
  undefined4 local_c;
  
  if (param_2 == 0) {
    return 0;
  }
  pcVar1 = *(code **)(param_2 + 0x14);
  if (pcVar1 != (code *)0x0) {
    memset(local_44,0,0x40);
    uStack_20 = 1;
    local_3c = *param_1;
    local_14 = param_1;
    local_44[0] = param_2;
    (*pcVar1)(local_44);
    FUN_00494b00(*param_1,(undefined4 *)param_1[9]);
    *(ulonglong *)param_1 = CONCAT44(uStack_38,local_3c);
    *(undefined8 *)(param_1 + 2) = local_34;
    *(undefined8 *)(param_1 + 4) = local_2c;
    *(ulonglong *)(param_1 + 6) = CONCAT26(uStack_1e,CONCAT24(uStack_20,local_24));
    *(undefined8 *)(param_1 + 8) = local_1c;
    return local_c;
  }
  return 0;
}


/* FUN_004b70b0 @ 004b70b0  kind=lib  attributed-by=lib-island  size=420 */

uint __cdecl FUN_004b70b0(int *param_1,uint param_2,size_t param_3,uint param_4,int *param_5)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  uint local_c;
  int local_8;
  
  local_c = 0;
  if (param_4 == 0) {
    local_8 = 0;
    uVar3 = 0;
    if (*(char *)((int)param_1 + 0x5b) == '\x01') {
      iVar1 = param_1[*(short *)((int)param_1 + 0x5e) + 0x22];
      if (*(short *)((int)param_1 + 0x42) == 0) {
        uVar3 = (uint)*(ushort *)((int)param_1 + *(short *)((int)param_1 + 0x5e) * 2 + 0x60);
        FUN_00471710(iVar1,(uint)(CONCAT11(*(undefined1 *)(*(int *)(iVar1 + 0x40) + uVar3 * 2),
                                           *(undefined1 *)(*(int *)(iVar1 + 0x40) + 1 + uVar3 * 2))
                                 & *(ushort *)(iVar1 + 0x12)) + *(int *)(iVar1 + 0x38),
                     (uint *)(param_1 + 10));
      }
      if (*(char *)(iVar1 + 2) == '\0') {
        local_8 = param_1[10];
      }
      else {
        local_8 = 0;
      }
      uVar3 = (uint)*(ushort *)((int)param_1 + 0x3e) - local_8;
      local_8 = local_8 + (uint)*(ushort *)(param_1 + 0xf) + param_1[0xc];
    }
  }
  else {
    local_8 = FUN_00490640((int)param_1,&local_c);
    uVar3 = local_c;
  }
  if (((int)(param_2 + param_3) <= (int)uVar3) && ((*(ushort *)(param_5 + 7) & 0x400) == 0)) {
    if ((*(ushort *)(param_5 + 7) & 0x2460) != 0) {
      FUN_004b7720(param_5);
    }
    FUN_00494b00(*param_5,(undefined4 *)param_5[9]);
    param_5[1] = local_8 + param_2;
    param_5[6] = param_3;
    param_5[9] = 0;
    param_5[8] = 0;
    *(undefined2 *)(param_5 + 7) = 0x1010;
    return 0;
  }
  uVar3 = FUN_004b7260(param_5,param_3 + 2,0);
  if (uVar3 == 0) {
    param_5[7] = 0x40610;
    if (param_4 == 0) {
      pvVar2 = (void *)param_5[1];
      if (*(byte *)((int)param_1 + 0x5b) == 0) {
        param_4 = 4;
      }
      else if ((*(byte *)((int)param_1 + 0x5b) < 2) ||
              (param_4 = FUN_00471850(param_1), param_4 == 0)) {
        param_4 = FUN_0046b2f0((int)param_1,param_2,param_3,pvVar2,0);
      }
    }
    else {
      param_4 = FUN_0046b2f0((int)param_1,param_2,param_3,(void *)param_5[1],0);
    }
    *(undefined1 *)(param_3 + param_5[1]) = 0;
    *(undefined1 *)(param_5[1] + 1 + param_3) = 0;
    if (param_4 != 0) {
      FUN_004b76e0(param_5);
      param_5[6] = param_3;
      return param_4;
    }
    uVar3 = 0;
  }
  param_5[6] = param_3;
  return uVar3;
}


/* FUN_004b7260 @ 004b7260  kind=lib  attributed-by=lib-island  size=277 */

undefined4 __cdecl FUN_004b7260(int *param_1,int param_2,int param_3)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  iVar1 = *param_1;
  if (param_2 < 0x20) {
    param_2 = 0x20;
  }
  uVar2 = param_1[9];
  if ((((iVar1 == 0) || (uVar2 == 0)) || (uVar2 < *(uint *)(iVar1 + 0x104))) ||
     (*(uint *)(iVar1 + 0x108) <= uVar2)) {
    uVar2 = (*DAT_00582af0._4_4_)(uVar2);
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xe8);
  }
  if ((int)uVar2 < param_2) {
    if (param_3 != 0) {
      puVar4 = (undefined4 *)param_1[1];
      if (puVar4 == (undefined4 *)param_1[9]) {
        iVar1 = *param_1;
        puVar3 = FUN_00494cf0(iVar1,puVar4,param_2);
        if (puVar3 == (undefined4 *)0x0) {
          FUN_00494b00(iVar1,puVar4);
        }
        param_1[9] = (int)puVar3;
        param_1[1] = (int)puVar3;
        param_3 = 0;
        goto LAB_004b7302;
      }
    }
    FUN_00494b00(*param_1,(undefined4 *)param_1[9]);
    puVar4 = FUN_00494b90(*param_1,param_2);
    param_1[9] = (int)puVar4;
  }
LAB_004b7302:
  _Src = (void *)param_1[1];
  if (((_Src != (void *)0x0) && (param_3 != 0)) &&
     ((_Dst = (void *)param_1[9], _Dst != (void *)0x0 && (_Src != _Dst)))) {
    memcpy(_Dst,_Src,param_1[6]);
  }
  if (((*(ushort *)(param_1 + 7) & 0x400) != 0) && ((code *)param_1[8] != (code *)0x0)) {
    (*(code *)param_1[8])(param_1[1]);
  }
  iVar1 = param_1[9];
  param_1[1] = iVar1;
  if (iVar1 == 0) {
    *(undefined2 *)(param_1 + 7) = 1;
  }
  else {
    *(ushort *)(param_1 + 7) = *(ushort *)(param_1 + 7) & 0xe7ff;
  }
  param_1[8] = 0;
  uVar5 = 7;
  if (iVar1 != 0) {
    uVar5 = 0;
  }
  return uVar5;
}


/* FUN_004b7380 @ 004b7380  kind=lib  attributed-by=lib-island  size=137 */

int __cdecl FUN_004b7380(int *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined1 uVar4;
  
  if (param_1[6] < 2) {
    return 0;
  }
  cVar1 = *(char *)param_1[1];
  cVar2 = ((char *)param_1[1])[1];
  if (cVar1 == -2) {
    if (cVar2 != -1) {
      return 0;
    }
    uVar4 = 3;
  }
  else {
    if (cVar1 != -1) {
      return 0;
    }
    if (cVar2 != -2) {
      return 0;
    }
    uVar4 = 2;
  }
  iVar3 = FUN_004b7490(param_1);
  if (iVar3 == 0) {
    param_1[6] = param_1[6] + -2;
    memmove((void *)param_1[1],(void *)(param_1[1] + 2),param_1[6]);
    *(undefined1 *)(param_1[6] + param_1[1]) = 0;
    *(undefined1 *)(param_1[6] + 1 + param_1[1]) = 0;
    *(ushort *)(param_1 + 7) = *(ushort *)(param_1 + 7) | 0x200;
    *(undefined1 *)((int)param_1 + 0x1f) = uVar4;
  }
  return iVar3;
}


/* FUN_004b7410 @ 004b7410  kind=lib  attributed-by=lib-island  size=127 */

undefined4 __cdecl FUN_004b7410(int param_1)

{
  ushort uVar1;
  ulonglong local_c;
  
  uVar1 = *(ushort *)(param_1 + 0x1c);
  if ((uVar1 & 4) == 0) {
    if ((uVar1 & 8) == 0) {
      local_c = 0;
      if ((uVar1 & 0x12) != 0) {
        FUN_0048d300(*(byte **)(param_1 + 4),(uint *)&local_c,*(int *)(param_1 + 0x18),
                     *(char *)(param_1 + 0x1f));
      }
    }
    else {
      local_c = FUN_00477080(*(double *)(param_1 + 8));
    }
  }
  else {
    local_c = *(ulonglong *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = (int)local_c;
  *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xbe04 | 4;
  *(int *)(param_1 + 0x14) = (int)(local_c >> 0x20);
  return 0;
}


/* FUN_004b7490 @ 004b7490  kind=lib  attributed-by=lib-island  size=106 */

undefined4 __cdecl FUN_004b7490(int *param_1)

{
  int iVar1;
  
  if ((*(ushort *)(param_1 + 7) & 0x4000) != 0) {
    FUN_004b6fa0(param_1);
  }
  if (((*(byte *)(param_1 + 7) & 0x12) != 0) && (param_1[1] != param_1[9])) {
    iVar1 = FUN_004b7260(param_1,param_1[6] + 2,1);
    if (iVar1 != 0) {
      return 7;
    }
    *(undefined1 *)(param_1[6] + param_1[1]) = 0;
    *(undefined1 *)(param_1[6] + 1 + param_1[1]) = 0;
    *(ushort *)(param_1 + 7) = *(ushort *)(param_1 + 7) | 0x200;
  }
  return 0;
}


/* FUN_004b7500 @ 004b7500  kind=lib  attributed-by=lib-island  size=138 */

void __cdecl FUN_004b7500(int *param_1,undefined8 *param_2)

{
  if ((*(ushort *)(param_1 + 7) & 0x2460) != 0) {
    FUN_004b7720(param_1);
  }
  FUN_00494b00(*param_1,(undefined4 *)param_1[9]);
  param_1[1] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  *(undefined8 *)param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = param_2[1];
  *(undefined8 *)(param_1 + 4) = param_2[2];
  *(undefined8 *)(param_1 + 6) = param_2[3];
  *(undefined8 *)(param_1 + 8) = param_2[4];
  *(undefined2 *)((int)param_2 + 0x1c) = 1;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)((int)param_2 + 0x24) = 0;
  return;
}


/* FUN_004b7590 @ 004b7590  kind=lib  attributed-by=lib-island  size=87 */

undefined4 __cdecl FUN_004b7590(int *param_1)

{
  int iVar1;
  
  if (((*(ushort *)(param_1 + 7) & 0x200) == 0) && ((*(ushort *)(param_1 + 7) & 2) != 0)) {
    iVar1 = FUN_004b7260(param_1,param_1[6] + 2,1);
    if (iVar1 != 0) {
      return 7;
    }
    *(undefined1 *)(param_1[6] + param_1[1]) = 0;
    *(undefined1 *)(param_1[6] + 1 + param_1[1]) = 0;
    *(ushort *)(param_1 + 7) = *(ushort *)(param_1 + 7) | 0x200;
  }
  return 0;
}


/* FUN_004b75f0 @ 004b75f0  kind=lib  attributed-by=lib-island  size=126 */

undefined4 __cdecl FUN_004b75f0(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  if ((*(byte *)(param_1 + 0x1c) & 0xd) == 0) {
    iVar1 = FUN_0048d300(*(byte **)(param_1 + 4),(uint *)(param_1 + 0x10),*(int *)(param_1 + 0x18),
                         *(char *)(param_1 + 0x1f));
    if (iVar1 == 0) {
      *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xbe04 | 4;
      *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xffed;
      return 0;
    }
    fVar2 = FUN_004b8350(param_1);
    *(double *)(param_1 + 8) = (double)fVar2;
    *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xbe08 | 8;
    FUN_004b6650(param_1);
  }
  *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xffed;
  return 0;
}


/* FUN_004b7670 @ 004b7670  kind=lib  attributed-by=lib-island  size=109 */

undefined4 __cdecl FUN_004b7670(int param_1)

{
  ushort uVar1;
  double local_c;
  
  uVar1 = *(ushort *)(param_1 + 0x1c);
  if ((uVar1 & 8) == 0) {
    if ((uVar1 & 4) == 0) {
      local_c = 0.0;
      if ((uVar1 & 0x12) != 0) {
        local_c = 0.0;
        FUN_0048cc90(*(byte **)(param_1 + 4),&local_c,*(uint *)(param_1 + 0x18),
                     *(char *)(param_1 + 0x1f));
      }
    }
    else {
      local_c = (double)*(longlong *)(param_1 + 0x10);
    }
  }
  else {
    local_c = *(double *)(param_1 + 8);
  }
  *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xbe08 | 8;
  *(double *)(param_1 + 8) = local_c;
  return 0;
}


/* FUN_004b76e0 @ 004b76e0  kind=lib  attributed-by=lib-island  size=64 */

void __cdecl FUN_004b76e0(int *param_1)

{
  if ((*(ushort *)(param_1 + 7) & 0x2460) != 0) {
    FUN_004b7720(param_1);
  }
  FUN_00494b00(*param_1,(undefined4 *)param_1[9]);
  param_1[1] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  return;
}


/* FUN_004b7720 @ 004b7720  kind=lib  attributed-by=lib-island  size=105 */

void __cdecl FUN_004b7720(int *param_1)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 7);
  if ((uVar1 & 0x2000) != 0) {
    FUN_004b7010(param_1,param_1[4]);
    FUN_004b76e0(param_1);
    return;
  }
  if (((uVar1 & 0x400) != 0) && ((code *)param_1[8] != (code *)0x0)) {
    (*(code *)param_1[8])(param_1[1]);
    param_1[8] = 0;
    return;
  }
  if ((uVar1 & 0x20) != 0) {
    FUN_004a6e20((undefined4 *)param_1[4]);
    return;
  }
  if ((uVar1 & 0x40) != 0) {
    FUN_004b78c0((int)param_1);
  }
  return;
}


/* FUN_004b7790 @ 004b7790  kind=lib  attributed-by=lib-island  size=200 */

/* WARNING: Removing unreachable block (ram,0x004b77be) */
/* WARNING: Removing unreachable block (ram,0x004b77c4) */
/* WARNING: Removing unreachable block (ram,0x004b77d8) */
/* WARNING: Removing unreachable block (ram,0x004b77de) */
/* WARNING: Removing unreachable block (ram,0x004b77e9) */

void __cdecl FUN_004b7790(int *param_1,undefined8 param_2)

{
  if ((*(ushort *)(param_1 + 7) & 0x2460) != 0) {
    FUN_004b7720(param_1);
  }
  FUN_00494b00(*param_1,(undefined4 *)param_1[9]);
  param_1[1] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  *(undefined8 *)(param_1 + 2) = param_2;
  *(undefined1 *)((int)param_1 + 0x1e) = 2;
  *(undefined2 *)(param_1 + 7) = 8;
  return;
}


/* FUN_004b7860 @ 004b7860  kind=lib  attributed-by=lib-island  size=89 */

void __cdecl FUN_004b7860(int *param_1,int param_2,int param_3)

{
  if ((*(ushort *)(param_1 + 7) & 0x2460) != 0) {
    FUN_004b7720(param_1);
  }
  FUN_00494b00(*param_1,(undefined4 *)param_1[9]);
  param_1[4] = param_2;
  param_1[5] = param_3;
  param_1[1] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 7) = 4;
  *(undefined1 *)((int)param_1 + 0x1e) = 1;
  return;
}


/* FUN_004b78c0 @ 004b78c0  kind=lib  attributed-by=lib-island  size=77 */

void __cdecl FUN_004b78c0(int param_1)

{
  int *piVar1;
  
  if ((*(byte *)(param_1 + 0x1c) & 0x40) != 0) {
    piVar1 = *(int **)(param_1 + 0x10);
    piVar1[1] = *(int *)(*piVar1 + 0xa4);
    *(int **)(*piVar1 + 0xa4) = piVar1;
  }
  if ((*(byte *)(param_1 + 0x1c) & 0x20) != 0) {
    FUN_004a6e20(*(undefined4 **)(param_1 + 0x10));
  }
  *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xbe01 | 1;
  *(undefined1 *)(param_1 + 0x1e) = 5;
  return;
}


/* FUN_004b7910 @ 004b7910  kind=lib  attributed-by=lib-island  size=204 */

void __cdecl FUN_004b7910(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  iVar1 = *param_1;
  if ((*(ushort *)(param_1 + 7) & 0x2460) != 0) {
    FUN_004b7720(param_1);
  }
  FUN_00494b00(*param_1,(undefined4 *)param_1[9]);
  param_1[1] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  puVar2 = FUN_00494b90(iVar1,0x40);
  param_1[9] = (int)puVar2;
  if (*(char *)(iVar1 + 0x38) != '\0') {
    *(undefined2 *)(param_1 + 7) = 1;
    return;
  }
  if (((puVar2 == (undefined4 *)0x0) || (puVar2 < *(undefined4 **)(iVar1 + 0x104))) ||
     (*(undefined4 **)(iVar1 + 0x108) <= puVar2)) {
    uVar3 = (*DAT_00582af0._4_4_)(puVar2);
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar1 + 0xe8);
  }
  puVar2 = (undefined4 *)param_1[9];
  *(short *)(puVar2 + 6) = (short)(uVar3 - 0x20 >> 4);
  puVar2[1] = iVar1;
  *puVar2 = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[5] = 0;
  puVar2[4] = puVar2 + 8;
  *(undefined2 *)((int)puVar2 + 0x1a) = 1;
  param_1[4] = (int)puVar2;
  *(undefined2 *)(param_1 + 7) = 0x20;
  return;
}


/* FUN_004b79e0 @ 004b79e0  kind=lib  attributed-by=lib-island  size=504 */

undefined4 __cdecl
FUN_004b79e0(int *param_1,void *param_2,size_t param_3,char param_4,undefined *param_5)

{
  int *piVar1;
  ushort uVar2;
  uint uVar3;
  size_t _Size;
  int iVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  size_t sVar8;
  bool bVar9;
  
  if (param_2 == (void *)0x0) {
    if ((*(byte *)(param_1 + 7) & 0x40) != 0) {
      piVar1 = (int *)param_1[4];
      piVar1[1] = *(int *)(*piVar1 + 0xa4);
      *(int **)(*piVar1 + 0xa4) = piVar1;
    }
    if ((*(byte *)(param_1 + 7) & 0x20) != 0) {
      FUN_004a6e20((undefined4 *)param_1[4]);
    }
    *(ushort *)(param_1 + 7) = *(ushort *)(param_1 + 7) & 0xbe01 | 1;
    *(undefined1 *)((int)param_1 + 0x1e) = 5;
    return 0;
  }
  if (*param_1 == 0) {
    iVar7 = 1000000000;
  }
  else {
    iVar7 = *(int *)(*param_1 + 0x50);
  }
  uVar3 = 2;
  if (param_4 == '\0') {
    uVar3 = 0x10;
  }
  bVar9 = (int)param_3 < 0;
  sVar8 = param_3;
  param_3 = uVar3;
  if (bVar9) {
    sVar8 = 0;
    if (param_4 == '\x01') {
      if (-1 < iVar7) {
        do {
          if (*(char *)(sVar8 + (int)param_2) == '\0') break;
          sVar8 = sVar8 + 1;
        } while ((int)sVar8 <= iVar7);
      }
    }
    else if (-1 < iVar7) {
      do {
        if (*(char *)(sVar8 + 1 + (int)param_2) == '\0' && *(char *)(sVar8 + (int)param_2) == '\0')
        break;
        sVar8 = sVar8 + 2;
      } while ((int)sVar8 <= iVar7);
    }
    param_3 = uVar3 | 0x200;
  }
  if (param_5 == (undefined *)0xffffffff) {
    _Size = sVar8;
    if ((param_3 & 0x200) != 0) {
      _Size = (param_4 != '\x01') + 1 + sVar8;
    }
    if (iVar7 < (int)sVar8) {
      return 0x12;
    }
    iVar4 = FUN_004b7260(param_1,_Size,0);
    if (iVar4 != 0) {
      return 7;
    }
    memcpy((void *)param_1[1],param_2,_Size);
  }
  else {
    if ((code *)param_5 == FUN_004a0570) {
      if ((*(ushort *)(param_1 + 7) & 0x2460) != 0) {
        FUN_004b7720(param_1);
      }
      FUN_00494b00(*param_1,(undefined4 *)param_1[9]);
      param_1[9] = (int)param_2;
      param_1[8] = 0;
    }
    else {
      if ((*(ushort *)(param_1 + 7) & 0x2460) != 0) {
        FUN_004b7720(param_1);
      }
      FUN_00494b00(*param_1,(undefined4 *)param_1[9]);
      param_1[8] = (int)param_5;
      uVar2 = 0x400;
      if (param_5 == (undefined *)0x0) {
        uVar2 = 0x800;
      }
      param_1[9] = 0;
      param_3._0_2_ = (ushort)param_3 | uVar2;
    }
    param_1[1] = (int)param_2;
  }
  *(ushort *)(param_1 + 7) = (ushort)param_3;
  param_1[6] = sVar8;
  cVar6 = '\x01';
  if (param_4 != '\0') {
    cVar6 = param_4;
  }
  *(char *)((int)param_1 + 0x1f) = cVar6;
  *(char *)((int)param_1 + 0x1e) = (param_4 == '\0') + '\x03';
  if ((cVar6 != '\x01') && (iVar4 = FUN_004b7380(param_1), iVar4 != 0)) {
    return 7;
  }
  uVar5 = 0;
  if (iVar7 < (int)sVar8) {
    uVar5 = 0x12;
  }
  return uVar5;
}


/* FUN_004b7c40 @ 004b7c40  kind=lib  attributed-by=lib-island  size=109 */

void __cdecl FUN_004b7c40(int *param_1,undefined8 *param_2,ushort param_3)

{
  if ((*(ushort *)(param_1 + 7) & 0x2460) != 0) {
    FUN_004b7720(param_1);
  }
  *(undefined8 *)param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = param_2[1];
  *(undefined8 *)(param_1 + 4) = param_2[2];
  *(undefined8 *)(param_1 + 6) = param_2[3];
  param_1[8] = 0;
  if ((*(ushort *)((int)param_2 + 0x1c) & 0x800) == 0) {
    *(ushort *)(param_1 + 7) = *(ushort *)(param_1 + 7) & 0xe3ff | param_3;
  }
  return;
}


/* FUN_004b7cb0 @ 004b7cb0  kind=lib  attributed-by=lib-island  size=53 */

void __cdecl FUN_004b7cb0(int param_1)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0x1c);
  if ((uVar1 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x1e) = 5;
    return;
  }
  if ((uVar1 & 4) != 0) {
    *(undefined1 *)(param_1 + 0x1e) = 1;
    return;
  }
  if ((uVar1 & 8) != 0) {
    *(undefined1 *)(param_1 + 0x1e) = 2;
    return;
  }
  *(char *)(param_1 + 0x1e) = '\x04' - ((uVar1 & 2) != 0);
  return;
}


/* FUN_004b7cf0 @ 004b7cf0  kind=lib  attributed-by=lib-island  size=160 */

undefined4 __cdecl FUN_004b7cf0(int *param_1,int param_2)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  
  uVar2 = *(ushort *)(param_1 + 7);
  iVar3 = FUN_004b7260(param_1,0x20,0);
  if (iVar3 == 0) {
    if ((uVar2 & 4) == 0) {
      pcVar6 = "%!.15g";
    }
    else {
      pcVar6 = &DAT_0056dd58;
    }
    FUN_00466a80(0x20,param_1[1],(byte *)pcVar6);
    pcVar6 = (char *)param_1[1];
    uVar5 = 0;
    if (pcVar6 != (char *)0x0) {
      cVar1 = *pcVar6;
      pcVar4 = pcVar6;
      while (cVar1 != '\0') {
        pcVar4 = pcVar4 + 1;
        cVar1 = *pcVar4;
      }
      uVar5 = (int)pcVar4 - (int)pcVar6 & 0x3fffffff;
    }
    param_1[6] = uVar5;
    *(ushort *)(param_1 + 7) = *(ushort *)(param_1 + 7) | 0x202;
    *(undefined1 *)((int)param_1 + 0x1f) = 1;
    if (((*(byte *)(param_1 + 7) & 2) != 0) && (param_2 != 1)) {
      FUN_004b7dc0(param_1,(char)param_2);
    }
    return 0;
  }
  return 7;
}


/* FUN_004b7d90 @ 004b7d90  kind=lib  attributed-by=lib-island  size=43 */

bool __cdecl FUN_004b7d90(int *param_1)

{
  int iVar1;
  
  if ((*(ushort *)(param_1 + 7) & 0x12) != 0) {
    iVar1 = param_1[6];
    if ((*(ushort *)(param_1 + 7) & 0x4000) != 0) {
      iVar1 = iVar1 + param_1[4];
    }
    return *(int *)(*param_1 + 0x50) < iVar1;
  }
  return false;
}


/* FUN_004b7dc0 @ 004b7dc0  kind=lib  attributed-by=lib-island  size=1215 */

undefined4 __cdecl FUN_004b7dc0(int *param_1,char param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  undefined1 *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  undefined1 *puVar12;
  ushort *puVar13;
  uint local_8;
  
  if (*(char *)((int)param_1 + 0x1f) == '\x01') {
    if (param_2 != '\x01') {
      iVar3 = param_1[6] * 2 + 2;
      goto LAB_004b7e40;
    }
  }
  else if (param_2 != '\x01') {
    iVar3 = FUN_004b7490(param_1);
    if (iVar3 != 0) {
      return 7;
    }
    puVar9 = (undefined1 *)param_1[1];
    puVar12 = puVar9 + (param_1[6] & 0xfffffffe);
    for (; puVar9 < puVar12; puVar9 = puVar9 + 2) {
      uVar1 = *puVar9;
      *puVar9 = puVar9[1];
      puVar9[1] = uVar1;
    }
    *(char *)((int)param_1 + 0x1f) = param_2;
    return 0;
  }
  param_1[6] = param_1[6] & 0xfffffffe;
  iVar3 = param_1[6] * 2 + 1;
LAB_004b7e40:
  puVar10 = (ushort *)param_1[1];
  puVar13 = (ushort *)(param_1[6] + (int)puVar10);
  pbVar4 = (byte *)FUN_00494b90(*param_1,iVar3);
  if (pbVar4 == (byte *)0x0) {
    return 7;
  }
  if (*(char *)((int)param_1 + 0x1f) == '\x01') {
    pbVar5 = pbVar4;
    if (param_2 == '\x02') {
      while (puVar10 < puVar13) {
        local_8 = (uint)(byte)*puVar10;
        puVar10 = (ushort *)((int)puVar10 + 1);
        if (local_8 < 0xc0) {
LAB_004b7eeb:
          bVar7 = (byte)(local_8 >> 8);
          if (local_8 < 0x10000) {
            *pbVar5 = (byte)local_8;
            pbVar5[1] = bVar7;
            pbVar5 = pbVar5 + 2;
          }
          else {
            bVar6 = (byte)(local_8 - 0x10000 >> 10);
            *pbVar5 = ((byte)(local_8 >> 10) ^ bVar6) & 0x3f ^ bVar6;
            pbVar5[1] = ((byte)(local_8 - 0x10000 >> 0x12) & 3) - 0x28;
            pbVar5[2] = (byte)local_8;
            pbVar5[3] = (bVar7 & 3) - 0x24;
            pbVar5 = pbVar5 + 4;
          }
        }
        else {
          local_8 = (uint)(byte)(&DAT_0056c6f8)[local_8];
          for (; (puVar10 != puVar13 && (((byte)*puVar10 & 0xc0) == 0x80));
              puVar10 = (ushort *)((int)puVar10 + 1)) {
            local_8 = local_8 * 0x40 + ((byte)*puVar10 & 0x3f);
          }
          if (((0x7f < local_8) && ((local_8 & 0xfffff800) != 0xd800)) &&
             ((local_8 & 0xfffffffe) != 0xfffe)) goto LAB_004b7eeb;
          *pbVar5 = 0xfd;
          pbVar5[1] = 0xff;
          pbVar5 = pbVar5 + 2;
        }
      }
    }
    else {
      while (puVar10 < puVar13) {
        uVar8 = (uint)(byte)*puVar10;
        puVar10 = (ushort *)((int)puVar10 + 1);
        if (uVar8 < 0xc0) {
LAB_004b7fbc:
          bVar7 = (byte)(uVar8 >> 8);
          if (uVar8 < 0x10000) {
            *pbVar5 = bVar7;
            pbVar5[1] = (byte)uVar8;
            pbVar5 = pbVar5 + 2;
          }
          else {
            *pbVar5 = ((byte)(uVar8 - 0x10000 >> 0x12) & 3) - 0x28;
            bVar6 = (byte)(uVar8 - 0x10000 >> 10);
            pbVar5[1] = ((byte)(uVar8 >> 10) ^ bVar6) & 0x3f ^ bVar6;
            pbVar5[2] = (bVar7 & 3) - 0x24;
            pbVar5[3] = (byte)uVar8;
            pbVar5 = pbVar5 + 4;
          }
        }
        else {
          uVar8 = (uint)(byte)(&DAT_0056c6f8)[uVar8];
          for (; (puVar10 != puVar13 && (((byte)*puVar10 & 0xc0) == 0x80));
              puVar10 = (ushort *)((int)puVar10 + 1)) {
            uVar8 = uVar8 * 0x40 + ((byte)*puVar10 & 0x3f);
          }
          if (((0x7f < uVar8) && ((uVar8 & 0xfffff800) != 0xd800)) &&
             ((uVar8 & 0xfffffffe) != 0xfffe)) goto LAB_004b7fbc;
          *pbVar5 = 0xff;
          pbVar5[1] = 0xfd;
          pbVar5 = pbVar5 + 2;
        }
      }
    }
    param_1[6] = (int)pbVar5 - (int)pbVar4;
    *pbVar5 = 0;
    pbVar5 = pbVar5 + 1;
  }
  else {
    pbVar5 = pbVar4;
    if (*(char *)((int)param_1 + 0x1f) == '\x02') {
      while (puVar10 < puVar13) {
        uVar8 = (uint)*puVar10;
        puVar11 = puVar10 + 1;
        if ((uVar8 - 0xd800 < 0x800) && (puVar11 < puVar13)) {
          uVar2 = *puVar11;
          puVar11 = puVar10 + 2;
          uVar8 = ((uVar8 & 0x3f) + 0x40 + (uVar8 & 0x3c0)) * 0x400 + (uVar2 & 0x3ff);
        }
        bVar7 = (byte)uVar8;
        puVar10 = puVar11;
        if (uVar8 < 0x80) {
          *pbVar5 = bVar7;
          pbVar5 = pbVar5 + 1;
        }
        else if (uVar8 < 0x800) {
          *pbVar5 = ((byte)(uVar8 >> 6) & 0x1f) - 0x40;
          pbVar5[1] = (bVar7 & 0x3f) + 0x80;
          pbVar5 = pbVar5 + 2;
        }
        else if (uVar8 < 0x10000) {
          *pbVar5 = ((byte)(uVar8 >> 0xc) & 0xf) - 0x20;
          pbVar5[1] = ((byte)(uVar8 >> 6) & 0x3f) + 0x80;
          pbVar5[2] = (bVar7 & 0x3f) + 0x80;
          pbVar5 = pbVar5 + 3;
        }
        else {
          *pbVar5 = (char)(uVar8 >> 0x12) - 0x10;
          pbVar5[1] = ((byte)(uVar8 >> 0xc) & 0x3f) + 0x80;
          pbVar5[2] = ((byte)(uVar8 >> 6) & 0x3f) + 0x80;
          pbVar5[3] = (bVar7 & 0x3f) + 0x80;
          pbVar5 = pbVar5 + 4;
        }
      }
    }
    else {
      while (puVar10 < puVar13) {
        uVar8 = (uint)CONCAT11((byte)*puVar10,*(byte *)((int)puVar10 + 1));
        puVar11 = puVar10 + 1;
        if ((uVar8 - 0xd800 < 0x800) && (puVar11 < puVar13)) {
          uVar2 = *puVar11;
          puVar11 = puVar10 + 2;
          uVar8 = ((uVar8 & 0x3f) + 0x40 + (uVar8 & 0x3c0)) * 0x400 +
                  (CONCAT11((byte)uVar2,*(byte *)((int)puVar10 + 3)) & 0x3ff);
        }
        bVar7 = (byte)uVar8;
        puVar10 = puVar11;
        if (uVar8 < 0x80) {
          *pbVar5 = bVar7;
          pbVar5 = pbVar5 + 1;
        }
        else if (uVar8 < 0x800) {
          *pbVar5 = ((byte)(uVar8 >> 6) & 0x1f) - 0x40;
          pbVar5[1] = (bVar7 & 0x3f) + 0x80;
          pbVar5 = pbVar5 + 2;
        }
        else if (uVar8 < 0x10000) {
          *pbVar5 = ((byte)(uVar8 >> 0xc) & 0xf) - 0x20;
          pbVar5[1] = ((byte)(uVar8 >> 6) & 0x3f) + 0x80;
          pbVar5[2] = (bVar7 & 0x3f) + 0x80;
          pbVar5 = pbVar5 + 3;
        }
        else {
          *pbVar5 = (char)(uVar8 >> 0x12) - 0x10;
          pbVar5[1] = ((byte)(uVar8 >> 0xc) & 0x3f) + 0x80;
          pbVar5[2] = ((byte)(uVar8 >> 6) & 0x3f) + 0x80;
          pbVar5[3] = (bVar7 & 0x3f) + 0x80;
          pbVar5 = pbVar5 + 4;
        }
      }
    }
    param_1[6] = (int)pbVar5 - (int)pbVar4;
  }
  *pbVar5 = 0;
  if ((*(ushort *)(param_1 + 7) & 0x2460) != 0) {
    FUN_004b7720(param_1);
  }
  FUN_00494b00(*param_1,(undefined4 *)param_1[9]);
  *(char *)((int)param_1 + 0x1f) = param_2;
  param_1[1] = (int)pbVar4;
  param_1[9] = (int)pbVar4;
  *(ushort *)(param_1 + 7) = *(ushort *)(param_1 + 7) & 0xe7ff | 0x600;
  param_1[8] = 0;
  return 0;
}


/* FUN_004b8290 @ 004b8290  kind=lib  attributed-by=lib-island  size=184 */

int __cdecl FUN_004b8290(int param_1,int *param_2,uint param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 != (int *)0x0) {
    iVar6 = 0;
    if (0 < *(short *)(param_1 + 0x4e)) {
      puVar7 = *(undefined4 **)(param_1 + 0x48);
      do {
        piVar1 = (int *)*puVar7;
        piVar2 = piVar1;
        piVar4 = param_2;
        uVar5 = param_3;
        if (piVar1 != (int *)0x0) {
          while (uVar3 = uVar5 - 4, 3 < uVar5) {
            if (*piVar2 != *piVar4) goto LAB_004b82eb;
            piVar2 = piVar2 + 1;
            piVar4 = piVar4 + 1;
            uVar5 = uVar3;
          }
          if (uVar3 != 0xfffffffc) {
LAB_004b82eb:
            if (((char)*piVar2 != (char)*piVar4) ||
               ((uVar3 != 0xfffffffd &&
                ((*(char *)((int)piVar2 + 1) != *(char *)((int)piVar4 + 1) ||
                 ((uVar3 != 0xfffffffe &&
                  ((*(char *)((int)piVar2 + 2) != *(char *)((int)piVar4 + 2) ||
                   ((uVar3 != 0xffffffff &&
                    (*(char *)((int)piVar2 + 3) != *(char *)((int)piVar4 + 3)))))))))))))
            goto LAB_004b8327;
          }
          if (*(char *)((int)piVar1 + param_3) == '\0') {
            return iVar6 + 1;
          }
        }
LAB_004b8327:
        iVar6 = iVar6 + 1;
        puVar7 = puVar7 + 1;
      } while (iVar6 < *(short *)(param_1 + 0x4e));
    }
  }
  return 0;
}


/* FUN_004b8350 @ 004b8350  kind=lib  attributed-by=lib-island  size=89 */

float10 __cdecl FUN_004b8350(int param_1)

{
  ushort uVar1;
  double local_c;
  
  uVar1 = *(ushort *)(param_1 + 0x1c);
  if ((uVar1 & 8) != 0) {
    return (float10)*(double *)(param_1 + 8);
  }
  if ((uVar1 & 4) != 0) {
    return (float10)*(longlong *)(param_1 + 0x10);
  }
  if ((uVar1 & 0x12) != 0) {
    local_c = 0.0;
    FUN_0048cc90(*(byte **)(param_1 + 4),&local_c,*(uint *)(param_1 + 0x18),
                 *(char *)(param_1 + 0x1f));
    return (float10)local_c;
  }
  return (float10)0;
}


/* FUN_004b83b0 @ 004b83b0  kind=lib  attributed-by=lib-island  size=420 */

uint __cdecl FUN_004b83b0(int param_1,byte *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 local_48 [2];
  int local_38;
  int local_34;
  undefined1 local_29;
  uint local_20;
  uint local_1c;
  undefined4 *local_18;
  uint local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  piVar1 = param_3;
  local_18 = (undefined4 *)*param_3;
  local_29 = *(undefined1 *)(local_18 + 1);
  local_48[0]._0_4_ = *local_18;
  iVar5 = 0;
  if (*param_2 < 0x80) {
    local_8 = (uint)*param_2;
    local_14 = 1;
  }
  else {
    local_14 = FUN_0049d440(param_2,&local_20);
    local_8 = local_20;
    local_14 = local_14 & 0xff;
  }
  local_20 = (uint)*(ushort *)((int)local_18 + 6);
  local_c = local_8;
  if (local_14 < local_8) {
    param_3 = local_18 + 3;
    local_10 = 0;
    do {
      if ((int)(uint)*(ushort *)(piVar1 + 1) <= iVar5) break;
      if (param_2[local_14] < 0x80) {
        local_1c = (uint)param_2[local_14];
        uVar3 = 1;
      }
      else {
        uVar3 = FUN_0049d440(param_2 + local_14,&local_1c);
        uVar3 = uVar3 & 0xff;
      }
      uVar2 = local_c;
      local_14 = local_14 + uVar3;
      if (param_1 <= (int)local_c) {
        if (local_1c < 0xc) {
          uVar3 = (uint)(byte)(&DAT_0056a674)[local_1c];
        }
        else {
          uVar3 = local_1c - 0xc >> 1;
        }
        if (uVar3 != 0) break;
      }
      local_c = FUN_004b87d0((char *)(param_2 + local_c),local_1c,(int)local_48);
      local_c = uVar2 + local_c;
      if (iVar5 < (int)local_20) {
        iVar4 = *param_3;
      }
      else {
        iVar4 = 0;
      }
      uVar3 = FUN_004a0720(local_48,(undefined8 *)(piVar1[4] + local_10),iVar4);
      if (uVar3 != 0) {
        if ((iVar5 < (int)local_20) && (*(char *)(iVar5 + local_18[2]) != '\0')) {
          uVar3 = -uVar3;
        }
        if ((*(byte *)((int)piVar1 + 6) & 4) == 0) {
          return uVar3;
        }
        if (iVar5 != *(ushort *)(piVar1 + 1) - 1) {
          return uVar3;
        }
        piVar1[2] = local_38;
        piVar1[3] = local_34;
        *(byte *)((int)piVar1 + 6) = *(byte *)((int)piVar1 + 6) & 0xfb;
        return uVar3;
      }
      param_3 = param_3 + 1;
      local_10 = local_10 + 0x28;
      iVar5 = iVar5 + 1;
    } while (local_14 < local_8);
  }
  uVar3 = 0;
  if ((*(byte *)((int)piVar1 + 6) & 1) == 0) {
    if (((*(byte *)((int)piVar1 + 6) & 2) == 0) && (local_14 < local_8)) {
      uVar3 = 1;
    }
    return uVar3;
  }
  return 0xffffffff;
}


/* FUN_004b8560 @ 004b8560  kind=lib  attributed-by=lib-island  size=213 */

void __cdecl FUN_004b8560(undefined4 *param_1,int param_2,byte *param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  uint local_c;
  undefined4 *local_8;
  
  uVar2 = param_4;
  local_8 = *(undefined4 **)(param_4 + 0x10);
  *(undefined1 *)(param_4 + 6) = 0;
  if (*param_3 < 0x80) {
    uVar4 = 1;
    uVar5 = (uint)*param_3;
  }
  else {
    uVar4 = FUN_0049d440(param_3,&param_4);
    uVar4 = uVar4 & 0xff;
    uVar5 = param_4;
  }
  uVar6 = 0;
  for (param_4 = uVar5;
      ((uVar4 < uVar5 && (uVar6 < *(ushort *)(uVar2 + 4))) && ((int)param_4 <= param_2));
      param_4 = param_4 + uVar3) {
    bVar1 = param_3[uVar4];
    if (bVar1 < 0x80) {
      local_c = (uint)bVar1;
      uVar3 = 1;
    }
    else {
      uVar3 = FUN_0049d440(param_3 + uVar4,&local_c);
      uVar3 = uVar3 & 0xff;
    }
    uVar4 = uVar4 + uVar3;
    *(undefined1 *)((int)local_8 + 0x1f) = *(undefined1 *)(param_1 + 1);
    *local_8 = *param_1;
    local_8[9] = 0;
    uVar3 = FUN_004b87d0((char *)(param_3 + param_4),local_c,(int)local_8);
    local_8 = local_8 + 10;
    uVar6 = uVar6 + 1;
  }
  *(ushort *)(uVar2 + 4) = uVar6;
  return;
}


/* FUN_004b8640 @ 004b8640  kind=lib  attributed-by=lib-island  size=356 */

uint __cdecl FUN_004b8640(int *param_1)

{
  int iVar1;
  int *piVar2;
  void *_Src;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *param_1;
  FUN_004b60e0(param_1);
  if (param_1[0x15] < 0) {
    if ((param_1[0x16] != 0) && ((*(byte *)(param_1 + 0x18) & 0x20) != 0)) {
      FUN_004961f0(iVar1,param_1[0x16],(byte *)0x0);
      piVar2 = *(int **)(iVar1 + 0xd4);
      _Src = (void *)param_1[0xd];
      if (piVar2 != (int *)0x0) {
        if (_Src == (void *)0x0) {
          if ((*(byte *)(piVar2 + 7) & 0x40) != 0) {
            piVar3 = (int *)piVar2[4];
            piVar3[1] = *(int *)(*piVar3 + 0xa4);
            *(int **)(*piVar3 + 0xa4) = piVar3;
          }
          if ((*(byte *)(piVar2 + 7) & 0x20) != 0) {
            FUN_004a6e20((undefined4 *)piVar2[4]);
          }
          *(ushort *)(piVar2 + 7) = *(ushort *)(piVar2 + 7) & 0xbe01 | 1;
          *(undefined1 *)((int)piVar2 + 0x1e) = 5;
        }
        else {
          if (*piVar2 == 0) {
            iVar4 = 1000000000;
          }
          else {
            iVar4 = *(int *)(*piVar2 + 0x50);
          }
          iVar5 = 0;
          if (-1 < iVar4) {
            do {
              if (*(char *)(iVar5 + (int)_Src) == '\0') break;
              iVar5 = iVar5 + 1;
            } while (iVar5 <= iVar4);
          }
          if ((iVar5 <= iVar4) && (iVar4 = FUN_004b7260(piVar2,iVar5 + 1,0), iVar4 == 0)) {
            memcpy((void *)piVar2[1],_Src,iVar5 + 1);
            piVar2[6] = iVar5;
            piVar2[7] = 0x1030202;
          }
        }
      }
      FUN_00494b00(iVar1,(undefined4 *)param_1[0xd]);
      param_1[0xd] = 0;
    }
  }
  else {
    FUN_004b9420(param_1);
    FUN_00494b00(iVar1,(undefined4 *)param_1[0xd]);
    param_1[0xd] = 0;
    if ((param_1[0x18] & 0x40U) != 0) {
      param_1[0x18] = param_1[0x18] | 0x20;
    }
  }
  FUN_00494b00(*param_1,(undefined4 *)param_1[0xd]);
  param_1[0xd] = 0;
  param_1[5] = 0;
  param_1[0xc] = 0x26bceaa5;
  return param_1[0x16] & *(uint *)(iVar1 + 0x30);
}


/* FUN_004b87b0 @ 004b87b0  kind=lib  attributed-by=lib-island  size=32 */

void __cdecl FUN_004b87b0(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x28) - (param_2 * 4 + 4)) = *(undefined4 *)(param_1 + 0x1c);
  }
  return;
}


/* FUN_004b87d0 @ 004b87d0  kind=lib  attributed-by=lib-island  size=552 */

uint __cdecl FUN_004b87d0(char *param_1,uint param_2,int param_3)

{
  char cVar1;
  char cVar2;
  int3 iVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int iVar6;
  int extraout_ECX;
  undefined4 uVar7;
  uint uVar8;
  
  switch(param_2) {
  case 0:
  case 10:
  case 0xb:
    *(undefined2 *)(param_3 + 0x1c) = 1;
    return 0;
  case 1:
    cVar1 = *param_1;
    *(int *)(param_3 + 0x10) = (int)cVar1;
    *(undefined2 *)(param_3 + 0x1c) = 4;
    *(int *)(param_3 + 0x14) = (int)cVar1 >> 0x1f;
    return 1;
  case 2:
    cVar1 = *param_1;
    cVar2 = param_1[1];
    *(int *)(param_3 + 0x10) = (int)CONCAT11(cVar1,cVar2);
    *(undefined2 *)(param_3 + 0x1c) = 4;
    *(int *)(param_3 + 0x14) = (int)CONCAT11(cVar1,cVar2) >> 0x1f;
    return 2;
  case 3:
    iVar6 = (int)CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]);
    *(int *)(param_3 + 0x10) = iVar6;
    *(undefined2 *)(param_3 + 0x1c) = 4;
    *(int *)(param_3 + 0x14) = iVar6 >> 0x1f;
    return 3;
  case 4:
    iVar3 = CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]);
    *(uint *)(param_3 + 0x10) = CONCAT31(iVar3,param_1[3]);
    *(int *)(param_3 + 0x14) = (int)iVar3 >> 0x17;
    *(undefined2 *)(param_3 + 0x1c) = 4;
    return 4;
  case 5:
    cVar1 = *param_1;
    cVar2 = param_1[1];
    *(uint *)(param_3 + 0x10) =
         CONCAT31(CONCAT21(CONCAT11(param_1[2],param_1[3]),param_1[4]),param_1[5]);
    *(int *)(param_3 + 0x14) = (int)CONCAT11(cVar1,cVar2);
    *(undefined2 *)(param_3 + 0x1c) = 4;
    return 6;
  case 6:
  case 7:
    break;
  case 8:
  case 9:
    *(uint *)(param_3 + 0x10) = param_2 - 8;
    *(undefined2 *)(param_3 + 0x1c) = 4;
    *(undefined4 *)(param_3 + 0x14) = 0;
    return 0;
  default:
    uVar8 = param_2 - 0xc >> 1;
    *(char **)(param_3 + 4) = param_1;
    *(uint *)(param_3 + 0x18) = uVar8;
    *(undefined4 *)(param_3 + 0x20) = 0;
    uVar4 = 0x1002;
    if ((param_2 & 1) == 0) {
      uVar4 = 0x1010;
    }
    *(undefined2 *)(param_3 + 0x1c) = uVar4;
    return uVar8;
  }
  uVar5 = CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]);
  uVar7 = CONCAT31(CONCAT21(CONCAT11(param_1[4],param_1[5]),param_1[6]),param_1[7]);
  if (param_2 != 6) {
    *(undefined4 *)(param_3 + 8) = uVar7;
    *(undefined4 *)(param_3 + 0xc) = uVar5;
    iVar6 = FUN_0049f810();
    *(ushort *)(extraout_ECX + 0x1c) = (-(ushort)(iVar6 != 0) & 0xfff9) + 8;
    return 8;
  }
  *(undefined4 *)(param_3 + 0x10) = uVar7;
  *(undefined4 *)(param_3 + 0x14) = uVar5;
  *(undefined2 *)(param_3 + 0x1c) = 4;
  return 8;
}


/* FUN_004b8a30 @ 004b8a30  kind=lib  attributed-by=lib-island  size=175 */

uint __cdecl FUN_004b8a30(void *param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  size_t _Size;
  
  uVar1 = FUN_004b8ae0(param_3,param_4);
  if (6 < uVar1 - 1) {
    if (uVar1 < 0xc) {
      return 0;
    }
    _Size = *(size_t *)(param_3 + 0x18);
    memcpy(param_1,*(void **)(param_3 + 4),_Size);
    if ((*(ushort *)(param_3 + 0x1c) & 0x4000) != 0) {
      _Size = _Size + *(int *)(param_3 + 0x10);
      if (param_2 < _Size) {
        _Size = param_2;
      }
      memset((void *)(*(int *)(param_3 + 0x18) + (int)param_1),0,_Size - *(int *)(param_3 + 0x18));
    }
    return _Size;
  }
  if (uVar1 == 7) {
    uVar4 = *(uint *)(param_3 + 8);
    uVar3 = *(uint *)(param_3 + 0xc);
  }
  else {
    uVar4 = *(uint *)(param_3 + 0x10);
    uVar3 = *(uint *)(param_3 + 0x14);
    if (0xb < uVar1) {
      uVar1 = uVar1 - 0xc >> 1;
      uVar2 = uVar1;
      goto joined_r0x004b8a62;
    }
  }
  uVar1 = (uint)(byte)(&DAT_0056a674)[uVar1];
  uVar2 = uVar1;
joined_r0x004b8a62:
  while (uVar1 != 0) {
    uVar1 = uVar1 - 1;
    *(char *)(uVar1 + (int)param_1) = (char)uVar4;
    uVar4 = uVar4 >> 8 | uVar3 << 0x18;
    uVar3 = uVar3 >> 8;
  }
  return uVar2;
}


/* FUN_004b8ae0 @ 004b8ae0  kind=lib  attributed-by=lib-island  size=261 */

int __cdecl FUN_004b8ae0(int param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar1 = *(ushort *)(param_1 + 0x1c);
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  if ((uVar1 & 4) == 0) {
    if ((uVar1 & 8) == 0) {
      iVar5 = *(int *)(param_1 + 0x18);
      if ((uVar1 & 0x4000) != 0) {
        iVar5 = iVar5 + *(int *)(param_1 + 0x10);
      }
      return (uVar1 >> 1 & 1) + iVar5 * 2 + 0xc;
    }
    return 7;
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar3 = *(uint *)(param_1 + 0x14);
  uVar4 = uVar3;
  uVar6 = uVar2;
  if (((int)uVar3 < 1) && ((int)uVar3 < 0)) {
    if ((int)uVar3 < -0x7fff) {
      if ((int)uVar3 < -0x8000) {
        return 6;
      }
      if (uVar2 == 0) {
        return 6;
      }
    }
    uVar4 = -(uVar3 + (uVar2 != 0));
    uVar6 = -uVar2;
  }
  if (uVar4 == 0) {
    if (uVar6 < 0x80) {
      if ((((uVar2 & 1) != uVar2) || (uVar3 != 0)) || (iVar5 = uVar6 + 8, param_2 < 4)) {
        iVar5 = 1;
      }
      return iVar5;
    }
    if (uVar6 < 0x8000) {
      return 2;
    }
    if (uVar6 < 0x800000) {
      return 3;
    }
    if (uVar6 < 0x80000000) {
      return 4;
    }
  }
  if (0x7fff < uVar4) {
    return 6;
  }
  return 5;
}


/* FUN_004b8bf0 @ 004b8bf0  kind=lib  attributed-by=lib-island  size=27 */

uint __cdecl FUN_004b8bf0(uint param_1)

{
  if (0xb < param_1) {
    return param_1 - 0xc >> 1;
  }
  return (uint)(byte)(&DAT_0056a674)[param_1];
}


/* FUN_004b8c10 @ 004b8c10  kind=lib  attributed-by=lib-island  size=62 */

undefined4 __cdecl
FUN_004b8c10(int *param_1,int param_2,int param_3,void *param_4,undefined *param_5)

{
  undefined4 uVar1;
  
  if (*(char *)(*param_1 + 0x38) != '\0') {
    return 7;
  }
  uVar1 = FUN_004b79e0((int *)(param_1[4] +
                              ((uint)*(ushort *)(param_1 + 0xb) * param_3 + param_2) * 0x28),param_4
                       ,0xffffffff,'\x01',param_5);
  return uVar1;
}


/* FUN_004b8c50 @ 004b8c50  kind=lib  attributed-by=lib-island  size=121 */

void __cdecl FUN_004b8c50(int *param_1,int param_2)

{
  int iVar1;
  int *_Dst;
  int iVar2;
  
  iVar1 = *param_1;
  FUN_00487fb0((int *)param_1[4],(uint)*(ushort *)(param_1 + 0xb) * 2);
  FUN_00494b00(iVar1,(undefined4 *)param_1[4]);
  *(short *)(param_1 + 0xb) = (short)param_2;
  iVar2 = param_2 * 2;
  _Dst = FUN_00494b90(iVar1,param_2 * 0x50);
  if (_Dst != (int *)0x0) {
    memset(_Dst,0,param_2 * 0x50);
  }
  param_1[4] = (int)_Dst;
  if (_Dst != (int *)0x0) {
    for (; 0 < iVar2; iVar2 = iVar2 + -1) {
      *(undefined2 *)(_Dst + 7) = 1;
      *_Dst = *param_1;
      _Dst = _Dst + 10;
    }
  }
  return;
}


/* FUN_004b8cd0 @ 004b8cd0  kind=lib  attributed-by=lib-island  size=45 */

void __cdecl FUN_004b8cd0(int param_1,int param_2)

{
  if (0x20 < param_2) {
    *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
    return;
  }
  *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) | 1 << ((char)param_2 - 1U & 0x1f);
  return;
}


/* FUN_004b8d00 @ 004b8d00  kind=lib  attributed-by=lib-island  size=201 */

void __cdecl FUN_004b8d00(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  void *_Dst;
  int local_c;
  int local_8;
  
  puVar1 = *(undefined4 **)(param_2 + 0x48);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[9] != 0) {
      local_8 = 0;
      if (0 < (int)puVar1[5]) {
        local_c = 0;
        do {
          _Dst = (void *)(puVar1[9] + local_c);
          FUN_00494b00(param_1,*(undefined4 **)((int)_Dst + 0x1c));
          FUN_00494b00(param_1,*(undefined4 **)((int)_Dst + 0x24));
          memset(_Dst,0,0x30);
          local_8 = local_8 + 1;
          local_c = local_c + 0x30;
        } while (local_8 < (int)puVar1[5]);
      }
      FUN_00494b00(param_1,(undefined4 *)puVar1[9]);
    }
    piVar2 = (int *)puVar1[0xb];
    if (piVar2 != (int *)0x0) {
      if (*piVar2 != 0) {
        (**(code **)(*piVar2 + 4))(piVar2);
        *piVar2 = 0;
      }
      FUN_00466dd0((int)piVar2);
    }
    FUN_004bfab0(param_1,(undefined4 *)puVar1[0xc]);
    FUN_00494b00(param_1,(undefined4 *)puVar1[0xd]);
    FUN_00494b00(param_1,puVar1);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return;
}


/* FUN_004b8dd0 @ 004b8dd0  kind=lib  attributed-by=lib-island  size=172 */

undefined4 __cdecl FUN_004b8dd0(int param_1,int param_2,uint *param_3)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  
  iVar2 = *(int *)(param_1 + 0x48);
  if (*(int *)(iVar2 + 0x28) == 0) {
    iVar9 = (*(undefined4 **)(iVar2 + 0x30))[1];
    pbVar7 = (byte *)**(undefined4 **)(iVar2 + 0x30);
  }
  else {
    iVar6 = *(int *)(*(int *)(iVar2 + 0x28) + 4) * 0x30 + *(int *)(iVar2 + 0x24);
    iVar9 = *(int *)(iVar6 + 0x14);
    pbVar7 = *(byte **)(iVar6 + 0x20);
  }
  piVar3 = *(int **)(iVar2 + 0x34);
  iVar2 = *(int *)(param_2 + 0x18);
  pbVar4 = *(byte **)(param_2 + 4);
  puVar5 = *(undefined4 **)(param_1 + 8);
  if (pbVar7 != (byte *)0x0) {
    FUN_004b8560(puVar5,iVar9,pbVar7,(uint)piVar3);
  }
  uVar1 = *(ushort *)((int)puVar5 + 6);
  iVar9 = 0;
  *(ushort *)(piVar3 + 1) = uVar1;
  if (uVar1 != 0) {
    pbVar7 = (byte *)(piVar3[4] + 0x1c);
    do {
      if ((*pbVar7 & 1) != 0) {
        *param_3 = 0xffffffff;
        return 0;
      }
      iVar9 = iVar9 + 1;
      pbVar7 = pbVar7 + 0x28;
    } while (iVar9 < (int)(uint)uVar1);
  }
  *(byte *)((int)piVar3 + 6) = *(byte *)((int)piVar3 + 6) | 2;
  uVar8 = FUN_004b83b0(iVar2,pbVar4,piVar3);
  *param_3 = uVar8;
  return 0;
}


/* FUN_004b8e80 @ 004b8e80  kind=lib  attributed-by=lib-island  size=184 */

undefined4 __cdecl FUN_004b8e80(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *_Dst;
  int *piVar3;
  int iVar4;
  
  _Dst = FUN_00494b90(param_1,0x38);
  if (_Dst != (undefined4 *)0x0) {
    memset(_Dst,0,0x38);
  }
  *(undefined4 **)(param_2 + 0x48) = _Dst;
  if (_Dst == (undefined4 *)0x0) {
    return 7;
  }
  piVar2 = *(int **)(param_2 + 8);
  iVar1 = (uint)*(ushort *)((int)piVar2 + 6) * 0x28 + 0x40;
  if (iVar1 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_00494b90(*piVar2,iVar1);
    if (piVar3 == (int *)0x0) goto LAB_004b8ef7;
  }
  piVar3[4] = (int)(piVar3 + 6);
  *piVar3 = (int)piVar2;
  *(short *)(piVar3 + 1) = *(short *)((int)piVar2 + 6) + 1;
LAB_004b8ef7:
  _Dst[0xd] = piVar3;
  if (piVar3 == (int *)0x0) {
    return 7;
  }
  if (*(char *)(param_1 + 0x37) != '\x02') {
    iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + 4) + 0x20);
    _Dst[7] = iVar1 * 10;
    iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 0x50);
    if (iVar4 < 10) {
      iVar4 = 10;
    }
    _Dst[8] = iVar4 * iVar1;
  }
  return 0;
}


/* FUN_004b8f40 @ 004b8f40  kind=lib  attributed-by=lib-island  size=186 */

int __cdecl FUN_004b8f40(int param_1,int param_2,uint *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_2 + 0x48);
  if (*(int *)(iVar1 + 0x28) != 0) {
    iVar4 = *(int *)(*(int *)(iVar1 + 0x28) + 4);
    iVar3 = FUN_004bf5d0(param_1,(uint *)(iVar4 * 0x30 + *(int *)(iVar1 + 0x24)));
    iVar4 = *(int *)(iVar1 + 0x14) + iVar4;
    while ((iVar3 == 0 && (iVar4 = iVar4 / 2, 0 < iVar4))) {
      iVar3 = FUN_004bf360(param_2,iVar4);
    }
    *param_3 = (uint)(*(int *)(*(int *)(iVar1 + 0x24) + 0x18 +
                              *(int *)(*(int *)(iVar1 + 0x28) + 4) * 0x30) == 0);
    return iVar3;
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x30);
  *(undefined4 *)(iVar1 + 0x30) = puVar2[2];
  puVar2[2] = 0;
  FUN_004bfab0(param_1,puVar2);
  *param_3 = (uint)(*(int *)(iVar1 + 0x30) == 0);
  return 0;
}


/* FUN_004b9000 @ 004b9000  kind=lib  attributed-by=lib-island  size=724 */

void __cdecl FUN_004b9000(int *param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  size_t sVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  int local_74 [11];
  uint local_48;
  uint *local_44;
  int local_40;
  uint local_3c [2];
  undefined4 *local_34;
  int *local_30;
  size_t local_2c;
  int *local_28;
  uint local_24;
  byte local_20 [12];
  byte local_14 [12];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  puVar1 = *(uint **)(param_2 + 0x48);
  piVar7 = (int *)0x0;
  local_28 = param_1;
  local_40 = param_2;
  local_44 = param_3;
  local_30 = (int *)0x0;
  local_3c[0] = 0;
  local_3c[1] = 0;
  local_24 = 2;
  if (puVar1[6] == 0) {
    *param_3 = (uint)(puVar1[0xc] == 0);
    FUN_004bfb50(param_2);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar2 = FUN_004bf870(param_1,param_2);
  if (iVar2 != 0) goto LAB_004b92c3;
  uVar6 = puVar1[6];
  if ((int)uVar6 < 0x11) {
    if (2 < (int)uVar6) goto LAB_004b908a;
    uVar3 = 2;
  }
  else {
    uVar6 = 0x10;
LAB_004b908a:
    uVar3 = 2;
    do {
      uVar3 = uVar3 * 2;
      local_24 = uVar3;
    } while ((int)uVar3 < (int)uVar6);
  }
  local_2c = uVar3 * 0x34;
  local_34 = FUN_00494b90((int)local_28,local_2c);
  if (local_34 != (undefined4 *)0x0) {
    memset(local_34,0,local_2c);
  }
  puVar1[9] = (uint)local_34;
  if (local_34 == (undefined4 *)0x0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  puVar1[5] = local_24;
  puVar1[10] = (uint)(local_34 + local_24 * 0xc);
  iVar2 = 0;
  do {
    local_24 = 0;
    piVar9 = piVar7;
    if (iVar2 == 0) {
      local_2c = 0;
      do {
        piVar9 = piVar7;
        if ((int)puVar1[6] <= (int)local_2c) break;
        local_74[0] = 0;
        local_74[1] = 0;
        local_74[2] = 0;
        local_74[3] = 0;
        local_74[4] = 0;
        local_74[5] = 0;
        local_74[6] = 0;
        local_74[7] = 0;
        local_74[8] = 0;
        local_74[9] = 0;
        iVar2 = FUN_004bf420((int)local_28,local_40,(uint *)(local_74 + 10));
        if (iVar2 != 0) break;
        if ((int)puVar1[6] < 0x11) goto LAB_004b9283;
        if ((piVar7 != (int *)0x0) || (iVar2 = FUN_004bfa40(local_28,&local_30), iVar2 == 0)) {
          local_34 = (undefined4 *)0x0;
          FUN_00479360((int)local_28,local_30,(undefined8 *)local_74,local_3c[0],local_3c[1]);
          sVar4 = FUN_004a5fc0(local_14,local_74[10],local_48);
          FUN_004793f0(local_74,(int)local_14,sVar4);
          puVar8 = (undefined4 *)0x0;
          do {
            if (puVar8 != (undefined4 *)0x0) break;
            iVar2 = *(int *)(puVar1[10] + 4) * 0x30 + puVar1[9];
            sVar4 = FUN_004a5fc0(local_20,*(uint *)(iVar2 + 0x14),
                                 (int)*(uint *)(iVar2 + 0x14) >> 0x1f);
            FUN_004793f0(local_74,(int)local_20,sVar4);
            FUN_004793f0(local_74,*(int *)(iVar2 + 0x20),*(size_t *)(iVar2 + 0x14));
            iVar2 = FUN_004b8f40((int)local_28,local_40,(uint *)&local_34);
            puVar8 = local_34;
          } while (iVar2 == 0);
          iVar5 = FUN_004792d0((int)local_28,local_74,(int *)local_3c);
          if (iVar2 == 0) {
            iVar2 = iVar5;
          }
        }
        local_24 = local_24 + 1;
        local_2c = local_2c + 0x10;
        piVar7 = local_30;
        piVar9 = local_30;
      } while (iVar2 == 0);
    }
    piVar7 = piVar9;
    if ((int)puVar1[6] < 0x11) break;
    piVar7 = (int *)puVar1[0xb];
    puVar1[0xb] = (uint)piVar9;
    *puVar1 = local_3c[0];
    puVar1[6] = local_24;
    puVar1[1] = local_3c[1];
    puVar1[2] = 0;
    puVar1[3] = 0;
    local_3c[0] = 0;
    local_3c[1] = 0;
    local_30 = piVar7;
  } while (iVar2 == 0);
LAB_004b9283:
  if (piVar7 != (int *)0x0) {
    if (*piVar7 != 0) {
      (**(code **)(*piVar7 + 4))(piVar7);
      *piVar7 = 0;
    }
    FUN_00466dd0((int)piVar7);
  }
  *local_44 = (uint)(*(int *)(puVar1[9] + 0x18 + *(int *)(puVar1[10] + 4) * 0x30) == 0);
LAB_004b92c3:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004b92e0 @ 004b92e0  kind=lib  attributed-by=lib-island  size=119 */

undefined4 __cdecl FUN_004b92e0(int param_1,int *param_2)

{
  int iVar1;
  void *_Src;
  size_t _Size;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (*(int *)(iVar1 + 0x28) == 0) {
    _Size = (*(undefined4 **)(iVar1 + 0x30))[1];
    _Src = (void *)**(undefined4 **)(iVar1 + 0x30);
  }
  else {
    iVar1 = *(int *)(*(int *)(iVar1 + 0x28) + 4) * 0x30 + *(int *)(iVar1 + 0x24);
    _Size = *(size_t *)(iVar1 + 0x14);
    _Src = *(void **)(iVar1 + 0x20);
  }
  iVar1 = FUN_004b7260(param_2,_Size,0);
  if (iVar1 != 0) {
    return 7;
  }
  param_2[6] = _Size;
  *(ushort *)(param_2 + 7) = *(ushort *)(param_2 + 7) & 0xbe10 | 0x10;
  memcpy((void *)param_2[1],_Src,_Size);
  return 0;
}


/* FUN_004b9360 @ 004b9360  kind=lib  attributed-by=lib-island  size=183 */

undefined4 __cdecl FUN_004b9360(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar4 = *(uint *)(param_3 + 0x18);
  uVar5 = (int)uVar4 >> 0x1f;
  iVar1 = *(int *)(param_2 + 0x48);
  iVar6 = 0;
  do {
    uVar4 = uVar4 >> 7 | uVar5 << 0x19;
    uVar5 = uVar5 >> 7;
    iVar6 = iVar6 + 1;
    if (uVar4 == 0 && uVar5 == 0) break;
  } while (iVar6 < 9);
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + *(int *)(param_3 + 0x18) + iVar6;
  puVar2 = FUN_00494b90((int)param_1,*(int *)(param_3 + 0x18) + 0xc);
  if (puVar2 == (undefined4 *)0x0) {
    return 7;
  }
  *puVar2 = puVar2 + 3;
  memcpy(puVar2 + 3,*(void **)(param_3 + 4),*(size_t *)(param_3 + 0x18));
  puVar2[1] = *(undefined4 *)(param_3 + 0x18);
  puVar2[2] = *(undefined4 *)(iVar1 + 0x30);
  *(undefined4 **)(iVar1 + 0x30) = puVar2;
  if ((0 < *(int *)(iVar1 + 0x20)) &&
     ((*(int *)(iVar1 + 0x20) < *(int *)(iVar1 + 0x10) ||
      ((*(int *)(iVar1 + 0x1c) < *(int *)(iVar1 + 0x10) && (DAT_00583f64 != 0)))))) {
    uVar3 = FUN_004bf870(param_1,param_2);
    *(undefined4 *)(iVar1 + 0x10) = 0;
    return uVar3;
  }
  return 0;
}


/* FUN_004b9420 @ 004b9420  kind=lib  attributed-by=lib-island  size=277 */

int __cdecl FUN_004b9420(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  void *_Src;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = *param_1;
  iVar3 = param_1[0x16];
  if (param_1[0xd] == 0) {
    FUN_004961f0(iVar2,iVar3,(byte *)0x0);
    return iVar3;
  }
  uVar1 = *(undefined1 *)(iVar2 + 0x38);
  if (DAT_00583e74 != (code *)0x0) {
    (*DAT_00583e74)();
  }
  piVar4 = *(int **)(iVar2 + 0xd4);
  _Src = (void *)param_1[0xd];
  if (piVar4 != (int *)0x0) {
    if (_Src == (void *)0x0) {
      if ((*(byte *)(piVar4 + 7) & 0x40) != 0) {
        piVar5 = (int *)piVar4[4];
        piVar5[1] = *(int *)(*piVar5 + 0xa4);
        *(int **)(*piVar5 + 0xa4) = piVar5;
      }
      if ((*(byte *)(piVar4 + 7) & 0x20) != 0) {
        FUN_004a6e20((undefined4 *)piVar4[4]);
      }
      *(ushort *)(piVar4 + 7) = *(ushort *)(piVar4 + 7) & 0xbe01 | 1;
      *(undefined1 *)((int)piVar4 + 0x1e) = 5;
    }
    else {
      if (*piVar4 == 0) {
        iVar6 = 1000000000;
      }
      else {
        iVar6 = *(int *)(*piVar4 + 0x50);
      }
      iVar7 = 0;
      if (-1 < iVar6) {
        do {
          if (*(char *)(iVar7 + (int)_Src) == '\0') break;
          iVar7 = iVar7 + 1;
        } while (iVar7 <= iVar6);
      }
      if (iVar7 <= iVar6) {
        iVar6 = FUN_004b7260(piVar4,iVar7 + 1,0);
        if (iVar6 == 0) {
          memcpy((void *)piVar4[1],_Src,iVar7 + 1);
          piVar4[6] = iVar7;
          piVar4[7] = 0x1030202;
        }
      }
    }
  }
  if (DAT_00583e78 != (code *)0x0) {
    (*DAT_00583e78)();
  }
  *(undefined1 *)(iVar2 + 0x38) = uVar1;
  *(int *)(iVar2 + 0x2c) = iVar3;
  return iVar3;
}


/* FUN_004b9540 @ 004b9540  kind=lib  attributed-by=lib-island  size=48 */

void __cdecl FUN_004b9540(int *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 1 << ((byte)param_2 & 0x1f);
  param_1[0x1a] = param_1[0x1a] | uVar1;
  if ((param_2 != 1) &&
     (*(char *)(*(int *)(*(int *)(*param_1 + 0x10) + 4 + param_2 * 0x10) + 9) != '\0')) {
    param_1[0x1b] = param_1[0x1b] | uVar1;
  }
  return;
}


/* FUN_004b9570 @ 004b9570  kind=lib  attributed-by=lib-island  size=320 */

undefined4 __cdecl FUN_004b9570(int *param_1,int param_2)

{
  ushort *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *extraout_EDX;
  
  iVar3 = *param_1;
  iVar5 = FUN_004b9870(param_1,param_2);
  if (iVar5 == 0) {
    if (((*(byte *)(param_2 + 0x2a) & 0x10) != 0) || (0 < *(short *)(param_2 + 0x26))) {
      return 0;
    }
    if (-1 < *(short *)(param_2 + 0x26)) {
      piVar6 = FUN_004a9680(iVar3,*(undefined4 **)(param_2 + 0xc),0);
      if (piVar6 == (int *)0x0) {
        return 1;
      }
      uVar2 = *(undefined1 *)(iVar3 + 0xea);
      iVar5 = param_1[0x12];
      FUN_004a9c50((int)param_1,(short *)piVar6[10]);
      *(undefined2 *)(param_2 + 0x26) = 0xffff;
      uVar4 = *(undefined4 *)(iVar3 + 0x10c);
      *(undefined1 *)(iVar3 + 0xea) = 0;
      *(undefined4 *)(iVar3 + 0x10c) = 0;
      puVar7 = FUN_004a6bb0(extraout_EDX,piVar6);
      *(undefined4 *)(iVar3 + 0x10c) = uVar4;
      *(undefined1 *)(iVar3 + 0xea) = uVar2;
      param_1[0x12] = iVar5;
      if (puVar7 != (undefined4 *)0x0) {
        *(undefined2 *)(param_2 + 0x26) = *(undefined2 *)((int)puVar7 + 0x26);
        *(undefined4 *)(param_2 + 4) = puVar7[1];
        *(undefined2 *)((int)puVar7 + 0x26) = 0;
        puVar7[1] = 0;
        FUN_00495300(iVar3,puVar7);
        puVar1 = (ushort *)(*(int *)(param_2 + 0x40) + 0x4e);
        *puVar1 = *puVar1 | 2;
        FUN_004a9650(iVar3,piVar6);
        return 0;
      }
      *(undefined2 *)(param_2 + 0x26) = 0;
      FUN_004a9650(iVar3,piVar6);
      return 1;
    }
    FUN_004962b0(param_1,(byte *)"view %s is circularly defined");
  }
  return 1;
}


/* FUN_004b96b0 @ 004b96b0  kind=lib  attributed-by=lib-island  size=59 */

void __cdecl FUN_004b96b0(int param_1,int *param_2)

{
  if (*(int *)(param_1 + 0x218) == 0) {
    *(int *)(param_1 + 0x218) = *param_2;
    *(int *)(param_1 + 0x21c) = param_2[1];
    return;
  }
  *(int *)(param_1 + 0x21c) = (param_2[1] - *(int *)(param_1 + 0x218)) + *param_2;
  return;
}


/* FUN_004b96f0 @ 004b96f0  kind=lib  attributed-by=lib-island  size=153 */

int __cdecl FUN_004b96f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = *(int *)(param_1 + 0x120);
  if ((0 < iVar1) && (*(int *)(param_1 + 0x138) == 0)) {
    return 6;
  }
  if (param_2 == 0) {
    return 0;
  }
  iVar2 = **(int **)(param_2 + 8);
  if (*(int *)(iVar2 + 0x38) != 0) {
    iVar4 = 0;
    if (0 < iVar1) {
      piVar3 = *(int **)(param_1 + 0x138);
      do {
        if (*piVar3 == param_2) {
          return 0;
        }
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar4 < iVar1);
    }
    iVar4 = FUN_0047de90(param_1);
    if ((iVar4 == 0) &&
       (iVar4 = (**(code **)(iVar2 + 0x38))(*(undefined4 *)(param_2 + 8)), iVar4 == 0)) {
      *(int *)(*(int *)(param_1 + 0x138) + *(int *)(param_1 + 0x120) * 4) = param_2;
      *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + 1;
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
    }
  }
  return iVar4;
}


/* FUN_004b9790 @ 004b9790  kind=lib  attributed-by=lib-island  size=218 */

void __cdecl FUN_004b9790(int *param_1,int *param_2,int param_3,int *param_4,int param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  
  FUN_004aa1c0(param_1,param_2,param_3,0,0,1,param_5);
  puVar1 = (undefined4 *)param_1[0x7f];
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = *param_1;
    iVar6 = -1000000;
    if (puVar1[0x10] != 0) {
      iVar6 = 0;
      if (0 < *(int *)(iVar2 + 0x14)) {
        piVar3 = (int *)(*(int *)(iVar2 + 0x10) + 0xc);
        do {
          if (*piVar3 == puVar1[0x10]) break;
          iVar6 = iVar6 + 1;
          piVar3 = piVar3 + 4;
        } while (iVar6 < *(int *)(iVar2 + 0x14));
      }
    }
    *(byte *)((int)puVar1 + 0x2a) = *(byte *)((int)puVar1 + 0x2a) | 0x10;
    puVar1[0xc] = 0;
    pcVar4 = FUN_004a0d40(iVar2,param_4);
    FUN_0046b6f0(iVar2,(int)puVar1,(undefined4 *)pcVar4);
    FUN_0046b6f0(iVar2,(int)puVar1,(undefined4 *)0x0);
    puVar5 = FUN_00494db0(iVar2,(char *)*puVar1);
    FUN_0046b6f0(iVar2,(int)puVar1,puVar5);
    param_1[0x83] = (param_4[1] - *param_2) + *param_4;
    if ((undefined4 *)puVar1[0xd] != (undefined4 *)0x0) {
      FUN_0048d4b0(param_1,0x1d,*puVar1,*(undefined4 *)puVar1[0xd],
                   *(undefined4 *)(*(int *)(*param_1 + 0x10) + iVar6 * 0x10));
    }
  }
  return;
}


/* FUN_004b9870 @ 004b9870  kind=lib  attributed-by=lib-island  size=257 */

int __cdecl FUN_004b9870(int *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  undefined4 *local_8;
  
  iVar2 = *param_1;
  if ((*(byte *)(param_2 + 0x2a) & 0x10) != 0) {
    piVar3 = *(int **)(param_2 + 0x38);
    while( true ) {
      if (piVar3 == (int *)0x0) {
        pbVar4 = (byte *)**(undefined4 **)(param_2 + 0x34);
        uVar9 = 0;
        if (pbVar4 != (byte *)0x0) {
          bVar1 = *pbVar4;
          pbVar8 = pbVar4;
          while (bVar1 != 0) {
            pbVar8 = pbVar8 + 1;
            bVar1 = *pbVar8;
          }
          uVar9 = (int)pbVar8 - (int)pbVar4 & 0x3fffffff;
        }
        if (*(int *)(iVar2 + 0x130) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_004bd210(pbVar4,uVar9);
          uVar5 = uVar5 % *(uint *)(iVar2 + 0x124);
        }
        puVar6 = FUN_00479af0(iVar2 + 0x124,pbVar4,uVar9,uVar5);
        if ((puVar6 != (undefined4 *)0x0) && (piVar3 = (int *)puVar6[2], piVar3 != (int *)0x0)) {
          local_8 = (undefined4 *)0x0;
          iVar7 = FUN_004bfed0(iVar2,param_2,piVar3,*(undefined **)(*piVar3 + 8),&local_8);
          puVar6 = local_8;
          if (iVar7 != 0) {
            FUN_004962b0(param_1,&DAT_0056de50);
          }
          FUN_00494b00(iVar2,puVar6);
          return iVar7;
        }
        FUN_004962b0(param_1,(byte *)"no such module: %s");
        return 1;
      }
      if (*piVar3 == iVar2) break;
      piVar3 = (int *)piVar3[6];
    }
  }
  return 0;
}


/* FUN_004b9980 @ 004b9980  kind=lib  attributed-by=lib-island  size=280 */

int __cdecl FUN_004b9980(int param_1,int param_2,byte *param_3,undefined4 *param_4)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  byte *pbVar9;
  uint uVar10;
  
  iVar3 = FUN_00499c30(param_1,param_3,*(byte **)(*(int *)(param_1 + 0x10) + param_2 * 0x10));
  pbVar2 = (byte *)**(undefined4 **)(iVar3 + 0x34);
  uVar10 = 0;
  if (pbVar2 != (byte *)0x0) {
    bVar1 = *pbVar2;
    pbVar9 = pbVar2;
    while (bVar1 != 0) {
      pbVar9 = pbVar9 + 1;
      bVar1 = *pbVar9;
    }
    uVar10 = (int)pbVar9 - (int)pbVar2 & 0x3fffffff;
  }
  if (*(int *)(param_1 + 0x130) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_004bd210(pbVar2,uVar10);
    uVar4 = uVar4 % *(uint *)(param_1 + 0x124);
  }
  puVar5 = FUN_00479af0(param_1 + 0x124,pbVar2,uVar10,uVar4);
  if ((puVar5 == (undefined4 *)0x0) || (piVar8 = (int *)puVar5[2], piVar8 == (int *)0x0)) {
    uVar7 = FUN_004a02d0(param_1,(byte *)"no such module: %s");
    *param_4 = uVar7;
    iVar6 = 1;
  }
  else {
    iVar6 = FUN_004bfed0(param_1,iVar3,piVar8,*(undefined **)(*piVar8 + 4),param_4);
    if ((iVar6 == 0) && (piVar8 = *(int **)(iVar3 + 0x38), piVar8 != (int *)0x0)) {
      do {
        if (*piVar8 == param_1) {
          iVar6 = FUN_0047de90(param_1);
          if (iVar6 == 0) {
            for (piVar8 = *(int **)(iVar3 + 0x38); (piVar8 != (int *)0x0 && (*piVar8 != param_1));
                piVar8 = (int *)piVar8[6]) {
            }
            *(int **)(*(int *)(param_1 + 0x138) + *(int *)(param_1 + 0x120) * 4) = piVar8;
            *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + 1;
            piVar8[3] = piVar8[3] + 1;
          }
          return iVar6;
        }
        piVar8 = (int *)piVar8[6];
      } while (piVar8 != (int *)0x0);
      return 0;
    }
  }
  return iVar6;
}


/* FUN_004b9aa0 @ 004b9aa0  kind=lib  attributed-by=lib-island  size=129 */

int __cdecl FUN_004b9aa0(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar2 = FUN_00499c30(param_1,param_3,*(byte **)(*(int *)(param_1 + 0x10) + param_2 * 0x10));
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x38) != 0)) {
    piVar3 = FUN_004c01d0(param_1,iVar2);
    iVar4 = (**(code **)(*(int *)piVar3[1] + 0x14))(piVar3[2]);
    if (iVar4 == 0) {
      piVar3[2] = 0;
      *(undefined4 *)(iVar2 + 0x38) = 0;
      piVar1 = piVar3 + 3;
      *piVar1 = *piVar1 + -1;
      iVar2 = *piVar3;
      if (*piVar1 == 0) {
        piVar1 = (int *)piVar3[2];
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x10))(piVar1);
        }
        FUN_00494b00(iVar2,piVar3);
      }
    }
    return iVar4;
  }
  return 0;
}


/* FUN_004b9b30 @ 004b9b30  kind=lib  attributed-by=lib-island  size=92 */

void __cdecl FUN_004b9b30(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 0x1f0) == 0)) {
    FUN_004c01d0(0,param_2);
  }
  if (*(int *)(param_2 + 0x34) != 0) {
    iVar1 = 0;
    if (0 < *(int *)(param_2 + 0x30)) {
      do {
        if (iVar1 != 1) {
          FUN_00494b00(param_1,*(undefined4 **)(*(int *)(param_2 + 0x34) + iVar1 * 4));
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_2 + 0x30));
    }
    FUN_00494b00(param_1,*(undefined4 **)(param_2 + 0x34));
  }
  return;
}


/* FUN_004b9b90 @ 004b9b90  kind=lib  attributed-by=lib-string  size=396 */

void __cdecl FUN_004b9b90(int *param_1,int *param_2)

{
  char cVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  byte *pbVar12;
  
  puVar3 = (undefined4 *)param_1[0x7f];
  iVar4 = *param_1;
  if (puVar3 != (undefined4 *)0x0) {
    FUN_0046b680(param_1);
    param_1[0x86] = 0;
    if (0 < (int)puVar3[0xc]) {
      if (*(char *)(iVar4 + 0x81) == '\0') {
        if (param_2 != (int *)0x0) {
          param_1[0x83] = (param_2[1] - param_1[0x82]) + *param_2;
        }
        puVar6 = (undefined4 *)FUN_004a02d0(iVar4,(byte *)"CREATE VIRTUAL TABLE %T");
        iVar7 = FUN_004a7ba0(iVar4,puVar3[0x10]);
        FUN_004a0da0(param_1,(byte *)
                             "UPDATE %Q.%s SET type=\'table\', name=%Q, tbl_name=%Q, rootpage=0, sql=%Q WHERE rowid=#%d"
                    );
        FUN_00494b00(iVar4,puVar6);
        piVar8 = FUN_0049d4d0(param_1);
        FUN_00492110(param_1,iVar7);
        FUN_004ae830(piVar8,0x81,0,0);
        piVar9 = (int *)FUN_004a02d0(iVar4,(byte *)"name=\'%q\' AND type=\'table\'");
        FUN_004aeac0(piVar8,iVar7,piVar9);
        piVar9 = (int *)*puVar3;
        uVar11 = 0;
        if (piVar9 != (int *)0x0) {
          cVar1 = (char)*piVar9;
          piVar10 = piVar9;
          while (cVar1 != '\0') {
            piVar10 = (int *)((int)piVar10 + 1);
            cVar1 = *(char *)piVar10;
          }
          uVar11 = (int)piVar10 - (int)piVar9 & 0x3fffffff;
        }
        FUN_004ae8f0(piVar8,0x85,iVar7,0,0,piVar9,uVar11 + 1);
        return;
      }
      pbVar5 = (byte *)*puVar3;
      uVar11 = 0;
      if (pbVar5 != (byte *)0x0) {
        bVar2 = *pbVar5;
        pbVar12 = pbVar5;
        while (bVar2 != 0) {
          pbVar12 = pbVar12 + 1;
          bVar2 = *pbVar12;
        }
        uVar11 = (int)pbVar12 - (int)pbVar5 & 0x3fffffff;
      }
      uVar11 = FUN_0049d6f0((uint *)(puVar3[0x10] + 8),pbVar5,uVar11,(uint)puVar3);
      if (uVar11 != 0) {
        *(undefined1 *)(iVar4 + 0x38) = 1;
        return;
      }
      param_1[0x7f] = 0;
    }
  }
  return;
}


/* FUN_004b9d20 @ 004b9d20  kind=lib  attributed-by=lib-island  size=131 */

void __cdecl FUN_004b9d20(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((int *)param_1[0x6c] != (int *)0x0) {
    param_1 = (int *)param_1[0x6c];
  }
  iVar4 = 0;
  iVar3 = param_1[0x76];
  if (0 < iVar3) {
    piVar1 = (int *)param_1[0x88];
    do {
      if (param_2 == *piVar1) {
        return;
      }
      iVar4 = iVar4 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar4 < iVar3);
  }
  iVar4 = param_1[0x88];
  iVar2 = FUN_004bc920();
  if ((iVar2 == 0) && (iVar3 = FUN_004a6140(iVar4,iVar3 * 4 + 4), iVar3 != 0)) {
    param_1[0x88] = iVar3;
    *(int *)(iVar3 + param_1[0x76] * 4) = param_2;
    param_1[0x76] = param_1[0x76] + 1;
    return;
  }
  *(undefined1 *)(*param_1 + 0x38) = 1;
  return;
}


/* FUN_004b9db0 @ 004b9db0  kind=lib  attributed-by=lib-island  size=320 */

undefined8 * __cdecl FUN_004b9db0(int param_1,undefined8 *param_2,undefined4 param_3,char *param_4)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  void *_Src;
  undefined8 uVar8;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  local_c = 0;
  if ((((param_4 != (char *)0x0) && (*param_4 == -0x68)) &&
      (iVar5 = *(int *)(param_4 + 0x28), iVar5 != 0)) && ((*(byte *)(iVar5 + 0x2a) & 0x10) != 0)) {
    uVar8 = FUN_0049d250(param_1,iVar5);
    piVar2 = *(int **)((int)uVar8 + 8);
    iVar5 = *piVar2;
    if (*(int *)(iVar5 + 0x48) == 0) {
      return param_2;
    }
    pbVar4 = (byte *)FUN_00494db0((int)((ulonglong)uVar8 >> 0x20),*(char **)(param_2 + 3));
    if (pbVar4 != (byte *)0x0) {
      bVar1 = *pbVar4;
      pbVar3 = pbVar4;
      while (bVar1 != 0) {
        *pbVar3 = (&DAT_00569620)[*pbVar3];
        bVar1 = pbVar3[1];
        pbVar3 = pbVar3 + 1;
      }
      iVar5 = (**(code **)(iVar5 + 0x48))(piVar2,param_3,pbVar4,&local_8,&local_c);
      FUN_00494b00(param_1,(undefined4 *)pbVar4);
      if (iVar5 != 0) {
        uVar6 = FUN_004aa9b0(*(char **)(param_2 + 3));
        puVar7 = (undefined8 *)FUN_00494c20(param_1,uVar6 + 0x25);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = *param_2;
          puVar7[1] = param_2[1];
          puVar7[2] = param_2[2];
          puVar7[3] = param_2[3];
          *(undefined4 *)(puVar7 + 4) = *(undefined4 *)(param_2 + 4);
          *(void **)(puVar7 + 3) = (void *)((int)puVar7 + 0x24);
          uVar6 = FUN_004aa9b0(*(char **)(param_2 + 3));
          memcpy((void *)((int)puVar7 + 0x24),_Src,uVar6 + 1);
          *(undefined4 *)((int)puVar7 + 0xc) = local_8;
          *(byte *)((int)puVar7 + 3) = *(byte *)((int)puVar7 + 3) | 4;
          *(undefined4 *)((int)puVar7 + 4) = local_c;
          return puVar7;
        }
      }
    }
    return param_2;
  }
  return param_2;
}


/* FUN_004b9ef0 @ 004b9ef0  kind=lib  attributed-by=lib-island  size=128 */

int __cdecl FUN_004b9ef0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  if (*(int *)(param_1 + 0x138) == 0) {
    return 0;
  }
  iVar5 = 0;
  do {
    if (*(int *)(param_1 + 0x120) <= iVar5) {
      return iVar4;
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x138) + iVar5 * 4);
    piVar2 = (int *)**(int **)(iVar1 + 4);
    if ((*(int *)(iVar1 + 8) != 0) && (1 < *piVar2)) {
      if (param_2 == 0) {
        pcVar3 = (code *)piVar2[0x14];
        *(int *)(iVar1 + 0x14) = param_3 + 1;
      }
      else if (param_2 == 2) {
        pcVar3 = (code *)piVar2[0x16];
      }
      else {
        pcVar3 = (code *)piVar2[0x15];
      }
      if ((pcVar3 != (code *)0x0) && (param_3 < *(int *)(iVar1 + 0x14))) {
        iVar4 = (*pcVar3)(*(undefined4 *)(iVar1 + 8),param_3);
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar4 == 0);
  return iVar4;
}


/* FUN_004b9f70 @ 004b9f70  kind=lib  attributed-by=lib-island  size=204 */

int __cdecl FUN_004b9f70(int param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *_Src;
  char *pcVar4;
  size_t _Size;
  int iVar5;
  undefined4 *_Dst;
  int local_8;
  
  iVar5 = 0;
  iVar2 = *(int *)(param_1 + 0x138);
  *(undefined4 *)(param_1 + 0x138) = 0;
  local_8 = 0;
  do {
    if (*(int *)(param_1 + 0x120) <= local_8) break;
    piVar3 = *(int **)(*(int *)(iVar2 + local_8 * 4) + 8);
    if ((piVar3 != (int *)0x0) && (*(code **)(*piVar3 + 0x3c) != (code *)0x0)) {
      iVar5 = (**(code **)(*piVar3 + 0x3c))(piVar3);
      FUN_00494b00(param_1,(undefined4 *)*param_2);
      _Src = (char *)piVar3[2];
      if (_Src == (char *)0x0) {
        _Dst = (undefined4 *)0x0;
      }
      else {
        cVar1 = *_Src;
        pcVar4 = _Src;
        while (cVar1 != '\0') {
          pcVar4 = pcVar4 + 1;
          cVar1 = *pcVar4;
        }
        _Size = ((int)pcVar4 - (int)_Src & 0x3fffffffU) + 1;
        _Dst = FUN_00494b90(param_1,_Size);
        if (_Dst != (undefined4 *)0x0) {
          memcpy(_Dst,_Src,_Size);
        }
      }
      *param_2 = _Dst;
      FUN_00466dd0(piVar3[2]);
    }
    local_8 = local_8 + 1;
  } while (iVar5 == 0);
  *(int *)(param_1 + 0x138) = iVar2;
  return iVar5;
}


/* FUN_004ba040 @ 004ba040  kind=lib  attributed-by=lib-island  size=47 */

void __cdecl FUN_004ba040(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = param_1 + 3;
  *piVar2 = *piVar2 + -1;
  iVar1 = *param_1;
  if (*piVar2 == 0) {
    piVar2 = (int *)param_1[2];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x10))(piVar2);
    }
    FUN_00494b00(iVar1,param_1);
  }
  return;
}


/* FUN_004ba070 @ 004ba070  kind=lib  attributed-by=lib-island  size=97 */

void __cdecl FUN_004ba070(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x13c);
  *(undefined4 *)(param_1 + 0x13c) = 0;
  if (piVar4 != (int *)0x0) {
    for (iVar1 = *(int *)(param_1 + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x3c)) {
      *(uint *)(iVar1 + 0x60) = *(uint *)(iVar1 + 0x60) | 0x20;
    }
    do {
      piVar3 = piVar4 + 3;
      *piVar3 = *piVar3 + -1;
      piVar2 = (int *)piVar4[6];
      iVar1 = *piVar4;
      if (*piVar3 == 0) {
        piVar3 = (int *)piVar4[2];
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 0x10))(piVar3);
        }
        FUN_00494b00(iVar1,piVar4);
      }
      piVar4 = piVar2;
    } while (piVar2 != (int *)0x0);
  }
  return;
}


/* FUN_004ba0e0 @ 004ba0e0  kind=lib  attributed-by=lib-island  size=786 */

int __cdecl FUN_004ba0e0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint *puVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  uint local_14;
  int local_8;
  
  iVar5 = 0;
  iVar8 = -0x85e;
LAB_004ba0f3:
  do {
    iVar5 = iVar5 + 1;
    iVar8 = iVar8 + 0xee;
    if (5 < iVar5) {
      if (0x549a < iVar8) {
        return 0xf;
      }
      iVar2 = 1;
      if (9 < iVar5) {
        iVar2 = iVar8;
      }
      (**(code **)(*param_1 + 0x3c))(*param_1,iVar2);
    }
    iVar2 = FUN_004c0c00((int)param_1,param_2);
    if (iVar2 == 5) {
      if (*(int *)param_1[8] == 0) {
        iVar2 = -1;
      }
      else {
        if (*(char *)((int)param_1 + 0x2b) == '\0') {
          iVar2 = (**(code **)(*(int *)param_1[1] + 0x38))((int *)param_1[1],2,1,6);
          if (iVar2 != 0) {
            if (iVar2 != 5) goto LAB_004ba19c;
            iVar2 = 0x105;
            goto LAB_004ba353;
          }
          if (*(char *)((int)param_1 + 0x2b) == '\0') {
            (**(code **)(*(int *)param_1[1] + 0x38))((int *)param_1[1],2,1,5);
          }
        }
        iVar2 = -1;
      }
    }
    else {
LAB_004ba19c:
      if (iVar2 == 0) {
        iVar1 = *(int *)param_1[8];
        iVar3 = 0;
        if (*(int *)(iVar1 + 0x60) == param_1[0x11]) {
          if (*(char *)((int)param_1 + 0x2b) == '\0') {
            iVar2 = (**(code **)(*(int *)param_1[1] + 0x38))((int *)param_1[1],3,1,6);
          }
          if (*(char *)((int)param_1 + 0x2b) != '\x02') {
            (**(code **)(*(int *)param_1[1] + 0x3c))((int *)param_1[1]);
          }
          if (iVar2 == 0) {
            piVar7 = param_1 + 0xd;
            piVar4 = *(int **)param_1[8];
            uVar9 = 0x2c;
            while (*piVar4 == *piVar7) {
              piVar4 = piVar4 + 1;
              piVar7 = piVar7 + 1;
              bVar10 = uVar9 < 4;
              uVar9 = uVar9 - 4;
              if (bVar10) {
                *(undefined2 *)(param_1 + 10) = 0;
                return 0;
              }
            }
            if (*(char *)((int)param_1 + 0x2b) == '\0') {
              (**(code **)(*(int *)param_1[1] + 0x38))((int *)param_1[1],3,1,5);
            }
            goto LAB_004ba0f3;
          }
          iVar3 = iVar2;
          if (iVar2 != 5) goto LAB_004ba353;
        }
        iVar2 = iVar3;
        local_14 = 0;
        local_8 = 0;
        iVar3 = 1;
        puVar6 = (uint *)(iVar1 + 0x68);
        do {
          uVar9 = *puVar6;
          if ((local_14 <= uVar9) && (uVar9 <= (uint)param_1[0x11])) {
            local_14 = uVar9;
            local_8 = iVar3;
          }
          iVar3 = iVar3 + 1;
          puVar6 = puVar6 + 1;
        } while (iVar3 < 5);
        if ((*(byte *)((int)param_1 + 0x2e) & 2) == 0) {
          if ((local_14 < (uint)param_1[0x11]) || (local_8 == 0)) {
            iVar3 = 1;
            do {
              if (*(char *)((int)param_1 + 0x2b) != '\0') {
                iVar2 = 0;
LAB_004ba2d4:
                local_14 = param_1[0x11];
                *(uint *)(iVar1 + 100 + iVar3 * 4) = local_14;
                local_8 = iVar3;
                if (*(char *)((int)param_1 + 0x2b) == '\0') {
                  (**(code **)(*(int *)param_1[1] + 0x38))((int *)param_1[1],iVar3 + 3,1,9);
                }
                break;
              }
              iVar2 = (**(code **)(*(int *)param_1[1] + 0x38))((int *)param_1[1],iVar3 + 3,1,10);
              if (iVar2 == 0) goto LAB_004ba2d4;
              if (iVar2 != 5) goto LAB_004ba353;
              iVar3 = iVar3 + 1;
            } while (iVar3 < 5);
            goto LAB_004ba305;
          }
        }
        else {
LAB_004ba305:
          if (local_8 == 0) {
            bVar10 = iVar2 == 5;
            iVar2 = 0x208;
            if (bVar10) {
              iVar2 = -1;
            }
            goto LAB_004ba353;
          }
        }
        if ((*(char *)((int)param_1 + 0x2b) != '\0') ||
           (iVar2 = (**(code **)(*(int *)param_1[1] + 0x38))((int *)param_1[1],local_8 + 3,1,6),
           iVar2 == 0)) {
          if (*(char *)((int)param_1 + 0x2b) != '\x02') {
            (**(code **)(*(int *)param_1[1] + 0x3c))((int *)param_1[1]);
          }
          if (*(uint *)(iVar1 + 100 + local_8 * 4) == local_14) {
            piVar7 = param_1 + 0xd;
            piVar4 = *(int **)param_1[8];
            uVar9 = 0x2c;
            while (*piVar4 == *piVar7) {
              piVar4 = piVar4 + 1;
              piVar7 = piVar7 + 1;
              bVar10 = uVar9 < 4;
              uVar9 = uVar9 - 4;
              if (bVar10) {
                *(short *)(param_1 + 10) = (short)local_8;
                return 0;
              }
            }
          }
          if (*(char *)((int)param_1 + 0x2b) == '\0') {
            (**(code **)(*(int *)param_1[1] + 0x38))((int *)param_1[1],local_8 + 3,1,5);
          }
          goto LAB_004ba0f3;
        }
        if (iVar2 == 5) {
          iVar2 = -1;
        }
      }
    }
LAB_004ba353:
    if (iVar2 != -1) {
      return iVar2;
    }
  } while( true );
}


/* FUN_004ba400 @ 004ba400  kind=lib  attributed-by=lib-island  size=146 */

int __cdecl FUN_004ba400(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  bool bVar5;
  
  if (*(char *)(param_1 + 0x2e) != '\0') {
    return 8;
  }
  if ((*(char *)(param_1 + 0x2b) != '\0') ||
     (iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),0,1,10),
     iVar1 == 0)) {
    *(undefined1 *)(param_1 + 0x2c) = 1;
    piVar3 = (int *)**(undefined4 **)(param_1 + 0x20);
    piVar2 = (int *)(param_1 + 0x34);
    uVar4 = 0x2c;
    while (*piVar2 == *piVar3) {
      piVar2 = piVar2 + 1;
      piVar3 = piVar3 + 1;
      bVar5 = uVar4 < 4;
      uVar4 = uVar4 - 4;
      if (bVar5) {
        return 0;
      }
    }
    if (*(char *)(param_1 + 0x2b) == '\0') {
      (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),0,1,9);
    }
    *(undefined1 *)(param_1 + 0x2c) = 0;
    iVar1 = 5;
  }
  return iVar1;
}


/* FUN_004ba4a0 @ 004ba4a0  kind=lib  attributed-by=lib-island  size=372 */

int __cdecl
FUN_004ba4a0(int param_1,int param_2,undefined *param_3,undefined4 param_4,int param_5,int param_6,
            undefined4 param_7,undefined4 *param_8,undefined4 *param_9)

{
  int iVar1;
  int iVar2;
  int local_8;
  
  iVar1 = param_2;
  local_8 = 0;
  if (*(char *)(param_1 + 0x2e) != '\0') {
    return 8;
  }
  if ((*(char *)(param_1 + 0x2b) == '\0') &&
     (iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),1,1,10),
     iVar2 != 0)) {
    return iVar2;
  }
  *(undefined1 *)(param_1 + 0x2d) = 1;
  if (param_2 != 0) {
    iVar2 = FUN_004c0220(param_1,param_3,param_4,0,1);
    if (iVar2 == 0) {
      *(undefined1 *)(param_1 + 0x2c) = 1;
    }
    else {
      if (iVar2 != 5) goto LAB_004ba5b7;
      param_2 = 0;
    }
  }
  iVar2 = FUN_004c0c00(param_1,&local_8);
  if (iVar2 == 0) {
    if ((*(int *)(param_1 + 0x44) == 0) ||
       ((*(ushort *)(param_1 + 0x42) & 1) * 0x10000 + (*(ushort *)(param_1 + 0x42) & 0xfe00) ==
        param_6)) {
      iVar2 = FUN_004c0270(param_1,param_2,param_3,param_4,param_5,param_7);
    }
    else {
      iVar2 = FUN_00493af0();
    }
    if ((iVar2 == 0) || (iVar2 == 5)) {
      if (param_8 != (undefined4 *)0x0) {
        *param_8 = *(undefined4 *)(param_1 + 0x44);
      }
      if (param_9 != (undefined4 *)0x0) {
        *param_9 = *(undefined4 *)(**(int **)(param_1 + 0x20) + 0x60);
      }
    }
  }
  if (local_8 != 0) {
    memset((void *)(param_1 + 0x34),0,0x30);
  }
LAB_004ba5b7:
  if (*(char *)(param_1 + 0x2c) != '\0') {
    if (*(char *)(param_1 + 0x2b) == '\0') {
      (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),0,1,9);
    }
    *(undefined1 *)(param_1 + 0x2c) = 0;
    *(undefined1 *)(param_1 + 0x2f) = 0;
  }
  if (*(char *)(param_1 + 0x2b) == '\0') {
    (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),1,1,9);
  }
  *(undefined1 *)(param_1 + 0x2d) = 0;
  if ((iVar2 == 0) && (iVar1 != param_2)) {
    iVar2 = 5;
  }
  return iVar2;
}


/* FUN_004ba620 @ 004ba620  kind=lib  attributed-by=lib-island  size=262 */

int __cdecl FUN_004ba620(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  int local_8;
  
  piVar3 = param_1;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  bVar2 = false;
  local_8 = (**(code **)(*(int *)param_1[1] + 0x1c))((int *)param_1[1],4);
  if (local_8 == 0) {
    if (*(char *)((int)piVar3 + 0x2b) == '\0') {
      *(undefined1 *)((int)piVar3 + 0x2b) = 1;
    }
    local_8 = FUN_004ba4a0((int)piVar3,0,(undefined *)0x0,0,param_2,param_3,param_4,
                           (undefined4 *)0x0,(undefined4 *)0x0);
    if (local_8 == 0) {
      param_1 = (int *)0xffffffff;
      (**(code **)(*(int *)piVar3[1] + 0x28))((int *)piVar3[1],10,&param_1);
      if (param_1 == (int *)0x1) {
        if (-1 < piVar3[5]) {
          FUN_004c15c0((int)piVar3,0,0);
        }
      }
      else {
        bVar2 = true;
      }
    }
  }
  FUN_004c0a00((int)piVar3);
  piVar1 = (int *)piVar3[2];
  if (*piVar1 != 0) {
    (**(code **)(*piVar1 + 4))(piVar1);
    *piVar1 = 0;
  }
  if (bVar2) {
    if (DAT_00583e74 != (code *)0x0) {
      (*DAT_00583e74)();
    }
    (**(code **)(*piVar3 + 0x1c))(*piVar3,piVar3[0x19],0);
    if (DAT_00583e78 != (code *)0x0) {
      (*DAT_00583e78)();
    }
  }
  FUN_00466dd0(piVar3[8]);
  FUN_00466dd0((int)piVar3);
  return local_8;
}


/* FUN_004ba770 @ 004ba770  kind=lib  attributed-by=lib-island  size=95 */

void __cdecl FUN_004ba770(int param_1)

{
  if (*(char *)(param_1 + 0x2c) != '\0') {
    if (*(char *)(param_1 + 0x2b) == '\0') {
      (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),0,1,9);
    }
    *(undefined1 *)(param_1 + 0x2c) = 0;
    *(undefined1 *)(param_1 + 0x2f) = 0;
  }
  if (-1 < *(short *)(param_1 + 0x28)) {
    if (*(char *)(param_1 + 0x2b) == '\0') {
      (**(code **)(**(int **)(param_1 + 4) + 0x38))
                (*(int **)(param_1 + 4),*(short *)(param_1 + 0x28) + 3,1,5);
    }
    *(undefined2 *)(param_1 + 0x28) = 0xffff;
  }
  return;
}


/* FUN_004ba7d0 @ 004ba7d0  kind=lib  attributed-by=lib-island  size=1208 */

/* WARNING: Removing unreachable block (ram,0x004babbb) */
/* WARNING: Removing unreachable block (ram,0x004baad0) */

void __cdecl
FUN_004ba7d0(int *param_1,uint param_2,uint *param_3,int param_4,int param_5,uint param_6)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  void *pvVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  int *local_64;
  int *local_60;
  undefined8 local_5c;
  uint local_54;
  uint local_50;
  int *local_4c;
  uint *local_48;
  uint local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  uint *local_34;
  uint *local_30;
  int local_2c;
  int local_28 [2];
  undefined4 local_20;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  int local_18;
  int local_14;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_4c = param_1;
  local_48 = param_3;
  local_34 = (uint *)0x0;
  local_40 = 0;
  iVar3 = FUN_004c1940(param_1);
  lVar10 = CONCAT44(local_2c,local_44);
  if (iVar3 != 0) goto LAB_004bac7b;
  local_3c = param_1[0x11];
  if (local_3c == 0) {
    local_20._0_1_ = (char)(param_2 >> 0x18);
    local_20._1_1_ = (char)(param_2 >> 0x10);
    local_20._2_1_ = (char)(param_2 >> 8);
    local_20._3_1_ = (char)param_2;
    iVar3 = param_1[0x1a];
    local_1c = (char)((uint)iVar3 >> 0x18);
    local_1b = (char)((uint)iVar3 >> 0x10);
    local_28[0] = -0x7df980c9;
    local_28[1] = 0x18e22d00;
    local_1a = (char)((uint)iVar3 >> 8);
    local_19 = (char)iVar3;
    if (iVar3 == 0) {
      FUN_00466fa0(8,(undefined1 *)(param_1 + 0x15));
    }
    local_18 = param_1[0x15];
    iVar3 = 0;
    local_14 = param_1[0x16];
    piVar5 = local_28;
    local_38 = 0;
    do {
      local_38 = local_38 + *piVar5 + iVar3;
      iVar3 = iVar3 + piVar5[1] + local_38;
      piVar5 = piVar5 + 2;
    } while (piVar5 < &local_10);
    local_10 = (undefined1)(local_38 >> 0x18);
    local_f = (undefined1)(local_38 >> 0x10);
    local_e = (undefined1)(local_38 >> 8);
    local_c = (undefined1)((uint)iVar3 >> 0x18);
    local_b = (undefined1)((uint)iVar3 >> 0x10);
    local_a = (undefined1)((uint)iVar3 >> 8);
    param_1[9] = param_2;
    *(undefined1 *)((int)param_1 + 0x41) = 0;
    param_1[0x14] = iVar3;
    param_1[0x13] = local_38;
    local_9 = (undefined1)iVar3;
    local_d = (undefined1)local_38;
    *(undefined1 *)((int)param_1 + 0x2f) = 1;
    iVar3 = (**(code **)(*(int *)param_1[2] + 0xc))((int *)param_1[2],local_28,0x20,0);
    lVar10 = CONCAT44(local_2c,local_44);
    if (iVar3 != 0) goto LAB_004bac7b;
    if ((((char)param_1[0xc] != '\0') && (param_6 != 0)) &&
       (iVar3 = (**(code **)(*(int *)param_1[2] + 0x14))((int *)param_1[2]), iVar3 != 0)) {
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  piVar5 = (int *)param_1[2];
  local_50 = param_2;
  uVar4 = param_2 + 0x18;
  local_64 = param_1;
  local_5c = 0;
  local_54 = param_6;
  local_60 = piVar5;
  local_38 = uVar4;
  lVar10 = __allmul(local_3c,0,uVar4,(int)uVar4 >> 0x1f);
  lVar10 = lVar10 + 0x20;
  puVar2 = local_48;
  while( true ) {
    local_30 = puVar2;
    uVar6 = (uint)lVar10;
    local_2c = (int)((ulonglong)lVar10 >> 0x20);
    local_44 = uVar6;
    if (local_30 == (uint *)0x0) break;
    local_3c = local_3c + 1;
    if ((param_5 == 0) || (iVar3 = param_4, local_30[3] != 0)) {
      iVar3 = 0;
    }
    local_34 = (uint *)local_30[1];
    FUN_004c0850((int)param_1,local_30[5],iVar3,local_34,&local_20);
    iVar3 = FUN_004c1dd0((int)&local_64,(int)&local_20,0x18,uVar6,local_2c);
    lVar10 = CONCAT44(local_2c,local_44);
    if (iVar3 != 0) goto LAB_004bac7b;
    iVar3 = FUN_004c1dd0((int)&local_64,(int)local_34,param_2,uVar6 + 0x18,
                         local_2c + (uint)(0xffffffe7 < uVar6));
    lVar10 = CONCAT44(local_2c,local_44);
    if (iVar3 != 0) goto LAB_004bac7b;
    lVar10 = CONCAT44(local_2c + ((int)local_38 >> 0x1f) + (uint)CARRY4(uVar6,local_38),
                      uVar6 + local_38);
    puVar2 = (uint *)local_30[3];
    local_34 = local_30;
  }
  iVar3 = 0;
  if (param_5 != 0) {
    if ((param_6 & 0x20) == 0) {
LAB_004bab82:
      iVar7 = 0;
    }
    else {
      if (*(char *)((int)param_1 + 0x31) == '\0') {
        iVar3 = (**(code **)(*piVar5 + 0x14))(piVar5);
        lVar10 = CONCAT44(local_2c,local_44);
        goto LAB_004bab82;
      }
      if (*(code **)(*(int *)param_1[2] + 0x2c) == (code *)0x0) {
        local_30 = (uint *)0x1000;
      }
      else {
        local_30 = (uint *)(**(code **)(*(int *)param_1[2] + 0x2c))();
        lVar10 = CONCAT44(local_2c,local_44);
        if ((int)local_30 < 0x20) {
          local_30 = (uint *)0x200;
          lVar10 = CONCAT44(local_2c,local_44);
        }
        else if (0x10000 < (int)local_30) {
          local_30 = (uint *)0x10000;
        }
      }
      local_2c = (int)((ulonglong)lVar10 >> 0x20);
      local_44 = (uint)lVar10;
      uVar6 = (int)local_30 >> 0x1f;
      iVar7 = (int)(lVar10 + (int)local_30);
      uVar11 = __alldiv(iVar7 - 1,
                        (int)((ulonglong)(lVar10 + (int)local_30) >> 0x20) - (uint)(iVar7 == 0),
                        (uint)local_30,uVar6);
      local_5c = __allmul((uint)uVar11,(int)((ulonglong)uVar11 >> 0x20),(uint)local_30,uVar6);
      param_1 = local_4c;
      lVar10 = CONCAT44(local_2c,local_44);
      uVar6 = local_44;
      if (local_5c <= lVar10) goto LAB_004bab82;
      do {
        local_30 = (uint *)local_34[1];
        FUN_004c0850((int)param_1,local_34[5],param_4,local_30,&local_20);
        iVar3 = FUN_004c1dd0((int)&local_64,(int)&local_20,0x18,uVar6,local_2c);
        lVar10 = CONCAT44(local_2c,local_44);
        if (iVar3 != 0) goto LAB_004bac7b;
        iVar3 = FUN_004c1dd0((int)&local_64,(int)local_30,param_2,uVar6 + 0x18,
                             local_2c + (uint)(0xffffffe7 < uVar6));
        lVar10 = CONCAT44(local_2c,local_44);
        if (iVar3 != 0) goto LAB_004bac7b;
        uVar8 = uVar6 + local_38;
        local_2c = local_2c + ((int)local_38 >> 0x1f) + (uint)CARRY4(uVar6,local_38);
        iVar7 = local_40 + 1;
        uVar6 = uVar8;
        local_40 = iVar7;
      } while ((local_2c < local_5c._4_4_) ||
              ((iVar3 = 0, lVar10 = CONCAT44(local_2c,local_44), local_2c <= local_5c._4_4_ &&
               (lVar10 = CONCAT44(local_2c,local_44), uVar8 < (uint)local_5c))));
    }
    local_2c = (int)((ulonglong)lVar10 >> 0x20);
    local_44 = (uint)lVar10;
    if ((*(char *)((int)param_1 + 0x2f) != '\0') && (iVar1 = param_1[4], -1 < param_1[5])) {
      lVar12 = __allmul(local_3c + iVar7,0,uVar4,(int)uVar4 >> 0x1f);
      lVar10 = CONCAT44(param_1[5],iVar1);
      if (CONCAT44(param_1[5],iVar1) < lVar12 + 0x20) {
        lVar10 = lVar12 + 0x20;
      }
      FUN_004c15c0((int)param_1,(uint)lVar10,(int)((ulonglong)lVar10 >> 0x20));
      lVar10 = CONCAT44(local_2c,local_44);
      *(undefined1 *)((int)param_1 + 0x2f) = 0;
    }
  }
  pvVar9 = (void *)param_1[0x11];
  for (; local_48 != (uint *)0x0; local_48 = (uint *)local_48[3]) {
    local_2c = (int)((ulonglong)lVar10 >> 0x20);
    local_44 = (uint)lVar10;
    if (iVar3 != 0) goto LAB_004bac7b;
    pvVar9 = (void *)((int)pvVar9 + 1);
    iVar3 = FUN_004c0910((int)param_1,pvVar9,local_48[5]);
    lVar10 = CONCAT44(local_2c,local_44);
  }
  if (iVar3 == 0) {
    while( true ) {
      local_2c = (int)((ulonglong)lVar10 >> 0x20);
      local_44 = (uint)lVar10;
      if (local_40 < 1) break;
      local_40 = local_40 + -1;
      pvVar9 = (void *)((int)pvVar9 + 1);
      iVar3 = FUN_004c0910((int)param_1,pvVar9,local_34[5]);
      lVar10 = CONCAT44(local_2c,local_44);
      if (iVar3 != 0) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
    *(ushort *)((int)param_1 + 0x42) = (ushort)(param_2 >> 0x10) | (ushort)param_2 & 0xff00;
    param_1[0x11] = (int)pvVar9;
    if (param_5 != 0) {
      param_1[0xf] = param_1[0xf] + 1;
      param_1[0x12] = param_4;
      FUN_004c12b0((int)param_1);
      lVar10 = CONCAT44(local_2c,local_44);
      param_1[3] = (int)pvVar9;
    }
  }
LAB_004bac7b:
  local_2c = (int)((ulonglong)lVar10 >> 0x20);
  local_44 = (uint)lVar10;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004bac90 @ 004bac90  kind=lib  attributed-by=lib-island  size=266 */

int __cdecl
FUN_004bac90(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            undefined4 *param_7)

{
  int *piVar1;
  undefined4 *puVar2;
  int *_Dst;
  int iVar3;
  uint uVar4;
  size_t _Size;
  
  puVar2 = param_7;
  *param_7 = 0;
  _Size = *(int *)(param_1 + 4) + 0x70;
  _Dst = (int *)FUN_004a0350(_Size);
  if (_Dst == (int *)0x0) {
    return 7;
  }
  memset(_Dst,0,_Size);
  _Dst[2] = (int)(_Dst + 0x1c);
  _Dst[1] = param_2;
  *(undefined2 *)(_Dst + 10) = 0xffff;
  _Dst[4] = param_5;
  _Dst[5] = param_6;
  *(byte *)((int)_Dst + 0x2b) = -(param_4 != 0) & 2;
  *_Dst = param_1;
  _Dst[0x19] = param_3;
  *(undefined2 *)(_Dst + 0xc) = 0x101;
  param_7 = (undefined4 *)0x80006;
  iVar3 = (**(code **)(param_1 + 0x18))(param_1,param_3,_Dst[2],0x80006,&param_7);
  if (iVar3 == 0) {
    if (((uint)param_7 & 1) != 0) {
      *(undefined1 *)((int)_Dst + 0x2e) = 1;
    }
    uVar4 = (**(code **)(*(int *)_Dst[2] + 0x30))((int *)_Dst[2]);
    if ((uVar4 & 0x400) != 0) {
      *(undefined1 *)(_Dst + 0xc) = 0;
    }
    if ((uVar4 & 0x1000) != 0) {
      *(undefined1 *)((int)_Dst + 0x31) = 0;
    }
    *puVar2 = _Dst;
    return 0;
  }
  FUN_004c0a00((int)_Dst);
  piVar1 = (int *)_Dst[2];
  if (*piVar1 != 0) {
    (**(code **)(*piVar1 + 4))(piVar1);
    *piVar1 = 0;
  }
  FUN_00466dd0((int)_Dst);
  return iVar3;
}


/* FUN_004bada0 @ 004bada0  kind=lib  attributed-by=lib-island  size=411 */

int __cdecl FUN_004bada0(int param_1,int param_2,undefined4 *param_3,int param_4,undefined4 param_5)

{
  short sVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  int local_c;
  uint local_8;
  
  uVar2 = *(uint *)(param_1 + 0x44);
  local_8 = 0;
  if ((uVar2 == 0) || (*(short *)(param_1 + 0x28) == 0)) {
    *param_3 = 0;
    return 0;
  }
  uVar10 = uVar2 + 0x21 >> 0xc;
  uVar9 = 0;
  do {
    if (uVar9 != 0) goto LAB_004baec6;
    iVar5 = FUN_004c0ae0(param_1,uVar10,&local_c);
    if (iVar5 != 0) {
      return iVar5;
    }
    iVar5 = local_c + 0x4000;
    if (uVar10 == 0) {
      local_c = local_c + 0x88;
      iVar11 = 0;
    }
    else {
      iVar11 = (uVar10 - 1) * 0x1000 + 0xfde;
    }
    uVar6 = param_2 * 0x17f & 0x1fff;
    sVar1 = *(short *)(iVar5 + uVar6 * 2);
    iVar4 = 0x2000;
    while (sVar1 != 0) {
      puVar7 = (ushort *)(iVar5 + uVar6 * 2);
      uVar8 = (uint)*puVar7 + iVar11;
      if ((uVar8 <= uVar2) &&
         (uVar9 = local_8, *(int *)(local_c + -4 + (uint)*puVar7 * 4) == param_2)) {
        uVar9 = uVar8;
        local_8 = uVar8;
      }
      if (iVar4 == 0) {
        FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
        return 0xb;
      }
      uVar6 = uVar6 + 1 & 0x1fff;
      iVar4 = iVar4 + -1;
      sVar1 = *(short *)(iVar5 + uVar6 * 2);
    }
    uVar10 = uVar10 - 1;
  } while (-1 < (int)uVar10);
  if (uVar9 == 0) {
    *param_3 = 0;
    return 0;
  }
LAB_004baec6:
  iVar11 = (*(ushort *)(param_1 + 0x42) & 1) * 0x10000 + (*(ushort *)(param_1 + 0x42) & 0xfe00);
  *param_3 = 1;
  piVar3 = *(int **)(param_1 + 8);
  iVar5 = *piVar3;
  lVar12 = __allmul(iVar11 + 0x18,0,local_8 - 1,0);
  if (iVar11 < param_4) {
    param_4 = iVar11;
  }
  iVar5 = (**(code **)(iVar5 + 8))(piVar3,param_5,param_4,lVar12 + 0x38);
  return iVar5;
}


/* FUN_004baf40 @ 004baf40  kind=lib  attributed-by=lib-island  size=212 */

int __cdecl FUN_004baf40(int param_1,undefined *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar6 = 0;
  if (*(char *)(param_1 + 0x2c) != '\0') {
    uVar1 = *(uint *)(param_1 + 0x44);
    puVar2 = (undefined8 *)**(undefined4 **)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x34) = *puVar2;
    *(undefined8 *)(param_1 + 0x3c) = puVar2[1];
    *(undefined8 *)(param_1 + 0x44) = puVar2[2];
    *(undefined8 *)(param_1 + 0x4c) = puVar2[3];
    *(undefined8 *)(param_1 + 0x54) = puVar2[4];
    *(undefined8 *)(param_1 + 0x5c) = puVar2[5];
    uVar3 = *(uint *)(param_1 + 0x44);
    uVar7 = uVar3 + 0x22;
    iVar5 = uVar7 * 4;
    do {
      uVar3 = uVar3 + 1;
      if (uVar1 < uVar3) break;
      if (uVar7 >> 0xc == 0) {
        uVar4 = *(undefined4 *)(iVar5 + **(int **)(param_1 + 0x20));
      }
      else {
        uVar4 = *(undefined4 *)
                 (*(int *)(*(int *)(param_1 + 0x20) + (uVar7 >> 0xc) * 4) + (uVar7 & 0xfff) * 4);
      }
      iVar6 = (*(code *)param_2)(param_3,uVar4);
      iVar5 = iVar5 + 4;
      uVar7 = uVar7 + 1;
    } while (iVar6 == 0);
    if (uVar1 != *(uint *)(param_1 + 0x44)) {
      FUN_004c0690(param_1);
    }
  }
  return iVar6;
}


/* FUN_004bb020 @ 004bb020  kind=lib  attributed-by=lib-island  size=133 */

uint __cdecl FUN_004bb020(undefined4 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar1 = (*(code *)*param_1)(param_1,param_2);
  if ((uVar1 == 0) && ((*(ushort *)(param_2 + 2) & 0x4000) == 0)) {
    uVar2 = FUN_004bb020(param_1,*(int *)(param_2 + 8));
    if (uVar2 == 0) {
      uVar2 = FUN_004bb020(param_1,*(int *)(param_2 + 0xc));
      if (uVar2 == 0) {
        if ((*(ushort *)(param_2 + 2) & 0x800) == 0) {
          uVar2 = FUN_004bb0b0(param_1,*(int **)(param_2 + 0x10));
        }
        else {
          uVar2 = FUN_004bb100((int)param_1,*(int **)(param_2 + 0x10));
        }
        if (uVar2 == 0) goto LAB_004bb09b;
      }
    }
    return 2;
  }
LAB_004bb09b:
  return uVar1 & 2;
}


/* FUN_004bb0b0 @ 004bb0b0  kind=lib  attributed-by=lib-island  size=72 */

undefined4 __cdecl FUN_004bb0b0(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  if (param_2 != (int *)0x0) {
    piVar3 = (int *)param_2[2];
    for (iVar2 = *param_2; 0 < iVar2; iVar2 = iVar2 + -1) {
      uVar1 = FUN_004bb020(param_1,*piVar3);
      if (uVar1 != 0) {
        return 2;
      }
      piVar3 = piVar3 + 5;
    }
  }
  return 0;
}


/* FUN_004bb100 @ 004bb100  kind=lib  attributed-by=lib-island  size=161 */

uint __cdecl FUN_004bb100(int param_1,undefined4 *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var;
  uint uVar3;
  int iVar4;
  short *psVar5;
  
  if ((param_2 == (undefined4 *)0x0) || (*(int *)(param_1 + 4) == 0)) {
    return 0;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  do {
    uVar2 = (**(code **)(param_1 + 4))(param_1,param_2);
    if (uVar2 != 0) break;
    bVar1 = FUN_004bb1b0(param_1,param_2);
    if (CONCAT31(extraout_var,bVar1) != 0) {
LAB_004bb18a:
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
      return 2;
    }
    psVar5 = (short *)param_2[10];
    if ((psVar5 != (short *)0x0) && (iVar4 = (int)*psVar5, 0 < iVar4)) {
      psVar5 = psVar5 + 0xe;
      do {
        uVar3 = FUN_004bb100(param_1,*(undefined4 **)psVar5);
        if (uVar3 != 0) goto LAB_004bb18a;
        iVar4 = iVar4 + -1;
        psVar5 = psVar5 + 0x24;
      } while (0 < iVar4);
    }
    param_2 = (undefined4 *)param_2[0xf];
  } while (param_2 != (undefined4 *)0x0);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  return uVar2 & 2;
}


/* FUN_004bb1b0 @ 004bb1b0  kind=lib  attributed-by=lib-island  size=138 */

byte __cdecl FUN_004bb1b0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_004bb0b0(param_1,(int *)*param_2);
  if (iVar1 == 0) {
    uVar2 = FUN_004bb020(param_1,param_2[0xb]);
    if (uVar2 == 0) {
      iVar1 = FUN_004bb0b0(param_1,(int *)param_2[0xc]);
      if (iVar1 == 0) {
        uVar2 = FUN_004bb020(param_1,param_2[0xd]);
        if (uVar2 == 0) {
          iVar1 = FUN_004bb0b0(param_1,(int *)param_2[0xe]);
          if (iVar1 == 0) {
            uVar2 = FUN_004bb020(param_1,param_2[0x12]);
            if (uVar2 == 0) {
              uVar2 = FUN_004bb020(param_1,param_2[0x13]);
              return -(uVar2 != 0) & 2;
            }
          }
        }
      }
    }
  }
  return 2;
}


/* FUN_004bb240 @ 004bb240  kind=lib  attributed-by=lib-island  size=922 */

undefined4 * __cdecl
FUN_004bb240(int *param_1,short *param_2,byte *param_3,undefined2 *param_4,int *param_5,uint param_6
            ,uint param_7)

{
  size_t _Size;
  undefined4 uVar1;
  int iVar2;
  ushort uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  short *psVar10;
  uint uVar11;
  uint uVar12;
  short *psVar13;
  double *pdVar14;
  int iVar15;
  undefined4 *puVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  undefined8 local_fc;
  code *local_e8;
  longlong local_e4;
  undefined8 local_dc;
  undefined8 local_d4;
  double local_cc;
  int *local_c4;
  undefined4 *local_c0;
  short *local_bc;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  undefined2 *local_a4;
  int *local_a0;
  double *local_9c;
  int local_98;
  int local_94;
  double *local_90;
  uint local_8c;
  undefined2 uStack_88;
  ushort uStack_86;
  double local_84;
  double local_7c;
  double local_74;
  uint local_6c;
  uint uStack_68;
  undefined8 local_64;
  double local_5c;
  double local_54;
  double local_4c;
  uint local_44;
  short *local_40;
  int *local_3c;
  double *local_38;
  double *local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  double *local_20;
  int local_1c;
  int *local_18;
  int *local_14;
  int local_10;
  short *local_c;
  undefined4 *local_8;
  
  piVar7 = (int *)param_1[2];
  local_14 = piVar7;
  memset(&local_c4,0,0x60);
  local_c4 = param_1;
  if (0x40 < *param_2) {
    FUN_004962b0(param_1,(byte *)"at most %d tables in a join");
    return (undefined4 *)0x0;
  }
  local_24 = param_6 & 0x40;
  if (local_24 == 0) {
    iVar5 = (int)*param_2;
  }
  else {
    iVar5 = 1;
  }
  local_1c = *param_1;
  _Size = iVar5 * 0x58 + 0x2a4;
  local_10 = iVar5;
  local_8 = FUN_00494b90(local_1c,_Size);
  if (local_8 != (undefined4 *)0x0) {
    memset(local_8,0,_Size);
  }
  iVar15 = local_10;
  if (*(char *)(local_1c + 0x38) != '\0') {
    FUN_00494b00(local_1c,local_8);
    return (undefined4 *)0x0;
  }
  *local_8 = param_1;
  local_8[7] = local_10;
  local_8[1] = param_2;
  iVar6 = FUN_004b6b80(piVar7);
  local_8[6] = iVar6;
  local_c0 = local_8 + iVar5 * 0x16 + 0xe;
  local_8[8] = local_c0;
  uVar3 = (ushort)param_6;
  *(ushort *)((int)local_8 + 10) = uVar3;
  iVar5 = param_1[0x6f];
  local_90 = (double *)(local_8 + 0xe);
  local_8[10] = param_1[0x6e];
  local_8[0xb] = iVar5;
  piVar7 = local_c0 + 0x5a;
  if ((*(byte *)(local_1c + 0x34) & 0x20) != 0) {
    param_5 = (int *)0x0;
  }
  local_3c = piVar7;
  local_34 = local_90;
  memset(piVar7,0,0x104);
  local_c0[8] = local_c0 + 10;
  local_c0[1] = piVar7;
  *local_c0 = param_1;
  local_c0[4] = 0;
  local_c0[6] = 0;
  local_c0[7] = 8;
  local_c0[2] = 0;
  local_c0[3] = 0;
  *(ushort *)((int)local_c0 + 0x16) = uVar3;
  if ((param_1[0x57] == 0) && ((*(byte *)(*param_1 + 0x34) & 8) == 0)) {
    local_e8 = FUN_004772e0;
    local_e4 = ZEXT48(param_1) << 0x20;
    FUN_004bb020(&local_e8,(int)param_3);
  }
  FUN_004c2110(local_c0,param_3,0x45);
  if ((param_3 != (byte *)0x0) &&
     ((iVar15 == 0 || (iVar5 = FUN_00498e50((int)param_3), iVar5 != 0)))) {
    FUN_004988a0(param_1,(char *)param_3,local_8[6],8);
  }
  puVar16 = local_c0;
  uVar12 = 0;
  if (0 < *param_2) {
    piVar7 = (int *)(param_2 + 0xc);
    do {
      local_3c[*local_3c + 1] = piVar7[7];
      *local_3c = *local_3c + 1;
      if ((*piVar7 != 0) && ((*(byte *)(*piVar7 + 0x2a) & 0x10) != 0)) {
        uVar9 = 1 << (uVar12 & 0x1f);
        uVar11 = 0;
        if (0x1f < uVar12) {
          uVar11 = uVar9;
        }
        uVar9 = uVar9 ^ uVar11;
        if (0x3f < uVar12) {
          uVar11 = uVar9;
        }
        local_c0[2] = local_c0[2] | uVar9;
        local_c0[3] = local_c0[3] | uVar11;
      }
      uVar12 = uVar12 + 1;
      piVar7 = piVar7 + 0x12;
    } while ((int)uVar12 < (int)*param_2);
  }
  iVar5 = local_c0[6];
  while (iVar5 = iVar5 + -1, -1 < iVar5) {
    FUN_00477d60(param_2,puVar16,iVar5);
  }
  if (*(char *)(local_1c + 0x38) != '\0') goto LAB_004bb949;
  if ((param_5 != (int *)0x0) &&
     (iVar5 = FUN_0047ed50(param_1,param_2,local_c0,param_5), iVar5 != 0)) {
    param_5 = (int *)0x0;
    *(undefined1 *)((int)local_8 + 0xe) = 1;
  }
  local_ac = 0xffffffff;
  local_a8 = 0xffffffff;
  local_a4 = param_4;
  local_94 = local_10;
  local_28 = 0xffffffff;
  local_c = (short *)0x0;
  local_98 = 0;
  local_20 = local_34;
  local_a0 = param_5;
  if (0 < local_10) {
    local_18 = (int *)(local_10 + -1);
    do {
      local_30 = (uint)((int)local_c < (int)local_18);
      dVar17 = 0.0;
      local_40 = (short *)0xffffffff;
      local_5c = 0.0;
      local_fc = 0.0;
      local_4c = 0.0;
      local_54 = 0.0;
      local_e4 = 0;
      local_dc = 0;
      local_cc = 1e+99;
      local_2c = 0;
      psVar10 = local_c;
      iVar5 = local_10;
      dVar19 = dVar17;
      dVar18 = dVar17;
      do {
        if (-1 < (int)local_40) break;
        local_bc = param_2 + (int)psVar10 * 0x24 + 4;
        if ((int)psVar10 < iVar5) {
          local_38 = (double *)(local_8 + (int)psVar10 * 0x16 + 0x20);
          psVar13 = psVar10;
          do {
            pdVar14 = local_38;
            local_44 = (uint)((*(byte *)(local_bc + 0x10) & 10) != 0);
            if ((psVar13 != psVar10) && (local_44 != 0)) break;
            uVar12 = 0;
            if (0 < *local_3c) {
              piVar7 = local_3c;
              do {
                piVar7 = piVar7 + 1;
                if (*piVar7 == *(int *)(local_bc + 0x16)) {
                  uVar9 = 1 << (uVar12 & 0x1f);
                  uVar11 = 0;
                  if (0x1f < uVar12) {
                    uVar11 = uVar9;
                  }
                  uVar9 = uVar9 ^ uVar11;
                  if (0x3f < uVar12) {
                    uVar11 = uVar9;
                  }
                  goto LAB_004bb633;
                }
                uVar12 = uVar12 + 1;
              } while ((int)uVar12 < *local_3c);
            }
            local_d4 = 0;
            local_d4._4_4_ = 0;
            local_d4._0_4_ = 0;
            uVar9 = (uint)local_d4;
            uVar11 = local_d4._4_4_;
LAB_004bb633:
            if ((uVar9 & local_ac) == 0 && (uVar11 & local_a8) == 0) {
              if (psVar13 == local_c) {
                local_c = (short *)((int)local_c + 1);
              }
            }
            else {
              local_b4 = uVar9;
              local_b0 = uVar11;
              if (local_30 == 0) {
                local_b4 = local_ac;
                local_b0 = local_a8;
              }
              if (*(int *)(local_bc + 0x22) == 0) {
                local_2c = local_2c + 1;
              }
              if ((*(byte *)(*(int *)(local_bc + 8) + 0x2a) & 0x10) == 0) {
                FUN_0046f990((int *)&local_c4);
                pdVar14 = local_38;
              }
              else {
                local_9c = local_38 + 1;
                FUN_004706c0((int *)&local_c4);
              }
              if (local_30 == 0) {
                if ((int)local_c < (int)local_18) {
                  local_74 = local_74 / *pdVar14;
                }
              }
              else {
                *pdVar14 = local_74;
              }
              if ((((local_6c & local_ac) == 0 && (uStack_68 & local_a8) == 0) &&
                  (((local_2c == 0 || (*(int *)(local_bc + 0x22) == 0)) ||
                   ((local_8c & 0x100f3000) != 0)))) &&
                 ((((int)local_40 < 0 || (local_74 < local_cc)) ||
                  ((local_74 <= local_cc && ((local_fc._6_2_ < uStack_86 || (local_84 < local_4c))))
                  )))) {
                local_fc = (double)CONCAT26(uStack_86,CONCAT24(uStack_88,local_8c));
                local_dc = CONCAT44(uStack_68,local_6c);
                local_4c = local_84;
                local_54 = local_7c;
                local_cc = local_74;
                local_5c = local_fc;
                local_40 = psVar13;
              }
              psVar10 = local_c;
              iVar5 = local_10;
              dVar17 = local_4c;
              dVar19 = local_54;
              dVar18 = local_5c;
              if (local_44 != 0) break;
            }
            local_38 = local_38 + 0xb;
            psVar13 = (short *)((int)psVar13 + 1);
            local_bc = local_bc + 0x24;
            psVar10 = local_c;
            iVar5 = local_10;
          } while ((int)psVar13 < local_10);
        }
        local_30 = local_30 - 1;
      } while (-1 < (int)local_30);
      if (((ulonglong)local_fc & 0x40000000) != 0) {
        *(undefined1 *)((int)local_8 + 0xe) = 2;
      }
      local_28 = local_28 & (uint)local_fc;
      *local_20 = dVar18;
      local_20[1] = dVar17;
      local_20[2] = dVar19;
      *(uint *)((int)local_20 + 0x1c) = *(uint *)(param_2 + (int)local_40 * 0x24 + 0x1a);
      if (((ulonglong)local_fc & 0x200f0000) == 0) {
        *(uint *)(local_20 + 4) = 0xffffffff;
      }
      else if (((short)local_24 == 0) || (((ulonglong)local_fc & 0x20000000) != 0)) {
        *(int *)(local_20 + 4) = param_1[0x12];
        param_1[0x12] = param_1[0x12] + 1;
      }
      else {
        *(uint *)(local_20 + 4) = param_7;
      }
      uVar12 = 0;
      if (0 < *local_3c) {
        piVar7 = local_3c;
        do {
          piVar7 = piVar7 + 1;
          if (*piVar7 == *(int *)(param_2 + (int)local_40 * 0x24 + 0x1a)) {
            uVar9 = 1 << (uVar12 & 0x1f);
            uVar11 = 0;
            if (0x1f < uVar12) {
              uVar11 = uVar9;
            }
            uVar9 = uVar9 ^ uVar11;
            if (0x3f < uVar12) {
              uVar11 = uVar9;
            }
            goto LAB_004bb8ae;
          }
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < *local_3c);
      }
      local_64 = 0;
      local_64._4_4_ = 0;
      local_64._0_4_ = 0;
      uVar9 = (uint)local_64;
      uVar11 = local_64._4_4_;
LAB_004bb8ae:
      local_a8 = local_a8 & ~uVar11;
      local_ac = local_ac & ~uVar9;
      *(char *)((int)local_20 + 0x34) = (char)local_40;
      if (1.0 <= dVar17) {
        *(double *)(param_1 + 0x6e) = dVar17 * *(double *)(param_1 + 0x6e);
      }
      if ((*(int *)(param_2 + (int)local_40 * 0x24 + 0x26) != 0) &&
         (((ulonglong)local_fc & 0xf0000) == 0)) {
        FUN_004962b0(param_1,(byte *)"cannot use index: %s");
        goto LAB_004bb949;
      }
      local_98 = local_98 + 1;
      local_20 = local_20 + 0xb;
    } while (local_98 < local_10);
  }
  if ((param_1[0x11] != 0) || (*(char *)(local_1c + 0x38) != '\0')) goto LAB_004bb949;
  if (local_10 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined2 *)((int)local_20 - 0x52);
  }
  *(undefined2 *)(local_8 + 2) = uVar4;
  if (((local_28 & 0x2000000) != 0) && (param_4 != (undefined2 *)0x0)) {
    *(undefined2 *)(local_8 + 2) = *param_4;
  }
  if (((param_6 & 4) != 0) && ((local_28 & 0x2000000) != 0)) {
    *(undefined1 *)(local_8 + 3) = 1;
    local_8[0xe] = local_8[0xe] & 0xffbfffff;
  }
  piVar7 = (int *)param_1[0x6c];
  piVar8 = param_1;
  if ((piVar7 != (int *)0x0) && (piVar8 = piVar7, piVar7 != param_1)) {
    param_1[0x57] = -1;
  }
  if (piVar8[0x57] == 0) {
    piVar7 = (int *)piVar8[2];
    if (piVar7 == (int *)0x0) {
      piVar7 = FUN_004af150(*piVar8);
      piVar8[2] = (int)piVar7;
      if (piVar7 == (int *)0x0) goto LAB_004bba24;
      FUN_004ae760(piVar7,0x94);
    }
    iVar5 = FUN_004ae830(piVar7,1,0,0);
    piVar8[0x57] = iVar5 + 1;
  }
LAB_004bba24:
  local_28 = 0xffffffff;
  local_20 = (double *)0xffffffff;
  *(undefined8 *)(local_8 + 0xc) = 0x3ff0000000000000;
  if (0 < local_10) {
    local_2c = local_10;
    pdVar14 = (double *)(local_8 + 0xe);
    do {
      iVar5 = (uint)*(byte *)((int)pdVar14 + 0x34) * 9 + 1;
      iVar15 = -1000000;
      piVar7 = *(int **)(param_2 + iVar5 * 4 + 8);
      psVar10 = param_2 + iVar5 * 4;
      *(double *)(local_8 + 0xc) = pdVar14[1] * *(double *)(local_8 + 0xc);
      if (piVar7[0x10] != 0) {
        iVar15 = 0;
        if (0 < *(int *)(local_1c + 0x14)) {
          piVar8 = (int *)(*(int *)(local_1c + 0x10) + 0xc);
          do {
            if (*piVar8 == piVar7[0x10]) break;
            iVar15 = iVar15 + 1;
            piVar8 = piVar8 + 4;
          } while (iVar15 < *(int *)(local_1c + 0x14));
        }
      }
      local_c = psVar10;
      if (((*(byte *)((int)piVar7 + 0x2a) & 2) == 0) && (piVar7[3] == 0)) {
        if (((ulonglong)*local_34 & 0x8000000) == 0) {
          if ((*(byte *)((int)piVar7 + 0x2a) & 0x10) == 0) {
            if ((((ulonglong)*local_34 & 0x400000) == 0) && ((param_6 & 0x10) == 0)) {
              FUN_004a0f40(param_1,*(undefined4 *)(psVar10 + 0x16),iVar15,piVar7,
                           (*(char *)(local_8 + 3) != '\0') + 0x27);
              if ((*(char *)(local_8 + 3) == '\0') && (*(short *)((int)piVar7 + 0x26) < 0x40)) {
                uVar12 = *(uint *)(psVar10 + 0x1c);
                uVar9 = *(uint *)(psVar10 + 0x1e);
                piVar7 = (int *)0x0;
                if (uVar12 != 0 || uVar9 != 0) {
                  do {
                    uVar12 = uVar12 >> 1 | uVar9 << 0x1f;
                    uVar9 = uVar9 >> 1;
                    piVar7 = (int *)((int)piVar7 + 1);
                  } while (uVar12 != 0 || uVar9 != 0);
                }
                FUN_004aecc0(local_14,local_14[7] + -1,piVar7,0xfffffff2);
              }
            }
            else {
              FUN_004aab20(param_1,iVar15,piVar7[8],'\0',*piVar7);
            }
          }
        }
        else {
          for (piVar7 = (int *)piVar7[0xe]; (piVar7 != (int *)0x0 && (*piVar7 != local_1c));
              piVar7 = (int *)piVar7[6]) {
          }
          local_24 = *(uint *)(psVar10 + 0x16);
          iVar5 = local_14[7];
          if ((iVar5 < local_14[8]) || (iVar6 = FUN_0047de10(local_14), iVar6 == 0)) {
            local_14[7] = local_14[7] + 1;
            iVar6 = local_14[1];
            *(undefined2 *)(iVar6 + iVar5 * 0x14) = 0x87;
            *(undefined1 *)(iVar6 + 3 + iVar5 * 0x14) = 0;
            *(uint *)(iVar6 + 4 + iVar5 * 0x14) = local_24;
            *(undefined4 *)(iVar6 + 8 + iVar5 * 0x14) = 0;
            *(undefined4 *)(iVar6 + 0xc + iVar5 * 0x14) = 0;
            *(undefined4 *)(iVar6 + 0x10 + iVar5 * 0x14) = 0;
          }
          else {
            iVar5 = 1;
          }
          psVar10 = local_c;
          if ((local_14[1] != 0) && (*(char *)(*local_14 + 0x38) == '\0')) {
            if (iVar5 < 0) {
              iVar5 = local_14[7] + -1;
            }
            local_44 = iVar5 * 5;
            iVar6 = local_14[1];
            FUN_0047bc80(*local_14,(int)*(char *)(iVar6 + 1 + iVar5 * 0x14),
                         *(int **)(iVar6 + 0x10 + iVar5 * 0x14));
            *(undefined4 *)(iVar6 + 0x10 + local_44 * 4) = 0;
            psVar10 = local_c;
            if (piVar7 == (int *)0x0) {
              *(undefined4 *)(iVar6 + 0x10 + local_44 * 4) = 0;
              *(undefined1 *)(iVar6 + 1 + local_44 * 4) = 0;
            }
            else {
              *(int **)(iVar6 + 0x10 + local_44 * 4) = piVar7;
              *(undefined1 *)(iVar6 + 1 + local_44 * 4) = 0xf6;
              piVar7[3] = piVar7[3] + 1;
            }
          }
        }
      }
      if (((ulonglong)*local_34 & 0x20000000) == 0) {
        if (((ulonglong)*local_34 & 0xf0000) != 0) {
          iVar5 = *(int *)(local_34 + 2);
          local_18 = FUN_0049dbf0(param_1,iVar5);
          uVar1 = *(undefined4 *)(local_34 + 4);
          local_24 = *(uint *)(iVar5 + 0x28);
          iVar5 = local_14[7];
          if ((iVar5 < local_14[8]) || (iVar6 = FUN_0047de10(local_14), iVar6 == 0)) {
            local_14[7] = local_14[7] + 1;
            iVar6 = local_14[1];
            *(undefined2 *)(iVar6 + iVar5 * 0x14) = 0x27;
            *(undefined1 *)(iVar6 + 3 + iVar5 * 0x14) = 0;
            *(undefined4 *)(iVar6 + 4 + iVar5 * 0x14) = uVar1;
            *(uint *)(iVar6 + 8 + iVar5 * 0x14) = local_24;
            *(int *)(iVar6 + 0xc + iVar5 * 0x14) = iVar15;
            *(undefined4 *)(iVar6 + 0x10 + iVar5 * 0x14) = 0;
          }
          else {
            iVar5 = 1;
          }
          iVar6 = local_14[1];
          iVar2 = *local_14;
          if ((iVar6 == 0) || (*(char *)(iVar2 + 0x38) != '\0')) {
            FUN_0047bc80(iVar2,0xfffffff0,local_18);
          }
          else {
            if (iVar5 < 0) {
              iVar5 = local_14[7] + -1;
            }
            FUN_0047bc80(iVar2,(int)*(char *)(iVar6 + 1 + iVar5 * 0x14),
                         *(int **)(iVar6 + 0x10 + iVar5 * 0x14));
            *(undefined4 *)(iVar6 + 0x10 + iVar5 * 0x14) = 0;
            if (local_18 == (int *)0x0) {
              *(undefined4 *)(iVar6 + 0x10 + iVar5 * 0x14) = 0;
              *(undefined1 *)(iVar6 + 1 + iVar5 * 0x14) = 0;
            }
            else {
              *(int **)(iVar6 + 0x10 + iVar5 * 0x14) = local_18;
              *(undefined1 *)(iVar6 + 1 + iVar5 * 0x14) = 0xfa;
            }
          }
        }
      }
      else {
        FUN_004757f0(param_1,(int)local_c0,(uint)psVar10,local_28,(uint)local_20,(uint *)local_34);
      }
      FUN_00493400(param_1,iVar15);
      piVar7 = (int *)local_c0[1];
      uVar12 = 0;
      iVar5 = *piVar7;
      if (0 < iVar5) {
        do {
          piVar7 = piVar7 + 1;
          if (*piVar7 == *(int *)(local_c + 0x16)) {
            uVar9 = 1 << (uVar12 & 0x1f);
            uVar11 = 0;
            if (0x1f < uVar12) {
              uVar11 = uVar9;
            }
            uVar9 = uVar9 ^ uVar11;
            if (0x3f < uVar12) {
              uVar11 = uVar9;
            }
            goto LAB_004bbd81;
          }
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < iVar5);
      }
      local_64 = 0;
      local_64._4_4_ = 0;
      local_64._0_4_ = 0;
      uVar9 = (uint)local_64;
      uVar11 = local_64._4_4_;
LAB_004bbd81:
      local_20 = (double *)((uint)local_20 & ~uVar11);
      local_28 = local_28 & ~uVar9;
      pdVar14 = local_34 + 0xb;
      local_2c = local_2c + -1;
      local_34 = pdVar14;
    } while (local_2c != 0);
    local_2c = 0;
  }
  local_8[4] = local_14[7];
  if (*(char *)(local_1c + 0x38) == '\0') {
    iVar5 = 0;
    uVar20 = 0xffffffffffffffff;
    if (0 < local_10) {
      puVar16 = local_8 + 0x19;
      do {
        local_18 = (int *)((ulonglong)uVar20 >> 0x20);
        FUN_004778d0(param_1,(int)param_2,puVar16 + -0xb,iVar5,(uint)*(byte *)(puVar16 + 2),uVar3);
        uVar20 = FUN_004738d0(local_8,iVar5,uVar3,(uint)uVar20,(uint)local_18);
        iVar5 = iVar5 + 1;
        local_8[5] = *puVar16;
        puVar16 = puVar16 + 0x16;
      } while (iVar5 < local_10);
    }
    return local_8;
  }
LAB_004bb949:
  *(undefined8 *)(param_1 + 0x6e) = *(undefined8 *)(local_8 + 10);
  FUN_004c2070(local_1c,local_8);
  return (undefined4 *)0x0;
}


/* FUN_004bbe40 @ 004bbe40  kind=lib  attributed-by=lib-island  size=1502 */

void __cdecl FUN_004bbe40(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  undefined1 *puVar15;
  uint *puVar16;
  int *piVar17;
  uint *puVar18;
  undefined4 *puVar19;
  int local_20;
  int local_14;
  int local_10;
  undefined4 *local_8;
  
  piVar2 = (int *)*param_1;
  iVar3 = param_1[1];
  piVar4 = (int *)piVar2[2];
  iVar5 = *piVar2;
  FUN_00496a90((int)piVar2);
  local_14 = param_1[7] + -1;
  if (-1 < local_14) {
    local_8 = (undefined4 *)(local_14 * 0x48 + 0x34 + iVar3);
    piVar17 = param_1 + local_14 * 0x16 + 0x14;
    do {
      if (piVar4[10] != 0) {
        *(int *)(piVar4[10] - (piVar17[5] * 4 + 4)) = piVar4[7];
      }
      cVar1 = *(char *)((int)piVar17 + 0x1d);
      if (cVar1 != -0x6b) {
        iVar13 = piVar17[9];
        iVar11 = piVar4[7];
        iVar10 = piVar17[8];
        if ((iVar11 < piVar4[8]) || (iVar8 = FUN_0047de10(piVar4), iVar8 == 0)) {
          iVar8 = piVar4[1];
          piVar4[7] = piVar4[7] + 1;
          *(char *)(iVar8 + iVar11 * 0x14) = cVar1;
          *(int *)(iVar8 + 4 + iVar11 * 0x14) = iVar10;
          *(undefined1 *)(iVar8 + 3 + iVar11 * 0x14) = 0;
          *(int *)(iVar8 + 8 + iVar11 * 0x14) = iVar13;
          *(undefined4 *)(iVar8 + 0xc + iVar11 * 0x14) = 0;
          *(undefined4 *)(iVar8 + 0x10 + iVar11 * 0x14) = 0;
          *(undefined1 *)(iVar8 + 1 + iVar11 * 0x14) = 0;
        }
        if (piVar4[1] != 0) {
          *(undefined1 *)(piVar4[1] + -0x11 + piVar4[7] * 0x14) =
               *(undefined1 *)((int)piVar17 + 0x1e);
        }
      }
      if (((piVar17[-6] & 0xf1000U) != 0) && (0 < piVar17[10])) {
        if (piVar4[10] != 0) {
          *(int *)(piVar4[10] - (piVar17[4] * 4 + 4)) = piVar4[7];
        }
        iVar13 = piVar17[10];
        puVar19 = (undefined4 *)(piVar17[0xb] + (iVar13 + -1) * 8);
        for (; 0 < iVar13; iVar13 = iVar13 + -1) {
          uVar9 = puVar19[1] + 1;
          if ((-1 < (int)uVar9) && (uVar9 < (uint)piVar4[7])) {
            *(int *)(piVar4[1] + 8 + uVar9 * 0x14) = piVar4[7];
          }
          uVar6 = puVar19[1];
          uVar7 = *puVar19;
          iVar11 = piVar4[7];
          if ((iVar11 < piVar4[8]) || (iVar10 = FUN_0047de10(piVar4), iVar10 == 0)) {
            piVar4[7] = piVar4[7] + 1;
            iVar10 = piVar4[1];
            *(undefined4 *)(iVar10 + 4 + iVar11 * 0x14) = uVar7;
            *(undefined2 *)(iVar10 + iVar11 * 0x14) = 0x5f;
            *(undefined1 *)(iVar10 + 3 + iVar11 * 0x14) = 0;
            *(undefined4 *)(iVar10 + 8 + iVar11 * 0x14) = uVar6;
            *(undefined4 *)(iVar10 + 0xc + iVar11 * 0x14) = 0;
            *(undefined4 *)(iVar10 + 0x10 + iVar11 * 0x14) = 0;
          }
          uVar9 = puVar19[1] - 1;
          if ((-1 < (int)uVar9) && (uVar9 < (uint)piVar4[7])) {
            *(int *)(piVar4[1] + 8 + uVar9 * 0x14) = piVar4[7];
          }
          puVar19 = puVar19 + -2;
        }
        FUN_00494b00(iVar5,(undefined4 *)piVar17[0xb]);
      }
      if (piVar4[10] != 0) {
        *(int *)(piVar4[10] - (piVar17[3] * 4 + 4)) = piVar4[7];
      }
      iVar13 = *piVar17;
      if (iVar13 != 0) {
        uVar9 = piVar4[7];
        if (((int)uVar9 < piVar4[8]) || (iVar11 = FUN_0047de10(piVar4), iVar11 == 0)) {
          iVar11 = piVar4[1];
          piVar4[7] = piVar4[7] + 1;
          *(undefined2 *)(iVar11 + uVar9 * 0x14) = 0x78;
          *(undefined1 *)(iVar11 + 3 + uVar9 * 0x14) = 0;
          *(int *)(iVar11 + 4 + uVar9 * 0x14) = iVar13;
          *(undefined4 *)(iVar11 + 8 + uVar9 * 0x14) = 0;
          *(undefined4 *)(iVar11 + 0xc + uVar9 * 0x14) = 0;
          *(undefined4 *)(iVar11 + 0x10 + uVar9 * 0x14) = 0;
        }
        else {
          uVar9 = 1;
        }
        if ((piVar17[-6] & 0x400000U) == 0) {
          uVar6 = *local_8;
          iVar13 = piVar4[7];
          if ((iVar13 < piVar4[8]) || (iVar11 = FUN_0047de10(piVar4), iVar11 == 0)) {
            piVar4[7] = piVar4[7] + 1;
            iVar11 = piVar4[1];
            *(undefined2 *)(iVar11 + iVar13 * 0x14) = 0x42;
            *(undefined1 *)(iVar11 + 3 + iVar13 * 0x14) = 0;
            *(undefined4 *)(iVar11 + 4 + iVar13 * 0x14) = uVar6;
            *(undefined4 *)(iVar11 + 8 + iVar13 * 0x14) = 0;
            *(undefined4 *)(iVar11 + 0xc + iVar13 * 0x14) = 0;
            *(undefined4 *)(iVar11 + 0x10 + iVar13 * 0x14) = 0;
          }
        }
        iVar13 = piVar17[2];
        if ((-1 < iVar13) &&
           ((iVar11 = piVar4[7], iVar11 < piVar4[8] || (iVar10 = FUN_0047de10(piVar4), iVar10 == 0))
           )) {
          piVar4[7] = piVar4[7] + 1;
          iVar10 = piVar4[1];
          *(undefined2 *)(iVar10 + iVar11 * 0x14) = 0x42;
          *(undefined1 *)(iVar10 + 3 + iVar11 * 0x14) = 0;
          *(int *)(iVar10 + 4 + iVar11 * 0x14) = iVar13;
          *(undefined4 *)(iVar10 + 8 + iVar11 * 0x14) = 0;
          *(undefined4 *)(iVar10 + 0xc + iVar11 * 0x14) = 0;
          *(undefined4 *)(iVar10 + 0x10 + iVar11 * 0x14) = 0;
        }
        iVar13 = piVar17[6];
        if (*(char *)((int)piVar17 + 0x1d) == '\x03') {
          iVar10 = piVar17[8];
          local_20 = piVar4[7];
          if ((local_20 < piVar4[8]) || (iVar11 = FUN_0047de10(piVar4), iVar11 == 0)) {
            piVar4[7] = piVar4[7] + 1;
            iVar11 = piVar4[1];
            *(int *)(iVar11 + 4 + local_20 * 0x14) = iVar10;
            *(undefined2 *)(iVar11 + local_20 * 0x14) = 2;
LAB_004bc1b9:
            *(undefined4 *)(iVar11 + 0x10 + local_20 * 0x14) = 0;
            *(undefined4 *)(iVar11 + 0xc + local_20 * 0x14) = 0;
            *(int *)(iVar11 + 8 + local_20 * 0x14) = iVar13;
            *(undefined1 *)(iVar11 + 3 + local_20 * 0x14) = 0;
          }
        }
        else {
          local_20 = piVar4[7];
          if ((local_20 < piVar4[8]) || (iVar11 = FUN_0047de10(piVar4), iVar11 == 0)) {
            piVar4[7] = piVar4[7] + 1;
            iVar11 = piVar4[1];
            *(undefined2 *)(iVar11 + local_20 * 0x14) = 1;
            *(undefined4 *)(iVar11 + 4 + local_20 * 0x14) = 0;
            goto LAB_004bc1b9;
          }
        }
        if ((-1 < (int)uVar9) && (uVar9 < (uint)piVar4[7])) {
          *(int *)(piVar4[1] + 8 + uVar9 * 0x14) = piVar4[7];
        }
      }
      local_8 = local_8 + -0x12;
      local_14 = local_14 + -1;
      piVar17 = piVar17 + -0x16;
    } while (-1 < local_14);
  }
  if (piVar4[10] != 0) {
    *(int *)(piVar4[10] - (param_1[6] * 4 + 4)) = piVar4[7];
  }
  puVar18 = (uint *)(param_1 + 0xe);
  local_10 = 0;
  if (0 < param_1[7]) {
    do {
      iVar13 = *(int *)(iVar3 + 0x18 + (uint)(byte)puVar18[0xd] * 0x48);
      if ((((*(byte *)(iVar13 + 0x2a) & 2) == 0) && (*(int *)(iVar13 + 0xc) == 0)) &&
         ((*(byte *)((int)param_1 + 10) & 0x10) == 0)) {
        uVar9 = *puVar18;
        if (((char)param_1[3] == '\0') && ((uVar9 & 0x400000) == 0)) {
          uVar6 = *(undefined4 *)(iVar3 + 0x34 + (uint)(byte)puVar18[0xd] * 0x48);
          iVar13 = piVar4[7];
          if ((iVar13 < piVar4[8]) || (iVar11 = FUN_0047de10(piVar4), iVar11 == 0)) {
            piVar4[7] = piVar4[7] + 1;
            iVar11 = piVar4[1];
            *(undefined2 *)(iVar11 + iVar13 * 0x14) = 0x2d;
            *(undefined1 *)(iVar11 + 3 + iVar13 * 0x14) = 0;
            *(undefined4 *)(iVar11 + 4 + iVar13 * 0x14) = uVar6;
            *(undefined4 *)(iVar11 + 8 + iVar13 * 0x14) = 0;
            *(undefined4 *)(iVar11 + 0xc + iVar13 * 0x14) = 0;
            *(undefined4 *)(iVar11 + 0x10 + iVar13 * 0x14) = 0;
          }
        }
        if (((uVar9 & 0xf0000) != 0) && ((uVar9 & 0x20000000) == 0)) {
          iVar13 = piVar4[7];
          uVar9 = puVar18[8];
          if ((iVar13 < piVar4[8]) || (iVar11 = FUN_0047de10(piVar4), iVar11 == 0)) {
            iVar11 = piVar4[1];
            piVar4[7] = piVar4[7] + 1;
            *(undefined2 *)(iVar11 + iVar13 * 0x14) = 0x2d;
            *(undefined1 *)(iVar11 + 3 + iVar13 * 0x14) = 0;
            *(uint *)(iVar11 + 4 + iVar13 * 0x14) = uVar9;
            *(undefined4 *)(iVar11 + 8 + iVar13 * 0x14) = 0;
            *(undefined4 *)(iVar11 + 0xc + iVar13 * 0x14) = 0;
            *(undefined4 *)(iVar11 + 0x10 + iVar13 * 0x14) = 0;
          }
        }
      }
      if ((*puVar18 & 0xf0000) == 0) {
        if ((*puVar18 & 0x10000000) != 0) {
          uVar9 = puVar18[0x10];
          goto LAB_004bc341;
        }
      }
      else {
        uVar9 = puVar18[4];
LAB_004bc341:
        if ((uVar9 != 0) && (*(char *)(iVar5 + 0x38) == '\0')) {
          iVar13 = param_1[4];
          iVar11 = iVar13;
          if (iVar13 < 0) {
            iVar11 = piVar4[7] + -1;
          }
          if (*(char *)(*piVar4 + 0x38) == '\0') {
            puVar15 = (undefined1 *)(piVar4[1] + iVar11 * 0x14);
          }
          else {
            puVar15 = &DAT_00583fc4;
          }
          if (iVar13 < piVar4[7]) {
            puVar16 = (uint *)(puVar15 + 4);
            iVar13 = piVar4[7] - iVar13;
            do {
              if (*puVar16 == puVar18[7]) {
                if ((char)puVar16[-1] == '\x1d') {
                  uVar12 = 0;
                  if (0 < *(int *)(uVar9 + 0x24)) {
                    puVar14 = *(uint **)(uVar9 + 4);
                    do {
                      if (puVar16[1] == *puVar14) {
                        puVar16[1] = uVar12;
                        uVar12 = puVar18[8];
                        goto LAB_004bc3d7;
                      }
                      uVar12 = uVar12 + 1;
                      puVar14 = puVar14 + 1;
                    } while ((int)uVar12 < *(int *)(uVar9 + 0x24));
                  }
                }
                else if ((char)puVar16[-1] == 'A') {
                  uVar12 = puVar18[8];
                  *(undefined1 *)(puVar16 + -1) = 99;
LAB_004bc3d7:
                  *puVar16 = uVar12;
                }
              }
              puVar16 = puVar16 + 5;
              iVar13 = iVar13 + -1;
            } while (iVar13 != 0);
          }
        }
      }
      local_10 = local_10 + 1;
      puVar18 = puVar18 + 0x16;
    } while (local_10 < param_1[7]);
  }
  *(undefined8 *)(piVar2 + 0x6e) = *(undefined8 *)(param_1 + 10);
  FUN_004c2070(iVar5,param_1);
  return;
}


/* FUN_004bc420 @ 004bc420  kind=lib  attributed-by=lib-island  size=25 */

void __cdecl FUN_004bc420(int *param_1,byte *param_2)

{
  FUN_004ad370(param_1,1,param_2,(double *)&stack0x0000000c);
  return;
}


