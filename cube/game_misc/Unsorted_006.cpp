// Unsorted_006 (game_misc) -- cube. 150 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Unsorted_006.h"

/* FUN_0069fb00 @ 0069fb00  kind=gamemisc  attributed-by=none  size=127 */

undefined2 FUN_0069fb00(uint param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *in_EAX;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = 0;
  uVar5 = CONCAT31(CONCAT21(CONCAT11(*in_EAX,in_EAX[1]),in_EAX[2]),in_EAX[3]);
  if (uVar5 != 0) {
    do {
      uVar4 = uVar5 + uVar6 >> 1;
      iVar2 = uVar4 * 4 + 4;
      puVar1 = in_EAX + uVar4 + 3 + iVar2;
      uVar3 = (uint)CONCAT21(CONCAT11(puVar1[-3],in_EAX[uVar4 + 1 + iVar2]),puVar1[-1]);
      if (uVar3 <= param_1) {
        if (param_1 <= uVar3) {
          return CONCAT11(*puVar1,puVar1[1]);
        }
        uVar6 = uVar4 + 1;
        uVar4 = uVar5;
      }
      uVar5 = uVar4;
    } while (uVar6 < uVar4);
  }
  return 0;
}


/* FUN_0069fb90 @ 0069fb90  kind=gamemisc  attributed-by=none  size=105 */

undefined1 * FUN_0069fb90(uint param_1)

{
  undefined1 *puVar1;
  undefined1 *in_EAX;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = 0;
  uVar3 = CONCAT31(CONCAT21(CONCAT11(*in_EAX,in_EAX[1]),in_EAX[2]),in_EAX[3]);
  if (uVar3 != 0) {
    do {
      uVar5 = uVar3 + uVar4 >> 1;
      puVar1 = in_EAX + uVar5 * 0xb + 7;
      uVar2 = (uint)CONCAT21(CONCAT11(puVar1[-3],in_EAX[uVar5 * 0xb + 5]),puVar1[-1]);
      if (uVar2 <= param_1) {
        if (param_1 <= uVar2) {
          return puVar1;
        }
        uVar4 = uVar5 + 1;
        uVar5 = uVar3;
      }
      uVar3 = uVar5;
    } while (uVar4 < uVar5);
  }
  return (undefined1 *)0x0;
}


/* FUN_0069fdc0 @ 0069fdc0  kind=gamemisc  attributed-by=none  size=317 */

undefined4 FUN_0069fdc0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  int iVar12;
  int iVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *local_c;
  int local_4;
  
  local_4 = *(int *)(param_1 + 0x18);
  iVar13 = *(int *)(param_1 + 0x10);
  iVar12 = FUN_0069f6a0();
  if (iVar12 == 0) {
    local_c = *(uint **)(param_1 + 0x20);
    if (local_4 != 0) {
      puVar14 = (undefined1 *)(iVar13 + 9);
      iVar12 = iVar13 + 8;
      iVar16 = iVar13 + 7;
      puVar15 = (undefined1 *)(iVar13 + 6);
      do {
        uVar5 = *(undefined1 *)(iVar16 + 3);
        uVar6 = *(undefined1 *)(iVar12 + 3);
        puVar1 = (undefined1 *)(iVar16 + 7);
        uVar7 = puVar14[3];
        puVar2 = puVar15 + 7;
        puVar3 = (undefined1 *)(iVar12 + 7);
        puVar4 = puVar14 + 7;
        puVar15 = puVar15 + 0xb;
        uVar8 = *puVar15;
        uVar9 = *(undefined1 *)(iVar16 + 0xb);
        iVar16 = iVar16 + 0xb;
        uVar10 = *(undefined1 *)(iVar12 + 0xb);
        iVar12 = iVar12 + 0xb;
        puVar14 = puVar14 + 0xb;
        uVar11 = *puVar14;
        if (((CONCAT31(CONCAT21(CONCAT11(*puVar2,*puVar1),*puVar3),*puVar4) != 0) &&
            (iVar13 = FUN_0069fa90(), iVar13 != 0)) ||
           ((CONCAT31(CONCAT21(CONCAT11(uVar8,uVar9),uVar10),uVar11) != 0 &&
            (iVar13 = FUN_0069fb00(param_3), iVar13 != 0)))) {
          *local_c = (uint)CONCAT21(CONCAT11(uVar5,uVar6),uVar7);
          local_c = local_c + 1;
        }
        local_4 = local_4 + -1;
      } while (local_4 != 0);
    }
    *local_c = 0;
    return *(undefined4 *)(param_1 + 0x20);
  }
  return 0;
}


/* FUN_0069ff10 @ 0069ff10  kind=gamemisc  attributed-by=none  size=55 */

int FUN_0069ff10(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined1 *in_EDX;
  byte *pbVar4;
  
  iVar2 = 0;
  pbVar4 = in_EDX + 7;
  for (iVar3 = CONCAT31(CONCAT21(CONCAT11(*in_EDX,in_EDX[1]),in_EDX[2]),in_EDX[3]); iVar3 != 0;
      iVar3 = iVar3 + -1) {
    bVar1 = *pbVar4;
    pbVar4 = pbVar4 + 4;
    iVar2 = iVar2 + 1 + (uint)bVar1;
  }
  return iVar2;
}


/* FUN_0069ff50 @ 0069ff50  kind=gamemisc  attributed-by=none  size=138 */

undefined4 FUN_0069ff50(void)

{
  undefined1 *in_EAX;
  int iVar1;
  uint uVar2;
  int in_ECX;
  uint *puVar3;
  int iVar4;
  
  FUN_0069ff10();
  iVar4 = CONCAT31(CONCAT21(CONCAT11(*in_EAX,in_EAX[1]),in_EAX[2]),in_EAX[3]);
  iVar1 = FUN_0069f6a0();
  if (iVar1 != 0) {
    return 0;
  }
  puVar3 = *(uint **)(in_ECX + 0x20);
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    uVar2 = (uint)CONCAT21(CONCAT11(in_EAX[4],in_EAX[5]),in_EAX[6]);
    iVar1 = (byte)in_EAX[7] + 1;
    do {
      *puVar3 = uVar2;
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    in_EAX = in_EAX + 4;
  }
  *puVar3 = 0;
  return *(undefined4 *)(in_ECX + 0x20);
}


/* FUN_0069ffe0 @ 0069ffe0  kind=gamemisc  attributed-by=none  size=163 */

int FUN_0069ffe0(void)

{
  undefined1 *in_EAX;
  int iVar1;
  int in_ECX;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  
  puVar5 = in_EAX + 3;
  puVar3 = in_EAX + 2;
  puVar2 = in_EAX + 1;
  uVar4 = CONCAT31(CONCAT21(CONCAT11(*in_EAX,*puVar2),*puVar3),*puVar5);
  iVar1 = FUN_0069f6a0();
  if (iVar1 == 0) {
    iVar1 = *(int *)(in_ECX + 0x20);
    uVar6 = 0;
    if (uVar4 != 0) {
      do {
        *(uint *)(iVar1 + uVar6 * 4) = (uint)CONCAT21(CONCAT11(puVar2[3],puVar3[3]),puVar5[3]);
        uVar6 = uVar6 + 1;
        puVar2 = puVar2 + 5;
        puVar3 = puVar3 + 5;
        puVar5 = puVar5 + 5;
      } while (uVar6 < uVar4);
    }
    *(undefined4 *)(iVar1 + uVar6 * 4) = 0;
    return iVar1;
  }
  return 0;
}


/* FUN_006a03d0 @ 006a03d0  kind=gamemisc  attributed-by=none  size=584 */

void FUN_006a03d0(int param_1)

{
  int iVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined **ppuVar4;
  int local_94;
  undefined4 local_90;
  undefined2 local_8c;
  undefined2 local_8a;
  undefined1 *local_88;
  uint local_84;
  int local_80;
  undefined4 local_7c;
  undefined **local_78;
  undefined *local_74;
  int local_70;
  undefined1 *local_6c;
  undefined **local_68;
  undefined **local_64;
  undefined **local_60;
  undefined1 local_5c [12];
  int local_50;
  undefined1 local_4c [64];
  uint local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&local_78;
  local_88 = *(undefined1 **)(param_1 + 500);
  local_78 = (undefined **)(local_88 + *(int *)(param_1 + 0x1f8));
  local_70 = param_1;
  if (((local_88 == (undefined1 *)0x0) || (local_78 < local_88 + 4)) ||
     (CONCAT11(*local_88,local_88[1]) != 0)) {
    local_60 = (undefined **)local_88;
    __security_check_cookie(DAT_0076aa78);
    return;
  }
  local_68 = (undefined **)(uint)CONCAT11(local_88[2],local_88[3]);
  ppuVar2 = (undefined **)(local_88 + 4);
  ppuVar4 = local_68;
  iVar1 = param_1;
  iVar3 = local_94;
  do {
    local_94 = iVar1;
    local_70 = local_94;
    if ((local_68 == (undefined **)0x0) || (local_78 < ppuVar2 + 2)) {
      local_94 = iVar3;
      local_60 = ppuVar2;
      __security_check_cookie(local_8 ^ (uint)&local_78,ppuVar4);
      return;
    }
    local_8c = CONCAT11(*(undefined1 *)ppuVar2,*(undefined1 *)((int)ppuVar2 + 1));
    local_8a = CONCAT11(*(undefined1 *)((int)ppuVar2 + 2),*(undefined1 *)((int)ppuVar2 + 3));
    local_90 = 0;
    local_60 = ppuVar2 + 2;
    ppuVar2 = (undefined **)
              CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(ppuVar2 + 1),
                                         *(undefined1 *)((int)ppuVar2 + 5)),
                                *(undefined1 *)((int)ppuVar2 + 6)),*(undefined1 *)((int)ppuVar2 + 7)
                      );
    ppuVar4 = local_60;
    if ((ppuVar2 != (undefined **)0x0) &&
       (ppuVar4 = (undefined **)(*(int *)(local_94 + 0x1f8) + -2), ppuVar2 <= ppuVar4)) {
      local_6c = (undefined1 *)((int)ppuVar2 + (int)local_88);
      local_84 = (uint)CONCAT11(*local_6c,local_6c[1]);
      local_64 = &PTR_DAT_007238ec;
      do {
        local_74 = *local_64;
        if (*(uint *)(local_74 + 0x28) == local_84) {
          local_7c = 0;
          FUN_0068f170(local_5c,local_6c,local_78,0);
          local_c = (uint)*(ushort *)(local_70 + 0x108);
          iVar3 = setjmp3(local_4c,0);
          if (iVar3 == 0) {
            local_7c = (**(code **)(local_74 + 0x2c))(local_6c,local_5c);
          }
          ppuVar4 = local_64;
          if ((local_50 == 0) &&
             (iVar3 = FUN_00693ed0(local_74,local_6c,&local_94,&local_80), ppuVar4 = local_64,
             iVar3 == 0)) {
            *(undefined4 *)(local_80 + 0x14) = local_7c;
          }
          break;
        }
        ppuVar4 = local_64 + 1;
        local_64 = ppuVar4;
      } while (*ppuVar4 != (undefined *)0x0);
    }
    local_68 = (undefined **)((int)local_68 + -1);
    ppuVar2 = local_60;
    iVar1 = local_70;
    iVar3 = local_94;
  } while( true );
}


/* FUN_006a0890 @ 006a0890  kind=gamemisc  attributed-by=none  size=484 */

uint FUN_006a0890(int param_1,int param_2,uint param_3)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint local_1c;
  uint local_18;
  uint local_10;
  int local_c;
  
  local_c = *(int *)(param_1 + 0x30c);
  uVar7 = *(int *)(param_1 + 0x308) + *(int *)(param_1 + 0x304);
  local_1c = 0;
  local_18 = 1;
  uVar5 = *(int *)(param_1 + 0x304) + 4;
  if (local_c == 0) {
    return 0;
  }
  do {
    if (uVar7 < uVar5 + 6) {
      return local_1c;
    }
    uVar9 = CONCAT11(*(undefined1 *)(uVar5 + 2),*(undefined1 *)(uVar5 + 3)) + uVar5;
    if (uVar7 < uVar9) {
      uVar9 = uVar7;
    }
    uVar4 = local_1c;
    if (((*(uint *)(param_1 + 0x310) & local_18) != 0) && (uVar5 + 0xe <= uVar9)) {
      uVar2 = (uint)CONCAT11(*(undefined1 *)(uVar5 + 6),*(undefined1 *)(uVar5 + 7));
      puVar6 = (undefined1 *)(uVar5 + 0xe);
      if ((int)(uVar9 - (int)puVar6) < (int)(uVar2 * 6)) {
        uVar2 = (int)(uVar9 - (int)puVar6) / 6;
      }
      if (*(char *)(uVar5 + 4) == '\0') {
        uVar10 = param_2 << 0x10 | param_3;
        if ((*(uint *)(param_1 + 0x314) & local_18) == 0) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            if (CONCAT31(CONCAT21(CONCAT11(*puVar6,puVar6[1]),puVar6[2]),puVar6[3]) == uVar10) {
              uVar4 = (int)(short)((short)(char)puVar6[4] << 8) | (uint)(byte)puVar6[5];
              goto LAB_006a0a3a;
            }
            puVar6 = puVar6 + 6;
          }
        }
        else {
          local_10 = 0;
          if (uVar2 != 0) {
LAB_006a0998:
            uVar8 = local_10 + uVar2 >> 1;
            pcVar1 = (char *)(uVar5 + 0x12 + uVar8 * 6);
            uVar3 = CONCAT31(CONCAT21(CONCAT11(pcVar1[-4],*(undefined1 *)(uVar5 + 0xf + uVar8 * 6)),
                                      pcVar1[-2]),pcVar1[-1]);
            if (uVar3 != uVar10) break;
            uVar4 = (int)(short)((short)*pcVar1 << 8) | (uint)(byte)pcVar1[1];
LAB_006a0a3a:
            if ((*(byte *)(uVar5 + 5) & 8) == 0) {
              uVar4 = local_1c + uVar4;
            }
          }
        }
      }
    }
LAB_006a0a49:
    local_1c = uVar4;
    local_18 = local_18 << 1;
    local_c = local_c + -1;
    uVar5 = uVar9;
    if (local_c == 0) {
      return local_1c;
    }
  } while( true );
  if (uVar3 < uVar10) {
    local_10 = uVar8 + 1;
    uVar8 = uVar2;
  }
  uVar2 = uVar8;
  if (uVar8 <= local_10) goto LAB_006a0a49;
  goto LAB_006a0998;
}


/* FUN_006a0a80 @ 006a0a80  kind=gamemisc  attributed-by=none  size=115 */

int FUN_006a0a80(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x10);
  uVar6 = (uint)(*(ushort *)(param_1 + 8) >> 1);
  iVar3 = FUN_00693a60(param_2,1,0,uVar6 + 1,0,&param_1);
  if (param_1 == 0) {
    uVar5 = 0;
    if (uVar6 != 0) {
      iVar7 = iVar7 + -1;
      do {
        puVar1 = (undefined1 *)(iVar7 + 1);
        puVar2 = (undefined1 *)(iVar7 + 2);
        iVar7 = iVar7 + 2;
        uVar4 = CONCAT11(*puVar1,*puVar2);
        if ((uVar4 < 0x20) || (0x7f < uVar4)) {
          uVar4 = 0x3f;
        }
        *(char *)(uVar5 + iVar3) = (char)uVar4;
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar6);
    }
    *(undefined1 *)(uVar6 + iVar3) = 0;
    return iVar3;
  }
  return 0;
}


/* FUN_006a0b70 @ 006a0b70  kind=gamemisc  attributed-by=none  size=536 */

int FUN_006a0b70(short param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  int iVar2;
  int in_EAX;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  undefined2 *puVar7;
  int iVar8;
  bool bVar9;
  int local_18;
  undefined4 local_14;
  uint local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_14 = *(undefined4 *)(in_EAX + 100);
  puVar1 = *(undefined2 **)(in_EAX + 0x168);
  local_18 = 0;
  local_8 = -1;
  local_c = -1;
  iVar8 = -1;
  local_4 = -1;
  bVar9 = false;
  puVar7 = puVar1;
  if (*(ushort *)(in_EAX + 0x158) != 0) {
    iVar5 = 0;
    local_10 = (uint)*(ushort *)(in_EAX + 0x158);
    do {
      iVar2 = local_c;
      if ((puVar7[3] == param_1) && (puVar7[4] != 0)) {
        switch(*puVar7) {
        case 0:
        case 2:
          local_4 = iVar5;
          break;
        case 1:
          iVar2 = iVar5;
          if ((puVar7[2] != 0) && (iVar2 = local_c, puVar7[1] == 0)) {
            local_8 = iVar5;
          }
          break;
        case 3:
          if (((iVar8 == -1) || ((puVar7[2] & 0x3ff) == 9)) &&
             (((ushort)puVar7[1] < 2 || (puVar7[1] == 10)))) {
            bVar9 = (puVar7[2] & 0x3ff) == 9;
            iVar8 = iVar5;
          }
        }
      }
      local_c = iVar2;
      iVar5 = iVar5 + 1;
      puVar7 = puVar7 + 10;
      local_10 = local_10 - 1;
    } while (local_10 != 0);
    local_10 = 0;
  }
  iVar5 = local_8;
  if (-1 < local_c) {
    iVar5 = local_c;
  }
  pcVar6 = (code *)0x0;
  if ((iVar8 < 0) || ((-1 < iVar5 && (!bVar9)))) {
    if (iVar5 < 0) {
      if (-1 < local_4) {
        puVar7 = puVar1 + local_4 * 10;
        goto LAB_006a0caa;
      }
    }
    else {
      puVar7 = puVar1 + iVar5 * 10;
      pcVar6 = (code *)&LAB_006a0b00;
    }
  }
  else {
    puVar7 = puVar1 + iVar8 * 10;
    if (((ushort)puVar1[iVar8 * 10 + 1] < 2) || (puVar1[iVar8 * 10 + 1] == 10)) {
LAB_006a0caa:
      pcVar6 = FUN_006a0a80;
    }
  }
  if (puVar7 == (undefined2 *)0x0) {
    *param_2 = 0;
    return 0;
  }
  if (pcVar6 != (code *)0x0) {
    if (*(int *)(puVar7 + 8) == 0) {
      uVar4 = *(undefined4 *)(in_EAX + 0x16c);
      uVar3 = FUN_00693a60(local_14,1,0,puVar7[4],0,&local_18);
      *(undefined4 *)(puVar7 + 8) = uVar3;
      if (((local_18 != 0) ||
          (local_18 = FUN_006908c0(uVar4,*(undefined4 *)(puVar7 + 6)), local_18 != 0)) ||
         (local_18 = FUN_00691ec0(uVar4,*(undefined4 *)(puVar7 + 8),puVar7[4]), local_18 != 0)) {
        FUN_00691290(local_14,*(undefined4 *)(puVar7 + 8));
        *(undefined4 *)(puVar7 + 8) = 0;
        puVar7[4] = 0;
        goto LAB_006a0d43;
      }
    }
    uVar4 = (*pcVar6)(puVar7,local_14);
    *param_2 = uVar4;
    return local_18;
  }
LAB_006a0d43:
  *param_2 = 0;
  return local_18;
}


/* FUN_006a0da0 @ 006a0da0  kind=gamemisc  attributed-by=none  size=38 */

int FUN_006a0da0(void)

{
  int *piVar1;
  int in_EDX;
  int unaff_ESI;
  
  piVar1 = &DAT_00723920;
  while ((*piVar1 != unaff_ESI || ((piVar1[1] != in_EDX && (piVar1[1] != -1))))) {
    piVar1 = piVar1 + 3;
    if (&UNK_007239a3 < piVar1) {
      return 0;
    }
  }
  return piVar1[2];
}


/* FUN_006a0dd0 @ 006a0dd0  kind=gamemisc  attributed-by=none  size=372 */

int FUN_006a0dd0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int unaff_ESI;
  int unaff_EDI;
  int local_8;
  undefined4 local_4;
  
  uVar2 = *(undefined4 *)(unaff_EDI + 0x1c);
  *(undefined4 *)(unaff_ESI + 0x84) = 0;
  *(undefined4 *)(unaff_ESI + 0x88) = 0;
  *(undefined4 *)(unaff_ESI + 0x8c) = 0;
  local_4 = FUN_00690930();
  iVar1 = FUN_00690cd0();
  if (local_8 != 0) {
    return local_8;
  }
  if (((((iVar1 != 0x10000) && (iVar1 != 0x74746366)) && (iVar1 != 0x4f54544f)) &&
      ((iVar1 != 0x74727565 && (iVar1 != 0x74797031)))) && (iVar1 != 0x20000)) {
    return 2;
  }
  *(undefined4 *)(unaff_ESI + 0x84) = 0x74746366;
  if (iVar1 == 0x74746366) {
    local_8 = FUN_00692010();
    if (local_8 == 0) {
      uVar2 = FUN_00693a60(uVar2,4,0,*(undefined4 *)(unaff_ESI + 0x8c),0,&local_8);
      *(undefined4 *)(unaff_ESI + 0x90) = uVar2;
      if ((local_8 == 0) && (local_8 = FUN_00691f30(), local_8 == 0)) {
        local_8 = 0;
        if (0 < *(int *)(unaff_ESI + 0x8c)) {
          iVar1 = 0;
          do {
            uVar2 = FUN_00690aa0();
            *(undefined4 *)(*(int *)(unaff_ESI + 0x90) + iVar1 * 4) = uVar2;
            iVar1 = iVar1 + 1;
          } while (iVar1 < *(int *)(unaff_ESI + 0x8c));
        }
        FUN_00691fe0();
        return local_8;
      }
    }
  }
  else {
    *(undefined4 *)(unaff_ESI + 0x88) = 0x10000;
    *(undefined4 *)(unaff_ESI + 0x8c) = 1;
    puVar3 = (undefined4 *)FUN_00692230(uVar2,4,&local_8);
    *(undefined4 **)(unaff_ESI + 0x90) = puVar3;
    if (local_8 != 0) {
      return local_8;
    }
    *puVar3 = local_4;
    local_8 = 0;
  }
  return local_8;
}


/* FUN_006a1010 @ 006a1010  kind=gamemisc  attributed-by=none  size=1780 */

void FUN_006a1010(undefined4 param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  int *piVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  undefined2 *puVar11;
  bool bVar12;
  uint uStack_38;
  char local_33;
  char local_32;
  char local_31;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  int local_24;
  ushort uStack_20;
  ushort uStack_1e;
  int iStack_c;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&uStack_38;
  iVar7 = *(int *)(param_2 + 0x214);
  iVar6 = 0;
  local_31 = '\0';
  local_32 = '\0';
  if (0 < param_4) {
    do {
      iVar3 = *(int *)(param_5 + iVar6 * 8);
      if (iVar3 == 0x69677066) {
        local_31 = '\x01';
      }
      else if (iVar3 == 0x69677073) {
        local_32 = '\x01';
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_4);
  }
  local_24 = iVar7;
  if ((*(int *)(*(int *)(param_2 + 0x80) + 0x34) == 0) && (iVar6 = FUN_0069c020(), iVar6 == 0)) {
    iVar6 = FUN_0069c020();
    local_33 = '\0';
    if (iVar6 != 0) goto LAB_006a10a5;
  }
  else {
LAB_006a10a5:
    local_33 = '\x01';
  }
  bVar12 = false;
  if ((local_33 == '\0') && (*(code **)(iVar7 + 0x54) != (code *)0x0)) {
    uStack_38 = (**(code **)(iVar7 + 0x54))(param_2,param_1);
    bVar12 = uStack_38 == 0;
    if (!bVar12) goto LAB_006a10cd;
  }
  else {
LAB_006a10cd:
    uStack_38 = (**(code **)(iVar7 + 0x20))(param_2,param_1);
    if (uStack_38 != 0) goto LAB_006a16f6;
  }
  if (*(short *)(param_2 + 0xb2) == 0) {
    __security_check_cookie(local_4 ^ (uint)&uStack_38);
    return;
  }
  uStack_38 = (**(code **)(iVar7 + 0x2c))(param_2,param_1);
  uStack_38 = (**(code **)(iVar7 + 0x28))(param_2,param_1);
  uStack_38 = (**(code **)(iVar7 + 0x38))(param_2,param_1);
  uStack_38 = (**(code **)(iVar7 + 0x34))(param_2,param_1);
  uStack_30 = uStack_38;
  if (!bVar12) {
    uStack_38 = (**(code **)(iVar7 + 0x24))(param_2,param_1,0);
    if (uStack_38 == 0) {
      uStack_38 = (**(code **)(iVar7 + 0x88))(param_2,param_1,0);
      if (uStack_38 == 0x8e) {
        uStack_38 = 0x93;
        piVar4 = *(int **)(*(int *)(param_2 + 0x80) + 0x34);
        if ((piVar4 == (int *)0x0) || (*(int *)(*piVar4 + 8) == 0)) goto LAB_006a16f6;
        *(undefined2 *)(param_2 + 0xfa) = 0;
        uStack_38 = 0;
      }
      else {
LAB_006a1201:
        if (uStack_38 != 0) goto LAB_006a16f6;
      }
    }
    else {
      if (uStack_38 != 0x8e) goto LAB_006a1201;
      if (*(int *)(param_2 + 0x94) == 0x74727565) {
        local_33 = '\0';
        uStack_38 = 0;
      }
      else {
        uStack_38 = 0x8f;
        piVar4 = *(int **)(*(int *)(param_2 + 0x80) + 0x34);
        if ((piVar4 == (int *)0x0) || (*(int *)(*piVar4 + 8) == 0)) goto LAB_006a16f6;
        *(undefined2 *)(param_2 + 0xfa) = 0;
        uStack_38 = 0;
      }
    }
    uStack_38 = (**(code **)(iVar7 + 0x24))(param_2,param_1,1);
    if ((uStack_38 == 0) &&
       (uStack_38 = (**(code **)(iVar7 + 0x88))(param_2,param_1,1), uStack_38 == 0)) {
      *(undefined1 *)(param_2 + 0x128) = 1;
    }
    else if (uStack_38 != 0x8e) goto LAB_006a16f6;
    uStack_38 = (**(code **)(iVar7 + 0x30))(param_2,param_1);
    if (uStack_38 != 0) {
      if (uStack_38 != 0x8e) goto LAB_006a16f6;
      *(undefined2 *)(param_2 + 0x170) = 0xffff;
    }
  }
  if ((*(code **)(iVar7 + 0x8c) != (code *)0x0) &&
     (uStack_38 = (**(code **)(iVar7 + 0x8c))(param_2,param_1), uStack_38 != 0)) {
    if (uStack_38 != 0x8e) goto LAB_006a16f6;
    uStack_38 = 0;
  }
  uStack_38 = (**(code **)(iVar7 + 0x50))(param_2,param_1);
  if (uStack_38 != 0) {
    if (uStack_38 != 0x8e) goto LAB_006a16f6;
    *(undefined4 *)(param_2 + 0x22c) = 0;
  }
  uStack_38 = (**(code **)(iVar7 + 0x4c))(param_2,param_1);
  uStack_38 = (**(code **)(iVar7 + 0x48))(param_2,param_1);
  piVar4 = (int *)(param_2 + 0x14);
  piVar1 = (int *)(param_2 + 0x18);
  *(uint *)(param_2 + 0x10) = (uint)*(ushort *)(param_2 + 0x108);
  *piVar4 = 0;
  *piVar1 = 0;
  if ((*(short *)(param_2 + 0x170) == -1) || ((*(ushort *)(param_2 + 0x1b0) & 0x100) == 0)) {
    uStack_38 = FUN_006a0b70(0x15,piVar4);
    if ((uStack_38 != 0) ||
       (((uVar9 = 0, *piVar4 == 0 &&
         (((local_31 == '\0' &&
           (uStack_38 = FUN_006a0b70(0x10,piVar4), uVar9 = uStack_38, uStack_38 != 0)) ||
          ((uStack_38 = uVar9, uVar9 = uStack_38, *piVar4 == 0 &&
           (uStack_38 = FUN_006a0b70(1,piVar4), uVar9 = uStack_38, uStack_38 != 0)))))) ||
        (uStack_38 = uVar9, uStack_38 = FUN_006a0b70(0x16,piVar1), uStack_38 != 0))))
    goto LAB_006a16f6;
    if (*piVar1 == 0) goto LAB_006a13e2;
  }
  else {
    if (((local_31 == '\0') && (uStack_38 = FUN_006a0b70(0x10,piVar4), uStack_38 != 0)) ||
       ((*piVar4 == 0 && (uStack_38 = FUN_006a0b70(1,piVar4), uStack_38 != 0)))) goto LAB_006a16f6;
LAB_006a13e2:
    if (((local_32 == '\0') && (uStack_38 = FUN_006a0b70(0x11,piVar1), uStack_38 != 0)) ||
       ((*piVar1 == 0 && (uStack_38 = FUN_006a0b70(2,piVar1), uStack_38 != 0)))) goto LAB_006a16f6;
  }
  uVar9 = *(uint *)(param_2 + 8);
  if (local_33 == '\x01') {
    uVar9 = uVar9 | 1;
  }
  uVar10 = uVar9 | 0x18;
  if ((uStack_30 == 0) && (*(int *)(param_2 + 0x1d4) != 0x30000)) {
    uVar10 = uVar9 | 0x218;
  }
  if (*(int *)(param_2 + 0x1e0) != 0) {
    uVar10 = uVar10 | 4;
  }
  if (*(char *)(param_2 + 0x128) != '\0') {
    uVar10 = uVar10 | 0x20;
  }
  if (*(int *)(param_2 + 0x310) != 0) {
    uVar10 = uVar10 | 0x40;
  }
  iVar7 = FUN_0069c020();
  if (((iVar7 != 0) && (iVar7 = FUN_0069c020(), iVar7 != 0)) && (iVar7 = FUN_0069c020(), iVar7 != 0)
     ) {
    uVar10 = uVar10 | 0x100;
  }
  uVar9 = 0;
  *(uint *)(param_2 + 8) = uVar10;
  if ((local_33 == '\x01') && (*(short *)(param_2 + 0x170) != -1)) {
    uVar2 = *(ushort *)(param_2 + 0x1b0);
    if (((uVar2 & 0x200) != 0) || ((uVar2 & 1) != 0)) {
      uVar9 = 1;
    }
    if ((uVar2 & 0x20) != 0) {
      uVar9 = uVar9 | 2;
    }
  }
  else {
    if ((*(ushort *)(param_2 + 0xcc) & 1) != 0) {
      uVar9 = 2;
    }
    if ((*(ushort *)(param_2 + 0xcc) & 2) != 0) {
      uVar9 = uVar9 | 1;
    }
  }
  *(uint *)(param_2 + 0xc) = uVar9;
  FUN_006a03d0(param_2);
  iVar7 = 0;
  if (0 < *(int *)(param_2 + 0x24)) {
    do {
      iVar6 = *(int *)(*(int *)(param_2 + 0x28) + iVar7 * 4);
      uVar8 = FUN_006a0da0();
      iVar7 = iVar7 + 1;
      *(undefined4 *)(iVar6 + 4) = uVar8;
    } while (iVar7 < *(int *)(param_2 + 0x24));
  }
  uVar9 = *(uint *)(param_2 + 0x264);
  uVar10 = 0;
  uStack_30 = uVar9;
  if (uVar9 != 0) {
    uStack_2c = (uint)*(ushort *)(param_2 + 0xb2);
    uStack_28 = (uint)*(ushort *)(param_2 + 0x172);
    if ((*(ushort *)(param_2 + 0xb2) == 0) || (*(short *)(param_2 + 0x170) == -1)) {
      uStack_28 = 0;
      uStack_2c = 1;
    }
    uVar8 = FUN_00693a60(*(undefined4 *)(*(int *)(param_2 + 0x68) + 0x1c),0x10,0,uVar9,0,&uStack_38)
    ;
    *(undefined4 *)(param_2 + 0x20) = uVar8;
    if (uStack_38 != 0) goto LAB_006a16f6;
    if (uVar9 != 0) {
      iVar7 = 0;
      uVar9 = uStack_38;
      do {
        uStack_38 = uVar9;
        puVar11 = (undefined2 *)(*(int *)(param_2 + 0x20) + iVar7);
        uStack_38 = (**(code **)(local_24 + 0x98))(param_2,uVar10,&uStack_20);
        if (uStack_38 != 0) goto LAB_006a16f6;
        *puVar11 = (short)(iStack_c >> 6);
        uVar10 = uVar10 + 1;
        iVar7 = iVar7 + 0x10;
        puVar11[1] = (short)((int)((uint)uStack_20 * (int)(short)uStack_28 +
                                  (uStack_2c >> 1 & 0x7fff)) / (int)(uStack_2c & 0xffff));
        *(uint *)(puVar11 + 4) = (uint)uStack_20 << 6;
        *(uint *)(puVar11 + 6) = (uint)uStack_1e << 6;
        *(uint *)(puVar11 + 2) = (uint)uStack_1e << 6;
        uVar9 = 0;
      } while (uVar10 < uStack_30);
    }
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 2;
    *(uint *)(param_2 + 0x1c) = uStack_30;
  }
  if ((*(uint *)(param_2 + 8) & 3) == 0) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 1;
  }
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    *(int *)(param_2 + 0x34) = (int)*(short *)(param_2 + 0xc4);
    *(int *)(param_2 + 0x38) = (int)*(short *)(param_2 + 0xc6);
    *(int *)(param_2 + 0x3c) = (int)*(short *)(param_2 + 200);
    *(int *)(param_2 + 0x40) = (int)*(short *)(param_2 + 0xca);
    *(undefined2 *)(param_2 + 0x44) = *(undefined2 *)(param_2 + 0xb2);
    sVar5 = (*(short *)(param_2 + 0xe0) - *(short *)(param_2 + 0xde)) + *(short *)(param_2 + 0xdc);
    *(short *)(param_2 + 0x46) = *(short *)(param_2 + 0xdc);
    *(short *)(param_2 + 0x48) = *(short *)(param_2 + 0xde);
    *(short *)(param_2 + 0x4a) = sVar5;
    *(undefined2 *)(param_2 + 0x4c) = *(undefined2 *)(param_2 + 0xe2);
    if (*(char *)(param_2 + 0x128) != '\0') {
      sVar5 = *(short *)(param_2 + 0x136);
    }
    *(short *)(param_2 + 0x4e) = sVar5;
    *(short *)(param_2 + 0x50) = *(short *)(param_2 + 0x1dc) - *(short *)(param_2 + 0x1de) / 2;
    *(short *)(param_2 + 0x52) = *(short *)(param_2 + 0x1de);
  }
