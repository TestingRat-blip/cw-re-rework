// Unsorted_003 (game_misc) -- cube. 150 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Unsorted_003.h"

/* FUN_00520e20 @ 00520e20  kind=gamemisc  attributed-by=none  size=126 */

void FUN_00520e20(int param_1)

{
  int iVar1;
  double *pdVar2;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if ((*(ushort *)(iVar1 + 0x1c) & 0x2000) == 0) {
    FUN_00574d80();
    *(undefined2 *)(iVar1 + 0x1c) = 1;
    *(undefined4 *)(iVar1 + 4) = 0;
  }
  pdVar2 = *(double **)(iVar1 + 4);
  if (pdVar2 != (double *)0x0) {
    if ((-1 < *(int *)((int)pdVar2 + 0x14)) &&
       ((0 < *(int *)((int)pdVar2 + 0x14) || (*(int *)(pdVar2 + 2) != 0)))) {
      FUN_00574df0(param_1 + 8,*pdVar2 / (double)(longlong)pdVar2[2]);
    }
  }
  return;
}


/* FUN_00520ea0 @ 00520ea0  kind=gamemisc  attributed-by=none  size=764 */

void FUN_00520ea0(int param_1,byte *param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  void *_Dst;
  size_t _Size;
  undefined4 local_9c [4];
  int local_8c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if (((*param_2 == 0x2f) && (((&DAT_007121d8)[param_2[1]] & 2) != 0)) && (param_2[2] == 0x3a)) {
    param_2 = param_2 + 1;
  }
  if (((DAT_0076b35c != 0) && (bVar1 = *param_2, bVar1 != 0x2f)) &&
     ((bVar1 != 0x5c && ((((&DAT_007121d8)[bVar1] & 2) == 0 || (param_2[1] != 0x3a)))))) {
    iVar2 = *(int *)(param_1 + 8);
    if (param_3 < *(int *)(param_1 + 8)) {
      iVar2 = param_3;
    }
    FUN_005240c0(iVar2,param_4,"%s\\%s",DAT_0076b35c,param_2);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar2 = FUN_00533710(param_2);
  if (iVar2 == 0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (DAT_0076b480 == 0) {
    local_9c[0] = 0x94;
    (*(code *)PTR_GetVersionExA_0076721c)(local_9c);
    DAT_0076b480 = (local_8c == 2) + 1;
  }
  if (DAT_0076b480 == 2) {
    iVar3 = (*(code *)PTR_GetFullPathNameW_007671b0)();
    if (iVar3 == 0) {
      uVar4 = (*(code *)PTR_GetLastError_007671bc)("GetFullPathNameW1",iVar2,0x85ec);
      FUN_0057fa50(1,uVar4);
      FUN_00524410(iVar2);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    iVar3 = iVar3 + 3;
    _Dst = (void *)FUN_0055da00(iVar3 * 2);
    if (_Dst == (void *)0x0) {
LAB_0052117d:
      FUN_00524410(iVar2);
      goto LAB_00521186;
    }
    memset(_Dst,0,iVar3 * 2);
    iVar3 = (*(code *)PTR_GetFullPathNameW_007671b0)(iVar2,iVar3,_Dst,0);
    if (iVar3 == 0) {
      uVar4 = (*(code *)PTR_GetLastError_007671bc)("GetFullPathNameW2",iVar2,0x85f9);
      FUN_0057fa50(1,uVar4);
      FUN_00524410(iVar2);
      FUN_00524410(_Dst);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_00524410(iVar2);
    iVar2 = FUN_0057b270(_Dst);
  }
  else {
    iVar3 = (*(code *)PTR_GetFullPathNameA_007671a4)(iVar2,0,0,0);
    if (iVar3 == 0) {
      uVar4 = (*(code *)PTR_GetLastError_007671bc)("GetFullPathNameA1",iVar2,0x8608);
      FUN_0057fa50(1,uVar4);
      FUN_00524410(iVar2);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    _Size = iVar3 + 3;
    _Dst = (void *)FUN_0055da00(_Size);
    if (_Dst == (void *)0x0) goto LAB_0052117d;
    memset(_Dst,0,_Size);
    iVar3 = (*(code *)PTR_GetFullPathNameA_007671a4)(iVar2,_Size,_Dst,0);
    if (iVar3 == 0) {
      uVar4 = (*(code *)PTR_GetLastError_007671bc)("GetFullPathNameA2",iVar2,0x8615);
      FUN_0057fa50(1,uVar4);
      FUN_00524410(iVar2);
      FUN_00524410(_Dst);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_00524410(iVar2);
    iVar2 = FUN_0057a3c0(_Dst);
  }
  FUN_00524410(_Dst);
  if (iVar2 != 0) {
    iVar3 = *(int *)(param_1 + 8);
    if (param_3 < *(int *)(param_1 + 8)) {
      iVar3 = param_3;
    }
    FUN_005240c0(iVar3,param_4,&DAT_00716900,iVar2);
    FUN_00524410(iVar2);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
LAB_00521186:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005211c0 @ 005211c0  kind=gamemisc  attributed-by=none  size=87 */

void FUN_005211c0(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if ((*(ushort *)(iVar1 + 0x1c) & 0x2000) == 0) {
    FUN_00574d80();
    *(undefined2 *)(iVar1 + 0x1c) = 1;
    *(undefined4 *)(iVar1 + 4) = 0;
  }
  if (*(undefined8 **)(iVar1 + 4) == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = **(undefined8 **)(iVar1 + 4);
  }
  FUN_00574df0(param_1 + 8,uVar2);
  return;
}


/* FUN_00521220 @ 00521220  kind=gamemisc  attributed-by=none  size=120 */

void FUN_00521220(undefined4 *param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  if (*(int *)*param_1 != 0) {
    (*DAT_00766630)(*(int *)*param_1);
  }
  piVar3 = (int *)(param_1[0xb] + (param_3 % (uint)param_1[10]) * 4);
  iVar1 = *(int *)(param_1[0xb] + (param_3 % (uint)param_1[10]) * 4);
  while (iVar1 != param_2) {
    piVar3 = (int *)(*piVar3 + 0xc);
    iVar1 = *piVar3;
  }
  *piVar3 = *(int *)(param_2 + 0xc);
  uVar2 = param_1[10];
  *(uint *)(param_2 + 8) = param_4;
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1[0xb] + (param_4 % uVar2) * 4);
  *(int *)(param_1[0xb] + (param_4 % uVar2) * 4) = param_2;
  if ((uint)param_1[7] < param_4) {
    param_1[7] = param_4;
  }
  if (*(int *)*param_1 != 0) {
    (*DAT_00766638)(*(int *)*param_1);
  }
  return;
}


/* FUN_005212c0 @ 005212c0  kind=gamemisc  attributed-by=none  size=95 */

void FUN_005212c0(undefined4 *param_1,int param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  
  iVar2 = param_1[0xc];
  if ((*(ushort *)(iVar2 + 0x1c) & 0x2000) == 0) {
    FUN_005748c0(iVar2,8,0);
    *(undefined2 *)(iVar2 + 0x1c) = 0x2000;
    *(undefined4 *)(iVar2 + 0x10) = *param_1;
    if (*(undefined8 **)(iVar2 + 4) != (undefined8 *)0x0) {
      **(undefined8 **)(iVar2 + 4) = 0;
    }
  }
  puVar3 = *(uint **)(iVar2 + 4);
  if (((param_2 == 0) || (*(char *)(*param_3 + 0x1e) != '\x05')) && (puVar3 != (uint *)0x0)) {
    uVar1 = *puVar3;
    *puVar3 = *puVar3 + 1;
    puVar3[1] = puVar3[1] + (uint)(0xfffffffe < uVar1);
  }
  return;
}


/* FUN_00521340 @ 00521340  kind=gamemisc  attributed-by=none  size=72 */

void FUN_00521340(undefined4 *param_1,uint param_2)

{
  if (*(int *)*param_1 != 0) {
    (*DAT_00766630)(*(int *)*param_1);
  }
  if (param_2 <= (uint)param_1[7]) {
    FUN_00544470(param_1,param_2);
    param_1[7] = param_2 - 1;
  }
  if (*(int *)*param_1 != 0) {
    (*DAT_00766638)(*(int *)*param_1);
  }
  return;
}


/* FUN_00521390 @ 00521390  kind=gamemisc  attributed-by=none  size=168 */

void FUN_00521390(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if ((*(ushort *)(iVar1 + 0x1c) & 0x2000) == 0) {
    FUN_00574d80(iVar1);
    *(undefined2 *)(iVar1 + 0x1c) = 1;
    *(undefined4 *)(iVar1 + 4) = 0;
  }
  puVar2 = *(undefined4 **)(iVar1 + 4);
  if (puVar2 == (undefined4 *)0x0) {
    uStack_8 = 0;
    local_c = 0;
  }
  else {
    local_c = *puVar2;
    uStack_8 = puVar2[1];
  }
  if ((*(ushort *)(param_1 + 0x24) & 0x2460) != 0) {
    FUN_00574d80((undefined4 *)(param_1 + 8));
  }
  FUN_005521a0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x2c));
  *(undefined4 *)(param_1 + 0x1c) = uStack_8;
  *(undefined4 *)(param_1 + 0x18) = local_c;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined2 *)(param_1 + 0x24) = 4;
  *(undefined1 *)(param_1 + 0x26) = 1;
  return;
}


/* FUN_00521460 @ 00521460  kind=gamemisc  attributed-by=none  size=104 */

void FUN_00521460(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (*piVar1 != 0) {
    (*DAT_00766630)(*piVar1);
  }
  FUN_00544470(param_1,0);
  piVar1[1] = piVar1[1] - param_1[5];
  piVar1[2] = piVar1[2] - param_1[4];
  piVar1[3] = (piVar1[1] - piVar1[2]) + 10;
  FUN_005440c0(piVar1);
  if (*piVar1 != 0) {
    (*DAT_00766638)(*piVar1);
  }
  FUN_00524410(param_1[0xb]);
  FUN_00524410(param_1);
  return;
}


/* FUN_005214d0 @ 005214d0  kind=gamemisc  attributed-by=none  size=215 */

void FUN_005214d0(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *param_3;
  iVar2 = param_1[0xc];
  if ((*(ushort *)(iVar2 + 0x1c) & 0x2000) == 0) {
    FUN_005748c0(iVar2,0x28,0);
    *(undefined2 *)(iVar2 + 0x1c) = 0x2000;
    *(int *)(iVar2 + 0x10) = *param_1;
    puVar3 = *(undefined8 **)(iVar2 + 4);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
    }
  }
  iVar2 = *(int *)(iVar2 + 4);
  if (iVar2 != 0) {
    if (*(char *)(*param_3 + 0x1e) == '\x05') {
      if (*(short *)(iVar2 + 0x1c) != 0) {
LAB_00521545:
        param_1[0xf] = 1;
        return;
      }
    }
    else {
      if (*(short *)(iVar2 + 0x1c) != 0) {
        iVar4 = *(int *)(*param_1 + 4);
        iVar5 = FUN_0055ddd0(iVar2,iVar1,param_1[0xd]);
        if (iVar4 == 0) {
          if (iVar5 < 1) goto LAB_00521545;
        }
        else if (-1 < iVar5) {
          param_1[0xf] = 1;
          return;
        }
        FUN_00574570(iVar2,iVar1);
        return;
      }
      FUN_00574570(iVar2,iVar1);
    }
  }
  return;
}


/* FUN_005215c0 @ 005215c0  kind=gamemisc  attributed-by=none  size=425 */

undefined4 FUN_005215c0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *_Dst;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int local_8;
  
  uVar5 = 0;
  local_8 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  if ((*(int *)(param_1 + 0x134) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x134) + 4), iVar1 != 0)) {
    _Dst = (int *)FUN_00552230(param_1,0x230);
    if (_Dst == (int *)0x0) {
      uVar5 = 7;
    }
    else {
      memset(_Dst,0,0x230);
      *(undefined1 *)((int)_Dst + 0x1d5) = 1;
      *_Dst = param_1;
      _Dst[0x6e] = 0;
      _Dst[0x6f] = 0x3ff00000;
      iVar3 = FUN_00564800(_Dst,param_2,&local_8);
      iVar2 = local_8;
      if ((((iVar3 == 0) && (iVar3 = _Dst[0x7f], iVar3 != 0)) && (*(char *)(param_1 + 0x38) == '\0')
          ) && ((*(int *)(iVar3 + 0xc) == 0 && ((*(byte *)(iVar3 + 0x2a) & 0x10) == 0)))) {
        if (*(int *)(iVar1 + 4) == 0) {
          *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar3 + 4);
          *(undefined2 *)(iVar1 + 0x26) = *(undefined2 *)(_Dst[0x7f] + 0x26);
          *(undefined2 *)(_Dst[0x7f] + 0x26) = 0;
          *(undefined4 *)(_Dst[0x7f] + 4) = 0;
        }
        *(undefined4 *)(*(int *)(param_1 + 0x134) + 4) = 0;
      }
      else {
        puVar4 = &DAT_00716900;
        if (local_8 == 0) {
          puVar4 = (undefined *)0x0;
        }
        FUN_00553890(param_1,1,puVar4,local_8);
        FUN_005521a0(param_1,iVar2);
        uVar5 = 1;
      }
      *(undefined1 *)((int)_Dst + 0x1d5) = 0;
      if (_Dst[2] != 0) {
        FUN_005734d0(_Dst[2]);
      }
      FUN_005529a0(param_1,_Dst[0x7f]);
      FUN_005521a0(param_1,_Dst);
    }
    uVar5 = FUN_0054a110(param_1,uVar5);
    if (*(int *)(param_1 + 0xc) != 0) {
      (*DAT_00766638)(*(int *)(param_1 + 0xc));
    }
    return uVar5;
  }
  FUN_00553890(param_1,0x15,0);
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  FUN_00525a30(0x15,"misuse at line %d of [%.10s]",0x18ea9,
               "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
  return 0x15;
}


/* FUN_00521770 @ 00521770  kind=gamemisc  attributed-by=none  size=168 */

uint FUN_00521770(int param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (param_2 != (char *)0x0) {
    cVar1 = *param_2;
    pcVar4 = param_2;
    while (cVar1 != '\0') {
      pcVar4 = pcVar4 + 1;
      cVar1 = *pcVar4;
    }
    uVar5 = (int)pcVar4 - (int)param_2 & 0x3fffffff;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  iVar3 = FUN_00556c60(param_1,param_2,uVar5,param_3,1,0);
  if (iVar3 == 0) {
    uVar5 = FUN_005515c0(param_1,param_2,param_3,1,0,FUN_0055cd50,0,0,0);
  }
  else {
    uVar5 = 0;
  }
  if ((*(char *)(param_1 + 0x38) != '\0') || (uVar5 == 0xc0a)) {
    FUN_00553890(param_1,7,0);
    *(undefined1 *)(param_1 + 0x38) = 0;
    uVar5 = 7;
  }
  uVar2 = *(uint *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return uVar2 & uVar5;
}


/* FUN_00521820 @ 00521820  kind=gamemisc  attributed-by=none  size=132 */

void FUN_00521820(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if ((*(ushort *)(iVar1 + 0x1c) & 0x2000) == 0) {
    FUN_00574d80(iVar1);
    *(undefined2 *)(iVar1 + 0x1c) = 1;
    *(undefined4 *)(iVar1 + 4) = 0;
  }
  puVar2 = *(undefined4 **)(iVar1 + 4);
  if (puVar2 != (undefined4 *)0x0) {
    if (*(short *)(puVar2 + 7) != 0) {
      FUN_00574570(param_1 + 8,puVar2);
    }
    if ((*(ushort *)(puVar2 + 7) & 0x2460) != 0) {
      FUN_00574d80(puVar2);
    }
    FUN_005521a0(*puVar2,puVar2[9]);
    puVar2[1] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
  }
  return;
}


/* FUN_005218b0 @ 005218b0  kind=gamemisc  attributed-by=none  size=153 */

void FUN_005218b0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_9c [4];
  int local_8c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_00533710(param_2);
  if (iVar1 == 0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (DAT_0076b480 == 0) {
    local_9c[0] = 0x94;
    (*(code *)PTR_GetVersionExA_0076721c)(local_9c);
    DAT_0076b480 = (local_8c == 2) + 1;
  }
  if (DAT_0076b480 == 2) {
    (*(code *)PTR_LoadLibraryW_00767288)();
  }
  else {
    (*(code *)PTR_LoadLibraryA_0076727c)(iVar1);
  }
  FUN_00524410(iVar1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00521950 @ 00521950  kind=gamemisc  attributed-by=none  size=270 */

void FUN_00521950(undefined4 *param_1,int param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (*(char *)(*param_3 + 0x1e) != '\x05') {
    iVar2 = param_1[0xc];
    if ((*(ushort *)(iVar2 + 0x1c) & 0x2000) == 0) {
      FUN_005748c0(iVar2,0x1c,0);
      *(undefined2 *)(iVar2 + 0x1c) = 0x2000;
      *(undefined4 *)(iVar2 + 0x10) = *param_1;
      puVar3 = *(undefined8 **)(iVar2 + 4);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        *(undefined4 *)(puVar3 + 3) = 0;
      }
    }
    iVar2 = *(int *)(iVar2 + 4);
    if (iVar2 != 0) {
      iVar4 = param_1[2];
      cVar1 = *(char *)(iVar2 + 0x19);
      *(undefined1 *)(iVar2 + 0x19) = 2;
      *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(iVar4 + 0x50);
      if (cVar1 != '\0') {
        if (param_2 == 2) {
          puVar5 = (undefined *)FUN_0056bce0(param_3[1],1);
          uVar6 = FUN_005288e0(param_3[1]);
        }
        else {
          puVar5 = &DAT_00718150;
          uVar6 = 1;
        }
        FUN_00567e70(iVar2,puVar5,uVar6);
      }
      uVar6 = FUN_0056bce0(*param_3,1);
      iVar4 = *param_3;
      if (((*(byte *)(iVar4 + 0x1c) & 0x10) == 0) && (iVar7 = FUN_0056bce0(iVar4,1), iVar7 == 0)) {
        FUN_00567e70(iVar2,uVar6,0);
        return;
      }
      iVar7 = *(int *)(iVar4 + 0x18);
      if ((*(ushort *)(iVar4 + 0x1c) & 0x4000) != 0) {
        iVar7 = iVar7 + *(int *)(iVar4 + 0x10);
      }
      FUN_00567e70(iVar2,uVar6,iVar7);
    }
  }
  return;
}


/* FUN_00522240 @ 00522240  kind=gamemisc  attributed-by=none  size=201 */

uint FUN_00522240(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  
  iVar3 = param_1;
  if (param_1 == 0) {
    FUN_00525a30(0x15,"misuse at line %d of [%.10s]",0x1146c,
                 "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
    return 0x15;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (*(int *)(iVar1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(iVar1 + 0xc));
  }
  if (*(int *)(iVar3 + 0x14) == 0) {
    uVar5 = 4;
  }
  else {
    uVar5 = FUN_0052e230(iVar3,param_2,param_3,&param_1);
    iVar3 = param_1;
    if (uVar5 != 0) {
      puVar4 = &DAT_00716900;
      if (param_1 == 0) {
        puVar4 = (undefined *)0x0;
      }
      FUN_00553890(iVar1,uVar5,puVar4,param_1);
      FUN_005521a0(iVar1,iVar3);
    }
  }
  if ((*(char *)(iVar1 + 0x38) != '\0') || (uVar5 == 0xc0a)) {
    FUN_00553890(iVar1,7,0);
    *(undefined1 *)(iVar1 + 0x38) = 0;
    uVar5 = 7;
  }
  uVar2 = *(uint *)(iVar1 + 0x30);
  if (*(int *)(iVar1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(iVar1 + 0xc));
  }
  return uVar2 & uVar5;
}


/* FUN_00522310 @ 00522310  kind=gamemisc  attributed-by=none  size=82 */

undefined4 FUN_00522310(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    if (*(int *)(iVar1 + 0xc) != 0) {
      (*DAT_00766630)(*(int *)(iVar1 + 0xc));
    }
    uVar2 = FUN_00528070(*(undefined4 *)(param_1 + 0x14));
    FUN_005521a0(iVar1,param_1);
    if (*(int *)(iVar1 + 0xc) != 0) {
      (*DAT_00766638)(*(int *)(iVar1 + 0xc));
    }
    return uVar2;
  }
  return 0;
}


/* FUN_005223b0 @ 005223b0  kind=gamemisc  attributed-by=none  size=173 */

void FUN_005223b0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x30);
  if ((*(ushort *)(iVar2 + 0x1c) & 0x2000) == 0) {
    FUN_00574d80(iVar2);
    *(undefined2 *)(iVar2 + 0x1c) = 1;
    *(undefined4 *)(iVar2 + 4) = 0;
  }
  iVar2 = *(int *)(iVar2 + 4);
  if (iVar2 != 0) {
    if (*(char *)(iVar2 + 0x1a) != '\0') {
      *(undefined4 *)(param_1 + 0x38) = 0x12;
      FUN_00575040(param_1 + 8,"string or blob too big",0xffffffff,1,0);
      return;
    }
    if (*(char *)(iVar2 + 0x18) != '\0') {
      FUN_0051d110(param_1);
      return;
    }
    uVar1 = FUN_00567fb0(iVar2);
    iVar2 = FUN_00575040(param_1 + 8,uVar1,0xffffffff,1,FUN_00524410);
    if (iVar2 == 0x12) {
      *(undefined4 *)(param_1 + 0x38) = 0x12;
      FUN_00575040(param_1 + 8,"string or blob too big",0xffffffff,1,0);
    }
  }
  return;
}


/* FUN_00522540 @ 00522540  kind=gamemisc  attributed-by=none  size=121 */

int FUN_00522540(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_00579f80();
  if (iVar2 == 0) {
    if (DAT_007665e4 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*DAT_00766628)(2);
      if (iVar2 != 0) {
        (*DAT_00766630)(iVar2);
      }
    }
    FUN_0057d3f0(param_1);
    iVar1 = DAT_0076b3b8;
    if ((param_2 == 0) && (DAT_0076b3b8 != 0)) {
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(DAT_0076b3b8 + 0xc);
      *(int *)(iVar1 + 0xc) = param_1;
    }
    else {
      *(int *)(param_1 + 0xc) = DAT_0076b3b8;
      DAT_0076b3b8 = param_1;
    }
    if (iVar2 != 0) {
      (*DAT_00766638)(iVar2);
    }
    iVar2 = 0;
  }
  return iVar2;
}


/* FUN_005225c0 @ 005225c0  kind=gamemisc  attributed-by=none  size=126 */

undefined4 FUN_005225c0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (DAT_007665e4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (*DAT_00766628)(2);
    if (iVar4 != 0) {
      (*DAT_00766630)(iVar4);
    }
  }
  if (param_1 != 0) {
    if (DAT_0076b3b8 == param_1) {
      DAT_0076b3b8 = *(int *)(param_1 + 0xc);
    }
    else if (DAT_0076b3b8 != 0) {
      iVar1 = *(int *)(DAT_0076b3b8 + 0xc);
      iVar3 = DAT_0076b3b8;
      while ((iVar1 != 0 && (iVar2 = *(int *)(iVar3 + 0xc), iVar2 != param_1))) {
        iVar1 = *(int *)(iVar2 + 0xc);
        iVar3 = iVar2;
      }
      if (*(int *)(iVar3 + 0xc) == param_1) {
        *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(param_1 + 0xc);
      }
    }
  }
  if (iVar4 != 0) {
    (*DAT_00766638)(iVar4);
  }
  return 0;
}


/* FUN_00522690 @ 00522690  kind=gamemisc  attributed-by=none  size=110 */

undefined4 FUN_00522690(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = (*(code *)PTR_CloseHandle_007670a8)(*(undefined4 *)(param_1 + 8));
  while (iVar1 == 0) {
    iVar3 = iVar3 + 1;
    if (2 < iVar3) goto LAB_005226d9;
    (*(code *)PTR_Sleep_00767300)(100);
    iVar1 = (*(code *)PTR_CloseHandle_007670a8)(*(undefined4 *)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (iVar1 != 0) {
    return 0;
  }
LAB_005226d9:
  uVar2 = (*(code *)PTR_GetLastError_007671bc)("winClose",*(undefined4 *)(param_1 + 0x1c),0x7dc3);
  uVar2 = FUN_0057fa50(0x100a,uVar2);
  return uVar2;
}


/* FUN_00522720 @ 00522720  kind=gamemisc  attributed-by=none  size=24 */

undefined4 FUN_00522720(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0052272e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*DAT_00766634)();
    return uVar1;
  }
  return 0;
}


/* FUN_00522760 @ 00522760  kind=gamemisc  attributed-by=none  size=177 */

