// Unsorted_000 (game_misc) -- cube. 150 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Unsorted_000.h"

/* FUN_00401c40 @ 00401c40  kind=gamemisc  attributed-by=none  size=293 */

void FUN_00401c40(int *param_1,uint param_2,uint param_3)

{
  void *pvVar1;
  int iVar2;
  
  if (0x20 < param_3) {
LAB_00401d3d:
    if ((void *)param_1[2] != (void *)0x0) {
      free((void *)param_1[2]);
    }
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    return;
  }
  iVar2 = param_1[4];
  if (iVar2 + -4 <= *param_1) {
    if (param_1[3] == 0) {
      return;
    }
    if ((0x7ffffeff < iVar2) ||
       (pvVar1 = realloc((void *)param_1[2],iVar2 + 0x100), pvVar1 == (void *)0x0))
    goto LAB_00401d3d;
    param_1[4] = param_1[4] + 0x100;
    param_1[2] = (int)pvVar1;
    param_1[3] = *param_1 + (int)pvVar1;
  }
  param_2 = param_2 & *(uint *)(&DAT_00745d00 + param_3 * 4);
  param_3 = param_3 + param_1[1];
  *(byte *)param_1[3] = *(byte *)param_1[3] | (char)param_2 << ((byte)param_1[1] & 0x1f);
  if ((((7 < (int)param_3) &&
       (*(char *)(param_1[3] + 1) = (char)(param_2 >> (8U - (char)param_1[1] & 0x1f)),
       0xf < (int)param_3)) &&
      (*(char *)(param_1[3] + 2) = (char)(param_2 >> (0x10U - (char)param_1[1] & 0x1f)),
      0x17 < (int)param_3)) &&
     (*(char *)(param_1[3] + 3) = (char)(param_2 >> (0x18U - (char)param_1[1] & 0x1f)),
     0x1f < (int)param_3)) {
    if (param_1[1] == 0) {
      *(undefined1 *)(param_1[3] + 4) = 0;
    }
    else {
      *(char *)(param_1[3] + 4) = (char)(param_2 >> (0x20U - (char)param_1[1] & 0x1f));
    }
  }
  iVar2 = (int)(param_3 + ((int)param_3 >> 0x1f & 7U)) >> 3;
  *param_1 = *param_1 + iVar2;
  param_1[3] = param_1[3] + iVar2;
  param_1[1] = param_3 & 7;
  return;
}


/* FUN_00401d70 @ 00401d70  kind=gamemisc  attributed-by=none  size=192 */

uint FUN_00401d70(void)

{
  int iVar1;
  byte *pbVar2;
  char cVar3;
  int *in_ECX;
  uint in_EDX;
  int iVar4;
  uint uVar5;
  
  if (0x20 < in_EDX) {
    return 0xffffffff;
  }
  iVar1 = in_ECX[1];
  iVar4 = in_EDX + iVar1;
  if (in_ECX[4] + -4 <= *in_ECX) {
    if (in_ECX[4] - (iVar4 + 7 >> 3) < *in_ECX) {
      return 0xffffffff;
    }
    if (iVar4 == 0) {
      return 0;
    }
  }
  pbVar2 = (byte *)in_ECX[3];
  uVar5 = (uint)(*pbVar2 >> (*(byte *)(in_ECX + 1) & 0x1f));
  if ((((8 < iVar4) &&
       (cVar3 = (char)iVar1, uVar5 = uVar5 | (uint)pbVar2[1] << (8U - cVar3 & 0x1f), 0x10 < iVar4))
      && (uVar5 = uVar5 | (uint)pbVar2[2] << (0x10U - cVar3 & 0x1f), 0x18 < iVar4)) &&
     ((uVar5 = uVar5 | (uint)pbVar2[3] << (0x18U - cVar3 & 0x1f), 0x20 < iVar4 && (iVar1 != 0)))) {
    uVar5 = uVar5 | (uint)pbVar2[4] << (0x20U - cVar3 & 0x1f);
  }
  return uVar5 & *(uint *)(&DAT_00745d00 + in_EDX * 4);
}


/* FUN_00401e30 @ 00401e30  kind=gamemisc  attributed-by=none  size=75 */

void FUN_00401e30(void)

{
  int iVar1;
  int *in_ECX;
  int in_EDX;
  uint uVar2;
  
  uVar2 = in_EDX + in_ECX[1];
  if (in_ECX[4] - ((int)(uVar2 + 7) >> 3) < *in_ECX) {
    in_ECX[3] = 0;
    *in_ECX = in_ECX[4];
    in_ECX[1] = 1;
    return;
  }
  iVar1 = (int)(uVar2 + ((int)uVar2 >> 0x1f & 7U)) >> 3;
  in_ECX[3] = in_ECX[3] + iVar1;
  in_ECX[1] = uVar2 & 7;
  *in_ECX = iVar1 + *in_ECX;
  return;
}


/* FUN_00402370 @ 00402370  kind=gamemisc  attributed-by=none  size=374 */

void FUN_00402370(void *param_1,int param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  int *in_ECX;
  uint uVar3;
  uint uVar4;
  size_t _Size;
  uint uVar5;
  uint uStack_30;
  void *local_1c;
  undefined1 local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1240;
  local_10 = ExceptionList;
  uStack_30 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  uVar4 = param_3 - param_2;
  if (uVar4 != 0) {
    if ((uint)(in_ECX[2] - in_ECX[1]) < uVar4) {
      iVar1 = *in_ECX;
      if ((iVar1 - in_ECX[1]) - 1U < uVar4) {
        local_14 = (undefined1 *)&uStack_30;
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("vector<T> too long");
      }
      uVar5 = in_ECX[2] - iVar1;
      uVar3 = (in_ECX[1] - iVar1) + uVar4;
      if (-(uVar5 >> 1) - 1 < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (uVar5 < uVar3) {
        uVar5 = uVar3;
      }
      local_1c = (void *)0x0;
      local_14 = (undefined1 *)&uStack_30;
      if ((uVar5 != 0) &&
         (local_14 = (undefined1 *)&uStack_30, local_1c = operator_new(uVar5),
         local_1c == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
        std::_Xbad_alloc();
      }
      _Size = (int)param_1 - *in_ECX;
      local_8 = 0;
      pvVar2 = memmove(local_1c,(void *)*in_ECX,_Size);
      pvVar2 = (void *)FUN_00402e20(param_2,param_3,(int)pvVar2 + _Size,&local_15,param_1);
      memmove(pvVar2,param_1,in_ECX[1] - (int)param_1);
      pvVar2 = (void *)*in_ECX;
      if (pvVar2 == (void *)0x0) {
        *in_ECX = (int)local_1c;
        in_ECX[2] = (int)local_1c + uVar5;
        in_ECX[1] = (int)local_1c + uVar4 + (in_ECX[1] - (int)pvVar2);
        ExceptionList = local_10;
        return;
      }
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    FUN_00402e20(param_2,param_3,in_ECX[1],&local_15,param_1);
    pvVar2 = (void *)in_ECX[1];
    if ((param_1 != pvVar2) && (pvVar2 != (void *)((int)pvVar2 + uVar4))) {
      FUN_00402d50(param_1,pvVar2,(void *)((int)pvVar2 + uVar4),0,0);
    }
    in_ECX[1] = in_ECX[1] + uVar4;
  }
  ExceptionList = local_10;
  return;
}


/* FUN_00402500 @ 00402500  kind=gamemisc  attributed-by=none  size=379 */

void FUN_00402500(void *param_1,int param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  int *in_ECX;
  uint uVar3;
  uint uVar4;
  size_t _Size;
  uint uVar5;
  uint uStack_30;
  void *local_1c;
  undefined1 local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1260;
  local_10 = ExceptionList;
  uStack_30 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  uVar4 = param_3 - param_2 >> 2;
  if (uVar4 != 0) {
    if ((uint)(in_ECX[2] - in_ECX[1]) < uVar4) {
      iVar1 = *in_ECX;
      if ((iVar1 - in_ECX[1]) - 1U < uVar4) {
        local_14 = (undefined1 *)&uStack_30;
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("vector<T> too long");
      }
      uVar5 = in_ECX[2] - iVar1;
      uVar3 = (in_ECX[1] - iVar1) + uVar4;
      if (-(uVar5 >> 1) - 1 < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (uVar5 < uVar3) {
        uVar5 = uVar3;
      }
      local_1c = (void *)0x0;
      local_14 = (undefined1 *)&uStack_30;
      if ((uVar5 != 0) &&
         (local_14 = (undefined1 *)&uStack_30, local_1c = operator_new(uVar5),
         local_1c == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
        std::_Xbad_alloc();
      }
      _Size = (int)param_1 - *in_ECX;
      local_8 = 0;
      pvVar2 = memmove(local_1c,(void *)*in_ECX,_Size);
      pvVar2 = (void *)FUN_00402e50(param_2,param_3,(int)pvVar2 + _Size,&local_15,param_1);
      memmove(pvVar2,param_1,in_ECX[1] - (int)param_1);
      pvVar2 = (void *)*in_ECX;
      if (pvVar2 == (void *)0x0) {
        *in_ECX = (int)local_1c;
        in_ECX[2] = (int)local_1c + uVar5;
        in_ECX[1] = (int)local_1c + uVar4 + (in_ECX[1] - (int)pvVar2);
        ExceptionList = local_10;
        return;
      }
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    FUN_00402e50(param_2,param_3,in_ECX[1],&local_15,param_1);
    pvVar2 = (void *)in_ECX[1];
    if ((param_1 != pvVar2) && (pvVar2 != (void *)((int)pvVar2 + uVar4))) {
      FUN_00402d50(param_1,pvVar2,(void *)((int)pvVar2 + uVar4),0,0);
    }
    in_ECX[1] = in_ECX[1] + uVar4;
  }
  ExceptionList = local_10;
  return;
}


/* FUN_00402d50 @ 00402d50  kind=gamemisc  attributed-by=none  size=208 */

void FUN_00402d50(undefined1 *param_1,int param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *local_c;
  undefined1 *local_8;
  
  puVar7 = (undefined1 *)(param_2 - (int)param_1);
  puVar5 = puVar7;
  local_c = param_3 + -(int)param_1;
  while (puVar2 = puVar5, puVar2 != (undefined1 *)0x0) {
    puVar5 = (undefined1 *)((int)local_c % (int)puVar2);
    local_c = puVar2;
  }
  if (((int)local_c < (int)(param_3 + -(int)param_1)) && (0 < (int)local_c)) {
    puVar5 = local_c + (int)param_1;
    do {
      puVar2 = puVar5 + (int)puVar7;
      if (puVar5 + (int)puVar7 == param_3) {
        puVar2 = param_1;
      }
      puVar6 = (undefined1 *)-(int)puVar2;
      local_8 = puVar5;
      do {
        puVar3 = puVar2;
        uVar1 = *local_8;
        *local_8 = *puVar3;
        *puVar3 = uVar1;
        if ((int)puVar7 < (int)(param_3 + (int)puVar6)) {
          puVar6 = puVar6 + -(int)puVar7;
          puVar4 = puVar7;
        }
        else {
          puVar4 = param_1 + ((int)puVar7 - (int)param_3);
          puVar6 = param_3 + (int)(puVar6 + (-(int)puVar7 - (int)param_1));
        }
        puVar2 = puVar3 + (int)puVar4;
        local_8 = puVar3;
      } while (puVar3 + (int)puVar4 != puVar5);
      local_c = local_c + -1;
      puVar5 = puVar5 + -1;
    } while (0 < (int)local_c);
  }
  return;
}


/* FUN_00402e50 @ 00402e50  kind=gamemisc  attributed-by=none  size=39 */

void FUN_00402e50(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return;
}


/* FUN_00404060 @ 00404060  kind=gamemisc  attributed-by=none  size=43 */

void FUN_00404060(void)

{
  int *piVar1;
  bool bVar2;
  int *in_ECX;
  
  bVar2 = std::uncaught_exception();
  if (!bVar2) {
    std::basic_ostream<char,std::char_traits<char>_>::_Osfx
              ((basic_ostream<char,std::char_traits<char>_> *)*in_ECX);
  }
  piVar1 = *(int **)(*(int *)(*(int *)*in_ECX + 4) + 0x38 + *in_ECX);
  if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00404087. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


/* FUN_00405120 @ 00405120  kind=gamemisc  attributed-by=none  size=136 */

/* WARNING: Removing unreachable block (ram,0x00405184) */

void FUN_00405120(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e13d8;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0040c280("checkbutton",0xb);
  local_8 = 0;
  FUN_0040da70(param_2);
  ExceptionList = local_10;
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00405210 @ 00405210  kind=gamemisc  attributed-by=none  size=120 */

undefined4 FUN_00405210(int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = 0;
  if (0 < DAT_0076500c) {
    do {
      uVar3 = uVar5 & 0x80000001;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
      }
      if (uVar3 != 0) {
        if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2)) {
          do {
            iVar6 = param_2 - *(int *)(*(int *)(param_1 + 0xc) + param_2 * 4);
            iVar4 = param_2 + 1;
            iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 4 + param_2 * 4);
            param_2 = param_2 + 2;
            pcVar2 = *(code **)(*(int *)(param_1 + 0x40) + iVar6 * 4);
            *(int *)(param_1 + 0x50) = param_2;
            if (pcVar2 != (code *)0x0) {
              iVar4 = (*pcVar2)(param_1,iVar4 - iVar1);
              param_2 = param_2 + iVar4;
            }
          } while (iVar6 != 0xc);
        }
        return 0;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < DAT_0076500c);
  }
  return 0xffffffff;
}


/* FUN_004052e0 @ 004052e0  kind=gamemisc  attributed-by=none  size=192 */

/* WARNING: Removing unreachable block (ram,0x0040537c) */

void FUN_004052e0(undefined4 param_1,int param_2)

{
  uint uVar1;
  undefined4 extraout_EDX;
  float fVar2;
  double dVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1408;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  dVar3 = (double)((float)param_2 * 0.1);
  libm_sse2_cos_precise(uVar1);
  fVar2 = (float)dVar3;
  FUN_0040c280("caption",7);
  local_8 = 0;
  FUN_0040b810();
  FUN_0040c390(param_2);
  ExceptionList = local_10;
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc,extraout_EDX,fVar2);
  return;
}


/* FUN_004053b0 @ 004053b0  kind=gamemisc  attributed-by=none  size=99 */

undefined4 FUN_004053b0(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_0040c390(0);
    return 0;
  }
  if (param_2 != 1) {
    if (param_2 != 2) {
      FUN_0040c390(param_2);
      return 0;
    }
    if (DAT_0076af44 != 0) {
      DAT_0076af48 = DAT_0076af48 + DAT_0076af44 * 10;
    }
    FUN_0040c390(2);
    return 0;
  }
  FUN_0040c390(1);
  return 0;
}


/* FUN_00406e30 @ 00406e30  kind=gamemisc  attributed-by=none  size=134 */

undefined4 FUN_00406e30(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (0 < param_2) {
    FUN_0040bac0(param_1,0xffffffff,param_2);
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x38);
  param_2 = (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c)) / 0xc + DAT_0076502c * param_2;
  iVar2 = FUN_00583cb0(iVar1,*(undefined4 *)(iVar1 + 4),&param_2);
  if (*(int *)(param_1 + 0x3c) == 0x15555554) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return 0;
}


/* FUN_00407e00 @ 00407e00  kind=gamemisc  attributed-by=none  size=42 */

float10 FUN_00407e00(int param_1,double param_2)

{
  while( true ) {
    for (; 0 < param_1; param_1 = param_1 + -1) {
    }
    if (-1 < param_1) break;
    param_1 = -param_1;
  }
  return (float10)((double)param_1 + param_2);
}


/* FUN_00407ed0 @ 00407ed0  kind=gamemisc  attributed-by=none  size=162 */

/* WARNING: Removing unreachable block (ram,0x00407f5a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00407ed0(undefined4 param_1,int param_2)

{
  float10 fVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1488;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  fVar1 = (float10)FUN_00407e00(2,(double)param_2,DAT_0076aa78 ^ (uint)&stack0xfffffffc);
  FUN_005870c0();
  _DAT_00000000 = (int)fVar1;
  local_8 = 0;
  FUN_0040d910();
  ExceptionList = local_10;
  return 0;
}


/* FUN_004081b0 @ 004081b0  kind=gamemisc  attributed-by=none  size=35 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004081b0(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 != 1) {
    return param_2 - _DAT_0076af54;
  }
  return 1;
}


/* FUN_004085a0 @ 004085a0  kind=gamemisc  attributed-by=none  size=378 */

void FUN_004085a0(int param_1)

{
  uint *puVar1;
  void *pvVar2;
  uint *puVar3;
  int iVar4;
  uint **ppuVar5;
  int iVar6;
  uint **extraout_EDX;
  uint **ppuVar7;
  uint **extraout_EDX_00;
  uint **extraout_EDX_01;
  uint **extraout_EDX_02;
  uint *local_34 [3];
  int local_28;
  int local_24 [5];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e156a;
  local_10 = ExceptionList;
  local_24[4] = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_28 = param_1;
  puVar1 = (uint *)(param_1 + 0x2c);
  local_24[1] = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  local_24[0] = 0;
  local_24[3] = 4;
  if (*puVar1 != *(uint *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(uint *)(param_1 + 0x30) - 0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  local_28 = **(undefined4 **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*puVar1 != *(uint *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(uint *)(param_1 + 0x30) - 0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  local_24[2] = local_28;
  iVar4 = 0;
  iVar6 = 0;
  do {
    if (iVar6 == 0) {
      iVar4 = iVar4 + local_24[1];
    }
    else {
      iVar4 = (iVar4 - local_24[iVar6 * 2]) - local_24[iVar6 * 2 + 1];
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 2);
  local_34[0] = (uint *)0x0;
  local_34[1] = (uint *)0x0;
  local_34[2] = (uint *)0x0;
  FUN_005870c0(4);
  puVar3 = local_34[0];
  *local_34[0] = (uint)(iVar4 < -3);
  local_8 = 0;
  ppuVar7 = extraout_EDX;
  if ((local_34 < *(uint ***)(param_1 + 0x30)) && (ppuVar7 = (uint **)*puVar1, ppuVar7 <= local_34))
  {
    iVar6 = (int)local_34 - (int)ppuVar7;
    iVar4 = iVar6 >> 0x1f;
    ppuVar7 = (uint **)(iVar6 / 0xc + iVar4);
    iVar4 = (int)ppuVar7 - iVar4;
    if (*(int *)(param_1 + 0x30) == *(int *)(param_1 + 0x34)) {
      FUN_0063ddc0(1);
      ppuVar7 = extraout_EDX_00;
    }
    ppuVar5 = (uint **)(*puVar1 + iVar4 * 0xc);
    iVar4 = *(int *)(param_1 + 0x30);
    local_8 = CONCAT31(local_8._1_3_,1);
    local_28 = iVar4;
    if (iVar4 == 0) goto LAB_00408724;
  }
  else {
    if (*(uint ***)(param_1 + 0x30) == *(uint ***)(param_1 + 0x34)) {
      FUN_0063ddc0(1);
      ppuVar7 = extraout_EDX_01;
    }
    iVar4 = *(int *)(param_1 + 0x30);
    local_8 = CONCAT31(local_8._1_3_,2);
    local_28 = iVar4;
    if (iVar4 == 0) goto LAB_00408724;
    ppuVar5 = local_34;
  }
  iVar4 = local_28;
  FUN_004034c0(ppuVar5);
  ppuVar7 = extraout_EDX_02;
LAB_00408724:
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 0xc;
  if (puVar3 == (uint *)0x0) {
    ExceptionList = local_10;
    __security_check_cookie(local_24[4] ^ (uint)&stack0xfffffffc,ppuVar7,iVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(puVar3);
}


/* FUN_004088a0 @ 004088a0  kind=gamemisc  attributed-by=none  size=297 */

undefined4 FUN_004088a0(int param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f35c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = (int *)(param_1 + 0x2c);
  local_14 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*local_18 != *(int *)(param_1 + 0x30)) {
    pvVar1 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar5 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*local_18 != *(int *)(param_1 + 0x30)) {
    pvVar1 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar3 = 0;
  iVar4 = 0;
  iVar7 = 0;
  iVar6 = 0;
  iVar2 = 1;
  if (1 < DAT_00765074) {
    local_1c = DAT_00765074 + -1;
    do {
      iVar7 = iVar7 + iVar2;
      iVar3 = iVar3 + iVar2;
      iVar6 = iVar6 + 1 + iVar2;
      iVar4 = iVar4 + 1 + iVar2;
      iVar2 = iVar2 + 2;
    } while (iVar2 <= local_1c);
  }
  param_1 = iVar5;
  if (iVar2 <= DAT_00765074) {
    local_14 = local_14 + iVar2;
    param_1 = iVar5 + iVar2;
  }
  iVar5 = local_14 + iVar7 + iVar6;
  local_28 = (uint *)0x0;
  local_24 = 0;
  local_20 = 0;
  FUN_005870c0(4);
  *local_28 = (uint)(iVar5 <= param_1 + iVar3 + iVar4);
  local_8 = 0;
  FUN_0040d910(&local_28);
  if (local_28 != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_28);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_00408fc0 @ 00408fc0  kind=gamemisc  attributed-by=none  size=217 */

undefined4 * FUN_00408fc0(byte *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  int *in_ECX;
  byte *pbVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  bool bVar9;
  undefined4 *local_c;
  
  local_c = (undefined4 *)*in_ECX;
  if (*(char *)((int)local_c[1] + 0xd) == '\0') {
    uVar1 = *(uint *)(param_1 + 0x10);
    puVar7 = (undefined4 *)local_c[1];
    do {
      pbVar4 = (byte *)(puVar7 + 4);
      pbVar6 = param_1;
      if (0xf < *(uint *)(param_1 + 0x14)) {
        pbVar6 = *(byte **)param_1;
      }
      uVar2 = puVar7[8];
      if (0xf < (uint)puVar7[9]) {
        pbVar4 = *(byte **)pbVar4;
      }
      uVar5 = uVar1;
      if (uVar2 < uVar1) {
        uVar5 = uVar2;
      }
      if (uVar5 == 0) {
LAB_00409063:
        if (uVar1 <= uVar2) {
          uVar5 = (uint)(uVar2 != uVar1);
          goto LAB_00409070;
        }
LAB_0040907b:
        puVar8 = (undefined4 *)puVar7[2];
      }
      else {
        while (uVar3 = uVar5 - 4, 3 < uVar5) {
          if (*(int *)pbVar4 != *(int *)pbVar6) goto LAB_00409026;
          pbVar4 = pbVar4 + 4;
          pbVar6 = pbVar6 + 4;
          uVar5 = uVar3;
        }
        if (uVar3 == 0xfffffffc) {
LAB_0040905a:
          uVar5 = 0;
        }
        else {
LAB_00409026:
          bVar9 = *pbVar4 < *pbVar6;
          if ((*pbVar4 == *pbVar6) &&
             ((uVar3 == 0xfffffffd ||
              ((bVar9 = pbVar4[1] < pbVar6[1], pbVar4[1] == pbVar6[1] &&
               ((uVar3 == 0xfffffffe ||
                ((bVar9 = pbVar4[2] < pbVar6[2], pbVar4[2] == pbVar6[2] &&
                 ((uVar3 == 0xffffffff || (bVar9 = pbVar4[3] < pbVar6[3], pbVar4[3] == pbVar6[3]))))
                )))))))) goto LAB_0040905a;
          uVar5 = -(uint)bVar9 | 1;
        }
        if (uVar5 == 0) goto LAB_00409063;
LAB_00409070:
        if ((int)uVar5 < 0) goto LAB_0040907b;
        puVar8 = (undefined4 *)*puVar7;
        local_c = puVar7;
      }
      puVar7 = puVar8;
    } while (*(char *)((int)puVar8 + 0xd) == '\0');
  }
  return local_c;
}


/* FUN_0040a430 @ 0040a430  kind=gamemisc  attributed-by=none  size=141 */

/* WARNING: Removing unreachable block (ram,0x0040a4a5) */

undefined4 FUN_0040a430(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1658;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = 0;
  FUN_004054b0(param_2,&local_14);
  local_8 = 0;
  FUN_004022f0(0,0,&param_1,uVar1);
  ExceptionList = local_10;
  return 0;
}


/* FUN_0040ad70 @ 0040ad70  kind=gamemisc  attributed-by=none  size=426 */

/* WARNING: Removing unreachable block (ram,0x0040af06) */
/* WARNING: Removing unreachable block (ram,0x0040aef9) */

size_t FUN_0040ad70(int param_1,size_t param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void **ppvVar4;
  int *piVar5;
  undefined1 *puVar6;
  int iVar7;
  void *local_1c [4];
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e174a;
  local_1c[3] = ExceptionList;
  ExceptionList = local_1c + 3;
  iVar1 = *(int *)(param_1 + 0x50);
  iVar2 = *(int *)(param_1 + 0xc);
  FUN_0040d9d0(param_2);
  piVar5 = (int *)0x0;
  iVar7 = 0;
  local_8 = 0;
  if (0 < (int)param_2) {
    do {
      iVar3 = (*(int *)(param_1 + 0x50) - *(int *)(iVar2 + iVar1 * 4 + (int)piVar5)) + iVar7;
      iVar7 = iVar7 + 1;
      *piVar5 = iVar3;
      piVar5 = piVar5 + 1;
    } while (iVar7 < (int)param_2);
  }
  FUN_005870c0(param_2);
  puVar6 = (undefined1 *)0x0;
  local_8._0_1_ = 1;
  if (0 < (int)param_2) {
    do {
      *puVar6 = *(undefined1 *)((int)puVar6 * 4);
      puVar6 = puVar6 + 1;
    } while ((int)puVar6 < (int)param_2);
  }
  local_1c[0] = (void *)0x0;
  local_1c[1] = (void *)0x0;
  local_1c[2] = (void *)0x0;
  FUN_005870c0(param_2);
  local_8 = CONCAT31(local_8._1_3_,2);
  memcpy(local_1c[0],(void *)0x0,param_2);
  if ((local_1c < *(void ***)(param_1 + 0x30)) &&
     (ppvVar4 = *(void ***)(param_1 + 0x2c), ppvVar4 <= local_1c)) {
    if (*(int *)(param_1 + 0x30) == *(int *)(param_1 + 0x34)) {
      FUN_0063ddc0(1);
    }
    ppvVar4 = (void **)(*(int *)(param_1 + 0x2c) + (((int)local_1c - (int)ppvVar4) / 0xc) * 0xc);
    local_8 = CONCAT31(local_8._1_3_,3);
    if (*(int *)(param_1 + 0x30) == 0) goto LAB_0040aede;
  }
  else {
    if (*(void ***)(param_1 + 0x30) == *(void ***)(param_1 + 0x34)) {
      FUN_0063ddc0(1);
    }
    local_8 = CONCAT31(local_8._1_3_,4);
    if (*(int *)(param_1 + 0x30) == 0) goto LAB_0040aede;
    ppvVar4 = local_1c;
  }
  FUN_004034c0(ppvVar4);
LAB_0040aede:
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 0xc;
  if (local_1c[0] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c[0]);
  }
  ExceptionList = local_1c[3];
  return param_2;
}


/* FUN_0040af30 @ 0040af30  kind=gamemisc  attributed-by=none  size=362 */

/* WARNING: Removing unreachable block (ram,0x0040b083) */

int FUN_0040af30(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void **ppvVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  void *local_1c [4];
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e18d2;
  local_1c[3] = ExceptionList;
  ExceptionList = local_1c + 3;
  iVar5 = *(int *)(param_1 + 0x50);
  iVar1 = *(int *)(param_1 + 0xc);
  FUN_0040d9d0(param_2);
  piVar4 = (int *)0x0;
  iVar6 = 0;
  local_8 = 0;
  if (0 < param_2) {
    do {
      iVar2 = *(int *)(param_1 + 0x50) + iVar6;
      iVar6 = iVar6 + 1;
      *piVar4 = iVar2 - *(int *)(iVar1 + iVar5 * 4 + (int)piVar4);
      piVar4 = piVar4 + 1;
    } while (iVar6 < param_2);
  }
  local_1c[0] = (void *)0x0;
  local_1c[1] = (void *)0x0;
  local_1c[2] = (void *)0x0;
  FUN_005870c0(param_2);
  iVar5 = 0;
  local_8._0_1_ = 1;
  if (0 < param_2) {
    do {
      *(undefined1 *)((int)local_1c[0] + iVar5) = *(undefined1 *)(iVar5 * 4);
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_2);
  }
  if ((local_1c < *(void ***)(param_1 + 0x30)) &&
     (ppvVar3 = *(void ***)(param_1 + 0x2c), ppvVar3 <= local_1c)) {
    if (*(int *)(param_1 + 0x30) == *(int *)(param_1 + 0x34)) {
      FUN_0063ddc0(1);
    }
    ppvVar3 = (void **)(*(int *)(param_1 + 0x2c) + (((int)local_1c - (int)ppvVar3) / 0xc) * 0xc);
    local_8 = CONCAT31(local_8._1_3_,2);
    if (*(int *)(param_1 + 0x30) == 0) goto LAB_0040b06b;
  }
  else {
    if (*(void ***)(param_1 + 0x30) == *(void ***)(param_1 + 0x34)) {
      FUN_0063ddc0(1);
    }
    local_8 = CONCAT31(local_8._1_3_,3);
    if (*(int *)(param_1 + 0x30) == 0) goto LAB_0040b06b;
    ppvVar3 = local_1c;
  }
  FUN_004034c0(ppvVar3);
LAB_0040b06b:
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 0xc;
  if (local_1c[0] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c[0]);
  }
  ExceptionList = local_1c[3];
  return param_2;
}


/* FUN_0040b0c0 @ 0040b0c0  kind=gamemisc  attributed-by=none  size=410 */

/* WARNING: Removing unreachable block (ram,0x0040b198) */
/* WARNING: Removing unreachable block (ram,0x0040b1a0) */
/* WARNING: Removing unreachable block (ram,0x0040b246) */

int FUN_0040b0c0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  void **ppvVar3;
  int *piVar4;
  int iVar5;
  void *local_20 [3];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e17a2;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x50) * 4;
  FUN_0040d9d0(param_2);
  piVar4 = (int *)0x0;
  iVar5 = 0;
  local_8 = 0;
  if (0 < param_2) {
    do {
      iVar2 = (DAT_0076af00 - *(int *)(local_14 + (int)piVar4)) + *(int *)(param_1 + 0x50) + iVar5;
      iVar5 = iVar5 + 1;
      *piVar4 = iVar2;
      piVar4 = piVar4 + 1;
    } while (iVar5 < param_2);
  }
  local_20[0] = (void *)0x0;
  local_20[1] = (void *)0x0;
  local_20[2] = (void *)0x0;
  FUN_005870c0(0);
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar5 = FUN_0040bef0(local_20,param_1,uVar1);
  if (iVar5 != 0) {
    param_2 = -0x20;
    goto LAB_0040b232;
  }
  if ((local_20 < *(void ***)(param_1 + 0x30)) &&
     (ppvVar3 = *(void ***)(param_1 + 0x2c), ppvVar3 <= local_20)) {
    if (*(int *)(param_1 + 0x30) == *(int *)(param_1 + 0x34)) {
      FUN_0063ddc0(1);
    }
    ppvVar3 = (void **)(*(int *)(param_1 + 0x2c) + (((int)local_20 - (int)ppvVar3) / 0xc) * 0xc);
    local_8 = CONCAT31(local_8._1_3_,2);
    if (*(int *)(param_1 + 0x30) != 0) {
LAB_0040b228:
      FUN_004034c0(ppvVar3);
    }
  }
  else {
    if (*(void ***)(param_1 + 0x30) == *(void ***)(param_1 + 0x34)) {
      FUN_0063ddc0(1);
    }
    local_8 = CONCAT31(local_8._1_3_,3);
    if (*(int *)(param_1 + 0x30) != 0) {
      ppvVar3 = local_20;
      goto LAB_0040b228;
    }
  }
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 0xc;
LAB_0040b232:
  if (local_20[0] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_20[0]);
  }
  ExceptionList = local_10;
  return param_2;
}


/* FUN_0040b810 @ 0040b810  kind=gamemisc  attributed-by=none  size=466 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0040b810(undefined4 param_1,undefined4 param_2,float param_3)

{
  uint uVar1;
  void **ppvVar2;
  int iStack_e4;
  basic_iostream<char,std::char_traits<char>_> local_e0;
  basic_streambuf<char,std::char_traits<char>_> local_c8 [2];
  basic_iostream<char,std::char_traits<char>_> local_c0 [2];
  undefined4 local_90;
  undefined4 local_8c;
  code *local_78 [18];
  undefined4 local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e186d;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_e0.vbtablePtr =
       (basic_iostream<char,std::char_traits<char>_>_vbtable *)
       &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vbtable
  ;
  local_e0.basic_ostream<char,std::char_traits<char>_>.vbtablePtr =
       (basic_ostream<char,std::char_traits<char>_>_vbtable *)&DAT_006fcd08;
  local_78[0] = _vftable__exref;
  local_8 = 0;
  local_30 = 1;
  local_14 = uVar1;
  std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
            (&local_e0,(basic_streambuf<char,std::char_traits<char>_> *)local_c8);
  local_8 = 1;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((int)&local_e0.vbtablePtr +
   (local_e0.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((int)&iStack_e4 + (local_e0.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset)
       = (local_e0.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            (local_c8);
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
  local_c8[0] = (basic_streambuf<char,std::char_traits<char>_>)
                &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  local_90 = 0;
  local_8c = 0;
  local_8 = 3;
  FUN_00401ff0(&local_e0.basic_ostream<char,std::char_traits<char>_>,param_2,uVar1);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            (&local_e0.basic_ostream<char,std::char_traits<char>_>,param_3);
  ppvVar2 = (void **)FUN_0040e140(local_2c);
  if (ppvVar2 != &DAT_00765030) {
    if (0xf < DAT_00765044) {
                    /* WARNING: Subroutine does not return */
      operator_delete(DAT_00765030);
    }
    DAT_00765044 = 0xf;
    _DAT_00765040 = 0;
    DAT_00765030 = (void *)((uint)DAT_00765030 & 0xffffff00);
    FUN_00405060(ppvVar2);
  }
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((int)&local_e0.vbtablePtr +
   (local_e0.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((int)&iStack_e4 + (local_e0.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset)
       = (local_e0.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
  local_c8[0] = (basic_streambuf<char,std::char_traits<char>_>)
                &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  FUN_0040b4e0();
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (local_c8);
  std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
            (local_c0);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
            ((basic_ios<char,std::char_traits<char>_> *)local_78);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0040bb90 @ 0040bb90  kind=gamemisc  attributed-by=none  size=30 */

void FUN_0040bb90(uint *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = (uint)(*param_1 == 0);
  }
  return;
}


/* FUN_0040bbc0 @ 0040bbc0  kind=gamemisc  attributed-by=none  size=381 */

/* WARNING: Removing unreachable block (ram,0x0040bc76) */
/* WARNING: Removing unreachable block (ram,0x0040bc80) */
/* WARNING: Removing unreachable block (ram,0x0040bd26) */

int FUN_0040bbc0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void **ppvVar4;
  int *piVar5;
  int iVar6;
  void *local_1c [4];
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e18d2;
  local_1c[3] = ExceptionList;
  ExceptionList = local_1c + 3;
  iVar1 = *(int *)(param_1 + 0x50);
  iVar2 = *(int *)(param_1 + 0xc);
  param_2 = param_2 - param_3;
  FUN_0040d9d0(param_2);
  piVar5 = (int *)0x0;
  iVar6 = 0;
  local_8 = 0;
  if (0 < param_2) {
    do {
      iVar3 = (*(int *)(param_1 + 0x50) - *(int *)(iVar2 + iVar1 * 4 + (int)piVar5)) + iVar6;
      iVar6 = iVar6 + 1;
      *piVar5 = iVar3;
      piVar5 = piVar5 + 1;
    } while (iVar6 < param_2);
  }
  local_1c[0] = (void *)0x0;
  local_1c[1] = (void *)0x0;
  local_1c[2] = (void *)0x0;
  FUN_005870c0(0);
  local_8._0_1_ = 1;
  if ((local_1c < *(void ***)(param_1 + 0x30)) &&
     (ppvVar4 = *(void ***)(param_1 + 0x2c), ppvVar4 <= local_1c)) {
    if (*(int *)(param_1 + 0x30) == *(int *)(param_1 + 0x34)) {
      FUN_0063ddc0(1);
    }
    ppvVar4 = (void **)(*(int *)(param_1 + 0x2c) + (((int)local_1c - (int)ppvVar4) / 0xc) * 0xc);
    local_8 = CONCAT31(local_8._1_3_,2);
    if (*(int *)(param_1 + 0x30) == 0) goto LAB_0040bd0e;
  }
  else {
    if (*(void ***)(param_1 + 0x30) == *(void ***)(param_1 + 0x34)) {
      FUN_0063ddc0(1);
    }
    local_8 = CONCAT31(local_8._1_3_,3);
    if (*(int *)(param_1 + 0x30) == 0) goto LAB_0040bd0e;
    ppvVar4 = local_1c;
  }
  FUN_004034c0(ppvVar4);
LAB_0040bd0e:
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 0xc;
  if (local_1c[0] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c[0]);
  }
  ExceptionList = local_1c[3];
  return param_2;
}


/* FUN_0040bef0 @ 0040bef0  kind=gamemisc  attributed-by=none  size=184 */

int FUN_0040bef0(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  iVar8 = 0;
  iVar5 = 0;
  if ((0 < (int)DAT_00765008) && (7 < DAT_00765008)) {
    iVar12 = 0;
    iVar13 = 0;
    iVar14 = 0;
    iVar15 = 0;
    iVar8 = 0;
    iVar9 = 0;
    iVar10 = 0;
    iVar11 = 0;
    uVar6 = DAT_00765008 & 0x80000007;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffff8) + 1;
    }
    piVar7 = (int *)&DAT_0076af20;
    do {
      iVar5 = iVar5 + 8;
      iVar12 = iVar12 + piVar7[-4];
      iVar13 = iVar13 + piVar7[-3];
      iVar14 = iVar14 + piVar7[-2];
      iVar15 = iVar15 + piVar7[-1];
      iVar1 = *piVar7;
      piVar2 = piVar7 + 1;
      piVar3 = piVar7 + 2;
      piVar4 = piVar7 + 3;
      piVar7 = piVar7 + 8;
      iVar8 = iVar8 + iVar1;
      iVar9 = iVar9 + *piVar2;
      iVar10 = iVar10 + *piVar3;
      iVar11 = iVar11 + *piVar4;
    } while (iVar5 < (int)(DAT_00765008 - uVar6));
    iVar8 = iVar8 + iVar12 + iVar10 + iVar14 + iVar9 + iVar13 + iVar11 + iVar15;
  }
  iVar9 = 0;
  iVar10 = 0;
  if (iVar5 < (int)DAT_00765008) {
    if (1 < (int)(DAT_00765008 - iVar5)) {
      do {
        iVar9 = iVar9 + *(int *)(&DAT_0076af10 + iVar5 * 4);
        iVar10 = iVar10 + *(int *)(iVar5 * 4 + 0x76af14);
        iVar5 = iVar5 + 2;
      } while (iVar5 < (int)(DAT_00765008 - 1));
    }
    if (iVar5 < (int)DAT_00765008) {
      iVar8 = iVar8 + *(int *)(&DAT_0076af10 + iVar5 * 4);
    }
    iVar8 = iVar8 + iVar10 + iVar9;
  }
  return DAT_0076af00 * iVar8;
}


/* FUN_0040c0a0 @ 0040c0a0  kind=gamemisc  attributed-by=none  size=279 */

void FUN_0040c0a0(int *param_1,uint param_2,uint param_3)

{
  int *in_ECX;
  int *_Dst;
  uint uVar1;
  
  if ((uint)param_1[4] < param_2) {
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("invalid string position");
  }
  uVar1 = param_1[4] - param_2;
  if (param_3 < uVar1) {
    uVar1 = param_3;
  }
  if (in_ECX == param_1) {
    uVar1 = uVar1 + param_2;
    if ((uint)in_ECX[4] < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::_Xout_of_range("invalid string position");
    }
    in_ECX[4] = uVar1;
    if (0xf < (uint)in_ECX[5]) {
      *(undefined1 *)(uVar1 + *in_ECX) = 0;
      FUN_0040cb00(0,param_2);
      return;
    }
    *(undefined1 *)(uVar1 + (int)in_ECX) = 0;
    FUN_0040cb00(0,param_2);
    return;
  }
  if (uVar1 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("string too long");
  }
  if ((uint)in_ECX[5] < uVar1) {
    FUN_004054f0(uVar1,in_ECX[4]);
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
  if (0xf < (uint)param_1[5]) {
    param_1 = (int *)*param_1;
  }
  _Dst = in_ECX;
  if (0xf < (uint)in_ECX[5]) {
    _Dst = (int *)*in_ECX;
  }
  if (uVar1 != 0) {
    memcpy(_Dst,(void *)((int)param_1 + param_2),uVar1);
  }
  in_ECX[4] = uVar1;
  if ((uint)in_ECX[5] < 0x10) {
    *(undefined1 *)((int)in_ECX + uVar1) = 0;
    return;
  }
  *(undefined1 *)(*in_ECX + uVar1) = 0;
  return;
}


/* FUN_0040c280 @ 0040c280  kind=gamemisc  attributed-by=none  size=247 */

void FUN_0040c280(int *param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  int *in_ECX;
  
  if (param_1 != (int *)0x0) {
    uVar1 = in_ECX[5];
    piVar2 = in_ECX;
    if (0xf < uVar1) {
      piVar2 = (int *)*in_ECX;
    }
    if (piVar2 <= param_1) {
      piVar2 = in_ECX;
      if (0xf < uVar1) {
        piVar2 = (int *)*in_ECX;
      }
      if (param_1 < (int *)(in_ECX[4] + (int)piVar2)) {
        if (0xf < uVar1) {
          FUN_0040c0a0(in_ECX,(int)param_1 - *in_ECX,param_2);
          return;
        }
        FUN_0040c0a0(in_ECX,(int)param_1 - (int)in_ECX,param_2);
        return;
      }
    }
  }
  if (param_2 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("string too long");
  }
  if ((uint)in_ECX[5] < param_2) {
    FUN_004054f0(param_2,in_ECX[4]);
    if (param_2 == 0) {
      return;
    }
  }
  else if (param_2 == 0) {
    in_ECX[4] = 0;
    if (0xf < (uint)in_ECX[5]) {
      *(undefined1 *)*in_ECX = 0;
      return;
    }
    *(undefined1 *)in_ECX = 0;
    return;
  }
  piVar2 = in_ECX;
  if (0xf < (uint)in_ECX[5]) {
    piVar2 = (int *)*in_ECX;
  }
  if (param_2 != 0) {
    memcpy(piVar2,param_1,param_2);
  }
  in_ECX[4] = param_2;
  if ((uint)in_ECX[5] < 0x10) {
    *(undefined1 *)((int)in_ECX + param_2) = 0;
    return;
  }
  *(undefined1 *)(*in_ECX + param_2) = 0;
  return;
}


/* FUN_0040c520 @ 0040c520  kind=gamemisc  attributed-by=none  size=100 */

uint FUN_0040c520(uint param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  undefined4 *in_ECX;
  
  if ((uint)in_ECX[4] < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("invalid string position");
  }
  uVar1 = in_ECX[4] - param_1;
  if (uVar1 < param_2) {
    param_2 = uVar1;
  }
  if (0xf < (uint)in_ECX[5]) {
    in_ECX = (undefined4 *)*in_ECX;
  }
  uVar1 = param_4;
  if (param_2 < param_4) {
    uVar1 = param_2;
  }
  uVar1 = FUN_0040c590((int)in_ECX + param_1,param_3,uVar1);
  if (uVar1 == 0) {
    if (param_2 < param_4) {
      return 0xffffffff;
    }
    uVar1 = (uint)(param_2 != param_4);
  }
  return uVar1;
}


/* FUN_0040cb00 @ 0040cb00  kind=gamemisc  attributed-by=none  size=155 */

void FUN_0040cb00(uint param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  int *in_ECX;
  int iVar3;
  
  uVar1 = in_ECX[4];
  if (uVar1 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("invalid string position");
  }
  if (param_2 < uVar1 - param_1) {
    if (param_2 != 0) {
      piVar2 = in_ECX;
      if (0xf < (uint)in_ECX[5]) {
        piVar2 = (int *)*in_ECX;
      }
      iVar3 = uVar1 - param_2;
      if (iVar3 - param_1 != 0) {
        memmove((void *)((int)piVar2 + param_1),(void *)((int)((int)piVar2 + param_1) + param_2),
                iVar3 - param_1);
      }
      in_ECX[4] = iVar3;
      if (0xf < (uint)in_ECX[5]) {
        *(undefined1 *)(*in_ECX + iVar3) = 0;
        return;
      }
      *(undefined1 *)((int)in_ECX + iVar3) = 0;
    }
    return;
  }
  in_ECX[4] = param_1;
  if ((uint)in_ECX[5] < 0x10) {
    *(undefined1 *)((int)in_ECX + param_1) = 0;
    return;
  }
  *(undefined1 *)(*in_ECX + param_1) = 0;
  return;
}


/* FUN_0040cba0 @ 0040cba0  kind=gamemisc  attributed-by=none  size=33 */

float10 FUN_0040cba0(float param_1)

{
  return (float10)ABS(param_1);
}


/* FUN_0040d9d0 @ 0040d9d0  kind=gamemisc  attributed-by=none  size=146 */

void FUN_0040d9d0(uint param_1)

{
  void *_Dst;
  void *_Src;
  void *pvVar1;
  int *in_ECX;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  _Src = (void *)in_ECX[1];
  pvVar1 = (void *)*in_ECX;
  uVar2 = (int)_Src - (int)pvVar1 >> 2;
  if (param_1 < uVar2) {
    _Dst = (void *)((int)pvVar1 + param_1 * 4);
    if (_Dst == pvVar1) {
      in_ECX[1] = (int)pvVar1;
      return;
    }
    if (_Dst != _Src) {
      memmove(_Dst,_Src,0);
      in_ECX[1] = (int)_Dst;
      return;
    }
  }
  else if (uVar2 < param_1) {
    FUN_0063dc90(param_1 - uVar2);
    puVar4 = (undefined4 *)in_ECX[1];
    iVar3 = param_1 - ((int)puVar4 - *in_ECX >> 2);
    if (iVar3 != 0) {
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
    }
    in_ECX[1] = in_ECX[1] + (param_1 - (in_ECX[1] - *in_ECX >> 2)) * 4;
  }
  return;
}


/* FUN_0040e030 @ 0040e030  kind=gamemisc  attributed-by=none  size=240 */

void FUN_0040e030(void)

{
  uint uVar1;
  int in_ECX;
  uint uVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar3;
  undefined4 uVar4;
  void *local_20 [4];
  undefined4 local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  uVar4 = 0;
  if (((*(uint *)(in_ECX + 0x3c) & 2) == 0) && (uVar1 = **(uint **)(in_ECX + 0x20), uVar1 != 0)) {
    uVar2 = *(uint *)(in_ECX + 0x38);
    if (*(uint *)(in_ECX + 0x38) < uVar1) {
      uVar2 = uVar1;
    }
    local_c = 0xf;
    local_10 = 0;
    local_20[0] = (void *)((uint)local_20[0]._1_3_ << 8);
    FUN_0040c280(**(int **)(in_ECX + 0x10),uVar2 - **(int **)(in_ECX + 0x10));
    FUN_004032e0(local_20);
    uVar3 = extraout_EDX;
    if (0xf < local_c) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_20[0]);
    }
  }
  else {
    if (((*(uint *)(in_ECX + 0x3c) & 4) == 0) && (**(int **)(in_ECX + 0x1c) != 0)) {
      local_c = 0xf;
      local_10 = 0;
      local_20[0] = (void *)((uint)local_20[0]._1_3_ << 8);
      FUN_0040c280(**(int **)(in_ECX + 0xc),
                   (**(int **)(in_ECX + 0x2c) + **(int **)(in_ECX + 0x1c)) -
                   **(int **)(in_ECX + 0xc));
    }
    else {
      local_c = 0xf;
      local_10 = 0;
      local_20[0] = (void *)((uint)local_20[0]._1_3_ << 8);
    }
    FUN_004032e0(local_20);
    uVar3 = extraout_EDX_00;
    if (0xf < local_c) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_20[0]);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,uVar3,uVar4);
  return;
}


