// Unsorted_009 (game_misc) -- server. 150 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Unsorted_009.h"

/* FUN_004ae960 @ 004ae960  kind=gamemisc  attributed-by=none  size=171 */

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


/* FUN_004aea10 @ 004aea10  kind=gamemisc  attributed-by=none  size=168 */

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


/* FUN_004aeac0 @ 004aeac0  kind=gamemisc  attributed-by=none  size=241 */

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


/* FUN_004aebc0 @ 004aebc0  kind=gamemisc  attributed-by=none  size=102 */

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


/* FUN_004aec60 @ 004aec60  kind=gamemisc  attributed-by=none  size=29 */

void __cdecl FUN_004aec60(int param_1,uint param_2,undefined4 param_3)

{
  if (param_2 < *(uint *)(param_1 + 0x1c)) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 4 + param_2 * 0x14) = param_3;
  }
  return;
}


/* FUN_004aec80 @ 004aec80  kind=gamemisc  attributed-by=none  size=29 */

void __cdecl FUN_004aec80(int param_1,uint param_2,undefined4 param_3)

{
  if (param_2 < *(uint *)(param_1 + 0x1c)) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 8 + param_2 * 0x14) = param_3;
  }
  return;
}


/* FUN_004aeca0 @ 004aeca0  kind=gamemisc  attributed-by=none  size=29 */

void __cdecl FUN_004aeca0(int param_1,uint param_2,undefined4 param_3)

{
  if (param_2 < *(uint *)(param_1 + 0x1c)) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0xc + param_2 * 0x14) = param_3;
  }
  return;
}


/* FUN_004aecc0 @ 004aecc0  kind=gamemisc  attributed-by=none  size=359 */

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


/* FUN_004aee30 @ 004aee30  kind=gamemisc  attributed-by=none  size=28 */

void __cdecl FUN_004aee30(int param_1,undefined1 param_2)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 4) + -0x11 + *(int *)(param_1 + 0x1c) * 0x14) = param_2;
  }
  return;
}


/* FUN_004aee50 @ 004aee50  kind=gamemisc  attributed-by=none  size=67 */

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


/* FUN_004aef00 @ 004aef00  kind=gamemisc  attributed-by=none  size=327 */

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


/* FUN_004af050 @ 004af050  kind=gamemisc  attributed-by=none  size=250 */

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


/* FUN_004af150 @ 004af150  kind=gamemisc  attributed-by=none  size=91 */

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


/* FUN_004af1b0 @ 004af1b0  kind=gamemisc  attributed-by=none  size=152 */

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


/* FUN_004af250 @ 004af250  kind=gamemisc  attributed-by=none  size=82 */

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


/* FUN_004af2b0 @ 004af2b0  kind=gamemisc  attributed-by=none  size=77 */

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


/* FUN_004af300 @ 004af300  kind=gamemisc  attributed-by=none  size=87 */

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


/* FUN_004b5b10 @ 004b5b10  kind=gamemisc  attributed-by=none  size=860 */

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


/* FUN_004b5e70 @ 004b5e70  kind=gamemisc  attributed-by=none  size=112 */

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


/* FUN_004b5ee0 @ 004b5ee0  kind=gamemisc  attributed-by=none  size=164 */

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


/* FUN_004b5f90 @ 004b5f90  kind=gamemisc  attributed-by=none  size=93 */

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


/* FUN_004b5ff0 @ 004b5ff0  kind=gamemisc  attributed-by=none  size=95 */

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


/* FUN_004b6050 @ 004b6050  kind=gamemisc  attributed-by=none  size=43 */

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


/* FUN_004b6080 @ 004b6080  kind=gamemisc  attributed-by=none  size=88 */

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


/* FUN_004b63c0 @ 004b63c0  kind=gamemisc  attributed-by=none  size=191 */

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


/* FUN_004b6480 @ 004b6480  kind=gamemisc  attributed-by=none  size=347 */

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


/* FUN_004b65e0 @ 004b65e0  kind=gamemisc  attributed-by=none  size=109 */

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


/* FUN_004b6650 @ 004b6650  kind=gamemisc  attributed-by=none  size=202 */

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


/* FUN_004b6720 @ 004b6720  kind=gamemisc  attributed-by=none  size=34 */

void __cdecl FUN_004b6720(int param_1,uint param_2)

{
  if ((-1 < (int)param_2) && (param_2 < *(uint *)(param_1 + 0x1c))) {
    *(uint *)(*(int *)(param_1 + 4) + 8 + param_2 * 0x14) = *(uint *)(param_1 + 0x1c);
  }
  return;
}


/* FUN_004b6750 @ 004b6750  kind=gamemisc  attributed-by=none  size=128 */

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


/* FUN_004b67d0 @ 004b67d0  kind=gamemisc  attributed-by=none  size=933 */

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


/* FUN_004b6b80 @ 004b6b80  kind=gamemisc  attributed-by=none  size=104 */

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


/* FUN_004b6bf0 @ 004b6bf0  kind=gamemisc  attributed-by=none  size=780 */

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


/* FUN_004b6f10 @ 004b6f10  kind=gamemisc  attributed-by=none  size=138 */

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


/* FUN_004b70b0 @ 004b70b0  kind=gamemisc  attributed-by=none  size=420 */

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


/* FUN_004b7410 @ 004b7410  kind=gamemisc  attributed-by=none  size=127 */

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


/* FUN_004b7500 @ 004b7500  kind=gamemisc  attributed-by=none  size=138 */

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


/* FUN_004b75f0 @ 004b75f0  kind=gamemisc  attributed-by=none  size=126 */

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


/* FUN_004b7670 @ 004b7670  kind=gamemisc  attributed-by=none  size=109 */

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


/* FUN_004b7790 @ 004b7790  kind=gamemisc  attributed-by=none  size=200 */

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


/* FUN_004b7860 @ 004b7860  kind=gamemisc  attributed-by=none  size=89 */

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


/* FUN_004b7910 @ 004b7910  kind=gamemisc  attributed-by=none  size=204 */

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


/* FUN_004b7be0 @ 004b7be0  kind=gamemisc  attributed-by=none  size=91 */

void __cdecl FUN_004b7be0(int *param_1,int param_2)

{
  if ((*(ushort *)(param_1 + 7) & 0x2460) != 0) {
    FUN_004b7720(param_1);
  }
  FUN_00494b00(*param_1,(undefined4 *)param_1[9]);
  if (param_2 < 0) {
    param_2 = 0;
  }
  param_1[1] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0x1044010;
  param_1[6] = 0;
  param_1[4] = param_2;
  return;
}


/* FUN_004b7c40 @ 004b7c40  kind=gamemisc  attributed-by=none  size=109 */

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


/* FUN_004b7cb0 @ 004b7cb0  kind=gamemisc  attributed-by=none  size=53 */

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


/* FUN_004b7d90 @ 004b7d90  kind=gamemisc  attributed-by=none  size=43 */

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


/* FUN_004b7dc0 @ 004b7dc0  kind=gamemisc  attributed-by=none  size=1215 */

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


/* FUN_004b8290 @ 004b8290  kind=gamemisc  attributed-by=none  size=184 */

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


/* FUN_004b8350 @ 004b8350  kind=gamemisc  attributed-by=none  size=89 */

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


/* FUN_004b83b0 @ 004b83b0  kind=gamemisc  attributed-by=none  size=420 */

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


/* FUN_004b8560 @ 004b8560  kind=gamemisc  attributed-by=none  size=213 */

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


/* FUN_004b8640 @ 004b8640  kind=gamemisc  attributed-by=none  size=356 */

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


/* FUN_004b87b0 @ 004b87b0  kind=gamemisc  attributed-by=none  size=32 */

void __cdecl FUN_004b87b0(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x28) - (param_2 * 4 + 4)) = *(undefined4 *)(param_1 + 0x1c);
  }
  return;
}


/* FUN_004b87d0 @ 004b87d0  kind=gamemisc  attributed-by=none  size=552 */

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


/* FUN_004b8a30 @ 004b8a30  kind=gamemisc  attributed-by=none  size=175 */

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


/* FUN_004b8ae0 @ 004b8ae0  kind=gamemisc  attributed-by=none  size=261 */

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


/* FUN_004b8bf0 @ 004b8bf0  kind=gamemisc  attributed-by=none  size=27 */

uint __cdecl FUN_004b8bf0(uint param_1)

{
  if (0xb < param_1) {
    return param_1 - 0xc >> 1;
  }
  return (uint)(byte)(&DAT_0056a674)[param_1];
}


/* FUN_004b8c10 @ 004b8c10  kind=gamemisc  attributed-by=none  size=62 */

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


/* FUN_004b8c50 @ 004b8c50  kind=gamemisc  attributed-by=none  size=121 */

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


/* FUN_004b8cd0 @ 004b8cd0  kind=gamemisc  attributed-by=none  size=45 */

void __cdecl FUN_004b8cd0(int param_1,int param_2)

{
  if (0x20 < param_2) {
    *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
    return;
  }
  *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) | 1 << ((char)param_2 - 1U & 0x1f);
  return;
}


/* FUN_004b8d00 @ 004b8d00  kind=gamemisc  attributed-by=none  size=201 */

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


/* FUN_004b8dd0 @ 004b8dd0  kind=gamemisc  attributed-by=none  size=172 */

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


/* FUN_004b8e80 @ 004b8e80  kind=gamemisc  attributed-by=none  size=184 */

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


/* FUN_004b8f40 @ 004b8f40  kind=gamemisc  attributed-by=none  size=186 */

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


/* FUN_004b9000 @ 004b9000  kind=gamemisc  attributed-by=none  size=724 */

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


/* FUN_004b92e0 @ 004b92e0  kind=gamemisc  attributed-by=none  size=119 */

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


/* FUN_004b9360 @ 004b9360  kind=gamemisc  attributed-by=none  size=183 */

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


/* FUN_004b9420 @ 004b9420  kind=gamemisc  attributed-by=none  size=277 */

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


/* FUN_004b9540 @ 004b9540  kind=gamemisc  attributed-by=none  size=48 */

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


/* FUN_004b9570 @ 004b9570  kind=gamemisc  attributed-by=none  size=320 */

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


/* FUN_004b96b0 @ 004b96b0  kind=gamemisc  attributed-by=none  size=59 */

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


/* FUN_004b96f0 @ 004b96f0  kind=gamemisc  attributed-by=none  size=153 */

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


/* FUN_004b9790 @ 004b9790  kind=gamemisc  attributed-by=none  size=218 */

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


/* FUN_004b9870 @ 004b9870  kind=gamemisc  attributed-by=none  size=257 */

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


/* FUN_004b9980 @ 004b9980  kind=gamemisc  attributed-by=none  size=280 */

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


/* FUN_004b9aa0 @ 004b9aa0  kind=gamemisc  attributed-by=none  size=129 */

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


/* FUN_004b9d20 @ 004b9d20  kind=gamemisc  attributed-by=none  size=131 */

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


/* FUN_004b9db0 @ 004b9db0  kind=gamemisc  attributed-by=none  size=320 */

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


/* FUN_004b9ef0 @ 004b9ef0  kind=gamemisc  attributed-by=none  size=128 */

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


/* FUN_004b9f70 @ 004b9f70  kind=gamemisc  attributed-by=none  size=204 */

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


/* FUN_004ba040 @ 004ba040  kind=gamemisc  attributed-by=none  size=47 */

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


/* FUN_004ba0e0 @ 004ba0e0  kind=gamemisc  attributed-by=none  size=786 */

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


/* FUN_004ba400 @ 004ba400  kind=gamemisc  attributed-by=none  size=146 */

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


/* FUN_004ba730 @ 004ba730  kind=gamemisc  attributed-by=none  size=51 */

undefined4 __cdecl FUN_004ba730(int param_1,int param_2,byte *param_3,int param_4)

{
  if (param_1 <= param_4) {
    if (DAT_00583e74 != (code *)0x0) {
      (*DAT_00583e74)();
    }
    FUN_00468750(param_2,param_3);
    if (DAT_00583e78 != (code *)0x0) {
      (*DAT_00583e78)();
    }
  }
  return 0;
}


/* FUN_004ba7d0 @ 004ba7d0  kind=gamemisc  attributed-by=none  size=1208 */

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


/* FUN_004bac90 @ 004bac90  kind=gamemisc  attributed-by=none  size=266 */

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


/* FUN_004bb020 @ 004bb020  kind=gamemisc  attributed-by=none  size=133 */

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


/* FUN_004bb0b0 @ 004bb0b0  kind=gamemisc  attributed-by=none  size=72 */

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


/* FUN_004bb100 @ 004bb100  kind=gamemisc  attributed-by=none  size=161 */

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


/* FUN_004bb1b0 @ 004bb1b0  kind=gamemisc  attributed-by=none  size=138 */

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


/* FUN_004bb240 @ 004bb240  kind=gamemisc  attributed-by=none  size=922 */

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


/* FUN_004bb5da @ 004bb5da  kind=gamemisc  attributed-by=none  size=2138 */

