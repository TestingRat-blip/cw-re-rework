// Unsorted_005 (game_misc) -- cube. 130 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Unsorted_005.h"

/* FUN_006bf5b0 @ 006bf5b0  kind=gamemisc  attributed-by=none  size=198 */

void FUN_006bf5b0(int param_1,uint param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = *(uint *)(param_1 + 0x2dc);
  uVar4 = 0;
  uVar5 = 0;
  if (param_2 < uVar2) {
    iVar3 = *(int *)(param_1 + 0x2e0);
    if (*(short *)(param_1 + 0xd2) == 0) {
      uVar1 = iVar3 + 4 + param_2 * 2;
      uVar4 = (uint)CONCAT11(*(undefined1 *)(iVar3 + param_2 * 2),
                             *(undefined1 *)(iVar3 + 1 + param_2 * 2));
      uVar5 = uVar4;
      if (uVar1 <= iVar3 + uVar2 * 2) {
        uVar5 = (uint)CONCAT11(*(undefined1 *)(uVar1 - 2),*(undefined1 *)(uVar1 - 1));
      }
      uVar4 = uVar4 * 2;
      uVar5 = uVar5 * 2;
    }
    else {
      uVar1 = iVar3 + 8 + param_2 * 4;
      uVar4 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar3 + param_2 * 4),
                                         *(undefined1 *)(iVar3 + 1 + param_2 * 4)),
                                *(undefined1 *)(iVar3 + 2 + param_2 * 4)),
                       *(undefined1 *)(iVar3 + 3 + param_2 * 4));
      uVar5 = uVar4;
      if (iVar3 + uVar2 * 4 < uVar1) goto LAB_006bf66a;
      uVar5 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(uVar1 - 4),*(undefined1 *)(uVar1 - 3)),
                                *(undefined1 *)(uVar1 - 2)),*(undefined1 *)(uVar1 - 1));
    }
    if (uVar5 < uVar4) {
      uVar5 = *(uint *)(param_1 + 0x2c0);
    }
  }
LAB_006bf66a:
  *param_3 = uVar5 - uVar4;
  return;
}


/* FUN_006bf740 @ 006bf740  kind=gamemisc  attributed-by=none  size=388 */

int FUN_006bf740(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint local_c;
  undefined4 local_8;
  undefined1 *puStack_4;
  
  iVar2 = param_2;
  iVar1 = param_1;
  local_8 = *(undefined4 *)(param_2 + 0x1c);
  param_1 = (**(code **)(param_1 + 0x1fc))(param_1,0x68646d78,param_2,&local_c);
  if ((param_1 != 0) || (local_c < 8)) {
    return 0;
  }
  param_1 = FUN_00693a30(iVar2,local_c,(undefined4 *)(iVar1 + 0x2e4));
  if (param_1 == 0) {
    puVar6 = *(undefined1 **)(iVar1 + 0x2e4);
    puStack_4 = puVar6 + local_c;
    uVar5 = (uint)CONCAT11(puVar6[2],puVar6[3]);
    uVar7 = CONCAT31(CONCAT21(CONCAT11(puVar6[4],puVar6[5]),puVar6[6]),puVar6[7]);
    if (0xfffeffff < uVar7) {
      uVar7 = uVar7 & 0xffff;
    }
    if (((CONCAT11(*puVar6,puVar6[1]) == 0) && (uVar5 < 0x100)) && (uVar7 < 0x10002)) {
      uVar3 = FUN_00693a60(local_8,1,0,uVar5,0,&param_1);
      *(undefined4 *)(iVar1 + 0x2f4) = uVar3;
      if (param_1 == 0) {
        uVar4 = 0;
        puVar6 = puVar6 + 8;
        if (uVar5 != 0) {
          do {
            if (puStack_4 < puVar6 + uVar7) break;
            *(undefined1 *)(uVar4 + *(int *)(iVar1 + 0x2f4)) = *puVar6;
            uVar4 = uVar4 + 1;
            puVar6 = puVar6 + uVar7;
          } while (uVar4 < uVar5);
        }
        *(uint *)(iVar1 + 0x2ec) = uVar4;
        *(uint *)(iVar1 + 0x2f0) = uVar7;
        *(uint *)(iVar1 + 0x2e8) = local_c;
        return 0;
      }
    }
    else {
      param_1 = 3;
    }
    FUN_00691ee0(param_2,iVar1 + 0x2e4);
    *(undefined4 *)(iVar1 + 0x2e8) = 0;
  }
  return param_1;
}


/* FUN_006bf910 @ 006bf910  kind=gamemisc  attributed-by=none  size=81 */

int FUN_006bf910(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int in_EDX;
  
  iVar1 = 0;
  uVar2 = 0;
  if (*(uint *)(in_EDX + 0x2ec) != 0) {
    while (*(byte *)(*(int *)(in_EDX + 0x2f4) + uVar2) != param_1) {
      uVar2 = uVar2 + 1;
      if (*(uint *)(in_EDX + 0x2ec) <= uVar2) {
        return iVar1;
      }
    }
    if (param_2 + 2U < *(uint *)(in_EDX + 0x2f0)) {
      iVar1 = *(int *)(in_EDX + 0x2e4) + 8 + uVar2 * *(uint *)(in_EDX + 0x2f0) + param_2 + 2U;
    }
  }
  return iVar1;
}


/* FUN_006bfa80 @ 006bfa80  kind=gamemisc  attributed-by=none  size=155 */

void FUN_006bfa80(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int *unaff_ESI;
  int local_14 [3];
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)local_14;
  piVar1 = *(int **)(*(int *)(*unaff_ESI + 0x80) + 0x34);
  if ((piVar1 != (int *)0x0) && (*(int *)(*piVar1 + 8) != 0)) {
    local_14[2] = unaff_ESI[0xe];
    local_14[0] = unaff_ESI[0xd];
    local_14[1] = 0;
    local_8 = 0;
    piVar1 = *(int **)(*(int *)(*unaff_ESI + 0x80) + 0x34);
    iVar2 = (**(code **)(*piVar1 + 8))(piVar1[1],param_1,0,local_14);
    if (iVar2 == 0) {
      unaff_ESI[0xd] = (int)(short)local_14[0];
      unaff_ESI[0xe] = local_14[2] & 0xffffU;
      unaff_ESI[0x2c] = 0;
      unaff_ESI[0x2d] = 0;
      if ((char)unaff_ESI[0x10] == '\0') {
        *(undefined1 *)(unaff_ESI + 0x10) = 1;
        unaff_ESI[0xf] = local_14[2] & 0xffffU;
      }
    }
  }
  __security_check_cookie(local_4 ^ (uint)local_14);
  return;
}


/* FUN_006bfb20 @ 006bfb20  kind=gamemisc  attributed-by=none  size=44 */

void FUN_006bfb20(void)

{
  uint uVar1;
  int *piVar2;
  int in_ECX;
  uint in_EDX;
  int unaff_ESI;
  int unaff_EDI;
  
  if ((unaff_ESI != 0) && (uVar1 = 0, in_EDX != 0)) {
    do {
      piVar2 = (int *)(in_ECX + uVar1 * 8);
      *piVar2 = *piVar2 + unaff_ESI;
      uVar1 = uVar1 + 1;
    } while (uVar1 < in_EDX);
  }
  if ((unaff_EDI != 0) && (in_EDX != 0)) {
    piVar2 = (int *)(in_ECX + 4);
    do {
      *piVar2 = *piVar2 + unaff_EDI;
      piVar2 = piVar2 + 2;
      in_EDX = in_EDX - 1;
    } while (in_EDX != 0);
  }
  return;
}


/* FUN_006c0280 @ 006c0280  kind=gamemisc  attributed-by=none  size=51 */

void FUN_006c0280(void)

{
  int in_EAX;
  
  *(undefined1 **)(in_EAX + 0x200) = &LAB_006bfb50;
  *(undefined1 **)(in_EAX + 0x208) = &LAB_006bfbb0;
  *(code **)(in_EAX + 0x20c) = FUN_006bfc40;
  *(code **)(in_EAX + 0x210) = FUN_006c0030;
  *(undefined1 **)(in_EAX + 0x204) = &LAB_006bfba0;
  return;
}


/* FUN_006c02c0 @ 006c02c0  kind=gamemisc  attributed-by=none  size=78 */

void FUN_006c02c0(void)

{
  int iVar1;
  int in_EAX;
  short *in_ECX;
  int in_EDX;
  int unaff_EDI;
  
  *(short *)(in_EAX + 8) = in_ECX[1] - (short)in_EDX;
  *(short *)(in_EAX + 10) = *in_ECX - (short)unaff_EDI;
  iVar1 = in_EDX * 8;
  *(int *)(in_EAX + 0xc) = *(int *)(in_ECX + 10) + iVar1;
  *(int *)(in_EAX + 0x10) = *(int *)(in_ECX + 2) + iVar1;
  *(int *)(in_EAX + 0x14) = *(int *)(in_ECX + 0xc) + iVar1;
  *(int *)(in_EAX + 0x18) = *(int *)(in_ECX + 4) + in_EDX;
  *(int *)(in_EAX + 0x1c) = *(int *)(in_ECX + 6) + unaff_EDI * 2;
  *(short *)(in_EAX + 0x20) = (short)in_EDX;
  return;
}


/* FUN_006c0310 @ 006c0310  kind=gamemisc  attributed-by=none  size=388 */

undefined4 FUN_006c0310(int param_1,int param_2,int param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  iVar3 = *(int *)(param_1 + 0xc);
  bVar1 = *(byte *)(param_2 + 4);
  uVar7 = (uint)*(short *)(iVar3 + 0x16);
  if (((bVar1 & 200) != 0) && (param_4 < uVar7)) {
    iVar9 = *(int *)(iVar3 + 0x18) + param_4 * 8;
    iVar8 = uVar7 - param_4;
    do {
      FUN_00690500(iVar9,param_2 + 0x10);
      iVar9 = iVar9 + 8;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if ((*(ushort *)(param_2 + 4) & 2) == 0) {
    uVar2 = *(int *)(param_2 + 8) + param_3;
    uVar6 = *(int *)(param_2 + 0xc) + param_4;
    if ((param_4 <= uVar2) || (uVar7 <= uVar6)) {
      return 0x15;
    }
    iVar3 = *(int *)(iVar3 + 0x18);
    uVar7 = *(int *)(iVar3 + uVar2 * 8) - *(int *)(iVar3 + uVar6 * 8);
    uVar2 = *(int *)(iVar3 + 4 + uVar2 * 8) - *(int *)(iVar3 + 4 + uVar6 * 8);
  }
  else {
    uVar7 = *(uint *)(param_2 + 8);
    uVar2 = *(uint *)(param_2 + 0xc);
    if ((uVar7 == 0) && (uVar2 == 0)) {
      return 0;
    }
    if (((bVar1 & 200) != 0) && ((*(ushort *)(param_2 + 4) & 0x800) != 0)) {
      uVar5 = *(undefined4 *)(param_2 + 0x14);
      iVar3 = FUN_0068ebc0(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x10));
      iVar9 = FUN_0068ebc0(uVar5,uVar5);
      uVar4 = FUN_0068eec0(iVar3 + iVar9);
      uVar5 = *(undefined4 *)(param_2 + 0x1c);
      iVar3 = FUN_0068ebc0(*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x18));
      iVar9 = FUN_0068ebc0(uVar5,uVar5);
      uVar5 = FUN_0068eec0(iVar3 + iVar9);
      uVar7 = FUN_0068ebc0(uVar7,uVar4);
      uVar2 = FUN_0068ebc0(uVar2,uVar5);
    }
    if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
      uVar5 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x34);
      uVar7 = FUN_0068ebc0(uVar7,*(undefined4 *)(*(int *)(param_1 + 4) + 0x30));
      uVar2 = FUN_0068ebc0(uVar2,uVar5);
      if ((*(byte *)(param_2 + 4) & 4) != 0) {
        uVar7 = uVar7 + 0x20 & 0xffffffc0;
        uVar2 = uVar2 + 0x20 & 0xffffffc0;
      }
    }
  }
  if ((uVar7 != 0) || (uVar2 != 0)) {
    FUN_006bfb20();
  }
  return 0;
}


/* FUN_006c04a0 @ 006c04a0  kind=gamemisc  attributed-by=none  size=582 */

void FUN_006c04a0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  short sVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  int *in_ECX;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  uint local_c;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_30;
  iVar8 = *in_ECX;
  iVar1 = in_ECX[2];
  iVar2 = in_ECX[1];
  local_28 = param_1;
  local_2c = 0x10000;
  if ((*(byte *)(in_ECX + 4) & 1) == 0) {
    local_2c = *(undefined4 *)(iVar2 + 0x14);
  }
  if (*(int *)(iVar1 + 0x48) == 0x636f6d70) {
    local_24 = in_ECX[9];
    local_20 = in_ECX[10];
    local_1c = in_ECX[0xb];
    local_18 = in_ECX[0xc];
  }
  else {
    FUN_00690430(iVar1 + 0x6c,&local_24);
  }
  uVar6 = in_ECX[0xf];
  if ((*(int *)(iVar8 + 0x1e0) != 0) && ((in_ECX[4] & 0x200U) == 0)) {
    uVar6 = (uint)*(ushort *)(iVar8 + 0xe2);
  }
  *(uint *)(iVar1 + 0x38) = uVar6;
  *(int *)(iVar1 + 0x20) = local_24;
  *(int *)(iVar1 + 0x24) = local_18;
  *(int *)(iVar1 + 0x28) = in_ECX[0x13] - in_ECX[0x11];
  if ((*(int *)(iVar8 + 0x1e0) == 0) && ((*(byte *)(in_ECX + 4) & 2) == 0)) {
    pbVar7 = (byte *)FUN_006bf910(*(undefined2 *)(iVar2 + 0xc),local_28);
    if (pbVar7 != (byte *)0x0) {
      *(uint *)(iVar1 + 0x28) = (uint)*pbVar7 << 6;
    }
  }
  *(int *)(iVar1 + 0x18) = local_1c - local_24;
  *(int *)(iVar1 + 0x1c) = local_18 - local_20;
  if ((*(char *)(iVar8 + 0x128) == '\0') || (*(short *)(iVar8 + 0x14e) == 0)) {
    sVar5 = FUN_0068ec40(local_18 - local_20,local_2c);
    if (*(short *)(iVar8 + 0x170) == -1) {
      uVar6 = (int)*(short *)(iVar8 + 0xdc) - (int)*(short *)(iVar8 + 0xde);
    }
    else {
      uVar6 = (int)*(short *)(iVar8 + 0x1b6) - (int)*(short *)(iVar8 + 0x1b8);
    }
    local_30 = (int)(uVar6 - (int)sVar5) / 2;
  }
  else {
    sVar5 = FUN_0068ec40(in_ECX[0x2f] - local_18,local_2c);
    local_30 = (int)sVar5;
    if (in_ECX[0x31] < in_ECX[0x2f]) {
      uVar6 = FUN_0068ec40(in_ECX[0x2f] - in_ECX[0x31],local_2c);
      uVar6 = uVar6 & 0xffff;
    }
    else {
      uVar6 = 0;
    }
  }
  piVar3 = *(int **)(*(int *)(iVar8 + 0x80) + 0x34);
  if ((piVar3 != (int *)0x0) && (*(int *)(*piVar3 + 8) != 0)) {
    local_10 = local_30;
    local_14 = 0;
    local_c = uVar6;
    iVar8 = (**(code **)(*piVar3 + 8))(piVar3[1],local_28,1,&local_14);
    if (iVar8 != 0) goto LAB_006c06d3;
    local_30 = local_10;
    uVar6 = local_c;
  }
  uVar4 = local_2c;
  *(uint *)(iVar1 + 0x3c) = uVar6;
  if ((*(byte *)(in_ECX + 4) & 1) == 0) {
    local_30 = FUN_0068ebc0(local_30,local_2c);
    uVar6 = FUN_0068ebc0(uVar6,uVar4);
  }
  *(int *)(iVar1 + 0x2c) = *(int *)(iVar1 + 0x20) - *(int *)(iVar1 + 0x28) / 2;
  *(int *)(iVar1 + 0x30) = local_30;
  *(uint *)(iVar1 + 0x34) = uVar6;
LAB_006c06d3:
  __security_check_cookie(local_4 ^ (uint)&local_30);
  return;
}


/* FUN_006c06f0 @ 006c06f0  kind=gamemisc  attributed-by=none  size=204 */

void FUN_006c06f0(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int unaff_ESI;
  byte local_8;
  byte bStack_7;
  char cStack_6;
  char cStack_5;
  byte bStack_4;
  char cStack_3;
  char cStack_2;
  byte bStack_1;
  
  iVar1 = *(int *)(unaff_ESI + 4);
  iVar1 = (**(code **)(*(int *)(iVar1 + 0x214) + 0x68))
                    (iVar1,*(undefined4 *)(param_1 + 0x70),param_2,param_3,
                     *(undefined4 *)(iVar1 + 0x68),unaff_ESI + 0x4c,&local_8);
  if (iVar1 == 0) {
    *(undefined4 *)(unaff_ESI + 0x6c) = 0;
    *(uint *)(unaff_ESI + 0x1c) = (uint)local_8 << 6;
    *(uint *)(unaff_ESI + 0x18) = (uint)bStack_7 << 6;
    *(int *)(unaff_ESI + 0x20) = (int)cStack_6 << 6;
    *(int *)(unaff_ESI + 0x24) = (int)cStack_5 << 6;
    *(uint *)(unaff_ESI + 0x28) = (uint)bStack_4 << 6;
    *(int *)(unaff_ESI + 0x2c) = (int)cStack_3 << 6;
    *(int *)(unaff_ESI + 0x30) = (int)cStack_2 << 6;
    *(uint *)(unaff_ESI + 0x34) = (uint)bStack_1 << 6;
    *(undefined4 *)(unaff_ESI + 0x48) = 0x62697473;
    if ((param_3 & 0x10) != 0) {
      *(int *)(unaff_ESI + 100) = (int)cStack_3;
      *(int *)(unaff_ESI + 0x68) = (int)cStack_2;
      return;
    }
    *(int *)(unaff_ESI + 100) = (int)cStack_6;
    *(int *)(unaff_ESI + 0x68) = (int)cStack_5;
  }
  return;
}


/* FUN_006c0910 @ 006c0910  kind=gamemisc  attributed-by=none  size=49 */

undefined4 FUN_006c0910(void)

{
  char *pcVar1;
  char *_SubStr;
  char *unaff_EDI;
  
  if (unaff_EDI == (char *)0x0) {
    return 0;
  }
  _SubStr = "DFKaiSho-SB";
  do {
    pcVar1 = strstr(unaff_EDI,_SubStr);
    if (pcVar1 != (char *)0x0) {
      return 1;
    }
    _SubStr = _SubStr + 0x11;
  } while ((int)_SubStr < 0x735e07);
  return 0;
}


/* FUN_006c0950 @ 006c0950  kind=gamemisc  attributed-by=none  size=170 */

void FUN_006c0950(void)

{
  undefined4 uVar1;
  int *unaff_EDI;
  
  uVar1 = *(undefined4 *)(*unaff_EDI + 100);
  if ((char)unaff_EDI[0x49] != '\0') {
    unaff_EDI[0x4a] = 0;
    *(undefined1 *)(unaff_EDI + 0x49) = 0;
  }
  FUN_00691290(uVar1,unaff_EDI[0x3d]);
  unaff_EDI[0x3d] = 0;
  unaff_EDI[0x3c] = 0;
  FUN_00691290(uVar1,unaff_EDI[0x3f]);
  unaff_EDI[0x3f] = 0;
  *(undefined2 *)(unaff_EDI + 0x3e) = 0;
  FUN_006c07c0();
  FUN_00691290(uVar1,unaff_EDI[0x1f]);
  unaff_EDI[0x1f] = 0;
  FUN_00691290(uVar1,unaff_EDI[0x22]);
  unaff_EDI[0x22] = 0;
  unaff_EDI[0x1d] = 0;
  unaff_EDI[0x1e] = 0;
  unaff_EDI[0x20] = 0;
  unaff_EDI[0x21] = 0;
  unaff_EDI[0x23] = 0;
  unaff_EDI[0x24] = 0;
  *(undefined2 *)(unaff_EDI + 0x4b) = 0;
  return;
}


/* FUN_006c0a40 @ 006c0a40  kind=gamemisc  attributed-by=none  size=331 */

undefined4 FUN_006c0a40(void)

{
  int iVar1;
  int iVar2;
  int *unaff_EBX;
  int *piVar3;
  int *piVar4;
  
  iVar1 = *unaff_EBX;
  *(undefined1 *)(unaff_EBX + 0x1b) = 0;
  piVar3 = unaff_EBX + 3;
  piVar4 = unaff_EBX + 0xb;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  if ((*(ushort *)(unaff_EBX + 0xb) != 0) && (*(short *)((int)unaff_EBX + 0x2e) != 0)) {
    if ((*(byte *)(iVar1 + 0xb0) & 8) != 0) {
      iVar2 = FUN_0068ec40((uint)*(ushort *)(unaff_EBX + 0xb) << 6,*(undefined2 *)(iVar1 + 0x44));
      unaff_EBX[0xc] = iVar2;
      iVar2 = FUN_0068ec40((uint)*(ushort *)((int)unaff_EBX + 0x2e) << 6,
                           *(undefined2 *)(iVar1 + 0x44));
      unaff_EBX[0xd] = iVar2;
      iVar2 = FUN_0068ebc0((int)*(short *)(iVar1 + 0x46),iVar2);
      unaff_EBX[0xe] = iVar2 + 0x20U & 0xffffffc0;
      iVar2 = FUN_0068ebc0((int)*(short *)(iVar1 + 0x48),unaff_EBX[0xd]);
      unaff_EBX[0xf] = iVar2 + 0x20U & 0xffffffc0;
      iVar2 = FUN_0068ebc0((int)*(short *)(iVar1 + 0x4a),unaff_EBX[0xd]);
      unaff_EBX[0x10] = iVar2 + 0x20U & 0xffffffc0;
      iVar1 = FUN_0068ebc0((int)*(short *)(iVar1 + 0x4c),unaff_EBX[0xc]);
      unaff_EBX[0x11] = iVar1 + 0x20U & 0xffffffc0;
    }
    if (*(ushort *)(unaff_EBX + 0xb) < *(ushort *)((int)unaff_EBX + 0x2e)) {
      unaff_EBX[0x16] = unaff_EBX[0xd];
      *(undefined2 *)(unaff_EBX + 0x14) = *(undefined2 *)((int)unaff_EBX + 0x2e);
      iVar1 = FUN_0068ea60((short)unaff_EBX[0xb],0x10000,*(undefined2 *)((int)unaff_EBX + 0x2e));
      unaff_EBX[0x12] = iVar1;
      unaff_EBX[0x13] = 0x10000;
    }
    else {
      unaff_EBX[0x16] = unaff_EBX[0xc];
      *(short *)(unaff_EBX + 0x14) = (short)unaff_EBX[0xb];
      unaff_EBX[0x12] = 0x10000;
      iVar1 = FUN_0068ea60(*(undefined2 *)((int)unaff_EBX + 0x2e),0x10000,(short)unaff_EBX[0xb]);
      unaff_EBX[0x13] = iVar1;
    }
    *(undefined1 *)((int)unaff_EBX + 0x12d) = 0;
    *(undefined1 *)(unaff_EBX + 0x1b) = 1;
    return 0;
  }
  return 0x97;
}


