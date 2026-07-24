// Unsorted_011 (game_misc) -- cube. 150 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Unsorted_011.h"

/* FUN_00699490 @ 00699490  kind=gamemisc  attributed-by=none  size=246 */

undefined4 FUN_00699490(int param_1,int *param_2,uint param_3)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_24 [2];
  ushort local_1a;
  uint local_18;
  short local_14;
  short local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar2 = *param_2;
  uVar1 = *(undefined2 *)(*(int *)(iVar2 + 0x8c) + 0x4086);
  if (param_3 < *(uint *)(iVar2 + 0x10)) {
    if (param_3 == 0) {
      iVar3 = *(int *)(iVar2 + 0xa4);
    }
    else {
      iVar3 = param_3 - 1;
    }
    puVar5 = (undefined4 *)(*(int *)(*(int *)(iVar2 + 0x8c) + 0x38) + iVar3 * 0x24);
    puVar6 = local_24;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    *(uint *)(param_1 + 0x4c) = local_18 >> 0x10;
    *(uint *)(param_1 + 0x50) = local_18 & 0xffff;
    *(undefined4 *)(param_1 + 0x54) = local_8;
    FUN_00691650(param_1,local_c);
    switch(uVar1) {
    case 1:
      *(undefined1 *)(param_1 + 0x5e) = 1;
      break;
    case 2:
      *(undefined1 *)(param_1 + 0x5e) = 3;
      break;
    case 4:
      *(undefined1 *)(param_1 + 0x5e) = 4;
      break;
    case 8:
      *(undefined1 *)(param_1 + 0x5e) = 2;
      *(undefined2 *)(param_1 + 0x5c) = 0x100;
    }
    *(int *)(param_1 + 100) = (int)local_14;
    *(int *)(param_1 + 0x68) = (int)local_10;
    *(uint *)(param_1 + 0x28) = (uint)local_1a << 6;
    *(int *)(param_1 + 0x24) = (int)local_10 << 6;
    *(undefined4 *)(param_1 + 0x48) = 0x62697473;
    *(int *)(param_1 + 0x20) = (int)local_14 << 6;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x50) << 6;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x4c) << 6;
    FUN_0068f4a0((int *)(param_1 + 0x18),(uint)*(ushort *)(*(int *)(iVar2 + 0x8c) + 6) << 6);
    return 0;
  }
  return 6;
}


/* FUN_006998b0 @ 006998b0  kind=gamemisc  attributed-by=none  size=1752 */

void __cdecl
FUN_006998b0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,uint *param_5)

{
  ushort uVar1;
  int *piVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  void *_Src;
  int iVar8;
  ushort uVar9;
  int *piVar10;
  ushort uVar11;
  char *pcVar12;
  int *piVar13;
  size_t _Size;
  int local_90;
  uint local_8c;
  undefined4 *local_88;
  char local_84 [128];
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_90;
  uVar6 = param_5[8];
  local_88 = param_4;
  local_8c = 0;
  local_90 = 0;
  if (uVar6 != 0) {
    local_8c = *(uint *)(uVar6 + 0x4088);
  }
  if ((((*param_1 == 0x4d4d4f43) && ((char)param_1[1] == 'E')) &&
      (*(char *)((int)param_1 + 5) == 'N')) && (*(char *)((int)param_1 + 6) == 'T')) {
    if ((*(int *)(param_5[9] + 8) != 0) && (uVar6 != 0)) {
      piVar10 = (int *)((int)param_1 + 7);
      if (*(char *)piVar10 != '\0') {
        piVar10 = param_1 + 2;
      }
      FUN_00697e30(piVar10);
      __security_check_cookie(local_4 ^ (uint)&local_90);
      return;
    }
    goto LAB_00699f70;
  }
  if ((*param_5 & 1) == 0) {
    uVar6 = param_5[0x80e];
    uVar4 = 9;
    pcVar12 = "STARTFONT";
    do {
      if (*param_1 != *(int *)pcVar12) goto LAB_00699f70;
      uVar4 = uVar4 - 4;
      pcVar12 = (char *)((int)pcVar12 + 4);
      param_1 = param_1 + 1;
    } while (3 < uVar4);
    if ((char)*(int *)pcVar12 == (char)*param_1) {
      *param_5 = 1;
      param_5[8] = 0;
      uVar4 = FUN_00692230(uVar6,0x40a4,&local_90);
      if (local_90 == 0) {
        param_5[8] = uVar4;
        *(uint *)(uVar4 + 0x4088) = param_5[0x80e];
        local_88 = (undefined4 *)(uVar4 + 0x4094);
        param_5[0x80e] = 0;
        local_90 = FUN_00697310();
        if (local_90 == 0) {
          uVar4 = 0;
          do {
            local_90 = 0;
            local_90 = FUN_006973a0(uVar4,uVar6);
            if (local_90 != 0) goto LAB_00699f70;
            uVar4 = uVar4 + 1;
          } while (uVar4 < 0x53);
          uVar5 = FUN_00692230(uVar6,0x10,&local_90);
          *(undefined4 *)(param_5[8] + 0x80) = uVar5;
          if ((local_90 == 0) && (local_90 = FUN_00697310(), local_90 == 0)) {
            *(undefined4 *)(param_5[8] + 0x1c) = *(undefined4 *)(param_5[9] + 0xc);
            *(undefined4 *)(param_5[8] + 0x24) = 0xffffffff;
          }
        }
      }
    }
    goto LAB_00699f70;
  }
  uVar4 = 0xf;
  piVar10 = (int *)"STARTPROPERTIES";
  piVar2 = param_1;
  do {
    piVar13 = piVar2;
    piVar7 = piVar10;
    if (*piVar13 != *piVar7) goto LAB_00699b7a;
    uVar4 = uVar4 - 4;
    piVar10 = piVar7 + 1;
    piVar2 = piVar13 + 1;
  } while (3 < uVar4);
  if ((((char)piVar7[1] == (char)piVar13[1]) &&
      (*(char *)((int)piVar7 + 5) == *(char *)((int)piVar13 + 5))) &&
     (*(char *)((int)piVar7 + 6) == *(char *)((int)piVar13 + 6))) {
    if (((*param_5 & 8) != 0) && (local_90 = FUN_006975c0(param_1,param_2), local_90 == 0)) {
      uVar6 = FUN_00697a40(0);
      *(uint *)(param_5[8] + 0x48) = uVar6;
      param_5[1] = uVar6;
      uVar5 = FUN_00693a60(local_8c,0x10,0,uVar6,0,&local_90);
      *(undefined4 *)(param_5[8] + 0x50) = uVar5;
      if (local_90 == 0) {
        *param_5 = *param_5 | 0x10;
        *local_88 = &LAB_00699670;
      }
    }
    goto LAB_00699f70;
  }
LAB_00699b7a:
  uVar4 = 0xf;
  piVar10 = (int *)"FONTBOUNDINGBOX";
  piVar2 = param_1;
  do {
    piVar13 = piVar2;
    piVar7 = piVar10;
    if (*piVar13 != *piVar7) goto LAB_00699c94;
    uVar4 = uVar4 - 4;
    piVar10 = piVar7 + 1;
    piVar2 = piVar13 + 1;
  } while (3 < uVar4);
  if ((((char)piVar7[1] == (char)piVar13[1]) &&
      (*(char *)((int)piVar7 + 5) == *(char *)((int)piVar13 + 5))) &&
     (*(char *)((int)piVar7 + 6) == *(char *)((int)piVar13 + 6))) {
    if (((*param_5 & 4) != 0) && (local_90 = FUN_006975c0(param_1,param_2), local_90 == 0)) {
      uVar3 = FUN_00697be0(0);
      *(undefined2 *)(param_5[8] + 4) = uVar3;
      uVar3 = FUN_00697be0(0);
      *(undefined2 *)(param_5[8] + 6) = uVar3;
      uVar3 = FUN_00697be0(0);
      *(undefined2 *)(param_5[8] + 8) = uVar3;
      uVar3 = FUN_00697be0(0);
      *(undefined2 *)(param_5[8] + 10) = uVar3;
      uVar6 = param_5[8];
      *(short *)(uVar6 + 0xc) = *(short *)(uVar6 + 10) + *(short *)(uVar6 + 6);
      *(short *)(param_5[8] + 0xe) = -*(short *)(param_5[8] + 10);
      *param_5 = *param_5 | 8;
    }
    goto LAB_00699f70;
  }
LAB_00699c94:
  iVar8 = *param_1;
  if (iVar8 == 0x544e4f46) {
    local_90 = FUN_006975c0(param_1,param_2);
    if (local_90 == 0) {
      FUN_00697500();
      _Src = (void *)FUN_00697540(param_5 + 0x80a,0x20,&local_88);
      uVar6 = local_8c;
      if (_Src != (void *)0x0) {
        FUN_00691290(local_8c,*(undefined4 *)param_5[8]);
        _Size = (int)local_88 + 1;
        *(undefined4 *)param_5[8] = 0;
        uVar5 = FUN_00693a60(uVar6,1,0,_Size,0,&local_90);
        *(undefined4 *)param_5[8] = uVar5;
        if (local_90 == 0) {
          memcpy(*(void **)param_5[8],_Src,_Size);
          iVar8 = FUN_00697ea0(param_5[9]);
          if (iVar8 == 0) {
            *param_5 = *param_5 | 2;
          }
        }
      }
    }
    goto LAB_00699f70;
  }
  if (iVar8 != 0x455a4953) {
    if (((iVar8 == 0x52414843) && ((char)param_1[1] == 'S')) && ((*param_5 & 8) != 0)) {
      *(int *)(uVar6 + 0x28) = (int)*(short *)(uVar6 + 0xc);
      sprintf(local_84,"%hd",(int)*(short *)(param_5[8] + 0xc));
      local_90 = FUN_00698130("FONT_ASCENT",local_84);
      if (local_90 == 0) {
        *(int *)(param_5[8] + 0x2c) = (int)*(short *)(param_5[8] + 0xe);
        sprintf(local_84,"%hd",(int)*(short *)(param_5[8] + 0xe));
        iVar8 = FUN_00698130("FONT_DESCENT",local_84);
        if (iVar8 == 0) {
          *(undefined2 *)(param_5[8] + 0x4084) = 1;
          *local_88 = FUN_00698500;
        }
      }
    }
    goto LAB_00699f70;
  }
  if (((*param_5 & 2) == 0) || (local_90 = FUN_006975c0(param_1,param_2), local_90 != 0))
  goto LAB_00699f70;
  uVar5 = FUN_00697a40(0);
  *(undefined4 *)(param_5[8] + 0x10) = uVar5;
  uVar5 = FUN_00697a40(0);
  *(undefined4 *)(param_5[8] + 0x14) = uVar5;
  uVar5 = FUN_00697a40(0);
  *(undefined4 *)(param_5[8] + 0x18) = uVar5;
  if (param_5[0x80c] == 5) {
    uVar3 = FUN_00697be0(0);
    *(undefined2 *)(param_5[8] + 0x4086) = uVar3;
    uVar1 = *(ushort *)(param_5[8] + 0x4086);
    local_8c = (uint)uVar1;
    uVar9 = 0;
    uVar11 = 0;
    if (uVar1 == 0) {
LAB_00699e67:
      local_8c = (uint)(ushort)(1 << ((byte)uVar9 & 0x1f));
    }
    else {
      do {
        if ((local_8c & 1) != 0) {
          uVar9 = uVar11;
        }
        local_8c = local_8c >> 1;
        uVar11 = uVar11 + 1;
      } while ((short)local_8c != 0);
      if (uVar9 < 4) goto LAB_00699e67;
      local_8c = 8;
    }
    uVar9 = (ushort)local_8c;
    if ((uVar9 < uVar1) || (uVar1 != uVar9)) {
      *(ushort *)(param_5[8] + 0x4086) = uVar9 * 2;
      *param_5 = *param_5 | 4;
      goto LAB_00699f70;
    }
  }
  else {
    *(undefined2 *)(param_5[8] + 0x4086) = 1;
  }
  *param_5 = *param_5 | 4;
LAB_00699f70:
  __security_check_cookie(local_4 ^ (uint)&local_90);
  return;
}


/* FUN_00699f90 @ 00699f90  kind=gamemisc  attributed-by=none  size=588 */

int FUN_00699f90(undefined4 param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *in_EAX;
  uint *puVar4;
  undefined4 uVar5;
  undefined1 local_4 [4];
  
  uVar3 = param_2;
  param_2 = 0;
  puVar4 = (uint *)FUN_00692230(uVar3,0x203c,&param_2);
  if (param_2 != 0) goto LAB_0069a1ba;
  if (in_EAX == (undefined4 *)0x0) {
    in_EAX = &DAT_00722d68;
  }
  puVar4[9] = (uint)in_EAX;
  *(undefined2 *)(puVar4 + 3) = 0x7fff;
  puVar4[0x80e] = uVar3;
  FUN_00697440(uVar3);
  param_2 = FUN_006977d0(param_1,puVar4,local_4);
  if (param_2 == 0) {
    uVar1 = puVar4[8];
    if (uVar1 != 0) {
      if (*(int *)(uVar1 + 0x1c) != 8) {
        *(undefined2 *)(uVar1 + 0x20) = *(undefined2 *)(uVar1 + 4);
      }
      uVar1 = puVar4[8];
      if (puVar4[1] != *(int *)(uVar1 + 0x40) + *(int *)(uVar1 + 0x34)) {
        *(undefined2 *)(uVar1 + 0x4084) = 1;
      }
      if ((*(int *)puVar4[9] != 0) &&
         ((uVar1 = puVar4[8], *(int *)(uVar1 + 0x34) != 0 || (*(int *)(uVar1 + 0x40) != 0)))) {
        if ((int)(short)puVar4[4] - (int)(short)puVar4[3] != (uint)*(ushort *)(uVar1 + 4)) {
          *(short *)(uVar1 + 4) = (short)puVar4[4] - (short)puVar4[3];
          *(undefined2 *)(puVar4[8] + 0x4084) = 1;
        }
        if (*(short *)(puVar4[8] + 8) != (short)puVar4[3]) {
          *(short *)(puVar4[8] + 8) = (short)puVar4[3];
          *(undefined2 *)(puVar4[8] + 0x4084) = 1;
        }
        if (*(short *)(puVar4[8] + 0xc) != *(short *)((int)puVar4 + 0x12)) {
          *(short *)(puVar4[8] + 0xc) = *(short *)((int)puVar4 + 0x12);
          *(undefined2 *)(puVar4[8] + 0x4084) = 1;
        }
        if (*(short *)(puVar4[8] + 0xe) != (short)puVar4[5]) {
          *(short *)(puVar4[8] + 0xe) = (short)puVar4[5];
          *(short *)(puVar4[8] + 10) = -(short)puVar4[5];
          *(undefined2 *)(puVar4[8] + 0x4084) = 1;
        }
        if ((int)(short)puVar4[5] + (int)*(short *)((int)puVar4 + 0x12) !=
            (uint)*(ushort *)(puVar4[8] + 6)) {
          *(short *)(puVar4[8] + 6) = (short)puVar4[5] + *(short *)((int)puVar4 + 0x12);
        }
      }
    }
    if ((*puVar4 & 1) != 0) {
      param_2 = ((*puVar4 & 0x20) != 0) + 0xb9;
      goto LAB_0069a1ba;
    }
    uVar1 = puVar4[8];
    if (uVar1 == 0) {
      param_2 = 3;
    }
    else {
      iVar2 = *(int *)(uVar1 + 0x58);
      if (iVar2 != 0) {
        uVar5 = FUN_00693a60(*(undefined4 *)(uVar1 + 0x4088),1,iVar2,iVar2 + 1,
                             *(undefined4 *)(uVar1 + 0x54),&param_2);
        *(undefined4 *)(puVar4[8] + 0x54) = uVar5;
        if (param_2 != 0) goto LAB_0069a175;
        *(undefined1 *)(*(int *)(puVar4[8] + 0x58) + *(int *)(puVar4[8] + 0x54)) = 0;
      }
    }
    *param_3 = puVar4[8];
  }
  else {
LAB_0069a175:
    FUN_00698e00();
    FUN_00691290(uVar3,puVar4[8]);
    puVar4[8] = 0;
  }
LAB_0069a1ba:
  if (puVar4 != (uint *)0x0) {
    FUN_00697460();
    FUN_00691290(uVar3,puVar4);
  }
  return param_2;
}