LAB_006a16f6:
  __security_check_cookie(local_4 ^ (uint)&uStack_38);
  return;
}


/* FUN_006a1820 @ 006a1820  kind=gamemisc  attributed-by=none  size=604 */

void FUN_006a1820(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  short *psVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  byte *local_10;
  int local_c;
  int local_8;
  byte *local_4;
  
  iVar5 = 0;
  local_10 = (byte *)0x0;
  if (*(int *)(param_1 + 700) != 0) {
    return;
  }
  iVar9 = -1;
  iVar7 = -1;
  if (*(short *)(param_1 + 0x158) == 0) goto LAB_006a1a6c;
  psVar4 = *(short **)(param_1 + 0x168);
  do {
    if ((psVar4[3] == 6) && (psVar4[4] != 0)) {
      if ((*psVar4 == 3) && ((psVar4[1] == 1 && (psVar4[2] == 0x409)))) {
        iVar9 = iVar5;
      }
      if (((*psVar4 == 1) && (psVar4[1] == 0)) && (psVar4[2] == 0)) {
        iVar7 = iVar5;
      }
    }
    iVar5 = iVar5 + 1;
    psVar4 = psVar4 + 10;
  } while (iVar5 < (int)(uint)*(ushort *)(param_1 + 0x158));
  if (iVar9 == -1) {
    if (iVar7 == -1) goto LAB_006a1a6c;
    uVar2 = *(undefined4 *)(param_1 + 100);
    uVar10 = (uint)*(ushort *)(*(int *)(param_1 + 0x168) + 8 + iVar7 * 0x14);
    iVar5 = *(int *)(param_1 + 0x168) + iVar7 * 0x14;
    local_c = 0;
    local_10 = (byte *)FUN_00692230(uVar2,uVar10 + 1,&local_c);
    if (local_c != 0) goto LAB_006a1a6c;
    uVar3 = *(undefined4 *)(param_1 + 0x16c);
    local_c = FUN_006908c0(uVar3,*(undefined4 *)(iVar5 + 0xc));
    if ((local_c == 0) && (local_c = FUN_00691ec0(uVar3,local_10,uVar10), local_c == 0)) {
      local_10[uVar10] = 0;
      *(byte **)(param_1 + 700) = local_10;
      return;
    }
    *(undefined4 *)(iVar5 + 0xc) = 0;
    *(undefined2 *)(iVar5 + 8) = 0;
    FUN_00691290(uVar2,*(undefined4 *)(iVar5 + 0x10));
    *(undefined4 *)(iVar5 + 0x10) = 0;
    FUN_00691290(uVar2,local_10);
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 100);
    iVar5 = *(int *)(param_1 + 0x168) + iVar9 * 0x14;
    local_c = 0;
    uVar10 = (uint)(*(ushort *)(*(int *)(param_1 + 0x168) + 8 + iVar9 * 0x14) >> 1);
    local_10 = (byte *)FUN_00692230(uVar2,*(ushort *)(iVar5 + 8) + 1,&local_c);
    if (local_c != 0) goto LAB_006a1a6c;
    local_8 = *(int *)(param_1 + 0x16c);
    local_4 = local_10;
    local_c = FUN_006908c0(local_8,*(undefined4 *)(iVar5 + 0xc));
    if ((local_c == 0) && (local_c = FUN_00691f30(local_8,*(undefined2 *)(iVar5 + 8)), local_c == 0)
       ) {
      pcVar6 = *(char **)(local_8 + 0x20);
      pbVar8 = local_10;
      for (; uVar10 != 0; uVar10 = uVar10 - 1) {
        if (((*pcVar6 == '\0') && (bVar1 = pcVar6[1], 0x1f < bVar1)) && (bVar1 < 0x80)) {
          *pbVar8 = bVar1;
          pbVar8 = pbVar8 + 1;
        }
        pcVar6 = pcVar6 + 2;
      }
      *pbVar8 = 0;
      FUN_00691fe0(local_8);
      *(byte **)(param_1 + 700) = local_10;
      return;
    }
    FUN_00691290(uVar2,local_10);
    *(undefined2 *)(iVar5 + 8) = 0;
    *(undefined4 *)(iVar5 + 0xc) = 0;
    FUN_00691290(uVar2,*(undefined4 *)(iVar5 + 0x10));
    *(undefined4 *)(iVar5 + 0x10) = 0;
  }
  local_10 = (byte *)0x0;
LAB_006a1a6c:
  *(byte **)(param_1 + 700) = local_10;
  return;
}


/* FUN_006a1ab0 @ 006a1ab0  kind=gamemisc  attributed-by=none  size=353 */

void FUN_006a1ab0(byte *param_1,int param_2,char param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int *in_EAX;
  byte *pbVar5;
  int in_ECX;
  int iVar6;
  byte bVar7;
  uint in_EDX;
  byte bVar8;
  int iVar9;
  uint uVar10;
  uint local_10;
  byte *local_c;
  int local_4;
  
  iVar1 = in_EAX[2];
  uVar10 = 0;
  iVar6 = in_EAX[3];
  if (iVar1 < 0) {
    iVar6 = iVar6 - (*in_EAX + -1) * iVar1;
  }
  local_c = (byte *)(((int)in_EDX >> 3) + iVar6 + iVar1 * param_4);
  local_10 = 0;
  if (0 < in_ECX) {
    bVar8 = (byte)in_EDX & 7;
    bVar4 = 8 - bVar8;
    local_4 = in_ECX;
    do {
      pbVar5 = local_c;
      iVar6 = param_2;
      if (7 < param_2) {
        iVar3 = param_2 + -8;
        iVar2 = -uVar10;
        do {
          iVar6 = iVar3;
          iVar9 = iVar2 + 8;
          if (uVar10 < 8) {
            bVar7 = *param_1;
            param_1 = param_1 + 1;
            uVar10 = uVar10 + 8;
            local_10 = (uint)(ushort)((ushort)local_10 | (ushort)bVar7 << ((byte)(iVar2 + 8) & 0x1f)
                                     );
            iVar9 = iVar2;
          }
          bVar7 = (byte)(local_10 >> 8);
          if ((in_EDX & 7) == 0) {
            *pbVar5 = *pbVar5 | bVar7;
          }
          else {
            *pbVar5 = *pbVar5 | bVar7 >> bVar8;
            pbVar5[1] = pbVar5[1] | bVar7 << (bVar4 & 0x1f);
          }
          local_10 = local_10 << 8;
          pbVar5 = pbVar5 + 1;
          uVar10 = uVar10 - 8;
          iVar3 = iVar6 + -8;
          iVar2 = iVar9;
        } while (-1 < iVar6 + -8);
      }
      if (0 < iVar6) {
        if ((int)uVar10 < iVar6) {
          bVar7 = *param_1;
          param_1 = param_1 + 1;
          local_10._0_2_ = (ushort)local_10 | (ushort)bVar7 << (8U - (char)uVar10 & 0x1f);
          uVar10 = uVar10 + 8;
        }
        bVar7 = ~(byte)(0xff >> ((byte)iVar6 & 0x1f)) & (byte)((ushort)local_10 >> 8);
        *pbVar5 = *pbVar5 | bVar7 >> bVar8;
        if ((int)(uint)bVar4 < iVar6) {
          pbVar5[1] = pbVar5[1] | bVar7 << (bVar4 & 0x1f);
        }
        local_10 = (uint)(ushort)((ushort)local_10 << ((byte)iVar6 & 0x1f));
        uVar10 = uVar10 - iVar6;
      }
      if (param_3 != '\0') {
        uVar10 = 0;
        local_10 = 0;
      }
      local_c = local_c + iVar1;
      local_4 = local_4 + -1;
    } while (0 < local_4);
  }
  return;
}


/* FUN_006a1c60 @ 006a1c60  kind=gamemisc  attributed-by=none  size=228 */

int FUN_006a1c60(char param_1)

{
  undefined2 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int unaff_EBX;
  uint uVar6;
  int unaff_EDI;
  int local_8;
  int local_4;
  
  uVar4 = *(undefined4 *)(unaff_EBX + 0x1c);
  uVar2 = FUN_00690cd0();
  if (local_8 == 0) {
    *(uint *)(unaff_EDI + 0x18) = uVar2;
    if (param_1 == '\0') {
      local_4 = uVar2 * 2;
    }
    else {
      uVar3 = FUN_00693a60(uVar4,4,0,uVar2,0,&local_8);
      *(undefined4 *)(unaff_EDI + 0x1c) = uVar3;
      if (local_8 != 0) {
        return local_8;
      }
      local_4 = uVar2 * 4;
    }
    uVar4 = FUN_00693a60(uVar4,2,0,uVar2,0,&local_8);
    *(undefined4 *)(unaff_EDI + 0x20) = uVar4;
    if ((local_8 == 0) && (local_8 = FUN_00691f30(), local_8 == 0)) {
      uVar6 = 0;
      if (uVar2 != 0) {
        do {
          uVar1 = FUN_00690a40();
          *(undefined2 *)(*(int *)(unaff_EDI + 0x20) + uVar6 * 2) = uVar1;
          if (param_1 != '\0') {
            uVar5 = FUN_00690a40();
            *(uint *)(*(int *)(unaff_EDI + 0x1c) + uVar6 * 4) =
                 (uVar5 & 0xffff) + *(int *)(unaff_EDI + 8);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar2);
      }
      FUN_00691fe0();
    }
  }
  return local_8;
}


/* FUN_006a1d50 @ 006a1d50  kind=gamemisc  attributed-by=none  size=295 */

int FUN_006a1d50(void)

{
  ushort uVar1;
  int in_EAX;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  ushort *in_ECX;
  uint uVar5;
  uint uVar6;
  int local_4;
  
  uVar1 = in_ECX[2];
  uVar2 = *(undefined4 *)(in_EAX + 0x1c);
  switch(uVar1) {
  case 1:
  case 3:
    if (*in_ECX <= in_ECX[1]) {
      iVar4 = (uint)in_ECX[1] - (uint)*in_ECX;
      *(int *)(in_ECX + 0xc) = iVar4 + 1;
      uVar5 = iVar4 + 2;
      uVar2 = FUN_00693a60(uVar2,4,0,uVar5,0,&local_4);
      *(undefined4 *)(in_ECX + 0xe) = uVar2;
      if (local_4 != 0) {
        return local_4;
      }
      iVar4 = FUN_00691f30();
      if (iVar4 != 0) {
        return iVar4;
      }
      uVar6 = 0;
      local_4 = 0;
      if (uVar5 != 0) {
        do {
          if (uVar1 == 1) {
            uVar3 = FUN_00690aa0();
          }
          else {
            uVar3 = FUN_00690a40();
            uVar3 = uVar3 & 0xffff;
          }
          *(uint *)(*(int *)(in_ECX + 0xe) + uVar6 * 4) = *(int *)(in_ECX + 4) + uVar3;
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar5);
      }
      FUN_00691fe0();
      return local_4;
    }
  default:
    local_4 = 3;
    break;
  case 2:
    iVar4 = FUN_006a1c20();
    return iVar4;
  case 4:
    iVar4 = FUN_006a1c60(1);
    return iVar4;
  case 5:
    local_4 = FUN_006a1c20();
    if (local_4 == 0) {
      iVar4 = FUN_006a1c60(0);
      return iVar4;
    }
  }
  return local_4;
}


/* FUN_006a1e90 @ 006a1e90  kind=gamemisc  attributed-by=none  size=740 */

int FUN_006a1e90(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined2 *puVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  int local_8;
  undefined4 local_4;
  
  iVar2 = param_2;
  local_4 = *(undefined4 *)(param_2 + 0x1c);
  local_8 = 0;
  *(undefined4 *)(param_1 + 0x264) = 0;
  local_8 = (**(code **)(param_1 + 0x1fc))(param_1,0x45424c43,param_2,0);
  if ((local_8 == 0) ||
     (local_8 = (**(code **)(param_1 + 0x1fc))(param_1,0x626c6f63,param_2,0), local_8 == 0)) {
    iVar4 = FUN_00690930(param_2);
    local_8 = FUN_00691f30(param_2,8);
    if (local_8 == 0) {
      iVar5 = FUN_00690aa0(param_2);
      uVar6 = FUN_00690aa0(param_2);
      FUN_00691fe0(param_2);
      if ((iVar5 != 0x20000) || (0xffff < uVar6)) {
        return 3;
      }
      iVar5 = FUN_00693a60(local_4,0x30,0,uVar6,0,&local_8);
      *(int *)(param_1 + 0x268) = iVar5;
      if (local_8 == 0) {
        *(uint *)(param_1 + 0x264) = uVar6;
        local_8 = FUN_00691f30(param_2,uVar6 * 0x30);
        uVar1 = uVar6;
        if (local_8 == 0) {
          while ((((uVar1 != 0 &&
                   (local_8 = FUN_00692010(param_2,&DAT_00723b1c,iVar5), local_8 == 0)) &&
                  (local_8 = FUN_00692010(param_2,&DAT_00723ae8,iVar5 + 0x10), local_8 == 0)) &&
                 ((local_8 = FUN_00692010(param_2,&DAT_00723ae8,iVar5 + 0x1c), local_8 == 0 &&
                  (local_8 = FUN_00692010(param_2,&DAT_00723b30,iVar5), local_8 == 0))))) {
            iVar5 = iVar5 + 0x30;
            uVar1 = uVar1 - 1;
          }
          FUN_00691fe0(param_2);
          piVar11 = *(int **)(param_1 + 0x268);
          param_2 = uVar6;
          if (uVar6 != 0) {
            while( true ) {
              iVar5 = *piVar11;
              local_8 = FUN_006908c0(iVar2,piVar11[2] + iVar4);
              if ((local_8 != 0) || (local_8 = FUN_00691f30(iVar2,*piVar11 * 8), local_8 != 0))
              break;
              puVar7 = (undefined2 *)FUN_00693a60(local_4,0x28,0,*piVar11,0,&local_8);
              piVar11[1] = (int)puVar7;
              if (local_8 != 0) {
                return local_8;
              }
              local_8 = 0;
              for (; iVar5 != 0; iVar5 = iVar5 + -1) {
                uVar3 = FUN_00690a40(iVar2);
                *puVar7 = uVar3;
                uVar3 = FUN_00690a40(iVar2);
                puVar7[1] = uVar3;
                iVar8 = FUN_00690aa0(iVar2);
                *(int *)(puVar7 + 0x12) = iVar8 + piVar11[2] + iVar4;
                puVar7 = puVar7 + 0x14;
              }
              FUN_00691fe0(iVar2);
              iVar5 = *piVar11;
              iVar8 = piVar11[1];
              if (iVar5 != 0) {
                do {
                  local_8 = FUN_006908c0(iVar2,*(undefined4 *)(iVar8 + 0x24));
                  if (local_8 != 0) {
                    return local_8;
                  }
                  local_8 = FUN_00691f30(iVar2,8);
                  if (local_8 != 0) {
                    return local_8;
                  }
                  uVar3 = FUN_00690a40(iVar2);
                  *(undefined2 *)(iVar8 + 4) = uVar3;
                  uVar3 = FUN_00690a40(iVar2);
                  *(undefined2 *)(iVar8 + 6) = uVar3;
                  uVar9 = FUN_00690aa0(iVar2);
                  *(undefined4 *)(iVar8 + 8) = uVar9;
                  FUN_00691fe0(iVar2);
                  iVar10 = FUN_006a1d50();
                  if (iVar10 != 0) {
                    return iVar10;
                  }
                  iVar8 = iVar8 + 0x28;
                  iVar5 = iVar5 + -1;
                  local_8 = 0;
                } while (iVar5 != 0);
                local_8 = 0;
              }
              param_2 = param_2 - 1;
              piVar11 = piVar11 + 0xc;
              if (param_2 == 0) {
                return local_8;
              }
            }
          }
        }
      }
    }
  }
  return local_8;
}


/* FUN_006a22d0 @ 006a22d0  kind=gamemisc  attributed-by=none  size=261 */

undefined4 FUN_006a22d0(undefined4 *param_1,int *param_2)

{
  ushort *puVar1;
  int *in_ECX;
  uint uVar2;
  ushort *puVar3;
  uint unaff_EDI;
  
  if ((*(ushort *)(in_ECX + 10) <= unaff_EDI) && (unaff_EDI <= *(ushort *)((int)in_ECX + 0x2a))) {
    puVar1 = (ushort *)in_ECX[1];
    puVar3 = puVar1 + *in_ECX * 0x14;
    if (puVar1 != (ushort *)0x0) {
      for (; puVar1 < puVar3; puVar1 = puVar1 + 0x14) {
        if ((*puVar1 <= unaff_EDI) && (unaff_EDI <= puVar1[1])) {
          uVar2 = (uint)(ushort)((short)unaff_EDI - *puVar1);
          switch(puVar1[2]) {
          case 1:
          case 3:
            *param_2 = *(int *)(*(int *)(puVar1 + 0xe) + uVar2 * 4);
            *param_1 = puVar1;
            return 0;
          case 2:
            *param_2 = uVar2 * *(int *)(puVar1 + 6) + *(int *)(puVar1 + 4);
            *param_1 = puVar1;
            return 0;
          case 4:
          case 5:
            uVar2 = 0;
            if (*(uint *)(puVar1 + 0xc) != 0) {
              puVar3 = *(ushort **)(puVar1 + 0x10);
              do {
                if (*puVar3 == unaff_EDI) {
                  if (puVar1[2] != 4) {
                    *param_2 = *(int *)(puVar1 + 6) * uVar2 + *(int *)(puVar1 + 4);
                    *param_1 = puVar1;
                    return 0;
                  }
                  *param_2 = *(int *)(*(int *)(puVar1 + 0xe) + uVar2 * 4);
                  *param_1 = puVar1;
                  return 0;
                }
                uVar2 = uVar2 + 1;
                puVar3 = puVar3 + 1;
              } while (uVar2 < *(uint *)(puVar1 + 0xc));
            }
          }
          break;
        }
      }
    }
  }
  *param_1 = 0;
  *param_2 = 0;
  return 6;
}


/* FUN_006a23f0 @ 006a23f0  kind=gamemisc  attributed-by=none  size=111 */

undefined4
FUN_006a23f0(int param_1,undefined4 param_2,uint param_3,undefined4 *param_4,int *param_5,
            undefined4 *param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x268);
  if ((iVar1 != 0) && (param_3 < *(uint *)(param_1 + 0x264))) {
    iVar2 = FUN_006a22d0(param_4,param_6);
    if (iVar2 == 0) {
      *param_5 = param_3 * 0x30 + iVar1;
      return 0;
    }
  }
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 0;
  return 6;
}


/* FUN_006a2460 @ 006a2460  kind=gamemisc  attributed-by=none  size=172 */

int FUN_006a2460(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  undefined1 local_4;
  
  iVar1 = 0;
  switch(*(undefined2 *)(param_2 + 6)) {
  case 1:
  case 2:
  case 8:
    iVar1 = FUN_00692010(param_1,&DAT_00723b4c,&local_8);
    if (iVar1 == 0) {
      *(undefined1 *)param_3 = local_8;
      *(undefined1 *)((int)param_3 + 1) = local_7;
      *(undefined1 *)((int)param_3 + 2) = local_6;
      *(undefined1 *)((int)param_3 + 3) = local_5;
      *(undefined1 *)(param_3 + 1) = local_4;
      *(undefined2 *)((int)param_3 + 5) = 0;
      *(undefined1 *)((int)param_3 + 7) = 0;
      return 0;
    }
    break;
  default:
    if ((*(short *)(param_2 + 4) != 2) && (*(short *)(param_2 + 4) != 5)) {
      return 3;
    }
    *param_3 = *(undefined4 *)(param_2 + 0x10);
    param_3[1] = *(undefined4 *)(param_2 + 0x14);
    break;
  case 6:
  case 7:
  case 9:
    iVar1 = FUN_00692010();
    return iVar1;
  }
  return iVar1;
}


/* FUN_006a2530 @ 006a2530  kind=gamemisc  attributed-by=none  size=437 */

void FUN_006a2530(char *param_1)

{
  byte *pbVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  byte *pbVar5;
  byte bVar6;
  int *unaff_EBX;
  int iVar7;
  byte *pbVar8;
  char *pcVar9;
  char *pcVar10;
  byte *pbVar11;
  int iVar12;
  int local_c;
  
  iVar7 = *unaff_EBX;
  pcVar9 = (char *)unaff_EBX[3];
  iVar2 = unaff_EBX[2];
  local_c = 0;
  pcVar4 = pcVar9;
  if (iVar7 < 1) {
LAB_006a2585:
    unaff_EBX[1] = 0;
    *unaff_EBX = 0;
    unaff_EBX[2] = 0;
    *(undefined1 *)((int)unaff_EBX + 0x12) = 1;
    return;
  }
  do {
    pcVar10 = pcVar4 + iVar2;
    for (; pcVar4 < pcVar10; pcVar4 = pcVar4 + 1) {
      if (*pcVar4 != '\0') {
        if (iVar7 <= local_c) goto LAB_006a2585;
        if (0 < local_c) {
          iVar7 = iVar7 - local_c;
          memmove(pcVar9,pcVar9 + local_c * iVar2,iVar7 * iVar2);
          cVar3 = (char)local_c;
          *param_1 = *param_1 - cVar3;
          param_1[3] = param_1[3] - cVar3;
          param_1[6] = param_1[6] - cVar3;
          *unaff_EBX = *unaff_EBX - local_c;
        }
        pcVar9 = (char *)((iVar7 + -1) * iVar2 + unaff_EBX[3]);
        local_c = 0;
        if (iVar7 < 1) goto LAB_006a2616;
        pcVar4 = pcVar9 + iVar2;
        pcVar10 = pcVar9;
        goto joined_r0x006a25e9;
      }
    }
    local_c = local_c + 1;
    pcVar4 = pcVar10;
    if (iVar7 <= local_c) {
      unaff_EBX[1] = 0;
      *unaff_EBX = 0;
      unaff_EBX[2] = 0;
      *(undefined1 *)((int)unaff_EBX + 0x12) = 1;
      return;
    }
  } while( true );
joined_r0x006a25e9:
  if (pcVar9 < pcVar4) {
    if (*pcVar9 != '\0') goto LAB_006a2608;
    pcVar9 = pcVar9 + 1;
    goto joined_r0x006a25e9;
  }
  local_c = local_c + 1;
  pcVar9 = pcVar10 + -iVar2;
  pcVar4 = pcVar4 + -iVar2;
  pcVar10 = pcVar9;
  if (iVar7 <= local_c) {
LAB_006a2608:
    if (0 < local_c) {
      *param_1 = *param_1 - (char)local_c;
      iVar7 = iVar7 - local_c;
      *unaff_EBX = *unaff_EBX - local_c;
    }
LAB_006a2616:
    iVar7 = iVar2 * iVar7;
    do {
      pbVar8 = (byte *)unaff_EBX[3];
      for (pbVar5 = pbVar8; pbVar5 < pbVar8 + iVar7; pbVar5 = pbVar5 + iVar2) {
        if ((*pbVar5 & 0x80) != 0) goto LAB_006a269b;
      }
      pbVar5 = pbVar8 + iVar7;
      for (; pbVar8 < pbVar5; pbVar8 = pbVar8 + iVar2) {
        bVar6 = *pbVar8 * '\x02';
        pbVar11 = pbVar8;
        if (8 < unaff_EBX[1]) {
          iVar12 = (unaff_EBX[1] - 9U >> 3) + 1;
          do {
            pbVar1 = pbVar11 + 1;
            *pbVar11 = *pbVar1 >> 7 | bVar6;
            pbVar11 = pbVar11 + 1;
            iVar12 = iVar12 + -1;
            bVar6 = *pbVar1 * '\x02';
          } while (iVar12 != 0);
        }
        *pbVar11 = bVar6;
      }
      unaff_EBX[1] = unaff_EBX[1] + -1;
      param_1[2] = param_1[2] + '\x01';
      param_1[5] = param_1[5] + '\x01';
      param_1[1] = param_1[1] + -1;
    } while (0 < unaff_EBX[1]);
LAB_006a269b:
    iVar12 = unaff_EBX[1];
    do {
      iVar12 = iVar12 + -1;
      pbVar5 = (byte *)((iVar12 >> 3) + unaff_EBX[3]);
      pbVar8 = pbVar5 + iVar7;
      for (; pbVar5 < pbVar8; pbVar5 = pbVar5 + iVar2) {
        if ((*pbVar5 & (byte)(0x80 >> ((byte)iVar12 & 7))) != 0) {
          return;
        }
      }
      unaff_EBX[1] = iVar12;
      param_1[1] = param_1[1] + -1;
      iVar12 = unaff_EBX[1];
    } while (0 < iVar12);
    return;
  }
  goto joined_r0x006a25e9;
}


/* FUN_006a26f0 @ 006a26f0  kind=gamemisc  attributed-by=none  size=282 */

int FUN_006a26f0(int *param_1,int param_2,int param_3,undefined2 param_4,byte *param_5,int param_6)

{
  uint uVar1;
  int unaff_EBX;
  uint uVar2;
  int iVar3;
  
  if ((((param_2 < 0) || (uVar1 = (uint)param_5[1], param_1[1] < (int)(uVar1 + param_2))) ||
      (param_3 < 0)) || (uVar2 = (uint)*param_5, *param_1 < (int)(uVar2 + param_3))) {
    iVar3 = 6;
  }
  else {
    param_2 = 0;
    switch(param_4) {
    case 1:
    case 6:
      if (unaff_EBX == 1) {
        iVar3 = ((int)(uVar1 + 7) >> 3) * uVar2;
        param_2 = 1;
      }
      else if (unaff_EBX == 2) {
        iVar3 = ((int)(uVar1 + 3) >> 2) * uVar2;
        param_2 = 1;
      }
      else if (unaff_EBX == 4) {
        iVar3 = ((int)(uVar1 + 1) >> 1) * uVar2;
        param_2 = 1;
      }
      else {
        iVar3 = uVar1 * uVar2;
        param_2 = 1;
      }
      break;
    case 2:
    case 5:
    case 7:
      iVar3 = (int)(uVar1 * unaff_EBX * uVar2 + 7) >> 3;
      break;
    default:
      return 3;
    }
    iVar3 = FUN_00691f30(param_6,iVar3);
    if (iVar3 == 0) {
      FUN_006a1ab0(*(undefined4 *)(param_6 + 0x20),uVar1 * unaff_EBX,param_2,param_3);
      FUN_00691fe0(param_6);
      return 0;
    }
  }
  return iVar3;
}


/* FUN_006a2820 @ 006a2820  kind=gamemisc  attributed-by=none  size=691 */

int FUN_006a2820(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7
                ,int param_8,byte *param_9,int param_10)

{
  uint *puVar1;
  undefined4 uVar2;
  byte *pbVar3;
  undefined1 uVar4;
  ushort uVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  undefined1 *puVar12;
  uint local_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_8 [8];
  
  iVar8 = param_8;
  uVar2 = *(undefined4 *)(param_8 + 0x1c);
  puVar1 = (uint *)(param_5 + 0x4c);
  param_8 = FUN_006908c0(param_8,param_3 + param_4);
  pbVar3 = param_9;
  if (param_8 != 0) {
    return param_8;
  }
  iVar7 = FUN_006a2460(iVar8,param_2,param_9);
  if (iVar7 != 0) {
    return iVar7;
  }
  param_8 = 0;
  if (param_10 != 0) goto LAB_006a2904;
  *(uint *)(param_5 + 0x50) = (uint)pbVar3[1];
  *puVar1 = (uint)*pbVar3;
  switch(*(undefined1 *)(param_1 + 0x2e)) {
  case 1:
    *(undefined1 *)(param_5 + 0x5e) = 1;
    *(int *)(param_5 + 0x54) = *(int *)(param_5 + 0x50) + 7 >> 3;
    break;
  case 2:
    *(undefined1 *)(param_5 + 0x5e) = 3;
    iVar9 = *(int *)(param_5 + 0x50) + 3 >> 2;
    goto LAB_006a28dd;
  default:
    goto switchD_006a289f_caseD_3;
  case 4:
    *(undefined1 *)(param_5 + 0x5e) = 4;
    *(int *)(param_5 + 0x54) = *(int *)(param_5 + 0x50) + 1 >> 1;
    break;
  case 8:
    iVar9 = *(int *)(param_5 + 0x50);
    *(undefined1 *)(param_5 + 0x5e) = 2;
LAB_006a28dd:
    *(int *)(param_5 + 0x54) = iVar9;
  }
  iVar9 = *puVar1 * *(int *)(param_5 + 0x54);
  if ((iVar9 != 0) && (param_8 = iVar7, param_8 = FUN_00692520(param_5,iVar9), param_8 == 0)) {
LAB_006a2904:
    switch(*(undefined2 *)(param_2 + 6)) {
    case 1:
    case 2:
    case 5:
    case 6:
    case 7:
      iVar8 = FUN_006a26f0(puVar1,param_6,param_7,*(undefined2 *)(param_2 + 6),pbVar3,iVar8);
      return iVar8;
    default:
switchD_006a289f_caseD_3:
      param_8 = 3;
      break;
    case 8:
      param_8 = FUN_00690900(iVar8,1);
      if (param_8 != 0) {
        return 0x53;
      }
    case 9:
      uVar5 = FUN_00690b80(iVar8,&param_8);
      local_18 = (uint)uVar5;
      if ((param_8 == 0) && (iVar7 = FUN_00693a60(uVar2,4,0,local_18,0,&param_8), param_8 == 0)) {
        param_8 = FUN_00691f30(iVar8,local_18 * 4);
        if (param_8 == 0) {
          if (uVar5 != 0) {
            puVar12 = (undefined1 *)(iVar7 + 3);
            uVar10 = local_18;
            do {
              uVar6 = FUN_00690a40(iVar8);
              *(undefined2 *)(puVar12 + -3) = uVar6;
              uVar4 = FUN_00690a20(iVar8);
              puVar12[-1] = uVar4;
              uVar4 = FUN_00690a20(iVar8);
              *puVar12 = uVar4;
              uVar10 = uVar10 + 0xffff;
              puVar12 = puVar12 + 4;
            } while ((short)uVar10 != 0);
          }
          FUN_00691fe0(iVar8);
          if (uVar5 != 0) {
            pcVar11 = (char *)(iVar7 + 2);
            iVar9 = param_8;
            do {
              param_8 = iVar9;
              param_8 = FUN_006a22d0(&local_c,&local_10);
              if ((param_8 != 0) ||
                 (param_8 = FUN_006a2820(param_1,local_c,param_3,local_10,param_5,*pcVar11 + param_6
                                         ,pcVar11[1] + param_7,iVar8,local_8,param_10 + 1),
                 param_8 != 0)) break;
              local_18 = local_18 + 0xffff;
              pcVar11 = pcVar11 + 4;
              iVar9 = 0;
            } while ((short)local_18 != 0);
          }
        }
        FUN_00691290(uVar2,iVar7);
        return param_8;
      }
    }
  }
  return param_8;
}


/* FUN_006a2b20 @ 006a2b20  kind=gamemisc  attributed-by=none  size=258 */

int FUN_006a2b20(int param_1,undefined4 param_2,undefined4 param_3,byte param_4,undefined4 param_5,
                undefined4 param_6,byte *param_7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  iVar1 = FUN_006a23f0(param_1,param_3,param_2,&local_8,&local_4,&local_c);
  if ((iVar1 == 0) &&
     ((iVar1 = (**(code **)(param_1 + 0x1fc))(param_1,0x45424454,param_5,0), iVar1 == 0 ||
      (iVar1 = (**(code **)(param_1 + 0x1fc))(param_1,0x62646174,param_5,0), iVar1 == 0)))) {
    uVar2 = FUN_00690930(param_5);
    iVar1 = FUN_006a2820(local_4,local_8,uVar2,local_c,*(undefined4 *)(param_1 + 0x54),0,0,param_5,
                         param_7,0);
    if (iVar1 == 0) {
      if ((*(byte *)(local_4 + 0x2f) & 1) != 0) {
        iVar3 = (int)*(char *)(local_4 + 0x10) - (int)*(char *)(local_4 + 0x11);
        param_7[5] = -(param_7[1] >> 1);
        param_7[6] = (byte)((int)(iVar3 - (uint)*param_7) / 2);
        iVar3 = iVar3 * 0xc;
        param_7[7] = ((char)(iVar3 / 10) + (char)(iVar3 >> 0x1f)) -
                     (char)((longlong)iVar3 * 0x66666667 >> 0x3f);
      }
      if ((param_4 & 0x40) != 0) {
        FUN_006a2530(param_7);
      }
    }
  }
  return iVar1;
}


/* FUN_006a2c30 @ 006a2c30  kind=gamemisc  attributed-by=none  size=533 */

int FUN_006a2c30(int param_1,int param_2)

{
  int *piVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  int local_18;
  undefined4 local_14;
  undefined4 *local_10;
  int local_c;
  uint local_8;
  uint local_4;
  
  uVar11 = *(undefined4 *)(param_2 + 0x1c);
  local_10 = (undefined4 *)0x0;
  local_14 = uVar11;
  uVar3 = FUN_00690b80(param_2,&local_18);
  uVar3 = uVar3 & 0xffff;
  if (local_18 != 0) {
    return local_18;
  }
  if (*(ushort *)(param_1 + 0x108) < uVar3) {
    return 3;
  }
  local_8 = uVar3;
  iVar4 = FUN_00693a60(uVar11,2,0,uVar3,0,&local_18);
  local_c = iVar4;
  if ((local_18 == 0) && (local_18 = FUN_00691f30(param_2,uVar3 * 2), local_18 == 0)) {
    iVar9 = 0;
    if (uVar3 != 0) {
      do {
        uVar2 = FUN_00690a40(param_2);
        *(undefined2 *)(iVar4 + iVar9 * 2) = uVar2;
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)uVar3);
    }
    FUN_00691fe0(param_2);
    uVar8 = 0;
    iVar9 = 0;
    if (uVar3 != 0) {
      do {
        uVar5 = (uint)*(ushort *)(iVar4 + iVar9 * 2);
        if ((0x101 < uVar5) && (uVar5 = uVar5 - 0x101, (int)uVar8 < (int)uVar5)) {
          uVar8 = uVar5 & 0xffff;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)uVar3);
    }
    local_4 = uVar8;
    local_10 = (undefined4 *)FUN_00693a60(local_14,4,0,uVar8,0,&local_18);
    uVar11 = local_14;
    if (local_18 == 0) {
      uVar7 = (ushort)uVar8;
      if (uVar7 != 0) {
        uVar6 = 0;
        do {
          uVar8 = FUN_00690b20(param_2,&local_18);
          uVar8 = uVar8 & 0xff;
          puVar10 = local_10;
          uVar3 = local_4;
          if (local_18 != 0) goto LAB_006a2e00;
          iVar4 = FUN_00693a60(local_14,1,0,uVar8 + 1,0,&local_18);
          piVar1 = local_10 + uVar6;
          *piVar1 = iVar4;
          puVar10 = local_10;
          uVar3 = local_4;
          if ((local_18 != 0) ||
             (local_18 = FUN_00691ec0(param_2,iVar4,uVar8), puVar10 = local_10, uVar3 = local_4,
             local_18 != 0)) goto LAB_006a2e00;
          uVar6 = uVar6 + 1;
          *(undefined1 *)(uVar8 + *piVar1) = 0;
          uVar3 = local_8;
        } while (uVar6 < uVar7);
      }
      *(short *)(param_1 + 0x278) = (short)uVar3;
      *(ushort *)(param_1 + 0x27a) = uVar7;
      *(int *)(param_1 + 0x27c) = local_c;
      *(undefined4 **)(param_1 + 0x280) = local_10;
      return 0;
    }
  }