void FUN_00522760(undefined4 param_1,uint param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar2 = 0;
  if (0xf < param_2) {
    (*(code *)PTR_GetSystemTime_007671e0)(&local_18);
    *param_3 = local_18;
    param_3[1] = CONCAT44(uStack_c,local_10);
    iVar2 = 0x10;
  }
  if (3 < param_2 - iVar2) {
    uVar1 = (*(code *)PTR_GetCurrentProcessId_00767150)();
    *(undefined4 *)((int)param_3 + iVar2) = uVar1;
    iVar2 = iVar2 + 4;
  }
  if (3 < param_2 - iVar2) {
    uVar1 = (*(code *)PTR_GetTickCount_00767210)();
    *(undefined4 *)((int)param_3 + iVar2) = uVar1;
    iVar2 = iVar2 + 4;
  }
  if (7 < param_2 - iVar2) {
    (*(code *)PTR_QueryPerformanceCounter_007672d0)(&local_10);
    *(undefined4 *)((int)param_3 + iVar2) = local_10;
    *(undefined4 *)((int)param_3 + iVar2 + 4) = uStack_c;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00522830 @ 00522830  kind=gamemisc  attributed-by=none  size=260 */

undefined4 FUN_00522830(uint param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 local_18;
  ulonglong local_10;
  undefined4 local_8;
  
  uVar2 = param_3;
  uVar1 = param_1;
  iVar5 = 0;
  local_18 = 0;
  local_8 = 0;
  local_10 = CONCAT44(param_5,param_4) & 0x7fffffffffffffff;
  while( true ) {
    iVar3 = (*(code *)PTR_ReadFile_007672dc)
                      (*(undefined4 *)(uVar1 + 8),param_2,uVar2,&param_1,&local_18);
    if (iVar3 != 0) break;
    iVar3 = (*(code *)PTR_GetLastError_007671bc)();
    if (iVar3 == 0x26) break;
    iVar3 = (*(code *)PTR_GetLastError_007671bc)();
    if ((DAT_007666d4 <= iVar5) || (((iVar3 != 5 && (iVar3 != 0x21)) && (iVar3 != 0x20)))) {
      *(int *)(uVar1 + 0x14) = iVar3;
      uVar4 = FUN_0057fa50(0x10a,iVar3,"winRead",*(undefined4 *)(uVar1 + 0x1c),0x7dec);
      return uVar4;
    }
    iVar5 = iVar5 + 1;
    (*(code *)PTR_Sleep_00767300)(iVar5 * DAT_007666d8);
  }
  if (iVar5 != 0) {
    FUN_00525a30(10,"delayed %dms for lock/sharing conflict",
                 ((iVar5 + 1) * DAT_007666d8 * iVar5) / 2);
  }
  if (param_1 < uVar2) {
    memset((void *)(param_1 + param_2),0,uVar2 - param_1);
    return 0x20a;
  }
  return 0;
}


/* FUN_005229f0 @ 005229f0  kind=gamemisc  attributed-by=none  size=39 */

uint FUN_005229f0(undefined4 param_1,uint param_2,undefined4 *param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  
  uVar1 = DAT_007666d0;
  uVar4 = 0;
  switch(param_1) {
  case 5:
    puVar5 = &DAT_0076b520;
    puVar6 = &DAT_0076b628;
    for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    *(undefined2 *)puVar6 = *(undefined2 *)puVar5;
    *(undefined1 *)((int)puVar6 + 2) = *(undefined1 *)((int)puVar5 + 2);
    return 0;
  case 6:
    puVar5 = &DAT_0076b628;
    puVar6 = &DAT_0076b520;
    for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    *(undefined2 *)puVar6 = *(undefined2 *)puVar5;
    *(undefined1 *)((int)puVar6 + 2) = *(undefined1 *)((int)puVar5 + 2);
    return 0;
  case 7:
    DAT_0076b520._0_1_ = 0;
    return 0;
  case 8:
    uVar1 = FUN_0054bd10(param_2,param_3);
    return uVar1;
  case 9:
    break;
  case 10:
    DAT_0076b3bc = param_2;
    DAT_0076b3c0 = param_3;
    return 0;
  case 0xb:
    uVar4 = DAT_007666d0;
    if (param_2 != 0) {
      DAT_007666d0 = param_2;
      return uVar1;
    }
    break;
  case 0xc:
    return 0;
  case 0xd:
    return param_2;
  case 0xe:
    if (*(int *)(param_2 + 0xc) != 0) {
      (*DAT_00766630)(*(int *)(param_2 + 0xc));
    }
    FUN_0054f2a0(*(undefined4 *)(*(int *)(param_2 + 0x10) + 4),0,param_3,0);
    if (*(int *)(param_2 + 0xc) != 0) {
      (*DAT_00766638)(*(int *)(param_2 + 0xc));
      return 0;
    }
    break;
  case 0xf:
    *(undefined2 *)(param_2 + 0x34) = param_3._0_2_;
    return 0;
  case 0x10:
    uVar7 = FUN_00568070(param_2);
    iVar2 = FUN_0053cd40((int)((ulonglong)uVar7 >> 0x20),(int)uVar7);
    return -(uint)(iVar2 != 0x1a) & 0x79;
  case 0x11:
    if (param_2 != 0) {
      uVar3 = FUN_005653d0(param_2);
      *param_3 = uVar3;
    }
    FUN_005652a0(param_4);
    return 0;
  case 0x12:
    DAT_007666cc = param_2;
    break;
  default:
    goto LAB_00522b71;
  }
LAB_00522b71:
  return uVar4;
}


/* FUN_00522bf0 @ 00522bf0  kind=gamemisc  attributed-by=none  size=86 */

undefined4 FUN_00522bf0(uint param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1 < 10) {
    uVar1 = (&DAT_0076b388)[param_1];
    uVar2 = (&DAT_0076b360)[param_1];
    *param_2 = uVar2;
    *param_3 = uVar1;
    if (param_4 != 0) {
      (&DAT_0076b388)[param_1] = uVar2;
    }
    return 0;
  }
  FUN_00525a30(0x15,"misuse at line %d of [%.10s]",0x3538,"c0e09560d26f0a6456be9dd3447f5311eb4f238f"
              );
  return 0x15;
}


/* FUN_00522d40 @ 00522d40  kind=gamemisc  attributed-by=none  size=58 */

undefined4 __cdecl
FUN_00522d40(int param_1,int param_2,int *param_3,undefined4 *param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iStack_8;
  
  iVar4 = param_1;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  switch(param_2) {
  case 0:
    uVar7 = 0;
    *param_3 = *(int *)(iVar4 + 0xec);
    *param_4 = *(undefined4 *)(iVar4 + 0xf0);
    if (param_5 != 0) {
      *(undefined4 *)(iVar4 + 0xf0) = *(undefined4 *)(iVar4 + 0xec);
    }
    goto LAB_00522dc3;
  case 1:
    iVar8 = 0;
    param_1 = 0;
    FUN_0054d340(iVar4);
    iVar6 = 0;
    iVar5 = iVar8;
    if (0 < *(int *)(iVar4 + 0x14)) {
      do {
        iVar5 = *(int *)(iVar8 + 4 + *(int *)(iVar4 + 0x10));
        if (iVar5 != 0) {
          iVar5 = FUN_0055f340(**(undefined4 **)(iVar5 + 4));
          param_1 = param_1 + iVar5;
        }
        iVar6 = iVar6 + 1;
        iVar8 = iVar8 + 0x10;
        iVar5 = param_1;
      } while (iVar6 < *(int *)(iVar4 + 0x14));
    }
    FUN_0054de20(iVar4);
    *param_3 = iVar5;
    *param_4 = 0;
    uVar7 = FUN_00522dc1();
    return uVar7;
  case 2:
    param_1 = 0;
    FUN_0054d340(iVar4);
    *(int **)(iVar4 + 0x1f0) = &param_1;
    param_2 = 0;
    if (0 < *(int *)(iVar4 + 0x14)) {
      iStack_8 = 0;
      do {
        iVar5 = *(int *)(iStack_8 + 0xc + *(int *)(iVar4 + 0x10));
        if (iVar5 != 0) {
          iVar8 = (*DAT_00766610)(0x14);
          param_1 = param_1 + iVar8 * (*(int *)(iVar5 + 0x3c) + *(int *)(iVar5 + 0x2c) +
                                       *(int *)(iVar5 + 0x1c) + *(int *)(iVar5 + 0xc));
          iVar8 = (*DAT_00766608._4_4_)(*(undefined4 *)(iVar5 + 0x14));
          param_1 = param_1 + iVar8;
          iVar8 = (*DAT_00766608._4_4_)(*(undefined4 *)(iVar5 + 0x34));
          param_1 = param_1 + iVar8;
          iVar8 = (*DAT_00766608._4_4_)(*(undefined4 *)(iVar5 + 0x24));
          param_1 = param_1 + iVar8;
          iVar8 = (*DAT_00766608._4_4_)(*(undefined4 *)(iVar5 + 0x44));
          param_1 = param_1 + iVar8;
          for (puVar1 = *(undefined4 **)(iVar5 + 0x30); puVar1 != (undefined4 *)0x0;
              puVar1 = (undefined4 *)*puVar1) {
            puVar2 = (undefined4 *)puVar1[2];
            if (puVar2 != (undefined4 *)0x0) {
              FUN_00552b20(iVar4,puVar2[7]);
              FUN_005521a0(iVar4,*puVar2);
              FUN_005521a0(iVar4,puVar2[1]);
              FUN_00555e30(iVar4,puVar2[3]);
              FUN_0055afc0(iVar4,puVar2[4]);
              FUN_005521a0(iVar4,puVar2);
            }
          }
          for (puVar1 = *(undefined4 **)(iVar5 + 0x10); puVar1 != (undefined4 *)0x0;
              puVar1 = (undefined4 *)*puVar1) {
            FUN_005529a0(iVar4,puVar1[2]);
          }
        }
        param_2 = param_2 + 1;
        iStack_8 = iStack_8 + 0x10;
      } while (param_2 < *(int *)(iVar4 + 0x14));
    }
    *(undefined4 *)(iVar4 + 0x1f0) = 0;
    FUN_0054de20(iVar4);
    *param_4 = 0;
    *param_3 = param_1;
    uVar7 = FUN_00522dc1();
    return uVar7;
  case 3:
    iVar5 = *(int *)(iVar4 + 4);
    param_1 = 0;
    *(int **)(iVar4 + 0x1f0) = &param_1;
    for (; iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x3c)) {
      FUN_0056c560(iVar4,iVar5);
      FUN_005521a0(iVar4,iVar5);
    }
    *(undefined4 *)(iVar4 + 0x1f0) = 0;
    *param_4 = 0;
    *param_3 = param_1;
    break;
  case 4:
  case 5:
  case 6:
    *param_3 = 0;
    *param_4 = *(undefined4 *)(iVar4 + 0xe4 + param_2 * 4);
    if (param_5 != 0) {
      *(undefined4 *)(iVar4 + 0xe4 + param_2 * 4) = 0;
    }
    break;
  case 7:
  case 8:
  case 9:
    iVar5 = 0;
    iVar8 = 0;
    if (0 < *(int *)(iVar4 + 0x14)) {
      iVar6 = 0;
      do {
        iVar3 = *(int *)(iVar6 + 4 + *(int *)(iVar4 + 0x10));
        if (iVar3 != 0) {
          iVar3 = **(int **)(iVar3 + 4);
          iVar8 = iVar8 + *(int *)(iVar3 + 0x84 + param_2 * 4);
          if (param_5 != 0) {
            *(undefined4 *)(iVar3 + 0x84 + param_2 * 4) = 0;
          }
        }
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0x10;
      } while (iVar5 < *(int *)(iVar4 + 0x14));
    }
    *param_4 = 0;
    *param_3 = iVar8;
    break;
  default:
    uVar7 = 1;
    goto LAB_00522dc3;
  }
  uVar7 = 0;
LAB_00522dc3:
  if (*(int *)(iVar4 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(iVar4 + 0xc));
  }
  return uVar7;
}


/* FUN_00522ddd @ 00522ddd  kind=gamemisc  attributed-by=none  size=85 */

void FUN_00522ddd(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  int unaff_ESI;
  int iVar3;
  
  iVar2 = 0;
  *(undefined4 *)(unaff_EBP + 8) = 0;
  FUN_0054d340();
  iVar3 = 0;
  if (0 < *(int *)(unaff_ESI + 0x14)) {
    do {
      iVar1 = *(int *)(iVar2 + 4 + *(int *)(unaff_ESI + 0x10));
      if (iVar1 != 0) {
        iVar1 = FUN_0055f340(**(undefined4 **)(iVar1 + 4));
        *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + iVar1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x10;
    } while (iVar3 < *(int *)(unaff_ESI + 0x14));
    iVar2 = *(int *)(unaff_EBP + 8);
  }
  FUN_0054de20();
  **(int **)(unaff_EBP + 0x10) = iVar2;
  **(undefined4 **)(unaff_EBP + 0x14) = 0;
  FUN_00522dc1();
  return;
}


/* FUN_00522e32 @ 00522e32  kind=gamemisc  attributed-by=none  size=322 */

void FUN_00522e32(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int unaff_EBP;
  int unaff_ESI;
  
  *(undefined4 *)(unaff_EBP + 8) = 0;
  FUN_0054d340();
  iVar3 = *(int *)(unaff_ESI + 0x14);
  *(int *)(unaff_ESI + 0x1f0) = unaff_EBP + 8;
  *(undefined4 *)(unaff_EBP + 0xc) = 0;
  if (0 < iVar3) {
    iVar3 = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    do {
      iVar3 = *(int *)(iVar3 + 0xc + *(int *)(unaff_ESI + 0x10));
      *(int *)(unaff_EBP + -8) = iVar3;
      if (iVar3 != 0) {
        iVar2 = (*DAT_00766610)(0x14);
        *(int *)(unaff_EBP + 8) =
             *(int *)(unaff_EBP + 8) +
             iVar2 * (*(int *)(iVar3 + 0x3c) + *(int *)(iVar3 + 0x2c) + *(int *)(iVar3 + 0x1c) +
                     *(int *)(iVar3 + 0xc));
        iVar2 = (*DAT_00766608._4_4_)(*(undefined4 *)(iVar3 + 0x14));
        *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + iVar2;
        iVar2 = (*DAT_00766608._4_4_)(*(undefined4 *)(iVar3 + 0x34));
        *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + iVar2;
        iVar2 = (*DAT_00766608._4_4_)(*(undefined4 *)(iVar3 + 0x24));
        *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + iVar2;
        iVar2 = (*DAT_00766608._4_4_)(*(undefined4 *)(iVar3 + 0x44));
        *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + iVar2;
        for (puVar1 = *(undefined4 **)(iVar3 + 0x30); puVar1 != (undefined4 *)0x0;
            puVar1 = (undefined4 *)*puVar1) {
          if (puVar1[2] != 0) {
            FUN_00552b20();
            FUN_005521a0();
            FUN_005521a0();
            FUN_00555e30();
            FUN_0055afc0();
            FUN_005521a0();
          }
        }
        for (puVar1 = *(undefined4 **)(*(int *)(unaff_EBP + -8) + 0x10); puVar1 != (undefined4 *)0x0
            ; puVar1 = (undefined4 *)*puVar1) {
          FUN_005529a0();
        }
      }
      iVar2 = *(int *)(unaff_EBP + 0xc) + 1;
      iVar3 = *(int *)(unaff_EBP + -4) + 0x10;
      *(int *)(unaff_EBP + 0xc) = iVar2;
      *(int *)(unaff_EBP + -4) = iVar3;
    } while (iVar2 < *(int *)(unaff_ESI + 0x14));
  }
  *(undefined4 *)(unaff_ESI + 0x1f0) = 0;
  FUN_0054de20();
  puVar1 = *(undefined4 **)(unaff_EBP + 0x10);
  **(undefined4 **)(unaff_EBP + 0x14) = 0;
  *puVar1 = *(undefined4 *)(unaff_EBP + 8);
  FUN_00522dc1();
  return;
}


/* FUN_00523050 @ 00523050  kind=gamemisc  attributed-by=none  size=30 */

undefined4 FUN_00523050(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  param_1 = param_1 + param_2 * 4;
  uVar1 = *(undefined4 *)(param_1 + 0x70);
  if (param_3 != 0) {
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  return uVar1;
}


/* FUN_00523070 @ 00523070  kind=gamemisc  attributed-by=none  size=332 */

undefined4 FUN_00523070(int param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  undefined8 local_18;
  ulonglong local_10;
  undefined4 local_8;
  
  uVar4 = param_3;
  param_3 = param_4;
  iVar5 = 0;
  local_18 = 0;
  local_8 = 0;
  local_10 = CONCAT44(param_5,param_4) & 0x7fffffffffffffff;
  uVar3 = param_5;
  if (0 < (int)uVar4) {
    do {
      iVar1 = (*(code *)PTR_WriteFile_00767348)
                        (*(undefined4 *)(param_1 + 8),param_2,uVar4,&param_5,&local_18);
      if (iVar1 == 0) {
        iVar1 = (*(code *)PTR_GetLastError_007671bc)();
        if ((DAT_007666d4 <= iVar5) || (((iVar1 != 5 && (iVar1 != 0x21)) && (iVar1 != 0x20)))) {
LAB_0052317a:
          if (0 < (int)uVar4) {
            *(int *)(param_1 + 0x14) = iVar1;
            if ((iVar1 != 0x27) && (iVar1 != 0x70)) {
              uVar2 = FUN_0057fa50(0x30a,iVar1,"winWrite",*(undefined4 *)(param_1 + 0x1c),0x7e43);
              return uVar2;
            }
            return 0xd;
          }
          break;
        }
        iVar5 = iVar5 + 1;
        (*(code *)PTR_Sleep_00767300)(iVar5 * DAT_007666d8);
      }
      else {
        if ((param_5 == 0) || (uVar4 < param_5)) {
          iVar1 = (*(code *)PTR_GetLastError_007671bc)();
          goto LAB_0052317a;
        }
        bVar6 = CARRY4(param_3,param_5);
        param_3 = param_3 + param_5;
        uVar3 = uVar3 + bVar6;
        param_2 = param_2 + param_5;
        local_10 = CONCAT44(uVar3,param_3) & 0x7fffffffffffffff;
        uVar4 = uVar4 - param_5;
      }
    } while (0 < (int)uVar4);
    if (iVar5 != 0) {
      FUN_00525a30(10,"delayed %dms for lock/sharing conflict",
                   ((iVar5 + 1) * DAT_007666d8 * iVar5) / 2);
    }
  }
  return 0;
}


/* FUN_00523220 @ 00523220  kind=gamemisc  attributed-by=none  size=64 */

undefined4 FUN_00523220(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  uVar1 = 0xff;
  if (param_2 != 0) {
    uVar1 = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return 0;
}


/* FUN_005232d0 @ 005232d0  kind=gamemisc  attributed-by=none  size=904 */

bool FUN_005232d0(byte *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  char *pcVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte local_5;
  
  bVar1 = *param_1;
  local_5 = 0;
  bVar5 = 0;
  if (bVar1 == 0) {
LAB_0052335d:
    return bVar5 == 1;
  }
LAB_005232e7:
  iVar3 = (int)(char)bVar1;
  switch(iVar3) {
  case 9:
  case 10:
  case 0xc:
  case 0xd:
  case 0x20:
    goto switchD_005232fd_caseD_9;
  default:
    if (((&DAT_007121d8)[bVar1] & 0x46) != 0) {
      iVar2 = 1;
      bVar1 = (&DAT_007121d8)[param_1[1]];
      while ((bVar1 & 0x46) != 0) {
        iVar4 = iVar2 + 1;
        iVar2 = iVar2 + 1;
        bVar1 = (&DAT_007121d8)[param_1[iVar4]];
      }
      switch(iVar3) {
      case 0x43:
      case 99:
        if (iVar2 == 6) {
          pcVar6 = "create";
          iVar3 = 6;
          pbVar8 = param_1;
          do {
            iVar4 = iVar3;
            iVar3 = iVar4 + -1;
            if ((*pbVar8 == 0) || ((&DAT_007120d8)[*pbVar8] != (&DAT_007120d8)[(byte)*pcVar6]))
            goto LAB_00523472;
            pbVar8 = pbVar8 + 1;
            pcVar6 = pcVar6 + 1;
          } while (0 < iVar3);
          iVar3 = iVar4 + -2;
LAB_00523472:
          if ((iVar3 < 0) || ((&DAT_007120d8)[*pbVar8] == (&DAT_007120d8)[(byte)*pcVar6])) {
            iVar3 = 4;
            param_1 = param_1 + 5;
            goto LAB_0052339c;
          }
        }
        break;
      case 0x45:
      case 0x65:
        if (iVar2 == 3) {
          pbVar7 = &DAT_00719e0c;
          iVar3 = 3;
          pbVar8 = param_1;
          do {
            iVar4 = iVar3;
            iVar3 = iVar4 + -1;
            if ((*pbVar8 == 0) || ((&DAT_007120d8)[*pbVar8] != (&DAT_007120d8)[*pbVar7]))
            goto LAB_005235c2;
            pbVar8 = pbVar8 + 1;
            pbVar7 = pbVar7 + 1;
          } while (0 < iVar3);
          iVar3 = iVar4 + -2;
LAB_005235c2:
          if ((iVar3 < 0) || ((&DAT_007120d8)[*pbVar8] == (&DAT_007120d8)[*pbVar7])) {
            iVar3 = 7;
            param_1 = param_1 + 2;
            goto LAB_0052339c;
          }
        }
        else if (iVar2 == 7) {
          pcVar6 = "explain";
          iVar3 = 7;
          pbVar8 = param_1;
          do {
            iVar4 = iVar3;
            iVar3 = iVar4 + -1;
            if ((*pbVar8 == 0) || ((&DAT_007120d8)[*pbVar8] != (&DAT_007120d8)[(byte)*pcVar6]))
            goto LAB_00523622;
            pbVar8 = pbVar8 + 1;
            pcVar6 = pcVar6 + 1;
          } while (0 < iVar3);
          iVar3 = iVar4 + -2;
LAB_00523622:
          if ((iVar3 < 0) || ((&DAT_007120d8)[*pbVar8] == (&DAT_007120d8)[(byte)*pcVar6])) {
            iVar3 = 3;
            param_1 = param_1 + 6;
            goto LAB_0052339c;
          }
        }
        break;
      case 0x54:
      case 0x74:
        if (iVar2 != 7) {
          if (iVar2 == 4) {
            pbVar7 = &DAT_00719df8;
            iVar3 = 4;
            pbVar8 = param_1;
            do {
              iVar4 = iVar3;
              iVar3 = iVar4 + -1;
              if ((*pbVar8 == 0) || ((&DAT_007120d8)[*pbVar8] != (&DAT_007120d8)[*pbVar7]))
              goto LAB_00523532;
              pbVar8 = pbVar8 + 1;
              pbVar7 = pbVar7 + 1;
            } while (0 < iVar3);
            iVar3 = iVar4 + -2;
LAB_00523532:
            if ((-1 < iVar3) && ((&DAT_007120d8)[*pbVar8] != (&DAT_007120d8)[*pbVar7])) break;
            iVar3 = 5;
            param_1 = param_1 + 3;
          }
          else {
            if ((iVar2 != 9) || (iVar3 = FUN_005259c0(param_1,"temporary",9), iVar3 != 0)) break;
            iVar3 = 5;
            param_1 = param_1 + 8;
          }
          goto LAB_0052339c;
        }
        pcVar6 = "trigger";
        iVar3 = 7;
        pbVar8 = param_1;
        do {
          iVar4 = iVar3;
          iVar3 = iVar4 + -1;
          if ((*pbVar8 == 0) || ((&DAT_007120d8)[*pbVar8] != (&DAT_007120d8)[(byte)*pcVar6]))
          goto LAB_005234d2;
          pbVar8 = pbVar8 + 1;
          pcVar6 = pcVar6 + 1;
        } while (0 < iVar3);
        iVar3 = iVar4 + -2;
LAB_005234d2:
        if ((iVar3 < 0) || ((&DAT_007120d8)[*pbVar8] == (&DAT_007120d8)[(byte)*pcVar6])) {
          iVar3 = 6;
          param_1 = param_1 + 6;
          goto LAB_0052339c;
        }
      }
      iVar3 = 2;
      param_1 = param_1 + iVar2 + -1;
      break;
    }
    goto LAB_0052339a;
  case 0x22:
  case 0x27:
  case 0x60:
    bVar1 = param_1[1];
    pbVar8 = param_1;
    if (bVar1 == 0) {
      return false;
    }
    while (param_1 = pbVar8 + 1, (char)bVar1 != iVar3) {
      bVar1 = pbVar8[2];
      pbVar8 = param_1;
      if (bVar1 == 0) {
        return false;
      }
    }
    goto LAB_00523395;
  case 0x2d:
    if (param_1[1] != 0x2d) goto LAB_0052339a;
    while (bVar5 = local_5, bVar1 != 10) {
      bVar1 = param_1[1];
      param_1 = param_1 + 1;
      if (bVar1 == 0) goto LAB_0052335d;
    }
    if (*param_1 == 0) goto LAB_0052335d;
    iVar3 = 1;
    break;
  case 0x2f:
    if (param_1[1] != 0x2a) goto LAB_0052339a;
    bVar1 = param_1[2];
    param_1 = param_1 + 2;
    while( true ) {
      if (bVar1 == 0) {
        return false;
      }
      if ((bVar1 == 0x2a) && (param_1[1] == 0x2f)) break;
      bVar1 = param_1[1];
      param_1 = param_1 + 1;
    }
    if (*param_1 == 0) {
      return false;
    }
    param_1 = param_1 + 1;
    goto switchD_005232fd_caseD_9;
  case 0x3b:
    iVar3 = 0;
    break;
  case 0x5b:
    bVar1 = param_1[1];
    pbVar8 = param_1;
    if (bVar1 == 0) {
      return false;
    }
    while (param_1 = pbVar8 + 1, bVar1 != 0x5d) {
      bVar1 = pbVar8[2];
      pbVar8 = param_1;
      if (bVar1 == 0) {
        return false;
      }
    }
LAB_00523395:
    if (*param_1 == 0) {
      return false;
    }
LAB_0052339a:
    iVar3 = 2;
  }
LAB_0052339c:
  param_1 = param_1 + 1;
  local_5 = (&UNK_00713090)[(uint)local_5 * 8 + iVar3];
  bVar1 = *param_1;
  if (bVar1 == 0) {
    return local_5 == 1;
  }
  goto LAB_005232e7;
switchD_005232fd_caseD_9:
  iVar3 = 1;
  goto LAB_0052339c;
}


/* FUN_00523720 @ 00523720  kind=gamemisc  attributed-by=none  size=204 */

uint FUN_00523720(undefined4 param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  
  uVar1 = FUN_00579f80();
  if (uVar1 == 0) {
    puVar2 = (undefined8 *)FUN_0055da00(0x28);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      *(undefined2 *)((int)puVar2 + 0x1c) = 1;
      *(undefined1 *)((int)puVar2 + 0x1e) = 5;
      *(undefined4 *)puVar2 = 0;
      FUN_00575040(puVar2,param_1,0xffffffff,2,0);
    }
    iVar3 = FUN_0056bce0(puVar2,1);
    if (iVar3 == 0) {
      uVar1 = 7;
    }
    else {
      uVar1 = FUN_005232d0(iVar3);
    }
    if (puVar2 != (undefined8 *)0x0) {
      if ((*(ushort *)((int)puVar2 + 0x1c) & 0x2460) != 0) {
        FUN_00574d80(puVar2);
      }
      FUN_005521a0(*(undefined4 *)puVar2,*(undefined4 *)((int)puVar2 + 0x24));
      *(undefined4 *)((int)puVar2 + 4) = 0;
      *(undefined4 *)((int)puVar2 + 0x24) = 0;
      *(undefined4 *)(puVar2 + 4) = 0;
      FUN_005521a0(*(undefined4 *)puVar2,puVar2);
    }
    uVar1 = uVar1 & 0xff;
  }
  return uVar1;
}


/* FUN_005237f0 @ 005237f0  kind=gamemisc  attributed-by=none  size=84 */

undefined4 FUN_005237f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 0x1ac) = param_2;
  *(undefined4 *)(param_1 + 0x1b0) = param_3;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return 0;
}


/* FUN_00523900 @ 00523900  kind=gamemisc  attributed-by=none  size=203 */

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


/* FUN_005239d0 @ 005239d0  kind=gamemisc  attributed-by=none  size=169 */

undefined4 FUN_005239d0(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = CONCAT44(param_3,param_2);
  uVar1 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar1) {
    iVar3 = (int)uVar1 >> 0x1f;
    uVar4 = __alldiv(uVar1 + param_2 + -1,
                     (iVar3 + param_3 + (uint)CARRY4(uVar1,param_2)) - (uint)(uVar1 + param_2 == 0),
                     uVar1,iVar3);
    uVar4 = __allmul(uVar4,uVar1,iVar3);
  }
  iVar3 = FUN_005476b0(param_1,uVar4);
  if (iVar3 == 0) {
    iVar3 = (*(code *)PTR_SetEndOfFile_007672e8)(*(undefined4 *)(param_1 + 8));
    if (iVar3 != 0) {
      return 0;
    }
    uVar2 = (*(code *)PTR_GetLastError_007671bc)();
    *(undefined4 *)(param_1 + 0x14) = uVar2;
    uVar2 = FUN_0057fa50(0x60a,uVar2,"winTruncate2",*(undefined4 *)(param_1 + 0x1c),0x7e66);
    return uVar2;
  }
  uVar2 = FUN_0057fa50(0x60a,*(undefined4 *)(param_1 + 0x14),"winTruncate1",
                       *(undefined4 *)(param_1 + 0x1c),0x7e62);
  return uVar2;
}


/* FUN_00523a80 @ 00523a80  kind=gamemisc  attributed-by=none  size=420 */

int FUN_00523a80(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
                undefined4 *param_5,undefined4 *param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  *param_3 = 0;
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = 0;
  }
  local_1c = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 1;
  local_18 = 0x14;
  local_8 = 0;
  iVar1 = FUN_00579f80();
  if (iVar1 == 0) {
    local_20 = (int *)FUN_0055da00(0x50);
  }
  else {
    local_20 = (int *)0x0;
  }
  if (local_20 == (int *)0x0) {
LAB_00523be8:
    *(undefined4 *)(param_1 + 0x2c) = 7;
    return 7;
  }
  *local_20 = 0;
  iVar1 = FUN_00520760(param_1,param_2,FUN_00579e10,&local_20,param_6);
  *local_20 = local_c;
  if ((char)iVar1 == '\x04') {
    FUN_00523c30(local_20 + 1);
    if (local_1c != 0) {
      if (param_6 != (undefined4 *)0x0) {
        FUN_00524410(*param_6);
        uVar2 = FUN_00523d10(&DAT_00716900,local_1c);
        *param_6 = uVar2;
      }
      FUN_00524410(local_1c);
    }
    *(int *)(param_1 + 0x2c) = local_8;
    return local_8;
  }
  FUN_00524410(local_1c);
  piVar4 = local_20;
  if (iVar1 != 0) {
    FUN_00523c30(local_20 + 1);
    return iVar1;
  }
  if (local_c < local_18) {
    iVar1 = local_c * 4;
    iVar3 = FUN_00579f80();
    if ((iVar3 != 0) || (piVar4 = (int *)FUN_00563800(piVar4,iVar1), piVar4 == (int *)0x0)) {
      FUN_00523c30(local_20 + 1);
      goto LAB_00523be8;
    }
  }
  *param_3 = piVar4 + 1;
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = local_10;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_14;
  }
  return 0;
}


/* FUN_00523c30 @ 00523c30  kind=gamemisc  attributed-by=none  size=217 */