/* FUN_0069a1e0 @ 0069a1e0  kind=gamemisc  attributed-by=none  size=1310 */

void FUN_0069a1e0(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  short *psVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  byte *pbVar12;
  int *piVar13;
  byte *pbVar14;
  short sVar15;
  short sVar16;
  bool bVar17;
  int local_34;
  char local_2d;
  int local_2c;
  undefined4 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_34;
  uVar3 = param_2[0x19];
  sVar15 = 0;
  local_18 = param_2;
  local_34 = 0;
  local_2c = 0;
  local_1c = uVar3;
  local_34 = FUN_006908c0(param_1,0);
  if (local_34 != 0) {
LAB_0069a6eb:
    __security_check_cookie(local_4 ^ (uint)&local_34);
    return;
  }
  local_14 = 1;
  local_10 = 1;
  local_c = 0;
  local_8 = 8;
  local_34 = FUN_00699f90(param_1,uVar3,&local_2c);
  iVar10 = local_2c;
  if (local_34 == 0xb0) {
    FUN_00699320(param_2);
    __security_check_cookie(local_4 ^ (uint)&local_34);
    return;
  }
  if (local_34 != 0) goto LAB_0069a6eb;
  param_2[0x23] = local_2c;
  *param_2 = 1;
  param_2[1] = 0;
  param_2[2] = 0x92;
  iVar6 = FUN_00698ff0();
  if ((((iVar6 != 0) && (*(int *)(iVar6 + 4) == 1)) && (*(char **)(iVar6 + 0xc) != (char *)0x0)) &&
     (((cVar1 = **(char **)(iVar6 + 0xc), cVar1 == 'M' || (cVar1 == 'm')) ||
      ((cVar1 == 'C' || (cVar1 == 'c')))))) {
    param_2[2] = 0x96;
  }
  iVar6 = FUN_00698ff0();
  if ((iVar6 == 0) || (*(int *)(iVar6 + 0xc) == 0)) {
    param_2[5] = 0;
  }
  else {
    uVar7 = FUN_00691310(uVar3,*(int *)(iVar6 + 0xc),&local_34);
    param_2[5] = uVar7;
    if (local_34 != 0) goto LAB_0069a6eb;
  }
  local_34 = FUN_00699130(param_2);
  if (local_34 != 0) goto LAB_0069a6eb;
  param_2[4] = *(int *)(iVar10 + 0x30) + 1;
  param_2[7] = 1;
  psVar8 = (short *)FUN_00693a60(uVar3,0x10,0,1,0,&local_34);
  param_2[8] = psVar8;
  if (local_34 != 0) goto LAB_0069a6eb;
  psVar8[0] = 0;
  psVar8[1] = 0;
  psVar8[2] = 0;
  psVar8[3] = 0;
  psVar8[4] = 0;
  psVar8[5] = 0;
  psVar8[6] = 0;
  psVar8[7] = 0;
  sVar16 = *(short *)(iVar10 + 0x2c) + *(short *)(iVar10 + 0x28);
  local_2c = 0;
  *psVar8 = sVar16;
  iVar6 = FUN_00698ff0();
  if (iVar6 == 0) {
    lVar4 = (longlong)(sVar16 * 2) * 0x55555556;
    psVar8[1] = (short)((ulonglong)lVar4 >> 0x20) - (short)(lVar4 >> 0x3f);
  }
  else {
    iVar6 = *(int *)(iVar6 + 0xc) + 5;
    psVar8[1] = ((short)(iVar6 / 10) + (short)(iVar6 >> 0x1f)) -
                (short)((longlong)iVar6 * 0x66666667 >> 0x3f);
  }
  iVar6 = FUN_00698ff0();
  if (iVar6 == 0) {
    *(int *)(psVar8 + 2) = (int)psVar8[1] << 6;
  }
  else {
    *(int *)(psVar8 + 2) = (*(int *)(iVar6 + 0xc) * 0x70800 + 0x8d27) / 0x11a4e;
  }
  iVar6 = FUN_00698ff0();
  if (iVar6 != 0) {
    *(int *)(psVar8 + 6) = (int)*(short *)(iVar6 + 0xc) << 6;
  }
  iVar6 = FUN_00698ff0();
  if (iVar6 == 0) {
    sVar16 = (short)local_2c;
  }
  else {
    sVar16 = *(short *)(iVar6 + 0xc);
  }
  iVar6 = FUN_00698ff0();
  uVar3 = local_1c;
  if (iVar6 != 0) {
    sVar15 = *(short *)(iVar6 + 0xc);
  }
  if (*(int *)(psVar8 + 6) == 0) {
    *(int *)(psVar8 + 6) = *(int *)(psVar8 + 2);
    if (sVar15 != 0) {
      *(int *)(psVar8 + 6) = ((int)sVar15 * *(int *)(psVar8 + 2)) / 0x48;
    }
  }
  if ((sVar16 == 0) || (sVar15 == 0)) {
    *(undefined4 *)(psVar8 + 4) = *(undefined4 *)(psVar8 + 6);
  }
  else {
    *(int *)(psVar8 + 4) = ((int)sVar16 * *(int *)(psVar8 + 6)) / (int)sVar15;
  }
  iVar6 = *(int *)(iVar10 + 0x38);
  uVar7 = FUN_00693a60(local_1c,8,0,*(undefined4 *)(iVar10 + 0x30),0,&local_34);
  puVar5 = local_18;
  local_18[0x24] = uVar7;
  if (local_34 != 0) goto LAB_0069a6eb;
  local_18[0x29] = 0;
  if (*(int *)(iVar10 + 0x30) != 0) {
    piVar13 = (int *)(iVar6 + 4);
    uVar9 = 0;
    do {
      *(int *)(local_18[0x24] + uVar9 * 8) = *piVar13;
      *(short *)(local_18[0x24] + 4 + uVar9 * 8) = (short)uVar9;
      if ((*piVar13 == *(int *)(iVar10 + 0x24)) && (uVar9 != 0xffffffff)) {
        local_18[0x29] = uVar9;
      }
      uVar9 = uVar9 + 1;
      piVar13 = piVar13 + 9;
    } while (uVar9 < *(uint *)(iVar10 + 0x30));
  }
  local_2d = '\0';
  iVar10 = FUN_00698ff0();
  iVar6 = FUN_00698ff0();
  if (((((iVar10 == 0) || (iVar6 == 0)) || (*(int *)(iVar10 + 4) != 1)) ||
      ((*(int *)(iVar6 + 4) != 1 || (*(int *)(iVar10 + 0xc) == 0)))) || (*(int *)(iVar6 + 0xc) == 0)
     ) {
    local_28 = puVar5;
    local_24 = 0x41444f42;
    local_20 = 7;
    local_34 = FUN_00693ed0(&DAT_00723398,0,&local_28,0);
    if (puVar5[9] != 0) {
      puVar5[0x17] = *(undefined4 *)puVar5[10];
    }
    goto LAB_0069a6eb;
  }
  uVar7 = FUN_00691310(uVar3,*(int *)(iVar6 + 0xc),&local_34);
  puVar5[0x21] = uVar7;
  if (local_34 != 0) goto LAB_0069a6eb;
  pcVar11 = (char *)FUN_00691310(uVar3,*(undefined4 *)(iVar10 + 0xc),&local_34);
  puVar5[0x22] = pcVar11;
  if (local_34 != 0) goto LAB_0069a6eb;
  if ((((*pcVar11 != 'i') && (*pcVar11 != 'I')) || ((pcVar11[1] != 's' && (pcVar11[1] != 'S')))) ||
     ((pcVar11[2] != 'o' && (pcVar11[2] != 'O')))) goto LAB_0069a65e;
  pbVar14 = &DAT_007234e0;
  pbVar12 = (byte *)(pcVar11 + 3);
  do {
    bVar2 = *pbVar12;
    bVar17 = bVar2 < *pbVar14;
    if (bVar2 != *pbVar14) {
LAB_0069a5e5:
      iVar10 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
      goto LAB_0069a5ea;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar12[1];
    bVar17 = bVar2 < pbVar14[1];
    if (bVar2 != pbVar14[1]) goto LAB_0069a5e5;
    pbVar12 = pbVar12 + 2;
    pbVar14 = pbVar14 + 2;
  } while (bVar2 != 0);
  iVar10 = 0;
LAB_0069a5ea:
  if (iVar10 != 0) {
    pbVar14 = &DAT_007234d8;
    pbVar12 = (byte *)(pcVar11 + 3);
    do {
      bVar2 = *pbVar12;
      bVar17 = bVar2 < *pbVar14;
      if (bVar2 != *pbVar14) {
LAB_0069a616:
        iVar10 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
        goto LAB_0069a61b;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar12[1];
      bVar17 = bVar2 < pbVar14[1];
      if (bVar2 != pbVar14[1]) goto LAB_0069a616;
      pbVar12 = pbVar12 + 2;
      pbVar14 = pbVar14 + 2;
    } while (bVar2 != 0);
    iVar10 = 0;
LAB_0069a61b:
    if (iVar10 != 0) goto LAB_0069a65e;
    pbVar12 = (byte *)puVar5[0x21];
    pbVar14 = &DAT_007157e0;
    do {
      bVar2 = *pbVar12;
      bVar17 = bVar2 < *pbVar14;
      if (bVar2 != *pbVar14) {
LAB_0069a650:
        iVar10 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
        goto LAB_0069a655;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar12[1];
      bVar17 = bVar2 < pbVar14[1];
      if (bVar2 != pbVar14[1]) goto LAB_0069a650;
      pbVar12 = pbVar12 + 2;
      pbVar14 = pbVar14 + 2;
    } while (bVar2 != 0);
    iVar10 = 0;
LAB_0069a655:
    if (iVar10 != 0) goto LAB_0069a65e;
  }
  local_2d = '\x01';
LAB_0069a65e:
  local_28 = puVar5;
  local_24 = 0;
  local_20 = 0;
  if (local_2d != '\0') {
    local_24 = 0x756e6963;
    local_20 = 0x10003;
  }
  FUN_00693ed0(&DAT_00723398,0,&local_28,0);
  __security_check_cookie(local_4 ^ (uint)&local_34);
  return;
}


/* FUN_0069a730 @ 0069a730  kind=gamemisc  attributed-by=none  size=187 */

void FUN_0069a730(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int in_EAX;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_8;
  
  puVar1 = *(undefined4 **)(in_EAX + 0x3d8);
  if (0 < *(short *)(in_EAX + 0x3d6)) {
    uVar2 = *puVar1;
    *(undefined4 *)(in_EAX + 0xc) = uVar2;
    *(undefined4 *)(in_EAX + 8) = uVar2;
    iVar6 = puVar1[1];
    piVar5 = puVar1 + 2;
    *(int *)(in_EAX + 0x14) = iVar6;
    *(int *)(in_EAX + 0x10) = iVar6;
    if (piVar5 < puVar1 + *(short *)(in_EAX + 0x3d6) * 2) {
      iVar8 = *(int *)(in_EAX + 8);
      iVar7 = *(int *)(in_EAX + 0xc);
      local_8 = iVar6;
      do {
        iVar3 = *piVar5;
        iVar4 = piVar5[1];
        if (iVar3 < iVar8) {
          *(int *)(in_EAX + 8) = iVar3;
          iVar8 = iVar3;
        }
        if (iVar7 < iVar3) {
          *(int *)(in_EAX + 0xc) = iVar3;
          iVar7 = iVar3;
        }
        if (iVar4 < local_8) {
          *(int *)(in_EAX + 0x10) = iVar4;
          local_8 = iVar4;
        }
        if (iVar6 < iVar4) {
          *(int *)(in_EAX + 0x14) = iVar4;
          iVar6 = iVar4;
        }
        piVar5 = piVar5 + 2;
      } while (piVar5 < puVar1 + *(short *)(in_EAX + 0x3d6) * 2);
    }
    *(int *)(in_EAX + 8) = *(int *)(in_EAX + 8) >> 6;
    *(int *)(in_EAX + 0x10) = *(int *)(in_EAX + 0x10) >> 6;
    *(int *)(in_EAX + 0xc) = *(int *)(in_EAX + 0xc) + 0x3f >> 6;
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 0x3f >> 6;
    return;
  }
  *(undefined4 *)(in_EAX + 0xc) = 0;
  *(undefined4 *)(in_EAX + 8) = 0;
  *(undefined4 *)(in_EAX + 0x14) = 0;
  *(undefined4 *)(in_EAX + 0x10) = 0;
  return;
}


/* FUN_0069a7f0 @ 0069a7f0  kind=gamemisc  attributed-by=none  size=109 */

void FUN_0069a7f0(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *in_EDX;
  int iVar4;
  
  iVar4 = *in_EDX;
  if (in_EDX[6] < *in_EDX) {
    iVar4 = in_EDX[6];
  }
  piVar1 = (int *)(in_EDX[0x14e] + in_EDX[1] * 4);
  piVar3 = (int *)*piVar1;
  while ((piVar3 != (int *)0x0 && (*piVar3 <= iVar4))) {
    if (*piVar3 == iVar4) {
      return;
    }
    piVar1 = piVar3 + 3;
    piVar3 = (int *)*piVar1;
  }
  iVar2 = in_EDX[0xd];
  if (iVar2 < in_EDX[0xc]) {
    piVar3 = (int *)(iVar2 * 0x10 + in_EDX[0xb]);
    in_EDX[0xd] = iVar2 + 1;
    *piVar3 = iVar4;
    piVar3[2] = 0;
    piVar3[1] = 0;
    piVar3[3] = *piVar1;
    *piVar1 = (int)piVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  longjmp(in_EDX + 0x13c,1);
}


/* FUN_0069a860 @ 0069a860  kind=gamemisc  attributed-by=none  size=34 */

void FUN_0069a860(void)

{
  int iVar1;
  int unaff_ESI;
  
  if ((*(int *)(unaff_ESI + 0x28) == 0) &&
     (*(int *)(unaff_ESI + 0x20) != 0 || *(int *)(unaff_ESI + 0x24) != 0)) {
    iVar1 = FUN_0069a7f0();
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + *(int *)(unaff_ESI + 0x20);
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + *(int *)(unaff_ESI + 0x24);
  }
  return;
}


/* FUN_0069a890 @ 0069a890  kind=gamemisc  attributed-by=none  size=99 */

void FUN_0069a890(void)

{
  int in_EAX;
  int in_ECX;
  int *in_EDX;
  uint uVar1;
  int iVar2;
  
  uVar1 = in_EAX - in_EDX[4];
  if (in_EDX[3] < in_ECX) {
    in_ECX = in_EDX[3];
  }
  iVar2 = in_ECX - in_EDX[2];
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  if ((iVar2 != *in_EDX) || (uVar1 != in_EDX[1])) {
    if (in_EDX[10] == 0) {
      FUN_0069a860();
    }
    in_EDX[8] = 0;
    in_EDX[9] = 0;
  }
  *in_EDX = iVar2;
  in_EDX[1] = uVar1;
  if ((uVar1 < (uint)in_EDX[7]) && (iVar2 < in_EDX[6])) {
    in_EDX[10] = 0;
    return;
  }
  in_EDX[10] = 1;
  return;
}


/* FUN_0069a900 @ 0069a900  kind=gamemisc  attributed-by=none  size=71 */

void FUN_0069a900(void)

{
  int iVar1;
  int in_EAX;
  int in_ECX;
  int *in_EDX;
  
  if (in_EDX[3] < in_ECX) {
    in_ECX = in_EDX[3];
  }
  iVar1 = in_EDX[2];
  if (in_ECX < iVar1) {
    in_ECX = iVar1 + -1;
  }
  *in_EDX = in_ECX - iVar1;
  in_EDX[1] = in_EAX - in_EDX[4];
  in_EDX[0x12] = in_EAX << 8;
  in_EDX[8] = 0;
  in_EDX[9] = 0;
  in_EDX[10] = 0;
  FUN_0069a890();
  return;
}


/* FUN_0069a950 @ 0069a950  kind=gamemisc  attributed-by=none  size=355 */

void FUN_0069a950(undefined4 param_1,int param_2,int param_3)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  int in_EDX;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int unaff_ESI;
  int iVar8;
  int local_18;
  int local_14;
  int local_10;
  
  iVar8 = in_EDX >> 8;
  iVar7 = in_EAX - in_EDX;
  iVar4 = in_EDX + iVar8 * -0x100;
  iVar6 = in_EAX >> 8;
  iVar1 = in_EAX + iVar6 * -0x100;
  if (param_2 == param_3) {
    FUN_0069a890();
    return;
  }
  iVar5 = param_3 - param_2;
  if (iVar8 != iVar6) {
    local_10 = 0x100;
    local_14 = 1;
    iVar3 = 0x100 - iVar4;
    if (iVar7 < 0) {
      local_10 = 0;
      local_14 = -1;
      iVar7 = -iVar7;
      iVar3 = iVar4;
    }
    iVar2 = (iVar3 * iVar5) / iVar7;
    local_18 = (iVar3 * iVar5) % iVar7;
    if (local_18 < 0) {
      iVar2 = iVar2 + -1;
      local_18 = local_18 + iVar7;
    }
    iVar8 = iVar8 + local_14;
    *(int *)(unaff_ESI + 0x24) = *(int *)(unaff_ESI + 0x24) + iVar2;
    *(int *)(unaff_ESI + 0x20) = *(int *)(unaff_ESI + 0x20) + (local_10 + iVar4) * iVar2;
    FUN_0069a890();
    param_2 = param_2 + iVar2;
    if (iVar8 != iVar6) {
      iVar5 = ((iVar2 - param_2) + param_3) * 0x100;
      iVar4 = iVar5 / iVar7;
      iVar5 = iVar5 % iVar7;
      if (iVar5 < 0) {
        iVar4 = iVar4 + -1;
        iVar5 = iVar5 + iVar7;
      }
      local_18 = local_18 - iVar7;
      do {
        local_18 = local_18 + iVar5;
        iVar3 = iVar4;
        if (-1 < local_18) {
          local_18 = local_18 - iVar7;
          iVar3 = iVar4 + 1;
        }
        iVar8 = iVar8 + local_14;
        *(int *)(unaff_ESI + 0x24) = *(int *)(unaff_ESI + 0x24) + iVar3;
        param_2 = param_2 + iVar3;
        *(int *)(unaff_ESI + 0x20) = *(int *)(unaff_ESI + 0x20) + iVar3 * 0x100;
        FUN_0069a890();
      } while (iVar8 != iVar6);
    }
    *(int *)(unaff_ESI + 0x20) =
         *(int *)(unaff_ESI + 0x20) + ((iVar1 - local_10) + 0x100) * (param_3 - param_2);
    *(int *)(unaff_ESI + 0x24) = *(int *)(unaff_ESI + 0x24) + (param_3 - param_2);
    return;
  }
  *(int *)(unaff_ESI + 0x20) = *(int *)(unaff_ESI + 0x20) + (iVar1 + iVar4) * iVar5;
  *(int *)(unaff_ESI + 0x24) = *(int *)(unaff_ESI + 0x24) + iVar5;
  return;
}


/* FUN_0069aac0 @ 0069aac0  kind=gamemisc  attributed-by=none  size=639 */

void FUN_0069aac0(int param_1,int param_2)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar3 = param_2 >> 8;
  iVar2 = *(int *)(in_EAX + 0x44) - *(int *)(in_EAX + 0x48);
  iVar4 = param_2 + iVar3 * -0x100;
  iVar1 = *(int *)(in_EAX + 0x40);
  iVar5 = param_1 - iVar1;
  iVar7 = *(int *)(in_EAX + 0x48) >> 8;
  iVar6 = param_2 - *(int *)(in_EAX + 0x44);
  local_1c = iVar3;
  local_18 = iVar7;
  if (iVar3 < iVar7) {
    local_1c = iVar7;
    local_18 = iVar3;
  }
  if ((local_18 < *(int *)(in_EAX + 0x14)) && (*(int *)(in_EAX + 0x10) <= local_1c)) {
    if (iVar7 != iVar3) {
      local_1c = 1;
      local_24 = 0x100;
      if (iVar5 == 0) {
        iVar1 = (iVar1 + (iVar1 >> 8) * -0x100) * 2;
        if (iVar6 < 0) {
          local_24 = 0;
          local_1c = -1;
        }
        *(int *)(in_EAX + 0x24) = *(int *)(in_EAX + 0x24) + (local_24 - iVar2);
        *(int *)(in_EAX + 0x20) = *(int *)(in_EAX + 0x20) + (local_24 - iVar2) * iVar1;
        FUN_0069a890();
        while (iVar7 = iVar7 + local_1c, iVar7 != iVar3) {
          *(int *)(in_EAX + 0x20) = *(int *)(in_EAX + 0x20) + (local_24 * 2 + -0x100) * iVar1;
          *(int *)(in_EAX + 0x24) = *(int *)(in_EAX + 0x24) + local_24 * 2 + -0x100;
          FUN_0069a890();
        }
        iVar4 = local_24 + -0x100 + iVar4;
        *(int *)(in_EAX + 0x20) = *(int *)(in_EAX + 0x20) + iVar4 * iVar1;
        *(int *)(in_EAX + 0x24) = *(int *)(in_EAX + 0x24) + iVar4;
        goto LAB_0069ad2b;
      }
      local_1c = 1;
      iVar1 = 0x100 - iVar2;
      if (iVar6 < 0) {
        local_24 = 0;
        local_1c = -1;
        iVar6 = -iVar6;
        iVar1 = iVar2;
      }
      local_20 = (iVar1 * iVar5) % iVar6;
      if (local_20 < 0) {
        local_20 = local_20 + iVar6;
      }
      FUN_0069a950(iVar7,iVar2,local_24);
      iVar7 = iVar7 + local_1c;
      FUN_0069a890();
      if (iVar7 != iVar3) {
        local_14 = (iVar5 * 0x100) % iVar6;
        if (local_14 < 0) {
          local_14 = local_14 + iVar6;
        }
        local_20 = local_20 - iVar6;
        do {
          local_20 = local_20 + local_14;
          if (-1 < local_20) {
            local_20 = local_20 - iVar6;
          }
          FUN_0069a950(iVar7,0x100 - local_24,local_24);
          iVar7 = iVar7 + local_1c;
          FUN_0069a890();
        } while (iVar7 != iVar3);
      }
      iVar2 = 0x100 - local_24;
    }
    FUN_0069a950(iVar7,iVar2,iVar4);
  }
LAB_0069ad2b:
  *(int *)(in_EAX + 0x40) = param_1;
  *(int *)(in_EAX + 0x44) = param_2;
  *(int *)(in_EAX + 0x48) = iVar3 * 0x100;
  return;
}


/* FUN_0069adb0 @ 0069adb0  kind=gamemisc  attributed-by=none  size=426 */

void FUN_0069adb0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int unaff_EDI;
  
  iVar1 = (*(int *)(unaff_EDI + 0x40) >> 2) + *param_1 * -2 + *param_2;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  iVar4 = (*(int *)(unaff_EDI + 0x44) >> 2) + param_1[1] * -2 + param_2[1];
  if (iVar4 < 0) {
    iVar4 = -iVar4;
  }
  if (iVar1 < iVar4) {
    iVar1 = iVar4;
  }
  iVar1 = iVar1 / *(int *)(unaff_EDI + 0x4e8);
  iVar4 = 1;
  if (0 < iVar1) {
    do {
      iVar1 = iVar1 >> 2;
      iVar4 = iVar4 + 1;
    } while (0 < iVar1);
    if (1 < iVar4) {
      *(int *)(unaff_EDI + 0x354) = iVar4;
      piVar5 = (int *)(unaff_EDI + 0x4c);
      *piVar5 = *param_2 * 4;
      *(int *)(unaff_EDI + 0x50) = param_2[1] * 4;
      *(int *)(unaff_EDI + 0x54) = *param_1 * 4;
      *(int *)(unaff_EDI + 0x58) = param_1[1] * 4;
      *(undefined4 *)(unaff_EDI + 0x5c) = *(undefined4 *)(unaff_EDI + 0x40);
      param_2 = (int *)0x0;
      *(undefined4 *)(unaff_EDI + 0x60) = *(undefined4 *)(unaff_EDI + 0x44);
      do {
        iVar1 = *(int *)(unaff_EDI + 0x354 + (int)param_2 * 4);
        if (iVar1 < 2) {
LAB_0069af02:
          iVar1 = piVar5[1];
          iVar4 = *piVar5;
          iVar2 = *(int *)(unaff_EDI + 0x44) + piVar5[3] * 2 + iVar1;
          iVar3 = iVar4 + piVar5[2] * 2 + *(int *)(unaff_EDI + 0x40);
          FUN_0069aac0((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2,
                       (int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2);
          FUN_0069aac0(iVar4,iVar1);
          param_2 = (int *)((int)param_2 + -1);
          piVar5 = piVar5 + -4;
        }
        else {
          iVar4 = piVar5[1];
          iVar2 = piVar5[3];
          iVar3 = iVar4;
          if (iVar2 < iVar4) {
            iVar3 = iVar2;
          }
          if (iVar4 < iVar2) {
            iVar4 = iVar2;
          }
          iVar2 = piVar5[5];
          if (iVar2 < iVar3) {
            iVar3 = iVar2;
          }
          if (iVar4 < iVar2) {
            iVar4 = iVar2;
          }
          if ((*(int *)(unaff_EDI + 0x14) <= iVar3 >> 8) ||
             (iVar4 >> 8 < *(int *)(unaff_EDI + 0x10))) goto LAB_0069af02;
          FUN_0069ad50();
          piVar5 = piVar5 + 4;
          param_2 = (int *)((int)param_2 + 1);
          iVar1 = iVar1 + -1;
          *(int *)(unaff_EDI + 0x350 + (int)param_2 * 4) = iVar1;
          *(int *)(unaff_EDI + 0x354 + (int)param_2 * 4) = iVar1;
        }
        if ((int)param_2 < 0) {
          return;
        }
      } while( true );
    }
  }
  iVar1 = param_2[1] * 4;
  iVar2 = *(int *)(unaff_EDI + 0x44) + param_1[1] * 8 + iVar1;
  iVar4 = *param_2 * 4;
  iVar3 = *(int *)(unaff_EDI + 0x40) + *param_1 * 8 + iVar4;
  FUN_0069aac0((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2,(int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2);
  FUN_0069aac0(iVar4,iVar1);
  return;
}


/* FUN_0069af60 @ 0069af60  kind=gamemisc  attributed-by=none  size=553 */

void FUN_0069af60(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int unaff_EDI;
  
  iVar3 = *(int *)(unaff_EDI + 0x40) >> 2;
  iVar1 = *param_3;
  iVar2 = iVar1 + (*param_2 + *param_1) * 3 + iVar3;
  iVar3 = iVar1 + ((int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3) * -2 + iVar3;
  iVar4 = *(int *)(unaff_EDI + 0x44) >> 2;
  iVar2 = param_3[1] + (param_1[1] + param_2[1]) * 3 + iVar4;
  iVar4 = param_3[1] + ((int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3) * -2 + iVar4;
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  if (iVar4 < 0) {
    iVar4 = -iVar4;
  }
  if (iVar3 < iVar4) {
    iVar3 = iVar4;
  }
  iVar3 = iVar3 / *(int *)(unaff_EDI + 0x4ec);
  iVar2 = 1;
  if (0 < iVar3) {
    do {
      iVar3 = iVar3 >> 2;
      iVar2 = iVar2 + 1;
    } while (0 < iVar3);
    if (1 < iVar2) {
      piVar5 = (int *)(unaff_EDI + 0x4c);
      *piVar5 = iVar1 * 4;
      *(int *)(unaff_EDI + 0x50) = param_3[1] * 4;
      *(int *)(unaff_EDI + 0x54) = *param_2 * 4;
      *(int *)(unaff_EDI + 0x58) = param_2[1] * 4;
      *(int *)(unaff_EDI + 0x5c) = *param_1 * 4;
      *(int *)(unaff_EDI + 0x60) = param_1[1] * 4;
      *(undefined4 *)(unaff_EDI + 100) = *(undefined4 *)(unaff_EDI + 0x40);
      *(undefined4 *)(unaff_EDI + 0x68) = *(undefined4 *)(unaff_EDI + 0x44);
      param_3 = (int *)0x0;
      *(int *)(unaff_EDI + 0x354) = iVar2;
      do {
        iVar1 = *(int *)(unaff_EDI + 0x354 + (int)param_3 * 4);
        if (iVar1 < 2) {
LAB_0069b12d:
          iVar1 = piVar5[1];
          iVar3 = *piVar5;
          iVar2 = (piVar5[5] + piVar5[3]) * 3 + *(int *)(unaff_EDI + 0x44) + iVar1;
          iVar4 = (piVar5[4] + piVar5[2]) * 3 + *(int *)(unaff_EDI + 0x40) + iVar3;
          FUN_0069aac0((int)(iVar4 + (iVar4 >> 0x1f & 7U)) >> 3,
                       (int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3);
          FUN_0069aac0(iVar3,iVar1);
          param_3 = (int *)((int)param_3 + -1);
          piVar5 = piVar5 + -6;
        }
        else {
          iVar3 = piVar5[1];
          iVar2 = piVar5[3];
          iVar4 = iVar3;
          if (iVar2 < iVar3) {
            iVar4 = iVar2;
          }
          if (iVar3 < iVar2) {
            iVar3 = iVar2;
          }
          iVar2 = piVar5[5];
          if (iVar2 < iVar4) {
            iVar4 = iVar2;
          }
          if (iVar3 < iVar2) {
            iVar3 = iVar2;
          }
          iVar2 = piVar5[7];
          if (iVar2 < iVar4) {
            iVar4 = iVar2;
          }
          if (iVar3 < iVar2) {
            iVar3 = iVar2;
          }
          if ((*(int *)(unaff_EDI + 0x14) <= iVar4 >> 8) || (iVar3 < 0)) goto LAB_0069b12d;
          FUN_00695710();
          piVar5 = piVar5 + 6;
          param_3 = (int *)((int)param_3 + 1);
          iVar1 = iVar1 + -1;
          *(int *)(unaff_EDI + 0x350 + (int)param_3 * 4) = iVar1;
          *(int *)(unaff_EDI + 0x354 + (int)param_3 * 4) = iVar1;
        }
        if ((int)param_3 < 0) {
          return;
        }
      } while( true );
    }
  }
  iVar3 = param_3[1];
  iVar2 = *(int *)(unaff_EDI + 0x44) + (param_1[1] + param_2[1]) * 0xc + iVar3 * 4;
  iVar4 = *(int *)(unaff_EDI + 0x40) + (*param_2 + *param_1) * 0xc + iVar1 * 4;
  FUN_0069aac0((int)(iVar4 + (iVar4 >> 0x1f & 7U)) >> 3,(int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3);
  FUN_0069aac0(iVar1 * 4,iVar3 * 4);
  return;
}


/* FUN_0069b520 @ 0069b520  kind=gamemisc  attributed-by=none  size=90 */

undefined4 FUN_0069b520(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = setjmp3(param_1 + 0x4f0,0);
  if (iVar1 == 0) {
    uVar2 = FUN_0068ff90(param_1 + 0x3d4,&PTR_LAB_00723508,param_1);
    FUN_0069a860();
    return uVar2;
  }
  return 0x40;
}


/* FUN_0069bc10 @ 0069bc10  kind=gamemisc  attributed-by=none  size=887 */

/* WARNING: Removing unreachable block (ram,0x0069bf54) */

void FUN_0069bc10(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int *in_ECX;
  int in_EDX;
  size_t sVar6;
  int iVar7;
  void *pvVar8;
  uint uVar9;
  void *_Src;
  size_t _Size;
  size_t local_7c;
  uint local_78;
  int local_74;
  uint local_70;
  int local_6c;
  uint local_68;
  undefined4 local_64;
  int local_60;
  uint local_5c;
  int local_58;
  uint local_54;
  int *local_50;
  int local_4c;
  size_t local_48;
  uint *local_44;
  int local_40;
  undefined4 local_3c;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_7c;
  local_78 = (uint)(param_2 == 3);
  local_6c = param_1;
  local_68 = (uint)(param_2 == 4);
  if (*(int *)(param_1 + 0x48) != *(int *)(in_EDX + 0x18)) {
    __security_check_cookie(local_4 ^ (uint)&local_7c);
    return;
  }
  if (param_2 == param_3) {
    local_60 = in_EDX;
    local_50 = in_ECX;
    if (in_ECX != (int *)0x0) {
      FUN_006904c0(param_1 + 0x6c,*in_ECX,in_ECX[1]);
    }
    FUN_00690430(param_1 + 0x6c,&local_14);
    local_c = local_c + 0x3f & 0xffffffc0;
    local_14 = local_14 & 0xffffffc0;
    local_7c = (int)(local_c - local_14) >> 6;
    local_64 = *(undefined4 *)(local_60 + 8);
    local_8 = local_8 + 0x3f & 0xffffffc0;
    local_10 = local_10 & 0xffffffc0;
    uVar9 = (int)(local_8 - local_10) >> 6;
    local_70 = uVar9;
    local_48 = local_7c;
    if ((*(byte *)(*(int *)(param_1 + 0x9c) + 4) & 1) != 0) {
      FUN_00691290(local_64,*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = 0;
      puVar1 = (uint *)(*(int *)(param_1 + 0x9c) + 4);
      *puVar1 = *puVar1 & 0xfffffffe;
    }
    _Size = local_7c;
    if (local_78 != 0) {
      local_7c = local_7c * 3;
      _Size = local_7c + 3 & 0xfffffffc;
    }
    if (local_68 != 0) {
      uVar9 = uVar9 * 3;
    }
    local_4c = (int)local_14 >> 6;
    local_58 = (int)local_8 >> 6;
    local_5c = local_14;
    local_54 = local_10;
    if ((local_7c < 0x8000) && (uVar9 < 0x8000)) {
      iVar7 = local_6c + 0x6c;
      *(undefined1 *)(param_1 + 0x5e) = 2;
      *(undefined2 *)(param_1 + 0x5c) = 0x100;
      *(size_t *)(param_1 + 0x50) = local_7c;
      *(uint *)(param_1 + 0x4c) = uVar9;
      *(size_t *)(param_1 + 0x54) = _Size;
      FUN_006904c0(iVar7,-local_14,-local_10);
      uVar4 = FUN_00692230(local_64,_Size * uVar9,&local_74);
      *(undefined4 *)(param_1 + 0x58) = uVar4;
      if (local_74 == 0) {
        puVar1 = (uint *)(*(int *)(local_6c + 0x9c) + 4);
        *puVar1 = *puVar1 | 1;
        local_3c = 1;
        local_44 = (uint *)(param_1 + 0x4c);
        local_40 = iVar7;
        local_74 = (**(code **)(local_60 + 0x40))(*(undefined4 *)(local_60 + 0x3c),&local_44);
        if (local_78 != 0) {
          local_78 = local_70;
          if (local_70 != 0) {
            iVar7 = *(int *)(param_1 + 0x58) + -1;
            do {
              if (local_48 != 0) {
                puVar5 = (undefined1 *)((local_7c - 1) + iVar7);
                sVar6 = local_48;
                do {
                  uVar2 = *(undefined1 *)(iVar7 + sVar6);
                  puVar5[-1] = uVar2;
                  *puVar5 = uVar2;
                  puVar5[1] = uVar2;
                  puVar5 = puVar5 + -3;
                  sVar6 = sVar6 - 1;
                } while (sVar6 != 0);
              }
              local_78 = local_78 - 1;
              iVar7 = iVar7 + _Size;
            } while (local_78 != 0);
          }
        }
        if (local_68 != 0) {
          pvVar8 = *(void **)(param_1 + 0x58);
          _Src = (void *)((uVar9 - local_70) * _Size + (int)pvVar8);
          for (uVar9 = local_70; uVar9 != 0; uVar9 = uVar9 - 1) {
            memcpy(pvVar8,_Src,_Size);
            memcpy((void *)((int)pvVar8 + _Size),_Src,_Size);
            pvVar8 = (void *)((int)((int)pvVar8 + _Size) + _Size);
            memcpy(pvVar8,_Src,_Size);
            pvVar8 = (void *)((int)pvVar8 + _Size);
            _Src = (void *)((int)_Src + _Size);
          }
        }
        iVar3 = local_6c;
        iVar7 = local_6c + 0x6c;
        FUN_006904c0(iVar7,local_5c,local_54);
        if (local_74 == 0) {
          *(undefined4 *)(iVar3 + 0x48) = 0x62697473;
          *(int *)(iVar3 + 100) = local_4c;
          *(int *)(iVar3 + 0x68) = local_58;
        }
      }
      if ((iVar7 != 0) && (local_50 != (int *)0x0)) {
        FUN_006904c0(iVar7,-*local_50,-local_50[1]);
        __security_check_cookie(local_4 ^ (uint)&local_7c);
        return;
      }
    }
    __security_check_cookie(local_4 ^ (uint)&local_7c);
    return;
  }
  __security_check_cookie(local_4 ^ (uint)&local_7c);
  return;
}


/* FUN_0069c020 @ 0069c020  kind=gamemisc  attributed-by=none  size=42 */

int * FUN_0069c020(void)

{
  int *piVar1;
  int in_ECX;
  int *piVar2;
  int in_EDX;
  
  piVar1 = *(int **)(in_ECX + 0x9c);
  piVar2 = piVar1 + (uint)*(ushort *)(in_ECX + 0x98) * 4;
  while( true ) {
    if (piVar2 <= piVar1) {
      return (int *)0x0;
    }
    if ((*piVar1 == in_EDX) && (piVar1[3] != 0)) break;
    piVar1 = piVar1 + 4;
  }
  return piVar1;
}


/* FUN_0069c050 @ 0069c050  kind=gamemisc  attributed-by=none  size=54 */

undefined4
FUN_0069c050(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0069c020();
  if (iVar1 != 0) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = *(undefined4 *)(iVar1 + 0xc);
    }
    uVar2 = FUN_006908c0(param_3,*(undefined4 *)(iVar1 + 8));
    return uVar2;
  }
  return 0x8e;
}


/* FUN_0069c090 @ 0069c090  kind=gamemisc  attributed-by=none  size=407 */

void FUN_0069c090(void)

{
  int iVar1;
  int unaff_EBX;
  ushort uVar2;
  int unaff_ESI;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_c;
  uint local_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_28;
  uVar2 = 0;
  local_24 = 0;
  local_20 = 0;
  local_18 = 0;
  local_1c = 0;
  local_28 = FUN_006908c0();
  if (local_28 == 0) {
    if (*(short *)(unaff_EBX + 4) != 0) {
      local_28 = 0;
      do {
        local_28 = FUN_00692010();
        if (local_28 != 0) {
          *(ushort *)(unaff_EBX + 4) = uVar2 - 1;
          break;
        }
        if (local_8 + local_c <= *(uint *)(unaff_ESI + 4)) {
          local_24 = local_24 + 1;
          if ((local_14 == 0x68656164) || (local_14 == 0x62686564)) {
            local_20 = 1;
            if (local_8 < 0x36) goto LAB_0069c1e9;
            local_28 = FUN_006908c0();
            if ((local_28 != 0) || (iVar1 = FUN_00690cd0(), local_28 != 0)) goto LAB_0069c216;
            if (iVar1 != 0x5f0f3cf5) goto LAB_0069c1e9;
            local_28 = FUN_006908c0();
            if (local_28 != 0) goto LAB_0069c216;
          }
          else if (local_14 == 0x53494e47) {
            local_18 = 1;
          }
          else if (local_14 == 0x4d455441) {
            local_1c = 1;
          }
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(ushort *)(unaff_EBX + 4));
    }
    *(short *)(unaff_EBX + 4) = (short)local_24;
    if ((short)local_24 == 0) {
      __security_check_cookie(local_4 ^ (uint)&local_28);
      return;
    }
    if ((local_20 == 0) && ((local_18 == 0 || (local_1c == 0)))) {
LAB_0069c1e9:
      __security_check_cookie(local_4 ^ (uint)&local_28);
      return;
    }
  }
LAB_0069c216:
  __security_check_cookie(local_4 ^ (uint)&local_28);
  return;
}


/* FUN_0069c230 @ 0069c230  kind=gamemisc  attributed-by=none  size=349 */

void FUN_0069c230(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int local_18;
  undefined4 local_14;
  ushort local_10;
  int local_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_18;
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  local_8 = FUN_00690930(param_2);
  local_14 = FUN_00690cd0(param_2,&local_18);
  if (((local_18 == 0) && (local_18 = FUN_00692010(param_2,&DAT_00723610,&local_14), local_18 == 0))
     && (local_18 = FUN_0069c090(), local_18 == 0)) {
    *(undefined4 *)(param_1 + 0x94) = local_14;
    *(ushort *)(param_1 + 0x98) = local_10;
    uVar1 = FUN_00693a60(uVar1,0x10,0,local_10,0,&local_18);
    *(undefined4 *)(param_1 + 0x9c) = uVar1;
    if (((local_18 == 0) && (local_18 = FUN_006908c0(param_2,local_8 + 0xc), local_18 == 0)) &&
       (local_18 = FUN_00691f30(param_2,(uint)*(ushort *)(param_1 + 0x98) << 4), local_18 == 0)) {
      puVar4 = *(undefined4 **)(param_1 + 0x9c);
      iVar3 = 0;
      if (local_10 != 0) {
        do {
          uVar1 = FUN_00690aa0(param_2);
          *puVar4 = uVar1;
          uVar1 = FUN_00690aa0(param_2);
          puVar4[1] = uVar1;
          uVar1 = FUN_00690aa0(param_2);
          puVar4[2] = uVar1;
          iVar2 = FUN_00690aa0(param_2);
          puVar4[3] = iVar2;
          if ((uint)(puVar4[2] + iVar2) <= *(uint *)(param_2 + 4)) {
            puVar4 = puVar4 + 4;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)(uint)local_10);
      }
      FUN_00691fe0(param_2);
    }
  }
  __security_check_cookie(local_4 ^ (uint)&local_18);
  return;
}


/* FUN_0069c400 @ 0069c400  kind=gamemisc  attributed-by=none  size=46 */

void FUN_0069c400(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = (**(code **)(in_ECX + 0x1fc))();
  if (iVar1 == 0) {
    FUN_00692010();
  }
  return;
}


/* FUN_0069c470 @ 0069c470  kind=gamemisc  attributed-by=none  size=347 */

void FUN_0069c470(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined2 local_30;
  undefined2 local_2e;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_50;
  piVar1 = (int *)(param_1 + 0x104);
  local_50 = 0x60004;
  local_4c = 0x411;
  local_48 = 0x4020c;
  local_44 = 0;
  local_40 = 0x1a0004;
  local_3c = 0x6020c;
  local_38 = 0x8020c;
  local_34 = 0xa020c;
  local_30 = 0x20c;
  local_2e = 0xc;
  local_2c = 0xe020c;
  local_28 = 0x10020c;
  local_24 = 0x12020c;
  local_20 = 0x14020c;
  local_1c = 0x16020c;
  local_18 = 0x18020c;
  local_14 = 0x1a020c;
  local_10 = 0x1c020c;
  local_c = 0x1e020c;
  local_8 = 0;
  iVar2 = (**(code **)(param_1 + 0x1fc))(param_1,0x6d617870,param_2,0);
  if (iVar2 == 0) {
    iVar2 = FUN_00692010(param_2,&local_50,piVar1);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x10a) = 0;
      *(undefined4 *)(param_1 + 0x10e) = 0;
      *(undefined4 *)(param_1 + 0x112) = 0;
      *(undefined4 *)(param_1 + 0x116) = 0;
      *(undefined4 *)(param_1 + 0x11a) = 0;
      *(undefined4 *)(param_1 + 0x11e) = 0;
      *(undefined2 *)(param_1 + 0x122) = 0;
      if (0xffff < *piVar1) {
        iVar2 = FUN_00692010(param_2,&local_40,piVar1);
        if (iVar2 == 0) {
          if (*(short *)(param_1 + 0x118) == 0) {
            *(undefined2 *)(param_1 + 0x118) = 0x40;
          }
          if (0xfffb < *(ushort *)(param_1 + 0x114)) {
            *(undefined2 *)(param_1 + 0x114) = 0xfffb;
          }
          if (100 < *(ushort *)(param_1 + 0x122)) {
            *(undefined2 *)(param_1 + 0x122) = 100;
          }
        }
      }
    }
  }
  __security_check_cookie(local_4 ^ (uint)&local_50);
  return;
}


/* FUN_0069c5d0 @ 0069c5d0  kind=gamemisc  attributed-by=none  size=363 */

int FUN_0069c5d0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_10;
  int iStack_c;
  uint uStack_8;
  uint uStack_4;
  
  iVar1 = param_2;
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  *(int *)(param_1 + 0x16c) = param_2;
  param_2 = (**(code **)(param_1 + 0x1fc))(param_1,0x6e616d65,param_2,&local_10);
  if (param_2 == 0) {
    iVar2 = FUN_00690930(iVar1);
    iStack_c = iVar2;
    param_2 = FUN_00692010(iVar1,&DAT_0072367c,param_1 + 0x15c);
    if (param_2 == 0) {
      iVar4 = *(int *)(param_1 + 0x160);
      uStack_8 = iVar2 + 6 + iVar4 * 0xc;
      uStack_4 = local_10 + iVar2;
      if (uStack_4 < uStack_8) {
        return 0x91;
      }
      *(undefined4 *)(param_1 + 0x160) = 0;
      uVar3 = FUN_00693a60(uVar3,0x14,0,iVar4,0,&param_2);
      *(undefined4 *)(param_1 + 0x168) = uVar3;
      if ((param_2 == 0) && (param_2 = FUN_00691f30(iVar1,iVar4 * 0xc), param_2 == 0)) {
        iVar2 = *(int *)(param_1 + 0x168);
        for (; iVar4 != 0; iVar4 = iVar4 + -1) {
          param_2 = FUN_00692010(iVar1,&DAT_00723690,iVar2);
          if ((param_2 == 0) && (*(ushort *)(iVar2 + 8) != 0)) {
            *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + *(int *)(param_1 + 0x164) + iStack_c;
            if ((*(uint *)(iVar2 + 0xc) < uStack_8) ||
               (uStack_4 < (uint)*(ushort *)(iVar2 + 8) + *(uint *)(iVar2 + 0xc))) {
              *(undefined4 *)(iVar2 + 0xc) = 0;
              *(undefined2 *)(iVar2 + 8) = 0;
            }
            else {
              iVar2 = iVar2 + 0x14;
            }
          }
        }
        *(int *)(param_1 + 0x160) = (iVar2 - *(int *)(param_1 + 0x168)) / 0x14;
        FUN_00691fe0(iVar1);
        *(undefined2 *)(param_1 + 0x158) = *(undefined2 *)(param_1 + 0x160);
      }
    }
  }
  return param_2;
}


/* FUN_0069c740 @ 0069c740  kind=gamemisc  attributed-by=none  size=121 */

void FUN_0069c740(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x60) + 8);
  iVar3 = *(int *)(param_1 + 0x160);
  if (*(int *)(param_1 + 0x168) != 0) {
    if (iVar3 != 0) {
      puVar2 = (undefined4 *)(*(int *)(param_1 + 0x168) + 0x10);
      do {
        FUN_00691290(uVar1,*puVar2);
        *puVar2 = 0;
        *(undefined2 *)(puVar2 + -2) = 0;
        puVar2 = puVar2 + 5;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x168));
    *(undefined4 *)(param_1 + 0x168) = 0;
  }
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined2 *)(param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  return;
}


/* FUN_0069c7c0 @ 0069c7c0  kind=gamemisc  attributed-by=none  size=73 */

void FUN_0069c7c0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(param_1 + 0x1f8);
  iVar2 = (**(code **)(param_1 + 0x1fc))(param_1,0x636d6170,param_2,puVar1);
  if (iVar2 == 0) {
    iVar2 = FUN_00693a30(param_2,*puVar1,param_1 + 500);
    if (iVar2 != 0) {
      *puVar1 = 0;
    }
  }
  return;
}


/* FUN_0069cb00 @ 0069cb00  kind=gamemisc  attributed-by=none  size=58 */

void FUN_0069cb00(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1 + 0x1fc))(param_1,0x706f7374,param_2,0);
  if (iVar1 == 0) {
    FUN_00692010(param_2,&DAT_007236ac,param_1 + 0x1d4);
  }
  return;
}


/* FUN_0069cb40 @ 0069cb40  kind=gamemisc  attributed-by=none  size=58 */

void FUN_0069cb40(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1 + 0x1fc))(param_1,0x50434c54,param_2,0);
  if (iVar1 == 0) {
    FUN_00692010(param_2,&DAT_007236d8,param_1 + 0x22c);
  }
  return;
}