/* FUN_006c0bb0 @ 006c0bb0  kind=gamemisc  attributed-by=none  size=45 */

undefined4 FUN_006c0bb0(undefined4 param_1)

{
  int in_EAX;
  int in_ECX;
  
  *(undefined4 *)(in_EAX + 0x164) = *(undefined4 *)(in_EAX + 0x1b4 + in_ECX * 8);
  *(undefined4 *)(in_EAX + 0x16c) = *(undefined4 *)(in_EAX + 0x1b8 + in_ECX * 8);
  *(undefined4 *)(in_EAX + 0x168) = param_1;
  *(int *)(in_EAX + 0x160) = in_ECX;
  return 0;
}


/* FUN_006c0be0 @ 006c0be0  kind=gamemisc  attributed-by=none  size=21 */

undefined4 FUN_006c0be0(undefined4 param_1)

{
  int in_EAX;
  int in_ECX;
  undefined4 in_EDX;
  
  *(undefined4 *)(in_ECX + 0x1b4 + in_EAX * 8) = in_EDX;
  *(undefined4 *)(in_ECX + 0x1b8 + in_EAX * 8) = param_1;
  return 0;
}


/* FUN_006c0c00 @ 006c0c00  kind=gamemisc  attributed-by=none  size=19 */

undefined4 FUN_006c0c00(void)

{
  int in_EAX;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x1b4 + in_EAX * 8) = 0;
  *(undefined4 *)(in_ECX + 0x1b8 + in_EAX * 8) = 0;
  return 0;
}


/* FUN_006c0d40 @ 006c0d40  kind=gamemisc  attributed-by=none  size=483 */

void FUN_006c0d40(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int in_EAX;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  *param_1 = param_2;
  param_1[1] = in_EAX;
  if (in_EAX != 0) {
    param_1[99] = *(undefined4 *)(in_EAX + 0x74);
    param_1[100] = *(undefined4 *)(in_EAX + 0x78);
    param_1[0x66] = *(undefined4 *)(in_EAX + 0x80);
    param_1[0x67] = *(undefined4 *)(in_EAX + 0x84);
    param_1[0x65] = *(undefined4 *)(in_EAX + 0x7c);
    param_1[0x68] = *(undefined4 *)(in_EAX + 0x88);
    puVar4 = (undefined4 *)(in_EAX + 0x48);
    puVar5 = param_1 + 0x3d;
    for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar4 = (undefined4 *)(in_EAX + 0x2c);
    puVar5 = param_1 + 0x36;
    for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    param_1[0x69] = *(undefined4 *)(in_EAX + 0x8c);
    param_1[0x6a] = *(undefined4 *)(in_EAX + 0x90);
    param_1[0x6f] = *(undefined4 *)(in_EAX + 0x94);
    param_1[0x70] = *(undefined4 *)(in_EAX + 0x98);
    param_1[0x71] = *(undefined4 *)(in_EAX + 0x9c);
    param_1[0x72] = *(undefined4 *)(in_EAX + 0xa0);
    param_1[0x73] = *(undefined4 *)(in_EAX + 0xa4);
    param_1[0x74] = *(undefined4 *)(in_EAX + 0xa8);
    puVar4 = (undefined4 *)(in_EAX + 0xac);
    puVar5 = param_1 + 0x47;
    for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    param_1[0x5f] = *(undefined4 *)(in_EAX + 0xf0);
    param_1[0x60] = *(undefined4 *)(in_EAX + 0xf4);
    *(undefined2 *)(param_1 + 0x75) = *(undefined2 *)(in_EAX + 0xf8);
    param_1[0x76] = *(undefined4 *)(in_EAX + 0xfc);
    puVar4 = (undefined4 *)(in_EAX + 0x100);
    puVar5 = param_1 + 0x2d;
    for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  uVar1 = param_1[5];
  iVar3 = FUN_006c0d00(param_1[2]);
  param_1[5] = uVar1;
  if (iVar3 == 0) {
    uVar2 = param_1[0x61];
    iVar3 = FUN_006c0d00(param_1[2]);
    param_1[0x61] = uVar2 & 0xffff;
    if (iVar3 == 0) {
      param_1[0x26] = 0;
      puVar4 = param_1 + 0x24;
      puVar5 = param_1 + 0x12;
      for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar4 = param_1 + 0x24;
      puVar5 = param_1 + 0x1b;
      for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar4 = param_1 + 0x24;
      puVar5 = param_1 + 9;
      for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      *(undefined1 *)(param_1 + 0x7a) = 0;
    }
  }
  return;
}


/* FUN_006c0f30 @ 006c0f30  kind=gamemisc  attributed-by=none  size=120 */

undefined4 FUN_006c0f30(void)

{
  int in_EAX;
  int in_ECX;
  
  *(undefined4 *)(in_EAX + 0x74) = *(undefined4 *)(in_ECX + 0x18c);
  *(undefined4 *)(in_EAX + 0x80) = *(undefined4 *)(in_ECX + 0x198);
  *(undefined4 *)(in_EAX + 0x8c) = *(undefined4 *)(in_ECX + 0x1a4);
  *(undefined4 *)(in_EAX + 0x90) = *(undefined4 *)(in_ECX + 0x1a8);
  *(undefined4 *)(in_EAX + 0x94) = *(undefined4 *)(in_ECX + 0x1bc);
  *(undefined4 *)(in_EAX + 0x98) = *(undefined4 *)(in_ECX + 0x1c0);
  *(undefined4 *)(in_EAX + 0x9c) = *(undefined4 *)(in_ECX + 0x1c4);
  *(undefined4 *)(in_EAX + 0xa0) = *(undefined4 *)(in_ECX + 0x1c8);
  *(undefined4 *)(in_EAX + 0xa4) = *(undefined4 *)(in_ECX + 0x1cc);
  *(undefined4 *)(in_EAX + 0xa8) = *(undefined4 *)(in_ECX + 0x1d0);
  return 0;
}


/* FUN_006c0fb0 @ 006c0fb0  kind=gamemisc  attributed-by=none  size=179 */

void FUN_006c0fb0(void)

{
  int iVar1;
  int *unaff_EBX;
  int *piVar2;
  int *piVar3;
  
  iVar1 = FUN_006c0bb0(0);
  if (iVar1 == 0) {
    piVar2 = unaff_EBX + 0x24;
    piVar3 = unaff_EBX + 9;
    for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar3 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar3 = piVar3 + 1;
    }
    piVar2 = unaff_EBX + 0x24;
    piVar3 = unaff_EBX + 0x12;
    for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar3 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar3 = piVar3 + 1;
    }
    piVar2 = unaff_EBX + 0x24;
    piVar3 = unaff_EBX + 0x1b;
    for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar3 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar3 = piVar3 + 1;
    }
    *(undefined2 *)(unaff_EBX + 0x56) = 1;
    *(undefined2 *)(unaff_EBX + 0x57) = 1;
    *(undefined4 *)((int)unaff_EBX + 0x126) = 0x4000;
    unaff_EBX[0x4e] = 1;
    unaff_EBX[0x4c] = 1;
    *(undefined2 *)((int)unaff_EBX + 0x15a) = 1;
    *(undefined4 *)((int)unaff_EBX + 0x12a) = *(undefined4 *)((int)unaff_EBX + 0x126);
    *(undefined4 *)((int)unaff_EBX + 0x122) = *(undefined4 *)((int)unaff_EBX + 0x126);
    unaff_EBX[4] = 0;
    unaff_EBX[0x6b] = 0;
    (**(code **)(*unaff_EBX + 0x2b0))();
  }
  return;
}


/* FUN_006c10c0 @ 006c10c0  kind=gamemisc  attributed-by=none  size=78 */

uint FUN_006c10c0(void)

{
  uint in_EAX;
  uint uVar1;
  uint uVar2;
  uint in_ECX;
  uint uVar3;
  uint uVar4;
  
  uVar4 = in_ECX ^ in_EAX;
  if ((int)in_ECX < 0) {
    in_ECX = -in_ECX;
  }
  if ((int)in_EAX < 0) {
    in_EAX = -in_EAX;
  }
  uVar1 = ((int)in_ECX >> 0x10 & 0xffffU) * in_EAX;
  uVar2 = uVar1 * 0x10000 + 0x2000;
  uVar3 = (in_ECX & 0xffff) * in_EAX + uVar2;
  uVar1 = uVar1 >> 0x10;
  if (uVar3 < uVar2) {
    uVar1 = uVar1 + 1;
  }
  uVar1 = uVar1 << 0x12 | uVar3 >> 0xe;
  if ((int)uVar4 < 0) {
    uVar1 = -uVar1;
  }
  return uVar1;
}


/* FUN_006c11c0 @ 006c11c0  kind=gamemisc  attributed-by=none  size=132 */

undefined4 FUN_006c11c0(void)

{
  undefined4 uVar1;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x100) == 0) {
    if (*(short *)(unaff_ESI + 0x128) == 0) {
      *(undefined4 *)(unaff_ESI + 0x100) = *(undefined4 *)(unaff_ESI + 0xf4);
      return *(undefined4 *)(unaff_ESI + 0xf4);
    }
    if (*(short *)(unaff_ESI + 0x126) == 0) {
      *(undefined4 *)(unaff_ESI + 0x100) = *(undefined4 *)(unaff_ESI + 0xf8);
      return *(undefined4 *)(unaff_ESI + 0xf8);
    }
    FUN_0068ea60((int)*(short *)(unaff_ESI + 0x126),*(undefined4 *)(unaff_ESI + 0xf4),0x4000);
    FUN_0068ea60((int)*(short *)(unaff_ESI + 0x128),*(undefined4 *)(unaff_ESI + 0xf8),0x4000);
    uVar1 = FUN_006c11a0();
    *(undefined4 *)(unaff_ESI + 0x100) = uVar1;
  }
  return *(undefined4 *)(unaff_ESI + 0x100);
}


/* FUN_006c1360 @ 006c1360  kind=gamemisc  attributed-by=none  size=35 */

undefined2 FUN_006c1360(void)

{
  int in_EAX;
  int iVar1;
  
  *(int *)(in_EAX + 0x168) = *(int *)(in_EAX + 0x168) + 2;
  iVar1 = *(int *)(in_EAX + 0x168) + *(int *)(in_EAX + 0x164);
  return CONCAT11(*(undefined1 *)(iVar1 + -2),*(undefined1 *)(iVar1 + -1));
}


/* FUN_006c1390 @ 006c1390  kind=gamemisc  attributed-by=none  size=92 */

undefined4 FUN_006c1390(void)

{
  int iVar1;
  int in_EAX;
  int in_ECX;
  uint unaff_ESI;
  
  if (2 < in_ECX - 1U) {
    *(undefined4 *)(in_EAX + 0xc) = 0x84;
    return 1;
  }
  iVar1 = *(int *)(in_EAX + 0x1b4 + in_ECX * 8);
  if (iVar1 == 0) {
    *(undefined4 *)(in_EAX + 0xc) = 0x8a;
    return 1;
  }
  if (*(uint *)(in_EAX + 0x1b8 + in_ECX * 8) < unaff_ESI) {
    *(undefined4 *)(in_EAX + 0xc) = 0x83;
    return 1;
  }
  *(int *)(in_EAX + 0x164) = iVar1;
  *(undefined4 *)(in_EAX + 0x16c) = *(undefined4 *)(in_EAX + 0x1b8 + in_ECX * 8);
  *(uint *)(in_EAX + 0x168) = unaff_ESI;
  *(int *)(in_EAX + 0x160) = in_ECX;
  return 0;
}


/* FUN_006c1590 @ 006c1590  kind=gamemisc  attributed-by=none  size=38 */

int FUN_006c1590(undefined4 param_1,int param_2,int param_3)

{
  if (param_2 < 0) {
    param_3 = param_2 - param_3;
    if (0 < param_3) {
      param_3 = 0;
    }
  }
  else {
    param_3 = param_3 + param_2;
    if ((param_2 != 0) && (param_3 < 0)) {
      return 0;
    }
  }
  return param_3;
}


/* FUN_006c1aa0 @ 006c1aa0  kind=gamemisc  attributed-by=none  size=341 */

void FUN_006c1aa0(void)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  
  sVar1 = *(short *)(in_EAX + 0x12a);
  if (sVar1 == 0x4000) {
    iVar2 = (int)*(short *)(in_EAX + 0x126) << 0x10;
  }
  else {
    if (*(short *)(in_EAX + 300) == 0x4000) {
      *(int *)(in_EAX + 0x234) = (int)*(short *)(in_EAX + 0x128) << 0x10;
      goto LAB_006c1b08;
    }
    iVar2 = ((int)*(short *)(in_EAX + 0x128) * (int)*(short *)(in_EAX + 300) +
            (int)*(short *)(in_EAX + 0x126) * (int)sVar1) * 4;
  }
  *(int *)(in_EAX + 0x234) = iVar2;
LAB_006c1b08:
  if (*(short *)(in_EAX + 0x126) == 0x4000) {
    *(undefined1 **)(in_EAX + 0x23c) = &LAB_006c1a80;
  }
  else if (*(short *)(in_EAX + 0x128) == 0x4000) {
    *(undefined1 **)(in_EAX + 0x23c) = &LAB_006c1a90;
  }
  else {
    *(undefined1 **)(in_EAX + 0x23c) = &LAB_006c1a20;
  }
  if (*(short *)(in_EAX + 0x122) == 0x4000) {
    *(undefined1 **)(in_EAX + 0x240) = &LAB_006c1a80;
  }
  else if (*(short *)(in_EAX + 0x124) == 0x4000) {
    *(undefined1 **)(in_EAX + 0x240) = &LAB_006c1a90;
  }
  else {
    *(undefined1 **)(in_EAX + 0x240) = &LAB_006c1a50;
  }
  iVar2 = *(int *)(in_EAX + 0x234);
  *(code **)(in_EAX + 0x248) = FUN_006c13f0;
  *(code **)(in_EAX + 0x24c) = FUN_006c1480;
  if (iVar2 == 0x40000000) {
    if (sVar1 == 0x4000) {
      *(undefined1 **)(in_EAX + 0x248) = &LAB_006c1500;
      *(undefined1 **)(in_EAX + 0x24c) = &LAB_006c1550;
    }
    else if (*(short *)(in_EAX + 300) == 0x4000) {
      *(undefined1 **)(in_EAX + 0x248) = &LAB_006c1520;
      *(undefined1 **)(in_EAX + 0x24c) = &LAB_006c1570;
    }
  }
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  *(undefined4 *)(in_EAX + 0x100) = 0;
  if (iVar2 < 0x4000000) {
    *(undefined4 *)(in_EAX + 0x234) = 0x40000000;
  }
  return;
}


/* FUN_006c1c00 @ 006c1c00  kind=gamemisc  attributed-by=none  size=283 */

uint FUN_006c1c00(short *param_1)

{
  short sVar1;
  uint in_EAX;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint in_ECX;
  bool bVar5;
  bool bVar6;
  
  if (((int)((in_ECX ^ (int)in_ECX >> 0x1f) - ((int)in_ECX >> 0x1f)) < 0x10000) &&
     ((int)((in_EAX ^ (int)in_EAX >> 0x1f) - ((int)in_EAX >> 0x1f)) < 0x10000)) {
    iVar2 = FUN_006c11a0();
    uVar3 = 0;
    if (iVar2 != 0) {
      sVar1 = FUN_0068ea60(in_ECX << 8,0x4000,iVar2);
      *param_1 = sVar1;
      uVar3 = FUN_0068ea60(in_EAX << 8,0x4000,iVar2);
      param_1[1] = (short)uVar3;
      return uVar3 & 0xffffff00;
    }
  }
  else {
    FUN_006c11a0();
    iVar4 = FUN_0068ea60();
    uVar3 = FUN_0068ea60();
    iVar2 = iVar4 * iVar4 + uVar3 * uVar3;
    bVar5 = iVar4 < 0;
    if (bVar5) {
      iVar4 = -iVar4;
    }
    bVar6 = (int)uVar3 < 0;
    if (bVar6) {
      uVar3 = -uVar3;
    }
    while (iVar2 < 0x10000000) {
      if (iVar4 < (int)uVar3) {
        iVar4 = iVar4 + 1;
      }
      else {
        uVar3 = uVar3 + 1;
      }
      iVar2 = iVar4 * iVar4 + uVar3 * uVar3;
    }
    while (0x10003fff < iVar2) {
      if (iVar4 < (int)uVar3) {
        iVar4 = iVar4 + -1;
      }
      else {
        uVar3 = uVar3 - 1;
      }
      iVar2 = iVar4 * iVar4 + uVar3 * uVar3;
    }
    sVar1 = (short)iVar4;
    if (bVar5) {
      sVar1 = -sVar1;
    }
    if (bVar6) {
      uVar3 = -uVar3;
    }
    *param_1 = sVar1;
    param_1[1] = (short)uVar3;
  }
  return uVar3 & 0xffffff00;
}


/* FUN_006c1df0 @ 006c1df0  kind=gamemisc  attributed-by=none  size=134 */

undefined4 FUN_006c1df0(void)

{
  byte bVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  
  *(int *)(in_EAX + 0x168) = *(int *)(in_EAX + 0x168) + *(int *)(in_EAX + 0x174);
  iVar2 = *(int *)(in_EAX + 0x16c);
  if (*(int *)(in_EAX + 0x168) < iVar2) {
    bVar1 = *(byte *)(*(int *)(in_EAX + 0x164) + *(int *)(in_EAX + 0x168));
    *(byte *)(in_EAX + 0x170) = bVar1;
    iVar3 = (int)(char)(&DAT_00735f50)[bVar1];
    *(int *)(in_EAX + 0x174) = iVar3;
    if (iVar3 < 0) {
      if (iVar2 < *(int *)(in_EAX + 0x168) + 1) goto LAB_006c1e6a;
      *(uint *)(in_EAX + 0x174) =
           2 - (uint)*(byte *)(*(int *)(in_EAX + 0x164) + 1 + *(int *)(in_EAX + 0x168)) * iVar3;
    }
    if (*(int *)(in_EAX + 0x168) + *(int *)(in_EAX + 0x174) <= iVar2) {
      return 0;
    }
  }
LAB_006c1e6a:
  *(undefined4 *)(in_EAX + 0xc) = 0x83;
  return 1;
}


/* FUN_006c2a40 @ 006c2a40  kind=gamemisc  attributed-by=none  size=216 */

uint FUN_006c2a40(undefined4 *param_1,uint *param_2,undefined4 *param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  ushort *in_EDX;
  int unaff_EBX;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_24 [2];
  ushort local_1c;
  
  iVar5 = 9;
  puVar7 = local_24;
  if ((*(byte *)(unaff_EBX + 0x170) & 1) == 0) {
    uVar1 = *(ushort *)(unaff_EBX + 0x120);
    puVar6 = (undefined4 *)(unaff_EBX + 0x48);
  }
  else {
    uVar1 = *(ushort *)(unaff_EBX + 0x11e);
    puVar6 = (undefined4 *)(unaff_EBX + 0x24);
  }
  for (; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  if (local_1c <= uVar1) {
    if (*(char *)(unaff_EBX + 0x231) != '\0') {
      *(undefined4 *)(unaff_EBX + 0xc) = 0x86;
    }
    *in_EDX = 0;
    return 1;
  }
  puVar7 = local_24;
  for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
    *param_3 = *puVar7;
    puVar7 = puVar7 + 1;
    param_3 = param_3 + 1;
  }
  *in_EDX = uVar1;
  uVar2 = (**(code **)(unaff_EBX + 0x23c))();
  uVar3 = FUN_0068ea60(uVar2,(int)*(short *)(unaff_EBX + 0x12a) << 0x10,
                       *(undefined4 *)(unaff_EBX + 0x234));
  *param_1 = uVar3;
  uVar4 = FUN_0068ea60(uVar2,(int)*(short *)(unaff_EBX + 300) << 0x10,
                       *(undefined4 *)(unaff_EBX + 0x234));
  *param_2 = uVar4;
  return uVar4 & 0xffffff00;
}


/* FUN_006c2b20 @ 006c2b20  kind=gamemisc  attributed-by=none  size=84 */

void FUN_006c2b20(int param_1)

{
  int *piVar1;
  byte *pbVar2;
  int in_EAX;
  ushort in_CX;
  char unaff_BL;
  uint uVar3;
  int unaff_EDI;
  
  uVar3 = (uint)in_CX;
  if ((*(short *)(in_EAX + 0x12a) != 0) &&
     (piVar1 = (int *)(*(int *)(in_EAX + 0x7c) + uVar3 * 8), *piVar1 = *piVar1 + unaff_EDI,
     unaff_BL != '\0')) {
    pbVar2 = (byte *)(uVar3 + *(int *)(in_EAX + 0x84));
    *pbVar2 = *pbVar2 | 8;
  }
  if ((*(short *)(in_EAX + 300) != 0) &&
     (piVar1 = (int *)(*(int *)(in_EAX + 0x7c) + 4 + uVar3 * 8), *piVar1 = *piVar1 + param_1,
     unaff_BL != '\0')) {
    pbVar2 = (byte *)(*(int *)(in_EAX + 0x84) + uVar3);
    *pbVar2 = *pbVar2 | 0x10;
  }
  return;
}


/* FUN_006c3b40 @ 006c3b40  kind=gamemisc  attributed-by=none  size=53 */

void FUN_006c3b40(void)

