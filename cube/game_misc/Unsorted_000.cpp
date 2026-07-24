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


/* FUN_004054b0 @ 004054b0  kind=gamemisc  attributed-by=none  size=63 */

void FUN_004054b0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int *in_ECX;
  int iVar4;
  
  cVar3 = FUN_0065ae10(param_1);
  if (cVar3 != '\0') {
    puVar2 = (undefined4 *)*in_ECX;
    puVar1 = puVar2;
    for (iVar4 = param_1; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
    }
    in_ECX[1] = (int)(puVar2 + param_1);
  }
  return;
}


/* FUN_004054f0 @ 004054f0  kind=gamemisc  attributed-by=none  size=242 */

void FUN_004054f0(uint param_1,size_t param_2)

{
  uint uVar1;
  undefined4 *in_ECX;
  uint uVar2;
  undefined4 *_Src;
  uint uVar3;
  undefined4 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e1430;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar3 = param_1 | 0xf;
  if (uVar3 != 0xffffffff) {
    uVar1 = in_ECX[5];
    uVar2 = uVar1 >> 1;
    param_1 = uVar3;
    if ((uVar3 / 3 < uVar2) && (param_1 = uVar2 + uVar1, -uVar2 - 2 < uVar1)) {
      param_1 = 0xfffffffe;
    }
  }
  local_8 = 0;
  local_18 = (undefined4 *)0x0;
  if ((param_1 + 1 != 0) && (local_18 = operator_new(param_1 + 1), local_18 == (undefined4 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
  if (param_2 != 0) {
    _Src = in_ECX;
    if (0xf < (uint)in_ECX[5]) {
      _Src = (undefined4 *)*in_ECX;
    }
    if (param_2 != 0) {
      memcpy(local_18,_Src,param_2);
    }
  }
  if (0xf < (uint)in_ECX[5]) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*in_ECX);
  }
  *(undefined1 *)in_ECX = 0;
  *in_ECX = local_18;
  in_ECX[5] = param_1;
  in_ECX[4] = param_2;
  if (0xf < param_1) {
    in_ECX = local_18;
  }
  *(undefined1 *)((int)in_ECX + param_2) = 0;
  ExceptionList = local_10;
  return;
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


/* FUN_0040c590 @ 0040c590  kind=gamemisc  attributed-by=none  size=112 */

uint FUN_0040c590(byte *param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  
  if (param_3 == 0) {
    return 0;
  }
  while (uVar1 = param_3 - 4, 3 < param_3) {
    if (*(int *)param_1 != *(int *)param_2) goto LAB_0040c5c6;
    param_1 = param_1 + 4;
    param_2 = param_2 + 4;
    param_3 = uVar1;
  }
  if (uVar1 != 0xfffffffc) {
LAB_0040c5c6:
    bVar2 = *param_1 < *param_2;
    if ((*param_1 != *param_2) ||
       ((uVar1 != 0xfffffffd &&
        ((bVar2 = param_1[1] < param_2[1], param_1[1] != param_2[1] ||
         ((uVar1 != 0xfffffffe &&
          ((bVar2 = param_1[2] < param_2[2], param_1[2] != param_2[2] ||
           ((uVar1 != 0xffffffff && (bVar2 = param_1[3] < param_2[3], param_1[3] != param_2[3]))))))
         )))))) {
      return -(uint)bVar2 | 1;
    }
  }
  return 0;
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


/* FUN_0042c080 @ 0042c080  kind=gamemisc  attributed-by=none  size=889 */

void FUN_0042c080(void)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar2 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  FUN_00601cb0();
  switch(*(undefined4 *)(in_ECX + 0x18c)) {
  case 0:
    iVar4 = *(int *)(in_ECX + 0x194) + 2;
    break;
  case 1:
    *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x160) + 0x8006d0) + 100) =
         *(undefined4 *)(in_ECX + 0x194);
    goto switchD_0042c0b4_default;
  case 2:
    iVar4 = *(int *)(in_ECX + 0x194) + 9;
    break;
  case 3:
    iVar4 = *(int *)(in_ECX + 0x194) + 0xb;
    break;
  case 4:
    iVar4 = *(int *)(in_ECX + 0x194) + 4;
    break;
  case 5:
    iVar4 = *(int *)(in_ECX + 0x194) + 7;
    break;
  case 6:
    iVar4 = *(int *)(in_ECX + 0x194) + 0xf;
    break;
  case 7:
    iVar4 = *(int *)(in_ECX + 0x194) + 0xd;
    break;
  default:
    goto switchD_0042c0b4_default;
  }
  *(int *)(*(int *)(*(int *)(in_ECX + 0x160) + 0x8006d0) + 100) = iVar4;