/* FUN_0040e140 @ 0040e140  kind=gamemisc  attributed-by=none  size=31 */

undefined4 FUN_0040e140(undefined4 param_1)

{
  FUN_0040e030(param_1);
  return param_1;
}


/* FUN_0040ea30 @ 0040ea30  kind=gamemisc  attributed-by=none  size=20 */

void FUN_0040ea30(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  return;
}


/* FUN_0040ea90 @ 0040ea90  kind=gamemisc  attributed-by=none  size=38 */

void FUN_0040ea90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  in_ECX[2] = param_3;
  return;
}


/* FUN_0040eac0 @ 0040eac0  kind=gamemisc  attributed-by=none  size=48 */

void FUN_0040eac0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  in_ECX[2] = param_3;
  in_ECX[3] = param_4;
  return;
}


/* FUN_0040eb60 @ 0040eb60  kind=gamemisc  attributed-by=none  size=96 */

void FUN_0040eb60(short *param_1)

{
  short sVar1;
  undefined2 *in_ECX;
  short *psVar2;
  
  *(undefined4 *)(in_ECX + 10) = 7;
  *(undefined4 *)(in_ECX + 8) = 0;
  *in_ECX = 0;
  if (*param_1 == 0) {
    FUN_0040f7a0(param_1,0);
    return;
  }
  psVar2 = param_1;
  do {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  FUN_0040f7a0(param_1,(int)psVar2 - (int)(param_1 + 1) >> 1);
  return;
}


/* FUN_0040ee70 @ 0040ee70  kind=gamemisc  attributed-by=none  size=163 */

void FUN_0040ee70(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *in_ECX;
  undefined1 *puVar2;
  int iVar3;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  in_ECX[0xc] = param_1[0xc];
  in_ECX[0xd] = param_1[0xd];
  in_ECX[0xe] = param_1[0xe];
  *(undefined2 *)(in_ECX + 0x10) = *(undefined2 *)(param_1 + 0x10);
  iVar3 = 0x1f;
  puVar2 = param_1 + 0x17;
  puVar1 = in_ECX + 0x16;
  do {
    iVar3 = iVar3 + -1;
    puVar1[-2] = puVar2[-3];
    puVar1[-1] = puVar2[-2];
    *puVar1 = puVar1[(int)param_1 - (int)in_ECX];
    puVar1[1] = *puVar2;
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(puVar2 + 1);
    puVar2 = puVar2 + 8;
    puVar1 = puVar1 + 8;
  } while (-1 < iVar3);
  *(undefined4 *)(in_ECX + 0x114) = *(undefined4 *)(param_1 + 0x114);
  return;
}


/* FUN_0040ef20 @ 0040ef20  kind=gamemisc  attributed-by=none  size=43 */

void FUN_0040ef20(void)

{
  int *piVar1;
  bool bVar2;
  int *in_ECX;
  
  bVar2 = std::uncaught_exception();
  if (!bVar2) {
    std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::_Osfx
              ((basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)*in_ECX);
  }
  piVar1 = *(int **)(*(int *)(*(int *)*in_ECX + 4) + 0x38 + *in_ECX);
  if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0040ef47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


/* FUN_0040f650 @ 0040f650  kind=gamemisc  attributed-by=none  size=48 */

void * FUN_0040f650(uint param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    return (void *)0x0;
  }
  if ((param_1 < 0x80000000) && (pvVar1 = operator_new(param_1 * 2), pvVar1 != (void *)0x0)) {
    return pvVar1;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_alloc();
}


/* FUN_0040f680 @ 0040f680  kind=gamemisc  attributed-by=none  size=273 */

void FUN_0040f680(int *param_1,uint param_2,uint param_3)

{
  int *in_ECX;
  int *_Dst;
  uint uVar1;
  
  if ((uint)param_1[4] < param_2) {
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("invalid string position");
  }
  uVar1 = param_1[4] - param_2;
  if (param_3 < uVar1) {
    uVar1 = param_3;
  }
  if (in_ECX == param_1) {
    uVar1 = uVar1 + param_2;
    if ((uint)in_ECX[4] < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::_Xout_of_range("invalid string position");
    }
    in_ECX[4] = uVar1;
    if (7 < (uint)in_ECX[5]) {
      in_ECX = (int *)*in_ECX;
    }
    *(undefined2 *)((int)in_ECX + uVar1 * 2) = 0;
    FUN_00411270(0,param_2);
    return;
  }
  if (0x7ffffffe < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("string too long");
  }
  if ((uint)in_ECX[5] < uVar1) {
    FUN_0040f170(uVar1,in_ECX[4]);
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
  if (7 < (uint)param_1[5]) {
    param_1 = (int *)*param_1;
  }
  _Dst = in_ECX;
  if (7 < (uint)in_ECX[5]) {
    _Dst = (int *)*in_ECX;
  }
  if (uVar1 != 0) {
    memcpy(_Dst,(void *)((int)param_1 + param_2 * 2),uVar1 * 2);
  }
  in_ECX[4] = uVar1;
  if ((uint)in_ECX[5] < 8) {
    *(undefined2 *)((int)in_ECX + uVar1 * 2) = 0;
    return;
  }
  *(undefined2 *)(*in_ECX + uVar1 * 2) = 0;
  return;
}


/* FUN_00411340 @ 00411340  kind=gamemisc  attributed-by=none  size=189 */

void FUN_00411340(void)

{
  int iVar1;
  float10 fVar2;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_0040f570();
  if (iVar1 == 0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  FUN_006294d0(&local_10);
  fVar2 = (float10)FUN_00627ce0();
  if ((float)fVar2 - 30.0 < local_c) {
    fVar2 = (float10)FUN_00627ce0();
    if (local_c < (float)fVar2) {
      fVar2 = (float10)FUN_00627d50();
      if ((local_10 < (float)fVar2 * 0.5) && (0.0 < local_10)) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00411d40 @ 00411d40  kind=gamemisc  attributed-by=none  size=164 */

void FUN_00411d40(float *param_1,float *param_2,int param_3,float param_4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  iVar2 = 0;
  if (3 < param_3) {
    iVar1 = (param_3 - 4U >> 2) + 1;
    iVar2 = iVar1 * 4;
    do {
      fVar3 = (*param_2 - *param_1) * param_4 + *param_1;
      *param_1 = fVar3;
      fVar3 = (*param_2 - fVar3) * param_4 + fVar3;
      *param_1 = fVar3;
      fVar3 = (*param_2 - fVar3) * param_4 + fVar3;
      *param_1 = fVar3;
      *param_1 = (*param_2 - fVar3) * param_4 + fVar3;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (iVar2 < param_3) {
    param_3 = param_3 - iVar2;
    do {
      *param_1 = (*param_2 - *param_1) * param_4 + *param_1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}


/* FUN_00411df0 @ 00411df0  kind=gamemisc  attributed-by=none  size=22 */

void FUN_00411df0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  return;
}


/* FUN_00411e30 @ 00411e30  kind=gamemisc  attributed-by=none  size=28 */

void FUN_00411e30(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  return;
}


/* FUN_00412080 @ 00412080  kind=gamemisc  attributed-by=none  size=25 */

void FUN_00412080(uint param_1)

{
  int *in_ECX;
  
  *in_ECX = param_1 << 0x10;
  in_ECX[1] = ((int)param_1 >> 0x1f) << 0x10 | param_1 >> 0x10;
  return;
}


/* FUN_00412120 @ 00412120  kind=gamemisc  attributed-by=none  size=70 */

void FUN_00412120(float *param_1,float *param_2)

{
  float *in_ECX;
  
  *param_1 = *param_2 * *in_ECX;
  param_1[1] = param_2[1] * in_ECX[1];
  param_1[2] = param_2[2] * in_ECX[2];
  param_1[3] = param_2[3] * in_ECX[3];
  return;
}


/* FUN_004121c0 @ 004121c0  kind=gamemisc  attributed-by=none  size=55 */

void FUN_004121c0(float *param_1,float *param_2)

{
  float *in_ECX;
  
  *param_1 = *in_ECX - *param_2;
  param_1[1] = in_ECX[1] - param_2[1];
  param_1[2] = in_ECX[2] - param_2[2];
  return;
}


/* FUN_00412200 @ 00412200  kind=gamemisc  attributed-by=none  size=28 */

void FUN_00412200(int *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *in_ECX;
  
  uVar1 = *in_ECX;
  uVar2 = *param_2;
  uVar3 = in_ECX[1];
  uVar4 = param_2[1];
  *param_1 = uVar1 - *param_2;
  param_1[1] = (uVar3 - uVar4) - (uint)(uVar1 < uVar2);
  return;
}


/* FUN_00412260 @ 00412260  kind=gamemisc  attributed-by=none  size=27 */

void FUN_00412260(int *param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  iVar2 = in_ECX[1];
  *param_1 = -iVar1;
  param_1[1] = -(iVar2 + (uint)(iVar1 != 0));
  return;
}


/* FUN_004122c0 @ 004122c0  kind=gamemisc  attributed-by=none  size=30 */

void FUN_004122c0(int *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *in_ECX;
  
  uVar1 = *param_2;
  uVar2 = *in_ECX;
  uVar3 = param_2[1];
  uVar4 = in_ECX[1];
  *param_1 = uVar1 + *in_ECX;
  param_1[1] = uVar3 + uVar4 + (uint)CARRY4(uVar1,uVar2);
  return;
}


/* FUN_00412350 @ 00412350  kind=gamemisc  attributed-by=none  size=54 */

float10 FUN_00412350(float *param_1)

{
  float *in_ECX;
  
  return (float10)(param_1[1] * in_ECX[1] + *param_1 * *in_ECX + param_1[2] * in_ECX[2]);
}


/* FUN_00412390 @ 00412390  kind=gamemisc  attributed-by=none  size=97 */

float * FUN_00412390(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *in_ECX;
  
  fVar1 = *param_2;
  fVar2 = *in_ECX;
  fVar3 = param_2[2];
  fVar4 = param_2[1];
  *param_1 = in_ECX[1] * param_2[2] - in_ECX[2] * param_2[1];
  fVar5 = in_ECX[1];
  param_1[1] = fVar1 * in_ECX[2] - fVar2 * fVar3;
  param_1[2] = fVar2 * fVar4 - fVar1 * fVar5;
  return param_1;
}


/* FUN_004127c0 @ 004127c0  kind=gamemisc  attributed-by=none  size=69 */

void FUN_004127c0(float *param_1)

{
  float *in_ECX;
  
  *in_ECX = *param_1 * *in_ECX;
  in_ECX[1] = param_1[1] * in_ECX[1];
  in_ECX[2] = param_1[2] * in_ECX[2];
  in_ECX[3] = param_1[3] * in_ECX[3];
  return;
}


/* FUN_00412810 @ 00412810  kind=gamemisc  attributed-by=none  size=63 */

void FUN_00412810(float param_1)

{
  float *in_ECX;
  
  *in_ECX = *in_ECX * param_1;
  in_ECX[1] = param_1 * in_ECX[1];
  in_ECX[2] = in_ECX[2] * param_1;
  in_ECX[3] = param_1 * in_ECX[3];
  return;
}


/* FUN_00423f70 @ 00423f70  kind=gamemisc  attributed-by=none  size=282 */

float10 FUN_00423f70(float param_1,float param_2,float param_3)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  
  fVar1 = (param_1 / 180.0) * 3.1415927;
  dVar2 = (double)fVar1;
  libm_sse2_cos_precise();
  dVar3 = (double)fVar1;
  libm_sse2_sin_precise();
  fVar1 = (param_2 / 180.0) * 3.1415927;
  dVar4 = (double)fVar1;
  libm_sse2_cos_precise();
  dVar5 = (double)fVar1;
  libm_sse2_sin_precise();
  fVar1 = (float)dVar5 * (float)dVar2 - (float)dVar4 * (float)dVar3;
  fVar6 = 1.0;
  if ((1.0 < fVar1) || (fVar6 = -1.0, fVar1 < -1.0)) {
    fVar1 = fVar6;
  }
  dVar2 = (double)fVar1;
  libm_sse2_asin_precise();
  return (float10)((float)dVar2 * ((param_3 * 180.0) / 3.1415927) + param_1);
}


/* FUN_00424d40 @ 00424d40  kind=gamemisc  attributed-by=none  size=89 */

void FUN_00424d40(void)

{
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> *this;
  int *piVar1;
  bool bVar2;
  int *unaff_EBX;
  int unaff_EBP;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EBP + -4) = 1;
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::setstate
            ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
             (*(int *)(*unaff_EBX + 4) + (int)unaff_EBX),unaff_EDI,false);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  bVar2 = std::uncaught_exception();
  this = *(basic_ostream<wchar_t,std::char_traits<wchar_t>_> **)(unaff_EBP + -0x20);
  if (!bVar2) {
    std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::_Osfx(this);
  }
  piVar1 = *(int **)((int)&this[0xe].vbtablePtr +
                    this->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* FUN_00424da0 @ 00424da0  kind=gamemisc  attributed-by=none  size=164 */

void FUN_00424da0(char *param_1,char *param_2)

{
  uint uVar1;
  char cVar2;
  undefined4 *in_ECX;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1c80;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = in_ECX[4];
  uVar3 = (int)param_2 - (int)param_1;
  if (((uVar1 <= uVar3) && (in_ECX[5] != uVar3)) && (cVar2 = FUN_0040f300(uVar3,1), cVar2 != '\0'))
  {
    in_ECX[4] = uVar1;
    if (7 < (uint)in_ECX[5]) {
      in_ECX = (undefined4 *)*in_ECX;
    }
    *(undefined2 *)((int)in_ECX + uVar1 * 2) = 0;
  }
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    FUN_00425390(1,(short)*param_1);
  }
  ExceptionList = local_10;
  return;
}


/* FUN_00427910 @ 00427910  kind=gamemisc  attributed-by=none  size=198 */

void FUN_00427910(float param_1,float param_2,float param_3,float param_4)

{
  float *in_ECX;
  double dVar1;
  
  dVar1 = (double)(param_1 * 0.5);
  libm_sse2_tan_precise();
  *in_ECX = (1.0 / (float)dVar1) / param_2;
  in_ECX[4] = 0.0;
  in_ECX[8] = 0.0;
  in_ECX[0xc] = 0.0;
  in_ECX[1] = 0.0;
  in_ECX[5] = 1.0 / (float)dVar1;
  in_ECX[9] = 0.0;
  in_ECX[0xd] = 0.0;
  in_ECX[2] = 0.0;
  in_ECX[6] = 0.0;
  in_ECX[10] = param_4 / (param_4 - param_3);
  in_ECX[0xe] = -((param_3 * param_4) / (param_4 - param_3));
  in_ECX[3] = 0.0;
  in_ECX[7] = 0.0;
  in_ECX[0xb] = 1.0;
  in_ECX[0xf] = 0.0;
  return;
}


/* FUN_00427a80 @ 00427a80  kind=gamemisc  attributed-by=none  size=48 */

void FUN_00427a80(undefined4 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    param_1 = param_1 + 3;
  }
  return;
}


/* FUN_00428750 @ 00428750  kind=gamemisc  attributed-by=none  size=346 */

void FUN_00428750(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0xffff0000;
  *(undefined1 *)(in_ECX + 1) = 0xff;
  *(undefined2 *)((int)in_ECX + 6) = 0;
  in_ECX[2] = 0x3f800000;
  in_ECX[3] = 0x3f800000;
  in_ECX[4] = 0x3f800000;
  in_ECX[9] = 0x3f8147ae;
  in_ECX[10] = 0x3f800000;
  in_ECX[0xb] = 0x3f800000;
  in_ECX[0xc] = 0x3f7ae148;
  in_ECX[0xd] = 0x3f800000;
  in_ECX[0xe] = 0x3f733333;
  in_ECX[0xf] = 0x3f4ccccd;
  in_ECX[0x10] = 0x3f800000;
  in_ECX[0x11] = 0x3f800000;
  in_ECX[0x12] = 0;
  *(undefined2 *)(in_ECX + 5) = 0xffff;
  *(undefined2 *)((int)in_ECX + 0x16) = 0xffff;
  *(undefined2 *)(in_ECX + 6) = 0xffff;
  *(undefined2 *)((int)in_ECX + 0x1a) = 0xffff;
  *(undefined2 *)(in_ECX + 7) = 0xffff;
  *(undefined2 *)((int)in_ECX + 0x1e) = 0xffff;
  *(undefined2 *)(in_ECX + 8) = 0xffff;
  *(undefined2 *)((int)in_ECX + 0x22) = 0xffff;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0xc0a00000;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0x3f000000;
  in_ECX[0x1e] = 0x40a00000;
  in_ECX[0x1f] = 0x40c00000;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0x40400000;
  in_ECX[0x23] = 0x3f800000;
  in_ECX[0x24] = 0xc1280000;
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0xc1000000;
  in_ECX[0x27] = 0x40000000;
  in_ECX[0x28] = 0;
  in_ECX[0x29] = 0;
  in_ECX[0x2a] = 0;
  return;
}


/* FUN_00428940 @ 00428940  kind=gamemisc  attributed-by=none  size=41 */

undefined1 FUN_00428940(int param_1)

{
  char *in_ECX;
  int iVar1;
  
  iVar1 = 0;
  param_1 = param_1 - (int)in_ECX;
  do {
    if (*in_ECX != in_ECX[param_1]) {
      return 1;
    }
    iVar1 = iVar1 + 1;
    in_ECX = in_ECX + 1;
  } while (iVar1 < 3);
  return 0;
}


/* FUN_0042bd90 @ 0042bd90  kind=gamemisc  attributed-by=none  size=109 */

void FUN_0042bd90(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x194) = 0;
  *(undefined4 *)(in_ECX + 0x18c) = 0;
  *(undefined4 *)(in_ECX + 400) = 0;
  *(undefined4 *)(in_ECX + 0x19c) = 0;
  *(undefined4 *)(in_ECX + 0x198) = 0;
  *(undefined2 *)(in_ECX + 0x1a0) = 0xc8ff;
  *(undefined1 *)(in_ECX + 0x1a2) = 0x32;
  *(undefined2 *)(in_ECX + 0x1a3) = 0xffff;
  *(undefined1 *)(in_ECX + 0x1a5) = 0xff;
  return;
}


/* FUN_0042c460 @ 0042c460  kind=gamemisc  attributed-by=none  size=64 */

void FUN_0042c460(void)

{
  int in_ECX;
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = 0;
  do {
    uVar2 = FUN_0068d946();
    *(int *)(in_ECX + iVar1 * 8) = (int)uVar2;
    *(int *)(in_ECX + 4 + iVar1 * 8) = (int)((ulonglong)uVar2 >> 0x20);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return;
}


/* FUN_0042c500 @ 0042c500  kind=gamemisc  attributed-by=none  size=26 */

void FUN_0042c500(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  in_ECX[2] = param_3;
  return;
}


/* FUN_0042c520 @ 0042c520  kind=gamemisc  attributed-by=none  size=34 */

void FUN_0042c520(void)

{
  undefined1 *in_ECX;
  
  *in_ECX = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  return;
}


/* FUN_0042c5b0 @ 0042c5b0  kind=gamemisc  attributed-by=none  size=46 */

void FUN_0042c5b0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  return;
}


/* FUN_0042c680 @ 0042c680  kind=gamemisc  attributed-by=none  size=52 */

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


/* FUN_0042c800 @ 0042c800  kind=gamemisc  attributed-by=none  size=85 */

uint * FUN_0042c800(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *in_ECX;
  
  *param_1 = *in_ECX;
  param_1[1] = in_ECX[1];
  param_1[2] = in_ECX[2];
  param_1[3] = in_ECX[3];
  param_1[4] = in_ECX[4];
  param_1[5] = in_ECX[5];
  uVar3 = *param_2;
  uVar2 = *param_1;
  *param_1 = *param_1 + uVar3;
  param_1[1] = param_1[1] + param_2[1] + (uint)CARRY4(uVar2,uVar3);
  uVar3 = param_2[2];
  puVar1 = param_1 + 2;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  param_1[3] = param_1[3] + param_2[3] + (uint)CARRY4(uVar2,uVar3);
  uVar3 = param_2[4];
  puVar1 = param_1 + 4;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  param_1[5] = param_1[5] + param_2[5] + (uint)CARRY4(uVar2,uVar3);
  return param_1;
}


/* FUN_0042f040 @ 0042f040  kind=gamemisc  attributed-by=none  size=191 */

void FUN_0042f040(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2[5];
  if ((iVar1 < 1) && (iVar1 < 0)) {
    iVar1 = __alldiv(param_2[4],iVar1,0x10000,0);
    iVar1 = iVar1 + -1;
  }
  else {
    iVar1 = __alldiv(param_2[4],iVar1,0x10000,0);
  }
  iVar2 = param_2[3];
  if ((iVar2 < 1) && (iVar2 < 0)) {
    iVar2 = __alldiv(param_2[2],iVar2,0x10000,0);
    iVar2 = iVar2 + -1;
  }
  else {
    iVar2 = __alldiv(param_2[2],iVar2,0x10000,0);
  }
  iVar3 = param_2[1];
  if ((iVar3 < 1) && (iVar3 < 0)) {
    iVar3 = __alldiv(*param_2,iVar3,0x10000,0);
    param_1[1] = iVar2;
    param_1[2] = iVar1;
    *param_1 = iVar3 + -1;
    return;
  }
  iVar3 = __alldiv(*param_2,iVar3,0x10000,0);
  param_1[1] = iVar2;
  param_1[2] = iVar1;
  *param_1 = iVar3;
  return;
}


/* FUN_0042f4a0 @ 0042f4a0  kind=gamemisc  attributed-by=none  size=197 */

undefined4 FUN_0042f4a0(char *param_1)

{
  int iVar1;
  char cVar2;
  char *in_ECX;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  
  if ((((((*in_ECX != *param_1) || (in_ECX[1] != param_1[1])) ||
        (*(int *)(in_ECX + 4) != *(int *)(param_1 + 4))) ||
       ((in_ECX[0xe] != param_1[0xe] || (*(int *)(in_ECX + 8) != *(int *)(param_1 + 8))))) ||
      ((in_ECX[0xc] != param_1[0xc] ||
       ((*(short *)(in_ECX + 0x10) != *(short *)(param_1 + 0x10) || (in_ECX[0xd] != param_1[0xd]))))
      )) || (iVar1 = *(int *)(in_ECX + 0x114), iVar1 != *(int *)(param_1 + 0x114))) {
    return 0;
  }
  iVar4 = 0;
  if (0 < iVar1) {
    pcVar3 = param_1 + 0x14;
    pcVar5 = in_ECX + 0x17;
    do {
      if (*pcVar5 != pcVar5[(int)param_1 - (int)in_ECX]) {
        return 0;
      }
      cVar2 = FUN_00428940(pcVar3);
      if (cVar2 != '\0') {
        return 0;
      }
      iVar4 = iVar4 + 1;
      pcVar3 = pcVar3 + 8;
      pcVar5 = pcVar5 + 8;
    } while (iVar4 < iVar1);
  }
  return 1;
}


/* FUN_0042f730 @ 0042f730  kind=gamemisc  attributed-by=none  size=174 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0042f730(int param_1)

{
  int in_ECX;
  
  if (param_1 < 0) {
    if ((DAT_0076afcc & 1) == 0) {
      DAT_0076afcc = DAT_0076afcc | 1;
    }
    _DAT_0076afc8 = 0;
    _DAT_0076afca = 0x100;
    return &DAT_0076afc8;
  }
  if (*(int *)(in_ECX + 0x1c) <= param_1) {
    if ((DAT_0076afcc & 2) == 0) {
      DAT_0076afcc = DAT_0076afcc | 2;
    }
    _DAT_0076afd0 = 0xffff;
    DAT_0076afd2 = 0xff;
    DAT_0076afd3 = 0;
    return &DAT_0076afd0;
  }
  return (undefined *)(*(int *)(in_ECX + 0x18) + param_1 * 4);
}


/* FUN_0042f860 @ 0042f860  kind=gamemisc  attributed-by=none  size=175 */

void FUN_0042f860(uint param_1,int param_2,uint param_3,int param_4,uint param_5,int param_6,
                 undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  
  if ((param_2 < 1) && (param_2 < 0)) {
    bVar4 = 0xffff < param_1;
    param_1 = param_1 - 0x10000;
    param_2 = param_2 + -1 + (uint)bVar4;
  }
  if ((param_4 < 1) && (param_4 < 0)) {
    bVar4 = 0xffff < param_3;
    param_3 = param_3 - 0x10000;
    param_4 = param_4 + -1 + (uint)bVar4;
  }
  if ((param_6 < 1) && (param_6 < 0)) {
    bVar4 = 0xffff < param_5;
    param_5 = param_5 - 0x10000;
    param_6 = param_6 + -1 + (uint)bVar4;
  }
  uVar1 = __alldiv(param_5,param_6,0x10000,0);
  uVar2 = __alldiv(param_3,param_4,0x10000,0);
  uVar3 = __alldiv(param_1,param_2,0x10000,0);
  FUN_0042f7e0(uVar3,uVar2,uVar1,param_7);
  return;
}


/* FUN_00434b80 @ 00434b80  kind=gamemisc  attributed-by=none  size=144 */

void FUN_00434b80(float param_1,float param_2)

{
  float *in_ECX;
  
  in_ECX[0xc] = in_ECX[4] * param_2 + *in_ECX * param_1 + in_ECX[0xc];
  in_ECX[0xd] = in_ECX[1] * param_1 + in_ECX[5] * param_2 + in_ECX[0xd];
  in_ECX[0xe] = in_ECX[2] * param_1 + in_ECX[6] * param_2 + in_ECX[0xe];
  in_ECX[0xf] = in_ECX[3] * param_1 + in_ECX[7] * param_2 + in_ECX[0xf];
  return;
}


/* FUN_00434d10 @ 00434d10  kind=gamemisc  attributed-by=none  size=120 */

undefined4 FUN_00434d10(uint param_1,uint param_2)

{
  int iVar1;
  
  if ((((-1 < (int)param_1) && (-1 < (int)param_2)) && ((int)param_1 < 0x10000)) &&
     ((int)param_2 < 0x10000)) {
    iVar1 = FUN_00434a90((int)(param_1 + ((int)param_1 >> 0x1f & 0x3fU)) >> 6,
                         (int)(param_2 + ((int)param_2 >> 0x1f & 0x3fU)) >> 6);
    if (iVar1 != 0) {
      param_1 = param_1 & 0x8000003f;
      if ((int)param_1 < 0) {
        param_1 = (param_1 - 1 | 0xffffffc0) + 1;
      }
      param_2 = param_2 & 0x8000003f;
      if ((int)param_2 < 0) {
        param_2 = (param_2 - 1 | 0xffffffc0) + 1;
      }
      return *(undefined4 *)(iVar1 + 0x10018 + (param_1 * 0x40 + param_2) * 4);
    }
  }
  return 0;
}


/* FUN_004391d0 @ 004391d0  kind=gamemisc  attributed-by=none  size=61 */

bool FUN_004391d0(int param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  
  if (*param_2 == 0) {
    iVar2 = 0;
  }
  else {
    psVar3 = param_2;
    do {
      sVar1 = *psVar3;
      psVar3 = psVar3 + 1;
    } while (sVar1 != 0);
    iVar2 = (int)psVar3 - (int)(param_2 + 1) >> 1;
  }
  iVar2 = FUN_00428db0(0,*(undefined4 *)(param_1 + 0x10),param_2,iVar2);
  return iVar2 != 0;
}


/* FUN_00439600 @ 00439600  kind=gamemisc  attributed-by=none  size=54 */

void FUN_00439600(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x20);
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


/* FUN_0043a270 @ 0043a270  kind=gamemisc  attributed-by=none  size=382 */

void FUN_0043a270(undefined4 *param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *in_ECX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar5 = param_2;
  uVar2 = (uint)param_1;
  uVar1 = in_ECX[4];
  if ((uVar1 < param_1) || ((uint)param_2[4] < param_3)) {
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("invalid string position");
  }
  uVar3 = param_2[4] - param_3;
  if (uVar3 < param_4) {
    param_4 = uVar3;
  }
  if (param_4 < -uVar1 - 1) {
    if (param_4 != 0) {
      uVar3 = uVar1 + param_4;
      if (0x7ffffffe < uVar3) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("string too long");
      }
      if ((uint)in_ECX[5] < uVar3) {
        FUN_0040f170(uVar3,uVar1);
        if (uVar3 == 0) {
          return;
        }
      }
      else if (uVar3 == 0) {
        in_ECX[4] = 0;
        if ((uint)in_ECX[5] < 8) {
          *(undefined2 *)in_ECX = 0;
          return;
        }
        *(undefined2 *)*in_ECX = 0;
        return;
      }
      puVar4 = in_ECX;
      param_2 = in_ECX;
      if (7 < (uint)in_ECX[5]) {
        param_2 = (undefined4 *)*in_ECX;
        puVar4 = (undefined4 *)*in_ECX;
      }
      if (in_ECX[4] - (int)param_1 != 0) {
        memmove((void *)((int)puVar4 + ((int)param_1 + param_4) * 2),
                (void *)((int)param_2 + (int)param_1 * 2),(in_ECX[4] - (int)param_1) * 2);
      }
      if (in_ECX == puVar5) {
        if (param_1 < param_3) {
          param_3 = param_3 + param_4;
        }
        param_1 = in_ECX;
        if (7 < (uint)in_ECX[5]) {
          param_1 = (undefined4 *)*in_ECX;
          in_ECX = (undefined4 *)*in_ECX;
        }
        if (param_4 != 0) {
          memmove((void *)((int)in_ECX + uVar2 * 2),(void *)((int)param_1 + param_3 * 2),param_4 * 2
                 );
        }
      }
      else {
        if (7 < (uint)puVar5[5]) {
          puVar5 = (undefined4 *)*puVar5;
        }
        if (7 < (uint)in_ECX[5]) {
          in_ECX = (undefined4 *)*in_ECX;
        }
        if (param_4 != 0) {
          memcpy((void *)((int)in_ECX + (int)param_1 * 2),(void *)((int)puVar5 + param_3 * 2),
                 param_4 * 2);
        }
      }
      FUN_0040f2d0(uVar3);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("string too long");
}


/* FUN_0043abc0 @ 0043abc0  kind=gamemisc  attributed-by=none  size=37 */

void FUN_0043abc0(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint *in_ECX;
  
  uVar1 = *in_ECX;
  uVar2 = in_ECX[1];
  *param_1 = uVar1 + param_2 * -0x10000;
  param_1[1] = (uVar2 - (((int)param_2 >> 0x1f) << 0x10 | param_2 >> 0x10)) -
               (uint)(uVar1 < param_2 * 0x10000);
  return;
}


/* FUN_0043b610 @ 0043b610  kind=gamemisc  attributed-by=none  size=44 */

void FUN_0043b610(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  in_ECX[2] = param_3;
  in_ECX[3] = param_4;
  in_ECX[4] = param_5;
  in_ECX[5] = param_6;
  return;
}


/* FUN_0043c870 @ 0043c870  kind=gamemisc  attributed-by=none  size=47 */

void FUN_0043c870(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x18);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0043c87e. Too many branches */
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


/* FUN_0043c8e0 @ 0043c8e0  kind=gamemisc  attributed-by=none  size=54 */

void FUN_0043c8e0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x14);
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


/* FUN_0043ca60 @ 0043ca60  kind=gamemisc  attributed-by=none  size=53 */

float10 FUN_0043ca60(float param_1)

{
  return (float10)(1.0 - 1.0 / ((param_1 - 1.0) * 0.05 + 1.0));
}


/* FUN_0043d1a0 @ 0043d1a0  kind=gamemisc  attributed-by=none  size=2086 */

int FUN_0043d1a0(void)

{
  int in_ECX;
  int iVar1;
  int iVar2;
  float10 fVar3;
  float fVar4;
  float fVar5;
  
  switch(*(undefined1 *)(in_ECX + 0x68)) {
  case 0:
  case 8:
  case 0xb:
  case 0x1c:
  case 0x32:
  case 0x37:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x60:
  case 0x62:
  case 0x68:
    iVar1 = 0;
    goto LAB_0043d510;
  case 1:
  case 9:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 300.0;
    break;
  case 2:
  case 3:
  case 4:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 100.0;
    break;
  case 5:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 100.0;
    break;
  case 6:
  case 7:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 50.0;
    break;
  case 10:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 100.0;
    break;
  case 0xc:
  case 0x10:
  case 0x43:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 200.0;
    break;
  case 0xd:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 200.0;
    break;
  case 0xe:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 100.0;
    break;
  case 0xf:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 200.0;
    break;
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 100.0;
    break;
  case 0x16:
    fVar3 = (float10)FUN_00447700();
    goto LAB_0043d4f8;
  case 0x17:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 50.0;
    break;
  case 0x18:
  case 0x19:
  case 0x1b:
  case 0x24:
  case 0x3b:
  case 0x3f:
  case 0x40:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 50.0;
    break;
  case 0x1a:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 300.0;
    break;
  default:
    fVar3 = (float10)FUN_00447700();
LAB_0043d4f8:
    fVar5 = (float)fVar3;
    fVar4 = 400.0;
    break;
  case 0x1e:
  case 0x20:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 800.0;
    break;
  case 0x1f:
  case 0x21:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 1600.0;
    break;
  case 0x22:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 1600.0;
    break;
  case 0x25:
  case 0x2b:
  case 0x59:
    if (*(char *)(in_ECX + 0xaa9) == '\f') {
      fVar3 = (float10)FUN_00447700();
      fVar5 = (float)fVar3;
      fVar4 = 600.0;
    }
    else {
      fVar3 = (float10)FUN_00447700();
      fVar5 = (float)fVar3;
      fVar4 = 1200.0;
    }
    break;
  case 0x26:
  case 0x2c:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 500.0;
    break;
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 200.0;
    break;
  case 0x2d:
  case 0x2e:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 1200.0;
    break;
  case 0x30:
  case 0x65:
    iVar1 = 100;
    goto LAB_0043d510;
  case 0x36:
    iVar1 = 400;
    goto LAB_0043d510;
  case 0x39:
  case 0x3a:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 800.0;
    break;
  case 0x41:
  case 0x42:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 300.0;
    break;
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 300.0;
    break;
  case 0x47:
  case 0x48:
    iVar1 = 200;
    goto LAB_0043d510;
  case 0x57:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 5000.0;
    break;
  case 0x5b:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 1000.0;
    break;
  case 0x5d:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 800.0;
    break;
  case 0x5e:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 500.0;
    break;
  case 0x5f:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 1000.0;
    break;
  case 0x69:
    iVar1 = 5000;
    goto LAB_0043d510;
  }
  iVar1 = (int)(fVar4 / (fVar5 * *(float *)(in_ECX + 0x17c)));
LAB_0043d510:
  switch(*(undefined1 *)(in_ECX + 0x68)) {
  case 0:
  case 0x31:
    iVar2 = 0;
    break;
  case 1:
  case 2:
  case 9:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 200.0;
    goto LAB_0043d7f4;
  case 3:
  case 4:
  case 0x3e:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 100.0;
    goto LAB_0043d7f4;
  case 5:
  case 0xc:
  case 0x10:
  case 0x11:
  case 0x41:
  case 0x42:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 400.0;
    goto LAB_0043d7f4;
  case 6:
  case 7:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 150.0;
    goto LAB_0043d7f4;
  default:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    goto LAB_0043d7ec;
  case 10:
    iVar2 = 200;
    break;
  case 0xb:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    goto LAB_0043d7ec;
  case 0xd:
  case 0xe:
  case 0xf:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 200.0;
    goto LAB_0043d7f4;
  case 0x12:
  case 0x13:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 150.0;
    goto LAB_0043d7f4;
  case 0x14:
  case 0x15:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 400.0;
    goto LAB_0043d7f4;
  case 0x16:
    fVar3 = (float10)FUN_00447700();
    iVar2 = (int)(50.0 / ((float)fVar3 * *(float *)(in_ECX + 0x17c)));
    break;
  case 0x17:
    fVar3 = (float10)FUN_00447700();
    iVar2 = (int)(50.0 / ((float)fVar3 * *(float *)(in_ECX + 0x17c)));
    break;
  case 0x1a:
    fVar3 = (float10)FUN_00447700();
    iVar2 = (int)(1200.0 / ((float)fVar3 * *(float *)(in_ECX + 0x17c)));
    break;
  case 0x1e:
  case 0x20:
  case 0x49:
  case 0x5d:
    iVar2 = 600;
    break;
  case 0x1f:
  case 0x21:
    iVar2 = 0x4b0;
    break;
  case 0x22:
    fVar3 = (float10)FUN_00447700();
    iVar2 = (int)(1200.0 / ((float)fVar3 * *(float *)(in_ECX + 0x17c)));
    break;
  case 0x25:
  case 0x2b:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 100.0;
    goto LAB_0043d7f4;
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2c:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    goto LAB_0043d7ec;
  case 0x2d:
  case 0x2e:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 500.0;
    goto LAB_0043d7f4;
  case 0x32:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x60:
    iVar2 = 500;
    break;
  case 0x36:
    iVar2 = 100;
    break;
  case 0x37:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 500.0;
    goto LAB_0043d7f4;
  case 0x43:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 200.0;
    goto LAB_0043d7f4;
  case 0x44:
  case 0x45:
    iVar2 = 1000;
    break;
  case 0x47:
    iVar2 = 3000;
    break;
  case 0x48:
  case 0x56:
    iVar2 = 5000;
    break;
  case 0x4b:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    goto LAB_0043d7ec;
  case 0x5b:
    iVar2 = 6000;
    break;
  case 0x5e:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 500.0;
    goto LAB_0043d7f4;
  case 0x5f:
    iVar2 = 2000;
    break;
  case 0x68:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
LAB_0043d7ec:
    fVar4 = 300.0;
LAB_0043d7f4:
    iVar2 = (int)(fVar4 / (fVar5 * *(float *)(in_ECX + 0x17c)));
  }
  switch(*(undefined1 *)(in_ECX + 0x68)) {
  case 0:
  case 0x32:
  case 0x60:
    return iVar2 + 100 + iVar1;
  default:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 500.0;
    break;
  case 3:
  case 4:
  case 5:
  case 0x3e:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 300.0;
    break;
  case 7:
  case 0xe:
  case 0x12:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 200.0;
    break;
  case 10:
    return iVar2 + 600 + iVar1;
  case 0xb:
  case 0x3c:
  case 0x3d:
  case 0x68:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 100.0;
    break;
  case 0xf:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 400.0;
    break;
  case 0x16:
  case 0x1a:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x5e:
  case 0x5f:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 100.0;
    break;
  case 0x17:
    fVar3 = (float10)FUN_00447700();
    return (int)(10.0 / ((float)fVar3 * *(float *)(in_ECX + 0x17c))) + iVar2 + iVar1;
  case 0x30:
    return iVar2 + iVar1;
  case 0x36:
    return iVar2 + 400 + iVar1;
  case 0x39:
  case 0x3a:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 300.0;
    break;
  case 0x41:
  case 0x42:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 200.0;
    break;
  case 0x43:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 100.0;
    break;
  case 0x44:
  case 0x45:
  case 0x5d:
    fVar3 = (float10)FUN_00447700();
    fVar5 = (float)fVar3;
    fVar4 = 800.0;
    break;
  case 0x47:
  case 0x48:
    return iVar2 + 200 + iVar1;
  }
  return (int)(fVar4 / (fVar5 * *(float *)(in_ECX + 0x17c))) + iVar2 + iVar1;
}


/* FUN_0043e350 @ 0043e350  kind=gamemisc  attributed-by=none  size=194 */

undefined4 FUN_0043e350(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x68) != '0') {
    iVar2 = FUN_0043d1a0();
    if (((((((((*(int *)(in_ECX + 0x6c) < iVar2) &&
              (cVar1 = *(char *)(in_ECX + 0x68), cVar1 != '\0')) && (cVar1 != 'b')) &&
            ((cVar1 != 'e' && (cVar1 != 'V')))) &&
           ((cVar1 != '\n' && ((cVar1 != '\x02' && (cVar1 != '\x01')))))) && (cVar1 != '\t')) &&
         (((((cVar1 != '\x04' && (cVar1 != '\x03')) && (cVar1 != '\r')) &&
           (((cVar1 != '\x0e' && (cVar1 != '\x0f')) &&
            ((cVar1 != '\x12' && ((cVar1 != '\x13' && (cVar1 != '\a')))))))) &&
          ((cVar1 != '\x06' && (((cVar1 != '\x10' && (cVar1 != '\f')) && (cVar1 != '9')))))))) &&
        ((((cVar1 != ':' && (cVar1 != 'C')) &&
          (((cVar1 != 'A' && ((cVar1 != 'B' && (cVar1 != '\x16')))) && (cVar1 != '\x1a')))) &&
         ((((cVar1 != '%' && (cVar1 != '.')) && (cVar1 != '-')) &&
          ((cVar1 != '\x1f' && (cVar1 != '!')))))))) &&
       ((cVar1 != '\"' && ((cVar1 != '\x1c' && (cVar1 != '\x1d')))))) {
      return 0;
    }
    if (*(float *)(in_ECX + 0x144) <= 0.0) {
      return 1;
    }
  }
  return 0;
}


/* FUN_0043e550 @ 0043e550  kind=gamemisc  attributed-by=none  size=74 */

bool FUN_0043e550(char *param_1)

{
  int in_ECX;
  int iVar1;
  
  if (*param_1 == '\x19') {
    iVar1 = *(int *)(in_ECX + 0x1164);
    if (100 < iVar1) {
      iVar1 = iVar1 + (iVar1 / 100) * -100 + 100;
    }
    return *(int *)(param_1 + 4) == iVar1;
  }
  return true;
}


/* FUN_0043e5a0 @ 0043e5a0  kind=gamemisc  attributed-by=none  size=141 */

bool FUN_0043e5a0(int param_1)

{
  int iVar1;
  int in_ECX;
  float10 extraout_ST0;
  float local_8;
  
  iVar1 = param_1;
  if ((*(int *)(in_ECX + 300) < 1) || (param_1 == 0x65)) {
    FUN_00444ae0(param_1,0xffffffff);
    local_8 = (float)extraout_ST0;
    if (local_8 < *(float *)(in_ECX + 0x170) || local_8 == *(float *)(in_ECX + 0x170)) {
      FUN_0043f720(&local_8,&param_1);
      if ((local_8 == *(float *)(in_ECX + 0x139c)) || (*(int *)((int)local_8 + 0x14) == 0)) {
        if (iVar1 != 0x1c) {
          return true;
        }
        return 0.0 < *(float *)(in_ECX + 0x170);
      }
    }
  }
  return false;
}


/* FUN_0043ec90 @ 0043ec90  kind=gamemisc  attributed-by=none  size=34 */

float10 FUN_0043ec90(undefined4 param_1)

{
  switch(param_1) {
  case 5:
  case 0x1a:
    return (float10)0.5;
  default:
    return (float10)1;
  case 0x15:
  case 0x48:
    return (float10)0.1;
  case 0x1e:
  case 0x20:
    return (float10)0.4;
  case 0x1f:
  case 0x21:
    return (float10)0.6;
  case 0x25:
  case 0x2b:
  case 0x39:
  case 0x3a:
  case 0x44:
    return (float10)2.0;
  case 0x37:
    return (float10)0.25;
  }
}


/* FUN_0043f720 @ 0043f720  kind=gamemisc  attributed-by=none  size=76 */

void FUN_0043f720(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *in_ECX;
  undefined4 *puVar5;
  
  puVar1 = (undefined4 *)*in_ECX;
  puVar5 = puVar1;
  if (*(char *)((int)puVar1[1] + 0xd) == '\0') {
    puVar3 = (undefined4 *)puVar1[1];
    do {
      if ((int)puVar3[4] < *param_2) {
        puVar4 = (undefined4 *)puVar3[2];
      }
      else {
        puVar4 = (undefined4 *)*puVar3;
        puVar5 = puVar3;
      }
      puVar3 = puVar4;
    } while (*(char *)((int)puVar4 + 0xd) == '\0');
  }
  if ((puVar5 == puVar1) || (iVar2 = *param_2, param_2 = puVar5, iVar2 < (int)puVar5[4])) {
    param_2 = puVar1;
  }
  *param_1 = (int)param_2;
  return;
}


/* FUN_0043f7c0 @ 0043f7c0  kind=gamemisc  attributed-by=none  size=17600 */

/* WARNING: Removing unreachable block (ram,0x0043f8b5) */
/* WARNING: Removing unreachable block (ram,0x0043f8dc) */
/* WARNING: Removing unreachable block (ram,0x0043f906) */
/* WARNING: Removing unreachable block (ram,0x0043f91b) */
/* WARNING: Removing unreachable block (ram,0x0043f8f1) */
/* WARNING: Removing unreachable block (ram,0x0043f8c7) */
/* WARNING: Removing unreachable block (ram,0x0043f899) */
/* WARNING: Removing unreachable block (ram,0x0043f930) */

void FUN_0043f7c0(uint *param_1,int param_2,undefined4 *param_3)

{
  undefined2 uVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  short sVar8;
  bool bVar9;
  float fVar10;
  ushort local_2c;
  undefined1 local_2a;
  undefined4 local_28;
  undefined1 local_24;
  int local_20;
  int local_1c;
  ushort local_18;
  undefined1 local_16;
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0xffff;
  local_16 = 0xff;
  if (param_3 == (undefined4 *)0x0) {
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    local_2c = CONCAT11((char)iVar5,(char)iVar6);
    local_18 = local_2c;
    local_16 = (char)iVar4;
    local_20 = rand();
    local_20 = local_20 % 100;
    iVar4 = rand();
    param_3 = &local_28;
    local_1c = iVar4 % 100;
  }
  else {
    switch(*param_3) {
    case 0:
      uVar7 = (*(byte *)(param_3 + 1) & 0x80000001) + 2;
      break;
    case 1:
      uVar7 = *(byte *)(param_3 + 1) & 0x80000001;
      break;
    case 2:
      uVar7 = (*(byte *)(param_3 + 1) & 0x80000001) + 9;
      break;
    case 3:
      uVar7 = (*(byte *)(param_3 + 1) & 0x80000001) + 0xb;
      break;
    case 4:
      uVar7 = (*(byte *)(param_3 + 1) & 0x80000001) + 4;
      break;
    case 5:
      uVar7 = (*(byte *)(param_3 + 1) & 0x80000001) + 7;
      break;
    case 6:
      uVar7 = (*(byte *)(param_3 + 1) & 0x80000001) + 0xf;
      break;
    case 7:
      uVar7 = (*(byte *)(param_3 + 1) & 0x80000001) + 0xd;
      break;
    default:
      goto switchD_0043f887_default;
    }
    *param_1 = uVar7;
  }
switchD_0043f887_default:
  *(undefined4 *)(param_2 + 8) = 0x3f75c290;
  *(undefined4 *)(param_2 + 0xc) = 0x3f75c290;
  *(undefined4 *)(param_2 + 0x10) = 0x400a3d71;
  switch(*param_1) {
  case 0:
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_3 + 0x11);
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_3 + 0x12);
    uVar7 = param_3[2] & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    *(short *)(param_2 + 0x14) = (short)uVar7 + 0x4d4;
    *(short *)(param_2 + 0x16) = (short)((int)param_3[3] % 10) + 0x500;
    *(undefined4 *)(param_2 + 0x1a) = 0x101b0;
    *(undefined2 *)(param_2 + 0x18) = 0x1ae;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 1:
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_3 + 0x11);
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_3 + 0x12);
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 6) + 0x4d8;
    sVar3 = 0x1ae;
    *(short *)(param_2 + 0x16) = (short)((int)param_3[3] % 10) + 0x50a;
    *(undefined4 *)(param_2 + 0x1a) = 0x1b0;
    goto LAB_0043fa27;
  case 2:
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_3 + 0x11);
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_3 + 0x12);
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 6) + 0x4de;
    sVar3 = 0x4e0;
    sVar8 = (short)((int)param_3[3] % 0xf) + 0x4e4;
    goto LAB_0043fa0e;
  case 3:
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_3 + 0x11);
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_3 + 0x12);
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 6) + 0x4f3;
    sVar3 = 0x4f5;
    sVar8 = (short)((int)param_3[3] % 7) + 0x4f9;