LAB_006a2e24:
  FUN_00691290(uVar11,local_10);
  FUN_00691290(uVar11,iVar4);
  return local_18;
LAB_006a2e00:
  do {
    FUN_00691290(local_14,*puVar10);
    *puVar10 = 0;
    uVar3 = uVar3 - 1;
    iVar4 = local_c;
    puVar10 = puVar10 + 1;
    uVar11 = local_14;
  } while (uVar3 != 0);
  goto LAB_006a2e24;
}


/* FUN_006a2e50 @ 006a2e50  kind=gamemisc  attributed-by=none  size=194 */

int FUN_006a2e50(int param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_EBX;
  uint uVar6;
  int local_4;
  
  uVar1 = *(undefined4 *)(unaff_EBX + 0x1c);
  uVar2 = FUN_00690b80();
  uVar6 = (uint)uVar2;
  if (local_4 == 0) {
    if ((uVar6 <= *(ushort *)(param_1 + 0x108)) && (uVar6 < 0x103)) {
      iVar3 = FUN_00693a60(uVar1,1,0,uVar6,0,&local_4);
      if (local_4 == 0) {
        local_4 = FUN_00691ec0();
        if (local_4 == 0) {
          iVar4 = 0;
          if (uVar6 != 0) {
            do {
              iVar5 = *(char *)(iVar4 + iVar3) + iVar4;
              if ((iVar5 < 0) || ((int)uVar6 < iVar5)) {
                local_4 = 3;
                goto LAB_006a2ef5;
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < (int)uVar6);
          }
          *(int *)(param_1 + 0x27c) = iVar3;
          *(ushort *)(param_1 + 0x278) = uVar2;
          return 0;
        }
      }
LAB_006a2ef5:
      FUN_00691290(uVar1,iVar3);
      return local_4;
    }
    local_4 = 3;
  }
  return local_4;
}


/* FUN_006a2f20 @ 006a2f20  kind=gamemisc  attributed-by=none  size=120 */

int FUN_006a2f20(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  
  uVar1 = *(undefined4 *)(unaff_ESI + 0x68);
  iVar3 = (**(code **)(unaff_ESI + 0x1fc))();
  if (iVar3 == 0) {
    iVar2 = *(int *)(unaff_ESI + 0x1d4);
    iVar3 = FUN_00690900(uVar1,0x20);
    if (iVar3 == 0) {
      if (iVar2 == 0x20000) {
        iVar3 = FUN_006a2c30();
        *(undefined1 *)(unaff_ESI + 0x274) = 1;
        return iVar3;
      }
      if (iVar2 == 0x28000) {
        iVar3 = FUN_006a2e50();
        *(undefined1 *)(unaff_ESI + 0x274) = 1;
        return iVar3;
      }
      iVar3 = 3;
      *(undefined1 *)(unaff_ESI + 0x274) = 1;
    }
  }
  return iVar3;
}


/* FUN_006a30a0 @ 006a30a0  kind=gamemisc  attributed-by=none  size=289 */

undefined4 FUN_006a30a0(int param_1,uint param_2,undefined4 *param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (param_2 < *(ushort *)(param_1 + 0x108)) {
    iVar2 = *(int *)(param_1 + 0x218);
    if (iVar2 == 0) {
      return 7;
    }
    uVar3 = (**(code **)(iVar2 + 0x10))(0);
    *param_3 = uVar3;
    iVar4 = *(int *)(param_1 + 0x1d4);
    if (iVar4 == 0x10000) {
      if (param_2 < 0x102) {
        uVar3 = (**(code **)(iVar2 + 0x10))(param_2);
        *param_3 = uVar3;
        return 0;
      }
    }
    else if (iVar4 == 0x20000) {
      if ((*(char *)(param_1 + 0x274) == '\0') && (iVar4 = FUN_006a2f20(), iVar4 != 0)) {
        return 0;
      }
      if (param_2 < *(ushort *)(param_1 + 0x278)) {
        uVar1 = *(ushort *)(*(int *)(param_1 + 0x27c) + param_2 * 2);
        if (0x101 < uVar1) {
          *param_3 = *(undefined4 *)(*(int *)(param_1 + 0x280) + -0x408 + (uint)uVar1 * 4);
          return 0;
        }
        uVar3 = (**(code **)(iVar2 + 0x10))((uint)uVar1);
        *param_3 = uVar3;
        return 0;
      }
    }
    else if (iVar4 == 0x28000) {
      if ((*(char *)(param_1 + 0x274) == '\0') && (iVar4 = FUN_006a2f20(), iVar4 != 0)) {
        return 0;
      }
      if (param_2 < *(ushort *)(param_1 + 0x278)) {
        uVar3 = (**(code **)(iVar2 + 0x10))
                          (param_2 + (int)*(char *)(*(int *)(param_1 + 0x27c) + param_2));
        *param_3 = uVar3;
      }
    }
    return 0;
  }
  return 0x10;
}


/* FUN_006a31d0 @ 006a31d0  kind=gamemisc  attributed-by=none  size=57 */

void FUN_006a31d0(void)

{
  int in_EAX;
  
  if (*(char *)(in_EAX + 0x32c) != '\0') {
    if (*(int *)(in_EAX + 0x318) != 0) {
      FUN_00691ee0(*(undefined4 *)(in_EAX + 0x68),(int *)(in_EAX + 0x318));
    }
    *(undefined4 *)(in_EAX + 0x31c) = 0;
    *(undefined4 *)(in_EAX + 800) = 0;
    *(undefined4 *)(in_EAX + 0x324) = 0;
  }
  return;
}


/* FUN_006a3210 @ 006a3210  kind=gamemisc  attributed-by=none  size=446 */

undefined4 FUN_006a3210(undefined4 param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint local_10;
  
  piVar2 = (int *)(in_ECX + 0x318);
  *piVar2 = 0;
  *(undefined4 *)(in_ECX + 0x31c) = 0;
  *(undefined4 *)(in_ECX + 800) = 0;
  *(undefined4 *)(in_ECX + 0x324) = 0;
  *(undefined4 *)(in_ECX + 0x328) = 0;
  *(undefined4 *)(in_ECX + 0x32c) = 0;
  iVar4 = FUN_0069c050();
  if (((iVar4 != 0) || (local_10 < 8)) ||
     (iVar4 = FUN_00693a30(param_1,local_10,piVar2), iVar4 != 0)) {
    return 8;
  }
  puVar3 = (undefined1 *)*piVar2;
  *(undefined1 **)(in_ECX + 0x31c) = puVar3 + local_10;
  uVar9 = (uint)CONCAT11(puVar3[2],puVar3[3]);
  uVar6 = CONCAT31(CONCAT21(CONCAT11(puVar3[4],puVar3[5]),puVar3[6]),puVar3[7]);
  if (((CONCAT11(*puVar3,puVar3[1]) == 1) && (7 < uVar6)) &&
     ((uVar9 <= uVar6 - 8 >> 2 && (uVar6 + 1 <= local_10)))) {
    iVar7 = *piVar2 + 8;
    *(uint *)(in_ECX + 800) = *piVar2 + uVar6;
    iVar5 = 0;
    iVar8 = 0;
    iVar4 = iVar7 + uVar9 * 4;
    *(uint *)(in_ECX + 0x328) = uVar9;
    *(uint *)(in_ECX + 0x324) = local_10 - uVar6;
    if (1 < uVar9) {
      local_10 = (uVar9 - 2 >> 1) + 1;
      do {
        puVar3 = (undefined1 *)(iVar7 + 7);
        iVar5 = iVar5 + (uint)CONCAT11(*(undefined1 *)(iVar7 + 2),*(undefined1 *)(iVar7 + 3)) * 10;
        puVar1 = (undefined1 *)(iVar7 + 6);
        iVar7 = iVar7 + 8;
        uVar9 = uVar9 - 2;
        local_10 = local_10 + -1;
        iVar8 = iVar8 + (uint)CONCAT11(*puVar1,*puVar3) * 10;
      } while (local_10 != 0);
    }
    if (uVar9 != 0) {
      iVar4 = iVar4 + (uint)CONCAT11(*(undefined1 *)(iVar7 + 2),*(undefined1 *)(iVar7 + 3)) * 10;
    }
    if ((uint)(iVar8 + iVar5 + iVar4) <= *piVar2 + uVar6) {
      *(undefined1 *)(in_ECX + 0x32c) = 1;
      return 0;
    }
  }
  FUN_00691ee0(param_1,piVar2);
  *piVar2 = 0;
  *(undefined4 *)(in_ECX + 0x31c) = 0;
  *(undefined4 *)(in_ECX + 800) = 0;
  *(undefined4 *)(in_ECX + 0x324) = 0;
  *(undefined4 *)(in_ECX + 0x328) = 0;
  *(undefined4 *)(in_ECX + 0x32c) = 0;
  return 8;
}


/* FUN_006a33d0 @ 006a33d0  kind=gamemisc  attributed-by=none  size=543 */

int FUN_006a33d0(uint param_1,char *param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  void *pvVar10;
  char *pcVar11;
  int iVar12;
  uint _MaxCount;
  int iVar13;
  uint uVar14;
  byte *pbVar15;
  int local_c;
  int local_8;
  
  iVar7 = param_1;
  iVar9 = *(int *)(param_1 + 0x58);
  *param_3 = 0;
  if ((*(char *)(param_1 + 0x32c) != '\0') ||
     (local_c = FUN_006a3210(*(undefined4 *)(param_1 + 0x68)), local_c == 0)) {
    iVar12 = *(int *)(param_1 + 0x318);
    param_1 = *(int *)(param_1 + 0x328);
    local_8 = iVar12 + 8 + param_1 * 4;
    local_c = 6;
    if ((iVar9 != 0) && (param_2 != (char *)0x0)) {
      pcVar11 = param_2;
      do {
        cVar5 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar5 != '\0');
      if ((pcVar11 != param_2 + 1) && (param_1 != 0)) {
        iVar13 = iVar12 + 7;
        iVar12 = iVar12 + 6;
        while( true ) {
          puVar1 = (undefined1 *)(iVar12 + 2);
          puVar2 = (undefined1 *)(iVar13 + 4);
          puVar3 = (undefined1 *)(iVar13 + 2);
          puVar4 = (undefined1 *)(iVar12 + 4);
          iVar12 = iVar12 + 4;
          iVar13 = iVar13 + 4;
          uVar8 = (uint)CONCAT11(*puVar4,*puVar2);
          if (CONCAT11(*puVar1,*puVar3) == *(short *)(iVar9 + 0xe)) break;
          param_1 = param_1 + -1;
          local_8 = local_8 + uVar8 * 10;
          if (param_1 == 0) {
            return 6;
          }
        }
        if (uVar8 != 0) {
          pbVar15 = (byte *)(local_8 + 5);
          param_1 = uVar8;
          do {
            bVar6 = *pbVar15;
            if ((bVar6 & 0x10) == 0) goto switchD_006a355e_default;
            uVar8 = CONCAT31(CONCAT21(CONCAT11(pbVar15[-5],pbVar15[-4]),pbVar15[-3]),pbVar15[-2]);
            uVar14 = CONCAT31(CONCAT21(CONCAT11(pbVar15[1],pbVar15[2]),pbVar15[3]),pbVar15[4]);
            if (((*(uint *)(iVar7 + 0x324) <= uVar8) ||
                (_MaxCount = *(uint *)(iVar7 + 0x324) - uVar8,
                _MaxCount <= (uint)((int)pcVar11 - (int)(param_2 + 1)))) ||
               (iVar9 = strncmp(param_2,(char *)(*(int *)(iVar7 + 800) + uVar8),_MaxCount),
               iVar9 != 0)) goto switchD_006a355e_default;
            switch(bVar6 & 0xf) {
            case 0:
            case 1:
              if ((uVar14 < *(uint *)(iVar7 + 0x324)) &&
                 (pvVar10 = memchr((void *)(*(int *)(iVar7 + 800) + uVar14),0,
                                   *(uint *)(iVar7 + 0x324)), pvVar10 != (void *)0x0)) {
                *param_3 = 1;
                param_3[1] = *(int *)(iVar7 + 800) + uVar14;
                return 0;
              }
            default:
switchD_006a355e_default:
              pbVar15 = pbVar15 + 10;
              param_1 = param_1 - 1;
              if (param_1 == 0) {
                return 6;
              }
              break;
            case 2:
              *param_3 = 2;
              goto LAB_006a35df;
            case 3:
              *param_3 = 3;
LAB_006a35df:
              param_3[1] = uVar14;
              return 0;
            }
          } while( true );
        }
      }
    }
  }
  return local_c;
}


/* FUN_006a37c0 @ 006a37c0  kind=gamemisc  attributed-by=none  size=125 */

uint FUN_006a37c0(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  pbVar3 = param_2;
  pbVar2 = param_1;
  uVar7 = *(uint *)(param_1 + 0x10);
  if ((int)uVar7 < 0) {
    return 0;
  }
  uVar8 = 0xffffffff;
  if (uVar7 != 0xffffffff) {
    uVar8 = uVar7;
  }
  uVar7 = 0;
  if (uVar8 != 0) {
    do {
      iVar4 = FUN_006a30a0(pbVar2,uVar7,&param_1);
      pbVar5 = pbVar3;
      pbVar6 = param_1;
      if (iVar4 == 0) {
        do {
          bVar1 = *pbVar5;
          bVar9 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_006a3821:
            iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_006a3826;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar9 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_006a3821;
          pbVar5 = pbVar5 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_006a3826:
        if (iVar4 == 0) {
          return uVar7;
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar8);
  }
  return 0;
}


/* FUN_006a3840 @ 006a3840  kind=gamemisc  attributed-by=none  size=106 */

int FUN_006a3840(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int local_10;
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  
  iVar1 = FUN_006a33d0(param_1,"CHARSET_REGISTRY",&local_8);
  if (iVar1 == 0) {
    iVar1 = FUN_006a33d0(param_1,"CHARSET_ENCODING",&local_10);
    if (iVar1 == 0) {
      if ((local_8 == 1) && (local_10 == 1)) {
        *param_2 = local_c;
        *param_3 = local_4;
        return 0;
      }
      iVar1 = 6;
    }
  }
  return iVar1;
}


/* FUN_006a3910 @ 006a3910  kind=gamemisc  attributed-by=none  size=85 */

void FUN_006a3910(int param_1)

{
  int iVar1;
  int *unaff_EDI;
  
  if (param_1 == 0) {
    *unaff_EDI = 6;
    unaff_EDI[5] = 0x20;
    unaff_EDI[6] = 2;
  }
  else {
    *unaff_EDI = 0xc;
    unaff_EDI[5] = 0x100;
    unaff_EDI[6] = 0x32;
  }
  iVar1 = 1 << ((byte)*unaff_EDI & 0x1f);
  unaff_EDI[4] = *unaff_EDI + -6;
  unaff_EDI[1] = iVar1;
  unaff_EDI[3] = -iVar1;
  unaff_EDI[2] = iVar1 / 2;
  return;
}


/* FUN_006a3970 @ 006a3970  kind=gamemisc  attributed-by=none  size=166 */

undefined4 FUN_006a3970(void)

{
  uint *puVar1;
  int iVar2;
  int in_EAX;
  char unaff_BL;
  int unaff_ESI;
  
  if (*(int *)(in_EAX + 0x60) == 0) {
    iVar2 = *(int *)(in_EAX + 0x2c);
    *(int *)(in_EAX + 0x5c) = iVar2;
    *(int *)(in_EAX + 0x60) = iVar2;
    *(int *)(in_EAX + 0x2c) = iVar2 + 0x20;
  }
  if (*(uint *)(in_EAX + 0x28) <= *(uint *)(in_EAX + 0x2c)) {
    *(undefined4 *)(in_EAX + 0x30) = 0x62;
    return 1;
  }
  *(undefined4 *)(*(int *)(in_EAX + 0x5c) + 0xc) = 0;
  *(undefined4 *)(*(int *)(in_EAX + 0x5c) + 0x14) = 0;
  *(undefined4 *)(*(int *)(in_EAX + 0x5c) + 0x10) = 0;
  *(undefined4 *)(*(int *)(in_EAX + 0x5c) + 8) = *(undefined4 *)(in_EAX + 0x2c);
  *(undefined4 *)(*(int *)(in_EAX + 0x5c) + 4) = 0;
  *(undefined4 *)(*(int *)(in_EAX + 0x5c) + 0x1c) = 0;
  *(uint *)(*(int *)(in_EAX + 0x5c) + 0xc) = (uint)*(byte *)(in_EAX + 0xb8);
  if (unaff_ESI == 1) {
    puVar1 = (uint *)(*(int *)(in_EAX + 0x5c) + 0xc);
    *puVar1 = *puVar1 | 8;
    if (unaff_BL != '\0') {
      puVar1 = (uint *)(*(int *)(in_EAX + 0x5c) + 0xc);
      *puVar1 = *puVar1 | 0x20;
    }
  }
  else {
    if (unaff_ESI != 2) {
      *(undefined4 *)(in_EAX + 0x30) = 0x14;
      return 1;
    }
    if (unaff_BL != '\0') {
      puVar1 = (uint *)(*(int *)(in_EAX + 0x5c) + 0xc);
      *puVar1 = *puVar1 | 0x10;
    }
  }
  if (*(int *)(in_EAX + 100) == 0) {
    *(undefined4 *)(in_EAX + 100) = *(undefined4 *)(in_EAX + 0x5c);
  }
  *(int *)(in_EAX + 0x68) = unaff_ESI;
  *(undefined2 *)(in_EAX + 0x5a) = 1;
  return 0;
}


/* FUN_006a3a20 @ 006a3a20  kind=gamemisc  attributed-by=none  size=128 */

undefined4 FUN_006a3a20(char param_1)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = *(int *)(in_EAX + 0x2c) - *(int *)(*(int *)(in_EAX + 0x5c) + 8) >> 2;
  if (iVar1 < 0) {
    *(undefined4 *)(in_EAX + 0x30) = 99;
    return 1;
  }
  if (0 < iVar1) {
    *(int *)(*(int *)(in_EAX + 0x5c) + 0x10) = iVar1;
    if (param_1 != '\0') {
      iVar1 = *(int *)(in_EAX + 0x5c);
      if ((*(byte *)(iVar1 + 0xc) & 8) == 0) {
        *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) | 0x20;
      }
      else {
        *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) | 0x10;
      }
    }
    iVar1 = *(int *)(in_EAX + 0x5c);
    *(int *)(in_EAX + 0x5c) = *(int *)(in_EAX + 0x2c);
    *(int *)(in_EAX + 0x2c) = *(int *)(in_EAX + 0x2c) + 0x20;
    *(undefined4 *)(*(int *)(in_EAX + 0x5c) + 0x10) = 0;
    *(undefined4 *)(*(int *)(in_EAX + 0x5c) + 8) = *(undefined4 *)(in_EAX + 0x2c);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(in_EAX + 0x5c);
    *(short *)(in_EAX + 0x58) = *(short *)(in_EAX + 0x58) + 1;
  }
  if (*(uint *)(in_EAX + 0x28) <= *(uint *)(in_EAX + 0x2c)) {
    *(undefined4 *)(in_EAX + 0x30) = 0x62;
    return 1;
  }
  *(undefined1 *)(in_EAX + 0x5b) = 0;
  return 0;
}


/* FUN_006a3aa0 @ 006a3aa0  kind=gamemisc  attributed-by=none  size=99 */

uint FUN_006a3aa0(void)

{
  uint uVar1;
  int iVar2;
  int in_EDX;
  int iVar3;
  int unaff_ESI;
  
  uVar1 = *(uint *)(unaff_ESI + 0x34);
  iVar2 = *(int *)(unaff_ESI + 0x24) + uVar1 * -4;
  do {
    uVar1 = uVar1 - 1;
    if ((int)uVar1 < 0) goto LAB_006a3add;
  } while (in_EDX < *(int *)(iVar2 + uVar1 * 4));
  if (-1 < (int)uVar1) {
    iVar3 = in_EDX;
    if (in_EDX <= *(int *)(iVar2 + uVar1 * 4)) goto LAB_006a3b05;
    do {
      uVar1 = uVar1 - 1;
      in_EDX = *(int *)(iVar2 + 4 + uVar1 * 4);
      *(int *)(iVar2 + 4 + uVar1 * 4) = iVar3;
      iVar3 = in_EDX;
    } while (-1 < (int)uVar1);
  }
LAB_006a3add:
  *(int *)(unaff_ESI + 0x28) = *(int *)(unaff_ESI + 0x28) + -4;
  if (*(uint *)(unaff_ESI + 0x28) <= *(uint *)(unaff_ESI + 0x2c)) {
    *(undefined4 *)(unaff_ESI + 0x30) = 0x62;
    return CONCAT31((int3)(*(uint *)(unaff_ESI + 0x28) >> 8),1);
  }
  *(int *)(unaff_ESI + 0x34) = *(int *)(unaff_ESI + 0x34) + 1;
  uVar1 = *(int *)(unaff_ESI + 0x34) * 4;
  *(int *)(*(int *)(unaff_ESI + 0x24) + *(int *)(unaff_ESI + 0x34) * -4) = in_EDX;
LAB_006a3b05:
  return uVar1 & 0xffffff00;
}


/* FUN_006a3b10 @ 006a3b10  kind=gamemisc  attributed-by=none  size=171 */

undefined1 FUN_006a3b10(void)

{
  char cVar1;
  int in_EAX;
  ushort uVar2;
  int iVar3;
  
  uVar2 = *(ushort *)(in_EAX + 0x58);
  iVar3 = *(int *)(in_EAX + 0x60);
  if ((uVar2 < 2) || (iVar3 == 0)) {
    *(undefined4 *)(in_EAX + 0x60) = 0;
  }
  else if (uVar2 != 0) {
    while( true ) {
      if (uVar2 < 2) {
        *(undefined4 *)(iVar3 + 4) = 0;
      }
      else {
        *(int *)(iVar3 + 4) = *(int *)(iVar3 + 8) + *(int *)(iVar3 + 0x10) * 4;
      }
      if ((*(byte *)(iVar3 + 0xc) & 8) == 0) {
        *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + *(int *)(iVar3 + 0x10) * 4 + -4;
        *(int *)(iVar3 + 0x14) = (*(int *)(iVar3 + 0x14) - *(int *)(iVar3 + 0x10)) + 1;
      }
      cVar1 = FUN_006a3aa0();
      if ((cVar1 != '\0') || (cVar1 = FUN_006a3aa0(), cVar1 != '\0')) break;
      iVar3 = *(int *)(iVar3 + 4);
      uVar2 = uVar2 - 1;
      if (uVar2 == 0) {
        return 0;
      }
    }
    return 1;
  }
  return 0;
}


/* FUN_006a3bc0 @ 006a3bc0  kind=gamemisc  attributed-by=none  size=96 */

void FUN_006a3bc0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  param_1[8] = param_1[4];
  iVar2 = param_1[2];
  iVar1 = (*param_1 + iVar2) / 2;
  param_1[2] = iVar1;
  iVar2 = (param_1[4] + iVar2) / 2;
  param_1[4] = (iVar1 + iVar2) / 2;
  param_1[9] = param_1[5];
  param_1[6] = iVar2;
  iVar2 = (param_1[1] + param_1[3]) / 2;
  iVar1 = (param_1[5] + param_1[3]) / 2;
  param_1[3] = iVar2;
  param_1[7] = iVar1;
  param_1[5] = (iVar2 + iVar1) / 2;
  return;
}


/* FUN_006a3c20 @ 006a3c20  kind=gamemisc  attributed-by=none  size=140 */

void FUN_006a3c20(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  param_1[0xc] = param_1[6];
  iVar2 = param_1[6] + 1 + param_1[4] >> 1;
  param_1[10] = iVar2;
  iVar1 = *param_1 + 1 + param_1[2] >> 1;
  iVar3 = param_1[4] + 1 + param_1[2] >> 1;
  iVar2 = iVar2 + 1 + iVar3 >> 1;
  param_1[2] = iVar1;
  param_1[8] = iVar2;
  iVar1 = iVar1 + 1 + iVar3 >> 1;
  param_1[6] = iVar2 + 1 + iVar1 >> 1;
  param_1[4] = iVar1;
  param_1[0xd] = param_1[7];
  iVar2 = param_1[7] + 1 + param_1[5] >> 1;
  iVar1 = param_1[1] + 1 + param_1[3] >> 1;
  param_1[0xb] = iVar2;
  iVar3 = param_1[5] + 1 + param_1[3] >> 1;
  param_1[3] = iVar1;
  iVar2 = iVar2 + 1 + iVar3 >> 1;
  iVar1 = iVar1 + 1 + iVar3 >> 1;
  param_1[9] = iVar2;
  param_1[5] = iVar1;
  param_1[7] = iVar2 + 1 + iVar1 >> 1;
  return;
}


/* FUN_006a3cb0 @ 006a3cb0  kind=gamemisc  attributed-by=none  size=375 */

uint FUN_006a3cb0(int param_1,uint param_2,int param_3,int param_4)

{
  uint in_EAX;
  int iVar1;
  int iVar2;
  byte bVar3;
  int in_ECX;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *unaff_ESI;
  int iVar8;
  int local_4;
  
  iVar4 = in_ECX - param_1;
  iVar8 = param_2 - in_EAX;
  if (((iVar8 < 1) || ((int)param_2 < param_3)) || (param_4 < (int)in_EAX)) {
    return in_EAX & 0xffffff00;
  }
  if ((int)in_EAX < param_3) {
    iVar1 = FUN_0068ea60(iVar4,param_3 - in_EAX,iVar8);
    param_1 = param_1 + iVar1;
    bVar3 = (byte)*unaff_ESI;
    param_3 = param_3 >> (bVar3 & 0x1f);
    uVar6 = 0;
  }
  else {
    bVar3 = (byte)*unaff_ESI;
    param_3 = (int)in_EAX >> (bVar3 & 0x1f);
    uVar6 = unaff_ESI[1] - 1 & in_EAX;
  }
  if (param_4 < (int)param_2) {
    param_4 = param_4 >> (bVar3 & 0x1f);
    uVar5 = 0;
  }
  else {
    param_4 = (int)param_2 >> (bVar3 & 0x1f);
    uVar5 = unaff_ESI[1] - 1 & param_2;
  }
  if ((int)uVar6 < 1) {
    if (*(char *)((int)unaff_ESI + 0x5b) != '\0') {
      unaff_ESI[0xb] = unaff_ESI[0xb] + -4;
      *(undefined1 *)((int)unaff_ESI + 0x5b) = 0;
    }
  }
  else {
    if (param_3 == param_4) goto LAB_006a3e1d;
    param_1 = param_1 + (int)((unaff_ESI[1] - uVar6) * iVar4) / iVar8;
    param_3 = param_3 + 1;
  }
  *(bool *)((int)unaff_ESI + 0x5b) = uVar5 == 0;
  if (*(char *)((int)unaff_ESI + 0x5a) != '\0') {
    *(int *)(unaff_ESI[0x17] + 0x14) = param_3;
    *(undefined1 *)((int)unaff_ESI + 0x5a) = 0;
  }
  iVar1 = (param_4 - param_3) + 1;
  uVar6 = unaff_ESI[0xb] + iVar1 * 4;
  if ((uint)unaff_ESI[10] <= uVar6) {
    unaff_ESI[0xc] = 0x62;
    return CONCAT31((int3)(uVar6 >> 8),1);
  }
  if (iVar4 < 1) {
    iVar2 = FUN_0068ea60(unaff_ESI[1],-iVar4,iVar8);
    iVar2 = -iVar2;
    iVar4 = -(unaff_ESI[1] * iVar4);
    local_4 = -1;
  }
  else {
    iVar2 = FUN_0068ea60(unaff_ESI[1],iVar4,iVar8);
    iVar4 = unaff_ESI[1] * iVar4;
    local_4 = 1;
  }
  piVar7 = (int *)unaff_ESI[0xb];
  param_2 = -iVar8;
  for (; 0 < iVar1; iVar1 = iVar1 + -1) {
    *piVar7 = param_1;
    param_1 = param_1 + iVar2;
    piVar7 = piVar7 + 1;
    param_2 = param_2 + iVar4 % iVar8;
    if (-1 < (int)param_2) {
      param_2 = param_2 - iVar8;
      param_1 = param_1 + local_4;
    }
  }
  unaff_ESI[0xb] = piVar7;
LAB_006a3e1d:
  return param_2 & 0xffffff00;
}


/* FUN_006a3e80 @ 006a3e80  kind=gamemisc  attributed-by=none  size=356 */

uint FUN_006a3e80(code *param_1,uint param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  int in_EAX;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *unaff_EDI;
  uint local_8;
  
  piVar5 = (int *)unaff_EDI[0xb];
  piVar1 = (int *)unaff_EDI[0xe];
  iVar3 = piVar1[in_EAX * 2 + 1];
  if (((int)param_2 <= piVar1[1]) && (iVar3 <= (int)param_3)) {
    uVar4 = -unaff_EDI[1] & piVar1[1];
    if ((int)param_3 < (int)uVar4) {
      uVar4 = param_3;
    }
    local_8 = param_2;
    if (((int)param_2 <= iVar3) &&
       (local_8 = unaff_EDI[1] + -1 + iVar3 & -unaff_EDI[1], param_2 = local_8,
       (ushort)((ushort)iVar3 & *(short *)(unaff_EDI + 1) - 1U) == 0)) {
      if (*(char *)((int)unaff_EDI + 0x5b) != '\0') {
        piVar5 = piVar5 + -1;
        *(undefined1 *)((int)unaff_EDI + 0x5b) = 0;
      }
      *piVar5 = piVar1[in_EAX * 2];
      piVar5 = piVar5 + 1;
      param_2 = local_8 + unaff_EDI[1];
    }
    if (*(char *)((int)unaff_EDI + 0x5a) != '\0') {
      *(int *)(unaff_EDI[0x17] + 0x14) = (int)local_8 >> ((byte)*unaff_EDI & 0x1f);
      *(undefined1 *)((int)unaff_EDI + 0x5a) = 0;
    }
    if ((int)param_2 <= (int)uVar4) {
      piVar6 = piVar1;
      if ((int *)unaff_EDI[10] <= piVar5 + ((int)(uVar4 - param_2) >> ((byte)*unaff_EDI & 0x1f)) + 1
         ) {
        unaff_EDI[0xb] = piVar5;
        unaff_EDI[0xc] = 0x62;
        return CONCAT31((int3)((uint)(in_EAX * 8) >> 8),1);
      }
      do {
        if ((int)uVar4 < (int)param_2) break;
        *(undefined1 *)((int)unaff_EDI + 0x5b) = 0;
        uVar2 = piVar6[1];
        if ((int)param_2 < (int)uVar2) {
          iVar3 = uVar2 - piVar6[in_EAX * 2 + 1];
          if (iVar3 < (int)unaff_EDI[5]) {
            piVar7 = piVar6 + in_EAX * -2;
            *piVar5 = (int)((*piVar6 - piVar6[in_EAX * 2]) * (param_2 - piVar6[in_EAX * 2 + 1])) /
                      iVar3 + piVar6[in_EAX * 2];
            param_2 = param_2 + unaff_EDI[1];
            piVar5 = piVar5 + 1;
          }
          else {
            (*param_1)(piVar6);
            piVar7 = piVar6 + in_EAX * 2;
          }
        }
        else {
          if (uVar2 == param_2) {
            *(undefined1 *)((int)unaff_EDI + 0x5b) = 1;
            *piVar5 = *piVar6;
            piVar5 = piVar5 + 1;
            param_2 = param_2 + unaff_EDI[1];
          }
          piVar7 = piVar6 + in_EAX * -2;
        }
        piVar6 = piVar7;
      } while (piVar1 <= piVar7);
    }
  }
  unaff_EDI[0xe] = unaff_EDI[0xe] + in_EAX * -8;
  unaff_EDI[0xb] = piVar5;
  return in_EAX * 8 & 0xffffff00;
}


/* FUN_006a3ff0 @ 006a3ff0  kind=gamemisc  attributed-by=none  size=102 */

void FUN_006a3ff0(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int in_EAX;
  int in_ECX;
  int in_EDX;
  
  iVar2 = *(int *)(param_1 + 0x38);
  *(int *)(iVar2 + 4) = -*(int *)(iVar2 + 4);
  *(int *)(iVar2 + 0xc) = -*(int *)(iVar2 + 0xc);
  *(int *)(iVar2 + 0x14) = -*(int *)(iVar2 + 0x14);
  if (2 < in_EAX) {
    *(int *)(iVar2 + 0x1c) = -*(int *)(iVar2 + 0x1c);
  }
  cVar1 = *(char *)(param_1 + 0x5a);
  FUN_006a3e80(param_2,-in_ECX,-in_EDX);
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x5a) == '\0')) {
    *(int *)(*(int *)(param_1 + 0x5c) + 0x14) = -*(int *)(*(int *)(param_1 + 0x5c) + 0x14);
  }
  *(int *)(iVar2 + 4) = -*(int *)(iVar2 + 4);
  return;
}