switchD_0042c0b4_default:
  *(char *)(*(int *)(*(int *)(in_ECX + 0x160) + 0x8006d0) + 0x140) =
       *(char *)(in_ECX + 400) + '\x01';
  iVar6 = 0x4de;
  iVar5 = 0x4e3;
  iVar7 = 0x4e4;
  iVar4 = 0x4f2;
  switch(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x160) + 0x8006d0) + 100)) {
  case 0:
    iVar6 = 0x4d4;
    iVar5 = 0x4d7;
    iVar7 = 0x500;
    iVar4 = 0x509;
    break;
  case 1:
    iVar6 = 0x4d8;
    iVar5 = 0x4dd;
    iVar7 = 0x50a;
    iVar4 = 0x513;
    break;
  case 3:
    iVar6 = 0x4f3;
    iVar5 = 0x4f8;
    iVar7 = 0x4f9;
    iVar4 = 0x4ff;
    break;
  case 4:
    iVar6 = 0x4b;
    iVar5 = 0x4f;
    iVar7 = 0x50;
    iVar4 = 0x55;
    break;
  case 5:
    iVar6 = 0x56;
    iVar5 = 0x5a;
    iVar7 = 0x5b;
    iVar4 = 0x60;
    break;
  case 7:
    iVar6 = 0x62;
    iVar5 = 99;
    iVar7 = 100;
    iVar4 = 0x69;
    break;
  case 8:
    iVar6 = 0x6a;
    iVar5 = 0x6e;
    iVar7 = 100;
    iVar4 = 0x69;
    break;
  case 9:
    iVar6 = 0x11a;
    iVar5 = 0x11e;
    iVar7 = 0x11f;
    iVar4 = 0x121;
    break;
  case 10:
    iVar6 = 0x122;
    iVar5 = 0x126;
    iVar7 = 0x127;
    iVar4 = 299;
    break;
  case 0xb:
    iVar6 = 0x514;
    iVar5 = 0x518;
    iVar7 = 0x51e;
    iVar4 = 0x527;
    break;
  case 0xc:
    iVar6 = 0x519;
    iVar5 = 0x51d;
    iVar7 = 0x528;
    iVar4 = 0x52b;
    break;
  case 0xd:
    iVar6 = 0x52c;
    iVar5 = 0x530;
    iVar7 = 0x531;
    iVar4 = 0x535;
    break;
  case 0xe:
    iVar6 = 0x536;
    iVar5 = 0x539;
    iVar7 = 0x53a;
    iVar4 = 0x53d;
    break;
  case 0xf:
    iVar6 = 0x12f;
    iVar5 = 0x134;
    iVar7 = 0x135;
    iVar4 = 0x13a;
    break;
  case 0x10:
    iVar6 = 0x13b;
    iVar5 = 0x140;
    iVar7 = 0x141;
    iVar4 = 0x146;
  }
  if (*(int *)(in_ECX + 0x198) < 0) {
    *(int *)(in_ECX + 0x198) = iVar5 - iVar6;
  }
  if ((iVar5 - iVar6) + 1 <= *(int *)(in_ECX + 0x198)) {
    *(undefined4 *)(in_ECX + 0x198) = 0;
  }
  if (*(int *)(in_ECX + 0x19c) < 0) {
    *(int *)(in_ECX + 0x19c) = iVar4 - iVar7;
  }
  if ((iVar4 - iVar7) + 1 <= *(int *)(in_ECX + 0x19c)) {
    *(undefined4 *)(in_ECX + 0x19c) = 0;
  }
  *(undefined4 *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x160) + 0x8006d0) + 0x1d28) + 8) =
       *(undefined4 *)(in_ECX + 0x198);
  *(undefined4 *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x160) + 0x8006d0) + 0x1d28) + 0xc) =
       *(undefined4 *)(in_ECX + 0x19c);
  iVar4 = *(int *)(*(int *)(*(int *)(in_ECX + 0x160) + 0x8006d0) + 0x1d28);
  if ((undefined1 *)(in_ECX + 0x1a3) == (undefined1 *)0x0) {
    *(undefined1 *)(iVar4 + 0x10) = *(undefined1 *)(in_ECX + 0x1a0);
    *(undefined1 *)(iVar4 + 0x11) = *(undefined1 *)(in_ECX + 0x1a1);
    uVar1 = *(undefined1 *)(in_ECX + 0x1a2);
  }
  else {
    *(undefined1 *)(iVar4 + 0x10) = *(undefined1 *)(in_ECX + 0x1a3);
    *(undefined1 *)(iVar4 + 0x11) = *(undefined1 *)(in_ECX + 0x1a4);
    uVar1 = *(undefined1 *)(in_ECX + 0x1a5);
  }
  *(undefined1 *)(iVar4 + 0x12) = uVar1;
  **(undefined4 **)(*(int *)(*(int *)(in_ECX + 0x160) + 0x8006d0) + 0x1d28) =
       *(undefined4 *)(in_ECX + 0x18c);
  *(undefined1 *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x160) + 0x8006d0) + 0x1d28) + 4) =
       *(undefined1 *)(in_ECX + 0x194);
  uVar3 = FUN_00428750();
  FUN_00459800(uVar3);
  iVar4 = *(int *)(*(int *)(in_ECX + 0x160) + 0x8006d0);
  FUN_0043f7c0(iVar4 + 100,iVar4 + 0x78,*(undefined4 *)(iVar4 + 0x1d28));
  FUN_004772b0();
  FUN_00601e90();
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return;
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