LAB_0043fa0e:
    *(short *)(param_2 + 0x16) = sVar8;
    *(undefined4 *)(param_2 + 0x1a) = 0x101b0;
    sVar3 = (sVar3 < *(short *)(param_2 + 0x14)) + 0x1ae;
    goto LAB_0043fa27;
  case 4:
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_3 + 0x11);
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_3 + 0x12);
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 5) + 0x4b;
    sVar3 = (short)((int)param_3[3] % 6) + 0x50;
    goto LAB_0043fc25;
  case 5:
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_3 + 0x11);
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_3 + 0x12);
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 5) + 0x56;
    sVar3 = (short)((int)param_3[3] % 6) + 0x5b;
LAB_0043fc25:
    *(short *)(param_2 + 0x16) = sVar3;
    *(undefined4 *)(param_2 + 0x1a) = 0x1b0;
    *(undefined2 *)(param_2 + 0x18) = 0x61;
    *(undefined4 *)(param_2 + 0x38) = 0x3f99999a;
    goto LAB_0043fc40;
  case 6:
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    local_2c = CONCAT11((char)iVar5,(char)iVar6);
    *(ushort *)(param_2 + 2) = local_2c;
    *(char *)(param_2 + 4) = (char)iVar4;
    iVar4 = rand();
    *(short *)(param_2 + 0x14) = (short)(iVar4 % 3) + 0x94b;
    *(undefined4 *)(param_2 + 0x1a) = 0x1b0;
    *(undefined2 *)(param_2 + 0x18) = 0x1af;
    *(undefined4 *)(param_2 + 0x70) = 0;
    *(undefined4 *)(param_2 + 0x74) = 0x40400000;
    *(undefined4 *)(param_2 + 0x78) = 0x40a00000;
    *(undefined4 *)(param_2 + 0x24) = 0x3f666666;
    *(undefined4 *)(param_2 + 0x38) = 0x3f99999a;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 7:
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_3 + 0x11);
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_3 + 0x12);
    uVar7 = param_3[2] & 0x80000001;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
    }
    *(short *)(param_2 + 0x14) = (short)uVar7 + 0x62;
    goto LAB_0043fd91;
  case 8:
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_3 + 0x11);
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_3 + 0x12);
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 5) + 0x6a;
LAB_0043fd91:
    sVar3 = 0x6f;
    *(short *)(param_2 + 0x16) = (short)((int)param_3[3] % 6) + 100;
    *(int *)(param_2 + 0x1a) = (int)L"downbutton" + 1;
    goto LAB_0043fa27;
  case 9:
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_3 + 0x11);
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_3 + 0x12);
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 5) + 0x11a;
    *(short *)(param_2 + 0x16) = (short)((int)param_3[3] % 3) + 0x11f;
    *(undefined4 *)(param_2 + 0x1a) = 0x12c01b0;
    goto LAB_0044007b;
  case 10:
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_3 + 0x11);
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_3 + 0x12);
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 5) + 0x122;
    *(short *)(param_2 + 0x16) = (short)((int)param_3[3] % 5) + 0x127;
    *(undefined4 *)(param_2 + 0x1a) = 0x12d01b0;