/* FUN_006a4060 @ 006a4060  kind=gamemisc  attributed-by=none  size=306 */

undefined4 FUN_006a4060(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 0x68);
  if (iVar1 == 0) {
    if ((param_2 <= *(int *)(unaff_EDI + 0x4c)) && (*(int *)(unaff_EDI + 0x4c) <= param_2))
    goto LAB_006a412f;
  }
  else {
    if (iVar1 == 1) {
      uVar2 = *(uint *)(unaff_EDI + 0x4c);
      if ((int)uVar2 <= param_2) goto LAB_006a412f;
      cVar3 = FUN_006a3a20(*(int *)(unaff_EDI + 8) <=
                           (int)(uVar2 - (-*(int *)(unaff_EDI + 4) & uVar2)));
    }
    else {
      if ((iVar1 != 2) || (iVar1 = *(int *)(unaff_EDI + 0x4c), param_2 <= iVar1)) goto LAB_006a412f;
      cVar3 = FUN_006a3a20(*(int *)(unaff_EDI + 8) <=
                           (*(int *)(unaff_EDI + 4) + -1 + iVar1 & -*(int *)(unaff_EDI + 4)) - iVar1
                          );
    }
    if (cVar3 != '\0') {
      return 1;
    }
  }
  cVar3 = FUN_006a3970();
  if (cVar3 != '\0') {
    return 1;
  }
LAB_006a412f:
  if (*(int *)(unaff_EDI + 0x68) == 1) {
    cVar3 = FUN_006a3cb0(*(undefined4 *)(unaff_EDI + 0x48),param_2,*(undefined4 *)(unaff_EDI + 0x50)
                         ,*(undefined4 *)(unaff_EDI + 0x54));
    if (cVar3 != '\0') {
      return 1;
    }
  }
  else if ((*(int *)(unaff_EDI + 0x68) == 2) && (cVar3 = FUN_006a3e30(), cVar3 != '\0')) {
    return 1;
  }
  *(int *)(unaff_EDI + 0x4c) = param_2;
  *(undefined4 *)(unaff_EDI + 0x48) = param_1;
  return 0;
}


/* FUN_006a41a0 @ 006a41a0  kind=gamemisc  attributed-by=none  size=338 */

undefined4 FUN_006a41a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  char cVar6;
  int in_EAX;
  uint uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  
  *(int *)(in_EAX + 0x38) = in_EAX + 0xbc;
  *(undefined4 *)(in_EAX + 0xcc) = *(undefined4 *)(in_EAX + 0x48);
  *(undefined4 *)(*(int *)(in_EAX + 0x38) + 0x14) = *(undefined4 *)(in_EAX + 0x4c);
  *(undefined4 *)(*(int *)(in_EAX + 0x38) + 8) = param_1;
  *(undefined4 *)(*(int *)(in_EAX + 0x38) + 0xc) = param_2;
  **(undefined4 **)(in_EAX + 0x38) = param_3;
  *(undefined4 *)(*(int *)(in_EAX + 0x38) + 4) = param_4;
  do {
    puVar2 = *(undefined4 **)(in_EAX + 0x38);
    uVar3 = puVar2[5];
    uVar4 = puVar2[1];
    uVar5 = *puVar2;
    uVar7 = uVar4;
    uVar9 = uVar3;
    if ((int)uVar3 <= (int)uVar4) {
      uVar7 = uVar3;
      uVar9 = uVar4;
    }
    if (((int)puVar2[3] < (int)uVar7) || ((int)uVar9 < (int)puVar2[3])) {
      FUN_006a3bc0(puVar2);
      *(int *)(in_EAX + 0x38) = *(int *)(in_EAX + 0x38) + 0x10;
    }
    else if (uVar3 == uVar4) {
      *(undefined4 **)(in_EAX + 0x38) = puVar2 + -4;
    }
    else {
      iVar1 = ((int)uVar4 <= (int)uVar3) + 1;
      if (*(int *)(in_EAX + 0x68) != iVar1) {
        iVar8 = *(int *)(in_EAX + 4);
        if (iVar1 == 1) {
          iVar8 = (iVar8 + -1 + uVar3 & -iVar8) - uVar3;
          bVar10 = SBORROW4(iVar8,*(int *)(in_EAX + 8));
          iVar8 = iVar8 - *(int *)(in_EAX + 8);
        }
        else {
          iVar8 = uVar3 - (-iVar8 & uVar3);
          bVar10 = SBORROW4(iVar8,*(int *)(in_EAX + 8));
          iVar8 = iVar8 - *(int *)(in_EAX + 8);
        }
        if ((*(int *)(in_EAX + 0x68) != 0) &&
           (cVar6 = FUN_006a3a20(bVar10 == iVar8 < 0), cVar6 != '\0')) {
          return 1;
        }
        cVar6 = FUN_006a3970();
        if (cVar6 != '\0') {
          return 1;
        }
      }
      if (iVar1 == 1) {
        cVar6 = FUN_006a3e80(FUN_006a3bc0,*(undefined4 *)(in_EAX + 0x50),
                             *(undefined4 *)(in_EAX + 0x54));
      }
      else {
        cVar6 = FUN_006a3ff0();
      }
      if (cVar6 != '\0') {
        return 1;
      }
    }
    if (*(uint *)(in_EAX + 0x38) < in_EAX + 0xbcU) {
      *(uint *)(in_EAX + 0x4c) = uVar4;
      *(undefined4 *)(in_EAX + 0x48) = uVar5;
      return 0;
    }
  } while( true );
}


/* FUN_006a4300 @ 006a4300  kind=gamemisc  attributed-by=none  size=392 */

undefined4
FUN_006a4300(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  char cVar6;
  int in_EAX;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  *(int *)(in_EAX + 0x38) = in_EAX + 0xbc;
  *(undefined4 *)(in_EAX + 0xd4) = *(undefined4 *)(in_EAX + 0x48);
  *(undefined4 *)(*(int *)(in_EAX + 0x38) + 0x1c) = *(undefined4 *)(in_EAX + 0x4c);
  *(uint *)(*(int *)(in_EAX + 0x38) + 0x10) = param_1;
  *(uint *)(*(int *)(in_EAX + 0x38) + 0x14) = param_2;
  *(undefined4 *)(*(int *)(in_EAX + 0x38) + 8) = param_3;
  *(undefined4 *)(*(int *)(in_EAX + 0x38) + 0xc) = param_4;
  **(undefined4 **)(in_EAX + 0x38) = param_5;
  *(undefined4 *)(*(int *)(in_EAX + 0x38) + 4) = param_6;
  do {
    puVar1 = *(undefined4 **)(in_EAX + 0x38);
    uVar2 = puVar1[7];
    uVar3 = puVar1[1];
    uVar4 = *puVar1;
    iVar5 = puVar1[5];
    iVar8 = puVar1[3];
    param_1 = uVar3;
    param_2 = uVar2;
    if ((int)uVar2 <= (int)uVar3) {
      param_1 = uVar2;
      param_2 = uVar3;
    }
    iVar7 = iVar5;
    if (iVar5 <= iVar8) {
      iVar7 = iVar8;
      iVar8 = iVar5;
    }
    if ((iVar8 < (int)param_1) || ((int)param_2 < iVar7)) {
      FUN_006a3c20(puVar1);
      *(int *)(in_EAX + 0x38) = *(int *)(in_EAX + 0x38) + 0x18;
    }
    else if (uVar2 == uVar3) {
      *(undefined4 **)(in_EAX + 0x38) = puVar1 + -6;
    }
    else {
      iVar5 = ((int)uVar3 < (int)uVar2) + 1;
      if (*(int *)(in_EAX + 0x68) != iVar5) {
        iVar8 = *(int *)(in_EAX + 4);
        if (iVar5 == 1) {
          iVar8 = (iVar8 + -1 + uVar2 & -iVar8) - uVar2;
          bVar9 = SBORROW4(iVar8,*(int *)(in_EAX + 8));
          iVar8 = iVar8 - *(int *)(in_EAX + 8);
        }
        else {
          iVar8 = uVar2 - (-iVar8 & uVar2);
          bVar9 = SBORROW4(iVar8,*(int *)(in_EAX + 8));
          iVar8 = iVar8 - *(int *)(in_EAX + 8);
        }
        if ((*(int *)(in_EAX + 0x68) != 0) &&
           (cVar6 = FUN_006a3a20(bVar9 == iVar8 < 0), cVar6 != '\0')) {
          return 1;
        }
        cVar6 = FUN_006a3970();
        if (cVar6 != '\0') {
          return 1;
        }
      }
      if (iVar5 == 1) {
        cVar6 = FUN_006a3e80(FUN_006a3c20,*(undefined4 *)(in_EAX + 0x50),
                             *(undefined4 *)(in_EAX + 0x54));
      }
      else {
        cVar6 = FUN_006a3ff0();
      }
      if (cVar6 != '\0') {
        return 1;
      }
    }
    if (*(uint *)(in_EAX + 0x38) < in_EAX + 0xbcU) {
      *(uint *)(in_EAX + 0x4c) = uVar3;
      *(undefined4 *)(in_EAX + 0x48) = uVar4;
      return 0;
    }
  } while( true );
}


/* FUN_006a4490 @ 006a4490  kind=gamemisc  attributed-by=none  size=847 */

undefined4 FUN_006a4490(uint param_1,uint param_2,int param_3)

{
  char cVar1;
  int in_EAX;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  int *local_1c;
  int local_18;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar10 = *(int *)(in_EAX + 0x88);
  local_1c = (int *)(iVar10 + (param_2 & 0xffff) * 8);
  uVar3 = param_1 & 0xffff;
  piVar13 = (int *)(iVar10 + uVar3 * 8);
  iVar8 = *(int *)(in_EAX + 8);
  bVar2 = (byte)*(undefined4 *)(in_EAX + 0x1c);
  iVar12 = (*(int *)(iVar10 + uVar3 * 8) << (bVar2 & 0x1f)) - iVar8;
  local_c = (*(int *)(iVar10 + 4 + uVar3 * 8) << (bVar2 & 0x1f)) - iVar8;
  iVar4 = (*local_1c << (bVar2 & 0x1f)) - iVar8;
  iVar8 = (local_1c[1] << (bVar2 & 0x1f)) - iVar8;
  iVar10 = iVar4;
  local_10 = iVar12;
  if (param_3 != 0) {
    iVar10 = iVar8;
    iVar8 = iVar4;
    local_10 = local_c;
    local_c = iVar12;
  }
  pbVar6 = (byte *)(*(int *)(in_EAX + 0x8c) + (param_1 & 0xffff));
  if ((*pbVar6 & 4) != 0) {
    *(byte *)(in_EAX + 0xb8) = *pbVar6 >> 5;
  }
  if ((*pbVar6 & 3) != 2) {
    if ((*pbVar6 & 3) == 0) {
      if ((*(byte *)(*(int *)(in_EAX + 0x8c) + (param_2 & 0xffff)) & 3) == 1) {
        local_1c = local_1c + -2;
        local_10 = iVar10;
        local_c = iVar8;
      }
      else {
        local_10 = (iVar10 + local_10) / 2;
        local_c = (local_c + iVar8) / 2;
      }
      piVar13 = piVar13 + -2;
      pbVar6 = pbVar6 + -1;
    }
    *(int *)(in_EAX + 0x48) = local_10;
    *(int *)(in_EAX + 0x4c) = local_c;
    do {
      if (local_1c <= piVar13) {
        cVar1 = FUN_006a4060(local_10,local_c);
joined_r0x006a47b1:
        if (cVar1 != '\0') {
          return 1;
        }
        return 0;
      }
      pbVar7 = pbVar6 + 1;
      piVar14 = piVar13 + 2;
      if ((pbVar6[1] & 3) == 0) {
        bVar2 = (byte)*(undefined4 *)(in_EAX + 0x1c);
        iVar10 = (*piVar14 << (bVar2 & 0x1f)) - *(int *)(in_EAX + 8);
        local_8 = (piVar13[3] << (bVar2 & 0x1f)) - *(int *)(in_EAX + 8);
        local_4 = iVar10;
        if (param_3 == 0) goto LAB_006a46c0;
        while( true ) {
          iVar10 = local_8;
          local_8 = local_4;
LAB_006a46c0:
          local_4 = local_8;
          local_8 = iVar10;
          if (local_1c <= piVar14) {
            cVar1 = FUN_006a41a0(local_8,local_4,local_10,local_c);
            goto joined_r0x006a47b1;
          }
          pbVar6 = pbVar7 + 1;
          piVar13 = piVar14 + 3;
          pbVar7 = pbVar7 + 1;
          piVar14 = piVar14 + 2;
          bVar2 = (byte)*(undefined4 *)(in_EAX + 0x1c);
          iVar4 = (*piVar14 << (bVar2 & 0x1f)) - *(int *)(in_EAX + 8);
          iVar8 = (*piVar13 << (bVar2 & 0x1f)) - *(int *)(in_EAX + 8);
          iVar10 = iVar4;
          if (param_3 != 0) {
            iVar10 = iVar8;
            iVar8 = iVar4;
          }
          if ((*pbVar6 & 3) == 1) break;
          if ((*pbVar6 & 3) != 0) goto LAB_006a47bd;
          cVar1 = FUN_006a41a0(local_8,local_4,(iVar10 + local_8) / 2,(local_4 + iVar8) / 2);
          local_8 = iVar10;
          local_4 = iVar8;
          if (cVar1 != '\0') {
            return 1;
          }
        }
        cVar1 = FUN_006a41a0(local_8,local_4,iVar10,iVar8);
        piVar13 = piVar14;
        pbVar6 = pbVar7;
      }
      else if ((pbVar6[1] & 3) == 1) {
        bVar2 = (byte)*(undefined4 *)(in_EAX + 0x1c);
        iVar4 = (*piVar14 << (bVar2 & 0x1f)) - *(int *)(in_EAX + 8);
        iVar8 = (piVar13[3] << (bVar2 & 0x1f)) - *(int *)(in_EAX + 8);
        iVar10 = iVar4;
        if (param_3 != 0) {
          iVar10 = iVar8;
          iVar8 = iVar4;
        }
        cVar1 = FUN_006a4060(iVar10,iVar8);
        piVar13 = piVar14;
        pbVar6 = pbVar7;
      }
      else {
        if ((local_1c < piVar13 + 4) || ((pbVar6[2] & 3) != 2)) break;
        iVar10 = *(int *)(in_EAX + 8);
        piVar14 = piVar13 + 6;
        bVar2 = (byte)*(undefined4 *)(in_EAX + 0x1c);
        iVar9 = (piVar13[4] << (bVar2 & 0x1f)) - iVar10;
        param_2 = (piVar13[5] << (bVar2 & 0x1f)) - iVar10;
        iVar5 = (piVar13[2] << (bVar2 & 0x1f)) - iVar10;
        iVar12 = (piVar13[3] << (bVar2 & 0x1f)) - iVar10;
        local_18 = (*piVar14 << (bVar2 & 0x1f)) - iVar10;
        iVar10 = (piVar13[7] << (bVar2 & 0x1f)) - iVar10;
        iVar8 = iVar9;
        iVar4 = iVar5;
        iVar11 = iVar10;
        if (param_3 != 0) {
          iVar8 = param_2;
          iVar4 = iVar12;
          iVar12 = iVar5;
          iVar11 = local_18;
          param_2 = iVar9;
          local_18 = iVar10;
        }
        if (local_1c < piVar14) {
          cVar1 = FUN_006a4300(iVar4,iVar12,iVar8,param_2,local_10,local_c);
          goto joined_r0x006a47b1;
        }
        cVar1 = FUN_006a4300(iVar4,iVar12,iVar8,param_2,local_18,iVar11);
        piVar13 = piVar14;
        pbVar6 = pbVar6 + 3;
      }
      if (cVar1 != '\0') {
        return 1;
      }
    } while( true );
  }
LAB_006a47bd:
  *(undefined4 *)(in_EAX + 0x30) = 0x14;
  return 1;
}


/* FUN_006a47f0 @ 006a47f0  kind=gamemisc  attributed-by=none  size=283 */

bool FUN_006a47f0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int unaff_ESI;
  int iVar6;
  bool bVar7;
  
  *(int *)(unaff_ESI + 0x28) = *(int *)(unaff_ESI + 0x24) + -0x20;
  iVar5 = *(int *)(unaff_ESI + 0x2c);
  *(int *)(unaff_ESI + 0x5c) = iVar5;
  *(undefined4 *)(unaff_ESI + 0x60) = 0;
  *(undefined2 *)(unaff_ESI + 0x5a) = 0;
  *(undefined4 *)(unaff_ESI + 0x34) = 0;
  *(int *)(iVar5 + 8) = iVar5;
  iVar6 = 0;
  iVar5 = 0;
  *(undefined2 *)(unaff_ESI + 0x58) = 0;
  if (0 < *(short *)(unaff_ESI + 0x84)) {
    do {
      *(undefined4 *)(unaff_ESI + 0x68) = 0;
      *(undefined4 *)(unaff_ESI + 100) = 0;
      cVar3 = FUN_006a4490(iVar6,*(undefined2 *)(*(int *)(unaff_ESI + 0x90) + iVar5 * 2),param_1);
      if (cVar3 != '\0') {
        return true;
      }
      iVar4 = *(int *)(unaff_ESI + 4);
      uVar1 = *(uint *)(unaff_ESI + 0x4c);
      iVar6 = *(short *)(*(int *)(unaff_ESI + 0x90) + iVar5 * 2) + 1;
      if (((((uVar1 & iVar4 - 1U) == 0) && (*(int *)(unaff_ESI + 0x50) <= (int)uVar1)) &&
          ((int)uVar1 <= *(int *)(unaff_ESI + 0x54))) &&
         ((*(int *)(unaff_ESI + 100) != 0 &&
          (((*(uint *)(*(int *)(unaff_ESI + 0x5c) + 0xc) ^
            *(uint *)(*(int *)(unaff_ESI + 100) + 0xc)) & 8) == 0)))) {
        *(int *)(unaff_ESI + 0x2c) = *(int *)(unaff_ESI + 0x2c) + -4;
      }
      iVar2 = *(int *)(unaff_ESI + 0x5c);
      if ((*(byte *)(iVar2 + 0xc) & 8) == 0) {
        iVar4 = ((uVar1 - 1) + iVar4 & -iVar4) - uVar1;
        bVar7 = SBORROW4(iVar4,*(int *)(unaff_ESI + 8));
        iVar4 = iVar4 - *(int *)(unaff_ESI + 8);
      }
      else {
        iVar4 = uVar1 - (-iVar4 & uVar1);
        bVar7 = SBORROW4(iVar4,*(int *)(unaff_ESI + 8));
        iVar4 = iVar4 - *(int *)(unaff_ESI + 8);
      }
      cVar3 = FUN_006a3a20(bVar7 == iVar4 < 0);
      if (cVar3 != '\0') {
        return true;
      }
      if (*(int *)(unaff_ESI + 100) != 0) {
        *(int *)(iVar2 + 0x1c) = *(int *)(unaff_ESI + 100);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(short *)(unaff_ESI + 0x84));
  }
  cVar3 = FUN_006a3b10();
  if (cVar3 != '\0') {
    return true;
  }
  return *(uint *)(unaff_ESI + 0x28) <= *(uint *)(unaff_ESI + 0x2c);
}


/* FUN_006a4920 @ 006a4920  kind=gamemisc  attributed-by=none  size=36 */

void FUN_006a4920(void)

{
  int *piVar1;
  int *in_ECX;
  int *in_EDX;
  
  piVar1 = (int *)*in_ECX;
  while ((piVar1 != (int *)0x0 && (*piVar1 <= *in_EDX))) {
    in_ECX = piVar1 + 1;
    piVar1 = (int *)*in_ECX;
  }
  in_EDX[1] = (int)piVar1;
  *in_ECX = (int)in_EDX;
  return;
}


/* FUN_006a4950 @ 006a4950  kind=gamemisc  attributed-by=none  size=26 */

void FUN_006a4950(void)

{
  int iVar1;
  int *in_ECX;
  int in_EDX;
  
  iVar1 = *in_ECX;
  if (iVar1 != 0) {
    while (iVar1 != in_EDX) {
      in_ECX = (int *)(iVar1 + 4);
      iVar1 = *in_ECX;
      if (iVar1 == 0) {
        return;
      }
    }
    *in_ECX = *(int *)(iVar1 + 4);
  }
  return;
}


/* FUN_006a4970 @ 006a4970  kind=gamemisc  attributed-by=none  size=115 */

void FUN_006a4970(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *unaff_EDI;
  
  for (puVar1 = (undefined4 *)*unaff_EDI; puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[1]) {
    *puVar1 = *(undefined4 *)puVar1[2];
    puVar1[4] = puVar1[4] + -1;
    puVar1[2] = (undefined4 *)puVar1[2] + (uint)((*(byte *)(puVar1 + 3) & 8) != 0) * 2 + -1;
  }
  piVar4 = (int *)*unaff_EDI;
  if (piVar4 != (int *)0x0) {
    piVar2 = (int *)piVar4[1];
    piVar3 = unaff_EDI;
    while (piVar2 != (int *)0x0) {
      piVar5 = piVar4 + 1;
      if (*piVar2 < *piVar4) {
        *piVar3 = (int)piVar2;
        *piVar5 = piVar2[1];
        piVar2[1] = (int)piVar4;
        piVar4 = (int *)*unaff_EDI;
        piVar5 = unaff_EDI;
      }
      else {
        piVar4 = (int *)*piVar5;
        if (piVar4 == (int *)0x0) {
          return;
        }
      }
      piVar3 = piVar5;
      piVar2 = (int *)piVar4[1];
    }
  }
  return;
}


/* FUN_006a4eb0 @ 006a4eb0  kind=gamemisc  attributed-by=none  size=789 */

undefined4 FUN_006a4eb0(undefined4 *param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  bool bVar5;
  undefined4 *puVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  uint *local_28;
  uint *local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  uint *puStack_14;
  uint uStack_10;
  int iStack_c;
  uint uStack_8;
  uint uStack_4;
  
  FUN_006a4910();
  FUN_006a4910();
  FUN_006a4910();
  local_18 = (int)param_1[0x14] >> ((byte)*param_1 & 0x1f) & 0xffff;
  local_1c = (int)param_1[0x15] >> ((byte)*param_1 & 0x1f) & 0xffff;
  puVar6 = (undefined4 *)param_1[0x18];
  while (puVar6 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)puVar6[1];
    uVar8 = (*(short *)(puVar6 + 4) + *(short *)(puVar6 + 5)) - 1;
    bVar5 = (short)*(ushort *)(puVar6 + 5) < (short)local_1c;
    if (bVar5) {
      local_1c = (uint)*(ushort *)(puVar6 + 5);
    }
    bVar5 = (short)local_18 < (short)uVar8;
    if (bVar5) {
      local_18 = (uint)uVar8;
    }
    *puVar6 = 0;
    FUN_006a4920();
    puVar6 = puVar3;
  }
  if (param_1[0xd] == 0) {
    param_1[0xc] = 0x14;
    return 1;
  }
  (*(code *)param_1[0x2a])(param_1,&local_1c,&local_18);
  for (iVar10 = local_20; iVar10 != 0; iVar10 = *(int *)(iVar10 + 4)) {
    *(uint *)(iVar10 + 0x18) = (uint)(ushort)(*(short *)(iVar10 + 0x14) - (short)local_1c);
  }
  iVar10 = param_1[0xd];
  uStack_10 = local_1c & 0xffff;
  if ((0 < iVar10) && (*(int *)(param_1[9] + iVar10 * -4) == (int)(short)local_1c)) {
    param_1[0xd] = iVar10 + -1;
  }
  iVar10 = param_1[0xd];
  uVar13 = uStack_10;
  uVar11 = 0;
  while (0 < iVar10) {
    if (local_20 != 0) {
      iVar10 = local_20;
      do {
        piVar1 = (int *)(iVar10 + 0x18);
        *piVar1 = *piVar1 - (int)(short)uVar11;
        iVar10 = *(int *)(iVar10 + 4);
        if (*piVar1 == 0) {
          FUN_006a4950();
          FUN_006a4920();
        }
      } while (iVar10 != 0);
    }
    FUN_006a4970();
    FUN_006a4970();
    uVar8 = *(ushort *)(param_1[9] + param_1[0xd] * -4);
    uStack_4 = (uint)uVar8;
    param_1[0xd] = param_1[0xd] + -1;
    uStack_8 = uStack_4 - uVar13 & 0xffff;
    puVar4 = local_28;
    if ((short)uVar13 < (short)uVar8) {
      while( true ) {
        iStack_c = 0;
        puStack_14 = local_24;
        puVar14 = local_28;
        if (local_28 != (uint *)0x0) {
          do {
            uVar13 = uStack_10;
            uVar11 = *puVar14;
            uVar9 = *puStack_14;
            uVar7 = uVar11;
            if ((int)uVar9 < (int)uVar11) {
              uVar7 = uVar9;
              uVar9 = uVar11;
            }
            iVar10 = param_1[1];
            uVar11 = iVar10 + -1 + uVar9 & -iVar10;
            uVar12 = -iVar10 & uVar7;
            if ((((iVar10 < (int)(uVar9 - uVar7)) || (uVar12 == uVar7)) || (uVar11 == uVar9)) ||
               (((int)uVar12 <= (int)uVar11 && (uVar11 != iVar10 + uVar12)))) {
              (*(code *)param_1[0x2b])(param_1,uStack_10,uVar7,uVar9,puVar14,puStack_14);
            }
            else if (((byte)puVar14[3] & 7) != 2) {
              *puVar14 = uVar7;
              *puStack_14 = uVar9;
              iStack_c = iStack_c + 1;
              puVar14[6] = 1;
            }
            puVar15 = puVar14 + 1;
            puStack_14 = (uint *)puStack_14[1];
            puVar14 = (uint *)*puVar15;
          } while ((uint *)*puVar15 != (uint *)0x0);
          puVar14 = local_28;
          puVar15 = local_24;
          if (0 < (short)iStack_c) {
            do {
              if (puVar14[6] != 0) {
                puVar14[6] = 0;
                (*(code *)param_1[0x2c])(param_1,uVar13,*puVar14,*puVar15,puVar14,puVar15);
              }
              puVar2 = puVar14 + 1;
              puVar14 = (uint *)*puVar2;
              puVar15 = (uint *)puVar15[1];
            } while ((uint *)*puVar2 != (uint *)0x0);
          }
        }
        (*(code *)param_1[0x2d])(param_1);
        uVar13 = uVar13 + 1;
        uStack_10 = uVar13;
        if ((short)uStack_4 <= (short)uVar13) break;
        FUN_006a4970();
        FUN_006a4970();
      }
    }
    while (puVar14 = local_24, puVar4 != (uint *)0x0) {
      puVar14 = puVar4 + 4;
      puVar4 = (uint *)puVar4[1];
      if (*puVar14 == 0) {
        FUN_006a4950();
      }
    }
    while (puVar14 != (uint *)0x0) {
      puVar4 = puVar14 + 4;
      puVar14 = (uint *)puVar14[1];
      if (*puVar4 == 0) {
        FUN_006a4950();
      }
    }
    uVar11 = uStack_8;
    iVar10 = param_1[0xd];
  }
  if ((short)uVar13 <= (short)local_18) {
    do {
      (*(code *)param_1[0x2d])(param_1);
      uVar13 = uVar13 + 1;
    } while ((short)uVar13 <= (short)local_18);
  }
  return 0;
}


/* FUN_006a51d0 @ 006a51d0  kind=gamemisc  attributed-by=none  size=272 */

undefined4 FUN_006a51d0(char param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  short sVar4;
  char cVar5;
  int in_EAX;
  
  iVar3 = *(int *)(in_EAX + 0x404);
  do {
    if (iVar3 < 0) {
      return 0;
    }
    *(int *)(in_EAX + 0x54) =
         (int)*(short *)(in_EAX + 0x3c6 + *(int *)(in_EAX + 0x404) * 4) * *(int *)(in_EAX + 4);
    *(int *)(in_EAX + 0x50) =
         (int)*(short *)(in_EAX + 0x3c4 + *(int *)(in_EAX + 0x404) * 4) * *(int *)(in_EAX + 4);
    *(undefined4 *)(in_EAX + 0x2c) = *(undefined4 *)(in_EAX + 0x20);
    *(undefined4 *)(in_EAX + 0x30) = 0;
    cVar5 = FUN_006a47f0((int)param_1);
    if (cVar5 == '\0') {
      if ((*(int *)(in_EAX + 0x60) != 0) && (cVar5 = FUN_006a4eb0(), cVar5 != '\0')) {
        return *(undefined4 *)(in_EAX + 0x30);
      }
      *(int *)(in_EAX + 0x404) = *(int *)(in_EAX + 0x404) + -1;
    }
    else {
      if (*(int *)(in_EAX + 0x30) != 0x62) {
        return 1;
      }
      iVar3 = *(int *)(in_EAX + 0x404);
      *(undefined4 *)(in_EAX + 0x30) = 0;
      sVar1 = *(short *)(in_EAX + 0x3c4 + iVar3 * 4);
      sVar2 = *(short *)(in_EAX + 0x3c6 + iVar3 * 4);
      sVar4 = (short)(((int)sVar2 + (int)sVar1) / 2);
      if ((6 < iVar3) || (sVar4 < sVar1)) {
        *(undefined4 *)(in_EAX + 0x404) = 0;
        *(undefined4 *)(in_EAX + 0x30) = 0x14;
        return 0x14;
      }
      *(short *)(in_EAX + 0x3c8 + iVar3 * 4) = sVar4;
      *(short *)(in_EAX + 0x3ca + *(int *)(in_EAX + 0x404) * 4) = sVar2;
      *(short *)(in_EAX + 0x3c6 + *(int *)(in_EAX + 0x404) * 4) = sVar4 + -1;
      *(int *)(in_EAX + 0x404) = *(int *)(in_EAX + 0x404) + 1;
    }
    iVar3 = *(int *)(in_EAX + 0x404);
  } while( true );
}


/* FUN_006a52f0 @ 006a52f0  kind=gamemisc  attributed-by=none  size=296 */

int FUN_006a52f0(void)