/* FUN_0043c790 @ 0043c790  kind=gamemisc  attributed-by=none  size=66 */

void FUN_0043c790(void)

{
  int in_ECX;
  undefined1 local_8 [4];
  
  if (0xf < *(uint *)(in_ECX + 0x3c)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(in_ECX + 0x28));
  }
  *(undefined4 *)(in_ECX + 0x3c) = 0xf;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined1 *)(in_ECX + 0x28) = 0;
  FUN_0043f040(local_8,**(undefined4 **)(in_ECX + 0x1c),*(undefined4 **)(in_ECX + 0x1c));
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(in_ECX + 0x1c));
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


/* FUN_0043f040 @ 0043f040  kind=gamemisc  attributed-by=none  size=189 */

undefined4 * FUN_0043f040(undefined4 *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *in_ECX;
  undefined1 local_8 [4];
  
  piVar2 = (int *)*in_ECX;
  piVar3 = param_2;
  if ((param_2 == (int *)*piVar2) && (param_3 == piVar2)) {
    FUN_0043c920(piVar2[1]);
    *(int *)(*in_ECX + 4) = *in_ECX;
    *(int *)*in_ECX = *in_ECX;
    *(int *)(*in_ECX + 8) = *in_ECX;
    in_ECX[1] = 0;
    *param_1 = *(undefined4 *)*in_ECX;
    return param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0xd) == '\0') {
      param_2 = (int *)piVar3[2];
      if (*(char *)((int)param_2 + 0xd) == '\0') {
        cVar1 = *(char *)(*param_2 + 0xd);
        piVar2 = (int *)*param_2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0xd);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0xd);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0xd);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    FUN_0043f100(local_8,piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return param_1;
}


/* FUN_0043f100 @ 0043f100  kind=gamemisc  attributed-by=none  size=645 */

/* WARNING: Removing unreachable block (ram,0x0043f1cd) */
/* WARNING: Removing unreachable block (ram,0x0043f1dd) */
/* WARNING: Removing unreachable block (ram,0x0043f1e6) */
/* WARNING: Removing unreachable block (ram,0x0043f1e9) */
/* WARNING: Removing unreachable block (ram,0x0043f1d9) */
/* WARNING: Removing unreachable block (ram,0x0043f1f7) */
/* WARNING: Removing unreachable block (ram,0x0043f206) */
/* WARNING: Removing unreachable block (ram,0x0043f211) */
/* WARNING: Removing unreachable block (ram,0x0043f20d) */
/* WARNING: Removing unreachable block (ram,0x0043f201) */
/* WARNING: Removing unreachable block (ram,0x0043f214) */