LAB_0044007b:
    *(undefined2 *)(param_2 + 0x18) = 0x1ae;
    *(undefined4 *)(param_2 + 0x38) = 0x3f99999a;
    *(undefined4 *)(param_2 + 0x24) = 0x3f666666;
    goto LAB_0043fc40;
  case 0xb:
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_3 + 0x11);
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_3 + 0x12);
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 5) + 0x514;
    *(short *)(param_2 + 0x16) = (short)((int)param_3[3] % 10) + 0x51e;
    *(undefined4 *)(param_2 + 0x1a) = 0x1b0;
    *(undefined2 *)(param_2 + 0x18) = 0x12e;
    *(undefined4 *)(param_2 + 0x40) = 0x3f99999a;
    *(undefined4 *)(param_2 + 0x24) = 0x3f666666;
    goto LAB_00440137;
  case 0xc:
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_3 + 0x11);
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_3 + 0x12);
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 5) + 0x519;
    uVar7 = param_3[3] & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    *(short *)(param_2 + 0x16) = (short)uVar7 + 0x528;
    *(undefined4 *)(param_2 + 0x1a) = 0x1b0;
    *(undefined2 *)(param_2 + 0x18) = 0x12e;
    *(undefined4 *)(param_2 + 0x40) = 0x3f8ccccd;
    *(undefined4 *)(param_2 + 0x24) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x28) = 0x3f733333;
    *(undefined4 *)(param_2 + 0x70) = 0;
    *(undefined4 *)(param_2 + 0x74) = 0x3fc00000;
    *(undefined4 *)(param_2 + 0x78) = 0x40800000;
LAB_00440137:
    *(undefined4 *)(param_2 + 8) = 0x3f851eb8;
    *(undefined4 *)(param_2 + 0xc) = 0x3f851eb8;
    *(undefined4 *)(param_2 + 0x10) = 0x4015c28f;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0xd:
    local_2c = 0xffff;
    *(undefined2 *)(param_2 + 2) = 0xffff;
    *(undefined1 *)(param_2 + 4) = 0xff;
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 5) + 0x52c;
    sVar3 = 0x53e;
    *(short *)(param_2 + 0x16) = (short)((int)param_3[3] % 5) + 0x531;
    *(undefined4 *)(param_2 + 0x1a) = 0x101b0;
    goto LAB_0043fa27;
  case 0xe:
    local_2c = 0xffff;
    *(undefined2 *)(param_2 + 2) = 0xffff;
    *(undefined1 *)(param_2 + 4) = 0xff;
    uVar7 = param_3[2] & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    *(short *)(param_2 + 0x14) = (short)uVar7 + 0x536;
    uVar7 = param_3[3] & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    *(short *)(param_2 + 0x16) = (short)uVar7 + 0x53a;
    *(undefined4 *)(param_2 + 0x1a) = 0x101b0;
    sVar3 = 0x53e;
    goto LAB_0043fa27;
  case 0xf:
    FUN_00428920(param_3 + 4);
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 6) + 0x12f;
    *(short *)(param_2 + 0x16) = (short)((int)param_3[3] % 6) + 0x135;
    *(undefined4 *)(param_2 + 0x1a) = 0x1b0;
    *(undefined2 *)(param_2 + 0x18) = 0x147;
    *(undefined4 *)(param_2 + 0x24) = 0x3f666666;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x10:
    FUN_00428920(param_3 + 4);
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 6) + 0x13b;
    *(short *)(param_2 + 0x16) = (short)((int)param_3[3] % 6) + 0x141;
    *(undefined4 *)(param_2 + 0x1a) = 0x1b0;
    *(undefined2 *)(param_2 + 0x18) = 0x147;
    *(undefined4 *)(param_2 + 0x24) = 0x3f666666;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x11:
    *(undefined4 *)(param_2 + 0x14) = 0x1490148;
    *(undefined4 *)(param_2 + 0x1a) = 0x14b014c;
    *(undefined2 *)(param_2 + 0x18) = 0x14a;
    *(undefined4 *)(param_2 + 0x24) = 0x3f4ccccd;
    local_14 = 0.0;
    local_10 = -90.0;
    local_c = 0.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -2.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 4.0;
    local_c = 7.0;
    FUN_00411e30(&local_14);
    local_14 = 5.0;
    local_10 = 3.0;
    local_c = 0.0;
    FUN_00411e30(&local_14);
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x428;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x12:
    *(undefined2 *)(param_2 + 0x14) = 0xb;
    *(undefined4 *)(param_2 + 0x1a) = 0x1b0;
    sVar3 = 0x1ae;
    goto LAB_0043fa27;
  case 0x13:
    *(undefined2 *)(param_2 + 0x14) = 0x163;
    *(undefined4 *)(param_2 + 0x1a) = 0x1620165;
    *(undefined2 *)(param_2 + 0x18) = 0x164;
    uVar1 = 0x166;
    goto LAB_0044244f;
  case 0x14:
    *(undefined2 *)(param_2 + 0x14) = 0x168;
    *(undefined4 *)(param_2 + 0x1a) = 0x167016a;
    *(undefined2 *)(param_2 + 0x18) = 0x169;
    uVar1 = 0x16b;
LAB_0044244f:
    *(undefined2 *)(param_2 + 0x1e) = uVar1;
    *(undefined4 *)(param_2 + 0x24) = 0x3f666666;
    local_14 = 0.8;
    local_10 = 0.8;
    local_c = 1.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 9.0;
    local_c = 6.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 2.0;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = 4.0;
    local_c = -2.5;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = -4.0;
    local_c = -1.0;
    FUN_00411e30(&local_14);
LAB_00442502:
    *(undefined4 *)(param_2 + 0x30) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f800000;
    local_c = -1.0;
LAB_00442517:
    local_10 = -8.0;
LAB_0044251e:
    local_14 = 0.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x3c) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x60) = 0xc1f00000;
    goto LAB_00443c6a;
  case 0x15:
    *(undefined2 *)(param_2 + 0x14) = 0x16d;
    *(undefined4 *)(param_2 + 0x1a) = 0x16c016f;
    *(undefined2 *)(param_2 + 0x18) = 0x16e;
    *(undefined2 *)(param_2 + 0x1e) = 0x170;
    *(undefined4 *)(param_2 + 0x24) = 0x3f333333;
    local_14 = 0.0;
    local_10 = 12.5;
    local_c = 3.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 1.0;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = 2.5;
    local_c = -4.5;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = -4.0;
    local_c = -4.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x28) = 0x3f99999a;
    local_14 = 0.0;
    local_10 = -8.0;
    local_c = -2.5;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x3c) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x60) = 0xc1f00000;
    local_14 = 2.8;
    local_10 = 2.8;
    local_c = 4.0;
    goto LAB_00443c61;
  case 0x16:
    *(undefined2 *)(param_2 + 0x14) = 0x172;
    *(undefined4 *)(param_2 + 0x1a) = 0x1710174;
    uVar1 = 0x173;
    goto LAB_00442693;
  case 0x17:
    *(undefined2 *)(param_2 + 0x14) = 0x176;
    *(undefined4 *)(param_2 + 0x1a) = 0x1750178;
    uVar1 = 0x177;
LAB_00442693:
    *(undefined2 *)(param_2 + 0x18) = uVar1;
    *(undefined4 *)(param_2 + 0x24) = 0x3f4ccccd;
    local_14 = 0.0;
    local_10 = 9.0;
    local_c = 5.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -4.0;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = 4.0;
    local_c = -8.5;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = -4.0;
    local_c = -9.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f800000;
    goto LAB_00443c6a;
  case 0x18:
    local_14 = 0.8;
    local_10 = 0.8;
    local_c = 1.2;
    FUN_00411e30(&local_14);
    *(undefined2 *)(param_2 + 0x1c) = 0x874;
    local_10 = 0.0;
    local_c = -1.5;
    goto LAB_00440a12;
  case 0x19:
    *(undefined2 *)(param_2 + 0x14) = 0x872;
    *(undefined4 *)(param_2 + 0x1a) = 0x8710873;
    *(undefined2 *)(param_2 + 0x18) = 0x873;
    *(undefined4 *)(param_2 + 0x24) = 0x3f266666;
    local_14 = 0.0;
    local_10 = 13.0;
    local_c = 0.5;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 3.5;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = 4.0;
    local_c = -3.5;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = -4.0;
    local_c = -3.5;
    FUN_00411e30(&local_14);
    local_14 = 0.8;
    local_10 = 0.8;
    local_c = 1.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f4ccccd;
    local_c = 4.5;
    goto LAB_00442517;
  case 0x1a:
    *(undefined2 *)(param_2 + 0x14) = 0x17a;
    *(undefined4 *)(param_2 + 0x1a) = 0x179017c;
    *(undefined2 *)(param_2 + 0x18) = 0x17b;
    *(undefined2 *)(param_2 + 0x1e) = 0x17d;
    *(undefined4 *)(param_2 + 0x24) = 0x3f666666;
    local_14 = 0.0;
    local_10 = 9.0;
    local_c = -1.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -5.5;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = 4.0;
    local_c = -8.5;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = -4.1;
    local_c = -8.5;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x28) = 0x3f866666;
    local_14 = 0.0;
    local_10 = -10.0;
    local_c = 3.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x3c) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x60) = 0xc2f00000;
    local_14 = 1.04;
    local_10 = 1.04;
    local_c = 2.34;
    goto LAB_00443c61;
  case 0x1b:
    *(undefined2 *)(param_2 + 0x14) = 0x17f;
    *(undefined4 *)(param_2 + 0x1a) = 0x17e0181;
    *(undefined2 *)(param_2 + 0x18) = 0x180;
    *(undefined2 *)(param_2 + 0x1e) = 0x182;
    *(undefined4 *)(param_2 + 0x24) = 0x3f666666;
    local_14 = 0.0;
    local_10 = 9.0;
    local_c = 5.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.5;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = 4.0;
    local_c = -2.5;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = -4.1;
    local_c = -2.5;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x28) = 0x3f866666;
    local_14 = 0.0;
    local_10 = -7.0;
    local_c = 2.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x3c) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x60) = 0xc2f00000;
    local_14 = 0.8;
    local_10 = 0.8;
    local_c = 0.7;
    goto LAB_00443c61;
  case 0x1c:
    *(undefined2 *)(param_2 + 0x14) = 0x184;
    *(undefined4 *)(param_2 + 0x1a) = 0x1830186;
    *(undefined2 *)(param_2 + 0x18) = 0x185;
    *(undefined2 *)(param_2 + 0x1e) = 0x187;
    local_14 = 0.0;
    local_10 = 11.0;
    local_c = -1.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -3.5;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = 3.0;
    local_c = -7.5;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = -4.1;
    local_c = -7.5;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = -5.5;
    local_c = -1.0;
    FUN_00411e30(&local_14);
    local_14 = 1.52;
    local_10 = 1.52;
    local_c = 3.23;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x28) = 0x3f99999a;
    *(undefined4 *)(param_2 + 0x24) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x30) = 0x3f666666;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f666666;
    goto LAB_00443c6a;
  case 0x1d:
    *(undefined2 *)(param_2 + 0x14) = 0x189;
    *(undefined4 *)(param_2 + 0x1a) = 0x188018b;
    *(undefined2 *)(param_2 + 0x18) = 0x18a;
    *(undefined2 *)(param_2 + 0x1e) = 0x18c;
    *(undefined4 *)(param_2 + 0x24) = 0x3f19999a;
    local_14 = 0.0;
    local_10 = 14.0;
    local_c = -1.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = 5.0;
    local_c = -8.5;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = -6.0;
    local_c = -9.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f8ccccd;
    local_10 = -11.0;
    local_c = -4.0;
    goto LAB_0044251e;
  case 0x1e:
    *(undefined2 *)(param_2 + 0x14) = 0x18e;
    *(undefined4 *)(param_2 + 0x1a) = 0x18d0190;
    *(undefined2 *)(param_2 + 0x18) = 399;
    uVar1 = 0x191;
    goto LAB_00442c5a;
  case 0x1f:
    *(undefined2 *)(param_2 + 0x14) = 0x193;
    *(undefined4 *)(param_2 + 0x1a) = 0x1920195;
    *(undefined2 *)(param_2 + 0x18) = 0x194;
    uVar1 = 0x196;
    goto LAB_00442c5a;
  case 0x20:
    *(undefined2 *)(param_2 + 0x14) = 0x198;
    *(undefined4 *)(param_2 + 0x1a) = 0x197019a;
    *(undefined2 *)(param_2 + 0x18) = 0x199;
    uVar1 = 0x19b;
LAB_00442c5a:
    *(undefined2 *)(param_2 + 0x1e) = uVar1;
    *(undefined4 *)(param_2 + 0x24) = 0x3f666666;
    local_14 = 0.0;
    local_10 = 9.0;
    local_c = -1.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -4.0;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = 4.0;
    local_c = -8.5;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = -4.1;
    local_c = -8.5;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f800000;
    local_14 = 0.0;
    local_10 = -8.0;
    local_c = -1.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x3c) = 0x3f8ccccd;
    *(undefined4 *)(param_2 + 0x60) = 0xc1f00000;
    goto LAB_00443c6a;
  case 0x21:
    *(undefined2 *)(param_2 + 0x14) = 0x19d;
    *(undefined4 *)(param_2 + 0x1a) = 0x19c019e;
    *(undefined2 *)(param_2 + 0x18) = 0x19e;
    local_14 = 0.8;
    local_10 = 0.8;
    local_c = 0.8;
    FUN_00411e30(&local_14);
    local_10 = 9.0;
    goto LAB_00442db8;
  case 0x22:
    *(undefined2 *)(param_2 + 0x14) = 0x1a0;
    *(undefined4 *)(param_2 + 0x1a) = 0x19f01a1;
    *(undefined2 *)(param_2 + 0x18) = 0x1a1;
    local_14 = 1.2;
    local_10 = 1.2;
    local_c = 1.2;
    FUN_00411e30(&local_14);
    local_10 = 4.0;
LAB_00442db8:
    local_14 = 0.0;
    local_c = 1.9;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 1.0;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = 4.0;
    local_c = -4.2;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = -4.0;
    local_c = -4.2;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x28) = 0x3f99999a;
    *(undefined4 *)(param_2 + 0x24) = 0x3f59999a;
    goto LAB_00442502;
  case 0x23:
    *(undefined4 *)(param_2 + 0x1a) = 0x9a009b;
    goto LAB_0044168d;
  case 0x24:
    *(undefined4 *)(param_2 + 0x1a) = 0x9c009d;
LAB_0044168d:
    local_14 = 9.0;
    local_10 = 0.0;
    local_c = 8.0;
    FUN_00411e30(&local_14);
    local_14 = 5.0;
    local_10 = 1.0;
    local_c = -2.5;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 8.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 2.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x2c) = 0x3f666666;
    local_14 = 1.0;
    local_10 = 1.0;
    local_c = 1.1;
LAB_00440ef2:
    FUN_00411e30(&local_14);
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x30;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x25:
    uVar1 = 0x95f;
    goto LAB_004419f1;
  case 0x26:
    uVar1 = 0x960;
    goto LAB_004419f1;
  case 0x27:
    uVar1 = 0x961;
    goto LAB_004419f1;
  case 0x28:
    uVar1 = 0x962;
LAB_004419f1:
    *(undefined2 *)(param_2 + 0x1c) = uVar1;
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x28) = 0x3fc00000;
    local_14 = 0.8;
    local_10 = 0.8;
    local_c = 0.8;
LAB_00441a32:
    FUN_00411e30(&local_14);
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x29;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x29:
    *(undefined4 *)(param_2 + 0x14) = 0x9640963;
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00411e30(&local_14);
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 2;
    *(undefined4 *)(param_2 + 0x24) = 0x3f4ccccd;
    local_14 = 1.4;
    local_10 = 1.4;
    local_c = 2.5;
    FUN_00411e30(&local_14);
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x429;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x2a:
    *(undefined2 *)(param_2 + 0x14) = 0x965;
    *(undefined2 *)(param_2 + 0x18) = 0x966;
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00411e30(&local_14);
    local_14 = 6.0;
    local_10 = 0.0;
    local_c = 2.0;
    FUN_00411e30(&local_14);
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 2;
    *(undefined4 *)(param_2 + 0x24) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f000000;
    local_14 = 1.4;
    local_10 = 1.4;
    local_c = 2.5;
    goto LAB_00440900;
  case 0x2b:
    *(undefined2 *)(param_2 + 0x14) = 3;
    *(undefined4 *)(param_2 + 0x1a) = 0x401b0;
    *(undefined2 *)(param_2 + 0x18) = 0x1ae;
    break;
  case 0x2c:
    *(undefined2 *)(param_2 + 0x14) = 10;
    *(undefined2 *)(param_2 + 0x16) = 0xffff;
    *(undefined4 *)(param_2 + 0x1a) = 0x1b0;
    sVar3 = 0x1ae;
    goto LAB_0043fa27;
  case 0x2d:
    *(undefined2 *)(param_2 + 0x14) = 5;
    *(undefined4 *)(param_2 + 0x1a) = 0x601b0;
    *(undefined2 *)(param_2 + 0x18) = 0x1ae;
    local_14 = 0.0;
    local_10 = 3.0;
    local_c = 4.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x24) = 0x3f4ccccd;
    break;
  case 0x2e:
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    local_2c = CONCAT11((char)iVar5,(char)iVar6);
    local_2a = (char)iVar4;
    FUN_00428920(&local_2c);
    *(undefined2 *)(param_2 + 0x14) = 0x3c;
    *(undefined4 *)(param_2 + 0x1a) = 0x3d003f;
    *(undefined2 *)(param_2 + 0x18) = 0x3e;
    *(undefined4 *)(param_2 + 0x24) = 0x3f1c28f6;
    local_14 = 0.0;
    local_10 = 4.0;
    local_c = 6.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -2.0;
    FUN_00411e30(&local_14);
    local_14 = 7.5;
    local_10 = 0.0;
    local_c = 3.0;
    FUN_00411e30(&local_14);
    local_14 = 2.4;
    local_10 = 2.4;
    local_c = 5.3999996;
    FUN_00411e30(&local_14);
    break;
  case 0x2f:
    *(undefined2 *)(param_2 + 0x14) = 0x40;
    *(undefined4 *)(param_2 + 0x18) = 0x420041;
    *(undefined4 *)(param_2 + 0x38) = 0x3f266666;
    *(undefined4 *)(param_2 + 0x24) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x30) = 0x3f59999a;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f59999a;
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 2.0;
    FUN_00411e30(&local_14);
    local_14 = 7.5;
    local_10 = 0.0;
    local_c = 5.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -1.0;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = 1.0;
    local_c = -6.5;
    FUN_00411e30(&local_14);
    local_14 = 2.4;
    local_10 = 2.4;
    local_c = 3.6000001;
    FUN_00411e30(&local_14);
    break;
  case 0x30:
    *(undefined2 *)(param_2 + 0x14) = 0xc;
    *(undefined4 *)(param_2 + 0x1a) = 0xd000f;
    *(undefined2 *)(param_2 + 0x18) = 0xe;
    goto LAB_0043fe82;
  case 0x31:
    *(undefined2 *)(param_2 + 0x14) = 0x10;
    *(undefined4 *)(param_2 + 0x1a) = 0x110013;
    *(undefined2 *)(param_2 + 0x18) = 0x12;
    *(undefined4 *)(param_2 + 0x70) = 0;
    *(undefined4 *)(param_2 + 0x74) = 0x3fc00000;
    *(undefined4 *)(param_2 + 0x78) = 0x40800000;
    *(undefined4 *)(param_2 + 0x24) = 0x3f99999a;
LAB_0043fe82:
    *(float *)(param_2 + 8) = *(float *)(param_2 + 8) / 1.2;
    *(float *)(param_2 + 0xc) = *(float *)(param_2 + 0xc) / 1.2;
    fVar10 = *(float *)(param_2 + 0x10) / 1.2;
LAB_0043feaf:
    *(float *)(param_2 + 0x10) = fVar10;
    break;
  case 0x32:
    *(undefined2 *)(param_2 + 0x14) = 0x14;
    *(undefined4 *)(param_2 + 0x1a) = 0x150017;
    *(undefined2 *)(param_2 + 0x18) = 0x16;
    *(undefined4 *)(param_2 + 0x70) = 0;
    *(undefined4 *)(param_2 + 0x74) = 0x40600000;
    *(undefined4 *)(param_2 + 0x78) = 0x40000000;
    *(undefined4 *)(param_2 + 0x88) = 0x40600000;
    *(undefined4 *)(param_2 + 0x8c) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x90) = 0xc1080000;
    *(undefined4 *)(param_2 + 100) = 0;
    *(undefined4 *)(param_2 + 0x68) = 0;
    *(undefined4 *)(param_2 + 0x6c) = 0xc0800000;
    *(undefined4 *)(param_2 + 0x24) = 0x3f866666;
    *(undefined4 *)(param_2 + 0x28) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 8) = 0x3f23d70b;
    *(undefined4 *)(param_2 + 0xc) = 0x3f23d70b;
    *(undefined4 *)(param_2 + 0x10) = 0x3fae147b;
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x28;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x33:
    *(undefined2 *)(param_2 + 0x14) = 0x94f;
    *(undefined4 *)(param_2 + 0x1a) = 0xe2094e;
    *(undefined2 *)(param_2 + 0x18) = 0x950;
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x20;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x34:
    *(undefined2 *)(param_2 + 0x14) = 0x952;
    *(undefined4 *)(param_2 + 0x1a) = 0x9540951;
    *(undefined2 *)(param_2 + 0x18) = 0x953;
    *(undefined4 *)(param_2 + 0x7c) = 0x40c00000;
    *(undefined4 *)(param_2 + 0x80) = 0;
    *(undefined4 *)(param_2 + 0x84) = 0x3f800000;
    *(undefined4 *)(param_2 + 100) = 0;
    *(undefined4 *)(param_2 + 0x68) = 0;
    *(undefined4 *)(param_2 + 0x6c) = 0xc0800000;
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x20;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x35:
    *(undefined2 *)(param_2 + 0x14) = 0xe7;
    *(undefined4 *)(param_2 + 0x1a) = 0xe600e8;
    *(undefined2 *)(param_2 + 0x22) = 0xe9;
    goto LAB_00442fa2;
  case 0x36:
    *(undefined2 *)(param_2 + 0x14) = 0xeb;
    *(undefined4 *)(param_2 + 0x1a) = 0xea00ec;
    *(undefined2 *)(param_2 + 0x22) = 0xee;
    *(undefined2 *)(param_2 + 0x18) = 0xed;
LAB_00442fa2:
    local_14 = 3.0;
    local_10 = -1.0;
    local_c = -7.0;
    FUN_00411e30(&local_14);
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 2;
    *(undefined4 *)(param_2 + 0x48) = 0xc2340000;
    *(undefined4 *)(param_2 + 0x58) = 0x41f00000;
    local_14 = 1.0;
    local_10 = -6.0;
    local_c = 1.0;
    *(undefined4 *)(param_2 + 0x5c) = 0x42340000;
    goto LAB_00440ef2;
  case 0x37:
    *(undefined2 *)(param_2 + 0x14) = 0xff;
    *(undefined4 *)(param_2 + 0x1a) = 0xfe0100;
    uVar1 = 0x101;
    goto LAB_00443207;
  case 0x38:
    *(undefined2 *)(param_2 + 0x14) = 0x103;
    *(undefined4 *)(param_2 + 0x1a) = 0x1020104;
    *(undefined2 *)(param_2 + 0x22) = 0x105;
    local_14 = 3.0;
    local_10 = 0.0;
    local_c = -10.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 3.0;
    local_c = 2.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x28) = 0x3fa66666;
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 2;
    *(undefined4 *)(param_2 + 0x48) = 0;
    *(undefined4 *)(param_2 + 0x5c) = 0x42340000;
    local_14 = 3.0;
    local_10 = -2.0;
    local_c = -5.0;
    FUN_00411e30(&local_14);
    local_14 = 0.8;
    local_10 = 0.8;
    local_c = 1.65;
    goto LAB_00440ef2;
  case 0x39:
    *(undefined2 *)(param_2 + 0x14) = 0x107;
    *(undefined4 *)(param_2 + 0x1a) = 0x1060108;
    *(undefined2 *)(param_2 + 0x22) = 0x109;
    local_14 = 3.0;
    local_10 = -4.0;
    local_c = -10.0;
    FUN_00411e30(&local_14);
    local_10 = 5.0;
    local_c = 8.0;
    goto LAB_0044323d;
  case 0x3a:
    uVar7 = rand();
    uVar7 = uVar7 & 0x80000001;
    bVar9 = uVar7 == 0;
    if ((int)uVar7 < 0) {
      bVar9 = (uVar7 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (bVar9) {
      *(undefined2 *)(param_2 + 0x14) = 0x10f;
      *(undefined4 *)(param_2 + 0x1a) = 0x10e0110;
      uVar1 = 0x111;
    }
    else {
      *(undefined2 *)(param_2 + 0x14) = 0x10b;
      *(undefined4 *)(param_2 + 0x1a) = 0x10a010c;
      uVar1 = 0x10d;
    }
LAB_00443207:
    *(undefined2 *)(param_2 + 0x22) = uVar1;
    local_14 = 3.0;
    local_10 = -4.0;
    local_c = -10.0;
    FUN_00411e30(&local_14);
    local_10 = 3.0;
    local_c = 6.0;
LAB_0044323d:
    local_14 = 0.0;
LAB_00443247:
    FUN_00411e30(&local_14);
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 2;
    *(undefined4 *)(param_2 + 0x48) = 0xc2340000;
    local_14 = 3.0;
    local_10 = -5.0;
    local_c = 0.0;
    *(undefined4 *)(param_2 + 0x5c) = 0x42340000;
    goto LAB_00440ef2;
  case 0x3b:
    *(undefined2 *)(param_2 + 0x14) = 0x113;
    *(undefined4 *)(param_2 + 0x1a) = 0x1120114;
    *(undefined2 *)(param_2 + 0x22) = 0x115;
    local_14 = 3.0;
    local_10 = -4.0;
    local_c = -10.0;
    goto LAB_00443247;
  case 0x3c:
    *(undefined2 *)(param_2 + 0x14) = 0xf0;
    *(undefined4 *)(param_2 + 0x1a) = 0xef00f1;
    uVar1 = 0xf2;
    goto LAB_0044303c;
  case 0x3d:
    *(undefined2 *)(param_2 + 0x14) = 0xf7;
    *(undefined4 *)(param_2 + 0x1a) = 0xf600f8;
    *(undefined2 *)(param_2 + 0x22) = 0xf9;
    local_14 = 3.0;
    local_10 = -1.0;
    local_c = -5.0;
    FUN_00411e30(&local_14);
    local_10 = -5.0;
    local_c = -1.0;
    goto LAB_00443072;
  case 0x3e:
    *(undefined2 *)(param_2 + 0x14) = 0xfb;
    *(undefined4 *)(param_2 + 0x1a) = 0xfa00fc;
    uVar1 = 0xfd;
LAB_0044303c:
    *(undefined2 *)(param_2 + 0x22) = uVar1;
    local_14 = 3.0;
    local_10 = -1.0;
    local_c = -7.0;
    FUN_00411e30(&local_14);
    local_10 = -6.0;
    local_c = 1.0;
LAB_00443072:
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 2;
    *(undefined4 *)(param_2 + 0x48) = 0xc2340000;
    *(undefined4 *)(param_2 + 0x58) = 0x41f00000;
    local_14 = 1.0;
    *(undefined4 *)(param_2 + 0x5c) = 0x42340000;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 3.0;
    local_c = 4.0;
    goto LAB_00440ef2;
  case 0x3f:
    *(undefined4 *)(param_2 + 0x1a) = 0x14d014e;
    goto LAB_0044340d;
  case 0x40:
    *(undefined4 *)(param_2 + 0x1a) = 0x14f0150;
    goto LAB_0044340d;
  case 0x41:
    *(undefined4 *)(param_2 + 0x1a) = 0x1510152;
    goto LAB_0044340d;
  case 0x42:
    *(undefined4 *)(param_2 + 0x1a) = 0x1530154;
LAB_0044340d:
    *(undefined2 *)(param_2 + 0x18) = 0xffff;
    local_14 = 0.0;
    local_10 = 3.0;
    local_c = 6.0;
    FUN_00411e30(&local_14);
    local_14 = 4.0;
    local_10 = 0.0;
    local_c = -1.5;
    FUN_00411e30(&local_14);
    local_14 = 1.2;
    local_10 = 1.2;
    local_c = 2.6999998;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3fc00000;
    goto LAB_00440909;
  case 0x43:
    *(undefined4 *)(param_2 + 0x1a) = 0x1550156;
    *(undefined2 *)(param_2 + 0x14) = 0x157;
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 4.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 4.0;
    local_c = 8.0;
    FUN_00411e30(&local_14);
    local_14 = 4.0;
    local_10 = 0.0;
    local_c = -6.0;
    FUN_00411e30(&local_14);
    local_14 = 1.2;
    local_10 = 1.2;
    local_c = 3.75;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x28) = 0x3f333333;
    *(undefined4 *)(param_2 + 0x24) = 0x3f000000;
    *(undefined4 *)(param_2 + 0x30) = 0x3fc00000;
    goto LAB_00440909;
  case 0x44:
    *(undefined2 *)(param_2 + 0x14) = 0x73;
    *(char **)(param_2 + 0x1a) = "p";
    *(undefined2 *)(param_2 + 0x18) = 0x75;
    local_14 = 8.0;
    local_10 = 0.0;
    local_c = 2.0;
    FUN_00411e30(&local_14);
    local_14 = 5.0;
    local_10 = 1.0;
    local_c = -8.5;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 2.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -6.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x2c) = 0x3f99999a;
    break;
  case 0x45:
    *(undefined2 *)(param_2 + 0x14) = 0x77;
    *(undefined4 *)(param_2 + 0x1a) = 0x760078;
    *(undefined2 *)(param_2 + 0x18) = 0x79;
    local_14 = 6.0;
    local_10 = 3.0;
    local_c = 0.0;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = 2.0;
    local_c = -10.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 7.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -4.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x2c) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x30) = 0x3f333333;
    goto LAB_00440d96;
  case 0x46:
    *(undefined **)(param_2 + 0x1a) = &DAT_007a007b;
    *(undefined2 *)(param_2 + 0x18) = 0x7c;
    local_14 = 6.0;
    local_10 = 3.0;
    local_c = 0.0;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = 2.0;
    local_c = -8.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 7.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 5.0;
    FUN_00411e30(&local_14);
LAB_00440d96:
    local_14 = 1.2;
    local_10 = 1.2;
    local_c = 2.6999998;
    FUN_00411e30(&local_14);
    local_14 = -45.0;
    local_10 = 45.0;
    local_c = -45.0;
    goto LAB_00440900;
  case 0x47:
    *(undefined4 *)(param_2 + 0x1a) = 0x7d007e;
    goto LAB_00440e74;
  case 0x48:
    *(undefined4 *)(param_2 + 0x1a) = 0x7f0080;
LAB_00440e74:
    local_14 = 3.0;
    local_10 = 0.0;
    local_c = -12.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00411e30(&local_14);
    local_c = 1.0;
