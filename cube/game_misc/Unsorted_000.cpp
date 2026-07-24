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


/* FUN_0040ea30 @ 0040ea30  kind=gamemisc  attributed-by=none  size=20 */

void FUN_0040ea30(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  return;
}


/* FUN_0040eaf0 @ 0040eaf0  kind=gamemisc  attributed-by=none  size=106 */

void FUN_0040eaf0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  in_ECX[5] = 7;
  in_ECX[4] = 0;
  *(undefined2 *)in_ECX = 0;
  if ((uint)param_1[5] < 8) {
    if (param_1[4] + 1 != 0) {
      memmove(in_ECX,param_1,(param_1[4] + 1) * 2);
    }
  }
  else {
    *in_ECX = *param_1;
    *param_1 = 0;
  }
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  param_1[5] = 7;
  param_1[4] = 0;
  *(undefined2 *)param_1 = 0;
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


/* FUN_004288e0 @ 004288e0  kind=gamemisc  attributed-by=none  size=52 */

int FUN_004288e0(undefined4 *param_1)

{
  int in_ECX;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(int *)(in_ECX + 0x20) * 0x10 + *(int *)(in_ECX + 0x4c));
  *puVar1 = *param_1;
  puVar1[1] = param_1[1];
  puVar1[2] = param_1[2];
  puVar1[3] = param_1[3];
  return *(int *)(in_ECX + 0x20) * 0x10 + *(int *)(in_ECX + 0x4c);
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


/* FUN_00428aa0 @ 00428aa0  kind=gamemisc  attributed-by=none  size=31 */

int FUN_00428aa0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = *(char *)(*(int *)(param_1 + 8) + 0xd);
  iVar2 = *(int *)(param_1 + 8);
  while (iVar3 = iVar2, cVar1 == '\0') {
    iVar2 = *(int *)(iVar3 + 8);
    cVar1 = *(char *)(iVar2 + 0xd);
    param_1 = iVar3;
  }
  return param_1;
}


/* FUN_0042cac0 @ 0042cac0  kind=gamemisc  attributed-by=none  size=88 */

void FUN_0042cac0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_1;
  }
  *(int *)(iVar1 + 4) = param_1[1];
  if (param_1 == *(int **)(*in_ECX + 4)) {
    *(int *)(*in_ECX + 4) = iVar1;
    *(int **)(iVar1 + 8) = param_1;
    param_1[1] = iVar1;
    return;
  }
  piVar2 = (int *)param_1[1];
  if (param_1 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int **)(iVar1 + 8) = param_1;
    param_1[1] = iVar1;
    return;
  }
  *piVar2 = iVar1;
  *(int **)(iVar1 + 8) = param_1;
  param_1[1] = iVar1;
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


/* FUN_0042f7e0 @ 0042f7e0  kind=gamemisc  attributed-by=none  size=119 */

undefined * FUN_0042f7e0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = FUN_004347a0(param_1,param_2,param_4);
  if (iVar2 == 0) {
    return &DAT_0076afc4;
  }
  iVar1 = *(int *)(iVar2 + 0x10);
  if (param_3 < iVar1) {
    return &DAT_0076afc4;
  }
  if (*(int *)(iVar2 + 0x1c) + iVar1 <= param_3) {
    puVar3 = &DAT_0076afbc;
    if (0 < param_3) {
      puVar3 = &DAT_0076afc0;
    }
    return puVar3;
  }
  puVar3 = (undefined *)FUN_0042f730(param_3 - iVar1);
  if ((((puVar3[3] & 0x1f) == 0) && (param_3 < 1)) && ((puVar3[3] & 0x40) == 0)) {
    puVar3 = &DAT_0076afbc;
  }
  return puVar3;
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


/* FUN_0043bc00 @ 0043bc00  kind=gamemisc  attributed-by=none  size=1054 */

void FUN_0043bc00(void)