/* FUN_0069cec0 @ 0069cec0  kind=gamemisc  attributed-by=none  size=295 */

void FUN_0069cec0(int param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined2 local_38;
  undefined2 local_36;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_50;
  local_50 = 0x240004;
  local_4c = 0x410;
  local_48 = 0x4020d;
  local_44 = 0x6020d;
  local_40 = 0x8020d;
  local_3c = 0xa020c;
  local_38 = 0x20d;
  local_36 = 0xc;
  local_34 = 0xe020d;
  local_30 = 0x10020d;
  local_2c = 0x12020d;
  local_28 = 0x14020d;
  local_24 = 0x16020d;
  local_20 = 0x18020d;
  local_1c = 0x1a020d;
  local_18 = 0x1c020d;
  local_14 = 0x1e020d;
  local_10 = 0x20020d;
  local_c = 0x22020c;
  local_8 = 0;
  if (param_3 == '\0') {
    iVar1 = (**(code **)(param_1 + 0x1fc))(param_1,0x68686561,param_2,0);
    if (iVar1 != 0) goto LAB_0069cfd4;
    param_1 = param_1 + 0xd8;
  }
  else {
    iVar1 = (**(code **)(param_1 + 0x1fc))(param_1,0x76686561);
    if (iVar1 != 0) goto LAB_0069cfd4;
    param_1 = param_1 + 300;
  }
  iVar1 = FUN_00692010(param_2,&local_50,param_1);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
LAB_0069cfd4:
  __security_check_cookie(local_4 ^ (uint)&local_50);
  return;
}


