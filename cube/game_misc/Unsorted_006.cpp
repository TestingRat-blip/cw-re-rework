// Unsorted_006 (game_misc) -- cube. 50 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Unsorted_006.h"

/* FUN_006cf3a0 @ 006cf3a0  kind=gamemisc  attributed-by=none  size=60 */

int FUN_006cf3a0(void)

{
  uint in_EAX;
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  while( true ) {
    uVar2 = *(int *)(in_ECX + 0x2050) - *(int *)(in_ECX + 0x204c);
    if (in_EAX <= uVar2) {
      uVar2 = in_EAX;
    }
    *(int *)(in_ECX + 0x2048) = *(int *)(in_ECX + 0x2048) + uVar2;
    in_EAX = in_EAX - uVar2;
    *(uint *)(in_ECX + 0x204c) = *(int *)(in_ECX + 0x204c) + uVar2;
    if (in_EAX == 0) break;
    iVar1 = FUN_006cf330();
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  return 0;
}


/* FUN_006cf3f0 @ 006cf3f0  kind=gamemisc  attributed-by=none  size=155 */

int FUN_006cf3f0(void *param_1,uint param_2)

{
  uint in_EAX;
  int iVar1;
  int in_ECX;
  uint _Size;
  int local_4;
  
  local_4 = 0;
  if ((in_EAX < *(uint *)(in_ECX + 0x2048)) && (iVar1 = FUN_006cf260(), iVar1 != 0)) {
    return 0;
  }
  if ((*(uint *)(in_ECX + 0x2048) < in_EAX) && (iVar1 = FUN_006cf3a0(), iVar1 != 0)) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  while( true ) {
    _Size = *(int *)(in_ECX + 0x2050) - (int)*(void **)(in_ECX + 0x204c);
    if (param_2 <= _Size) {
      _Size = param_2;
    }
    memcpy(param_1,*(void **)(in_ECX + 0x204c),_Size);
    local_4 = local_4 + _Size;
    *(int *)(in_ECX + 0x204c) = *(int *)(in_ECX + 0x204c) + _Size;
    *(int *)(in_ECX + 0x2048) = *(int *)(in_ECX + 0x2048) + _Size;
    param_1 = (void *)((int)param_1 + _Size);
    param_2 = param_2 - _Size;
    if (param_2 == 0) break;
    iVar1 = FUN_006cf330();
    if (iVar1 != 0) {
      return local_4;
    }
  }
  return local_4;
}


/* FUN_006cf4e0 @ 006cf4e0  kind=gamemisc  attributed-by=none  size=69 */

undefined4 FUN_006cf4e0(void)

{
  int iVar1;
  int in_ECX;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_006908c0();
  if (iVar1 == 0) {
    uVar2 = FUN_00690cd0();
    if (in_ECX != 0) {
      uVar2 = 0;
    }
    FUN_006908c0();
  }
  return uVar2;
}


/* FUN_006cf620 @ 006cf620  kind=gamemisc  attributed-by=none  size=142 */

int FUN_006cf620(void)

{
  int *piVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int in_ECX;
  int *in_EDX;
  
  in_EDX[1] = in_EAX;
  *in_EDX = in_ECX;
  in_EDX[2] = *(int *)(in_EAX + 0x1c);
  piVar1 = in_EDX + 0x812;
  in_EDX[0x814] = (int)piVar1;
  in_EDX[0x813] = (int)piVar1;
  *piVar1 = 0;
  iVar2 = FUN_006cf0e0();
  if (iVar2 == 0) {
    iVar3 = FUN_00690930();
    in_EDX[0x11] = iVar3;
    in_EDX[0xb] = (int)FUN_006cf090;
    in_EDX[0xc] = (int)&LAB_006cf0b0;
    in_EDX[0xd] = *(int *)(in_ECX + 0x1c);
    in_EDX[4] = 0;
    in_EDX[3] = (int)(in_EDX + 0x412);
    iVar3 = FUN_006cf530(0x38);
    if ((iVar3 != 0) || (in_EDX[3] == 0)) {
      return 3;
    }
  }
  return iVar2;
}


/* FUN_006cf6b0 @ 006cf6b0  kind=gamemisc  attributed-by=none  size=326 */

int FUN_006cf6b0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  param_2 = FUN_006cf0e0();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[7] = uVar1;
    uVar2 = FUN_00691240(uVar1,0x2054,&param_2);
    if (param_2 == 0) {
      param_2 = FUN_006cf620();
      if (param_2 != 0) {
        FUN_00691290(uVar1,uVar2);
        return param_2;
      }
      param_1[3] = uVar2;
      param_2 = 0;
    }
    uVar3 = FUN_006cf4e0();
    if ((uVar3 != 0) && (uVar3 < 0xa000)) {
      uVar4 = FUN_00692230(uVar1,uVar3,&param_2);
      if (param_2 == 0) {
        uVar5 = FUN_006cf3f0(uVar4,uVar3);
        if (uVar5 == uVar3) {
          FUN_006cf230();
          FUN_00691290(uVar1,uVar2);
          param_1[3] = 0;
          param_1[1] = uVar3;
          param_1[2] = 0;
          param_1[5] = 0;
          *param_1 = uVar4;
          param_1[6] = &LAB_006cf490;
          return param_2;
        }
        FUN_006cf3f0(0,0);
        FUN_00691290(uVar1,uVar4);
      }
      param_2 = 0;
    }
    param_1[1] = 0x7fffffff;
    param_1[2] = 0;
    *param_1 = 0;
    param_1[5] = &LAB_006cf4c0;
    param_1[6] = &LAB_006cf490;
  }
  return param_2;
}


/* FUN_006d2a60 @ 006d2a60  kind=gamemisc  attributed-by=none  size=743 */

undefined4 FUN_006d2a60(int param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *in_ECX;
  int in_EDX;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int local_14;
  
  iVar9 = 0;
  local_14 = 0;
  if (0 < in_ECX[2]) {
    iVar3 = param_1 / param_2;
    while (iVar3 < (param_1 + param_4) / param_2) {
      iVar6 = in_ECX[10];
      iVar4 = FUN_00401d70();
      if (iVar4 < 0) {
        uVar10 = 0;
        iVar4 = in_ECX[2];
LAB_006d2b48:
        uVar5 = FUN_00401d70();
        while ((int)uVar5 < 0) {
          if (iVar6 < 2) {
            if ((int)uVar5 < 0) {
              return 0xffffffff;
            }
            break;
          }
          iVar6 = iVar6 + -1;
          uVar5 = FUN_00401d70();
        }
        uVar5 = uVar5 << 0x10 | uVar5 >> 0x10;
        uVar5 = (uVar5 >> 8 ^ uVar5 << 8) & 0xff00ff ^ uVar5 << 8;
        uVar5 = (uVar5 >> 4 ^ uVar5 << 4) & 0xf0f0f0f ^ uVar5 << 4;
        uVar5 = (uVar5 >> 2 ^ uVar5 * 4) & 0x33333333 ^ uVar5 * 4;
        iVar7 = iVar4 - uVar10;
        if (1 < iVar7) {
          do {
            uVar8 = iVar7 >> 1;
            uVar2 = (uint)(((uVar5 >> 1 ^ uVar5 * 2) & 0x55555555 ^ uVar5 * 2) <
                          *(uint *)(in_ECX[5] + (uVar8 + uVar10) * 4));
            iVar4 = iVar4 - (-uVar2 & uVar8);
            uVar10 = uVar10 + (uVar2 - 1 & uVar8);
            iVar7 = iVar4 - uVar10;
            iVar9 = local_14;
          } while (1 < iVar7);
        }
        if (iVar6 < *(char *)(in_ECX[7] + uVar10)) {
          uVar10 = param_3[1] + iVar6;
          if (*param_3 <= param_3[4] - ((int)(uVar10 + 7) >> 3)) {
            iVar9 = (int)(uVar10 + ((int)uVar10 >> 0x1f & 7U)) >> 3;
            param_3[3] = param_3[3] + iVar9;
            *param_3 = iVar9 + *param_3;
            param_3[1] = uVar10 & 7;
            return 0xffffffff;
          }
          param_3[3] = 0;
          *param_3 = param_3[4];
          param_3[1] = 1;
          return 0xffffffff;
        }
        uVar5 = param_3[1] + (int)*(char *)(in_ECX[7] + uVar10);
        if (param_3[4] - ((int)(uVar5 + 7) >> 3) < *param_3) {
          param_3[3] = 0;
          *param_3 = param_3[4];
          param_3[1] = 1;
        }
        else {
          iVar6 = (int)(uVar5 + ((int)uVar5 >> 0x1f & 7U)) >> 3;
          param_3[3] = param_3[3] + iVar6;
          *param_3 = iVar6 + *param_3;
          param_3[1] = uVar5 & 7;
        }
      }
      else {
        uVar5 = *(uint *)(in_ECX[8] + iVar4 * 4);
        if ((int)uVar5 < 0) {
          uVar10 = (int)uVar5 >> 0xf & 0x7fff;
          iVar4 = in_ECX[2] - (uVar5 & 0x7fff);
          goto LAB_006d2b48;
        }
        uVar10 = (int)*(char *)(in_ECX[7] + -1 + uVar5) + param_3[1];
        if (param_3[4] - ((int)(uVar10 + 7) >> 3) < *param_3) {
          param_3[3] = 0;
          *param_3 = param_3[4];
          param_3[1] = 1;
          uVar10 = uVar5 - 1;
        }
        else {
          iVar6 = (int)(uVar10 + ((int)uVar10 >> 0x1f & 7U)) >> 3;
          param_3[3] = param_3[3] + iVar6;
          param_3[1] = uVar10 & 7;
          *param_3 = iVar6 + *param_3;
          uVar10 = uVar5 - 1;
        }
      }
      if (uVar10 == 0xffffffff) {
        return 0xffffffff;
      }
      iVar6 = *in_ECX;
      iVar4 = in_ECX[4];
      iVar7 = 0;
      if (0 < iVar6) {
        do {
          iVar1 = *(int *)(in_EDX + iVar9 * 4);
          iVar9 = iVar9 + 1;
          *(float *)(iVar1 + iVar3 * 4) =
               *(float *)(iVar4 + iVar6 * uVar10 * 4 + iVar7 * 4) + *(float *)(iVar1 + iVar3 * 4);
          if (iVar9 == param_2) {
            iVar9 = 0;
            iVar3 = iVar3 + 1;
          }
          iVar7 = iVar7 + 1;
          local_14 = iVar9;
        } while (iVar7 < *in_ECX);
      }
    }
  }
  return 0;
}


/* FUN_006d2d60 @ 006d2d60  kind=gamemisc  attributed-by=none  size=868 */