void FUN_0043f100(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *in_ECX;
  int *piVar5;
  int *piVar6;
  
  if (*(char *)((int)param_2 + 0xd) != '\0') {
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("invalid map/set<T> iterator");
  }
  FUN_005c3ea0();
  piVar6 = (int *)*param_2;
  if (*(char *)((int)piVar6 + 0xd) == '\0') {
    if (*(char *)(param_2[2] + 0xd) == '\0') {
      piVar6 = (int *)param_2[2];
    }
  }
  else {
    piVar6 = (int *)param_2[2];
  }
  piVar5 = (int *)param_2[1];
  if (*(char *)((int)piVar6 + 0xd) == '\0') {
    piVar6[1] = (int)piVar5;
  }
  if (*(int **)(*in_ECX + 4) == param_2) {
    *(int **)(*in_ECX + 4) = piVar6;
  }
  else if ((int *)*piVar5 == param_2) {
    *piVar5 = (int)piVar6;
  }
  else {
    piVar5[2] = (int)piVar6;
  }
  puVar1 = (undefined4 *)*in_ECX;
  if ((int *)*puVar1 == param_2) {
    piVar3 = piVar5;
    if (*(char *)((int)piVar6 + 0xd) == '\0') {
      piVar3 = (int *)FUN_004e6ce0(piVar6);
    }
    *puVar1 = piVar3;
  }
  iVar2 = *in_ECX;
  if (*(int **)(iVar2 + 8) == param_2) {
    if (*(char *)((int)piVar6 + 0xd) == '\0') {
      uVar4 = FUN_00428aa0(piVar6);
      *(undefined4 *)(iVar2 + 8) = uVar4;
    }
    else {
      *(int **)(iVar2 + 8) = piVar5;
    }
  }
  if ((char)param_2[3] == '\x01') {
    if (piVar6 != *(int **)(*in_ECX + 4)) {
      do {
        piVar3 = piVar5;
        if ((char)piVar6[3] != '\x01') break;
        piVar5 = (int *)*piVar3;
        if (piVar6 == piVar5) {
          piVar5 = (int *)piVar3[2];
          if ((char)piVar5[3] == '\0') {
            *(undefined1 *)(piVar5 + 3) = 1;
            *(undefined1 *)(piVar3 + 3) = 0;
            FUN_004e37e0(piVar3);
            piVar5 = (int *)piVar3[2];
          }
          if (*(char *)((int)piVar5 + 0xd) == '\0') {
            if ((*(char *)(*piVar5 + 0xc) != '\x01') || (*(char *)(piVar5[2] + 0xc) != '\x01')) {
              if (*(char *)(piVar5[2] + 0xc) == '\x01') {
                *(undefined1 *)(*piVar5 + 0xc) = 1;
                *(undefined1 *)(piVar5 + 3) = 0;
                FUN_0042cac0(piVar5);
                piVar5 = (int *)piVar3[2];
              }
              *(char *)(piVar5 + 3) = (char)piVar3[3];
              *(undefined1 *)(piVar3 + 3) = 1;
              *(undefined1 *)(piVar5[2] + 0xc) = 1;
              FUN_004e37e0(piVar3);
              *(undefined1 *)(piVar6 + 3) = 1;
              goto LAB_0043f35e;
            }
LAB_0043f300:
            *(undefined1 *)(piVar5 + 3) = 0;
          }
        }
        else {
          if ((char)piVar5[3] == '\0') {
            *(undefined1 *)(piVar5 + 3) = 1;
            *(undefined1 *)(piVar3 + 3) = 0;
            FUN_0042cac0(piVar3);
            piVar5 = (int *)*piVar3;
          }
          if (*(char *)((int)piVar5 + 0xd) == '\0') {
            if ((*(char *)(piVar5[2] + 0xc) == '\x01') && (*(char *)(*piVar5 + 0xc) == '\x01'))
            goto LAB_0043f300;
            if (*(char *)(*piVar5 + 0xc) == '\x01') {
              *(undefined1 *)(piVar5[2] + 0xc) = 1;
              *(undefined1 *)(piVar5 + 3) = 0;
              FUN_004e37e0(piVar5);
              piVar5 = (int *)*piVar3;
            }
            *(char *)(piVar5 + 3) = (char)piVar3[3];
            *(undefined1 *)(piVar3 + 3) = 1;
            *(undefined1 *)(*piVar5 + 0xc) = 1;
            FUN_0042cac0(piVar3);
            *(undefined1 *)(piVar6 + 3) = 1;
            goto LAB_0043f35e;
          }
        }
        piVar5 = (int *)piVar3[1];
        piVar6 = piVar3;
      } while (piVar3 != *(int **)(*in_ECX + 4));
    }
    *(undefined1 *)(piVar6 + 3) = 1;
  }
LAB_0043f35e:
  if (0xf < (uint)param_2[10]) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_2[5]);
  }
  param_2[10] = 0xf;
  param_2[9] = 0;
  *(undefined1 *)(param_2 + 5) = 0;
                    /* WARNING: Subroutine does not return */
  operator_delete(param_2);
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