/* FUN_0069d190 @ 0069d190  kind=gamemisc  attributed-by=none  size=424 */

undefined4 FUN_0069d190(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  
  uVar8 = (uint)CONCAT11(*(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 3));
  puVar2 = (undefined1 *)(uVar8 + param_1);
  if ((*(undefined1 **)(param_2 + 4) < puVar2) || (uVar8 < 0x206)) {
    FUN_0068f190(param_2,8);
  }
  puVar10 = (undefined1 *)(param_1 + 6);
  uVar8 = 0;
  param_1 = 0x100;
  do {
    puVar11 = puVar10;
    uVar3 = *puVar11;
    bVar4 = puVar11[1];
    if ((1 < *(int *)(param_2 + 8)) && ((bVar4 & 7) != 0)) {
      FUN_0068f190(param_2,8);
    }
    uVar9 = (uint)(ushort)(CONCAT11(uVar3,bVar4) >> 3);
    if (uVar8 < uVar9) {
      uVar8 = uVar9;
    }
    param_1 = param_1 + -1;
    puVar10 = puVar11 + 2;
  } while (param_1 != 0);
  if (*(undefined1 **)(param_2 + 4) < puVar11 + uVar8 * 8 + 10) {
    FUN_0068f190(param_2,8);
  }
  param_1 = uVar8 + 1;
  do {
    uVar3 = puVar10[4];
    uVar9 = (uint)CONCAT11(puVar10[2],puVar10[3]);
    uVar5 = puVar10[5];
    puVar12 = puVar10 + 8;
    uVar6 = puVar10[6];
    uVar7 = puVar10[7];
    if (uVar9 != 0) {
      if ((1 < *(int *)(param_2 + 8)) &&
         ((0xff < CONCAT11(*puVar10,puVar10[1]) || (0x100 < CONCAT11(*puVar10,puVar10[1]) + uVar9)))
         ) {
        FUN_0068f190(param_2,8);
      }
      if (CONCAT11(uVar6,uVar7) != 0) {
        if ((puVar12 + (CONCAT11(uVar6,uVar7) - 2) < puVar11 + uVar8 * 8 + 10) ||
           (puVar2 < puVar12 + (CONCAT11(uVar6,uVar7) - 2) + uVar9 * 2)) {
          FUN_0068f190(param_2,9);
        }
        if (0 < *(int *)(param_2 + 8)) {
          puVar10 = puVar12 + uVar9 * 2;
          while (puVar12 < puVar10) {
            uVar6 = *puVar12;
            puVar13 = puVar12 + 2;
            puVar1 = puVar12 + 1;
            puVar12 = puVar13;
            if ((CONCAT11(uVar6,*puVar1) != 0) &&
               (*(uint *)(param_2 + 0x50) <=
                (uint)(ushort)(CONCAT11(uVar6,*puVar1) + CONCAT11(uVar3,uVar5)))) {
              FUN_0068f190(param_2,0x10);
            }
          }
        }
      }
    }
    param_1 = param_1 + -1;
    puVar10 = puVar12;
  } while (param_1 != 0);
  return 0;
}