LAB_00440ec3:
    local_10 = 0.0;
    local_14 = 0.0;
    FUN_00411e30(&local_14);
    local_14 = 1.2;
    local_10 = 1.2;
    local_c = 2.6999998;
    goto LAB_00440ef2;
  case 0x49:
    *(undefined4 *)(param_2 + 0x1a) = 0x810082;
    local_14 = 3.0;
    local_10 = 0.0;
    local_c = -11.0;
    FUN_00411e30(&local_14);
    local_c = -12.0;
    goto LAB_00440ec3;
  case 0x4a:
    *(undefined2 *)(param_2 + 0x14) = 0x1a3;
    *(undefined4 *)(param_2 + 0x1a) = 0x1a201a4;
    *(undefined2 *)(param_2 + 0x18) = 0x1a4;
    *(undefined2 *)(param_2 + 0x1e) = 0x1a5;
    local_14 = 1.0;
    local_10 = 1.0;
    local_c = 1.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 8.5;
    local_c = 1.5;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.6;
    FUN_00411e30(&local_14);
    local_14 = 4.0;
    local_10 = 1.0;
    local_c = -3.7;
    FUN_00411e30(&local_14);
    local_14 = 4.0;
    local_10 = -3.0;
    local_c = -3.7;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x28) = 0x3f666666;
    *(undefined4 *)(param_2 + 0x24) = 0x3f3ae148;
    *(undefined4 *)(param_2 + 0x30) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f800000;
    local_14 = 0.0;
    local_10 = -8.5;
    local_c = -2.9;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x3c) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x60) = 0xc2a00000;
    goto LAB_00443c6a;
  case 0x4b:
    *(undefined2 *)(param_2 + 0x14) = 0x1a7;
    *(undefined4 *)(param_2 + 0x1a) = 0x1a601a8;
    *(undefined2 *)(param_2 + 0x18) = 0x1a8;
    local_14 = 1.0;
    local_10 = 1.0;
    local_c = 1.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 17.5;
    local_c = 2.5;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = -9.0;
    local_c = 2.6;
    FUN_00411e30(&local_14);
    local_14 = 6.0;
    local_10 = 9.0;
    local_c = -1.7;
    FUN_00411e30(&local_14);
    local_14 = 6.0;
    local_10 = -9.0;
    local_c = -1.7;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x28) = 0x40000000;
    *(undefined4 *)(param_2 + 0x24) = 0x3f8ccccd;
    *(undefined4 *)(param_2 + 0x30) = 0x3fcccccd;
    *(undefined4 *)(param_2 + 0x2c) = 0x3fcccccd;
    goto LAB_00443c6a;
  case 0x4c:
    *(undefined2 *)(param_2 + 0x14) = 0xa0;
    *(undefined4 *)(param_2 + 0x1a) = 0xa200a1;
    uVar1 = 0xa3;
    goto LAB_00440934;
  case 0x4d:
    *(undefined2 *)(param_2 + 0x14) = 0xa4;
    *(undefined4 *)(param_2 + 0x1a) = 0xa600a5;
    uVar1 = 0xa7;
    goto LAB_00440934;
  case 0x4e:
    *(undefined2 *)(param_2 + 0x14) = 0xa8;
    *(undefined4 *)(param_2 + 0x1a) = 0xaa00a9;
    uVar1 = 0xab;
    goto LAB_00440934;
  case 0x4f:
    *(undefined2 *)(param_2 + 0x14) = 0xac;
    *(undefined4 *)(param_2 + 0x1a) = 0xae00ad;
    uVar1 = 0xaf;
LAB_00440934:
    *(undefined2 *)(param_2 + 0x18) = uVar1;
    local_14 = 6.0;
    local_10 = 0.0;
    local_c = -2.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x28) = 0x3f666666;
    break;
  case 0x50:
    *(undefined2 *)(param_2 + 0x14) = 0xb0;
    *(undefined4 *)(param_2 + 0x1a) = 0xb200b1;
    *(undefined2 *)(param_2 + 0x18) = 0xb3;
    break;
  case 0x51:
    *(undefined2 *)(param_2 + 0x14) = 0xbe;
    *(undefined4 *)(param_2 + 0x1a) = 0xc000bf;
    *(undefined2 *)(param_2 + 0x18) = 0xc1;
    *(undefined4 *)(param_2 + 0x24) = 0x3f4ccccd;
    local_14 = 0.0;
    local_10 = 1.8;
    local_c = 6.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f4ccccd;
    local_14 = 3.5;
    local_10 = 1.0;
    local_c = -10.8;
    FUN_00411e30(&local_14);
    *(float *)(param_2 + 8) = *(float *)(param_2 + 8) * 1.5;
    *(float *)(param_2 + 0xc) = *(float *)(param_2 + 0xc) * 1.5;
    fVar10 = *(float *)(param_2 + 0x10) * 1.5;
    goto LAB_0043feaf;
  case 0x52:
    *(undefined2 *)(param_2 + 0x14) = 0xc2;
    *(undefined4 *)(param_2 + 0x1a) = 0xc400c3;
    *(undefined2 *)(param_2 + 0x18) = 0xc5;
    *(undefined2 *)(param_2 + 0x20) = 0xc6;
    *(undefined4 *)(param_2 + 0x34) = 0x3f266666;
    *(undefined4 *)(param_2 + 0x24) = 0x3f000000;
    *(undefined4 *)(param_2 + 0x30) = 0x3f666666;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f333333;
    *(undefined4 *)(param_2 + 0x28) = 0x3f666666;
    *(undefined4 *)(param_2 + 0x38) = 0x3f666666;
    local_14 = 7.0;
    local_10 = 0.0;
    local_c = 1.5;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 3.0;
    local_c = 4.5;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = 1.0;
    local_c = -7.5;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -2.0;
    FUN_00411e30(&local_14);
    local_14 = 3.2;
    local_10 = 3.2;
    local_c = 5.8;
    FUN_00411e30(&local_14);
    break;
  case 0x53:
    iVar4 = rand();
    sVar3 = 0xb4;
    sVar8 = (short)(iVar4 % 3) + 0xb4;
    goto LAB_004409dd;
  case 0x54:
    iVar4 = rand();
    sVar3 = 0xb7;
    sVar8 = (short)(iVar4 % 3) + 0xb7;
LAB_004409dd:
    *(short *)(param_2 + 0x14) = sVar8;
    *(undefined4 *)(param_2 + 0x1a) = 0xbb00ba;
    local_10 = 0.8;
    local_c = 6.0;
    *(ushort *)(param_2 + 0x18) = (*(short *)(param_2 + 0x14) != sVar3) + 0xbc;
    *(undefined4 *)(param_2 + 0x24) = 0x3f666666;
LAB_00440a12:
    local_14 = 0.0;
    FUN_00411e30(&local_14);
    break;
  case 0x55:
    *(undefined4 *)(param_2 + 0x14) = 0xc700c8;
    *(undefined4 *)(param_2 + 0x1a) = 0xca00c9;
    *(undefined2 *)(param_2 + 0x18) = 0xcb;
    local_14 = 8.0;
    local_10 = 5.0;
    local_c = 0.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x28) = 0x3f666666;
    *(undefined4 *)(param_2 + 0x4c) = 0xc2b40000;
    *(undefined4 *)(param_2 + 0x50) = 0x41f00000;
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x428;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x56:
    *(undefined4 *)(param_2 + 0x1a) = 0x9e009f;
    local_14 = 5.0;
    local_10 = 1.0;
    local_c = -5.5;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 2.0;
    FUN_00411e30(&local_14);
    local_14 = 0.8;
    local_10 = 0.8;
    local_c = 1.0;
    FUN_00411e30(&local_14);
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x10;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x57:
    *(undefined2 *)(param_2 + 0x14) = 0x84;
    *(undefined4 *)(param_2 + 0x1a) = 0x830085;
    *(undefined2 *)(param_2 + 0x18) = 0x86;
    local_14 = 9.0;
    local_10 = 0.0;
    local_c = 2.0;
    FUN_00411e30(&local_14);
    local_14 = 5.0;
    local_10 = 1.0;
    local_c = -8.5;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 2.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -6.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x50) = 0xc1f00000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f666666;
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x28;
    goto LAB_0043fc40;
  case 0x58:
    *(undefined2 *)(param_2 + 0x14) = 0x88;
    *(undefined4 *)(param_2 + 0x1a) = 0x870089;
    *(undefined2 *)(param_2 + 0x18) = 0x8a;
    local_14 = 9.0;
    local_10 = 0.0;
    local_c = 2.0;
    FUN_00411e30(&local_14);
    local_14 = 5.0;
    local_10 = 1.0;
    local_c = -8.5;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 3.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -5.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x50) = 0xc1f00000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f666666;
    goto LAB_004412bc;
  case 0x59:
    *(undefined2 *)(param_2 + 0x14) = 0x8c;
    *(undefined4 *)(param_2 + 0x1a) = 0x8b008d;
    *(undefined2 *)(param_2 + 0x18) = 0x8e;
    local_14 = 9.0;
    local_10 = 0.0;
    local_c = 2.0;
    FUN_00411e30(&local_14);
    local_14 = 5.0;
    local_10 = 1.0;
    local_c = -8.5;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 3.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -5.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x50) = 0xc1f00000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f666666;
    *(undefined4 *)(param_2 + 0x24) = 0x3f99999a;
LAB_004412bc:
    fVar10 = 1.1;
    goto LAB_004412c4;
  case 0x5a:
    *(undefined2 *)(param_2 + 0x14) = 0x90;
    *(undefined4 *)(param_2 + 0x1a) = 0x8f0091;
    *(undefined2 *)(param_2 + 0x18) = 0x92;
    local_14 = 7.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00411e30(&local_14);
    local_14 = 5.0;
    local_10 = 1.0;
    local_c = -8.5;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 4.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = -5.0;
    local_c = -5.0;
    FUN_00411e30(&local_14);
    fVar10 = 0.7;
    *(undefined4 *)(param_2 + 0x50) = 0xc1f00000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f400000;
    *(undefined4 *)(param_2 + 0x30) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x24) = 0x3f99999a;
    goto LAB_004412c4;
  case 0x5b:
    *(undefined2 *)(param_2 + 0x14) = 0x94;
    *(undefined4 *)(param_2 + 0x1a) = 0x930095;
    *(undefined2 *)(param_2 + 0x18) = 0x96;
    local_14 = 7.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00411e30(&local_14);
    local_14 = 5.0;
    local_10 = 1.0;
    local_c = -8.5;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 4.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = -5.0;
    local_c = -5.0;
    FUN_00411e30(&local_14);
    fVar10 = 0.9;
    *(undefined4 *)(param_2 + 0x50) = 0xc1f00000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f400000;
    *(undefined4 *)(param_2 + 0x30) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x24) = 0x3f99999a;
LAB_004412c4:
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x28;
    *(float *)(param_2 + 8) = *(float *)(param_2 + 8) * fVar10;
    *(float *)(param_2 + 0xc) = *(float *)(param_2 + 0xc) * fVar10;
    fVar10 = *(float *)(param_2 + 0x10) * fVar10;
    goto LAB_0043fc6d;
  case 0x5c:
    *(undefined2 *)(param_2 + 0x14) = 0x97;
    *(undefined2 *)(param_2 + 0x22) = 0x99;
    *(undefined2 *)(param_2 + 0x1a) = 0x98;
    local_14 = 9.0;
    local_10 = 0.0;
    local_c = 2.0;
    FUN_00411e30(&local_14);
    local_14 = 5.0;
    local_10 = 0.0;
    local_c = -11.5;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -2.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x2c) = 0x3f666666;
    *(undefined4 *)(param_2 + 0x48) = 0xc1200000;
    *(undefined4 *)(param_2 + 0x5c) = 0x42a00000;
    local_14 = 3.0;
    local_10 = -5.0;
    local_c = 0.0;
    FUN_00411e30(&local_14);
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x2a;
    goto LAB_0043fc40;
  case 0x5d:
    *(undefined2 *)(param_2 + 0x14) = 0xcd;
    *(undefined4 *)(param_2 + 0x1a) = 0xcc00ce;
    *(undefined2 *)(param_2 + 0x18) = 0xcf;
    local_14 = 8.0;
    local_10 = 0.0;
    local_c = 2.0;
    FUN_00411e30(&local_14);
    local_14 = 5.0;
    local_10 = 1.0;
    local_c = -8.5;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 2.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -6.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x2c) = 0x3f666666;
    local_14 = -60.0;
    local_10 = -45.0;
    local_c = 0.0;
    FUN_00411e30(&local_14);
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x28;
LAB_0043fc40:
    *(float *)(param_2 + 8) = *(float *)(param_2 + 8) / 1.2;
    *(float *)(param_2 + 0xc) = *(float *)(param_2 + 0xc) / 1.2;
    fVar10 = *(float *)(param_2 + 0x10) / 1.2;
LAB_0043fc6d:
    *(float *)(param_2 + 0x10) = fVar10;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x5e:
    *(undefined2 *)(param_2 + 0x14) = 0x877;
    *(undefined4 *)(param_2 + 0x1a) = 0x879087a;
    *(undefined2 *)(param_2 + 0x18) = 0x878;
    *(undefined4 *)(param_2 + 0x40) = 0x3f99999a;
    *(undefined4 *)(param_2 + 0x24) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x70) = 0;
    *(undefined4 *)(param_2 + 0x74) = 0x40400000;
    *(undefined4 *)(param_2 + 0x78) = 0x40400000;
    *(undefined4 *)(param_2 + 0x7c) = 0x40a00000;
    *(undefined4 *)(param_2 + 0x80) = 0x40800000;
    *(undefined4 *)(param_2 + 0x84) = 0;
    *(undefined4 *)(param_2 + 0x4c) = 0;
    *(undefined4 *)(param_2 + 0x50) = 0xc2340000;
    *(undefined4 *)(param_2 + 0x54) = 0;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f19999a;
    *(undefined4 *)(param_2 + 8) = 0x4019999a;
    *(undefined4 *)(param_2 + 0xc) = 0x4019999a;
    *(undefined4 *)(param_2 + 0x10) = 0x40accccc;
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x28;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x5f:
    *(undefined2 *)(param_2 + 0x14) = 0xe1;
    *(undefined4 *)(param_2 + 0x1a) = 0xe001b0;
    *(undefined2 *)(param_2 + 0x18) = 0x1ae;
    *(undefined4 *)(param_2 + 0x24) = 0x3f4ccccd;
    break;
  case 0x60:
    *(undefined2 *)(param_2 + 0x14) = 0xe3;
    *(undefined2 *)(param_2 + 0x16) = 0xffff;
    *(undefined4 *)(param_2 + 0x1a) = 0xe200e4;
    *(undefined2 *)(param_2 + 0x18) = 0xe5;
    local_14 = 6.0;
    local_10 = 3.0;
    local_c = -2.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = -90.0;
    local_c = 0.0;
    goto LAB_00440900;
  case 0x61:
    *(undefined4 *)(param_2 + 0x14) = 0x87c087b;
    *(undefined4 *)(param_2 + 0x1a) = 0x5b701b0;
    *(undefined2 *)(param_2 + 0x18) = 0x87d;
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x402;
    *(undefined2 *)(param_2 + 0x22) = 0x115;
    *(undefined4 *)(param_2 + 0x44) = 0x40000000;
    *(undefined4 *)(param_2 + 0x5c) = 0x42700000;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x62:
    *(undefined2 *)(param_2 + 0x14) = 0x159;
    *(undefined4 *)(param_2 + 0x1a) = 0x158015a;
    *(undefined2 *)(param_2 + 0x18) = 0x15a;
    *(undefined2 *)(param_2 + 0x1e) = 0x15b;
    *(undefined4 *)(param_2 + 0x24) = 0x3f4ccccd;
    local_14 = 1.4399999;
    local_10 = 1.4399999;
    local_c = 1.6;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 8.0;
    local_c = 6.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 3.0;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = 3.0;
    local_c = -3.25;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = -5.0;
    local_c = -3.25;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f4ccccd;
    local_14 = 0.0;
    local_10 = -7.0;
    local_c = -4.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x3c) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x28) = 0x3f666666;
    goto LAB_00443c6a;
  case 99:
    *(undefined2 *)(param_2 + 0x14) = 0x15d;
    *(undefined4 *)(param_2 + 0x1a) = 0x15c015e;
    *(undefined2 *)(param_2 + 0x18) = 0x15e;
    *(undefined4 *)(param_2 + 0x24) = 0x3f266666;
    local_14 = 1.8;
    local_10 = 1.8;
    local_c = 3.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 12.0;
    local_c = 4.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 1.0;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = 3.0;
    local_c = -5.75;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = -4.0;
    local_c = -5.75;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f400000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x28) = 0x3f733333;
    goto LAB_00443c6a;
  case 100:
    *(undefined2 *)(param_2 + 0x14) = 0x160;
    *(undefined4 *)(param_2 + 0x1a) = 0x15f0161;
    *(undefined2 *)(param_2 + 0x18) = 0x161;
    *(undefined4 *)(param_2 + 0x24) = 0x3f266666;
    local_14 = 1.8;
    local_10 = 1.8;
    local_c = 3.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 10.0;
    local_c = 1.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -2.0;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = 3.0;
    local_c = -6.75;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = -4.0;
    local_c = -6.75;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f400000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x28) = 0x3f99999a;
    goto LAB_00443c6a;
  case 0x65:
    *(undefined2 *)(param_2 + 0x14) = 0x1aa;
    *(undefined4 *)(param_2 + 0x1a) = 0x1a901ab;
    *(undefined2 *)(param_2 + 0x18) = 0x1ab;
    *(undefined2 *)(param_2 + 0x1e) = 0x1ad;
    *(undefined4 *)(param_2 + 0x24) = 0x3f028f5c;
    local_14 = 0.0;
    local_10 = 12.5;
    local_c = 0.5;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -2.0;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = 4.0;
    local_c = 1.0;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = -4.0;
    local_c = 1.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3fc00000;
    local_14 = 0.0;
    local_10 = -16.0;
    local_c = 4.0;
    FUN_00411e30(&local_14);
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x33;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x66:
    *(undefined2 *)(param_2 + 0x14) = 0xd8;
    *(undefined2 *)(param_2 + 0x1a) = 0xd9;
    local_14 = 3.5;
    local_10 = 1.0;
    local_c = -2.5;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 1.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x24) = 0x3f400000;
    goto LAB_00441f6c;
  case 0x67:
    *(undefined2 *)(param_2 + 0x14) = 0xda;
    uVar1 = 0xdb;
    goto LAB_00441f97;
  case 0x68:
    *(undefined2 *)(param_2 + 0x14) = 0xdc;
    *(undefined2 *)(param_2 + 0x1a) = 0xdd;
    local_14 = 3.5;
    local_10 = 1.0;
    local_c = -2.5;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 1.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x24) = 0x3f666666;
    local_14 = 1.6;
    local_10 = 1.6;
    local_c = 1.6;
    goto LAB_00441a32;
  case 0x69:
    *(undefined2 *)(param_2 + 0x14) = 0xde;
    uVar1 = 0xdf;
LAB_00441f97:
    *(undefined2 *)(param_2 + 0x1a) = uVar1;
    local_14 = 3.5;
    local_10 = 1.0;
    local_c = -2.5;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 1.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x24) = 0x3f666666;
LAB_00441f6c:
    local_14 = 1.6;
    local_10 = 1.6;
    local_c = 1.6;
    goto LAB_00443c61;
  case 0x6a:
    *(undefined2 *)(param_2 + 0x14) = 0xd1;
    *(undefined4 *)(param_2 + 0x1a) = 0xd000d2;
    *(undefined2 *)(param_2 + 0x18) = 0xd3;
    local_14 = 10.0;
    local_10 = 0.0;
    local_c = 8.0;
    FUN_00411e30(&local_14);
    local_14 = 6.0;
    local_10 = 1.0;
    local_c = -5.5;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 5.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 1.0;
    FUN_00411e30(&local_14);
    local_14 = 90.0;
    local_10 = 30.0;
    local_c = 0.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x24) = 0x3f400000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f99999a;
    local_14 = 0.8;
    local_10 = 0.8;
    local_c = 1.2;
    goto LAB_00440900;
  case 0x6b:
    *(undefined2 *)(param_2 + 0x14) = 0xd5;
    *(undefined4 *)(param_2 + 0x1a) = 0xd400d6;
    *(undefined2 *)(param_2 + 0x18) = 0xd7;
    local_14 = 10.0;
    local_10 = 0.0;
    local_c = 8.0;
    FUN_00411e30(&local_14);
    local_14 = 6.0;
    local_10 = 1.0;
    local_c = -5.5;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 5.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 1.0;
    FUN_00411e30(&local_14);
    local_14 = 90.0;
    local_10 = 30.0;
    local_c = 0.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x24) = 0x3f400000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f99999a;
    local_14 = 4.8;
    local_10 = 4.8;
    local_c = 7.2000003;
LAB_00440900:
    FUN_00411e30(&local_14);
LAB_00440909:
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x28;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x6c:
    *(undefined2 *)(param_2 + 0x14) = 0x18;
    *(undefined4 *)(param_2 + 0x1a) = 0x19001c;
    *(undefined2 *)(param_2 + 0x18) = 0x1b;
    uVar1 = 0x1a;
    goto LAB_004401fc;
  case 0x6d:
    *(undefined4 *)(param_2 + 0x14) = 0x1d001e;
    *(undefined4 *)(param_2 + 0x1a) = 0x1f0022;
    *(undefined2 *)(param_2 + 0x18) = 0x21;
    *(undefined2 *)(param_2 + 0x20) = 0x20;
    *(undefined4 *)(param_2 + 0x40) = 0x3f99999a;
    *(undefined4 *)(param_2 + 0x24) = 0x3f19999a;
    *(undefined4 *)(param_2 + 0x30) = 0x3f400000;
    *(undefined4 *)(param_2 + 0x34) = 0x3f666666;
    *(undefined4 *)(param_2 + 0x7c) = 0x41000000;
    *(undefined4 *)(param_2 + 0x80) = 0x40400000;
    *(undefined4 *)(param_2 + 0x84) = 0;
    *(undefined4 *)(param_2 + 0x70) = 0;
    *(undefined4 *)(param_2 + 0x74) = 0x40400000;
    *(undefined4 *)(param_2 + 0x78) = 0x40400000;
    *(undefined4 *)(param_2 + 8) = 0x40b33333;
    *(undefined4 *)(param_2 + 0xc) = 0x40b33333;
    *(undefined4 *)(param_2 + 0x10) = 0x41499999;
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x420;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x6e:
    *(undefined2 *)(param_2 + 0x14) = 0x23;
    *(undefined4 *)(param_2 + 0x1a) = 0x240027;
    *(undefined2 *)(param_2 + 0x18) = 0x26;
    *(undefined2 *)(param_2 + 0x20) = 0x25;
    *(undefined4 *)(param_2 + 0x40) = 0x3f8ccccd;
    *(undefined4 *)(param_2 + 0x24) = 0x3f19999a;
    *(undefined4 *)(param_2 + 0x30) = 0x3f400000;
    *(undefined4 *)(param_2 + 0x34) = 0x3f59999a;
    *(undefined4 *)(param_2 + 0x7c) = 0x41000000;
    *(undefined4 *)(param_2 + 0x80) = 0x40400000;
    *(undefined4 *)(param_2 + 0x84) = 0;
    *(undefined4 *)(param_2 + 0x70) = 0;
    *(undefined4 *)(param_2 + 0x74) = 0x40400000;
    *(undefined4 *)(param_2 + 0x78) = 0x3f800000;
    *(undefined4 *)(param_2 + 8) = 0x404ccccd;
    *(undefined4 *)(param_2 + 0xc) = 0x404ccccd;
    *(undefined4 *)(param_2 + 0x10) = 0x40e66666;
    break;
  case 0x6f:
    *(undefined2 *)(param_2 + 0x14) = 0x28;
    *(undefined4 *)(param_2 + 0x1a) = 0x29002c;
    *(undefined2 *)(param_2 + 0x18) = 0x2b;
    *(undefined2 *)(param_2 + 0x20) = 0x2a;
    *(undefined4 *)(param_2 + 0x40) = 0x3f99999a;
    *(undefined4 *)(param_2 + 0x24) = 0x3f19999a;
    goto LAB_0044031e;
  case 0x70:
    *(undefined2 *)(param_2 + 0x14) = 0x2d;
    *(undefined4 *)(param_2 + 0x1a) = 0x2e0031;
    *(undefined2 *)(param_2 + 0x18) = 0x30;
    uVar1 = 0x2f;
    goto LAB_00440378;
  case 0x71:
    *(undefined2 *)(param_2 + 0x14) = 0x32;
    *(undefined4 *)(param_2 + 0x1a) = 0x330036;
    *(undefined2 *)(param_2 + 0x18) = 0x35;
    uVar1 = 0x34;
LAB_00440378:
    *(undefined2 *)(param_2 + 0x20) = uVar1;
    *(undefined4 *)(param_2 + 0x40) = 0x3f99999a;
    *(undefined4 *)(param_2 + 0x24) = 0x3f1c28f6;
LAB_0044031e:
    *(undefined4 *)(param_2 + 0x30) = 0x3f4147ae;
    *(undefined4 *)(param_2 + 0x34) = 0x3f666666;
    *(undefined4 *)(param_2 + 0x7c) = 0x41000000;
    *(undefined4 *)(param_2 + 0x80) = 0x40400000;
    *(undefined4 *)(param_2 + 0x84) = 0;
    *(undefined4 *)(param_2 + 0x70) = 0;
    *(undefined4 *)(param_2 + 0x74) = 0x40800000;
    goto LAB_00440245;
  case 0x72:
    *(undefined2 *)(param_2 + 0x14) = 0x37;
    *(undefined4 *)(param_2 + 0x1a) = 0x38003b;
    *(undefined2 *)(param_2 + 0x18) = 0x3a;
    uVar1 = 0x39;
LAB_004401fc:
    *(undefined2 *)(param_2 + 0x20) = uVar1;
    *(undefined4 *)(param_2 + 0x40) = 0x3f99999a;
    *(undefined4 *)(param_2 + 0x24) = 0x3f19999a;
    *(undefined4 *)(param_2 + 0x30) = 0x3f400000;
    *(undefined4 *)(param_2 + 0x34) = 0x3f666666;
    *(undefined4 *)(param_2 + 0x7c) = 0x41000000;
    *(undefined4 *)(param_2 + 0x80) = 0x40400000;
    *(undefined4 *)(param_2 + 0x84) = 0;
    *(undefined4 *)(param_2 + 0x70) = 0;
    *(undefined4 *)(param_2 + 0x74) = 0x40400000;
LAB_00440245:
    *(undefined4 *)(param_2 + 0x78) = 0x40400000;
    *(undefined4 *)(param_2 + 8) = 0x40b33333;
    *(undefined4 *)(param_2 + 0xc) = 0x40b33333;
    *(undefined4 *)(param_2 + 0x10) = 0x41499999;
    break;
  case 0x73:
    *(undefined2 *)(param_2 + 0x14) = 0x43;
    *(undefined4 *)(param_2 + 0x1a) = 0x440047;
    *(undefined2 *)(param_2 + 0x18) = 0x46;
    *(undefined2 *)(param_2 + 0x20) = 0x45;
    *(undefined4 *)(param_2 + 0x40) = 0x3f99999a;
    *(undefined4 *)(param_2 + 0x24) = 0x3f19999a;
    *(undefined4 *)(param_2 + 0x30) = 0x3f400000;
    *(undefined4 *)(param_2 + 0x34) = 0x3f666666;
    *(undefined4 *)(param_2 + 0x7c) = 0x41000000;
    *(undefined4 *)(param_2 + 0x80) = 0x40400000;
    *(undefined4 *)(param_2 + 0x84) = 0;
    local_14 = 0.0;
    local_10 = 3.0;
    local_c = 3.0;
    FUN_00411e30(&local_14);
    local_14 = 4.8;
    local_10 = 4.8;
    local_c = 10.799999;
    FUN_00411e30(&local_14);
    break;
  case 0x74:
    iVar4 = rand();
    local_14 = ((float)iVar4 * 3.0) / 32767.0 + 7.0;
    local_c = local_14 * 1.12;
    local_10 = local_14;
    FUN_00411e30(&local_14);
    *(undefined2 *)(param_2 + 0x14) = 0x48;
    *(undefined4 *)(param_2 + 0x1a) = 0x49004a;
    *(undefined2 *)(param_2 + 0x18) = 0x4a;
    *(undefined4 *)(param_2 + 0x28) = 0x3f333333;
    *(undefined4 *)(param_2 + 0x24) = 0x3ecccccd;
    local_14 = 0.0;
    local_10 = 8.0;
    local_c = 2.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 1.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = -4.0;
    local_c = -3.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f000000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f000000;
    local_14 = 3.0;
    local_10 = 3.0;
    local_c = -4.1;
    FUN_00411e30(&local_14);
    local_14 = 2.9;
    goto LAB_00443c4d;
  case 0x75:
    *(undefined2 *)(param_2 + 0x14) = 0x117;
    *(undefined2 *)(param_2 + 0x1c) = 0x116;
    *(undefined2 *)(param_2 + 0x18) = 0x118;
    *(undefined2 *)(param_2 + 0x1a) = 0xffff;
    *(undefined2 *)(param_2 + 0x20) = 0x119;
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 3.0;
    FUN_00411e30(&local_14);
    local_14 = 6.0;
    local_10 = 5.0;
    local_c = 6.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 11.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x24) = 0x3ecccccd;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f400000;
    local_14 = 0.0;
    local_10 = -90.0;
    local_c = 0.0;
    FUN_00411e30(&local_14);
    local_14 = 6.4;
    local_10 = 6.4;
    local_c = 14.4;
    FUN_00411e30(&local_14);
    break;
  case 0x76:
    *(undefined2 *)(param_2 + 0x14) = 0x86a;
    uVar7 = rand();
    uVar7 = uVar7 & 0x80000001;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
    }
    *(short *)(param_2 + 0x1c) = (short)uVar7 + 0x86b;
    *(undefined4 *)(param_2 + 0x18) = 0x86e086d;
    *(undefined4 *)(param_2 + 0x40) = 0x3f99999a;
    *(undefined4 *)(param_2 + 0x24) = 0x3f333333;
    *(undefined4 *)(param_2 + 0x34) = 0x3f666666;
    local_14 = 8.0;
    local_10 = 0.0;
    local_c = 5.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 4.0;
    local_c = 8.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x2c) = 0x3fc00000;
    local_14 = 3.0;
    local_10 = 1.0;
    local_c = -9.5;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 2.0;
    FUN_00411e30(&local_14);
    local_14 = 4.0;
    local_10 = 4.0;
    local_c = 10.0;
    FUN_00411e30(&local_14);
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x2c;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x77:
    local_14 = 9.0;
    local_10 = 9.0;
    local_c = 10.08;
    FUN_00411e30(&local_14);
    iVar4 = rand();
    *(short *)(param_2 + 0x14) = (short)(iVar4 % 5) + 0x861;
    iVar4 = rand();
    *(short *)(param_2 + 0x1c) = (short)(iVar4 % 9) + 0x855;
    iVar4 = rand();
    sVar3 = (short)(iVar4 % 3) + 0x85e;
    *(short *)(param_2 + 0x18) = sVar3;
    *(short *)(param_2 + 0x1a) = sVar3;
    uVar7 = rand();
    uVar7 = uVar7 & 0x80000001;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
    }
    *(short *)(param_2 + 0x1e) = (short)uVar7 + 0x866;
    *(undefined4 *)(param_2 + 0x3c) = 0x3f333333;
    *(undefined4 *)(param_2 + 0x28) = 0x3f333333;
    iVar4 = rand();
    local_14 = 0.0;
    local_10 = 8.0;
    *(float *)(param_2 + 0x24) = ((float)iVar4 * 0.1) / 32767.0 + 0.4;
    iVar4 = rand();
    local_c = ((float)iVar4 * 0.5) / 32767.0 - 1.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 1.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = -4.0;
    local_c = -3.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f000000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f000000;
    iVar4 = rand();
    local_14 = (float)iVar4 / 32767.0 + 3.0;
    local_10 = 3.0;
    local_c = -4.1;
    FUN_00411e30(&local_14);
    iVar4 = rand();
    local_14 = (float)iVar4 / 32767.0 + 3.0;
LAB_00443c4d:
    local_c = -4.1;
    local_10 = -3.0;
LAB_00443c61:
    FUN_00411e30(&local_14);
LAB_00443c6a:
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x31;
switchD_0043f962_default:
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x78:
    local_14 = 2.0;
    local_10 = 2.0;
    local_c = 2.0;
    FUN_00411e30(&local_14);
    sVar3 = 0x827;
    goto LAB_00443581;
  case 0x79:
    local_14 = 2.0;
    local_10 = 2.0;
    local_c = 2.0;
    FUN_00411e30(&local_14);
    sVar3 = 0x828;
    goto LAB_00443581;
  case 0x7a:
    local_14 = 2.0;
    local_10 = 2.0;
    local_c = 2.0;
    FUN_00411e30(&local_14);
    sVar3 = 0x82a;
    goto LAB_00443581;
  case 0x7b:
    local_14 = 0.5;
    local_10 = 0.5;
    local_c = 1.5;
    FUN_00411e30(&local_14);
    sVar3 = 0x86f;
    goto LAB_00443581;
  case 0x7c:
    local_14 = 2.0;
    local_10 = 2.0;
    local_c = 2.0;
    FUN_00411e30(&local_14);
    uVar7 = rand();
    uVar7 = uVar7 & 0x80000001;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
    }
    sVar3 = 0x82e - (ushort)(uVar7 != 0);
    local_c = 2.0;
    goto LAB_00443588;
  case 0x7d:
    local_14 = 0.5;
    local_10 = 0.5;
    local_c = 1.7;
    FUN_00411e30(&local_14);
    *(undefined2 *)(param_2 + 0x1c) = 0x829;
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x28) = 0x3fc00000;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x7e:
    local_14 = 2.0;
    local_10 = 2.0;
    local_c = 2.0;
    FUN_00411e30(&local_14);
    sVar3 = 0x82f;
    local_c = 2.0;
    goto LAB_00443588;
  case 0x7f:
    local_14 = 1.0;
    local_10 = 1.0;
    local_c = 1.0;
    FUN_00411e30(&local_14);
    sVar3 = 0x830;
    goto LAB_00443581;
  case 0x80:
    local_14 = 1.5;
    local_10 = 1.5;
    local_c = 4.0;
    FUN_00411e30(&local_14);
    sVar3 = 0x906;
    goto LAB_00443581;
  case 0x81:
    *(undefined2 *)(param_2 + 0x1c) = 0x832;
    local_c = -4.0;
    goto LAB_0044358c;
  case 0x82:
    *(undefined2 *)(param_2 + 0x1c) = 0x833;
    local_14 = 3.0;
    local_10 = 3.0;
    local_c = 12.0;
    FUN_00411e30(&local_14);
    local_c = -4.0;
    goto LAB_0044358c;
  case 0x83:
    uVar1 = 0x834;
    goto LAB_00443898;
  case 0x84:
    uVar1 = 0x835;
    goto LAB_00443898;
  case 0x85:
    uVar1 = 0x836;
    goto LAB_00443898;
  case 0x86:
    uVar1 = 0x837;
    goto LAB_00443898;
  case 0x87:
    uVar1 = 0x838;
    goto LAB_00443898;
  case 0x88:
    uVar1 = 0x839;
    goto LAB_00443898;
  case 0x89:
    uVar1 = 0x83a;
    goto LAB_00443898;
  case 0x8a:
    uVar1 = 0x83b;
    goto LAB_00443898;
  case 0x8b:
    uVar1 = 0x83c;