{
  uint uVar1;
  int in_EAX;
  int iVar2;
  
  FUN_006a3910(*(uint *)(in_EAX + 0x94) & 0x100);
  uVar1 = *(uint *)(in_EAX + 0x94);
  *(undefined4 *)(in_EAX + 0x1c) = *(undefined4 *)(in_EAX + 0x10);
  if ((uVar1 & 8) == 0) {
    if ((uVar1 & 0x10) == 0) {
      *(undefined1 *)(in_EAX + 0xb8) = 0;
    }
    else {
      *(undefined1 *)(in_EAX + 0xb8) = 4;
    }
    if ((uVar1 & 0x20) == 0) {
      *(char *)(in_EAX + 0xb8) = *(char *)(in_EAX + 0xb8) + '\x01';
    }
  }
  else {
    *(undefined1 *)(in_EAX + 0xb8) = 2;
  }
  *(byte *)(in_EAX + 0xb9) = ~(byte)(uVar1 >> 9) & 1;
  *(undefined2 *)(in_EAX + 0x3c4) = 0;
  *(short *)(in_EAX + 0x3c6) = *(short *)(in_EAX + 0x6c) + -1;
  *(undefined1 **)(in_EAX + 0xa8) = &LAB_006a49f0;
  *(code **)(in_EAX + 0xac) = FUN_006a4a40;
  *(undefined **)(in_EAX + 0xb0) = &DAT_006a4b20;
  *(undefined1 **)(in_EAX + 0xb4) = &LAB_006a4ca0;
  *(undefined4 *)(in_EAX + 0x404) = 0;
  *(undefined2 *)(in_EAX + 0x3c) = *(undefined2 *)(in_EAX + 0x70);
  *(undefined4 *)(in_EAX + 0x40) = *(undefined4 *)(in_EAX + 0x78);
  iVar2 = FUN_006a51d0(0);
  if (iVar2 == 0) {
    if ((*(char *)(in_EAX + 0xb9) != '\0') && (*(char *)(in_EAX + 0xb8) != '\x02')) {
      *(undefined4 *)(in_EAX + 0x404) = 0;
      *(undefined2 *)(in_EAX + 0x3c4) = 0;
      *(code **)(in_EAX + 0xa8) = cube::Controller::vfunction12;
      *(undefined1 **)(in_EAX + 0xac) = &LAB_006a4cc0;
      *(undefined **)(in_EAX + 0xb0) = &DAT_006a4d30;
      *(code **)(in_EAX + 0xb4) = cube::Controller::vfunction12;
      *(short *)(in_EAX + 0x3c6) = *(short *)(in_EAX + 0x70) + -1;
      iVar2 = FUN_006a51d0(1);
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    iVar2 = 0;
  }
  return iVar2;
}


/* FUN_006a54e0 @ 006a54e0  kind=gamemisc  attributed-by=none  size=317 */

undefined4 FUN_006a54e0(int *param_1,int *param_2)

{
  short *psVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  psVar1 = (short *)param_2[1];
  piVar2 = (int *)*param_2;
  if (((param_1 == (int *)0x0) || (*param_1 == 0)) || (param_1[1] == 0)) {
    return 0x60;
  }
  if (psVar1 == (short *)0x0) {
    return 0x14;
  }
  if ((psVar1[1] != 0) && (0 < *psVar1)) {
    if ((*(int *)(psVar1 + 6) != 0) &&
       ((*(int *)(psVar1 + 2) != 0 &&
        ((int)psVar1[1] == *(short *)(*(int *)(psVar1 + 6) + -2 + *psVar1 * 2) + 1)))) {
      iVar3 = param_1[3];
      if ((*(byte *)(param_2 + 2) & 2) != 0) {
        return 0x13;
      }
      if (piVar2 != (int *)0x0) {
        if (piVar2[1] == 0) {
          return 0;
        }
        if (*piVar2 == 0) {
          return 0;
        }
        if (piVar2[3] != 0) {
          *(undefined4 *)(iVar3 + 0x84) = *(undefined4 *)psVar1;
          *(undefined4 *)(iVar3 + 0x88) = *(undefined4 *)(psVar1 + 2);
          *(undefined4 *)(iVar3 + 0x8c) = *(undefined4 *)(psVar1 + 4);
          *(undefined4 *)(iVar3 + 0x90) = *(undefined4 *)(psVar1 + 6);
          *(undefined4 *)(iVar3 + 0x94) = *(undefined4 *)(psVar1 + 8);
          *(int *)(iVar3 + 0x6c) = *piVar2;
          *(int *)(iVar3 + 0x70) = piVar2[1];
          *(int *)(iVar3 + 0x74) = piVar2[2];
          *(int *)(iVar3 + 0x78) = piVar2[3];
          *(int *)(iVar3 + 0x7c) = piVar2[4];
          *(int *)(iVar3 + 0x80) = piVar2[5];
          iVar4 = *param_1;
          *(int *)(iVar3 + 0x20) = iVar4;
          *(uint *)(iVar3 + 0x24) = iVar4 + (param_1[1] & 0xfffffffcU);
          if ((*(byte *)(param_2 + 2) & 1) == 0) {
            uVar5 = FUN_006a52f0();
            return uVar5;
          }
          uVar5 = FUN_006a5420();
          return uVar5;
        }
      }
    }
    return 0x14;
  }
  return 0;
}


/* FUN_006a5680 @ 006a5680  kind=gamemisc  attributed-by=none  size=541 */

void FUN_006a5680(int param_1,int param_2,uint param_3,undefined4 *param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int local_54;
  int local_50;
  int local_4c;
  undefined4 local_48;
  int *local_44;
  int local_40;
  uint local_3c;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_54;
  local_50 = param_1;
  if (*(int *)(param_2 + 0x48) != *(int *)(param_1 + 0x18)) {
    __security_check_cookie(local_4 ^ (uint)&local_54);
    return;
  }
  if (param_3 == 2) {
    if (*(undefined **)(param_1 + 0x14) == &DAT_00723be0) {
      __security_check_cookie(local_4 ^ (uint)&local_54);
      return;
    }
  }
  else if (*(undefined **)(param_1 + 0x14) == &DAT_00723ba4) {
    __security_check_cookie(local_4 ^ (uint)&local_54);
    return;
  }
  iVar1 = param_2 + 0x6c;
  if (param_4 != (undefined4 *)0x0) {
    FUN_006904c0(iVar1,*param_4,param_4[1]);
  }
  FUN_00690430(iVar1,&local_14);
  local_c = local_c + 0x3f & 0xffffffc0;
  local_14 = local_14 & 0xffffffc0;
  local_8 = local_8 + 0x3f & 0xffffffc0;
  local_10 = local_10 & 0xffffffc0;
  iVar3 = (int)(local_c - local_14) >> 6;
  local_48 = *(undefined4 *)(local_50 + 8);
  local_4c = (int)(local_8 - local_10) >> 6;
  if ((*(byte *)(*(int *)(param_2 + 0x9c) + 4) & 1) != 0) {
    FUN_00691290(local_48,*(undefined4 *)(param_2 + 0x58));
    *(undefined4 *)(param_2 + 0x58) = 0;
    puVar2 = (uint *)(*(int *)(param_2 + 0x9c) + 4);
    *puVar2 = *puVar2 & 0xfffffffe;
  }
  if ((param_3 & 2) == 0) {
    uVar4 = iVar3 + 3U & 0xfffffffc;
    *(undefined1 *)(param_2 + 0x5e) = 2;
    *(undefined2 *)(param_2 + 0x5c) = 0x100;
  }
  else {
    uVar4 = iVar3 + 0xfU >> 3 & 0x1ffffffe;
    *(undefined1 *)(param_2 + 0x5e) = 1;
  }
  *(uint *)(param_2 + 0x54) = uVar4;
  *(int *)(param_2 + 0x50) = iVar3;
  *(int *)(param_2 + 0x4c) = local_4c;
  uVar5 = FUN_00693a60(local_48,local_4c,0,uVar4,0,&local_54);
  *(undefined4 *)(param_2 + 0x58) = uVar5;
  if (local_54 == 0) {
    puVar2 = (uint *)(*(int *)(param_2 + 0x9c) + 4);
    *puVar2 = *puVar2 | 1;
    FUN_006904c0(iVar1,-local_14,-local_10);
    local_3c = (uint)(*(char *)(param_2 + 0x5e) == '\x02');
    local_44 = (int *)(param_2 + 0x4c);
    local_40 = iVar1;
    local_54 = (**(code **)(local_50 + 0x40))(*(undefined4 *)(local_50 + 0x3c),&local_44);
    FUN_006904c0(iVar1,local_14,local_10);
    if (local_54 == 0) {
      *(undefined4 *)(param_2 + 0x48) = 0x62697473;
      *(int *)(param_2 + 100) = (int)local_14 >> 6;
      *(int *)(param_2 + 0x68) = (int)local_8 >> 6;
    }
  }
  __security_check_cookie(local_4 ^ (uint)&local_54);
  return;
}


/* FUN_006a58c0 @ 006a58c0  kind=gamemisc  attributed-by=none  size=63 */

void FUN_006a58c0(undefined4 param_1)

{
  undefined4 uVar1;
  uint in_EDX;
  uint uVar2;
  int unaff_EDI;
  int local_4;
  
  local_4 = 0;
  if (*(uint *)(unaff_EDI + 4) < in_EDX) {
    uVar2 = in_EDX + 7 & 0xfffffff8;
    uVar1 = FUN_00693a60(param_1,0xc,*(uint *)(unaff_EDI + 4),uVar2,*(undefined4 *)(unaff_EDI + 8),
                         &local_4);
    *(undefined4 *)(unaff_EDI + 8) = uVar1;
    if (local_4 == 0) {
      *(uint *)(unaff_EDI + 4) = uVar2;
    }
  }
  return;
}


/* FUN_006a5900 @ 006a5900  kind=gamemisc  attributed-by=none  size=77 */

int FUN_006a5900(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint *in_EAX;
  int iVar2;
  uint uVar3;
  
  uVar3 = *in_EAX + 1;
  if (in_EAX[1] <= uVar3) {
    iVar2 = FUN_006a58c0(param_1);
    if (iVar2 != 0) {
      *param_2 = 0;
      return iVar2;
    }
  }
  puVar1 = (undefined4 *)((in_EAX[2] - 0xc) + uVar3 * 0xc);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *in_EAX = uVar3;
  *param_2 = puVar1;
  return 0;
}


/* FUN_006a5970 @ 006a5970  kind=gamemisc  attributed-by=none  size=82 */

void FUN_006a5970(undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int in_EDX;
  uint uVar3;
  int unaff_EDI;
  int local_4;
  
  uVar2 = *(int *)(unaff_EDI + 4) + 7U >> 3;
  uVar3 = in_EDX + 7U >> 3;
  local_4 = 0;
  if (uVar2 < uVar3) {
    uVar3 = uVar3 + 7 & 0xfffffff8;
    uVar1 = FUN_00693a60(param_1,1,uVar2,uVar3,*(undefined4 *)(unaff_EDI + 8),&local_4);
    *(undefined4 *)(unaff_EDI + 8) = uVar1;
    if (local_4 == 0) {
      *(uint *)(unaff_EDI + 4) = uVar3 * 8;
    }
  }
  return;
}


/* FUN_006a59d0 @ 006a59d0  kind=gamemisc  attributed-by=none  size=32 */

uint FUN_006a59d0(void)

{
  uint *in_EAX;
  uint in_ECX;
  
  if (*in_EAX <= in_ECX) {
    return 0;
  }
  return (uint)*(byte *)(in_EAX[2] + ((int)in_ECX >> 3)) & 0x80 >> ((byte)in_ECX & 7);
}


/* FUN_006a5a10 @ 006a5a10  kind=gamemisc  attributed-by=none  size=70 */

int FUN_006a5a10(void)

{
  int iVar1;
  uint *in_ECX;
  byte *pbVar2;
  uint unaff_EBX;
  
  if ((int)unaff_EBX < 0) {
    return 0;
  }
  if (*in_ECX <= unaff_EBX) {
    iVar1 = FUN_006a5970();
    if (iVar1 != 0) {
      return iVar1;
    }
    *in_ECX = unaff_EBX + 1;
  }
  pbVar2 = (byte *)(((int)unaff_EBX >> 3) + in_ECX[2]);
  *pbVar2 = *pbVar2 | (byte)(0x80 >> ((byte)unaff_EBX & 7));
  return 0;
}


/* FUN_006a5a60 @ 006a5a60  kind=gamemisc  attributed-by=none  size=57 */

void FUN_006a5a60(undefined4 param_1)

{
  undefined4 *unaff_EBX;
  int iVar1;
  
  for (iVar1 = unaff_EBX[1]; iVar1 != 0; iVar1 = iVar1 + -1) {
    FUN_006a5950();
  }
  FUN_00691290(param_1,unaff_EBX[2]);
  unaff_EBX[2] = 0;
  *unaff_EBX = 0;
  unaff_EBX[1] = 0;
  return;
}


/* FUN_006a5aa0 @ 006a5aa0  kind=gamemisc  attributed-by=none  size=63 */

void FUN_006a5aa0(undefined4 param_1)

{
  undefined4 uVar1;
  uint in_EDX;
  uint uVar2;
  int unaff_EDI;
  int local_4;
  
  local_4 = 0;
  if (*(uint *)(unaff_EDI + 4) < in_EDX) {
    uVar2 = in_EDX + 7 & 0xfffffff8;
    uVar1 = FUN_00693a60(param_1,0x10,*(uint *)(unaff_EDI + 4),uVar2,*(undefined4 *)(unaff_EDI + 8),
                         &local_4);
    *(undefined4 *)(unaff_EDI + 8) = uVar1;
    if (local_4 == 0) {
      *(uint *)(unaff_EDI + 4) = uVar2;
    }
  }
  return;
}


/* FUN_006a5ae0 @ 006a5ae0  kind=gamemisc  attributed-by=none  size=75 */

int FUN_006a5ae0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint *in_EAX;
  int iVar2;
  uint uVar3;
  
  uVar3 = *in_EAX + 1;
  if (in_EAX[1] < uVar3) {
    iVar2 = FUN_006a5aa0(param_1);
    if (iVar2 != 0) {
      *param_2 = 0;
      return iVar2;
    }
  }
  puVar1 = (undefined4 *)((in_EAX[2] - 0x10) + uVar3 * 0x10);
  *puVar1 = 0;
  puVar1[3] = 0;
  *in_EAX = uVar3;
  *param_2 = puVar1;
  return 0;
}


/* FUN_006a5c60 @ 006a5c60  kind=gamemisc  attributed-by=none  size=270 */

int FUN_006a5c60(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int in_EAX;
  int iVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  undefined4 *_Dst;
  byte *pbVar11;
  
  iVar8 = in_EAX;
  if (param_2 < in_EAX) {
    iVar8 = param_2;
    param_2 = in_EAX;
  }
  if (((iVar8 < param_2) && (-1 < iVar8)) && (param_2 < *param_1)) {
    iVar1 = param_1[2];
    uVar7 = *(uint *)(param_2 * 0x10 + iVar1);
    _Dst = (undefined4 *)(param_2 * 0x10 + iVar1);
    uVar10 = *(uint *)(iVar1 + iVar8 * 0x10);
    if (uVar7 != 0) {
      if (uVar10 < uVar7) {
        iVar6 = FUN_006a5970(param_3);
        if (iVar6 != 0) {
          return iVar6;
        }
        for (; uVar10 < uVar7; uVar10 = uVar10 + 1) {
          FUN_006a59f0();
        }
      }
      pbVar9 = (byte *)_Dst[2];
      pbVar11 = *(byte **)(iVar1 + iVar8 * 0x10 + 8);
      for (uVar7 = uVar7 + 7 >> 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pbVar11 = *pbVar11 | *pbVar9;
        pbVar11 = pbVar11 + 1;
        pbVar9 = pbVar9 + 1;
      }
    }
    *_Dst = 0;
    _Dst[3] = 0;
    iVar8 = (*param_1 - param_2) + -1;
    if (0 < iVar8) {
      uVar2 = _Dst[2];
      uVar3 = _Dst[3];
      uVar4 = *_Dst;
      uVar5 = _Dst[1];
      memmove(_Dst,_Dst + 4,iVar8 * 0x10);
      _Dst[iVar8 * 4] = uVar4;
      _Dst[iVar8 * 4 + 1] = uVar5;
      _Dst[iVar8 * 4 + 2] = uVar2;
      _Dst[iVar8 * 4 + 3] = uVar3;
    }
    *param_1 = *param_1 + -1;
  }
  return 0;
}


/* FUN_006a5d80 @ 006a5d80  kind=gamemisc  attributed-by=none  size=90 */

int FUN_006a5d80(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *unaff_EBX;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar2 = *unaff_EBX + -1;
  do {
    do {
      if (iVar2 < 1) {
        return iVar4;
      }
      iVar5 = iVar2 + -1;
      bVar1 = iVar2 < 1;
      iVar2 = iVar5;
    } while (bVar1);
    do {
      iVar3 = FUN_006a5c00();
      if (iVar3 != 0) {
        iVar4 = FUN_006a5c60();
        if (iVar4 != 0) {
          return iVar4;
        }
        break;
      }
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  } while( true );
}


/* FUN_006a5e10 @ 006a5e10  kind=gamemisc  attributed-by=none  size=11 */

void FUN_006a5e10(void)

{
  undefined4 *in_EAX;
  
  *in_EAX = 0;
  in_EAX[3] = 0;
  in_EAX[6] = 0;
  return;
}


/* FUN_006a5e20 @ 006a5e20  kind=gamemisc  attributed-by=none  size=17 */

void FUN_006a5e20(void)

{
  int in_ECX;
  undefined4 in_EDX;
  
  if (*(int *)(in_ECX + 0xc) != 0) {
    *(undefined4 *)(*(int *)(in_ECX + 0x14) + -4 + *(int *)(in_ECX + 0xc) * 0x10) = in_EDX;
  }
  return;
}


/* FUN_006a5e90 @ 006a5e90  kind=gamemisc  attributed-by=none  size=190 */

void FUN_006a5e90(int param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  int in_EAX;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *unaff_EDI;
  int *local_4;
  
  iVar4 = 0;
  if (in_EAX < 0) {
    iVar4 = 1;
    if (in_EAX == -0x15) {
      param_1 = param_1 + -0x15;
      iVar4 = 3;
    }
    in_EAX = 0;
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = 0xffffffff;
  }
  uVar1 = *unaff_EDI;
  local_4 = (int *)unaff_EDI[2];
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      if ((*local_4 == param_1) && (local_4[1] == in_EAX)) {
        if (uVar3 < uVar1) goto LAB_006a5f18;
        break;
      }
      uVar3 = uVar3 + 1;
      local_4 = local_4 + 3;
    } while (uVar3 < uVar1);
  }
  iVar2 = FUN_006a5900(param_2,&local_4);
  if (iVar2 == 0) {
    *local_4 = param_1;
    local_4[1] = in_EAX;
    local_4[2] = iVar4;
LAB_006a5f18:
    iVar4 = FUN_006a5b30(param_2);
    if (((iVar4 == 0) && (iVar4 = FUN_006a5a10(), iVar4 == 0)) && (param_3 != (uint *)0x0)) {
      *param_3 = uVar3;
    }
  }
  return;
}


/* FUN_006a5f50 @ 006a5f50  kind=gamemisc  attributed-by=none  size=168 */

void FUN_006a5f50(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_stack_00000010;
  int local_4;
  
  iVar2 = *(int *)(in_EAX + 0x20);
  iVar3 = *(int *)(in_EAX + 0x18);
  local_4 = iVar2;
  if (iVar3 != 0) {
    do {
      iVar1 = FUN_006a59d0();
      if (((iVar1 != 0) || (iVar1 = FUN_006a59d0(), iVar1 != 0)) ||
         (iVar1 = FUN_006a59d0(), iVar1 != 0)) break;
      iVar2 = iVar2 + 0x10;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    local_4 = iVar2;
    if (iVar3 != 0) goto LAB_006a5fc3;
  }
  iVar2 = FUN_006a5ae0(in_stack_00000010,&local_4);
  if (iVar2 != 0) {
    return;
  }
LAB_006a5fc3:
  iVar2 = FUN_006a5a10();
  if ((iVar2 == 0) && (iVar2 = FUN_006a5a10(), iVar2 == 0)) {
    FUN_006a5a10();
  }
  return;
}


/* FUN_006a60a0 @ 006a60a0  kind=gamemisc  attributed-by=none  size=93 */

void FUN_006a60a0(int param_1)

{
  int iVar1;
  undefined4 *in_ECX;
  undefined4 *unaff_EBX;
  
  if (((unaff_EBX[1] == 0) && (unaff_EBX[3] - 1 < 2)) && (param_1 != 0)) {
    while (iVar1 = FUN_006a5e90(*in_ECX,*unaff_EBX,0), iVar1 == 0) {
      in_ECX = in_ECX + 2;
      param_1 = param_1 + -1;
      if (param_1 == 0) {
        return;
      }
    }
    unaff_EBX[1] = iVar1;
  }
  return;
}


/* FUN_006a6100 @ 006a6100  kind=gamemisc  attributed-by=none  size=228 */

void FUN_006a6100(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_1c;
  local_14 = param_1;
  if (param_1[1] == 0) {
    local_1c = *param_1;
    if (((int)param_2 < 0) || (1 < (int)param_2)) {
      param_2 = (uint)(param_2 != 0);
    }
    local_18 = param_1 + param_2 * 9 + 4;
    if (param_1[3] == 1) {
      iVar3 = 0;
      puVar2 = &local_10;
      do {
        FUN_0068e970(param_3[1],local_1c,puVar2);
        iVar1 = FUN_0068e970(*param_3);
        iVar1 = FUN_006a5e90(iVar1 >> 0x10);
        if (iVar1 != 0) goto LAB_006a61c7;
        iVar3 = iVar3 + 1;
        puVar2 = puVar2 + 1;
        param_3 = param_3 + 2;
      } while (iVar3 < 3);
      iVar1 = FUN_006a5f50(local_10,local_c,local_8,local_1c);
      if (iVar1 == 0) goto LAB_006a61cd;
    }
    else {
      iVar1 = 6;
    }
LAB_006a61c7:
    local_14[1] = iVar1;
  }
LAB_006a61cd:
  __security_check_cookie(local_4 ^ (uint)&local_1c);
  return;
}


/* FUN_006a61f0 @ 006a61f0  kind=gamemisc  attributed-by=none  size=83 */

void FUN_006a61f0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[1] == 0) {
    uVar1 = *param_1;
    if (param_1[3] == 1) {
      iVar2 = FUN_006a5e40(uVar1);
      if (iVar2 == 0) {
        iVar2 = FUN_006a5e40(uVar1);
        if (iVar2 == 0) {
          return;
        }
        param_1[1] = iVar2;
        return;
      }
    }
    else {
      iVar2 = 6;
    }
    param_1[1] = iVar2;
  }
  return;
}


/* FUN_006a6250 @ 006a6250  kind=gamemisc  attributed-by=none  size=100 */

void FUN_006a6250(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    iVar1 = *(int *)(param_1 + 0x34);
    if ((param_3 == iVar1 + *(int *)(param_1 + 0x10)) &&
       ((iVar2 = FUN_006a5e60(param_4,iVar1,*(int *)(param_1 + 0x10)), iVar2 != 0 ||
        (iVar2 = FUN_006a5e60(param_4,0,iVar1), iVar2 != 0)))) {
      *(int *)(param_1 + 4) = iVar2;
    }
  }
  return;
}


/* FUN_006a64e0 @ 006a64e0  kind=gamemisc  attributed-by=none  size=119 */

void FUN_006a64e0(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int in_EAX;
  int iVar5;
  int iVar6;
  int in_ECX;
  int iVar7;
  
  uVar2 = *(undefined4 *)(in_EAX * 0xcc + 200 + in_ECX);
  piVar1 = (int *)(in_EAX * 0xcc + 4 + in_ECX);
  iVar3 = *piVar1;
  if (iVar3 != 0) {
    iVar5 = FUN_0068ebc0(piVar1[1],uVar2);
    piVar1[2] = iVar5;
    piVar1[3] = iVar5 + 0x20U & 0xffffffc0;
    piVar4 = piVar1 + 1;
    while (iVar3 = iVar3 + -1, iVar3 != 0) {
      iVar6 = FUN_0068ebc0(piVar4[3],uVar2);
      iVar5 = piVar1[2];
      iVar7 = iVar6 - iVar5;
      if (iVar7 < 0) {
        iVar7 = -iVar7;
      }
      if (iVar7 < 0x80) {
        iVar6 = iVar5;
      }
      piVar4[4] = iVar6;
      piVar4[5] = iVar6 + 0x20U & 0xffffffc0;
      piVar4 = piVar4 + 3;
    }
  }
  return;
}


/* FUN_006a6560 @ 006a6560  kind=gamemisc  attributed-by=none  size=297 */

void FUN_006a6560(char param_1,short *param_2,int *param_3,int *param_4)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint in_ECX;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int local_c;
  int local_8;
  int local_4;
  
  local_8 = *param_4;
  local_c = *param_3;
  bVar1 = true;
  if (in_ECX < 2) {
    *param_3 = local_c;
    *param_4 = local_8;
    return;
  }
  local_4 = (in_ECX - 2 >> 1) + 1;
  do {
    bVar2 = false;
    if ((bVar1) || (param_1 != '\0')) {
      iVar7 = (int)param_2[1];
      iVar6 = *param_2 - iVar7;
      bVar1 = false;
      iVar3 = local_8;
      piVar5 = param_4;
    }
    else {
      iVar7 = (int)*param_2;
      iVar6 = param_2[1] - iVar7;
      bVar2 = true;
      iVar3 = local_c;
      piVar5 = param_3;
    }
    piVar5 = piVar5 + 1;
    if (iVar3 != 0) {
      while (*piVar5 <= iVar7) {
        if (iVar7 == *piVar5) {
          if (iVar6 < 0) {
            if (iVar6 < piVar5[1]) {
              piVar5[1] = iVar6;
            }
          }
          else if (piVar5[1] < iVar6) {
            piVar5[1] = iVar6;
          }
          goto LAB_006a665c;
        }
        piVar5 = piVar5 + 8;
        iVar3 = iVar3 + -1;
        if (iVar3 == 0) goto LAB_006a6646;
      }
      if (iVar3 != 0) {
        piVar8 = piVar5 + iVar3 * 8;
        do {
          iVar3 = iVar3 + -1;
          piVar9 = piVar8 + -8;
          piVar10 = piVar8;
          for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
            *piVar10 = *piVar9;
            piVar9 = piVar9 + 1;
            piVar10 = piVar10 + 1;
          }
          piVar8 = piVar8 + -8;
        } while (iVar3 != 0);
      }
    }
LAB_006a6646:
    *piVar5 = iVar7;
    piVar5[1] = iVar6;
    if (bVar2) {
      local_c = local_c + 1;
    }
    else {
      local_8 = local_8 + 1;
    }
LAB_006a665c:
    param_2 = param_2 + 2;
    local_4 = local_4 + -1;
    if (local_4 == 0) {
      *param_3 = local_c;
      *param_4 = local_8;
      return;
    }
  } while( true );
}


/* FUN_006a66a0 @ 006a66a0  kind=gamemisc  attributed-by=none  size=310 */

