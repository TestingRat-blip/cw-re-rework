// Helpers_00 (db) -- cube. 200 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Helpers_00.h"

/* FUN_0040c380 @ 0040c380  kind=gamemisc  attributed-by=caller-vote  size=12 */

undefined4 * FUN_0040c380(void)

{
  undefined4 *in_ECX;
  
  if (0xf < (uint)in_ECX[5]) {
    return (undefined4 *)*in_ECX;
  }
  return in_ECX;
}


/* FUN_00520620 @ 00520620  kind=gamemisc  attributed-by=caller-vote  size=18 */

void FUN_00520620(undefined4 param_1)

{
  FUN_0054fc20(param_1,0);
  return;
}


/* FUN_005240c0 @ 005240c0  kind=gamemisc  attributed-by=caller-vote  size=90 */

void FUN_005240c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined1 local_8;
  undefined2 local_7;
  
  if (0 < param_1) {
    local_1c = param_2;
    local_18 = param_2;
    local_20 = 0;
    local_14 = 0;
    local_10 = param_1;
    local_c = 0;
    local_7 = 0;
    local_8 = 0;
    FUN_0056aa30(&local_20,0,param_3,&stack0x00000010);
    FUN_00567fb0(&local_20);
  }
  return;
}


/* FUN_00524410 @ 00524410  kind=gamemisc  attributed-by=caller-vote  size=152 */

void FUN_00524410(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    if (DAT_007665e0 == 0) {
      (*DAT_00766604)(param_1);
    }
    else {
      if (DAT_0076b488 != 0) {
        (*DAT_00766630)(DAT_0076b488);
      }
      iVar1 = (*DAT_00766608._4_4_)(param_1);
      DAT_0076b360 = DAT_0076b360 - iVar1;
      if (DAT_0076b388 < DAT_0076b360) {
        DAT_0076b388 = DAT_0076b360;
      }
      DAT_0076b384 = DAT_0076b384 + -1;
      if (DAT_0076b3ac < DAT_0076b384) {
        DAT_0076b3ac = DAT_0076b384;
      }
      (*DAT_00766604)(param_1);
      if (DAT_0076b488 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00524495. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*DAT_00766638)();
        return;
      }
    }
  }
  return;
}


/* FUN_00525a30 @ 00525a30  kind=gamemisc  attributed-by=caller-vote  size=32 */

void FUN_00525a30(undefined4 param_1,undefined4 param_2)

{
  if (DAT_007666c4 != 0) {
    FUN_00545c40(param_1,param_2,&stack0x0000000c);
  }
  return;
}


/* FUN_00526480 @ 00526480  kind=gamemisc  attributed-by=caller-vote  size=32 */

void FUN_00526480(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_0055d830(param_1,param_2,param_3,0,0,param_4,param_5);
  return;
}


/* FUN_00526b60 @ 00526b60  kind=gamemisc  attributed-by=caller-vote  size=30 */

void FUN_00526b60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_0052e070(param_1,param_2,param_3,param_4,param_5,1);
  return;
}


/* FUN_00527300 @ 00527300  kind=gamemisc  attributed-by=caller-vote  size=618 */

uint FUN_00527300(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  char *pcVar8;
  int local_cc [48];
  int local_c;
  int local_8;
  
  piVar3 = param_1;
  if (param_1 == (int *)0x0) {
    pcVar8 = "API called with NULL prepared statement";
  }
  else {
    local_8 = *param_1;
    if (local_8 != 0) {
      if (*(int *)(local_8 + 0xc) != 0) {
        (*DAT_00766630)(*(int *)(local_8 + 0xc));
      }
      piVar3[0x18] = piVar3[0x18] & 0xfffffbff;
      uVar4 = FUN_00567ca0(piVar3);
      iVar5 = 0;
      if (uVar4 == 0x11) {
        while (local_c = iVar5 + 1, iVar5 < 5) {
          if ((piVar3[0x18] & 0x200U) == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = piVar3[0x26];
          }
          iVar1 = *piVar3;
          uVar4 = FUN_0055d830(iVar1,iVar5,0xffffffff,0,piVar3,&param_1,0);
          iVar5 = local_8;
          if (uVar4 != 0) {
            if (uVar4 == 7) {
              *(undefined1 *)(iVar1 + 0x38) = 1;
            }
            if (((piVar3[0x18] & 0x200U) != 0) && (*(int *)(local_8 + 0xd4) != 0)) {
              param_1 = (int *)FUN_0056bce0(*(int *)(local_8 + 0xd4),1);
              FUN_005521a0(iVar5,piVar3[0xd]);
              if (*(char *)(iVar5 + 0x38) == '\0') {
                iVar5 = FUN_00552450(iVar5,param_1);
                piVar3[0xd] = iVar5;
              }
              else {
                piVar3[0xd] = 0;
                uVar4 = 7;
              }
              piVar3[0x16] = uVar4;
            }
            break;
          }
          piVar6 = param_1;
          piVar7 = local_cc;
          for (iVar5 = 0x30; iVar5 != 0; iVar5 = iVar5 + -1) {
            *piVar7 = *piVar6;
            piVar6 = piVar6 + 1;
            piVar7 = piVar7 + 1;
          }
          piVar6 = piVar3;
          piVar7 = param_1;
          for (iVar5 = 0x30; iVar5 != 0; iVar5 = iVar5 + -1) {
            *piVar7 = *piVar6;
            piVar6 = piVar6 + 1;
            piVar7 = piVar7 + 1;
          }
          piVar6 = local_cc;
          piVar7 = piVar3;
          for (iVar5 = 0x30; iVar5 != 0; iVar5 = iVar5 + -1) {
            *piVar7 = *piVar6;
            piVar6 = piVar6 + 1;
            piVar7 = piVar7 + 1;
          }
          iVar5 = param_1[0xf];
          param_1[0xf] = piVar3[0xf];
          piVar3[0xf] = iVar5;
          iVar5 = param_1[0xe];
          param_1[0xe] = piVar3[0xe];
          piVar3[0xe] = iVar5;
          iVar5 = param_1[0x26];
          param_1[0x26] = piVar3[0x26];
          piVar3[0x26] = iVar5;
          piVar3[0x18] = piVar3[0x18] ^ (param_1[0x18] ^ piVar3[0x18]) & 0x200U;
          FUN_005682d0(param_1,piVar3);
          piVar6 = param_1;
          param_1[0x16] = 0;
          if ((param_1[0xc] == -0x420df25d) || (param_1[0xc] == 0x519c2973)) {
            FUN_00575ca0(param_1);
          }
          iVar5 = *piVar6;
          FUN_0056c560(iVar5,piVar6);
          if (piVar6[0xe] == 0) {
            *(int *)(iVar5 + 4) = piVar6[0xf];
          }
          else {
            *(int *)(piVar6[0xe] + 0x3c) = piVar6[0xf];
          }
          if (piVar6[0xf] != 0) {
            *(int *)(piVar6[0xf] + 0x38) = piVar6[0xe];
          }
          piVar6[0xc] = -0x49f93c38;
          *piVar6 = 0;
          FUN_005521a0(iVar5,piVar6);
          FUN_005280f0(piVar3);
          piVar3[0x18] = piVar3[0x18] | 0x400;
          uVar4 = FUN_00567ca0(piVar3);
          iVar5 = local_c;
          if (uVar4 != 0x11) break;
        }
      }
      iVar5 = local_8;
      if ((*(char *)(local_8 + 0x38) != '\0') || (uVar4 == 0xc0a)) {
        FUN_00553890(local_8,7,0);
        *(undefined1 *)(iVar5 + 0x38) = 0;
        uVar4 = 7;
      }
      uVar2 = *(uint *)(iVar5 + 0x30);
      if (*(int *)(iVar5 + 0xc) != 0) {
        (*DAT_00766638)(*(int *)(iVar5 + 0xc));
      }
      return uVar2 & uVar4;
    }
    pcVar8 = "API called with finalized prepared statement";
    local_8 = 0;
  }
  FUN_00525a30(0x15,pcVar8);
  FUN_00525a30(0x15,"misuse at line %d of [%.10s]",0xf350,"c0e09560d26f0a6456be9dd3447f5311eb4f238f"
              );
  return 0x15;
}


/* FUN_00527590 @ 00527590  kind=gamemisc  attributed-by=caller-vote  size=127 */

undefined4 FUN_00527590(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005326d0(param_1,param_2);
  if ((*(byte *)(iVar1 + 0x1c) & 0x12) == 0) {
    uVar2 = FUN_0056bce0(iVar1,1);
    FUN_00532670(param_1);
    return uVar2;
  }
  FUN_00574600(iVar1);
  *(ushort *)(iVar1 + 0x1c) = *(ushort *)(iVar1 + 0x1c) & 0xfffd | 0x10;
  if (*(int *)(iVar1 + 0x18) != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 4);
    FUN_00532670(param_1);
    return uVar2;
  }
  FUN_00532670(param_1);
  return 0;
}


/* FUN_00527610 @ 00527610  kind=gamemisc  attributed-by=caller-vote  size=95 */

int FUN_00527610(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005326d0(param_1,param_2);
  if ((*(byte *)(iVar1 + 0x1c) & 0x10) == 0) {
    iVar2 = FUN_0056bce0(iVar1,1);
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


/* FUN_00528070 @ 00528070  kind=gamemisc  attributed-by=caller-vote  size=115 */

undefined4 FUN_00528070(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar1 = *param_1;
  if (iVar1 == 0) {
    FUN_00525a30(0x15,"API called with finalized prepared statement");
    FUN_00525a30(0x15,"misuse at line %d of [%.10s]",0xf1bd,
                 "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
    return 0x15;
  }
  if (*(int *)(iVar1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(iVar1 + 0xc));
  }
  uVar2 = FUN_005734d0(param_1);
  uVar2 = FUN_0054a110(iVar1,uVar2);
  FUN_0055d180(iVar1);
  return uVar2;
}


/* FUN_005280f0 @ 005280f0  kind=gamemisc  attributed-by=caller-vote  size=191 */

uint FUN_005280f0(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (*(int *)(*param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(*param_1 + 0xc));
  }
  uVar2 = FUN_00575ca0(param_1);
  iVar1 = *param_1;
  param_1[0x15] = -1;
  param_1[0x16] = 0;
  *(undefined2 *)(param_1 + 0x17) = 0xff02;
  param_1[0xc] = -0x420df25d;
  param_1[0x19] = 0;
  param_1[0x14] = 1;
  param_1[0x1c] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  if (iVar1 == 0) {
    uVar3 = 0xff;
  }
  else {
    if ((*(char *)(iVar1 + 0x38) != '\0') || (uVar2 == 0xc0a)) {
      FUN_00553890(iVar1,7,0);
      *(undefined1 *)(iVar1 + 0x38) = 0;
      uVar2 = 7;
    }
    uVar3 = *(uint *)(iVar1 + 0x30);
  }
  if (*(int *)(*param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(*param_1 + 0xc));
  }
  return uVar3 & uVar2;
}


/* FUN_00528cb0 @ 00528cb0  kind=gamemisc  attributed-by=caller-vote  size=105 */

void FUN_00528cb0(undefined4 *param_1)

{
  void *_Src;
  size_t _Size;
  undefined4 uVar1;
  void *_Dst;
  
  _Src = (void *)param_1[0x86];
  if ((_Src != (void *)0x0) && (param_1[0x7f] != 0)) {
    _Size = param_1[0x87];
    uVar1 = *param_1;
    _Dst = (void *)FUN_00552230(uVar1,_Size + 1);
    if (_Dst != (void *)0x0) {
      memcpy(_Dst,_Src,_Size);
      *(undefined1 *)((int)_Dst + _Size) = 0;
    }
    FUN_00528d20(uVar1,param_1[0x7f],_Dst);
  }
  return;
}


/* FUN_00528d20 @ 00528d20  kind=gamemisc  attributed-by=caller-vote  size=140 */

void FUN_00528d20(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + 0x30);
  *(int *)(param_2 + 0x30) = iVar1 + 1;
  iVar2 = FUN_00552390(param_1,*(undefined4 *)(param_2 + 0x34),(iVar1 + 1) * 4 + 4);
  if (iVar2 == 0) {
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        FUN_005521a0(param_1,*(undefined4 *)(*(int *)(param_2 + 0x34) + iVar2 * 4));
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1);
    }
    FUN_005521a0(param_1,param_3);
    FUN_005521a0(param_1,*(undefined4 *)(param_2 + 0x34));
    *(undefined4 *)(param_2 + 0x30) = 0;
    *(undefined4 *)(param_2 + 0x34) = 0;
    return;
  }
  *(undefined4 *)(iVar2 + iVar1 * 4) = param_3;
  *(undefined4 *)(iVar2 + 4 + iVar1 * 4) = 0;
  *(int *)(param_2 + 0x34) = iVar2;
  return;
}


/* FUN_0052b7f0 @ 0052b7f0  kind=gamemisc  attributed-by=caller-vote  size=553 */

int FUN_0052b7f0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int local_c;
  
  local_c = 0;
  iVar1 = *param_1;
  for (iVar2 = param_1[2]; iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
    FUN_00524410(*(undefined4 *)(iVar2 + 0x14));
    *(undefined4 *)(iVar2 + 0x14) = 0;
  }
  if (*(char *)((int)param_1 + 0x12) == '\0') {
    uVar8 = param_1[0xb];
    if (uVar8 < 2) {
      uVar5 = 0;
    }
    else {
      uVar5 = (uint)param_1[9] / 5 + 1;
      iVar2 = ((uVar8 - 2) / uVar5) * uVar5;
      uVar5 = iVar2 + 2;
      if (uVar5 == DAT_007666d0 / (uint)param_1[8] + 1) {
        uVar5 = iVar2 + 3;
      }
    }
    if ((uVar5 == uVar8) || (uVar5 = DAT_007666d0 / (uint)param_1[8] + 1, uVar8 == uVar5)) {
      FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xc8c9,
                   "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
      return 0xb;
    }
    iVar2 = *(int *)(param_1[3] + 0x38);
    iVar4 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar2 + 0x24),*(undefined1 *)(iVar2 + 0x25)),
                              *(undefined1 *)(iVar2 + 0x26)),*(undefined1 *)(iVar2 + 0x27));
    uVar6 = (uint)param_1[9] / 5;
    iVar2 = FUN_00544710(param_1,uVar8);
    uVar7 = (uVar8 - (iVar2 + iVar4 + (uVar6 - uVar8)) / uVar6) - iVar4;
    if ((uVar5 < uVar8) && (uVar7 < uVar5)) {
      uVar7 = uVar7 - 1;
    }
    while( true ) {
      if (uVar7 < 2) {
        uVar3 = 0;
      }
      else {
        iVar2 = ((uVar7 - 2) / (uVar6 + 1)) * (uVar6 + 1);
        uVar3 = iVar2 + 2;
        if (uVar3 == uVar5) {
          uVar3 = iVar2 + 3;
        }
      }
      if ((uVar3 != uVar7) && (uVar7 != uVar5)) break;
      uVar7 = uVar7 - 1;
    }
    if (uVar8 < uVar7) {
      FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xc8d6,
                   "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
      return 0xb;
    }
    iVar2 = 0;
    if (uVar7 < uVar8) {
      do {
        if (iVar2 != 0) break;
        iVar2 = FUN_0053b980(param_1,uVar7,uVar8);
        uVar8 = uVar8 - 1;
      } while (uVar7 < uVar8);
      local_c = iVar2;
      if ((iVar2 != 0x65) && (iVar2 != 0)) goto LAB_0052b9d2;
    }
    if (iVar4 != 0) {
      local_c = FUN_00560330(*(undefined4 *)(param_1[3] + 0x44));
      *(undefined4 *)(*(int *)(param_1[3] + 0x38) + 0x20) = 0;
      *(undefined4 *)(*(int *)(param_1[3] + 0x38) + 0x24) = 0;
      iVar2 = *(int *)(param_1[3] + 0x38);
      *(char *)(iVar2 + 0x1c) = (char)(uVar7 >> 0x18);
      *(char *)(iVar2 + 0x1d) = (char)(uVar7 >> 0x10);
      *(char *)(iVar2 + 0x1e) = (char)(uVar7 >> 8);
      *(char *)(iVar2 + 0x1f) = (char)uVar7;
      *(uint *)(*param_1 + 0x18) = uVar7;
      param_1[0xb] = uVar7;
    }
    if (local_c != 0) {
LAB_0052b9d2:
      FUN_0055fbc0(iVar1);
      return local_c;
    }
  }
  return 0;
}


/* FUN_0052e030 @ 0052e030  kind=gamemisc  attributed-by=caller-vote  size=53 */

void FUN_0052e030(int *param_1,char *param_2,undefined1 *param_3,undefined1 param_4)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((*(char *)(iVar1 + 0x38) == '\0') && (*param_2 == 'b')) {
    *param_3 = param_4;
    FUN_00555e30(iVar1,*(undefined4 *)(param_3 + 0xc));
    *(undefined4 *)(param_3 + 0xc) = 0;
  }
  return;
}


/* FUN_0052e070 @ 0052e070  kind=gamemisc  attributed-by=caller-vote  size=182 */

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


/* FUN_0052e890 @ 0052e890  kind=gamemisc  attributed-by=caller-vote  size=189 */

void FUN_0052e890(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = param_1[1];
  FUN_0054c040(*(undefined4 *)(iVar2 + 0x3c));
  *(undefined4 *)(iVar2 + 0x3c) = 0;
  if ((char)param_1[2] != '\0') {
    if (1 < *(int *)(*param_1 + 0x84)) {
      iVar2 = param_1[1];
      if (*(int **)(iVar2 + 0x4c) == param_1) {
        *(ushort *)(iVar2 + 0x16) = *(ushort *)(iVar2 + 0x16) & 0xff9f;
        *(undefined4 *)(iVar2 + 0x4c) = 0;
        for (iVar2 = *(int *)(iVar2 + 0x48); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xc)) {
          *(undefined1 *)(iVar2 + 8) = 1;
        }
      }
      *(undefined1 *)(param_1 + 2) = 1;
      return;
    }
    if ((char)param_1[2] != '\0') {
      FUN_0052ff10(param_1);
      piVar1 = (int *)(iVar2 + 0x28);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *(undefined1 *)(iVar2 + 0x13) = 0;
      }
    }
  }
  *(undefined1 *)(param_1 + 2) = 0;
  if ((*(char *)(iVar2 + 0x13) == '\0') && (*(int *)(iVar2 + 0xc) != 0)) {
    iVar3 = *(int *)(*(int *)(iVar2 + 0xc) + 0x44);
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + 0x10);
      FUN_00561130(iVar3);
      if (*(int *)(*(int *)(iVar4 + 0xb4) + 0xc) == 0) {
        FUN_00541a10(iVar4);
      }
    }
    *(undefined4 *)(iVar2 + 0xc) = 0;
  }
  return;
}


/* FUN_0052f080 @ 0052f080  kind=gamemisc  attributed-by=caller-vote  size=163 */

void FUN_0052f080(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x138) != 0) {
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x120)) {
      do {
        puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x138) + iVar4 * 4);
        piVar2 = (int *)puVar1[2];
        if ((piVar2 != (int *)0x0) && (*(code **)(param_2 + *piVar2) != (code *)0x0)) {
          (**(code **)(param_2 + *piVar2))(piVar2);
        }
        piVar2 = puVar1 + 3;
        *piVar2 = *piVar2 + -1;
        uVar3 = *puVar1;
        puVar1[5] = 0;
        if (*piVar2 == 0) {
          piVar2 = (int *)puVar1[2];
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 0x10))(piVar2);
          }
          FUN_005521a0(uVar3,puVar1);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x120));
    }
    FUN_005521a0(param_1,*(undefined4 *)(param_1 + 0x138));
    *(undefined4 *)(param_1 + 0x120) = 0;
    *(undefined4 *)(param_1 + 0x138) = 0;
  }
  return;
}


/* FUN_0052ff10 @ 0052ff10  kind=gamemisc  attributed-by=caller-vote  size=251 */

void FUN_0052ff10(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar4 = (int *)(iVar1 + 0x48);
  iVar3 = *(int *)(iVar1 + 0x48);
  while (iVar3 != 0) {
    piVar2 = (int *)*piVar4;
    if (*piVar2 == param_1) {
      *piVar4 = piVar2[3];
      if (piVar2[1] != 1) {
        if (DAT_007665e0 == 0) {
          (*DAT_00766604)(piVar2);
        }
        else {
          if (DAT_0076b488 != 0) {
            (*DAT_00766630)(DAT_0076b488);
          }
          iVar3 = (*DAT_00766608._4_4_)(piVar2);
          DAT_0076b360 = DAT_0076b360 - iVar3;
          if (DAT_0076b388 < DAT_0076b360) {
            DAT_0076b388 = DAT_0076b360;
          }
          DAT_0076b384 = DAT_0076b384 + -1;
          if (DAT_0076b3ac < DAT_0076b384) {
            DAT_0076b3ac = DAT_0076b384;
          }
          (*DAT_00766604)(piVar2);
          if (DAT_0076b488 != 0) {
            (*DAT_00766638)(DAT_0076b488);
          }
        }
      }
    }
    else {
      piVar4 = piVar2 + 3;
    }
    iVar3 = *piVar4;
  }
  if (*(int *)(iVar1 + 0x4c) == param_1) {
    *(ushort *)(iVar1 + 0x16) = *(ushort *)(iVar1 + 0x16) & 0xff9f;
    *(undefined4 *)(iVar1 + 0x4c) = 0;
    return;
  }
  if (*(int *)(iVar1 + 0x28) == 2) {
    *(ushort *)(iVar1 + 0x16) = *(ushort *)(iVar1 + 0x16) & 0xffbf;
  }
  return;
}


/* FUN_005303a0 @ 005303a0  kind=gamemisc  attributed-by=caller-vote  size=118 */

void FUN_005303a0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  FUN_00556700(param_1,*param_2);
  FUN_00567370(param_1,param_2[10]);
  FUN_00555e30(param_1,param_2[0xb]);
  FUN_00556700(param_1,param_2[0xc]);
  FUN_00555e30(param_1,param_2[0xd]);
  FUN_00556700(param_1,param_2[0xe]);
  iVar1 = param_2[0xf];
  if (iVar1 != 0) {
    FUN_005303a0(param_1,iVar1);
    FUN_005521a0(param_1,iVar1);
  }
  FUN_00555e30(param_1,param_2[0x12]);
  FUN_00555e30(param_1,param_2[0x13]);
  return;
}


/* FUN_005308c0 @ 005308c0  kind=gamemisc  attributed-by=caller-vote  size=432 */

void FUN_005308c0(undefined4 *param_1,int param_2,short *param_3,char *param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  ulonglong local_24 [4];
  
  uVar2 = *param_1;
  local_24[1] = 0;
  local_24[2] = 0;
  local_24[3] = 0;
  local_24[0] = ZEXT48(param_1);
  iVar4 = FUN_00546130(local_24,param_5);
  if (((iVar4 == 0) && (iVar4 = FUN_00546130(local_24,param_6), iVar4 == 0)) &&
     (iVar4 = FUN_00546130(local_24,param_7), iVar4 == 0)) {
    if (param_4 != (char *)0x0) {
      if (*param_4 == '^') {
        uVar5 = *(undefined4 *)(param_4 + 4);
      }
      else {
        uVar5 = 0;
      }
      iVar4 = FUN_0054ab50(param_1,param_2,uVar5,0,0);
      if (iVar4 != 0) goto LAB_00530a47;
    }
    piVar6 = (int *)FUN_0055ab80(param_1);
    iVar4 = param_1[0x10];
    if ((int)param_1[0xf] < 4) {
      iVar4 = param_1[0x13] + 1;
      param_1[0x13] = param_1[0x13] + 4;
    }
    else {
      param_1[0x10] = iVar4 + 4;
      param_1[0xf] = param_1[0xf] + -4;
    }
    FUN_005545d0(param_1,param_5,iVar4);
    FUN_005545d0(param_1,param_6,iVar4 + 1);
    FUN_005545d0(param_1,param_7,iVar4 + 2);
    if (piVar6 != (int *)0x0) {
      FUN_0056bef0(piVar6,0x12,0,(iVar4 - *param_3) + 3,iVar4 + 3);
      if (piVar6[1] != 0) {
        *(char *)(piVar6[1] + -0x11 + piVar6[7] * 0x14) = (char)*param_3;
      }
      iVar4 = piVar6[1];
      iVar3 = *piVar6;
      if ((iVar4 == 0) || (*(char *)(iVar3 + 0x38) != '\0')) {
        FUN_00539320(iVar3,0xfffffffb,param_3);
      }
      else {
        iVar1 = iVar4 + (piVar6[7] + -1) * 0x14;
        FUN_00539320(iVar3,(int)*(char *)(iVar1 + 1),
                     *(undefined4 *)(iVar4 + 0x10 + (piVar6[7] + -1) * 0x14));
        *(short **)(iVar1 + 0x10) = param_3;
        *(undefined1 *)(iVar1 + 1) = 0xfb;
      }
      FUN_0056be30(piVar6,0x81,param_2 == 0x18);
    }
  }
  else {
    param_1[0x11] = param_1[0x11] + 1;
  }
LAB_00530a47:
  FUN_00555e30(uVar2,param_5);
  FUN_00555e30(uVar2,param_6);
  FUN_00555e30(uVar2,param_7);
  return;
}


/* FUN_00532670 @ 00532670  kind=gamemisc  attributed-by=caller-vote  size=96 */

void FUN_00532670(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 != (int *)0x0) {
    uVar3 = param_1[0x16];
    iVar1 = *param_1;
    if (iVar1 == 0) {
      uVar2 = 0xff;
    }
    else {
      if ((*(char *)(iVar1 + 0x38) != '\0') || (uVar3 == 0xc0a)) {
        FUN_00553890(iVar1,7,0);
        *(undefined1 *)(iVar1 + 0x38) = 0;
        uVar3 = 7;
      }
      uVar2 = *(uint *)(iVar1 + 0x30);
    }
    param_1[0x16] = uVar2 & uVar3;
    if (*(int *)(*param_1 + 0xc) != 0) {
                    /* WARNING: Could not recover jumptable at 0x005326c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_00766638)();
      return;
    }
  }
  return;
}


/* FUN_005326d0 @ 005326d0  kind=gamemisc  attributed-by=caller-vote  size=111 */

undefined * FUN_005326d0(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    if (((param_1[5] != 0) && (param_2 < (int)(uint)*(ushort *)(param_1 + 0xb))) && (-1 < param_2))
    {
      if (*(int *)(*param_1 + 0xc) != 0) {
        (*DAT_00766630)(*(int *)(*param_1 + 0xc));
      }
      return (undefined *)(param_1[5] + param_2 * 0x28);
    }
    if (*param_1 != 0) {
      iVar1 = *(int *)(*param_1 + 0xc);
      if (iVar1 != 0) {
        (*DAT_00766630)(iVar1);
      }
      FUN_00553890(*param_1,0x19,0);
    }
  }
  return &DAT_00712628;
}


/* FUN_00532e30 @ 00532e30  kind=gamemisc  attributed-by=caller-vote  size=68 */

undefined4 FUN_00532e30(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 1;
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    piVar1 = (int *)(*(int *)(param_1 + 0x10) + 4);
    do {
      if ((*piVar1 != 0) && (*(int *)(*piVar1 + 0x10) != 0)) {
        return 1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 4;
    } while (iVar2 < *(int *)(param_1 + 0x14));
  }
  return 0;
}


/* FUN_005342f0 @ 005342f0  kind=gamemisc  attributed-by=caller-vote  size=185 */

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


/* FUN_005343b0 @ 005343b0  kind=gamemisc  attributed-by=caller-vote  size=649 */

char * FUN_005343b0(int param_1,char *param_2,int param_3)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  undefined8 uVar10;
  
  switch(*(undefined1 *)(param_1 + 1)) {
  case 0xed:
    *param_2 = '\0';
    return param_2;
  case 0xee:
    FUN_005240c0(param_3,param_2,"program");
    return param_2;
  case 0xef:
  case 0xfa:
    iVar3 = *(int *)(param_1 + 0x10);
    FUN_005240c0(param_3,param_2,"keyinfo(%d",*(undefined2 *)(iVar3 + 6));
    iVar4 = FUN_00568070(param_2);
    param_1 = 0;
    if (*(short *)(iVar3 + 6) != 0) {
      puVar5 = (undefined4 *)(iVar3 + 0xc);
      while( true ) {
        if ((undefined4 *)*puVar5 == (undefined4 *)0x0) {
          pcVar6 = "nil";
        }
        else {
          pcVar6 = *(char **)*puVar5;
        }
        uVar9 = 0;
        if (pcVar6 != (char *)0x0) {
          cVar1 = *pcVar6;
          pcVar8 = pcVar6;
          while (cVar1 != '\0') {
            pcVar8 = pcVar8 + 1;
            cVar1 = *pcVar8;
          }
          uVar9 = (int)pcVar8 - (int)pcVar6 & 0x3fffffff;
        }
        if (param_3 + -6 < (int)(uVar9 + iVar4)) break;
        param_2[iVar4] = ',';
        iVar7 = iVar4 + 1;
        if (*(char *)(param_1 + *(int *)(iVar3 + 8)) != '\0') {
          param_2[iVar7] = '-';
          iVar7 = iVar4 + 2;
        }
        memcpy(param_2 + iVar7,pcVar6,uVar9 + 1);
        param_1 = param_1 + 1;
        puVar5 = puVar5 + 1;
        iVar4 = iVar7 + uVar9;
        if ((int)(uint)*(ushort *)(iVar3 + 6) <= param_1) {
          (param_2 + iVar4)[0] = ')';
          (param_2 + iVar4)[1] = '\0';
          return param_2;
        }
      }
      builtin_strncpy(param_2 + iVar4,",...",4);
    }
    (param_2 + iVar4)[0] = ')';
    (param_2 + iVar4)[1] = '\0';
    return param_2;
  default:
    pcVar6 = *(char **)(param_1 + 0x10);
    if (*(char **)(param_1 + 0x10) == (char *)0x0) {
      *param_2 = '\0';
      pcVar6 = param_2;
    }
    return pcVar6;
  case 0xf1:
    FUN_005240c0(param_3,param_2,"intarray");
    return param_2;
  case 0xf2:
    FUN_005240c0(param_3,param_2,&DAT_00703880,*(undefined4 *)(param_1 + 0x10));
    return param_2;
  case 0xf3:
    uVar10 = **(undefined8 **)(param_1 + 0x10);
    break;
  case 0xf4:
    uVar10 = **(undefined8 **)(param_1 + 0x10);
LAB_00534548:
    FUN_005240c0(param_3,param_2,"%.16g",uVar10);
    return param_2;
  case 0xf6:
    puVar5 = *(undefined4 **)(*(int *)(param_1 + 0x10) + 8);
    FUN_005240c0(param_3,param_2,"vtab:%p:%p",puVar5,*puVar5);
    return param_2;
  case 0xf8:
    iVar3 = *(int *)(param_1 + 0x10);
    uVar2 = *(ushort *)(iVar3 + 0x1c);
    if ((uVar2 & 2) != 0) {
      return *(char **)(iVar3 + 4);
    }
    if ((uVar2 & 4) == 0) {
      if ((uVar2 & 8) == 0) {
        if ((uVar2 & 1) != 0) {
          FUN_005240c0(param_3,param_2,&DAT_00716880);
          return param_2;
        }
        return "(blob)";
      }
      uVar10 = *(undefined8 *)(iVar3 + 8);
      goto LAB_00534548;
    }
    uVar10 = *(undefined8 *)(iVar3 + 0x10);
    break;
  case 0xfb:
    FUN_005240c0(param_3,param_2,"%s(%d)",*(undefined4 *)(*(short **)(param_1 + 0x10) + 0xc),
                 (int)**(short **)(param_1 + 0x10));
    return param_2;
  case 0xfc:
    FUN_005240c0(param_3,param_2,"collseq(%.20s)",**(undefined4 **)(param_1 + 0x10));
    return param_2;
  }
  FUN_005240c0(param_3,param_2,&DAT_0071680c,uVar10);
  return param_2;
}


/* FUN_00534680 @ 00534680  kind=gamemisc  attributed-by=caller-vote  size=131 */

int FUN_00534680(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  iVar2 = 0;
  iVar4 = 0;
  local_8 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar5 = 0;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 4 + iVar5);
      if (iVar1 != 0) {
        iVar3 = 0;
        iVar2 = *(int *)(**(int **)(iVar1 + 4) + 0xb8);
        if (iVar2 != 0) {
          iVar3 = *(int *)(iVar2 + 0xc);
          *(undefined4 *)(iVar2 + 0xc) = 0;
        }
        iVar2 = local_8;
        if (((*(code **)(param_1 + 0xc0) != (code *)0x0) && (0 < iVar3)) && (local_8 == 0)) {
          local_8 = (**(code **)(param_1 + 0xc0))
                              (*(undefined4 *)(param_1 + 0xc4),param_1,
                               *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar5),iVar3);
          iVar2 = local_8;
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x10;
    } while (iVar4 < *(int *)(param_1 + 0x14));
  }
  return iVar2;
}


/* FUN_00537190 @ 00537190  kind=gamemisc  attributed-by=caller-vote  size=156 */

undefined4 * FUN_00537190(int param_1,byte *param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 == 0) {
    puVar1 = *(undefined4 **)(param_1 + 8);
    iVar3 = *(int *)(param_1 + 4);
  }
  else {
    puVar1 = *(undefined4 **)(iVar3 + 4 + param_4 * 8);
    iVar3 = *(int *)(iVar3 + param_4 * 8);
  }
  do {
    if ((iVar3 == 0) || (iVar3 = iVar3 + -1, puVar1 == (undefined4 *)0x0)) {
      return (undefined4 *)0x0;
    }
    if (puVar1[4] == param_3) {
      pbVar4 = (byte *)puVar1[3];
      iVar2 = param_3;
      pbVar5 = param_2;
      while (0 < iVar2) {
        if ((*pbVar4 == 0) || ((&DAT_007120d8)[*pbVar4] != (&DAT_007120d8)[*pbVar5])) break;
        pbVar4 = pbVar4 + 1;
        pbVar5 = pbVar5 + 1;
        iVar2 = iVar2 + -1;
      }
      if ((iVar2 + -1 < 0) || ((&DAT_007120d8)[*pbVar4] == (&DAT_007120d8)[*pbVar5])) {
        return puVar1;
      }
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}


/* FUN_00539320 @ 00539320  kind=gamemisc  attributed-by=caller-vote  size=228 */

void FUN_00539320(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  
  if (param_3 != (int *)0x0) {
    switch(param_2) {
    case 0xfffffff0:
    case 0xfffffff1:
    case 0xfffffff3:
    case 0xfffffff4:
    case 0xfffffffa:
    case 0xffffffff:
switchD_00539346_caseD_fffffff0:
      FUN_005521a0(param_1,param_3);
      return;
    case 0xfffffff2:
    case 0xfffffff7:
    case 0xfffffffc:
    case 0xfffffffd:
    case 0xfffffffe:
      break;
    case 0xfffffff5:
      if (*(int *)(param_1 + 0x1f0) == 0) {
        FUN_00524410(param_3);
        return;
      }
      break;
    case 0xfffffff6:
      if (*(int *)(param_1 + 0x1f0) == 0) {
        FUN_005776a0(param_3);
      }
      break;
    case 0xfffffff8:
      if (*(int *)(param_1 + 0x1f0) != 0) {
        FUN_005521a0(param_1,param_3[9]);
        FUN_005521a0(param_1,param_3);
        return;
      }
      FUN_0056b910(param_3);
      return;
    case 0xfffffff9:
      iVar1 = *param_3;
      if ((iVar1 != 0) && ((*(byte *)(iVar1 + 3) & 4) != 0)) {
        FUN_005521a0(param_1,iVar1);
      }
      if (*(int *)(param_1 + 0x1f0) == 0) {
        FUN_0056c910(param_3,0);
      }
      FUN_005521a0(param_1,param_3);
      return;
    case 0xfffffffb:
      if ((*param_3 & 0x4000000) != 0) goto switchD_00539346_caseD_fffffff0;
      break;
    default:
      goto switchD_00539346_default;
    }
  }
switchD_00539346_default:
  return;
}


/* FUN_00539a30 @ 00539a30  kind=gamemisc  attributed-by=caller-vote  size=132 */

int FUN_00539a30(int param_1,int param_2,byte *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  iVar1 = *(int *)(param_1 + param_2 * 4);
  do {
    if (iVar1 == 0) {
      return 0;
    }
    pbVar3 = *(byte **)(iVar1 + 0x18);
    iVar2 = param_4;
    pbVar4 = param_3;
    while (0 < iVar2) {
      if ((*pbVar3 == 0) || ((&DAT_007120d8)[*pbVar3] != (&DAT_007120d8)[*pbVar4])) break;
      pbVar3 = pbVar3 + 1;
      pbVar4 = pbVar4 + 1;
      iVar2 = iVar2 + -1;
    }
    if (((iVar2 + -1 < 0) || ((&DAT_007120d8)[*pbVar3] == (&DAT_007120d8)[*pbVar4])) &&
       (*(char *)(*(int *)(iVar1 + 0x18) + param_4) == '\0')) {
      return iVar1;
    }
    iVar1 = *(int *)(iVar1 + 0x1c);
  } while( true );
}


/* FUN_0053b980 @ 0053b980  kind=gamemisc  attributed-by=caller-vote  size=1030 */

int FUN_0053b980(int *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int local_18;
  undefined4 local_14;
  int local_10;
  undefined4 *local_c;
  uint local_8;
  
  uVar5 = param_3;
  if (param_3 < 2) {
    uVar3 = 0;
  }
  else {
    uVar3 = (uint)param_1[9] / 5 + 1;
    iVar2 = ((param_3 - 2) / uVar3) * uVar3;
    uVar3 = iVar2 + 2;
    if (uVar3 == DAT_007666d0 / (uint)param_1[8] + 1) {
      uVar3 = iVar2 + 3;
    }
  }
  if ((uVar3 != param_3) && (param_3 != DAT_007666d0 / (uint)param_1[8] + 1)) {
    iVar2 = *(int *)(param_1[3] + 0x38);
    if (CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar2 + 0x24),*(undefined1 *)(iVar2 + 0x25)),
                          *(undefined1 *)(iVar2 + 0x26)),*(undefined1 *)(iVar2 + 0x27)) == 0) {
      return 0x65;
    }
    iVar2 = FUN_005445e0(param_1,param_3,&local_8,&local_14);
    if (iVar2 != 0) {
      return iVar2;
    }
    if ((char)local_8 == '\x01') {
      iVar2 = FUN_00551190(0xc83e);
      return iVar2;
    }
    if ((char)local_8 == '\x02') {
      if (param_2 != (undefined4 *)0x0) {
        return 0;
      }
      iVar2 = FUN_00529110(param_1,&param_3,&local_18,uVar5,1);
      if (iVar2 != 0) {
        return iVar2;
      }
      FUN_00545740(param_3);
      goto LAB_0053bb25;
    }
    iVar2 = FUN_0052e950(param_1,uVar5,&param_3,0);
    if (iVar2 != 0) {
      return iVar2;
    }
    do {
      local_18 = FUN_00529110(param_1,&local_10,&local_c,0,0);
      if (local_18 != 0) {
        FUN_00545740(param_3);
        return local_18;
      }
      FUN_00545740(local_10);
    } while ((param_2 != (undefined4 *)0x0) && (param_2 < local_c));
    local_10 = FUN_00560330(*(undefined4 *)(param_3 + 0x44));
    if (local_10 == 0) {
      local_10 = FUN_00545a20(param_1,param_3,local_8,local_14,local_c,param_2 != (undefined4 *)0x0)
      ;
    }
    FUN_00545740(param_3);
    if (local_10 != 0) {
      return local_10;
    }
  }
  if (param_2 != (undefined4 *)0x0) {
    return 0;
  }
LAB_0053bb25:
  local_8 = uVar5 - 3;
  do {
    uVar5 = uVar5 - 1;
    param_3 = DAT_007666d0 / (uint)param_1[8] + 1;
    if (uVar5 != param_3) {
      if (uVar5 < 2) {
        uVar3 = 0;
      }
      else {
        uVar3 = (uint)param_1[9] / 5 + 1;
        iVar2 = (local_8 / uVar3) * uVar3;
        uVar3 = iVar2 + 2;
        if (uVar3 == param_3) {
          uVar3 = iVar2 + 3;
        }
      }
      if (uVar3 != uVar5) {
        *(uint *)(*param_1 + 0x18) = uVar5;
        param_1[0xb] = uVar5;
        return 0;
      }
    }
    if (uVar5 < 2) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uint)param_1[9] / 5 + 1;
      iVar2 = (local_8 / uVar3) * uVar3;
      uVar3 = iVar2 + 2;
      if (uVar3 == param_3) {
        uVar3 = iVar2 + 3;
      }
    }
    if (uVar3 == uVar5) {
      iVar2 = *param_1;
      if (uVar5 == 0) {
        FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xa57c,
                     "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
        return 0xb;
      }
      param_3 = *(int *)(iVar2 + 0x28);
      if ((param_3 == 0) &&
         (param_3 = FUN_00560e90(*(undefined4 *)(iVar2 + 0xb4),uVar5,1,&local_c), puVar4 = local_c,
         param_3 == 0)) {
        if (local_c[4] != 0) {
          *(int *)(iVar2 + 0xa0) = *(int *)(iVar2 + 0xa0) + 1;
          goto LAB_0053bce7;
        }
        local_c[4] = iVar2;
        if ((0x7fffffff < uVar5) ||
           (uVar5 == (int)DAT_007666d0 / (int)*(size_t *)(iVar2 + 0x80) + 1U)) {
          FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xa5a2,
                       "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
          param_3 = 0xb;
LAB_0053bc94:
          if ((*(byte *)(puVar4 + 6) & 2) != 0) {
            FUN_00544570(puVar4);
          }
          iVar1 = puVar4[7];
          *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + -1;
          if (puVar4[5] == 1) {
            *(undefined4 *)(iVar1 + 0x2c) = 0;
          }
          (*DAT_00766664)(*(undefined4 *)(iVar1 + 0x28),*puVar4,1);
          goto LAB_0053bcc6;
        }
        if (((*(char *)(iVar2 + 0xe) == '\0') && (uVar5 <= *(uint *)(iVar2 + 0x18))) &&
           (**(int **)(iVar2 + 0x3c) != 0)) {
          *(int *)(iVar2 + 0xa4) = *(int *)(iVar2 + 0xa4) + 1;
          param_3 = FUN_00544d80(local_c);
          if (param_3 != 0) goto LAB_0053bc94;
        }
        else {
          if (*(uint *)(iVar2 + 0x84) < uVar5) {
            param_3 = 0xd;
            goto LAB_0053bc94;
          }
          memset((void *)local_c[1],0,*(size_t *)(iVar2 + 0x80));
        }
      }
      else {
LAB_0053bcc6:
        if (*(int *)(*(int *)(iVar2 + 0xb4) + 0xc) == 0) {
          FUN_00541a10(iVar2);
        }
        puVar4 = (undefined4 *)0x0;
        local_c = (undefined4 *)0x0;
        if (param_3 != 0) {
          return param_3;
        }
      }
LAB_0053bce7:
      iVar2 = puVar4[2];
      *(undefined4 *)(iVar2 + 0x38) = puVar4[1];
      *(int **)(iVar2 + 0x34) = param_1;
      *(undefined4 **)(iVar2 + 0x44) = puVar4;
      *(uint *)(iVar2 + 0x48) = uVar5;
      *(byte *)(iVar2 + 5) = (uVar5 != 1) - 1U & 100;
      param_3 = FUN_00560330(puVar4);
      iVar2 = *(int *)(iVar2 + 0x44);
      if (iVar2 != 0) {
        iVar1 = *(int *)(iVar2 + 0x10);
        FUN_00561130(iVar2);
        if (*(int *)(*(int *)(iVar1 + 0xb4) + 0xc) == 0) {
          FUN_00541a10(iVar1);
        }
      }
      if (param_3 != 0) {
        return param_3;
      }
    }
    local_8 = local_8 - 1;
  } while( true );
}


/* FUN_0053bf40 @ 0053bf40  kind=gamemisc  attributed-by=caller-vote  size=103 */

void FUN_0053bf40(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if (param_2 != (int *)0x0) {
    if (*param_2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = param_2[1];
    }
    *param_2 = *param_2 + 1;
    param_2[1] = (int)param_3;
    if (iVar1 != 0) {
      *param_3 = iVar1;
      param_3[1] = *(int *)(iVar1 + 4);
      if (*(undefined4 **)(iVar1 + 4) != (undefined4 *)0x0) {
        **(undefined4 **)(iVar1 + 4) = param_3;
        *(int **)(iVar1 + 4) = param_3;
        return;
      }
      *(int **)(param_1 + 8) = param_3;
      *(int **)(iVar1 + 4) = param_3;
      return;
    }
  }
  *param_3 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 8) != 0) {
    *(int **)(*(int *)(param_1 + 8) + 4) = param_3;
  }
  param_3[1] = 0;
  *(int **)(param_1 + 8) = param_3;
  return;
}


/* FUN_0053cc30 @ 0053cc30  kind=gamemisc  attributed-by=caller-vote  size=81 */

undefined4 FUN_0053cc30(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 != 0 || *(int *)(param_1 + 0x4c) != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x7c);
    lVar3 = __alldiv(iVar1 + -1,*(int *)(param_1 + 0x4c) - (uint)(iVar1 == 0),uVar2,0);
    uVar2 = __allmul(lVar3 + 1,uVar2,0);
    return uVar2;
  }
  return 0;
}


/* FUN_0053cd40 @ 0053cd40  kind=gamemisc  attributed-by=caller-vote  size=216 */

undefined1 FUN_0053cd40(byte *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  if ((int)param_2 < 2) {
    return 0x1a;
  }
  bVar1 = (&DAT_007128f8)
          [(int)((uint)(byte)(&DAT_007120d8)[param_1[param_2 - 1]] * 3 ^
                 (uint)(byte)(&DAT_007120d8)[*param_1] << 2 ^ param_2) % 0x7f];
  do {
    uVar3 = (uint)bVar1;
    if ((int)(uVar3 - 1) < 0) {
      return 0x1a;
    }
    if ((byte)(&DAT_00712ad7)[uVar3] == param_2) {
      pbVar4 = &DAT_007126a8 + *(ushort *)(&DAT_00712b60 + (uVar3 - 1) * 2);
      uVar2 = param_2;
      pbVar5 = param_1;
      while (0 < (int)uVar2) {
        if ((*pbVar4 == 0) || ((&DAT_007120d8)[*pbVar4] != (&DAT_007120d8)[*pbVar5])) break;
        pbVar4 = pbVar4 + 1;
        pbVar5 = pbVar5 + 1;
        uVar2 = uVar2 - 1;
      }
      if (((int)(uVar2 - 1) < 0) || ((&DAT_007120d8)[*pbVar4] == (&DAT_007120d8)[*pbVar5])) {
        return (&DAT_00712c8f)[uVar3];
      }
    }
    bVar1 = "CREATE TABLE sqlite_master(\n  type text,\n  name text,\n  tbl_name text,\n  rootpage integer,\n  sql text\n)"
            [uVar3 + 0x67];
  } while( true );
}


/* FUN_0053d2a0 @ 0053d2a0  kind=gamemisc  attributed-by=caller-vote  size=891 */

int FUN_0053d2a0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  ushort uVar5;
  int *piVar6;
  short sVar7;
  char *pcVar8;
  undefined4 *puVar9;
  uint uVar10;
  bool bVar11;
  undefined4 *local_10;
  int local_c;
  int local_8;
  
  piVar3 = param_1;
  iVar4 = FUN_00560030(*param_1);
  if (iVar4 != 0) {
    return iVar4;
  }
  iVar4 = *param_1;
  param_1 = *(int **)(iVar4 + 0x28);
  if (param_1 == (int *)0x0) {
    param_1 = (int *)FUN_00560e90(*(undefined4 *)(iVar4 + 0xb4),1,1,&local_10);
  }
  puVar9 = local_10;
  iVar1 = DAT_007666d0;
  if (param_1 == (int *)0x0) {
    if (local_10[4] != 0) {
      *(int *)(iVar4 + 0xa0) = *(int *)(iVar4 + 0xa0) + 1;
      goto LAB_0053d3cb;
    }
    local_10[4] = iVar4;
    if (iVar1 / (int)*(size_t *)(iVar4 + 0x80) == 0) {
      FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xa5a2,
                   "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
      param_1 = (int *)0xb;
LAB_0053d377:
      if ((*(byte *)(puVar9 + 6) & 2) != 0) {
        FUN_00544570(puVar9);
      }
      iVar1 = puVar9[7];
      *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + -1;
      if (puVar9[5] == 1) {
        *(undefined4 *)(iVar1 + 0x2c) = 0;
      }
      (*DAT_00766664)(*(undefined4 *)(iVar1 + 0x28),*puVar9,1);
      goto LAB_0053d3a9;
    }
    if (((*(char *)(iVar4 + 0xe) == '\0') && (*(int *)(iVar4 + 0x18) != 0)) &&
       (**(int **)(iVar4 + 0x3c) != 0)) {
      *(int *)(iVar4 + 0xa4) = *(int *)(iVar4 + 0xa4) + 1;
      param_1 = (int *)FUN_00544d80(local_10);
      if (param_1 != (int *)0x0) goto LAB_0053d377;
    }
    else {
      if (*(int *)(iVar4 + 0x84) == 0) {
        param_1 = (int *)0xd;
        goto LAB_0053d377;
      }
      memset((void *)local_10[1],0,*(size_t *)(iVar4 + 0x80));
    }
  }
  else {
LAB_0053d3a9:
    if (*(int *)(*(int *)(iVar4 + 0xb4) + 0xc) == 0) {
      FUN_00541a10(iVar4);
    }
    puVar9 = (undefined4 *)0x0;
    if (param_1 != (int *)0x0) {
      return (int)param_1;
    }
  }
LAB_0053d3cb:
  local_8 = puVar9[2];
  piVar2 = (int *)puVar9[1];
  *(undefined4 **)(local_8 + 0x44) = puVar9;
  *(int **)(local_8 + 0x38) = piVar2;
  *(int **)(local_8 + 0x34) = piVar3;
  *(undefined4 *)(local_8 + 0x48) = 1;
  *(undefined1 *)(local_8 + 5) = 100;
  local_c = CONCAT31(CONCAT21(CONCAT11((char)piVar2[7],*(undefined1 *)((int)piVar2 + 0x1d)),
                              *(undefined1 *)((int)piVar2 + 0x1e)),
                     *(undefined1 *)((int)piVar2 + 0x1f));
  iVar4 = *(int *)(*piVar3 + 0x18);
  if ((local_c == 0) || (piVar2[6] != piVar2[0x17])) {
    local_c = iVar4;
  }
  if (local_c < 1) {
LAB_0053d5b5:
    iVar4 = (uint)((piVar3[9] + -0xc) * 0x40) / 0xff - 0x17;
    sVar7 = (short)((uint)((piVar3[9] + -0xc) * 0x20) / 0xff) + -0x17;
    uVar5 = (ushort)iVar4;
    *(ushort *)(piVar3 + 6) = uVar5;
    *(short *)((int)piVar3 + 0x1a) = sVar7;
    *(short *)(piVar3 + 7) = (short)piVar3[9] + -0x23;
    *(short *)((int)piVar3 + 0x1e) = sVar7;
    if (uVar5 < 0x80) {
      *(char *)(piVar3 + 5) = (char)iVar4;
    }
    else {
      *(undefined1 *)(piVar3 + 5) = 0x7f;
    }
    piVar3[3] = local_8;
    piVar3[0xb] = local_c;
    return 0;
  }
  param_1 = (int *)0x1a;
  pcVar8 = "SQLite format 3";
  uVar10 = 0xc;
  piVar6 = piVar2;
  do {
    if (*piVar6 != *(int *)pcVar8) goto LAB_0053d565;
    piVar6 = piVar6 + 1;
    pcVar8 = (char *)((int)pcVar8 + 4);
    bVar11 = 3 < uVar10;
    uVar10 = uVar10 - 4;
  } while (bVar11);
  if (2 < *(byte *)((int)piVar2 + 0x12)) {
    *(ushort *)((int)piVar3 + 0x16) = *(ushort *)((int)piVar3 + 0x16) | 1;
  }
  if (*(byte *)((int)piVar2 + 0x13) < 3) {
    if ((*(byte *)((int)piVar2 + 0x13) == 2) && ((*(byte *)((int)piVar3 + 0x16) & 0x10) == 0)) {
      local_10 = (undefined4 *)0x0;
      param_1 = (int *)FUN_0055faf0(*piVar3,&local_10);
      if (param_1 != (int *)0x0) goto LAB_0053d565;
      if (local_10 == (undefined4 *)0x0) {
        FUN_00545740(local_8);
        return 0;
      }
    }
    param_1 = (int *)0x1a;
    if ((((*(short *)((int)piVar2 + 0x15) == 0x2040) && (*(char *)((int)piVar2 + 0x17) == ' ')) &&
        (uVar10 = (uint)*(ushort *)(piVar2 + 4) * 0x100, (uVar10 & uVar10 - 1) == 0)) &&
       (uVar10 - 0x101 < 0xff00)) {
      local_10 = (undefined4 *)(uVar10 - *(byte *)(piVar2 + 5));
      if (uVar10 != piVar3[8]) {
        FUN_00545740(local_8);
        puVar9 = local_10;
        piVar3[9] = (int)local_10;
        piVar3[8] = uVar10;
        FUN_005399e0(piVar3);
        iVar4 = FUN_0055fe80(*piVar3,piVar3 + 8,uVar10 - (int)puVar9);
        return iVar4;
      }
      if (((*(uint *)(piVar3[1] + 0x18) & 0x8000) == 0) && (iVar4 < local_c)) {
        param_1 = (int *)FUN_00551190(0xc62d);
      }
      else if ((undefined4 *)0x1df < local_10) {
        piVar3[8] = uVar10;
        piVar3[9] = (int)local_10;
        iVar4 = FUN_00559fd0(piVar2 + 0xd);
        *(bool *)((int)piVar3 + 0x11) = iVar4 != 0;
        iVar4 = FUN_00559fd0(piVar2 + 0x10);
        *(bool *)((int)piVar3 + 0x12) = iVar4 != 0;
        goto LAB_0053d5b5;
      }
    }
  }
LAB_0053d565:
  FUN_00545740(local_8);
  piVar3[3] = 0;
  return (int)param_1;
}


/* FUN_0053dcf0 @ 0053dcf0  kind=gamemisc  attributed-by=caller-vote  size=228 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0053dcf0(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (*DAT_00766610)(param_1);
  if (DAT_0076b39c < param_1) {
    DAT_0076b39c = param_1;
  }
  _DAT_0076b374 = param_1;
  if (DAT_0076b498 != 0) {
    iVar2 = (DAT_0076b494 - ((int)uVar1 >> 0x1f)) - (uint)(DAT_0076b490 < uVar1);
    if (((int)DAT_0076b360 >> 0x1f < iVar2) ||
       (((int)DAT_0076b360 >> 0x1f <= iVar2 && (DAT_0076b360 < DAT_0076b490 - uVar1)))) {
      DAT_0076b4ac = 0;
    }
    else {
      DAT_0076b4ac = 1;
      FUN_0055da70(uVar1);
    }
  }
  iVar2 = (*DAT_00766600)(uVar1);
  if (iVar2 != 0) {
    uVar1 = (*DAT_00766608._4_4_)(iVar2);
    DAT_0076b360 = DAT_0076b360 + uVar1;
    if (DAT_0076b388 < (int)DAT_0076b360) {
      DAT_0076b388 = DAT_0076b360;
    }
    DAT_0076b384 = DAT_0076b384 + 1;
    if (DAT_0076b3ac < DAT_0076b384) {
      DAT_0076b3ac = DAT_0076b384;
    }
    *param_2 = iVar2;
    return uVar1;
  }
  *param_2 = 0;
  return uVar1;
}


/* FUN_00540b30 @ 00540b30  kind=gamemisc  attributed-by=caller-vote  size=60 */

int FUN_00540b30(int param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if (-1 < iVar2) {
    return iVar2;
  }
  iVar1 = *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x14);
  uVar3 = __allmul(iVar2,iVar2 >> 0x1f,0xfffffc00,0xffffffff);
  iVar2 = __alldiv(uVar3,iVar1,iVar1 >> 0x1f);
  return iVar2;
}


/* FUN_00541500 @ 00541500  kind=gamemisc  attributed-by=caller-vote  size=698 */

int FUN_00541500(int param_1,uint *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined8 local_24;
  uint *local_1c;
  uint local_18;
  uint local_14;
  uint *local_10;
  uint local_c;
  uint local_8;
  
  iVar4 = 0;
  local_10 = (uint *)0x0;
  if (param_2 == (uint *)0x0) {
    uVar3 = *(uint *)(param_1 + 0x1c);
LAB_00541565:
    puVar1 = local_10;
    *(uint *)(param_1 + 0x18) = uVar3;
    *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_1 + 0xc);
    if ((param_2 == (uint *)0x0) && (*(int *)(param_1 + 0xb8) != 0)) {
      iVar4 = FUN_005417c0(param_1);
      return iVar4;
    }
    local_8 = *(uint *)(param_1 + 0x48);
    local_c = *(uint *)(param_1 + 0x4c);
    puVar5 = (uint *)(param_1 + 0x48);
    local_1c = puVar5;
    if ((param_2 != (uint *)0x0) && (*(int *)(param_1 + 0xb8) == 0)) {
      local_14 = local_8;
      local_18 = local_c;
      if (param_2[2] != 0 || param_2[3] != 0) {
        local_14 = param_2[2];
        local_18 = param_2[3];
      }
      *puVar5 = *param_2;
      *(uint *)(param_1 + 0x4c) = param_2[1];
      do {
        if (((int)local_18 < *(int *)(param_1 + 0x4c)) ||
           (((int)local_18 <= *(int *)(param_1 + 0x4c) && (local_14 <= *puVar5)))) {
          if (iVar4 == 0) goto LAB_005416f0;
          break;
        }
        iVar4 = FUN_00542600(param_1,puVar5,puVar1,1,1);
      } while (iVar4 == 0);
LAB_00541613:
      if (param_2 != (uint *)0x0) {
        iVar2 = *(int *)(param_1 + 0x80) + 4;
        local_24 = __allmul(iVar2,iVar2 >> 0x1f,param_2[6],0);
        iVar2 = *(int *)(param_1 + 0xb8);
        if (iVar2 != 0) {
          if (param_2[10] != *(uint *)(iVar2 + 0x68)) {
            param_2[7] = 0;
            param_2[10] = *(uint *)(iVar2 + 0x68);
          }
          if (param_2[7] < *(uint *)(iVar2 + 0x44)) {
            *(uint *)(iVar2 + 0x44) = param_2[7];
            *(uint *)(iVar2 + 0x4c) = param_2[8];
            *(uint *)(iVar2 + 0x50) = param_2[9];
            FUN_0057dcf0(iVar2);
          }
          iVar4 = 0;
        }
        puVar1 = local_10;
        for (uVar3 = param_2[6];
            (iVar4 == 0 && (puVar5 = local_1c, uVar3 < *(uint *)(param_1 + 0x34)));
            uVar3 = uVar3 + 1) {
          iVar4 = FUN_00542600(param_1,&local_24,puVar1,0,1);
          puVar5 = local_1c;
        }
      }
      FUN_0054c040(local_10);
      if (iVar4 == 0) {
        *puVar5 = local_8;
        puVar5[1] = local_c;
      }
      return iVar4;
    }
    *puVar5 = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
LAB_005416f0:
    do {
      if (((int)local_c < *(int *)(param_1 + 0x4c)) ||
         (((int)local_c <= *(int *)(param_1 + 0x4c) && (local_8 <= *puVar5)))) goto LAB_00541613;
      local_18 = 0;
      iVar4 = FUN_00544e80(param_1,0,local_8,local_c,&local_18,(int)&local_24 + 4);
      local_14 = local_18;
      if ((local_18 == 0) &&
         ((*(uint *)(param_1 + 0x7c) + *(uint *)(param_1 + 0x50) == *puVar5 &&
          (*(int *)(param_1 + 0x54) +
           (uint)CARRY4(*(uint *)(param_1 + 0x7c),*(uint *)(param_1 + 0x50)) ==
           *(int *)(param_1 + 0x4c))))) {
        iVar2 = *(int *)(param_1 + 0x80) + 8;
        local_14 = __alldiv(local_8 - *puVar5,
                            (local_c - *(int *)(param_1 + 0x4c)) - (uint)(local_8 < *puVar5),iVar2,
                            iVar2 >> 0x1f);
      }
      uVar3 = 0;
      while( true ) {
        if (iVar4 != 0) goto LAB_00541613;
        if (local_14 <= uVar3) break;
        if ((int)local_c < *(int *)(param_1 + 0x4c)) goto LAB_00541613;
        if (((int)local_c <= *(int *)(param_1 + 0x4c)) && (local_8 <= *puVar5)) break;
        iVar4 = FUN_00542600(param_1,puVar5,local_10,1,1);
        uVar3 = uVar3 + 1;
      }
    } while( true );
  }
  local_18 = param_2[5];
  puVar1 = (uint *)FUN_0055da00(0x200);
  if (puVar1 != (uint *)0x0) {
    local_10 = puVar1;
    memset(puVar1,0,0x200);
    *puVar1 = local_18;
    if (puVar1 != (uint *)0x0) {
      uVar3 = param_2[5];
      goto LAB_00541565;
    }
  }
  return 7;
}


/* FUN_005417c0 @ 005417c0  kind=gamemisc  attributed-by=caller-vote  size=92 */

int FUN_005417c0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x1c);
  iVar2 = FUN_005785a0(*(undefined4 *)(param_1 + 0xb8),FUN_00541940,param_1);
  iVar3 = FUN_00560cd0(*(undefined4 *)(param_1 + 0xb4));
  if (iVar3 == 0) {
    return iVar2;
  }
  do {
    if (iVar2 != 0) {
      return iVar2;
    }
    puVar1 = (undefined4 *)(iVar3 + 0x14);
    iVar3 = *(int *)(iVar3 + 0xc);
    iVar2 = FUN_00541940(param_1,*puVar1);
  } while (iVar3 != 0);
  return iVar2;
}


/* FUN_00541940 @ 00541940  kind=gamemisc  attributed-by=caller-vote  size=199 */

int FUN_00541940(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *local_8;
  
  iVar3 = 0;
  local_8 = (undefined4 *)0x0;
  FUN_00560e90(*(undefined4 *)(param_1 + 0xb4),param_2,0,&local_8);
  puVar2 = local_8;
  if (local_8 != (undefined4 *)0x0) {
    if (*(short *)((int)local_8 + 0x1a) == 1) {
      if ((*(byte *)(local_8 + 6) & 2) != 0) {
        FUN_00544570(local_8);
      }
      iVar1 = puVar2[7];
      *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + -1;
      if (puVar2[5] == 1) {
        *(undefined4 *)(iVar1 + 0x2c) = 0;
      }
      (*DAT_00766664)(*(undefined4 *)(iVar1 + 0x28),*puVar2,1);
    }
    else {
      iVar3 = FUN_00544d80(local_8);
      if (iVar3 == 0) {
        (**(code **)(param_1 + 0xac))(puVar2);
      }
      iVar1 = puVar2[4];
      FUN_00561130(puVar2);
      if (*(int *)(*(int *)(iVar1 + 0xb4) + 0xc) == 0) {
        FUN_00541a10(iVar1);
      }
    }
  }
  for (iVar1 = *(int *)(param_1 + 0x58); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x2c)) {
    *(undefined4 *)(iVar1 + 0x10) = 1;
  }
  return iVar3;
}


/* FUN_00541a10 @ 00541a10  kind=gamemisc  attributed-by=caller-vote  size=94 */

void FUN_00541a10(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0xf);
  if ((bVar1 != 6) && (bVar1 != 0)) {
    if (bVar1 < 2) {
      if (*(char *)(param_1 + 4) == '\0') {
        FUN_00541e00(param_1,0);
      }
    }
    else {
      if (DAT_0076b3bc != (code *)0x0) {
        (*DAT_0076b3bc)();
      }
      FUN_0055fbc0(param_1);
      if (DAT_0076b3c0 != (code *)0x0) {
        (*DAT_0076b3c0)();
        FUN_00542a20(param_1);
        return;
      }
    }
  }
  FUN_00542a20(param_1);
  return;
}


/* FUN_00541ab0 @ 00541ab0  kind=gamemisc  attributed-by=caller-vote  size=156 */

int FUN_00541ab0(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  uVar3 = param_3;
  if (param_4 == 0) {
    iVar4 = 1;
  }
  else {
    iVar4 = 0;
    piVar5 = &param_2;
    iVar1 = param_2;
    while (iVar1 != 0) {
      if (*(uint *)(iVar1 + 0x14) <= uVar3) {
        piVar5 = (int *)(iVar1 + 0xc);
        iVar4 = iVar4 + 1;
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      *piVar5 = iVar1;
    }
  }
  iVar1 = param_2;
  *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + iVar4;
  if (*(int *)(param_2 + 0x14) == 1) {
    FUN_00542d70(param_2);
  }
  iVar4 = FUN_00577e30(*(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0x80),iVar1,uVar3,
                       param_4,*(undefined1 *)(param_1 + 10));
  if (iVar4 == 0) {
    iVar2 = *(int *)(param_1 + 0x58);
    while (iVar2 != 0) {
      FUN_0054b6e0(*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(iVar1 + 0x14),
                   *(undefined4 *)(iVar1 + 4));
      iVar1 = *(int *)(iVar1 + 0xc);
      iVar2 = iVar1;
    }
  }
  return iVar4;
}


/* FUN_00541e00 @ 00541e00  kind=gamemisc  attributed-by=caller-vote  size=460 */

int FUN_00541e00(int *param_1,undefined4 param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  iVar5 = 0;
  if ((*(byte *)((int)param_1 + 0xf) < 2) && (*(byte *)(param_1 + 4) < 2)) {
    return 0;
  }
  FUN_005455d0(param_1);
  piVar2 = (int *)param_1[0x10];
  if ((undefined *)*piVar2 != (undefined *)0x0) {
    if ((undefined *)*piVar2 == &DAT_00712500) {
      FUN_0051f900(piVar2);
      *piVar2 = 0;
    }
    else {
      cVar1 = *(char *)((int)param_1 + 5);
      if (cVar1 == '\x03') {
        if (param_1[0x12] == 0 && param_1[0x13] == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = (**(code **)(*piVar2 + 0x10))(piVar2,0,0);
        }
      }
      else {
        if ((cVar1 != '\x01') && (((char)param_1[1] == '\0' || (cVar1 == '\x05')))) {
          iVar3 = param_1[3];
          FUN_0055e900(piVar2);
          if ((char)iVar3 == '\0') {
            iVar5 = (**(code **)(*param_1 + 0x1c))(*param_1,param_1[0x25],0);
          }
          goto LAB_00541ed5;
        }
        iVar5 = FUN_005830c0(param_1,param_2);
      }
      param_1[0x13] = 0;
      param_1[0x12] = 0;
    }
  }
LAB_00541ed5:
  FUN_0054c040(param_1[0xe]);
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  FUN_00560c70(param_1[0x2d]);
  FUN_005611b0(param_1[0x2d],param_1[6]);
  iVar3 = param_1[0x2e];
  if ((iVar3 != 0) && (*(char *)(iVar3 + 0x2c) != '\0')) {
    if (*(char *)(iVar3 + 0x2b) == '\0') {
      (**(code **)(**(int **)(iVar3 + 4) + 0x38))(*(int **)(iVar3 + 4),0,1,9);
    }
    *(undefined1 *)(iVar3 + 0x2c) = 0;
    *(undefined1 *)(iVar3 + 0x2f) = 0;
  }
  local_8 = 0;
  if ((char)param_1[1] != '\0') goto LAB_00541fb5;
  iVar3 = param_1[0x2e];
  if (iVar3 != 0) {
    if (*(char *)(iVar3 + 0x2b) == '\0') goto LAB_00541fb5;
    *(undefined1 *)(iVar3 + 0x2b) = 0;
    iVar4 = (**(code **)(**(int **)(iVar3 + 4) + 0x38))
                      (*(int **)(iVar3 + 4),*(short *)(iVar3 + 0x28) + 3,1,6);
    if (iVar4 != 0) {
      *(undefined1 *)(iVar3 + 0x2b) = 1;
    }
    if (*(char *)(iVar3 + 0x2b) != '\0') goto LAB_00541fb5;
  }
  piVar2 = (int *)param_1[0xf];
  local_8 = 0;
  if ((*piVar2 != 0) &&
     (local_8 = (**(code **)(*piVar2 + 0x20))(piVar2,1), (char)param_1[4] != '\x05')) {
    *(undefined1 *)(param_1 + 4) = 1;
  }
  *(undefined1 *)((int)param_1 + 0x11) = 0;
LAB_00541fb5:
  if (iVar5 == 0) {
    iVar5 = local_8;
  }
  *(undefined1 *)((int)param_1 + 0xf) = 1;
  *(undefined1 *)((int)param_1 + 0x12) = 0;
  return iVar5;
}


/* FUN_00542000 @ 00542000  kind=gamemisc  attributed-by=caller-vote  size=373 */

int FUN_00542000(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar2 = param_1;
  if ((*(char *)((int)param_1 + 0x11) != '\0') || (param_1[6] == 0)) {
    return 0;
  }
  iVar3 = param_1[10];
  if (iVar3 == 0) {
    iVar3 = FUN_00560e90(param_1[0x2d],1,1,&param_1);
  }
  puVar4 = param_1;
  iVar1 = DAT_007666d0;
  if (iVar3 == 0) {
    if (param_1[4] != 0) {
      puVar2[0x28] = puVar2[0x28] + 1;
      goto LAB_00542118;
    }
    param_1[4] = puVar2;
    if (iVar1 / (int)puVar2[0x20] == 0) {
      FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xa5a2,
                   "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
      iVar3 = 0xb;
    }
    else if (((*(char *)((int)puVar2 + 0xe) == '\0') && (puVar2[6] != 0)) &&
            (*(int *)puVar2[0xf] != 0)) {
      puVar2[0x29] = puVar2[0x29] + 1;
      iVar3 = FUN_00544d80(param_1);
      if (iVar3 == 0) goto LAB_00542118;
    }
    else {
      if (puVar2[0x21] != 0) {
        memset((void *)param_1[1],0,puVar2[0x20]);
        goto LAB_00542118;
      }
      iVar3 = 0xd;
    }
    if ((*(byte *)(puVar4 + 6) & 2) != 0) {
      FUN_00544570(puVar4);
    }
    iVar1 = puVar4[7];
    *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + -1;
    if (puVar4[5] == 1) {
      *(undefined4 *)(iVar1 + 0x2c) = 0;
    }
    (*DAT_00766664)(*(undefined4 *)(iVar1 + 0x28),*puVar4,1);
  }
  if (*(int *)(puVar2[0x2d] + 0xc) == 0) {
    FUN_00541a10(puVar2);
  }
  puVar4 = (undefined4 *)0x0;
  if (iVar3 != 0) {
    return iVar3;
  }
LAB_00542118:
  iVar3 = FUN_00560330(puVar4);
  if (iVar3 == 0) {
    FUN_00542d70(puVar4);
    *(undefined1 *)((int)puVar2 + 0x11) = 1;
  }
  if (puVar4 != (undefined4 *)0x0) {
    iVar1 = puVar4[4];
    FUN_00561130(puVar4);
    if (*(int *)(*(int *)(iVar1 + 0xb4) + 0xc) == 0) {
      FUN_00541a10(iVar1);
    }
  }
  return iVar3;
}


/* FUN_005422c0 @ 005422c0  kind=gamemisc  attributed-by=caller-vote  size=828 */

int FUN_005422c0(uint *param_1,int param_2)

{
  uint *puVar1;
  char *pcVar2;
  uint uVar3;
  int *piVar4;
  code *pcVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  puVar6 = param_1;
  local_c = 1;
  puVar1 = param_1 + 0x10;
  local_8 = 0;
  param_1 = (uint *)*param_1;
  iVar7 = (**(code **)(*(int *)*puVar1 + 0x18))((int *)*puVar1,&local_20);
  if (iVar7 == 0) {
    pcVar2 = (char *)puVar6[0x2c];
    iVar7 = FUN_005450a0(puVar6[0x10],pcVar2,*(int *)(*puVar6 + 8) + 1);
    if ((iVar7 == 0) &&
       (((*pcVar2 == '\0' ||
         (iVar7 = (**(code **)((int)param_1 + 0x20))(param_1,pcVar2,0,&local_c), iVar7 == 0)) &&
        (local_c != 0)))) {
      puVar6[0x12] = 0;
      puVar6[0x13] = 0;
      local_14 = param_2;
      iVar7 = FUN_00544e80(puVar6,param_2,local_20,local_1c,&param_1,&local_8);
      uVar8 = local_1c;
      while (iVar7 == 0) {
        local_1c = uVar8;
        if (param_1 == (uint *)0xffffffff) {
          param_1 = (uint *)__alldiv(local_20 - puVar6[0x1f],uVar8 - (local_20 < puVar6[0x1f]),
                                     puVar6[0x20] + 8,(int)(puVar6[0x20] + 8) >> 0x1f);
        }
        if ((param_1 == (uint *)0x0) && (param_2 == 0)) {
          local_10 = puVar6[0x12];
          local_18 = puVar6[0x13];
          if ((puVar6[0x1f] + puVar6[0x14] == local_10) &&
             (puVar6[0x15] + (uint)CARRY4(puVar6[0x1f],puVar6[0x14]) == local_18)) {
            param_1 = (uint *)__alldiv(local_20 - local_10,
                                       (uVar8 - local_18) - (uint)(local_20 < local_10),
                                       puVar6[0x20] + 8,(int)(puVar6[0x20] + 8) >> 0x1f);
          }
        }
        uVar8 = local_8;
        if ((puVar6[0x12] == puVar6[0x1f]) && (puVar6[0x13] == 0)) {
          iVar7 = FUN_00542920(puVar6,local_8);
          if (iVar7 != 0) goto LAB_005424b4;
          puVar6[6] = uVar8;
        }
        uVar8 = 0;
        if (param_1 != (uint *)0x0) {
          do {
            if (local_14 != 0) {
              for (uVar3 = puVar6[0x16]; uVar3 != 0; uVar3 = *(uint *)(uVar3 + 0x2c)) {
                *(undefined4 *)(uVar3 + 0x10) = 1;
              }
              FUN_005611b0(puVar6[0x2d],0);
              local_14 = 0;
            }
            iVar7 = FUN_00542600(puVar6,puVar6 + 0x12,0,1,0);
            if (iVar7 != 0) {
              if (iVar7 != 0x65) {
                if (iVar7 == 0x20a) {
                  iVar7 = 0;
                }
                goto LAB_005424b4;
              }
              puVar6[0x12] = local_20;
              puVar6[0x13] = local_1c;
              break;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < param_1);
        }
        iVar7 = FUN_00544e80(puVar6,param_2,local_20,local_1c,&param_1,&local_8);
        uVar8 = local_1c;
      }
      if (iVar7 == 0x65) {
        iVar7 = 0;
      }
    }
  }
LAB_005424b4:
  *(char *)((int)puVar6 + 0x11) = (char)puVar6[3];
  if (iVar7 == 0) {
    pcVar2 = (char *)puVar6[0x2c];
    iVar7 = FUN_005450a0(puVar6[0x10],pcVar2,*(int *)(*puVar6 + 8) + 1);
    if (iVar7 == 0) {
      if ((3 < *(byte *)((int)puVar6 + 0xf)) || (*(byte *)((int)puVar6 + 0xf) == 0)) {
        iVar7 = 0;
        if (*(char *)((int)puVar6 + 7) == '\0') {
          iVar7 = (**(code **)(*(int *)puVar6[0xf] + 0x14))
                            ((int *)puVar6[0xf],*(undefined1 *)((int)puVar6 + 0xb));
        }
        else {
          piVar4 = (int *)puVar6[0xf];
          if ((*piVar4 != 0) && (iVar7 = (**(code **)(*piVar4 + 0x28))(piVar4,8,0), iVar7 == 0xc)) {
            iVar7 = 0;
          }
        }
        if (iVar7 != 0) goto LAB_00542582;
      }
      iVar7 = FUN_00541e00(puVar6,*pcVar2 != '\0');
      if (((iVar7 == 0) && (*pcVar2 != '\0')) && (local_c != 0)) {
        iVar7 = FUN_00541bd0(puVar6,pcVar2);
      }
    }
  }
LAB_00542582:
  if (((char)puVar6[3] != '\0') ||
     (uVar8 = (**(code **)(*(int *)puVar6[0xf] + 0x30))((int *)puVar6[0xf]), (uVar8 & 0x1000) != 0))
  {
    puVar6[0x1f] = 0x200;
    return iVar7;
  }
  pcVar5 = *(code **)(*(int *)puVar6[0xf] + 0x2c);
  if (pcVar5 == (code *)0x0) {
    puVar6[0x1f] = 0x1000;
    return iVar7;
  }
  uVar8 = (*pcVar5)((int *)puVar6[0xf]);
  if ((int)uVar8 < 0x20) {
    puVar6[0x1f] = 0x200;
    return iVar7;
  }
  if (0x10000 < (int)uVar8) {
    uVar8 = 0x10000;
  }
  puVar6[0x1f] = uVar8;
  return iVar7;
}


/* FUN_00542600 @ 00542600  kind=gamemisc  attributed-by=caller-vote  size=749 */

int FUN_00542600(int param_1,uint *param_2,int param_3,int param_4,int param_5)

{
  void *_Dst;
  bool bVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  undefined8 uVar9;
  uint local_c;
  void *local_8;
  
  puVar3 = param_2;
  iVar2 = param_1;
  local_8 = *(void **)(param_1 + 0xb0);
  if (param_4 == 0) {
    piVar7 = *(int **)(param_1 + 0x44);
  }
  else {
    piVar7 = *(int **)(param_1 + 0x40);
  }
  iVar4 = (**(code **)(*piVar7 + 8))(piVar7,&local_c,4,*param_2,param_2[1]);
  if (iVar4 != 0) {
    return iVar4;
  }
  uVar6 = *puVar3;
  uVar8 = (((local_c & 0xff) << 8 | local_c >> 8 & 0xff) << 8 | local_c >> 0x10 & 0xff) << 8 |
          local_c >> 0x18;
  iVar4 = (**(code **)(*piVar7 + 8))
                    (piVar7,local_8,*(undefined4 *)(iVar2 + 0x80),uVar6 + 4,
                     puVar3[1] + (uint)(0xfffffffb < uVar6));
  if (iVar4 != 0) {
    return iVar4;
  }
  uVar5 = *(int *)(iVar2 + 0x80) + param_4 * 4 + 4;
  uVar6 = *param_2;
  *param_2 = *param_2 + uVar5;
  param_2[1] = param_2[1] + ((int)uVar5 >> 0x1f) + (uint)CARRY4(uVar6,uVar5);
  if ((uVar8 == 0) || (uVar8 == DAT_007666d0 / *(int *)(iVar2 + 0x80) + 1U)) {
    return 0x65;
  }
  if ((*(uint *)(iVar2 + 0x18) < uVar8) || (iVar4 = FUN_0054c2e0(param_3,uVar8), iVar4 != 0)) {
    return 0;
  }
  if (param_4 != 0) {
    iVar4 = FUN_00544d30(piVar7,*param_2 - 4,param_2[1] - (uint)(*param_2 < 4),&local_c);
    if (iVar4 != 0) {
      return iVar4;
    }
    if ((param_5 == 0) && (uVar6 = FUN_00541b50(iVar2,local_8), uVar6 != local_c)) {
      return 0x65;
    }
  }
  if ((param_3 != 0) && (iVar4 = FUN_0054c100(param_3,uVar8), iVar4 != 0)) {
    return iVar4;
  }
  iVar4 = 0;
  if ((uVar8 == 1) && (*(ushort *)(iVar2 + 0x76) != (ushort)*(byte *)((int)local_8 + 0x14))) {
    *(ushort *)(iVar2 + 0x76) = (ushort)*(byte *)((int)local_8 + 0x14);
  }
  if (*(int *)(iVar2 + 0xb8) == 0) {
    param_1 = FUN_00542180(iVar2,uVar8);
  }
  else {
    param_1 = 0;
  }
  if (param_4 == 0) {
    if ((param_1 == 0) || ((*(byte *)(param_1 + 0x18) & 4) == 0)) goto LAB_005427a0;
LAB_0054280e:
    bVar1 = false;
  }
  else {
    if (*(char *)(iVar2 + 7) == '\0') {
      if ((*(int *)(iVar2 + 0x54) <= (int)param_2[1]) &&
         ((*(int *)(iVar2 + 0x54) < (int)param_2[1] || (*(uint *)(iVar2 + 0x50) < *param_2))))
      goto LAB_0054280e;
    }
LAB_005427a0:
    bVar1 = true;
  }
  if ((**(int **)(iVar2 + 0x3c) == 0) ||
     (((*(byte *)(iVar2 + 0xf) < 4 && (*(byte *)(iVar2 + 0xf) != 0)) || (!bVar1)))) {
    if (param_4 != 0) goto LAB_00542856;
    if (param_1 == 0) {
      *(char *)(iVar2 + 0x13) = *(char *)(iVar2 + 0x13) + '\x01';
      iVar4 = FUN_0055eb70(iVar2,uVar8,&param_1,1);
      *(char *)(iVar2 + 0x13) = *(char *)(iVar2 + 0x13) + -1;
      if (iVar4 != 0) {
        return iVar4;
      }
      *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) & 0xfff7;
      FUN_00561050(param_1);
      iVar4 = 0;
      goto LAB_00542856;
    }
  }
  else {
    iVar4 = *(int *)(iVar2 + 0x80);
    uVar9 = __allmul(uVar8 - 1,0,iVar4,iVar4 >> 0x1f);
    iVar4 = FUN_0055ea40(*(undefined4 *)(iVar2 + 0x3c),local_8,iVar4,uVar9);
    if (*(uint *)(iVar2 + 0x20) < uVar8) {
      *(uint *)(iVar2 + 0x20) = uVar8;
    }
    if (*(int *)(iVar2 + 0x58) != 0) {
      FUN_0054b6e0(*(int *)(iVar2 + 0x58),uVar8,local_8);
    }
LAB_00542856:
    if (param_1 == 0) {
      return iVar4;
    }
  }
  _Dst = *(void **)(param_1 + 4);
  memcpy(_Dst,local_8,*(size_t *)(iVar2 + 0x80));
  (**(code **)(iVar2 + 0xac))(param_1);
  if (param_4 != 0) {
    if (param_5 != 0) {
      if ((*(int *)(iVar2 + 0x54) < (int)param_2[1]) ||
         ((*(int *)(iVar2 + 0x54) <= (int)param_2[1] && (*(uint *)(iVar2 + 0x50) < *param_2))))
      goto LAB_005428a8;
    }
    FUN_00561000(param_1);
  }
LAB_005428a8:
  if (uVar8 == 1) {
    *(undefined8 *)(iVar2 + 100) = *(undefined8 *)((int)_Dst + 0x18);
    *(undefined8 *)(iVar2 + 0x6c) = *(undefined8 *)((int)_Dst + 0x20);
  }
  FUN_00561130(param_1);
  return iVar4;
}


/* FUN_00542920 @ 00542920  kind=gamemisc  attributed-by=caller-vote  size=246 */

/* WARNING: Removing unreachable block (ram,0x005429a4) */
/* WARNING: Removing unreachable block (ram,0x005429d1) */

int FUN_00542920(int param_1,undefined4 param_2)

{
  int *piVar1;
  size_t sVar2;
  void *_Dst;
  int iVar3;
  longlong lVar4;
  uint local_20;
  int local_1c;
  int local_18;
  size_t local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  piVar1 = *(int **)(param_1 + 0x3c);
  if ((*piVar1 == 0) || ((*(byte *)(param_1 + 0xf) < 4 && (*(byte *)(param_1 + 0xf) != 0)))) {
    return 0;
  }
  sVar2 = *(size_t *)(param_1 + 0x80);
  local_14 = sVar2;
  iVar3 = (**(code **)(*piVar1 + 0x18))(piVar1,&local_20);
  local_10 = (int)sVar2 >> 0x1f;
  local_c = sVar2;
  lVar4 = __allmul(param_2,0,sVar2,local_10);
  local_18 = (int)((ulonglong)lVar4 >> 0x20);
  if (iVar3 != 0) {
    return iVar3;
  }
  if (lVar4 == CONCAT44(local_1c,local_20)) {
    return 0;
  }
  if (lVar4 < CONCAT44(local_1c,local_20)) {
    iVar3 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x10))(*(int **)(param_1 + 0x3c),lVar4);
  }
  else {
    local_8 = local_c + local_20;
    if (lVar4 < CONCAT44(local_10 + local_1c + (uint)CARRY4(local_c,local_20),local_8))
    goto LAB_00542a07;
    _Dst = *(void **)(param_1 + 0xb0);
    memset(_Dst,0,local_14);
    iVar3 = FUN_0055ea40(*(undefined4 *)(param_1 + 0x3c),_Dst,local_14,(uint)lVar4 - local_c,
                         (local_18 - local_10) - (uint)((uint)lVar4 < local_c));
  }
  if (iVar3 != 0) {
    return iVar3;
  }
LAB_00542a07:
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return 0;
}


/* FUN_00542a20 @ 00542a20  kind=gamemisc  attributed-by=caller-vote  size=274 */

void FUN_00542a20(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  FUN_0054c040(*(undefined4 *)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x38) = 0;
  FUN_005455d0(param_1);
  if (*(int *)(param_1 + 0xb8) == 0) {
    if (*(char *)(param_1 + 4) != '\0') goto LAB_00542ad0;
    piVar1 = *(int **)(param_1 + 0x3c);
    if (*piVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(*piVar1 + 0x30))(piVar1);
    }
    if (((uVar2 & 0x800) == 0) || ((*(byte *)(param_1 + 5) & 5) != 1)) {
      piVar1 = *(int **)(param_1 + 0x40);
      if (*piVar1 != 0) {
        (**(code **)(*piVar1 + 4))(piVar1);
        *piVar1 = 0;
      }
    }
    piVar1 = *(int **)(param_1 + 0x3c);
    if (*piVar1 != 0) {
      iVar3 = (**(code **)(*piVar1 + 0x20))(piVar1,0);
      if (*(char *)(param_1 + 0x10) != '\x05') {
        *(undefined1 *)(param_1 + 0x10) = 0;
      }
      if ((iVar3 != 0) && (*(char *)(param_1 + 0xf) == '\x06')) {
        *(undefined1 *)(param_1 + 0x10) = 5;
      }
    }
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  else {
    FUN_00577dd0(*(int *)(param_1 + 0xb8));
  }
  *(undefined1 *)(param_1 + 0xf) = 0;
LAB_00542ad0:
  if (*(int *)(param_1 + 0x28) != 0) {
    for (iVar3 = *(int *)(param_1 + 0x58); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x2c)) {
      *(undefined4 *)(iVar3 + 0x10) = 1;
    }
    FUN_005611b0(*(undefined4 *)(param_1 + 0xb4),0);
    *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_1 + 0xc);
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  return;
}


/* FUN_00542b40 @ 00542b40  kind=gamemisc  attributed-by=caller-vote  size=113 */

int FUN_00542b40(int param_1,int param_2)

{
  int iVar1;
  
  while( true ) {
    if ((param_2 <= (int)(uint)*(byte *)(param_1 + 0x10)) && (*(byte *)(param_1 + 0x10) != 5)) {
      return 0;
    }
    iVar1 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x1c))(*(int **)(param_1 + 0x3c),param_2);
    if (iVar1 == 0) {
      if ((*(char *)(param_1 + 0x10) != '\x05') || (param_2 == 4)) {
        *(char *)(param_1 + 0x10) = (char)param_2;
      }
      return 0;
    }
    if (iVar1 != 5) break;
    iVar1 = (**(code **)(param_1 + 0x98))(*(undefined4 *)(param_1 + 0x9c));
    if (iVar1 == 0) {
      return 5;
    }
  }
  return iVar1;
}


/* FUN_00542bc0 @ 00542bc0  kind=gamemisc  attributed-by=caller-vote  size=425 */

uint FUN_00542bc0(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar2 = *(undefined4 *)(param_1 + 4);
  iVar3 = *(int *)(param_1 + 0x10);
  uVar4 = *(uint *)(iVar3 + 0x28);
  if (uVar4 == 0) {
    if (*(char *)(iVar3 + 0xd) != '\0') {
      return 3;
    }
    uVar4 = 0;
    if ((*(char *)(iVar3 + 0xf) != '\x02') || (uVar4 = FUN_005421b0(iVar3), uVar4 == 0)) {
      FUN_00561050(param_1);
      uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x38);
      iVar5 = FUN_0054c2e0(uVar6,*(undefined4 *)(param_1 + 0x14));
      if ((iVar5 == 0) || (iVar5 = FUN_0057a8b0(param_1), iVar5 != 0)) {
        iVar5 = FUN_0054c2e0(uVar6,*(undefined4 *)(param_1 + 0x14));
        if ((iVar5 == 0) && (*(int *)(iVar3 + 0xb8) == 0)) {
          if ((*(uint *)(iVar3 + 0x1c) < *(uint *)(param_1 + 0x14)) ||
             (**(int **)(iVar3 + 0x40) == 0)) {
            if (*(char *)(iVar3 + 0xf) != '\x04') {
              *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) | 4;
            }
          }
          else {
            iVar5 = *(int *)(iVar3 + 0x4c);
            uVar4 = *(uint *)(iVar3 + 0x48);
            uVar6 = FUN_00541b50(iVar3,uVar2);
            *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) | 4;
            uVar7 = FUN_00580010(*(undefined4 *)(iVar3 + 0x40),uVar4,iVar5,
                                 *(undefined4 *)(param_1 + 0x14));
            if (uVar7 != 0) {
              return uVar7;
            }
            uVar7 = FUN_0055ea40(*(undefined4 *)(iVar3 + 0x40),uVar2,*(undefined4 *)(iVar3 + 0x80),
                                 uVar4 + 4,iVar5 + (uint)(0xfffffffb < uVar4));
            if (uVar7 != 0) {
              return uVar7;
            }
            uVar7 = *(uint *)(iVar3 + 0x80);
            uVar4 = FUN_00580010(*(undefined4 *)(iVar3 + 0x40),uVar7 + uVar4 + 4,
                                 ((int)uVar7 >> 0x1f) + iVar5 + (uint)CARRY4(uVar7,uVar4) +
                                 (uint)(0xfffffffb < uVar7 + uVar4),uVar6);
            if (uVar4 != 0) {
              return uVar4;
            }
            uVar7 = *(int *)(iVar3 + 0x80) + 8;
            puVar1 = (uint *)(iVar3 + 0x48);
            uVar4 = *puVar1;
            *puVar1 = *puVar1 + uVar7;
            *(int *)(iVar3 + 0x4c) =
                 *(int *)(iVar3 + 0x4c) + ((int)uVar7 >> 0x1f) + (uint)CARRY4(uVar4,uVar7);
            *(int *)(iVar3 + 0x2c) = *(int *)(iVar3 + 0x2c) + 1;
            uVar7 = FUN_0054c100(*(undefined4 *)(iVar3 + 0x38),*(undefined4 *)(param_1 + 0x14));
            uVar8 = FUN_00528db0(iVar3,*(undefined4 *)(param_1 + 0x14));
            uVar4 = 0;
            if ((uVar7 | uVar8) != 0) {
              return uVar7 | uVar8;
            }
          }
        }
        iVar5 = FUN_0057a8b0(param_1);
        if (iVar5 != 0) {
          uVar4 = FUN_0057a9b0(param_1);
        }
      }
      if (*(uint *)(iVar3 + 0x18) < *(uint *)(param_1 + 0x14)) {
        *(uint *)(iVar3 + 0x18) = *(uint *)(param_1 + 0x14);
      }
    }
  }
  return uVar4;
}


/* FUN_00542d70 @ 00542d70  kind=gamemisc  attributed-by=caller-vote  size=119 */

void FUN_00542d70(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  undefined1 uVar6;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 4);
  iVar5 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar1 + 100),*(undefined1 *)(iVar1 + 0x65)),
                            *(undefined1 *)(iVar1 + 0x66)),*(undefined1 *)(iVar1 + 0x67)) + 1;
  uVar6 = (undefined1)((uint)iVar5 >> 0x18);
  *(undefined1 *)(iVar2 + 0x18) = uVar6;
  *(char *)(iVar2 + 0x1b) = (char)iVar5;
  uVar4 = (undefined1)((uint)iVar5 >> 0x10);
  *(undefined1 *)(iVar2 + 0x19) = uVar4;
  uVar3 = (undefined1)((uint)iVar5 >> 8);
  *(undefined1 *)(iVar2 + 0x1a) = uVar3;
  iVar1 = *(int *)(param_1 + 4);
  *(undefined1 *)(iVar1 + 0x5e) = uVar3;
  *(undefined1 *)(iVar1 + 0x5c) = uVar6;
  *(undefined1 *)(iVar1 + 0x5d) = uVar4;
  *(char *)(iVar1 + 0x5f) = (char)iVar5;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x60) = 0x27e22d00;
  return;
}


/* FUN_00542df0 @ 00542df0  kind=gamemisc  attributed-by=caller-vote  size=311 */

int FUN_00542df0(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_10;
  int local_8;
  
  local_8 = 0;
  if ((*(int *)param_1[0xf] != 0) ||
     (local_8 = (**(code **)(*param_1 + 0x18))
                          (*param_1,0,(int *)param_1[0xf],param_1[0x1e] & 0x87f7fU | 0x1e,0),
     local_8 == 0)) {
    iVar2 = local_8;
    if ((uint)param_1[9] < (uint)param_1[6]) {
      local_10 = __allmul(param_1[0x20],param_1[0x20] >> 0x1f,param_1[6],0);
      (**(code **)(*(int *)param_1[0xf] + 0x28))((int *)param_1[0xf],5,&local_10);
      param_1[9] = param_1[6];
    }
    do {
      if (param_2 == 0) {
        return iVar2;
      }
      uVar1 = *(uint *)(param_2 + 0x14);
      if ((uVar1 <= (uint)param_1[6]) && ((*(byte *)(param_2 + 0x18) & 0x20) == 0)) {
        uVar3 = __allmul(uVar1 - 1,0,param_1[0x20],param_1[0x20] >> 0x1f);
        local_8 = (int)uVar3;
        if (uVar1 == 1) {
          FUN_00542d70(param_2);
        }
        local_10._4_4_ = *(int *)(param_2 + 4);
        local_8 = (**(code **)(*(int *)param_1[0xf] + 0xc))
                            ((int *)param_1[0xf],local_10._4_4_,param_1[0x20],local_8,
                             (int)((ulonglong)uVar3 >> 0x20));
        if (uVar1 == 1) {
          *(undefined8 *)(param_1 + 0x19) = *(undefined8 *)(local_10._4_4_ + 0x18);
          *(undefined8 *)(param_1 + 0x1b) = *(undefined8 *)(local_10._4_4_ + 0x20);
        }
        if ((uint)param_1[8] < uVar1) {
          param_1[8] = uVar1;
        }
        param_1[0x2a] = param_1[0x2a] + 1;
        FUN_0054b6e0(param_1[0x16],uVar1,*(undefined4 *)(param_2 + 4));
      }
      param_2 = *(int *)(param_2 + 0xc);
      iVar2 = 0;
    } while (local_8 == 0);
  }
  return local_8;
}


/* FUN_00544190 @ 00544190  kind=gamemisc  attributed-by=caller-vote  size=246 */

int FUN_00544190(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  if ((param_1 < DAT_0076b75c) || (DAT_0076b760 <= param_1)) {
    iVar1 = (*DAT_00766608._4_4_)(param_1);
    if (DAT_0076b764 != 0) {
      (*DAT_00766630)(DAT_0076b764);
    }
    DAT_0076b368 = DAT_0076b368 - iVar1;
    if (DAT_0076b390 < DAT_0076b368) {
      DAT_0076b390 = DAT_0076b368;
    }
    if (DAT_0076b764 != 0) {
      (*DAT_00766638)(DAT_0076b764);
    }
    FUN_00524410(param_1);
  }
  else {
    if (DAT_0076b764 != 0) {
      (*DAT_00766630)(DAT_0076b764);
    }
    DAT_0076b364 = DAT_0076b364 + -1;
    if (DAT_0076b38c < DAT_0076b364) {
      DAT_0076b38c = DAT_0076b364;
    }
    *param_1 = DAT_0076b768;
    DAT_0076b76c = DAT_0076b76c + 1;
    DAT_0076b768 = param_1;
    DAT_0076b770 = (uint)(DAT_0076b76c < DAT_0076b758);
    if (DAT_0076b764 != 0) {
      (*DAT_00766638)(DAT_0076b764);
      return 0;
    }
  }
  return iVar1;
}


/* FUN_00544570 @ 00544570  kind=gamemisc  attributed-by=caller-vote  size=105 */

void FUN_00544570(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x1c);
  if (puVar1[2] == param_1) {
    for (iVar2 = *(int *)(param_1 + 0x24); (iVar2 != 0 && ((*(byte *)(iVar2 + 0x18) & 4) != 0));
        iVar2 = *(int *)(iVar2 + 0x24)) {
    }
    puVar1[2] = iVar2;
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    puVar1[1] = *(undefined4 *)(param_1 + 0x24);
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x24) = *(undefined4 *)(param_1 + 0x24);
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    *puVar1 = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    return;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}


/* FUN_005445e0 @ 005445e0  kind=gamemisc  attributed-by=caller-vote  size=301 */

int FUN_005445e0(undefined4 *param_1,uint param_2,byte *param_3,undefined4 *param_4)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar1 = param_2;
  if (param_2 < 2) {
    iVar5 = 0;
  }
  else {
    uVar4 = (uint)param_1[9] / 5 + 1;
    iVar3 = ((param_2 - 2) / uVar4) * uVar4;
    iVar5 = iVar3 + 2;
    if (iVar5 == DAT_007666d0 / (uint)param_1[8] + 1) {
      iVar5 = iVar3 + 3;
    }
  }
  iVar3 = FUN_0055eb70(*param_1,iVar5,&param_2,0);
  pbVar2 = param_3;
  uVar4 = param_2;
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_2 + 4);
    iVar5 = ((uVar1 - iVar5) + -1) * 5;
    if (iVar5 < 0) {
      iVar5 = *(int *)(param_2 + 0x10);
      param_2 = iVar3;
      FUN_00561130(uVar4);
      if (*(int *)(*(int *)(iVar5 + 0xb4) + 0xc) == 0) {
        FUN_00541a10(iVar5);
      }
      uVar6 = 0xbff8;
    }
    else {
      *param_3 = *(byte *)(iVar5 + iVar3);
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar5 + 1 + iVar3),
                                              *(undefined1 *)(iVar5 + 2 + iVar3)),
                                     *(undefined1 *)(iVar5 + 3 + iVar3)),
                            *(undefined1 *)(iVar5 + 4 + iVar3));
      }
      iVar5 = *(int *)(param_2 + 0x10);
      param_2 = iVar3;
      FUN_00561130(uVar4);
      if (*(int *)(*(int *)(iVar5 + 0xb4) + 0xc) == 0) {
        FUN_00541a10(iVar5);
      }
      if ((*pbVar2 != 0) && (*pbVar2 < 6)) {
        return 0;
      }
      uVar6 = 0xc000;
    }
    FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",uVar6,
                 "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
    iVar3 = 0xb;
  }
  return iVar3;
}


/* FUN_00544710 @ 00544710  kind=gamemisc  attributed-by=caller-vote  size=72 */

int FUN_00544710(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x24) / 5 + 1;
  iVar2 = ((param_2 - 2) / uVar1) * uVar1;
  iVar3 = iVar2 + 2;
  if (iVar3 == DAT_007666d0 / *(uint *)(param_1 + 0x20) + 1) {
    iVar3 = iVar2 + 3;
  }
  return iVar3;
}


/* FUN_00544c20 @ 00544c20  kind=gamemisc  attributed-by=caller-vote  size=264 */

void FUN_00544c20(void)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  char local_108 [256];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if ((char)DAT_0076b520 == '\0') {
    DAT_0076b520._1_2_ = 0;
    iVar3 = FUN_005224a0(0);
    (**(code **)(iVar3 + 0x38))(iVar3,0x100,local_108);
    iVar3 = 0;
    do {
      *(char *)((int)&DAT_0076b520 + iVar3 + 3) = (char)iVar3;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x100);
    iVar3 = 0;
    do {
      bVar4 = DAT_0076b520._2_1_ + local_108[iVar3] + *(char *)((int)&DAT_0076b520 + iVar3 + 3);
      DAT_0076b520._1_2_ = CONCAT11(bVar4,DAT_0076b520._1_1_);
      iVar5 = iVar3 + 1;
      uVar1 = *(undefined1 *)((int)&DAT_0076b520 + bVar4 + 3);
      *(undefined1 *)((int)&DAT_0076b520 + bVar4 + 3) =
           *(undefined1 *)((int)&DAT_0076b520 + iVar3 + 3);
      *(undefined1 *)((int)&DAT_0076b520 + iVar3 + 3) = uVar1;
      iVar3 = iVar5;
    } while (iVar5 < 0x100);
    DAT_0076b520._0_1_ = '\x01';
  }
  bVar4 = DAT_0076b520._1_1_ + 1;
  cVar2 = *(char *)((int)&DAT_0076b520 + bVar4 + 3);
  DAT_0076b520._2_1_ = DAT_0076b520._2_1_ + cVar2;
  DAT_0076b520._1_1_ = bVar4;
  *(undefined1 *)((int)&DAT_0076b520 + bVar4 + 3) =
       *(undefined1 *)((int)&DAT_0076b520 + DAT_0076b520._2_1_ + 3);
  *(char *)((int)&DAT_0076b520 + DAT_0076b520._2_1_ + 3) = cVar2;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00544d30 @ 00544d30  kind=gamemisc  attributed-by=caller-vote  size=78 */

int FUN_00544d30(int *param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 8))(param_1,&param_1,4,param_2,param_3);
  if (iVar1 == 0) {
    *param_4 = ((((uint)param_1 & 0xff) << 8 | (uint)param_1 >> 8 & 0xff) << 8 |
               (uint)param_1 >> 0x10 & 0xff) << 8 | (uint)param_1 >> 0x18;
  }
  return iVar1;
}


/* FUN_00544d80 @ 00544d80  kind=gamemisc  attributed-by=caller-vote  size=245 */

int FUN_00544d80(int param_1)

{
  int iVar1;
  int iVar2;
  size_t _Size;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar3 = param_1;
  iVar1 = *(int *)(param_1 + 0x14);
  iVar2 = *(int *)(param_1 + 0x10);
  _Size = *(size_t *)(iVar2 + 0x80);
  param_1 = 0;
  if (**(int **)(iVar2 + 0x3c) == 0) {
    memset(*(void **)(iVar3 + 4),0,_Size);
    return 0;
  }
  if (*(int *)(iVar2 + 0xb8) != 0) {
    iVar4 = FUN_00578400(*(int *)(iVar2 + 0xb8),iVar1,&param_1,_Size,*(undefined4 *)(iVar3 + 4));
    if ((iVar4 != 0) || (param_1 != 0)) goto LAB_00544e27;
  }
  uVar5 = __allmul(iVar1 + -1,0,*(int *)(iVar2 + 0x80),*(int *)(iVar2 + 0x80) >> 0x1f);
  iVar4 = (**(code **)(**(int **)(iVar2 + 0x3c) + 8))
                    (*(int **)(iVar2 + 0x3c),*(undefined4 *)(iVar3 + 4),_Size,uVar5);
  if (iVar4 == 0x20a) {
    iVar4 = 0;
  }
LAB_00544e27:
  if (iVar1 == 1) {
    if (iVar4 != 0) {
      *(undefined4 *)(iVar2 + 100) = 0xffffffff;
      *(undefined4 *)(iVar2 + 0x68) = 0xffffffff;
      *(undefined4 *)(iVar2 + 0x6c) = 0xffffffff;
      *(undefined4 *)(iVar2 + 0x70) = 0xffffffff;
      return iVar4;
    }
    iVar1 = *(int *)(iVar3 + 4);
    *(undefined8 *)(iVar2 + 100) = *(undefined8 *)(iVar1 + 0x18);
    *(undefined8 *)(iVar2 + 0x6c) = *(undefined8 *)(iVar1 + 0x20);
  }
  return iVar4;
}


/* FUN_00544e80 @ 00544e80  kind=gamemisc  attributed-by=caller-vote  size=530 */

/* WARNING: Removing unreachable block (ram,0x00544eff) */

void FUN_00544e80(int param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5,
                 uint param_6)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  uint local_18;
  uint local_14;
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = param_5;
  iVar4 = *(int *)(param_1 + 0x48);
  local_18 = param_6;
  local_10 = 0;
  if (iVar4 == 0 && *(int *)(param_1 + 0x4c) == 0) {
    lVar5 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x7c);
    lVar5 = __alldiv(iVar4 + -1,*(int *)(param_1 + 0x4c) - (uint)(iVar4 == 0),uVar3,0);
    lVar5 = __allmul(lVar5 + 1,uVar3,0);
  }
  *(longlong *)(param_1 + 0x48) = lVar5;
  if ((CONCAT44(param_4,param_3) < (longlong)(lVar5 + (ulonglong)*(uint *)(param_1 + 0x7c))) ||
     ((((param_2 != 0 || ((int)lVar5 != *(int *)(param_1 + 0x50))) ||
       ((int)((ulonglong)lVar5 >> 0x20) != *(int *)(param_1 + 0x54))) &&
      (((iVar4 = (**(code **)(**(int **)(param_1 + 0x40) + 8))
                           (*(int **)(param_1 + 0x40),&local_10,8,lVar5), iVar4 != 0 ||
        ((int)local_10 != -0x6fa2a27)) || (local_10._4_4_ != -0x289c5ee0)))))) goto LAB_00545081;
  iVar4 = FUN_00544d30(*(undefined4 *)(param_1 + 0x40),lVar5 + 8,local_14);
  if (((iVar4 == 0) &&
      (iVar4 = FUN_00544d30(*(undefined4 *)(param_1 + 0x40),lVar5 + 0xc,param_1 + 0x30), iVar4 == 0)
      ) && (iVar4 = FUN_00544d30(*(undefined4 *)(param_1 + 0x40),lVar5 + 0x10,local_18), iVar4 == 0)
     ) {
    if (*(int *)(param_1 + 0x48) == 0 && *(int *)(param_1 + 0x4c) == 0) {
      iVar4 = FUN_00544d30(*(undefined4 *)(param_1 + 0x40),lVar5 + 0x14,&local_18);
      if ((iVar4 != 0) ||
         (iVar4 = FUN_00544d30(*(undefined4 *)(param_1 + 0x40),lVar5 + 0x18,&local_14),
         uVar2 = local_18, iVar4 != 0)) {
LAB_00545081:
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      if (local_14 == 0) {
        local_14 = *(uint *)(param_1 + 0x80);
      }
      if (((((local_14 < 0x200) || (local_18 < 0x20)) || (0x10000 < local_14)) ||
          ((0x10000 < local_18 || ((local_14 & local_14 - 1) != 0)))) ||
         ((local_18 & local_18 - 1) != 0)) goto LAB_00545081;
      FUN_0055fe80(param_1,&local_14,0xffffffff);
      *(uint *)(param_1 + 0x7c) = uVar2;
    }
    puVar1 = (uint *)(param_1 + 0x48);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + *(uint *)(param_1 + 0x7c);
    *(int *)(param_1 + 0x4c) =
         *(int *)(param_1 + 0x4c) + (uint)CARRY4(uVar2,*(uint *)(param_1 + 0x7c));
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005450a0 @ 005450a0  kind=gamemisc  attributed-by=caller-vote  size=318 */

void FUN_005450a0(int *param_1,undefined1 *param_2,uint param_3)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  *param_2 = 0;
  iVar2 = (**(code **)(*param_1 + 0x18))(param_1,&local_1c);
  if (((iVar2 == 0) && (-1 < local_18)) && ((0 < local_18 || (0xf < local_1c)))) {
    iVar2 = FUN_00544d30(param_1,local_1c - 0x10,local_18 - (uint)(local_1c < 0x10),&local_14);
    uVar4 = local_14;
    if ((iVar2 == 0) && (local_14 < param_3)) {
      iVar2 = FUN_00544d30(param_1,local_1c - 0xc,local_18 - (uint)(local_1c < 0xc),&local_14);
      if (iVar2 == 0) {
        iVar2 = (**(code **)(*param_1 + 8))
                          (param_1,&local_10,8,local_1c - 8,local_18 - (uint)(local_1c < 8));
        if (((iVar2 == 0) && (local_10 == -0x6fa2a27)) && (local_c == -0x289c5ee0)) {
          iVar2 = FUN_0055ea00(param_1,param_2,uVar4,(local_1c - uVar4) - 0x10,
                               (local_18 - (uint)(local_1c < uVar4)) -
                               (uint)(local_1c - uVar4 < 0x10));
          if (iVar2 == 0) {
            uVar3 = 0;
            if (uVar4 != 0) {
              do {
                pcVar1 = param_2 + uVar3;
                uVar3 = uVar3 + 1;
                local_14 = local_14 - (int)*pcVar1;
              } while (uVar3 < uVar4);
            }
            if (local_14 != 0) {
              uVar4 = 0;
            }
            param_2[uVar4] = 0;
            __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
            return;
          }
        }
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005452d0 @ 005452d0  kind=gamemisc  attributed-by=caller-vote  size=330 */

undefined4 FUN_005452d0(uint *param_1,uint param_2)

{
  int *piVar1;
  uint *puVar2;
  byte *pbVar3;
  uint *puVar4;
  void *_Dst;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (0x400 < param_2 * 8) {
    param_2 = 0x80;
  }
  if (param_2 != *param_1) {
    if (DAT_0076b3bc != (code *)0x0) {
      (*DAT_0076b3bc)();
    }
    _Dst = (void *)FUN_0055da00(param_2 * 8);
    if (DAT_0076b3c0 != (code *)0x0) {
      (*DAT_0076b3c0)();
    }
    if (_Dst != (void *)0x0) {
      FUN_00524410(param_1[3]);
      param_1[3] = (uint)_Dst;
      uVar5 = (*DAT_00766608._4_4_)(_Dst);
      uVar5 = uVar5 >> 3;
      *param_1 = uVar5;
      memset(_Dst,0,uVar5 * 8);
      puVar2 = (uint *)param_1[2];
      param_1[2] = 0;
joined_r0x00545365:
      do {
        if (puVar2 == (uint *)0x0) {
          return 1;
        }
        pbVar3 = (byte *)puVar2[3];
        uVar7 = 0;
        for (uVar6 = puVar2[4]; 0 < (int)uVar6; uVar6 = uVar6 - 1) {
          uVar7 = uVar7 ^ (uint)(byte)(&DAT_007120d8)[*pbVar3] ^ uVar7 * 8;
          pbVar3 = pbVar3 + 1;
        }
        puVar4 = (uint *)*puVar2;
        piVar1 = (int *)((int)_Dst + (uVar7 % uVar5) * 8);
        if (piVar1 != (int *)0x0) {
          if (*piVar1 == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = piVar1[1];
          }
          *piVar1 = *piVar1 + 1;
          piVar1[1] = (int)puVar2;
          if (uVar6 != 0) {
            *puVar2 = uVar6;
            puVar2[1] = *(uint *)(uVar6 + 4);
            if (*(undefined4 **)(uVar6 + 4) == (undefined4 *)0x0) {
              param_1[2] = (uint)puVar2;
              *(uint **)(uVar6 + 4) = puVar2;
              puVar2 = puVar4;
            }
            else {
              **(undefined4 **)(uVar6 + 4) = puVar2;
              *(uint **)(uVar6 + 4) = puVar2;
              puVar2 = puVar4;
            }
            goto joined_r0x00545365;
          }
        }
        *puVar2 = param_1[2];
        if (param_1[2] != 0) {
          *(uint **)(param_1[2] + 4) = puVar2;
        }
        puVar2[1] = 0;
        param_1[2] = (uint)puVar2;
        puVar2 = puVar4;
      } while( true );
    }
  }
  return 0;
}


/* FUN_005455d0 @ 005455d0  kind=gamemisc  attributed-by=caller-vote  size=120 */

void FUN_005455d0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x60)) {
    iVar2 = 0;
    do {
      FUN_0054c040(*(undefined4 *)(iVar2 + 0x10 + *(int *)(param_1 + 0x5c)));
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x30;
    } while (iVar3 < *(int *)(param_1 + 0x60));
  }
  if ((*(char *)(param_1 + 4) == '\0') ||
     ((undefined *)**(undefined4 **)(param_1 + 0x44) == &DAT_00712500)) {
    piVar1 = *(int **)(param_1 + 0x44);
    if (*piVar1 != 0) {
      (**(code **)(*piVar1 + 4))(piVar1);
      *piVar1 = 0;
    }
  }
  FUN_00524410(*(undefined4 *)(param_1 + 0x5c));
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}


/* FUN_00545650 @ 00545650  kind=gamemisc  attributed-by=caller-vote  size=229 */

void FUN_00545650(int *param_1,int param_2)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  int local_8;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    iVar3 = *param_1;
    uVar2 = *(undefined1 *)(iVar3 + 0x38);
    if (*(int *)(iVar3 + 0x1f0) == 0) {
      if (param_1 < param_1 + param_2 * 10) {
        local_8 = (uint)((int)(param_1 + param_2 * 10) + (-1 - (int)param_1)) / 0x28 + 1;
        param_1 = param_1 + 9;
        do {
          if ((*(ushort *)(param_1 + -2) & 0x2460) == 0) {
            if (*param_1 != 0) {
              FUN_005521a0(iVar3,*param_1);
              goto LAB_00545711;
            }
          }
          else {
            FUN_00574d80(param_1 + -9);
            FUN_005521a0(param_1[-9],*param_1);
            param_1[-8] = 0;
            param_1[-1] = 0;
LAB_00545711:
            *param_1 = 0;
          }
          *(undefined2 *)(param_1 + -2) = 0x80;
          param_1 = param_1 + 10;
          local_8 = local_8 + -1;
        } while (local_8 != 0);
      }
      *(undefined1 *)(iVar3 + 0x38) = uVar2;
    }
    else {
      piVar1 = param_1 + param_2 * 10;
      if (param_1 < piVar1) {
        do {
          FUN_005521a0(iVar3,param_1[9]);
          param_1 = param_1 + 10;
        } while (param_1 < piVar1);
        return;
      }
    }
  }
  return;
}


/* FUN_00545740 @ 00545740  kind=gamemisc  attributed-by=caller-vote  size=54 */

void FUN_00545740(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x44), iVar1 != 0)) {
    iVar2 = *(int *)(iVar1 + 0x10);
    FUN_00561130(iVar1);
    if (*(int *)(*(int *)(iVar2 + 0xb4) + 0xc) == 0) {
      FUN_00541a10(iVar2);
    }
  }
  return;
}


/* FUN_00545a20 @ 00545a20  kind=gamemisc  attributed-by=caller-vote  size=293 */

int FUN_00545a20(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  int local_8;
  
  uVar4 = param_5;
  uVar1 = *(undefined4 *)(param_2 + 0x48);
  iVar5 = FUN_0055f390(*param_1,*(undefined4 *)(param_2 + 0x44),param_5,param_6);
  uVar3 = param_3;
  if (iVar5 == 0) {
    *(undefined4 *)(param_2 + 0x48) = uVar4;
    cVar7 = (char)param_3;
    local_8 = iVar5;
    if ((cVar7 == '\x05') || (cVar7 == '\x01')) {
      iVar6 = FUN_005489b0(param_2);
      iVar5 = 0;
      if (iVar6 != 0) {
        return iVar6;
      }
    }
    else {
      puVar2 = *(undefined1 **)(param_2 + 0x38);
      iVar6 = CONCAT31(CONCAT21(CONCAT11(*puVar2,puVar2[1]),puVar2[2]),puVar2[3]);
      if (iVar6 != 0) {
        FUN_00544760(param_1,iVar6,4,uVar4,&local_8);
        iVar5 = 0;
        if (local_8 != 0) {
          return local_8;
        }
      }
    }
    if ((cVar7 != '\x01') &&
       (iVar5 = FUN_0052e950(param_1,param_4,&param_2,0), iVar6 = param_2, iVar5 == 0)) {
      iVar5 = FUN_00560330(*(undefined4 *)(param_2 + 0x44));
      if (iVar5 != 0) {
        FUN_00545740(iVar6);
        return iVar5;
      }
      iVar5 = FUN_0053dee0(iVar6,uVar1,param_5,uVar3);
      local_8 = iVar5;
      FUN_00545740(iVar6);
      if (iVar5 == 0) {
        FUN_00544760(param_1,param_5,uVar3,param_4,&local_8);
        iVar5 = local_8;
      }
    }
  }
  return iVar5;
}


/* FUN_00545b50 @ 00545b50  kind=gamemisc  attributed-by=caller-vote  size=90 */

void FUN_00545b50(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  if ((int *)param_2[1] == (int *)0x0) {
    *(int *)(param_1 + 8) = *param_2;
  }
  else {
    *(int *)param_2[1] = *param_2;
  }
  if (*param_2 != 0) {
    *(int *)(*param_2 + 4) = param_2[1];
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 != 0) {
    piVar1 = (int *)(iVar2 + param_3 * 8);
    if (*(int **)(iVar2 + 4 + param_3 * 8) == param_2) {
      piVar1[1] = *param_2;
    }
    *piVar1 = *piVar1 + -1;
  }
  FUN_00524410(param_2);
  piVar1 = (int *)(param_1 + 4);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_0055ac70(param_1);
  }
  return;
}


/* FUN_00545bb0 @ 00545bb0  kind=gamemisc  attributed-by=caller-vote  size=144 */

undefined4 FUN_00545bb0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if (DAT_007665e4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (*DAT_00766628)(2);
    if (iVar3 != 0) {
      (*DAT_00766630)(iVar3);
    }
  }
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
  if (*(int *)(param_1 + 0x40) < 1) {
    iVar2 = DAT_0076b3c8;
    if (DAT_0076b3c8 == param_1) {
      DAT_0076b3c8 = *(int *)(param_1 + 0x44);
    }
    else {
      do {
        iVar1 = iVar2;
        if (iVar1 == 0) goto LAB_00545c16;
        iVar2 = *(int *)(iVar1 + 0x44);
      } while (*(int *)(iVar1 + 0x44) != param_1);
      *(undefined4 *)(iVar1 + 0x44) = *(undefined4 *)(param_1 + 0x44);
    }
LAB_00545c16:
    if (*(int *)(param_1 + 0x38) != 0) {
      (*DAT_0076662c)(*(int *)(param_1 + 0x38));
    }
    uVar4 = 1;
  }
  if (iVar3 != 0) {
    (*DAT_00766638)(iVar3);
  }
  return uVar4;
}


/* FUN_00545c40 @ 00545c40  kind=gamemisc  attributed-by=caller-vote  size=160 */

void FUN_00545c40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 local_f8;
  undefined1 *local_f4;
  undefined1 *local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 local_e0;
  undefined2 local_df;
  undefined1 local_dc [212];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_f4 = local_dc;
  local_f8 = 0;
  local_ec = 0;
  local_e8 = 0xd2;
  local_e4 = 0;
  local_df = 0;
  local_e0 = 0;
  local_f0 = local_f4;
  FUN_0056aa30(&local_f8,0,param_2,param_3);
  uVar1 = FUN_00567fb0(&local_f8);
  (*DAT_007666c4)(DAT_007666c8,param_1,uVar1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00546130 @ 00546130  kind=gamemisc  attributed-by=caller-vote  size=121 */

int FUN_00546130(undefined4 *param_1,char *param_2)

{
  int iVar1;
  code *local_18;
  code *local_14;
  int local_8;
  
  iVar1 = 0;
  if (param_2 != (char *)0x0) {
    if (*param_2 == '\x1a') {
      *param_2 = '^';
    }
    else {
      iVar1 = FUN_005640a0(param_1,param_2);
      if (iVar1 == 0) {
        local_8 = 1;
        local_18 = FUN_00536500;
        local_14 = FUN_00548960;
        FUN_00578680(&local_18,param_2);
        if (local_8 == 0) {
          FUN_00553950(*param_1,"invalid name: \"%s\"",*(undefined4 *)(param_2 + 4));
          return 1;
        }
      }
    }
  }
  return iVar1;
}


/* FUN_005472b0 @ 005472b0  kind=gamemisc  attributed-by=caller-vote  size=273 */

int FUN_005472b0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar4 = param_1;
  if (*(char *)(param_1 + 0x5b) == '\x01') {
    FUN_0053a7f0(param_1);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x2c);
  }
  else {
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  piVar1 = (int *)(param_1 + 0x88);
  piVar6 = (int *)(param_1 + 0x88);
  param_1 = 0;
  if (*(char *)(*piVar1 + 2) == '\0') {
    iVar5 = FUN_0055da00(*(undefined4 *)(iVar4 + 0x48));
    if (iVar5 == 0) {
      param_1 = 7;
      goto LAB_00547391;
    }
    param_1 = FUN_00528920(iVar4,0,*(undefined4 *)(iVar4 + 0x48),iVar5,0);
    if (param_1 != 0) {
      FUN_00524410(iVar5);
      goto LAB_00547391;
    }
    *(int *)(iVar4 + 0x50) = iVar5;
  }
  iVar5 = 0;
  if (*(ushort *)(iVar4 + 0x5e) < 0x8000) {
    do {
      if ((*piVar6 != 0) && (iVar2 = *(int *)(*piVar6 + 0x44), iVar2 != 0)) {
        iVar3 = *(int *)(iVar2 + 0x10);
        FUN_00561130(iVar2);
        if (*(int *)(*(int *)(iVar3 + 0xb4) + 0xc) == 0) {
          FUN_00541a10(iVar3);
        }
      }
      *piVar6 = 0;
      iVar5 = iVar5 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar5 <= *(short *)(iVar4 + 0x5e));
  }
  *(undefined2 *)(iVar4 + 0x5e) = 0xffff;
  *(undefined1 *)(iVar4 + 0x5b) = 2;
LAB_00547391:
  FUN_00524410(*(undefined4 *)(iVar4 + 0x14));
  *(undefined4 *)(iVar4 + 0x14) = 0;
  return param_1;
}


/* FUN_005473d0 @ 005473d0  kind=gamemisc  attributed-by=caller-vote  size=724 */

void FUN_005473d0(int *param_1)

{
  int *piVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  code *pcVar10;
  int iVar11;
  ushort uVar12;
  int iVar13;
  int local_10;
  int local_c;
  
  local_c = 0;
  iVar6 = *param_1;
  if (*(int *)(iVar6 + 0x14) < 1) {
    return;
  }
  local_10 = 0;
LAB_005473f7:
  iVar13 = 0;
  iVar7 = *(int *)(local_10 + 4 + *(int *)(iVar6 + 0x10));
  if (iVar7 != 0) {
    if (*(char *)(iVar7 + 8) == '\0') {
      iVar8 = *(int *)(iVar7 + 4);
      FUN_0054d260(iVar7);
      if ((*(char *)(iVar7 + 8) != '\x02') && (*(char *)(iVar7 + 8) != '\x01')) {
        if (((*(ushort *)(iVar8 + 0x16) & 0x40) == 0) || (**(int **)(iVar8 + 0x4c) == 0)) {
          iVar13 = *(int *)(iVar7 + 4);
          if (*(char *)(iVar7 + 9) == '\0') {
LAB_00547488:
            iVar13 = 0;
            uVar12 = *(ushort *)(iVar8 + 0x16) & 0xfff7;
            *(ushort *)(iVar8 + 0x16) = uVar12;
            if (*(int *)(iVar8 + 0x2c) == 0) {
              *(ushort *)(iVar8 + 0x16) = uVar12 | 8;
            }
LAB_005474a0:
            if (*(int *)(iVar8 + 0xc) == 0) goto code_r0x005474a6;
            if (iVar13 != 0) goto LAB_005474bb;
            goto LAB_005474f7;
          }
          if ((*(int *)(iVar13 + 0x4c) == iVar7) || ((*(byte *)(iVar13 + 0x16) & 0x20) == 0)) {
            for (piVar1 = *(int **)(iVar13 + 0x48); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[3])
            {
              if (((*piVar1 != iVar7) && (piVar1[1] == 1)) && ((char)piVar1[2] != '\x01'))
              goto LAB_00547443;
            }
            goto LAB_00547488;
          }
          iVar13 = 0x106;
        }
        else {
LAB_00547443:
          iVar13 = 0x106;
        }
      }
      goto LAB_00547568;
    }
    goto LAB_005475ac;
  }
  goto LAB_00547681;
code_r0x005474a6:
  iVar13 = FUN_0053d2a0(iVar8);
  if (iVar13 != 0) {
LAB_005474bb:
    if ((*(char *)(iVar8 + 0x13) == '\0') && (*(int *)(iVar8 + 0xc) != 0)) {
      iVar9 = *(int *)(*(int *)(iVar8 + 0xc) + 0x44);
      if (iVar9 != 0) {
        iVar11 = *(int *)(iVar9 + 0x10);
        FUN_00561130(iVar9);
        if (*(int *)(*(int *)(iVar11 + 0xb4) + 0xc) == 0) {
          FUN_00541a10(iVar11);
        }
      }
      *(undefined4 *)(iVar8 + 0xc) = 0;
    }
LAB_005474f7:
    if (((char)iVar13 != '\x05') || (*(char *)(iVar8 + 0x13) != '\0')) goto LAB_00547536;
    iVar9 = *(int *)(iVar8 + 4);
    if (((undefined4 *)(iVar9 + 0x1ac) == (undefined4 *)0x0) ||
       ((pcVar10 = *(code **)(iVar9 + 0x1ac), pcVar10 == (code *)0x0 ||
        (*(int *)(iVar9 + 0x1b4) < 0)))) goto LAB_00547536;
    iVar11 = (*pcVar10)(*(undefined4 *)(iVar9 + 0x1b0),*(int *)(iVar9 + 0x1b4));
    if (iVar11 == 0) goto LAB_0054752f;
    *(int *)(iVar9 + 0x1b4) = *(int *)(iVar9 + 0x1b4) + 1;
  }
  goto LAB_005474a0;
LAB_0054752f:
  *(undefined4 *)(iVar9 + 0x1b4) = 0xffffffff;
LAB_00547536:
  if (iVar13 == 0) {
    if ((*(char *)(iVar7 + 8) == '\0') &&
       (*(int *)(iVar8 + 0x28) = *(int *)(iVar8 + 0x28) + 1, *(char *)(iVar7 + 9) != '\0')) {
      *(undefined1 *)(iVar7 + 0x24) = 1;
      *(undefined4 *)(iVar7 + 0x28) = *(undefined4 *)(iVar8 + 0x48);
      *(int *)(iVar8 + 0x48) = iVar7 + 0x1c;
    }
    *(undefined1 *)(iVar7 + 8) = 1;
    if (*(char *)(iVar8 + 0x13) == '\0') {
      *(undefined1 *)(iVar8 + 0x13) = 1;
    }
  }
LAB_00547568:
  if (*(char *)(iVar7 + 9) != '\0') {
    piVar1 = (int *)(iVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      iVar8 = *(int *)(*(int *)(iVar7 + 4) + 0x38);
      if (iVar8 != 0) {
        (*DAT_00766638)(iVar8);
      }
      *(undefined1 *)(iVar7 + 10) = 0;
    }
  }
  if ((iVar13 == 7) || (iVar13 == 0xc0a)) {
    *(undefined1 *)(iVar6 + 0x38) = 1;
  }
  if (iVar13 != 0) {
    return;
  }
  iVar13 = 1;
LAB_005475ac:
  iVar8 = *(int *)(iVar7 + 4);
  FUN_0054d260(iVar7);
  iVar8 = *(int *)(*(int *)(iVar8 + 0xc) + 0x38);
  uVar2 = *(undefined1 *)(iVar8 + 0x28);
  uVar3 = *(undefined1 *)(iVar8 + 0x29);
  uVar4 = *(undefined1 *)(iVar8 + 0x2a);
  uVar5 = *(undefined1 *)(iVar8 + 0x2b);
  if (*(char *)(iVar7 + 9) != '\0') {
    piVar1 = (int *)(iVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      iVar8 = *(int *)(*(int *)(iVar7 + 4) + 0x38);
      if (iVar8 != 0) {
        (*DAT_00766638)(iVar8);
      }
      *(undefined1 *)(iVar7 + 10) = 0;
    }
  }
  piVar1 = *(int **)(local_10 + 0xc + *(int *)(iVar6 + 0x10));
  if (CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),uVar5) != *piVar1) {
    FUN_00565020(piVar1);
    if (local_c != 1) {
      FUN_00565020(*(undefined4 *)(*(int *)(iVar6 + 0x10) + 0x1c));
    }
    param_1[3] = 0x11;
  }
  if (iVar13 != 0) {
    FUN_0054d260(iVar7);
    iVar13 = FUN_0054c990(iVar7,0);
    if (iVar13 == 0) {
      FUN_0054ca30(iVar7,0);
    }
    if (*(char *)(iVar7 + 9) != '\0') {
      piVar1 = (int *)(iVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        iVar13 = *(int *)(*(int *)(iVar7 + 4) + 0x38);
        if (iVar13 != 0) {
          (*DAT_00766638)(iVar13);
        }
        *(undefined1 *)(iVar7 + 10) = 0;
      }
    }
  }
LAB_00547681:
  local_c = local_c + 1;
  local_10 = local_10 + 0x10;
  if (*(int *)(iVar6 + 0x14) <= local_c) {
    return;
  }
  goto LAB_005473f7;
}


/* FUN_005489b0 @ 005489b0  kind=gamemisc  attributed-by=caller-vote  size=355 */

int FUN_005489b0(undefined1 *param_1)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined1 local_34 [24];
  ushort local_1c;
  uint local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  uVar1 = *param_1;
  local_10 = *(undefined4 *)(param_1 + 0x48);
  local_c = uVar5;
  iVar2 = FUN_0052e9b0(param_1);
  if (iVar2 != 0) {
    *param_1 = uVar1;
    return iVar2;
  }
  local_14 = (uint)*(ushort *)(param_1 + 0x10);
  iVar2 = 0;
  local_8 = 0;
  if (local_14 != 0) {
    do {
      puVar4 = (undefined1 *)
               ((uint)(CONCAT11(*(undefined1 *)(*(int *)(param_1 + 0x40) + iVar2 * 2),
                                *(undefined1 *)(*(int *)(param_1 + 0x40) + 1 + iVar2 * 2)) &
                      *(ushort *)(param_1 + 0x12)) + *(int *)(param_1 + 0x38));
      if ((local_8 == 0) && (FUN_0052eda0(param_1,puVar4,local_34), local_1c != 0)) {
        uVar3 = (uint)local_1c;
        FUN_00544760(*(undefined4 *)(param_1 + 0x34),
                     CONCAT31(CONCAT21(CONCAT11(puVar4[uVar3],puVar4[uVar3 + 1]),puVar4[uVar3 + 2]),
                              puVar4[uVar3 + 3]),3,*(undefined4 *)(param_1 + 0x48),&local_8);
      }
      uVar5 = local_c;
      if (param_1[3] == '\0') {
        FUN_00544760(local_c,CONCAT31(CONCAT21(CONCAT11(*puVar4,puVar4[1]),puVar4[2]),puVar4[3]),5,
                     local_10,&local_8);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)local_14);
  }
  if (param_1[3] != '\0') {
    *param_1 = uVar1;
    return local_8;
  }
  iVar2 = (uint)(byte)param_1[5] + *(int *)(param_1 + 0x38);
  FUN_00544760(uVar5,CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar2 + 8),
                                                *(undefined1 *)(iVar2 + 9)),
                                       *(undefined1 *)(iVar2 + 10)),*(undefined1 *)(iVar2 + 0xb)),5,
               local_10,&local_8);
  *param_1 = uVar1;
  return local_8;
}


/* FUN_00548e20 @ 00548e20  kind=gamemisc  attributed-by=caller-vote  size=52 */

void FUN_00548e20(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0055eaf0(param_2,param_3,*param_4,*param_5,0);
  *param_1 = uVar1;
  param_1[1] = param_4[1];
  param_1[2] = param_5[2];
  return;
}


/* FUN_00548e60 @ 00548e60  kind=gamemisc  attributed-by=caller-vote  size=94 */

void FUN_00548e60(int *param_1,int *param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = FUN_00553bb0(*param_2,param_3,param_4,1);
  FUN_005540d0(*param_2,iVar1,0,0);
  if ((iVar1 != 0) && (*(int *)(*param_2 + 0x5c) < *(int *)(iVar1 + 0x14))) {
    FUN_00553950(param_2,"Expression tree is too large (maximum depth %d)",*(int *)(*param_2 + 0x5c)
                );
  }
  *param_1 = iVar1;
  param_1[1] = *param_4;
  param_1[2] = param_4[1] + *param_4;
  return;
}


/* FUN_00548ec0 @ 00548ec0  kind=gamemisc  attributed-by=caller-vote  size=139 */

void FUN_00548ec0(undefined4 *param_1,int *param_2,undefined1 param_3,undefined4 *param_4,
                 int *param_5)

{
  undefined4 uVar1;
  undefined1 *_Dst;
  
  uVar1 = *param_4;
  _Dst = (undefined1 *)FUN_00552230(*param_2,0x2c);
  if (_Dst != (undefined1 *)0x0) {
    memset(_Dst,0,0x2c);
    *_Dst = param_3;
    *(undefined2 *)(_Dst + 0x1e) = 0xffff;
    *(undefined4 *)(_Dst + 0x14) = 1;
  }
  FUN_005540d0(*param_2,_Dst,uVar1,0);
  if ((_Dst != (undefined1 *)0x0) && (*(int *)(*param_2 + 0x5c) < *(int *)(_Dst + 0x14))) {
    FUN_00553950(param_2,"Expression tree is too large (maximum depth %d)",*(int *)(*param_2 + 0x5c)
                );
  }
  *param_1 = _Dst;
  param_1[1] = param_4[1];
  param_1[2] = param_5[1] + *param_5;
  return;
}


/* FUN_00548f50 @ 00548f50  kind=gamemisc  attributed-by=caller-vote  size=136 */

void FUN_00548f50(undefined4 *param_1,int *param_2,undefined1 param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  undefined4 uVar1;
  undefined1 *_Dst;
  
  uVar1 = *param_4;
  _Dst = (undefined1 *)FUN_00552230(*param_2,0x2c);
  if (_Dst != (undefined1 *)0x0) {
    memset(_Dst,0,0x2c);
    *_Dst = param_3;
    *(undefined2 *)(_Dst + 0x1e) = 0xffff;
    *(undefined4 *)(_Dst + 0x14) = 1;
  }
  FUN_005540d0(*param_2,_Dst,uVar1,0);
  if ((_Dst != (undefined1 *)0x0) && (*(int *)(*param_2 + 0x5c) < *(int *)(_Dst + 0x14))) {
    FUN_00553950(param_2,"Expression tree is too large (maximum depth %d)",*(int *)(*param_2 + 0x5c)
                );
  }
  *param_1 = _Dst;
  param_1[1] = *param_5;
  param_1[2] = param_4[2];
  return;
}


/* FUN_00549000 @ 00549000  kind=gamemisc  attributed-by=caller-vote  size=94 */

void FUN_00549000(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1[0x7f];
  if ((iVar1 == 0) || (*(char *)((int)param_1 + 0x1d5) != '\0')) {
    FUN_00555e30(*param_1,param_2);
  }
  else {
    uVar2 = FUN_005565a0(param_1,*(undefined4 *)(iVar1 + 0x18),param_2);
    *(undefined4 *)(iVar1 + 0x18) = uVar2;
    if (param_1[0x68] != 0) {
      FUN_00556980(param_1,uVar2,param_1 + 0x67,1);
      return;
    }
  }
  return;
}


/* FUN_00549060 @ 00549060  kind=gamemisc  attributed-by=caller-vote  size=135 */

void FUN_00549060(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_1[0x7f];
  if (iVar1 != 0) {
    uVar2 = *param_1;
    iVar5 = *(short *)(iVar1 + 0x26) + -1;
    iVar3 = FUN_0055e3f0(uVar2,param_2);
    if (iVar3 != 0) {
      iVar4 = FUN_0055d6b0(param_1,iVar3);
      if (iVar4 == 0) {
        FUN_005521a0(uVar2,iVar3);
      }
      else {
        *(int *)(*(int *)(iVar1 + 4) + 0x10 + iVar5 * 0x18) = iVar3;
        iVar3 = *(int *)(iVar1 + 8);
        if (iVar3 != 0) {
          do {
            if (**(int **)(iVar3 + 4) == iVar5) {
              **(undefined4 **)(iVar3 + 0x20) =
                   *(undefined4 *)(*(int *)(iVar1 + 4) + 0x10 + iVar5 * 0x18);
            }
            iVar3 = *(int *)(iVar3 + 0x14);
          } while (iVar3 != 0);
          return;
        }
      }
    }
  }
  return;
}


/* FUN_005490f0 @ 005490f0  kind=gamemisc  attributed-by=caller-vote  size=317 */

void FUN_005490f0(int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  
  iVar2 = *param_1;
  puVar3 = (undefined4 *)param_1[0x7f];
  if (puVar3 != (undefined4 *)0x0) {
    if (*(int *)(iVar2 + 0x58) < *(short *)((int)puVar3 + 0x26) + 1) {
      FUN_00553950(param_1,"too many columns on %s",*puVar3);
      return;
    }
    pbVar4 = (byte *)FUN_0055e3f0(iVar2,param_2);
    if (pbVar4 != (byte *)0x0) {
      iVar5 = (int)*(short *)((int)puVar3 + 0x26);
      iVar7 = 0;
      if (0 < iVar5) {
        puVar6 = (undefined4 *)puVar3[1];
        cVar1 = (&DAT_007120d8)[*pbVar4];
        do {
          if ((cVar1 == (&DAT_007120d8)[*(byte *)*puVar6]) &&
             (iVar5 = FUN_0057a2c0(pbVar4 + 1,(byte *)*puVar6 + 1), iVar5 == 0)) {
            FUN_00553950(param_1,"duplicate column name: %s",pbVar4);
            FUN_005521a0(iVar2,pbVar4);
            return;
          }
          iVar5 = (int)*(short *)((int)puVar3 + 0x26);
          iVar7 = iVar7 + 1;
          puVar6 = puVar6 + 6;
        } while (iVar7 < iVar5);
      }
      if ((*(ushort *)((int)puVar3 + 0x26) & 7) == 0) {
        iVar5 = FUN_00552390(iVar2,puVar3[1],(iVar5 * 3 + 0x18) * 8);
        if (iVar5 == 0) {
          FUN_005521a0(iVar2,pbVar4);
          return;
        }
        puVar3[1] = iVar5;
      }
      iVar5 = (int)*(short *)((int)puVar3 + 0x26);
      iVar2 = puVar3[1];
      *(undefined8 *)(iVar2 + iVar5 * 0x18) = 0;
      *(undefined8 *)(iVar2 + 8 + iVar5 * 0x18) = 0;
      *(undefined8 *)(iVar2 + 0x10 + iVar5 * 0x18) = 0;
      *(byte **)(iVar2 + iVar5 * 0x18) = pbVar4;
      *(undefined1 *)(iVar2 + 0x15 + iVar5 * 0x18) = 0x62;
      *(short *)((int)puVar3 + 0x26) = *(short *)((int)puVar3 + 0x26) + 1;
    }
  }
  return;
}


/* FUN_00549230 @ 00549230  kind=gamemisc  attributed-by=caller-vote  size=67 */

void FUN_00549230(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  
  iVar1 = param_1[0x7f];
  if ((iVar1 != 0) && (0 < *(short *)(iVar1 + 0x26))) {
    iVar1 = *(int *)(iVar1 + 4) + *(short *)(iVar1 + 0x26) * 0x18;
    uVar3 = FUN_0055e3f0(*param_1,param_2);
    *(undefined4 *)(iVar1 + -0xc) = uVar3;
    uVar2 = FUN_00549610(uVar3);
    *(undefined1 *)(iVar1 + -3) = uVar2;
  }
  return;
}


/* FUN_00549280 @ 00549280  kind=gamemisc  attributed-by=caller-vote  size=249 */

void FUN_00549280(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  size_t _Size;
  void *_Dst;
  code *local_1c;
  code *local_18;
  int local_c;
  void *local_8;
  
  iVar1 = param_1[0x7f];
  uVar2 = *param_1;
  if (iVar1 != 0) {
    local_c = 2;
    iVar1 = *(int *)(iVar1 + 4) + *(short *)(iVar1 + 0x26) * 0x18;
    local_1c = FUN_00536500;
    local_18 = FUN_00548960;
    FUN_00578680(&local_1c,*param_2);
    if (local_c == 0) {
      FUN_00553950(param_1,"default value of column [%s] is not constant",
                   *(undefined4 *)(iVar1 + -0x18));
      FUN_00555e30(uVar2,*param_2);
      return;
    }
    FUN_00555e30(uVar2,*(undefined4 *)(iVar1 + -0x14));
    uVar3 = FUN_00536250(uVar2,*param_2,1,0);
    *(undefined4 *)(iVar1 + -0x14) = uVar3;
    FUN_005521a0(uVar2,*(undefined4 *)(iVar1 + -0x10));
    local_8 = (void *)param_2[1];
    _Size = param_2[2] - (int)local_8;
    if (local_8 == (void *)0x0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = (void *)FUN_00552230(uVar2,_Size + 1);
      if (_Dst != (void *)0x0) {
        memcpy(_Dst,local_8,_Size);
        *(undefined1 *)((int)_Dst + _Size) = 0;
      }
    }
    *(void **)(iVar1 + -0x10) = _Dst;
  }
  FUN_00555e30(uVar2,*param_2);
  return;
}


/* FUN_00549420 @ 00549420  kind=gamemisc  attributed-by=caller-vote  size=477 */

void FUN_00549420(undefined4 *param_1,int *param_2,undefined4 param_3,int param_4,int param_5)

{
  byte *pbVar1;
  ushort *puVar2;
  byte bVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  int iVar10;
  int local_c;
  int local_8;
  
  puVar4 = (undefined4 *)param_1[0x7f];
  iVar10 = -1;
  if ((puVar4 != (undefined4 *)0x0) && (*(char *)((int)param_1 + 0x1d5) == '\0')) {
    if ((*(byte *)((int)puVar4 + 0x2a) & 4) != 0) {
      FUN_00553950(param_1,"table \"%s\" has more than one primary key",*puVar4);
      goto LAB_0054945f;
    }
    *(byte *)((int)puVar4 + 0x2a) = *(byte *)((int)puVar4 + 0x2a) | 4;
    if (param_2 == (int *)0x0) {
      iVar10 = *(short *)((int)puVar4 + 0x26) + -1;
      puVar2 = (ushort *)(puVar4[1] + 0x16 + iVar10 * 0x18);
      *puVar2 = *puVar2 | 1;
    }
    else {
      local_8 = 0;
      if (0 < *param_2) {
        local_c = 0;
        do {
          iVar7 = (int)*(short *)((int)puVar4 + 0x26);
          iVar10 = 0;
          if (0 < iVar7) {
            puVar8 = (undefined4 *)puVar4[1];
            pbVar5 = *(byte **)(param_2[2] + 4 + local_c);
            do {
              pbVar9 = (byte *)*puVar8;
              bVar3 = *pbVar5;
              pbVar6 = pbVar5;
              while ((bVar3 != 0 && ((&DAT_007120d8)[bVar3] == (&DAT_007120d8)[*pbVar9]))) {
                pbVar1 = pbVar6 + 1;
                pbVar6 = pbVar6 + 1;
                pbVar9 = pbVar9 + 1;
                bVar3 = *pbVar1;
              }
              if ((&DAT_007120d8)[*pbVar6] == (&DAT_007120d8)[*pbVar9]) break;
              iVar10 = iVar10 + 1;
              puVar8 = puVar8 + 6;
            } while (iVar10 < iVar7);
          }
          if (iVar10 < iVar7) {
            puVar2 = (ushort *)(puVar4[1] + 0x16 + iVar10 * 0x18);
            *puVar2 = *puVar2 | 1;
          }
          local_8 = local_8 + 1;
          local_c = local_c + 0x14;
        } while (local_8 < *param_2);
      }
      if (1 < *param_2) goto LAB_005495aa;
    }
    if ((((iVar10 < 0) || (*(short *)((int)puVar4 + 0x26) <= iVar10)) ||
        (iVar7 = *(int *)(puVar4[1] + 0xc + iVar10 * 0x18), iVar7 == 0)) ||
       ((iVar7 = FUN_0057a2c0(iVar7,"INTEGER"), iVar7 != 0 || (param_5 != 0)))) {
LAB_005495aa:
      if (param_4 != 0) {
        FUN_00553950(param_1,"AUTOINCREMENT is only allowed on an INTEGER PRIMARY KEY");
        FUN_00556700(*param_1,param_2);
        return;
      }
      iVar10 = FUN_00551790(param_1,0,0,0,param_2,param_3,0,0,param_5,0);
      if (iVar10 != 0) {
        *(undefined1 *)(iVar10 + 0x2d) = 2;
      }
      FUN_00556700(*param_1,0);
      return;
    }
    *(undefined1 *)((int)puVar4 + 0x2b) = (undefined1)param_3;
    *(byte *)((int)puVar4 + 0x2a) = *(byte *)((int)puVar4 + 0x2a) | (char)param_4 << 3;
    *(short *)(puVar4 + 9) = (short)iVar10;
  }
LAB_0054945f:
  FUN_00556700(*param_1,param_2);
  return;
}


/* FUN_00549610 @ 00549610  kind=gamemisc  attributed-by=caller-vote  size=188 */

char FUN_00549610(byte *param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = 0;
  cVar1 = 'c';
  if ((param_1 == (byte *)0x0) || (bVar2 = *param_1, bVar2 == 0)) {
    return cVar1;
  }
  do {
    uVar3 = uVar3 * 0x100 + (uint)(byte)(&DAT_007120d8)[bVar2];
    param_1 = param_1 + 1;
    if (uVar3 == 0x63686172) {
      cVar1 = 'a';
    }
    else if (uVar3 == 0x636c6f62) {
      cVar1 = 'a';
    }
    else if (uVar3 == 0x74657874) {
      cVar1 = 'a';
    }
    else if (uVar3 == 0x626c6f62) {
      if ((cVar1 != 'c') && (cVar1 != 'e')) goto LAB_005496aa;
      cVar1 = 'b';
    }
    else if (uVar3 == 0x7265616c) {
      if (cVar1 != 'c') goto LAB_005496aa;
      cVar1 = 'e';
    }
    else if (uVar3 == 0x666c6f61) {
      if (cVar1 == 'c') {
        cVar1 = 'e';
      }
      else {
LAB_005496aa:
        if ((uVar3 & 0xffffff) == 0x696e74) {
          return 'd';
        }
      }
    }
    else {
      if ((uVar3 != 0x646f7562) || (cVar1 != 'c')) goto LAB_005496aa;
      cVar1 = 'e';
    }
    bVar2 = *param_1;
    if (bVar2 == 0) {
      return cVar1;
    }
  } while( true );
}


/* FUN_00549fd0 @ 00549fd0  kind=gamemisc  attributed-by=caller-vote  size=319 */

void FUN_00549fd0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_8;
  
  iVar1 = *param_1;
  if ((*(char *)(iVar1 + 0x81) == '\0') && (iVar2 = FUN_0055b460(iVar1,param_1 + 1), iVar2 != 0)) {
    param_1[0x11] = param_1[0x11] + 1;
    param_1[3] = iVar2;
    return;
  }
  if (param_2 == 0) {
    iVar2 = 0;
    if (*(int *)(iVar1 + 0x14) < 1) {
      return;
    }
    do {
      if (iVar2 != 1) {
        FUN_0052a0c0(param_1,iVar2);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(iVar1 + 0x14));
    return;
  }
  if (*(int *)(param_3 + 4) == 0) {
    uVar3 = FUN_0055e3f0(iVar1,param_2);
    iVar2 = FUN_00556be0(iVar1,uVar3);
    FUN_005521a0(iVar1,uVar3);
    if (-1 < iVar2) {
      FUN_0052a0c0(param_1,iVar2);
      return;
    }
    iVar2 = FUN_0055e3f0(iVar1,param_2);
    if (iVar2 == 0) {
      return;
    }
    iVar4 = FUN_00557190(iVar1,iVar2,0);
    if (iVar4 != 0) goto LAB_0054a094;
    uVar3 = 0;
LAB_0054a0e2:
    iVar5 = FUN_0055d730(param_1,0,iVar2,uVar3);
    if (iVar5 == 0) goto LAB_0054a0fe;
    iVar4 = 0;
  }
  else {
    iVar2 = FUN_00568810(param_1,param_2,param_3,&local_8);
    if (iVar2 < 0) {
      return;
    }
    uVar3 = *(undefined4 *)(*(int *)(iVar1 + 0x10) + iVar2 * 0x10);
    iVar2 = FUN_0055e3f0(iVar1,local_8);
    if (iVar2 == 0) {
      return;
    }
    iVar4 = FUN_00557190(iVar1,iVar2,uVar3);
    if (iVar4 == 0) goto LAB_0054a0e2;
LAB_0054a094:
    iVar5 = *(int *)(iVar4 + 0xc);
  }
  FUN_0052b4f0(param_1,iVar5,iVar4);
LAB_0054a0fe:
  FUN_005521a0(iVar1,iVar2);
  return;
}


/* FUN_0054a110 @ 0054a110  kind=gamemisc  attributed-by=caller-vote  size=70 */

uint FUN_0054a110(int param_1,uint param_2)

{
  if (param_1 != 0) {
    if ((*(char *)(param_1 + 0x38) != '\0') || (param_2 == 0xc0a)) {
      FUN_00553890(param_1,7,0);
      *(undefined1 *)(param_1 + 0x38) = 0;
      param_2 = 7;
    }
    return param_2 & *(uint *)(param_1 + 0x30);
  }
  return param_2 & 0xff;
}


/* FUN_0054a160 @ 0054a160  kind=gamemisc  attributed-by=caller-vote  size=325 */

void FUN_0054a160(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  size_t _Size;
  
  if (0x1c < (int)param_2) {
    uVar5 = param_2 / 0x1d;
    param_2 = param_2 % 0x1d;
    do {
      _Size = 0x1d;
      if (*(char *)((int)param_1 + 0x1a) != '\0' || *(char *)(param_1 + 6) != '\0')
      goto LAB_0054a1d9;
      uVar1 = param_1[3];
      if ((int)(uVar1 + 0x1d) < (int)param_1[4]) {
LAB_0054a1c1:
        memcpy((void *)(param_1[2] + param_1[3]),"                             ",_Size);
        param_1[3] = param_1[3] + _Size;
      }
      else if (*(char *)((int)param_1 + 0x19) == '\0') {
        _Size = (param_1[4] - uVar1) - 1;
        *(undefined1 *)((int)param_1 + 0x1a) = 1;
        if (0 < (int)_Size) goto LAB_0054a1c1;
      }
      else {
        iVar2 = param_1[2];
        if (iVar2 == param_1[1]) {
          iVar2 = 0;
        }
        uVar6 = uVar1 + 0x1e;
        iVar4 = (int)param_1[5] >> 0x1f;
        iVar3 = ((int)uVar1 >> 0x1f) + (uint)(0xffffffe1 < uVar1);
        if ((iVar3 < iVar4) || ((iVar3 <= iVar4 && (uVar6 <= (uint)param_1[5])))) {
          param_1[4] = uVar6;
          if (*(char *)((int)param_1 + 0x19) == '\x01') {
            _Dst = (void *)FUN_00552390(*param_1,iVar2,uVar6);
LAB_0054a265:
            if (_Dst != (void *)0x0) {
              if ((iVar2 == 0) && (0 < (int)param_1[3])) {
                memcpy(_Dst,(void *)param_1[2],param_1[3]);
              }
              param_1[2] = _Dst;
              goto LAB_0054a1c1;
            }
          }
          else {
            iVar3 = FUN_00579f80();
            if (iVar3 == 0) {
              _Dst = (void *)FUN_00563800(iVar2,uVar6);
              goto LAB_0054a265;
            }
          }
          *(undefined1 *)(param_1 + 6) = 1;
          FUN_00568030(param_1);
        }
        else {
          FUN_00568030(param_1);
          *(undefined1 *)((int)param_1 + 0x1a) = 1;
        }
      }
LAB_0054a1d9:
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (0 < (int)param_2) {
    FUN_00567e70(param_1,"                             ",param_2);
  }
  return;
}


/* FUN_0054a2b0 @ 0054a2b0  kind=gamemisc  attributed-by=caller-vote  size=115 */

int FUN_0054a2b0(undefined4 param_1,int param_2,size_t param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *param_4;
  iVar2 = param_2;
  if ((uVar1 & uVar1 - 1) == 0) {
    iVar2 = 1;
    if (uVar1 != 0) {
      iVar2 = uVar1 * 2;
    }
    iVar2 = FUN_00552390(param_1,param_2,iVar2 * param_3);
    if (iVar2 == 0) {
      *param_5 = 0xffffffff;
      return param_2;
    }
  }
  memset((void *)(uVar1 * param_3 + iVar2),0,param_3);
  *param_5 = uVar1;
  *param_4 = *param_4 + 1;
  return iVar2;
}


/* FUN_0054ab50 @ 0054ab50  kind=gamemisc  attributed-by=caller-vote  size=135 */

int FUN_0054ab50(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (((*(char *)(iVar1 + 0x81) == '\0') && (*(char *)((int)param_1 + 0x1d5) == '\0')) &&
     (*(code **)(iVar1 + 0x10c) != (code *)0x0)) {
    iVar1 = (**(code **)(iVar1 + 0x10c))
                      (*(undefined4 *)(iVar1 + 0x110),param_2,param_3,param_4,param_5,param_1[0x81])
    ;
    if (iVar1 == 1) {
      FUN_00553950(param_1,"not authorized");
      param_1[3] = 0x17;
      return 1;
    }
    if ((iVar1 != 0) && (iVar1 != 2)) {
      iVar1 = 1;
      FUN_0057a3f0(param_1);
    }
    return iVar1;
  }
  return 0;
}


/* FUN_0054b6e0 @ 0054b6e0  kind=gamemisc  attributed-by=caller-vote  size=110 */

void FUN_0054b6e0(int *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  
  for (; param_1 != (int *)0x0; param_1 = (int *)param_1[0xb]) {
    iVar1 = param_1[7];
    if ((((iVar1 == 0) || (iVar1 == 5)) || (iVar1 == 6)) && (param_2 < (uint)param_1[4])) {
      if (*(int *)(*param_1 + 0xc) != 0) {
        (*DAT_00766630)(*(int *)(*param_1 + 0xc));
      }
      iVar1 = FUN_0052ba20(param_1,param_2,param_3);
      if (*(int *)(*param_1 + 0xc) != 0) {
        (*DAT_00766638)(*(int *)(*param_1 + 0xc));
      }
      if (iVar1 != 0) {
        param_1[7] = iVar1;
      }
    }
  }
  return;
}


/* FUN_0054c040 @ 0054c040  kind=gamemisc  attributed-by=caller-vote  size=187 */

void FUN_0054c040(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 8) != 0) {
      puVar1 = (undefined4 *)(param_1 + 0xc);
      iVar2 = 0x7d;
      do {
        FUN_0054c040(*puVar1);
        puVar1 = puVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (DAT_007665e0 == 0) {
      (*DAT_00766604)(param_1);
    }
    else {
      if (DAT_0076b488 != 0) {
        (*DAT_00766630)(DAT_0076b488);
      }
      iVar2 = (*DAT_00766608._4_4_)(param_1);
      DAT_0076b360 = DAT_0076b360 - iVar2;
      if (DAT_0076b388 < DAT_0076b360) {
        DAT_0076b388 = DAT_0076b360;
      }
      DAT_0076b384 = DAT_0076b384 + -1;
      if (DAT_0076b3ac < DAT_0076b384) {
        DAT_0076b3ac = DAT_0076b384;
      }
      (*DAT_00766604)(param_1);
      if (DAT_0076b488 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0054c0e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*DAT_00766638)();
        return;
      }
    }
  }
  return;
}


/* FUN_0054c100 @ 0054c100  kind=gamemisc  attributed-by=caller-vote  size=468 */

uint FUN_0054c100(uint *param_1,uint param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  param_2 = param_2 - 1;
  puVar7 = param_1;
  if (*param_1 < 0xfa1) {
LAB_0054c2bc:
    pbVar1 = (byte *)((param_2 >> 3) + 0xc + (int)puVar7);
    *pbVar1 = *pbVar1 | '\x01' << ((byte)param_2 & 7);
    return 0;
  }
  do {
    uVar3 = puVar7[2];
    if (uVar3 == 0) break;
    uVar2 = param_2 / uVar3;
    param_2 = param_2 % uVar3;
    if (puVar7[uVar2 + 3] == 0) {
      if (DAT_007665e0 == 0) {
        param_1 = (uint *)(*DAT_00766600)(0x200);
      }
      else {
        if (DAT_0076b488 != 0) {
          (*DAT_00766630)(DAT_0076b488);
        }
        FUN_0053dcf0(0x200,&param_1);
        if (DAT_0076b488 != 0) {
          (*DAT_00766638)(DAT_0076b488);
        }
      }
      puVar5 = param_1;
      if (param_1 != (uint *)0x0) {
        memset(param_1,0,0x200);
        *puVar5 = uVar3;
      }
      puVar7[uVar2 + 3] = (uint)puVar5;
      if (puVar5 == (uint *)0x0) {
        return 7;
      }
    }
    puVar7 = (uint *)puVar7[uVar2 + 3];
  } while (4000 < *puVar7);
  if (*puVar7 < 0xfa1) goto LAB_0054c2bc;
  uVar2 = param_2 % 0x7d;
  param_2 = param_2 + 1;
  uVar3 = puVar7[uVar2 + 3];
  if (uVar3 == 0) {
    uVar3 = puVar7[1];
    if (uVar3 < 0x7c) goto LAB_0054c200;
  }
  else {
    do {
      if (uVar3 == param_2) {
        return 0;
      }
      uVar2 = uVar2 + 1 & -(uint)(uVar2 + 1 < 0x7d);
      uVar3 = puVar7[uVar2 + 3];
    } while (uVar3 != 0);
  }
  uVar3 = puVar7[1];
  if (0x3d < uVar3) {
    param_1 = (uint *)FUN_0055da00(500);
    if (param_1 == (uint *)0x0) {
      return 7;
    }
    puVar5 = puVar7 + 3;
    puVar8 = param_1;
    for (iVar6 = 0x7d; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    memset(puVar7 + 3,0,500);
    puVar7[2] = (*puVar7 + 0x7c) / 0x7d;
    uVar3 = FUN_0054c100(puVar7,param_2);
    uVar2 = 0;
    puVar5 = param_1;
    do {
      if (puVar5[uVar2] != 0) {
        uVar4 = FUN_0054c100(puVar7,puVar5[uVar2]);
        uVar3 = uVar3 | uVar4;
        puVar5 = param_1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x7d);
    FUN_00524410(puVar5);
    return uVar3;
  }
LAB_0054c200:
  puVar7[1] = uVar3 + 1;
  puVar7[uVar2 + 3] = param_2;
  return 0;
}


/* FUN_0054c2e0 @ 0054c2e0  kind=gamemisc  attributed-by=caller-vote  size=185 */

bool FUN_0054c2e0(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (uint *)0x0) {
    return false;
  }
  if ((param_2 <= *param_1) && (param_2 != 0)) {
    param_2 = param_2 - 1;
    uVar1 = param_1[2];
    while( true ) {
      if (uVar1 == 0) {
        if (*param_1 < 0xfa1) {
          return (*(byte *)((param_2 >> 3) + 0xc + (int)param_1) & (byte)(1 << ((byte)param_2 & 7)))
                 != 0;
        }
        uVar2 = param_2 % 0x7d;
        uVar1 = param_1[uVar2 + 3];
        while( true ) {
          if (uVar1 == 0) {
            return false;
          }
          if (uVar1 == param_2 + 1) break;
          uVar2 = (uVar2 + 1) % 0x7d;
          uVar1 = param_1[uVar2 + 3];
        }
        return true;
      }
      uVar1 = param_2 / param_1[2];
      param_2 = param_2 % param_1[2];
      param_1 = (uint *)param_1[uVar1 + 3];
      if (param_1 == (uint *)0x0) break;
      uVar1 = param_1[2];
    }
  }
  return false;
}


/* FUN_0054c710 @ 0054c710  kind=gamemisc  attributed-by=caller-vote  size=223 */

undefined4 FUN_0054c710(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  FUN_0054d260(param_1);
  piVar2 = (int *)puVar1[2];
  while (piVar3 = piVar2, piVar3 != (int *)0x0) {
    piVar2 = (int *)piVar3[2];
    if (*piVar3 == param_1) {
      FUN_0054c7f0(piVar3);
    }
  }
  FUN_0054ed50(param_1,0);
  if (*(char *)(param_1 + 9) != '\0') {
    piVar2 = (int *)(param_1 + 0xc);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x38);
      if (iVar4 != 0) {
        (*DAT_00766638)(iVar4);
      }
      *(undefined1 *)(param_1 + 10) = 0;
    }
    if ((*(char *)(param_1 + 9) != '\0') && (iVar4 = FUN_00545bb0(puVar1), iVar4 == 0))
    goto LAB_0054c7c5;
  }
  FUN_0055ee50(*puVar1);
  if (((code *)puVar1[0xd] != (code *)0x0) && (puVar1[0xc] != 0)) {
    (*(code *)puVar1[0xd])(puVar1[0xc]);
  }
  FUN_00524410(puVar1[0xc]);
  FUN_00544190(puVar1[0x14]);
  puVar1[0x14] = 0;
  FUN_00524410(puVar1);
LAB_0054c7c5:
  if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x14) = *(undefined4 *)(param_1 + 0x14);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x18) = *(undefined4 *)(param_1 + 0x18);
  }
  FUN_00524410(param_1);
  return 0;
}


/* FUN_0054c7f0 @ 0054c7f0  kind=gamemisc  attributed-by=caller-vote  size=307 */

undefined4 FUN_0054c7f0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    iVar2 = param_1[1];
    FUN_0054d260(iVar1);
    FUN_00524410(param_1[0x14]);
    param_1[0x14] = 0;
    *(undefined1 *)((int)param_1 + 0x5b) = 0;
    if (param_1[3] == 0) {
      *(int *)(iVar2 + 8) = param_1[2];
    }
    else {
      *(int *)(param_1[3] + 8) = param_1[2];
    }
    if (param_1[2] != 0) {
      *(int *)(param_1[2] + 0xc) = param_1[3];
    }
    if (*(ushort *)((int)param_1 + 0x5e) < 0x8000) {
      piVar6 = param_1 + 0x22;
      iVar5 = 0;
      do {
        if ((*piVar6 != 0) && (iVar3 = *(int *)(*piVar6 + 0x44), iVar3 != 0)) {
          iVar4 = *(int *)(iVar3 + 0x10);
          FUN_00561130(iVar3);
          if (*(int *)(*(int *)(iVar4 + 0xb4) + 0xc) == 0) {
            FUN_00541a10(iVar4);
          }
        }
        iVar5 = iVar5 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar5 <= *(short *)((int)param_1 + 0x5e));
    }
    if ((*(char *)(iVar2 + 0x13) == '\0') && (*(int *)(iVar2 + 0xc) != 0)) {
      iVar5 = *(int *)(*(int *)(iVar2 + 0xc) + 0x44);
      if (iVar5 != 0) {
        iVar3 = *(int *)(iVar5 + 0x10);
        FUN_00561130(iVar5);
        if (*(int *)(*(int *)(iVar3 + 0xb4) + 0xc) == 0) {
          FUN_00541a10(iVar3);
        }
      }
      *(undefined4 *)(iVar2 + 0xc) = 0;
    }
    FUN_00524410(param_1[5]);
    param_1[5] = 0;
    if (*(char *)(iVar1 + 9) != '\0') {
      piVar6 = (int *)(iVar1 + 0xc);
      *piVar6 = *piVar6 + -1;
      if (*piVar6 == 0) {
        iVar2 = *(int *)(*(int *)(iVar1 + 4) + 0x38);
        if (iVar2 != 0) {
          (*DAT_00766638)(iVar2);
        }
        *(undefined1 *)(iVar1 + 10) = 0;
      }
    }
  }
  return 0;
}


/* FUN_0054c990 @ 0054c990  kind=gamemisc  attributed-by=caller-vote  size=151 */

int FUN_0054c990(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*(char *)(param_1 + 8) == '\x02') {
    puVar2 = *(undefined4 **)(param_1 + 4);
    FUN_0054d260(param_1);
    if (*(char *)((int)puVar2 + 0x11) != '\0') {
      iVar4 = FUN_0052b7f0(puVar2);
      if (iVar4 != 0) {
        if (*(char *)(param_1 + 9) != '\0') {
          piVar1 = (int *)(param_1 + 0xc);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x38);
            if (iVar3 != 0) {
              (*DAT_00766638)(iVar3);
            }
            *(undefined1 *)(param_1 + 10) = 0;
          }
        }
        return iVar4;
      }
    }
    iVar4 = FUN_0055f050(*puVar2,param_2,0);
    if (*(char *)(param_1 + 9) != '\0') {
      piVar1 = (int *)(param_1 + 0xc);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x38);
        if (iVar3 != 0) {
          (*DAT_00766638)(iVar3);
        }
        *(undefined1 *)(param_1 + 10) = 0;
      }
    }
  }
  return iVar4;
}


/* FUN_0054ca30 @ 0054ca30  kind=gamemisc  attributed-by=caller-vote  size=131 */

int FUN_0054ca30(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 8) == '\0') {
    return 0;
  }
  FUN_0054d260(param_1);
  if (*(char *)(param_1 + 8) == '\x02') {
    puVar2 = *(undefined4 **)(param_1 + 4);
    iVar3 = FUN_0055f260(*puVar2);
    if ((iVar3 != 0) && (param_2 == 0)) {
      FUN_0054ddf0(param_1);
      return iVar3;
    }
    *(undefined1 *)((int)puVar2 + 0x13) = 1;
  }
  FUN_0052e890(param_1);
  if (*(char *)(param_1 + 9) != '\0') {
    piVar1 = (int *)(param_1 + 0xc);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x38);
      if (iVar3 != 0) {
        (*DAT_00766638)(iVar3);
      }
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  return 0;
}


/* FUN_0054d260 @ 0054d260  kind=gamemisc  attributed-by=caller-vote  size=210 */

void FUN_0054d260(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if ((*(char *)((int)param_1 + 9) != '\0') &&
     (param_1[3] = param_1[3] + 1, *(char *)((int)param_1 + 10) == '\0')) {
    if ((*(int *)(param_1[1] + 0x38) == 0) ||
       (iVar3 = (*DAT_00766634)(*(int *)(param_1[1] + 0x38)), iVar3 == 0)) {
      *(undefined4 *)(param_1[1] + 4) = *param_1;
      *(undefined1 *)((int)param_1 + 10) = 1;
      return;
    }
    for (iVar3 = param_1[5]; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x14)) {
      if (*(char *)(iVar3 + 10) != '\0') {
        iVar1 = *(int *)(*(int *)(iVar3 + 4) + 0x38);
        if (iVar1 != 0) {
          (*DAT_00766638)(iVar1);
        }
        *(undefined1 *)(iVar3 + 10) = 0;
      }
    }
    if (*(int *)(param_1[1] + 0x38) != 0) {
      (*DAT_00766630)(*(int *)(param_1[1] + 0x38));
    }
    *(undefined4 *)(param_1[1] + 4) = *param_1;
    puVar2 = (undefined4 *)param_1[5];
    *(undefined1 *)((int)param_1 + 10) = 1;
    for (; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)puVar2[5]) {
      if (puVar2[3] != 0) {
        if (*(int *)(puVar2[1] + 0x38) != 0) {
          (*DAT_00766630)(*(int *)(puVar2[1] + 0x38));
        }
        *(undefined4 *)(puVar2[1] + 4) = *puVar2;
        *(undefined1 *)((int)puVar2 + 10) = 1;
      }
    }
  }
  return;
}


/* FUN_0054d340 @ 0054d340  kind=gamemisc  attributed-by=caller-vote  size=283 */

void FUN_0054d340(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  if (0 < *(int *)(param_1 + 0x14)) {
    local_8 = 0;
    iVar5 = 0;
    do {
      puVar1 = *(undefined4 **)(local_8 + 4 + *(int *)(param_1 + 0x10));
      if (((puVar1 != (undefined4 *)0x0) && (*(char *)((int)puVar1 + 9) != '\0')) &&
         (puVar1[3] = puVar1[3] + 1, *(char *)((int)puVar1 + 10) == '\0')) {
        if ((*(int *)(puVar1[1] + 0x38) == 0) ||
           (iVar4 = (*DAT_00766634)(*(int *)(puVar1[1] + 0x38)), iVar4 == 0)) {
          *(undefined4 *)(puVar1[1] + 4) = *puVar1;
          *(undefined1 *)((int)puVar1 + 10) = 1;
        }
        else {
          for (iVar4 = puVar1[5]; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x14)) {
            if (*(char *)(iVar4 + 10) != '\0') {
              iVar2 = *(int *)(*(int *)(iVar4 + 4) + 0x38);
              if (iVar2 != 0) {
                (*DAT_00766638)(iVar2);
              }
              *(undefined1 *)(iVar4 + 10) = 0;
            }
          }
          if (*(int *)(puVar1[1] + 0x38) != 0) {
            (*DAT_00766630)(*(int *)(puVar1[1] + 0x38));
          }
          *(undefined4 *)(puVar1[1] + 4) = *puVar1;
          puVar3 = (undefined4 *)puVar1[5];
          *(undefined1 *)((int)puVar1 + 10) = 1;
          for (; puVar3 != (undefined4 *)0x0; puVar3 = (undefined4 *)puVar3[5]) {
            if (puVar3[3] != 0) {
              if (*(int *)(puVar3[1] + 0x38) != 0) {
                (*DAT_00766630)(*(int *)(puVar3[1] + 0x38));
              }
              *(undefined4 *)(puVar3[1] + 4) = *puVar3;
              *(undefined1 *)((int)puVar3 + 10) = 1;
            }
          }
        }
      }
      iVar5 = iVar5 + 1;
      local_8 = local_8 + 0x10;
    } while (iVar5 < *(int *)(param_1 + 0x14));
  }
  return;
}


/* FUN_0054ddf0 @ 0054ddf0  kind=gamemisc  attributed-by=caller-vote  size=45 */

void FUN_0054ddf0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 9) != '\0') {
    piVar1 = (int *)(param_1 + 0xc);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x38);
      if (iVar2 != 0) {
        (*DAT_00766638)(iVar2);
      }
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  return;
}


/* FUN_0054de20 @ 0054de20  kind=gamemisc  attributed-by=caller-vote  size=81 */

void FUN_0054de20(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar4 = 0;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 4 + iVar4);
      if ((iVar2 != 0) && (*(char *)(iVar2 + 9) != '\0')) {
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
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar5 < *(int *)(param_1 + 0x14));
  }
  return;
}


/* FUN_0054ed50 @ 0054ed50  kind=gamemisc  attributed-by=caller-vote  size=594 */

int FUN_0054ed50(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *local_c;
  int *local_8;
  
  iVar2 = param_2;
  iVar1 = param_1;
  piVar4 = *(int **)(param_1 + 4);
  local_8 = piVar4;
  FUN_0054d260(param_1);
  if (param_2 == 0) {
    for (iVar3 = piVar4[2]; iVar3 != 0; iVar3 = *(int *)(iVar3 + 8)) {
      if ((*(char *)(iVar3 + 0x5b) == '\x01') &&
         (iVar2 = FUN_005472b0(iVar3), param_2 = iVar2, iVar2 != 0)) goto LAB_0054eda1;
    }
    iVar2 = 0;
    param_2 = iVar2;
  }
  else {
    param_2 = 0;
  }
LAB_0054eda1:
  if (iVar2 != 0) {
    FUN_0054f600(param_1,iVar2);
  }
  if (*(char *)(param_1 + 8) != '\x02') goto LAB_0054ef6c;
  iVar2 = FUN_0055fbc0(*piVar4);
  if (iVar2 != 0) {
    param_2 = iVar2;
  }
  iVar2 = *piVar4;
  param_1 = *(int *)(iVar2 + 0x28);
  if ((param_1 == 0) &&
     (param_1 = FUN_00560e90(*(undefined4 *)(iVar2 + 0xb4),1,1,&local_c), iVar3 = DAT_007666d0,
     param_1 == 0)) {
    if (local_c[4] != 0) {
      *(int *)(iVar2 + 0xa0) = *(int *)(iVar2 + 0xa0) + 1;
      goto LAB_0054eeda;
    }
    local_c[4] = iVar2;
    if (iVar3 / (int)*(size_t *)(iVar2 + 0x80) == 0) {
      FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xa5a2,
                   "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
      param_1 = 0xb;
LAB_0054ee88:
      if ((*(byte *)(local_c + 6) & 2) != 0) {
        FUN_00544570(local_c);
      }
      iVar3 = local_c[7];
      *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + -1;
      if (local_c[5] == 1) {
        *(undefined4 *)(iVar3 + 0x2c) = 0;
      }
      (*DAT_00766664)(*(undefined4 *)(iVar3 + 0x28),*local_c,1);
      goto LAB_0054eeba;
    }
    if (((*(char *)(iVar2 + 0xe) == '\0') && (*(int *)(iVar2 + 0x18) != 0)) &&
       (**(int **)(iVar2 + 0x3c) != 0)) {
      *(int *)(iVar2 + 0xa4) = *(int *)(iVar2 + 0xa4) + 1;
      param_1 = FUN_00544d80(local_c);
      if (param_1 != 0) goto LAB_0054ee88;
    }
    else {
      if (*(int *)(iVar2 + 0x84) == 0) {
        param_1 = 0xd;
        goto LAB_0054ee88;
      }
      memset((void *)local_c[1],0,*(size_t *)(iVar2 + 0x80));
    }
LAB_0054eeda:
    piVar4 = local_8;
    iVar2 = local_c[2];
    iVar3 = local_c[1];
    *(int *)(iVar2 + 0x38) = iVar3;
    *(undefined4 **)(iVar2 + 0x44) = local_c;
    *(int **)(iVar2 + 0x34) = local_8;
    *(undefined4 *)(iVar2 + 0x48) = 1;
    *(undefined1 *)(iVar2 + 5) = 100;
    iVar3 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar3 + 0x1c),*(undefined1 *)(iVar3 + 0x1d)),
                              *(undefined1 *)(iVar3 + 0x1e)),*(undefined1 *)(iVar3 + 0x1f));
    if (iVar3 == 0) {
      iVar3 = *(int *)(*local_8 + 0x18);
    }
    local_8[0xb] = iVar3;
    iVar2 = *(int *)(iVar2 + 0x44);
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + 0x10);
      FUN_00561130(iVar2);
      if (*(int *)(*(int *)(iVar3 + 0xb4) + 0xc) == 0) {
        FUN_00541a10(iVar3);
      }
    }
  }
  else {
LAB_0054eeba:
    if (*(int *)(*(int *)(iVar2 + 0xb4) + 0xc) == 0) {
      FUN_00541a10(iVar2);
    }
    local_c = (undefined4 *)0x0;
    piVar4 = local_8;
    if (param_1 == 0) goto LAB_0054eeda;
  }
  *(undefined1 *)((int)piVar4 + 0x13) = 1;
LAB_0054ef6c:
  FUN_0052e890(iVar1);
  if (*(char *)(iVar1 + 9) != '\0') {
    piVar4 = (int *)(iVar1 + 0xc);
    *piVar4 = *piVar4 + -1;
    if (*piVar4 == 0) {
      iVar2 = *(int *)(*(int *)(iVar1 + 4) + 0x38);
      if (iVar2 != 0) {
        (*DAT_00766638)(iVar2);
      }
      *(undefined1 *)(iVar1 + 10) = 0;
    }
  }
  return param_2;
}


/* FUN_0054f060 @ 0054f060  kind=gamemisc  attributed-by=caller-vote  size=113 */

undefined4 FUN_0054f060(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_0054d260(param_1);
  iVar2 = *(int *)(param_1 + 4);
  if (*(char *)(param_1 + 9) != '\0') {
    if ((*(int *)(iVar2 + 0x4c) != param_1) && ((*(byte *)(iVar2 + 0x16) & 0x20) != 0)) {
LAB_0054f086:
      uVar3 = 0x106;
      goto LAB_0054f0ad;
    }
    for (piVar1 = *(int **)(iVar2 + 0x48); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[3]) {
      if (((*piVar1 != param_1) && (piVar1[1] == 1)) && ((char)piVar1[2] != '\x01'))
      goto LAB_0054f086;
    }
  }
  uVar3 = 0;
LAB_0054f0ad:
  if (*(char *)(param_1 + 9) != '\0') {
    piVar1 = (int *)(param_1 + 0xc);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      if (*(int *)(iVar2 + 0x38) != 0) {
        (*DAT_00766638)(*(int *)(iVar2 + 0x38));
      }
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  return uVar3;
}


/* FUN_0054f600 @ 0054f600  kind=gamemisc  attributed-by=caller-vote  size=218 */

void FUN_0054f600(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  if (param_1 != 0) {
    FUN_0054d260(param_1);
    for (iVar1 = *(int *)(*(int *)(param_1 + 4) + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
      FUN_00524410(*(undefined4 *)(iVar1 + 0x50));
      *(undefined4 *)(iVar1 + 0x54) = param_2;
      iVar4 = 0;
      *(undefined4 *)(iVar1 + 0x50) = 0;
      *(undefined1 *)(iVar1 + 0x5b) = 3;
      if (*(ushort *)(iVar1 + 0x5e) < 0x8000) {
        piVar5 = (int *)(iVar1 + 0x88);
        do {
          if ((*piVar5 != 0) && (iVar2 = *(int *)(*piVar5 + 0x44), iVar2 != 0)) {
            iVar3 = *(int *)(iVar2 + 0x10);
            FUN_00561130(iVar2);
            if (*(int *)(*(int *)(iVar3 + 0xb4) + 0xc) == 0) {
              FUN_00541a10(iVar3);
            }
          }
          *piVar5 = 0;
          iVar4 = iVar4 + 1;
          piVar5 = piVar5 + 1;
        } while (iVar4 <= *(short *)(iVar1 + 0x5e));
      }
    }
    if (*(char *)(param_1 + 9) != '\0') {
      piVar5 = (int *)(param_1 + 0xc);
      *piVar5 = *piVar5 + -1;
      if (*piVar5 == 0) {
        iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x38);
        if (iVar1 != 0) {
          (*DAT_00766638)(iVar1);
        }
        *(undefined1 *)(param_1 + 10) = 0;
      }
    }
  }
  return;
}


/* FUN_0054fc20 @ 0054fc20  kind=gamemisc  attributed-by=caller-vote  size=204 */

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


/* FUN_0054fcf0 @ 0054fcf0  kind=gamemisc  attributed-by=caller-vote  size=178 */

void FUN_0054fcf0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_1[0x24]) {
    do {
      (**(code **)(*param_1 + 0x34))(*param_1,*(undefined4 *)(param_1[0x25] + iVar2 * 4));
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[0x24]);
  }
  piVar1 = (int *)param_1[0x25];
  if (param_1[0x7c] != 0) {
    if (((piVar1 != (int *)0x0) && ((int *)param_1[0x41] <= piVar1)) &&
       (piVar1 < (int *)param_1[0x42])) {
      *(int *)param_1[0x7c] = *(int *)param_1[0x7c] + (uint)*(ushort *)(param_1 + 0x3a);
      return;
    }
    iVar2 = (*DAT_00766608._4_4_)(piVar1);
    *(int *)param_1[0x7c] = *(int *)param_1[0x7c] + iVar2;
    return;
  }
  if (((piVar1 != (int *)0x0) && ((int *)param_1[0x41] <= piVar1)) &&
     (piVar1 < (int *)param_1[0x42])) {
    *piVar1 = param_1[0x40];
    param_1[0x3b] = param_1[0x3b] + -1;
    param_1[0x40] = (int)piVar1;
    return;
  }
  FUN_00524410();
  return;
}


/* FUN_0054fdb0 @ 0054fdb0  kind=gamemisc  attributed-by=caller-vote  size=186 */

void FUN_0054fdb0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x1d8);
  while (iVar2 != 0) {
    puVar1 = *(undefined4 **)(param_1 + 0x1d8);
    *(undefined4 *)(param_1 + 0x1d8) = puVar1[4];
    if (*(int *)(param_1 + 0x1f0) == 0) {
      if ((puVar1 < *(undefined4 **)(param_1 + 0x104)) ||
         (*(undefined4 **)(param_1 + 0x108) <= puVar1)) {
        FUN_00524410(puVar1);
      }
      else {
        *puVar1 = *(undefined4 *)(param_1 + 0x100);
        *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + -1;
        *(undefined4 **)(param_1 + 0x100) = puVar1;
      }
    }
    else if ((puVar1 < *(undefined4 **)(param_1 + 0x104)) ||
            (*(undefined4 **)(param_1 + 0x108) <= puVar1)) {
      iVar2 = (*DAT_00766608._4_4_)(puVar1);
      **(int **)(param_1 + 0x1f0) = **(int **)(param_1 + 0x1f0) + iVar2;
    }
    else {
      **(int **)(param_1 + 0x1f0) = **(int **)(param_1 + 0x1f0) + (uint)*(ushort *)(param_1 + 0xe8);
    }
    iVar2 = *(int *)(param_1 + 0x1d8);
  }
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  return;
}


/* FUN_00550b60 @ 00550b60  kind=gamemisc  attributed-by=caller-vote  size=359 */

void FUN_00550b60(int param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_8;
  
  iVar5 = param_1;
  iVar8 = 2;
  iVar7 = 2;
  if (2 < *(int *)(param_1 + 0x14)) {
    param_1 = 0x20;
    local_8 = 0x20;
    do {
      iVar2 = *(int *)(iVar5 + 0x10);
      if (*(int *)(local_8 + 4 + iVar2) == 0) {
        puVar3 = *(undefined4 **)(local_8 + iVar2);
        if (*(int *)(iVar5 + 0x1f0) == 0) {
          if (((puVar3 == (undefined4 *)0x0) || (puVar3 < *(undefined4 **)(iVar5 + 0x104))) ||
             (*(undefined4 **)(iVar5 + 0x108) <= puVar3)) {
            FUN_00524410(puVar3);
          }
          else {
            *puVar3 = *(undefined4 *)(iVar5 + 0x100);
            *(int *)(iVar5 + 0xec) = *(int *)(iVar5 + 0xec) + -1;
            *(undefined4 **)(iVar5 + 0x100) = puVar3;
          }
        }
        else if (((puVar3 == (undefined4 *)0x0) || (puVar3 < *(undefined4 **)(iVar5 + 0x104))) ||
                (*(undefined4 **)(iVar5 + 0x108) <= puVar3)) {
          iVar6 = (*DAT_00766608._4_4_)(puVar3);
          **(int **)(iVar5 + 0x1f0) = **(int **)(iVar5 + 0x1f0) + iVar6;
        }
        else {
          **(int **)(iVar5 + 0x1f0) = **(int **)(iVar5 + 0x1f0) + (uint)*(ushort *)(iVar5 + 0xe8);
        }
        *(undefined4 *)(local_8 + iVar2) = 0;
      }
      else {
        if (iVar8 < iVar7) {
          *(undefined8 *)(param_1 + iVar2) = *(undefined8 *)(local_8 + iVar2);
          *(undefined8 *)(param_1 + 8 + iVar2) = *(undefined8 *)(local_8 + 8 + iVar2);
        }
        iVar8 = iVar8 + 1;
        param_1 = param_1 + 0x10;
      }
      iVar7 = iVar7 + 1;
      local_8 = local_8 + 0x10;
    } while (iVar7 < *(int *)(iVar5 + 0x14));
  }
  memset((void *)(iVar8 * 0x10 + *(int *)(iVar5 + 0x10)),0,(*(int *)(iVar5 + 0x14) - iVar8) * 0x10);
  *(int *)(iVar5 + 0x14) = iVar8;
  if (iVar8 < 3) {
    puVar4 = *(undefined8 **)(iVar5 + 0x10);
    puVar1 = (undefined8 *)(iVar5 + 0x1b8);
    if (puVar4 != puVar1) {
      *puVar1 = *puVar4;
      *(undefined8 *)(iVar5 + 0x1c0) = puVar4[1];
      *(undefined8 *)(iVar5 + 0x1c8) = puVar4[2];
      *(undefined8 *)(iVar5 + 0x1d0) = puVar4[3];
      FUN_005521a0(iVar5,puVar4);
      *(undefined8 **)(iVar5 + 0x10) = puVar1;
    }
  }
  return;
}


/* FUN_00551190 @ 00551190  kind=gamemisc  attributed-by=caller-vote  size=33 */

undefined4 FUN_00551190(undefined4 param_1)

{
  FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",param_1,
               "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
  return 0xb;
}


/* FUN_00552000 @ 00552000  kind=gamemisc  attributed-by=caller-vote  size=411 */

void FUN_00552000(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined1 local_20 [20];
  int local_c;
  undefined4 local_8;
  
  local_8 = 0;
  iVar1 = *param_1;
  if (param_1[0x73] < 1) {
    FUN_00567880(param_1,param_3,param_4,param_6,1,0,param_7);
    iVar2 = param_1[0x7f];
    if ((iVar2 == 0) || (param_1[0x11] != 0)) {
      if (param_5 != 0) {
        FUN_005303a0(iVar1,param_5);
        FUN_005521a0(iVar1,param_5);
      }
    }
    else {
      FUN_00568810(param_1,param_3,param_4,&local_8);
      uVar3 = FUN_00565260(iVar1,*(undefined4 *)(iVar2 + 0x40));
      iVar4 = FUN_005579f0(local_20,param_1,uVar3,&DAT_00718188,local_8);
      if ((iVar4 != 0) && (iVar4 = FUN_00557a40(local_20,param_5), iVar4 != 0)) {
        FUN_00566d10(iVar1,param_5);
        return;
      }
      uVar3 = FUN_00566d40(iVar1,param_5,1);
      *(undefined4 *)(iVar2 + 0xc) = uVar3;
      if (param_5 != 0) {
        FUN_005303a0(iVar1,param_5);
        FUN_005521a0(iVar1,param_5);
      }
      if (*(char *)(iVar1 + 0x38) == '\0') {
        if (*(char *)(iVar1 + 0x81) == '\0') {
          FUN_00576bd0(param_1,iVar2);
        }
        pcVar5 = (char *)param_1[0x84];
        if ((*pcVar5 != '\0') && (*pcVar5 != ';')) {
          pcVar5 = pcVar5 + param_1[0x85];
        }
        iVar1 = *param_2;
        local_c = (int)pcVar5 - iVar1;
        while ((0 < local_c && (((&DAT_007121d8)[*(byte *)(iVar1 + -1 + local_c)] & 1) != 0))) {
          local_c = local_c + -1;
        }
        local_c = iVar1 + -1 + local_c;
        local_8 = 1;
        FUN_00553490(param_1,0,&local_c,0);
        return;
      }
    }
  }
  else {
    FUN_00553950(param_1,"parameters are not allowed in views");
    if (param_5 != 0) {
      FUN_005303a0(iVar1,param_5);
      FUN_005521a0(iVar1,param_5);
      return;
    }
  }
  return;
}


/* FUN_005521a0 @ 005521a0  kind=gamemisc  attributed-by=caller-vote  size=139 */

void FUN_005521a0(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x1f0) != 0) {
      if (((param_2 != (undefined4 *)0x0) && (*(undefined4 **)(param_1 + 0x104) <= param_2)) &&
         (param_2 < *(undefined4 **)(param_1 + 0x108))) {
        **(int **)(param_1 + 0x1f0) =
             **(int **)(param_1 + 0x1f0) + (uint)*(ushort *)(param_1 + 0xe8);
        return;
      }
      iVar1 = (*DAT_00766608._4_4_)(param_2);
      **(int **)(param_1 + 0x1f0) = **(int **)(param_1 + 0x1f0) + iVar1;
      return;
    }
    if (((param_2 != (undefined4 *)0x0) && (*(undefined4 **)(param_1 + 0x104) <= param_2)) &&
       (param_2 < *(undefined4 **)(param_1 + 0x108))) {
      *param_2 = *(undefined4 *)(param_1 + 0x100);
      *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + -1;
      *(undefined4 **)(param_1 + 0x100) = param_2;
      return;
    }
  }
  FUN_00524410(param_2);
  return;
}


/* FUN_00552230 @ 00552230  kind=gamemisc  attributed-by=caller-vote  size=138 */

undefined4 * FUN_00552230(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x38) != '\0') {
      return (undefined4 *)0x0;
    }
    if (*(char *)(param_1 + 0xea) != '\0') {
      if ((int)(uint)*(ushort *)(param_1 + 0xe8) < param_2) {
        *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
      }
      else {
        puVar2 = *(undefined4 **)(param_1 + 0x100);
        if (puVar2 != (undefined4 *)0x0) {
          uVar1 = *puVar2;
          *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 1;
          *(undefined4 *)(param_1 + 0x100) = uVar1;
          *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + 1;
          if (*(int *)(param_1 + 0xf0) < *(int *)(param_1 + 0xec)) {
            *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xec);
          }
          return puVar2;
        }
        *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + 1;
      }
    }
  }
  puVar2 = (undefined4 *)FUN_0055da00(param_2);
  if ((puVar2 == (undefined4 *)0x0) && (param_1 != 0)) {
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  return puVar2;
}


/* FUN_005522c0 @ 005522c0  kind=gamemisc  attributed-by=caller-vote  size=43 */

void * FUN_005522c0(undefined4 param_1,size_t param_2)

{
  void *_Dst;
  
  _Dst = (void *)FUN_00552230(param_1,param_2);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,param_2);
  }
  return _Dst;
}


/* FUN_00552390 @ 00552390  kind=gamemisc  attributed-by=caller-vote  size=180 */

void * FUN_00552390(int param_1,void *param_2,int param_3)

{
  void *_Dst;
  int iVar1;
  void *pvVar2;
  
  pvVar2 = (void *)0x0;
  if (*(char *)(param_1 + 0x38) == '\0') {
    if (param_2 == (void *)0x0) {
      pvVar2 = (void *)FUN_00552230(param_1,param_3);
      return pvVar2;
    }
    if ((param_2 < *(void **)(param_1 + 0x104)) || (*(void **)(param_1 + 0x108) <= param_2)) {
      iVar1 = FUN_00579f80();
      if (iVar1 != 0) {
        *(undefined1 *)(param_1 + 0x38) = 1;
        return (void *)0x0;
      }
      pvVar2 = (void *)FUN_00563800(param_2,param_3);
      if (pvVar2 == (void *)0x0) {
        *(undefined1 *)(param_1 + 0x38) = 1;
      }
    }
    else {
      if (param_3 <= (int)(uint)*(ushort *)(param_1 + 0xe8)) {
        return param_2;
      }
      _Dst = (void *)FUN_00552230(param_1,param_3);
      pvVar2 = (void *)0x0;
      if (_Dst != (void *)0x0) {
        memcpy(_Dst,param_2,(uint)*(ushort *)(param_1 + 0xe8));
        FUN_005521a0(param_1,param_2);
        return _Dst;
      }
    }
  }
  return pvVar2;
}


/* FUN_00552450 @ 00552450  kind=gamemisc  attributed-by=caller-vote  size=77 */

void * FUN_00552450(undefined4 param_1,char *param_2)

{
  size_t _Size;
  char cVar1;
  char *pcVar2;
  void *_Dst;
  
  if (param_2 != (char *)0x0) {
    cVar1 = *param_2;
    pcVar2 = param_2;
    while (cVar1 != '\0') {
      pcVar2 = pcVar2 + 1;
      cVar1 = *pcVar2;
    }
    _Size = ((int)pcVar2 - (int)param_2 & 0x3fffffffU) + 1;
    _Dst = (void *)FUN_00552230(param_1,_Size);
    if (_Dst != (void *)0x0) {
      memcpy(_Dst,param_2,_Size);
    }
    return _Dst;
  }
  return (void *)0x0;
}


/* FUN_00552540 @ 00552540  kind=gamemisc  attributed-by=caller-vote  size=31 */

void FUN_00552540(int param_1,undefined1 param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x1fc) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x1fc) + 0x10), iVar1 != 0)) {
    *(undefined1 *)(iVar1 + 0x18) = param_2;
  }
  return;
}


/* FUN_00552560 @ 00552560  kind=gamemisc  attributed-by=caller-vote  size=1084 */

void FUN_00552560(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  int local_2c;
  int *local_28;
  int local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  iVar5 = *param_1;
  local_20 = -1;
  local_34 = 0;
  local_8 = iVar5;
  if (((param_1[0x11] == 0) && (*(char *)(iVar5 + 0x38) == '\0')) &&
     (piVar1 = (int *)FUN_005677f0(param_1,param_2), local_28 = piVar1, piVar1 != (int *)0x0)) {
    local_24 = FUN_005687a0(param_1,piVar1,0x6a,0,0);
    local_1c = (uint)(piVar1[3] != 0);
    iVar2 = FUN_00576bd0(param_1,piVar1);
    if ((iVar2 == 0) && (iVar2 = FUN_0055cf00(param_1,piVar1,local_24 != 0), iVar2 == 0)) {
      local_18 = FUN_00565260(iVar5,piVar1[0x10]);
      local_2c = FUN_0054ab50(param_1,9,*piVar1,0,
                              *(undefined4 *)(*(int *)(iVar5 + 0x10) + local_18 * 0x10));
      if (local_2c != 1) {
        local_14 = param_1[0x12];
        *(int *)(param_2 + 0x34) = local_14;
        param_1[0x12] = param_1[0x12] + 1;
        iVar2 = param_1[0x12];
        for (iVar5 = piVar1[2]; iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x14)) {
          iVar2 = iVar2 + 1;
          param_1[0x12] = iVar2;
        }
        if (local_1c == 0) {
          local_c = local_34._4_4_;
          local_10 = (int)local_34;
        }
        else {
          local_10 = param_1[0x81];
          local_c = param_1;
          param_1[0x81] = *piVar1;
        }
        iVar3 = FUN_0055ab80(param_1);
        piVar7 = local_c;
        iVar2 = local_10;
        iVar5 = local_8;
        if (iVar3 != 0) {
          if (*(char *)((int)param_1 + 0x12) == '\0') {
            *(uint *)(iVar3 + 0x60) = *(uint *)(iVar3 + 0x60) | 0x10;
          }
          FUN_0054bc80(param_1,1,local_18);
          if (local_1c != 0) {
            FUN_0055dc60(param_1,piVar1,param_3,local_14);
          }
          local_4c = 0;
          local_44 = 0;
          local_3c = 0;
          local_54 = CONCAT44(param_2,param_1);
          iVar4 = FUN_005640a0(&local_54,param_3);
          piVar7 = local_c;
          iVar2 = local_10;
          iVar5 = local_8;
          if (iVar4 == 0) {
            if ((*(byte *)(local_8 + 0x18) & 0x10) != 0) {
              param_1[0x13] = param_1[0x13] + 1;
              local_20 = param_1[0x13];
              FUN_0056be90(iVar3,7,0,local_20);
            }
            if ((((local_2c == 0) && (param_3 == 0)) &&
                ((local_24 == 0 && ((*(byte *)((int)piVar1 + 0x2a) & 0x10) == 0)))) &&
               (((*(uint *)(*param_1 + 0x18) & 0x40000) == 0 ||
                ((iVar5 = FUN_00558520(piVar1), iVar5 == 0 && (piVar1[4] == 0)))))) {
              FUN_0056bf50(iVar3,0x67,piVar1[8],local_18,local_20,*piVar1,0xfffffffe);
              iVar2 = local_18;
              for (iVar5 = piVar1[2]; iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x14)) {
                FUN_0056be90(iVar3,0x67,*(undefined4 *)(iVar5 + 0x28),iVar2);
              }
            }
            else {
              local_18 = param_1[0x13] + 1;
              param_1[0x13] = param_1[0x13] + 2;
              FUN_0056be90(iVar3,10,0,local_18);
              local_2c = FUN_005788a0(param_1,param_2,param_3,0,0,8,0);
              piVar7 = local_c;
              iVar2 = local_10;
              iVar5 = local_8;
              if (local_2c == 0) goto LAB_00552976;
              uVar6 = FUN_00554760(param_1,piVar1,0xffffffff,local_14,local_18 + 1,0);
              FUN_0056be90(iVar3,0x70,local_18,uVar6);
              if ((*(byte *)(local_8 + 0x18) & 0x10) != 0) {
                FUN_0056be90(iVar3,0x14,local_20,1);
              }
              FUN_005794a0(local_2c);
              local_2c = FUN_005741e0(iVar3);
              if (local_1c == 0) {
                FUN_0055e6e0(param_1,piVar1,local_14,0x28);
              }
              uVar6 = FUN_0056bef0(iVar3,0x71,local_18,local_2c,local_18 + 1);
              local_34 = CONCAT44(uVar6,(int)local_34);
              if ((*(byte *)((int)piVar1 + 0x2a) & 0x10) == 0) {
                FUN_00559bc0(param_1,piVar1,local_14,local_18 + 1,
                             *(char *)((int)param_1 + 0x12) == '\0',local_24,99);
              }
              else {
                uVar6 = FUN_0055a900(local_8,piVar1);
                FUN_00577380(param_1,local_28);
                FUN_0056bf50(iVar3,0x8c,0,1,local_18 + 1,uVar6,0xfffffff6);
                FUN_0056c490(iVar3,2);
                piVar1 = param_1;
                if ((int *)param_1[0x6c] != (int *)0x0) {
                  piVar1 = (int *)param_1[0x6c];
                }
                *(undefined1 *)(piVar1 + 6) = 1;
                piVar1 = local_28;
              }
              FUN_0056be90(iVar3,1,0,local_34._4_4_);
              FUN_00575e10(iVar3,local_2c);
              if ((local_1c == 0) && ((*(byte *)((int)piVar1 + 0x2a) & 0x10) == 0)) {
                iVar2 = local_14;
                for (iVar5 = piVar1[2]; iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x14)) {
                  iVar2 = iVar2 + 1;
                  FUN_0056be90(iVar3,0x2d,iVar2,*(undefined4 *)(iVar5 + 0x28));
                }
                FUN_0056be30(iVar3,0x2d,local_14);
              }
            }
            if ((*(char *)((int)param_1 + 0x12) == '\0') && (param_1[0x6d] == 0)) {
              FUN_0054b260(param_1);
            }
            piVar7 = local_c;
            iVar2 = local_10;
            iVar5 = local_8;
            if ((((*(byte *)(local_8 + 0x18) & 0x10) != 0) &&
                (*(char *)((int)param_1 + 0x12) == '\0')) && (param_1[0x6d] == 0)) {
              FUN_0056be90(iVar3,0x10,local_20,1);
              FUN_005762b0(iVar3,1);
              FUN_00576270(iVar3,0,0,"rows deleted",0);
              piVar7 = local_c;
              iVar2 = local_10;
              iVar5 = local_8;
            }
          }
        }
        goto LAB_00552976;
      }
    }
  }
  piVar7 = local_34._4_4_;
  iVar2 = (int)local_34;
LAB_00552976:
  if (piVar7 != (int *)0x0) {
    piVar7[0x81] = iVar2;
  }
  FUN_00567370(iVar5,param_2);
  FUN_00555e30(iVar5,param_3);
  return;
}


/* FUN_005529a0 @ 005529a0  kind=gamemisc  attributed-by=caller-vote  size=375 */

void FUN_005529a0(int param_1,undefined4 *param_2)

{
  short *psVar1;
  byte bVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  if (param_2 != (undefined4 *)0x0) {
    if ((param_1 == 0) || (*(int *)(param_1 + 0x1f0) == 0)) {
      psVar1 = (short *)(param_2 + 10);
      *psVar1 = *psVar1 + -1;
      if (*psVar1 != 0) {
        return;
      }
    }
    puVar5 = (undefined4 *)param_2[2];
    while (puVar5 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)puVar5[5];
      if ((param_1 == 0) || (*(int *)(param_1 + 0x1f0) == 0)) {
        pbVar4 = (byte *)*puVar5;
        uVar9 = 0;
        if (pbVar4 != (byte *)0x0) {
          bVar2 = *pbVar4;
          pbVar8 = pbVar4;
          while (bVar2 != 0) {
            pbVar8 = pbVar8 + 1;
            bVar2 = *pbVar8;
          }
          uVar9 = (int)pbVar8 - (int)pbVar4 & 0x3fffffff;
        }
        puVar6 = (uint *)(puVar5[6] + 0x18);
        if (*puVar6 == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = 0;
          pbVar8 = pbVar4;
          uVar11 = uVar9;
          if (uVar9 != 0) {
            do {
              uVar11 = uVar11 - 1;
              uVar10 = uVar10 ^ (uint)(byte)(&DAT_007120d8)[*pbVar8] ^ uVar10 * 8;
              pbVar8 = pbVar8 + 1;
            } while (0 < (int)uVar11);
          }
          uVar10 = uVar10 % *puVar6;
        }
        iVar7 = FUN_00537190(puVar6,pbVar4,uVar9,uVar10);
        if (iVar7 != 0) {
          FUN_00545b50(puVar6,iVar7,uVar10);
        }
      }
      FUN_005521a0(param_1,puVar5[4]);
      FUN_005521a0(param_1,puVar5);
      puVar5 = puVar3;
    }
    FUN_005581b0(param_1,param_2);
    FUN_0057a480(param_1,param_2);
    FUN_005521a0(param_1,*param_2);
    FUN_005521a0(param_1,param_2[5]);
    iVar7 = param_2[3];
    if (iVar7 != 0) {
      FUN_005303a0(param_1,iVar7);
      FUN_005521a0(param_1,iVar7);
    }
    FUN_00556700(param_1,param_2[6]);
    FUN_00577190(param_1,param_2);
    FUN_005521a0(param_1,param_2);
  }
  return;
}


/* FUN_00552b20 @ 00552b20  kind=gamemisc  attributed-by=caller-vote  size=184 */

void FUN_00552b20(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  while (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0x20);
    FUN_00555e30(param_1,*(undefined4 *)(param_2 + 0x14));
    FUN_00556700(param_1,*(undefined4 *)(param_2 + 0x18));
    puVar2 = *(undefined4 **)(param_2 + 8);
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00556700(param_1,*puVar2);
      FUN_00567370(param_1,puVar2[10]);
      FUN_00555e30(param_1,puVar2[0xb]);
      FUN_00556700(param_1,puVar2[0xc]);
      FUN_00555e30(param_1,puVar2[0xd]);
      FUN_00556700(param_1,puVar2[0xe]);
      FUN_00566d10(param_1,puVar2[0xf]);
      FUN_00555e30(param_1,puVar2[0x12]);
      FUN_00555e30(param_1,puVar2[0x13]);
      FUN_005521a0(param_1,puVar2);
    }
    FUN_0055afc0(param_1,*(undefined4 *)(param_2 + 0x1c));
    FUN_005521a0(param_1,param_2);
    param_2 = iVar1;
  }
  return;
}


/* FUN_005530e0 @ 005530e0  kind=gamemisc  attributed-by=caller-vote  size=376 */

void FUN_005530e0(int *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  char *pcVar10;
  uint uVar11;
  int local_c;
  
  local_c = 0;
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x38) == '\0') {
    if ((*(char *)(iVar2 + 0x81) == '\0') && (iVar5 = FUN_0055b460(iVar2,param_1 + 1), iVar5 != 0))
    {
      param_1[0x11] = param_1[0x11] + 1;
      param_1[3] = iVar5;
      FUN_00567370(iVar2,param_2);
      return;
    }
    iVar5 = *(int *)(param_2 + 0xc);
    pcVar3 = *(char **)(param_2 + 0x10);
    uVar11 = 0;
    if (pcVar3 != (char *)0x0) {
      cVar1 = *pcVar3;
      pcVar10 = pcVar3;
      while (cVar1 != '\0') {
        pcVar10 = pcVar10 + 1;
        cVar1 = *pcVar10;
      }
      uVar11 = (int)pcVar10 - (int)pcVar3 & 0x3fffffff;
    }
    iVar4 = *(int *)(iVar2 + 0x14);
    uVar7 = 0;
    if (0 < iVar4) {
      do {
        uVar8 = uVar7;
        if ((int)uVar7 < 2) {
          uVar8 = uVar7 ^ 1;
        }
        if ((iVar5 == 0) ||
           (iVar6 = FUN_0057a2c0(*(undefined4 *)(*(int *)(iVar2 + 0x10) + uVar8 * 0x10),iVar5),
           iVar6 == 0)) {
          iVar6 = *(int *)(*(int *)(iVar2 + 0x10) + 0xc + uVar8 * 0x10);
          puVar9 = (uint *)(iVar6 + 0x28);
          if (*(int *)(iVar6 + 0x34) == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = FUN_0057a870(pcVar3,uVar11);
            uVar8 = uVar8 % *puVar9;
          }
          iVar6 = FUN_00537190(puVar9,*(undefined4 *)(param_2 + 0x10),uVar11,uVar8);
          if (iVar6 == 0) {
            local_c = 0;
          }
          else {
            local_c = *(int *)(iVar6 + 8);
            if (local_c != 0) goto LAB_00553205;
          }
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < iVar4);
      if (local_c != 0) {
LAB_00553205:
        FUN_00553260(param_1,local_c);
        goto LAB_00553247;
      }
    }
    if (param_3 == 0) {
      FUN_00553950(param_1,"no such trigger: %S",param_2,0);
    }
    else {
      FUN_00550a00(param_1,iVar5);
    }
    *(undefined1 *)((int)param_1 + 0x11) = 1;
  }
LAB_00553247:
  FUN_00567370(iVar2,param_2);
  return;
}


/* FUN_00553890 @ 00553890  kind=gamemisc  attributed-by=caller-vote  size=186 */

void FUN_00553890(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0xd4) == 0) {
      iVar2 = FUN_0056bc90(param_1);
      *(int *)(param_1 + 0xd4) = iVar2;
      if (iVar2 == 0) {
        return;
      }
    }
    *(undefined4 *)(param_1 + 0x2c) = param_2;
    if (param_3 == 0) {
      iVar2 = *(int *)(param_1 + 0xd4);
      if (iVar2 != 0) {
        if ((*(byte *)(iVar2 + 0x1c) & 0x40) != 0) {
          piVar1 = *(int **)(iVar2 + 0x10);
          piVar1[1] = *(int *)(*piVar1 + 0xa4);
          *(int **)(*piVar1 + 0xa4) = piVar1;
        }
        if ((*(byte *)(iVar2 + 0x1c) & 0x20) != 0) {
          FUN_005644e0(*(undefined4 *)(iVar2 + 0x10));
        }
        *(ushort *)(iVar2 + 0x1c) = *(ushort *)(iVar2 + 0x1c) & 0xbe01 | 1;
        *(undefined1 *)(iVar2 + 0x1e) = 5;
      }
    }
    else {
      uVar3 = FUN_0056a9b0(param_1,param_3,&stack0x00000010);
      if (*(int *)(param_1 + 0xd4) != 0) {
        FUN_00575040(*(int *)(param_1 + 0xd4),uVar3,0xffffffff,1,FUN_0055dc20);
        return;
      }
    }
  }
  return;
}


/* FUN_00553950 @ 00553950  kind=gamemisc  attributed-by=caller-vote  size=183 */

void FUN_00553950(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
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
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_68 = local_50;
  iVar1 = *param_1;
  local_58 = *(undefined4 *)(iVar1 + 0x50);
  local_60 = 0;
  local_5c = 0x46;
  local_53 = 1;
  local_54 = '\0';
  local_6c = iVar1;
  local_64 = local_68;
  FUN_0056aa30(&local_6c,1,param_2,&stack0x0000000c);
  iVar2 = FUN_00567fb0(&local_6c);
  if (local_54 != '\0') {
    *(undefined1 *)(iVar1 + 0x38) = 1;
  }
  if (*(char *)(iVar1 + 0x3b) != '\0') {
    FUN_005521a0(iVar1,iVar2);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  param_1[0x11] = param_1[0x11] + 1;
  FUN_005521a0(iVar1,param_1[1]);
  param_1[1] = iVar2;
  param_1[3] = 1;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00553ae0 @ 00553ae0  kind=gamemisc  attributed-by=caller-vote  size=56 */

int FUN_00553ae0(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)(param_3 + 4) != 0) {
    iVar1 = FUN_00553bb0(*param_1,0x5c,param_3,1);
    if (iVar1 != 0) {
      *(int *)(iVar1 + 8) = param_2;
      *(ushort *)(iVar1 + 2) = *(ushort *)(iVar1 + 2) | 0x100;
      return iVar1;
    }
  }
  return param_2;
}


/* FUN_00553bb0 @ 00553bb0  kind=gamemisc  attributed-by=caller-vote  size=254 */

undefined1 * FUN_00553bb0(undefined4 param_1,int param_2,int *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined1 *_Dst;
  int iVar3;
  undefined4 local_8;
  
  iVar3 = 0;
  local_8 = 0;
  if (param_3 != (int *)0x0) {
    if ((param_2 == 0x81) && (*param_3 != 0)) {
      iVar2 = FUN_0055a0e0(*param_3,&local_8);
      if (iVar2 != 0) goto LAB_00553be7;
    }
    iVar3 = param_3[1] + 1;
  }
LAB_00553be7:
  _Dst = (undefined1 *)FUN_00552230(param_1,iVar3 + 0x2c);
  if (_Dst != (undefined1 *)0x0) {
    memset(_Dst,0,iVar3 + 0x2c);
    *_Dst = (char)param_2;
    *(undefined2 *)(_Dst + 0x1e) = 0xffff;
    if (param_3 != (int *)0x0) {
      if (iVar3 == 0) {
        *(ushort *)(_Dst + 2) = *(ushort *)(_Dst + 2) | 0x400;
        *(undefined4 *)(_Dst + 4) = local_8;
        *(undefined4 *)(_Dst + 0x14) = 1;
        return _Dst;
      }
      *(undefined1 **)(_Dst + 4) = _Dst + 0x2c;
      if (param_3[1] != 0) {
        memcpy(_Dst + 0x2c,(void *)*param_3,param_3[1]);
      }
      *(undefined1 *)(param_3[1] + *(int *)(_Dst + 4)) = 0;
      if (((param_4 != 0) && (2 < iVar3)) &&
         ((cVar1 = *(char *)*param_3, cVar1 == '\'' ||
          (((cVar1 == '\"' || (cVar1 == '[')) || (cVar1 == '`')))))) {
        FUN_00552be0(*(undefined4 *)(_Dst + 4));
        if (cVar1 == '\"') {
          *(ushort *)(_Dst + 2) = *(ushort *)(_Dst + 2) | 0x40;
        }
      }
    }
    *(undefined4 *)(_Dst + 0x14) = 1;
  }
  return _Dst;
}


/* FUN_00553e40 @ 00553e40  kind=gamemisc  attributed-by=caller-vote  size=655 */

void FUN_00553e40(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  void *_Dst;
  short sVar8;
  int *piVar9;
  int *piVar10;
  uint _Size;
  bool bVar11;
  uint local_10;
  int local_c;
  int *local_8;
  
  iVar2 = *param_1;
  if (param_2 == 0) {
    return;
  }
  local_8 = *(int **)(param_2 + 4);
  if (*(char *)((int)local_8 + 1) == '\0') {
    param_1[0x73] = param_1[0x73] + 1;
    *(short *)(param_2 + 0x1c) = (short)param_1[0x73];
    goto LAB_0055408d;
  }
  piVar10 = local_8;
  cVar1 = (char)*local_8;
  while (cVar1 != '\0') {
    piVar10 = (int *)((int)piVar10 + 1);
    cVar1 = *(char *)piVar10;
  }
  _Size = (int)piVar10 - (int)local_8 & 0x3fffffff;
  if ((char)*local_8 == '?') {
    iVar6 = FUN_0054a9a0((int)local_8 + 1,&local_10,_Size - 1,1);
    sVar8 = (short)local_10;
    *(short *)(param_2 + 0x1c) = sVar8;
    if (((iVar6 == 0) && (-1 < local_c)) && ((0 < local_c || (local_10 != 0)))) {
      iVar6 = (int)*(uint *)(iVar2 + 0x74) >> 0x1f;
      if ((iVar6 <= local_c) && ((iVar6 < local_c || (*(uint *)(iVar2 + 0x74) < local_10))))
      goto LAB_00553ee4;
    }
    else {
LAB_00553ee4:
      FUN_00553950(param_1,"variable number must be between ?1 and ?%d",
                   *(undefined4 *)(iVar2 + 0x74));
      sVar8 = 0;
    }
    iVar6 = param_1[0x73] >> 0x1f;
    if ((iVar6 <= local_c) && ((iVar6 < local_c || ((uint)param_1[0x73] < local_10)))) {
      param_1[0x73] = local_10;
    }
  }
  else {
    iVar6 = 0;
    local_c = 0;
    if (0 < param_1[0x74]) {
      do {
        piVar10 = *(int **)(param_1[0x7b] + iVar6 * 4);
        if (piVar10 != (int *)0x0) {
          piVar9 = local_8;
          uVar5 = _Size - 3;
          uVar4 = _Size + 1;
          while (uVar3 = uVar5, 3 < uVar4) {
            if (*piVar10 != *piVar9) goto LAB_00553f5f;
            piVar10 = piVar10 + 1;
            piVar9 = piVar9 + 1;
            uVar5 = uVar3 - 4;
            uVar4 = uVar3;
          }
          if (uVar3 != 0xfffffffc) {
LAB_00553f5f:
            if (((char)*piVar10 != (char)*piVar9) ||
               ((uVar3 != 0xfffffffd &&
                ((*(char *)((int)piVar10 + 1) != *(char *)((int)piVar9 + 1) ||
                 ((uVar3 != 0xfffffffe &&
                  ((*(char *)((int)piVar10 + 2) != *(char *)((int)piVar9 + 2) ||
                   ((uVar3 != 0xffffffff &&
                    (*(char *)((int)piVar10 + 3) != *(char *)((int)piVar9 + 3)))))))))))))
            goto LAB_00553f9f;
          }
          sVar8 = (short)local_c + 1;
          *(short *)(param_2 + 0x1c) = sVar8;
          bVar11 = sVar8 == 0;
          if (!bVar11) goto LAB_00553fcd;
          break;
        }
LAB_00553f9f:
        local_c = local_c + 1;
        iVar6 = (int)(short)local_c;
      } while (iVar6 < param_1[0x74]);
    }
    iVar6 = param_1[0x73];
    param_1[0x73] = iVar6 + 1;
    sVar8 = (short)(iVar6 + 1);
    *(short *)(param_2 + 0x1c) = sVar8;
  }
  bVar11 = sVar8 == 0;
LAB_00553fcd:
  if (!bVar11 && -1 < sVar8) {
    iVar6 = (int)sVar8;
    if (param_1[0x74] < iVar6) {
      iVar7 = FUN_00552390(iVar2,param_1[0x7b],iVar6 * 4);
      if (iVar7 == 0) {
        return;
      }
      param_1[0x7b] = iVar7;
      memset((void *)(iVar7 + param_1[0x74] * 4),0,(iVar6 - param_1[0x74]) * 4);
      param_1[0x74] = iVar6;
    }
    if (((char)*local_8 != '?') || (*(int *)(param_1[0x7b] + -4 + iVar6 * 4) == 0)) {
      FUN_005521a0(iVar2,*(undefined4 *)(param_1[0x7b] + -4 + iVar6 * 4));
      _Dst = (void *)FUN_00552230(iVar2,_Size + 1);
      if (_Dst != (void *)0x0) {
        memcpy(_Dst,local_8,_Size);
        *(undefined1 *)((int)_Dst + _Size) = 0;
      }
      *(void **)(param_1[0x7b] + -4 + iVar6 * 4) = _Dst;
    }
  }
LAB_0055408d:
  if ((param_1[0x11] == 0) && (*(int *)(iVar2 + 0x74) < param_1[0x73])) {
    FUN_00553950(param_1,"too many SQL variables");
  }
  return;
}


/* FUN_005540d0 @ 005540d0  kind=gamemisc  attributed-by=caller-vote  size=95 */

void FUN_005540d0(undefined4 param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == 0) {
    FUN_00555e30(param_1,param_3);
    FUN_00555e30(param_1,param_4);
    return;
  }
  if (param_4 != 0) {
    *(int *)(param_2 + 0xc) = param_4;
    *(ushort *)(param_2 + 2) = *(ushort *)(param_2 + 2) | *(ushort *)(param_4 + 2) & 0x100;
  }
  if (param_3 != 0) {
    *(int *)(param_2 + 8) = param_3;
    *(ushort *)(param_2 + 2) = *(ushort *)(param_2 + 2) | *(ushort *)(param_3 + 2) & 0x100;
  }
  FUN_00536750(param_2);
  return;
}


/* FUN_005545d0 @ 005545d0  kind=gamemisc  attributed-by=caller-vote  size=92 */

int FUN_005545d0(int param_1,char *param_2,int param_3)

{
  int iVar1;
  
  if ((param_2 != (char *)0x0) && (*param_2 == -0x7c)) {
    FUN_0056be90(*(undefined4 *)(param_1 + 8),0xe,*(undefined4 *)(param_2 + 0x18),param_3);
    return param_3;
  }
  iVar1 = FUN_00554e20(param_1,param_2,param_3);
  if ((iVar1 != param_3) && (*(int *)(param_1 + 8) != 0)) {
    FUN_0056be90(*(int *)(param_1 + 8),0xf,iVar1,param_3);
  }
  return param_3;
}


/* FUN_00554760 @ 00554760  kind=gamemisc  attributed-by=caller-vote  size=166 */

undefined4
FUN_00554760(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,char param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int extraout_EDX;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = 0;
  piVar3 = (int *)(param_1 + 100);
  while (((piVar3[4] < 1 || (*piVar3 != param_4)) || (piVar3[1] != param_3))) {
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 6;
    if (9 < iVar2) {
      FUN_00554810(iVar1,param_2,param_4,param_3,param_5);
      if (param_6 == '\0') {
        FUN_00554490(param_1,param_4,param_3,param_5);
      }
      else if (*(int *)(iVar1 + 4) != 0) {
        *(char *)(*(int *)(iVar1 + 4) + -0x11 + *(int *)(iVar1 + 0x1c) * 0x14) = param_6;
        return param_5;
      }
      return param_5;
    }
  }
  piVar3[5] = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  FUN_00554340(param_1,piVar3[4]);
  return *(undefined4 *)(extraout_EDX + 0x10);
}


/* FUN_00554810 @ 00554810  kind=gamemisc  attributed-by=caller-vote  size=165 */

void FUN_00554810(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((param_4 < 0) || (param_4 == *(short *)(param_2 + 0x24))) {
    iVar1 = *(int *)(param_1 + 0x1c);
    if ((iVar1 < *(int *)(param_1 + 0x20)) || (iVar3 = FUN_0053b4b0(param_1), iVar3 == 0)) {
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      iVar3 = *(int *)(param_1 + 4);
      *(undefined2 *)(iVar3 + iVar1 * 0x14) = 0x41;
      iVar3 = iVar3 + iVar1 * 0x14;
      *(undefined4 *)(iVar3 + 4) = param_3;
      *(undefined1 *)(iVar3 + 3) = 0;
      *(undefined4 *)(iVar3 + 8) = param_5;
      *(undefined4 *)(iVar3 + 0xc) = 0;
      *(undefined4 *)(iVar3 + 0x10) = 0;
    }
  }
  else {
    uVar2 = 0x1d;
    if ((*(byte *)(param_2 + 0x2a) & 0x10) != 0) {
      uVar2 = 0x89;
    }
    FUN_0056bef0(param_1,uVar2,param_3,param_4,param_5);
  }
  if (-1 < param_4) {
    FUN_00550cd0(param_1,param_2,param_4,param_5);
  }
  return;
}


/* FUN_00555e30 @ 00555e30  kind=gamemisc  attributed-by=caller-vote  size=156 */

void FUN_00555e30(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    if ((*(ushort *)(param_2 + 2) & 0x4000) == 0) {
      FUN_00555e30(param_1,*(undefined4 *)(param_2 + 8));
      FUN_00555e30(param_1,*(undefined4 *)(param_2 + 0xc));
      if (((*(ushort *)(param_2 + 2) & 0x2000) == 0) && ((*(byte *)(param_2 + 0x22) & 1) != 0)) {
        FUN_005521a0(param_1,*(undefined4 *)(param_2 + 4));
      }
      if ((*(ushort *)(param_2 + 2) & 0x800) == 0) {
        FUN_00556700(param_1,*(undefined4 *)(param_2 + 0x10));
      }
      else {
        iVar1 = *(int *)(param_2 + 0x10);
        if (iVar1 != 0) {
          FUN_005303a0(param_1,iVar1);
          FUN_005521a0(param_1,iVar1);
        }
      }
    }
    if ((*(ushort *)(param_2 + 2) & 0x8000) == 0) {
      FUN_005521a0(param_1,param_2);
    }
  }
  return;
}


/* FUN_00555ed0 @ 00555ed0  kind=gamemisc  attributed-by=caller-vote  size=102 */

int FUN_00555ed0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = FUN_00553bb0(iVar1,0x97,param_3,1);
  if (iVar2 == 0) {
    FUN_00556700(iVar1,param_2);
    return 0;
  }
  *(undefined4 *)(iVar2 + 0x10) = param_2;
  FUN_00536750(iVar2);
  if (*(int *)(*param_1 + 0x5c) < *(int *)(iVar2 + 0x14)) {
    FUN_00553950(param_1,"Expression tree is too large (maximum depth %d)",*(int *)(*param_1 + 0x5c)
                );
  }
  return iVar2;
}


/* FUN_005565a0 @ 005565a0  kind=gamemisc  attributed-by=caller-vote  size=174 */

uint * FUN_005565a0(undefined4 *param_1,uint *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = *param_1;
  if (param_2 == (uint *)0x0) {
    param_2 = (uint *)FUN_00552230(uVar2,0xc);
    if (param_2 != (uint *)0x0) {
      param_2[0] = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      uVar3 = FUN_00552230(uVar2,0x14);
      param_2[2] = uVar3;
      if (uVar3 != 0) goto LAB_00556620;
    }
LAB_00556604:
    FUN_00555e30(uVar2,param_3);
    FUN_00556700(uVar2,param_2);
    return (uint *)0x0;
  }
  uVar3 = *param_2;
  if ((uVar3 & uVar3 - 1) == 0) {
    uVar3 = FUN_00552390(uVar2,param_2[2],uVar3 * 0x28);
    if (uVar3 == 0) goto LAB_00556604;
    param_2[2] = uVar3;
  }
LAB_00556620:
  puVar1 = (undefined8 *)(param_2[2] + *param_2 * 0x14);
  *param_2 = *param_2 + 1;
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  *(undefined4 *)puVar1 = param_3;
  return param_2;
}


/* FUN_00556650 @ 00556650  kind=gamemisc  attributed-by=caller-vote  size=40 */

void FUN_00556650(int *param_1,int *param_2)

{
  if ((param_2 != (int *)0x0) && (*(int *)(*param_1 + 0x58) < *param_2)) {
    FUN_00553950();
    return;
  }
  return;
}


/* FUN_00556700 @ 00556700  kind=gamemisc  attributed-by=caller-vote  size=221 */

void FUN_00556700(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_2 != (int *)0x0) {
    iVar3 = 0;
    puVar4 = (undefined4 *)param_2[2];
    if (0 < *param_2) {
      do {
        FUN_00555e30(param_1,*puVar4);
        puVar1 = (undefined4 *)puVar4[1];
        if (param_1 == 0) {
LAB_0055679f:
          FUN_00524410(puVar1);
        }
        else if (*(int *)(param_1 + 0x1f0) == 0) {
          if (((puVar1 == (undefined4 *)0x0) || (puVar1 < *(undefined4 **)(param_1 + 0x104))) ||
             (*(undefined4 **)(param_1 + 0x108) <= puVar1)) goto LAB_0055679f;
          *puVar1 = *(undefined4 *)(param_1 + 0x100);
          *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + -1;
          *(undefined4 **)(param_1 + 0x100) = puVar1;
        }
        else if (((puVar1 == (undefined4 *)0x0) || (puVar1 < *(undefined4 **)(param_1 + 0x104))) ||
                (*(undefined4 **)(param_1 + 0x108) <= puVar1)) {
          iVar2 = (*DAT_00766608._4_4_)(puVar1);
          **(int **)(param_1 + 0x1f0) = **(int **)(param_1 + 0x1f0) + iVar2;
        }
        else {
          **(int **)(param_1 + 0x1f0) =
               **(int **)(param_1 + 0x1f0) + (uint)*(ushort *)(param_1 + 0xe8);
        }
        FUN_005521a0(param_1,puVar4[2]);
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 5;
      } while (iVar3 < *param_2);
    }
    FUN_005521a0(param_1,param_2[2]);
    FUN_005521a0(param_1,param_2);
  }
  return;
}


/* FUN_00556980 @ 00556980  kind=gamemisc  attributed-by=caller-vote  size=115 */

void FUN_00556980(undefined4 *param_1,int *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  void *_Src;
  size_t _Size;
  void *_Dst;
  
  if (param_2 != (int *)0x0) {
    iVar1 = *param_2;
    iVar2 = param_2[2];
    _Src = (void *)*param_3;
    _Size = param_3[1];
    if (_Src == (void *)0x0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = (void *)FUN_00552230(*param_1,_Size + 1);
      if (_Dst != (void *)0x0) {
        memcpy(_Dst,_Src,_Size);
        *(undefined1 *)((int)_Dst + _Size) = 0;
      }
    }
    *(void **)(iVar2 + iVar1 * 0x14 + -0x10) = _Dst;
    if ((param_4 != 0) && (_Dst != (void *)0x0)) {
      FUN_00552be0(_Dst);
    }
  }
  return;
}


/* FUN_00556a00 @ 00556a00  kind=gamemisc  attributed-by=caller-vote  size=120 */

void FUN_00556a00(undefined4 *param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  void *_Src;
  void *_Dst;
  size_t _Size;
  
  uVar2 = *param_1;
  if (param_2 != (int *)0x0) {
    iVar1 = param_2[2] + *param_2 * 0x14;
    FUN_005521a0(uVar2,*(undefined4 *)(iVar1 + -0xc));
    _Src = *(void **)(param_3 + 4);
    _Size = *(int *)(param_3 + 8) - (int)_Src;
    if (_Src == (void *)0x0) {
      *(undefined4 *)(iVar1 + -0xc) = 0;
      return;
    }
    _Dst = (void *)FUN_00552230(uVar2,_Size + 1);
    if (_Dst != (void *)0x0) {
      memcpy(_Dst,_Src,_Size);
      *(undefined1 *)((int)_Dst + _Size) = 0;
    }
    *(void **)(iVar1 + -0xc) = _Dst;
  }
  return;
}


/* FUN_00556b40 @ 00556b40  kind=gamemisc  attributed-by=caller-vote  size=47 */

void FUN_00556b40(int *param_1,int param_2)

{
  FUN_00536750(param_2);
  if (*(int *)(*param_1 + 0x5c) < *(int *)(param_2 + 0x14)) {
    FUN_00553950(param_1,"Expression tree is too large (maximum depth %d)",*(int *)(*param_1 + 0x5c)
                );
  }
  return;
}


/* FUN_00556be0 @ 00556be0  kind=gamemisc  attributed-by=caller-vote  size=118 */

int FUN_00556be0(int param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int iVar8;
  
  if (param_2 == (char *)0x0) {
    return -1;
  }
  cVar1 = *param_2;
  pcVar7 = param_2;
  while (cVar1 != '\0') {
    pcVar7 = pcVar7 + 1;
    cVar1 = *pcVar7;
  }
  iVar8 = *(int *)(param_1 + 0x14) + -1;
  puVar6 = (undefined4 *)(iVar8 * 0x10 + *(int *)(param_1 + 0x10));
  while( true ) {
    if (iVar8 < 0) {
      return iVar8;
    }
    pcVar2 = (char *)*puVar6;
    uVar4 = 0;
    if (pcVar2 != (char *)0x0) {
      cVar1 = *pcVar2;
      pcVar3 = pcVar2;
      while (cVar1 != '\0') {
        pcVar3 = pcVar3 + 1;
        cVar1 = *pcVar3;
      }
      uVar4 = (int)pcVar3 - (int)pcVar2 & 0x3fffffff;
    }
    if ((((int)pcVar7 - (int)param_2 & 0x3fffffffU) == uVar4) &&
       (iVar5 = FUN_0057a2c0(pcVar2,param_2), iVar5 == 0)) break;
    puVar6 = puVar6 + -4;
    iVar8 = iVar8 + -1;
  }
  return iVar8;
}


/* FUN_00557190 @ 00557190  kind=gamemisc  attributed-by=caller-vote  size=310 */

int FUN_00557190(int param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  uint local_c;
  int local_8;
  
  local_8 = 0;
  uVar10 = 0;
  if (param_2 != (byte *)0x0) {
    bVar2 = *param_2;
    pbVar9 = param_2;
    while (bVar2 != 0) {
      pbVar9 = pbVar9 + 1;
      bVar2 = *pbVar9;
    }
    uVar10 = (int)pbVar9 - (int)param_2 & 0x3fffffff;
  }
  iVar3 = *(int *)(param_1 + 0x14);
  local_c = 0;
  iVar6 = 0;
  if (0 < iVar3) {
    iVar4 = *(int *)(param_1 + 0x10);
    do {
      uVar5 = local_c;
      if ((int)local_c < 2) {
        uVar5 = local_c ^ 1;
      }
      iVar6 = *(int *)(uVar5 * 0x10 + 0xc + iVar4);
      if (param_3 == (byte *)0x0) {
LAB_0055724b:
        puVar7 = (uint *)(iVar6 + 0x18);
        if (*(int *)(iVar6 + 0x24) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = 0;
          uVar11 = uVar10;
          pbVar9 = param_2;
          if (uVar10 != 0) {
            do {
              uVar11 = uVar11 - 1;
              uVar5 = uVar5 ^ (uint)(byte)(&DAT_007120d8)[*pbVar9] ^ uVar5 * 8;
              pbVar9 = pbVar9 + 1;
            } while (0 < (int)uVar11);
          }
          uVar5 = uVar5 % *puVar7;
        }
        iVar6 = FUN_00537190(puVar7,param_2,uVar10,uVar5);
        if (iVar6 == 0) {
          local_8 = 0;
        }
        else {
          local_8 = *(int *)(iVar6 + 8);
          if (local_8 != 0) {
            return local_8;
          }
        }
      }
      else {
        pbVar9 = *(byte **)(uVar5 * 0x10 + iVar4);
        bVar2 = *param_3;
        pbVar8 = param_3;
        while ((bVar2 != 0 && ((&DAT_007120d8)[bVar2] == (&DAT_007120d8)[*pbVar9]))) {
          pbVar1 = pbVar8 + 1;
          pbVar8 = pbVar8 + 1;
          pbVar9 = pbVar9 + 1;
          bVar2 = *pbVar1;
        }
        if ((&DAT_007120d8)[*pbVar8] == (&DAT_007120d8)[*pbVar9]) goto LAB_0055724b;
      }
      local_c = local_c + 1;
      iVar6 = local_8;
    } while ((int)local_c < iVar3);
  }
  return iVar6;
}


/* FUN_00557410 @ 00557410  kind=gamemisc  attributed-by=caller-vote  size=730 */

void FUN_00557410(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *local_10;
  int local_c;
  uint local_8;
  
  iVar1 = *param_1;
  if (*(char *)(iVar1 + 0x38) != '\0') {
    return;
  }
  if (*(char *)((int)param_1 + 0x12) != '\0') {
    return;
  }
  if (param_1[0x11] != 0) {
    return;
  }
  piVar3 = (int *)FUN_0055ab80(param_1);
  if (piVar3 != (int *)0x0) {
    FUN_0056bdc0(piVar3,6);
    if (0 < param_1[0x57]) {
      FUN_00573d80(piVar3,param_1[0x57] + -1);
      iVar6 = 0;
      local_8 = 1;
      if (0 < *(int *)(iVar1 + 0x14)) {
        local_10 = param_1 + 0x58;
        local_c = 0;
        do {
          if ((param_1[0x56] & local_8) != 0) {
            FUN_00576ba0(piVar3,iVar6);
            FUN_0056be90(piVar3,0x23,iVar6,(param_1[0x55] & local_8) != 0);
            if (*(char *)(iVar1 + 0x81) == '\0') {
              FUN_0056bef0(piVar3,0x26,iVar6,*local_10,
                           *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0xc + local_c) + 4));
            }
          }
          local_10 = local_10 + 1;
          local_8 = local_8 * 2;
          iVar6 = iVar6 + 1;
          local_c = local_c + 0x10;
        } while (iVar6 < *(int *)(iVar1 + 0x14));
      }
      local_10 = (int *)0x0;
      if (0 < param_1[0x76]) {
        do {
          for (piVar2 = *(int **)(*(int *)(param_1[0x88] + (int)local_10 * 4) + 0x38);
              (piVar2 != (int *)0x0 && (*piVar2 != iVar1)); piVar2 = (int *)piVar2[6]) {
          }
          iVar6 = piVar3[7];
          if ((iVar6 < piVar3[8]) || (iVar4 = FUN_0053b4b0(piVar3), iVar4 == 0)) {
            iVar4 = piVar3[1];
            piVar3[7] = piVar3[7] + 1;
            *(undefined2 *)(iVar4 + iVar6 * 0x14) = 0x84;
            *(undefined1 *)(iVar4 + 3 + iVar6 * 0x14) = 0;
            *(undefined4 *)(iVar4 + 4 + iVar6 * 0x14) = 0;
            *(undefined4 *)(iVar4 + 8 + iVar6 * 0x14) = 0;
            *(undefined4 *)(iVar4 + 0xc + iVar6 * 0x14) = 0;
            *(undefined4 *)(iVar4 + 0x10 + iVar6 * 0x14) = 0;
          }
          else {
            iVar6 = 1;
          }
          if ((piVar3[1] != 0) && (*(char *)(*piVar3 + 0x38) == '\0')) {
            if (iVar6 < 0) {
              iVar6 = piVar3[7] + -1;
            }
            iVar4 = piVar3[1] + iVar6 * 0x14;
            FUN_00539320(*piVar3,(int)*(char *)(piVar3[1] + 1 + iVar6 * 0x14),
                         *(undefined4 *)(piVar3[1] + 0x10 + iVar6 * 0x14));
            *(undefined4 *)(iVar4 + 0x10) = 0;
            if (piVar2 == (int *)0x0) {
              *(undefined4 *)(iVar4 + 0x10) = 0;
              *(undefined1 *)(iVar4 + 1) = 0;
            }
            else {
              *(int **)(iVar4 + 0x10) = piVar2;
              *(undefined1 *)(iVar4 + 1) = 0xf6;
              piVar2[3] = piVar2[3] + 1;
            }
          }
          local_10 = (int *)((int)local_10 + 1);
        } while ((int)local_10 < param_1[0x76]);
      }
      param_1[0x76] = 0;
      FUN_00532250(param_1);
      FUN_0054ae60(param_1);
      iVar6 = piVar3[7];
      iVar4 = param_1[0x57];
      if ((iVar6 < piVar3[8]) || (iVar5 = FUN_0053b4b0(piVar3), iVar5 == 0)) {
        iVar5 = piVar3[1];
        piVar3[7] = piVar3[7] + 1;
        *(undefined2 *)(iVar5 + iVar6 * 0x14) = 1;
        *(undefined1 *)(iVar5 + 3 + iVar6 * 0x14) = 0;
        *(undefined4 *)(iVar5 + 4 + iVar6 * 0x14) = 0;
        *(int *)(iVar5 + 8 + iVar6 * 0x14) = iVar4;
        *(undefined4 *)(iVar5 + 0xc + iVar6 * 0x14) = 0;
        *(undefined4 *)(iVar5 + 0x10 + iVar6 * 0x14) = 0;
      }
    }
    if ((param_1[0x11] == 0) && (*(char *)(iVar1 + 0x38) == '\0')) {
      if ((param_1[0x6b] != 0) && (param_1[0x12] == 0)) {
        param_1[0x12] = 1;
      }
      FUN_00574250(piVar3,param_1);
      param_1[3] = 0x65;
      *(undefined1 *)(param_1 + 4) = 0;
      goto LAB_005576b0;
    }
  }
  param_1[3] = 1;
LAB_005576b0:
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x73] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  return;
}


/* FUN_005579f0 @ 005579f0  kind=gamemisc  attributed-by=caller-vote  size=72 */

undefined4
FUN_005579f0(undefined4 *param_1,int *param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  if ((-1 < param_3) && (param_3 != 1)) {
    iVar1 = *param_2;
    *param_1 = param_2;
    param_1[2] = *(undefined4 *)(*(int *)(iVar1 + 0x10) + param_3 * 0x10);
    param_1[1] = *(undefined4 *)(*(int *)(iVar1 + 0x10) + 0xc + param_3 * 0x10);
    param_1[3] = param_4;
    param_1[4] = param_5;
    return 1;
  }
  return 0;
}


/* FUN_00557a40 @ 00557a40  kind=gamemisc  attributed-by=caller-vote  size=142 */

undefined4 FUN_00557a40(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  while( true ) {
    if (param_2 == (undefined4 *)0x0) {
      return 0;
    }
    piVar1 = (int *)*param_2;
    if (piVar1 != (int *)0x0) {
      puVar4 = (undefined4 *)piVar1[2];
      iVar3 = 0;
      if (0 < *piVar1) {
        do {
          iVar2 = FUN_00557950(param_1,*puVar4);
          if (iVar2 != 0) {
            return 1;
          }
          iVar3 = iVar3 + 1;
          puVar4 = puVar4 + 5;
        } while (iVar3 < *piVar1);
      }
    }
    iVar3 = FUN_00557ad0(param_1,param_2[10]);
    if (((iVar3 != 0) || (iVar3 = FUN_00557950(param_1,param_2[0xb]), iVar3 != 0)) ||
       (iVar3 = FUN_00557950(param_1,param_2[0xd]), iVar3 != 0)) break;
    param_2 = (undefined4 *)param_2[0xf];
  }
  return 1;
}


/* FUN_00557ad0 @ 00557ad0  kind=gamemisc  attributed-by=caller-vote  size=248 */

undefined4 FUN_00557ad0(undefined4 *param_1,short *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  short *psVar7;
  int local_8;
  
  if (param_2 == (short *)0x0) {
    return 0;
  }
  pbVar1 = (byte *)param_1[2];
  local_8 = 0;
  psVar7 = param_2 + 4;
  if (0 < *param_2) {
    do {
      pbVar2 = *(byte **)(psVar7 + 2);
      pbVar5 = pbVar2;
      if (pbVar2 != (byte *)0x0) {
        bVar4 = *pbVar2;
        pbVar6 = pbVar1;
        if (bVar4 != 0) {
          do {
            if ((&DAT_007120d8)[bVar4] != (&DAT_007120d8)[*pbVar6]) break;
            bVar4 = pbVar2[1];
            pbVar2 = pbVar2 + 1;
            pbVar6 = pbVar6 + 1;
          } while (bVar4 != 0);
          pbVar5 = *(byte **)(psVar7 + 2);
        }
        if ((&DAT_007120d8)[*pbVar2] != (&DAT_007120d8)[*pbVar6]) {
          FUN_00553950(*param_1,"%s %T cannot reference objects in database %s",param_1[3],
                       param_1[4],*(undefined4 *)(psVar7 + 2));
          return 1;
        }
      }
      FUN_005521a0(*(undefined4 *)*param_1,pbVar5);
      psVar7[2] = 0;
      psVar7[3] = 0;
      *(undefined4 *)psVar7 = param_1[1];
      iVar3 = FUN_00557a40(param_1,*(undefined4 *)(psVar7 + 10));
      if ((iVar3 != 0) || (iVar3 = FUN_00557950(param_1,*(undefined4 *)(psVar7 + 0x18)), iVar3 != 0)
         ) {
        return 1;
      }
      local_8 = local_8 + 1;
      psVar7 = psVar7 + 0x24;
    } while (local_8 < *param_2);
  }
  return 0;
}


/* FUN_005581b0 @ 005581b0  kind=gamemisc  attributed-by=caller-vote  size=317 */

void FUN_005581b0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  char *pcVar7;
  
  iVar4 = *(int *)(param_2 + 0x10);
  while (iVar4 != 0) {
    if ((param_1 == 0) || (*(int *)(param_1 + 0x1f0) == 0)) {
      if (*(int *)(iVar4 + 0x10) == 0) {
        iVar2 = *(int *)(iVar4 + 0xc);
        if (iVar2 == 0) {
          pcVar7 = *(char **)(iVar4 + 8);
        }
        else {
          pcVar7 = *(char **)(iVar2 + 8);
        }
        uVar6 = 0;
        if (pcVar7 != (char *)0x0) {
          cVar1 = *pcVar7;
          pcVar5 = pcVar7;
          while (cVar1 != '\0') {
            pcVar5 = pcVar5 + 1;
            cVar1 = *pcVar5;
          }
          uVar6 = (int)pcVar5 - (int)pcVar7 & 0x3fffffff;
        }
        FUN_0055ada0(*(int *)(param_2 + 0x40) + 0x38,pcVar7,uVar6,iVar2);
      }
      else {
        *(undefined4 *)(*(int *)(iVar4 + 0x10) + 0xc) = *(undefined4 *)(iVar4 + 0xc);
      }
      if (*(int *)(iVar4 + 0xc) != 0) {
        *(undefined4 *)(*(int *)(iVar4 + 0xc) + 0x10) = *(undefined4 *)(iVar4 + 0x10);
      }
    }
    iVar2 = *(int *)(iVar4 + 0x1c);
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + 0x1c);
      FUN_00555e30(param_1,*(undefined4 *)(iVar3 + 0x14));
      FUN_00556700(param_1,*(undefined4 *)(iVar3 + 0x18));
      iVar3 = *(int *)(iVar3 + 8);
      if (iVar3 != 0) {
        FUN_005303a0(param_1,iVar3);
        FUN_005521a0(param_1,iVar3);
      }
      FUN_00555e30(param_1,*(undefined4 *)(iVar2 + 0xc));
      FUN_005521a0(param_1,iVar2);
    }
    iVar2 = *(int *)(iVar4 + 0x20);
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + 0x1c);
      FUN_00555e30(param_1,*(undefined4 *)(iVar3 + 0x14));
      FUN_00556700(param_1,*(undefined4 *)(iVar3 + 0x18));
      iVar3 = *(int *)(iVar3 + 8);
      if (iVar3 != 0) {
        FUN_005303a0(param_1,iVar3);
        FUN_005521a0(param_1,iVar3);
      }
      FUN_00555e30(param_1,*(undefined4 *)(iVar2 + 0xc));
      FUN_005521a0(param_1,iVar2);
    }
    iVar2 = *(int *)(iVar4 + 4);
    FUN_005521a0(param_1,iVar4);
    iVar4 = iVar2;
  }
  return;
}


/* FUN_00558520 @ 00558520  kind=gamemisc  attributed-by=caller-vote  size=94 */

undefined4 FUN_00558520(undefined4 *param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  char *pcVar6;
  uint uVar7;
  
  pcVar2 = (char *)*param_1;
  uVar7 = 0;
  if (pcVar2 != (char *)0x0) {
    cVar1 = *pcVar2;
    pcVar6 = pcVar2;
    while (cVar1 != '\0') {
      pcVar6 = pcVar6 + 1;
      cVar1 = *pcVar6;
    }
    uVar7 = (int)pcVar6 - (int)pcVar2 & 0x3fffffff;
  }
  puVar5 = (uint *)(param_1[0x10] + 0x38);
  if (*(int *)(param_1[0x10] + 0x44) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0057a870(pcVar2,uVar7);
    uVar3 = uVar3 % *puVar5;
  }
  iVar4 = FUN_00537190(puVar5,pcVar2,uVar7,uVar3);
  if (iVar4 == 0) {
    return 0;
  }
  return *(undefined4 *)(iVar4 + 8);
}


/* FUN_00559bc0 @ 00559bc0  kind=gamemisc  attributed-by=caller-vote  size=844 */

void FUN_00559bc0(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int param_6,undefined4 param_7)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  int local_8;
  
  piVar3 = param_2;
  piVar2 = (int *)param_1[2];
  local_8 = 0;
  iVar4 = FUN_005741e0(piVar2);
  iVar6 = piVar2[7];
  if ((iVar6 < piVar2[8]) || (iVar5 = FUN_0053b4b0(piVar2), iVar5 == 0)) {
    iVar5 = piVar2[1];
    piVar2[7] = piVar2[7] + 1;
    *(undefined4 *)(iVar5 + 4 + iVar6 * 0x14) = param_3;
    *(int *)(iVar5 + 8 + iVar6 * 0x14) = iVar4;
    *(undefined2 *)(iVar5 + iVar6 * 0x14) = 0x36;
    *(undefined1 *)(iVar5 + 3 + iVar6 * 0x14) = 0;
    *(undefined4 *)(iVar5 + 0xc + iVar6 * 0x14) = param_4;
    *(undefined4 *)(iVar5 + 0x10 + iVar6 * 0x14) = 0;
  }
  if ((((*(uint *)(*param_1 + 0x18) & 0x40000) != 0) &&
      ((iVar6 = FUN_00558520(param_2), iVar6 != 0 || (param_2[4] != 0)))) || (param_6 != 0)) {
    param_2 = (int *)0x0;
    for (iVar6 = param_6; iVar6 != 0; iVar6 = *(int *)(iVar6 + 0x20)) {
      if ((((*(char *)(iVar6 + 8) == 'j') && ((*(byte *)(iVar6 + 9) & 3) != 0)) &&
          (iVar5 = FUN_0052f320(*(undefined4 *)(iVar6 + 0x10),0), iVar5 != 0)) &&
         (iVar5 = FUN_0053ad90(param_1,iVar6,piVar3,param_7), iVar5 != 0)) {
        param_2 = (int *)((uint)param_2 | *(uint *)(iVar5 + 0x10));
      }
    }
    uVar7 = FUN_005583e0(param_1,piVar3);
    iVar6 = param_1[0x13];
    param_1[0x13] = *(short *)((int)piVar3 + 0x26) + 1 + iVar6;
    iVar5 = piVar2[7];
    local_8 = iVar6 + 1;
    if ((iVar5 < piVar2[8]) || (iVar8 = FUN_0053b4b0(piVar2), iVar8 == 0)) {
      iVar8 = piVar2[1];
      piVar2[7] = piVar2[7] + 1;
      *(undefined4 *)(iVar8 + 4 + iVar5 * 0x14) = param_4;
      *(undefined2 *)(iVar8 + iVar5 * 0x14) = 0xe;
      *(undefined1 *)(iVar8 + 3 + iVar5 * 0x14) = 0;
      *(int *)(iVar8 + 8 + iVar5 * 0x14) = local_8;
      *(undefined4 *)(iVar8 + 0xc + iVar5 * 0x14) = 0;
      *(undefined4 *)(iVar8 + 0x10 + iVar5 * 0x14) = 0;
    }
    iVar5 = 0;
    if (0 < *(short *)((int)piVar3 + 0x26)) {
      do {
        if ((((uint)param_2 | uVar7) == 0xffffffff) ||
           ((((uint)param_2 | uVar7) & 1 << ((byte)iVar5 & 0x1f)) != 0)) {
          FUN_00554810(piVar2,piVar3,param_3,iVar5,iVar6 + 2 + iVar5);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(short *)((int)piVar3 + 0x26));
    }
    FUN_00550410(param_1,param_6,0x6a,0,1,piVar3,local_8,param_7,iVar4);
    iVar6 = piVar2[7];
    if ((iVar6 < piVar2[8]) || (iVar5 = FUN_0053b4b0(piVar2), iVar5 == 0)) {
      piVar2[7] = piVar2[7] + 1;
      iVar5 = piVar2[1];
      *(undefined4 *)(iVar5 + 4 + iVar6 * 0x14) = param_3;
      *(int *)(iVar5 + 8 + iVar6 * 0x14) = iVar4;
      *(undefined2 *)(iVar5 + iVar6 * 0x14) = 0x36;
      *(undefined1 *)(iVar5 + 3 + iVar6 * 0x14) = 0;
      *(undefined4 *)(iVar5 + 0xc + iVar6 * 0x14) = param_4;
      *(undefined4 *)(iVar5 + 0x10 + iVar6 * 0x14) = 0;
    }
    FUN_00557cc0(param_1,piVar3,local_8,0);
  }
  if (piVar3[3] == 0) {
    FUN_00559f10(param_1,piVar3,param_3,0);
    iVar6 = piVar2[7];
    if ((iVar6 < piVar2[8]) || (iVar5 = FUN_0053b4b0(piVar2), iVar5 == 0)) {
      piVar2[7] = piVar2[7] + 1;
      iVar5 = piVar2[1];
      *(undefined2 *)(iVar5 + iVar6 * 0x14) = 0x3b;
      iVar5 = iVar5 + iVar6 * 0x14;
      *(undefined4 *)(iVar5 + 4) = param_3;
      *(undefined1 *)(iVar5 + 3) = 0;
      *(undefined4 *)(iVar5 + 0xc) = 0;
      *(undefined4 *)(iVar5 + 0x10) = 0;
      *(uint *)(iVar5 + 8) = (uint)(param_5 != 0);
    }
    if (param_5 != 0) {
      iVar6 = piVar2[1];
      iVar5 = *piVar3;
      iVar8 = *piVar2;
      if ((iVar6 == 0) || (*(char *)(iVar8 + 0x38) != '\0')) {
        FUN_00539320(iVar8,0,iVar5);
      }
      else {
        iVar1 = iVar6 + (piVar2[7] + -1) * 0x14;
        FUN_00539320(iVar8,(int)*(char *)(iVar1 + 1),
                     *(undefined4 *)(iVar6 + 0x10 + (piVar2[7] + -1) * 0x14));
        *(undefined4 *)(iVar1 + 0x10) = 0;
        if (iVar5 == 0) {
          *(undefined4 *)(iVar1 + 0x10) = 0;
          *(undefined1 *)(iVar1 + 1) = 0;
        }
        else {
          uVar10 = FUN_00568070(iVar5);
          uVar9 = FUN_005524a0(*piVar2,(int)((ulonglong)uVar10 >> 0x20),(int)uVar10);
          *(undefined4 *)(iVar1 + 0x10) = uVar9;
          *(undefined1 *)(iVar1 + 1) = 0xff;
        }
      }
    }
  }
  FUN_00557c50(param_1,piVar3,0,local_8);
  FUN_00550410(param_1,param_6,0x6a,0,2,piVar3,local_8,param_7,iVar4);
  if (piVar2[10] != 0) {
    *(int *)(piVar2[10] - (iVar4 * 4 + 4)) = piVar2[7];
  }
  return;
}


/* FUN_00559f10 @ 00559f10  kind=gamemisc  attributed-by=caller-vote  size=187 */

void FUN_00559f10(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  
  piVar8 = param_4;
  iVar5 = param_3;
  for (iVar1 = *(int *)(param_2 + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x14)) {
    iVar5 = iVar5 + 1;
    if ((param_4 == (int *)0x0) || (*piVar8 != 0)) {
      uVar6 = FUN_00559920(param_1,iVar1,param_3,0,0);
      iVar2 = *(int *)(param_1 + 8);
      iVar3 = *(int *)(iVar1 + 0x24);
      iVar4 = *(int *)(iVar2 + 0x1c);
      if ((iVar4 < *(int *)(iVar2 + 0x20)) || (iVar7 = FUN_0053b4b0(iVar2), iVar7 == 0)) {
        *(int *)(iVar2 + 0x1c) = *(int *)(iVar2 + 0x1c) + 1;
        iVar2 = *(int *)(iVar2 + 4);
        *(int *)(iVar2 + 4 + iVar4 * 0x14) = iVar5;
        *(undefined4 *)(iVar2 + 8 + iVar4 * 0x14) = uVar6;
        *(undefined2 *)(iVar2 + iVar4 * 0x14) = 0x62;
        *(undefined1 *)(iVar2 + 3 + iVar4 * 0x14) = 0;
        *(int *)(iVar2 + 0xc + iVar4 * 0x14) = iVar3 + 1;
        *(undefined4 *)(iVar2 + 0x10 + iVar4 * 0x14) = 0;
      }
    }
    piVar8 = piVar8 + 1;
  }
  return;
}


/* FUN_00559fd0 @ 00559fd0  kind=gamemisc  attributed-by=caller-vote  size=38 */

undefined4 FUN_00559fd0(undefined1 *param_1)

{
  return CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]);
}


/* FUN_0055a0e0 @ 0055a0e0  kind=gamemisc  attributed-by=caller-vote  size=193 */

undefined4 FUN_0055a0e0(char *param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  bool bVar7;
  uint local_10;
  uint uStack_c;
  uint local_8;
  
  local_8 = 0;
  if (*param_1 == '-') {
    local_8 = 1;
  }
  else if (*param_1 != '+') goto LAB_0055a10c;
  param_1 = param_1 + 1;
LAB_0055a10c:
  cVar1 = *param_1;
  pcVar6 = param_1;
  while (cVar1 == '0') {
    pcVar6 = pcVar6 + 1;
    cVar1 = *pcVar6;
  }
  uStack_c = 0;
  local_10 = 0;
  param_1 = (char *)0x0;
  do {
    uVar5 = (int)pcVar6[(int)param_1] - 0x30;
    if (9 < uVar5) break;
    uVar2 = local_10 >> 0x1e;
    bVar7 = CARRY4(local_10,local_10 * 4);
    uVar4 = local_10 * 5;
    uVar3 = local_10 * 10;
    local_10 = uVar3 + uVar5;
    uStack_c = ((uStack_c + (uStack_c << 2 | uVar2) + (uint)bVar7) * 2 | uVar4 >> 0x1f) +
               ((int)uVar5 >> 0x1f) + (uint)CARRY4(uVar3,uVar5);
    param_1 = (char *)((int)param_1 + 1);
  } while ((int)param_1 < 0xb);
  if ((int)param_1 < 0xb) {
    uVar5 = (uint)(local_10 < local_8);
    if (((int)(uStack_c - uVar5) < 0) ||
       ((uStack_c == uVar5 || SBORROW4(uStack_c,uVar5) && (local_10 - local_8 < 0x80000000)))) {
      if (local_8 != 0) {
        local_10 = -local_10;
      }
      *param_2 = local_10;
      return 1;
    }
  }
  return 0;
}


/* FUN_0055a220 @ 0055a220  kind=gamemisc  attributed-by=caller-vote  size=1481 */

uint FUN_0055a220(byte *param_1,undefined4 *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  
  uVar4 = (uint)*param_1;
  switch(uVar4) {
  case 9:
  case 10:
  case 0xc:
  case 0xd:
  case 0x20:
    uVar4 = 1;
    bVar1 = (&DAT_007121d8)[param_1[1]];
    while ((bVar1 & 1) != 0) {
      iVar6 = uVar4 + 1;
      uVar4 = uVar4 + 1;
      bVar1 = (&DAT_007121d8)[param_1[iVar6]];
    }
    break;
  default:
switchD_0055a23e_caseD_b:
    if (((&DAT_007121d8)[uVar4] & 0x46) != 0) {
      uVar4 = 1;
      bVar1 = (&DAT_007121d8)[param_1[1]];
      while ((bVar1 & 0x46) != 0) {
        iVar6 = uVar4 + 1;
        uVar4 = uVar4 + 1;
        bVar1 = (&DAT_007121d8)[param_1[iVar6]];
      }
      uVar3 = FUN_0053cd40(param_1,uVar4);
      *param_2 = uVar3;
      return uVar4;
    }
    *param_2 = 0x94;
    return 1;
  case 0x21:
    if (param_1[1] != 0x3d) {
      *param_2 = 0x94;
      return 2;
    }
    goto LAB_0055a3b2;
  case 0x22:
  case 0x27:
  case 0x60:
    uVar2 = 1;
    bVar1 = param_1[1];
    while (uVar5 = (uint)bVar1, uVar5 != 0) {
      if (uVar5 == uVar4) {
        if (param_1[uVar2 + 1] != uVar4) break;
        uVar2 = uVar2 + 1;
      }
      iVar6 = uVar2 + 1;
      uVar2 = uVar2 + 1;
      bVar1 = param_1[iVar6];
    }
    if (uVar5 == 0x27) {
      *param_2 = 0x5e;
      return uVar2 + 1;
    }
    if (uVar5 != 0) {
      *param_2 = 0x1a;
      return uVar2 + 1;
    }
    *param_2 = 0x94;
    return uVar2;
  case 0x23:
    uVar4 = 1;
    if (((&DAT_007121d8)[param_1[1]] & 4) != 0) {
      do {
        iVar6 = uVar4 + 1;
        uVar4 = uVar4 + 1;
      } while (((&DAT_007121d8)[param_1[iVar6]] & 4) != 0);
      if (1 < (int)uVar4) {
        *param_2 = 0x84;
        return uVar4;
      }
    }
  case 0x24:
  case 0x3a:
  case 0x40:
    *param_2 = 0x85;
    uVar2 = (uint)param_1[1];
    iVar6 = 0;
    uVar4 = 1;
    if (uVar2 != 0) {
      do {
        if (((&DAT_007121d8)[uVar2] & 0x46) == 0) {
          if (uVar2 == 0x28) {
            if (0 < iVar6) goto LAB_0055a710;
            break;
          }
          if ((uVar2 != 0x3a) || (param_1[uVar4 + 1] != 0x3a)) break;
          uVar4 = uVar4 + 1;
        }
        else {
          iVar6 = iVar6 + 1;
        }
        uVar2 = (uint)param_1[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar2 != 0);
LAB_0055a73b:
      if (iVar6 != 0) {
        return uVar4;
      }
    }
    *param_2 = 0x94;
    return uVar4;
  case 0x25:
    *param_2 = 0x5a;
    return 1;
  case 0x26:
    *param_2 = 0x52;
    return 1;
  case 0x28:
    *param_2 = 0x16;
    return 1;
  case 0x29:
    *param_2 = 0x17;
    return 1;
  case 0x2a:
    *param_2 = 0x58;
    return 1;
  case 0x2b:
    *param_2 = 0x56;
    return 1;
  case 0x2c:
    *param_2 = 0x19;
    return 1;
  case 0x2d:
    if (param_1[1] != 0x2d) {
      *param_2 = 0x57;
      return 1;
    }
    bVar1 = param_1[2];
    uVar4 = 2;
    if (bVar1 != 0) {
      while (bVar1 != 10) {
        bVar1 = param_1[uVar4 + 1];
        uVar4 = uVar4 + 1;
        if (bVar1 == 0) {
          *param_2 = 0x95;
          return uVar4;
        }
      }
    }
    break;
  case 0x2e:
    if (((&DAT_007121d8)[param_1[1]] & 4) == 0) {
      *param_2 = 0x76;
      return 1;
    }
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
    uVar4 = 0;
    *param_2 = 0x81;
    bVar1 = (&DAT_007121d8)[*param_1];
    while ((bVar1 & 4) != 0) {
      iVar6 = uVar4 + 1;
      uVar4 = uVar4 + 1;
      bVar1 = (&DAT_007121d8)[param_1[iVar6]];
    }
    if (param_1[uVar4] == 0x2e) {
      bVar1 = (&DAT_007121d8)[param_1[uVar4 + 1]];
      uVar2 = uVar4;
      while (uVar4 = uVar2 + 1, (bVar1 & 4) != 0) {
        bVar1 = (&DAT_007121d8)[param_1[uVar2 + 2]];
        uVar2 = uVar4;
      }
      *param_2 = 0x82;
    }
    if (((param_1[uVar4] == 0x65) || (param_1[uVar4] == 0x45)) &&
       ((bVar1 = param_1[uVar4 + 1], ((&DAT_007121d8)[bVar1] & 4) != 0 ||
        (((bVar1 == 0x2b || (bVar1 == 0x2d)) && (((&DAT_007121d8)[param_1[uVar4 + 2]] & 4) != 0)))))
       ) {
      iVar6 = uVar4 + 2;
      uVar4 = uVar4 + 2;
      bVar1 = (&DAT_007121d8)[param_1[iVar6]];
      while ((bVar1 & 4) != 0) {
        iVar6 = uVar4 + 1;
        uVar4 = uVar4 + 1;
        bVar1 = (&DAT_007121d8)[param_1[iVar6]];
      }
      *param_2 = 0x82;
    }
    if (((&DAT_007121d8)[param_1[uVar4]] & 0x46) == 0) {
      return uVar4;
    }
    do {
      uVar4 = uVar4 + 1;
      *param_2 = 0x94;
    } while (((&DAT_007121d8)[param_1[uVar4]] & 0x46) != 0);
    return uVar4;
  case 0x2f:
    if ((param_1[1] != 0x2a) || (bVar1 = param_1[2], bVar1 == 0)) {
      *param_2 = 0x59;
      return 1;
    }
    for (uVar4 = 3; (bVar1 != 0x2a || (param_1[uVar4] != 0x2f)); uVar4 = uVar4 + 1) {
      bVar1 = param_1[uVar4];
      if (bVar1 == 0) goto LAB_0055a347;
    }
    uVar4 = uVar4 + 1;
LAB_0055a347:
    *param_2 = 0x95;
    return uVar4;
  case 0x3b:
    *param_2 = 1;
    return 1;
  case 0x3c:
    bVar1 = param_1[1];
    if (bVar1 == 0x3d) {
      *param_2 = 0x4e;
      return 2;
    }
    if (bVar1 != 0x3e) {
      if (bVar1 == 0x3c) {
        *param_2 = 0x54;
        return 2;
      }
      *param_2 = 0x4f;
      return 1;
    }
LAB_0055a3b2:
    *param_2 = 0x4b;
    return 2;
  case 0x3d:
    *param_2 = 0x4c;
    return (param_1[1] == 0x3d) + 1;
  case 0x3e:
    if (param_1[1] == 0x3d) {
      *param_2 = 0x50;
      return 2;
    }
    if (param_1[1] == 0x3e) {
      *param_2 = 0x55;
      return 2;
    }
    *param_2 = 0x4d;
    return 1;
  case 0x3f:
    uVar4 = 1;
    *param_2 = 0x85;
    if (((&DAT_007121d8)[param_1[1]] & 4) == 0) {
      return 1;
    }
    do {
      iVar6 = uVar4 + 1;
      uVar4 = uVar4 + 1;
    } while (((&DAT_007121d8)[param_1[iVar6]] & 4) != 0);
    return uVar4;
  case 0x58:
  case 0x78:
    if (param_1[1] != 0x27) goto switchD_0055a23e_caseD_b;
    uVar4 = 2;
    *param_2 = 0x83;
    bVar1 = (&DAT_007121d8)[param_1[2]];
    while ((bVar1 & 8) != 0) {
      iVar6 = uVar4 + 1;
      uVar4 = uVar4 + 1;
      bVar1 = (&DAT_007121d8)[param_1[iVar6]];
    }
    if (param_1[uVar4] == 0x27) {
      uVar2 = uVar4 & 0x80000001;
      bVar7 = uVar2 == 0;
      if ((int)uVar2 < 0) {
        bVar7 = (uVar2 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (bVar7) goto LAB_0055a7af;
    }
    *param_2 = 0x94;
    bVar1 = param_1[uVar4];
    while ((bVar1 != 0 && (bVar1 != 0x27))) {
      iVar6 = uVar4 + 1;
      uVar4 = uVar4 + 1;
      bVar1 = param_1[iVar6];
    }
LAB_0055a7af:
    if (param_1[uVar4] != 0) {
      uVar4 = uVar4 + 1;
    }
    return uVar4;
  case 0x5b:
    for (uVar2 = 1; (uVar4 != 0x5d && (uVar4 = (uint)param_1[uVar2], uVar4 != 0)); uVar2 = uVar2 + 1
        ) {
    }
    uVar3 = 0x94;
    if (uVar4 == 0x5d) {
      uVar3 = 0x1a;
    }
    *param_2 = uVar3;
    return uVar2;
  case 0x7c:
    if (param_1[1] != 0x7c) {
      *param_2 = 0x53;
      return 1;
    }
    *param_2 = 0x5b;
    return 2;
  case 0x7e:
    *param_2 = 0x5d;
    return 1;
  }
  *param_2 = 0x95;
  return uVar4;
  while (uVar5 != 0x29) {
LAB_0055a710:
    uVar2 = uVar4;
    uVar5 = (uint)param_1[uVar2 + 1];
    uVar4 = uVar2 + 1;
    if ((uVar5 == 0) || (((&DAT_007121d8)[uVar5] & 1) != 0)) {
      if (uVar5 == 0x29) {
        uVar4 = uVar2 + 2;
      }
      else {
        *param_2 = 0x94;
      }
      goto LAB_0055a73b;
    }
  }
  uVar4 = uVar2 + 2;
  goto LAB_0055a73b;
}


/* FUN_0055a900 @ 0055a900  kind=gamemisc  attributed-by=caller-vote  size=29 */

void FUN_0055a900(int param_1,int param_2)

{
  int *piVar1;
  
  for (piVar1 = *(int **)(param_2 + 0x38); (piVar1 != (int *)0x0 && (*piVar1 != param_1));
      piVar1 = (int *)piVar1[6]) {
  }
  return;
}


/* FUN_0055ab80 @ 0055ab80  kind=gamemisc  attributed-by=caller-vote  size=54 */

int FUN_0055ab80(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[2];
  if (iVar1 == 0) {
    iVar1 = FUN_0056c7b0(*param_1);
    param_1[2] = iVar1;
    if (iVar1 != 0) {
      FUN_0056bdc0(iVar1,0x94);
    }
  }
  return iVar1;
}


/* FUN_0055ac70 @ 0055ac70  kind=gamemisc  attributed-by=caller-vote  size=214 */

void FUN_0055ac70(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)param_1[2];
  param_1[2] = 0;
  FUN_00524410(param_1[3]);
  param_1[3] = 0;
  *param_1 = 0;
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    if (DAT_007665e0 == 0) {
      (*DAT_00766604)(puVar1);
      puVar1 = puVar2;
    }
    else {
      if (DAT_0076b488 != 0) {
        (*DAT_00766630)(DAT_0076b488);
      }
      iVar3 = (*DAT_00766608._4_4_)(puVar1);
      DAT_0076b360 = DAT_0076b360 - iVar3;
      if (DAT_0076b388 < DAT_0076b360) {
        DAT_0076b388 = DAT_0076b360;
      }
      DAT_0076b384 = DAT_0076b384 + -1;
      if (DAT_0076b3ac < DAT_0076b384) {
        DAT_0076b3ac = DAT_0076b384;
      }
      (*DAT_00766604)(puVar1);
      puVar1 = puVar2;
      if (DAT_0076b488 != 0) {
        (*DAT_00766638)(DAT_0076b488);
      }
    }
  }
  param_1[1] = 0;
  return;
}


/* FUN_0055ada0 @ 0055ada0  kind=gamemisc  attributed-by=caller-vote  size=272 */

uint FUN_0055ada0(uint *param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  
  uVar1 = *param_1;
  if (uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0057a870(param_2,param_3);
    uVar2 = uVar2 % uVar1;
  }
  iVar3 = FUN_00537190(param_1,param_2,param_3,uVar2);
  if (iVar3 != 0) {
    uVar1 = *(uint *)(iVar3 + 8);
    if (param_4 == 0) {
      FUN_00545b50(param_1,iVar3,uVar2);
      return uVar1;
    }
    *(uint *)(iVar3 + 0xc) = param_2;
    *(uint *)(iVar3 + 8) = param_4;
    return uVar1;
  }
  if (param_4 != 0) {
    puVar4 = (uint *)FUN_0055da00(0x14);
    if (puVar4 == (uint *)0x0) {
      return param_4;
    }
    puVar4[3] = param_2;
    puVar4[4] = param_3;
    puVar4[2] = param_4;
    param_1[1] = param_1[1] + 1;
    uVar1 = param_1[1];
    if ((9 < uVar1) && (*param_1 * 2 < uVar1)) {
      iVar3 = FUN_005452d0(param_1,uVar1 * 2);
      if (iVar3 != 0) {
        uVar2 = FUN_0057a870(param_2,param_3);
        uVar2 = uVar2 % *param_1;
      }
    }
    if (param_1[3] != 0) {
      FUN_0053bf40(param_1,param_1[3] + uVar2 * 8,puVar4);
      return 0;
    }
    *puVar4 = param_1[2];
    if (param_1[2] != 0) {
      *(uint **)(param_1[2] + 4) = puVar4;
    }
    puVar4[1] = 0;
    param_1[2] = (uint)puVar4;
  }
  return 0;
}


/* FUN_0055af40 @ 0055af40  kind=gamemisc  attributed-by=caller-vote  size=117 */

int * FUN_0055af40(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  piVar2 = param_2;
  if (param_2 == (int *)0x0) {
    piVar2 = (int *)FUN_00552230(param_1,8);
    if (piVar2 == (int *)0x0) {
      return (int *)0x0;
    }
    piVar2[0] = 0;
    piVar2[1] = 0;
  }
  iVar3 = FUN_0054a2b0(param_1,*piVar2,8,piVar2 + 1,&param_2);
  piVar1 = param_2;
  *piVar2 = iVar3;
  if ((int)param_2 < 0) {
    FUN_0055afc0(param_1,piVar2);
    return (int *)0x0;
  }
  uVar4 = FUN_0055e3f0(param_1,param_3);
  *(undefined4 *)(*piVar2 + (int)piVar1 * 8) = uVar4;
  return piVar2;
}


/* FUN_0055afc0 @ 0055afc0  kind=gamemisc  attributed-by=caller-vote  size=191 */

void FUN_0055afc0(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != (int *)0x0) {
    iVar3 = 0;
    if (0 < param_2[1]) {
      do {
        puVar1 = *(undefined4 **)(*param_2 + iVar3 * 8);
        if (param_1 == 0) {
LAB_0055b055:
          FUN_00524410(puVar1);
        }
        else if (*(int *)(param_1 + 0x1f0) == 0) {
          if (((puVar1 == (undefined4 *)0x0) || (puVar1 < *(undefined4 **)(param_1 + 0x104))) ||
             (*(undefined4 **)(param_1 + 0x108) <= puVar1)) goto LAB_0055b055;
          *puVar1 = *(undefined4 *)(param_1 + 0x100);
          *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + -1;
          *(undefined4 **)(param_1 + 0x100) = puVar1;
        }
        else if (((puVar1 == (undefined4 *)0x0) || (puVar1 < *(undefined4 **)(param_1 + 0x104))) ||
                (*(undefined4 **)(param_1 + 0x108) <= puVar1)) {
          iVar2 = (*DAT_00766608._4_4_)(puVar1);
          **(int **)(param_1 + 0x1f0) = **(int **)(param_1 + 0x1f0) + iVar2;
        }
        else {
          **(int **)(param_1 + 0x1f0) =
               **(int **)(param_1 + 0x1f0) + (uint)*(ushort *)(param_1 + 0xe8);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_2[1]);
    }
    FUN_005521a0(param_1,*param_2);
    FUN_005521a0(param_1,param_2);
  }
  return;
}


/* FUN_0055b460 @ 0055b460  kind=gamemisc  attributed-by=caller-vote  size=217 */

int FUN_0055b460(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = param_1;
  uVar1 = *(uint *)(param_1 + 0x18);
  iVar4 = 0;
  *(undefined1 *)(param_1 + 0x81) = 1;
  param_1 = 0;
  iVar3 = 0;
  do {
    if (*(int *)(iVar2 + 0x14) <= iVar3) {
      if ((((iVar4 == 0) && (1 < *(int *)(iVar2 + 0x14))) &&
          ((*(byte *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x1c) + 0x4e) & 1) == 0)) &&
         (iVar4 = FUN_0055b750(iVar2,1,param_2), iVar4 != 0)) {
        FUN_00565020(*(undefined4 *)(*(int *)(iVar2 + 0x10) + 0x1c));
      }
      break;
    }
    if ((((*(byte *)(*(int *)(*(int *)(iVar2 + 0x10) + 0xc + param_1) + 0x4e) & 1) == 0) &&
        (iVar3 != 1)) && (iVar4 = FUN_0055b750(iVar2,iVar3,param_2), iVar4 != 0)) {
      FUN_00565020(*(undefined4 *)(*(int *)(iVar2 + 0x10) + 0xc + param_1));
      FUN_00565020(*(undefined4 *)(*(int *)(iVar2 + 0x10) + 0x1c));
    }
    param_1 = param_1 + 0x10;
    iVar3 = iVar3 + 1;
  } while (iVar4 == 0);
  *(undefined1 *)(iVar2 + 0x81) = 0;
  if ((iVar4 == 0) && ((~(uVar1 >> 1) & 1) != 0)) {
    *(uint *)(iVar2 + 0x18) = *(uint *)(iVar2 + 0x18) & 0xfffffffd;
  }
  return iVar4;
}


/* FUN_0055bc20 @ 0055bc20  kind=gamemisc  attributed-by=caller-vote  size=4386 */

void FUN_0055bc20(int *param_1,int param_2,int *param_3,undefined4 *param_4,int *param_5,int param_6
                 )

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  char *pcVar11;
  uint *puVar12;
  int iVar13;
  undefined1 uVar14;
  ushort *puVar15;
  int *piVar16;
  undefined4 *puVar17;
  int *piVar18;
  int *piVar19;
  undefined8 uVar20;
  ulonglong local_a8 [4];
  int local_88;
  int local_84;
  int local_80;
  uint local_7c;
  int local_78;
  int local_74;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int *local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined4 *local_48;
  int local_44;
  int local_40;
  int *local_3c;
  int local_38;
  int local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  uint local_20;
  undefined4 *local_1c;
  undefined8 local_18;
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_78 = param_2;
  local_58 = param_3;
  local_48 = param_4;
  local_7c = 0;
  local_6c = 0;
  local_44 = 0;
  local_74 = 0;
  local_84 = 0;
  local_38 = 0;
  local_80 = 0;
  local_4c = *param_1;
  local_24 = param_1;
  local_28 = param_5;
  local_5c = 0;
  local_64 = -1;
  local_54 = 0;
  local_40 = 0;
  local_18 = 0;
  local_10 = 0;
  if ((((param_1[0x11] != 0) || (*(char *)(local_4c + 0x38) != '\0')) ||
      (*(int *)(param_2 + 0x10) == 0)) ||
     (local_1c = (undefined4 *)FUN_005677f0(param_1,param_2), local_1c == (undefined4 *)0x0))
  goto LAB_0055cca2;
  iVar2 = FUN_00565260(local_4c,local_1c[0x10]);
  iVar3 = FUN_0054ab50(param_1,0x12,*local_1c,0,
                       *(undefined4 *)(*(int *)(local_4c + 0x10) + iVar2 * 0x10));
  param_5 = local_28;
  if (iVar3 != 0) goto LAB_0055cca2;
  local_68 = FUN_005687a0(param_1,local_1c,0x69,0,&local_20);
  local_70 = (uint)(local_1c[3] != 0);
  iVar3 = FUN_00576bd0(param_1,local_1c);
  param_5 = local_28;
  if (((iVar3 != 0) ||
      (iVar3 = FUN_0055cf00(param_1,local_1c,local_20), param_5 = local_28, iVar3 != 0)) ||
     (piVar4 = (int *)FUN_0055ab80(param_1), param_5 = local_28, local_2c = piVar4,
     piVar4 == (int *)0x0)) goto LAB_0055cca2;
  if (*(char *)((int)local_24 + 0x12) == '\0') {
    piVar4[0x18] = piVar4[0x18] | 0x10;
  }
  if ((local_48 == (undefined4 *)0x0) && (local_68 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  FUN_0054bc80(local_24,uVar5,iVar2);
  if ((local_28 != (int *)0x0) ||
     (iVar3 = FUN_005804f0(local_24,local_1c,local_48,param_6,iVar2), iVar3 == 0)) {
    local_50 = FUN_0052b750(local_24,iVar2,local_1c);
    if (local_48 == (undefined4 *)0x0) {
      local_a8[1] = 0;
      local_a8[2] = 0;
      local_a8[3] = 0;
      local_a8[0] = ZEXT48(local_24);
      local_40 = -1;
      if (local_58 == (int *)0x0) {
        local_60 = 0;
      }
      else {
        local_60 = *local_58;
      }
      iVar2 = 0;
      piVar16 = local_24;
      if (0 < local_60) {
        iVar3 = 0;
        do {
          iVar13 = FUN_005640a0(local_a8,*(undefined4 *)(iVar3 + local_58[2]));
          param_5 = local_28;
          if (iVar13 != 0) goto LAB_0055cca2;
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 0x14;
          piVar16 = local_24;
        } while (iVar2 < local_60);
      }
    }
    else {
      iVar3 = FUN_0054fe80(local_24,local_48,&local_18);
      piVar16 = local_24;
      param_5 = local_28;
      if (iVar3 != 0) goto LAB_0055cca2;
      local_38 = local_18._4_4_ + 1;
      local_74 = (int)local_10;
      local_60 = *(int *)*local_48;
      if ((local_68 != 0) || (iVar2 = FUN_005451e0(local_24,0,iVar2,local_1c), iVar2 != 0)) {
        local_40 = piVar16[0x12];
        local_54 = 1;
        piVar16[0x12] = local_40 + 1;
        uVar5 = FUN_0055a1f0(piVar16);
        uVar20 = FUN_0055a1f0(piVar16);
        local_34 = (int)uVar20;
        FUN_0056be90(piVar4,0x2a,(int)((ulonglong)uVar20 >> 0x20),local_60);
        uVar6 = FUN_0056be30(piVar4,4,local_18._4_4_);
        uVar7 = FUN_0056be30(local_2c,0x1b,local_38);
        FUN_0056bef0(local_2c,0x1f,local_74,local_60,uVar5);
        FUN_0056be90(local_2c,0x38,local_40,local_34);
        FUN_0056bef0(local_2c,0x39,local_40,uVar5,local_34);
        piVar4 = local_2c;
        FUN_0056be90(local_2c,1,0,uVar6);
        FUN_00573d80(piVar4,uVar7);
        piVar16 = local_24;
        FUN_00563fb0(local_24,uVar5);
        FUN_00563fb0(piVar16,local_34);
      }
    }
    iVar2 = 0;
    if (((*(byte *)((int)local_1c + 0x2a) & 0x10) != 0) &&
       (iVar3 = (int)*(short *)((int)local_1c + 0x26), 0 < iVar3)) {
      puVar15 = (ushort *)(local_1c[1] + 0x16);
      do {
        iVar2 = iVar2 + (*puVar15 >> 1 & 1);
        puVar15 = puVar15 + 0xc;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    if (local_28 == (int *)0x0) {
      if (local_60 != 0) {
        iVar2 = *(short *)((int)local_1c + 0x26) - iVar2;
        if (local_60 != iVar2) {
          FUN_00553950(piVar16,"table %S has %d columns but %d values were supplied",local_78,0,
                       iVar2,local_60);
          param_5 = local_28;
          goto LAB_0055cca2;
        }
        if (0 < local_60) {
          local_64 = (int)*(short *)(local_1c + 9);
        }
      }
    }
    else {
      iVar2 = local_28[1];
      if (local_60 != iVar2) {
        FUN_00553950(piVar16,"%d values for %d columns",local_60,iVar2);
        param_5 = local_28;
        goto LAB_0055cca2;
      }
      iVar3 = 0;
      if (0 < iVar2) {
        do {
          iVar3 = iVar3 + 1;
          *(undefined4 *)(*local_28 + -4 + iVar3 * 8) = 0xffffffff;
        } while (iVar3 < local_28[1]);
      }
      local_34 = 0;
      piVar16 = local_28;
      puVar17 = local_1c;
      if (0 < local_28[1]) {
        do {
          iVar2 = 0;
          if (0 < *(short *)((int)puVar17 + 0x26)) {
            local_30 = (int *)(*piVar16 + local_34 * 8);
            puVar9 = (undefined4 *)puVar17[1];
            do {
              iVar3 = FUN_0057a2c0(*local_30,*puVar9);
              piVar16 = local_28;
              puVar17 = local_1c;
              if (iVar3 == 0) {
                local_30[1] = iVar2;
                if (iVar2 == *(short *)(local_1c + 9)) {
                  local_64 = local_34;
                }
                break;
              }
              iVar2 = iVar2 + 1;
              puVar9 = puVar9 + 6;
            } while (iVar2 < *(short *)((int)local_1c + 0x26));
          }
          iVar3 = local_34;
          iVar13 = local_64;
          if ((*(short *)((int)puVar17 + 0x26) <= iVar2) &&
             (iVar2 = FUN_0055cf90(*(undefined4 *)(*piVar16 + local_34 * 8)), piVar19 = local_24,
             param_5 = local_28, piVar16 = local_28, puVar17 = local_1c, iVar13 = iVar3, iVar2 == 0)
             ) {
            FUN_00553950(local_24,"table %S has no column named %s",local_78,0,
                         *(undefined4 *)(*local_28 + iVar3 * 8));
            *(undefined1 *)((int)piVar19 + 0x11) = 1;
            goto LAB_0055cca2;
          }
          local_64 = iVar13;
          local_34 = iVar3 + 1;
        } while (local_34 < piVar16[1]);
      }
    }
    piVar16 = local_24;
    if ((*(byte *)(local_4c + 0x18) & 0x10) != 0) {
      local_24[0x13] = local_24[0x13] + 1;
      local_84 = local_24[0x13];
      FUN_0056be90(piVar4,7,0,local_84);
    }
    if (local_70 == 0) {
      local_5c = piVar16[0x12];
      iVar2 = FUN_0055e6e0(piVar16,local_1c,local_5c,0x28);
      local_80 = FUN_00552230(local_4c,iVar2 * 4 + 4);
      param_5 = local_28;
      if (local_80 == 0) goto LAB_0055cca2;
      iVar3 = 0;
      if (0 < iVar2) {
        do {
          piVar16[0x13] = piVar16[0x13] + 1;
          *(int *)(local_80 + iVar3 * 4) = piVar16[0x13];
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar2);
      }
    }
    if (local_54 == 0) {
      if (local_48 != (undefined4 *)0x0) {
        local_6c = FUN_0056be30(piVar4,4,local_18._4_4_);
        local_7c = FUN_0056be30(piVar4,0x1b,local_38);
      }
    }
    else {
      local_7c = FUN_0056be30(piVar4,0x48,local_40);
      local_6c = piVar4[7];
    }
    iVar2 = piVar16[0x13];
    local_2c = (int *)(iVar2 + 1);
    iVar3 = *(short *)((int)local_1c + 0x26) + 1 + iVar2;
    piVar16[0x13] = iVar3;
    piVar19 = local_2c;
    if ((*(byte *)((int)local_1c + 0x2a) & 0x10) != 0) {
      piVar19 = (int *)(iVar2 + 2);
      piVar16[0x13] = iVar3 + 1;
    }
    local_88 = (int)piVar19 + 1;
    local_3c = piVar19;
    local_34 = FUN_005741e0(piVar4);
    if ((local_20 & 1) != 0) {
      uVar10 = piVar16[0x10];
      iVar2 = *(short *)((int)local_1c + 0x26) + 1;
      if (piVar16[0xf] < iVar2) {
        uVar10 = piVar16[0x13] + 1;
        piVar16[0x13] = piVar16[0x13] + iVar2;
      }
      else {
        piVar16[0x10] = iVar2 + uVar10;
        piVar16[0xf] = piVar16[0xf] - iVar2;
      }
      local_20 = uVar10;
      if (local_64 < 0) {
        FUN_0056be90(piVar4,7,0xffffffff);
      }
      else {
        if (local_54 == 0) {
          FUN_005545d0(piVar16,*(undefined4 *)(local_58[2] + local_64 * 0x14),uVar10);
        }
        else {
          FUN_0056bef0(piVar4,0x1d,local_40,local_64);
        }
        uVar8 = FUN_0056be30(piVar4,0x4a,uVar10);
        FUN_0056be90(piVar4,7,0xffffffff,local_20);
        uVar10 = local_20;
        if ((-1 < (int)uVar8) && (uVar8 < (uint)piVar4[7])) {
          *(int *)(piVar4[1] + 8 + uVar8 * 0x14) = piVar4[7];
        }
        FUN_0056be30(piVar4,0x15,local_20);
      }
      local_30 = (int *)0x0;
      puVar17 = local_1c;
      if (0 < *(short *)((int)local_1c + 0x26)) {
        local_38 = 0;
        do {
          piVar16 = local_30;
          piVar19 = local_30;
          if (local_28 != (int *)0x0) {
            piVar19 = (int *)0x0;
            if (0 < local_28[1]) {
              puVar9 = (undefined4 *)(*local_28 + 4);
              do {
                if ((int *)*puVar9 == local_30) break;
                piVar19 = (int *)((int)piVar19 + 1);
                puVar9 = puVar9 + 2;
              } while ((int)piVar19 < local_28[1]);
            }
          }
          if (((local_54 == 0) && (local_58 == (int *)0x0)) ||
             ((local_28 != (int *)0x0 && (local_28[1] <= (int)piVar19)))) {
            pcVar11 = *(char **)(puVar17[1] + 4 + local_38);
            iVar2 = local_20 + 1 + (int)local_30;
            if ((pcVar11 == (char *)0x0) || (*pcVar11 != -0x7c)) {
              iVar3 = FUN_00554e20(local_24,pcVar11,iVar2);
              puVar17 = local_1c;
              if ((iVar3 == iVar2) || (iVar13 = local_24[2], iVar13 == 0)) goto LAB_0055c307;
              uVar5 = 0xf;
            }
            else {
              iVar3 = *(int *)(pcVar11 + 0x18);
              uVar5 = 0xe;
              iVar13 = local_24[2];
            }
            FUN_0056be90(iVar13,uVar5,iVar3,iVar2);
            puVar17 = local_1c;
          }
          else if (local_54 == 0) {
            FUN_00554630(local_24,*(undefined4 *)(local_58[2] + (int)piVar19 * 0x14),
                         local_20 + 1 + (int)local_30);
            puVar17 = local_1c;
          }
          else {
            iVar2 = piVar4[7];
            if ((iVar2 < piVar4[8]) ||
               (iVar3 = FUN_0053b4b0(piVar4), puVar17 = local_1c, piVar16 = local_30, iVar3 == 0)) {
              piVar4[7] = piVar4[7] + 1;
              puVar1 = (undefined2 *)(piVar4[1] + iVar2 * 0x14);
              *(int *)(puVar1 + 2) = local_40;
              *(int **)(puVar1 + 4) = piVar19;
              *puVar1 = 0x1d;
              *(undefined1 *)((int)puVar1 + 3) = 0;
              *(uint *)(puVar1 + 6) = (int)local_30 + local_20 + 1;
              *(undefined4 *)(puVar1 + 8) = 0;
              piVar16 = local_30;
            }
          }
LAB_0055c307:
          local_30 = (int *)((int)piVar16 + 1);
          local_38 = local_38 + 0x18;
          uVar10 = local_20;
        } while ((int)local_30 < (int)*(short *)((int)puVar17 + 0x26));
      }
      if (local_70 == 0) {
        FUN_0056be90(piVar4,0x1e,uVar10 + 1,(int)*(short *)((int)puVar17 + 0x26));
        FUN_00568100(piVar4,local_1c);
      }
      piVar16 = local_24;
      FUN_00550410(local_24,local_68,0x69,0,1,local_1c,
                   (uVar10 - (int)*(short *)((int)local_1c + 0x26)) + -1,param_6,local_34);
      iVar2 = *(short *)((int)local_1c + 0x26) + 1;
      FUN_00554430(piVar16,local_20,iVar2);
      piVar19 = local_3c;
      if (piVar16[0xf] < iVar2) {
        piVar16[0xf] = iVar2;
        piVar16[0x10] = local_20;
      }
    }
    piVar18 = local_24;
    if (local_70 == 0) {
      if ((*(byte *)((int)local_1c + 0x2a) & 0x10) != 0) {
        FUN_0056be90(piVar4,10,0,local_2c);
      }
      if (local_64 < 0) {
        if ((*(byte *)((int)local_1c + 0x2a) & 0x10) == 0) {
          FUN_0056bef0(piVar4,0x38,local_5c,piVar19,local_50);
LAB_0055c5a8:
          local_44 = 1;
        }
        else {
          FUN_0056be90(piVar4,10,0,piVar19);
        }
      }
      else {
        if (local_54 == 0) {
          if (local_48 == (undefined4 *)0x0) {
            FUN_005545d0(piVar16,*(undefined4 *)(local_58[2] + local_64 * 0x14),piVar19);
            if (*(char *)(*piVar4 + 0x38) == '\0') {
              pcVar11 = (char *)(piVar4[1] + (piVar4[7] + -1) * 0x14);
              if (pcVar11 == (char *)0x0) goto LAB_0055c3d9;
            }
            else {
              pcVar11 = &DAT_0076b50c;
            }
            if ((*pcVar11 == '\n') && ((*(byte *)((int)local_1c + 0x2a) & 0x10) == 0)) {
              *(int *)(pcVar11 + 4) = local_5c;
              *pcVar11 = '8';
              *(int **)(pcVar11 + 8) = piVar19;
              *(int *)(pcVar11 + 0xc) = local_50;
              goto LAB_0055c5a8;
            }
          }
          else {
            FUN_0056be90(piVar4,0xf,local_74 + local_64);
          }
        }
        else {
          FUN_0056bef0(piVar4,0x1d,local_40,local_64);
        }
LAB_0055c3d9:
        if ((*(byte *)((int)local_1c + 0x2a) & 0x10) == 0) {
          uVar10 = FUN_0056be30(piVar4,0x4a,piVar19);
          FUN_0056bef0(piVar4,0x38,local_5c,local_3c,local_50);
          piVar19 = local_3c;
          if ((-1 < (int)uVar10) && (uVar10 < (uint)piVar4[7])) {
            *(int *)(piVar4[1] + 8 + uVar10 * 0x14) = piVar4[7];
          }
          FUN_0056be30(piVar4,0x15,local_3c);
        }
        else {
          FUN_0056be90(piVar4,0x49,piVar19,piVar4[7] + 2);
          FUN_0056be30(piVar4,0x15,piVar19);
        }
      }
      if (0 < local_50) {
        FUN_0056be90(piVar16[2],0x77,local_50,piVar19);
      }
      local_38 = 0;
      local_20 = 0;
      if (0 < *(short *)((int)local_1c + 0x26)) {
        local_50 = 0;
        do {
          piVar16 = local_24;
          piVar19 = (int *)(local_88 + local_20);
          local_30 = piVar19;
          if (local_20 == (int)*(short *)(local_1c + 9)) {
            iVar2 = piVar4[7];
            if ((iVar2 < piVar4[8]) || (iVar3 = FUN_0053b4b0(piVar4), iVar3 == 0)) {
              iVar3 = piVar4[1];
              piVar4[7] = piVar4[7] + 1;
              *(undefined2 *)(iVar3 + iVar2 * 0x14) = 10;
              *(undefined1 *)(iVar3 + 3 + iVar2 * 0x14) = 0;
              *(undefined4 *)(iVar3 + 4 + iVar2 * 0x14) = 0;
              *(int **)(iVar3 + 8 + iVar2 * 0x14) = piVar19;
              *(undefined4 *)(iVar3 + 0xc + iVar2 * 0x14) = 0;
              *(undefined4 *)(iVar3 + 0x10 + iVar2 * 0x14) = 0;
            }
          }
          else {
            if (local_28 == (int *)0x0) {
              if ((*(byte *)(local_1c[1] + 0x16 + local_50) & 2) == 0) {
                iVar2 = local_20 - local_38;
LAB_0055c6dc:
                if (-1 < iVar2) goto LAB_0055c6e7;
              }
              else {
                local_38 = local_38 + 1;
              }
            }
            else {
              iVar2 = 0;
              if (0 < local_28[1]) {
                puVar12 = (uint *)(*local_28 + 4);
                do {
                  if (*puVar12 == local_20) break;
                  iVar2 = iVar2 + 1;
                  puVar12 = puVar12 + 2;
                } while (iVar2 < local_28[1]);
                goto LAB_0055c6dc;
              }
LAB_0055c6e7:
              if ((local_60 != 0) && ((local_28 == (int *)0x0 || (iVar2 < local_28[1])))) {
                if (local_54 == 0) {
                  if (local_48 == (undefined4 *)0x0) {
                    FUN_005545d0(local_24,*(undefined4 *)(local_58[2] + iVar2 * 0x14),piVar19);
                  }
                  else {
                    FUN_0056be90(piVar4,0xf,local_74 + iVar2);
                  }
                }
                else {
                  iVar3 = piVar4[7];
                  if ((iVar3 < piVar4[8]) || (iVar13 = FUN_0053b4b0(piVar4), iVar13 == 0)) {
                    iVar13 = piVar4[1];
                    piVar4[7] = piVar4[7] + 1;
                    *(int *)(iVar13 + 8 + iVar3 * 0x14) = iVar2;
                    *(undefined2 *)(iVar13 + iVar3 * 0x14) = 0x1d;
                    *(undefined1 *)(iVar13 + 3 + iVar3 * 0x14) = 0;
                    *(int *)(iVar13 + 4 + iVar3 * 0x14) = local_40;
                    *(int **)(iVar13 + 0xc + iVar3 * 0x14) = local_30;
                    *(undefined4 *)(iVar13 + 0x10 + iVar3 * 0x14) = 0;
                  }
                }
                goto LAB_0055c7ed;
              }
            }
            pcVar11 = *(char **)(local_1c[1] + 4 + local_50);
            if ((pcVar11 == (char *)0x0) || (*pcVar11 != -0x7c)) {
              local_3c = (int *)FUN_00554e20(local_24,pcVar11,piVar19);
              if (((local_3c != piVar19) && (iVar2 = piVar16[2], iVar2 != 0)) &&
                 ((iVar3 = *(int *)(iVar2 + 0x1c), iVar3 < *(int *)(iVar2 + 0x20) ||
                  (iVar13 = FUN_0053b4b0(iVar2), iVar13 == 0)))) {
                iVar13 = *(int *)(iVar2 + 4);
                *(int *)(iVar2 + 0x1c) = *(int *)(iVar2 + 0x1c) + 1;
                *(undefined2 *)(iVar13 + iVar3 * 0x14) = 0xf;
                goto LAB_0055c7c7;
              }
            }
            else {
              local_3c = *(int **)(pcVar11 + 0x18);
              iVar2 = local_24[2];
              iVar3 = *(int *)(iVar2 + 0x1c);
              if ((iVar3 < *(int *)(iVar2 + 0x20)) || (iVar13 = FUN_0053b4b0(iVar2), iVar13 == 0)) {
                iVar13 = *(int *)(iVar2 + 4);
                *(int *)(iVar2 + 0x1c) = *(int *)(iVar2 + 0x1c) + 1;
                *(undefined2 *)(iVar13 + iVar3 * 0x14) = 0xe;
LAB_0055c7c7:
                *(undefined4 *)(iVar13 + 0x10 + iVar3 * 0x14) = 0;
                *(undefined4 *)(iVar13 + 0xc + iVar3 * 0x14) = 0;
                *(int **)(iVar13 + 8 + iVar3 * 0x14) = local_30;
                *(int **)(iVar13 + 4 + iVar3 * 0x14) = local_3c;
                *(undefined1 *)(iVar13 + 3 + iVar3 * 0x14) = 0;
              }
            }
          }
LAB_0055c7ed:
          local_20 = local_20 + 1;
          local_50 = local_50 + 0x18;
        } while ((int)local_20 < (int)*(short *)((int)local_1c + 0x26));
      }
      puVar17 = local_1c;
      piVar18 = local_24;
      if ((*(byte *)((int)local_1c + 0x2a) & 0x10) == 0) {
        FUN_00558890(local_24,local_1c,local_5c,local_2c,local_80,-1 < local_64,0,param_6,local_34,
                     &local_30);
        FUN_00557cc0(piVar18,puVar17,0,local_2c);
        FUN_00550e30(piVar18,puVar17,local_5c,local_2c,local_80,0,local_44,local_30 == (int *)0x0);
      }
      else {
        for (piVar16 = (int *)local_1c[0xe]; (piVar16 != (int *)0x0 && (*piVar16 != local_4c));
            piVar16 = (int *)piVar16[6]) {
        }
        FUN_00577380(local_24,local_1c);
        iVar2 = piVar4[7];
        local_44 = *(short *)((int)local_1c + 0x26) + 2;
        if ((iVar2 < piVar4[8]) || (iVar3 = FUN_0053b4b0(piVar4), iVar3 == 0)) {
          iVar3 = piVar4[1];
          piVar4[7] = piVar4[7] + 1;
          *(int *)(iVar3 + 8 + iVar2 * 0x14) = local_44;
          *(undefined2 *)(iVar3 + iVar2 * 0x14) = 0x8c;
          *(undefined1 *)(iVar3 + 3 + iVar2 * 0x14) = 0;
          *(undefined4 *)(iVar3 + 4 + iVar2 * 0x14) = 1;
          *(int **)(iVar3 + 0xc + iVar2 * 0x14) = local_2c;
          *(undefined4 *)(iVar3 + 0x10 + iVar2 * 0x14) = 0;
        }
        else {
          iVar2 = 1;
        }
        iVar3 = piVar4[1];
        if ((iVar3 != 0) && (*(char *)(*piVar4 + 0x38) == '\0')) {
          if (iVar2 < 0) {
            iVar2 = piVar4[7] + -1;
          }
          iVar13 = iVar3 + iVar2 * 0x14;
          FUN_00539320(*piVar4,(int)*(char *)(iVar13 + 1),
                       *(undefined4 *)(iVar3 + 0x10 + iVar2 * 0x14));
          *(undefined4 *)(iVar13 + 0x10) = 0;
          if (piVar16 == (int *)0x0) {
            *(undefined4 *)(iVar13 + 0x10) = 0;
            *(undefined1 *)(iVar13 + 1) = 0;
          }
          else {
            *(int **)(iVar13 + 0x10) = piVar16;
            *(undefined1 *)(iVar13 + 1) = 0xf6;
            piVar16[3] = piVar16[3] + 1;
          }
        }
        if (piVar4[1] != 0) {
          uVar14 = (undefined1)param_6;
          if (param_6 == 99) {
            uVar14 = 2;
          }
          *(undefined1 *)(piVar4[1] + -0x11 + piVar4[7] * 0x14) = uVar14;
        }
        piVar16 = local_24;
        if ((int *)local_24[0x6c] != (int *)0x0) {
          piVar16 = (int *)local_24[0x6c];
        }
        *(undefined1 *)(piVar16 + 6) = 1;
        piVar18 = local_24;
      }
    }
    if (((*(byte *)(local_4c + 0x18) & 0x10) != 0) &&
       ((iVar2 = piVar4[7], iVar2 < piVar4[8] || (iVar3 = FUN_0053b4b0(piVar4), iVar3 == 0)))) {
      iVar3 = piVar4[1];
      piVar4[7] = piVar4[7] + 1;
      *(undefined2 *)(iVar3 + iVar2 * 0x14) = 0x14;
      *(undefined1 *)(iVar3 + 3 + iVar2 * 0x14) = 0;
      *(int *)(iVar3 + 4 + iVar2 * 0x14) = local_84;
      *(undefined4 *)(iVar3 + 8 + iVar2 * 0x14) = 1;
      *(undefined4 *)(iVar3 + 0xc + iVar2 * 0x14) = 0;
      *(undefined4 *)(iVar3 + 0x10 + iVar2 * 0x14) = 0;
    }
    iVar2 = local_34;
    if (local_68 != 0) {
      FUN_00550410(piVar18,local_68,0x69,0,2,local_1c,
                   (local_88 - *(short *)((int)local_1c + 0x26)) + -2,param_6,local_34);
    }
    if (piVar4[10] != 0) {
      *(int *)(piVar4[10] - (iVar2 * 4 + 4)) = piVar4[7];
    }
    if (local_54 == 0) {
      if (local_48 != (undefined4 *)0x0) {
        iVar2 = piVar4[7];
        if ((iVar2 < piVar4[8]) || (iVar3 = FUN_0053b4b0(piVar4), iVar3 == 0)) {
          iVar3 = piVar4[1];
          piVar4[7] = piVar4[7] + 1;
          *(undefined2 *)(iVar3 + iVar2 * 0x14) = 1;
          *(undefined1 *)(iVar3 + 3 + iVar2 * 0x14) = 0;
          *(undefined4 *)(iVar3 + 4 + iVar2 * 0x14) = 0;
          *(int *)(iVar3 + 8 + iVar2 * 0x14) = local_6c;
          *(undefined4 *)(iVar3 + 0xc + iVar2 * 0x14) = 0;
          *(undefined4 *)(iVar3 + 0x10 + iVar2 * 0x14) = 0;
        }
        if ((-1 < (int)local_7c) && (local_7c < (uint)piVar4[7])) {
          *(int *)(piVar4[1] + 8 + local_7c * 0x14) = piVar4[7];
        }
      }
    }
    else {
      iVar2 = piVar4[7];
      if ((iVar2 < piVar4[8]) || (iVar3 = FUN_0053b4b0(piVar4), iVar3 == 0)) {
        iVar3 = piVar4[1];
        piVar4[7] = piVar4[7] + 1;
        *(undefined2 *)(iVar3 + iVar2 * 0x14) = 0x5f;
        *(undefined1 *)(iVar3 + 3 + iVar2 * 0x14) = 0;
        *(int *)(iVar3 + 4 + iVar2 * 0x14) = local_40;
        *(int *)(iVar3 + 8 + iVar2 * 0x14) = local_6c;
        *(undefined4 *)(iVar3 + 0xc + iVar2 * 0x14) = 0;
        *(undefined4 *)(iVar3 + 0x10 + iVar2 * 0x14) = 0;
      }
      iVar2 = local_40;
      if ((-1 < (int)local_7c) && (local_7c < (uint)piVar4[7])) {
        *(int *)(piVar4[1] + 8 + local_7c * 0x14) = piVar4[7];
      }
      iVar3 = piVar4[7];
      if ((iVar3 < piVar4[8]) || (iVar13 = FUN_0053b4b0(piVar4), iVar13 == 0)) {
        iVar13 = piVar4[1];
        piVar4[7] = piVar4[7] + 1;
        *(undefined2 *)(iVar13 + iVar3 * 0x14) = 0x2d;
        *(undefined1 *)(iVar13 + 3 + iVar3 * 0x14) = 0;
        *(int *)(iVar13 + 4 + iVar3 * 0x14) = iVar2;
        *(undefined4 *)(iVar13 + 8 + iVar3 * 0x14) = 0;
        *(undefined4 *)(iVar13 + 0xc + iVar3 * 0x14) = 0;
        *(undefined4 *)(iVar13 + 0x10 + iVar3 * 0x14) = 0;
      }
    }
    puVar17 = local_1c;
    if (((*(byte *)((int)local_1c + 0x2a) & 0x10) == 0) && (local_70 == 0)) {
      iVar2 = piVar4[7];
      if ((iVar2 < piVar4[8]) || (iVar3 = FUN_0053b4b0(piVar4), iVar3 == 0)) {
        iVar3 = piVar4[1];
        piVar4[7] = piVar4[7] + 1;
        *(undefined2 *)(iVar3 + iVar2 * 0x14) = 0x2d;
        *(undefined1 *)(iVar3 + 3 + iVar2 * 0x14) = 0;
        *(int *)(iVar3 + 4 + iVar2 * 0x14) = local_5c;
        *(undefined4 *)(iVar3 + 8 + iVar2 * 0x14) = 0;
        *(undefined4 *)(iVar3 + 0xc + iVar2 * 0x14) = 0;
        *(undefined4 *)(iVar3 + 0x10 + iVar2 * 0x14) = 0;
      }
      iVar2 = puVar17[2];
      if (iVar2 != 0) {
        local_44 = local_5c + 1;
        do {
          iVar3 = piVar4[7];
          if ((iVar3 < piVar4[8]) || (iVar13 = FUN_0053b4b0(piVar4), iVar13 == 0)) {
            iVar13 = piVar4[1];
            piVar4[7] = piVar4[7] + 1;
            *(undefined2 *)(iVar13 + iVar3 * 0x14) = 0x2d;
            *(undefined1 *)(iVar13 + 3 + iVar3 * 0x14) = 0;
            *(int *)(iVar13 + 4 + iVar3 * 0x14) = local_44;
            *(undefined4 *)(iVar13 + 8 + iVar3 * 0x14) = 0;
            *(undefined4 *)(iVar13 + 0xc + iVar3 * 0x14) = 0;
            *(undefined4 *)(iVar13 + 0x10 + iVar3 * 0x14) = 0;
          }
          iVar2 = *(int *)(iVar2 + 0x14);
          local_44 = local_44 + 1;
        } while (iVar2 != 0);
      }
    }
  }
  if ((*(char *)((int)local_24 + 0x12) == '\0') && (local_24[0x6d] == 0)) {
    FUN_0054b260(local_24);
  }
  param_5 = local_28;
  if ((((*(byte *)(local_4c + 0x18) & 0x10) != 0) && (*(char *)((int)local_24 + 0x12) == '\0')) &&
     (local_24[0x6d] == 0)) {
    iVar2 = piVar4[7];
    if ((iVar2 < piVar4[8]) || (iVar3 = FUN_0053b4b0(piVar4), iVar3 == 0)) {
      iVar3 = piVar4[1];
      piVar4[7] = piVar4[7] + 1;
      *(undefined2 *)(iVar3 + iVar2 * 0x14) = 0x10;
      *(undefined1 *)(iVar3 + 3 + iVar2 * 0x14) = 0;
      *(int *)(iVar3 + 4 + iVar2 * 0x14) = local_84;
      *(undefined4 *)(iVar3 + 8 + iVar2 * 0x14) = 1;
      *(undefined4 *)(iVar3 + 0xc + iVar2 * 0x14) = 0;
      *(undefined4 *)(iVar3 + 0x10 + iVar2 * 0x14) = 0;
    }
    FUN_005762b0(piVar4,1);
    param_5 = local_28;
    if (*(char *)(*piVar4 + 0x38) == '\0') {
      FUN_00575040(piVar4[4],"rows inserted",0xffffffff,1,0);
      param_5 = local_28;
    }
  }
LAB_0055cca2:
  iVar2 = local_4c;
  FUN_00567370(local_4c,local_78);
  FUN_00556700(iVar2,local_58);
  puVar17 = local_48;
  if (local_48 != (undefined4 *)0x0) {
    FUN_00556700(iVar2,*local_48);
    FUN_00567370(iVar2,puVar17[10]);
    FUN_00555e30(iVar2,puVar17[0xb]);
    FUN_00556700(iVar2,puVar17[0xc]);
    FUN_00555e30(iVar2,puVar17[0xd]);
    FUN_00556700(iVar2,puVar17[0xe]);
    FUN_00566d10(iVar2,puVar17[0xf]);
    FUN_00555e30(iVar2,puVar17[0x12]);
    FUN_00555e30(iVar2,puVar17[0x13]);
    FUN_005521a0(iVar2,puVar17);
  }
  FUN_0055afc0(iVar2,param_5);
  FUN_005521a0(iVar2,local_80);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0055cf00 @ 0055cf00  kind=gamemisc  attributed-by=caller-vote  size=142 */

undefined4 FUN_0055cf00(int *param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  
  if ((*(byte *)((int)param_2 + 0x2a) & 0x10) != 0) {
    piVar1 = (int *)param_2[0xe];
    if (piVar1 != (int *)0x0) {
      do {
        if (*piVar1 == *param_1) break;
        piVar1 = (int *)piVar1[6];
      } while (piVar1 != (int *)0x0);
    }
    if (*(int *)(*(int *)piVar1[1] + 0x34) == 0) goto LAB_0055cf4d;
  }
  if ((((*(byte *)((int)param_2 + 0x2a) & 1) == 0) || ((*(uint *)(*param_1 + 0x18) & 0x100) != 0))
     || (*(char *)((int)param_1 + 0x12) != '\0')) {
    if ((param_3 == 0) && (param_2[3] != 0)) {
      FUN_00553950(param_1,"cannot modify %s because it is a view",*param_2);
      return 1;
    }
    return 0;
  }
LAB_0055cf4d:
  FUN_00553950(param_1,"table %s may not be modified",*param_2);
  return 1;
}


/* FUN_0055cf90 @ 0055cf90  kind=gamemisc  attributed-by=caller-vote  size=126 */

bool FUN_0055cf90(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  pbVar5 = &DAT_0071776c;
  bVar2 = *param_1;
  pbVar4 = param_1;
  while ((bVar2 != 0 && ((&DAT_007120d8)[bVar2] == (&DAT_007120d8)[*pbVar5]))) {
    pbVar1 = pbVar4 + 1;
    pbVar4 = pbVar4 + 1;
    pbVar5 = pbVar5 + 1;
    bVar2 = *pbVar1;
  }
  if (((&DAT_007120d8)[*pbVar4] != (&DAT_007120d8)[*pbVar5]) &&
     (iVar3 = FUN_0057a2c0(param_1,"ROWID"), iVar3 != 0)) {
    iVar3 = FUN_0057a2c0(param_1,&DAT_0071777c);
    return iVar3 == 0;
  }
  return true;
}


/* FUN_0055d020 @ 0055d020  kind=gamemisc  attributed-by=caller-vote  size=337 */

uint FUN_0055d020(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  int local_28 [4];
  undefined4 *local_18;
  uint local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  local_28[0] = param_2;
  local_28[2] = param_4;
  local_c = 0;
  local_28[1] = param_3;
  local_10 = 0;
LAB_0055d045:
  local_18 = (undefined4 *)local_28[local_10];
  uVar2 = local_c;
  if (local_18 != (undefined4 *)0x0) {
    local_14 = local_18[1];
    local_8 = 0;
    pbVar3 = &DAT_00713464;
    do {
      if (local_14 == pbVar3[1]) {
        pbVar5 = (byte *)*local_18;
        pbVar4 = (byte *)("naturaleftouterightfullinnercross" + *pbVar3);
        uVar2 = local_14;
        while (0 < (int)uVar2) {
          if ((*pbVar5 == 0) || ((&DAT_007120d8)[*pbVar5] != (&DAT_007120d8)[*pbVar4])) break;
          pbVar5 = pbVar5 + 1;
          pbVar4 = pbVar4 + 1;
          uVar2 = uVar2 - 1;
        }
        if (((int)(uVar2 - 1) < 0) || ((&DAT_007120d8)[*pbVar5] == (&DAT_007120d8)[*pbVar4]))
        goto LAB_0055d113;
      }
      pbVar3 = pbVar3 + 3;
      local_8 = local_8 + 1;
      if (0x713478 < (int)pbVar3) {
        uVar2 = local_c | 0x40;
        break;
      }
    } while( true );
  }
  goto LAB_0055d0dc;
LAB_0055d113:
  uVar2 = local_c | (byte)(&DAT_00713466)[local_8 * 3];
  local_10 = local_10 + 1;
  local_c = uVar2;
  if (2 < local_10) {
LAB_0055d0dc:
    if ((((byte)uVar2 & 0x21) == 0x21) || ((uVar2 & 0x40) != 0)) {
      puVar1 = (undefined4 *)0x6fcfbd;
      if (param_4 != 0) {
        puVar1 = &DAT_006fcfbc;
      }
      FUN_00553950(param_1,"unknown or unsupported join type: %T %T%s%T",param_2,param_3,puVar1,
                   param_4);
      uVar2 = 1;
    }
    else if ((uVar2 & 0x20) != 0) {
      if (((byte)uVar2 & 0x18) == 8) {
        return uVar2;
      }
      FUN_00553950(param_1,"RIGHT and FULL OUTER JOINs are not currently supported");
      return 1;
    }
    return uVar2;
  }
  goto LAB_0055d045;
}


/* FUN_0055d180 @ 0055d180  kind=gamemisc  attributed-by=caller-vote  size=767 */

void FUN_0055d180(int param_1)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int local_8;
  
  iVar5 = param_1;
  if ((*(int *)(param_1 + 0x44) == 0x64cffc7f) && (iVar6 = FUN_00532e30(param_1), iVar6 == 0)) {
    FUN_0054fdb0(param_1);
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x14)) {
      param_1 = 0;
      do {
        iVar9 = *(int *)(iVar5 + 0x10) + param_1;
        if (*(int *)(iVar9 + 4) != 0) {
          FUN_0054c710(*(int *)(iVar9 + 4));
          *(undefined4 *)(iVar9 + 4) = 0;
          if (iVar6 != 1) {
            *(undefined4 *)(iVar9 + 0xc) = 0;
          }
        }
        iVar6 = iVar6 + 1;
        param_1 = param_1 + 0x10;
      } while (iVar6 < *(int *)(iVar5 + 0x14));
    }
    iVar6 = *(int *)(*(int *)(iVar5 + 0x10) + 0x1c);
    if (iVar6 != 0) {
      FUN_00565020(iVar6);
    }
    FUN_005776d0(iVar5);
    FUN_00550b60(iVar5);
    piVar7 = (int *)(iVar5 + 0x140);
    local_8 = 0x17;
    do {
      iVar6 = *piVar7;
      while (iVar6 != 0) {
        iVar9 = *(int *)(iVar6 + 0x1c);
        iVar10 = iVar6;
        do {
          piVar2 = *(int **)(iVar10 + 0x20);
          if ((piVar2 != (int *)0x0) && (*piVar2 = *piVar2 + -1, *piVar2 == 0)) {
            (*(code *)piVar2[1])(piVar2[2]);
            FUN_005521a0(iVar5,piVar2);
          }
          iVar3 = *(int *)(iVar10 + 8);
          FUN_005521a0(iVar5,iVar10);
          iVar10 = iVar3;
          iVar6 = iVar9;
        } while (iVar3 != 0);
      }
      piVar7 = piVar7 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    for (puVar4 = *(undefined4 **)(iVar5 + 0x1a4); puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)*puVar4) {
      iVar6 = puVar4[2];
      puVar8 = (undefined4 *)(iVar6 + 0x10);
      iVar9 = 3;
      do {
        if ((code *)*puVar8 != (code *)0x0) {
          (*(code *)*puVar8)(puVar8[-2]);
        }
        puVar8 = puVar8 + 5;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      FUN_005521a0(iVar5,iVar6);
    }
    FUN_0055ac70(iVar5 + 0x19c);
    for (puVar4 = *(undefined4 **)(iVar5 + 300); puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)*puVar4) {
      iVar6 = puVar4[2];
      if (*(code **)(iVar6 + 0xc) != (code *)0x0) {
        (**(code **)(iVar6 + 0xc))(*(undefined4 *)(iVar6 + 8));
      }
      FUN_005521a0(iVar5,iVar6);
    }
    FUN_0055ac70(iVar5 + 0x124);
    FUN_00553890(iVar5,0,0);
    puVar4 = *(undefined4 **)(iVar5 + 0xd4);
    if (puVar4 != (undefined4 *)0x0) {
      uVar1 = *(ushort *)(puVar4 + 7);
      if ((uVar1 & 0x2460) != 0) {
        if ((uVar1 & 0x2000) == 0) {
          if (((uVar1 & 0x400) == 0) || ((code *)puVar4[8] == (code *)0x0)) {
            if ((uVar1 & 0x20) == 0) {
              if ((uVar1 & 0x40) != 0) {
                piVar7 = (int *)puVar4[4];
                piVar7[1] = *(int *)(*piVar7 + 0xa4);
                *(int **)(*piVar7 + 0xa4) = piVar7;
                if ((*(byte *)(puVar4 + 7) & 0x20) != 0) {
                  FUN_005644e0(puVar4[4]);
                }
                *(ushort *)(puVar4 + 7) = *(ushort *)(puVar4 + 7) & 0xbe01 | 1;
                *(undefined1 *)((int)puVar4 + 0x1e) = 5;
              }
            }
            else {
              FUN_005644e0(puVar4[4]);
            }
          }
          else {
            (*(code *)puVar4[8])(puVar4[1]);
            puVar4[8] = 0;
          }
        }
        else {
          FUN_00574670(puVar4,puVar4[4]);
          FUN_00574d40(puVar4);
        }
      }
      FUN_005521a0(*puVar4,puVar4[9]);
      puVar4[1] = 0;
      puVar4[9] = 0;
      puVar4[8] = 0;
      FUN_005521a0(*puVar4,puVar4);
    }
    FUN_0054fcf0(iVar5);
    *(undefined4 *)(iVar5 + 0x44) = 0xb5357930;
    FUN_005521a0(iVar5,*(undefined4 *)(*(int *)(iVar5 + 0x10) + 0x1c));
    if (*(int *)(iVar5 + 0xc) != 0) {
      (*DAT_00766638)(*(int *)(iVar5 + 0xc));
    }
    *(undefined4 *)(iVar5 + 0x44) = 0x9f3c2d33;
    if (*(int *)(iVar5 + 0xc) != 0) {
      (*DAT_0076662c)(*(int *)(iVar5 + 0xc));
    }
    if (*(char *)(iVar5 + 0xeb) != '\0') {
      FUN_00524410(*(undefined4 *)(iVar5 + 0x104));
    }
    FUN_00524410(iVar5);
    return;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return;
}


/* FUN_0055d6b0 @ 0055d6b0  kind=gamemisc  attributed-by=caller-vote  size=113 */

int FUN_0055d6b0(int *param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *param_1;
  cVar1 = *(char *)(iVar3 + 0x81);
  bVar2 = *(byte *)(*(int *)(*(int *)(iVar3 + 0x10) + 0xc) + 0x4d);
  if (param_2 == 0) {
    iVar3 = *(int *)(iVar3 + 8);
  }
  else {
    iVar3 = FUN_00537090(iVar3,param_2,cVar1);
  }
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = iVar3 + (uint)bVar2 * 0x14 + -0x14;
  }
  if ((cVar1 == '\0') && ((iVar4 == 0 || (*(int *)(iVar4 + 0xc) == 0)))) {
    iVar3 = FUN_0055a020(param_1,bVar2,iVar4,param_2);
    return iVar3;
  }
  return iVar4;
}


/* FUN_0055d830 @ 0055d830  kind=gamemisc  attributed-by=caller-vote  size=187 */

int FUN_0055d830(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 *param_6,undefined4 param_7)

{
  int iVar1;
  
  *param_6 = 0;
  iVar1 = FUN_00564f10(param_1);
  if (iVar1 == 0) {
    FUN_00525a30(0x15,"misuse at line %d of [%.10s]",0x16fa8,
                 "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
    return 0x15;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  FUN_0054d340(param_1);
  iVar1 = FUN_005631b0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  if (iVar1 == 0x11) {
    FUN_00528070(*param_6);
    iVar1 = FUN_005631b0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  FUN_0054de20(param_1);
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return iVar1;
}


/* FUN_0055d980 @ 0055d980  kind=gamemisc  attributed-by=caller-vote  size=117 */

void FUN_0055d980(int param_1,undefined4 param_2)

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
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_68 = local_50;
  local_58 = *(undefined4 *)(param_1 + 0x50);
  local_60 = 0;
  local_5c = 0x46;
  local_53 = 1;
  local_54 = '\0';
  local_6c = param_1;
  local_64 = local_68;
  FUN_0056aa30(&local_6c,1,param_2,&stack0x0000000c);
  FUN_00567fb0(&local_6c);
  if (local_54 != '\0') {
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0055da00 @ 0055da00  kind=gamemisc  attributed-by=caller-vote  size=101 */

int FUN_0055da00(int param_1)

{
  int iVar1;
  
  iVar1 = param_1;
  if (0x7ffffefe < param_1 - 1U) {
    return 0;
  }
  if (DAT_007665e0 != 0) {
    if (DAT_0076b488 != 0) {
      (*DAT_00766630)(DAT_0076b488);
    }
    FUN_0053dcf0(iVar1,&param_1);
    if (DAT_0076b488 != 0) {
      (*DAT_00766638)(DAT_0076b488);
    }
    return param_1;
  }
  iVar1 = (*DAT_00766600)(param_1);
  return iVar1;
}


/* FUN_0055da70 @ 0055da70  kind=gamemisc  attributed-by=caller-vote  size=118 */

void FUN_0055da70(undefined4 param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = DAT_0076b49c;
  pcVar2 = DAT_0076b498;
  iVar1 = DAT_0076b360;
  if (DAT_0076b498 != (code *)0x0) {
    iVar4 = DAT_0076b360 >> 0x1f;
    DAT_0076b498 = (code *)0x0;
    if (DAT_0076b488 != 0) {
      (*DAT_00766638)(DAT_0076b488);
    }
    (*pcVar2)(uVar3,iVar1,iVar4,param_1);
    if (DAT_0076b488 != 0) {
      (*DAT_00766630)(DAT_0076b488);
    }
  }
  DAT_0076b498 = pcVar2;
  DAT_0076b49c = uVar3;
  return;
}


/* FUN_0055daf0 @ 0055daf0  kind=gamemisc  attributed-by=caller-vote  size=293 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055daf0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  
  if (DAT_00766600 == 0) {
    FUN_00579aa0(4,&PTR_FUN_00713494);
  }
  _DAT_0076b488 = 0;
  _DAT_0076b490 = 0;
  _DAT_0076b498 = 0;
  _DAT_0076b4a0 = 0;
  _DAT_0076b4a8 = 0;
  if (DAT_007665e4 != 0) {
    uVar2 = (*DAT_00766628)(3);
    _DAT_0076b488 = CONCAT44(DAT_0076b488_4,uVar2);
  }
  if (((DAT_00766688 == (undefined4 *)0x0) || ((int)DAT_0076668c < 100)) || (DAT_00766690 < 1)) {
    _DAT_0076b4a0 = _DAT_0076b4a0 & 0xffffffff00000000;
    DAT_00766688 = (undefined4 *)0x0;
    DAT_0076668c = 0;
    DAT_00766690 = 0;
  }
  else {
    _DAT_0076b4a8 = CONCAT44(DAT_0076b4ac,DAT_00766690);
    uVar6 = DAT_0076668c & 0xfffffff8;
    iVar5 = DAT_00766690 + -1;
    _DAT_0076b4a0 = ZEXT48(DAT_00766688) << 0x20;
    lVar1 = _DAT_0076b4a0;
    DAT_0076b4a4 = DAT_00766688;
    puVar3 = DAT_00766688;
    puVar4 = DAT_00766688;
    DAT_0076668c = uVar6;
    if (0 < iVar5) {
      do {
        _DAT_0076b4a0 = lVar1;
        puVar4 = (undefined4 *)((int)puVar3 + uVar6);
        *puVar3 = puVar4;
        iVar5 = iVar5 + -1;
        puVar3 = puVar4;
        lVar1 = _DAT_0076b4a0;
      } while (iVar5 != 0);
    }
    *puVar4 = 0;
    _DAT_0076b4a0 = CONCAT44(DAT_0076b4a4,puVar4 + 1);
  }
  if (((DAT_00766694 == 0) || (DAT_00766698 < 0x200)) || (DAT_0076669c < 1)) {
    DAT_00766694 = 0;
    DAT_00766698 = 0;
    DAT_0076669c = 0;
  }
  (*_DAT_00766614)(DAT_00766618._4_4_);
  return;
}


/* FUN_0055dc60 @ 0055dc60  kind=gamemisc  attributed-by=caller-vote  size=354 */

void FUN_0055dc60(int *param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  short *psVar5;
  undefined4 uVar6;
  undefined2 local_18 [2];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar2 = *param_1;
  iVar3 = FUN_00566d40(iVar2,param_2[3],0);
  if (param_3 == 0) goto LAB_0055dd74;
  uVar4 = FUN_00536250(iVar2,param_3,0,0);
  psVar5 = (short *)FUN_00552230(iVar2,0x50);
  if (psVar5 == (short *)0x0) {
LAB_0055dcf3:
    psVar5 = (short *)0x0;
    if (iVar3 != 0) {
      FUN_005303a0(iVar2,iVar3);
      FUN_005521a0(iVar2,iVar3);
    }
  }
  else {
    memset(psVar5,0,0x50);
    psVar5[1] = 1;
    psVar5 = (short *)FUN_00567680(iVar2,psVar5,1,(int)*psVar5);
    if (*(char *)(iVar2 + 0x38) != '\0') {
      FUN_00567370(iVar2,psVar5);
      goto LAB_0055dcf3;
    }
    sVar1 = *psVar5;
    uVar6 = FUN_0055e3f0(iVar2,0);
    *(undefined4 *)(psVar5 + sVar1 * 0x24 + -0x1c) = uVar6;
    uVar6 = FUN_0055e3f0(iVar2,0);
    *(undefined4 *)(psVar5 + sVar1 * 0x24 + -0x1e) = uVar6;
    uVar6 = FUN_00552450(iVar2,*param_2);
    *(undefined4 *)(psVar5 + 10) = uVar6;
    *(int *)(psVar5 + 0xe) = iVar3;
  }
  iVar3 = FUN_00566e90(param_1,0,psVar5,uVar4,0,0,0,0,0,0);
  if (iVar3 != 0) {
    *(ushort *)(iVar3 + 6) = *(ushort *)(iVar3 + 6) | 0x100;
  }
LAB_0055dd74:
  local_14 = param_4;
  local_18[0] = 9;
  local_10 = 0;
  local_c = 0;
  FUN_005654f0(param_1,iVar3,local_18);
  if (iVar3 != 0) {
    FUN_005303a0(iVar2,iVar3);
    FUN_005521a0(iVar2,iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0055e380 @ 0055e380  kind=gamemisc  attributed-by=caller-vote  size=102 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055e380(void)

{
  undefined **ppuVar1;
  
  if (DAT_00766628 == (undefined *)0x0) {
    ppuVar1 = &PTR_LAB_00715558;
    if (DAT_007665e4 == 0) {
      ppuVar1 = &PTR_vfunction14_00714d04;
    }
    _DAT_0076662c = *(undefined8 *)(ppuVar1 + 3);
    _DAT_00766624 = ppuVar1[1];
    DAT_00766620 = (code *)*ppuVar1;
    _DAT_00766634 = *(undefined8 *)(ppuVar1 + 5);
    DAT_00766628 = ppuVar1[2];
    _DAT_0076663c = *(undefined8 *)(ppuVar1 + 7);
  }
                    /* WARNING: Could not recover jumptable at 0x0055e3e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00766620)();
  return;
}


/* FUN_0055e3f0 @ 0055e3f0  kind=gamemisc  attributed-by=caller-vote  size=96 */

void * FUN_0055e3f0(undefined4 param_1,undefined4 *param_2)

{
  void *_Src;
  size_t _Size;
  void *_Dst;
  
  if (param_2 == (undefined4 *)0x0) {
    return (void *)0x0;
  }
  _Src = (void *)*param_2;
  _Size = param_2[1];
  if (_Src == (void *)0x0) {
    FUN_00552be0(0);
    return (void *)0x0;
  }
  _Dst = (void *)FUN_00552230(param_1,_Size + 1);
  if (_Dst != (void *)0x0) {
    memcpy(_Dst,_Src,_Size);
    *(undefined1 *)((int)_Dst + _Size) = 0;
  }
  FUN_00552be0(_Dst);
  return _Dst;
}


/* FUN_0055e6e0 @ 0055e6e0  kind=gamemisc  attributed-by=caller-vote  size=397 */

int FUN_0055e6e0(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar3 = param_2;
  if ((*(byte *)(param_2 + 0x2a) & 0x10) != 0) {
    return 0;
  }
  piVar7 = (int *)(param_2 + 0x40);
  iVar8 = *param_1;
  param_2 = -1000000;
  if (*piVar7 != 0) {
    iVar11 = 0;
    param_2 = 0;
    if (0 < *(int *)(iVar8 + 0x14)) {
      piVar6 = (int *)(*(int *)(iVar8 + 0x10) + 0xc);
      do {
        if (*piVar6 == *piVar7) break;
        iVar11 = iVar11 + 1;
        piVar6 = piVar6 + 4;
      } while (iVar11 < *(int *)(iVar8 + 0x14));
      iVar8 = *param_1;
      param_2 = iVar11;
    }
  }
  piVar7 = (int *)param_1[2];
  if (piVar7 == (int *)0x0) {
    piVar7 = (int *)FUN_0056c7b0(iVar8);
    param_1[2] = (int)piVar7;
    if (piVar7 != (int *)0x0) {
      FUN_0056bdc0(piVar7,0x94);
    }
  }
  FUN_0055e5f0(param_1,param_3,param_2,iVar3,param_4);
  iVar8 = 1;
  for (iVar3 = *(int *)(iVar3 + 8); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x14)) {
    iVar9 = FUN_0055b2a0(param_1,iVar3);
    iVar11 = piVar7[7];
    uVar4 = *(undefined4 *)(iVar3 + 0x28);
    if ((iVar11 < piVar7[8]) || (iVar10 = FUN_0053b4b0(piVar7), iVar10 == 0)) {
      piVar7[7] = piVar7[7] + 1;
      puVar1 = (undefined1 *)(piVar7[1] + iVar11 * 0x14);
      *puVar1 = (char)param_4;
      puVar1[3] = 0;
      *(int *)(puVar1 + 4) = iVar8 + param_3;
      *(undefined4 *)(puVar1 + 8) = uVar4;
      *(int *)(puVar1 + 0xc) = param_2;
      *(undefined4 *)(puVar1 + 0x10) = 0;
      puVar1[1] = 0;
    }
    else {
      iVar11 = 1;
    }
    iVar10 = piVar7[1];
    iVar5 = *piVar7;
    if ((iVar10 == 0) || (*(char *)(iVar5 + 0x38) != '\0')) {
      FUN_00539320(iVar5,0xfffffff0,iVar9);
    }
    else {
      if (iVar11 < 0) {
        iVar11 = piVar7[7] + -1;
      }
      iVar2 = iVar10 + iVar11 * 0x14;
      FUN_00539320(iVar5,(int)*(char *)(iVar2 + 1),*(undefined4 *)(iVar10 + 0x10 + iVar11 * 0x14));
      *(undefined4 *)(iVar2 + 0x10) = 0;
      if (iVar9 == 0) {
        *(undefined4 *)(iVar2 + 0x10) = 0;
        *(undefined1 *)(iVar2 + 1) = 0;
      }
      else {
        *(int *)(iVar2 + 0x10) = iVar9;
        *(undefined1 *)(iVar2 + 1) = 0xfa;
      }
    }
    iVar8 = iVar8 + 1;
  }
  if (param_1[0x12] < param_3 + iVar8) {
    param_1[0x12] = param_3 + iVar8;
  }
  return iVar8 + -1;
}


/* FUN_0055e900 @ 0055e900  kind=gamemisc  attributed-by=caller-vote  size=36 */

undefined4 FUN_0055e900(int *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = (**(code **)(*param_1 + 4))(param_1);
    *param_1 = 0;
    return uVar1;
  }
  return 0;
}


/* FUN_0055e930 @ 0055e930  kind=gamemisc  attributed-by=caller-vote  size=91 */

undefined4 FUN_0055e930(int *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  double local_c;
  
  if ((1 < *param_1) && ((code *)param_1[0x12] != (code *)0x0)) {
    uVar1 = (*(code *)param_1[0x12])(param_1,param_2);
    return uVar1;
  }
  uVar1 = (*(code *)param_1[0x10])(param_1,&local_c);
  local_c = local_c * 86400000.0;
  uVar2 = FUN_0068d946();
  *param_2 = uVar2;
  return uVar1;
}


/* FUN_0055ea00 @ 0055ea00  kind=gamemisc  attributed-by=caller-vote  size=31 */

void FUN_0055ea00(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  (**(code **)(*param_1 + 8))(param_1,param_2,param_3,param_4,param_5);
  return;
}


/* FUN_0055ea20 @ 0055ea20  kind=gamemisc  attributed-by=caller-vote  size=25 */

void FUN_0055ea20(int *param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3);
  return;
}


/* FUN_0055ea40 @ 0055ea40  kind=gamemisc  attributed-by=caller-vote  size=31 */

void FUN_0055ea40(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  (**(code **)(*param_1 + 0xc))(param_1,param_2,param_3,param_4,param_5);
  return;
}


/* FUN_0055ea60 @ 0055ea60  kind=gamemisc  attributed-by=caller-vote  size=135 */

void FUN_0055ea60(undefined4 *param_1,uint param_2,int param_3)

{
  if (DAT_0076b74c != 0) {
    if (param_3 < 0x5b) {
      DAT_0076b758 = param_3 / 10 + 1;
    }
    else {
      DAT_0076b758 = 10;
    }
    DAT_0076b768 = (undefined4 *)0x0;
    DAT_0076b770 = 0;
    DAT_0076b750 = param_2 & 0xfffffff8;
    DAT_0076b76c = param_3;
    DAT_0076b754 = param_3;
    DAT_0076b75c = param_1;
    DAT_0076b760 = param_1;
    for (; param_3 != 0; param_3 = param_3 + -1) {
      *DAT_0076b760 = DAT_0076b768;
      DAT_0076b768 = DAT_0076b760;
      DAT_0076b760 = (undefined4 *)((int)DAT_0076b760 + (param_2 & 0xfffffff8));
    }
  }
  return;
}


/* FUN_0055eaf0 @ 0055eaf0  kind=gamemisc  attributed-by=caller-vote  size=116 */

int FUN_0055eaf0(int *param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  
  if (((param_2 == 0x45) && (param_3 != 0)) && (param_4 != 0)) {
    iVar1 = FUN_00553d70(*param_1,param_3,param_4);
  }
  else {
    iVar1 = FUN_00553bb0(*param_1,param_2,param_5,1);
    FUN_005540d0(*param_1,iVar1,param_3,param_4);
  }
  if ((iVar1 != 0) && (*(int *)(*param_1 + 0x5c) < *(int *)(iVar1 + 0x14))) {
    FUN_00553950(param_1,"Expression tree is too large (maximum depth %d)",*(int *)(*param_1 + 0x5c)
                );
  }
  return iVar1;
}


/* FUN_0055eb70 @ 0055eb70  kind=gamemisc  attributed-by=caller-vote  size=422 */

int FUN_0055eb70(int param_1,uint param_2,int *param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xa57c,
                 "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
    return 0xb;
  }
  iVar3 = *(int *)(param_1 + 0x28);
  if ((iVar3 == 0) &&
     (iVar3 = FUN_00560e90(*(undefined4 *)(param_1 + 0xb4),param_2,1,param_3), iVar3 == 0)) {
    puVar1 = (undefined4 *)*param_3;
    if ((puVar1[4] != 0) && (param_4 == 0)) {
      *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
      return 0;
    }
    puVar1[4] = param_1;
    if ((param_2 < 0x80000000) && (param_2 != DAT_007666d0 / *(int *)(param_1 + 0x80) + 1U)) {
      if ((((*(char *)(param_1 + 0xe) == '\0') && (param_2 <= *(uint *)(param_1 + 0x18))) &&
          (param_4 == 0)) && (**(int **)(param_1 + 0x3c) != 0)) {
        *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + 1;
        iVar3 = FUN_00544d80(puVar1);
        if (iVar3 == 0) {
          return 0;
        }
      }
      else {
        if (param_2 <= *(uint *)(param_1 + 0x84)) {
          if (param_4 != 0) {
            if (DAT_0076b3bc != (code *)0x0) {
              (*DAT_0076b3bc)();
            }
            if (param_2 <= *(uint *)(param_1 + 0x1c)) {
              FUN_0054c100(*(undefined4 *)(param_1 + 0x38),param_2);
            }
            FUN_00528db0(param_1,param_2);
            if (DAT_0076b3c0 != (code *)0x0) {
              (*DAT_0076b3c0)();
            }
          }
          memset((void *)puVar1[1],0,*(size_t *)(param_1 + 0x80));
          return 0;
        }
        iVar3 = 0xd;
      }
    }
    else {
      FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xa5a2,
                   "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
      iVar3 = 0xb;
    }
    if ((*(byte *)(puVar1 + 6) & 2) != 0) {
      FUN_00544570(puVar1);
    }
    iVar2 = puVar1[7];
    *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + -1;
    if (puVar1[5] == 1) {
      *(undefined4 *)(iVar2 + 0x2c) = 0;
    }
    (*DAT_00766664)(*(undefined4 *)(iVar2 + 0x28),*puVar1,1);
  }
  if (*(int *)(*(int *)(param_1 + 0xb4) + 0xc) == 0) {
    FUN_00541a10(param_1);
  }
  *param_3 = 0;
  return iVar3;
}


/* FUN_0055ee50 @ 0055ee50  kind=gamemisc  attributed-by=caller-vote  size=309 */

undefined4 FUN_0055ee50(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0xb0);
  if (DAT_0076b3bc != (code *)0x0) {
    (*DAT_0076b3bc)();
  }
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_00577c80(*(undefined4 *)(param_1 + 0xb8),*(undefined1 *)(param_1 + 9),
               *(undefined4 *)(param_1 + 0x80),uVar1);
  iVar2 = *(int *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0xb8) = 0;
  for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x2c)) {
    *(undefined4 *)(iVar2 + 0x10) = 1;
  }
  FUN_005611b0(*(undefined4 *)(param_1 + 0xb4),0);
  if (*(char *)(param_1 + 0xe) == '\0') {
    piVar3 = *(int **)(param_1 + 0x40);
    if (*piVar3 != 0) {
      if ((*(char *)(param_1 + 7) != '\0') ||
         (uVar4 = (**(code **)(*piVar3 + 0x14))(piVar3,2), uVar4 == 0)) {
        uVar4 = (**(code **)(**(int **)(param_1 + 0x40) + 0x18))
                          (*(int **)(param_1 + 0x40),param_1 + 0x50);
      }
      if (((uVar4 & 0xff) == 0xd) || ((uVar4 & 0xff) == 10)) {
        *(uint *)(param_1 + 0x28) = uVar4;
        *(undefined1 *)(param_1 + 0xf) = 6;
      }
    }
    FUN_00541a10(param_1);
  }
  else {
    FUN_00542a20(param_1);
  }
  if (DAT_0076b3c0 != (code *)0x0) {
    (*DAT_0076b3c0)();
  }
  piVar3 = *(int **)(param_1 + 0x40);
  if (*piVar3 != 0) {
    (**(code **)(*piVar3 + 4))(piVar3);
    *piVar3 = 0;
  }
  piVar3 = *(int **)(param_1 + 0x3c);
  if (*piVar3 != 0) {
    (**(code **)(*piVar3 + 4))(piVar3);
    *piVar3 = 0;
  }
  FUN_00544190(uVar1);
  iVar2 = *(int *)(*(int *)(param_1 + 0xb4) + 0x28);
  if (iVar2 != 0) {
    (*DAT_00766670)(iVar2);
  }
  FUN_00524410(param_1);
  return 0;
}


/* FUN_0055f050 @ 0055f050  kind=gamemisc  attributed-by=caller-vote  size=514 */

int FUN_0055f050(uint param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 local_8;
  
  uVar3 = param_1;
  if (*(int *)(param_1 + 0x28) != 0) {
    return *(int *)(param_1 + 0x28);
  }
  if (*(byte *)(param_1 + 0xf) < 3) {
    return 0;
  }
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(int *)(param_1 + 0xb8) == 0) {
      iVar4 = FUN_00542000(param_1,0);
      if (iVar4 != 0) {
        return iVar4;
      }
      uVar1 = *(uint *)(uVar3 + 0x18);
      uVar2 = *(uint *)(uVar3 + 0x1c);
      if ((uVar1 < uVar2) && (*(char *)(uVar3 + 5) != '\x02')) {
        iVar4 = DAT_007666d0 / *(int *)(uVar3 + 0x80);
        uVar7 = uVar1 + 1;
        *(uint *)(uVar3 + 0x18) = uVar2;
        param_1 = uVar7;
        if (uVar7 <= uVar2) {
          do {
            param_1 = uVar7;
            iVar5 = FUN_0054c2e0(*(undefined4 *)(uVar3 + 0x38),uVar7);
            if ((iVar5 == 0) && (uVar7 != iVar4 + 1U)) {
              iVar5 = FUN_0055eb70(uVar3,uVar7,&local_8,0);
              uVar6 = local_8;
              if (iVar5 != 0) {
                return iVar5;
              }
              iVar5 = FUN_00560330(local_8);
              FUN_005602d0(uVar6);
              uVar7 = param_1;
              if (iVar5 != 0) {
                return iVar5;
              }
            }
            uVar7 = uVar7 + 1;
            param_1 = uVar7;
          } while (uVar7 <= *(uint *)(uVar3 + 0x1c));
        }
        *(uint *)(uVar3 + 0x18) = uVar1;
      }
      iVar4 = FUN_00580270(uVar3,param_2);
      if (iVar4 != 0) {
        return iVar4;
      }
      iVar4 = FUN_0057ac30(uVar3,0);
      if (iVar4 != 0) {
        return iVar4;
      }
      uVar6 = FUN_00560cd0(*(undefined4 *)(uVar3 + 0xb4));
      iVar4 = FUN_00542df0(uVar3,uVar6);
      if (iVar4 != 0) {
        return iVar4;
      }
      FUN_00560c70(*(undefined4 *)(uVar3 + 0xb4));
      iVar4 = *(int *)(uVar3 + 0x18);
      if ((iVar4 != *(int *)(uVar3 + 0x20)) &&
         (iVar4 = FUN_00542920(uVar3,iVar4 - (uint)(iVar4 == DAT_007666d0 / *(int *)(uVar3 + 0x80) +
                                                             1)), iVar4 != 0)) {
        return iVar4;
      }
      iVar4 = 0;
      if (param_3 == 0) {
        iVar4 = FUN_00560280(uVar3);
      }
      if (iVar4 != 0) {
        return iVar4;
      }
    }
    else {
      iVar4 = FUN_00560cd0(*(undefined4 *)(param_1 + 0xb4));
      param_1 = 0;
      if (iVar4 == 0) {
        FUN_0055eb70(uVar3,1,&param_1,0);
        *(undefined4 *)(param_1 + 0xc) = 0;
        iVar4 = param_1;
      }
      iVar5 = param_1;
      iVar4 = FUN_00541ab0(uVar3,iVar4,*(undefined4 *)(uVar3 + 0x18),1);
      FUN_005602d0(iVar5);
      if (iVar4 != 0) {
        return iVar4;
      }
      FUN_00560c70(*(undefined4 *)(uVar3 + 0xb4));
    }
  }
  else {
    for (iVar4 = *(int *)(param_1 + 0x58); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x2c)) {
      *(undefined4 *)(iVar4 + 0x10) = 1;
    }
  }
  if (*(int *)(uVar3 + 0xb8) == 0) {
    *(undefined1 *)(uVar3 + 0xf) = 5;
  }
  return 0;
}


/* FUN_0055f260 @ 0055f260  kind=gamemisc  attributed-by=caller-vote  size=75 */

void FUN_0055f260(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    if (((*(char *)(param_1 + 0xf) == '\x02') && (*(char *)(param_1 + 4) != '\0')) &&
       (*(char *)(param_1 + 5) == '\x01')) {
      *(undefined1 *)(param_1 + 0xf) = 1;
      return;
    }
    uVar1 = FUN_00541e00(param_1,*(undefined1 *)(param_1 + 0x12));
    if (((uVar1 & 0xff) == 0xd) || ((uVar1 & 0xff) == 10)) {
      *(uint *)(param_1 + 0x28) = uVar1;
      *(undefined1 *)(param_1 + 0xf) = 6;
    }
  }
  return;
}


/* FUN_0055f390 @ 0055f390  kind=gamemisc  attributed-by=caller-vote  size=435 */

int FUN_0055f390(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint local_8;
  
  iVar3 = param_2;
  iVar4 = param_1;
  local_8 = 0;
  if ((*(char *)(param_1 + 0xe) != '\0') && (iVar5 = FUN_00560330(param_2), iVar5 != 0)) {
    return iVar5;
  }
  if ((((*(byte *)(iVar3 + 0x18) & 2) != 0) && (iVar5 = FUN_0057a8b0(iVar3), iVar5 != 0)) &&
     (iVar5 = FUN_0057a9b0(iVar3), iVar5 != 0)) {
    return iVar5;
  }
  if (((*(ushort *)(iVar3 + 0x18) & 4) != 0) && (param_4 == 0)) {
    local_8 = *(uint *)(iVar3 + 0x14);
  }
  *(ushort *)(iVar3 + 0x18) = *(ushort *)(iVar3 + 0x18) & 0xfffb;
  FUN_00560e90(*(undefined4 *)(iVar4 + 0xb4),param_3,0,&param_1);
  iVar5 = param_1;
  if (param_1 != 0) {
    *(ushort *)(iVar3 + 0x18) = *(ushort *)(iVar3 + 0x18) | *(ushort *)(param_1 + 0x18) & 4;
    if (*(char *)(iVar4 + 0xe) == '\0') {
      FUN_00560e50(param_1);
    }
    else {
      FUN_005610a0(param_1,*(int *)(iVar4 + 0x18) + 1);
    }
  }
  param_1 = *(int *)(iVar3 + 0x14);
  FUN_005610a0(iVar3,param_3);
  *(ushort *)(iVar3 + 0x18) = *(ushort *)(iVar3 + 0x18) & 0xffdf;
  if ((*(ushort *)(iVar3 + 0x18) & 2) == 0) {
    *(ushort *)(iVar3 + 0x18) = *(ushort *)(iVar3 + 0x18) | 2;
    piVar1 = *(int **)(iVar3 + 0x1c);
    iVar2 = *piVar1;
    *(int *)(iVar3 + 0x20) = iVar2;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x24) = iVar3;
    }
    *piVar1 = iVar3;
    if (piVar1[1] == 0) {
      piVar1[1] = iVar3;
    }
    if ((piVar1[2] == 0) && ((*(byte *)(iVar3 + 0x18) & 4) == 0)) {
      piVar1[2] = iVar3;
    }
  }
  if ((*(char *)(iVar4 + 0xe) != '\0') && (FUN_005610a0(iVar5,param_1), iVar5 != 0)) {
    iVar3 = *(int *)(iVar5 + 0x10);
    FUN_00561130(iVar5);
    if (*(int *)(*(int *)(iVar3 + 0xb4) + 0xc) == 0) {
      FUN_00541a10(iVar3);
    }
  }
  if (local_8 != 0) {
    iVar5 = FUN_0055eb70(iVar4,local_8,&param_1,0);
    iVar3 = param_1;
    if (iVar5 != 0) {
      if (local_8 <= *(uint *)(iVar4 + 0x1c)) {
        FUN_0054bf60(*(undefined4 *)(iVar4 + 0x38),local_8,*(undefined4 *)(iVar4 + 0xb0));
      }
      return iVar5;
    }
    *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) | 4;
    FUN_00561050(param_1);
    iVar4 = *(int *)(iVar3 + 0x10);
    FUN_00561130(iVar3);
    if (*(int *)(*(int *)(iVar4 + 0xb4) + 0xc) == 0) {
      FUN_00541a10(iVar4);
    }
  }
  return 0;
}


/* FUN_0055faf0 @ 0055faf0  kind=gamemisc  attributed-by=caller-vote  size=115 */

int FUN_0055faf0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((*(char *)(param_1 + 0xc) == '\0') && (*(int *)(param_1 + 0xb8) == 0)) {
    if ((*(char *)(param_1 + 4) == '\0') &&
       ((*(int *)**(int **)(param_1 + 0x3c) < 2 || (((int *)**(int **)(param_1 + 0x3c))[0xd] == 0)))
       ) {
      return 0xe;
    }
    piVar1 = *(int **)(param_1 + 0x40);
    if (*piVar1 != 0) {
      (**(code **)(*piVar1 + 4))(piVar1);
      *piVar1 = 0;
    }
    iVar2 = FUN_00541390(param_1);
    if (iVar2 == 0) {
      *(undefined1 *)(param_1 + 5) = 5;
      *(undefined1 *)(param_1 + 0xf) = 0;
      return 0;
    }
  }
  else {
    *param_2 = 1;
  }
  return iVar2;
}


/* FUN_0055fbc0 @ 0055fbc0  kind=gamemisc  attributed-by=caller-vote  size=170 */

uint FUN_0055fbc0(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 6) {
    return *(uint *)(param_1 + 0x28);
  }
  if (bVar1 < 2) {
    return 0;
  }
  if (*(int *)(param_1 + 0xb8) == 0) {
    if ((**(int **)(param_1 + 0x40) == 0) || (bVar1 == 2)) {
      uVar2 = FUN_00541e00(param_1,0);
      if ((*(char *)(param_1 + 0xe) == '\0') && (2 < bVar1)) {
        *(undefined4 *)(param_1 + 0x28) = 4;
        *(undefined1 *)(param_1 + 0xf) = 6;
        return uVar2;
      }
      goto LAB_0055fc0a;
    }
    uVar3 = FUN_005422c0(param_1,0);
  }
  else {
    uVar2 = FUN_0055fc70(param_1,2,0xffffffff);
    uVar3 = FUN_00541e00(param_1,*(undefined1 *)(param_1 + 0x12));
    if (uVar2 != 0) goto LAB_0055fc0a;
  }
  uVar2 = uVar3;
LAB_0055fc0a:
  if (((uVar2 & 0xff) == 0xd) || ((uVar2 & 0xff) == 10)) {
    *(uint *)(param_1 + 0x28) = uVar2;
    *(undefined1 *)(param_1 + 0xf) = 6;
  }
  return uVar2;
}


/* FUN_0055fc70 @ 0055fc70  kind=gamemisc  attributed-by=caller-vote  size=235 */

int FUN_0055fc70(int param_1,int param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0x28) != 0) || (*(int *)(param_1 + 0x60) <= param_3)) {
    return *(int *)(param_1 + 0x28);
  }
  param_3 = (uint)(param_2 != 1) + param_3;
  if (param_3 < *(int *)(param_1 + 0x60)) {
    iVar3 = param_3 * 0x30;
    iVar2 = param_3;
    do {
      FUN_0054c040(*(undefined4 *)(iVar3 + 0x10 + *(int *)(param_1 + 0x5c)));
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x30;
    } while (iVar2 < *(int *)(param_1 + 0x60));
  }
  *(int *)(param_1 + 0x60) = param_3;
  iVar3 = 0;
  if (param_2 == 1) {
    if (param_3 == 0) {
      puVar1 = (undefined *)**(undefined4 **)(param_1 + 0x44);
      if (puVar1 != (undefined *)0x0) {
        if (puVar1 == &DAT_00712500) {
          iVar3 = FUN_0051f6b0(*(undefined4 **)(param_1 + 0x44),0,0);
        }
        *(undefined4 *)(param_1 + 0x34) = 0;
      }
    }
  }
  else if ((*(int *)(param_1 + 0xb8) != 0) || (**(int **)(param_1 + 0x40) != 0)) {
    if (param_3 != 0) {
      iVar3 = FUN_00541500(param_1,*(int *)(param_1 + 0x5c) + -0x30 + param_3 * 0x30);
      return iVar3;
    }
    iVar3 = FUN_00541500(param_1,0);
    return iVar3;
  }
  return iVar3;
}


/* FUN_0055fe80 @ 0055fe80  kind=gamemisc  attributed-by=caller-vote  size=291 */

int FUN_0055fe80(int param_1,uint *param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 local_c;
  
  uVar1 = *param_2;
  iVar5 = 0;
  if ((((*(char *)(param_1 + 0xe) == '\0') || (*(int *)(param_1 + 0x18) == 0)) &&
      (*(int *)(*(int *)(param_1 + 0xb4) + 0xc) == 0)) &&
     ((uVar1 != 0 && (uVar1 != *(uint *)(param_1 + 0x80))))) {
    local_c = 0;
    if ((*(char *)(param_1 + 0xf) != '\0') && (piVar2 = *(int **)(param_1 + 0x3c), *piVar2 != 0)) {
      iVar5 = (**(code **)(*piVar2 + 0x18))(piVar2,&local_c);
      if (iVar5 != 0) goto LAB_0055ff7c;
    }
    iVar3 = FUN_00543f40(uVar1);
    if (iVar3 == 0) {
      iVar5 = 7;
    }
    else {
      FUN_005428f0(param_1);
      uVar4 = __alldiv(uVar1 + (uint)local_c + -1,
                       (local_c._4_4_ + (uint)CARRY4(uVar1,(uint)local_c)) -
                       (uint)(uVar1 + (uint)local_c == 0),uVar1,0);
      *(undefined4 *)(param_1 + 0x18) = uVar4;
      *(uint *)(param_1 + 0x80) = uVar1;
      FUN_00544190(*(undefined4 *)(param_1 + 0xb0));
      *(int *)(param_1 + 0xb0) = iVar3;
      iVar3 = *(int *)(param_1 + 0xb4);
      if (*(int *)(iVar3 + 0x28) != 0) {
        (*DAT_00766670)(*(int *)(iVar3 + 0x28));
        *(undefined4 *)(iVar3 + 0x28) = 0;
        *(undefined4 *)(iVar3 + 0x2c) = 0;
      }
      *(uint *)(iVar3 + 0x14) = uVar1;
    }
  }
LAB_0055ff7c:
  *param_2 = *(uint *)(param_1 + 0x80);
  if (iVar5 == 0) {
    if (param_3 < 0) {
      param_3 = (int)*(short *)(param_1 + 0x76);
    }
    *(short *)(param_1 + 0x76) = (short)param_3;
  }
  return iVar5;
}


/* FUN_00560030 @ 00560030  kind=gamemisc  attributed-by=caller-vote  size=589 */

void FUN_00560030(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  bool bVar5;
  int local_20;
  uint local_1c;
  int local_18 [5];
  
  local_18[4] = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  uVar4 = 0;
  if ((*(char *)((int)param_1 + 0xe) != '\0') && (param_1[10] != 0)) goto LAB_0056026d;
  if ((param_1[0x2e] == 0) && (*(char *)((int)param_1 + 0xf) == '\0')) {
    local_1c = 1;
    iVar1 = FUN_00542b40(param_1,1);
    if (iVar1 != 0) goto LAB_0056024c;
    if (*(byte *)(param_1 + 4) < 2) {
      iVar1 = FUN_0053b5a0(param_1,&local_1c);
      if (iVar1 != 0) goto LAB_0056024c;
      if (local_1c != 0) goto LAB_005600b0;
LAB_00560178:
      if (((char)param_1[3] == '\0') &&
         ((param_1[0x16] != 0 || (iVar1 = FUN_00561110(param_1[0x2d]), 0 < iVar1)))) {
        local_1c = 0;
        iVar1 = FUN_00541470(param_1,&local_1c);
        if (iVar1 != 0) goto LAB_0056024c;
        if (local_1c == 0) {
          local_18[0] = 0;
          local_18[1] = 0;
          local_18[2] = 0;
          local_18[3] = 0;
        }
        else {
          iVar1 = (**(code **)(*(int *)param_1[0xf] + 8))((int *)param_1[0xf],local_18,0x10,0x18,0);
          if (iVar1 != 0) goto LAB_0056024c;
        }
        piVar2 = param_1 + 0x19;
        piVar3 = local_18;
        uVar4 = 0xc;
        do {
          if (*piVar2 != *piVar3) {
            FUN_005428f0(param_1);
            break;
          }
          piVar2 = piVar2 + 1;
          piVar3 = piVar3 + 1;
          bVar5 = 3 < uVar4;
          uVar4 = uVar4 - 4;
        } while (bVar5);
      }
      uVar4 = FUN_005413e0(param_1);
      goto LAB_0056021b;
    }
LAB_005600b0:
    iVar1 = FUN_00541340(param_1,4);
    if (iVar1 != 0) goto LAB_0056024c;
    uVar4 = 0;
    if (*(int *)param_1[0x10] == 0) {
      iVar1 = *param_1;
      uVar4 = (**(code **)(iVar1 + 0x20))(iVar1,param_1[0x25],0,&local_20);
      if ((((uVar4 == 0) && (local_20 != 0)) &&
          (local_1c = uVar4,
          uVar4 = (**(code **)(iVar1 + 0x18))(iVar1,param_1[0x25],param_1[0x10],0x802,&local_1c),
          uVar4 == 0)) && ((local_1c & 1) != 0)) {
        uVar4 = FUN_0054f780(0xa4b6);
        FUN_0055e900(param_1[0x10]);
      }
    }
    if (*(int *)param_1[0x10] == 0) {
      if ((char)param_1[1] == '\0') {
        FUN_00541a70(param_1,1);
      }
LAB_00560168:
      if (uVar4 == 0) goto LAB_00560178;
    }
    else {
      uVar4 = FUN_00541900(param_1);
      if (uVar4 == 0) {
        uVar4 = FUN_005422c0(param_1,1);
        *(undefined1 *)((int)param_1 + 0xf) = 0;
        goto LAB_00560168;
      }
    }
    FUN_00541fd0(param_1,uVar4);
  }
  else {
LAB_0056021b:
    if (param_1[0x2e] != 0) {
      uVar4 = FUN_00541270(param_1);
    }
    if (*(char *)((int)param_1 + 0xf) == '\0') {
      if (uVar4 != 0) goto LAB_0056024c;
      uVar4 = FUN_00541470(param_1,param_1 + 6);
    }
  }
  if (uVar4 == 0) {
    *(undefined1 *)((int)param_1 + 0xf) = 1;
LAB_0056026d:
    __security_check_cookie(local_18[4] ^ (uint)&stack0xfffffffc);
    return;
  }
LAB_0056024c:
  FUN_00542a20(param_1);
  __security_check_cookie(local_18[4] ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00560280 @ 00560280  kind=gamemisc  attributed-by=caller-vote  size=70 */

int FUN_00560280(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 7) == '\0') {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x14))
                      (*(int **)(param_1 + 0x3c),*(undefined1 *)(param_1 + 0xb));
    return iVar2;
  }
  piVar1 = *(int **)(param_1 + 0x3c);
  if (*piVar1 != 0) {
    iVar2 = (**(code **)(*piVar1 + 0x28))(piVar1,8,0);
    if (iVar2 == 0xc) {
      iVar2 = 0;
    }
    return iVar2;
  }
  return 0;
}


/* FUN_005602d0 @ 005602d0  kind=gamemisc  attributed-by=caller-vote  size=47 */

void FUN_005602d0(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    FUN_00561130(param_1);
    if (*(int *)(*(int *)(iVar1 + 0xb4) + 0xc) == 0) {
      FUN_00541a10(iVar1);
    }
  }
  return;
}


/* FUN_00560330 @ 00560330  kind=gamemisc  attributed-by=caller-vote  size=512 */

int FUN_00560330(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  iVar4 = *(int *)(param_1 + 0x10);
  local_8 = *(uint *)(iVar4 + 0x7c) / *(uint *)(iVar4 + 0x80);
  local_10 = 0;
  if (local_8 < 2) {
    iVar4 = FUN_00542bc0(param_1);
    return iVar4;
  }
  *(char *)(iVar4 + 0x14) = *(char *)(iVar4 + 0x14) + '\x01';
  uVar5 = *(uint *)(param_1 + 0x14);
  iVar7 = 0;
  iVar6 = (~(local_8 - 1) & uVar5 - 1) + 1;
  local_c = 0;
  if (*(uint *)(iVar4 + 0x18) < uVar5) {
    local_8 = (uVar5 - iVar6) + 1;
  }
  else if (*(uint *)(iVar4 + 0x18) < (local_8 - 1) + iVar6) {
    local_8 = (*(uint *)(iVar4 + 0x18) - iVar6) + 1;
  }
  local_18 = 0;
  uVar5 = local_8;
  iVar8 = iVar6;
  if (0 < (int)local_8) {
    do {
      if (local_10 != 0) goto LAB_0056051a;
      if ((iVar8 == *(int *)(param_1 + 0x14)) ||
         (iVar3 = FUN_0054c2e0(*(undefined4 *)(iVar4 + 0x38),iVar8), uVar5 = local_8, iVar3 == 0)) {
        if ((iVar8 != DAT_007666d0 / *(int *)(iVar4 + 0x80) + 1) &&
           (local_10 = FUN_0055eb70(iVar4,iVar8,&local_14,0), iVar3 = local_14, uVar5 = local_8,
           local_10 == 0)) {
          local_10 = FUN_00542bc0(local_14);
          if ((*(byte *)(iVar3 + 0x18) & 4) != 0) {
            local_c = 1;
          }
          iVar1 = *(int *)(iVar3 + 0x10);
          FUN_00561130(iVar3);
          uVar5 = local_8;
          iVar7 = local_c;
          if (*(int *)(*(int *)(iVar1 + 0xb4) + 0xc) == 0) {
            FUN_00541a10(iVar1);
            uVar5 = local_8;
            iVar7 = local_c;
          }
        }
      }
      else {
        FUN_00560e90(*(undefined4 *)(iVar4 + 0xb4),iVar8,0,&local_1c);
        local_14 = local_1c;
        uVar5 = local_8;
        if (local_1c != 0) {
          if ((*(byte *)(local_1c + 0x18) & 4) != 0) {
            iVar7 = 1;
          }
          iVar3 = *(int *)(local_1c + 0x10);
          local_c = iVar7;
          FUN_00561130(local_1c);
          uVar5 = local_8;
          if (*(int *)(*(int *)(iVar3 + 0xb4) + 0xc) == 0) {
            FUN_00541a10(iVar3);
            uVar5 = local_8;
          }
        }
      }
      uVar2 = local_8;
      local_18 = local_18 + 1;
      iVar8 = iVar8 + 1;
    } while (local_18 < (int)uVar5);
    if ((local_10 == 0) && (iVar7 != 0)) {
      iVar7 = 0;
      do {
        FUN_00560e90(*(undefined4 *)(iVar4 + 0xb4),iVar6 + iVar7,0,&param_1);
        if (param_1 != 0) {
          iVar8 = *(int *)(param_1 + 0x10);
          *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) | 4;
          FUN_00561130(param_1);
          if (*(int *)(*(int *)(iVar8 + 0xb4) + 0xc) == 0) {
            FUN_00541a10(iVar8);
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)uVar2);
    }
  }
LAB_0056051a:
  *(char *)(iVar4 + 0x14) = *(char *)(iVar4 + 0x14) + -1;
  return local_10;
}


/* FUN_00560af0 @ 00560af0  kind=gamemisc  attributed-by=caller-vote  size=310 */

void FUN_00560af0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined8 local_1c;
  int local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  int local_8;
  
  if (*param_1 < 0) {
    *param_1 = 0;
    param_1[1] = -1;
    *(undefined2 *)(param_1 + 3) = 0;
    *(undefined1 *)((int)param_1 + 0xe) = 0;
  }
  local_10 = param_3;
  uStack_c = param_4;
  param_1[2] = param_5;
  while( true ) {
    iVar2 = FUN_00580c40(param_1,param_2);
    if (iVar2 < 0x273) {
      *param_1 = *param_1 + 1;
      iVar1 = *param_1;
      if (iVar1 < 100) {
        *(short *)(param_1 + iVar1 * 4 + 3) = (short)iVar2;
        *(ulonglong *)(param_1 + iVar1 * 4 + 4) = CONCAT44(uStack_c,local_10);
        *(char *)((int)param_1 + iVar1 * 0x10 + 0xe) = (char)param_2;
        param_1[iVar1 * 4 + 6] = local_8;
        param_1[1] = param_1[1] + -1;
        return;
      }
      iVar2 = param_1[2];
      iVar1 = iVar1 + -1;
      *param_1 = iVar1;
      while ((-1 < iVar1 && (iVar1 = *param_1, -1 < iVar1))) {
        FUN_00580b00(param_1,*(undefined1 *)((int)param_1 + iVar1 * 0x10 + 0xe),
                     param_1 + iVar1 * 4 + 4);
        *param_1 = *param_1 + -1;
        iVar1 = *param_1;
      }
      FUN_00553950(iVar2,"parser stack overflow");
      param_1[1] = param_1[1] + -1;
      param_1[2] = iVar2;
      return;
    }
    if (0x3b9 < iVar2) {
      iVar2 = param_1[2];
      local_1c = CONCAT44(uStack_c,local_10);
      local_14 = local_8;
      FUN_00553950(iVar2,"near \"%T\": syntax error",&local_1c);
      param_1[2] = iVar2;
      FUN_00580b00(param_1,param_2,&local_10);
      return;
    }
    FUN_00580cd0(param_1,iVar2 + -0x273);
    if (param_2 == 0xfb) break;
    if (*param_1 < 0) {
      return;
    }
  }
  return;
}


/* FUN_00560c30 @ 00560c30  kind=gamemisc  attributed-by=caller-vote  size=63 */

void FUN_00560c30(int *param_1,code *param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    iVar2 = *param_1;
    iVar1 = iVar2;
    while ((-1 < iVar1 && (-1 < iVar2))) {
      FUN_00580b00(param_1,*(undefined1 *)((int)param_1 + iVar2 * 0x10 + 0xe),
                   param_1 + iVar2 * 4 + 4);
      *param_1 = *param_1 + -1;
      iVar1 = *param_1;
      iVar2 = *param_1;
    }
    (*param_2)(param_1);
  }
  return;
}


/* FUN_00560c70 @ 00560c70  kind=gamemisc  attributed-by=caller-vote  size=95 */

void FUN_00560c70(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)*param_1;
  while (puVar1 != (undefined4 *)0x0) {
    if ((*(byte *)(puVar1 + 6) & 2) != 0) {
      FUN_00544570(puVar1);
      *(ushort *)(puVar1 + 6) = *(ushort *)(puVar1 + 6) & 0xfff9;
      if ((*(short *)((int)puVar1 + 0x1a) == 0) && (iVar2 = puVar1[7], *(int *)(iVar2 + 0x1c) != 0))
      {
        if (puVar1[5] == 1) {
          *(undefined4 *)(iVar2 + 0x2c) = 0;
        }
        (*DAT_00766664)(*(undefined4 *)(iVar2 + 0x28),*puVar1,0);
      }
    }
    puVar1 = (undefined4 *)*param_1;
  }
  return;
}


/* FUN_00560cd0 @ 00560cd0  kind=gamemisc  attributed-by=caller-vote  size=378 */

undefined1 * FUN_00560cd0(int *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 *local_ac [32];
  undefined1 local_2c [12];
  undefined1 *local_20;
  
  iVar7 = *param_1;
  while (iVar7 != 0) {
    *(int *)(iVar7 + 0xc) = *(int *)(iVar7 + 0x20);
    iVar7 = *(int *)(iVar7 + 0x20);
  }
  puVar2 = (undefined1 *)*param_1;
  memset(local_ac,0,0x80);
  while (puVar2 != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(puVar2 + 0xc);
    *(int *)(puVar2 + 0xc) = 0;
    iVar7 = 0;
    do {
      if (local_ac[iVar7] == (undefined1 *)0x0) {
        local_ac[iVar7] = puVar2;
        puVar4 = puVar2;
        break;
      }
      puVar4 = local_2c;
      puVar5 = local_ac[iVar7];
      do {
        if (puVar2 == (undefined1 *)0x0) {
          if (puVar5 == (undefined1 *)0x0) goto LAB_00560d64;
          *(undefined1 **)(puVar4 + 0xc) = puVar5;
          goto LAB_00560d6b;
        }
        if (*(uint *)(puVar5 + 0x14) < *(uint *)(puVar2 + 0x14)) {
          *(undefined1 **)(puVar4 + 0xc) = puVar5;
          puVar3 = puVar2;
          puVar6 = *(undefined1 **)(puVar5 + 0xc);
          puVar4 = puVar5;
        }
        else {
          *(undefined1 **)(puVar4 + 0xc) = puVar2;
          puVar3 = *(undefined1 **)(puVar2 + 0xc);
          puVar6 = puVar5;
          puVar4 = puVar2;
        }
        puVar2 = puVar3;
        puVar5 = puVar6;
      } while (puVar6 != (undefined1 *)0x0);
      if (puVar3 == (undefined1 *)0x0) {
LAB_00560d64:
        *(undefined4 *)(puVar4 + 0xc) = 0;
      }
      else {
        *(undefined1 **)(puVar4 + 0xc) = puVar3;
      }
LAB_00560d6b:
      local_ac[iVar7] = (undefined1 *)0x0;
      iVar7 = iVar7 + 1;
      puVar2 = local_20;
      puVar4 = local_20;
    } while (iVar7 < 0x1f);
    puVar2 = puVar1;
    if (iVar7 == 0x1f) {
      puVar1 = local_2c;
      while (local_ac[0x1f] != (undefined1 *)0x0) {
        if (puVar4 == (undefined1 *)0x0) {
          if (local_ac[0x1f] == (undefined1 *)0x0) goto LAB_00560dcb;
          *(undefined1 **)(puVar1 + 0xc) = local_ac[0x1f];
          goto LAB_00560dd2;
        }
        if (*(uint *)(local_ac[0x1f] + 0x14) < *(uint *)(puVar4 + 0x14)) {
          *(undefined1 **)(puVar1 + 0xc) = local_ac[0x1f];
          puVar1 = local_ac[0x1f];
          local_ac[0x1f] = *(undefined1 **)(local_ac[0x1f] + 0xc);
        }
        else {
          *(undefined1 **)(puVar1 + 0xc) = puVar4;
          puVar1 = puVar4;
          puVar4 = *(undefined1 **)(puVar4 + 0xc);
        }
      }
      if (puVar4 == (undefined1 *)0x0) {
LAB_00560dcb:
        *(undefined4 *)(puVar1 + 0xc) = 0;
      }
      else {
        *(undefined1 **)(puVar1 + 0xc) = puVar4;
      }
LAB_00560dd2:
      local_ac[0x1f] = local_20;
    }
  }
  iVar7 = 1;
  do {
    puVar1 = local_ac[iVar7];
    puVar2 = local_2c;
    while (puVar4 = puVar1, local_ac[0] != (undefined1 *)0x0) {
      if (puVar4 == (undefined1 *)0x0) {
        if (local_ac[0] == (undefined1 *)0x0) goto LAB_00560e34;
        *(undefined1 **)(puVar2 + 0xc) = local_ac[0];
        goto LAB_00560e3b;
      }
      if (*(uint *)(local_ac[0] + 0x14) < *(uint *)(puVar4 + 0x14)) {
        *(undefined1 **)(puVar2 + 0xc) = local_ac[0];
        puVar1 = puVar4;
        puVar2 = local_ac[0];
        local_ac[0] = *(undefined1 **)(local_ac[0] + 0xc);
      }
      else {
        *(undefined1 **)(puVar2 + 0xc) = puVar4;
        puVar1 = *(undefined1 **)(puVar4 + 0xc);
        puVar2 = puVar4;
      }
    }
    if (puVar4 == (undefined1 *)0x0) {
LAB_00560e34:
      *(undefined4 *)(puVar2 + 0xc) = 0;
    }
    else {
      *(undefined1 **)(puVar2 + 0xc) = puVar4;
    }
LAB_00560e3b:
    iVar7 = iVar7 + 1;
    local_ac[0] = local_20;
    if (0x1f < iVar7) {
      return local_20;
    }
  } while( true );
}


/* FUN_00560e50 @ 00560e50  kind=gamemisc  attributed-by=caller-vote  size=60 */

void FUN_00560e50(undefined4 *param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 6) & 2) != 0) {
    FUN_00544570(param_1);
  }
  iVar1 = param_1[7];
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + -1;
  if (param_1[5] == 1) {
    *(undefined4 *)(iVar1 + 0x2c) = 0;
  }
  (*DAT_00766664)(*(undefined4 *)(iVar1 + 0x28),*param_1,1);
  return;
}


/* FUN_00560e90 @ 00560e90  kind=gamemisc  attributed-by=caller-vote  size=366 */

int FUN_00560e90(int *param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = (int *)0x0;
  if ((param_1[10] == 0) && (param_3 != 0)) {
    iVar1 = (*DAT_00766654)(param_1[5],param_1[6] + 0x28,param_1[7]);
    if (iVar1 == 0) {
      return 7;
    }
    uVar2 = FUN_00540b30(param_1);
    (*DAT_00766658)(iVar1,uVar2);
    param_1[10] = iVar1;
  }
  if ((param_1[7] == 0) || (*param_1 == 0)) {
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  param_3 = (iVar1 + 1) * param_3;
  if ((param_1[10] == 0) ||
     (piVar3 = (int *)(*DAT_00766660)(param_1[10],param_2,param_3), piVar3 == (int *)0x0)) {
    if (param_3 != 1) goto LAB_00560fe6;
    for (iVar1 = param_1[2];
        (iVar1 != 0 && ((*(short *)(iVar1 + 0x1a) != 0 || ((*(byte *)(iVar1 + 0x18) & 4) != 0))));
        iVar1 = *(int *)(iVar1 + 0x24)) {
    }
    param_1[2] = iVar1;
    if (iVar1 == 0) {
      for (iVar1 = param_1[1]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x24)) {
        if (*(short *)(iVar1 + 0x1a) == 0) goto LAB_00560f55;
      }
    }
    else {
LAB_00560f55:
      iVar1 = (*(code *)param_1[8])(param_1[9],iVar1);
      if ((iVar1 != 0) && (iVar1 != 5)) {
        return iVar1;
      }
    }
    piVar3 = (int *)(*DAT_00766660)(param_1[10],param_2,2);
    if (piVar3 == (int *)0x0) goto LAB_00560fe6;
  }
  piVar4 = (int *)piVar3[1];
  if (*piVar4 == 0) {
    piVar4[0] = 0;
    piVar4[1] = 0;
    piVar4[2] = 0;
    piVar4[3] = 0;
    piVar4[4] = 0;
    piVar4[5] = 0;
    piVar4[6] = 0;
    piVar4[7] = 0;
    piVar4[8] = 0;
    piVar4[9] = 0;
    *piVar4 = (int)piVar3;
    piVar4[1] = *piVar3;
    piVar4[2] = (int)(piVar4 + 10);
    memset(piVar4 + 10,0,param_1[6]);
    piVar4[7] = (int)param_1;
    piVar4[5] = param_2;
  }
  if (*(short *)((int)piVar4 + 0x1a) == 0) {
    param_1[3] = param_1[3] + 1;
  }
  *(short *)((int)piVar4 + 0x1a) = *(short *)((int)piVar4 + 0x1a) + 1;
  if (param_2 == 1) {
    param_1[0xb] = (int)piVar4;
  }
LAB_00560fe6:
  *param_4 = piVar4;
  if ((piVar4 == (int *)0x0) && (param_3 != 0)) {
    return 7;
  }
  return 0;
}


/* FUN_00561000 @ 00561000  kind=gamemisc  attributed-by=caller-vote  size=79 */

void FUN_00561000(undefined4 *param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 6) & 2) != 0) {
    FUN_00544570(param_1);
    *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) & 0xfff9;
    if ((*(short *)((int)param_1 + 0x1a) == 0) && (iVar1 = param_1[7], *(int *)(iVar1 + 0x1c) != 0))
    {
      if (param_1[5] == 1) {
        *(undefined4 *)(iVar1 + 0x2c) = 0;
      }
      (*DAT_00766664)(*(undefined4 *)(iVar1 + 0x28),*param_1,0);
    }
  }
  return;
}