LAB_00443898:
    *(undefined2 *)(param_2 + 0x1c) = uVar1;
    local_14 = 2.0;
    local_10 = 2.0;
    local_c = 2.0;
    FUN_00411e30(&local_14);
    local_c = -4.0;
LAB_0044358c:
    local_14 = 0.0;
    local_10 = 0.0;
    FUN_00411e30(&local_14);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x8c:
    *(undefined2 *)(param_2 + 0x1c) = 0x83d;
    local_14 = 0.8;
    local_10 = 0.8;
    local_c = 4.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x28) = 0x40000000;
    break;
  case 0x8d:
    uVar1 = 0x83e;
    local_c = 2.0;
    goto LAB_00443964;
  case 0x8e:
    uVar1 = 0x83f;
    local_c = 2.5;
LAB_00443964:
    *(undefined2 *)(param_2 + 0x1c) = uVar1;
    local_10 = 1.5;
    local_14 = 1.5;
    FUN_00411e30(&local_14);
    local_10 = 0.0;
    local_c = 0.0;
    goto LAB_00440a12;
  case 0x8f:
    local_14 = 1.5;
    local_10 = 1.5;
    local_c = 1.25;
    FUN_00411e30(&local_14);
    uVar7 = rand();
    uVar7 = uVar7 & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    sVar3 = (short)uVar7 + 0x841;
LAB_00443581:
    local_c = 0.0;
LAB_00443588:
    *(short *)(param_2 + 0x1c) = sVar3;
    goto LAB_0044358c;
  case 0x90:
    local_14 = 0.8;
    local_10 = 0.8;
    local_c = 0.8;
    FUN_00411e30(&local_14);
    *(undefined2 *)(param_2 + 0x1c) = 0x9f2;
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 1.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x28) = 0x3f4ccccd;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x91:
    uVar1 = 0x96a;
    goto LAB_00441b61;
  case 0x92:
    uVar1 = 0x96b;
LAB_00441b61:
    *(undefined2 *)(param_2 + 0x1c) = uVar1;
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00411e30(&local_14);
    iVar4 = rand();
    local_14 = (((float)iVar4 * 0.5) / 32767.0 + 1.2) * 0.8;
    local_10 = local_14;
    local_c = local_14;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x28) = 0x3f666666;
    goto LAB_00441bd5;
  case 0x93:
    *(undefined2 *)(param_2 + 0x1c) = 0x972;
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00411e30(&local_14);
    local_14 = 0.8;
    local_10 = 0.8;
    local_c = 2.0;
    FUN_00411e30(&local_14);
    goto LAB_00441bd5;
  case 0x94:
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_3 + 0x11);
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_3 + 0x12);
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 3) + 0x53f;
    *(short *)(param_2 + 0x16) = (short)((int)param_3[3] % 3) + 0x542;
    *(undefined2 *)(param_2 + 0x1c) = 0x545;
    sVar3 = 0x546;
    goto LAB_0043fa27;
  case 0x95:
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_3 + 0x11);
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_3 + 0x12);
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 3) + 0x547;
    *(short *)(param_2 + 0x16) = (short)((int)param_3[3] % 3) + 0x54a;
    *(undefined2 *)(param_2 + 0x1c) = 0x54d;
    sVar3 = 0x546;
LAB_0043fa27:
    *(short *)(param_2 + 0x18) = sVar3;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x96:
    uVar1 = 0x96c;
    goto LAB_00441bfe;
  case 0x97:
    *(undefined2 *)(param_2 + 0x14) = 0xf3;
    *(undefined2 *)(param_2 + 0x22) = 0xf4;
    *(undefined2 *)(param_2 + 0x1a) = 0xf5;
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 2;
    local_14 = 3.0;
    local_10 = 4.0;
    local_c = -8.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x48) = 0xc2340000;
    *(undefined4 *)(param_2 + 0x5c) = 0x42340000;
    *(undefined4 *)(param_2 + 0x24) = 0x3f99999a;
    *(undefined4 *)(param_2 + 0x44) = 0x3f19999a;
    *(undefined4 *)(param_2 + 0x30) = 0x3f800000;
    local_14 = 1.0;
    local_10 = 1.0;
    local_c = 1.875;
    FUN_00411e30(&local_14);
    local_14 = 6.5;
    local_10 = 3.0;
    local_c = -1.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 3.0;
    local_c = 0.0;
    goto LAB_00440ef2;
  case 0x98:
    *(undefined4 *)(param_2 + 0x14) = 0x96e096d;
    *(undefined4 *)(param_2 + 0x24) = 0x3f99999a;
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00411e30(&local_14);
    local_14 = 2.4;
    local_10 = 2.4;
    local_c = 6.0;
    FUN_00411e30(&local_14);
    uVar2 = 0x531;
    goto LAB_00441bda;
  case 0x99:
    uVar1 = 0x96f;
    goto LAB_00441bfe;
  case 0x9a:
    uVar1 = 0x970;
    goto LAB_00441bfe;
  case 0x9b:
    uVar1 = 0x971;
LAB_00441bfe:
    *(undefined2 *)(param_2 + 0x1c) = uVar1;
    *(undefined4 *)(param_2 + 0x28) = 0x3f99999a;
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00411e30(&local_14);
    local_14 = 2.4;
    local_10 = 2.4;
    local_c = 6.0;
    FUN_00411e30(&local_14);
LAB_00441bd5:
    uVar2 = 0x131;
LAB_00441bda:
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | uVar2;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  default:
    goto switchD_0043f962_default;
  }
  *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x20;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00444270 @ 00444270  kind=gamemisc  attributed-by=none  size=377 */

int FUN_00444270(uint param_1)

{
  int in_ECX;
  float10 fVar1;
  float fVar2;
  float fVar3;
  
  if ((int)param_1 < 0) {
    param_1 = (uint)*(byte *)(in_ECX + 0x68);
  }
  switch(param_1) {
  case 0:
  case 0x32:
  case 0x60:
    return 100;
  default:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 500.0;
    break;
  case 3:
  case 4:
  case 5:
  case 0x3e:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 300.0;
    break;
  case 7:
  case 0xe:
  case 0x12:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 200.0;
    break;
  case 10:
    return 600;
  case 0xb:
  case 0x3c:
  case 0x3d:
  case 0x68:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 100.0;
    break;
  case 0xf:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 400.0;
    break;
  case 0x16:
  case 0x1a:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x5e:
  case 0x5f:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 100.0;
    break;
  case 0x17:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 10.0;
    break;
  case 0x30:
    return 0;
  case 0x36:
    return 400;
  case 0x39:
  case 0x3a:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 300.0;
    break;
  case 0x41:
  case 0x42:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 200.0;
    break;
  case 0x43:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 100.0;
    break;
  case 0x44:
  case 0x45:
  case 0x5d:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 800.0;
    break;
  case 0x47:
  case 0x48:
    return 200;
  }
  return (int)(fVar2 / (fVar3 * *(float *)(in_ECX + 0x17c)));
}


/* FUN_00444680 @ 00444680  kind=gamemisc  attributed-by=none  size=218 */

uint FUN_00444680(void)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = (uint)*(ushort *)(in_ECX + 0x7e);
  if (((*(ushort *)(in_ECX + 0x7e) & 0x1a00) == 0) &&
     ((((((((uVar1 = *(uint *)(in_ECX + 100), uVar1 == 0x5c || (uVar1 == 0x4a)) || (uVar1 == 0x22))
          || (((uVar1 == 0x19 || (uVar1 == 0x37)) ||
              ((uVar1 == 0x35 || ((uVar1 == 0x57 || (uVar1 == 0x44)))))))) || (uVar1 == 0x43)) ||
        ((((((uVar1 == 0x5d || (uVar1 == 0x6a)) || (uVar1 == 0x6b)) ||
           ((uVar1 == 0x23 || (uVar1 == 0x3a)))) || (uVar1 == 0x39)) ||
         (((uVar1 == 0x93 || (uVar1 == 0x91)) ||
          (((uVar1 == 0x92 || (((uVar1 == 0x16 || (uVar1 == 0x17)) || (uVar1 == 0x62)))) ||
           (((uVar1 == 0x38 || (uVar1 == 0x1e)) || (uVar1 == 0x1f)))))))))) ||
       (((uVar1 == 0x20 || (uVar1 == 0x13)) ||
        ((uVar1 == 0x1a || (((uVar1 == 0x1b || (uVar1 == 0x21)) || (uVar1 == 100)))))))) ||
      ((uVar1 == 0x14 || (uVar1 == 0x59)))))) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}


/* FUN_00444820 @ 00444820  kind=gamemisc  attributed-by=none  size=54 */

undefined1 FUN_00444820(void)

{
  char cVar1;
  char *in_ECX;
  
  if ((*in_ECX == '\x03') &&
     ((((((cVar1 = in_ECX[1], cVar1 == '\x0f' || (cVar1 == '\x10')) || (cVar1 == '\x11')) ||
        ((cVar1 == '\x05' || (cVar1 == '\n')))) ||
       ((cVar1 == '\v' || ((cVar1 == '\x12' || (cVar1 == '\b')))))) ||
      ((cVar1 == '\x06' || (cVar1 == '\a')))))) {
    return 1;
  }
  return 0;
}


/* FUN_00444a90 @ 00444a90  kind=gamemisc  attributed-by=none  size=74 */

undefined4 FUN_00444a90(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x1d28) == 0) {
    return 0;
  }
  puVar1 = *(undefined4 **)(*(int *)(in_ECX + 0x1d28) + 0x14);
  puVar2 = (undefined4 *)*puVar1;
  while( true ) {
    if (puVar2 == puVar1) {
      return 0;
    }
    cVar3 = FUN_0042f4a0(puVar2 + 2);
    if (cVar3 != '\0') break;
    puVar2 = (undefined4 *)*puVar2;
  }
  return 1;
}


/* FUN_00445ff0 @ 00445ff0  kind=gamemisc  attributed-by=none  size=173 */

float10 FUN_00445ff0(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = 2.0;
  libm_sse2_pow_precise();
  dVar2 = 2.0;
  libm_sse2_pow_precise();
  dVar3 = 2.0;
  libm_sse2_pow_precise();
  return (float10)(((float)dVar1 * (float)dVar2) / (float)dVar3);
}


/* FUN_00446950 @ 00446950  kind=gamemisc  attributed-by=none  size=57 */

void FUN_00446950(undefined4 *param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0x1a:
  case 0x1e:
    param_1[2] = 0xbf666666;
    *param_1 = 0;
    param_1[1] = 0;
    return;
  default:
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    return;
  case 0x21:
    param_1[2] = 0xbe4ccccd;
    *param_1 = 0;
    param_1[1] = 0;
    return;
  case 0x4a:
    param_1[2] = 0xbe99999a;
    *param_1 = 0;
    param_1[1] = 0;
    return;
  case 0x4b:
    param_1[2] = 0x3dcccccd;
    *param_1 = 0;
    param_1[1] = 0;
    return;
  case 0x97:
    param_1[2] = 0xbeb33333;
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
}


/* FUN_00446e80 @ 00446e80  kind=gamemisc  attributed-by=none  size=622 */

void FUN_00446e80(void)

{
  ushort uVar1;
  int *piVar2;
  uint uVar3;
  int in_ECX;
  float10 fVar4;
  double dVar5;
  int *local_24;
  int local_20;
  float local_1c;
  float local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e2bd8;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  dVar5 = 2.0;
  libm_sse2_pow_precise(uVar3);
  local_18 = (float)dVar5;
  dVar5 = 2.0;
  libm_sse2_pow_precise();
  local_18 = *(float *)(in_ECX + 0x180) * (float)dVar5 * local_18;
  local_14 = local_18;
  FUN_0043df60(&local_24);
  local_8 = 0;
  if (local_20 == 0) {
    uVar1 = *(ushort *)(in_ECX + 0x7e);
    if ((uVar1 & 8) != 0) {
      dVar5 = 2.0;
      libm_sse2_pow_precise(uVar3);
      local_1c = (float)dVar5;
      dVar5 = 2.0;
      libm_sse2_pow_precise();
      local_18 = local_1c * (float)dVar5 * 2.0 + local_14;
      local_14 = local_18;
    }
    if ((uVar1 & 0x10) != 0) {
      dVar5 = 2.0;
      libm_sse2_pow_precise(uVar3);
      local_1c = (float)dVar5;
      dVar5 = 2.0;
      libm_sse2_pow_precise();
      local_18 = local_1c * (float)dVar5 * 8.0 + local_14;
    }
  }
  else {
    for (piVar2 = (int *)*local_24; piVar2 != local_24; piVar2 = (int *)*piVar2) {
      fVar4 = (float10)FUN_004c7f60();
      local_1c = (float)fVar4;
      local_18 = local_1c + local_14;
      local_14 = local_18;
    }
  }
  piVar2 = (int *)*local_24;
  *local_24 = (int)local_24;
  local_24[1] = (int)local_24;
  if (piVar2 != local_24) {
                    /* WARNING: Subroutine does not return */
    operator_delete(piVar2);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(local_24);
}


/* FUN_00447700 @ 00447700  kind=gamemisc  attributed-by=none  size=427 */

float10 FUN_00447700(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  float10 fVar5;
  float fVar6;
  float local_8;
  
  local_8 = 1.0;
  if (*(char *)(in_ECX + 0x60) != '\0') {
    local_8 = (float)*(byte *)(in_ECX + 0x1a8) * 0.0625 + 0.75;
  }
  cVar1 = *(char *)(in_ECX + 0x140);
  if ((cVar1 == '\x01') && (*(char *)(in_ECX + 0x141) == '\0')) {
    iVar3 = FUN_00444cb0();
    if ((float)*(int *)(in_ECX + 0x70) / (float)iVar3 <= 1.0) {
      iVar3 = FUN_00444cb0();
      fVar6 = (float)*(int *)(in_ECX + 0x70) / (float)iVar3;
    }
    else {
      fVar6 = 1.0;
    }
    local_8 = fVar6 * 0.5 + local_8;
  }
  if ((cVar1 == '\x03') && (*(char *)(in_ECX + 0x141) == '\x01')) {
    iVar3 = FUN_00444cb0();
    if ((float)*(int *)(in_ECX + 0x70) / (float)iVar3 <= 1.0) {
      iVar3 = FUN_00444cb0();
      fVar6 = (float)*(int *)(in_ECX + 0x70) / (float)iVar3;
    }
    else {
      fVar6 = 1.0;
    }
    local_8 = fVar6 + local_8;
  }
  fVar5 = (float10)FUN_004478b0();
  piVar2 = *(int **)(in_ECX + 0x1178);
  local_8 = (float)fVar5 + local_8;
  piVar4 = (int *)*piVar2;
  if (piVar4 != piVar2) {
    while ((char)piVar4[2] != '\f') {
      piVar4 = (int *)*piVar4;
      if (piVar4 == piVar2) {
        return (float10)local_8;
      }
    }
    if (piVar4 != (int *)0xfffffff8) {
      iVar3 = *(int *)(in_ECX + 0x1158);
      if ((iVar3 == 0) && (*(char *)(in_ECX + 0x60) != '\0')) {
        iVar3 = *(int *)(in_ECX + 400) / 2 + *(byte *)(in_ECX + 0x1a8) + 1;
      }
      local_8 = ((1.0 - 1.0 / ((float)iVar3 * 0.1 + 1.0)) + 1.0) * local_8;
    }
  }
  return (float10)local_8;
}


/* FUN_004478b0 @ 004478b0  kind=gamemisc  attributed-by=none  size=586 */

float10 FUN_004478b0(void)

{
  int in_ECX;
  float10 fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  dVar2 = 2.0;
  libm_sse2_pow_precise();
  dVar3 = 2.0;
  libm_sse2_pow_precise();
  dVar4 = 2.0;
  libm_sse2_pow_precise();
  local_8 = (((float)dVar2 * (float)dVar3) / (float)dVar4) * 0.1;
  if (*(char *)(in_ECX + 0x990) == '\x03') {
    fVar1 = (float10)FUN_004c7c00();
    local_8 = (float)fVar1 + local_8;
  }
  if (*(char *)(in_ECX + 0xaa8) == '\x03') {
    fVar1 = (float10)FUN_004c7c00();
    local_8 = (float)fVar1 + local_8;
  }
  if (*(char *)(in_ECX + 0x530) == '\x04') {
    fVar1 = (float10)FUN_004c7c00();
    local_8 = (float)fVar1 + local_8;
  }
  if (*(char *)(in_ECX + 0x648) == '\x06') {
    fVar1 = (float10)FUN_004c7c00();
    local_8 = (float)fVar1 + local_8;
  }
  if (*(char *)(in_ECX + 0x760) == '\x05') {
    fVar1 = (float10)FUN_004c7c00();
    local_8 = (float)fVar1 + local_8;
  }
  if (*(char *)(in_ECX + 0x878) == '\a') {
    fVar1 = (float10)FUN_004c7c00();
    local_8 = (float)fVar1 + local_8;
  }
  if (*(char *)(in_ECX + 0x418) == '\b') {
    fVar1 = (float10)FUN_004c7c00();
    local_8 = (float)fVar1 + local_8;
  }
  if (*(char *)(in_ECX + 0xbc0) == '\t') {
    fVar1 = (float10)FUN_004c7c00();
    local_8 = (float)fVar1 + local_8;
  }
  local_c = local_8;
  if (*(char *)(in_ECX + 0xcd8) == '\t') {
    fVar1 = (float10)FUN_004c7c00();
    local_c = (float)fVar1 + local_8;
  }
  return (float10)local_c;
}


/* FUN_00447e10 @ 00447e10  kind=gamemisc  attributed-by=none  size=413 */

void FUN_00447e10(void)

{
  int iVar1;
  int in_ECX;
  undefined4 local_20;
  undefined2 local_1c;
  undefined4 local_1a;
  undefined4 local_16;
  undefined4 local_12;
  undefined4 local_e;
  undefined2 local_a;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_20 = 0;
  local_1a = 0;
  local_a = 0;
  local_1c = 5;
  local_16 = 0x40004;
  local_12 = 0xff000a;
  local_e = 0x110000;
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x1c) + 0x158))
                    (*(int **)(in_ECX + 0x1c),&local_20,in_ECX + 0x20);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x1c) + 0x16c))
                      (*(int **)(in_ECX + 0x1c),&DAT_006fd928,in_ECX + 4);
    if (iVar1 == 0) {
      *(undefined4 *)(in_ECX + 0x68) = 0;
      *(undefined4 *)(in_ECX + 0x4c) = 0;
      *(undefined4 *)(in_ECX + 0x2c) = 0x14;
      *(undefined4 *)(in_ECX + 0x28) = 0x18;
      *(undefined4 *)(in_ECX + 0x24) = 0x1b;
      *(undefined4 *)(in_ECX + 0x30) = 0x20;
      *(undefined4 *)(in_ECX + 0x34) = 0x25;
      *(undefined4 *)(in_ECX + 0x38) = 0x21;
      *(undefined4 *)(in_ECX + 0x3c) = 0x22;
      *(undefined4 *)(in_ECX + 0x40) = 0x23;
      *(undefined4 *)(in_ECX + 0x44) = 0x26;
      *(undefined4 *)(in_ECX + 0x48) = 0x27;
      *(undefined4 *)(in_ECX + 0x60) = 0x1e;
      *(undefined4 *)(in_ECX + 100) = 0x1f;
      *(undefined4 *)(in_ECX + 0x6c) = 10;
      *(undefined4 *)(in_ECX + 0x70) = 0x24;
      *(undefined4 *)(in_ECX + 0x50) = 1;
      *(undefined4 *)(in_ECX + 0x54) = 2;
      *(undefined4 *)(in_ECX + 0x58) = 4;
      *(undefined4 *)(in_ECX + 0x5c) = 3;
      iVar1 = (**(code **)(**(int **)(in_ECX + 0x1c) + 0x1a8))
                        (*(int **)(in_ECX + 0x1c),&DAT_006feb50,in_ECX + 8);
      if (iVar1 == 0) {
        iVar1 = (**(code **)(**(int **)(in_ECX + 0x1c) + 0x1a8))
                          (*(int **)(in_ECX + 0x1c),&DAT_006fefa0,in_ECX + 0xc);
        if (iVar1 == 0) {
          iVar1 = (**(code **)(**(int **)(in_ECX + 0x1c) + 0x1a8))
                            (*(int **)(in_ECX + 0x1c),&DAT_006ff7c8,in_ECX + 0x10);
          if (iVar1 == 0) {
            iVar1 = (**(code **)(**(int **)(in_ECX + 0x1c) + 0x1a8))
                              (*(int **)(in_ECX + 0x1c),&DAT_006ff1d0,in_ECX + 0x14);
            if (iVar1 == 0) {
              (**(code **)(**(int **)(in_ECX + 0x1c) + 0x1a8))
                        (*(int **)(in_ECX + 0x1c),&DAT_006ff5c0,in_ECX + 0x18);
              __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
              return;
            }
          }
        }
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00448170 @ 00448170  kind=gamemisc  attributed-by=none  size=263 */

void FUN_00448170(undefined4 param_1,undefined4 param_2,float *param_3,undefined4 param_4)

{
  int in_ECX;
  double dVar1;
  undefined4 uStack_64;
  int *piStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int *piStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  int *piStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_24 [24];
  uint local_c;
  
  local_c = DAT_0076aa78 ^ (uint)auStack_24;
  uStack_34 = 1;
  uStack_38 = param_1;
  piStack_40 = *(int **)(in_ECX + 0x1c);
  uStack_3c = *(undefined4 *)(in_ECX + 0x3c);
  fStack_44 = 6.291328e-39;
  (**(code **)(*piStack_40 + 0x178))();
  piStack_50 = *(int **)(in_ECX + 0x1c);
  fStack_44 = 1.4013e-45;
  fStack_48 = (float)param_2;
  fStack_4c = *(float *)(in_ECX + 0x40);
  uStack_54 = 0x4481bc;
  (**(code **)(*piStack_50 + 0x178))();
  piStack_60 = *(int **)(in_ECX + 0x1c);
  uStack_54 = 1;
  uStack_58 = param_4;
  uStack_5c = *(undefined4 *)(in_ECX + 0x44);
  uStack_64 = 0x4481ce;
  (**(code **)(*piStack_60 + 0x178))();
  dVar1 = (double)(*param_3 * *param_3 + param_3[1] * param_3[1] + param_3[2] * param_3[2]);
  uStack_64 = 0x448205;
  libm_sse2_sqrt_precise();
  fStack_44 = 1.0 / (float)dVar1;
  uStack_64 = 1;
  fStack_4c = *param_3 * fStack_44;
  fStack_48 = param_3[1] * fStack_44;
  fStack_44 = param_3[2] * fStack_44;
  piStack_40 = (int *)0x0;
  (**(code **)(*(int *)piStack_50[7] + 0x178))((int *)piStack_50[7],piStack_50[0xe],&fStack_4c);
  __security_check_cookie((uint)fStack_4c ^ (uint)&uStack_64);
  return;
}


/* FUN_004482a0 @ 004482a0  kind=gamemisc  attributed-by=none  size=3166 */

void FUN_004482a0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int in_ECX;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
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
  float local_c8 [4];
  float local_b8 [4];
  float local_a8 [4];
  float afStack_98 [4];
  float local_88 [7];
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48 [7];
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
  fVar12 = *param_1;
  pfVar8 = param_1;
  pfVar9 = local_c8;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar9 = *pfVar8;
    pfVar8 = pfVar8 + 1;
    pfVar9 = pfVar9 + 1;
  }
  local_b8[0] = param_1[1];
  local_a8[0] = param_1[2];
  local_c8[1] = param_1[4];
  local_b8[1] = param_1[5];
  local_a8[1] = param_1[6];
  local_c8[2] = param_1[8];
  local_b8[2] = param_1[9];
  local_a8[2] = param_1[10];
  local_c8[3] = param_1[0xc];
  local_b8[3] = param_1[0xd];
  local_a8[3] = param_1[0xe];
  local_c8[0] = fVar12;
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x178))
            (*(int **)(in_ECX + 0x1c),*(undefined4 *)(in_ECX + 0x24),local_c8,3);
  pfVar8 = param_2;
  pfVar9 = local_48;
  for (iVar7 = 0x10; fVar6 = local_20, fVar5 = local_24, fVar18 = local_28, fVar17 = local_2c,
      fVar4 = local_48[6], fVar3 = local_48[5], fVar13 = local_48[4], fVar2 = local_48[3],
      fVar16 = local_48[2], fVar14 = local_48[1], fVar12 = local_48[0], iVar7 != 0;
      iVar7 = iVar7 + -1) {
    *pfVar9 = *pfVar8;
    pfVar8 = pfVar8 + 1;
    pfVar9 = pfVar9 + 1;
  }
  fVar11 = param_1[4] * local_48[0];
  local_48[0] = local_48[0] * *param_1 + local_48[4] * param_1[1] + local_28 * param_1[2] +
                local_18 * param_1[3];
  local_48[4] = local_48[4] * param_1[5] + fVar11 + local_28 * param_1[6] + local_18 * param_1[7];
  fVar11 = param_1[0xe];
  fVar1 = param_1[0xf];
  local_28 = param_1[8] * fVar12 + param_1[9] * fVar13 + local_28 * param_1[10] +
             local_18 * param_1[0xb];
  local_18 = param_1[0xc] * fVar12 + param_1[0xd] * fVar13 + fVar11 * fVar18 + local_18 * fVar1;
  fVar12 = param_1[4] * local_48[1];
  local_48[1] = local_48[1] * *param_1 + local_48[5] * param_1[1] + local_24 * param_1[2] +
                local_14 * param_1[3];
  fVar13 = param_1[9] * local_48[5];
  local_48[5] = local_48[5] * param_1[5] + fVar12 + local_24 * param_1[6] + local_14 * param_1[7];
  local_24 = param_1[8] * fVar14 + fVar13 + local_24 * param_1[10] + local_14 * param_1[0xb];
  local_14 = param_1[0xc] * fVar14 + param_1[0xd] * fVar3 + fVar11 * fVar5 + local_14 * fVar1;
  fVar12 = param_1[4] * local_48[2];
  local_48[2] = local_48[2] * *param_1 + local_48[6] * param_1[1] + local_20 * param_1[2] +
                local_10 * param_1[3];
  fVar14 = param_1[9] * local_48[6];
  local_48[6] = local_48[6] * param_1[5] + fVar12 + local_20 * param_1[6] + local_10 * param_1[7];
  local_20 = param_1[8] * fVar16 + fVar14 + local_20 * param_1[10] + local_10 * param_1[0xb];
  local_10 = param_1[0xc] * fVar16 + param_1[0xd] * fVar4 + fVar11 * fVar6 + local_10 * fVar1;
  fVar12 = param_1[4] * local_48[3];
  local_48[3] = local_48[3] * *param_1 + local_2c * param_1[1] + local_1c * param_1[2] +
                local_c * param_1[3];
  fVar14 = param_1[9] * local_2c;
  local_2c = local_2c * param_1[5] + fVar12 + local_1c * param_1[6] + local_c * param_1[7];
  fVar11 = fVar11 * local_1c;
  local_1c = param_1[8] * fVar2 + fVar14 + local_1c * param_1[10] + local_c * param_1[0xb];
  pfVar8 = local_88 + 1;
  local_c = param_1[0xc] * fVar2 + param_1[0xd] * fVar17 + fVar11 + local_c * fVar1;
  pfVar9 = local_48;
  pfVar10 = local_c8;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar10 = *pfVar9;
    pfVar9 = pfVar9 + 1;
    pfVar10 = pfVar10 + 1;
  }
  pfVar9 = local_48;
  pfVar10 = local_88;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar10 = *pfVar9;
    pfVar9 = pfVar9 + 1;
    pfVar10 = pfVar10 + 1;
  }
  iVar7 = 0;
  do {
    local_c8[iVar7] = pfVar8[-1];
    local_b8[iVar7] = *pfVar8;
    local_a8[iVar7] = pfVar8[1];
    afStack_98[iVar7] = pfVar8[2];
    iVar7 = iVar7 + 1;
    pfVar8 = pfVar8 + 4;
  } while (iVar7 < 4);
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x178))
            (*(int **)(in_ECX + 0x1c),*(undefined4 *)(in_ECX + 0x28),local_c8,3);
  pfVar8 = local_48;
  for (iVar7 = 0x10; fVar6 = local_20, fVar5 = local_24, fVar18 = local_28, fVar17 = local_2c,
      fVar4 = local_48[6], fVar3 = local_48[5], fVar13 = local_48[4], fVar2 = local_48[3],
      fVar16 = local_48[2], fVar14 = local_48[1], fVar12 = local_48[0], iVar7 != 0;
      iVar7 = iVar7 + -1) {
    *pfVar8 = *param_3;
    param_3 = param_3 + 1;
    pfVar8 = pfVar8 + 1;
  }
  fVar11 = param_2[0xe];
  fVar1 = param_2[0xf];
  fVar19 = local_48[0] * *param_2 + local_48[4] * param_2[1] + local_28 * param_2[2] +
           local_18 * param_2[3];
  local_48[0] = fVar19;
  fVar20 = param_2[4] * fVar12 + local_48[4] * param_2[5] + local_28 * param_2[6] +
           param_2[7] * local_18;
  fVar15 = param_2[9] * local_48[4];
  local_48[4] = fVar20;
  fVar15 = param_2[8] * fVar12 + fVar15 + param_2[10] * local_28 + param_2[0xb] * local_18;
  local_28 = fVar15;
  fVar13 = param_2[0xc] * fVar12 + param_2[0xd] * fVar13 + fVar11 * fVar18 + fVar1 * local_18;
  local_18 = fVar13;
  local_48[1] = local_48[1] * *param_2 + local_48[5] * param_2[1] + local_24 * param_2[2] +
                local_14 * param_2[3];
  fVar12 = param_2[9] * local_48[5];
  local_48[5] = param_2[4] * fVar14 + local_48[5] * param_2[5] + local_24 * param_2[6] +
                local_14 * param_2[7];
  local_24 = param_2[8] * fVar14 + fVar12 + param_2[10] * local_24 + local_14 * param_2[0xb];
  local_14 = param_2[0xc] * fVar14 + param_2[0xd] * fVar3 + fVar11 * fVar5 + local_14 * fVar1;
  local_48[2] = local_48[2] * *param_2 + local_48[6] * param_2[1] + local_20 * param_2[2] +
                local_10 * param_2[3];
  fVar12 = param_2[9] * local_48[6];
  local_48[6] = param_2[4] * fVar16 + local_48[6] * param_2[5] + local_20 * param_2[6] +
                local_10 * param_2[7];
  local_20 = param_2[8] * fVar16 + fVar12 + local_20 * param_2[10] + local_10 * param_2[0xb];
  fVar14 = fVar11 * local_1c;
  local_10 = param_2[0xc] * fVar16 + param_2[0xd] * fVar4 + fVar11 * fVar6 + local_10 * fVar1;
  local_48[3] = local_48[3] * *param_2 + local_2c * param_2[1] + local_1c * param_2[2] +
                local_c * param_2[3];
  fVar12 = param_2[9] * local_2c;
  local_2c = param_2[4] * fVar2 + local_2c * param_2[5] + local_1c * param_2[6] +
             local_c * param_2[7];
  local_1c = param_2[8] * fVar2 + fVar12 + local_1c * param_2[10] + local_c * param_2[0xb];
  fVar12 = param_1[1];
  local_c = param_2[0xc] * fVar2 + param_2[0xd] * fVar17 + fVar14 + local_c * fVar1;
  fVar14 = *param_1;
  pfVar8 = local_48;
  pfVar9 = local_88;
  for (iVar7 = 0x10; fVar4 = local_6c, fVar3 = local_88[3], fVar2 = local_88[2],
      fVar16 = local_88[1], iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar9 = *pfVar8;
    pfVar8 = pfVar8 + 1;
    pfVar9 = pfVar9 + 1;
  }
  local_88[0] = fVar19 * fVar14 + fVar20 * fVar12 + fVar15 * param_1[2] + fVar13 * param_1[3];
  fVar12 = param_1[0xe];
  local_88[4] = fVar19 * param_1[4] + fVar20 * param_1[5] + fVar15 * param_1[6] +
                fVar13 * param_1[7];
  fVar14 = param_1[0xc];
  local_68 = fVar19 * param_1[8] + fVar20 * param_1[9] + fVar15 * param_1[10] +
             fVar13 * param_1[0xb];
  local_58 = fVar19 * fVar14 + fVar20 * param_1[0xd] + fVar15 * fVar12 + fVar13 * param_1[0xf];
  local_88[1] = local_88[1] * *param_1 + local_88[5] * param_1[1] + local_64 * param_1[2] +
                local_54 * param_1[3];
  fVar13 = local_88[5] * param_1[9];
  fVar17 = local_88[5] * param_1[0xd];
  local_88[5] = fVar16 * param_1[4] + local_88[5] * param_1[5] + local_64 * param_1[6] +
                local_54 * param_1[7];
  fVar18 = local_64 * fVar12;
  local_64 = fVar16 * param_1[8] + fVar13 + local_64 * param_1[10] + local_54 * param_1[0xb];
  local_54 = fVar16 * fVar14 + fVar17 + fVar18 + local_54 * param_1[0xf];
  local_88[2] = local_88[2] * *param_1 + local_88[6] * param_1[1] + local_60 * param_1[2] +
                local_50 * param_1[3];
  fVar16 = local_88[6] * param_1[9];
  fVar13 = local_88[6] * param_1[0xd];
  local_88[6] = fVar2 * param_1[4] + local_88[6] * param_1[5] + local_60 * param_1[6] +
                local_50 * param_1[7];
  fVar17 = local_60 * fVar12;
  local_60 = fVar2 * param_1[8] + fVar16 + local_60 * param_1[10] + local_50 * param_1[0xb];
  local_50 = fVar2 * fVar14 + fVar13 + fVar17 + local_50 * param_1[0xf];
  local_88[3] = local_88[3] * *param_1 + local_6c * param_1[1] + local_5c * param_1[2] +
                local_4c * param_1[3];
  local_6c = fVar3 * param_1[4] + local_6c * param_1[5] + local_5c * param_1[6] +
             local_4c * param_1[7];
  fVar12 = local_5c * fVar12;
  local_5c = fVar3 * param_1[8] + fVar4 * param_1[9] + local_5c * param_1[10] +
             local_4c * param_1[0xb];
  pfVar8 = local_48 + 1;
  local_4c = fVar3 * fVar14 + fVar4 * param_1[0xd] + fVar12 + local_4c * param_1[0xf];
  pfVar9 = local_88;
  pfVar10 = local_c8;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar10 = *pfVar9;
    pfVar9 = pfVar9 + 1;
    pfVar10 = pfVar10 + 1;
  }
  pfVar9 = local_88;
  pfVar10 = local_48;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar10 = *pfVar9;
    pfVar9 = pfVar9 + 1;
    pfVar10 = pfVar10 + 1;
  }
  iVar7 = 0;
  do {
    local_c8[iVar7] = pfVar8[-1];
    local_b8[iVar7] = *pfVar8;
    local_a8[iVar7] = pfVar8[1];
    afStack_98[iVar7] = pfVar8[2];
    iVar7 = iVar7 + 1;
    pfVar8 = pfVar8 + 4;
  } while (iVar7 < 4);
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x178))
            (*(int **)(in_ECX + 0x1c),*(undefined4 *)(in_ECX + 0x2c),local_c8,4);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00449150 @ 00449150  kind=gamemisc  attributed-by=none  size=426 */