undefined4 * __fastcall FUN_004bb5da(int param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  double *pdVar15;
  int *piVar16;
  int unaff_EDI;
  int iVar17;
  undefined4 *puVar18;
  double dVar19;
  double in_XMM1_Qa;
  double in_XMM2_Qa;
  double in_XMM3_Qa;
  undefined8 uVar20;
  
  do {
    uVar6 = (uint)((*(byte *)(unaff_EDI + 0x20) & 10) != 0);
    *(uint *)(unaff_EBP + -0x40) = uVar6;
    if ((unaff_EBX != param_1) && (uVar6 != 0)) goto LAB_004bb801;
    piVar9 = *(int **)(unaff_EBP + -0x38);
    uVar6 = 0;
    iVar8 = *piVar9;
    if (0 < iVar8) {
      do {
        piVar9 = piVar9 + 1;
        if (*piVar9 == *(int *)(unaff_EDI + 0x2c)) {
          uVar7 = 1 << (uVar6 & 0x1f);
          uVar12 = 0;
          if (0x1f < uVar6) {
            uVar12 = uVar7;
          }
          uVar7 = uVar7 ^ uVar12;
          if (0x3f < uVar6) {
            uVar12 = uVar7;
          }
          goto LAB_004bb633;
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < iVar8);
    }
    *(undefined8 *)(unaff_EBP + -0xd0) = 0;
    uVar7 = *(uint *)(unaff_EBP + -0xd0);
    uVar12 = *(uint *)(unaff_EBP + -0xcc);
LAB_004bb633:
    if ((uVar7 & *(uint *)(unaff_EBP + -0xa8)) == 0 && (uVar12 & *(uint *)(unaff_EBP + -0xa4)) == 0)
    {
      param_1 = *(int *)(unaff_EBP + -8);
      param_2 = *(uint *)(unaff_EBP + -0x2c);
      if (unaff_EBX == param_1) {
        param_1 = param_1 + 1;
        *(int *)(unaff_EBP + -8) = param_1;
      }
    }
    else {
      if (*(int *)(unaff_EBP + -0x2c) == 0) {
        *(undefined4 *)(unaff_EBP + -0xb0) = *(undefined4 *)(unaff_EBP + -0xa8);
        *(undefined4 *)(unaff_EBP + -0xac) = *(undefined4 *)(unaff_EBP + -0xa4);
      }
      else {
        *(uint *)(unaff_EBP + -0xb0) = uVar7;
        *(uint *)(unaff_EBP + -0xac) = uVar12;
      }
      if (*(int *)(unaff_EDI + 0x44) == 0) {
        *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 1;
      }
      if ((*(byte *)(*(int *)(unaff_EDI + 0x10) + 0x2a) & 0x10) == 0) {
        FUN_0046f990((int *)(unaff_EBP + -0xc0));
        pdVar15 = *(double **)(unaff_EBP + -0x34);
      }
      else {
        pdVar15 = *(double **)(unaff_EBP + -0x34);
        *(double **)(unaff_EBP + -0x98) = pdVar15 + 1;
        FUN_004706c0((int *)(unaff_EBP + -0xc0));
      }
      param_2 = *(uint *)(unaff_EBP + -0x2c);
      if (param_2 == 0) {
        if (*(int *)(unaff_EBP + -0x14) <= *(int *)(unaff_EBP + -8)) goto LAB_004bb6f3;
        dVar19 = *(double *)(unaff_EBP + -0x70) / *pdVar15;
        *(double *)(unaff_EBP + -0x70) = dVar19;
      }
      else {
        *pdVar15 = *(double *)(unaff_EBP + -0x70);
LAB_004bb6f3:
        dVar19 = *(double *)(unaff_EBP + -0x70);
      }
      unaff_EDI = *(int *)(unaff_EBP + -0xb8);
      if ((((*(uint *)(unaff_EBP + -0x68) & *(uint *)(unaff_EBP + -0xa8)) != 0 ||
            (*(uint *)(unaff_EBP + -100) & *(uint *)(unaff_EBP + -0xa4)) != 0) ||
          (((*(int *)(unaff_EBP + -0x28) != 0 && (*(int *)(unaff_EDI + 0x44) != 0)) &&
           ((*(uint *)(unaff_EBP + -0x88) & 0x100f3000) == 0)))) ||
         (((in_XMM1_Qa = *(double *)(unaff_EBP + -0x80), -1 < *(int *)(unaff_EBP + -0x3c) &&
           (*(double *)(unaff_EBP + -200) <= dVar19)) &&
          ((*(double *)(unaff_EBP + -200) < dVar19 ||
           ((*(ushort *)(unaff_EBP + -0x82) <= *(ushort *)(unaff_EBP + -0xf2) &&
            (*(double *)(unaff_EBP + -0x48) <= in_XMM1_Qa)))))))) {
        in_XMM3_Qa = *(double *)(unaff_EBP + -0x50);
        in_XMM2_Qa = *(double *)(unaff_EBP + -0x58);
        in_XMM1_Qa = *(double *)(unaff_EBP + -0x48);
      }
      else {
        in_XMM2_Qa = *(double *)(unaff_EBP + -0x88);
        in_XMM3_Qa = *(double *)(unaff_EBP + -0x78);
        *(double *)(unaff_EBP + -200) = dVar19;
        *(double *)(unaff_EBP + -0x58) = in_XMM2_Qa;
        *(double *)(unaff_EBP + -0xf8) = in_XMM2_Qa;
        *(double *)(unaff_EBP + -0x48) = in_XMM1_Qa;
        *(double *)(unaff_EBP + -0x50) = in_XMM3_Qa;
        *(undefined8 *)(unaff_EBP + -0xd8) = *(undefined8 *)(unaff_EBP + -0x68);
        *(int *)(unaff_EBP + -0x3c) = unaff_EBX;
      }
      param_1 = *(int *)(unaff_EBP + -8);
      if (*(int *)(unaff_EBP + -0x40) != 0) {
        unaff_ESI = *(int *)(unaff_EBP + -0xc);
        goto LAB_004bb801;
      }
    }
    unaff_ESI = *(int *)(unaff_EBP + -0xc);
    *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + -0x34) + 0x58;
    unaff_EBX = unaff_EBX + 1;
    unaff_EDI = unaff_EDI + 0x48;
    *(int *)(unaff_EBP + -0xb8) = unaff_EDI;
    if (unaff_ESI <= unaff_EBX) {
LAB_004bb801:
      do {
        iVar8 = *(int *)(unaff_EBP + -0x3c);
        param_2 = param_2 - 1;
        *(uint *)(unaff_EBP + -0x2c) = param_2;
        if (-1 < (int)param_2) goto LAB_004bb5a1;
        do {
          uVar6 = *(uint *)(unaff_EBP + -0xf8);
          if ((uVar6 & 0x40000000) != 0) {
            *(undefined1 *)(*(int *)(unaff_EBP + -4) + 0xe) = 2;
          }
          pdVar15 = *(double **)(unaff_EBP + -0x1c);
          iVar17 = *(int *)(unaff_EBP + 0xc);
          *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & uVar6;
          *pdVar15 = in_XMM2_Qa;
          pdVar15[1] = in_XMM1_Qa;
          pdVar15[2] = in_XMM3_Qa;
          *(undefined4 *)((int)pdVar15 + 0x1c) = *(undefined4 *)(iVar17 + 0x34 + iVar8 * 0x48);
          if ((uVar6 & 0x200f0000) == 0) {
            *(undefined4 *)(pdVar15 + 4) = 0xffffffff;
          }
          else if ((*(short *)(unaff_EBP + -0x20) == 0) || ((uVar6 & 0x20000000) != 0)) {
            iVar11 = *(int *)(unaff_EBP + 8);
            *(undefined4 *)(pdVar15 + 4) = *(undefined4 *)(iVar11 + 0x48);
            piVar9 = (int *)(iVar11 + 0x48);
            *piVar9 = *piVar9 + 1;
          }
          else {
            *(undefined4 *)(pdVar15 + 4) = *(undefined4 *)(unaff_EBP + 0x20);
          }
          piVar9 = *(int **)(unaff_EBP + -0x38);
          uVar7 = 0;
          iVar11 = *piVar9;
          if (0 < iVar11) {
            do {
              piVar9 = piVar9 + 1;
              if (*piVar9 == *(int *)(iVar17 + 0x34 + iVar8 * 0x48)) {
                uVar12 = 1 << (uVar7 & 0x1f);
                uVar13 = 0;
                if (0x1f < uVar7) {
                  uVar13 = uVar12;
                }
                uVar12 = uVar12 ^ uVar13;
                if (0x3f < uVar7) {
                  uVar13 = uVar12;
                }
                goto LAB_004bb8ae;
              }
              uVar7 = uVar7 + 1;
            } while ((int)uVar7 < iVar11);
          }
          *(undefined8 *)(unaff_EBP + -0x60) = 0;
          uVar12 = *(uint *)(unaff_EBP + -0x60);
          uVar13 = *(uint *)(unaff_EBP + -0x5c);
LAB_004bb8ae:
          *(uint *)(unaff_EBP + -0xa4) = *(uint *)(unaff_EBP + -0xa4) & ~uVar13;
          iVar17 = *(int *)(unaff_EBP + -0x1c);
          *(uint *)(unaff_EBP + -0xa8) = *(uint *)(unaff_EBP + -0xa8) & ~uVar12;
          piVar9 = *(int **)(unaff_EBP + 8);
          *(char *)(iVar17 + 0x34) = (char)*(undefined4 *)(unaff_EBP + -0x3c);
          if (1.0 <= in_XMM1_Qa) {
            *(double *)(piVar9 + 0x6e) = in_XMM1_Qa * *(double *)(piVar9 + 0x6e);
          }
          if ((*(int *)(*(int *)(unaff_EBP + 0xc) + 0x4c + iVar8 * 0x48) != 0) &&
             ((uVar6 & 0xf0000) == 0)) {
            FUN_004962b0(piVar9,(byte *)"cannot use index: %s");
LAB_004bb946:
            puVar14 = *(undefined4 **)(unaff_EBP + -4);
            goto LAB_004bb949;
          }
          unaff_ESI = *(int *)(unaff_EBP + -0xc);
          iVar8 = *(int *)(unaff_EBP + -0x94) + 1;
          *(int *)(unaff_EBP + -0x94) = iVar8;
          *(int *)(unaff_EBP + -0x1c) = iVar17 + 0x58;
          if (unaff_ESI <= iVar8) {
            uVar6 = *(uint *)(unaff_EBP + -0x24);
            piVar9 = *(int **)(unaff_EBP + 8);
            if ((piVar9[0x11] != 0) || (*(char *)(*(int *)(unaff_EBP + -0x18) + 0x38) != '\0'))
            goto LAB_004bb946;
            iVar8 = *(int *)(unaff_EBP + -4);
            if (unaff_ESI == 0) {
              uVar5 = 0;
            }
            else {
              uVar5 = *(undefined2 *)(iVar17 + 6);
            }
            *(undefined2 *)(iVar8 + 8) = uVar5;
            uVar6 = uVar6 & 0x2000000;
            if ((uVar6 != 0) && (*(undefined2 **)(unaff_EBP + 0x14) != (undefined2 *)0x0)) {
              *(undefined2 *)(iVar8 + 8) = **(undefined2 **)(unaff_EBP + 0x14);
            }
            if (((*(byte *)(unaff_EBP + 0x1c) & 4) != 0) && (uVar6 != 0)) {
              *(undefined1 *)(iVar8 + 0xc) = 1;
              *(uint *)(iVar8 + 0x38) = *(uint *)(iVar8 + 0x38) & 0xffbfffff;
            }
            piVar10 = (int *)piVar9[0x6c];
            piVar16 = piVar9;
            if ((piVar10 != (int *)0x0) && (piVar16 = piVar10, piVar10 != piVar9)) {
              piVar9[0x57] = -1;
            }
            if (piVar16[0x57] == 0) {
              piVar9 = (int *)piVar16[2];
              if (piVar9 == (int *)0x0) {
                piVar9 = FUN_004af150(*piVar16);
                piVar16[2] = (int)piVar9;
                if (piVar9 == (int *)0x0) goto LAB_004bba24;
                FUN_004ae760(piVar9,0x94);
              }
              iVar8 = FUN_004ae830(piVar9,1,0,0);
              piVar16[0x57] = iVar8 + 1;
            }
LAB_004bba24:
            puVar14 = *(undefined4 **)(unaff_EBP + -4);
            iVar8 = *(int *)(unaff_EBP + -0xc);
            *(undefined4 *)(unaff_EBP + -0x24) = 0xffffffff;
            *(undefined4 *)(unaff_EBP + -0x1c) = 0xffffffff;
            *(undefined8 *)(puVar14 + 0xc) = 0x3ff0000000000000;
            if (iVar8 < 1) goto LAB_004bbda3;
            *(int *)(unaff_EBP + -0x28) = iVar8;
            puVar18 = puVar14 + 0xe;
            goto LAB_004bba53;
          }
          param_1 = *(int *)(unaff_EBP + -8);
          iVar8 = -1;
          param_2 = (uint)(param_1 < *(int *)(unaff_EBP + -0x14));
          in_XMM1_Qa = 0.0;
          *(undefined4 *)(unaff_EBP + -0x3c) = 0xffffffff;
          *(undefined8 *)(unaff_EBP + -0x58) = 0;
          *(undefined8 *)(unaff_EBP + -0xf8) = 0;
          *(undefined8 *)(unaff_EBP + -0x48) = 0;
          *(undefined8 *)(unaff_EBP + -0x50) = 0;
          *(undefined8 *)(unaff_EBP + -0xe0) = 0;
          *(undefined8 *)(unaff_EBP + -0xd8) = 0;
          *(undefined8 *)(unaff_EBP + -200) = 0x547d42aea2879f2e;
          *(undefined4 *)(unaff_EBP + -0x28) = 0;
          *(uint *)(unaff_EBP + -0x2c) = param_2;
          in_XMM3_Qa = in_XMM1_Qa;
          in_XMM2_Qa = in_XMM1_Qa;
LAB_004bb5a1:
        } while (-1 < iVar8);
        unaff_EDI = *(int *)(unaff_EBP + 0xc) + param_1 * 0x48 + 8;
        *(int *)(unaff_EBP + -0xb8) = unaff_EDI;
      } while (unaff_ESI <= param_1);
      param_2 = *(uint *)(unaff_EBP + -0x2c);
      *(int *)(unaff_EBP + -0x34) = param_1 * 0x58 + *(int *)(unaff_EBP + -4) + 0x80;
      unaff_EBX = param_1;
    }
  } while( true );
LAB_004bba53:
  iVar8 = (uint)*(byte *)(puVar18 + 0xd) * 9 + 1;
  iVar17 = -1000000;
  piVar9 = *(int **)(*(int *)(unaff_EBP + 0xc) + 0x10 + iVar8 * 8);
  uVar6 = *(int *)(unaff_EBP + 0xc) + iVar8 * 8;
  *(double *)(puVar14 + 0xc) = *(double *)(puVar18 + 2) * *(double *)(puVar14 + 0xc);
  iVar8 = piVar9[0x10];
  *(uint *)(unaff_EBP + -8) = uVar6;
  if (iVar8 != 0) {
    iVar17 = 0;
    iVar11 = *(int *)(*(int *)(unaff_EBP + -0x18) + 0x14);
    if (0 < iVar11) {
      piVar10 = (int *)(*(int *)(*(int *)(unaff_EBP + -0x18) + 0x10) + 0xc);
      do {
        if (*piVar10 == iVar8) break;
        iVar17 = iVar17 + 1;
        piVar10 = piVar10 + 4;
      } while (iVar17 < iVar11);
    }
  }
  if (((*(byte *)((int)piVar9 + 0x2a) & 2) != 0) || (piVar9[3] != 0)) goto LAB_004bbb97;
  if ((**(uint **)(unaff_EBP + -0x30) & 0x8000000) == 0) {
    if ((*(byte *)((int)piVar9 + 0x2a) & 0x10) != 0) goto LAB_004bbb97;
    if (((**(uint **)(unaff_EBP + -0x30) & 0x400000) == 0) &&
       ((*(byte *)(unaff_EBP + 0x1c) & 0x10) == 0)) {
      FUN_004a0f40(*(int **)(unaff_EBP + 8),*(undefined4 *)(uVar6 + 0x2c),iVar17,piVar9,
                   (*(char *)(*(int *)(unaff_EBP + -4) + 0xc) != '\0') + 0x27);
      if ((*(char *)(*(int *)(unaff_EBP + -4) + 0xc) == '\0') &&
         (*(short *)((int)piVar9 + 0x26) < 0x40)) {
        uVar7 = *(uint *)(uVar6 + 0x38);
        uVar12 = *(uint *)(uVar6 + 0x3c);
        piVar9 = (int *)0x0;
        if (uVar7 != 0 || uVar12 != 0) {
          do {
            uVar7 = uVar7 >> 1 | uVar12 << 0x1f;
            uVar12 = uVar12 >> 1;
            piVar9 = (int *)((int)piVar9 + 1);
          } while (uVar7 != 0 || uVar12 != 0);
        }
        FUN_004aecc0(*(int **)(unaff_EBP + -0x10),(*(int **)(unaff_EBP + -0x10))[7] + -1,piVar9,
                     0xfffffff2);
      }
      goto LAB_004bbb97;
    }
    piVar10 = *(int **)(unaff_EBP + 8);
    FUN_004aab20(piVar10,iVar17,piVar9[8],'\0',*piVar9);
  }
  else {
    piVar9 = (int *)piVar9[0xe];
    if (piVar9 != (int *)0x0) {
      do {
        if (*piVar9 == *(int *)(unaff_EBP + -0x18)) break;
        piVar9 = (int *)piVar9[6];
      } while (piVar9 != (int *)0x0);
    }
    *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(uVar6 + 0x2c);
    piVar10 = *(int **)(unaff_EBP + -0x10);
    iVar8 = piVar10[7];
    if (iVar8 < piVar10[8]) {
LAB_004bbb13:
      piVar10[7] = piVar10[7] + 1;
      iVar11 = piVar10[1];
      uVar4 = *(undefined4 *)(unaff_EBP + -0x20);
      *(undefined2 *)(iVar11 + iVar8 * 0x14) = 0x87;
      *(undefined1 *)(iVar11 + 3 + iVar8 * 0x14) = 0;
      *(undefined4 *)(iVar11 + 4 + iVar8 * 0x14) = uVar4;
      *(undefined4 *)(iVar11 + 8 + iVar8 * 0x14) = 0;
      *(undefined4 *)(iVar11 + 0xc + iVar8 * 0x14) = 0;
      *(undefined4 *)(iVar11 + 0x10 + iVar8 * 0x14) = 0;
    }
    else {
      iVar11 = FUN_0047de10(piVar10);
      if (iVar11 == 0) {
        piVar10 = *(int **)(unaff_EBP + -0x10);
        goto LAB_004bbb13;
      }
      iVar8 = 1;
    }
    piVar10 = *(int **)(unaff_EBP + -0x10);
    iVar11 = *piVar10;
    if ((piVar10[1] != 0) && (*(char *)(iVar11 + 0x38) == '\0')) {
      if (iVar8 < 0) {
        iVar8 = piVar10[7] + -1;
      }
      iVar1 = piVar10[1];
      *(int *)(unaff_EBP + -0x40) = iVar8 * 5;
      FUN_0047bc80(iVar11,(int)*(char *)(iVar1 + 1 + iVar8 * 0x14),
                   *(int **)(iVar1 + 0x10 + iVar8 * 0x14));
      iVar8 = *(int *)(unaff_EBP + -0x40);
      *(undefined4 *)(iVar1 + 0x10 + iVar8 * 4) = 0;
      if (piVar9 == (int *)0x0) {
        *(undefined4 *)(iVar1 + 0x10 + iVar8 * 4) = 0;
        *(undefined1 *)(iVar1 + 1 + iVar8 * 4) = 0;
      }
      else {
        *(int **)(iVar1 + 0x10 + iVar8 * 4) = piVar9;
        *(undefined1 *)(iVar1 + 1 + iVar8 * 4) = 0xf6;
        piVar9[3] = piVar9[3] + 1;
      }
    }
    uVar6 = *(uint *)(unaff_EBP + -8);
LAB_004bbb97:
    piVar10 = *(int **)(unaff_EBP + 8);
  }
  puVar2 = *(uint **)(unaff_EBP + -0x30);
  if ((*puVar2 & 0x20000000) == 0) {
    if ((*puVar2 & 0xf0000) != 0) {
      uVar6 = puVar2[4];
      piVar9 = FUN_0049dbf0(*(int **)(unaff_EBP + 8),uVar6);
      *(int **)(unaff_EBP + -0x14) = piVar9;
      uVar4 = *(undefined4 *)(*(int *)(unaff_EBP + -0x30) + 0x20);
      *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(uVar6 + 0x28);
      piVar9 = *(int **)(unaff_EBP + -0x10);
      iVar8 = piVar9[7];
      if (iVar8 < piVar9[8]) {
LAB_004bbcaf:
        piVar9[7] = piVar9[7] + 1;
        iVar11 = piVar9[1];
        uVar3 = *(undefined4 *)(unaff_EBP + -0x20);
        *(undefined2 *)(iVar11 + iVar8 * 0x14) = 0x27;
        *(undefined1 *)(iVar11 + 3 + iVar8 * 0x14) = 0;
        *(undefined4 *)(iVar11 + 4 + iVar8 * 0x14) = uVar4;
        *(undefined4 *)(iVar11 + 8 + iVar8 * 0x14) = uVar3;
        *(int *)(iVar11 + 0xc + iVar8 * 0x14) = iVar17;
        *(undefined4 *)(iVar11 + 0x10 + iVar8 * 0x14) = 0;
      }
      else {
        iVar11 = FUN_0047de10(piVar9);
        if (iVar11 == 0) {
          piVar9 = *(int **)(unaff_EBP + -0x10);
          goto LAB_004bbcaf;
        }
        iVar8 = 1;
      }
      piVar9 = *(int **)(unaff_EBP + -0x10);
      iVar11 = piVar9[1];
      iVar1 = *piVar9;
      if ((iVar11 == 0) || (*(char *)(iVar1 + 0x38) != '\0')) {
        FUN_0047bc80(iVar1,0xfffffff0,*(int **)(unaff_EBP + -0x14));
      }
      else {
        if (iVar8 < 0) {
          iVar8 = piVar9[7] + -1;
        }
        FUN_0047bc80(iVar1,(int)*(char *)(iVar11 + 1 + iVar8 * 0x14),
                     *(int **)(iVar11 + 0x10 + iVar8 * 0x14));
        iVar1 = *(int *)(unaff_EBP + -0x14);
        *(undefined4 *)(iVar11 + 0x10 + iVar8 * 0x14) = 0;
        if (iVar1 == 0) {
          *(undefined4 *)(iVar11 + 0x10 + iVar8 * 0x14) = 0;
          *(undefined1 *)(iVar11 + 1 + iVar8 * 0x14) = 0;
        }
        else {
          *(int *)(iVar11 + 0x10 + iVar8 * 0x14) = iVar1;
          *(undefined1 *)(iVar11 + 1 + iVar8 * 0x14) = 0xfa;
        }
      }
    }
  }
  else {
    FUN_004757f0(piVar10,*(int *)(unaff_EBP + -0xbc),uVar6,*(uint *)(unaff_EBP + -0x24),
                 *(uint *)(unaff_EBP + -0x1c),puVar2);
  }
  FUN_00493400(*(int **)(unaff_EBP + 8),iVar17);
  piVar9 = *(int **)(*(int *)(unaff_EBP + -0xbc) + 4);
  uVar6 = 0;
  iVar8 = *piVar9;
  if (0 < iVar8) {
    do {
      piVar9 = piVar9 + 1;
      if (*piVar9 == *(int *)(*(int *)(unaff_EBP + -8) + 0x2c)) {
        uVar7 = 1 << (uVar6 & 0x1f);
        uVar12 = 0;
        if (0x1f < uVar6) {
          uVar12 = uVar7;
        }
        uVar7 = uVar7 ^ uVar12;
        if (0x3f < uVar6) {
          uVar12 = uVar7;
        }
        goto LAB_004bbd81;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar8);
  }
  *(undefined8 *)(unaff_EBP + -0x60) = 0;
  uVar7 = *(uint *)(unaff_EBP + -0x60);
  uVar12 = *(uint *)(unaff_EBP + -0x5c);
LAB_004bbd81:
  *(uint *)(unaff_EBP + -0x1c) = *(uint *)(unaff_EBP + -0x1c) & ~uVar12;
  puVar14 = *(undefined4 **)(unaff_EBP + -4);
  *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & ~uVar7;
  puVar18 = (undefined4 *)(*(int *)(unaff_EBP + -0x30) + 0x58);
  piVar9 = (int *)(unaff_EBP + -0x28);
  *piVar9 = *piVar9 + -1;
  *(undefined4 **)(unaff_EBP + -0x30) = puVar18;
  if (*piVar9 == 0) {
    iVar8 = *(int *)(unaff_EBP + -0xc);
LAB_004bbda3:
    puVar14[4] = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x1c);
    if (*(char *)(*(int *)(unaff_EBP + -0x18) + 0x38) == '\0') {
      uVar6 = 0xffffffff;
      iVar17 = 0;
      *(undefined4 *)(unaff_EBP + -0x14) = 0xffffffff;
      if (0 < iVar8) {
        puVar18 = puVar14 + 0x19;
        do {
          FUN_004778d0(*(int **)(unaff_EBP + 8),*(int *)(unaff_EBP + 0xc),puVar18 + -0xb,iVar17,
                       (uint)*(byte *)(puVar18 + 2),(ushort)*(undefined4 *)(unaff_EBP + 0x1c));
          uVar20 = FUN_004738d0(*(undefined4 **)(unaff_EBP + -4),iVar17,
                                (ushort)*(undefined4 *)(unaff_EBP + 0x1c),uVar6,
                                *(uint *)(unaff_EBP + -0x14));
          uVar6 = (uint)uVar20;
          uVar4 = *puVar18;
          *(int *)(unaff_EBP + -0x14) = (int)((ulonglong)uVar20 >> 0x20);
          puVar14 = *(undefined4 **)(unaff_EBP + -4);
          iVar17 = iVar17 + 1;
          puVar14[5] = uVar4;
          puVar18 = puVar18 + 0x16;
        } while (iVar17 < *(int *)(unaff_EBP + -0xc));
      }
      return puVar14;
    }
LAB_004bb949:
    iVar8 = *(int *)(unaff_EBP + -0x18);
    *(undefined8 *)(*(int *)(unaff_EBP + 8) + 0x1b8) = *(undefined8 *)(puVar14 + 10);
    FUN_004c2070(iVar8,puVar14);
    return (undefined4 *)0x0;
  }
  goto LAB_004bba53;
}


/* FUN_004bbe40 @ 004bbe40  kind=gamemisc  attributed-by=none  size=1502 */

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


/* FUN_004bc420 @ 004bc420  kind=gamemisc  attributed-by=none  size=25 */

void __cdecl FUN_004bc420(int *param_1,byte *param_2)

{
  FUN_004ad370(param_1,1,param_2,(double *)&stack0x0000000c);
  return;
}


/* FUN_004bc720 @ 004bc720  kind=gamemisc  attributed-by=none  size=129 */

undefined4 __cdecl FUN_004bc720(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b18)(*(int *)(param_1 + 0xc));
  }
  FUN_0048fca0(param_1);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 4 + iVar2);
      if ((iVar1 != 0) &&
         (iVar1 = *(int *)(*(int *)(**(int **)(iVar1 + 4) + 0xb4) + 0x28), iVar1 != 0)) {
        (*DAT_00582b5c)(iVar1);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0x14));
  }
  FUN_00490780(param_1);
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(param_1 + 0xc));
  }
  return 0;
}


/* FUN_004bcb50 @ 004bcb50  kind=gamemisc  attributed-by=none  size=106 */

uint __cdecl FUN_004bcb50(int *param_1,char *param_2,char *param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1[3] != 0) {
    (*DAT_00582b18)(param_1[3]);
  }
  uVar2 = FUN_0049fde0(param_1,param_2,param_3,param_4);
  if (((char)param_1[0xe] != '\0') || (uVar2 == 0xc0a)) {
    FUN_004961f0((int)param_1,7,(byte *)0x0);
    *(undefined1 *)(param_1 + 0xe) = 0;
    uVar2 = 7;
  }
  uVar1 = param_1[0xc];
  if (param_1[3] != 0) {
    (*DAT_00582b20)(param_1[3]);
  }
  return uVar1 & uVar2;
}


/* FUN_004bcc60 @ 004bcc60  kind=gamemisc  attributed-by=none  size=70 */

int __cdecl FUN_004bcc60(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  
  bVar2 = *param_1;
  while ((bVar2 != 0 && ((&DAT_00569620)[bVar2] == (&DAT_00569620)[*param_2]))) {
    pbVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    bVar2 = *pbVar1;
  }
  return (uint)(byte)(&DAT_00569620)[*param_1] - (uint)(byte)(&DAT_00569620)[*param_2];
}


/* FUN_004bccb0 @ 004bccb0  kind=gamemisc  attributed-by=none  size=162 */

byte * __cdecl FUN_004bccb0(char *param_1,byte *param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  char *pcVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  bool bVar10;
  
  if (param_1 == (char *)0x0) {
    return (byte *)0x0;
  }
  cVar1 = *param_1;
  pcVar5 = param_1;
  while (cVar1 != '\0') {
    pcVar5 = pcVar5 + 1;
    cVar1 = *pcVar5;
  }
  pbVar9 = (byte *)(param_1 + ((int)pcVar5 - (int)param_1 & 0x3fffffffU) + 1);
  bVar2 = *pbVar9;
  do {
    pbVar6 = pbVar9;
    pbVar7 = param_2;
    if (bVar2 == 0) {
      return (byte *)0x0;
    }
    do {
      bVar3 = *pbVar6;
      bVar10 = bVar3 < *pbVar7;
      pbVar4 = pbVar9;
      if (bVar3 != *pbVar7) {
LAB_004bcd07:
        uVar8 = -(uint)bVar10 | 1;
        goto joined_r0x004bcd10;
      }
      if (bVar3 == 0) break;
      bVar3 = pbVar6[1];
      bVar10 = bVar3 < pbVar7[1];
      if (bVar3 != pbVar7[1]) goto LAB_004bcd07;
      pbVar6 = pbVar6 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar3 != 0);
    uVar8 = 0;
joined_r0x004bcd10:
    while (bVar2 != 0) {
      bVar2 = pbVar4[1];
      pbVar4 = pbVar4 + 1;
    }
    pbVar9 = pbVar9 + ((int)pbVar4 - (int)pbVar9 & 0x3fffffffU) + 1;
    if (uVar8 == 0) {
      return pbVar9;
    }
    uVar8 = 0;
    if (pbVar9 != (byte *)0x0) {
      bVar2 = *pbVar9;
      pbVar6 = pbVar9;
      while (bVar2 != 0) {
        pbVar6 = pbVar6 + 1;
        bVar2 = *pbVar6;
      }
      uVar8 = (int)pbVar6 - (int)pbVar9 & 0x3fffffff;
    }
    pbVar9 = pbVar9 + uVar8 + 1;
    bVar2 = *pbVar9;
  } while( true );
}


/* FUN_004bcd60 @ 004bcd60  kind=gamemisc  attributed-by=none  size=48 */

void * __cdecl FUN_004bcd60(undefined4 param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = FUN_00480740(param_1);
  if (pvVar1 == (void *)0x0) {
    return (void *)0x0;
  }
  pvVar2 = FUN_004bdc10(pvVar1);
  FUN_00466dd0((int)pvVar1);
  return pvVar2;
}


/* FUN_004bcd90 @ 004bcd90  kind=gamemisc  attributed-by=none  size=31 */

void __cdecl FUN_004bcd90(int *param_1)

{
  FUN_004962b0(param_1,(byte *)"authorizer malfunction");
  param_1[3] = 1;
  return;
}


/* FUN_004bcdb0 @ 004bcdb0  kind=gamemisc  attributed-by=none  size=99 */

undefined4 __cdecl FUN_004bcdb0(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0xc) {
    uVar2 = (uint)(byte)(&DAT_005699f8)[param_2];
    uVar1 = (uint)(byte)(&DAT_00569a04)[param_2];
  }
  else {
    uVar2 = 100;
    uVar1 = param_2 * 100 - 0x368;
  }
  if ((param_1[0x77] < (int)(uVar1 + uVar2)) && (uVar2 = param_1[0x77] - uVar1, (int)uVar2 < 1)) {
    return 0;
  }
  (**(code **)(*param_1 + 0x3c))(*param_1,uVar2 * 1000);
  return 1;
}


/* FUN_004bcf20 @ 004bcf20  kind=gamemisc  attributed-by=none  size=515 */

undefined4 __cdecl FUN_004bcf20(int *param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  char *pcVar3;
  short *psVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  int *local_20;
  short *local_1c;
  int local_18;
  int *local_14;
  int *local_10;
  uint local_c;
  int local_8;
  
  psVar4 = *(short **)(param_2 + 0x28);
  local_8 = 0;
  if (0 < *psVar4 + -1) {
    piVar7 = (int *)(psVar4 + 0x40);
    local_10 = (int *)(psVar4 + 0xc);
    local_1c = psVar4;
    do {
      local_18 = piVar7[-8];
      if ((*local_10 != 0) && (local_18 != 0)) {
        local_c = *(byte *)(piVar7 + -4) >> 5 & 1;
        local_20 = piVar7;
        if ((*(byte *)(piVar7 + -4) & 4) != 0) {
          if ((*piVar7 != 0) || (piVar7[1] != 0)) {
            pcVar3 = "a NATURAL join may not have an ON or USING clause";
LAB_004bd0df:
            FUN_004962b0(param_1,(byte *)pcVar3);
            return 1;
          }
          uVar5 = 0;
          if (0 < *(short *)(local_18 + 0x26)) {
            local_14 = (int *)(local_8 + 1);
            iVar6 = 0;
            do {
              iVar2 = FUN_004bd8f0((int)psVar4,(int)local_14,
                                   *(byte **)(iVar6 + *(int *)(local_18 + 4)),&local_28,
                                   (int *)&local_24);
              if (iVar2 != 0) {
                FUN_0046b9f0(param_1,(int)psVar4,local_28,local_24,(int)local_14,uVar5,local_c,
                             (undefined4 *)(param_2 + 0x2c));
              }
              uVar5 = uVar5 + 1;
              iVar6 = iVar6 + 0x18;
            } while ((int)uVar5 < (int)*(short *)(local_18 + 0x26));
          }
        }
        piVar7 = local_20;
        if (*local_20 != 0) {
          if (local_20[1] != 0) {
            FUN_004962b0(param_1,(byte *)"cannot have both ON and USING clauses in the same join");
            return 1;
          }
          if (local_c != 0) {
            FUN_0048b500(*local_20,local_20[-1]);
          }
          pcVar3 = FUN_004966d0(*param_1,*(char **)(param_2 + 0x2c),(char *)*piVar7);
          *(char **)(param_2 + 0x2c) = pcVar3;
          *piVar7 = 0;
        }
        local_14 = (int *)piVar7[1];
        if ((local_14 != (int *)0x0) && (iVar6 = 0, 0 < local_14[1])) {
          do {
            pbVar1 = *(byte **)(*local_14 + iVar6 * 8);
            local_20 = (int *)FUN_00474f60(local_18,pbVar1);
            if (((int)local_20 < 0) ||
               (iVar2 = FUN_004bd8f0((int)local_1c,local_8 + 1,pbVar1,&local_30,(int *)&local_2c),
               psVar4 = local_1c, iVar2 == 0)) {
              pcVar3 = "cannot join using column %s - column not present in both tables";
              goto LAB_004bd0df;
            }
            FUN_0046b9f0(param_1,(int)local_1c,local_30,local_2c,local_8 + 1,(uint)local_20,local_c,
                         (undefined4 *)(param_2 + 0x2c));
            iVar6 = iVar6 + 1;
          } while (iVar6 < local_14[1]);
        }
      }
      local_10 = local_10 + 0x12;
      local_8 = local_8 + 1;
      piVar7 = piVar7 + 0x12;
    } while (local_8 < *psVar4 + -1);
  }
  return 0;
}


/* FUN_004bd130 @ 004bd130  kind=gamemisc  attributed-by=none  size=213 */

void __cdecl FUN_004bd130(int param_1,int param_2)