{
  undefined2 *in_ECX;
  
  *in_ECX = 0;
  *(undefined4 *)(in_ECX + 2) = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  in_ECX[6] = 0;
  *(undefined1 *)(in_ECX + 7) = 0;
  in_ECX[8] = 1;
  *(undefined4 *)(in_ECX + 0x8a) = 0;
  memset(in_ECX + 10,0,0x100);
  in_ECX[0x8c] = 0;
  *(undefined4 *)(in_ECX + 0x8e) = 0;
  *(undefined4 *)(in_ECX + 0x90) = 0;
  in_ECX[0x92] = 0;
  *(undefined1 *)(in_ECX + 0x93) = 0;
  in_ECX[0x94] = 1;
  *(undefined4 *)(in_ECX + 0x116) = 0;
  memset(in_ECX + 0x96,0,0x100);
  in_ECX[0x118] = 0;
  *(undefined4 *)(in_ECX + 0x11a) = 0;
  *(undefined4 *)(in_ECX + 0x11c) = 0;
  in_ECX[0x11e] = 0;
  *(undefined1 *)(in_ECX + 0x11f) = 0;
  in_ECX[0x120] = 1;
  *(undefined4 *)(in_ECX + 0x1a2) = 0;
  memset(in_ECX + 0x122,0,0x100);
  in_ECX[0x1a4] = 0;
  *(undefined4 *)(in_ECX + 0x1a6) = 0;
  *(undefined4 *)(in_ECX + 0x1a8) = 0;
  in_ECX[0x1aa] = 0;
  *(undefined1 *)(in_ECX + 0x1ab) = 0;
  in_ECX[0x1ac] = 1;
  *(undefined4 *)(in_ECX + 0x22e) = 0;
  memset(in_ECX + 0x1ae,0,0x100);
  in_ECX[0x230] = 0;
  *(undefined4 *)(in_ECX + 0x232) = 0;
  *(undefined4 *)(in_ECX + 0x234) = 0;
  in_ECX[0x236] = 0;
  *(undefined1 *)(in_ECX + 0x237) = 0;
  in_ECX[0x238] = 1;
  *(undefined4 *)(in_ECX + 0x2ba) = 0;
  memset(in_ECX + 0x23a,0,0x100);
  in_ECX[700] = 0;
  *(undefined4 *)(in_ECX + 0x2be) = 0;
  *(undefined4 *)(in_ECX + 0x2c0) = 0;
  in_ECX[0x2c2] = 0;
  *(undefined1 *)(in_ECX + 0x2c3) = 0;
  in_ECX[0x2c4] = 1;
  *(undefined4 *)(in_ECX + 0x346) = 0;
  memset(in_ECX + 0x2c6,0,0x100);
  in_ECX[0x348] = 0;
  *(undefined4 *)(in_ECX + 0x34a) = 0;
  *(undefined4 *)(in_ECX + 0x34c) = 0;
  in_ECX[0x34e] = 0;
  *(undefined1 *)(in_ECX + 0x34f) = 0;
  in_ECX[0x350] = 1;
  *(undefined4 *)(in_ECX + 0x3d2) = 0;
  memset(in_ECX + 0x352,0,0x100);
  in_ECX[0x3d4] = 0;
  *(undefined4 *)(in_ECX + 0x3d6) = 0;
  *(undefined4 *)(in_ECX + 0x3d8) = 0;
  in_ECX[0x3da] = 0;
  *(undefined1 *)(in_ECX + 0x3db) = 0;
  in_ECX[0x3dc] = 1;
  *(undefined4 *)(in_ECX + 0x45e) = 0;
  memset(in_ECX + 0x3de,0,0x100);
  in_ECX[0x460] = 0;
  *(undefined4 *)(in_ECX + 0x462) = 0;
  *(undefined4 *)(in_ECX + 0x464) = 0;
  in_ECX[0x466] = 0;
  *(undefined1 *)(in_ECX + 0x467) = 0;
  in_ECX[0x468] = 1;
  *(undefined4 *)(in_ECX + 0x4ea) = 0;
  memset(in_ECX + 0x46a,0,0x100);
  in_ECX[0x4ec] = 0;
  *(undefined4 *)(in_ECX + 0x4ee) = 0;
  *(undefined4 *)(in_ECX + 0x4f0) = 0;
  in_ECX[0x4f2] = 0;
  *(undefined1 *)(in_ECX + 0x4f3) = 0;
  in_ECX[0x4f4] = 1;
  *(undefined4 *)(in_ECX + 0x576) = 0;
  memset(in_ECX + 0x4f6,0,0x100);
  in_ECX[0x578] = 0;
  *(undefined4 *)(in_ECX + 0x57a) = 0;
  *(undefined4 *)(in_ECX + 0x57c) = 0;
  in_ECX[0x57e] = 0;
  *(undefined1 *)(in_ECX + 0x57f) = 0;
  in_ECX[0x580] = 1;
  *(undefined4 *)(in_ECX + 0x602) = 0;
  memset(in_ECX + 0x582,0,0x100);
  in_ECX[0x604] = 0;
  *(undefined4 *)(in_ECX + 0x606) = 0;
  *(undefined4 *)(in_ECX + 0x608) = 0;
  in_ECX[0x60a] = 0;
  *(undefined1 *)(in_ECX + 0x60b) = 0;
  in_ECX[0x60c] = 1;
  *(undefined4 *)(in_ECX + 0x68e) = 0;
  memset(in_ECX + 0x60e,0,0x100);
  in_ECX[0x690] = 0;
  *(undefined4 *)(in_ECX + 0x692) = 0;
  *(undefined4 *)(in_ECX + 0x694) = 0;
  in_ECX[0x696] = 0;
  *(undefined1 *)(in_ECX + 0x697) = 0;
  in_ECX[0x698] = 1;
  *(undefined4 *)(in_ECX + 0x71a) = 0;
  memset(in_ECX + 0x69a,0,0x100);
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


/* FUN_00456f20 @ 00456f20  kind=gamemisc  attributed-by=none  size=72 */

void FUN_00456f20(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  if (param_1 != param_2) {
    puVar2 = param_1 + 2;
    do {
      if (param_3 != (undefined1 *)0x0) {
        *param_3 = puVar2[-2];
        param_3[1] = puVar2[-1];
        param_3[2] = *puVar2;
        param_3[3] = puVar2[1];
        *(undefined4 *)(param_3 + 4) = *(undefined4 *)(puVar2 + 2);
      }
      param_3 = param_3 + 8;
      puVar1 = puVar2 + 6;
      puVar2 = puVar2 + 8;
    } while (puVar1 != param_2);
  }
  return;
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


/* FUN_0046ebe0 @ 0046ebe0  kind=gamemisc  attributed-by=none  size=717 */

void FUN_0046ebe0(char *param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int *in_ECX;
  undefined4 extraout_EDX;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int local_244;
  int *local_240;
  int local_23c [71];
  char local_120;
  char local_11f;
  short local_110;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  pcVar6 = param_1;
  if (param_2 == -1) {
    param_2 = FUN_0047fa30(param_1);
  }
  if (*param_1 == '\0') goto LAB_0046ee9a;
  if ((in_ECX[1] - *in_ECX) / 0xc <= param_2) {
    FUN_00487380(param_2 + 1);
  }
  FUN_0040ee70(param_1);
  iVar4 = 1;
  if (((local_120 == '\f') || (local_120 == '\r')) || (local_120 == '\x15')) {
LAB_0046ec90:
    iVar4 = (int)local_110;
    local_110 = 1;
  }
  else if (local_120 == '\v') {
    if (local_11f != '\x0e') goto LAB_0046ec90;
  }
  else if (((local_120 == '\0') || (local_120 == '\x19')) ||
          ((local_120 == '\x14' || ((local_120 == '\x18' || (local_120 == '\x17'))))))
  goto LAB_0046ec90;
  if (*param_1 == '\f') {
    cVar2 = param_1[0xd];
    if (cVar2 == '\n') {
LAB_0046ecbc:
      in_ECX[0x4a] = in_ECX[0x4a] + iVar4;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX,pcVar6);
      return;
    }
    if (cVar2 == '\v') {
      in_ECX[0x4a] = in_ECX[0x4a] + iVar4 * 10000;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX,pcVar6);
      return;
    }
    if (cVar2 == '\f') {
      iVar4 = iVar4 * 100;
      goto LAB_0046ecbc;
    }
  }
  if (*param_1 == '\r') {
    in_ECX[0x4b] = in_ECX[0x4b] + iVar4;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX,pcVar6);
    return;
  }
  iVar5 = -1;
  piVar3 = (int *)(*in_ECX + param_2 * 0xc);
  local_244 = 0;
  if (0 < (piVar3[1] - *piVar3) / 0x11c) {
    piVar1 = (int *)*piVar3;
    local_240 = piVar1;
    do {
      if ((*local_240 == 0) && (iVar5 < 0)) {
        iVar5 = local_244;
      }
      cVar2 = FUN_0047f9f0();
      if ((cVar2 != '\0') && (cVar2 = FUN_0042f4a0(&local_120), cVar2 != '\0')) {
        piVar1 = piVar1 + local_244 * 0x47;
        *piVar1 = *piVar1 + iVar4;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      local_244 = local_244 + 1;
      local_240 = local_240 + 0x47;
    } while (local_244 < (piVar3[1] - *piVar3) / 0x11c);
    if (-1 < iVar5) {
      FUN_0042c5e0(&local_120);
      *(int *)(iVar5 * 0x11c + *(int *)(param_2 * 0xc + *in_ECX)) = iVar4;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  FUN_0043c0a0();
  FUN_0042c5e0(&local_120);
  local_23c[0] = iVar4;
  FUN_00486700(local_23c);
LAB_0046ee9a:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
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


/* FUN_004abf80 @ 004abf80  kind=gamemisc  attributed-by=none  size=159 */

void FUN_004abf80(uint param_1)

{
  uint uVar1;
  int *in_ECX;
  
  if (param_1 <= (uint)((in_ECX[2] - in_ECX[1]) / 0xc)) {
    return;
  }
  if (0x15555555U - (in_ECX[1] - *in_ECX) / 0xc < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar1 = (in_ECX[2] - *in_ECX) / 0xc;
  if (0x15555555 - (uVar1 >> 1) < uVar1) {
    FUN_004abcc0();
    return;
  }
  FUN_004abcc0();
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


/* FUN_004c7250 @ 004c7250  kind=gamemisc  attributed-by=none  size=858 */

float * FUN_004c7250(float *param_1,undefined4 param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  
  switch(param_2) {
  case 1:
    *param_1 = 0.7;
    param_1[1] = 0.7;
    param_1[2] = 0.7;
    param_1[3] = 1.0;
    *param_1 = *param_3 * 0.7;
    param_1[1] = param_3[1] * 0.7;
    param_1[2] = param_3[2] * 0.7;
    param_1[3] = param_3[3];
    return param_1;
  case 2:
    *param_1 = 0.4;
    param_1[1] = 0.3;
    param_1[2] = 0.2;
    param_1[3] = 1.0;
    *param_1 = *param_3 * 0.4;
    param_1[1] = param_3[1] * 0.3;
    param_1[2] = param_3[2] * 0.2;
    param_1[3] = param_3[3];
    return param_1;
  default:
    fVar2 = 0.5;
    *param_1 = 0.5;
    param_1[1] = 0.5;
    param_1[2] = 0.5;
    break;
  case 5:
    fVar2 = 0.1;
    *param_1 = 0.1;
    param_1[1] = 0.1;
    param_1[2] = 0.1;
    break;
  case 7:
    fVar2 = 0.9;
    *param_1 = 0.9;
    param_1[1] = 0.9;
    param_1[2] = 0.9;
    break;
  case 0xb:
    *param_1 = 1.0;
    param_1[1] = 0.7;
    param_1[2] = 0.2;
    param_1[3] = 1.0;
    *param_1 = *param_3;
    param_1[1] = param_3[1] * 0.7;
    param_1[2] = param_3[2] * 0.2;
    param_1[3] = param_3[3];
    return param_1;
  case 0xc:
    *param_1 = 0.8;
    param_1[1] = 0.8;
    param_1[2] = 0.85;
    param_1[3] = 1.0;
    *param_1 = *param_3 * 0.8;
    param_1[1] = param_3[1] * 0.8;
    param_1[2] = param_3[2] * 0.85;
    param_1[3] = param_3[3];
    return param_1;
  case 0x80:
    fVar2 = param_3[3];
    fVar1 = param_4 * 0.5 + 1.0;
    param_1[1] = fVar1 * 0.5;
    *param_1 = fVar1;
    param_1[3] = (fVar2 + param_4) * fVar1;
    param_1[2] = fVar1 * 0.1;
    return param_1;
  case 0x81:
    fVar2 = param_3[3];
    fVar1 = param_4 * 0.5 + 1.0;
    *param_1 = fVar1 * 0.3;
    param_1[1] = fVar1;
    param_1[3] = (fVar2 + param_4) * fVar1;
    param_1[2] = fVar1 * 0.5;
    return param_1;
  case 0x82:
    fVar2 = param_3[3];
    fVar1 = param_4 * 0.5 + 1.0;
    *param_1 = fVar1 * 0.3;
    param_1[2] = fVar1;
    param_1[3] = (fVar2 + param_4) * fVar1;
    param_1[1] = fVar1 * 0.5;
    return param_1;
  case 0x83:
    fVar2 = param_3[3];
    fVar1 = param_4 * 0.5 + 1.0;
    *param_1 = fVar1 * 0.8;
    param_1[1] = fVar1 * 0.8;
    param_1[2] = fVar1;
    param_1[3] = (fVar2 + param_4) * fVar1;
    return param_1;
  }
  param_1[3] = 1.0;
  *param_1 = *param_3 * fVar2;
  param_1[1] = param_3[1] * fVar2;
  param_1[2] = param_3[2] * fVar2;
  param_1[3] = param_3[3];
  return param_1;
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