/* FUN_00449cb0 @ 00449cb0  kind=gamemisc  attributed-by=none  size=44 */

int FUN_00449cb0(int param_1,int param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0xc) {
    FUN_0044aa20(param_1);
    param_3 = param_3 + 0xc;
  }
  return param_3;
}


/* FUN_0044a3c0 @ 0044a3c0  kind=gamemisc  attributed-by=none  size=65 */

undefined4 * FUN_0044a3c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    *param_3 = *param_1;
    FUN_0042c5e0(param_1 + 1);
    param_1 = param_1 + 0x47;
    param_3 = param_3 + 0x47;
  } while (param_1 != param_2);
  return param_3;
}


/* FUN_0044a410 @ 0044a410  kind=gamemisc  attributed-by=none  size=122 */

int FUN_0044a410(int param_1,int param_2,int param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_006e2c81;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0xc) {
    local_8 = 1;
    if (param_3 != 0) {
      FUN_0044a700(param_1);
    }
    param_3 = param_3 + 0xc;
  }
  ExceptionList = local_10;
  return param_3;
}


/* FUN_0044a4b0 @ 0044a4b0  kind=gamemisc  attributed-by=none  size=71 */

undefined4 * FUN_0044a4b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      FUN_0040ee70(param_1 + 1);
    }
    param_1 = param_1 + 0x47;
    param_3 = param_3 + 0x47;
  } while (param_1 != param_2);
  return param_3;
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


/* FUN_0044aa20 @ 0044aa20  kind=gamemisc  attributed-by=none  size=365 */

void FUN_0044aa20(int *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  int *in_ECX;
  int iVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar4 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e2cf0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (in_ECX != param_1) {
    if (*param_1 == param_1[1]) {
      iVar6 = *in_ECX;
    }
    else {
      uVar2 = (param_1[1] - *param_1) / 0x11c;
      uVar3 = (in_ECX[1] - *in_ECX) / 0x11c;
      if (uVar3 < uVar2) {
        if ((uint)((in_ECX[2] - *in_ECX) / 0x11c) < uVar2) {
          if ((void *)*in_ECX != (void *)0x0) {
            param_1 = (int *)uVar2;
                    /* WARNING: Subroutine does not return */
            operator_delete((void *)*in_ECX);
          }
          piVar1 = param_1 + 1;
          iVar6 = *param_1;
          param_1 = (int *)uVar2;
          cVar5 = FUN_0044b5f0((*piVar1 - iVar6) / 0x11c);
          if (cVar5 == '\0') {
            ExceptionList = local_10;
            return;
          }
          local_8 = 0;
          iVar6 = FUN_0044a600(*piVar4,piVar4[1],*in_ECX,(int)&param_1 + 3,param_1);
        }
        else {
          iVar6 = *param_1;
          iVar7 = uVar3 * 0x11c + iVar6;
          param_1 = (int *)uVar2;
          FUN_0044a3c0(iVar6,iVar7,*in_ECX,uVar2);
          iVar6 = FUN_0044a600(iVar7,piVar4[1],in_ECX[1],(int)&param_1 + 3,param_1);
        }
      }
      else {
        iVar6 = *param_1;
        piVar1 = param_1 + 1;
        param_1 = (int *)uVar2;
        FUN_0044a3c0(iVar6,*piVar1,*in_ECX,uVar2);
        iVar6 = ((piVar4[1] - *piVar4) / 0x11c) * 0x11c + *in_ECX;
      }
    }
    in_ECX[1] = iVar6;
  }
  ExceptionList = local_10;
  return;
}