void FUN_006a66a0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint *in_EDX;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  int local_8;
  
  if (param_4 == 0) {
    puVar7 = in_EDX + 0x81;
  }
  else {
    puVar7 = in_EDX + 0x183;
    in_EDX = in_EDX + 0x102;
  }
  *in_EDX = 0;
  *puVar7 = 0;
  FUN_006a6560(0);
  FUN_006a6560(1,param_2,in_EDX,puVar7);
  uVar4 = *in_EDX;
  uVar1 = *puVar7;
  if (0 < (int)uVar4) {
    puVar2 = in_EDX + 1;
    uVar5 = uVar4;
    do {
      if ((1 < uVar5) && ((int)(puVar2[8] - *puVar2) < (int)puVar2[1])) {
        puVar2[1] = puVar2[8] - *puVar2;
      }
      puVar2[3] = *puVar2;
      puVar2[2] = puVar2[1] + *puVar2;
      puVar2 = puVar2 + 8;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (0 < (int)uVar1) {
    puVar2 = puVar7 + 1;
    uVar5 = uVar1;
    do {
      if ((1 < uVar5) && ((int)puVar2[1] < (int)(*puVar2 - puVar2[8]))) {
        puVar2[1] = *puVar2 - puVar2[8];
      }
      puVar2[2] = *puVar2;
      puVar2[3] = puVar2[1] + *puVar2;
      puVar2 = puVar2 + 8;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  local_8 = 1;
  do {
    puVar2 = in_EDX + 1;
    if (uVar4 != 0) {
      in_EDX[4] = in_EDX[4] - param_3;
      iVar6 = uVar4 - 1;
      uVar4 = in_EDX[3];
      if (iVar6 != 0) {
        do {
          iVar3 = puVar2[0xb] - uVar4;
          if (iVar3 < param_3 * 2) {
            uVar4 = iVar3 / 2 + uVar4;
            puVar2[0xb] = uVar4;
            puVar2[2] = uVar4;
          }
          else {
            puVar2[2] = uVar4 + param_3;
            puVar2[0xb] = puVar2[0xb] - param_3;
          }
          uVar4 = puVar2[10];
          puVar2 = puVar2 + 8;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      puVar2[2] = uVar4 + param_3;
    }
    local_8 = local_8 + -1;
    uVar4 = uVar1;
    in_EDX = puVar7;
  } while (-1 < local_8);
  return;
}


/* FUN_006a67e0 @ 006a67e0  kind=gamemisc  attributed-by=none  size=465 */

void FUN_006a67e0(int *param_1,uint param_2)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  iVar1 = param_2;
  if ((int)param_2 < 0x20c49ba) {
    *(bool *)(param_1 + 0x208) = (int)(param_2 * 0x7d) < param_1[0x204] * 8;
  }
  else {
    *(bool *)(param_1 + 0x208) = (int)param_2 < (param_1[0x204] * 8) / 0x7d;
  }
  iVar7 = param_1[0x205];
  while ((0 < iVar7 && (iVar2 = FUN_0068ebc0(iVar7,param_2), 0x20 < iVar2))) {
    iVar7 = iVar7 + -1;
  }
  param_1[0x206] = iVar7;
  param_2 = 0;
  do {
    piVar3 = param_1;
    if (param_2 != 0) {
      if (param_2 == 1) {
        piVar3 = param_1 + 0x81;
      }
      else if (param_2 == 2) {
        piVar3 = param_1 + 0x102;
      }
      else {
        piVar3 = param_1 + 0x183;
      }
    }
    piVar4 = piVar3 + 1;
    for (iVar7 = *piVar3; iVar7 != 0; iVar7 = iVar7 + -1) {
      iVar2 = FUN_0068ebc0(piVar4[2],iVar1);
      piVar4[7] = iVar2 + in_EAX;
      iVar2 = FUN_0068ebc0(piVar4[3],iVar1);
      piVar4[6] = iVar2 + in_EAX;
      iVar2 = FUN_0068ebc0(*piVar4,iVar1);
      piVar4[4] = iVar2 + in_EAX;
      iVar2 = FUN_0068ebc0(piVar4[1],iVar1);
      piVar4[5] = iVar2;
      piVar4[4] = piVar4[4] + 0x20U & 0xffffffc0;
      piVar4 = piVar4 + 8;
    }
    param_2 = param_2 + 1;
  } while (param_2 < 4);
  param_2 = 0;
  do {
    if (param_2 == 0) {
      piVar3 = param_1 + 0x102;
      piVar4 = param_1;
    }
    else {
      piVar3 = param_1 + 0x183;
      piVar4 = param_1 + 0x81;
    }
    piVar6 = piVar4 + 1;
    for (iVar7 = *piVar4; iVar7 != 0; iVar7 = iVar7 + -1) {
      piVar4 = piVar3 + 1;
      for (iVar2 = *piVar3; iVar2 != 0; iVar2 = iVar2 + -1) {
        iVar5 = *piVar6 - *piVar4;
        if (iVar5 < 0) {
          iVar5 = -iVar5;
        }
        iVar5 = FUN_0068ebc0(iVar5,iVar1);
        if (iVar5 < 0x40) {
          piVar6[7] = piVar4[7];
          piVar6[6] = piVar4[6];
          piVar6[4] = piVar4[4];
          piVar6[5] = piVar4[5];
          break;
        }
        piVar4 = piVar4 + 8;
      }
      piVar6 = piVar6 + 8;
    }
    param_2 = param_2 + 1;
    if (1 < param_2) {
      return;
    }
  } while( true );
}


/* FUN_006a69c0 @ 006a69c0  kind=gamemisc  attributed-by=none  size=217 */

void FUN_006a69c0(int param_1,uint *param_2)

{
  int iVar1;
  int in_EAX;
  int *piVar2;
  int iVar3;
  int *unaff_ESI;
  
  *param_2 = 0;
  iVar1 = unaff_ESI[0x208];
  iVar3 = *unaff_ESI;
  piVar2 = unaff_ESI + 1;
  if (iVar3 != 0) {
    while (-unaff_ESI[0x207] <= in_EAX - piVar2[3]) {
      if (in_EAX <= piVar2[2] + unaff_ESI[0x207]) {
        if (((char)iVar1 != '\0') || (in_EAX - piVar2[3] <= unaff_ESI[0x206])) {
          *param_2 = 1;
          param_2[1] = piVar2[4];
        }
        break;
      }
      piVar2 = piVar2 + 8;
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) break;
    }
  }
  iVar3 = unaff_ESI[0x81];
  piVar2 = unaff_ESI + iVar3 * 8 + 0x7a;
  if (iVar3 != 0) {
    while (-unaff_ESI[0x207] <= piVar2[2] - param_1) {
      if (piVar2[3] - unaff_ESI[0x207] <= param_1) {
        if (((char)iVar1 == '\0') && (unaff_ESI[0x206] <= piVar2[2] - param_1)) {
          return;
        }
        *param_2 = *param_2 | 2;
        param_2[2] = piVar2[4];
        return;
      }
      piVar2 = piVar2 + -8;
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) {
        return;
      }
    }
  }
  return;
}


/* FUN_006a6c10 @ 006a6c10  kind=gamemisc  attributed-by=none  size=124 */

undefined4 FUN_006a6c10(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  if ((param_2 != *(int *)(param_1 + 200)) || (param_4 != *(int *)(param_1 + 0xcc))) {
    *(int *)(param_1 + 200) = param_2;
    *(int *)(param_1 + 0xcc) = param_4;
    FUN_006a64e0();
  }
  if ((param_3 != *(int *)(param_1 + 0x194)) || (param_5 != *(int *)(param_1 + 0x198))) {
    *(int *)(param_1 + 0x194) = param_3;
    *(int *)(param_1 + 0x198) = param_5;
    FUN_006a64e0();
    FUN_006a67e0(param_1 + 0x19c,param_3);
  }
  return 0;
}


/* FUN_006a6c90 @ 006a6c90  kind=gamemisc  attributed-by=none  size=21 */

void FUN_006a6c90(void)

{
  undefined4 *in_EAX;
  
  *in_EAX = &LAB_006a6ae0;
  in_EAX[1] = FUN_006a6c10;
  in_EAX[2] = &LAB_006a6aa0;
  return;
}


/* FUN_006a6cb0 @ 006a6cb0  kind=gamemisc  attributed-by=none  size=31 */

undefined4 FUN_006a6cb0(void)

{
  int *in_EDX;
  int *unaff_ESI;
  
  if ((*unaff_ESI <= in_EDX[1] + *in_EDX) && (*in_EDX <= unaff_ESI[1] + *unaff_ESI)) {
    return 1;
  }
  return 0;
}


/* FUN_006a6d10 @ 006a6d10  kind=gamemisc  attributed-by=none  size=29 */

void FUN_006a6d10(void)

{
  int *in_EAX;
  uint *puVar1;
  int iVar2;
  
  iVar2 = *in_EAX;
  if (iVar2 != 0) {
    puVar1 = (uint *)(in_EAX[2] + 0x10);
    do {
      *puVar1 = *puVar1 & 0xfffffffb;
      puVar1[2] = 0xffffffff;
      puVar1 = puVar1 + 7;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}


/* FUN_006a6d30 @ 006a6d30  kind=gamemisc  attributed-by=none  size=116 */

void FUN_006a6d30(uint *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint in_EAX;
  int iVar4;
  uint uVar5;
  
  iVar1 = param_1[2] + in_EAX * 0x1c;
  if ((in_EAX < *param_1) && ((*(uint *)(iVar1 + 0x10) & 4) == 0)) {
    *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | 4;
    puVar2 = (undefined4 *)param_1[4];
    uVar5 = param_1[1];
    *(undefined4 *)(iVar1 + 0x14) = 0;
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      uVar3 = *puVar2;
      iVar4 = FUN_006a6cb0();
      if (iVar4 != 0) {
        *(undefined4 *)(iVar1 + 0x14) = uVar3;
        break;
      }
      puVar2 = puVar2 + 1;
    }
    if (param_1[1] < *param_1) {
      *(int *)(param_1[4] + param_1[1] * 4) = iVar1;
      param_1[1] = param_1[1] + 1;
    }
  }
  return;
}


/* FUN_006a6db0 @ 006a6db0  kind=gamemisc  attributed-by=none  size=73 */

void FUN_006a6db0(undefined4 param_1)

{
  uint uVar1;
  uint *in_EAX;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  pbVar2 = (byte *)in_EAX[2];
  uVar1 = *in_EAX;
  uVar4 = 0;
  uVar3 = 0;
  uVar5 = 0;
  if (uVar1 != 0) {
    do {
      if (uVar4 == 0) {
        uVar3 = (uint)*pbVar2;
        pbVar2 = pbVar2 + 1;
        uVar4 = 0x80;
      }
      if ((uVar4 & uVar3) != 0) {
        FUN_006a6d30(param_1);
      }
      uVar5 = uVar5 + 1;
      uVar4 = (int)uVar4 >> 1;
    } while (uVar5 < uVar1);
  }
  return;
}


/* FUN_006a6e00 @ 006a6e00  kind=gamemisc  attributed-by=none  size=272 */

int FUN_006a6e00(uint *param_1,int *param_2)

{
  uint uVar1;
  int in_ECX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint *unaff_ESI;
  uint uVar4;
  int iVar5;
  
  uVar4 = *param_1;
  uVar1 = FUN_00693a60();
  unaff_ESI[3] = uVar1;
  if (in_ECX == 0) {
    uVar1 = FUN_00693a60();
    unaff_ESI[2] = uVar1;
    uVar1 = FUN_00693a60();
    unaff_ESI[6] = uVar1;
    puVar2 = (undefined4 *)unaff_ESI[2];
    unaff_ESI[4] = unaff_ESI[3] + uVar4 * 4;
    *unaff_ESI = uVar4;
    unaff_ESI[1] = 0;
    unaff_ESI[5] = 0;
    unaff_ESI[7] = 0;
    puVar3 = (undefined4 *)param_1[2];
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar2 = *puVar3;
      puVar2[1] = puVar3[1];
      puVar2[4] = puVar3[2];
      puVar2 = puVar2 + 7;
      puVar3 = puVar3 + 3;
    }
    if (param_2 != (int *)0x0) {
      iVar5 = *param_2;
      unaff_ESI[8] = (uint)param_2;
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        FUN_006a6db0();
      }
    }
    uVar4 = *unaff_ESI;
    if ((unaff_ESI[1] != uVar4) && (uVar1 = 0, uVar4 != 0)) {
      do {
        FUN_006a6d30();
        uVar1 = uVar1 + 1;
      } while (uVar1 < uVar4);
    }
  }
  return in_ECX;
}


/* FUN_006a6f10 @ 006a6f10  kind=gamemisc  attributed-by=none  size=186 */

void FUN_006a6f10(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *in_EAX;
  int iVar4;
  uint *in_ECX;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte *local_8;
  uint local_4;
  
  iVar6 = *in_EAX;
  local_8 = (byte *)in_EAX[2];
  uVar8 = 0;
  uVar7 = 0;
  local_4 = 0;
  FUN_006a6d10();
  if (iVar6 != 0) {
    iVar5 = 0;
    do {
      if (uVar7 == 0) {
        local_4 = (uint)*local_8;
        local_8 = local_8 + 1;
        uVar7 = 0x80;
      }
      if ((local_4 & uVar7) != 0) {
        uVar1 = *(uint *)(in_ECX[2] + 0x10 + iVar5);
        iVar4 = in_ECX[2] + iVar5;
        if (((uVar1 & 4) == 0) && (*(uint *)(iVar4 + 0x10) = uVar1 | 4, uVar8 < *in_ECX)) {
          *(int *)(in_ECX[3] + uVar8 * 4) = iVar4;
          uVar8 = uVar8 + 1;
        }
      }
      uVar7 = (int)uVar7 >> 1;
      iVar5 = iVar5 + 0x1c;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  in_ECX[1] = uVar8;
  puVar2 = (undefined4 *)in_ECX[3];
  if (1 < (int)uVar8) {
    iVar6 = 0;
    local_4 = uVar8 - 1;
    local_8 = (byte *)puVar2;
    do {
      local_8 = (byte *)((int)local_8 + 4);
      piVar3 = *(int **)local_8;
      for (iVar5 = iVar6; (-1 < iVar5 && (*piVar3 <= *(int *)puVar2[iVar5])); iVar5 = iVar5 + -1) {
        puVar2[iVar5 + 1] = (int *)puVar2[iVar5];
        puVar2[iVar5] = piVar3;
      }
      iVar6 = iVar6 + 1;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  return;
}


/* FUN_006a6fd0 @ 006a6fd0  kind=gamemisc  attributed-by=none  size=106 */

uint FUN_006a6fd0(char param_1)

{
  uint in_EAX;
  uint uVar1;
  int in_ECX;
  int iVar2;
  uint uVar3;
  
  if ((int)in_EAX < 0x41) {
    uVar1 = 0x40;
    goto LAB_006a702c;
  }
  uVar1 = *(uint *)(in_ECX + 8);
  iVar2 = in_EAX - uVar1;
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  if ((iVar2 < 0x28) && (in_EAX = uVar1, (int)uVar1 < 0x30)) {
    in_EAX = 0x30;
  }
  else if (0xbf < (int)in_EAX) {
    uVar1 = in_EAX + 0x20 & 0xffffffc0;
    goto LAB_006a702c;
  }
  uVar3 = in_EAX & 0x3f;
  uVar1 = in_EAX & 0xffffffc0;
  if (9 < uVar3) {
    if (uVar3 < 0x20) {
      uVar1 = uVar1 + 10;
      goto LAB_006a702c;
    }
    if (uVar3 < 0x36) {
      uVar1 = uVar1 + 0x36;
      goto LAB_006a702c;
    }
  }
  uVar1 = uVar1 + uVar3;
LAB_006a702c:
  if (param_1 != '\0') {
    uVar1 = uVar1 + 0x20 & 0xffffffc0;
  }
  return uVar1;
}


/* FUN_006a7040 @ 006a7040  kind=gamemisc  attributed-by=none  size=48 */

uint FUN_006a7040(void)

{
  int in_EAX;
  uint uVar1;
  int in_EDX;
  uint uVar2;
  
  uVar1 = ((in_EAX + 0x20 + in_EDX & 0xffffffc0U) - in_EAX) - in_EDX;
  uVar2 = (in_EAX + 0x20U & 0xffffffc0) - in_EAX;
  if ((int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f)) <
      (int)((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f))) {
    uVar2 = uVar1;
  }
  return uVar2;
}


/* FUN_006a7070 @ 006a7070  kind=gamemisc  attributed-by=none  size=667 */

void FUN_006a7070(int *param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int local_c;
  int local_8;
  int local_4;
  
  uVar1 = *(undefined4 *)(param_3 * 0xcc + 200 + param_2);
  iVar6 = *(int *)(param_3 * 0xcc + 0xcc + param_2);
  if ((*(byte *)(param_1 + 4) & 8) != 0) {
    return;
  }
  iVar5 = FUN_0068ebc0(*param_1,uVar1);
  uVar10 = iVar5 + iVar6;
  iVar6 = FUN_0068ebc0(param_1[1],uVar1);
  if (param_3 == 0) {
    if (*(char *)(param_4 + 0x78) == '\0') {
LAB_006a71ed:
      param_1[4] = param_1[4] | 8;
      param_1[2] = uVar10;
      param_1[3] = iVar6;
      return;
    }
    if (*(char *)(param_4 + 0x7a) == '\0') goto LAB_006a70f1;
LAB_006a7208:
    bVar4 = true;
  }
  else {
    if (param_3 == 1) {
      if (*(char *)(param_4 + 0x79) == '\0') goto LAB_006a71ed;
      if (*(char *)(param_4 + 0x7b) != '\0') goto LAB_006a7208;
    }
LAB_006a70f1:
    bVar4 = false;
  }
  param_1[3] = iVar6;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  if (param_3 == 1) {
    FUN_006a69c0(*param_1,&local_c);
  }
  if (local_c == 1) {
    local_4 = local_8 - iVar6;
LAB_006a7284:
    param_1[2] = local_4;
  }
  else {
    if (local_c == 2) goto LAB_006a7284;
    if (local_c == 3) {
      param_1[3] = local_8 - local_4;
      goto LAB_006a7284;
    }
    piVar2 = (int *)param_1[5];
    iVar5 = iVar6 >> 1;
    if (piVar2 != (int *)0x0) {
      if ((*(byte *)(piVar2 + 4) & 8) == 0) {
        FUN_006a7070(piVar2,param_2,param_3,param_4);
      }
      iVar8 = piVar2[3];
      iVar3 = piVar2[2];
      iVar7 = FUN_0068ebc0(((param_1[1] >> 1) + *param_1) - ((piVar2[1] >> 1) + *piVar2),uVar1);
      uVar10 = iVar7 + (((iVar8 >> 1) + iVar3) - iVar5);
    }
    param_1[2] = uVar10;
    param_1[3] = iVar6;
    uVar11 = uVar10;
    if (*(char *)(param_4 + 0x7c) != '\0') {
      if (iVar6 < 0x41) {
        if (iVar6 < 0x20) {
          if (iVar6 < 1) {
            uVar11 = uVar10 + 0x20 & 0xffffffc0;
          }
          else {
            uVar11 = iVar6 + 0x20 + uVar10 & 0xffffffc0;
            uVar9 = uVar10 + 0x20 & 0xffffffc0;
            iVar5 = (uVar11 - iVar6) - uVar10;
            iVar8 = uVar9 - uVar10;
            if (iVar8 < 0) {
              iVar8 = -iVar8;
            }
            if (iVar5 < 0) {
              iVar5 = -iVar5;
            }
            if (iVar8 <= iVar5) {
              uVar11 = uVar9;
            }
          }
        }
        else {
          iVar6 = 0x40;
          uVar11 = uVar10 + iVar5 & 0xffffffc0;
        }
      }
      else {
        iVar6 = FUN_006a6fd0(0);
      }
    }
    iVar5 = FUN_006a7040();
    param_1[2] = iVar5 + uVar11;
    param_1[3] = iVar6;
  }
  if (bVar4) {
    if (param_1[3] < 0x40) {
      uVar10 = 0x40;
    }
    else {
      uVar10 = param_1[3] + 0x20U & 0xffffffc0;
    }
    if (local_c == 1) {
      param_1[2] = local_8 - uVar10;
    }
    else if (local_c != 2) {
      if (local_c != 3) {
        iVar6 = (int)uVar10 >> 1;
        param_1[3] = uVar10;
        if ((uVar10 & 0x40) != 0) {
          param_1[4] = param_1[4] | 8;
          param_1[2] = ((iVar6 + param_1[2] & 0xffffffc0U) + 0x20) - iVar6;
          param_1[3] = uVar10;
          return;
        }
        param_1[4] = param_1[4] | 8;
        param_1[2] = (iVar6 + 0x20 + param_1[2] & 0xffffffc0U) - iVar6;
        param_1[3] = uVar10;
        return;
      }
      goto LAB_006a72ff;
    }
    param_1[3] = uVar10;
  }
LAB_006a72ff:
  param_1[4] = param_1[4] | 8;
  return;
}


/* FUN_006a7340 @ 006a7340  kind=gamemisc  attributed-by=none  size=385 */

void FUN_006a7340(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int *local_1c;
  int local_18;
  int local_14;
  uint local_c;
  uint local_4;
  
  local_4 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    do {
      bVar4 = false;
      if (3 < *(uint *)(*(int *)(param_1 + 0xc) + 4 + local_4 * 8)) {
        piVar7 = *(int **)(*(int *)(param_1 + 0xc) + local_4 * 8);
        piVar5 = piVar7;
        do {
          piVar5 = (int *)piVar5[1];
          if (piVar5 == piVar7) goto LAB_006a74be;
          iVar9 = piVar5[9];
          iVar10 = piVar7[9];
          iVar1 = piVar5[10];
          iVar2 = piVar7[10];
          piVar3 = piVar7;
        } while ((iVar9 - iVar10 == 0) && (iVar1 - iVar2 == 0));
        do {
          piVar8 = piVar3;
          piVar3 = (int *)*piVar8;
          if (piVar3 == piVar7) goto LAB_006a74be;
          local_18 = piVar8[9] - piVar3[9];
          local_14 = piVar8[10] - piVar3[10];
        } while (((local_18 == 0) && (local_14 == 0)) ||
                (local_c = FUN_0068ef00(iVar9 - iVar10,iVar1 - iVar2,local_18,local_14),
                local_1c = piVar8, local_c == 0));
        do {
          do {
            piVar7 = piVar5;
            piVar5 = (int *)piVar7[1];
            if (piVar5 == piVar8) {
              bVar4 = true;
            }
            iVar9 = piVar5[9] - piVar7[9];
            iVar10 = piVar5[10] - piVar7[10];
          } while (((iVar9 == 0) && (iVar10 == 0)) ||
                  (uVar6 = FUN_0068ef00(local_18,local_14,iVar9,iVar10), uVar6 == 0));
          if ((int)(uVar6 ^ local_c) < 0) {
            do {
              local_1c[3] = local_1c[3] | 4;
              local_1c = (int *)local_1c[1];
            } while (local_1c != piVar7);
            local_1c[3] = local_1c[3] | 4;
          }
          local_1c = piVar7;
          local_18 = iVar9;
          local_14 = iVar10;
          local_c = uVar6;
        } while (!bVar4);
      }
LAB_006a74be:
      local_4 = local_4 + 1;
    } while (local_4 < *(uint *)(param_1 + 4));
  }
  return;
}


/* FUN_006a7520 @ 006a7520  kind=gamemisc  attributed-by=none  size=77 */

int FUN_006a7520(void)

{
  int iVar1;
  int iVar2;
  uint unaff_ESI;
  uint unaff_EDI;
  
  iVar2 = (unaff_ESI ^ (int)unaff_ESI >> 0x1f) - ((int)unaff_ESI >> 0x1f);
  iVar1 = (unaff_EDI ^ (int)unaff_EDI >> 0x1f) - ((int)unaff_EDI >> 0x1f);
  if (iVar1 * 0xc < iVar2) {
    return (uint)(-1 < (int)unaff_ESI) * 4 + -2;
  }
  if (iVar2 * 0xc < iVar1) {
    return (uint)((int)unaff_EDI < 0) * 2 + -1;
  }
  return 4;
}


/* FUN_006a7570 @ 006a7570  kind=gamemisc  attributed-by=none  size=65 */

void FUN_006a7570(void)

{
  int *in_EAX;
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_EBX;
  undefined4 uVar4;
  
  puVar3 = *(undefined4 **)(in_EAX[5] + 4);
  iVar2 = *in_EAX;
  if (iVar2 != 0) {
    puVar1 = (undefined4 *)(in_EAX[2] + 0x24);
    do {
      puVar1[-5] = 0;
      puVar1[-1] = 0;
      if (unaff_EBX == 0) {
        *puVar1 = *puVar3;
        uVar4 = puVar3[1];
      }
      else {
        *puVar1 = puVar3[1];
        uVar4 = *puVar3;
      }
      puVar1[1] = uVar4;
      iVar2 = iVar2 + -1;
      puVar1 = puVar1 + 0xc;
      puVar3 = puVar3 + 2;
    } while (iVar2 != 0);
  }
  return;
}


/* FUN_006a75c0 @ 006a75c0  kind=gamemisc  attributed-by=none  size=73 */

void FUN_006a75c0(void)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int in_EDX;
  uint *unaff_ESI;
  
  iVar2 = *(int *)(unaff_ESI[5] + 4);
  iVar3 = *(int *)(unaff_ESI[5] + 8);
  uVar4 = 0;
  if (*unaff_ESI != 0) {
    puVar5 = (undefined4 *)(unaff_ESI[2] + 0x2c);
    do {
      if (in_EDX == 0) {
        *(undefined4 *)(iVar2 + uVar4 * 8) = *puVar5;
      }
      else {
        *(undefined4 *)(iVar2 + 4 + uVar4 * 8) = *puVar5;
      }
      if ((*(byte *)(puVar5 + -7) & 0x10) != 0) {
        pbVar1 = (byte *)(uVar4 + iVar3);
        *pbVar1 = *pbVar1 | (-(in_EDX != 0) & 0x20U) + 0x20;
      }
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 0xc;
    } while (uVar4 < *unaff_ESI);
  }
  return;
}


/* FUN_006a7610 @ 006a7610  kind=gamemisc  attributed-by=none  size=627 */

int FUN_006a7610(uint *param_1,short *param_2,int param_3,uint *param_4)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  uint local_20;
  int local_1c;
  uint local_18;
  int *local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  uint local_4;
  
  memset(param_1,0,0x80);
  uVar2 = *param_4;
  param_1[4] = uVar2;
  local_4 = uVar2;
  uVar7 = FUN_00693a60(uVar2,0x30,0,(int)param_2[1],0,&local_1c);
  param_1[2] = uVar7;
  if (local_1c == 0) {
    puVar8 = (undefined4 *)FUN_00693a60(uVar2,8,0,(int)*param_2,0,&local_1c);
    param_1[3] = (uint)puVar8;
    if (local_1c != 0) {
      return local_1c;
    }
    *param_1 = (int)param_2[1];
    sVar1 = *param_2;
    uVar2 = param_1[2];
    param_1[1] = (int)sVar1;
    local_18 = 0;
    if ((int)sVar1 != 0) {
      iVar12 = 0;
      do {
        iVar11 = (int)*(short *)(*(int *)(param_2 + 6) + local_18 * 2);
        local_14 = (int *)(iVar12 * 0x30 + uVar2);
        iVar12 = (iVar11 + 1) - iVar12;
        *puVar8 = local_14;
        puVar8[1] = iVar12;
        if (0 < iVar12) {
          *local_14 = (uVar2 - 0x30) + (iVar11 * 3 + 3) * 0x10;
          local_14[2] = (int)puVar8;
          piVar10 = local_14;
          if (1 < iVar12) {
            iVar12 = iVar12 + -1;
            piVar9 = local_14;
            do {
              iVar12 = iVar12 + -1;
              piVar10 = piVar9 + 0xc;
              piVar9[1] = (int)piVar10;
              *piVar10 = (int)piVar9;
              piVar9[0xe] = (int)puVar8;
              piVar9 = piVar10;
            } while (iVar12 != 0);
          }
          piVar10[1] = (int)local_14;
        }
        local_18 = local_18 + 1;
        puVar8 = puVar8 + 2;
        iVar12 = iVar11 + 1;
      } while (local_18 < param_1[1]);
    }
    local_18 = param_1[2];
    iVar12 = *(int *)(param_2 + 2);
    local_20 = 0;
    if (*param_1 != 0) {
      puVar13 = (uint *)(local_18 + 0xc);
      do {
        iVar11 = (int)(puVar13[-3] - local_18) / 0x30;
        local_14 = (int *)((int)(puVar13[-2] - local_18) / 0x30);
        if ((*(byte *)(local_20 + *(int *)(param_2 + 4)) & 1) == 0) {
          *puVar13 = 1;
        }
        local_8 = *(int *)(iVar12 + local_20 * 8) - *(int *)(iVar12 + iVar11 * 8);
        local_c = *(int *)(iVar12 + 4 + local_20 * 8) - *(int *)(iVar12 + 4 + iVar11 * 8);
        local_10 = FUN_006a7520();
        *(char *)(puVar13 + 2) = (char)local_10;
        iVar11 = *(int *)(iVar12 + (int)local_14 * 8);
        iVar3 = *(int *)(iVar12 + 4 + (int)local_14 * 8);
        iVar4 = *(int *)(iVar12 + local_20 * 8);
        iVar5 = *(int *)(iVar12 + 4 + local_20 * 8);
        cVar6 = FUN_006a7520();
        *(char *)((int)puVar13 + 9) = cVar6;
        if ((*puVar13 & 1) == 0) {
          if (((char)local_10 == cVar6) &&
             ((cVar6 != '\x04' ||
              (iVar11 = FUN_0068efc0(local_8,local_c,iVar11 - iVar4,iVar3 - iVar5), iVar11 != 0))))
          {
            *puVar13 = *puVar13 | 2;
          }
        }
        else {
          *puVar13 = *puVar13 | 2;
        }
        local_20 = local_20 + 1;
        puVar13 = puVar13 + 0xc;
      } while (local_20 < *param_1);
    }
    param_1[5] = (uint)param_2;
    param_1[6] = (uint)param_4;
    FUN_006a7570();
    FUN_006a7340(param_1);
    local_1c = FUN_006a6e00(param_3 + 0x10,param_3 + 0x1c);
    if (local_1c == 0) {
      local_1c = FUN_006a6e00(param_3 + 0x34,param_3 + 0x40);
    }
  }
  return local_1c;
}


/* FUN_006a7890 @ 006a7890  kind=gamemisc  attributed-by=none  size=244 */

void FUN_006a7890(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  uint *unaff_EBX;
  uint uVar7;
  
  uVar7 = 0;
  if (unaff_EBX[1] != 0) {
    do {
      piVar5 = *(int **)(unaff_EBX[3] + uVar7 * 8);
      piVar6 = piVar5;
      if (*(int *)(unaff_EBX[3] + 4 + uVar7 * 8) != 0) {
        do {
          piVar6 = (int *)*piVar6;
          if (piVar6 == piVar5) goto LAB_006a797d;
        } while (piVar6[9] == piVar5[9]);
        piVar5 = (int *)piVar6[1];
        piVar4 = piVar5;
        piVar3 = piVar5;
LAB_006a78d2:
        do {
          piVar4 = (int *)piVar4[1];
          if (piVar4 == piVar5) break;
          if (piVar4[9] != piVar3[9]) {
            iVar1 = piVar3[9];
            if (*(int *)((int)piVar6 + 0x24) < iVar1) {
              if (iVar1 <= piVar4[9]) {
                piVar6 = (int *)*piVar4;
                piVar3 = piVar4;
                goto LAB_006a78d2;
              }
LAB_006a7900:
              do {
                piVar3[4] = piVar3[4] | 0x40;
                piVar3 = (int *)piVar3[1];
              } while (piVar3 != piVar4);
            }
            else if (iVar1 < piVar4[9]) goto LAB_006a7900;
            piVar6 = (int *)*piVar4;
            piVar3 = piVar4;
          }
        } while( true );
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < unaff_EBX[1]);
  }
  uVar7 = 0;
  do {
    if (*unaff_EBX <= uVar7) {
      return;
    }
    piVar4 = (int *)(uVar7 * 0x30 + unaff_EBX[2]);
    uVar2 = piVar4[4];
    piVar5 = piVar4;
    piVar6 = piVar4;
    if ((uVar2 & 0x40) != 0) {
      do {
        piVar5 = (int *)*piVar5;
        if (piVar5 == piVar4) goto LAB_006a797d;
      } while (piVar5[10] == piVar4[10]);
      do {
        piVar6 = (int *)piVar6[1];
        if (piVar6 == piVar4) goto LAB_006a797d;
      } while (piVar6[10] == piVar4[10]);
    }
    iVar1 = piVar4[10];
    if ((piVar5[10] < iVar1) && (iVar1 < piVar6[10])) {
      piVar4[4] = uVar2 | 0x80;
      uVar7 = uVar7 + 1;
    }
    else {
      if ((iVar1 < piVar5[10]) && (piVar6[10] < iVar1)) {
        piVar4[4] = uVar2 | 0x100;
      }
LAB_006a797d:
      uVar7 = uVar7 + 1;
    }
  } while( true );
}


/* FUN_006a7990 @ 006a7990  kind=gamemisc  attributed-by=none  size=470 */

void FUN_006a7990(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int in_EAX;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int unaff_EDI;
  
  iVar1 = *(int *)(in_EAX + 0xc);
  uVar2 = *(uint *)(in_EAX + 4);
  if (param_2 != 0) {
    puVar4 = (uint *)(param_1 + 0x10);
    do {
      uVar9 = *puVar4;
      uVar3 = puVar4[5];
      if ((uVar9 & 0x10) == 0) {
        iVar5 = (int)(char)puVar4[1];
        if (((((iVar5 == param_3) || (iVar5 == -param_3)) ||
             (iVar5 = (int)*(char *)((int)puVar4 + 5), iVar5 == param_3)) || (iVar5 == -param_3)) &&
           (iVar5 != 0)) {
          if (iVar5 == param_3) {
            uVar8 = 0;
            if (uVar2 != 0) {
              do {
                piVar7 = *(int **)(iVar1 + uVar8 * 4);
                iVar5 = uVar3 - *piVar7;
                if ((iVar5 < unaff_EDI) && (-iVar5 < unaff_EDI)) {
                  *puVar4 = uVar9 | 0x210;
                  puVar4[4] = (uint)piVar7;
                  break;
                }
                uVar8 = uVar8 + 1;
              } while (uVar8 < uVar2);
            }
          }
          else if ((iVar5 == -param_3) && (uVar8 = 0, uVar2 != 0)) {
            do {
              piVar7 = *(int **)(iVar1 + uVar8 * 4);
              iVar5 = (uVar3 - piVar7[1]) - *piVar7;
              if ((iVar5 < unaff_EDI) && (-iVar5 < unaff_EDI)) {
                *puVar4 = uVar9 | 0x410;
                puVar4[4] = (uint)piVar7;
                break;
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar2);
          }
        }
        else if ((uVar9 & 0x40) != 0) {
          if (param_3 == 2) {
            uVar8 = 0x80;
            uVar6 = 0x100;
          }
          else {
            uVar8 = 0x100;
            uVar6 = 0x80;
          }
          if ((uVar8 & uVar9) == 0) {
            if (((uVar6 & uVar9) != 0) && (uVar8 = 0, uVar2 != 0)) {
              do {
                piVar7 = *(int **)(iVar1 + uVar8 * 4);
                iVar5 = (uVar3 - piVar7[1]) - *piVar7;
                if ((iVar5 < unaff_EDI) && (-iVar5 < unaff_EDI)) {
                  uVar9 = uVar9 | 0x410;
                  goto LAB_006a7b04;
                }
                uVar8 = uVar8 + 1;
              } while (uVar8 < uVar2);
            }
          }
          else {
            uVar8 = 0;
            if (uVar2 != 0) {
LAB_006a7ab1:
              piVar7 = *(int **)(iVar1 + uVar8 * 4);
              if ((unaff_EDI <= (int)(uVar3 - *piVar7)) || (unaff_EDI <= (int)-(uVar3 - *piVar7)))
              goto LAB_006a7ac3;
              uVar9 = uVar9 | 0x210;
LAB_006a7b04:
              *puVar4 = uVar9;
              puVar4[4] = (uint)piVar7;
            }
          }
LAB_006a7b0d:
          if ((puVar4[4] == 0) && (uVar9 = 0, uVar2 != 0)) {
            do {
              piVar7 = *(int **)(iVar1 + uVar9 * 4);
              if ((*piVar7 <= (int)uVar3) && ((int)uVar3 <= piVar7[1] + *piVar7)) {
                puVar4[4] = (uint)piVar7;
                break;
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar2);
          }
        }
      }
      param_2 = param_2 + -1;
      puVar4 = puVar4 + 0xc;
    } while (param_2 != 0);
  }
  return;
LAB_006a7ac3:
  uVar8 = uVar8 + 1;
  if (uVar2 <= uVar8) goto LAB_006a7b0d;
  goto LAB_006a7ab1;
}


/* FUN_006a7b70 @ 006a7b70  kind=gamemisc  attributed-by=none  size=327 */

void FUN_006a7b70(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int in_EAX;
  uint uVar3;
  uint *puVar4;
  char cVar5;
  uint uVar6;
  int local_8;
  
  puVar4 = param_1;
  uVar6 = *(uint *)param_1[in_EAX * 10 + 0xf];
  uVar1 = ((uint *)param_1[in_EAX * 10 + 0xf])[2];
  cVar5 = (in_EAX != 0) + '\x01';
  FUN_0068ec40(0x20,*(undefined4 *)(in_EAX * 0xcc + 200 + param_1[6]));
  if ((1 < uVar6) && (uVar3 = *param_1, uVar3 != 0)) {
    uVar2 = *(uint *)(uVar1 + 0xc);
    if (uVar2 <= uVar3) {
      uVar3 = uVar2;
    }
    local_8 = uVar6 - 1;
    do {
      param_1 = (uint *)*puVar4;
      if (*(uint *)(uVar1 + 0x1c) <= *puVar4) {
        param_1 = (uint *)*(uint *)(uVar1 + 0x1c);
      }
      if (0 < (int)((int)param_1 - uVar3)) {
        uVar2 = puVar4[2];
        FUN_006a6f10();
        FUN_006a7990(uVar3 * 0x30 + uVar2,(int)param_1 - uVar3,cVar5);
      }
      uVar6 = uVar6 - 1;
      local_8 = local_8 + -1;
      uVar3 = (uint)param_1;
      uVar1 = uVar1 + 0x10;
    } while (local_8 != 0);
  }
  if (uVar6 == 1) {
    uVar6 = *puVar4;
    uVar1 = puVar4[2];
    FUN_006a6f10();
    FUN_006a7990(uVar1,uVar6,cVar5);
  }
  uVar6 = *puVar4;
  if (uVar6 != 0) {
    puVar4 = (uint *)(puVar4[2] + 0x10);
    do {
      if ((puVar4[4] != 0) && ((*puVar4 & 0x10) == 0)) {
        *puVar4 = *puVar4 | 0x10;
      }
      puVar4 = puVar4 + 0xc;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}


/* FUN_006a7cc0 @ 006a7cc0  kind=gamemisc  attributed-by=none  size=247 */

void FUN_006a7cc0(void)

{
  uint uVar1;
  int *in_EAX;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  int *unaff_ESI;
  int iVar6;
  int local_4;
  
  local_4 = *in_EAX;
  if (local_4 != 0) {
    puVar5 = (uint *)(in_EAX[2] + 0x10);
    do {
      if ((((((char)puVar5[1] == '\x02') || ((char)puVar5[1] == -2)) ||
           (*(char *)((int)puVar5 + 5) == '\x02')) || (*(char *)((int)puVar5 + 5) == -2)) &&
         ((*puVar5 & 0x10) == 0)) {
        iVar6 = *unaff_ESI;
        uVar4 = puVar5[5];
        if (iVar6 != 0) {
          piVar3 = unaff_ESI + 3;
          do {
            iVar2 = uVar4 - piVar3[1];
            if (iVar2 < -unaff_ESI[0x207]) break;
            uVar4 = puVar5[5];
            if (((int)uVar4 <= *piVar3 + unaff_ESI[0x207]) &&
               (((char)unaff_ESI[0x208] != '\0' || (iVar2 <= unaff_ESI[0x206])))) {
              uVar1 = piVar3[4];
              *puVar5 = *puVar5 | 0x30;
              puVar5[7] = uVar1;
            }
            piVar3 = piVar3 + 8;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        iVar6 = unaff_ESI[0x81];
        if (iVar6 != 0) {
          piVar3 = unaff_ESI + iVar6 * 8 + 0x7d;
          do {
            if ((int)(piVar3[-1] - puVar5[5]) < -unaff_ESI[0x207]) break;
            if ((*piVar3 - unaff_ESI[0x207] <= (int)puVar5[5]) &&
               (((char)unaff_ESI[0x208] != '\0' ||
                ((int)(piVar3[-1] - puVar5[5]) < unaff_ESI[0x206])))) {
              uVar4 = piVar3[4];
              *puVar5 = *puVar5 | 0x30;
              puVar5[7] = uVar4;
            }
            piVar3 = piVar3 + -8;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
      }
      local_4 = local_4 + -1;
      puVar5 = puVar5 + 0xc;
    } while (local_4 != 0);
  }
  return;
}


/* FUN_006a7dd0 @ 006a7dd0  kind=gamemisc  attributed-by=none  size=164 */

void FUN_006a7dd0(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int in_EAX;
  int iVar4;
  int *in_ECX;
  int iVar5;
  int *piVar6;
  
  iVar5 = *in_ECX;
  uVar1 = *(undefined4 *)(in_EAX * 0xcc + 200 + in_ECX[6]);
  if (iVar5 != 0) {
    piVar6 = (int *)(in_ECX[2] + 0x2c);
    do {
      piVar2 = (int *)piVar6[-3];
      if (piVar2 != (int *)0x0) {
        if ((piVar6[-7] & 0x200U) == 0) {
          if ((piVar6[-7] & 0x400U) == 0) {
            iVar4 = piVar6[-2] - *piVar2;
            if (iVar4 < 1) {
              iVar4 = FUN_0068ebc0(iVar4,uVar1);
              iVar4 = iVar4 + piVar2[2];
            }
            else {
              iVar3 = piVar2[1];
              if (iVar4 < iVar3) {
                if (iVar3 < 1) goto LAB_006a7e60;
                iVar4 = FUN_0068ea60(iVar4,piVar2[3],iVar3);
                iVar4 = iVar4 + piVar2[2];
              }
              else {
                iVar4 = FUN_0068ebc0(iVar4 - iVar3,uVar1);
                iVar4 = iVar4 + piVar2[3] + piVar2[2];
              }
            }
            goto LAB_006a7e63;
          }
          *piVar6 = piVar2[3] + piVar2[2];
        }
        else {
LAB_006a7e60:
          iVar4 = piVar2[2];
LAB_006a7e63:
          *piVar6 = iVar4;
        }
        piVar6[-7] = piVar6[-7] | 0x20;
      }
      piVar6 = piVar6 + 0xc;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}


/* FUN_006a7e80 @ 006a7e80  kind=gamemisc  attributed-by=none  size=520 */

uint * FUN_006a7e80(void)

{
  undefined4 uVar1;
  uint *puVar2;
  int *in_EAX;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  int in_ECX;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  uint local_54;
  int local_48;
  int local_44;
  uint local_40 [16];
  
  uVar1 = *(undefined4 *)(in_ECX * 0xcc + 200 + in_EAX[6]);
  puVar10 = (uint *)in_EAX[2];
  puVar8 = puVar10 + *in_EAX * 0xc;
  uVar6 = 0;
  local_44 = in_EAX[4];
  puVar5 = puVar10;
  if (puVar10 < puVar8) {
    do {
      if ((puVar5[4] & 0x10) != 0) {
        uVar6 = uVar6 + 1;
      }
      puVar5 = puVar5 + 0xc;
    } while (puVar5 < puVar8);
    if (uVar6 != 0) {
      if (uVar6 < 0x11) {
        puVar3 = local_40;
      }
      else {
        puVar3 = (uint *)FUN_00693a60(in_EAX[4],4,0,uVar6,0,&local_48);
        if (local_48 != 0) {
          return puVar3;
        }
      }
      local_54 = 0;
      puVar5 = puVar10;
      puVar9 = puVar3;
      do {
        puVar2 = puVar9;
        if ((puVar5[4] & 0x10) != 0) {
          while ((puVar3 < puVar2 && ((int)puVar5[9] < *(int *)(puVar2[-1] + 0x24)))) {
            *puVar2 = puVar2[-1];
            puVar2 = puVar2 + -1;
          }
          local_54 = local_54 + 1;
          *puVar2 = (uint)puVar5;
          puVar9 = puVar9 + 1;
        }
        puVar5 = puVar5 + 0xc;
      } while (puVar5 < puVar8);
      uVar6 = (int)puVar8 + (-1 - (int)puVar10);
      puVar5 = (uint *)(uVar6 * -0x55555555);
      iVar11 = uVar6 / 0x30 + 1;
      puVar10 = puVar10 + 3;
      do {
        if ((puVar10[1] & 0x10) == 0) {
          puVar5 = (uint *)*puVar10;
          if (((uint)puVar5 & 2) != 0) {
            if ((((char)puVar10[2] == '\x04') || ((char)puVar10[2] != *(char *)((int)puVar10 + 9)))
               || (((puVar10[1] & 0x40) == 0 && (((uint)puVar5 & 4) == 0)))) goto LAB_006a805c;
            *puVar10 = (uint)puVar5 & 0xfffffffd;
          }
          uVar6 = 0;
          if (local_54 == 0) {
LAB_006a7fc7:
            uVar6 = *puVar3;
            iVar4 = FUN_0068ebc0(puVar10[6] - *(int *)(uVar6 + 0x24),uVar1);
LAB_006a804e:
            puVar5 = (uint *)(iVar4 + *(int *)(uVar6 + 0x2c));
LAB_006a8051:
            puVar10[8] = (uint)puVar5;
          }
          else {
            puVar5 = (uint *)puVar10[6];
            do {
              if ((int)puVar5 < *(int *)(puVar3[uVar6] + 0x24)) break;
              uVar6 = uVar6 + 1;
            } while (uVar6 < local_54);
            if (uVar6 == 0) goto LAB_006a7fc7;
            uVar6 = puVar3[uVar6 - 1];
            uVar7 = local_54;
            if (local_54 == 0) {
LAB_006a8003:
              uVar6 = puVar3[uVar7 - 1];
              iVar4 = FUN_0068ebc0((int)puVar5 - *(int *)(uVar6 + 0x24),uVar1);
              goto LAB_006a804e;
            }
            puVar8 = puVar3 + (local_54 - 1);
            do {
              if (*(int *)(*puVar8 + 0x24) < (int)puVar5) break;
              puVar8 = puVar8 + -1;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
            if (uVar7 == local_54) goto LAB_006a8003;
            uVar7 = puVar3[uVar7];
            if (puVar5 != *(uint **)(uVar6 + 0x24)) {
              if (puVar5 != *(uint **)(uVar7 + 0x24)) {
                iVar4 = FUN_0068ea60((int)puVar5 - *(int *)(uVar6 + 0x24),
                                     *(int *)(uVar7 + 0x2c) - *(int *)(uVar6 + 0x2c),
                                     (int)*(uint **)(uVar7 + 0x24) - *(int *)(uVar6 + 0x24));
                goto LAB_006a804e;
              }
              puVar5 = *(uint **)(uVar7 + 0x2c);
              goto LAB_006a8051;
            }
            puVar10[8] = *(uint *)(uVar6 + 0x2c);
          }
          puVar10[1] = puVar10[1] | 0x20;
        }
LAB_006a805c:
        puVar10 = puVar10 + 0xc;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      if (puVar3 != local_40) {
        puVar5 = (uint *)FUN_00691290(local_44,puVar3);
      }
    }
  }
  return puVar5;
}


/* FUN_006a8090 @ 006a8090  kind=gamemisc  attributed-by=none  size=438 */

void FUN_006a8090(void)

{
  undefined4 uVar1;
  int in_EAX;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int in_ECX;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int local_18;
  int local_14;
  undefined4 local_10;
  
  iVar8 = in_EAX * 0xcc + 4 + *(int *)(in_ECX + 0x18);
  uVar1 = *(undefined4 *)(iVar8 + 0xc4);
  local_18 = *(int *)(iVar8 + 200);
  puVar4 = *(uint **)(in_ECX + 0xc);
  iVar8 = *(int *)(in_ECX + 4);
  do {
    if (iVar8 == 0) {
      return;
    }
    uVar12 = *puVar4;
    uVar10 = puVar4[1] * 0x30 + uVar12;
    uVar5 = 0;
    uVar9 = 0;
    uVar2 = uVar12;
    if (uVar12 < uVar10) {
      do {
        if ((*(byte *)(uVar2 + 0x10) & 0x20) != 0) {
          if (uVar9 == 0) {
            uVar9 = uVar2;
          }
          uVar5 = uVar5 + 1;
        }
        uVar2 = uVar2 + 0x30;
      } while (uVar2 < uVar10);
      uVar2 = uVar9;
      if (uVar5 < 2) {
        if (uVar5 == 1) {
          local_18 = FUN_0068ebc0(*(undefined4 *)(uVar9 + 0x24),uVar1);
          local_18 = *(int *)(uVar9 + 0x2c) - local_18;
        }
        for (; uVar12 < uVar10; uVar12 = uVar12 + 0x30) {
          if (uVar12 != uVar9) {
            iVar3 = FUN_0068ebc0(*(undefined4 *)(uVar12 + 0x24),uVar1);
            *(int *)(uVar12 + 0x2c) = iVar3 + local_18;
          }
        }
      }
      else {
        do {
          do {
            uVar12 = uVar2;
            uVar2 = *(uint *)(uVar12 + 4);
            if (uVar2 == uVar9) goto LAB_006a8234;
          } while ((*(byte *)(uVar2 + 0x10) & 0x20) != 0);
          do {
            uVar2 = *(uint *)(uVar2 + 4);
          } while ((*(byte *)(uVar2 + 0x10) & 0x20) == 0);
          iVar3 = *(int *)(uVar12 + 0x24);
          local_14 = *(int *)(uVar2 + 0x24);
          if (local_14 < iVar3) {
            iVar11 = *(int *)(uVar2 + 0x2c);
            iVar13 = *(int *)(uVar12 + 0x2c);
            iVar6 = iVar3 - local_14;
          }
          else {
            iVar11 = *(int *)(uVar12 + 0x2c);
            iVar13 = *(int *)(uVar2 + 0x2c);
            iVar6 = local_14 - iVar3;
            local_14 = iVar3;
          }
          local_10 = 0x10000;
          if (0 < iVar6) {
            local_10 = FUN_0068ec40(iVar13 - iVar11,iVar6);
          }
          uVar12 = *(uint *)(uVar12 + 4);
          do {
            iVar3 = *(int *)(uVar12 + 0x24) - local_14;
            uVar7 = uVar1;
            if ((iVar3 < 1) || (uVar7 = local_10, iVar3 < iVar6)) {
              iVar3 = FUN_0068ebc0(iVar3,uVar7);
            }
            else {
              iVar3 = FUN_0068ebc0(iVar3 - iVar6,uVar1);
              iVar3 = iVar3 + (iVar13 - iVar11);
            }
            *(int *)(uVar12 + 0x2c) = iVar3 + iVar11;
            uVar12 = *(uint *)(uVar12 + 4);
          } while (uVar12 != uVar2);
        } while (uVar2 != uVar9);
      }
    }
LAB_006a8234:
    iVar8 = iVar8 + -1;
    puVar4 = puVar4 + 2;
  } while( true );
}


/* FUN_006a84c0 @ 006a84c0  kind=gamemisc  attributed-by=none  size=47 */

void FUN_006a84c0(void)

{
  undefined4 *in_EAX;
  
  *in_EAX = 0;
  in_EAX[1] = &LAB_006a6360;
  in_EAX[2] = &LAB_006a6320;
  in_EAX[3] = FUN_006a6370;
  in_EAX[4] = FUN_006a6100;
  in_EAX[5] = FUN_006a61f0;
  in_EAX[6] = &LAB_006a8260;
  return;
}


/* FUN_006a84f0 @ 006a84f0  kind=gamemisc  attributed-by=none  size=47 */

void FUN_006a84f0(void)

{
  undefined4 *in_EAX;
  
  *in_EAX = 0;
  in_EAX[1] = &LAB_006a63c0;
  in_EAX[2] = &LAB_006a6320;
  in_EAX[3] = &LAB_006a63d0;
  in_EAX[4] = FUN_006a6250;
  in_EAX[5] = &LAB_006a62c0;
  in_EAX[6] = &LAB_006a8260;
  return;
}


/* FUN_006a8560 @ 006a8560  kind=gamemisc  attributed-by=none  size=217 */

undefined2 FUN_006a8560(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  
  if ((param_1 != (char *)0x0) && (param_1 < param_2)) {
    pcVar6 = param_1 + 1;
    iVar8 = 0;
    iVar7 = 0x34;
    do {
      iVar2 = iVar7 + iVar8 >> 1;
      pbVar3 = &DAT_00725408 + CONCAT11((&UNK_0072540a)[iVar2 * 2],(&UNK_0072540b)[iVar2 * 2]);
      if ((*pbVar3 & 0x7f) == (int)*param_1) {
        while (pcVar6 < param_2) {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          if ((*pbVar3 & 0x80) == 0) {
            pbVar4 = pbVar3 + 1;
            uVar5 = pbVar3[1] & 0x7f;
            if ((char)pbVar3[1] < '\0') {
              pbVar4 = pbVar3 + 3;
            }
            pbVar4 = pbVar4 + 1;
            while( true ) {
              if ((int)uVar5 < 1) {
                return 0;
              }
              pbVar3 = &DAT_00725408 + CONCAT11(*pbVar4,pbVar4[1]);
              if ((int)cVar1 == (*pbVar3 & 0x7f)) break;
              uVar5 = uVar5 - 1;
              pbVar4 = pbVar4 + 2;
            }
          }
          else {
            pbVar4 = pbVar3 + 1;
            pbVar3 = pbVar3 + 1;
            if ((int)cVar1 != (*pbVar4 & 0x7f)) {
              return 0;
            }
          }
        }
        if ((*pbVar3 & 0x80) != 0) {
          return 0;
        }
        if ((pbVar3[1] & 0x80) == 0) {
          return 0;
        }
        return CONCAT11(pbVar3[2],pbVar3[3]);
      }
      if ((int)(*pbVar3 & 0x7f) < (int)*param_1) {
        iVar8 = iVar2 + 1;
        iVar2 = iVar7;
      }
      iVar7 = iVar2;
    } while (iVar8 < iVar2);
  }
  return 0;
}


/* FUN_006a8640 @ 006a8640  kind=gamemisc  attributed-by=none  size=217 */

uint FUN_006a8640(char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  if (*param_1 == 'u') {
    pbVar7 = (byte *)(param_1 + 1);
    if ((param_1[1] == 'n') && (param_1[2] == 'i')) {
      uVar2 = 0;
      pbVar8 = (byte *)(param_1 + 3);
      iVar6 = 4;
      do {
        uVar5 = (uint)*pbVar8;
        uVar4 = uVar5 - 0x30;
        if (9 < uVar4) {
          if (5 < uVar5 - 0x41) break;
          uVar4 = uVar5 - 0x37;
        }
        if (0xf < uVar4) break;
        iVar6 = iVar6 + -1;
        uVar2 = uVar2 * 0x10 + uVar4;
        pbVar8 = pbVar8 + 1;
      } while (0 < iVar6);
      if (iVar6 == 0) {
        if (*pbVar8 == 0) {
          return uVar2;
        }
        if (*pbVar8 == 0x2e) goto LAB_006a8719;
      }
    }
    uVar2 = 0;
    iVar6 = 6;
    do {
      uVar5 = (uint)*pbVar7;
      uVar4 = uVar5 - 0x30;
      if (9 < uVar4) {
        if (5 < uVar5 - 0x41) break;
        uVar4 = uVar5 - 0x37;
      }
      if (0xf < uVar4) break;
      iVar6 = iVar6 + -1;
      uVar2 = uVar2 * 0x10 + uVar4;
      pbVar7 = pbVar7 + 1;
    } while (0 < iVar6);
    if (iVar6 < 3) {
      if (*pbVar7 == 0) {
        return uVar2;
      }
      if (*pbVar7 == 0x2e) goto LAB_006a8719;
    }
  }
  cVar1 = *param_1;
  pcVar3 = param_1;
  while( true ) {
    if (cVar1 == '\0') {
      uVar2 = FUN_006a8560(param_1,pcVar3);
      return uVar2;
    }
    if ((cVar1 == '.') && (param_1 < pcVar3)) break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 1;
  }
  uVar2 = FUN_006a8560(param_1,pcVar3);
LAB_006a8719:
  return uVar2 | 0x80000000;
}


/* FUN_006a8770 @ 006a8770  kind=gamemisc  attributed-by=none  size=96 */

void FUN_006a8770(undefined4 param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  int unaff_EBX;
  uint uVar5;
  byte *unaff_EDI;
  bool bVar6;
  
  uVar5 = 0;
  do {
    pbVar2 = (byte *)("Delta" + (&DAT_00732a90)[uVar5]);
    pbVar4 = unaff_EDI;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_006a87b0:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_006a87b5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_006a87b0;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_006a87b5:
    if (iVar3 == 0) {
      if (*(int *)(unaff_EBX + uVar5 * 4) == 0) {
        *(undefined4 *)(unaff_EBX + uVar5 * 4) = 1;
        *(undefined4 *)(param_2 + uVar5 * 4) = param_1;
      }
      return;
    }
    uVar5 = uVar5 + 1;
    if (9 < uVar5) {
      return;
    }
  } while( true );
}


/* FUN_006a87e0 @ 006a87e0  kind=gamemisc  attributed-by=none  size=30 */

void FUN_006a87e0(int param_1)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = 0;
  do {
    if (in_ECX == (&DAT_00732a10)[uVar1]) {
      *(undefined4 *)(param_1 + uVar1 * 4) = 2;
      return;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 10);
  return;
}


/* FUN_006a8800 @ 006a8800  kind=gamemisc  attributed-by=none  size=680 */

void FUN_006a8800(undefined4 param_1,int param_2,uint param_3,code *param_4,code *param_5,
                 undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 extraout_EDX;
  uint uVar5;
  int local_70;
  uint local_6c;
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  code *local_5c;
  code *local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_70;
  local_58 = param_4;
  local_5c = param_5;
  local_60 = param_6;
  local_6c = param_3;
  local_64 = param_1;
  local_68 = param_2;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  puVar1 = (undefined4 *)FUN_00693a60(param_1,8,0,param_3 + 10,0,&local_70);
  *(undefined4 **)(param_2 + 0x14) = puVar1;
  if (local_70 != 0) {
    __security_check_cookie(local_4 ^ (uint)&local_70);
    return;
  }
  uVar5 = 0;
  if (local_6c != 0) {
    do {
      iVar2 = (*local_58)(local_60,uVar5);
      if (iVar2 != 0) {
        FUN_006a8770(uVar5,&uStack_2c);
        uVar3 = FUN_006a8640(iVar2);
        if ((uVar3 & 0x7fffffff) != 0) {
          FUN_006a87e0(&local_54);
          *puVar1 = extraout_EDX;
          puVar1[1] = uVar5;
          puVar1 = puVar1 + 2;
        }
        if (local_5c != (code *)0x0) {
          (*local_5c)(local_60,iVar2);
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_6c);
    if (local_54 == 1) {
      *puVar1 = 0x394;
      puVar1[1] = uStack_2c;
      puVar1 = puVar1 + 2;
    }
    if (local_50 == 1) {
      *puVar1 = 0x3a9;
      puVar1[1] = uStack_28;
      puVar1 = puVar1 + 2;
    }
    if (local_4c == 1) {
      *puVar1 = 0x2215;
      puVar1[1] = uStack_24;
      puVar1 = puVar1 + 2;
    }
    if (local_48 == 1) {
      *puVar1 = 0xad;
      puVar1[1] = uStack_20;
      puVar1 = puVar1 + 2;
    }
    if (local_44 == 1) {
      *puVar1 = 0x2c9;
      puVar1[1] = uStack_1c;
      puVar1 = puVar1 + 2;
    }
    if (local_40 == 1) {
      *puVar1 = 0x3bc;
      puVar1[1] = uStack_18;
      puVar1 = puVar1 + 2;
    }
    if (local_3c == 1) {
      *puVar1 = 0x2219;
      puVar1[1] = uStack_14;
      puVar1 = puVar1 + 2;
    }
    if (local_38 == 1) {
      *puVar1 = 0xa0;
      puVar1[1] = uStack_10;
      puVar1 = puVar1 + 2;
    }
    if (local_34 == 1) {
      *puVar1 = 0x21a;
      puVar1[1] = uStack_c;
      puVar1 = puVar1 + 2;
    }
    param_2 = local_68;
    if (local_30 == 1) {
      *puVar1 = 0x21b;
      puVar1[1] = uStack_8;
      puVar1 = puVar1 + 2;
    }
  }
  iVar2 = *(int *)(param_2 + 0x14);
  uVar5 = (int)puVar1 - iVar2 >> 3;
  if (uVar5 == 0) {
    FUN_00691290(local_64,iVar2);
    *(undefined4 *)(param_2 + 0x14) = 0;
    if (local_70 == 0) {
      *(undefined4 *)(param_2 + 0x10) = 0;
      __security_check_cookie(local_4 ^ (uint)&local_70);
      return;
    }
  }
  else {
    if (uVar5 < local_6c >> 1) {
      uVar4 = FUN_00693a60(local_64,8,local_6c,uVar5,iVar2,&local_70);
      *(undefined4 *)(param_2 + 0x14) = uVar4;
      local_70 = 0;
    }
    qsort(*(void **)(param_2 + 0x14),uVar5,8,(_PtFuncCompare *)&LAB_006a8730);
  }
  *(uint *)(param_2 + 0x10) = uVar5;
  __security_check_cookie(local_4 ^ (uint)&local_70);
  return;
}


/* FUN_006a8b20 @ 006a8b20  kind=gamemisc  attributed-by=none  size=166 */

uint FUN_006a8b20(int param_1,uint *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_4;
  
  uVar7 = 0;
  uVar6 = *param_2 + 1;
  local_4 = 0;
  if (*(uint *)(param_1 + 0x10) != 0) {
    iVar2 = *(int *)(param_1 + 0x14);
    uVar5 = *(uint *)(param_1 + 0x10);
    do {
      uVar3 = (uVar5 - uVar7 >> 1) + uVar7;
      uVar4 = *(uint *)(iVar2 + uVar3 * 8);
      if (uVar4 == uVar6) {
        uVar7 = *(uint *)(iVar2 + 4 + uVar3 * 8);
        *param_2 = uVar6;
        return uVar7;
      }
      uVar4 = uVar4 & 0x7fffffff;
      if (uVar4 == uVar6) {
        local_4 = *(uint *)(iVar2 + 4 + uVar3 * 8);
      }
      if (uVar4 < uVar6) {
        uVar7 = uVar3 + 1;
        uVar3 = uVar5;
      }
      uVar5 = uVar3;
    } while (uVar7 < uVar3);
    if (local_4 != 0) {
      *param_2 = uVar6;
      return local_4;
    }
  }
  if (*(uint *)(param_1 + 0x10) <= uVar7) {
    *param_2 = 0;
    return local_4;
  }
  puVar1 = (uint *)(*(int *)(param_1 + 0x14) + uVar7 * 8);
  uVar7 = puVar1[1];
  *param_2 = *puVar1 & 0x7fffffff;
  return uVar7;
}


/* FUN_006a8c20 @ 006a8c20  kind=gamemisc  attributed-by=none  size=166 */

int FUN_006a8c20(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_3;
  param_1[8] = param_3;
  uVar2 = FUN_00693a60(param_3,4,0,param_2,0,&param_3);
  param_1[6] = uVar2;
  if (param_3 == 0) {
    uVar2 = FUN_00693a60(iVar1,4,0,param_2,0,&param_3);
    param_1[7] = uVar2;
    if (param_3 == 0) {
      param_1[4] = param_2;
      param_1[5] = 0;
      *param_1 = 0;
      param_1[2] = 0;
      param_1[1] = 0;
      param_1[3] = 0xdeadbeef;
      param_1[9] = FUN_006a8c20;
      param_1[10] = &LAB_006a8e20;
      param_1[0xb] = &LAB_006a8d60;
      param_1[0xc] = FUN_006a8e80;
      return 0;
    }
  }
  FUN_00691290(iVar1,param_1[6]);
  param_1[6] = 0;
  return param_3;
}


/* FUN_006a8cd0 @ 006a8cd0  kind=gamemisc  attributed-by=none  size=39 */

void FUN_006a8cd0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  
  piVar3 = (int *)in_ECX[6];
  iVar2 = *in_ECX;
  piVar1 = piVar3 + in_ECX[4];
  for (; piVar3 < piVar1; piVar3 = piVar3 + 1) {
    if (*piVar3 != 0) {
      *piVar3 = *piVar3 + (iVar2 - param_1);
    }
  }
  return;
}


/* FUN_006a8d00 @ 006a8d00  kind=gamemisc  attributed-by=none  size=90 */

int FUN_006a8d00(undefined4 param_1)

{
  undefined4 uVar1;
  void *_Src;
  void *_Dst;
  undefined4 *unaff_ESI;
  int local_4;
  
  uVar1 = unaff_ESI[8];
  _Src = (void *)*unaff_ESI;
  _Dst = (void *)FUN_00692230(uVar1,param_1,&local_4);
  *unaff_ESI = _Dst;
  if (local_4 != 0) {
    *unaff_ESI = _Src;
    return local_4;
  }
  if (_Src != (void *)0x0) {
    memcpy(_Dst,_Src,unaff_ESI[2]);
    FUN_006a8cd0(_Src);
    FUN_00691290(uVar1,_Src);
  }
  unaff_ESI[2] = param_1;
  return 0;
}


/* FUN_006a8ed0 @ 006a8ed0  kind=gamemisc  attributed-by=none  size=26 */

void FUN_006a8ed0(void)

{
  char *pcVar1;
  undefined4 *in_EDX;
  char *unaff_ESI;
  
  for (pcVar1 = (char *)*in_EDX; ((pcVar1 < unaff_ESI && (*pcVar1 != '\r')) && (*pcVar1 != '\n'));
      pcVar1 = pcVar1 + 1) {
  }
  *in_EDX = pcVar1;
  return;
}


/* FUN_006a8ef0 @ 006a8ef0  kind=gamemisc  attributed-by=none  size=73 */

void FUN_006a8ef0(void)

{
  char cVar1;
  char *in_EAX;
  char *pcVar2;
  undefined4 *unaff_EDI;
  
  for (pcVar2 = (char *)*unaff_EDI; pcVar2 < in_EAX; pcVar2 = pcVar2 + 1) {
    cVar1 = *pcVar2;
    if ((((cVar1 != ' ') && (cVar1 != '\r')) && (cVar1 != '\n')) &&
       (((cVar1 != '\t' && (cVar1 != '\f')) && (cVar1 != '\0')))) {
      if (cVar1 != '%') break;
      FUN_006a8ed0();
    }
  }
  *unaff_EDI = pcVar2;
  return;
}


/* FUN_006a8f40 @ 006a8f40  kind=gamemisc  attributed-by=none  size=124 */

undefined4 FUN_006a8f40(undefined4 *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  byte *unaff_EDI;
  
  pbVar4 = (byte *)*param_1;
  iVar5 = 0;
  uVar2 = 3;
  pbVar3 = pbVar4;
  if (unaff_EDI <= pbVar4) {
LAB_006a8fb6:
    *param_1 = pbVar4;
    return uVar2;
  }
  do {
    bVar1 = *pbVar3;
    pbVar4 = pbVar3 + 1;
    if (bVar1 == 0x5c) {
      uVar2 = 3;
      if (pbVar4 == unaff_EDI) goto LAB_006a8fb6;
      switch(*pbVar4) {
      case 0x28:
      case 0x29:
      case 0x5c:
      case 0x62:
      case 0x66:
      case 0x6e:
      case 0x72:
      case 0x74:
        pbVar4 = pbVar3 + 2;
        break;
      default:
        uVar6 = 0;
        do {
          uVar2 = 3;
          if (unaff_EDI <= pbVar4) goto LAB_006a8fb6;
          if ((*pbVar4 < 0x30) || (0x37 < *pbVar4)) break;
          uVar6 = uVar6 + 1;
          pbVar4 = pbVar4 + 1;
        } while (uVar6 < 3);
      }
    }
    else if (bVar1 == 0x28) {
      iVar5 = iVar5 + 1;
    }
    else if ((bVar1 == 0x29) && (iVar5 = iVar5 + -1, iVar5 == 0)) {
      uVar2 = 0;
      goto LAB_006a8fb6;
    }
    pbVar3 = pbVar4;
    if (unaff_EDI <= pbVar4) {
      *param_1 = pbVar4;
      return 3;
    }
  } while( true );
}


/* FUN_006a9020 @ 006a9020  kind=gamemisc  attributed-by=none  size=95 */

undefined4 FUN_006a9020(void)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined4 *unaff_EBX;
  byte *unaff_ESI;
  
  pbVar2 = (byte *)*unaff_EBX;
  do {
    pbVar3 = pbVar2;
    pbVar2 = pbVar3 + 1;
    if ((unaff_ESI <= pbVar2) || (FUN_006a8ef0(), unaff_ESI <= pbVar2)) goto LAB_006a9066;
    bVar1 = *pbVar2;
  } while ((((0x2f < bVar1) && (bVar1 < 0x3a)) || ((0x40 < bVar1 && (bVar1 < 0x47)))) ||
          ((0x60 < bVar1 && (bVar1 < 0x67))));
  if (*pbVar2 != 0x3e) {
    *unaff_EBX = pbVar2;
    return 3;
  }
LAB_006a9066:
  *unaff_EBX = pbVar3 + 2;
  return 0;
}


/* FUN_006a9080 @ 006a9080  kind=gamemisc  attributed-by=none  size=153 */

int FUN_006a9080(undefined4 *param_1)

{
  undefined1 *in_EAX;
  int iVar1;
  int iVar2;
  undefined1 *local_4;
  
  local_4 = (undefined1 *)*param_1;
  iVar2 = 0;
  iVar1 = 0;
  if (local_4 < in_EAX) {
    do {
      if (iVar1 != 0) break;
      switch(*local_4) {
      case 0x25:
        FUN_006a8ed0();
        break;
      case 0x28:
        iVar1 = FUN_006a8f40(&local_4);
        break;
      case 0x3c:
        iVar1 = FUN_006a9020();
        break;
      case 0x7b:
        iVar2 = iVar2 + 1;
        break;
      case 0x7d:
        iVar2 = iVar2 + -1;
        if (iVar2 == 0) {
          local_4 = local_4 + 1;
          goto LAB_006a90c4;
        }
      }
      local_4 = local_4 + 1;
    } while (local_4 < in_EAX);
    *param_1 = local_4;
    if (iVar2 != 0) {
      return 3;
    }
  }
  else {
LAB_006a90c4:
    *param_1 = local_4;
  }
  return iVar1;
}


/* FUN_006a9190 @ 006a9190  kind=gamemisc  attributed-by=none  size=295 */

void FUN_006a9190(int *param_1)

{
  char cVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = param_1;
  pcVar2 = (char *)param_1[2];
  iVar4 = 0;
  param_1 = (int *)*param_1;
  FUN_006a8ef0();
  if (pcVar2 <= param_1) goto LAB_006a929a;
  cVar1 = *(char *)param_1;
  if ((cVar1 != '[') && (cVar1 != ']')) {
    if (cVar1 == '{') {
      iVar4 = FUN_006a9080(&param_1);
      goto LAB_006a929a;
    }
    if (cVar1 == '(') {
      iVar4 = FUN_006a8f40(&param_1);
      goto LAB_006a929a;
    }
    if (cVar1 == '<') {
      if (((char *)((int)param_1 + 1) < pcVar2) && (*(char *)((int)param_1 + 1) == '<')) {
        param_1 = (int *)((int)param_1 + 2);
      }
      else {
        iVar4 = FUN_006a9020();
      }
      goto LAB_006a929a;
    }
    if (cVar1 != '>') {
      if (cVar1 == '/') {
        param_1 = (int *)((int)param_1 + 1);
      }
      if (param_1 < pcVar2) {
        iVar4 = 0;
        while ((((((cVar1 = *(char *)param_1, cVar1 != ' ' && (cVar1 != '\r')) && (cVar1 != '\n'))
                 && ((cVar1 != '\t' && (cVar1 != '\f')))) &&
                ((cVar1 != '\0' && ((cVar1 != '/' && (cVar1 != '(')))))) && (cVar1 != ')'))) {
          if ((((cVar1 == '<') || (cVar1 == '>')) || (cVar1 == '[')) ||
             (((cVar1 == ']' || (cVar1 == '{')) ||
              ((cVar1 == '}' ||
               ((cVar1 == '%' || (param_1 = (int *)((int)param_1 + 1), pcVar2 <= param_1))))))))
          break;
        }
      }
      goto LAB_006a929a;
    }
    param_1 = (int *)((int)param_1 + 1);
    if ((pcVar2 <= param_1) || (*(char *)param_1 != '>')) {
      iVar4 = 3;
      goto LAB_006a929a;
    }
  }
  param_1 = (int *)((int)param_1 + 1);
LAB_006a929a:
  pcVar2 = (char *)*piVar3;
  *piVar3 = (int)param_1;
  if (param_1 != (int *)pcVar2) {
    piVar3[3] = iVar4;
    return;
  }
  piVar3[3] = 3;
  return;
}


/* FUN_006a92d0 @ 006a92d0  kind=gamemisc  attributed-by=none  size=281 */

void FUN_006a92d0(undefined4 *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  bool bVar7;
  
  puVar4 = (undefined4 *)param_2;
  *(undefined4 *)((int)param_2 + 8) = 0;
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)((int)param_2 + 4) = 0;
  FUN_006a92c0(param_1);
  param_2 = (char *)*param_1;
  pcVar2 = (char *)param_1[2];
  if (pcVar2 <= param_2) {
    return;
  }
  cVar1 = *param_2;
  *puVar4 = param_2;
  if (cVar1 == '(') {
    puVar4[2] = 2;
    iVar6 = FUN_006a8f40(&param_2);
    bVar7 = iVar6 == 0;
  }
  else {
    if (cVar1 == '[') {
      puVar4[2] = 3;
      iVar6 = 1;
      *param_1 = param_2 + 1;
      FUN_006a92c0(param_1);
      pcVar5 = (char *)*param_1;
      pcVar3 = param_2;
      while ((param_2 = pcVar5, param_2 < pcVar2 && (param_1[3] == 0))) {
        if (*param_2 == '[') {
          iVar6 = iVar6 + 1;
        }
        else if ((*param_2 == ']') && (iVar6 = iVar6 + -1, iVar6 < 1)) {
          param_2 = param_2 + 1;
          goto LAB_006a9333;
        }
        param_2 = pcVar3;
        FUN_006a9190(param_1);
        FUN_006a92c0(param_1);
        pcVar5 = (char *)*param_1;
        pcVar3 = param_2;
      }
      goto LAB_006a9336;
    }
    if (cVar1 == '{') {
      puVar4[2] = 3;
      iVar6 = FUN_006a9080(&param_2);
      bVar7 = iVar6 == 0;
    }
    else {
      puVar4[2] = ((*param_2 != '/') - 1 & 3) + 1;
      FUN_006a9190(param_1);
      param_2 = (char *)*param_1;
      bVar7 = param_1[3] == 0;
    }
  }
  if (bVar7) {
LAB_006a9333:
    puVar4[1] = param_2;
  }
LAB_006a9336:
  if (puVar4[1] == 0) {
    *puVar4 = 0;
    puVar4[2] = 0;
  }
  *param_1 = param_2;
  return;
}


/* FUN_006a93f0 @ 006a93f0  kind=gamemisc  attributed-by=none  size=195 */

void FUN_006a93f0(uint *param_1,int *param_2,int param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int local_c;
  int local_8;
  int local_4;
  
  *param_4 = -1;
  FUN_006a92d0(param_1,&local_c);
  if (local_4 == 3) {
    uVar1 = param_1[2];
    uVar2 = *param_1;
    *param_1 = local_c + 1U;
    param_1[2] = local_8 - 1U;
    piVar3 = param_2;
    if (local_c + 1U < local_8 - 1U) {
      do {
        FUN_006a92d0(param_1,&local_c);
        if (local_4 == 0) break;
        if ((param_2 != (int *)0x0) && (piVar3 < param_2 + param_3 * 3)) {
          *piVar3 = local_c;
          piVar3[1] = local_8;
          piVar3[2] = local_4;
        }
        piVar3 = piVar3 + 3;
      } while (*param_1 < param_1[2]);
    }
    *param_4 = ((int)piVar3 - (int)param_2) / 0xc;
    *param_1 = uVar2;
    param_1[2] = uVar1;
  }
  return;
}


/* FUN_006a94c0 @ 006a94c0  kind=gamemisc  attributed-by=none  size=91 */

undefined4 FUN_006a94c0(void)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 *unaff_EBX;
  char *unaff_ESI;
  
  pcVar2 = (char *)*unaff_EBX;
  pcVar1 = pcVar2 + 3;
  if ((((pcVar1 < unaff_ESI) && (*pcVar2 == 't')) && (pcVar2[1] == 'r')) &&
     ((pcVar2[2] == 'u' && (*pcVar1 == 'e')))) {
    *unaff_EBX = pcVar2 + 5;
    return 1;
  }
  if ((((pcVar2 + 4 < unaff_ESI) && ((*pcVar2 == 'f' && (pcVar2[1] == 'a')))) && (pcVar2[2] == 'l'))
     && ((*pcVar1 == 's' && (pcVar2[4] == 'e')))) {
    pcVar2 = pcVar2 + 6;
  }
  *unaff_EBX = pcVar2;
  return 0;
}


/* FUN_006a9560 @ 006a9560  kind=gamemisc  attributed-by=none  size=139 */

void FUN_006a9560(undefined4 *param_1,int param_2,int param_3,int param_4,char param_5)

{
  int iVar1;
  undefined **ppuVar2;
  undefined4 *puVar3;
  
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 1;
  param_1[1] = param_2;
  param_1[2] = param_4;
  *param_1 = *(undefined4 *)(param_2 + 100);
  if (param_4 != 0) {
    iVar1 = **(int **)(param_4 + 0x9c);
    param_1[3] = iVar1;
    param_1[4] = iVar1 + 0x14;
    param_1[5] = iVar1 + 0x38;
    FUN_0068f020(iVar1);
    param_1[0x13] = *(undefined4 *)(param_3 + 0x28);
    param_1[0x12] = 0;
    if (param_5 != '\0') {
      param_1[0x12] = *(undefined4 *)(*(int *)(param_4 + 0x9c) + 0x24);
    }
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  ppuVar2 = &PTR_FUN_00732e5c;
  puVar3 = param_1 + 0x14;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *ppuVar2;
    ppuVar2 = ppuVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}


/* FUN_006a95f0 @ 006a95f0  kind=gamemisc  attributed-by=none  size=46 */

void FUN_006a95f0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    puVar2 = *(undefined4 **)(param_1 + 0x10);
    *(undefined4 *)(iVar1 + 0x6c) = *puVar2;
    *(undefined4 *)(iVar1 + 0x70) = puVar2[1];
    *(undefined4 *)(iVar1 + 0x74) = puVar2[2];
    *(undefined4 *)(iVar1 + 0x78) = puVar2[3];
    *(undefined4 *)(iVar1 + 0x7c) = puVar2[4];
  }
  return;
}


/* FUN_006a9620 @ 006a9620  kind=gamemisc  attributed-by=none  size=52 */

undefined4 FUN_006a9620(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (*(uint *)(iVar1 + 4) <
        (uint)((int)*(short *)(iVar1 + 0x16) + *(short *)(iVar1 + 0x3a) + param_2)) {
      uVar2 = FUN_00693c40(iVar1,param_2,0);
      return uVar2;
    }
  }
  return 0;
}


/* FUN_006a9700 @ 006a9700  kind=gamemisc  attributed-by=none  size=103 */

int FUN_006a9700(int param_1)

{
  short *psVar1;
  int iVar2;
  
  psVar1 = *(short **)(param_1 + 0x14);
  if (psVar1 == (short *)0x0) {
    return 3;
  }
  if (*(char *)(param_1 + 0x44) == '\0') {
    *psVar1 = *psVar1 + 1;
    return 0;
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if ((*(uint *)(iVar2 + 8) < (uint)(*(short *)(iVar2 + 0x38) + 1 + (int)*(short *)(iVar2 + 0x14)))
     && (iVar2 = FUN_00693c40(iVar2,0,1), iVar2 != 0)) {
    return iVar2;
  }
  if (0 < *psVar1) {
    *(short *)(*(int *)(psVar1 + 6) + -2 + *psVar1 * 2) = psVar1[1] + -1;
  }
  *psVar1 = *psVar1 + 1;
  return 0;
}


/* FUN_006a9770 @ 006a9770  kind=gamemisc  attributed-by=none  size=56 */

int FUN_006a9770(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x40) == 3) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x40) = 3;
  iVar1 = FUN_006a9700(param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_006a96c0(param_1,param_2,param_3);
  }
  return iVar1;
}


/* FUN_006a97b0 @ 006a97b0  kind=gamemisc  attributed-by=none  size=137 */

void FUN_006a97b0(int param_1)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  psVar3 = *(short **)(param_1 + 0x14);
  if (psVar3 != (short *)0x0) {
    sVar1 = *psVar3;
    if (sVar1 < 2) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(short *)(*(int *)(psVar3 + 6) + -4 + sVar1 * 2) + 1;
    }
    sVar2 = psVar3[1];
    if (1 < sVar2) {
      iVar4 = *(int *)(psVar3 + 2);
      iVar6 = (int)sVar2;
      if (((*(int *)(iVar4 + iVar5 * 8) == *(int *)(iVar4 + -8 + iVar6 * 8)) &&
          (*(int *)(iVar4 + 4 + iVar5 * 8) == *(int *)(iVar4 + -4 + iVar6 * 8))) &&
         (*(char *)(*(int *)(psVar3 + 4) + -1 + iVar6) == '\x01')) {
        psVar3[1] = sVar2 + -1;
      }
    }
    if (0 < sVar1) {
      sVar2 = psVar3[1];
      if (iVar5 == sVar2 + -1) {
        *psVar3 = sVar1 + -1;
        psVar3[1] = sVar2 + -1;
        return;
      }
      *(short *)(*(int *)(psVar3 + 6) + -2 + sVar1 * 2) = sVar2 + -1;
    }
  }
  return;
}


/* FUN_006a9840 @ 006a9840  kind=gamemisc  attributed-by=none  size=133 */

uint FUN_006a9840(void)

{
  byte bVar1;
  int in_EAX;
  byte *pbVar2;
  uint uVar3;
  uint in_ECX;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  if (0xff < in_ECX) {
    return 0xffffffff;
  }
  pbVar2 = (byte *)(**(code **)(*(int *)(in_EAX + 0x544) + 0x14))
                             (*(undefined2 *)
                               (*(int *)(*(int *)(in_EAX + 0x544) + 0x18) + in_ECX * 2));
  uVar3 = 0;
  if (*(uint *)(in_EAX + 0x548) != 0) {
    puVar7 = *(undefined4 **)(in_EAX + 0x54c);
    do {
      pbVar4 = (byte *)*puVar7;
      if ((pbVar4 != (byte *)0x0) && (pbVar6 = pbVar2, *pbVar4 == *pbVar2)) {
        do {
          bVar1 = *pbVar4;
          bVar8 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_006a98a7:
            iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_006a98ac;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar8 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_006a98a7;
          pbVar4 = pbVar4 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_006a98ac:
        if (iVar5 == 0) {
          return uVar3;
        }
      }
      uVar3 = uVar3 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar3 < *(uint *)(in_EAX + 0x548));
  }
  return 0xffffffff;
}


/* FUN_006a98e0 @ 006a98e0  kind=gamemisc  attributed-by=none  size=172 */

undefined4
FUN_006a98e0(void *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  
  memset(param_1,0,0x5dc);
  iVar1 = FUN_0068fe10(*(undefined4 *)(param_2 + 0x60),"postscript-cmaps");
  if (iVar1 == 0) {
    return 7;
  }
  *(int *)((int)param_1 + 0x544) = iVar1;
  FUN_006a9560(param_1,param_2,param_3,param_4,param_7);
  *(undefined4 *)((int)param_1 + 0x548) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((int)param_1 + 0x54c) = param_5;
  *(undefined4 *)((int)param_1 + 0x5b8) = param_6;
  *(undefined4 *)((int)param_1 + 0x5bc) = param_8;
  *(undefined4 *)((int)param_1 + 0x5c0) = param_9;
  *(code **)((int)param_1 + 0x5c4) = FUN_006a98e0;
  *(undefined1 **)((int)param_1 + 0x5c8) = &LAB_006a9990;
  *(code **)((int)param_1 + 0x5cc) = FUN_006aabd0;
  return 0;
}


/* FUN_006a99a0 @ 006a99a0  kind=gamemisc  attributed-by=none  size=55 */

void FUN_006a99a0(int param_1)

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  
  iVar1 = *in_EAX;
  iVar2 = *(int *)(iVar1 + 0x1e4);
  in_EAX[6] = *(int *)(iVar1 + 0x1a0);
  in_EAX[7] = *(int *)(iVar1 + 0x1a4);
  in_EAX[5] = *(int *)(iVar2 + 0x14);
  if (param_1 != 0) {
    in_EAX[4] = *(int *)(iVar2 + 0x1c);
    return;
  }
  in_EAX[4] = *(int *)(iVar2 + 0x18);
  return;
}


/* FUN_006a9a00 @ 006a9a00  kind=gamemisc  attributed-by=none  size=140 */

uint FUN_006a9a00(int param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  uint uVar7;
  bool bVar8;
  
  if (0xff < param_2) {
    return 0;
  }
  pbVar2 = (byte *)(**(code **)(param_1 + 0x14))
                             (*(undefined2 *)(*(int *)(param_1 + 0x10) + param_2 * 2));
  uVar7 = 0;
  if (*(uint *)(param_1 + 0x18) == 0) {
    return 0;
  }
  puVar6 = *(undefined4 **)(param_1 + 0x1c);
  do {
    pbVar3 = (byte *)*puVar6;
    if ((pbVar3 != (byte *)0x0) && (pbVar5 = pbVar2, *pbVar3 == *pbVar2)) {
      do {
        bVar1 = *pbVar3;
        bVar8 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_006a9a62:
          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_006a9a67;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar8 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_006a9a62;
        pbVar3 = pbVar3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_006a9a67:
      if (iVar4 == 0) {
        return uVar7;
      }
    }
    uVar7 = uVar7 + 1;
    puVar6 = puVar6 + 1;
    if (*(uint *)(param_1 + 0x18) <= uVar7) {
      return 0;
    }
  } while( true );
}


/* FUN_006a9b80 @ 006a9b80  kind=gamemisc  attributed-by=none  size=63 */

short FUN_006a9b80(int param_1,uint *param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  short *psVar4;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  sVar1 = 0;
  uVar2 = *param_2 + 1;
  if (*param_2 + 1 < uVar3) {
    uVar2 = uVar3;
  }
  uVar3 = *(int *)(param_1 + 0x14) + uVar3;
  if (uVar2 < uVar3) {
    psVar4 = (short *)(*(int *)(param_1 + 0x18) + uVar2 * 2);
    do {
      sVar1 = *psVar4;
      if (sVar1 != 0) goto LAB_006a9bb9;
      uVar2 = uVar2 + 1;
      psVar4 = psVar4 + 1;
    } while (uVar2 < uVar3);
  }
  uVar2 = 0;
LAB_006a9bb9:
  *param_2 = uVar2;
  return sVar1;
}


/* FUN_006a9c50 @ 006a9c50  kind=gamemisc  attributed-by=none  size=102 */

uint FUN_006a9c50(void)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 *in_EDX;
  
  if (0 < (int)in_EDX[3]) {
    return 0x3b;
  }
  do {
    pbVar1 = (byte *)*in_EDX;
    if ((byte *)in_EDX[2] <= pbVar1) {
      in_EDX[3] = 3;
      return 0xffffffff;
    }
    uVar2 = (uint)*pbVar1;
    *in_EDX = pbVar1 + 1;
  } while ((uVar2 == 0x20) || (uVar2 == 9));
  if ((uVar2 == 0xd) || (uVar2 == 10)) {
    in_EDX[3] = 2;
  }
  else {
    if (uVar2 == 0x3b) {
      in_EDX[3] = 1;
      return 0x3b;
    }
    if ((uVar2 == 0xffffffff) || (uVar2 == 0x1a)) {
      in_EDX[3] = 3;
      return uVar2;
    }
  }
  return uVar2;
}


/* FUN_006a9cc0 @ 006a9cc0  kind=gamemisc  attributed-by=none  size=99 */

int FUN_006a9cc0(void)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int *extraout_EDX;
  
  FUN_006a9c50();
  if (0 < extraout_EDX[3]) {
    return 0;
  }
  iVar2 = *extraout_EDX + -1;
  while (pbVar1 = (byte *)*extraout_EDX, pbVar1 < (byte *)extraout_EDX[2]) {
    uVar3 = (uint)*pbVar1;
    *extraout_EDX = (int)(pbVar1 + 1);
    if ((uVar3 == 0x20) || (uVar3 == 9)) {
      return iVar2;
    }
    if ((uVar3 == 0xd) || (uVar3 == 10)) {
      extraout_EDX[3] = 2;
      return iVar2;
    }
    if (uVar3 == 0x3b) {
      extraout_EDX[3] = 1;
      return iVar2;
    }
    if ((uVar3 == 0xffffffff) || (uVar3 == 0x1a)) break;
  }
  extraout_EDX[3] = 3;
  return iVar2;
}


/* FUN_006a9d30 @ 006a9d30  kind=gamemisc  attributed-by=none  size=74 */

int FUN_006a9d30(void)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  int *extraout_EDX;
  
  FUN_006a9c50();
  if (1 < extraout_EDX[3]) {
    return 0;
  }
  iVar1 = *extraout_EDX;
  while (pbVar2 = (byte *)*extraout_EDX, pbVar2 < (byte *)extraout_EDX[2]) {
    uVar3 = (uint)*pbVar2;
    *extraout_EDX = (int)(pbVar2 + 1);
    if ((uVar3 == 0xd) || (uVar3 == 10)) {
      extraout_EDX[3] = 2;
      return iVar1 + -1;
    }
    if ((uVar3 == 0xffffffff) || (uVar3 == 0x1a)) break;
  }
  extraout_EDX[3] = 3;
  return iVar1 + -1;
}


/* FUN_006a9d80 @ 006a9d80  kind=gamemisc  attributed-by=none  size=130 */

void FUN_006a9d80(char param_1,int *param_2)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined8 uVar3;
  
  iVar2 = *(int *)(in_EAX + 4);
  if (param_1 == '\0') {
    do {
      iVar1 = *(int *)(iVar2 + 0xc);
      while (iVar1 < 1) {
        FUN_006a9cc0();
        iVar2 = extraout_EDX_00;
        iVar1 = *(int *)(extraout_EDX_00 + 0xc);
      }
      *(undefined4 *)(iVar2 + 0xc) = 0;
      uVar3 = FUN_006a9cc0();
      iVar2 = (int)((ulonglong)uVar3 >> 0x20);
    } while ((((int)uVar3 == 0) && (*(int *)(iVar2 + 0xc) < 3)) && (0 < *(int *)(iVar2 + 0xc)));
  }
  else {
    do {
      if (*(int *)(iVar2 + 0xc) < 2) {
        FUN_006a9d30();
        iVar2 = extraout_EDX;
      }
      *(undefined4 *)(iVar2 + 0xc) = 0;
      uVar3 = FUN_006a9cc0();
      iVar2 = (int)((ulonglong)uVar3 >> 0x20);
    } while ((((int)uVar3 == 0) && (*(int *)(iVar2 + 0xc) < 3)) && (1 < *(int *)(iVar2 + 0xc)));
  }
  if (param_2 != (int *)0x0) {
    if ((int)uVar3 != 0) {
      *param_2 = (*(int *)((ulonglong)uVar3 >> 0x20) - (int)uVar3) + -1;
      return;
    }
    *param_2 = 0;
  }
  return;
}


/* FUN_006a9e10 @ 006a9e10  kind=gamemisc  attributed-by=none  size=72 */

int FUN_006a9e10(void)

{
  int iVar1;
  size_t unaff_EBX;
  int iVar2;
  char *unaff_EDI;
  
  iVar2 = 0;
  do {
    if (*(&PTR_s_Ascender_00732ff8)[iVar2] == *unaff_EDI) {
      for (; iVar2 < 0x4a; iVar2 = iVar2 + 1) {
        if (*(&PTR_s_Ascender_00732ff8)[iVar2] != *unaff_EDI) {
          return 0x4b;
        }
        iVar1 = strncmp((&PTR_s_Ascender_00732ff8)[iVar2],unaff_EDI,unaff_EBX);
        if (iVar1 == 0) {
          return iVar2;
        }
      }
    }
    iVar2 = iVar2 + 1;
    if (0x49 < iVar2) {
      return 0x4b;
    }
  } while( true );
}


/* FUN_006a9ed0 @ 006a9ed0  kind=gamemisc  attributed-by=none  size=37 */

int FUN_006a9ed0(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1 << 0x10 | param_1[1];
  uVar2 = *param_2 << 0x10 | param_2[1];
  if (uVar2 < uVar1) {
    return 1;
  }
  return -(uint)(uVar1 < uVar2);
}


/* FUN_006a9f00 @ 006a9f00  kind=gamemisc  attributed-by=none  size=126 */

undefined4 FUN_006a9f00(undefined4 param_1,int param_2)

{
  int in_EAX;
  int iVar1;
  undefined1 local_4 [4];
  
  while (in_EAX != 0) {
    in_EAX = in_EAX + -1;
    iVar1 = FUN_006a9d80(1,0);
    if (iVar1 == 0) {
      return 0xa0;
    }
  }
  iVar1 = FUN_006a9d80(1,local_4);
  while( true ) {
    if (iVar1 == 0) {
      return 0xa0;
    }
    iVar1 = FUN_006a9e10();
    if ((iVar1 == param_2) || (iVar1 == 0x14)) break;
    iVar1 = FUN_006a9d80(1,local_4);
  }
  return 0;
}


/* FUN_006a9f80 @ 006a9f80  kind=gamemisc  attributed-by=none  size=145 */

int FUN_006a9f80(undefined4 *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  byte *unaff_ESI;
  int unaff_EDI;
  bool bVar5;
  
  pbVar4 = (byte *)*param_1;
  iVar3 = 0;
  bVar5 = false;
  if ((pbVar4 != unaff_ESI) && (unaff_EDI - 2U < 0x23)) {
    bVar1 = *pbVar4;
    if ((bVar1 == 0x2d) || (bVar1 == 0x2b)) {
      bVar5 = bVar1 == 0x2d;
      pbVar4 = pbVar4 + 1;
      if (pbVar4 == unaff_ESI) {
        return 0;
      }
    }
    while (((((((pbVar4 < unaff_ESI && (bVar1 = *pbVar4, bVar1 != 0x20)) && (bVar1 != 0xd)) &&
              ((bVar1 != 10 && (bVar1 != 9)))) &&
             ((bVar1 != 0xc && ((bVar1 != 0 && (bVar1 < 0x80)))))) &&
            (cVar2 = (&DAT_00733120)[bVar1 & 0x7f], -1 < cVar2)) && (cVar2 < unaff_EDI))) {
      pbVar4 = pbVar4 + 1;
      iVar3 = iVar3 * unaff_EDI + (int)cVar2;
    }
    if (bVar5) {
      iVar3 = -iVar3;
    }
    *param_1 = pbVar4;
    return iVar3;
  }
  return 0;
}


/* FUN_006aa050 @ 006aa050  kind=gamemisc  attributed-by=none  size=349 */

int FUN_006aa050(uint *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  pbVar4 = (byte *)*param_1;
  iVar6 = 0;
  bVar7 = false;
  if (pbVar4 == param_2) {
    return 0;
  }
  bVar1 = *pbVar4;
  if ((bVar1 == 0x2d) || (bVar1 == 0x2b)) {
    bVar7 = bVar1 == 0x2d;
    pbVar4 = pbVar4 + 1;
    if (pbVar4 == param_2) {
      return 0;
    }
  }
  if (*pbVar4 == 0x2e) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_006aa020();
    iVar2 = iVar2 << 0x10;
  }
  iVar5 = 1;
  if ((param_2 <= pbVar4) || (iVar5 = 1, iVar3 = 1, *pbVar4 != 0x2e)) {
LAB_006aa11f:
    if ((pbVar4 + 1 < param_2) && ((*pbVar4 == 0x65 || (*pbVar4 == 0x45)))) {
      iVar3 = FUN_006aa020();
      param_3 = param_3 + iVar3;
      pbVar4 = pbVar4 + 1;
    }
    for (; 0 < param_3; param_3 = param_3 + -1) {
      iVar2 = iVar2 * 10;
      iVar6 = iVar6 * 10;
    }
    if (param_3 < 0) {
      param_3 = -param_3;
      do {
        iVar2 = iVar2 / 10;
        iVar5 = iVar5 * 10;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    if (iVar6 != 0) {
      iVar6 = FUN_0068ec40(iVar6,iVar5);
      iVar2 = iVar2 + iVar6;
    }
    if (bVar7) {
      iVar2 = -iVar2;
    }
    *param_1 = (uint)pbVar4;
    return iVar2;
  }
joined_r0x006aa0c3:
  iVar5 = iVar3;
  pbVar4 = pbVar4 + 1;
  if ((((pbVar4 < param_2) &&
       ((((bVar1 = *pbVar4, bVar1 != 0x20 && (bVar1 != 0xd)) && (bVar1 != 10)) &&
        ((bVar1 != 9 && (bVar1 != 0xc)))))) && (bVar1 != 0)) &&
     ((bVar1 < 0x80 && ((byte)(&DAT_00733120)[bVar1 & 0x7f] < 10)))) {
    if ((iVar2 != 0) || (param_3 < 1)) goto LAB_006aa103;
    param_3 = param_3 + -1;
    goto LAB_006aa111;
  }
  goto LAB_006aa11f;
LAB_006aa103:
  iVar3 = iVar5;
  if (iVar5 < 10000000) {
    iVar5 = iVar5 * 10;
LAB_006aa111:
    iVar6 = (int)(char)(&DAT_00733120)[bVar1 & 0x7f] + iVar6 * 10;
    iVar3 = iVar5;
  }
  goto joined_r0x006aa0c3;
}


/* FUN_006aa1c0 @ 006aa1c0  kind=gamemisc  attributed-by=none  size=156 */

int FUN_006aa1c0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar1 = *param_1;
  uVar5 = 0;
  iVar2 = 0;
  uVar4 = 1;
  uVar6 = in_ECX * 2;
  if ((uint)(param_2 - iVar1) < (uint)(in_ECX * 2)) {
    uVar6 = param_2 - iVar1;
  }
  if (uVar6 != 0) {
    do {
      uVar3 = (uint)*(byte *)(iVar1 + uVar5);
      if (((((uVar3 != 0x20) && (uVar3 != 0xd)) && (uVar3 != 10)) &&
          ((uVar3 != 9 && (uVar3 != 0xc)))) && (uVar3 != 0)) {
        if ((0x7f < uVar3) || (0xf < (uint)(int)(char)(&DAT_00733120)[uVar3 & 0x7f])) break;
        uVar4 = uVar4 << 4 | (int)(char)(&DAT_00733120)[uVar3 & 0x7f];
        if ((uVar4 & 0x100) != 0) {
          *(char *)(iVar2 + param_3) = (char)uVar4;
          iVar2 = iVar2 + 1;
          uVar4 = 1;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    if (uVar4 != 1) {
      *(char *)(iVar2 + param_3) = (char)uVar4 << 4;
      iVar2 = iVar2 + 1;
    }
  }
  *param_1 = iVar1 + uVar5;
  return iVar2;
}


/* FUN_006aa260 @ 006aa260  kind=gamemisc  attributed-by=none  size=119 */

uint FUN_006aa260(int *param_1,int param_2,uint param_3,ushort *param_4)

{
  int iVar1;
  byte *in_EAX;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar1 = *param_1;
  uVar3 = *param_4;
  uVar4 = (uint)uVar3;
  if ((uint)(param_2 - iVar1) < param_3) {
    param_3 = param_2 - iVar1;
  }
  uVar5 = 0;
  if (param_3 != 0) {
    iVar6 = iVar1 - (int)in_EAX;
    uVar2 = param_3;
    do {
      uVar5 = (in_EAX[iVar6] + uVar4) * -0x3193 + 0x58bf;
      *in_EAX = (byte)(uVar4 >> 8) ^ in_EAX[iVar6];
      uVar4 = uVar5 & 0xffff;
      uVar3 = (ushort)uVar5;
      in_EAX = in_EAX + 1;
      uVar2 = uVar2 - 1;
      uVar5 = param_3;
    } while (uVar2 != 0);
  }
  *param_1 = iVar1 + param_3;
  *param_4 = uVar3;
  return uVar5;
}


/* FUN_006aa2e0 @ 006aa2e0  kind=gamemisc  attributed-by=none  size=246 */

int FUN_006aa2e0(undefined4 *param_1,char *param_2,int param_3,undefined4 *param_4)

{
  char *pcVar1;
  char *pcVar2;
  undefined2 extraout_var;
  char cVar3;
  undefined4 *puVar4;
  char *local_c;
  int local_8;
  undefined4 *local_4;
  
  pcVar1 = param_2;
  local_c = (char *)*param_1;
  local_8 = 0;
  if (param_2 <= local_c) goto LAB_006aa3c7;
  cVar3 = '\0';
  if (*local_c == '[') {
    cVar3 = ']';
LAB_006aa317:
    local_c = local_c + 1;
  }
  else if (*local_c == '{') {
    cVar3 = '}';
    goto LAB_006aa317;
  }
  if (local_c < param_2) {
    local_4 = param_4;
    while (FUN_006a8ef0(), pcVar2 = local_c, local_c < pcVar1) {
      if (*local_c == cVar3) {
        *param_1 = local_c + 1;
        return local_8;
      }
      if (param_4 == (undefined4 *)0x0) {
        puVar4 = &param_2;
      }
      else {
        puVar4 = local_4;
        if (param_3 <= local_8) break;
      }
      FUN_006aa050(&local_c,pcVar1,0);
      *(undefined2 *)puVar4 = extraout_var;
      if (pcVar2 == local_c) {
        local_8 = -1;
        break;
      }
      local_8 = local_8 + 1;
      local_4 = (undefined4 *)((int)local_4 + 2);
      if (cVar3 == '\0') break;
      if (pcVar1 <= local_c) {
        *param_1 = local_c;
        return local_8;
      }
    }
  }
LAB_006aa3c7:
  *param_1 = local_c;
  return local_8;
}


/* FUN_006aa3e0 @ 006aa3e0  kind=gamemisc  attributed-by=none  size=230 */

int FUN_006aa3e0(undefined4 *param_1,char *param_2,int param_3,undefined4 *param_4,
                undefined4 param_5)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  char *local_c;
  undefined4 *local_8;
  undefined4 local_4;
  
  pcVar1 = param_2;
  local_c = (char *)*param_1;
  iVar4 = 0;
  if (param_2 <= local_c) goto LAB_006aa4b8;
  param_2._0_1_ = '\0';
  if (*local_c == '[') {
    param_2._0_1_ = ']';
LAB_006aa419:
    local_c = local_c + 1;
  }
  else if (*local_c == '{') {
    param_2._0_1_ = '}';
    goto LAB_006aa419;
  }
  if (local_c < pcVar1) {
    local_8 = param_4;
    while (FUN_006a8ef0(), pcVar2 = local_c, local_c < pcVar1) {
      if (*local_c == (char)param_2) {
        *param_1 = local_c + 1;
        return iVar4;
      }
      if (param_4 == (undefined4 *)0x0) {
        puVar5 = &local_4;
      }
      else {
        puVar5 = local_8;
        if (param_3 <= iVar4) break;
      }
      uVar3 = FUN_006aa050(&local_c,pcVar1,param_5);
      *puVar5 = uVar3;
      if (pcVar2 == local_c) {
        iVar4 = -1;
        break;
      }
      local_8 = local_8 + 1;
      iVar4 = iVar4 + 1;
      if ((char)param_2 == '\0') break;
      if (pcVar1 <= local_c) {
        *param_1 = local_c;
        return iVar4;
      }
    }
  }
LAB_006aa4b8:
  *param_1 = local_c;
  return iVar4;
}


/* FUN_006aa4d0 @ 006aa4d0  kind=gamemisc  attributed-by=none  size=314 */

void FUN_006aa4d0(int *param_1,int param_2,int param_3,int param_4)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  void *pvVar5;
  size_t _Size;
  void *local_44;
  void *local_40;
  int *local_3c;
  int local_38;
  int *local_34;
  int local_30;
  int local_2c;
  int iStack_28;
  int local_24;
  void *local_20;
  void *local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  int local_c;
  undefined4 uStack_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_44;
  local_34 = param_1;
  local_38 = param_2;
  local_24 = param_3;
  FUN_006a92d0(param_1,&local_20);
  if (local_18 == 0) {
LAB_006aa741:
    __security_check_cookie(local_4 ^ (uint)&local_44);
    return;
  }
  iVar3 = 0;
  local_30 = 1;
  local_44 = local_20;
  local_40 = local_1c;
  iVar2 = local_18;
  if (*(int *)(local_38 + 8) == 7) {
    local_2c = param_1[2];
    local_3c = (int *)*param_1;
    *param_1 = (int)local_20 + 1;
    param_1[2] = (int)local_1c + -1;
    FUN_006a92d0(param_1,&local_14);
    *param_1 = (int)local_3c;
    param_1[2] = local_2c;
    iVar2 = local_c;
  }
  if (iVar2 == 3) {
    if (param_4 == 0) goto LAB_006aa741;
    local_44 = (void *)((int)local_20 + 1);
    local_1c = (void *)((int)local_1c + -1);
    local_30 = param_4;
    iVar3 = 1;
    local_40 = local_1c;
    if (param_4 == 0) {
LAB_006aa6da:
      __security_check_cookie(local_4 ^ (uint)&local_44);
      return;
    }
  }
  local_3c = (int *)(local_24 + iVar3 * 4);
  pvVar5 = local_1c;
LAB_006aa5b0:
  piVar4 = (int *)(*local_3c + *(int *)(local_38 + 0x10));
  FUN_006a8ef0();
  switch(*(undefined4 *)(local_38 + 8)) {
  case 1:
    iVar2 = FUN_006a94c0();
    param_1 = local_34;
    pvVar5 = local_40;
    break;
  case 2:
    iVar2 = FUN_006aa020();
    param_1 = local_34;
    break;
  case 3:
    iVar2 = FUN_006aa050(&local_44,pvVar5,0);
    break;
  case 4:
    iVar2 = FUN_006aa050(&local_44,pvVar5,3);
    break;
  case 5:
  case 6:
    iVar2 = param_1[4];
    param_1 = local_34;
    pvVar1 = local_40;
    if (local_40 <= local_44) goto LAB_006aa6c2;
    if (local_18 == 4) {
      iVar3 = -1;
    }
    else {
      if (local_18 != 2) goto LAB_006aa741;
      iVar3 = -2;
    }
    _Size = (int)pvVar5 + (iVar3 - (int)local_44);
    pvVar5 = (void *)((int)local_44 + 1);
    local_44 = pvVar5;
    if (*piVar4 != 0) {
      FUN_00691290(iVar2,*piVar4);
      *piVar4 = 0;
    }
    pvVar1 = (void *)FUN_00692230(iVar2,_Size + 1,&iStack_28);
    if (iStack_28 != 0) goto LAB_006aa6da;
    memcpy(pvVar1,pvVar5,_Size);
    *(undefined1 *)((int)pvVar1 + _Size) = 0;
    *piVar4 = (int)pvVar1;
    param_1 = local_34;
    pvVar1 = local_40;
    goto LAB_006aa6c2;
  case 7:
    iVar2 = FUN_006aa3e0(&local_44,pvVar5,4,&local_14,0);
    if (-1 < iVar2) {
      iVar2 = FUN_0068e970(local_14);
      *piVar4 = iVar2;
      iVar2 = FUN_0068e970(uStack_10);
      piVar4[1] = iVar2;
      iVar2 = FUN_0068e970(local_c);
      piVar4[2] = iVar2;
      iVar2 = FUN_0068e970(uStack_8);
      piVar4[3] = iVar2;
      pvVar1 = pvVar5;
      goto LAB_006aa6c2;
    }
  default:
    goto LAB_006aa741;
  }
  pvVar1 = pvVar5;
  if (*(char *)(local_38 + 0x14) == '\x01') {
    *(char *)piVar4 = (char)iVar2;
  }
  else if (*(char *)(local_38 + 0x14) == '\x02') {
    *(short *)piVar4 = (short)iVar2;
  }
  else {
    *piVar4 = iVar2;
  }
LAB_006aa6c2:
  local_3c = local_3c + 1;
  local_30 = local_30 + -1;
  pvVar5 = pvVar1;
  if (local_30 == 0) goto LAB_006aa6da;
  goto LAB_006aa5b0;
}


/* FUN_006aa8d0 @ 006aa8d0  kind=gamemisc  attributed-by=none  size=119 */

undefined4
FUN_006aa8d0(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,char param_5)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)param_1;
  FUN_006a92c0(param_1);
  cVar2 = param_5;
  param_1 = (char *)*puVar1;
  if ((char *)puVar1[2] <= param_1) {
    return 0;
  }
  if (param_5 != '\0') {
    if (*param_1 != '<') {
      return 3;
    }
    param_1 = param_1 + 1;
  }
  uVar3 = FUN_006aa1c0(&param_1,(char *)puVar1[2],param_2);
  *param_4 = uVar3;
  if (cVar2 != '\0') {
    if ((param_1 < (char *)puVar1[2]) && (*param_1 != '>')) {
      return 3;
    }
    param_1 = param_1 + 1;
  }
  *puVar1 = param_1;
  return 0;
}


/* FUN_006aa9f0 @ 006aa9f0  kind=gamemisc  attributed-by=none  size=468 */

int FUN_006aa9f0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int in_EAX;
  int iVar8;
  int in_ECX;
  int in_EDX;
  int local_10;
  int local_4;
  
  if ((*(char *)(in_EDX + 0x5d8) != '\0') ||
     ((param_2 = param_2 + *(int *)(in_EDX + 0x20), *(int *)(in_EDX + 0x54c) == 0 &&
      (*(int *)(*(int *)(*(int *)(in_EDX + 4) + 0x80) + 0x34) == 0)))) {
    return 0xa0;
  }
  local_10 = in_EAX;
  if (*(int *)(*(int *)(*(int *)(in_EDX + 4) + 0x80) + 0x34) == 0) {
    in_ECX = FUN_006a9840();
    local_10 = FUN_006a9840();
  }
  if ((-1 < in_ECX) && (-1 < local_10)) {
    if (*(char *)(in_EDX + 0x45) == '\0') {
      FUN_0068f0a0(*(undefined4 *)(in_EDX + 0xc));
      *(undefined1 *)(in_EDX + 0x5d8) = 1;
      local_4 = FUN_006a98d0();
      *(undefined1 *)(in_EDX + 0x5d8) = 0;
      if (local_4 == 0) {
        uVar4 = *(undefined4 *)(in_EDX + 0x28);
        uVar5 = *(undefined4 *)(in_EDX + 0x2c);
        uVar6 = *(undefined4 *)(in_EDX + 0x20);
        uVar7 = *(undefined4 *)(in_EDX + 0x24);
        *(undefined4 *)(in_EDX + 0x20) = 0;
        *(undefined4 *)(in_EDX + 0x24) = 0;
        *(int *)(in_EDX + 0x18) = param_2 - param_1;
        *(undefined4 *)(in_EDX + 0x1c) = param_3;
        *(undefined1 *)(in_EDX + 0x5d8) = 1;
        local_4 = FUN_006a98d0();
        *(undefined1 *)(in_EDX + 0x5d8) = 0;
        if (local_4 == 0) {
          *(undefined4 *)(in_EDX + 0x20) = uVar6;
          *(undefined4 *)(in_EDX + 0x24) = uVar7;
          *(undefined4 *)(in_EDX + 0x28) = uVar4;
          *(undefined4 *)(in_EDX + 0x2c) = uVar5;
          *(undefined4 *)(in_EDX + 0x18) = 0;
          *(undefined4 *)(in_EDX + 0x1c) = 0;
        }
      }
    }
    else {
      iVar1 = *(int *)(in_EDX + 8);
      iVar2 = **(int **)(iVar1 + 0x9c);
      local_4 = FUN_00693db0(iVar2,2);
      if (local_4 == 0) {
        piVar3 = *(int **)(iVar2 + 0x58);
        *(undefined2 *)(piVar3 + 1) = 0x202;
        *piVar3 = in_ECX;
        piVar3[2] = 0;
        piVar3[3] = 0;
        piVar3[8] = local_10;
        *(undefined2 *)(piVar3 + 9) = 2;
        iVar8 = FUN_0068e970(param_2 - param_1);
        piVar3[10] = iVar8 >> 0x10;
        iVar8 = FUN_0068e970(param_3);
        piVar3[0xb] = iVar8 >> 0x10;
        *(undefined4 *)(iVar1 + 0x80) = 2;
        *(undefined4 *)(iVar1 + 0x84) = *(undefined4 *)(iVar2 + 0x34);
        *(undefined4 *)(iVar1 + 0x48) = 0x636f6d70;
        *(undefined4 *)(iVar2 + 0x54) = 2;
        return 0;
      }
    }
    return local_4;
  }
  return 0xa0;
}