/* FUN_0069d340 @ 0069d340  kind=gamemisc  attributed-by=none  size=95 */

int FUN_0069d340(void)

{
  int iVar1;
  undefined1 *puVar2;
  uint in_EAX;
  int iVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBX;
  
  iVar3 = 0;
  if (in_EAX < 0x10000) {
    uVar5 = in_EAX >> 8;
    iVar1 = unaff_EBX + 0x206;
    if (uVar5 == 0) {
      puVar2 = (undefined1 *)(unaff_EBX + 6 + (in_EAX & 0xff) * 2);
      if (CONCAT11(*puVar2,puVar2[1]) == 0) {
        return iVar1;
      }
    }
    else {
      iVar4 = (CONCAT11(*(undefined1 *)(unaff_EBX + 6 + uVar5 * 2),
                        *(undefined1 *)(unaff_EBX + 7 + uVar5 * 2)) & 0xfffffff8) + iVar1;
      if (iVar4 != iVar1) {
        iVar3 = iVar4;
      }
    }
  }
  return iVar3;
}


/* FUN_0069d450 @ 0069d450  kind=gamemisc  attributed-by=none  size=312 */

short FUN_0069d450(undefined4 param_1,uint *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  short sVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  param_1 = *param_2 + 1;
  sVar3 = 0;
  if (0xffff < param_1) {
    *param_2 = 0;
    return 0;
  }
  do {
    puVar4 = (undefined1 *)FUN_0069d340();
    if (puVar4 != (undefined1 *)0x0) {
      uVar5 = (uint)CONCAT11(*puVar4,puVar4[1]);
      uVar8 = param_1 & 0xff;
      uVar9 = (uint)CONCAT11(puVar4[6],puVar4[7]);
      if (uVar9 != 0) {
        if (uVar8 < uVar5) {
          uVar7 = 0;
          uVar8 = uVar5;
        }
        else {
          uVar7 = uVar8 - uVar5;
        }
        param_1 = (param_1 & 0xffffff00) + uVar8;
        if (uVar7 < CONCAT11(puVar4[2],puVar4[3])) {
          puVar6 = puVar4 + 6 + uVar9 + uVar7 * 2 + -1;
          do {
            puVar1 = puVar6 + 1;
            puVar2 = puVar6 + 2;
            puVar6 = puVar6 + 2;
            if (CONCAT11(*puVar1,*puVar2) != 0) {
              sVar3 = CONCAT11(*puVar1,*puVar2) + CONCAT11(puVar4[4],puVar4[5]);
              if (sVar3 != 0) {
                *param_2 = param_1;
                return sVar3;
              }
            }
            param_1 = param_1 + 1;
            uVar7 = uVar7 + 1;
          } while (uVar7 < CONCAT11(puVar4[2],puVar4[3]));
        }
      }
    }
    param_1 = (param_1 & 0xffffff00) + 0x100;
  } while (param_1 < 0x10000);
  *param_2 = 0;
  return sVar3;
}