{
  int *piVar1;
  uint in_EAX;
  int iVar2;
  uint unaff_EBX;
  int *unaff_ESI;
  uint unaff_EDI;
  
  iVar2 = *(int *)(unaff_ESI[1] + unaff_EDI * 8) - *(int *)(*unaff_ESI + unaff_EDI * 8);
  if (iVar2 != 0) {
    for (; in_EAX < unaff_EDI; in_EAX = in_EAX + 1) {
      piVar1 = (int *)(unaff_ESI[1] + in_EAX * 8);
      *piVar1 = *piVar1 + iVar2;
    }
    while (unaff_EDI = unaff_EDI + 1, unaff_EDI <= unaff_EBX) {
      piVar1 = (int *)(unaff_ESI[1] + unaff_EDI * 8);
      *piVar1 = *piVar1 + iVar2;
    }
  }
  return;
}


/* FUN_006c3b80 @ 006c3b80  kind=gamemisc  attributed-by=none  size=300 */

void FUN_006c3b80(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint in_EAX;
  uint uVar4;
  int iVar5;
  uint in_ECX;
  int iVar6;
  int iVar7;
  int *unaff_ESI;
  int iVar8;
  int local_10;
  undefined4 local_8;
  
  if (((param_1 <= param_2) && (in_EAX < (uint)unaff_ESI[3])) && (in_ECX < (uint)unaff_ESI[3])) {
    iVar1 = *(int *)(unaff_ESI[2] + in_EAX * 8);
    local_10 = *(int *)(unaff_ESI[2] + in_ECX * 8);
    uVar4 = in_EAX;
    iVar8 = iVar1;
    if (local_10 < iVar1) {
      uVar4 = in_ECX;
      in_ECX = in_EAX;
      iVar8 = local_10;
      local_10 = iVar1;
    }
    iVar1 = *(int *)(*unaff_ESI + in_ECX * 8);
    iVar6 = *(int *)(unaff_ESI[1] + in_ECX * 8) - iVar1;
    iVar2 = *(int *)(*unaff_ESI + uVar4 * 8);
    iVar7 = *(int *)(unaff_ESI[1] + uVar4 * 8) - iVar2;
    if (iVar8 == local_10) {
      do {
        iVar1 = *(int *)(*unaff_ESI + param_1 * 8);
        iVar8 = iVar6;
        if (iVar1 <= iVar2) {
          iVar8 = iVar7;
        }
        *(int *)(unaff_ESI[1] + param_1 * 8) = iVar1 + iVar8;
        param_1 = param_1 + 1;
      } while (param_1 <= param_2);
      return;
    }
    local_8 = 0;
    bVar3 = false;
    do {
      iVar5 = *(int *)(*unaff_ESI + param_1 * 8);
      if (iVar2 < iVar5) {
        if (iVar5 < iVar1) {
          if (!bVar3) {
            bVar3 = true;
            local_8 = FUN_0068ea60(((iVar6 - iVar7) - iVar2) + iVar1,0x10000,local_10 - iVar8);
          }
          iVar5 = FUN_0068ebc0(*(int *)(unaff_ESI[2] + param_1 * 8) - iVar8,local_8);
          iVar5 = iVar5 + iVar7 + iVar2;
        }
        else {
          iVar5 = iVar5 + iVar6;
        }
      }
      else {
        iVar5 = iVar5 + iVar7;
      }
      *(int *)(unaff_ESI[1] + param_1 * 8) = iVar5;
      param_1 = param_1 + 1;
    } while (param_1 <= param_2);
  }
  return;
}


/* FUN_006c4ee0 @ 006c4ee0  kind=gamemisc  attributed-by=none  size=296 */

int FUN_006c4ee0(uint *param_1)

{
  undefined4 uVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int unaff_EDI;
  int local_4;
  
  uVar1 = *(undefined4 *)(unaff_EDI + 0x1c);
  local_4 = 0;
  uVar6 = FUN_00690a20();
  uVar9 = uVar6 & 0xff;
  *param_1 = uVar9;
  if (uVar9 == 0) {
    return -1;
  }
  if ((char)uVar6 < '\0') {
    uVar9 = FUN_00690a20();
    uVar9 = uVar9 & 0xff | (uVar6 & 0x7f) << 8;
  }
  iVar7 = FUN_00693a60(uVar1,2,0,uVar9,0,&local_4);
  if (local_4 == 0) {
    iVar10 = 0;
    if (uVar9 != 0) {
      do {
        uVar8 = FUN_00690a20();
        uVar6 = uVar8 & 0xff;
        if ((char)uVar8 < '\0') {
          uVar8 = uVar8 & 0x7f;
          sVar2 = FUN_00690a40();
          *(short *)(iVar7 + iVar10 * 2) = sVar2;
          if (uVar8 == 0) {
            return iVar7;
          }
          for (; iVar10 = iVar10 + 1, uVar8 != 0; uVar8 = uVar8 - 1) {
            sVar3 = FUN_00690a40();
            sVar2 = sVar2 + sVar3;
            *(short *)(iVar7 + iVar10 * 2) = sVar2;
          }
        }
        else {
          uVar4 = FUN_00690a20();
          uVar4 = uVar4 & 0xff;
          *(ushort *)(iVar7 + iVar10 * 2) = uVar4;
          if (uVar6 == 0) {
            return iVar7;
          }
          for (; iVar10 = iVar10 + 1, uVar6 != 0; uVar6 = uVar6 - 1) {
            uVar5 = FUN_00690a20();
            uVar4 = uVar4 + (uVar5 & 0xff);
            *(ushort *)(iVar7 + iVar10 * 2) = uVar4;
          }
        }
      } while (iVar10 < (int)uVar9);
    }
    return iVar7;
  }
  return 0;
}


/* FUN_006c5010 @ 006c5010  kind=gamemisc  attributed-by=none  size=253 */

int FUN_006c5010(int param_1,uint param_2)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int local_8;
  undefined4 local_4;
  
  local_4 = *(undefined4 *)(param_1 + 0x1c);
  uVar6 = 0;
  local_8 = 0;
  iVar3 = FUN_00693a60(local_4,2,0,param_2,0,&local_8);
  if (local_8 != 0) {
    return 0;
  }
  if (param_2 != 0) {
    do {
      uVar4 = FUN_00690a20(param_1);
      uVar5 = 0;
      if ((char)uVar4 < '\0') {
        do {
          if (param_2 <= uVar6) break;
          *(undefined2 *)(iVar3 + uVar6 * 2) = 0;
          uVar5 = uVar5 + 1;
          uVar6 = uVar6 + 1;
        } while (uVar5 <= (uVar4 & 0x3f));
      }
      else if ((uVar4 & 0x40) == 0) {
        do {
          if (param_2 <= uVar6) break;
          cVar1 = FUN_00690a20(param_1);
          *(short *)(iVar3 + uVar6 * 2) = (short)cVar1;
          uVar5 = uVar5 + 1;
          uVar6 = uVar6 + 1;
        } while (uVar5 <= (uVar4 & 0x3f));
      }
      else {
        do {
          if (param_2 <= uVar6) break;
          uVar2 = FUN_00690a40(param_1);
          *(undefined2 *)(iVar3 + uVar6 * 2) = uVar2;
          uVar5 = uVar5 + 1;
          uVar6 = uVar6 + 1;
        } while (uVar5 <= (uVar4 & 0x3f));
      }
      if (uVar5 <= (uVar4 & 0x3f)) {
        FUN_00691290(local_4,iVar3);
        return 0;
      }
    } while (uVar6 < param_2);
  }
  return iVar3;
}


/* FUN_006c5120 @ 006c5120  kind=gamemisc  attributed-by=none  size=420 */

void FUN_006c5120(void)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  short sVar4;
  int in_EAX;
  int iVar5;
  ushort *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int local_14;
  int iStack_10;
  int iStack_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = *(int *)(in_EAX + 0x68);
  iVar2 = *(int *)(in_EAX + 0x2c8);
  uVar8 = *(undefined4 *)(iVar1 + 0x1c);
  local_14 = 0;
  *(undefined1 *)(iVar2 + 0x10) = 1;
  local_4 = uVar8;
  local_14 = (**(code **)(in_EAX + 0x1fc))();
  if ((local_14 == 0) && (local_14 = FUN_00691f30(iVar1,local_8), local_14 == 0)) {
    iVar5 = FUN_00690aa0(iVar1);
    iStack_c = FUN_00690aa0(iVar1);
    if ((iVar5 == 0x10000) && (iStack_c == **(int **)(iVar2 + 8))) {
      puVar6 = (ushort *)FUN_00693a60(uVar8,8,0,iStack_c,0,&local_14);
      *(ushort **)(iVar2 + 0x14) = puVar6;
      if ((local_14 == 0) && (iStack_10 = 0, 0 < iStack_c)) {
        while( true ) {
          uVar3 = FUN_00690a40(iVar1);
          *puVar6 = uVar3;
          uVar7 = FUN_00693a60(uVar8,8,0,uVar3,0,&local_14);
          *(undefined4 *)(puVar6 + 2) = uVar7;
          if (local_14 != 0) break;
          if (*puVar6 != 0) {
            iVar5 = 0;
            do {
              sVar4 = FUN_00690a40(iVar1);
              *(int *)(*(int *)(puVar6 + 2) + iVar5 * 8) = sVar4 * 4;
              sVar4 = FUN_00690a40(iVar1);
              *(int *)(*(int *)(puVar6 + 2) + 4 + iVar5 * 8) = sVar4 * 4;
              iVar5 = iVar5 + 1;
            } while (iVar5 < (int)(uint)*puVar6);
          }
          iStack_10 = iStack_10 + 1;
          puVar6 = puVar6 + 4;
          uVar8 = local_4;
          if (iStack_c <= iStack_10) {
            FUN_00691fe0(iVar1);
            return;
          }
        }
        iVar5 = iStack_10 + -1;
        while (-1 < iVar5) {
          FUN_00691290(uVar8,*(undefined4 *)(*(int *)(iVar2 + 0x14) + 4 + iVar5 * 8));
          iVar5 = iVar5 + -1;
          *(undefined4 *)(*(int *)(iVar2 + 0x14) + 0xc + iVar5 * 8) = 0;
        }
        FUN_00691290(uVar8,*(undefined4 *)(iVar2 + 0x14));
        *(undefined4 *)(iVar2 + 0x14) = 0;
      }
    }
    FUN_00691fe0(iVar1);
  }
  return;
}


/* FUN_006c52d0 @ 006c52d0  kind=gamemisc  attributed-by=none  size=584 */

void FUN_006c52d0(int param_1)

{
  int iVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iStack_28;
  int iStack_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int iStack_18;
  ushort uStack_14;
  ushort uStack_12;
  int iStack_10;
  ushort uStack_c;
  byte bStack_a;
  int iStack_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&iStack_28;
  iVar1 = *(int *)(param_1 + 0x68);
  iVar2 = *(int *)(param_1 + 0x2c8);
  uVar5 = *(undefined4 *)(iVar1 + 0x1c);
  local_20 = uVar5;
  iStack_28 = (**(code **)(param_1 + 0x1fc))(param_1,0x67766172,iVar1,local_1c);
  if (iStack_28 == 0) {
    iVar4 = FUN_00690930(iVar1);
    iStack_24 = iVar4;
    iStack_28 = FUN_00692010(iVar1,&DAT_00735d04,&iStack_18);
    if (iStack_28 == 0) {
      *(uint *)(iVar2 + 0x18) = (uint)uStack_12;
      *(uint *)(iVar2 + 0x20) = (uint)uStack_c;
      if ((iStack_18 != 0x10000) || (uStack_14 != **(ushort **)(iVar2 + 8))) {
        __security_check_cookie(local_4 ^ (uint)&iStack_28);
        return;
      }
      uVar5 = FUN_00693a60(uVar5,4,0,uStack_c + 1,0,&iStack_28);
      *(undefined4 *)(iVar2 + 0x24) = uVar5;
      if (iStack_28 == 0) {
        if ((bStack_a & 1) == 0) {
          iStack_28 = FUN_00691f30(iVar1,*(int *)(iVar2 + 0x20) * 2 + 2);
          if (iStack_28 != 0) goto LAB_006c54ee;
          uVar8 = 0;
          do {
            uVar7 = FUN_00690a40(iVar1);
            *(uint *)(*(int *)(iVar2 + 0x24) + uVar8 * 4) = iVar4 + iStack_8 + (uVar7 & 0xffff) * 2;
            uVar8 = uVar8 + 1;
          } while (uVar8 <= *(uint *)(iVar2 + 0x20));
        }
        else {
          iStack_28 = FUN_00691f30(iVar1,*(int *)(iVar2 + 0x20) * 4 + 4);
          if (iStack_28 != 0) goto LAB_006c54ee;
          uVar8 = 0;
          do {
            iVar6 = FUN_00690aa0(iVar1);
            *(int *)(*(int *)(iVar2 + 0x24) + uVar8 * 4) = iVar6 + iVar4 + iStack_8;
            uVar8 = uVar8 + 1;
          } while (uVar8 <= *(uint *)(iVar2 + 0x20));
        }
        FUN_00691fe0(iVar1);
        if (*(int *)(iVar2 + 0x18) != 0) {
          uVar5 = FUN_00693a60(local_20,4,0,(uint)uStack_14 * *(int *)(iVar2 + 0x18),0,&iStack_28);
          *(undefined4 *)(iVar2 + 0x1c) = uVar5;
          if (((iStack_28 == 0) &&
              (iStack_28 = FUN_006908c0(iVar1,iStack_10 + iStack_24), iStack_28 == 0)) &&
             (iStack_28 = FUN_00691f30(iVar1,(uint)uStack_14 * *(int *)(iVar2 + 0x18) * 2),
             iStack_28 == 0)) {
            uVar8 = 0;
            if (*(int *)(iVar2 + 0x18) != 0) {
              uVar7 = (uint)uStack_14;
              do {
                uVar9 = 0;
                if (uVar7 != 0) {
                  do {
                    sVar3 = FUN_00690a40(iVar1);
                    *(int *)(*(int *)(iVar2 + 0x1c) + (uStack_14 * uVar8 + uVar9) * 4) = sVar3 * 4;
                    uVar7 = (uint)uStack_14;
                    uVar9 = uVar9 + 1;
                  } while (uVar9 < uVar7);
                }
                uVar8 = uVar8 + 1;
              } while (uVar8 < *(uint *)(iVar2 + 0x18));
            }
            FUN_00691fe0(iVar1);
          }
        }
      }
    }
  }
LAB_006c54ee:
  __security_check_cookie(local_4 ^ (uint)&iStack_28);
  return;
}


/* FUN_006c5520 @ 006c5520  kind=gamemisc  attributed-by=none  size=268 */

undefined4 FUN_006c5520(uint *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  int iVar3;
  undefined4 uVar4;
  int in_EDX;
  int iVar5;
  undefined4 uVar6;
  uint local_8;
  
  uVar6 = 0x10000;
  local_8 = 0;
  if (*param_1 == 0) {
    return 0x10000;
  }
  iVar5 = in_EDX - (int)in_EAX;
  param_3 = param_3 - (int)in_EAX;
  do {
    iVar1 = *in_EAX;
    if (iVar1 != 0) {
      iVar3 = *(int *)(param_1[1] + local_8 * 4);
      if (((iVar3 == 0) || ((iVar3 < 0 && (0 < iVar1)))) || ((0 < iVar3 && (iVar1 < 0)))) {
        return 0;
      }
      if ((param_2 & 0x4000) == 0) {
        if (iVar3 < 1) {
          iVar3 = -iVar3;
        }
        uVar6 = FUN_0068ea60(uVar6,iVar3,0x10000);
      }
      else {
        if (iVar3 <= *(int *)(iVar5 + (int)in_EAX)) {
          return 0;
        }
        if (*(int *)((int)in_EAX + param_3) <= iVar3) {
          return 0;
        }
        if (iVar3 < iVar1) {
          iVar2 = *(int *)(iVar5 + (int)in_EAX);
          uVar4 = FUN_0068ea60(iVar3 - iVar2,0x10000,iVar1 - iVar2);
          uVar6 = FUN_0068ea60(uVar6,uVar4,0x10000);
        }
        else {
          iVar2 = *(int *)((int)in_EAX + param_3);
          uVar4 = FUN_0068ea60(iVar2 - iVar3,0x10000,iVar2 - iVar1);
          uVar6 = FUN_0068ea60(uVar6,uVar4,0x10000);
        }
      }
    }
    local_8 = local_8 + 1;
    in_EAX = in_EAX + 1;
    if (*param_1 <= local_8) {
      return uVar6;
    }
  } while( true );
}


/* FUN_006c5630 @ 006c5630  kind=gamemisc  attributed-by=none  size=1096 */

void FUN_006c5630(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  int local_40;
  undefined4 local_3c;
  undefined4 *local_38;
  uint local_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  ushort uStack_24;
  short sStack_22;
  ushort uStack_20;
  short sStack_1e;
  ushort uStack_1c;
  ushort uStack_1a;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  ushort uStack_6;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_40;
  uVar1 = *(undefined4 *)(param_1 + 0x68);
  local_38 = param_2;
  uVar6 = *(undefined4 *)(param_1 + 100);
  local_30 = param_1;
  local_40 = 0;
  local_3c = uVar6;
  if (*(int *)(param_1 + 0x2c8) == 0) {
    local_40 = (**(code **)(param_1 + 0x1fc))(param_1,0x67766172,uVar1,&local_34);
    if ((local_40 != 0) ||
       (local_40 = (**(code **)(param_1 + 0x1fc))(param_1,0x66766172,uVar1,&local_34), local_40 != 0
       )) goto LAB_006c5a70;
    iStack_2c = FUN_00690930(uVar1);
    local_40 = FUN_00692010(uVar1,&DAT_00736050,&iStack_28);
    if (local_40 != 0) goto LAB_006c5a70;
    if ((((iStack_28 != 0x10000) || (sStack_22 != 2)) || (sStack_1e != 0x14)) ||
       (0x3ffe < uStack_20)) {
LAB_006c5a15:
      __security_check_cookie(local_4 ^ (uint)&local_40);
      return;
    }
    if ((((uint)uStack_1a != (uint)uStack_20 * 4 + 4) || (0x7eff < uStack_1c)) ||
       (local_34 < (uint)uStack_1c * (uint)uStack_1a + (uint)uStack_20 * 0x14 + (uint)uStack_24))
    goto LAB_006c5a15;
    iVar2 = FUN_00692230(uVar6,0x28,&local_40);
    *(int *)(param_1 + 0x2c8) = iVar2;
    if (local_40 != 0) goto LAB_006c5a70;
    *(uint *)(iVar2 + 0xc) =
         ((uint)uStack_1c * 4 + 0x1d) * (uint)uStack_20 + 0x14 + (uint)uStack_1c * 8;
    puVar3 = (uint *)FUN_00692230(uVar6,*(undefined4 *)(*(int *)(param_1 + 0x2c8) + 0xc),&local_40);
    if (local_40 != 0) goto LAB_006c5a70;
    *(uint **)(*(int *)(param_1 + 0x2c8) + 8) = puVar3;
    *puVar3 = (uint)uStack_20;
    puVar3[1] = 0xffffffff;
    puVar3[2] = (uint)uStack_1c;
    puVar4 = puVar3 + 5;
    puVar3[3] = (uint)puVar4;
    puVar3[4] = (uint)(puVar4 + (uint)uStack_20 * 6);
    iVar2 = 0;
    puVar4 = puVar4 + (uint)uStack_20 * 6 + (uint)uStack_1c * 2;
    if (uStack_1c != 0) {
      do {
        *(uint **)(puVar3[4] + iVar2 * 8) = puVar4;
        puVar4 = puVar4 + uStack_20;
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)(uint)uStack_1c);
    }
    iVar8 = 0;
    iVar2 = 0;
    if (uStack_20 != 0) {
      do {
        *(uint **)(iVar8 + puVar3[3]) = puVar4;
        iVar2 = iVar2 + 1;
        puVar4 = (uint *)((int)puVar4 + 5);
        iVar8 = iVar8 + 0x18;
      } while (iVar2 < (int)(uint)uStack_20);
    }
    local_40 = FUN_006908c0(uVar1,(uint)uStack_24 + iStack_2c);
    if (local_40 != 0) goto LAB_006c5a70;
    piVar9 = (int *)puVar3[3];
    iVar2 = 0;
    if (uStack_20 != 0) {
      do {
        local_40 = 0;
        local_40 = FUN_00692010(uVar1,&DAT_00736074,&iStack_18);
        if (local_40 != 0) goto LAB_006c5a70;
        piVar9[1] = iStack_14;
        piVar9[2] = iStack_10;
        piVar9[4] = iStack_18;
        piVar9[3] = iStack_c;
        piVar9[5] = (uint)uStack_6;
        *(char *)*piVar9 = (char)((uint)iStack_18 >> 0x18);
        *(undefined1 *)(*piVar9 + 1) = *(undefined1 *)((int)piVar9 + 0x12);
        *(undefined1 *)(*piVar9 + 2) = *(undefined1 *)((int)piVar9 + 0x11);
        *(char *)(*piVar9 + 3) = (char)piVar9[4];
        *(undefined1 *)(*piVar9 + 4) = 0;
        iVar2 = iVar2 + 1;
        piVar9 = piVar9 + 6;
      } while (iVar2 < (int)(uint)uStack_20);
    }
    piVar9 = (int *)puVar3[4];
    if (uStack_1c != 0) {
      iVar2 = 0;
      do {
        local_40 = FUN_00691f30(uVar1,(uint)uStack_20 * 4 + 4);
        if (local_40 != 0) goto LAB_006c5a70;
        uVar5 = FUN_00690a40(uVar1);
        piVar9[1] = uVar5 & 0xffff;
        FUN_00690a40(uVar1);
        iVar8 = 0;
        if (uStack_20 != 0) {
          do {
            uVar6 = FUN_00690aa0(uVar1);
            *(undefined4 *)(*piVar9 + iVar8 * 4) = uVar6;
            iVar8 = iVar8 + 1;
          } while (iVar8 < (int)(uint)uStack_20);
        }
        FUN_00691fe0(uVar1);
        iVar2 = iVar2 + 1;
        piVar9 = piVar9 + 2;
      } while (iVar2 < (int)(uint)uStack_1c);
    }
  }
  iVar2 = local_30;
  if ((local_38 != (undefined4 *)0x0) &&
     (puVar3 = (uint *)FUN_00692230(local_3c,*(undefined4 *)(*(int *)(local_30 + 0x2c8) + 0xc),
                                    &local_40), local_40 == 0)) {
    memcpy(puVar3,*(void **)(*(int *)(iVar2 + 0x2c8) + 8),*(size_t *)(*(int *)(iVar2 + 0x2c8) + 0xc)
          );
    puVar4 = puVar3 + 5;
    puVar3[3] = (uint)puVar4;
    puVar3[4] = (uint)(puVar4 + *puVar3 * 6);
    puVar4 = puVar4 + *puVar3 * 6 + puVar3[2] * 2;
    uVar5 = 0;
    if (puVar3[2] != 0) {
      do {
        *(uint **)(puVar3[4] + uVar5 * 8) = puVar4;
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + *puVar3;
      } while (uVar5 < puVar3[2]);
    }
    puVar7 = (undefined4 *)puVar3[3];
    uVar5 = 0;
    if (*puVar3 != 0) {
      do {
        iVar2 = puVar7[4];
        *puVar7 = puVar4;
        if (iVar2 == 0x77676874) {
          *puVar7 = "Weight";
        }
        else if (iVar2 == 0x77647468) {
          *puVar7 = "Width";
        }
        else if (iVar2 == 0x6f70737a) {
          *puVar7 = "OpticalSize";
        }
        else if (iVar2 == 0x736c6e74) {
          *puVar7 = "Slant";
        }
        uVar5 = uVar5 + 1;
        puVar4 = (uint *)((int)puVar4 + 5);
        puVar7 = puVar7 + 6;
      } while (uVar5 < *puVar3);
    }
    *local_38 = puVar3;
  }