basic_ostream<char,std::char_traits<char>_> *
FUN_00449150(basic_ostream<char,std::char_traits<char>_> *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  basic_ostream<char,std::char_traits<char>_> *pbVar7;
  uint uVar8;
  char *pcVar9;
  bool bVar10;
  __int64 _Var11;
  int local_28;
  int iStack_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e2c10;
  local_10 = ExceptionList;
  uVar5 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  bVar4 = false;
  if (*param_2 == '\0') {
    uVar8 = 0;
  }
  else {
    pcVar9 = param_2;
    do {
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    uVar8 = (int)pcVar9 - (int)(param_2 + 1);
  }
  iVar6 = param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset;
  iStack_24 = *(int *)((int)&param_1[9].vbtablePtr + iVar6);
  uVar2 = *(uint *)((int)&param_1[8].vbtablePtr + iVar6);
  if ((iStack_24 < 0) ||
     ((iStack_24 < 1 && (((uVar2 == 0 || (iStack_24 < 0)) || ((iStack_24 < 1 && (uVar2 <= uVar8)))))
      ))) {
    iStack_24 = 0;
    local_28 = 0;
  }
  else {
    local_28 = uVar2 - uVar8;
    iStack_24 = iStack_24 - (uint)(uVar2 < uVar8);
  }
  piVar3 = *(int **)((int)&param_1[0xe].vbtablePtr + iVar6);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))();
  }
  local_8 = 0;
  iVar6 = param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset;
  if ((*(int *)((int)&param_1[3].vbtablePtr + iVar6) == 0) &&
     (pbVar7 = *(basic_ostream<char,std::char_traits<char>_> **)
                ((int)&param_1[0xf].vbtablePtr + iVar6),
     pbVar7 != (basic_ostream<char,std::char_traits<char>_> *)0x0)) {
    std::basic_ostream<char,std::char_traits<char>_>::flush(pbVar7);
  }
  iVar6 = param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset;
  local_8 = 1;
  if (*(int *)((int)&param_1[3].vbtablePtr + iVar6) != 0) {
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)
               ((int)&param_1->vbtablePtr +
               param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset),4,false);
    local_8 = 0xffffffff;
    bVar4 = std::uncaught_exception();
    if (!bVar4) {
      std::basic_ostream<char,std::char_traits<char>_>::_Osfx(param_1);
    }
    piVar3 = *(int **)((int)&param_1[0xe].vbtablePtr +
                      param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))();
    }
    ExceptionList = local_10;
    return param_1;
  }
  local_8 = 2;
  if ((*(uint *)((int)&param_1[5].vbtablePtr + iVar6) & 0x1c0) != 0x40) {
    while( true ) {
      if ((iStack_24 < 0) || ((iStack_24 < 1 && (local_28 == 0)))) goto LAB_00449274;
      iVar6 = param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset;
      iVar6 = std::basic_streambuf<char,std::char_traits<char>_>::sputc
                        (*(basic_streambuf<char,std::char_traits<char>_> **)
                          ((int)&param_1[0xe].vbtablePtr + iVar6),
                         *(char *)((int)&param_1[0x10].vbtablePtr + iVar6));
      if (iVar6 == -1) break;
      bVar10 = local_28 != 0;
      local_28 = local_28 + -1;
      iStack_24 = iStack_24 + -1 + (uint)bVar10;
    }
    bVar4 = true;
LAB_00449274:
    if (bVar4) goto LAB_004492e3;
  }
  _Var11 = std::basic_streambuf<char,std::char_traits<char>_>::sputn
                     (*(basic_streambuf<char,std::char_traits<char>_> **)
                       ((int)&param_1[0xe].vbtablePtr +
                       param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset),param_2,
                      (ulonglong)uVar5 << 0x20);
  if (((uint)_Var11 == uVar8) && ((int)((ulonglong)_Var11 >> 0x20) == 0)) {
    while ((-1 < iStack_24 &&
           (((0 < iStack_24 || (local_28 != 0)) &&
            (iVar6 = param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset,
            iVar6 = std::basic_streambuf<char,std::char_traits<char>_>::sputc
                              (*(basic_streambuf<char,std::char_traits<char>_> **)
                                ((int)&param_1[0xe].vbtablePtr + iVar6),
                               *(char *)((int)&param_1[0x10].vbtablePtr + iVar6)), iVar6 != -1)))))
    {
      bVar4 = local_28 != 0;
      local_28 = local_28 + -1;
      iStack_24 = iStack_24 + -1 + (uint)bVar4;
    }
  }
LAB_004492e3:
  iVar6 = param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset;
  *(undefined4 *)((int)&param_1[8].vbtablePtr + iVar6) = 0;
  *(undefined4 *)((int)&param_1[9].vbtablePtr + iVar6) = 0;
  pbVar7 = (basic_ostream<char,std::char_traits<char>_> *)FUN_0044931a();
  return pbVar7;
}


/* FUN_0044931a @ 0044931a  kind=gamemisc  attributed-by=none  size=90 */

undefined4 FUN_0044931a(void)

{
  basic_ostream<char,std::char_traits<char>_> *this;
  int *piVar1;
  bool bVar2;
  int *in_EDX;
  int unaff_EBP;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EBP + -4) = 1;
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)(*(int *)(*in_EDX + 4) + (int)in_EDX),
             unaff_EDI,false);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  bVar2 = std::uncaught_exception();
  this = *(basic_ostream<char,std::char_traits<char>_> **)(unaff_EBP + -0x24);
  if (!bVar2) {
    std::basic_ostream<char,std::char_traits<char>_>::_Osfx(this);
  }
  piVar1 = *(int **)((int)&this[0xe].vbtablePtr +
                    this->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 8);
}


/* FUN_00449720 @ 00449720  kind=gamemisc  attributed-by=none  size=121 */

undefined4 FUN_00449720(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  while( true ) {
    iVar1 = FUN_00526480(*(undefined4 *)(in_ECX + 4),"DELETE FROM blobs WHERE key = ?",0xffffffff,
                         &param_1,0);
    if (iVar1 != 0) {
      return 0;
    }
    uVar2 = FUN_0040c380(0xffffffff,0);
    FUN_00526b60(param_1,1,uVar2);
    iVar1 = FUN_00527300(param_1);
    if (iVar1 == 100) break;
    iVar1 = FUN_00528070(param_1);
    if (iVar1 != 0x11) {
      return 0;
    }
  }
  FUN_00528070(param_1);
  return 1;
}


/* FUN_00449920 @ 00449920  kind=gamemisc  attributed-by=none  size=157 */

undefined4 FUN_00449920(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  while( true ) {
    iVar1 = FUN_00526480(*(undefined4 *)(in_ECX + 4),"UPDATE blobs SET key = ? WHERE key = ?",
                         0xffffffff,&param_2,0);
    if (iVar1 != 0) {
      return 0;
    }
    uVar2 = FUN_0040c380(0xffffffff,0);
    FUN_00526b60(param_2,1,uVar2);
    uVar2 = FUN_0040c380(0xffffffff,0);
    FUN_00526b60(param_2,2,uVar2);
    iVar1 = FUN_00527300(param_2);
    if (iVar1 == 100) break;
    iVar1 = FUN_00528070(param_2);
    if (iVar1 != 0x11) {
      return 1;
    }
  }
  FUN_00528070(param_2);
  return 1;
}


/* FUN_004499f0 @ 004499f0  kind=gamemisc  attributed-by=none  size=379 */

undefined4 FUN_004499f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  basic_ostream<char,std::char_traits<char>_> *this;
  int in_ECX;
  _func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
  *p_Var4;
  int local_8;
  
  local_8 = in_ECX;
  iVar2 = FUN_00526480(*(undefined4 *)(in_ECX + 4),"SELECT 1 FROM blobs WHERE key = ?",0xffffffff,
                       &local_8,0);
  if (iVar2 != 0) {
    return 0;
  }
  if (0xf < (uint)param_1[5]) {
    param_1 = (undefined4 *)*param_1;
  }
  iVar2 = FUN_00526b60(local_8,1,param_1,0xffffffff,0);
  if (iVar2 == 0) {
    iVar2 = FUN_00527300(local_8);
    FUN_00528070(local_8);
    uVar1 = param_3;
    if (iVar2 == 100) {
      while (iVar2 = FUN_00526480(*(undefined4 *)(in_ECX + 4),"UPDATE blobs SET value=? WHERE key=?"
                                  ,0xffffffff,&param_3,0), iVar2 == 0) {
        FUN_005267a0(param_3,1,param_2,uVar1,0);
        uVar3 = FUN_0040c380(0xffffffff,0);
        FUN_00526b60(param_3,2,uVar3);
        FUN_00527300(param_3);
        iVar2 = FUN_00528070(param_3);
        if (iVar2 != 0x11) {
          return 1;
        }
      }
    }
    else {
      while (iVar2 = FUN_00526480(*(undefined4 *)(in_ECX + 4),
                                  "INSERT INTO blobs(key, value) VALUES(?, ?)",0xffffffff,&param_3,0
                                 ), iVar2 == 0) {
        uVar3 = FUN_0040c380(0xffffffff,0);
        FUN_00526b60(param_3,1,uVar3);
        FUN_005267a0(param_3,2,param_2,uVar1,0);
        FUN_00527300(param_3);
        iVar2 = FUN_00528070(param_3);
        if (iVar2 != 0x11) {
          return 1;
        }
      }
      p_Var4 = endl_exref;
      this = (basic_ostream<char,std::char_traits<char>_> *)
             FUN_00449150(cout_exref,"DATABASE WRITE ERROR");
      std::basic_ostream<char,std::char_traits<char>_>::operator<<(this,p_Var4);
    }
    return 0;
  }
  return 0;
}


/* FUN_0044a500 @ 0044a500  kind=gamemisc  attributed-by=none  size=114 */

void FUN_0044a500(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 8);
    do {
      if (puVar1 != (undefined4 *)0x8) {
        puVar1[-2] = 0;
        *(undefined2 *)(puVar1 + -1) = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined2 *)(puVar1 + 2) = 0;
        *(undefined1 *)((int)puVar1 + 10) = 0;
        *(undefined2 *)(puVar1 + 3) = 1;
        puVar1[0x44] = 0;
        memset(puVar1 + 4,0,0x100);
      }
      puVar1 = puVar1 + 0x47;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


/* FUN_0044a580 @ 0044a580  kind=gamemisc  attributed-by=none  size=114 */

undefined4 * FUN_0044a580(undefined1 *param_1,undefined1 *param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  if (param_1 != param_2) {
    puVar3 = (undefined1 *)((int)param_3 + 0xe);
    puVar2 = param_1 + 0xe;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(puVar2 + -0xe);
        *(undefined4 *)(puVar3 + -10) = *(undefined4 *)(puVar2 + -10);
        *(undefined4 *)(puVar3 + -6) = *(undefined4 *)(puVar2 + -6);
        puVar3[-2] = puVar2[-2];
        puVar3[-1] = puVar2[-1];
        *puVar3 = *puVar2;
        puVar3[1] = puVar2[1];
        *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(puVar2 + 2);
      }
      param_3 = param_3 + 5;
      puVar1 = puVar2 + 6;
      puVar3 = puVar3 + 0x14;
      puVar2 = puVar2 + 0x14;
    } while (puVar1 != param_2);
    return param_3;
  }
  return param_3;
}


/* FUN_0044a7c0 @ 0044a7c0  kind=gamemisc  attributed-by=none  size=17 */

void FUN_0044a7c0(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  return;
}


/* FUN_0044bc10 @ 0044bc10  kind=gamemisc  attributed-by=none  size=162 */

void FUN_0044bc10(uint param_1)

{
  uint uVar1;
  int *in_ECX;
  
  if (param_1 <= (uint)((in_ECX[2] - in_ECX[1]) / 0x14)) {
    return;
  }
  if (0xcccccccU - (in_ECX[1] - *in_ECX) / 0x14 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar1 = (in_ECX[2] - *in_ECX) / 0x14;
  if (0xccccccc - (uVar1 >> 1) < uVar1) {
    FUN_0044b920();
    return;
  }
  FUN_0044b920();
  return;
}


/* FUN_0044bcc0 @ 0044bcc0  kind=gamemisc  attributed-by=none  size=111 */

int FUN_0044bcc0(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  
  iVar3 = in_ECX[2] - in_ECX[1];
  iVar2 = iVar3 * -0x193d4bb7;
  if ((uint)(iVar3 / 0x11c) < param_1) {
    iVar2 = (in_ECX[1] - *in_ECX) / 0x11c;
    if (0xe6c2b4U - iVar2 < param_1) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("vector<T> too long");
    }
    uVar1 = FUN_00594840(iVar2 + param_1);
    iVar2 = FUN_0044ba10(uVar1);
  }
  return iVar2;
}


/* FUN_0044d4b0 @ 0044d4b0  kind=gamemisc  attributed-by=none  size=216 */

void FUN_0044d4b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *in_ECX;
  
  puVar1 = (undefined4 *)in_ECX[1];
  if ((param_1 < puVar1) && (puVar2 = (undefined4 *)*in_ECX, puVar2 <= param_1)) {
    if (puVar1 == (undefined4 *)in_ECX[2]) {
      FUN_0044bc10(1);
    }
    puVar1 = (undefined4 *)(*in_ECX + (((int)param_1 - (int)puVar2) / 0x14) * 0x14);
    puVar2 = (undefined4 *)in_ECX[1];
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      *(undefined1 *)(puVar2 + 3) = *(undefined1 *)(puVar1 + 3);
      *(undefined1 *)((int)puVar2 + 0xd) = *(undefined1 *)((int)puVar1 + 0xd);
      *(undefined1 *)((int)puVar2 + 0xe) = *(undefined1 *)((int)puVar1 + 0xe);
      *(undefined1 *)((int)puVar2 + 0xf) = *(undefined1 *)((int)puVar1 + 0xf);
      puVar2[4] = puVar1[4];
      in_ECX[1] = in_ECX[1] + 0x14;
      return;
    }
  }
  else {
    if (puVar1 == (undefined4 *)in_ECX[2]) {
      FUN_0044bc10(1);
    }
    puVar1 = (undefined4 *)in_ECX[1];
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_1;
      puVar1[1] = param_1[1];
      puVar1[2] = param_1[2];
      *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 3);
      *(undefined1 *)((int)puVar1 + 0xd) = *(undefined1 *)((int)param_1 + 0xd);
      *(undefined1 *)((int)puVar1 + 0xe) = *(undefined1 *)((int)param_1 + 0xe);
      *(undefined1 *)((int)puVar1 + 0xf) = *(undefined1 *)((int)param_1 + 0xf);
      puVar1[4] = param_1[4];
    }
  }
  in_ECX[1] = in_ECX[1] + 0x14;
  return;
}


/* FUN_0044d660 @ 0044d660  kind=gamemisc  attributed-by=none  size=285 */

int FUN_0044d660(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar2 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e2e90;
  local_10 = ExceptionList;
  iVar4 = *in_ECX;
  iVar3 = (in_ECX[1] - iVar4) * -0x193d4bb7;
  uVar1 = (in_ECX[1] - iVar4) / 0x11c;
  if (param_1 < uVar1) {
    iVar5 = param_1 * 0x11c + iVar4;
    if (iVar5 == iVar4) {
      in_ECX[1] = iVar4;
    }
    else {
      iVar3 = in_ECX[1];
      if (iVar5 != iVar3) {
        ExceptionList = &local_10;
        iVar4 = FUN_0044a3c0(iVar3,iVar3,iVar5,param_1);
        in_ECX[1] = iVar4;
        ExceptionList = local_10;
        return iVar4;
      }
    }
  }
  else if (uVar1 < param_1) {
    ExceptionList = &local_10;
    FUN_0044bcc0(param_1 - uVar1);
    local_8 = 0;
    FUN_0044a500(in_ECX[1],uVar2 - (in_ECX[1] - *in_ECX) / 0x11c,(int)&param_1 + 3,0,param_1);
    iVar4 = (in_ECX[1] - *in_ECX) / 0x11c;
    in_ECX[1] = in_ECX[1] + (uVar2 - iVar4) * 0x11c;
    ExceptionList = local_10;
    return iVar4;
  }
  return iVar3;
}


/* FUN_00450ab0 @ 00450ab0  kind=gamemisc  attributed-by=none  size=189 */

void FUN_00450ab0(void)

{
  int iVar1;
  float10 fVar2;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_00450960();
  if (iVar1 == 0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  FUN_006294d0(&local_10);
  fVar2 = (float10)FUN_00627ce0();
  if ((float)fVar2 - 30.0 < local_c) {
    fVar2 = (float10)FUN_00627ce0();
    if (local_c < (float)fVar2) {
      fVar2 = (float10)FUN_00627d50();
      if ((local_10 < (float)fVar2 * 0.5) && (0.0 < local_10)) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00450f00 @ 00450f00  kind=gamemisc  attributed-by=none  size=58 */

void FUN_00450f00(byte *param_1)

{
  float *in_ECX;
  
  *in_ECX = (float)*param_1;
  in_ECX[1] = (float)param_1[1];
  in_ECX[2] = (float)param_1[2];
  return;
}


/* FUN_004511e0 @ 004511e0  kind=gamemisc  attributed-by=none  size=39 */

void FUN_004511e0(int param_1)

{
  int *in_ECX;
  int *piVar1;
  int iVar2;
  
  iVar2 = 3;
  piVar1 = in_ECX;
  do {
    *piVar1 = (int)*(float *)((param_1 - (int)in_ECX) + (int)piVar1);
    iVar2 = iVar2 + -1;
    piVar1 = piVar1 + 1;
  } while (iVar2 != 0);
  return;
}


/* FUN_00451940 @ 00451940  kind=gamemisc  attributed-by=none  size=274 */

void FUN_00451940(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_2;
  while( true ) {
    iVar3 = iVar1 * 2 + 2;
    if (param_3 <= iVar3) break;
    iVar4 = iVar3 * 0x128 + param_1;
    iVar2 = (uint)*(byte *)(iVar4 + -0x11c) + *(short *)(iVar4 + -0x118) * 6;
    iVar4 = ((uint)*(byte *)(iVar4 + 0xc) + *(short *)(iVar4 + 0x10) * 6) * 1000;
    if (iVar4 + iVar2 * -1000 != 0 && iVar2 * 1000 <= iVar4) {
      iVar3 = iVar1 * 2 + 1;
    }
    iVar2 = iVar3 * 0x128 + param_1;
    FUN_0042c5e0(iVar2);
    *(undefined4 *)(iVar1 * 0x128 + param_1 + 0x118) = *(undefined4 *)(iVar2 + 0x118);
    FUN_00468050(iVar2 + 0x11c);
    iVar1 = iVar3;
  }
  if (iVar3 == param_3) {
    iVar3 = param_1 + -0x128 + param_3 * 0x128;
    FUN_0042c5e0(iVar3);
    *(undefined4 *)(iVar1 * 0x128 + param_1 + 0x118) = *(undefined4 *)(iVar3 + 0x118);
    FUN_00468050(iVar3 + 0x11c);
    iVar1 = param_3 + -1;
  }
  FUN_00455860(param_1,iVar1,param_2,param_4,param_5);
  return;
}


/* FUN_00451a60 @ 00451a60  kind=gamemisc  attributed-by=none  size=161 */

void FUN_00451a60(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = param_2;
  while( true ) {
    iVar1 = iVar3 * 2 + 2;
    if (param_3 <= iVar1) break;
    if (*(int *)(param_1 + 4 + iVar1 * 0x10) < *(int *)(param_1 + -0xc + iVar1 * 0x10)) {
      iVar1 = iVar3 * 2 + 1;
    }
    puVar2 = (undefined4 *)(iVar1 * 0x10 + param_1);
    *(undefined4 *)(param_1 + iVar3 * 0x10) = *puVar2;
    *(undefined4 *)(param_1 + 4 + iVar3 * 0x10) = puVar2[1];
    *(undefined4 *)(param_1 + 8 + iVar3 * 0x10) = puVar2[2];
    *(undefined4 *)(param_1 + 0xc + iVar3 * 0x10) = puVar2[3];
    iVar3 = iVar1;
  }
  if (iVar1 == param_3) {
    iVar1 = param_3 * 0x10 + param_1;
    *(undefined4 *)(param_1 + iVar3 * 0x10) = *(undefined4 *)(iVar1 + -0x10);
    *(undefined4 *)(param_1 + 4 + iVar3 * 0x10) = *(undefined4 *)(iVar1 + -0xc);
    *(undefined4 *)(param_1 + 8 + iVar3 * 0x10) = *(undefined4 *)(iVar1 + -8);
    *(undefined4 *)(param_1 + 0xc + iVar3 * 0x10) = *(undefined4 *)(iVar1 + -4);
    iVar3 = param_3 + -1;
  }
  FUN_00455940(param_1,iVar3,param_2,param_4,param_5);
  return;
}


/* FUN_00452320 @ 00452320  kind=gamemisc  attributed-by=none  size=162 */

void FUN_00452320(undefined1 *param_1,undefined1 *param_2)

{
  uint uVar1;
  char cVar2;
  undefined4 *in_ECX;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e32d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = in_ECX[4];
  uVar3 = (int)param_2 - (int)param_1 >> 1;
  if (((uVar1 <= uVar3) && (in_ECX[5] != uVar3)) && (cVar2 = FUN_00407d50(uVar3,1), cVar2 != '\0'))
  {
    in_ECX[4] = uVar1;
    if (0xf < (uint)in_ECX[5]) {
      in_ECX = (undefined4 *)*in_ECX;
    }
    *(undefined1 *)((int)in_ECX + uVar1) = 0;
  }
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    FUN_0040bff0(1,*param_1);
  }
  ExceptionList = local_10;
  return;
}


/* FUN_00452c20 @ 00452c20  kind=gamemisc  attributed-by=none  size=515 */

void FUN_00452c20(undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
                 int *param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  int *piVar5;
  int *piVar6;
  
  if (0x3fffffd < (uint)in_ECX[1]) {
    FUN_0046db10(param_5);
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("map/set<T> too long");
  }
  in_ECX[1] = in_ECX[1] + 1;
  param_5[1] = (int)param_3;
  if (param_3 == (undefined4 *)*in_ECX) {
    ((undefined4 *)*in_ECX)[1] = param_5;
    *(int **)*in_ECX = param_5;
    *(int **)(*in_ECX + 8) = param_5;
  }
  else if (param_2 == '\0') {
    param_3[2] = param_5;
    if (param_3 == *(undefined4 **)(*in_ECX + 8)) {
      *(int **)(*in_ECX + 8) = param_5;
    }
  }
  else {
    *param_3 = param_5;
    if (param_3 == *(undefined4 **)*in_ECX) {
      *(int **)*in_ECX = param_5;
    }
  }
  cVar1 = *(char *)(param_5[1] + 0xc);
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*in_ECX + 4) + 0xc) = 1;
      *param_1 = param_5;
      return;
    }
    piVar6 = (int *)piVar4[1];
    piVar5 = *(int **)piVar6[1];
    if (piVar6 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar6[1])[2];
      if ((char)piVar5[3] != '\0') {
        if (piVar4 == (int *)piVar6[2]) {
          piVar4 = (int *)piVar6[2];
          piVar6[2] = *piVar4;
          if (*(char *)(*piVar4 + 0xd) == '\0') {
            *(int **)(*piVar4 + 4) = piVar6;
          }
          piVar4[1] = piVar6[1];
          if (piVar6 == *(int **)(*in_ECX + 4)) {
            *(int **)(*in_ECX + 4) = piVar4;
          }
          else {
            piVar5 = (int *)piVar6[1];
            if (piVar6 == (int *)*piVar5) {
              *piVar5 = (int)piVar4;
            }
            else {
              piVar5[2] = (int)piVar4;
            }
          }
          *piVar4 = (int)piVar6;
          piVar6[1] = (int)piVar4;
          piVar4 = piVar6;
        }
        *(undefined1 *)(piVar4[1] + 0xc) = 1;
        *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
        piVar6 = *(int **)(piVar4[1] + 4);
        piVar5 = (int *)*piVar6;
        *piVar6 = piVar5[2];
        if (*(char *)(piVar5[2] + 0xd) == '\0') {
          *(int **)(piVar5[2] + 4) = piVar6;
        }
        piVar5[1] = piVar6[1];
        if (piVar6 == *(int **)(*in_ECX + 4)) {
          *(int **)(*in_ECX + 4) = piVar5;
          piVar5[2] = (int)piVar6;
        }
        else {
          piVar2 = (int *)piVar6[1];
          if (piVar6 == (int *)piVar2[2]) {
            piVar2[2] = (int)piVar5;
            piVar5[2] = (int)piVar6;
          }
          else {
            *piVar2 = (int)piVar5;
            piVar5[2] = (int)piVar6;
          }
        }
        goto LAB_00452dfe;
      }
LAB_00452d55:
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(piVar5 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar4 = *(int **)(piVar4[1] + 4);
    }
    else {
      if ((char)piVar5[3] == '\0') goto LAB_00452d55;
      if (piVar4 == (int *)*piVar6) {
        iVar3 = *piVar6;
        *piVar6 = *(int *)(iVar3 + 8);
        if (*(char *)(*(int *)(iVar3 + 8) + 0xd) == '\0') {
          *(int **)(*(int *)(iVar3 + 8) + 4) = piVar6;
        }
        *(int *)(iVar3 + 4) = piVar6[1];
        if (piVar6 == *(int **)(*in_ECX + 4)) {
          *(int *)(*in_ECX + 4) = iVar3;
        }
        else {
          piVar4 = (int *)piVar6[1];
          if (piVar6 == (int *)piVar4[2]) {
            piVar4[2] = iVar3;
          }
          else {
            *piVar4 = iVar3;
          }
        }
        *(int **)(iVar3 + 8) = piVar6;
        piVar6[1] = iVar3;
        piVar4 = piVar6;
      }
      *(undefined1 *)(piVar4[1] + 0xc) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar6 = *(int **)(piVar4[1] + 4);
      piVar5 = (int *)piVar6[2];
      piVar6[2] = *piVar5;
      if (*(char *)(*piVar5 + 0xd) == '\0') {
        *(int **)(*piVar5 + 4) = piVar6;
      }
      piVar5[1] = piVar6[1];
      if (piVar6 == *(int **)(*in_ECX + 4)) {
        *(int **)(*in_ECX + 4) = piVar5;
      }
      else {
        piVar2 = (int *)piVar6[1];
        if (piVar6 == (int *)*piVar2) {
          *piVar2 = (int)piVar5;
        }
        else {
          piVar2[2] = (int)piVar5;
        }
      }
      *piVar5 = (int)piVar6;
LAB_00452dfe:
      piVar6[1] = (int)piVar5;
    }
    cVar1 = *(char *)(piVar4[1] + 0xc);
  } while( true );
}


/* FUN_00452e30 @ 00452e30  kind=gamemisc  attributed-by=none  size=504 */

void FUN_00452e30(undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
                 int *param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  int *piVar5;
  int *piVar6;
  
  if (0xea0e8 < (uint)in_ECX[1]) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_5);
  }
  in_ECX[1] = in_ECX[1] + 1;
  param_5[1] = (int)param_3;
  if (param_3 == (undefined4 *)*in_ECX) {
    ((undefined4 *)*in_ECX)[1] = param_5;
    *(int **)*in_ECX = param_5;
    *(int **)(*in_ECX + 8) = param_5;
  }
  else if (param_2 == '\0') {
    param_3[2] = param_5;
    if (param_3 == *(undefined4 **)(*in_ECX + 8)) {
      *(int **)(*in_ECX + 8) = param_5;
    }
  }
  else {
    *param_3 = param_5;
    if (param_3 == *(undefined4 **)*in_ECX) {
      *(int **)*in_ECX = param_5;
    }
  }
  cVar1 = *(char *)(param_5[1] + 0xc);
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*in_ECX + 4) + 0xc) = 1;
      *param_1 = param_5;
      return;
    }
    piVar6 = (int *)piVar4[1];
    piVar5 = *(int **)piVar6[1];
    if (piVar6 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar6[1])[2];
      if ((char)piVar5[3] != '\0') {
        if (piVar4 == (int *)piVar6[2]) {
          piVar4 = (int *)piVar6[2];
          piVar6[2] = *piVar4;
          if (*(char *)(*piVar4 + 0xd) == '\0') {
            *(int **)(*piVar4 + 4) = piVar6;
          }
          piVar4[1] = piVar6[1];
          if (piVar6 == *(int **)(*in_ECX + 4)) {
            *(int **)(*in_ECX + 4) = piVar4;
          }
          else {
            piVar5 = (int *)piVar6[1];
            if (piVar6 == (int *)*piVar5) {
              *piVar5 = (int)piVar4;
            }
            else {
              piVar5[2] = (int)piVar4;
            }
          }
          *piVar4 = (int)piVar6;
          piVar6[1] = (int)piVar4;
          piVar4 = piVar6;
        }
        *(undefined1 *)(piVar4[1] + 0xc) = 1;
        *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
        piVar6 = *(int **)(piVar4[1] + 4);
        piVar5 = (int *)*piVar6;
        *piVar6 = piVar5[2];
        if (*(char *)(piVar5[2] + 0xd) == '\0') {
          *(int **)(piVar5[2] + 4) = piVar6;
        }
        piVar5[1] = piVar6[1];
        if (piVar6 == *(int **)(*in_ECX + 4)) {
          *(int **)(*in_ECX + 4) = piVar5;
          piVar5[2] = (int)piVar6;
        }
        else {
          piVar2 = (int *)piVar6[1];
          if (piVar6 == (int *)piVar2[2]) {
            piVar2[2] = (int)piVar5;
            piVar5[2] = (int)piVar6;
          }
          else {
            *piVar2 = (int)piVar5;
            piVar5[2] = (int)piVar6;
          }
        }
        goto LAB_00453011;
      }