void FUN_00523c30(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + -4);
    iVar4 = 1;
    iVar3 = DAT_0076b488;
    if (1 < iVar1) {
      do {
        iVar2 = *(int *)(param_1 + -4 + iVar4 * 4);
        if (iVar2 != 0) {
          if (DAT_007665e0 == 0) {
            (*DAT_00766604)(iVar2);
            iVar3 = DAT_0076b488;
          }
          else {
            if (iVar3 != 0) {
              (*DAT_00766630)(iVar3);
            }
            iVar3 = (*DAT_00766608._4_4_)(iVar2);
            DAT_0076b360 = DAT_0076b360 - iVar3;
            if (DAT_0076b388 < DAT_0076b360) {
              DAT_0076b388 = DAT_0076b360;
            }
            DAT_0076b384 = DAT_0076b384 + -1;
            if (DAT_0076b3ac < DAT_0076b384) {
              DAT_0076b3ac = DAT_0076b384;
            }
            (*DAT_00766604)(iVar2);
            iVar3 = DAT_0076b488;
            if (DAT_0076b488 != 0) {
              (*DAT_00766638)(DAT_0076b488);
              iVar3 = DAT_0076b488;
            }
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
    FUN_00524410(param_1 + -4);
  }
  return;
}


/* FUN_00523dd0 @ 00523dd0  kind=gamemisc  attributed-by=none  size=744 */

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


/* FUN_00524120 @ 00524120  kind=gamemisc  attributed-by=none  size=64 */

undefined4 FUN_00524120(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FlushFileBuffers_00767120)(*(undefined4 *)(param_1 + 8));
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = (*(code *)PTR_GetLastError_007671bc)();
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  uVar2 = FUN_0057fa50(0x40a,uVar2,"winSync",*(undefined4 *)(param_1 + 0x1c),0x7eae);
  return uVar2;
}


/* FUN_005241a0 @ 005241a0  kind=gamemisc  attributed-by=none  size=620 */

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


/* FUN_00524570 @ 00524570  kind=gamemisc  attributed-by=none  size=101 */

undefined4 FUN_00524570(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_8;
  
  iVar1 = (*(code *)PTR_GetFileSize_00767198)(*(undefined4 *)(param_1 + 8),&local_8);
  *param_2 = iVar1;
  param_2[1] = local_8;
  if (iVar1 == -1) {
    iVar1 = (*(code *)PTR_GetLastError_007671bc)();
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x14) = iVar1;
      uVar2 = FUN_0057fa50(0x70a,iVar1,"winFileSize",*(undefined4 *)(param_1 + 0x1c),0x7ed4);
      return uVar2;
    }
  }
  return 0;
}


/* FUN_00524640 @ 00524640  kind=gamemisc  attributed-by=none  size=82 */

undefined4 FUN_00524640(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 0x10c) = param_2;
  *(undefined4 *)(param_1 + 0x110) = param_3;
  for (iVar1 = *(int *)(param_1 + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x3c)) {
    *(uint *)(iVar1 + 0x60) = *(uint *)(iVar1 + 0x60) | 0x20;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return 0;
}


/* FUN_005246a0 @ 005246a0  kind=gamemisc  attributed-by=none  size=103 */

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


/* FUN_005247b0 @ 005247b0  kind=gamemisc  attributed-by=none  size=72 */

undefined4 FUN_005247b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  uVar1 = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(param_1 + 0x98) = param_2;
  *(undefined4 *)(param_1 + 0x9c) = param_3;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return uVar1;
}


/* FUN_00524800 @ 00524800  kind=gamemisc  attributed-by=none  size=264 */

int * FUN_00524800(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int *_Dst;
  
  if (*(int *)(param_3 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_3 + 0xc));
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  if (param_3 == param_1) {
    FUN_00553890(param_1,1,"source and destination must be distinct");
LAB_005248dd:
    _Dst = (int *)0x0;
  }
  else {
    _Dst = (int *)FUN_0055da00(0x30);
    if (_Dst != (int *)0x0) {
      memset(_Dst,0,0x30);
      if (_Dst != (int *)0x0) {
        iVar1 = FUN_00536fb0(param_1,param_3,param_4);
        _Dst[6] = iVar1;
        iVar1 = FUN_00536fb0(param_1,param_1,param_2);
        _Dst[1] = iVar1;
        *_Dst = param_1;
        _Dst[5] = param_3;
        _Dst[4] = 1;
        _Dst[10] = 0;
        if ((_Dst[6] != 0) && (iVar1 != 0)) {
          iVar1 = FUN_0054f2a0(iVar1,*(undefined4 *)(*(int *)(_Dst[6] + 4) + 0x20),0xffffffff,0);
          if (iVar1 != 7) {
            *(int *)(_Dst[6] + 0x10) = *(int *)(_Dst[6] + 0x10) + 1;
            goto LAB_005248df;
          }
        }
        FUN_00524410(_Dst);
        goto LAB_005248dd;
      }
    }
    FUN_00553890(param_1,7,0);
  }
LAB_005248df:
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  if (*(int *)(param_3 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_3 + 0xc));
  }
  return _Dst;
}


/* FUN_00524910 @ 00524910  kind=gamemisc  attributed-by=none  size=238 */

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


/* FUN_005253b0 @ 005253b0  kind=gamemisc  attributed-by=none  size=72 */

undefined4 FUN_005253b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  uVar1 = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(param_1 + 0xa0) = param_2;
  *(undefined4 *)(param_1 + 0xa4) = param_3;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return uVar1;
}


/* FUN_00525510 @ 00525510  kind=gamemisc  attributed-by=none  size=107 */

void FUN_00525510(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  if (param_2 < 1) {
    *(undefined4 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x11c) = 0;
    *(undefined4 *)(param_1 + 0x118) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x114) = param_3;
    *(int *)(param_1 + 0x11c) = param_2;
    *(undefined4 *)(param_1 + 0x118) = param_4;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return;
}


/* FUN_005255b0 @ 005255b0  kind=gamemisc  attributed-by=none  size=242 */

uint FUN_005255b0(undefined4 param_1,int *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  
  *param_2 = 0;
  uVar1 = FUN_00579f80();
  if (uVar1 == 0) {
    puVar2 = (undefined8 *)FUN_0055da00(0x28);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      *(undefined2 *)((int)puVar2 + 0x1c) = 1;
      *(undefined1 *)((int)puVar2 + 0x1e) = 5;
      *(undefined4 *)puVar2 = 0;
      FUN_00575040(puVar2,param_1,0xffffffff,2,0);
    }
    iVar3 = FUN_0056bce0(puVar2,1);
    if (iVar3 == 0) {
      uVar1 = 7;
    }
    else {
      uVar1 = FUN_00540b70(iVar3,param_2,6,0);
      if ((uVar1 == 0) &&
         (iVar3 = *(int *)(*(int *)(*param_2 + 0x10) + 0xc), (*(byte *)(iVar3 + 0x4e) & 1) == 0)) {
        *(undefined1 *)(iVar3 + 0x4d) = 2;
      }
    }
    if (puVar2 != (undefined8 *)0x0) {
      if ((*(ushort *)((int)puVar2 + 0x1c) & 0x2460) != 0) {
        FUN_00574d80(puVar2);
      }
      FUN_005521a0(*(undefined4 *)puVar2,*(undefined4 *)((int)puVar2 + 0x24));
      *(undefined4 *)((int)puVar2 + 4) = 0;
      *(undefined4 *)((int)puVar2 + 0x24) = 0;
      *(undefined4 *)(puVar2 + 4) = 0;
      FUN_005521a0(*(undefined4 *)puVar2,puVar2);
    }
    uVar1 = uVar1 & 0xff;
  }
  return uVar1;
}


/* FUN_00525800 @ 00525800  kind=gamemisc  attributed-by=none  size=441 */

undefined4 FUN_00525800(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_c;
  byte local_8;
  
  local_8 = *(byte *)(param_1 + 0xc);
  iVar2 = 1;
  local_c = 0;
  if (param_2 <= (int)(uint)local_8) {
    return 0;
  }
  if (local_8 == 0) {
LAB_00525841:
    iVar3 = 3;
    do {
      iVar3 = iVar3 + -1;
      iVar2 = FUN_0057f980(param_1 + 8,3,DAT_007666d0,0,1,0);
      if ((iVar2 != 0) || (iVar3 == 0)) break;
      (*(code *)PTR_Sleep_00767300)(1);
    } while (0 < iVar3);
    local_c = iVar2;
    if (iVar2 == 0) {
      uVar1 = (*(code *)PTR_GetLastError_007671bc)();
    }
    else {
LAB_00525898:
      uVar1 = 0;
    }
    if (param_2 == 1) {
      if (iVar2 != 0) {
        iVar2 = FUN_0053ac70(param_1);
        if (iVar2 == 0) {
          uVar1 = (*(code *)PTR_GetLastError_007671bc)();
        }
        else {
          local_8 = 1;
        }
      }
    }
    else if (param_2 == 2) {
      if (iVar2 != 0) {
        iVar2 = FUN_0057f980(param_1 + 8,3,DAT_007666d0 + 1,0,1,0);
        if (iVar2 == 0) {
          uVar1 = (*(code *)PTR_GetLastError_007671bc)();
        }
        else {
          local_8 = 2;
        }
      }
    }
    else if ((param_2 == 4) && (iVar2 != 0)) goto LAB_00525957;
    if ((local_c != 0) && (param_2 == 1)) {
      FUN_0057ff40(param_1 + 8,DAT_007666d0,0,1,0);
    }
  }
  else {
    if (param_2 != 4) goto LAB_00525898;
    if (local_8 == 2) goto LAB_00525841;
    uVar1 = 0;
LAB_00525957:
    local_8 = 3;
    FUN_0057b2f0(param_1);
    iVar2 = FUN_0057f980(param_1 + 8,3,DAT_007666d0 + 2,0,0x1fe,0);
    if (iVar2 == 0) {
      uVar1 = (*(code *)PTR_GetLastError_007671bc)();
      FUN_0053ac70(param_1);
      goto LAB_005259a7;
    }
    local_8 = 4;
  }
  if (iVar2 != 0) {
    *(byte *)(param_1 + 0xc) = local_8;
    return 0;
  }
LAB_005259a7:
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(byte *)(param_1 + 0xc) = local_8;
  return 5;
}


/* FUN_00525a50 @ 00525a50  kind=gamemisc  attributed-by=none  size=72 */

undefined4 FUN_00525a50(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  uVar1 = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(param_1 + 0xc0) = param_2;
  *(undefined4 *)(param_1 + 0xc4) = param_3;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return uVar1;
}


/* FUN_00525aa0 @ 00525aa0  kind=gamemisc  attributed-by=none  size=405 */

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


/* FUN_00525d20 @ 00525d20  kind=gamemisc  attributed-by=none  size=104 */

undefined4 FUN_00525d20(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x44);
    if (((iVar1 != 0x4b771290) && (iVar1 != -0x5fd65969)) && (iVar1 != -0xfc486fa)) {
      FUN_00525a30(0x15,"API call with %s database connection pointer","invalid");
      FUN_00525a30(0x15,"misuse at line %d of [%.10s]",0x1bef1,
                   "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
      return 0x15;
    }
    if (*(char *)(param_1 + 0x38) == '\0') {
      return *(undefined4 *)(param_1 + 0x2c);
    }
  }
  return 7;
}


/* FUN_00525d90 @ 00525d90  kind=gamemisc  attributed-by=none  size=145 */

undefined4 FUN_00525d90(int param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = 10;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    iVar1 = FUN_00556be0(param_1,param_2);
    if (iVar1 < 0) {
      uVar2 = 1;
      FUN_00553890(param_1,1,"unknown database: %s",param_2);
      goto LAB_00525dfd;
    }
  }
  uVar2 = FUN_0054f920(param_1,iVar1,0,0,0);
  FUN_00553890(param_1,uVar2,0);
LAB_00525dfd:
  uVar2 = FUN_0054a110(param_1,uVar2);
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return uVar2;
}


/* FUN_00525f10 @ 00525f10  kind=gamemisc  attributed-by=none  size=205 */

wchar_t * FUN_00525f10(int param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  
  if (param_1 == 0) {
    return L"out of memory";
  }
  iVar1 = *(int *)(param_1 + 0x44);
  if (((iVar1 != 0x4b771290) && (iVar1 != -0x5fd65969)) && (iVar1 != -0xfc486fa)) {
    FUN_00525a30(0x15,"API call with %s database connection pointer","invalid");
    return L"library routine called out of sequence";
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  if (*(char *)(param_1 + 0x38) == '\0') {
    pwVar2 = (wchar_t *)FUN_0056bce0(*(undefined4 *)(param_1 + 0xd4),2);
    if (pwVar2 == (wchar_t *)0x0) {
      if (*(int *)(param_1 + 0xd4) != 0) {
        uVar3 = FUN_00553860(*(undefined4 *)(param_1 + 0x2c),0xffffffff,1,0);
        FUN_00575040(extraout_ECX,uVar3);
      }
      pwVar2 = (wchar_t *)FUN_0056bce0(*(undefined4 *)(param_1 + 0xd4),2);
    }
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  else {
    pwVar2 = L"out of memory";
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return pwVar2;
}


/* FUN_00525ff0 @ 00525ff0  kind=gamemisc  attributed-by=none  size=51 */

undefined4 FUN_00525ff0(int param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 < 0xb) {
    param_1 = param_1 + param_2 * 4;
    uVar1 = *(undefined4 *)(param_1 + 0x50);
    if (-1 < param_3) {
      iVar2 = *(int *)((int)&DAT_00713100 + param_2 * 4);
      if (iVar2 < param_3) {
        param_3 = iVar2;
      }
      *(int *)(param_1 + 0x50) = param_3;
    }
    return uVar1;
  }
  return 0xffffffff;
}


/* FUN_00526030 @ 00526030  kind=gamemisc  attributed-by=none  size=130 */

undefined4 FUN_00526030(int param_1,int param_2,undefined1 param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  if (param_2 == 1) {
    if (*(int **)(param_1 + 0x134) != (int *)0x0) {
      *(undefined1 *)(**(int **)(param_1 + 0x134) + 0x10) = param_3;
      goto LAB_0052609b;
    }
    uVar1 = 0x19021;
  }
  else {
    uVar1 = 0x19029;
  }
  FUN_00525a30(0x15,"misuse at line %d of [%.10s]",uVar1,"c0e09560d26f0a6456be9dd3447f5311eb4f238f")
  ;
  uVar1 = 0x15;
  FUN_00553890(param_1,0x15,0);
LAB_0052609b:
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return uVar1;
}


/* FUN_005260e0 @ 005260e0  kind=gamemisc  attributed-by=none  size=811 */

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


/* FUN_00526410 @ 00526410  kind=gamemisc  attributed-by=none  size=101 */

undefined4 FUN_00526410(int param_1,uint *param_2)

{
  int iVar1;
  
  if (1 < *(byte *)(param_1 + 0xc)) {
    *param_2 = 1;
    return 0;
  }
  iVar1 = FUN_0057f980(param_1 + 8,3,DAT_007666d0 + 1,0,1,0);
  if (iVar1 != 0) {
    FUN_0057ff40(param_1 + 8,DAT_007666d0 + 1,0,1,0);
  }
  *param_2 = (uint)(iVar1 == 0);
  return 0;
}


/* FUN_005264c0 @ 005264c0  kind=gamemisc  attributed-by=none  size=204 */

undefined4 FUN_005264c0(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_8;
  
  bVar1 = *(byte *)(param_1 + 0xc);
  local_8 = 0;
  if (3 < bVar1) {
    FUN_0057ff40(param_1 + 8,DAT_007666d0 + 2,0,0x1fe,0);
    if (param_2 == 1) {
      iVar2 = FUN_0053ac70(param_1);
      if (iVar2 == 0) {
        uVar3 = (*(code *)PTR_GetLastError_007671bc)
                          ("winUnlock",*(undefined4 *)(param_1 + 0x1c),0x7ffd);
        local_8 = FUN_0057fa50(0x80a,uVar3);
      }
    }
  }
  if (1 < bVar1) {
    FUN_0057ff40(param_1 + 8,DAT_007666d0 + 1,0,1,0);
  }
  if ((param_2 == 0) && (bVar1 != 0)) {
    FUN_0057b2f0(param_1);
  }
  if (2 < bVar1) {
    FUN_0057ff40(param_1 + 8,DAT_007666d0,0,1,0);
  }
  *(char *)(param_1 + 0xc) = (char)param_2;
  return local_8;
}


/* FUN_005265f0 @ 005265f0  kind=gamemisc  attributed-by=none  size=37 */

int FUN_005265f0(int param_1,undefined4 param_2,uint *param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uStack_c;
  int iStack_8;
  
  switch(param_2) {
  case 1:
    *param_3 = (uint)*(byte *)(param_1 + 0xc);
    break;
  default:
    return 0xc;
  case 4:
    *param_3 = *(uint *)(param_1 + 0x14);
    return 0;
  case 5:
    if (0 < *(int *)(param_1 + 0x20)) {
      iVar2 = FUN_00524570(param_1,&uStack_c);
      if (iVar2 != 0) {
        return iVar2;
      }
      uVar3 = param_3[1];
      if ((int)uVar3 < iStack_8) {
        return 0;
      }
      if (((int)uVar3 <= iStack_8) && (*param_3 <= uStack_c)) {
        return 0;
      }
      iVar2 = FUN_005239d0(param_1,*param_3,uVar3);
      return iVar2;
    }
    break;
  case 6:
    *(uint *)(param_1 + 0x20) = *param_3;
    return 0;
  case 9:
    uVar3 = *param_3;
    if ((int)*param_3 < 1) {
      *param_3 = DAT_007666d4;
      uVar3 = DAT_007666d4;
    }
    DAT_007666d4 = uVar3;
    if ((int)param_3[1] < 1) {
      param_3[1] = DAT_007666d8;
      return 0;
    }
    DAT_007666d8 = param_3[1];
    return 0;
  case 10:
    FUN_0057fb10(param_1,4,param_3);
    return 0;
  case 0xc:
    uVar3 = FUN_00523d10("win32");
    *param_3 = uVar3;
    return 0;
  case 0xd:
    FUN_0057fb10(param_1,0x10,param_3);
    return 0;
  case 0x10:
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 8);
    iVar2 = FUN_00579f80();
    if ((iVar2 == 0) && (uVar3 = FUN_0055da00(uVar1), uVar3 != 0)) {
      FUN_0053b1b0(*(undefined4 *)(*(int *)(param_1 + 4) + 8),uVar3);
      *param_3 = uVar3;
    }
    return 0;
  }
  return 0;
}


/* FUN_00526870 @ 00526870  kind=gamemisc  attributed-by=none  size=81 */

int FUN_00526870(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_0057d290(param_1,param_2);
  if (iVar1 == 0) {
    FUN_00574ec0(param_1[0x11] + param_2 * 0x28 + -0x28,param_3,param_3 >> 0x1f);
    if (*(int *)(*param_1 + 0xc) != 0) {
      (*DAT_00766638)(*(int *)(*param_1 + 0xc));
    }
  }
  return iVar1;
}


/* FUN_005268e0 @ 005268e0  kind=gamemisc  attributed-by=none  size=81 */

int FUN_005268e0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0057d290(param_1,param_2);
  if (iVar1 == 0) {
    FUN_00574ec0(param_1[0x11] + param_2 * 0x28 + -0x28,param_3,param_4);
    if (*(int *)(*param_1 + 0xc) != 0) {
      (*DAT_00766638)(*(int *)(*param_1 + 0xc));
    }
  }
  return iVar1;
}


/* FUN_00526940 @ 00526940  kind=gamemisc  attributed-by=none  size=437 */

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


/* FUN_00526b80 @ 00526b80  kind=gamemisc  attributed-by=none  size=86 */

int * FUN_00526b80(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = realloc((void *)(param_1 + -8),param_2 + 8);
  if (piVar1 != (int *)0x0) {
    *piVar1 = param_2;
    piVar1[1] = param_2 >> 0x1f;
    return piVar1 + 2;
  }
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + -8);
  }
  FUN_00525a30(7,"failed memory resize %u to %u bytes",uVar2,param_2);
  return (int *)0x0;
}


/* FUN_00526c00 @ 00526c00  kind=gamemisc  attributed-by=none  size=78 */

int FUN_00526c00(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  switch(*(undefined1 *)(param_3 + 0x1e)) {
  case 1:
    iVar3 = FUN_005268e0(param_1,param_2,*(undefined4 *)(param_3 + 0x10),
                         *(undefined4 *)(param_3 + 0x14));
    return iVar3;
  case 2:
    iVar3 = FUN_00526810(param_1,param_2,*(undefined8 *)(param_3 + 8));
    return iVar3;
  case 3:
    iVar3 = FUN_0052e070(param_1,param_2,*(undefined4 *)(param_3 + 4),
                         *(undefined4 *)(param_3 + 0x18),0xffffffff,*(undefined1 *)(param_3 + 0x1f))
    ;
    return iVar3;
  case 4:
    break;
  default:
    iVar3 = FUN_0057d290(param_1,param_2);
    if ((iVar3 == 0) && (*(int *)(*param_1 + 0xc) != 0)) {
      (*DAT_00766638)();
    }
    return iVar3;
  }
  if ((*(ushort *)(param_3 + 0x1c) & 0x4000) == 0) {
    uVar2 = *(undefined4 *)(param_3 + 0x18);
    iVar3 = *(int *)(param_3 + 4);
    iVar1 = FUN_0057d290(param_1,param_2);
    if (iVar1 == 0) {
      if (iVar3 != 0) {
        uVar2 = FUN_00575040(param_1[0x11] + param_2 * 0x28 + -0x28,iVar3,uVar2,0,0xffffffff);
        FUN_00553890(*param_1,uVar2,0);
        iVar1 = FUN_0054a110(*param_1,uVar2);
      }
      if (*(int *)(*param_1 + 0xc) != 0) {
        (*DAT_00766638)(*(int *)(*param_1 + 0xc));
      }
    }
    return iVar1;
  }
  iVar3 = FUN_00526d60(param_1,param_2,*(undefined4 *)(param_3 + 0x10));
  return iVar3;
}


/* FUN_00526d60 @ 00526d60  kind=gamemisc  attributed-by=none  size=78 */

int FUN_00526d60(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0057d290(param_1,param_2);
  if (iVar1 == 0) {
    FUN_00575240(param_1[0x11] + param_2 * 0x28 + -0x28,param_3);
    if (*(int *)(*param_1 + 0xc) != 0) {
      (*DAT_00766638)(*(int *)(*param_1 + 0xc));
    }
  }
  return iVar1;
}


/* FUN_00526df0 @ 00526df0  kind=gamemisc  attributed-by=none  size=39 */

undefined4 FUN_00526df0(int param_1,int param_2)

{
  if (((param_1 != 0) && (0 < param_2)) && (param_2 <= *(short *)(param_1 + 0x4e))) {
    return *(undefined4 *)(*(int *)(param_1 + 0x48) + -4 + param_2 * 4);
  }
  return 0;
}


/* FUN_00526e40 @ 00526e40  kind=gamemisc  attributed-by=none  size=60 */

void FUN_00526e40(undefined4 param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  if (param_2 != (char *)0x0) {
    cVar1 = *param_2;
    pcVar2 = param_2;
    while (cVar1 != '\0') {
      pcVar2 = pcVar2 + 1;
      cVar1 = *pcVar2;
    }
    FUN_005758f0(param_1,param_2,(int)pcVar2 - (int)param_2 & 0x3fffffff);
    return;
  }
  FUN_005758f0(param_1,0,0);
  return;
}


/* FUN_00526e80 @ 00526e80  kind=gamemisc  attributed-by=none  size=271 */

undefined4 FUN_00526e80(int *param_1)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  
  piVar3 = param_1;
  iVar2 = *(int *)(*param_1 + 0xc);
  if (iVar2 != 0) {
    (*DAT_00766630)(iVar2);
  }
  param_1 = (int *)0x0;
  if (0 < (short)piVar3[0x13]) {
    iVar4 = 0;
    do {
      puVar5 = (undefined4 *)(piVar3[0x11] + iVar4);
      uVar1 = *(ushort *)(puVar5 + 7);
      if ((uVar1 & 0x2460) != 0) {
        if ((uVar1 & 0x2000) == 0) {
          if (((uVar1 & 0x400) == 0) || ((code *)puVar5[8] == (code *)0x0)) {
            if ((uVar1 & 0x20) == 0) {
              if ((uVar1 & 0x40) != 0) {
                FUN_00574f20(puVar5);
              }
            }
            else {
              FUN_005644e0(puVar5[4]);
            }
          }
          else {
            (*(code *)puVar5[8])(puVar5[1]);
            puVar5[8] = 0;
          }
        }
        else {
          FUN_00574670(puVar5,puVar5[4]);
          FUN_00574d40(puVar5);
        }
      }
      FUN_005521a0(*puVar5,puVar5[9]);
      puVar5[1] = 0;
      puVar5[9] = 0;
      puVar5[8] = 0;
      *(undefined2 *)(iVar4 + 0x1c + piVar3[0x11]) = 1;
      param_1 = (int *)((int)param_1 + 1);
      iVar4 = iVar4 + 0x28;
    } while ((int)param_1 < (int)(short)piVar3[0x13]);
  }
  if (((piVar3[0x18] & 0x200U) != 0) && (piVar3[0x2b] != 0)) {
    piVar3[0x18] = piVar3[0x18] | 0x20;
  }
  if (iVar2 != 0) {
    (*DAT_00766638)(iVar2);
  }
  return 0;
}


/* FUN_005270f0 @ 005270f0  kind=gamemisc  attributed-by=none  size=108 */

undefined4 FUN_005270f0(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *param_1;
  if ((param_2 < (int)(uint)*(ushort *)(param_1 + 0xb)) && (-1 < param_2)) {
    if (*(int *)(iVar1 + 0xc) != 0) {
      (*DAT_00766630)(*(int *)(iVar1 + 0xc));
    }
    uVar2 = FUN_0056bce0(param_1[4] + param_2 * 0x28,2);
    if (*(char *)(iVar1 + 0x38) != '\0') {
      *(undefined1 *)(iVar1 + 0x38) = 0;
      uVar2 = 0;
    }
    if (*(int *)(iVar1 + 0xc) != 0) {
      (*DAT_00766638)(*(int *)(iVar1 + 0xc));
    }
    return uVar2;
  }
  return 0;
}


/* FUN_00527160 @ 00527160  kind=gamemisc  attributed-by=none  size=191 */

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


/* FUN_00527220 @ 00527220  kind=gamemisc  attributed-by=none  size=110 */

undefined4 FUN_00527220(int *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(ushort *)(param_1 + 0xb);
  iVar2 = *param_1;
  if ((param_2 < (int)(uint)uVar1) && (-1 < param_2)) {
    if (*(int *)(iVar2 + 0xc) != 0) {
      (*DAT_00766630)(*(int *)(iVar2 + 0xc));
    }
    uVar3 = FUN_0056bce0(param_1[4] + ((uint)uVar1 + param_2) * 0x28,1);
    if (*(char *)(iVar2 + 0x38) != '\0') {
      *(undefined1 *)(iVar2 + 0x38) = 0;
      uVar3 = 0;
    }
    if (*(int *)(iVar2 + 0xc) != 0) {
      (*DAT_00766638)(*(int *)(iVar2 + 0xc));
    }
    return uVar3;
  }
  return 0;
}


/* FUN_00527290 @ 00527290  kind=gamemisc  attributed-by=none  size=110 */

undefined4 FUN_00527290(int *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(ushort *)(param_1 + 0xb);
  iVar2 = *param_1;
  if ((param_2 < (int)(uint)uVar1) && (-1 < param_2)) {
    if (*(int *)(iVar2 + 0xc) != 0) {
      (*DAT_00766630)(*(int *)(iVar2 + 0xc));
    }
    uVar3 = FUN_0056bce0(param_1[4] + ((uint)uVar1 + param_2) * 0x28,2);
    if (*(char *)(iVar2 + 0x38) != '\0') {
      *(undefined1 *)(iVar2 + 0x38) = 0;
      uVar3 = 0;
    }
    if (*(int *)(iVar2 + 0xc) != 0) {
      (*DAT_00766638)(*(int *)(iVar2 + 0xc));
    }
    return uVar3;
  }
  return 0;
}


/* FUN_00527670 @ 00527670  kind=gamemisc  attributed-by=none  size=206 */

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


/* FUN_00527740 @ 00527740  kind=gamemisc  attributed-by=none  size=955 */