/* FUN_0044ad30 @ 0044ad30  kind=gamemisc  attributed-by=none  size=432 */

int * FUN_0044ad30(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  void **ppvVar5;
  uint *puVar6;
  char cVar7;
  int *in_ECX;
  int iVar8;
  int iVar9;
  uint uStack_3c;
  undefined1 local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar4 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e2d30;
  local_10 = ExceptionList;
  uStack_3c = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  if (in_ECX != param_1) {
    iVar9 = *param_1;
    iVar1 = param_1[1];
    if (iVar9 == iVar1) {
      ExceptionList = &local_10;
      local_14 = (undefined1 *)&uStack_3c;
      FUN_00639cf0(*in_ECX,in_ECX[1],(int)&param_1 + 3,param_1);
      iVar9 = *in_ECX;
    }
    else {
      iVar8 = *in_ECX;
      uVar2 = (iVar1 - iVar9) / 0xc;
      uVar3 = (in_ECX[1] - iVar8) / 0xc;
      ppvVar5 = &local_10;
      puVar6 = &uStack_3c;
      if (uVar3 < uVar2) {
        if ((uint)((in_ECX[2] - iVar8) / 0xc) < uVar2) {
          if (iVar8 != 0) {
            ExceptionList = &local_10;
            local_14 = (undefined1 *)&uStack_3c;
            FUN_00639cf0(iVar8,in_ECX[1],&local_15,param_1);
                    /* WARNING: Subroutine does not return */
            operator_delete((void *)*in_ECX);
          }
          ExceptionList = &local_10;
          cVar7 = FUN_0044b6d0((param_1[1] - *param_1) / 0xc);
          if (cVar7 == '\0') {
            ExceptionList = local_10;
            return in_ECX;
          }
          local_8 = 0;
          iVar9 = FUN_0044a410(*piVar4,piVar4[1],*in_ECX,(int)&param_1 + 3,param_1);
        }
        else {
          iVar1 = iVar9 + uVar3 * 0xc;
          ExceptionList = &local_10;
          local_14 = (undefined1 *)&uStack_3c;
          FUN_00449cb0(iVar9,iVar1,iVar8);
          iVar9 = FUN_0044a410(iVar1,param_1[1],in_ECX[1],&local_15,param_1);
        }
      }
      else {
        for (; local_14 = (undefined1 *)puVar6, ExceptionList = ppvVar5, iVar9 != iVar1;
            iVar9 = iVar9 + 0xc) {
          FUN_0044aa20(iVar9);
          iVar8 = iVar8 + 0xc;
          ppvVar5 = ExceptionList;
          puVar6 = (uint *)local_14;
        }
        FUN_00639cf0(iVar8,in_ECX[1],&local_15,param_1);
        iVar9 = *in_ECX + ((param_1[1] - *param_1) / 0xc) * 0xc;
      }
    }
    in_ECX[1] = iVar9;
  }
  ExceptionList = local_10;
  return in_ECX;
}


/* FUN_0044b6d0 @ 0044b6d0  kind=gamemisc  attributed-by=none  size=102 */

undefined4 FUN_0044b6d0(uint param_1)