{
  ushort *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar4 = param_1;
  iVar2 = *(int *)(param_2 * 0x10 + 0xc + *(int *)(param_1 + 0x10));
  if ((*(byte *)(iVar2 + 0x4e) & 2) != 0) {
    for (puVar3 = *(undefined4 **)(iVar2 + 0x10); puVar3 != (undefined4 *)0x0;
        puVar3 = (undefined4 *)*puVar3) {
      iVar2 = puVar3[2];
      if (*(int *)(iVar2 + 0xc) != 0) {
        puVar5 = *(undefined4 **)(iVar2 + 4);
        if (puVar5 != (undefined4 *)0x0) {
          param_1 = 0;
          if (0 < *(short *)(iVar2 + 0x26)) {
            do {
              FUN_00494b00(iVar4,(undefined4 *)*puVar5);
              FUN_00498790(iVar4,(undefined4 *)puVar5[1]);
              FUN_00494b00(iVar4,(undefined4 *)puVar5[2]);
              FUN_00494b00(iVar4,(undefined4 *)puVar5[3]);
              FUN_00494b00(iVar4,(undefined4 *)puVar5[4]);
              param_1 = param_1 + 1;
              puVar5 = puVar5 + 6;
            } while (param_1 < *(short *)(iVar2 + 0x26));
          }
          FUN_00494b00(iVar4,*(undefined4 **)(iVar2 + 4));
        }
        *(undefined4 *)(iVar2 + 4) = 0;
        *(undefined2 *)(iVar2 + 0x26) = 0;
      }
    }
    puVar1 = (ushort *)(*(int *)(param_2 * 0x10 + 0xc + *(int *)(iVar4 + 0x10)) + 0x4e);
    *puVar1 = *puVar1 & 0xfffd;
  }
  return;
}


/* FUN_004bd250 @ 004bd250  kind=gamemisc  attributed-by=none  size=253 */

undefined4 __cdecl FUN_004bd250(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  piVar1 = (int *)(param_1 + 0x10);
  uVar2 = *(uint *)(param_1 + 0x14);
  iVar3 = *(int *)(*piVar1 + 0x60);
  param_1 = 0;
  if (0 < iVar3) {
    puVar8 = (undefined4 *)(*(int *)(*piVar1 + 0x5c) + 0x10);
    do {
      if (uVar2 <= (uint)puVar8[1]) {
        puVar4 = (uint *)*puVar8;
        if (((puVar4 == (uint *)0x0) || (*puVar4 < uVar2)) || (uVar2 == 0)) {
          return 1;
        }
        uVar7 = uVar2 - 1;
        uVar6 = puVar4[2];
        while (uVar6 != 0) {
          uVar5 = uVar7 / uVar6;
          uVar7 = uVar7 % uVar6;
          puVar4 = (uint *)puVar4[uVar5 + 3];
          if (puVar4 == (uint *)0x0) {
            return 1;
          }
          uVar6 = puVar4[2];
        }
        if (*puVar4 < 0xfa1) {
          if ((*(byte *)((uVar7 >> 3) + 0xc + (int)puVar4) & (byte)(1 << ((byte)uVar7 & 7))) == 0) {
            return 1;
          }
        }
        else {
          uVar5 = uVar7 % 0x7d;
          uVar6 = puVar4[uVar5 + 3];
          if (uVar6 == 0) {
            return 1;
          }
          while (uVar6 != uVar7 + 1) {
            uVar5 = (uVar5 + 1) % 0x7d;
            uVar6 = puVar4[uVar5 + 3];
            if (uVar6 == 0) {
              return 1;
            }
          }
        }
      }
      param_1 = param_1 + 1;
      puVar8 = puVar8 + 0xc;
    } while (param_1 < iVar3);
  }
  return 0;
}


/* FUN_004bd350 @ 004bd350  kind=gamemisc  attributed-by=none  size=199 */

void __cdecl FUN_004bd350(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar4 = param_1;
  piVar1 = *(int **)(param_1 + 0x10);
  if (*(char *)((int)piVar1 + 5) != '\x02') {
    iVar5 = FUN_00483b10(piVar1);
    if (iVar5 != 0) {
      return;
    }
    lVar6 = __allmul(piVar1[0xd],0,piVar1[0x20] + 4U,(int)(piVar1[0x20] + 4U) >> 0x1f);
    uVar2 = *(undefined4 *)(iVar4 + 0x14);
    uVar3 = *(undefined4 *)(iVar4 + 4);
    param_1 = CONCAT13((char)uVar2,
                       CONCAT12((char)((uint)uVar2 >> 8),
                                CONCAT11((char)((uint)uVar2 >> 0x10),(char)((uint)uVar2 >> 0x18))));
    iVar5 = (**(code **)(*(int *)piVar1[0x11] + 0xc))((int *)piVar1[0x11],&param_1,4,lVar6);
    if (iVar5 != 0) {
      return;
    }
    iVar5 = (**(code **)(*(int *)piVar1[0x11] + 0xc))
                      ((int *)piVar1[0x11],uVar3,piVar1[0x20],lVar6 + 4);
    if (iVar5 != 0) {
      return;
    }
  }
  piVar1[0xd] = piVar1[0xd] + 1;
  FUN_0046b780((int)piVar1,*(uint *)(iVar4 + 0x14));
  return;
}


/* FUN_004bd420 @ 004bd420  kind=gamemisc  attributed-by=none  size=184 */

char * __cdecl FUN_004bd420(int param_1,char *param_2,int param_3,int param_4)

{
  char *pcVar1;
  
  if (param_2 == (char *)0x0) {
    return (char *)0x0;
  }
  if ((*param_2 == -0x68) && (*(int *)(param_2 + 0x18) == param_3)) {
    if (*(short *)(param_2 + 0x1c) < 0) {
      *param_2 = 'b';
      return param_2;
    }
    pcVar1 = (char *)FUN_00478bb0(param_1,*(undefined4 **)
                                           (*(int *)(param_4 + 8) +
                                           *(short *)(param_2 + 0x1c) * 0x14),0,(int *)0x0);
    FUN_00498790(param_1,(undefined4 *)param_2);
    return pcVar1;
  }
  pcVar1 = FUN_004bd420(param_1,*(char **)(param_2 + 8),param_3,param_4);
  *(char **)(param_2 + 8) = pcVar1;
  pcVar1 = FUN_004bd420(param_1,*(char **)(param_2 + 0xc),param_3,param_4);
  *(char **)(param_2 + 0xc) = pcVar1;
  if ((*(ushort *)(param_2 + 2) & 0x800) != 0) {
    FUN_004bd520(param_1,*(int **)(param_2 + 0x10),param_3,param_4);
    return param_2;
  }
  FUN_004bd4e0(param_1,*(int **)(param_2 + 0x10),param_3,param_4);
  return param_2;
}


/* FUN_004bd4e0 @ 004bd4e0  kind=gamemisc  attributed-by=none  size=63 */

void __cdecl FUN_004bd4e0(int param_1,int *param_2,int param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  if ((param_2 != (int *)0x0) && (iVar2 = 0, 0 < *param_2)) {
    iVar3 = 0;
    do {
      pcVar1 = FUN_004bd420(param_1,*(char **)(iVar3 + param_2[2]),param_3,param_4);
      iVar2 = iVar2 + 1;
      *(char **)(iVar3 + param_2[2]) = pcVar1;
      iVar3 = iVar3 + 0x14;
    } while (iVar2 < *param_2);
  }
  return;
}


/* FUN_004bd520 @ 004bd520  kind=gamemisc  attributed-by=none  size=174 */

void __cdecl FUN_004bd520(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  short *psVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    FUN_004bd4e0(param_1,(int *)*param_2,param_3,param_4);
    FUN_004bd4e0(param_1,(int *)param_2[0xc],param_3,param_4);
    FUN_004bd4e0(param_1,(int *)param_2[0xe],param_3,param_4);
    pcVar1 = FUN_004bd420(param_1,(char *)param_2[0xd],param_3,param_4);
    param_2[0xd] = pcVar1;
    pcVar1 = FUN_004bd420(param_1,(char *)param_2[0xb],param_3,param_4);
    param_2[0xb] = pcVar1;
    FUN_004bd520(param_1,(undefined4 *)param_2[0xf],param_3,param_4);
    psVar3 = (short *)param_2[10];
    if ((psVar3 != (short *)0x0) && (iVar2 = (int)*psVar3, 0 < iVar2)) {
      psVar3 = psVar3 + 0xe;
      do {
        FUN_004bd520(param_1,*(undefined4 **)psVar3,param_3,param_4);
        iVar2 = iVar2 + -1;
        psVar3 = psVar3 + 0x24;
      } while (0 < iVar2);
    }
  }
  return;
}


/* FUN_004bd5d0 @ 004bd5d0  kind=gamemisc  attributed-by=none  size=494 */

void __cdecl FUN_004bd5d0(uint param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [4];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  if ((*(int *)(param_1 + 0xb8) != 0) || (iVar2 = FUN_004854a0(param_1,4), iVar2 == 0)) {
    if (*(char *)(param_1 + 7) == '\0') {
      if ((**(int **)(param_1 + 0x40) == 0) || (*(char *)(param_1 + 5) == '\x04')) {
        *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x48);
        *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x4c);
      }
      else {
        uVar3 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x30))(*(int **)(param_1 + 0x3c));
        if ((uVar3 & 0x200) == 0) {
          local_14 = 0xf905d5d9;
          local_10 = 0xd763a120;
          FUN_004a5f90(local_c,*(undefined4 *)(param_1 + 0x2c));
          lVar5 = FUN_0047f590(param_1);
          iVar2 = (**(code **)(**(int **)(param_1 + 0x40) + 8))
                            (*(int **)(param_1 + 0x40),&local_1c,8,lVar5);
          if ((((iVar2 != 0) ||
               (((local_1c == -0x6fa2a27 && (local_18 == -0x289c5ee0)) &&
                (iVar2 = (**(code **)(**(int **)(param_1 + 0x40) + 0xc))
                                   (*(int **)(param_1 + 0x40),&DAT_005699af,1,lVar5), iVar2 != 0))))
              && (iVar2 != 0x20a)) ||
             ((((*(char *)(param_1 + 8) != '\0' && ((uVar3 & 0x400) == 0)) &&
               (iVar2 = (**(code **)(**(int **)(param_1 + 0x40) + 0x14))
                                  (*(int **)(param_1 + 0x40),*(undefined1 *)(param_1 + 0xb)),
               iVar2 != 0)) ||
              (iVar2 = (**(code **)(**(int **)(param_1 + 0x40) + 0xc))
                                 (*(int **)(param_1 + 0x40),&local_14,0xc,
                                  *(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54)),
              iVar2 != 0)))) goto LAB_004bd7af;
        }
        if ((uVar3 & 0x400) == 0) {
          bVar4 = 0;
          if (*(char *)(param_1 + 0xb) == '\x03') {
            bVar4 = 0x10;
          }
          iVar2 = (**(code **)(**(int **)(param_1 + 0x40) + 0x14))
                            (*(int **)(param_1 + 0x40),bVar4 | *(byte *)(param_1 + 0xb));
          if (iVar2 != 0) goto LAB_004bd7af;
        }
        *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x48);
        *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x4c);
        if ((param_2 != 0) && ((uVar3 & 0x200) == 0)) {
          *(undefined4 *)(param_1 + 0x2c) = 0;
          iVar2 = FUN_004c29f0(param_1);
          if (iVar2 != 0) {
            __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
            return;
          }
        }
      }
    }
    piVar1 = *(int **)(param_1 + 0xb4);
    for (iVar2 = *piVar1; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x20)) {
      *(ushort *)(iVar2 + 0x18) = *(ushort *)(iVar2 + 0x18) & 0xfffb;
    }
    piVar1[2] = piVar1[1];
    *(undefined1 *)(param_1 + 0xf) = 4;
  }
LAB_004bd7af:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004bd7c0 @ 004bd7c0  kind=gamemisc  attributed-by=none  size=276 */

undefined4 __cdecl FUN_004bd7c0(int param_1,undefined8 *param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  int local_c;
  
  pbVar3 = *(byte **)param_2;
  local_c = 0;
  while( true ) {
    bVar1 = (&DAT_005699ac)[local_c];
    if (pbVar3 == (byte *)0x0) {
      iVar7 = *(int *)(param_1 + 8);
    }
    else {
      bVar2 = *pbVar3;
      pbVar5 = pbVar3;
      while (bVar2 != 0) {
        pbVar5 = pbVar5 + 1;
        bVar2 = *pbVar5;
      }
      uVar6 = (int)pbVar5 - (int)pbVar3 & 0x3fffffff;
      if (*(int *)(param_1 + 0x1a8) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        pbVar5 = pbVar3;
        uVar9 = uVar6;
        if (uVar6 != 0) {
          do {
            uVar9 = uVar9 - 1;
            uVar10 = uVar10 ^ (uint)(byte)(&DAT_00569620)[*pbVar5] ^ uVar10 * 8;
            pbVar5 = pbVar5 + 1;
          } while (0 < (int)uVar9);
        }
        uVar10 = uVar10 % *(uint *)(param_1 + 0x19c);
      }
      puVar4 = FUN_00479af0(param_1 + 0x19c,pbVar3,uVar6,uVar10);
      if (puVar4 == (undefined4 *)0x0) {
        iVar7 = 0;
      }
      else {
        iVar7 = puVar4[2];
      }
    }
    puVar8 = (undefined8 *)0x0;
    if (iVar7 != 0) {
      puVar8 = (undefined8 *)(iVar7 + (uint)bVar1 * 0x14 + -0x14);
    }
    if (*(int *)((int)puVar8 + 0xc) != 0) break;
    local_c = local_c + 1;
    if (2 < local_c) {
      return 1;
    }
  }
  *param_2 = *puVar8;
  param_2[1] = puVar8[1];
  *(undefined4 *)(param_2 + 2) = 0;
  return 0;
}


/* FUN_004bd8f0 @ 004bd8f0  kind=gamemisc  attributed-by=none  size=193 */

undefined4 __cdecl FUN_004bd8f0(int param_1,int param_2,byte *param_3,int *param_4,int *param_5)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  int iVar8;
  int local_8;
  
  local_8 = 0;
  if (0 < param_2) {
    piVar4 = (int *)(param_1 + 0x18);
    do {
      iVar8 = 0;
      iVar5 = (int)*(short *)(*piVar4 + 0x26);
      if (0 < iVar5) {
        puVar6 = *(undefined4 **)(*piVar4 + 4);
        do {
          pbVar3 = (byte *)*puVar6;
          bVar2 = *pbVar3;
          pbVar7 = param_3;
          while ((bVar2 != 0 && ((&DAT_00569620)[bVar2] == (&DAT_00569620)[*pbVar7]))) {
            pbVar1 = pbVar3 + 1;
            pbVar3 = pbVar3 + 1;
            pbVar7 = pbVar7 + 1;
            bVar2 = *pbVar1;
          }
          if ((&DAT_00569620)[*pbVar3] == (&DAT_00569620)[*pbVar7]) {
            if (-1 < iVar8) {
              if (param_4 != (int *)0x0) {
                *param_4 = local_8;
                *param_5 = iVar8;
              }
              return 1;
            }
            break;
          }
          iVar8 = iVar8 + 1;
          puVar6 = puVar6 + 6;
        } while (iVar8 < iVar5);
      }
      local_8 = local_8 + 1;
      piVar4 = piVar4 + 0x12;
    } while (local_8 < param_2);
  }
  return 0;
}


/* FUN_004bd9c0 @ 004bd9c0  kind=gamemisc  attributed-by=none  size=95 */

undefined4 __cdecl FUN_004bd9c0(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  byte *pbVar6;
  uint uVar7;
  
  pbVar2 = *(byte **)(param_1 + 4);
  uVar7 = 0;
  if (pbVar2 != (byte *)0x0) {
    bVar1 = *pbVar2;
    pbVar6 = pbVar2;
    while (bVar1 != 0) {
      pbVar6 = pbVar6 + 1;
      bVar1 = *pbVar6;
    }
    uVar7 = (int)pbVar6 - (int)pbVar2 & 0x3fffffff;
  }
  puVar5 = (uint *)(*(int *)(param_1 + 0x18) + 8);
  if (*(int *)(*(int *)(param_1 + 0x18) + 0x14) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004bd210(pbVar2,uVar7);
    uVar3 = uVar3 % *puVar5;
  }
  puVar4 = FUN_00479af0((int)puVar5,pbVar2,uVar7,uVar3);
  if (puVar4 == (undefined4 *)0x0) {
    return 0;
  }
  return puVar4[2];
}


/* FUN_004bda20 @ 004bda20  kind=gamemisc  attributed-by=none  size=241 */

short * __cdecl FUN_004bda20(int *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  
  iVar2 = *param_1;
  psVar4 = (short *)FUN_00494b90(iVar2,0x50);
  if (psVar4 == (short *)0x0) {
    return (short *)0x0;
  }
  memset(psVar4,0,0x50);
  psVar4[1] = 1;
  psVar4 = FUN_004a9fc0(iVar2,psVar4,1,(int)*psVar4);
  if (*(char *)(iVar2 + 0x38) != '\0') {
    FUN_004a9cb0(iVar2,psVar4);
    return (short *)0x0;
  }
  sVar1 = *psVar4;
  pcVar5 = FUN_004a0d40(iVar2,(undefined4 *)(param_2 + 0xc));
  *(char **)(psVar4 + sVar1 * 0x24 + -0x1c) = pcVar5;
  pcVar5 = FUN_004a0d40(iVar2,(undefined4 *)0x0);
  *(char **)(psVar4 + sVar1 * 0x24 + -0x1e) = pcVar5;
  iVar2 = *(int *)(*(int *)(param_2 + 4) + 0x14);
  iVar3 = *param_1;
  if (iVar2 != 0) {
    iVar7 = 0;
    if (0 < *(int *)(iVar3 + 0x14)) {
      piVar8 = (int *)(*(int *)(iVar3 + 0x10) + 0xc);
      do {
        if (*piVar8 == iVar2) break;
        iVar7 = iVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (iVar7 < *(int *)(iVar3 + 0x14));
      if ((iVar7 != 0) && (iVar7 < 2)) {
        return psVar4;
      }
    }
    puVar6 = FUN_00494db0(iVar3,*(char **)(*(int *)(iVar3 + 0x10) + iVar7 * 0x10));
    *(undefined4 **)(psVar4 + *psVar4 * 0x24 + -0x1e) = puVar6;
  }
  return psVar4;
}


/* FUN_004bdb20 @ 004bdb20  kind=gamemisc  attributed-by=none  size=83 */

bool __cdecl FUN_004bdb20(int *param_1,int param_2,uint param_3,uint param_4)

{
  bool bVar1;
  undefined3 extraout_var;
  
  if (((param_1[2] == *(int *)(param_2 + 0x2c)) && ((short)param_1[4] == 2)) &&
     ((param_1[6] & param_3) == 0 && (param_1[7] & param_4) == 0)) {
    bVar1 = FUN_0049db30(*param_1,*(char *)(*(int *)(*(int *)(param_2 + 0x10) + 4) + 0x15 +
                                           param_1[3] * 0x18));
    return CONCAT31(extraout_var,bVar1) != 0;
  }
  return false;
}


/* FUN_004bdb80 @ 004bdb80  kind=gamemisc  attributed-by=none  size=129 */

void * __cdecl FUN_004bdb80(undefined4 param_1)

{
  int iVar1;
  size_t _Size;
  void *_Dst;
  
  iVar1 = (*(code *)PTR_AreFileApisANSI_0058356c)();
  _Size = (*(code *)PTR_WideCharToMultiByte_00583824)(iVar1 == 0,0,param_1,0xffffffff,0,0,0,0);
  if (_Size == 0) {
    return (void *)0x0;
  }
  _Dst = (void *)FUN_004a0350(_Size);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,_Size);
    if (_Dst != (void *)0x0) {
      iVar1 = (*(code *)PTR_WideCharToMultiByte_00583824)
                        (iVar1 == 0,0,param_1,0xffffffff,_Dst,_Size,0,0);
      if (iVar1 == 0) {
        FUN_00466dd0((int)_Dst);
        _Dst = (void *)0x0;
      }
      return _Dst;
    }
  }
  return (void *)0x0;
}


/* FUN_004bdc10 @ 004bdc10  kind=gamemisc  attributed-by=none  size=122 */

void * __cdecl FUN_004bdc10(undefined4 param_1)

{
  size_t _Size;
  void *_Dst;
  int iVar1;
  
  _Size = (*(code *)PTR_WideCharToMultiByte_00583824)(0xfde9,0,param_1,0xffffffff,0,0,0,0);
  if (_Size == 0) {
    return (void *)0x0;
  }
  _Dst = (void *)FUN_004a0350(_Size);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,_Size);
    if (_Dst != (void *)0x0) {
      iVar1 = (*(code *)PTR_WideCharToMultiByte_00583824)
                        (0xfde9,0,param_1,0xffffffff,_Dst,_Size,0,0);
      if (iVar1 == 0) {
        FUN_00466dd0((int)_Dst);
        _Dst = (void *)0x0;
      }
      return _Dst;
    }
  }
  return (void *)0x0;
}


/* FUN_004bdc90 @ 004bdc90  kind=gamemisc  attributed-by=none  size=189 */