undefined4 FUN_006d2d60(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *in_ECX;
  undefined4 *in_EDX;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  int local_c;
  uint local_8;
  
  if (in_ECX[2] < 1) {
    if (0 < param_2) {
      for (; param_2 != 0; param_2 = param_2 + -1) {
        *in_EDX = 0;
        in_EDX = in_EDX + 1;
      }
    }
  }
  else {
    iVar8 = 0;
    local_c = 0;
    if (0 < param_2) {
      do {
        iVar3 = in_ECX[10];
        iVar1 = FUN_00401d70();
        if (iVar1 < 0) {
          iVar1 = in_ECX[2];
          local_8 = 0;
LAB_006d2e38:
          uVar2 = FUN_00401d70();
          while ((int)uVar2 < 0) {
            if (iVar3 < 2) {
              if ((int)uVar2 < 0) {
                return 0xffffffff;
              }
              break;
            }
            iVar3 = iVar3 + -1;
            uVar2 = FUN_00401d70();
          }
          uVar2 = uVar2 << 0x10 | uVar2 >> 0x10;
          uVar2 = (uVar2 >> 8 ^ uVar2 << 8) & 0xff00ff ^ uVar2 << 8;
          uVar2 = (uVar2 >> 4 ^ uVar2 << 4) & 0xf0f0f0f ^ uVar2 << 4;
          uVar2 = (uVar2 >> 2 ^ uVar2 * 4) & 0x33333333 ^ uVar2 * 4;
          iVar5 = iVar1 - local_8;
          if (1 < iVar5) {
            do {
              uVar6 = iVar5 >> 1;
              uVar4 = (uint)(((uVar2 >> 1 ^ uVar2 * 2) & 0x55555555 ^ uVar2 * 2) <
                            *(uint *)(in_ECX[5] + (uVar6 + local_8) * 4));
              iVar1 = iVar1 - (-uVar4 & uVar6);
              local_8 = local_8 + (uVar4 - 1 & uVar6);
              iVar5 = iVar1 - local_8;
              iVar8 = local_c;
            } while (1 < iVar5);
          }
          if (iVar3 < *(char *)(in_ECX[7] + local_8)) {
            uVar2 = param_1[1] + iVar3;
            if (*param_1 <= param_1[4] - ((int)(uVar2 + 7) >> 3)) {
              iVar8 = (int)(uVar2 + ((int)uVar2 >> 0x1f & 7U)) >> 3;
              param_1[3] = param_1[3] + iVar8;
              *param_1 = iVar8 + *param_1;
              param_1[1] = uVar2 & 7;
              return 0xffffffff;
            }
            param_1[3] = 0;
            *param_1 = param_1[4];
            param_1[1] = 1;
            return 0xffffffff;
          }
          uVar2 = param_1[1] + (int)*(char *)(in_ECX[7] + local_8);
          if (param_1[4] - ((int)(uVar2 + 7) >> 3) < *param_1) {
            param_1[3] = 0;
            *param_1 = param_1[4];
            param_1[1] = 1;
          }
          else {
            iVar3 = (int)(uVar2 + ((int)uVar2 >> 0x1f & 7U)) >> 3;
            param_1[3] = param_1[3] + iVar3;
            *param_1 = iVar3 + *param_1;
            param_1[1] = uVar2 & 7;
          }
        }
        else {
          uVar2 = *(uint *)(in_ECX[8] + iVar1 * 4);
          if ((int)uVar2 < 0) {
            local_8 = (int)uVar2 >> 0xf & 0x7fff;
            iVar1 = in_ECX[2] - (uVar2 & 0x7fff);
            goto LAB_006d2e38;
          }
          uVar4 = (int)*(char *)(in_ECX[7] + -1 + uVar2) + param_1[1];
          if (param_1[4] - ((int)(uVar4 + 7) >> 3) < *param_1) {
            *param_1 = param_1[4];
            param_1[3] = 0;
            param_1[1] = 1;
            local_8 = uVar2 - 1;
          }
          else {
            iVar3 = (int)(uVar4 + ((int)uVar4 >> 0x1f & 7U)) >> 3;
            param_1[3] = param_1[3] + iVar3;
            *param_1 = iVar3 + *param_1;
            param_1[1] = uVar4 & 7;
            local_8 = uVar2 - 1;
          }
        }
        if (local_8 == 0xffffffff) {
          return 0xffffffff;
        }
        iVar3 = in_ECX[4] + *in_ECX * local_8 * 4;
        iVar1 = 0;
        if (3 < param_2 - iVar8) {
          puVar7 = in_EDX + iVar8 + 2;
          do {
            if (*in_ECX <= iVar1) goto LAB_006d3043;
            puVar7[-2] = *(undefined4 *)(iVar3 + -4 + (iVar1 + 1) * 4);
            if (*in_ECX <= iVar1 + 1) {
              iVar8 = iVar8 + 1;
              local_c = iVar8;
              goto LAB_006d3043;
            }
            puVar7[-1] = *(undefined4 *)(iVar3 + -4 + (iVar1 + 2) * 4);
            if (*in_ECX <= iVar1 + 2) {
              iVar8 = iVar8 + 2;
              local_c = iVar8;
              goto LAB_006d3043;
            }
            iVar5 = iVar1 + 3;
            *puVar7 = *(undefined4 *)(iVar3 + -4 + iVar5 * 4);
            if (*in_ECX <= iVar5) {
              iVar8 = iVar8 + 3;
              local_c = iVar8;
              goto LAB_006d3043;
            }
            iVar8 = iVar8 + 4;
            puVar7[1] = *(undefined4 *)(iVar3 + iVar5 * 4);
            iVar1 = iVar1 + 4;
            puVar7 = puVar7 + 4;
            local_c = iVar8;
          } while (iVar8 < param_2 + -3);
        }
        if (param_2 <= iVar8) {
          return 0;
        }
        puVar7 = (undefined4 *)(iVar3 + iVar1 * 4);
        while (iVar1 < *in_ECX) {
          in_EDX[iVar8] = *puVar7;
          iVar8 = iVar8 + 1;
          iVar1 = iVar1 + 1;
          puVar7 = puVar7 + 1;
          local_c = iVar8;
          if (param_2 <= iVar8) {
            return 0;
          }
        }
LAB_006d3043:
        if (param_2 <= iVar8) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}


/* FUN_006d3630 @ 006d3630  kind=gamemisc  attributed-by=none  size=348 */

uint FUN_006d3630(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int in_ECX;
  int *in_EDX;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = *(int *)(in_ECX + 0x28);
  iVar2 = FUN_00401d70();
  if (iVar2 < 0) {
    uVar6 = 0;
    iVar2 = *(int *)(in_ECX + 8);
  }
  else {
    uVar4 = *(uint *)(*(int *)(in_ECX + 0x20) + iVar2 * 4);
    if (-1 < (int)uVar4) {
      uVar6 = (int)*(char *)(*(int *)(in_ECX + 0x1c) + -1 + uVar4) + in_EDX[1];
      if (*in_EDX <= in_EDX[4] - ((int)(uVar6 + 7) >> 3)) {
        iVar7 = (int)(uVar6 + ((int)uVar6 >> 0x1f & 7U)) >> 3;
        in_EDX[3] = in_EDX[3] + iVar7;
        *in_EDX = iVar7 + *in_EDX;
        in_EDX[1] = uVar6 & 7;
        return uVar4 - 1;
      }
      in_EDX[3] = 0;
      *in_EDX = in_EDX[4];
      in_EDX[1] = 1;
      return uVar4 - 1;
    }
    uVar6 = (int)uVar4 >> 0xf & 0x7fff;
    iVar2 = *(int *)(in_ECX + 8) - (uVar4 & 0x7fff);
  }
  iVar3 = FUN_00401d70();
  do {
    if (-1 < iVar3) {
LAB_006d3713:
      uVar4 = FUN_006d3790();
      iVar3 = iVar2 - uVar6;
      if (1 < iVar3) {
        do {
          uVar5 = iVar3 >> 1;
          uVar1 = (uint)(uVar4 < *(uint *)(*(int *)(in_ECX + 0x14) + (uVar5 + uVar6) * 4));
          iVar2 = iVar2 - (-uVar1 & uVar5);
          uVar6 = uVar6 + (uVar1 - 1 & uVar5);
          iVar3 = iVar2 - uVar6;
        } while (1 < iVar3);
      }
      if (iVar7 < *(char *)(*(int *)(in_ECX + 0x1c) + uVar6)) {
        FUN_00401e30();
        return 0xffffffff;
      }
      FUN_00401e30();
      return uVar6;
    }
    if (iVar7 < 2) {
      if (iVar3 < 0) {
        return 0xffffffff;
      }
      goto LAB_006d3713;
    }
    iVar7 = iVar7 + -1;
    iVar3 = FUN_00401d70();
  } while( true );
}


/* FUN_006d3790 @ 006d3790  kind=gamemisc  attributed-by=none  size=98 */

uint FUN_006d3790(void)

{
  uint in_ECX;
  uint uVar1;
  
  uVar1 = in_ECX << 0x10 | in_ECX >> 0x10;
  uVar1 = (uVar1 >> 8 ^ uVar1 << 8) & 0xff00ff ^ uVar1 << 8;
  uVar1 = (uVar1 >> 4 ^ uVar1 << 4) & 0xf0f0f0f ^ uVar1 << 4;
  uVar1 = (uVar1 >> 2 ^ uVar1 * 4) & 0x33333333 ^ uVar1 * 4;
  return (uVar1 >> 1 ^ uVar1 * 2) & 0x55555555 ^ uVar1 * 2;
}


/* FUN_006d3c20 @ 006d3c20  kind=gamemisc  attributed-by=none  size=2146 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_006d3c20(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  int *piVar11;
  int iVar12;
  int in_ECX;
  int iVar13;
  undefined4 *puVar14;
  float *extraout_ECX;
  float *pfVar15;
  int iVar16;
  int in_EDX;
  int *piVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  float fVar29;
  undefined4 uVar30;
  size_t asStack_bc [6];
  size_t asStack_a4 [3];
  undefined4 *local_5c;
  int local_58;
  int local_50;
  int local_3c;
  int local_34;
  int local_2c;
  int local_18;
  
  iVar21 = *param_1;
  piVar11 = (int *)param_1[1];
  if (piVar11[0x7d] == 0) {
    local_58 = 0x10;
  }
  else {
    local_58 = piVar11[0x7f];
  }
  iVar1 = *(int *)(in_EDX + 0x84 + (*piVar11 * 0xf + in_ECX) * 4);
  asStack_a4[2] = 0x6d3cb1;
  iVar7 = param_7 * -4;
  asStack_a4[2 - param_7] = 0x6d3cbb;
  asStack_a4[param_7 * -2 + 2] = 0x6d3cc5;
  asStack_a4[param_7 * -3 + 2] = 0x6d3cd2;
  asStack_a4[param_7 * -4 + 2] = 0x6d3cdd;
  iVar9 = *(int *)(param_2 + 0x484) + param_7;
  asStack_a4[param_7 * -5 + 2] = 0x6d3cf4;
  iVar8 = iVar9 * -4;
  iVar22 = local_58 * param_7;
  asStack_a4[param_7 * -5 + (2 - iVar9)] = 0x6d3d26;
  *(undefined1 **)(&stack0xffffff68 + iVar7) =
       &stack0xffffff68 + iVar22 * -4 + iVar8 + param_7 * -0x14;
  asStack_a4[param_7 * -5 + ((2 - iVar22) - iVar9)] = 0x6d3d34;
  *(undefined1 **)(&stack0xffffff68 + param_7 * -8) =
       &stack0xffffff68 + iVar22 * -8 + iVar8 + param_7 * -0x14;
  asStack_a4[param_7 * -5 + ((iVar22 * -2 + 2) - iVar9)] = 0x6d3d42;
  *(undefined1 **)(&stack0xffffff68 + param_7 * -0xc) =
       &stack0xffffff68 + iVar22 * -0xc + iVar8 + param_7 * -0x14;
  asStack_a4[param_7 * -5 + ((iVar22 * -3 + 2) - iVar9)] = 0x6d3d4d;
  *(undefined1 **)(&stack0xffffff68 + param_7 * -0x10) =
       &stack0xffffff68 + iVar22 * -0x10 + iVar8 + param_7 * -0x14;
  if (1 < param_7) {
    iVar13 = local_58 << 2;
    iVar23 = param_7 + -1;
    piVar11 = (int *)(&stack0xffffff6c + param_7 * -8);
    do {
      piVar17 = piVar11 + 1;
      piVar17[param_7 + -1] = *(int *)(&stack0xffffff68 + iVar7) + iVar13;
      *piVar11 = *(int *)(&stack0xffffff68 + param_7 * -8) + iVar13;
      piVar17[-1 - param_7] = *(int *)(&stack0xffffff68 + param_7 * -0xc) + iVar13;
      piVar17[param_7 * -2 + -1] = *(int *)(&stack0xffffff68 + param_7 * -0x10) + iVar13;
      iVar13 = iVar13 + local_58 * 4;
      iVar23 = iVar23 + -1;
      piVar11 = piVar17;
    } while (iVar23 != 0);
  }
  if (0 < *(int *)(param_2 + 0x484) + param_7) {
    iVar13 = 0;
    do {
      iVar23 = iVar13 + 1;
      asStack_a4[param_7 * -5 + ((iVar13 + 3) - iVar9)] = 0;
      iVar13 = iVar23;
    } while (iVar23 < *(int *)(param_2 + 0x484) + param_7);
  }
  local_3c = 0;
  if (0 < iVar21) {
    iVar13 = iVar21;
    do {
      asStack_a4[param_7 * -5 + ((iVar22 * -4 + 2) - iVar9)] = param_7 * 4;
      asStack_a4[param_7 * -5 + ((iVar22 * -4 + 1) - iVar9)] = param_5;
      asStack_a4[param_7 * -5 + (iVar22 * -4 - iVar9)] =
           (size_t)(&stack0xffffff68 + param_7 * -0x14);
      iVar23 = local_58;
      if (iVar13 < local_58) {
        iVar23 = iVar13;
      }
      asStack_bc[param_7 * -5 + ((iVar22 * -4 + 5) - iVar9)] = 0x6d3e42;
      memcpy((void *)asStack_a4[param_7 * -5 + (iVar22 * -4 - iVar9)],
             (void *)asStack_a4[param_7 * -5 + ((iVar22 * -4 + 1) - iVar9)],
             asStack_a4[param_7 * -5 + ((iVar22 * -4 + 2) - iVar9)]);
      asStack_bc[param_7 * -5 + ((iVar22 * -4 + 5) - iVar9)] = iVar22 * 4;
      asStack_bc[param_7 * -5 + ((iVar22 * -4 + 4) - iVar9)] = 0;
      asStack_bc[param_7 * -5 + ((iVar22 * -4 + 3) - iVar9)] =
           *(undefined4 *)(&stack0xffffff68 + param_7 * -0x10);
      asStack_bc[param_7 * -5 + ((iVar22 * -4 + 2) - iVar9)] = 0x6d3e50;
      memset((void *)asStack_bc[param_7 * -5 + ((iVar22 * -4 + 3) - iVar9)],
             asStack_bc[param_7 * -5 + ((iVar22 * -4 + 4) - iVar9)],
             asStack_bc[param_7 * -5 + ((iVar22 * -4 + 5) - iVar9)]);
      iVar24 = 0;
      if (0 < param_7) {
        local_34 = param_7;
        piVar11 = (int *)(&stack0xffffff68 + param_7 * -0xc);
        do {
          iVar24 = *(int *)((int)piVar11 +
                            (int)(&stack0xffffff68 +
                                 (param_7 * -0x14 - param_3) +
                                 (param_3 - (int)(&stack0xffffff68 + param_7 * -0xc))) +
                           (param_4 - (int)(&stack0xffffff68 + param_7 * -0x14))) + local_3c * 4;
          if (*(int *)((int)piVar11 +
                      (int)(&stack0xffffff68 +
                           (param_7 * -0x14 - param_3) +
                           (param_3 - (int)(&stack0xffffff68 + param_7 * -0xc)))) == 0) {
            if (0 < iVar23) {
              iVar16 = 0;
              do {
                iVar16 = iVar16 + 1;
                *(undefined4 *)(*piVar11 + -4 + iVar16 * 4) = 0x2edbe6ff;
                *(undefined4 *)(piVar11[param_7 * 2] + -4 + iVar16 * 4) = 0;
                *(undefined4 *)(piVar11[param_7] + -4 + iVar16 * 4) = 0;
                *(undefined4 *)(piVar11[-param_7] + -4 + iVar16 * 4) = 0;
                *(undefined4 *)(iVar24 + -4 + iVar16 * 4) = 0;
              } while (iVar16 < iVar23);
            }
            piVar11[param_7 * -2 - iVar9] = 0;
          }
          else {
            local_18 = 0;
            if (3 < iVar23) {
              iVar16 = *piVar11;
              iVar25 = (iVar23 - 4U >> 2) + 1;
              local_18 = iVar25 * 4;
              puVar14 = (undefined4 *)(iVar16 + 4);
              piVar17 = (int *)(iVar24 + 0xc);
              do {
                puVar14[-1] = *(undefined4 *)(&DAT_0076aa90 + piVar17[-3] * 4);
                *puVar14 = *(undefined4 *)
                            (&DAT_0076aa90 + *(int *)((int)puVar14 + (iVar24 - iVar16)) * 4);
                puVar14[1] = *(undefined4 *)(&DAT_0076aa90 + piVar17[-1] * 4);
                puVar14[2] = *(undefined4 *)(&DAT_0076aa90 + *piVar17 * 4);
                iVar25 = iVar25 + -1;
                puVar14 = puVar14 + 4;
                piVar17 = piVar17 + 4;
              } while (iVar25 != 0);
            }
            if (local_18 < iVar23) {
              iVar16 = *piVar11;
              iVar25 = iVar23 - local_18;
              puVar14 = (undefined4 *)(iVar16 + local_18 * 4);
              do {
                *puVar14 = *(undefined4 *)
                            (&DAT_0076aa90 + *(int *)((int)puVar14 + (iVar24 - iVar16)) * 4);
                iVar25 = iVar25 + -1;
                puVar14 = puVar14 + 1;
              } while (iVar25 != 0);
            }
            asStack_a4[param_7 * -5 + ((iVar22 * -4 + 2) - iVar9)] = iVar23;
            asStack_a4[param_7 * -5 + ((iVar22 * -4 + 1) - iVar9)] = local_3c;
            asStack_a4[param_7 * -5 + (iVar22 * -4 - iVar9)] = piVar11[-param_7];
            asStack_bc[param_7 * -5 + ((iVar22 * -4 + 5) - iVar9)] = *piVar11;
            asStack_bc[param_7 * -5 + ((iVar22 * -4 + 4) - iVar9)] = 0x6d3fa7;
            FUN_006d47e0();
            pfVar15 = extraout_ECX;
            if (0 < iVar23) {
              pfVar2 = (float *)piVar11[param_7 * 2];
              iVar16 = piVar11[param_7];
              iVar25 = *piVar11;
              pfVar15 = (float *)(*(int *)((param_3 - (int)(&stack0xffffff68 + param_7 * -0xc)) +
                                          (int)piVar11) + local_3c * 4);
              pfVar10 = pfVar2;
              iVar26 = iVar23;
              do {
                fVar29 = *pfVar15 * *pfVar15;
                *pfVar10 = fVar29;
                *(float *)((int)pfVar10 + (iVar16 - (int)pfVar2)) = fVar29;
                if (*pfVar15 <= 0.0 && *pfVar15 != 0.0) {
                  *pfVar10 = *pfVar10 * -1.0;
                }
                fVar29 = *(float *)((int)pfVar10 + (iVar25 - (int)pfVar2));
                pfVar15 = pfVar15 + 1;
                *(float *)((int)pfVar10 + (iVar25 - (int)pfVar2)) = fVar29 * fVar29;
                iVar26 = iVar26 + -1;
                pfVar10 = pfVar10 + 1;
              } while (iVar26 != 0);
            }
            asStack_a4[param_7 * -5 + ((iVar22 * -4 + 2) - iVar9)] = iVar24;
            iVar24 = piVar11[param_7 * -2 - iVar9];
            asStack_a4[param_7 * -5 + ((iVar22 * -4 + 1) - iVar9)] = iVar23;
            asStack_a4[param_7 * -5 + (iVar22 * -4 - iVar9)] = local_3c;
            asStack_bc[param_7 * -5 + ((iVar22 * -4 + 5) - iVar9)] = (size_t)pfVar15;
            asStack_bc[param_7 * -5 + ((iVar22 * -4 + 5) - iVar9)] = iVar24;
            asStack_bc[param_7 * -5 + ((iVar22 * -4 + 4) - iVar9)] = 0;
            asStack_bc[param_7 * -5 + ((iVar22 * -4 + 3) - iVar9)] = *piVar11;
            asStack_bc[param_7 * -5 + ((iVar22 * -4 + 2) - iVar9)] = piVar11[param_7];
            asStack_bc[param_7 * -5 + ((iVar22 * -4 + 1) - iVar9)] = piVar11[param_7 * 2];
            asStack_bc[param_7 * -5 + (iVar22 * -4 - iVar9)] = 0x6d404b;
            FUN_006d4490();
            piVar11[param_7 * -2 - iVar9] = iVar24;
          }
          piVar11 = piVar11 + 1;
          local_34 = local_34 + -1;
          iVar24 = param_7;
        } while (local_34 != 0);
      }
      local_50 = 0;
      if (0 < *(int *)(param_2 + 0x484)) {
        local_5c = (undefined4 *)(&stack0xffffff68 + iVar24 * 4 + iVar8 + param_7 * -0x14);
        piVar11 = (int *)(param_2 + 0x888);
        do {
          iVar3 = piVar11[-0x100];
          iVar19 = *piVar11;
          iVar18 = *(int *)(param_4 + iVar3 * 4) + local_3c * 4;
          iVar27 = *(int *)(param_4 + iVar19 * 4);
          pfVar15 = *(float **)(&stack0xffffff68 + iVar3 * 4 + iVar7);
          iVar16 = *(int *)(&stack0xffffff68 + iVar3 * 4 + param_7 * -8);
          iVar24 = *(int *)(&stack0xffffff68 + iVar19 * 4 + param_7 * -8);
          iVar12 = *(int *)(&stack0xffffff68 + iVar19 * 4 + iVar7);
          iVar4 = *(int *)(&stack0xffffff68 + iVar3 * 4 + param_7 * -0xc);
          iVar5 = *(int *)(&stack0xffffff68 + iVar19 * 4 + param_7 * -0xc);
          iVar26 = *(int *)(&stack0xffffff68 + iVar3 * 4 + param_7 * -0x10);
          iVar25 = *(int *)(&stack0xffffff68 + iVar19 * 4 + param_7 * -0x10);
          if ((*(int *)(&stack0xffffff68 + iVar3 * 4 + param_7 * -0x14) != 0) ||
             (*(int *)(&stack0xffffff68 + iVar19 * 4 + param_7 * -0x14) != 0)) {
            *(undefined4 *)(&stack0xffffff68 + iVar19 * 4 + param_7 * -0x14) = 1;
            *(undefined4 *)(&stack0xffffff68 + iVar3 * 4 + param_7 * -0x14) = 1;
            local_2c = 0;
            if (0 < iVar23) {
              iVar24 = iVar24 - (int)pfVar15;
              iVar16 = iVar16 - (int)pfVar15;
              iVar25 = iVar25 - (int)pfVar15;
              iVar26 = iVar26 - (int)pfVar15;
              iVar5 = iVar5 - (int)pfVar15;
              iVar12 = iVar12 - (int)pfVar15;
              iVar19 = (iVar27 + local_3c * 4) - (int)pfVar15;
              iVar27 = iVar18 - (int)pfVar15;
              iVar4 = iVar4 - (int)pfVar15;
              do {
                if (local_2c < iVar13 + (param_6 - iVar21)) {
                  if ((*(int *)(iVar26 + (int)pfVar15) == 0) &&
                     (*(int *)(iVar25 + (int)pfVar15) == 0)) {
                    if (local_2c < iVar13 + (iVar1 - iVar21)) {
                      fVar29 = *pfVar15 + *(float *)(iVar12 + (int)pfVar15);
                      *pfVar15 = fVar29;
                      *(float *)(iVar16 + (int)pfVar15) = ABS(fVar29);
                    }
                    else {
                      fVar29 = ABS(*(float *)(iVar12 + (int)pfVar15)) + ABS(*pfVar15);
                      if (0.0 <= *(float *)(iVar12 + (int)pfVar15) + *pfVar15) {
                        *(float *)(iVar16 + (int)pfVar15) = fVar29;
                      }
                      else {
                        *(float *)(iVar16 + (int)pfVar15) = fVar29;
                        fVar29 = -fVar29;
                      }
                      *pfVar15 = fVar29;
                    }
                    *(undefined4 *)(iVar24 + (int)pfVar15) = 0;
                    *(undefined4 *)(iVar12 + (int)pfVar15) = 0;
                    *(undefined4 *)(iVar25 + (int)pfVar15) = 1;
                    *(undefined4 *)(iVar19 + (int)pfVar15) = 0;
                  }
                  else {
                    *pfVar15 = ABS(*(float *)(iVar12 + (int)pfVar15)) + ABS(*pfVar15);
                    *(float *)(iVar16 + (int)pfVar15) =
                         *(float *)(iVar24 + (int)pfVar15) + *(float *)(iVar16 + (int)pfVar15);
                    *(undefined4 *)(iVar25 + (int)pfVar15) = 1;
                    *(undefined4 *)(iVar26 + (int)pfVar15) = 1;
                    uVar20 = *(uint *)(iVar19 + (int)pfVar15);
                    uVar6 = *(uint *)(iVar27 + (int)pfVar15);
                    if ((int)((uVar20 ^ (int)uVar20 >> 0x1f) - ((int)uVar20 >> 0x1f)) <
                        (int)((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f))) {
                      if ((int)uVar6 < 1) {
                        *(uint *)(iVar19 + (int)pfVar15) = uVar20 - uVar6;
                      }
                      else {
                        *(uint *)(iVar19 + (int)pfVar15) = uVar6 - uVar20;
                      }
                    }
                    else {
                      if ((int)uVar20 < 1) {
                        iVar28 = uVar20 - uVar6;
                      }
                      else {
                        iVar28 = uVar6 - uVar20;
                      }
                      *(int *)(iVar19 + (int)pfVar15) = iVar28;
                      *(uint *)(iVar27 + (int)pfVar15) = uVar20;
                    }
                    uVar20 = (int)*(uint *)(iVar27 + (int)pfVar15) >> 0x1f;
                    if ((int)(((*(uint *)(iVar27 + (int)pfVar15) ^ uVar20) - uVar20) * 2) <=
                        *(int *)(iVar19 + (int)pfVar15)) {
                      *(int *)(iVar19 + (int)pfVar15) = -*(int *)(iVar19 + (int)pfVar15);
                      *(int *)(iVar27 + (int)pfVar15) = -*(int *)(iVar27 + (int)pfVar15);
                    }
                  }
                }
                local_2c = local_2c + 1;
                fVar29 = *(float *)(iVar5 + (int)pfVar15) + *(float *)(iVar4 + (int)pfVar15);
                pfVar15 = pfVar15 + 1;
                *(float *)(iVar5 + -4 + (int)pfVar15) = fVar29;
                *(float *)(iVar4 + -4 + (int)pfVar15) = fVar29;
              } while (local_2c < iVar23);
            }
            asStack_a4[param_7 * -5 + ((iVar22 * -4 + 2) - iVar9)] = iVar18;
            asStack_a4[param_7 * -5 + ((iVar22 * -4 + 1) - iVar9)] = iVar23;
            asStack_a4[param_7 * -5 + (iVar22 * -4 - iVar9)] = local_3c;
            uVar30 = *local_5c;
            asStack_bc[param_7 * -5 + ((iVar22 * -4 + 5) - iVar9)] = local_2c;
            asStack_bc[param_7 * -5 + ((iVar22 * -4 + 5) - iVar9)] = uVar30;
            asStack_bc[param_7 * -5 + ((iVar22 * -4 + 4) - iVar9)] =
                 *(undefined4 *)(&stack0xffffff68 + iVar3 * 4 + param_7 * -0x10);
            asStack_bc[param_7 * -5 + ((iVar22 * -4 + 3) - iVar9)] =
                 *(undefined4 *)(&stack0xffffff68 + iVar3 * 4 + param_7 * -0xc);
            asStack_bc[param_7 * -5 + ((iVar22 * -4 + 2) - iVar9)] =
                 *(undefined4 *)(&stack0xffffff68 + iVar3 * 4 + param_7 * -8);
            asStack_bc[param_7 * -5 + ((iVar22 * -4 + 1) - iVar9)] =
                 *(undefined4 *)(&stack0xffffff68 + iVar3 * 4 + iVar7);
            asStack_bc[param_7 * -5 + (iVar22 * -4 - iVar9)] = 0x6d43e4;
            FUN_006d4490();
            *local_5c = uVar30;
            local_5c = local_5c + 1;
          }
          local_50 = local_50 + 1;
          piVar11 = piVar11 + 1;
        } while (local_50 < *(int *)(param_2 + 0x484));
      }
      iVar13 = iVar13 - local_58;
      local_3c = local_3c + local_58;
    } while (local_3c < iVar21);
  }
  iVar21 = 0;
  if (0 < *(int *)(param_2 + 0x484)) {
    piVar11 = (int *)(param_2 + 0x888);
    do {
      if ((*(int *)(param_5 + piVar11[-0x100] * 4) != 0) || (*(int *)(param_5 + *piVar11 * 4) != 0))
      {
        *(undefined4 *)(param_5 + piVar11[-0x100] * 4) = 1;
        *(undefined4 *)(param_5 + *piVar11 * 4) = 1;
      }
      iVar21 = iVar21 + 1;
      piVar11 = piVar11 + 1;
    } while (iVar21 < *(int *)(param_2 + 0x484));
  }
  return;
}


/* FUN_006d4490 @ 006d4490  kind=gamemisc  attributed-by=none  size=834 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Type propagation algorithm not settling */

void FUN_006d4490(int param_1,float *param_2,int param_3,int param_4,undefined4 param_5,int param_6,
                 int param_7,int param_8)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int in_EDX;
  float *pfVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  undefined1 auVar10 [16];
  float fVar11;
  size_t asStack_6c [3];
  undefined8 uStack_60;
  float local_18;
  int local_14;
  
  iVar2 = *(int *)(in_ECX + 4);
  uStack_60._4_4_ = 0x6d44c3;
  iVar3 = param_7 * -4;
  iVar7 = param_7;
  if ((*(int *)(iVar2 + 500) != 0) && (iVar7 = *(int *)(iVar2 + 0x1f8) - param_6, param_7 < iVar7))
  {
    iVar7 = param_7;
  }
  auVar10 = ZEXT816(0);
  local_18 = 0.0;
  local_14 = 0;
  if (0 < iVar7) {
    pfVar5 = param_2;
    iVar8 = iVar7;
    do {
      if ((param_4 == 0) || (*(int *)((param_4 - (int)param_2) + (int)pfVar5) == 0)) {
        dVar9 = (double)(*pfVar5 / *(float *)((param_3 - (int)param_2) + (int)pfVar5));
        pfVar1 = (float *)((param_1 - (int)param_2) + (int)pfVar5);
        if (0.0 < *pfVar1 || *pfVar1 == 0.0) {
          *(undefined4 *)((int)&uStack_60 + iVar3 + 4) = 0x6d458b;
          libm_sse2_sqrt_precise();
          *(double *)((int)&uStack_60 + iVar3) = dVar9 + 0.5;
          asStack_6c[2 - param_7] = 0x6d45a6;
          floor(*(double *)((int)&uStack_60 + iVar3));
          *(undefined4 *)((int)&uStack_60 + iVar3 + 4) = 0x6d45ae;
          iVar4 = FUN_0068d910();
        }
        else {
          *(undefined4 *)((int)&uStack_60 + iVar3 + 4) = 0x6d4552;
          libm_sse2_sqrt_precise();
          *(double *)((int)&uStack_60 + iVar3) = dVar9 + 0.5;
          asStack_6c[2 - param_7] = 0x6d456d;
          dVar9 = floor(*(double *)((int)&uStack_60 + iVar3));
          iVar4 = (int)-dVar9;
        }
        *(int *)((param_8 - (int)param_2) + (int)pfVar5) = iVar4;
      }
      pfVar5 = pfVar5 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    auVar10 = ZEXT416(0);
    local_14 = iVar7;
  }
  if (local_14 < param_7) {
    piVar6 = (int *)(param_8 + local_14 * 4);
    iVar7 = (int)param_2 - param_8;
    iVar8 = 0;
    do {
      if ((param_4 == 0) || (*(int *)((param_1 - param_8) + (param_4 - param_1) + (int)piVar6) == 0)
         ) {
        fVar11 = *(float *)(iVar7 + (int)piVar6) / *(float *)((param_3 - param_8) + (int)piVar6);
        if ((0.25 <= fVar11) || ((param_4 != 0 && (local_14 < in_EDX - param_6)))) {
          dVar9 = (double)fVar11;
          pfVar5 = (float *)((param_1 - param_8) + (int)piVar6);
          if (0.0 < *pfVar5 || *pfVar5 == 0.0) {
            *(undefined4 *)((int)&uStack_60 + iVar3 + 4) = 0x6d46a9;
            libm_sse2_sqrt_precise();
            *(double *)((int)&uStack_60 + iVar3) = dVar9 + 0.5;
            asStack_6c[2 - param_7] = 0x6d46c4;
            floor(*(double *)((int)&uStack_60 + iVar3));
            *(undefined4 *)((int)&uStack_60 + iVar3 + 4) = 0x6d46cc;
            iVar4 = FUN_0068d910();
          }
          else {
            *(undefined4 *)((int)&uStack_60 + iVar3 + 4) = 0x6d4670;
            libm_sse2_sqrt_precise();
            *(double *)((int)&uStack_60 + iVar3) = dVar9 + 0.5;
            asStack_6c[2 - param_7] = 0x6d468b;
            dVar9 = floor(*(double *)((int)&uStack_60 + iVar3));
            iVar4 = (int)-dVar9;
          }
          *piVar6 = iVar4;
          *(float *)(iVar7 + (int)piVar6) =
               (float)(iVar4 * iVar4) * *(float *)((param_3 - param_8) + (int)piVar6);
          auVar10 = ZEXT416((uint)local_18);
        }
        else {
          auVar10._0_4_ = auVar10._0_4_ + fVar11;
          *(int *)(&stack0xffffffa8 + iVar8 * 4 + iVar3) = iVar7 + (int)piVar6;
          iVar8 = iVar8 + 1;
          local_18 = auVar10._0_4_;
        }
      }
      local_14 = local_14 + 1;
      piVar6 = piVar6 + 1;
    } while (local_14 < param_7);
    if (iVar8 != 0) {
      *(code **)((int)&uStack_60 + iVar3 + 4) = FUN_006d4870;
      *(undefined4 *)((int)&uStack_60 + iVar3) = 4;
      asStack_6c[2 - param_7] = iVar8;
      asStack_6c[1 - param_7] = (size_t)(&stack0xffffffa8 + iVar3);
      asStack_6c[-param_7] = 0x6d4729;
      qsort((void *)asStack_6c[1 - param_7],asStack_6c[2 - param_7],
            *(size_t *)((int)&uStack_60 + iVar3),*(_PtFuncCompare **)((int)&uStack_60 + iVar3 + 4));
      iVar7 = 0;
      if (0 < iVar8) {
        do {
          iVar4 = *(int *)(&stack0xffffffa8 + iVar7 * 4 + iVar3) - (int)param_2 >> 2;
          if ((double)local_18 < *(double *)(iVar2 + 0x200)) {
            *(undefined4 *)(param_8 + iVar4 * 4) = 0;
            param_2[iVar4] = 0.0;
          }
          else {
            local_18 = local_18 - 1.0;
            *(int *)(param_8 + iVar4 * 4) =
                 (int)(float)(*(uint *)(param_1 + iVar4 * 4) & 0xbf800000 | 0x3f800000);
            param_2[iVar4] = *(float *)(param_3 + iVar4 * 4);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar8);
        return;
      }
    }
  }
  return;
}


/* FUN_006d47e0 @ 006d47e0  kind=gamemisc  attributed-by=none  size=130 */

void FUN_006d47e0(int param_1,uint *param_2,int param_3,int param_4)

{
  int in_ECX;
  int in_EDX;
  uint *puVar1;
  int iVar2;
  float in_XMM1_Da;
  float in_XMM2_Da;
  float fVar3;
  
  iVar2 = 0;
  if (0 < param_4) {
    puVar1 = param_2;
    do {
      fVar3 = in_XMM1_Da;
      if (in_ECX - param_3 <= iVar2) {
        fVar3 = in_XMM2_Da;
      }
      iVar2 = iVar2 + 1;
      *puVar1 = (uint)(fVar3 <= ABS(*(float *)((int)puVar1 +
                                              (in_EDX - param_1) + (param_1 - (int)param_2))) /
                                *(float *)((param_1 - (int)param_2) + (int)puVar1));
      puVar1 = puVar1 + 1;
    } while (iVar2 < param_4);
  }
  return;
}


/* FUN_006d49c0 @ 006d49c0  kind=gamemisc  attributed-by=none  size=338 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_006d49c0(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *in_ECX;
  undefined4 in_EDX;
  int iVar6;
  float *pfVar7;
  undefined4 in_XMM3_Da;
  int aiStack_44 [4];
  undefined1 auStack_34 [4];
  int iStack_30;
  
  iVar1 = *in_ECX;
  iVar2 = in_ECX[10];
  iStack_30 = 0x6d49e7;
  iVar3 = iVar2 * -4;
  param_2 = *(float *)(in_ECX[1] + 4) + param_2;
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      *(undefined4 *)(&stack0xffffffd4 + iVar4 * 4 + iVar3) = 0xc61c3c00;
      iVar4 = iVar4 + 1;
    } while (iVar4 < in_ECX[10]);
  }
  if (param_2 < *(float *)(in_ECX[1] + 8)) {
    param_2 = *(float *)(in_ECX[1] + 8);
  }
  iVar4 = 0;
  if (3 < iVar1) {
    iVar5 = (iVar1 - 4U >> 2) + 1;
    iVar4 = iVar5 * 4;
    iVar6 = 8;
    pfVar7 = (float *)(param_1 + 8);
    do {
      pfVar7[-2] = *(float *)((int)pfVar7 + in_ECX[4] + -param_1 + -8) + param_2;
      pfVar7[-1] = *(float *)((int)pfVar7 + in_ECX[4] + -param_1 + -4) + param_2;
      *pfVar7 = *(float *)(iVar6 + in_ECX[4]) + param_2;
      pfVar7[1] = *(float *)((int)pfVar7 + in_ECX[4] + (4 - param_1)) + param_2;
      iVar5 = iVar5 + -1;
      iVar6 = iVar6 + 0x10;
      pfVar7 = pfVar7 + 4;
    } while (iVar5 != 0);
  }
  while (iVar4 < iVar1) {
    iVar4 = iVar4 + 1;
    *(float *)(param_1 + -4 + iVar4 * 4) = *(float *)(in_ECX[4] + -4 + iVar4 * 4) + param_2;
  }
  (&iStack_30)[-iVar2] = iVar1;
  (&iStack_30)[-iVar2] = in_XMM3_Da;
  *(undefined1 **)(auStack_34 + iVar3) = &stack0xffffffd4 + iVar3;
  aiStack_44[3 - iVar2] = param_1;
  aiStack_44[2 - iVar2] = in_EDX;
  aiStack_44[1 - iVar2] = 0x6d4afb;
  FUN_006d5760();
  aiStack_44[1 - iVar2] = param_1;
  aiStack_44[-iVar2] = 0x6d4b05;
  FUN_006d54c0();
  return;
}


/* FUN_006d4b20 @ 006d4b20  kind=gamemisc  attributed-by=none  size=842 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Type propagation algorithm not settling */

void FUN_006d4b20(float *param_1)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  uint uVar11;
  float *pfVar12;
  uint *in_ECX;
  int iVar13;
  float *in_EDX;
  int iVar14;
  float *pfVar15;
  uint uVar16;
  float afStack_48 [4];
  float fStack_38;
  float local_28 [7];
  int local_c;
  
  uVar16 = *in_ECX;
  fStack_38 = 1.003707e-38;
  iVar2 = uVar16 * -4;
  afStack_48[4 - uVar16] = -NAN;
  afStack_48[3 - uVar16] = (float)in_ECX;
  afStack_48[3 - uVar16] = 140.0;
  afStack_48[2 - uVar16] = (float)param_1;
  afStack_48[1 - uVar16] = (float)in_EDX;
  afStack_48[-uVar16] = 1.0037113e-38;
  FUN_006d4e80();
  iVar13 = 0;
  if (0 < (int)uVar16) {
    if (((3 < uVar16) &&
        ((param_1 + (uVar16 - 1) < local_28 + (-3 - uVar16) || (afStack_48 + 4 < param_1)))) &&
       ((in_EDX + (uVar16 - 1) < local_28 + (-3 - uVar16) || (afStack_48 + 4 < in_EDX)))) {
      uVar11 = uVar16 & 0x80000003;
      if ((int)uVar11 < 0) {
        uVar11 = (uVar11 - 1 | 0xfffffffc) + 1;
      }
      pfVar12 = in_EDX;
      do {
        pfVar15 = (float *)(((int)param_1 - (int)in_EDX) + (int)pfVar12);
        fVar3 = pfVar15[1];
        fVar4 = pfVar15[2];
        fVar5 = pfVar15[3];
        fVar6 = *pfVar12;
        fVar7 = pfVar12[1];
        fVar8 = pfVar12[2];
        fVar9 = pfVar12[3];
        iVar13 = iVar13 + 4;
        pfVar12 = pfVar12 + 4;
        pfVar1 = (float *)((int)afStack_48 + (iVar2 - (int)in_EDX) + 4U + (int)pfVar12);
        *pfVar1 = fVar6 - *pfVar15;
        pfVar1[1] = fVar7 - fVar3;
        pfVar1[2] = fVar8 - fVar4;
        pfVar1[3] = fVar9 - fVar5;
      } while (iVar13 < (int)(uVar16 - uVar11));
    }
    if (iVar13 < (int)uVar16) {
      if (3 < (int)(uVar16 - iVar13)) {
        pfVar12 = param_1 + iVar13 + 1;
        iVar14 = iVar13;
        pfVar15 = (float *)(&stack0xffffffd4 + iVar13 * 4 + iVar2);
        do {
          iVar13 = iVar14 + 4;
          pfVar15[-2] = in_EDX[iVar14] - pfVar12[-1];
          *(float *)((int)pfVar12 + (int)local_28 + (iVar2 - (int)param_1) + -0xc) =
               *(float *)((int)pfVar12 + ((int)in_EDX - (int)param_1)) - *pfVar12;
          *pfVar15 = *(float *)((int)pfVar15 + ((int)in_EDX - (int)(local_28 + (-3 - uVar16)))) -
                     pfVar12[1];
          pfVar15[1] = in_EDX[iVar14 + 3] - pfVar12[2];
          pfVar12 = pfVar12 + 4;
          iVar14 = iVar13;
          pfVar15 = pfVar15 + 4;
        } while (iVar13 < (int)(uVar16 - 3));
      }
      if (iVar13 < (int)uVar16) {
        iVar14 = uVar16 - iVar13;
        pfVar12 = param_1 + iVar13;
        do {
          *(float *)((int)pfVar12 + (int)local_28 + (iVar2 - (int)param_1) + -0xc) =
               *(float *)((int)pfVar12 + ((int)in_EDX - (int)param_1)) - *pfVar12;
          iVar14 = iVar14 + -1;
          pfVar12 = pfVar12 + 1;
        } while (iVar14 != 0);
      }
    }
  }
  afStack_48[4 - uVar16] = (float)*(undefined4 *)(in_ECX[1] + 0x80);
  afStack_48[3 - uVar16] = (float)in_ECX;
  afStack_48[3 - uVar16] = 0.0;
  afStack_48[2 - uVar16] = (float)param_1;
  afStack_48[1 - uVar16] = (float)(local_28 + (-3 - uVar16));
  afStack_48[-uVar16] = 1.0037683e-38;
  FUN_006d4e80();
  iVar13 = 0;
  if (0 < (int)uVar16) {
    if ((3 < uVar16) &&
       ((in_EDX + (uVar16 - 1) < local_28 + (-3 - uVar16) || (afStack_48 + 4 < in_EDX)))) {
      uVar11 = uVar16 & 0x80000003;
      if ((int)uVar11 < 0) {
        uVar11 = (uVar11 - 1 | 0xfffffffc) + 1;
      }
      pfVar12 = local_28 + (-3 - uVar16);
      do {
        pfVar15 = (float *)((int)pfVar12 + ((int)in_EDX - (int)(local_28 + (-3 - uVar16))));
        fVar3 = pfVar15[1];
        fVar4 = pfVar15[2];
        fVar5 = pfVar15[3];
        iVar13 = iVar13 + 4;
        *pfVar12 = *pfVar15 - *pfVar12;
        pfVar12[1] = fVar3 - pfVar12[1];
        pfVar12[2] = fVar4 - pfVar12[2];
        pfVar12[3] = fVar5 - pfVar12[3];
        pfVar12 = pfVar12 + 4;
      } while (iVar13 < (int)(uVar16 - uVar11));
    }
    if (iVar13 < (int)uVar16) {
      if (3 < (int)(uVar16 - iVar13)) {
        iVar14 = iVar13 + 3;
        local_c = ((uVar16 - iVar13) - 4 >> 2) + 1;
        iVar10 = iVar13 + -2;
        iVar13 = iVar13 + local_c * 4;
        pfVar12 = local_28 + (iVar10 - uVar16);
        pfVar15 = in_EDX + iVar14;
        do {
          local_c = local_c + -1;
          pfVar12[-1] = pfVar15[-3] - pfVar12[-1];
          *pfVar12 = *(float *)((int)pfVar12 + ((int)in_EDX - (int)(local_28 + (-3 - uVar16)))) -
                     *pfVar12;
          pfVar12[1] = pfVar15[-1] - pfVar12[1];
          pfVar12[2] = *pfVar15 - pfVar12[2];
          pfVar12 = pfVar12 + 4;
          pfVar15 = pfVar15 + 4;
        } while (local_c != 0);
      }
      if (iVar13 < (int)uVar16) {
        iVar14 = uVar16 - iVar13;
        pfVar12 = local_28 + ((iVar13 + -3) - uVar16);
        do {
          *pfVar12 = *(float *)((int)pfVar12 + ((int)in_EDX - (int)(local_28 + (-3 - uVar16)))) -
                     *pfVar12;
          iVar14 = iVar14 + -1;
          pfVar12 = pfVar12 + 1;
        } while (iVar14 != 0);
      }
    }
    if (0 < (int)uVar16) {
      pfVar12 = param_1;
      do {
        iVar13 = (int)(*pfVar12 + 0.5);
        if (iVar13 < 0x28) {
          if (iVar13 < 0) {
            iVar13 = 0;
          }
        }
        else {
          iVar13 = 0x27;
        }
        *pfVar12 = *(float *)(in_ECX[1] + 0x150 + iVar13 * 4) +
                   *(float *)((int)pfVar12 + (int)local_28 + (iVar2 - (int)param_1) + -0xc);
        uVar16 = uVar16 - 1;
        pfVar12 = pfVar12 + 1;
      } while (uVar16 != 0);
    }
  }
  return;
}


/* FUN_006d4e80 @ 006d4e80  kind=gamemisc  attributed-by=none  size=1557 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_006d4e80(float *param_1,int param_2,float param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  int iVar6;
  int in_ECX;
  int iVar7;
  uint *in_EDX;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uStack_64;
  int local_38;
  float local_34;
  float local_30;
  float local_24;
  float local_8;
  
  iVar1 = in_ECX * -4;
  (&uStack_64)[-in_ECX] = 0x6d4eab;
  (&uStack_64)[in_ECX * -2] = 0x6d4eb5;
  (&uStack_64)[in_ECX * -3] = 0x6d4ebf;
  (&uStack_64)[in_ECX * -4] = 0x6d4ec9;
  fVar15 = *param_1 + param_3;
  fVar14 = 0.0;
  local_8 = 0.0;
  local_34 = 0.0;
  if (fVar15 < 1.0) {
    fVar15 = 1.0;
  }
  fVar16 = fVar15 * fVar15 * 0.5;
  local_24 = 1.0;
  fVar12 = fVar16 + 0.0;
  local_30 = fVar16 * fVar15 + 0.0;
  *(float *)(&stack0xffffffa0 + iVar1) = fVar12;
  *(float *)(&stack0xffffffa0 + in_ECX * -8) = fVar12;
  *(undefined4 *)(&stack0xffffffa0 + in_ECX * -0xc) = 0;
  *(float *)(&stack0xffffffa0 + in_ECX * -0x10) = local_30;
  *(undefined4 *)(&stack0xffffffa0 + in_ECX * -0x14) = 0;
  if (1 < in_ECX) {
    local_38 = in_ECX + -1;
    pfVar3 = (float *)(&stack0xffffffa4 + iVar1);
    fVar15 = fVar12;
    do {
      fVar16 = *(float *)(((int)param_1 - (int)(&stack0xffffffa0 + iVar1)) + (int)pfVar3) + param_3;
      if (fVar16 < 1.0) {
        fVar16 = 1.0;
      }
      fVar13 = fVar16 * fVar16;
      pfVar4 = pfVar3 + 1;
      local_38 = local_38 + -1;
      fVar11 = local_24 * fVar13;
      fVar12 = fVar12 + fVar13;
      fVar15 = fVar15 + fVar11;
      local_30 = fVar13 * fVar16 + local_30;
      *pfVar3 = fVar12;
      fVar14 = fVar14 + fVar11 * local_24;
      pfVar4[-1 - in_ECX] = fVar15;
      local_34 = fVar11 * fVar16 + local_34;
      pfVar4[in_ECX * -2 + -1] = fVar14;
      pfVar4[in_ECX * -3 + -1] = local_30;
      local_24 = local_24 + 1.0;
      pfVar4[in_ECX * -4 + -1] = local_34;
      pfVar3 = pfVar4;
    } while (local_38 != 0);
  }
  fVar15 = 0.0;
  fVar16 = 1.0;
  uVar5 = *in_EDX;
  iVar8 = (int)uVar5 >> 0x10;
  iVar7 = 0;
  fVar14 = 0.0;
  if (iVar8 < 0) {
    iVar10 = 0;
    do {
      uVar5 = uVar5 & 0xffff;
      fVar16 = *(float *)(&stack0xffffffa0 + uVar5 * 4 + in_ECX * -8) -
               *(float *)(&stack0xffffffa0 + iVar8 * -4 + in_ECX * -8);
      local_8 = (*(float *)(&stack0xffffffa0 + iVar8 * -4 + in_ECX * -0x10) +
                *(float *)(&stack0xffffffa0 + uVar5 * 4 + in_ECX * -0x10)) *
                (*(float *)(&stack0xffffffa0 + iVar8 * -4 + in_ECX * -0xc) +
                *(float *)(&stack0xffffffa0 + uVar5 * 4 + in_ECX * -0xc)) -
                (*(float *)(&stack0xffffffa0 + uVar5 * 4 + in_ECX * -0x14) -
                *(float *)(&stack0xffffffa0 + iVar8 * -4 + in_ECX * -0x14)) * fVar16;
      fVar15 = (*(float *)(&stack0xffffffa0 + uVar5 * 4 + in_ECX * -0x14) -
               *(float *)(&stack0xffffffa0 + iVar8 * -4 + in_ECX * -0x14)) *
               (*(float *)(&stack0xffffffa0 + iVar8 * -4 + iVar1) +
               *(float *)(&stack0xffffffa0 + uVar5 * 4 + iVar1)) -
               (*(float *)(&stack0xffffffa0 + iVar8 * -4 + in_ECX * -0x10) +
               *(float *)(&stack0xffffffa0 + uVar5 * 4 + in_ECX * -0x10)) * fVar16;
      fVar16 = (*(float *)(&stack0xffffffa0 + iVar8 * -4 + in_ECX * -0xc) +
               *(float *)(&stack0xffffffa0 + uVar5 * 4 + in_ECX * -0xc)) *
               (*(float *)(&stack0xffffffa0 + iVar8 * -4 + iVar1) +
               *(float *)(&stack0xffffffa0 + uVar5 * 4 + iVar1)) - fVar16 * fVar16;
      fVar12 = (fVar14 * fVar15 + local_8) / fVar16;
      if (fVar12 < 0.0) {
        fVar12 = 0.0;
      }
      iVar7 = iVar7 + 1;
      fVar14 = fVar14 + 1.0;
      *(float *)(iVar10 + param_2) = fVar12 - param_3;
      iVar10 = iVar7 * 4;
      uVar5 = in_EDX[iVar7];
      iVar8 = (int)uVar5 >> 0x10;
    } while (iVar8 < 0);
  }
  uVar5 = in_EDX[iVar7];
  while (uVar2 = uVar5 & 0xffff, (int)uVar2 < in_ECX) {
    iVar8 = (int)uVar5 >> 0x10;
    fVar16 = *(float *)(&stack0xffffffa0 + uVar2 * 4 + in_ECX * -8) -
             *(float *)(&stack0xffffffa0 + iVar8 * 4 + in_ECX * -8);
    local_8 = (*(float *)(&stack0xffffffa0 + uVar2 * 4 + in_ECX * -0x10) -
              *(float *)(&stack0xffffffa0 + iVar8 * 4 + in_ECX * -0x10)) *
              (*(float *)(&stack0xffffffa0 + uVar2 * 4 + in_ECX * -0xc) -
              *(float *)(&stack0xffffffa0 + iVar8 * 4 + in_ECX * -0xc)) -
              (*(float *)(&stack0xffffffa0 + uVar2 * 4 + in_ECX * -0x14) -
              *(float *)(&stack0xffffffa0 + iVar8 * 4 + in_ECX * -0x14)) * fVar16;
    fVar15 = (*(float *)(&stack0xffffffa0 + uVar2 * 4 + in_ECX * -0x14) -
             *(float *)(&stack0xffffffa0 + iVar8 * 4 + in_ECX * -0x14)) *
             (*(float *)(&stack0xffffffa0 + uVar2 * 4 + iVar1 + -0x60 + 0x60) -
             *(float *)(&stack0xffffffa0 + iVar8 * 4 + iVar1 + -0x60 + 0x60)) -
             (*(float *)(&stack0xffffffa0 + uVar2 * 4 + in_ECX * -0x10) -
             *(float *)(&stack0xffffffa0 + iVar8 * 4 + in_ECX * -0x10)) * fVar16;
    fVar16 = (*(float *)(&stack0xffffffa0 + uVar2 * 4 + in_ECX * -0xc) -
             *(float *)(&stack0xffffffa0 + iVar8 * 4 + in_ECX * -0xc)) *
             (*(float *)(&stack0xffffffa0 + uVar2 * 4 + iVar1 + -0x60 + 0x60) -
             *(float *)(&stack0xffffffa0 + iVar8 * 4 + iVar1 + -0x60 + 0x60)) - fVar16 * fVar16;
    fVar12 = (fVar14 * fVar15 + local_8) / fVar16;
    if (fVar12 < 0.0) {
      fVar12 = 0.0;
    }
    iVar7 = iVar7 + 1;
    fVar14 = fVar14 + 1.0;
    *(float *)(param_2 + -4 + iVar7 * 4) = fVar12 - param_3;
    uVar5 = in_EDX[iVar7];
  }
  fVar12 = 0.0;
  while (iVar7 < in_ECX) {
    fVar11 = (fVar14 * fVar15 + local_8) / fVar16;
    if (fVar11 < 0.0) {
      fVar11 = 0.0;
    }
    iVar7 = iVar7 + 1;
    fVar14 = fVar14 + 1.0;
    *(float *)(param_2 + -4 + iVar7 * 4) = fVar11 - param_3;
  }
  if (0 < param_4) {
    iVar8 = param_4 / 2;
    iVar7 = 0;
    if (iVar8 - param_4 < 0) {
      param_1 = (float *)(iVar8 - param_4);
      iVar10 = iVar8 * 4;
      iVar9 = (iVar8 - param_4) * -4;
      iVar6 = (param_4 - iVar8) * 4;
      do {
        fVar14 = *(float *)(&stack0xffffffa0 + iVar10 + in_ECX * -8) -
                 *(float *)(&stack0xffffffa0 + iVar9 + in_ECX * -8);
        fVar15 = (*(float *)(&stack0xffffffa0 + iVar10 + in_ECX * -0x14) -
                 *(float *)(&stack0xffffffa0 + iVar9 + in_ECX * -0x14)) *
                 (*(float *)(&stack0xffffffa0 + iVar9 + iVar1) +
                 *(float *)(&stack0xffffffa0 + iVar10 + iVar1)) -
                 (*(float *)(&stack0xffffffa0 + iVar9 + in_ECX * -0x10) +
                 *(float *)(&stack0xffffffa0 + iVar10 + in_ECX * -0x10)) * fVar14;
        local_8 = (*(float *)(&stack0xffffffa0 + iVar9 + in_ECX * -0x10) +
                  *(float *)(&stack0xffffffa0 + iVar10 + in_ECX * -0x10)) *
                  (*(float *)(&stack0xffffffa0 + iVar9 + in_ECX * -0xc) +
                  *(float *)(&stack0xffffffa0 + iVar10 + in_ECX * -0xc)) -
                  (*(float *)(&stack0xffffffa0 + iVar10 + in_ECX * -0x14) -
                  *(float *)(&stack0xffffffa0 + iVar9 + in_ECX * -0x14)) * fVar14;
        fVar16 = (*(float *)(&stack0xffffffa0 + iVar9 + in_ECX * -0xc) +
                 *(float *)(&stack0xffffffa0 + iVar10 + in_ECX * -0xc)) *
                 (*(float *)(&stack0xffffffa0 + iVar9 + iVar1) +
                 *(float *)(&stack0xffffffa0 + iVar10 + iVar1)) - fVar14 * fVar14;
        fVar14 = (fVar12 * fVar15 + local_8) / fVar16 - param_3;
        if (fVar14 < *(float *)(param_2 + iVar7 * 4)) {
          *(float *)(param_2 + iVar7 * 4) = fVar14;
        }
        iVar9 = iVar6 + -4;
        iVar10 = iVar10 + 4;
        iVar7 = iVar7 + 1;
        param_1 = (float *)((int)param_1 + 1);
        fVar12 = fVar12 + 1.0;
        iVar6 = iVar9;
      } while ((int)param_1 < 0);
    }
    iVar10 = iVar8 + iVar7;
    if (iVar10 < in_ECX) {
      local_38 = iVar10 * 4;
      iVar6 = ((iVar8 - param_4) + iVar7) * 4;
      iVar8 = (iVar10 - param_4) * 4;
      do {
        fVar14 = *(float *)(&stack0xffffffa0 + local_38 + in_ECX * -8) -
                 *(float *)(&stack0xffffffa0 + iVar8 + in_ECX * -8);
        fVar15 = (*(float *)(&stack0xffffffa0 + local_38 + in_ECX * -0x14) -
                 *(float *)(&stack0xffffffa0 + iVar8 + in_ECX * -0x14)) *
                 (*(float *)(&stack0xffffffa0 + local_38 + iVar1) -
                 *(float *)(&stack0xffffffa0 + iVar8 + iVar1)) -
                 (*(float *)(&stack0xffffffa0 + local_38 + in_ECX * -0x10) -
                 *(float *)(&stack0xffffffa0 + iVar8 + in_ECX * -0x10)) * fVar14;
        local_8 = (*(float *)(&stack0xffffffa0 + local_38 + in_ECX * -0x10) -
                  *(float *)(&stack0xffffffa0 + iVar8 + in_ECX * -0x10)) *
                  (*(float *)(&stack0xffffffa0 + local_38 + in_ECX * -0xc) -
                  *(float *)(&stack0xffffffa0 + iVar8 + in_ECX * -0xc)) -
                  (*(float *)(&stack0xffffffa0 + local_38 + in_ECX * -0x14) -
                  *(float *)(&stack0xffffffa0 + iVar8 + in_ECX * -0x14)) * fVar14;
        fVar16 = (*(float *)(&stack0xffffffa0 + local_38 + in_ECX * -0xc) -
                 *(float *)(&stack0xffffffa0 + iVar8 + in_ECX * -0xc)) *
                 (*(float *)(&stack0xffffffa0 + local_38 + iVar1) -
                 *(float *)(&stack0xffffffa0 + iVar8 + iVar1)) - fVar14 * fVar14;
        fVar14 = (fVar12 * fVar15 + local_8) / fVar16 - param_3;
        if (fVar14 < *(float *)(param_2 + iVar7 * 4)) {
          *(float *)(param_2 + iVar7 * 4) = fVar14;
        }
        local_38 = local_38 + 4;
        iVar6 = iVar6 + 4;
        iVar10 = iVar10 + 1;
        iVar7 = iVar7 + 1;
        fVar12 = fVar12 + 1.0;
        iVar8 = iVar6;
      } while (iVar10 < in_ECX);
    }
    for (; iVar7 < in_ECX; iVar7 = iVar7 + 1) {
      fVar14 = (fVar12 * fVar15 + local_8) / fVar16 - param_3;
      if (fVar14 < *(float *)(param_2 + iVar7 * 4)) {
        *(float *)(param_2 + iVar7 * 4) = fVar14;
      }
      fVar12 = fVar12 + 1.0;
    }
  }
  return;
}


/* FUN_006d54c0 @ 006d54c0  kind=gamemisc  attributed-by=none  size=252 */

void FUN_006d54c0(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *in_ECX;
  int in_EDX;
  int iVar5;
  int iVar6;
  
  iVar5 = in_ECX[9];
  iVar6 = 0;
  FUN_006d55d0(in_ECX[10]);
  iVar5 = (*(int *)in_ECX[5] - (iVar5 >> 1)) - in_ECX[7];
  if (1 < *in_ECX) {
    do {
      fVar2 = *(float *)(in_EDX + iVar5 * 4);
      iVar4 = iVar5;
      if (*(float *)(in_ECX[1] + 0x20) < fVar2) {
        fVar2 = *(float *)(in_ECX[1] + 0x20);
      }
      while (iVar4 = iVar4 + 1,
            iVar4 <= (*(int *)(in_ECX[5] + 4 + iVar6 * 4) + *(int *)(in_ECX[5] + iVar6 * 4) >> 1) -
                     in_ECX[7]) {
        fVar3 = *(float *)(in_EDX + 4 + iVar5 * 4);
        iVar5 = iVar5 + 1;
        if (((-9999.0 < fVar3) && (fVar3 < fVar2)) || (fVar2 == -9999.0)) {
          fVar2 = fVar3;
        }
      }
      iVar4 = in_ECX[7];
      if (iVar6 < *in_ECX) {
        do {
          if (iVar4 + iVar5 < *(int *)(in_ECX[5] + iVar6 * 4)) break;
          pfVar1 = (float *)(param_1 + iVar6 * 4);
          if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
            *(float *)(param_1 + iVar6 * 4) = fVar2;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *in_ECX);
      }
    } while (iVar6 + 1 < *in_ECX);
  }
  fVar2 = *(float *)(in_EDX + -4 + in_ECX[10] * 4);
  if (iVar6 < *in_ECX) {
    do {
      pfVar1 = (float *)(param_1 + iVar6 * 4);
      if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
        *(float *)(param_1 + iVar6 * 4) = fVar2;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *in_ECX);
  }
  return;
}


/* FUN_006d55d0 @ 006d55d0  kind=gamemisc  attributed-by=none  size=391 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_006d55d0(int param_1)

{
  float fVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  int in_EDX;
  float *pfVar6;
  int iVar7;
  int iVar8;
  float afStack_3c [2];
  int local_c;
  
  afStack_3c[1] = 1.0040898e-38;
  afStack_3c[1 - param_1] = 1.0040914e-38;
  iVar5 = 0;
  iVar8 = 0;
  local_c = 0;
  if (0 < param_1) {
    do {
      if ((1 < iVar5) &&
         (fVar1 = *(float *)(in_ECX + iVar8 * 4), afStack_3c[param_1 * -2 + iVar5 + 1] <= fVar1)) {
        pfVar6 = afStack_3c + (iVar5 - param_1);
        do {
          if (((((int)afStack_3c[(iVar5 + 1) - param_1] + in_EDX <= iVar8) || (iVar5 < 2)) ||
              (pfVar6[-param_1] < afStack_3c[param_1 * -2 + iVar5 + 1])) ||
             ((int)*pfVar6 + in_EDX <= iVar8)) break;
          iVar7 = param_1 * -2 + iVar5;
          iVar5 = iVar5 + -1;
          pfVar6 = pfVar6 + -1;
        } while (afStack_3c[iVar7] <= fVar1);
      }
      *(int *)(&stack0xffffffcc + iVar5 * 4 + param_1 * -4) = iVar8;
      *(undefined4 *)(&stack0xffffffcc + iVar5 * 4 + param_1 * -8) =
           *(undefined4 *)(in_ECX + iVar8 * 4);
      iVar8 = iVar8 + 1;
      iVar5 = iVar5 + 1;
      local_c = iVar5;
    } while (iVar8 < param_1);
  }
  iVar5 = 0;
  iVar8 = 0;
  if (0 < local_c) {
    piVar2 = (int *)(&stack0xffffffd0 + param_1 * -4);
    do {
      if ((local_c + -1 <= iVar8) ||
         ((float)piVar2[-param_1] < *(float *)(&stack0xffffffcc + iVar8 * 4 + param_1 * -8) ||
          (float)piVar2[-param_1] == *(float *)(&stack0xffffffcc + iVar8 * 4 + param_1 * -8))) {
        iVar7 = in_EDX + 1 + piVar2[-1];
      }
      else {
        iVar7 = *piVar2;
      }
      if (param_1 < iVar7) {
        iVar7 = param_1;
      }
      if (iVar5 < iVar7) {
        if (3 < iVar7 - iVar5) {
          puVar3 = (undefined4 *)(in_ECX + iVar5 * 4 + 8);
          iVar4 = ((iVar7 - iVar5) - 4U >> 2) + 1;
          iVar5 = iVar5 + iVar4 * 4;
          do {
            puVar3[-2] = *(undefined4 *)(&stack0xffffffcc + iVar8 * 4 + param_1 * -8);
            puVar3[-1] = *(undefined4 *)(&stack0xffffffcc + iVar8 * 4 + param_1 * -8);
            *puVar3 = *(undefined4 *)(&stack0xffffffcc + iVar8 * 4 + param_1 * -8);
            puVar3[1] = *(undefined4 *)(&stack0xffffffcc + iVar8 * 4 + param_1 * -8);
            puVar3 = puVar3 + 4;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        for (; iVar5 < iVar7; iVar5 = iVar5 + 1) {
          *(undefined4 *)(in_ECX + iVar5 * 4) =
               *(undefined4 *)(&stack0xffffffcc + iVar8 * 4 + param_1 * -8);
        }
      }
      iVar8 = iVar8 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar8 < local_c);
  }
  return;
}


/* FUN_006d5760 @ 006d5760  kind=gamemisc  attributed-by=none  size=406 */

void FUN_006d5760(int param_1,int param_2,int param_3,float param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int *in_ECX;
  int iVar9;
  int in_EDX;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  
  iVar4 = *in_ECX;
  fVar13 = *(float *)(in_ECX[1] + 0x1f0) - param_4;
  param_4 = 0.0;
  if (0 < iVar4) {
    do {
      iVar9 = in_ECX[5];
      iVar11 = *(int *)(iVar9 + (int)param_4 * 4);
      fVar6 = *(float *)(param_1 + (int)param_4 * 4);
      while ((iVar7 = (int)param_4 + 1, iVar7 < iVar4 &&
             (*(int *)(iVar9 + 4 + (int)param_4 * 4) == iVar11))) {
        fVar3 = *(float *)(param_1 + iVar7 * 4);
        param_4 = (float)iVar7;
        if (fVar6 < fVar3) {
          fVar6 = fVar3;
        }
      }
      pfVar1 = (float *)(param_2 + (int)param_4 * 4);
      if (*pfVar1 <= fVar6 + 6.0 && fVar6 + 6.0 != *pfVar1) {
        iVar11 = iVar11 >> ((byte)in_ECX[8] & 0x1f);
        if (iVar11 < 0x11) {
          if (iVar11 < 0) {
            iVar11 = 0;
          }
        }
        else {
          iVar11 = 0x10;
        }
        iVar7 = in_ECX[10];
        iVar5 = in_ECX[9];
        iVar8 = (int)(((fVar6 + fVar13) - 30.0) * 0.1);
        iVar10 = 0;
        if (0 < iVar8) {
          iVar10 = iVar8;
        }
        iVar8 = 7;
        if (iVar10 < 7) {
          iVar8 = iVar10;
        }
        pfVar1 = *(float **)(*(int *)(in_EDX + iVar11 * 4) + iVar8 * 4);
        fVar3 = pfVar1[1];
        iVar11 = (int)(((float)(*(int *)(iVar9 + (int)param_4 * 4) - in_ECX[7]) +
                       (*pfVar1 - 16.0) * (float)iVar5) - (float)(iVar5 >> 1));
        for (iVar9 = (int)*pfVar1; iVar9 < (int)fVar3; iVar9 = iVar9 + 1) {
          if ((0 < iVar11) &&
             (fVar12 = pfVar1[iVar9 + 2] + fVar6, pfVar2 = (float *)(param_3 + iVar11 * 4),
             *pfVar2 <= fVar12 && fVar12 != *pfVar2)) {
            *(float *)(param_3 + iVar11 * 4) = fVar12;
          }
          iVar11 = iVar11 + iVar5;
          if (iVar7 <= iVar11) break;
        }
      }
      param_4 = (float)((int)param_4 + 1);
    } while ((int)param_4 < iVar4);
  }
  return;
}


/* FUN_006d59d0 @ 006d59d0  kind=gamemisc  attributed-by=none  size=2381 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void * FUN_006d59d0(float param_1)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *in_ECX;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  undefined4 extraout_ECX;
  float in_EDX;
  float *pfVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  float in_XMM1_Da;
  float in_XMM3_Da;
  int aiStack_7f74 [3];
  undefined8 uStack_7f68;
  float local_7f50 [55];
  float afStack_7e74 [7561];
  float local_850 [448];
  float local_150 [56];
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  void *local_48;
  void *local_44;
  undefined8 local_40;
  undefined8 local_38;
  float local_30;
  float *local_2c;
  float *local_28;
  int local_24;
  float *local_20;
  float local_1c;
  float *local_18;
  float *local_14;
  float local_10;
  float *local_c;
  undefined4 uStack_8;
  
  uStack_8 = 0x6d59dd;
  uStack_7f68._4_4_ = 0x6d5a00;
  iVar1 = (int)in_EDX * -4;
  local_14 = local_7f50 + (-4 - (int)in_EDX);
  *(undefined4 *)((int)&uStack_7f68 + iVar1 + 4) = 0x44;
  *(undefined4 *)((int)&uStack_7f68 + iVar1) = 0x6d5a0b;
  local_30 = in_EDX;
  local_1c = in_XMM1_Da;
  local_c = in_ECX;
  local_38._4_4_ = (float *)in_XMM3_Da;
  local_44 = malloc(*(size_t *)((int)&uStack_7f68 + iVar1 + 4));
  *(undefined4 *)((int)&uStack_7f68 + iVar1) = 0x7700;
  aiStack_7f74[2 - (int)in_EDX] = 0;
  aiStack_7f74[1 - (int)in_EDX] = (int)local_7f50;
  aiStack_7f74[-(int)in_EDX] = 0x6d5a21;
  memset((void *)aiStack_7f74[1 - (int)in_EDX],aiStack_7f74[2 - (int)in_EDX],
         *(size_t *)((int)&uStack_7f68 + iVar1));
  local_18 = (float *)&DAT_00737ac0;
  local_20 = local_7f50;
  local_24 = 0;
  local_2c = (float *)&DAT_00737964;
  local_10 = (float)(2 - (int)in_ECX);
  do {
    pfVar7 = local_20;
    iVar5 = (int)local_10 + (int)in_ECX;
    pfVar4 = local_150;
    iVar9 = 0x38;
    pfVar8 = local_2c;
    do {
      iVar11 = iVar9;
      if (iVar5 + -2 < 0x58) {
        fVar13 = 999.0;
        if (pfVar8[-1] < 999.0) {
          fVar13 = pfVar8[-1];
        }
      }
      else {
        fVar13 = -30.0;
      }
      if (iVar5 + -1 < 0x58) {
        if (*pfVar8 < fVar13) {
          fVar13 = *pfVar8;
        }
      }
      else if (-30.0 < fVar13) {
        fVar13 = -30.0;
      }
      if (iVar5 < 0x58) {
        if (pfVar8[1] < fVar13) {
          fVar13 = pfVar8[1];
        }
      }
      else if (-30.0 < fVar13) {
        fVar13 = -30.0;
      }
      iVar5 = iVar5 + 1;
      if (iVar5 < 0x58) {
        if (pfVar8[2] < fVar13) {
          fVar13 = pfVar8[2];
        }
      }
      else if (-30.0 < fVar13) {
        fVar13 = -30.0;
      }
      *pfVar4 = fVar13;
      pfVar8 = pfVar8 + 1;
      pfVar4 = pfVar4 + 1;
      iVar9 = iVar11 + -1;
    } while (iVar9 != 0);
    pfVar4 = local_18;
    pfVar8 = pfVar7 + 0x70;
    for (iVar9 = 0x150; iVar9 != 0; iVar9 = iVar9 + -1) {
      *pfVar8 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar8 = pfVar8 + 1;
    }
    pfVar4 = local_18;
    pfVar8 = pfVar7;
    for (iVar9 = 0x38; iVar9 != 0; iVar9 = iVar9 + -1) {
      *pfVar8 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar8 = pfVar8 + 1;
    }
    local_28 = pfVar7 + 0x38;
    pfVar4 = local_18;
    pfVar7 = pfVar7 + 0x38;
    for (iVar9 = 0x38; iVar9 != 0; iVar9 = iVar9 + -1) {
      *pfVar7 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar7 = pfVar7 + 1;
    }
    iVar11 = iVar11 + 7;
    do {
      uVar6 = 0x10;
      pfVar4 = local_20;
      do {
        fVar13 = (float)(int)((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f)) * param_1 +
                 (float)local_38._4_4_;
        if (((fVar13 < 0.0) && (0.0 < (float)local_38._4_4_)) ||
           ((0.0 < fVar13 && ((float)local_38._4_4_ < 0.0)))) {
          fVar13 = 0.0;
        }
        uVar6 = uVar6 - 1;
        local_20 = pfVar4 + 1;
        *pfVar4 = fVar13 + *pfVar4;
        pfVar4 = local_20;
      } while (-0x28 < (int)uVar6);
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    iVar9 = 0;
    fVar13 = *local_c;
    do {
      iVar5 = iVar9;
      if (iVar9 < 2) {
        iVar5 = 2;
      }
      local_40 = (double)CONCAT44(local_7f50 + (local_24 + iVar9) * 0x38,(undefined4)local_40);
      iVar11 = 0xe;
      fVar12 = ((fVar13 + 100.0) - (float)iVar5 * 10.0) - 30.0;
      pfVar4 = local_7f50 + (local_24 + iVar9) * 0x38;
      do {
        *pfVar4 = *pfVar4 + fVar12;
        pfVar4[1] = pfVar4[1] + fVar12;
        pfVar4[2] = pfVar4[2] + fVar12;
        pfVar4[3] = pfVar4[3] + fVar12;
        iVar11 = iVar11 + -1;
        pfVar4 = pfVar4 + 4;
      } while (iVar11 != 0);
      pfVar8 = local_850 + iVar9 * 0x38;
      fVar12 = (100.0 - (float)iVar9 * 10.0) - 30.0;
      pfVar4 = local_150;
      pfVar7 = pfVar8;
      for (iVar5 = 0x38; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pfVar7 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        pfVar7 = pfVar7 + 1;
      }
      iVar5 = 7;
      pfVar4 = local_850 + iVar9 * 0x38 + 2;
      do {
        pfVar4[-2] = fVar12 + pfVar4[-2];
        pfVar4[-1] = fVar12 + pfVar4[-1];
        *pfVar4 = fVar12 + *pfVar4;
        pfVar4[1] = fVar12 + pfVar4[1];
        pfVar4[2] = fVar12 + pfVar4[2];
        pfVar4[3] = fVar12 + pfVar4[3];
        pfVar4[4] = fVar12 + pfVar4[4];
        pfVar4[5] = fVar12 + pfVar4[5];
        iVar5 = iVar5 + -1;
        pfVar4 = pfVar4 + 8;
      } while (iVar5 != 0);
      iVar11 = local_40._4_4_ - (int)pfVar8;
      iVar5 = 0x38;
      do {
        iVar10 = iVar5;
        fVar12 = *(float *)((int)pfVar8 + iVar11);
        if (*pfVar8 <= fVar12 && fVar12 != *pfVar8) {
          *pfVar8 = fVar12;
        }
        pfVar8 = pfVar8 + 1;
        iVar5 = iVar10 + -1;
      } while (iVar5 != 0);
      iVar9 = iVar9 + 1;
    } while (iVar9 < 8);
    iVar10 = iVar10 + 6;
    pfVar4 = local_850;
    do {
      pfVar8 = pfVar4 + 0x38;
      pfVar7 = pfVar4 + 3;
      pfVar3 = pfVar4 + 0x39;
      iVar9 = 0xe;
      do {
        if (pfVar7[-3] < pfVar3[-1]) {
          pfVar3[-1] = pfVar7[-3];
        }
        fVar13 = *(float *)(((int)pfVar4 - (int)pfVar8) + (int)pfVar3);
        if (fVar13 < *pfVar3) {
          *pfVar3 = fVar13;
        }
        if (pfVar7[-1] < pfVar3[1]) {
          pfVar3[1] = pfVar7[-1];
        }
        if (*pfVar7 < pfVar3[2]) {
          pfVar3[2] = *pfVar7;
        }
        pfVar2 = local_14;
        pfVar3 = pfVar3 + 4;
        pfVar7 = pfVar7 + 4;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      iVar9 = 0x38;
      pfVar4 = local_28;
      do {
        fVar13 = *(float *)(((int)pfVar8 - (int)local_28) + (int)pfVar4);
        if (fVar13 < *pfVar4) {
          *pfVar4 = fVar13;
        }
        pfVar4 = pfVar4 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      local_28 = local_28 + 0x38;
      iVar10 = iVar10 + -1;
      pfVar4 = pfVar8;
    } while (iVar10 != 0);
    local_18 = local_18 + 0x150;
    local_24 = local_24 + 8;
    local_2c = local_2c + 4;
    in_ECX = local_c + 1;
    local_c = in_ECX;
  } while ((int)local_2c < 0x737a74);
  local_28 = (float *)0x0;
  local_18 = (float *)0x8;
  do {
    pfVar4 = local_28;
    *(undefined4 *)((int)&uStack_7f68 + iVar1 + 4) = 0x20;
    *(undefined4 *)((int)&uStack_7f68 + iVar1) = 0x6d5df8;
    local_48 = malloc(*(size_t *)((int)&uStack_7f68 + iVar1 + 4));
    local_58 = (double)(int)pfVar4 * 0.5;
    *(void **)((int)local_44 + (int)pfVar4 * 4) = local_48;
    dVar14 = (local_58 + 5.965784072875977) * 0.6931470036506653;
    *(undefined4 *)((int)&uStack_7f68 + iVar1) = 0x6d5e2b;
    libm_sse2_exp_precise();
    *(undefined4 *)((int)&uStack_7f68 + iVar1) = extraout_ECX;
    local_70 = dVar14 / (double)local_1c;
    *(double *)((int)&uStack_7f68 + iVar1) = dVar14 / (double)local_1c;
    aiStack_7f74[2 - (int)in_EDX] = 0x6d5e48;
    local_38 = floor(*(double *)((int)&uStack_7f68 + iVar1));
    iVar9 = (int)local_38;
    dVar14 = (double)((float)iVar9 * local_1c + 1.0);
    aiStack_7f74[2 - (int)in_EDX] = 0x6d5e6c;
    libm_sse2_log_precise();
    *(double *)((int)&uStack_7f68 + iVar1) = (dVar14 * 1.4426950216293335 - 5.965784072875977) * 2.0
    ;
    aiStack_7f74[2 - (int)in_EDX] = 0x6d5e8f;
    local_40 = ceil(*(double *)((int)&uStack_7f68 + iVar1));
    dVar14 = (double)((float)(iVar9 + 1) * local_1c);
    aiStack_7f74[2 - (int)in_EDX] = 0x6d5ea9;
    libm_sse2_log_precise();
    local_60 = (dVar14 * 1.4426950216293335 - 5.965784072875977) * 2.0;
    *(double *)((int)&uStack_7f68 + iVar1) = local_60;
    aiStack_7f74[2 - (int)in_EDX] = 0x6d5ed1;
    dVar14 = floor(*(double *)((int)&uStack_7f68 + iVar1));
    iVar9 = (int)dVar14;
    local_38._4_4_ = (float *)(int)local_40;
    if ((int)pfVar4 < (int)local_40) {
      local_38._4_4_ = pfVar4;
    }
    if ((int)local_38._4_4_ < 0) {
      local_38._4_4_ = (float *)0x0;
    }
    if (0x10 < iVar9) {
      iVar9 = 0x10;
    }
    local_38._0_4_ = SUB84(dVar14,0);
    local_40 = (double)CONCAT44(iVar9,(undefined4)local_40);
    local_c = (float *)0x0;
    do {
      pfVar4 = local_c;
      fVar13 = (float)local_38._4_4_;
      *(undefined4 *)((int)&uStack_7f68 + iVar1 + 4) = 0xe8;
      *(undefined4 *)((int)&uStack_7f68 + iVar1) = 0x6d5f0e;
      local_2c = malloc(*(size_t *)((int)&uStack_7f68 + iVar1 + 4));
      *(float **)((int)local_48 + (int)pfVar4 * 4) = local_2c;
      fVar12 = local_30;
      pfVar7 = pfVar2;
      if (0 < (int)local_30) {
        for (; pfVar4 = local_c, fVar12 != 0.0; fVar12 = (float)((int)fVar12 + -1)) {
          *pfVar7 = 999.0;
          pfVar7 = pfVar7 + 1;
        }
      }
      local_10 = fVar13;
      if ((int)local_38._4_4_ <= local_40._4_4_) {
        local_24 = (int)(pfVar4 + (int)local_38._4_4_ * 2) * 0x38;
        local_14 = afStack_7e74 + (int)(pfVar4 + (int)local_38._4_4_ * 2) * 0x38;
        do {
          fVar12 = 0.0;
          local_50 = (double)(int)fVar13 * 0.5;
          local_20 = (float *)0x0;
          local_10 = fVar13;
          do {
            local_68 = (double)(int)local_20 * 0.125 + local_50;
            dVar14 = ((local_68 - 2.0625) + 5.965784072875977) * 0.6931470036506653;
            *(undefined4 *)((int)&uStack_7f68 + iVar1 + 4) = 0x6d5fc6;
            libm_sse2_exp_precise();
            fVar13 = (float)(int)(dVar14 / (double)local_1c);
            dVar14 = ((local_68 - 1.9375) + 5.965784072875977) * 0.6931470036506653;
            *(undefined4 *)((int)&uStack_7f68 + iVar1 + 4) = 0x6d5ff8;
            libm_sse2_exp_precise();
            if ((int)fVar13 < 0) {
              fVar13 = 0.0;
            }
            if ((int)local_30 < (int)fVar13) {
              fVar13 = local_30;
            }
            if ((int)fVar13 < (int)fVar12) {
              fVar12 = fVar13;
            }
            fVar13 = (float)(int)(dVar14 / (double)local_1c + 1.0);
            if ((int)fVar13 < 0) {
              fVar13 = 0.0;
            }
            if ((int)local_30 < (int)fVar13) {
              fVar13 = local_30;
            }
            for (; ((int)fVar12 < (int)fVar13 && ((int)fVar12 < (int)local_30));
                fVar12 = (float)((int)fVar12 + 1)) {
              if (local_7f50[local_24 + (int)local_20] < pfVar2[(int)fVar12]) {
                pfVar2[(int)fVar12] = local_7f50[local_24 + (int)local_20];
              }
            }
            local_20 = (float *)((int)local_20 + 1);
          } while ((int)local_20 < 0x38);
          if ((int)fVar12 < (int)local_30) {
            fVar13 = *local_14;
            do {
              if (fVar13 < pfVar2[(int)fVar12]) {
                pfVar2[(int)fVar12] = fVar13;
              }
              fVar12 = (float)((int)fVar12 + 1);
            } while ((int)fVar12 < (int)local_30);
          }
          local_24 = local_24 + 0x1c0;
          fVar13 = (float)((int)local_10 + 1);
          local_14 = local_14 + 0x1c0;
          local_10 = fVar13;
        } while ((int)fVar13 <= local_40._4_4_);
      }
      if ((int)local_28 + 1 < 0x11) {
        fVar13 = 0.0;
        local_14 = (float *)0x0;
        do {
          local_50 = (double)(int)local_14 * 0.125 + local_58;
          dVar14 = ((local_50 - 2.0625) + 5.965784072875977) * 0.6931470036506653;
          *(undefined4 *)((int)&uStack_7f68 + iVar1 + 4) = 0x6d6107;
          libm_sse2_exp_precise();
          fVar12 = (float)(int)(dVar14 / (double)local_1c);
          dVar14 = ((local_50 - 1.9375) + 5.965784072875977) * 0.6931470036506653;
          *(undefined4 *)((int)&uStack_7f68 + iVar1 + 4) = 0x6d6139;
          libm_sse2_exp_precise();
          if ((int)fVar12 < 0) {
            fVar12 = 0.0;
          }
          if ((int)local_30 < (int)fVar12) {
            fVar12 = local_30;
          }
          local_10 = (float)(int)(dVar14 / (double)local_1c + 1.0);
          if ((int)fVar12 < (int)fVar13) {
            fVar13 = fVar12;
          }
          if ((int)local_10 < 0) {
            local_10 = 0.0;
          }
          if ((int)local_30 < (int)local_10) {
            local_10 = local_30;
          }
          for (; ((int)fVar13 < (int)local_10 && ((int)fVar13 < (int)local_30));
              fVar13 = (float)((int)fVar13 + 1)) {
            if (local_7f50[(int)(local_14 + ((int)local_18 + (int)local_c) * 0xe)] <
                pfVar2[(int)fVar13]) {
              pfVar2[(int)fVar13] =
                   local_7f50[(int)(local_14 + ((int)local_18 + (int)local_c) * 0xe)];
            }
          }
          local_14 = (float *)((int)local_14 + 1);
        } while ((int)local_14 < 0x38);
        if ((int)fVar13 < (int)local_30) {
          fVar12 = afStack_7e74[((int)local_c + (int)local_18) * 0x38];
          do {
            if (fVar12 < pfVar2[(int)fVar13]) {
              pfVar2[(int)fVar13] = fVar12;
            }
            fVar13 = (float)((int)fVar13 + 1);
          } while ((int)fVar13 < (int)local_30);
        }
      }
      fVar13 = local_30;
      local_10 = 0.0;
      iVar9 = 8;
      do {
        dVar14 = ((((double)(int)local_10 * 0.125 + local_58) - 2.0) + 5.965784072875977) *
                 0.6931470036506653;
        *(undefined4 *)((int)&uStack_7f68 + iVar1 + 4) = 0x6d6242;
        libm_sse2_exp_precise();
        iVar5 = (int)(dVar14 / (double)local_1c);
        if (iVar5 < 0) {
          *(undefined4 *)(iVar9 + (int)local_2c) = 0xc479c000;
        }
        else if (iVar5 < (int)fVar13) {
          *(float *)(iVar9 + (int)local_2c) = pfVar2[iVar5];
        }
        else {
          *(undefined4 *)(iVar9 + (int)local_2c) = 0xc479c000;
        }
        iVar9 = iVar9 + 4;
        local_10 = (float)((int)local_10 + 1);
      } while (iVar9 < 0xe8);
      iVar5 = 0;
      iVar9 = 0xc;
      do {
        if (-200.0 < *(float *)(iVar9 + -4 + (int)local_2c)) break;
        if (-200.0 < *(float *)(iVar9 + (int)local_2c)) {
          iVar5 = iVar5 + 1;
          break;
        }
        if (-200.0 < *(float *)(iVar9 + 4 + (int)local_2c)) {
          iVar5 = iVar5 + 2;
          break;
        }
        if (-200.0 < *(float *)(iVar9 + 8 + (int)local_2c)) {
          iVar5 = iVar5 + 3;
          break;
        }
        iVar9 = iVar9 + 0x10;
        iVar5 = iVar5 + 4;
      } while (iVar9 < 0x4c);
      iVar9 = 0x37;
      *local_2c = (float)iVar5;
      do {
        if (-200.0 < local_2c[iVar9 + 2]) break;
        if (-200.0 < local_2c[iVar9 + 1]) {
          iVar9 = iVar9 + -1;
          break;
        }
        iVar9 = iVar9 + -2;
      } while (0x11 < iVar9);
      local_c = (float *)((int)local_c + 1);
      local_2c[1] = (float)iVar9;
    } while ((int)local_c < 8);
    local_18 = (float *)((int)local_18 + 8);
    local_28 = (float *)((int)local_28 + 1);
    if (0x8f < (int)local_18) {
      return local_44;
    }
  } while( true );
}


/* FUN_006d6eb0 @ 006d6eb0  kind=gamemisc  attributed-by=none  size=516 */

void FUN_006d6eb0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_EDX;
  int local_24;
  int local_10;
  int local_c;
  
  local_c = *(int *)(param_3 + 4);
  local_24 = 1;
  if (0 < local_c) {
    piVar3 = (int *)(param_3 + local_c * 4 + 4);
    local_10 = in_ECX;
    do {
      iVar1 = local_10 / *piVar3;
      iVar2 = (in_ECX / local_10) * iVar1;
      local_24 = 1 - local_24;
      if (*piVar3 == 4) {
        FUN_006d7fc0();
      }
      else if (*piVar3 == 2) {
        if (local_24 == 0) {
          FUN_006d8420();
        }
        else {
          FUN_006d8420(param_1);
        }
      }
      else {
        if (in_ECX / local_10 == 1) {
          local_24 = 1 - local_24;
        }
        if (local_24 == 0) {
          FUN_006d70c0(iVar1,iVar2);
          local_24 = 1;
        }
        else {
          FUN_006d70c0(iVar1,iVar2,param_1,param_1,param_1);
          local_24 = 0;
        }
      }
      piVar3 = piVar3 + -1;
      local_c = local_c + -1;
      local_10 = iVar1;
    } while (local_c != 0);
    if (local_24 != 1) {
      iVar1 = 0;
      if (3 < in_ECX) {
        iVar2 = (in_ECX - 4U >> 2) + 1;
        iVar1 = iVar2 * 4;
        puVar5 = (undefined4 *)(param_1 + 0xc);
        puVar4 = (undefined4 *)(in_EDX + 4);
        do {
          puVar4[-1] = puVar5[-3];
          *puVar4 = *(undefined4 *)((param_1 - in_EDX) + (int)puVar4);
          puVar4[1] = puVar5[-1];
          puVar4[2] = *puVar5;
          puVar4 = puVar4 + 4;
          puVar5 = puVar5 + 4;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      if (iVar1 < in_ECX) {
        puVar5 = (undefined4 *)(in_EDX + iVar1 * 4);
        iVar1 = in_ECX - iVar1;
        do {
          *puVar5 = *(undefined4 *)((int)puVar5 + (param_1 - in_EDX));
          puVar5 = puVar5 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
    }
  }
  return;
}


/* FUN_006d70c0 @ 006d70c0  kind=gamemisc  attributed-by=none  size=3787 */

void FUN_006d70c0(int param_1,float *param_2,float *param_3,float *param_4,int param_5,
                 float *param_6,float *param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  int in_ECX;
  int iVar14;
  float *pfVar15;
  float *pfVar16;
  undefined4 *puVar17;
  float *pfVar18;
  int in_EDX;
  int iVar19;
  int iVar20;
  int iVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  double dVar25;
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  int local_48;
  int local_44;
  int local_38;
  int local_34;
  float *local_28;
  float *local_24;
  float *local_20;
  int local_1c;
  
  dVar25 = (double)(6.2831855 / (float)in_EDX);
  libm_sse2_cos_precise();
  auVar26._0_8_ = (double)(6.2831855 / (float)in_EDX);
  auVar26._8_8_ = 0;
  libm_sse2_sin_precise();
  local_48 = in_EDX + 1 >> 1;
  iVar2 = in_ECX + -1 >> 1;
  iVar19 = in_ECX * param_1;
  iVar3 = in_ECX * in_EDX;
  if (in_ECX != 1) {
    iVar4 = 0;
    if (3 < (int)param_2) {
      pfVar6 = (float *)(param_5 + 0xc);
      iVar21 = ((int)param_2 - 4U >> 2) + 1;
      pfVar18 = param_7 + 1;
      iVar4 = iVar21 * 4;
      do {
        pfVar18[-1] = pfVar6[-3];
        *pfVar18 = *(float *)((param_5 - (int)param_7) + (int)pfVar18);
        pfVar18[1] = pfVar6[-1];
        pfVar18[2] = *pfVar6;
        pfVar18 = pfVar18 + 4;
        pfVar6 = pfVar6 + 4;
        iVar21 = iVar21 + -1;
      } while (iVar21 != 0);
    }
    if (iVar4 < (int)param_2) {
      pfVar6 = param_7 + iVar4;
      iVar4 = (int)param_2 - iVar4;
      do {
        *pfVar6 = *(float *)((int)pfVar6 + (param_5 - (int)param_7));
        pfVar6 = pfVar6 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iVar4 = 0;
    if (1 < in_EDX) {
      iVar21 = in_EDX + -1;
      do {
        iVar4 = iVar4 + iVar19;
        iVar5 = 0;
        iVar14 = iVar4;
        if (3 < param_1) {
          iVar20 = (param_1 - 4U >> 2) + 1;
          iVar5 = iVar20 * 4;
          do {
            param_6[iVar14] = param_4[iVar14];
            iVar14 = iVar14 + in_ECX;
            param_6[iVar14] = param_4[iVar14];
            iVar14 = iVar14 + in_ECX;
            param_6[iVar14] = param_4[iVar14];
            iVar14 = iVar14 + in_ECX;
            param_6[iVar14] = param_4[iVar14];
            iVar14 = iVar14 + in_ECX;
            iVar20 = iVar20 + -1;
          } while (iVar20 != 0);
        }
        if (iVar5 < param_1) {
          pfVar6 = param_6 + iVar14;
          iVar5 = param_1 - iVar5;
          do {
            *pfVar6 = *(float *)(((int)param_4 - (int)param_6) + (int)pfVar6);
            pfVar6 = pfVar6 + in_ECX;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        iVar21 = iVar21 + -1;
      } while (iVar21 != 0);
    }
    local_20 = (float *)-in_ECX;
    if (param_1 < iVar2) {
      if (1 < in_EDX) {
        pfVar6 = (float *)(param_8 + in_ECX * -4 + -4);
        pfVar12 = param_6 + -in_ECX;
        pfVar18 = param_4 + (-1 - in_ECX);
        local_1c = in_EDX + -1;
        do {
          pfVar12 = pfVar12 + iVar19;
          pfVar18 = pfVar18 + iVar19;
          pfVar6 = pfVar6 + in_ECX;
          pfVar7 = pfVar12;
          pfVar11 = pfVar18;
          iVar4 = param_1;
          if (0 < param_1) {
            do {
              if (2 < in_ECX) {
                iVar21 = (in_ECX - 3U >> 1) + 1;
                pfVar24 = pfVar11 + in_ECX;
                pfVar13 = pfVar6;
                pfVar8 = pfVar7 + in_ECX;
                do {
                  pfVar9 = pfVar24 + 2;
                  pfVar8 = pfVar8 + 2;
                  *(float *)(((int)param_6 - (int)param_4) + (int)pfVar9) =
                       pfVar24[2] * pfVar13[1] + pfVar24[3] * pfVar13[2];
                  *pfVar8 = pfVar24[3] * pfVar13[1] - pfVar13[2] * *pfVar9;
                  iVar21 = iVar21 + -1;
                  pfVar24 = pfVar9;
                  pfVar13 = pfVar13 + 2;
                } while (iVar21 != 0);
              }
              iVar4 = iVar4 + -1;
              pfVar7 = pfVar7 + in_ECX;
              pfVar11 = pfVar11 + in_ECX;
            } while (iVar4 != 0);
          }
          local_1c = local_1c + -1;
        } while (local_1c != 0);
      }
    }
    else if (1 < in_EDX) {
      pfVar18 = (float *)(param_8 + in_ECX * -4 + -4);
      pfVar12 = param_4 + -1;
      local_1c = in_EDX + -1;
      pfVar6 = param_6;
      do {
        pfVar6 = pfVar6 + iVar19;
        pfVar12 = pfVar12 + iVar19;
        pfVar18 = pfVar18 + in_ECX;
        if (2 < in_ECX) {
          iVar4 = (in_ECX - 3U >> 1) + 1;
          pfVar7 = pfVar18;
          pfVar11 = pfVar6;
          pfVar24 = pfVar12;
          do {
            pfVar11 = pfVar11 + 2;
            pfVar24 = pfVar24 + 2;
            pfVar13 = pfVar7 + 2;
            if (0 < param_1) {
              pfVar8 = pfVar24;
              pfVar9 = pfVar11;
              iVar21 = param_1;
              do {
                *(float *)((int)pfVar8 + ((int)param_6 - (int)param_4)) =
                     pfVar8[1] * *pfVar13 + pfVar7[1] * *pfVar8;
                fVar30 = *pfVar8;
                pfVar15 = pfVar8 + 1;
                pfVar8 = pfVar8 + in_ECX;
                *pfVar9 = pfVar7[1] * *pfVar15 - fVar30 * *pfVar13;
                pfVar9 = pfVar9 + in_ECX;
                iVar21 = iVar21 + -1;
              } while (iVar21 != 0);
            }
            iVar4 = iVar4 + -1;
            pfVar7 = pfVar13;
          } while (iVar4 != 0);
        }
        local_1c = local_1c + -1;
      } while (local_1c != 0);
    }
    iVar21 = iVar19 * in_EDX;
    iVar4 = 0;
    if (iVar2 < param_1) {
      if (1 < local_48) {
        pfVar6 = param_4 + -in_ECX;
        pfVar18 = param_6 + (-1 - in_ECX);
        iVar5 = local_48 + -1;
        do {
          pfVar6 = pfVar6 + iVar19;
          iVar4 = iVar4 + iVar19;
          pfVar18 = pfVar18 + iVar19;
          local_20 = (float *)((int)local_20 + iVar19);
          iVar21 = iVar21 - iVar19;
          if (2 < in_ECX) {
            iVar20 = (in_ECX - 3U >> 1) + 1;
            pfVar12 = pfVar6;
            iVar14 = (int)local_20;
            pfVar7 = pfVar18;
            do {
              iVar14 = iVar14 + 2;
              pfVar12 = pfVar12 + 2;
              pfVar7 = pfVar7 + 2;
              if (0 < param_1) {
                iVar1 = iVar14 + (iVar21 - iVar4);
                pfVar8 = param_4 + iVar1;
                pfVar13 = param_6 + iVar1 + -1;
                local_28 = (float *)param_1;
                pfVar11 = pfVar7;
                pfVar24 = pfVar12;
                do {
                  pfVar11 = pfVar11 + in_ECX;
                  pfVar13 = pfVar13 + in_ECX;
                  pfVar24 = pfVar24 + in_ECX;
                  pfVar8 = pfVar8 + in_ECX;
                  local_28 = (float *)((int)local_28 + -1);
                  *(float *)((int)pfVar11 + ((int)param_4 - (int)param_6)) = *pfVar11 + *pfVar13;
                  *(float *)((int)pfVar13 + ((int)param_4 - (int)param_6)) = pfVar11[1] - pfVar13[1]
                  ;
                  *pfVar24 = pfVar13[1] + pfVar11[1];
                  *pfVar8 = *pfVar13 - *pfVar11;
                } while (local_28 != (float *)0x0);
              }
              iVar20 = iVar20 + -1;
            } while (iVar20 != 0);
          }
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    else if (1 < local_48) {
      pfVar6 = param_4 + iVar21;
      pfVar18 = param_6 + iVar21 + -1;
      pfVar7 = param_6 + -1;
      local_28 = (float *)(local_48 + -1);
      pfVar12 = param_4;
      do {
        pfVar12 = pfVar12 + iVar19;
        pfVar7 = pfVar7 + iVar19;
        pfVar6 = pfVar6 + -iVar19;
        pfVar18 = pfVar18 + -iVar19;
        if (0 < param_1) {
          local_34 = param_1;
          pfVar11 = pfVar12;
          pfVar24 = pfVar7;
          pfVar13 = pfVar18;
          pfVar8 = pfVar6;
          do {
            if (2 < in_ECX) {
              iVar4 = (in_ECX - 3U >> 1) + 1;
              pfVar9 = pfVar24;
              pfVar15 = pfVar13;
              pfVar22 = pfVar11;
              pfVar23 = pfVar8;
              do {
                pfVar10 = pfVar9 + 2;
                pfVar16 = pfVar15 + 2;
                pfVar22 = pfVar22 + 2;
                pfVar23 = pfVar23 + 2;
                *(float *)((int)pfVar10 + ((int)param_4 - (int)param_6)) = pfVar9[2] + pfVar15[2];
                *(float *)((int)pfVar16 + ((int)param_4 - (int)param_6)) = pfVar9[3] - pfVar15[3];
                *pfVar22 = pfVar15[3] + pfVar9[3];
                *pfVar23 = *pfVar16 - *pfVar10;
                iVar4 = iVar4 + -1;
                pfVar9 = pfVar10;
                pfVar15 = pfVar16;
              } while (iVar4 != 0);
            }
            pfVar11 = pfVar11 + in_ECX;
            pfVar24 = pfVar24 + in_ECX;
            pfVar8 = pfVar8 + in_ECX;
            pfVar13 = pfVar13 + in_ECX;
            local_34 = local_34 + -1;
          } while (local_34 != 0);
        }
        local_28 = (float *)((int)local_28 + -1);
      } while (local_28 != (float *)0x0);
    }
  }
  iVar4 = 0;
  if (3 < (int)param_2) {
    puVar17 = (undefined4 *)(param_5 + 4);
    pfVar6 = param_7 + 3;
    iVar21 = ((int)param_2 - 4U >> 2) + 1;
    iVar4 = iVar21 * 4;
    do {
      puVar17[-1] = pfVar6[-3];
      *puVar17 = *(undefined4 *)(((int)param_7 - param_5) + (int)puVar17);
      puVar17[1] = pfVar6[-1];
      puVar17[2] = *pfVar6;
      puVar17 = puVar17 + 4;
      pfVar6 = pfVar6 + 4;
      iVar21 = iVar21 + -1;
    } while (iVar21 != 0);
  }
  if (iVar4 < (int)param_2) {
    puVar17 = (undefined4 *)(param_5 + iVar4 * 4);
    iVar4 = (int)param_2 - iVar4;
    do {
      *puVar17 = *(undefined4 *)(((int)param_7 - param_5) + (int)puVar17);
      puVar17 = puVar17 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = 0;
  if (1 < local_48) {
    iVar5 = -in_ECX;
    pfVar6 = param_6 + -in_ECX;
    local_24 = (float *)(local_48 + -1);
    iVar21 = in_EDX * (int)param_2;
    do {
      pfVar6 = pfVar6 + iVar19;
      iVar4 = iVar4 + iVar19;
      iVar21 = iVar21 - iVar19;
      iVar5 = iVar5 + iVar19;
      if (0 < param_1) {
        pfVar18 = param_6 + (iVar5 - iVar4) + iVar21;
        pfVar12 = pfVar6;
        iVar14 = param_1;
        do {
          pfVar7 = pfVar18 + in_ECX;
          pfVar11 = pfVar12 + in_ECX;
          pfVar18 = pfVar18 + in_ECX;
          pfVar12 = pfVar12 + in_ECX;
          *(float *)(((int)param_4 - (int)param_6) + (int)pfVar12) = *pfVar7 + *pfVar11;
          *(float *)(((int)param_4 - (int)param_6) + (int)pfVar18) = *pfVar18 - *pfVar12;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
      local_24 = (float *)((int)local_24 + -1);
    } while (local_24 != (float *)0x0);
  }
  fVar30 = 1.0;
  iVar4 = (in_EDX + -1) * (int)param_2;
  fVar28 = 0.0;
  if (1 < local_48) {
    pfVar6 = param_7 + in_EDX * (int)param_2;
    iVar21 = local_48 + -1;
    pfVar18 = param_7;
    do {
      fVar31 = fVar30 * (float)auVar26._0_8_;
      fVar30 = fVar30 * (float)dVar25 - fVar28 * (float)auVar26._0_8_;
      pfVar18 = pfVar18 + (int)param_2;
      pfVar6 = pfVar6 + -(int)param_2;
      iVar5 = 0;
      fVar28 = fVar28 * (float)dVar25 + fVar31;
      if (0 < (int)param_2) {
        pfVar24 = (float *)((int)param_2 * 4 + param_5);
        pfVar12 = (float *)(param_5 + iVar4 * 4);
        pfVar7 = pfVar6;
        pfVar11 = pfVar18;
        do {
          fVar31 = *pfVar24;
          iVar5 = iVar5 + 1;
          pfVar24 = pfVar24 + 1;
          *pfVar11 = fVar31 * fVar30 + *(float *)(param_5 + -4 + iVar5 * 4);
          *pfVar7 = *pfVar12 * fVar28;
          pfVar12 = pfVar12 + 1;
          pfVar7 = pfVar7 + 1;
          pfVar11 = pfVar11 + 1;
        } while (iVar5 < (int)param_2);
      }
      if (2 < local_48) {
        pfVar12 = (float *)((int)param_2 * 4 + param_5);
        pfVar7 = (float *)(param_5 + iVar4 * 4);
        iVar5 = local_48 + -2;
        fVar31 = fVar28;
        fVar27 = fVar30;
        do {
          fVar29 = fVar27 * fVar28;
          fVar27 = fVar27 * fVar30 - fVar31 * fVar28;
          pfVar7 = pfVar7 + -(int)param_2;
          pfVar12 = pfVar12 + (int)param_2;
          fVar31 = fVar31 * fVar30 + fVar29;
          pfVar11 = pfVar6;
          pfVar24 = pfVar18;
          pfVar13 = pfVar7;
          pfVar8 = pfVar12;
          iVar14 = (int)param_2;
          if (0 < (int)param_2) {
            do {
              *pfVar24 = *pfVar8 * fVar27 + *pfVar24;
              *pfVar11 = *pfVar13 * fVar31 + *pfVar11;
              iVar14 = iVar14 + -1;
              pfVar11 = pfVar11 + 1;
              pfVar24 = pfVar24 + 1;
              pfVar13 = pfVar13 + 1;
              pfVar8 = pfVar8 + 1;
            } while (iVar14 != 0);
          }
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      iVar21 = iVar21 + -1;
    } while (iVar21 != 0);
  }
  iVar4 = 0;
  if (1 < local_48) {
    pfVar6 = (float *)(param_5 + 8);
    iVar21 = local_48 + -1;
    do {
      pfVar6 = pfVar6 + (int)param_2;
      iVar4 = iVar4 + (int)param_2;
      iVar14 = 0;
      iVar5 = iVar4;
      if (3 < (int)param_2) {
        iVar20 = ((int)param_2 - 4U >> 2) + 1;
        iVar14 = iVar20 * 4;
        iVar5 = iVar14 + iVar4;
        pfVar18 = param_7 + 2;
        pfVar12 = pfVar6;
        do {
          pfVar18[-2] = pfVar12[-2] + pfVar18[-2];
          pfVar18[-1] = pfVar12[-1] + pfVar18[-1];
          *pfVar18 = *pfVar12 + *pfVar18;
          pfVar18[1] = pfVar12[1] + pfVar18[1];
          iVar20 = iVar20 + -1;
          pfVar18 = pfVar18 + 4;
          pfVar12 = pfVar12 + 4;
        } while (iVar20 != 0);
      }
      if (iVar14 < (int)param_2) {
        pfVar18 = (float *)(param_5 + iVar5 * 4);
        do {
          fVar30 = *pfVar18;
          iVar5 = iVar14 + 1;
          pfVar18 = pfVar18 + 1;
          param_7[iVar14] = fVar30 + param_7[iVar14];
          iVar14 = iVar5;
        } while (iVar5 < (int)param_2);
      }
      iVar21 = iVar21 + -1;
    } while (iVar21 != 0);
  }
  local_28 = (float *)0x0;
  if (in_ECX < param_1) {
    if (0 < in_ECX) {
      do {
        param_2 = (float *)0x0;
        pfVar18 = local_28;
        pfVar6 = local_28;
        if (3 < param_1) {
          iVar4 = (param_1 - 4U >> 2) + 1;
          param_2 = (float *)(iVar4 * 4);
          do {
            param_3[(int)pfVar6] = param_6[(int)pfVar18];
            param_3[(int)pfVar6 + iVar3] = param_6[(int)pfVar18 + in_ECX];
            iVar5 = (int)pfVar6 + iVar3 + iVar3;
            iVar21 = (int)pfVar18 + in_ECX + in_ECX;
            param_3[iVar5] = param_6[iVar21];
            iVar5 = iVar5 + iVar3;
            iVar21 = iVar21 + in_ECX;
            param_3[iVar5] = param_6[iVar21];
            pfVar6 = (float *)(iVar5 + iVar3);
            pfVar18 = (float *)(iVar21 + in_ECX);
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        if ((int)param_2 < param_1) {
          iVar4 = param_1 - (int)param_2;
          pfVar6 = param_3 + (int)pfVar6;
          pfVar18 = param_6 + (int)pfVar18;
          do {
            *pfVar6 = *pfVar18;
            pfVar18 = pfVar18 + in_ECX;
            pfVar6 = pfVar6 + iVar3;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        local_28 = (float *)((int)local_28 + 1);
      } while ((int)local_28 < in_ECX);
    }
  }
  else {
    param_2 = (float *)0x0;
    if (0 < param_1) {
      local_24 = param_6 + 2;
      local_20 = param_3 + 2;
      local_44 = param_1;
      do {
        iVar4 = 0;
        pfVar6 = local_28;
        iVar21 = (int)param_2;
        if (3 < in_ECX) {
          iVar5 = (in_ECX - 4U >> 2) + 1;
          iVar4 = iVar5 * 4;
          pfVar6 = (float *)((int)local_28 + iVar4);
          iVar21 = iVar4 + (int)param_2;
          pfVar12 = local_20;
          pfVar18 = local_24;
          do {
            pfVar12[-2] = pfVar18[-2];
            pfVar12[-1] = pfVar18[-1];
            *pfVar12 = *pfVar18;
            pfVar12[1] = pfVar18[1];
            pfVar18 = pfVar18 + 4;
            pfVar12 = pfVar12 + 4;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        if (iVar4 < in_ECX) {
          pfVar18 = param_3 + iVar21;
          pfVar6 = param_6 + (int)pfVar6;
          iVar4 = in_ECX - iVar4;
          do {
            *pfVar18 = *pfVar6;
            pfVar6 = pfVar6 + 1;
            pfVar18 = pfVar18 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        local_24 = local_24 + in_ECX;
        local_20 = local_20 + iVar3;
        local_28 = (float *)((int)local_28 + in_ECX);
        param_2 = (float *)((int)param_2 + iVar3);
        local_44 = local_44 + -1;
      } while (local_44 != 0);
    }
  }
  iVar4 = iVar19 * in_EDX;
  if (1 < local_48) {
    pfVar6 = param_6 + iVar4;
    iVar21 = local_48 + -1;
    pfVar18 = param_3;
    pfVar12 = param_6;
    do {
      pfVar18 = pfVar18 + in_ECX * 2;
      pfVar12 = pfVar12 + iVar19;
      pfVar6 = pfVar6 + -iVar19;
      pfVar7 = pfVar18;
      pfVar11 = pfVar12;
      iVar5 = param_1;
      pfVar24 = pfVar6;
      if (0 < param_1) {
        do {
          pfVar7[-1] = *pfVar11;
          *pfVar7 = *pfVar24;
          iVar5 = iVar5 + -1;
          pfVar7 = pfVar7 + iVar3;
          pfVar11 = pfVar11 + in_ECX;
          pfVar24 = pfVar24 + in_ECX;
        } while (iVar5 != 0);
      }
      iVar21 = iVar21 + -1;
    } while (iVar21 != 0);
  }
  if (in_ECX != 1) {
    if (iVar2 < param_1) {
      iVar2 = 0;
      if (1 < local_48) {
        pfVar6 = param_6 + iVar4 + 2;
        iVar21 = 4;
        iVar4 = -2;
        param_6 = param_6 + 2;
        param_2 = param_3 + -2;
        local_48 = local_48 + -1;
        do {
          param_2 = param_2 + in_ECX * 2;
          iVar4 = iVar4 + in_ECX * 2;
          iVar21 = iVar21 + in_ECX * -2;
          iVar2 = iVar2 + in_ECX * 2;
          param_6 = param_6 + iVar19;
          pfVar6 = pfVar6 + -iVar19;
          if (2 < in_ECX) {
            iVar20 = (in_ECX - 3U >> 1) + 1;
            iVar5 = iVar21;
            iVar14 = iVar4;
            pfVar18 = pfVar6;
            local_28 = param_2;
            local_24 = param_6;
            do {
              if (0 < param_1) {
                pfVar12 = param_3 + iVar5 + iVar14 + iVar2;
                local_38 = param_1;
                pfVar7 = local_24;
                pfVar11 = pfVar18;
                pfVar24 = local_28;
                do {
                  pfVar12[-1] = pfVar11[-1] + pfVar7[-1];
                  pfVar24[-1] = pfVar7[-1] - pfVar11[-1];
                  *pfVar12 = *pfVar11 + *pfVar7;
                  fVar30 = *pfVar11;
                  fVar28 = *pfVar7;
                  pfVar11 = pfVar11 + in_ECX;
                  pfVar7 = pfVar7 + in_ECX;
                  pfVar12 = pfVar12 + iVar3;
                  *pfVar24 = fVar30 - fVar28;
                  pfVar24 = pfVar24 + iVar3;
                  local_38 = local_38 + -1;
                } while (local_38 != 0);
              }
              local_28 = local_28 + -2;
              iVar14 = iVar14 + -2;
              local_24 = local_24 + 2;
              pfVar18 = pfVar18 + 2;
              iVar5 = iVar5 + 4;
              iVar20 = iVar20 + -1;
            } while (iVar20 != 0);
          }
          local_48 = local_48 + -1;
        } while (local_48 != 0);
        return;
      }
    }
    else if (1 < local_48) {
      pfVar6 = param_3 + 2;
      pfVar18 = param_6 + iVar4 + 2;
      param_6 = param_6 + 2;
      param_3 = param_3 + -2;
      local_28 = (float *)(local_48 + -1);
      do {
        param_3 = param_3 + in_ECX * 2;
        pfVar6 = pfVar6 + in_ECX * 2;
        param_6 = param_6 + iVar19;
        pfVar18 = pfVar18 + -iVar19;
        if (0 < param_1) {
          local_34 = param_1;
          pfVar12 = param_6;
          pfVar7 = pfVar18;
          pfVar11 = pfVar6;
          pfVar24 = param_3;
          do {
            if (2 < in_ECX) {
              iVar2 = (in_ECX - 3U >> 1) + 1;
              pfVar13 = pfVar12;
              pfVar8 = pfVar7;
              pfVar9 = pfVar11;
              pfVar15 = pfVar24;
              do {
                pfVar9[-1] = pfVar8[-1] + pfVar13[-1];
                pfVar15[-1] = pfVar13[-1] - pfVar8[-1];
                *pfVar9 = *pfVar13 + *pfVar8;
                *pfVar15 = *pfVar8 - *pfVar13;
                iVar2 = iVar2 + -1;
                pfVar13 = pfVar13 + 2;
                pfVar8 = pfVar8 + 2;
                pfVar9 = pfVar9 + 2;
                pfVar15 = pfVar15 + -2;
              } while (iVar2 != 0);
            }
            pfVar11 = pfVar11 + iVar3;
            pfVar24 = pfVar24 + iVar3;
            pfVar12 = pfVar12 + in_ECX;
            pfVar7 = pfVar7 + in_ECX;
            local_34 = local_34 + -1;
          } while (local_34 != 0);
        }
        local_28 = (float *)((int)local_28 + -1);
      } while (local_28 != (float *)0x0);
    }
  }
  return;
}


/* FUN_006d7fc0 @ 006d7fc0  kind=gamemisc  attributed-by=none  size=1094 */

void FUN_006d7fc0(int param_1,float *param_2,int param_3,int param_4,float *param_5)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  uint in_ECX;
  int iVar5;
  float *pfVar6;
  int in_EDX;
  int iVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float *local_50;
  int local_48;
  float *local_44;
  float *local_40;
  float *local_3c;
  int local_38;
  float *local_34;
  float *local_30;
  float *local_2c;
  float *local_24;
  float *local_20;
  float *local_1c;
  float *local_18;
  float *local_14;
  float *local_10;
  int local_c;
  
  iVar5 = in_ECX * in_EDX;
  iVar7 = 0;
  if (0 < in_EDX) {
    pfVar6 = (float *)(param_1 + iVar5 * 4);
    local_14 = (float *)(param_1 + iVar5 * 0xc);
    local_10 = (float *)(param_1 + iVar5 * 8);
    local_44 = (float *)in_EDX;
    do {
      fVar9 = *local_14;
      fVar11 = *pfVar6;
      fVar10 = *(float *)(param_1 + iVar7 * 4) + *local_10;
      param_2[iVar7 * 4] = fVar10 + fVar9 + fVar11;
      param_2[in_ECX * 4 + iVar7 * 4 + -1] = fVar10 - (fVar9 + fVar11);
      iVar1 = iVar7 * 4;
      iVar2 = iVar7 * 4 + in_ECX * 2;
      iVar7 = iVar7 + in_ECX;
      param_2[iVar2 + -1] = *(float *)(param_1 + iVar1) - *local_10;
      fVar9 = *local_14;
      local_10 = local_10 + in_ECX;
      local_14 = local_14 + in_ECX;
      param_2[iVar2] = fVar9 - *pfVar6;
      pfVar6 = pfVar6 + in_ECX;
      local_44 = (float *)((int)local_44 + -1);
    } while (local_44 != (float *)0x0);
  }
  if (1 < (int)in_ECX) {
    if (in_ECX != 2) {
      local_38 = 0;
      if (0 < in_EDX) {
        local_3c = param_2;
        local_44 = (float *)(param_1 + iVar5 * 0xc);
        local_40 = (float *)(param_1 + iVar5 * 4);
        local_50 = (float *)in_EDX;
        do {
          iVar7 = local_38 * 4 + in_ECX * 2;
          if (2 < (int)in_ECX) {
            local_24 = local_3c;
            local_34 = param_5;
            local_18 = local_40;
            pfVar3 = (float *)(param_3 + 4);
            local_1c = local_44;
            local_48 = (in_ECX - 3 >> 1) + 1;
            pfVar6 = param_2 + iVar7;
            local_30 = param_2 + iVar7 + in_ECX * 2;
            local_2c = param_2 + local_38 * 4 + in_ECX * 2;
            local_20 = (float *)(local_38 * 4 + param_1);
            local_14 = (float *)(param_1 + (local_38 + iVar5 * 2) * 4);
            do {
              pfVar4 = local_18 + 2;
              pfVar8 = local_14 + 2;
              fVar12 = pfVar3[-1] * *pfVar4 - *pfVar3 * local_18[1];
              fVar9 = *(float *)((param_4 - param_3) + (int)pfVar3);
              fVar11 = *(float *)((param_4 - (int)param_5) + (int)local_34);
              fVar15 = pfVar3[-1] * local_18[1] + *pfVar4 * *pfVar3;
              fVar13 = fVar11 * local_14[1] + fVar9 * *pfVar8;
              fVar17 = fVar11 * *pfVar8 - fVar9 * local_14[1];
              fVar9 = *(float *)(((int)param_5 - param_3) + (int)pfVar3);
              fVar11 = local_1c[2];
              fVar16 = local_1c[1] * *local_34 + fVar9 * fVar11;
              fVar10 = local_20[2];
              fVar14 = fVar11 * *local_34 - fVar9 * local_1c[1];
              fVar9 = fVar16 - fVar15;
              fVar11 = local_20[1] + fVar13;
              fVar13 = local_20[1] - fVar13;
              fVar16 = fVar16 + fVar15;
              fVar15 = fVar14 + fVar12;
              fVar12 = fVar12 - fVar14;
              fVar14 = fVar10 + fVar17;
              fVar10 = fVar10 - fVar17;
              local_24[1] = fVar11 + fVar16;
              local_24[2] = fVar14 + fVar15;
              pfVar6[-3] = fVar13 - fVar12;
              pfVar6[-2] = fVar9 - fVar10;
              local_34 = local_34 + 2;
              local_2c[1] = fVar13 + fVar12;
              pfVar3 = pfVar3 + 2;
              local_48 = local_48 + -1;
              local_2c[2] = fVar10 + fVar9;
              local_30[-3] = fVar11 - fVar16;
              local_30[-2] = fVar15 - fVar14;
              pfVar6 = pfVar6 + -2;
              local_30 = local_30 + -2;
              local_2c = local_2c + 2;
              local_24 = local_24 + 2;
              local_20 = local_20 + 2;
              local_1c = local_1c + 2;
              local_18 = pfVar4;
              local_14 = pfVar8;
            } while (local_48 != 0);
          }
          local_3c = local_3c + in_ECX * 4;
          local_40 = local_40 + in_ECX;
          local_44 = local_44 + in_ECX;
          local_38 = local_38 + in_ECX;
          local_50 = (float *)((int)local_50 + -1);
        } while (local_50 != (float *)0x0);
      }
      if ((in_ECX & 1) != 0) {
        return;
      }
    }
    iVar7 = (in_ECX - 1) + iVar5;
    if (0 < in_EDX) {
      pfVar6 = (float *)(param_1 + (iVar7 + iVar5 * 2) * 4);
      pfVar3 = param_2 + in_ECX;
      local_50 = (float *)(param_1 + iVar7 * 4);
      param_2 = param_2 + in_ECX * 3;
      pfVar4 = (float *)(param_1 + (iVar7 + iVar5) * 4);
      pfVar8 = (float *)(param_1 + (iVar7 - iVar5) * 4);
      local_c = in_EDX;
      do {
        fVar9 = *local_50;
        local_50 = local_50 + in_ECX;
        fVar11 = (fVar9 - *pfVar6) * 0.70710677;
        fVar10 = (fVar9 + *pfVar6) * -0.70710677;
        pfVar6 = pfVar6 + in_ECX;
        pfVar3[-1] = *pfVar8 + fVar11;
        fVar9 = *pfVar8;
        pfVar8 = pfVar8 + in_ECX;
        param_2[-1] = fVar9 - fVar11;
        *pfVar3 = fVar10 - *pfVar4;
        fVar9 = *pfVar4;
        pfVar3 = pfVar3 + in_ECX * 4;
        pfVar4 = pfVar4 + in_ECX;
        *param_2 = fVar9 + fVar10;
        param_2 = param_2 + in_ECX * 4;
        local_c = local_c + -1;
      } while (local_c != 0);
    }
  }
  return;
}


/* FUN_006d8420 @ 006d8420  kind=gamemisc  attributed-by=none  size=538 */

void FUN_006d8420(float *param_1,float *param_2,int param_3)

{
  float *pfVar1;
  uint uVar2;
  uint in_ECX;
  float *pfVar3;
  int in_EDX;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  int local_30;
  int local_20;
  float *local_1c;
  int local_c;
  
  iVar4 = in_ECX * in_EDX;
  if (0 < in_EDX) {
    pfVar8 = param_1 + iVar4;
    pfVar10 = param_2 + in_ECX * 2 + -1;
    pfVar1 = param_1;
    pfVar5 = param_2;
    local_c = in_EDX;
    do {
      *pfVar5 = *pfVar1 + *pfVar8;
      fVar12 = *pfVar1;
      fVar13 = *pfVar8;
      pfVar5 = pfVar5 + in_ECX * 2;
      pfVar1 = pfVar1 + in_ECX;
      pfVar8 = pfVar8 + in_ECX;
      *pfVar10 = fVar12 - fVar13;
      pfVar10 = pfVar10 + in_ECX * 2;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  if (1 < (int)in_ECX) {
    if (in_ECX != 2) {
      if (0 < in_EDX) {
        pfVar8 = param_1 + iVar4;
        pfVar10 = param_2 + in_ECX * 2;
        pfVar1 = param_2;
        pfVar5 = param_1;
        local_30 = in_EDX;
        do {
          if (2 < (int)in_ECX) {
            local_1c = (float *)(param_3 + 4);
            local_20 = (in_ECX - 3 >> 1) + 1;
            pfVar3 = pfVar8;
            pfVar6 = pfVar5;
            pfVar9 = pfVar10;
            pfVar11 = pfVar1;
            do {
              pfVar7 = pfVar6 + 2;
              fVar12 = pfVar3[2] * *local_1c + local_1c[-1] * pfVar3[1];
              fVar13 = local_1c[-1] * pfVar3[2] - *local_1c * pfVar3[1];
              local_1c = local_1c + 2;
              local_20 = local_20 + -1;
              pfVar11[2] = *pfVar7 + fVar13;
              pfVar9[-2] = fVar13 - *pfVar7;
              pfVar11[1] = fVar12 + pfVar6[1];
              pfVar9[-3] = pfVar6[1] - fVar12;
              pfVar3 = pfVar3 + 2;
              pfVar6 = pfVar7;
              pfVar9 = pfVar9 + -2;
              pfVar11 = pfVar11 + 2;
            } while (local_20 != 0);
          }
          pfVar10 = pfVar10 + in_ECX * 2;
          pfVar5 = pfVar5 + in_ECX;
          pfVar8 = pfVar8 + in_ECX;
          pfVar1 = pfVar1 + in_ECX * 2;
          local_30 = local_30 + -1;
        } while (local_30 != 0);
      }
      uVar2 = in_ECX & 0x80000001;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
      }
      if (uVar2 == 1) {
        return;
      }
    }
    if (0 < in_EDX) {
      param_2 = param_2 + in_ECX;
      pfVar8 = param_1 + (in_ECX - 1);
      param_1 = param_1 + (in_ECX - 1) + iVar4;
      do {
        fVar12 = *param_1;
        param_1 = param_1 + in_ECX;
        *param_2 = -fVar12;
        fVar12 = *pfVar8;
        pfVar8 = pfVar8 + in_ECX;
        param_2[-1] = fVar12;
        param_2 = param_2 + in_ECX * 2;
        in_EDX = in_EDX + -1;
      } while (in_EDX != 0);
    }
  }
  return;
}


/* FUN_006d8670 @ 006d8670  kind=gamemisc  attributed-by=none  size=500 */

void FUN_006d8670(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int in_ECX;
  int *piVar4;
  int in_EDX;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  int local_14;
  int local_8;
  
  piVar3 = param_1;
  iVar9 = 0;
  iVar1 = -1;
  iVar7 = 0;
  local_8 = in_ECX;
  do {
    do {
      iVar1 = iVar1 + 1;
      if (iVar1 < 4) {
        iVar9 = *(int *)(&DAT_0076ae94 + iVar1 * 4);
      }
      else {
        iVar9 = iVar9 + 2;
      }
    } while (local_8 != (local_8 / iVar9) * iVar9);
    piVar2 = param_1 + iVar7;
    iVar5 = local_8 / iVar9;
    local_14 = iVar7;
    do {
      local_8 = iVar5;
      iVar7 = local_14 + 1;
      piVar2[2] = iVar9;
      if ((iVar9 == 2) && (iVar7 != 1)) {
        piVar4 = piVar2 + 1;
        iVar5 = local_14;
        if (1 < iVar7) {
          do {
            piVar4[1] = *piVar4;
            iVar5 = iVar5 + -1;
            piVar4 = piVar4 + -1;
          } while (iVar5 != 0);
        }
        param_1[2] = 2;
      }
      if (local_8 == 1) {
        param_1[1] = iVar7;
        *param_1 = in_ECX;
        param_1 = (int *)0x0;
        local_8 = 1;
        if ((local_14 != 0) && (0 < local_14)) {
          piVar3 = piVar3 + 2;
          do {
            iVar7 = *piVar3 * local_8;
            iVar9 = in_ECX / iVar7;
            iVar1 = *piVar3 + -1;
            iVar5 = 0;
            if (0 < iVar1) {
              pfVar6 = (float *)(in_EDX + (int)param_1 * 4);
              param_1 = (int *)((int)param_1 + iVar1 * iVar9);
              do {
                iVar5 = iVar5 + local_8;
                fVar11 = 0.0;
                if (2 < iVar9) {
                  iVar8 = (iVar9 - 3U >> 1) + 1;
                  pfVar10 = pfVar6;
                  do {
                    fVar11 = fVar11 + 1.0;
                    fVar12 = fVar11 * (float)iVar5 * (6.2831855 / (float)in_ECX);
                    dVar13 = (double)fVar12;
                    libm_sse2_cos_precise();
                    *pfVar10 = (float)dVar13;
                    dVar13 = (double)fVar12;
                    libm_sse2_sin_precise();
                    pfVar10[1] = (float)dVar13;
                    iVar8 = iVar8 + -1;
                    pfVar10 = pfVar10 + 2;
                  } while (iVar8 != 0);
                }
                pfVar6 = pfVar6 + iVar9;
                iVar1 = iVar1 + -1;
              } while (iVar1 != 0);
            }
            piVar3 = piVar3 + 1;
            local_14 = local_14 + -1;
            local_8 = iVar7;
          } while (local_14 != 0);
        }
        return;
      }
      piVar2 = piVar2 + 1;
      iVar5 = local_8 / iVar9;
      local_14 = iVar7;
    } while (local_8 == (local_8 / iVar9) * iVar9);
  } while( true );
}


/* FUN_006d8990 @ 006d8990  kind=gamemisc  attributed-by=none  size=871 */

void FUN_006d8990(int param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  int *in_ECX;
  float *pfVar5;
  float *pfVar6;
  float *in_EDX;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  
  iVar3 = *in_ECX >> 1;
  iVar8 = *in_ECX >> 2;
  pfVar10 = (float *)(param_1 + (iVar3 + iVar8) * 4);
  iVar8 = iVar8 * 4;
  pfVar4 = (float *)(in_ECX[2] + iVar8);
  pfVar5 = pfVar10;
  pfVar7 = in_EDX + iVar3 + -7;
  do {
    pfVar9 = pfVar7 + -8;
    pfVar5[-4] = -(pfVar7[2] * pfVar4[3]) - *pfVar7 * pfVar4[2];
    pfVar5[-3] = *pfVar7 * pfVar4[3] - pfVar7[2] * pfVar4[2];
    pfVar5[-2] = -(pfVar4[1] * pfVar7[6]) - pfVar7[4] * *pfVar4;
    pfVar5[-1] = pfVar4[1] * pfVar7[4] - *pfVar4 * pfVar7[6];
    pfVar4 = pfVar4 + 4;
    pfVar5 = pfVar5 + -4;
    pfVar7 = pfVar9;
  } while (in_EDX <= pfVar9);
  pfVar4 = in_EDX + iVar3 + -8;
  pfVar5 = (float *)(in_ECX[2] + iVar8);
  pfVar7 = pfVar10;
  do {
    pfVar6 = pfVar5 + -4;
    pfVar9 = pfVar4 + -8;
    *pfVar7 = pfVar4[4] * pfVar5[-1] + pfVar5[-2] * pfVar4[6];
    pfVar7[1] = pfVar4[4] * pfVar5[-2] - pfVar5[-1] * pfVar4[6];
    pfVar7[2] = pfVar4[2] * *pfVar6 + *pfVar4 * pfVar5[-3];
    pfVar7[3] = *pfVar4 * *pfVar6 - pfVar5[-3] * pfVar4[2];
    pfVar4 = pfVar9;
    pfVar5 = pfVar6;
    pfVar7 = pfVar7 + 4;
  } while (in_EDX <= pfVar9);
  FUN_006d8ec0(iVar3);
  FUN_006d8d10();
  pfVar4 = pfVar10;
  pfVar5 = (float *)(in_ECX[2] + iVar3 * 4);
  pfVar7 = (float *)(param_1 + 0xc);
  pfVar9 = pfVar10 + 2;
  do {
    pfVar6 = pfVar7 + 5;
    pfVar9[-3] = pfVar5[1] * pfVar7[-3] - *pfVar5 * pfVar7[-2];
    *pfVar4 = -(pfVar7[-3] * *pfVar5 + pfVar5[1] * pfVar7[-2]);
    pfVar9[-4] = pfVar7[-1] * pfVar5[3] - *pfVar7 * pfVar5[2];
    pfVar4[1] = -(*pfVar7 * pfVar5[3] + pfVar7[-1] * pfVar5[2]);
    pfVar9[-5] = pfVar5[5] * pfVar7[1] - pfVar7[2] * pfVar5[4];
    pfVar4[2] = -(pfVar5[5] * pfVar7[2] + pfVar7[1] * pfVar5[4]);
    pfVar9[-6] = pfVar5[7] * pfVar7[3] - pfVar5[6] * pfVar7[4];
    pfVar4[3] = -(pfVar5[7] * pfVar7[4] + pfVar5[6] * pfVar7[3]);
    pfVar1 = pfVar9 + -6;
    pfVar4 = pfVar4 + 4;
    pfVar5 = pfVar5 + 8;
    pfVar7 = pfVar7 + 8;
    pfVar9 = pfVar9 + -4;
  } while (pfVar6 < pfVar1);
  pfVar4 = pfVar10;
  pfVar5 = (float *)(iVar8 + param_1 + 8);
  pfVar7 = pfVar10 + (2 - iVar3);
  do {
    fVar2 = pfVar4[-1];
    pfVar7[-3] = fVar2;
    pfVar6 = pfVar4 + -4;
    pfVar5[-2] = -fVar2;
    fVar2 = pfVar4[-2];
    pfVar7[-4] = fVar2;
    pfVar5[-1] = -fVar2;
    fVar2 = pfVar4[-3];
    pfVar7[-5] = fVar2;
    *pfVar5 = -fVar2;
    fVar2 = *pfVar6;
    pfVar7[-6] = fVar2;
    pfVar5[1] = -fVar2;
    pfVar9 = pfVar5 + 2;
    pfVar4 = pfVar6;
    pfVar5 = pfVar5 + 4;
    pfVar7 = pfVar7 + -4;
  } while (pfVar9 < pfVar6);
  pfVar4 = pfVar10 + 2;
  do {
    pfVar5 = pfVar10 + -4;
    *pfVar5 = pfVar4[1];
    pfVar10[-3] = *pfVar4;
    pfVar10[-2] = pfVar4[-1];
    pfVar10[-1] = pfVar4[-2];
    pfVar4 = pfVar4 + 4;
    pfVar10 = pfVar5;
  } while ((float *)(param_1 + iVar3 * 4) < pfVar5);
  return;
}


/* FUN_006d8d10 @ 006d8d10  kind=gamemisc  attributed-by=none  size=424 */

void FUN_006d8d10(void)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  int *in_ECX;
  int in_EDX;
  int iVar5;
  float *pfVar6;
  int *piVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float *local_c;
  float *local_8;
  
  iVar2 = in_EDX + (*in_ECX >> 1) * 4;
  local_8 = (float *)(in_ECX[2] + *in_ECX * 4);
  iVar5 = in_EDX - in_ECX[3];
  pfVar6 = (float *)(iVar2 + 0xc);
  piVar7 = (int *)in_ECX[3];
  local_c = (float *)(in_EDX + 8);
  do {
    iVar4 = *piVar7;
    fVar9 = *(float *)(iVar2 + iVar4 * 4);
    fVar11 = *(float *)(iVar2 + 4 + piVar7[1] * 4);
    fVar3 = *(float *)(iVar2 + piVar7[1] * 4);
    fVar12 = *(float *)(iVar2 + 4 + iVar4 * 4) - fVar11;
    fVar10 = fVar9 + fVar3;
    fVar13 = *local_8 * fVar10 + local_8[1] * fVar12;
    fVar11 = (fVar11 + *(float *)(iVar2 + 4 + iVar4 * 4)) * 0.5;
    fVar10 = local_8[1] * fVar10 - *local_8 * fVar12;
    fVar9 = (fVar9 - fVar3) * 0.5;
    *(float *)(iVar5 + (int)piVar7) = fVar13 + fVar11;
    pfVar6[-5] = fVar11 - fVar13;
    piVar8 = piVar7 + 4;
    local_c[-1] = fVar10 + fVar9;
    pfVar6[-4] = fVar10 - fVar9;
    iVar4 = piVar7[2];
    fVar9 = *(float *)(iVar2 + iVar4 * 4);
    fVar11 = *(float *)(iVar2 + 4 + piVar7[3] * 4);
    fVar3 = *(float *)(iVar2 + piVar7[3] * 4);
    fVar12 = *(float *)(iVar2 + 4 + iVar4 * 4) - fVar11;
    fVar10 = fVar9 + fVar3;
    fVar13 = local_8[3] * fVar10 - local_8[2] * fVar12;
    fVar11 = (fVar11 + *(float *)(iVar2 + 4 + iVar4 * 4)) * 0.5;
    fVar10 = local_8[3] * fVar12 + local_8[2] * fVar10;
    local_8 = local_8 + 4;
    fVar9 = (fVar9 - fVar3) * 0.5;
    *local_c = fVar10 + fVar11;
    pfVar6[-7] = fVar11 - fVar10;
    local_c[1] = fVar13 + fVar9;
    pfVar6[-6] = fVar13 - fVar9;
    pfVar1 = pfVar6 + -7;
    pfVar6 = pfVar6 + -4;
    piVar7 = piVar8;
    local_c = local_c + 4;
  } while ((float *)(iVar5 + (int)piVar8) < pfVar1);
  return;
}


/* FUN_006d8ec0 @ 006d8ec0  kind=gamemisc  attributed-by=none  size=613 */

void FUN_006d8ec0(int param_1)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  byte bVar4;
  int in_ECX;
  float *in_EDX;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint local_10;
  uint local_8;
  
  pfVar1 = *(float **)(in_ECX + 8);
  iVar6 = *(int *)(in_ECX + 4);
  if (0 < iVar6 + -6) {
    FUN_006d9300(param_1);
  }
  bVar4 = 1;
  local_10 = 2;
  for (iVar6 = iVar6 + -7; 0 < iVar6; iVar6 = iVar6 + -1) {
    if (0 < (int)local_10) {
      iVar2 = 4 << (bVar4 & 0x1f);
      iVar7 = param_1 >> (bVar4 & 0x1f);
      pfVar11 = in_EDX;
      local_8 = local_10;
      do {
        pfVar3 = pfVar11 + (iVar7 >> 1) + -8 + (iVar7 - (iVar7 >> 1)) + 7;
        pfVar5 = pfVar11 + (iVar7 >> 1) + -8;
        pfVar8 = pfVar1;
        do {
          fVar12 = *pfVar3 - pfVar5[7];
          fVar13 = pfVar3[-1] - pfVar5[6];
          pfVar3[-1] = pfVar3[-1] + pfVar5[6];
          *pfVar3 = *pfVar3 + pfVar5[7];
          pfVar5[6] = *pfVar8 * fVar13 + fVar12 * pfVar8[1];
          pfVar9 = pfVar8 + iVar2;
          pfVar5[7] = *pfVar8 * fVar12 - fVar13 * pfVar8[1];
          fVar12 = pfVar3[-2];
          fVar13 = pfVar5[5];
          fVar14 = pfVar3[-3] - pfVar5[4];
          pfVar3[-3] = pfVar5[4] + pfVar3[-3];
          pfVar3[-2] = pfVar5[5] + pfVar3[-2];
          pfVar5[4] = *pfVar9 * fVar14 + (fVar12 - fVar13) * pfVar9[1];
          pfVar8 = pfVar9 + iVar2;
          pfVar5[5] = *pfVar9 * (fVar12 - fVar13) - fVar14 * pfVar9[1];
          fVar12 = pfVar3[-4];
          fVar13 = pfVar5[3];
          fVar14 = pfVar3[-5] - pfVar5[2];
          pfVar3[-5] = pfVar5[2] + pfVar3[-5];
          pfVar3[-4] = pfVar5[3] + pfVar3[-4];
          pfVar5[2] = *pfVar8 * fVar14 + (fVar12 - fVar13) * pfVar8[1];
          pfVar10 = pfVar8 + iVar2;
          pfVar5[3] = *pfVar8 * (fVar12 - fVar13) - fVar14 * pfVar8[1];
          fVar12 = pfVar3[-6];
          fVar13 = pfVar5[1];
          fVar14 = pfVar3[-7] - *pfVar5;
          pfVar3[-7] = *pfVar5 + pfVar3[-7];
          pfVar3[-6] = pfVar5[1] + pfVar3[-6];
          *pfVar5 = *pfVar10 * fVar14 + (fVar12 - fVar13) * pfVar10[1];
          pfVar9 = pfVar5 + -8;
          pfVar8 = pfVar10 + iVar2;
          pfVar3 = pfVar3 + -8;
          pfVar5[1] = *pfVar10 * (fVar12 - fVar13) - fVar14 * pfVar10[1];
          pfVar5 = pfVar9;
        } while (pfVar11 <= pfVar9);
        pfVar11 = pfVar11 + iVar7;
        local_8 = local_8 - 1;
      } while (local_8 != 0);
    }
    local_10 = local_10 << 1 | (uint)((int)local_10 < 0);
    bVar4 = bVar4 + 1;
  }
  if (0 < param_1) {
    do {
      iVar6 = FUN_006d94c0();
    } while (iVar6 != 1);
  }
  return;
}


/* FUN_006d9300 @ 006d9300  kind=gamemisc  attributed-by=none  size=441 */

void FUN_006d9300(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int in_ECX;
  float *pfVar4;
  float *in_EDX;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  
  pfVar4 = (float *)(in_ECX + 0x10);
  pfVar3 = in_EDX + (param_1 >> 1) + -8 + (param_1 - (param_1 >> 1)) + 7;
  pfVar5 = in_EDX + (param_1 >> 1) + -8;
  do {
    fVar7 = *pfVar3 - pfVar5[7];
    fVar8 = pfVar3[-1] - pfVar5[6];
    pfVar3[-1] = pfVar3[-1] + pfVar5[6];
    *pfVar3 = *pfVar3 + pfVar5[7];
    pfVar5[6] = pfVar4[-4] * fVar8 + pfVar4[-3] * fVar7;
    pfVar5[7] = pfVar4[-4] * fVar7 - pfVar4[-3] * fVar8;
    fVar7 = pfVar3[-2] - pfVar5[5];
    fVar8 = pfVar3[-3] - pfVar5[4];
    pfVar3[-3] = pfVar3[-3] + pfVar5[4];
    pfVar3[-2] = pfVar3[-2] + pfVar5[5];
    pfVar5[4] = pfVar4[1] * fVar7 + fVar8 * *pfVar4;
    pfVar5[5] = fVar7 * *pfVar4 - pfVar4[1] * fVar8;
    fVar7 = pfVar3[-4] - pfVar5[3];
    fVar8 = pfVar3[-5] - pfVar5[2];
    pfVar3[-5] = pfVar3[-5] + pfVar5[2];
    pfVar3[-4] = pfVar3[-4] + pfVar5[3];
    pfVar5[2] = pfVar4[5] * fVar7 + pfVar4[4] * fVar8;
    pfVar5[3] = pfVar4[4] * fVar7 - pfVar4[5] * fVar8;
    fVar8 = pfVar3[-7] - *pfVar5;
    fVar7 = pfVar3[-6] - pfVar5[1];
    pfVar3[-7] = pfVar3[-7] + *pfVar5;
    pfVar3[-6] = pfVar3[-6] + pfVar5[1];
    *pfVar5 = pfVar4[9] * fVar7 + pfVar4[8] * fVar8;
    pfVar1 = pfVar4 + 8;
    pfVar2 = pfVar4 + 9;
    pfVar6 = pfVar5 + -8;
    pfVar3 = pfVar3 + -8;
    pfVar4 = pfVar4 + 0x10;
    pfVar5[1] = *pfVar1 * fVar7 - *pfVar2 * fVar8;
    pfVar5 = pfVar6;
  } while (in_EDX <= pfVar6);
  return;
}


/* FUN_006d94c0 @ 006d94c0  kind=gamemisc  attributed-by=none  size=1887 */

void FUN_006d94c0(void)

{
  float *in_ECX;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar3 = in_ECX[0x1f];
  fVar2 = in_ECX[0xe];
  in_ECX[0x1f] = in_ECX[0xf] + in_ECX[0x1f];
  fVar1 = in_ECX[0x1d] - in_ECX[0xd];
  in_ECX[0xe] = in_ECX[0x1e] - fVar2;
  in_ECX[0xf] = fVar3 - in_ECX[0xf];
  fVar3 = in_ECX[0x1c] - in_ECX[0xc];
  in_ECX[0x1d] = in_ECX[0xd] + in_ECX[0x1d];
  in_ECX[0x1c] = in_ECX[0xc] + in_ECX[0x1c];
  in_ECX[0xc] = fVar3 * 0.9238795 - fVar1 * 0.38268343;
  fVar4 = in_ECX[0x1a] - in_ECX[10];
  in_ECX[0xd] = fVar1 * 0.9238795 + fVar3 * 0.38268343;
  fVar1 = in_ECX[0x1b] - in_ECX[0xb];
  in_ECX[0x1a] = in_ECX[10] + in_ECX[0x1a];
  in_ECX[0x1e] = fVar2 + in_ECX[0x1e];
  in_ECX[0x1b] = in_ECX[0xb] + in_ECX[0x1b];
  fVar3 = in_ECX[6];
  fVar5 = in_ECX[0x18] - in_ECX[8];
  in_ECX[10] = (fVar4 - fVar1) * 0.70710677;
  in_ECX[0xb] = (fVar1 + fVar4) * 0.70710677;
  fVar2 = in_ECX[0x19] - in_ECX[9];
  in_ECX[0x19] = in_ECX[9] + in_ECX[0x19];
  in_ECX[0x18] = in_ECX[8] + in_ECX[0x18];
  in_ECX[8] = fVar5 * 0.38268343 - fVar2 * 0.9238795;
  in_ECX[9] = fVar2 * 0.38268343 + fVar5 * 0.9238795;
  in_ECX[6] = in_ECX[7] - in_ECX[0x17];
  in_ECX[0x17] = in_ECX[0x17] + in_ECX[7];
  fVar2 = in_ECX[5] - in_ECX[0x15];
  in_ECX[7] = in_ECX[0x16] - fVar3;
  fVar1 = in_ECX[4] - in_ECX[0x14];
  in_ECX[0x15] = in_ECX[0x15] + in_ECX[5];
  in_ECX[0x16] = fVar3 + in_ECX[0x16];
  in_ECX[0x14] = in_ECX[0x14] + in_ECX[4];
  in_ECX[4] = fVar2 * 0.9238795 + fVar1 * 0.38268343;
  fVar3 = in_ECX[3] - in_ECX[0x13];
  fVar4 = in_ECX[2] - in_ECX[0x12];
  in_ECX[5] = fVar2 * 0.38268343 - fVar1 * 0.9238795;
  in_ECX[0x13] = in_ECX[0x13] + in_ECX[3];
  in_ECX[0x12] = in_ECX[0x12] + in_ECX[2];
  in_ECX[3] = (fVar3 - fVar4) * 0.70710677;
  in_ECX[2] = (fVar3 + fVar4) * 0.70710677;
  fVar2 = in_ECX[1] - in_ECX[0x11];
  fVar3 = *in_ECX - in_ECX[0x10];
  in_ECX[0x11] = in_ECX[0x11] + in_ECX[1];
  in_ECX[0x10] = in_ECX[0x10] + *in_ECX;
  fVar1 = fVar2 * 0.38268343 + fVar3 * 0.9238795;
  fVar5 = fVar2 * 0.9238795 - fVar3 * 0.38268343;
  fVar2 = fVar1 - in_ECX[8];
  fVar1 = fVar1 + in_ECX[8];
  fVar4 = fVar5 - in_ECX[9];
  in_ECX[8] = fVar1;
  fVar3 = in_ECX[3];
  in_ECX[9] = fVar5 + in_ECX[9];
  *in_ECX = (fVar2 + fVar4) * 0.70710677;
  in_ECX[1] = (fVar4 - fVar2) * 0.70710677;
  fVar2 = in_ECX[10];
  in_ECX[10] = in_ECX[2] + fVar2;
  in_ECX[3] = fVar2 - in_ECX[2];
  in_ECX[2] = fVar3 - in_ECX[0xb];
  in_ECX[0xb] = fVar3 + in_ECX[0xb];
  fVar2 = in_ECX[0xc] - in_ECX[4];
  fVar3 = in_ECX[0xd] - in_ECX[5];
  fVar4 = in_ECX[0xe] - in_ECX[6];
  in_ECX[0xd] = in_ECX[5] + in_ECX[0xd];
  in_ECX[0xc] = in_ECX[4] + in_ECX[0xc];
  in_ECX[0xe] = in_ECX[0xe] + in_ECX[6];
  fVar5 = (fVar3 + fVar2) * 0.70710677;
  in_ECX[4] = (fVar2 - fVar3) * 0.70710677;
  fVar8 = in_ECX[0xf] - in_ECX[7];
  in_ECX[0xf] = in_ECX[0xf] + in_ECX[7];
  fVar2 = in_ECX[2] + fVar4;
  fVar4 = fVar4 - in_ECX[2];
  fVar3 = *in_ECX + in_ECX[4];
  fVar6 = in_ECX[4] - *in_ECX;
  in_ECX[6] = fVar3 + fVar2;
  in_ECX[4] = fVar2 - fVar3;
  fVar3 = fVar5 - in_ECX[1];
  fVar2 = fVar8 - in_ECX[3];
  fVar8 = in_ECX[3] + fVar8;
  fVar5 = in_ECX[1] + fVar5;
  *in_ECX = fVar4 + fVar3;
  in_ECX[2] = fVar4 - fVar3;
  in_ECX[3] = fVar6 + fVar2;
  in_ECX[1] = fVar2 - fVar6;
  in_ECX[7] = fVar8 + fVar5;
  in_ECX[5] = fVar8 - fVar5;
  fVar4 = in_ECX[10] + in_ECX[0xe];
  fVar8 = in_ECX[0xe] - in_ECX[10];
  fVar3 = in_ECX[0xc] - fVar1;
  fVar1 = in_ECX[0xc] + fVar1;
  fVar2 = in_ECX[0xd] - in_ECX[9];
  fVar5 = in_ECX[9] + in_ECX[0xd];
  in_ECX[0xe] = fVar1 + fVar4;
  in_ECX[0xc] = fVar4 - fVar1;
  fVar1 = in_ECX[0xf] - in_ECX[0xb];
  fVar4 = in_ECX[0xb] + in_ECX[0xf];
  in_ECX[8] = fVar8 + fVar2;
  in_ECX[10] = fVar8 - fVar2;
  in_ECX[0xb] = fVar3 + fVar1;
  in_ECX[9] = fVar1 - fVar3;
  in_ECX[0xf] = fVar4 + fVar5;
  in_ECX[0xd] = fVar4 - fVar5;
  fVar1 = in_ECX[0x10] - in_ECX[0x18];
  fVar3 = in_ECX[0x1a];
  fVar4 = in_ECX[0x11] - in_ECX[0x19];
  in_ECX[0x18] = in_ECX[0x18] + in_ECX[0x10];
  in_ECX[0x19] = in_ECX[0x19] + in_ECX[0x11];
  in_ECX[0x10] = (fVar1 + fVar4) * 0.70710677;
  fVar2 = in_ECX[0x12];
  in_ECX[0x11] = (fVar4 - fVar1) * 0.70710677;
  in_ECX[0x12] = in_ECX[0x13] - in_ECX[0x1b];
  in_ECX[0x1b] = in_ECX[0x1b] + in_ECX[0x13];
  in_ECX[0x1a] = fVar2 + fVar3;
  in_ECX[0x13] = fVar3 - fVar2;
  fVar2 = in_ECX[0x1c] - in_ECX[0x14];
  fVar3 = in_ECX[0x1d] - in_ECX[0x15];
  in_ECX[0x1d] = in_ECX[0x15] + in_ECX[0x1d];
  in_ECX[0x1c] = in_ECX[0x14] + in_ECX[0x1c];
  in_ECX[0x14] = (fVar2 - fVar3) * 0.70710677;
  fVar8 = in_ECX[0x1f] - in_ECX[0x17];
  in_ECX[0x15] = (fVar3 + fVar2) * 0.70710677;
  fVar5 = in_ECX[0x1e] - in_ECX[0x16];
  in_ECX[0x1f] = in_ECX[0x17] + in_ECX[0x1f];
  fVar3 = in_ECX[0x14] + in_ECX[0x10];
  fVar7 = in_ECX[0x14] - in_ECX[0x10];
  in_ECX[0x1e] = in_ECX[0x16] + in_ECX[0x1e];
  fVar1 = in_ECX[0x12] + fVar5;
  fVar5 = fVar5 - in_ECX[0x12];
  fVar2 = in_ECX[0x15] - in_ECX[0x11];
  fVar6 = in_ECX[0x15] + in_ECX[0x11];
  in_ECX[0x16] = fVar3 + fVar1;
  fVar4 = fVar8 - in_ECX[0x13];
  fVar8 = in_ECX[0x13] + fVar8;
  in_ECX[0x14] = fVar1 - fVar3;
  in_ECX[0x10] = fVar5 + fVar2;
  in_ECX[0x12] = fVar5 - fVar2;
  in_ECX[0x13] = fVar7 + fVar4;
  in_ECX[0x11] = fVar4 - fVar7;
  in_ECX[0x17] = fVar8 + fVar6;
  in_ECX[0x15] = fVar8 - fVar6;
  fVar3 = in_ECX[0x1c] + in_ECX[0x18];
  fVar4 = in_ECX[0x1c] - in_ECX[0x18];
  fVar1 = in_ECX[0x1a] + in_ECX[0x1e];
  fVar8 = in_ECX[0x1e] - in_ECX[0x1a];
  fVar2 = in_ECX[0x1d] - in_ECX[0x19];
  in_ECX[0x1e] = fVar3 + fVar1;
  in_ECX[0x1c] = fVar1 - fVar3;
  fVar3 = in_ECX[0x1f] - in_ECX[0x1b];
  in_ECX[0x18] = fVar8 + fVar2;
  fVar1 = in_ECX[0x1b] + in_ECX[0x1f];
  fVar5 = in_ECX[0x19] + in_ECX[0x1d];
  in_ECX[0x1a] = fVar8 - fVar2;
  in_ECX[0x1b] = fVar4 + fVar3;
  in_ECX[0x19] = fVar3 - fVar4;
  in_ECX[0x1f] = fVar1 + fVar5;
  in_ECX[0x1d] = fVar1 - fVar5;
  return;
}


/* FUN_006d9f50 @ 006d9f50  kind=gamemisc  attributed-by=none  size=596 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_006d9f50(int param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  int *in_ECX;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int in_EDX;
  int iVar10;
  float *pfVar11;
  int iVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  float afStack_3c [2];
  
  iVar3 = *in_ECX;
  iVar6 = iVar3 >> 2;
  iVar7 = iVar3 >> 3;
  iVar12 = iVar3 >> 1;
  afStack_3c[1] = 1.0067293e-38;
  pfVar11 = (float *)(&stack0xffffffcc + iVar3 * -4);
  iVar2 = iVar12 * 4;
  iVar10 = in_EDX + (iVar12 + iVar6) * 4;
  iVar8 = 0;
  pfVar13 = (float *)(iVar10 + 4);
  pfVar4 = (float *)(in_ECX[2] + iVar2);
  pfVar5 = pfVar4;
  iVar9 = iVar8;
  if (0 < iVar7) {
    do {
      fVar15 = *(float *)(iVar10 + -8) + *pfVar13;
      fVar14 = pfVar13[2] + *(float *)(iVar10 + -0x10);
      iVar10 = iVar10 + -0x10;
      pfVar4 = pfVar5 + -2;
      iVar8 = iVar9 + 2;
      pfVar13 = pfVar13 + 4;
      afStack_3c[(iVar12 + iVar8) - iVar3] = pfVar5[-1] * fVar14 + pfVar5[-2] * fVar15;
      afStack_3c[(iVar12 + iVar9 + 3) - iVar3] = *pfVar4 * fVar14 - pfVar5[-1] * fVar15;
      pfVar5 = pfVar4;
      iVar9 = iVar8;
    } while (iVar8 < iVar7);
  }
  pfVar13 = (float *)(in_EDX + 4);
  while (iVar8 < iVar12 - iVar7) {
    fVar15 = *(float *)(iVar10 + -8) - *pfVar13;
    fVar14 = *(float *)(iVar10 + -0x10) - pfVar13[2];
    iVar10 = iVar10 + -0x10;
    pfVar13 = pfVar13 + 4;
    afStack_3c[(iVar12 + iVar8 + 2) - iVar3] = pfVar4[-1] * fVar14 + pfVar4[-2] * fVar15;
    afStack_3c[(iVar12 + iVar8 + 3) - iVar3] = pfVar4[-2] * fVar14 - pfVar4[-1] * fVar15;
    pfVar4 = pfVar4 + -2;
    iVar8 = iVar8 + 2;
  }
  iVar10 = in_EDX + iVar3 * 4;
  while (iVar8 < iVar12) {
    pfVar5 = (float *)(iVar10 + -8);
    pfVar1 = (float *)(iVar10 + -0x10);
    iVar10 = iVar10 + -0x10;
    fVar15 = -*pfVar5 - *pfVar13;
    fVar14 = -*pfVar1 - pfVar13[2];
    pfVar13 = pfVar13 + 4;
    afStack_3c[(iVar12 + iVar8 + 2) - iVar3] = pfVar4[-1] * fVar14 + pfVar4[-2] * fVar15;
    afStack_3c[(iVar12 + iVar8 + 3) - iVar3] = pfVar4[-2] * fVar14 - pfVar4[-1] * fVar15;
    pfVar4 = pfVar4 + -2;
    iVar8 = iVar8 + 2;
  }
  afStack_3c[1 - iVar3] = (float)iVar12;
  afStack_3c[-iVar3] = 1.0067892e-38;
  FUN_006d8ec0();
  afStack_3c[1 - iVar3] = 1.0067909e-38;
  FUN_006d8d10();
  pfVar13 = (float *)(in_ECX[2] + iVar2);
  pfVar4 = (float *)(iVar2 + param_1);
  iVar10 = 0;
  if (0 < iVar6) {
    do {
      pfVar4 = pfVar4 + -1;
      iVar10 = iVar10 + 1;
      *(float *)(param_1 + -4 + iVar10 * 4) =
           (pfVar13[1] * pfVar11[1] + *pfVar13 * *pfVar11) * (float)in_ECX[4];
      *pfVar4 = (pfVar13[1] * *pfVar11 - *pfVar13 * pfVar11[1]) * (float)in_ECX[4];
      pfVar13 = pfVar13 + 2;
      pfVar11 = pfVar11 + 2;
    } while (iVar10 < iVar6);
  }
  return;
}


/* FUN_006da4b0 @ 006da4b0  kind=gamemisc  attributed-by=none  size=25 */

undefined4 FUN_006da4b0(void)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = (int *)(*(int *)(*(int *)(in_ECX + 0x40) + 0x68) + 0x50);
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* FUN_006da4e0 @ 006da4e0  kind=gamemisc  attributed-by=none  size=557 */

void FUN_006da4e0(int param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  undefined4 *in_ECX;
  int iVar7;
  int iVar8;
  int iVar9;
  int in_EDX;
  int iVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  
  iVar7 = 0;
  if (param_3 != 0) {
    iVar7 = param_2;
  }
  puVar2 = (&PTR_DAT_0073fe10)[*(int *)(in_EDX + iVar7 * 4)];
  iVar13 = 0;
  if (param_3 != 0) {
    iVar13 = param_4;
  }
  puVar3 = (&PTR_DAT_0073fe10)[*(int *)(in_EDX + iVar13 * 4)];
  iVar6 = *(int *)(param_1 + param_3 * 4);
  iVar7 = *(int *)(param_1 + iVar7 * 4);
  iVar13 = *(int *)(param_1 + iVar13 * 4);
  iVar12 = (int)((iVar6 >> 0x1f & 3U) + iVar6) >> 2;
  iVar10 = iVar12 - ((int)(iVar7 + (iVar7 >> 0x1f & 3U)) >> 2);
  iVar4 = iVar7 / 2 + iVar10;
  iVar12 = (iVar6 / 2 - ((int)((iVar13 >> 0x1f & 3U) + iVar13) >> 2)) + iVar12;
  iVar7 = iVar13 / 2 + iVar12;
  iVar8 = 0;
  iVar9 = iVar10;
  puVar14 = in_ECX;
  if (0 < iVar10) {
    for (; iVar8 = iVar10, iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar14 = 0;
      puVar14 = puVar14 + 1;
    }
  }
  param_3 = 0;
  if (iVar8 < iVar4) {
    if (3 < iVar4 - iVar8) {
      iVar10 = ((iVar4 - iVar8) - 4U >> 2) + 1;
      iVar9 = iVar8 + 2;
      param_3 = iVar10 * 4;
      iVar8 = iVar8 + param_3;
      pfVar5 = (float *)(in_ECX + iVar9);
      pfVar11 = (float *)(puVar2 + 8);
      do {
        pfVar5[-2] = pfVar11[-2] * pfVar5[-2];
        pfVar5[-1] = pfVar11[-1] * pfVar5[-1];
        *pfVar5 = *pfVar5 * *pfVar11;
        pfVar5[1] = pfVar11[1] * pfVar5[1];
        iVar10 = iVar10 + -1;
        pfVar5 = pfVar5 + 4;
        pfVar11 = pfVar11 + 4;
      } while (iVar10 != 0);
    }
    if (iVar8 < iVar4) {
      pfVar5 = (float *)(puVar2 + param_3 * 4);
      do {
        fVar1 = *pfVar5;
        iVar9 = iVar8 + 1;
        pfVar5 = pfVar5 + 1;
        in_ECX[iVar8] = fVar1 * (float)in_ECX[iVar8];
        iVar8 = iVar9;
      } while (iVar9 < iVar4);
    }
  }
  iVar13 = iVar13 / 2 + -1;
  if (iVar12 < iVar7) {
    if (3 < iVar7 - iVar12) {
      iVar8 = iVar12 + 2;
      iVar9 = iVar13 * 4;
      iVar4 = ((iVar7 - iVar12) - 4U >> 2) + 1;
      iVar12 = iVar12 + iVar4 * 4;
      iVar13 = iVar13 + iVar4 * -4;
      pfVar5 = (float *)(in_ECX + iVar8);
      pfVar11 = (float *)(puVar3 + iVar9 + -8);
      do {
        pfVar5[-2] = pfVar11[2] * pfVar5[-2];
        pfVar5[-1] = pfVar11[1] * pfVar5[-1];
        *pfVar5 = *pfVar11 * *pfVar5;
        pfVar5[1] = pfVar11[-1] * pfVar5[1];
        iVar4 = iVar4 + -1;
        pfVar5 = pfVar5 + 4;
        pfVar11 = pfVar11 + -4;
      } while (iVar4 != 0);
    }
    if (iVar12 < iVar7) {
      pfVar5 = (float *)(puVar3 + iVar13 * 4);
      iVar13 = iVar12;
      do {
        fVar1 = *pfVar5;
        iVar12 = iVar13 + 1;
        pfVar5 = pfVar5 + -1;
        in_ECX[iVar13] = fVar1 * (float)in_ECX[iVar13];
        iVar13 = iVar12;
      } while (iVar12 < iVar7);
    }
  }
  if (iVar12 < iVar6) {
    puVar14 = in_ECX + iVar12;
    for (iVar6 = iVar6 - iVar12; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar14 = 0;
      puVar14 = puVar14 + 1;
    }
  }
  return;
}


/* FUN_006dafa0 @ 006dafa0  kind=gamemisc  attributed-by=none  size=643 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_006dafa0(int param_1,int param_2,code *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  int in_ECX;
  code *pcVar10;
  int *in_EDX;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  int iStack_4c;
  int local_2c;
  int local_28;
  int local_1c;
  int local_c;
  
  piVar1 = (int *)*in_EDX;
  iVar2 = piVar1[2];
  iVar3 = *(int *)in_EDX[4];
  iVar5 = *(int *)(in_ECX + 0x24) >> 1;
  if (piVar1[1] < iVar5) {
    iVar5 = piVar1[1];
  }
  if (0 < iVar5 - *piVar1) {
    iVar6 = (iVar5 - *piVar1) / iVar2;
    iVar5 = param_2 * -4;
    puVar12 = &stack0xffffffb8 + iVar5;
    iVar16 = 0;
    if (0 < param_2) {
      uVar14 = ((iVar6 + -1 + iVar3) / iVar3) * 4 + 7U & 0xfffffff8;
      puVar12 = &stack0xffffffb8 + iVar5;
      do {
        if (*(int *)(in_ECX + 0x4c) < (int)(*(int *)(in_ECX + 0x48) + uVar14)) {
          pcVar10 = malloc_exref;
          if (*(int *)(in_ECX + 0x44) != 0) {
            *(undefined4 *)(puVar12 + -4) = 8;
            *(undefined4 *)(puVar12 + -8) = 0x6db027;
            puVar7 = malloc(*(size_t *)(puVar12 + -4));
            *(int *)(in_ECX + 0x50) = *(int *)(in_ECX + 0x50) + *(int *)(in_ECX + 0x48);
            puVar7[1] = *(undefined4 *)(in_ECX + 0x54);
            *puVar7 = *(undefined4 *)(in_ECX + 0x44);
            pcVar10 = malloc_exref;
            *(undefined4 **)(in_ECX + 0x54) = puVar7;
          }
          *(uint *)(puVar12 + -4) = uVar14;
          *(uint *)(in_ECX + 0x4c) = uVar14;
          puVar11 = puVar12 + -8;
          *(undefined4 *)(puVar12 + -8) = 0x6db04d;
          uVar8 = (*pcVar10)();
          puVar12 = puVar11 + 4;
          *(undefined4 *)(in_ECX + 0x44) = uVar8;
          *(undefined4 *)(in_ECX + 0x48) = 0;
        }
        iVar17 = *(int *)(in_ECX + 0x48);
        *(uint *)(in_ECX + 0x48) = iVar17 + uVar14;
        iVar16 = iVar16 + 1;
        (&iStack_4c)[iVar16 - param_2] = *(int *)(in_ECX + 0x44) + iVar17;
      } while (iVar16 < param_2);
    }
    local_1c = 0;
    if (0 < in_EDX[2]) {
      do {
        iVar16 = 0;
        local_28 = 0;
        if (0 < iVar6) {
          local_c = 0;
          do {
            if ((local_1c == 0) && (iVar17 = 0, 0 < param_2)) {
              do {
                iVar16 = in_EDX[4];
                if (*(int *)(iVar16 + 8) < 1) {
                  return 0;
                }
                *(undefined4 *)(puVar12 + -4) = 0x6db0cd;
                iVar9 = FUN_006d3630();
                if (iVar9 < 0) {
                  return 0;
                }
                iVar16 = *(int *)(*(int *)(iVar16 + 0x18) + iVar9 * 4);
                if (iVar16 == -1) {
                  return 0;
                }
                if (piVar1[4] <= iVar16) {
                  return 0;
                }
                *(undefined4 *)(local_c + *(int *)(&stack0xffffffb8 + iVar17 * 4 + iVar5)) =
                     *(undefined4 *)(in_EDX[7] + iVar16 * 4);
                if (*(int *)(local_c + *(int *)(&stack0xffffffb8 + iVar17 * 4 + iVar5)) == 0) {
                  return 0;
                }
                iVar17 = iVar17 + 1;
                iVar16 = local_28;
              } while (iVar17 < param_2);
            }
            local_2c = 0;
            if (0 < iVar3) {
              iVar17 = iVar16 * iVar2;
              do {
                if (iVar6 <= iVar16) break;
                iVar9 = 0;
                if (0 < param_2) {
                  piVar15 = (int *)(&stack0xffffffb8 + iVar5);
                  do {
                    iVar16 = *piVar1;
                    iVar4 = *(int *)(*(int *)(local_c + *piVar15) + local_2c * 4);
                    if (((piVar1[iVar4 + 6] & 1 << ((byte)local_1c & 0x1f)) != 0) &&
                       (iVar4 = *(int *)(*(int *)(in_EDX[5] + iVar4 * 4) + local_1c * 4), iVar4 != 0
                       )) {
                      *(int *)(puVar12 + -4) = iVar2;
                      *(int *)(puVar12 + -8) = in_ECX + 4;
                      *(int *)(puVar12 + -0xc) =
                           *(int *)((param_1 - (int)(&stack0xffffffb8 + iVar5)) + (int)piVar15) +
                           (iVar16 + iVar17) * 4;
                      *(int *)(puVar12 + -0x10) = iVar4;
                      puVar13 = puVar12 + -0x14;
                      *(undefined4 *)(puVar12 + -0x14) = 0x6db1bc;
                      iVar16 = (*param_3)();
                      puVar12 = puVar13 + 0x10;
                      if (iVar16 == -1) {
                        return 0;
                      }
                    }
                    iVar9 = iVar9 + 1;
                    piVar15 = piVar15 + 1;
                    iVar16 = local_28;
                  } while (iVar9 < param_2);
                }
                local_2c = local_2c + 1;
                iVar16 = iVar16 + 1;
                iVar17 = iVar17 + iVar2;
                local_28 = iVar16;
              } while (local_2c < iVar3);
            }
            local_c = local_c + 4;
          } while (iVar16 < iVar6);
        }
        local_1c = local_1c + 1;
      } while (local_1c < in_EDX[2]);
    }
  }
  return 0;
}


/* FUN_006db230 @ 006db230  kind=gamemisc  attributed-by=none  size=575 */

undefined4 FUN_006db230(int *param_1,int param_2,int param_3,int *param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int local_434 [128];
  int local_234 [128];
  int local_34;
  int local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int *local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_20 = (int *)*param_1;
  local_30 = local_20[3];
  iVar2 = local_20[2];
  local_c = *(int *)param_1[4];
  local_14 = (local_20[1] - *local_20) / iVar2;
  local_18 = iVar2;
  memset(local_434,0,0x200);
  memset(local_234,0,0x200);
  local_8 = 0;
  iVar4 = local_14;
  if (0 < param_1[2]) {
    do {
      iVar8 = 0;
      iVar3 = local_8;
      if (0 < iVar4) {
        do {
          if ((iVar3 == 0) && (local_10 = 0, iVar4 = local_14, 0 < param_3)) {
            do {
              iVar4 = 1;
              piVar7 = (int *)(param_4[local_10] + iVar8 * 4);
              iVar2 = *piVar7;
              if (1 < local_c) {
                do {
                  piVar7 = piVar7 + 1;
                  iVar2 = iVar2 * local_30;
                  if (iVar4 + iVar8 < local_14) {
                    iVar2 = iVar2 + *piVar7;
                  }
                  iVar4 = iVar4 + 1;
                } while (iVar4 < local_c);
              }
              iVar4 = param_1[4];
              if (iVar2 < *(int *)(iVar4 + 4)) {
                if ((iVar2 < 0) || (*(int *)(*(int *)(iVar4 + 0xc) + 4) <= iVar2)) {
                  param_1[9] = param_1[9];
                }
                else {
                  iVar2 = iVar2 * 4;
                  FUN_00401c40(local_1c,*(undefined4 *)(*(int *)(iVar4 + 0x14) + iVar2),
                               *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0xc) + 8) + iVar2));
                  param_1[9] = param_1[9] + *(int *)(iVar2 + *(int *)(*(int *)(iVar4 + 0xc) + 8));
                }
              }
              local_10 = local_10 + 1;
              iVar4 = local_14;
              iVar3 = local_8;
              iVar2 = local_18;
            } while (local_10 < param_3);
          }
          local_10 = 0;
          if (0 < local_c) {
            local_24 = iVar8 * iVar2;
            iVar6 = local_c;
            do {
              if (iVar4 <= iVar8) goto LAB_006db459;
              bVar1 = (byte)iVar3 & 0x1f;
              uVar5 = 1 << bVar1 | 1U >> 0x20 - bVar1;
              local_34 = *local_20 + local_24;
              local_2c = uVar5;
              if (0 < param_3) {
                local_28 = param_2 - (int)param_4;
                iVar4 = param_3;
                piVar7 = param_4;
                do {
                  if (iVar3 == 0) {
                    local_234[*(int *)(*piVar7 + iVar8 * 4)] =
                         local_234[*(int *)(*piVar7 + iVar8 * 4)] + local_18;
                  }
                  iVar2 = *(int *)(*piVar7 + iVar8 * 4);
                  if (((local_20[iVar2 + 6] & uVar5) != 0) &&
                     (iVar2 = *(int *)(*(int *)(param_1[5] + iVar2 * 4) + local_8 * 4), iVar2 != 0))
                  {
                    iVar2 = FUN_006db8a0(local_1c,*(int *)(local_28 + (int)piVar7) + local_34 * 4,
                                         local_18,iVar2,0);
                    uVar5 = local_2c;
                    param_1[8] = param_1[8] + iVar2;
                    local_434[*(int *)(*piVar7 + iVar8 * 4)] =
                         local_434[*(int *)(*piVar7 + iVar8 * 4)] + iVar2;
                  }
                  piVar7 = piVar7 + 1;
                  iVar4 = iVar4 + -1;
                  iVar3 = local_8;
                  iVar6 = local_c;
                  iVar2 = local_18;
                } while (iVar4 != 0);
              }
              local_10 = local_10 + 1;
              local_24 = local_24 + iVar2;
              iVar8 = iVar8 + 1;
              iVar4 = local_14;
            } while (local_10 < iVar6);
          }
        } while (iVar8 < iVar4);
      }
LAB_006db459:
      local_8 = iVar3 + 1;
    } while (iVar3 + 1 < param_1[2]);
  }
  return 0;
}


/* FUN_006db8a0 @ 006db8a0  kind=gamemisc  attributed-by=none  size=136 */

int FUN_006db8a0(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int local_8;
  
  piVar1 = param_4;
  param_4 = (int *)(param_3 / *param_4);
  iVar2 = 0;
  local_8 = 0;
  if (0 < (int)param_4) {
    do {
      iVar2 = FUN_006db930();
      if ((iVar2 < 0) || (*(int *)(piVar1[3] + 4) <= iVar2)) {
        iVar2 = 0;
      }
      else {
        iVar2 = iVar2 * 4;
        FUN_00401c40(param_1,*(undefined4 *)(piVar1[5] + iVar2),
                     *(undefined4 *)(*(int *)(piVar1[3] + 8) + iVar2));
        iVar2 = *(int *)(iVar2 + *(int *)(piVar1[3] + 8));
      }
      iVar2 = local_8 + iVar2;
      param_4 = (int *)((int)param_4 + -1);
      local_8 = iVar2;
    } while (param_4 != (int *)0x0);
  }
  return iVar2;
}


/* FUN_006db930 @ 006db930  kind=gamemisc  attributed-by=none  size=1000 */

int FUN_006db930(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *in_ECX;
  int *piVar6;
  int *in_EDX;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  int iVar13;
  int iVar14;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  int local_58;
  int aiStack_54 [8];
  int *local_34;
  int *local_30;
  uint *local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  int *local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  uVar5 = in_ECX[0xc];
  local_10 = in_ECX[0xd];
  uVar8 = in_ECX[0xb];
  iVar10 = 0;
  local_24 = *in_ECX;
  iVar2 = (int)uVar8 >> 1;
  local_28 = iVar2;
  local_1c = local_24;
  local_8 = uVar5;
  local_20 = uVar8;
  local_c = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_2c = in_ECX;
  local_14 = in_EDX;
  if (local_10 == 1) {
    if ((int)local_24 < 1) goto LAB_006dba80;
    piVar7 = (int *)((int)&local_78 + local_24 * 4);
    local_34 = piVar7;
    local_30 = (int *)((int)in_EDX - (int)&local_78);
    piVar9 = (int *)((int)in_EDX - (int)&local_78);
    do {
      iVar3 = *(int *)((int)piVar7 + (int)piVar9 + -4) - uVar5;
      piVar7 = piVar7 + -1;
      if (iVar3 < iVar2) {
        iVar4 = (iVar2 - iVar3) * 2 + -1;
      }
      else {
        iVar4 = (iVar3 - iVar2) * 2;
      }
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if ((int)uVar8 <= iVar4) {
        iVar4 = uVar8 - 1;
      }
      iVar10 = iVar10 * uVar8 + iVar4;
      uVar11 = local_24 - 1;
      local_24 = uVar11;
      *piVar7 = uVar5 + iVar3;
      piVar9 = local_30;
    } while (uVar11 != 0);
  }
  else {
    if ((int)local_24 < 1) goto LAB_006dba80;
    local_18 = (int)in_EDX - (int)&local_78;
    local_30 = (int *)((int)&local_78 + local_24 * 4);
    local_34 = (int *)((int)local_10 >> 1);
    piVar7 = (int *)((int)local_10 >> 1);
    do {
      piVar9 = local_34;
      local_30 = local_30 + -1;
      iVar3 = (int)((*(int *)(local_18 + (int)local_30) - local_8) + (int)piVar7) / (int)local_10;
      if (iVar3 < iVar2) {
        iVar4 = (iVar2 - iVar3) * 2 + -1;
      }
      else {
        iVar4 = (iVar3 - iVar2) * 2;
      }
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if ((int)uVar8 <= iVar4) {
        iVar4 = uVar8 - 1;
      }
      iVar10 = iVar10 * uVar8 + iVar4;
      uVar5 = local_24 - 1;
      local_24 = uVar5;
      *local_30 = iVar3 * local_10 + local_8;
      piVar7 = piVar9;
    } while (uVar5 != 0);
  }
  local_c = iVar10;
  uVar5 = local_8;
  uVar8 = local_20;
LAB_006dba80:
  iVar2 = local_c;
  piVar7 = local_14;
  uVar11 = local_1c;
  if (*(int *)(*(int *)(local_2c[3] + 8) + local_c * 4) < 1) {
    piVar9 = (int *)((uVar8 - 1) * local_10 + uVar5);
    local_28 = -1;
    local_58 = 0;
    aiStack_54[0] = 0;
    aiStack_54[1] = 0;
    aiStack_54[2] = 0;
    aiStack_54[3] = 0;
    aiStack_54[4] = 0;
    aiStack_54[5] = 0;
    aiStack_54[6] = 0;
    local_30 = piVar9;
    local_24 = 0;
    aiStack_54[7] = local_2c[1];
    if (0 < (int)local_2c[1]) {
      local_2c = *(uint **)(local_2c[3] + 8);
      do {
        if (0 < (int)*local_2c) {
          iVar2 = 0;
          local_8 = 0;
          if (((0 < (int)uVar11) && (3 < uVar11)) && (1 < DAT_0076e2a0)) {
            iVar10 = uVar11 * 4;
            iVar3 = 0;
            iVar4 = 0;
            iVar13 = 0;
            iVar14 = 0;
            if ((piVar7 + (uVar11 - 1) < &local_58) ||
               (uVar11 = local_1c, (int *)((int)&local_60 + iVar10 + 4) < piVar7)) {
              uVar5 = local_1c & 0x80000003;
              if ((int)uVar5 < 0) {
                uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
              }
              piVar9 = piVar7;
              do {
                piVar6 = (int *)(((int)&local_58 - (int)piVar7) + (int)piVar9);
                iVar2 = iVar2 + 4;
                auVar12._0_4_ = *piVar6 - *piVar9;
                auVar12._4_4_ = piVar6[1] - piVar9[1];
                auVar12._8_4_ = piVar6[2] - piVar9[2];
                auVar12._12_4_ = piVar6[3] - piVar9[3];
                auVar12 = pmulld(auVar12,auVar12);
                iVar3 = iVar3 + auVar12._0_4_;
                iVar4 = iVar4 + auVar12._4_4_;
                iVar13 = iVar13 + auVar12._8_4_;
                iVar14 = iVar14 + auVar12._12_4_;
                piVar9 = piVar9 + 4;
              } while (iVar2 < (int)(local_1c - uVar5));
              local_8 = iVar3 + iVar13 + iVar4 + iVar14;
              uVar11 = local_1c;
            }
          }
          iVar10 = 0;
          local_18 = 0;
          local_20 = 0;
          if (iVar2 < (int)uVar11) {
            if (1 < (int)(uVar11 - iVar2)) {
              iVar3 = -(int)piVar7;
              iVar4 = ((uVar11 - iVar2) - 2 >> 1) + 1;
              piVar9 = piVar7 + iVar2;
              local_34 = (int *)((int)aiStack_54 + iVar3);
              iVar2 = iVar2 + iVar4 * 2;
              do {
                iVar10 = *(int *)((int)&local_58 + iVar3 + (int)piVar9) - *piVar9;
                iVar10 = local_18 + iVar10 * iVar10;
                local_18 = iVar10;
                iVar13 = *(int *)((int)&local_60 + iVar3 + 4 + (int)(piVar9 + 2)) - piVar9[1];
                local_20 = local_20 + iVar13 * iVar13;
                iVar4 = iVar4 + -1;
                piVar9 = piVar9 + 2;
                piVar7 = local_14;
              } while (iVar4 != 0);
            }
            if (iVar2 < (int)uVar11) {
              local_8 = local_8 + ((&local_58)[iVar2] - piVar7[iVar2]) *
                                  ((&local_58)[iVar2] - piVar7[iVar2]);
            }
            local_8 = local_8 + local_20 + iVar10;
          }
          piVar9 = local_30;
          if ((local_28 == -1) || (iVar2 = local_c, (int)local_8 < local_28)) {
            local_78 = CONCAT44(aiStack_54[0],local_58);
            uStack_70 = CONCAT44(aiStack_54[2],aiStack_54[1]);
            local_68 = CONCAT44(aiStack_54[4],aiStack_54[3]);
            local_60 = CONCAT44(aiStack_54[6],aiStack_54[5]);
            local_28 = local_8;
            local_c = local_24;
            iVar2 = local_c;
          }
        }
        iVar10 = 0;
        if ((int)piVar9 <= local_58) {
          piVar6 = &local_58;
          do {
            *piVar6 = 0;
            iVar10 = iVar10 + 1;
            piVar6 = &local_58 + iVar10;
          } while ((int)piVar9 <= (&local_58)[iVar10]);
        }
        piVar1 = local_14;
        piVar6 = &local_58 + iVar10;
        if (-1 < *piVar6) {
          *piVar6 = *piVar6 + local_10;
          piVar7 = piVar1;
        }
        *piVar6 = -*piVar6;
        local_24 = local_24 + 1;
        local_2c = local_2c + 1;
      } while ((int)local_24 < aiStack_54[7]);
    }
  }
  if ((-1 < iVar2) && (iVar10 = 0, 0 < (int)uVar11)) {
    if ((3 < uVar11) &&
       ((&stack0xffffff84 + uVar11 * 4 < piVar7 || (piVar7 + (uVar11 - 1) < &local_78)))) {
      uVar5 = uVar11 & 0x80000003;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
      }
      piVar9 = (int *)&local_78;
      do {
        iVar3 = piVar9[1];
        iVar4 = piVar9[2];
        iVar13 = piVar9[3];
        iVar10 = iVar10 + 4;
        *piVar7 = *piVar7 - *piVar9;
        piVar7[1] = piVar7[1] - iVar3;
        piVar7[2] = piVar7[2] - iVar4;
        piVar7[3] = piVar7[3] - iVar13;
        piVar7 = piVar7 + 4;
        piVar9 = piVar9 + 4;
      } while (iVar10 < (int)(uVar11 - uVar5));
    }
    for (; iVar10 < (int)uVar11; iVar10 = iVar10 + 1) {
      *piVar7 = *piVar7 - *(int *)((int)&local_78 + iVar10 * 4);
      piVar7 = piVar7 + 1;
    }
  }
  return iVar2;
}


/* FUN_006ddde0 @ 006ddde0  kind=gamemisc  attributed-by=none  size=531 */

bool FUN_006ddde0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  int in_EDX;
  uint uVar6;
  float *pfVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int local_8;
  
  uVar9 = param_2 - param_1;
  iVar8 = in_EDX - in_ECX;
  iVar2 = (int)uVar9 / iVar8;
  iVar3 = iVar2 + -1;
  if (-1 < (int)uVar9) {
    iVar3 = iVar2 + 1;
  }
  iVar10 = 0;
  fVar1 = *(float *)(param_3 + in_ECX * 4);
  iVar4 = (int)(fVar1 * 7.3142858 + 1023.5);
  if (iVar4 < 0x400) {
    if (iVar4 < 0) {
      iVar4 = 0;
    }
  }
  else {
    iVar4 = 0x3ff;
  }
  uVar6 = iVar2 * iVar8 >> 0x1f;
  param_2 = (param_1 - iVar4) * (param_1 - iVar4);
  local_8 = 1;
  if (fVar1 <= *(float *)(param_4 + in_ECX * 4) + *(float *)(param_5 + 0x458)) {
    if ((*(float *)(param_5 + 0x448) + (float)param_1 < (float)iVar4) ||
       ((float)iVar4 < (float)param_1 - *(float *)(param_5 + 0x44c))) {
      return true;
    }
  }
  iVar4 = in_ECX + 1;
  if (iVar4 < in_EDX) {
    pfVar7 = (float *)(param_3 + iVar4 * 4);
    do {
      iVar10 = iVar10 + (((uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f)) -
                        ((iVar2 * iVar8 ^ uVar6) - uVar6));
      iVar5 = iVar2;
      if (iVar8 <= iVar10) {
        iVar10 = iVar10 - iVar8;
        iVar5 = iVar3;
      }
      param_1 = param_1 + iVar5;
      iVar5 = (int)(*pfVar7 * 7.3142858 + 1023.5);
      if (iVar5 < 0x400) {
        if (iVar5 < 0) {
          iVar5 = 0;
        }
      }
      else {
        iVar5 = 0x3ff;
      }
      local_8 = local_8 + 1;
      param_2 = param_2 + (param_1 - iVar5) * (param_1 - iVar5);
      if ((*pfVar7 <= *(float *)((param_4 - param_3) + (int)pfVar7) + *(float *)(param_5 + 0x458))
         && (iVar5 != 0)) {
        if (*(float *)(param_5 + 0x448) + (float)param_1 < (float)iVar5) {
          return true;
        }
        if ((float)iVar5 < (float)param_1 - *(float *)(param_5 + 0x44c)) {
          return true;
        }
      }
      iVar4 = iVar4 + 1;
      pfVar7 = pfVar7 + 1;
    } while (iVar4 < in_EDX);
  }
  fVar1 = *(float *)(param_5 + 0x450);
  if (((*(float *)(param_5 + 0x448) * *(float *)(param_5 + 0x448)) / (float)local_8 <= fVar1) &&
     ((*(float *)(param_5 + 0x44c) * *(float *)(param_5 + 0x44c)) / (float)local_8 <= fVar1)) {
    return fVar1 < (float)(param_2 / local_8);
  }
  return false;
}


/* FUN_006de000 @ 006de000  kind=gamemisc  attributed-by=none  size=695 */

undefined4 FUN_006de000(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  int in_EDX;
  int *piVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  iVar2 = *in_ECX;
  dVar6 = 0.0;
  iVar3 = in_ECX[in_EDX * 0xe + -0xd];
  dVar7 = dVar6;
  dVar8 = dVar6;
  dVar9 = dVar6;
  dVar10 = dVar6;
  if (0 < in_EDX) {
    piVar4 = in_ECX + 8;
    do {
      iVar1 = piVar4[-1];
      dVar5 = (double)(((float)(piVar4[5] + iVar1) * *(float *)(param_3 + 0x454)) /
                      (float)(iVar1 + 1)) + 1.0;
      dVar7 = dVar7 + (double)piVar4[-6] * dVar5 + (double)*piVar4;
      dVar9 = dVar9 + (double)piVar4[-5] * dVar5 + (double)piVar4[1];
      dVar8 = dVar8 + (double)piVar4[-4] * dVar5 + (double)piVar4[2];
      dVar10 = dVar10 + (double)piVar4[-2] * dVar5 + (double)piVar4[4];
      dVar6 = dVar6 + (double)iVar1 * dVar5 + (double)piVar4[5];
      in_EDX = in_EDX + -1;
      piVar4 = piVar4 + 0xe;
    } while (in_EDX != 0);
  }
  iVar1 = *param_1;
  if (-1 < iVar1) {
    dVar7 = dVar7 + (double)iVar2;
    dVar6 = dVar6 + 1.0;
    dVar9 = dVar9 + (double)iVar1;
    dVar8 = dVar8 + (double)(iVar2 * iVar2);
    dVar10 = dVar10 + (double)(iVar1 * iVar2);
  }
  iVar1 = *param_2;
  if (-1 < iVar1) {
    dVar7 = dVar7 + (double)iVar3;
    dVar6 = dVar6 + 1.0;
    dVar9 = dVar9 + (double)iVar1;
    dVar8 = dVar8 + (double)(iVar3 * iVar3);
    dVar10 = dVar10 + (double)(iVar1 * iVar3);
  }
  dVar5 = dVar6 * dVar8 - dVar7 * dVar7;
  if (dVar5 <= 0.0) {
    *param_2 = 0;
    *param_1 = 0;
    return 1;
  }
  dVar6 = (dVar6 * dVar10 - dVar9 * dVar7) / dVar5;
  dVar5 = (dVar8 * dVar9 - dVar10 * dVar7) / dVar5;
  floor((double)iVar2 * dVar6 + dVar5 + 0.5);
  iVar2 = FUN_0068d910();
  floor((double)iVar3 * dVar6 + dVar5 + 0.5);
  iVar3 = FUN_0068d910();
  if (0x3ff < iVar2) {
    iVar2 = 0x3ff;
  }
  *param_1 = iVar2;
  iVar2 = *param_1;
  if (0x3ff < iVar3) {
    iVar3 = 0x3ff;
  }
  *param_2 = iVar3;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  *param_1 = iVar2;
  iVar2 = *param_2;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  *param_2 = iVar2;
  return 0;
}


/* FUN_006de2c0 @ 006de2c0  kind=gamemisc  attributed-by=none  size=368 */

int FUN_006de2c0(int param_1,int param_2,int *param_3,int param_4,int param_5)

{
  int in_ECX;
  int iVar1;
  int in_EDX;
  int iVar2;
  float *pfVar3;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  iVar2 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  memset(param_3,0,0x38);
  *param_3 = param_1;
  param_3[1] = param_2;
  if (param_4 <= param_2) {
    param_2 = param_4 + -1;
  }
  if (param_1 <= param_2) {
    pfVar3 = (float *)(in_ECX + param_1 * 4);
    iVar2 = 0;
    do {
      iVar1 = (int)(*pfVar3 * 7.3142858 + 1023.5);
      if (iVar1 < 0x400) {
        if ((-1 < iVar1) && (iVar1 != 0)) goto LAB_006de37c;
      }
      else {
        iVar1 = 0x3ff;
LAB_006de37c:
        if (*(float *)((in_EDX - in_ECX) + (int)pfVar3) + *(float *)(param_5 + 0x458) < *pfVar3) {
          local_28 = local_28 + param_1 * param_1;
          local_24 = local_24 + iVar1;
          local_20 = local_20 + param_1;
          local_2c = local_2c + iVar1 * iVar1;
          local_30 = local_30 + iVar1 * param_1;
          local_34 = local_34 + 1;
        }
        else {
          local_14 = local_14 + param_1 * param_1;
          local_10 = local_10 + iVar1;
          local_c = local_c + param_1;
          local_18 = local_18 + iVar1 * iVar1;
          local_1c = local_1c + iVar1 * param_1;
          iVar2 = iVar2 + 1;
        }
      }
      param_1 = param_1 + 1;
      pfVar3 = pfVar3 + 1;
    } while (param_1 <= param_2);
  }
  param_3[2] = local_c;
  param_3[3] = local_10;
  param_3[4] = local_14;
  param_3[5] = local_18;
  param_3[6] = local_1c;
  param_3[8] = local_20;
  param_3[9] = local_24;
  param_3[10] = local_28;
  param_3[0xb] = local_2c;
  param_3[0xc] = local_30;
  param_3[0xd] = local_34;
  param_3[7] = iVar2;
  return iVar2;
}


/* FUN_006de4d0 @ 006de4d0  kind=gamemisc  attributed-by=none  size=188 */

void FUN_006de4d0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  int in_EDX;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  uVar8 = param_3 - param_2;
  iVar9 = param_1 - in_EDX;
  iVar2 = (int)uVar8 / iVar9;
  iVar4 = iVar2 + -1;
  if (-1 < (int)uVar8) {
    iVar4 = iVar2 + 1;
  }
  uVar6 = iVar2 * iVar9 >> 0x1f;
  iVar5 = 0;
  if (param_1 < in_ECX) {
    in_ECX = param_1;
  }
  if (in_EDX < in_ECX) {
    *(float *)(param_4 + in_EDX * 4) =
         (float)(&DAT_007454c0)[param_2] * *(float *)(param_4 + in_EDX * 4);
  }
  iVar7 = in_EDX + 1;
  if (iVar7 < in_ECX) {
    pfVar3 = (float *)(&DAT_007454c0 + param_2);
    do {
      iVar5 = iVar5 + (((uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f)) -
                      ((iVar2 * iVar9 ^ uVar6) - uVar6));
      iVar1 = iVar2;
      if (iVar9 <= iVar5) {
        iVar5 = iVar5 - iVar9;
        iVar1 = iVar4;
      }
      pfVar3 = pfVar3 + iVar1;
      iVar1 = iVar7 * 4;
      iVar7 = iVar7 + 1;
      *(float *)(param_4 + -4 + iVar7 * 4) = *(float *)(param_4 + iVar1) * *pfVar3;
    } while (iVar7 < in_ECX);
  }
  return;
}


/* FUN_006deed0 @ 006deed0  kind=gamemisc  attributed-by=none  size=1494 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

undefined4 * FUN_006deed0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  void *pvVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  int in_EDX;
  int iVar11;
  int iVar12;
  int **ppiVar13;
  undefined1 *puVar14;
  int *local_1370;
  int local_136c;
  int *local_1368;
  int local_1364;
  int *local_1360;
  int *local_135c;
  int local_1358;
  int **local_1354;
  int *local_1350;
  int local_134c;
  int local_1348;
  int local_1344;
  int *local_1340;
  int **local_133c;
  undefined4 local_1338;
  int local_1334;
  int *local_1330 [66];
  int *local_1228 [66];
  int local_1120 [66];
  int local_1018 [66];
  int local_f10 [66];
  undefined1 local_e08 [3580];
  undefined4 uStack_c;
  
  uStack_c = 0x6deee0;
  iVar12 = *(int *)(in_EDX + 0x504);
  iVar3 = *(int *)(in_EDX + 0x510);
  if (0 < iVar12) {
    ppiVar13 = local_1228;
    for (iVar7 = iVar12; iVar7 != 0; iVar7 = iVar7 + -1) {
      *ppiVar13 = (int *)0xffffff38;
      ppiVar13 = ppiVar13 + 1;
    }
    ppiVar13 = local_1330;
    for (iVar7 = iVar12; iVar7 != 0; iVar7 = iVar7 + -1) {
      *ppiVar13 = (int *)0xffffff38;
      ppiVar13 = ppiVar13 + 1;
    }
    piVar9 = local_1120;
    for (iVar7 = iVar12; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar9 = 0;
      piVar9 = piVar9 + 1;
    }
    if (0 < iVar12) {
      piVar9 = local_1018;
      for (iVar7 = iVar12; iVar7 != 0; iVar7 = iVar7 + -1) {
        *piVar9 = 1;
        piVar9 = piVar9 + 1;
      }
      piVar9 = local_f10;
      for (iVar7 = iVar12; iVar7 != 0; iVar7 = iVar7 + -1) {
        *piVar9 = -1;
        piVar9 = piVar9 + 1;
      }
    }
  }
  local_136c = iVar3;
  local_1364 = in_EDX;
  local_1344 = iVar12;
  if (iVar12 == 0) {
    iVar2 = FUN_006de2c0(0,*(undefined4 *)(in_EDX + 0x508),local_e08,*(undefined4 *)(in_EDX + 0x508)
                         ,iVar3);
    iVar11 = iVar12;
  }
  else {
    iVar7 = 0;
    if (iVar12 + -1 < 1) {
      return (undefined4 *)0x0;
    }
    puVar14 = local_e08;
    iVar2 = 0;
    do {
      iVar3 = FUN_006de2c0(*(undefined4 *)(local_1364 + iVar7 * 4),
                           *(undefined4 *)(local_1364 + 4 + iVar7 * 4),puVar14,
                           *(undefined4 *)(local_1364 + 0x508),local_136c);
      iVar7 = iVar7 + 1;
      iVar2 = iVar2 + iVar3;
      puVar14 = puVar14 + 0x38;
      iVar11 = local_1344;
      iVar3 = local_136c;
    } while (iVar7 < iVar12 + -1);
  }
  if (iVar2 == 0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    local_1370 = (int *)0xffffff38;
    local_1368 = (int *)0xffffff38;
    FUN_006de000(&local_1370,&local_1368,iVar3);
    iVar12 = 2;
    local_1228[0] = local_1370;
    local_1330[0] = local_1370;
    local_1330[1] = local_1368;
    local_1228[1] = local_1368;
    if (2 < iVar11) {
      local_1368 = (int *)(local_1364 + 0x210);
      iVar3 = local_1364;
      do {
        iVar7 = local_1120[*local_1368];
        local_1334 = local_1018[*local_1368];
        if (local_f10[iVar7] != local_1334) {
          local_1338 = *(undefined4 *)(iVar3 + 0x208 + iVar7 * 4);
          local_1348 = *(int *)(iVar3 + 0x208 + local_1334 * 4);
          local_135c = *(int **)(local_136c + 0x344 + iVar7 * 4);
          local_1358 = *(int *)(local_136c + 0x344 + local_1334 * 4);
          piVar9 = local_1228[iVar7];
          local_f10[iVar7] = local_1334;
          if ((int)piVar9 < 0) {
            piVar9 = local_1330[iVar7];
            local_1354 = local_1330 + iVar7;
          }
          else {
            local_1354 = local_1330 + iVar7;
            if (-1 < (int)*local_1354) {
              piVar9 = (int *)((int)piVar9 + (int)*local_1354 >> 1);
            }
          }
          local_133c = local_1228 + local_1334;
          local_1370 = *local_133c;
          if ((int)local_1370 < 0) {
            local_1370 = local_1330[local_1334];
          }
          else if (-1 < (int)local_1330[local_1334]) {
            local_1370 = (int *)((int)local_1370 + (int)local_1330[local_1334] >> 1);
          }
          if ((piVar9 == (int *)0xffffffff) || (local_1370 == (int *)0xffffffff)) {
                    /* WARNING: Subroutine does not return */
            exit(1);
          }
          iVar3 = FUN_006ddde0(piVar9,local_1370,param_2,param_1,local_136c);
          if (iVar3 != 0) {
            local_1340 = (int *)0xffffff38;
            local_1360 = (int *)0xffffff38;
            local_1350 = (int *)0xffffff38;
            local_135c = (int *)0xffffff38;
            local_1358 = FUN_006de000(&local_1340,&local_1360,local_136c);
            local_1348 = FUN_006de000(&local_1350,&local_135c,local_136c);
            piVar10 = local_1340;
            if (local_1358 != 0) {
              local_1360 = local_1350;
              piVar10 = piVar9;
            }
            piVar9 = local_135c;
            if (local_1348 != 0) {
              piVar9 = local_1370;
              local_1350 = local_1360;
            }
            if ((local_1358 == 0) || (local_1348 == 0)) {
              *local_1354 = piVar10;
              if (iVar7 == 0) {
                local_1228[0] = piVar10;
              }
              local_1228[iVar12] = local_1360;
              local_1330[iVar12] = local_1350;
              *local_133c = piVar9;
              if (local_1334 == 1) {
                local_1330[1] = piVar9;
              }
              iVar3 = local_1364;
              if ((-1 < (int)local_1360) || (-1 < (int)local_1350)) {
                iVar2 = *local_1368;
                iVar1 = iVar2;
                while ((iVar1 = iVar1 + -1, -1 < iVar1 && (local_1018[iVar1] == local_1334))) {
                  local_1018[iVar1] = iVar12;
                }
                while ((iVar2 = iVar2 + 1, iVar2 < iVar11 && (local_1120[iVar2] == iVar7))) {
                  local_1120[iVar2] = iVar12;
                }
              }
              goto LAB_006df2c2;
            }
          }
          local_1330[iVar12] = (int *)0xffffff38;
          local_1228[iVar12] = (int *)0xffffff38;
          iVar3 = local_1364;
        }
LAB_006df2c2:
        iVar12 = iVar12 + 1;
        local_1368 = local_1368 + 1;
      } while (iVar12 < iVar11);
    }
    piVar10 = local_1228[1];
    piVar9 = local_1330[0];
    uVar8 = iVar11 * 4 + 7U & 0xfffffff8;
    if (*(int *)(local_134c + 0x4c) < (int)(*(int *)(local_134c + 0x48) + uVar8)) {
      if (*(int *)(local_134c + 0x44) != 0) {
        puVar4 = malloc(8);
        *(int *)(local_134c + 0x50) = *(int *)(local_134c + 0x50) + *(int *)(local_134c + 0x48);
        puVar4[1] = *(undefined4 *)(local_134c + 0x54);
        *puVar4 = *(undefined4 *)(local_134c + 0x44);
        *(undefined4 **)(local_134c + 0x54) = puVar4;
      }
      *(uint *)(local_134c + 0x4c) = uVar8;
      pvVar5 = malloc(uVar8);
      *(void **)(local_134c + 0x44) = pvVar5;
      *(undefined4 *)(local_134c + 0x48) = 0;
    }
    puVar4 = (undefined4 *)(*(int *)(local_134c + 0x44) + *(int *)(local_134c + 0x48));
    *(uint *)(local_134c + 0x48) = *(int *)(local_134c + 0x48) + uVar8;
    piVar6 = piVar9;
    if ((-1 < (int)local_1228[0]) && (piVar6 = local_1228[0], -1 < (int)piVar9)) {
      piVar6 = (int *)((int)piVar9 + (int)local_1228[0] >> 1);
    }
    *puVar4 = piVar6;
    piVar9 = local_1330[1];
    if ((-1 < (int)piVar10) && (piVar9 = piVar10, -1 < (int)local_1330[1])) {
      piVar9 = (int *)((int)piVar10 + (int)local_1330[1] >> 1);
    }
    puVar4[1] = piVar9;
    local_1358 = 2;
    if (2 < iVar11) {
      local_1370 = (int *)(local_136c + 0x34c);
      piVar9 = (int *)(local_1364 + 0x30c);
      do {
        iVar12 = *(int *)(local_136c + 0x344 + piVar9[0x3f] * 4);
        uVar8 = (puVar4[*piVar9] & 0x7fff) - (puVar4[piVar9[0x3f]] & 0x7fff);
        iVar12 = (int)(((uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f)) *
                      (*local_1370 - iVar12)) /
                 (*(int *)(local_136c + 0x344 + *piVar9 * 4) - iVar12);
        if ((int)uVar8 < 0) {
          iVar12 = -iVar12;
        }
        piVar6 = (int *)((puVar4[piVar9[0x3f]] & 0x7fff) + iVar12);
        piVar10 = local_1228[local_1358];
        if ((int)piVar10 < 0) {
          piVar10 = local_1330[local_1358];
        }
        else if (-1 < (int)local_1330[local_1358]) {
          piVar10 = (int *)((int)piVar10 + (int)local_1330[local_1358] >> 1);
        }
        if (((int)piVar10 < 0) || (piVar6 == piVar10)) {
          puVar4[local_1358] = (uint)piVar6 | 0x8000;
        }
        else {
          puVar4[local_1358] = piVar10;
        }
        local_1370 = local_1370 + 1;
        local_1358 = local_1358 + 1;
        piVar9 = piVar9 + 1;
      } while (local_1358 < local_1344);
      return puVar4;
    }
  }
  return puVar4;
}


/* FUN_006df4c0 @ 006df4c0  kind=gamemisc  attributed-by=none  size=164 */

int FUN_006df4c0(int param_1,uint *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int in_EDX;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(in_EDX + 0x504);
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == (uint *)0x0) {
    return 0;
  }
  iVar1 = FUN_006d1ab0();
  if (0 < iVar4) {
    param_1 = param_1 - (int)param_2;
    iVar3 = iVar1 - (int)param_2;
    do {
      uVar2 = (int)((*(uint *)(param_1 + (int)param_2) & 0x7fff) * (0x10000 - param_3) + 0x8000 +
                   (*param_2 & 0x7fff) * param_3) >> 0x10;
      *(uint *)(iVar3 + (int)param_2) = uVar2;
      if (((*(uint *)(param_1 + (int)param_2) & 0x8000) != 0) && ((*param_2 & 0x8000) != 0)) {
        *(uint *)(iVar3 + (int)param_2) = uVar2 | 0x8000;
      }
      param_2 = param_2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return iVar1;
}


/* FUN_006df570 @ 006df570  kind=gamemisc  attributed-by=none  size=1555 */

undefined4 FUN_006df570(int param_1,int *param_2,void *param_3)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  undefined4 in_ECX;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int in_EDX;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  int local_17c [65];
  int aiStack_78 [8];
  int local_58 [9];
  undefined4 local_34;
  int local_30;
  uint *local_2c;
  int local_28;
  uint *local_24;
  int local_20;
  uint *local_1c;
  int *local_18;
  uint local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  piVar8 = *(int **)(param_1 + 0x510);
  local_28 = *(int *)(*(int *)(*(int *)(in_EDX + 0x40) + 4) + 0x1c);
  iVar6 = *(int *)(param_1 + 0x504);
  local_30 = *(int *)(local_28 + 0xb20);
  local_c = piVar8;
  if (param_2 == (int *)0x0) {
    FUN_00401c40();
    memset(param_3,0,*(int *)(in_EDX + 0x24) / 2 << 2);
    return 0;
  }
  if (0 < iVar6) {
    iVar19 = 0;
    do {
      uVar17 = param_2[iVar19] & 0x7fff;
      switch(piVar8[0xd0]) {
      case 1:
        uVar17 = (int)uVar17 >> 2;
        break;
      case 2:
        uVar17 = (int)uVar17 >> 3;
        break;
      case 3:
        uVar17 = uVar17 / 0xc;
        break;
      case 4:
        uVar17 = (int)uVar17 >> 4;
      }
      param_2[iVar19] = param_2[iVar19] & 0x8000U | uVar17;
      iVar19 = iVar19 + 1;
    } while (iVar19 < iVar6);
  }
  iVar19 = *param_2;
  iVar16 = param_2[1];
  if (2 < iVar6) {
    piVar10 = (int *)(param_1 + 0x30c);
    local_1c = (uint *)(param_2 + 2);
    local_10 = piVar8 + 0xd3;
    iVar11 = (int)local_17c - (int)param_2;
    local_18 = (int *)(iVar6 + -2);
    do {
      iVar6 = *piVar10;
      puVar1 = (uint *)(param_2 + piVar10[0x3f]);
      puVar2 = (uint *)(param_2 + iVar6);
      uVar17 = *puVar1 & 0x7fff;
      uVar20 = (param_2[iVar6] & 0x7fffU) - uVar17;
      iVar6 = (int)(((uVar20 ^ (int)uVar20 >> 0x1f) - ((int)uVar20 >> 0x1f)) *
                   (*local_10 - piVar8[piVar10[0x3f] + 0xd1])) /
              (piVar8[iVar6 + 0xd1] - piVar8[piVar10[0x3f] + 0xd1]);
      if ((int)uVar20 < 0) {
        iVar6 = -iVar6;
      }
      uVar14 = uVar17 + iVar6;
      uVar20 = *local_1c;
      if (((uVar20 & 0x8000) == 0) && (uVar14 != uVar20)) {
        uVar7 = *(int *)(param_1 + 0x50c) - uVar14;
        uVar18 = uVar14;
        if ((int)uVar7 < (int)uVar14) {
          uVar18 = uVar7;
        }
        iVar6 = uVar20 - uVar14;
        if (iVar6 < 0) {
          if (iVar6 < (int)-uVar18) {
            iVar6 = (uVar18 - iVar6) + -1;
          }
          else {
            iVar6 = iVar6 * -2 + -1;
          }
        }
        else if (iVar6 < (int)uVar18) {
          iVar6 = iVar6 * 2;
        }
        else {
          iVar6 = iVar6 + uVar18;
        }
        *(int *)(iVar11 + (int)local_1c) = iVar6;
        *puVar1 = uVar17;
        *puVar2 = *puVar2 & 0x7fff;
      }
      else {
        *local_1c = uVar14 | 0x8000;
        *(undefined4 *)(iVar11 + (int)local_1c) = 0;
      }
      local_10 = local_10 + 1;
      piVar10 = piVar10 + 1;
      local_1c = local_1c + 1;
      local_18 = (int *)((int)local_18 + -1);
    } while (local_18 != (int *)0x0);
    local_18 = (int *)0x0;
    local_2c = puVar2;
    local_24 = puVar1;
    local_20 = iVar11;
    local_14 = uVar17;
    local_8 = piVar10;
  }
  local_17c[0] = iVar19;
  local_17c[1] = iVar16;
  local_58[8] = in_EDX;
  local_34 = in_ECX;
  FUN_00401c40(in_ECX,1,1);
  uVar5 = local_34;
  *(int *)(param_1 + 0x51c) = *(int *)(param_1 + 0x51c) + 1;
  iVar6 = 0;
  uVar17 = *(int *)(param_1 + 0x50c) - 1;
  for (uVar20 = uVar17; uVar20 != 0; uVar20 = uVar20 >> 1) {
    iVar6 = iVar6 + 1;
  }
  *(int *)(param_1 + 0x518) = *(int *)(param_1 + 0x518) + iVar6 * 2;
  iVar6 = 0;
  for (; uVar17 != 0; uVar17 = uVar17 >> 1) {
    iVar6 = iVar6 + 1;
  }
  FUN_00401c40(local_34,iVar19,iVar6);
  iVar6 = 0;
  for (uVar17 = *(int *)(param_1 + 0x50c) - 1; uVar17 != 0; uVar17 = uVar17 >> 1) {
    iVar6 = iVar6 + 1;
  }
  FUN_00401c40(uVar5,iVar16,iVar6);
  local_1c = (uint *)0x0;
  local_10 = (int *)0x2;
  if (0 < *local_c) {
    local_24 = (uint *)(local_c + 1);
    piVar8 = local_c;
    do {
      iVar6 = local_28;
      local_14 = *local_24;
      piVar10 = piVar8 + local_14 + 0x30;
      iVar19 = 1 << ((byte)*piVar10 & 0x1f);
      iVar16 = 0;
      local_20 = piVar8[local_14 + 0x20];
      local_58[0] = 0;
      local_58[1] = 0;
      local_58[2] = 0;
      local_58[3] = 0;
      local_58[4] = 0;
      local_58[5] = 0;
      local_58[6] = 0;
      local_58[7] = 0;
      local_8 = (int *)0x0;
      piVar8 = local_c;
      if (*piVar10 != 0) {
        iVar11 = 0;
        if (0 < iVar19) {
          piVar8 = local_c + (local_14 + 10) * 8;
          do {
            if (*piVar8 < 0) {
              aiStack_78[iVar11] = 1;
            }
            else {
              aiStack_78[iVar11] = *(int *)(*(int *)(iVar6 + 0x720 + *piVar8 * 4) + 4);
            }
            iVar11 = iVar11 + 1;
            piVar8 = piVar8 + 1;
          } while (iVar11 < iVar19);
        }
        uVar17 = 0;
        iVar6 = 0;
        if (0 < local_20) {
          piVar8 = local_17c + (int)local_10;
          do {
            iVar11 = 0;
            if (0 < iVar19) {
              do {
                if (*piVar8 < aiStack_78[iVar11]) {
                  local_58[iVar6] = iVar11;
                  break;
                }
                iVar11 = iVar11 + 1;
              } while (iVar11 < iVar19);
            }
            piVar10 = local_58 + iVar6;
            iVar6 = iVar6 + 1;
            piVar8 = piVar8 + 1;
            uVar17 = (uint)local_8 | *piVar10 << ((byte)iVar16 & 0x1f);
            local_8 = (int *)uVar17;
            iVar16 = iVar16 + local_c[local_14 + 0x30];
          } while (iVar6 < local_20);
        }
        piVar8 = local_c;
        iVar6 = local_30 + local_c[local_14 + 0x40] * 0x38;
        if (((int)uVar17 < 0) || (*(int *)(*(int *)(iVar6 + 0xc) + 4) <= (int)uVar17)) {
          *(undefined4 *)(param_1 + 0x514) = *(undefined4 *)(param_1 + 0x514);
        }
        else {
          FUN_00401c40(local_34,*(undefined4 *)(*(int *)(iVar6 + 0x14) + uVar17 * 4),
                       *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0xc) + 8) + uVar17 * 4));
          *(int *)(param_1 + 0x514) =
               *(int *)(param_1 + 0x514) +
               *(int *)(*(int *)(*(int *)(iVar6 + 0xc) + 8) + uVar17 * 4);
        }
      }
      iVar6 = 0;
      if (0 < local_20) {
        local_18 = local_17c + (int)local_10;
        local_2c = (uint *)(local_14 * 8 + 0x50);
        do {
          iVar19 = piVar8[local_58[iVar6] + (int)local_2c];
          if (-1 < iVar19) {
            iVar11 = *local_18;
            iVar16 = local_30 + iVar19 * 0x38;
            piVar8 = local_c;
            if (iVar11 < *(int *)(local_30 + 4 + iVar19 * 0x38)) {
              if ((iVar11 < 0) || (*(int *)(*(int *)(iVar16 + 0xc) + 4) <= iVar11)) {
                iVar19 = 0;
              }
              else {
                FUN_00401c40(local_34,*(undefined4 *)(*(int *)(iVar16 + 0x14) + iVar11 * 4),
                             *(undefined4 *)(*(int *)(*(int *)(iVar16 + 0xc) + 8) + iVar11 * 4));
                iVar19 = *(int *)(*(int *)(*(int *)(iVar16 + 0xc) + 8) + iVar11 * 4);
              }
              *(int *)(param_1 + 0x518) = *(int *)(param_1 + 0x518) + iVar19;
              piVar8 = local_c;
            }
          }
          iVar6 = iVar6 + 1;
          local_18 = local_18 + 1;
        } while (iVar6 < local_20);
      }
      local_10 = (int *)((int)local_10 + local_20);
      local_1c = (uint *)((int)local_1c + 1);
      local_24 = local_24 + 1;
    } while ((int)local_1c < *piVar8);
  }
  iVar19 = local_c[0xd0] * *param_2;
  iVar16 = *(int *)(local_28 + *(int *)(local_58[8] + 0x1c) * 4) / 2;
  iVar6 = 0;
  local_8 = (int *)0x0;
  local_30 = 1;
  if (1 < *(int *)(param_1 + 0x504)) {
    piVar8 = (int *)(param_1 + 0x108);
    iVar11 = iVar19;
    do {
      uVar17 = param_2[*piVar8] & 0x7fff;
      iVar19 = iVar11;
      if (uVar17 == param_2[*piVar8]) {
        iVar6 = local_c[*piVar8 + 0xd1];
        iVar19 = local_c[0xd0] * uVar17;
        uVar17 = iVar19 - iVar11;
        iVar21 = iVar6 - (int)local_8;
        iVar9 = (int)uVar17 / iVar21;
        iVar12 = iVar9 + -1;
        if (-1 < (int)uVar17) {
          iVar12 = iVar9 + 1;
        }
        uVar20 = iVar9 * iVar21 >> 0x1f;
        iVar13 = 0;
        iVar15 = iVar16;
        if (iVar6 < iVar16) {
          iVar15 = iVar6;
        }
        if ((int)local_8 < iVar15) {
          *(int *)((int)param_3 + (int)local_8 * 4) = iVar11;
        }
        while (iVar4 = (int)local_8 + 1, local_8 = (int *)iVar6, iVar4 < iVar15) {
          iVar13 = iVar13 + (((uVar17 ^ (int)uVar17 >> 0x1f) - ((int)uVar17 >> 0x1f)) -
                            ((iVar9 * iVar21 ^ uVar20) - uVar20));
          iVar3 = iVar9;
          if (iVar21 <= iVar13) {
            iVar13 = iVar13 - iVar21;
            iVar3 = iVar12;
          }
          iVar11 = iVar11 + iVar3;
          *(int *)((int)param_3 + iVar4 * 4) = iVar11;
          local_8 = (int *)iVar4;
        }
      }
      local_30 = local_30 + 1;
      piVar8 = piVar8 + 1;
      iVar11 = iVar19;
    } while (local_30 < *(int *)(param_1 + 0x504));
  }
  if (iVar6 < *(int *)(local_58[8] + 0x24) / 2) {
    do {
      iVar6 = iVar6 + 1;
      *(int *)((int)param_3 + iVar6 * 4 + -4) = iVar19;
    } while (iVar6 < *(int *)(local_58[8] + 0x24) / 2);
  }
  return 1;
}


/* FUN_006dfdb0 @ 006dfdb0  kind=gamemisc  attributed-by=none  size=477 */

void FUN_006dfdb0(int *param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int in_ECX;
  int iVar4;
  int in_EDX;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  
  iVar1 = *(int *)(in_ECX + 0x1c);
  if (*(int *)(param_1[2] + iVar1 * 4) == 0) {
    iVar5 = *(int *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x40) + 4) + 0x1c) + iVar1 * 4) / 2;
    fVar11 = (float)*(int *)(in_EDX + 4) * 0.5;
    dVar7 = (double)(fVar11 * fVar11 * 1.85e-08);
    libm_sse2_atan_precise();
    dVar8 = (double)(fVar11 * 0.00074);
    libm_sse2_atan_precise();
    iVar2 = *param_1;
    pvVar3 = malloc(iVar5 * 4 + 4);
    *(void **)(param_1[2] + iVar1 * 4) = pvVar3;
    iVar6 = 0;
    if (0 < iVar5) {
      do {
        fVar12 = (((float)*(int *)(in_EDX + 4) * 0.5) / (float)iVar5) * (float)iVar6;
        dVar9 = (double)(fVar12 * fVar12 * 1.85e-08);
        libm_sse2_atan_precise();
        dVar10 = (double)(fVar12 * 0.00074);
        libm_sse2_atan_precise();
        dVar9 = floor((dVar9 * 2.240000009536743 + dVar10 * 13.100000381469727 +
                      (double)(fVar12 * 0.0001)) *
                      (double)(float)((double)iVar2 /
                                     (dVar7 * 2.240000009536743 + dVar8 * 13.100000381469727 +
                                     (double)(fVar11 * 0.0001))));
        iVar4 = (int)dVar9;
        if (*param_1 <= iVar4) {
          iVar4 = *param_1 + -1;
        }
        iVar6 = iVar6 + 1;
        *(int *)(*(int *)(param_1[2] + iVar1 * 4) + -4 + iVar6 * 4) = iVar4;
      } while (iVar6 < iVar5);
    }
    *(undefined4 *)(*(int *)(param_1[2] + iVar1 * 4) + iVar6 * 4) = 0xffffffff;
    param_1[iVar1 + 3] = iVar5;
  }
  return;
}


/* FUN_006e0150 @ 006e0150  kind=gamemisc  attributed-by=none  size=549 */

void FUN_006e0150(int param_1,int param_2,undefined8 *param_3,uint param_4,float param_5,
                 float param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  int *in_EDX;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_20;
  
  iVar5 = 0;
  if (0 < (int)param_4) {
    if (1 < param_4) {
      uVar2 = param_4 & 0x80000001;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
      }
      puVar4 = param_3;
      do {
        dVar7 = (double)(float)*puVar4;
        dVar8 = (double)(float)((ulonglong)*puVar4 >> 0x20);
        FUN_006e0390();
        iVar5 = iVar5 + 2;
        *puVar4 = CONCAT44((float)(dVar8 * 2.0),(float)(dVar7 * 2.0));
        puVar4 = puVar4 + 1;
      } while (iVar5 < (int)(param_4 - uVar2));
    }
    while (iVar5 < (int)param_4) {
      dVar7 = (double)*(float *)((int)param_3 + iVar5 * 4);
      libm_sse2_cos_precise();
      iVar5 = iVar5 + 1;
      *(float *)((int)param_3 + iVar5 * 4 + -4) = (float)(dVar7 * 2.0);
    }
  }
  iVar5 = 0;
  if (0 < param_1) {
    iVar6 = 0;
    iVar3 = *in_EDX;
    do {
      local_20 = 0.5;
      dVar7 = (double)((float)iVar3 * (3.1415927 / (float)param_2));
      libm_sse2_cos_precise();
      uVar2 = 1;
      fVar10 = (float)(dVar7 * 2.0);
      if ((int)param_4 < 2) {
        fVar12 = 0.5;
        local_20 = fVar12;
      }
      else {
        fVar12 = 0.5;
        do {
          iVar1 = uVar2 * 4;
          uVar2 = uVar2 + 2;
          fVar12 = fVar12 * (fVar10 - *(float *)((int)param_3 + iVar1 + -4));
          local_20 = (fVar10 - *(float *)((int)param_3 + uVar2 * 4 + -8)) * local_20;
        } while ((int)uVar2 < (int)param_4);
      }
      if (uVar2 == param_4) {
        fVar9 = fVar10 - *(float *)((int)param_3 + uVar2 * 4 + -4);
        fVar11 = 4.0;
        fVar10 = fVar10 * fVar10;
        fVar9 = fVar9 * fVar12;
        fVar9 = fVar9 * fVar9;
      }
      else {
        fVar11 = 2.0;
        fVar9 = (fVar10 + 2.0) * fVar12 * fVar12;
      }
      dVar7 = (double)(fVar9 + (fVar11 - fVar10) * local_20 * local_20);
      libm_sse2_sqrt_precise();
      dVar7 = ((double)param_5 / dVar7 - (double)param_6) * 0.1151292473077774;
      libm_sse2_exp_precise();
      iVar5 = iVar5 + 1;
      *(float *)(iVar6 + in_ECX) = (float)dVar7 * *(float *)(iVar6 + in_ECX);
      iVar1 = in_EDX[iVar5];
      while (iVar6 = iVar5 * 4, iVar1 == iVar3) {
        iVar5 = iVar5 + 1;
        *(float *)(iVar6 + in_ECX) = (float)dVar7 * *(float *)(iVar6 + in_ECX);
        iVar1 = in_EDX[iVar5];
      }
      iVar3 = iVar1;
    } while (iVar5 < param_1);
  }
  return;
}


/* FUN_006e0390 @ 006e0390  kind=gamemisc  attributed-by=none  size=828 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006e0390(void)

{
  undefined4 in_EAX;
  uint uVar1;
  int iVar2;
  double dVar3;
  undefined1 in_XMM0 [16];
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double local_20;
  double dStack_18;
  double local_10;
  double dStack_8;
  
  if (DAT_0076e2a0 < 2) {
    FUN_006e03b0();
    return;
  }
  auVar4 = in_XMM0 & _DAT_0076f250;
  dVar3 = auVar4._0_8_;
  dVar5 = auVar4._8_8_;
  auVar8._0_8_ = (dVar3 + 1.5707963267948966) * 0.3183098861837907;
  auVar8._8_8_ = (dVar5 + 1.5707963267948966) * 0.3183098861837907;
  auVar4 = auVar4 & _DAT_0076f250;
  auVar8 = roundpd(auVar8,auVar8,0);
  auVar6._0_4_ = -(uint)(0 < auVar4._0_4_);
  auVar6._4_4_ = -(uint)(0x40ff4000 < auVar4._4_4_);
  auVar6._8_4_ = -(uint)(0 < auVar4._8_4_);
  auVar6._12_4_ = -(uint)(0x40ff4000 < auVar4._12_4_);
  dVar7 = auVar8._0_8_ - 0.5;
  dVar9 = auVar8._8_8_ - 0.5;
  uVar1 = movmskpd(in_EAX,auVar6);
  if (uVar1 != 0) {
    auVar4._8_8_ = -(ulonglong)(1073741824.0 <= ABS(dVar5));
    auVar4._0_8_ = -(ulonglong)(1073741824.0 <= ABS(dVar3));
    iVar2 = movmskpd(&stack0x00000000,auVar4);
    if (uVar1 == 3) {
      if (iVar2 == 0) {
        return;
      }
    }
    else {
      local_10 = ((dVar3 - dVar7 * 3.141592502593994) - dVar7 * 1.5099578831723193e-07) -
                 dVar7 * 1.078060505991553e-14;
      dStack_8 = ((dVar5 - dVar9 * 3.141592502593994) - dVar9 * 1.5099578831723193e-07) -
                 dVar9 * 1.078060505991553e-14;
      local_20 = dVar7 * -6.564007085747001e-22 + local_10;
      dStack_18 = dVar9 * -6.564007085747001e-22 + dStack_8;
      local_10 = local_10 * local_10;
      dStack_8 = dStack_8 * dStack_8;
    }
    if ((uVar1 & 1) != 0) {
      FUN_006e0bd0(ABS(dVar3),&local_20);
      local_10 = local_20 * local_20;
    }
    if ((uVar1 & 2) != 0) {
      FUN_006e0bd0(ABS(dVar5),&dStack_18);
    }
  }
                    /* WARNING: Read-only address (ram,0x0076f250) is written */
  return;
}


/* FUN_006e03b0 @ 006e03b0  kind=gamemisc  attributed-by=none  size=416 */

void FUN_006e03b0(void)

{
  undefined1 auVar1 [16];
  int iVar2;
  int in_XMM0_Da;
  uint in_XMM0_Db;
  int in_XMM0_Dc;
  uint in_XMM0_Dd;
  undefined1 local_70 [8];
  undefined1 auStack_68 [12];
  uint uStack_5c;
  int iStack_58;
  uint uStack_54;
  
  auVar1._4_4_ = -(uint)(0x40ff4000 < (in_XMM0_Db & 0x7fffffff));
  auVar1._0_4_ = -(uint)(0 < in_XMM0_Da);
  auVar1._8_4_ = -(uint)(0 < in_XMM0_Dc);
  auVar1._12_4_ = -(uint)(0x40ff4000 < (in_XMM0_Dd & 0x7fffffff));
  iVar2 = movmskpd(&stack0x00000000,auVar1);
  if (iVar2 != 0) {
    uStack_5c = in_XMM0_Db & 0x7fffffff;
    uStack_54 = in_XMM0_Dd & 0x7fffffff;
    iStack_58 = in_XMM0_Dc;
    FUN_006e0bd0(CONCAT44(in_XMM0_Db,in_XMM0_Da) & 0x7fffffffffffffff,local_70);
    FUN_006e0bd0(CONCAT44(uStack_54,iStack_58),auStack_68);
  }
  return;
}


/* ___common_srl @ 006e0b70  kind=gamemisc  attributed-by=none  size=45 */

/* Library Function - Single Match
    ___common_srl
   
   Libraries: Visual Studio 2012, Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

undefined8 ___common_srl(uint param_1,int param_2,byte param_3)

{
  int iVar1;
  
  iVar1 = param_2 >> 0x1f;
  if (0x3f < param_3) {
    return CONCAT44(iVar1,iVar1);
  }
  if (param_3 < 0x20) {
    return CONCAT44(param_2 >> (param_3 & 0x1f),
                    param_1 >> (param_3 & 0x1f) | param_2 << 0x20 - (param_3 & 0x1f));
  }
  return CONCAT44(iVar1,param_2 >> (param_3 & 0x1f));
}


/* ___common_sll @ 006e0ba0  kind=gamemisc  attributed-by=none  size=43 */

/* Library Function - Single Match
    ___common_sll
   
   Libraries: Visual Studio 2012, Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

longlong ___common_sll(uint param_1,int param_2,byte param_3)

{
  if (0x3f < param_3) {
    return 0;
  }
  if (param_3 < 0x20) {
    return CONCAT44(param_2 << (param_3 & 0x1f) | param_1 >> 0x20 - (param_3 & 0x1f),
                    param_1 << (param_3 & 0x1f));
  }
  return (ulonglong)(param_1 << (param_3 & 0x1f)) << 0x20;
}


/* FUN_006e0bd0 @ 006e0bd0  kind=gamemisc  attributed-by=none  size=752 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_006e0bd0(undefined4 param_1,uint param_2,double *param_3)

{
  int iVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  undefined8 uVar9;
  uint uStack_6c;
  undefined2 uStack_68;
  uint uStack_5c;
  undefined2 uStack_58;
  undefined8 local_30;
  float10 local_28;
  
  if ((int)param_2 < 0x7ff00000) {
    if (param_2 < 0x40ff4000) {
      uVar5 = (int)ROUND(_DAT_0076f770 * (float10)(double)CONCAT44(param_2,param_1)) | 1;
      fVar6 = (float10)(int)uVar5;
      local_28 = ((((float10)(double)CONCAT44(param_2,param_1) - (float10)1.570796325802803 * fVar6)
                  - (float10)9.920935739593517e-10 * fVar6) - (float10)5.721188709663575e-18 * fVar6
                 ) - (float10)1.6446256936324258e-26 * fVar6;
    }
    else {
      uVar5 = param_2 >> 0x14 & 0x7ff;
      fVar7 = (float10)(double)CONCAT44(param_2 + 0xf3800000,param_1);
      uStack_6c = (uint)((unkuint10)fVar7 >> 0x20);
      uStack_68 = (undefined2)((unkuint10)fVar7 >> 0x40);
      iVar4 = (int)(uVar5 - 0x41c) / 0x19;
      fVar6 = (float10)CONCAT28(uStack_68,((ulonglong)uStack_6c & 0xffffffc0) << 0x20);
      fVar7 = fVar7 - fVar6;
      if ((int)(iVar4 * -0x19 + -0x41c + uVar5) < 0x11) {
        local_28 = _DAT_0076f740;
      }
      else {
        iVar3 = iVar4 * 8;
        iVar1 = iVar4 * 8;
        iVar4 = iVar4 + 1;
        local_28 = (float10)*(double *)(&DAT_0076f408 + iVar1) * fVar6 +
                   fVar7 * (float10)*(double *)(&DAT_0076f400 + iVar3);
        uStack_5c = (uint)((unkuint10)local_28 >> 0x20);
        uStack_58 = (undefined2)((unkuint10)local_28 >> 0x40);
        local_28 = local_28 -
                   (float10)CONCAT28(uStack_58,((ulonglong)uStack_5c & 0xffffffc0) << 0x20);
      }
      fVar8 = (float10)*(double *)(&DAT_0076f408 + iVar4 * 8) * fVar7 +
              (float10)*(double *)(&DAT_0076f410 + iVar4 * 8) * fVar6;
      local_28 = local_28 +
                 fVar6 * (float10)*(double *)(&DAT_0076f408 + iVar4 * 8) +
                 (float10)*(double *)(&DAT_0076f400 + iVar4 * 8) * fVar7;
      dVar2 = (double)(local_28 + fVar8);
      iVar3 = 0x433 - ((uint)((ulonglong)dVar2 >> 0x34) & 0x7ff);
      uVar9 = ___common_srl(dVar2,iVar3);
      uVar5 = (uint)uVar9 | 1;
      local_30 = (double)___common_sll(uVar5,(int)((ulonglong)uVar9 >> 0x20),iVar3);
      fVar6 = (float10)CONCAT28(uStack_68,((ulonglong)uStack_6c & 0xffffffc0) << 0x20);
      local_28 = _DAT_0076f760 *
                 ((float10)*(double *)(&DAT_0076f438 + iVar4 * 8) * fVar6 +
                  fVar7 * (float10)*(double *)(&DAT_0076f430 + iVar4 * 8) +
                 (float10)*(double *)(&DAT_0076f430 + iVar4 * 8) * fVar6 +
                 (float10)*(double *)(&DAT_0076f428 + iVar4 * 8) * fVar7 +
                 (float10)*(double *)(&DAT_0076f420 + iVar4 * 8) * fVar7 +
                 (float10)*(double *)(&DAT_0076f428 + iVar4 * 8) * fVar6 +
                 (float10)*(double *)(&DAT_0076f420 + iVar4 * 8) * fVar6 +
                 (float10)*(double *)(&DAT_0076f418 + iVar4 * 8) * fVar7 +
                 (float10)*(double *)(&DAT_0076f410 + iVar4 * 8) * fVar7 +
                 (float10)*(double *)(&DAT_0076f418 + iVar4 * 8) * fVar6 +
                 fVar8 + (local_28 - (float10)local_30));
    }
    *param_3 = (double)local_28;
    return ~(uVar5 << 0x1e) & 0x80000000;
  }
  *(undefined4 *)param_3 = 0xffffffff;
  *(undefined4 *)((int)param_3 + 4) = 0x7fffffff;
  return 0;
}


