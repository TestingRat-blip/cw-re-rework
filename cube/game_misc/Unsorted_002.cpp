// Unsorted_002 (game_misc) -- cube. 150 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Unsorted_002.h"

/* FUN_004e37e0 @ 004e37e0  kind=gamemisc  attributed-by=none  size=84 */

void FUN_004e37e0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *in_ECX;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int *)(*piVar1 + 4) = param_1;
  }
  piVar1[1] = *(int *)(param_1 + 4);
  if (param_1 == *(int *)(*in_ECX + 4)) {
    *(int **)(*in_ECX + 4) = piVar1;
    *piVar1 = param_1;
    *(int **)(param_1 + 4) = piVar1;
    return;
  }
  piVar2 = *(int **)(param_1 + 4);
  if (param_1 == *piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = param_1;
    *(int **)(param_1 + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = param_1;
  *(int **)(param_1 + 4) = piVar1;
  return;
}


/* FUN_004e3bb0 @ 004e3bb0  kind=gamemisc  attributed-by=none  size=189 */

undefined4 * FUN_004e3bb0(undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_004e3630(piVar2[1]);
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
    FUN_004e3c70(local_8,piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return param_1;
}


/* FUN_004e3c70 @ 004e3c70  kind=gamemisc  attributed-by=none  size=599 */

/* WARNING: Removing unreachable block (ram,0x004e3d3d) */
/* WARNING: Removing unreachable block (ram,0x004e3d4d) */
/* WARNING: Removing unreachable block (ram,0x004e3d56) */
/* WARNING: Removing unreachable block (ram,0x004e3d59) */
/* WARNING: Removing unreachable block (ram,0x004e3d49) */
/* WARNING: Removing unreachable block (ram,0x004e3d67) */
/* WARNING: Removing unreachable block (ram,0x004e3d76) */
/* WARNING: Removing unreachable block (ram,0x004e3d81) */
/* WARNING: Removing unreachable block (ram,0x004e3d7d) */
/* WARNING: Removing unreachable block (ram,0x004e3d71) */
/* WARNING: Removing unreachable block (ram,0x004e3d84) */

void FUN_004e3c70(undefined4 param_1,int *param_2)

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
              break;
            }
LAB_004e3e67:
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
            goto LAB_004e3e67;
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
            break;
          }
        }
        piVar5 = (int *)piVar3[1];
        piVar6 = piVar3;
      } while (piVar3 != *(int **)(*in_ECX + 4));
    }
    *(undefined1 *)(piVar6 + 3) = 1;
  }
  FUN_0046f990();
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)param_2[0xc]);
}


/* FUN_004e5590 @ 004e5590  kind=gamemisc  attributed-by=none  size=409 */

void FUN_004e5590(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  void **ppvVar3;
  undefined4 local_7c;
  undefined4 local_78;
  void *local_74 [5];
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e9ce0;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_78 = param_2;
  local_30 = 7;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
  FUN_0040f7a0(L"singular",8);
  local_8 = 0;
  uVar1 = FUN_005a5240(local_5c,*(undefined4 *)(param_3 + 0x18),*(undefined4 *)(param_3 + 0x1c));
  ppvVar3 = local_44;
  local_8._0_1_ = 1;
  FUN_004e2f00(uVar1);
  uVar1 = FUN_004689a0(ppvVar3);
  local_2c = (void *)((uint)local_2c._2_2_ << 0x10);
  local_18 = 7;
  local_1c = 0;
  FUN_0040f680(uVar1,0,0xffffffff);
  if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_5c[0]);
  }
  local_48 = 7;
  local_4c = 0;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
  local_8._0_1_ = 4;
  if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  local_30 = 7;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
  if (local_1c == 0) {
    FUN_0040eb60(&PTR_006fccac);
  }
  else {
    local_7c = 0x40;
    iVar2 = FUN_004d9950(&local_7c,0,1);
    if (iVar2 != -1) {
      uVar1 = FUN_005a0ed0(local_74,*(undefined4 *)(param_3 + 0x20),0xffffffff);
      local_8._0_1_ = 5;
      FUN_00486d00(iVar2,1,uVar1,0,0xffffffff);
      if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_74[0]);
      }
    }
    FUN_0040eaf0(&local_2c);
  }
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004e6bd0 @ 004e6bd0  kind=gamemisc  attributed-by=none  size=41 */

undefined1 FUN_004e6bd0(int param_1)

{
  char *in_ECX;
  int iVar1;
  
  iVar1 = 0;
  param_1 = param_1 - (int)in_ECX;
  do {
    if (*in_ECX != in_ECX[param_1]) {
      return 0;
    }
    iVar1 = iVar1 + 1;
    in_ECX = in_ECX + 1;
  } while (iVar1 < 3);
  return 1;
}


/* FUN_004e6ce0 @ 004e6ce0  kind=gamemisc  attributed-by=none  size=30 */

int * FUN_004e6ce0(int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  
  cVar1 = *(char *)(*param_1 + 0xd);
  piVar2 = (int *)*param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0xd);
    param_1 = piVar3;
  }
  return param_1;
}


/* FUN_004e6df0 @ 004e6df0  kind=gamemisc  attributed-by=none  size=97 */

void FUN_004e6df0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x34) == 0) {
    if (*(char *)(in_ECX + 0x56) != '\0') {
      *(undefined1 *)(in_ECX + 0x54) = 1;
      return;
    }
  }
  else if (*(int *)(in_ECX + 0x38) != 0) {
    *(undefined4 *)(in_ECX + 0x50) = DAT_0076b338;
    (**(code **)(**(int **)(in_ECX + 0x58) + 400))
              (*(int **)(in_ECX + 0x58),0,*(int *)(in_ECX + 0x34),0,8);
    (**(code **)(**(int **)(in_ECX + 0x58) + 0x1a0))
              (*(int **)(in_ECX + 0x58),*(undefined4 *)(in_ECX + 0x38));
    (**(code **)(**(int **)(in_ECX + 0x58) + 0x148))
              (*(int **)(in_ECX + 0x58),4,0,0,*(undefined4 *)(in_ECX + 0x3c),0,
               *(undefined4 *)(in_ECX + 0x40));
  }
  return;
}


/* FUN_004e71d0 @ 004e71d0  kind=gamemisc  attributed-by=none  size=166 */

undefined4 FUN_004e71d0(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined1 uStack0000000a;
  
  iVar2 = 0;
  do {
    if (*(char *)(param_1 + iVar2) != (&DAT_0076b340)[iVar2]) {
      if (param_2 != '\0') {
        return 0;
      }
      iVar2 = 0;
      _param_2 = 0xff;
      uStack0000000a = 0;
      do {
        if ((&param_2 + iVar2)[param_1 - (int)&param_2] != (&param_2)[iVar2]) {
          _param_2 = 0xff00;
          uStack0000000a = 0;
          cVar1 = FUN_004e6bd0(&param_2);
          if (cVar1 == '\0') {
            _param_2 = 0;
            uStack0000000a = 0xff;
            cVar1 = FUN_004e6bd0(&param_2);
            if (cVar1 == '\0') {
              return 0;
            }
          }
          return 1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 3);
      return 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  return 1;
}


/* FUN_0051c7a0 @ 0051c7a0  kind=gamemisc  attributed-by=none  size=97 */

float10 FUN_0051c7a0(int param_1)

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
  local_c = 0.0;
  if ((uVar1 & 0x12) != 0) {
    local_c = 0.0;
    FUN_0054a330(*(undefined4 *)(param_1 + 4),&local_c,*(undefined4 *)(param_1 + 0x18),
                 *(undefined1 *)(param_1 + 0x1f));
  }
  return (float10)local_c;
}


/* FUN_0051c810 @ 0051c810  kind=gamemisc  attributed-by=none  size=122 */

undefined4 FUN_0051c810(int param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined8 local_14 [2];
  
  uVar1 = *(ushort *)(param_1 + 0x1c);
  if ((uVar1 & 4) != 0) {
    return *(undefined4 *)(param_1 + 0x10);
  }
  if ((uVar1 & 8) != 0) {
    uVar2 = FUN_00534710(*(undefined8 *)(param_1 + 8));
    return uVar2;
  }
  if ((uVar1 & 0x12) != 0) {
    local_14[0] = 0;
    FUN_0054a9a0(*(undefined4 *)(param_1 + 4),local_14,*(undefined4 *)(param_1 + 0x18),
                 *(undefined1 *)(param_1 + 0x1f));
    return (undefined4)local_14[0];
  }
  return 0;
}


/* FUN_0051d110 @ 0051d110  kind=gamemisc  attributed-by=none  size=91 */

void FUN_0051d110(int param_1)

{
  int *piVar1;
  
  if ((*(byte *)(param_1 + 0x24) & 0x40) != 0) {
    piVar1 = *(int **)(param_1 + 0x18);
    piVar1[1] = *(int *)(*piVar1 + 0xa4);
    *(int **)(*piVar1 + 0xa4) = piVar1;
  }
  if ((*(byte *)(param_1 + 0x24) & 0x20) != 0) {
    FUN_005644e0(*(undefined4 *)(param_1 + 0x18));
  }
  *(ushort *)(param_1 + 0x24) = *(ushort *)(param_1 + 0x24) & 0xbe01 | 1;
  *(undefined1 *)(param_1 + 0x26) = 5;
  *(undefined4 *)(param_1 + 0x38) = 7;
  *(undefined1 *)(*(int *)(param_1 + 8) + 0x38) = 1;
  return;
}


/* FUN_0051d580 @ 0051d580  kind=gamemisc  attributed-by=none  size=96 */

void FUN_0051d580(int param_1,int param_2)

{
  if ((*(ushort *)(param_1 + 0x24) & 0x2460) != 0) {
    FUN_00574d80((undefined4 *)(param_1 + 8));
  }
  FUN_005521a0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x2c));
  if (param_2 < 0) {
    param_2 = 0;
  }
  *(int *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x1044010;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}


/* FUN_0051e960 @ 0051e960  kind=gamemisc  attributed-by=none  size=212 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0051e960(int param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = FUN_00579f80();
  if (iVar2 != 0) {
    return 0xffffffffffffffff;
  }
  if (DAT_0076b488 != 0) {
    (*DAT_00766630)(DAT_0076b488);
  }
  uVar1 = _DAT_0076b490;
  if (DAT_0076b488 != 0) {
    (*DAT_00766638)(DAT_0076b488);
  }
  if (0 < param_2) {
LAB_0051e9c7:
    FUN_0055e040(cube::Controller::vfunction12,0,param_1,param_2);
    return uVar1;
  }
  if (-1 < param_2) {
    if ((-1 < param_2) && ((0 < param_2 || (param_1 != 0)))) goto LAB_0051e9c7;
    if (DAT_0076b488 != 0) {
      (*DAT_00766630)(DAT_0076b488);
    }
    DAT_0076b498 = 0;
    DAT_0076b49c = 0;
    _DAT_0076b490 = 0;
    DAT_0076b4ac = 0;
    if (DAT_0076b488 != 0) {
      (*DAT_00766638)(DAT_0076b488);
    }
  }
  return uVar1;
}


/* FUN_0051f1f0 @ 0051f1f0  kind=gamemisc  attributed-by=none  size=283 */

void FUN_0051f1f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 local_9c [8];
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  double local_7c;
  char local_6c [100];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_0053c140(param_1,param_2,param_3,local_9c);
  if (iVar1 == 0) {
    FUN_00532d10(local_9c);
    FUN_00532980(local_9c);
    FUN_005240c0(100,local_6c,"%04d-%02d-%02d %02d:%02d:%02d",local_94,local_90,local_8c,local_88,
                 local_84,(int)local_7c);
    if (*(int *)(param_1 + 8) == 0) {
      iVar1 = 1000000000;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x50);
    }
    iVar2 = 0;
    if (-1 < iVar1) {
      do {
        if (local_6c[iVar2] == '\0') break;
        iVar2 = iVar2 + 1;
      } while (iVar2 <= iVar1);
    }
    if (iVar1 < iVar2) {
      *(undefined4 *)(param_1 + 0x38) = 0x12;
      FUN_00575040(param_1 + 8,"string or blob too big",0xffffffff,1,0);
    }
    else {
      iVar1 = FUN_005748c0(param_1 + 8,iVar2 + 1);
      if (iVar1 == 0) {
        memcpy(*(void **)(param_1 + 0xc),local_6c,iVar2 + 1);
        *(int *)(param_1 + 0x20) = iVar2;
        *(undefined4 *)(param_1 + 0x24) = 0x1030202;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0051f3c0 @ 0051f3c0  kind=gamemisc  attributed-by=none  size=251 */

void FUN_0051f3c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 local_9c [20];
  undefined4 local_88;
  undefined4 local_84;
  double local_7c;
  char local_6c [100];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_0053c140(param_1,param_2,param_3,local_9c);
  if (iVar1 == 0) {
    FUN_00532980(local_9c);
    FUN_005240c0(100,local_6c,"%02d:%02d:%02d",local_88,local_84,(int)local_7c);
    if (*(int *)(param_1 + 8) == 0) {
      iVar1 = 1000000000;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x50);
    }
    iVar2 = 0;
    if (-1 < iVar1) {
      do {
        if (local_6c[iVar2] == '\0') break;
        iVar2 = iVar2 + 1;
      } while (iVar2 <= iVar1);
    }
    if (iVar1 < iVar2) {
      *(undefined4 *)(param_1 + 0x38) = 0x12;
      FUN_00575040(param_1 + 8,"string or blob too big",0xffffffff,1,0);
    }
    else {
      iVar1 = FUN_005748c0(param_1 + 8,iVar2 + 1);
      if (iVar1 == 0) {
        memcpy(*(void **)(param_1 + 0xc),local_6c,iVar2 + 1);
        *(int *)(param_1 + 0x20) = iVar2;
        *(undefined4 *)(param_1 + 0x24) = 0x1030202;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0051f6b0 @ 0051f6b0  kind=gamemisc  attributed-by=none  size=216 */

undefined4 FUN_0051f6b0(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = *(undefined4 **)((int)param_1 + 4);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    if (DAT_007665e0 == 0) {
      (*DAT_00766604)(puVar2);
      puVar2 = puVar1;
    }
    else {
      if (DAT_0076b488 != 0) {
        (*DAT_00766630)(DAT_0076b488);
      }
      iVar3 = (*DAT_00766608._4_4_)(puVar2);
      DAT_0076b360 = DAT_0076b360 - iVar3;
      if (DAT_0076b388 < DAT_0076b360) {
        DAT_0076b388 = DAT_0076b360;
      }
      DAT_0076b384 = DAT_0076b384 + -1;
      if (DAT_0076b3ac < DAT_0076b384) {
        DAT_0076b3ac = DAT_0076b384;
      }
      (*DAT_00766604)(puVar2);
      puVar2 = puVar1;
      if (DAT_0076b488 != 0) {
        (*DAT_00766638)(DAT_0076b488);
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined **)param_1 = &DAT_00712500;
  return 0;
}


/* FUN_0051f790 @ 0051f790  kind=gamemisc  attributed-by=none  size=254 */

void FUN_0051f790(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 local_9c [8];
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  char local_6c [100];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_0053c140(param_1,param_2,param_3,local_9c);
  if (iVar1 == 0) {
    FUN_00532d10(local_9c);
    FUN_005240c0(100,local_6c,"%04d-%02d-%02d",local_94,local_90,local_8c);
    if (*(int *)(param_1 + 8) == 0) {
      iVar1 = 1000000000;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x50);
    }
    iVar2 = 0;
    if (-1 < iVar1) {
      do {
        if (local_6c[iVar2] == '\0') break;
        iVar2 = iVar2 + 1;
      } while (iVar2 <= iVar1);
    }
    if (iVar1 < iVar2) {
      *(undefined4 *)(param_1 + 0x38) = 0x12;
      FUN_00575040(param_1 + 8,"string or blob too big",0xffffffff,1,0);
    }
    else {
      iVar1 = FUN_005748c0(param_1 + 8,iVar2 + 1);
      if (iVar1 == 0) {
        memcpy(*(void **)(param_1 + 0xc),local_6c,iVar2 + 1);
        *(int *)(param_1 + 0x20) = iVar2;
        *(undefined4 *)(param_1 + 0x24) = 0x1030202;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00520620 @ 00520620  kind=gamemisc  attributed-by=none  size=18 */

void FUN_00520620(undefined4 param_1)

{
  FUN_0054fc20(param_1,0);
  return;
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


/* FUN_00526480 @ 00526480  kind=gamemisc  attributed-by=none  size=32 */

void FUN_00526480(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_0055d830(param_1,param_2,param_3,0,0,param_4,param_5);
  return;
}


/* FUN_00526b60 @ 00526b60  kind=gamemisc  attributed-by=none  size=30 */

void FUN_00526b60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_0052e070(param_1,param_2,param_3,param_4,param_5,1);
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


/* FUN_0052e070 @ 0052e070  kind=gamemisc  attributed-by=none  size=182 */

int FUN_0052e070(int *param_1,int param_2,int param_3,undefined4 param_4,code *param_5,
                undefined4 param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0057d290(param_1,param_2);
  if (iVar1 == 0) {
    if (param_3 != 0) {
      iVar1 = param_1[0x11] + param_2 * 0x28 + -0x28;
      iVar2 = FUN_00575040(iVar1,param_3,param_4,param_6,param_5);
      if ((iVar2 == 0) && ((char)param_6 != '\0')) {
        iVar2 = FUN_0056c290(iVar1,*(undefined1 *)(*(int *)(*(int *)(*param_1 + 0x10) + 0xc) + 0x4d)
                            );
      }
      FUN_00553890(*param_1,iVar2,0);
      iVar1 = FUN_0054a110(*param_1,iVar2);
    }
    if (*(int *)(*param_1 + 0xc) != 0) {
      (*DAT_00766638)(*(int *)(*param_1 + 0xc));
      return iVar1;
    }
  }
  else if ((param_5 != (code *)0x0) && (param_5 != (code *)0xffffffff)) {
    (*param_5)(param_3);
  }
  return iVar1;
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


/* FUN_0056a810 @ 0056a810  kind=gamemisc  attributed-by=none  size=57 */

int FUN_0056a810(byte *param_1,int param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar2 = param_1;
  pbVar1 = param_1;
  if (0 < param_2) {
    do {
      pbVar2 = pbVar1 + 2;
      if ((uint)pbVar1[1] * 0x100 + -0xd800 + (uint)*pbVar1 < 0x800) {
        pbVar2 = pbVar1 + 4;
      }
      param_2 = param_2 + -1;
      pbVar1 = pbVar2;
    } while (param_2 != 0);
  }
  return (int)pbVar2 - (int)param_1;
}


/* FUN_0056a850 @ 0056a850  kind=gamemisc  attributed-by=none  size=145 */

undefined4 FUN_0056a850(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  undefined8 local_14;
  undefined8 local_c;
  
  local_24 = 0;
  local_1c = 0;
  local_14 = 0;
  local_c = 0;
  local_2c = (ulonglong)param_1;
  FUN_00575040(&local_2c,param_2,param_3,param_4,0);
  if (((local_14 & 0x200000000) != 0) && (local_14._7_1_ != '\x01')) {
    FUN_00575420(&local_2c,1);
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    if ((local_14 & 0x246000000000) != 0) {
      FUN_00574d80(&local_2c);
    }
    FUN_005521a0((undefined4)local_2c,local_c._4_4_);
    return 0;
  }
  return local_2c._4_4_;
}


/* FUN_0056a940 @ 0056a940  kind=gamemisc  attributed-by=none  size=109 */

uint FUN_0056a940(int *param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  
  uVar2 = (uint)*(byte *)*param_1;
  pbVar3 = (byte *)*param_1 + 1;
  *param_1 = (int)pbVar3;
  if (0xbf < uVar2) {
    uVar2 = (uint)(byte)(&DAT_007151b0)[uVar2];
    bVar1 = *pbVar3;
    while ((bVar1 & 0xc0) == 0x80) {
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      uVar2 = uVar2 * 0x40 + (bVar1 & 0x3f);
      *param_1 = (int)pbVar3;
      bVar1 = *pbVar3;
    }
    if (((uVar2 < 0x80) || ((uVar2 & 0xfffff800) == 0xd800)) || ((uVar2 & 0xfffffffe) == 0xfffe)) {
      return 0xfffd;
    }
  }
  return uVar2;
}


/* FUN_00575240 @ 00575240  kind=gamemisc  attributed-by=none  size=91 */

void FUN_00575240(undefined4 *param_1,int param_2)

{
  if ((*(ushort *)(param_1 + 7) & 0x2460) != 0) {
    FUN_00574d80(param_1);
  }
  FUN_005521a0(*param_1,param_1[9]);
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


/* FUN_0057a1b0 @ 0057a1b0  kind=gamemisc  attributed-by=none  size=106 */

uint FUN_0057a1b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  uVar2 = FUN_0055d490(param_1,param_2,param_3,param_4);
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


/* FUN_0057a310 @ 0057a310  kind=gamemisc  attributed-by=none  size=162 */

byte * FUN_0057a310(char *param_1,byte *param_2)

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
LAB_0057a367:
        uVar8 = -(uint)bVar10 | 1;
        goto joined_r0x0057a370;
      }
      if (bVar3 == 0) break;
      bVar3 = pbVar6[1];
      bVar10 = bVar3 < pbVar7[1];
      if (bVar3 != pbVar7[1]) goto LAB_0057a367;
      pbVar6 = pbVar6 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar3 != 0);
    uVar8 = 0;
joined_r0x0057a370:
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


/* FUN_0057a3c0 @ 0057a3c0  kind=gamemisc  attributed-by=none  size=48 */

undefined4 FUN_0057a3c0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0053dde0(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_0057b270(iVar1);
  FUN_00524410(iVar1);
  return uVar2;
}


/* FUN_0057b1e0 @ 0057b1e0  kind=gamemisc  attributed-by=none  size=129 */

void * FUN_0057b1e0(undefined4 param_1)

{
  int iVar1;
  size_t _Size;
  void *_Dst;
  
  iVar1 = (*(code *)PTR_AreFileApisANSI_00767084)();
  _Size = (*(code *)PTR_WideCharToMultiByte_0076733c)(iVar1 == 0,0,param_1,0xffffffff,0,0,0,0);
  if (_Size == 0) {
    return (void *)0x0;
  }
  _Dst = (void *)FUN_0055da00(_Size);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,_Size);
    if (_Dst != (void *)0x0) {
      iVar1 = (*(code *)PTR_WideCharToMultiByte_0076733c)
                        (iVar1 == 0,0,param_1,0xffffffff,_Dst,_Size,0,0);
      if (iVar1 == 0) {
        FUN_00524410(_Dst);
        _Dst = (void *)0x0;
      }
      return _Dst;
    }
  }
  return (void *)0x0;
}


/* FUN_0057b270 @ 0057b270  kind=gamemisc  attributed-by=none  size=122 */

void * FUN_0057b270(undefined4 param_1)

{
  size_t _Size;
  void *_Dst;
  int iVar1;
  
  _Size = (*(code *)PTR_WideCharToMultiByte_0076733c)(0xfde9,0,param_1,0xffffffff,0,0,0,0);
  if (_Size == 0) {
    return (void *)0x0;
  }
  _Dst = (void *)FUN_0055da00(_Size);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,_Size);
    if (_Dst != (void *)0x0) {
      iVar1 = (*(code *)PTR_WideCharToMultiByte_0076733c)
                        (0xfde9,0,param_1,0xffffffff,_Dst,_Size,0,0);
      if (iVar1 == 0) {
        FUN_00524410(_Dst);
        _Dst = (void *)0x0;
      }
      return _Dst;
    }
  }
  return (void *)0x0;
}


/* FUN_0057b2f0 @ 0057b2f0  kind=gamemisc  attributed-by=none  size=189 */

void FUN_0057b2f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
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
    uVar2 = 0x1fe;
    iVar1 = DAT_007666d0 + 2;
  }
  else {
    uVar2 = 1;
    iVar1 = DAT_007666d0 + 2 + (int)*(short *)(param_1 + 0xe);
  }
  iVar1 = FUN_0057ff40(param_1 + 8,iVar1,0,uVar2,0);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_GetLastError_007671bc)();
    if (iVar1 != 0x9e) {
      *(int *)(param_1 + 0x14) = iVar1;
      FUN_0057fa50(0x80a,iVar1,"unlockReadLock",*(undefined4 *)(param_1 + 0x1c),0x7f2e);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0057c220 @ 0057c220  kind=gamemisc  attributed-by=none  size=120 */

void * FUN_0057c220(undefined4 param_1)

{
  int iVar1;
  void *_Dst;
  
  iVar1 = (*(code *)PTR_MultiByteToWideChar_007672c4)(0xfde9,0,param_1,0xffffffff,0,0);
  if (iVar1 == 0) {
    return (void *)0x0;
  }
  _Dst = (void *)FUN_0055da00(iVar1 * 2);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,iVar1 * 2);
    if (_Dst != (void *)0x0) {
      iVar1 = (*(code *)PTR_MultiByteToWideChar_007672c4)(0xfde9,0,param_1,0xffffffff,_Dst,iVar1);
      if (iVar1 == 0) {
        FUN_00524410(_Dst);
        _Dst = (void *)0x0;
      }
      return _Dst;
    }
  }
  return (void *)0x0;
}


/* FUN_0057f890 @ 0057f890  kind=gamemisc  attributed-by=none  size=234 */

void FUN_0057f890(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_c0 [4];
  int local_b0;
  undefined8 local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  undefined8 local_14;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if (DAT_0076b480 == 0) {
    local_c0[0] = 0x94;
    (*(code *)PTR_GetVersionExA_0076721c)(local_c0);
    DAT_0076b480 = (local_b0 == 2) + 1;
  }
  if (DAT_0076b480 == 2) {
    iVar3 = 0;
    local_2c = 0;
    local_24 = 0;
    local_1c = 0;
    local_14 = 0;
    local_c = 0;
    while( true ) {
      iVar1 = (*(code *)PTR_GetFileAttributesExW_0076718c)(param_1,0,&local_2c);
      if (iVar1 != 0) break;
      iVar1 = (*(code *)PTR_GetLastError_007671bc)();
      if ((DAT_007666d4 <= iVar3) || (((iVar1 != 5 && (iVar1 != 0x21)) && (iVar1 != 0x20))))
      goto LAB_0057f96b;
      iVar3 = iVar3 + 1;
      (*(code *)PTR_Sleep_00767300)(iVar3 * DAT_007666d8);
    }
    uVar2 = (uint)local_2c;
  }
  else {
    uVar2 = (*(code *)PTR_GetFileAttributesA_00767174)(param_1);
  }
  if ((uVar2 != 0xffffffff) && ((uVar2 & 0x10) != 0)) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
LAB_0057f96b:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0057f980 @ 0057f980  kind=gamemisc  attributed-by=none  size=201 */

void FUN_0057f980(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
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
    _local_a8 = CONCAT44(param_4,param_3);
    local_b0 = 0;
    local_a0 = 0;
    (*(code *)PTR_LockFileEx_007672ac)(*param_1,param_2,0,param_5,param_6,&local_b0);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  (*(code *)PTR_LockFile_007672a0)(*param_1,param_3,param_4,param_5,param_6);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0057fa50 @ 0057fa50  kind=gamemisc  attributed-by=none  size=179 */

void FUN_0057fa50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4,
                 undefined4 param_5)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  char local_1fc [500];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_1fc[0] = '\0';
  FUN_0053a8f0(param_2,500,local_1fc);
  puVar5 = &DAT_006fc918;
  if (param_4 != (undefined1 *)0x0) {
    puVar5 = param_4;
  }
  uVar3 = 0;
  uVar4 = uVar3;
  if (local_1fc[0] != '\0') {
    do {
      uVar4 = uVar3;
      if ((local_1fc[uVar3] == '\r') || (local_1fc[uVar3] == '\n')) break;
      uVar4 = uVar3 + 1;
      iVar2 = uVar3 + 1;
      uVar3 = uVar4;
    } while (local_1fc[iVar2] != '\0');
    if (499 < uVar4) {
      ___report_rangecheckfailure();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_1fc[uVar4] = '\0';
  FUN_00525a30(param_1,"os_win.c:%d: (%d) %s(%s) - %s",param_5,param_2,param_3,puVar5,local_1fc);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0057fb50 @ 0057fb50  kind=gamemisc  attributed-by=none  size=796 */

int FUN_0057fb50(int param_1)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  char *pcVar4;
  undefined8 *puVar5;
  int *_Dst;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  byte *pbVar9;
  char *pcVar10;
  uint uVar11;
  byte *pbVar12;
  int *piVar13;
  
  puVar5 = (undefined8 *)FUN_0055da00(0x10);
  if (puVar5 == (undefined8 *)0x0) {
    return 0xc0a;
  }
  *puVar5 = 0;
  puVar5[1] = 0;
  pcVar4 = *(char **)(param_1 + 0x1c);
  uVar11 = 0;
  if (pcVar4 != (char *)0x0) {
    cVar2 = *pcVar4;
    pcVar10 = pcVar4;
    while (cVar2 != '\0') {
      pcVar10 = pcVar10 + 1;
      cVar2 = *pcVar10;
    }
    uVar11 = (int)pcVar10 - (int)pcVar4 & 0x3fffffff;
  }
  _Dst = (int *)FUN_0055da00(uVar11 + 0x59);
  if (_Dst == (int *)0x0) {
    FUN_00524410(puVar5);
    return 0xc0a;
  }
  memset(_Dst,0,uVar11 + 0x59);
  _Dst[1] = (int)(_Dst + 0x12);
  FUN_005240c0(uVar11 + 0xf,_Dst + 0x12,"%s-shm",*(undefined4 *)(param_1 + 0x1c));
  piVar13 = DAT_0076b3cc;
  if ((DAT_007665e4 != 0) && (iVar6 = (*DAT_00766628)(2), piVar13 = DAT_0076b3cc, iVar6 != 0)) {
    (*DAT_00766630)(iVar6);
    piVar13 = DAT_0076b3cc;
  }
  for (; piVar13 != (int *)0x0; piVar13 = (int *)piVar13[0x11]) {
    pbVar9 = (byte *)piVar13[1];
    pbVar12 = (byte *)_Dst[1];
    bVar3 = *pbVar9;
    while ((bVar3 != 0 && ((&DAT_007120d8)[bVar3] == (&DAT_007120d8)[*pbVar12]))) {
      pbVar1 = pbVar9 + 1;
      pbVar9 = pbVar9 + 1;
      pbVar12 = pbVar12 + 1;
      bVar3 = *pbVar1;
    }
    if ((&DAT_007120d8)[*pbVar9] == (&DAT_007120d8)[*pbVar12]) {
      FUN_00524410(_Dst);
      goto LAB_0057fde9;
    }
  }
  _Dst[4] = -1;
  _Dst[0x11] = (int)DAT_0076b3cc;
  DAT_0076b3cc = _Dst;
  iVar6 = FUN_00579f80();
  if (iVar6 == 0) {
    iVar6 = (*DAT_00766628)(0);
  }
  else {
    iVar6 = 0;
  }
  *_Dst = iVar6;
  if (iVar6 == 0) {
    iVar6 = 0xc0a;
  }
  else {
    iVar6 = FUN_00527740(*(undefined4 *)(param_1 + 4),_Dst[1],_Dst + 2,0x80006,0);
    if (iVar6 == 0) {
      iVar6 = FUN_0057f980(_Dst + 4,3,0x80,0,1,0);
      if (iVar6 == 0) {
        iVar6 = (*(code *)PTR_GetLastError_007671bc)();
        _Dst[0xe] = iVar6;
      }
      else {
        iVar6 = FUN_005239d0(_Dst + 2,0,0);
        if (iVar6 != 0) {
          uVar8 = (*(code *)PTR_GetLastError_007671bc)
                            ("winOpenShm",*(undefined4 *)(param_1 + 0x1c),0x819a);
          iVar6 = FUN_0057fa50(0x120a,uVar8);
          if (iVar6 != 0) goto LAB_0057fc94;
        }
      }
      iVar6 = FUN_0057ff40(_Dst + 4,0x80,0,1,0);
      if (iVar6 == 0) {
        iVar6 = (*(code *)PTR_GetLastError_007671bc)();
        _Dst[0xe] = iVar6;
      }
      iVar6 = FUN_0057f980(_Dst + 4,1,0x80,0,1,0);
      if (iVar6 == 0) {
        iVar6 = (*(code *)PTR_GetLastError_007671bc)();
        _Dst[0xe] = iVar6;
        iVar6 = 5;
      }
      else {
        iVar6 = 0;
      }
      piVar13 = _Dst;
      if (iVar6 == 0) {
LAB_0057fde9:
        *(int **)puVar5 = piVar13;
        piVar13[0xf] = piVar13[0xf] + 1;
        *(undefined8 **)(param_1 + 0x18) = puVar5;
        if ((DAT_007665e4 != 0) && (iVar6 = (*DAT_00766628)(2), iVar6 != 0)) {
          (*DAT_00766638)(iVar6);
        }
        if (*piVar13 != 0) {
          (*DAT_00766630)(*piVar13);
        }
        *(int *)((int)puVar5 + 4) = piVar13[0x10];
        piVar13[0x10] = (int)puVar5;
        if (*piVar13 != 0) {
          (*DAT_00766638)(*piVar13);
        }
        return 0;
      }
    }
  }
LAB_0057fc94:
  iVar7 = FUN_0057ff40(_Dst + 4,0x80,0,1,0);
  if (iVar7 == 0) {
    iVar7 = (*(code *)PTR_GetLastError_007671bc)();
    _Dst[0xe] = iVar7;
  }
  FUN_0057fe70(*(undefined4 *)(param_1 + 4),0);
  FUN_00524410(puVar5);
  FUN_00524410(0);
  if ((DAT_007665e4 != 0) && (iVar7 = (*DAT_00766628)(2), iVar7 != 0)) {
    (*DAT_00766638)(iVar7);
  }
  return iVar6;
}


/* FUN_0057fe70 @ 0057fe70  kind=gamemisc  attributed-by=none  size=200 */

void FUN_0057fe70(undefined4 param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)&DAT_0076b3cc;
  piVar1 = DAT_0076b3cc;
  while (piVar1 != (int *)0x0) {
    if (piVar1[0xf] == 0) {
      if (*piVar1 != 0) {
        (*DAT_0076662c)(*piVar1);
      }
      iVar3 = 0;
      if (0 < piVar1[0xc]) {
        do {
          (*(code *)PTR_UnmapViewOfFile_00767330)(*(undefined4 *)(piVar1[0xd] + 4 + iVar3 * 8));
          (*(code *)PTR_CloseHandle_007670a8)(*(undefined4 *)(piVar1[0xd] + iVar3 * 8));
          iVar3 = iVar3 + 1;
        } while (iVar3 < piVar1[0xc]);
      }
      if (piVar1[4] != -1) {
        FUN_00522690(piVar1 + 2);
      }
      if (param_2 != 0) {
        if (DAT_0076b3bc != (code *)0x0) {
          (*DAT_0076b3bc)();
        }
        FUN_00527b60(param_1,piVar1[1],0);
        if (DAT_0076b3c0 != (code *)0x0) {
          (*DAT_0076b3c0)();
        }
      }
      *piVar2 = piVar1[0x11];
      FUN_00524410(piVar1[0xd]);
      FUN_00524410(piVar1);
    }
    else {
      piVar2 = piVar1 + 0x11;
    }
    piVar1 = (int *)*piVar2;
  }
  return;
}


/* FUN_0057ff40 @ 0057ff40  kind=gamemisc  attributed-by=none  size=198 */

void FUN_0057ff40(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
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
    _local_a8 = CONCAT44(param_3,param_2);
    local_b0 = 0;
    local_a0 = 0;
    (*(code *)PTR_UnlockFileEx_00767324)(*param_1,0,param_4,param_5,&local_b0);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  (*(code *)PTR_UnlockFile_00767318)(*param_1,param_2,param_3,param_4,param_5);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005857d0 @ 005857d0  kind=gamemisc  attributed-by=none  size=107 */

void FUN_005857d0(uint param_1)

{
  int *in_ECX;
  uint uVar1;
  
  if (param_1 <= (uint)(in_ECX[2] - in_ECX[1])) {
    return;
  }
  if ((*in_ECX - in_ECX[1]) - 1U < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar1 = in_ECX[2] - *in_ECX;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    FUN_00585760();
    return;
  }
  FUN_00585760();
  return;
}


/* FUN_00587070 @ 00587070  kind=gamemisc  attributed-by=none  size=58 */

void FUN_00587070(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  
  piVar1 = *(int **)*in_ECX;
  while( true ) {
    if (piVar1 == (int *)*in_ECX) {
      return;
    }
    if (piVar1[2] == *param_1) break;
    piVar1 = (int *)*piVar1;
  }
  piVar2 = (int *)piVar1[1];
  iVar3 = *piVar1;
  *piVar2 = iVar3;
  *(int **)(iVar3 + 4) = piVar2;
                    /* WARNING: Subroutine does not return */
  operator_delete(piVar1);
}


/* FUN_005870c0 @ 005870c0  kind=gamemisc  attributed-by=none  size=120 */

void FUN_005870c0(uint param_1)

{
  void *_Src;
  void *pvVar1;
  int *in_ECX;
  void *_Dst;
  
  _Src = (void *)in_ECX[1];
  pvVar1 = (void *)*in_ECX;
  if (param_1 < (uint)((int)_Src - (int)pvVar1)) {
    _Dst = (void *)(param_1 + (int)pvVar1);
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
  else if ((uint)((int)_Src - (int)pvVar1) < param_1) {
    FUN_005857d0((int)pvVar1 + (param_1 - (int)_Src));
    memset((void *)in_ECX[1],0,(*in_ECX - in_ECX[1]) + param_1);
    in_ECX[1] = *in_ECX + param_1;
  }
  return;
}


/* FUN_0058c440 @ 0058c440  kind=gamemisc  attributed-by=none  size=2525 */

void FUN_0058c440(void)

{
  float *pfVar1;
  float *in_ECX;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_88 [32];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_88[1] = in_ECX[4];
  local_88[2] = in_ECX[8];
  local_88[3] = in_ECX[0xc];
  local_88[9] = in_ECX[5];
  local_88[10] = in_ECX[9];
  local_88[0xb] = in_ECX[0xd];
  local_88[0x11] = in_ECX[6];
  local_88[0x12] = in_ECX[10];
  local_88[0x13] = in_ECX[0xe];
  local_88[0x19] = in_ECX[7];
  local_88[0x1a] = in_ECX[0xb];
  local_88[0x1b] = in_ECX[0xf];
  local_88[0x18] = in_ECX[3];
  local_88[0] = *in_ECX;
  local_88[4] = 1.0;
  local_88[7] = 0.0;
  local_88[6] = 0.0;
  local_88[5] = 0.0;
  local_88[8] = in_ECX[1];
  local_88[0xd] = 1.0;
  local_88[0xf] = 0.0;
  local_88[0xe] = 0.0;
  local_88[0xc] = 0.0;
  local_88[0x10] = in_ECX[2];
  local_88[0x16] = 1.0;
  local_88[0x17] = 0.0;
  local_88[0x15] = 0.0;
  local_88[0x14] = 0.0;
  local_88[0x1f] = 1.0;
  local_88[0x1e] = 0.0;
  local_88[0x1d] = 0.0;
  local_88[0x1c] = 0.0;
  pfVar2 = local_88 + 0x10;
  pfVar5 = local_88 + 0x18;
  if (ABS(in_ECX[2]) < ABS(in_ECX[3])) {
    pfVar2 = local_88 + 0x18;
    pfVar5 = local_88 + 0x10;
  }
  pfVar3 = pfVar2;
  pfVar4 = local_88 + 8;
  if (ABS(in_ECX[1]) < ABS(*pfVar2)) {
    pfVar3 = local_88 + 8;
    pfVar4 = pfVar2;
  }
  pfVar1 = local_88;
  pfVar2 = pfVar4;
  if (ABS(*in_ECX) < ABS(*pfVar4)) {
    pfVar2 = local_88;
    pfVar1 = pfVar4;
  }
  fVar9 = *pfVar1;
  if (fVar9 != 0.0) {
    fVar7 = *pfVar2 / fVar9;
    fVar8 = *pfVar3 / fVar9;
    fVar6 = pfVar1[1];
    fVar9 = *pfVar5 / fVar9;
    pfVar2[1] = pfVar2[1] - fVar6 * fVar7;
    pfVar3[1] = pfVar3[1] - fVar6 * fVar8;
    pfVar5[1] = pfVar5[1] - fVar6 * fVar9;
    fVar6 = pfVar1[2];
    pfVar2[2] = pfVar2[2] - fVar6 * fVar7;
    pfVar3[2] = pfVar3[2] - fVar6 * fVar8;
    pfVar5[2] = pfVar5[2] - fVar6 * fVar9;
    fVar6 = pfVar1[3];
    pfVar2[3] = pfVar2[3] - fVar6 * fVar7;
    pfVar3[3] = pfVar3[3] - fVar6 * fVar8;
    pfVar5[3] = pfVar5[3] - fVar6 * fVar9;
    fVar6 = pfVar1[4];
    if (fVar6 != 0.0) {
      pfVar2[4] = pfVar2[4] - fVar6 * fVar7;
      pfVar3[4] = pfVar3[4] - fVar6 * fVar8;
      pfVar5[4] = pfVar5[4] - fVar6 * fVar9;
    }
    fVar6 = pfVar1[5];
    if (fVar6 != 0.0) {
      pfVar2[5] = pfVar2[5] - fVar6 * fVar7;
      pfVar3[5] = pfVar3[5] - fVar6 * fVar8;
      pfVar5[5] = pfVar5[5] - fVar6 * fVar9;
    }
    fVar6 = pfVar1[6];
    if (fVar6 != 0.0) {
      pfVar2[6] = pfVar2[6] - fVar6 * fVar7;
      pfVar3[6] = pfVar3[6] - fVar6 * fVar8;
      pfVar5[6] = pfVar5[6] - fVar6 * fVar9;
    }
    fVar6 = pfVar1[7];
    if (fVar6 != 0.0) {
      pfVar2[7] = pfVar2[7] - fVar6 * fVar7;
      pfVar3[7] = pfVar3[7] - fVar6 * fVar8;
      pfVar5[7] = pfVar5[7] - fVar6 * fVar9;
    }
    pfVar4 = pfVar3;
    if (ABS(pfVar3[1]) < ABS(pfVar5[1])) {
      pfVar4 = pfVar5;
      pfVar5 = pfVar3;
    }
    pfVar3 = pfVar4;
    if (ABS(pfVar2[1]) < ABS(pfVar4[1])) {
      pfVar3 = pfVar2;
      pfVar2 = pfVar4;
    }
    fVar9 = pfVar2[1];
    if (fVar9 != 0.0) {
      fVar7 = pfVar3[1] / fVar9;
      fVar9 = pfVar5[1] / fVar9;
      pfVar3[2] = pfVar3[2] - fVar7 * pfVar2[2];
      pfVar5[2] = pfVar5[2] - fVar9 * pfVar2[2];
      pfVar3[3] = pfVar3[3] - pfVar2[3] * fVar7;
      pfVar5[3] = pfVar5[3] - pfVar2[3] * fVar9;
      fVar6 = pfVar2[4];
      if (fVar6 != 0.0) {
        pfVar3[4] = pfVar3[4] - fVar6 * fVar7;
        pfVar5[4] = pfVar5[4] - fVar6 * fVar9;
      }
      fVar6 = pfVar2[5];
      if (fVar6 != 0.0) {
        pfVar3[5] = pfVar3[5] - fVar6 * fVar7;
        pfVar5[5] = pfVar5[5] - fVar6 * fVar9;
      }
      fVar6 = pfVar2[6];
      if (fVar6 != 0.0) {
        pfVar3[6] = pfVar3[6] - fVar6 * fVar7;
        pfVar5[6] = pfVar5[6] - fVar6 * fVar9;
      }
      fVar6 = pfVar2[7];
      if (fVar6 != 0.0) {
        pfVar3[7] = pfVar3[7] - fVar6 * fVar7;
        pfVar5[7] = pfVar5[7] - fVar6 * fVar9;
      }
      pfVar4 = pfVar3;
      if (ABS(pfVar3[2]) < ABS(pfVar5[2])) {
        pfVar4 = pfVar5;
        pfVar5 = pfVar3;
      }
      if (pfVar4[2] != 0.0) {
        fVar9 = pfVar5[2] / pfVar4[2];
        pfVar5[3] = pfVar5[3] - fVar9 * pfVar4[3];
        pfVar5[4] = pfVar5[4] - pfVar4[4] * fVar9;
        pfVar5[5] = pfVar5[5] - fVar9 * pfVar4[5];
        pfVar5[6] = pfVar5[6] - fVar9 * pfVar4[6];
        pfVar5[7] = pfVar5[7] - pfVar4[7] * fVar9;
        if (pfVar5[3] != 0.0) {
          fVar9 = 1.0 / pfVar5[3];
          pfVar5[4] = pfVar5[4] * fVar9;
          pfVar5[5] = pfVar5[5] * fVar9;
          pfVar5[6] = pfVar5[6] * fVar9;
          pfVar5[7] = pfVar5[7] * fVar9;
          fVar6 = 1.0 / pfVar4[2];
          fVar9 = pfVar4[3];
          pfVar4[4] = (pfVar4[4] - pfVar5[4] * fVar9) * fVar6;
          pfVar4[5] = (pfVar4[5] - pfVar5[5] * fVar9) * fVar6;
          pfVar4[6] = (pfVar4[6] - pfVar5[6] * fVar9) * fVar6;
          pfVar4[7] = (pfVar4[7] - pfVar5[7] * fVar9) * fVar6;
          fVar9 = pfVar2[3];
          pfVar2[4] = pfVar2[4] - pfVar5[4] * fVar9;
          pfVar2[5] = pfVar2[5] - pfVar5[5] * fVar9;
          pfVar2[6] = pfVar2[6] - pfVar5[6] * fVar9;
          pfVar2[7] = pfVar2[7] - pfVar5[7] * fVar9;
          fVar9 = pfVar1[3];
          pfVar1[4] = pfVar1[4] - pfVar5[4] * fVar9;
          pfVar1[5] = pfVar1[5] - pfVar5[5] * fVar9;
          pfVar1[6] = pfVar1[6] - pfVar5[6] * fVar9;
          pfVar1[7] = pfVar1[7] - pfVar5[7] * fVar9;
          fVar6 = 1.0 / pfVar2[1];
          fVar9 = pfVar2[2];
          pfVar2[4] = (pfVar2[4] - pfVar4[4] * fVar9) * fVar6;
          pfVar2[5] = (pfVar2[5] - fVar9 * pfVar4[5]) * fVar6;
          pfVar2[6] = (pfVar2[6] - fVar9 * pfVar4[6]) * fVar6;
          pfVar2[7] = (pfVar2[7] - pfVar4[7] * fVar9) * fVar6;
          fVar9 = pfVar1[2];
          fVar7 = 1.0 / *pfVar1;
          pfVar1[4] = pfVar1[4] - pfVar4[4] * fVar9;
          pfVar1[5] = pfVar1[5] - fVar9 * pfVar4[5];
          pfVar1[6] = pfVar1[6] - fVar9 * pfVar4[6];
          fVar6 = pfVar1[1];
          pfVar1[7] = pfVar1[7] - pfVar4[7] * fVar9;
          pfVar1[4] = (pfVar1[4] - pfVar2[4] * fVar6) * fVar7;
          pfVar1[5] = (pfVar1[5] - pfVar2[5] * fVar6) * fVar7;
          pfVar1[6] = (pfVar1[6] - pfVar2[6] * fVar6) * fVar7;
          fVar7 = (pfVar1[7] - pfVar2[7] * fVar6) * fVar7;
          pfVar1[7] = fVar7;
          *in_ECX = pfVar1[4];
          in_ECX[4] = pfVar1[5];
          in_ECX[0xc] = fVar7;
          in_ECX[8] = pfVar1[6];
          in_ECX[1] = pfVar2[4];
          in_ECX[5] = pfVar2[5];
          in_ECX[9] = pfVar2[6];
          in_ECX[0xd] = pfVar2[7];
          in_ECX[2] = pfVar4[4];
          in_ECX[6] = pfVar4[5];
          in_ECX[10] = pfVar4[6];
          in_ECX[0xe] = pfVar4[7];
          in_ECX[3] = pfVar5[4];
          in_ECX[7] = pfVar5[5];
          in_ECX[0xb] = pfVar5[6];
          in_ECX[0xf] = pfVar5[7];
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0058d710 @ 0058d710  kind=gamemisc  attributed-by=none  size=22 */

void FUN_0058d710(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  return;
}


/* FUN_0058d730 @ 0058d730  kind=gamemisc  attributed-by=none  size=99 */

undefined4 FUN_0058d730(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_2 + 0x14) - *(uint *)(param_2 + 0x10) < *(uint *)(param_3 + 0x10)) &&
     (*(uint *)(param_2 + 0x10) <= (uint)(*(int *)(param_3 + 0x14) - *(int *)(param_3 + 0x10)))) {
    uVar1 = FUN_0043a270(0,param_2,0,0xffffffff);
    FUN_0040eaf0(uVar1);
    return param_1;
  }
  uVar1 = FUN_0046f170(param_3,0,0xffffffff);
  FUN_0040eaf0(uVar1);
  return param_1;
}


/* FUN_0058d860 @ 0058d860  kind=gamemisc  attributed-by=none  size=70 */

int FUN_0058d860(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00439600(param_1,param_2);
  if ((undefined4 *)(iVar1 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)(iVar1 + 8) = *param_3;
    *(undefined4 *)(iVar1 + 0xc) = param_3[1];
    *(undefined4 *)(iVar1 + 0x10) = param_3[2];
    *(undefined4 *)(iVar1 + 0x14) = param_3[3];
    *(undefined4 *)(iVar1 + 0x18) = param_3[4];
    *(undefined4 *)(iVar1 + 0x1c) = param_3[5];
  }
  return iVar1;
}


/* FUN_0058e7d0 @ 0058e7d0  kind=gamemisc  attributed-by=none  size=254 */

undefined4 * FUN_0058e7d0(undefined4 *param_1,char param_2,uint *param_3,undefined4 param_4)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *in_ECX;
  bool bVar5;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar2 = param_3;
  puStack_c = &LAB_006f16c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)*in_ECX;
  bVar5 = true;
  local_8 = 0;
  piVar6 = piVar1;
  if (*(char *)(piVar1[1] + 0xd) == '\0') {
    piVar3 = (int *)piVar1[1];
    do {
      piVar6 = piVar3;
      if (param_2 == '\0') {
        bVar5 = *param_3 < (uint)piVar6[4];
      }
      else {
        bVar5 = *param_3 <= (uint)piVar6[4];
      }
      if (bVar5 == false) {
        piVar3 = (int *)piVar6[2];
      }
      else {
        piVar3 = (int *)*piVar6;
      }
    } while (*(char *)((int)piVar3 + 0xd) == '\0');
  }
  _param_2 = piVar6;
  if (bVar5 != false) {
    if (piVar6 == (int *)*piVar1) {
      puVar4 = (undefined4 *)&param_2;
      bVar5 = true;
      goto LAB_0058e869;
    }
    FUN_0042c740();
  }
  if (*puVar2 <= (uint)_param_2[4]) {
    *param_1 = _param_2;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return param_1;
  }
  puVar4 = &param_3;
LAB_0058e869:
  puVar4 = (undefined4 *)FUN_0062fbc0(puVar4,bVar5,piVar6,puVar2,param_4);
  *param_1 = *puVar4;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return param_1;
}


/* FUN_00594660 @ 00594660  kind=gamemisc  attributed-by=none  size=34 */

uint FUN_00594660(uint *param_1)

{
  uint uVar1;
  uint *in_ECX;
  
  uVar1 = in_ECX[1];
  if (((int)uVar1 <= (int)param_1[1]) &&
     (((int)uVar1 < (int)param_1[1] || (uVar1 = *in_ECX, uVar1 < *param_1)))) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}


/* FUN_00594690 @ 00594690  kind=gamemisc  attributed-by=none  size=34 */

uint FUN_00594690(uint *param_1)

{
  uint uVar1;
  uint *in_ECX;
  
  uVar1 = in_ECX[1];
  if (((int)param_1[1] <= (int)uVar1) &&
     (((int)param_1[1] < (int)uVar1 || (uVar1 = *in_ECX, *param_1 <= uVar1)))) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}


/* FUN_00594890 @ 00594890  kind=gamemisc  attributed-by=none  size=63 */

undefined4 * FUN_00594890(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *in_ECX;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)*in_ECX;
  if (*(char *)((int)puVar3[1] + 0xd) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if (((int)puVar1[4] < *param_1) ||
         (((int)puVar1[4] <= *param_1 && ((int)puVar1[5] < param_1[1])))) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0xd) == '\0');
  }
  return puVar3;
}


/* FUN_00594c80 @ 00594c80  kind=gamemisc  attributed-by=none  size=876 */

void FUN_00594c80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined1 local_f8 [4];
  int local_f4;
  undefined4 local_f0;
  void *local_ec [4];
  undefined4 local_dc;
  uint local_d8;
  void *local_d4 [4];
  undefined4 local_c4;
  uint local_c0;
  void *local_bc [4];
  undefined4 local_ac;
  uint local_a8;
  void *local_a4 [4];
  undefined4 local_94;
  uint local_90;
  void *local_8c [4];
  undefined4 local_7c;
  uint local_78;
  void *local_74 [4];
  undefined4 local_64;
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [4];
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
  puStack_c = &LAB_006f1b87;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_f0 = param_1;
  local_14 = uVar3;
  uVar4 = FUN_0059aa60(local_a4,param_2);
  local_8 = 0;
  piVar5 = (int *)FUN_005a02d0(uVar4);
  local_8 = 0xffffffff;
  if (7 < local_90) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_a4[0]);
  }
  local_90 = 7;
  local_94 = 0;
  local_a4[0] = (void *)((uint)local_a4[0] & 0xffff0000);
  piVar7 = *(int **)piVar5[2];
  if (piVar7 != (int *)piVar5[2]) {
    do {
      local_8 = 0xffffffff;
      local_30 = 7;
      local_34 = 0;
      local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
      FUN_0040f7a0(&DAT_0071daec,1);
      local_8 = 1;
      uVar4 = FUN_004517d0(local_8c,local_44,local_f0,uVar3);
      local_8._0_1_ = 2;
      uVar4 = FUN_00451800(local_74,uVar4,&DAT_0071dae8);
      local_8._0_1_ = 3;
      uVar4 = FUN_004517d0(local_5c,uVar4,piVar7 + 2);
      local_8 = CONCAT31(local_8._1_3_,4);
      FUN_004da1a0(local_f8,0,uVar4,DAT_0076b7ca);
      if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_5c[0]);
      }
      local_48 = 7;
      local_4c = 0;
      local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
      if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_74[0]);
      }
      local_60 = 7;
      local_64 = 0;
      local_74[0] = (void *)((uint)local_74[0] & 0xffff0000);
      if (7 < local_78) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_8c[0]);
      }
      local_78 = 7;
      local_7c = 0;
      local_8c[0] = (void *)((uint)local_8c[0] & 0xffff0000);
      local_8 = 0xffffffff;
      if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_44[0]);
      }
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)piVar5[2]);
  }
  piVar7 = *(int **)*piVar5;
  if (piVar7 != (int *)*piVar5) {
    local_f4 = param_5 + 8;
    do {
      local_8 = 0xffffffff;
      local_18 = 7;
      local_1c = 0;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
      FUN_0040f7a0(&DAT_0071daf0,1);
      local_8 = 5;
      uVar4 = FUN_004517d0(local_ec,local_2c,local_f0);
      local_8._0_1_ = 6;
      uVar4 = FUN_00451800(local_d4,uVar4,&DAT_0071dae8);
      local_8._0_1_ = 7;
      uVar4 = FUN_004517d0(local_bc,uVar4,piVar7 + 4);
      local_8 = CONCAT31(local_8._1_3_,8);
      piVar6 = (int *)FUN_004689a0(uVar4);
      if (piVar6 != piVar7 + 10) {
        FUN_0040f680(piVar7 + 10,0,0xffffffff);
      }
      if (7 < local_a8) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_bc[0]);
      }
      local_a8 = 7;
      local_ac = 0;
      local_bc[0] = (void *)((uint)local_bc[0] & 0xffff0000);
      if (7 < local_c0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_d4[0]);
      }
      local_c0 = 7;
      local_c4 = 0;
      local_d4[0] = (void *)((uint)local_d4[0] & 0xffff0000);
      if (7 < local_d8) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_ec[0]);
      }
      local_d8 = 7;
      local_dc = 0;
      local_ec[0] = (void *)((uint)local_ec[0] & 0xffff0000);
      local_8 = 0xffffffff;
      if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_2c[0]);
      }
      if (*(char *)((int)piVar7 + 0xd) == '\0') {
        piVar6 = (int *)piVar7[2];
        if (*(char *)((int)piVar6 + 0xd) == '\0') {
          cVar1 = *(char *)(*piVar6 + 0xd);
          piVar7 = piVar6;
          piVar6 = (int *)*piVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar6 + 0xd);
            piVar7 = piVar6;
            piVar6 = (int *)*piVar6;
          }
        }
        else {
          cVar1 = *(char *)(piVar7[1] + 0xd);
          piVar2 = (int *)piVar7[1];
          piVar6 = piVar7;
          while ((piVar7 = piVar2, cVar1 == '\0' && (piVar6 == (int *)piVar7[2]))) {
            cVar1 = *(char *)(piVar7[1] + 0xd);
            piVar2 = (int *)piVar7[1];
            piVar6 = piVar7;
          }
        }
      }
    } while (piVar7 != (int *)*piVar5);
  }
  local_8 = 0xffffffff;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00595010 @ 00595010  kind=gamemisc  attributed-by=none  size=882 */