LAB_006c5a70:
  __security_check_cookie(local_4 ^ (uint)&local_40);
  return;
}


/* FUN_006c5a90 @ 006c5a90  kind=gamemisc  attributed-by=none  size=930 */

int FUN_006c5a90(int param_1)

{
  short *psVar1;
  int iVar2;
  ushort uVar3;
  short sVar4;
  int *in_EAX;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  short *psVar9;
  uint *puVar10;
  int iVar11;
  int local_40;
  int iStack_3c;
  short *psStack_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint uStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  uint *local_14;
  uint uStack_10;
  int iStack_8;
  int iStack_4;
  
  puVar10 = *(uint **)(param_1 + 0x2c8);
  iVar11 = in_EAX[7];
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_34 = iVar11;
  local_14 = puVar10;
  if ((((puVar10 == (uint *)0x0) || (*(int *)(param_1 + 0x2a0) == 0)) ||
      (local_40 = (**(code **)(param_1 + 0x1fc))(param_1,0x63766172), local_40 != 0)) ||
     (local_40 = FUN_00691f30(), local_40 != 0)) {
    local_40 = 0;
  }
  else {
    iVar8 = in_EAX[8];
    iVar2 = *in_EAX;
    iVar5 = FUN_00690aa0();
    if (iVar5 == 0x10000) {
      local_30 = FUN_00693a60(iVar11,4,0,*puVar10,0,&local_40);
      uVar6 = uStack_10;
      if (((local_40 == 0) &&
          (local_2c = FUN_00693a60(iVar11,4,0,*puVar10,0,&local_40), uVar6 = uStack_10,
          local_40 == 0)) &&
         (local_28 = FUN_00693a60(iVar11,4,0,*puVar10,0,&local_40), uVar6 = uStack_10, local_40 == 0
         )) {
        uVar6 = FUN_00690a40();
        uVar7 = FUN_00690a40();
        iStack_3c = (uVar7 & 0xffff) + (iVar8 - iVar2);
        uVar7 = uVar6 & 0xfff;
        iVar11 = local_34;
        uVar6 = uStack_10;
        while (uStack_10 = uVar7, local_34 = iVar11, uStack_10 != 0) {
          uStack_24 = FUN_00690a40();
          uStack_24 = uStack_24 & 0xffff;
          uVar3 = FUN_00690a40();
          if ((uVar3 & 0x8000) == 0) {
            if (((uVar3 & 0x4000) != 0) && (uVar6 = 0, (*puVar10 & 0x7fffffff) != 0)) {
              do {
                FUN_00690a40();
                uVar6 = uVar6 + 1;
              } while (uVar6 < *puVar10 * 2);
            }
LAB_006c5de6:
            iStack_3c = iStack_3c + uStack_24;
          }
          else {
            uVar6 = 0;
            if (*puVar10 != 0) {
              do {
                sVar4 = FUN_00690a40();
                *(int *)(local_30 + uVar6 * 4) = sVar4 * 4;
                uVar6 = uVar6 + 1;
              } while (uVar6 < *puVar10);
            }
            if ((uVar3 & 0x4000) != 0) {
              uVar6 = 0;
              if (*puVar10 != 0) {
                do {
                  sVar4 = FUN_00690a40();
                  *(int *)(local_2c + uVar6 * 4) = sVar4 * 4;
                  uVar6 = uVar6 + 1;
                } while (uVar6 < *puVar10);
              }
              uVar6 = 0;
              if (*puVar10 != 0) {
                do {
                  sVar4 = FUN_00690a40();
                  *(int *)(local_28 + uVar6 * 4) = sVar4 * 4;
                  uVar6 = uVar6 + 1;
                } while (uVar6 < *puVar10);
              }
            }
            iStack_1c = FUN_006c5520(puVar10,uVar3,local_28);
            if ((iStack_1c == 0) || ((uVar3 & 0x2000) == 0)) goto LAB_006c5de6;
            iStack_4 = in_EAX[8] - *in_EAX;
            in_EAX[8] = *in_EAX + iStack_3c;
            iVar8 = FUN_006c4ee0(&iStack_20);
            iVar11 = iStack_20;
            iStack_8 = iVar8;
            psVar9 = (short *)FUN_006c5010();
            psStack_38 = psVar9;
            if ((iVar8 == 0) || (psVar9 == (short *)0x0)) {
LAB_006c5d8a:
              if (iVar8 != -1) {
                FUN_00691290(local_34,iVar8);
              }
            }
            else {
              if (iVar8 != -1) {
                if (iVar11 != 0) {
                  iVar8 = iVar8 - (int)psVar9;
                  iStack_18 = iStack_20;
                  do {
                    psVar1 = (short *)(*(int *)(param_1 + 0x2a0) +
                                      (uint)*(ushort *)((int)psVar9 + iVar8) * 2);
                    sVar4 = FUN_0068ebc0((int)*psVar9,iStack_1c);
                    *psVar1 = *psVar1 + sVar4;
                    psVar9 = psVar9 + 1;
                    iStack_18 = iStack_18 + -1;
                  } while (iStack_18 != 0);
                  iStack_18 = 0;
                  iVar8 = iStack_8;
                  puVar10 = local_14;
                }
                goto LAB_006c5d8a;
              }
              uVar6 = 0;
              if (*(int *)(param_1 + 0x29c) != 0) {
                do {
                  psVar9 = (short *)(*(int *)(param_1 + 0x2a0) + uVar6 * 2);
                  sVar4 = FUN_0068ebc0((int)psStack_38[uVar6],iStack_1c);
                  *psVar9 = *psVar9 + sVar4;
                  uVar6 = uVar6 + 1;
                  puVar10 = local_14;
                } while (uVar6 < *(uint *)(param_1 + 0x29c));
              }
            }
            FUN_00691290(local_34,psStack_38);
            iStack_3c = iStack_3c + uStack_24;
            in_EAX[8] = *in_EAX + iStack_4;
          }
          uVar6 = uStack_10 - 1;
          iVar11 = local_34;
          uVar7 = uVar6;
        }
      }
    }
    else {
      local_40 = 0;
      uVar6 = uStack_10;
    }
    uStack_10 = uVar6;
    FUN_00691fe0();
  }
  FUN_00691290(iVar11,local_30);
  FUN_00691290(iVar11,local_2c);
  FUN_00691290(iVar11,local_28);
  return local_40;
}


/* FUN_006c5e40 @ 006c5e40  kind=gamemisc  attributed-by=none  size=1269 */

int FUN_006c5e40(uint param_1,int *param_2,uint param_3)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  int *piVar4;
  int iVar5;
  short sVar6;
  int in_EAX;
  int iVar7;
  uint uVar8;
  uint uVar9;
  short *psVar10;
  int iVar11;
  uint *puVar12;
  ushort *puVar13;
  int local_54;
  int local_50;
  ushort *local_4c;
  int local_48;
  int local_44;
  short *local_40;
  void *local_3c;
  int local_38;
  uint local_34;
  ushort *local_30;
  int local_2c;
  int local_28;
  ushort *local_24;
  uint local_20;
  uint local_1c;
  uint *local_18;
  uint local_14;
  uint local_10;
  int local_c;
  int local_8;
  uint local_4;
  
  puVar12 = *(uint **)(in_EAX + 0x2c8);
  piVar4 = *(int **)(in_EAX + 0x68);
  iVar11 = piVar4[7];
  local_20 = 0;
  local_24 = (ushort *)0x0;
  local_4c = (ushort *)0x0;
  if ((*(char *)(in_EAX + 0x2c4) == '\0') || (puVar12 == (uint *)0x0)) {
    return 6;
  }
  local_38 = iVar11;
  local_18 = puVar12;
  iVar7 = FUN_00693a60(iVar11,8,0,param_3,0,&local_54);
  if (local_54 == 0) {
    *param_2 = iVar7;
    if ((puVar12[8] <= param_1) ||
       (*(int *)(puVar12[9] + param_1 * 4) == *(int *)(puVar12[9] + 4 + param_1 * 4))) {
      return 0;
    }
    local_54 = FUN_006908c0(piVar4,*(undefined4 *)(puVar12[9] + param_1 * 4));
    if ((local_54 == 0) &&
       (local_54 = FUN_00691f30(piVar4,*(int *)(puVar12[9] + 4 + param_1 * 4) -
                                       *(int *)(puVar12[9] + param_1 * 4)), local_54 == 0)) {
      local_10 = piVar4[8] - *piVar4;
      local_3c = (void *)FUN_00693a60(iVar11,4,0,*puVar12,0,&local_54);
      if ((local_54 == 0) &&
         ((local_2c = FUN_00693a60(iVar11,4,0,*puVar12,0,&local_54), local_54 == 0 &&
          (local_28 = FUN_00693a60(iVar11,4,0,*puVar12,0,&local_54), local_54 == 0)))) {
        uVar8 = FUN_00690a40(piVar4);
        local_14 = uVar8 & 0xffff;
        uVar9 = FUN_00690a40(piVar4);
        local_50 = (uVar9 & 0xffff) + local_10;
        local_4 = uVar8 & 0xffff;
        if ((uVar8 & 0x8000) != 0) {
          iVar11 = *piVar4;
          iVar5 = piVar4[8];
          piVar4[8] = iVar11 + local_50;
          local_24 = (ushort *)FUN_006c4ee0(&local_20);
          local_50 = piVar4[8] - *piVar4;
          piVar4[8] = *piVar4 + (iVar5 - iVar11);
          local_4 = local_14;
        }
        local_4 = local_4 & 0xfff;
        local_10 = 0;
        if (local_4 != 0) {
          do {
            local_14 = FUN_00690a40(piVar4);
            local_14 = local_14 & 0xffff;
            uVar8 = FUN_00690a40(piVar4);
            local_40 = (short *)(uVar8 & 0xffff);
            if ((uVar8 & 0x8000) == 0) {
              if (puVar12[6] <= (uVar8 & 0xfff)) {
                local_54 = 8;
                break;
              }
              memcpy(local_3c,(void *)(puVar12[7] + (uVar8 & 0xfff) * *puVar12 * 4),*puVar12 * 4);
            }
            else {
              uVar8 = 0;
              if (*puVar12 != 0) {
                do {
                  sVar6 = FUN_00690a40(piVar4);
                  *(int *)((int)local_3c + uVar8 * 4) = sVar6 * 4;
                  uVar8 = uVar8 + 1;
                } while (uVar8 < *puVar12);
              }
            }
            if (((uint)local_40 & 0x4000) != 0) {
              uVar8 = 0;
              if (*puVar12 != 0) {
                do {
                  sVar6 = FUN_00690a40(piVar4);
                  *(int *)(local_2c + uVar8 * 4) = sVar6 * 4;
                  uVar8 = uVar8 + 1;
                } while (uVar8 < *puVar12);
              }
              uVar8 = 0;
              if (*puVar12 != 0) {
                do {
                  sVar6 = FUN_00690a40(piVar4);
                  *(int *)(local_28 + uVar8 * 4) = sVar6 * 4;
                  uVar8 = uVar8 + 1;
                } while (uVar8 < *puVar12);
              }
            }
            local_48 = FUN_006c5520(puVar12,local_40,local_28);
            if (local_48 == 0) {
              local_50 = local_50 + local_14;
            }
            else {
              local_8 = piVar4[8] - *piVar4;
              if (((uint)local_40 & 0x2000) == 0) {
                local_30 = local_24;
                local_34 = local_20;
              }
              else {
                piVar4[8] = *piVar4 + local_50;
                local_4c = (ushort *)FUN_006c4ee0(&local_34);
                local_30 = local_4c;
              }
              uVar8 = local_34;
              uVar9 = param_3;
              if (local_34 != 0) {
                uVar9 = local_34;
              }
              local_44 = FUN_006c5010(piVar4,uVar9);
              uVar9 = param_3;
              if (uVar8 != 0) {
                uVar9 = uVar8;
              }
              psVar10 = (short *)FUN_006c5010(piVar4,uVar9);
              local_40 = psVar10;
              if (((local_30 != (ushort *)0x0) && (psVar10 != (short *)0x0)) && (local_44 != 0)) {
                if (local_30 == (ushort *)0xffffffff) {
                  uVar8 = 0;
                  if (param_3 != 0) {
                    local_30 = (ushort *)(local_44 - (int)psVar10);
                    do {
                      iVar11 = FUN_0068ebc0((int)*(short *)((int)local_30 + (int)psVar10),local_48);
                      piVar1 = (int *)(iVar7 + uVar8 * 8);
                      *piVar1 = *piVar1 + iVar11;
                      iVar11 = FUN_0068ebc0((int)*psVar10,local_48);
                      piVar1 = (int *)(iVar7 + 4 + uVar8 * 8);
                      *piVar1 = *piVar1 + iVar11;
                      uVar8 = uVar8 + 1;
                      psVar10 = psVar10 + 1;
                      puVar12 = local_18;
                    } while (uVar8 < param_3);
                  }
                }
                else if (uVar8 != 0) {
                  local_30 = (ushort *)(local_44 - (int)psVar10);
                  local_c = (int)psVar10 - (int)local_4c;
                  local_1c = local_34;
                  puVar13 = local_4c;
                  do {
                    psVar10 = (short *)(local_c + (int)puVar13);
                    iVar11 = FUN_0068ebc0((int)*(short *)((int)local_30 + (int)psVar10),local_48);
                    *(int *)(iVar7 + (uint)*puVar13 * 8) =
                         iVar11 + *(int *)(iVar7 + (uint)*puVar13 * 8);
                    iVar11 = FUN_0068ebc0((int)*psVar10,local_48);
                    uVar2 = *puVar13;
                    uVar3 = *puVar13;
                    puVar13 = puVar13 + 1;
                    local_1c = local_1c - 1;
                    *(int *)(iVar7 + 4 + (uint)uVar3 * 8) =
                         iVar11 + *(int *)(iVar7 + 4 + (uint)uVar2 * 8);
                    puVar12 = local_18;
                  } while (local_1c != 0);
                }
              }
              iVar11 = local_38;
              if (local_4c != (ushort *)0xffffffff) {
                FUN_00691290(local_38,local_4c);
                local_4c = (ushort *)0x0;
              }
              FUN_00691290(iVar11,local_44);
              FUN_00691290(iVar11,local_40);
              local_50 = local_50 + local_14;
              piVar4[8] = *piVar4 + local_8;
            }
            local_10 = local_10 + 1;
          } while (local_10 < local_4);
        }
        iVar11 = local_38;
        FUN_00691290(local_38,local_3c);
        FUN_00691290(iVar11,local_2c);
        FUN_00691290(iVar11,local_28);
      }
      FUN_00691fe0(piVar4);
      if (local_54 == 0) {
        return 0;
      }
    }
    FUN_00691290(iVar11,iVar7);
    *param_2 = 0;
  }
  return local_54;
}


/* FUN_006c6340 @ 006c6340  kind=gamemisc  attributed-by=none  size=132 */

void FUN_006c6340(void)

{
  uint *unaff_ESI;
  uint uVar1;
  
  if (unaff_ESI != (uint *)0x0) {
    FUN_00691290();
    unaff_ESI[1] = 0;
    FUN_00691290();
    unaff_ESI[2] = 0;
    if (unaff_ESI[5] != 0) {
      uVar1 = 0;
      if (*unaff_ESI != 0) {
        do {
          FUN_00691290();
          *(undefined4 *)(unaff_ESI[5] + 4 + uVar1 * 8) = 0;
          uVar1 = uVar1 + 1;
        } while (uVar1 < *unaff_ESI);
      }
      FUN_00691290();
      unaff_ESI[5] = 0;
    }
    FUN_00691290();
    unaff_ESI[7] = 0;
    FUN_00691290();
    unaff_ESI[9] = 0;
    FUN_00691290();
  }
  return;
}


/* FUN_006c6480 @ 006c6480  kind=gamemisc  attributed-by=none  size=80 */

int FUN_006c6480(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  param_1[0x1c] = param_2;
  if ((*(byte *)(iVar1 + 8) & 1) != 0) {
    FUN_0068f560(iVar1,param_2);
    FUN_006c0a40();
    return 0;
  }
  iVar1 = (**(code **)(*(int *)(iVar1 + 0x214) + 0x98))(iVar1,param_2,param_1 + 3);
  if (iVar1 != 0) {
    param_1[0x1c] = -1;
  }
  return iVar1;
}


/* FUN_006c6540 @ 006c6540  kind=gamemisc  attributed-by=none  size=222 */

int FUN_006c6540(int param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint in_ECX;
  int unaff_ESI;
  undefined2 *puVar5;
  
  iVar4 = param_1;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  param_1 = (**(code **)(unaff_ESI + 0x1fc))();
  if (param_1 != 0) {
    *(undefined4 *)(unaff_ESI + 0x29c) = 0;
    *(undefined4 *)(unaff_ESI + 0x2a0) = 0;
    return 0;
  }
  *(uint *)(unaff_ESI + 0x29c) = in_ECX >> 1;
  uVar3 = FUN_00693a60(uVar3,2,0,in_ECX >> 1,0,&param_1);
  *(undefined4 *)(unaff_ESI + 0x2a0) = uVar3;
  if ((param_1 == 0) &&
     (param_1 = FUN_00691f30(iVar4,*(int *)(unaff_ESI + 0x29c) * 2), param_1 == 0)) {
    puVar5 = *(undefined2 **)(unaff_ESI + 0x2a0);
    puVar1 = puVar5 + *(int *)(unaff_ESI + 0x29c);
    for (; puVar5 < puVar1; puVar5 = puVar5 + 1) {
      uVar2 = FUN_00690a40(iVar4);
      *puVar5 = uVar2;
    }
    FUN_00691fe0(iVar4);
    if (*(char *)(unaff_ESI + 0x2c4) != '\0') {
      iVar4 = FUN_006c5a90();
      return iVar4;
    }
  }
  return param_1;
}


/* FUN_006c6620 @ 006c6620  kind=gamemisc  attributed-by=none  size=613 */

int FUN_006c6620(int param_1,char param_2)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x8c);
  uVar1 = *(uint *)(*(int *)(param_1 + 0x8c) + -0x20 + (uint)*(ushort *)(param_1 + 0x84) * 8);
  if ((uVar1 + 0x20 & 0xffffffc0) != uVar1) {
    FUN_006bfb20();
  }
  if (iVar3 != 0) {
    memcpy(*(void **)(param_1 + 0x88),*(void **)(param_1 + 0x8c),
           (uint)*(ushort *)(param_1 + 0x84) * 8);
  }
  puVar5 = (undefined4 *)(*(int *)(param_1 + 4) + 0xac);
  puVar6 = (undefined4 *)(*(int *)(param_1 + 0xa0) + 0x11c);
  for (iVar4 = 0x11; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  if (param_2 == '\0') {
    *(undefined4 *)(*(int *)(param_1 + 0xa0) + 0xdc) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x30)
    ;
    *(undefined4 *)(*(int *)(param_1 + 0xa0) + 0xe0) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x34)
    ;
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0xa0) + 0xdc) = 0x10000;
    *(undefined4 *)(*(int *)(param_1 + 0xa0) + 0xe0) = 0x10000;
    memcpy(*(void **)(param_1 + 0x90),*(void **)(param_1 + 0x8c),
           (uint)*(ushort *)(param_1 + 0x84) * 8);
  }
  *(uint *)(*(int *)(param_1 + 0x8c) + -0x18 + (uint)*(ushort *)(param_1 + 0x84) * 8) =
       *(int *)(*(int *)(param_1 + 0x8c) + -0x18 + (uint)*(ushort *)(param_1 + 0x84) * 8) + 0x20U &
       0xffffffc0;
  *(uint *)(*(int *)(param_1 + 0x8c) + -4 + (uint)*(ushort *)(param_1 + 0x84) * 8) =
       *(int *)(*(int *)(param_1 + 0x8c) + -4 + (uint)*(ushort *)(param_1 + 0x84) * 8) + 0x20U &
       0xffffffc0;
  if (iVar3 != 0) {
    pbVar2 = *(byte **)(*(int *)(param_1 + 0xc) + 0x40);
    iVar3 = FUN_006c0be0(iVar3);
    if (iVar3 != 0) {
      return iVar3;
    }
    *(char *)(*(int *)(param_1 + 0xa0) + 0x230) = param_2;
    puVar5 = (undefined4 *)(param_1 + 0x7c);
    puVar6 = (undefined4 *)(*(int *)(param_1 + 0xa0) + 0x90);
    for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    iVar3 = FUN_006c0fb0();
    if ((iVar3 != 0) && (*(char *)(*(int *)(param_1 + 0xa0) + 0x231) != '\0')) {
      return iVar3;
    }
    *pbVar2 = *pbVar2 | *(char *)(*(int *)(param_1 + 0xa0) + 0x154) << 5 | 4U;
  }
  if (*(char *)(param_1 + 0x41) == '\0') {
    *(undefined4 *)(param_1 + 0x44) =
         *(undefined4 *)(*(int *)(param_1 + 0x8c) + -0x20 + (uint)*(ushort *)(param_1 + 0x84) * 8);
    *(undefined4 *)(param_1 + 0x48) =
         *(undefined4 *)(*(int *)(param_1 + 0x8c) + -0x1c + (uint)*(ushort *)(param_1 + 0x84) * 8);
    *(undefined4 *)(param_1 + 0x4c) =
         *(undefined4 *)(*(int *)(param_1 + 0x8c) + -0x18 + (uint)*(ushort *)(param_1 + 0x84) * 8);
    *(undefined4 *)(param_1 + 0x50) =
         *(undefined4 *)(*(int *)(param_1 + 0x8c) + -0x14 + (uint)*(ushort *)(param_1 + 0x84) * 8);
    *(undefined4 *)(param_1 + 0xb8) =
         *(undefined4 *)(*(int *)(param_1 + 0x8c) + -0x10 + (uint)*(ushort *)(param_1 + 0x84) * 8);
    *(undefined4 *)(param_1 + 0xbc) =
         *(undefined4 *)(*(int *)(param_1 + 0x8c) + -0xc + (uint)*(ushort *)(param_1 + 0x84) * 8);
    *(undefined4 *)(param_1 + 0xc0) =
         *(undefined4 *)(*(int *)(param_1 + 0x8c) + -8 + (uint)*(ushort *)(param_1 + 0x84) * 8);
    *(undefined4 *)(param_1 + 0xc4) =
         *(undefined4 *)(*(int *)(param_1 + 0x8c) + -4 + (uint)*(ushort *)(param_1 + 0x84) * 8);
  }
  return 0;
}