/* FUN_0069d600 @ 0069d600  kind=gamemisc  attributed-by=none  size=330 */

undefined4 FUN_0069d600(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint in_EAX;
  undefined1 *puVar4;
  undefined1 *puVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  int *unaff_EDI;
  undefined1 *local_14;
  
  iVar1 = unaff_EDI[4];
  uVar2 = unaff_EDI[8];
  if (in_EAX < uVar2) {
    iVar3 = uVar2 * 2;
    local_14 = (undefined1 *)(iVar1 + 0xe + in_EAX * 2);
    pcVar6 = (char *)(iVar1 + 0x10 + (iVar3 + in_EAX) * 2);
    puVar5 = (undefined1 *)(iVar3 + 0x10 + in_EAX * 2 + iVar1);
    iVar7 = uVar2 * -2 + 1;
    puVar4 = (undefined1 *)(iVar1 + uVar2 * 6 + 0x10 + in_EAX * 2);
    do {
      unaff_EDI[0xb] = (uint)CONCAT11(*local_14,puVar5[1 - (iVar3 + 2)]);
      unaff_EDI[10] = (uint)CONCAT11(*puVar5,pcVar6[iVar7]);
      unaff_EDI[0xc] = (uint)(byte)puVar4[iVar7] | (int)(short)((short)*pcVar6 << 8);
      uVar8 = (uint)CONCAT11(*puVar4,puVar4[1]);
      if ((((uVar2 - 1 <= in_EAX) && (unaff_EDI[10] == 0xffff)) && (unaff_EDI[0xb] == 0xffff)) &&
         ((uVar8 != 0 &&
          ((undefined1 *)(*(int *)(*unaff_EDI + 0x1f8) + *(int *)(*unaff_EDI + 500)) <
           puVar4 + uVar8 + 2)))) {
        unaff_EDI[0xc] = 1;
LAB_0069d71a:
        unaff_EDI[9] = in_EAX;
        unaff_EDI[0xd] = 0;
        return 0;
      }
      if (uVar8 != 0xffff) {
        if (uVar8 != 0) {
          unaff_EDI[9] = in_EAX;
          unaff_EDI[0xd] = (int)(puVar4 + uVar8);
          return 0;
        }
        goto LAB_0069d71a;
      }
      local_14 = local_14 + 2;
      in_EAX = in_EAX + 1;
      pcVar6 = pcVar6 + 2;
      puVar5 = puVar5 + 2;
      puVar4 = puVar4 + 2;
    } while (in_EAX < (uint)unaff_EDI[8]);
  }
  return 0xffffffff;
}


/* FUN_0069d750 @ 0069d750  kind=gamemisc  attributed-by=none  size=157 */

void FUN_0069d750(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  int in_EAX;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if (*(uint *)(in_EAX + 0x18) < 0xffff) {
    uVar6 = *(uint *)(in_EAX + 0x18) + 1;
    do {
      uVar4 = *(uint *)(in_EAX + 0x28);
      if (uVar6 < uVar4) {
        uVar6 = uVar4;
      }
      uVar3 = *(uint *)(in_EAX + 0x2c);
      if (uVar6 <= uVar3) {
        if (*(int *)(in_EAX + 0x34) == 0) {
          do {
            uVar4 = *(int *)(in_EAX + 0x30) + uVar6 & 0xffff;
            if (uVar4 != 0) goto LAB_0069d7e5;
            uVar6 = uVar6 + 1;
          } while (uVar6 <= uVar3);
        }
        else {
          iVar5 = *(int *)(in_EAX + 0x34) + -1 + (uVar6 - uVar4) * 2;
          do {
            puVar1 = (undefined1 *)(iVar5 + 1);
            puVar2 = (undefined1 *)(iVar5 + 2);
            iVar5 = iVar5 + 2;
            uVar4 = (uint)CONCAT11(*puVar1,*puVar2);
            if ((uVar4 != 0) && (uVar4 = uVar4 + *(int *)(in_EAX + 0x30) & 0xffff, uVar4 != 0)) {
LAB_0069d7e5:
              *(uint *)(in_EAX + 0x18) = uVar6;
              *(uint *)(in_EAX + 0x1c) = uVar4;
              return;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 <= uVar3);
        }
      }
      iVar5 = FUN_0069d600();
    } while (-1 < iVar5);
  }
  *(undefined4 *)(in_EAX + 0x18) = 0xffffffff;
  *(undefined4 *)(in_EAX + 0x1c) = 0;
  return;
}


/* FUN_0069dd70 @ 0069dd70  kind=gamemisc  attributed-by=none  size=1374 */

uint FUN_0069dd70(int *param_1,uint *param_2,char param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  uint local_38;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  undefined1 *local_20;
  char *local_14;
  char *local_10;
  undefined1 *local_c;
  
  iVar8 = param_1[4];
  uVar12 = *param_2;
  uVar4 = CONCAT11(*(undefined1 *)(iVar8 + 6),*(undefined1 *)(iVar8 + 7));
  uVar14 = uVar4 & 0xfffffffe;
  local_24 = 0;
  if ((uVar4 & 0xfffe) == 0) {
    return 0;
  }
  uVar5 = (uint)(uVar4 >> 1);
  local_28 = 0xffff;
  if (param_3 != '\0') {
    uVar12 = uVar12 + 1;
  }
  uVar11 = 0;
  uVar6 = 0;
  local_2c = uVar5;
  if (uVar5 != 0) {
    do {
      uVar6 = local_2c + uVar11 >> 1;
      iVar2 = iVar8 + 0xe + uVar6 * 2;
      local_28 = (uint)CONCAT11(*(undefined1 *)(iVar8 + 0xe + uVar6 * 2),*(undefined1 *)(iVar2 + 1))
      ;
      puVar9 = (undefined1 *)(iVar2 + uVar14 + 2);
      uVar15 = (uint)CONCAT11(*puVar9,*(undefined1 *)(iVar2 + 1 + uVar14 + 2));
      uVar13 = uVar6;
      if (uVar15 <= uVar12) {
        if (uVar12 <= local_28) {
          uVar13 = (int)(short)((short)(char)puVar9[uVar14] << 8) | (uint)(byte)puVar9[uVar14 + 1];
          local_20 = puVar9 + uVar14 * 2;
          uVar11 = (uint)CONCAT11(puVar9[uVar14 * 2],puVar9[uVar14 * 2 + 1]);
          if ((((uVar5 - 1 <= uVar6) && (uVar15 == 0xffff)) && (local_28 == 0xffff)) &&
             ((uVar11 != 0 &&
              ((undefined1 *)(*(int *)(*param_1 + 0x1f8) + *(int *)(*param_1 + 500)) <
               local_20 + uVar11 + 2)))) {
            uVar13 = 1;
            uVar11 = 0;
          }
          if ((*(byte *)(param_1 + 5) & 2) != 0) {
            local_30 = uVar6;
            if (uVar11 == 0xffff) {
              local_30 = uVar6 + 1;
            }
            puVar9 = local_20;
            local_38 = uVar6;
            if (uVar6 == 0) goto LAB_0069dfe1;
            local_14 = (char *)(param_1[4] + 0xc + uVar6 * 2);
            local_10 = (char *)(param_1[4] + 0xe + (uVar6 + uVar14) * 2);
            local_20 = local_14 + uVar14 + 2;
            local_c = (undefined1 *)(param_1[4] + uVar14 * 3 + 0xe + uVar6 * 2);
            goto LAB_0069df34;
          }
          if (uVar11 != 0xffff) goto LAB_0069e22a;
          break;
        }
        uVar11 = uVar6 + 1;
        uVar13 = local_2c;
      }
      local_2c = uVar13;
    } while (uVar11 < local_2c);
  }
  goto LAB_0069e191;
  while( true ) {
    uVar15 = (uint)CONCAT11(*local_20,local_10[1 - uVar14]);
    uVar13 = (int)(short)((short)*local_10 << 8) | (uint)(byte)local_c[1 - uVar14];
    uVar11 = (uint)CONCAT11(*local_c,(local_c + (1 - uVar14))[uVar14]);
    if (uVar11 != 0xffff) {
      local_30 = local_38 - 1;
    }
    local_38 = local_38 - 1;
    local_14 = local_14 + -2;
    local_20 = local_20 + -2;
    local_10 = local_10 + -2;
    puVar9 = local_c;
    local_28 = uVar7;
    local_c = local_c + -2;
    if (local_38 == 0) break;
LAB_0069df34:
    uVar7 = (uint)CONCAT11(*local_14,local_20[1 - (uVar14 + 2)]);
    if (uVar7 < uVar12) break;
  }
LAB_0069dfe1:
  local_20 = puVar9;
  if (local_30 == uVar6 + 1) {
    if (local_38 != uVar6) {
      iVar8 = param_1[4] + 0xe + uVar6 * 2;
      local_28 = (uint)CONCAT11(*(undefined1 *)(param_1[4] + 0xe + uVar6 * 2),
                                *(undefined1 *)(iVar8 + 1));
      iVar2 = iVar8 + 2 + uVar14;
      iVar10 = iVar2 + uVar14;
      uVar15 = (uint)CONCAT11(*(undefined1 *)(iVar8 + 2 + uVar14),
                              *(undefined1 *)(iVar8 + 3 + uVar14));
      local_20 = (undefined1 *)(iVar10 + uVar14);
      uVar13 = (int)(short)((short)*(char *)(iVar2 + uVar14) << 8) | (uint)*(byte *)(iVar10 + 1);
      uVar11 = (uint)CONCAT11(*(undefined1 *)(iVar10 + uVar14),local_20[1]);
    }
    local_38 = uVar6 + 1;
    local_30 = uVar6;
    if (local_38 < uVar5) {
      iVar8 = param_1[4];
      local_10 = (char *)(iVar8 + 0xe + local_38 * 2);
      local_14 = (char *)(iVar8 + 0x10 + (local_38 + uVar14) * 2);
      puVar9 = local_10 + uVar14 + 2;
      local_c = (undefined1 *)(iVar8 + uVar14 * 3 + 0x10 + local_38 * 2);
      do {
        local_20 = puVar9;
        puVar1 = local_20 + (1 - (uVar14 + 2));
        uVar3 = *local_10;
        uVar7 = (uint)CONCAT11(*local_20,local_14[1 - uVar14]);
        if (uVar12 < uVar7) break;
        uVar13 = (int)(short)((short)*local_14 << 8) | (uint)(byte)local_c[1 - uVar14];
        uVar11 = (uint)CONCAT11(*local_c,(local_c + (1 - uVar14))[uVar14]);
        if (uVar11 != 0xffff) {
          local_30 = local_38;
        }
        local_10 = local_10 + 2;
        puVar9 = local_20 + 2;
        local_14 = local_14 + 2;
        local_38 = local_38 + 1;
        local_20 = local_c;
        uVar15 = uVar7;
        local_28 = (uint)CONCAT11(uVar3,*puVar1);
        local_c = local_c + 2;
      } while (local_38 < uVar5);
    }
    local_38 = local_38 - 1;
    bVar16 = local_30 == uVar6;
    uVar6 = local_38;
    if (bVar16) goto LAB_0069e191;
  }
  uVar6 = local_30;
  if (local_30 != local_38) {
    iVar8 = param_1[4] + 0xe + local_30 * 2;
    local_28 = (uint)CONCAT11(*(undefined1 *)(param_1[4] + 0xe + local_30 * 2),
                              *(undefined1 *)(iVar8 + 1));
    iVar2 = iVar8 + 2 + uVar14;
    uVar15 = (uint)CONCAT11(*(undefined1 *)(iVar8 + 2 + uVar14),*(undefined1 *)(iVar2 + 1));
    iVar8 = iVar2 + uVar14;
    uVar13 = (int)(short)((short)*(char *)(iVar2 + uVar14) << 8) | (uint)*(byte *)(iVar8 + 1);
    local_20 = (undefined1 *)(iVar8 + uVar14);
    uVar11 = (uint)CONCAT11(*(undefined1 *)(iVar8 + uVar14),local_20[1]);
  }
LAB_0069e22a:
  if (uVar11 == 0) {
    local_24 = uVar13 + uVar12 & 0xffff;
  }
  else {
    local_24 = (uint)CONCAT11(local_20[uVar11 + (uVar12 - uVar15) * 2],
                              (local_20 + uVar11 + (uVar12 - uVar15) * 2)[1]);
    if (local_24 != 0) {
      local_24 = uVar13 + local_24 & 0xffff;
    }
  }
LAB_0069e191:
  if (param_3 != '\0') {
    if ((local_28 < uVar12) && (uVar6 + 1 == uVar5)) {
      return 0;
    }
    iVar8 = FUN_0069d600();
    if (iVar8 == 0) {
      param_1[6] = uVar12;
      if (local_24 == 0) {
        param_1[6] = uVar12;
        FUN_0069d750();
        local_24 = param_1[7];
      }
      else {
        param_1[7] = local_24;
      }
      if (local_24 != 0) {
        *param_2 = param_1[6];
      }
    }
    else if (local_24 != 0) {
      *param_2 = uVar12;
      return local_24;
    }
  }
  return local_24;
}


/* FUN_0069e3b0 @ 0069e3b0  kind=gamemisc  attributed-by=none  size=159 */

undefined4 FUN_0069e3b0(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (*(uint *)(param_2 + 4) < param_1 + 10U) {
    FUN_0068f190(param_2,8);
  }
  uVar3 = (uint)CONCAT11(*(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 3));
  iVar5 = param_1 + 9;
  uVar4 = (uint)CONCAT11(*(undefined1 *)(param_1 + 8),*(undefined1 *)(param_1 + 9));
  if ((*(uint *)(param_2 + 4) < uVar3 + param_1) || (uVar3 < uVar4 * 2 + 10)) {
    FUN_0068f190(param_2,8);
  }
  if (0 < *(int *)(param_2 + 8)) {
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      puVar1 = (undefined1 *)(iVar5 + 1);
      puVar2 = (undefined1 *)(iVar5 + 2);
      iVar5 = iVar5 + 2;
      if (*(uint *)(param_2 + 0x50) <= (uint)CONCAT11(*puVar1,*puVar2)) {
        FUN_0068f190(param_2,0x10);
      }
    }
  }
  return 0;
}