void FUN_00595010(undefined4 param_1,undefined1 *param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined1 local_f8 [4];
  int local_f4;
  undefined4 local_f0;
  void *local_ec [4];
  undefined4 local_dc;
  uint local_d8;
  void *local_d4 [4];
  undefined4 local_c4;
  uint local_c0;
  void *local_bc [4];
  undefined4 local_ac;
  uint local_a8;
  void *local_a4 [4];
  undefined4 local_94;
  uint local_90;
  void *local_8c [4];
  undefined4 local_7c;
  uint local_78;
  void *local_74 [4];
  undefined4 local_64;
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [4];
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
  puStack_c = &LAB_006f1b87;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_f0 = param_1;
  local_14 = uVar3;
  uVar4 = FUN_0059fbf0(local_a4,*param_2,param_2[1]);
  local_8 = 0;
  piVar5 = (int *)FUN_005a02d0(uVar4);
  local_8 = 0xffffffff;
  if (7 < local_90) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_a4[0]);
  }
  local_90 = 7;
  local_94 = 0;
  local_a4[0] = (void *)((uint)local_a4[0] & 0xffff0000);
  piVar7 = *(int **)piVar5[2];
  if (piVar7 != (int *)piVar5[2]) {
    do {
      local_8 = 0xffffffff;
      local_30 = 7;
      local_34 = 0;
      local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
      FUN_0040f7a0(&DAT_0071daec,1);
      local_8 = 1;
      uVar4 = FUN_004517d0(local_8c,local_44,local_f0,uVar3);
      local_8._0_1_ = 2;
      uVar4 = FUN_00451800(local_74,uVar4,&DAT_0071dae8);
      local_8._0_1_ = 3;
      uVar4 = FUN_004517d0(local_5c,uVar4,piVar7 + 2);
      local_8 = CONCAT31(local_8._1_3_,4);
      FUN_004da1a0(local_f8,0,uVar4,DAT_0076b7ca);
      if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_5c[0]);
      }
      local_48 = 7;
      local_4c = 0;
      local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
      if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_74[0]);
      }
      local_60 = 7;
      local_64 = 0;
      local_74[0] = (void *)((uint)local_74[0] & 0xffff0000);
      if (7 < local_78) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_8c[0]);
      }
      local_78 = 7;
      local_7c = 0;
      local_8c[0] = (void *)((uint)local_8c[0] & 0xffff0000);
      local_8 = 0xffffffff;
      if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_44[0]);
      }
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)piVar5[2]);
  }
  piVar7 = *(int **)*piVar5;
  if (piVar7 != (int *)*piVar5) {
    local_f4 = param_3 + 8;
    do {
      local_8 = 0xffffffff;
      local_18 = 7;
      local_1c = 0;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
      FUN_0040f7a0(&DAT_0071daf0,1);
      local_8 = 5;
      uVar4 = FUN_004517d0(local_ec,local_2c,local_f0);
      local_8._0_1_ = 6;
      uVar4 = FUN_00451800(local_d4,uVar4,&DAT_0071dae8);
      local_8._0_1_ = 7;
      uVar4 = FUN_004517d0(local_bc,uVar4,piVar7 + 4);
      local_8 = CONCAT31(local_8._1_3_,8);
      piVar6 = (int *)FUN_004689a0(uVar4);
      if (piVar6 != piVar7 + 10) {
        FUN_0040f680(piVar7 + 10,0,0xffffffff);
      }
      if (7 < local_a8) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_bc[0]);
      }
      local_a8 = 7;
      local_ac = 0;
      local_bc[0] = (void *)((uint)local_bc[0] & 0xffff0000);
      if (7 < local_c0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_d4[0]);
      }
      local_c0 = 7;
      local_c4 = 0;
      local_d4[0] = (void *)((uint)local_d4[0] & 0xffff0000);
      if (7 < local_d8) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_ec[0]);
      }
      local_d8 = 7;
      local_dc = 0;
      local_ec[0] = (void *)((uint)local_ec[0] & 0xffff0000);
      local_8 = 0xffffffff;
      if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_2c[0]);
      }
      if (*(char *)((int)piVar7 + 0xd) == '\0') {
        piVar6 = (int *)piVar7[2];
        if (*(char *)((int)piVar6 + 0xd) == '\0') {
          cVar1 = *(char *)(*piVar6 + 0xd);
          piVar7 = piVar6;
          piVar6 = (int *)*piVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar6 + 0xd);
            piVar7 = piVar6;
            piVar6 = (int *)*piVar6;
          }
        }
        else {
          cVar1 = *(char *)(piVar7[1] + 0xd);
          piVar2 = (int *)piVar7[1];
          piVar6 = piVar7;
          while ((piVar7 = piVar2, cVar1 == '\0' && (piVar6 == (int *)piVar7[2]))) {
            cVar1 = *(char *)(piVar7[1] + 0xd);
            piVar2 = (int *)piVar7[1];
            piVar6 = piVar7;
          }
        }
      }
    } while (piVar7 != (int *)*piVar5);
  }
  local_8 = 0xffffffff;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005953a0 @ 005953a0  kind=gamemisc  attributed-by=none  size=1012 */

void FUN_005953a0(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  void **ppvVar7;
  int *piVar8;
  undefined1 local_c0 [4];
  int local_bc;
  int local_b4;
  undefined4 local_b0;
  int *local_ac;
  undefined4 local_a8;
  void *local_a4 [4];
  undefined4 local_94;
  uint local_90;
  void *local_8c [4];
  undefined4 local_7c;
  uint local_78;
  void *local_74 [4];
  undefined4 local_64;
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [4];
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
  puStack_c = &LAB_006f1c0e;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_a8 = param_1;
  local_b4 = param_2;
  local_14 = uVar3;
  uVar4 = FUN_005a5240(local_a4,*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c));
  local_8 = 0;
  piVar5 = (int *)FUN_005a02d0(uVar4);
  local_8 = 0xffffffff;
  local_ac = piVar5;
  if (7 < local_90) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_a4[0]);
  }
  local_90 = 7;
  local_94 = 0;
  local_a4[0] = (void *)((uint)local_a4[0] & 0xffff0000);
  piVar8 = *(int **)piVar5[2];
  if (piVar8 != (int *)piVar5[2]) {
    do {
      local_8 = 0xffffffff;
      local_30 = 7;
      local_34 = 0;
      local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
      FUN_0040f7a0(&DAT_0071daec,1);
      local_8 = 1;
      uVar4 = FUN_004517d0(local_2c,local_44,local_a8,uVar3);
      local_8._0_1_ = 2;
      uVar4 = FUN_00451800(local_74,uVar4,&DAT_0071dae8);
      local_8._0_1_ = 3;
      uVar4 = FUN_004517d0(local_5c,uVar4,piVar8 + 2);
      local_8 = CONCAT31(local_8._1_3_,4);
      FUN_004da1a0(local_c0,0,uVar4,DAT_0076b7ca);
      if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_5c[0]);
      }
      local_48 = 7;
      local_4c = 0;
      local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
      if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_74[0]);
      }
      local_60 = 7;
      local_64 = 0;
      local_74[0] = (void *)((uint)local_74[0] & 0xffff0000);
      if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_2c[0]);
      }
      local_18 = 7;
      local_1c = 0;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
      local_8 = 0xffffffff;
      if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_44[0]);
      }
      piVar8 = (int *)*piVar8;
    } while (piVar8 != (int *)piVar5[2]);
  }
  piVar8 = *(int **)*piVar5;
  if (piVar8 != (int *)*piVar5) {
    local_bc = param_3 + 8;
    local_b0 = 0x40;
    do {
      local_8 = 0xffffffff;
      local_8c[0] = (void *)((uint)local_8c[0] & 0xffff0000);
      local_78 = 7;
      local_7c = 0;
      FUN_0040f680(piVar8 + 10,0,0xffffffff);
      local_8._0_1_ = 5;
      local_8._1_3_ = 0;
      iVar6 = FUN_004d9950(&local_b0,0,1);
      if (iVar6 != -1) {
        uVar4 = FUN_005a0ed0(local_2c,*(undefined4 *)(local_b4 + 0x20),0xffffffff);
        local_8._0_1_ = 6;
        FUN_00486d00(iVar6,1,uVar4,0,0xffffffff);
        local_8._0_1_ = 5;
        if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_2c[0]);
        }
      }
      local_30 = 7;
      local_34 = 0;
      local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
      FUN_0040f7a0(&DAT_0071daf0,1);
      local_8._0_1_ = 7;
      uVar4 = FUN_004517d0(local_5c,local_44,local_a8);
      local_8._0_1_ = 8;
      uVar4 = FUN_00451800(local_74,uVar4,&DAT_0071dae8);
      local_8._0_1_ = 9;
      uVar4 = FUN_004517d0(local_2c,uVar4,piVar8 + 4);
      local_8 = CONCAT31(local_8._1_3_,10);
      ppvVar7 = (void **)FUN_004689a0(uVar4);
      if (ppvVar7 != local_8c) {
        FUN_0040f680(local_8c,0,0xffffffff);
      }
      if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_2c[0]);
      }
      local_18 = 7;
      local_1c = 0;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
      if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_74[0]);
      }
      local_60 = 7;
      local_64 = 0;
      local_74[0] = (void *)((uint)local_74[0] & 0xffff0000);
      if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_5c[0]);
      }
      local_48 = 7;
      local_4c = 0;
      local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
      if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_44[0]);
      }
      local_8 = 0xffffffff;
      if (7 < local_78) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_8c[0]);
      }
      if (*(char *)((int)piVar8 + 0xd) == '\0') {
        piVar5 = (int *)piVar8[2];
        if (*(char *)((int)piVar5 + 0xd) == '\0') {
          cVar1 = *(char *)(*piVar5 + 0xd);
          piVar8 = piVar5;
          piVar5 = (int *)*piVar5;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar5 + 0xd);
            piVar8 = piVar5;
            piVar5 = (int *)*piVar5;
          }
        }
        else {
          cVar1 = *(char *)(piVar8[1] + 0xd);
          piVar2 = (int *)piVar8[1];
          piVar5 = piVar8;
          while ((piVar8 = piVar2, cVar1 == '\0' && (piVar5 == (int *)piVar8[2]))) {
            cVar1 = *(char *)(piVar8[1] + 0xd);
            piVar2 = (int *)piVar8[1];
            piVar5 = piVar8;
          }
        }
      }
    } while (piVar8 != (int *)*local_ac);
  }
  local_8 = 0xffffffff;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00598840 @ 00598840  kind=gamemisc  attributed-by=none  size=82 */

undefined4 FUN_00598840(undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_ECX;
  undefined4 *puVar6;
  
  puVar2 = *(undefined4 **)(in_ECX + 0x800154);
  cVar1 = *(char *)((int)puVar2[1] + 0xd);
  puVar4 = puVar2;
  puVar6 = (undefined4 *)puVar2[1];
  while (cVar1 == '\0') {
    if ((int)puVar6[4] < (int)param_1) {
      puVar5 = (undefined4 *)puVar6[2];
      puVar6 = puVar4;
    }
    else {
      puVar5 = (undefined4 *)*puVar6;
    }
    puVar4 = puVar6;
    puVar6 = puVar5;
    cVar1 = *(char *)((int)puVar5 + 0xd);
  }
  if ((puVar4 == puVar2) || (bVar3 = (int)param_1 < (int)puVar4[4], param_1 = puVar4, bVar3)) {
    param_1 = puVar2;
  }
  if (param_1 != puVar2) {
    return param_1[5];
  }
  return 0;
}


/* FUN_0059c490 @ 0059c490  kind=gamemisc  attributed-by=none  size=189 */

undefined4 * FUN_0059c490(undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_005947e0(piVar2[1]);
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
    FUN_0059c550(local_8,piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return param_1;
}


/* FUN_0059c550 @ 0059c550  kind=gamemisc  attributed-by=none  size=647 */

/* WARNING: Removing unreachable block (ram,0x0059c61d) */
/* WARNING: Removing unreachable block (ram,0x0059c62d) */
/* WARNING: Removing unreachable block (ram,0x0059c636) */
/* WARNING: Removing unreachable block (ram,0x0059c639) */
/* WARNING: Removing unreachable block (ram,0x0059c629) */
/* WARNING: Removing unreachable block (ram,0x0059c647) */
/* WARNING: Removing unreachable block (ram,0x0059c656) */
/* WARNING: Removing unreachable block (ram,0x0059c661) */
/* WARNING: Removing unreachable block (ram,0x0059c65d) */
/* WARNING: Removing unreachable block (ram,0x0059c651) */
/* WARNING: Removing unreachable block (ram,0x0059c664) */

void FUN_0059c550(undefined4 param_1,int *param_2)

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
              goto LAB_0059c7ae;
            }
LAB_0059c750:
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
            goto LAB_0059c750;
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
            goto LAB_0059c7ae;
          }
        }
        piVar5 = (int *)piVar3[1];
        piVar6 = piVar3;
      } while (piVar3 != *(int **)(*in_ECX + 4));
    }
    *(undefined1 *)(piVar6 + 3) = 1;
  }
LAB_0059c7ae:
  if (7 < (uint)param_2[0xb]) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_2[6]);
  }
  param_2[0xb] = 7;
  param_2[10] = 0;
  *(undefined2 *)(param_2 + 6) = 0;
                    /* WARNING: Subroutine does not return */
  operator_delete(param_2);
}


/* FUN_0059fbf0 @ 0059fbf0  kind=gamemisc  attributed-by=none  size=156 */

undefined2 * FUN_0059fbf0(undefined2 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  local_8 = 0;
  local_10 = param_2;
  local_c = param_3;
  iVar3 = FUN_00594890(&local_10);
  iVar1 = *(int *)(in_ECX + 0x800134);
  iVar2 = iVar1;
  if (((iVar3 != iVar1) && (*(int *)(iVar3 + 0x10) <= param_2)) &&
     ((*(int *)(iVar3 + 0x10) < param_2 || (*(int *)(iVar3 + 0x14) <= param_3)))) {
    iVar2 = iVar3;
  }
  param_2 = iVar2;
  if (param_2 != iVar1) {
    *(undefined4 *)(param_1 + 10) = 7;
    *(undefined4 *)(param_1 + 8) = 0;
    *param_1 = 0;
    FUN_0040f680(param_2 + 0x18,0,0xffffffff);
    return param_1;
  }
  FUN_0040eb60(&PTR_006fccac);
  return param_1;
}