void __cdecl FUN_004bdc90(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_9c [4];
  int local_8c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  if (DAT_00583f38 == 0) {
    local_9c[0] = 0x94;
    (*(code *)PTR_GetVersionExA_00583704)(local_9c);
    DAT_00583f38 = (local_8c == 2) + 1;
  }
  if (DAT_00583f38 == 2) {
    uVar2 = 0x1fe;
    iVar1 = DAT_00582bb8 + 2;
  }
  else {
    uVar2 = 1;
    iVar1 = DAT_00582bb8 + 2 + (int)*(short *)(param_1 + 0xe);
  }
  iVar1 = FUN_004c28e0((undefined4 *)(param_1 + 8),iVar1,0,uVar2,0);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_GetLastError_005836a4)();
    if (iVar1 != 0x9e) {
      *(int *)(param_1 + 0x14) = iVar1;
      FUN_004c23f0(0x80a,iVar1);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004bdd50 @ 004bdd50  kind=gamemisc  attributed-by=none  size=1586 */

void __cdecl FUN_004bdd50(int *param_1,undefined1 *param_2)

{
  int iVar1;
  int *piVar2;
  byte *pbVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int local_2c;
  int local_28;
  int local_24;
  int *local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_c;
  
  piVar4 = param_1;
  piVar2 = (int *)param_1[2];
  local_18 = 0;
  local_1c = 0;
  *param_2 = 1;
  FUN_00496a90((int)param_1);
  piVar5 = *(int **)(param_2 + 0x20);
  local_28 = 0;
  if (0 < *(int *)(param_2 + 0x24)) {
    do {
      local_24 = 0;
      piVar10 = *(int **)(*piVar5 + 0x10);
      if (piVar10 == (int *)0x0) {
        local_14 = 0;
        local_c = 0;
      }
      else {
        local_14 = *piVar10;
        local_c = param_1[0x10];
        if (param_1[0xf] < local_14) {
          local_c = param_1[0x13] + 1;
          param_1[0x13] = param_1[0x13] + local_14;
          FUN_00497010((int)param_1,piVar10,local_c,1);
        }
        else {
          param_1[0x10] = local_c + local_14;
          param_1[0xf] = param_1[0xf] - local_14;
          FUN_00497010((int)param_1,piVar10,local_c,1);
        }
      }
      if (-1 < piVar5[3]) {
        uVar9 = piVar2[9];
        piVar2[9] = uVar9 + 1;
        if ((uVar9 & uVar9 - 1) == 0) {
          puVar7 = (undefined4 *)piVar2[10];
          iVar11 = *piVar2;
          puVar6 = FUN_00494cf0(iVar11,puVar7,uVar9 * 8 + 4);
          if (puVar6 == (undefined4 *)0x0) {
            FUN_00494b00(iVar11,puVar7);
          }
          piVar2[10] = (int)puVar6;
        }
        if (piVar2[10] != 0) {
          *(undefined4 *)(piVar2[10] + uVar9 * 4) = 0xffffffff;
        }
        local_24 = -1 - uVar9;
        FUN_00473550((int)param_1,piVar5[3],local_24,(int *)0x1,local_c);
      }
      if ((*(byte *)(piVar5[1] + 3) & 8) != 0) {
        puVar7 = (undefined4 *)piVar10[2];
        local_20 = (int *)0x0;
        iVar11 = 0;
        do {
          if (local_14 <= iVar11) {
            if (local_20 == (int *)0x0) {
              local_20 = *(int **)(*param_1 + 8);
            }
            break;
          }
          local_20 = (int *)FUN_004984d0(param_1,(char *)*puVar7);
          iVar11 = iVar11 + 1;
          puVar7 = puVar7 + 5;
        } while (local_20 == (int *)0x0);
        if ((local_18 == 0) && (*(int *)(param_2 + 0x1c) != 0)) {
          param_1[0x13] = param_1[0x13] + 1;
          local_18 = param_1[0x13];
        }
        iVar11 = piVar2[7];
        iVar12 = piVar2[8];
        if (iVar11 < iVar12) {
LAB_004bdf58:
          iVar12 = piVar2[1];
          piVar2[7] = piVar2[7] + 1;
          *(int *)(iVar12 + 4 + iVar11 * 0x14) = local_18;
          *(undefined2 *)(iVar12 + iVar11 * 0x14) = 0x11;
          *(undefined1 *)(iVar12 + 3 + iVar11 * 0x14) = 0;
          *(undefined4 *)(iVar12 + 8 + iVar11 * 0x14) = 0;
          *(undefined4 *)(iVar12 + 0xc + iVar11 * 0x14) = 0;
          *(undefined4 *)(iVar12 + 0x10 + iVar11 * 0x14) = 0;
        }
        else {
          if (iVar12 == 0) {
            iVar12 = 0x33;
          }
          else {
            iVar12 = iVar12 * 2;
          }
          puVar7 = FUN_00494cf0(*piVar2,(undefined4 *)piVar2[1],iVar12 * 0x14);
          if (puVar7 != (undefined4 *)0x0) {
            iVar12 = *piVar2;
            if (((iVar12 == 0) || (puVar7 < *(undefined4 **)(iVar12 + 0x104))) ||
               (*(undefined4 **)(iVar12 + 0x108) <= puVar7)) {
              uVar9 = (*DAT_00582af0._4_4_)(puVar7);
            }
            else {
              uVar9 = (uint)*(ushort *)(iVar12 + 0xe8);
            }
            piVar2[8] = uVar9 / 0x14;
            piVar2[1] = (int)puVar7;
            goto LAB_004bdf58;
          }
          iVar11 = 1;
        }
        iVar12 = *piVar2;
        if ((piVar2[1] == 0) || (*(char *)(iVar12 + 0x38) != '\0')) {
          FUN_0047bc80(iVar12,0xfffffffc,local_20);
        }
        else {
          if (iVar11 < 0) {
            iVar11 = piVar2[7] + -1;
          }
          iVar8 = piVar2[1] + iVar11 * 0x14;
          FUN_0047bc80(iVar12,(int)*(char *)(iVar8 + 1),*(int **)(piVar2[1] + 0x10 + iVar11 * 0x14))
          ;
          *(undefined4 *)(iVar8 + 0x10) = 0;
          if (local_20 == (int *)0x0) {
            *(undefined4 *)(iVar8 + 0x10) = 0;
            *(undefined1 *)(iVar8 + 1) = 0;
          }
          else {
            *(int **)(iVar8 + 0x10) = local_20;
            *(undefined1 *)(iVar8 + 1) = 0xfc;
          }
        }
      }
      piVar10 = (int *)piVar5[1];
      iVar11 = piVar5[2];
      iVar12 = piVar2[7];
      iVar8 = piVar2[8];
      if (iVar12 < iVar8) {
LAB_004be07d:
        iVar8 = piVar2[1];
        piVar2[7] = piVar2[7] + 1;
        *(int *)(iVar8 + 8 + iVar12 * 0x14) = local_c;
        *(undefined2 *)(iVar8 + iVar12 * 0x14) = 0x7b;
        *(undefined1 *)(iVar8 + 3 + iVar12 * 0x14) = 0;
        *(undefined4 *)(iVar8 + 4 + iVar12 * 0x14) = 0;
        *(int *)(iVar8 + 0xc + iVar12 * 0x14) = iVar11;
        *(undefined4 *)(iVar8 + 0x10 + iVar12 * 0x14) = 0;
      }
      else {
        if (iVar8 == 0) {
          iVar8 = 0x33;
        }
        else {
          iVar8 = iVar8 * 2;
        }
        puVar7 = FUN_00494cf0(*piVar2,(undefined4 *)piVar2[1],iVar8 * 0x14);
        if (puVar7 != (undefined4 *)0x0) {
          iVar8 = *piVar2;
          if (((iVar8 == 0) || (puVar7 < *(undefined4 **)(iVar8 + 0x104))) ||
             (*(undefined4 **)(iVar8 + 0x108) <= puVar7)) {
            uVar9 = (*DAT_00582af0._4_4_)(puVar7);
          }
          else {
            uVar9 = (uint)*(ushort *)(iVar8 + 0xe8);
          }
          piVar2[1] = (int)puVar7;
          piVar2[8] = uVar9 / 0x14;
          goto LAB_004be07d;
        }
        iVar12 = 1;
      }
      iVar11 = piVar2[1];
      iVar8 = *piVar2;
      if ((iVar11 == 0) || (*(char *)(iVar8 + 0x38) != '\0')) {
        FUN_0047bc80(iVar8,0xfffffffb,piVar10);
      }
      else {
        if (iVar12 < 0) {
          iVar12 = piVar2[7] + -1;
        }
        iVar1 = iVar11 + iVar12 * 0x14;
        FUN_0047bc80(iVar8,(int)*(char *)(iVar1 + 1),*(int **)(iVar11 + 0x10 + iVar12 * 0x14));
        *(undefined4 *)(iVar1 + 0x10) = 0;
        if (piVar10 == (int *)0x0) {
          *(undefined4 *)(iVar1 + 0x10) = 0;
          *(undefined1 *)(iVar1 + 1) = 0;
        }
        else {
          *(int **)(iVar1 + 0x10) = piVar10;
          *(undefined1 *)(iVar1 + 1) = 0xfb;
        }
      }
      if (piVar2[1] != 0) {
        *(char *)(piVar2[1] + -0x11 + piVar2[7] * 0x14) = (char)local_14;
      }
      iVar11 = local_c + local_14 + -1;
      piVar10 = param_1 + 0x1d;
      iVar12 = 10;
      do {
        iVar8 = *piVar10;
        if ((local_c <= iVar8) && (iVar8 <= iVar11)) {
          if ((char)piVar10[-2] != '\0') {
            if (*(byte *)((int)param_1 + 0x13) < 8) {
              param_1[*(byte *)((int)param_1 + 0x13) + 7] = iVar8;
              *(char *)((int)param_1 + 0x13) = *(char *)((int)param_1 + 0x13) + '\x01';
            }
            *(undefined1 *)(piVar10 + -2) = 0;
          }
          *piVar10 = 0;
        }
        piVar10 = piVar10 + 6;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
      piVar10 = param_1 + 0x1d;
      iVar12 = 10;
      do {
        iVar8 = *piVar10;
        if ((local_c <= iVar8) && (iVar8 <= iVar11)) {
          if ((char)piVar10[-2] != '\0') {
            if (*(byte *)((int)param_1 + 0x13) < 8) {
              param_1[*(byte *)((int)param_1 + 0x13) + 7] = iVar8;
              *(char *)((int)param_1 + 0x13) = *(char *)((int)param_1 + 0x13) + '\x01';
            }
            *(undefined1 *)(piVar10 + -2) = 0;
          }
          *piVar10 = 0;
        }
        piVar10 = piVar10 + 6;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
      if (param_1[0xf] < local_14) {
        param_1[0xf] = local_14;
        param_1[0x10] = local_c;
      }
      if (local_24 != 0) {
        if (piVar2[10] != 0) {
          *(int *)(piVar2[10] - (local_24 * 4 + 4)) = piVar2[7];
        }
        FUN_00496a90((int)param_1);
      }
      local_28 = local_28 + 1;
      piVar5 = piVar5 + 4;
    } while (local_28 < *(int *)(param_2 + 0x24));
    if (local_18 != 0) {
      local_1c = piVar2[7];
      if (((int)local_1c < piVar2[8]) || (iVar11 = FUN_0047de10(piVar2), iVar11 == 0)) {
        piVar2[7] = piVar2[7] + 1;
        iVar11 = piVar2[1];
        *(undefined2 *)(iVar11 + local_1c * 0x14) = 0x1b;
        *(undefined1 *)(iVar11 + 3 + local_1c * 0x14) = 0;
        *(int *)(iVar11 + 4 + local_1c * 0x14) = local_18;
        *(undefined4 *)(iVar11 + 8 + local_1c * 0x14) = 0;
        *(undefined4 *)(iVar11 + 0xc + local_1c * 0x14) = 0;
        *(undefined4 *)(iVar11 + 0x10 + local_1c * 0x14) = 0;
      }
      else {
        local_1c = 1;
      }
    }
  }
  FUN_00496a90((int)param_1);
  param_1 = (int *)0x0;
  if (0 < *(int *)(param_2 + 0x1c)) {
    puVar7 = (undefined4 *)(*(int *)(param_2 + 0x14) + 0x14);
    do {
      iVar11 = puVar7[-1];
      pbVar3 = (byte *)*puVar7;
      if ((pbVar3 == (byte *)0x0) || (*pbVar3 != 0x84)) {
        local_24 = FUN_00497780(piVar4,pbVar3,iVar11);
        if (((local_24 != iVar11) && (piVar5 = (int *)piVar4[2], piVar5 != (int *)0x0)) &&
           ((local_2c = piVar5[7], local_2c < piVar5[8] ||
            (iVar12 = FUN_0047de10(piVar5), iVar12 == 0)))) {
          piVar5[7] = piVar5[7] + 1;
          iVar12 = piVar5[1];
          *(undefined2 *)(iVar12 + local_2c * 0x14) = 0xf;
          goto LAB_004be316;
        }
      }
      else {
        local_24 = *(int *)(pbVar3 + 0x18);
        piVar5 = (int *)piVar4[2];
        local_2c = piVar5[7];
        if ((local_2c < piVar5[8]) || (iVar12 = FUN_0047de10(piVar5), iVar12 == 0)) {
          piVar5[7] = piVar5[7] + 1;
          iVar12 = piVar5[1];
          *(undefined2 *)(iVar12 + local_2c * 0x14) = 0xe;
LAB_004be316:
          *(undefined4 *)(iVar12 + 0x10 + local_2c * 0x14) = 0;
          *(undefined4 *)(iVar12 + 0xc + local_2c * 0x14) = 0;
          *(int *)(iVar12 + 8 + local_2c * 0x14) = iVar11;
          *(int *)(iVar12 + 4 + local_2c * 0x14) = local_24;
          *(undefined1 *)(iVar12 + 3 + local_2c * 0x14) = 0;
        }
      }
      param_1 = (int *)((int)param_1 + 1);
      puVar7 = puVar7 + 6;
    } while ((int)param_1 < *(int *)(param_2 + 0x1c));
  }
  *param_2 = 0;
  FUN_00496a90((int)piVar4);
  if (((local_1c != 0) && (-1 < (int)local_1c)) && (local_1c < (uint)piVar2[7])) {
    *(int *)(piVar2[1] + 8 + local_1c * 0x14) = piVar2[7];
  }
  return;
}


/* FUN_004be390 @ 004be390  kind=gamemisc  attributed-by=none  size=2095 */

void __cdecl
FUN_004be390(int *param_1,undefined4 *param_2,int param_3,int param_4,undefined4 *param_5,
            int param_6,undefined4 param_7,int param_8)

{
  undefined2 *puVar1;
  char cVar2;
  short sVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined1 uVar15;
  uint uVar16;
  char *pcVar17;
  uint uVar18;
  char *pcVar19;
  size_t _Size;
  uint local_28;
  int local_24;
  uint *local_1c;
  byte local_18 [4];
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  piVar5 = (int *)param_1[2];
  iVar6 = *param_1;
  for (piVar4 = *(int **)(param_3 + 0x38); (piVar4 != (int *)0x0 && (*piVar4 != iVar6));
      piVar4 = (int *)piVar4[6]) {
  }
  pcVar17 = "_rowid_";
  do {
    pcVar19 = pcVar17;
    pcVar17 = pcVar19 + 1;
  } while (*pcVar17 != '\0');
  uVar18 = (uint)(pcVar19 + -0x570a67) & 0x3fffffff;
  puVar9 = FUN_00494b90(iVar6,uVar18 + 0x2d);
  if (puVar9 != (undefined4 *)0x0) {
    memset(puVar9,0,uVar18 + 0x2d);
    *(undefined2 *)((int)puVar9 + 0x1e) = 0xffff;
    *(undefined1 *)puVar9 = 0x1a;
    if (uVar18 == 0xffffffff) {
      *(ushort *)((int)puVar9 + 2) = *(ushort *)((int)puVar9 + 2) | 0x400;
      puVar9[1] = 0;
    }
    else {
      puVar9[1] = puVar9 + 0xb;
      if (uVar18 != 0) {
        memcpy(puVar9 + 0xb,&DAT_00570a68,uVar18);
      }
      *(undefined1 *)(uVar18 + puVar9[1]) = 0;
    }
    puVar9[5] = 1;
  }
  iVar7 = *param_1;
  local_1c = FUN_00494b90(iVar7,0xc);
  if (local_1c == (uint *)0x0) {
LAB_004be4d6:
    FUN_00498790(iVar7,puVar9);
    FUN_00499060(iVar7,(int *)local_1c);
    local_1c = (uint *)0x0;
  }
  else {
    local_1c[0] = 0;
    local_1c[1] = 0;
    local_1c[2] = 0;
    puVar10 = FUN_00494b90(iVar7,0x14);
    local_1c[2] = (uint)puVar10;
    if (puVar10 == (undefined4 *)0x0) goto LAB_004be4d6;
    uVar18 = *local_1c;
    *local_1c = uVar18 + 1;
    *(undefined8 *)(puVar10 + uVar18 * 5) = 0;
    *(undefined8 *)(puVar10 + uVar18 * 5 + 2) = 0;
    puVar10[uVar18 * 5 + 4] = 0;
    puVar10[uVar18 * 5] = puVar9;
  }
  if (param_5 != (undefined4 *)0x0) {
    puVar9 = FUN_00478bb0(iVar6,param_5,0,(int *)0x0);
    local_1c = FUN_00498f00(param_1,local_1c,puVar9);
  }
  local_28 = 0;
  if (0 < *(short *)(param_3 + 0x26)) {
    local_24 = 0;
    do {
      iVar7 = *(int *)(param_6 + local_28 * 4);
      if (iVar7 < 0) {
        pcVar17 = *(char **)(local_24 + *(int *)(param_3 + 4));
        if (pcVar17 == (char *)0x0) {
          _Size = 0;
        }
        else {
          cVar2 = *pcVar17;
          pcVar19 = pcVar17;
          while (cVar2 != '\0') {
            pcVar19 = pcVar19 + 1;
            cVar2 = *pcVar19;
          }
          _Size = (int)pcVar19 - (int)pcVar17 & 0x3fffffff;
        }
        puVar9 = FUN_00494b90(iVar6,_Size + 0x2d);
        if (puVar9 != (undefined4 *)0x0) {
          memset(puVar9,0,_Size + 0x2d);
          *(undefined2 *)((int)puVar9 + 0x1e) = 0xffff;
          *(undefined1 *)puVar9 = 0x1a;
          if (_Size == 0xffffffff) {
            *(ushort *)((int)puVar9 + 2) = *(ushort *)((int)puVar9 + 2) | 0x400;
            puVar9[1] = 0;
          }
          else {
            puVar9[1] = puVar9 + 0xb;
            if (_Size != 0) {
              memcpy(puVar9 + 0xb,pcVar17,_Size);
            }
            *(undefined1 *)(_Size + puVar9[1]) = 0;
          }
          puVar9[5] = 1;
        }
      }
      else {
        puVar9 = FUN_00478bb0(iVar6,*(undefined4 **)(*(int *)(param_4 + 8) + iVar7 * 0x14),0,
                              (int *)0x0);
      }
      local_1c = FUN_00498f00(param_1,local_1c,puVar9);
      local_28 = local_28 + 1;
      local_24 = local_24 + 0x18;
    } while ((int)local_28 < (int)*(short *)(param_3 + 0x26));
  }
  piVar11 = (int *)FUN_004a97d0(param_1,(int *)local_1c,param_2,param_7,0,0,0,0,0,0);
  iVar7 = param_1[0x12];
  param_1[0x12] = iVar7 + 1;
  iVar8 = piVar5[7];
  uVar18 = (uint)(param_5 != (undefined4 *)0x0);
  sVar3 = *(short *)(param_3 + 0x26);
  if ((iVar8 < piVar5[8]) || (iVar12 = FUN_0047de10(piVar5), iVar12 == 0)) {
    iVar12 = piVar5[1];
    piVar5[7] = piVar5[7] + 1;
    *(undefined2 *)(iVar12 + iVar8 * 0x14) = 0x2a;
    *(undefined1 *)(iVar12 + 3 + iVar8 * 0x14) = 0;
    *(int *)(iVar12 + 4 + iVar8 * 0x14) = iVar7;
    *(uint *)(iVar12 + 8 + iVar8 * 0x14) = uVar18 + 1 + (int)sVar3;
    *(undefined4 *)(iVar12 + 0xc + iVar8 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x10 + iVar8 * 0x14) = 0;
  }
  if (piVar5[1] != 0) {
    *(undefined1 *)(piVar5[1] + -0x11 + piVar5[7] * 0x14) = 8;
  }
  local_18[0] = 8;
  local_18[1] = 0;
  local_10 = 0;
  local_c = 0;
  local_14 = iVar7;
  FUN_004a7e30(param_1,piVar11,local_18);
  param_1[0x13] = param_1[0x13] + 1;
  iVar8 = param_1[0x13];
  param_1[0x13] = *(short *)(param_3 + 0x26) + 1 + iVar8;
  local_28 = piVar5[7];
  if (((int)local_28 < piVar5[8]) || (iVar12 = FUN_0047de10(piVar5), iVar12 == 0)) {
    iVar12 = piVar5[1];
    piVar5[7] = piVar5[7] + 1;
    *(undefined2 *)(iVar12 + local_28 * 0x14) = 0x48;
    *(undefined1 *)(iVar12 + 3 + local_28 * 0x14) = 0;
    *(int *)(iVar12 + 4 + local_28 * 0x14) = iVar7;
    *(undefined4 *)(iVar12 + 8 + local_28 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0xc + local_28 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x10 + local_28 * 0x14) = 0;
  }
  else {
    local_28 = 1;
  }
  iVar12 = piVar5[7];
  if ((iVar12 < piVar5[8]) || (iVar13 = FUN_0047de10(piVar5), iVar13 == 0)) {
    iVar13 = piVar5[1];
    piVar5[7] = piVar5[7] + 1;
    *(int *)(iVar13 + 4 + iVar12 * 0x14) = iVar7;
    *(undefined2 *)(iVar13 + iVar12 * 0x14) = 0x1d;
    *(undefined1 *)(iVar13 + 3 + iVar12 * 0x14) = 0;
    *(undefined4 *)(iVar13 + 8 + iVar12 * 0x14) = 0;
    *(int *)(iVar13 + 0xc + iVar12 * 0x14) = iVar8;
    *(undefined4 *)(iVar13 + 0x10 + iVar12 * 0x14) = 0;
  }
  iVar12 = piVar5[7];
  if ((iVar12 < piVar5[8]) || (iVar13 = FUN_0047de10(piVar5), iVar13 == 0)) {
    piVar5[7] = piVar5[7] + 1;
    puVar1 = (undefined2 *)(piVar5[1] + iVar12 * 0x14);
    *(int *)(puVar1 + 2) = iVar7;
    *(uint *)(puVar1 + 4) = uVar18;
    *puVar1 = 0x1d;
    *(undefined1 *)((int)puVar1 + 3) = 0;
    *(int *)(puVar1 + 6) = iVar8 + 1;
    *(undefined4 *)(puVar1 + 8) = 0;
  }
  iVar12 = 0;
  if (0 < *(short *)(param_3 + 0x26)) {
    do {
      iVar13 = piVar5[7];
      iVar14 = piVar5[8];
      if (iVar13 < iVar14) {
LAB_004be869:
        piVar5[7] = piVar5[7] + 1;
        puVar1 = (undefined2 *)(piVar5[1] + iVar13 * 0x14);
        *(int *)(puVar1 + 2) = iVar7;
        *(uint *)(puVar1 + 4) = uVar18 + 1 + iVar12;
        *puVar1 = 0x1d;
        *(undefined1 *)((int)puVar1 + 3) = 0;
        *(int *)(puVar1 + 6) = iVar8 + 2 + iVar12;
        *(undefined4 *)(puVar1 + 8) = 0;
      }
      else {
        if (iVar14 == 0) {
          iVar14 = 0x33;
        }
        else {
          iVar14 = iVar14 * 2;
        }
        puVar9 = FUN_00494cf0(*piVar5,(undefined4 *)piVar5[1],iVar14 * 0x14);
        if (puVar9 != (undefined4 *)0x0) {
          iVar14 = *piVar5;
          if (((iVar14 == 0) || (puVar9 < *(undefined4 **)(iVar14 + 0x104))) ||
             (*(undefined4 **)(iVar14 + 0x108) <= puVar9)) {
            uVar16 = (*DAT_00582af0._4_4_)(puVar9);
          }
          else {
            uVar16 = (uint)*(ushort *)(iVar14 + 0xe8);
          }
          piVar5[8] = uVar16 / 0x14;
          piVar5[1] = (int)puVar9;
          goto LAB_004be869;
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < *(short *)(param_3 + 0x26));
  }
  FUN_004b9d20(param_1,param_3);
  sVar3 = *(short *)(param_3 + 0x26);
  iVar12 = piVar5[7];
  iVar13 = piVar5[8];
  if (iVar12 < iVar13) {
LAB_004be938:
    iVar13 = piVar5[1];
    piVar5[7] = piVar5[7] + 1;
    *(int *)(iVar13 + 8 + iVar12 * 0x14) = sVar3 + 2;
    *(undefined2 *)(iVar13 + iVar12 * 0x14) = 0x8c;
    *(undefined1 *)(iVar13 + 3 + iVar12 * 0x14) = 0;
    *(undefined4 *)(iVar13 + 4 + iVar12 * 0x14) = 0;
    *(int *)(iVar13 + 0xc + iVar12 * 0x14) = iVar8;
    *(undefined4 *)(iVar13 + 0x10 + iVar12 * 0x14) = 0;
  }
  else {
    if (iVar13 == 0) {
      iVar13 = 0x33;
    }
    else {
      iVar13 = iVar13 * 2;
    }
    puVar9 = FUN_00494cf0(*piVar5,(undefined4 *)piVar5[1],iVar13 * 0x14);
    if (puVar9 != (undefined4 *)0x0) {
      iVar13 = *piVar5;
      if (((iVar13 == 0) || (puVar9 < *(undefined4 **)(iVar13 + 0x104))) ||
         (*(undefined4 **)(iVar13 + 0x108) <= puVar9)) {
        uVar18 = (*DAT_00582af0._4_4_)(puVar9);
      }
      else {
        uVar18 = (uint)*(ushort *)(iVar13 + 0xe8);
      }
      piVar5[8] = uVar18 / 0x14;
      piVar5[1] = (int)puVar9;
      goto LAB_004be938;
    }
    iVar12 = 1;
  }
  iVar8 = piVar5[1];
  if ((iVar8 != 0) && (*(char *)(*piVar5 + 0x38) == '\0')) {
    if (iVar12 < 0) {
      iVar12 = piVar5[7] + -1;
    }
    iVar13 = iVar8 + iVar12 * 0x14;
    FUN_0047bc80(*piVar5,(int)*(char *)(iVar13 + 1),*(int **)(iVar8 + 0x10 + iVar12 * 0x14));
    *(undefined4 *)(iVar13 + 0x10) = 0;
    if (piVar4 == (int *)0x0) {
      *(undefined4 *)(iVar13 + 0x10) = 0;
      *(undefined1 *)(iVar13 + 1) = 0;
    }
    else {
      *(int **)(iVar13 + 0x10) = piVar4;
      *(undefined1 *)(iVar13 + 1) = 0xf6;
      piVar4[3] = piVar4[3] + 1;
    }
  }
  if (piVar5[1] != 0) {
    uVar15 = (undefined1)param_8;
    if (param_8 == 99) {
      uVar15 = 2;
    }
    *(undefined1 *)(piVar5[1] + -0x11 + piVar5[7] * 0x14) = uVar15;
  }
  if ((int *)param_1[0x6c] != (int *)0x0) {
    param_1 = (int *)param_1[0x6c];
  }
  *(undefined1 *)(param_1 + 6) = 1;
  iVar8 = piVar5[7];
  iVar12 = piVar5[8];
  if (iVar8 < iVar12) {
LAB_004bea60:
    piVar5[7] = piVar5[7] + 1;
    puVar1 = (undefined2 *)(piVar5[1] + iVar8 * 0x14);
    *(int *)(puVar1 + 2) = iVar7;
    *puVar1 = 0x5f;
    *(undefined1 *)((int)puVar1 + 3) = 0;
    *(uint *)(puVar1 + 4) = local_28 + 1;
    *(undefined4 *)(puVar1 + 6) = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
  }
  else {
    if (iVar12 == 0) {
      iVar12 = 0x33;
    }
    else {
      iVar12 = iVar12 * 2;
    }
    puVar9 = FUN_00494cf0(*piVar5,(undefined4 *)piVar5[1],iVar12 * 0x14);
    if (puVar9 != (undefined4 *)0x0) {
      iVar12 = *piVar5;
      if (((iVar12 == 0) || (puVar9 < *(undefined4 **)(iVar12 + 0x104))) ||
         (*(undefined4 **)(iVar12 + 0x108) <= puVar9)) {
        uVar18 = (*DAT_00582af0._4_4_)(puVar9);
      }
      else {
        uVar18 = (uint)*(ushort *)(iVar12 + 0xe8);
      }
      piVar5[8] = uVar18 / 0x14;
      piVar5[1] = (int)puVar9;
      goto LAB_004bea60;
    }
  }
  if ((-1 < (int)local_28) && (local_28 < (uint)piVar5[7])) {
    *(int *)(piVar5[1] + 8 + local_28 * 0x14) = piVar5[7];
  }
  iVar8 = piVar5[7];
  iVar12 = piVar5[8];
  if (iVar12 <= iVar8) {
    if (iVar12 == 0) {
      iVar12 = 0x33;
    }
    else {
      iVar12 = iVar12 * 2;
    }
    puVar9 = FUN_00494cf0(*piVar5,(undefined4 *)piVar5[1],iVar12 * 0x14);
    if (puVar9 == (undefined4 *)0x0) goto LAB_004beb47;
    iVar12 = *piVar5;
    if (((iVar12 == 0) || (puVar9 < *(undefined4 **)(iVar12 + 0x104))) ||
       (*(undefined4 **)(iVar12 + 0x108) <= puVar9)) {
      uVar18 = (*DAT_00582af0._4_4_)(puVar9);
    }
    else {
      uVar18 = (uint)*(ushort *)(iVar12 + 0xe8);
    }
    piVar5[8] = uVar18 / 0x14;
    piVar5[1] = (int)puVar9;
  }
  iVar12 = piVar5[1];
  piVar5[7] = piVar5[7] + 1;
  *(undefined2 *)(iVar12 + iVar8 * 0x14) = 0x2d;
  *(undefined1 *)(iVar12 + 3 + iVar8 * 0x14) = 0;
  *(int *)(iVar12 + 4 + iVar8 * 0x14) = iVar7;
  *(undefined4 *)(iVar12 + 8 + iVar8 * 0x14) = 0;
  *(undefined4 *)(iVar12 + 0xc + iVar8 * 0x14) = 0;
  *(undefined4 *)(iVar12 + 0x10 + iVar8 * 0x14) = 0;
LAB_004beb47:
  if (piVar11 != (int *)0x0) {
    FUN_00499060(iVar6,(int *)*piVar11);
    FUN_004a9cb0(iVar6,(short *)piVar11[10]);
    FUN_00498790(iVar6,(undefined4 *)piVar11[0xb]);
    FUN_00499060(iVar6,(int *)piVar11[0xc]);
    FUN_00498790(iVar6,(undefined4 *)piVar11[0xd]);
    FUN_00499060(iVar6,(int *)piVar11[0xe]);
    FUN_004a9650(iVar6,(undefined4 *)piVar11[0xf]);
    FUN_00498790(iVar6,(undefined4 *)piVar11[0x12]);
    FUN_00498790(iVar6,(undefined4 *)piVar11[0x13]);
    FUN_00494b00(iVar6,piVar11);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004bebc0 @ 004bebc0  kind=gamemisc  attributed-by=none  size=120 */

void * __cdecl FUN_004bebc0(undefined4 param_1)

{
  int iVar1;
  void *_Dst;
  
  iVar1 = (*(code *)PTR_MultiByteToWideChar_005837ac)(0xfde9,0,param_1,0xffffffff,0,0);
  if (iVar1 == 0) {
    return (void *)0x0;
  }
  _Dst = (void *)FUN_004a0350(iVar1 * 2);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,iVar1 * 2);
    if (_Dst != (void *)0x0) {
      iVar1 = (*(code *)PTR_MultiByteToWideChar_005837ac)(0xfde9,0,param_1,0xffffffff,_Dst,iVar1);
      if (iVar1 == 0) {
        FUN_00466dd0((int)_Dst);
        _Dst = (void *)0x0;
      }
      return _Dst;
    }
  }
  return (void *)0x0;
}


/* FUN_004bec40 @ 004bec40  kind=gamemisc  attributed-by=none  size=58 */

uint __cdecl FUN_004bec40(int *param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined3 extraout_var;
  char *pcVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  undefined4 *puVar11;
  int *piVar12;
  int **ppiVar13;
  bool bVar14;
  undefined4 uVar15;
  int *local_28;
  int *local_24;
  undefined4 *local_20;
  uint local_1c;
  uint local_18;
  undefined8 local_14;
  int local_c;
  int *local_8;
  
  local_c = 0;
  local_18 = 0;
  uVar4 = FUN_004b9f70((int)param_1,(undefined4 *)(param_2 + 0x34));
  param_2 = 0;
  if (uVar4 != 0) {
    return uVar4;
  }
  local_1c = 0;
  uVar4 = 0;
  while (param_2 < param_1[5]) {
    puVar11 = *(undefined4 **)(param_1[4] + 4 + local_1c);
    if ((puVar11 != (undefined4 *)0x0) && (*(char *)(puVar11 + 2) == '\x02')) {
      local_18 = 1;
      if (param_2 != 1) {
        local_c = local_c + 1;
      }
      FUN_0048fbc0(puVar11);
      uVar4 = 0;
      if (*(int *)(*(int *)puVar11[1] + 0xb8) == 0) {
        uVar4 = FUN_004854a0(*(int *)puVar11[1],4);
      }
      if (*(char *)((int)puVar11 + 9) != '\0') {
        piVar12 = puVar11 + 3;
        *piVar12 = *piVar12 + -1;
        if (*piVar12 == 0) {
          if (*(int *)(puVar11[1] + 0x38) != 0) {
            (*DAT_00582b20)(*(int *)(puVar11[1] + 0x38));
          }
          *(undefined1 *)((int)puVar11 + 10) = 0;
        }
      }
    }
    param_2 = param_2 + 1;
    local_1c = local_1c + 0x10;
    if (uVar4 != 0) {
      return uVar4;
    }
  }
  if (uVar4 != 0) {
    return uVar4;
  }
  if (((local_18 != 0) && ((code *)param_1[0x2b] != (code *)0x0)) &&
     (iVar5 = (*(code *)param_1[0x2b])(param_1[0x2a]), iVar5 != 0)) {
    return 0x13;
  }
  uVar4 = 0;
  pcVar9 = "";
  iVar5 = **(int **)(*(int *)(param_1[4] + 4) + 4);
  if (*(char *)(iVar5 + 0xe) == '\0') {
    pcVar9 = *(char **)(iVar5 + 0x90);
  }
  if (pcVar9 != (char *)0x0) {
    cVar2 = *pcVar9;
    pcVar6 = pcVar9;
    while (cVar2 != '\0') {
      pcVar6 = pcVar6 + 1;
      cVar2 = *pcVar6;
    }
    if ((((int)pcVar6 - (int)pcVar9 & 0x3fffffffU) != 0) && (1 < local_c)) {
      local_c = *param_1;
      local_1c = 0;
      pcVar9 = "";
      if (*(char *)(iVar5 + 0xe) == '\0') {
        pcVar9 = *(char **)(iVar5 + 0x90);
      }
      local_8 = (int *)0x0;
      local_14 = 0;
      if (pcVar9 == (char *)0x0) {
        local_18 = 0;
      }
      else {
        cVar2 = *pcVar9;
        pcVar6 = pcVar9;
        while (cVar2 != '\0') {
          pcVar6 = pcVar6 + 1;
          cVar2 = *pcVar6;
        }
        local_18 = (int)pcVar6 - (int)pcVar9 & 0x3fffffff;
      }
      pcVar9 = (char *)FUN_004a02d0((int)param_1,(byte *)"%s-mjXXXXXX9XXz");
      puVar11 = (undefined4 *)0x0;
      if (pcVar9 == (char *)0x0) {
        return 7;
      }
      do {
        if (puVar11 != (undefined4 *)0x0) {
          if (100 < (int)puVar11) {
            pcVar7 = "MJ delete: %s";
            uVar15 = 0xd;
            pcVar6 = pcVar9;
            FUN_004683f0(0xd,"MJ delete: %s");
            iVar5 = local_c;
            (**(code **)(local_c + 0x1c))(local_c,pcVar9,0,uVar15,pcVar7,pcVar6);
            if (uVar4 != 0) goto LAB_004bf1e4;
            break;
          }
          if (puVar11 == (undefined4 *)0x1) {
            FUN_004683f0(0xd,"MJ collide: %s");
          }
        }
        local_20 = (undefined4 *)((int)puVar11 + 1);
        iVar5 = 4;
        ppiVar13 = &local_24;
        if (DAT_00582acc == 0) {
          iVar10 = 0;
        }
        else {
          iVar10 = (*DAT_00582b10)(5);
          if (iVar10 != 0) {
            (*DAT_00582b18)(iVar10);
          }
        }
        do {
          uVar3 = FUN_00487580();
          *(undefined1 *)ppiVar13 = uVar3;
          ppiVar13 = (int **)((int)ppiVar13 + 1);
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        if (iVar10 != 0) {
          (*DAT_00582b20)(iVar10);
        }
        FUN_00466a80(0xd,pcVar9 + local_18,(byte *)"-mj%06X9%02X");
        iVar5 = local_c;
        uVar4 = (**(code **)(local_c + 0x20))(local_c,pcVar9,0,&local_28);
        if (uVar4 != 0) goto LAB_004bf1e4;
        puVar11 = local_20;
      } while (local_28 != (int *)0x0);
      uVar4 = FUN_004a12e0(iVar5,pcVar9,&local_8,0x4016,0);
      if (uVar4 != 0) {
LAB_004bf1e4:
        FUN_00494b00((int)param_1,(undefined4 *)pcVar9);
        return uVar4;
      }
      local_20 = (undefined4 *)0x0;
      if (0 < param_1[5]) {
        local_18 = local_14._4_4_;
        local_24 = (int *)0x0;
        local_14 = CONCAT44((undefined4)local_14,(undefined4)local_14);
        do {
          uVar4 = local_1c;
          puVar11 = *(undefined4 **)(param_1[4] + 4 + (int)local_24);
          if (((puVar11 != (undefined4 *)0x0) && (*(char *)(puVar11 + 2) == '\x02')) &&
             (pcVar6 = *(char **)(*(int *)puVar11[1] + 0x94), pcVar6 != (char *)0x0)) {
            local_1c = uVar4;
            if ((local_1c == 0) &&
               (uVar3 = FUN_00491f10(puVar11), local_1c = uVar4, CONCAT31(extraout_var,uVar3) == 0))
            {
              local_1c = 1;
            }
            cVar2 = *pcVar6;
            pcVar7 = pcVar6;
            while (cVar2 != '\0') {
              pcVar7 = pcVar7 + 1;
              cVar2 = *pcVar7;
            }
            uVar4 = (**(code **)(*local_8 + 0xc))
                              (local_8,pcVar6,((int)pcVar7 - (int)pcVar6 & 0x3fffffffU) + 1,
                               local_14._4_4_,local_18);
            cVar2 = *pcVar6;
            pcVar7 = pcVar6;
            while (cVar2 != '\0') {
              pcVar7 = pcVar7 + 1;
              cVar2 = *pcVar7;
            }
            uVar8 = ((int)pcVar7 - (int)pcVar6 & 0x3fffffffU) + 1;
            bVar14 = CARRY4(local_14._4_4_,uVar8);
            local_14 = CONCAT44(local_14._4_4_ + uVar8,(undefined4)local_14);
            local_18 = local_18 + bVar14;
            piVar12 = local_8;
            if (uVar4 != 0) goto LAB_004bf079;
          }
          piVar12 = local_8;
          local_20 = (undefined4 *)((int)local_20 + 1);
          local_24 = local_24 + 4;
        } while ((int)local_20 < param_1[5]);
        if (((local_1c != 0) &&
            (uVar4 = (**(code **)(*local_8 + 0x30))(local_8), (uVar4 & 0x400) == 0)) &&
           (uVar4 = (**(code **)(*piVar12 + 0x14))(piVar12,2), uVar4 != 0)) {
LAB_004bf079:
          if (*piVar12 != 0) {
            (**(code **)(*piVar12 + 4))(piVar12);
            *piVar12 = 0;
          }
          FUN_00466dd0((int)piVar12);
          (**(code **)(local_c + 0x1c))(local_c,pcVar9,0);
          FUN_00494b00((int)param_1,(undefined4 *)pcVar9);
          return uVar4;
        }
      }
      uVar4 = 0;
      iVar5 = 0;
      local_24 = (int *)0x0;
      do {
        if (param_1[5] <= iVar5) break;
        puVar11 = *(undefined4 **)(param_1[4] + 4 + (int)local_24);
        if (puVar11 != (undefined4 *)0x0) {
          uVar4 = FUN_0048f2f0(puVar11,pcVar9);
        }
        local_24 = local_24 + 4;
        iVar5 = iVar5 + 1;
      } while (uVar4 == 0);
      piVar12 = local_8;
      if (*local_8 != 0) {
        (**(code **)(*local_8 + 4))(local_8);
        *piVar12 = 0;
      }
      FUN_00466dd0((int)piVar12);
      if (uVar4 != 0) {
        FUN_00494b00((int)param_1,(undefined4 *)pcVar9);
        return uVar4;
      }
      uVar4 = (**(code **)(local_c + 0x1c))(local_c,pcVar9,1);
      local_1c = uVar4;
      FUN_00494b00((int)param_1,(undefined4 *)pcVar9);
      if (uVar4 != 0) {
        return uVar4;
      }
      if (DAT_00583e74 != (code *)0x0) {
        (*DAT_00583e74)();
      }
      if (0 < param_1[5]) {
        param_2 = 0;
        iVar5 = 0;
        do {
          piVar12 = *(int **)(param_1[4] + 4 + param_2);
          if ((piVar12 != (int *)0x0) && ((char)piVar12[2] != '\0')) {
            FUN_0048fbc0(piVar12);
            if ((char)piVar12[2] == '\x02') {
              local_20 = (undefined4 *)piVar12[1];
              local_24 = (int *)*local_20;
              if (local_24[10] == 0) {
                if (((*(char *)((int)local_24 + 0xf) == '\x02') && ((char)local_24[1] != '\0')) &&
                   (*(char *)((int)local_24 + 5) == '\x01')) {
                  *(undefined1 *)((int)local_24 + 0xf) = 1;
                }
                else {
                  uVar4 = FUN_00484760(local_24,(uint)*(byte *)((int)local_24 + 0x12));
                  if (((uVar4 & 0xff) == 0xd) || ((uVar4 & 0xff) == 10)) {
                    local_24[10] = uVar4;
                    *(undefined1 *)((int)local_24 + 0xf) = 6;
                  }
                }
              }
              *(undefined1 *)((int)local_20 + 0x13) = 1;
            }
            FUN_00471200(piVar12);
            if (*(char *)((int)piVar12 + 9) != '\0') {
              piVar1 = piVar12 + 3;
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                if (*(int *)(piVar12[1] + 0x38) != 0) {
                  (*DAT_00582b20)(*(int *)(piVar12[1] + 0x38));
                }
                *(undefined1 *)((int)piVar12 + 10) = 0;
              }
            }
          }
          iVar5 = iVar5 + 1;
          param_2 = param_2 + 0x10;
          uVar4 = local_1c;
        } while (iVar5 < param_1[5]);
      }
      if (DAT_00583e78 != (code *)0x0) {
        (*DAT_00583e78)();
        FUN_004719f0((int)param_1,0x40);
        return uVar4;
      }
      goto LAB_004bf343;
    }
  }
  iVar5 = 0;
  param_2 = 0;
  do {
    if (param_1[5] <= iVar5) break;
    puVar11 = *(undefined4 **)(param_1[4] + 4 + param_2);
    if (puVar11 != (undefined4 *)0x0) {
      uVar4 = FUN_0048f2f0(puVar11,(char *)0x0);
    }
    param_2 = param_2 + 0x10;
    iVar5 = iVar5 + 1;
  } while (uVar4 == 0);
  param_2 = 0;
  if (uVar4 != 0) {
    return uVar4;
  }
  local_24 = (int *)0x0;
  uVar8 = 0;
  while (param_2 < param_1[5]) {
    piVar12 = *(int **)(param_1[4] + 4 + (int)local_24);
    if (piVar12 != (int *)0x0) {
      if ((char)piVar12[2] != '\0') {
        FUN_0048fbc0(piVar12);
        if ((char)piVar12[2] == '\x02') {
          local_20 = (undefined4 *)piVar12[1];
          local_28 = (int *)*local_20;
          uVar8 = local_28[10];
          if (uVar8 != 0) {
LAB_004bf31a:
            if (*(char *)((int)piVar12 + 9) != '\0') {
              piVar1 = piVar12 + 3;
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                if (*(int *)(piVar12[1] + 0x38) != 0) {
                  (*DAT_00582b20)(*(int *)(piVar12[1] + 0x38));
                }
                *(undefined1 *)((int)piVar12 + 10) = 0;
              }
            }
            goto LAB_004bf2c7;
          }
          if (((*(char *)((int)local_28 + 0xf) == '\x02') && ((char)local_28[1] != '\0')) &&
             (*(char *)((int)local_28 + 5) == '\x01')) {
            *(undefined1 *)((int)local_28 + 0xf) = 1;
          }
          else {
            uVar8 = FUN_00484760(local_28,(uint)*(byte *)((int)local_28 + 0x12));
            if (((uVar8 & 0xff) == 0xd) || ((uVar8 & 0xff) == 10)) {
              local_28[10] = uVar8;
              *(undefined1 *)((int)local_28 + 0xf) = 6;
            }
            if (uVar8 != 0) goto LAB_004bf31a;
          }
          *(undefined1 *)((int)local_20 + 0x13) = 1;
        }
        FUN_00471200(piVar12);
        if (*(char *)((int)piVar12 + 9) != '\0') {
          piVar1 = piVar12 + 3;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            if (*(int *)(piVar12[1] + 0x38) != 0) {
              (*DAT_00582b20)(*(int *)(piVar12[1] + 0x38));
            }
            *(undefined1 *)((int)piVar12 + 10) = 0;
          }
        }
      }
      uVar8 = 0;
    }
LAB_004bf2c7:
    param_2 = param_2 + 1;
    local_24 = local_24 + 4;
    if (uVar8 != 0) {
      return uVar8;
    }
  }
  uVar4 = 0;
  if (uVar8 != 0) {
    return uVar8;
  }
LAB_004bf343:
  FUN_004719f0((int)param_1,0x40);
  return uVar4;
}


/* FUN_004bec7a @ 004bec7a  kind=gamemisc  attributed-by=none  size=384 */

uint FUN_004bec7a(void)

{
  uint *puVar1;
  char cVar2;
  int *piVar3;
  undefined1 uVar4;
  int in_EAX;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined3 extraout_var;
  uint uVar9;
  char *pcVar10;
  uint unaff_EBX;
  int iVar11;
  uint uVar12;
  int unaff_EBP;
  int unaff_ESI;
  int *piVar13;
  undefined4 *unaff_EDI;
  undefined1 *puVar14;
  bool bVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  
  while (in_EAX < (int)unaff_EDI[5]) {
    puVar7 = *(undefined4 **)(unaff_EDI[4] + 4 + unaff_ESI);
    if ((puVar7 != (undefined4 *)0x0) && (*(char *)(puVar7 + 2) == '\x02')) {
      *(undefined4 *)(unaff_EBP + -0x14) = 1;
      if (*(int *)(unaff_EBP + 0xc) != 1) {
        *(int *)(unaff_EBP + -8) = *(int *)(unaff_EBP + -8) + 1;
      }
      FUN_0048fbc0(puVar7);
      unaff_EBX = 0;
      if (*(int *)(*(int *)puVar7[1] + 0xb8) == 0) {
        unaff_EBX = FUN_004854a0(*(int *)puVar7[1],4);
      }
      if (*(char *)((int)puVar7 + 9) != '\0') {
        piVar13 = puVar7 + 3;
        *piVar13 = *piVar13 + -1;
        if (*piVar13 == 0) {
          if (*(int *)(puVar7[1] + 0x38) != 0) {
            (*DAT_00582b20)(*(int *)(puVar7[1] + 0x38));
          }
          *(undefined1 *)((int)puVar7 + 10) = 0;
        }
      }
    }
    in_EAX = *(int *)(unaff_EBP + 0xc) + 1;
    unaff_ESI = *(int *)(unaff_EBP + -0x18) + 0x10;
    *(int *)(unaff_EBP + 0xc) = in_EAX;
    *(int *)(unaff_EBP + -0x18) = unaff_ESI;
    if (unaff_EBX != 0) {
      return unaff_EBX;
    }
  }
  if (unaff_EBX != 0) {
    return unaff_EBX;
  }
  if (((*(int *)(unaff_EBP + -0x14) != 0) && ((code *)unaff_EDI[0x2b] != (code *)0x0)) &&
     (iVar5 = (*(code *)unaff_EDI[0x2b])(unaff_EDI[0x2a]), iVar5 != 0)) {
    return 0x13;
  }
  uVar8 = 0;
  pcVar10 = "";
  iVar5 = **(int **)(*(int *)(unaff_EDI[4] + 4) + 4);
  if (*(char *)(iVar5 + 0xe) == '\0') {
    pcVar10 = *(char **)(iVar5 + 0x90);
  }
  if (pcVar10 != (char *)0x0) {
    cVar2 = *pcVar10;
    pcVar6 = pcVar10;
    while (cVar2 != '\0') {
      pcVar6 = pcVar6 + 1;
      cVar2 = *pcVar6;
    }
    if ((((int)pcVar6 - (int)pcVar10 & 0x3fffffffU) != 0) && (1 < *(int *)(unaff_EBP + -8))) {
      *(undefined4 *)(unaff_EBP + -8) = *unaff_EDI;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      pcVar10 = "";
      if (*(char *)(iVar5 + 0xe) == '\0') {
        pcVar10 = *(char **)(iVar5 + 0x90);
      }
      iVar5 = 0;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      *(undefined8 *)(unaff_EBP + -0x10) = 0;
      if (pcVar10 == (char *)0x0) {
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
      }
      else {
        cVar2 = *pcVar10;
        pcVar6 = pcVar10;
        while (cVar2 != '\0') {
          pcVar6 = pcVar6 + 1;
          cVar2 = *pcVar6;
        }
        *(uint *)(unaff_EBP + -0x14) = (int)pcVar6 - (int)pcVar10 & 0x3fffffff;
      }
      puVar7 = (undefined4 *)FUN_004a02d0((int)unaff_EDI,(byte *)"%s-mjXXXXXX9XXz");
      *(undefined4 **)(unaff_EBP + 0xc) = puVar7;
      if (puVar7 == (undefined4 *)0x0) {
        return 7;
      }
LAB_004bee00:
      if (iVar5 == 0) {
LAB_004bee22:
        bVar15 = DAT_00582acc == 0;
        *(int *)(unaff_EBP + -0x1c) = iVar5 + 1;
        iVar5 = 4;
        puVar14 = (undefined1 *)(unaff_EBP + -0x20);
        if (bVar15) {
          iVar11 = 0;
        }
        else {
          iVar11 = (*DAT_00582b10)(5);
          if (iVar11 != 0) {
            (*DAT_00582b18)(iVar11);
          }
        }
        do {
          uVar4 = FUN_00487580();
          *puVar14 = uVar4;
          puVar14 = puVar14 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        if (iVar11 != 0) {
          (*DAT_00582b20)(iVar11);
        }
        puVar7 = *(undefined4 **)(unaff_EBP + 0xc);
        FUN_00466a80(0xd,*(int *)(unaff_EBP + -0x14) + (int)puVar7,(byte *)"-mj%06X9%02X");
        iVar5 = *(int *)(unaff_EBP + -8);
        uVar8 = (**(code **)(iVar5 + 0x20))(iVar5,puVar7,0,unaff_EBP + -0x24);
        if (uVar8 != 0) goto LAB_004bf1e4;
        if (*(int *)(unaff_EBP + -0x24) == 0) goto LAB_004beedf;
        iVar5 = *(int *)(unaff_EBP + -0x1c);
        goto LAB_004bee00;
      }
      if (iVar5 < 0x65) {
        if (iVar5 == 1) {
          FUN_004683f0(0xd,"MJ collide: %s");
        }
        goto LAB_004bee22;
      }
      pcVar10 = "MJ delete: %s";
      uVar16 = 0xd;
      puVar17 = puVar7;
      FUN_004683f0(0xd,"MJ delete: %s");
      iVar5 = *(int *)(unaff_EBP + -8);
      (**(code **)(iVar5 + 0x1c))(iVar5,puVar7,0,uVar16,pcVar10,puVar17);
      if (uVar8 != 0) goto LAB_004bf1e4;
LAB_004beedf:
      uVar8 = FUN_004a12e0(iVar5,puVar7,(undefined4 *)(unaff_EBP + -4),0x4016,0);
      if (uVar8 != 0) {
LAB_004bf1e4:
        FUN_00494b00(*(int *)(unaff_EBP + 8),puVar7);
        return uVar8;
      }
      unaff_EDI = *(undefined4 **)(unaff_EBP + 8);
      iVar5 = 0;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      if (0 < (int)unaff_EDI[5]) {
        *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0xc);
        iVar11 = 0;
        *(undefined4 *)(unaff_EBP + -0x20) = 0;
        *(undefined4 *)(unaff_EBP + -0xc) = *(undefined4 *)(unaff_EBP + -0x10);
        do {
          puVar7 = *(undefined4 **)(unaff_EDI[4] + 4 + iVar11);
          if (((puVar7 != (undefined4 *)0x0) && (*(char *)(puVar7 + 2) == '\x02')) &&
             (pcVar10 = *(char **)(*(int *)puVar7[1] + 0x94), pcVar10 != (char *)0x0)) {
            if (*(int *)(unaff_EBP + -0x18) == 0) {
              uVar4 = FUN_00491f10(puVar7);
              *(uint *)(unaff_EBP + -0x18) = (uint)(CONCAT31(extraout_var,uVar4) == 0);
            }
            cVar2 = *pcVar10;
            pcVar6 = pcVar10;
            while (cVar2 != '\0') {
              pcVar6 = pcVar6 + 1;
              cVar2 = *pcVar6;
            }
            uVar8 = (**(code **)(**(int **)(unaff_EBP + -4) + 0xc))
                              (*(int **)(unaff_EBP + -4),pcVar10,
                               ((int)pcVar6 - (int)pcVar10 & 0x3fffffffU) + 1,
                               *(undefined4 *)(unaff_EBP + -0xc),*(undefined4 *)(unaff_EBP + -0x14))
            ;
            cVar2 = *pcVar10;
            pcVar6 = pcVar10;
            while (cVar2 != '\0') {
              pcVar6 = pcVar6 + 1;
              cVar2 = *pcVar6;
            }
            uVar9 = ((int)pcVar6 - (int)pcVar10 & 0x3fffffffU) + 1;
            puVar1 = (uint *)(unaff_EBP + -0xc);
            uVar12 = *puVar1;
            *puVar1 = *puVar1 + uVar9;
            *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + (uint)CARRY4(uVar12,uVar9);
            if (uVar8 != 0) {
              piVar13 = *(int **)(unaff_EBP + -4);
              goto LAB_004bf079;
            }
            iVar5 = *(int *)(unaff_EBP + -0x1c);
          }
          iVar5 = iVar5 + 1;
          iVar11 = *(int *)(unaff_EBP + -0x20) + 0x10;
          *(int *)(unaff_EBP + -0x1c) = iVar5;
          *(int *)(unaff_EBP + -0x20) = iVar11;
        } while (iVar5 < (int)unaff_EDI[5]);
        if (*(int *)(unaff_EBP + -0x18) != 0) {
          piVar13 = *(int **)(unaff_EBP + -4);
          uVar8 = (**(code **)(*piVar13 + 0x30))(piVar13);
          if (((uVar8 & 0x400) == 0) &&
             (uVar8 = (**(code **)(*piVar13 + 0x14))(piVar13,2), uVar8 != 0)) {
LAB_004bf079:
            if (*piVar13 != 0) {
              (**(code **)(*piVar13 + 4))(piVar13);
              *piVar13 = 0;
            }
            FUN_00466dd0((int)piVar13);
            puVar7 = *(undefined4 **)(unaff_EBP + 0xc);
            (**(code **)(*(int *)(unaff_EBP + -8) + 0x1c))(*(int *)(unaff_EBP + -8),puVar7,0);
            FUN_00494b00((int)unaff_EDI,puVar7);
            return uVar8;
          }
        }
      }
      uVar8 = 0;
      iVar11 = 0;
      iVar5 = 0;
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      do {
        if ((int)unaff_EDI[5] <= iVar11) break;
        puVar7 = *(undefined4 **)(unaff_EDI[4] + 4 + iVar5);
        if (puVar7 != (undefined4 *)0x0) {
          uVar8 = FUN_0048f2f0(puVar7,*(char **)(unaff_EBP + 0xc));
          iVar5 = *(int *)(unaff_EBP + -0x20);
        }
        iVar5 = iVar5 + 0x10;
        iVar11 = iVar11 + 1;
        *(int *)(unaff_EBP + -0x20) = iVar5;
      } while (uVar8 == 0);
      piVar13 = *(int **)(unaff_EBP + -4);
      if (*piVar13 != 0) {
        (**(code **)(*piVar13 + 4))(piVar13);
        *piVar13 = 0;
      }
      FUN_00466dd0((int)piVar13);
      if (uVar8 != 0) {
        FUN_00494b00((int)unaff_EDI,*(undefined4 **)(unaff_EBP + 0xc));
        return uVar8;
      }
      puVar7 = *(undefined4 **)(unaff_EBP + 0xc);
      uVar8 = (**(code **)(*(int *)(unaff_EBP + -8) + 0x1c))(*(int *)(unaff_EBP + -8),puVar7,1);
      *(uint *)(unaff_EBP + -0x18) = uVar8;
      FUN_00494b00((int)unaff_EDI,puVar7);
      if (uVar8 != 0) {
        return uVar8;
      }
      if (DAT_00583e74 != (code *)0x0) {
        (*DAT_00583e74)();
      }
      uVar8 = 0;
      if (0 < (int)unaff_EDI[5]) {
        iVar11 = 0;
        *(undefined4 *)(unaff_EBP + 0xc) = 0;
        iVar5 = 0;
        do {
          piVar13 = *(int **)(unaff_EDI[4] + 4 + iVar11);
          if ((piVar13 != (int *)0x0) && ((char)piVar13[2] != '\0')) {
            FUN_0048fbc0(piVar13);
            if ((char)piVar13[2] == '\x02') {
              puVar7 = (undefined4 *)piVar13[1];
              *(undefined4 **)(unaff_EBP + -0x1c) = puVar7;
              piVar3 = (int *)*puVar7;
              *(int **)(unaff_EBP + -0x20) = piVar3;
              if (piVar3[10] == 0) {
                if (((*(char *)((int)piVar3 + 0xf) == '\x02') && ((char)piVar3[1] != '\0')) &&
                   (*(char *)((int)piVar3 + 5) == '\x01')) {
                  *(undefined1 *)((int)piVar3 + 0xf) = 1;
                }
                else {
                  uVar8 = FUN_00484760(piVar3,(uint)*(byte *)((int)piVar3 + 0x12));
                  if (((uVar8 & 0xff) == 0xd) || ((uVar8 & 0xff) == 10)) {
                    iVar11 = *(int *)(unaff_EBP + -0x20);
                    *(uint *)(iVar11 + 0x28) = uVar8;
                    *(undefined1 *)(iVar11 + 0xf) = 6;
                  }
                }
              }
              *(undefined1 *)(*(int *)(unaff_EBP + -0x1c) + 0x13) = 1;
            }
            FUN_00471200(piVar13);
            if (*(char *)((int)piVar13 + 9) != '\0') {
              piVar3 = piVar13 + 3;
              *piVar3 = *piVar3 + -1;
              if (*piVar3 == 0) {
                if (*(int *)(piVar13[1] + 0x38) != 0) {
                  (*DAT_00582b20)(*(int *)(piVar13[1] + 0x38));
                }
                *(undefined1 *)((int)piVar13 + 10) = 0;
              }
            }
          }
          iVar5 = iVar5 + 1;
          iVar11 = *(int *)(unaff_EBP + 0xc) + 0x10;
          *(int *)(unaff_EBP + 0xc) = iVar11;
        } while (iVar5 < (int)unaff_EDI[5]);
        uVar8 = *(uint *)(unaff_EBP + -0x18);
      }
      if (DAT_00583e78 != (code *)0x0) {
        (*DAT_00583e78)();
        FUN_004719f0((int)unaff_EDI,0x40);
        return uVar8;
      }
      goto LAB_004bf343;
    }
  }
  iVar11 = 0;
  iVar5 = 0;
  *(undefined4 *)(unaff_EBP + 0xc) = 0;
  do {
    if ((int)unaff_EDI[5] <= iVar11) break;
    puVar7 = *(undefined4 **)(unaff_EDI[4] + 4 + iVar5);
    if (puVar7 != (undefined4 *)0x0) {
      uVar8 = FUN_0048f2f0(puVar7,(char *)0x0);
      iVar5 = *(int *)(unaff_EBP + 0xc);
    }
    iVar5 = iVar5 + 0x10;
    iVar11 = iVar11 + 1;
    *(int *)(unaff_EBP + 0xc) = iVar5;
  } while (uVar8 == 0);
  iVar5 = 0;
  *(undefined4 *)(unaff_EBP + 0xc) = 0;
  if (uVar8 != 0) {
    return uVar8;
  }
  iVar11 = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  uVar12 = 0;
  while (iVar5 < (int)unaff_EDI[5]) {
    piVar13 = *(int **)(unaff_EDI[4] + 4 + iVar11);
    if (piVar13 != (int *)0x0) {
      if ((char)piVar13[2] != '\0') {
        FUN_0048fbc0(piVar13);
        if ((char)piVar13[2] == '\x02') {
          puVar7 = (undefined4 *)piVar13[1];
          *(undefined4 **)(unaff_EBP + -0x1c) = puVar7;
          piVar3 = (int *)*puVar7;
          *(int **)(unaff_EBP + -0x24) = piVar3;
          uVar12 = piVar3[10];
          if (uVar12 != 0) {
LAB_004bf31a:
            if (*(char *)((int)piVar13 + 9) != '\0') {
              piVar3 = piVar13 + 3;
              *piVar3 = *piVar3 + -1;
              if (*piVar3 == 0) {
                if (*(int *)(piVar13[1] + 0x38) != 0) {
                  (*DAT_00582b20)(*(int *)(piVar13[1] + 0x38));
                }
                *(undefined1 *)((int)piVar13 + 10) = 0;
              }
            }
            goto LAB_004bf2c7;
          }
          if (((*(char *)((int)piVar3 + 0xf) == '\x02') && ((char)piVar3[1] != '\0')) &&
             (*(char *)((int)piVar3 + 5) == '\x01')) {
            *(undefined1 *)((int)piVar3 + 0xf) = 1;
          }
          else {
            uVar12 = FUN_00484760(piVar3,(uint)*(byte *)((int)piVar3 + 0x12));
            if (((uVar12 & 0xff) == 0xd) || ((uVar12 & 0xff) == 10)) {
              iVar5 = *(int *)(unaff_EBP + -0x24);
              *(uint *)(iVar5 + 0x28) = uVar12;
              *(undefined1 *)(iVar5 + 0xf) = 6;
            }
            puVar7 = *(undefined4 **)(unaff_EBP + -0x1c);
            if (uVar12 != 0) goto LAB_004bf31a;
          }
          *(undefined1 *)((int)puVar7 + 0x13) = 1;
        }
        FUN_00471200(piVar13);
        if (*(char *)((int)piVar13 + 9) != '\0') {
          piVar3 = piVar13 + 3;
          *piVar3 = *piVar3 + -1;
          if (*piVar3 == 0) {
            if (*(int *)(piVar13[1] + 0x38) != 0) {
              (*DAT_00582b20)(*(int *)(piVar13[1] + 0x38));
            }
            *(undefined1 *)((int)piVar13 + 10) = 0;
          }
        }
      }
      uVar12 = 0;
    }
LAB_004bf2c7:
    iVar5 = *(int *)(unaff_EBP + 0xc) + 1;
    iVar11 = *(int *)(unaff_EBP + -0x20) + 0x10;
    *(int *)(unaff_EBP + 0xc) = iVar5;
    *(int *)(unaff_EBP + -0x20) = iVar11;
    if (uVar12 != 0) {
      return uVar12;
    }
  }
  uVar8 = 0;
  if (uVar12 != 0) {
    return uVar12;
  }
LAB_004bf343:
  FUN_004719f0((int)unaff_EDI,0x40);
  return uVar8;
}


/* FUN_004bedfa @ 004bedfa  kind=gamemisc  attributed-by=none  size=768 */

uint FUN_004bedfa(void)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  int *piVar4;
  undefined1 uVar5;
  undefined3 extraout_var;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint unaff_EBX;
  int iVar10;
  int unaff_EBP;
  int unaff_ESI;
  int iVar11;
  int *piVar12;
  undefined4 *unaff_EDI;
  undefined1 *puVar13;
  bool bVar14;
  undefined4 uVar15;
  char *pcVar16;
  undefined4 *puVar17;
  
LAB_004bee00:
  if (unaff_ESI != 0) {
    if (100 < unaff_ESI) {
      pcVar16 = "MJ delete: %s";
      uVar15 = 0xd;
      puVar17 = unaff_EDI;
      FUN_004683f0(0xd,"MJ delete: %s");
      iVar11 = *(int *)(unaff_EBP + -8);
      (**(code **)(iVar11 + 0x1c))(iVar11,unaff_EDI,0,uVar15,pcVar16,puVar17);
      if (unaff_EBX != 0) goto LAB_004bf1e4;
LAB_004beedf:
      unaff_EBX = FUN_004a12e0(iVar11,unaff_EDI,(undefined4 *)(unaff_EBP + -4),0x4016,0);
      if (unaff_EBX != 0) {
LAB_004bf1e4:
        FUN_00494b00(*(int *)(unaff_EBP + 8),unaff_EDI);
        return unaff_EBX;
      }
      iVar11 = *(int *)(unaff_EBP + 8);
      iVar10 = 0;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      if (0 < *(int *)(iVar11 + 0x14)) {
        *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0xc);
        iVar9 = 0;
        *(undefined4 *)(unaff_EBP + -0x20) = 0;
        *(undefined4 *)(unaff_EBP + -0xc) = *(undefined4 *)(unaff_EBP + -0x10);
        do {
          puVar17 = *(undefined4 **)(*(int *)(iVar11 + 0x10) + 4 + iVar9);
          if (((puVar17 != (undefined4 *)0x0) && (*(char *)(puVar17 + 2) == '\x02')) &&
             (pcVar16 = *(char **)(*(int *)puVar17[1] + 0x94), pcVar16 != (char *)0x0)) {
            if (*(int *)(unaff_EBP + -0x18) == 0) {
              uVar5 = FUN_00491f10(puVar17);
              *(uint *)(unaff_EBP + -0x18) = (uint)(CONCAT31(extraout_var,uVar5) == 0);
            }
            cVar3 = *pcVar16;
            pcVar6 = pcVar16;
            while (cVar3 != '\0') {
              pcVar6 = pcVar6 + 1;
              cVar3 = *pcVar6;
            }
            uVar7 = (**(code **)(**(int **)(unaff_EBP + -4) + 0xc))
                              (*(int **)(unaff_EBP + -4),pcVar16,
                               ((int)pcVar6 - (int)pcVar16 & 0x3fffffffU) + 1,
                               *(undefined4 *)(unaff_EBP + -0xc),*(undefined4 *)(unaff_EBP + -0x14))
            ;
            cVar3 = *pcVar16;
            pcVar6 = pcVar16;
            while (cVar3 != '\0') {
              pcVar6 = pcVar6 + 1;
              cVar3 = *pcVar6;
            }
            uVar8 = ((int)pcVar6 - (int)pcVar16 & 0x3fffffffU) + 1;
            puVar1 = (uint *)(unaff_EBP + -0xc);
            uVar2 = *puVar1;
            *puVar1 = *puVar1 + uVar8;
            *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + (uint)CARRY4(uVar2,uVar8);
            if (uVar7 != 0) {
              piVar12 = *(int **)(unaff_EBP + -4);
              goto LAB_004bf079;
            }
            iVar10 = *(int *)(unaff_EBP + -0x1c);
          }
          iVar10 = iVar10 + 1;
          iVar9 = *(int *)(unaff_EBP + -0x20) + 0x10;
          *(int *)(unaff_EBP + -0x1c) = iVar10;
          *(int *)(unaff_EBP + -0x20) = iVar9;
        } while (iVar10 < *(int *)(iVar11 + 0x14));
        if (*(int *)(unaff_EBP + -0x18) != 0) {
          piVar12 = *(int **)(unaff_EBP + -4);
          uVar7 = (**(code **)(*piVar12 + 0x30))(piVar12);
          if (((uVar7 & 0x400) == 0) &&
             (uVar7 = (**(code **)(*piVar12 + 0x14))(piVar12,2), uVar7 != 0)) {
LAB_004bf079:
            if (*piVar12 != 0) {
              (**(code **)(*piVar12 + 4))(piVar12);
              *piVar12 = 0;
            }
            FUN_00466dd0((int)piVar12);
            puVar17 = *(undefined4 **)(unaff_EBP + 0xc);
            (**(code **)(*(int *)(unaff_EBP + -8) + 0x1c))(*(int *)(unaff_EBP + -8),puVar17,0);
            FUN_00494b00(iVar11,puVar17);
            return uVar7;
          }
        }
      }
      uVar7 = 0;
      iVar9 = 0;
      iVar10 = 0;
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      do {
        if (*(int *)(iVar11 + 0x14) <= iVar9) break;
        puVar17 = *(undefined4 **)(*(int *)(iVar11 + 0x10) + 4 + iVar10);
        if (puVar17 != (undefined4 *)0x0) {
          uVar7 = FUN_0048f2f0(puVar17,*(char **)(unaff_EBP + 0xc));
          iVar10 = *(int *)(unaff_EBP + -0x20);
        }
        iVar10 = iVar10 + 0x10;
        iVar9 = iVar9 + 1;
        *(int *)(unaff_EBP + -0x20) = iVar10;
      } while (uVar7 == 0);
      piVar12 = *(int **)(unaff_EBP + -4);
      if (*piVar12 != 0) {
        (**(code **)(*piVar12 + 4))(piVar12);
        *piVar12 = 0;
      }
      FUN_00466dd0((int)piVar12);
      if (uVar7 != 0) {
        FUN_00494b00(iVar11,*(undefined4 **)(unaff_EBP + 0xc));
        return uVar7;
      }
      puVar17 = *(undefined4 **)(unaff_EBP + 0xc);
      uVar7 = (**(code **)(*(int *)(unaff_EBP + -8) + 0x1c))(*(int *)(unaff_EBP + -8),puVar17,1);
      *(uint *)(unaff_EBP + -0x18) = uVar7;
      FUN_00494b00(iVar11,puVar17);
      if (uVar7 == 0) {
        if (DAT_00583e74 != (code *)0x0) {
          (*DAT_00583e74)();
        }
        if (0 < *(int *)(iVar11 + 0x14)) {
          iVar9 = 0;
          *(undefined4 *)(unaff_EBP + 0xc) = 0;
          iVar10 = 0;
          do {
            piVar12 = *(int **)(*(int *)(iVar11 + 0x10) + 4 + iVar9);
            if ((piVar12 != (int *)0x0) && ((char)piVar12[2] != '\0')) {
              FUN_0048fbc0(piVar12);
              if ((char)piVar12[2] == '\x02') {
                puVar17 = (undefined4 *)piVar12[1];
                *(undefined4 **)(unaff_EBP + -0x1c) = puVar17;
                piVar4 = (int *)*puVar17;
                *(int **)(unaff_EBP + -0x20) = piVar4;
                if (piVar4[10] == 0) {
                  if (((*(char *)((int)piVar4 + 0xf) == '\x02') && ((char)piVar4[1] != '\0')) &&
                     (*(char *)((int)piVar4 + 5) == '\x01')) {
                    *(undefined1 *)((int)piVar4 + 0xf) = 1;
                  }
                  else {
                    uVar7 = FUN_00484760(piVar4,(uint)*(byte *)((int)piVar4 + 0x12));
                    if (((uVar7 & 0xff) == 0xd) || ((uVar7 & 0xff) == 10)) {
                      iVar9 = *(int *)(unaff_EBP + -0x20);
                      *(uint *)(iVar9 + 0x28) = uVar7;
                      *(undefined1 *)(iVar9 + 0xf) = 6;
                    }
                  }
                }
                *(undefined1 *)(*(int *)(unaff_EBP + -0x1c) + 0x13) = 1;
              }
              FUN_00471200(piVar12);
              if (*(char *)((int)piVar12 + 9) != '\0') {
                piVar4 = piVar12 + 3;
                *piVar4 = *piVar4 + -1;
                if (*piVar4 == 0) {
                  if (*(int *)(piVar12[1] + 0x38) != 0) {
                    (*DAT_00582b20)(*(int *)(piVar12[1] + 0x38));
                  }
                  *(undefined1 *)((int)piVar12 + 10) = 0;
                }
              }
            }
            iVar10 = iVar10 + 1;
            iVar9 = *(int *)(unaff_EBP + 0xc) + 0x10;
            *(int *)(unaff_EBP + 0xc) = iVar9;
          } while (iVar10 < *(int *)(iVar11 + 0x14));
          uVar7 = *(uint *)(unaff_EBP + -0x18);
        }
        if (DAT_00583e78 != (code *)0x0) {
          (*DAT_00583e78)();
          FUN_004719f0(iVar11,0x40);
          return uVar7;
        }
        FUN_004719f0(iVar11,0x40);
      }
      return uVar7;
    }
    if (unaff_ESI == 1) {
      FUN_004683f0(0xd,"MJ collide: %s");
    }
  }
  bVar14 = DAT_00582acc == 0;
  *(int *)(unaff_EBP + -0x1c) = unaff_ESI + 1;
  iVar11 = 4;
  puVar13 = (undefined1 *)(unaff_EBP + -0x20);
  if (bVar14) {
    iVar10 = 0;
  }
  else {
    iVar10 = (*DAT_00582b10)(5);
    if (iVar10 != 0) {
      (*DAT_00582b18)(iVar10);
    }
  }
  do {
    uVar5 = FUN_00487580();
    *puVar13 = uVar5;
    puVar13 = puVar13 + 1;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  if (iVar10 != 0) {
    (*DAT_00582b20)(iVar10);
  }
  unaff_EDI = *(undefined4 **)(unaff_EBP + 0xc);
  FUN_00466a80(0xd,*(int *)(unaff_EBP + -0x14) + (int)unaff_EDI,(byte *)"-mj%06X9%02X");
  iVar11 = *(int *)(unaff_EBP + -8);
  unaff_EBX = (**(code **)(iVar11 + 0x20))(iVar11,unaff_EDI,0,unaff_EBP + -0x24);
  if (unaff_EBX != 0) goto LAB_004bf1e4;
  if (*(int *)(unaff_EBP + -0x24) == 0) goto LAB_004beedf;
  unaff_ESI = *(int *)(unaff_EBP + -0x1c);
  goto LAB_004bee00;
}


/* FUN_004bf0fa @ 004bf0fa  kind=gamemisc  attributed-by=none  size=254 */

undefined4 FUN_004bf0fa(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  
  do {
    piVar1 = *(int **)(*(int *)(unaff_EDI + 0x10) + 4 + unaff_ESI);
    if ((piVar1 != (int *)0x0) && ((char)piVar1[2] != '\0')) {
      FUN_0048fbc0(piVar1);
      if ((char)piVar1[2] == '\x02') {
        puVar2 = (undefined4 *)piVar1[1];
        *(undefined4 **)(unaff_EBP + -0x1c) = puVar2;
        piVar3 = (int *)*puVar2;
        *(int **)(unaff_EBP + -0x20) = piVar3;
        if (piVar3[10] == 0) {
          if (((*(char *)((int)piVar3 + 0xf) == '\x02') && ((char)piVar3[1] != '\0')) &&
             (*(char *)((int)piVar3 + 5) == '\x01')) {
            *(undefined1 *)((int)piVar3 + 0xf) = 1;
          }
          else {
            uVar6 = FUN_00484760(piVar3,(uint)*(byte *)((int)piVar3 + 0x12));
            if (((uVar6 & 0xff) == 0xd) || ((uVar6 & 0xff) == 10)) {
              iVar4 = *(int *)(unaff_EBP + -0x20);
              *(uint *)(iVar4 + 0x28) = uVar6;
              *(undefined1 *)(iVar4 + 0xf) = 6;
            }
          }
        }
        *(undefined1 *)(*(int *)(unaff_EBP + -0x1c) + 0x13) = 1;
      }
      FUN_00471200(piVar1);
      if (*(char *)((int)piVar1 + 9) != '\0') {
        piVar3 = piVar1 + 3;
        *piVar3 = *piVar3 + -1;
        if (*piVar3 == 0) {
          if (*(int *)(piVar1[1] + 0x38) != 0) {
            (*DAT_00582b20)(*(int *)(piVar1[1] + 0x38));
          }
          *(undefined1 *)((int)piVar1 + 10) = 0;
        }
      }
    }
    unaff_EBX = unaff_EBX + 1;
    unaff_ESI = *(int *)(unaff_EBP + 0xc) + 0x10;
    *(int *)(unaff_EBP + 0xc) = unaff_ESI;
  } while (unaff_EBX < *(int *)(unaff_EDI + 0x14));
  uVar5 = *(undefined4 *)(unaff_EBP + -0x18);
  if (DAT_00583e78 != (code *)0x0) {
    (*DAT_00583e78)();
    FUN_004719f0(unaff_EDI,0x40);
    return uVar5;
  }
  FUN_004719f0(unaff_EDI,0x40);
  return uVar5;
}


/* FUN_004bf360 @ 004bf360  kind=gamemisc  attributed-by=none  size=186 */

undefined4 __cdecl FUN_004bf360(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar1 = *(int *)(param_1 + 0x48);
  iVar5 = *(int *)(iVar1 + 0x14) / 2;
  if (param_2 < iVar5) {
    iVar9 = *(int *)(*(int *)(iVar1 + 0x28) + param_2 * 8);
    iVar5 = *(int *)(*(int *)(iVar1 + 0x28) + 4 + param_2 * 8);
  }
  else {
    iVar9 = (param_2 - iVar5) * 2;
    iVar5 = iVar9 + 1;
  }
  iVar8 = iVar9 * 0x30 + *(int *)(iVar1 + 0x24);
  iVar7 = iVar5 * 0x30 + *(int *)(iVar1 + 0x24);
  if (*(int *)(iVar8 + 0x18) != 0) {
    if (*(int *)(iVar7 + 0x18) == 0) {
      *(int *)(*(int *)(iVar1 + 0x28) + param_2 * 4) = iVar9;
      return 0;
    }
    iVar2 = *(int *)(iVar8 + 0x14);
    pbVar3 = *(byte **)(iVar8 + 0x20);
    piVar4 = *(int **)(iVar1 + 0x34);
    if (*(byte **)(iVar7 + 0x20) != (byte *)0x0) {
      FUN_004b8560(*(undefined4 **)(param_1 + 8),*(int *)(iVar7 + 0x14),*(byte **)(iVar7 + 0x20),
                   (uint)piVar4);
    }
    uVar6 = FUN_004b83b0(iVar2,pbVar3,piVar4);
    if ((int)uVar6 < 1) {
      iVar5 = iVar9;
    }
  }
  *(int *)(*(int *)(iVar1 + 0x28) + param_2 * 4) = iVar5;
  return 0;
}


/* FUN_004bf420 @ 004bf420  kind=gamemisc  attributed-by=none  size=158 */

int __cdecl FUN_004bf420(int param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  undefined8 local_c;
  
  puVar1 = *(uint **)(param_2 + 0x48);
  local_c = 0;
  iVar3 = 0;
  do {
    puVar5 = (uint *)(puVar1[9] + iVar3);
    iVar2 = FUN_004bf4c0(param_1,puVar1,puVar1[2],puVar1[3],puVar5,(uint *)&local_c);
    puVar1[2] = puVar5[2];
    uVar4 = puVar5[3];
    puVar1[3] = uVar4;
    if (((iVar2 != 0) || ((int)puVar1[1] < (int)uVar4)) ||
       (((int)puVar1[1] <= (int)uVar4 && (*puVar1 <= puVar1[2])))) break;
    iVar3 = iVar3 + 0x30;
  } while (iVar3 < 0x300);
  uVar4 = puVar1[5];
  while ((iVar2 == 0 && (uVar4 = uVar4 - 1, 0 < (int)uVar4))) {
    iVar2 = FUN_004bf360(param_2,uVar4);
  }
  *param_3 = (uint)local_c;
  local_c._4_4_ = (uint)((ulonglong)local_c >> 0x20);
  param_3[1] = local_c._4_4_;
  return iVar2;
}


/* FUN_004bf4c0 @ 004bf4c0  kind=gamemisc  attributed-by=none  size=268 */

int __cdecl
FUN_004bf4c0(int param_1,uint *param_2,uint param_3,uint param_4,uint *param_5,uint *param_6)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  
  puVar1 = param_5;
  uVar4 = *(uint *)(*(int *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + 4) + 0x20);
  param_5[6] = param_2[0xb];
  *param_5 = param_3;
  param_5[1] = param_4;
  param_5[4] = 0x80;
  puVar2 = FUN_00494b90(param_1,0x80);
  puVar1[7] = (uint)puVar2;
  puVar1[10] = uVar4;
  puVar2 = FUN_00494b90(param_1,uVar4);
  puVar1[9] = (uint)puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    return 7;
  }
  uVar5 = __allrem(param_3,param_4,uVar4,(int)uVar4 >> 0x1f);
  param_5 = (uint *)uVar5;
  if (param_5 != (uint *)0x0) {
    uVar4 = uVar4 - (int)param_5;
    iVar3 = ((int)uVar4 >> 0x1f) + param_4 + (uint)CARRY4(uVar4,param_3);
    if (((int)param_2[1] <= iVar3) && (((int)param_2[1] < iVar3 || (*param_2 < uVar4 + param_3)))) {
      uVar4 = *param_2 - param_3;
    }
    iVar3 = (**(code **)(*(int *)param_2[0xb] + 8))
                      ((int *)param_2[0xb],(int)puVar2 + (int)param_5,uVar4,param_3,param_4);
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  puVar1[2] = *param_2;
  puVar1[3] = param_2[1];
  iVar3 = FUN_004bf7b0(param_1,puVar1,&param_3);
  puVar1[2] = *puVar1 + param_3;
  puVar1[3] = puVar1[1] + param_4 + (uint)CARRY4(*puVar1,param_3);
  uVar4 = *param_6;
  *param_6 = *param_6 + param_3;
  param_6[1] = param_6[1] + param_4 + (uint)CARRY4(uVar4,param_3);
  if (iVar3 == 0) {
    iVar3 = FUN_004bf5d0(param_1,puVar1);
  }
  return iVar3;
}


/* FUN_004bf5d0 @ 004bf5d0  kind=gamemisc  attributed-by=none  size=126 */

int __cdecl FUN_004bf5d0(int param_1,uint *param_2)

{
  int iVar1;
  uint local_c [2];
  
  local_c[0] = 0;
  local_c[1] = 0;
  if (((int)param_2[3] <= (int)param_2[1]) &&
     (((int)param_2[3] < (int)param_2[1] || (param_2[2] <= *param_2)))) {
    FUN_00494b00(param_1,(undefined4 *)param_2[7]);
    FUN_00494b00(param_1,(undefined4 *)param_2[9]);
    memset(param_2,0,0x30);
    return 0;
  }
  iVar1 = FUN_004bf7b0(param_1,param_2,local_c);
  if (iVar1 == 0) {
    param_2[5] = local_c[0];
    iVar1 = FUN_004bf650(param_1,param_2,local_c[0],param_2 + 8);
  }
  return iVar1;
}


/* FUN_004bf650 @ 004bf650  kind=gamemisc  attributed-by=none  size=347 */

int __cdecl FUN_004bf650(int param_1,uint *param_2,uint param_3,uint *param_4)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  
  puVar2 = param_2;
  uVar6 = param_2[10];
  uVar7 = *param_2;
  uVar5 = (int)uVar6 >> 0x1f;
  uVar8 = __allrem(uVar7,param_2[1],uVar6,uVar5);
  param_2 = (uint *)uVar8;
  if (param_2 == (uint *)0x0) {
    iVar4 = (puVar2[3] - puVar2[1]) - (uint)(puVar2[2] < uVar7);
    if ((iVar4 < (int)uVar5) || ((iVar4 <= (int)uVar5 && (puVar2[2] - uVar7 <= uVar6)))) {
      uVar6 = puVar2[2] - uVar7;
    }
    iVar4 = (**(code **)(*(int *)puVar2[6] + 8))((int *)puVar2[6],puVar2[9],uVar6,uVar7,puVar2[1]);
    if (iVar4 != 0) {
      return iVar4;
    }
  }
  uVar6 = param_3;
  uVar7 = puVar2[10] - (int)param_2;
  if ((int)param_3 <= (int)uVar7) {
    *param_4 = puVar2[9] + (int)param_2;
    uVar6 = *puVar2;
    *puVar2 = *puVar2 + param_3;
    puVar2[1] = puVar2[1] + ((int)param_3 >> 0x1f) + (uint)CARRY4(uVar6,param_3);
    return 0;
  }
  uVar5 = puVar2[4];
  if ((int)uVar5 < (int)param_3) {
    do {
      uVar5 = uVar5 * 2;
    } while ((int)uVar5 < (int)param_3);
    puVar1 = (undefined4 *)puVar2[7];
    puVar3 = FUN_00494cf0(param_1,puVar1,uVar5);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_00494b00(param_1,puVar1);
    }
    puVar2[7] = (uint)puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      return 7;
    }
    puVar2[4] = uVar5;
  }
  memcpy((void *)puVar2[7],(void *)(puVar2[9] + (int)param_2),uVar7);
  uVar5 = *puVar2;
  *puVar2 = *puVar2 + uVar7;
  puVar2[1] = puVar2[1] + ((int)uVar7 >> 0x1f) + (uint)CARRY4(uVar5,uVar7);
  uVar6 = uVar6 - uVar7;
  while( true ) {
    if ((int)uVar6 < 1) {
      *param_4 = puVar2[7];
      return 0;
    }
    uVar7 = uVar6;
    if ((int)puVar2[10] < (int)uVar6) {
      uVar7 = puVar2[10];
    }
    iVar4 = FUN_004bf650(param_1,puVar2,uVar7,(uint *)&param_2);
    if (iVar4 != 0) break;
    memcpy((void *)((puVar2[7] - uVar6) + param_3),param_2,uVar7);
    uVar6 = uVar6 - uVar7;
  }
  return iVar4;
}