LAB_00452f68:
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(piVar5 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar4 = *(int **)(piVar4[1] + 4);
    }
    else {
      if ((char)piVar5[3] == '\0') goto LAB_00452f68;
      if (piVar4 == (int *)*piVar6) {
        iVar3 = *piVar6;
        *piVar6 = *(int *)(iVar3 + 8);
        if (*(char *)(*(int *)(iVar3 + 8) + 0xd) == '\0') {
          *(int **)(*(int *)(iVar3 + 8) + 4) = piVar6;
        }
        *(int *)(iVar3 + 4) = piVar6[1];
        if (piVar6 == *(int **)(*in_ECX + 4)) {
          *(int *)(*in_ECX + 4) = iVar3;
        }
        else {
          piVar4 = (int *)piVar6[1];
          if (piVar6 == (int *)piVar4[2]) {
            piVar4[2] = iVar3;
          }
          else {
            *piVar4 = iVar3;
          }
        }
        *(int **)(iVar3 + 8) = piVar6;
        piVar6[1] = iVar3;
        piVar4 = piVar6;
      }
      *(undefined1 *)(piVar4[1] + 0xc) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar6 = *(int **)(piVar4[1] + 4);
      piVar5 = (int *)piVar6[2];
      piVar6[2] = *piVar5;
      if (*(char *)(*piVar5 + 0xd) == '\0') {
        *(int **)(*piVar5 + 4) = piVar6;
      }
      piVar5[1] = piVar6[1];
      if (piVar6 == *(int **)(*in_ECX + 4)) {
        *(int **)(*in_ECX + 4) = piVar5;
      }
      else {
        piVar2 = (int *)piVar6[1];
        if (piVar6 == (int *)*piVar2) {
          *piVar2 = (int)piVar5;
        }
        else {
          piVar2[2] = (int)piVar5;
        }
      }
      *piVar5 = (int)piVar6;
LAB_00453011:
      piVar6[1] = (int)piVar5;
    }
    cVar1 = *(char *)(piVar4[1] + 0xc);
  } while( true );
}


/* FUN_00453230 @ 00453230  kind=gamemisc  attributed-by=none  size=468 */

undefined4 * FUN_00453230(undefined4 *param_1,int *param_2,undefined4 *param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *in_ECX;
  undefined4 uVar5;
  uint uStack_2c;
  undefined1 local_1c [4];
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e3370;
  local_10 = ExceptionList;
  uStack_2c = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_2c;
  ExceptionList = &local_10;
  local_8 = 0;
  if (in_ECX[1] == 0) {
    param_2 = (int *)*in_ECX;
    local_14 = (undefined1 *)&uStack_2c;
  }
  else {
    piVar3 = (int *)*in_ECX;
    if (param_2 != (int *)*piVar3) {
      if (param_2 == piVar3) {
        puVar4 = param_3;
        if (7 < (uint)param_3[5]) {
          puVar4 = (undefined4 *)*param_3;
        }
        local_14 = (undefined1 *)&uStack_2c;
        iVar2 = FUN_00428db0(0,*(undefined4 *)(piVar3[2] + 0x20),puVar4,param_3[4]);
        if (-1 < iVar2) goto LAB_004533d1;
        param_2 = *(int **)(*in_ECX + 8);
        uVar5 = 0;
        goto LAB_00453279;
      }
      piVar3 = param_2 + 4;
      if (7 < (uint)param_2[9]) {
        piVar3 = (int *)*piVar3;
      }
      local_18 = in_ECX;
      iVar2 = FUN_00428db0(0,param_3[4],piVar3,param_2[8]);
      if (iVar2 < 0) {
        FUN_0042c740();
        cVar1 = FUN_0046d1f0(param_2 + 4,param_3);
        if (cVar1 == '\0') goto LAB_00453376;
        if (*(char *)(param_2[2] + 0xd) == '\0') {
          uVar5 = 1;
          goto LAB_00453279;
        }
      }
      else {
LAB_00453376:
        cVar1 = FUN_0046d1f0(param_2 + 4,param_3);
        if ((cVar1 == '\0') ||
           ((FUN_005c3ea0(), param_2 != (int *)*local_18 &&
            (cVar1 = FUN_0046d1f0(param_3,param_2 + 4), cVar1 == '\0')))) {
LAB_004533d1:
          local_8 = 0xffffffff;
          puVar4 = (undefined4 *)FUN_004539e0(local_1c,0,param_3,param_4);
          *param_1 = *puVar4;
          ExceptionList = local_10;
          return param_1;
        }
        if (*(char *)(param_2[2] + 0xd) == '\0') {
          uVar5 = 1;
          goto LAB_00453279;
        }
      }
      uVar5 = 0;
      goto LAB_00453279;
    }
    piVar3 = param_2 + 4;
    if (7 < (uint)param_2[9]) {
      piVar3 = (int *)*piVar3;
    }
    local_14 = (undefined1 *)&uStack_2c;
    iVar2 = FUN_00428db0(0,param_3[4],piVar3,param_2[8]);
    if (-1 < iVar2) goto LAB_004533d1;
  }
  uVar5 = 1;
LAB_00453279:
  FUN_00452c20(param_1,uVar5,param_2,param_3,param_4);
  ExceptionList = local_10;
  return param_1;
}


/* FUN_00453670 @ 00453670  kind=gamemisc  attributed-by=none  size=565 */

undefined4 * FUN_00453670(undefined4 *param_1,int *param_2,uint *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  char cVar5;
  undefined4 *puVar6;
  undefined4 *in_ECX;
  uint uVar7;
  uint uStack_3c;
  undefined1 local_2c [4];
  uint local_28;
  uint local_24;
  int *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e33b0;
  local_10 = ExceptionList;
  uStack_3c = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  if (in_ECX[1] == 0) {
    local_14 = (undefined1 *)&uStack_3c;
    FUN_00452e30(param_1,1,*in_ECX,param_3,param_4);
    ExceptionList = local_10;
    return param_1;
  }
  piVar1 = (int *)*in_ECX;
  if (param_2 == (int *)*piVar1) {
    local_14 = (undefined1 *)&uStack_3c;
    if (((int)param_3[1] <= param_2[5]) &&
       ((puVar4 = &uStack_3c, (int)param_3[1] < param_2[5] ||
        (local_14 = (undefined1 *)&uStack_3c, puVar4 = &uStack_3c, *param_3 < (uint)param_2[4])))) {
LAB_004536fd:
      local_14 = (undefined1 *)puVar4;
      FUN_00452e30(param_1,1,param_2,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    iVar2 = piVar1[2];
    local_14 = (undefined1 *)&uStack_3c;
    if ((*(int *)(iVar2 + 0x14) <= (int)param_3[1]) &&
       ((*(int *)(iVar2 + 0x14) < (int)param_3[1] ||
        (local_14 = (undefined1 *)&uStack_3c, *(uint *)(iVar2 + 0x10) < *param_3)))) {
      local_14 = (undefined1 *)&uStack_3c;
      FUN_00452e30(param_1,0,iVar2,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else {
    local_28 = param_3[1];
    local_24 = *param_3;
    uVar7 = param_2[4];
    puVar4 = &uStack_3c;
    if (((int)local_28 <= param_2[5]) &&
       (((int)local_28 < param_2[5] || (puVar4 = &uStack_3c, local_24 < uVar7)))) {
      local_1c = param_2;
      FUN_0042c740();
      piVar3 = local_1c;
      cVar5 = FUN_0042c8d0(local_1c + 4,param_3);
      if (cVar5 != '\0') {
        puVar4 = (uint *)local_14;
        if (*(char *)(piVar3[2] + 0xd) != '\0') {
          FUN_00452e30(param_1,0,piVar3,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        goto LAB_004536fd;
      }
      uVar7 = param_2[4];
      puVar4 = (uint *)local_14;
    }
    local_14 = (undefined1 *)puVar4;
    if ((param_2[5] <= (int)local_28) && ((param_2[5] < (int)local_28 || (uVar7 < local_24)))) {
      local_1c = param_2;
      FUN_005c3ea0();
      piVar3 = local_1c;
      if ((local_1c == piVar1) || (cVar5 = FUN_0042c8d0(param_3,local_1c + 4), cVar5 != '\0')) {
        if (*(char *)(param_2[2] + 0xd) == '\0') {
          FUN_00452e30(param_1,1,piVar3,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_00452e30(param_1,0,param_2,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
  }
  local_8 = 0xffffffff;
  puVar6 = (undefined4 *)FUN_00453c90(local_2c,0,param_3,param_4);
  *param_1 = *puVar6;
  ExceptionList = local_10;
  return param_1;
}


/* FUN_004539e0 @ 004539e0  kind=gamemisc  attributed-by=none  size=324 */

void FUN_004539e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *in_ECX;
  bool bVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar5 = param_3;
  puStack_c = &LAB_006e33f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar7 = true;
  local_8 = 0;
  puVar1 = (undefined4 *)*in_ECX;
  puVar4 = (undefined4 *)((undefined4 *)*in_ECX)[1];
  while (*(char *)((int)puVar4 + 0xd) == '\0') {
    if ((char)param_2 == '\0') {
      piVar3 = puVar4 + 4;
      if (7 < (uint)puVar4[9]) {
        piVar3 = (int *)*piVar3;
      }
      iVar2 = FUN_00428db0(0,puVar5[4],piVar3,puVar4[8]);
      bVar7 = iVar2 < 0;
    }
    else {
      puVar1 = puVar5;
      if (7 < (uint)puVar5[5]) {
        puVar1 = (undefined4 *)*puVar5;
      }
      iVar2 = FUN_00428db0(0,puVar4[8],puVar1,puVar5[4]);
      bVar7 = -1 < iVar2;
    }
    puVar1 = puVar4;
    if (bVar7 == false) {
      puVar4 = (undefined4 *)puVar4[2];
    }
    else {
      puVar4 = (undefined4 *)*puVar4;
    }
  }
  param_2 = puVar1;
  if (bVar7 != false) {
    if (puVar1 == *(undefined4 **)*in_ECX) {
      puVar4 = &param_2;
      bVar7 = true;
      goto LAB_00453aa1;
    }
    FUN_0042c740();
  }
  puVar4 = param_2;
  puVar6 = puVar5;
  if (7 < (uint)puVar5[5]) {
    puVar6 = (undefined4 *)*puVar5;
  }
  iVar2 = FUN_00428db0(0,param_2[8],puVar6,puVar5[4]);
  if (-1 < iVar2) {
    FUN_0046db10(param_4);
    *param_1 = puVar4;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
  puVar4 = &param_3;
LAB_00453aa1:
  puVar5 = (undefined4 *)FUN_00452c20(puVar4,bVar7,puVar1,puVar5,param_4);
  *param_1 = *puVar5;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


/* FUN_00454d60 @ 00454d60  kind=gamemisc  attributed-by=none  size=199 */

void FUN_00454d60(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  
  uVar8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  puVar7 = param_1;
  if (param_1 != param_2) {
    while (puVar7 = puVar7 + 4, puVar7 != param_2) {
      uVar2 = *puVar7;
      iVar3 = puVar7[1];
      uVar5 = *(undefined8 *)(puVar7 + 2);
      uVar4 = *(undefined8 *)(puVar7 + 2);
      if (iVar3 < (int)param_1[1]) {
        FUN_00455710(param_1,puVar7,puVar7 + 4,uVar2);
        *param_1 = uVar2;
        param_1[1] = iVar3;
        *(undefined8 *)(param_1 + 2) = uVar4;
      }
      else {
        iVar1 = puVar7[-3];
        puVar6 = puVar7;
        while (iVar3 < iVar1) {
          *puVar6 = puVar6[-4];
          puVar6[1] = puVar6[-3];
          puVar6[2] = puVar6[-2];
          puVar6[3] = puVar6[-1];
          iVar1 = puVar6[-7];
          puVar6 = puVar6 + -4;
        }
        *puVar6 = uVar2;
        puVar6[1] = iVar3;
        *(undefined8 *)(puVar6 + 2) = uVar5;
      }
    }
  }
  __security_check_cookie(uVar8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00454fe0 @ 00454fe0  kind=gamemisc  attributed-by=none  size=130 */

void FUN_00454fe0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar1 = param_2 - param_1 >> 4;
  iVar3 = iVar1 - (param_2 - param_1 >> 0x1f) >> 1;
  if (0 < iVar3) {
    puVar2 = (undefined4 *)(param_1 + 8 + iVar3 * 0x10);
    do {
      local_18 = puVar2[-6];
      local_14 = puVar2[-5];
      local_10 = puVar2[-4];
      local_c = puVar2[-3];
      iVar3 = iVar3 + -1;
      FUN_00451a60(param_1,iVar3,iVar1,&local_18,param_3);
      puVar2 = puVar2 + -4;
    } while (0 < iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00455270 @ 00455270  kind=gamemisc  attributed-by=none  size=202 */

void FUN_00455270(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = param_2[1];
  if (iVar1 < (int)param_1[1]) {
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    uVar4 = *param_2;
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    param_2[3] = param_1[3];
    param_1[1] = iVar1;
    *param_1 = uVar4;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
  }
  iVar1 = param_3[1];
  if (iVar1 < (int)param_2[1]) {
    uVar2 = param_3[2];
    uVar3 = param_3[3];
    uVar4 = *param_3;
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    param_3[2] = param_2[2];
    param_3[3] = param_2[3];
    param_2[1] = iVar1;
    *param_2 = uVar4;
    param_2[2] = uVar2;
    param_2[3] = uVar3;
    iVar1 = param_2[1];
    if (iVar1 < (int)param_1[1]) {
      uVar2 = param_2[2];
      *param_2 = *param_1;
      param_2[1] = param_1[1];
      param_2[2] = param_1[2];
      param_2[3] = param_1[3];
      *param_1 = uVar4;
      param_1[1] = iVar1;
      param_1[2] = uVar2;
      param_1[3] = uVar3;
    }
  }
  return;
}


/* FUN_00455470 @ 00455470  kind=gamemisc  attributed-by=none  size=152 */

void FUN_00455470(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_3 - param_1 >> 4;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)((iVar1 >> 0x1f & 7U) + iVar1) >> 3;
    iVar2 = iVar1 * 0x10;
    FUN_00455270(param_1,iVar2 + param_1,iVar1 * 0x20 + param_1,param_4);
    FUN_00455270(param_2 + iVar1 * -0x10,param_2,iVar2 + param_2,param_4);
    iVar3 = param_3 + iVar1 * -0x10;
    FUN_00455270(param_3 + iVar1 * -0x20,iVar3,param_3,param_4);
    FUN_00455270(param_1 + iVar2,param_2,iVar3,param_4);
    return;
  }
  FUN_00455270(param_1,param_2,param_3,param_4);
  return;
}


/* FUN_004555c0 @ 004555c0  kind=gamemisc  attributed-by=none  size=229 */

undefined4 * FUN_004555c0(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != param_2) {
    puVar2 = (undefined4 *)(param_1 + 0x10);
    puVar1 = param_3 + 8;
    param_1 = param_1 - (int)param_3;
    do {
      *param_3 = *(undefined4 *)(param_1 + -0x20 + (int)puVar1);
      param_3[1] = *(undefined4 *)(param_1 + -0x1c + (int)puVar1);
      *(undefined1 *)(puVar1 + -6) = *(undefined1 *)(puVar2 + -2);
      puVar1[-4] = *puVar2;
      puVar1[-3] = puVar2[1];
      puVar1[-2] = puVar2[2];
      puVar1[-1] = puVar2[3];
      *puVar1 = puVar2[4];
      puVar1[1] = puVar2[5];
      puVar1[2] = puVar2[6];
      puVar1[3] = puVar2[7];
      puVar1[4] = puVar2[8];
      puVar1[5] = puVar2[9];
      puVar1[6] = puVar2[10];
      puVar1[7] = puVar2[0xb];
      puVar1[8] = puVar2[0xc];
      puVar1[9] = puVar2[0xd];
      puVar1[10] = puVar2[0xe];
      puVar1[0xb] = puVar2[0xf];
      puVar1[0xc] = puVar2[0x10];
      puVar1[0xe] = puVar2[0x12];
      puVar1[0xf] = puVar2[0x13];
      puVar1[0x10] = puVar2[0x14];
      puVar1[0x11] = puVar2[0x15];
      puVar1[0x12] = puVar2[0x16];
      puVar1[0x13] = puVar2[0x17];
      *(undefined1 *)(puVar1 + 0x14) = *(undefined1 *)(puVar2 + 0x18);
      puVar1 = puVar1 + 0x1e;
      param_3 = param_3 + 0x1e;
      puVar2 = puVar2 + 0x1e;
    } while (param_1 + -0x20 + (int)puVar1 != param_2);
    return param_3;
  }
  return param_3;
}


/* FUN_00455710 @ 00455710  kind=gamemisc  attributed-by=none  size=70 */

void FUN_00455710(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar2;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    puVar4 = param_2 + 2;
    do {
      puVar2 = puVar1 + -4;
      puVar3 = (undefined4 *)(((int)param_2 - (int)param_3) + (int)puVar2);
      *puVar2 = *puVar3;
      puVar1[-3] = puVar4[-5];
      puVar1[-2] = puVar4[-4];
      puVar1[-1] = puVar4[-3];
      puVar1 = puVar2;
      puVar4 = puVar4 + -4;
    } while (puVar3 != param_1);
  }
  return;
}


/* FUN_00455860 @ 00455860  kind=gamemisc  attributed-by=none  size=212 */

void FUN_00455860(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  while (param_3 < param_2) {
    iVar4 = (param_2 + -1) / 2;
    iVar3 = iVar4 * 0x128 + param_1;
    iVar2 = ((uint)*(byte *)(iVar3 + 0xc) + *(short *)(iVar3 + 0x10) * 6) * 1000;
    iVar1 = (uint)*(byte *)(param_4 + 0xc) + *(short *)(param_4 + 0x10) * 6;
    if (iVar2 + iVar1 * -1000 == 0 || iVar2 < iVar1 * 1000) break;
    FUN_0042c5e0(iVar3);
    *(undefined4 *)(param_2 * 0x128 + param_1 + 0x118) = *(undefined4 *)(iVar3 + 0x118);
    FUN_00468050(iVar3 + 0x11c);
    param_2 = iVar4;
  }
  FUN_0042c5e0(param_4);
  *(undefined4 *)(param_2 * 0x128 + param_1 + 0x118) = *(undefined4 *)(param_4 + 0x118);
  FUN_00468050(param_4 + 0x11c);
  return;
}


/* FUN_00455940 @ 00455940  kind=gamemisc  attributed-by=none  size=127 */

void FUN_00455940(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  
  while ((param_3 < param_2 &&
         (iVar1 = (param_2 + -1) / 2, *(int *)(param_1 + 4 + iVar1 * 0x10) < (int)param_4[1]))) {
    *(undefined4 *)(param_1 + param_2 * 0x10) = *(undefined4 *)(param_1 + iVar1 * 0x10);
    *(undefined4 *)(param_1 + 4 + param_2 * 0x10) = *(undefined4 *)(param_1 + 4 + iVar1 * 0x10);
    *(undefined4 *)(param_1 + 8 + param_2 * 0x10) = *(undefined4 *)(param_1 + 8 + iVar1 * 0x10);
    *(undefined4 *)(param_1 + 0xc + param_2 * 0x10) = *(undefined4 *)(param_1 + 0xc + iVar1 * 0x10);
    param_2 = iVar1;
  }
  *(undefined4 *)(param_1 + param_2 * 0x10) = *param_4;
  *(undefined4 *)(param_1 + 4 + param_2 * 0x10) = param_4[1];
  *(undefined4 *)(param_1 + 8 + param_2 * 0x10) = param_4[2];
  *(undefined4 *)(param_1 + 0xc + param_2 * 0x10) = param_4[3];
  return;
}


/* FUN_00455d80 @ 00455d80  kind=gamemisc  attributed-by=none  size=232 */

void FUN_00455d80(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined1 local_c [8];
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 4;
    if (iVar1 < 0x21) {
LAB_00455e17:
      if (1 < iVar1) {
        FUN_00454d60(param_1,param_2,param_4,0);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (0x10 < (int)(param_2 - param_1 & 0xfffffff0U)) {
          FUN_00454fe0(param_1,param_2,param_4,0,0);
        }
        FUN_00456010(param_1,param_2,param_4);
        return;
      }
      goto LAB_00455e17;
    }
    piVar2 = (int *)FUN_004563d0(local_c,param_1,param_2,param_4);
    iVar3 = *piVar2;
    iVar1 = piVar2[1];
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(iVar3 - param_1 & 0xfffffff0U) < (int)(param_2 - iVar1 & 0xfffffff0U)) {
      FUN_00455d80(param_1,iVar3,param_3,param_4);
      iVar3 = param_2;
      param_1 = iVar1;
    }
    else {
      FUN_00455d80(iVar1,param_2,param_3,param_4);
    }
    iVar1 = iVar3 - param_1;
    param_2 = iVar3;
  } while( true );
}


/* FUN_00456010 @ 00456010  kind=gamemisc  attributed-by=none  size=167 */

void FUN_00456010(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if (0x10 < (int)(param_2 - (int)param_1 & 0xfffffff0U)) {
    puVar1 = (undefined4 *)(param_2 + -0xc);
    do {
      local_18 = puVar1[-1];
      local_14 = *puVar1;
      local_10 = puVar1[1];
      local_c = puVar1[2];
      puVar1[-1] = *param_1;
      *puVar1 = param_1[1];
      puVar1[1] = param_1[2];
      puVar1[2] = param_1[3];
      FUN_00451a60(param_1,0,(-4 - (int)param_1) + (int)puVar1 >> 4,&local_18,param_3);
      puVar1 = puVar1 + -4;
    } while (0x10 < (int)((0xc - (int)param_1) + (int)puVar1 & 0xfffffff0U));
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004563d0 @ 004563d0  kind=gamemisc  attributed-by=none  size=830 */

void FUN_004563d0(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *local_88;
  int *local_80;
  int *local_7c;
  
  uVar4 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_80 = param_2 + (((int)param_3 - (int)param_2 >> 4) - ((int)param_3 - (int)param_2 >> 0x1f)
                       >> 1) * 4;
  FUN_00455470(param_2,local_80,param_3 + -4,param_4);
  piVar5 = local_80 + 4;
  for (; param_2 < local_80; local_80 = local_80 + -4) {
    if ((local_80[-3] < local_80[1]) || (local_80[1] < local_80[-3])) break;
  }
  local_88 = piVar5;
  piVar7 = piVar5;
  local_7c = piVar5;
  piVar8 = local_80;
  if (piVar5 < param_3) {
    do {
      local_88 = piVar5;
      piVar7 = piVar5;
      local_7c = piVar5;
      if ((piVar5[1] < local_80[1]) || (local_80[1] < piVar5[1])) break;
      piVar5 = piVar5 + 4;
      local_88 = piVar5;
      piVar7 = piVar5;
      local_7c = piVar5;
    } while (piVar5 < param_3);
  }
joined_r0x00456474:
  do {
    if (param_3 <= piVar5) {
LAB_004564d6:
      if (param_2 < local_80) {
        piVar7 = local_80 + -3;
        piVar6 = piVar8;
        do {
          piVar8 = piVar6;
          piVar5 = local_88;
          if (piVar6[1] <= *piVar7) {
            if (piVar6[1] < *piVar7) break;
            iVar1 = piVar6[-4];
            iVar2 = piVar6[-3];
            piVar8 = piVar6 + -4;
            uVar3 = *(undefined8 *)(piVar6 + -2);
            *piVar8 = piVar7[-1];
            piVar6[-3] = *piVar7;
            piVar6[-2] = piVar7[1];
            piVar6[-1] = piVar7[2];
            piVar7[-1] = iVar1;
            *piVar7 = iVar2;
            *(undefined8 *)(piVar7 + 1) = uVar3;
          }
          local_80 = local_80 + -4;
          piVar7 = piVar7 + -4;
          piVar6 = piVar8;
        } while (param_2 < local_80);
      }
      if (local_80 == param_2) {
        if (piVar5 == param_3) {
          param_1[1] = local_7c;
          *param_1 = piVar8;
          __security_check_cookie(uVar4 ^ (uint)&stack0xfffffffc);
          return;
        }
        if (local_7c != piVar5) {
          iVar1 = *piVar8;
          iVar2 = piVar8[1];
          uVar3 = *(undefined8 *)(piVar8 + 2);
          *piVar8 = *local_7c;
          piVar8[1] = local_7c[1];
          piVar8[2] = local_7c[2];
          piVar8[3] = local_7c[3];
          *local_7c = iVar1;
          local_7c[1] = iVar2;
          *(undefined8 *)(local_7c + 2) = uVar3;
        }
        iVar1 = *piVar8;
        iVar2 = piVar8[1];
        uVar3 = *(undefined8 *)(piVar8 + 2);
        *piVar8 = *piVar5;
        piVar8[1] = piVar5[1];
        piVar8[2] = piVar5[2];
        piVar8[3] = piVar5[3];
        piVar5[1] = iVar2;
        *piVar5 = iVar1;
        *(undefined8 *)(piVar5 + 2) = uVar3;
        piVar5 = local_88 + 4;
        local_88 = local_88 + 4;
        piVar7 = local_7c + 4;
        local_7c = local_7c + 4;
        piVar8 = piVar8 + 4;
      }
      else {
        piVar6 = local_80 + -4;
        if (piVar5 == param_3) {
          piVar9 = piVar8 + -4;
          if (piVar6 != piVar9) {
            iVar1 = *piVar6;
            iVar2 = local_80[-3];
            uVar3 = *(undefined8 *)(local_80 + -2);
            *piVar6 = *piVar9;
            local_80[-3] = piVar8[-3];
            local_80[-2] = piVar8[-2];
            local_80[-1] = piVar8[-1];
            *piVar9 = iVar1;
            piVar8[-3] = iVar2;
            *(undefined8 *)(piVar8 + -2) = uVar3;
          }
          piVar7 = local_7c + -4;
          iVar1 = *piVar9;
          iVar2 = piVar8[-3];
          uVar3 = *(undefined8 *)(piVar8 + -2);
          *piVar9 = *piVar7;
          piVar8[-3] = local_7c[-3];
          piVar8[-2] = local_7c[-2];
          piVar8[-1] = local_7c[-1];
          local_7c[-3] = iVar2;
          *piVar7 = iVar1;
          *(undefined8 *)(local_7c + -2) = uVar3;
          local_7c = piVar7;
          local_80 = piVar6;
          piVar8 = piVar9;
        }
        else {
          iVar1 = *piVar5;
          iVar2 = piVar5[1];
          uVar3 = *(undefined8 *)(piVar5 + 2);
          *piVar5 = *piVar6;
          piVar5[1] = local_80[-3];
          piVar5[2] = local_80[-2];
          piVar5[3] = local_80[-1];
          local_80[-3] = iVar2;
          *piVar6 = iVar1;
          *(undefined8 *)(local_80 + -2) = uVar3;
          piVar5 = piVar5 + 4;
          local_88 = piVar5;
          piVar7 = local_7c;
          local_80 = piVar6;
        }
      }
      goto joined_r0x00456474;
    }
    piVar6 = piVar7;
    if (piVar5[1] <= piVar8[1]) {
      local_88 = piVar5;
      if (piVar5[1] < piVar8[1]) goto LAB_004564d6;
      piVar6 = piVar7 + 4;
      iVar1 = *piVar7;
      iVar2 = piVar7[1];
      uVar3 = *(undefined8 *)(piVar7 + 2);
      *piVar7 = *piVar5;
      piVar7[1] = piVar5[1];
      piVar7[2] = piVar5[2];
      piVar7[3] = piVar5[3];
      *piVar5 = iVar1;
      piVar5[1] = iVar2;
      *(undefined8 *)(piVar5 + 2) = uVar3;
      local_7c = piVar6;
    }
    piVar5 = piVar5 + 4;
    local_88 = piVar5;
    piVar7 = piVar6;
  } while( true );
}


/* FUN_00456ae0 @ 00456ae0  kind=gamemisc  attributed-by=none  size=144 */

undefined2 * FUN_00456ae0(int param_1,int param_2,undefined2 *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_006e3711;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x18) {
    local_8 = 1;
    if (param_3 != (undefined2 *)0x0) {
      *(undefined4 *)(param_3 + 10) = 7;
      *(undefined4 *)(param_3 + 8) = 0;
      *param_3 = 0;
      FUN_0040f680(param_1,0,0xffffffff);
    }
    param_3 = param_3 + 0xc;
  }
  ExceptionList = local_10;
  return param_3;
}


/* FUN_00456dc0 @ 00456dc0  kind=gamemisc  attributed-by=none  size=158 */

int FUN_00456dc0(int param_1,int param_2,int param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_006e3771;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x128) {
    local_8 = 1;
    if (param_3 != 0) {
      FUN_0040ee70(param_1);
      *(undefined4 *)(param_3 + 0x118) = *(undefined4 *)(param_1 + 0x118);
      FUN_004592f0(param_1 + 0x11c);
    }
    param_3 = param_3 + 0x128;
  }
  ExceptionList = local_10;
  return param_3;
}


/* FUN_00456e90 @ 00456e90  kind=gamemisc  attributed-by=none  size=66 */

void FUN_00456e90(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  if (param_1 != param_2) {
    puVar1 = (undefined4 *)(param_1 + 8);
    param_1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(param_1 + (int)param_3);
        param_3[1] = puVar1[-1];
        param_3[2] = *puVar1;
        param_3[3] = puVar1[1];
      }
      param_3 = param_3 + 4;
      puVar1 = puVar1 + 4;
    } while (param_1 + (int)param_3 != param_2);
  }
  return;
}


/* FUN_00456ee0 @ 00456ee0  kind=gamemisc  attributed-by=none  size=55 */

int FUN_00456ee0(int param_1,int param_2,int param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != 0) {
      FUN_00468790(param_1);
    }
    param_1 = param_1 + 0x78;
    param_3 = param_3 + 0x78;
  } while (param_1 != param_2);
  return param_3;
}


/* FUN_004570a0 @ 004570a0  kind=gamemisc  attributed-by=none  size=286 */

void FUN_004570a0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int *in_ECX;
  uint uStack_28;
  undefined1 local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e3790;
  local_10 = ExceptionList;
  uStack_28 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_28;
  ExceptionList = &local_10;
  puVar1 = *(undefined4 **)*in_ECX;
  local_8 = 0;
  for (; puVar3 = &uStack_28, param_1 != param_2; param_1 = (undefined4 *)*param_1) {
    if (puVar1 == (undefined4 *)*in_ECX) goto LAB_00457174;
    puVar1[2] = param_1[2];
    puVar1[4] = param_1[4];
    puVar1[5] = param_1[5];
    puVar1[6] = param_1[6];
    puVar1[7] = param_1[7];
    puVar1[8] = param_1[8];
    puVar1[9] = param_1[9];
    puVar1[10] = param_1[10];
    puVar1[0xb] = param_1[0xb];
    puVar1[0xc] = param_1[0xc];
    puVar1[0xd] = param_1[0xd];
    puVar1[0xe] = param_1[0xe];
    puVar1[0xf] = param_1[0xf];
    puVar1[0x10] = param_1[0x10];
    puVar1 = (undefined4 *)*puVar1;
  }
LAB_00457152:
  local_14 = (undefined1 *)puVar3;
  FUN_00477bf0(local_18,puVar1,*in_ECX);
  ExceptionList = local_10;
  return;
LAB_00457174:
  for (; puVar3 = (uint *)local_14, param_1 != param_2; param_1 = (undefined4 *)*param_1) {
    iVar2 = *in_ECX;
    iVar4 = FUN_005c03f0(iVar2,*(undefined4 *)(iVar2 + 4),param_1 + 2);
    if (in_ECX[1] == 0x38e38e2) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    in_ECX[1] = in_ECX[1] + 1;
    *(int *)(iVar2 + 4) = iVar4;
    **(int **)(iVar4 + 4) = iVar4;
  }
  goto LAB_00457152;
}


/* FUN_004573d0 @ 004573d0  kind=gamemisc  attributed-by=none  size=134 */

void FUN_004573d0(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_004ac150(param_3,param_4);
  lVar1 = FUN_0068d946();
  lVar2 = FUN_0068d946();
  *param_1 = lVar1 + lVar2;
  return;
}


/* FUN_00457f70 @ 00457f70  kind=gamemisc  attributed-by=none  size=180 */

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


/* FUN_00458030 @ 00458030  kind=gamemisc  attributed-by=none  size=192 */

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


/* FUN_00458100 @ 00458100  kind=gamemisc  attributed-by=none  size=197 */

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


/* FUN_004581d0 @ 004581d0  kind=gamemisc  attributed-by=none  size=315 */

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


/* FUN_00458310 @ 00458310  kind=gamemisc  attributed-by=none  size=218 */

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


/* FUN_004583f0 @ 004583f0  kind=gamemisc  attributed-by=none  size=269 */

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