/* FUN_0059ff60 @ 0059ff60  kind=gamemisc  attributed-by=none  size=639 */

undefined4 FUN_0059ff60(undefined4 param_1,undefined4 param_2)

{
  switch(param_2) {
  case 1:
    FUN_0040eb60(L"MaterialIron");
    return param_1;
  case 2:
    FUN_0040eb60(L"MaterialWood");
    return param_1;
  default:
    FUN_0040eb60(L"Material");
    return param_1;
  case 5:
    FUN_0040eb60(L"MaterialObsidian");
    return param_1;
  case 7:
    FUN_0040eb60(L"MaterialBone");
    return param_1;
  case 10:
    FUN_0040eb60(L"MaterialCopper");
    return param_1;
  case 0xb:
    FUN_0040eb60(L"MaterialGold");
    return param_1;
  case 0xc:
    FUN_0040eb60(L"MaterialSilver");
    return param_1;
  case 0xd:
    FUN_0040eb60(L"MaterialEmerald");
    return param_1;
  case 0xe:
    FUN_0040eb60(L"MaterialSapphire");
    return param_1;
  case 0xf:
    FUN_0040eb60(L"MaterialRuby");
    return param_1;
  case 0x10:
    FUN_0040eb60(L"MaterialDiamond");
    return param_1;
  case 0x11:
    FUN_0040eb60(L"MaterialSandstone");
    return param_1;
  case 0x12:
    FUN_0040eb60(L"MaterialSaurian");
    return param_1;
  case 0x13:
    FUN_0040eb60(L"MaterialParrot");
    return param_1;
  case 0x14:
    FUN_0040eb60(L"MaterialMammoth");
    return param_1;
  case 0x15:
    FUN_0040eb60(L"MaterialPlant");
    return param_1;
  case 0x16:
  case 0x82:
    FUN_0040eb60(L"MaterialIce");
    return param_1;
  case 0x17:
    FUN_0040eb60(L"MaterialLight");
    return param_1;
  case 0x18:
    FUN_0040eb60(L"MaterialGlass");
    return param_1;
  case 0x19:
    FUN_0040eb60(L"MaterialSilk");
    return param_1;
  case 0x1a:
    FUN_0040eb60(L"MaterialLinen");
    return param_1;
  case 0x1b:
    FUN_0040eb60(L"MaterialCotton");
    return param_1;
  case 0x80:
    FUN_0040eb60(L"MaterialFire");
    return param_1;
  case 0x81:
    FUN_0040eb60(L"MaterialUnholy");
    return param_1;
  case 0x83:
    FUN_0040eb60(L"MaterialWind");
    return param_1;
  }
}


/* FUN_005a02d0 @ 005a02d0  kind=gamemisc  attributed-by=none  size=251 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_005a02d0(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined *puVar6;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f20c8;
  local_10 = ExceptionList;
  uVar2 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar1 = (int *)(in_ECX + 4);
  iVar3 = FUN_004e3790(param_1);
  if (iVar3 != *piVar1) {
    piVar4 = (int *)(iVar3 + 0x10);
    if (7 < *(uint *)(iVar3 + 0x24)) {
      piVar4 = (int *)*piVar4;
    }
    iVar5 = FUN_00428db0(0,*(undefined4 *)(param_1 + 0x10),piVar4,*(undefined4 *)(iVar3 + 0x20));
    param_1 = iVar3;
    if (-1 < iVar5) goto LAB_005a0333;
  }
  param_1 = *piVar1;
LAB_005a0333:
  if ((DAT_0076b804 & 1) == 0) {
    DAT_0076b804 = DAT_0076b804 | 1;
    local_8 = 0;
    _DAT_0076b7f4 = 0;
    _DAT_0076b7f8 = 0;
    _DAT_0076b7f4 = FUN_00630a10(uVar2);
    local_8 = CONCAT31(local_8._1_3_,1);
    DAT_0076b7fc = 0;
    _DAT_0076b800 = 0;
    DAT_0076b7fc = FUN_00439600(0,0);
    _atexit(FUN_006fb5f0);
  }
  puVar6 = &DAT_0076b7f4;
  if (param_1 != *piVar1) {
    puVar6 = (undefined *)(param_1 + 0x28);
  }
  ExceptionList = local_10;
  return puVar6;
}


/* FUN_005a0970 @ 005a0970  kind=gamemisc  attributed-by=none  size=617 */

void FUN_005a0970(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_3c;
  int *local_38;
  int local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_3c = param_1;
  local_4c = *(undefined4 *)(param_1 + 8);
  puVar9 = (undefined4 *)(param_1 + 8);
  local_48 = *(undefined4 *)(param_1 + 0xc);
  local_54 = *(undefined4 *)(param_2 + 8);
  local_50 = *(undefined4 *)(param_2 + 0xc);
  puVar4 = (undefined4 *)FUN_00468ad0(puVar9);
  local_44 = *puVar4;
  local_38 = (int *)(param_3 + 0x50);
  iVar7 = *local_38;
  iVar5 = FUN_00451d00(iVar7,*(undefined4 *)(iVar7 + 4),&local_54);
  if (local_38[1] != 0x7fffffe) {
    local_38[1] = local_38[1] + 1;
    *(int *)(iVar7 + 4) = iVar5;
    **(int **)(iVar5 + 4) = iVar5;
    piVar8 = (int *)**(int **)(local_34 + 4);
    iVar7 = local_34;
    if (piVar8 != *(int **)(local_34 + 4)) {
      do {
        iVar5 = piVar8[6];
        if ((((iVar5 != 0) && (iVar5 != local_3c)) && (iVar5 != param_2)) &&
           (cVar3 = FUN_00596ca0(iVar5,local_3c), iVar7 = local_34, cVar3 != '\0')) {
          iVar5 = piVar8[6];
          local_20._0_4_ = (uint)*(undefined8 *)(iVar5 + 0x10);
          local_20._4_4_ = (int)((ulonglong)*(undefined8 *)(iVar5 + 0x10) >> 0x20);
          local_20 = CONCAT44((local_20._4_4_ - *(int *)(param_2 + 0x14)) -
                              (uint)((uint)local_20 < *(uint *)(param_2 + 0x10)),
                              (uint)local_20 - *(uint *)(param_2 + 0x10));
          local_18._0_4_ = (uint)*(undefined8 *)(iVar5 + 0x18);
          local_18._4_4_ = (int)((ulonglong)*(undefined8 *)(iVar5 + 0x18) >> 0x20);
          local_18 = CONCAT44((local_18._4_4_ - *(int *)(param_2 + 0x1c)) -
                              (uint)((uint)local_18 < *(uint *)(param_2 + 0x18)),
                              (uint)local_18 - *(uint *)(param_2 + 0x18));
          local_10._0_4_ = (uint)*(undefined8 *)(iVar5 + 0x20);
          local_10._4_4_ = (int)((ulonglong)*(undefined8 *)(iVar5 + 0x20) >> 0x20);
          local_10 = CONCAT44((local_10._4_4_ - *(int *)(param_2 + 0x24)) -
                              (uint)((uint)local_10 < *(uint *)(param_2 + 0x20)),
                              (uint)local_10 - *(uint *)(param_2 + 0x20));
          local_2c = (float)local_20 * 1.5258789e-05;
          local_30 = (float)local_10;
          local_28 = (float)local_18 * 1.5258789e-05;
          local_24 = local_30 * 1.5258789e-05;
          if ((local_28 * local_28 + local_2c * local_2c + local_24 * local_24 < 64.0) &&
             (pfVar6 = (float *)FUN_00468ad0(puVar9), iVar7 = local_34, *pfVar6 == 0.0)) {
            puVar4 = (undefined4 *)FUN_00468ad0(puVar9);
            *puVar4 = 0x3f000000;
            local_64 = *puVar9;
            local_60 = *(undefined4 *)(param_1 + 0xc);
            local_6c = *(undefined4 *)(piVar8[6] + 8);
            local_68 = *(undefined4 *)(piVar8[6] + 0xc);
            puVar4 = (undefined4 *)FUN_00468ad0(puVar9);
            local_5c = *puVar4;
            FUN_00486150(&local_6c);
            iVar7 = local_34;
          }
        }
        if (*(char *)((int)piVar8 + 0xd) == '\0') {
          piVar1 = (int *)piVar8[2];
          if (*(char *)((int)piVar1 + 0xd) == '\0') {
            cVar3 = *(char *)(*piVar1 + 0xd);
            piVar8 = piVar1;
            piVar1 = (int *)*piVar1;
            while (cVar3 == '\0') {
              cVar3 = *(char *)(*piVar1 + 0xd);
              piVar8 = piVar1;
              piVar1 = (int *)*piVar1;
            }
          }
          else {
            cVar3 = *(char *)(piVar8[1] + 0xd);
            piVar2 = (int *)piVar8[1];
            piVar1 = piVar8;
            while ((piVar8 = piVar2, cVar3 == '\0' && (piVar1 == (int *)piVar8[2]))) {
              cVar3 = *(char *)(piVar8[1] + 0xd);
              piVar2 = (int *)piVar8[1];
              piVar1 = piVar8;
            }
          }
        }
      } while (piVar8 != *(int **)(iVar7 + 4));
    }
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_005a0ed0 @ 005a0ed0  kind=gamemisc  attributed-by=none  size=9823 */

void FUN_005a0ed0(undefined4 param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f3002;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar5 = 0;
  if ((DAT_0076b9e8 & 1) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 1;
    local_8 = 0;
    FUN_0040eb60(&DAT_0071c77c);
    local_8._0_1_ = 1;
    FUN_0040eb60(&DAT_0071c784);
    local_8._0_1_ = 2;
    FUN_0040eb60(&DAT_0071c78c);
    local_8._0_1_ = 3;
    FUN_0040eb60(&DAT_0071c794);
    local_8._0_1_ = 4;
    FUN_0040eb60(&DAT_0071c79c);
    local_8._0_1_ = 5;
    FUN_0040eb60(L"Lugo");
    local_8._0_1_ = 6;
    FUN_0040eb60(&DAT_0071c7b0);
    local_8._0_1_ = 7;
    FUN_0040eb60(L"Liku");
    local_8._0_1_ = 8;
    FUN_0040eb60(L"Tero");
    local_8._0_1_ = 9;
    FUN_0040eb60(&DAT_0071c7d0);
    local_8._0_1_ = 10;
    FUN_0040eb60(&DAT_0071c828);
    local_8._0_1_ = 0xb;
    FUN_0040eb60(&DAT_0071c830);
    local_8._0_1_ = 0xc;
    FUN_0040eb60(&DAT_0071c838);
    local_8._0_1_ = 0xd;
    FUN_0040eb60(&DAT_0071c840);
    local_8._0_1_ = 0xe;
    FUN_0040eb60(L"Dura");
    local_8._0_1_ = 0xf;
    FUN_0040eb60(L"Dama");
    local_8._0_1_ = 0x10;
    FUN_0040eb60(&DAT_0071c860);
    local_8._0_1_ = 0x11;
    FUN_0040eb60(L"Thal");
    local_8._0_1_ = 0x12;
    FUN_0040eb60(&DAT_0071c874);
    local_8 = CONCAT31(local_8._1_3_,0x13);
    FUN_0040eb60(&DAT_0071c87c);
    _atexit((_func_4879 *)&LAB_006fb4b0);
  }
  if ((DAT_0076b9e8 & 2) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 2;
    local_8 = 0x14;
    FUN_0040eb60(&DAT_0071c7d8);
    local_8._0_1_ = 0x15;
    FUN_0040eb60(&DAT_0071c7e0);
    local_8._0_1_ = 0x16;
    FUN_0040eb60(&DAT_0071c7e8);
    local_8._0_1_ = 0x17;
    FUN_0040eb60(&DAT_0071c7f0);
    local_8._0_1_ = 0x18;
    FUN_0040eb60(&DAT_0071c7f8);
    local_8._0_1_ = 0x19;
    FUN_0040eb60(&DAT_0071c800);
    local_8._0_1_ = 0x1a;
    FUN_0040eb60(&DAT_0071c808);
    local_8._0_1_ = 0x1b;
    FUN_0040eb60(&DAT_0071c810);
    local_8._0_1_ = 0x1c;
    FUN_0040eb60(&DAT_0071c818);
    local_8._0_1_ = 0x1d;
    FUN_0040eb60(&DAT_0071c820);
    local_8._0_1_ = 0x1e;
    FUN_0040eb60(&DAT_0071c884);
    local_8._0_1_ = 0x1f;
    FUN_0040eb60(&DAT_0071c88c);
    local_8._0_1_ = 0x20;
    FUN_0040eb60(&DAT_0071c894);
    local_8._0_1_ = 0x21;
    FUN_0040eb60(L"dara");
    local_8._0_1_ = 0x22;
    FUN_0040eb60(&DAT_0071c8a8);
    local_8._0_1_ = 0x23;
    FUN_0040eb60(&DAT_0071c8b0);
    local_8._0_1_ = 0x24;
    FUN_0040eb60(&DAT_0071c8b8);
    local_8._0_1_ = 0x25;
    FUN_0040eb60(L"rior");
    local_8._0_1_ = 0x26;
    FUN_0040eb60(&DAT_0071c8cc);
    local_8 = CONCAT31(local_8._1_3_,0x27);
    FUN_0040eb60(&DAT_0071c8d4);
    _atexit((_func_4879 *)&LAB_006fb4d0);
  }
  if ((DAT_0076b9e8 & 4) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 4;
    local_8 = 0x28;
    FUN_0040eb60(&DAT_0071c8dc);
    local_8._0_1_ = 0x29;
    FUN_0040eb60(&DAT_0071c8e4);
    local_8._0_1_ = 0x2a;
    FUN_0040eb60(&DAT_0071c78c);
    local_8._0_1_ = 0x2b;
    FUN_0040eb60(&DAT_0071c794);
    local_8._0_1_ = 0x2c;
    FUN_0040eb60(&DAT_0071c828);
    local_8._0_1_ = 0x2d;
    FUN_0040eb60(&DAT_0071c8ec);
    local_8._0_1_ = 0x2e;
    FUN_0040eb60(L"Wolf");
    local_8._0_1_ = 0x2f;
    FUN_0040eb60(&DAT_0071c8f4);
    local_8._0_1_ = 0x30;
    FUN_0040eb60(&DAT_0071c8fc);
    local_8 = CONCAT31(local_8._1_3_,0x31);
    FUN_0040eb60(&DAT_0071c904);
    _atexit((_func_4879 *)&LAB_006fb810);
  }
  if ((DAT_0076b9e8 & 8) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 8;
    local_8 = 0x32;
    FUN_0040eb60(&DAT_0071c90c);
    local_8._0_1_ = 0x33;
    FUN_0040eb60(&DAT_0071c914);
    local_8._0_1_ = 0x34;
    FUN_0040eb60(L"gram");
    local_8._0_1_ = 0x35;
    FUN_0040eb60(L"rald");
    local_8._0_1_ = 0x36;
    FUN_0040eb60(L"rick");
    local_8._0_1_ = 0x37;
    FUN_0040eb60(&DAT_0071c940);
    local_8._0_1_ = 0x38;
    FUN_0040eb60(L"sander");
    local_8._0_1_ = 0x39;
    FUN_0040eb60(&DAT_0071c958);
    local_8._0_1_ = 0x3a;
    FUN_0040eb60(&DAT_0071c960);
    local_8 = CONCAT31(local_8._1_3_,0x3b);
    FUN_0040eb60(&DAT_0071c968);
    _atexit((_func_4879 *)&LAB_006fb830);
  }
  if ((DAT_0076b9e8 & 0x10) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x10;
    local_8 = 0x3c;
    FUN_0040eb60(&DAT_0071c970);
    local_8._0_1_ = 0x3d;
    FUN_0040eb60(&DAT_0071c978);
    local_8._0_1_ = 0x3e;
    FUN_0040eb60(&DAT_0071c980);
    local_8._0_1_ = 0x3f;
    FUN_0040eb60(&DAT_0071c8fc);
    local_8._0_1_ = 0x40;
    FUN_0040eb60(&DAT_0071c988);
    local_8._0_1_ = 0x41;
    FUN_0040eb60(L"Auri");
    local_8._0_1_ = 0x42;
    FUN_0040eb60(L"Mela");
    local_8._0_1_ = 0x43;
    FUN_0040eb60(&DAT_0071c9a8);
    local_8._0_1_ = 0x44;
    FUN_0040eb60(&DAT_0071c9b0);
    local_8 = CONCAT31(local_8._1_3_,0x45);
    FUN_0040eb60(&DAT_0071c9b8);
    _atexit((_func_4879 *)&LAB_006fb7d0);
  }
  if ((DAT_0076b9e8 & 0x20) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x20;
    local_8 = 0x46;
    FUN_0040eb60(&DAT_0071c9c0);
    local_8._0_1_ = 0x47;
    FUN_0040eb60(&DAT_0071c968);
    local_8._0_1_ = 0x48;
    FUN_0040eb60(&DAT_0071c8cc);
    local_8._0_1_ = 0x49;
    FUN_0040eb60(L"elle");
    local_8._0_1_ = 0x4a;
    FUN_0040eb60(&DAT_0071c9d4);
    local_8._0_1_ = 0x4b;
    FUN_0040eb60(&DAT_0071c9dc);
    local_8._0_1_ = 0x4c;
    FUN_0040eb60(&DAT_0071c9e4);
    local_8._0_1_ = 0x4d;
    FUN_0040eb60(L"riana");
    local_8._0_1_ = 0x4e;
    FUN_0040eb60(L"rona");
    local_8 = CONCAT31(local_8._1_3_,0x4f);
    FUN_0040eb60(&DAT_0071ca04);
    _atexit((_func_4879 *)&LAB_006fb7f0);
  }
  if ((DAT_0076b9e8 & 0x40) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x40;
    local_8 = 0x50;
    FUN_0040eb60(&DAT_0071ca0c);
    local_8._0_1_ = 0x51;
    FUN_0040eb60(&DAT_0071ca14);
    local_8._0_1_ = 0x52;
    FUN_0040eb60(&DAT_0071ca1c);
    local_8._0_1_ = 0x53;
    FUN_0040eb60(L"Elan");
    local_8._0_1_ = 0x54;
    FUN_0040eb60(&DAT_0071ca30);
    local_8._0_1_ = 0x55;
    FUN_0040eb60(&DAT_0071ca38);
    local_8._0_1_ = 0x56;
    FUN_0040eb60(&DAT_0071ca40);
    local_8._0_1_ = 0x57;
    FUN_0040eb60(&DAT_0071ca44);
    local_8._0_1_ = 0x58;
    FUN_0040eb60(&DAT_0071ca4c);
    local_8 = CONCAT31(local_8._1_3_,0x59);
    FUN_0040eb60(&DAT_0071ca54);
    _atexit((_func_4879 *)&LAB_006fb5b0);
  }
  if (-1 < (char)DAT_0076b9e8) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x80;
    local_8 = 0x5a;
    FUN_0040eb60(&DAT_0071ca5c);
    local_8._0_1_ = 0x5b;
    FUN_0040eb60(&DAT_0071ca64);
    local_8._0_1_ = 0x5c;
    FUN_0040eb60(&DAT_0071ca6c);
    local_8._0_1_ = 0x5d;
    FUN_0040eb60(&DAT_0071ca74);
    local_8._0_1_ = 0x5e;
    FUN_0040eb60(&DAT_0071ca7c);
    local_8._0_1_ = 0x5f;
    FUN_0040eb60(L"sander");
    local_8._0_1_ = 0x60;
    FUN_0040eb60(L"reon");
    local_8._0_1_ = 0x61;
    FUN_0040eb60(L"reas");
    local_8._0_1_ = 0x62;
    FUN_0040eb60(L"lundra");
    local_8 = CONCAT31(local_8._1_3_,99);
    FUN_0040eb60(L"andor");
    _atexit((_func_4879 *)&LAB_006fb5d0);
  }
  if ((DAT_0076b9e8 & 0x100) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x100;
    local_8 = 100;
    FUN_0040eb60(&DAT_0071cab8);
    local_8._0_1_ = 0x65;
    FUN_0040eb60(&DAT_0071ca40);
    local_8._0_1_ = 0x66;
    FUN_0040eb60(&DAT_0071cac0);
    local_8._0_1_ = 0x67;
    FUN_0040eb60(&DAT_0071cac8);
    local_8._0_1_ = 0x68;
    FUN_0040eb60(&DAT_0071cad0);
    local_8._0_1_ = 0x69;
    FUN_0040eb60(&DAT_0071cad8);
    local_8._0_1_ = 0x6a;
    FUN_0040eb60(&DAT_0071cae0);
    local_8._0_1_ = 0x6b;
    FUN_0040eb60(L"Sira");
    local_8._0_1_ = 0x6c;
    FUN_0040eb60(&DAT_0071caf4);
    local_8 = CONCAT31(local_8._1_3_,0x6d);
    FUN_0040eb60(&DAT_0071ca14);
    _atexit((_func_4879 *)&LAB_006fb570);
  }
  if ((DAT_0076b9e8 & 0x200) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x200;
    local_8 = 0x6e;
    FUN_0040eb60(L"weya");
    local_8._0_1_ = 0x6f;
    FUN_0040eb60(L"luna");
    local_8._0_1_ = 0x70;
    FUN_0040eb60(L"laya");
    local_8._0_1_ = 0x71;
    FUN_0040eb60(L"leya");
    local_8._0_1_ = 0x72;
    FUN_0040eb60(&DAT_0071c9e4);
    local_8._0_1_ = 0x73;
    FUN_0040eb60(&DAT_0071cb2c);
    local_8._0_1_ = 0x74;
    FUN_0040eb60(L"matra");
    local_8._0_1_ = 0x75;
    FUN_0040eb60(&DAT_0071cb40);
    local_8._0_1_ = 0x76;
    FUN_0040eb60(L"zyna");
    local_8 = CONCAT31(local_8._1_3_,0x77);
    FUN_0040eb60(&DAT_0071cb54);
    _atexit((_func_4879 *)&LAB_006fb590);
  }
  if ((DAT_0076b9e8 & 0x400) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x400;
    local_8 = 0x78;
    FUN_0040eb60(&DAT_0071cb5c);
    local_8._0_1_ = 0x79;
    FUN_0040eb60(&DAT_0071cb64);
    local_8._0_1_ = 0x7a;
    FUN_0040eb60(&DAT_0071cb6c);
    local_8._0_1_ = 0x7b;
    FUN_0040eb60(&DAT_0071cb74);
    local_8._0_1_ = 0x7c;
    FUN_0040eb60(&DAT_0071cb7c);
    local_8._0_1_ = 0x7d;
    FUN_0040eb60(&DAT_0071cb84);
    local_8._0_1_ = 0x7e;
    FUN_0040eb60(&DAT_0071cb8c);
    local_8._0_1_ = 0x7f;
    FUN_0040eb60(&DAT_0071cb94);
    local_8._0_1_ = 0x80;
    FUN_0040eb60(L"Kubo");
    local_8 = CONCAT31(local_8._1_3_,0x81);
    FUN_0040eb60(&DAT_0071cba8);
    _atexit((_func_4879 *)&LAB_006fb790);
  }
  if ((DAT_0076b9e8 & 0x800) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x800;
    local_8 = 0x82;
    FUN_0040eb60(&DAT_0071ca6c);
    local_8._0_1_ = 0x83;
    FUN_0040eb60(&DAT_0071cbb0);
    local_8._0_1_ = 0x84;
    FUN_0040eb60(&DAT_0071cbb8);
    local_8._0_1_ = 0x85;
    FUN_0040eb60(&DAT_0071cbc0);
    local_8._0_1_ = 0x86;
    FUN_0040eb60(&DAT_0071cbc8);
    local_8._0_1_ = 0x87;
    FUN_0040eb60(&DAT_0071cbd0);
    local_8._0_1_ = 0x88;
    FUN_0040eb60(&DAT_0071cbd8);
    local_8._0_1_ = 0x89;
    FUN_0040eb60(&DAT_0071c7e0);
    local_8._0_1_ = 0x8a;
    FUN_0040eb60(&DAT_0071cbe0);
    local_8 = CONCAT31(local_8._1_3_,0x8b);
    FUN_0040eb60(&DAT_0071cbe8);
    _atexit((_func_4879 *)&LAB_006fb7b0);
  }
  if ((DAT_0076b9e8 & 0x1000) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x1000;
    local_8 = 0x8c;
    FUN_0040eb60(&DAT_0071c79c);
    local_8._0_1_ = 0x8d;
    FUN_0040eb60(&DAT_0071cb64);
    local_8._0_1_ = 0x8e;
    FUN_0040eb60(&DAT_0071cb84);
    local_8._0_1_ = 0x8f;
    FUN_0040eb60(&DAT_0071cbf0);
    local_8._0_1_ = 0x90;
    FUN_0040eb60(L"Zifa");
    local_8._0_1_ = 0x91;
    FUN_0040eb60(&DAT_0071cc04);
    local_8._0_1_ = 0x92;
    FUN_0040eb60(&DAT_0071cc0c);
    local_8._0_1_ = 0x93;
    FUN_0040eb60(&DAT_0071cc14);
    local_8._0_1_ = 0x94;
    FUN_0040eb60(&DAT_0071cc1c);
    local_8 = CONCAT31(local_8._1_3_,0x95);
    FUN_0040eb60(&DAT_0071cc24);
    _atexit((_func_4879 *)&LAB_006fb750);
  }
  if ((DAT_0076b9e8 & 0x2000) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x2000;
    local_8 = 0x96;
    FUN_0040eb60(&DAT_0071cc2c);
    local_8._0_1_ = 0x97;
    FUN_0040eb60(&DAT_0071cb2c);
    local_8._0_1_ = 0x98;
    FUN_0040eb60(&DAT_0071cc34);
    local_8._0_1_ = 0x99;
    FUN_0040eb60(&DAT_0071cc3c);
    local_8._0_1_ = 0x9a;
    FUN_0040eb60(&DAT_0071cb54);
    local_8._0_1_ = 0x9b;
    FUN_0040eb60(&DAT_0071cc44);
    local_8._0_1_ = 0x9c;
    FUN_0040eb60(L"bara");
    local_8._0_1_ = 0x9d;
    FUN_0040eb60(&DAT_0071c7e0);
    local_8._0_1_ = 0x9e;
    FUN_0040eb60(&DAT_0071cc58);
    local_8 = CONCAT31(local_8._1_3_,0x9f);
    FUN_0040eb60(&DAT_0071cc60);
    _atexit((_func_4879 *)&LAB_006fb770);
  }
  if ((DAT_0076b9e8 & 0x4000) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x4000;
    local_8 = 0xa0;
    FUN_0040eb60(&DAT_0071cc68);
    local_8._0_1_ = 0xa1;
    FUN_0040eb60(&DAT_0071cc70);
    local_8._0_1_ = 0xa2;
    FUN_0040eb60(&DAT_0071cc78);
    local_8._0_1_ = 0xa3;
    FUN_0040eb60(L"Kraz");
    local_8._0_1_ = 0xa4;
    FUN_0040eb60(&DAT_0071cc8c);
    local_8._0_1_ = 0xa5;
    FUN_0040eb60(L"Drak");
    local_8._0_1_ = 0xa6;
    FUN_0040eb60(&DAT_0071cca0);
    local_8._0_1_ = 0xa7;
    FUN_0040eb60(&DAT_0071cba8);
    local_8._0_1_ = 0xa8;
    FUN_0040eb60(&DAT_0071cca8);
    local_8 = CONCAT31(local_8._1_3_,0xa9);
    FUN_0040eb60(&DAT_0071ccb0);
    _atexit((_func_4879 *)&LAB_006fb890);
  }
  if ((DAT_0076b9e8 & 0x8000) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x8000;
    local_8 = 0xaa;
    FUN_0040eb60(&DAT_0071ccb8);
    local_8._0_1_ = 0xab;
    FUN_0040eb60(&DAT_0071c90c);
    local_8._0_1_ = 0xac;
    FUN_0040eb60(&DAT_0071ca6c);
    local_8._0_1_ = 0xad;
    FUN_0040eb60(&DAT_0071ccc0);
    local_8._0_1_ = 0xae;
    FUN_0040eb60(&DAT_0071ccc8);
    local_8._0_1_ = 0xaf;
    FUN_0040eb60(&DAT_0071c808);
    local_8._0_1_ = 0xb0;
    FUN_0040eb60(&DAT_0071ccd0);
    local_8._0_1_ = 0xb1;
    FUN_0040eb60(&DAT_0071ccd8);
    local_8._0_1_ = 0xb2;
    FUN_0040eb60(&DAT_0071cce0);
    local_8 = CONCAT31(local_8._1_3_,0xb3);
    FUN_0040eb60(&DAT_0071cce8);
    _atexit((_func_4879 *)&LAB_006fb8b0);
  }
  if ((DAT_0076b9e8 & 0x10000) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x10000;
    local_8 = 0xb4;
    FUN_0040eb60(&DAT_0071cc1c);
    local_8._0_1_ = 0xb5;
    FUN_0040eb60(&DAT_0071cc70);
    local_8._0_1_ = 0xb6;
    FUN_0040eb60(&DAT_0071ccf0);
    local_8._0_1_ = 0xb7;
    FUN_0040eb60(&DAT_0071cb84);
    local_8._0_1_ = 0xb8;
    FUN_0040eb60(&DAT_0071ccf8);
    local_8._0_1_ = 0xb9;
    FUN_0040eb60(L"Drak");
    local_8._0_1_ = 0xba;
    FUN_0040eb60(&DAT_0071ca14);
    local_8._0_1_ = 0xbb;
    FUN_0040eb60(&DAT_0071cd00);
    local_8._0_1_ = 0xbc;
    FUN_0040eb60(&DAT_0071cca8);
    local_8 = CONCAT31(local_8._1_3_,0xbd);
    FUN_0040eb60(&DAT_0071cd08);
    _atexit((_func_4879 *)&LAB_006fb850);
  }
  if ((DAT_0076b9e8 & 0x20000) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x20000;
    local_8 = 0xbe;
    FUN_0040eb60(&DAT_0071cd10);
    local_8._0_1_ = 0xbf;
    FUN_0040eb60(&DAT_0071cd18);
    local_8._0_1_ = 0xc0;
    FUN_0040eb60(&DAT_0071cd20);
    local_8._0_1_ = 0xc1;
    FUN_0040eb60(&DAT_0071cc44);
    local_8._0_1_ = 0xc2;
    FUN_0040eb60(&DAT_0071cd28);
    local_8._0_1_ = 0xc3;
    FUN_0040eb60(&DAT_0071cd30);
    local_8._0_1_ = 0xc4;
    FUN_0040eb60(L"maya");
    local_8._0_1_ = 0xc5;
    FUN_0040eb60(&DAT_0071cd44);
    local_8._0_1_ = 0xc6;
    FUN_0040eb60(&DAT_0071cc2c);
    local_8 = CONCAT31(local_8._1_3_,199);
    FUN_0040eb60(&DAT_0071cd4c);
    _atexit((_func_4879 *)&LAB_006fb870);
  }
  if ((DAT_0076b9e8 & 0x40000) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x40000;
    local_8 = 200;
    FUN_0040eb60(&DAT_0071cd54);
    local_8._0_1_ = 0xc9;
    FUN_0040eb60(&DAT_0071cd5c);
    local_8._0_1_ = 0xca;
    FUN_0040eb60(&DAT_0071cd64);
    local_8._0_1_ = 0xcb;
    FUN_0040eb60(&DAT_0071cd6c);
    local_8._0_1_ = 0xcc;
    FUN_0040eb60(&DAT_0071c78c);
    local_8._0_1_ = 0xcd;
    FUN_0040eb60(&DAT_0071cd74);
    local_8._0_1_ = 0xce;
    FUN_0040eb60(L"Arak");
    local_8._0_1_ = 0xcf;
    FUN_0040eb60(&DAT_0071cb6c);
    local_8._0_1_ = 0xd0;
    FUN_0040eb60(L"Grim");
    local_8 = CONCAT31(local_8._1_3_,0xd1);
    FUN_0040eb60(&DAT_0071cd94);
    _atexit((_func_4879 *)&LAB_006fb530);
  }
  if ((DAT_0076b9e8 & 0x80000) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x80000;
    local_8 = 0xd2;
    FUN_0040eb60(&DAT_0071cd9c);
    local_8._0_1_ = 0xd3;
    FUN_0040eb60(L"bart");
    local_8._0_1_ = 0xd4;
    FUN_0040eb60(&DAT_0071c808);
    local_8._0_1_ = 0xd5;
    FUN_0040eb60(L"thos");
    local_8._0_1_ = 0xd6;
    FUN_0040eb60(&DAT_0071ca64);
    local_8._0_1_ = 0xd7;
    FUN_0040eb60(&DAT_0071cdbc);
    local_8._0_1_ = 0xd8;
    FUN_0040eb60(L"thor");
    local_8._0_1_ = 0xd9;
    FUN_0040eb60(&DAT_0071cdd0);
    local_8._0_1_ = 0xda;
    FUN_0040eb60(&DAT_0071cdd8);
    local_8 = CONCAT31(local_8._1_3_,0xdb);
    FUN_0040eb60(&DAT_0071cde0);
    _atexit((_func_4879 *)&LAB_006fb550);
  }
  if ((DAT_0076b9e8 & 0x100000) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x100000;
    local_8 = 0xdc;
    FUN_0040eb60(&DAT_0071cde8);
    local_8._0_1_ = 0xdd;
    FUN_0040eb60(L"Grun");
    local_8._0_1_ = 0xde;
    FUN_0040eb60(L"Brun");
    local_8._0_1_ = 0xdf;
    FUN_0040eb60(&DAT_0071ce08);
    local_8._0_1_ = 0xe0;
    FUN_0040eb60(&DAT_0071ce10);
    local_8._0_1_ = 0xe1;
    FUN_0040eb60(&DAT_0071ce18);
    local_8._0_1_ = 0xe2;
    FUN_0040eb60(&DAT_0071cb6c);
    local_8._0_1_ = 0xe3;
    FUN_0040eb60(&DAT_0071ce20);
    local_8._0_1_ = 0xe4;
    FUN_0040eb60(L"Grim");
    local_8 = CONCAT31(local_8._1_3_,0xe5);
    FUN_0040eb60(&DAT_0071cd94);
    _atexit((_func_4879 *)&LAB_006fb4f0);
  }
  if ((DAT_0076b9e8 & 0x200000) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x200000;
    local_8 = 0xe6;
    FUN_0040eb60(&DAT_0071ce28);
    local_8._0_1_ = 0xe7;
    FUN_0040eb60(L"hild");
    local_8._0_1_ = 0xe8;
    FUN_0040eb60(&DAT_0071ce3c);
    local_8._0_1_ = 0xe9;
    FUN_0040eb60(L"muna");
    local_8._0_1_ = 0xea;
    FUN_0040eb60(&DAT_0071cc44);
    local_8._0_1_ = 0xeb;
    FUN_0040eb60(L"trud");
    local_8._0_1_ = 0xec;
    FUN_0040eb60(&DAT_0071ce5c);
    local_8._0_1_ = 0xed;
    FUN_0040eb60(&DAT_0071ce64);
    local_8._0_1_ = 0xee;
    FUN_0040eb60(&DAT_0071cd30);
    local_8 = CONCAT31(local_8._1_3_,0xef);
    FUN_0040eb60(&DAT_0071ce6c);
    _atexit((_func_4879 *)&LAB_006fb510);
  }
  if ((DAT_0076b9e8 & 0x400000) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x400000;
    local_8 = 0xf0;
    FUN_0040eb60(&DAT_0071ce74);
    local_8._0_1_ = 0xf1;
    FUN_0040eb60(&DAT_0071cb6c);
    local_8._0_1_ = 0xf2;
    FUN_0040eb60(&DAT_0071cb7c);
    local_8._0_1_ = 0xf3;
    FUN_0040eb60(&DAT_0071ce7c);
    local_8._0_1_ = 0xf4;
    FUN_0040eb60(&DAT_0071ce84);
    local_8._0_1_ = 0xf5;
    FUN_0040eb60(&DAT_0071ce8c);
    local_8._0_1_ = 0xf6;
    FUN_0040eb60(&DAT_0071ce94);
    local_8._0_1_ = 0xf7;
    FUN_0040eb60(&DAT_0071cb6c);
    local_8._0_1_ = 0xf8;
    FUN_0040eb60(&DAT_0071ce9c);
    local_8 = CONCAT31(local_8._1_3_,0xf9);
    FUN_0040eb60(&DAT_0071cea4);
    _atexit((_func_4879 *)&LAB_006fb910);
  }
  if ((DAT_0076b9e8 & 0x800000) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x800000;
    local_8 = 0xfa;
    FUN_0040eb60(&DAT_0071ceac);
    local_8._0_1_ = 0xfb;
    FUN_0040eb60(&DAT_0071cbc8);
    local_8._0_1_ = 0xfc;
    FUN_0040eb60(&DAT_0071ceb4);
    local_8._0_1_ = 0xfd;
    FUN_0040eb60(L"thak");
    local_8._0_1_ = 0xfe;
    FUN_0040eb60(&DAT_0071cec8);
    local_8 = CONCAT31(local_8._1_3_,0xff);
    FUN_0040eb60(&DAT_0071ced0);
    local_8 = 0x100;
    FUN_0040eb60(L"rorok");
    local_8._0_1_ = 1;
    FUN_0040eb60(L"chak");
    local_8._0_1_ = 2;
    FUN_0040eb60(&DAT_0071cef0);
    local_8 = CONCAT31(local_8._1_3_,3);
    FUN_0040eb60(L"rack");
    _atexit((_func_4879 *)&LAB_006fb930);
  }
  if ((DAT_0076b9e8 & 0x1000000) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x1000000;
    local_8 = 0x104;
    FUN_0040eb60(&DAT_0071ce74);
    local_8._0_1_ = 5;
    FUN_0040eb60(&DAT_0071cb6c);
    local_8._0_1_ = 6;
    FUN_0040eb60(&DAT_0071cb7c);
    local_8._0_1_ = 7;
    FUN_0040eb60(&DAT_0071ce7c);
    local_8._0_1_ = 8;
    FUN_0040eb60(&DAT_0071ce84);
    local_8._0_1_ = 9;
    FUN_0040eb60(&DAT_0071ce8c);
    local_8._0_1_ = 10;
    FUN_0040eb60(&DAT_0071ce94);
    local_8._0_1_ = 0xb;
    FUN_0040eb60(&DAT_0071cb6c);
    local_8._0_1_ = 0xc;
    FUN_0040eb60(&DAT_0071ce9c);
    local_8 = CONCAT31(local_8._1_3_,0xd);
    FUN_0040eb60(&DAT_0071cea4);
    _atexit((_func_4879 *)&LAB_006fb8d0);
  }
  if ((DAT_0076b9e8 & 0x2000000) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x2000000;
    local_8 = 0x10e;
    FUN_0040eb60(&DAT_0071c8b0);
    local_8._0_1_ = 0xf;
    FUN_0040eb60(&DAT_0071cf04);
    local_8._0_1_ = 0x10;
    FUN_0040eb60(&DAT_0071cf0c);
    local_8._0_1_ = 0x11;
    FUN_0040eb60(L"thara");
    local_8._0_1_ = 0x12;
    FUN_0040eb60(L"daka");
    local_8._0_1_ = 0x13;
    FUN_0040eb60(&DAT_0071cf2c);
    local_8._0_1_ = 0x14;
    FUN_0040eb60(L"rorah");
    local_8._0_1_ = 0x15;
    FUN_0040eb60(L"chaka");
    local_8._0_1_ = 0x16;
    FUN_0040eb60(L"kaya");
    local_8 = CONCAT31(local_8._1_3_,0x17);
    FUN_0040eb60(L"rana");
    _atexit((_func_4879 *)&LAB_006fb8f0);
  }
  if ((DAT_0076b9e8 & 0x4000000) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x4000000;
    local_8 = 0x118;
    FUN_0040eb60(&DAT_0071cb7c);
    local_8._0_1_ = 0x19;
    FUN_0040eb60(&DAT_0071cf64);
    local_8._0_1_ = 0x1a;
    FUN_0040eb60(&DAT_0071cf6c);
    local_8._0_1_ = 0x1b;
    FUN_0040eb60(&DAT_0071cf74);
    local_8._0_1_ = 0x1c;
    FUN_0040eb60(&DAT_0071ce84);
    local_8._0_1_ = 0x1d;
    FUN_0040eb60(&DAT_0071cf7c);
    local_8._0_1_ = 0x1e;
    FUN_0040eb60(&DAT_0071cf84);
    local_8._0_1_ = 0x1f;
    FUN_0040eb60(&DAT_0071cf8c);
    local_8._0_1_ = 0x20;
    FUN_0040eb60(&DAT_0071cf94);
    local_8 = CONCAT31(local_8._1_3_,0x21);
    FUN_0040eb60(&DAT_0071c830);
    _atexit((_func_4879 *)&LAB_006fb9b0);
  }
  if ((DAT_0076b9e8 & 0x8000000) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x8000000;
    local_8 = 0x122;
    FUN_0040eb60(&DAT_0071cf9c);
    local_8._0_1_ = 0x23;
    FUN_0040eb60(&DAT_0071c808);
    local_8._0_1_ = 0x24;
    FUN_0040eb60(L"card");
    local_8._0_1_ = 0x25;
    FUN_0040eb60(L"morius");
    local_8._0_1_ = 0x26;
    FUN_0040eb60(L"enius");
    local_8._0_1_ = 0x27;
    FUN_0040eb60(&DAT_0071cfcc);
    local_8._0_1_ = 0x28;
    FUN_0040eb60(L"demar");
    local_8._0_1_ = 0x29;
    FUN_0040eb60(&DAT_0071cfe0);
    local_8._0_1_ = 0x2a;
    FUN_0040eb60(L"ruul");
    local_8 = CONCAT31(local_8._1_3_,0x2b);
    FUN_0040eb60(&DAT_0071cff4);
    _atexit((_func_4879 *)&LAB_006fb9d0);
  }
  if ((DAT_0076b9e8 & 0x10000000) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x10000000;
    local_8 = 300;
    FUN_0040eb60(&DAT_0071cffc);
    local_8._0_1_ = 0x2d;
    FUN_0040eb60(&DAT_0071cf94);
    local_8._0_1_ = 0x2e;
    FUN_0040eb60(&DAT_0071cf6c);
    local_8._0_1_ = 0x2f;
    FUN_0040eb60(&DAT_0071cf74);
    local_8._0_1_ = 0x30;
    FUN_0040eb60(&DAT_0071ce84);
    local_8._0_1_ = 0x31;
    FUN_0040eb60(&DAT_0071d004);
    local_8._0_1_ = 0x32;
    FUN_0040eb60(&DAT_0071d00c);
    local_8._0_1_ = 0x33;
    FUN_0040eb60(&DAT_0071cf8c);
    local_8._0_1_ = 0x34;
    FUN_0040eb60(&DAT_0071ca1c);
    local_8 = CONCAT31(local_8._1_3_,0x35);
    FUN_0040eb60(&DAT_0071d014);
    _atexit((_func_4879 *)&LAB_006fb970);
  }
  if ((DAT_0076b9e8 & 0x20000000) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x20000000;
    local_8 = 0x136;
    FUN_0040eb60(&DAT_0071c7e8);
    local_8._0_1_ = 0x37;
    FUN_0040eb60(L"kira");
    local_8._0_1_ = 0x38;
    FUN_0040eb60(L"cara");
    local_8._0_1_ = 0x39;
    FUN_0040eb60(L"moria");
    local_8._0_1_ = 0x3a;
    FUN_0040eb60(&DAT_0071d040);
    local_8._0_1_ = 0x3b;
    FUN_0040eb60(L"tana");
    local_8._0_1_ = 0x3c;
    FUN_0040eb60(L"diria");
    local_8._0_1_ = 0x3d;
    FUN_0040eb60(L"laza");
    local_8._0_1_ = 0x3e;
    FUN_0040eb60(&DAT_0071c9c0);
    local_8 = CONCAT31(local_8._1_3_,0x3f);
    FUN_0040eb60(L"zazah");
    _atexit((_func_4879 *)&LAB_006fb990);
  }
  if ((DAT_0076b9e8 & 0x40000000) == 0) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x40000000;
    local_8 = 0x140;
    FUN_0040eb60(&DAT_0071d078);
    local_8._0_1_ = 0x41;
    FUN_0040eb60(&DAT_0071d080);
    local_8._0_1_ = 0x42;
    FUN_0040eb60(L"Quib");
    local_8._0_1_ = 0x43;
    FUN_0040eb60(&DAT_0071d094);
    local_8._0_1_ = 0x44;
    FUN_0040eb60(&DAT_0071d09c);
    local_8._0_1_ = 0x45;
    FUN_0040eb60(&DAT_0071d0a4);
    local_8._0_1_ = 0x46;
    FUN_0040eb60(&DAT_0071d0ac);
    local_8._0_1_ = 0x47;
    FUN_0040eb60(L"Moko");
    local_8._0_1_ = 0x48;
    FUN_0040eb60(&DAT_0071d0c0);
    local_8 = CONCAT31(local_8._1_3_,0x49);
    FUN_0040eb60(&DAT_0071d0c8);
    _atexit((_func_4879 *)&LAB_006fb710);
  }
  if (-1 < (int)DAT_0076b9e8) {
    DAT_0076b9e8 = DAT_0076b9e8 | 0x80000000;
    local_8 = 0x14a;
    FUN_0040eb60(&DAT_0071d0d0);
    local_8._0_1_ = 0x4b;
    FUN_0040eb60(&DAT_0071d0d8);
    local_8._0_1_ = 0x4c;
    FUN_0040eb60(&DAT_0071d0e0);
    local_8._0_1_ = 0x4d;
    FUN_0040eb60(&DAT_0071d0e8);
    local_8._0_1_ = 0x4e;
    FUN_0040eb60(&DAT_0071d0f0);
    local_8._0_1_ = 0x4f;
    FUN_0040eb60(&DAT_0071d0f8);
    local_8._0_1_ = 0x50;
    FUN_0040eb60(&DAT_0071d100);
    local_8._0_1_ = 0x51;
    FUN_0040eb60(&DAT_0071d108);
    local_8._0_1_ = 0x52;
    FUN_0040eb60(&DAT_0071d110);
    local_8 = CONCAT31(local_8._1_3_,0x53);
    FUN_0040eb60(&DAT_0071d118);
    _atexit((_func_4879 *)&LAB_006fb730);
  }
  if ((DAT_0076d8e0 & 1) == 0) {
    DAT_0076d8e0 = DAT_0076d8e0 | 1;
    local_8 = 0x154;
    FUN_0040eb60(&DAT_0071d078);
    local_8._0_1_ = 0x55;
    FUN_0040eb60(&DAT_0071d080);
    local_8._0_1_ = 0x56;
    FUN_0040eb60(L"Quib");
    local_8._0_1_ = 0x57;
    FUN_0040eb60(&DAT_0071d094);
    local_8._0_1_ = 0x58;
    FUN_0040eb60(&DAT_0071d09c);
    local_8._0_1_ = 0x59;
    FUN_0040eb60(&DAT_0071d0a4);
    local_8._0_1_ = 0x5a;
    FUN_0040eb60(&DAT_0071d0ac);
    local_8._0_1_ = 0x5b;
    FUN_0040eb60(L"Moko");
    local_8._0_1_ = 0x5c;
    FUN_0040eb60(&DAT_0071d0c0);
    local_8 = CONCAT31(local_8._1_3_,0x5d);
    FUN_0040eb60(&DAT_0071d0c8);
    _atexit((_func_4879 *)&LAB_006fb6d0);
  }
  if ((DAT_0076d8e0 & 2) == 0) {
    DAT_0076d8e0 = DAT_0076d8e0 | 2;
    local_8 = 0x15e;
    FUN_0040eb60(&DAT_0071c8cc);
    local_8._0_1_ = 0x5f;
    FUN_0040eb60(&DAT_0071d120);
    local_8._0_1_ = 0x60;
    FUN_0040eb60(&DAT_0071d128);
    local_8._0_1_ = 0x61;
    FUN_0040eb60(&DAT_0071d120);
    local_8._0_1_ = 0x62;
    FUN_0040eb60(L"waka");
    local_8._0_1_ = 99;
    FUN_0040eb60(L"woka");
    local_8._0_1_ = 100;
    FUN_0040eb60(L"wibba");
    local_8._0_1_ = 0x65;
    FUN_0040eb60(&DAT_0071d154);
    local_8._0_1_ = 0x66;
    FUN_0040eb60(L"maya");
    local_8 = CONCAT31(local_8._1_3_,0x67);
    FUN_0040eb60(&DAT_0071cc3c);
    _atexit((_func_4879 *)&LAB_006fb6f0);
  }
  uVar6 = 0;
  local_8 = 0x168;
  switch(param_3) {
  case 0:
    puVar4 = &DAT_0076c080 + ((param_2 * 7 + param_2 / 10) % 10) * 0x18;
    puVar2 = &DAT_0076bf90 + ((param_2 / 7 + param_2 * 0xd) % 10) * 0x18;
    break;
  case 1:
    puVar4 = &DAT_0076c260 + ((param_2 * 7 + param_2 / 10) % 10) * 0x18;
    puVar2 = &DAT_0076c170 + ((param_2 / 7 + param_2 * 0xd) % 10) * 0x18;
    break;
  case 2:
  case 0x12:
  case 0x2b:
  case 0x53:
    puVar4 = &DAT_0076bcc0 + ((param_2 * 7 + param_2 / 10) % 10) * 0x18;
    puVar2 = &DAT_0076bbd0 + ((param_2 / 7 + param_2 * 0xd) % 10) * 0x18;
    goto LAB_005a3505;
  case 3:
  case 0x2d:
  case 0x54:
    puVar4 = &DAT_0076bea0 + ((param_2 * 7 + param_2 / 10) % 10) * 0x18;
    puVar2 = &DAT_0076bdb0 + ((param_2 / 7 + param_2 * 0xd) % 10) * 0x18;
    break;
  case 4:
    puVar4 = &DAT_0076c440 + ((param_2 * 7 + param_2 / 10) % 10) * 0x18;
    puVar2 = &DAT_0076c350 + ((param_2 / 7 + param_2 * 0xd) % 10) * 0x18;
    break;
  case 5:
    puVar4 = &DAT_0076c620 + ((param_2 * 7 + param_2 / 10) % 10) * 0x18;
    puVar2 = &DAT_0076c530 + ((param_2 / 7 + param_2 * 0xd) % 10) * 0x18;
    break;
  default:
    puVar4 = &DAT_0076b9f0 + ((param_2 * 7 + param_2 / 10) % 0x14) * 0x18;
    puVar2 = &DAT_0076b808 + ((param_2 / 7 + param_2 * 0xd) % 0x14) * 0x18;
LAB_005a3505:
    FUN_0058d7a0(param_1,puVar2,puVar4);
    uVar3 = extraout_EDX_00;
    goto LAB_005a350f;
  case 7:
    puVar4 = &DAT_0076c800 + ((param_2 * 7 + param_2 / 10) % 10) * 0x18;
    puVar2 = &DAT_0076c710 + ((param_2 / 7 + param_2 * 0xd) % 10) * 0x18;
    break;
  case 8:
    puVar4 = &DAT_0076c9e0 + ((param_2 * 7 + param_2 / 10) % 10) * 0x18;
    puVar2 = &DAT_0076c8f0 + ((param_2 / 7 + param_2 * 0xd) % 10) * 0x18;
    break;
  case 9:
    puVar4 = &DAT_0076cbc0 + ((param_2 * 7 + param_2 / 10) % 10) * 0x18;
    puVar2 = &DAT_0076cad0 + ((param_2 / 7 + param_2 * 0xd) % 10) * 0x18;
    break;
  case 10:
    puVar4 = &DAT_0076cda0 + ((param_2 * 7 + param_2 / 10) % 10) * 0x18;
    puVar2 = &DAT_0076ccb0 + ((param_2 / 7 + param_2 * 0xd) % 10) * 0x18;
    break;
  case 0xb:
    puVar4 = &DAT_0076cf80 + ((param_2 * 7 + param_2 / 10) % 10) * 0x18;
    puVar2 = &DAT_0076ce90 + ((param_2 / 7 + param_2 * 0xd) % 10) * 0x18;
    break;
  case 0xc:
    puVar4 = &DAT_0076d160 + ((param_2 * 7 + param_2 / 10) % 10) * 0x18;
    puVar2 = &DAT_0076d070 + ((param_2 / 7 + param_2 * 0xd) % 10) * 0x18;
    break;
  case 0xd:
    puVar4 = &DAT_0076d700 + ((param_2 * 7 + param_2 / 10) % 10) * 0x18;
    puVar2 = &DAT_0076d610 + ((param_2 / 7 + param_2 * 0xd) % 10) * 0x18;
    break;
  case 0xe:
    puVar4 = &DAT_0076d8e8 + ((param_2 * 7 + param_2 / 10) % 10) * 0x18;
    puVar2 = &DAT_0076d7f0 + ((param_2 / 7 + param_2 * 0xd) % 10) * 0x18;
    break;
  case 0xf:
    puVar4 = &DAT_0076d340 + ((param_2 * 7 + param_2 / 10) % 10) * 0x18;
    puVar2 = &DAT_0076d250 + ((param_2 / 7 + param_2 * 0xd) % 10) * 0x18;
    break;
  case 0x10:
    puVar4 = &DAT_0076d520 + ((param_2 * 7 + param_2 / 10) % 10) * 0x18;
    puVar2 = &DAT_0076d430 + ((param_2 / 7 + param_2 * 0xd) % 10) * 0x18;
  }
  FUN_0058d7a0(param_1,puVar2,puVar4);
  FUN_00593e50();
  uVar3 = extraout_EDX;
LAB_005a350f:
  ExceptionList = local_10;
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc,uVar3,uVar5,uVar6);
  return;
}


