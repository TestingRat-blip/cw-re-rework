// Unsorted_014 (game_misc) -- cube. 150 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Unsorted_014.h"

/* FUN_006c0c00 @ 006c0c00  kind=gamemisc  attributed-by=none  size=19 */

undefined4 FUN_006c0c00(void)

{
  int in_EAX;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x1b4 + in_EAX * 8) = 0;
  *(undefined4 *)(in_ECX + 0x1b8 + in_EAX * 8) = 0;
  return 0;
}


/* FUN_006c0c20 @ 006c0c20  kind=gamemisc  attributed-by=none  size=107 */

undefined4 FUN_006c0c20(void)

{
  undefined4 uVar1;
  undefined4 *unaff_ESI;
  
  uVar1 = unaff_ESI[2];
  unaff_ESI[0x6e] = 0;
  FUN_00691290(uVar1,unaff_ESI[6]);
  unaff_ESI[6] = 0;
  unaff_ESI[5] = 0;
  FUN_00691290(uVar1,unaff_ESI[0x6d]);
  unaff_ESI[0x6d] = 0;
  unaff_ESI[0x6c] = 0;
  unaff_ESI[0x6b] = 0;
  FUN_00691290(uVar1,unaff_ESI[0x62]);
  unaff_ESI[0x62] = 0;
  unaff_ESI[0x61] = 0;
  unaff_ESI[1] = 0;
  *unaff_ESI = 0;
  FUN_00691290(uVar1);
  return 0;
}


/* FUN_006c0c90 @ 006c0c90  kind=gamemisc  attributed-by=none  size=102 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_006c0c90(void)

{
  undefined4 in_EAX;
  undefined4 uVar1;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 8) = in_EAX;
  *(undefined4 *)(in_ECX + 0x1b0) = 0x20;
  uVar1 = FUN_00693a60();
  *(undefined4 *)(in_ECX + 0x1b4) = uVar1;
  if (in_ECX != 0) {
    FUN_006c0c20();
    return in_ECX;
  }
  uRam00000014 = 0;
  uRam00000184 = 0;
  uRam00000018 = 0;
  uRam00000188 = 0;
  _DAT_00000000 = 0;
  uRam00000004 = 0;
  uRam000001b8 = 0;
  return 0;
}


/* FUN_006c0d00 @ 006c0d00  kind=gamemisc  attributed-by=none  size=55 */

int FUN_006c0d00(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  uint *unaff_EBX;
  uint unaff_ESI;
  undefined4 *unaff_EDI;
  int local_4;
  
  if (*unaff_EBX < unaff_ESI) {
    local_4 = in_ECX;
    uVar1 = FUN_00693a60(param_1,1,*unaff_EBX * in_ECX,in_ECX * unaff_ESI,*unaff_EDI,&local_4);
    *unaff_EDI = uVar1;
    if (local_4 != 0) {
      return local_4;
    }
    *unaff_EBX = unaff_ESI;
  }
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


/* FUN_006c1070 @ 006c1070  kind=gamemisc  attributed-by=none  size=73 */

undefined4 FUN_006c1070(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = param_1;
  if (*(int *)(param_1 + 0x28) != 0) {
LAB_006c10b2:
    return *(undefined4 *)(iVar1 + 0x28);
  }
  uVar2 = FUN_00692230(*(undefined4 *)(param_1 + 8),0x260,&param_1);
  if (param_1 == 0) {
    iVar3 = FUN_006c0c90();
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + 0x28) = uVar2;
      goto LAB_006c10b2;
    }
  }
  return 0;
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


/* FUN_006c1110 @ 006c1110  kind=gamemisc  attributed-by=none  size=138 */

uint FUN_006c1110(int param_1)

{
  uint uVar1;
  int in_EAX;
  uint uVar2;
  uint uVar3;
  uint in_ECX;
  uint uVar4;
  uint in_EDX;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar2 = (in_ECX & 0xffff) * param_1;
  param_1 = ((int)in_ECX >> 0x10) * param_1;
  uVar4 = param_1 * 0x10000 + uVar2;
  uVar3 = (in_EDX & 0xffff) * in_EAX;
  iVar5 = ((int)in_EDX >> 0x10) * in_EAX;
  uVar7 = iVar5 * 0x10000 + uVar3;
  uVar1 = uVar7 + uVar4;
  iVar6 = (iVar5 >> 0x10) + (uint)(uVar4 < uVar2) + (param_1 >> 0x10) + ((int)uVar2 >> 0x1f) +
          (uint)(uVar1 < uVar4) + (uint)(uVar7 < uVar3) + ((int)uVar3 >> 0x1f);
  iVar5 = iVar6 >> 0x1f;
  uVar2 = iVar5 + uVar1;
  return ((uint)(uVar2 + 0x2000 < uVar2) + iVar6 + (uint)(uVar2 < uVar1) + iVar5) * 0x40000 |
         uVar2 + 0x2000 >> 0xe;
}


/* FUN_006c11a0 @ 006c11a0  kind=gamemisc  attributed-by=none  size=24 */

void FUN_006c11a0(void)

{
  undefined1 local_8 [8];
  
  FUN_00691170(local_8);
  return;
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


/* FUN_006c1250 @ 006c1250  kind=gamemisc  attributed-by=none  size=27 */

void FUN_006c1250(void)

{
  int in_EAX;
  undefined4 uVar1;
  
  uVar1 = FUN_006c11c0();
  FUN_0068ebc0(*(undefined2 *)(in_EAX + 0xfc),uVar1);
  return;
}


/* FUN_006c1290 @ 006c1290  kind=gamemisc  attributed-by=none  size=35 */

void FUN_006c1290(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_006c11c0();
  FUN_0068ebc0(*(undefined4 *)(*(int *)(param_1 + 0x180) + param_2 * 4),uVar1);
  return;
}


/* FUN_006c12e0 @ 006c12e0  kind=gamemisc  attributed-by=none  size=39 */

void FUN_006c12e0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_006c11c0();
  uVar1 = FUN_0068ec40(param_3,uVar1);
  *(undefined4 *)(*(int *)(param_1 + 0x180) + param_2 * 4) = uVar1;
  return;
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


/* FUN_006c13f0 @ 006c13f0  kind=gamemisc  attributed-by=none  size=130 */

void FUN_006c13f0(int param_1,int param_2,ushort param_3,undefined4 param_4)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  
  if (*(short *)(param_1 + 0x12a) != 0) {
    piVar1 = (int *)(*(int *)(param_2 + 0x10) + (uint)param_3 * 8);
    iVar3 = FUN_0068ea60(param_4,(int)*(short *)(param_1 + 0x12a) << 0x10,
                         *(undefined4 *)(param_1 + 0x234));
    *piVar1 = *piVar1 + iVar3;
    pbVar2 = (byte *)((uint)param_3 + *(int *)(param_2 + 0x18));
    *pbVar2 = *pbVar2 | 8;
  }
  if (*(short *)(param_1 + 300) != 0) {
    piVar1 = (int *)(*(int *)(param_2 + 0x10) + 4 + (uint)param_3 * 8);
    iVar3 = FUN_0068ea60(param_4,(int)*(short *)(param_1 + 300) << 0x10,
                         *(undefined4 *)(param_1 + 0x234));
    *piVar1 = *piVar1 + iVar3;
    pbVar2 = (byte *)(*(int *)(param_2 + 0x18) + (uint)param_3);
    *pbVar2 = *pbVar2 | 0x10;
  }
  return;
}


/* FUN_006c1480 @ 006c1480  kind=gamemisc  attributed-by=none  size=115 */