/* FUN_0069e550 @ 0069e550  kind=gamemisc  attributed-by=none  size=708 */

undefined4 FUN_0069e550(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  short sVar6;
  short sVar7;
  uint uVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uStack_c;
  uint uStack_8;
  
  if (*(uint *)(param_2 + 4) < param_1 + 0x2010U) {
    FUN_0068f190(param_2,8);
  }
  uVar8 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_1 + 4),*(undefined1 *)(param_1 + 5)),
                            *(undefined1 *)(param_1 + 6)),*(undefined1 *)(param_1 + 7));
  if (((uint)(*(int *)(param_2 + 4) - param_1) < uVar8) || (uVar8 < 0x2010)) {
    FUN_0068f190(param_2,8);
  }
  iVar12 = param_1 + 0x200c;
  puVar11 = (undefined1 *)(param_1 + 0x200f);
  puVar9 = (undefined1 *)(param_1 + 0x200d);
  iVar10 = param_1 + 0x200e;
  uVar8 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_1 + 0x200c),
                                     *(undefined1 *)(param_1 + 0x200d)),
                            *(undefined1 *)(param_1 + 0x200e)),*puVar11);
  if (*(uint *)(param_2 + 4) < param_1 + 0x2010 + uVar8 * 0xc) {
    FUN_0068f190(param_2,8);
  }
  uStack_8 = 0;
  uStack_c = 0;
  if (uVar8 != 0) {
    do {
      sVar6 = CONCAT11(*(undefined1 *)(iVar12 + 4),puVar9[4]);
      uVar15 = CONCAT31(CONCAT21(sVar6,*(undefined1 *)(iVar10 + 4)),puVar11[4]);
      sVar7 = CONCAT11(*(undefined1 *)(iVar12 + 8),puVar9[8]);
      puVar1 = puVar11 + 8;
      puVar11 = puVar11 + 0xc;
      uVar14 = CONCAT31(CONCAT21(sVar7,*(undefined1 *)(iVar10 + 8)),*puVar1);
      uVar2 = *(undefined1 *)(iVar12 + 0xc);
      iVar12 = iVar12 + 0xc;
      puVar9 = puVar9 + 0xc;
      uVar3 = *puVar9;
      uVar4 = *(undefined1 *)(iVar10 + 0xc);
      iVar10 = iVar10 + 0xc;
      uVar5 = *puVar11;
      if (uVar14 < uVar15) {
        FUN_0068f190(param_2,8);
      }
      if ((uStack_c != 0) && (uVar15 <= uStack_8)) {
        FUN_0068f190(param_2,8);
      }
      if (0 < *(int *)(param_2 + 8)) {
        if (*(uint *)(param_2 + 0x50) <=
            (CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),uVar5) - uVar15) + uVar14) {
          FUN_0068f190(param_2,0x10);
        }
        iVar13 = (uVar14 - uVar15) + 1;
        if (sVar6 == 0) {
          if (sVar7 != 0) {
            FUN_0068f190(param_2,8);
          }
          for (; iVar13 != 0; iVar13 = iVar13 + -1) {
            if ((*(byte *)(((uVar15 & 0xffff) >> 3) + 0xc + param_1) &
                (byte)(0x80 >> ((byte)(uVar15 & 0xffff) & 7))) != 0) {
              FUN_0068f190(param_2,8);
            }
            uVar15 = uVar15 + 1;
          }
        }
        else {
          for (; iVar13 != 0; iVar13 = iVar13 + -1) {
            if ((*(byte *)((uVar15 >> 0x13) + 0xc + param_1) &
                (byte)(0x80 >> ((byte)(uVar15 >> 0x10) & 7))) == 0) {
              FUN_0068f190(param_2,8);
            }
            if ((*(byte *)(((uVar15 & 0xffff) >> 3) + 0xc + param_1) &
                (byte)(0x80 >> ((byte)(uVar15 & 0xffff) & 7))) == 0) {
              FUN_0068f190(param_2,8);
            }
            uVar15 = uVar15 + 1;
          }
        }
      }
      uStack_c = uStack_c + 1;
      uStack_8 = uVar14;
    } while (uStack_c < uVar8);
  }
  return 0;
}


/* FUN_0069f380 @ 0069f380  kind=gamemisc  attributed-by=none  size=191 */

void FUN_0069f380(void)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  int unaff_EBX;
  uint uVar4;
  uint local_4;
  
  if (*(int *)(unaff_EBX + 0x1c) != -1) {
    uVar4 = *(uint *)(unaff_EBX + 0x24);
    local_4 = *(int *)(unaff_EBX + 0x1c) + 1;
    if (uVar4 < *(uint *)(unaff_EBX + 0x28)) {
      puVar1 = (undefined1 *)(*(int *)(unaff_EBX + 0x10) + 0x15 + uVar4 * 0xc);
      do {
        uVar2 = CONCAT31(CONCAT21(CONCAT11(puVar1[-5],puVar1[-4]),puVar1[-3]),puVar1[-2]);
        iVar3 = CONCAT31(CONCAT21(CONCAT11(puVar1[3],puVar1[4]),puVar1[5]),puVar1[6]);
        if (local_4 < uVar2) {
          local_4 = uVar2;
        }
        if ((local_4 <= CONCAT31(CONCAT21(CONCAT11(puVar1[-1],*puVar1),puVar1[1]),puVar1[2])) &&
           (iVar3 != 0)) {
          *(uint *)(unaff_EBX + 0x24) = uVar4;
          *(uint *)(unaff_EBX + 0x1c) = local_4;
          *(int *)(unaff_EBX + 0x20) = iVar3;
          return;
        }
        uVar4 = uVar4 + 1;
        puVar1 = puVar1 + 0xc;
      } while (uVar4 < *(uint *)(unaff_EBX + 0x28));
    }
  }
  *(undefined1 *)(unaff_EBX + 0x18) = 0;
  return;
}


/* FUN_0069f450 @ 0069f450  kind=gamemisc  attributed-by=none  size=360 */

int FUN_0069f450(int param_1,uint *param_2,char param_3)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint local_10;
  uint local_c;
  uint local_8;
  
  iVar2 = *(int *)(param_1 + 0x10);
  local_10 = *param_2;
  iVar5 = 0;
  uVar7 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar2 + 0xc),*(undefined1 *)(iVar2 + 0xd)),
                            *(undefined1 *)(iVar2 + 0xe)),*(undefined1 *)(iVar2 + 0xf));
  if (uVar7 == 0) {
    return 0;
  }
  uVar4 = 0xffffffff;
  if (param_3 != '\0') {
    local_10 = local_10 + 1;
  }
  local_c = 0;
  uVar6 = 0;
  local_8 = uVar7;
  if (uVar7 != 0) {
    do {
      uVar6 = local_8 + local_c >> 1;
      puVar1 = (undefined1 *)(iVar2 + 0x14 + uVar6 * 0xc);
      uVar4 = CONCAT31(CONCAT21(CONCAT11(*puVar1,*(undefined1 *)(iVar2 + 0x15 + uVar6 * 0xc)),
                                puVar1[2]),puVar1[3]);
      uVar3 = uVar6;
      if (CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar2 + 0x10 + uVar6 * 0xc),
                                     *(undefined1 *)(iVar2 + 0x11 + uVar6 * 0xc)),puVar1[-2]),
                   puVar1[-1]) <= local_10) {
        if (local_10 <= uVar4) {
          iVar5 = CONCAT31(CONCAT21(CONCAT11(puVar1[4],puVar1[5]),puVar1[6]),puVar1[7]);
          goto LAB_0069f558;
        }
        local_c = uVar6 + 1;
        uVar3 = local_8;
      }
      local_8 = uVar3;
    } while (local_c < local_8);
    iVar5 = 0;
  }
LAB_0069f558:
  if (param_3 != '\0') {
    if ((uVar4 < local_10) && (uVar6 = uVar6 + 1, uVar6 == uVar7)) {
      return 0;
    }
    *(undefined1 *)(param_1 + 0x18) = 1;
    *(uint *)(param_1 + 0x1c) = local_10;
    *(uint *)(param_1 + 0x24) = uVar6;
    if (iVar5 == 0) {
      FUN_0069f380();
      if (*(char *)(param_1 + 0x18) == '\0') {
        return 0;
      }
      iVar5 = *(int *)(param_1 + 0x20);
    }
    else {
      *(int *)(param_1 + 0x20) = iVar5;
    }
    if (iVar5 != 0) {
      *param_2 = *(uint *)(param_1 + 0x1c);
    }
  }
  return iVar5;
}


/* FUN_0069f670 @ 0069f670  kind=gamemisc  attributed-by=none  size=45 */

void FUN_0069f670(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if ((*(int *)(param_1 + 0x24) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_00691290(*(int *)(param_1 + 0x24),*(int *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}


/* FUN_0069f6a0 @ 0069f6a0  kind=gamemisc  attributed-by=none  size=57 */

undefined4 FUN_0069f6a0(void)

{
  undefined4 uVar1;
  undefined4 in_ECX;
  int unaff_ESI;
  uint unaff_EDI;
  
  if (*(uint *)(unaff_ESI + 0x1c) < unaff_EDI) {
    *(undefined4 *)(unaff_ESI + 0x24) = in_ECX;
    uVar1 = FUN_00693a60();
    *(undefined4 *)(unaff_ESI + 0x20) = uVar1;
    *(uint *)(unaff_ESI + 0x1c) = unaff_EDI;
  }
  return 0;
}


/* FUN_0069f720 @ 0069f720  kind=gamemisc  attributed-by=none  size=803 */

undefined4 FUN_0069f720(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined1 *puVar12;
  int iVar13;
  uint uVar14;
  undefined1 *puVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  undefined1 *puVar19;
  uint local_28;
  uint local_24;
  uint uStack_20;
  
  puVar10 = (undefined1 *)(param_1 + 6);
  puVar12 = (undefined1 *)(param_1 + 7);
  puVar8 = (undefined1 *)(param_1 + 8);
  uVar9 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 3)),
                            *(undefined1 *)(param_1 + 4)),*(undefined1 *)(param_1 + 5));
  puVar7 = (undefined1 *)(param_1 + 9);
  iVar13 = CONCAT31(CONCAT21(CONCAT11(*puVar10,*puVar12),*puVar8),*puVar7);
  if (((uint)(*(int *)(param_2 + 4) - param_1) < uVar9) || (uVar9 < iVar13 * 0xb + 10U)) {
    FUN_0068f190(param_2,8);
  }
  local_24 = 1;
  for (; iVar13 != 0; iVar13 = iVar13 + -1) {
    uVar17 = (uint)CONCAT21(CONCAT11(puVar12[3],puVar8[3]),puVar7[3]);
    puVar15 = puVar10 + 7;
    puVar10 = puVar10 + 0xb;
    uVar14 = CONCAT31(CONCAT21(CONCAT11(*puVar15,puVar12[7]),puVar8[7]),puVar7[7]);
    puVar12 = puVar12 + 0xb;
    puVar8 = puVar8 + 0xb;
    puVar7 = puVar7 + 0xb;
    uVar11 = CONCAT31(CONCAT21(CONCAT11(*puVar10,*puVar12),*puVar8),*puVar7);
    if ((uVar9 <= uVar14) || (uVar9 <= uVar11)) {
      FUN_0068f190(param_2,8);
    }
    if (uVar17 < local_24) {
      FUN_0068f190(param_2,8);
    }
    local_24 = uVar17 + 1;
    if (uVar14 != 0) {
      puVar15 = (undefined1 *)(uVar14 + 4 + param_1);
      iVar18 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(uVar14 + param_1),
                                          *(undefined1 *)(uVar14 + 1 + param_1)),
                                 *(undefined1 *)(uVar14 + 2 + param_1)),puVar15[-1]);
      local_28 = 0;
      if (*(undefined1 **)(param_2 + 4) < puVar15 + iVar18 * 4) {
        FUN_0068f190(param_2,8);
      }
      for (; iVar18 != 0; iVar18 = iVar18 + -1) {
        uVar17 = (uint)CONCAT21(CONCAT11(*puVar15,puVar15[1]),puVar15[2]);
        uVar14 = (byte)puVar15[3] + uVar17;
        puVar15 = puVar15 + 4;
        if (0x10ffff < uVar14) {
          FUN_0068f190(param_2,8);
        }
        if (uVar17 < local_28) {
          FUN_0068f190(param_2,8);
        }
        local_28 = uVar14 + 1;
      }
    }
    if (uVar11 != 0) {
      iVar4 = uVar11 + 4 + param_1;
      puVar15 = (undefined1 *)(iVar4 + -3);
      puVar19 = (undefined1 *)(iVar4 + -2);
      iVar18 = iVar4 + -1;
      iVar16 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(uVar11 + param_1),*puVar15),
                                 *(undefined1 *)(iVar4 + -2)),*(undefined1 *)(iVar4 + -1));
      uVar11 = *(int *)(param_2 + 4) - iVar4;
      uStack_20 = 0;
      if (uVar11 <= (uint)(iVar16 * 4) && iVar16 * 4 - uVar11 != 0) {
        FUN_0068f190(param_2,8);
      }
      for (; iVar16 != 0; iVar16 = iVar16 + -1) {
        puVar1 = puVar15 + 3;
        puVar2 = puVar19 + 3;
        puVar3 = (undefined1 *)(iVar18 + 3);
        puVar15 = puVar15 + 5;
        puVar19 = puVar19 + 5;
        uVar5 = *puVar19;
        uVar6 = *(undefined1 *)(iVar18 + 5);
        iVar18 = iVar18 + 5;
        uVar11 = (uint)CONCAT21(CONCAT11(*puVar1,*puVar2),*puVar3);
        if (0x10ffff < uVar11) {
          FUN_0068f190(param_2,8);
        }
        if (uVar11 < uStack_20) {
          FUN_0068f190(param_2,8);
        }
        uStack_20 = uVar11 + 1;
        if ((0 < *(int *)(param_2 + 8)) &&
           (*(uint *)(param_2 + 0x50) <= (uint)CONCAT11(uVar5,uVar6))) {
          FUN_0068f190(param_2,0x10);
        }
      }
    }
  }
  return 0;
}