/* FUN_005a5240 @ 005a5240  kind=gamemisc  attributed-by=none  size=156 */

undefined2 * FUN_005a5240(undefined2 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  local_8 = 0;
  local_10 = param_2;
  local_c = param_3;
  iVar3 = FUN_00594890(&local_10);
  iVar1 = *(int *)(in_ECX + 0x800124);
  iVar2 = iVar1;
  if (((iVar3 != iVar1) && (*(int *)(iVar3 + 0x10) <= param_2)) &&
     ((*(int *)(iVar3 + 0x10) < param_2 || (*(int *)(iVar3 + 0x14) <= param_3)))) {
    iVar2 = iVar3;
  }
  param_2 = iVar2;
  if (param_2 != iVar1) {
    *(undefined4 *)(param_1 + 10) = 7;
    *(undefined4 *)(param_1 + 8) = 0;
    *param_1 = 0;
    FUN_0040f680(param_2 + 0x18,0,0xffffffff);
    return param_1;
  }
  FUN_0040eb60(&PTR_006fccac);
  return param_1;
}


/* FUN_005a6c30 @ 005a6c30  kind=gamemisc  attributed-by=none  size=41 */

int FUN_005a6c30(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_005a7b90();
  *(undefined2 *)(iVar1 + 0xc) = 0;
  if (iVar1 != -0x10) {
    FUN_005a6a00(param_1,0);
  }
  return iVar1;
}


/* FUN_005a7090 @ 005a7090  kind=gamemisc  attributed-by=none  size=511 */

void FUN_005a7090(undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *in_ECX;
  int *piVar6;
  int *piVar7;
  
  if (0x9249247 < (uint)in_ECX[1]) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("map/set<T> too long");
  }
  piVar3 = (int *)FUN_005a6ba0(param_4);
  in_ECX[1] = in_ECX[1] + 1;
  piVar3[1] = (int)param_3;
  if (param_3 == (undefined4 *)*in_ECX) {
    ((undefined4 *)*in_ECX)[1] = piVar3;
    *(int **)*in_ECX = piVar3;
    iVar4 = *in_ECX;
  }
  else {
    if (param_2 != '\0') {
      *param_3 = piVar3;
      if (param_3 == *(undefined4 **)*in_ECX) {
        *(int **)*in_ECX = piVar3;
      }
      goto LAB_005a70ee;
    }
    param_3[2] = piVar3;
    iVar4 = *in_ECX;
    if (param_3 != *(undefined4 **)(iVar4 + 8)) goto LAB_005a70ee;
  }
  *(int **)(iVar4 + 8) = piVar3;
LAB_005a70ee:
  cVar1 = *(char *)(piVar3[1] + 0xc);
  piVar5 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*in_ECX + 4) + 0xc) = 1;
      *param_1 = piVar3;
      return;
    }
    piVar7 = (int *)piVar5[1];
    piVar6 = *(int **)piVar7[1];
    if (piVar7 == piVar6) {
      piVar6 = (int *)((undefined4 *)piVar7[1])[2];
      if ((char)piVar6[3] != '\0') {
        if (piVar5 == (int *)piVar7[2]) {
          piVar5 = (int *)piVar7[2];
          piVar7[2] = *piVar5;
          if (*(char *)(*piVar5 + 0xd) == '\0') {
            *(int **)(*piVar5 + 4) = piVar7;
          }
          piVar5[1] = piVar7[1];
          if (piVar7 == *(int **)(*in_ECX + 4)) {
            *(int **)(*in_ECX + 4) = piVar5;
          }
          else {
            piVar6 = (int *)piVar7[1];
            if (piVar7 == (int *)*piVar6) {
              *piVar6 = (int)piVar5;
            }
            else {
              piVar6[2] = (int)piVar5;
            }
          }
          *piVar5 = (int)piVar7;
          piVar7[1] = (int)piVar5;
          piVar5 = piVar7;
        }
        *(undefined1 *)(piVar5[1] + 0xc) = 1;
        *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
        piVar7 = *(int **)(piVar5[1] + 4);
        piVar6 = (int *)*piVar7;
        *piVar7 = piVar6[2];
        if (*(char *)(piVar6[2] + 0xd) == '\0') {
          *(int **)(piVar6[2] + 4) = piVar7;
        }
        piVar6[1] = piVar7[1];
        if (piVar7 == *(int **)(*in_ECX + 4)) {
          *(int **)(*in_ECX + 4) = piVar6;
          piVar6[2] = (int)piVar7;
        }
        else {
          piVar2 = (int *)piVar7[1];
          if (piVar7 == (int *)piVar2[2]) {
            piVar2[2] = (int)piVar6;
            piVar6[2] = (int)piVar7;
          }
          else {
            *piVar2 = (int)piVar6;
            piVar6[2] = (int)piVar7;
          }
        }
        goto LAB_005a726a;
      }
LAB_005a71c1:
      *(undefined1 *)(piVar7 + 3) = 1;
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
      piVar5 = *(int **)(piVar5[1] + 4);
    }
    else {
      if ((char)piVar6[3] == '\0') goto LAB_005a71c1;
      if (piVar5 == (int *)*piVar7) {
        iVar4 = *piVar7;
        *piVar7 = *(int *)(iVar4 + 8);
        if (*(char *)(*(int *)(iVar4 + 8) + 0xd) == '\0') {
          *(int **)(*(int *)(iVar4 + 8) + 4) = piVar7;
        }
        *(int *)(iVar4 + 4) = piVar7[1];
        if (piVar7 == *(int **)(*in_ECX + 4)) {
          *(int *)(*in_ECX + 4) = iVar4;
        }
        else {
          piVar5 = (int *)piVar7[1];
          if (piVar7 == (int *)piVar5[2]) {
            piVar5[2] = iVar4;
          }
          else {
            *piVar5 = iVar4;
          }
        }
        *(int **)(iVar4 + 8) = piVar7;
        piVar7[1] = iVar4;
        piVar5 = piVar7;
      }
      *(undefined1 *)(piVar5[1] + 0xc) = 1;
      *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
      piVar7 = *(int **)(piVar5[1] + 4);
      piVar6 = (int *)piVar7[2];
      piVar7[2] = *piVar6;
      if (*(char *)(*piVar6 + 0xd) == '\0') {
        *(int **)(*piVar6 + 4) = piVar7;
      }
      piVar6[1] = piVar7[1];
      if (piVar7 == *(int **)(*in_ECX + 4)) {
        *(int **)(*in_ECX + 4) = piVar6;
      }
      else {
        piVar2 = (int *)piVar7[1];
        if (piVar7 == (int *)*piVar2) {
          *piVar2 = (int)piVar6;
        }
        else {
          piVar2[2] = (int)piVar6;
        }
      }
      *piVar6 = (int)piVar7;
LAB_005a726a:
      piVar7[1] = (int)piVar6;
    }
    cVar1 = *(char *)(piVar5[1] + 0xc);
  } while( true );
}


/* FUN_005a7700 @ 005a7700  kind=gamemisc  attributed-by=none  size=400 */

void FUN_005a7700(undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 *in_ECX;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  char cVar9;
  undefined4 *puVar10;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f34e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)*in_ECX;
  cVar9 = '\x01';
  local_8 = 0;
  piVar8 = piVar1;
  if (*(char *)(piVar1[1] + 0xd) == '\0') {
    piVar2 = (int *)param_3[1];
    piVar5 = (int *)piVar1[1];
    do {
      piVar8 = piVar5;
      piVar5 = (int *)piVar8[5];
      if (param_2 == '\0') {
        piVar7 = (int *)piVar8[4];
        for (piVar6 = (int *)*param_3; piVar6 != piVar2; piVar6 = piVar6 + 1) {
          if (piVar7 == piVar5) {
            if (piVar6 != piVar2) goto LAB_005a77d8;
            break;
          }
          if (*piVar6 < *piVar7) goto LAB_005a77d4;
          if (*piVar7 < *piVar6) goto LAB_005a77d8;
          piVar7 = piVar7 + 1;
        }
        if (piVar7 == piVar5) {
LAB_005a77d8:
          cVar9 = '\0';
        }
        else {
LAB_005a77d4:
          cVar9 = '\x01';
        }
      }
      else {
        piVar6 = (int *)*param_3;
        for (piVar7 = (int *)piVar8[4]; piVar7 != piVar5; piVar7 = piVar7 + 1) {
          if (piVar6 == piVar2) {
            if (piVar7 != piVar5) goto LAB_005a77a0;
            break;
          }
          if (*piVar7 < *piVar6) goto LAB_005a7797;
          if (*piVar6 < *piVar7) goto LAB_005a77a0;
          piVar6 = piVar6 + 1;
        }
        if (piVar6 == piVar2) {
LAB_005a77a0:
          cVar9 = '\x01';
        }
        else {
LAB_005a7797:
          cVar9 = '\0';
        }
      }
      if (cVar9 == '\0') {
        piVar5 = (int *)piVar8[2];
      }
      else {
        piVar5 = (int *)*piVar8;
      }
    } while (*(char *)((int)piVar5 + 0xd) == '\0');
  }
  _param_2 = piVar8;
  if (cVar9 != '\0') {
    if (piVar8 == (int *)*piVar1) {
      puVar4 = (undefined4 *)&param_2;
      cVar9 = '\x01';
      puVar10 = param_3;
      goto LAB_005a781c;
    }
    FUN_0042c740();
  }
  puVar10 = param_3;
  piVar1 = _param_2;
  cVar3 = FUN_005a78a0(_param_2[4],_param_2[5],*param_3,param_3[1]);
  if (cVar3 == '\0') {
    *param_1 = piVar1;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
  puVar4 = &param_3;
LAB_005a781c:
  puVar4 = (undefined4 *)FUN_005a7090(puVar4,cVar9,piVar8,puVar10,param_4);
  *param_1 = *puVar4;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


/* FUN_005a7990 @ 005a7990  kind=gamemisc  attributed-by=none  size=143 */

void FUN_005a7990(int *param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f3500;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  cVar2 = FUN_0065ae10(param_1[1] - *param_1 >> 2);
  if (cVar2 != '\0') {
    local_8 = 0;
    uVar3 = FUN_0065a860(*piVar1,piVar1[1],*in_ECX,(int)&param_1 + 3,param_1);
    in_ECX[1] = uVar3;
  }
  ExceptionList = local_10;
  return;
}


/* FUN_005a7a70 @ 005a7a70  kind=gamemisc  attributed-by=none  size=212 */

void FUN_005a7a70(undefined4 *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  undefined1 local_3c [4];
  void *local_38 [9];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f3528;
  local_10 = ExceptionList;
  uVar2 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar2;
  iVar3 = FUN_005a7c10(param_1);
  if (iVar3 != *in_ECX) {
    cVar1 = FUN_005a78a0(*param_1,param_1[1],*(undefined4 *)(iVar3 + 0x10),
                         *(undefined4 *)(iVar3 + 0x14),uVar2);
    if (cVar1 == '\0') goto LAB_005a7b26;
  }
  FUN_005a7990(param_1);
  local_8 = 0;
  iVar4 = FUN_005a6c30(local_38);
  FUN_005a7290(local_3c,iVar3,iVar4 + 0x10,iVar4);
  if (local_38[0] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_38[0]);
  }
LAB_005a7b26:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005a7c90 @ 005a7c90  kind=gamemisc  attributed-by=none  size=445 */

void FUN_005a7c90(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_34;
  int local_2c [10];
  
  local_2c[9] = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  FUN_0042f040(local_2c,param_1 + 0x1428);
  FUN_0042f040(local_2c + 3,param_1 + 0x1440);
  puVar2 = *(undefined4 **)(param_1 + 0x1460);
  piVar1 = (int *)(param_1 + 0x1460);
  pvVar3 = (void *)*puVar2;
  *puVar2 = puVar2;
  *(int *)(*piVar1 + 4) = *piVar1;
  *(undefined4 *)(param_1 + 0x1464) = 0;
  if (pvVar3 != (void *)*piVar1) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar3);
  }
  local_2c[7] = local_2c[4];
  iVar5 = local_2c[3];
  iVar7 = local_2c[5];
  if (*(int *)(param_1 + 0x1408) != *(int *)(param_1 + 0x140c)) {
    puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x1408) + 0x10);
    local_2c[7] = puVar2[1];
    iVar5 = *puVar2;
    iVar7 = puVar2[2];
  }
  local_34 = local_2c[7];
  iVar6 = *(int *)*piVar1;
  local_2c[8] = iVar7;
  local_2c[6] = iVar5;
  iVar4 = FUN_005a6b60(iVar6,*(undefined4 *)(iVar6 + 4),local_2c + 6);
  if (*(int *)(param_1 + 0x1464) == 0xccccccb) {
LAB_005a7d65:
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)(param_1 + 0x1464) = *(int *)(param_1 + 0x1464) + 1;
  *(int *)(iVar6 + 4) = iVar4;
  **(int **)(iVar4 + 4) = iVar4;
  iVar6 = 0;
  do {
    iVar4 = 0;
    while (*(int *)((int)local_2c + iVar4 + 0x18) == *(int *)((int)local_2c + iVar4)) {
      iVar4 = iVar4 + 4;
      if (0xb < iVar4) goto LAB_005a7d95;
    }
    if (*(int *)(param_1 + 0x1410) < iVar6) {
LAB_005a7d95:
      __security_check_cookie(local_2c[9] ^ (uint)&stack0xfffffffc);
      return;
    }
    iVar6 = iVar6 + 1;
    iVar5 = FUN_005a9da0(iVar5,local_34,iVar7);
    if (iVar5 == 0) goto LAB_005a7d95;
    iVar7 = *(undefined4 *)(iVar5 + 0x14);
    local_2c[3] = *(undefined4 *)(iVar5 + 0xc);
    local_2c[4] = *(undefined4 *)(iVar5 + 0x10);
    local_2c[5] = iVar7;
    iVar4 = 0;
    while (*(int *)((int)local_2c + iVar4 + 0x18) == *(int *)((int)local_2c + iVar4 + 0xc)) {
      iVar4 = iVar4 + 4;
      if (0xb < iVar4) {
        __security_check_cookie(local_2c[9] ^ (uint)&stack0xfffffffc);
        return;
      }
    }
    iVar4 = *(int *)*piVar1;
    local_2c[8] = iVar7;
    local_2c[6] = *(undefined4 *)(iVar5 + 0xc);
    local_2c[7] = *(undefined4 *)(iVar5 + 0x10);
    iVar5 = FUN_005a6b60(iVar4,*(undefined4 *)(iVar4 + 4),local_2c + 3);
    if (*(int *)(param_1 + 0x1464) == 0xccccccb) goto LAB_005a7d65;
    *(int *)(param_1 + 0x1464) = *(int *)(param_1 + 0x1464) + 1;
    *(int *)(iVar4 + 4) = iVar5;
    **(int **)(iVar5 + 4) = iVar5;
    local_34 = local_2c[7];
    iVar5 = local_2c[6];
  } while( true );
}


/* FUN_005a9da0 @ 005a9da0  kind=gamemisc  attributed-by=none  size=143 */

void FUN_005a9da0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  int in_ECX;
  undefined4 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = (undefined4 *)0x0;
  local_c = 0;
  local_8 = 0;
  FUN_0040d9d0(3);
  puVar2 = local_10;
  *local_10 = param_1;
  local_10[1] = param_2;
  local_10[2] = param_3;
  param_1 = FUN_005a7c10(&local_10);
  iVar1 = *(int *)(in_ECX + 0x140c);
  if (param_1 != iVar1) {
    cVar3 = FUN_005a78a0(puVar2,local_c,*(undefined4 *)(param_1 + 0x10),
                         *(undefined4 *)(param_1 + 0x14));
    if (cVar3 == '\0') goto LAB_005a9e15;
  }
  param_1 = iVar1;
LAB_005a9e15:
  if (param_1 == iVar1) {
                    /* WARNING: Subroutine does not return */
    operator_delete(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(puVar2);
}


/* FUN_005c3790 @ 005c3790  kind=gamemisc  attributed-by=none  size=60 */

undefined4 * FUN_005c3790(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
    }
    param_1 = param_1 + 3;
    param_3 = param_3 + 3;
  } while (param_1 != param_2);
  return param_3;
}


/* FUN_005c3ea0 @ 005c3ea0  kind=gamemisc  attributed-by=none  size=76 */

void FUN_005c3ea0(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *in_ECX;
  
  iVar2 = *in_ECX;
  if (*(char *)(iVar2 + 0xd) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0xd) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0xd);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0xd);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *in_ECX = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0xd);
    while ((cVar1 == '\0' && (*in_ECX == *(int *)(iVar2 + 8)))) {
      *in_ECX = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0xd);
    }
    *in_ECX = iVar2;
  }
  return;
}


/* FUN_005fb9f0 @ 005fb9f0  kind=gamemisc  attributed-by=none  size=175 */

void FUN_005fb9f0(undefined4 *param_1)

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
  *(undefined1 *)(in_ECX + 0x10) = *(undefined1 *)(param_1 + 0x10);
  *(undefined1 *)((int)in_ECX + 0x41) = *(undefined1 *)((int)param_1 + 0x41);
  in_ECX[0x11] = param_1[0x11];
  in_ECX[0x12] = param_1[0x12];
  in_ECX[0x13] = param_1[0x13];
  in_ECX[0x14] = param_1[0x14];
  in_ECX[0x15] = param_1[0x15];
  in_ECX[0x16] = param_1[0x16];
  *(undefined1 *)(in_ECX + 0x17) = *(undefined1 *)(param_1 + 0x17);
  in_ECX[0x18] = param_1[0x18];
  in_ECX[0x19] = param_1[0x19];
  return;
}


/* FUN_005fbb30 @ 005fbb30  kind=gamemisc  attributed-by=none  size=186 */