{
  void *pvVar1;
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (0x15555555 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  pvVar1 = operator_new(param_1 * 0xc);
  if (pvVar1 != (void *)0x0) {
    *in_ECX = pvVar1;
    in_ECX[1] = pvVar1;
    pvVar1 = (void *)((int)pvVar1 + param_1 * 0xc);
    in_ECX[2] = pvVar1;
    return CONCAT31((int3)((uint)pvVar1 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_alloc();
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


/* FUN_00451e80 @ 00451e80  kind=gamemisc  attributed-by=none  size=86 */

int FUN_00451e80(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_0046d650(param_1,param_2);
  if ((undefined4 *)(iVar1 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)(iVar1 + 8) = *param_3;
    *(undefined4 *)(iVar1 + 0xc) = param_3[1];
    *(undefined4 *)(iVar1 + 0x10) = param_3[2];
    *(undefined1 *)(iVar1 + 0x14) = *(undefined1 *)(param_3 + 3);
    *(undefined1 *)(iVar1 + 0x15) = *(undefined1 *)((int)param_3 + 0xd);
    *(undefined1 *)(iVar1 + 0x16) = *(undefined1 *)((int)param_3 + 0xe);
    *(undefined1 *)(iVar1 + 0x17) = *(undefined1 *)((int)param_3 + 0xf);
    *(undefined4 *)(iVar1 + 0x18) = param_3[4];
  }
  return iVar1;
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


/* FUN_0046dcb0 @ 0046dcb0  kind=gamemisc  attributed-by=none  size=10 */

undefined4 FUN_0046dcb0(undefined4 param_1)

{
  return param_1;
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


/* FUN_004772b0 @ 004772b0  kind=gamemisc  attributed-by=none  size=1296 */

void FUN_004772b0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  float10 fVar7;
  undefined4 local_f81;
  undefined1 local_f7d [3641];
  void *local_144;
  undefined4 local_140;
  undefined2 local_12c [2];
  undefined4 local_128;
  undefined4 local_124;
  undefined2 local_120;
  undefined1 local_11e;
  undefined2 local_11c;
  undefined1 local_118 [256];
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e598b;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar4 = FUN_0043bc00(local_14);
  FUN_0044af00(uVar4);
  iVar5 = FUN_0043c020();
  iVar6 = *(int *)(in_ECX + 0x8006d0);
  local_8 = 0;
  FUN_0044ad30(iVar5);
  *(undefined4 *)(iVar6 + 0x11e8) = *(undefined4 *)(iVar5 + 0xc);
  FUN_0042c5e0(iVar5 + 0x10);
  *(undefined4 *)(iVar6 + 0x1304) = *(undefined4 *)(iVar5 + 0x128);
  *(undefined4 *)(iVar6 + 0x1308) = *(undefined4 *)(iVar5 + 300);
  local_8 = 0xffffffff;
  if (local_144 != (void *)0x0) {
    FUN_00639cf0(local_144,local_140,local_f7d,local_f81);
                    /* WARNING: Subroutine does not return */
    operator_delete(local_144);
  }
  FUN_00487380(4);
  piVar1 = *(int **)(*(int *)(in_ECX + 0x8006d0) + 0x11dc);
  if ((uint)((piVar1[1] - *piVar1) / 0x11c) < 0x32) {
    FUN_0044d660(0x32);
  }
  FUN_0044d660(0x32);
  FUN_0044d660(0x32);
  FUN_0044d660(0x32);
  iVar6 = *(int *)(in_ECX + 0x8006d0);
  switch(*(undefined1 *)(iVar6 + 0x140)) {
  case 1:
    *(undefined1 *)(iVar6 + 0xaa8) = 3;
    *(undefined1 *)(*(int *)(in_ECX + 0x8006d0) + 0xaa9) = 0x11;
    *(undefined1 *)(*(int *)(in_ECX + 0x8006d0) + 0xab5) = 2;
    *(undefined2 *)(*(int *)(in_ECX + 0x8006d0) + 0xab8) = 1;
    FUN_0042f3e0();
    local_12c[0] = 3;
    local_120 = CONCAT11(1,(undefined1)local_120);
    local_11c = 1;
    iVar6 = 2;
    do {
      FUN_0046ebe0(local_12c,0xffffffff);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    local_12c[0] = 0xd03;
    break;
  case 2:
    *(undefined1 *)(iVar6 + 0xaa8) = 3;
    *(undefined1 *)(*(int *)(in_ECX + 0x8006d0) + 0xaa9) = 6;
    *(undefined1 *)(*(int *)(in_ECX + 0x8006d0) + 0xab5) = 2;
    *(undefined2 *)(*(int *)(in_ECX + 0x8006d0) + 0xab8) = 1;
    FUN_0042f3e0();
    local_12c[0] = 0x703;
    local_120 = CONCAT11(2,(undefined1)local_120);
    local_11c = 1;
    FUN_0046ebe0(local_12c,0xffffffff);
    goto LAB_00477659;
  case 3:
    *(undefined1 *)(iVar6 + 0xaa8) = 3;
    *(undefined1 *)(*(int *)(in_ECX + 0x8006d0) + 0xaa9) = 10;
    *(undefined1 *)(*(int *)(in_ECX + 0x8006d0) + 0xab5) = 2;
    *(undefined2 *)(*(int *)(in_ECX + 0x8006d0) + 0xab8) = 1;
    FUN_0042f3e0();
    local_12c[0] = 0xc03;
    local_120 = CONCAT11(0xb,(undefined1)local_120);
    local_11c = 1;
    iVar6 = 2;
    do {
      FUN_0046ebe0(local_12c,0xffffffff);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
LAB_00477659:
    local_120 = CONCAT11(2,(undefined1)local_120);
    local_12c[0] = 0xb03;
    break;
  case 4:
    *(undefined1 *)(iVar6 + 0xaa8) = 3;
    *(undefined1 *)(*(int *)(in_ECX + 0x8006d0) + 0xaa9) = 3;
    *(undefined1 *)(*(int *)(in_ECX + 0x8006d0) + 0xab5) = 1;
    *(undefined2 *)(*(int *)(in_ECX + 0x8006d0) + 0xab8) = 1;
    *(undefined1 *)(*(int *)(in_ECX + 0x8006d0) + 0x990) = 3;
    *(undefined1 *)(*(int *)(in_ECX + 0x8006d0) + 0x991) = 3;
    *(undefined1 *)(*(int *)(in_ECX + 0x8006d0) + 0x99d) = 1;
    *(undefined2 *)(*(int *)(in_ECX + 0x8006d0) + 0x9a0) = 1;
    FUN_0042f3e0();
    local_12c[0] = 0x403;
    local_120 = CONCAT11(1,(undefined1)local_120);
    local_11c = 1;
    iVar6 = 2;
    do {
      FUN_0046ebe0(local_12c,0xffffffff);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    local_12c[0] = 0x503;
    break;
  default:
    goto switchD_0047742e_default;
  }
  FUN_0046ebe0(local_12c,0xffffffff);
switchD_0047742e_default:
  *(undefined1 *)(*(int *)(in_ECX + 0x8006d0) + 0xcd8) = 9;
  *(undefined1 *)(*(int *)(in_ECX + 0x8006d0) + 0xce5) = 0xb;
  local_128 = 0;
  *(undefined1 *)(*(int *)(in_ECX + 0x8006d0) + 0xbc0) = 9;
  local_124 = 0;
  *(undefined1 *)(*(int *)(in_ECX + 0x8006d0) + 0xbcd) = 0xc;
  local_120 = 0;
  local_11e = 0;
  local_18 = 0;
  memset(local_118,0,0x100);
  local_12c[0] = 0x101;
  local_11c = 1;
  iVar6 = 5;
  do {
    FUN_0046ebe0(local_12c,0xffffffff);
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  *(undefined1 *)(*(int *)(in_ECX + 0x8006d0) + 0xdf0) = 0x18;
  *(undefined2 *)(*(int *)(in_ECX + 0x8006d0) + 0xe00) = 1;
  *(undefined1 *)(*(int *)(in_ECX + 0x8006d0) + 0xdf1) = 0;
  *(undefined1 *)(*(int *)(in_ECX + 0x8006d0) + 0xdfd) = 1;
  fVar7 = (float10)FUN_00444db0();
  *(float *)(*(int *)(in_ECX + 0x8006d0) + 0x16c) = (float)fVar7;
  iVar6 = *(int *)(*(int *)(in_ECX + 0x8006d0) + 0x1d28);
  puVar2 = *(undefined4 **)(iVar6 + 0x14);
  pvVar3 = (void *)*puVar2;
  *puVar2 = puVar2;
  *(int *)(*(int *)(iVar6 + 0x14) + 4) = *(int *)(iVar6 + 0x14);
  *(undefined4 *)(iVar6 + 0x18) = 0;
  if (pvVar3 == *(void **)(iVar6 + 0x14)) {
    FUN_0047fae0(1);
    ExceptionList = local_10;
    __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(pvVar3);
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