/* FUN_0069fa90 @ 0069fa90  kind=gamemisc  attributed-by=none  size=108 */

undefined4 FUN_0069fa90(void)

{
  uint uVar1;
  uint uVar2;
  undefined1 *in_EDX;
  uint unaff_EBX;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar3 = CONCAT31(CONCAT21(CONCAT11(*in_EDX,in_EDX[1]),in_EDX[2]),in_EDX[3]);
  if (uVar3 != 0) {
    do {
      uVar2 = uVar3 + uVar4 >> 1;
      uVar1 = (uint)CONCAT21(CONCAT11(in_EDX[uVar2 * 4 + 4],in_EDX[uVar2 * 4 + 5]),
                             in_EDX[uVar2 * 4 + 6]);
      if (uVar1 <= unaff_EBX) {
        if (unaff_EBX <= (byte)in_EDX[uVar2 * 4 + 7] + uVar1) {
          return 1;
        }
        uVar4 = uVar2 + 1;
        uVar2 = uVar3;
      }
      uVar3 = uVar2;
    } while (uVar4 < uVar2);
  }
  return 0;
}


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


/* FUN_006a0860 @ 006a0860  kind=gamemisc  attributed-by=none  size=46 */

void FUN_006a0860(void)

{
  int unaff_ESI;
  
  FUN_00691ee0(*(undefined4 *)(unaff_ESI + 0x68),unaff_ESI + 0x304);
  *(undefined4 *)(unaff_ESI + 0x308) = 0;
  *(undefined4 *)(unaff_ESI + 0x30c) = 0;
  *(undefined4 *)(unaff_ESI + 0x310) = 0;
  *(undefined4 *)(unaff_ESI + 0x314) = 0;
  return;
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


/* FUN_006a1c20 @ 006a1c20  kind=gamemisc  attributed-by=none  size=59 */

uint FUN_006a1c20(void)

{
  int in_EAX;
  undefined4 uVar1;
  int iVar2;
  uint in_ECX;
  
  uVar1 = FUN_00690cd0();
  *(undefined4 *)(in_EAX + 0xc) = uVar1;
  if (in_ECX == 0) {
    iVar2 = FUN_00692010();
    in_ECX = (uint)(iVar2 != 0);
  }
  return in_ECX;
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


/* FUN_006a2240 @ 006a2240  kind=gamemisc  attributed-by=none  size=26 */

void FUN_006a2240(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0068f3b0(param_1,param_2,0,param_3);
  return;
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


/* FUN_006a3780 @ 006a3780  kind=gamemisc  attributed-by=none  size=59 */

int FUN_006a3780(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_4;
  
  iVar1 = FUN_006a30a0(param_1,param_2,&local_4);
  if (iVar1 == 0) {
    FUN_00691360(param_3,local_4,param_4);
  }
  return iVar1;
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


/* FUN_006a38b0 @ 006a38b0  kind=gamemisc  attributed-by=none  size=90 */

void FUN_006a38b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_18;
  *param_4 = 0x7fffffff;
  local_14 = param_2;
  local_18 = 0;
  local_10 = param_3;
  local_c = 0;
  local_8 = 0;
  FUN_006a2240(param_1,&local_18,param_4);
  __security_check_cookie(local_4 ^ (uint)&local_18);
  return;
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


/* FUN_006a3e30 @ 006a3e30  kind=gamemisc  attributed-by=none  size=69 */

void FUN_006a3e30(int param_1,undefined4 param_2)

{
  char cVar1;
  int in_EAX;
  int in_ECX;
  int in_EDX;
  
  cVar1 = *(char *)(param_1 + 0x5a);
  FUN_006a3cb0(param_2,-in_EDX,-in_EAX,-in_ECX);
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x5a) == '\0')) {
    *(int *)(*(int *)(param_1 + 0x5c) + 0x14) = -*(int *)(*(int *)(param_1 + 0x5c) + 0x14);
  }
  return;
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


/* FUN_006a4910 @ 006a4910  kind=gamemisc  attributed-by=none  size=7 */

void FUN_006a4910(void)

{
  undefined4 *in_EAX;
  
  *in_EAX = 0;
  return;
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


/* FUN_006a4a40 @ 006a4a40  kind=gamemisc  attributed-by=none  size=218 */

void FUN_006a4a40(undefined4 *param_1,undefined4 param_2,int param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  short sVar4;
  uint uVar5;
  short sVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  
  iVar9 = param_1[1];
  iVar2 = (iVar9 + -1 + param_3 & -iVar9) >> ((byte)*param_1 & 0x1f);
  iVar7 = iVar2;
  if ((int)param_1[6] < (int)((param_4 - iVar9) - param_3)) {
    iVar7 = (int)(-iVar9 & param_4) >> ((byte)*param_1 & 0x1f);
  }
  if ((-1 < iVar7) && (uVar5 = (uint)*(ushort *)(param_1 + 0xf), iVar2 < (int)uVar5)) {
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    if ((int)uVar5 <= iVar7) {
      iVar7 = uVar5 - 1;
    }
    sVar4 = (short)(iVar2 >> 3);
    iVar9 = (int)sVar4;
    sVar6 = (short)(iVar7 >> 3);
    bVar1 = ~(byte)(0x7f >> ((byte)iVar7 & 7));
    if (iVar9 < *(short *)((int)param_1 + 0xa2)) {
      *(short *)((int)param_1 + 0xa2) = sVar4;
    }
    if ((int)*(short *)(param_1 + 0x29) < (int)sVar6) {
      *(short *)(param_1 + 0x29) = sVar6;
    }
    iVar7 = sVar6 - iVar9;
    pbVar3 = (byte *)(param_1[0x26] + param_1[0x10] + iVar9);
    bVar8 = (byte)(0xff >> ((byte)iVar2 & 7));
    if (0 < iVar7) {
      *pbVar3 = *pbVar3 | bVar8;
      while (iVar7 = iVar7 + -1, 0 < iVar7) {
        pbVar3 = pbVar3 + 1;
        *pbVar3 = 0xff;
      }
      pbVar3[1] = pbVar3[1] | bVar1;
      return;
    }
    *pbVar3 = *pbVar3 | bVar1 & bVar8;
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


/* FUN_006a5420 @ 006a5420  kind=gamemisc  attributed-by=none  size=6 */

undefined4 FUN_006a5420(void)

{
  return 0x13;
}


/* FUN_006a5430 @ 006a5430  kind=gamemisc  attributed-by=none  size=57 */

int * FUN_006a5430(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = param_2;
  *param_2 = 0;
  iVar2 = FUN_00692230(param_1,0x18,&param_2);
  if (param_2 == (int *)0x0) {
    *(undefined4 *)(iVar2 + 8) = param_1;
    *piVar1 = iVar2;
    return (int *)0x0;
  }
  return param_2;
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


/* FUN_006a58a0 @ 006a58a0  kind=gamemisc  attributed-by=none  size=24 */

void FUN_006a58a0(void)

{
  undefined4 *unaff_ESI;
  
  FUN_00691290();
  unaff_ESI[2] = 0;
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
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


/* FUN_006a5950 @ 006a5950  kind=gamemisc  attributed-by=none  size=27 */

void FUN_006a5950(void)

{
  undefined4 *unaff_ESI;
  
  FUN_00691290();
  unaff_ESI[2] = 0;
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  unaff_ESI[3] = 0;
  return;
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


/* FUN_006a59f0 @ 006a59f0  kind=gamemisc  attributed-by=none  size=27 */

void FUN_006a59f0(void)

{
  byte *pbVar1;
  uint in_ECX;
  uint *in_EDX;
  
  if (in_ECX < *in_EDX) {
    pbVar1 = (byte *)(((int)in_ECX >> 3) + in_EDX[2]);
    *pbVar1 = *pbVar1 & ~(byte)(0x80 >> ((byte)in_ECX & 7));
  }
  return;
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


/* FUN_006a5b30 @ 006a5b30  kind=gamemisc  attributed-by=none  size=49 */

undefined4 FUN_006a5b30(undefined4 param_1)

{
  int *in_EAX;
  undefined4 uVar1;
  int *unaff_ESI;
  int local_4;
  
  if (*in_EAX == 0) {
    uVar1 = FUN_006a5ae0(param_1,&local_4);
    *unaff_ESI = local_4;
    return uVar1;
  }
  *unaff_ESI = in_EAX[2] + -0x10 + *in_EAX * 0x10;
  return 0;
}


/* FUN_006a5b70 @ 006a5b70  kind=gamemisc  attributed-by=none  size=138 */

int FUN_006a5b70(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  int *in_ECX;
  uint in_EDX;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  
  iVar1 = FUN_006a5b30();
  if ((iVar1 == 0) && (iVar1 = FUN_006a5970(), iVar1 == 0)) {
    pbVar3 = (byte *)((in_EDX >> 3) + param_1);
    iVar4 = 0x80 >> ((byte)in_EDX & 7);
    *in_ECX = param_2;
    pbVar6 = (byte *)in_ECX[2];
    iVar5 = 0x80;
    for (; param_2 != 0; param_2 = param_2 + -1) {
      bVar2 = *pbVar6 & ~(byte)iVar5;
      if ((*pbVar3 & (byte)iVar4) != 0) {
        bVar2 = bVar2 | (byte)iVar5;
      }
      iVar4 = iVar4 >> 1;
      *pbVar6 = bVar2;
      if (iVar4 == 0) {
        pbVar3 = pbVar3 + 1;
        iVar4 = 0x80;
      }
      iVar5 = iVar5 >> 1;
      if (iVar5 == 0) {
        pbVar6 = pbVar6 + 1;
        iVar5 = 0x80;
      }
    }
  }
  return iVar1;
}


/* FUN_006a5c00 @ 006a5c00  kind=gamemisc  attributed-by=none  size=87 */

uint FUN_006a5c00(void)

{
  uint uVar1;
  uint uVar2;
  int in_EAX;
  uint *puVar3;
  int in_ECX;
  uint *puVar4;
  int in_EDX;
  byte *pbVar5;
  byte *pbVar6;
  
  puVar3 = (uint *)(in_EAX * 0x10 + *(int *)(in_EDX + 8));
  puVar4 = (uint *)(in_ECX * 0x10 + *(int *)(in_EDX + 8));
  pbVar5 = (byte *)puVar4[2];
  uVar1 = *puVar4;
  pbVar6 = (byte *)puVar3[2];
  uVar2 = *puVar3;
  if (uVar2 < uVar1) {
    uVar1 = uVar2;
  }
  for (; 7 < uVar1; uVar1 = uVar1 - 8) {
    if ((*pbVar5 & *pbVar6) != 0) {
      return 1;
    }
    pbVar5 = pbVar5 + 1;
    pbVar6 = pbVar6 + 1;
  }
  if (uVar1 == 0) {
    return 0;
  }
  return (uint)(*pbVar6 & *pbVar5) & ~(0xff >> ((byte)uVar1 & 0x1f));
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


/* FUN_006a5de0 @ 006a5de0  kind=gamemisc  attributed-by=none  size=35 */

void FUN_006a5de0(void)

{
  FUN_006a5a60();
  FUN_006a5a60();
  FUN_006a58a0();
  return;
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


/* FUN_006a5e40 @ 006a5e40  kind=gamemisc  attributed-by=none  size=29 */

void FUN_006a5e40(undefined4 param_1)

{
  undefined1 local_4 [4];
  
  FUN_006a5e20();
  FUN_006a5ae0(param_1,local_4);
  return;
}


/* FUN_006a5e60 @ 006a5e60  kind=gamemisc  attributed-by=none  size=45 */

void FUN_006a5e60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_006a5e40();
  if (iVar1 == 0) {
    FUN_006a5b70(param_1,param_3);
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


/* FUN_006a6000 @ 006a6000  kind=gamemisc  attributed-by=none  size=26 */

void FUN_006a6000(undefined4 param_1)

{
  FUN_006a5e20();
  FUN_006a5d80(param_1);
  return;
}


/* FUN_006a6020 @ 006a6020  kind=gamemisc  attributed-by=none  size=34 */

void FUN_006a6020(void)

{
  undefined4 *unaff_ESI;
  
  FUN_006a5de0();
  FUN_006a5de0();
  unaff_ESI[1] = 0;
  *unaff_ESI = 0;
  return;
}


/* FUN_006a6050 @ 006a6050  kind=gamemisc  attributed-by=none  size=22 */

undefined4 FUN_006a6050(undefined4 param_1)

{
  undefined4 *unaff_ESI;
  
  memset(unaff_ESI,0,0x58);
  *unaff_ESI = param_1;
  return 0;
}


/* FUN_006a6070 @ 006a6070  kind=gamemisc  attributed-by=none  size=46 */

void FUN_006a6070(void)

{
  int in_EAX;
  int in_EDX;
  
  if ((0 < in_EAX) && (in_EAX < 3)) {
    *(int *)(in_EDX + 0xc) = in_EAX;
    *(undefined4 *)(in_EDX + 4) = 0;
    FUN_006a5e10();
    FUN_006a5e10();
    return;
  }
  *(undefined4 *)(in_EDX + 4) = 6;
  *(int *)(in_EDX + 0xc) = in_EAX;
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


/* FUN_006a6370 @ 006a6370  kind=gamemisc  attributed-by=none  size=68 */

void FUN_006a6370(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  FUN_0068e970(*param_3);
  FUN_0068e970(param_3[1]);
  FUN_006a60a0(1);
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


/* FUN_006a6cd0 @ 006a6cd0  kind=gamemisc  attributed-by=none  size=61 */

void FUN_006a6cd0(void)

{
  undefined4 *unaff_ESI;
  
  FUN_00691290();
  unaff_ESI[6] = 0;
  unaff_ESI[5] = 0;
  unaff_ESI[7] = 0;
  FUN_00691290();
  unaff_ESI[3] = 0;
  FUN_00691290();
  unaff_ESI[2] = 0;
  unaff_ESI[1] = 0;
  *unaff_ESI = 0;
  unaff_ESI[4] = 0;
  return;
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