/* FUN_006c6a90 @ 006c6a90  kind=gamemisc  attributed-by=none  size=582 */

int FUN_006c6a90(int *param_1)

{
  int iVar1;
  short sVar2;
  int *piVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  uint extraout_EDX;
  
  piVar3 = param_1;
  iVar5 = param_1[3];
  iVar1 = *(short *)(iVar5 + 0x16) + 4;
  if ((iVar1 == 0) ||
     ((uint)(*(short *)(iVar5 + 0x16) + 4 +
            (int)*(short *)(iVar5 + 0x3a) + (int)*(short *)(iVar5 + 0x16)) <= *(uint *)(iVar5 + 4)))
  {
    param_1 = (int *)0x0;
  }
  else {
    param_1 = (int *)FUN_00693c40(iVar5,iVar1,0);
    if (param_1 != (int *)0x0) {
      return (int)param_1;
    }
  }
  sVar2 = *(short *)(iVar5 + 0x16);
  iVar1 = *(int *)(iVar5 + 0x18);
  *(int *)(iVar1 + sVar2 * 8) = piVar3[0x11];
  *(int *)(iVar1 + 4 + sVar2 * 8) = piVar3[0x12];
  sVar2 = *(short *)(iVar5 + 0x16);
  iVar1 = *(int *)(iVar5 + 0x18);
  *(int *)(iVar1 + 8 + sVar2 * 8) = piVar3[0x13];
  *(int *)(iVar1 + 0xc + sVar2 * 8) = piVar3[0x14];
  sVar2 = *(short *)(iVar5 + 0x16);
  iVar1 = *(int *)(iVar5 + 0x18);
  *(int *)(iVar1 + 0x10 + sVar2 * 8) = piVar3[0x2e];
  *(int *)(iVar1 + 0x14 + sVar2 * 8) = piVar3[0x2f];
  sVar2 = *(short *)(iVar5 + 0x16);
  iVar1 = *(int *)(iVar5 + 0x18);
  *(int *)(iVar1 + 0x18 + sVar2 * 8) = piVar3[0x30];
  *(int *)(iVar1 + 0x1c + sVar2 * 8) = piVar3[0x31];
  *(undefined1 *)((int)*(short *)(iVar5 + 0x16) + *(int *)(iVar5 + 0x1c)) = 0;
  *(undefined1 *)(*(short *)(iVar5 + 0x16) + 1 + *(int *)(iVar5 + 0x1c)) = 0;
  *(undefined1 *)(*(short *)(iVar5 + 0x16) + 2 + *(int *)(iVar5 + 0x1c)) = 0;
  *(undefined1 *)(*(short *)(iVar5 + 0x16) + 3 + *(int *)(iVar5 + 0x1c)) = 0;
  iVar1 = piVar3[6];
  param_1 = (int *)FUN_006908c0(iVar1,piVar3[0x2a]);
  if (param_1 == (int *)0x0) {
    uVar4 = FUN_00690b80(iVar1,&param_1);
    if (param_1 == (int *)0x0) {
      if (*(ushort *)(*piVar3 + 0x11e) < uVar4) {
        if (piVar3[7] < (int)(uint)uVar4) {
          return 0x16;
        }
        uVar6 = *(uint *)(piVar3[0x28] + 0x184);
        iVar5 = FUN_006c0d00(*(undefined4 *)(piVar3[0x28] + 8));
        *(uint *)(piVar3[0x28] + 0x184) = uVar6 & 0xffff;
        if (iVar5 != 0) {
          return iVar5;
        }
        param_1 = (int *)0x0;
      }
      else if (uVar4 == 0) {
        return 0;
      }
      param_1 = (int *)FUN_00691ec0(iVar1,*(undefined4 *)(piVar3[0x28] + 0x188),(uint)uVar4);
      if (param_1 == (int *)0x0) {
        *(undefined4 *)(piVar3[2] + 0x88) = *(undefined4 *)(piVar3[0x28] + 0x188);
        *(uint *)(piVar3[2] + 0x8c) = (uint)uVar4;
        FUN_006c02c0();
        uVar6 = extraout_EDX;
        if (extraout_EDX < *(ushort *)(piVar3 + 0x21)) {
          do {
            *(byte *)(piVar3[0x25] + uVar6) = *(byte *)(piVar3[0x25] + uVar6) & 0xe7;
            uVar6 = uVar6 + 1;
          } while (uVar6 < *(ushort *)(piVar3 + 0x21));
        }
        *(short *)(piVar3 + 0x21) = (short)piVar3[0x21] + 4;
        param_1 = (int *)FUN_006c6620(piVar3,1);
      }
    }
  }
  return (int)param_1;
}


/* FUN_006c6ce0 @ 006c6ce0  kind=gamemisc  attributed-by=none  size=1813 */

int FUN_006c6ce0(int *param_1,uint param_2,uint param_3,char param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int *local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  int local_70;
  int iStack_6c;
  int iStack_68;
  uint uStack_64;
  int iStack_60;
  int iStack_5c;
  undefined4 local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_70 = *param_1;
  iVar7 = param_1[3];
  bVar4 = false;
  local_80 = (int *)0x0;
  bVar3 = false;
  if ((1 < param_3) && (*(ushort *)(local_70 + 0x122) < param_3)) {
    return 0x15;
  }
  if (*(uint *)(local_70 + 0x10) <= param_2) {
    return 0x10;
  }
  param_1[5] = param_2;
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    local_78 = *(uint *)(param_1[1] + 0x30);
    local_7c = *(uint *)(param_1[1] + 0x34);
  }
  else {
    local_78 = 0x10000;
    local_7c = 0x10000;
  }
  FUN_006bf9f0(param_1);
  iVar9 = local_70;
  if (*(int *)(*(int *)(local_70 + 0x80) + 0x34) == 0) {
    local_74 = FUN_006bf5b0(local_70,param_2,param_1 + 7);
  }
  else {
    puVar1 = *(undefined4 **)(*(int *)(local_70 + 0x80) + 0x34);
    iVar5 = (**(code **)*puVar1)(puVar1[1],param_2,&local_58);
    if (iVar5 != 0) {
      return iVar5;
    }
    local_74 = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    uStack_c = 0;
    uStack_8 = 0;
    uStack_4 = 0;
    bVar3 = true;
    param_1[7] = iStack_54;
    FUN_00690880(&uStack_28,local_58,iStack_54);
    param_1[6] = (int)&uStack_28;
  }
  iVar5 = 0;
  if (param_1[7] < 1) {
LAB_006c6ea5:
    if ((param_1[7] == 0) || ((short)param_1[8] == 0)) {
      param_1[9] = 0;
      param_1[0xb] = 0;
      param_1[10] = 0;
      param_1[0xc] = 0;
      if (param_4 == '\0') {
        param_1[0x11] = -param_1[0xd];
        param_1[0x2f] = param_1[0x2c];
        param_1[0x12] = 0;
        param_1[0x13] = param_1[0xe] + -param_1[0xd];
        param_1[0x14] = 0;
        param_1[0x2e] = 0;
        param_1[0x30] = 0;
        param_1[0x31] = param_1[0x2c] - param_1[0x2d];
        FUN_006bfa80(param_2);
        if (*(char *)(*param_1 + 0x2c4) != '\0') {
          uVar2 = *(undefined4 *)(*param_1 + 100);
          iVar5 = FUN_006c5e40(param_2,&local_80,4);
          if (iVar5 != 0) goto LAB_006c73d9;
          param_1[0x11] = param_1[0x11] + *local_80;
          param_1[0x12] = param_1[0x12] + local_80[1];
          param_1[0x13] = param_1[0x13] + local_80[2];
          param_1[0x14] = param_1[0x14] + local_80[3];
          param_1[0x2e] = param_1[0x2e] + local_80[4];
          param_1[0x2f] = param_1[0x2f] + local_80[5];
          param_1[0x30] = param_1[0x30] + local_80[6];
          param_1[0x31] = param_1[0x31] + local_80[7];
          FUN_00691290(uVar2,local_80);
        }
        uVar10 = local_78;
        if ((*(byte *)(param_1 + 4) & 1) == 0) {
          iVar7 = FUN_0068ebc0(param_1[0x11],local_78);
          param_1[0x11] = iVar7;
          iVar7 = FUN_0068ebc0(param_1[0x13],uVar10);
          uVar10 = local_7c;
          param_1[0x13] = iVar7;
          iVar7 = FUN_0068ebc0(param_1[0x2f],local_7c);
          param_1[0x2f] = iVar7;
          iVar7 = FUN_0068ebc0(param_1[0x31],uVar10);
          param_1[0x31] = iVar7;
        }
        iVar5 = 0;
      }
    }
    else {
      param_1[0x11] = param_1[9] - param_1[0xd];
      param_1[0x12] = 0;
      param_1[0x2f] = param_1[0x2c] + param_1[0xc];
      param_1[0x13] = param_1[0xe] + (param_1[9] - param_1[0xd]);
      param_1[0x31] = (param_1[0x2c] + param_1[0xc]) - param_1[0x2d];
      param_1[0x14] = 0;
      param_1[0x2e] = 0;
      param_1[0x30] = 0;
      FUN_006bfa80(param_2);
      if ((short)param_1[8] < 1) {
        if ((short)param_1[8] == -1) {
          local_74 = (uint)*(short *)(iVar7 + 0x16);
          iStack_5c = (int)*(short *)(iVar7 + 0x14);
          iVar5 = (**(code **)(iVar9 + 0x210))(param_1);
          if (iVar5 == 0) {
            iStack_60 = param_1[0x2a];
            (**(code **)(iVar9 + 0x204))(param_1);
            if (*(char *)(iVar9 + 0x2c4) != '\0') {
              iStack_68 = *(int *)(iVar9 + 100);
              iVar5 = FUN_006c5e40(param_2,&local_80,*(int *)(iVar7 + 0x54) + 4);
              if (iVar5 != 0) goto LAB_006c7277;
              iStack_6c = *(int *)(iVar7 + 0x54);
              iVar6 = 0;
              if (0 < iStack_6c) {
                piVar8 = (int *)(*(int *)(iVar7 + 0x30) * 0x20 + *(int *)(iVar7 + 0x58) + 8);
                iVar6 = 0;
                do {
                  if ((*(byte *)(piVar8 + -1) & 2) != 0) {
                    *piVar8 = *piVar8 + (int)(short)local_80[iVar6 * 2];
                    piVar8[1] = piVar8[1] + (int)(short)local_80[iVar6 * 2 + 1];
                  }
                  iVar6 = iVar6 + 1;
                  piVar8 = piVar8 + 8;
                  iVar9 = local_70;
                } while (iVar6 < iStack_6c);
              }
              param_1[0x11] = param_1[0x11] + local_80[iVar6 * 2];
              param_1[0x12] = param_1[0x12] + local_80[iVar6 * 2 + 1];
              param_1[0x13] = param_1[0x13] + local_80[iVar6 * 2 + 2];
              param_1[0x14] = param_1[0x14] + local_80[iVar6 * 2 + 3];
              param_1[0x2e] = param_1[0x2e] + local_80[iVar6 * 2 + 4];
              param_1[0x2f] = param_1[0x2f] + local_80[iVar6 * 2 + 5];
              param_1[0x30] = param_1[0x30] + local_80[iVar6 * 2 + 6];
              param_1[0x31] = param_1[0x31] + local_80[iVar6 * 2 + 7];
              FUN_00691290(iStack_68,local_80);
            }
            if ((*(byte *)(param_1 + 4) & 1) == 0) {
              iVar6 = FUN_0068ebc0(param_1[0x11],local_78);
              param_1[0x11] = iVar6;
              iVar6 = FUN_0068ebc0(param_1[0x13],local_78);
              param_1[0x13] = iVar6;
              iVar6 = FUN_0068ebc0(param_1[0x2f],local_7c);
              param_1[0x2f] = iVar6;
              iVar6 = FUN_0068ebc0(param_1[0x31],local_7c);
              param_1[0x31] = iVar6;
            }
            if ((param_1[4] & 0x400U) == 0) {
              local_78 = *(uint *)(iVar7 + 0x54);
              iStack_50 = param_1[6];
              iVar9 = *(int *)(iVar7 + 0x30);
              uStack_64 = local_74;
              iStack_4c = param_1[7];
              iStack_6c = 0;
              FUN_0068f0c0(iVar7);
              local_7c = 0;
              uVar10 = uStack_64;
              if (local_78 != 0) {
                iStack_68 = param_3 + 1;
                local_80 = (int *)(iVar9 << 5);
                do {
                  iStack_44 = param_1[0x12];
                  iStack_40 = param_1[0x13];
                  iVar6 = param_1[0x11];
                  iStack_3c = param_1[0x14];
                  iStack_38 = param_1[0x2e];
                  iStack_34 = param_1[0x2f];
                  iStack_30 = param_1[0x30];
                  iStack_2c = param_1[0x31];
                  uStack_64 = (uint)*(short *)(iVar7 + 0x16);
                  iVar5 = FUN_006c6ce0(param_1,*(undefined4 *)
                                                (*(int *)(iVar7 + 0x34) + (int)local_80),iStack_68,0
                                      );
                  iVar9 = local_70;
                  if (iVar5 != 0) goto LAB_006c7277;
                  iStack_6c = *(int *)(iVar7 + 0x34) + (int)local_80;
                  if ((*(ushort *)(iStack_6c + 4) & 0x200) == 0) {
                    param_1[0x12] = iStack_44;
                    param_1[0x13] = iStack_40;
                    param_1[0x14] = iStack_3c;
                    param_1[0x2e] = iStack_38;
                    param_1[0x2f] = iStack_34;
                    param_1[0x11] = iVar6;
                    param_1[0x30] = iStack_30;
                    param_1[0x31] = iStack_2c;
                  }
                  uVar10 = (uint)*(short *)(iVar7 + 0x16);
                  if (uVar10 != uStack_64) {
                    FUN_006c0310(param_1,iStack_6c,local_74,uStack_64);
                  }
                  local_80 = local_80 + 8;
                  local_7c = local_7c + 1;
                } while (local_7c < local_78);
              }
              param_1[6] = iStack_50;
              param_1[7] = iStack_4c;
              param_1[0x2a] = iStack_60;
              iVar9 = local_70;
              if ((((*(byte *)(param_1 + 4) & 2) == 0) &&
                  ((*(ushort *)(iStack_6c + 4) & 0x100) != 0)) && (local_74 < uVar10)) {
                FUN_006c6a90(param_1,local_74,iStack_5c);
                iVar9 = local_70;
              }
            }
            else {
              FUN_0068f0c0(iVar7);
              *(undefined4 *)(param_1[2] + 0x48) = 0x636f6d70;
            }
            goto LAB_006c7277;
          }
        }
        else {
          iVar5 = 0x14;
        }
      }
      else {
        iVar5 = (**(code **)(iVar9 + 0x20c))(param_1);
        if (iVar5 == 0) {
          (**(code **)(iVar9 + 0x204))(param_1);
          iVar5 = FUN_006c6890(param_1);
          if (iVar5 == 0) {
            FUN_0068f0c0(iVar7);
          }
          goto LAB_006c7277;
        }
      }
    }
LAB_006c73d9:
    if (!bVar4) goto LAB_006c7277;
  }
  else {
    if ((param_1[0x15] == 0) && (*(int *)(*(int *)(iVar9 + 0x80) + 0x34) == 0)) {
      iVar5 = 8;
      goto LAB_006c7277;
    }
    iVar5 = (**(code **)(iVar9 + 0x200))(param_1,param_2,param_1[0x15] + local_74,param_1[7]);
    if (iVar5 != 0) goto LAB_006c7277;
    bVar4 = true;
    iVar5 = (**(code **)(iVar9 + 0x208))(param_1);
    if ((iVar5 == 0) && (param_4 == '\0')) goto LAB_006c6ea5;
  }
  (**(code **)(iVar9 + 0x204))(param_1);
LAB_006c7277:
  if (bVar3) {
    piVar8 = *(int **)(*(int *)(iVar9 + 0x80) + 0x34);
    (**(code **)(*piVar8 + 4))(piVar8[1],&local_58);
  }
  return iVar5;
}


/* FUN_006c75e0 @ 006c75e0  kind=gamemisc  attributed-by=none  size=275 */

int FUN_006c75e0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_1;
  if ((char)param_1[0x49] == '\0') {
    iVar3 = *(int *)(*(int *)(iVar1 + 0x60) + 0x28);
  }
  else {
    iVar3 = param_1[0x4a];
  }
  if (iVar3 == 0) {
    return 0x99;
  }
  FUN_006c0d40(iVar3,iVar1);
  *(undefined4 *)(iVar3 + 0x1ac) = 0;
  *(undefined4 *)(iVar3 + 0x10) = 0;
  *(undefined4 *)(iVar3 + 0x1dc) = 0x40;
  *(undefined4 *)(iVar3 + 0x1e0) = 0;
  *(undefined4 *)(iVar3 + 0x1e4) = 0;
  *(undefined1 *)(iVar3 + 0x1e8) = 0;
  *(undefined4 *)(iVar3 + 0x234) = 0x10000;
  *(undefined4 *)(iVar3 + 0xd8) = 0;
  *(undefined4 *)(iVar3 + 0xdc) = 0;
  *(undefined4 *)(iVar3 + 0xe0) = 0;
  *(undefined4 *)(iVar3 + 0x100) = 0x10000;
  *(undefined2 *)(iVar3 + 0xfc) = 0;
  *(undefined4 *)(iVar3 + 0x104) = 0;
  FUN_006c0be0(*(undefined4 *)(iVar1 + 0x28c));
  FUN_006c0c00();
  FUN_006c0c00();
  if (*(int *)(iVar1 + 0x28c) != 0) {
    iVar2 = FUN_006c0bb0(0);
    if (iVar2 == 0) {
      iVar2 = (**(code **)(iVar1 + 0x2b0))(iVar3);
      if (iVar2 == 0) {
        FUN_006c0f30();
      }
    }
    return iVar2;
  }
  FUN_006c0f30();
  return 0;
}


/* FUN_006c7700 @ 006c7700  kind=gamemisc  attributed-by=none  size=200 */

int FUN_006c7700(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  iVar1 = *param_1;
  if ((char)param_1[0x49] == '\0') {
    iVar3 = *(int *)(*(int *)(iVar1 + 0x60) + 0x28);
  }
  else {
    iVar3 = param_1[0x4a];
  }
  iVar2 = 0;
  if (iVar3 == 0) {
    return 0x99;
  }
  FUN_006c0d40(iVar3,iVar1);
  *(undefined4 *)(iVar3 + 0x1ac) = 0;
  *(undefined4 *)(iVar3 + 0x10) = 0;
  *(undefined1 *)(iVar3 + 0x1e8) = 0;
  FUN_006c0be0(*(undefined4 *)(iVar1 + 0x294));
  FUN_006c0c00();
  if (*(int *)(iVar1 + 0x294) != 0) {
    iVar2 = FUN_006c0bb0(0);
    if ((iVar2 == 0) && ((char)param_1[0x49] == '\0')) {
      iVar2 = (**(code **)(iVar1 + 0x2b0))(iVar3);
    }
  }
  piVar4 = (int *)(iVar3 + 0x11c);
  piVar5 = param_1 + 0x2b;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar5 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  }
  FUN_006c0f30();
  return iVar2;
}


/* FUN_006c7970 @ 006c7970  kind=gamemisc  attributed-by=none  size=248 */

void FUN_006c7970(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  
  if ((((char)param_1[0x4b] != '\0') || (iVar1 = FUN_006c77d0(param_1), iVar1 == 0)) &&
     (*(char *)((int)param_1 + 0x12d) == '\0')) {
    uVar3 = 0;
    iVar1 = *param_1;
    if (param_1[0x3c] != 0) {
      do {
        uVar2 = FUN_0068ebc0((int)*(short *)(*(int *)(iVar1 + 0x2a0) + uVar3 * 2),param_1[0x16]);
        *(undefined4 *)(param_1[0x3d] + uVar3 * 4) = uVar2;
        uVar3 = uVar3 + 1;
      } while (uVar3 < (uint)param_1[0x3c]);
    }
    uVar3 = 0;
    if ((short)param_1[0x42] != 0) {
      do {
        *(undefined4 *)(param_1[0x43] + uVar3 * 8) = 0;
        *(undefined4 *)(param_1[0x43] + 4 + uVar3 * 8) = 0;
        *(undefined4 *)(param_1[0x44] + uVar3 * 8) = 0;
        *(undefined4 *)(param_1[0x44] + 4 + uVar3 * 8) = 0;
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(ushort *)(param_1 + 0x42));
    }
    uVar3 = 0;
    if ((short)param_1[0x3e] != 0) {
      do {
        *(undefined4 *)(param_1[0x3f] + uVar3 * 4) = 0;
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(ushort *)(param_1 + 0x3e));
    }
    piVar4 = &DAT_00735e08;
    piVar5 = param_1 + 0x2b;
    for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar5 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    }
    iVar1 = FUN_006c7700(param_1);
    if (iVar1 == 0) {
      *(undefined1 *)((int)param_1 + 0x12d) = 1;
    }
  }
  return;
}


/* FUN_006c7ab0 @ 006c7ab0  kind=gamemisc  attributed-by=none  size=372 */