void FUN_005fbb30(uint param_1)

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
  puStack_c = &LAB_006f4a30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar3 = (void *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0x20000000) {
      pvVar3 = operator_new(param_1 * 8);
      if (pvVar3 != (void *)0x0) goto LAB_005fbb90;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_005fbb90:
  local_8 = 0;
  FUN_00456f70(*in_ECX,in_ECX[1],pvVar3,(int)&param_1 + 3,0,param_1);
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


/* FUN_005fbed0 @ 005fbed0  kind=gamemisc  attributed-by=none  size=494 */

void FUN_005fbed0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int local_1c;
  int local_14;
  int local_8;
  
  local_8 = -param_1;
  local_14 = 0;
  piVar5 = (int *)(in_ECX + 0xb0);
  do {
    local_1c = 0;
    iVar2 = -param_2;
    do {
      if (*piVar5 != 0) {
        iVar6 = 0;
        piVar8 = (int *)(*piVar5 + 8);
        do {
          iVar7 = 0;
          do {
            if (((*piVar8 != 0) &&
                (uVar3 = local_8 + iVar6 >> 0x1f, 10 < (int)((local_8 + iVar6 ^ uVar3) - uVar3))) ||
               (uVar3 = iVar2 + iVar7 >> 0x1f, 10 < (int)((iVar2 + iVar7 ^ uVar3) - uVar3))) {
              FUN_006022d0(local_14 + iVar6,local_1c + iVar7);
            }
            iVar7 = iVar7 + 1;
            piVar8 = piVar8 + 0xd;
          } while (iVar7 < 0x40);
          iVar6 = iVar6 + 1;
        } while (iVar6 < 0x40);
      }
      local_1c = local_1c + 0x40;
      piVar5 = piVar5 + 1;
      iVar2 = iVar2 + 0x40;
    } while (local_1c < 0x10000);
    local_8 = local_8 + 0x40;
    local_14 = local_14 + 0x40;
  } while (local_14 < 0x10000);
  local_1c = 0;
  piVar5 = (int *)(&UNK_00400080.field_0x30 + in_ECX);
  do {
    iVar2 = 0;
    do {
      if (*piVar5 != 0) {
        uVar3 = local_1c - ((int)((param_1 >> 0x1f & 0x3fU) + param_1) >> 6);
        uVar4 = (int)uVar3 >> 0x1f;
        iVar6 = (uVar3 ^ uVar4) - uVar4;
        if ((8 < iVar6) ||
           (uVar3 = iVar2 - ((int)((param_2 >> 0x1f & 0x3fU) + param_2) >> 6),
           uVar4 = (int)uVar3 >> 0x1f, 8 < (int)((uVar3 ^ uVar4) - uVar4))) {
          FUN_00602160(local_1c,iVar2);
        }
        if ((((8 < iVar6) ||
             (uVar3 = iVar2 - ((int)((param_2 >> 0x1f & 0x3fU) + param_2) >> 6),
             uVar4 = (int)uVar3 >> 0x1f, 8 < (int)((uVar3 ^ uVar4) - uVar4))) &&
            ((-1 < local_1c && (((-1 < iVar2 && (local_1c < 0x400)) && (iVar2 < 0x400)))))) &&
           (puVar1 = (undefined4 *)*piVar5, puVar1 != (undefined4 *)0x0)) {
          FUN_006050b0(in_ECX,local_1c,iVar2);
          EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000c0));
          EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000d8));
          *piVar5 = 0;
          LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000d8));
          LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000c0));
          (**(code **)*puVar1)(1);
        }
      }
      iVar2 = iVar2 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar2 < 0x400);
    local_1c = local_1c + 1;
  } while (local_1c < 0x400);
  return;
}


/* FUN_00602160 @ 00602160  kind=gamemisc  attributed-by=none  size=357 */

void FUN_00602160(int param_1,int param_2)

{
  void *pvVar1;
  char cVar2;
  uint uVar3;
  int in_ECX;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int *local_34;
  void *local_30;
  undefined1 local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f4b60;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = uVar3;
  if ((((-1 < param_1) && (-1 < param_2)) && (param_1 < 0x400)) && (param_2 < 0x400)) {
    local_34 = (int *)(in_ECX + (param_1 * 0x400 + 0x2c + param_2) * 4);
    local_30 = (void *)*local_34;
    if (local_30 != (void *)0x0) {
      ExceptionList = &local_10;
      FUN_00605420();
      cVar2 = FUN_004497a0(uVar3);
      if (cVar2 != '\0') {
        local_44 = 0;
        local_40 = 0;
        local_3c = 0;
        local_38 = 0;
        local_8 = 0;
        FUN_0044e8d0(in_ECX + 0x8000bc,4);
        FUN_00403350("discovered");
        local_8 = CONCAT31(local_8._1_3_,1);
        FUN_004499c0(local_2c,&local_44);
        FUN_00403eb0();
        local_8 = 0xffffffff;
        FUN_005fb860();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000c0));
      EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000d8));
      *local_34 = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000d8));
      LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000c0));
      pvVar1 = local_30;
      _eh_vector_destructor_iterator_(local_30,0x34,0x1000,cube::ZoneTile::~ZoneTile);
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
  }
  __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_006022d0 @ 006022d0  kind=gamemisc  attributed-by=none  size=212 */

void FUN_006022d0(uint param_1,uint param_2)

{
  undefined4 *puVar1;
  int in_ECX;
  int iVar2;
  
  if ((((-1 < (int)param_1) && (-1 < (int)param_2)) && ((int)param_1 < 0x10000)) &&
     (((int)param_2 < 0x10000 &&
      (iVar2 = *(int *)(in_ECX + 0xb0 +
                       (((int)(((int)param_1 >> 0x1f & 0x3fU) + param_1) >> 6) * 0x400 +
                       ((int)(param_2 + ((int)param_2 >> 0x1f & 0x3fU)) >> 6)) * 4), iVar2 != 0))))
  {
    param_1 = param_1 & 0x8000003f;
    if ((int)param_1 < 0) {
      param_1 = (param_1 - 1 | 0xffffffc0) + 1;
    }
    param_2 = param_2 & 0x8000003f;
    if ((int)param_2 < 0) {
      param_2 = (param_2 - 1 | 0xffffffc0) + 1;
    }
    iVar2 = (param_1 * 0x40 + param_2) * 0x34 + iVar2;
    puVar1 = *(undefined4 **)(iVar2 + 8);
    if (puVar1 != (undefined4 *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000c0));
      EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000d8));
      *(undefined4 *)(iVar2 + 8) = 0;
      FUN_0046f870();
      LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000d8));
      LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000c0));
      (**(code **)*puVar1)(1);
    }
  }
  return;
}


/* FUN_006024d0 @ 006024d0  kind=gamemisc  attributed-by=none  size=3413 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006024d0(void *this,int param_2,int param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  float fVar3;
  char cVar4;
  basic_ostream<char,std::char_traits<char>_> *pbVar5;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  int iVar10;
  undefined2 *puVar11;
  void *pvVar12;
  int iVar13;
  uint uVar14;
  Sprite *pSVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  float10 fVar19;
  int iStack_180;
  basic_iostream<char,std::char_traits<char>_> local_17c;
  basic_streambuf<char,std::char_traits<char>_> local_164 [14];
  undefined4 local_12c;
  undefined4 local_128;
  basic_ios<char,std::char_traits<char>_> local_114 [6];
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  Sprite *local_bc;
  uint local_b8;
  float local_b4;
  float local_b0;
  undefined4 *local_ac;
  uint local_a8;
  int local_a4;
  int local_a0;
  float local_9c;
  Sprite *local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  Sprite *local_84;
  int local_80;
  float local_7c;
  Sprite *local_78;
  undefined4 *local_74;
  Sprite *local_70;
  float local_6c;
  float local_68;
  Sprite *local_64;
  int local_60;
  void *local_5c;
  char local_55;
  undefined4 local_54;
  float local_50;
  float local_4c;
  undefined1 local_48 [12];
  void *local_3c;
  float local_38;
  Sprite *pSStack_34;
  int local_30;
  float local_2c;
  Sprite *pSStack_28;
  undefined8 local_24;
  undefined8 local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f4c09;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_80 = 0;
  local_8c = param_2;
  local_90 = param_3;
  local_5c = this;
  if ((((*(int *)(*(int *)((int)this + 0xac) + 0xa4) != 0) && (-1 < param_2)) && (-1 < param_3)) &&
     ((param_2 < 0x400 && (param_3 < 0x400)))) {
    pSVar15 = (Sprite *)(param_2 * 0x400 + param_3);
    local_74 = *(undefined4 **)((int)this + (int)pSVar15 * 4 + 0x4000b0);
    local_64 = pSVar15;
    if (local_74 == (undefined4 *)0x0) {
      local_17c.vbtablePtr =
           (basic_iostream<char,std::char_traits<char>_>_vbtable *)
           &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
            vbtable;
      local_17c.basic_ostream<char,std::char_traits<char>_>.vbtablePtr =
           (basic_ostream<char,std::char_traits<char>_>_vbtable *)&DAT_006fcd08;
      std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>
                (local_114);
      local_8 = 0;
      local_80 = 1;
      std::basic_iostream<char,std::char_traits<char>_>::
      basic_iostream<char,std::char_traits<char>_>
                (&local_17c,(basic_streambuf<char,std::char_traits<char>_> *)local_164);
      local_8 = 1;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
      *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
       ((int)&local_17c.vbtablePtr +
       (local_17c.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
           &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
      *(int *)((int)&iStack_180 +
              (local_17c.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
           (local_17c.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
      std::basic_streambuf<char,std::char_traits<char>_>::
      basic_streambuf<char,std::char_traits<char>_>(local_164);
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
      local_164[0] = (basic_streambuf<char,std::char_traits<char>_>)
                     &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
                      vftable;
      local_12c = 0;
      local_128 = 0;
      local_8 = 3;
      iVar17 = local_90;
      pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)
               FUN_00449150(&local_17c.basic_ostream<char,std::char_traits<char>_>,&DAT_0071e03c,
                            param_2,&DAT_0071c760);
      pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar5,param_2);
      pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)FUN_00449150(pbVar6);
      std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar5,iVar17);
      local_cc = 0;
      local_c8 = 0;
      local_c4 = 0;
      local_c0 = 0;
      local_8._0_1_ = 4;
      uVar7 = FUN_0040e140(local_48);
      local_8._0_1_ = 5;
      cVar4 = FUN_004498d0(uVar7,&local_cc);
      local_8._0_1_ = 4;
      FUN_00403eb0();
      if (cVar4 != '\0') {
        FUN_0044d620(&local_70,4);
        local_74 = operator_new(0x34);
        if (local_74 == (undefined4 *)0x0) {
          local_74 = (undefined4 *)0x0;
        }
        else {
                    /* inlined constructor or destructor (approx location) for cube::LandscapeTile
                        */
          *local_74 = &cube::LandscapeTile::vftable;
          *(undefined1 *)(local_74 + 10) = 0;
          local_74[0xb] = 0;
          *(undefined1 *)(local_74 + 0xc) = 0;
        }
        *(undefined4 **)((int)this + (int)pSVar15 * 4 + 0x4000b0) = local_74;
        FUN_0044d620(local_74 + 8,8);
        FUN_0044d620(local_74 + 10,1);
        FUN_0044d620(&local_30,0xc);
        fVar3 = local_2c;
        if (((0 < local_30) && (0 < (int)local_2c)) &&
           ((0 < (int)pSStack_28 &&
            (FUN_0044d620(&local_80,4), iVar17 = local_80, pSVar15 = local_64, local_80 != 0)))) {
          FUN_005842d0(local_80);
          FUN_0044d620(local_54,iVar17);
          local_3c = (void *)0x0;
          local_38 = 0.0;
          pSStack_34 = (Sprite *)0x0;
          local_8._0_1_ = 7;
          FUN_00449540(&local_54,&local_3c);
          local_70 = operator_new(0x60);
          local_8._0_1_ = 8;
          if (local_70 == (Sprite *)0x0) {
            pSVar15 = (Sprite *)0x0;
          }
          else {
            pSVar15 = cube::Sprite::Sprite(local_70,*(undefined4 *)((int)this + 0xa4));
          }
          puVar2 = local_74;
          local_8._0_1_ = 7;
          local_74[0xb] = pSVar15;
          FUN_004e75c0(local_30,fVar3,pSStack_28);
          memcpy(*(void **)(puVar2[0xb] + 0x30),local_3c,(int)local_38 - (int)local_3c);
          FUN_004e7870();
          FUN_005fb860();
          FUN_005fb860();
          pSVar15 = local_64;
        }
        FUN_0044d620(local_74 + 1,0x1c);
      }
      FUN_005fb860();
      local_8 = 0xffffffff;
      FUN_00404420(&local_17c);
    }
    else if (*(char *)(local_74 + 0xc) == '\0') goto LAB_00603027;
    local_ac = (undefined4 *)FUN_0047faa0(local_8c,local_90);
    if (local_ac != (undefined4 *)0x0) {
      iVar17 = *(int *)((int)local_5c + (int)pSVar15 * 4 + 0xb0);
      pvVar12 = local_5c;
      if (iVar17 != 0) {
        local_84 = (Sprite *)((int)local_5c + 0x8000d8);
        EnterCriticalSection((LPCRITICAL_SECTION)local_84);
        pvVar12 = local_5c;
        local_88 = local_90 << 6;
        local_60 = local_8c << 6;
        local_68 = 0.0;
        local_80 = local_60;
        do {
          iVar16 = 0;
          do {
            puVar8 = (undefined8 *)FUN_004a6ad0(local_60,local_88 + iVar16);
            if (puVar8 != (undefined8 *)0x0) {
              iVar10 = ((int)local_68 + iVar16) * 0x34;
              *(undefined8 *)(iVar10 + 0x10 + iVar17) = *puVar8;
              *(undefined8 *)(iVar10 + 0x18 + iVar17) = puVar8[1];
            }
            iVar16 = iVar16 + 1;
          } while (iVar16 < 0x40);
          local_68 = (float)((int)local_68 + 0x40);
          local_60 = local_60 + 1;
        } while ((int)local_68 < 0x1000);
        local_94 = (int)(local_88 + (local_88 >> 0x1f & 7U)) >> 3;
        local_68 = 2.86986e-42;
        local_60 = (int)((local_80 >> 0x1f & 7U) + local_80) >> 3;
        do {
          iVar17 = 0;
          do {
            iVar16 = FUN_00487da0(local_60,local_94 + iVar17);
            if (iVar16 != 0) {
              FUN_005fb9f0(iVar16);
            }
            iVar17 = iVar17 + 1;
          } while (iVar17 < 8);
          local_68 = (float)((int)local_68 + 8);
          local_60 = local_60 + 1;
        } while ((int)local_68 < 0x840);
        LeaveCriticalSection((LPCRITICAL_SECTION)local_84);
      }
      iVar10 = local_8c;
      iVar16 = local_90;
      local_80 = local_8c + 1;
      local_88 = local_90 + -1;
      iVar17 = local_8c + -1;
      if (iVar17 <= local_80) {
        iVar18 = iVar17 * 0x400 + 0x10002f;
        do {
          iVar13 = local_88;
          if (local_88 <= local_90 + 1) {
            do {
              if ((((iVar17 < 0) || (iVar13 < 0)) || (0x20002e < iVar18)) ||
                 ((0x3ff < iVar13 ||
                  (*(int *)(*(int *)((int)pvVar12 + 0xac) + (iVar18 + iVar13) * 4) == 0))))
              goto LAB_00603027;
              iVar13 = iVar13 + 1;
            } while (iVar13 <= local_90 + 1);
          }
          iVar17 = iVar17 + 1;
          iVar18 = iVar18 + 0x400;
        } while (iVar17 <= local_80);
      }
      if (local_74 == (undefined4 *)0x0) {
        local_74 = operator_new(0x34);
        if (local_74 == (undefined4 *)0x0) {
          local_74 = (undefined4 *)0x0;
        }
        else {
          *local_74 = &cube::LandscapeTile::vftable;
          *(undefined1 *)(local_74 + 10) = 0;
          local_74[0xb] = 0;
          *(undefined1 *)(local_74 + 0xc) = 0;
        }
        *(undefined4 **)((int)local_5c + (int)local_64 * 4 + 0x4000b0) = local_74;
      }
      local_55 = '\x01';
      local_74[1] = *local_ac;
      local_74[2] = local_ac[1];
      *(undefined1 *)(local_74 + 3) = *(undefined1 *)(local_ac + 2);
      local_74[4] = local_ac[3];
      local_74[5] = local_ac[4];
      local_74[6] = local_ac[5];
      local_74[7] = local_ac[6];
      local_6c = (float)(iVar10 * 0x40 - 0x40);
      local_80 = (iVar10 + 2) * 0x40;
      local_68 = local_6c;
      if ((int)local_6c <= local_80) {
        pSVar15 = (Sprite *)(iVar16 * 0x40 + -0x40);
        local_98 = local_24._4_4_;
        local_9c = (float)local_24;
        local_78 = local_1c._4_4_;
        iVar17 = (iVar16 + 2) * 0x40;
        local_60 = (int)local_6c * 0x100;
        local_7c = (float)local_1c;
        local_bc = pSVar15;
        local_a0 = iVar17;
        do {
          local_64 = pSVar15;
          if ((int)pSVar15 <= iVar17) {
            iVar16 = (int)pSVar15 << 8;
            do {
              iVar17 = local_60;
              local_84 = (Sprite *)iVar16;
              FUN_005eefa0(&local_50,local_60,iVar16);
              uVar14 = (uint)((float)iVar17 + local_50);
              uVar9 = (uint)((float)iVar16 + local_4c);
              local_a8 = ((int)uVar9 >> 0x1f) << 0x10 | uVar9 >> 0x10;
              local_94 = uVar9 << 0x10;
              local_b8 = ((int)uVar14 >> 0x1f) << 0x10 | uVar14 >> 0x10;
              local_a4 = uVar14 << 0x10;
              fVar19 = (float10)FUN_005eeee0(local_ac,local_a4,local_b8,local_94,local_a8);
              iVar17 = -1;
              local_b0 = (float)fVar19;
              do {
                iVar10 = -1;
                iVar16 = local_88;
                do {
                  if ((iVar17 != 0) || (iVar10 != 0)) {
                    iVar18 = local_8c + iVar17;
                    if (((iVar18 < 0) || (((iVar16 < 0 || (0x3ff < iVar18)) || (0x3ff < iVar16))))
                       || (iVar18 = *(int *)(*(int *)((int)local_5c + 0xac) + 0x4000bc +
                                            (iVar18 * 0x400 + iVar16) * 4), iVar18 == 0))
                    goto LAB_00602d2f;
                    fVar19 = (float10)FUN_005eeee0(iVar18,local_a4,local_b8,local_94,local_a8);
                    local_b4 = (float)fVar19;
                    if (local_b4 < (float)(int)local_b0) goto LAB_00602d2f;
                  }
                  iVar10 = iVar10 + 1;
                  iVar16 = iVar16 + 1;
                } while (iVar10 < 2);
                iVar17 = iVar17 + 1;
              } while (iVar17 < 2);
              if (local_55 == '\0') {
                if ((int)local_6c < (int)local_9c) {
                  local_9c = local_6c;
                }
                if ((int)local_64 < (int)local_98) {
                  local_98 = local_64;
                }
                if ((int)local_7c < (int)local_6c) {
                  local_7c = local_6c;
                }
                if ((int)local_78 < (int)local_64) {
                  local_78 = local_64;
                }
              }
              else {
                pSStack_28 = local_64;
                local_2c = local_6c;
                local_24 = CONCAT44(local_64,local_6c);
                local_98 = local_64;
                pSStack_34 = local_64;
                local_38 = local_6c;
                local_1c = CONCAT44(local_64,local_6c);
                local_9c = local_6c;
                local_78 = local_64;
                local_55 = '\0';
                local_7c = local_6c;
              }
LAB_00602d2f:
              local_64 = (Sprite *)((int)&local_64->vftablePtr + 1);
              iVar16 = (int)local_84 + 0x100;
              pSVar15 = local_bc;
              iVar17 = local_a0;
              local_84 = (Sprite *)iVar16;
            } while ((int)local_64 <= local_a0);
          }
          iVar16 = local_80;
          local_6c = (float)((int)local_6c + 1);
          local_60 = local_60 + 0x100;
        } while ((int)local_6c <= local_80);
        if (local_55 == '\0') {
          *(undefined1 *)(local_74 + 0xc) = 0;
          local_70 = operator_new(0x60);
          pvVar12 = local_5c;
          local_8 = 9;
          if (local_70 == (Sprite *)0x0) {
            pSVar15 = (Sprite *)0x0;
          }
          else {
            pSVar15 = cube::Sprite::Sprite(local_70,*(undefined4 *)((int)local_5c + 0xa4));
          }
          local_8 = 0xffffffff;
          local_64 = pSVar15;
          FUN_004e75c0(((int)local_7c - (int)local_9c) + 1,(int)local_78 + (1 - (int)local_98),1);
          if ((int)local_68 < iVar16) {
            local_78 = (Sprite *)((int)local_68 - (int)local_9c);
            local_60 = (int)local_68 << 8;
            iVar17 = local_a0;
            do {
              local_84 = local_bc;
              if ((int)local_bc < iVar17) {
                local_7c = (float)((int)local_bc - (int)local_98);
                iVar16 = (int)local_bc << 8;
                do {
                  iVar17 = local_60;
                  local_94 = iVar16;
                  FUN_005eefa0(&local_38,local_60,iVar16);
                  local_b8 = (uint)((float)iVar17 + local_38);
                  uVar9 = (uint)((float)iVar16 + (float)pSStack_34);
                  local_b0 = (float)(((int)uVar9 >> 0x1f) << 0x10 | uVar9 >> 0x10);
                  local_b4 = (float)(uVar9 << 0x10);
                  uVar9 = ((int)local_b8 >> 0x1f) << 0x10 | local_b8 >> 0x10;
                  local_b8 = local_b8 << 0x10;
                  local_1c = CONCAT44(uVar9,(float)local_1c);
                  fVar19 = (float10)FUN_005eeee0(local_ac,local_b8,uVar9,local_b4,local_b0);
                  iVar17 = -1;
                  local_24 = CONCAT44((float)fVar19,(float)local_24);
                  do {
                    iVar10 = -1;
                    iVar16 = local_88;
                    do {
                      if (((((iVar17 != 0) || (iVar10 != 0)) &&
                           ((iVar18 = local_8c + iVar17, -1 < iVar18 &&
                            ((-1 < iVar16 && (iVar18 < 0x400)))))) && (iVar16 < 0x400)) &&
                         (iVar18 = *(int *)(*(int *)((int)local_5c + 0xac) + 0x4000bc +
                                           (iVar18 * 0x400 + iVar16) * 4), iVar18 != 0)) {
                        fVar19 = (float10)FUN_005eeee0(iVar18,local_b8,local_1c._4_4_,local_b4,
                                                       local_b0);
                        local_70 = (Sprite *)(float)fVar19;
                        if ((float)local_70 < (float)(int)(float)local_24._4_4_) goto LAB_00602f7e;
                      }
                      iVar10 = iVar10 + 1;
                      iVar16 = iVar16 + 1;
                    } while (iVar10 < 2);
                    iVar17 = iVar17 + 1;
                  } while (iVar17 < 2);
                  if (((((int)local_68 < 0) || ((int)local_84 < 0)) || (0xffffff < local_60)) ||
                     ((0xffff < (int)local_84 ||
                      (iVar17 = *(int *)((int)local_5c +
                                        (((int)(((int)local_68 >> 0x1f & 0x3fU) + (int)local_68) >>
                                         6) * 0x400 +
                                        ((int)((int)&local_84->vftablePtr +
                                              ((int)local_84 >> 0x1f & 0x3fU)) >> 6)) * 4 + 0xb0),
                      iVar17 == 0)))) {
LAB_006031c7:
                    local_6c = (float)CONCAT22(local_6c._2_2_,0xc8c8);
                    local_55 = -0x38;
                    if (((int)local_78 < 0) ||
                       (((((int)local_7c < 0 ||
                          (iVar17 = (local_64->Sprite_data).offset_0x40, iVar17 <= (int)local_78))
                         || ((int)(local_64->Sprite_data).offset_0x44 <= (int)local_7c)) ||
                        ((int)(local_64->Sprite_data).offset_0x48 < 1)))) {
                      _DAT_0076b340 = 0xc8c8;
                      DAT_0076b342 = 200;
                    }
                    else {
                      puVar11 = (undefined2 *)
                                ((int)((int)&local_78->vftablePtr + (int)local_7c * iVar17) * 3 +
                                (int)(local_64->Sprite_data).offset_0x2c);
                      *puVar11 = 0xc8c8;
                      *(undefined1 *)(puVar11 + 1) = 200;
                    }
                  }
                  else {
                    uVar9 = (uint)local_68 & 0x8000003f;
                    if ((int)uVar9 < 0) {
                      uVar9 = (uVar9 - 1 | 0xffffffc0) + 1;
                    }
                    uVar14 = (uint)local_84 & 0x8000003f;
                    if ((int)uVar14 < 0) {
                      uVar14 = (uVar14 - 1 | 0xffffffc0) + 1;
                    }
                    iVar17 = (uVar9 * 0x40 + uVar14) * 0x34 + iVar17;
                    if ((iVar17 == 0) || (bVar1 = *(byte *)(iVar17 + 0x30), bVar1 == 0))
                    goto LAB_006031c7;
                    if ((bVar1 & 1) == 0) {
                      local_a8 = CONCAT22(local_a8._2_2_,0xdcdc);
                      local_55 = -0x24;
                      if ((((int)local_78 < 0) || ((int)local_7c < 0)) ||
                         ((iVar17 = (local_64->Sprite_data).offset_0x40, iVar17 <= (int)local_78 ||
                          (((int)(local_64->Sprite_data).offset_0x44 <= (int)local_7c ||
                           ((int)(local_64->Sprite_data).offset_0x48 < 1)))))) {
                        _DAT_0076b340 = 0xdcdc;
                        DAT_0076b342 = 0xdc;
                      }
                      else {
                        puVar11 = (undefined2 *)
                                  ((int)((int)&local_78->vftablePtr + (int)local_7c * iVar17) * 3 +
                                  (int)(local_64->Sprite_data).offset_0x2c);
                        *puVar11 = 0xdcdc;
                        *(undefined1 *)(puVar11 + 1) = 0xdc;
                      }
                    }
                    else {
                      local_a4 = CONCAT22(local_a4._2_2_,0xffff);
                      local_55 = -1;
                      if (((((int)local_78 < 0) || ((int)local_7c < 0)) ||
                          (iVar17 = (local_64->Sprite_data).offset_0x40, iVar17 <= (int)local_78))
                         || (((int)(local_64->Sprite_data).offset_0x44 <= (int)local_7c ||
                             ((int)(local_64->Sprite_data).offset_0x48 < 1)))) {
                        _DAT_0076b340 = 0xffff;
                        DAT_0076b342 = 0xff;
                      }
                      else {
                        puVar11 = (undefined2 *)
                                  ((int)((int)&local_78->vftablePtr + (int)local_7c * iVar17) * 3 +
                                  (int)(local_64->Sprite_data).offset_0x2c);
                        *puVar11 = 0xffff;
                        *(undefined1 *)(puVar11 + 1) = 0xff;
                      }
                    }
                  }
LAB_00602f7e:
                  local_7c = (float)((int)local_7c + 1);
                  local_84 = (Sprite *)((int)&local_84->vftablePtr + 1);
                  iVar16 = local_94 + 0x100;
                  iVar17 = local_a0;
                  pvVar12 = local_5c;
                  local_94 = iVar16;
                } while ((int)local_84 < local_a0);
              }
              local_68 = (float)((int)local_68 + 1);
              local_60 = local_60 + 0x100;
              local_78 = (Sprite *)((int)&local_78->vftablePtr + 1);
              pSVar15 = local_64;
            } while ((int)local_68 < local_80);
          }
          FUN_004e7870();
          EnterCriticalSection((LPCRITICAL_SECTION)((int)pvVar12 + 0x8000d8));
          local_74[8] = local_9c;
          local_74[9] = local_98;
          if ((undefined4 *)local_74[0xb] != (undefined4 *)0x0) {
            (*(code *)**(undefined4 **)local_74[0xb])(1);
          }
          local_74[0xb] = pSVar15;
          LeaveCriticalSection((LPCRITICAL_SECTION)((int)pvVar12 + 0x8000d8));
          FUN_006050b0(pvVar12,local_8c,local_90);
        }
      }
    }
  }
LAB_00603027:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00603230 @ 00603230  kind=gamemisc  attributed-by=none  size=1958 */

void __thiscall FUN_00603230(void *this,int param_2,int param_3)