void FUN_00527740(undefined4 param_1,undefined1 *param_2,undefined8 *param_3,uint param_4,
                 int *param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  int iVar8;
  int local_140;
  int local_11c;
  undefined1 local_110 [264];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  uVar2 = param_4 & 2;
  iVar8 = 0;
  *(undefined4 *)(param_3 + 1) = 0xffffffff;
  puVar7 = param_2;
  if (param_2 == (undefined1 *)0x0) {
    iVar3 = FUN_0053b1b0(0x106,local_110);
    if (iVar3 != 0) goto LAB_00527aec;
    puVar7 = local_110;
  }
  iVar3 = FUN_00533710(puVar7);
  if (iVar3 == 0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar4 = FUN_0057f890(iVar3);
  if (iVar4 != 0) {
    FUN_00524410(iVar3);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  uVar5 = 0x80000000;
  if (uVar2 != 0) {
    uVar5 = 0xc0000000;
  }
  if ((param_4 & 0x10) == 0) {
    cVar1 = ((param_4 & 4) != 0) + '\x03';
  }
  else {
    cVar1 = '\x01';
  }
  uVar6 = 0x80;
  if ((param_4 & 8) != 0) {
    uVar6 = 0x4000102;
  }
  iVar4 = FUN_0053c6d0();
  if (iVar4 == 0) {
    while (((local_11c = (*(code *)PTR_CreateFileA_007670b4)(iVar3,uVar5,3,0,cVar1,uVar6,0),
            iVar4 = local_140, local_11c == -1 &&
            (iVar4 = (*(code *)PTR_GetLastError_007671bc)(), iVar8 < DAT_007666d4)) &&
           ((iVar4 == 5 || ((iVar4 == 0x21 || (iVar4 == 0x20))))))) {
      iVar8 = iVar8 + 1;
      (*(code *)PTR_Sleep_00767300)(iVar8 * DAT_007666d8);
    }
  }
  else {
    while (((local_11c = (*(code *)PTR_CreateFileW_007670c0)(iVar3,uVar5,3,0,cVar1,uVar6,0),
            iVar4 = local_140, local_11c == -1 &&
            (iVar4 = (*(code *)PTR_GetLastError_007671bc)(), iVar8 < DAT_007666d4)) &&
           ((iVar4 == 5 || ((iVar4 == 0x21 || (iVar4 == 0x20))))))) {
      iVar8 = iVar8 + 1;
      (*(code *)PTR_Sleep_00767300)(iVar8 * DAT_007666d8);
    }
  }
  if (iVar8 != 0) {
    FUN_00525a30(10,"delayed %dms for lock/sharing conflict",
                 ((iVar8 + 1) * DAT_007666d8 * iVar8) / 2);
  }
  if (local_11c == -1) {
    *(int *)((int)param_3 + 0x14) = iVar4;
    FUN_0057fa50(0xe,iVar4,"winOpen",puVar7,0x847b);
    FUN_00524410(iVar3);
    if ((uVar2 != 0) && ((param_4 & 0x10) == 0)) {
      FUN_00527740(param_1,param_2,param_3,param_4 & 0xfffffff9 | 1,param_5);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_00525a30(0xe,"cannot open file at line %d of [%.10s]",0x8481,
                 "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (param_5 != (int *)0x0) {
    *param_5 = (uVar2 != 0) + 1;
  }
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  *(undefined4 *)(param_3 + 4) = 0;
  *(undefined4 *)((int)param_3 + 4) = param_1;
  *(undefined **)param_3 = &DAT_00712078;
  *(int *)(param_3 + 1) = local_11c;
  *(undefined4 *)((int)param_3 + 0x14) = 0;
  *(undefined4 *)(param_3 + 3) = 0;
  *(undefined1 **)((int)param_3 + 0x1c) = param_2;
  iVar8 = FUN_0057a310(param_2,&DAT_00716a1c);
  if ((iVar8 == 0) || (cVar1 = FUN_0053b110(iVar8,1,1), cVar1 != '\0')) {
    *(byte *)(param_3 + 2) = *(byte *)(param_3 + 2) | 0x10;
  }
  FUN_00524410(iVar3);
LAB_00527aec:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00527b00 @ 00527b00  kind=gamemisc  attributed-by=none  size=95 */

int FUN_00527b00(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005326d0(param_1,param_2);
  if ((*(byte *)(iVar1 + 0x1c) & 0x10) == 0) {
    iVar2 = FUN_0056bce0(iVar1,2);
    if (iVar2 == 0) {
      FUN_00532670(param_1);
      return 0;
    }
  }
  iVar2 = *(int *)(iVar1 + 0x18);
  if ((*(ushort *)(iVar1 + 0x1c) & 0x4000) != 0) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x10);
  }
  FUN_00532670(param_1);
  return iVar2;
}


/* FUN_00527b60 @ 00527b60  kind=gamemisc  attributed-by=none  size=473 */

void FUN_00527b60(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int local_a0;
  undefined4 local_9c [4];
  int local_8c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar4 = 0;
  iVar1 = FUN_00533710(param_2);
  if (iVar1 == 0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (DAT_0076b480 == 0) {
    local_9c[0] = 0x94;
    (*(code *)PTR_GetVersionExA_0076721c)(local_9c);
    DAT_0076b480 = (local_8c == 2) + 1;
  }
  if (DAT_0076b480 == 2) {
    uVar2 = (*(code *)PTR_GetFileAttributesW_00767180)();
    while (uVar2 != 0xffffffff) {
      iVar3 = local_a0;
      if ((uVar2 & 0x10) != 0) goto LAB_00527d11;
      iVar3 = (*(code *)PTR_DeleteFileW_007670fc)(iVar1);
      if (iVar3 != 0) goto LAB_00527c59;
      iVar3 = (*(code *)PTR_GetLastError_007671bc)();
      if ((DAT_007666d4 <= iVar4) || (((iVar3 != 5 && (iVar3 != 0x21)) && (iVar3 != 0x20))))
      goto LAB_00527d11;
      iVar4 = iVar4 + 1;
      (*(code *)PTR_Sleep_00767300)(iVar4 * DAT_007666d8);
      uVar2 = (*(code *)PTR_GetFileAttributesW_00767180)(iVar1);
    }
    iVar3 = (*(code *)PTR_GetLastError_007671bc)();
  }
  else {
    uVar2 = (*(code *)PTR_GetFileAttributesA_00767174)(iVar1);
    while (uVar2 != 0xffffffff) {
      iVar3 = local_a0;
      if ((uVar2 & 0x10) != 0) goto LAB_00527d11;
      iVar3 = (*(code *)PTR_DeleteFileA_007670f0)(iVar1);
      if (iVar3 != 0) goto LAB_00527c59;
      iVar3 = (*(code *)PTR_GetLastError_007671bc)();
      if ((DAT_007666d4 <= iVar4) || (((iVar3 != 5 && (iVar3 != 0x21)) && (iVar3 != 0x20))))
      goto LAB_00527d11;
      iVar4 = iVar4 + 1;
      (*(code *)PTR_Sleep_00767300)(iVar4 * DAT_007666d8);
      uVar2 = (*(code *)PTR_GetFileAttributesA_00767174)(iVar1);
    }
    iVar3 = (*(code *)PTR_GetLastError_007671bc)();
  }
  if ((iVar3 == 2) || (iVar3 == 3)) {
LAB_00527c59:
    if (iVar4 != 0) {
      FUN_00525a30(10,"delayed %dms for lock/sharing conflict",
                   ((iVar4 + 1) * DAT_007666d8 * iVar4) / 2);
    }
  }
  else {
LAB_00527d11:
    FUN_0057fa50(0xa0a,iVar3,"winDelete",param_2,0x8515);
  }
  FUN_00524410(iVar1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00527d50 @ 00527d50  kind=gamemisc  attributed-by=none  size=128 */

float10 FUN_00527d50(undefined4 param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  double local_c;
  
  iVar2 = FUN_005326d0(param_1,param_2);
  uVar1 = *(ushort *)(iVar2 + 0x1c);
  if ((uVar1 & 8) == 0) {
    if ((uVar1 & 4) != 0) {
      local_c = (double)*(longlong *)(iVar2 + 0x10);
      FUN_00532670(param_1);
      return (float10)local_c;
    }
    local_c = 0.0;
    if ((uVar1 & 0x12) != 0) {
      local_c = 0.0;
      FUN_0054a330(*(undefined4 *)(iVar2 + 4),&local_c,*(undefined4 *)(iVar2 + 0x18),
                   *(undefined1 *)(iVar2 + 0x1f));
    }
  }
  else {
    local_c = *(double *)(iVar2 + 8);
  }
  FUN_00532670(param_1);
  return (float10)local_c;
}


/* FUN_00527dd0 @ 00527dd0  kind=gamemisc  attributed-by=none  size=39 */

undefined4 FUN_00527dd0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005326d0(param_1,param_2);
  uVar1 = FUN_0051c810(uVar1);
  FUN_00532670(param_1);
  return uVar1;
}


/* FUN_00527e00 @ 00527e00  kind=gamemisc  attributed-by=none  size=155 */

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


/* FUN_00527ea0 @ 00527ea0  kind=gamemisc  attributed-by=none  size=133 */

undefined8 FUN_00527ea0(undefined4 param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_c;
  
  iVar2 = FUN_005326d0(param_1,param_2);
  uVar1 = *(ushort *)(iVar2 + 0x1c);
  if ((uVar1 & 4) == 0) {
    if ((uVar1 & 8) == 0) {
      local_c = 0;
      uVar3 = local_c;
      if ((uVar1 & 0x12) != 0) {
        FUN_0054a9a0(*(undefined4 *)(iVar2 + 4),&local_c,*(undefined4 *)(iVar2 + 0x18),
                     *(undefined1 *)(iVar2 + 0x1f));
        uVar3 = local_c;
      }
    }
    else {
      uVar3 = FUN_00534710(*(undefined8 *)(iVar2 + 8));
    }
  }
  else {
    uVar3 = *(undefined8 *)(iVar2 + 0x10);
  }
  FUN_00532670();
  return uVar3;
}


/* FUN_00527f30 @ 00527f30  kind=gamemisc  attributed-by=none  size=41 */

undefined4 FUN_00527f30(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005326d0(param_1,param_2);
  uVar1 = FUN_0056bce0(uVar1,1);
  FUN_00532670(param_1);
  return uVar1;
}


/* FUN_00527f60 @ 00527f60  kind=gamemisc  attributed-by=none  size=41 */

undefined4 FUN_00527f60(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005326d0(param_1,param_2);
  uVar1 = FUN_0056bce0(uVar1,2);
  FUN_00532670(param_1);
  return uVar1;
}


/* FUN_00528350 @ 00528350  kind=gamemisc  attributed-by=none  size=85 */

LPCRITICAL_SECTION FUN_00528350(uint param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_1 < 2) {
    lpCriticalSection = (LPCRITICAL_SECTION)FUN_0055da00(0x1c);
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      lpCriticalSection->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
      lpCriticalSection->LockCount = 0;
      lpCriticalSection->RecursionCount = 0;
      lpCriticalSection->OwningThread = (HANDLE)0x0;
      lpCriticalSection->LockSemaphore = (HANDLE)0x0;
      lpCriticalSection->SpinCount = 0;
      lpCriticalSection[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
      InitializeCriticalSection(lpCriticalSection);
    }
    return lpCriticalSection;
  }
  return (LPCRITICAL_SECTION)(&DAT_0076b3d0 + (param_1 - 2) * 0x1c);
}


/* FUN_005283b0 @ 005283b0  kind=gamemisc  attributed-by=none  size=188 */

undefined4 FUN_005283b0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)*piVar1;
    if (*piVar2 != 0) {
      (*DAT_00766630)(*piVar2);
    }
    piVar4 = piVar2 + 0x10;
    piVar3 = (int *)piVar2[0x10];
    while (piVar3 != piVar1) {
      piVar4 = piVar3 + 1;
      piVar3 = (int *)*piVar4;
    }
    *piVar4 = piVar1[1];
    FUN_00524410(piVar1);
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*piVar2 != 0) {
      (*DAT_00766638)(*piVar2);
    }
    if ((DAT_007665e4 != 0) && (iVar5 = (*DAT_00766628)(2), iVar5 != 0)) {
      (*DAT_00766630)(iVar5);
    }
    piVar2 = piVar2 + 0xf;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      FUN_0057fe70(*(undefined4 *)(param_1 + 4),param_2);
    }
    if ((DAT_007665e4 != 0) && (iVar5 = (*DAT_00766628)(2), iVar5 != 0)) {
      (*DAT_00766638)(iVar5);
    }
  }
  return 0;
}


/* FUN_00528490 @ 00528490  kind=gamemisc  attributed-by=none  size=145 */

uint FUN_00528490(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  uVar2 = FUN_0056a850(param_1,param_2,0xffffffff,2);
  uVar3 = FUN_005515c0(param_1,uVar2,param_3,param_4,param_5,param_6,param_7,param_8,0);
  FUN_005521a0(param_1,uVar2);
  if ((*(char *)(param_1 + 0x38) != '\0') || (uVar3 == 0xc0a)) {
    FUN_00553890(param_1,7,0);
    *(undefined1 *)(param_1 + 0x38) = 0;
    uVar3 = 7;
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return uVar1 & uVar3;
}


/* FUN_00528550 @ 00528550  kind=gamemisc  attributed-by=none  size=445 */

int FUN_00528550(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  int *piVar1;
  int *piVar2;
  ushort uVar3;
  int *piVar4;
  int iVar5;
  ushort uVar6;
  
  piVar1 = *(int **)(param_1 + 0x18);
  piVar2 = (int *)*piVar1;
  uVar3 = (1 << ((char)param_3 + (byte)param_2 & 0x1f)) - (1 << ((byte)param_2 & 0x1f));
  if (*piVar2 != 0) {
    (*DAT_00766630)(*piVar2);
  }
  if ((param_4 & 1) == 0) {
    iVar5 = piVar2[0x10];
    if ((param_4 & 4) == 0) {
      for (; iVar5 != 0; iVar5 = *(int *)(iVar5 + 4)) {
        if (((*(ushort *)(iVar5 + 0xc) & uVar3) != 0) || ((*(ushort *)(iVar5 + 10) & uVar3) != 0))
        goto LAB_005286d4;
      }
      iVar5 = FUN_0057f980(piVar2 + 4,3,param_2 + 0x78,0,param_3,0);
      if (iVar5 == 0) {
        iVar5 = (*(code *)PTR_GetLastError_007671bc)();
        piVar2[0xe] = iVar5;
        iVar5 = 5;
      }
      else {
        iVar5 = 0;
      }
      if (iVar5 == 0) {
        *(ushort *)(piVar1 + 3) = *(ushort *)(piVar1 + 3) | uVar3;
      }
    }
    else {
      uVar6 = 0;
      for (; iVar5 != 0; iVar5 = *(int *)(iVar5 + 4)) {
        if ((*(ushort *)(iVar5 + 0xc) & uVar3) != 0) goto LAB_005286d4;
        uVar6 = uVar6 | *(ushort *)(iVar5 + 10);
      }
      if ((uVar6 & uVar3) == 0) {
        iVar5 = FUN_0057f980(piVar2 + 4,1,param_2 + 0x78,0,param_3,0);
        if (iVar5 == 0) {
          iVar5 = (*(code *)PTR_GetLastError_007671bc)();
          piVar2[0xe] = iVar5;
          iVar5 = 5;
        }
        else {
          iVar5 = 0;
        }
        if (iVar5 == 0) {
          *(ushort *)((int)piVar1 + 10) = *(ushort *)((int)piVar1 + 10) | uVar3;
        }
      }
      else {
        iVar5 = 0;
        *(ushort *)((int)piVar1 + 10) = *(ushort *)((int)piVar1 + 10) | uVar3;
      }
    }
  }
  else {
    piVar4 = (int *)piVar2[0x10];
    param_1._0_2_ = 0;
    if (piVar4 != (int *)0x0) {
      param_1._0_2_ = 0;
      do {
        if (piVar4 != piVar1) {
          param_1._0_2_ = (ushort)param_1 | *(ushort *)((int)piVar4 + 10);
        }
        piVar4 = (int *)piVar4[1];
      } while (piVar4 != (int *)0x0);
    }
    if (((ushort)param_1 & uVar3) == 0) {
      iVar5 = FUN_0057ff40(piVar2 + 4,param_2 + 0x78,0,param_3,0);
      if (iVar5 == 0) {
        iVar5 = (*(code *)PTR_GetLastError_007671bc)();
        piVar2[0xe] = iVar5;
        iVar5 = 5;
      }
      else {
        iVar5 = 0;
      }
      if (iVar5 == 0) {
        *(ushort *)(piVar1 + 3) = *(ushort *)(piVar1 + 3) & ~uVar3;
        *(ushort *)((int)piVar1 + 10) = *(ushort *)((int)piVar1 + 10) & ~uVar3;
      }
    }
    else {
      *(ushort *)(piVar1 + 3) = *(ushort *)(piVar1 + 3) & ~uVar3;
      iVar5 = 0;
      *(ushort *)((int)piVar1 + 10) = *(ushort *)((int)piVar1 + 10) & ~uVar3;
    }
  }
LAB_005286f1:
  if (*piVar2 != 0) {
    (*DAT_00766638)(*piVar2);
  }
  return iVar5;
LAB_005286d4:
  iVar5 = 5;
  goto LAB_005286f1;
}


/* FUN_00528720 @ 00528720  kind=gamemisc  attributed-by=none  size=218 */

uint FUN_00528720(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,code *param_9)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  
  piVar3 = (int *)0x0;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  if (param_9 != (code *)0x0) {
    piVar3 = (int *)FUN_00552230(param_1,0xc);
    if (piVar3 == (int *)0x0) {
      (*param_9)(param_5);
      uVar2 = 1;
      goto LAB_005287ba;
    }
    piVar3[0] = 0;
    piVar3[1] = 0;
    piVar3[2] = 0;
    piVar3[1] = (int)param_9;
    piVar3[2] = param_5;
  }
  uVar2 = FUN_005515c0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar3);
  if ((piVar3 != (int *)0x0) && (*piVar3 == 0)) {
    (*param_9)(param_5);
    FUN_005521a0(param_1,piVar3);
  }
LAB_005287ba:
  if ((*(char *)(param_1 + 0x38) != '\0') || (uVar2 == 0xc0a)) {
    FUN_00553890(param_1,7,0);
    *(undefined1 *)(param_1 + 0x38) = 0;
    uVar2 = 7;
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return uVar1 & uVar2;
}


/* FUN_00528830 @ 00528830  kind=gamemisc  attributed-by=none  size=88 */

undefined4 FUN_00528830(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(short *)(param_1 + 0x4c) != *(short *)(param_2 + 0x4c)) {
    return 1;
  }
  if (((*(uint *)(param_2 + 0x60) & 0x200) != 0) && (*(int *)(param_2 + 0xac) != 0)) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) | 0x20;
  }
  if (((*(uint *)(param_1 + 0x60) & 0x200) != 0) && (*(int *)(param_1 + 0xac) != 0)) {
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x20;
  }
  uVar1 = FUN_005682d0();
  return uVar1;
}


/* FUN_00528890 @ 00528890  kind=gamemisc  attributed-by=none  size=73 */

undefined4 FUN_00528890(int param_1)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 0x1c) & 0x12) == 0) {
    uVar1 = FUN_0056bce0(param_1,1);
    return uVar1;
  }
  FUN_00574600(param_1);
  *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xfffd | 0x10;
  if (*(int *)(param_1 + 0x18) != 0) {
    return *(undefined4 *)(param_1 + 4);
  }
  return 0;
}


/* FUN_005288e0 @ 005288e0  kind=gamemisc  attributed-by=none  size=51 */

int FUN_005288e0(int param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x1c) & 0x10) == 0) {
    iVar1 = FUN_0056bce0(param_1,1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if ((*(ushort *)(param_1 + 0x1c) & 0x4000) != 0) {
    iVar1 = iVar1 + *(int *)(param_1 + 0x10);
  }
  return iVar1;
}


/* FUN_005290e0 @ 005290e0  kind=gamemisc  attributed-by=none  size=37 */

bool FUN_005290e0(int param_1,int param_2)

{
  for (; (0 < param_2 && (*(char *)(param_1 + -1 + param_2) == ' ')); param_2 = param_2 + -1) {
  }
  return param_2 == 0;
}


/* FUN_00529cf0 @ 00529cf0  kind=gamemisc  attributed-by=none  size=235 */

undefined4 FUN_00529cf0(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  
  if (((param_3 == (int *)0x0) || (*param_3 == 0)) ||
     (piVar9 = (int *)param_3[2], piVar9 == (int *)0x0)) {
    return 0;
  }
  uVar2 = param_1[1];
  uVar3 = *param_1;
  iVar5 = FUN_005572d0(uVar3,*param_3,uVar2);
  if (iVar5 == 0) {
    return 0;
  }
  if (param_3[1] == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_00557190(uVar3,param_3[1],uVar2);
    if (iVar6 != 0) {
      iVar7 = *(int *)(iVar6 + 0x24);
      goto LAB_00529d5a;
    }
  }
  iVar7 = 0;
LAB_00529d5a:
  cVar1 = (char)*piVar9;
  iVar10 = 0;
  while( true ) {
    if (cVar1 == '\0') {
      return 0;
    }
    if (iVar7 < iVar10) break;
    iVar8 = 0;
    while ((iVar4 = (int)cVar1, 0x2f < iVar4 && (iVar4 < 0x3a))) {
      piVar9 = (int *)((int)piVar9 + 1);
      iVar8 = iVar4 + (iVar8 * 5 + -0x18) * 2;
      cVar1 = *(char *)piVar9;
    }
    if (iVar10 == 0) {
      *(int *)(iVar5 + 0x1c) = iVar8;
    }
    if (iVar6 == 0) {
      return 0;
    }
    *(int *)(*(int *)(iVar6 + 8) + iVar10 * 4) = iVar8;
    if ((char)*piVar9 == ' ') {
      piVar9 = (int *)((int)piVar9 + 1);
    }
    if (((*piVar9 == 0x726f6e75) && (piVar9[1] == 0x65726564)) && ((short)piVar9[2] == 100)) {
      *(undefined1 *)(iVar6 + 0x2e) = 1;
      return 0;
    }
    cVar1 = (char)*piVar9;
    iVar10 = iVar10 + 1;
  }
  return 0;
}


/* FUN_00529de0 @ 00529de0  kind=gamemisc  attributed-by=none  size=721 */

undefined4 FUN_00529de0(int param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  short *psVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint uVar15;
  undefined4 local_c;
  
  pcVar6 = (char *)param_2;
  piVar11 = *(int **)(param_1 + 0x10);
  piVar2 = (int *)*piVar11;
  psVar3 = (short *)piVar11[1];
  iVar4 = piVar11[3];
  cVar1 = *(char *)param_2;
  if (cVar1 != -0x68) {
    if (cVar1 == -0x67) {
      if ((*(byte *)(piVar11 + 7) & 8) != 0) {
        return 0;
      }
      if (*(uint *)(param_1 + 0xc) != (uint)*(byte *)((int)param_2 + 0x23)) {
        return 0;
      }
      puVar12 = *(undefined4 **)(iVar4 + 0x20);
      param_2 = (int *)(iVar4 + 0x24);
      piVar11 = (int *)0x0;
      if (0 < *param_2) {
        do {
          iVar10 = FUN_00555cb0(*puVar12,pcVar6);
          if (iVar10 == 0) break;
          piVar11 = (int *)((int)piVar11 + 1);
          puVar12 = puVar12 + 4;
        } while ((int)piVar11 < *param_2);
        if ((int)piVar11 < *param_2) goto LAB_00529f27;
      }
      local_c = CONCAT31((int3)((uint)psVar3 >> 8),
                         *(undefined1 *)(*(int *)(*(int *)(*piVar2 + 0x10) + 0xc) + 0x4d));
      iVar10 = FUN_0054a2b0(*piVar2,*(undefined4 *)(iVar4 + 0x20),0x10,param_2,&param_2);
      piVar11 = param_2;
      *(int *)(iVar4 + 0x20) = iVar10;
      if (-1 < (int)param_2) {
        puVar12 = (undefined4 *)((int)param_2 * 0x10 + iVar10);
        *puVar12 = pcVar6;
        piVar2[0x13] = piVar2[0x13] + 1;
        puVar12[2] = piVar2[0x13];
        if (*(undefined4 **)(pcVar6 + 0x10) == (undefined4 *)0x0) {
          param_2 = (int *)0x0;
        }
        else {
          param_2 = (int *)**(undefined4 **)(pcVar6 + 0x10);
        }
        pcVar5 = *(char **)(pcVar6 + 4);
        uVar15 = 0;
        if (pcVar5 != (char *)0x0) {
          cVar1 = *pcVar5;
          pcVar7 = pcVar5;
          while (cVar1 != '\0') {
            pcVar7 = pcVar7 + 1;
            cVar1 = *pcVar7;
          }
          uVar15 = (int)pcVar7 - (int)pcVar5 & 0x3fffffff;
        }
        uVar8 = FUN_00556c60(*piVar2,pcVar5,uVar15,param_2,local_c,0);
        puVar12[1] = uVar8;
        if ((pcVar6[2] & 0x10U) != 0) {
          puVar12[3] = piVar2[0x12];
          piVar2[0x12] = piVar2[0x12] + 1;
          *(short *)(pcVar6 + 0x1e) = (short)piVar11;
          *(int *)(pcVar6 + 0x24) = iVar4;
          return 1;
        }
        puVar12[3] = 0xffffffff;
      }
LAB_00529f27:
      *(short *)(pcVar6 + 0x1e) = (short)piVar11;
      *(int *)(pcVar6 + 0x24) = iVar4;
      return 1;
    }
    if (cVar1 != -0x66) {
      return 0;
    }
  }
  if (psVar3 == (short *)0x0) {
    return 1;
  }
  iVar10 = 0;
  if (*psVar3 < 1) {
    return 1;
  }
  piVar11 = (int *)(psVar3 + 0x1a);
  while (*(int *)((int)param_2 + 0x18) != *piVar11) {
    iVar10 = iVar10 + 1;
    piVar11 = piVar11 + 0x12;
    if (*psVar3 <= iVar10) {
      return 1;
    }
  }
  uVar15 = *(uint *)(iVar4 + 0x18);
  iVar10 = *(int *)(iVar4 + 0x14);
  uVar14 = 0;
  if (0 < (int)uVar15) {
    piVar11 = (int *)(iVar10 + 8);
    do {
      if ((piVar11[-1] == *(int *)((int)param_2 + 0x18)) &&
         (uVar15 = *(uint *)(iVar4 + 0x18), *piVar11 == (int)*(short *)((int)param_2 + 0x1c)))
      break;
      uVar14 = uVar14 + 1;
      piVar11 = piVar11 + 6;
    } while ((int)uVar14 < (int)uVar15);
  }
  if ((int)uVar14 < (int)uVar15) goto LAB_0052a099;
  if ((uVar15 & uVar15 - 1) == 0) {
    iVar9 = 1;
    if (uVar15 != 0) {
      iVar9 = uVar15 * 2;
    }
    param_2 = (int *)iVar10;
    iVar10 = FUN_00552390(*piVar2,iVar10,iVar9 * 0x18);
    if (iVar10 != 0) goto LAB_00529fef;
    uVar15 = 0xffffffff;
    iVar10 = (int)param_2;
  }
  else {
LAB_00529fef:
    *(undefined8 *)(iVar10 + uVar15 * 0x18) = 0;
    *(undefined8 *)(iVar10 + 8 + uVar15 * 0x18) = 0;
    *(undefined8 *)(iVar10 + 0x10 + uVar15 * 0x18) = 0;
    *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
  }
  *(int *)(iVar4 + 0x14) = iVar10;
  uVar14 = uVar15;
  if (-1 < (int)uVar15) {
    puVar12 = (undefined4 *)(iVar10 + uVar15 * 0x18);
    *puVar12 = *(undefined4 *)(pcVar6 + 0x28);
    puVar12[1] = *(undefined4 *)(pcVar6 + 0x18);
    puVar12[2] = (int)*(short *)(pcVar6 + 0x1c);
    piVar2[0x13] = piVar2[0x13] + 1;
    puVar12[4] = piVar2[0x13];
    puVar12[3] = 0xffffffff;
    puVar12[5] = pcVar6;
    piVar11 = *(int **)(iVar4 + 0x10);
    if (piVar11 != (int *)0x0) {
      puVar13 = (undefined4 *)piVar11[2];
      iVar10 = 0;
      if (0 < *piVar11) {
        do {
          pcVar5 = (char *)*puVar13;
          if (((*pcVar5 == -0x68) && (*(int *)(pcVar5 + 0x18) == *(int *)(pcVar6 + 0x18))) &&
             (*(short *)(pcVar5 + 0x1c) == *(short *)(pcVar6 + 0x1c))) {
            puVar12[3] = iVar10;
            break;
          }
          iVar10 = iVar10 + 1;
          puVar13 = puVar13 + 5;
        } while (iVar10 < *piVar11);
      }
    }
    if ((int)puVar12[3] < 0) {
      puVar12[3] = *(undefined4 *)(iVar4 + 0xc);
      *(int *)(iVar4 + 0xc) = *(int *)(iVar4 + 0xc) + 1;
    }
  }
LAB_0052a099:
  *(int *)(pcVar6 + 0x24) = iVar4;
  *pcVar6 = -0x66;
  *(short *)(pcVar6 + 0x1e) = (short)uVar14;
  return 1;
}


/* FUN_0052df70 @ 0052df70  kind=gamemisc  attributed-by=none  size=191 */

uint FUN_0052df70(int param_1,uint param_2,byte *param_3,uint param_4,byte *param_5)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined8 uVar8;
  
  pbVar2 = param_3;
  pbVar3 = param_5;
  uVar5 = param_4;
  uVar6 = param_4;
  if ((int)param_2 < (int)param_4) {
    uVar5 = param_2;
    uVar6 = param_2;
  }
  while (uVar1 = uVar5 - 4, 3 < uVar5) {
    if (*(int *)pbVar2 != *(int *)pbVar3) goto LAB_0052dfa6;
    pbVar2 = pbVar2 + 4;
    pbVar3 = pbVar3 + 4;
    uVar5 = uVar1;
  }
  if (uVar1 != 0xfffffffc) {
LAB_0052dfa6:
    bVar7 = *pbVar2 < *pbVar3;
    if ((*pbVar2 != *pbVar3) ||
       ((uVar1 != 0xfffffffd &&
        ((bVar7 = pbVar2[1] < pbVar3[1], pbVar2[1] != pbVar3[1] ||
         ((uVar1 != 0xfffffffe &&
          ((bVar7 = pbVar2[2] < pbVar3[2], pbVar2[2] != pbVar3[2] ||
           ((uVar1 != 0xffffffff && (bVar7 = pbVar2[3] < pbVar3[3], pbVar2[3] != pbVar3[3]))))))))))
       )) {
      uVar5 = -(uint)bVar7 | 1;
      goto LAB_0052dfdc;
    }
  }
  uVar5 = 0;
LAB_0052dfdc:
  if (uVar5 != 0) {
    return uVar5;
  }
  if (param_1 != 0) {
    for (iVar4 = param_2 - uVar6; (0 < iVar4 && (param_3[iVar4 + (uVar6 - 1)] == 0x20));
        iVar4 = iVar4 + -1) {
    }
    if (iVar4 == 0) {
      uVar8 = FUN_005290e0(param_5 + uVar6,param_4 - uVar6);
      if ((int)uVar8 != 0) {
        return (uint)((ulonglong)uVar8 >> 0x20);
      }
    }
  }
  return param_2 - param_4;
}