int FUN_006c7ab0(int param_1,uint param_2,int *param_3)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int local_8 [2];
  
  uVar1 = *(undefined4 *)(param_1 + 100);
  iVar5 = 0;
  local_8[0] = 0;
  *(undefined1 *)(param_1 + 0x2c4) = 0;
  if ((*(int *)(param_1 + 0x2c8) != 0) || (local_8[0] = FUN_006c5630(param_1,0), local_8[0] == 0)) {
    puVar2 = *(uint **)(param_1 + 0x2c8);
    if (param_2 != *(uint *)puVar2[2]) {
      return 6;
    }
    uVar3 = 0;
    if (param_2 != 0) {
      do {
        if (param_3[uVar3] < -0x10000) {
          return 6;
        }
        if (0x10000 < param_3[uVar3]) {
          return 6;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < param_2);
    }
    if ((puVar2[9] != 0) || (local_8[0] = FUN_006c52d0(param_1), local_8[0] == 0)) {
      if (puVar2[1] == 0) {
        uVar3 = FUN_00693a60(uVar1,4,0,param_2,0,local_8);
        puVar2[1] = uVar3;
        if (local_8[0] != 0) {
          return local_8[0];
        }
        iVar5 = 1;
      }
      else {
        uVar3 = 0;
        local_8[1] = 0;
        if (param_2 != 0) {
          piVar4 = param_3;
          do {
            if (*(int *)((puVar2[1] - (int)param_3) + (int)piVar4) != *piVar4) {
              iVar5 = 2;
              goto LAB_006c7baa;
            }
            uVar3 = uVar3 + 1;
            piVar4 = piVar4 + 1;
          } while (uVar3 < param_2);
          iVar5 = 0;
        }
      }
LAB_006c7baa:
      *puVar2 = param_2;
      memcpy((void *)puVar2[1],param_3,param_2 * 4);
      *(undefined1 *)(param_1 + 0x2c4) = 1;
      if (*(int *)(param_1 + 0x2a0) != 0) {
        if (iVar5 == 1) {
          FUN_006c5a90(param_1);
        }
        else if (iVar5 == 2) {
          FUN_00691290(uVar1,*(int *)(param_1 + 0x2a0));
          *(undefined4 *)(param_1 + 0x2a0) = 0;
          FUN_006c6540(*(undefined4 *)(param_1 + 0x68));
          return local_8[0];
        }
      }
    }
  }
  return local_8[0];
}


/* FUN_006c7e30 @ 006c7e30  kind=gamemisc  attributed-by=none  size=482 */

int FUN_006c7e30(int *param_1,int param_2,int param_3,uint param_4,char param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  bool bVar9;
  
  iVar1 = *(int *)(param_3 + 4);
  iVar2 = *(int *)(iVar1 + 0x68);
  memset(param_1,0,0xd0);
  if (((param_4 & 2) == 0) && (param_5 == '\0')) {
    if ((*(char *)(param_2 + 0x12d) == '\0') && (iVar3 = FUN_006c7970(param_2), iVar3 != 0)) {
      return iVar3;
    }
    if (*(char *)(param_2 + 0x124) == '\0') {
      iVar3 = *(int *)(*(int *)(iVar1 + 0x60) + 0x28);
    }
    else {
      iVar3 = *(int *)(param_2 + 0x128);
    }
    if (iVar3 == 0) {
      return 0x99;
    }
    bVar9 = (param_4 & 0xf0000) != 0x20000;
    FUN_006c0d40(iVar3,iVar1);
    if (bVar9 != (bool)*(char *)(iVar3 + 0x25c)) {
      uVar6 = 0;
      *(bool *)(iVar3 + 0x25c) = bVar9;
      if (*(int *)(param_2 + 0xf0) != 0) {
        do {
          uVar4 = FUN_0068ebc0((int)*(short *)(*(int *)(iVar1 + 0x2a0) + uVar6 * 2),
                               *(undefined4 *)(param_2 + 0x58));
          *(undefined4 *)(*(int *)(param_2 + 0xf4) + uVar6 * 4) = uVar4;
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(uint *)(param_2 + 0xf0));
      }
      FUN_006c7700(param_2);
    }
    if ((*(byte *)(iVar3 + 0x150) & 1) != 0) {
      param_4 = param_4 | 2;
    }
    if ((*(byte *)(iVar3 + 0x150) & 2) != 0) {
      puVar7 = &DAT_00735e08;
      puVar8 = (undefined4 *)(iVar3 + 0x11c);
      for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    *(byte *)(iVar3 + 0x231) = (byte)param_4 & 0x80;
    param_1[0x28] = iVar3;
    param_1[0x29] = *(int *)(iVar3 + 0x188);
  }
  if (*(int *)(*(int *)(iVar1 + 0x80) + 0x34) == 0) {
    iVar3 = (**(code **)(iVar1 + 0x1fc))(iVar1,0x676c7966,iVar2,0);
    if (iVar3 == 0x8e) {
      param_1[0x15] = 0;
    }
    else {
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar3 = FUN_00690930(iVar2);
      param_1[0x15] = iVar3;
    }
  }
  else {
    param_1[0x15] = 0;
  }
  if (param_5 == '\0') {
    iVar3 = **(int **)(param_3 + 0x9c);
    FUN_0068f020(iVar3);
    param_1[3] = iVar3;
  }
  param_1[4] = param_4;
  *param_1 = iVar1;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[6] = iVar2;
  return 0;
}


/* FUN_006c8670 @ 006c8670  kind=gamemisc  attributed-by=none  size=21 */

uint FUN_006c8670(void)

{
  uint in_EAX;
  int in_ECX;
  
  if (in_EAX < *(uint *)(in_ECX + 4)) {
    return *(byte *)(*(int *)(in_ECX + 8) + in_EAX) & 0x80;
  }
  return in_EAX & 0xffffff00;
}


/* FUN_006c8710 @ 006c8710  kind=gamemisc  attributed-by=none  size=217 */

int FUN_006c8710(int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  short *psVar1;
  short *_Dst;
  undefined4 uVar2;
  int iVar3;
  int unaff_EBX;
  short *psVar4;
  short *psVar5;
  int iVar6;
  short *psVar7;
  short *psVar8;
  int local_4;
  
  iVar3 = *(int *)(unaff_EBX + 0x10);
  local_4 = 0;
  if (*(int *)(unaff_EBX + 0xc) < iVar3) {
LAB_006c8777:
    psVar1 = *(short **)(unaff_EBX + 0x14);
    psVar4 = psVar1 + *(int *)(unaff_EBX + 0xc) * 0x18;
    _Dst = psVar4;
    while (psVar1 < _Dst) {
      psVar4 = psVar4 + -0x18;
      if ((*psVar4 < param_1) || ((*psVar4 == param_1 && (param_2 == *(int *)(unaff_EBX + 0x18)))))
      break;
      psVar5 = _Dst + -0x18;
      psVar7 = psVar4;
      psVar8 = _Dst;
      for (iVar3 = 0xc; _Dst = psVar5, iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)psVar8 = *(undefined4 *)psVar7;
        psVar7 = psVar7 + 2;
        psVar8 = psVar8 + 2;
      }
    }
    *(int *)(unaff_EBX + 0xc) = *(int *)(unaff_EBX + 0xc) + 1;
    memset(_Dst,0,0x30);
    *_Dst = (short)param_1;
    *(undefined1 *)((int)_Dst + 0xd) = (undefined1)param_2;
    *param_4 = _Dst;
    return local_4;
  }
  if (iVar3 < 0x2aaaaaa) {
    iVar6 = (iVar3 >> 2) + 4 + iVar3;
    if ((iVar6 < iVar3) || (0x2aaaaaa < iVar6)) {
      iVar6 = 0x2aaaaaa;
    }
    uVar2 = FUN_00693a60(param_3,0x30,iVar3,iVar6,*(undefined4 *)(unaff_EBX + 0x14),&local_4);
    *(undefined4 *)(unaff_EBX + 0x14) = uVar2;
    if (local_4 == 0) {
      *(int *)(unaff_EBX + 0x10) = iVar6;
      goto LAB_006c8777;
    }
  }
  else {
    local_4 = 0x40;
  }
  *param_4 = 0;
  return local_4;
}


/* FUN_006c87f0 @ 006c87f0  kind=gamemisc  attributed-by=none  size=93 */

undefined4 FUN_006c87f0(void)

{
  uint in_EAX;
  undefined4 uVar1;
  uint in_ECX;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar2 = in_ECX;
  if ((int)in_EAX < (int)in_ECX) {
    if ((int)in_EAX < (int)-in_ECX) {
      uVar4 = 0xfffffffe;
    }
    else {
      uVar4 = 1;
      uVar2 = in_EAX;
      in_EAX = in_ECX;
    }
  }
  else if ((int)in_EAX < (int)-in_ECX) {
    uVar4 = 0xffffffff;
    uVar2 = in_EAX;
    in_EAX = -in_ECX;
  }
  else {
    uVar4 = 2;
  }
  uVar3 = (int)(uVar2 * 0xe) >> 0x1f;
  uVar1 = 4;
  if ((int)((uVar2 * 0xe ^ uVar3) - uVar3) <
      (int)((in_EAX ^ (int)in_EAX >> 0x1f) - ((int)in_EAX >> 0x1f))) {
    uVar1 = uVar4;
  }
  return uVar1;
}


/* FUN_006c8870 @ 006c8870  kind=gamemisc  attributed-by=none  size=129 */

void FUN_006c8870(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = param_1;
  if ((param_1 != (int *)0x0) && (iVar1 = *param_1, iVar1 != 0)) {
    piVar3 = param_1 + 0xe;
    param_1 = (int *)0x2;
    do {
      piVar3[-2] = 0;
      piVar3[-1] = 0;
      FUN_00691290(iVar1,*piVar3);
      *piVar3 = 0;
      piVar3[1] = 0;
      piVar3[2] = 0;
      FUN_00691290(iVar1,piVar3[3]);
      piVar3[3] = 0;
      piVar3 = piVar3 + 7;
      param_1 = (int *)((int)param_1 + -1);
    } while (param_1 != (int *)0x0);
    FUN_00691290(iVar1,piVar2[0xb]);
    piVar2[0xb] = 0;
    piVar2[9] = 0;
    piVar2[10] = 0;
    FUN_00691290(iVar1,piVar2[8]);
    piVar2[8] = 0;
    piVar2[7] = 0;
    piVar2[6] = 0;
    *piVar2 = 0;
  }
  return;
}


/* FUN_006ca150 @ 006ca150  kind=gamemisc  attributed-by=none  size=354 */

void FUN_006ca150(void)

{
  uint uVar1;
  int in_ECX;
  int in_EDX;
  
  uVar1 = *(uint *)(in_EDX + 0x6c);
  if (((uVar1 & 4) != 0) && (*(char *)(in_ECX * 0x18c + *(int *)(in_EDX + 0x70) + 0xfc) == '\0')) {
    if (in_ECX == 1) {
      uVar1 = uVar1 & 2;
    }
    else {
      uVar1 = uVar1 & 1;
    }
    if (uVar1 != 0) {
      FUN_006cb000();
    }
  }
  return;
}


/* FUN_006cb000 @ 006cb000  kind=gamemisc  attributed-by=none  size=80 */

int FUN_006cb000(void)

{
  int in_EAX;
  int in_ECX;
  int iVar1;
  uint uVar2;
  int in_EDX;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = 0x62;
  iVar3 = in_EAX;
  if (0 < in_ECX) {
    piVar4 = (int *)(in_EDX + 4);
    do {
      iVar1 = in_EAX - *piVar4;
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      if (iVar1 < iVar5) {
        iVar3 = *piVar4;
        iVar5 = iVar1;
      }
      piVar4 = piVar4 + 3;
      in_ECX = in_ECX + -1;
    } while (in_ECX != 0);
  }
  uVar2 = iVar3 + 0x20U & 0xffffffc0;
  if (in_EAX < iVar3) {
    if ((int)(uVar2 - 0x30) < in_EAX) {
      in_EAX = iVar3;
    }
  }
  else if (in_EAX < (int)(uVar2 + 0x30)) {
    return iVar3;
  }
  return in_EAX;
}


/* FUN_006cb050 @ 006cb050  kind=gamemisc  attributed-by=none  size=297 */

void FUN_006cb050(int param_1)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = *(uint *)(param_1 + 0x6c);
  if ((uVar1 & 4) != 0) {
    if (in_ECX == 1) {
      uVar1 = uVar1 & 2;
    }
    else {
      uVar1 = uVar1 & 1;
    }
    if (uVar1 != 0) {
      FUN_006cb000();
    }
  }
  return;
}


/* FUN_006cb1a0 @ 006cb1a0  kind=gamemisc  attributed-by=none  size=13 */

void FUN_006cb1a0(void)

{
  int in_EAX;
  int in_ECX;
  
  *(int *)(in_EAX + 8) = (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) + *(int *)(in_EAX + 4);
  return;
}


/* FUN_006cb1b0 @ 006cb1b0  kind=gamemisc  attributed-by=none  size=399 */

uint FUN_006cb1b0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int in_ECX;
  uint uVar5;
  int in_EDX;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar1 = *(uint *)(in_EDX + 0x6c) & 4;
  iVar7 = 0x40;
  if (uVar1 == 0) {
    if (((*(byte *)(param_1 + 0xc) & 1) == 0) || ((*(byte *)(param_2 + 0xc) & 1) == 0)) {
      iVar7 = (uint)(in_ECX == 1) * 2 + 0x3b;
    }
    else {
      iVar7 = (-(uint)(in_ECX != 1) & 0xfffffffa) + 0x37;
    }
  }
  iVar3 = *(int *)(param_2 + 4);
  iVar6 = *(int *)(param_1 + 4);
  uVar2 = FUN_006cb050();
  uVar5 = ((iVar3 + iVar6) / 2 - (int)uVar2 / 2) + param_3;
  iVar6 = uVar5 - (uVar5 & 0xffffffc0);
  iVar3 = (uVar5 + uVar2) - (uVar5 + uVar2 & 0xffffffc0);
  uVar9 = 0x40 - iVar6;
  uVar8 = 0;
  if ((iVar6 == 0) || (iVar3 == 0)) goto LAB_006cb2a9;
  if (iVar7 < (int)uVar2) {
    if ((0x3f < iVar7) ||
       ((((iVar6 < iVar7 && ((int)uVar9 < iVar7)) && (iVar3 < iVar7)) && (0x40 - iVar3 < iVar7)))) {
      uVar4 = uVar2 & 0x8000003f;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xffffffc0) + 1;
      }
      if ((int)uVar4 < 0x20) {
        if (((int)uVar9 <= (int)uVar4) || (iVar3 <= (int)uVar4)) goto LAB_006cb2a5;
      }
      else {
        uVar4 = 0x40 - iVar7;
      }
      uVar8 = iVar7 - iVar3;
      uVar10 = uVar9 - uVar4;
      if ((int)(iVar7 - uVar9) <= (int)uVar10) {
        uVar10 = -(iVar7 - uVar9);
      }
      if ((int)(iVar3 - uVar4) <= (int)uVar8) {
        uVar8 = -(iVar3 - uVar4);
      }
      if ((int)((uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f)) <=
          (int)((uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f))) {
        uVar8 = uVar10;
      }
      goto LAB_006cb2a9;
    }
  }
  else if (iVar3 < (int)uVar2) {
    uVar8 = uVar9;
    if (iVar3 < (int)uVar9) {
      uVar8 = -iVar3;
    }
    goto LAB_006cb2a9;
  }
LAB_006cb2a5:
  uVar8 = 0;
LAB_006cb2a9:
  if (uVar1 == 0) {
    if ((int)uVar8 < 0xf) {
      if ((int)uVar8 < -0xe) {
        uVar8 = 0xfffffff2;
      }
    }
    else {
      uVar8 = 0xe;
    }
  }
  iVar7 = uVar5 + uVar8;
  if (*(int *)(param_2 + 4) <= *(int *)(param_1 + 4)) {
    *(uint *)(param_1 + 8) = uVar2 + iVar7;
    *(int *)(param_2 + 8) = iVar7;
    return uVar8;
  }
  *(int *)(param_1 + 8) = iVar7;
  *(uint *)(param_2 + 8) = iVar7 + uVar2;
  return uVar8;
}


/* FUN_006cb810 @ 006cb810  kind=gamemisc  attributed-by=none  size=2030 */