void FUN_006c1480(int param_1,int param_2,ushort param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  if (*(short *)(param_1 + 0x12a) != 0) {
    piVar1 = (int *)(*(int *)(param_2 + 0xc) + (uint)param_3 * 8);
    iVar2 = FUN_0068ea60(param_4,(int)*(short *)(param_1 + 0x12a) << 0x10,
                         *(undefined4 *)(param_1 + 0x234));
    *piVar1 = *piVar1 + iVar2;
  }
  if (*(short *)(param_1 + 300) != 0) {
    piVar1 = (int *)(*(int *)(param_2 + 0xc) + 4 + (uint)param_3 * 8);
    iVar2 = FUN_0068ea60(param_4,(int)*(short *)(param_1 + 300) << 0x10,
                         *(undefined4 *)(param_1 + 0x234));
    *piVar1 = *piVar1 + iVar2;
  }
  return;
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


/* FUN_006c1780 @ 006c1780  kind=gamemisc  attributed-by=none  size=103 */

void FUN_006c1780(void)

{
  int in_EAX;
  undefined1 in_CL;
  
  switch(in_CL) {
  case 0:
    *(undefined1 **)(in_EAX + 0x238) = &LAB_006c15f0;
    return;
  case 1:
    *(undefined1 **)(in_EAX + 0x238) = &LAB_006c15c0;
    return;
  case 2:
    *(undefined1 **)(in_EAX + 0x238) = &LAB_006c1690;
    return;
  case 3:
    *(undefined1 **)(in_EAX + 0x238) = &LAB_006c1630;
    return;
  case 4:
    *(undefined1 **)(in_EAX + 0x238) = &LAB_006c1660;
    return;
  case 5:
    *(code **)(in_EAX + 0x238) = FUN_006c1590;
    return;
  case 6:
    *(undefined1 **)(in_EAX + 0x238) = &LAB_006c16c0;
    return;
  case 7:
    *(undefined1 **)(in_EAX + 0x238) = &LAB_006c1720;
  }
  return;
}


/* FUN_006c1810 @ 006c1810  kind=gamemisc  attributed-by=none  size=236 */

void FUN_006c1810(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int in_ECX;
  uint in_EDX;
  
  switch(in_EDX & 0xc0) {
  case 0:
    in_EAX = in_EAX / 2;
    break;
  case 0x40:
  case 0xc0:
    break;
  case 0x80:
    in_EAX = in_EAX * 2;
    break;
  default:
    goto switchD_006c1828_default;
  }
  *(int *)(in_ECX + 0x1dc) = in_EAX;
switchD_006c1828_default:
  switch(in_EDX & 0x30) {
  case 0:
    *(undefined4 *)(in_ECX + 0x1e0) = 0;
    goto switchD_006c184f_default;
  case 0x10:
    iVar1 = *(int *)(in_ECX + 0x1dc);
    break;
  case 0x20:
    iVar1 = *(int *)(in_ECX + 0x1dc) / 2;
    goto LAB_006c1889;
  case 0x30:
    iVar1 = *(int *)(in_ECX + 0x1dc) * 3;
    break;
  default:
    goto switchD_006c184f_default;
  }
  iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2;
LAB_006c1889:
  *(int *)(in_ECX + 0x1e0) = iVar1;
switchD_006c184f_default:
  iVar1 = *(int *)(in_ECX + 0x1dc);
  if ((in_EDX & 0xf) == 0) {
    iVar2 = iVar1 + -1;
  }
  else {
    iVar2 = ((in_EDX & 0xf) - 4) * iVar1;
    iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3;
  }
  *(int *)(in_ECX + 0x1e4) = iVar2;
  *(int *)(in_ECX + 0x1dc) = (int)(iVar1 + (iVar1 >> 0x1f & 0xffU)) >> 8;
  *(int *)(in_ECX + 0x1e0) =
       (int)(*(int *)(in_ECX + 0x1e0) + (*(int *)(in_ECX + 0x1e0) >> 0x1f & 0xffU)) >> 8;
  *(int *)(in_ECX + 0x1e4) =
       (int)(*(int *)(in_ECX + 0x1e4) + (*(int *)(in_ECX + 0x1e4) >> 0x1f & 0xffU)) >> 8;
  return;
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


/* FUN_006c1d20 @ 006c1d20  kind=gamemisc  attributed-by=none  size=92 */

undefined4 FUN_006c1d20(undefined4 param_1,undefined4 param_2)

{
  int in_EAX;
  ushort in_CX;
  ushort in_DX;
  
  if ((in_CX < *(ushort *)(in_EAX + 0x74)) && (in_DX < *(ushort *)(in_EAX + 0x50))) {
    FUN_006c1c00(param_2);
    return 0;
  }
  if (*(char *)(in_EAX + 0x231) != '\0') {
    *(undefined4 *)(in_EAX + 0xc) = 0x86;
  }
  return 1;
}


/* FUN_006c1d80 @ 006c1d80  kind=gamemisc  attributed-by=none  size=66 */

void FUN_006c1d80(void)

{
  void *_Dst;
  int iVar1;
  undefined4 uVar2;
  int *in_EAX;
  int iVar3;
  int unaff_ESI;
  
  iVar1 = *in_EAX;
  if ((0 < iVar1) && (iVar1 <= *(int *)(unaff_ESI + 0x1c))) {
    iVar3 = *(int *)(unaff_ESI + 0x1c) - iVar1;
    uVar2 = *(undefined4 *)(*(int *)(unaff_ESI + 0x18) + iVar3 * 4);
    _Dst = (void *)(*(int *)(unaff_ESI + 0x18) + iVar3 * 4);
    memmove(_Dst,(void *)((int)_Dst + 4),iVar1 * 4 - 4);
    *(undefined4 *)(*(int *)(unaff_ESI + 0x18) + -4 + *(int *)(unaff_ESI + 0x1c) * 4) = uVar2;
    return;
  }
  *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
  return;
}


/* FUN_006c1dd0 @ 006c1dd0  kind=gamemisc  attributed-by=none  size=19 */

void FUN_006c1dd0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  
  uVar1 = in_EAX[2];
  uVar2 = in_EAX[1];
  in_EAX[2] = *in_EAX;
  in_EAX[1] = uVar1;
  *in_EAX = uVar2;
  return;
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


/* FUN_006c1e80 @ 006c1e80  kind=gamemisc  attributed-by=none  size=62 */

void FUN_006c1e80(void)

{
  char cVar1;
  int *in_EAX;
  int iVar2;
  int unaff_EDI;
  bool bVar3;
  
  if (*in_EAX == 0) {
    iVar2 = 1;
LAB_006c1e90:
    do {
      cVar1 = FUN_006c1df0();
      if (cVar1 == '\x01') {
        return;
      }
      cVar1 = *(char *)(unaff_EDI + 0x170);
      if (cVar1 == '\x1b') {
        bVar3 = iVar2 == 1;
      }
      else {
        if (cVar1 == 'X') {
          iVar2 = iVar2 + 1;
          goto LAB_006c1e90;
        }
        if (cVar1 != 'Y') goto LAB_006c1e90;
        iVar2 = iVar2 + -1;
        bVar3 = iVar2 == 0;
      }
    } while (!bVar3);
  }
  return;
}


/* FUN_006c1ed0 @ 006c1ed0  kind=gamemisc  attributed-by=none  size=42 */

void FUN_006c1ed0(void)

{
  char cVar1;
  int iVar2;
  int unaff_EDI;
  
  iVar2 = 1;
  do {
    cVar1 = FUN_006c1df0();
    if (cVar1 == '\x01') {
      return;
    }
    if (*(char *)(unaff_EDI + 0x170) == 'X') {
      iVar2 = iVar2 + 1;
    }
    else if (*(char *)(unaff_EDI + 0x170) == 'Y') {
      iVar2 = iVar2 + -1;
    }
  } while (iVar2 != 0);
  return;
}


/* FUN_006c1f00 @ 006c1f00  kind=gamemisc  attributed-by=none  size=177 */

void FUN_006c1f00(void)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint *in_EDX;
  int unaff_ESI;
  
  puVar4 = *(undefined4 **)(unaff_ESI + 0x194);
  uVar1 = *in_EDX;
  uVar2 = *(uint *)(unaff_ESI + 0x18c);
  puVar5 = puVar4 + uVar2 * 4;
  for (; (puVar4 < puVar5 && (puVar4[2] != uVar1)); puVar4 = puVar4 + 4) {
  }
  if (puVar4 == puVar5) {
    if (*(uint *)(unaff_ESI + 400) <= uVar2) goto LAB_006c1f38;
    *(uint *)(unaff_ESI + 0x18c) = uVar2 + 1;
  }
  if (uVar1 < 0x10000) {
    *puVar4 = *(undefined4 *)(unaff_ESI + 0x160);
    puVar4[2] = uVar1 & 0xffff;
    puVar4[1] = *(int *)(unaff_ESI + 0x168) + 1;
    *(undefined1 *)(puVar4 + 3) = 1;
    if (*(uint *)(unaff_ESI + 0x1a4) < uVar1) {
      *(uint *)(unaff_ESI + 0x1a4) = uVar1 & 0xffff;
    }
    cVar3 = FUN_006c1df0();
    if (cVar3 == '\0') {
      while (cVar3 = *(char *)(unaff_ESI + 0x170), cVar3 != ',') {
        if (cVar3 == '-') {
          return;
        }
        if (cVar3 == -0x77) break;
        cVar3 = FUN_006c1df0();
        if (cVar3 != '\0') {
          return;
        }
      }
      *(undefined4 *)(unaff_ESI + 0xc) = 0x89;
    }
    return;
  }
LAB_006c1f38:
  *(undefined4 *)(unaff_ESI + 0xc) = 0x8c;
  return;
}


/* FUN_006c1fc0 @ 006c1fc0  kind=gamemisc  attributed-by=none  size=79 */

void FUN_006c1fc0(void)

{
  int in_EAX;
  int iVar1;
  
  if (*(int *)(in_EAX + 0x1ac) < 1) {
    *(undefined4 *)(in_EAX + 0xc) = 0x88;
    return;
  }
  iVar1 = *(int *)(in_EAX + 0x1ac) + -1;
  *(int *)(in_EAX + 0x1ac) = iVar1;
  iVar1 = iVar1 * 0x10 + *(int *)(in_EAX + 0x1b4);
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + -1;
  *(undefined1 *)(in_EAX + 0x178) = 0;
  if (0 < *(int *)(iVar1 + 8)) {
    *(int *)(in_EAX + 0x1ac) = *(int *)(in_EAX + 0x1ac) + 1;
    *(undefined4 *)(in_EAX + 0x168) = *(undefined4 *)(iVar1 + 0xc);
    return;
  }
  FUN_006c1390();
  return;
}


/* FUN_006c2010 @ 006c2010  kind=gamemisc  attributed-by=none  size=180 */

void FUN_006c2010(void)

{
  uint uVar1;
  uint uVar2;
  uint *in_EAX;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int unaff_EDI;
  
  uVar1 = *in_EAX;
  uVar5 = *(int *)(unaff_EDI + 0x1a4) + 1;
  if (uVar1 < uVar5) {
    uVar2 = *(uint *)(unaff_EDI + 0x194);
    uVar3 = uVar1 * 0x10 + uVar2;
    if ((uVar5 != *(uint *)(unaff_EDI + 0x18c)) || (*(uint *)(uVar3 + 8) != uVar1)) {
      uVar5 = *(uint *)(unaff_EDI + 0x18c) * 0x10 + uVar2;
      for (uVar3 = uVar2; (uVar3 < uVar5 && (*(uint *)(uVar3 + 8) != uVar1)); uVar3 = uVar3 + 0x10)
      {
      }
      if (uVar3 == uVar5) goto LAB_006c205c;
    }
    if (*(char *)(uVar3 + 0xc) != '\0') {
      if (*(int *)(unaff_EDI + 0x1b0) <= *(int *)(unaff_EDI + 0x1ac)) {
        *(undefined4 *)(unaff_EDI + 0xc) = 0x82;
        return;
      }
      puVar4 = (undefined4 *)(*(int *)(unaff_EDI + 0x1ac) * 0x10 + *(int *)(unaff_EDI + 0x1b4));
      *puVar4 = *(undefined4 *)(unaff_EDI + 0x160);
      puVar4[1] = *(int *)(unaff_EDI + 0x168) + 1;
      puVar4[2] = 1;
      puVar4[3] = *(undefined4 *)(uVar3 + 4);
      *(int *)(unaff_EDI + 0x1ac) = *(int *)(unaff_EDI + 0x1ac) + 1;
      FUN_006c1390();
      *(undefined1 *)(unaff_EDI + 0x178) = 0;
      return;
    }
  }
LAB_006c205c:
  *(undefined4 *)(unaff_EDI + 0xc) = 0x86;
  return;
}


/* FUN_006c20d0 @ 006c20d0  kind=gamemisc  attributed-by=none  size=196 */

void FUN_006c20d0(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int unaff_EDI;
  
  uVar1 = param_1[1];
  uVar5 = *(int *)(unaff_EDI + 0x1a4) + 1;
  if (uVar1 < uVar5) {
    uVar2 = *(uint *)(unaff_EDI + 0x194);
    uVar3 = uVar1 * 0x10 + uVar2;
    if ((uVar5 != *(uint *)(unaff_EDI + 0x18c)) || (*(uint *)(uVar3 + 8) != uVar1)) {
      uVar5 = *(uint *)(unaff_EDI + 0x18c) * 0x10 + uVar2;
      for (uVar3 = uVar2; (uVar3 < uVar5 && (*(uint *)(uVar3 + 8) != uVar1)); uVar3 = uVar3 + 0x10)
      {
      }
      if (uVar3 == uVar5) goto LAB_006c2126;
    }
    if (*(char *)(uVar3 + 0xc) != '\0') {
      if (*(int *)(unaff_EDI + 0x1b0) <= *(int *)(unaff_EDI + 0x1ac)) {
        *(undefined4 *)(unaff_EDI + 0xc) = 0x82;
        return;
      }
      if (0 < *param_1) {
        puVar4 = (undefined4 *)(*(int *)(unaff_EDI + 0x1ac) * 0x10 + *(int *)(unaff_EDI + 0x1b4));
        *puVar4 = *(undefined4 *)(unaff_EDI + 0x160);
        puVar4[1] = *(int *)(unaff_EDI + 0x168) + 1;
        puVar4[2] = *param_1;
        puVar4[3] = *(undefined4 *)(uVar3 + 4);
        *(int *)(unaff_EDI + 0x1ac) = *(int *)(unaff_EDI + 0x1ac) + 1;
        FUN_006c1390();
        *(undefined1 *)(unaff_EDI + 0x178) = 0;
      }
      return;
    }
  }
LAB_006c2126:
  *(undefined4 *)(unaff_EDI + 0xc) = 0x86;
  return;
}


/* FUN_006c21a0 @ 006c21a0  kind=gamemisc  attributed-by=none  size=186 */

void FUN_006c21a0(void)

{
  uint uVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int unaff_ESI;
  uint *unaff_EDI;
  
  uVar1 = *(uint *)(unaff_ESI + 0x198);
  puVar3 = *(undefined4 **)(unaff_ESI + 0x1a0);
  puVar4 = puVar3 + uVar1 * 4;
  if (puVar3 < puVar4) {
    do {
      if (puVar3[2] == *unaff_EDI) break;
      puVar3 = puVar3 + 4;
    } while (puVar3 < puVar4);
  }
  if (puVar3 == puVar4) {
    if (*(uint *)(unaff_ESI + 0x19c) <= uVar1) goto LAB_006c2258;
    *(uint *)(unaff_ESI + 0x198) = uVar1 + 1;
  }
  uVar1 = *unaff_EDI;
  if ((-1 < (int)uVar1) && ((int)uVar1 < 0x100)) {
    puVar3[2] = uVar1 & 0xff;
    puVar3[1] = *(int *)(unaff_ESI + 0x168) + 1;
    *puVar3 = *(undefined4 *)(unaff_ESI + 0x160);
    *(undefined1 *)(puVar3 + 3) = 1;
    if (*(uint *)(unaff_ESI + 0x1a8) < *unaff_EDI) {
      *(uint *)(unaff_ESI + 0x1a8) = *unaff_EDI & 0xff;
    }
    cVar2 = FUN_006c1df0();
    if (cVar2 != '\0') {
      return;
    }
    while (cVar2 = *(char *)(unaff_ESI + 0x170), cVar2 != ',') {
      if (cVar2 == '-') {
        return;
      }
      if (cVar2 == -0x77) break;
      cVar2 = FUN_006c1df0();
      if (cVar2 != '\0') {
        return;
      }
    }
    *(undefined4 *)(unaff_ESI + 0xc) = 0x89;
    return;
  }
LAB_006c2258:
  *(undefined4 *)(unaff_ESI + 0xc) = 0x8d;
  return;
}


/* FUN_006c2260 @ 006c2260  kind=gamemisc  attributed-by=none  size=100 */

void FUN_006c2260(uint *param_1)

{
  byte bVar1;
  int in_EAX;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  bVar1 = *(byte *)(*(int *)(in_EAX + 0x164) + 1 + *(int *)(in_EAX + 0x168));
  uVar2 = (uint)bVar1;
  if (uVar2 < (*(int *)(in_EAX + 0x14) - *(int *)(in_EAX + 0x10)) + 1U) {
    if (bVar1 != 0) {
      iVar3 = 1;
      uVar4 = uVar2;
      do {
        *param_1 = (uint)*(byte *)(*(int *)(in_EAX + 0x164) + iVar3 + 1 + *(int *)(in_EAX + 0x168));
        iVar3 = iVar3 + 1;
        param_1 = param_1 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    *(int *)(in_EAX + 0x20) = *(int *)(in_EAX + 0x20) + uVar2;
    return;
  }
  *(undefined4 *)(in_EAX + 0xc) = 0x82;
  return;
}


/* FUN_006c22d0 @ 006c22d0  kind=gamemisc  attributed-by=none  size=97 */

void FUN_006c22d0(int *param_1)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  int in_EDX;
  int extraout_EDX;
  uint uVar4;
  
  bVar1 = *(byte *)(*(int *)(in_EDX + 0x164) + 1 + *(int *)(in_EDX + 0x168));
  uVar3 = (uint)bVar1;
  if (uVar3 < (*(int *)(in_EDX + 0x14) - *(int *)(in_EDX + 0x10)) + 1U) {
    *(int *)(in_EDX + 0x168) = *(int *)(in_EDX + 0x168) + 2;
    uVar4 = uVar3;
    if (bVar1 != 0) {
      do {
        sVar2 = FUN_006c1360();
        *param_1 = (int)sVar2;
        param_1 = param_1 + 1;
        uVar4 = uVar4 - 1;
        in_EDX = extraout_EDX;
      } while (uVar4 != 0);
    }
    *(int *)(in_EDX + 0x20) = *(int *)(in_EDX + 0x20) + uVar3;
    *(undefined1 *)(in_EDX + 0x178) = 0;
    return;
  }
  *(undefined4 *)(in_EDX + 0xc) = 0x82;
  return;
}


/* FUN_006c2340 @ 006c2340  kind=gamemisc  attributed-by=none  size=93 */

void FUN_006c2340(uint *param_1)

{
  int in_EAX;
  ushort uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(byte *)(in_EAX + 0x170) - 0xaf;
  uVar2 = (uint)uVar1;
  if (uVar2 < (*(int *)(in_EAX + 0x14) - *(int *)(in_EAX + 0x10)) + 1U) {
    if (uVar1 != 0) {
      iVar3 = 1;
      do {
        iVar3 = iVar3 + 1;
        *param_1 = (uint)*(byte *)(*(int *)(in_EAX + 0x164) + *(int *)(in_EAX + 0x168) + -1 + iVar3)
        ;
        param_1 = param_1 + 1;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    return;
  }
  *(undefined4 *)(in_EAX + 0xc) = 0x82;
  return;
}


/* FUN_006c23a0 @ 006c23a0  kind=gamemisc  attributed-by=none  size=87 */

void FUN_006c23a0(int *param_1)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  int in_EDX;
  int extraout_EDX;
  
  uVar1 = *(byte *)(in_EDX + 0x170) - 0xb7;
  uVar3 = (uint)uVar1;
  if (uVar3 < (*(int *)(in_EDX + 0x14) - *(int *)(in_EDX + 0x10)) + 1U) {
    *(int *)(in_EDX + 0x168) = *(int *)(in_EDX + 0x168) + 1;
    if (uVar1 != 0) {
      do {
        sVar2 = FUN_006c1360();
        *param_1 = (int)sVar2;
        param_1 = param_1 + 1;
        uVar3 = uVar3 - 1;
        in_EDX = extraout_EDX;
      } while (uVar3 != 0);
    }
    *(undefined1 *)(in_EDX + 0x178) = 0;
    return;
  }
  *(undefined4 *)(in_EDX + 0xc) = 0x82;
  return;
}


/* FUN_006c2400 @ 006c2400  kind=gamemisc  attributed-by=none  size=97 */

void FUN_006c2400(void)

{
  int in_EAX;
  uint uVar1;
  uint *unaff_ESI;
  
  if (*unaff_ESI < (uint)*(ushort *)(in_EAX + 0x74)) {
    if ((*(byte *)(in_EAX + 0x170) & 1) != 0) {
      uVar1 = (**(code **)(in_EAX + 0x240))();
      *unaff_ESI = uVar1;
      return;
    }
    uVar1 = (**(code **)(in_EAX + 0x23c))();
    *unaff_ESI = uVar1;
    return;
  }
  if (*(char *)(in_EAX + 0x231) != '\0') {
    *(undefined4 *)(in_EAX + 0xc) = 0x86;
    return;
  }
  *unaff_ESI = 0;
  return;
}


/* FUN_006c2470 @ 006c2470  kind=gamemisc  attributed-by=none  size=127 */

void FUN_006c2470(ushort *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_EAX;
  
  if (*param_1 < *(ushort *)(in_EAX + 0x74)) {
    iVar3 = (uint)*param_1 * 8;
    (**(code **)(in_EAX + 0x23c))();
    (**(code **)(in_EAX + 0x248))();
    if (*(short *)(in_EAX + 0x15c) == 0) {
      iVar1 = *(int *)(in_EAX + 0x7c);
      iVar2 = *(int *)(in_EAX + 0x78);
      *(undefined4 *)(iVar2 + iVar3) = *(undefined4 *)(iVar1 + iVar3);
      *(undefined4 *)(iVar2 + 4 + iVar3) = *(undefined4 *)(iVar1 + 4 + iVar3);
    }
  }
  else if (*(char *)(in_EAX + 0x231) != '\0') {
    *(undefined4 *)(in_EAX + 0xc) = 0x86;
    return;
  }
  return;
}


/* FUN_006c24f0 @ 006c24f0  kind=gamemisc  attributed-by=none  size=245 */

void FUN_006c24f0(ushort *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int unaff_ESI;
  
  if ((*(ushort *)(unaff_ESI + 0x2c) <= *param_1) || (*(ushort *)(unaff_ESI + 0x50) <= param_1[2]))
  {
    if (*(char *)(unaff_ESI + 0x231) != '\0') {
      *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
      return;
    }
    param_1[0] = 0;
    param_1[1] = 0;
    return;
  }
  if ((*(byte *)(unaff_ESI + 0x170) & 1) != 0) {
    uVar3 = (**(code **)(unaff_ESI + 0x23c))();
    *(undefined4 *)param_1 = uVar3;
    return;
  }
  piVar1 = (int *)(*(int *)(unaff_ESI + 0x38) + (uint)*param_1 * 8);
  piVar2 = (int *)(*(int *)(unaff_ESI + 0x5c) + (uint)param_1[2] * 8);
  if (*(int *)(unaff_ESI + 0xdc) == *(int *)(unaff_ESI + 0xe0)) {
    uVar3 = (**(code **)(unaff_ESI + 0x240))();
    uVar3 = FUN_0068ebc0(uVar3,*(undefined4 *)(unaff_ESI + 0xdc));
    *(undefined4 *)param_1 = uVar3;
    return;
  }
  FUN_0068ebc0(*piVar1 - *piVar2,*(int *)(unaff_ESI + 0xdc));
  FUN_0068ebc0(piVar1[1] - piVar2[1],*(undefined4 *)(unaff_ESI + 0xe0));
  uVar3 = (**(code **)(unaff_ESI + 0x240))();
  *(undefined4 *)param_1 = uVar3;
  return;
}


/* FUN_006c25f0 @ 006c25f0  kind=gamemisc  attributed-by=none  size=175 */

void FUN_006c25f0(void)

{
  ushort *in_EAX;
  int unaff_ESI;
  
  if ((*in_EAX < *(ushort *)(unaff_ESI + 0x50)) && (in_EAX[2] < *(ushort *)(unaff_ESI + 0x74))) {
    FUN_006c1c00(unaff_ESI + 0x122);
    FUN_006c1c00(unaff_ESI + 0x126);
    FUN_006c1aa0();
    return;
  }
  if (*(char *)(unaff_ESI + 0x231) != '\0') {
    *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
  }
  return;
}


/* FUN_006c26a0 @ 006c26a0  kind=gamemisc  attributed-by=none  size=68 */

void FUN_006c26a0(void)

{
  int iVar1;
  int in_EDX;
  int *unaff_EBX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (*unaff_EBX == 0) {
    puVar2 = (undefined4 *)(in_EDX + 0xb4);
  }
  else {
    if (*unaff_EBX != 1) {
      if (*(char *)(in_EDX + 0x231) == '\0') {
        return;
      }
      *(undefined4 *)(in_EDX + 0xc) = 0x86;
      return;
    }
    puVar2 = (undefined4 *)(in_EDX + 0x90);
  }
  puVar3 = (undefined4 *)(in_EDX + 0x24);
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(short *)(in_EDX + 0x158) = (short)*unaff_EBX;
  return;
}


/* FUN_006c26f0 @ 006c26f0  kind=gamemisc  attributed-by=none  size=68 */

void FUN_006c26f0(void)

{
  int iVar1;
  int in_EDX;
  int *unaff_EBX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (*unaff_EBX == 0) {
    puVar2 = (undefined4 *)(in_EDX + 0xb4);
  }
  else {
    if (*unaff_EBX != 1) {
      if (*(char *)(in_EDX + 0x231) == '\0') {
        return;
      }
      *(undefined4 *)(in_EDX + 0xc) = 0x86;
      return;
    }
    puVar2 = (undefined4 *)(in_EDX + 0x90);
  }
  puVar3 = (undefined4 *)(in_EDX + 0x48);
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(short *)(in_EDX + 0x15a) = (short)*unaff_EBX;
  return;
}


/* FUN_006c2740 @ 006c2740  kind=gamemisc  attributed-by=none  size=68 */

void FUN_006c2740(void)

{
  int iVar1;
  int in_EDX;
  int *unaff_EBX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (*unaff_EBX == 0) {
    puVar2 = (undefined4 *)(in_EDX + 0xb4);
  }
  else {
    if (*unaff_EBX != 1) {
      if (*(char *)(in_EDX + 0x231) == '\0') {
        return;
      }
      *(undefined4 *)(in_EDX + 0xc) = 0x86;
      return;
    }
    puVar2 = (undefined4 *)(in_EDX + 0x90);
  }
  puVar3 = (undefined4 *)(in_EDX + 0x6c);
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(short *)(in_EDX + 0x15c) = (short)*unaff_EBX;
  return;
}


/* FUN_006c2790 @ 006c2790  kind=gamemisc  attributed-by=none  size=114 */

void FUN_006c2790(void)

{
  int in_EAX;
  int iVar1;
  int *unaff_EBX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (*unaff_EBX == 0) {
    puVar2 = (undefined4 *)(in_EAX + 0xb4);
  }
  else {
    if (*unaff_EBX != 1) {
      if (*(char *)(in_EAX + 0x231) == '\0') {
        return;
      }
      *(undefined4 *)(in_EAX + 0xc) = 0x86;
      return;
    }
    puVar2 = (undefined4 *)(in_EAX + 0x90);
  }
  puVar3 = (undefined4 *)(in_EAX + 0x24);
  puVar4 = puVar3;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar2 = puVar3;
  puVar4 = (undefined4 *)(in_EAX + 0x48);
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar2 = (undefined4 *)(in_EAX + 0x6c);
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
  }
  *(short *)(in_EAX + 0x158) = (short)*unaff_EBX;
  *(short *)(in_EAX + 0x15a) = (short)*unaff_EBX;
  *(short *)(in_EAX + 0x15c) = (short)*unaff_EBX;
  return;
}


/* FUN_006c2810 @ 006c2810  kind=gamemisc  attributed-by=none  size=55 */

void FUN_006c2810(void)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  int in_EDX;
  
  iVar1 = in_ECX[1];
  if (iVar1 - 1U < 2) {
    iVar2 = 0;
    if (*in_ECX != 0) {
      iVar2 = iVar1;
    }
    *(byte *)(in_EDX + 0x150) = ~(byte)iVar1 & *(byte *)(in_EDX + 0x150) | (byte)iVar2;
    return;
  }
  if (*(char *)(in_EDX + 0x231) != '\0') {
    *(undefined4 *)(in_EDX + 0xc) = 0x86;
  }
  return;
}


/* FUN_006c2850 @ 006c2850  kind=gamemisc  attributed-by=none  size=183 */

void FUN_006c2850(void)

{
  int in_EAX;
  uint uVar1;
  uint *unaff_ESI;
  
  uVar1 = *unaff_ESI & 0xff;
  if (uVar1 == 0xff) {
    *(undefined1 *)(in_EAX + 0x151) = 1;
    return;
  }
  if (uVar1 != 0) {
    if (((*unaff_ESI & 0x100) != 0) && (*(ushort *)(in_EAX + 0xfc) <= uVar1)) {
      *(undefined1 *)(in_EAX + 0x151) = 1;
    }
    if (((*unaff_ESI & 0x200) != 0) && (*(char *)(in_EAX + 0x119) != '\0')) {
      *(undefined1 *)(in_EAX + 0x151) = 1;
    }
    if (((*unaff_ESI & 0x400) != 0) && (*(char *)(in_EAX + 0x11a) != '\0')) {
      *(undefined1 *)(in_EAX + 0x151) = 1;
    }
    if (((*unaff_ESI & 0x800) != 0) && (uVar1 < *(ushort *)(in_EAX + 0xfc))) {
      *(undefined1 *)(in_EAX + 0x151) = 0;
    }
    if (((*unaff_ESI & 0x1000) != 0) && (*(char *)(in_EAX + 0x119) != '\0')) {
      *(undefined1 *)(in_EAX + 0x151) = 0;
    }
    if ((*unaff_ESI & 0x2000) == 0) {
      return;
    }
    if (*(char *)(in_EAX + 0x11a) == '\0') {
      return;
    }
  }
  *(undefined1 *)(in_EAX + 0x151) = 0;
  return;
}


/* FUN_006c2910 @ 006c2910  kind=gamemisc  attributed-by=none  size=13 */

void FUN_006c2910(void)

{
  int *in_EAX;
  int in_ECX;
  
  if (-1 < *in_EAX) {
    *(int *)(in_ECX + 0x154) = *in_EAX;
  }
  return;
}


/* FUN_006c2920 @ 006c2920  kind=gamemisc  attributed-by=none  size=112 */

void FUN_006c2920(void)

{
  byte *pbVar1;
  ushort uVar2;
  int iVar3;
  int in_EAX;
  
  iVar3 = *(int *)(in_EAX + 0x130);
  if (*(int *)(in_EAX + 0x10) < iVar3) {
    *(undefined4 *)(in_EAX + 0xc) = 0x81;
    return;
  }
  do {
    if (iVar3 < 1) {
      *(undefined4 *)(in_EAX + 0x130) = 1;
      *(undefined4 *)(in_EAX + 0x20) = *(undefined4 *)(in_EAX + 0x1c);
      return;
    }
    *(int *)(in_EAX + 0x1c) = *(int *)(in_EAX + 0x1c) + -1;
    uVar2 = *(ushort *)(*(int *)(in_EAX + 0x18) + *(int *)(in_EAX + 0x1c) * 4);
    if (uVar2 < *(ushort *)(in_EAX + 0x98)) {
      pbVar1 = (byte *)((uint)uVar2 + *(int *)(in_EAX + 0xa8));
      *pbVar1 = *pbVar1 ^ 1;
    }
    else if (*(char *)(in_EAX + 0x231) != '\0') {
      *(undefined4 *)(in_EAX + 0xc) = 0x86;
      return;
    }
    *(int *)(in_EAX + 0x130) = *(int *)(in_EAX + 0x130) + -1;
    iVar3 = *(int *)(in_EAX + 0x130);
  } while( true );
}


/* FUN_006c29a0 @ 006c29a0  kind=gamemisc  attributed-by=none  size=69 */

void FUN_006c29a0(void)

{
  byte *pbVar1;
  ushort uVar2;
  ushort uVar3;
  ushort *in_ECX;
  uint uVar4;
  uint uVar5;
  int unaff_ESI;
  
  uVar2 = in_ECX[2];
  uVar3 = *in_ECX;
  uVar4 = (uint)uVar3;
  if ((uVar2 < *(ushort *)(unaff_ESI + 0x98)) && (uVar3 < *(ushort *)(unaff_ESI + 0x98))) {
    if (uVar3 <= uVar2) {
      uVar5 = (uVar2 - uVar4) + 1 & 0xffff;
      do {
        pbVar1 = (byte *)(*(int *)(unaff_ESI + 0xa8) + uVar4);
        *pbVar1 = *pbVar1 | 1;
        uVar4 = uVar4 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      return;
    }
  }
  else if (*(char *)(unaff_ESI + 0x231) != '\0') {
    *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
  }
  return;
}


/* FUN_006c29f0 @ 006c29f0  kind=gamemisc  attributed-by=none  size=69 */

void FUN_006c29f0(void)

{
  byte *pbVar1;
  ushort uVar2;
  ushort uVar3;
  ushort *in_ECX;
  uint uVar4;
  uint uVar5;
  int unaff_ESI;
  
  uVar2 = in_ECX[2];
  uVar3 = *in_ECX;
  uVar4 = (uint)uVar3;
  if ((uVar2 < *(ushort *)(unaff_ESI + 0x98)) && (uVar3 < *(ushort *)(unaff_ESI + 0x98))) {
    if (uVar3 <= uVar2) {
      uVar5 = (uVar2 - uVar4) + 1 & 0xffff;
      do {
        pbVar1 = (byte *)(*(int *)(unaff_ESI + 0xa8) + uVar4);
        *pbVar1 = *pbVar1 & 0xfe;
        uVar4 = uVar4 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      return;
    }
  }
  else if (*(char *)(unaff_ESI + 0x231) != '\0') {
    *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
  }
  return;
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


/* FUN_006c2b80 @ 006c2b80  kind=gamemisc  attributed-by=none  size=173 */

void FUN_006c2b80(void)

{
  int iVar1;
  char cVar2;
  int unaff_ESI;
  undefined4 local_2c;
  undefined1 local_28 [4];
  undefined1 local_24 [36];
  
  if (*(int *)(unaff_ESI + 0x10) < *(int *)(unaff_ESI + 0x130)) {
    *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
    return;
  }
  cVar2 = FUN_006c2a40(local_28,&local_2c,local_24);
  if (cVar2 == '\0') {
    iVar1 = *(int *)(unaff_ESI + 0x130);
    while (0 < iVar1) {
      *(int *)(unaff_ESI + 0x1c) = *(int *)(unaff_ESI + 0x1c) + -1;
      if (*(ushort *)(*(int *)(unaff_ESI + 0x18) + *(int *)(unaff_ESI + 0x1c) * 4) <
          *(ushort *)(unaff_ESI + 0x74)) {
        FUN_006c2b20(local_2c);
      }
      else if (*(char *)(unaff_ESI + 0x231) != '\0') {
        *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
        return;
      }
      *(int *)(unaff_ESI + 0x130) = *(int *)(unaff_ESI + 0x130) + -1;
      iVar1 = *(int *)(unaff_ESI + 0x130);
    }
    *(undefined4 *)(unaff_ESI + 0x130) = 1;
    *(undefined4 *)(unaff_ESI + 0x20) = *(undefined4 *)(unaff_ESI + 0x1c);
  }
  return;
}


/* FUN_006c2c30 @ 006c2c30  kind=gamemisc  attributed-by=none  size=242 */

void FUN_006c2c30(void)

{
  short sVar1;
  ushort uVar2;
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  short *in_EAX;
  int unaff_ESI;
  uint uVar6;
  ushort local_34;
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined1 local_24 [16];
  int local_14;
  
  sVar1 = *in_EAX;
  uVar6 = (uint)sVar1;
  if (uVar6 < (uint)(int)*(short *)(unaff_ESI + 0x9a)) {
    cVar3 = FUN_006c2a40(local_2c,&local_28,local_24);
    if (cVar3 == '\0') {
      if (sVar1 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (*(short *)(*(int *)(unaff_ESI + 0xac) + -2 + uVar6 * 2) -
                *(short *)(unaff_ESI + 0xb0)) + 1;
      }
      uVar5 = *(short *)(*(int *)(unaff_ESI + 0xac) + uVar6 * 2) - *(short *)(unaff_ESI + 0xb0);
      uVar2 = *(ushort *)(unaff_ESI + 0x74);
      if (uVar2 <= uVar5) {
        if (uVar2 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar2 - 1;
        }
      }
      for (; uVar4 <= uVar5; uVar4 = uVar4 + 1) {
        if ((local_14 != *(int *)(unaff_ESI + 0x7c)) || (local_34 != uVar4)) {
          FUN_006c2b20(local_28);
        }
      }
    }
  }
  else if (*(char *)(unaff_ESI + 0x231) != '\0') {
    *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
    return;
  }
  return;
}


/* FUN_006c2d30 @ 006c2d30  kind=gamemisc  attributed-by=none  size=200 */

void FUN_006c2d30(int param_1)

{
  char cVar1;
  uint *in_EAX;
  ushort uVar2;
  ushort uVar3;
  ushort local_34;
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined1 local_24 [16];
  int local_14;
  
  if (*in_EAX < 2) {
    cVar1 = FUN_006c2a40(local_2c,&local_28,local_24);
    if (cVar1 == '\0') {
      uVar3 = 0;
      if ((*(short *)(param_1 + 0x15c) == 0) && (*(short *)(param_1 + 0x74) != 0)) {
        uVar2 = *(short *)(param_1 + 0x74) - 1;
      }
      else if ((*(short *)(param_1 + 0x15c) == 1) && (0 < *(short *)(param_1 + 0x76))) {
        uVar2 = *(ushort *)(*(int *)(param_1 + 0x88) + -2 + *(short *)(param_1 + 0x76) * 2);
      }
      else {
        uVar2 = 0;
      }
      do {
        if ((local_14 != *(int *)(param_1 + 0x7c)) || (local_34 != uVar3)) {
          FUN_006c2b20(local_28);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 <= uVar2);
    }
  }
  else if (*(char *)(param_1 + 0x231) != '\0') {
    *(undefined4 *)(param_1 + 0xc) = 0x86;
    return;
  }
  return;
}


/* FUN_006c2e00 @ 006c2e00  kind=gamemisc  attributed-by=none  size=169 */

void FUN_006c2e00(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 0x130);
  if (*(int *)(unaff_ESI + 0x10) < iVar1 + 1) {
    *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
    return;
  }
  FUN_006c10c0();
  uVar2 = FUN_006c10c0();
  do {
    if (iVar1 < 1) {
      *(undefined4 *)(unaff_ESI + 0x130) = 1;
      *(undefined4 *)(unaff_ESI + 0x20) = *(undefined4 *)(unaff_ESI + 0x1c);
      return;
    }
    *(int *)(unaff_ESI + 0x1c) = *(int *)(unaff_ESI + 0x1c) + -1;
    if (*(ushort *)(*(int *)(unaff_ESI + 0x18) + *(int *)(unaff_ESI + 0x1c) * 4) <
        *(ushort *)(unaff_ESI + 0x74)) {
      FUN_006c2b20(uVar2);
    }
    else if (*(char *)(unaff_ESI + 0x231) != '\0') {
      *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
      return;
    }
    *(int *)(unaff_ESI + 0x130) = *(int *)(unaff_ESI + 0x130) + -1;
    iVar1 = *(int *)(unaff_ESI + 0x130);
  } while( true );
}


/* FUN_006c2eb0 @ 006c2eb0  kind=gamemisc  attributed-by=none  size=248 */

void FUN_006c2eb0(ushort *param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_ESI;
  
  uVar1 = *param_1;
  if ((uVar1 < *(ushort *)(unaff_ESI + 0x50)) &&
     (uVar2 = *(ushort *)(unaff_ESI + 0x11c), uVar2 < *(ushort *)(unaff_ESI + 0x2c))) {
    if (*(short *)(unaff_ESI + 0x15a) == 0) {
      iVar3 = *(int *)(unaff_ESI + 0x54);
      iVar4 = *(int *)(unaff_ESI + 0x30);
      iVar5 = (uint)uVar1 * 8;
      *(undefined4 *)(iVar3 + iVar5) = *(undefined4 *)(iVar4 + (uint)uVar2 * 8);
      *(undefined4 *)(iVar3 + 4 + iVar5) = *(undefined4 *)(iVar4 + 4 + (uint)uVar2 * 8);
      (**(code **)(unaff_ESI + 0x24c))();
      iVar3 = *(int *)(unaff_ESI + 0x54);
      iVar4 = *(int *)(unaff_ESI + 0x58);
      *(undefined4 *)(iVar4 + iVar5) = *(undefined4 *)(iVar3 + iVar5);
      *(undefined4 *)(iVar4 + 4 + iVar5) = *(undefined4 *)(iVar3 + 4 + iVar5);
    }
    (**(code **)(unaff_ESI + 0x23c))();
    (**(code **)(unaff_ESI + 0x248))();
    *(undefined2 *)(unaff_ESI + 0x11e) = *(undefined2 *)(unaff_ESI + 0x11c);
    *(ushort *)(unaff_ESI + 0x120) = uVar1;
    if ((*(byte *)(unaff_ESI + 0x170) & 1) != 0) {
      *(ushort *)(unaff_ESI + 0x11c) = uVar1;
      return;
    }
  }
  else if (*(char *)(unaff_ESI + 0x231) != '\0') {
    *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
  }
  return;
}


/* FUN_006c2fb0 @ 006c2fb0  kind=gamemisc  attributed-by=none  size=125 */

void FUN_006c2fb0(void)

{
  ushort uVar1;
  ushort *in_EAX;
  int unaff_ESI;
  
  uVar1 = *in_EAX;
  if (uVar1 < *(ushort *)(unaff_ESI + 0x2c)) {
    if ((*(byte *)(unaff_ESI + 0x170) & 1) != 0) {
      (**(code **)(unaff_ESI + 0x23c))();
      (**(code **)(unaff_ESI + 0x238))();
    }
    (**(code **)(unaff_ESI + 0x248))();
    *(ushort *)(unaff_ESI + 0x11c) = uVar1;
    *(ushort *)(unaff_ESI + 0x11e) = uVar1;
  }
  else if (*(char *)(unaff_ESI + 0x231) != '\0') {
    *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
    return;
  }
  return;
}


/* FUN_006c3030 @ 006c3030  kind=gamemisc  attributed-by=none  size=260 */

void FUN_006c3030(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ushort *in_ECX;
  int unaff_ESI;
  
  uVar1 = *in_ECX;
  if ((uVar1 < *(ushort *)(unaff_ESI + 0x2c)) &&
     (*(uint *)(in_ECX + 2) < *(uint *)(unaff_ESI + 0x17c))) {
    (**(code **)(unaff_ESI + 0x250))();
    if (*(short *)(unaff_ESI + 0x158) == 0) {
      iVar4 = (uint)uVar1 * 8;
      uVar5 = FUN_006c10c0();
      *(undefined4 *)(iVar4 + *(int *)(unaff_ESI + 0x30)) = uVar5;
      uVar5 = FUN_006c10c0();
      *(undefined4 *)(*(int *)(unaff_ESI + 0x30) + 4 + iVar4) = uVar5;
      iVar2 = *(int *)(unaff_ESI + 0x30);
      iVar3 = *(int *)(unaff_ESI + 0x34);
      *(undefined4 *)(iVar3 + iVar4) = *(undefined4 *)(iVar2 + iVar4);
      *(undefined4 *)(iVar3 + 4 + iVar4) = *(undefined4 *)(iVar2 + 4 + iVar4);
    }
    (**(code **)(unaff_ESI + 0x23c))();
    if ((*(byte *)(unaff_ESI + 0x170) & 1) != 0) {
      (**(code **)(unaff_ESI + 0x238))();
    }
    (**(code **)(unaff_ESI + 0x248))();
    *(ushort *)(unaff_ESI + 0x11c) = uVar1;
    *(ushort *)(unaff_ESI + 0x11e) = uVar1;
    return;
  }
  if (*(char *)(unaff_ESI + 0x231) != '\0') {
    *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
  }
  return;
}


/* FUN_006c3140 @ 006c3140  kind=gamemisc  attributed-by=none  size=475 */

void FUN_006c3140(void)

{
  int *piVar1;
  ushort uVar2;
  ushort *in_EAX;
  undefined4 uVar3;
  int unaff_ESI;
  int *piVar4;
  
  uVar2 = *in_EAX;
  if ((uVar2 < *(ushort *)(unaff_ESI + 0x50)) &&
     (*(ushort *)(unaff_ESI + 0x11c) < *(ushort *)(unaff_ESI + 0x2c))) {
    if ((*(short *)(unaff_ESI + 0x158) == 0) || (*(short *)(unaff_ESI + 0x15a) == 0)) {
      (**(code **)(unaff_ESI + 0x240))();
    }
    else {
      piVar4 = (int *)(*(int *)(unaff_ESI + 0x5c) + (uint)uVar2 * 8);
      piVar1 = (int *)(*(int *)(unaff_ESI + 0x38) + (uint)*(ushort *)(unaff_ESI + 0x11c) * 8);
      if (*(int *)(unaff_ESI + 0xdc) == *(int *)(unaff_ESI + 0xe0)) {
        uVar3 = (**(code **)(unaff_ESI + 0x240))();
        FUN_0068ebc0(uVar3,*(undefined4 *)(unaff_ESI + 0xdc));
      }
      else {
        FUN_0068ebc0(*piVar4 - *piVar1,*(int *)(unaff_ESI + 0xdc));
        FUN_0068ebc0(piVar4[1] - piVar1[1],*(undefined4 *)(unaff_ESI + 0xe0));
        (**(code **)(unaff_ESI + 0x240))();
      }
    }
    if ((*(byte *)(unaff_ESI + 0x170) & 4) == 0) {
      FUN_006c1590();
    }
    else {
      (**(code **)(unaff_ESI + 0x238))();
    }
    (**(code **)(unaff_ESI + 0x23c))();
    (**(code **)(unaff_ESI + 0x248))();
    *(undefined2 *)(unaff_ESI + 0x11e) = *(undefined2 *)(unaff_ESI + 0x11c);
    *(ushort *)(unaff_ESI + 0x120) = uVar2;
    if ((*(byte *)(unaff_ESI + 0x170) & 0x10) != 0) {
      *(ushort *)(unaff_ESI + 0x11c) = uVar2;
    }
  }
  else if (*(char *)(unaff_ESI + 0x231) != '\0') {
    *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
    return;
  }
  return;
}


/* FUN_006c3320 @ 006c3320  kind=gamemisc  attributed-by=none  size=545 */

void FUN_006c3320(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  ushort *in_EAX;
  int iVar4;
  int unaff_ESI;
  
  uVar1 = *in_EAX;
  if (((uVar1 < *(ushort *)(unaff_ESI + 0x50)) &&
      (*(int *)(in_EAX + 2) + 1U < *(int *)(unaff_ESI + 0x17c) + 1U)) &&
     (*(ushort *)(unaff_ESI + 0x11c) < *(ushort *)(unaff_ESI + 0x2c))) {
    if (*(int *)(in_EAX + 2) != -1) {
      (**(code **)(unaff_ESI + 0x250))();
    }
    if (*(short *)(unaff_ESI + 0x15a) == 0) {
      iVar3 = (uint)uVar1 * 8;
      iVar4 = FUN_006c10c0();
      *(int *)(iVar3 + *(int *)(unaff_ESI + 0x54)) =
           iVar4 + *(int *)(*(int *)(unaff_ESI + 0x30) + (uint)*(ushort *)(unaff_ESI + 0x11c) * 8);
      iVar4 = FUN_006c10c0();
      *(int *)(*(int *)(unaff_ESI + 0x54) + 4 + iVar3) =
           iVar4 + *(int *)(*(int *)(unaff_ESI + 0x30) + 4 +
                           (uint)*(ushort *)(unaff_ESI + 0x11c) * 8);
      iVar4 = *(int *)(unaff_ESI + 0x34);
      iVar2 = *(int *)(unaff_ESI + 0x58);
      *(undefined4 *)(iVar2 + iVar3) = *(undefined4 *)(iVar4 + iVar3);
      *(undefined4 *)(iVar2 + 4 + iVar3) = *(undefined4 *)(iVar4 + 4 + iVar3);
    }
    (**(code **)(unaff_ESI + 0x240))();
    (**(code **)(unaff_ESI + 0x23c))();
    if ((*(byte *)(unaff_ESI + 0x170) & 4) == 0) {
      FUN_006c1590();
    }
    else {
      (**(code **)(unaff_ESI + 0x238))();
    }
    (**(code **)(unaff_ESI + 0x248))();
    *(undefined2 *)(unaff_ESI + 0x11e) = *(undefined2 *)(unaff_ESI + 0x11c);
    if ((*(byte *)(unaff_ESI + 0x170) & 0x10) != 0) {
      *(ushort *)(unaff_ESI + 0x11c) = uVar1;
    }
    *(ushort *)(unaff_ESI + 0x120) = uVar1;
    return;
  }
  if (*(char *)(unaff_ESI + 0x231) != '\0') {
    *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
  }
  return;
}


/* FUN_006c3550 @ 006c3550  kind=gamemisc  attributed-by=none  size=199 */

void FUN_006c3550(void)

{
  int iVar1;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 0x130);
  if ((iVar1 <= *(int *)(unaff_ESI + 0x10)) &&
     (*(ushort *)(unaff_ESI + 0x11c) < *(ushort *)(unaff_ESI + 0x2c))) {
    do {
      if (iVar1 < 1) {
        *(undefined4 *)(unaff_ESI + 0x130) = 1;
        *(undefined4 *)(unaff_ESI + 0x20) = *(undefined4 *)(unaff_ESI + 0x1c);
        return;
      }
      *(int *)(unaff_ESI + 0x1c) = *(int *)(unaff_ESI + 0x1c) + -1;
      if (*(ushort *)(*(int *)(unaff_ESI + 0x18) + *(int *)(unaff_ESI + 0x1c) * 4) <
          *(ushort *)(unaff_ESI + 0x50)) {
        (**(code **)(unaff_ESI + 0x23c))();
        (**(code **)(unaff_ESI + 0x248))();
      }
      else if (*(char *)(unaff_ESI + 0x231) != '\0') {
        *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
        return;
      }
      *(int *)(unaff_ESI + 0x130) = *(int *)(unaff_ESI + 0x130) + -1;
      iVar1 = *(int *)(unaff_ESI + 0x130);
    } while( true );
  }
  if (*(char *)(unaff_ESI + 0x231) == '\0') {
    return;
  }
  *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
  return;
}


/* FUN_006c3620 @ 006c3620  kind=gamemisc  attributed-by=none  size=548 */

void FUN_006c3620(void)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ushort *in_EAX;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int unaff_ESI;
  
  if ((((in_EAX[6] < *(ushort *)(unaff_ESI + 0x2c)) && (in_EAX[8] < *(ushort *)(unaff_ESI + 0x2c)))
      && (in_EAX[2] < *(ushort *)(unaff_ESI + 0x50))) &&
     ((in_EAX[4] < *(ushort *)(unaff_ESI + 0x50) && (*in_EAX < *(ushort *)(unaff_ESI + 0x74))))) {
    iVar11 = *(int *)(unaff_ESI + 0x34);
    iVar4 = (uint)in_EAX[8] * 8;
    iVar5 = (uint)in_EAX[6] * 8;
    iVar14 = *(int *)(iVar11 + iVar5);
    iVar17 = *(int *)(iVar11 + iVar4) - iVar14;
    iVar15 = *(int *)(iVar11 + 4 + iVar5);
    iVar11 = *(int *)(iVar11 + 4 + iVar4);
    iVar6 = (uint)in_EAX[4] * 8;
    iVar7 = (uint)in_EAX[2] * 8;
    iVar2 = *(int *)(iVar7 + *(int *)(unaff_ESI + 0x58));
    iVar9 = *(int *)(unaff_ESI + 0x58);
    iVar8 = *(int *)(iVar9 + iVar6) - iVar2;
    iVar3 = *(int *)(iVar7 + 4 + iVar9);
    iVar9 = *(int *)(iVar9 + 4 + iVar6) - iVar3;
    uVar10 = (uint)*in_EAX;
    pbVar1 = (byte *)(uVar10 + *(int *)(unaff_ESI + 0x84));
    *pbVar1 = *pbVar1 | 0x18;
    iVar11 = -(iVar11 - iVar15);
    iVar12 = FUN_0068ea60(iVar8,iVar11,0x40);
    iVar13 = FUN_0068ea60(iVar9,iVar17,0x40);
    uVar16 = iVar12 + iVar13;
    if (0x3f < (int)((uVar16 ^ (int)uVar16 >> 0x1f) - ((int)uVar16 >> 0x1f))) {
      iVar11 = FUN_0068ea60(iVar14 - iVar2,iVar11,0x40);
      iVar14 = FUN_0068ea60(iVar15 - iVar3,iVar17,0x40);
      iVar15 = FUN_0068ea60(iVar11 + iVar14,iVar8,uVar16);
      iVar11 = FUN_0068ea60(iVar11 + iVar14,iVar9,uVar16);
      *(int *)(*(int *)(unaff_ESI + 0x7c) + uVar10 * 8) =
           *(int *)(*(int *)(unaff_ESI + 0x58) + iVar7) + iVar15;
      *(int *)(*(int *)(unaff_ESI + 0x7c) + 4 + uVar10 * 8) =
           *(int *)(*(int *)(unaff_ESI + 0x58) + 4 + iVar7) + iVar11;
      return;
    }
    iVar11 = *(int *)(iVar7 + *(int *)(unaff_ESI + 0x58)) +
             *(int *)(*(int *)(unaff_ESI + 0x58) + iVar6) +
             *(int *)(*(int *)(unaff_ESI + 0x34) + iVar5) +
             *(int *)(*(int *)(unaff_ESI + 0x34) + iVar4);
    *(int *)(*(int *)(unaff_ESI + 0x7c) + uVar10 * 8) = (int)(iVar11 + (iVar11 >> 0x1f & 3U)) >> 2;
    iVar11 = *(int *)(iVar7 + 4 + *(int *)(unaff_ESI + 0x58)) +
             *(int *)(*(int *)(unaff_ESI + 0x58) + 4 + iVar6) +
             *(int *)(*(int *)(unaff_ESI + 0x34) + 4 + iVar5) +
             *(int *)(*(int *)(unaff_ESI + 0x34) + 4 + iVar4);
    *(int *)(*(int *)(unaff_ESI + 0x7c) + 4 + uVar10 * 8) =
         (int)(iVar11 + (iVar11 >> 0x1f & 3U)) >> 2;
    return;
  }
  if (*(char *)(unaff_ESI + 0x231) != '\0') {
    *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
  }
  return;
}


/* FUN_006c3850 @ 006c3850  kind=gamemisc  attributed-by=none  size=129 */

void FUN_006c3850(void)

{
  uint *in_EAX;
  int unaff_ESI;
  
  if ((*in_EAX < (uint)*(ushort *)(unaff_ESI + 0x50)) &&
     (in_EAX[1] < (uint)*(ushort *)(unaff_ESI + 0x2c))) {
    (**(code **)(unaff_ESI + 0x23c))();
    (**(code **)(unaff_ESI + 0x248))();
    (**(code **)(unaff_ESI + 0x248))();
    return;
  }
  if (*(char *)(unaff_ESI + 0x231) != '\0') {
    *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
  }
  return;
}


/* FUN_006c38e0 @ 006c38e0  kind=gamemisc  attributed-by=none  size=535 */

void FUN_006c38e0(void)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int unaff_ESI;
  int local_14;
  undefined4 local_c;
  
  if (*(int *)(unaff_ESI + 0x10) < *(int *)(unaff_ESI + 0x130)) {
    *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
    return;
  }
  if (((*(short *)(unaff_ESI + 0x158) == 0) || (*(short *)(unaff_ESI + 0x15a) == 0)) ||
     (*(short *)(unaff_ESI + 0x15c) == 0)) {
    bVar2 = true;
    bVar1 = true;
  }
  else {
    bVar1 = false;
    bVar2 = false;
  }
  if (*(ushort *)(unaff_ESI + 0x11e) < *(ushort *)(unaff_ESI + 0x2c)) {
    if (*(ushort *)(unaff_ESI + 0x120) < *(ushort *)(unaff_ESI + 0x50)) {
      local_14 = (**(code **)(unaff_ESI + 0x240))();
      local_c = (**(code **)(unaff_ESI + 0x23c))();
    }
    else {
      local_14 = 0;
      local_c = 0;
    }
    iVar3 = *(int *)(unaff_ESI + 0x130);
    while (0 < iVar3) {
      *(int *)(unaff_ESI + 0x1c) = *(int *)(unaff_ESI + 0x1c) + -1;
      if (*(uint *)(*(int *)(unaff_ESI + 0x18) + *(int *)(unaff_ESI + 0x1c) * 4) <
          (uint)*(ushort *)(unaff_ESI + 0x74)) {
        if (bVar1) {
          iVar3 = (**(code **)(unaff_ESI + 0x240))();
        }
        else {
          iVar3 = (**(code **)(unaff_ESI + 0x240))();
        }
        (**(code **)(unaff_ESI + 0x23c))();
        if ((iVar3 != 0) && (local_14 != 0)) {
          FUN_0068ea60(iVar3,local_c,local_14);
        }
        (**(code **)(unaff_ESI + 0x248))();
        bVar1 = bVar2;
      }
      else if (*(char *)(unaff_ESI + 0x231) != '\0') {
        *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
        return;
      }
      *(int *)(unaff_ESI + 0x130) = *(int *)(unaff_ESI + 0x130) + -1;
      iVar3 = *(int *)(unaff_ESI + 0x130);
    }
    *(undefined4 *)(unaff_ESI + 0x130) = 1;
    *(undefined4 *)(unaff_ESI + 0x20) = *(undefined4 *)(unaff_ESI + 0x1c);
  }
  else if (*(char *)(unaff_ESI + 0x231) != '\0') {
    *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
    return;
  }
  return;
}


/* FUN_006c3b00 @ 006c3b00  kind=gamemisc  attributed-by=none  size=61 */

void FUN_006c3b00(void)

{
  byte *pbVar1;
  int in_EAX;
  byte bVar2;
  ushort *in_ECX;
  
  if (*in_ECX < *(ushort *)(in_EAX + 0x2c)) {
    bVar2 = 0xff;
    if (*(short *)(in_EAX + 0x12a) != 0) {
      bVar2 = 0xf7;
    }
    if (*(short *)(in_EAX + 300) != 0) {
      bVar2 = bVar2 & 0xef;
    }
    pbVar1 = (byte *)(*(int *)(in_EAX + 0x3c) + (uint)*in_ECX);
    *pbVar1 = *pbVar1 & bVar2;
  }
  else if (*(char *)(in_EAX + 0x231) != '\0') {
    *(undefined4 *)(in_EAX + 0xc) = 0x86;
    return;
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


/* FUN_006c3cc0 @ 006c3cc0  kind=gamemisc  attributed-by=none  size=398 */

void FUN_006c3cc0(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte local_1d;
  
  if (*(short *)(param_1 + 0x9a) != 0) {
    if ((*(byte *)(param_1 + 0x170) & 1) == 0) {
      local_1d = 0x10;
    }
    else {
      local_1d = 8;
    }
    sVar4 = 0;
    uVar6 = 0;
    do {
      uVar5 = (uint)*(ushort *)(*(int *)(param_1 + 0xac) + sVar4 * 2) -
              (uint)*(ushort *)(param_1 + 0xb0);
      if (*(ushort *)(param_1 + 0x98) <= uVar5) {
        uVar5 = *(ushort *)(param_1 + 0x98) - 1;
      }
      uVar8 = uVar6;
      if (uVar6 <= uVar5) {
        uVar7 = uVar6;
        do {
          if ((*(byte *)(*(int *)(param_1 + 0xa8) + uVar7) & local_1d) != 0) {
            uVar8 = uVar7;
            uVar3 = uVar7;
            if (uVar7 <= uVar5) {
              while (uVar2 = uVar8, uVar1 = uVar3, uVar8 = uVar2 + 1, uVar8 <= uVar5) {
                uVar3 = uVar1;
                if (((*(byte *)(*(int *)(param_1 + 0xa8) + uVar8) & local_1d) != 0) &&
                   (uVar3 = uVar8, uVar8 != 0)) {
                  FUN_006c3b80(uVar1 + 1,uVar2);
                }
              }
              if (uVar1 == uVar7) {
                FUN_006c3b40();
              }
              else {
                FUN_006c3b80(uVar1 + 1 & 0xffff,uVar5);
                if (uVar7 != 0) {
                  FUN_006c3b80(uVar6,uVar7 - 1);
                }
              }
            }
            break;
          }
          uVar8 = uVar7 + 1;
          uVar7 = uVar8;
        } while (uVar8 <= uVar5);
      }
      sVar4 = sVar4 + 1;
      uVar6 = uVar8;
    } while (sVar4 < *(short *)(param_1 + 0x9a));
  }
  return;
}


/* FUN_006c3e60 @ 006c3e60  kind=gamemisc  attributed-by=none  size=233 */

void FUN_006c3e60(void)

{
  short sVar1;
  uint uVar2;
  uint *in_EAX;
  int iVar3;
  int unaff_ESI;
  uint uVar4;
  uint local_8;
  
  uVar2 = *in_EAX;
  local_8 = 1;
  if (uVar2 != 0) {
    do {
      if (*(int *)(unaff_ESI + 0x1c) < 2) {
        *(undefined4 *)(unaff_ESI + 0xc) = 0x81;
        return;
      }
      iVar3 = *(int *)(unaff_ESI + 0x1c) + -2;
      *(int *)(unaff_ESI + 0x1c) = iVar3;
      if (*(ushort *)(*(int *)(unaff_ESI + 0x18) + 4 + iVar3 * 4) < *(ushort *)(unaff_ESI + 0x2c)) {
        uVar4 = *(uint *)(*(int *)(unaff_ESI + 0x18) + iVar3 * 4) >> 4 & 0xf;
        if (*(char *)(unaff_ESI + 0x170) == 'q') {
          uVar4 = uVar4 + 0x10;
        }
        else if (*(char *)(unaff_ESI + 0x170) == 'r') {
          uVar4 = uVar4 + 0x20;
        }
        sVar1 = *(short *)(unaff_ESI + 0x14c);
        iVar3 = FUN_006c1250();
        if (iVar3 == uVar4 + (int)sVar1) {
          (**(code **)(unaff_ESI + 0x248))();
        }
      }
      else if (*(char *)(unaff_ESI + 0x231) != '\0') {
        *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
      }
      local_8 = local_8 + 1;
    } while (local_8 <= uVar2);
  }
  *(undefined4 *)(unaff_ESI + 0x20) = *(undefined4 *)(unaff_ESI + 0x1c);
  return;
}


/* FUN_006c3f50 @ 006c3f50  kind=gamemisc  attributed-by=none  size=235 */

uint FUN_006c3f50(void)

{
  short sVar1;
  uint uVar2;
  uint *in_EAX;
  int iVar3;
  int iVar4;
  uint uVar5;
  int unaff_ESI;
  uint local_8;
  
  uVar2 = *in_EAX;
  local_8 = 1;
  uVar5 = 0;
  if (uVar2 != 0) {
    do {
      uVar5 = *(uint *)(unaff_ESI + 0x1c);
      if ((int)uVar5 < 2) {
        *(undefined4 *)(unaff_ESI + 0xc) = 0x81;
        return uVar5;
      }
      iVar4 = *(int *)(unaff_ESI + 0x18);
      iVar3 = uVar5 - 2;
      *(int *)(unaff_ESI + 0x1c) = iVar3;
      if (*(uint *)(iVar4 + 4 + iVar3 * 4) < *(uint *)(unaff_ESI + 0x17c)) {
        uVar5 = *(uint *)(iVar4 + iVar3 * 4) >> 4 & 0xf;
        if (*(char *)(unaff_ESI + 0x170) == 't') {
          uVar5 = uVar5 + 0x10;
        }
        else if (*(char *)(unaff_ESI + 0x170) == 'u') {
          uVar5 = uVar5 + 0x20;
        }
        sVar1 = *(short *)(unaff_ESI + 0x14c);
        iVar4 = FUN_006c1250();
        if (iVar4 == uVar5 + (int)sVar1) {
          (**(code **)(unaff_ESI + 600))();
        }
      }
      else if (*(char *)(unaff_ESI + 0x231) != '\0') {
        *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
        return iVar4 + iVar3 * 4;
      }
      uVar5 = local_8 + 1;
      local_8 = uVar5;
    } while (uVar5 <= uVar2);
  }
  *(undefined4 *)(unaff_ESI + 0x20) = *(undefined4 *)(unaff_ESI + 0x1c);
  return uVar5;
}


/* FUN_006c4040 @ 006c4040  kind=gamemisc  attributed-by=none  size=74 */

void FUN_006c4040(void)

{
  uint uVar1;
  uint uVar2;
  uint *in_EDX;
  int unaff_ESI;
  
  uVar1 = *in_EDX;
  uVar2 = 0;
  if ((uVar1 & 1) != 0) {
    uVar2 = 0x23;
  }
  if (((uVar1 & 2) != 0) && (*(char *)(unaff_ESI + 0x119) != '\0')) {
    uVar2 = uVar2 | 0x80;
  }
  if (((uVar1 & 4) != 0) && (*(char *)(unaff_ESI + 0x11a) != '\0')) {
    uVar2 = uVar2 | 0x100;
  }
  if (((uVar1 & 0x20) != 0) && (*(char *)(unaff_ESI + 0x25c) != '\0')) {
    uVar2 = uVar2 | 0x1000;
  }
  *in_EDX = uVar2;
  return;
}


/* FUN_006c4090 @ 006c4090  kind=gamemisc  attributed-by=none  size=148 */

void FUN_006c4090(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int unaff_EDI;
  
  uVar4 = *(uint *)(unaff_EDI + 0x1a0);
  uVar2 = *(int *)(unaff_EDI + 0x198) * 0x10 + uVar4;
  if (uVar4 < uVar2) {
    do {
      if ((*(char *)(uVar4 + 8) == *(char *)(unaff_EDI + 0x170)) && (*(char *)(uVar4 + 0xc) != '\0')
         ) {
        iVar1 = *(int *)(unaff_EDI + 0x1ac);
        if (*(int *)(unaff_EDI + 0x1b0) <= iVar1) {
          *(undefined4 *)(unaff_EDI + 0xc) = 0x82;
          return;
        }
        *(int *)(unaff_EDI + 0x1ac) = iVar1 + 1;
        puVar3 = (undefined4 *)(iVar1 * 0x10 + *(int *)(unaff_EDI + 0x1b4));
        *puVar3 = *(undefined4 *)(unaff_EDI + 0x160);
        puVar3[1] = *(int *)(unaff_EDI + 0x168) + 1;
        puVar3[2] = 1;
        puVar3[3] = *(undefined4 *)(uVar4 + 4);
        FUN_006c1390();
        *(undefined1 *)(unaff_EDI + 0x178) = 0;
        return;
      }
      uVar4 = uVar4 + 0x10;
    } while (uVar4 < uVar2);
  }
  *(undefined4 *)(unaff_EDI + 0xc) = 0x80;
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


/* FUN_006c63d0 @ 006c63d0  kind=gamemisc  attributed-by=none  size=161 */

undefined4 FUN_006c63d0(ushort param_1,int param_2,uint param_3,uint param_4,int param_5)

{
  undefined4 in_ECX;
  uint uVar1;
  undefined4 local_4;
  
  local_4._1_3_ = (undefined3)((uint)in_ECX >> 8);
  local_4 = CONCAT31(local_4._1_3_,~(byte)(param_4 >> 9)) & 0xffffff01;
  if ((param_4 & 0x10) == 0) {
    uVar1 = 0;
    if (param_3 != 0) {
      do {
        FUN_006bf970(local_4);
        *(uint *)(param_5 + uVar1 * 4) = (uint)param_1;
        uVar1 = uVar1 + 1;
      } while (uVar1 < param_3);
    }
  }
  else {
    uVar1 = 0;
    if (param_3 != 0) {
      do {
        FUN_006bf9b0(uVar1 + param_2);
        *(uint *)(param_5 + uVar1 * 4) = param_4 & 0xffff;
        uVar1 = uVar1 + 1;
      } while (uVar1 < param_3);
      return 0;
    }
  }
  return 0;
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


/* FUN_006c64d0 @ 006c64d0  kind=gamemisc  attributed-by=none  size=109 */

int FUN_006c64d0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = param_2;
  piVar1 = param_1;
  iVar3 = *param_1;
  iVar4 = 0;
  if ((*(byte *)(iVar3 + 8) & 2) != 0) {
    iVar4 = (**(code **)(*(int *)(iVar3 + 0x214) + 0x94))(iVar3,param_2,&param_1);
    if (iVar4 == 0) {
      iVar3 = FUN_006c6480(piVar1,param_1);
      return iVar3;
    }
    piVar1[0x1c] = -1;
  }
  FUN_0068f5f0(*piVar1,uVar2);
  if ((*(byte *)(*piVar1 + 8) & 1) != 0) {
    iVar4 = FUN_006c0a40();
  }
  return iVar4;
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


/* FUN_006c6890 @ 006c6890  kind=gamemisc  attributed-by=none  size=506 */

int * FUN_006c6890(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int local_c;
  undefined4 local_8;
  undefined4 *local_4;
  
  piVar3 = param_1;
  iVar2 = param_1[3];
  iVar4 = *(int *)(iVar2 + 0x3c);
  iVar6 = (int)*(short *)(iVar2 + 0x3a);
  *(int *)(iVar4 + iVar6 * 8) = param_1[0x11];
  *(int *)(iVar4 + 4 + iVar6 * 8) = param_1[0x12];
  iVar4 = *(int *)(iVar2 + 0x3c);
  *(int *)(iVar4 + 8 + iVar6 * 8) = param_1[0x13];
  *(int *)(iVar4 + 0xc + iVar6 * 8) = param_1[0x14];
  iVar4 = *(int *)(iVar2 + 0x3c);
  *(int *)(iVar4 + 0x10 + iVar6 * 8) = param_1[0x2e];
  *(int *)(iVar4 + 0x14 + iVar6 * 8) = param_1[0x2f];
  iVar4 = *(int *)(iVar2 + 0x3c);
  *(int *)(iVar4 + 0x18 + iVar6 * 8) = param_1[0x30];
  *(int *)(iVar4 + 0x1c + iVar6 * 8) = param_1[0x31];
  *(undefined1 *)(iVar6 + *(int *)(iVar2 + 0x40)) = 0;
  *(undefined1 *)(iVar6 + 1 + *(int *)(iVar2 + 0x40)) = 0;
  *(undefined1 *)(iVar6 + 2 + *(int *)(iVar2 + 0x40)) = 0;
  *(undefined1 *)(iVar6 + 3 + *(int *)(iVar2 + 0x40)) = 0;
  iVar6 = iVar6 + 4;
  if (*(char *)(*param_1 + 0x2c4) != '\0') {
    local_8 = *(undefined4 *)(*param_1 + 100);
    iVar4 = FUN_006c5e40(param_1[5],&local_c,iVar6);
    if (iVar4 != 0) {
      return (int *)iVar4;
    }
    iVar4 = 0;
    if (0 < iVar6) {
      do {
        piVar1 = (int *)(*(int *)(iVar2 + 0x3c) + iVar4 * 8);
        *piVar1 = *piVar1 + *(int *)(local_c + iVar4 * 8);
        piVar1 = (int *)(*(int *)(iVar2 + 0x3c) + 4 + iVar4 * 8);
        *piVar1 = *piVar1 + *(int *)(local_c + 4 + iVar4 * 8);
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar6);
    }
    FUN_00691290(local_8,local_c);
  }
  param_1 = (int *)0x0;
  if ((*(byte *)(piVar3 + 4) & 2) == 0) {
    FUN_006c02c0();
    memcpy((void *)piVar3[0x24],(void *)piVar3[0x23],(uint)*(ushort *)(piVar3 + 0x21) * 8 + 0x20);
  }
  if ((*(byte *)(piVar3 + 4) & 1) == 0) {
    puVar7 = *(undefined4 **)(iVar2 + 0x3c);
    local_8 = *(undefined4 *)(piVar3[1] + 0x30);
    local_c = *(int *)(piVar3[1] + 0x34);
    local_4 = puVar7 + iVar6 * 2;
    if (puVar7 < local_4) {
      do {
        uVar5 = FUN_0068ebc0(*puVar7,local_8);
        *puVar7 = uVar5;
        uVar5 = FUN_0068ebc0(puVar7[1],local_c);
        puVar7[1] = uVar5;
        puVar7 = puVar7 + 2;
      } while (puVar7 < local_4);
    }
    iVar4 = *(int *)(iVar2 + 0x3c);
    piVar3[0x11] = *(int *)(iVar4 + -0x20 + iVar6 * 8);
    piVar3[0x12] = *(int *)(iVar4 + -0x1c + iVar6 * 8);
    iVar4 = *(int *)(iVar2 + 0x3c);
    piVar3[0x13] = *(int *)(iVar4 + -0x18 + iVar6 * 8);
    piVar3[0x14] = *(int *)(iVar4 + -0x14 + iVar6 * 8);
    iVar4 = *(int *)(iVar2 + 0x3c);
    piVar3[0x2e] = *(int *)(iVar4 + -0x10 + iVar6 * 8);
    piVar3[0x2f] = *(int *)(iVar4 + -0xc + iVar6 * 8);
    iVar2 = *(int *)(iVar2 + 0x3c);
    piVar3[0x30] = *(int *)(iVar2 + -8 + iVar6 * 8);
    piVar3[0x31] = *(int *)(iVar2 + -4 + iVar6 * 8);
  }
  if ((*(byte *)(piVar3 + 4) & 2) == 0) {
    *(short *)(piVar3 + 0x21) = (short)piVar3[0x21] + 4;
    param_1 = (int *)FUN_006c6620(piVar3,0);
  }
  return param_1;
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


/* FUN_006c7400 @ 006c7400  kind=gamemisc  attributed-by=none  size=300 */

int FUN_006c7400(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  
  iVar2 = FUN_0068fdf0(*(undefined4 *)(*(int *)(param_2 + 0x60) + 4),&DAT_007235ec);
  if (iVar2 == 0) {
    return 2;
  }
  iVar3 = FUN_006908c0(param_1,0);
  if (iVar3 != 0) {
    return iVar3;
  }
  iVar3 = (**(code **)(iVar2 + 4))(param_1,param_2,param_3,param_4,param_5);
  if (iVar3 != 0) {
    return iVar3;
  }
  iVar3 = *(int *)(param_2 + 0x94);
  if (((iVar3 != 0x10000) && (iVar3 != 0x20000)) && (iVar3 != 0x74727565)) {
    return 2;
  }
  *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x800;
  if (param_3 < 0) {
    return 0;
  }
  iVar2 = (**(code **)(iVar2 + 8))(param_1,param_2,param_3,param_4,param_5);
  if (iVar2 == 0) {
    cVar1 = FUN_006c0910();
    if (cVar1 != '\0') {
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x2000;
    }
    iVar2 = FUN_006bf740(param_2,param_1);
    if (iVar2 == 0) {
      if (((((*(byte *)(param_2 + 8) & 1) != 0) &&
           ((*(int *)(*(int *)(param_2 + 0x80) + 0x34) != 0 ||
            (iVar2 = FUN_006bf480(param_1), iVar2 == 0)))) &&
          (iVar2 = FUN_006c6540(param_1), iVar2 == 0)) && (iVar2 = FUN_006bf6a0(), iVar2 == 0)) {
        FUN_006bf6f0();
      }
      FUN_006c0280();
      return extraout_ECX;
    }
    return iVar2;
  }
  return iVar2;
}


/* FUN_006c7530 @ 006c7530  kind=gamemisc  attributed-by=none  size=171 */

void FUN_006c7530(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 100);
    uVar2 = *(undefined4 *)(param_1 + 0x68);
    iVar3 = *(int *)(param_1 + 0x214);
    if (*(code **)(param_1 + 0x2b8) != (code *)0x0) {
      (**(code **)(param_1 + 0x2b8))(*(undefined4 *)(param_1 + 0x2b4));
    }
    if (iVar3 != 0) {
      (**(code **)(iVar3 + 0xc))(param_1);
    }
    FUN_006bf680();
    FUN_006bf8d0();
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x2a0));
    *(undefined4 *)(param_1 + 0x2a0) = 0;
    *(undefined4 *)(param_1 + 0x29c) = 0;
    FUN_00691ee0(uVar2,param_1 + 0x290);
    FUN_00691ee0(uVar2,param_1 + 0x298);
    *(undefined4 *)(param_1 + 0x28c) = 0;
    *(undefined4 *)(param_1 + 0x294) = 0;
    FUN_006c6340();
    *(undefined4 *)(param_1 + 0x2c8) = 0;
  }
  return;
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


/* FUN_006c77d0 @ 006c77d0  kind=gamemisc  attributed-by=none  size=405 */

int * FUN_006c77d0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  
  piVar3 = param_1;
  iVar1 = *param_1;
  uVar2 = *(undefined4 *)(iVar1 + 100);
  *(undefined2 *)(param_1 + 0x4b) = 1;
  param_1[0x1e] = (uint)*(ushort *)(iVar1 + 0x118);
  param_1[0x21] = (uint)*(ushort *)(iVar1 + 0x11a);
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x3c] = *(int *)(iVar1 + 0x29c);
  *(undefined2 *)(param_1 + 0x3e) = *(undefined2 *)(iVar1 + 0x116);
  *(undefined2 *)((int)param_1 + 0x6d) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  iVar5 = FUN_00693a60(uVar2,0x10,0,param_1[0x1e],0,&param_1);
  piVar3[0x1f] = iVar5;
  if (param_1 == (int *)0x0) {
    iVar5 = FUN_00693a60(uVar2,0x10,0,piVar3[0x21],0,&param_1);
    piVar3[0x22] = iVar5;
    if (param_1 == (int *)0x0) {
      iVar5 = FUN_00693a60(uVar2,4,0,piVar3[0x3c],0,&param_1);
      piVar3[0x3d] = iVar5;
      if (param_1 == (int *)0x0) {
        iVar5 = FUN_00693a60(uVar2,4,0,(short)piVar3[0x3e],0,&param_1);
        piVar3[0x3f] = iVar5;
        if (param_1 == (int *)0x0) {
          sVar4 = *(short *)(iVar1 + 0x114) + 4;
          param_1 = (int *)FUN_006c0820(sVar4,0);
          if (param_1 == (int *)0x0) {
            *(short *)(piVar3 + 0x42) = sVar4;
            piVar6 = &DAT_00735e08;
            piVar7 = piVar3 + 0x2b;
            for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
              *piVar7 = *piVar6;
              piVar6 = piVar6 + 1;
              piVar7 = piVar7 + 1;
            }
            iVar5 = *(int *)(*(int *)(*(int *)(iVar1 + 0x60) + 4) + 0xb4);
            *(int *)(iVar1 + 0x2b0) = iVar5;
            if (iVar5 == 0) {
              *(undefined1 **)(iVar1 + 0x2b0) = &LAB_006c4130;
            }
            param_1 = (int *)FUN_006c75e0(piVar3);
            if (param_1 == (int *)0x0) {
              return (int *)0x0;
            }
          }
        }
      }
    }
  }
  FUN_006c0950();
  return param_1;
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


/* FUN_006c7c30 @ 006c7c30  kind=gamemisc  attributed-by=none  size=509 */

int FUN_006c7c30(int param_1,uint param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  ushort *puVar10;
  int local_18;
  int local_14;
  uint *local_10;
  uint local_c;
  undefined4 local_8;
  int local_4;
  
  local_8 = *(undefined4 *)(param_1 + 100);
  iVar5 = 0;
  local_18 = 0;
  if ((*(int *)(param_1 + 0x2c8) != 0) || (local_18 = FUN_006c5630(param_1,0), local_18 == 0)) {
    iVar9 = *(int *)(param_1 + 0x2c8);
    puVar7 = *(uint **)(iVar9 + 8);
    local_10 = puVar7;
    local_4 = iVar9;
    if (param_2 == *puVar7) {
      iVar5 = FUN_00693a60(local_8,4,0,*puVar7,0,&local_18);
      local_14 = iVar5;
      if (local_18 == 0) {
        local_c = 0;
        if (*puVar7 != 0) {
          piVar6 = (int *)(puVar7[3] + 8);
          iVar3 = iVar5 - (int)param_3;
          do {
            iVar9 = *param_3;
            iVar1 = piVar6[1];
            iVar5 = local_14;
            if ((iVar1 < iVar9) || (iVar9 < piVar6[-1])) goto LAB_006c7d9e;
            iVar5 = *piVar6;
            if (iVar9 < iVar5) {
              iVar5 = FUN_0068ea60(iVar9 - iVar5,0x10000,piVar6[-1] - iVar5);
              iVar5 = -iVar5;
LAB_006c7d29:
              *(int *)(iVar3 + (int)param_3) = iVar5;
            }
            else {
              if (iVar1 != iVar5) {
                iVar5 = FUN_0068ea60(iVar9 - iVar5,0x10000,iVar1 - iVar5);
                goto LAB_006c7d29;
              }
              *(undefined4 *)(iVar3 + (int)param_3) = 0;
            }
            local_c = local_c + 1;
            param_3 = param_3 + 1;
            piVar6 = piVar6 + 6;
            puVar7 = local_10;
            iVar9 = local_4;
          } while (local_c < *local_10);
        }
        iVar5 = local_14;
        if (*(char *)(iVar9 + 0x10) == '\0') {
          FUN_006c5120();
        }
        puVar10 = *(ushort **)(iVar9 + 0x14);
        if ((puVar10 != (ushort *)0x0) && (uVar4 = 0, *puVar7 != 0)) {
          do {
            uVar8 = 1;
            if (1 < *puVar10) {
              piVar6 = *(int **)(puVar10 + 2);
              iVar9 = *(int *)(iVar5 + uVar4 * 4);
              do {
                piVar6 = piVar6 + 2;
                if (iVar9 < *piVar6) {
                  iVar5 = *(int *)(puVar10 + 2);
                  piVar6 = (int *)(iVar5 + uVar8 * 8);
                  iVar3 = piVar6[-2];
                  uVar2 = FUN_0068ea60(iVar9 - iVar3,0x10000,*piVar6 - iVar3,
                                       *(int *)(iVar5 + 4 + uVar8 * 8) -
                                       *(int *)(iVar5 + -4 + uVar8 * 8),0x10000);
                  iVar5 = FUN_0068ea60(uVar2);
                  *(int *)(local_14 + uVar4 * 4) =
                       iVar5 + *(int *)(*(int *)(puVar10 + 2) + -4 + uVar8 * 8);
                  iVar5 = local_14;
                  break;
                }
                uVar8 = uVar8 + 1;
              } while (uVar8 < *puVar10);
            }
            uVar4 = uVar4 + 1;
            puVar10 = puVar10 + 4;
          } while (uVar4 < *local_10);
        }
        local_18 = FUN_006c7ab0(param_1,param_2,iVar5);
      }
    }
    else {
LAB_006c7d9e:
      local_18 = 6;
    }
  }
  FUN_00691290(local_8,iVar5);
  return local_18;
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


/* FUN_006c8020 @ 006c8020  kind=gamemisc  attributed-by=none  size=579 */

void FUN_006c8020(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  uint unaff_EBX;
  int unaff_EDI;
  uint local_dc;
  int local_d8;
  undefined1 local_d4 [12];
  int local_c8;
  int local_a4;
  undefined4 local_98;
  int local_90;
  int local_34;
  int local_24;
  int local_20;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_dc;
  iVar2 = *(int *)(in_ECX + 4);
  if (((*(int *)(unaff_EDI + 0x70) != -1) && ((unaff_EBX & 8) == 0)) &&
     (iVar1 = FUN_006c06f0(), iVar1 == 0)) {
    if ((*(byte *)(iVar2 + 8) & 1) != 0) {
      FUN_006c7e30(local_d4);
      FUN_006c6ce0(local_d4,param_1,0,1);
      *(undefined4 *)(in_ECX + 0x38) = local_98;
      *(int *)(in_ECX + 0x3c) = (local_a4 - local_20) + local_24;
      if ((*(int *)(iVar2 + 0x1e0) != 0) && ((unaff_EBX & 0x200) == 0)) {
        *(uint *)(in_ECX + 0x38) = (uint)*(ushort *)(iVar2 + 0xe2);
      }
    }
    __security_check_cookie(local_4 ^ (uint)&local_dc);
    return;
  }
  local_dc = unaff_EBX & 1;
  if ((local_dc == 0) && (*(char *)(unaff_EDI + 0x6c) == '\0')) {
    __security_check_cookie(local_4 ^ (uint)&local_dc);
    return;
  }
  if ((unaff_EBX & 0x4000) != 0) {
    __security_check_cookie(local_4 ^ (uint)&local_dc);
    return;
  }
  iVar2 = FUN_006c7e30(local_d4);
  if (iVar2 != 0) goto LAB_006c824c;
  *(undefined4 *)(in_ECX + 0x48) = 0x6f75746c;
  *(undefined4 *)(in_ECX + 0x80) = 0;
  *(undefined4 *)(in_ECX + 0x7c) = 0;
  local_d8 = FUN_006c6ce0(local_d4,param_1,0,0);
  if (local_d8 == 0) {
    if (*(int *)(in_ECX + 0x48) == 0x636f6d70) {
      *(undefined4 *)(in_ECX + 0x80) = *(undefined4 *)(local_c8 + 0x30);
      *(undefined4 *)(in_ECX + 0x84) = *(undefined4 *)(local_c8 + 0x34);
    }
    else {
      *(undefined4 *)(in_ECX + 0x6c) = *(undefined4 *)(local_c8 + 0x14);
      *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(local_c8 + 0x18);
      *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(local_c8 + 0x1c);
      *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(local_c8 + 0x20);
      *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(local_c8 + 0x24);
      *(uint *)(in_ECX + 0x7c) = *(uint *)(in_ECX + 0x7c) & 0xfffffdff;
      if (local_90 != 0) {
        FUN_006904c0(in_ECX + 0x6c,-local_90,0);
      }
    }
    if ((unaff_EBX & 2) != 0) goto switchD_006c8203_caseD_1;
    if (*(char *)(local_34 + 0x151) == '\0') {
switchD_006c8203_caseD_2:
      *(uint *)(in_ECX + 0x7c) = *(uint *)(in_ECX + 0x7c) | 8;
    }
    else {
      switch(*(undefined4 *)(local_34 + 0x154)) {
      case 0:
        *(uint *)(in_ECX + 0x7c) = *(uint *)(in_ECX + 0x7c) | 0x20;
        break;
      case 1:
        break;
      default:
        goto switchD_006c8203_caseD_2;
      case 4:
        *(uint *)(in_ECX + 0x7c) = *(uint *)(in_ECX + 0x7c) | 0x30;
        break;
      case 5:
        *(uint *)(in_ECX + 0x7c) = *(uint *)(in_ECX + 0x7c) | 0x10;
      }
    }
switchD_006c8203_caseD_1:
    FUN_006c04a0(param_1);
  }
  if ((local_dc == 0) && (*(ushort *)(unaff_EDI + 0xe) < 0x18)) {
    *(uint *)(in_ECX + 0x7c) = *(uint *)(in_ECX + 0x7c) | 0x100;
  }
LAB_006c824c:
  __security_check_cookie(local_4 ^ (uint)&local_dc);
  return;
}


/* FUN_006c83c0 @ 006c83c0  kind=gamemisc  attributed-by=none  size=354 */

undefined4 FUN_006c83c0(int *param_1)

{
  int *piVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  undefined **ppuVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint local_c;
  int local_8;
  undefined4 local_4;
  
  iVar2 = *param_1;
  local_4 = *(undefined4 *)(iVar2 + 0x5c);
  _Dst = (void *)param_1[2];
  memset(_Dst,0x7f,param_1[1]);
  iVar3 = FUN_0068fb10(iVar2,0x756e6963);
  if (iVar3 == 0) {
    ppuVar4 = &PTR_DAT_007362b8;
    local_8 = 0;
    do {
      piVar7 = *(int **)(*ppuVar4 + 4);
      if (piVar7 != (int *)0x0) {
        iVar3 = *piVar7;
        while (iVar3 != 0) {
          local_c = FUN_0068fb90(iVar2,iVar3);
          if (((local_c != 0) && (local_c < (uint)param_1[1])) &&
             (*(char *)(local_c + (int)_Dst) == '\x7f')) {
            *(undefined1 *)(local_c + (int)_Dst) = (undefined1)local_8;
          }
          for (uVar5 = FUN_0068fbb0(iVar2,iVar3,&local_c);
              (local_c != 0 && (uVar5 <= (uint)piVar7[1]));
              uVar5 = FUN_0068fbb0(iVar2,uVar5,&local_c)) {
            if ((local_c < (uint)param_1[1]) && (*(char *)(local_c + (int)_Dst) == '\x7f')) {
              *(undefined1 *)(local_c + (int)_Dst) = (undefined1)local_8;
            }
          }
          piVar1 = piVar7 + 2;
          piVar7 = piVar7 + 2;
          iVar3 = *piVar1;
        }
      }
      local_8 = local_8 + 1;
      ppuVar4 = &PTR_DAT_007362b8 + local_8;
    } while ((&PTR_DAT_007362b8)[local_8] != (undefined *)0x0);
    uVar5 = 0x30;
    do {
      uVar6 = FUN_0068fb90(iVar2,uVar5);
      if ((uVar6 != 0) && (uVar6 < (uint)param_1[1])) {
        *(byte *)(uVar6 + (int)_Dst) = *(byte *)(uVar6 + (int)_Dst) | 0x80;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x3a);
  }
  iVar3 = 0;
  if (0 < param_1[1]) {
    do {
      if ((*(byte *)(iVar3 + (int)_Dst) & 0x7f) == 0x7f) {
        *(byte *)(iVar3 + (int)_Dst) = *(byte *)(iVar3 + (int)_Dst) & 0x82 | 2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  FUN_00691a90(iVar2,local_4);
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


/* FUN_006c8850 @ 006c8850  kind=gamemisc  attributed-by=none  size=20 */

void FUN_006c8850(undefined4 param_1)

{
  undefined4 *unaff_ESI;
  
  memset(unaff_ESI,0,0x7c);
  *unaff_ESI = param_1;
  return;
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


/* FUN_006c8910 @ 006c8910  kind=gamemisc  attributed-by=none  size=830 */

int FUN_006c8910(short *param_1)

{
  undefined4 *puVar1;
  short *psVar2;
  undefined4 *in_EAX;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  short *psVar9;
  int iVar10;
  short *psVar11;
  int local_28;
  short *local_24;
  byte *local_20;
  short *local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  short *local_4;
  
  local_18 = in_EAX[1];
  local_10 = in_EAX[3];
  local_14 = in_EAX[2];
  local_c = in_EAX[4];
  in_EAX[7] = 0;
  in_EAX[10] = 0;
  in_EAX[0xc] = 0;
  in_EAX[0xf] = 0;
  in_EAX[0x13] = 0;
  in_EAX[0x16] = 0;
  local_4 = (short *)*in_EAX;
  local_28 = 0;
  if ((uint)in_EAX[9] < (uint)(int)*param_1) {
    uVar7 = (int)*param_1 + 3U & 0xfffffffc;
    uVar3 = FUN_00693a60(local_4,4,in_EAX[9],uVar7,in_EAX[0xb],&local_28);
    in_EAX[0xb] = uVar3;
    if (local_28 != 0) {
      return local_28;
    }
    in_EAX[9] = uVar7;
  }
  if ((uint)in_EAX[6] < (int)param_1[1] + 2U) {
    uVar7 = (int)param_1[1] + 0xbU & 0xfffffff8;
    uVar3 = FUN_00693a60(local_4,0x28,in_EAX[6],uVar7,in_EAX[8],&local_28);
    in_EAX[8] = uVar3;
    if (local_28 != 0) {
      return local_28;
    }
    in_EAX[6] = uVar7;
  }
  in_EAX[7] = (int)param_1[1];
  in_EAX[10] = (int)*param_1;
  in_EAX[0x12] = 2;
  in_EAX[0x19] = 0xffffffff;
  iVar4 = FUN_006905a0(param_1);
  if (iVar4 == 1) {
    in_EAX[0x12] = 0xfffffffe;
    in_EAX[0x19] = 1;
  }
  psVar2 = (short *)in_EAX[8];
  in_EAX[2] = local_14;
  in_EAX[1] = local_18;
  in_EAX[3] = local_10;
  in_EAX[4] = local_c;
  in_EAX[0x1d] = 0;
  in_EAX[0x1e] = 0;
  if (in_EAX[7] != 0) {
    psVar9 = *(short **)(param_1 + 2);
    local_20 = *(byte **)(param_1 + 4);
    local_1c = psVar2 + in_EAX[7] * 0x14;
    local_24 = psVar2 + **(short **)(param_1 + 6) * 0x14;
    local_8 = 0;
    psVar11 = psVar2;
    local_4 = local_24;
    if (psVar2 < local_1c) {
      do {
        psVar11[6] = *psVar9;
        psVar11[7] = psVar9[2];
        iVar4 = FUN_0068ebc0(*(undefined4 *)psVar9,local_18);
        *(int *)(psVar11 + 8) = iVar4 + local_14;
        *(int *)(psVar11 + 2) = iVar4 + local_14;
        iVar4 = FUN_0068ebc0(*(undefined4 *)(psVar9 + 2),local_10);
        *(int *)(psVar11 + 10) = iVar4 + local_c;
        *(int *)(psVar11 + 4) = iVar4 + local_c;
        if ((*local_20 & 3) == 0) {
          *psVar11 = 1;
        }
        else if ((*local_20 & 3) == 2) {
          *psVar11 = 2;
        }
        else {
          *psVar11 = 0;
        }
        *(short **)(psVar11 + 0x12) = local_24;
        *(short **)(local_24 + 0x10) = psVar11;
        local_24 = psVar11;
        if ((psVar11 == local_4) && (local_8 = local_8 + 1, local_8 < *param_1)) {
          local_24 = psVar2 + *(short *)(*(int *)(param_1 + 6) + local_8 * 2) * 0x14;
          local_4 = local_24;
        }
        local_20 = local_20 + 1;
        psVar11 = psVar11 + 0x14;
        psVar9 = psVar9 + 4;
      } while (psVar11 < local_1c);
    }
    puVar5 = (undefined4 *)in_EAX[0xb];
    puVar1 = puVar5 + in_EAX[10];
    psVar9 = *(short **)(param_1 + 6);
    sVar6 = 0;
    for (; puVar5 < puVar1; puVar5 = puVar5 + 1) {
      *puVar5 = psVar2 + sVar6 * 0x14;
      sVar6 = *psVar9 + 1;
      psVar9 = psVar9 + 1;
    }
    iVar4 = 0;
    local_20 = (byte *)0x0;
    param_1._0_1_ = '\x04';
    if (psVar2 < local_1c) {
      psVar9 = psVar2 + 6;
      local_4 = psVar2;
      do {
        iVar10 = iVar4;
        if (psVar9 + -6 == local_4) {
          iVar4 = *(int *)(local_4 + 0x12);
          iVar10 = (int)local_4[6] - (int)*(short *)(iVar4 + 0xc);
          local_20 = (byte *)((int)local_4[7] - (int)*(short *)(iVar4 + 0xe));
          param_1._0_1_ = FUN_006c87f0();
          local_4 = (short *)(iVar4 + 0x28);
        }
        *(char *)(psVar9 + -5) = (char)param_1;
        iVar4 = (int)*(short *)(*(int *)(psVar9 + 10) + 0xc) - (int)*psVar9;
        iVar8 = (int)*(short *)(*(int *)(psVar9 + 10) + 0xe) - (int)psVar9[1];
        param_1._0_1_ = FUN_006c87f0();
        *(char *)((int)psVar9 + -9) = (char)param_1;
        if ((*(byte *)(psVar9 + -6) & 3) == 0) {
          if ((char)param_1 == (char)psVar9[-5]) {
            if (((char)param_1 != '\x04') ||
               (iVar10 = FUN_0068efc0(iVar10,local_20,iVar4,iVar8), iVar10 != 0)) goto LAB_006c8c28;
          }
          else if ((int)(char)psVar9[-5] == -(int)(char)param_1) goto LAB_006c8c28;
        }
        else {
LAB_006c8c28:
          psVar9[-6] = psVar9[-6] | 0x100;
        }
        psVar2 = psVar9 + 0xe;
        psVar9 = psVar9 + 0x14;
        local_20 = (byte *)iVar8;
      } while (psVar2 < local_1c);
    }
  }
  return local_28;
}


/* FUN_006c8f80 @ 006c8f80  kind=gamemisc  attributed-by=none  size=287 */

void FUN_006c8f80(int param_1)

{
  int iVar1;
  uint in_EAX;
  int iVar2;
  uint in_ECX;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_EBX;
  int iVar6;
  int *piVar7;
  
  iVar1 = *(int *)(unaff_EBX + 0x1c);
  iVar4 = *(int *)(param_1 + 0x1c);
  iVar6 = *(int *)(unaff_EBX + 0x18) - iVar1;
  iVar3 = *(int *)(param_1 + 0x18) - iVar4;
  if (in_EAX <= in_ECX) {
    if (iVar1 == iVar4) {
      piVar7 = (int *)(in_EAX + 0x18);
      iVar4 = (in_ECX - in_EAX) / 0x28 + 1;
      do {
        iVar5 = iVar3;
        if (piVar7[1] <= iVar1) {
          iVar5 = iVar6;
        }
        *piVar7 = piVar7[1] + iVar5;
        piVar7 = piVar7 + 10;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      return;
    }
    piVar7 = (int *)(in_EAX + 0x18);
    if (iVar1 < iVar4) {
      iVar5 = (in_ECX - in_EAX) / 0x28 + 1;
      do {
        iVar2 = piVar7[1];
        if (iVar1 < iVar2) {
          if (iVar2 < iVar4) {
            iVar2 = FUN_0068ea60(iVar2 - iVar1,*(int *)(param_1 + 0x18) - *(int *)(unaff_EBX + 0x18)
                                 ,iVar4 - iVar1);
            iVar2 = iVar2 + *(int *)(unaff_EBX + 0x18);
          }
          else {
            iVar2 = iVar2 + iVar3;
          }
        }
        else {
          iVar2 = iVar2 + iVar6;
        }
        *piVar7 = iVar2;
        piVar7 = piVar7 + 10;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      return;
    }
    iVar5 = (in_ECX - in_EAX) / 0x28 + 1;
    do {
      iVar2 = piVar7[1];
      if (iVar4 < iVar2) {
        if (iVar2 < iVar1) {
          iVar2 = FUN_0068ea60(iVar2 - iVar1,*(int *)(param_1 + 0x18) - *(int *)(unaff_EBX + 0x18),
                               iVar4 - iVar1);
          iVar2 = iVar2 + *(int *)(unaff_EBX + 0x18);
        }
        else {
          iVar2 = iVar2 + iVar6;
        }
      }
      else {
        iVar2 = iVar2 + iVar3;
      }
      *piVar7 = iVar2;
      piVar7 = piVar7 + 10;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}


/* FUN_006c9b20 @ 006c9b20  kind=gamemisc  attributed-by=none  size=380 */

void FUN_006c9b20(void)

{
  int iVar1;
  int *piVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int *piVar5;
  int in_ECX;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  short *psVar10;
  int *piVar11;
  int local_18;
  int local_14;
  
  piVar5 = (int *)(in_ECX + 0x30 + in_EAX * 0x1c);
  iVar3 = *(int *)(*(int *)(in_ECX + 0x70) + 0x24);
  piVar2 = (int *)piVar5[2];
  iVar9 = iVar3 * 8;
  piVar11 = piVar2 + *piVar5 * 0xd;
  iVar9 = (int)((iVar9 >> 0x1f & 0x7ffU) + iVar9) >> 0xb;
  if (iVar9 == 0) {
    iVar9 = 1;
  }
  iVar3 = iVar3 * 6000;
  if (piVar2 < piVar11) {
    iVar1 = (uint)((int)piVar11 + (-1 - (int)piVar2)) / 0x34 + 1;
    pcVar6 = (char *)((int)piVar2 + 1);
    local_14 = iVar1;
    do {
      if (((int)*pcVar6 == piVar5[6]) && (*(int *)(pcVar6 + 0x27) != *(int *)(pcVar6 + 0x2b))) {
        psVar10 = (short *)((int)piVar2 + 2);
        local_18 = iVar1;
        do {
          if ((int)*(char *)((int)psVar10 + -1) + (int)*pcVar6 == 0) {
            if (*(short *)(pcVar6 + 1) < *psVar10) {
              iVar8 = (int)*psVar10 - (int)*(short *)(pcVar6 + 1);
              if (iVar8 < 0) {
                iVar8 = -iVar8;
              }
              iVar7 = (int)*(short *)(pcVar6 + 3);
              if ((int)*(short *)(pcVar6 + 3) < (int)psVar10[1]) {
                iVar7 = (int)psVar10[1];
              }
              iVar4 = (int)*(short *)(pcVar6 + 5);
              if ((int)psVar10[2] < (int)*(short *)(pcVar6 + 5)) {
                iVar4 = (int)psVar10[2];
              }
              if (iVar9 <= iVar4 - iVar7) {
                iVar8 = ((int)(iVar3 + (iVar3 >> 0x1f & 0x7ffU)) >> 0xb) / (iVar4 - iVar7) + iVar8;
                if (iVar8 < *(int *)(pcVar6 + 0x1f)) {
                  *(int *)(pcVar6 + 0x1f) = iVar8;
                  *(short **)(pcVar6 + 0x13) = psVar10 + -1;
                }
                if (iVar8 < *(int *)(psVar10 + 0xf)) {
                  *(int *)(psVar10 + 0xf) = iVar8;
                  *(char **)(psVar10 + 9) = pcVar6 + -1;
                }
              }
            }
          }
          psVar10 = psVar10 + 0x1a;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
      }
      pcVar6 = pcVar6 + 0x34;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
    if (piVar2 < piVar11) {
      piVar5 = piVar2 + 5;
      do {
        iVar9 = *piVar5;
        if ((iVar9 != 0) && (*(int **)(iVar9 + 0x14) != piVar5 + -5)) {
          *piVar5 = 0;
          piVar5[1] = *(int *)(iVar9 + 0x14);
        }
        piVar2 = piVar5 + 8;
        piVar5 = piVar5 + 0xd;
      } while (piVar2 < piVar11);
    }
  }
  return;
}


/* FUN_006c9ca0 @ 006c9ca0  kind=gamemisc  attributed-by=none  size=692 */

int FUN_006c9ca0(void)

{
  char *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  bool bVar5;
  undefined2 *puVar6;
  int in_EAX;
  int iVar7;
  undefined4 uVar8;
  short *psVar9;
  undefined4 *in_ECX;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  undefined1 *puVar13;
  byte *pbVar14;
  char *pcVar15;
  undefined1 *puVar16;
  int iVar17;
  undefined4 uVar18;
  int local_18;
  int local_14;
  undefined2 *local_4;
  
  piVar2 = in_ECX + in_EAX * 7 + 0xc;
  uVar3 = *in_ECX;
  iVar7 = in_ECX[0x1c];
  iVar17 = *piVar2;
  pcVar4 = (char *)piVar2[2];
  piVar2[3] = 0;
  if (in_EAX == 0) {
    uVar18 = in_ECX[1];
    local_14 = FUN_0068ec40(0x40,in_ECX[3]);
  }
  else {
    uVar18 = in_ECX[3];
    local_14 = 0;
  }
  iVar7 = FUN_0068ebc0(*(undefined4 *)(in_EAX * 0x18c + iVar7 + 0xf4),uVar18);
  if (0x10 < iVar7) {
    iVar7 = 0x10;
  }
  iVar7 = FUN_0068ec40(iVar7,uVar18);
  if (pcVar4 < pcVar4 + iVar17 * 0x34) {
    pcVar15 = pcVar4 + 1;
    do {
      if ((local_14 <= *(short *)(pcVar15 + 7)) &&
         ((*(int *)(pcVar15 + 0x17) == 0 || (local_14 * 3 <= *(short *)(pcVar15 + 7) * 2)))) {
        iVar12 = 0;
        if (0 < piVar2[3]) {
          psVar9 = (short *)piVar2[5];
          do {
            iVar10 = (int)*(short *)(pcVar15 + 1) - (int)*psVar9;
            if (iVar10 < 0) {
              iVar10 = -iVar10;
            }
            if ((iVar10 < iVar7) && (*(char *)((int)psVar9 + 0xd) == *pcVar15)) {
              *(undefined4 *)(pcVar15 + 0xf) = *(undefined4 *)(psVar9 + 0x14);
              *(char **)(*(int *)(psVar9 + 0x16) + 0x10) = pcVar15 + -1;
              *(char **)(psVar9 + 0x16) = pcVar15 + -1;
              goto LAB_006c9e0c;
            }
            iVar12 = iVar12 + 1;
            psVar9 = psVar9 + 0x18;
          } while (iVar12 < piVar2[3]);
        }
        iVar12 = FUN_006c8710((int)*(short *)(pcVar15 + 1),(int)*pcVar15,uVar3,&local_4);
        puVar6 = local_4;
        if (iVar12 != 0) {
          return iVar12;
        }
        memset(local_4,0,0x30);
        pcVar1 = pcVar15 + -1;
        *(char **)(puVar6 + 0x14) = pcVar1;
        *(char **)(puVar6 + 0x16) = pcVar1;
        *puVar6 = *(undefined2 *)(pcVar15 + 1);
        *(char *)((int)puVar6 + 0xd) = *pcVar15;
        uVar8 = FUN_0068ebc0((int)*(short *)(pcVar15 + 1),uVar18);
        *(undefined4 *)(puVar6 + 4) = uVar8;
        *(undefined4 *)(puVar6 + 2) = uVar8;
        *(char **)(pcVar15 + 0xf) = pcVar1;
      }
LAB_006c9e0c:
      pcVar1 = pcVar15 + 0x33;
      pcVar15 = pcVar15 + 0x34;
    } while (pcVar1 < pcVar4 + iVar17 * 0x34);
  }
  puVar11 = (undefined1 *)piVar2[5];
  puVar16 = puVar11 + piVar2[3] * 0x30;
  puVar13 = puVar11;
  if (puVar11 < puVar16) {
    do {
      iVar7 = *(int *)(puVar13 + 0x28);
      if (iVar7 != 0) {
        do {
          *(undefined1 **)(iVar7 + 0xc) = puVar13;
          iVar7 = *(int *)(iVar7 + 0x10);
        } while (iVar7 != *(int *)(puVar13 + 0x28));
      }
      puVar13 = puVar13 + 0x30;
    } while (puVar13 < puVar16);
    if (puVar11 < puVar16) {
      puVar11 = puVar11 + 0xc;
      do {
        pbVar14 = *(byte **)(puVar11 + 0x1c);
        local_18 = 0;
        local_14 = 0;
        do {
          if ((*pbVar14 & 1) == 0) {
            local_14 = local_14 + 1;
          }
          else {
            local_18 = local_18 + 1;
          }
          iVar7 = *(int *)(pbVar14 + 0x18);
          if (((iVar7 == 0) || (*(undefined1 **)(iVar7 + 0xc) == (undefined1 *)0x0)) ||
             (*(undefined1 **)(iVar7 + 0xc) == puVar11 + -0xc)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          iVar17 = *(int *)(pbVar14 + 0x14);
          if (((iVar17 != 0) && (*(int *)(iVar17 + 0xc) != 0)) || (bVar5)) {
            psVar9 = *(short **)(puVar11 + 0xc);
            if (bVar5) {
              psVar9 = *(short **)(puVar11 + 0x10);
              iVar17 = iVar7;
            }
            if (psVar9 == (short *)0x0) {
LAB_006c9eec:
              psVar9 = *(short **)(iVar17 + 0xc);
            }
            else {
              iVar7 = (int)*(short *)(puVar11 + -0xc) - (int)*psVar9;
              if (iVar7 < 0) {
                iVar7 = -iVar7;
              }
              iVar12 = (int)*(short *)(pbVar14 + 2) - (int)*(short *)(iVar17 + 2);
              if (iVar12 < 0) {
                iVar12 = -iVar12;
              }
              if (iVar12 < iVar7) goto LAB_006c9eec;
            }
            if (bVar5) {
              *(short **)(puVar11 + 0x10) = psVar9;
              *(byte *)(psVar9 + 6) = *(byte *)(psVar9 + 6) | 2;
            }
            else {
              *(short **)(puVar11 + 0xc) = psVar9;
            }
          }
          pbVar14 = *(byte **)(pbVar14 + 0x10);
        } while (pbVar14 != *(byte **)(puVar11 + 0x1c));
        *puVar11 = 0;
        if ((0 < local_18) && (local_14 <= local_18)) {
          *puVar11 = 1;
        }
        if ((*(int *)(puVar11 + 0x10) != 0) && (*(int *)(puVar11 + 0xc) != 0)) {
          *(undefined4 *)(puVar11 + 0x10) = 0;
        }
        puVar13 = puVar11 + 0x24;
        puVar11 = puVar11 + 0x30;
      } while (puVar13 < puVar16);
    }
  }
  return 0;
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


/* FUN_006ca2c0 @ 006ca2c0  kind=gamemisc  attributed-by=none  size=35 */

void FUN_006ca2c0(void)

{
  int iVar1;
  int unaff_ESI;
  int unaff_EDI;
  
  iVar1 = FUN_006ca150(*(undefined1 *)(unaff_EDI + 0xc),*(undefined1 *)(unaff_ESI + 0xc));
  *(int *)(unaff_ESI + 8) = iVar1 + *(int *)(unaff_EDI + 8);
  return;
}


/* FUN_006ca2f0 @ 006ca2f0  kind=gamemisc  attributed-by=none  size=1229 */

byte * FUN_006ca2f0(int param_1,int param_2)

{
  int *piVar1;
  byte bVar2;
  undefined1 uVar3;
  byte *pbVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  byte *pbVar18;
  byte *local_1c;
  int local_18;
  int local_10;
  
  iVar7 = param_1 + 0x30 + param_2 * 0x1c;
  pbVar4 = *(byte **)(iVar7 + 0x14);
  pbVar10 = pbVar4 + *(int *)(iVar7 + 0xc) * 0x30;
  local_1c = (byte *)0x0;
  local_10 = 0;
  if (param_2 == 1) {
    pbVar13 = pbVar4;
    if (pbVar4 < pbVar10) {
      do {
        if ((pbVar13[0xc] & 4) == 0) {
          iVar7 = *(int *)(pbVar13 + 0x14);
          pbVar14 = *(byte **)(pbVar13 + 0x18);
          pbVar8 = pbVar14;
          pbVar18 = pbVar13;
          if (((iVar7 != 0) ||
              ((pbVar14 != (byte *)0x0 &&
               (iVar7 = *(int *)(pbVar14 + 0x14), pbVar8 = pbVar13, pbVar18 = pbVar14, iVar7 != 0)))
              ) && (pbVar18 != (byte *)0x0)) {
            uVar5 = *(undefined4 *)(iVar7 + 8);
            pbVar18[0xc] = pbVar18[0xc] | 4;
            *(undefined4 *)(pbVar18 + 8) = uVar5;
            if ((pbVar8 != (byte *)0x0) && (*(int *)(pbVar8 + 0x14) == 0)) {
              FUN_006ca2c0(1);
              pbVar8[0xc] = pbVar8[0xc] | 4;
            }
            if (local_1c == (byte *)0x0) {
              local_1c = pbVar13;
            }
          }
        }
        pbVar13 = pbVar13 + 0x30;
      } while (pbVar13 < pbVar10);
      goto LAB_006ca3a3;
    }
  }
  else {
LAB_006ca3a3:
    if (pbVar4 < pbVar10) {
      pbVar13 = pbVar4 + 0xc;
      do {
        bVar2 = *pbVar13;
        if ((bVar2 & 4) == 0) {
          iVar7 = *(int *)(pbVar13 + 0xc);
          if (iVar7 == 0) {
            local_10 = local_10 + 1;
          }
          else if (*(int *)(iVar7 + 0x14) == 0) {
            if (local_1c == (byte *)0x0) {
              iVar9 = *(int *)(pbVar13 + -8);
              iVar15 = *(int *)(iVar7 + 4);
              iVar6 = FUN_006ca150(bVar2,*(undefined1 *)(iVar7 + 0xc));
              if (iVar6 < 0x41) {
                iVar11 = 0x20;
                local_18 = 0x20;
              }
              else {
                iVar11 = 0x26;
                local_18 = 0x1a;
              }
              if (iVar6 < 0x60) {
                iVar9 = (iVar15 - iVar9 >> 1) + iVar9;
                uVar12 = iVar9 + 0x20U & 0xffffffc0;
                iVar9 = iVar9 - uVar12;
                iVar15 = iVar9 + iVar11;
                if (iVar15 < 0) {
                  iVar15 = -iVar15;
                }
                iVar9 = iVar9 - local_18;
                if (iVar9 < 0) {
                  iVar9 = -iVar9;
                }
                if (iVar15 < iVar9) {
                  local_18 = -iVar11;
                }
                iVar9 = (uVar12 + local_18) - iVar6 / 2;
                *(int *)(pbVar13 + -4) = iVar9;
                *(int *)(iVar7 + 8) = iVar9 + iVar6;
              }
              else {
                *(uint *)(pbVar13 + -4) = iVar9 + 0x20U & 0xffffffc0;
              }
              *pbVar13 = *pbVar13 | 4;
              local_1c = pbVar13 + -0xc;
              FUN_006ca2c0(param_2);
            }
            else {
              iVar9 = *(int *)(pbVar13 + -8) + (*(int *)(local_1c + 8) - *(int *)(local_1c + 4));
              iVar16 = *(int *)(iVar7 + 4) - *(int *)(pbVar13 + -8);
              uVar3 = *(undefined1 *)(iVar7 + 0xc);
              iVar6 = iVar16 >> 1;
              iVar11 = iVar6 + iVar9;
              iVar15 = FUN_006ca150(bVar2,uVar3);
              if ((*(byte *)(iVar7 + 0xc) & 4) == 0) {
                if (iVar15 < 0x60) {
                  uVar12 = iVar11 + 0x20U & 0xffffffc0;
                  if (iVar15 < 0x41) {
                    iVar9 = 0x20;
                    iVar6 = 0x20;
                  }
                  else {
                    iVar6 = 0x26;
                    iVar9 = 0x1a;
                  }
                  iVar16 = (iVar6 - uVar12) + iVar11;
                  if (iVar16 < 0) {
                    iVar16 = -iVar16;
                  }
                  iVar11 = (iVar11 - iVar9) - uVar12;
                  if (iVar11 < 0) {
                    iVar11 = -iVar11;
                  }
                  if (iVar16 < iVar11) {
                    iVar9 = -iVar6;
                  }
                  *(uint *)(pbVar13 + -4) = (uVar12 + iVar9) - iVar15 / 2;
                  *(uint *)(iVar7 + 8) = iVar15 / 2 + uVar12 + iVar9;
                }
                else {
                  iVar11 = FUN_006ca150(bVar2,uVar3);
                  uVar12 = iVar9 + 0x20U & 0xffffffc0;
                  iVar6 = (iVar11 >> 1) - (iVar6 + iVar9);
                  iVar15 = iVar6 + uVar12;
                  if (iVar15 < 0) {
                    iVar15 = -iVar15;
                  }
                  uVar17 = (iVar16 + 0x20 + iVar9 & 0xffffffc0U) - iVar11;
                  iVar6 = iVar6 + uVar17;
                  if (iVar6 < 0) {
                    iVar6 = -iVar6;
                  }
                  if (iVar6 <= iVar15) {
                    uVar12 = uVar17;
                  }
                  *(uint *)(pbVar13 + -4) = uVar12;
                  *(uint *)(iVar7 + 8) = uVar12 + iVar11;
                }
              }
              else {
                *(int *)(pbVar13 + -4) = *(int *)(iVar7 + 8) - iVar15;
              }
              *pbVar13 = *pbVar13 | 4;
              *(byte *)(iVar7 + 0xc) = *(byte *)(iVar7 + 0xc) | 4;
              if ((pbVar4 < pbVar13 + -0xc) && (*(int *)(pbVar13 + -4) < *(int *)(pbVar13 + -0x34)))
              {
                *(int *)(pbVar13 + -4) = *(int *)(pbVar13 + -0x34);
              }
            }
          }
          else {
            FUN_006ca2c0(param_2);
            *pbVar13 = *pbVar13 | 4;
          }
        }
        pbVar14 = pbVar13 + 0x24;
        pbVar13 = pbVar13 + 0x30;
      } while (pbVar14 < pbVar10);
    }
  }
  pbVar13 = (byte *)(((int)pbVar10 - (int)pbVar4) * 0x2aaaaaab);
  iVar7 = ((int)pbVar10 - (int)pbVar4) / 0x30;
  if (param_2 == 0) {
    if (iVar7 == 6) {
      pbVar14 = pbVar4 + 0x60;
      pbVar13 = pbVar4 + 0xc0;
      pbVar8 = pbVar4;
    }
    else {
      if (iVar7 != 0xc) goto LAB_006ca67e;
      pbVar14 = pbVar4 + 0xf0;
      pbVar13 = pbVar4 + 0x1b0;
      pbVar8 = pbVar4 + 0x30;
    }
    iVar9 = (*(int *)(pbVar14 + 4) * 2 - *(int *)(pbVar13 + 4)) - *(int *)(pbVar8 + 4);
    if (iVar9 < 0) {
      iVar9 = -iVar9;
    }
    if (iVar9 < 8) {
      iVar9 = *(int *)(pbVar8 + 8) + *(int *)(pbVar14 + 8) * -2 + *(int *)(pbVar13 + 8);
      *(int *)(pbVar13 + 8) = *(int *)(pbVar13 + 8) - iVar9;
      if (*(int *)(pbVar13 + 0x18) != 0) {
        piVar1 = (int *)(*(int *)(pbVar13 + 0x18) + 8);
        *piVar1 = *piVar1 - iVar9;
      }
      if (iVar7 == 0xc) {
        *(int *)(pbVar4 + 0x188) = *(int *)(pbVar4 + 0x188) - iVar9;
        *(int *)(pbVar4 + 0x218) = *(int *)(pbVar4 + 0x218) - iVar9;
      }
      pbVar13[0xc] = pbVar13[0xc] | 4;
      pbVar13 = *(byte **)(pbVar13 + 0x18);
      if (pbVar13 != (byte *)0x0) {
        pbVar13[0xc] = pbVar13[0xc] | 4;
      }
    }
  }
LAB_006ca67e:
  if (((local_10 != 0) || (local_1c == (byte *)0x0)) && (pbVar4 < pbVar10)) {
    pbVar14 = pbVar4 + 0x1c;
    do {
      if ((pbVar14[-0x10] & 4) == 0) {
        if (*(int *)pbVar14 == 0) {
LAB_006ca6dc:
          if (local_1c == (byte *)0x0) {
            local_1c = pbVar14 + -0x1c;
            uVar12 = *(int *)(pbVar14 + -0x18) + 0x20U & 0xffffffc0;
          }
          else {
            for (pbVar13 = pbVar14 + -0x4c; (pbVar4 <= pbVar13 && ((pbVar13[0xc] & 4) == 0));
                pbVar13 = pbVar13 + -0x30) {
            }
            for (pbVar8 = pbVar14 + 0x14; (pbVar8 < pbVar10 && ((pbVar8[0xc] & 4) == 0));
                pbVar8 = pbVar8 + 0x30) {
            }
            if ((((pbVar13 < pbVar4) || (pbVar14 + -0x1c <= pbVar13)) || (pbVar10 <= pbVar8)) ||
               (pbVar8 <= pbVar14 + -0x1c)) {
              uVar12 = ((*(int *)(pbVar14 + -0x18) - *(int *)(local_1c + 4)) + 0x10U & 0xffffffe0) +
                       *(int *)(local_1c + 8);
            }
            else {
              if (*(int *)(pbVar8 + 4) != *(int *)(pbVar13 + 4)) {
                iVar7 = FUN_0068ea60(*(int *)(pbVar14 + -0x18) - *(int *)(pbVar13 + 4),
                                     *(int *)(pbVar8 + 8) - *(int *)(pbVar13 + 8),
                                     *(int *)(pbVar8 + 4) - *(int *)(pbVar13 + 4));
                *(int *)(pbVar14 + -0x14) = iVar7 + *(int *)(pbVar13 + 8);
                goto LAB_006ca77c;
              }
              uVar12 = *(uint *)(pbVar13 + 8);
            }
          }
          *(uint *)(pbVar14 + -0x14) = uVar12;
        }
        else {
          iVar7 = *(int *)(*(int *)pbVar14 + 4) - *(int *)(pbVar14 + -0x18);
          if (iVar7 < 0) {
            iVar7 = -iVar7;
          }
          if (0x4f < iVar7) goto LAB_006ca6dc;
          FUN_006cb1a0();
        }
LAB_006ca77c:
        pbVar14[-0x10] = pbVar14[-0x10] | 4;
        pbVar13 = pbVar14 + -0x1c;
        if ((pbVar4 < pbVar13) &&
           (pbVar13 = *(byte **)(pbVar14 + -0x44), *(int *)(pbVar14 + -0x14) < (int)pbVar13)) {
          *(byte **)(pbVar14 + -0x14) = pbVar13;
        }
        if (((pbVar14 + 0x14 < pbVar10) && ((pbVar14[0x20] & 4) != 0)) &&
           (pbVar13 = *(byte **)(pbVar14 + 0x1c), (int)pbVar13 < *(int *)(pbVar14 + -0x14))) {
          *(byte **)(pbVar14 + -0x14) = pbVar13;
        }
      }
      pbVar8 = pbVar14 + 0x14;
      pbVar14 = pbVar14 + 0x30;
    } while (pbVar8 < pbVar10);
  }
  return pbVar13;
}


/* FUN_006ca960 @ 006ca960  kind=gamemisc  attributed-by=none  size=724 */

void FUN_006ca960(void)

{
  int iVar1;
  int *piVar2;
  short *psVar3;
  int in_EAX;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int in_ECX;
  char *pcVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  short *psVar13;
  int *piVar14;
  undefined4 uVar15;
  int iVar16;
  
  piVar9 = *(int **)(in_EAX + 0x38 + in_ECX * 0x1c);
  iVar11 = *(int *)(in_EAX + 0x48 + in_ECX * 0x1c);
  iVar1 = *(int *)(*(int *)(in_EAX + 0x70) + 0x24) * 8;
  piVar14 = piVar9 + *(int *)(in_EAX + 0x30 + in_ECX * 0x1c) * 0xd;
  if (in_ECX == 0) {
    uVar15 = *(undefined4 *)(in_EAX + 4);
  }
  else {
    uVar15 = *(undefined4 *)(in_EAX + 0xc);
  }
  iVar4 = FUN_0068ec40(0xc0,uVar15);
  if (piVar9 < piVar14) {
    pcVar7 = (char *)((int)piVar9 + 1);
    do {
      if ((*(int *)(pcVar7 + 0x27) != *(int *)(pcVar7 + 0x2b)) && (*pcVar7 == iVar11)) {
        piVar5 = piVar9 + 1;
        do {
          if (((piVar5 + -1 != (int *)(pcVar7 + -1)) &&
              ((int)*(char *)((int)piVar5 + -3) + (int)*pcVar7 == 0)) &&
             (iVar12 = (int)*(short *)((int)piVar5 + -2) - (int)*(short *)(pcVar7 + 1), -1 < iVar12)
             ) {
            iVar16 = (int)*(short *)(pcVar7 + 3);
            if ((int)*(short *)(pcVar7 + 3) < (int)(short)*piVar5) {
              iVar16 = (int)(short)*piVar5;
            }
            iVar10 = (int)*(short *)(pcVar7 + 5);
            if ((int)*(short *)((int)piVar5 + 2) < (int)*(short *)(pcVar7 + 5)) {
              iVar10 = (int)*(short *)((int)piVar5 + 2);
            }
            iVar10 = iVar10 - iVar16;
            if ((int)(iVar1 + (iVar1 >> 0x1f & 0x7ffU)) >> 0xb <= iVar10) {
              iVar16 = iVar12 * 8;
              if ((iVar16 < *(int *)(pcVar7 + 0x1f) * 9) &&
                 ((iVar16 < *(int *)(pcVar7 + 0x1f) * 7 || (*(int *)(pcVar7 + 0x23) < iVar10)))) {
                *(int *)(pcVar7 + 0x1f) = iVar12;
                *(int *)(pcVar7 + 0x23) = iVar10;
                *(int **)(pcVar7 + 0x13) = piVar5 + -1;
              }
              if ((iVar16 < piVar5[7] * 9) && ((iVar16 < piVar5[7] * 7 || (piVar5[8] < iVar10)))) {
                piVar5[8] = iVar10;
                piVar5[7] = iVar12;
                piVar5[4] = (int)(pcVar7 + -1);
              }
            }
          }
          piVar2 = piVar5 + 0xc;
          piVar5 = piVar5 + 0xd;
        } while (piVar2 < piVar14);
      }
      piVar5 = (int *)(pcVar7 + 0x33);
      pcVar7 = pcVar7 + 0x34;
    } while (piVar5 < piVar14);
    if (piVar9 < piVar14) {
      piVar5 = piVar9 + 8;
      do {
        piVar2 = (int *)piVar5[-3];
        if ((((piVar2 != (int *)0x0) && ((int *)piVar2[5] == piVar5 + -8)) &&
            (*(short *)((int)piVar5 + -0x1e) < *(short *)((int)piVar2 + 2))) && (*piVar5 < iVar4)) {
          psVar13 = (short *)((int)piVar9 + 2);
          do {
            if (((*psVar13 <= *(short *)((int)piVar5 + -0x1e)) &&
                (piVar5 + -8 != (int *)(psVar13 + -1))) &&
               ((psVar3 = *(short **)(psVar13 + 9), psVar3 != (short *)0x0 &&
                (*(int **)(psVar3 + 10) == (int *)(psVar13 + -1))))) {
              if ((*(short *)((int)piVar2 + 2) <= psVar3[1]) &&
                 ((*(short *)((int)piVar5 + -0x1e) != *psVar13 ||
                  (*(short *)((int)piVar2 + 2) != psVar3[1])))) {
                iVar11 = *(int *)(psVar13 + 0xf);
                if ((*piVar5 < iVar11) &&
                   (iVar1 = *piVar5 * 4, iVar1 - iVar11 != 0 && iVar11 <= iVar1)) {
                  if (piVar5[1] < *(int *)(psVar13 + 0x11) * 3) {
                    piVar2[5] = 0;
                    piVar5[-3] = 0;
                    break;
                  }
                  piVar8 = piVar9 + 5;
                  iVar11 = (uint)((int)piVar14 + (-1 - (int)piVar9)) / 0x34 + 1;
                  do {
                    piVar6 = piVar2;
                    if ((short *)*piVar8 == psVar13 + -1) {
LAB_006caba7:
                      piVar8[1] = (int)piVar6;
                      *piVar8 = 0;
                    }
                    else if ((short *)*piVar8 == psVar3) {
                      piVar6 = piVar5 + -8;
                      goto LAB_006caba7;
                    }
                    piVar8 = piVar8 + 0xd;
                    iVar11 = iVar11 + -1;
                  } while (iVar11 != 0);
                }
              }
            }
            piVar8 = (int *)(psVar13 + 0x19);
            psVar13 = psVar13 + 0x1a;
          } while (piVar8 < piVar14);
        }
        piVar2 = piVar5 + 5;
        piVar5 = piVar5 + 0xd;
      } while (piVar2 < piVar14);
    }
  }
  if (piVar9 < piVar14) {
    piVar9 = piVar9 + 5;
    do {
      iVar11 = *piVar9;
      if ((iVar11 != 0) &&
         (*(int *)(iVar11 + 0x1c) = *(int *)(iVar11 + 0x1c) + 1,
         *(int **)(iVar11 + 0x14) != piVar9 + -5)) {
        *piVar9 = 0;
        if ((*(int *)(iVar11 + 0x20) < iVar4) || (piVar9[3] < *(int *)(iVar11 + 0x20) * 4)) {
          piVar9[1] = *(int *)(iVar11 + 0x14);
        }
        else {
          *(int *)(iVar11 + 0x1c) = *(int *)(iVar11 + 0x1c) + -1;
        }
      }
      piVar5 = piVar9 + 8;
      piVar9 = piVar9 + 0xd;
    } while (piVar5 < piVar14);
  }
  return;
}


/* FUN_006cac40 @ 006cac40  kind=gamemisc  attributed-by=none  size=803 */

int FUN_006cac40(void)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  short sVar4;
  undefined4 uVar5;
  bool bVar6;
  int in_EAX;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  short *psVar11;
  undefined4 *in_ECX;
  undefined1 *puVar12;
  byte *pbVar13;
  short *psVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined4 uVar17;
  short *psVar18;
  int iVar19;
  int local_30;
  int local_28;
  int local_24;
  int local_1c;
  int local_18;
  short *local_14;
  short *local_4;
  
  piVar2 = in_ECX + in_EAX * 7 + 0xc;
  uVar5 = *in_ECX;
  psVar11 = (short *)piVar2[2];
  iVar8 = in_EAX * 0x18c + 0x28 + in_ECX[0x1c];
  iVar19 = *piVar2;
  piVar2[3] = 0;
  if (in_EAX == 0) {
    uVar17 = in_ECX[1];
  }
  else {
    uVar17 = in_ECX[3];
  }
  iVar7 = FUN_0068ebc0(*(undefined4 *)(iVar8 + 0xcc),uVar17);
  if (iVar7 < 0x11) {
    local_30 = *(int *)(iVar8 + 0xcc);
  }
  else {
    local_30 = FUN_0068ec40(0x10,uVar17);
  }
  if (psVar11 < psVar11 + iVar19 * 0x1a) {
    psVar14 = psVar11 + 1;
    do {
      local_14 = (short *)0x0;
      local_1c = 0xffff;
      if (piVar2[3] < 1) {
LAB_006cad9f:
        iVar8 = FUN_006c8710((int)*psVar14,(int)*(char *)((int)psVar14 + -1),uVar5,&local_4);
        psVar18 = local_4;
        if (iVar8 != 0) {
          return iVar8;
        }
        memset(local_4,0,0x30);
        psVar1 = psVar14 + -1;
        *(short **)(psVar18 + 0x14) = psVar1;
        *(short **)(psVar18 + 0x16) = psVar1;
        *psVar18 = *psVar14;
        uVar10 = FUN_0068ebc0((int)*psVar14,uVar17);
        *(undefined4 *)(psVar18 + 4) = uVar10;
        *(undefined4 *)(psVar18 + 2) = uVar10;
        *(short **)(psVar14 + 7) = psVar1;
        *(undefined1 *)((int)psVar18 + 0xd) = *(undefined1 *)((int)psVar14 + -1);
      }
      else {
        local_18 = piVar2[3];
        psVar18 = (short *)piVar2[5];
        do {
          if (*(char *)((int)psVar18 + 0xd) == *(char *)((int)psVar14 + -1)) {
            iVar8 = (int)*psVar14 - (int)*psVar18;
            if (iVar8 < 0) {
              iVar8 = -iVar8;
            }
            if ((iVar8 < local_30) && (iVar8 < local_1c)) {
              if (*(int *)(psVar14 + 9) != 0) {
                iVar9 = 0;
                iVar7 = *(int *)(psVar18 + 0x14);
                do {
                  if (*(int *)(iVar7 + 0x14) != 0) {
                    sVar3 = *(short *)(*(int *)(psVar14 + 9) + 2);
                    sVar4 = *(short *)(*(int *)(iVar7 + 0x14) + 2);
                    if (sVar4 < sVar3) {
                      iVar9 = (int)sVar3 - (int)sVar4;
                    }
                    else {
                      iVar9 = (int)sVar4 - (int)sVar3;
                    }
                    if (local_30 <= iVar9) goto LAB_006cad8a;
                  }
                  iVar7 = *(int *)(iVar7 + 0x10);
                } while (iVar7 != *(int *)(psVar18 + 0x14));
                if (local_30 <= iVar9) goto LAB_006cad8a;
              }
              local_1c = iVar8;
              local_14 = psVar18;
            }
          }
LAB_006cad8a:
          psVar18 = psVar18 + 0x18;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
        if (local_14 == (short *)0x0) goto LAB_006cad9f;
        *(undefined4 *)(psVar14 + 7) = *(undefined4 *)(local_14 + 0x14);
        *(short **)(*(int *)(local_14 + 0x16) + 0x10) = psVar14 + -1;
        *(short **)(local_14 + 0x16) = psVar14 + -1;
      }
      psVar18 = psVar14 + 0x19;
      psVar14 = psVar14 + 0x1a;
    } while (psVar18 < psVar11 + iVar19 * 0x1a);
  }
  puVar16 = (undefined1 *)piVar2[5];
  puVar15 = puVar16 + piVar2[3] * 0x30;
  puVar12 = puVar16;
  if (puVar16 < puVar15) {
    do {
      iVar8 = *(int *)(puVar12 + 0x28);
      if (iVar8 != 0) {
        do {
          *(undefined1 **)(iVar8 + 0xc) = puVar12;
          iVar8 = *(int *)(iVar8 + 0x10);
        } while (iVar8 != *(int *)(puVar12 + 0x28));
      }
      puVar12 = puVar12 + 0x30;
    } while (puVar12 < puVar15);
    if (puVar16 < puVar15) {
      puVar16 = puVar16 + 0xc;
      do {
        pbVar13 = *(byte **)(puVar16 + 0x1c);
        local_24 = 0;
        local_28 = 0;
        do {
          if ((*pbVar13 & 1) == 0) {
            local_28 = local_28 + 1;
          }
          else {
            local_24 = local_24 + 1;
          }
          iVar8 = *(int *)(pbVar13 + 0x18);
          if ((iVar8 == 0) || (*(undefined1 **)(iVar8 + 0xc) == puVar16 + -0xc)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if ((*(int *)(pbVar13 + 0x14) != 0) || (bVar6)) {
            psVar11 = *(short **)(puVar16 + 0xc);
            iVar19 = *(int *)(pbVar13 + 0x14);
            if (bVar6) {
              psVar11 = *(short **)(puVar16 + 0x10);
              iVar19 = iVar8;
            }
            if (psVar11 == (short *)0x0) {
LAB_006caf09:
              psVar11 = *(short **)(iVar19 + 0xc);
            }
            else {
              iVar8 = (int)*(short *)(puVar16 + -0xc) - (int)*psVar11;
              if (iVar8 < 0) {
                iVar8 = -iVar8;
              }
              sVar3 = *(short *)(pbVar13 + 2);
              sVar4 = *(short *)(iVar19 + 2);
              if (sVar4 < sVar3) {
                iVar7 = (int)sVar3 - (int)sVar4;
              }
              else {
                iVar7 = (int)sVar4 - (int)sVar3;
              }
              if (iVar7 < iVar8) goto LAB_006caf09;
            }
            if (bVar6) {
              *(short **)(puVar16 + 0x10) = psVar11;
              *(byte *)(psVar11 + 6) = *(byte *)(psVar11 + 6) | 2;
            }
            else {
              *(short **)(puVar16 + 0xc) = psVar11;
            }
          }
          pbVar13 = *(byte **)(pbVar13 + 0x10);
        } while (pbVar13 != *(byte **)(puVar16 + 0x1c));
        *puVar16 = 0;
        if ((0 < local_24) && (local_28 <= local_24)) {
          *puVar16 = 1;
        }
        if ((*(int *)(puVar16 + 0x10) != 0) && (*(int *)(puVar16 + 0xc) != 0)) {
          *(undefined4 *)(puVar16 + 0x10) = 0;
        }
        puVar12 = puVar16 + 0x24;
        puVar16 = puVar16 + 0x30;
      } while (puVar12 < puVar15);
    }
  }
  return 0;
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


/* FUN_006cb180 @ 006cb180  kind=gamemisc  attributed-by=none  size=26 */

void __fastcall FUN_006cb180(undefined4 param_1)

{
  int iVar1;
  int unaff_ESI;
  int unaff_EDI;
  
  iVar1 = FUN_006cb050(param_1);
  *(int *)(unaff_ESI + 8) = iVar1 + *(int *)(unaff_EDI + 8);
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


/* FUN_006cb340 @ 006cb340  kind=gamemisc  attributed-by=none  size=673 */

short * __cdecl FUN_006cb340(int param_1)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  int iVar4;
  int in_EAX;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
  short *psVar11;
  byte *pbVar12;
  undefined4 local_8;
  short *local_4;
  
  iVar4 = param_1;
  iVar10 = in_EAX + 0x30 + param_1 * 0x1c;
  psVar2 = *(short **)(iVar10 + 0x14);
  psVar5 = psVar2 + *(int *)(iVar10 + 0xc) * 0x18;
  local_4 = (short *)0x0;
  local_8 = 0;
  param_1 = 0;
  for (psVar7 = psVar2; psVar7 < psVar5; psVar7 = psVar7 + 0x18) {
    if ((*(byte *)(psVar7 + 6) & 4) == 0) {
      psVar6 = *(short **)(psVar7 + 0xc);
      if (psVar6 == (short *)0x0) {
        param_1 = param_1 + 1;
      }
      else if (psVar6 < psVar7) {
        FUN_006cb180(in_EAX);
        *(byte *)(psVar7 + 6) = *(byte *)(psVar7 + 6) | 4;
      }
      else {
        if ((iVar4 == 1) || (local_4 != (short *)0x0)) {
          FUN_006cb1b0(psVar7,psVar6,local_8);
        }
        else {
          local_8 = FUN_006cb1b0(psVar7,psVar6,0);
        }
        *(byte *)(psVar7 + 6) = *(byte *)(psVar7 + 6) | 4;
        *(byte *)(psVar6 + 6) = *(byte *)(psVar6 + 6) | 4;
        local_4 = psVar7;
      }
    }
  }
  iVar9 = (int)psVar5 - (int)psVar2;
  psVar7 = (short *)(iVar9 * 0x2aaaaaab);
  iVar10 = iVar9 / 0x30;
  if (iVar4 == 0) {
    if (iVar10 == 6) {
      psVar6 = psVar2 + 0x30;
      psVar8 = psVar2 + 0x60;
      psVar11 = psVar2;
    }
    else {
      if (iVar10 != 0xc) goto LAB_006cb4bc;
      psVar6 = psVar2 + 0x78;
      psVar8 = psVar2 + 0xd8;
      psVar11 = psVar2 + 0x18;
    }
    psVar7 = (short *)((*(int *)(psVar6 + 2) * 2 - *(int *)(psVar8 + 2)) - *(int *)(psVar11 + 2));
    if ((int)psVar7 < 0) {
      psVar7 = (short *)-(int)psVar7;
    }
    if ((((*(short **)(psVar11 + 0xc) == psVar11 + 0x18) &&
         (*(short **)(psVar6 + 0xc) == psVar6 + 0x18)) &&
        (psVar3 = *(short **)(psVar8 + 0xc), psVar3 == psVar8 + 0x18)) && ((int)psVar7 < 8)) {
      psVar7 = (short *)(*(int *)(psVar11 + 4) + *(int *)(psVar6 + 4) * -2 + *(int *)(psVar8 + 4));
      *(int *)(psVar8 + 4) = *(int *)(psVar8 + 4) - (int)psVar7;
      if (psVar3 != (short *)0x0) {
        *(int *)(psVar3 + 4) = *(int *)(psVar3 + 4) - (int)psVar7;
      }
      if (iVar10 == 0xc) {
        *(int *)(psVar2 + 0xc4) = *(int *)(psVar2 + 0xc4) - (int)psVar7;
        *(int *)(psVar2 + 0x10c) = *(int *)(psVar2 + 0x10c) - (int)psVar7;
      }
      *(byte *)(psVar8 + 6) = *(byte *)(psVar8 + 6) | 4;
      if (*(int *)(psVar8 + 0xc) != 0) {
        pbVar12 = (byte *)(*(int *)(psVar8 + 0xc) + 0xc);
        *pbVar12 = *pbVar12 | 4;
      }
    }
  }
LAB_006cb4bc:
  if (param_1 != 0) {
    if (psVar2 < psVar5) {
      psVar7 = (short *)((iVar9 - 1U) * -0x55555555);
      pbVar12 = (byte *)(psVar2 + 6);
      iVar10 = (iVar9 - 1U) / 0x30 + 1;
      do {
        if (((*pbVar12 & 4) == 0) && (*(int *)(pbVar12 + 0x10) != 0)) {
          psVar7 = (short *)FUN_006cb1a0();
          *pbVar12 = *pbVar12 | 4;
          param_1 = param_1 + -1;
        }
        pbVar12 = pbVar12 + 0x30;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    if ((param_1 != 0) && (psVar2 < psVar5)) {
      psVar6 = psVar2 + -0x18;
      do {
        psVar7 = psVar6;
        if ((*(byte *)(psVar6 + 0x1e) & 4) == 0) {
          for (; (psVar2 <= psVar7 && ((*(byte *)(psVar7 + 6) & 4) == 0)); psVar7 = psVar7 + -0x18)
          {
          }
          for (psVar8 = psVar6 + 0x30; (psVar8 < psVar5 && ((*(byte *)(psVar8 + 6) & 4) == 0));
              psVar8 = psVar8 + 0x18) {
          }
          if (psVar7 < psVar2) {
            if (psVar8 < psVar5) {
              FUN_006cb1a0();
            }
          }
          else if (psVar8 < psVar5) {
            sVar1 = *psVar7;
            if (*psVar8 == sVar1) {
              *(undefined4 *)(psVar6 + 0x1c) = *(undefined4 *)(psVar7 + 4);
            }
            else {
              iVar10 = FUN_0068ea60((int)psVar6[0x18] - (int)sVar1,
                                    *(int *)(psVar8 + 4) - *(int *)(psVar7 + 4),
                                    (int)*psVar8 - (int)sVar1);
              *(int *)(psVar6 + 0x1c) = iVar10 + *(int *)(psVar7 + 4);
            }
          }
          else {
            FUN_006cb1a0();
          }
        }
        psVar7 = psVar6 + 0x30;
        psVar6 = psVar6 + 0x18;
      } while (psVar7 < psVar5);
    }
  }
  return psVar7;
}


/* FUN_006cb7b0 @ 006cb7b0  kind=gamemisc  attributed-by=none  size=42 */

void FUN_006cb7b0(void)

{
  void *in_EAX;
  
  memset(in_EAX,0,0xb8);
  FUN_006c8850();
  FUN_006923a0();
  return;
}


/* FUN_006cb7e0 @ 006cb7e0  kind=gamemisc  attributed-by=none  size=42 */

void FUN_006cb7e0(void)

{
  undefined4 *unaff_ESI;
  
  FUN_006c8870(unaff_ESI + 3);
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  FUN_006915b0(unaff_ESI[2]);
  unaff_ESI[2] = 0;
  return;
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


/* FUN_006cc020 @ 006cc020  kind=gamemisc  attributed-by=none  size=15 */

void FUN_006cc020(void)

{
  FUN_006cb7e0();
  return;
}


/* FUN_006cc5a0 @ 006cc5a0  kind=gamemisc  attributed-by=none  size=29 */

void FUN_006cc5a0(undefined4 *param_1)

{
  fclose((FILE *)param_1[3]);
  param_1[3] = 0;
  param_1[1] = 0;
  *param_1 = 0;
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


/* FUN_006cc7e0 @ 006cc7e0  kind=gamemisc  attributed-by=none  size=105 */

undefined4 FUN_006cc7e0(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 == (undefined4 *)0x0) {
    return 0x21;
  }
  if (param_2 == (undefined4 *)0x0) {
    return 6;
  }
  FUN_00691290(*param_1,param_2[3]);
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  return 0;
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


/* FUN_006cc890 @ 006cc890  kind=gamemisc  attributed-by=none  size=76 */

int FUN_006cc890(void)

{
  uint uVar1;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 4) != 0) {
    return -1;
  }
  uVar1 = FUN_006909c0(*(undefined4 *)(unaff_ESI + 0xa4),unaff_ESI + 8,
                       *(undefined4 *)(unaff_ESI + 0x34));
  *(int *)(unaff_ESI + 0x24) = *(int *)(unaff_ESI + 0x24) + uVar1;
  *(uint *)(unaff_ESI + 4) = (uint)(uVar1 < *(uint *)(unaff_ESI + 0x34));
  *(undefined4 *)(unaff_ESI + 0x18) = 0;
  *(uint *)(unaff_ESI + 0x1c) = (uVar1 * 8 - *(uint *)(unaff_ESI + 0x34)) + 1;
  return (uVar1 != 0) - 1;
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


/* FUN_006ccab0 @ 006ccab0  kind=gamemisc  attributed-by=none  size=82 */

void FUN_006ccab0(void *param_1,int param_2)

{
  memset(param_1,0,0xac);
  *(int *)((int)param_1 + 0xa4) = param_2;
  *(undefined4 *)((int)param_1 + 0xa8) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)((int)param_1 + 0x4c) = 0;
  *(undefined4 *)((int)param_1 + 0x50) = 0;
  *(undefined4 *)((int)param_1 + 0x54) = 0;
  *(int *)((int)param_1 + 0x58) = (int)param_1 + 100;
  *(undefined4 *)((int)param_1 + 0x60) = 0x40;
  FUN_006cca80(param_1);
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


/* FUN_006cce10 @ 006cce10  kind=gamemisc  attributed-by=none  size=72 */

int FUN_006cce10(void)

{
  undefined4 *puVar1;
  int in_EAX;
  int iVar2;
  undefined4 in_ECX;
  undefined4 *in_EDX;
  
  in_EDX[1] = in_EAX;
  *in_EDX = in_ECX;
  in_EDX[2] = *(undefined4 *)(in_EAX + 0x1c);
  puVar1 = in_EDX + 0x42e;
  in_EDX[0x430] = puVar1;
  in_EDX[0x42f] = puVar1;
  *puVar1 = 0;
  iVar2 = FUN_006cc850();
  if (iVar2 == 0) {
    FUN_006ccab0(in_EDX + 3);
  }
  return iVar2;
}


/* FUN_006cce60 @ 006cce60  kind=gamemisc  attributed-by=none  size=23 */

void FUN_006cce60(void)

{
  undefined4 *unaff_ESI;
  
  FUN_006ccb10(unaff_ESI + 3);
  unaff_ESI[2] = 0;
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  return;
}


/* FUN_006cce80 @ 006cce80  kind=gamemisc  attributed-by=none  size=54 */

int FUN_006cce80(void)

{
  int *piVar1;
  int iVar2;
  int extraout_EDX;
  undefined4 *unaff_ESI;
  
  iVar2 = FUN_006908c0(*unaff_ESI,0);
  if (iVar2 == 0) {
    FUN_006cca80(unaff_ESI + 3);
    piVar1 = unaff_ESI + 0x42e;
    unaff_ESI[0x430] = piVar1;
    unaff_ESI[0x42f] = piVar1;
    *piVar1 = extraout_EDX;
    iVar2 = extraout_EDX;
  }
  return iVar2;
}


/* FUN_006ccec0 @ 006ccec0  kind=gamemisc  attributed-by=none  size=58 */

undefined4 FUN_006ccec0(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_ESI;
  
  *(int *)(unaff_ESI + 0x10bc) = unaff_ESI + 0xb8;
  iVar1 = FUN_006ccb70(unaff_ESI + 0xc,unaff_ESI + 0xb8,0x1000);
  *(int *)(unaff_ESI + 0x10c0) = *(int *)(unaff_ESI + 0x10bc) + iVar1;
  uVar2 = 0x55;
  if (iVar1 != 0) {
    uVar2 = 0;
  }
  return uVar2;
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


/* FUN_006ccf70 @ 006ccf70  kind=gamemisc  attributed-by=none  size=177 */

int FUN_006ccf70(int param_1,uint param_2)

{
  uint in_EAX;
  int iVar1;
  int in_ECX;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)(in_ECX + 0x10b8);
  iVar3 = 0;
  if (in_EAX < uVar2) {
    if ((*(int *)(in_ECX + 0x10bc) - in_ECX) - 0xb8U < uVar2 - in_EAX) {
      iVar1 = FUN_006cce80();
      if (iVar1 != 0) {
        return 0;
      }
    }
    else {
      *(uint *)(in_ECX + 0x10bc) = (*(int *)(in_ECX + 0x10bc) - uVar2) + in_EAX;
      *(uint *)(in_ECX + 0x10b8) = in_EAX;
    }
  }
  if (((in_EAX <= *(uint *)(in_ECX + 0x10b8)) || (iVar1 = FUN_006ccf00(), iVar1 == 0)) &&
     (param_2 != 0)) {
    do {
      uVar2 = *(int *)(in_ECX + 0x10c0) - (int)*(void **)(in_ECX + 0x10bc);
      if (param_2 <= uVar2) {
        uVar2 = param_2;
      }
      memcpy((void *)(param_1 + iVar3),*(void **)(in_ECX + 0x10bc),uVar2);
      *(int *)(in_ECX + 0x10bc) = *(int *)(in_ECX + 0x10bc) + uVar2;
      *(int *)(in_ECX + 0x10b8) = *(int *)(in_ECX + 0x10b8) + uVar2;
      iVar3 = iVar3 + uVar2;
      param_2 = param_2 - uVar2;
    } while ((param_2 != 0) && (iVar1 = FUN_006ccec0(), iVar1 == 0));
  }
  return iVar3;
}


/* FUN_006cd030 @ 006cd030  kind=gamemisc  attributed-by=none  size=43 */

void FUN_006cd030(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  if (iVar1 != 0) {
    FUN_006cce60();
    FUN_00691290(uVar2,iVar1);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
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