/* FUN_0052e130 @ 0052e130  kind=gamemisc  attributed-by=none  size=256 */

uint FUN_0052e130(int param_1,undefined4 param_2,int param_3,int param_4,code *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    FUN_00525a30(0x15,"misuse at line %d of [%.10s]",0x11421,
                 "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
    return 0x15;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (*(int *)(iVar1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(iVar1 + 0xc));
  }
  iVar2 = *(int *)(param_1 + 0x14);
  if (((param_3 < 0) || (param_4 < 0)) || (*(int *)(param_1 + 4) < param_4 + param_3)) {
    uVar4 = 1;
    FUN_00553890(iVar1,1,0);
  }
  else if (iVar2 == 0) {
    uVar4 = 4;
  }
  else {
    FUN_0054d260(**(undefined4 **)(param_1 + 0x10));
    uVar4 = (*param_5)(*(undefined4 *)(param_1 + 0x10),*(int *)(param_1 + 8) + param_4,param_3,
                       param_2);
    FUN_0054de80(*(undefined4 *)(param_1 + 0x10));
    if (uVar4 == 4) {
      FUN_005734d0(iVar2);
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    else {
      *(uint *)(iVar1 + 0x2c) = uVar4;
      *(uint *)(iVar2 + 0x58) = uVar4;
    }
  }
  if ((*(char *)(iVar1 + 0x38) != '\0') || (uVar4 == 0xc0a)) {
    FUN_00553890(iVar1,7,0);
    *(undefined1 *)(iVar1 + 0x38) = 0;
    uVar4 = 7;
  }
  uVar3 = *(uint *)(iVar1 + 0x30);
  if (*(int *)(iVar1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(iVar1 + 0xc));
  }
  return uVar3 & uVar4;
}


/* FUN_0052ebe0 @ 0052ebe0  kind=gamemisc  attributed-by=none  size=65 */

int FUN_0052ebe0(int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((((undefined4 *)(iVar1 + 0x1ac) != (undefined4 *)0x0) &&
      (pcVar2 = *(code **)(iVar1 + 0x1ac), pcVar2 != (code *)0x0)) && (-1 < *(int *)(iVar1 + 0x1b4))
     ) {
    iVar3 = (*pcVar2)(*(undefined4 *)(iVar1 + 0x1b0),*(int *)(iVar1 + 0x1b4));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + 0x1b4) = 0xffffffff;
      return 0;
    }
    *(int *)(iVar1 + 0x1b4) = *(int *)(iVar1 + 0x1b4) + 1;
    return iVar3;
  }
  return 0;
}


/* FUN_00532980 @ 00532980  kind=gamemisc  attributed-by=none  size=181 */

void FUN_00532980(uint *param_1)

{
  int iVar1;
  int iVar2;
  double dVar3;
  
  if (*(char *)((int)param_1 + 0x29) == '\0') {
    FUN_00532a40(param_1);
    iVar1 = __allrem(*param_1 + 43200000,param_1[1] + (uint)(0xfd6cd1ff < *param_1),86400000,0);
    *(undefined1 *)((int)param_1 + 0x29) = 1;
    iVar2 = (int)((double)iVar1 / 1000.0);
    param_1[5] = iVar2 / 0xe10;
    dVar3 = (double)iVar1 / 1000.0 - (double)iVar2;
    *(double *)(param_1 + 8) = dVar3;
    param_1[6] = (iVar2 % 0xe10) / 0x3c;
    *(double *)(param_1 + 8) = (double)((iVar2 % 0xe10) % 0x3c) + dVar3;
  }
  return;
}


/* FUN_00532a40 @ 00532a40  kind=gamemisc  attributed-by=none  size=319 */

void FUN_00532a40(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  if (*(char *)((int)param_1 + 0x2a) == '\0') {
    uVar4 = FUN_0068d946();
    *(undefined8 *)param_1 = uVar4;
    *(undefined1 *)((int)param_1 + 0x2a) = 1;
    if (*(char *)((int)param_1 + 0x29) != '\0') {
      uVar2 = (param_1[6] + (param_1[5] * 0x10 - param_1[5]) * 4) * 60000;
      uVar4 = FUN_0068d946();
      uVar3 = uVar2 - (uint)uVar4;
      uVar1 = *param_1;
      *param_1 = *param_1 + uVar3;
      param_1[1] = param_1[1] +
                   ((((int)uVar2 >> 0x1f) - (int)((ulonglong)uVar4 >> 0x20)) -
                   (uint)(uVar2 < (uint)uVar4)) + (uint)CARRY4(uVar1,uVar3);
      if (*(char *)((int)param_1 + 0x2b) != '\0') {
        uVar2 = param_1[7] * 60000;
        uVar1 = *param_1;
        *param_1 = *param_1 + param_1[7] * -60000;
        *(undefined2 *)(param_1 + 10) = 0;
        *(undefined1 *)((int)param_1 + 0x2b) = 0;
        param_1[1] = (param_1[1] - ((int)uVar2 >> 0x1f)) - (uint)(uVar1 < uVar2);
      }
    }
  }
  return;
}


/* FUN_00532d10 @ 00532d10  kind=gamemisc  attributed-by=none  size=279 */

void FUN_00532d10(uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if ((char)param_1[10] == '\0') {
    if (*(char *)((int)param_1 + 0x2a) == '\0') {
      param_1[2] = 2000;
      param_1[3] = 1;
      param_1[4] = 1;
      *(undefined1 *)(param_1 + 10) = 1;
      return;
    }
    iVar1 = __alldiv(*param_1 + 43200000,param_1[1] + (uint)(0xfd6cd1ff < *param_1),86400000,0);
    iVar4 = (int)(((double)iVar1 - 1867216.25) / 36524.25);
    iVar1 = iVar1 + (iVar4 - ((int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2)) + 0x5f5;
    iVar6 = (int)(((double)iVar1 - 122.1) / 365.25);
    iVar4 = (iVar6 * 0x8ead) / 100;
    iVar5 = (int)((double)(iVar1 - iVar4) / 30.6001);
    param_1[4] = (iVar1 - (int)((double)iVar5 * 30.6001)) - iVar4;
    uVar2 = iVar5 - 1;
    if (0xd < iVar5) {
      uVar2 = iVar5 - 0xd;
    }
    param_1[3] = uVar2;
    uVar3 = iVar6 - 0x126c;
    if ((int)uVar2 < 3) {
      uVar3 = iVar6 - 0x126b;
    }
    param_1[2] = uVar3;
    *(undefined1 *)(param_1 + 10) = 1;
  }
  return;
}


/* FUN_005336b0 @ 005336b0  kind=gamemisc  attributed-by=none  size=95 */

int FUN_005336b0(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 8) + 0x50);
  iVar2 = (int)uVar1 >> 0x1f;
  if ((iVar2 <= param_3) && ((iVar2 < param_3 || (uVar1 < param_2)))) {
    *(undefined4 *)(param_1 + 0x38) = 0x12;
    FUN_00575040(param_1 + 8,"string or blob too big",0xffffffff,1,0);
    return 0;
  }
  iVar2 = FUN_0055da00(param_2);
  if (iVar2 == 0) {
    FUN_0051d110(param_1);
  }
  return iVar2;
}


/* FUN_00533710 @ 00533710  kind=gamemisc  attributed-by=none  size=169 */

void FUN_00533710(undefined4 param_1)