void FUN_006cb810(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint local_64;
  uint local_60;
  int local_5c;
  int local_58;
  uint local_54;
  int local_50;
  int local_4c;
  uint local_48;
  int local_44;
  int local_40;
  int *local_3c;
  int *local_38;
  int local_34;
  int local_30;
  uint local_2c;
  undefined2 local_28;
  undefined2 uStack_26;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_64;
  local_3c = (int *)param_1[0x22];
  local_50 = param_2;
  iVar1 = *(int *)(*param_1 + 0x54);
  local_38 = *(int **)(iVar1 + 0x9c);
  iVar7 = param_1[2];
  iVar4 = FUN_00692620(*param_1,param_3,param_4);
  if (iVar4 == 0) {
    iVar4 = local_38[2];
    *(char *)(param_1 + 0x23) = (char)iVar4;
    if ((char)iVar4 != '\0') {
      param_1[0x24] = local_38[3];
      param_1[0x25] = local_38[4];
      param_1[0x26] = local_38[5];
      param_1[0x27] = local_38[6];
      param_1[0x28] = local_38[7];
      local_10 = param_1[0x25];
      local_14 = param_1[0x24];
      param_1[0x29] = local_38[8];
      local_c = param_1[0x26];
      local_8 = param_1[0x27];
      FUN_0068ecd0(&local_14);
      FUN_00690500(param_1 + 0x28,&local_14);
    }
    *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(iVar1 + 0x28);
    *(undefined4 *)(iVar1 + 0x3c) = *(undefined4 *)(iVar1 + 0x34);
    if (*(int *)(iVar1 + 0x48) == 0x636f6d70) {
      uVar9 = *(uint *)(iVar1 + 0x80);
      local_58 = (int)*(short *)(iVar7 + 0x16);
      local_48 = uVar9;
      local_5c = FUN_00693db0(iVar7,uVar9);
      if (local_5c != 0) goto LAB_006cbfeb;
      memcpy(*(void **)(iVar7 + 0x58),*(void **)(iVar1 + 0x84),uVar9 << 5);
      *(uint *)(iVar7 + 0x54) = uVar9;
      local_64 = 0;
      if (uVar9 != 0) {
        local_4c = *(int *)(iVar7 + 0x30) << 5;
        do {
          local_30 = param_1[0x2b];
          local_34 = param_1[0x2a];
          uVar9 = (uint)*(short *)(iVar7 + 0x16);
          local_10 = param_1[0x2d];
          local_14 = param_1[0x2c];
          local_60 = uVar9;
          local_5c = FUN_006cb810(param_1,local_50,
                                  *(undefined4 *)(*(int *)(iVar7 + 0x34) + local_4c),param_4,
                                  param_5 + 1);
          if (local_5c != 0) goto LAB_006cbfeb;
          local_40 = *(int *)(iVar7 + 0x34) + local_4c;
          if ((*(ushort *)(local_40 + 4) & 0x200) == 0) {
            param_1[0x2a] = local_34;
            param_1[0x2b] = local_30;
            param_1[0x2c] = local_14;
            param_1[0x2d] = local_10;
          }
          local_54 = (int)*(short *)(iVar7 + 0x16) - uVar9;
          if ((*(byte *)(local_40 + 4) & 200) != 0) {
            uVar10 = *(int *)(iVar7 + 0x18) + uVar9 * 8;
            local_2c = uVar10 + local_54 * 8;
            uVar9 = local_60;
            if (uVar10 < local_2c) {
              do {
                FUN_00690500(uVar10,local_40 + 0x10);
                uVar10 = uVar10 + 8;
                uVar9 = local_60;
              } while (uVar10 < local_2c);
            }
          }
          if ((*(byte *)(local_40 + 4) & 2) == 0) {
            uVar5 = local_58 + *(int *)(local_40 + 8);
            if ((uVar9 <= uVar5) || (local_54 <= *(uint *)(local_40 + 0xc))) {
              __security_check_cookie(local_4 ^ (uint)&local_64);
              return;
            }
            iVar4 = *(int *)(iVar7 + 0x18);
            iVar8 = *(uint *)(local_40 + 0xc) + uVar9 + local_58;
            uVar10 = *(int *)(iVar4 + uVar5 * 8) - *(int *)(iVar4 + iVar8 * 8);
            uVar9 = *(int *)(iVar4 + 4 + uVar5 * 8) - *(int *)(iVar4 + 4 + iVar8 * 8);
          }
          else {
            iVar4 = FUN_0068ebc0(*(undefined4 *)(local_40 + 8),param_1[4]);
            uVar10 = iVar4 + param_1[5] + 0x20U & 0xffffffc0;
            iVar4 = FUN_0068ebc0(*(undefined4 *)(local_40 + 0xc),param_1[6]);
            uVar9 = iVar4 + 0x20 + param_1[7] & 0xffffffc0;
          }
          local_20 = *(undefined4 *)(iVar7 + 0x1c);
          local_1c = *(undefined4 *)(iVar7 + 0x20);
          local_18 = *(undefined4 *)(iVar7 + 0x24);
          local_24 = *(int *)(iVar7 + 0x18) + local_60 * 8;
          _local_28 = CONCAT22((undefined2)local_54,(short)*(undefined4 *)(iVar7 + 0x14));
          FUN_006904c0(&local_28,uVar10,uVar9);
          local_4c = local_4c + 0x20;
          local_64 = local_64 + 1;
        } while (local_64 < local_48);
      }
    }
    else if (*(int *)(iVar1 + 0x48) == 0x6f75746c) {
      if ((char)param_1[0x23] != '\0') {
        FUN_006904c0(iVar1 + 0x6c,param_1[0x28],param_1[0x29]);
      }
      local_64 = (int)*(short *)(iVar1 + 0x6e) + 4;
      if (((local_64 == 0) ||
          ((uint)(*(short *)(iVar7 + 0x16) + 4 +
                 (int)*(short *)(iVar7 + 0x3a) + (int)*(short *)(iVar1 + 0x6e)) <=
           *(uint *)(iVar7 + 4))) &&
         ((*(short *)(iVar1 + 0x6c) == 0 ||
          ((uint)((int)*(short *)(iVar7 + 0x38) + (int)*(short *)(iVar7 + 0x14) +
                 (int)*(short *)(iVar1 + 0x6c)) <= *(uint *)(iVar7 + 8))))) {
        local_5c = 0;
      }
      else {
        local_5c = FUN_00693c40(iVar7,local_64,(int)*(short *)(iVar1 + 0x6c));
        if (local_5c != 0) goto LAB_006cbfeb;
      }
      memcpy(*(void **)(iVar7 + 0x3c),*(void **)(iVar1 + 0x70),*(short *)(iVar1 + 0x6e) * 8);
      memcpy(*(void **)(iVar7 + 0x44),*(void **)(iVar1 + 0x78),*(short *)(iVar1 + 0x6c) * 2);
      memcpy(*(void **)(iVar7 + 0x40),*(void **)(iVar1 + 0x74),(int)*(short *)(iVar1 + 0x6e));
      *(undefined2 *)(iVar7 + 0x3a) = *(undefined2 *)(iVar1 + 0x6e);
      *(undefined2 *)(iVar7 + 0x38) = *(undefined2 *)(iVar1 + 0x6c);
      param_1[0x2a] = param_1[5];
      param_1[0x2b] = param_1[7];
      iVar4 = FUN_0068ebc0(*(undefined4 *)(iVar1 + 0x28),param_1[4]);
      param_1[0x2c] = iVar4 + param_1[5];
      param_1[0x2d] = param_1[7];
      if (*(short *)(iVar1 + 0x6e) != 0) {
        if (*(code **)(*local_3c + 0x1c) != (code *)0x0) {
          (**(code **)(*local_3c + 0x1c))(param_1 + 3,iVar7 + 0x38,local_3c);
        }
        if (*(int *)(local_50 + 0x14) == 1) {
          iVar4 = param_1[0x2a];
          iVar8 = param_1[0x2c];
          param_1[0x2a] = param_1[0x20] + 0x20 + iVar4 & 0xffffffc0;
          param_1[0x2c] = param_1[0x21] + 0x20 + iVar8 & 0xffffffc0;
          *(int *)(iVar1 + 0x90) = param_1[0x2a] - iVar4;
          *(int *)(iVar1 + 0x94) = param_1[0x2c] - iVar8;
          FUN_0068f0c0(iVar7);
        }
        else {
          iVar4 = param_1[0x14];
          local_58 = iVar4 + -0x30 + param_1[0x12] * 0x30;
          if ((param_1[0x12] < 2) || ((*(byte *)(param_1 + 0x1d) & 4) != 0)) {
            iVar4 = param_1[0x2a];
            iVar8 = param_1[0x2c];
            uVar9 = iVar4 + 0x20U & 0xffffffc0;
            param_1[0x2a] = uVar9;
            param_1[0x2c] = iVar8 + 0x20U & 0xffffffc0;
            *(uint *)(iVar1 + 0x90) = uVar9 - iVar4;
            *(int *)(iVar1 + 0x94) = param_1[0x2c] - iVar8;
            FUN_0068f0c0(iVar7);
          }
          else {
            local_60 = *(uint *)(iVar4 + 4);
            local_50 = param_1[0x2c] - *(int *)(local_58 + 4);
            local_64 = *(uint *)(iVar4 + 8);
            iVar8 = local_64 - local_60;
            iVar4 = *(int *)(local_58 + 8) + local_50;
            if ((int)local_60 < 0x18) {
              iVar8 = iVar8 + -8;
            }
            if (local_50 < 0x18) {
              iVar4 = iVar4 + 8;
            }
            uVar9 = iVar8 + 0x20U & 0xffffffc0;
            local_54 = iVar4 + 0x20U & 0xffffffc0;
            param_1[0x2a] = uVar9;
            param_1[0x2c] = local_54;
            if (((int)local_64 <= (int)uVar9) && (0 < (int)local_60)) {
              param_1[0x2a] = uVar9 - 0x40;
            }
            if (((int)local_54 <= *(int *)(local_58 + 8)) && (0 < local_50)) {
              param_1[0x2c] = local_54 + 0x40;
            }
            *(int *)(iVar1 + 0x90) = param_1[0x2a] - iVar8;
            *(int *)(iVar1 + 0x94) = param_1[0x2c] - iVar4;
            FUN_0068f0c0(iVar7);
          }
        }
      }
    }
    else {
      local_5c = 7;
    }
    piVar2 = local_3c;
    if (param_5 == 0) {
      local_48 = *(int *)(iVar1 + 0x2c) - *(int *)(iVar1 + 0x20);
      local_44 = *(int *)(iVar1 + 0x30) - *(int *)(iVar1 + 0x24);
      local_48 = FUN_0068ebc0(local_48,local_3c[2]);
      local_44 = FUN_0068ebc0(local_44,piVar2[3]);
      if ((char)param_1[0x23] != '\0') {
        FUN_00690560(iVar7 + 0x14,param_1 + 0x24);
        FUN_00690500(&local_48,param_1 + 0x24);
      }
      if (param_1[0x2a] != 0) {
        FUN_006904c0(iVar7 + 0x14,-param_1[0x2a],0);
      }
      FUN_00690430(iVar7 + 0x14,&local_14);
      local_10 = local_10 & 0xffffffc0;
      local_c = local_c + 0x3f & 0xffffffc0;
      local_14 = local_14 & 0xffffffc0;
      local_8 = local_8 + 0x3f & 0xffffffc0;
      *(uint *)(iVar1 + 0x18) = local_c - local_14;
      *(uint *)(iVar1 + 0x20) = local_14;
      *(uint *)(iVar1 + 0x24) = local_8;
      *(uint *)(iVar1 + 0x1c) = local_8 - local_10;
      *(uint *)(iVar1 + 0x2c) = local_14 + local_48 & 0xffffffc0;
      *(uint *)(iVar1 + 0x30) = local_8 + local_44 & 0xffffffc0;
      if (((*(byte *)(*(int *)(iVar1 + 4) + 8) & 4) == 0) &&
         ((cVar3 = FUN_006c8670(), cVar3 == '\0' || ((char)piVar2[8] == '\0')))) {
        if (*(int *)(iVar1 + 0x28) != 0) {
          *(int *)(iVar1 + 0x28) = param_1[0x2c] - param_1[0x2a];
        }
      }
      else {
        uVar6 = FUN_0068ebc0(*(undefined4 *)(iVar1 + 0x28),piVar2[2]);
        *(undefined4 *)(iVar1 + 0x28) = uVar6;
        *(undefined4 *)(iVar1 + 0x90) = 0;
        *(undefined4 *)(iVar1 + 0x94) = 0;
      }
      iVar4 = FUN_0068ebc0(*(undefined4 *)(iVar1 + 0x34),piVar2[3]);
      piVar2 = local_38;
      *(uint *)(iVar1 + 0x28) = *(int *)(iVar1 + 0x28) + 0x20U & 0xffffffc0;
      *(uint *)(iVar1 + 0x34) = iVar4 + 0x20U & 0xffffffc0;
      FUN_0068f020(*local_38);
      iVar7 = FUN_00693e10(*piVar2,iVar7);
      if (iVar7 == 0) {
        iVar7 = *piVar2;
        *(undefined4 *)(iVar1 + 0x6c) = *(undefined4 *)(iVar7 + 0x14);
        *(undefined4 *)(iVar1 + 0x70) = *(undefined4 *)(iVar7 + 0x18);
        *(undefined4 *)(iVar1 + 0x74) = *(undefined4 *)(iVar7 + 0x1c);
        *(undefined4 *)(iVar1 + 0x78) = *(undefined4 *)(iVar7 + 0x20);
        *(undefined4 *)(iVar1 + 0x7c) = *(undefined4 *)(iVar7 + 0x24);
        *(undefined4 *)(iVar1 + 0x48) = 0x6f75746c;
        __security_check_cookie(local_4 ^ (uint)&local_64);
        return;
      }
    }
  }
LAB_006cbfeb:
  __security_check_cookie(local_4 ^ (uint)&local_64);
  return;
}


/* FUN_006cc610 @ 006cc610  kind=gamemisc  attributed-by=none  size=112 */

undefined4 FUN_006cc610(int param_1,char *param_2)

{
  FILE *_File;
  long lVar1;
  
  if (param_1 == 0) {
    return 0x28;
  }
  _File = fopen(param_2,"rb");
  if (_File == (FILE *)0x0) {
    return 1;
  }
  fseek(_File,0,2);
  lVar1 = ftell(_File);
  *(long *)(param_1 + 4) = lVar1;
  fseek(_File,0,0);
  *(FILE **)(param_1 + 0xc) = _File;
  *(char **)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 **)(param_1 + 0x14) = &LAB_006cc5c0;
  *(code **)(param_1 + 0x18) = FUN_006cc5a0;
  return 0;
}


/* FUN_006cc6c0 @ 006cc6c0  kind=gamemisc  attributed-by=none  size=58 */

void FUN_006cc6c0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}


/* FUN_006cc700 @ 006cc700  kind=gamemisc  attributed-by=none  size=224 */

int FUN_006cc700(undefined4 *param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  void *_Dst;
  int *piVar2;
  int *piVar3;
  int iVar4;
  size_t _Size;
  
  piVar3 = param_3;
  piVar2 = param_2;
  uVar1 = *param_1;
  iVar4 = param_2[2];
  param_1 = (undefined4 *)0x0;
  if (param_2 == param_3) {
    return 0;
  }
  if (param_2[3] == 0) {
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    param_3[2] = param_2[2];
    param_3[3] = param_2[3];
    param_3[4] = param_2[4];
    param_3[5] = param_2[5];
    return 0;
  }
  if (iVar4 < 0) {
    iVar4 = -iVar4;
  }
  _Size = *param_2 * iVar4;
  if (param_3[3] == 0) {
    iVar4 = FUN_00691240(uVar1,_Size,&param_1);
  }
  else {
    iVar4 = param_3[2];
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    if (*param_3 * iVar4 - _Size == 0) goto LAB_006cc7a1;
    iVar4 = FUN_00692290(uVar1,1,*param_3 * iVar4,_Size,param_3[3],&param_1);
  }
  piVar3[3] = iVar4;
  if (param_1 != (undefined4 *)0x0) {
    return (int)param_1;
  }
LAB_006cc7a1:
  _Dst = (void *)piVar3[3];
  *piVar3 = *piVar2;
  piVar3[1] = piVar2[1];
  piVar3[2] = piVar2[2];
  piVar3[3] = piVar2[3];
  piVar3[4] = piVar2[4];
  piVar3[5] = piVar2[5];
  piVar3[3] = (int)_Dst;
  memcpy(_Dst,(void *)piVar2[3],_Size);
  return (int)param_1;
}


/* FUN_006cc850 @ 006cc850  kind=gamemisc  attributed-by=none  size=57 */

int FUN_006cc850(void)

{
  int iVar1;
  undefined2 in_CX;
  
  iVar1 = FUN_006908c0();
  if (iVar1 == 0) {
    iVar1 = FUN_00691ec0();
    if ((iVar1 == 0) && (((char)in_CX != '\x1f' || ((char)((ushort)in_CX >> 8) != -99)))) {
      iVar1 = 3;
    }
  }
  return iVar1;
}


/* FUN_006cc8e0 @ 006cc8e0  kind=gamemisc  attributed-by=none  size=197 */

uint FUN_006cc8e0(void)

{
  byte *pbVar1;
  byte bVar2;
  int in_EAX;
  int iVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  
  uVar5 = *(uint *)(in_EAX + 0x18);
  uVar8 = *(uint *)(in_EAX + 0x34);
  if (((*(char *)(in_EAX + 0x20) != '\0') || (*(int *)(in_EAX + 0x1c) <= (int)uVar5)) ||
     (*(uint *)(in_EAX + 0x3c) <= *(uint *)(in_EAX + 0x38))) {
    if (*(uint *)(in_EAX + 0x3c) <= *(uint *)(in_EAX + 0x38)) {
      uVar8 = uVar8 + 1;
      *(uint *)(in_EAX + 0x34) = uVar8;
      if (uVar8 < *(uint *)(in_EAX + 0x28)) {
        iVar3 = (1 << ((byte)uVar8 & 0x1f)) + -0x100;
      }
      else {
        iVar3 = *(int *)(in_EAX + 0x30) + 1;
      }
      *(int *)(in_EAX + 0x3c) = iVar3;
    }
    if (*(char *)(in_EAX + 0x20) != '\0') {
      uVar8 = 9;
      *(undefined4 *)(in_EAX + 0x34) = 9;
      *(undefined4 *)(in_EAX + 0x3c) = 0x100;
      *(undefined1 *)(in_EAX + 0x20) = 0;
    }
    iVar3 = FUN_006cc890();
    if (iVar3 < 0) {
      return 0xffffffff;
    }
    uVar5 = 0;
  }
  pbVar1 = (byte *)(((int)uVar5 >> 3) + 8 + in_EAX);
  *(uint *)(in_EAX + 0x18) = uVar5 + uVar8;
  iVar3 = -(uVar5 & 7);
  iVar7 = iVar3 + 8;
  uVar8 = uVar8 - iVar7;
  uVar5 = (uint)(*pbVar1 >> (sbyte)(uVar5 & 7));
  pbVar6 = pbVar1 + 1;
  if (7 < uVar8) {
    bVar2 = *pbVar6;
    bVar4 = (byte)iVar7;
    pbVar6 = pbVar1 + 2;
    iVar7 = iVar3 + 0x10;
    uVar5 = uVar5 | (uint)bVar2 << (bVar4 & 0x1f);
    uVar8 = uVar8 - 8;
  }
  if (uVar8 != 0) {
    uVar5 = uVar5 | ((1 << ((byte)uVar8 & 0x1f)) - 1U & (uint)*pbVar6) << ((byte)iVar7 & 0x1f);
  }
  return uVar5;
}


/* FUN_006cc9b0 @ 006cc9b0  kind=gamemisc  attributed-by=none  size=87 */

undefined4 FUN_006cc9b0(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int unaff_ESI;
  int local_4;
  
  uVar2 = *(uint *)(unaff_ESI + 0x60);
  if (uVar2 <= *(uint *)(unaff_ESI + 0x5c)) {
    iVar1 = (uVar2 >> 1) + 4 + uVar2;
    if (*(int *)(unaff_ESI + 0x58) == unaff_ESI + 100) {
      *(undefined4 *)(unaff_ESI + 0x58) = 0;
      uVar2 = 0;
    }
    uVar3 = FUN_00693a60(*(undefined4 *)(unaff_ESI + 0xa8),1,uVar2,iVar1,
                         *(undefined4 *)(unaff_ESI + 0x58),&local_4);
    *(undefined4 *)(unaff_ESI + 0x58) = uVar3;
    if (local_4 != 0) {
      return 0xffffffff;
    }
    *(int *)(unaff_ESI + 0x60) = iVar1;
  }
  return 0;
}


/* FUN_006cca10 @ 006cca10  kind=gamemisc  attributed-by=none  size=98 */

undefined4 FUN_006cca10(void)

{
  void *_Dst;
  uint _Size;
  int iVar1;
  int iVar2;
  int unaff_ESI;
  int local_4;
  
  _Size = *(uint *)(unaff_ESI + 0x54);
  if (_Size == 0) {
    iVar2 = 0x200;
  }
  else {
    iVar2 = (_Size >> 2) + _Size;
  }
  iVar1 = FUN_00693a60(*(undefined4 *)(unaff_ESI + 0xa8),3,_Size,iVar2,
                       *(undefined4 *)(unaff_ESI + 0x4c),&local_4);
  *(int *)(unaff_ESI + 0x4c) = iVar1;
  if (local_4 != 0) {
    return 0xffffffff;
  }
  _Dst = (void *)(iVar1 + iVar2 * 2);
  *(void **)(unaff_ESI + 0x50) = _Dst;
  memmove(_Dst,(void *)(iVar1 + _Size * 2),_Size);
  *(int *)(unaff_ESI + 0x54) = iVar2;
  return 0;
}


/* FUN_006cca80 @ 006cca80  kind=gamemisc  attributed-by=none  size=34 */

void FUN_006cca80(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[0x17] = 0;
  param_1[0xd] = 9;
  *param_1 = 0;
  return;
}


/* FUN_006ccb10 @ 006ccb10  kind=gamemisc  attributed-by=none  size=91 */

void FUN_006ccb10(void *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0xa8);
  FUN_006cca80(param_1);
  if (*(int *)((int)param_1 + 0x58) != (int)param_1 + 100) {
    FUN_00691290(uVar1,*(int *)((int)param_1 + 0x58));
    *(undefined4 *)((int)param_1 + 0x58) = 0;
  }
  FUN_00691290(uVar1,*(undefined4 *)((int)param_1 + 0x4c));
  *(undefined4 *)((int)param_1 + 0x4c) = 0;
  *(undefined4 *)((int)param_1 + 0x50) = 0;
  memset(param_1,0,0xac);
  return;
}


/* FUN_006ccb70 @ 006ccb70  kind=gamemisc  attributed-by=none  size=668 */

uint FUN_006ccb70(int *param_1,undefined1 *param_2,uint param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint local_c;
  uint local_8;
  uint local_4;
  
  uVar4 = param_3;
  piVar2 = param_1;
  local_8 = param_1[0x11];
  uVar1 = param_1[0x10];
  local_4 = param_1[0x12];
  uVar7 = 0;
  local_c = uVar1;
  if (param_3 != 0) {
    iVar5 = *param_1;
    if (iVar5 == 0) {
      iVar5 = FUN_006908c0(param_1[0x29],2);
      if ((iVar5 == 0) && (iVar5 = FUN_006909c0(piVar2[0x29],&param_1,1), iVar5 == 1)) {
        uVar6 = (uint)param_1 & 0x1f;
        iVar5 = 1 << (sbyte)uVar6;
        piVar2[10] = uVar6;
        piVar2[0xb] = (uint)param_1 & 0x80;
        piVar2[0xc] = iVar5 + -0x100;
        if (uVar6 < 0x11) {
          piVar2[0xd] = 9;
          local_4 = 0;
          iVar3 = 0x100;
          piVar2[0xe] = (uint)(((uint)param_1 & 0x80) != 0);
          if (uVar6 < 10) {
            iVar3 = iVar5 + -0xff;
          }
          piVar2[0xf] = iVar3;
          local_c = FUN_006cc8e0();
          if (-1 < (int)local_c) {
            if (param_2 != (undefined1 *)0x0) {
              *param_2 = (char)local_c;
            }
            uVar7 = 1;
            local_8 = local_c;
            if (1 < uVar4) {
              *piVar2 = 1;
              goto LAB_006ccc7b;
            }
            goto LAB_006ccdee;
          }
        }
      }
LAB_006ccde7:
      local_c = uVar1;
      *piVar2 = 3;
    }
    else {
      if (iVar5 == 1) goto LAB_006ccc7b;
      if (iVar5 == 2) {
        do {
          iVar5 = piVar2[0x17];
          while (iVar5 != 0) {
            piVar2[0x17] = piVar2[0x17] + -1;
            if (param_2 != (undefined1 *)0x0) {
              param_2[uVar7] = *(undefined1 *)(piVar2[0x17] + piVar2[0x16]);
            }
            uVar7 = uVar7 + 1;
            if (uVar7 == param_3) goto LAB_006ccdee;
            iVar5 = piVar2[0x17];
          }
          if ((uint)piVar2[0xe] < (uint)piVar2[0xc]) {
            if (((uint)piVar2[0x15] <= (uint)piVar2[0xe]) &&
               (iVar5 = FUN_006cca10(), uVar1 = local_c, iVar5 < 0)) goto LAB_006ccde7;
            *(undefined2 *)(piVar2[0x13] + piVar2[0xe] * 2) = (undefined2)local_c;
            *(undefined1 *)(piVar2[0x14] + piVar2[0xe]) = (undefined1)local_8;
            piVar2[0xe] = piVar2[0xe] + 1;
          }
          local_c = local_4;
          *piVar2 = 1;
LAB_006ccc7b:
          uVar4 = FUN_006cc8e0();
          uVar1 = local_c;
          if ((int)uVar4 < 0) goto LAB_006ccde7;
          if ((uVar4 == 0x100) && (piVar2[0xb] != 0)) {
            piVar2[0xe] = 0;
            *(undefined1 *)(piVar2 + 8) = 1;
            uVar4 = FUN_006cc8e0();
            if ((int)uVar4 < 0) goto LAB_006ccde7;
          }
          local_4 = uVar4;
          if (0xff < uVar4) {
            if ((uint)piVar2[0xe] <= uVar4 - 0x100) {
              if (((uint)piVar2[0x18] <= (uint)piVar2[0x17]) && (iVar5 = FUN_006cc9b0(), iVar5 < 0))
              goto LAB_006ccde7;
              *(undefined1 *)(piVar2[0x16] + piVar2[0x17]) = (undefined1)local_8;
              piVar2[0x17] = piVar2[0x17] + 1;
              uVar4 = local_c;
            }
            for (; 0xff < uVar4; uVar4 = (uint)*(ushort *)(piVar2[0x13] + -0x200 + uVar4 * 2)) {
              if ((piVar2[0x13] == 0) ||
                 (((uint)piVar2[0x18] <= (uint)piVar2[0x17] && (iVar5 = FUN_006cc9b0(), iVar5 < 0)))
                 ) goto LAB_006ccde7;
              *(undefined1 *)(piVar2[0x16] + piVar2[0x17]) =
                   *(undefined1 *)(piVar2[0x14] + -0x100 + uVar4);
              piVar2[0x17] = piVar2[0x17] + 1;
            }
          }
          local_8 = uVar4;
          if (((uint)piVar2[0x18] <= (uint)piVar2[0x17]) && (iVar5 = FUN_006cc9b0(), iVar5 < 0))
          goto LAB_006ccde7;
          *(char *)(piVar2[0x16] + piVar2[0x17]) = (char)uVar4;
          piVar2[0x17] = piVar2[0x17] + 1;
          *piVar2 = 2;
        } while( true );
      }
    }
  }
LAB_006ccdee:
  piVar2[0x11] = local_8;
  piVar2[0x10] = local_c;
  piVar2[0x12] = local_4;
  return uVar7;
}


/* FUN_006ccf00 @ 006ccf00  kind=gamemisc  attributed-by=none  size=104 */

undefined4 FUN_006ccf00(void)

{
  uint in_EAX;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int unaff_EDI;
  
  uVar1 = *(int *)(unaff_EDI + 0x10c0) - *(int *)(unaff_EDI + 0x10bc);
  if (in_EAX <= uVar1) {
    uVar1 = in_EAX;
  }
  *(int *)(unaff_EDI + 0x10b8) = *(int *)(unaff_EDI + 0x10b8) + uVar1;
  uVar3 = in_EAX - uVar1;
  *(uint *)(unaff_EDI + 0x10bc) = *(int *)(unaff_EDI + 0x10bc) + uVar1;
  if (uVar3 != 0) {
    while( true ) {
      uVar1 = 0x1000;
      if (uVar3 < 0x1000) {
        uVar1 = uVar3;
      }
      uVar2 = FUN_006ccb70(unaff_EDI + 0xc,0,uVar1);
      if (uVar2 < uVar1) break;
      *(int *)(unaff_EDI + 0x10b8) = *(int *)(unaff_EDI + 0x10b8) + uVar1;
      uVar3 = uVar3 - uVar1;
      if (uVar3 == 0) {
        return 0;
      }
    }
    return 0x55;
  }
  return 0;
}