/* FUN_004bf7b0 @ 004bf7b0  kind=gamemisc  attributed-by=none  size=185 */

void __cdecl FUN_004bf7b0(int param_1,uint *param_2,uint *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  byte *local_20;
  uint *local_1c;
  byte local_18 [16];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_1c = param_3;
  uVar4 = param_2[10];
  uVar5 = __allrem(*param_2,param_2[1],uVar4,(int)uVar4 >> 0x1f);
  iVar3 = (int)uVar5;
  if ((iVar3 != 0) && (8 < (int)(uVar4 - iVar3))) {
    uVar2 = FUN_0049d270((byte *)(param_2[9] + iVar3),local_1c);
    uVar4 = *param_2;
    *param_2 = *param_2 + (uVar2 & 0xff);
    param_2[1] = param_2[1] + (uint)CARRY4(uVar4,uVar2 & 0xff);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  uVar4 = 0;
  do {
    iVar3 = FUN_004bf650(param_1,param_2,1,(uint *)&local_20);
    if (iVar3 != 0) goto LAB_004bf858;
    bVar1 = *local_20;
    uVar2 = uVar4 & 0xf;
    uVar4 = uVar4 + 1;
    local_18[uVar2] = bVar1;
  } while ((char)bVar1 < '\0');
  FUN_0049d270(local_18,local_1c);
LAB_004bf858:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004bf870 @ 004bf870  kind=gamemisc  attributed-by=none  size=294 */

void __cdecl FUN_004bf870(int *param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  size_t sVar5;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_2c;
  undefined8 local_24;
  uint *local_1c;
  int *local_18;
  byte local_14 [12];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  puVar1 = *(uint **)(param_2 + 0x48);
  local_18 = param_1;
  local_44 = 0;
  local_3c = 0;
  local_34 = 0;
  local_2c = 0;
  local_24 = 0;
  local_1c = puVar1;
  if (puVar1[4] == 0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar4 = FUN_004bfb50(param_2);
  if ((iVar4 == 0) &&
     ((puVar1[0xb] != 0 || (iVar4 = FUN_004bfa40(param_1,puVar1 + 0xb), iVar4 == 0)))) {
    FUN_00479360((int)param_1,puVar1[0xb],&local_44,*puVar1,puVar1[1]);
    puVar1[6] = puVar1[6] + 1;
    sVar5 = FUN_004a5fc0(local_14,puVar1[4],(int)puVar1[4] >> 0x1f);
    FUN_004793f0((int *)&local_44,(int)local_14,sVar5);
    piVar3 = (int *)puVar1[0xc];
    piVar2 = param_1;
    while (piVar3 != (int *)0x0) {
      piVar2 = (int *)piVar3[2];
      sVar5 = FUN_004a5fc0(local_14,piVar3[1],piVar3[1] >> 0x1f);
      FUN_004793f0((int *)&local_44,(int)local_14,sVar5);
      FUN_004793f0((int *)&local_44,*piVar3,piVar3[1]);
      FUN_00494b00((int)param_1,piVar3);
      puVar1 = local_1c;
      piVar3 = piVar2;
      piVar2 = local_18;
    }
    puVar1[0xc] = 0;
    FUN_004792d0((int)piVar2,(int *)&local_44,(int *)puVar1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004bf9a0 @ 004bf9a0  kind=gamemisc  attributed-by=none  size=158 */

void __cdecl FUN_004bf9a0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  byte *pbVar2;
  int *piVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  bool bVar7;
  undefined4 local_8;
  
  local_8 = 0;
  puVar6 = &local_8;
  if (param_3 == (undefined4 *)0x0) {
    pbVar5 = (byte *)0x0;
  }
  else {
    pbVar5 = (byte *)*param_3;
  }
  bVar7 = param_2 == (undefined4 *)0x0;
  if (!bVar7) {
    do {
      if (param_3 == (undefined4 *)0x0) break;
      iVar1 = param_2[1];
      pbVar2 = (byte *)*param_2;
      piVar3 = *(int **)(*(int *)(param_1 + 0x48) + 0x34);
      if (pbVar5 != (byte *)0x0) {
        FUN_004b8560(*(undefined4 **)(param_1 + 8),param_3[1],pbVar5,(uint)piVar3);
      }
      uVar4 = FUN_004b83b0(iVar1,pbVar2,piVar3);
      if ((int)uVar4 < 1) {
        *puVar6 = param_2;
        puVar6 = param_2 + 2;
        pbVar5 = (byte *)0x0;
        param_2 = (undefined4 *)*puVar6;
      }
      else {
        *puVar6 = param_3;
        puVar6 = param_3 + 2;
        param_3 = (undefined4 *)*puVar6;
        if (param_3 == (undefined4 *)0x0) break;
        pbVar5 = (byte *)*param_3;
      }
    } while (param_2 != (undefined4 *)0x0);
    bVar7 = param_2 == (undefined4 *)0x0;
  }
  if (!bVar7) {
    param_3 = param_2;
  }
  *puVar6 = param_3;
  *param_4 = local_8;
  return;
}


/* FUN_004bfa40 @ 004bfa40  kind=gamemisc  attributed-by=none  size=103 */

int __cdecl FUN_004bfa40(int *param_1,undefined4 *param_2)

{
  size_t _Size;
  void *_Dst;
  int iVar1;
  
  iVar1 = *param_1;
  _Size = *(size_t *)(iVar1 + 4);
  _Dst = (void *)FUN_004a0350(_Size);
  if (_Dst == (void *)0x0) {
    return 7;
  }
  memset(_Dst,0,_Size);
  iVar1 = (**(code **)(iVar1 + 0x18))(iVar1,0,_Dst,0x101e,&param_1);
  if (iVar1 != 0) {
    FUN_00466dd0((int)_Dst);
    return iVar1;
  }
  *param_2 = _Dst;
  return 0;
}


/* FUN_004bfab0 @ 004bfab0  kind=gamemisc  attributed-by=none  size=145 */

void __cdecl FUN_004bfab0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
joined_r0x004bfab8:
  do {
    if (param_2 == (undefined4 *)0x0) {
      return;
    }
    puVar1 = (undefined4 *)param_2[2];
    if (param_1 != 0) {
      if (*(int *)(param_1 + 0x1f0) != 0) {
        if ((param_2 < *(undefined4 **)(param_1 + 0x104)) ||
           (*(undefined4 **)(param_1 + 0x108) <= param_2)) {
          iVar2 = (*DAT_00582af0._4_4_)(param_2);
          **(int **)(param_1 + 0x1f0) = **(int **)(param_1 + 0x1f0) + iVar2;
          param_2 = puVar1;
        }
        else {
          **(int **)(param_1 + 0x1f0) =
               **(int **)(param_1 + 0x1f0) + (uint)*(ushort *)(param_1 + 0xe8);
          param_2 = puVar1;
        }
        goto joined_r0x004bfab8;
      }
      if ((*(undefined4 **)(param_1 + 0x104) <= param_2) &&
         (param_2 < *(undefined4 **)(param_1 + 0x108))) {
        *param_2 = *(undefined4 *)(param_1 + 0x100);
        *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + -1;
        *(undefined4 **)(param_1 + 0x100) = param_2;
        param_2 = puVar1;
        goto joined_r0x004bfab8;
      }
    }
    FUN_00466dd0((int)param_2);
    param_2 = puVar1;
  } while( true );
}


/* FUN_004bfb50 @ 004bfb50  kind=gamemisc  attributed-by=none  size=211 */

undefined4 __cdecl FUN_004bfb50(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *_Dst;
  int iVar4;
  int iVar5;
  undefined4 *local_8;
  
  iVar2 = *(int *)(param_1 + 0x48);
  _Dst = (int *)FUN_004a0350(0x100);
  if (_Dst != (int *)0x0) {
    memset(_Dst,0,0x100);
    local_8 = *(undefined4 **)(iVar2 + 0x30);
    while (local_8 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)local_8[2];
      iVar5 = 0;
      local_8[2] = 0;
      iVar4 = *_Dst;
      piVar1 = _Dst;
      while (iVar4 != 0) {
        FUN_004bf9a0(param_1,local_8,(undefined4 *)*piVar1,&local_8);
        iVar5 = iVar5 + 1;
        *piVar1 = 0;
        piVar1 = _Dst + iVar5;
        iVar4 = *piVar1;
      }
      _Dst[iVar5] = (int)local_8;
      local_8 = puVar3;
    }
    local_8 = (undefined4 *)0x0;
    iVar4 = 0;
    do {
      FUN_004bf9a0(param_1,local_8,(undefined4 *)_Dst[iVar4],&local_8);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x40);
    *(undefined4 **)(iVar2 + 0x30) = local_8;
    FUN_00466dd0((int)_Dst);
    return 0;
  }
  return 7;
}


/* FUN_004bfed0 @ 004bfed0  kind=gamemisc  attributed-by=none  size=759 */

int __cdecl
FUN_004bfed0(int param_1,int param_2,undefined4 *param_3,undefined *param_4,undefined4 *param_5)

{
  ushort *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  int *local_28;
  int local_24;
  byte *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 *local_c;
  int local_8;
  
  local_14 = 0;
  local_18 = *(undefined4 *)(param_2 + 0x34);
  local_10 = *(undefined4 *)(param_2 + 0x30);
  local_c = (undefined4 *)FUN_004a02d0(param_1,&DAT_0056de50);
  if (local_c == (undefined4 *)0x0) {
    return 7;
  }
  piVar2 = FUN_00494b90(param_1,0x1c);
  if (piVar2 == (int *)0x0) {
    FUN_00494b00(param_1,local_c);
    return 7;
  }
  piVar2[0] = 0;
  piVar2[1] = 0;
  piVar2[2] = 0;
  piVar2[3] = 0;
  piVar2[4] = 0;
  piVar2[5] = 0;
  piVar2[6] = 0;
  *piVar2 = param_1;
  piVar2[1] = (int)param_3;
  iVar3 = FUN_004a7ba0(param_1,*(int *)(param_2 + 0x40));
  *(undefined4 *)(*(int *)(param_2 + 0x34) + 4) =
       *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar3 * 0x10);
  uVar4 = *(undefined4 *)(param_1 + 0x134);
  *(int ***)(param_1 + 0x134) = &local_28;
  local_24 = param_2;
  local_28 = piVar2;
  local_10 = (*(code *)param_4)(param_1,param_3[2],local_10,local_18,piVar2 + 2,&local_14);
  puVar8 = local_c;
  *(undefined4 *)(param_1 + 0x134) = uVar4;
  if (local_10 == 7) {
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  else if (local_10 == 0) {
    if ((undefined4 *)piVar2[2] == (undefined4 *)0x0) {
      FUN_00494b00(param_1,local_c);
      return 0;
    }
    *(undefined4 *)piVar2[2] = *param_3;
    piVar2[3] = 1;
    if (local_24 != 0) {
      uVar4 = FUN_004a02d0(param_1,(byte *)"vtable constructor did not declare schema: %s");
      *param_5 = uVar4;
      FUN_004ba040(piVar2);
      FUN_00494b00(param_1,local_c);
      return 1;
    }
    piVar2[6] = *(int *)(param_2 + 0x38);
    *(int **)(param_2 + 0x38) = piVar2;
    local_18 = 0;
    local_10 = 0;
    if (0 < *(short *)(param_2 + 0x26)) {
      local_8 = 0;
      do {
        iVar3 = 0;
        pbVar7 = *(byte **)(*(int *)(param_2 + 4) + 0xc + local_8);
        if (pbVar7 != (byte *)0x0) {
          uVar5 = FUN_004aa9b0((char *)pbVar7);
          iVar6 = FUN_00468380((byte *)"hidden",pbVar7,6);
          if ((iVar6 == 0) && ((pbVar7[6] == 0 || (pbVar7[6] == 0x20)))) {
LAB_004c0139:
            if (iVar3 < (int)uVar5) {
              local_20 = pbVar7 + iVar3;
              iVar6 = (pbVar7[iVar3 + 6] != 0) + 6;
              if (iVar6 + iVar3 <= (int)uVar5) {
                local_1c = iVar6 - (int)pbVar7;
                pbVar7 = local_20;
                do {
                  *pbVar7 = pbVar7[iVar6];
                  pbVar7 = pbVar7 + 1;
                } while ((int)(pbVar7 + local_1c) <= (int)uVar5);
              }
              if ((*local_20 == 0) && (0 < iVar3)) {
                local_20[-1] = 0;
              }
              puVar1 = (ushort *)(*(int *)(param_2 + 4) + 0x16 + local_8);
              *puVar1 = *puVar1 | 2;
            }
          }
          else {
            iVar3 = 0;
            if (0 < (int)uVar5) {
              do {
                iVar6 = FUN_00468380((byte *)" hidden",pbVar7 + iVar3,7);
                if ((iVar6 == 0) && ((pbVar7[iVar3 + 7] == 0 || (pbVar7[iVar3 + 7] == 0x20)))) {
                  iVar3 = iVar3 + 1;
                  goto LAB_004c0139;
                }
                iVar3 = iVar3 + 1;
              } while (iVar3 < (int)uVar5);
            }
          }
        }
        local_18 = local_18 + 1;
        local_8 = local_8 + 0x18;
      } while (local_18 < *(short *)(param_2 + 0x26));
    }
    iVar3 = local_10;
    FUN_00494b00(param_1,local_c);
    return iVar3;
  }
  if (local_14 == 0) {
    uVar4 = FUN_004a02d0(param_1,(byte *)"vtable constructor failed: %s");
    *param_5 = uVar4;
  }
  else {
    uVar4 = FUN_004a02d0(param_1,&DAT_0056de50);
    *param_5 = uVar4;
    FUN_00466dd0(local_14);
    puVar8 = local_c;
  }
  FUN_00494b00(param_1,piVar2);
  iVar3 = local_10;
  FUN_00494b00(param_1,puVar8);
  return iVar3;
}


/* FUN_004c05d0 @ 004c05d0  kind=gamemisc  attributed-by=none  size=185 */

void __cdecl FUN_004c05d0(int param_1,uint *param_2,int param_3,int *param_4,int *param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  
  puVar4 = (uint *)(param_3 + (int)param_2);
  if (param_4 == (int *)0x0) {
    iVar7 = 0;
    iVar6 = 0;
  }
  else {
    iVar6 = *param_4;
    iVar7 = param_4[1];
  }
  if (param_1 != 0) {
    do {
      iVar6 = iVar6 + *param_2 + iVar7;
      puVar5 = param_2 + 1;
      param_2 = param_2 + 2;
      iVar7 = iVar7 + *puVar5 + iVar6;
    } while (param_2 < puVar4);
    param_5[1] = iVar7;
    *param_5 = iVar6;
    return;
  }
  puVar5 = param_2 + 1;
  do {
    uVar2 = puVar5[-1];
    uVar3 = *puVar5;
    iVar6 = iVar6 + (uint)*(byte *)((int)puVar5 + -1) +
                    (uVar2 >> 8 & 0xff00) + iVar7 + (uVar2 * 0x10000 + (uVar2 & 0xff00)) * 0x100;
    iVar7 = iVar7 + (uint)*(byte *)((int)puVar5 + 3) +
                    (uVar3 >> 8 & 0xff00) + iVar6 + (uVar3 * 0x10000 + (uVar3 & 0xff00)) * 0x100;
    puVar1 = puVar5 + 1;
    puVar5 = puVar5 + 2;
  } while (puVar1 < puVar4);
  param_5[1] = iVar7;
  *param_5 = iVar6;
  return;
}


/* FUN_004c0740 @ 004c0740  kind=gamemisc  attributed-by=none  size=263 */

undefined4 __cdecl
FUN_004c0740(int param_1,int *param_2,undefined4 *param_3,uint *param_4,uint *param_5)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1 + 0x4c);
  if ((*(uint *)(param_1 + 0x54) != param_5[2]) || (*(uint *)(param_1 + 0x58) != param_5[3])) {
    return 0;
  }
  iVar3 = CONCAT31(CONCAT21(CONCAT11((char)*param_5,*(undefined1 *)((int)param_5 + 1)),
                            *(undefined1 *)((int)param_5 + 2)),*(undefined1 *)((int)param_5 + 3));
  if (iVar3 != 0) {
    uVar2 = (uint)(*(char *)(param_1 + 0x41) == '\0');
    FUN_004c05d0(uVar2,param_5,8,piVar1,piVar1);
    FUN_004c05d0(uVar2,param_4,*(int *)(param_1 + 0x24),piVar1,piVar1);
    if ((*piVar1 ==
         CONCAT31(CONCAT21(CONCAT11((char)param_5[4],*(undefined1 *)((int)param_5 + 0x11)),
                           *(undefined1 *)((int)param_5 + 0x12)),
                  *(undefined1 *)((int)param_5 + 0x13))) &&
       (*(int *)(param_1 + 0x50) ==
        CONCAT31(CONCAT21(CONCAT11((char)param_5[5],*(undefined1 *)((int)param_5 + 0x15)),
                          *(undefined1 *)((int)param_5 + 0x16)),*(undefined1 *)((int)param_5 + 0x17)
                ))) {
      *param_2 = iVar3;
      *param_3 = CONCAT31(CONCAT21(CONCAT11((char)param_5[1],*(undefined1 *)((int)param_5 + 5)),
                                   *(undefined1 *)((int)param_5 + 6)),
                          *(undefined1 *)((int)param_5 + 7));
      return 1;
    }
  }
  return 0;
}


/* FUN_004c0850 @ 004c0850  kind=gamemisc  attributed-by=none  size=189 */

void __cdecl
FUN_004c0850(int param_1,undefined4 param_2,undefined4 param_3,uint *param_4,uint *param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  *(char *)param_5 = (char)((uint)param_2 >> 0x18);
  *(char *)((int)param_5 + 3) = (char)param_2;
  *(char *)((int)param_5 + 1) = (char)((uint)param_2 >> 0x10);
  *(char *)((int)param_5 + 2) = (char)((uint)param_2 >> 8);
  *(char *)(param_5 + 1) = (char)((uint)param_3 >> 0x18);
  *(char *)((int)param_5 + 5) = (char)((uint)param_3 >> 0x10);
  *(char *)((int)param_5 + 6) = (char)((uint)param_3 >> 8);
  *(char *)((int)param_5 + 7) = (char)param_3;
  param_5[2] = *(uint *)(param_1 + 0x54);
  param_5[3] = *(uint *)(param_1 + 0x58);
  piVar1 = (int *)(param_1 + 0x4c);
  uVar4 = (uint)(*(char *)(param_1 + 0x41) == '\0');
  FUN_004c05d0(uVar4,param_5,8,piVar1,piVar1);
  FUN_004c05d0(uVar4,param_4,*(int *)(param_1 + 0x24),piVar1,piVar1);
  iVar2 = *piVar1;
  *(char *)(param_5 + 4) = (char)((uint)iVar2 >> 0x18);
  *(char *)((int)param_5 + 0x11) = (char)((uint)iVar2 >> 0x10);
  *(char *)((int)param_5 + 0x12) = (char)((uint)iVar2 >> 8);
  *(char *)((int)param_5 + 0x13) = (char)iVar2;
  uVar3 = *(undefined4 *)(param_1 + 0x50);
  *(char *)(param_5 + 5) = (char)((uint)uVar3 >> 0x18);
  *(char *)((int)param_5 + 0x15) = (char)((uint)uVar3 >> 0x10);
  *(char *)((int)param_5 + 0x16) = (char)((uint)uVar3 >> 8);
  *(char *)((int)param_5 + 0x17) = (char)uVar3;
  return;
}


/* FUN_004c0910 @ 004c0910  kind=gamemisc  attributed-by=none  size=235 */

int __cdecl FUN_004c0910(int param_1,void *param_2,int param_3)

{
  int iVar1;
  short sVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  pvVar4 = param_2;
  uVar8 = (int)param_2 + 0x21U >> 0xc;
  iVar6 = FUN_004c0ae0(param_1,uVar8,&param_2);
  pvVar5 = param_2;
  if (iVar6 == 0) {
    if (uVar8 == 0) {
      param_2 = (void *)((int)param_2 + 0x88);
      iVar7 = 0;
    }
    else {
      iVar7 = (uVar8 - 1) * 0x1000 + 0xfde;
    }
    iVar7 = (int)pvVar4 - iVar7;
    iVar1 = (int)param_2 + -4;
    if (iVar7 == 1) {
      memset(param_2,0,(int)pvVar5 + (0x7ffc - iVar1));
    }
    if (*(int *)(iVar1 + iVar7 * 4) != 0) {
      FUN_004c0690(param_1);
    }
    uVar8 = param_3 * 0x17f & 0x1fff;
    sVar2 = *(short *)((int)pvVar5 + uVar8 * 2 + 0x4000);
    iVar3 = iVar7;
    while (sVar2 != 0) {
      if (iVar3 == 0) {
        FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
        return 0xb;
      }
      uVar8 = uVar8 + 1 & 0x1fff;
      iVar3 = iVar3 + -1;
      sVar2 = *(short *)((int)pvVar5 + uVar8 * 2 + 0x4000);
    }
    *(int *)(iVar1 + iVar7 * 4) = param_3;
    *(short *)((int)pvVar5 + uVar8 * 2 + 0x4000) = (short)iVar7;
  }
  return iVar6;
}


/* FUN_004c1640 @ 004c1640  kind=gamemisc  attributed-by=none  size=42 */

void __cdecl
FUN_004c1640(int param_1,void *param_2,int param_3,int *param_4,int *param_5,void *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  int local_10;
  
  iVar1 = *param_5;
  iVar2 = *param_4;
  iVar4 = 0;
  iVar6 = 0;
  local_10 = 0;
  do {
    if (iVar6 < iVar1) {
      if (iVar4 < param_3) goto LAB_004c16a3;
LAB_004c16ce:
      iVar6 = iVar6 + 1;
      uVar5 = *(ushort *)(iVar2 + -2 + iVar6 * 2);
    }
    else {
      if (param_3 <= iVar4) {
        *param_4 = (int)param_2;
        *param_5 = local_10;
        memcpy(param_2,param_6,local_10 * 2);
        return;
      }
LAB_004c16a3:
      if (iVar6 < iVar1) {
        if (*(uint *)(param_1 + (uint)*(ushort *)(iVar2 + iVar6 * 2) * 4) <=
            *(uint *)(param_1 + (uint)*(ushort *)((int)param_2 + iVar4 * 2) * 4)) goto LAB_004c16ce;
        uVar5 = *(ushort *)((int)param_2 + iVar4 * 2);
        iVar4 = iVar4 + 1;
      }
      else {
        uVar5 = *(ushort *)((int)param_2 + iVar4 * 2);
        iVar4 = iVar4 + 1;
      }
    }
    iVar3 = *(int *)(param_1 + (uint)uVar5 * 4);
    local_10 = local_10 + 1;
    *(ushort *)((int)param_6 + local_10 * 2 + -2) = uVar5;
    if ((iVar4 < param_3) &&
       (*(int *)(param_1 + (uint)*(ushort *)((int)param_2 + iVar4 * 2) * 4) == iVar3)) {
      iVar4 = iVar4 + 1;
    }
  } while( true );
}


/* FUN_004c166a @ 004c166a  kind=gamemisc  attributed-by=none  size=178 */

void __fastcall FUN_004c166a(int param_1,int param_2)

{
  int in_EAX;
  int iVar1;
  ushort uVar2;
  int iVar3;
  int unaff_EBP;
  int unaff_ESI;
  void *unaff_EDI;
  
  do {
    iVar1 = *(int *)(unaff_EBP + -4);
LAB_004c1673:
    if (unaff_ESI < param_2) {
      if (in_EAX < param_1) goto LAB_004c16a3;
      iVar3 = *(int *)(unaff_EBP + 8);
LAB_004c16ce:
      unaff_ESI = unaff_ESI + 1;
      uVar2 = *(ushort *)(*(int *)(unaff_EBP + -4) + -2 + unaff_ESI * 2);
    }
    else {
      if (param_1 <= in_EAX) {
        iVar1 = *(int *)(unaff_EBP + -0xc);
        **(undefined4 **)(unaff_EBP + 0x14) = unaff_EDI;
        **(int **)(unaff_EBP + 0x18) = iVar1;
        memcpy(unaff_EDI,*(void **)(unaff_EBP + 0x1c),iVar1 * 2);
        return;
      }
LAB_004c16a3:
      if (unaff_ESI < param_2) {
        iVar3 = *(int *)(unaff_EBP + 8);
        if (*(uint *)(iVar3 + (uint)*(ushort *)(iVar1 + unaff_ESI * 2) * 4) <=
            *(uint *)(iVar3 + (uint)*(ushort *)((int)unaff_EDI + in_EAX * 2) * 4))
        goto LAB_004c16ce;
        uVar2 = *(ushort *)((int)unaff_EDI + in_EAX * 2);
        in_EAX = in_EAX + 1;
      }
      else {
        uVar2 = *(ushort *)((int)unaff_EDI + in_EAX * 2);
        iVar3 = *(int *)(unaff_EBP + 8);
        in_EAX = in_EAX + 1;
      }
    }
    iVar3 = *(int *)(iVar3 + (uint)uVar2 * 4);
    iVar1 = *(int *)(unaff_EBP + -0xc) + 1;
    *(ushort *)(*(int *)(unaff_EBP + 0x1c) + -2 + iVar1 * 2) = uVar2;
    unaff_EDI = *(void **)(unaff_EBP + 0xc);
    param_2 = *(int *)(unaff_EBP + -8);
    *(int *)(unaff_EBP + -0xc) = iVar1;
    param_1 = *(int *)(unaff_EBP + 0x10);
  } while (param_1 <= in_EAX);
  param_1 = *(int *)(unaff_EBP + 0x10);
  param_2 = *(int *)(unaff_EBP + -8);
  iVar1 = *(int *)(unaff_EBP + -4);
  if (*(int *)(*(int *)(unaff_EBP + 8) + (uint)*(ushort *)((int)unaff_EDI + in_EAX * 2) * 4) ==
      iVar3) {
    in_EAX = in_EAX + 1;
  }
  goto LAB_004c1673;
}


/* FUN_004c1940 @ 004c1940  kind=gamemisc  attributed-by=none  size=388 */

void __cdecl FUN_004c1940(int *param_1)

{
  int *piVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 local_10;
  int *local_c;
  int local_8;
  
  piVar1 = param_1;
  if ((short)param_1[10] != 0) {
    return;
  }
  local_c = (int *)(*(int *)param_1[8] + 0x60);
  if (*local_c != 0) {
    iVar5 = 4;
    piVar3 = &local_8;
    if (DAT_00582acc == 0) {
      param_1 = (int *)0x0;
    }
    else {
      param_1 = (int *)(*DAT_00582b10)(5);
      if (param_1 != (int *)0x0) {
        (*DAT_00582b18)(param_1);
      }
    }
    do {
      uVar2 = FUN_00487580();
      *(undefined1 *)piVar3 = uVar2;
      piVar3 = (int *)((int)piVar3 + 1);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (param_1 != (int *)0x0) {
      (*DAT_00582b20)(param_1);
    }
    if ((*(char *)((int)piVar1 + 0x2b) == '\0') &&
       (iVar5 = (**(code **)(*(int *)piVar1[1] + 0x38))((int *)piVar1[1],4,4,10), iVar5 != 0)) {
      if (iVar5 != 5) {
        return;
      }
    }
    else {
      piVar1[0x1a] = piVar1[0x1a] + 1;
      piVar1[0x11] = 0;
      iVar5 = CONCAT31(CONCAT21(CONCAT11((char)piVar1[0x15],*(undefined1 *)((int)piVar1 + 0x55)),
                                *(undefined1 *)((int)piVar1 + 0x56)),
                       *(undefined1 *)((int)piVar1 + 0x57)) + 1;
      *(char *)(piVar1 + 0x15) = (char)((uint)iVar5 >> 0x18);
      *(char *)((int)piVar1 + 0x55) = (char)((uint)iVar5 >> 0x10);
      *(char *)((int)piVar1 + 0x56) = (char)((uint)iVar5 >> 8);
      *(char *)((int)piVar1 + 0x57) = (char)iVar5;
      piVar1[0x16] = local_8;
      FUN_004c12b0((int)piVar1);
      *local_c = 0;
      local_c[2] = 0;
      piVar3 = local_c + 3;
      iVar5 = 3;
      do {
        *piVar3 = -1;
        piVar3 = piVar3 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      if (*(char *)((int)piVar1 + 0x2b) != '\0') goto LAB_004c1a9f;
      (**(code **)(*(int *)piVar1[1] + 0x38))((int *)piVar1[1],4,4,9);
    }
  }
  if (*(char *)((int)piVar1 + 0x2b) == '\0') {
    (**(code **)(*(int *)piVar1[1] + 0x38))((int *)piVar1[1],3,1,5);
  }
LAB_004c1a9f:
  *(undefined2 *)(piVar1 + 10) = 0xffff;
  iVar5 = 0;
  do {
    iVar5 = iVar5 + 1;
    iVar4 = FUN_004c1ad0(piVar1,&local_10,1,iVar5);
  } while (iVar4 == -1);
  return;
}


/* FUN_004c1ad0 @ 004c1ad0  kind=gamemisc  attributed-by=none  size=711 */

int __cdecl FUN_004c1ad0(int *param_1,undefined4 *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  uint local_8;
  
  if (5 < param_4) {
    iVar2 = 1;
    if (100 < param_4) {
      return 0xf;
    }
    if (9 < param_4) {
      iVar2 = (param_4 + -9) * 0xee;
    }
    (**(code **)(*param_1 + 0x3c))(*param_1,iVar2);
  }
  if (param_3 == 0) {
    iVar2 = FUN_004c0c00((int)param_1,param_2);
    if (iVar2 == 5) {
      if (*(int *)param_1[8] == 0) {
        return -1;
      }
      if ((*(char *)((int)param_1 + 0x2b) != '\0') ||
         (iVar2 = (**(code **)(*(int *)param_1[1] + 0x38))((int *)param_1[1],2,1,6), iVar2 == 0)) {
        FUN_004c1da0((int)param_1,2);
        return -1;
      }
      if (iVar2 == 5) {
        return 0x105;
      }
    }
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  iVar6 = 0;
  iVar2 = *(int *)param_1[8];
  if ((param_3 == 0) && (*(int *)(iVar2 + 0x60) == param_1[0x11])) {
    if (*(char *)((int)param_1 + 0x2b) == '\0') {
      iVar6 = (**(code **)(*(int *)param_1[1] + 0x38))((int *)param_1[1],3,1,6);
    }
    else {
      iVar6 = 0;
    }
    if (*(char *)((int)param_1 + 0x2b) != '\x02') {
      (**(code **)(*(int *)param_1[1] + 0x3c))((int *)param_1[1]);
    }
    if (iVar6 == 0) {
      piVar5 = param_1 + 0xd;
      piVar3 = *(int **)param_1[8];
      uVar7 = 0x2c;
      do {
        if (*piVar3 != *piVar5) {
          FUN_004c1da0((int)param_1,3);
          return -1;
        }
        piVar3 = piVar3 + 1;
        piVar5 = piVar5 + 1;
        bVar8 = 3 < uVar7;
        uVar7 = uVar7 - 4;
      } while (bVar8);
      *(undefined2 *)(param_1 + 10) = 0;
      return 0;
    }
    if (iVar6 != 5) {
      return iVar6;
    }
  }
  local_8 = 0;
  param_4 = 0;
  iVar1 = 1;
  puVar4 = (uint *)(iVar2 + 0x68);
  do {
    uVar7 = *puVar4;
    if ((local_8 <= uVar7) && (uVar7 <= (uint)param_1[0x11])) {
      local_8 = uVar7;
      param_4 = iVar1;
    }
    iVar1 = iVar1 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar1 < 5);
  if ((*(byte *)((int)param_1 + 0x2e) & 2) == 0) {
    if (((uint)param_1[0x11] <= local_8) && (param_4 != 0)) goto LAB_004c1cf1;
    iVar1 = 1;
    do {
      if (*(char *)((int)param_1 + 0x2b) != '\0') {
        iVar6 = 0;
LAB_004c1ca4:
        local_8 = param_1[0x11];
        *(uint *)(iVar2 + 100 + iVar1 * 4) = local_8;
        param_4 = iVar1;
        if (*(char *)((int)param_1 + 0x2b) == '\0') {
          (**(code **)(*(int *)param_1[1] + 0x38))((int *)param_1[1],iVar1 + 3,1,9);
        }
        break;
      }
      iVar6 = (**(code **)(*(int *)param_1[1] + 0x38))((int *)param_1[1],iVar1 + 3,1,10);
      if (iVar6 == 0) goto LAB_004c1ca4;
      if (iVar6 != 5) {
        return iVar6;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 5);
  }
  if (param_4 == 0) {
    iVar2 = 0x208;
    if (iVar6 == 5) {
      iVar2 = -1;
    }
    return iVar2;
  }
LAB_004c1cf1:
  if ((*(char *)((int)param_1 + 0x2b) == '\0') &&
     (iVar6 = (**(code **)(*(int *)param_1[1] + 0x38))((int *)param_1[1],param_4 + 3,1,6),
     iVar6 != 0)) {
    if (iVar6 == 5) {
      iVar6 = -1;
    }
    return iVar6;
  }
  if (*(char *)((int)param_1 + 0x2b) != '\x02') {
    (**(code **)(*(int *)param_1[1] + 0x3c))((int *)param_1[1]);
  }
  if (*(uint *)(iVar2 + 100 + param_4 * 4) == local_8) {
    piVar5 = param_1 + 0xd;
    piVar3 = *(int **)param_1[8];
    uVar7 = 0x2c;
    while (*piVar3 == *piVar5) {
      piVar3 = piVar3 + 1;
      piVar5 = piVar5 + 1;
      bVar8 = uVar7 < 4;
      uVar7 = uVar7 - 4;
      if (bVar8) {
        *(short *)(param_1 + 10) = (short)param_4;
        return 0;
      }
    }
  }
  if (*(char *)((int)param_1 + 0x2b) == '\0') {
    (**(code **)(*(int *)param_1[1] + 0x38))((int *)param_1[1],param_4 + 3,1,5);
  }
  return -1;
}


/* FUN_004c1da0 @ 004c1da0  kind=gamemisc  attributed-by=none  size=35 */

void __cdecl FUN_004c1da0(int param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0x2b) == '\0') {
    (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),param_2,1,5);
  }
  return;
}


/* FUN_004c1dd0 @ 004c1dd0  kind=gamemisc  attributed-by=none  size=171 */

void __cdecl FUN_004c1dd0(int param_1,int param_2,uint param_3,uint param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = param_1;
  param_1 = param_5;
  if ((param_5 <= *(int *)(iVar1 + 0xc)) &&
     ((param_5 < *(int *)(iVar1 + 0xc) || (param_4 < *(uint *)(iVar1 + 8))))) {
    iVar3 = ((int)param_3 >> 0x1f) + param_5 + (uint)CARRY4(param_3,param_4);
    if ((*(int *)(iVar1 + 0xc) <= iVar3) &&
       ((*(int *)(iVar1 + 0xc) < iVar3 || (*(uint *)(iVar1 + 8) <= param_3 + param_4)))) {
      uVar2 = *(int *)(iVar1 + 8) - param_4;
      iVar3 = (**(code **)(**(int **)(iVar1 + 4) + 0xc))
                        (*(int **)(iVar1 + 4),param_2,uVar2,param_4,param_5);
      if (iVar3 != 0) {
        return;
      }
      bVar4 = CARRY4(param_4,uVar2);
      param_4 = param_4 + uVar2;
      param_1 = param_5 + ((int)uVar2 >> 0x1f) + (uint)bVar4;
      param_2 = param_2 + uVar2;
      param_3 = param_3 - uVar2;
      iVar3 = (**(code **)(**(int **)(iVar1 + 4) + 0x14))
                        (*(int **)(iVar1 + 4),*(undefined4 *)(iVar1 + 0x10));
      if (param_3 == 0) {
        return;
      }
      if (iVar3 != 0) {
        return;
      }
    }
  }
  (**(code **)(**(int **)(iVar1 + 4) + 0xc))(*(int **)(iVar1 + 4),param_2,param_3,param_4,param_1);
  return;
}


/* FUN_004c1e80 @ 004c1e80  kind=gamemisc  attributed-by=none  size=120 */

void __cdecl FUN_004c1e80(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = param_1[6];
  iVar2 = *(int *)*param_1;
  puVar4 = (undefined4 *)param_1[8];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    if ((*(byte *)((int)puVar4 + 0x12) & 1) != 0) {
      FUN_00498790(iVar2,(undefined4 *)*puVar4);
    }
    if (((*(byte *)((int)puVar4 + 0x12) & 0x10) != 0) ||
       ((*(byte *)((int)puVar4 + 0x12) & 0x20) != 0)) {
      puVar3 = (undefined4 *)puVar4[3];
      FUN_004c1e80(puVar3);
      FUN_00494b00(iVar2,puVar3);
    }
    puVar4 = puVar4 + 10;
  }
  if ((undefined4 *)param_1[8] != param_1 + 10) {
    FUN_00494b00(iVar2,(undefined4 *)param_1[8]);
  }
  return;
}


/* FUN_004c1f00 @ 004c1f00  kind=gamemisc  attributed-by=none  size=250 */

int __cdecl FUN_004c1f00(undefined4 *param_1,char *param_2,byte param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *_Dst;
  uint uVar3;
  
  if ((int)param_1[7] <= (int)param_1[6]) {
    puVar1 = (undefined4 *)param_1[8];
    iVar2 = *(int *)*param_1;
    _Dst = FUN_00494b90(iVar2,param_1[7] * 0x50);
    param_1[8] = _Dst;
    if (_Dst == (undefined4 *)0x0) {
      if ((param_3 & 1) != 0) {
        FUN_00498790(iVar2,(undefined4 *)param_2);
      }
      param_1[8] = puVar1;
      return 0;
    }
    memcpy(_Dst,puVar1,param_1[6] * 0x28);
    if (puVar1 != param_1 + 10) {
      FUN_00494b00(iVar2,puVar1);
    }
    uVar3 = param_1[8];
    if ((((iVar2 == 0) || (uVar3 == 0)) || (uVar3 < *(uint *)(iVar2 + 0x104))) ||
       (*(uint *)(iVar2 + 0x108) <= uVar3)) {
      uVar3 = (*DAT_00582af0._4_4_)(uVar3);
    }
    else {
      uVar3 = (uint)*(ushort *)(iVar2 + 0xe8);
    }
    param_1[7] = uVar3 / 0x28;
  }
  iVar2 = param_1[6];
  puVar1 = (undefined4 *)(param_1[8] + iVar2 * 0x28);
  param_1[6] = iVar2 + 1;
  for (; (param_2 != (char *)0x0 && ((*param_2 == '\\' || (*param_2 == '\x18'))));
      param_2 = *(char **)(param_2 + 8)) {
  }
  *puVar1 = param_2;
  puVar1[5] = param_1;
  *(byte *)((int)puVar1 + 0x12) = param_3;
  puVar1[1] = 0xffffffff;
  return iVar2;
}


/* FUN_004c2000 @ 004c2000  kind=gamemisc  attributed-by=none  size=108 */

undefined4 * __cdecl FUN_004c2000(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = FUN_0049ae70(param_2);
  puVar2 = (undefined4 *)0x0;
  for (; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0xc)) {
    iVar1 = *param_1;
    if (puVar2 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)FUN_004a02d0(iVar1,(byte *)"name=%Q");
    }
    else {
      puVar4 = (undefined4 *)FUN_004a02d0(iVar1,(byte *)"%s OR name=%Q");
      FUN_00494b00(iVar1,puVar2);
    }
    puVar2 = puVar4;
  }
  return puVar2;
}


/* FUN_004c2070 @ 004c2070  kind=gamemisc  attributed-by=none  size=158 */

void __cdecl FUN_004c2070(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint *puVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    iVar2 = 0;
    if (0 < (int)param_2[7]) {
      puVar3 = param_2 + 0xe;
      do {
        puVar1 = (undefined4 *)puVar3[0x14];
        if (puVar1 != (undefined4 *)0x0) {
          if (puVar1[7] != 0) {
            FUN_00466dd0(puVar1[6]);
          }
          FUN_00494b00(param_1,puVar1);
        }
        if (((*puVar3 & 0x20000000) != 0) &&
           (puVar1 = (undefined4 *)puVar3[4], puVar1 != (undefined4 *)0x0)) {
          FUN_00494b00(param_1,(undefined4 *)puVar1[4]);
          FUN_00494b00(param_1,puVar1);
        }
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 0x16;
      } while (iVar2 < (int)param_2[7]);
    }
    FUN_004c1e80((undefined4 *)param_2[8]);
    FUN_00494b00(param_1,param_2);
  }
  return;
}