{
  int iVar1;
  undefined4 local_9c [4];
  int local_8c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if (DAT_0076b480 == 0) {
    local_9c[0] = 0x94;
    (*(code *)PTR_GetVersionExA_0076721c)(local_9c);
    DAT_0076b480 = (local_8c == 2) + 1;
  }
  if (DAT_0076b480 == 2) {
    FUN_0057c220(param_1);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar1 = FUN_0057c220(param_1);
  if (iVar1 == 0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  FUN_0057b1e0(iVar1);
  FUN_00524410(iVar1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00533960 @ 00533960  kind=gamemisc  attributed-by=none  size=413 */

undefined4
FUN_00533960(int param_1,char *param_2,byte param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  uint extraout_ECX;
  int extraout_EDX;
  char *pcVar5;
  uint uVar6;
  undefined4 *puVar7;
  int local_c;
  
  pcVar2 = param_2;
  uVar6 = 0;
  if (param_2 != (char *)0x0) {
    cVar1 = *param_2;
    pcVar5 = param_2;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      cVar1 = *pcVar5;
    }
    uVar6 = (int)pcVar5 - (int)param_2 & 0x3fffffff;
  }
  param_2 = (char *)(uint)param_3;
  if ((param_2 == (char *)0x4) || (param_2 == (char *)0x8)) {
    param_2 = (char *)0x2;
  }
  else if ((param_2 == (char *)0x0) || (3 < param_2)) {
    FUN_00525a30(0x15,"misuse at line %d of [%.10s]",0x1bf1f,
                 "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
    return 0x15;
  }
  if (pcVar2 == (char *)0x0) {
    iVar3 = *(int *)(param_1 + 8);
  }
  else {
    iVar3 = FUN_00537090(param_1,pcVar2,0);
  }
  if (((iVar3 != 0) && (iVar3 = iVar3 + (int)param_2 * 0x14, iVar3 != 0x14)) &&
     (*(int *)(iVar3 + -8) != 0)) {
    if (*(int *)(param_1 + 0x84) != 0) {
      FUN_00553890(param_1,5,"unable to delete/modify collation sequence due to active statements");
      return 5;
    }
    FUN_00553a10(param_1);
    if ((*(byte *)(extraout_EDX + 4) & 0xfffffff7) == extraout_ECX) {
      iVar4 = FUN_0055ad50(param_1 + 0x19c,pcVar2,uVar6);
      puVar7 = (undefined4 *)(iVar4 + 0x10);
      local_c = 3;
      do {
        if (*(char *)(puVar7 + -3) == *(char *)(iVar3 + -0x10)) {
          if ((code *)*puVar7 != (code *)0x0) {
            (*(code *)*puVar7)(puVar7[-2]);
          }
          puVar7[-1] = 0;
        }
        puVar7 = puVar7 + 5;
        local_c = local_c + -1;
      } while (local_c != 0);
    }
  }
  if (pcVar2 == (char *)0x0) {
    iVar3 = *(int *)(param_1 + 8);
  }
  else {
    iVar3 = FUN_00537090(param_1,pcVar2,1);
  }
  if ((iVar3 != 0) && (iVar3 = iVar3 + (int)param_2 * 0x14, iVar3 != 0x14)) {
    *(undefined4 *)(iVar3 + -8) = param_5;
    *(undefined4 *)(iVar3 + -0xc) = param_4;
    *(undefined4 *)(iVar3 + -4) = param_6;
    *(byte *)(iVar3 + -0x10) = param_3 & 8 | (byte)param_2;
    FUN_00553890(param_1,0,0);
    return 0;
  }
  return 7;
}


/* FUN_00533b00 @ 00533b00  kind=gamemisc  attributed-by=none  size=331 */

uint FUN_00533b00(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,code *param_5)

{
  undefined4 *_Dst;
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  uint uVar6;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  uVar6 = 0;
  if (param_2 != (char *)0x0) {
    cVar1 = *param_2;
    pcVar5 = param_2;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      cVar1 = *pcVar5;
    }
    uVar6 = (int)pcVar5 - (int)param_2 & 0x3fffffff;
  }
  if (*(int *)(param_1 + 0x130) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0057a870(param_2,uVar6);
    uVar2 = uVar2 % *(uint *)(param_1 + 0x124);
  }
  iVar3 = FUN_00537190(param_1 + 0x124,param_2,uVar6,uVar2);
  if ((iVar3 == 0) || (*(int *)(iVar3 + 8) == 0)) {
    puVar4 = (undefined4 *)FUN_00552230(param_1,uVar6 + 0x11);
    if (puVar4 != (undefined4 *)0x0) {
      _Dst = puVar4 + 4;
      memcpy(_Dst,param_2,uVar6 + 1);
      *puVar4 = param_3;
      puVar4[2] = param_4;
      puVar4[1] = _Dst;
      puVar4[3] = param_5;
      iVar3 = FUN_0055ada0(param_1 + 0x124,_Dst,uVar6,puVar4);
      if (iVar3 != 0) {
        *(undefined1 *)(param_1 + 0x38) = 1;
        FUN_005521a0(param_1,iVar3);
      }
    }
    uVar6 = 0;
  }
  else {
    FUN_00525a30(0x15,"misuse at line %d of [%.10s]",0x18c17,
                 "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
    uVar6 = 0x15;
  }
  if ((*(char *)(param_1 + 0x38) != '\0') || (uVar6 == 0xc0a)) {
    FUN_00553890(param_1,7,0);
    *(undefined1 *)(param_1 + 0x38) = 0;
    uVar6 = 7;
  }
  uVar6 = *(uint *)(param_1 + 0x30) & uVar6;
  if ((uVar6 != 0) && (param_5 != (code *)0x0)) {
    (*param_5)(param_4);
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return uVar6;
}


/* FUN_005342f0 @ 005342f0  kind=gamemisc  attributed-by=none  size=185 */

void FUN_005342f0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int local_8;
  
  iVar4 = param_1;
  FUN_0054d340(param_1);
  param_1 = 0;
  if (0 < *(int *)(iVar4 + 0x14)) {
    local_8 = 0;
    do {
      iVar1 = *(int *)(local_8 + 0xc + *(int *)(iVar4 + 0x10));
      if (iVar1 != 0) {
        for (puVar2 = *(undefined4 **)(iVar1 + 0x10); puVar2 != (undefined4 *)0x0;
            puVar2 = (undefined4 *)*puVar2) {
          if ((*(byte *)(puVar2[2] + 0x2a) & 0x10) != 0) {
            piVar5 = (int *)(puVar2[2] + 0x38);
            iVar1 = *piVar5;
            while (iVar1 != 0) {
              piVar3 = (int *)*piVar5;
              if (*piVar3 == iVar4) {
                *piVar5 = piVar3[6];
                piVar5 = piVar3 + 3;
                *piVar5 = *piVar5 + -1;
                iVar1 = *piVar3;
                if (*piVar5 == 0) {
                  piVar5 = (int *)piVar3[2];
                  if (piVar5 != (int *)0x0) {
                    (**(code **)(*piVar5 + 0x10))(piVar5);
                  }
                  FUN_005521a0(iVar1,piVar3);
                }
                break;
              }
              piVar5 = piVar3 + 6;
              iVar1 = piVar3[6];
            }
          }
        }
      }
      param_1 = param_1 + 1;
      local_8 = local_8 + 0x10;
    } while (param_1 < *(int *)(iVar4 + 0x14));
  }
  FUN_0054de20(iVar4);
  return;
}


/* FUN_00534970 @ 00534970  kind=gamemisc  attributed-by=none  size=94 */

undefined4 FUN_00534970(int param_1,undefined1 *param_2)

{
  ushort *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  
  iVar2 = *(int *)(param_1 + 8);
  switch(*param_2) {
  case 0x48:
  case 0x84:
    return 1;
  case 0x97:
  case 0x99:
  case 0x9b:
    piVar3 = *(int **)(param_2 + 0x10);
    if (piVar3 != (int *)0x0) {
      piVar6 = (int *)piVar3[2];
      for (iVar4 = *piVar3; 0 < iVar4; iVar4 = iVar4 + -1) {
        if (*piVar6 != 0) {
          puVar1 = (ushort *)(*piVar6 + 2);
          *puVar1 = *puVar1 | 0x200;
        }
        piVar6 = piVar6 + 5;
      }
    }
  default:
    iVar4 = FUN_0053c010(param_2);
    if (iVar4 != 0) {
      *(int *)(iVar2 + 0x4c) = *(int *)(iVar2 + 0x4c) + 1;
      uVar5 = FUN_00554e20(iVar2,param_2,*(undefined4 *)(iVar2 + 0x4c));
      param_2[0x23] = *param_2;
      *param_2 = 0x84;
      *(undefined4 *)(param_2 + 0x18) = uVar5;
      return 1;
    }
  case 0x5c:
    return 0;
  }
}


/* FUN_00536500 @ 00536500  kind=gamemisc  attributed-by=none  size=68 */

undefined4 FUN_00536500(int param_1,undefined1 *param_2)

{
  if ((*(int *)(param_1 + 0x10) != 3) || ((param_2[2] & 1) == 0)) {
    switch(*param_2) {
    case 0x1a:
    case 0x98:
    case 0x99:
    case 0x9a:
      break;
    default:
      return 0;
    case 0x97:
      if (*(int *)(param_1 + 0x10) == 2) {
        return 0;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return 2;
}


/* FUN_005367f0 @ 005367f0  kind=gamemisc  attributed-by=none  size=82 */

undefined4 FUN_005367f0(int param_1,char *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if ((*param_2 == -0x68) || (*param_2 == -0x66)) {
    puVar1 = *(undefined4 **)(param_1 + 0x10);
    iVar2 = 0;
    iVar4 = (int)*(short *)*puVar1;
    if (0 < iVar4) {
      piVar3 = (int *)((short *)*puVar1 + 0x1a);
      do {
        if (*(int *)(param_2 + 0x18) == *piVar3) break;
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 0x12;
      } while (iVar2 < iVar4);
    }
    if (iVar2 < iVar4) {
      puVar1[1] = puVar1[1] + 1;
      return 0;
    }
    puVar1[2] = puVar1[2] + 1;
  }
  return 0;
}


/* FUN_0053a850 @ 0053a850  kind=gamemisc  attributed-by=none  size=148 */

int FUN_0053a850(byte *param_1)

{
  int *piVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int local_c;
  
  local_c = 0;
  puVar5 = &param_1;
  while( true ) {
    piVar1 = puVar5 + 2;
    iVar7 = puVar5[1];
    piVar2 = puVar5 + 3;
    iVar4 = puVar5[4];
    iVar6 = 0;
    puVar5 = puVar5 + 5;
    while (iVar7 != 0) {
      bVar3 = *param_1;
      iVar7 = iVar7 + -1;
      if (((&DAT_007121d8)[bVar3] & 4) == 0) {
        return local_c;
      }
      param_1 = param_1 + 1;
      iVar6 = (int)(char)bVar3 + (iVar6 * 5 + -0x18) * 2;
    }
    if (iVar6 < *piVar1) {
      return local_c;
    }
    if (*piVar2 < iVar6) {
      return local_c;
    }
    if ((iVar4 != 0) && (iVar4 != (char)*param_1)) break;
    param_1 = param_1 + 1;
    local_c = local_c + 1;
    *(int *)*puVar5 = iVar6;
    if (iVar4 == 0) {
      return local_c;
    }
  }
  return local_c;
}


/* FUN_0053a8f0 @ 0053a8f0  kind=gamemisc  attributed-by=none  size=374 */

/* WARNING: Type propagation algorithm not settling */

void FUN_0053a8f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  int local_a4;
  int local_a0 [5];
  int local_8c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  uVar2 = 0;
  if (DAT_0076b480 == 0) {
    local_a0[1] = 0x94;
    (*(code *)PTR_GetVersionExA_0076721c)(local_a0 + 1);
    DAT_0076b480 = (local_8c == 2) + 1;
  }
  if (DAT_0076b480 == 2) {
    local_a0[0] = 0;
    iVar1 = (*(code *)PTR_FormatMessageW_00767138)(0x1300,0,param_1,0,local_a0);
    bVar3 = true;
    if (iVar1 == 0) goto LAB_0053aa1d;
    if (DAT_0076b3bc != (code *)0x0) {
      (*DAT_0076b3bc)();
    }
    uVar2 = FUN_0057b270(local_a0[0]);
    iVar4 = local_a0[0];
    if (DAT_0076b3c0 != (code *)0x0) {
      (*DAT_0076b3c0)();
      iVar4 = local_a0[0];
    }
  }
  else {
    local_a4 = 0;
    iVar1 = (*(code *)PTR_FormatMessageA_0076712c)(0x1300,0,param_1,0,&local_a4,0,0);
    bVar3 = true;
    if (iVar1 == 0) goto LAB_0053aa1d;
    if (DAT_0076b3bc != (code *)0x0) {
      (*DAT_0076b3bc)();
    }
    local_a0[0] = FUN_0053dde0(local_a4);
    if (local_a0[0] == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_0057b270(local_a0[0]);
      FUN_00524410(local_a0[0]);
    }
    iVar4 = local_a4;
    if (DAT_0076b3c0 != (code *)0x0) {
      (*DAT_0076b3c0)();
      iVar4 = local_a4;
    }
  }
  (*(code *)PTR_LocalFree_00767294)(iVar4);
  bVar3 = iVar1 == 0;
LAB_0053aa1d:
  if (bVar3) {
    FUN_005240c0(param_2,param_3,"OsError 0x%x (%u)",param_1,param_1);
  }
  else {
    FUN_005240c0(param_2,param_3,&DAT_00716900,uVar2);
    FUN_00524410(uVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0053ac70 @ 0053ac70  kind=gamemisc  attributed-by=none  size=286 */

void FUN_0053ac70(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  uint *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint local_a4;
  int local_a0;
  undefined4 local_9c [4];
  int local_8c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_a0 = param_1;
  if (DAT_0076b480 == 0) {
    local_9c[0] = 0x94;
    (*(code *)PTR_GetVersionExA_0076721c)(local_9c);
    DAT_0076b480 = (local_8c == 2) + 1;
  }
  if (DAT_0076b480 == 2) {
    uVar7 = 0x1fe;
    iVar2 = DAT_007666d0 + 2;
    uVar6 = 1;
  }
  else {
    iVar2 = 4;
    puVar5 = &local_a4;
    if (DAT_007665e4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*DAT_00766628)(5);
      if (iVar4 != 0) {
        (*DAT_00766630)(iVar4);
      }
    }
    do {
      uVar1 = FUN_00544c20();
      *(undefined1 *)puVar5 = uVar1;
      puVar5 = (uint *)((int)puVar5 + 1);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if (iVar4 != 0) {
      (*DAT_00766638)(iVar4);
    }
    uVar7 = 1;
    sVar3 = (short)((ulonglong)(local_a4 & 0x7fffffff) % 0x1fd);
    iVar2 = DAT_007666d0 + 2 + (int)sVar3;
    *(short *)(local_a0 + 0xe) = sVar3;
    uVar6 = 3;
    param_1 = local_a0;
  }
  iVar2 = FUN_0057f980(param_1 + 8,uVar6,iVar2,0,uVar7,0);
  if (iVar2 == 0) {
    uVar6 = (*(code *)PTR_GetLastError_007671bc)();
    *(undefined4 *)(param_1 + 0x14) = uVar6;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0053b1b0 @ 0053b1b0  kind=gamemisc  attributed-by=none  size=754 */

void FUN_0053b1b0(int param_1,char *param_2)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  int local_31c;
  undefined1 local_318 [260];
  undefined1 local_214 [112];
  undefined4 local_1a4 [4];
  int local_194;
  char acStack_111 [265];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  memset(acStack_111 + 1,0,0x106);
  if (DAT_0076b358 == 0) {
    if (DAT_0076b480 == 0) {
      local_1a4[0] = 0x94;
      (*(code *)PTR_GetVersionExA_0076721c)(local_1a4);
      DAT_0076b480 = (local_194 == 2) + 1;
    }
    if (DAT_0076b480 == 2) {
      (*(code *)PTR_GetTempPathW_00767204)(0xe6,local_318);
      iVar4 = FUN_0057b270(local_318);
    }
    else {
      (*(code *)PTR_GetTempPathA_007671f8)(0xe6,local_214);
      iVar8 = FUN_0053dde0(local_214);
      if (iVar8 == 0) goto LAB_0053b26b;
      iVar4 = FUN_0057b270(iVar8);
      FUN_00524410(iVar8);
    }
    if (iVar4 == 0) {
LAB_0053b26b:
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_005240c0(0xe6,acStack_111 + 1,&DAT_00716900,iVar4);
    FUN_00524410(iVar4);
  }
  else {
    FUN_005240c0(0xe6,acStack_111 + 1,&DAT_00716900,DAT_0076b358);
  }
  pcVar6 = acStack_111 + 1;
  while (acStack_111[1] != '\0') {
    pcVar6 = pcVar6 + 1;
    acStack_111[1] = *pcVar6;
  }
  uVar7 = (int)pcVar6 - (int)(acStack_111 + 1) & 0x3fffffff;
  pcVar6 = "etilqs_";
  do {
    pcVar5 = pcVar6;
    pcVar6 = pcVar5 + 1;
  } while (*pcVar6 != '\0');
  uVar1 = uVar7;
  if (param_1 <= (int)(((uint)(pcVar5 + -0x7169ff) & 0x3fffffff) + 0x12 + uVar7)) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  for (; (uVar1 != 0 && (acStack_111[uVar1] == '\\')); uVar1 = uVar1 - 1) {
  }
  if (uVar1 < 0x106) {
    acStack_111[uVar1 + 1] = '\0';
    pcVar6 = "%s\\etilqs_";
    if (uVar7 == 0) {
      pcVar6 = "etilqs_";
    }
    FUN_005240c0(param_1 + -0x12,param_2,pcVar6,acStack_111 + 1);
    uVar7 = 0;
    if (param_2 != (char *)0x0) {
      cVar3 = *param_2;
      pcVar6 = param_2;
      while (cVar3 != '\0') {
        pcVar6 = pcVar6 + 1;
        cVar3 = *pcVar6;
      }
      uVar7 = (int)pcVar6 - (int)param_2 & 0x3fffffff;
    }
    pcVar6 = param_2 + uVar7;
    iVar8 = 0xf;
    if (DAT_007665e4 == 0) {
      local_31c = 0;
    }
    else {
      local_31c = (*DAT_00766628)(5);
      if (local_31c != 0) {
        (*DAT_00766630)(local_31c);
      }
    }
    do {
      cVar3 = FUN_00544c20();
      *pcVar6 = cVar3;
      pcVar6 = pcVar6 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    if (local_31c != 0) {
      (*DAT_00766638)(local_31c);
    }
    iVar8 = 3;
    do {
      uVar1 = uVar7 + 5;
      param_2[uVar7] =
           s_abcdefghijklmnopqrstuvwxyzABCDEF_007665a0[(uint)(byte)param_2[uVar7] % 0x3e];
      param_2[uVar7 + 1] =
           s_abcdefghijklmnopqrstuvwxyzABCDEF_007665a0[(uint)(byte)param_2[uVar7 + 1] % 0x3e];
      param_2[uVar7 + 2] =
           s_abcdefghijklmnopqrstuvwxyzABCDEF_007665a0[(uint)(byte)param_2[uVar7 + 2] % 0x3e];
      param_2[uVar7 + 3] =
           s_abcdefghijklmnopqrstuvwxyzABCDEF_007665a0[(uint)(byte)param_2[uVar7 + 3] % 0x3e];
      param_2[uVar7 + 4] =
           s_abcdefghijklmnopqrstuvwxyzABCDEF_007665a0[(uint)(byte)param_2[uVar7 + 4] % 0x3e];
      iVar8 = iVar8 + -1;
      uVar7 = uVar1;
    } while (iVar8 != 0);
    (param_2 + uVar1)[0] = '\0';
    (param_2 + uVar1)[1] = '\0';
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  ___report_rangecheckfailure();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* FUN_0053c010 @ 0053c010  kind=gamemisc  attributed-by=none  size=129 */

undefined4 FUN_0053c010(char *param_1)

{
  char cVar1;
  code *local_18;
  code *local_14;
  int local_8;
  
  local_8 = 3;
  local_18 = FUN_00536500;
  local_14 = FUN_00548960;
  FUN_00578680(&local_18,param_1);
  if (local_8 == 0) {
    return 0;
  }
  if ((*(ushort *)(param_1 + 2) & 0x200) != 0) {
    cVar1 = *param_1;
    while (cVar1 == -99) {
      param_1 = *(char **)(param_1 + 8);
      cVar1 = *param_1;
    }
    switch(*param_1) {
    case '^':
    case 'b':
    case -0x7f:
    case -0x7e:
    case -0x7d:
    case -0x7b:
      return 0;
    case -100:
      if (**(char **)(param_1 + 8) == -0x7e) {
        return 0;
      }
      if (**(char **)(param_1 + 8) == -0x7f) {
        return 0;
      }
    }
  }
  return 1;
}


/* FUN_0053c140 @ 0053c140  kind=gamemisc  attributed-by=none  size=289 */

undefined4 FUN_0053c140(undefined4 param_1,int param_2,int *param_3,undefined8 *param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  double local_c;
  
  memset(param_4,0,0x30);
  if (param_2 == 0) {
    uVar2 = FUN_00548b20(param_1,param_4);
    return uVar2;
  }
  iVar3 = *param_3;
  if ((*(char *)(iVar3 + 0x1e) == '\x02') || (*(char *)(iVar3 + 0x1e) == '\x01')) {
    uVar1 = *(ushort *)(iVar3 + 0x1c);
    if ((uVar1 & 8) == 0) {
      if ((uVar1 & 4) == 0) {
        local_c = 0.0;
        if ((uVar1 & 0x12) != 0) {
          local_c = 0.0;
          FUN_0054a330(*(undefined4 *)(iVar3 + 4),&local_c,*(undefined4 *)(iVar3 + 0x18),
                       *(undefined1 *)(iVar3 + 0x1f));
        }
      }
      else {
        local_c = (double)*(longlong *)(iVar3 + 0x10);
      }
    }
    else {
      local_c = *(double *)(iVar3 + 8);
    }
    local_c = local_c * 86400000.0 + 0.5;
    uVar5 = FUN_0068d946();
    *param_4 = uVar5;
    *(undefined1 *)((int)param_4 + 0x2a) = 1;
  }
  else {
    iVar3 = FUN_0056bce0(iVar3,1);
    if ((iVar3 == 0) || (iVar3 = FUN_00542f30(param_1,iVar3,param_4), iVar3 != 0)) {
      return 1;
    }
  }
  iVar3 = 1;
  if (1 < param_2) {
    do {
      iVar4 = FUN_0056bce0(param_3[iVar3],1);
      if ((iVar4 == 0) || (iVar4 = FUN_00543120(param_1,iVar4,param_4), iVar4 != 0)) {
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_2);
  }
  return 0;
}


/* FUN_0053ce20 @ 0053ce20  kind=gamemisc  attributed-by=none  size=543 */

void FUN_0053ce20(undefined8 *param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  errno_t eVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int local_68;
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  double local_40;
  undefined8 local_38;
  undefined4 *local_30;
  tm local_2c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_2c.tm_sec = 0;
  local_2c.tm_min = 0;
  local_2c.tm_hour = 0;
  local_2c.tm_mday = 0;
  local_2c.tm_mon = 0;
  local_2c.tm_year = 0;
  local_2c.tm_wday = 0;
  local_2c.tm_yday = 0;
  local_60 = *param_1;
  local_58 = param_1[1];
  local_50 = param_1[2];
  local_48 = param_1[3];
  local_40 = (double)param_1[4];
  local_38 = param_1[5];
  local_30 = param_3;
  local_2c.tm_isdst = 0;
  FUN_00532d10(&local_60);
  FUN_00532980(&local_60);
  if ((int)local_58 - 0x7b3U < 0x43) {
    local_40 = (double)(int)(local_40 + 0.5);
  }
  else {
    local_58 = 0x1000007d0;
    local_50 = 1;
    local_48 = 0;
    local_40 = 0.0;
  }
  local_48 = local_48 & 0xffffffff;
  local_38._0_3_ = (uint3)(ushort)local_38;
  FUN_00532a40(&local_60);
  iVar3 = local_60._4_4_;
  uVar1 = (uint)local_60;
  uVar5 = __alldiv((uint)local_60,local_60._4_4_,1000,0);
  local_68 = (uint)uVar5 + 0xe75c96c0;
  local_64 = ((int)((ulonglong)uVar5 >> 0x20) + -0x31) - (uint)((uint)uVar5 < 0x18a36940);
  if (DAT_007666cc == 0) {
    eVar2 = _localtime64_s(&local_2c,(__time64_t *)&local_68);
    if (eVar2 == 0) {
      local_58 = CONCAT44(local_2c.tm_mon + 1,local_2c.tm_year + 0x76c);
      local_50 = CONCAT44(local_2c.tm_hour,local_2c.tm_mday);
      local_40 = (double)local_2c.tm_sec;
      local_48 = CONCAT44(local_48._4_4_,local_2c.tm_min);
      local_38 = CONCAT44(local_38._4_4_,0x101);
      FUN_00532a40(&local_60);
      *local_30 = 0;
      __security_check_cookie
                (local_8 ^ (uint)&stack0xfffffffc,
                 (local_60._4_4_ - iVar3) - (uint)((uint)local_60 < uVar1));
      return;
    }
  }
  *(undefined4 *)(param_2 + 0x38) = 1;
  if (*(int *)(param_2 + 8) == 0) {
    iVar3 = 1000000000;
  }
  else {
    iVar3 = *(int *)(*(int *)(param_2 + 8) + 0x50);
  }
  iVar4 = 0;
  if (-1 < iVar3) {
    do {
      if ("local time unavailable"[iVar4] == '\0') break;
      iVar4 = iVar4 + 1;
    } while (iVar4 <= iVar3);
  }
  if (iVar4 <= iVar3) {
    iVar3 = FUN_005748c0(param_2 + 8,iVar4 + 1U,0);
    if (iVar3 == 0) {
      memcpy(*(void **)(param_2 + 0xc),"local time unavailable",iVar4 + 1U);
      *(int *)(param_2 + 0x20) = iVar4;
      *(undefined4 *)(param_2 + 0x24) = 0x1030202;
    }
  }
  *local_30 = 1;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,0);
  return;
}


/* FUN_0053dde0 @ 0053dde0  kind=gamemisc  attributed-by=none  size=129 */

void * FUN_0053dde0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  iVar1 = (*(code *)PTR_AreFileApisANSI_00767084)();
  iVar2 = (*(code *)PTR_MultiByteToWideChar_007672c4)(iVar1 == 0,0,param_1,0xffffffff,0,0);
  if (iVar2 * 2 == 0) {
    return (void *)0x0;
  }
  _Dst = (void *)FUN_0055da00(iVar2 << 2);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,iVar2 << 2);
    if (_Dst != (void *)0x0) {
      iVar1 = (*(code *)PTR_MultiByteToWideChar_007672c4)
                        (iVar1 == 0,0,param_1,0xffffffff,_Dst,iVar2 * 2);
      if (iVar1 == 0) {
        FUN_00524410(_Dst);
        _Dst = (void *)0x0;
      }
      return _Dst;
    }
  }
  return (void *)0x0;
}


/* FUN_00540b70 @ 00540b70  kind=gamemisc  attributed-by=none  size=1140 */

uint FUN_00540b70(undefined4 param_1,undefined4 *param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 *_Dst;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int local_c;
  undefined4 local_8;
  
  local_8 = 0;
  local_c = 0;
  *param_2 = 0;
  uVar1 = FUN_00579f80();
  if (uVar1 != 0) {
    return uVar1;
  }
  if ((1 << ((byte)param_3 & 7) & 0x46U) == 0) {
    FUN_00525a30(0x15,"misuse at line %d of [%.10s]",0x1c0c4,
                 "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
    return 0x15;
  }
  if (DAT_007665e4 == 0) {
    iVar2 = 0;
  }
  else if ((param_3 & 0x8000) == 0) {
    iVar2 = DAT_007665e8;
    if ((param_3 & 0x10000) != 0) {
      iVar2 = 1;
    }
  }
  else {
    iVar2 = 0;
  }
  if ((param_3 & 0x40000) == 0) {
    if (DAT_007666a4 != 0) {
      param_3 = param_3 | 0x20000;
    }
  }
  else {
    param_3 = param_3 & 0xfffdffff;
  }
  uVar1 = param_3 & 0xfff600e7;
  param_3 = uVar1;
  _Dst = (undefined4 *)FUN_0055da00(0x1f8);
  uVar3 = local_8;
  if ((_Dst != (undefined4 *)0x0) &&
     (memset(_Dst,0,0x1f8), uVar3 = local_8, _Dst != (undefined4 *)0x0)) {
    if (iVar2 != 0) {
      if (DAT_007665e4 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*DAT_00766628)(1);
      }
      _Dst[3] = iVar2;
      if (iVar2 == 0) {
        FUN_00524410(_Dst);
        _Dst = (undefined4 *)0x0;
        uVar3 = local_8;
        goto LAB_00540c7d;
      }
    }
    if (_Dst[3] != 0) {
      (*DAT_00766630)(_Dst[3]);
    }
    _Dst[0xc] = 0xff;
    _Dst[5] = 2;
    _Dst[0x11] = 0xf03b7906;
    _Dst[4] = _Dst + 0x6e;
    *(undefined8 *)(_Dst + 0x14) = 0x3b9aca003b9aca00;
    *(undefined8 *)(_Dst + 0x16) = 0x3e8000007d0;
    *(undefined8 *)(_Dst + 0x18) = 0x61a8000001f4;
    *(undefined8 *)(_Dst + 0x1a) = 0xa0000007f;
    *(undefined8 *)(_Dst + 0x1c) = 0x3e70000c350;
    _Dst[6] = _Dst[6] | 0x480008;
    _Dst[0x1e] = 1000;
    *(undefined1 *)((int)_Dst + 0x36) = 1;
    *(undefined1 *)((int)_Dst + 0x3a) = 0xff;
    _Dst[0x10] = 0;
    _Dst[0x69] = 0;
    _Dst[0x68] = 0;
    _Dst[0x67] = 0;
    _Dst[0x6a] = 0;
    _Dst[0x4b] = 0;
    _Dst[0x4a] = 0;
    _Dst[0x49] = 0;
    _Dst[0x4c] = 0;
    FUN_00533960(_Dst,"BINARY",1,0,FUN_0052df70,0);
    FUN_00533960(_Dst,"BINARY",3,0,FUN_0052df70,0);
    FUN_00533960(_Dst,"BINARY",2,0,FUN_0052df70,0);
    FUN_00533960(_Dst,"RTRIM",1,1,FUN_0052df70,0);
    uVar3 = local_8;
    if (*(char *)(_Dst + 0xe) == '\0') {
      uVar3 = FUN_00556ba0(_Dst,1,"BINARY",0);
      _Dst[2] = uVar3;
      FUN_00533960(_Dst,"NOCASE",1,0,FUN_00540b00,0);
      _Dst[10] = uVar1;
      iVar4 = FUN_00560540(param_4,param_1,&param_3,_Dst,&local_8,&local_c);
      uVar3 = local_8;
      iVar2 = local_c;
      if (iVar4 == 0) {
        iVar2 = FUN_0054e4a0(*_Dst,local_8,_Dst,_Dst[4] + 4,0,param_3 | 0x100);
        if (iVar2 == 0) {
          uVar6 = FUN_00565140(_Dst,*(undefined4 *)(_Dst[4] + 4));
          *(undefined4 *)(_Dst[4] + 0xc) = uVar6;
          uVar6 = FUN_00565140(_Dst,0);
          *(undefined4 *)(_Dst[4] + 0x1c) = uVar6;
          *(undefined **)_Dst[4] = &DAT_00719fc4;
          *(undefined1 *)(_Dst[4] + 9) = 3;
          *(undefined1 **)(_Dst[4] + 0x10) = &DAT_00719df8;
          *(undefined1 *)(_Dst[4] + 0x19) = 1;
          _Dst[0x11] = 0xa029a697;
          if (*(char *)(_Dst + 0xe) == '\0') {
            FUN_00553890(_Dst,0,0);
            iVar2 = FUN_00521770(_Dst,"MATCH",2);
            if (iVar2 == 7) {
              *(undefined1 *)(_Dst + 0xe) = 1;
            }
            iVar2 = FUN_00525cb0(_Dst);
            if (iVar2 == 0) {
              FUN_0054ad90(_Dst);
              iVar4 = FUN_00525cb0(_Dst);
              iVar2 = 0;
              if (iVar4 != 0) goto LAB_00540c7d;
            }
            FUN_00553890(_Dst,iVar2,0);
            FUN_00548d00(_Dst,0,DAT_007665f8,DAT_007665fc);
            if (_Dst[3] != 0) {
              (*DAT_00766630)(_Dst[3]);
            }
            _Dst[0x30] = FUN_00577d90;
            _Dst[0x31] = 1000;
            if (_Dst[3] != 0) {
              (*DAT_00766638)(_Dst[3]);
            }
          }
        }
        else {
          if (iVar2 == 0xc0a) {
            iVar2 = 7;
          }
          FUN_00553890(_Dst,iVar2,0);
        }
      }
      else {
        if (iVar4 == 7) {
          *(undefined1 *)(_Dst + 0xe) = 1;
        }
        puVar5 = &DAT_00716900;
        if (local_c == 0) {
          puVar5 = (undefined *)0x0;
        }
        FUN_00553890(_Dst,iVar4,puVar5,local_c);
        FUN_00524410(iVar2);
        uVar3 = local_8;
      }
    }
  }
LAB_00540c7d:
  FUN_00524410(uVar3);
  if ((_Dst != (undefined4 *)0x0) && (_Dst[3] != 0)) {
    (*DAT_00766638)(_Dst[3]);
  }
  uVar1 = FUN_00525cb0(_Dst);
  if (uVar1 != 7) {
    if (uVar1 != 0) {
      _Dst[0x11] = 0x4b771290;
    }
    *param_2 = _Dst;
    return uVar1 & 0xff;
  }
  FUN_0054fc20(_Dst,0);
  *param_2 = 0;
  return 7;
}


/* FUN_00541820 @ 00541820  kind=gamemisc  attributed-by=none  size=224 */

uint FUN_00541820(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((*(int *)(param_1 + 0x28) != 0) || (*(char *)(param_1 + 0x13) != '\0')) {
    return 0;
  }
  if ((*(char *)(param_1 + 0x14) != '\0') && ((*(byte *)(param_2 + 0x18) & 4) != 0)) {
    return 0;
  }
  *(undefined4 *)(param_2 + 0xc) = 0;
  if (*(int *)(param_1 + 0xb8) == 0) {
    if (((*(byte *)(param_2 + 0x18) & 4) != 0) || (*(char *)(param_1 + 0xf) == '\x03')) {
      uVar2 = FUN_0057ac30(param_1,1);
      if (uVar2 != 0) goto LAB_005418e5;
    }
    if (*(uint *)(param_1 + 0x18) < *(uint *)(param_2 + 0x14)) {
      iVar1 = FUN_0057a8b0(param_2);
      if (iVar1 != 0) {
        uVar2 = FUN_0057a9b0(param_2);
        if (uVar2 != 0) goto LAB_005418e5;
      }
    }
    uVar2 = FUN_00542df0(param_1,param_2);
  }
  else {
    iVar1 = FUN_0057a8b0(param_2);
    if (iVar1 != 0) {
      uVar2 = FUN_0057a9b0(param_2);
      if (uVar2 != 0) goto LAB_005418e5;
    }
    uVar2 = FUN_00541ab0(param_1,param_2,0,0);
  }
  if (uVar2 == 0) {
    FUN_00561000(param_2);
  }
LAB_005418e5:
  if (((uVar2 & 0xff) == 0xd) || ((uVar2 & 0xff) == 10)) {
    *(uint *)(param_1 + 0x28) = uVar2;
    *(undefined1 *)(param_1 + 0xf) = 6;
  }
  return uVar2;
}


/* FUN_00542f30 @ 00542f30  kind=gamemisc  attributed-by=none  size=192 */

undefined4 FUN_00542f30(undefined4 param_1,char *param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  undefined8 uVar6;
  double local_c;
  
  iVar2 = FUN_00543b00(param_2,param_3);
  if ((iVar2 != 0) && (iVar2 = FUN_00542ff0(param_2,param_3), iVar2 != 0)) {
    iVar2 = FUN_0057a2c0(param_2,&DAT_00716730);
    if (iVar2 == 0) {
      uVar3 = FUN_00548b20(param_1,param_3);
      return uVar3;
    }
    uVar5 = 0;
    if (param_2 != (char *)0x0) {
      cVar1 = *param_2;
      pcVar4 = param_2;
      while (cVar1 != '\0') {
        pcVar4 = pcVar4 + 1;
        cVar1 = *pcVar4;
      }
      uVar5 = (int)pcVar4 - (int)param_2 & 0x3fffffff;
    }
    iVar2 = FUN_0054a330(param_2,&local_c,uVar5,1);
    if (iVar2 == 0) {
      return 1;
    }
    local_c = local_c * 86400000.0 + 0.5;
    uVar6 = FUN_0068d946();
    *param_3 = uVar6;
    *(undefined1 *)((int)param_3 + 0x2a) = 1;
  }
  return 0;
}


/* FUN_00542ff0 @ 00542ff0  kind=gamemisc  attributed-by=none  size=303 */

undefined4 FUN_00542ff0(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  double dVar5;
  double dVar6;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  dVar5 = 0.0;
  iVar3 = FUN_0053a850(param_1,2,0,0x18,0x3a,&local_c,2,0,0x3b,0,&local_10);
  if (iVar3 != 2) {
    return 1;
  }
  pbVar4 = (byte *)(param_1 + 5);
  if (*pbVar4 == 0x3a) {
    iVar3 = FUN_0053a850(param_1 + 6,2,0,0x3b,0,&local_8);
    if (iVar3 != 1) {
      return 1;
    }
    pbVar4 = (byte *)(param_1 + 8);
    if ((*pbVar4 == 0x2e) && (((&DAT_007121d8)[*(byte *)(param_1 + 9)] & 4) != 0)) {
      dVar6 = 1.0;
      bVar1 = *(byte *)(param_1 + 9);
      bVar2 = (&DAT_007121d8)[bVar1];
      pbVar4 = (byte *)(param_1 + 9);
      while ((bVar2 & 4) != 0) {
        iVar3 = (int)(char)bVar1;
        bVar1 = pbVar4[1];
        pbVar4 = pbVar4 + 1;
        dVar6 = dVar6 * 10.0;
        dVar5 = (dVar5 * 10.0 + (double)iVar3) - 48.0;
        bVar2 = (&DAT_007121d8)[bVar1];
      }
      dVar5 = dVar5 / dVar6;
    }
  }
  else {
    local_8 = 0;
  }
  *(undefined4 *)(param_2 + 0x14) = local_c;
  *(undefined2 *)(param_2 + 0x29) = 1;
  *(undefined4 *)(param_2 + 0x18) = local_10;
  *(double *)(param_2 + 0x20) = (double)local_8 + dVar5;
  iVar3 = FUN_00543a20(pbVar4,param_2);
  if (iVar3 == 0) {
    *(bool *)(param_2 + 0x2b) = *(int *)(param_2 + 0x1c) != 0;
    return 0;
  }
  return 1;
}


/* FUN_00543120 @ 00543120  kind=gamemisc  attributed-by=none  size=2184 */

/* WARNING: Removing unreachable block (ram,0x005433e2) */

void FUN_00543120(undefined4 param_1,byte *param_2,uint *param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  char *pcVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  double dVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  uint local_6c;
  int local_68;
  undefined4 local_3c;
  undefined4 uStack_38;
  double local_34;
  int local_2c;
  byte local_28 [32];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar7 = 0;
  uStack_38 = param_1;
  local_2c = 1;
  iVar2 = -(int)param_2;
  do {
    if (*param_2 == 0) break;
    iVar7 = iVar7 + 1;
    param_2[(int)(local_28 + iVar2)] = (&DAT_007120d8)[*param_2];
    param_2 = param_2 + 1;
  } while (iVar7 < 0x1d);
  local_28[iVar7] = 0;
  switch(local_28[0]) {
  case 0x2b:
  case 0x2d:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    iVar2 = 1;
    while (((local_28[1] != 0 && (local_28[1] != 0x3a)) && (((&DAT_007121d8)[local_28[1]] & 1) == 0)
           )) {
      local_28[1] = local_28[iVar2 + 1];
      iVar2 = iVar2 + 1;
    }
    iVar7 = FUN_0054a330(local_28,&local_3c,iVar2,1);
    if (iVar7 != 0) {
      pbVar3 = local_28 + iVar2;
      if (local_28[iVar2] == 0x3a) {
        pbVar3 = local_28 + 1;
        if (((&DAT_007121d8)[local_28[0]] & 4) != 0) {
          pbVar3 = local_28;
        }
        memset(&local_6c,0,0x30);
        iVar2 = FUN_00542ff0(pbVar3,&local_6c);
        if (iVar2 == 0) {
          FUN_00532a40(&local_6c);
          iVar2 = local_68 + -1 + (uint)(43199999 < local_6c);
          uVar13 = __alldiv(local_6c + 0xfd6cd200,iVar2,0xfad9a400,0xffffffff);
          lVar14 = __allmul(uVar13,86400000,0);
          lVar14 = lVar14 + CONCAT44(iVar2,local_6c + 0xfd6cd200);
          if (local_28[0] == 0x2d) {
            lVar14 = CONCAT44(-((int)((ulonglong)lVar14 >> 0x20) + (uint)((int)lVar14 != 0)),
                              -(int)lVar14);
          }
          FUN_00532a40(param_3);
          uVar9 = *param_3;
          *param_3 = *param_3 + (uint)lVar14;
          *(undefined2 *)(param_3 + 10) = 0;
          *(undefined1 *)((int)param_3 + 0x2b) = 0;
          param_3[1] = param_3[1] + (int)((ulonglong)lVar14 >> 0x20) +
                       (uint)CARRY4(uVar9,(uint)lVar14);
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
      }
      else {
        bVar1 = (&DAT_007121d8)[*pbVar3];
        while ((bVar1 & 1) != 0) {
          pbVar5 = pbVar3 + 1;
          pbVar3 = pbVar3 + 1;
          bVar1 = (&DAT_007121d8)[*pbVar5];
        }
        bVar1 = *pbVar3;
        pbVar5 = pbVar3;
        while (bVar1 != 0) {
          pbVar5 = pbVar5 + 1;
          bVar1 = *pbVar5;
        }
        uVar9 = (int)pbVar5 - (int)pbVar3 & 0x3fffffff;
        if (uVar9 - 3 < 8) {
          if (pbVar3[uVar9 - 1] == 0x73) {
            pbVar3[uVar9 - 1] = 0;
            uVar9 = uVar9 - 1;
          }
          FUN_00532a40(param_3);
          dVar11 = (double)CONCAT44(uStack_38,local_3c);
          local_2c = 0;
          if (0.0 <= dVar11) {
            local_34 = 0.5;
          }
          else {
            local_34 = -0.5;
          }
          if (uVar9 == 3) {
            pbVar5 = &DAT_00716790;
            do {
              bVar1 = *pbVar3;
              bVar10 = bVar1 < *pbVar5;
              if (bVar1 != *pbVar5) {
LAB_005436f0:
                uVar9 = -(uint)bVar10 | 1;
                goto LAB_005436f5;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar3[1];
              bVar10 = bVar1 < pbVar5[1];
              if (bVar1 != pbVar5[1]) goto LAB_005436f0;
              pbVar3 = pbVar3 + 2;
              pbVar5 = pbVar5 + 2;
            } while (bVar1 != 0);
            uVar9 = 0;
LAB_005436f5:
            if (uVar9 != 0) goto LAB_0054371e;
            local_34 = dVar11 * 86400000.0 + local_34;
          }
          else if (uVar9 == 4) {
            pbVar6 = &DAT_00716794;
            pbVar5 = pbVar3;
            do {
              bVar1 = *pbVar5;
              bVar10 = bVar1 < *pbVar6;
              if (bVar1 != *pbVar6) {
LAB_00543770:
                uVar9 = -(uint)bVar10 | 1;
                goto LAB_00543775;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar5[1];
              bVar10 = bVar1 < pbVar6[1];
              if (bVar1 != pbVar6[1]) goto LAB_00543770;
              pbVar5 = pbVar5 + 2;
              pbVar6 = pbVar6 + 2;
            } while (bVar1 != 0);
            uVar9 = 0;
LAB_00543775:
            if (uVar9 == 0) {
              local_34 = dVar11 * 3600000.0 + local_34;
            }
            else {
              pbVar5 = &DAT_00716788;
              do {
                bVar1 = *pbVar3;
                bVar10 = bVar1 < *pbVar5;
                if (bVar1 != *pbVar5) {
LAB_005437b4:
                  uVar9 = -(uint)bVar10 | 1;
                  goto LAB_005437b9;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar3[1];
                bVar10 = bVar1 < pbVar5[1];
                if (bVar1 != pbVar5[1]) goto LAB_005437b4;
                pbVar3 = pbVar3 + 2;
                pbVar5 = pbVar5 + 2;
              } while (bVar1 != 0);
              uVar9 = 0;
LAB_005437b9:
              if (uVar9 != 0) goto LAB_0054371e;
              FUN_00532d10(param_3);
              FUN_00532980(param_3);
              param_3[2] = param_3[2] + (int)dVar11;
              *(undefined1 *)((int)param_3 + 0x2a) = 0;
              FUN_00532a40(param_3);
              dVar11 = (double)(int)dVar11;
              if (dVar11 == (double)CONCAT44(uStack_38,local_3c)) goto LAB_0054371e;
              local_34 = ((double)CONCAT44(uStack_38,local_3c) - dVar11) * 365.0 * 86400000.0 +
                         local_34;
            }
          }
          else if (uVar9 == 6) {
            pcVar4 = "minute";
            pbVar5 = pbVar3;
            do {
              bVar1 = *pbVar5;
              bVar10 = bVar1 < (byte)*pcVar4;
              if (bVar1 != *pcVar4) {
LAB_00543852:
                uVar9 = -(uint)bVar10 | 1;
                goto LAB_00543857;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar5[1];
              bVar10 = bVar1 < (byte)pcVar4[1];
              if (bVar1 != pcVar4[1]) goto LAB_00543852;
              pbVar5 = pbVar5 + 2;
              pcVar4 = pcVar4 + 2;
            } while (bVar1 != 0);
            uVar9 = 0;
LAB_00543857:
            if (uVar9 == 0) {
              local_34 = dVar11 * 60000.0 + local_34;
            }
            else {
              pcVar4 = "second";
              do {
                bVar1 = *pbVar3;
                bVar10 = bVar1 < (byte)*pcVar4;
                if (bVar1 != *pcVar4) {
LAB_005438a0:
                  uVar9 = -(uint)bVar10 | 1;
                  goto LAB_005438a5;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar3[1];
                bVar10 = bVar1 < (byte)pcVar4[1];
                if (bVar1 != pcVar4[1]) goto LAB_005438a0;
                pbVar3 = pbVar3 + 2;
                pcVar4 = pcVar4 + 2;
              } while (bVar1 != 0);
              uVar9 = 0;
LAB_005438a5:
              if (uVar9 != 0) goto LAB_0054371e;
              local_34 = dVar11 * 1000.0 + local_34;
            }
          }
          else {
            if (uVar9 != 5) goto LAB_0054371e;
            pcVar4 = "month";
            do {
              bVar1 = *pbVar3;
              bVar10 = bVar1 < (byte)*pcVar4;
              if (bVar1 != *pcVar4) {
LAB_005438f4:
                uVar9 = -(uint)bVar10 | 1;
                goto LAB_005438f9;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar3[1];
              bVar10 = bVar1 < (byte)pcVar4[1];
              if (bVar1 != pcVar4[1]) goto LAB_005438f4;
              pbVar3 = pbVar3 + 2;
              pcVar4 = pcVar4 + 2;
            } while (bVar1 != 0);
            uVar9 = 0;
LAB_005438f9:
            if (uVar9 != 0) goto LAB_0054371e;
            FUN_00532d10(param_3);
            FUN_00532980(param_3);
            dVar11 = (double)CONCAT44(uStack_38,local_3c);
            param_3[3] = param_3[3] + (int)dVar11;
            uVar9 = param_3[3];
            iVar2 = uVar9 - 1;
            if ((int)uVar9 < 1) {
              iVar2 = uVar9 - 0xc;
            }
            param_3[2] = param_3[2] + iVar2 / 0xc;
            param_3[3] = uVar9 + (iVar2 / 0xc) * -0xc;
            *(undefined1 *)((int)param_3 + 0x2a) = 0;
            FUN_00532a40(param_3);
            dVar11 = (double)(int)dVar11;
            if (dVar11 == (double)CONCAT44(uStack_38,local_3c)) goto LAB_0054371e;
            local_34 = ((double)CONCAT44(uStack_38,local_3c) - dVar11) * 30.0 * 86400000.0 +
                       local_34;
          }
          uVar13 = FUN_0068d946();
          uVar9 = *param_3;
          *param_3 = *param_3 + (uint)uVar13;
          param_3[1] = param_3[1] + (int)((ulonglong)uVar13 >> 0x20) +
                       (uint)CARRY4(uVar9,(uint)uVar13);
LAB_0054371e:
          *(undefined2 *)(param_3 + 10) = 0;
          *(undefined1 *)((int)param_3 + 0x2b) = 0;
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
      }
    }
    break;
  case 0x6c:
    pcVar4 = "localtime";
    pbVar3 = local_28;
    do {
      bVar1 = *pbVar3;
      bVar10 = bVar1 < (byte)*pcVar4;
      if (bVar1 != *pcVar4) {
LAB_005431b4:
        uVar9 = -(uint)bVar10 | 1;
        goto LAB_005431b9;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar10 = bVar1 < (byte)pcVar4[1];
      if (bVar1 != pcVar4[1]) goto LAB_005431b4;
      pbVar3 = pbVar3 + 2;
      pcVar4 = pcVar4 + 2;
    } while (bVar1 != 0);
    uVar9 = 0;
LAB_005431b9:
    if (uVar9 == 0) {
      FUN_00532a40(param_3);
      uVar13 = FUN_0053ce20(param_3,param_1,&local_2c);
      uVar9 = *param_3;
      *param_3 = *param_3 + (uint)uVar13;
      *(undefined2 *)(param_3 + 10) = 0;
      param_3[1] = param_3[1] + (int)((ulonglong)uVar13 >> 0x20) + (uint)CARRY4(uVar9,(uint)uVar13);
      *(undefined1 *)((int)param_3 + 0x2b) = 0;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    break;
  case 0x73:
    iVar2 = strncmp((char *)local_28,"start of ",9);
    if (iVar2 == 0) {
      FUN_00532d10(param_3);
      *(undefined2 *)((int)param_3 + 0x29) = 1;
      param_3[6] = 0;
      param_3[5] = 0;
      param_3[8] = 0;
      param_3[9] = 0;
      *(undefined1 *)((int)param_3 + 0x2b) = 0;
      pcVar4 = "month";
      pbVar3 = local_28 + 9;
      do {
        bVar1 = *pbVar3;
        bVar10 = bVar1 < (byte)*pcVar4;
        if (bVar1 != *pcVar4) {
LAB_00543490:
          uVar9 = -(uint)bVar10 | 1;
          goto LAB_00543495;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar10 = bVar1 < (byte)pcVar4[1];
        if (bVar1 != pcVar4[1]) goto LAB_00543490;
        pbVar3 = pbVar3 + 2;
        pcVar4 = pcVar4 + 2;
      } while (bVar1 != 0);
      uVar9 = 0;
LAB_00543495:
      if (uVar9 == 0) {
LAB_005434da:
        param_3[4] = 1;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      pbVar5 = &DAT_00716788;
      pbVar3 = local_28 + 9;
      do {
        bVar1 = *pbVar3;
        bVar10 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_005434c1:
          uVar9 = -(uint)bVar10 | 1;
          goto LAB_005434c6;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar10 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_005434c1;
        pbVar3 = pbVar3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      uVar9 = 0;
LAB_005434c6:
      if (uVar9 == 0) {
        FUN_00532d10(param_3);
        param_3[3] = 1;
        goto LAB_005434da;
      }
      pbVar5 = &DAT_00716790;
      pbVar3 = local_28 + 9;
      do {
        bVar1 = *pbVar3;
        bVar10 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00543520:
          uVar9 = -(uint)bVar10 | 1;
          goto LAB_00543525;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar10 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00543520;
        pbVar3 = pbVar3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      uVar9 = 0;
LAB_00543525:
      if (uVar9 == 0) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
    break;
  case 0x75:
    pcVar4 = "unixepoch";
    pbVar3 = local_28;
    do {
      bVar1 = *pbVar3;
      bVar10 = bVar1 < (byte)*pcVar4;
      if (bVar1 != *pcVar4) {
LAB_00543220:
        uVar9 = -(uint)bVar10 | 1;
        goto LAB_00543225;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar10 = bVar1 < (byte)pcVar4[1];
      if (bVar1 != pcVar4[1]) goto LAB_00543220;
      pbVar3 = pbVar3 + 2;
      pcVar4 = pcVar4 + 2;
    } while (bVar1 != 0);
    uVar9 = 0;
LAB_00543225:
    if ((uVar9 == 0) && (*(char *)((int)param_3 + 0x2a) != '\0')) {
      lVar14 = __alldiv(*param_3 + 0xa8c0,param_3[1] + (uint)(0xffff573f < *param_3),0x15180,0);
      *(longlong *)param_3 = lVar14 + 0xbfc83e532200;
      *(undefined2 *)(param_3 + 10) = 0;
      *(undefined1 *)((int)param_3 + 0x2b) = 0;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    pbVar5 = &DAT_00716764;
    pbVar3 = local_28;
    do {
      bVar1 = *pbVar3;
      bVar10 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_005432a0:
        uVar9 = -(uint)bVar10 | 1;
        goto LAB_005432a5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar10 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_005432a0;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    uVar9 = 0;
LAB_005432a5:
    if (uVar9 == 0) {
      FUN_00532a40(param_3);
      lVar14 = FUN_0053ce20(param_3,param_1,&local_2c);
      if (local_2c == 0) {
        uVar9 = *param_3;
        *param_3 = *param_3 - (uint)lVar14;
        *(undefined2 *)(param_3 + 10) = 0;
        *(undefined1 *)((int)param_3 + 0x2b) = 0;
        param_3[1] = (param_3[1] - (int)((ulonglong)lVar14 >> 0x20)) - (uint)(uVar9 < (uint)lVar14);
        lVar12 = FUN_0053ce20(param_3,uStack_38,&local_2c);
        uVar8 = (uint)(lVar14 - lVar12);
        uVar9 = *param_3;
        *param_3 = *param_3 + uVar8;
        param_3[1] = param_3[1] + (int)((ulonglong)(lVar14 - lVar12) >> 0x20) +
                     (uint)CARRY4(uVar9,uVar8);
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      goto LAB_005439a0;
    }
    break;
  case 0x77:
    iVar2 = strncmp((char *)local_28,"weekday ",8);
    if (iVar2 == 0) {
      pbVar3 = local_28 + 8;
      while (local_28[8] != 0) {
        pbVar3 = pbVar3 + 1;
        local_28[8] = *pbVar3;
      }
      iVar2 = FUN_0054a330(local_28 + 8,&local_3c,(int)pbVar3 - (int)(local_28 + 8) & 0x3fffffff,1);
      if (iVar2 != 0) {
        dVar11 = (double)CONCAT44(uStack_38,local_3c);
        uVar9 = (uint)dVar11;
        if ((((double)(int)uVar9 == dVar11) && (-1 < (int)uVar9)) && (dVar11 < 7.0)) {
          FUN_00532d10(param_3);
          FUN_00532980(param_3);
          *(undefined2 *)((int)param_3 + 0x2a) = 0;
          FUN_00532a40(param_3);
          uVar13 = __alldiv(*param_3 + 0x7b98a00,param_3[1] + (uint)(0xf84675ff < *param_3),86400000
                            ,0);
          lVar14 = __allrem(uVar13,7,0);
          if ((int)uVar9 < lVar14) {
            lVar14 = lVar14 + -7;
          }
          uVar13 = __allmul(uVar9 - (uint)lVar14,
                            (((int)uVar9 >> 0x1f) - (int)((ulonglong)lVar14 >> 0x20)) -
                            (uint)(uVar9 < (uint)lVar14),86400000,0);
          uVar9 = *param_3;
          *param_3 = *param_3 + (uint)uVar13;
          *(undefined2 *)(param_3 + 10) = 0;
          *(undefined1 *)((int)param_3 + 0x2b) = 0;
          param_3[1] = (int)((ulonglong)uVar13 >> 0x20) + param_3[1] +
                       (uint)CARRY4(uVar9,(uint)uVar13);
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
      }
    }
  }
LAB_005439a0:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00543a20 @ 00543a20  kind=gamemisc  attributed-by=none  size=206 */

bool FUN_00543a20(byte *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  
  iVar3 = param_2;
  bVar2 = (&DAT_007121d8)[*param_1];
  pbVar5 = param_1;
  while ((bVar2 & 1) != 0) {
    pbVar1 = pbVar5 + 1;
    pbVar5 = pbVar5 + 1;
    bVar2 = (&DAT_007121d8)[*pbVar1];
  }
  *(undefined4 *)(param_2 + 0x1c) = 0;
  bVar2 = *pbVar5;
  if (bVar2 == 0x2d) {
    iVar6 = -1;
  }
  else {
    if (bVar2 != 0x2b) {
      if ((bVar2 != 0x5a) && (bVar2 != 0x7a)) {
        return bVar2 != 0;
      }
      pbVar5 = pbVar5 + 1;
      goto LAB_00543acf;
    }
    iVar6 = 1;
  }
  iVar4 = FUN_0053a850(pbVar5 + 1,2,0,0xe,0x3a,&param_1,2,0,0x3b,0,&param_2);
  if (iVar4 != 2) {
    return true;
  }
  pbVar5 = pbVar5 + 6;
  *(int *)(iVar3 + 0x1c) = (param_2 + (int)param_1 * 0x3c) * iVar6;
LAB_00543acf:
  bVar2 = (&DAT_007121d8)[*pbVar5];
  while ((bVar2 & 1) != 0) {
    pbVar1 = pbVar5 + 1;
    pbVar5 = pbVar5 + 1;
    bVar2 = (&DAT_007121d8)[*pbVar1];
  }
  return *pbVar5 != 0;
}


/* FUN_00543b00 @ 00543b00  kind=gamemisc  attributed-by=none  size=213 */

undefined4 FUN_00543b00(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  undefined4 local_c;
  undefined4 local_8;
  
  cVar1 = *param_1;
  pcVar4 = param_1;
  if (cVar1 == '-') {
    pcVar4 = param_1 + 1;
  }
  iVar3 = FUN_0053a850(pcVar4,4,0,9999,0x2d,&param_1,2,1,0xc,0x2d,&local_8,2,1,0x1f,0,&local_c);
  iVar2 = param_2;
  if (iVar3 == 3) {
    for (pbVar5 = (byte *)(pcVar4 + 10); (((&DAT_007121d8)[*pbVar5] & 1) != 0 || (*pbVar5 == 0x54));
        pbVar5 = pbVar5 + 1) {
    }
    iVar3 = FUN_00542ff0(pbVar5,param_2);
    if (iVar3 != 0) {
      if (*pbVar5 != 0) {
        return 1;
      }
      *(undefined1 *)(iVar2 + 0x29) = 0;
    }
    *(undefined1 *)(iVar2 + 0x2a) = 0;
    *(undefined1 *)(iVar2 + 0x28) = 1;
    pcVar4 = param_1;
    if (cVar1 == '-') {
      pcVar4 = (char *)-(int)param_1;
    }
    *(char **)(iVar2 + 8) = pcVar4;
    *(undefined4 *)(iVar2 + 0xc) = local_8;
    *(undefined4 *)(iVar2 + 0x10) = local_c;
    if (*(char *)(iVar2 + 0x2b) != '\0') {
      FUN_00532a40(iVar2);
    }
    return 0;
  }
  return 1;
}


/* FUN_00543be0 @ 00543be0  kind=gamemisc  attributed-by=none  size=856 */

bool FUN_00543be0(char *param_1,byte *param_2,ushort *param_3,uint param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  char *pcVar12;
  bool bVar13;
  bool bVar14;
  
  uVar5 = param_3[1];
  bVar2 = *(byte *)((int)param_3 + 1);
  uVar6 = *param_3;
  uVar9 = (uint)*param_3;
  bVar3 = *(byte *)((int)param_3 + 3);
  bVar13 = false;
  bVar4 = false;
  uVar7 = FUN_0056a940(&param_1);
  if (uVar7 != 0) {
    do {
      if ((uVar7 == (byte)uVar6) && (!bVar13)) goto LAB_00543db0;
      if ((uVar7 != uVar9 >> 8) || (bVar13)) {
        if (uVar7 == (byte)uVar5) {
          uVar7 = 0;
          uVar9 = FUN_0056a940(&param_2);
          if (uVar9 == 0) {
            return false;
          }
          uVar10 = FUN_0056a940(&param_1);
          bVar13 = uVar10 == 0x5e;
          if (bVar13) {
            uVar10 = FUN_0056a940(&param_1);
          }
          bVar14 = uVar10 == 0x5d;
          if (bVar14) {
            uVar10 = FUN_0056a940(&param_1);
          }
          bVar14 = bVar14 && uVar9 == 0x5d;
          if (uVar10 == 0) {
            return false;
          }
          while (uVar10 != 0x5d) {
            if ((((uVar10 == 0x2d) && (*param_1 != ']')) && (*param_1 != '\0')) && (uVar7 != 0)) {
              uVar10 = FUN_0056a940(&param_1);
              if ((uVar7 <= uVar9) && (uVar9 <= uVar10)) {
                bVar14 = true;
              }
              uVar7 = 0;
            }
            else {
              uVar7 = uVar10;
              if (uVar9 == uVar10) {
                bVar14 = true;
              }
            }
            uVar10 = FUN_0056a940(&param_1);
            if (uVar10 == 0) {
              return false;
            }
          }
          if (bVar13 == bVar14) {
            return false;
          }
          uVar9 = (uint)bVar2 << 8;
          bVar13 = bVar4;
        }
        else if ((param_4 != uVar7) || (bVar13)) {
          uVar10 = FUN_0056a940(&param_2);
          if (bVar3 != 0) {
            if ((uVar7 & 0xffffff80) == 0) {
              uVar7 = (uint)(byte)(&DAT_007120d8)[uVar7];
            }
            if ((uVar10 & 0xffffff80) == 0) {
              uVar10 = (uint)(byte)(&DAT_007120d8)[uVar10];
            }
          }
          if (uVar7 != uVar10) {
            return false;
          }
          bVar13 = false;
          bVar4 = bVar13;
        }
        else {
          bVar13 = true;
          bVar4 = bVar13;
        }
      }
      else {
        iVar8 = FUN_0056a940(&param_2);
        if (iVar8 == 0) {
          return false;
        }
      }
      uVar7 = FUN_0056a940(&param_1);
    } while (uVar7 != 0);
  }
  return *param_2 == 0;
LAB_00543db0:
  while ((uVar10 = FUN_0056a940(&param_1), uVar7 = param_4, uVar10 == (byte)uVar6 ||
         (uVar10 == uVar9 >> 8))) {
    if ((uVar10 == uVar9 >> 8) && (iVar8 = FUN_0056a940(&param_2), iVar8 == 0)) {
      return false;
    }
  }
  if (uVar10 == 0) {
    return true;
  }
  if (uVar10 == param_4) {
    uVar10 = FUN_0056a940(&param_1);
    if (uVar10 == 0) {
      return false;
    }
  }
  else if (uVar10 == (byte)uVar5) {
    pbVar11 = param_2;
    if (*param_2 != 0) {
      pcVar12 = param_1 + -1;
      do {
        iVar8 = FUN_00543be0(pcVar12,pbVar11,param_3,uVar7);
        if (iVar8 != 0) break;
        bVar2 = *pbVar11;
        pbVar11 = pbVar11 + 1;
        if (0xbf < bVar2) {
          bVar2 = *pbVar11;
          while ((bVar2 & 0xc0) == 0x80) {
            pbVar1 = pbVar11 + 1;
            pbVar11 = pbVar11 + 1;
            bVar2 = *pbVar1;
          }
        }
      } while (*pbVar11 != 0);
    }
    return *pbVar11 != 0;
  }
  uVar9 = FUN_0056a940(&param_2);
  pcVar12 = param_1;
  if (uVar9 == 0) {
    return false;
  }
  do {
    if (bVar3 == 0) {
      while (uVar9 != uVar10) {
        uVar9 = FUN_0056a940(&param_2);
        if (uVar9 == 0) {
          return false;
        }
      }
    }
    else {
      if ((uVar9 & 0xffffff80) == 0) {
        uVar9 = (uint)(byte)(&DAT_007120d8)[uVar9];
      }
      if ((uVar10 & 0xffffff80) == 0) {
        uVar10 = (uint)(byte)(&DAT_007120d8)[uVar10];
      }
      if (uVar9 == 0) {
        return false;
      }
      while (uVar9 != uVar10) {
        uVar9 = FUN_0056a940(&param_2);
        if ((uVar9 & 0xffffff80) == 0) {
          uVar9 = (uint)(byte)(&DAT_007120d8)[uVar9];
        }
        if (uVar9 == 0) {
          return false;
        }
      }
    }
    iVar8 = FUN_00543be0(pcVar12,param_2,param_3,uVar7);
    if (iVar8 != 0) {
      return true;
    }
    uVar9 = FUN_0056a940(&param_2);
  } while (uVar9 != 0);
  return false;
}


/* FUN_00544050 @ 00544050  kind=gamemisc  attributed-by=none  size=109 */

int * FUN_00544050(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)*param_1 != 0) {
    (*DAT_00766638)(*(int *)*param_1);
  }
  iVar1 = FUN_00543f40(param_1[1] + param_1[2] + 0x1c);
  piVar2 = (int *)(param_1[1] + iVar1);
  if (*(int *)*param_1 != 0) {
    (*DAT_00766630)(*(int *)*param_1);
  }
  if (iVar1 != 0) {
    *piVar2 = iVar1;
    piVar2[1] = (int)(piVar2 + 7);
    if (param_1[3] != 0) {
      *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + 1;
    }
    return piVar2;
  }
  return (int *)0x0;
}


/* FUN_005440c0 @ 005440c0  kind=gamemisc  attributed-by=none  size=195 */

void FUN_005440c0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (*(uint *)(param_1 + 4) < *(uint *)(param_1 + 0x10)) {
    do {
      puVar2 = *(undefined4 **)(param_1 + 0x18);
      if (puVar2 == (undefined4 *)0x0) {
        return;
      }
      iVar3 = *(int *)puVar2[4];
      if ((puVar2[5] != 0) || (puVar2 == *(undefined4 **)(iVar3 + 0x18))) {
        if (puVar2[6] != 0) {
          *(undefined4 *)(puVar2[6] + 0x14) = puVar2[5];
        }
        if (puVar2[5] != 0) {
          *(undefined4 *)(puVar2[5] + 0x18) = puVar2[6];
        }
        if (*(undefined4 **)(iVar3 + 0x14) == puVar2) {
          *(undefined4 *)(iVar3 + 0x14) = puVar2[5];
        }
        if (*(undefined4 **)(iVar3 + 0x18) == puVar2) {
          *(undefined4 *)(iVar3 + 0x18) = puVar2[6];
        }
        puVar2[5] = 0;
        puVar2[6] = 0;
        *(int *)(puVar2[4] + 0x20) = *(int *)(puVar2[4] + 0x20) + -1;
      }
      iVar3 = puVar2[4];
      piVar1 = (int *)(*(int *)(iVar3 + 0x2c) + ((uint)puVar2[2] % *(uint *)(iVar3 + 0x28)) * 4);
      puVar4 = (undefined4 *)*piVar1;
      while (puVar4 != puVar2) {
        piVar1 = puVar4 + 3;
        puVar4 = (undefined4 *)*piVar1;
      }
      *piVar1 = *(int *)(*piVar1 + 0xc);
      *(int *)(iVar3 + 0x24) = *(int *)(iVar3 + 0x24) + -1;
      piVar1 = (int *)puVar2[4];
      FUN_00544190(*puVar2);
      if (piVar1[3] != 0) {
        piVar1 = (int *)(*piVar1 + 0x10);
        *piVar1 = *piVar1 + -1;
      }
    } while (*(uint *)(param_1 + 4) < *(uint *)(param_1 + 0x10));
  }
  return;
}


/* FUN_00544290 @ 00544290  kind=gamemisc  attributed-by=none  size=38 */

void FUN_00544290(undefined4 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    piVar1 = (int *)param_1[4];
    FUN_00544190(*param_1);
    if (piVar1[3] != 0) {
      piVar1 = (int *)(*piVar1 + 0x10);
      *piVar1 = *piVar1 + -1;
    }
  }
  return;
}


/* FUN_005442c0 @ 005442c0  kind=gamemisc  attributed-by=none  size=96 */

void FUN_005442c0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = **(int **)(param_1 + 0x10);
    if ((*(int *)(param_1 + 0x14) != 0) || (param_1 == *(int *)(iVar2 + 0x18))) {
      if (*(int *)(param_1 + 0x18) != 0) {
        *(int *)(*(int *)(param_1 + 0x18) + 0x14) = *(int *)(param_1 + 0x14);
      }
      if (*(int *)(param_1 + 0x14) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x18) = *(undefined4 *)(param_1 + 0x18);
      }
      if (*(int *)(iVar2 + 0x14) == param_1) {
        *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(param_1 + 0x14);
      }
      if (*(int *)(iVar2 + 0x18) == param_1) {
        *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(param_1 + 0x18);
      }
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      piVar1 = (int *)(*(int *)(param_1 + 0x10) + 0x20);
      *piVar1 = *piVar1 + -1;
    }
  }
  return;
}


/* FUN_00544320 @ 00544320  kind=gamemisc  attributed-by=none  size=55 */

void FUN_00544320(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x10);
  piVar1 = (int *)(*(int *)(iVar2 + 0x2c) + (*(uint *)(param_1 + 8) % *(uint *)(iVar2 + 0x28)) * 4);
  iVar3 = *piVar1;
  while (iVar3 != param_1) {
    piVar1 = (int *)(iVar3 + 0xc);
    iVar3 = *piVar1;
  }
  *piVar1 = *(int *)(*piVar1 + 0xc);
  *(int *)(iVar2 + 0x24) = *(int *)(iVar2 + 0x24) + -1;
  return;
}


/* FUN_00544360 @ 00544360  kind=gamemisc  attributed-by=none  size=259 */

undefined4 FUN_00544360(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint local_8;
  
  uVar5 = param_1[10] * 2;
  if (uVar5 < 0x100) {
    uVar5 = 0x100;
  }
  if (*(int *)*param_1 != 0) {
    (*DAT_00766638)(*(int *)*param_1);
  }
  if ((param_1[10] != 0) && (DAT_0076b3bc != (code *)0x0)) {
    (*DAT_0076b3bc)();
  }
  _Dst = (void *)FUN_0055da00(uVar5 * 4);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,uVar5 * 4);
  }
  if ((param_1[10] != 0) && (DAT_0076b3c0 != (code *)0x0)) {
    (*DAT_0076b3c0)();
  }
  if (*(int *)*param_1 != 0) {
    (*DAT_00766630)(*(int *)*param_1);
  }
  if (_Dst != (void *)0x0) {
    local_8 = 0;
    if (param_1[10] != 0) {
      do {
        iVar2 = *(int *)(param_1[0xb] + local_8 * 4);
        while (iVar2 != 0) {
          uVar4 = *(uint *)(iVar2 + 8) % uVar5;
          iVar1 = *(int *)(iVar2 + 0xc);
          *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)((int)_Dst + uVar4 * 4);
          *(int *)((int)_Dst + uVar4 * 4) = iVar2;
          iVar2 = iVar1;
        }
        local_8 = local_8 + 1;
      } while (local_8 < (uint)param_1[10]);
    }
    FUN_00524410(param_1[0xb]);
    param_1[0xb] = _Dst;
    param_1[10] = uVar5;
  }
  uVar3 = 7;
  if (param_1[0xb] != 0) {
    uVar3 = 0;
  }
  return uVar3;
}


/* FUN_00544470 @ 00544470  kind=gamemisc  attributed-by=none  size=205 */

void FUN_00544470(int param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint local_8;
  
  local_8 = 0;
  if (*(int *)(param_1 + 0x28) != 0) {
    do {
      puVar4 = (undefined4 *)(*(int *)(param_1 + 0x2c) + local_8 * 4);
      puVar1 = (undefined4 *)*puVar4;
      while (puVar1 != (undefined4 *)0x0) {
        if ((uint)puVar1[2] < param_2) {
          puVar4 = puVar1 + 3;
        }
        else {
          *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
          *puVar4 = puVar1[3];
          iVar2 = *(int *)puVar1[4];
          if ((puVar1[5] != 0) || (puVar1 == *(undefined4 **)(iVar2 + 0x18))) {
            if (puVar1[6] != 0) {
              *(undefined4 *)(puVar1[6] + 0x14) = puVar1[5];
            }
            if (puVar1[5] != 0) {
              *(undefined4 *)(puVar1[5] + 0x18) = puVar1[6];
            }
            if (*(undefined4 **)(iVar2 + 0x14) == puVar1) {
              *(undefined4 *)(iVar2 + 0x14) = puVar1[5];
            }
            if (*(undefined4 **)(iVar2 + 0x18) == puVar1) {
              *(undefined4 *)(iVar2 + 0x18) = puVar1[6];
            }
            puVar1[5] = 0;
            puVar1[6] = 0;
            *(int *)(puVar1[4] + 0x20) = *(int *)(puVar1[4] + 0x20) + -1;
          }
          piVar3 = (int *)puVar1[4];
          FUN_00544190(*puVar1);
          if (piVar3[3] != 0) {
            piVar3 = (int *)(*piVar3 + 0x10);
            *piVar3 = *piVar3 + -1;
          }
        }
        puVar1 = (undefined4 *)*puVar4;
      }
      local_8 = local_8 + 1;
    } while (local_8 < *(uint *)(param_1 + 0x28));
  }
  return;
}


/* FUN_00544540 @ 00544540  kind=gamemisc  attributed-by=none  size=41 */

undefined4 FUN_00544540(int param_1)

{
  undefined4 uVar1;
  
  if ((DAT_0076b754 == 0) ||
     (uVar1 = DAT_0076b770, DAT_0076b750 < *(int *)(param_1 + 8) + *(int *)(param_1 + 4))) {
    uVar1 = DAT_0076b4ac;
  }
  return uVar1;
}


/* FUN_00546470 @ 00546470  kind=gamemisc  attributed-by=none  size=118 */

undefined4 FUN_00546470(int param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  bool bVar12;
  undefined8 uVar13;
  undefined4 uStack_10;
  
  piVar3 = *(int **)(param_1 + 0x10);
  uVar2 = *(ushort *)(param_2 + 2);
  piVar11 = (int *)*piVar3;
  if ((uVar2 & 4) != 0) {
    return 1;
  }
  *(ushort *)(param_2 + 2) = uVar2 | 4;
  switch(*param_2) {
  case 0x14:
  case 0x48:
  case 0x74:
    if ((uVar2 & 0x800) != 0) {
      iVar9 = piVar3[5];
      if ((*(byte *)(piVar3 + 7) & 4) != 0) {
        FUN_00553950(piVar11,"subqueries prohibited in CHECK constraints");
      }
      FUN_00578760(param_1,*(undefined4 *)(param_2 + 0x10));
      if (iVar9 != piVar3[5]) {
        *(ushort *)(param_2 + 2) = *(ushort *)(param_2 + 2) | 0x20;
      }
    }
    break;
  case 0x1a:
    uVar7 = FUN_0053d620(piVar11,0,0,*(undefined4 *)(param_2 + 4),piVar3,param_2);
    return uVar7;
  case 0x76:
    pcVar4 = *(char **)(param_2 + 0xc);
    if (*pcVar4 != '\x1a') {
      uVar7 = FUN_0053d620(piVar11,*(undefined4 *)(*(int *)(param_2 + 8) + 4),
                           *(undefined4 *)(*(int *)(pcVar4 + 8) + 4),
                           *(undefined4 *)(*(int *)(pcVar4 + 0xc) + 4),piVar3,param_2);
      return uVar7;
    }
    uVar7 = FUN_0053d620(piVar11,0,*(undefined4 *)(*(int *)(param_2 + 8) + 4),
                         *(undefined4 *)(pcVar4 + 4),piVar3,param_2);
    return uVar7;
  case 0x85:
    if ((*(byte *)(piVar3 + 7) & 4) != 0) {
      FUN_00553950(piVar11,"parameters prohibited in CHECK constraints");
    }
    break;
  case 0x97:
  case 0x9b:
    puVar5 = *(undefined4 **)(param_2 + 0x10);
    if (puVar5 == (undefined4 *)0x0) {
      uStack_10 = 0;
    }
    else {
      uStack_10 = *puVar5;
    }
    bVar6 = false;
    bVar12 = false;
    uVar1 = *(undefined1 *)(*(int *)(*(int *)(*piVar11 + 0x10) + 0xc) + 0x4d);
    uVar7 = *(undefined4 *)(param_2 + 4);
    uVar13 = FUN_00568070(uVar7);
    uVar8 = (undefined4)uVar13;
    iVar9 = FUN_00556c60((int)((ulonglong)uVar13 >> 0x20),uVar7,uVar8,uStack_10,uVar1,0);
    if (iVar9 == 0) {
      iVar9 = FUN_00556c60(*piVar11,uVar7,uVar8,0xfffffffe,uVar1,0);
      if (iVar9 == 0) {
        FUN_00553950(piVar11,"no such function: %.*s",uVar8,uVar7);
        piVar3[6] = piVar3[6] + 1;
        goto LAB_00546668;
      }
      bVar6 = true;
    }
    else {
      bVar12 = *(int *)(iVar9 + 0xc) == 0;
    }
    iVar10 = FUN_0054ab50(piVar11,0x1f,0,*(undefined4 *)(iVar9 + 0x18),0);
    if (iVar10 != 0) {
      if (iVar10 == 1) {
        FUN_00553950(piVar11,"not authorized to use function: %s",*(undefined4 *)(iVar9 + 0x18));
        piVar3[6] = piVar3[6] + 1;
      }
      *param_2 = 0x62;
      return 1;
    }
    if ((bVar12) && ((*(byte *)(piVar3 + 7) & 1) == 0)) {
      FUN_00553950(piVar11,"misuse of aggregate function %.*s()",uVar8,uVar7);
      piVar3[6] = piVar3[6] + 1;
      bVar12 = false;
    }
    else {
      if (bVar6) {
        FUN_00553950(piVar11,"wrong number of arguments to function %.*s()",uVar8,uVar7);
        piVar3[6] = piVar3[6] + 1;
      }
      if (bVar12) {
        *(byte *)(piVar3 + 7) = *(byte *)(piVar3 + 7) & 0xfe;
      }
    }
LAB_00546668:
    FUN_00578710(param_1,puVar5);
    if (bVar12) {
      *param_2 = 0x99;
      param_2[0x23] = 0;
      piVar11 = piVar3;
      while (iVar9 = FUN_00558820(param_2,piVar11[1]), iVar9 == 0) {
        param_2[0x23] = param_2[0x23] + '\x01';
        piVar11 = (int *)piVar11[4];
        if (piVar11 == (int *)0x0) {
          *(byte *)(piVar3 + 7) = *(byte *)(piVar3 + 7) | 1;
          return 1;
        }
      }
      *(byte *)(piVar11 + 7) = *(byte *)(piVar11 + 7) | 2;
      *(byte *)(piVar3 + 7) = *(byte *)(piVar3 + 7) | 1;
    }
    return 1;
  }
  if ((piVar11[0x11] == 0) && (*(char *)(*piVar11 + 0x38) == '\0')) {
    return 0;
  }
  return 2;
}


/* FUN_00546890 @ 00546890  kind=gamemisc  attributed-by=none  size=311 */

undefined4 FUN_00546890(undefined4 *param_1,undefined4 *param_2,int *param_3,undefined4 param_4)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  if (param_3 == (int *)0x0) {
    return 0;
  }
  local_c = *param_1;
  puVar7 = (undefined4 *)param_3[2];
  uVar6 = *(undefined4 *)*param_2;
  local_8 = 0;
  if (0 < *param_3) {
    do {
      pcVar1 = (char *)*puVar7;
      local_10 = FUN_00546090(local_c,*param_2,pcVar1);
      pcVar2 = pcVar1;
      if (local_10 < 1) {
        for (; (pcVar2 != (char *)0x0 && ((*pcVar2 == '\\' || (*pcVar2 == '\x18'))));
            pcVar2 = *(char **)(pcVar2 + 8)) {
        }
        iVar3 = FUN_00556530(pcVar2,&local_10);
        if (iVar3 == 0) {
          *(undefined2 *)((int)puVar7 + 0xe) = 0;
          iVar3 = FUN_005640a0(param_1,pcVar1);
          if (iVar3 != 0) {
            return 1;
          }
          piVar4 = (int *)*param_2;
          iVar3 = 0;
          if (0 < *piVar4) {
            iVar8 = 0;
            do {
              iVar5 = FUN_00555cb0(pcVar1,*(undefined4 *)(piVar4[2] + iVar8));
              if (iVar5 == 0) {
                *(short *)((int)puVar7 + 0xe) = (short)iVar3 + 1;
              }
              iVar3 = iVar3 + 1;
              piVar4 = (int *)*param_2;
              iVar8 = iVar8 + 0x14;
            } while (iVar3 < *piVar4);
          }
        }
        else {
          if (0xfffe < local_10 - 1U) {
            FUN_00553950(local_c,"%r %s BY term out of range - should be between 1 and %d",
                         local_8 + 1,param_4,uVar6);
            return 1;
          }
          *(short *)((int)puVar7 + 0xe) = (short)local_10;
        }
      }
      else {
        *(short *)((int)puVar7 + 0xe) = (short)local_10;
      }
      local_8 = local_8 + 1;
      puVar7 = puVar7 + 5;
    } while (local_8 < *param_3);
  }
  uVar6 = FUN_00564180(local_c,param_2,param_3,param_4);
  return uVar6;
}


/* FUN_00546ad0 @ 00546ad0  kind=gamemisc  attributed-by=none  size=787 */

undefined4 FUN_00546ad0(int param_1,undefined4 *param_2)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  int *piVar7;
  int iVar8;
  char *pcVar9;
  undefined8 local_54;
  undefined8 local_4c;
  ulonglong local_44;
  undefined8 local_3c;
  code *local_34;
  code *local_30;
  int *local_2c;
  int local_24;
  undefined4 *local_20;
  int local_1c;
  uint local_18;
  int *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if ((*(ushort *)((int)param_2 + 6) & 2) != 0) {
    return 1;
  }
  local_c = *(int *)(param_1 + 0x10);
  piVar2 = *(int **)(param_1 + 8);
  local_8 = *piVar2;
  if ((*(ushort *)((int)param_2 + 6) & 0x10) == 0) {
    FUN_00567060(piVar2,param_2,local_c);
    if (piVar2[0x11] == 0) {
      if (*(char *)(local_8 + 0x38) != '\0') {
        return 2;
      }
      return 1;
    }
  }
  else {
    local_20 = param_2;
    local_18 = (uint)(param_2[0xf] != 0);
    do {
      iVar8 = local_c;
      *(ushort *)((int)param_2 + 6) = *(ushort *)((int)param_2 + 6) | 2;
      local_4c = 0;
      local_44 = 0;
      local_3c = 0;
      local_54 = ZEXT48(piVar2);
      iVar4 = FUN_005640a0(&local_54,param_2[0x12]);
      if (iVar4 != 0) {
        return 2;
      }
      iVar4 = FUN_005640a0(&local_54,param_2[0x13]);
      if (iVar4 != 0) {
        return 2;
      }
      local_3c._0_5_ = CONCAT14(1,(undefined4)local_3c);
      local_54 = CONCAT44(param_2[10],(undefined4)local_54);
      local_44 = CONCAT44(local_44._4_4_,iVar8);
      local_14 = (int *)*param_2;
      iVar8 = 0;
      bVar6 = 0;
      if (0 < *local_14) {
        iVar4 = 0;
        do {
          iVar5 = FUN_005640a0(&local_54,*(undefined4 *)(iVar4 + local_14[2]));
          if (iVar5 != 0) {
            return 2;
          }
          iVar8 = iVar8 + 1;
          iVar4 = iVar4 + 0x14;
        } while (iVar8 < *local_14);
        bVar6 = local_3c._4_1_;
      }
      local_10 = 0;
      if (0 < *(short *)param_2[10]) {
        local_14 = (int *)0x0;
        do {
          piVar3 = local_14;
          iVar8 = param_2[10];
          if (*(int *)((int)local_14 + iVar8 + 0x1c) != 0) {
            local_1c = piVar2[0x81];
            iVar5 = 0;
            for (iVar4 = local_c; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x10)) {
              iVar5 = iVar5 + *(int *)(iVar4 + 0x14);
            }
            iVar4 = *(int *)((int)local_14 + iVar8 + 0x10);
            if (iVar4 != 0) {
              piVar2[0x81] = iVar4;
            }
            local_34 = FUN_00546470;
            local_30 = FUN_00546ad0;
            local_24 = local_c;
            local_2c = piVar2;
            FUN_00578760(&local_34,*(undefined4 *)((int)local_14 + iVar8 + 0x1c));
            piVar2[0x81] = local_1c;
            if (piVar2[0x11] != 0) {
              return 2;
            }
            iVar4 = local_c;
            if (*(char *)(local_8 + 0x38) != '\0') {
              return 2;
            }
            for (; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x10)) {
              iVar5 = iVar5 - *(int *)(iVar4 + 0x14);
            }
            puVar1 = (uint *)((int)piVar3 + iVar8 + 0x2c);
            *puVar1 = *puVar1 ^ ((uint)(iVar5 != 0) * 2 ^ *(uint *)((int)piVar3 + iVar8 + 0x2c)) & 2
            ;
          }
          local_10 = local_10 + 1;
          local_14 = local_14 + 0x12;
        } while (local_10 < *(short *)param_2[10]);
        bVar6 = local_3c._4_1_;
      }
      piVar3 = (int *)param_2[0xc];
      if ((piVar3 == (int *)0x0) && ((bVar6 & 2) == 0)) {
        local_3c = CONCAT35(local_3c._5_3_,CONCAT14(bVar6,(undefined4)local_3c)) &
                   0xfffffffeffffffff;
      }
      else {
        *(ushort *)((int)param_2 + 6) = *(ushort *)((int)param_2 + 6) | 4;
      }
      if ((param_2[0xd] != 0) && (piVar3 == (int *)0x0)) {
        pcVar9 = "a GROUP BY clause is required before HAVING";
LAB_00546da7:
        FUN_00553950(piVar2,pcVar9);
        return 2;
      }
      local_4c = CONCAT44(local_4c._4_4_,*param_2);
      iVar8 = FUN_005640a0(&local_54,param_2[0xb]);
      if (iVar8 != 0) {
        return 2;
      }
      iVar8 = FUN_005640a0(&local_54,param_2[0xd]);
      if (iVar8 != 0) {
        return 2;
      }
      local_3c = local_3c | 0x100000000;
      local_44 = local_44 & 0xffffffff00000000;
      if ((local_18 == 0) &&
         (iVar8 = FUN_00546890(&local_54,param_2,param_2[0xe],"ORDER"), iVar8 != 0)) {
        return 2;
      }
      iVar8 = local_8;
      if (*(char *)(local_8 + 0x38) != '\0') {
        return 2;
      }
      if (piVar3 != (int *)0x0) {
        iVar4 = FUN_00546890(&local_54,param_2,piVar3,"GROUP");
        if (iVar4 != 0) {
          return 2;
        }
        if (*(char *)(iVar8 + 0x38) != '\0') {
          return 2;
        }
        piVar7 = (int *)piVar3[2];
        iVar8 = 0;
        if (0 < *piVar3) {
          do {
            if ((*(byte *)(*piVar7 + 2) & 2) != 0) {
              pcVar9 = "aggregate functions are not allowed in the GROUP BY clause";
              goto LAB_00546da7;
            }
            iVar8 = iVar8 + 1;
            piVar7 = piVar7 + 5;
          } while (iVar8 < *piVar3);
        }
      }
      param_2 = (undefined4 *)param_2[0xf];
    } while (param_2 != (undefined4 *)0x0);
    if ((local_18 == 0) || (iVar8 = FUN_005461b0(piVar2,local_20), iVar8 == 0)) {
      return 1;
    }
  }
  return 2;
}


/* FUN_005476b0 @ 005476b0  kind=gamemisc  attributed-by=none  size=105 */

undefined4 FUN_005476b0(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint local_8;
  
  local_8 = param_3 & 0x7fffffff;
  iVar1 = (*(code *)PTR_SetFilePointer_007672f4)(*(undefined4 *)(param_1 + 8),param_2,&local_8,0);
  if (iVar1 == -1) {
    iVar1 = (*(code *)PTR_GetLastError_007671bc)();
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x14) = iVar1;
      FUN_0057fa50(0x160a,iVar1,"seekWinFile",*(undefined4 *)(param_1 + 0x1c),0x7d7a);
      return 1;
    }
  }
  return 0;
}


/* FUN_00547860 @ 00547860  kind=gamemisc  attributed-by=none  size=127 */

undefined4 FUN_00547860(int param_1,int param_2)

{
  undefined4 uVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  if ((*(ushort *)(param_2 + 6) & 0x20) != 0) {
    return 0;
  }
  *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x20;
  uVar1 = *(undefined4 *)(param_1 + 8);
  psVar2 = *(short **)(param_2 + 0x28);
  iVar7 = 0;
  if (*psVar2 < 1) {
    return 0;
  }
  piVar6 = (int *)(psVar2 + 0xe);
  do {
    iVar3 = piVar6[-1];
    if ((iVar3 != 0) && ((*(byte *)(iVar3 + 0x2a) & 2) != 0)) {
      iVar4 = *piVar6;
      for (iVar5 = *(int *)(*piVar6 + 0x3c); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x3c)) {
        iVar4 = iVar5;
      }
      FUN_00547720(uVar1,(int)*(short *)(iVar3 + 0x26),*(undefined4 *)(iVar3 + 4),iVar4);
    }
    iVar7 = iVar7 + 1;
    piVar6 = piVar6 + 0x12;
  } while (iVar7 < *psVar2);
  return 0;
}


/* FUN_00548b20 @ 00548b20  kind=gamemisc  attributed-by=none  size=118 */

undefined4 FUN_00548b20(int param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  double local_c;
  
  piVar1 = (int *)**(int **)(param_1 + 8);
  if ((*piVar1 < 2) || ((code *)piVar1[0x12] == (code *)0x0)) {
    iVar2 = (*(code *)piVar1[0x10])(piVar1,&local_c);
    local_c = local_c * 86400000.0;
    uVar3 = FUN_0068d946();
    *param_2 = uVar3;
  }
  else {
    iVar2 = (*(code *)piVar1[0x12])(piVar1,param_2);
  }
  if (iVar2 == 0) {
    *(undefined1 *)((int)param_2 + 0x2a) = 1;
    return 0;
  }
  return 1;
}


/* FUN_00548d00 @ 00548d00  kind=gamemisc  attributed-by=none  size=277 */

undefined4 FUN_00548d00(int param_1,undefined4 *param_2,uint param_3,int param_4)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0xec) != 0) {
    return 5;
  }
  if (*(char *)(param_1 + 0xeb) != '\0') {
    FUN_00524410(*(undefined4 *)(param_1 + 0x104));
  }
  param_3 = param_3 & 0xfffffff8;
  if ((int)param_3 < 5) {
    param_3 = 0;
  }
  if (param_4 < 0) {
    param_4 = 0;
  }
  if ((param_3 == 0) || (param_4 == 0)) {
    param_3 = 0;
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = param_2;
    if (param_2 == (undefined4 *)0x0) {
      if (DAT_0076b3bc != (code *)0x0) {
        (*DAT_0076b3bc)();
      }
      puVar1 = (undefined4 *)FUN_0055da00(param_3 * param_4);
      if (DAT_0076b3c0 != (code *)0x0) {
        (*DAT_0076b3c0)();
      }
      if (puVar1 != (undefined4 *)0x0) {
        param_4 = (*DAT_00766608._4_4_)(puVar1);
        param_4 = param_4 / (int)param_3;
      }
    }
  }
  *(undefined4 **)(param_1 + 0x104) = puVar1;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(short *)(param_1 + 0xe8) = (short)param_3;
  if (puVar1 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x108) = 0;
    *(undefined2 *)(param_1 + 0xea) = 0;
    return 0;
  }
  while (param_4 = param_4 + -1, -1 < param_4) {
    *puVar1 = *(undefined4 *)(param_1 + 0x100);
    *(undefined4 **)(param_1 + 0x100) = puVar1;
    puVar1 = (undefined4 *)((int)puVar1 + param_3);
  }
  *(undefined4 **)(param_1 + 0x108) = puVar1;
  *(bool *)(param_1 + 0xeb) = param_2 == (undefined4 *)0x0;
  *(undefined1 *)(param_1 + 0xea) = 1;
  return 0;
}


/* FUN_0054ad90 @ 0054ad90  kind=gamemisc  attributed-by=none  size=196 */

void FUN_0054ad90(undefined4 param_1)

{
  bool bVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 local_8;
  
  bVar1 = true;
  if (DAT_0076b3b0 != 0) {
    iVar4 = 0;
    do {
      if (DAT_007665e4 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*DAT_00766628)(2);
        if (iVar3 != 0) {
          (*DAT_00766630)(iVar3);
        }
      }
      if (iVar4 < DAT_0076b3b0) {
        pcVar2 = *(code **)(DAT_0076b3b4 + iVar4 * 4);
      }
      else {
        pcVar2 = (code *)0x0;
        bVar1 = false;
      }
      if (iVar3 != 0) {
        (*DAT_00766638)(iVar3);
      }
      local_8 = 0;
      if ((pcVar2 != (code *)0x0) &&
         (iVar3 = (*pcVar2)(param_1,&local_8,&PTR_FUN_00712d48), iVar3 != 0)) {
        FUN_00553890(param_1,iVar3,"automatic extension loading failed: %s",local_8);
        bVar1 = false;
      }
      FUN_00524410(local_8);
      iVar4 = iVar4 + 1;
    } while (bVar1);
  }
  return;
}


/* FUN_0054bd10 @ 0054bd10  kind=gamemisc  attributed-by=none  size=584 */

int FUN_0054bd10(int param_1,uint *param_2)

{
  void *pvVar1;
  undefined1 uVar2;
  byte bVar3;
  int *_Dst;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  size_t _Size;
  uint *puVar8;
  int iVar9;
  int local_24;
  int local_1c;
  int local_18;
  uint local_10;
  int local_c;
  void *local_8;
  
  local_18 = -1;
  _Dst = (int *)FUN_0055da00(0x200);
  if (_Dst != (int *)0x0) {
    memset(_Dst,0,0x200);
    *_Dst = param_1;
  }
  _Size = ((int)((param_1 + 7 >> 0x1f & 7U) + param_1 + 7) >> 3) + 1;
  local_8 = (void *)FUN_0055da00(_Size);
  if (local_8 != (void *)0x0) {
    memset(local_8,0,_Size);
  }
  iVar4 = FUN_00579f80();
  if (iVar4 == 0) {
    iVar4 = FUN_0055da00(0x200);
  }
  else {
    iVar4 = 0;
  }
  if (((_Dst != (int *)0x0) && (local_8 != (void *)0x0)) && (iVar4 != 0)) {
    uVar6 = *param_2;
    local_c = 0;
    while (uVar6 != 0) {
      if (((int)uVar6 < 1) || ((2 < (int)uVar6 && (uVar6 != 5)))) {
        local_24 = 2;
        iVar5 = 4;
        puVar8 = &local_10;
        if (DAT_007665e4 == 0) {
          local_1c = 0;
        }
        else {
          local_1c = (*DAT_00766628)(5);
          if (local_1c != 0) {
            (*DAT_00766630)(local_1c);
          }
        }
        do {
          uVar2 = FUN_00544c20();
          *(undefined1 *)puVar8 = uVar2;
          puVar8 = (uint *)((int)puVar8 + 1);
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        if (local_1c != 0) {
          (*DAT_00766638)(local_1c);
        }
      }
      else {
        local_10 = param_2[local_c + 2] - 1;
        local_24 = 4;
        param_2[local_c + 2] = param_2[local_c + 3] + param_2[local_c + 2];
      }
      param_2[local_c + 1] = param_2[local_c + 1] - 1;
      if (0 < (int)param_2[local_c + 1]) {
        local_24 = 0;
      }
      local_c = local_c + local_24;
      local_10 = (uint)((longlong)(ulonglong)(local_10 & 0x7fffffff) % (longlong)param_1);
      iVar5 = local_10 + 1;
      pbVar7 = (byte *)((iVar5 >> 3) + (int)local_8);
      bVar3 = '\x01' << ((byte)iVar5 & 7);
      if ((uVar6 & 1) == 0) {
        *pbVar7 = *pbVar7 & ~bVar3;
        FUN_0054bf60(_Dst,iVar5,iVar4);
      }
      else {
        *pbVar7 = *pbVar7 | bVar3;
        if ((uVar6 != 5) && (iVar5 = FUN_0054c100(_Dst,iVar5), iVar5 != 0)) goto LAB_0054bf36;
      }
      uVar6 = param_2[local_c];
    }
    iVar5 = FUN_0054c2e0(_Dst,param_1 + 1);
    pvVar1 = local_8;
    iVar5 = iVar5 + (*_Dst - param_1);
    iVar9 = 1;
    local_18 = iVar5;
    if (0 < param_1) {
      do {
        uVar6 = FUN_0054c2e0(_Dst,iVar9);
        local_18 = iVar9;
        if (((*(byte *)((iVar9 >> 3) + (int)pvVar1) & (byte)(1 << ((byte)iVar9 & 7))) != 0) != uVar6
           ) break;
        iVar9 = iVar9 + 1;
        local_18 = iVar5;
      } while (iVar9 <= param_1);
    }
  }
LAB_0054bf36:
  FUN_00524410(iVar4);
  FUN_00524410(local_8);
  FUN_0054c040(_Dst);
  return local_18;
}


/* FUN_0054de80 @ 0054de80  kind=gamemisc  attributed-by=none  size=47 */

void FUN_0054de80(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 9) != '\0') {
    piVar1 = (int *)(iVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      iVar3 = *(int *)(*(int *)(iVar2 + 4) + 0x38);
      if (iVar3 != 0) {
        (*DAT_00766638)(iVar3);
      }
      *(undefined1 *)(iVar2 + 10) = 0;
    }
  }
  return;
}


/* FUN_0054ecc0 @ 0054ecc0  kind=gamemisc  attributed-by=none  size=140 */

int FUN_0054ecc0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (*(byte *)(param_1 + 0x5b) < 2) {
    iVar1 = 0;
  }
  else if (*(byte *)(param_1 + 0x5b) == 3) {
    iVar1 = *(int *)(param_1 + 0x54);
  }
  else {
    *(undefined1 *)(param_1 + 0x5b) = 0;
    iVar1 = FUN_0052ec30(param_1,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x48),
                         *(undefined4 *)(param_1 + 0x4c),0,param_1 + 0x54);
    if (iVar1 != 0) {
      return iVar1;
    }
    FUN_00524410(*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = 0;
    iVar1 = 0;
  }
  if (iVar1 != 0) {
    return iVar1;
  }
  if (*(char *)(param_1 + 0x5b) != '\x01') {
    return 4;
  }
  if (*(char *)(param_1 + 0x58) != '\0') {
    iVar1 = FUN_00528920(param_1,param_2,param_3,param_4,1);
    return iVar1;
  }
  return 8;
}


/* FUN_0054fc20 @ 0054fc20  kind=gamemisc  attributed-by=none  size=204 */

undefined4 FUN_0054fc20(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x44);
    if (((iVar1 != 0x4b771290) && (iVar1 != -0x5fd65969)) && (iVar1 != -0xfc486fa)) {
      FUN_00525a30(0x15,"API call with %s database connection pointer","invalid");
      FUN_00525a30(0x15,"misuse at line %d of [%.10s]",0x1bb1e,
                   "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
      return 0x15;
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      (*DAT_00766630)(*(int *)(param_1 + 0xc));
    }
    FUN_005342f0(param_1);
    FUN_0052f080(param_1,0x44);
    if (param_2 == 0) {
      iVar1 = FUN_00532e30(param_1);
      if (iVar1 != 0) {
        FUN_00553890(param_1,5,"unable to close due to unfinalized statements or unfinished backups"
                    );
        if (*(int *)(param_1 + 0xc) != 0) {
          (*DAT_00766638)(*(int *)(param_1 + 0xc));
        }
        return 5;
      }
    }
    *(undefined4 *)(param_1 + 0x44) = 0x64cffc7f;
    FUN_0055d180(param_1);
  }
  return 0;
}


/* FUN_0055cd50 @ 0055cd50  kind=gamemisc  attributed-by=none  size=220 */

void FUN_0055cd50(int *param_1)

{
  int *piVar1;
  void *_Src;
  int iVar2;
  int iVar3;
  
  _Src = (void *)FUN_00523d10("unable to use function %s in the requested context",
                              *(undefined4 *)(*param_1 + 0x18));
  param_1[0xe] = 1;
  if (_Src == (void *)0x0) {
    if ((*(byte *)(param_1 + 9) & 0x40) != 0) {
      piVar1 = (int *)param_1[6];
      piVar1[1] = *(int *)(*piVar1 + 0xa4);
      *(int **)(*piVar1 + 0xa4) = piVar1;
    }
    if ((*(byte *)(param_1 + 9) & 0x20) != 0) {
      FUN_005644e0(param_1[6]);
    }
    *(ushort *)(param_1 + 9) = *(ushort *)(param_1 + 9) & 0xbe01 | 1;
    *(undefined1 *)((int)param_1 + 0x26) = 5;
    FUN_00524410(0);
    return;
  }
  iVar2 = param_1[2];
  if (iVar2 == 0) {
    iVar2 = 1000000000;
  }
  else {
    iVar2 = *(int *)(iVar2 + 0x50);
  }
  iVar3 = 0;
  if (-1 < iVar2) {
    do {
      if (*(char *)(iVar3 + (int)_Src) == '\0') break;
      iVar3 = iVar3 + 1;
    } while (iVar3 <= iVar2);
  }
  if (iVar3 <= iVar2) {
    iVar2 = FUN_005748c0(param_1 + 2,iVar3 + 1,0);
    if (iVar2 == 0) {
      memcpy((void *)param_1[3],_Src,iVar3 + 1);
      param_1[8] = iVar3;
      param_1[9] = 0x1030202;
    }
  }
  FUN_00524410(_Src);
  return;
}


/* FUN_0055e040 @ 0055e040  kind=gamemisc  attributed-by=none  size=133 */

undefined4 FUN_0055e040(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  if (DAT_0076b488 != 0) {
    (*DAT_00766630)(DAT_0076b488);
  }
  DAT_0076b498 = param_1;
  DAT_0076b49c = param_2;
  DAT_0076b490 = param_3;
  DAT_0076b494 = param_4;
  if ((-1 < param_4) && ((0 < param_4 || (param_3 != 0)))) {
    if ((param_4 <= (int)DAT_0076b360 >> 0x1f) &&
       ((param_4 < (int)DAT_0076b360 >> 0x1f || (param_3 <= DAT_0076b360)))) {
      DAT_0076b4ac = 1;
      goto LAB_0055e0b1;
    }
  }
  DAT_0076b4ac = 0;
LAB_0055e0b1:
  if (DAT_0076b488 != 0) {
    (*DAT_00766638)(DAT_0076b488);
  }
  return 0;
}


/* FUN_0055f340 @ 0055f340  kind=gamemisc  attributed-by=none  size=77 */

int FUN_0055f340(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar1 = *(ushort *)(param_1 + 0x74);
  iVar2 = *(int *)(param_1 + 0x80);
  iVar3 = *(int *)(*(int *)(param_1 + 0xb4) + 0x28);
  if (iVar3 != 0) {
    iVar4 = (*DAT_0076665c)(iVar3);
  }
  iVar3 = (*DAT_00766608._4_4_)(param_1);
  return iVar3 + iVar4 * (iVar2 + 0x3c + (uint)uVar1) + *(int *)(param_1 + 0x80);
}


/* FUN_00563550 @ 00563550  kind=gamemisc  attributed-by=none  size=256 */

uint FUN_00563550(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5,
                 int *param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int local_8;
  
  uVar5 = 0;
  local_8 = 0;
  *param_5 = 0;
  iVar2 = FUN_00564f10(param_1);
  if (iVar2 == 0) {
    FUN_00525a30(0x15,"misuse at line %d of [%.10s]",0x17015,
                 "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
    return 0x15;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  iVar2 = FUN_0056a850(param_1,param_2,param_3,2);
  if (iVar2 != 0) {
    uVar5 = FUN_0055d830(param_1,iVar2,0xffffffff,param_4,0,param_5,&local_8);
    if ((local_8 != 0) && (param_6 != (int *)0x0)) {
      uVar3 = FUN_0056a8f0(iVar2,local_8 - iVar2);
      iVar4 = FUN_0056a810(param_2,uVar3);
      *param_6 = iVar4 + param_2;
    }
  }
  FUN_005521a0(param_1,iVar2);
  if ((*(char *)(param_1 + 0x38) != '\0') || (uVar5 == 0xc0a)) {
    FUN_00553890(param_1,7,0);
    *(undefined1 *)(param_1 + 0x38) = 0;
    uVar5 = 7;
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return uVar1 & uVar5;
}