/* FUN_006cd080 @ 006cd080  kind=gamemisc  attributed-by=none  size=170 */

int FUN_006cd080(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  param_2 = FUN_006cc850();
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
    uVar2 = FUN_00692230(uVar1,0x10c4,&param_2);
    if (param_2 == 0) {
      param_2 = FUN_006cce10();
      if (param_2 != 0) {
        FUN_00691290(uVar1,uVar2);
        return param_2;
      }
      param_1[3] = uVar2;
      param_2 = 0;
    }
    param_1[1] = 0x7fffffff;
    param_1[2] = 0;
    *param_1 = 0;
    param_1[5] = &LAB_006cd060;
    param_1[6] = FUN_006cd030;
  }
  return param_2;
}


/* FUN_006cd130 @ 006cd130  kind=gamemisc  attributed-by=none  size=1240 */

/* WARNING: Type propagation algorithm not settling */

void FUN_006cd130(undefined4 *param_1,undefined4 ***param_2,int param_3,int param_4,
                 undefined4 *param_5,undefined4 ****param_6,uint *param_7,uint *param_8)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 **ppuVar3;
  uint uVar4;
  uint uVar5;
  int *in_ECX;
  undefined4 ***pppuVar6;
  undefined4 ***pppuVar7;
  int iVar8;
  int *piVar9;
  undefined4 ****ppppuVar10;
  int in_EDX;
  byte bVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  uint uVar15;
  undefined4 ***pppuVar16;
  undefined4 ***local_110;
  undefined4 **local_10c;
  uint *local_108;
  undefined4 ***local_104;
  int local_100;
  undefined4 ****local_fc;
  int *local_f8;
  undefined4 *local_f4;
  undefined4 ***local_f0;
  undefined4 *local_ec;
  int local_e8;
  undefined4 local_e4;
  uint local_dc;
  uint *local_d8;
  uint *local_d4;
  undefined4 *local_d0;
  int local_c8;
  undefined4 *****local_c4 [16];
  undefined4 **local_84 [18];
  int aiStack_3c [14];
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_110;
  local_d0 = param_5;
  local_d4 = param_7;
  local_ec = param_1;
  local_fc = param_6;
  local_d8 = param_8;
  pppuVar16 = (undefined4 ***)0x0;
  local_84[0] = (undefined4 **)0x0;
  local_84[1] = (undefined4 **)0x0;
  local_84[2] = (undefined4 **)0x0;
  local_84[3] = (undefined4 **)0x0;
  local_84[4] = (undefined4 **)0x0;
  local_84[5] = (undefined4 **)0x0;
  local_84[6] = (undefined4 **)0x0;
  local_84[7] = (undefined4 **)0x0;
  local_84[8] = (undefined4 **)0x0;
  local_84[9] = (undefined4 **)0x0;
  local_84[10] = (undefined4 **)0x0;
  local_84[0xb] = (undefined4 **)0x0;
  local_84[0xc] = (undefined4 **)0x0;
  local_84[0xd] = (undefined4 **)0x0;
  local_84[0xe] = (undefined4 **)0x0;
  local_84[0xf] = (undefined4 **)0x0;
  piVar9 = in_ECX;
  puVar13 = param_1;
  do {
    iVar14 = *piVar9;
    local_84[iVar14] = (undefined4 **)((int)local_84[iVar14] + 1);
    pppuVar6 = local_84 + iVar14;
    piVar9 = piVar9 + 1;
    puVar13 = (undefined4 *)((int)puVar13 + -1);
  } while (puVar13 != (undefined4 *)0x0);
  iVar14 = local_100;
  if (local_84[0] == (undefined4 **)param_1) {
    *param_5 = 0;
    *param_6 = (undefined4 ***)0x0;
    local_f8 = in_ECX;
  }
  else {
    pppuVar6 = (undefined4 ***)0x1;
    do {
      if (local_84[(int)pppuVar6] != (undefined4 **)0x0) break;
      pppuVar6 = (undefined4 ***)((int)pppuVar6 + 1);
    } while (pppuVar6 < (undefined4 ***)0x10);
    local_110 = *param_6;
    if (*param_6 < pppuVar6) {
      local_110 = pppuVar6;
    }
    local_f0 = (undefined4 ***)0xf;
    do {
      if (local_84[(int)local_f0] != (undefined4 **)0x0) break;
      local_f0 = (undefined4 ***)((int)local_f0 + -1);
    } while (local_f0 != (undefined4 ***)0x0);
    if (local_f0 < local_110) {
      local_110 = local_f0;
    }
    *param_6 = local_110;
    iVar12 = 1 << ((byte)pppuVar6 & 0x1f);
    for (pppuVar7 = pppuVar6; local_104 = pppuVar6, pppuVar7 < local_f0;
        pppuVar7 = (undefined4 ***)((int)pppuVar7 + 1)) {
      local_f8 = in_ECX;
      if (iVar12 - (int)local_84[(int)pppuVar7] < 0) goto LAB_006cd5f9;
      iVar12 = (iVar12 - (int)local_84[(int)pppuVar7]) * 2;
    }
    local_10c = (undefined4 **)((int)local_f0 * 4);
    local_c8 = iVar12 - (int)local_84[(int)local_f0];
    local_f8 = in_ECX;
    if (-1 < local_c8) {
      local_84[(int)local_f0] = (undefined4 **)((int)local_84[(int)local_f0] + local_c8);
      iVar14 = (int)local_f0 + -1;
      local_84[0x11] = (undefined4 **)0x0;
      if (iVar14 != 0) {
        iVar8 = 0;
        iVar12 = 0;
        do {
          iVar8 = iVar8 + *(int *)((int)local_84 + iVar12 + 4U);
          iVar14 = iVar14 + -1;
          *(int *)((int)aiStack_3c + iVar12) = iVar8;
          iVar12 = iVar12 + 4;
        } while (iVar14 != 0);
      }
      puVar13 = (undefined4 *)0x0;
      piVar9 = in_ECX;
      do {
        iVar14 = *piVar9;
        piVar9 = piVar9 + 1;
        if (iVar14 != 0) {
          puVar1 = local_84[iVar14 + 0x10];
          param_8[(int)puVar1] = (uint)puVar13;
          local_84[iVar14 + 0x10] = (undefined4 **)((int)puVar1 + 1);
        }
        puVar13 = (undefined4 *)((int)puVar13 + 1);
      } while (puVar13 < param_1);
      local_ec = local_84[(int)(local_f0 + 4)];
      iVar12 = -(int)local_110;
      uVar15 = 0;
      local_f4 = (undefined4 *)0x0;
      local_84[0x10] = (undefined4 **)0x0;
      local_108 = param_8;
      local_100 = -1;
      local_c4[1] = (undefined4 *****)0x0;
      local_fc = (undefined4 ****)0x0;
      iVar14 = local_100;
      local_f8 = in_ECX;
      if ((int)pppuVar6 <= (int)local_f0) {
        local_10c = local_84 + (int)pppuVar6;
        do {
          piVar9 = *local_10c;
          if (piVar9 != (int *)0x0) {
            local_dc = (int)piVar9 + 1;
            do {
              local_dc = local_dc - 1;
              piVar9 = (int *)((int)piVar9 + -1);
              local_f8 = piVar9;
              if (iVar12 + (int)local_110 < (int)local_104) {
                local_e8 = iVar12 - (int)local_110;
                iVar8 = iVar12 + (int)local_110;
                do {
                  iVar12 = iVar8;
                  iVar14 = local_100 + 1;
                  local_e8 = local_e8 + (int)local_110;
                  pppuVar6 = (undefined4 ***)((int)local_f0 - iVar12);
                  if (local_110 < (undefined4 ***)((int)local_f0 - iVar12)) {
                    pppuVar6 = local_110;
                  }
                  pppuVar7 = (undefined4 ***)((int)local_104 - iVar12);
                  uVar15 = 1 << ((byte)pppuVar7 & 0x1f);
                  if ((local_dc < uVar15) &&
                     (iVar8 = uVar15 + (-1 - (int)piVar9), ppuVar3 = local_10c, pppuVar7 < pppuVar6)
                     ) {
                    while (pppuVar7 = (undefined4 ***)((int)pppuVar7 + 1), pppuVar7 < pppuVar6) {
                      if ((undefined4 *)(iVar8 * 2) <= ppuVar3[1]) break;
                      iVar8 = iVar8 * 2 - (int)ppuVar3[1];
                      ppuVar3 = ppuVar3 + 1;
                    }
                  }
                  uVar15 = 1 << ((byte)pppuVar7 & 0x1f);
                  pppuVar6 = (undefined4 ***)(*param_7 + uVar15);
                  if ((undefined4 ***)0x5a0 < pppuVar6) goto LAB_006cd5f9;
                  local_fc = (undefined4 ****)(in_EDX + *param_7 * 8);
                  local_c4[0] = local_c4 + local_100 + 2;
                  local_c4[local_100 + 2] = (undefined4 *****)local_fc;
                  *param_7 = (uint)pppuVar6;
                  if (iVar14 == 0) {
                    *param_5 = local_fc;
                  }
                  else {
                    local_84[local_100 + 0x11] = (undefined4 **)local_f4;
                    uVar4 = (uint)local_f4 >> ((byte)local_e8 & 0x1f);
                    ppppuVar10 = local_c4[iVar14];
                    local_e4._0_2_ = CONCAT11(local_110._0_1_,(byte)pppuVar7);
                    pppuVar16 = (undefined4 ***)(((int)local_fc - (int)ppppuVar10 >> 3) - uVar4);
                    ppppuVar10[uVar4 * 2] = local_e4;
                    ppppuVar10[uVar4 * 2 + 1] = pppuVar16;
                  }
                  iVar8 = iVar12 + (int)local_110;
                  local_100 = iVar14;
                } while (iVar12 + (int)local_110 < (int)local_104);
              }
              cVar2 = (char)local_104;
              bVar11 = (byte)iVar12;
              if (local_108 < param_8 + (int)local_ec) {
                pppuVar16 = (undefined4 ***)*local_108;
                if (pppuVar16 < param_2) {
                  local_e4._0_1_ = (-(pppuVar16 < (undefined4 ***)0x100) & 0xa0U) + 0x60;
                }
                else {
                  iVar14 = ((int)pppuVar16 - (int)param_2) * 4;
                  local_e4._0_1_ = *(char *)(iVar14 + param_4) + 'P';
                  pppuVar16 = *(undefined4 ****)(iVar14 + param_3);
                }
                local_108 = local_108 + 1;
              }
              else {
                local_e4._0_1_ = -0x40;
              }
              local_e4 = (undefined4 ***)
                         CONCAT31(CONCAT21(local_e4._2_2_,cVar2 - bVar11),(char)local_e4);
              iVar14 = 1 << (cVar2 - bVar11 & 0x1f);
              uVar4 = (uint)local_f4 >> (bVar11 & 0x1f);
              if (uVar4 < uVar15) {
                ppppuVar10 = local_fc + uVar4 * 2;
                do {
                  *ppppuVar10 = local_e4;
                  ppppuVar10[1] = pppuVar16;
                  uVar4 = uVar4 + iVar14;
                  ppppuVar10 = ppppuVar10 + iVar14 * 2;
                } while (uVar4 < uVar15);
              }
              uVar5 = 1 << (cVar2 - 1U & 0x1f);
              uVar4 = (uint)local_f4 & uVar5;
              while (uVar4 != 0) {
                local_f4 = (undefined4 *)((uint)local_f4 ^ uVar5);
                uVar5 = uVar5 >> 1;
                uVar4 = (uint)local_f4 & uVar5;
              }
              local_f4 = (undefined4 *)((uint)local_f4 ^ uVar5);
              if ((undefined4 **)((1 << (bVar11 & 0x1f)) - 1U & (uint)local_f4) !=
                  local_84[local_100 + 0x10]) {
                do {
                  iVar12 = iVar12 - (int)local_110;
                  iVar8 = local_100 + -1;
                  iVar14 = local_100 + 0xf;
                  local_100 = iVar8;
                } while ((undefined4 **)((1 << ((byte)iVar12 & 0x1f)) - 1U & (uint)local_f4) !=
                         local_84[iVar14]);
              }
            } while (piVar9 != (int *)0x0);
          }
          local_10c = local_10c + 1;
          pppuVar6 = (undefined4 ***)((int)local_104 + 1);
          local_104 = pppuVar6;
          iVar14 = local_100;
        } while ((int)pppuVar6 <= (int)local_f0);
      }
    }
  }
LAB_006cd5f9:
  local_100 = iVar14;
  __security_check_cookie(local_4 ^ (uint)&local_110,pppuVar6);
  return;
}


/* FUN_006cd870 @ 006cd870  kind=gamemisc  attributed-by=none  size=228 */

int FUN_006cd870(int param_1)

{
  void *_Src;
  uint uVar1;
  undefined4 uVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  int unaff_ESI;
  int unaff_EDI;
  undefined4 local_4;
  
  local_4 = *(void **)(unaff_EDI + 0xc);
  pvVar3 = *(void **)(unaff_ESI + 0x34);
  _Src = *(void **)(unaff_ESI + 0x30);
  if (pvVar3 < _Src) {
    pvVar3 = *(void **)(unaff_ESI + 0x2c);
  }
  uVar1 = *(uint *)(unaff_EDI + 0x10);
  uVar4 = (int)pvVar3 - (int)_Src;
  if (uVar1 < (uint)((int)pvVar3 - (int)_Src)) {
    uVar4 = uVar1;
  }
  if ((uVar4 != 0) && (param_1 == -5)) {
    param_1 = 0;
  }
  *(int *)(unaff_EDI + 0x14) = *(int *)(unaff_EDI + 0x14) + uVar4;
  *(uint *)(unaff_EDI + 0x10) = uVar1 - uVar4;
  if (*(code **)(unaff_ESI + 0x38) != (code *)0x0) {
    uVar2 = (**(code **)(unaff_ESI + 0x38))(*(undefined4 *)(unaff_ESI + 0x3c),_Src,uVar4);
    *(undefined4 *)(unaff_ESI + 0x3c) = uVar2;
    *(undefined4 *)(unaff_EDI + 0x30) = uVar2;
  }
  memcpy(local_4,_Src,uVar4);
  local_4 = (void *)((int)local_4 + uVar4);
  iVar5 = (int)_Src + uVar4;
  if (iVar5 == *(int *)(unaff_ESI + 0x2c)) {
    pvVar3 = *(void **)(unaff_ESI + 0x28);
    if (*(int *)(unaff_ESI + 0x34) == *(int *)(unaff_ESI + 0x2c)) {
      *(void **)(unaff_ESI + 0x34) = pvVar3;
    }
    uVar1 = *(uint *)(unaff_EDI + 0x10);
    uVar4 = *(int *)(unaff_ESI + 0x34) - (int)pvVar3;
    if (uVar1 < uVar4) {
      uVar4 = uVar1;
    }
    if ((uVar4 != 0) && (param_1 == -5)) {
      param_1 = 0;
    }
    *(int *)(unaff_EDI + 0x14) = *(int *)(unaff_EDI + 0x14) + uVar4;
    *(uint *)(unaff_EDI + 0x10) = uVar1 - uVar4;
    if (*(code **)(unaff_ESI + 0x38) != (code *)0x0) {
      uVar2 = (**(code **)(unaff_ESI + 0x38))(*(undefined4 *)(unaff_ESI + 0x3c),pvVar3,uVar4);
      *(undefined4 *)(unaff_ESI + 0x3c) = uVar2;
      *(undefined4 *)(unaff_EDI + 0x30) = uVar2;
    }
    memcpy(local_4,pvVar3,uVar4);
    local_4 = (void *)((int)local_4 + uVar4);
    iVar5 = (int)pvVar3 + uVar4;
  }
  *(void **)(unaff_EDI + 0xc) = local_4;
  *(int *)(unaff_ESI + 0x30) = iVar5;
  return param_1;
}


/* FUN_006cdf40 @ 006cdf40  kind=gamemisc  attributed-by=none  size=106 */

void FUN_006cdf40(void)

{
  int *in_EAX;
  int iVar1;
  int *unaff_ESI;
  int unaff_EDI;
  
  if (in_EAX != (int *)0x0) {
    *in_EAX = unaff_ESI[0xf];
  }
  if ((*unaff_ESI == 4) || (*unaff_ESI == 5)) {
    (**(code **)(unaff_EDI + 0x24))(*(undefined4 *)(unaff_EDI + 0x28),unaff_ESI[3]);
  }
  if (*unaff_ESI == 6) {
    FUN_006cdf30();
  }
  unaff_ESI[0xd] = unaff_ESI[10];
  unaff_ESI[0xc] = unaff_ESI[10];
  *unaff_ESI = 0;
  unaff_ESI[7] = 0;
  unaff_ESI[8] = 0;
  if ((code *)unaff_ESI[0xe] != (code *)0x0) {
    iVar1 = (*(code *)unaff_ESI[0xe])(0,0,0);
    unaff_ESI[0xf] = iVar1;
    *(int *)(unaff_EDI + 0x30) = iVar1;
  }
  return;
}


/* FUN_006cdfb0 @ 006cdfb0  kind=gamemisc  attributed-by=none  size=153 */

undefined4 * FUN_006cdfb0(undefined4 param_1)

{
  int in_EAX;
  undefined4 *puVar1;
  int iVar2;
  int unaff_EBX;
  
  puVar1 = (undefined4 *)(**(code **)(in_EAX + 0x20))(*(undefined4 *)(in_EAX + 0x28),1,0x40);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (**(code **)(in_EAX + 0x20))(*(undefined4 *)(in_EAX + 0x28),8,0x5a0);
    puVar1[9] = iVar2;
    if (iVar2 != 0) {
      iVar2 = (**(code **)(in_EAX + 0x20))(*(undefined4 *)(in_EAX + 0x28),1);
      puVar1[10] = iVar2;
      if (iVar2 == 0) {
        (**(code **)(in_EAX + 0x24))(*(undefined4 *)(in_EAX + 0x28),puVar1[9]);
        (**(code **)(in_EAX + 0x24))(*(undefined4 *)(in_EAX + 0x28),puVar1);
        return (undefined4 *)0x0;
      }
      puVar1[0xb] = iVar2 + unaff_EBX;
      puVar1[0xe] = param_1;
      *puVar1 = 0;
      FUN_006cdf40();
      return puVar1;
    }
    (**(code **)(in_EAX + 0x24))(*(undefined4 *)(in_EAX + 0x28),puVar1);
  }
  return (undefined4 *)0x0;
}


/* thunk_FUN_006cf090 @ 006cf0c0  kind=gamemisc  attributed-by=none  size=5 */

void thunk_FUN_006cf090(undefined4 param_1,int param_2,int param_3)

{
  FUN_00692230(param_1,param_2 * param_3,&param_2);
  return;
}


/* FUN_006cf0e0 @ 006cf0e0  kind=gamemisc  attributed-by=none  size=322 */

/* WARNING: Removing unreachable block (ram,0x006cf1ff) */
/* WARNING: Removing unreachable block (ram,0x006cf1c0) */

int FUN_006cf0e0(void)

{
  char cVar1;
  int iVar2;
  undefined4 local_4;
  
  iVar2 = FUN_006908c0();
  if ((iVar2 == 0) && (iVar2 = FUN_00691ec0(), iVar2 == 0)) {
    if (((char)local_4 == '\x1f') &&
       ((((char)(local_4 >> 8) == -0x75 && (local_4._2_1_ == '\b')) && ((local_4 & 0xe0000000) == 0)
        ))) {
      iVar2 = FUN_00690900();
      if (((local_4 & 0x4000000) == 0) ||
         ((FUN_00690bf0(), iVar2 == 0 && (iVar2 = FUN_00690900(), iVar2 == 0)))) {
        if ((local_4 & 0x8000000) != 0) {
          cVar1 = FUN_00690b20();
          if (iVar2 != 0) {
            return iVar2;
          }
          while (cVar1 != '\0') {
            cVar1 = FUN_00690b20();
          }
        }
        if ((local_4 & 0x10000000) != 0) {
          cVar1 = FUN_00690b20();
          if (iVar2 != 0) {
            return iVar2;
          }
          while (cVar1 != '\0') {
            cVar1 = FUN_00690b20();
          }
        }
        if ((local_4 & 0x2000000) != 0) {
          iVar2 = FUN_00690900();
          return iVar2;
        }
      }
    }
    else {
      iVar2 = 3;
    }
  }
  return iVar2;
}


/* FUN_006cf2b0 @ 006cf2b0  kind=gamemisc  attributed-by=none  size=114 */

undefined4 FUN_006cf2b0(int *param_1)

{
  int *piVar1;
  size_t _Size;
  
  piVar1 = (int *)*param_1;
  if ((code *)piVar1[5] == (code *)0x0) {
    _Size = piVar1[1] - piVar1[2];
    if (_Size < 0x1001) {
      if (_Size == 0) {
        return 0x55;
      }
    }
    else {
      _Size = 0x1000;
    }
    memcpy(param_1 + 0x12,(void *)(*piVar1 + piVar1[2]),_Size);
  }
  else {
    _Size = (*(code *)piVar1[5])(piVar1,piVar1[2],param_1 + 0x12,0x1000);
    if (_Size == 0) {
      return 0x55;
    }
  }
  piVar1[2] = piVar1[2] + _Size;
  param_1[4] = _Size;
  param_1[3] = (int)(param_1 + 0x12);
  return 0;
}


/* FUN_006cf330 @ 006cf330  kind=gamemisc  attributed-by=none  size=110 */

int FUN_006cf330(void)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  *(int *)(unaff_EDI + 0x204c) = unaff_EDI + 0x1048;
  *(int *)(unaff_EDI + 0x18) = unaff_EDI + 0x1048;
  *(undefined4 *)(unaff_EDI + 0x1c) = 0x1000;
  iVar2 = 0;
  while( true ) {
    if ((*(int *)(unaff_EDI + 0x10) == 0) && (iVar2 = FUN_006cf2b0(), iVar2 != 0)) {
      return iVar2;
    }
    iVar1 = FUN_006ceb90(0);
    if (iVar1 == 1) {
      *(int *)(unaff_EDI + 0x2050) = *(int *)(unaff_EDI + 0x18);
      if (*(int *)(unaff_EDI + 0x18) != *(int *)(unaff_EDI + 0x204c)) {
        return iVar2;
      }
      return 0x55;
    }
    if (iVar1 != 0) break;
    if (*(int *)(unaff_EDI + 0x1c) == 0) {
      return iVar2;
    }
  }
  return 0x55;
}


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