{
  void *pvVar1;
  char cVar2;
  uint uVar3;
  basic_ostream<char,std::char_traits<char>_> *pbVar4;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *puVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  void *pvVar17;
  undefined1 *puVar18;
  int iStack_114;
  basic_iostream<char,std::char_traits<char>_> local_110;
  basic_streambuf<char,std::char_traits<char>_> local_f8 [2];
  undefined1 local_f0 [8];
  undefined4 *local_e8;
  undefined4 *local_d8;
  undefined4 *local_c8;
  undefined4 local_c0;
  uint local_bc;
  basic_ios<char,std::char_traits<char>_> local_a8 [6];
  int local_60;
  void *local_5c;
  int local_58;
  void *local_54;
  int local_50;
  int *local_4c;
  uint local_48;
  int local_44;
  int local_40;
  void *local_3c;
  int local_38;
  undefined4 local_34;
  int local_30;
  undefined1 local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f4c9b;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_44 = 0;
  local_60 = param_2;
  local_58 = param_3;
  local_54 = this;
  local_14 = uVar3;
  if ((((*(int *)(*(int *)((int)this + 0xac) + 0xa4) != 0) && (-1 < param_2)) && (-1 < param_3)) &&
     (((param_2 < 0x400 && (param_3 < 0x400)) &&
      (param_3 = param_2 * 0x400 + 0x2c + param_3, local_4c = (int *)((int)this + param_3 * 4),
      *(int *)((int)this + param_3 * 4) == 0)))) {
    local_5c = operator_new(0x35a00);
    local_8 = 0;
    if (local_5c == (void *)0x0) {
      local_50 = 0;
    }
    else {
      local_50 = FUN_005fae00(uVar3);
    }
    iVar14 = local_50;
    local_8 = 0xffffffff;
    local_110.vbtablePtr =
         (basic_iostream<char,std::char_traits<char>_>_vbtable *)
         &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
          vbtable;
    local_110.basic_ostream<char,std::char_traits<char>_>.vbtablePtr =
         (basic_ostream<char,std::char_traits<char>_>_vbtable *)&DAT_006fcd08;
    std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(local_a8);
    local_8 = 1;
    local_44 = 1;
    std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
              (&local_110,(basic_streambuf<char,std::char_traits<char>_> *)local_f8);
    local_8 = 2;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
    *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
     ((int)&local_110.vbtablePtr +
     (local_110.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
         &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)((int)&iStack_114 +
            (local_110.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
         (local_110.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
    std::basic_streambuf<char,std::char_traits<char>_>::
    basic_streambuf<char,std::char_traits<char>_>(local_f8);
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
    local_f8[0] = (basic_streambuf<char,std::char_traits<char>_>)
                  &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    local_c0 = 0;
    local_bc = 0;
    local_8 = 4;
    iVar10 = param_2;
    iVar15 = local_58;
    pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)
             FUN_00449150(&local_110.basic_ostream<char,std::char_traits<char>_>,&DAT_0071e044,
                          param_2,&DAT_0071c760);
    pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar4,iVar10);
    pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_00449150(pbVar5);
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar4,iVar15);
    local_3c = (void *)0x0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_8._0_1_ = 5;
    uVar6 = FUN_0040e140(local_2c);
    local_8._0_1_ = 6;
    cVar2 = FUN_004498d0(uVar6,&local_3c);
    local_8 = CONCAT31(local_8._1_3_,5);
    FUN_00403eb0();
    if (cVar2 != '\0') {
      FUN_0044d620(&local_5c,4);
      puVar18 = (undefined1 *)(iVar14 + 0x10);
      local_44 = 0x40;
      do {
        iVar14 = 0x40;
        do {
          iVar10 = local_38 - (int)local_3c;
          if (local_30 + 1 <= iVar10) {
            puVar18[0x20] = *(undefined1 *)((int)local_3c + local_30);
            iVar10 = local_30 + 1;
          }
          iVar15 = local_38 - (int)local_3c;
          if (iVar10 + 1 <= iVar15) {
            *puVar18 = *(undefined1 *)((int)local_3c + iVar10);
            iVar15 = iVar10 + 1;
          }
          iVar10 = local_38 - (int)local_3c;
          if (iVar15 + 1 <= iVar10) {
            puVar18[1] = *(undefined1 *)((int)local_3c + iVar15);
            iVar10 = iVar15 + 1;
          }
          iVar15 = local_38 - (int)local_3c;
          if (iVar10 + 1 <= iVar15) {
            puVar18[2] = *(undefined1 *)((int)local_3c + iVar10);
            iVar15 = iVar10 + 1;
          }
          iVar10 = local_38 - (int)local_3c;
          if (iVar15 + 1 <= iVar10) {
            puVar18[3] = *(undefined1 *)((int)local_3c + iVar15);
            iVar10 = iVar15 + 1;
          }
          iVar15 = local_38 - (int)local_3c;
          if (iVar10 + 4 <= iVar15) {
            *(undefined4 *)(puVar18 + 4) = *(undefined4 *)((int)local_3c + iVar10);
            iVar15 = iVar10 + 4;
          }
          iVar10 = local_38 - (int)local_3c;
          if (iVar15 + 4 <= iVar10) {
            *(undefined4 *)(puVar18 + 8) = *(undefined4 *)((int)local_3c + iVar15);
            iVar10 = iVar15 + 4;
          }
          local_30 = local_38 - (int)local_3c;
          if (iVar10 + 1 <= local_30) {
            puVar18[0xc] = *(undefined1 *)((int)local_3c + iVar10);
            local_30 = iVar10 + 1;
          }
          puVar18 = puVar18 + 0x34;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
        local_44 = local_44 + -1;
      } while (local_44 != 0);
      puVar7 = (undefined4 *)(local_50 + 0x3401c);
      local_44 = 8;
      do {
        iVar14 = 8;
        do {
          iVar10 = local_38 - (int)local_3c;
          if (local_30 + 4 <= iVar10) {
            puVar7[-1] = *(undefined4 *)((int)local_3c + local_30);
            iVar10 = local_30 + 4;
          }
          iVar15 = local_38 - (int)local_3c;
          if (iVar10 + 4 <= iVar15) {
            *puVar7 = *(undefined4 *)((int)local_3c + iVar10);
            iVar15 = iVar10 + 4;
          }
          iVar10 = local_38 - (int)local_3c;
          if (iVar15 + 4 <= iVar10) {
            puVar7[1] = *(undefined4 *)((int)local_3c + iVar15);
            iVar10 = iVar15 + 4;
          }
          iVar15 = local_38 - (int)local_3c;
          if (iVar10 + 4 <= iVar15) {
            puVar7[2] = *(undefined4 *)((int)local_3c + iVar10);
            iVar15 = iVar10 + 4;
          }
          iVar10 = local_38 - (int)local_3c;
          if (iVar15 + 4 <= iVar10) {
            puVar7[3] = *(undefined4 *)((int)local_3c + iVar15);
            iVar10 = iVar15 + 4;
          }
          iVar15 = local_38 - (int)local_3c;
          if (iVar10 + 4 <= iVar15) {
            puVar7[-2] = *(undefined4 *)((int)local_3c + iVar10);
            iVar15 = iVar10 + 4;
          }
          iVar10 = local_38 - (int)local_3c;
          if (iVar15 + 0x10 <= iVar10) {
            *(undefined8 *)(puVar7 + -7) = *(undefined8 *)((int)local_3c + iVar15);
            *(undefined8 *)(puVar7 + -5) = *(undefined8 *)((int)local_3c + iVar15 + 8);
            iVar10 = iVar15 + 0x10;
          }
          local_30 = local_38 - (int)local_3c;
          if (iVar10 + 4 <= local_30) {
            puVar7[-3] = *(undefined4 *)((int)local_3c + iVar10);
            local_30 = iVar10 + 4;
          }
          puVar7 = puVar7 + 0x1a;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
        local_44 = local_44 + -1;
      } while (local_44 != 0);
      local_44 = 0;
      param_2 = local_60;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)((int)local_54 + 0x8000d8));
    *local_4c = local_50;
    uVar8 = local_58 * 0x40;
    uVar11 = param_2 * 0x40;
    local_48 = 0;
    uVar3 = uVar11;
    do {
      local_40 = 0;
      uVar16 = uVar8;
      do {
        if (((-1 < (int)uVar3) && (-1 < (int)uVar16)) &&
           (((int)uVar3 < 0x10000 && ((int)uVar16 < 0x10000)))) {
          iVar10 = (int)(((int)uVar16 >> 0x1f & 0x3fU) + uVar16) >> 6;
          iVar14 = (int)(((int)uVar3 >> 0x1f & 0x3fU) + uVar3) >> 6;
          if ((((-1 < iVar14) && (-1 < iVar10)) && (iVar14 < 0x400)) &&
             ((iVar10 < 0x400 &&
              (iVar14 = *(int *)(*(int *)((int)local_54 + 0xac) + 0xbc +
                                (iVar14 * 0x400 + iVar10) * 4), iVar14 != 0)))) {
            uVar12 = uVar3 & 0x8000003f;
            if ((int)uVar12 < 0) {
              uVar12 = (uVar12 - 1 | 0xffffffc0) + 1;
            }
            uVar9 = uVar16 & 0x8000003f;
            if ((int)uVar9 < 0) {
              uVar9 = (uVar9 - 1 | 0xffffffc0) + 1;
            }
            puVar13 = (undefined8 *)((uVar12 * 0x40 + uVar9) * 0x10 + 0x18 + iVar14);
            if (puVar13 != (undefined8 *)0x0) {
              iVar14 = (local_40 + local_48) * 0x34;
              *(undefined8 *)(iVar14 + 0x10 + local_50) = *puVar13;
              *(undefined8 *)(iVar14 + 0x18 + local_50) = puVar13[1];
            }
          }
        }
        local_40 = local_40 + 1;
        uVar16 = uVar16 + 1;
      } while (local_40 < 0x40);
      local_48 = local_48 + 0x40;
      uVar3 = uVar3 + 1;
    } while ((int)local_48 < 0x1000);
    local_44 = 0x800;
    local_5c = (void *)((int)(((int)uVar8 >> 0x1f & 7U) + uVar8) >> 3);
    uVar3 = (int)(uVar11 + ((int)uVar11 >> 0x1f & 7U)) >> 3;
    local_4c = (int *)(uVar3 * 8);
    do {
      local_40 = (int)local_5c * 8;
      iVar14 = 0;
      pvVar17 = local_5c;
      local_48 = uVar3;
      do {
        if (((-1 < (int)uVar3) && (-1 < (int)pvVar17)) &&
           (((int)uVar3 < 0x2000 && ((int)pvVar17 < 0x2000)))) {
          iVar15 = (int)((local_40 >> 0x1f & 0x3fU) + local_40) >> 6;
          iVar10 = (int)(((int)local_4c >> 0x1f & 0x3fU) + (int)local_4c) >> 6;
          uVar3 = local_48;
          if ((((-1 < iVar10) && (-1 < iVar15)) && (iVar10 < 0x400)) &&
             ((iVar15 < 0x400 &&
              (iVar10 = *(int *)(*(int *)((int)local_54 + 0xac) + 0xbc +
                                (iVar10 * 0x400 + iVar15) * 4), iVar10 != 0)))) {
            uVar8 = local_48 & 0x80000007;
            if ((int)uVar8 < 0) {
              uVar8 = (uVar8 - 1 | 0xfffffff8) + 1;
            }
            uVar11 = (uint)pvVar17 & 0x80000007;
            if ((int)uVar11 < 0) {
              uVar11 = (uVar11 - 1 | 0xfffffff8) + 1;
            }
            iVar10 = (uVar11 + uVar8 * 8) * 0x68 + 0x14018 + iVar10;
            if (iVar10 != 0) {
              FUN_005fb9f0(iVar10);
              uVar3 = local_48;
            }
          }
        }
        pvVar1 = local_54;
        iVar14 = iVar14 + 1;
        local_40 = local_40 + 8;
        pvVar17 = (void *)((int)pvVar17 + 1);
      } while (iVar14 < 8);
      local_4c = local_4c + 2;
      local_44 = local_44 + 8;
      uVar3 = uVar3 + 1;
    } while (local_44 < 0x840);
    local_48 = uVar3;
    LeaveCriticalSection((LPCRITICAL_SECTION)((int)local_54 + 0x8000d8));
    FUN_00605420(pvVar1,local_60,local_58);
    if (local_3c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_3c);
    }
    local_8 = 0xffffffff;
    *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
     ((int)&local_110.vbtablePtr +
     (local_110.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
         &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)((int)&iStack_114 +
            (local_110.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
         (local_110.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
    local_f8[0] = (basic_streambuf<char,std::char_traits<char>_>)
                  &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    if ((local_bc & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(*(void **)local_f0._4_4_);
    }
    std::basic_streambuf<char,std::char_traits<char>_>::setg
              (local_f8,(char *)0x0,(char *)0x0,(char *)0x0);
    *local_e8 = 0;
    *local_d8 = 0;
    *local_c8 = 0;
    local_bc = local_bc & 0xfffffffe;
    local_c0 = 0;
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>(local_f8);
    std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
              ((basic_iostream<char,std::char_traits<char>_> *)local_f0);
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_a8)
    ;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00603a00 @ 00603a00  kind=gamemisc  attributed-by=none  size=5672 */

void __thiscall FUN_00603a00(void *this,uint param_2,uint param_3)

{
  void *_Src;
  char cVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  basic_ostream<char,std::char_traits<char>_> *pbVar6;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar7;
  undefined4 uVar8;
  Sprite *pSVar9;
  byte *pbVar10;
  float *pfVar11;
  uint uVar12;
  int *piVar13;
  uint *puVar14;
  undefined1 *puVar15;
  code *pcVar16;
  LPCRITICAL_SECTION p_Var17;
  size_t _Size;
  void *pvVar18;
  LPCRITICAL_SECTION p_Var19;
  int iVar20;
  int iVar21;
  bool bVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  int iStack_1e4;
  basic_iostream<char,std::char_traits<char>_> local_1e0;
  basic_streambuf<char,std::char_traits<char>_> local_1c8 [2];
  undefined1 local_1c0 [8];
  undefined4 *local_1b8;
  undefined4 *local_1a8;
  undefined4 *local_198;
  undefined4 local_190;
  uint local_18c;
  basic_ios<char,std::char_traits<char>_> local_178 [6];
  int local_130;
  uint local_12c;
  Sprite *local_128;
  void *local_124;
  undefined4 local_120;
  undefined4 local_11c;
  int local_118;
  int local_114;
  Sprite *local_110;
  int local_10c;
  int local_108;
  void *local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  uint local_f4;
  uint local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  uint local_e0;
  Sprite *local_dc;
  int local_d8;
  uint local_d4;
  float local_d0;
  LPCRITICAL_SECTION local_cc;
  int local_c8;
  void *local_c4;
  int local_c0;
  undefined4 local_bc;
  int local_b8;
  uint local_b4;
  float local_b0;
  int local_ac;
  void *local_a8;
  float local_a4;
  float local_a0;
  void *local_9c;
  undefined1 local_98 [12];
  undefined1 local_8c [12];
  void *local_80 [3];
  undefined1 local_74 [4];
  undefined4 local_70;
  uint local_6c;
  int local_68;
  int iStack_64;
  int local_60;
  void *local_5c;
  float local_58;
  float local_54;
  void *local_50;
  float fStack_4c;
  float local_48;
  float local_44 [12];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f4da2;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_cc = (LPCRITICAL_SECTION)0x0;
  local_f0 = param_2;
  local_e0 = param_3;
  local_a8 = this;
  if ((((*(int *)(*(int *)((int)this + 0xac) + 0xa4) == 0) || ((int)param_2 < 0)) ||
      ((int)param_3 < 0)) ||
     (((0xffff < (int)param_2 || (0xffff < (int)param_3)) ||
      (iVar4 = *(int *)((int)this +
                       (((int)(((int)param_2 >> 0x1f & 0x3fU) + param_2) >> 6) * 0x400 +
                       ((int)(param_3 + ((int)param_3 >> 0x1f & 0x3fU)) >> 6)) * 4 + 0xb0),
      iVar4 == 0)))) goto LAB_0060508a;
  uVar12 = param_2 & 0x8000003f;
  if ((int)uVar12 < 0) {
    uVar12 = (uVar12 - 1 | 0xffffffc0) + 1;
  }
  uVar2 = param_3 & 0x8000003f;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xffffffc0) + 1;
  }
  local_ac = (uVar12 * 0x40 + uVar2) * 0x34 + iVar4;
  puVar3 = (undefined8 *)FUN_004a6ad0(param_2,param_3);
  if (puVar3 != (undefined8 *)0x0) {
    p_Var17 = (LPCRITICAL_SECTION)((int)local_a8 + 0x8000d8);
    EnterCriticalSection(p_Var17);
    *(undefined8 *)(local_ac + 0x10) = *puVar3;
    *(undefined8 *)(local_ac + 0x18) = puVar3[1];
    LeaveCriticalSection(p_Var17);
  }
  iVar4 = FUN_00487da0((int)(((int)local_f0 >> 0x1f & 7U) + local_f0) >> 3,
                       (int)(((int)local_e0 >> 0x1f & 7U) + local_e0) >> 3);
  if (iVar4 != 0) {
    FUN_005fb9f0(iVar4);
  }
  pvVar18 = local_a8;
  iVar5 = FUN_00434d10(local_f0,local_e0);
  iVar4 = local_ac;
  local_e8 = iVar5;
  if ((*(int *)(local_ac + 8) != 0) && ((*(char *)(local_ac + 0x28) == '\0' || (iVar5 == 0))))
  goto LAB_0060508a;
  local_1e0.vbtablePtr =
       (basic_iostream<char,std::char_traits<char>_>_vbtable *)
       &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vbtable
  ;
  local_1e0.basic_ostream<char,std::char_traits<char>_>.vbtablePtr =
       (basic_ostream<char,std::char_traits<char>_>_vbtable *)&DAT_006fcd08;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(local_178);
  local_8 = 0;
  local_cc = (LPCRITICAL_SECTION)0x2;
  std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
            (&local_1e0,(basic_streambuf<char,std::char_traits<char>_> *)local_1c8);
  local_8 = 1;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((int)&local_1e0.vbtablePtr +
   (local_1e0.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((int)&iStack_1e4 + (local_1e0.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset
          ) = (local_1e0.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            (local_1c8);
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
  local_1c8[0] = (basic_streambuf<char,std::char_traits<char>_>)
                 &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  local_190 = 0;
  local_18c = 0;
  local_8 = 3;
  uVar12 = local_f0;
  uVar2 = local_e0;
  pbVar6 = (basic_ostream<char,std::char_traits<char>_> *)
           FUN_00449150(&local_1e0.basic_ostream<char,std::char_traits<char>_>,&DAT_0071e048,
                        local_f0,&DAT_0071c760);
  pbVar7 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar6,uVar12);
  pbVar6 = (basic_ostream<char,std::char_traits<char>_> *)FUN_00449150(pbVar7);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar6,uVar2);
  local_104 = (void *)0x0;
  local_100 = 0;
  local_fc = 0;
  local_f8 = 0;
  local_8._0_1_ = 4;
  uVar8 = FUN_0040e140(local_80);
  local_130 = (int)pvVar18 + 0x8000f0;
  local_8 = CONCAT31(local_8._1_3_,5);
  local_cc = (LPCRITICAL_SECTION)0x3;
  cVar1 = FUN_004498d0(uVar8,&local_104);
  if ((cVar1 == '\0') || (*(int *)(iVar4 + 8) != 0)) {
    bVar22 = false;
  }
  else {
    bVar22 = true;
  }
  local_8 = 4;
  FUN_00403eb0();
  if (bVar22) {
    FUN_0044d620(&local_110,4);
    FUN_0044d620(local_ac + 4,4);
    FUN_0044d620(&local_50,0xc);
    fVar29 = fStack_4c;
    pcVar16 = EnterCriticalSection_exref;
    if ((((0 < (int)local_50) && (0 < (int)fStack_4c)) && (0 < (int)local_48)) &&
       (FUN_0044d620(&local_e4,4), iVar4 = local_e4, pcVar16 = EnterCriticalSection_exref,
       local_e4 != 0)) {
      FUN_005842d0(local_e4);
      FUN_0044d620(local_68,iVar4);
      local_5c = (void *)0x0;
      local_58 = 0.0;
      local_54 = 0.0;
      local_8._0_1_ = 7;
      FUN_00449540(&local_68,&local_5c);
      local_110 = operator_new(0x60);
      local_8._0_1_ = 8;
      if (local_110 == (Sprite *)0x0) {
        pSVar9 = (Sprite *)0x0;
      }
      else {
        pSVar9 = cube::Sprite::Sprite(local_110,*(undefined4 *)((int)pvVar18 + 0xa4));
      }
      local_8._0_1_ = 7;
      FUN_004e75c0(local_50,fVar29,local_48);
      memcpy((pSVar9->Sprite_data).offset_0x2c,local_5c,(int)local_58 - (int)local_5c);
      FUN_004e7870();
      pcVar16 = EnterCriticalSection_exref;
      p_Var17 = (LPCRITICAL_SECTION)((int)local_a8 + 0x8000d8);
      EnterCriticalSection(p_Var17);
      *(byte *)(local_ac + 0x30) = *(byte *)(local_ac + 0x30) | 2;
      *(Sprite **)(local_ac + 8) = pSVar9;
      *(undefined4 *)(local_ac + 0x2c) = 0xfa;
      LeaveCriticalSection(p_Var17);
      FUN_005fb860();
      local_8 = CONCAT31(local_8._1_3_,4);
      FUN_005fb860();
      pvVar18 = local_a8;
    }
    local_cc = (LPCRITICAL_SECTION)0x0;
    FUN_0044d620(&local_cc,4);
    p_Var17 = (LPCRITICAL_SECTION)((int)pvVar18 + 0x8000d8);
    (*pcVar16)(p_Var17);
    FUN_0046f870();
    LeaveCriticalSection(p_Var17);
    p_Var19 = local_cc;
    if (0 < (int)local_cc) {
      do {
        FUN_0044d620(&local_68,0xc);
        EnterCriticalSection(p_Var17);
        FUN_00601eb0(&local_68);
        LeaveCriticalSection(p_Var17);
        p_Var19 = (LPCRITICAL_SECTION)((int)&p_Var19[-1].SpinCount + 3);
      } while (p_Var19 != (LPCRITICAL_SECTION)0x0);
    }
    iVar5 = local_e8;
    if (*(char *)(local_ac + 0x28) != '\0') goto LAB_00603f32;
  }
  else {
LAB_00603f32:
    iVar4 = local_ac;
    if (iVar5 != 0) {
      local_cc = (LPCRITICAL_SECTION)(*(int *)(iVar5 + 0xa8) + 0x10);
      iVar5 = *(int *)(*(int *)(iVar5 + 0xa8) + 0x14);
      local_d8 = 0x100;
      local_c8 = iVar5;
      do {
        iVar20 = 0x100;
        piVar13 = (int *)local_cc;
        do {
          if (piVar13[1] + -1 < iVar5) {
            iVar5 = piVar13[1] + -1;
          }
          if (local_c8 < piVar13[3] + *piVar13) {
            local_c8 = *piVar13 + piVar13[3];
          }
          piVar13 = piVar13 + 0x800;
          iVar20 = iVar20 + -1;
        } while (iVar20 != 0);
        local_cc = (LPCRITICAL_SECTION)((int)local_cc + 0x20);
        local_d8 = local_d8 + -1;
      } while (local_d8 != 0);
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      iVar20 = local_c8;
      if (local_c8 < 0) {
        iVar20 = 0;
      }
      pSVar9 = (Sprite *)(((int)((iVar20 - iVar5 >> 0x1f & 7U) + (iVar20 - iVar5)) >> 3) + 1);
      *(int *)(local_ac + 4) = (int)(iVar5 + (iVar5 >> 0x1f & 7U)) >> 3;
      *(undefined1 *)(local_ac + 0x28) = 0;
      local_110 = pSVar9;
      local_128 = operator_new(0x60);
      local_8._0_1_ = 9;
      if (local_128 == (Sprite *)0x0) {
        local_dc = (Sprite *)0x0;
      }
      else {
        local_dc = cube::Sprite::Sprite(local_128,*(undefined4 *)((int)local_a8 + 0xa4));
      }
      local_8 = CONCAT31(local_8._1_3_,4);
      FUN_004e75c0(0x20,0x20,pSVar9);
      p_Var17 = (LPCRITICAL_SECTION)((int)local_a8 + 0x8000d8);
      local_cc = p_Var17;
      EnterCriticalSection(p_Var17);
      local_128 = (Sprite *)(iVar4 + 0x20);
      FUN_0046f870();
      LeaveCriticalSection(p_Var17);
      local_50 = (void *)0x0;
      fStack_4c = 0.0;
      local_48 = 0.0;
      pfVar11 = local_44;
      iVar4 = 2;
      do {
        iVar5 = 2;
        do {
          pfVar11[0] = 0.0;
          pfVar11[1] = 0.0;
          pfVar11[2] = 0.0;
          pfVar11 = pfVar11 + 3;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      local_d4 = 0;
      do {
        local_b4 = 0;
        local_12c = local_d4 & 0x80000003;
        if ((int)local_12c < 0) {
          local_12c = (local_12c - 1 | 0xfffffffc) + 1;
        }
        do {
          local_f4 = local_b4 * 0x100 + local_d4;
          local_ec = local_f4 * 0x100;
          local_9c = (void *)0x0;
          local_a4 = 0.0;
          local_a0 = 0.0;
          local_b0 = 0.0;
          local_c8 = 10000000;
          local_d0 = 0.0;
          do {
            iVar4 = 0;
            local_d8 = local_ec;
            fVar29 = local_d0;
            do {
              iVar5 = *(int *)(*(int *)(local_e8 + 0xa8) + 0x1c + local_d8);
              iVar20 = *(int *)(local_e8 + 0xa8) + local_d8;
              if (*(int *)(iVar20 + 0x14) < local_c8) {
                local_c8 = *(int *)(iVar20 + 0x14);
              }
              if (*(int *)(iVar20 + 0x10) + iVar5 < 1) {
                if ((DAT_0076de0c >> 0x18 & 0x1f) - 2 < 2) {
                  fVar23 = 80.0;
                  fVar24 = 100.0;
                  fVar27 = 255.0;
                }
                else {
                  fVar23 = (float)(DAT_0076de0c & 0xff);
                  fVar24 = (float)(DAT_0076de0c >> 8 & 0xff);
                  fVar27 = (float)(DAT_0076de0c >> 0x10 & 0xff);
                }
                local_9c = (void *)((float)local_9c + fVar23);
                local_a4 = local_a4 + fVar24;
                local_a0 = local_a0 + fVar27;
              }
              else {
                do {
                  iVar5 = iVar5 + -1;
                  if (iVar5 < 0) {
                    pfVar11 = (float *)FUN_005f9620(local_98,(int)fVar29 +
                                                             (*(int *)(local_e8 + 0x60) * 0x20 +
                                                             local_d4) * 8,
                                                    iVar4 + (*(int *)(local_e8 + 100) * 0x20 +
                                                            local_b4) * 8,
                                                    *(undefined4 *)(iVar20 + 0x14),local_e8);
                    local_9c = (void *)(*pfVar11 + (float)local_9c);
                    local_a4 = pfVar11[1] + local_a4;
                    fVar29 = pfVar11[2];
                    iVar5 = *(int *)(iVar20 + 0x10) + -1;
                    goto LAB_0060427b;
                  }
                  iVar21 = FUN_0042f730(iVar5);
                  if ((*(byte *)(iVar21 + 3) & 0x1f) != 0) {
                    pbVar10 = (byte *)FUN_0042f730(iVar5);
                    if ((pbVar10[3] & 0xffffff1f) - 2 < 2) {
                      fVar29 = 80.0;
                      fVar23 = 100.0;
                      fVar24 = 255.0;
                    }
                    else {
                      fVar29 = (float)*pbVar10;
                      fVar23 = (float)pbVar10[1];
                      fVar24 = (float)pbVar10[2];
                    }
                    local_9c = (void *)(fVar29 + (float)local_9c);
                    local_a4 = fVar23 + local_a4;
                    local_a0 = fVar24 + local_a0;
                    iVar5 = *(int *)(iVar20 + 0x10) + iVar5;
                    goto LAB_00604286;
                  }
                  fVar29 = local_d0;
                } while (*(int *)(iVar20 + 0x10) + iVar5 != *(int *)(iVar20 + 0x14) + -1);
                pfVar11 = (float *)FUN_005f9620(local_8c,(int)local_d0 +
                                                         (*(int *)(local_e8 + 0x60) * 0x20 +
                                                         local_d4) * 8,
                                                iVar4 + (*(int *)(local_e8 + 100) * 0x20 + local_b4)
                                                        * 8,*(undefined4 *)(iVar20 + 0x14),local_e8)
                ;
                local_a4 = pfVar11[1] + local_a4;
                local_9c = (void *)((float)local_9c + *pfVar11);
                fVar29 = pfVar11[2];
                iVar5 = *(int *)(iVar20 + 0x10) + iVar5;
LAB_0060427b:
                local_a0 = fVar29 + local_a0;
LAB_00604286:
                local_b0 = (float)iVar5 + local_b0;
                fVar29 = local_d0;
              }
              iVar4 = iVar4 + 1;
              local_d8 = local_d8 + 0x2000;
            } while (iVar4 < 8);
            local_d0 = (float)((int)fVar29 + 1);
            local_ec = local_ec + 0x20;
          } while ((int)local_d0 < 8);
          local_9c = (void *)((float)local_9c * 0.015625);
          local_a4 = local_a4 * 0.015625;
          local_a0 = local_a0 * 0.015625;
          local_ec = -((int)((int)(local_b0 * -0.015625) +
                            ((int)(local_b0 * -0.015625) >> 0x1f & 7U)) >> 3) -
                     *(int *)(local_ac + 4);
          local_50 = local_9c;
          fStack_4c = local_a4;
          local_48 = local_a0;
          if (local_12c == 0) {
            uVar12 = local_b4 & 0x80000003;
            bVar22 = uVar12 == 0;
            if ((int)uVar12 < 0) {
              bVar22 = (uVar12 - 1 | 0xfffffffc) == 0xffffffff;
            }
            if (bVar22) {
              iVar21 = local_e0 * 0x100;
              iVar5 = local_f0 * 0x100;
              iVar4 = iVar5 + local_d4 * 8;
              local_e4 = FUN_00477e10(iVar4,iVar21 + local_b4 * 8);
              iVar20 = FUN_00477e10(iVar5 + (local_d4 + 4) * 8,iVar21 + local_b4 * 8);
              iVar5 = local_e4;
              if ((local_e4 != iVar20) ||
                 (iVar20 = FUN_00477e10(iVar4,iVar21 + (local_b4 + 4) * 8), iVar5 != iVar20)) {
                EnterCriticalSection(local_cc);
                pSVar9 = local_128;
                local_60 = *(int *)(local_f4 * 0x100 + 0x14 + *(int *)(local_e8 + 0xa8));
                iVar5 = *(int *)local_128;
                if (local_60 < 0) {
                  local_60 = 0;
                }
                iStack_64 = iVar21 + local_b4 * 8;
                local_68 = iVar4;
                iVar20 = FUN_005a6b60(iVar5,*(undefined4 *)(iVar5 + 4),&local_68);
                iVar4 = *(int *)((int)pSVar9 + 4);
                if (iVar4 == 0xccccccb) {
                    /* WARNING: Subroutine does not return */
                  std::_Xlength_error("list<T> too long");
                }
                *(int *)((int)pSVar9 + 4) = iVar4 + 1;
                *(int *)(iVar5 + 4) = iVar20;
                **(int **)(iVar20 + 4) = iVar20;
                LeaveCriticalSection(local_cc);
              }
            }
          }
          if ((-1 < local_ec) && (local_ec < (int)local_110)) {
            if (((int)local_d4 < 0) ||
               (((((int)local_b4 < 0 ||
                  (iVar4 = (local_dc->Sprite_data).offset_0x40, iVar4 <= (int)local_d4)) ||
                 (iVar5 = (local_dc->Sprite_data).offset_0x44, iVar5 <= (int)local_b4)) ||
                ((int)(local_dc->Sprite_data).offset_0x48 <= local_ec)))) {
              puVar15 = &DAT_0076b340;
            }
            else {
              puVar15 = (undefined1 *)
                        (((iVar5 * local_ec + local_b4) * iVar4 + local_d4) * 3 +
                        (int)(local_dc->Sprite_data).offset_0x2c);
            }
            iVar4 = 0;
            do {
              iVar5 = iVar4 + 1;
              puVar15[iVar4] = (char)(int)(float)(&local_50)[iVar4];
              iVar4 = iVar5;
            } while (iVar5 < 3);
          }
          iVar4 = ((int)(local_b4 + ((int)local_b4 >> 0x1f & 0xfU)) >> 4) +
                  ((int)(((int)local_d4 >> 0x1f & 0xfU) + local_d4) >> 4) * 2;
          fVar29 = local_44[iVar4 * 3];
          local_44[iVar4 * 3 + 1] = local_a4 + local_44[iVar4 * 3 + 1];
          local_44[iVar4 * 3 + 2] = local_a0 + local_44[iVar4 * 3 + 2];
          local_44[iVar4 * 3] = fVar29 + (float)local_9c;
          local_9c = (void *)((((int)((local_c8 >> 0x1f & 7U) + local_c8) >> 3) -
                              *(int *)(local_ac + 4)) + -1);
          if ((int)local_9c < 0) {
            local_9c = (void *)0x0;
          }
          if ((int)local_9c < local_ec) {
            local_d8 = local_e0 * 0x100 + local_b4 * 8;
            local_e4 = local_f0 * 0x100 + local_d4 * 8;
            do {
              fVar29 = 0.0;
              local_108 = 0;
              local_d0 = 0.0;
              local_a0 = 0.0;
              local_a4 = 0.0;
              local_114 = 0;
              fVar23 = fVar29;
              fVar24 = fVar29;
              do {
                fVar27 = (float)(local_e4 + local_114);
                local_c8 = 0;
                local_b0 = fVar27;
                do {
                  local_f4 = local_d8 + local_c8;
                  local_10c = 0;
                  fVar25 = fVar27;
                  do {
                    fVar27 = local_b0;
                    iVar4 = local_10c + (*(int *)(local_ac + 4) + (int)local_9c) * 8;
                    if ((((int)fVar25 < 0) || ((int)local_f4 < 0)) ||
                       ((0xffffff < (int)fVar25 || (0xffffff < (int)local_f4)))) {
LAB_0060490a:
                      puVar14 = (uint *)&DAT_0076de14;
                      fVar27 = fVar25;
                    }
                    else {
                      iVar5 = ((int)local_f4 >> 0x1f & 0xffU) + local_f4;
                      uVar2 = iVar5 >> 8;
                      iVar20 = ((int)fVar25 >> 0x1f & 0xffU) + (int)fVar25;
                      uVar12 = iVar20 >> 8;
                      if ((((int)uVar12 < 0) || ((int)uVar2 < 0)) ||
                         ((0xffff < (int)uVar12 || (0xffff < (int)uVar2)))) goto LAB_0060490a;
                      iVar20 = (int)(uVar12 + (iVar20 >> 0x1f & 0x3fU)) >> 6;
                      iVar5 = (int)((iVar5 >> 0x1f & 0x3fU) + uVar2) >> 6;
                      fVar25 = local_b0;
                      if ((((iVar20 < 0) || (iVar5 < 0)) || (0x3ff < iVar20)) ||
                         ((0x3ff < iVar5 ||
                          (iVar5 = *(int *)(*(int *)((int)local_a8 + 0xac) + 0xbc +
                                           (iVar20 * 0x400 + iVar5) * 4), iVar5 == 0))))
                      goto LAB_0060490a;
                      uVar12 = uVar12 & 0x8000003f;
                      if ((int)uVar12 < 0) {
                        uVar12 = (uVar12 - 1 | 0xffffffc0) + 1;
                      }
                      uVar2 = uVar2 & 0x8000003f;
                      if ((int)uVar2 < 0) {
                        uVar2 = (uVar2 - 1 | 0xffffffc0) + 1;
                      }
                      iVar5 = *(int *)(iVar5 + 0x10018 + (uVar12 * 0x40 + uVar2) * 4);
                      if (iVar5 == 0) goto LAB_0060490a;
                      uVar12 = local_f4 & 0x800000ff;
                      if ((int)uVar12 < 0) {
                        uVar12 = (uVar12 - 1 | 0xffffff00) + 1;
                      }
                      uVar2 = (uint)local_b0 & 0x800000ff;
                      if ((int)uVar2 < 0) {
                        uVar2 = (uVar2 - 1 | 0xffffff00) + 1;
                      }
                      iVar5 = (uVar12 * 0x100 + uVar2) * 0x20 + *(int *)(iVar5 + 0xa8);
                      if ((iVar5 == 0) || (iVar20 = *(int *)(iVar5 + 0x10), iVar4 < iVar20))
                      goto LAB_0060490a;
                      if (iVar4 < *(int *)(iVar5 + 0x1c) + iVar20) {
                        puVar14 = (uint *)FUN_0042f730(iVar4 - iVar20);
                        fVar29 = local_d0;
                        fVar23 = local_a0;
                        fVar24 = local_a4;
                        if ((((*puVar14 & 0x1f000000) == 0) && (iVar4 < 1)) &&
                           ((*puVar14 & 0x40000000) == 0)) {
                          puVar14 = &DAT_0076de0c;
                        }
                      }
                      else {
                        puVar14 = &DAT_0076de0c;
                        if (0 < iVar4) {
                          puVar14 = (uint *)&DAT_0076de10;
                        }
                      }
                    }
                    iVar4 = local_c8;
                    uVar12 = *(byte *)((int)puVar14 + 3) & 0xffffff1f;
                    iVar5 = local_108;
                    if ((*(byte *)((int)puVar14 + 3) & 0x1f) != 0) {
                      iVar5 = local_108 + 1;
                      local_108 = iVar5;
                      if (uVar12 == 1) {
                        pfVar11 = (float *)FUN_005f9620(local_74,*(int *)(local_e8 + 0x60) * 0x100 +
                                                                 local_d4 * 8 + local_114,
                                                        *(int *)(local_e8 + 100) * 0x100 +
                                                        local_b4 * 8 + local_c8,
                                                        local_10c +
                                                        (*(int *)(local_ac + 4) + (int)local_9c) * 8
                                                        ,local_e8);
                        fVar23 = pfVar11[1] + local_a0;
                        fVar29 = local_d0 + *pfVar11;
                        fVar24 = pfVar11[2] + local_a4;
                        local_d0 = fVar29;
                        local_a4 = fVar24;
                        local_a0 = fVar23;
                      }
                      else {
                        if (uVar12 - 2 < 2) {
                          fVar25 = 80.0;
                          fVar26 = 100.0;
                          fVar28 = 255.0;
                        }
                        else {
                          fVar25 = (float)(byte)*puVar14;
                          fVar26 = (float)*(byte *)((int)puVar14 + 1);
                          fVar28 = (float)*(byte *)((int)puVar14 + 2);
                        }
                        fVar29 = fVar29 + fVar25;
                        fVar23 = fVar23 + fVar26;
                        fVar24 = fVar24 + fVar28;
                        local_d0 = fVar29;
                        local_a4 = fVar24;
                        local_a0 = fVar23;
                      }
                    }
                    local_10c = local_10c + 1;
                    fVar25 = fVar27;
                  } while (local_10c < 8);
                  local_c8 = iVar4 + 1;
                } while (local_c8 < 8);
                local_114 = local_114 + 1;
              } while (local_114 < 8);
              if (iVar5 != 0) {
                fVar27 = 1.0 / (float)iVar5;
                local_5c = (void *)(fVar27 * fVar29);
                local_58 = fVar27 * fVar23;
                local_54 = fVar27 * fVar24;
                if (((((int)local_d4 < 0) || ((int)local_b4 < 0)) ||
                    (((int)local_9c < 0 ||
                     ((iVar4 = (local_dc->Sprite_data).offset_0x40, iVar4 <= (int)local_d4 ||
                      (iVar5 = (local_dc->Sprite_data).offset_0x44, iVar5 <= (int)local_b4)))))) ||
                   ((int)(local_dc->Sprite_data).offset_0x48 <= (int)local_9c)) {
                  puVar15 = &DAT_0076b340;
                }
                else {
                  puVar15 = (undefined1 *)
                            (((iVar5 * (int)local_9c + local_b4) * iVar4 + local_d4) * 3 +
                            (int)(local_dc->Sprite_data).offset_0x2c);
                }
                iVar4 = 0;
                do {
                  iVar5 = iVar4 + 1;
                  puVar15[iVar4] = (char)(int)(float)(&local_5c)[iVar4];
                  iVar4 = iVar5;
                } while (iVar5 < 3);
              }
              local_9c = (void *)((int)local_9c + 1);
            } while ((int)local_9c < local_ec);
          }
          iVar4 = local_ac;
          local_b4 = local_b4 + 1;
        } while ((int)local_b4 < 0x20);
        local_d4 = local_d4 + 1;
      } while ((int)local_d4 < 0x20);
      FUN_004e7870();
      local_c4 = (void *)0x0;
      local_c0 = 0;
      local_bc = 0;
      local_b8 = 0;
      local_8._0_1_ = 10;
      FUN_005870c0(4);
      *(undefined4 *)((int)local_c4 + local_b8) = *(undefined4 *)((int)local_a8 + 0x8000f8);
      local_b8 = local_b8 + 4;
      FUN_005870c0((local_c0 - (int)local_c4) + 4);
      *(undefined4 *)((int)local_c4 + local_b8) = *(undefined4 *)(iVar4 + 4);
      local_b8 = local_b8 + 4;
      iVar4 = (local_dc->Sprite_data).offset_0x44;
      iVar5 = (local_dc->Sprite_data).offset_0x40;
      iVar20 = (local_dc->Sprite_data).offset_0x48;
      local_68 = iVar5;
      iStack_64 = iVar4;
      FUN_005870c0((local_c0 - (int)local_c4) + 0xc);
      *(ulonglong *)((int)local_c4 + local_b8) = CONCAT44(iStack_64,local_68);
      *(int *)((int)local_c4 + local_b8 + 8) = iVar20;
      local_b8 = local_b8 + 0xc;
      if (((0 < iVar5) && (0 < iVar4)) && (0 < iVar20)) {
        local_5c = (void *)0x0;
        local_58 = 0.0;
        local_54 = 0.0;
        FUN_005870c0(iVar20 * iVar4 * iVar5 * 3);
        pvVar18 = local_5c;
        memcpy(local_5c,(local_dc->Sprite_data).offset_0x2c,(int)local_58 - (int)local_5c);
        local_50 = (void *)0x0;
        fStack_4c = 0.0;
        local_48 = 0.0;
        local_8._0_1_ = 0xc;
        FUN_005fc0d0(&local_5c,&local_50);
        _Src = local_50;
        _Size = (int)fStack_4c - (int)local_50;
        FUN_005870c0((local_c0 - (int)local_c4) + 4);
        *(size_t *)((int)local_c4 + local_b8) = _Size;
        local_b8 = local_b8 + 4;
        FUN_005870c0((_Size - (int)local_c4) + local_c0);
        memcpy((void *)((int)local_c4 + local_b8),_Src,_Size);
        local_b8 = local_b8 + _Size;
        if (_Src != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          operator_delete(_Src);
        }
        local_8._0_1_ = 10;
        if (pvVar18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          operator_delete(pvVar18);
        }
      }
      iVar4 = local_ac;
      uVar8 = *(undefined4 *)(local_ac + 0x24);
      FUN_005870c0((local_c0 - (int)local_c4) + 4);
      *(undefined4 *)((int)local_c4 + local_b8) = uVar8;
      local_b8 = local_b8 + 4;
      piVar13 = (int *)**(int **)(iVar4 + 0x20);
      if (piVar13 != *(int **)(iVar4 + 0x20)) {
        do {
          FUN_005870c0((local_c0 - (int)local_c4) + 0xc);
          *(undefined8 *)((int)local_c4 + local_b8) = *(undefined8 *)(piVar13 + 2);
          *(int *)((int)local_c4 + local_b8 + 8) = piVar13[4];
          local_b8 = local_b8 + 0xc;
          piVar13 = (int *)*piVar13;
        } while (piVar13 != (int *)*(int *)(iVar4 + 0x20));
      }
      uVar8 = FUN_0040e140(local_80);
      local_8._0_1_ = 0xd;
      FUN_004499c0(uVar8,&local_c4);
      p_Var17 = local_cc;
      local_8 = CONCAT31(local_8._1_3_,10);
      if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_80[0]);
      }
      EnterCriticalSection(local_cc);
      if (*(undefined4 **)(iVar4 + 8) == (undefined4 *)0x0) {
        *(undefined4 *)(iVar4 + 0x2c) = 0xfa;
      }
      else {
        (**(code **)**(undefined4 **)(iVar4 + 8))(1);
      }
      *(byte *)(iVar4 + 0x30) = *(byte *)(iVar4 + 0x30) | 2;
      *(Sprite **)(iVar4 + 8) = local_dc;
      LeaveCriticalSection(p_Var17);
      local_124 = (void *)0x0;
      local_120 = 0;
      local_11c = 0;
      local_118 = 0;
      local_8._0_1_ = 0xe;
      FUN_005870c0(4);
      *(undefined4 *)((int)local_124 + local_118) = *(undefined4 *)((int)local_a8 + 0x8000bc);
      local_118 = local_118 + 4;
      local_6c = 0xf;
      local_70 = 0;
      local_80[0] = (void *)((uint)local_80[0] & 0xffffff00);
      FUN_0040c280("discovered",10);
      local_8 = CONCAT31(local_8._1_3_,0xf);
      FUN_004499c0(local_80,&local_124);
      if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_80[0]);
      }
      if (local_124 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_124);
      }
      if (local_c4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_c4);
      }
      if (local_104 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_104);
      }
      local_8 = 0xffffffff;
      *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
       ((int)&local_1e0.vbtablePtr +
       (local_1e0.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
           &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
      *(int *)((int)&iStack_1e4 +
              (local_1e0.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
           (local_1e0.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
      local_1c8[0] = (basic_streambuf<char,std::char_traits<char>_>)
                     &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
                      vftable;
      if ((local_18c & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(*(void **)local_1c0._4_4_);
      }
      std::basic_streambuf<char,std::char_traits<char>_>::setg
                (local_1c8,(char *)0x0,(char *)0x0,(char *)0x0);
      *local_1b8 = 0;
      *local_1a8 = 0;
      *local_198 = 0;
      local_18c = local_18c & 0xfffffffe;
      local_190 = 0;
      std::basic_streambuf<char,std::char_traits<char>_>::
      ~basic_streambuf<char,std::char_traits<char>_>(local_1c8);
      std::basic_iostream<char,std::char_traits<char>_>::
      ~basic_iostream<char,std::char_traits<char>_>
                ((basic_iostream<char,std::char_traits<char>_> *)local_1c0);
      std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
                (local_178);
      goto LAB_0060508a;
    }
  }
  FUN_005fb860();
  FUN_00404420(&local_1e0);
LAB_0060508a:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00605950 @ 00605950  kind=gamemisc  attributed-by=none  size=197 */

void FUN_00605950(float *param_1,undefined8 *param_2,int param_3,float param_4)

{
  float fVar1;
  uint uVar2;
  float local_14;
  float fStack_10;
  
  uVar2 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if (0 < param_3) {
    do {
      fVar1 = *(float *)(param_2 + 1);
      local_14 = (float)*param_2;
      fStack_10 = (float)((ulonglong)*param_2 >> 0x20);
      *param_1 = *param_1 + (local_14 - *param_1) * param_4;
      param_1[1] = (fStack_10 - param_1[1]) * param_4 + param_1[1];
      param_1[2] = (fVar1 - param_1[2]) * param_4 + param_1[2];
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00609400 @ 00609400  kind=gamemisc  attributed-by=none  size=115 */

void FUN_00609400(uint param_1)

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
    FUN_00609320();
    return;
  }
  FUN_00609320();
  return;
}


/* FUN_00623530 @ 00623530  kind=gamemisc  attributed-by=none  size=208 */

undefined4 FUN_00623530(void)

{
  HRESULT HVar1;
  int iVar2;
  Music *pMVar3;
  int *in_ECX;
  int *local_8;
  
  local_8 = in_ECX;
  CoInitializeEx((LPVOID)0x0,0);
  HVar1 = CoCreateInstance((IID *)&DAT_00702d68,(LPUNKNOWN)0x0,1,(IID *)&DAT_00702d78,&local_8);
  if (-1 < HVar1) {
    iVar2 = (**(code **)(*local_8 + 0x14))(local_8,0,0xffffffff);
    if (iVar2 < 0) {
      (**(code **)(*local_8 + 8))(local_8);
    }
    else {
      in_ECX[1] = (int)local_8;
      iVar2 = (**(code **)(*(int *)in_ECX[1] + 0x28))((int *)in_ECX[1],in_ECX + 2,0,0,0,0,0);
      if (-1 < iVar2) {
        pMVar3 = operator_new(0x1e02f0);
        if (pMVar3 == (Music *)0x0) {
          pMVar3 = (Music *)0x0;
        }
        else {
          pMVar3 = cube::Music::Music(pMVar3,(Music_vftable *)in_ECX[1]);
        }
        in_ECX[9] = (int)pMVar3;
        pMVar3 = operator_new(0x1e02f0);
        if (pMVar3 == (Music *)0x0) {
          in_ECX[10] = 0;
          return 1;
        }
        pMVar3 = cube::Music::Music(pMVar3,(Music_vftable *)in_ECX[1]);
        in_ECX[10] = (int)pMVar3;
        return 1;
      }
    }
  }
  return 0;
}


/* FUN_0062b920 @ 0062b920  kind=gamemisc  attributed-by=none  size=278 */

void FUN_0062b920(void)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  int *piVar3;
  int *local_34;
  undefined4 local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f5720;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if ((*(int *)(in_ECX + 0x90) == 0) || (*(int *)(in_ECX + 0x148) == 0)) {
    __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
    return;
  }
  local_34 = (int *)0x0;
  local_30 = 0;
  ExceptionList = &local_10;
  local_34 = (int *)FUN_0046d550(0,0);
  local_8 = 0;
  FUN_0040eb60(L"caption");
  local_8._0_1_ = 1;
  FUN_00633dd0(&local_34,local_2c);
  local_8 = (uint)local_8._1_3_ << 8;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  piVar3 = (int *)*local_34;
  piVar2 = local_34;
  if (piVar3 != local_34) {
    do {
      iVar1 = *(int *)(piVar3[2] + 0x34);
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x48) == 3)) {
        FUN_00663eb0(in_ECX + 0x80,piVar3[2]);
        piVar2 = local_34;
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != piVar2);
  }
  piVar3 = (int *)*piVar2;
  *piVar2 = (int)piVar2;
  local_34[1] = (int)local_34;
  local_30 = 0;
  if (piVar3 == local_34) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_34);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(piVar3);
}


/* FUN_0062bb90 @ 0062bb90  kind=gamemisc  attributed-by=none  size=2518 */

void FUN_0062bb90(float *param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int *in_ECX;
  float fVar4;
  float fVar5;
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
  float local_10c;
  float local_104;
  float local_f0;
  float local_ec;
  float local_e0;
  float local_dc;
  undefined1 local_d8 [64];
  undefined1 local_98 [64];
  float local_58;
  float local_54;
  undefined4 local_50;
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
  fVar18 = ((float)in_ECX[0x1e] + (float)in_ECX[0x14]) - (float)in_ECX[0x18];
  local_10c = ((float)in_ECX[0x1c] + (float)in_ECX[0x14]) - (float)in_ECX[0x18];
  local_4c = ((float)in_ECX[0x1d] + (float)in_ECX[0x15]) - (float)in_ECX[0x19];
  fVar16 = ((float)in_ECX[0x1f] + (float)in_ECX[0x15]) - (float)in_ECX[0x19];
  if (fVar18 < 0.0) {
    fVar18 = 0.0;
  }
  if (local_10c < fVar18) {
    local_10c = fVar18;
  }
  if (fVar16 < 0.0) {
    fVar16 = 0.0;
  }
  if (local_4c < fVar16) {
    local_4c = fVar16;
  }
  FUN_00423e70();
  for (iVar2 = *(int *)(in_ECX[0x52] + 0x28); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x28)) {
    if (*(int *)(iVar2 + 0x40) != 0) {
      if (*(int *)(iVar2 + 0x40) != 0) {
        pfVar3 = (float *)FUN_0062c5b0(local_98);
        fVar16 = 1.0 / (pfVar3[7] * 0.0 + pfVar3[3] * 0.0 + pfVar3[0xf]);
        fVar18 = (pfVar3[4] * 0.0 + *pfVar3 * 0.0 + pfVar3[0xc]) * fVar16 * -1.0;
        fVar16 = (pfVar3[5] * 0.0 + pfVar3[1] * 0.0 + pfVar3[0xd]) * fVar16 * -1.0;
        local_e0 = local_38 * fVar16 + local_48 * fVar18 + local_18;
        local_ec = local_34 * fVar16 + local_44 * fVar18 + local_14;
        local_f0 = local_40 * fVar18 + local_30 * fVar16 + local_10;
        local_104 = local_2c * fVar16 + local_3c * fVar18 + local_c;
        goto LAB_0062bcdb;
      }
      break;
    }
  }
  local_104 = local_c;
  local_f0 = local_10;
  local_ec = local_14;
  local_e0 = local_18;
LAB_0062bcdb:
  pfVar3 = (float *)FUN_0062c5b0(local_98);
  fVar16 = pfVar3[8];
  fVar18 = pfVar3[10];
  fVar9 = pfVar3[4] * local_48;
  fVar4 = fVar16 * local_48;
  fVar17 = pfVar3[0xf];
  fVar10 = pfVar3[9] * local_38;
  fVar19 = pfVar3[0xe];
  fVar1 = pfVar3[0xc];
  local_18 = pfVar3[0xd] * local_38 + fVar1 * local_48 + fVar19 * local_28 + local_e0 * fVar17;
  fVar11 = pfVar3[4] * local_44;
  fVar5 = fVar16 * local_44;
  fVar12 = pfVar3[9] * local_34;
  local_14 = pfVar3[0xd] * local_34 + fVar1 * local_44 + fVar19 * local_24 + local_ec * fVar17;
  fVar13 = pfVar3[4] * local_40;
  fVar6 = fVar16 * local_40;
  fVar14 = pfVar3[9] * local_30;
  local_10 = pfVar3[0xd] * local_30 + fVar1 * local_40 + fVar19 * local_20 + local_f0 * fVar17;
  fVar7 = local_1c * pfVar3[2];
  fVar19 = fVar19 * local_1c;
  fVar15 = pfVar3[4] * local_3c;
  fVar8 = local_1c * pfVar3[6];
  local_1c = pfVar3[9] * local_2c + fVar16 * local_3c + local_1c * fVar18 + local_104 * pfVar3[0xb];
  local_c = pfVar3[0xd] * local_2c + fVar1 * local_3c + fVar19 + local_104 * fVar17;
  local_48 = local_48 * *pfVar3 + local_38 * pfVar3[1] + local_28 * pfVar3[2] + local_e0 * pfVar3[3]
  ;
  local_44 = local_44 * *pfVar3 + local_34 * pfVar3[1] + local_24 * pfVar3[2] + local_ec * pfVar3[3]
  ;
  local_40 = local_40 * *pfVar3 + local_30 * pfVar3[1] + local_20 * pfVar3[2] + local_f0 * pfVar3[3]
  ;
  local_3c = local_3c * *pfVar3 + local_2c * pfVar3[1] + fVar7 + local_104 * pfVar3[3];
  local_38 = fVar9 + local_38 * pfVar3[5] + local_28 * pfVar3[6] + local_e0 * pfVar3[7];
  local_34 = fVar11 + local_34 * pfVar3[5] + local_24 * pfVar3[6] + local_ec * pfVar3[7];
  local_30 = fVar13 + local_30 * pfVar3[5] + local_20 * pfVar3[6] + local_f0 * pfVar3[7];
  local_2c = fVar15 + local_2c * pfVar3[5] + fVar8 + local_104 * pfVar3[7];
  local_28 = fVar10 + fVar4 + local_28 * fVar18 + local_e0 * pfVar3[0xb];
  local_24 = fVar12 + fVar5 + local_24 * fVar18 + local_ec * pfVar3[0xb];
  local_20 = fVar14 + fVar6 + local_20 * fVar18 + local_f0 * pfVar3[0xb];
  FUN_0058c440();
  fVar16 = *param_1;
  fVar17 = local_48 * *param_1 + local_38 * param_1[1];
  fVar18 = param_1[1];
  in_ECX[0x1c] = (int)fVar17;
  fVar18 = local_44 * fVar16 + local_34 * fVar18;
  in_ECX[0x1d] = (int)fVar18;
  fVar19 = ((float)in_ECX[0x1e] + (float)in_ECX[0x14]) - (float)in_ECX[0x18];
  fVar16 = (fVar17 + (float)in_ECX[0x14]) - (float)in_ECX[0x18];
  fVar17 = ((float)in_ECX[0x1f] + (float)in_ECX[0x15]) - (float)in_ECX[0x19];
  fVar18 = (fVar18 + (float)in_ECX[0x15]) - (float)in_ECX[0x19];
  if (fVar19 < 0.0) {
    fVar19 = 0.0;
  }
  if (fVar16 < fVar19) {
    fVar16 = fVar19;
  }
  if (fVar17 < 0.0) {
    fVar17 = 0.0;
  }
  if (fVar18 < fVar17) {
    fVar18 = fVar17;
  }
  fVar18 = fVar18 - local_4c;
  FUN_00423e70();
  iVar2 = *(int *)(in_ECX[0x52] + 0x28);
  do {
    if (iVar2 == 0) {
LAB_0062c1b5:
      local_dc = local_14;
      local_e0 = local_18;
LAB_0062c1cf:
      pfVar3 = (float *)FUN_0062c5b0(local_d8);
      local_58 = (fVar16 - local_10c) *
                 (*pfVar3 * local_48 + pfVar3[1] * local_38 + pfVar3[2] * local_28 +
                 pfVar3[3] * local_e0) +
                 fVar18 * (pfVar3[5] * local_38 + pfVar3[4] * local_48 + pfVar3[6] * local_28 +
                          pfVar3[7] * local_e0);
      local_54 = (fVar16 - local_10c) *
                 (*pfVar3 * local_44 + pfVar3[1] * local_34 + pfVar3[2] * local_24 +
                 pfVar3[3] * local_dc) +
                 fVar18 * (pfVar3[5] * local_34 + pfVar3[4] * local_44 + pfVar3[6] * local_24 +
                          pfVar3[7] * local_dc);
      local_50 = 0;
      local_4c = 0.0;
      FUN_0062ba50(in_ECX[0x52],&local_50,&local_58,param_2);
      (**(code **)(*in_ECX + 0x28))();
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (*(int *)(iVar2 + 0x40) != 0) {
      if (*(int *)(iVar2 + 0x40) != 0) {
        pfVar3 = (float *)FUN_0062c5b0(local_98);
        fVar19 = 1.0 / (pfVar3[7] * 0.0 + pfVar3[3] * 0.0 + pfVar3[0xf]);
        fVar17 = fVar19 * (pfVar3[4] * 0.0 + *pfVar3 * 0.0 + pfVar3[0xc]) * -1.0;
        fVar19 = fVar19 * (pfVar3[5] * 0.0 + pfVar3[1] * 0.0 + pfVar3[0xd]) * -1.0;
        local_e0 = local_38 * fVar19 + local_48 * fVar17 + local_18;
        local_dc = local_34 * fVar19 + local_44 * fVar17 + local_14;
        goto LAB_0062c1cf;
      }
      goto LAB_0062c1b5;
    }
    iVar2 = *(int *)(iVar2 + 0x28);
  } while( true );
}


/* FUN_0062d7f0 @ 0062d7f0  kind=gamemisc  attributed-by=none  size=1072 */

void FUN_0062d7f0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  int in_ECX;
  undefined1 local_48 [64];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  FUN_00423e70();
  pfVar6 = (float *)FUN_0062cfd0(local_48);
  fVar1 = param_1[4];
  fVar2 = *param_1;
  fVar3 = param_1[8];
  fVar4 = param_1[0xc];
  *param_1 = fVar1 * pfVar6[1] + fVar2 * *pfVar6 + fVar3 * pfVar6[2] + pfVar6[3] * fVar4;
  param_1[4] = pfVar6[5] * fVar1 + pfVar6[4] * fVar2 + pfVar6[6] * fVar3 + fVar4 * pfVar6[7];
  param_1[8] = pfVar6[9] * fVar1 + pfVar6[8] * fVar2 + pfVar6[10] * fVar3 + pfVar6[0xb] * fVar4;
  fVar5 = param_1[0xd];
  param_1[0xc] = fVar1 * pfVar6[0xd] + fVar2 * pfVar6[0xc] + pfVar6[0xe] * fVar3 +
                 pfVar6[0xf] * fVar4;
  fVar1 = param_1[1];
  fVar2 = param_1[5];
  fVar3 = param_1[9];
  param_1[1] = fVar2 * pfVar6[1] + fVar1 * *pfVar6 + fVar3 * pfVar6[2] + pfVar6[3] * fVar5;
  param_1[5] = pfVar6[5] * fVar2 + pfVar6[4] * fVar1 + pfVar6[6] * fVar3 + fVar5 * pfVar6[7];
  param_1[9] = pfVar6[9] * fVar2 + pfVar6[8] * fVar1 + pfVar6[10] * fVar3 + pfVar6[0xb] * fVar5;
  fVar4 = param_1[0xe];
  param_1[0xd] = fVar2 * pfVar6[0xd] + fVar1 * pfVar6[0xc] + pfVar6[0xe] * fVar3 +
                 pfVar6[0xf] * fVar5;
  fVar1 = param_1[2];
  fVar2 = param_1[6];
  fVar3 = param_1[10];
  param_1[2] = fVar2 * pfVar6[1] + fVar1 * *pfVar6 + fVar3 * pfVar6[2] + pfVar6[3] * fVar4;
  param_1[6] = pfVar6[5] * fVar2 + pfVar6[4] * fVar1 + pfVar6[6] * fVar3 + fVar4 * pfVar6[7];
  param_1[10] = pfVar6[9] * fVar2 + pfVar6[8] * fVar1 + pfVar6[10] * fVar3 + pfVar6[0xb] * fVar4;
  param_1[0xe] = fVar2 * pfVar6[0xd] + fVar1 * pfVar6[0xc] + pfVar6[0xe] * fVar3 +
                 pfVar6[0xf] * fVar4;
  fVar1 = param_1[3];
  fVar2 = param_1[7];
  fVar3 = param_1[0xb];
  fVar4 = param_1[0xf];
  param_1[3] = fVar2 * pfVar6[1] + fVar1 * *pfVar6 + fVar3 * pfVar6[2] + pfVar6[3] * fVar4;
  param_1[7] = pfVar6[5] * fVar2 + pfVar6[4] * fVar1 + pfVar6[6] * fVar3 + fVar4 * pfVar6[7];
  param_1[0xb] = pfVar6[9] * fVar2 + pfVar6[8] * fVar1 + pfVar6[10] * fVar3 + pfVar6[0xb] * fVar4;
  param_1[0xf] = fVar2 * pfVar6[0xd] + fVar1 * pfVar6[0xc] + pfVar6[0xe] * fVar3 +
                 pfVar6[0xf] * fVar4;
  fVar1 = *(float *)(in_ECX + 0x68);
  fVar2 = *(float *)(in_ECX + 0x6c);
  param_1[0xc] = *param_1 * fVar1 + param_1[4] * fVar2 + param_1[0xc];
  param_1[0xd] = param_1[5] * fVar2 + param_1[1] * fVar1 + param_1[0xd];
  param_1[0xe] = param_1[6] * fVar2 + param_1[2] * fVar1 + param_1[0xe];
  param_1[0xf] = param_1[3] * fVar1 + param_1[7] * fVar2 + param_1[0xf];
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0062fbc0 @ 0062fbc0  kind=gamemisc  attributed-by=none  size=511 */

void FUN_0062fbc0(undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *in_ECX;
  int *piVar6;
  int *piVar7;
  
  if (0xcccccca < (uint)in_ECX[1]) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("map/set<T> too long");
  }
  piVar3 = (int *)FUN_004c9580(param_4);
  in_ECX[1] = in_ECX[1] + 1;
  piVar3[1] = (int)param_3;
  if (param_3 == (undefined4 *)*in_ECX) {
    ((undefined4 *)*in_ECX)[1] = piVar3;
    *(int **)*in_ECX = piVar3;
    iVar4 = *in_ECX;
  }
  else {
    if (param_2 != '\0') {
      *param_3 = piVar3;
      if (param_3 == *(undefined4 **)*in_ECX) {
        *(int **)*in_ECX = piVar3;
      }
      goto LAB_0062fc1e;
    }
    param_3[2] = piVar3;
    iVar4 = *in_ECX;
    if (param_3 != *(undefined4 **)(iVar4 + 8)) goto LAB_0062fc1e;
  }
  *(int **)(iVar4 + 8) = piVar3;
LAB_0062fc1e:
  cVar1 = *(char *)(piVar3[1] + 0xc);
  piVar5 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*in_ECX + 4) + 0xc) = 1;
      *param_1 = piVar3;
      return;
    }
    piVar7 = (int *)piVar5[1];
    piVar6 = *(int **)piVar7[1];
    if (piVar7 == piVar6) {
      piVar6 = (int *)((undefined4 *)piVar7[1])[2];
      if ((char)piVar6[3] != '\0') {
        if (piVar5 == (int *)piVar7[2]) {
          piVar5 = (int *)piVar7[2];
          piVar7[2] = *piVar5;
          if (*(char *)(*piVar5 + 0xd) == '\0') {
            *(int **)(*piVar5 + 4) = piVar7;
          }
          piVar5[1] = piVar7[1];
          if (piVar7 == *(int **)(*in_ECX + 4)) {
            *(int **)(*in_ECX + 4) = piVar5;
          }
          else {
            piVar6 = (int *)piVar7[1];
            if (piVar7 == (int *)*piVar6) {
              *piVar6 = (int)piVar5;
            }
            else {
              piVar6[2] = (int)piVar5;
            }
          }
          *piVar5 = (int)piVar7;
          piVar7[1] = (int)piVar5;
          piVar5 = piVar7;
        }
        *(undefined1 *)(piVar5[1] + 0xc) = 1;
        *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
        piVar7 = *(int **)(piVar5[1] + 4);
        piVar6 = (int *)*piVar7;
        *piVar7 = piVar6[2];
        if (*(char *)(piVar6[2] + 0xd) == '\0') {
          *(int **)(piVar6[2] + 4) = piVar7;
        }
        piVar6[1] = piVar7[1];
        if (piVar7 == *(int **)(*in_ECX + 4)) {
          *(int **)(*in_ECX + 4) = piVar6;
          piVar6[2] = (int)piVar7;
        }
        else {
          piVar2 = (int *)piVar7[1];
          if (piVar7 == (int *)piVar2[2]) {
            piVar2[2] = (int)piVar6;
            piVar6[2] = (int)piVar7;
          }
          else {
            *piVar2 = (int)piVar6;
            piVar6[2] = (int)piVar7;
          }
        }
        goto LAB_0062fd9a;
      }
LAB_0062fcf1:
      *(undefined1 *)(piVar7 + 3) = 1;
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
      piVar5 = *(int **)(piVar5[1] + 4);
    }
    else {
      if ((char)piVar6[3] == '\0') goto LAB_0062fcf1;
      if (piVar5 == (int *)*piVar7) {
        iVar4 = *piVar7;
        *piVar7 = *(int *)(iVar4 + 8);
        if (*(char *)(*(int *)(iVar4 + 8) + 0xd) == '\0') {
          *(int **)(*(int *)(iVar4 + 8) + 4) = piVar7;
        }
        *(int *)(iVar4 + 4) = piVar7[1];
        if (piVar7 == *(int **)(*in_ECX + 4)) {
          *(int *)(*in_ECX + 4) = iVar4;
        }
        else {
          piVar5 = (int *)piVar7[1];
          if (piVar7 == (int *)piVar5[2]) {
            piVar5[2] = iVar4;
          }
          else {
            *piVar5 = iVar4;
          }
        }
        *(int **)(iVar4 + 8) = piVar7;
        piVar7[1] = iVar4;
        piVar5 = piVar7;
      }
      *(undefined1 *)(piVar5[1] + 0xc) = 1;
      *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
      piVar7 = *(int **)(piVar5[1] + 4);
      piVar6 = (int *)piVar7[2];
      piVar7[2] = *piVar6;
      if (*(char *)(*piVar6 + 0xd) == '\0') {
        *(int **)(*piVar6 + 4) = piVar7;
      }
      piVar6[1] = piVar7[1];
      if (piVar7 == *(int **)(*in_ECX + 4)) {
        *(int **)(*in_ECX + 4) = piVar6;
      }
      else {
        piVar2 = (int *)piVar7[1];
        if (piVar7 == (int *)*piVar2) {
          *piVar2 = (int)piVar6;
        }
        else {
          piVar2[2] = (int)piVar6;
        }
      }
      *piVar6 = (int)piVar7;
LAB_0062fd9a:
      piVar7[1] = (int)piVar6;
    }
    cVar1 = *(char *)(piVar5[1] + 0xc);
  } while( true );
}


/* FUN_00630a10 @ 00630a10  kind=gamemisc  attributed-by=none  size=47 */

void FUN_00630a10(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x40);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00630a1e. Too many branches */
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


/* FUN_00633e70 @ 00633e70  kind=gamemisc  attributed-by=none  size=2766 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00633e70(float *param_1,float *param_2,float *param_3,char *param_4,undefined4 param_5)

{
  int iVar1;
  char cVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float in_ECX;
  int iVar8;
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
  float fVar26;
  float fVar27;
  double dVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auStack_ac [3];
  char local_a9;
  float local_a8;
  float local_a4;
  int *local_a0;
  float local_9c;
  float local_98;
  float *local_94;
  float local_90;
  float *local_8c;
  float *local_88;
  float fStack_84;
  char *local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float afStack_60 [4];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined1 auStack_20 [4];
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  uint local_c;
  
  local_c = DAT_0076aa78 ^ (uint)auStack_ac;
  local_88 = param_2;
  local_94 = param_1;
  local_8c = param_3;
  local_80 = param_4;
  local_a9 = '\x01';
  local_90 = in_ECX;
  if (*(int **)((int)in_ECX + 0x34) != (int *)0x0) {
    cVar2 = (**(code **)(**(int **)((int)in_ECX + 0x34) + 0x20))
                      (&local_70,&local_68,param_3,&local_a9);
    if (cVar2 == '\0') {
      (**(code **)(**(int **)((int)in_ECX + 0x34) + 0x38))(param_3);
      (**(code **)(**(int **)((int)in_ECX + 0x34) + 0x18))(auStack_20);
      (**(code **)(**(int **)((int)in_ECX + 0x34) + 0x1c))(&fStack_1c);
      fStack_74 = fStack_1c * param_3[3];
      fStack_78 = fStack_1c * *param_3;
      fStack_84 = fStack_1c * param_3[1];
      fVar10 = param_3[0xd];
      fStack_7c = 1.0 / (fStack_74 + fStack_18 * param_3[7] + param_3[0xf]);
      afStack_60[0] = (fStack_78 + fStack_18 * param_3[4] + param_3[0xc]) * fStack_7c;
      fStack_7c = (fStack_84 + fStack_18 * param_3[5] + param_3[0xd]) * fStack_7c;
      afStack_60[1] = fStack_7c;
      fVar9 = 1.0 / (fStack_14 * param_3[3] + fStack_18 * param_3[7] + param_3[0xf]);
      fStack_1c = (fStack_14 * param_3[1] + fStack_18 * param_3[5] + fVar10) * fVar9;
      afStack_60[2] = (fStack_14 * *param_3 + fStack_18 * param_3[4] + param_3[0xc]) * fVar9;
      afStack_60[3] = fStack_1c;
      fVar9 = 1.0 / (fStack_10 * param_3[7] + fStack_14 * param_3[3] + param_3[0xf]);
      fVar33 = 1.0 / (fStack_10 * param_3[7] + fStack_74 + param_3[0xf]);
      fStack_50 = (fStack_10 * param_3[4] + fStack_14 * *param_3 + param_3[0xc]) * fVar9;
      local_a0 = (int *)((fStack_10 * param_3[5] + fStack_84 + fVar10) * fVar33);
      fStack_4c = (fStack_10 * param_3[5] + fStack_14 * param_3[1] + fVar10) * fVar9;
      fStack_44 = (float)local_a0;
      local_64 = fStack_7c;
      fStack_48 = (fStack_10 * param_3[4] + fStack_78 + param_3[0xc]) * fVar33;
      local_70 = afStack_60[0];
      local_68 = afStack_60[0];
      pfVar6 = afStack_60 + 2;
      if (afStack_60[0] <= afStack_60[2]) {
        pfVar6 = &local_70;
      }
      local_6c = fStack_7c;
      pfVar7 = afStack_60 + 3;
      if (fStack_7c <= fStack_1c) {
        pfVar7 = &local_6c;
      }
      local_70 = *pfVar6;
      local_6c = *pfVar7;
      pfVar3 = afStack_60 + 2;
      if (afStack_60[2] <= afStack_60[0]) {
        pfVar3 = &local_68;
      }
      pfVar4 = afStack_60 + 3;
      if (fStack_1c <= fStack_7c) {
        pfVar4 = &local_64;
      }
      local_68 = *pfVar3;
      pfVar5 = &fStack_50;
      if (*pfVar6 <= fStack_50) {
        pfVar5 = &local_70;
      }
      pfVar6 = &fStack_4c;
      if (*pfVar7 <= fStack_4c) {
        pfVar6 = &local_6c;
      }
      local_70 = *pfVar5;
      pfVar7 = &fStack_50;
      if (fStack_50 <= *pfVar3) {
        pfVar7 = &local_68;
      }
      local_64 = *pfVar4;
      pfVar3 = &fStack_4c;
      if (fStack_4c <= *pfVar4) {
        pfVar3 = &local_64;
      }
      local_68 = *pfVar7;
      pfVar4 = &fStack_48;
      if (*pfVar5 <= fStack_48) {
        pfVar4 = &local_70;
      }
      local_6c = *pfVar6;
      pfVar5 = &fStack_44;
      if (*pfVar6 <= (float)local_a0) {
        pfVar5 = &local_6c;
      }
      local_70 = *pfVar4;
      pfVar6 = &fStack_48;
      if (fStack_48 <= *pfVar7) {
        pfVar6 = &local_68;
      }
      local_64 = *pfVar3;
      pfVar7 = &fStack_44;
      if ((float)local_a0 <= *pfVar3) {
        pfVar7 = &local_64;
      }
      local_68 = *pfVar6;
      local_6c = *pfVar5;
      local_64 = *pfVar7;
      local_a9 = '\0';
    }
    else {
      local_a9 = '\0';
    }
  }
  if ((*(int *)(*(int *)(*(int *)((int)in_ECX + 0x3c) + 0xec) +
               *(int *)(*(int *)((int)in_ECX + 0x3c) + 0xc0) * 4) == 0) &&
     (local_a0 = (int *)**(int **)((int)in_ECX + 0x2c), local_a8 = local_6c, local_a4 = local_64,
     local_9c = local_68, local_98 = local_70, local_a0 != *(int **)((int)in_ECX + 0x2c))) {
    do {
      iVar1 = local_a0[2];
      if (((~(byte)(*(uint *)(iVar1 + 200) >> 2) & 1) != 0) &&
         (*(int *)(*(int *)(*(int *)(iVar1 + 0x3c) + 0x94) +
                  *(int *)(*(int *)(iVar1 + 0x3c) + 0x68) * 4) != 0)) {
        iVar1 = *(int *)(iVar1 + 0x38);
        pfVar7 = (float *)(iVar1 + 0x1b0);
        pfVar6 = afStack_60;
        for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
          *pfVar6 = *param_3;
          param_3 = param_3 + 1;
          pfVar6 = pfVar6 + 1;
        }
        fVar10 = fStack_30 * *(float *)(iVar1 + 0x1bc);
        fVar9 = afStack_60[0] * *(float *)(iVar1 + 0x1c0);
        fVar33 = fStack_30 * *(float *)(iVar1 + 0x1cc);
        fVar11 = *(float *)(iVar1 + 0x1d0) * afStack_60[0];
        fVar29 = *(float *)(iVar1 + 0x1d4) * fStack_50;
        fVar12 = fStack_30 * *(float *)(iVar1 + 0x1dc);
        fStack_30 = fStack_50 * *(float *)(iVar1 + 0x1e4) +
                    afStack_60[0] * *(float *)(iVar1 + 0x1e0) +
                    *(float *)(iVar1 + 0x1e8) * fStack_40 + fStack_30 * *(float *)(iVar1 + 0x1ec);
        fVar13 = *(float *)(iVar1 + 0x1bc) * fStack_2c;
        fVar14 = afStack_60[1] * *(float *)(iVar1 + 0x1c0);
        fVar15 = fStack_2c * *(float *)(iVar1 + 0x1cc);
        fVar16 = *(float *)(iVar1 + 0x1d0) * afStack_60[1];
        fVar30 = *(float *)(iVar1 + 0x1d4) * fStack_4c;
        fVar17 = fStack_2c * *(float *)(iVar1 + 0x1dc);
        fStack_2c = fStack_4c * *(float *)(iVar1 + 0x1e4) +
                    afStack_60[1] * *(float *)(iVar1 + 0x1e0) +
                    *(float *)(iVar1 + 0x1e8) * fStack_3c + fStack_2c * *(float *)(iVar1 + 0x1ec);
        fVar18 = *(float *)(iVar1 + 0x1bc) * fStack_28;
        fVar19 = afStack_60[2] * *(float *)(iVar1 + 0x1c0);
        fVar20 = fStack_28 * *(float *)(iVar1 + 0x1cc);
        fVar21 = *(float *)(iVar1 + 0x1d0) * afStack_60[2];
        fVar31 = *(float *)(iVar1 + 0x1d4) * fStack_48;
        fVar22 = fStack_28 * *(float *)(iVar1 + 0x1dc);
        fStack_28 = fStack_48 * *(float *)(iVar1 + 0x1e4) +
                    afStack_60[2] * *(float *)(iVar1 + 0x1e0) +
                    *(float *)(iVar1 + 0x1e8) * fStack_38 + fStack_28 * *(float *)(iVar1 + 0x1ec);
        fVar23 = *(float *)(iVar1 + 0x1bc) * fStack_24;
        fVar24 = afStack_60[3] * *(float *)(iVar1 + 0x1c0);
        fVar25 = fStack_24 * *(float *)(iVar1 + 0x1cc);
        fVar26 = *(float *)(iVar1 + 0x1d0) * afStack_60[3];
        fVar32 = *(float *)(iVar1 + 0x1d4) * fStack_44;
        fVar27 = fStack_24 * *(float *)(iVar1 + 0x1dc);
        fStack_24 = fStack_44 * *(float *)(iVar1 + 0x1e4) +
                    afStack_60[3] * *(float *)(iVar1 + 0x1e0) +
                    *(float *)(iVar1 + 0x1e8) * fStack_34 + fStack_24 * *(float *)(iVar1 + 0x1ec);
        afStack_60[0] =
             fStack_50 * *(float *)(iVar1 + 0x1b4) + afStack_60[0] * *pfVar7 +
             fStack_40 * *(float *)(iVar1 + 0x1b8) + fVar10;
        afStack_60[1] =
             fStack_4c * *(float *)(iVar1 + 0x1b4) + afStack_60[1] * *pfVar7 +
             fStack_3c * *(float *)(iVar1 + 0x1b8) + fVar13;
        afStack_60[2] =
             fStack_48 * *(float *)(iVar1 + 0x1b4) + afStack_60[2] * *pfVar7 +
             fStack_38 * *(float *)(iVar1 + 0x1b8) + fVar18;
        afStack_60[3] =
             fStack_44 * *(float *)(iVar1 + 0x1b4) + afStack_60[3] * *pfVar7 +
             fStack_34 * *(float *)(iVar1 + 0x1b8) + fVar23;
        fStack_50 = fStack_50 * *(float *)(iVar1 + 0x1c4) + fVar9 +
                    fStack_40 * *(float *)(iVar1 + 0x1c8) + fVar33;
        fStack_4c = fStack_4c * *(float *)(iVar1 + 0x1c4) + fVar14 +
                    fStack_3c * *(float *)(iVar1 + 0x1c8) + fVar15;
        fStack_48 = fStack_48 * *(float *)(iVar1 + 0x1c4) + fVar19 +
                    fStack_38 * *(float *)(iVar1 + 0x1c8) + fVar20;
        fStack_44 = fStack_44 * *(float *)(iVar1 + 0x1c4) + fVar24 +
                    fStack_34 * *(float *)(iVar1 + 0x1c8) + fVar25;
        fStack_40 = fVar29 + fVar11 + fStack_40 * *(float *)(iVar1 + 0x1d8) + fVar12;
        fStack_3c = fVar30 + fVar16 + fStack_3c * *(float *)(iVar1 + 0x1d8) + fVar17;
        fStack_38 = fVar31 + fVar21 + fStack_38 * *(float *)(iVar1 + 0x1d8) + fVar22;
        fStack_34 = fVar32 + fVar26 + fStack_34 * *(float *)(iVar1 + 0x1d8) + fVar27;
        FUN_00633e70(&local_70,&local_68,afStack_60,&local_a9,param_5);
        param_3 = local_8c;
      }
      local_a0 = (int *)*local_a0;
      in_ECX = local_90;
      param_1 = local_94;
    } while (local_a0 != (int *)*(int *)((int)local_90 + 0x2c));
  }
  local_a8 = local_6c;
  local_a4 = local_64;
  local_9c = local_68;
  local_98 = local_70;
  if ((((char)param_5 != '\0') &&
      (iVar1 = *(int *)((int)in_ECX + 0x3c), (*(byte *)(iVar1 + 0x200) & 1) != 0)) &&
     (0.0 < *(float *)(*(int *)(iVar1 + 500) + *(int *)(iVar1 + 0x1c8) * 4))) {
    local_90 = param_3[4] * 0.0 + *param_3;
    local_94 = (float *)(param_3[5] * 0.0 + param_3[1]);
    fVar9 = *param_3 * 0.0 + param_3[4];
    fVar10 = param_3[1] * 0.0 + param_3[5];
    dVar28 = (double)(fVar10 * fVar10 + fVar9 * fVar9);
    libm_sse2_sqrt_precise();
    local_8c = (float *)(float)dVar28;
    dVar28 = (double)((float)local_94 * (float)local_94 + local_90 * local_90);
    libm_sse2_sqrt_precise();
    fVar10 = ((float)local_8c + (float)dVar28) *
             *(float *)(*(int *)(iVar1 + 500) + *(int *)(iVar1 + 0x1c8) * 4) * 0.5;
    local_70 = local_98 - fVar10;
    local_6c = local_a8 - fVar10;
    local_68 = local_9c + fVar10;
    local_64 = local_a4 + fVar10;
  }
  if (local_a9 == '\0') {
    if (*local_80 == '\0') {
      pfVar6 = &local_70;
      if (*param_1 <= local_70 && local_70 != *param_1) {
        pfVar6 = param_1;
      }
      pfVar7 = param_1 + 1;
      *param_1 = *pfVar6;
      pfVar6 = &local_6c;
      if (*pfVar7 <= local_6c && local_6c != *pfVar7) {
        pfVar6 = pfVar7;
      }
      *pfVar7 = *pfVar6;
      pfVar6 = &local_68;
      if (local_68 < *local_88) {
        pfVar6 = local_88;
      }
      pfVar7 = local_88 + 1;
      *local_88 = *pfVar6;
      pfVar6 = &local_64;
      if (local_64 < *pfVar7) {
        pfVar6 = pfVar7;
      }
      *pfVar7 = *pfVar6;
    }
    else {
      *param_1 = local_70;
      param_1[1] = local_6c;
      *local_88 = local_68;
      local_88[1] = local_64;
      *local_80 = '\0';
    }
  }
  __security_check_cookie(local_c ^ (uint)auStack_ac);
  return;
}


/* FUN_006372a0 @ 006372a0  kind=gamemisc  attributed-by=none  size=551 */

void FUN_006372a0(undefined4 param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  char local_19;
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined1 local_10 [4];
  uint local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  FUN_00636be0();
  local_c = local_c & 0xffffff00;
  if (((~(byte)(*(uint *)(in_ECX + 200) >> 2) & 1) != 0) &&
     (*(undefined1 *)(in_ECX + 0xcc) = 0,
     *(int *)(*(int *)(*(int *)(in_ECX + 0x3c) + 0x94) +
             *(int *)(*(int *)(in_ECX + 0x3c) + 0x68) * 4) != 0)) {
    local_14 = CONCAT31(local_14._1_3_,(*(uint *)(in_ECX + 200) & 0x2000) != 0);
    if (*(int *)(in_ECX + 0x40) == 0) {
      if (*(int *)(in_ECX + 0x28) == 0) {
        *(undefined4 *)(in_ECX + 0x44) = 0;
      }
      else {
        *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(*(int *)(in_ECX + 0x28) + 0x44);
      }
    }
    else {
      *(int *)(in_ECX + 0x44) = *(int *)(in_ECX + 0x40);
    }
    if ((*(int *)(in_ECX + 0x34) != 0) && (*(char *)(*(int *)(in_ECX + 0x34) + 0x2e) == '\0')) {
      FUN_00664cf0(param_1);
    }
    if ((*(int *)(in_ECX + 0x38) != 0) && (*(char *)(*(int *)(in_ECX + 0x38) + 0x2e) == '\0')) {
      FUN_00664cf0(param_1);
    }
    if ((*(int *)(in_ECX + 0x3c) != 0) && (*(char *)(*(int *)(in_ECX + 0x3c) + 0x2e) == '\0')) {
      FUN_00664cf0(param_1);
    }
    if ((*(int *)(in_ECX + 0x38) != 0) && (*(char *)(*(int *)(in_ECX + 0x38) + 0x2d) != '\0')) {
      local_c = CONCAT31(local_c._1_3_,1);
      FUN_006371b0();
    }
    if (*(int **)(in_ECX + 0x40) != (int *)0x0) {
      (**(code **)(**(int **)(in_ECX + 0x40) + 0x6c))();
    }
    if ((*(int *)(in_ECX + 0x34) != 0) && (*(char *)(*(int *)(in_ECX + 0x34) + 0x2d) != '\0')) {
      *(undefined1 *)(in_ECX + 0xcc) = 1;
    }
    if ((*(int *)(in_ECX + 0x38) != 0) && (*(char *)(*(int *)(in_ECX + 0x38) + 0x2d) != '\0')) {
      *(undefined1 *)(in_ECX + 0xcc) = 1;
    }
    if ((*(int *)(in_ECX + 0x3c) != 0) && (*(char *)(*(int *)(in_ECX + 0x3c) + 0x2d) != '\0')) {
      *(undefined1 *)(in_ECX + 0xcc) = 1;
    }
    if ((*(int *)(in_ECX + 0x40) != 0) && (*(char *)(*(int *)(in_ECX + 0x40) + 0x134) != '\0')) {
      *(undefined1 *)(in_ECX + 0xcc) = 1;
    }
    iVar3 = FUN_006531e0();
    if ((iVar3 != 0) && (iVar3 = FUN_006531e0(), iVar3 == *(int *)(in_ECX + 0x40))) {
      *(undefined1 *)(in_ECX + 0xcc) = 1;
    }
    uVar1 = local_c;
    piVar4 = (int *)**(int **)(in_ECX + 0x2c);
    if (piVar4 != *(int **)(in_ECX + 0x2c)) {
      do {
        cVar2 = FUN_006374d0(param_1,uVar1,local_14);
        if (cVar2 != '\0') {
          *(undefined1 *)(in_ECX + 0xcc) = 1;
        }
        piVar4 = (int *)*piVar4;
      } while (piVar4 != (int *)*(int *)(in_ECX + 0x2c));
    }
    if ((((*(uint *)(in_ECX + 200) >> 7 & 1) != 0) && (*(char *)(in_ECX + 0xcc) != '\0')) &&
       (*(int *)(in_ECX + 0x34) != 0)) {
      local_19 = '\x01';
      piVar4 = (int *)**(int **)(in_ECX + 0x2c);
      if (piVar4 != *(int **)(in_ECX + 0x2c)) {
        do {
          if ((~(byte)(*(uint *)(piVar4[2] + 200) >> 2) & 1) != 0) {
            FUN_00633e70(local_10,local_18,*(int *)(piVar4[2] + 0x38) + 0x1b0,&local_19,0);
          }
          piVar4 = (int *)*piVar4;
        } while (piVar4 != (int *)*(int *)(in_ECX + 0x2c));
        if (local_19 == '\0') {
          (**(code **)(**(int **)(in_ECX + 0x34) + 0x48))(local_10,local_18);
          (**(code **)(**(int **)(in_ECX + 0x34) + 4))(1);
        }
      }
    }
  }
  FUN_00636c40();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_006374d0 @ 006374d0  kind=gamemisc  attributed-by=none  size=558 */

void FUN_006374d0(undefined4 param_1,char param_2,char param_3)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  char local_19;
  undefined1 local_18 [8];
  undefined1 local_10 [8];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if (((~(byte)(*(uint *)(in_ECX + 200) >> 2) & 1) == 0) ||
     ((*(undefined1 *)(in_ECX + 0xcc) = 0,
      *(int *)(*(int *)(*(int *)(in_ECX + 0x3c) + 0x94) +
              *(int *)(*(int *)(in_ECX + 0x3c) + 0x68) * 4) == 0 && (param_3 == '\0')))) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if ((*(uint *)(in_ECX + 200) & 0x2000) != 0) {
    param_3 = '\x01';
  }
  if (*(int *)(in_ECX + 0x40) == 0) {
    if (*(int *)(in_ECX + 0x28) == 0) {
      *(undefined4 *)(in_ECX + 0x44) = 0;
    }
    else {
      *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(*(int *)(in_ECX + 0x28) + 0x44);
    }
  }
  else {
    *(int *)(in_ECX + 0x44) = *(int *)(in_ECX + 0x40);
  }
  if ((*(int *)(in_ECX + 0x34) != 0) && (*(char *)(*(int *)(in_ECX + 0x34) + 0x2e) == '\0')) {
    FUN_00664cf0(param_1);
  }
  if ((*(int *)(in_ECX + 0x38) != 0) && (*(char *)(*(int *)(in_ECX + 0x38) + 0x2e) == '\0')) {
    FUN_00664cf0(param_1);
  }
  if ((*(int *)(in_ECX + 0x3c) != 0) && (*(char *)(*(int *)(in_ECX + 0x3c) + 0x2e) == '\0')) {
    FUN_00664cf0(param_1);
  }
  if ((*(int *)(in_ECX + 0x38) == 0) || (*(char *)(*(int *)(in_ECX + 0x38) + 0x2d) == '\0')) {
    if (param_2 == '\0') goto LAB_006375bb;
  }
  else {
    param_2 = '\x01';
  }
  FUN_006371b0();
LAB_006375bb:
  if (*(int **)(in_ECX + 0x40) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x40) + 0x6c))();
  }
  if ((*(int *)(in_ECX + 0x34) != 0) && (*(char *)(*(int *)(in_ECX + 0x34) + 0x2d) != '\0')) {
    *(undefined1 *)(in_ECX + 0xcc) = 1;
  }
  if ((*(int *)(in_ECX + 0x38) != 0) && (*(char *)(*(int *)(in_ECX + 0x38) + 0x2d) != '\0')) {
    *(undefined1 *)(in_ECX + 0xcc) = 1;
  }
  if ((*(int *)(in_ECX + 0x3c) != 0) && (*(char *)(*(int *)(in_ECX + 0x3c) + 0x2d) != '\0')) {
    *(undefined1 *)(in_ECX + 0xcc) = 1;
  }
  if ((*(int *)(in_ECX + 0x40) != 0) && (*(char *)(*(int *)(in_ECX + 0x40) + 0x134) != '\0')) {
    *(undefined1 *)(in_ECX + 0xcc) = 1;
  }
  iVar2 = FUN_006531e0();
  if ((iVar2 != 0) && (iVar2 = FUN_006531e0(), iVar2 == *(int *)(in_ECX + 0x40))) {
    *(undefined1 *)(in_ECX + 0xcc) = 1;
  }
  piVar3 = (int *)**(int **)(in_ECX + 0x2c);
  if (piVar3 != *(int **)(in_ECX + 0x2c)) {
    do {
      cVar1 = FUN_006374d0(param_1,param_2,param_3);
      if (cVar1 != '\0') {
        *(undefined1 *)(in_ECX + 0xcc) = 1;
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(in_ECX + 0x2c));
  }
  if ((((*(uint *)(in_ECX + 200) >> 7 & 1) != 0) && (*(char *)(in_ECX + 0xcc) != '\0')) &&
     (*(int *)(in_ECX + 0x34) != 0)) {
    local_19 = '\x01';
    piVar3 = (int *)**(int **)(in_ECX + 0x2c);
    if (piVar3 != *(int **)(in_ECX + 0x2c)) {
      do {
        if ((~(byte)(*(uint *)(piVar3[2] + 200) >> 2) & 1) != 0) {
          FUN_00633e70(local_18,local_10,*(int *)(piVar3[2] + 0x38) + 0x1b0,&local_19,0);
        }
        piVar3 = (int *)*piVar3;
      } while (piVar3 != (int *)*(int *)(in_ECX + 0x2c));
      if (local_19 == '\0') {
        (**(code **)(**(int **)(in_ECX + 0x34) + 0x48))(local_18,local_10);
        (**(code **)(**(int **)(in_ECX + 0x34) + 4))(1);
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_006391e0 @ 006391e0  kind=gamemisc  attributed-by=none  size=47 */

void FUN_006391e0(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x34);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006391ee. Too many branches */
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


/* FUN_00639470 @ 00639470  kind=gamemisc  attributed-by=none  size=189 */

undefined4 * FUN_00639470(undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_00639300(piVar2[1]);
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
    FUN_00639530(local_8,piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return param_1;
}


/* FUN_00639530 @ 00639530  kind=gamemisc  attributed-by=none  size=660 */

/* WARNING: Removing unreachable block (ram,0x006395fd) */
/* WARNING: Removing unreachable block (ram,0x0063960d) */
/* WARNING: Removing unreachable block (ram,0x00639616) */
/* WARNING: Removing unreachable block (ram,0x00639619) */
/* WARNING: Removing unreachable block (ram,0x00639609) */
/* WARNING: Removing unreachable block (ram,0x00639627) */
/* WARNING: Removing unreachable block (ram,0x00639636) */
/* WARNING: Removing unreachable block (ram,0x00639641) */
/* WARNING: Removing unreachable block (ram,0x0063963d) */
/* WARNING: Removing unreachable block (ram,0x00639631) */
/* WARNING: Removing unreachable block (ram,0x00639644) */

void FUN_00639530(undefined4 param_1,int *param_2)

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
              goto LAB_0063978e;
            }
LAB_00639730:
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
            goto LAB_00639730;
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
            goto LAB_0063978e;
          }
        }
        piVar5 = (int *)piVar3[1];
        piVar6 = piVar3;
      } while (piVar3 != *(int **)(*in_ECX + 4));
    }
    *(undefined1 *)(piVar6 + 3) = 1;
  }
LAB_0063978e:
  if ((void *)param_2[10] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_2[10]);
  }
  if (7 < (uint)param_2[9]) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_2[4]);
  }
  param_2[9] = 7;
  param_2[8] = 0;
  *(undefined2 *)(param_2 + 4) = 0;
                    /* WARNING: Subroutine does not return */
  operator_delete(param_2);
}


/* FUN_00639800 @ 00639800  kind=gamemisc  attributed-by=none  size=592 */

void FUN_00639800(int param_1)

{
  char cVar1;
  ScalableFont *pSVar2;
  ScalableFont *pSVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int in_ECX;
  ScalableFont **ppSVar8;
  int *piVar9;
  undefined1 local_74 [4];
  int local_70;
  LPCRITICAL_SECTION local_6c;
  ScalableFont *local_68;
  ScalableFont *local_64;
  char local_5d;
  void *local_5c [5];
  uint local_48;
  void *local_44 [4];
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
  puStack_c = &LAB_006f5b33;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_6c = (LPCRITICAL_SECTION)(in_ECX + 0x24);
  local_70 = param_1;
  EnterCriticalSection(local_6c);
  local_64 = (ScalableFont *)0x2f;
  pSVar2 = (ScalableFont *)FUN_00639a70(&local_64,0xffffffff,1);
  local_64 = (ScalableFont *)0x5c;
  local_68 = pSVar2;
  local_64 = (ScalableFont *)FUN_00639a70(&local_64,0xffffffff,1);
  ppSVar8 = &local_64;
  if ((int)local_64 <= (int)pSVar2) {
    ppSVar8 = &local_68;
  }
  FUN_0043a450(local_2c,(undefined1 *)((int)&(*ppSVar8)->vftablePtr + 1),
               (*(int *)(param_1 + 0x10) - (int)*ppSVar8) + -1);
  pSVar2 = (ScalableFont *)(in_ECX + 0x10);
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  local_64 = pSVar2;
  pSVar3 = (ScalableFont *)FUN_004e3790(local_2c);
  if (pSVar3 != (ScalableFont *)pSVar2->vftablePtr) {
    puVar4 = &(pSVar3->ScalableFont_data).field_0xc;
    if (7 < *(uint *)&(pSVar3->ScalableFont_data).field_0x20) {
      puVar4 = *(undefined1 **)puVar4;
    }
    iVar5 = FUN_00428db0(0,local_1c,puVar4,*(undefined4 *)&(pSVar3->ScalableFont_data).offset_0x1c);
    local_68 = pSVar3;
    if (-1 < iVar5) goto LAB_006398e0;
  }
  local_68 = (ScalableFont *)pSVar2->vftablePtr;
LAB_006398e0:
  if (local_68 == (ScalableFont *)pSVar2->vftablePtr) {
    local_68 = operator_new(0x124);
    local_8._0_1_ = 1;
    if (local_68 == (ScalableFont *)0x0) {
      pSVar2 = (ScalableFont *)0x0;
    }
    else {
      pSVar2 = plasma::ScalableFont::ScalableFont(local_68,*(undefined4 *)(in_ECX + 4));
    }
    local_8._0_1_ = 0;
    puVar6 = (undefined4 *)FUN_00661830(local_2c);
    *puVar6 = pSVar2;
    cVar1 = FUN_0065f260(*(undefined4 *)(in_ECX + 0x18),local_70,in_ECX + 8);
    if (cVar1 == '\0') {
      piVar9 = (int *)**(int **)(in_ECX + 0x1c);
      cVar1 = local_5d;
      if (piVar9 != *(int **)(in_ECX + 0x1c)) {
        do {
          local_5d = cVar1;
          uVar7 = FUN_00451850(local_5c,piVar9 + 2,&DAT_006fd42c);
          local_8._0_1_ = 2;
          uVar7 = FUN_004517d0(local_44,uVar7,local_2c);
          local_8._0_1_ = 3;
          local_5d = FUN_0065f260(*(undefined4 *)(in_ECX + 0x18),uVar7,0);
          if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_44[0]);
          }
          local_30 = 7;
          local_34 = 0;
          local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
          local_8._0_1_ = 0;
          if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_5c[0]);
          }
          if (local_5d != '\0') goto LAB_00639a1f;
          piVar9 = (int *)*piVar9;
          cVar1 = '\0';
        } while (piVar9 != (int *)*(int *)(in_ECX + 0x1c));
      }
      if (pSVar2 != (ScalableFont *)0x0) {
        (*pSVar2->vftablePtr->deleting_destructor)(pSVar2,1);
      }
      puVar6 = (undefined4 *)FUN_00639210(local_74,local_2c);
      FUN_00661a20(&local_70,*puVar6,puVar6[1]);
      LeaveCriticalSection(local_6c);
    }
    else {
LAB_00639a1f:
      LeaveCriticalSection(local_6c);
    }
  }
  else {
    LeaveCriticalSection(local_6c);
  }
  if (local_18 < 8) {
    ExceptionList = local_10;
    __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(local_2c[0]);
}


/* FUN_0063dc90 @ 0063dc90  kind=gamemisc  attributed-by=none  size=115 */

void FUN_0063dc90(uint param_1)

{
  int *in_ECX;
  uint uVar1;
  
  if (param_1 <= (uint)(in_ECX[2] - in_ECX[1] >> 2)) {
    return;
  }
  if (0x3fffffffU - (in_ECX[1] - *in_ECX >> 2) < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar1 = in_ECX[2] - *in_ECX >> 2;
  if (0x3fffffff - (uVar1 >> 1) < uVar1) {
    FUN_0063da20();
    return;
  }
  FUN_0063da20();
  return;
}


/* FUN_0063e020 @ 0063e020  kind=gamemisc  attributed-by=none  size=2526 */

void FUN_0063e020(int param_1,int param_2,float param_3,int param_4,int param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int in_ECX;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  undefined4 *puVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  int local_e8;
  float local_e4;
  float local_e0;
  int local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined8 local_b4;
  float local_ac [4];
  float local_9c;
  float fStack_98;
  float local_94;
  float fStack_90;
  float local_8c;
  float fStack_88;
  float local_84;
  float fStack_80;
  float local_7c;
  float fStack_78;
  float local_74;
  float fStack_70;
  float local_6c;
  float fStack_68;
  float local_64;
  float fStack_60;
  float local_5c;
  float fStack_58;
  float local_54;
  float fStack_50;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  undefined8 local_14;
  uint local_c;
  
  local_c = DAT_0076aa78 ^ (uint)&local_e8;
  iVar1 = *(int *)(in_ECX + 0xbcc);
  local_e0 = (float)(param_1 * 0xc);
  local_e4 = (float)((param_2 + 2U) %
                    (uint)(*(int *)(iVar1 + 4 + (int)local_e0) - *(int *)(iVar1 + (int)local_e0) >>
                          3));
  iVar1 = *(int *)(iVar1 + (int)local_e0);
  local_d4 = 1.0 - param_3;
  iVar7 = *(int *)((int)local_e0 + *(int *)(in_ECX + 0xbe4));
  fStack_70 = 0.5;
  fStack_78 = local_d4 * 0.5 *
              (*(float *)(iVar1 + 0xc + param_2 * 8) + *(float *)(iVar1 + 4 + param_2 * 8)) +
              param_3 * 0.5 *
              (*(float *)(iVar1 + 0xc + (int)local_e4 * 8) +
              *(float *)(iVar1 + 4 + (int)local_e4 * 8));
  local_7c = local_d4 * 0.5 *
             (*(float *)(iVar1 + 8 + param_2 * 8) + *(float *)(iVar1 + param_2 * 8)) +
             param_3 * 0.5 *
             (*(float *)(iVar1 + 8 + (int)local_e4 * 8) + *(float *)(iVar1 + (int)local_e4 * 8));
  local_6c = (local_d4 * *(float *)(iVar1 + param_2 * 8) +
             *(float *)(iVar1 + (int)local_e4 * 8) * param_3) - local_7c;
  fStack_68 = (local_d4 * *(float *)(iVar1 + 4 + param_2 * 8) +
              *(float *)(iVar1 + 4 + (int)local_e4 * 8) * param_3) - fStack_78;
  fStack_50 = -local_6c;
  local_74 = *(float *)(iVar7 + (int)local_e4 * 8) * param_3 +
             local_d4 * *(float *)(iVar7 + param_2 * 8);
  dVar10 = (double)(fStack_50 * fStack_50 + fStack_68 * fStack_68);
  local_e8 = in_ECX;
  local_54 = fStack_68;
  libm_sse2_sqrt_precise();
  fVar9 = local_e4;
  fVar12 = (*(float *)(iVar1 + 8 + param_2 * 8) + *(float *)(iVar1 + param_2 * 8)) * 0.5 -
           (*(float *)(iVar1 + 8 + (int)local_e4 * 8) + *(float *)(iVar1 + (int)local_e4 * 8)) * 0.5
  ;
  fVar11 = (*(float *)(iVar1 + 0xc + param_2 * 8) + *(float *)(iVar1 + 4 + param_2 * 8)) * 0.5 -
           (*(float *)(iVar1 + 0xc + (int)local_e4 * 8) + *(float *)(iVar1 + 4 + (int)local_e4 * 8))
           * 0.5;
  local_d8 = (*(float *)(iVar7 + (int)local_e4 * 8) - *(float *)(iVar7 + param_2 * 8)) *
             (float)dVar10;
  dVar10 = (double)(fVar12 * fVar12 + fVar11 * fVar11);
  libm_sse2_sqrt_precise();
  local_64 = -(local_d8 / (float)dVar10);
  iVar1 = *(int *)((int)local_e0 + *(int *)(local_e8 + 0xbd8));
  pfVar6 = (float *)((int)fVar9 * 0x10 + iVar1);
  local_d8 = 0.0;
  pfVar5 = (float *)(param_2 * 0x10 + iVar1);
  local_ac[0] = local_d4 * *pfVar5 + *pfVar6 * param_3;
  local_ac[1] = local_d4 * pfVar5[1] + pfVar6[1] * param_3;
  local_ac[2] = local_d4 * pfVar5[2] + pfVar6[2] * param_3;
  local_ac[3] = local_d4 * pfVar5[3] + pfVar6[3] * param_3;
  fStack_60 = 0.0;
  local_5c = 0.0;
  fStack_58 = -0.5;
  if (param_4 != 0) {
    local_d8 = (0.5 / (float)param_5 + 1.0) * 1.5707964 + 0.0;
  }
  local_d4 = 0.0;
  if (0 < param_5) {
    local_d0 = (float)param_5 + 0.5;
    do {
      local_e4 = (((float)(int)local_d4 + 0.5) * 1.5707964) / local_d0 + local_d8;
      dVar10 = (double)local_e4;
      libm_sse2_cos_precise();
      local_e0 = (float)dVar10;
      dVar10 = (double)local_e4;
      libm_sse2_sin_precise();
      uVar13 = CONCAT44(fStack_78,local_7c);
      local_e4 = (float)dVar10;
      local_4c = CONCAT44(fStack_68,local_6c);
      local_14 = CONCAT44(fStack_50,local_54);
      fVar9 = local_7c + local_54 * local_e0;
      iVar1 = *(int *)(local_e8 + 0xc14);
      puVar2 = *(undefined8 **)(iVar1 + 8);
      fVar11 = fStack_78 + fStack_50 * local_e0;
      _local_94 = CONCAT44(fVar11,fVar9);
      local_cc = CONCAT44(fVar11 + fStack_68 * local_e4,fVar9 + local_6c * local_e4);
      if (&local_cc < puVar2) {
        if (&local_cc < *(undefined8 **)(iVar1 + 4)) goto LAB_0063e4dc;
        iVar7 = (int)&local_cc - (int)*(undefined8 **)(iVar1 + 4) >> 3;
        if (puVar2 == *(undefined8 **)(iVar1 + 0xc)) {
          FUN_00428c80(1);
          uVar13 = CONCAT44(fStack_78,local_7c);
        }
        puVar3 = *(undefined4 **)(iVar1 + 8);
        local_dc = *(int *)(iVar1 + 4);
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = *(undefined4 *)(local_dc + iVar7 * 8);
          puVar3[1] = *(undefined4 *)(local_dc + 4 + iVar7 * 8);
        }
      }
      else {
LAB_0063e4dc:
        if (puVar2 == *(undefined8 **)(iVar1 + 0xc)) {
          FUN_00428c80(1);
          uVar13 = CONCAT44(fStack_78,local_7c);
        }
        if (*(undefined8 **)(iVar1 + 8) != (undefined8 *)0x0) {
          **(undefined8 **)(iVar1 + 8) = local_cc;
        }
      }
      local_3c = CONCAT44(fStack_68,local_6c);
      local_1c = CONCAT44(fStack_50,local_54);
      local_8c = (float)uVar13;
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 8;
      iVar1 = *(int *)(local_e8 + 0xc14);
      local_8c = local_8c + local_54 * local_e0;
      puVar2 = *(undefined8 **)(iVar1 + 8);
      fStack_88 = (float)((ulonglong)uVar13 >> 0x20);
      fStack_88 = fStack_88 + fStack_50 * local_e0;
      local_b4 = CONCAT44(fStack_88 - fStack_68 * local_e4,local_8c - local_6c * local_e4);
      if (&local_b4 < puVar2) {
        if (&local_b4 < *(undefined8 **)(iVar1 + 4)) goto LAB_0063e614;
        iVar7 = (int)&local_b4 - (int)*(undefined8 **)(iVar1 + 4) >> 3;
        if (puVar2 == *(undefined8 **)(iVar1 + 0xc)) {
          FUN_00428c80(1);
        }
        puVar3 = *(undefined4 **)(iVar1 + 8);
        local_dc = *(int *)(iVar1 + 4);
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = *(undefined4 *)(local_dc + iVar7 * 8);
          puVar3[1] = *(undefined4 *)(local_dc + 4 + iVar7 * 8);
        }
      }
      else {
LAB_0063e614:
        if (puVar2 == *(undefined8 **)(iVar1 + 0xc)) {
          FUN_00428c80(1);
        }
        if (*(undefined8 **)(iVar1 + 8) != (undefined8 *)0x0) {
          **(undefined8 **)(iVar1 + 8) = local_b4;
        }
      }
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 8;
      iVar1 = *(int *)(local_e8 + 0xc14);
      pfVar5 = *(float **)(iVar1 + 0x20);
      if (local_ac < pfVar5) {
        pfVar6 = *(float **)(iVar1 + 0x1c);
        if (local_ac < pfVar6) goto LAB_0063e692;
        if (pfVar5 == *(float **)(iVar1 + 0x24)) {
          FUN_00428d00(1);
        }
        puVar3 = *(undefined4 **)(iVar1 + 0x20);
        puVar8 = (undefined4 *)
                 (((int)local_ac - (int)pfVar6 & 0xfffffff0U) + *(int *)(iVar1 + 0x1c));
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = *puVar8;
          puVar3[1] = puVar8[1];
          puVar3[2] = puVar8[2];
          puVar3[3] = puVar8[3];
        }
      }
      else {
LAB_0063e692:
        if (pfVar5 == *(float **)(iVar1 + 0x24)) {
          FUN_00428d00(1);
        }
        puVar2 = *(undefined8 **)(iVar1 + 0x20);
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = CONCAT44(local_ac[1],local_ac[0]);
          puVar2[1] = CONCAT44(local_ac[3],local_ac[2]);
        }
      }
      *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 0x10;
      iVar1 = *(int *)(local_e8 + 0xc14);
      pfVar5 = *(float **)(iVar1 + 0x20);
      if (local_ac < pfVar5) {
        pfVar6 = *(float **)(iVar1 + 0x1c);
        if (local_ac < pfVar6) goto LAB_0063e71b;
        if (pfVar5 == *(float **)(iVar1 + 0x24)) {
          FUN_00428d00(1);
        }
        puVar3 = *(undefined4 **)(iVar1 + 0x20);
        puVar8 = (undefined4 *)
                 (((int)local_ac - (int)pfVar6 & 0xfffffff0U) + *(int *)(iVar1 + 0x1c));
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = *puVar8;
          puVar3[1] = puVar8[1];
          puVar3[2] = puVar8[2];
          puVar3[3] = puVar8[3];
        }
      }
      else {
LAB_0063e71b:
        if (pfVar5 == *(float **)(iVar1 + 0x24)) {
          FUN_00428d00(1);
        }
        puVar2 = *(undefined8 **)(iVar1 + 0x20);
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = CONCAT44(local_ac[1],local_ac[0]);
          puVar2[1] = CONCAT44(local_ac[3],local_ac[2]);
        }
      }
      local_2c = CONCAT44(fStack_58,local_5c);
      uVar13 = CONCAT44(fStack_70,local_74);
      local_44 = CONCAT44(fStack_60,local_64);
      *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 0x10;
      iVar1 = *(int *)(local_e8 + 0xc14);
      fVar9 = local_74 + local_64 * local_e0;
      puVar2 = *(undefined8 **)(iVar1 + 0x14);
      fVar11 = fStack_70 + fStack_60 * local_e0;
      _local_84 = CONCAT44(fVar11,fVar9);
      local_c4 = CONCAT44(fVar11 + fStack_58 * local_e4,fVar9 + local_5c * local_e4);
      if (&local_c4 < puVar2) {
        if (&local_c4 < *(undefined8 **)(iVar1 + 0x10)) goto LAB_0063e870;
        iVar7 = (int)&local_c4 - (int)*(undefined8 **)(iVar1 + 0x10) >> 3;
        if (puVar2 == *(undefined8 **)(iVar1 + 0x18)) {
          FUN_00428c80(1);
          uVar13 = CONCAT44(fStack_70,local_74);
        }
        puVar3 = *(undefined4 **)(iVar1 + 0x14);
        local_dc = *(int *)(iVar1 + 0x10);
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = *(undefined4 *)(local_dc + iVar7 * 8);
          puVar3[1] = *(undefined4 *)(local_dc + 4 + iVar7 * 8);
        }
      }
      else {
LAB_0063e870:
        if (puVar2 == *(undefined8 **)(iVar1 + 0x18)) {
          FUN_00428c80(1);
          uVar13 = CONCAT44(fStack_70,local_74);
        }
        if (*(undefined8 **)(iVar1 + 0x14) != (undefined8 *)0x0) {
          **(undefined8 **)(iVar1 + 0x14) = local_c4;
        }
      }
      local_34 = CONCAT44(fStack_58,local_5c);
      local_24 = CONCAT44(fStack_60,local_64);
      local_9c = (float)uVar13;
      *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 8;
      iVar1 = *(int *)(local_e8 + 0xc14);
      local_9c = local_9c + local_64 * local_e0;
      puVar2 = *(undefined8 **)(iVar1 + 0x14);
      fStack_98 = (float)((ulonglong)uVar13 >> 0x20);
      fStack_98 = fStack_98 + fStack_60 * local_e0;
      local_bc = CONCAT44(fStack_98 - fStack_58 * local_e4,local_9c - local_5c * local_e4);
      if (&local_bc < puVar2) {
        if (&local_bc < *(undefined8 **)(iVar1 + 0x10)) goto LAB_0063e99e;
        iVar7 = (int)&local_bc - (int)*(undefined8 **)(iVar1 + 0x10) >> 3;
        if (puVar2 == *(undefined8 **)(iVar1 + 0x18)) {
          FUN_00428c80(1);
        }
        puVar3 = *(undefined4 **)(iVar1 + 0x14);
        iVar4 = *(int *)(iVar1 + 0x10);
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = *(undefined4 *)(iVar4 + iVar7 * 8);
          puVar3[1] = *(undefined4 *)(iVar4 + 4 + iVar7 * 8);
        }
      }
      else {
LAB_0063e99e:
        if (puVar2 == *(undefined8 **)(iVar1 + 0x18)) {
          FUN_00428c80(1);
        }
        if (*(undefined8 **)(iVar1 + 0x14) != (undefined8 *)0x0) {
          **(undefined8 **)(iVar1 + 0x14) = local_bc;
        }
      }
      *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 8;
      local_d4 = (float)((int)local_d4 + 1);
    } while ((int)local_d4 < param_5);
  }
  __security_check_cookie(local_c ^ (uint)&local_e8);
  return;
}


