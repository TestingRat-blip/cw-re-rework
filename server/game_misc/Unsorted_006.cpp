// Unsorted_006 (game_misc) -- server. 150 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Unsorted_006.h"

/* FUN_0047f780 @ 0047f780  kind=gamemisc  attributed-by=none  size=543 */

void __cdecl FUN_0047f780(ulonglong *param_1,int param_2,undefined4 *param_3)

{
  errno_t eVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int local_68;
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  double local_40;
  ulonglong local_38;
  undefined4 *local_30;
  tm local_2c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
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
  FUN_00475680((uint *)&local_60);
  FUN_004752f0(&local_60);
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
  FUN_004753b0(&local_60);
  uVar4 = __alldiv((uint)local_60,local_60._4_4_,1000,0);
  local_68 = (uint)uVar4 + 0xe75c96c0;
  local_64 = ((int)((ulonglong)uVar4 >> 0x20) + -0x31) - (uint)((uint)uVar4 < 0x18a36940);
  if (DAT_00582bb4 == 0) {
    eVar1 = _localtime64_s(&local_2c,(__time64_t *)&local_68);
    if (eVar1 == 0) {
      local_58 = CONCAT44(local_2c.tm_mon + 1,local_2c.tm_year + 0x76c);
      local_50 = CONCAT44(local_2c.tm_hour,local_2c.tm_mday);
      local_40 = (double)local_2c.tm_sec;
      local_48 = CONCAT44(local_48._4_4_,local_2c.tm_min);
      local_38 = CONCAT44(local_38._4_4_,0x101);
      FUN_004753b0(&local_60);
      *local_30 = 0;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  *(undefined4 *)(param_2 + 0x38) = 1;
  if (*(int *)(param_2 + 8) == 0) {
    iVar2 = 1000000000;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_2 + 8) + 0x50);
  }
  iVar3 = 0;
  if (-1 < iVar2) {
    do {
      if ("local time unavailable"[iVar3] == '\0') break;
      iVar3 = iVar3 + 1;
    } while (iVar3 <= iVar2);
  }
  if (iVar3 <= iVar2) {
    iVar2 = FUN_004b7260((int *)(param_2 + 8),iVar3 + 1U,0);
    if (iVar2 == 0) {
      memcpy(*(void **)(param_2 + 0xc),"local time unavailable",iVar3 + 1U);
      *(int *)(param_2 + 0x20) = iVar3;
      *(undefined4 *)(param_2 + 0x24) = 0x1030202;
    }
  }
  *local_30 = 1;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0047f9a0 @ 0047f9a0  kind=gamemisc  attributed-by=none  size=250 */

undefined4 __cdecl
FUN_0047f9a0(int *param_1,int param_2,int param_3,int *param_4,undefined4 *param_5)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  undefined4 *local_c;
  int local_8;
  
  iVar3 = *(int *)(param_3 + 0x14);
  pbVar4 = *(byte **)(param_3 + 0x28);
  local_c = (undefined4 *)0x0;
  if (iVar3 == 1) {
    if ((-1 < *(short *)(param_2 + 0x24)) &&
       ((pbVar4 == (byte *)0x0 ||
        (iVar5 = FUN_004bcc60(*(byte **)(*(int *)(param_2 + 4) + *(short *)(param_2 + 0x24) * 0x18),
                              pbVar4), iVar5 == 0)))) {
      return 0;
    }
  }
  else if (param_5 != (undefined4 *)0x0) {
    local_c = FUN_00494b90(*param_1,iVar3 * 4);
    if (local_c == (undefined4 *)0x0) {
      return 1;
    }
    *param_5 = local_c;
  }
  iVar5 = *(int *)(param_2 + 8);
  do {
    if (iVar5 == 0) {
      if (*(char *)((int)param_1 + 0x1ca) == '\0') {
        FUN_004962b0(param_1,(byte *)"foreign key mismatch");
      }
      FUN_00494b00(*param_1,local_c);
      return 1;
    }
    if ((*(int *)(iVar5 + 0x24) == iVar3) && (*(char *)(iVar5 + 0x2c) != '\0')) {
      if (pbVar4 == (byte *)0x0) {
        if (*(char *)(iVar5 + 0x2d) == '\x02') {
          if ((local_c != (undefined4 *)0x0) && (0 < iVar3)) {
            puVar7 = (undefined4 *)(param_3 + 0x24);
            iVar6 = 0;
            do {
              local_c[iVar6] = *puVar7;
              iVar6 = iVar6 + 1;
              puVar7 = puVar7 + 2;
            } while (iVar6 < iVar3);
          }
LAB_0047fa7d:
          *param_4 = iVar5;
          return 0;
        }
      }
      else {
        local_8 = 0;
        if (0 < iVar3) {
          while( true ) {
            puVar7 = (undefined4 *)
                     (*(int *)(param_2 + 4) + *(int *)(local_8 * 4 + *(int *)(iVar5 + 4)) * 0x18);
            pbVar10 = (byte *)puVar7[4];
            pbVar8 = (byte *)"BINARY";
            if (pbVar10 != (byte *)0x0) {
              pbVar8 = pbVar10;
            }
            pbVar10 = *(byte **)(local_8 * 4 + *(int *)(iVar5 + 0x20));
            bVar2 = *pbVar10;
            while ((bVar2 != 0 && ((&DAT_00569620)[bVar2] == (&DAT_00569620)[*pbVar8]))) {
              pbVar1 = pbVar10 + 1;
              pbVar10 = pbVar10 + 1;
              pbVar8 = pbVar8 + 1;
              bVar2 = *pbVar1;
            }
            if ((&DAT_00569620)[*pbVar10] != (&DAT_00569620)[*pbVar8]) break;
            iVar6 = 0;
            puVar9 = (undefined4 *)(param_3 + 0x28);
            do {
              pbVar10 = (byte *)*puVar9;
              bVar2 = *pbVar10;
              pbVar8 = (byte *)*puVar7;
              while ((bVar2 != 0 && ((&DAT_00569620)[bVar2] == (&DAT_00569620)[*pbVar8]))) {
                pbVar1 = pbVar10 + 1;
                pbVar10 = pbVar10 + 1;
                pbVar8 = pbVar8 + 1;
                bVar2 = *pbVar1;
              }
              if ((&DAT_00569620)[*pbVar10] == (&DAT_00569620)[*pbVar8]) {
                if (local_c != (undefined4 *)0x0) {
                  local_c[local_8] = *(undefined4 *)(param_3 + 0x24 + iVar6 * 8);
                }
                break;
              }
              iVar6 = iVar6 + 1;
              puVar9 = puVar9 + 2;
            } while (iVar6 < iVar3);
            if ((iVar6 == iVar3) || (local_8 = local_8 + 1, iVar3 <= local_8)) break;
          }
        }
        if (local_8 == iVar3) goto LAB_0047fa7d;
      }
    }
    iVar5 = *(int *)(iVar5 + 0x14);
  } while( true );
}


/* FUN_0047fc00 @ 0047fc00  kind=gamemisc  attributed-by=none  size=891 */

uint __cdecl FUN_0047fc00(int *param_1)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  ushort uVar6;
  int *piVar7;
  short sVar8;
  char *pcVar9;
  undefined4 *puVar10;
  bool bVar11;
  undefined4 *local_10;
  int local_c;
  int local_8;
  
  piVar3 = param_1;
  uVar4 = FUN_004a2980((uint *)*param_1);
  if (uVar4 != 0) {
    return uVar4;
  }
  puVar1 = (uint *)*param_1;
  param_1 = (int *)puVar1[10];
  if (param_1 == (int *)0x0) {
    param_1 = (int *)FUN_004a37e0((int *)puVar1[0x2d],1,1,&local_10);
  }
  puVar10 = local_10;
  iVar5 = DAT_00582bb8;
  if (param_1 == (int *)0x0) {
    if (local_10[4] != 0) {
      puVar1[0x28] = puVar1[0x28] + 1;
      goto LAB_0047fd2b;
    }
    local_10[4] = puVar1;
    if (iVar5 / (int)puVar1[0x20] == 0) {
      FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
      param_1 = (int *)0xb;
LAB_0047fcd7:
      if ((*(byte *)(puVar10 + 6) & 2) != 0) {
        FUN_00486ed0((int)puVar10);
      }
      iVar5 = puVar10[7];
      *(int *)(iVar5 + 0xc) = *(int *)(iVar5 + 0xc) + -1;
      if (puVar10[5] == 1) {
        *(undefined4 *)(iVar5 + 0x2c) = 0;
      }
      (*DAT_00582b4c)(*(undefined4 *)(iVar5 + 0x28),*puVar10,1);
      goto LAB_0047fd09;
    }
    if (((*(char *)((int)puVar1 + 0xe) == '\0') && (puVar1[6] != 0)) && (*(int *)puVar1[0xf] != 0))
    {
      puVar1[0x29] = puVar1[0x29] + 1;
      param_1 = (int *)FUN_004876e0((int)local_10);
      if (param_1 != (int *)0x0) goto LAB_0047fcd7;
    }
    else {
      if (puVar1[0x21] == 0) {
        param_1 = (int *)0xd;
        goto LAB_0047fcd7;
      }
      memset((void *)local_10[1],0,puVar1[0x20]);
    }
  }
  else {
LAB_0047fd09:
    if (*(int *)(puVar1[0x2d] + 0xc) == 0) {
      FUN_00484370(puVar1);
    }
    puVar10 = (undefined4 *)0x0;
    if (param_1 != (int *)0x0) {
      return (uint)param_1;
    }
  }
LAB_0047fd2b:
  local_8 = puVar10[2];
  piVar2 = (int *)puVar10[1];
  *(undefined4 **)(local_8 + 0x44) = puVar10;
  *(int **)(local_8 + 0x38) = piVar2;
  *(int **)(local_8 + 0x34) = piVar3;
  *(undefined4 *)(local_8 + 0x48) = 1;
  *(undefined1 *)(local_8 + 5) = 100;
  local_c = CONCAT31(CONCAT21(CONCAT11((char)piVar2[7],*(undefined1 *)((int)piVar2 + 0x1d)),
                              *(undefined1 *)((int)piVar2 + 0x1e)),
                     *(undefined1 *)((int)piVar2 + 0x1f));
  iVar5 = *(int *)(*piVar3 + 0x18);
  if ((local_c == 0) || (piVar2[6] != piVar2[0x17])) {
    local_c = iVar5;
  }
  if (local_c < 1) {
LAB_0047ff15:
    iVar5 = (uint)((piVar3[9] + -0xc) * 0x40) / 0xff - 0x17;
    sVar8 = (short)((uint)((piVar3[9] + -0xc) * 0x20) / 0xff) + -0x17;
    uVar6 = (ushort)iVar5;
    *(ushort *)(piVar3 + 6) = uVar6;
    *(short *)((int)piVar3 + 0x1a) = sVar8;
    *(short *)(piVar3 + 7) = (short)piVar3[9] + -0x23;
    *(short *)((int)piVar3 + 0x1e) = sVar8;
    if (uVar6 < 0x80) {
      *(char *)(piVar3 + 5) = (char)iVar5;
    }
    else {
      *(undefined1 *)(piVar3 + 5) = 0x7f;
    }
    piVar3[3] = local_8;
    piVar3[0xb] = local_c;
    return 0;
  }
  param_1 = (int *)0x1a;
  pcVar9 = "SQLite format 3";
  uVar4 = 0xc;
  piVar7 = piVar2;
  do {
    if (*piVar7 != *(int *)pcVar9) goto LAB_0047fec5;
    piVar7 = piVar7 + 1;
    pcVar9 = (char *)((int)pcVar9 + 4);
    bVar11 = 3 < uVar4;
    uVar4 = uVar4 - 4;
  } while (bVar11);
  if (2 < *(byte *)((int)piVar2 + 0x12)) {
    *(ushort *)((int)piVar3 + 0x16) = *(ushort *)((int)piVar3 + 0x16) | 1;
  }
  if (*(byte *)((int)piVar2 + 0x13) < 3) {
    if ((*(byte *)((int)piVar2 + 0x13) == 2) && ((*(byte *)((int)piVar3 + 0x16) & 0x10) == 0)) {
      local_10 = (undefined4 *)0x0;
      param_1 = (int *)FUN_004a2440((int *)*piVar3,&local_10);
      if (param_1 != (int *)0x0) goto LAB_0047fec5;
      if (local_10 == (undefined4 *)0x0) {
        FUN_004880a0(local_8);
        return 0;
      }
    }
    param_1 = (int *)0x1a;
    if ((((*(short *)((int)piVar2 + 0x15) == 0x2040) && (*(char *)((int)piVar2 + 0x17) == ' ')) &&
        (uVar4 = (uint)*(ushort *)(piVar2 + 4) * 0x100, (uVar4 & uVar4 - 1) == 0)) &&
       (uVar4 - 0x101 < 0xff00)) {
      local_10 = (undefined4 *)(uVar4 - *(byte *)(piVar2 + 5));
      if (uVar4 != piVar3[8]) {
        FUN_004880a0(local_8);
        puVar10 = local_10;
        piVar3[9] = (int)local_10;
        piVar3[8] = uVar4;
        FUN_0047c340((int)piVar3);
        uVar4 = FUN_004a27d0(*piVar3,(uint *)(piVar3 + 8),uVar4 - (int)puVar10);
        return uVar4;
      }
      if (((*(uint *)(piVar3[1] + 0x18) & 0x8000) == 0) && (iVar5 < local_c)) {
        param_1 = (int *)FUN_00493af0();
      }
      else if ((undefined4 *)0x1df < local_10) {
        piVar3[8] = uVar4;
        piVar3[9] = (int)local_10;
        iVar5 = FUN_0049c920((undefined1 *)(piVar2 + 0xd));
        *(bool *)((int)piVar3 + 0x11) = iVar5 != 0;
        iVar5 = FUN_0049c920((undefined1 *)(piVar2 + 0x10));
        *(bool *)((int)piVar3 + 0x12) = iVar5 != 0;
        goto LAB_0047ff15;
      }
    }
  }
LAB_0047fec5:
  FUN_004880a0(local_8);
  piVar3[3] = 0;
  return (uint)param_1;
}


/* FUN_00480740 @ 00480740  kind=gamemisc  attributed-by=none  size=129 */

void * __cdecl FUN_00480740(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  iVar1 = (*(code *)PTR_AreFileApisANSI_0058356c)();
  iVar2 = (*(code *)PTR_MultiByteToWideChar_005837ac)(iVar1 == 0,0,param_1,0xffffffff,0,0);
  if (iVar2 * 2 == 0) {
    return (void *)0x0;
  }
  _Dst = (void *)FUN_004a0350(iVar2 << 2);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,iVar2 << 2);
    if (_Dst != (void *)0x0) {
      iVar1 = (*(code *)PTR_MultiByteToWideChar_005837ac)
                        (iVar1 == 0,0,param_1,0xffffffff,_Dst,iVar2 * 2);
      if (iVar1 == 0) {
        FUN_00466dd0((int)_Dst);
        _Dst = (void *)0x0;
      }
      return _Dst;
    }
  }
  return (void *)0x0;
}


/* FUN_004807d0 @ 004807d0  kind=gamemisc  attributed-by=none  size=112 */

char __cdecl FUN_004807d0(int *param_1)

{
  char *pcVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  
  if ((((*(int *)*param_1 == 1) && (pcVar1 = *(char **)((int *)*param_1)[2], *pcVar1 == -0x67)) &&
      ((*(ushort *)(pcVar1 + 2) & 0x800) == 0)) &&
     (((piVar2 = *(int **)(pcVar1 + 0x10), piVar2 != (int *)0x0 && (*piVar2 == 1)) &&
      (**(char **)piVar2[2] == -0x66)))) {
    pbVar3 = *(byte **)(pcVar1 + 4);
    iVar4 = FUN_004bcc60(pbVar3,&DAT_0056d108);
    if (iVar4 == 0) {
      return '\x01';
    }
    iVar4 = FUN_004bcc60(pbVar3,&DAT_0056d10c);
    return (-(iVar4 != 0) & 0xfeU) + 2;
  }
  return '\0';
}


/* FUN_00480840 @ 00480840  kind=gamemisc  attributed-by=none  size=552 */

undefined4 __cdecl FUN_00480840(char *param_1,int param_2,undefined4 param_3,char param_4)

{
  undefined1 uVar1;
  undefined1 uVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint local_2c [6];
  ushort local_14;
  uint local_c;
  char local_5;
  undefined1 uVar2;
  undefined1 uVar3;
  
  uVar4 = (undefined1)param_3;
  uVar1 = (undefined1)((uint)param_3 >> 8);
  uVar2 = (undefined1)((uint)param_3 >> 0x10);
  uVar3 = (undefined1)((uint)param_3 >> 0x18);
  if (param_4 == '\x04') {
    puVar8 = *(undefined1 **)(param_1 + 0x38);
    if (CONCAT31(CONCAT21(CONCAT11(*puVar8,puVar8[1]),puVar8[2]),puVar8[3]) == param_2) {
      *puVar8 = uVar3;
      puVar8[1] = uVar2;
      puVar8[2] = uVar1;
      puVar8[3] = uVar4;
      return 0;
    }
    FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
    return 0xb;
  }
  local_5 = *param_1;
  FUN_00471320(param_1);
  local_c = (uint)*(ushort *)(param_1 + 0x10);
  uVar7 = 0;
  if (local_c != 0) {
    do {
      puVar8 = (undefined1 *)
               ((uint)(CONCAT11(*(undefined1 *)(*(int *)(param_1 + 0x40) + uVar7 * 2),
                                *(undefined1 *)(*(int *)(param_1 + 0x40) + 1 + uVar7 * 2)) &
                      *(ushort *)(param_1 + 0x12)) + *(int *)(param_1 + 0x38));
      if (param_4 == '\x03') {
        FUN_00471710((int)param_1,(uint)puVar8,local_2c);
        if (((local_14 != 0) &&
            (puVar5 = puVar8 + local_14,
            puVar5 + 3 <=
            (undefined1 *)((uint)*(ushort *)(param_1 + 0x12) + *(int *)(param_1 + 0x38)))) &&
           (param_2 == CONCAT31(CONCAT21(CONCAT11(*puVar5,puVar5[1]),puVar5[2]),puVar5[3]))) {
          puVar8 = puVar8 + local_14;
          *puVar8 = uVar3;
          puVar8[1] = uVar2;
          puVar8[2] = uVar1;
          puVar8[3] = uVar4;
          break;
        }
      }
      else if (CONCAT31(CONCAT21(CONCAT11(*puVar8,puVar8[1]),puVar8[2]),puVar8[3]) == param_2) {
        *puVar8 = uVar3;
        puVar8[1] = uVar2;
        puVar8[2] = uVar1;
        puVar8[3] = uVar4;
        break;
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)local_c);
  }
  if (uVar7 == local_c) {
    if ((param_4 != '\x05') ||
       (iVar6 = (uint)(byte)param_1[5] + *(int *)(param_1 + 0x38),
       CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar6 + 8),*(undefined1 *)(iVar6 + 9)),
                         *(undefined1 *)(iVar6 + 10)),*(undefined1 *)(iVar6 + 0xb)) != param_2)) {
      FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
      return 0xb;
    }
    *(undefined1 *)(iVar6 + 8) = uVar3;
    *(undefined1 *)(iVar6 + 9) = uVar2;
    *(undefined1 *)(iVar6 + 10) = uVar1;
    *(undefined1 *)(iVar6 + 0xb) = uVar4;
  }
  *param_1 = local_5;
  return 0;
}


/* FUN_00480a70 @ 00480a70  kind=gamemisc  attributed-by=none  size=145 */

int __cdecl FUN_00480a70(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1;
  iVar3 = (int)*(short *)(param_1 + 0x5e);
  if (*(short *)(param_1 + 0x5e) < 0x13) {
    iVar2 = FUN_0047d000(*(int **)(param_1 + 4),param_2,&param_1);
    if (iVar2 != 0) {
      return iVar2;
    }
    *(int *)(iVar1 + 0x8c + iVar3 * 4) = param_1;
    *(undefined2 *)(iVar1 + 0x62 + iVar3 * 2) = 0;
    *(short *)(iVar1 + 0x5e) = *(short *)(iVar1 + 0x5e) + 1;
    *(undefined2 *)(iVar1 + 0x42) = 0;
    *(undefined1 *)(iVar1 + 0x5a) = 0;
    if ((*(short *)(param_1 + 0x10) != 0) &&
       (*(char *)(param_1 + 2) == *(char *)(*(int *)(iVar1 + 0x88 + iVar3 * 4) + 2))) {
      return 0;
    }
  }
  FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
  return 0xb;
}


/* FUN_00480b10 @ 00480b10  kind=gamemisc  attributed-by=none  size=116 */

int __cdecl FUN_00480b10(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  
  do {
    iVar1 = *(int *)(param_1 + 0x88 + *(short *)(param_1 + 0x5e) * 4);
    if (*(char *)(iVar1 + 3) != '\0') {
      return 0;
    }
    uVar2 = (uint)*(ushort *)(param_1 + 0x60 + *(short *)(param_1 + 0x5e) * 2);
    puVar3 = (undefined1 *)
             ((uint)(CONCAT11(*(undefined1 *)(*(int *)(iVar1 + 0x40) + uVar2 * 2),
                              *(undefined1 *)(*(int *)(iVar1 + 0x40) + 1 + uVar2 * 2)) &
                    *(ushort *)(iVar1 + 0x12)) + *(int *)(iVar1 + 0x38));
    iVar1 = FUN_00480a70(param_1,CONCAT31(CONCAT21(CONCAT11(*puVar3,puVar3[1]),puVar3[2]),puVar3[3])
                        );
  } while (iVar1 == 0);
  return iVar1;
}


/* FUN_00480b90 @ 00480b90  kind=gamemisc  attributed-by=none  size=80 */

void __cdecl FUN_00480b90(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint *puVar3;
  
  iVar1 = *(int *)(param_1 + 0x88 + *(short *)(param_1 + 0x5e) * 4);
  if ((iVar1 != 0) && (puVar2 = *(undefined4 **)(iVar1 + 0x44), puVar2 != (undefined4 *)0x0)) {
    puVar3 = (uint *)puVar2[4];
    FUN_004a3a80(puVar2);
    if (*(int *)(puVar3[0x2d] + 0xc) == 0) {
      FUN_00484370(puVar3);
    }
  }
  *(short *)(param_1 + 0x5e) = *(short *)(param_1 + 0x5e) + -1;
  *(undefined2 *)(param_1 + 0x42) = 0;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  return;
}


/* FUN_00480be0 @ 00480be0  kind=gamemisc  attributed-by=none  size=133 */

int __cdecl FUN_00480be0(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  
  do {
    iVar5 = *(int *)(param_1 + 0x88 + *(short *)(param_1 + 0x5e) * 4);
    if (*(char *)(iVar5 + 3) != '\0') {
      *(short *)(param_1 + 0x60 + *(short *)(param_1 + 0x5e) * 2) = *(short *)(iVar5 + 0x10) + -1;
      *(undefined2 *)(param_1 + 0x42) = 0;
      *(undefined1 *)(param_1 + 0x5a) = 0;
      return 0;
    }
    iVar6 = (uint)*(byte *)(iVar5 + 5) + *(int *)(iVar5 + 0x38);
    uVar1 = *(undefined1 *)(iVar6 + 8);
    uVar2 = *(undefined1 *)(iVar6 + 9);
    uVar3 = *(undefined1 *)(iVar6 + 10);
    uVar4 = *(undefined1 *)(iVar6 + 0xb);
    *(undefined2 *)(param_1 + 0x60 + *(short *)(param_1 + 0x5e) * 2) = *(undefined2 *)(iVar5 + 0x10)
    ;
    iVar5 = FUN_00480a70(param_1,CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),uVar4));
  } while (iVar5 == 0);
  return iVar5;
}


/* FUN_00480c70 @ 00480c70  kind=gamemisc  attributed-by=none  size=408 */

int __cdecl FUN_00480c70(int *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int iVar7;
  int *piVar8;
  
  piVar8 = *(int **)(*param_1 + 4);
  if (1 < *(byte *)((int)param_1 + 0x5b)) {
    if (*(byte *)((int)param_1 + 0x5b) == 3) {
      return param_1[0x15];
    }
    FUN_00466dd0(param_1[0x14]);
    param_1[0x14] = 0;
    *(undefined1 *)((int)param_1 + 0x5b) = 0;
  }
  if (*(short *)((int)param_1 + 0x5e) < 0) {
    if (param_1[6] == 0) {
      *(undefined1 *)((int)param_1 + 0x5b) = 0;
      return 0;
    }
    iVar7 = FUN_0047d000(piVar8,param_1[6],param_1 + 0x22);
    if (iVar7 != 0) {
      *(undefined1 *)((int)param_1 + 0x5b) = 0;
      return iVar7;
    }
    *(undefined2 *)((int)param_1 + 0x5e) = 0;
    if ((param_1[4] == 0) != (bool)*(char *)(param_1[0x22] + 2)) {
      iVar7 = FUN_00493af0();
      return iVar7;
    }
  }
  else {
    iVar7 = 1;
    if (0 < *(short *)((int)param_1 + 0x5e)) {
      piVar8 = param_1 + 0x23;
      do {
        if ((*piVar8 != 0) &&
           (puVar5 = *(undefined4 **)(*piVar8 + 0x44), puVar5 != (undefined4 *)0x0)) {
          puVar6 = (uint *)puVar5[4];
          FUN_004a3a80(puVar5);
          if (*(int *)(puVar6[0x2d] + 0xc) == 0) {
            FUN_00484370(puVar6);
          }
        }
        iVar7 = iVar7 + 1;
        piVar8 = piVar8 + 1;
      } while (iVar7 <= *(short *)((int)param_1 + 0x5e));
    }
    *(undefined2 *)((int)param_1 + 0x5e) = 0;
  }
  iVar7 = param_1[0x22];
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((int)param_1 + 0x42) = 0;
  *(undefined2 *)((int)param_1 + 0x59) = 0;
  if ((*(short *)(iVar7 + 0x10) == 0) && (*(char *)(iVar7 + 3) == '\0')) {
    if (*(int *)(iVar7 + 0x48) == 1) {
      iVar7 = (uint)*(byte *)(iVar7 + 5) + *(int *)(iVar7 + 0x38);
      uVar1 = *(undefined1 *)(iVar7 + 8);
      uVar2 = *(undefined1 *)(iVar7 + 9);
      uVar3 = *(undefined1 *)(iVar7 + 10);
      uVar4 = *(undefined1 *)(iVar7 + 0xb);
      *(undefined1 *)((int)param_1 + 0x5b) = 1;
      iVar7 = FUN_00480a70((int)param_1,CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),uVar4));
      return iVar7;
    }
    FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
    return 0xb;
  }
  *(bool *)((int)param_1 + 0x5b) = *(short *)(iVar7 + 0x10) != 0;
  return 0;
}


/* FUN_00480e10 @ 00480e10  kind=gamemisc  attributed-by=none  size=1990 */

void __cdecl FUN_00480e10(int *param_1,int *param_2,char *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  int *piVar10;
  double dVar11;
  undefined4 *local_68;
  int *local_5c;
  int local_58;
  int local_54;
  int *local_50;
  int local_4c;
  uint *local_48;
  int *local_44;
  int local_40;
  int *local_3c;
  byte local_38 [4];
  int *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  byte local_28 [4];
  int *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_18 = *(undefined8 *)param_3;
  iVar5 = *param_1;
  local_10 = *(undefined8 *)(param_3 + 8);
  local_68 = (undefined4 *)0x0;
  piVar10 = (int *)param_2[0xf];
  local_5c = param_2;
  local_40 = iVar5;
  if (piVar10[0xe] != 0) {
    FUN_004962b0(param_1,(byte *)"ORDER BY clause should come after %s not before");
    goto LAB_0048159c;
  }
  if (piVar10[0x12] != 0) {
    FUN_004962b0(param_1,(byte *)"LIMIT clause should come after %s not before");
    goto LAB_0048159c;
  }
  piVar4 = (int *)param_1[2];
  local_44 = piVar4;
  if (piVar4 == (int *)0x0) {
    piVar4 = FUN_004af150(iVar5);
    param_1[2] = (int)piVar4;
    local_44 = piVar4;
    if (piVar4 != (int *)0x0) {
      FUN_004ae760(piVar4,0x94);
    }
  }
  if ((byte)local_18 == 9) {
    FUN_004ae830(piVar4,0x2a,local_18._4_4_,*(undefined4 *)*param_2);
    if (piVar4[1] != 0) {
      *(undefined1 *)(piVar4[1] + -0x11 + piVar4[7] * 0x14) = 8;
    }
    local_18 = CONCAT71(local_18._1_7_,8);
  }
  if (*(int *)*param_2 != *(int *)*piVar10) {
    if ((*(byte *)((int)param_2 + 6) & 0x80) == 0) {
      FUN_0048b2e0((uint)*(byte *)(param_2 + 1));
      FUN_004962b0(param_1,(byte *)
                           "SELECTs to the left and right of %s do not have the same number of result columns"
                  );
      iVar5 = local_40;
    }
    else {
      FUN_004962b0(param_1,(byte *)"all VALUES must have the same number of terms");
      iVar5 = local_40;
    }
    goto LAB_0048159c;
  }
  if (param_2[0xe] != 0) {
    FUN_00481630(param_1,param_2,param_3);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  cVar1 = (char)param_2[1];
  if (cVar1 == 'p') {
LAB_004812ed:
    if ((((byte)local_18 == 1) && (param_2[0x12] == 0)) && (param_2[0x13] == 0)) {
      local_3c = local_18._4_4_;
    }
    else {
      local_3c = (int *)param_1[0x12];
      param_1[0x12] = (int)local_3c + 1;
      iVar5 = FUN_004ae830(piVar4,0x2a,local_3c,0);
      param_2[4] = iVar5;
      *(ushort *)(param_2[0x11] + 6) = *(ushort *)(param_2[0x11] + 6) | 8;
    }
    local_48 = (uint *)param_1[0x7a];
    local_28[0] = 1;
    local_28[1] = 0;
    local_20 = 0;
    local_1c = 0;
    local_24 = local_3c;
    local_4c = FUN_004a7e30(param_1,piVar10,local_28);
    iVar5 = local_40;
    if (local_4c != 0) goto LAB_0048159c;
    param_2[0xf] = 0;
    local_58 = param_2[0x12];
    iVar5 = param_2[0x13];
    local_28[0] = ((char)param_2[1] == 'r') + '\x01';
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    local_54 = param_1[0x7a];
    local_4c = FUN_004a7e30(param_1,param_2,local_28);
    FUN_00499060(local_40,(int *)param_2[0xe]);
    local_68 = (undefined4 *)param_2[0xf];
    param_2[0xf] = (int)piVar10;
    param_2[0xe] = 0;
    if ((char)param_2[1] == 'p') {
      *(double *)(param_2 + 8) = *(double *)(piVar10 + 8) + *(double *)(param_2 + 8);
    }
    FUN_00498790(local_40,(undefined4 *)param_2[0x12]);
    param_2[0x12] = local_58;
    param_2[0x13] = iVar5;
    param_2[2] = 0;
    param_2[3] = 0;
    piVar10 = local_44;
    if ((byte)local_18 != 1) {
      if ((byte)local_18 == 5) {
        piVar3 = (int *)param_2[0xf];
        piVar10 = param_2;
        while (piVar2 = piVar3, piVar2 != (int *)0x0) {
          piVar10 = piVar2;
          piVar3 = (int *)piVar2[0xf];
        }
        FUN_0047c420(param_1,(short *)0x0,(int *)*piVar10);
      }
      iVar6 = FUN_004b6b80(piVar4);
      iVar7 = FUN_004b6b80(piVar4);
      FUN_004754f0(param_1,(int)param_2,iVar6);
      FUN_004ae830(piVar4,0x48,local_3c,iVar6);
      iVar5 = piVar4[7];
      FUN_0048abe0(param_1,(int)param_2,(int *)*param_2,local_3c,*(int **)*param_2,(int *)0x0,0,
                   (char *)&local_18,iVar7,iVar6);
      piVar10 = local_44;
      FUN_004b87b0((int)local_44,iVar7);
      piVar4 = local_3c;
      FUN_004ae830(piVar10,0x5f,local_3c,iVar5);
      FUN_004b87b0((int)piVar10,iVar6);
      FUN_004ae830(piVar10,0x2d,piVar4,0);
    }
  }
  else if (cVar1 == 'q') {
    local_50 = (int *)0x0;
    piVar10[0x12] = param_2[0x12];
    piVar10[0x13] = param_2[0x13];
    local_48 = (uint *)param_1[0x7a];
    local_4c = FUN_004a7e30(param_1,piVar10,(byte *)&local_18);
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    iVar5 = local_40;
    if (local_4c != 0) goto LAB_0048159c;
    param_2[0xf] = 0;
    param_2[2] = piVar10[2];
    param_2[3] = piVar10[3];
    if (param_2[2] != 0) {
      local_50 = (int *)FUN_004ae7d0(piVar4,0x7a,param_2[2]);
    }
    local_54 = param_1[0x7a];
    local_4c = FUN_004a7e30(param_1,param_2,(byte *)&local_18);
    local_68 = (undefined4 *)param_2[0xf];
    param_2[0xf] = (int)piVar10;
    dVar11 = *(double *)(piVar10 + 8) + *(double *)(param_2 + 8);
    *(double *)(param_2 + 8) = dVar11;
    if ((((char *)piVar10[0x12] != (char *)0x0) &&
        (iVar5 = FUN_00498e90((char *)piVar10[0x12],&local_58), iVar5 != 0)) &&
       ((double)local_58 < dVar11)) {
      *(double *)(param_2 + 8) = (double)local_58;
    }
    piVar10 = local_44;
    if (local_50 != (int *)0x0) {
      FUN_004b6720((int)piVar4,(uint)local_50);
      piVar10 = local_44;
    }
  }
  else {
    if (cVar1 == 'r') goto LAB_004812ed;
    local_3c = (int *)param_1[0x12];
    local_50 = (int *)((int)local_3c + 1);
    param_1[0x12] = (int)local_3c + 2;
    iVar5 = FUN_004ae830(piVar4,0x2a,local_3c,0);
    param_2[4] = iVar5;
    *(ushort *)(param_2[0x11] + 6) = *(ushort *)(param_2[0x11] + 6) | 8;
    local_48 = (uint *)param_1[0x7a];
    local_38[0] = 1;
    local_38[1] = 0;
    local_34 = local_3c;
    local_30 = 0;
    local_2c = 0;
    local_4c = FUN_004a7e30(param_1,piVar10,local_38);
    iVar5 = local_40;
    if (local_4c != 0) goto LAB_0048159c;
    iVar5 = FUN_004ae830(piVar4,0x2a,local_50,0);
    param_2[5] = iVar5;
    iVar5 = param_2[0x12];
    local_58 = param_2[0x13];
    local_34 = local_50;
    param_2[0xf] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    local_54 = param_1[0x7a];
    local_4c = FUN_004a7e30(param_1,param_2,local_38);
    local_68 = (undefined4 *)param_2[0xf];
    param_2[0xf] = (int)piVar10;
    if (*(double *)(piVar10 + 8) < *(double *)(param_2 + 8)) {
      *(double *)(param_2 + 8) = *(double *)(piVar10 + 8);
    }
    FUN_00498790(local_40,(undefined4 *)param_2[0x12]);
    param_2[0x12] = iVar5;
    param_2[0x13] = local_58;
    if ((byte)local_18 == 5) {
      piVar3 = (int *)param_2[0xf];
      piVar10 = param_2;
      while (piVar2 = piVar3, piVar2 != (int *)0x0) {
        piVar10 = piVar2;
        piVar3 = (int *)piVar2[0xf];
      }
      FUN_0047c420(param_1,(short *)0x0,(int *)*piVar10);
    }
    iVar5 = FUN_004b6b80(piVar4);
    local_58 = iVar5;
    iVar6 = FUN_004b6b80(local_44);
    FUN_004754f0(param_1,(int)param_2,iVar5);
    piVar10 = local_44;
    FUN_004ae830(local_44,0x48,local_3c,iVar5);
    iVar5 = FUN_0049cb40((int)param_1);
    iVar7 = FUN_004ae830(piVar10,0x3f,local_3c,iVar5);
    FUN_004ae960(local_44,0x33,local_50,iVar6,iVar5,(int *)0x0);
    FUN_004a68f0((int)param_1,iVar5);
    iVar5 = local_58;
    FUN_0048abe0(param_1,(int)param_2,(int *)*param_2,local_3c,*(int **)*param_2,(int *)0x0,0,
                 (char *)&local_18,iVar6,local_58);
    piVar10 = local_44;
    FUN_004b87b0((int)local_44,iVar6);
    piVar4 = local_3c;
    FUN_004ae830(piVar10,0x5f,local_3c,iVar7);
    FUN_004b87b0((int)piVar10,iVar5);
    FUN_004ae830(piVar10,0x2d,(int)piVar4 + 1,0);
    FUN_004ae830(piVar10,0x2d,piVar4,0);
  }
  FUN_004775b0(param_1);
  iVar5 = local_40;
  if ((*(byte *)((int)param_2 + 6) & 8) != 0) {
    local_54 = *(int *)*param_2;
    local_3c = FUN_00494c20(local_40,local_54 * 5 + 0x10);
    iVar5 = local_40;
    if (local_3c != (int *)0x0) {
      local_50 = (int *)0x0;
      *(undefined1 *)(local_3c + 1) =
           *(undefined1 *)(*(int *)(*(int *)(local_40 + 0x10) + 0xc) + 0x4d);
      puVar9 = (uint *)(local_3c + 3);
      *(short *)((int)local_3c + 6) = (short)local_54;
      local_48 = puVar9;
      if (0 < local_54) {
        do {
          uVar8 = FUN_004815e0(param_1,param_2,(int)local_50);
          *puVar9 = uVar8;
          if (uVar8 == 0) {
            *puVar9 = *(uint *)(local_40 + 8);
          }
          local_50 = (int *)((int)local_50 + 1);
          puVar9 = puVar9 + 1;
          piVar10 = local_44;
        } while ((int)local_50 < local_54);
      }
      local_3c[2] = (int)puVar9;
      do {
        puVar9 = (uint *)(local_5c + 4);
        local_48 = (uint *)0x0;
        piVar4 = local_3c;
        do {
          uVar8 = *puVar9;
          if ((int)uVar8 < 0) break;
          if (uVar8 < (uint)piVar10[7]) {
            *(int *)(piVar10[1] + 8 + uVar8 * 0x14) = local_54;
            piVar4 = local_3c;
          }
          FUN_004aecc0(piVar10,uVar8,piVar4,0xfffffffa);
          local_48 = (uint *)((int)local_48 + 1);
          *puVar9 = 0xffffffff;
          puVar9 = puVar9 + 1;
        } while ((int)local_48 < 2);
        iVar5 = local_40;
        local_5c = (int *)local_5c[0xf];
      } while (local_5c != (int *)0x0);
      FUN_00494b00(local_40,local_3c);
    }
  }
LAB_0048159c:
  *(undefined4 *)(param_3 + 8) = (undefined4)local_10;
  *(undefined4 *)(param_3 + 0xc) = local_10._4_4_;
  if (local_68 != (undefined4 *)0x0) {
    FUN_00472d10(iVar5,local_68);
    FUN_00494b00(iVar5,local_68);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004815e0 @ 004815e0  kind=gamemisc  attributed-by=none  size=71 */

uint __cdecl FUN_004815e0(int *param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  
  if (((undefined4 *)param_2[0xf] != (undefined4 *)0x0) &&
     (uVar1 = FUN_004815e0(param_1,(undefined4 *)param_2[0xf],param_3), uVar1 != 0)) {
    return uVar1;
  }
  uVar1 = 0;
  if (param_3 < *(int *)*param_2) {
    uVar1 = FUN_004984d0(param_1,*(char **)(((int *)*param_2)[2] + param_3 * 0x14));
  }
  return uVar1;
}


/* FUN_00481630 @ 00481630  kind=gamemisc  attributed-by=none  size=154 */

void __cdecl FUN_00481630(int *param_1,int *param_2,char *param_3)

{
  size_t _Size;
  char cVar1;
  undefined4 *puVar2;
  uint *puVar3;
  char *pcVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  ushort *puVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  uint uVar17;
  uint *puVar18;
  int *piVar19;
  char *local_8c;
  uint local_88;
  int *local_84;
  char *local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int *local_6c;
  int *local_68;
  int local_64;
  int local_60;
  uint local_5c;
  int local_58;
  int local_54;
  int *local_50;
  int local_4c;
  uint local_48;
  int *local_44;
  char *local_40;
  int local_3c;
  uint *local_38;
  uint *local_34;
  int *local_30;
  int *local_2c;
  byte local_28 [4];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  byte local_18 [4];
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  piVar15 = (int *)param_1[2];
  local_2c = param_2;
  local_80 = param_3;
  local_3c = *param_1;
  local_30 = param_1;
  local_7c = 0;
  local_44 = (int *)0x0;
  local_50 = piVar15;
  local_60 = FUN_004b6b80(piVar15);
  local_78 = FUN_004b6b80(piVar15);
  local_5c = (uint)*(byte *)(local_2c + 1);
  puVar3 = (uint *)local_2c[0xe];
  local_68 = (int *)local_2c[0xf];
  local_48 = *puVar3;
  local_34 = puVar3;
  if ((local_5c != 0x71) && (uVar17 = 1, *(char *)(local_3c + 0x38) == '\0')) {
    local_6c = (int *)(local_48 * 0x14);
    do {
      if (*(int *)*local_2c < (int)uVar17) break;
      uVar11 = 0;
      if (0 < (int)local_48) {
        puVar13 = (ushort *)(puVar3[2] + 0xe);
        do {
          piVar15 = local_50;
          if (*puVar13 == uVar17) break;
          uVar11 = uVar11 + 1;
          puVar13 = puVar13 + 10;
        } while ((int)uVar11 < (int)local_48);
      }
      if (uVar11 == local_48) {
        puVar2 = FUN_00494b90(local_3c,0x2d);
        if (puVar2 == (undefined4 *)0x0) {
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
        memset(puVar2,0,0x2d);
        *(undefined2 *)((int)puVar2 + 0x1e) = 0xffff;
        *(undefined1 *)puVar2 = 0x81;
        *(undefined1 *)(puVar2 + 0xb) = 0;
        *(ushort *)((int)puVar2 + 2) = *(ushort *)((int)puVar2 + 2) | 0x400;
        puVar2[5] = 1;
        puVar2[1] = uVar17;
        puVar3 = FUN_00498f00(local_30,local_34,puVar2);
        local_34 = puVar3;
        if (puVar3 != (uint *)0x0) {
          local_48 = local_48 + 1;
          *(short *)(puVar3[2] + 0xe + (int)local_6c) = (short)uVar17;
          local_6c = (int *)((int)local_6c + 0x14);
        }
      }
      uVar17 = uVar17 + 1;
    } while (*(char *)(local_3c + 0x38) == '\0');
  }
  uVar17 = local_48;
  local_84 = FUN_00494b90(local_3c,local_48 * 4);
  if (local_84 == (int *)0x0) {
    local_6c = (int *)0x0;
  }
  else {
    iVar12 = 0;
    if (0 < (int)uVar17) {
      puVar13 = (ushort *)(puVar3[2] + 0xe);
      do {
        local_84[iVar12] = *puVar13 - 1;
        iVar12 = iVar12 + 1;
        puVar13 = puVar13 + 10;
        piVar15 = local_50;
      } while (iVar12 < (int)uVar17);
    }
    local_6c = FUN_00494b90(local_3c,uVar17 * 5 + 0x10);
    if (local_6c != (int *)0x0) {
      *(short *)((int)local_6c + 6) = (short)uVar17;
      local_6c[2] = (int)(local_6c + uVar17 + 3);
      *(undefined1 *)(local_6c + 1) =
           *(undefined1 *)(*(int *)(*(int *)(local_3c + 0x10) + 0xc) + 0x4d);
      if (0 < (int)uVar17) {
        puVar18 = (uint *)(local_6c + 3);
        local_4c = 0;
        iVar12 = 0;
        do {
          local_40 = *(char **)(local_4c + puVar3[2]);
          local_38 = puVar18;
          if ((*(ushort *)(local_40 + 2) & 0x100) == 0) {
            iVar14 = local_84[iVar12];
            if ((undefined4 *)local_2c[0xf] == (undefined4 *)0x0) {
              puVar2 = (undefined4 *)0x0;
LAB_0048189e:
              piVar15 = local_30;
              if (iVar14 < *(int *)*local_2c) {
                puVar2 = (undefined4 *)
                         FUN_004984d0(local_30,*(char **)(((int *)*local_2c)[2] + iVar14 * 0x14));
              }
            }
            else {
              puVar2 = (undefined4 *)FUN_004815e0(local_30,(undefined4 *)local_2c[0xf],iVar14);
              piVar15 = local_30;
              if (puVar2 == (undefined4 *)0x0) goto LAB_0048189e;
            }
            if (puVar2 == (undefined4 *)0x0) {
              puVar2 = *(undefined4 **)(local_3c + 8);
            }
            local_8c = (char *)*puVar2;
            if (local_8c == (char *)0x0) {
              local_88 = 0;
            }
            else {
              cVar1 = *local_8c;
              pcVar4 = local_8c;
              while (cVar1 != '\0') {
                pcVar4 = pcVar4 + 1;
                cVar1 = *pcVar4;
              }
              local_88 = (int)pcVar4 - (int)local_8c & 0x3fffffff;
            }
            pcVar4 = local_40;
            if ((local_88 != 0) &&
               (pcVar5 = (char *)FUN_00496510(*piVar15,0x5c,&local_8c,1), pcVar4 = local_40,
               pcVar5 != (char *)0x0)) {
              *(char **)(pcVar5 + 8) = local_40;
              *(ushort *)(pcVar5 + 2) = *(ushort *)(pcVar5 + 2) | 0x100;
              pcVar4 = pcVar5;
            }
            *(char **)(local_4c + local_34[2]) = pcVar4;
          }
          else {
            puVar2 = (undefined4 *)FUN_004984d0(local_30,local_40);
            local_38 = puVar18;
          }
          *local_38 = (uint)puVar2;
          iVar14 = iVar12 + 1;
          *(undefined1 *)(iVar12 + local_6c[2]) = *(undefined1 *)(local_34[2] + 0xc + local_4c);
          puVar18 = local_38 + 1;
          local_4c = local_4c + 0x14;
          piVar15 = local_50;
          iVar12 = iVar14;
          puVar3 = local_34;
          local_38 = puVar18;
        } while (iVar14 < (int)local_48);
      }
    }
  }
  piVar19 = local_2c;
  piVar16 = local_30;
  local_2c[0xe] = (int)puVar3;
  piVar6 = FUN_00499140(*local_30,(int *)puVar3,0);
  local_68[0xe] = (int)piVar6;
  if (local_5c == 0x71) {
    local_64 = 0;
  }
  else {
    iVar14 = *(int *)*piVar19;
    local_64 = piVar16[0x10];
    iVar12 = iVar14 + 1;
    if (piVar16[0xf] < iVar12) {
      local_64 = piVar16[0x13] + 1;
      piVar16[0x13] = piVar16[0x13] + iVar12;
    }
    else {
      piVar16[0x10] = local_64 + iVar12;
      piVar16[0xf] = piVar16[0xf] - iVar12;
    }
    local_38 = (uint *)piVar15[7];
    iVar12 = piVar15[8];
    local_74 = iVar14;
    if ((int)local_38 < iVar12) {
LAB_00481a28:
      iVar12 = piVar15[1];
      piVar15[7] = piVar15[7] + 1;
      *(undefined2 *)(iVar12 + (int)local_38 * 0x14) = 7;
      *(undefined1 *)(iVar12 + 3 + (int)local_38 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 4 + (int)local_38 * 0x14) = 0;
      *(int *)(iVar12 + 8 + (int)local_38 * 0x14) = local_64;
      *(undefined4 *)(iVar12 + 0xc + (int)local_38 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 0x10 + (int)local_38 * 0x14) = 0;
    }
    else {
      if (iVar12 == 0) {
        iVar12 = 0x33;
      }
      else {
        iVar12 = iVar12 * 2;
      }
      puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar12 * 0x14);
      if (puVar2 != (undefined4 *)0x0) {
        iVar12 = *piVar15;
        if (((iVar12 == 0) || (puVar2 < *(undefined4 **)(iVar12 + 0x104))) ||
           (*(undefined4 **)(iVar12 + 0x108) <= puVar2)) {
          uVar17 = (*DAT_00582af0._4_4_)(puVar2);
        }
        else {
          uVar17 = (uint)*(ushort *)(iVar12 + 0xe8);
        }
        piVar15[8] = uVar17 / 0x14;
        piVar15[1] = (int)puVar2;
        goto LAB_00481a28;
      }
    }
    _Size = iVar14 * 5 + 0x10;
    local_44 = FUN_00494b90(local_3c,_Size);
    piVar16 = local_30;
    piVar19 = local_2c;
    if ((local_44 != (int *)0x0) &&
       (memset(local_44,0,_Size), iVar12 = local_74, piVar16 = local_30, piVar19 = local_2c,
       local_44 != (int *)0x0)) {
      *(short *)((int)local_44 + 6) = (short)iVar14;
      local_44[2] = (int)(local_44 + iVar14 + 3);
      *(undefined1 *)(local_44 + 1) =
           *(undefined1 *)(*(int *)(*(int *)(local_3c + 0x10) + 0xc) + 0x4d);
      if (0 < iVar14) {
        local_38 = (uint *)(local_44 + 3);
        iVar7 = 0;
        iVar14 = 0;
        do {
          if ((undefined4 *)local_2c[0xf] == (undefined4 *)0x0) {
            uVar17 = 0;
LAB_00481adf:
            if (iVar14 < *(int *)*local_2c) {
              uVar17 = FUN_004984d0(local_30,*(char **)(((int *)*local_2c)[2] + iVar7));
            }
          }
          else {
            uVar17 = FUN_004815e0(local_30,(undefined4 *)local_2c[0xf],iVar14);
            if (uVar17 == 0) goto LAB_00481adf;
          }
          iVar10 = iVar14 + 1;
          *local_38 = uVar17;
          local_38 = local_38 + 1;
          iVar7 = iVar7 + 0x14;
          *(undefined1 *)(iVar14 + local_44[2]) = 0;
          piVar15 = local_50;
          iVar14 = iVar10;
          piVar16 = local_30;
          piVar19 = local_2c;
        } while (iVar10 < iVar12);
      }
    }
  }
  piVar19[0xf] = 0;
  FUN_004a6ac0(piVar16,piVar19,(int *)piVar19[0xe],"ORDER");
  if (local_68[0xf] == 0) {
    FUN_004a6ac0(piVar16,local_68,(int *)local_68[0xe],"ORDER");
  }
  FUN_004754f0(piVar16,(int)piVar19,local_60);
  if ((piVar19[2] == 0) || (local_5c != 0x71)) {
    local_34 = (uint *)0x0;
    pcVar4 = (char *)0x0;
  }
  else {
    local_40 = (char *)(piVar16[0x13] + 1);
    local_34 = (uint *)(piVar16[0x13] + 2);
    piVar16[0x13] = (int)local_34;
    if (piVar19[3] == 0) {
      local_38 = (uint *)piVar19[2];
    }
    else {
      local_38 = (uint *)(piVar19[3] + 1);
    }
    iVar12 = piVar15[7];
    iVar14 = piVar15[8];
    if (iVar12 < iVar14) {
LAB_00481c04:
      iVar14 = piVar15[1];
      piVar15[7] = piVar15[7] + 1;
      *(uint **)(iVar14 + 4 + iVar12 * 0x14) = local_38;
      *(undefined2 *)(iVar14 + iVar12 * 0x14) = 0xe;
      *(undefined1 *)(iVar14 + 3 + iVar12 * 0x14) = 0;
      *(char **)(iVar14 + 8 + iVar12 * 0x14) = local_40;
      *(undefined4 *)(iVar14 + 0xc + iVar12 * 0x14) = 0;
      *(undefined4 *)(iVar14 + 0x10 + iVar12 * 0x14) = 0;
    }
    else {
      if (iVar14 == 0) {
        iVar14 = 0x33;
      }
      else {
        iVar14 = iVar14 * 2;
      }
      puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar14 * 0x14);
      if (puVar2 != (undefined4 *)0x0) {
        iVar14 = *piVar15;
        if (((iVar14 == 0) || (puVar2 < *(undefined4 **)(iVar14 + 0x104))) ||
           (*(undefined4 **)(iVar14 + 0x108) <= puVar2)) {
          uVar17 = (*DAT_00582af0._4_4_)(puVar2);
        }
        else {
          uVar17 = (uint)*(ushort *)(iVar14 + 0xe8);
        }
        piVar15[8] = uVar17 / 0x14;
        piVar15[1] = (int)puVar2;
        goto LAB_00481c04;
      }
    }
    iVar12 = piVar15[7];
    iVar14 = piVar15[8];
    if (iVar14 <= iVar12) {
      if (iVar14 == 0) {
        iVar14 = 0x33;
      }
      else {
        iVar14 = iVar14 * 2;
      }
      puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar14 * 0x14);
      piVar16 = local_30;
      pcVar4 = local_40;
      if (puVar2 == (undefined4 *)0x0) goto LAB_00481ceb;
      iVar14 = *piVar15;
      if (((iVar14 == 0) || (puVar2 < *(undefined4 **)(iVar14 + 0x104))) ||
         (*(undefined4 **)(iVar14 + 0x108) <= puVar2)) {
        uVar17 = (*DAT_00582af0._4_4_)(puVar2);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar14 + 0xe8);
      }
      piVar15[8] = uVar17 / 0x14;
      piVar15[1] = (int)puVar2;
    }
    iVar14 = piVar15[1];
    piVar15[7] = piVar15[7] + 1;
    *(undefined2 *)(iVar14 + iVar12 * 0x14) = 0xe;
    *(undefined1 *)(iVar14 + 3 + iVar12 * 0x14) = 0;
    *(char **)(iVar14 + 4 + iVar12 * 0x14) = local_40;
    *(uint **)(iVar14 + 8 + iVar12 * 0x14) = local_34;
    *(undefined4 *)(iVar14 + 0xc + iVar12 * 0x14) = 0;
    *(undefined4 *)(iVar14 + 0x10 + iVar12 * 0x14) = 0;
    piVar16 = local_30;
    pcVar4 = local_40;
  }
LAB_00481ceb:
  FUN_00498790(local_3c,(undefined4 *)local_2c[0x12]);
  local_2c[0x12] = 0;
  FUN_00498790(local_3c,(undefined4 *)local_2c[0x13]);
  local_18[0] = 10;
  local_18[1] = 0;
  local_2c[0x13] = 0;
  piVar16[0x13] = piVar16[0x13] + 1;
  local_50 = (int *)piVar16[0x13];
  local_70 = (int)local_50 + 1;
  local_40 = (char *)((int)local_50 + 2);
  local_10 = 0;
  local_58 = (int)local_50 + 3;
  local_74 = (int)local_50 + 5;
  piVar16[0x13] = local_74;
  local_c = 0;
  local_28[0] = 10;
  local_28[1] = 0;
  local_20 = 0;
  local_1c = 0;
  local_38 = (uint *)piVar15[7];
  iVar12 = piVar15[8];
  local_24 = (int)local_40;
  local_14 = (int)local_50;
  if ((int)local_38 < iVar12) {
LAB_00481de3:
    iVar12 = piVar15[1];
    piVar15[7] = piVar15[7] + 1;
    *(undefined2 *)(iVar12 + (int)local_38 * 0x14) = 1;
    *(undefined1 *)(iVar12 + 3 + (int)local_38 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 4 + (int)local_38 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 8 + (int)local_38 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0xc + (int)local_38 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x10 + (int)local_38 * 0x14) = 0;
  }
  else {
    if (iVar12 == 0) {
      iVar12 = 0x33;
    }
    else {
      iVar12 = iVar12 * 2;
    }
    puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar12 * 0x14);
    if (puVar2 != (undefined4 *)0x0) {
      iVar12 = *piVar15;
      if (((iVar12 == 0) || (puVar2 < *(undefined4 **)(iVar12 + 0x104))) ||
         (*(undefined4 **)(iVar12 + 0x108) <= puVar2)) {
        uVar17 = (*DAT_00582af0._4_4_)(puVar2);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar12 + 0xe8);
      }
      piVar15[1] = (int)puVar2;
      piVar15[8] = uVar17 / 0x14;
      goto LAB_00481de3;
    }
    local_38 = (uint *)0x1;
  }
  iVar12 = piVar15[7];
  local_68[2] = (int)pcVar4;
  local_88 = local_30[0x7a];
  FUN_004a7e30(local_30,local_68,local_18);
  iVar14 = piVar15[7];
  iVar7 = piVar15[8];
  if (iVar14 < iVar7) {
LAB_00481eb8:
    iVar7 = piVar15[1];
    piVar15[7] = piVar15[7] + 1;
    *(undefined2 *)(iVar7 + iVar14 * 0x14) = 7;
    *(undefined1 *)(iVar7 + 3 + iVar14 * 0x14) = 0;
    *(undefined4 *)(iVar7 + 4 + iVar14 * 0x14) = 1;
    *(int *)(iVar7 + 8 + iVar14 * 0x14) = local_70;
    *(undefined4 *)(iVar7 + 0xc + iVar14 * 0x14) = 0;
    *(undefined4 *)(iVar7 + 0x10 + iVar14 * 0x14) = 0;
  }
  else {
    if (iVar7 == 0) {
      iVar7 = 0x33;
    }
    else {
      iVar7 = iVar7 * 2;
    }
    puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar7 * 0x14);
    if (puVar2 != (undefined4 *)0x0) {
      iVar7 = *piVar15;
      if (((iVar7 == 0) || (puVar2 < *(undefined4 **)(iVar7 + 0x104))) ||
         (*(undefined4 **)(iVar7 + 0x108) <= puVar2)) {
        uVar17 = (*DAT_00582af0._4_4_)(puVar2);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar7 + 0xe8);
      }
      piVar15[8] = uVar17 / 0x14;
      piVar15[1] = (int)puVar2;
      goto LAB_00481eb8;
    }
  }
  iVar14 = piVar15[7];
  iVar7 = piVar15[8];
  if (iVar14 < iVar7) {
LAB_00481f57:
    iVar7 = piVar15[1];
    piVar15[7] = piVar15[7] + 1;
    *(undefined2 *)(iVar7 + iVar14 * 0x14) = 4;
    *(undefined1 *)(iVar7 + 3 + iVar14 * 0x14) = 0;
    *(int **)(iVar7 + 4 + iVar14 * 0x14) = local_50;
    *(undefined4 *)(iVar7 + 8 + iVar14 * 0x14) = 0;
    *(undefined4 *)(iVar7 + 0xc + iVar14 * 0x14) = 0;
    *(undefined4 *)(iVar7 + 0x10 + iVar14 * 0x14) = 0;
  }
  else {
    if (iVar7 == 0) {
      iVar7 = 0x33;
    }
    else {
      iVar7 = iVar7 * 2;
    }
    puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar7 * 0x14);
    if (puVar2 != (undefined4 *)0x0) {
      iVar7 = *piVar15;
      if (((iVar7 == 0) || (puVar2 < *(undefined4 **)(iVar7 + 0x104))) ||
         (*(undefined4 **)(iVar7 + 0x108) <= puVar2)) {
        uVar17 = (*DAT_00582af0._4_4_)(puVar2);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar7 + 0xe8);
      }
      piVar15[8] = uVar17 / 0x14;
      piVar15[1] = (int)puVar2;
      goto LAB_00481f57;
    }
  }
  iVar14 = piVar15[7];
  iVar7 = local_2c[2];
  iVar10 = local_2c[3];
  local_2c[2] = (int)local_34;
  local_2c[3] = 0;
  FUN_004a7e30(local_30,local_2c,local_28);
  local_2c[2] = iVar7;
  local_2c[3] = iVar10;
  iVar7 = piVar15[7];
  iVar10 = piVar15[8];
  if (iVar7 < iVar10) {
LAB_0048203b:
    iVar10 = piVar15[1];
    piVar15[7] = piVar15[7] + 1;
    *(undefined2 *)(iVar10 + iVar7 * 0x14) = 7;
    *(undefined1 *)(iVar10 + 3 + iVar7 * 0x14) = 0;
    *(undefined4 *)(iVar10 + 4 + iVar7 * 0x14) = 1;
    *(int *)(iVar10 + 8 + iVar7 * 0x14) = local_58;
    *(undefined4 *)(iVar10 + 0xc + iVar7 * 0x14) = 0;
    *(undefined4 *)(iVar10 + 0x10 + iVar7 * 0x14) = 0;
  }
  else {
    if (iVar10 == 0) {
      iVar10 = 0x33;
    }
    else {
      iVar10 = iVar10 * 2;
    }
    puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar10 * 0x14);
    if (puVar2 != (undefined4 *)0x0) {
      iVar10 = *piVar15;
      if (((iVar10 == 0) || (puVar2 < *(undefined4 **)(iVar10 + 0x104))) ||
         (*(undefined4 **)(iVar10 + 0x108) <= puVar2)) {
        uVar17 = (*DAT_00582af0._4_4_)(puVar2);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar10 + 0xe8);
      }
      piVar15[8] = uVar17 / 0x14;
      piVar15[1] = (int)puVar2;
      goto LAB_0048203b;
    }
  }
  iVar7 = piVar15[7];
  iVar10 = piVar15[8];
  if (iVar7 < iVar10) {
LAB_004820da:
    iVar10 = piVar15[1];
    piVar15[7] = piVar15[7] + 1;
    *(undefined2 *)(iVar10 + iVar7 * 0x14) = 4;
    *(undefined1 *)(iVar10 + 3 + iVar7 * 0x14) = 0;
    *(char **)(iVar10 + 4 + iVar7 * 0x14) = local_40;
    *(undefined4 *)(iVar10 + 8 + iVar7 * 0x14) = 0;
    *(undefined4 *)(iVar10 + 0xc + iVar7 * 0x14) = 0;
    *(undefined4 *)(iVar10 + 0x10 + iVar7 * 0x14) = 0;
  }
  else {
    if (iVar10 == 0) {
      iVar10 = 0x33;
    }
    else {
      iVar10 = iVar10 * 2;
    }
    puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar10 * 0x14);
    if (puVar2 != (undefined4 *)0x0) {
      iVar10 = *piVar15;
      if (((iVar10 == 0) || (puVar2 < *(undefined4 **)(iVar10 + 0x104))) ||
         (*(undefined4 **)(iVar10 + 0x108) <= puVar2)) {
        uVar17 = (*DAT_00582af0._4_4_)(puVar2);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar10 + 0xe8);
      }
      piVar15[8] = uVar17 / 0x14;
      piVar15[1] = (int)puVar2;
      goto LAB_004820da;
    }
  }
  piVar19 = local_30;
  piVar16 = local_44;
  local_34 = (uint *)FUN_0047c700(local_30,local_2c,(int)local_18,local_80,local_58 + 1,local_64,
                                  local_44,0xfffffff0,local_60);
  if ((local_5c == 0x71) || (local_5c == 0x70)) {
    local_7c = FUN_0047c700(piVar19,local_2c,(int)local_28,local_80,local_74,local_64,piVar16,
                            0xffffffef,local_60);
  }
  if ((local_5c == 0x72) || (local_5c == 0x73)) {
    iVar7 = piVar15[7];
    iVar10 = piVar15[8];
    local_54 = iVar7;
    if (iVar7 < iVar10) {
LAB_00482495:
      iVar10 = piVar15[1];
      piVar15[7] = piVar15[7] + 1;
      *(undefined2 *)(iVar10 + iVar7 * 0x14) = 1;
      *(undefined1 *)(iVar10 + 3 + iVar7 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 4 + iVar7 * 0x14) = 0;
      *(int *)(iVar10 + 8 + iVar7 * 0x14) = local_60;
      *(undefined4 *)(iVar10 + 0xc + iVar7 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 0x10 + iVar7 * 0x14) = 0;
    }
    else {
      if (iVar10 == 0) {
        iVar10 = 0x33;
      }
      else {
        iVar10 = iVar10 * 2;
      }
      puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar10 * 0x14);
      if (puVar2 != (undefined4 *)0x0) {
        iVar10 = *piVar15;
        if (((iVar10 == 0) || (puVar2 < *(undefined4 **)(iVar10 + 0x104))) ||
           (*(undefined4 **)(iVar10 + 0x108) <= puVar2)) {
          uVar17 = (*DAT_00582af0._4_4_)(puVar2);
        }
        else {
          uVar17 = (uint)*(ushort *)(iVar10 + 0xe8);
        }
        piVar15[8] = uVar17 / 0x14;
        piVar15[1] = (int)puVar2;
        goto LAB_00482495;
      }
      local_54 = 1;
    }
  }
  else {
    local_54 = piVar15[7];
    iVar7 = piVar15[8];
    if (local_54 < iVar7) {
LAB_004821f1:
      iVar7 = piVar15[1];
      piVar15[7] = piVar15[7] + 1;
      *(int *)(iVar7 + 4 + local_54 * 0x14) = local_58;
      *(undefined2 *)(iVar7 + local_54 * 0x14) = 0x1b;
      *(undefined1 *)(iVar7 + 3 + local_54 * 0x14) = 0;
      *(int *)(iVar7 + 8 + local_54 * 0x14) = local_60;
      *(undefined4 *)(iVar7 + 0xc + local_54 * 0x14) = 0;
      *(undefined4 *)(iVar7 + 0x10 + local_54 * 0x14) = 0;
    }
    else {
      if (iVar7 == 0) {
        iVar7 = 0x33;
      }
      else {
        iVar7 = iVar7 * 2;
      }
      puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar7 * 0x14);
      if (puVar2 != (undefined4 *)0x0) {
        iVar7 = *piVar15;
        if (((iVar7 == 0) || (puVar2 < *(undefined4 **)(iVar7 + 0x104))) ||
           (*(undefined4 **)(iVar7 + 0x108) <= puVar2)) {
          uVar17 = (*DAT_00582af0._4_4_)(puVar2);
        }
        else {
          uVar17 = (uint)*(ushort *)(iVar7 + 0xe8);
        }
        piVar15[8] = uVar17 / 0x14;
        piVar15[1] = (int)puVar2;
        goto LAB_004821f1;
      }
      local_54 = 1;
    }
    iVar7 = piVar15[7];
    iVar10 = piVar15[8];
    if (iVar7 < iVar10) {
LAB_00482298:
      iVar10 = piVar15[1];
      piVar15[7] = piVar15[7] + 1;
      *(int *)(iVar10 + 4 + iVar7 * 0x14) = local_74;
      *(undefined2 *)(iVar10 + iVar7 * 0x14) = 2;
      *(undefined1 *)(iVar10 + 3 + iVar7 * 0x14) = 0;
      *(int *)(iVar10 + 8 + iVar7 * 0x14) = local_7c;
      *(undefined4 *)(iVar10 + 0xc + iVar7 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 0x10 + iVar7 * 0x14) = 0;
    }
    else {
      if (iVar10 == 0) {
        iVar10 = 0x33;
      }
      else {
        iVar10 = iVar10 * 2;
      }
      puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar10 * 0x14);
      if (puVar2 != (undefined4 *)0x0) {
        iVar10 = *piVar15;
        if (((iVar10 == 0) || (puVar2 < *(undefined4 **)(iVar10 + 0x104))) ||
           (*(undefined4 **)(iVar10 + 0x108) <= puVar2)) {
          uVar17 = (*DAT_00582af0._4_4_)(puVar2);
        }
        else {
          uVar17 = (uint)*(ushort *)(iVar10 + 0xe8);
        }
        piVar15[8] = uVar17 / 0x14;
        piVar15[1] = (int)puVar2;
        goto LAB_00482298;
      }
    }
    iVar7 = piVar15[7];
    iVar10 = piVar15[8];
    if (iVar7 < iVar10) {
LAB_00482336:
      iVar10 = piVar15[1];
      piVar15[7] = piVar15[7] + 1;
      *(undefined2 *)(iVar10 + iVar7 * 0x14) = 4;
      *(undefined1 *)(iVar10 + 3 + iVar7 * 0x14) = 0;
      *(char **)(iVar10 + 4 + iVar7 * 0x14) = local_40;
      *(undefined4 *)(iVar10 + 8 + iVar7 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 0xc + iVar7 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 0x10 + iVar7 * 0x14) = 0;
    }
    else {
      if (iVar10 == 0) {
        iVar10 = 0x33;
      }
      else {
        iVar10 = iVar10 * 2;
      }
      puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar10 * 0x14);
      if (puVar2 != (undefined4 *)0x0) {
        iVar10 = *piVar15;
        if (((iVar10 == 0) || (puVar2 < *(undefined4 **)(iVar10 + 0x104))) ||
           (*(undefined4 **)(iVar10 + 0x108) <= puVar2)) {
          uVar17 = (*DAT_00582af0._4_4_)(puVar2);
        }
        else {
          uVar17 = (uint)*(ushort *)(iVar10 + 0xe8);
        }
        piVar15[8] = uVar17 / 0x14;
        piVar15[1] = (int)puVar2;
        goto LAB_00482336;
      }
    }
    iVar7 = piVar15[7];
    iVar10 = piVar15[8];
    if (iVar7 < iVar10) {
LAB_004823d5:
      iVar10 = piVar15[1];
      piVar15[7] = piVar15[7] + 1;
      *(undefined2 *)(iVar10 + iVar7 * 0x14) = 1;
      *(undefined1 *)(iVar10 + 3 + iVar7 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 4 + iVar7 * 0x14) = 0;
      *(int *)(iVar10 + 8 + iVar7 * 0x14) = local_54;
      *(undefined4 *)(iVar10 + 0xc + iVar7 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 0x10 + iVar7 * 0x14) = 0;
    }
    else {
      if (iVar10 == 0) {
        iVar10 = 0x33;
      }
      else {
        iVar10 = iVar10 * 2;
      }
      puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar10 * 0x14);
      if (puVar2 != (undefined4 *)0x0) {
        iVar10 = *piVar15;
        if (((iVar10 == 0) || (puVar2 < *(undefined4 **)(iVar10 + 0x104))) ||
           (*(undefined4 **)(iVar10 + 0x108) <= puVar2)) {
          uVar17 = (*DAT_00582af0._4_4_)(puVar2);
        }
        else {
          uVar17 = (uint)*(ushort *)(iVar10 + 0xe8);
        }
        piVar15[8] = uVar17 / 0x14;
        piVar15[1] = (int)puVar2;
        goto LAB_004823d5;
      }
    }
    *(double *)(local_2c + 8) = *(double *)(local_68 + 8) + *(double *)(local_2c + 8);
  }
  if (local_5c == 0x73) {
    local_4c = local_54;
    if (*(double *)(local_68 + 8) < *(double *)(local_2c + 8)) {
      *(double *)(local_2c + 8) = *(double *)(local_68 + 8);
    }
  }
  else {
    local_4c = piVar15[7];
    iVar7 = piVar15[8];
    if (local_4c < iVar7) {
LAB_00482577:
      iVar7 = piVar15[1];
      piVar15[7] = piVar15[7] + 1;
      *(int *)(iVar7 + 4 + local_4c * 0x14) = local_70;
      *(undefined2 *)(iVar7 + local_4c * 0x14) = 0x1b;
      *(undefined1 *)(iVar7 + 3 + local_4c * 0x14) = 0;
      *(int *)(iVar7 + 8 + local_4c * 0x14) = local_60;
      *(undefined4 *)(iVar7 + 0xc + local_4c * 0x14) = 0;
      *(undefined4 *)(iVar7 + 0x10 + local_4c * 0x14) = 0;
    }
    else {
      if (iVar7 == 0) {
        iVar7 = 0x33;
      }
      else {
        iVar7 = iVar7 * 2;
      }
      puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar7 * 0x14);
      if (puVar2 != (undefined4 *)0x0) {
        iVar7 = *piVar15;
        if (((iVar7 == 0) || (puVar2 < *(undefined4 **)(iVar7 + 0x104))) ||
           (*(undefined4 **)(iVar7 + 0x108) <= puVar2)) {
          uVar17 = (*DAT_00582af0._4_4_)(puVar2);
        }
        else {
          uVar17 = (uint)*(ushort *)(iVar7 + 0xe8);
        }
        piVar15[8] = uVar17 / 0x14;
        piVar15[1] = (int)puVar2;
        goto LAB_00482577;
      }
      local_4c = 1;
    }
    iVar7 = piVar15[7];
    iVar10 = piVar15[8];
    if (iVar7 < iVar10) {
LAB_0048261e:
      piVar15[7] = piVar15[7] + 1;
      iVar10 = piVar15[1];
      *(int *)(iVar10 + 4 + iVar7 * 0x14) = local_58 + 1;
      *(undefined2 *)(iVar10 + iVar7 * 0x14) = 2;
      *(undefined1 *)(iVar10 + 3 + iVar7 * 0x14) = 0;
      *(uint **)(iVar10 + 8 + iVar7 * 0x14) = local_34;
      *(undefined4 *)(iVar10 + 0xc + iVar7 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 0x10 + iVar7 * 0x14) = 0;
    }
    else {
      if (iVar10 == 0) {
        iVar10 = 0x33;
      }
      else {
        iVar10 = iVar10 * 2;
      }
      puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar10 * 0x14);
      if (puVar2 != (undefined4 *)0x0) {
        iVar10 = *piVar15;
        if (((iVar10 == 0) || (puVar2 < *(undefined4 **)(iVar10 + 0x104))) ||
           (*(undefined4 **)(iVar10 + 0x108) <= puVar2)) {
          uVar17 = (*DAT_00582af0._4_4_)(puVar2);
        }
        else {
          uVar17 = (uint)*(ushort *)(iVar10 + 0xe8);
        }
        piVar15[8] = uVar17 / 0x14;
        piVar15[1] = (int)puVar2;
        goto LAB_0048261e;
      }
    }
    iVar7 = piVar15[7];
    iVar10 = piVar15[8];
    if (iVar7 < iVar10) {
LAB_004826bd:
      iVar10 = piVar15[1];
      piVar15[7] = piVar15[7] + 1;
      *(undefined2 *)(iVar10 + iVar7 * 0x14) = 4;
      *(undefined1 *)(iVar10 + 3 + iVar7 * 0x14) = 0;
      *(int **)(iVar10 + 4 + iVar7 * 0x14) = local_50;
      *(undefined4 *)(iVar10 + 8 + iVar7 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 0xc + iVar7 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 0x10 + iVar7 * 0x14) = 0;
    }
    else {
      if (iVar10 == 0) {
        iVar10 = 0x33;
      }
      else {
        iVar10 = iVar10 * 2;
      }
      puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar10 * 0x14);
      if (puVar2 != (undefined4 *)0x0) {
        iVar10 = *piVar15;
        if (((iVar10 == 0) || (puVar2 < *(undefined4 **)(iVar10 + 0x104))) ||
           (*(undefined4 **)(iVar10 + 0x108) <= puVar2)) {
          uVar17 = (*DAT_00582af0._4_4_)(puVar2);
        }
        else {
          uVar17 = (uint)*(ushort *)(iVar10 + 0xe8);
        }
        piVar15[8] = uVar17 / 0x14;
        piVar15[1] = (int)puVar2;
        goto LAB_004826bd;
      }
    }
    iVar7 = piVar15[7];
    iVar10 = piVar15[8];
    if (iVar10 <= iVar7) {
      if (iVar10 == 0) {
        iVar10 = 0x33;
      }
      else {
        iVar10 = iVar10 * 2;
      }
      puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar10 * 0x14);
      if (puVar2 == (undefined4 *)0x0) goto LAB_0048278f;
      iVar10 = *piVar15;
      if (((iVar10 == 0) || (puVar2 < *(undefined4 **)(iVar10 + 0x104))) ||
         (*(undefined4 **)(iVar10 + 0x108) <= puVar2)) {
        uVar17 = (*DAT_00582af0._4_4_)(puVar2);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar10 + 0xe8);
      }
      piVar15[8] = uVar17 / 0x14;
      piVar15[1] = (int)puVar2;
    }
    iVar10 = piVar15[1];
    piVar15[7] = piVar15[7] + 1;
    *(undefined2 *)(iVar10 + iVar7 * 0x14) = 1;
    *(undefined1 *)(iVar10 + 3 + iVar7 * 0x14) = 0;
    *(undefined4 *)(iVar10 + 4 + iVar7 * 0x14) = 0;
    *(int *)(iVar10 + 8 + iVar7 * 0x14) = local_4c;
    *(undefined4 *)(iVar10 + 0xc + iVar7 * 0x14) = 0;
    *(undefined4 *)(iVar10 + 0x10 + iVar7 * 0x14) = 0;
  }
LAB_0048278f:
  local_44 = (int *)piVar15[7];
  iVar7 = piVar15[8];
  if ((int)local_44 < iVar7) {
LAB_00482805:
    piVar15[7] = piVar15[7] + 1;
    iVar7 = piVar15[1];
    *(int *)(iVar7 + 4 + (int)local_44 * 0x14) = local_58 + 1;
    *(undefined2 *)(iVar7 + (int)local_44 * 0x14) = 2;
    *(undefined1 *)(iVar7 + 3 + (int)local_44 * 0x14) = 0;
    *(uint **)(iVar7 + 8 + (int)local_44 * 0x14) = local_34;
    *(undefined4 *)(iVar7 + 0xc + (int)local_44 * 0x14) = 0;
    *(undefined4 *)(iVar7 + 0x10 + (int)local_44 * 0x14) = 0;
  }
  else {
    if (iVar7 == 0) {
      iVar7 = 0x33;
    }
    else {
      iVar7 = iVar7 * 2;
    }
    puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar7 * 0x14);
    if (puVar2 != (undefined4 *)0x0) {
      iVar7 = *piVar15;
      if (((iVar7 == 0) || (puVar2 < *(undefined4 **)(iVar7 + 0x104))) ||
         (*(undefined4 **)(iVar7 + 0x108) <= puVar2)) {
        uVar17 = (*DAT_00582af0._4_4_)(puVar2);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar7 + 0xe8);
      }
      piVar15[1] = (int)puVar2;
      piVar15[8] = uVar17 / 0x14;
      goto LAB_00482805;
    }
    local_44 = (int *)0x1;
  }
  iVar7 = piVar15[7];
  iVar10 = piVar15[8];
  if (iVar7 < iVar10) {
LAB_004828ad:
    iVar10 = piVar15[1];
    piVar15[7] = piVar15[7] + 1;
    *(undefined2 *)(iVar10 + iVar7 * 0x14) = 4;
    *(undefined1 *)(iVar10 + 3 + iVar7 * 0x14) = 0;
    *(int **)(iVar10 + 4 + iVar7 * 0x14) = local_50;
    *(undefined4 *)(iVar10 + 8 + iVar7 * 0x14) = 0;
    *(undefined4 *)(iVar10 + 0xc + iVar7 * 0x14) = 0;
    *(undefined4 *)(iVar10 + 0x10 + iVar7 * 0x14) = 0;
  }
  else {
    if (iVar10 == 0) {
      iVar10 = 0x33;
    }
    else {
      iVar10 = iVar10 * 2;
    }
    puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar10 * 0x14);
    if (puVar2 != (undefined4 *)0x0) {
      iVar10 = *piVar15;
      if (((iVar10 == 0) || (puVar2 < *(undefined4 **)(iVar10 + 0x104))) ||
         (*(undefined4 **)(iVar10 + 0x108) <= puVar2)) {
        uVar17 = (*DAT_00582af0._4_4_)(puVar2);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar10 + 0xe8);
      }
      piVar15[8] = uVar17 / 0x14;
      piVar15[1] = (int)puVar2;
      goto LAB_004828ad;
    }
  }
  iVar7 = piVar15[7];
  iVar10 = piVar15[8];
  if (iVar7 < iVar10) {
LAB_0048294c:
    iVar10 = piVar15[1];
    piVar15[7] = piVar15[7] + 1;
    *(int *)(iVar10 + 4 + iVar7 * 0x14) = local_70;
    *(undefined2 *)(iVar10 + iVar7 * 0x14) = 0x1b;
    *(undefined1 *)(iVar10 + 3 + iVar7 * 0x14) = 0;
    *(int *)(iVar10 + 8 + iVar7 * 0x14) = local_54;
    *(undefined4 *)(iVar10 + 0xc + iVar7 * 0x14) = 0;
    *(undefined4 *)(iVar10 + 0x10 + iVar7 * 0x14) = 0;
  }
  else {
    if (iVar10 == 0) {
      iVar10 = 0x33;
    }
    else {
      iVar10 = iVar10 * 2;
    }
    puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar10 * 0x14);
    if (puVar2 != (undefined4 *)0x0) {
      iVar10 = *piVar15;
      if (((iVar10 == 0) || (puVar2 < *(undefined4 **)(iVar10 + 0x104))) ||
         (*(undefined4 **)(iVar10 + 0x108) <= puVar2)) {
        uVar17 = (*DAT_00582af0._4_4_)(puVar2);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar10 + 0xe8);
      }
      piVar15[8] = uVar17 / 0x14;
      piVar15[1] = (int)puVar2;
      goto LAB_0048294c;
    }
  }
  iVar7 = piVar15[7];
  iVar10 = piVar15[8];
  if (iVar7 < iVar10) {
LAB_004829ea:
    iVar10 = piVar15[1];
    piVar15[7] = piVar15[7] + 1;
    *(undefined2 *)(iVar10 + iVar7 * 0x14) = 1;
    *(undefined1 *)(iVar10 + 3 + iVar7 * 0x14) = 0;
    *(undefined4 *)(iVar10 + 4 + iVar7 * 0x14) = 0;
    *(int *)(iVar10 + 8 + iVar7 * 0x14) = local_78;
    *(undefined4 *)(iVar10 + 0xc + iVar7 * 0x14) = 0;
    *(undefined4 *)(iVar10 + 0x10 + iVar7 * 0x14) = 0;
  }
  else {
    if (iVar10 == 0) {
      iVar10 = 0x33;
    }
    else {
      iVar10 = iVar10 * 2;
    }
    puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar10 * 0x14);
    if (puVar2 != (undefined4 *)0x0) {
      iVar10 = *piVar15;
      if (((iVar10 == 0) || (puVar2 < *(undefined4 **)(iVar10 + 0x104))) ||
         (*(undefined4 **)(iVar10 + 0x108) <= puVar2)) {
        uVar17 = (*DAT_00582af0._4_4_)(puVar2);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar10 + 0xe8);
      }
      piVar15[8] = uVar17 / 0x14;
      piVar15[1] = (int)puVar2;
      goto LAB_004829ea;
    }
  }
  if (local_5c == 0x71) {
    local_34 = (uint *)local_44;
  }
  else if (local_5c == 0x73) {
    local_34 = (uint *)local_44;
    local_44 = (int *)((int)local_44 + 1);
  }
  else {
    local_34 = (uint *)piVar15[7];
    iVar7 = piVar15[8];
    if ((int)local_34 < iVar7) {
LAB_00482aba:
      iVar7 = piVar15[1];
      piVar15[7] = piVar15[7] + 1;
      *(undefined2 *)(iVar7 + (int)local_34 * 0x14) = 4;
      *(undefined1 *)(iVar7 + 3 + (int)local_34 * 0x14) = 0;
      *(int **)(iVar7 + 4 + (int)local_34 * 0x14) = local_50;
      *(undefined4 *)(iVar7 + 8 + (int)local_34 * 0x14) = 0;
      *(undefined4 *)(iVar7 + 0xc + (int)local_34 * 0x14) = 0;
      *(undefined4 *)(iVar7 + 0x10 + (int)local_34 * 0x14) = 0;
    }
    else {
      if (iVar7 == 0) {
        iVar7 = 0x33;
      }
      else {
        iVar7 = iVar7 * 2;
      }
      puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar7 * 0x14);
      if (puVar2 != (undefined4 *)0x0) {
        iVar7 = *piVar15;
        if (((iVar7 == 0) || (puVar2 < *(undefined4 **)(iVar7 + 0x104))) ||
           (*(undefined4 **)(iVar7 + 0x108) <= puVar2)) {
          uVar17 = (*DAT_00582af0._4_4_)(puVar2);
        }
        else {
          uVar17 = (uint)*(ushort *)(iVar7 + 0xe8);
        }
        piVar15[8] = uVar17 / 0x14;
        piVar15[1] = (int)puVar2;
        goto LAB_00482aba;
      }
      local_34 = (uint *)0x1;
    }
    iVar7 = piVar15[7];
    iVar10 = piVar15[8];
    if (iVar7 < iVar10) {
LAB_00482b62:
      iVar10 = piVar15[1];
      piVar15[7] = piVar15[7] + 1;
      *(int *)(iVar10 + 4 + iVar7 * 0x14) = local_70;
      *(undefined2 *)(iVar10 + iVar7 * 0x14) = 0x1b;
      *(undefined1 *)(iVar10 + 3 + iVar7 * 0x14) = 0;
      *(int *)(iVar10 + 8 + iVar7 * 0x14) = local_54;
      *(undefined4 *)(iVar10 + 0xc + iVar7 * 0x14) = 0;
      *(undefined4 *)(iVar10 + 0x10 + iVar7 * 0x14) = 0;
    }
    else {
      if (iVar10 == 0) {
        iVar10 = 0x33;
      }
      else {
        iVar10 = iVar10 * 2;
      }
      puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar10 * 0x14);
      if (puVar2 != (undefined4 *)0x0) {
        iVar10 = *piVar15;
        if (((iVar10 == 0) || (puVar2 < *(undefined4 **)(iVar10 + 0x104))) ||
           (*(undefined4 **)(iVar10 + 0x108) <= puVar2)) {
          uVar17 = (*DAT_00582af0._4_4_)(puVar2);
        }
        else {
          uVar17 = (uint)*(ushort *)(iVar10 + 0xe8);
        }
        piVar15[8] = uVar17 / 0x14;
        piVar15[1] = (int)puVar2;
        goto LAB_00482b62;
      }
    }
    iVar7 = piVar15[7];
    iVar10 = piVar15[8];
    if (iVar10 <= iVar7) {
      if (iVar10 == 0) {
        iVar10 = 0x33;
      }
      else {
        iVar10 = iVar10 * 2;
      }
      puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar10 * 0x14);
      if (puVar2 == (undefined4 *)0x0) goto LAB_00482c33;
      iVar10 = *piVar15;
      if (((iVar10 == 0) || (puVar2 < *(undefined4 **)(iVar10 + 0x104))) ||
         (*(undefined4 **)(iVar10 + 0x108) <= puVar2)) {
        uVar17 = (*DAT_00582af0._4_4_)(puVar2);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar10 + 0xe8);
      }
      piVar15[8] = uVar17 / 0x14;
      piVar15[1] = (int)puVar2;
    }
    iVar10 = piVar15[1];
    piVar15[7] = piVar15[7] + 1;
    *(undefined2 *)(iVar10 + iVar7 * 0x14) = 1;
    *(undefined1 *)(iVar10 + 3 + iVar7 * 0x14) = 0;
    *(undefined4 *)(iVar10 + 4 + iVar7 * 0x14) = 0;
    *(int *)(iVar10 + 8 + iVar7 * 0x14) = local_78;
    *(undefined4 *)(iVar10 + 0xc + iVar7 * 0x14) = 0;
    *(undefined4 *)(iVar10 + 0x10 + iVar7 * 0x14) = 0;
  }
LAB_00482c33:
  iVar7 = piVar15[7];
  if ((local_5c == 0x71) || (local_5c == 0x70)) {
    iVar10 = piVar15[8];
    if (iVar10 <= iVar7) {
      if (iVar10 == 0) {
        iVar10 = 0x33;
      }
      else {
        iVar10 = iVar10 * 2;
      }
      puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar10 * 0x14);
      if (puVar2 == (undefined4 *)0x0) goto LAB_00482ce8;
      iVar10 = *piVar15;
      if (((iVar10 == 0) || (puVar2 < *(undefined4 **)(iVar10 + 0x104))) ||
         (*(undefined4 **)(iVar10 + 0x108) <= puVar2)) {
        uVar17 = (*DAT_00582af0._4_4_)(puVar2);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar10 + 0xe8);
      }
      piVar15[8] = uVar17 / 0x14;
      piVar15[1] = (int)puVar2;
    }
    iVar10 = piVar15[1];
    piVar15[7] = piVar15[7] + 1;
    *(int *)(iVar10 + 4 + iVar7 * 0x14) = local_74;
    *(undefined2 *)(iVar10 + iVar7 * 0x14) = 2;
    *(undefined1 *)(iVar10 + 3 + iVar7 * 0x14) = 0;
    *(int *)(iVar10 + 8 + iVar7 * 0x14) = local_7c;
    *(undefined4 *)(iVar10 + 0xc + iVar7 * 0x14) = 0;
    *(undefined4 *)(iVar10 + 0x10 + iVar7 * 0x14) = 0;
  }
LAB_00482ce8:
  iVar10 = piVar15[7];
  iVar8 = piVar15[8];
  if (iVar10 < iVar8) {
LAB_00482d54:
    iVar8 = piVar15[1];
    piVar15[7] = piVar15[7] + 1;
    *(undefined2 *)(iVar8 + iVar10 * 0x14) = 4;
    *(undefined1 *)(iVar8 + 3 + iVar10 * 0x14) = 0;
    *(char **)(iVar8 + 4 + iVar10 * 0x14) = local_40;
    *(undefined4 *)(iVar8 + 8 + iVar10 * 0x14) = 0;
    *(undefined4 *)(iVar8 + 0xc + iVar10 * 0x14) = 0;
    *(undefined4 *)(iVar8 + 0x10 + iVar10 * 0x14) = 0;
  }
  else {
    if (iVar8 == 0) {
      iVar8 = 0x33;
    }
    else {
      iVar8 = iVar8 * 2;
    }
    puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar8 * 0x14);
    if (puVar2 != (undefined4 *)0x0) {
      iVar8 = *piVar15;
      if (((iVar8 == 0) || (puVar2 < *(undefined4 **)(iVar8 + 0x104))) ||
         (*(undefined4 **)(iVar8 + 0x108) <= puVar2)) {
        uVar17 = (*DAT_00582af0._4_4_)(puVar2);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar8 + 0xe8);
      }
      piVar15[8] = uVar17 / 0x14;
      piVar15[1] = (int)puVar2;
      goto LAB_00482d54;
    }
  }
  iVar10 = piVar15[7];
  iVar8 = piVar15[8];
  if (iVar10 < iVar8) {
LAB_00482df3:
    iVar8 = piVar15[1];
    piVar15[7] = piVar15[7] + 1;
    *(int *)(iVar8 + 4 + iVar10 * 0x14) = local_58;
    *(undefined2 *)(iVar8 + iVar10 * 0x14) = 0x1b;
    *(undefined1 *)(iVar8 + 3 + iVar10 * 0x14) = 0;
    *(int *)(iVar8 + 8 + iVar10 * 0x14) = local_4c;
    *(undefined4 *)(iVar8 + 0xc + iVar10 * 0x14) = 0;
    *(undefined4 *)(iVar8 + 0x10 + iVar10 * 0x14) = 0;
  }
  else {
    if (iVar8 == 0) {
      iVar8 = 0x33;
    }
    else {
      iVar8 = iVar8 * 2;
    }
    puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar8 * 0x14);
    if (puVar2 != (undefined4 *)0x0) {
      iVar8 = *piVar15;
      if (((iVar8 == 0) || (puVar2 < *(undefined4 **)(iVar8 + 0x104))) ||
         (*(undefined4 **)(iVar8 + 0x108) <= puVar2)) {
        uVar17 = (*DAT_00582af0._4_4_)(puVar2);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar8 + 0xe8);
      }
      piVar15[8] = uVar17 / 0x14;
      piVar15[1] = (int)puVar2;
      goto LAB_00482df3;
    }
  }
  iVar10 = piVar15[7];
  iVar8 = piVar15[8];
  if (iVar10 < iVar8) {
LAB_00482e91:
    iVar8 = piVar15[1];
    piVar15[7] = piVar15[7] + 1;
    *(undefined2 *)(iVar8 + iVar10 * 0x14) = 1;
    *(undefined1 *)(iVar8 + 3 + iVar10 * 0x14) = 0;
    *(undefined4 *)(iVar8 + 4 + iVar10 * 0x14) = 0;
    *(int *)(iVar8 + 8 + iVar10 * 0x14) = local_78;
    *(undefined4 *)(iVar8 + 0xc + iVar10 * 0x14) = 0;
    *(undefined4 *)(iVar8 + 0x10 + iVar10 * 0x14) = 0;
  }
  else {
    if (iVar8 == 0) {
      iVar8 = 0x33;
    }
    else {
      iVar8 = iVar8 * 2;
    }
    puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar8 * 0x14);
    if (puVar2 != (undefined4 *)0x0) {
      iVar8 = *piVar15;
      if (((iVar8 == 0) || (puVar2 < *(undefined4 **)(iVar8 + 0x104))) ||
         (*(undefined4 **)(iVar8 + 0x108) <= puVar2)) {
        uVar17 = (*DAT_00582af0._4_4_)(puVar2);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar8 + 0xe8);
      }
      piVar15[8] = uVar17 / 0x14;
      piVar15[1] = (int)puVar2;
      goto LAB_00482e91;
    }
  }
  if ((-1 < (int)local_38) && (local_38 < (uint)piVar15[7])) {
    *(int *)(piVar15[1] + 8 + (int)local_38 * 0x14) = piVar15[7];
  }
  iVar10 = piVar15[7];
  iVar8 = piVar15[8];
  if (iVar10 < iVar8) {
LAB_00482f48:
    iVar8 = piVar15[1];
    piVar15[7] = piVar15[7] + 1;
    *(undefined2 *)(iVar8 + iVar10 * 0x14) = 7;
    *(undefined1 *)(iVar8 + 3 + iVar10 * 0x14) = 0;
    *(undefined4 *)(iVar8 + 4 + iVar10 * 0x14) = 0;
    *(int *)(iVar8 + 8 + iVar10 * 0x14) = local_70;
    *(undefined4 *)(iVar8 + 0xc + iVar10 * 0x14) = 0;
    *(undefined4 *)(iVar8 + 0x10 + iVar10 * 0x14) = 0;
  }
  else {
    if (iVar8 == 0) {
      iVar8 = 0x33;
    }
    else {
      iVar8 = iVar8 * 2;
    }
    puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar8 * 0x14);
    if (puVar2 != (undefined4 *)0x0) {
      iVar8 = *piVar15;
      if (((iVar8 == 0) || (puVar2 < *(undefined4 **)(iVar8 + 0x104))) ||
         (*(undefined4 **)(iVar8 + 0x108) <= puVar2)) {
        uVar17 = (*DAT_00582af0._4_4_)(puVar2);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar8 + 0xe8);
      }
      piVar15[8] = uVar17 / 0x14;
      piVar15[1] = (int)puVar2;
      goto LAB_00482f48;
    }
  }
  iVar10 = piVar15[7];
  iVar8 = piVar15[8];
  if (iVar8 <= iVar10) {
    if (iVar8 == 0) {
      iVar8 = 0x33;
    }
    else {
      iVar8 = iVar8 * 2;
    }
    puVar2 = FUN_00494cf0(*piVar15,(undefined4 *)piVar15[1],iVar8 * 0x14);
    if (puVar2 == (undefined4 *)0x0) goto LAB_0048301f;
    iVar8 = *piVar15;
    if (((iVar8 == 0) || (puVar2 < *(undefined4 **)(iVar8 + 0x104))) ||
       (*(undefined4 **)(iVar8 + 0x108) <= puVar2)) {
      uVar17 = (*DAT_00582af0._4_4_)(puVar2);
    }
    else {
      uVar17 = (uint)*(ushort *)(iVar8 + 0xe8);
    }
    piVar15[8] = uVar17 / 0x14;
    piVar15[1] = (int)puVar2;
  }
  iVar8 = piVar15[1];
  piVar15[7] = piVar15[7] + 1;
  *(undefined2 *)(iVar8 + iVar10 * 0x14) = 7;
  *(undefined1 *)(iVar8 + 3 + iVar10 * 0x14) = 0;
  *(undefined4 *)(iVar8 + 4 + iVar10 * 0x14) = 0;
  *(int *)(iVar8 + 8 + iVar10 * 0x14) = local_58;
  *(undefined4 *)(iVar8 + 0xc + iVar10 * 0x14) = 0;
  *(undefined4 *)(iVar8 + 0x10 + iVar10 * 0x14) = 0;
LAB_0048301f:
  iVar8 = local_58;
  iVar10 = piVar15[7];
  if ((iVar10 < piVar15[8]) || (iVar9 = FUN_0047de10(piVar15), iVar9 == 0)) {
    iVar9 = piVar15[1];
    piVar15[7] = piVar15[7] + 1;
    *(int **)(iVar9 + 4 + iVar10 * 0x14) = local_50;
    *(undefined2 *)(iVar9 + iVar10 * 0x14) = 2;
    *(undefined1 *)(iVar9 + 3 + iVar10 * 0x14) = 0;
    *(int *)(iVar9 + 8 + iVar10 * 0x14) = iVar12;
    *(undefined4 *)(iVar9 + 0xc + iVar10 * 0x14) = 0;
    *(undefined4 *)(iVar9 + 0x10 + iVar10 * 0x14) = 0;
  }
  iVar12 = piVar15[7];
  if ((iVar12 < piVar15[8]) || (iVar10 = FUN_0047de10(piVar15), iVar10 == 0)) {
    iVar10 = piVar15[1];
    piVar15[7] = piVar15[7] + 1;
    *(char **)(iVar10 + 4 + iVar12 * 0x14) = local_40;
    *(undefined2 *)(iVar10 + iVar12 * 0x14) = 2;
    *(undefined1 *)(iVar10 + 3 + iVar12 * 0x14) = 0;
    *(int *)(iVar10 + 8 + iVar12 * 0x14) = iVar14;
    *(undefined4 *)(iVar10 + 0xc + iVar12 * 0x14) = 0;
    *(undefined4 *)(iVar10 + 0x10 + iVar12 * 0x14) = 0;
  }
  iVar12 = piVar15[7];
  if ((iVar12 < piVar15[8]) || (iVar14 = FUN_0047de10(piVar15), iVar14 == 0)) {
    iVar14 = piVar15[1];
    piVar15[7] = piVar15[7] + 1;
    *(int *)(iVar14 + 4 + iVar12 * 0x14) = local_70;
    *(undefined2 *)(iVar14 + iVar12 * 0x14) = 0x1b;
    *(undefined1 *)(iVar14 + 3 + iVar12 * 0x14) = 0;
    *(int *)(iVar14 + 8 + iVar12 * 0x14) = local_54;
    *(undefined4 *)(iVar14 + 0xc + iVar12 * 0x14) = 0;
    *(undefined4 *)(iVar14 + 0x10 + iVar12 * 0x14) = 0;
  }
  iVar12 = piVar15[7];
  if ((iVar12 < piVar15[8]) || (iVar14 = FUN_0047de10(piVar15), iVar14 == 0)) {
    iVar14 = piVar15[1];
    piVar15[7] = piVar15[7] + 1;
    *(undefined2 *)(iVar14 + iVar12 * 0x14) = 0x1b;
    *(undefined1 *)(iVar14 + 3 + iVar12 * 0x14) = 0;
    *(int *)(iVar14 + 4 + iVar12 * 0x14) = iVar8;
    *(int *)(iVar14 + 8 + iVar12 * 0x14) = local_4c;
    *(undefined4 *)(iVar14 + 0xc + iVar12 * 0x14) = 0;
    *(undefined4 *)(iVar14 + 0x10 + iVar12 * 0x14) = 0;
  }
  if (piVar15[10] != 0) {
    *(int *)(piVar15[10] - (local_78 * 4 + 4)) = piVar15[7];
  }
  iVar12 = piVar15[7];
  if ((iVar12 < piVar15[8]) || (iVar14 = FUN_0047de10(piVar15), iVar14 == 0)) {
    iVar14 = piVar15[1];
    piVar15[7] = piVar15[7] + 1;
    *(undefined2 *)(iVar14 + iVar12 * 0x14) = 0x17;
    *(undefined1 *)(iVar14 + 3 + iVar12 * 0x14) = 0;
    *(undefined4 *)(iVar14 + 4 + iVar12 * 0x14) = 0;
    *(undefined4 *)(iVar14 + 8 + iVar12 * 0x14) = 0;
    *(undefined4 *)(iVar14 + 0xc + iVar12 * 0x14) = 0;
    *(undefined4 *)(iVar14 + 0x10 + iVar12 * 0x14) = 0;
  }
  else {
    iVar12 = 1;
  }
  FUN_004aecc0(piVar15,iVar12,local_84,0xfffffff1);
  uVar17 = local_48;
  FUN_004ae8f0(piVar15,0x18,local_10,local_20,local_48,local_6c,0xfffffff0);
  if (piVar15[1] != 0) {
    *(undefined1 *)(piVar15[1] + -0x11 + piVar15[7] * 0x14) = 1;
  }
  iVar12 = piVar15[7];
  if ((iVar12 < piVar15[8]) || (iVar14 = FUN_0047de10(piVar15), iVar14 == 0)) {
    iVar14 = piVar15[1];
    piVar15[7] = piVar15[7] + 1;
    *(int **)(iVar14 + 4 + iVar12 * 0x14) = local_44;
    *(uint **)(iVar14 + 8 + iVar12 * 0x14) = local_34;
    *(undefined2 *)(iVar14 + iVar12 * 0x14) = 0x19;
    *(undefined1 *)(iVar14 + 3 + iVar12 * 0x14) = 0;
    *(int *)(iVar14 + 0xc + iVar12 * 0x14) = iVar7;
    *(undefined4 *)(iVar14 + 0x10 + iVar12 * 0x14) = 0;
  }
  piVar16 = local_30;
  if (local_64 != 0) {
    iVar12 = uVar17 + 1;
    FUN_00496d90((int)local_30,local_64,iVar12);
    if (piVar16[0xf] < iVar12) {
      piVar16[0xf] = iVar12;
      piVar16[0x10] = local_64;
    }
  }
  if (piVar15[10] != 0) {
    *(int *)(piVar15[10] - (local_60 * 4 + 4)) = piVar15[7];
  }
  if (*local_80 == '\x05') {
    piVar19 = (int *)local_68[0xf];
    piVar15 = local_68;
    while (piVar6 = piVar19, piVar6 != (int *)0x0) {
      piVar15 = piVar6;
      piVar19 = (int *)piVar6[0xf];
    }
    FUN_0047c420(piVar16,(short *)0x0,(int *)*piVar15);
  }
  piVar15 = local_2c;
  puVar2 = (undefined4 *)local_2c[0xf];
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00472d10(local_3c,puVar2);
    FUN_00494b00(local_3c,puVar2);
  }
  piVar15[0xf] = (int)local_68;
  FUN_004775b0(piVar16);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004816ca @ 004816ca  kind=gamemisc  attributed-by=none  size=7194 */

void __fastcall FUN_004816ca(undefined4 *param_1)

{
  size_t _Size;
  double dVar1;
  double dVar2;
  char cVar3;
  uint *puVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  char *pcVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  uint uVar14;
  ushort *puVar15;
  int iVar16;
  int *unaff_EBX;
  int iVar17;
  uint unaff_EBP;
  uint *unaff_ESI;
  int *piVar18;
  uint unaff_EDI;
  undefined4 uVar19;
  undefined4 uStack00000008;
  
  while ((int)unaff_EDI <= *(int *)*param_1) {
    iVar16 = *(int *)(unaff_EBP - 0x44);
    iVar12 = 0;
    if (0 < iVar16) {
      puVar15 = (ushort *)(unaff_ESI[2] + 0xe);
      do {
        if (*puVar15 == unaff_EDI) break;
        iVar12 = iVar12 + 1;
        puVar15 = puVar15 + 10;
      } while (iVar12 < iVar16);
      unaff_EBX = *(int **)(unaff_EBP - 0x4c);
      iVar16 = *(int *)(unaff_EBP - 0x44);
    }
    if (iVar12 == iVar16) {
      puVar7 = FUN_00494b90(*(int *)(unaff_EBP - 0x38),0x2d);
      if (puVar7 == (undefined4 *)0x0) {
        uStack00000008 = 0x481798;
        __security_check_cookie(*(uint *)(unaff_EBP - 4) ^ unaff_EBP);
        return;
      }
      memset(puVar7,0,0x2d);
      *(undefined2 *)((int)puVar7 + 0x1e) = 0xffff;
      *(undefined1 *)puVar7 = 0x81;
      *(undefined1 *)(puVar7 + 0xb) = 0;
      *(ushort *)((int)puVar7 + 2) = *(ushort *)((int)puVar7 + 2) | 0x400;
      puVar4 = *(uint **)(unaff_EBP - 0x30);
      piVar18 = *(int **)(unaff_EBP - 0x2c);
      puVar7[5] = 1;
      puVar7[1] = unaff_EDI;
      unaff_ESI = FUN_00498f00(piVar18,puVar4,puVar7);
      *(uint **)(unaff_EBP - 0x30) = unaff_ESI;
      if (unaff_ESI != (uint *)0x0) {
        iVar16 = *(int *)(unaff_EBP - 0x68);
        uVar14 = unaff_ESI[2];
        *(int *)(unaff_EBP - 0x44) = *(int *)(unaff_EBP - 0x44) + 1;
        *(short *)(uVar14 + 0xe + iVar16) = (short)unaff_EDI;
        *(int *)(unaff_EBP - 0x68) = iVar16 + 0x14;
      }
    }
    unaff_EDI = unaff_EDI + 1;
    if (*(char *)(*(int *)(unaff_EBP - 0x38) + 0x38) != '\0') break;
    param_1 = *(undefined4 **)(unaff_EBP - 0x28);
  }
  iVar16 = *(int *)(unaff_EBP - 0x44);
  puVar7 = FUN_00494b90(*(int *)(unaff_EBP - 0x38),iVar16 * 4);
  *(undefined4 **)(unaff_EBP - 0x80) = puVar7;
  if (puVar7 == (undefined4 *)0x0) {
    *(undefined4 *)(unaff_EBP - 0x68) = 0;
  }
  else {
    iVar12 = 0;
    if (0 < iVar16) {
      puVar15 = (ushort *)(unaff_ESI[2] + 0xe);
      do {
        puVar7[iVar12] = *puVar15 - 1;
        iVar12 = iVar12 + 1;
        puVar15 = puVar15 + 10;
      } while (iVar12 < iVar16);
      unaff_EBX = *(int **)(unaff_EBP - 0x4c);
    }
    puVar7 = FUN_00494b90(*(int *)(unaff_EBP - 0x38),iVar16 * 5 + 0x10);
    *(undefined4 **)(unaff_EBP - 0x68) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      *(short *)((int)puVar7 + 6) = (short)iVar16;
      puVar7[2] = puVar7 + iVar16 + 3;
      *(undefined1 *)(puVar7 + 1) =
           *(undefined1 *)(*(int *)(*(int *)(*(int *)(unaff_EBP - 0x38) + 0x10) + 0xc) + 0x4d);
      if (0 < iVar16) {
        iVar16 = 0;
        puVar7 = puVar7 + 3;
        *(undefined4 *)(unaff_EBP - 0x48) = 0;
        *(undefined4 **)(unaff_EBP - 0x34) = puVar7;
        iVar12 = 0;
        do {
          pcVar5 = *(char **)(iVar16 + unaff_ESI[2]);
          *(char **)(unaff_EBP - 0x3c) = pcVar5;
          if ((*(ushort *)(pcVar5 + 2) & 0x100) == 0) {
            iVar16 = *(int *)(*(int *)(unaff_EBP - 0x80) + iVar12 * 4);
            puVar7 = *(undefined4 **)(*(int *)(unaff_EBP - 0x28) + 0x3c);
            if (puVar7 == (undefined4 *)0x0) {
              puVar8 = (undefined4 *)0x0;
LAB_0048189e:
              if (*(int *)**(undefined4 **)(unaff_EBP - 0x28) <= iVar16) goto LAB_0048187f;
              piVar18 = *(int **)(unaff_EBP - 0x2c);
              puVar8 = (undefined4 *)
                       FUN_004984d0(piVar18,*(char **)(((int *)**(undefined4 **)(unaff_EBP - 0x28))
                                                       [2] + iVar16 * 0x14));
            }
            else {
              puVar8 = (undefined4 *)FUN_004815e0(*(int **)(unaff_EBP - 0x2c),puVar7,iVar16);
              if (puVar8 == (undefined4 *)0x0) goto LAB_0048189e;
LAB_0048187f:
              piVar18 = *(int **)(unaff_EBP - 0x2c);
            }
            if (puVar8 == (undefined4 *)0x0) {
              puVar8 = *(undefined4 **)(*(int *)(unaff_EBP - 0x38) + 8);
            }
            pcVar5 = (char *)*puVar8;
            *(char **)(unaff_EBP - 0x88) = pcVar5;
            if (pcVar5 == (char *)0x0) {
              uVar14 = 0;
            }
            else {
              cVar3 = *pcVar5;
              pcVar9 = pcVar5;
              while (cVar3 != '\0') {
                pcVar9 = pcVar9 + 1;
                cVar3 = *pcVar9;
              }
              uVar14 = (int)pcVar9 - (int)pcVar5 & 0x3fffffff;
            }
            *(uint *)(unaff_EBP - 0x84) = uVar14;
            if (uVar14 == 0) {
              puVar13 = *(undefined4 **)(unaff_EBP - 0x3c);
            }
            else {
              puVar7 = FUN_00496510(*piVar18,0x5c,(undefined4 *)(unaff_EBP - 0x88),1);
              puVar13 = *(undefined4 **)(unaff_EBP - 0x3c);
              if (puVar7 != (undefined4 *)0x0) {
                puVar7[2] = *(undefined4 **)(unaff_EBP - 0x3c);
                *(ushort *)((int)puVar7 + 2) = *(ushort *)((int)puVar7 + 2) | 0x100;
                puVar13 = puVar7;
              }
            }
            iVar16 = *(int *)(unaff_EBP - 0x48);
            puVar7 = *(undefined4 **)(unaff_EBP - 0x34);
            *(undefined4 **)(iVar16 + *(int *)(*(int *)(unaff_EBP - 0x30) + 8)) = puVar13;
          }
          else {
            puVar8 = (undefined4 *)FUN_004984d0(*(int **)(unaff_EBP - 0x2c),pcVar5);
            iVar16 = *(int *)(unaff_EBP - 0x48);
          }
          iVar11 = *(int *)(unaff_EBP - 0x68);
          *puVar7 = puVar8;
          unaff_ESI = *(uint **)(unaff_EBP - 0x30);
          iVar17 = iVar12 + 1;
          *(undefined1 *)(iVar12 + *(int *)(iVar11 + 8)) =
               *(undefined1 *)(unaff_ESI[2] + 0xc + iVar16);
          puVar7 = puVar7 + 1;
          iVar16 = iVar16 + 0x14;
          *(undefined4 **)(unaff_EBP - 0x34) = puVar7;
          *(int *)(unaff_EBP - 0x48) = iVar16;
          iVar12 = iVar17;
        } while (iVar17 < *(int *)(unaff_EBP - 0x44));
        unaff_EBX = *(int **)(unaff_EBP - 0x4c);
      }
    }
  }
  puVar7 = *(undefined4 **)(unaff_EBP - 0x28);
  puVar7[0xe] = unaff_ESI;
  piVar18 = *(int **)(unaff_EBP - 0x2c);
  piVar10 = FUN_00499140(*piVar18,(int *)unaff_ESI,0);
  iVar16 = *(int *)(unaff_EBP - 0x58);
  *(int **)(*(int *)(unaff_EBP - 100) + 0x38) = piVar10;
  if (iVar16 == 0x71) {
    *(undefined4 *)(unaff_EBP - 0x60) = 0;
  }
  else {
    iVar12 = piVar18[0xf];
    iVar11 = *(int *)*puVar7;
    iVar17 = piVar18[0x10];
    iVar16 = iVar11 + 1;
    *(int *)(unaff_EBP - 0x70) = iVar11;
    *(int *)(unaff_EBP - 0x60) = iVar17;
    if (iVar12 < iVar16) {
      iVar12 = piVar18[0x13];
      *(int *)(unaff_EBP - 0x60) = iVar12 + 1;
      piVar18[0x13] = iVar12 + iVar16;
    }
    else {
      piVar18[0x10] = iVar17 + iVar16;
      piVar18[0xf] = iVar12 - iVar16;
    }
    iVar16 = unaff_EBX[7];
    iVar12 = unaff_EBX[8];
    *(int *)(unaff_EBP - 0x34) = iVar16;
    if (iVar16 < iVar12) {
LAB_00481a28:
      iVar12 = unaff_EBX[1];
      unaff_EBX[7] = unaff_EBX[7] + 1;
      uVar19 = *(undefined4 *)(unaff_EBP - 0x60);
      *(undefined2 *)(iVar12 + iVar16 * 0x14) = 7;
      *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = uVar19;
      *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
    }
    else {
      if (iVar12 == 0) {
        iVar12 = 0x33;
      }
      else {
        iVar12 = iVar12 * 2;
      }
      puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
      if (puVar7 != (undefined4 *)0x0) {
        iVar16 = *unaff_EBX;
        if (((iVar16 == 0) || (puVar7 < *(undefined4 **)(iVar16 + 0x104))) ||
           (*(undefined4 **)(iVar16 + 0x108) <= puVar7)) {
          uVar14 = (*DAT_00582af0._4_4_)(puVar7);
        }
        else {
          uVar14 = (uint)*(ushort *)(iVar16 + 0xe8);
        }
        iVar16 = *(int *)(unaff_EBP - 0x34);
        unaff_EBX[8] = uVar14 / 0x14;
        unaff_EBX[1] = (int)puVar7;
        goto LAB_00481a28;
      }
    }
    _Size = iVar11 * 5 + 0x10;
    puVar7 = FUN_00494b90(*(int *)(unaff_EBP - 0x38),_Size);
    *(undefined4 **)(unaff_EBP - 0x40) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      memset(puVar7,0,_Size);
      iVar16 = *(int *)(unaff_EBP - 0x40);
      if (iVar16 != 0) {
        *(short *)(iVar16 + 6) = (short)iVar11;
        *(int *)(iVar16 + 8) = iVar16 + (iVar11 + 3) * 4;
        *(undefined1 *)(iVar16 + 4) =
             *(undefined1 *)(*(int *)(*(int *)(*(int *)(unaff_EBP - 0x38) + 0x10) + 0xc) + 0x4d);
        if (0 < iVar11) {
          iVar12 = *(int *)(unaff_EBP - 0x70);
          *(int *)(unaff_EBP - 0x34) = iVar16 + 0xc;
          iVar11 = 0;
          iVar16 = 0;
          do {
            puVar7 = *(undefined4 **)(*(int *)(unaff_EBP - 0x28) + 0x3c);
            if (puVar7 == (undefined4 *)0x0) {
              uVar14 = 0;
LAB_00481adf:
              if (iVar16 < *(int *)**(undefined4 **)(unaff_EBP - 0x28)) {
                uVar14 = FUN_004984d0(*(int **)(unaff_EBP - 0x2c),
                                      *(char **)(((int *)**(undefined4 **)(unaff_EBP - 0x28))[2] +
                                                iVar11));
              }
            }
            else {
              uVar14 = FUN_004815e0(*(int **)(unaff_EBP - 0x2c),puVar7,iVar16);
              if (uVar14 == 0) goto LAB_00481adf;
            }
            puVar4 = *(uint **)(unaff_EBP - 0x34);
            iVar17 = iVar16 + 1;
            *puVar4 = uVar14;
            iVar11 = iVar11 + 0x14;
            *(undefined1 *)(iVar16 + *(int *)(*(int *)(unaff_EBP - 0x40) + 8)) = 0;
            *(uint **)(unaff_EBP - 0x34) = puVar4 + 1;
            iVar16 = iVar17;
          } while (iVar17 < iVar12);
          unaff_EBX = *(int **)(unaff_EBP - 0x4c);
        }
      }
    }
    piVar18 = *(int **)(unaff_EBP - 0x2c);
    puVar7 = *(undefined4 **)(unaff_EBP - 0x28);
  }
  puVar7[0xf] = 0;
  FUN_004a6ac0(piVar18,puVar7,(int *)puVar7[0xe],"ORDER");
  puVar8 = *(undefined4 **)(unaff_EBP - 100);
  if (puVar8[0xf] == 0) {
    FUN_004a6ac0(piVar18,puVar8,(int *)puVar8[0xe],"ORDER");
  }
  FUN_004754f0(piVar18,(int)puVar7,*(undefined4 *)(unaff_EBP - 0x5c));
  if ((puVar7[2] == 0) || (*(int *)(unaff_EBP - 0x58) != 0x71)) {
    *(undefined4 *)(unaff_EBP - 0x30) = 0;
    iVar16 = 0;
  }
  else {
    iVar16 = piVar18[0x13];
    *(int *)(unaff_EBP - 0x3c) = iVar16 + 1;
    iVar16 = iVar16 + 2;
    *(int *)(unaff_EBP - 0x30) = iVar16;
    piVar18[0x13] = iVar16;
    if (puVar7[3] == 0) {
      *(undefined4 *)(unaff_EBP - 0x34) = puVar7[2];
    }
    else {
      *(int *)(unaff_EBP - 0x34) = puVar7[3] + 1;
    }
    iVar16 = unaff_EBX[7];
    iVar12 = unaff_EBX[8];
    if (iVar16 < iVar12) {
LAB_00481c04:
      iVar12 = unaff_EBX[1];
      unaff_EBX[7] = unaff_EBX[7] + 1;
      *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = *(undefined4 *)(unaff_EBP - 0x34);
      uVar19 = *(undefined4 *)(unaff_EBP - 0x3c);
      *(undefined2 *)(iVar12 + iVar16 * 0x14) = 0xe;
      *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = uVar19;
      *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
    }
    else {
      if (iVar12 == 0) {
        iVar12 = 0x33;
      }
      else {
        iVar12 = iVar12 * 2;
      }
      puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
      if (puVar7 != (undefined4 *)0x0) {
        iVar12 = *unaff_EBX;
        if (((iVar12 == 0) || (puVar7 < *(undefined4 **)(iVar12 + 0x104))) ||
           (*(undefined4 **)(iVar12 + 0x108) <= puVar7)) {
          uVar14 = (*DAT_00582af0._4_4_)(puVar7);
        }
        else {
          uVar14 = (uint)*(ushort *)(iVar12 + 0xe8);
        }
        unaff_EBX[8] = uVar14 / 0x14;
        unaff_EBX[1] = (int)puVar7;
        goto LAB_00481c04;
      }
    }
    iVar12 = unaff_EBX[7];
    iVar16 = unaff_EBX[8];
    if (iVar12 < iVar16) {
LAB_00481ca6:
      iVar11 = unaff_EBX[1];
      unaff_EBX[7] = unaff_EBX[7] + 1;
      uVar19 = *(undefined4 *)(unaff_EBP - 0x30);
      iVar16 = *(int *)(unaff_EBP - 0x3c);
      *(undefined2 *)(iVar11 + iVar12 * 0x14) = 0xe;
      *(undefined1 *)(iVar11 + 3 + iVar12 * 0x14) = 0;
      *(int *)(iVar11 + 4 + iVar12 * 0x14) = iVar16;
      *(undefined4 *)(iVar11 + 8 + iVar12 * 0x14) = uVar19;
      *(undefined4 *)(iVar11 + 0xc + iVar12 * 0x14) = 0;
      *(undefined4 *)(iVar11 + 0x10 + iVar12 * 0x14) = 0;
    }
    else {
      if (iVar16 == 0) {
        iVar16 = 0x33;
      }
      else {
        iVar16 = iVar16 * 2;
      }
      puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar16 * 0x14);
      if (puVar7 != (undefined4 *)0x0) {
        iVar16 = *unaff_EBX;
        if (((iVar16 == 0) || (puVar7 < *(undefined4 **)(iVar16 + 0x104))) ||
           (*(undefined4 **)(iVar16 + 0x108) <= puVar7)) {
          uVar14 = (*DAT_00582af0._4_4_)(puVar7);
        }
        else {
          uVar14 = (uint)*(ushort *)(iVar16 + 0xe8);
        }
        unaff_EBX[8] = uVar14 / 0x14;
        unaff_EBX[1] = (int)puVar7;
        goto LAB_00481ca6;
      }
      iVar16 = *(int *)(unaff_EBP - 0x3c);
    }
    piVar18 = *(int **)(unaff_EBP - 0x2c);
  }
  FUN_00498790(*(int *)(unaff_EBP - 0x38),*(undefined4 **)(*(int *)(unaff_EBP - 0x28) + 0x48));
  iVar12 = *(int *)(unaff_EBP - 0x28);
  *(undefined4 *)(iVar12 + 0x48) = 0;
  FUN_00498790(*(int *)(unaff_EBP - 0x38),*(undefined4 **)(iVar12 + 0x4c));
  iVar12 = *(int *)(unaff_EBP - 0x28);
  *(undefined2 *)(unaff_EBP - 0x14) = 10;
  *(undefined4 *)(iVar12 + 0x4c) = 0;
  piVar18[0x13] = piVar18[0x13] + 1;
  iVar12 = piVar18[0x13];
  *(int *)(unaff_EBP - 0x10) = iVar12;
  *(int *)(unaff_EBP - 0x6c) = iVar12 + 1;
  *(undefined4 *)(unaff_EBP - 0xc) = 0;
  *(int *)(unaff_EBP - 0x54) = iVar12 + 3;
  piVar18[0x13] = iVar12 + 5;
  *(undefined4 *)(unaff_EBP - 8) = 0;
  *(undefined2 *)(unaff_EBP - 0x24) = 10;
  *(int *)(unaff_EBP - 0x20) = iVar12 + 2;
  *(undefined4 *)(unaff_EBP - 0x1c) = 0;
  *(undefined4 *)(unaff_EBP - 0x18) = 0;
  iVar11 = unaff_EBX[7];
  *(int *)(unaff_EBP - 0x70) = iVar12 + 5;
  iVar17 = unaff_EBX[8];
  *(int *)(unaff_EBP - 0x4c) = iVar12;
  *(int *)(unaff_EBP - 0x3c) = iVar12 + 2;
  *(int *)(unaff_EBP - 0x34) = iVar11;
  if (iVar11 < iVar17) {
LAB_00481de3:
    iVar12 = unaff_EBX[1];
    unaff_EBX[7] = unaff_EBX[7] + 1;
    *(undefined2 *)(iVar12 + iVar11 * 0x14) = 1;
    *(undefined1 *)(iVar12 + 3 + iVar11 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 4 + iVar11 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 8 + iVar11 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0xc + iVar11 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x10 + iVar11 * 0x14) = 0;
  }
  else {
    if (iVar17 == 0) {
      iVar17 = 0x33;
    }
    else {
      iVar17 = iVar17 * 2;
    }
    puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar17 * 0x14);
    if (puVar7 != (undefined4 *)0x0) {
      iVar12 = *unaff_EBX;
      if (((iVar12 == 0) || (puVar7 < *(undefined4 **)(iVar12 + 0x104))) ||
         (*(undefined4 **)(iVar12 + 0x108) <= puVar7)) {
        uVar14 = (*DAT_00582af0._4_4_)(puVar7);
      }
      else {
        uVar14 = (uint)*(ushort *)(iVar12 + 0xe8);
      }
      unaff_EBX[1] = (int)puVar7;
      iVar11 = *(int *)(unaff_EBP - 0x34);
      unaff_EBX[8] = uVar14 / 0x14;
      goto LAB_00481de3;
    }
    *(undefined4 *)(unaff_EBP - 0x34) = 1;
  }
  piVar18 = *(int **)(unaff_EBP - 100);
  *(int *)(unaff_EBP - 0x90) = unaff_EBX[7];
  piVar10 = *(int **)(unaff_EBP - 0x2c);
  piVar18[2] = iVar16;
  *(int *)(unaff_EBP - 0x84) = piVar10[0x7a];
  FUN_004a7e30(piVar10,piVar18,(byte *)(unaff_EBP - 0x14));
  iVar16 = unaff_EBX[7];
  iVar12 = unaff_EBX[8];
  if (iVar16 < iVar12) {
LAB_00481eb8:
    iVar12 = unaff_EBX[1];
    unaff_EBX[7] = unaff_EBX[7] + 1;
    uVar19 = *(undefined4 *)(unaff_EBP - 0x6c);
    *(undefined2 *)(iVar12 + iVar16 * 0x14) = 7;
    *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = 1;
    *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = uVar19;
    *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
  }
  else {
    if (iVar12 == 0) {
      iVar12 = 0x33;
    }
    else {
      iVar12 = iVar12 * 2;
    }
    puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
    if (puVar7 != (undefined4 *)0x0) {
      iVar12 = *unaff_EBX;
      if (((iVar12 == 0) || (puVar7 < *(undefined4 **)(iVar12 + 0x104))) ||
         (*(undefined4 **)(iVar12 + 0x108) <= puVar7)) {
        uVar14 = (*DAT_00582af0._4_4_)(puVar7);
      }
      else {
        uVar14 = (uint)*(ushort *)(iVar12 + 0xe8);
      }
      unaff_EBX[8] = uVar14 / 0x14;
      unaff_EBX[1] = (int)puVar7;
      goto LAB_00481eb8;
    }
  }
  iVar16 = unaff_EBX[7];
  iVar12 = unaff_EBX[8];
  if (iVar16 < iVar12) {
LAB_00481f57:
    iVar12 = unaff_EBX[1];
    unaff_EBX[7] = unaff_EBX[7] + 1;
    uVar19 = *(undefined4 *)(unaff_EBP - 0x4c);
    *(undefined2 *)(iVar12 + iVar16 * 0x14) = 4;
    *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = uVar19;
    *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
  }
  else {
    if (iVar12 == 0) {
      iVar12 = 0x33;
    }
    else {
      iVar12 = iVar12 * 2;
    }
    puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
    if (puVar7 != (undefined4 *)0x0) {
      iVar12 = *unaff_EBX;
      if (((iVar12 == 0) || (puVar7 < *(undefined4 **)(iVar12 + 0x104))) ||
         (*(undefined4 **)(iVar12 + 0x108) <= puVar7)) {
        uVar14 = (*DAT_00582af0._4_4_)(puVar7);
      }
      else {
        uVar14 = (uint)*(ushort *)(iVar12 + 0xe8);
      }
      unaff_EBX[8] = uVar14 / 0x14;
      unaff_EBX[1] = (int)puVar7;
      goto LAB_00481f57;
    }
  }
  piVar18 = *(int **)(unaff_EBP - 0x28);
  *(int *)(unaff_EBP - 0x94) = unaff_EBX[7];
  iVar16 = piVar18[2];
  iVar12 = piVar18[3];
  piVar18[2] = *(int *)(unaff_EBP - 0x30);
  piVar10 = *(int **)(unaff_EBP - 0x2c);
  piVar18[3] = 0;
  *(int *)(unaff_EBP - 0x98) = piVar10[0x7a];
  FUN_004a7e30(piVar10,piVar18,(byte *)(unaff_EBP - 0x24));
  iVar11 = *(int *)(unaff_EBP - 0x28);
  *(int *)(iVar11 + 8) = iVar16;
  *(int *)(iVar11 + 0xc) = iVar12;
  iVar16 = unaff_EBX[7];
  iVar12 = unaff_EBX[8];
  if (iVar16 < iVar12) {
LAB_0048203b:
    iVar12 = unaff_EBX[1];
    unaff_EBX[7] = unaff_EBX[7] + 1;
    uVar19 = *(undefined4 *)(unaff_EBP - 0x54);
    *(undefined2 *)(iVar12 + iVar16 * 0x14) = 7;
    *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = 1;
    *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = uVar19;
    *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
  }
  else {
    if (iVar12 == 0) {
      iVar12 = 0x33;
    }
    else {
      iVar12 = iVar12 * 2;
    }
    puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
    if (puVar7 != (undefined4 *)0x0) {
      iVar12 = *unaff_EBX;
      if (((iVar12 == 0) || (puVar7 < *(undefined4 **)(iVar12 + 0x104))) ||
         (*(undefined4 **)(iVar12 + 0x108) <= puVar7)) {
        uVar14 = (*DAT_00582af0._4_4_)(puVar7);
      }
      else {
        uVar14 = (uint)*(ushort *)(iVar12 + 0xe8);
      }
      unaff_EBX[8] = uVar14 / 0x14;
      unaff_EBX[1] = (int)puVar7;
      goto LAB_0048203b;
    }
  }
  iVar16 = unaff_EBX[7];
  iVar12 = unaff_EBX[8];
  if (iVar16 < iVar12) {
LAB_004820da:
    iVar12 = unaff_EBX[1];
    unaff_EBX[7] = unaff_EBX[7] + 1;
    uVar19 = *(undefined4 *)(unaff_EBP - 0x3c);
    *(undefined2 *)(iVar12 + iVar16 * 0x14) = 4;
    *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = uVar19;
    *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
  }
  else {
    if (iVar12 == 0) {
      iVar12 = 0x33;
    }
    else {
      iVar12 = iVar12 * 2;
    }
    puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
    if (puVar7 != (undefined4 *)0x0) {
      iVar12 = *unaff_EBX;
      if (((iVar12 == 0) || (puVar7 < *(undefined4 **)(iVar12 + 0x104))) ||
         (*(undefined4 **)(iVar12 + 0x108) <= puVar7)) {
        uVar14 = (*DAT_00582af0._4_4_)(puVar7);
      }
      else {
        uVar14 = (uint)*(ushort *)(iVar12 + 0xe8);
      }
      unaff_EBX[8] = uVar14 / 0x14;
      unaff_EBX[1] = (int)puVar7;
      goto LAB_004820da;
    }
  }
  piVar18 = *(int **)(unaff_EBP - 0x40);
  piVar10 = *(int **)(unaff_EBP - 0x2c);
  iVar16 = FUN_0047c700(piVar10,*(int **)(unaff_EBP - 0x28),unaff_EBP - 0x14,
                        *(undefined1 **)(unaff_EBP - 0x7c),*(int *)(unaff_EBP - 0x54) + 1,
                        *(int *)(unaff_EBP - 0x60),piVar18,0xfffffff0,
                        *(undefined4 *)(unaff_EBP - 0x5c));
  *(int *)(unaff_EBP - 0x30) = iVar16;
  iVar16 = *(int *)(unaff_EBP - 0x58);
  if ((iVar16 == 0x71) || (iVar16 == 0x70)) {
    iVar16 = FUN_0047c700(piVar10,*(int **)(unaff_EBP - 0x28),unaff_EBP - 0x24,
                          *(undefined1 **)(unaff_EBP - 0x7c),*(undefined4 *)(unaff_EBP - 0x70),
                          *(int *)(unaff_EBP - 0x60),piVar18,0xffffffef,
                          *(undefined4 *)(unaff_EBP - 0x5c));
    *(int *)(unaff_EBP - 0x78) = iVar16;
    iVar16 = *(int *)(unaff_EBP - 0x58);
  }
  if ((iVar16 == 0x72) || (iVar16 == 0x73)) {
    iVar16 = unaff_EBX[7];
    iVar12 = unaff_EBX[8];
    *(int *)(unaff_EBP - 0x50) = iVar16;
    if (iVar16 < iVar12) {
LAB_00482495:
      iVar12 = unaff_EBX[1];
      unaff_EBX[7] = unaff_EBX[7] + 1;
      uVar19 = *(undefined4 *)(unaff_EBP - 0x5c);
      *(undefined2 *)(iVar12 + iVar16 * 0x14) = 1;
      *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = uVar19;
      *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
    }
    else {
      if (iVar12 == 0) {
        iVar12 = 0x33;
      }
      else {
        iVar12 = iVar12 * 2;
      }
      puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
      if (puVar7 != (undefined4 *)0x0) {
        iVar12 = *unaff_EBX;
        if (((iVar12 == 0) || (puVar7 < *(undefined4 **)(iVar12 + 0x104))) ||
           (*(undefined4 **)(iVar12 + 0x108) <= puVar7)) {
          uVar14 = (*DAT_00582af0._4_4_)(puVar7);
        }
        else {
          uVar14 = (uint)*(ushort *)(iVar12 + 0xe8);
        }
        unaff_EBX[8] = uVar14 / 0x14;
        unaff_EBX[1] = (int)puVar7;
        goto LAB_00482495;
      }
      *(undefined4 *)(unaff_EBP - 0x50) = 1;
    }
    iVar12 = *(int *)(unaff_EBP - 0x28);
    iVar16 = *(int *)(unaff_EBP - 100);
  }
  else {
    iVar16 = unaff_EBX[7];
    iVar12 = unaff_EBX[8];
    *(int *)(unaff_EBP - 0x50) = iVar16;
    if (iVar16 < iVar12) {
LAB_004821f1:
      iVar12 = unaff_EBX[1];
      unaff_EBX[7] = unaff_EBX[7] + 1;
      *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = *(undefined4 *)(unaff_EBP - 0x54);
      uVar19 = *(undefined4 *)(unaff_EBP - 0x5c);
      *(undefined2 *)(iVar12 + iVar16 * 0x14) = 0x1b;
      *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = uVar19;
      *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
    }
    else {
      if (iVar12 == 0) {
        iVar12 = 0x33;
      }
      else {
        iVar12 = iVar12 * 2;
      }
      puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
      if (puVar7 != (undefined4 *)0x0) {
        iVar16 = *unaff_EBX;
        if (((iVar16 == 0) || (puVar7 < *(undefined4 **)(iVar16 + 0x104))) ||
           (*(undefined4 **)(iVar16 + 0x108) <= puVar7)) {
          uVar14 = (*DAT_00582af0._4_4_)(puVar7);
        }
        else {
          uVar14 = (uint)*(ushort *)(iVar16 + 0xe8);
        }
        unaff_EBX[8] = uVar14 / 0x14;
        iVar16 = *(int *)(unaff_EBP - 0x50);
        unaff_EBX[1] = (int)puVar7;
        goto LAB_004821f1;
      }
      *(undefined4 *)(unaff_EBP - 0x50) = 1;
    }
    iVar16 = unaff_EBX[7];
    iVar12 = unaff_EBX[8];
    if (iVar16 < iVar12) {
LAB_00482298:
      iVar12 = unaff_EBX[1];
      unaff_EBX[7] = unaff_EBX[7] + 1;
      *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = *(undefined4 *)(unaff_EBP - 0x70);
      uVar19 = *(undefined4 *)(unaff_EBP - 0x78);
      *(undefined2 *)(iVar12 + iVar16 * 0x14) = 2;
      *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = uVar19;
      *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
    }
    else {
      if (iVar12 == 0) {
        iVar12 = 0x33;
      }
      else {
        iVar12 = iVar12 * 2;
      }
      puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
      if (puVar7 != (undefined4 *)0x0) {
        iVar12 = *unaff_EBX;
        if (((iVar12 == 0) || (puVar7 < *(undefined4 **)(iVar12 + 0x104))) ||
           (*(undefined4 **)(iVar12 + 0x108) <= puVar7)) {
          uVar14 = (*DAT_00582af0._4_4_)(puVar7);
        }
        else {
          uVar14 = (uint)*(ushort *)(iVar12 + 0xe8);
        }
        unaff_EBX[8] = uVar14 / 0x14;
        unaff_EBX[1] = (int)puVar7;
        goto LAB_00482298;
      }
    }
    iVar16 = unaff_EBX[7];
    iVar12 = unaff_EBX[8];
    if (iVar16 < iVar12) {
LAB_00482336:
      iVar12 = unaff_EBX[1];
      unaff_EBX[7] = unaff_EBX[7] + 1;
      uVar19 = *(undefined4 *)(unaff_EBP - 0x3c);
      *(undefined2 *)(iVar12 + iVar16 * 0x14) = 4;
      *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = uVar19;
      *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
    }
    else {
      if (iVar12 == 0) {
        iVar12 = 0x33;
      }
      else {
        iVar12 = iVar12 * 2;
      }
      puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
      if (puVar7 != (undefined4 *)0x0) {
        iVar12 = *unaff_EBX;
        if (((iVar12 == 0) || (puVar7 < *(undefined4 **)(iVar12 + 0x104))) ||
           (*(undefined4 **)(iVar12 + 0x108) <= puVar7)) {
          uVar14 = (*DAT_00582af0._4_4_)(puVar7);
        }
        else {
          uVar14 = (uint)*(ushort *)(iVar12 + 0xe8);
        }
        unaff_EBX[8] = uVar14 / 0x14;
        unaff_EBX[1] = (int)puVar7;
        goto LAB_00482336;
      }
    }
    iVar16 = unaff_EBX[7];
    iVar12 = unaff_EBX[8];
    if (iVar16 < iVar12) {
LAB_004823d5:
      iVar12 = unaff_EBX[1];
      unaff_EBX[7] = unaff_EBX[7] + 1;
      uVar19 = *(undefined4 *)(unaff_EBP - 0x50);
      *(undefined2 *)(iVar12 + iVar16 * 0x14) = 1;
      *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = uVar19;
      *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
    }
    else {
      if (iVar12 == 0) {
        iVar12 = 0x33;
      }
      else {
        iVar12 = iVar12 * 2;
      }
      puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
      if (puVar7 != (undefined4 *)0x0) {
        iVar12 = *unaff_EBX;
        if (((iVar12 == 0) || (puVar7 < *(undefined4 **)(iVar12 + 0x104))) ||
           (*(undefined4 **)(iVar12 + 0x108) <= puVar7)) {
          uVar14 = (*DAT_00582af0._4_4_)(puVar7);
        }
        else {
          uVar14 = (uint)*(ushort *)(iVar12 + 0xe8);
        }
        unaff_EBX[8] = uVar14 / 0x14;
        unaff_EBX[1] = (int)puVar7;
        goto LAB_004823d5;
      }
    }
    iVar16 = *(int *)(unaff_EBP - 100);
    iVar12 = *(int *)(unaff_EBP - 0x28);
    *(double *)(iVar12 + 0x20) = *(double *)(iVar16 + 0x20) + *(double *)(iVar12 + 0x20);
  }
  if (*(int *)(unaff_EBP - 0x58) == 0x73) {
    dVar1 = *(double *)(iVar16 + 0x20);
    dVar2 = *(double *)(iVar12 + 0x20);
    *(undefined4 *)(unaff_EBP - 0x48) = *(undefined4 *)(unaff_EBP - 0x50);
    if (dVar1 < dVar2) {
      *(double *)(iVar12 + 0x20) = dVar1;
    }
  }
  else {
    iVar16 = unaff_EBX[7];
    iVar12 = unaff_EBX[8];
    *(int *)(unaff_EBP - 0x48) = iVar16;
    if (iVar16 < iVar12) {
LAB_00482577:
      iVar12 = unaff_EBX[1];
      unaff_EBX[7] = unaff_EBX[7] + 1;
      *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = *(undefined4 *)(unaff_EBP - 0x6c);
      uVar19 = *(undefined4 *)(unaff_EBP - 0x5c);
      *(undefined2 *)(iVar12 + iVar16 * 0x14) = 0x1b;
      *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = uVar19;
      *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
    }
    else {
      if (iVar12 == 0) {
        iVar12 = 0x33;
      }
      else {
        iVar12 = iVar12 * 2;
      }
      puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
      if (puVar7 != (undefined4 *)0x0) {
        iVar16 = *unaff_EBX;
        if (((iVar16 == 0) || (puVar7 < *(undefined4 **)(iVar16 + 0x104))) ||
           (*(undefined4 **)(iVar16 + 0x108) <= puVar7)) {
          uVar14 = (*DAT_00582af0._4_4_)(puVar7);
        }
        else {
          uVar14 = (uint)*(ushort *)(iVar16 + 0xe8);
        }
        unaff_EBX[8] = uVar14 / 0x14;
        iVar16 = *(int *)(unaff_EBP - 0x48);
        unaff_EBX[1] = (int)puVar7;
        goto LAB_00482577;
      }
      *(undefined4 *)(unaff_EBP - 0x48) = 1;
    }
    iVar16 = unaff_EBX[7];
    iVar12 = unaff_EBX[8];
    if (iVar16 < iVar12) {
LAB_0048261e:
      unaff_EBX[7] = unaff_EBX[7] + 1;
      iVar12 = unaff_EBX[1];
      *(int *)(iVar12 + 4 + iVar16 * 0x14) = *(int *)(unaff_EBP - 0x54) + 1;
      uVar19 = *(undefined4 *)(unaff_EBP - 0x30);
      *(undefined2 *)(iVar12 + iVar16 * 0x14) = 2;
      *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = uVar19;
      *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
    }
    else {
      if (iVar12 == 0) {
        iVar12 = 0x33;
      }
      else {
        iVar12 = iVar12 * 2;
      }
      puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
      if (puVar7 != (undefined4 *)0x0) {
        iVar12 = *unaff_EBX;
        if (((iVar12 == 0) || (puVar7 < *(undefined4 **)(iVar12 + 0x104))) ||
           (*(undefined4 **)(iVar12 + 0x108) <= puVar7)) {
          uVar14 = (*DAT_00582af0._4_4_)(puVar7);
        }
        else {
          uVar14 = (uint)*(ushort *)(iVar12 + 0xe8);
        }
        unaff_EBX[8] = uVar14 / 0x14;
        unaff_EBX[1] = (int)puVar7;
        goto LAB_0048261e;
      }
    }
    iVar16 = unaff_EBX[7];
    iVar12 = unaff_EBX[8];
    if (iVar16 < iVar12) {
LAB_004826bd:
      iVar12 = unaff_EBX[1];
      unaff_EBX[7] = unaff_EBX[7] + 1;
      uVar19 = *(undefined4 *)(unaff_EBP - 0x4c);
      *(undefined2 *)(iVar12 + iVar16 * 0x14) = 4;
      *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = uVar19;
      *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
    }
    else {
      if (iVar12 == 0) {
        iVar12 = 0x33;
      }
      else {
        iVar12 = iVar12 * 2;
      }
      puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
      if (puVar7 != (undefined4 *)0x0) {
        iVar12 = *unaff_EBX;
        if (((iVar12 == 0) || (puVar7 < *(undefined4 **)(iVar12 + 0x104))) ||
           (*(undefined4 **)(iVar12 + 0x108) <= puVar7)) {
          uVar14 = (*DAT_00582af0._4_4_)(puVar7);
        }
        else {
          uVar14 = (uint)*(ushort *)(iVar12 + 0xe8);
        }
        unaff_EBX[8] = uVar14 / 0x14;
        unaff_EBX[1] = (int)puVar7;
        goto LAB_004826bd;
      }
    }
    iVar16 = unaff_EBX[7];
    iVar12 = unaff_EBX[8];
    if (iVar12 <= iVar16) {
      if (iVar12 == 0) {
        iVar12 = 0x33;
      }
      else {
        iVar12 = iVar12 * 2;
      }
      puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
      if (puVar7 == (undefined4 *)0x0) goto LAB_0048278f;
      iVar12 = *unaff_EBX;
      if (((iVar12 == 0) || (puVar7 < *(undefined4 **)(iVar12 + 0x104))) ||
         (*(undefined4 **)(iVar12 + 0x108) <= puVar7)) {
        uVar14 = (*DAT_00582af0._4_4_)(puVar7);
      }
      else {
        uVar14 = (uint)*(ushort *)(iVar12 + 0xe8);
      }
      unaff_EBX[8] = uVar14 / 0x14;
      unaff_EBX[1] = (int)puVar7;
    }
    iVar12 = unaff_EBX[1];
    unaff_EBX[7] = unaff_EBX[7] + 1;
    uVar19 = *(undefined4 *)(unaff_EBP - 0x48);
    *(undefined2 *)(iVar12 + iVar16 * 0x14) = 1;
    *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = uVar19;
    *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
  }
LAB_0048278f:
  iVar16 = unaff_EBX[7];
  iVar12 = unaff_EBX[8];
  *(int *)(unaff_EBP - 0x40) = iVar16;
  if (iVar16 < iVar12) {
LAB_00482805:
    unaff_EBX[7] = unaff_EBX[7] + 1;
    iVar12 = unaff_EBX[1];
    *(int *)(iVar12 + 4 + iVar16 * 0x14) = *(int *)(unaff_EBP - 0x54) + 1;
    uVar19 = *(undefined4 *)(unaff_EBP - 0x30);
    *(undefined2 *)(iVar12 + iVar16 * 0x14) = 2;
    *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = uVar19;
    *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
  }
  else {
    if (iVar12 == 0) {
      iVar12 = 0x33;
    }
    else {
      iVar12 = iVar12 * 2;
    }
    puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
    if (puVar7 != (undefined4 *)0x0) {
      iVar16 = *unaff_EBX;
      if (((iVar16 == 0) || (puVar7 < *(undefined4 **)(iVar16 + 0x104))) ||
         (*(undefined4 **)(iVar16 + 0x108) <= puVar7)) {
        uVar14 = (*DAT_00582af0._4_4_)(puVar7);
      }
      else {
        uVar14 = (uint)*(ushort *)(iVar16 + 0xe8);
      }
      unaff_EBX[1] = (int)puVar7;
      iVar16 = *(int *)(unaff_EBP - 0x40);
      unaff_EBX[8] = uVar14 / 0x14;
      goto LAB_00482805;
    }
    *(undefined4 *)(unaff_EBP - 0x40) = 1;
  }
  iVar16 = unaff_EBX[7];
  iVar12 = unaff_EBX[8];
  if (iVar16 < iVar12) {
LAB_004828ad:
    iVar12 = unaff_EBX[1];
    unaff_EBX[7] = unaff_EBX[7] + 1;
    uVar19 = *(undefined4 *)(unaff_EBP - 0x4c);
    *(undefined2 *)(iVar12 + iVar16 * 0x14) = 4;
    *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = uVar19;
    *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
  }
  else {
    if (iVar12 == 0) {
      iVar12 = 0x33;
    }
    else {
      iVar12 = iVar12 * 2;
    }
    puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
    if (puVar7 != (undefined4 *)0x0) {
      iVar12 = *unaff_EBX;
      if (((iVar12 == 0) || (puVar7 < *(undefined4 **)(iVar12 + 0x104))) ||
         (*(undefined4 **)(iVar12 + 0x108) <= puVar7)) {
        uVar14 = (*DAT_00582af0._4_4_)(puVar7);
      }
      else {
        uVar14 = (uint)*(ushort *)(iVar12 + 0xe8);
      }
      unaff_EBX[8] = uVar14 / 0x14;
      unaff_EBX[1] = (int)puVar7;
      goto LAB_004828ad;
    }
  }
  iVar16 = unaff_EBX[7];
  iVar12 = unaff_EBX[8];
  if (iVar16 < iVar12) {
LAB_0048294c:
    iVar12 = unaff_EBX[1];
    unaff_EBX[7] = unaff_EBX[7] + 1;
    *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = *(undefined4 *)(unaff_EBP - 0x6c);
    uVar19 = *(undefined4 *)(unaff_EBP - 0x50);
    *(undefined2 *)(iVar12 + iVar16 * 0x14) = 0x1b;
    *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = uVar19;
    *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
  }
  else {
    if (iVar12 == 0) {
      iVar12 = 0x33;
    }
    else {
      iVar12 = iVar12 * 2;
    }
    puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
    if (puVar7 != (undefined4 *)0x0) {
      iVar12 = *unaff_EBX;
      if (((iVar12 == 0) || (puVar7 < *(undefined4 **)(iVar12 + 0x104))) ||
         (*(undefined4 **)(iVar12 + 0x108) <= puVar7)) {
        uVar14 = (*DAT_00582af0._4_4_)(puVar7);
      }
      else {
        uVar14 = (uint)*(ushort *)(iVar12 + 0xe8);
      }
      unaff_EBX[8] = uVar14 / 0x14;
      unaff_EBX[1] = (int)puVar7;
      goto LAB_0048294c;
    }
  }
  iVar16 = unaff_EBX[7];
  iVar12 = unaff_EBX[8];
  if (iVar16 < iVar12) {
LAB_004829ea:
    iVar12 = unaff_EBX[1];
    unaff_EBX[7] = unaff_EBX[7] + 1;
    uVar19 = *(undefined4 *)(unaff_EBP - 0x74);
    *(undefined2 *)(iVar12 + iVar16 * 0x14) = 1;
    *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = uVar19;
    *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
  }
  else {
    if (iVar12 == 0) {
      iVar12 = 0x33;
    }
    else {
      iVar12 = iVar12 * 2;
    }
    puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
    if (puVar7 != (undefined4 *)0x0) {
      iVar12 = *unaff_EBX;
      if (((iVar12 == 0) || (puVar7 < *(undefined4 **)(iVar12 + 0x104))) ||
         (*(undefined4 **)(iVar12 + 0x108) <= puVar7)) {
        uVar14 = (*DAT_00582af0._4_4_)(puVar7);
      }
      else {
        uVar14 = (uint)*(ushort *)(iVar12 + 0xe8);
      }
      unaff_EBX[8] = uVar14 / 0x14;
      unaff_EBX[1] = (int)puVar7;
      goto LAB_004829ea;
    }
  }
  if (*(int *)(unaff_EBP - 0x58) == 0x71) {
    *(undefined4 *)(unaff_EBP - 0x30) = *(undefined4 *)(unaff_EBP - 0x40);
  }
  else if (*(int *)(unaff_EBP - 0x58) == 0x73) {
    iVar16 = *(int *)(unaff_EBP - 0x40);
    *(int *)(unaff_EBP - 0x30) = iVar16;
    *(int *)(unaff_EBP - 0x40) = iVar16 + 1;
  }
  else {
    iVar16 = unaff_EBX[7];
    iVar12 = unaff_EBX[8];
    *(int *)(unaff_EBP - 0x30) = iVar16;
    if (iVar16 < iVar12) {
LAB_00482aba:
      iVar12 = unaff_EBX[1];
      unaff_EBX[7] = unaff_EBX[7] + 1;
      uVar19 = *(undefined4 *)(unaff_EBP - 0x4c);
      *(undefined2 *)(iVar12 + iVar16 * 0x14) = 4;
      *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = uVar19;
      *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
    }
    else {
      if (iVar12 == 0) {
        iVar12 = 0x33;
      }
      else {
        iVar12 = iVar12 * 2;
      }
      puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
      if (puVar7 != (undefined4 *)0x0) {
        iVar16 = *unaff_EBX;
        if (((iVar16 == 0) || (puVar7 < *(undefined4 **)(iVar16 + 0x104))) ||
           (*(undefined4 **)(iVar16 + 0x108) <= puVar7)) {
          uVar14 = (*DAT_00582af0._4_4_)(puVar7);
        }
        else {
          uVar14 = (uint)*(ushort *)(iVar16 + 0xe8);
        }
        unaff_EBX[8] = uVar14 / 0x14;
        iVar16 = *(int *)(unaff_EBP - 0x30);
        unaff_EBX[1] = (int)puVar7;
        goto LAB_00482aba;
      }
      *(undefined4 *)(unaff_EBP - 0x30) = 1;
    }
    iVar16 = unaff_EBX[7];
    iVar12 = unaff_EBX[8];
    if (iVar16 < iVar12) {
LAB_00482b62:
      iVar12 = unaff_EBX[1];
      unaff_EBX[7] = unaff_EBX[7] + 1;
      *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = *(undefined4 *)(unaff_EBP - 0x6c);
      uVar19 = *(undefined4 *)(unaff_EBP - 0x50);
      *(undefined2 *)(iVar12 + iVar16 * 0x14) = 0x1b;
      *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = uVar19;
      *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
    }
    else {
      if (iVar12 == 0) {
        iVar12 = 0x33;
      }
      else {
        iVar12 = iVar12 * 2;
      }
      puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
      if (puVar7 != (undefined4 *)0x0) {
        iVar12 = *unaff_EBX;
        if (((iVar12 == 0) || (puVar7 < *(undefined4 **)(iVar12 + 0x104))) ||
           (*(undefined4 **)(iVar12 + 0x108) <= puVar7)) {
          uVar14 = (*DAT_00582af0._4_4_)(puVar7);
        }
        else {
          uVar14 = (uint)*(ushort *)(iVar12 + 0xe8);
        }
        unaff_EBX[8] = uVar14 / 0x14;
        unaff_EBX[1] = (int)puVar7;
        goto LAB_00482b62;
      }
    }
    iVar16 = unaff_EBX[7];
    iVar12 = unaff_EBX[8];
    if (iVar12 <= iVar16) {
      if (iVar12 == 0) {
        iVar12 = 0x33;
      }
      else {
        iVar12 = iVar12 * 2;
      }
      puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
      if (puVar7 == (undefined4 *)0x0) goto LAB_00482c33;
      iVar12 = *unaff_EBX;
      if (((iVar12 == 0) || (puVar7 < *(undefined4 **)(iVar12 + 0x104))) ||
         (*(undefined4 **)(iVar12 + 0x108) <= puVar7)) {
        uVar14 = (*DAT_00582af0._4_4_)(puVar7);
      }
      else {
        uVar14 = (uint)*(ushort *)(iVar12 + 0xe8);
      }
      unaff_EBX[8] = uVar14 / 0x14;
      unaff_EBX[1] = (int)puVar7;
    }
    iVar12 = unaff_EBX[1];
    unaff_EBX[7] = unaff_EBX[7] + 1;
    uVar19 = *(undefined4 *)(unaff_EBP - 0x74);
    *(undefined2 *)(iVar12 + iVar16 * 0x14) = 1;
    *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = uVar19;
    *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
  }
LAB_00482c33:
  iVar16 = *(int *)(unaff_EBP - 0x58);
  iVar12 = unaff_EBX[7];
  *(int *)(unaff_EBP - 0x8c) = iVar12;
  if ((iVar16 == 0x71) || (iVar16 == 0x70)) {
    iVar16 = unaff_EBX[8];
    if (iVar16 <= iVar12) {
      if (iVar16 == 0) {
        iVar16 = 0x33;
      }
      else {
        iVar16 = iVar16 * 2;
      }
      puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar16 * 0x14);
      if (puVar7 == (undefined4 *)0x0) goto LAB_00482ce8;
      iVar16 = *unaff_EBX;
      if (((iVar16 == 0) || (puVar7 < *(undefined4 **)(iVar16 + 0x104))) ||
         (*(undefined4 **)(iVar16 + 0x108) <= puVar7)) {
        uVar14 = (*DAT_00582af0._4_4_)(puVar7);
      }
      else {
        uVar14 = (uint)*(ushort *)(iVar16 + 0xe8);
      }
      unaff_EBX[8] = uVar14 / 0x14;
      unaff_EBX[1] = (int)puVar7;
    }
    iVar16 = unaff_EBX[1];
    unaff_EBX[7] = unaff_EBX[7] + 1;
    *(undefined4 *)(iVar16 + 4 + iVar12 * 0x14) = *(undefined4 *)(unaff_EBP - 0x70);
    uVar19 = *(undefined4 *)(unaff_EBP - 0x78);
    *(undefined2 *)(iVar16 + iVar12 * 0x14) = 2;
    *(undefined1 *)(iVar16 + 3 + iVar12 * 0x14) = 0;
    *(undefined4 *)(iVar16 + 8 + iVar12 * 0x14) = uVar19;
    *(undefined4 *)(iVar16 + 0xc + iVar12 * 0x14) = 0;
    *(undefined4 *)(iVar16 + 0x10 + iVar12 * 0x14) = 0;
  }
LAB_00482ce8:
  iVar16 = unaff_EBX[7];
  iVar12 = unaff_EBX[8];
  if (iVar16 < iVar12) {
LAB_00482d54:
    iVar12 = unaff_EBX[1];
    unaff_EBX[7] = unaff_EBX[7] + 1;
    uVar19 = *(undefined4 *)(unaff_EBP - 0x3c);
    *(undefined2 *)(iVar12 + iVar16 * 0x14) = 4;
    *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = uVar19;
    *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
  }
  else {
    if (iVar12 == 0) {
      iVar12 = 0x33;
    }
    else {
      iVar12 = iVar12 * 2;
    }
    puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
    if (puVar7 != (undefined4 *)0x0) {
      iVar12 = *unaff_EBX;
      if (((iVar12 == 0) || (puVar7 < *(undefined4 **)(iVar12 + 0x104))) ||
         (*(undefined4 **)(iVar12 + 0x108) <= puVar7)) {
        uVar14 = (*DAT_00582af0._4_4_)(puVar7);
      }
      else {
        uVar14 = (uint)*(ushort *)(iVar12 + 0xe8);
      }
      unaff_EBX[8] = uVar14 / 0x14;
      unaff_EBX[1] = (int)puVar7;
      goto LAB_00482d54;
    }
  }
  iVar16 = unaff_EBX[7];
  iVar12 = unaff_EBX[8];
  if (iVar16 < iVar12) {
LAB_00482df3:
    iVar12 = unaff_EBX[1];
    unaff_EBX[7] = unaff_EBX[7] + 1;
    *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = *(undefined4 *)(unaff_EBP - 0x54);
    uVar19 = *(undefined4 *)(unaff_EBP - 0x48);
    *(undefined2 *)(iVar12 + iVar16 * 0x14) = 0x1b;
    *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = uVar19;
    *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
  }
  else {
    if (iVar12 == 0) {
      iVar12 = 0x33;
    }
    else {
      iVar12 = iVar12 * 2;
    }
    puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
    if (puVar7 != (undefined4 *)0x0) {
      iVar12 = *unaff_EBX;
      if (((iVar12 == 0) || (puVar7 < *(undefined4 **)(iVar12 + 0x104))) ||
         (*(undefined4 **)(iVar12 + 0x108) <= puVar7)) {
        uVar14 = (*DAT_00582af0._4_4_)(puVar7);
      }
      else {
        uVar14 = (uint)*(ushort *)(iVar12 + 0xe8);
      }
      unaff_EBX[8] = uVar14 / 0x14;
      unaff_EBX[1] = (int)puVar7;
      goto LAB_00482df3;
    }
  }
  iVar16 = unaff_EBX[7];
  iVar12 = unaff_EBX[8];
  if (iVar16 < iVar12) {
LAB_00482e91:
    iVar12 = unaff_EBX[1];
    unaff_EBX[7] = unaff_EBX[7] + 1;
    uVar19 = *(undefined4 *)(unaff_EBP - 0x74);
    *(undefined2 *)(iVar12 + iVar16 * 0x14) = 1;
    *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = uVar19;
    *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
  }
  else {
    if (iVar12 == 0) {
      iVar12 = 0x33;
    }
    else {
      iVar12 = iVar12 * 2;
    }
    puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
    if (puVar7 != (undefined4 *)0x0) {
      iVar12 = *unaff_EBX;
      if (((iVar12 == 0) || (puVar7 < *(undefined4 **)(iVar12 + 0x104))) ||
         (*(undefined4 **)(iVar12 + 0x108) <= puVar7)) {
        uVar14 = (*DAT_00582af0._4_4_)(puVar7);
      }
      else {
        uVar14 = (uint)*(ushort *)(iVar12 + 0xe8);
      }
      unaff_EBX[8] = uVar14 / 0x14;
      unaff_EBX[1] = (int)puVar7;
      goto LAB_00482e91;
    }
  }
  uVar14 = *(uint *)(unaff_EBP - 0x34);
  if ((-1 < (int)uVar14) && (uVar14 < (uint)unaff_EBX[7])) {
    *(int *)(unaff_EBX[1] + 8 + uVar14 * 0x14) = unaff_EBX[7];
  }
  iVar16 = unaff_EBX[7];
  iVar12 = unaff_EBX[8];
  if (iVar16 < iVar12) {
LAB_00482f48:
    iVar12 = unaff_EBX[1];
    unaff_EBX[7] = unaff_EBX[7] + 1;
    uVar19 = *(undefined4 *)(unaff_EBP - 0x6c);
    *(undefined2 *)(iVar12 + iVar16 * 0x14) = 7;
    *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = uVar19;
    *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
  }
  else {
    if (iVar12 == 0) {
      iVar12 = 0x33;
    }
    else {
      iVar12 = iVar12 * 2;
    }
    puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
    if (puVar7 != (undefined4 *)0x0) {
      iVar12 = *unaff_EBX;
      if (((iVar12 == 0) || (puVar7 < *(undefined4 **)(iVar12 + 0x104))) ||
         (*(undefined4 **)(iVar12 + 0x108) <= puVar7)) {
        uVar14 = (*DAT_00582af0._4_4_)(puVar7);
      }
      else {
        uVar14 = (uint)*(ushort *)(iVar12 + 0xe8);
      }
      unaff_EBX[8] = uVar14 / 0x14;
      unaff_EBX[1] = (int)puVar7;
      goto LAB_00482f48;
    }
  }
  iVar16 = unaff_EBX[7];
  iVar12 = unaff_EBX[8];
  if (iVar12 <= iVar16) {
    if (iVar12 == 0) {
      iVar12 = 0x33;
    }
    else {
      iVar12 = iVar12 * 2;
    }
    puVar7 = FUN_00494cf0(*unaff_EBX,(undefined4 *)unaff_EBX[1],iVar12 * 0x14);
    if (puVar7 == (undefined4 *)0x0) {
      uVar19 = *(undefined4 *)(unaff_EBP - 0x54);
      goto LAB_0048301f;
    }
    iVar12 = *unaff_EBX;
    if (((iVar12 == 0) || (puVar7 < *(undefined4 **)(iVar12 + 0x104))) ||
       (*(undefined4 **)(iVar12 + 0x108) <= puVar7)) {
      uVar14 = (*DAT_00582af0._4_4_)(puVar7);
    }
    else {
      uVar14 = (uint)*(ushort *)(iVar12 + 0xe8);
    }
    unaff_EBX[8] = uVar14 / 0x14;
    unaff_EBX[1] = (int)puVar7;
  }
  iVar12 = unaff_EBX[1];
  unaff_EBX[7] = unaff_EBX[7] + 1;
  uVar19 = *(undefined4 *)(unaff_EBP - 0x54);
  *(undefined2 *)(iVar12 + iVar16 * 0x14) = 7;
  *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
  *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = 0;
  *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = uVar19;
  *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
  *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
LAB_0048301f:
  iVar16 = unaff_EBX[7];
  if ((iVar16 < unaff_EBX[8]) || (iVar12 = FUN_0047de10(unaff_EBX), iVar12 == 0)) {
    iVar12 = unaff_EBX[1];
    unaff_EBX[7] = unaff_EBX[7] + 1;
    *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = *(undefined4 *)(unaff_EBP - 0x4c);
    uVar6 = *(undefined4 *)(unaff_EBP - 0x90);
    *(undefined2 *)(iVar12 + iVar16 * 0x14) = 2;
    *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = uVar6;
    *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
  }
  iVar16 = unaff_EBX[7];
  if ((iVar16 < unaff_EBX[8]) || (iVar12 = FUN_0047de10(unaff_EBX), iVar12 == 0)) {
    iVar12 = unaff_EBX[1];
    unaff_EBX[7] = unaff_EBX[7] + 1;
    *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = *(undefined4 *)(unaff_EBP - 0x3c);
    uVar6 = *(undefined4 *)(unaff_EBP - 0x94);
    *(undefined2 *)(iVar12 + iVar16 * 0x14) = 2;
    *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = uVar6;
    *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
  }
  iVar16 = unaff_EBX[7];
  if ((iVar16 < unaff_EBX[8]) || (iVar12 = FUN_0047de10(unaff_EBX), iVar12 == 0)) {
    iVar12 = unaff_EBX[1];
    unaff_EBX[7] = unaff_EBX[7] + 1;
    *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = *(undefined4 *)(unaff_EBP - 0x6c);
    uVar6 = *(undefined4 *)(unaff_EBP - 0x50);
    *(undefined2 *)(iVar12 + iVar16 * 0x14) = 0x1b;
    *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = uVar6;
    *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
  }
  iVar16 = unaff_EBX[7];
  if ((iVar16 < unaff_EBX[8]) || (iVar12 = FUN_0047de10(unaff_EBX), iVar12 == 0)) {
    iVar12 = unaff_EBX[1];
    unaff_EBX[7] = unaff_EBX[7] + 1;
    uVar6 = *(undefined4 *)(unaff_EBP - 0x48);
    *(undefined2 *)(iVar12 + iVar16 * 0x14) = 0x1b;
    *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = uVar19;
    *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = uVar6;
    *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
  }
  if (unaff_EBX[10] != 0) {
    *(int *)(unaff_EBX[10] - (*(int *)(unaff_EBP - 0x74) * 4 + 4)) = unaff_EBX[7];
  }
  iVar16 = unaff_EBX[7];
  if ((iVar16 < unaff_EBX[8]) || (iVar12 = FUN_0047de10(unaff_EBX), iVar12 == 0)) {
    iVar12 = unaff_EBX[1];
    unaff_EBX[7] = unaff_EBX[7] + 1;
    *(undefined2 *)(iVar12 + iVar16 * 0x14) = 0x17;
    *(undefined1 *)(iVar12 + 3 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 4 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 8 + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0xc + iVar16 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x10 + iVar16 * 0x14) = 0;
  }
  else {
    iVar16 = 1;
  }
  FUN_004aecc0(unaff_EBX,iVar16,*(int **)(unaff_EBP - 0x80),0xfffffff1);
  iVar16 = *(int *)(unaff_EBP - 0x44);
  FUN_004ae8f0(unaff_EBX,0x18,*(undefined4 *)(unaff_EBP - 0xc),*(undefined4 *)(unaff_EBP - 0x1c),
               iVar16,*(int **)(unaff_EBP - 0x68),0xfffffff0);
  if (unaff_EBX[1] != 0) {
    *(undefined1 *)(unaff_EBX[1] + -0x11 + unaff_EBX[7] * 0x14) = 1;
  }
  iVar12 = unaff_EBX[7];
  if ((iVar12 < unaff_EBX[8]) || (iVar11 = FUN_0047de10(unaff_EBX), iVar11 == 0)) {
    iVar11 = unaff_EBX[1];
    unaff_EBX[7] = unaff_EBX[7] + 1;
    *(undefined4 *)(iVar11 + 4 + iVar12 * 0x14) = *(undefined4 *)(unaff_EBP - 0x40);
    *(undefined4 *)(iVar11 + 8 + iVar12 * 0x14) = *(undefined4 *)(unaff_EBP - 0x30);
    uVar19 = *(undefined4 *)(unaff_EBP - 0x8c);
    *(undefined2 *)(iVar11 + iVar12 * 0x14) = 0x19;
    *(undefined1 *)(iVar11 + 3 + iVar12 * 0x14) = 0;
    *(undefined4 *)(iVar11 + 0xc + iVar12 * 0x14) = uVar19;
    *(undefined4 *)(iVar11 + 0x10 + iVar12 * 0x14) = 0;
  }
  if (*(int *)(unaff_EBP - 0x60) == 0) {
    piVar18 = *(int **)(unaff_EBP - 0x2c);
  }
  else {
    iVar16 = iVar16 + 1;
    piVar18 = *(int **)(unaff_EBP - 0x2c);
    FUN_00496d90((int)piVar18,*(int *)(unaff_EBP - 0x60),iVar16);
    if (piVar18[0xf] < iVar16) {
      iVar12 = *(int *)(unaff_EBP - 0x60);
      piVar18[0xf] = iVar16;
      piVar18[0x10] = iVar12;
    }
  }
  if (unaff_EBX[10] != 0) {
    *(int *)(unaff_EBX[10] - (*(int *)(unaff_EBP - 0x5c) * 4 + 4)) = unaff_EBX[7];
  }
  if (**(char **)(unaff_EBP - 0x7c) == '\x05') {
    puVar7 = *(undefined4 **)(unaff_EBP - 100);
    for (puVar8 = (undefined4 *)(*(undefined4 **)(unaff_EBP - 100))[0xf];
        puVar8 != (undefined4 *)0x0; puVar8 = (undefined4 *)puVar8[0xf]) {
      puVar7 = puVar8;
    }
    FUN_0047c420(piVar18,(short *)0x0,(int *)*puVar7);
  }
  iVar16 = *(int *)(unaff_EBP - 0x28);
  puVar7 = *(undefined4 **)(iVar16 + 0x3c);
  if (puVar7 != (undefined4 *)0x0) {
    FUN_00472d10(*(int *)(unaff_EBP - 0x38),puVar7);
    FUN_00494b00(*(int *)(unaff_EBP - 0x38),puVar7);
  }
  *(undefined4 *)(iVar16 + 0x3c) = *(undefined4 *)(unaff_EBP - 100);
  FUN_004775b0(piVar18);
  uStack00000008 = 0x4832e6;
  __security_check_cookie(*(uint *)(unaff_EBP - 4) ^ unaff_EBP);
  return;
}


/* FUN_004832f0 @ 004832f0  kind=gamemisc  attributed-by=none  size=123 */

undefined4 __cdecl FUN_004832f0(undefined4 *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int iVar6;
  
  if (param_1 != (undefined4 *)0x0) {
    iVar6 = 0;
    if (0 < (int)param_1[1]) {
      puVar4 = (undefined4 *)*param_1;
      do {
        pbVar3 = (byte *)*puVar4;
        bVar2 = *pbVar3;
        pbVar5 = param_2;
        while ((bVar2 != 0 && ((&DAT_00569620)[bVar2] == (&DAT_00569620)[*pbVar5]))) {
          pbVar1 = pbVar3 + 1;
          pbVar3 = pbVar3 + 1;
          pbVar5 = pbVar5 + 1;
          bVar2 = *pbVar1;
        }
        if ((&DAT_00569620)[*pbVar3] == (&DAT_00569620)[*pbVar5]) {
          return 1;
        }
        iVar6 = iVar6 + 1;
        puVar4 = puVar4 + 2;
      } while (iVar6 < (int)param_1[1]);
    }
  }
  return 0;
}


/* FUN_00483380 @ 00483380  kind=gamemisc  attributed-by=none  size=219 */

uint __cdecl FUN_00483380(int param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    return 0;
  }
  puVar2 = *(undefined1 **)(param_1 + 0xc);
  puVar3 = *(undefined8 **)(puVar2 + 0x38);
  uVar4 = FUN_004a2c80(*(undefined4 **)(puVar2 + 0x44));
  if (uVar4 == 0) {
    *puVar3 = 0x66206574694c5153;
    puVar3[1] = 0x332074616d726f;
    *(undefined1 *)(puVar3 + 2) = *(undefined1 *)(param_1 + 0x21);
    *(undefined1 *)((int)puVar3 + 0x11) = *(undefined1 *)(param_1 + 0x22);
    *(undefined2 *)((int)puVar3 + 0x12) = 0x101;
    *(char *)((int)puVar3 + 0x14) = *(char *)(param_1 + 0x20) - *(char *)(param_1 + 0x24);
    *(undefined2 *)((int)puVar3 + 0x15) = 0x2040;
    *(undefined1 *)((int)puVar3 + 0x17) = 0x20;
    memset(puVar3 + 3,0,0x4c);
    FUN_004c5b30(puVar2,0xd);
    uVar1 = *(undefined1 *)(param_1 + 0x11);
    *(ushort *)(param_1 + 0x16) = *(ushort *)(param_1 + 0x16) | 2;
    *(undefined1 *)((int)puVar3 + 0x34) = 0;
    *(undefined1 *)((int)puVar3 + 0x35) = 0;
    *(undefined1 *)((int)puVar3 + 0x37) = uVar1;
    *(undefined1 *)((int)puVar3 + 0x36) = 0;
    uVar1 = *(undefined1 *)(param_1 + 0x12);
    *(undefined1 *)(puVar3 + 8) = 0;
    *(undefined1 *)((int)puVar3 + 0x41) = 0;
    *(undefined1 *)((int)puVar3 + 0x42) = 0;
    *(undefined1 *)((int)puVar3 + 0x43) = uVar1;
    *(undefined4 *)(param_1 + 0x2c) = 1;
    *(undefined1 *)((int)puVar3 + 0x1f) = 1;
    uVar4 = 0;
  }
  return uVar4;
}


/* FUN_00483460 @ 00483460  kind=gamemisc  attributed-by=none  size=45 */

int __cdecl FUN_00483460(undefined4 param_1,int param_2,byte *param_3,int param_4,byte *param_5)

{
  int iVar1;
  
  iVar1 = param_4;
  if (param_2 < param_4) {
    iVar1 = param_2;
  }
  iVar1 = FUN_00468380(param_3,param_5,iVar1);
  if (iVar1 == 0) {
    iVar1 = param_2 - param_4;
  }
  return iVar1;
}


/* FUN_004834d0 @ 004834d0  kind=gamemisc  attributed-by=none  size=1140 */

uint __cdecl FUN_004834d0(int *param_1,undefined4 *param_2,uint param_3,byte *param_4)

{
  uint uVar1;
  int *_Dst;
  int iVar2;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  void *pvVar6;
  uint uVar7;
  int local_c;
  byte *local_8;
  
  local_8 = (byte *)0x0;
  local_c = 0;
  *param_2 = 0;
  uVar1 = FUN_004bc920();
  if (uVar1 != 0) {
    return uVar1;
  }
  if ((1 << ((byte)param_3 & 7) & 0x46U) == 0) {
    FUN_004683f0(0x15,"misuse at line %d of [%.10s]");
    return 0x15;
  }
  if (DAT_00582acc == 0) {
    iVar2 = 0;
  }
  else if ((param_3 & 0x8000) == 0) {
    iVar2 = DAT_00582ad0;
    if ((param_3 & 0x10000) != 0) {
      iVar2 = 1;
    }
  }
  else {
    iVar2 = 0;
  }
  if ((param_3 & 0x40000) == 0) {
    if (DAT_00582b8c != 0) {
      param_3 = param_3 | 0x20000;
    }
  }
  else {
    param_3 = param_3 & 0xfffdffff;
  }
  uVar1 = param_3 & 0xfff600e7;
  param_3 = uVar1;
  _Dst = (int *)FUN_004a0350(0x1f8);
  pbVar5 = local_8;
  if ((_Dst != (int *)0x0) && (memset(_Dst,0,0x1f8), pbVar5 = local_8, _Dst != (int *)0x0)) {
    if (iVar2 != 0) {
      if (DAT_00582acc == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*DAT_00582b10)(1);
      }
      _Dst[3] = iVar2;
      if (iVar2 == 0) {
        FUN_00466dd0((int)_Dst);
        _Dst = (int *)0x0;
        pbVar5 = local_8;
        goto LAB_004835dd;
      }
    }
    if (_Dst[3] != 0) {
      (*DAT_00582b18)(_Dst[3]);
    }
    _Dst[0xc] = 0xff;
    _Dst[5] = 2;
    _Dst[0x11] = -0xfc486fa;
    _Dst[4] = (int)(_Dst + 0x6e);
    _Dst[0x14] = 1000000000;
    _Dst[0x15] = 1000000000;
    _Dst[0x16] = 2000;
    _Dst[0x17] = 1000;
    _Dst[0x18] = 500;
    _Dst[0x19] = 25000;
    _Dst[0x1a] = 0x7f;
    _Dst[0x1b] = 10;
    _Dst[0x1c] = 50000;
    _Dst[0x1d] = 999;
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
    FUN_004762d0((int)_Dst,(byte *)"BINARY",1,0,0x4708e0,0);
    FUN_004762d0((int)_Dst,(byte *)"BINARY",3,0,0x4708e0,0);
    FUN_004762d0((int)_Dst,(byte *)"BINARY",2,0,0x4708e0,0);
    FUN_004762d0((int)_Dst,(byte *)"RTRIM",1,1,0x4708e0,0);
    pbVar5 = local_8;
    if ((char)_Dst[0xe] == '\0') {
      piVar3 = FUN_00499500((int)_Dst,1,(byte *)"BINARY",0);
      _Dst[2] = (int)piVar3;
      FUN_004762d0((int)_Dst,(byte *)"NOCASE",1,0,0x483460,0);
      _Dst[10] = uVar1;
      iVar4 = FUN_004a2e90(param_4,param_1,&param_3,_Dst,&local_8,&local_c);
      pbVar5 = local_8;
      iVar2 = local_c;
      if (iVar4 == 0) {
        iVar2 = FUN_00490e00((undefined *)*_Dst,local_8,(int)_Dst,(undefined4 *)(_Dst[4] + 4),0,
                             param_3 | 0x100);
        if (iVar2 == 0) {
          pvVar6 = FUN_004a7a80((int)_Dst,*(undefined4 **)(_Dst[4] + 4));
          *(void **)(_Dst[4] + 0xc) = pvVar6;
          pvVar6 = FUN_004a7a80((int)_Dst,(undefined4 *)0x0);
          *(void **)(_Dst[4] + 0x1c) = pvVar6;
          *(undefined **)_Dst[4] = &DAT_0057151c;
          *(undefined1 *)(_Dst[4] + 9) = 3;
          *(undefined1 **)(_Dst[4] + 0x10) = &DAT_00571350;
          *(undefined1 *)(_Dst[4] + 0x19) = 1;
          _Dst[0x11] = -0x5fd65969;
          if ((char)_Dst[0xe] == '\0') {
            FUN_004961f0((int)_Dst,0,(byte *)0x0);
            uVar1 = FUN_00464130((int)_Dst,(byte *)"MATCH",2);
            if (uVar1 == 7) {
              *(undefined1 *)(_Dst + 0xe) = 1;
            }
            uVar1 = FUN_00468670((int)_Dst);
            if (uVar1 == 0) {
              FUN_0048d6f0((int)_Dst);
              uVar7 = FUN_00468670((int)_Dst);
              uVar1 = 0;
              if (uVar7 != 0) goto LAB_004835dd;
            }
            FUN_004961f0((int)_Dst,uVar1,(byte *)0x0);
            FUN_0048b660((int)_Dst,(undefined4 *)0x0,DAT_00582ae0,DAT_00582ae4);
            if (_Dst[3] != 0) {
              (*DAT_00582b18)(_Dst[3]);
            }
            _Dst[0x30] = (int)FUN_004ba730;
            _Dst[0x31] = 1000;
            if (_Dst[3] != 0) {
              (*DAT_00582b20)(_Dst[3]);
            }
          }
        }
        else {
          if (iVar2 == 0xc0a) {
            iVar2 = 7;
          }
          FUN_004961f0((int)_Dst,iVar2,(byte *)0x0);
        }
      }
      else {
        if (iVar4 == 7) {
          *(undefined1 *)(_Dst + 0xe) = 1;
        }
        pbVar5 = &DAT_0056de50;
        if (local_c == 0) {
          pbVar5 = (byte *)0x0;
        }
        FUN_004961f0((int)_Dst,iVar4,pbVar5);
        FUN_00466dd0(iVar2);
        pbVar5 = local_8;
      }
    }
  }
LAB_004835dd:
  FUN_00466dd0((int)pbVar5);
  if ((_Dst != (int *)0x0) && (_Dst[3] != 0)) {
    (*DAT_00582b20)(_Dst[3]);
  }
  uVar1 = FUN_00468670((int)_Dst);
  if (uVar1 != 7) {
    if (uVar1 != 0) {
      _Dst[0x11] = 0x4b771290;
    }
    *param_2 = _Dst;
    return uVar1 & 0xff;
  }
  FUN_00492580(_Dst,0);
  *param_2 = 0;
  return 7;
}


/* FUN_00483b10 @ 00483b10  kind=gamemisc  attributed-by=none  size=86 */

undefined4 __cdecl FUN_00483b10(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)param_1[0x11];
  if (*piVar1 == 0) {
    if ((*(char *)((int)param_1 + 5) != '\x04') && (*(char *)((int)param_1 + 0x15) == '\0')) {
      uVar2 = (**(code **)(*param_1 + 0x18))(*param_1,0,piVar1,0x201e,0);
      return uVar2;
    }
    piVar1[0] = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
    piVar1[3] = 0;
    piVar1[4] = 0;
    piVar1[5] = 0;
    piVar1[6] = 0;
    piVar1[7] = 0;
    piVar1[8] = 0;
    piVar1[9] = 0;
    *piVar1 = (int)&DAT_00569a48;
  }
  return 0;
}


/* FUN_00483b70 @ 00483b70  kind=gamemisc  attributed-by=none  size=42 */

short __cdecl FUN_00483b70(int param_1)

{
  if (param_1 == 0x48) {
    return 1;
  }
  if (param_1 == 0x49) {
    return 0x80;
  }
  return 2 << ((char)param_1 + 0xb4U & 0x1f);
}


/* FUN_00483ba0 @ 00483ba0  kind=gamemisc  attributed-by=none  size=35 */

void __cdecl FUN_00483ba0(int param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 8);
  if ((*pcVar1 != '\0') && (*pcVar1 = '\0', 1 < *(short *)(param_1 + 0x1a))) {
    FUN_00471320(pcVar1);
    return;
  }
  return;
}


/* FUN_00483bd0 @ 00483bd0  kind=gamemisc  attributed-by=none  size=102 */

int __cdecl FUN_00483bd0(int param_1)

{
  int iVar1;
  int iVar2;
  int local_8;
  
  local_8 = 0;
  FUN_004ba770(*(int *)(param_1 + 0xb8));
  iVar2 = FUN_004ba0e0(*(int **)(param_1 + 0xb8),&local_8);
  if ((iVar2 != 0) || (local_8 != 0)) {
    for (iVar1 = *(int *)(param_1 + 0x58); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x2c)) {
      *(undefined4 *)(iVar1 + 0x10) = 1;
    }
    FUN_004a3b00(*(undefined4 **)(param_1 + 0xb4),0);
  }
  return iVar2;
}


/* FUN_00483c40 @ 00483c40  kind=gamemisc  attributed-by=none  size=93 */

int __cdecl FUN_00483c40(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((3 < *(byte *)(param_1 + 0x10)) && (*(byte *)(param_1 + 0x10) != 5)) {
    return 0;
  }
  iVar2 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x1c))(*(int **)(param_1 + 0x3c),4);
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0x10) = 4;
    return 0;
  }
  piVar1 = *(int **)(param_1 + 0x3c);
  if (*piVar1 != 0) {
    (**(code **)(*piVar1 + 0x20))(piVar1,1);
    if (*(char *)(param_1 + 0x10) != '\x05') {
      *(undefined1 *)(param_1 + 0x10) = 1;
    }
  }
  return iVar2;
}


/* FUN_00483ca0 @ 00483ca0  kind=gamemisc  attributed-by=none  size=69 */

int __cdecl FUN_00483ca0(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 <= (int)(uint)*(byte *)(param_1 + 0x10)) && (*(byte *)(param_1 + 0x10) != 5)) {
    return 0;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x1c))(*(int **)(param_1 + 0x3c),param_2);
  if ((iVar1 == 0) && ((*(char *)(param_1 + 0x10) != '\x05' || (param_2 == 4)))) {
    *(char *)(param_1 + 0x10) = (char)param_2;
  }
  return iVar1;
}


/* FUN_00483cf0 @ 00483cf0  kind=gamemisc  attributed-by=none  size=72 */

void __cdecl FUN_00483cf0(int *param_1)

{
  int iVar1;
  
  if (((char)param_1[1] != '\0') && (iVar1 = FUN_00483c40((int)param_1), iVar1 != 0)) {
    return;
  }
  FUN_004bac90(*param_1,param_1[0xf],param_1[0x2f],(uint)*(byte *)(param_1 + 1),param_1[0x22],
               param_1[0x23],param_1 + 0x2e);
  return;
}


/* FUN_00483d40 @ 00483d40  kind=gamemisc  attributed-by=none  size=134 */

void __cdecl FUN_00483d40(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint local_8;
  
  piVar1 = param_1;
  if ((char)param_1[3] == '\0') {
    iVar2 = FUN_00483dd0((int)param_1,&local_8);
    if (iVar2 == 0) {
      iVar2 = *piVar1;
      if (local_8 == 0) {
        iVar2 = (**(code **)(iVar2 + 0x1c))(iVar2,piVar1[0x2f],0);
        if (iVar2 == 0x170a) {
          iVar2 = 0;
        }
        param_1 = (int *)0x0;
      }
      else {
        iVar2 = (**(code **)(iVar2 + 0x20))(iVar2,piVar1[0x2f],0,&param_1);
      }
      if (iVar2 == 0) {
        if (param_1 != (int *)0x0) {
          FUN_004a2440(piVar1,(undefined4 *)0x0);
          return;
        }
        if (*(char *)((int)piVar1 + 5) == '\x05') {
          *(undefined1 *)((int)piVar1 + 5) = 0;
        }
      }
    }
  }
  return;
}


/* FUN_00483dd0 @ 00483dd0  kind=gamemisc  attributed-by=none  size=133 */

int __cdecl FUN_00483dd0(int param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 local_c;
  
  iVar2 = *(int *)(param_1 + 0xb8);
  if (((iVar2 == 0) || (*(short *)(iVar2 + 0x28) < 0)) ||
     (uVar3 = *(uint *)(iVar2 + 0x48), uVar3 == 0)) {
    piVar1 = *(int **)(param_1 + 0x3c);
    local_c = 0;
    if ((*piVar1 != 0) && (iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,&local_c), iVar2 != 0)) {
      return iVar2;
    }
    uVar3 = *(uint *)(param_1 + 0x80);
    uVar4 = __alldiv((uVar3 + (uint)local_c) - 1,
                     (((int)uVar3 >> 0x1f) + local_c._4_4_ + (uint)CARRY4(uVar3,(uint)local_c)) -
                     (uint)(uVar3 + (uint)local_c == 0),uVar3,(int)uVar3 >> 0x1f);
    uVar3 = (uint)uVar4;
  }
  if (*(uint *)(param_1 + 0x84) < uVar3) {
    *(uint *)(param_1 + 0x84) = uVar3;
  }
  *param_2 = uVar3;
  return 0;
}


/* FUN_00484180 @ 00484180  kind=gamemisc  attributed-by=none  size=224 */

uint __cdecl FUN_00484180(int *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_1[10] != 0) || (*(char *)((int)param_1 + 0x13) != '\0')) {
    return 0;
  }
  if (((char)param_1[5] != '\0') && ((param_2[6] & 4) != 0)) {
    return 0;
  }
  param_2[3] = 0;
  if (param_1[0x2e] == 0) {
    if (((param_2[6] & 4) != 0) || (*(char *)((int)param_1 + 0xf) == '\x03')) {
      uVar2 = FUN_004bd5d0((uint)param_1,1);
      if (uVar2 != 0) goto LAB_00484245;
    }
    if ((uint)param_1[6] < param_2[5]) {
      iVar1 = FUN_004bd250((int)param_2);
      if (iVar1 != 0) {
        uVar2 = FUN_004bd350((int)param_2);
        if (uVar2 != 0) goto LAB_00484245;
      }
    }
    uVar2 = FUN_00485750(param_1,(int)param_2);
  }
  else {
    iVar1 = FUN_004bd250((int)param_2);
    if (iVar1 != 0) {
      uVar2 = FUN_004bd350((int)param_2);
      if (uVar2 != 0) goto LAB_00484245;
    }
    uVar2 = FUN_00484410((int)param_1,param_2,0,0);
  }
  if (uVar2 == 0) {
    FUN_004a3950(param_2);
  }
LAB_00484245:
  if (((uVar2 & 0xff) == 0xd) || ((uVar2 & 0xff) == 10)) {
    param_1[10] = uVar2;
    *(undefined1 *)((int)param_1 + 0xf) = 6;
  }
  return uVar2;
}


/* FUN_00484260 @ 00484260  kind=gamemisc  attributed-by=none  size=54 */

void __cdecl FUN_00484260(int param_1)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 7) == '\0') &&
     (iVar1 = (**(code **)(**(int **)(param_1 + 0x40) + 0x14))(*(int **)(param_1 + 0x40),2),
     iVar1 != 0)) {
    return;
  }
  (**(code **)(**(int **)(param_1 + 0x40) + 0x18))(*(int **)(param_1 + 0x40),param_1 + 0x50);
  return;
}


/* FUN_004843d0 @ 004843d0  kind=gamemisc  attributed-by=none  size=49 */

undefined4 __cdecl FUN_004843d0(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 0x3c);
  if (*piVar1 != 0) {
    uVar2 = (**(code **)(*piVar1 + 0x20))(piVar1,param_2);
    if (*(char *)(param_1 + 0x10) != '\x05') {
      *(char *)(param_1 + 0x10) = (char)param_2;
    }
    return uVar2;
  }
  return 0;
}


/* FUN_00484410 @ 00484410  kind=gamemisc  attributed-by=none  size=156 */

int __cdecl FUN_00484410(int param_1,uint *param_2,uint param_3,int param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint **ppuVar5;
  
  uVar3 = param_3;
  if (param_4 == 0) {
    iVar4 = 1;
  }
  else {
    iVar4 = 0;
    ppuVar5 = &param_2;
    puVar1 = param_2;
    while (puVar1 != (uint *)0x0) {
      if (puVar1[5] <= uVar3) {
        ppuVar5 = (uint **)(puVar1 + 3);
        iVar4 = iVar4 + 1;
      }
      puVar1 = (uint *)puVar1[3];
      *ppuVar5 = puVar1;
    }
  }
  puVar1 = param_2;
  *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + iVar4;
  if (param_2[5] == 1) {
    FUN_004856d0((int)param_2);
  }
  iVar4 = FUN_004ba7d0(*(int **)(param_1 + 0xb8),*(uint *)(param_1 + 0x80),puVar1,uVar3,param_4,
                       (uint)*(byte *)(param_1 + 10));
  if (iVar4 == 0) {
    puVar2 = *(uint **)(param_1 + 0x58);
    while (puVar2 != (uint *)0x0) {
      FUN_0048e040(*(int **)(param_1 + 0x58),(undefined4 *)puVar1[5],puVar1[1]);
      puVar1 = (uint *)puVar1[3];
      puVar2 = puVar1;
    }
  }
  return iVar4;
}


/* FUN_004844b0 @ 004844b0  kind=gamemisc  attributed-by=none  size=121 */

int __cdecl FUN_004844b0(int param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 0x80) + -200;
  iVar4 = 0;
  iVar5 = 0;
  if (0 < iVar2) {
    if (1 < (*(int *)(param_1 + 0x80) + -1) / 200) {
      do {
        iVar4 = iVar4 + (uint)*(byte *)(param_2 + iVar2);
        pbVar1 = (byte *)(param_2 + -200 + iVar2);
        iVar2 = iVar2 + -400;
        iVar5 = iVar5 + (uint)*pbVar1;
      } while (200 < iVar2);
    }
    if (0 < iVar2) {
      iVar3 = iVar3 + (uint)*(byte *)(iVar2 + param_2);
    }
    return iVar5 + iVar4 + iVar3;
  }
  return iVar3;
}


/* FUN_00484530 @ 00484530  kind=gamemisc  attributed-by=none  size=547 */

int __cdecl FUN_00484530(int *param_1,byte *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  size_t _Size;
  int *_Dst;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  char *pcVar7;
  byte *pbVar8;
  char *pcVar9;
  bool bVar10;
  uint local_20;
  int local_1c;
  uint local_18;
  int local_14;
  byte *local_10;
  char *local_c;
  int *local_8;
  
  iVar3 = *param_1;
  _Size = *(int *)(iVar3 + 4) * 2;
  local_c = (char *)0x0;
  _Dst = (int *)FUN_004a0350(_Size);
  if (_Dst != (int *)0x0) {
    memset(_Dst,0,_Size);
  }
  local_8 = (int *)(*(int *)(iVar3 + 4) + (int)_Dst);
  if (_Dst == (int *)0x0) {
    iVar4 = 7;
  }
  else {
    iVar4 = (**(code **)(iVar3 + 0x18))(iVar3,param_2,_Dst,0x4001,0);
    if ((iVar4 == 0) && (iVar4 = (**(code **)(*_Dst + 0x18))(_Dst,&local_20), iVar4 == 0)) {
      local_18 = *(int *)(iVar3 + 8) + 1;
      local_c = (char *)FUN_004a0350(local_20 + 1 + local_18);
      if (local_c == (char *)0x0) {
        iVar4 = 7;
      }
      else {
        local_10 = (byte *)(local_c + local_20 + 1);
        iVar4 = (**(code **)(*_Dst + 8))(_Dst,local_c,local_20,0,0);
        if (iVar4 == 0) {
          local_c[local_20] = '\0';
          if ((-1 < local_1c) && ((pcVar9 = local_c, 0 < local_1c || (local_20 != 0)))) {
            do {
              iVar4 = (**(code **)(iVar3 + 0x20))(iVar3,pcVar9,0,&local_14);
              if (iVar4 != 0) goto LAB_0048471d;
              if (local_14 != 0) {
                iVar4 = (**(code **)(iVar3 + 0x18))(iVar3,pcVar9,local_8,0x801,0);
                if (iVar4 != 0) goto LAB_0048471d;
                iVar4 = FUN_00487a00(local_8,local_10,local_18);
                if (*local_8 != 0) {
                  (**(code **)(*local_8 + 4))(local_8);
                  *local_8 = 0;
                }
                if (iVar4 != 0) goto LAB_0048471d;
                pbVar5 = local_10;
                pbVar8 = param_2;
                if (*local_10 != 0) {
                  do {
                    bVar1 = *pbVar5;
                    bVar10 = bVar1 < *pbVar8;
                    if (bVar1 != *pbVar8) {
LAB_004846c1:
                      uVar6 = -(uint)bVar10 | 1;
                      goto LAB_004846c6;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar5[1];
                    bVar10 = bVar1 < pbVar8[1];
                    if (bVar1 != pbVar8[1]) goto LAB_004846c1;
                    pbVar5 = pbVar5 + 2;
                    pbVar8 = pbVar8 + 2;
                  } while (bVar1 != 0);
                  uVar6 = 0;
LAB_004846c6:
                  if (uVar6 == 0) goto LAB_0048471d;
                }
              }
              uVar6 = 0;
              if (pcVar9 != (char *)0x0) {
                cVar2 = *pcVar9;
                pcVar7 = pcVar9;
                while (cVar2 != '\0') {
                  pcVar7 = pcVar7 + 1;
                  cVar2 = *pcVar7;
                }
                uVar6 = (int)pcVar7 - (int)pcVar9 & 0x3fffffff;
              }
              pcVar9 = pcVar9 + uVar6 + 1;
              iVar4 = (int)pcVar9 - (int)local_c >> 0x1f;
            } while ((iVar4 < local_1c) ||
                    ((iVar4 <= local_1c && ((uint)((int)pcVar9 - (int)local_c) < local_20))));
          }
          FUN_004a1250(_Dst);
          iVar4 = (**(code **)(iVar3 + 0x1c))(iVar3,param_2,0);
        }
      }
    }
  }
LAB_0048471d:
  FUN_00466dd0((int)local_c);
  if (_Dst != (int *)0x0) {
    if (*_Dst != 0) {
      (**(code **)(*_Dst + 4))(_Dst);
      *_Dst = 0;
    }
    FUN_00466dd0((int)_Dst);
  }
  return iVar4;
}


/* FUN_00484930 @ 00484930  kind=gamemisc  attributed-by=none  size=33 */

uint __cdecl FUN_00484930(int param_1,uint param_2)

{
  if (((param_2 & 0xff) == 0xd) || ((param_2 & 0xff) == 10)) {
    *(uint *)(param_1 + 0x28) = param_2;
    *(undefined1 *)(param_1 + 0xf) = 6;
  }
  return param_2;
}


/* FUN_00484960 @ 00484960  kind=gamemisc  attributed-by=none  size=373 */

uint __cdecl FUN_00484960(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar2 = param_1;
  if ((*(char *)((int)param_1 + 0x11) != '\0') || (param_1[6] == 0)) {
    return 0;
  }
  uVar4 = param_1[10];
  if (uVar4 == 0) {
    uVar4 = FUN_004a37e0((int *)param_1[0x2d],1,1,&param_1);
  }
  puVar5 = param_1;
  iVar3 = DAT_00582bb8;
  if (uVar4 == 0) {
    if (param_1[4] != 0) {
      puVar2[0x28] = puVar2[0x28] + 1;
      goto LAB_00484a78;
    }
    param_1[4] = (uint)puVar2;
    if (iVar3 / (int)puVar2[0x20] == 0) {
      FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
      uVar4 = 0xb;
    }
    else if (((*(char *)((int)puVar2 + 0xe) == '\0') && (puVar2[6] != 0)) &&
            (*(int *)puVar2[0xf] != 0)) {
      puVar2[0x29] = puVar2[0x29] + 1;
      uVar4 = FUN_004876e0((int)param_1);
      if (uVar4 == 0) goto LAB_00484a78;
    }
    else {
      if (puVar2[0x21] != 0) {
        memset((void *)param_1[1],0,puVar2[0x20]);
        goto LAB_00484a78;
      }
      uVar4 = 0xd;
    }
    if ((puVar5[6] & 2) != 0) {
      FUN_00486ed0((int)puVar5);
    }
    uVar1 = puVar5[7];
    *(int *)(uVar1 + 0xc) = *(int *)(uVar1 + 0xc) + -1;
    if (puVar5[5] == 1) {
      *(undefined4 *)(uVar1 + 0x2c) = 0;
    }
    (*DAT_00582b4c)(*(undefined4 *)(uVar1 + 0x28),*puVar5,1);
  }
  if (*(int *)(puVar2[0x2d] + 0xc) == 0) {
    FUN_00484370(puVar2);
  }
  puVar5 = (uint *)0x0;
  if (uVar4 != 0) {
    return uVar4;
  }
LAB_00484a78:
  uVar4 = FUN_004a2c80(puVar5);
  if (uVar4 == 0) {
    FUN_004856d0((int)puVar5);
    *(undefined1 *)((int)puVar2 + 0x11) = 1;
  }
  if (puVar5 != (uint *)0x0) {
    puVar2 = (uint *)puVar5[4];
    FUN_004a3a80(puVar5);
    if (*(int *)(puVar2[0x2d] + 0xc) == 0) {
      FUN_00484370(puVar2);
    }
  }
  return uVar4;
}


/* FUN_00484ae0 @ 00484ae0  kind=gamemisc  attributed-by=none  size=37 */

undefined4 __cdecl FUN_00484ae0(int param_1,int param_2)

{
  undefined4 local_8;
  
  FUN_004a37e0(*(int **)(param_1 + 0xb4),param_2,0,&local_8);
  return local_8;
}


/* FUN_00484b10 @ 00484b10  kind=gamemisc  attributed-by=none  size=272 */

int __cdecl FUN_00484b10(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *param_1;
  iVar4 = param_1[10];
  if (iVar4 == 0) {
    if ((param_1[0x2e] == 0) && (*(char *)((int)param_1 + 5) != '\x02')) {
      iVar4 = param_1[6];
      piVar1 = (int *)FUN_004a0350(0x200);
      if (piVar1 != (int *)0x0) {
        memset(piVar1,0,0x200);
        *piVar1 = iVar4;
      }
      param_1[0xe] = (int)piVar1;
      if (piVar1 == (int *)0x0) {
        return 7;
      }
      piVar1 = (int *)param_1[0x10];
      if (*piVar1 == 0) {
        if (*(char *)((int)param_1 + 5) == '\x04') {
          FUN_004a0960((undefined8 *)piVar1);
        }
        else {
          uVar2 = 0x800;
          if ((char)param_1[3] != '\0') {
            uVar2 = 0x1008;
          }
          iVar3 = (**(code **)(iVar3 + 0x18))(iVar3,param_1[0x25],piVar1,uVar2 | 6,0);
          if (iVar3 != 0) goto LAB_00484bfe;
        }
      }
      param_1[0xb] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      *(undefined1 *)((int)param_1 + 0x12) = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      iVar3 = FUN_004c29f0((uint)param_1);
      if (iVar3 != 0) {
LAB_00484bfe:
        FUN_0048e9a0(param_1[0xe]);
        param_1[0xe] = 0;
        return iVar3;
      }
    }
    iVar4 = 0;
    *(undefined1 *)((int)param_1 + 0xf) = 3;
  }
  return iVar4;
}


/* FUN_00485250 @ 00485250  kind=gamemisc  attributed-by=none  size=48 */

void __cdecl FUN_00485250(int param_1)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 0x58); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x2c)) {
    *(undefined4 *)(iVar1 + 0x10) = 1;
  }
  FUN_004a3b00(*(undefined4 **)(param_1 + 0xb4),0);
  return;
}


/* FUN_004854a0 @ 004854a0  kind=gamemisc  attributed-by=none  size=113 */

int __cdecl FUN_004854a0(int param_1,int param_2)

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


/* FUN_00485520 @ 00485520  kind=gamemisc  attributed-by=none  size=425 */

uint __cdecl FUN_00485520(int param_1)

{
  int *piVar1;
  uint *puVar2;
  bool bVar3;
  uint uVar4;
  undefined3 extraout_var;
  int iVar5;
  undefined3 extraout_var_00;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  iVar9 = *(int *)(param_1 + 4);
  piVar1 = *(int **)(param_1 + 0x10);
  uVar4 = piVar1[10];
  if (uVar4 == 0) {
    if (*(char *)((int)piVar1 + 0xd) != '\0') {
      return 3;
    }
    uVar4 = 0;
    if ((*(char *)((int)piVar1 + 0xf) != '\x02') || (uVar4 = FUN_00484b10(piVar1), uVar4 == 0)) {
      FUN_004a39a0(param_1);
      puVar2 = *(uint **)(*(int *)(param_1 + 0x10) + 0x38);
      bVar3 = FUN_0048ec40(puVar2,*(uint *)(param_1 + 0x14));
      if ((CONCAT31(extraout_var,bVar3) == 0) || (iVar5 = FUN_004bd250(param_1), iVar5 != 0)) {
        bVar3 = FUN_0048ec40(puVar2,*(uint *)(param_1 + 0x14));
        if ((CONCAT31(extraout_var_00,bVar3) == 0) && (piVar1[0x2e] == 0)) {
          if (((uint)piVar1[7] < *(uint *)(param_1 + 0x14)) || (*(int *)piVar1[0x10] == 0)) {
            if (*(char *)((int)piVar1 + 0xf) != '\x04') {
              *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) | 4;
            }
          }
          else {
            iVar5 = piVar1[0x13];
            uVar4 = piVar1[0x12];
            iVar6 = FUN_004844b0((int)piVar1,iVar9);
            *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) | 4;
            uVar7 = FUN_004c29b0((int *)piVar1[0x10],uVar4,iVar5,*(undefined4 *)(param_1 + 0x14));
            if (uVar7 != 0) {
              return uVar7;
            }
            uVar7 = FUN_004a1390((int *)piVar1[0x10],iVar9,piVar1[0x20],uVar4 + 4,
                                 iVar5 + (uint)(0xfffffffb < uVar4));
            if (uVar7 != 0) {
              return uVar7;
            }
            uVar7 = piVar1[0x20];
            uVar4 = FUN_004c29b0((int *)piVar1[0x10],uVar7 + uVar4 + 4,
                                 ((int)uVar7 >> 0x1f) + iVar5 + (uint)CARRY4(uVar7,uVar4) +
                                 (uint)(0xfffffffb < uVar7 + uVar4),iVar6);
            if (uVar4 != 0) {
              return uVar4;
            }
            uVar7 = piVar1[0x20] + 8;
            puVar2 = (uint *)(piVar1 + 0x12);
            uVar4 = *puVar2;
            *puVar2 = *puVar2 + uVar7;
            piVar1[0x13] = piVar1[0x13] + ((int)uVar7 >> 0x1f) + (uint)CARRY4(uVar4,uVar7);
            piVar1[0xb] = piVar1[0xb] + 1;
            uVar7 = FUN_0048ea60((uint *)piVar1[0xe],*(uint *)(param_1 + 0x14));
            uVar8 = FUN_0046b780((int)piVar1,*(uint *)(param_1 + 0x14));
            uVar4 = 0;
            if ((uVar7 | uVar8) != 0) {
              return uVar7 | uVar8;
            }
          }
        }
        iVar9 = FUN_004bd250(param_1);
        if (iVar9 != 0) {
          uVar4 = FUN_004bd350(param_1);
        }
      }
      if ((uint)piVar1[6] < *(uint *)(param_1 + 0x14)) {
        piVar1[6] = *(uint *)(param_1 + 0x14);
      }
    }
  }
  return uVar4;
}


/* FUN_004856d0 @ 004856d0  kind=gamemisc  attributed-by=none  size=119 */

void __cdecl FUN_004856d0(int param_1)

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


/* FUN_00485750 @ 00485750  kind=gamemisc  attributed-by=none  size=311 */

int __cdecl FUN_00485750(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
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
      puVar1 = *(undefined4 **)(param_2 + 0x14);
      if ((puVar1 <= (undefined4 *)param_1[6]) && ((*(byte *)(param_2 + 0x18) & 0x20) == 0)) {
        lVar3 = __allmul((int)puVar1 - 1,0,param_1[0x20],param_1[0x20] >> 0x1f);
        local_8 = (int)lVar3;
        if (puVar1 == (undefined4 *)0x1) {
          FUN_004856d0(param_2);
        }
        local_10 = CONCAT44(*(undefined4 *)(param_2 + 4),(undefined4)local_10);
        local_8 = (**(code **)(*(int *)param_1[0xf] + 0xc))
                            ((int *)param_1[0xf],*(undefined4 *)(param_2 + 4),param_1[0x20],local_8,
                             (int)((ulonglong)lVar3 >> 0x20));
        if (puVar1 == (undefined4 *)0x1) {
          *(undefined8 *)(param_1 + 0x19) = *(undefined8 *)(local_10._4_4_ + 0x18);
          *(undefined8 *)(param_1 + 0x1b) = *(undefined8 *)(local_10._4_4_ + 0x20);
        }
        if ((undefined4 *)param_1[8] < puVar1) {
          param_1[8] = (int)puVar1;
        }
        param_1[0x2a] = param_1[0x2a] + 1;
        FUN_0048e040((int *)param_1[0x16],puVar1,*(int *)(param_2 + 4));
      }
      param_2 = *(int *)(param_2 + 0xc);
      iVar2 = 0;
    } while (local_8 == 0);
  }
  return local_8;
}


/* FUN_00485890 @ 00485890  kind=gamemisc  attributed-by=none  size=192 */

undefined4 __cdecl FUN_00485890(int param_1,byte *param_2,ulonglong *param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  uint uVar5;
  ulonglong uVar6;
  double local_c;
  
  iVar2 = FUN_00486460(param_2,param_3);
  if ((iVar2 != 0) && (iVar2 = FUN_00485950(param_2,(int)param_3), iVar2 != 0)) {
    iVar2 = FUN_004bcc60(param_2,&DAT_0056dc7c);
    if (iVar2 == 0) {
      uVar3 = FUN_0048b480(param_1,param_3);
      return uVar3;
    }
    uVar5 = 0;
    if (param_2 != (byte *)0x0) {
      bVar1 = *param_2;
      pbVar4 = param_2;
      while (bVar1 != 0) {
        pbVar4 = pbVar4 + 1;
        bVar1 = *pbVar4;
      }
      uVar5 = (int)pbVar4 - (int)param_2 & 0x3fffffff;
    }
    iVar2 = FUN_0048cc90(param_2,&local_c,uVar5,'\x01');
    if (iVar2 == 0) {
      return 1;
    }
    local_c = local_c * 86400000.0 + 0.5;
    uVar6 = FUN_0054a946();
    *param_3 = uVar6;
    *(undefined1 *)((int)param_3 + 0x2a) = 1;
  }
  return 0;
}


/* FUN_00485950 @ 00485950  kind=gamemisc  attributed-by=none  size=303 */

undefined4 __cdecl FUN_00485950(byte *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined3 extraout_var;
  byte *pbVar5;
  double dVar6;
  double dVar7;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  dVar6 = 0.0;
  iVar4 = FUN_0047d1b0(param_1);
  if (iVar4 != 2) {
    return 1;
  }
  pbVar5 = param_1 + 5;
  if (*pbVar5 == 0x3a) {
    iVar4 = FUN_0047d1b0(param_1 + 6);
    if (iVar4 != 1) {
      return 1;
    }
    pbVar5 = param_1 + 8;
    if ((*pbVar5 == 0x2e) && (((&DAT_00569720)[param_1[9]] & 4) != 0)) {
      dVar7 = 1.0;
      bVar1 = param_1[9];
      bVar2 = (&DAT_00569720)[bVar1];
      pbVar5 = param_1 + 9;
      while ((bVar2 & 4) != 0) {
        iVar4 = (int)(char)bVar1;
        bVar1 = pbVar5[1];
        pbVar5 = pbVar5 + 1;
        dVar7 = dVar7 * 10.0;
        dVar6 = (dVar6 * 10.0 + (double)iVar4) - 48.0;
        bVar2 = (&DAT_00569720)[bVar1];
      }
      dVar6 = dVar6 / dVar7;
    }
  }
  else {
    local_8 = 0;
  }
  *(undefined4 *)(param_2 + 0x14) = local_c;
  *(undefined2 *)(param_2 + 0x29) = 1;
  *(undefined4 *)(param_2 + 0x18) = local_10;
  *(double *)(param_2 + 0x20) = (double)local_8 + dVar6;
  bVar3 = FUN_00486380(pbVar5,param_2);
  if (CONCAT31(extraout_var,bVar3) == 0) {
    *(bool *)(param_2 + 0x2b) = *(int *)(param_2 + 0x1c) != 0;
    return 0;
  }
  return 1;
}


/* FUN_00485a80 @ 00485a80  kind=gamemisc  attributed-by=none  size=1322 */

/* WARNING: Removing unreachable block (ram,0x00485d42) */

void __cdecl FUN_00485a80(int param_1,byte *param_2,ulonglong *param_3)

{
  byte bVar1;
  ulonglong uVar2;
  int iVar3;
  byte *pbVar4;
  char *pcVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  double dVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint local_6c;
  int local_68;
  undefined4 local_3c;
  int iStack_38;
  double local_34;
  int local_2c;
  byte local_28 [32];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  iVar8 = 0;
  iStack_38 = param_1;
  local_2c = 1;
  iVar3 = -(int)param_2;
  do {
    if (*param_2 == 0) break;
    iVar8 = iVar8 + 1;
    param_2[(int)(local_28 + iVar3)] = (&DAT_00569620)[*param_2];
    param_2 = param_2 + 1;
  } while (iVar8 < 0x1d);
  local_28[iVar8] = 0;
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
    uVar9 = 1;
    while (((local_28[1] != 0 && (local_28[1] != 0x3a)) && (((&DAT_00569720)[local_28[1]] & 1) == 0)
           )) {
      local_28[1] = local_28[uVar9 + 1];
      uVar9 = uVar9 + 1;
    }
    iVar3 = FUN_0048cc90(local_28,(double *)&local_3c,uVar9,'\x01');
    if (iVar3 != 0) {
      pbVar4 = local_28 + uVar9;
      if (local_28[uVar9] == 0x3a) {
        pbVar4 = local_28 + 1;
        if (((&DAT_00569720)[local_28[0]] & 4) != 0) {
          pbVar4 = local_28;
        }
        memset(&local_6c,0,0x30);
        iVar3 = FUN_00485950(pbVar4,(int)&local_6c);
        if (iVar3 == 0) {
          FUN_004753b0((ulonglong *)&local_6c);
          uVar9 = local_68 + -1 + (uint)(43199999 < local_6c);
          uVar13 = __alldiv(local_6c + 0xfd6cd200,uVar9,0xfad9a400,0xffffffff);
          lVar14 = __allmul((uint)uVar13,(int)((ulonglong)uVar13 >> 0x20),86400000,0);
          lVar14 = lVar14 + CONCAT44(uVar9,local_6c + 0xfd6cd200);
          if (local_28[0] == 0x2d) {
            lVar14 = CONCAT44(-((int)((ulonglong)lVar14 >> 0x20) + (uint)((int)lVar14 != 0)),
                              -(int)lVar14);
          }
          FUN_004753b0(param_3);
          uVar2 = *param_3;
          *(uint *)param_3 = (int)*param_3 + (uint)lVar14;
          *(undefined2 *)(param_3 + 5) = 0;
          *(undefined1 *)((int)param_3 + 0x2b) = 0;
          *(int *)((int)param_3 + 4) =
               *(int *)((int)param_3 + 4) + (int)((ulonglong)lVar14 >> 0x20) +
               (uint)CARRY4((uint)uVar2,(uint)lVar14);
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
      }
      else {
        bVar1 = (&DAT_00569720)[*pbVar4];
        while ((bVar1 & 1) != 0) {
          pbVar6 = pbVar4 + 1;
          pbVar4 = pbVar4 + 1;
          bVar1 = (&DAT_00569720)[*pbVar6];
        }
        bVar1 = *pbVar4;
        pbVar6 = pbVar4;
        while (bVar1 != 0) {
          pbVar6 = pbVar6 + 1;
          bVar1 = *pbVar6;
        }
        uVar9 = (int)pbVar6 - (int)pbVar4 & 0x3fffffff;
        if (uVar9 - 3 < 8) {
          if (pbVar4[uVar9 - 1] == 0x73) {
            pbVar4[uVar9 - 1] = 0;
            uVar9 = uVar9 - 1;
          }
          FUN_004753b0(param_3);
          dVar11 = (double)CONCAT44(iStack_38,local_3c);
          local_2c = 0;
          if (0.0 <= dVar11) {
            local_34 = 0.5;
          }
          else {
            local_34 = -0.5;
          }
          if (uVar9 == 3) {
            pbVar6 = &DAT_0056dcdc;
            do {
              bVar1 = *pbVar4;
              bVar10 = bVar1 < *pbVar6;
              if (bVar1 != *pbVar6) {
LAB_00486050:
                uVar9 = -(uint)bVar10 | 1;
                goto LAB_00486055;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar4[1];
              bVar10 = bVar1 < pbVar6[1];
              if (bVar1 != pbVar6[1]) goto LAB_00486050;
              pbVar4 = pbVar4 + 2;
              pbVar6 = pbVar6 + 2;
            } while (bVar1 != 0);
            uVar9 = 0;
LAB_00486055:
            if (uVar9 != 0) goto LAB_0048607e;
            local_34 = dVar11 * 86400000.0 + local_34;
          }
          else if (uVar9 == 4) {
            pbVar7 = &DAT_0056dce0;
            pbVar6 = pbVar4;
            do {
              bVar1 = *pbVar6;
              bVar10 = bVar1 < *pbVar7;
              if (bVar1 != *pbVar7) {
LAB_004860d0:
                uVar9 = -(uint)bVar10 | 1;
                goto LAB_004860d5;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar6[1];
              bVar10 = bVar1 < pbVar7[1];
              if (bVar1 != pbVar7[1]) goto LAB_004860d0;
              pbVar6 = pbVar6 + 2;
              pbVar7 = pbVar7 + 2;
            } while (bVar1 != 0);
            uVar9 = 0;
LAB_004860d5:
            if (uVar9 == 0) {
              local_34 = dVar11 * 3600000.0 + local_34;
            }
            else {
              pbVar6 = &DAT_0056dcd4;
              do {
                bVar1 = *pbVar4;
                bVar10 = bVar1 < *pbVar6;
                if (bVar1 != *pbVar6) {
LAB_00486114:
                  uVar9 = -(uint)bVar10 | 1;
                  goto LAB_00486119;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar4[1];
                bVar10 = bVar1 < pbVar6[1];
                if (bVar1 != pbVar6[1]) goto LAB_00486114;
                pbVar4 = pbVar4 + 2;
                pbVar6 = pbVar6 + 2;
              } while (bVar1 != 0);
              uVar9 = 0;
LAB_00486119:
              if (uVar9 != 0) goto LAB_0048607e;
              FUN_00475680((uint *)param_3);
              FUN_004752f0(param_3);
              *(int *)(param_3 + 1) = (int)param_3[1] + (int)dVar11;
              *(undefined1 *)((int)param_3 + 0x2a) = 0;
              FUN_004753b0(param_3);
              dVar11 = (double)(int)dVar11;
              if (dVar11 == (double)CONCAT44(iStack_38,local_3c)) goto LAB_0048607e;
              local_34 = ((double)CONCAT44(iStack_38,local_3c) - dVar11) * 365.0 * 86400000.0 +
                         local_34;
            }
          }
          else if (uVar9 == 6) {
            pcVar5 = "minute";
            pbVar6 = pbVar4;
            do {
              bVar1 = *pbVar6;
              bVar10 = bVar1 < (byte)*pcVar5;
              if (bVar1 != *pcVar5) {
LAB_004861b2:
                uVar9 = -(uint)bVar10 | 1;
                goto LAB_004861b7;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar6[1];
              bVar10 = bVar1 < (byte)pcVar5[1];
              if (bVar1 != pcVar5[1]) goto LAB_004861b2;
              pbVar6 = pbVar6 + 2;
              pcVar5 = pcVar5 + 2;
            } while (bVar1 != 0);
            uVar9 = 0;
LAB_004861b7:
            if (uVar9 == 0) {
              local_34 = dVar11 * 60000.0 + local_34;
            }
            else {
              pcVar5 = "second";
              do {
                bVar1 = *pbVar4;
                bVar10 = bVar1 < (byte)*pcVar5;
                if (bVar1 != *pcVar5) {
LAB_00486200:
                  uVar9 = -(uint)bVar10 | 1;
                  goto LAB_00486205;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar4[1];
                bVar10 = bVar1 < (byte)pcVar5[1];
                if (bVar1 != pcVar5[1]) goto LAB_00486200;
                pbVar4 = pbVar4 + 2;
                pcVar5 = pcVar5 + 2;
              } while (bVar1 != 0);
              uVar9 = 0;
LAB_00486205:
              if (uVar9 != 0) goto LAB_0048607e;
              local_34 = dVar11 * 1000.0 + local_34;
            }
          }
          else {
            if (uVar9 != 5) goto LAB_0048607e;
            pcVar5 = "month";
            do {
              bVar1 = *pbVar4;
              bVar10 = bVar1 < (byte)*pcVar5;
              if (bVar1 != *pcVar5) {
LAB_00486254:
                uVar9 = -(uint)bVar10 | 1;
                goto LAB_00486259;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar4[1];
              bVar10 = bVar1 < (byte)pcVar5[1];
              if (bVar1 != pcVar5[1]) goto LAB_00486254;
              pbVar4 = pbVar4 + 2;
              pcVar5 = pcVar5 + 2;
            } while (bVar1 != 0);
            uVar9 = 0;
LAB_00486259:
            if (uVar9 != 0) goto LAB_0048607e;
            FUN_00475680((uint *)param_3);
            FUN_004752f0(param_3);
            dVar11 = (double)CONCAT44(iStack_38,local_3c);
            *(int *)((int)param_3 + 0xc) = *(int *)((int)param_3 + 0xc) + (int)dVar11;
            iVar8 = *(int *)((int)param_3 + 0xc);
            iVar3 = iVar8 + -1;
            if (iVar8 < 1) {
              iVar3 = iVar8 + -0xc;
            }
            *(int *)(param_3 + 1) = (int)param_3[1] + iVar3 / 0xc;
            *(int *)((int)param_3 + 0xc) = iVar8 + (iVar3 / 0xc) * -0xc;
            *(undefined1 *)((int)param_3 + 0x2a) = 0;
            FUN_004753b0(param_3);
            dVar11 = (double)(int)dVar11;
            if (dVar11 == (double)CONCAT44(iStack_38,local_3c)) goto LAB_0048607e;
            local_34 = ((double)CONCAT44(iStack_38,local_3c) - dVar11) * 30.0 * 86400000.0 +
                       local_34;
          }
          uVar15 = FUN_0054a946();
          uVar2 = *param_3;
          *(uint *)param_3 = (int)*param_3 + (uint)uVar15;
          *(int *)((int)param_3 + 4) =
               *(int *)((int)param_3 + 4) + (int)(uVar15 >> 0x20) +
               (uint)CARRY4((uint)uVar2,(uint)uVar15);
LAB_0048607e:
          *(undefined2 *)(param_3 + 5) = 0;
          *(undefined1 *)((int)param_3 + 0x2b) = 0;
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
      }
    }
    break;
  case 0x6c:
    pcVar5 = "localtime";
    pbVar4 = local_28;
    do {
      bVar1 = *pbVar4;
      bVar10 = bVar1 < (byte)*pcVar5;
      if (bVar1 != *pcVar5) {
LAB_00485b14:
        uVar9 = -(uint)bVar10 | 1;
        goto LAB_00485b19;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar10 = bVar1 < (byte)pcVar5[1];
      if (bVar1 != pcVar5[1]) goto LAB_00485b14;
      pbVar4 = pbVar4 + 2;
      pcVar5 = pcVar5 + 2;
    } while (bVar1 != 0);
    uVar9 = 0;
LAB_00485b19:
    if (uVar9 == 0) {
      FUN_004753b0(param_3);
      uVar13 = FUN_0047f780(param_3,param_1,&local_2c);
      uVar2 = *param_3;
      *(uint *)param_3 = (int)*param_3 + (uint)uVar13;
      *(undefined2 *)(param_3 + 5) = 0;
      *(int *)((int)param_3 + 4) =
           *(int *)((int)param_3 + 4) + (int)((ulonglong)uVar13 >> 0x20) +
           (uint)CARRY4((uint)uVar2,(uint)uVar13);
      *(undefined1 *)((int)param_3 + 0x2b) = 0;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    break;
  case 0x73:
    iVar3 = strncmp((char *)local_28,"start of ",9);
    if (iVar3 == 0) {
      FUN_00475680((uint *)param_3);
      *(undefined2 *)((int)param_3 + 0x29) = 1;
      *(undefined4 *)(param_3 + 3) = 0;
      *(undefined4 *)((int)param_3 + 0x14) = 0;
      param_3[4] = 0;
      *(undefined1 *)((int)param_3 + 0x2b) = 0;
      pcVar5 = "month";
      pbVar4 = local_28 + 9;
      do {
        bVar1 = *pbVar4;
        bVar10 = bVar1 < (byte)*pcVar5;
        if (bVar1 != *pcVar5) {
LAB_00485df0:
          uVar9 = -(uint)bVar10 | 1;
          goto LAB_00485df5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar10 = bVar1 < (byte)pcVar5[1];
        if (bVar1 != pcVar5[1]) goto LAB_00485df0;
        pbVar4 = pbVar4 + 2;
        pcVar5 = pcVar5 + 2;
      } while (bVar1 != 0);
      uVar9 = 0;
LAB_00485df5:
      if (uVar9 == 0) {
LAB_00485e3a:
        *(undefined4 *)(param_3 + 2) = 1;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      pbVar6 = &DAT_0056dcd4;
      pbVar4 = local_28 + 9;
      do {
        bVar1 = *pbVar4;
        bVar10 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_00485e21:
          uVar9 = -(uint)bVar10 | 1;
          goto LAB_00485e26;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar10 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00485e21;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      uVar9 = 0;
LAB_00485e26:
      if (uVar9 == 0) {
        FUN_00475680((uint *)param_3);
        *(undefined4 *)((int)param_3 + 0xc) = 1;
        goto LAB_00485e3a;
      }
      pbVar6 = &DAT_0056dcdc;
      pbVar4 = local_28 + 9;
      do {
        bVar1 = *pbVar4;
        bVar10 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_00485e80:
          uVar9 = -(uint)bVar10 | 1;
          goto LAB_00485e85;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar10 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00485e80;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      uVar9 = 0;
LAB_00485e85:
      if (uVar9 == 0) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
    break;
  case 0x75:
    pcVar5 = "unixepoch";
    pbVar4 = local_28;
    do {
      bVar1 = *pbVar4;
      bVar10 = bVar1 < (byte)*pcVar5;
      if (bVar1 != *pcVar5) {
LAB_00485b80:
        uVar9 = -(uint)bVar10 | 1;
        goto LAB_00485b85;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar10 = bVar1 < (byte)pcVar5[1];
      if (bVar1 != pcVar5[1]) goto LAB_00485b80;
      pbVar4 = pbVar4 + 2;
      pcVar5 = pcVar5 + 2;
    } while (bVar1 != 0);
    uVar9 = 0;
LAB_00485b85:
    if ((uVar9 == 0) && (*(char *)((int)param_3 + 0x2a) != '\0')) {
      lVar14 = __alldiv((uint)*param_3 + 0xa8c0,
                        *(int *)((int)param_3 + 4) + (uint)(0xffff573f < (uint)*param_3),0x15180,0);
      *param_3 = lVar14 + 0xbfc83e532200;
      *(undefined2 *)(param_3 + 5) = 0;
      *(undefined1 *)((int)param_3 + 0x2b) = 0;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    pbVar6 = &DAT_0056dcb0;
    pbVar4 = local_28;
    do {
      bVar1 = *pbVar4;
      bVar10 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_00485c00:
        uVar9 = -(uint)bVar10 | 1;
        goto LAB_00485c05;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar10 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_00485c00;
      pbVar4 = pbVar4 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    uVar9 = 0;
LAB_00485c05:
    if (uVar9 == 0) {
      FUN_004753b0(param_3);
      lVar14 = FUN_0047f780(param_3,param_1,&local_2c);
      if (local_2c == 0) {
        uVar2 = *param_3;
        *(uint *)param_3 = (int)*param_3 - (uint)lVar14;
        *(undefined2 *)(param_3 + 5) = 0;
        *(undefined1 *)((int)param_3 + 0x2b) = 0;
        *(int *)((int)param_3 + 4) =
             (*(int *)((int)param_3 + 4) - (int)((ulonglong)lVar14 >> 0x20)) -
             (uint)((uint)uVar2 < (uint)lVar14);
        lVar12 = FUN_0047f780(param_3,iStack_38,&local_2c);
        uVar9 = (uint)(lVar14 - lVar12);
        uVar2 = *param_3;
        *(uint *)param_3 = (int)*param_3 + uVar9;
        *(int *)((int)param_3 + 4) =
             *(int *)((int)param_3 + 4) + (int)((ulonglong)(lVar14 - lVar12) >> 0x20) +
             (uint)CARRY4((uint)uVar2,uVar9);
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      goto LAB_00486300;
    }
    break;
  case 0x77:
    iVar3 = strncmp((char *)local_28,"weekday ",8);
    if (iVar3 == 0) {
      pbVar4 = local_28 + 8;
      while (local_28[8] != 0) {
        pbVar4 = pbVar4 + 1;
        local_28[8] = *pbVar4;
      }
      iVar3 = FUN_0048cc90(local_28 + 8,(double *)&local_3c,
                           (int)pbVar4 - (int)(local_28 + 8) & 0x3fffffff,'\x01');
      if (iVar3 != 0) {
        dVar11 = (double)CONCAT44(iStack_38,local_3c);
        uVar9 = (uint)dVar11;
        if ((((double)(int)uVar9 == dVar11) && (-1 < (int)uVar9)) && (dVar11 < 7.0)) {
          FUN_00475680((uint *)param_3);
          FUN_004752f0(param_3);
          *(undefined2 *)((int)param_3 + 0x2a) = 0;
          FUN_004753b0(param_3);
          uVar13 = __alldiv((uint)*param_3 + 0x7b98a00,
                            *(int *)((int)param_3 + 4) + (uint)(0xf84675ff < (uint)*param_3),
                            86400000,0);
          lVar14 = __allrem((uint)uVar13,(uint)((ulonglong)uVar13 >> 0x20),7,0);
          if ((int)uVar9 < lVar14) {
            lVar14 = lVar14 + -7;
          }
          lVar14 = __allmul(uVar9 - (uint)lVar14,
                            (((int)uVar9 >> 0x1f) - (int)((ulonglong)lVar14 >> 0x20)) -
                            (uint)(uVar9 < (uint)lVar14),86400000,0);
          uVar2 = *param_3;
          *(uint *)param_3 = (int)*param_3 + (uint)lVar14;
          *(undefined2 *)(param_3 + 5) = 0;
          *(undefined1 *)((int)param_3 + 0x2b) = 0;
          *(uint *)((int)param_3 + 4) =
               (int)((ulonglong)lVar14 >> 0x20) + *(int *)((int)param_3 + 4) +
               (uint)CARRY4((uint)uVar2,(uint)lVar14);
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
      }
    }
  }
LAB_00486300:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00485faa @ 00485faa  kind=gamemisc  attributed-by=none  size=868 */

void FUN_00485faa(void)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  byte *pbVar4;
  char *pcVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  uint unaff_EBP;
  byte *unaff_ESI;
  ulonglong *unaff_EDI;
  bool bVar9;
  double dVar10;
  double dVar11;
  ulonglong uVar12;
  undefined4 uStack00000008;
  
  do {
    pbVar7 = unaff_ESI + 1;
    unaff_ESI = unaff_ESI + 1;
  } while (((&DAT_00569720)[*pbVar7] & 1) != 0);
  bVar1 = *unaff_ESI;
  pbVar7 = unaff_ESI;
  while (bVar1 != 0) {
    pbVar7 = pbVar7 + 1;
    bVar1 = *pbVar7;
  }
  uVar8 = (int)pbVar7 - (int)unaff_ESI & 0x3fffffff;
  if (7 < uVar8 - 3) {
    uStack00000008 = 0x48630d;
    __security_check_cookie(*(uint *)(unaff_EBP - 4) ^ unaff_EBP);
    return;
  }
  if (unaff_ESI[uVar8 - 1] == 0x73) {
    unaff_ESI[uVar8 - 1] = 0;
    uVar8 = uVar8 - 1;
  }
  FUN_004753b0(unaff_EDI);
  dVar11 = *(double *)(unaff_EBP - 0x38);
  *(undefined4 *)(unaff_EBP - 0x28) = 0;
  if (0.0 <= dVar11) {
    dVar10 = 0.5;
  }
  else {
    dVar10 = -0.5;
  }
  *(double *)(unaff_EBP - 0x30) = dVar10;
  if (uVar8 == 3) {
    pbVar7 = &DAT_0056dcdc;
    do {
      bVar1 = *unaff_ESI;
      bVar9 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_00486050:
        uVar8 = -(uint)bVar9 | 1;
        goto LAB_00486055;
      }
      if (bVar1 == 0) break;
      bVar1 = unaff_ESI[1];
      bVar9 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_00486050;
      unaff_ESI = unaff_ESI + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar1 != 0);
    uVar8 = 0;
LAB_00486055:
    if (uVar8 != 0) goto LAB_0048607e;
    *(double *)(unaff_EBP - 0x30) = dVar11 * 86400000.0 + dVar10;
  }
  else if (uVar8 == 4) {
    pbVar4 = &DAT_0056dce0;
    pbVar7 = unaff_ESI;
    do {
      bVar1 = *pbVar7;
      bVar9 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_004860d0:
        uVar8 = -(uint)bVar9 | 1;
        goto LAB_004860d5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar7[1];
      bVar9 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_004860d0;
      pbVar7 = pbVar7 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    uVar8 = 0;
LAB_004860d5:
    if (uVar8 == 0) {
      *(double *)(unaff_EBP - 0x30) = dVar11 * 3600000.0 + dVar10;
    }
    else {
      pbVar7 = &DAT_0056dcd4;
      do {
        bVar1 = *unaff_ESI;
        bVar9 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_00486114:
          uVar8 = -(uint)bVar9 | 1;
          goto LAB_00486119;
        }
        if (bVar1 == 0) break;
        bVar1 = unaff_ESI[1];
        bVar9 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_00486114;
        unaff_ESI = unaff_ESI + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      uVar8 = 0;
LAB_00486119:
      if (uVar8 != 0) goto LAB_0048607e;
      FUN_00475680((uint *)unaff_EDI);
      FUN_004752f0(unaff_EDI);
      *(int *)(unaff_EDI + 1) = (int)unaff_EDI[1] + (int)dVar11;
      *(undefined1 *)((int)unaff_EDI + 0x2a) = 0;
      FUN_004753b0(unaff_EDI);
      dVar11 = (double)(int)dVar11;
      if (dVar11 == *(double *)(unaff_EBP - 0x38)) goto LAB_0048607e;
      *(double *)(unaff_EBP - 0x30) =
           (*(double *)(unaff_EBP - 0x38) - dVar11) * 365.0 * 86400000.0 +
           *(double *)(unaff_EBP - 0x30);
    }
  }
  else if (uVar8 == 6) {
    pcVar5 = "minute";
    pbVar7 = unaff_ESI;
    do {
      bVar1 = *pbVar7;
      bVar9 = bVar1 < (byte)*pcVar5;
      if (bVar1 != *pcVar5) {
LAB_004861b2:
        uVar8 = -(uint)bVar9 | 1;
        goto LAB_004861b7;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar7[1];
      bVar9 = bVar1 < (byte)pcVar5[1];
      if (bVar1 != pcVar5[1]) goto LAB_004861b2;
      pbVar7 = pbVar7 + 2;
      pcVar5 = pcVar5 + 2;
    } while (bVar1 != 0);
    uVar8 = 0;
LAB_004861b7:
    if (uVar8 == 0) {
      *(double *)(unaff_EBP - 0x30) = dVar11 * 60000.0 + dVar10;
    }
    else {
      pcVar5 = "second";
      do {
        bVar1 = *unaff_ESI;
        bVar9 = bVar1 < (byte)*pcVar5;
        if (bVar1 != *pcVar5) {
LAB_00486200:
          uVar8 = -(uint)bVar9 | 1;
          goto LAB_00486205;
        }
        if (bVar1 == 0) break;
        bVar1 = unaff_ESI[1];
        bVar9 = bVar1 < (byte)pcVar5[1];
        if (bVar1 != pcVar5[1]) goto LAB_00486200;
        unaff_ESI = unaff_ESI + 2;
        pcVar5 = pcVar5 + 2;
      } while (bVar1 != 0);
      uVar8 = 0;
LAB_00486205:
      if (uVar8 != 0) goto LAB_0048607e;
      *(double *)(unaff_EBP - 0x30) = dVar11 * 1000.0 + dVar10;
    }
  }
  else {
    if (uVar8 != 5) goto LAB_0048607e;
    pcVar5 = "month";
    do {
      bVar1 = *unaff_ESI;
      bVar9 = bVar1 < (byte)*pcVar5;
      if (bVar1 != *pcVar5) {
LAB_00486254:
        uVar8 = -(uint)bVar9 | 1;
        goto LAB_00486259;
      }
      if (bVar1 == 0) break;
      bVar1 = unaff_ESI[1];
      bVar9 = bVar1 < (byte)pcVar5[1];
      if (bVar1 != pcVar5[1]) goto LAB_00486254;
      unaff_ESI = unaff_ESI + 2;
      pcVar5 = pcVar5 + 2;
    } while (bVar1 != 0);
    uVar8 = 0;
LAB_00486259:
    if (uVar8 != 0) goto LAB_0048607e;
    FUN_00475680((uint *)unaff_EDI);
    FUN_004752f0(unaff_EDI);
    dVar11 = *(double *)(unaff_EBP - 0x38);
    *(int *)((int)unaff_EDI + 0xc) = *(int *)((int)unaff_EDI + 0xc) + (int)dVar11;
    iVar2 = *(int *)((int)unaff_EDI + 0xc);
    iVar6 = iVar2 + -1;
    if (iVar2 < 1) {
      iVar6 = iVar2 + -0xc;
    }
    *(int *)(unaff_EDI + 1) = (int)unaff_EDI[1] + iVar6 / 0xc;
    *(int *)((int)unaff_EDI + 0xc) = iVar2 + (iVar6 / 0xc) * -0xc;
    *(undefined1 *)((int)unaff_EDI + 0x2a) = 0;
    FUN_004753b0(unaff_EDI);
    dVar11 = (double)(int)dVar11;
    if (dVar11 == *(double *)(unaff_EBP - 0x38)) goto LAB_0048607e;
    *(double *)(unaff_EBP - 0x30) =
         (*(double *)(unaff_EBP - 0x38) - dVar11) * 30.0 * 86400000.0 +
         *(double *)(unaff_EBP - 0x30);
  }
  uVar12 = FUN_0054a946();
  uVar3 = *unaff_EDI;
  *(uint *)unaff_EDI = (int)*unaff_EDI + (uint)uVar12;
  *(int *)((int)unaff_EDI + 4) =
       *(int *)((int)unaff_EDI + 4) + (int)(uVar12 >> 0x20) + (uint)CARRY4((uint)uVar3,(uint)uVar12)
  ;
LAB_0048607e:
  *(undefined2 *)(unaff_EDI + 5) = 0;
  *(undefined1 *)((int)unaff_EDI + 0x2b) = 0;
  uStack00000008 = 0x486095;
  __security_check_cookie(*(uint *)(unaff_EBP - 4) ^ unaff_EBP);
  return;
}


/* FUN_00486380 @ 00486380  kind=gamemisc  attributed-by=none  size=206 */

bool __cdecl FUN_00486380(byte *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  
  bVar2 = (&DAT_00569720)[*param_1];
  pbVar4 = param_1;
  while ((bVar2 & 1) != 0) {
    pbVar1 = pbVar4 + 1;
    pbVar4 = pbVar4 + 1;
    bVar2 = (&DAT_00569720)[*pbVar1];
  }
  *(undefined4 *)(param_2 + 0x1c) = 0;
  bVar2 = *pbVar4;
  if (bVar2 == 0x2d) {
    iVar5 = -1;
  }
  else {
    if (bVar2 != 0x2b) {
      if ((bVar2 != 0x5a) && (bVar2 != 0x7a)) {
        return bVar2 != 0;
      }
      pbVar4 = pbVar4 + 1;
      goto LAB_0048642f;
    }
    iVar5 = 1;
  }
  iVar3 = FUN_0047d1b0(pbVar4 + 1);
  if (iVar3 != 2) {
    return true;
  }
  pbVar4 = pbVar4 + 6;
  *(int *)(param_2 + 0x1c) = (param_2 + (int)param_1 * 0x3c) * iVar5;
LAB_0048642f:
  bVar2 = (&DAT_00569720)[*pbVar4];
  while ((bVar2 & 1) != 0) {
    pbVar1 = pbVar4 + 1;
    pbVar4 = pbVar4 + 1;
    bVar2 = (&DAT_00569720)[*pbVar1];
  }
  return *pbVar4 != 0;
}


/* FUN_00486460 @ 00486460  kind=gamemisc  attributed-by=none  size=213 */

undefined4 __cdecl FUN_00486460(byte *param_1,ulonglong *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 local_c;
  undefined4 local_8;
  
  bVar1 = *param_1;
  pbVar3 = param_1;
  if (bVar1 == 0x2d) {
    pbVar3 = param_1 + 1;
  }
  iVar2 = FUN_0047d1b0(pbVar3);
  if (iVar2 == 3) {
    for (pbVar3 = pbVar3 + 10; (((&DAT_00569720)[*pbVar3] & 1) != 0 || (*pbVar3 == 0x54));
        pbVar3 = pbVar3 + 1) {
    }
    iVar2 = FUN_00485950(pbVar3,(int)param_2);
    if (iVar2 != 0) {
      if (*pbVar3 != 0) {
        return 1;
      }
      *(undefined1 *)((int)param_2 + 0x29) = 0;
    }
    *(undefined1 *)((int)param_2 + 0x2a) = 0;
    *(undefined1 *)(param_2 + 5) = 1;
    if (bVar1 == 0x2d) {
      param_1 = (byte *)-(int)param_1;
    }
    *(byte **)(param_2 + 1) = param_1;
    *(undefined4 *)((int)param_2 + 0xc) = local_8;
    *(undefined4 *)(param_2 + 2) = local_c;
    if (*(char *)((int)param_2 + 0x2b) != '\0') {
      FUN_004753b0(param_2);
    }
    return 0;
  }
  return 1;
}


/* FUN_00486540 @ 00486540  kind=gamemisc  attributed-by=none  size=856 */

bool __cdecl FUN_00486540(char *param_1,byte *param_2,ushort *param_3,uint param_4)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  byte *pbVar10;
  char *pcVar11;
  bool bVar12;
  bool bVar13;
  
  uVar5 = param_3[1];
  bVar2 = *(byte *)((int)param_3 + 1);
  uVar6 = *param_3;
  uVar8 = (uint)*param_3;
  cVar3 = *(char *)((int)param_3 + 3);
  bVar12 = false;
  bVar4 = false;
  uVar7 = FUN_004ad280((int *)&param_1);
  if (uVar7 != 0) {
    do {
      if ((uVar7 == (byte)uVar6) && (!bVar12)) goto LAB_00486710;
      if ((uVar7 != uVar8 >> 8) || (bVar12)) {
        if (uVar7 == (byte)uVar5) {
          uVar7 = 0;
          uVar8 = FUN_004ad280((int *)&param_2);
          if (uVar8 == 0) {
            return false;
          }
          uVar9 = FUN_004ad280((int *)&param_1);
          bVar12 = uVar9 == 0x5e;
          if (bVar12) {
            uVar9 = FUN_004ad280((int *)&param_1);
          }
          bVar13 = uVar9 == 0x5d;
          if (bVar13) {
            uVar9 = FUN_004ad280((int *)&param_1);
          }
          bVar13 = bVar13 && uVar8 == 0x5d;
          if (uVar9 == 0) {
            return false;
          }
          while (uVar9 != 0x5d) {
            if ((((uVar9 == 0x2d) && (*param_1 != ']')) && (*param_1 != '\0')) && (uVar7 != 0)) {
              uVar9 = FUN_004ad280((int *)&param_1);
              if ((uVar7 <= uVar8) && (uVar8 <= uVar9)) {
                bVar13 = true;
              }
              uVar7 = 0;
            }
            else {
              uVar7 = uVar9;
              if (uVar8 == uVar9) {
                bVar13 = true;
              }
            }
            uVar9 = FUN_004ad280((int *)&param_1);
            if (uVar9 == 0) {
              return false;
            }
          }
          if (bVar12 == bVar13) {
            return false;
          }
          uVar8 = (uint)bVar2 << 8;
          bVar12 = bVar4;
        }
        else if ((param_4 != uVar7) || (bVar12)) {
          uVar9 = FUN_004ad280((int *)&param_2);
          if (cVar3 != '\0') {
            if ((uVar7 & 0xffffff80) == 0) {
              uVar7 = (uint)(byte)(&DAT_00569620)[uVar7];
            }
            if ((uVar9 & 0xffffff80) == 0) {
              uVar9 = (uint)(byte)(&DAT_00569620)[uVar9];
            }
          }
          if (uVar7 != uVar9) {
            return false;
          }
          bVar12 = false;
          bVar4 = bVar12;
        }
        else {
          bVar12 = true;
          bVar4 = bVar12;
        }
      }
      else {
        uVar7 = FUN_004ad280((int *)&param_2);
        if (uVar7 == 0) {
          return false;
        }
      }
      uVar7 = FUN_004ad280((int *)&param_1);
    } while (uVar7 != 0);
  }
  return *param_2 == 0;
LAB_00486710:
  while ((uVar9 = FUN_004ad280((int *)&param_1), uVar7 = param_4, uVar9 == (byte)uVar6 ||
         (uVar9 == uVar8 >> 8))) {
    if ((uVar9 == uVar8 >> 8) && (uVar7 = FUN_004ad280((int *)&param_2), uVar7 == 0)) {
      return false;
    }
  }
  if (uVar9 == 0) {
    return true;
  }
  if (uVar9 == param_4) {
    uVar9 = FUN_004ad280((int *)&param_1);
    if (uVar9 == 0) {
      return false;
    }
  }
  else if (uVar9 == (byte)uVar5) {
    pbVar10 = param_2;
    if (*param_2 != 0) {
      pcVar11 = param_1 + -1;
      do {
        bVar12 = FUN_00486540(pcVar11,pbVar10,param_3,uVar7);
        if (CONCAT31(extraout_var,bVar12) != 0) break;
        bVar2 = *pbVar10;
        pbVar10 = pbVar10 + 1;
        if (0xbf < bVar2) {
          bVar2 = *pbVar10;
          while ((bVar2 & 0xc0) == 0x80) {
            pbVar1 = pbVar10 + 1;
            pbVar10 = pbVar10 + 1;
            bVar2 = *pbVar1;
          }
        }
      } while (*pbVar10 != 0);
    }
    return *pbVar10 != 0;
  }
  uVar8 = FUN_004ad280((int *)&param_2);
  pcVar11 = param_1;
  if (uVar8 == 0) {
    return false;
  }
  do {
    if (cVar3 == '\0') {
      while (uVar8 != uVar9) {
        uVar8 = FUN_004ad280((int *)&param_2);
        if (uVar8 == 0) {
          return false;
        }
      }
    }
    else {
      if ((uVar8 & 0xffffff80) == 0) {
        uVar8 = (uint)(byte)(&DAT_00569620)[uVar8];
      }
      if ((uVar9 & 0xffffff80) == 0) {
        uVar9 = (uint)(byte)(&DAT_00569620)[uVar9];
      }
      if (uVar8 == 0) {
        return false;
      }
      while (uVar8 != uVar9) {
        uVar8 = FUN_004ad280((int *)&param_2);
        if ((uVar8 & 0xffffff80) == 0) {
          uVar8 = (uint)(byte)(&DAT_00569620)[uVar8];
        }
        if (uVar8 == 0) {
          return false;
        }
      }
    }
    bVar12 = FUN_00486540(pcVar11,param_2,param_3,uVar7);
    if (CONCAT31(extraout_var_00,bVar12) != 0) {
      return true;
    }
    uVar8 = FUN_004ad280((int *)&param_2);
  } while (uVar8 != 0);
  return false;
}


/* FUN_004868a0 @ 004868a0  kind=gamemisc  attributed-by=none  size=263 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __cdecl FUN_004868a0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_00583e5c < param_1) {
    DAT_00583e5c = param_1;
  }
  _DAT_00583e34 = param_1;
  if (param_1 <= DAT_00584208) {
    if (DAT_0058421c != 0) {
      (*DAT_00582b18)(DAT_0058421c);
    }
    puVar1 = DAT_00584220;
    if (DAT_00584220 != (undefined4 *)0x0) {
      DAT_00584220 = (undefined4 *)*DAT_00584220;
      DAT_00584224 = DAT_00584224 + -1;
      DAT_00584228 = (uint)(DAT_00584224 < DAT_00584210);
      DAT_00583e1c = DAT_00583e1c + 1;
      if (DAT_00583e44 < DAT_00583e1c) {
        DAT_00583e44 = DAT_00583e1c;
      }
    }
    if (DAT_0058421c != 0) {
      (*DAT_00582b20)(DAT_0058421c);
    }
    if (puVar1 != (undefined4 *)0x0) {
      return puVar1;
    }
  }
  puVar1 = (undefined4 *)FUN_004a0350(param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (*DAT_00582af0._4_4_)(puVar1);
    if (DAT_0058421c != 0) {
      (*DAT_00582b18)(DAT_0058421c);
    }
    DAT_00583e20 = DAT_00583e20 + iVar2;
    if (DAT_00583e48 < DAT_00583e20) {
      DAT_00583e48 = DAT_00583e20;
    }
    if (DAT_0058421c != 0) {
      (*DAT_00582b20)(DAT_0058421c);
    }
  }
  return puVar1;
}


/* FUN_004869b0 @ 004869b0  kind=gamemisc  attributed-by=none  size=109 */

undefined4 * __cdecl FUN_004869b0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (*(int *)*param_1 != 0) {
    (*DAT_00582b20)(*(int *)*param_1);
  }
  puVar1 = FUN_004868a0(param_1[1] + param_1[2] + 0x1c);
  puVar2 = (undefined4 *)(param_1[1] + (int)puVar1);
  if (*(int *)*param_1 != 0) {
    (*DAT_00582b18)(*(int *)*param_1);
  }
  if (puVar1 != (undefined4 *)0x0) {
    *puVar2 = puVar1;
    puVar2[1] = puVar2 + 7;
    if (param_1[3] != 0) {
      *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + 1;
    }
    return puVar2;
  }
  return (undefined4 *)0x0;
}


/* FUN_00486a20 @ 00486a20  kind=gamemisc  attributed-by=none  size=195 */

void __cdecl FUN_00486a20(int param_1)

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
      FUN_00486af0((undefined4 *)*puVar2);
      if (piVar1[3] != 0) {
        piVar1 = (int *)(*piVar1 + 0x10);
        *piVar1 = *piVar1 + -1;
      }
    } while (*(uint *)(param_1 + 4) < *(uint *)(param_1 + 0x10));
  }
  return;
}


/* FUN_00486bf0 @ 00486bf0  kind=gamemisc  attributed-by=none  size=38 */

void __cdecl FUN_00486bf0(undefined4 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    piVar1 = (int *)param_1[4];
    FUN_00486af0((undefined4 *)*param_1);
    if (piVar1[3] != 0) {
      piVar1 = (int *)(*piVar1 + 0x10);
      *piVar1 = *piVar1 + -1;
    }
  }
  return;
}


/* FUN_00486c20 @ 00486c20  kind=gamemisc  attributed-by=none  size=96 */

void __cdecl FUN_00486c20(int param_1)

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


/* FUN_00486c80 @ 00486c80  kind=gamemisc  attributed-by=none  size=55 */

void __cdecl FUN_00486c80(int param_1)

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


/* FUN_00486cc0 @ 00486cc0  kind=gamemisc  attributed-by=none  size=259 */

undefined4 __cdecl FUN_00486cc0(undefined4 *param_1)

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
    (*DAT_00582b20)(*(int *)*param_1);
  }
  if ((param_1[10] != 0) && (DAT_00583e74 != (code *)0x0)) {
    (*DAT_00583e74)();
  }
  _Dst = (void *)FUN_004a0350(uVar5 * 4);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,uVar5 * 4);
  }
  if ((param_1[10] != 0) && (DAT_00583e78 != (code *)0x0)) {
    (*DAT_00583e78)();
  }
  if (*(int *)*param_1 != 0) {
    (*DAT_00582b18)(*(int *)*param_1);
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
    FUN_00466dd0(param_1[0xb]);
    param_1[0xb] = _Dst;
    param_1[10] = uVar5;
  }
  uVar3 = 7;
  if (param_1[0xb] != 0) {
    uVar3 = 0;
  }
  return uVar3;
}


/* FUN_00486dd0 @ 00486dd0  kind=gamemisc  attributed-by=none  size=205 */

void __cdecl FUN_00486dd0(int param_1,uint param_2)

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
          FUN_00486af0((undefined4 *)*puVar1);
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


/* FUN_00486ea0 @ 00486ea0  kind=gamemisc  attributed-by=none  size=41 */

undefined4 __cdecl FUN_00486ea0(int param_1)

{
  undefined4 uVar1;
  
  if ((DAT_0058420c == 0) ||
     (uVar1 = DAT_00584228, DAT_00584208 < *(int *)(param_1 + 8) + *(int *)(param_1 + 4))) {
    uVar1 = DAT_00583f64;
  }
  return uVar1;
}


/* FUN_00486f40 @ 00486f40  kind=gamemisc  attributed-by=none  size=301 */

int __cdecl FUN_00486f40(int *param_1,undefined4 *param_2,byte *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  
  puVar3 = param_2;
  if (param_2 < (undefined4 *)0x2) {
    uVar7 = 0;
  }
  else {
    uVar7 = (uint)param_1[9] / 5 + 1;
    iVar6 = (((int)param_2 - 2U) / uVar7) * uVar7;
    uVar7 = iVar6 + 2;
    if (uVar7 == DAT_00582bb8 / (uint)param_1[8] + 1) {
      uVar7 = iVar6 + 3;
    }
  }
  iVar6 = FUN_004a14c0(*param_1,uVar7,(int *)&param_2,0);
  pbVar5 = param_3;
  puVar4 = param_2;
  if (iVar6 == 0) {
    puVar1 = (undefined4 *)param_2[1];
    iVar6 = ((int)puVar3 + (-1 - uVar7)) * 5;
    if (iVar6 < 0) {
      puVar2 = (uint *)param_2[4];
      param_2 = puVar1;
      FUN_004a3a80(puVar4);
      if (*(int *)(puVar2[0x2d] + 0xc) == 0) {
        FUN_00484370(puVar2);
      }
    }
    else {
      *param_3 = *(byte *)(iVar6 + (int)puVar1);
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar6 + 1 + (int)puVar1),
                                              *(undefined1 *)(iVar6 + 2 + (int)puVar1)),
                                     *(undefined1 *)(iVar6 + 3 + (int)puVar1)),
                            *(undefined1 *)(iVar6 + 4 + (int)puVar1));
      }
      puVar2 = (uint *)param_2[4];
      param_2 = puVar1;
      FUN_004a3a80(puVar4);
      if (*(int *)(puVar2[0x2d] + 0xc) == 0) {
        FUN_00484370(puVar2);
      }
      if ((*pbVar5 != 0) && (*pbVar5 < 6)) {
        return 0;
      }
    }
    FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
    iVar6 = 0xb;
  }
  return iVar6;
}


/* FUN_00487070 @ 00487070  kind=gamemisc  attributed-by=none  size=72 */

int __cdecl FUN_00487070(int param_1,uint param_2)

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
  if (iVar3 == DAT_00582bb8 / *(uint *)(param_1 + 0x20) + 1) {
    iVar3 = iVar2 + 3;
  }
  return iVar3;
}


/* FUN_004870c0 @ 004870c0  kind=gamemisc  attributed-by=none  size=261 */

void __cdecl FUN_004870c0(int *param_1,uint param_2,char param_3,int param_4,uint *param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *local_8;
  
  if (*param_5 == 0) {
    if (param_2 == 0) {
      FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
      *param_5 = 0xb;
      return;
    }
    uVar2 = FUN_00487070((int)param_1,param_2);
    uVar3 = FUN_004a14c0(*param_1,uVar2,(int *)&local_8,0);
    if (uVar3 != 0) {
      *param_5 = uVar3;
      return;
    }
    iVar4 = ((param_2 - uVar2) + -1) * 5;
    if (iVar4 < 0) {
      FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
      *param_5 = 0xb;
    }
    else {
      pcVar5 = (char *)(local_8[1] + iVar4);
      if ((param_3 != *pcVar5) || (iVar4 = FUN_0049c920(pcVar5 + 1), iVar4 != param_4)) {
        uVar2 = FUN_004a2c80(local_8);
        *param_5 = uVar2;
        if (uVar2 == 0) {
          *pcVar5 = param_3;
          FUN_004a5f90(pcVar5 + 1,param_4);
        }
      }
    }
    if (local_8 != (undefined4 *)0x0) {
      puVar1 = (uint *)local_8[4];
      FUN_004a3a80(local_8);
      if (*(int *)(puVar1[0x2d] + 0xc) == 0) {
        FUN_00484370(puVar1);
      }
    }
  }
  return;
}


/* FUN_004871d0 @ 004871d0  kind=gamemisc  attributed-by=none  size=104 */

void __cdecl FUN_004871d0(int param_1,uint param_2,uint *param_3)

{
  undefined1 *puVar1;
  uint local_24 [6];
  ushort local_c;
  
  if ((*param_3 == 0) && (FUN_00471710(param_1,param_2,local_24), local_c != 0)) {
    puVar1 = (undefined1 *)(local_c + param_2);
    FUN_004870c0(*(int **)(param_1 + 0x34),
                 CONCAT31(CONCAT21(CONCAT11(*puVar1,puVar1[1]),puVar1[2]),puVar1[3]),'\x03',
                 *(int *)(param_1 + 0x48),param_3);
  }
  return;
}


/* FUN_00487240 @ 00487240  kind=gamemisc  attributed-by=none  size=709 */

void __cdecl FUN_00487240(int param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int local_8;
  
  iVar6 = *param_2;
  iVar10 = iVar6 + 2;
  local_8 = *(int *)(param_1 + 0x40);
  piVar1 = *(int **)(param_1 + 8);
  if (*(int *)(param_1 + 0x3c) < iVar10) {
    local_8 = *(int *)(param_1 + 0x4c) + 1;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar10;
  }
  else {
    *(int *)(param_1 + 0x40) = local_8 + iVar10;
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) - iVar10;
  }
  if (*(char *)(param_1 + 0x13) == '\0') {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
    iVar8 = *(int *)(param_1 + 0x4c);
  }
  else {
    bVar2 = *(char *)(param_1 + 0x13) - 1;
    *(byte *)(param_1 + 0x13) = bVar2;
    iVar8 = *(int *)(param_1 + 0x1c + (uint)bVar2 * 4);
  }
  FUN_00496a90(param_1);
  FUN_00497010(param_1,param_2,local_8,0);
  iVar4 = param_2[1];
  iVar5 = piVar1[7];
  if ((iVar5 < piVar1[8]) || (iVar3 = FUN_0047de10(piVar1), iVar3 == 0)) {
    piVar1[7] = piVar1[7] + 1;
    iVar3 = piVar1[1];
    *(undefined2 *)(iVar3 + iVar5 * 0x14) = 0x37;
    iVar3 = iVar3 + iVar5 * 0x14;
    *(int *)(iVar3 + 4) = iVar4;
    *(undefined1 *)(iVar3 + 3) = 0;
    *(int *)(iVar3 + 8) = local_8 + iVar6;
    *(undefined4 *)(iVar3 + 0xc) = 0;
    *(undefined4 *)(iVar3 + 0x10) = 0;
  }
  FUN_00497600(param_1,param_4,local_8 + 1 + iVar6,1);
  iVar6 = piVar1[7];
  if ((iVar6 < piVar1[8]) || (iVar4 = FUN_0047de10(piVar1), iVar4 == 0)) {
    piVar1[7] = piVar1[7] + 1;
    iVar4 = piVar1[1];
    *(int *)(iVar4 + 4 + iVar6 * 0x14) = local_8;
    *(undefined2 *)(iVar4 + iVar6 * 0x14) = 0x1f;
    *(undefined1 *)(iVar4 + 3 + iVar6 * 0x14) = 0;
    *(int *)(iVar4 + 8 + iVar6 * 0x14) = iVar10;
    *(int *)(iVar4 + 0xc + iVar6 * 0x14) = iVar8;
    *(undefined4 *)(iVar4 + 0x10 + iVar6 * 0x14) = 0;
  }
  bVar2 = *(byte *)(param_3 + 6);
  iVar6 = param_2[1];
  iVar4 = piVar1[7];
  if ((iVar4 < piVar1[8]) || (iVar5 = FUN_0047de10(piVar1), iVar5 == 0)) {
    piVar1[7] = piVar1[7] + 1;
    iVar5 = piVar1[1];
    *(byte *)(iVar5 + iVar4 * 0x14) = (byte)~bVar2 >> 6 & 1 | 0x60;
    *(int *)(iVar5 + 4 + iVar4 * 0x14) = iVar6;
    *(undefined1 *)(iVar5 + 3 + iVar4 * 0x14) = 0;
    *(int *)(iVar5 + 8 + iVar4 * 0x14) = iVar8;
    *(undefined4 *)(iVar5 + 0xc + iVar4 * 0x14) = 0;
    *(undefined4 *)(iVar5 + 0x10 + iVar4 * 0x14) = 0;
    *(undefined1 *)(iVar5 + 1 + iVar4 * 0x14) = 0;
  }
  if ((iVar8 != 0) && (*(byte *)(param_1 + 0x13) < 8)) {
    iVar4 = 0;
    iVar6 = param_1 + 100;
    do {
      if (*(int *)(iVar6 + 0x10) == iVar8) {
        *(undefined1 *)(iVar6 + 8) = 1;
        goto LAB_0048741f;
      }
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + 0x18;
    } while (iVar4 < 10);
    *(int *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0x13) * 4) = iVar8;
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  }
LAB_0048741f:
  FUN_00496d90(param_1,local_8,iVar10);
  if (*(int *)(param_1 + 0x3c) < iVar10) {
    *(int *)(param_1 + 0x3c) = iVar10;
    *(int *)(param_1 + 0x40) = local_8;
  }
  iVar10 = *(int *)(param_3 + 8);
  if (iVar10 != 0) {
    if (*(int *)(param_3 + 0xc) != 0) {
      iVar10 = *(int *)(param_3 + 0xc) + 1;
    }
    uVar7 = FUN_004ae7d0(piVar1,0x7a,iVar10);
    iVar6 = piVar1[7];
    if ((iVar6 < piVar1[8]) || (iVar8 = FUN_0047de10(piVar1), iVar8 == 0)) {
      piVar1[7] = piVar1[7] + 1;
      iVar8 = piVar1[1];
      *(undefined2 *)(iVar8 + iVar6 * 0x14) = 0x14;
      *(undefined1 *)(iVar8 + 3 + iVar6 * 0x14) = 0;
      *(int *)(iVar8 + 4 + iVar6 * 0x14) = iVar10;
      *(undefined4 *)(iVar8 + 8 + iVar6 * 0x14) = 0xffffffff;
      *(undefined4 *)(iVar8 + 0xc + iVar6 * 0x14) = 0;
      *(undefined4 *)(iVar8 + 0x10 + iVar6 * 0x14) = 0;
    }
    uVar9 = FUN_004ae760(piVar1,1);
    if ((-1 < (int)uVar7) && (uVar7 < (uint)piVar1[7])) {
      *(int *)(piVar1[1] + 8 + uVar7 * 0x14) = piVar1[7];
    }
    FUN_004ae7d0(piVar1,0x43,param_2[1]);
    FUN_004ae7d0(piVar1,0x3b,param_2[1]);
    if ((-1 < (int)uVar9) && (uVar9 < (uint)piVar1[7])) {
      *(int *)(piVar1[1] + 8 + uVar9 * 0x14) = piVar1[7];
    }
  }
  return;
}


/* FUN_00487510 @ 00487510  kind=gamemisc  attributed-by=none  size=98 */

undefined4 __cdecl FUN_00487510(int param_1,int param_2,char param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(char *)(param_1 + 9) == '\0') {
    return 0;
  }
  if ((*(int *)(iVar1 + 0x4c) != param_1) && ((*(byte *)(iVar1 + 0x16) & 0x20) != 0)) {
    return 0x106;
  }
  piVar2 = *(int **)(iVar1 + 0x48);
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    if (((*piVar2 != param_1) && (piVar2[1] == param_2)) && ((char)piVar2[2] != param_3)) break;
    piVar2 = (int *)piVar2[3];
  }
  if (param_3 == '\x02') {
    *(ushort *)(iVar1 + 0x16) = *(ushort *)(iVar1 + 0x16) | 0x40;
  }
  return 0x106;
}


/* FUN_00487580 @ 00487580  kind=gamemisc  attributed-by=none  size=264 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00487580(void)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  char local_108 [256];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  if (DAT_00583fd8 == '\0') {
    _DAT_00583fd9 = 0;
    iVar3 = FUN_00464e80((byte *)0x0);
    (**(code **)(iVar3 + 0x38))(iVar3,0x100,local_108);
    iVar3 = 0;
    do {
      (&DAT_00583fdb)[iVar3] = (char)iVar3;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x100);
    iVar3 = 0;
    do {
      bVar4 = DAT_00583fda + local_108[iVar3] + (&DAT_00583fdb)[iVar3];
      _DAT_00583fd9 = CONCAT11(bVar4,DAT_00583fd9);
      iVar5 = iVar3 + 1;
      uVar1 = (&DAT_00583fdb)[bVar4];
      (&DAT_00583fdb)[bVar4] = (&DAT_00583fdb)[iVar3];
      (&DAT_00583fdb)[iVar3] = uVar1;
      iVar3 = iVar5;
    } while (iVar5 < 0x100);
    DAT_00583fd8 = '\x01';
  }
  bVar4 = DAT_00583fd9 + 1;
  cVar2 = (&DAT_00583fdb)[bVar4];
  DAT_00583fda = DAT_00583fda + cVar2;
  DAT_00583fd9 = bVar4;
  (&DAT_00583fdb)[bVar4] = (&DAT_00583fdb)[DAT_00583fda];
  (&DAT_00583fdb)[DAT_00583fda] = cVar2;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00487b40 @ 00487b40  kind=gamemisc  attributed-by=none  size=232 */

undefined4 __cdecl FUN_00487b40(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int *local_8;
  
  local_8 = (int *)param_1[2];
  if (local_8 == (int *)0x0) {
    local_8 = FUN_004af150(*param_1);
    param_1[2] = (int)local_8;
    if (local_8 != (int *)0x0) {
      FUN_004ae760(local_8,0x94);
    }
  }
  iVar1 = local_8[7];
  if ((*(byte *)(param_4 + 0x2a) & 0x10) == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *(int **)(param_4 + 0x38);
    if (piVar3 != (int *)0x0) {
      do {
        if (*piVar3 == *param_1) break;
        piVar3 = (int *)piVar3[6];
      } while (piVar3 != (int *)0x0);
    }
  }
  if (param_2 < iVar1) {
    do {
      iVar2 = param_2;
      if (param_2 < 0) {
        iVar2 = iVar1 + -1;
      }
      if (*(char *)(*local_8 + 0x38) == '\0') {
        pcVar4 = (char *)(local_8[1] + iVar2 * 0x14);
      }
      else {
        pcVar4 = &DAT_00583fc4;
      }
      if ((*pcVar4 == '\'') && (*(int *)(pcVar4 + 0xc) == param_3)) {
        if (*(int *)(pcVar4 + 8) == *(int *)(param_4 + 0x20)) {
          return 1;
        }
        for (iVar2 = *(int *)(param_4 + 8); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x14)) {
          if (*(int *)(pcVar4 + 8) == *(int *)(iVar2 + 0x28)) {
            return 1;
          }
        }
      }
      if ((*pcVar4 == -0x79) && (*(int **)(pcVar4 + 0x10) == piVar3)) {
        return 1;
      }
      param_2 = param_2 + 1;
    } while (param_2 < iVar1);
  }
  return 0;
}


/* FUN_00487d80 @ 00487d80  kind=gamemisc  attributed-by=none  size=254 */

void __cdecl FUN_00487d80(int *param_1,byte *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int local_10;
  
  iVar1 = *param_1;
  local_10 = 0;
  if (0 < *(int *)(iVar1 + 0x14)) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x10) + 0xc);
    do {
      for (puVar2 = *(undefined4 **)(*piVar6 + 0x10); puVar2 != (undefined4 *)0x0;
          puVar2 = (undefined4 *)*puVar2) {
        iVar3 = puVar2[2];
        for (piVar4 = *(int **)(iVar3 + 8); piVar4 != (int *)0x0; piVar4 = (int *)piVar4[5]) {
          if ((param_2 == (byte *)0x0) || (iVar7 = FUN_00474ee0(param_2,(int)piVar4), iVar7 != 0)) {
            iVar7 = *(int *)(iVar3 + 0x40);
            iVar9 = -1000000;
            if (iVar7 != 0) {
              iVar5 = *(int *)(*param_1 + 0x14);
              iVar9 = 0;
              if (0 < iVar5) {
                piVar8 = (int *)(*(int *)(*param_1 + 0x10) + 0xc);
                do {
                  if (*piVar8 == iVar7) break;
                  iVar9 = iVar9 + 1;
                  piVar8 = piVar8 + 4;
                } while (iVar9 < iVar5);
              }
            }
            piVar8 = param_1;
            if ((int *)param_1[0x6c] != (int *)0x0) {
              piVar8 = (int *)param_1[0x6c];
            }
            FUN_00493400(param_1,iVar9);
            piVar8[0x55] = piVar8[0x55] | 1 << ((byte)iVar9 & 0x1f);
            FUN_004a6290(param_1,piVar4,-1);
          }
        }
      }
      local_10 = local_10 + 1;
      piVar6 = piVar6 + 4;
    } while (local_10 < *(int *)(iVar1 + 0x14));
  }
  return;
}


/* FUN_00487e80 @ 00487e80  kind=gamemisc  attributed-by=none  size=163 */

void __cdecl FUN_00487e80(int *param_1,int param_2,byte *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar1 = *(int **)(param_2 + 8);
  do {
    if (piVar1 == (int *)0x0) {
      return;
    }
    if ((param_3 == (byte *)0x0) || (iVar3 = FUN_00474ee0(param_3,(int)piVar1), iVar3 != 0)) {
      iVar3 = -1000000;
      if (*(int *)(param_2 + 0x40) != 0) {
        iVar2 = *(int *)(*param_1 + 0x14);
        iVar3 = 0;
        if (0 < iVar2) {
          piVar4 = (int *)(*(int *)(*param_1 + 0x10) + 0xc);
          do {
            if (*piVar4 == *(int *)(param_2 + 0x40)) break;
            iVar3 = iVar3 + 1;
            piVar4 = piVar4 + 4;
          } while (iVar3 < iVar2);
        }
      }
      piVar4 = param_1;
      if ((int *)param_1[0x6c] != (int *)0x0) {
        piVar4 = (int *)param_1[0x6c];
      }
      FUN_00493400(param_1,iVar3);
      piVar4[0x55] = piVar4[0x55] | 1 << ((byte)iVar3 & 0x1f);
      FUN_004a6290(param_1,piVar1,-1);
    }
    piVar1 = (int *)piVar1[5];
  } while( true );
}


/* FUN_00487fb0 @ 00487fb0  kind=gamemisc  attributed-by=none  size=229 */

void __cdecl FUN_00487fb0(int *param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  int local_8;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    iVar2 = *param_1;
    uVar1 = *(undefined1 *)(iVar2 + 0x38);
    if (*(int *)(iVar2 + 0x1f0) == 0) {
      if (param_1 < param_1 + param_2 * 10) {
        local_8 = (uint)((int)(param_1 + param_2 * 10) + (-1 - (int)param_1)) / 0x28 + 1;
        piVar3 = param_1 + 9;
        do {
          if ((*(ushort *)(piVar3 + -2) & 0x2460) == 0) {
            if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
              FUN_00494b00(iVar2,(undefined4 *)*piVar3);
              goto LAB_00488071;
            }
          }
          else {
            FUN_004b7720(piVar3 + -9);
            FUN_00494b00(piVar3[-9],(undefined4 *)*piVar3);
            piVar3[-8] = 0;
            piVar3[-1] = 0;
LAB_00488071:
            *piVar3 = 0;
          }
          *(undefined2 *)(piVar3 + -2) = 0x80;
          piVar3 = piVar3 + 10;
          local_8 = local_8 + -1;
        } while (local_8 != 0);
      }
      *(undefined1 *)(iVar2 + 0x38) = uVar1;
    }
    else {
      piVar3 = param_1 + param_2 * 10;
      if (param_1 < piVar3) {
        do {
          FUN_00494b00(iVar2,(undefined4 *)param_1[9]);
          param_1 = param_1 + 10;
        } while (param_1 < piVar3);
        return;
      }
    }
  }
  return;
}


/* FUN_004880a0 @ 004880a0  kind=gamemisc  attributed-by=none  size=54 */

void __cdecl FUN_004880a0(int param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  
  if ((param_1 != 0) && (puVar1 = *(undefined4 **)(param_1 + 0x44), puVar1 != (undefined4 *)0x0)) {
    puVar2 = (uint *)puVar1[4];
    FUN_004a3a80(puVar1);
    if (*(int *)(puVar2[0x2d] + 0xc) == 0) {
      FUN_00484370(puVar2);
    }
  }
  return;
}


/* FUN_004880e0 @ 004880e0  kind=gamemisc  attributed-by=none  size=667 */

void __cdecl FUN_004880e0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  void *extraout_EDX;
  void *extraout_EDX_00;
  int iVar8;
  int iVar9;
  int local_8;
  
  piVar2 = (int *)param_1[2];
  if (piVar2 == (int *)0x0) {
    piVar2 = FUN_004af150(*param_1);
    param_1[2] = (int)piVar2;
    if (piVar2 == (int *)0x0) {
      return;
    }
    FUN_004ae760(piVar2,0x94);
  }
  local_8 = -1000000;
  if (param_2[0x10] != 0) {
    iVar9 = *(int *)(*param_1 + 0x14);
    iVar8 = 0;
    local_8 = 0;
    if (0 < iVar9) {
      piVar3 = (int *)(*(int *)(*param_1 + 0x10) + 0xc);
      do {
        local_8 = iVar8;
        if (*piVar3 == param_2[0x10]) break;
        iVar8 = iVar8 + 1;
        piVar3 = piVar3 + 4;
        local_8 = iVar8;
      } while (iVar8 < iVar9);
    }
  }
  puVar4 = (undefined4 *)FUN_004aaf60(param_1,param_2);
  do {
    if (puVar4 == (undefined4 *)0x0) {
      iVar9 = piVar2[7];
      piVar3 = (int *)*param_2;
      if ((iVar9 < piVar2[8]) || (iVar8 = FUN_0047de10(piVar2), iVar8 == 0)) {
        iVar8 = piVar2[1];
        piVar2[7] = piVar2[7] + 1;
        *(undefined2 *)(iVar8 + iVar9 * 0x14) = 0x6c;
        *(undefined1 *)(iVar8 + 3 + iVar9 * 0x14) = 0;
        *(int *)(iVar8 + 4 + iVar9 * 0x14) = local_8;
        *(undefined4 *)(iVar8 + 8 + iVar9 * 0x14) = 0;
        *(undefined4 *)(iVar8 + 0xc + iVar9 * 0x14) = 0;
        *(undefined4 *)(iVar8 + 0x10 + iVar9 * 0x14) = 0;
      }
      else {
        iVar9 = 1;
      }
      iVar8 = piVar2[1];
      iVar5 = *piVar2;
      if ((iVar8 == 0) || (*(char *)(iVar5 + 0x38) != '\0')) {
        FUN_0047bc80(iVar5,0,piVar3);
      }
      else {
        if (iVar9 < 0) {
          iVar9 = piVar2[7] + -1;
        }
        iVar1 = iVar8 + iVar9 * 0x14;
        FUN_0047bc80(iVar5,(int)*(char *)(iVar1 + 1),*(int **)(iVar8 + 0x10 + iVar9 * 0x14));
        *(undefined4 *)(iVar1 + 0x10) = 0;
        if (piVar3 == (int *)0x0) {
          *(undefined4 *)(iVar1 + 0x10) = 0;
          *(undefined1 *)(iVar1 + 1) = 0;
        }
        else {
          uVar7 = FUN_004aa9b0((char *)piVar3);
          puVar4 = FUN_00494e00(*piVar2,extraout_EDX_00,uVar7);
          *(undefined4 **)(iVar1 + 0x10) = puVar4;
          *(undefined1 *)(iVar1 + 1) = 0xff;
        }
      }
      piVar3 = (int *)FUN_004a02d0(*param_1,(byte *)"tbl_name=%Q");
      if (piVar3 != (int *)0x0) {
        FUN_004aeac0(piVar2,local_8,piVar3);
        piVar3 = (int *)FUN_004c2160(param_1,param_2);
        if (piVar3 != (int *)0x0) {
          FUN_004aeac0(piVar2,1,piVar3);
        }
      }
      return;
    }
    iVar9 = -1000000;
    if (puVar4[5] != 0) {
      iVar8 = *(int *)(*param_1 + 0x14);
      iVar9 = 0;
      if (0 < iVar8) {
        piVar3 = (int *)(*(int *)(*param_1 + 0x10) + 0xc);
        do {
          if (*piVar3 == puVar4[5]) break;
          iVar9 = iVar9 + 1;
          piVar3 = piVar3 + 4;
        } while (iVar9 < iVar8);
      }
    }
    piVar3 = (int *)*puVar4;
    iVar8 = piVar2[7];
    if ((iVar8 < piVar2[8]) || (iVar5 = FUN_0047de10(piVar2), iVar5 == 0)) {
      iVar5 = piVar2[1];
      piVar2[7] = piVar2[7] + 1;
      *(undefined2 *)(iVar5 + iVar8 * 0x14) = 0x6e;
      *(undefined1 *)(iVar5 + 3 + iVar8 * 0x14) = 0;
      *(int *)(iVar5 + 4 + iVar8 * 0x14) = iVar9;
      *(undefined4 *)(iVar5 + 8 + iVar8 * 0x14) = 0;
      *(undefined4 *)(iVar5 + 0xc + iVar8 * 0x14) = 0;
      *(undefined4 *)(iVar5 + 0x10 + iVar8 * 0x14) = 0;
    }
    else {
      iVar8 = 1;
    }
    iVar9 = piVar2[1];
    iVar5 = *piVar2;
    if ((iVar9 == 0) || (*(char *)(iVar5 + 0x38) != '\0')) {
      FUN_0047bc80(iVar5,0,piVar3);
    }
    else {
      if (iVar8 < 0) {
        iVar8 = piVar2[7] + -1;
      }
      iVar1 = iVar9 + iVar8 * 0x14;
      FUN_0047bc80(iVar5,(int)*(char *)(iVar1 + 1),*(int **)(iVar9 + 0x10 + iVar8 * 0x14));
      *(undefined4 *)(iVar1 + 0x10) = 0;
      if (piVar3 == (int *)0x0) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined1 *)(iVar1 + 1) = 0;
      }
      else {
        uVar7 = FUN_004aa9b0((char *)piVar3);
        puVar6 = FUN_00494e00(*piVar2,extraout_EDX,uVar7);
        *(undefined4 **)(iVar1 + 0x10) = puVar6;
        *(undefined1 *)(iVar1 + 1) = 0xff;
      }
    }
    puVar4 = (undefined4 *)puVar4[8];
  } while( true );
}


/* FUN_00488380 @ 00488380  kind=gamemisc  attributed-by=none  size=293 */

uint __cdecl
FUN_00488380(int *param_1,char *param_2,undefined4 param_3,uint param_4,uint param_5,int param_6)

{
  int iVar1;
  undefined1 *puVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  uint local_8;
  
  uVar5 = param_5;
  iVar1 = *(int *)(param_2 + 0x48);
  uVar4 = FUN_004a1ce0((undefined4 *)*param_1,*(undefined4 **)(param_2 + 0x44),param_5,param_6);
  if (uVar4 == 0) {
    *(uint *)(param_2 + 0x48) = uVar5;
    cVar7 = (char)param_3;
    local_8 = uVar4;
    if ((cVar7 == '\x05') || (cVar7 == '\x01')) {
      uVar5 = FUN_0048b310(param_2);
      uVar4 = 0;
      if (uVar5 != 0) {
        return uVar5;
      }
    }
    else {
      puVar2 = *(undefined1 **)(param_2 + 0x38);
      uVar6 = CONCAT31(CONCAT21(CONCAT11(*puVar2,puVar2[1]),puVar2[2]),puVar2[3]);
      if (uVar6 != 0) {
        FUN_004870c0(param_1,uVar6,'\x04',uVar5,&local_8);
        uVar4 = 0;
        if (local_8 != 0) {
          return local_8;
        }
      }
    }
    if ((cVar7 != '\x01') &&
       (uVar4 = FUN_004712c0(param_1,param_4,(int *)&param_2,0), pcVar3 = param_2, uVar4 == 0)) {
      uVar4 = FUN_004a2c80(*(undefined4 **)(param_2 + 0x44));
      if (uVar4 != 0) {
        FUN_004880a0((int)pcVar3);
        return uVar4;
      }
      uVar4 = FUN_00480840(pcVar3,iVar1,param_5,cVar7);
      local_8 = uVar4;
      FUN_004880a0((int)pcVar3);
      if (uVar4 == 0) {
        FUN_004870c0(param_1,param_5,cVar7,param_4,&local_8);
        uVar4 = local_8;
      }
    }
  }
  return uVar4;
}


/* FUN_004885a0 @ 004885a0  kind=gamemisc  attributed-by=none  size=160 */

void __cdecl FUN_004885a0(undefined4 param_1,byte *param_2,double *param_3)

{
  int iVar1;
  int local_f8;
  undefined1 *local_f4;
  undefined1 *local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 local_e0;
  undefined2 local_df;
  undefined1 local_dc [212];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_f4 = local_dc;
  local_f8 = 0;
  local_ec = 0;
  local_e8 = 0xd2;
  local_e4 = 0;
  local_df = 0;
  local_e0 = 0;
  local_f0 = local_f4;
  FUN_004ad370(&local_f8,0,param_2,param_3);
  iVar1 = FUN_004aa8f0(&local_f8);
  (*DAT_00582bac)(DAT_00582bb0,param_1,iVar1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00488640 @ 00488640  kind=gamemisc  attributed-by=none  size=42 */

void __cdecl FUN_00488640(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int local_c;
  
  piVar1 = (int *)param_1[2];
  if (*(int *)(param_2 + 0x24) + *(int *)(param_2 + 0x18) != 0) {
    iVar9 = 0;
    if (0 < *(int *)(param_2 + 0x18)) {
      iVar7 = 0;
      do {
        uVar2 = *(undefined4 *)(iVar7 + 0x10 + *(int *)(param_2 + 0x14));
        iVar5 = piVar1[7];
        if ((iVar5 < piVar1[8]) || (iVar4 = FUN_0047de10(piVar1), iVar4 == 0)) {
          piVar1[7] = piVar1[7] + 1;
          iVar4 = piVar1[1];
          *(undefined2 *)(iVar4 + iVar5 * 0x14) = 10;
          *(undefined1 *)(iVar4 + 3 + iVar5 * 0x14) = 0;
          *(undefined4 *)(iVar4 + 4 + iVar5 * 0x14) = 0;
          *(undefined4 *)(iVar4 + 8 + iVar5 * 0x14) = uVar2;
          *(undefined4 *)(iVar4 + 0xc + iVar5 * 0x14) = 0;
          *(undefined4 *)(iVar4 + 0x10 + iVar5 * 0x14) = 0;
        }
        iVar9 = iVar9 + 1;
        iVar7 = iVar7 + 0x18;
      } while (iVar9 < *(int *)(param_2 + 0x18));
    }
    piVar8 = *(int **)(param_2 + 0x20);
    local_c = 0;
    if (0 < *(int *)(param_2 + 0x24)) {
      do {
        iVar9 = piVar1[7];
        iVar7 = piVar8[2];
        if ((iVar9 < piVar1[8]) || (iVar5 = FUN_0047de10(piVar1), iVar5 == 0)) {
          iVar5 = piVar1[1];
          piVar1[7] = piVar1[7] + 1;
          *(undefined2 *)(iVar5 + iVar9 * 0x14) = 10;
          *(undefined1 *)(iVar5 + 3 + iVar9 * 0x14) = 0;
          *(undefined4 *)(iVar5 + 4 + iVar9 * 0x14) = 0;
          *(int *)(iVar5 + 8 + iVar9 * 0x14) = iVar7;
          *(undefined4 *)(iVar5 + 0xc + iVar9 * 0x14) = 0;
          *(undefined4 *)(iVar5 + 0x10 + iVar9 * 0x14) = 0;
        }
        if (-1 < piVar8[3]) {
          puVar3 = *(uint **)(*piVar8 + 0x10);
          if ((puVar3 == (uint *)0x0) || (*puVar3 != 1)) {
            FUN_004962b0(param_1,(byte *)"DISTINCT aggregates must have exactly one argument");
            piVar8[3] = -1;
          }
          else {
            piVar6 = FUN_0047f5f0(param_1,puVar3);
            iVar9 = piVar1[7];
            iVar7 = piVar8[3];
            if ((iVar9 < piVar1[8]) || (iVar5 = FUN_0047de10(piVar1), iVar5 == 0)) {
              iVar5 = piVar1[1];
              piVar1[7] = piVar1[7] + 1;
              *(undefined2 *)(iVar5 + iVar9 * 0x14) = 0x2a;
              *(undefined1 *)(iVar5 + 3 + iVar9 * 0x14) = 0;
              *(int *)(iVar5 + 4 + iVar9 * 0x14) = iVar7;
              *(undefined4 *)(iVar5 + 8 + iVar9 * 0x14) = 0;
              *(undefined4 *)(iVar5 + 0xc + iVar9 * 0x14) = 0;
              *(undefined4 *)(iVar5 + 0x10 + iVar9 * 0x14) = 0;
            }
            else {
              iVar9 = 1;
            }
            iVar7 = piVar1[1];
            iVar5 = *piVar1;
            if ((iVar7 == 0) || (*(char *)(iVar5 + 0x38) != '\0')) {
              FUN_0047bc80(iVar5,0xfffffff0,piVar6);
            }
            else {
              if (iVar9 < 0) {
                iVar9 = piVar1[7] + -1;
              }
              iVar4 = iVar7 + iVar9 * 0x14;
              FUN_0047bc80(iVar5,(int)*(char *)(iVar4 + 1),*(int **)(iVar7 + 0x10 + iVar9 * 0x14));
              *(undefined4 *)(iVar4 + 0x10) = 0;
              if (piVar6 == (int *)0x0) {
                *(undefined4 *)(iVar4 + 0x10) = 0;
                *(undefined1 *)(iVar4 + 1) = 0;
              }
              else {
                *(int **)(iVar4 + 0x10) = piVar6;
                *(undefined1 *)(iVar4 + 1) = 0xfa;
              }
            }
          }
        }
        local_c = local_c + 1;
        piVar8 = piVar8 + 4;
      } while (local_c < *(int *)(param_2 + 0x24));
    }
  }
  return;
}


/* FUN_0048866a @ 0048866a  kind=gamemisc  attributed-by=none  size=128 */

void __fastcall FUN_0048866a(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int unaff_EBX;
  int *piVar8;
  int unaff_EBP;
  int *unaff_ESI;
  int unaff_EDI;
  
  do {
    *(undefined4 *)(unaff_EBP + -4) = *(undefined4 *)(unaff_EBX + 0x10 + *(int *)(param_1 + 0x14));
    iVar5 = unaff_ESI[7];
    *(int *)(unaff_EBP + -8) = iVar5;
    if (iVar5 < unaff_ESI[8]) {
LAB_00488695:
      unaff_ESI[7] = unaff_ESI[7] + 1;
      uVar2 = *(undefined4 *)(unaff_EBP + -4);
      iVar6 = unaff_ESI[1];
      *(undefined2 *)(iVar6 + iVar5 * 0x14) = 10;
      *(undefined1 *)(iVar6 + 3 + iVar5 * 0x14) = 0;
      *(undefined4 *)(iVar6 + 4 + iVar5 * 0x14) = 0;
      *(undefined4 *)(iVar6 + 8 + iVar5 * 0x14) = uVar2;
      *(undefined4 *)(iVar6 + 0xc + iVar5 * 0x14) = 0;
      *(undefined4 *)(iVar6 + 0x10 + iVar5 * 0x14) = 0;
    }
    else {
      iVar5 = FUN_0047de10(unaff_ESI);
      if (iVar5 == 0) {
        iVar5 = *(int *)(unaff_EBP + -8);
        goto LAB_00488695;
      }
    }
    param_1 = *(int *)(unaff_EBP + 0xc);
    unaff_EDI = unaff_EDI + 1;
    unaff_EBX = unaff_EBX + 0x18;
    if (*(int *)(param_1 + 0x18) <= unaff_EDI) {
      iVar5 = *(int *)(param_1 + 0x24);
      piVar8 = *(int **)(param_1 + 0x20);
      *(undefined4 *)(unaff_EBP + -8) = 0;
      if (0 < iVar5) {
        do {
          iVar5 = unaff_ESI[7];
          *(int *)(unaff_EBP + -4) = piVar8[2];
          if ((iVar5 < unaff_ESI[8]) || (iVar6 = FUN_0047de10(unaff_ESI), iVar6 == 0)) {
            iVar6 = unaff_ESI[1];
            unaff_ESI[7] = unaff_ESI[7] + 1;
            uVar2 = *(undefined4 *)(unaff_EBP + -4);
            *(undefined2 *)(iVar6 + iVar5 * 0x14) = 10;
            *(undefined1 *)(iVar6 + 3 + iVar5 * 0x14) = 0;
            *(undefined4 *)(iVar6 + 4 + iVar5 * 0x14) = 0;
            *(undefined4 *)(iVar6 + 8 + iVar5 * 0x14) = uVar2;
            *(undefined4 *)(iVar6 + 0xc + iVar5 * 0x14) = 0;
            *(undefined4 *)(iVar6 + 0x10 + iVar5 * 0x14) = 0;
          }
          if (-1 < piVar8[3]) {
            puVar3 = *(uint **)(*piVar8 + 0x10);
            if ((puVar3 == (uint *)0x0) || (*puVar3 != 1)) {
              FUN_004962b0(*(int **)(unaff_EBP + 8),
                           (byte *)"DISTINCT aggregates must have exactly one argument");
              piVar8[3] = -1;
            }
            else {
              piVar7 = FUN_0047f5f0(*(int **)(unaff_EBP + 8),puVar3);
              iVar5 = unaff_ESI[7];
              *(int **)(unaff_EBP + -4) = piVar7;
              *(int *)(unaff_EBP + -0xc) = piVar8[3];
              if ((iVar5 < unaff_ESI[8]) || (iVar6 = FUN_0047de10(unaff_ESI), iVar6 == 0)) {
                iVar6 = unaff_ESI[1];
                unaff_ESI[7] = unaff_ESI[7] + 1;
                uVar2 = *(undefined4 *)(unaff_EBP + -0xc);
                *(undefined2 *)(iVar6 + iVar5 * 0x14) = 0x2a;
                *(undefined1 *)(iVar6 + 3 + iVar5 * 0x14) = 0;
                *(undefined4 *)(iVar6 + 4 + iVar5 * 0x14) = uVar2;
                *(undefined4 *)(iVar6 + 8 + iVar5 * 0x14) = 0;
                *(undefined4 *)(iVar6 + 0xc + iVar5 * 0x14) = 0;
                *(undefined4 *)(iVar6 + 0x10 + iVar5 * 0x14) = 0;
              }
              else {
                iVar5 = 1;
              }
              iVar6 = unaff_ESI[1];
              iVar4 = *unaff_ESI;
              if ((iVar6 == 0) || (*(char *)(iVar4 + 0x38) != '\0')) {
                FUN_0047bc80(iVar4,0xfffffff0,*(int **)(unaff_EBP + -4));
              }
              else {
                if (iVar5 < 0) {
                  iVar5 = unaff_ESI[7] + -1;
                }
                iVar1 = iVar6 + iVar5 * 0x14;
                FUN_0047bc80(iVar4,(int)*(char *)(iVar1 + 1),*(int **)(iVar6 + 0x10 + iVar5 * 0x14))
                ;
                iVar5 = *(int *)(unaff_EBP + -4);
                *(undefined4 *)(iVar1 + 0x10) = 0;
                if (iVar5 == 0) {
                  *(undefined4 *)(iVar1 + 0x10) = 0;
                  *(undefined1 *)(iVar1 + 1) = 0;
                }
                else {
                  *(int *)(iVar1 + 0x10) = iVar5;
                  *(undefined1 *)(iVar1 + 1) = 0xfa;
                }
              }
            }
          }
          iVar5 = *(int *)(unaff_EBP + -8) + 1;
          piVar8 = piVar8 + 4;
          *(int *)(unaff_EBP + -8) = iVar5;
        } while (iVar5 < *(int *)(*(int *)(unaff_EBP + 0xc) + 0x24));
      }
      return;
    }
  } while( true );
}


/* FUN_004886ea @ 004886ea  kind=gamemisc  attributed-by=none  size=362 */

void FUN_004886ea(void)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *unaff_EBX;
  int unaff_EBP;
  int *unaff_ESI;
  int iVar7;
  
  do {
    iVar7 = unaff_ESI[7];
    *(int *)(unaff_EBP + -4) = unaff_EBX[2];
    if (iVar7 < unaff_ESI[8]) {
LAB_0048870b:
      iVar5 = unaff_ESI[1];
      unaff_ESI[7] = unaff_ESI[7] + 1;
      uVar2 = *(undefined4 *)(unaff_EBP + -4);
      *(undefined2 *)(iVar5 + iVar7 * 0x14) = 10;
      *(undefined1 *)(iVar5 + 3 + iVar7 * 0x14) = 0;
      *(undefined4 *)(iVar5 + 4 + iVar7 * 0x14) = 0;
      *(undefined4 *)(iVar5 + 8 + iVar7 * 0x14) = uVar2;
      *(undefined4 *)(iVar5 + 0xc + iVar7 * 0x14) = 0;
      *(undefined4 *)(iVar5 + 0x10 + iVar7 * 0x14) = 0;
    }
    else {
      iVar5 = FUN_0047de10(unaff_ESI);
      if (iVar5 == 0) goto LAB_0048870b;
    }
    if (-1 < unaff_EBX[3]) {
      puVar3 = *(uint **)(*unaff_EBX + 0x10);
      if ((puVar3 == (uint *)0x0) || (*puVar3 != 1)) {
        FUN_004962b0(*(int **)(unaff_EBP + 8),
                     (byte *)"DISTINCT aggregates must have exactly one argument");
        unaff_EBX[3] = -1;
      }
      else {
        piVar6 = FUN_0047f5f0(*(int **)(unaff_EBP + 8),puVar3);
        iVar7 = unaff_ESI[7];
        *(int **)(unaff_EBP + -4) = piVar6;
        *(int *)(unaff_EBP + -0xc) = unaff_EBX[3];
        if (iVar7 < unaff_ESI[8]) {
LAB_0048878f:
          iVar5 = unaff_ESI[1];
          unaff_ESI[7] = unaff_ESI[7] + 1;
          uVar2 = *(undefined4 *)(unaff_EBP + -0xc);
          *(undefined2 *)(iVar5 + iVar7 * 0x14) = 0x2a;
          *(undefined1 *)(iVar5 + 3 + iVar7 * 0x14) = 0;
          *(undefined4 *)(iVar5 + 4 + iVar7 * 0x14) = uVar2;
          *(undefined4 *)(iVar5 + 8 + iVar7 * 0x14) = 0;
          *(undefined4 *)(iVar5 + 0xc + iVar7 * 0x14) = 0;
          *(undefined4 *)(iVar5 + 0x10 + iVar7 * 0x14) = 0;
        }
        else {
          iVar5 = FUN_0047de10(unaff_ESI);
          if (iVar5 == 0) goto LAB_0048878f;
          iVar7 = 1;
        }
        iVar5 = unaff_ESI[1];
        iVar4 = *unaff_ESI;
        if ((iVar5 == 0) || (*(char *)(iVar4 + 0x38) != '\0')) {
          FUN_0047bc80(iVar4,0xfffffff0,*(int **)(unaff_EBP + -4));
        }
        else {
          if (iVar7 < 0) {
            iVar7 = unaff_ESI[7] + -1;
          }
          iVar1 = iVar5 + iVar7 * 0x14;
          FUN_0047bc80(iVar4,(int)*(char *)(iVar1 + 1),*(int **)(iVar5 + 0x10 + iVar7 * 0x14));
          iVar7 = *(int *)(unaff_EBP + -4);
          *(undefined4 *)(iVar1 + 0x10) = 0;
          if (iVar7 == 0) {
            *(undefined4 *)(iVar1 + 0x10) = 0;
            *(undefined1 *)(iVar1 + 1) = 0;
          }
          else {
            *(int *)(iVar1 + 0x10) = iVar7;
            *(undefined1 *)(iVar1 + 1) = 0xfa;
          }
        }
      }
    }
    iVar7 = *(int *)(unaff_EBP + -8) + 1;
    unaff_EBX = unaff_EBX + 4;
    *(int *)(unaff_EBP + -8) = iVar7;
    if (*(int *)(*(int *)(unaff_EBP + 0xc) + 0x24) <= iVar7) {
      return;
    }
  } while( true );
}


/* FUN_00488860 @ 00488860  kind=gamemisc  attributed-by=none  size=393 */

void __cdecl
FUN_00488860(int *param_1,int param_2,int param_3,char *param_4,char *param_5,int param_6)

{
  char *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *_Dst;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = param_3 * 0x14;
  pcVar1 = *(char **)(iVar5 + *(int *)(param_2 + 8));
  iVar2 = *param_1;
  puVar3 = (undefined8 *)FUN_00478bb0(iVar2,(undefined4 *)pcVar1,0,(int *)0x0);
  if (puVar3 != (undefined8 *)0x0) {
    _Dst = puVar3;
    if ((*pcVar1 != -0x68) && (*param_5 != 'G')) {
      FUN_0047e2a0((int)puVar3,param_6);
      _Dst = (undefined8 *)FUN_00494b90(*param_1,0x2c);
      if (_Dst != (undefined8 *)0x0) {
        memset(_Dst,0,0x2c);
        *(undefined1 *)_Dst = 0x18;
        *(undefined2 *)((int)_Dst + 0x1e) = 0xffff;
        *(undefined4 *)((int)_Dst + 0x14) = 1;
      }
      FUN_00496a30(*param_1,(int)_Dst,(undefined4 *)puVar3,(undefined4 *)0x0);
      if ((_Dst != (undefined8 *)0x0) && (*(int *)(*param_1 + 0x5c) < *(int *)((int)_Dst + 0x14))) {
        FUN_004962b0(param_1,(byte *)"Expression tree is too large (maximum depth %d)");
      }
      if (_Dst == (undefined8 *)0x0) {
        return;
      }
      if (*(short *)(iVar5 + 0x10 + *(int *)(param_2 + 8)) == 0) {
        param_1[0x77] = param_1[0x77] + 1;
        *(short *)(iVar5 + 0x10 + *(int *)(param_2 + 8)) = (short)param_1[0x77];
      }
      *(uint *)(_Dst + 3) = (uint)*(ushort *)(iVar5 + 0x10 + *(int *)(param_2 + 8));
    }
    if (*param_4 == '\\') {
      _Dst = (undefined8 *)FUN_004963e0(param_1,(undefined4 *)_Dst,*(char **)(param_4 + 4));
    }
    *(ushort *)(param_4 + 2) = *(ushort *)(param_4 + 2) | 0x8000;
    FUN_00498790(iVar2,(undefined4 *)param_4);
    *(undefined8 *)param_4 = *_Dst;
    *(undefined8 *)(param_4 + 8) = _Dst[1];
    *(undefined8 *)(param_4 + 0x10) = _Dst[2];
    *(undefined8 *)(param_4 + 0x18) = _Dst[3];
    *(undefined8 *)(param_4 + 0x20) = _Dst[4];
    *(undefined4 *)(param_4 + 0x28) = *(undefined4 *)(_Dst + 5);
    if (((*(ushort *)(param_4 + 2) & 0x400) == 0) && (*(char **)(param_4 + 4) != (char *)0x0)) {
      puVar4 = FUN_00494db0(iVar2,*(char **)(param_4 + 4));
      param_4[0x22] = param_4[0x22] | 1;
      *(undefined4 **)(param_4 + 4) = puVar4;
    }
    FUN_00494b00(iVar2,(undefined4 *)_Dst);
  }
  return;
}


/* FUN_004889f0 @ 004889f0  kind=gamemisc  attributed-by=none  size=150 */

int __cdecl FUN_004889f0(undefined4 param_1,int *param_2,char *param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  
  if (*param_3 == '\x1a') {
    iVar4 = 0;
    if (0 < *param_2) {
      puVar6 = (undefined4 *)(param_2[2] + 4);
      do {
        pbVar3 = (byte *)*puVar6;
        if (pbVar3 != (byte *)0x0) {
          bVar2 = *pbVar3;
          pbVar5 = *(byte **)(param_3 + 4);
          while ((bVar2 != 0 && ((&DAT_00569620)[bVar2] == (&DAT_00569620)[*pbVar5]))) {
            pbVar1 = pbVar3 + 1;
            pbVar3 = pbVar3 + 1;
            pbVar5 = pbVar5 + 1;
            bVar2 = *pbVar1;
          }
          if ((&DAT_00569620)[*pbVar3] == (&DAT_00569620)[*pbVar5]) {
            return iVar4 + 1;
          }
        }
        iVar4 = iVar4 + 1;
        puVar6 = puVar6 + 5;
      } while (iVar4 < *param_2);
    }
  }
  return 0;
}


/* FUN_00488a90 @ 00488a90  kind=gamemisc  attributed-by=none  size=121 */

int __cdecl FUN_00488a90(int *param_1,char *param_2)

{
  ushort uVar1;
  undefined2 extraout_var;
  int iVar2;
  code *local_18;
  code *local_14;
  int local_8;
  
  iVar2 = 0;
  if (param_2 != (char *)0x0) {
    if (*param_2 == '\x1a') {
      *param_2 = '^';
    }
    else {
      uVar1 = FUN_004a69e0(param_1,(int)param_2);
      iVar2 = CONCAT22(extraout_var,uVar1);
      if (iVar2 == 0) {
        local_8 = 1;
        local_18 = FUN_00478e60;
        local_14 = FUN_0048b2c0;
        FUN_004bb020(&local_18,(int)param_2);
        if (local_8 == 0) {
          FUN_004962b0((int *)*param_1,(byte *)"invalid name: \"%s\"");
          return 1;
        }
      }
    }
  }
  return iVar2;
}


/* FUN_00488b10 @ 00488b10  kind=gamemisc  attributed-by=none  size=691 */

undefined4 __cdecl FUN_00488b10(int *param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined4 *_Dst;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int extraout_EDX;
  int extraout_EDX_00;
  int *piVar7;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int *local_10;
  int *local_c;
  int local_8;
  
  local_c = (int *)param_2[0xe];
  if (local_c == (int *)0x0) {
    return 0;
  }
  iVar5 = *param_1;
  local_18 = iVar5;
  if (*(int *)(iVar5 + 0x58) < *local_c) {
    FUN_004962b0(param_1,(byte *)"too many terms in ORDER BY clause");
    return 1;
  }
  iVar3 = 0;
  if (0 < *local_c) {
    iVar6 = 0;
    do {
      iVar3 = iVar3 + 1;
      *(undefined1 *)(iVar6 + 0xd + local_c[2]) = 0;
      iVar6 = iVar6 + 0x14;
    } while (iVar3 < *local_c);
  }
  piVar4 = param_2 + 0xf;
  param_2[0x10] = 0;
  iVar3 = 1;
  if (*piVar4 == 0) goto LAB_00488ba0;
  do {
    *(undefined4 **)(*piVar4 + 0x40) = param_2;
    param_2 = (undefined4 *)*piVar4;
    piVar4 = param_2 + 0xf;
  } while (param_2[0xf] != 0);
  do {
    local_10 = (int *)*param_2;
    piVar4 = (int *)local_c[2];
    local_1c = 0;
    local_14 = 0;
    piVar7 = local_c;
    if (0 < *local_c) {
      do {
        local_8 = -1;
        iVar3 = local_14;
        if (*(char *)((int)piVar4 + 0xd) == '\0') {
          for (pcVar2 = (char *)*piVar4;
              (pcVar2 != (char *)0x0 && ((*pcVar2 == '\\' || (*pcVar2 == '\x18'))));
              pcVar2 = *(char **)(pcVar2 + 8)) {
          }
          if ((*(ushort *)(pcVar2 + 2) & 0x400) == 0) {
            if (*pcVar2 == -100) {
              iVar3 = FUN_00498e90(*(char **)(pcVar2 + 8),&local_20);
              if (iVar3 == 0) goto LAB_00488c7d;
              local_8 = -local_20;
              iVar3 = extraout_EDX_00;
              goto LAB_00488c4e;
            }
            if ((*pcVar2 == -99) &&
               (iVar6 = FUN_00498e90(*(char **)(pcVar2 + 8),&local_8), iVar3 = extraout_EDX,
               iVar6 != 0)) goto LAB_00488c4e;
LAB_00488c7d:
            local_8 = FUN_004889f0(param_1,local_10,pcVar2);
            iVar3 = local_14;
            if (local_8 == 0) {
              pcVar1 = (char *)FUN_00478bb0(iVar5,(undefined4 *)pcVar2,0,(int *)0x0);
              if (*(char *)(local_18 + 0x38) == '\0') {
                local_8 = FUN_00489140(param_1,param_2,pcVar1);
              }
              iVar5 = local_18;
              FUN_00498790(local_18,(undefined4 *)pcVar1);
              iVar3 = local_14;
            }
          }
          else {
            local_8 = *(int *)(pcVar2 + 4);
LAB_00488c4e:
            if ((local_8 < 1) || (*local_10 < local_8)) {
              FUN_004962b0(param_1,(byte *)"%r %s BY term out of range - should be between 1 and %d"
                          );
              return 1;
            }
          }
          if (local_8 < 1) {
            local_1c = 1;
            piVar7 = local_c;
          }
          else {
            _Dst = FUN_00494b90(iVar5,0x2d);
            if (_Dst == (undefined4 *)0x0) {
              return 1;
            }
            memset(_Dst,0,0x2d);
            iVar5 = local_18;
            *(undefined2 *)((int)_Dst + 0x1e) = 0xffff;
            _Dst[1] = _Dst + 0xb;
            *(undefined1 *)_Dst = 0x81;
            *(undefined1 *)(_Dst + 0xb) = 0;
            *(ushort *)((int)_Dst + 2) = *(ushort *)((int)_Dst + 2) | 0x400;
            _Dst[5] = 1;
            _Dst[1] = local_8;
            if ((char *)*piVar4 == pcVar2) {
              *piVar4 = (int)_Dst;
            }
            else {
              *(undefined4 **)((char *)*piVar4 + 8) = _Dst;
            }
            FUN_00498790(local_18,(undefined4 *)pcVar2);
            *(undefined2 *)((int)piVar4 + 0xe) = (undefined2)local_8;
            *(undefined1 *)((int)piVar4 + 0xd) = 1;
            iVar3 = local_14;
            piVar7 = local_c;
          }
        }
        local_14 = iVar3 + 1;
        piVar4 = piVar4 + 5;
      } while (local_14 < *piVar7);
    }
    param_2 = (undefined4 *)param_2[0x10];
    iVar3 = local_1c;
    if (param_2 == (undefined4 *)0x0) break;
LAB_00488ba0:
  } while (iVar3 != 0);
  iVar5 = 0;
  if (0 < *local_c) {
    pcVar2 = (char *)(local_c[2] + 0xd);
    do {
      if (*pcVar2 == '\0') {
        FUN_004962b0(param_1,(byte *)"%r ORDER BY term does not match any column in the result set")
        ;
        return 1;
      }
      iVar5 = iVar5 + 1;
      pcVar2 = pcVar2 + 0x14;
    } while (iVar5 < *local_c);
  }
  return 0;
}


/* FUN_00489140 @ 00489140  kind=gamemisc  attributed-by=none  size=165 */

int __cdecl FUN_00489140(int *param_1,undefined4 *param_2,char *param_3)

{
  undefined1 uVar1;
  int *piVar2;
  char cVar3;
  ushort uVar4;
  undefined2 extraout_var_00;
  undefined3 extraout_var;
  int iVar5;
  int iVar6;
  int *local_24;
  undefined4 uStack_20;
  ulonglong local_1c;
  undefined8 local_14;
  undefined8 local_c;
  
  piVar2 = (int *)*param_2;
  iVar5 = *param_1;
  local_14 = 0;
  _local_24 = CONCAT44(param_2[10],param_1);
  local_1c = ZEXT48(piVar2);
  local_c = 0x100000000;
  uVar1 = *(undefined1 *)(iVar5 + 0x3b);
  *(undefined1 *)(iVar5 + 0x3b) = 1;
  uVar4 = FUN_004a69e0((int *)&local_24,(int)param_3);
  *(undefined1 *)(iVar5 + 0x3b) = uVar1;
  if (CONCAT22(extraout_var_00,uVar4) != 0) {
    return 0;
  }
  iVar5 = 0;
  if (0 < *piVar2) {
    iVar6 = 0;
    do {
      cVar3 = FUN_00498610(*(char **)(piVar2[2] + iVar6),param_3);
      if (CONCAT31(extraout_var,cVar3) < 2) {
        return iVar5 + 1;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0x14;
    } while (iVar5 < *piVar2);
  }
  return 0;
}


/* FUN_004891f0 @ 004891f0  kind=gamemisc  attributed-by=none  size=311 */

undefined4 __cdecl FUN_004891f0(int *param_1,undefined4 *param_2,int *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  undefined2 extraout_var_00;
  int *piVar6;
  undefined3 extraout_var;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  int local_10;
  int *local_c;
  int local_8;
  
  if (param_3 == (int *)0x0) {
    return 0;
  }
  local_c = (int *)*param_1;
  puVar8 = (undefined4 *)param_3[2];
  local_8 = 0;
  if (0 < *param_3) {
    do {
      pcVar1 = (char *)*puVar8;
      local_10 = FUN_004889f0(local_c,(int *)*param_2,pcVar1);
      pcVar2 = pcVar1;
      if (local_10 < 1) {
        for (; (pcVar2 != (char *)0x0 && ((*pcVar2 == '\\' || (*pcVar2 == '\x18'))));
            pcVar2 = *(char **)(pcVar2 + 8)) {
        }
        iVar5 = FUN_00498e90(pcVar2,&local_10);
        if (iVar5 == 0) {
          *(undefined2 *)((int)puVar8 + 0xe) = 0;
          uVar4 = FUN_004a69e0(param_1,(int)pcVar1);
          if (CONCAT22(extraout_var_00,uVar4) != 0) {
            return 1;
          }
          piVar6 = (int *)*param_2;
          iVar5 = 0;
          if (0 < *piVar6) {
            iVar9 = 0;
            do {
              cVar3 = FUN_00498610(pcVar1,*(char **)(piVar6[2] + iVar9));
              if (CONCAT31(extraout_var,cVar3) == 0) {
                *(short *)((int)puVar8 + 0xe) = (short)iVar5 + 1;
              }
              iVar5 = iVar5 + 1;
              piVar6 = (int *)*param_2;
              iVar9 = iVar9 + 0x14;
            } while (iVar5 < *piVar6);
          }
        }
        else {
          if (0xfffe < local_10 - 1U) {
            FUN_004962b0(local_c,(byte *)"%r %s BY term out of range - should be between 1 and %d");
            return 1;
          }
          *(short *)((int)puVar8 + 0xe) = (short)local_10;
        }
      }
      else {
        *(short *)((int)puVar8 + 0xe) = (short)local_10;
      }
      local_8 = local_8 + 1;
      puVar8 = puVar8 + 5;
    } while (local_8 < *param_3);
  }
  uVar7 = FUN_004a6ac0(local_c,param_2,param_3,param_4);
  return uVar7;
}


/* FUN_00489330 @ 00489330  kind=gamemisc  attributed-by=none  size=42 */

void __cdecl FUN_00489330(int *param_1,uint *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  
  uVar5 = *param_2;
  iVar2 = param_1[10];
  iVar3 = param_1[7];
  param_1[0x18] = param_1[0x18] | 0x100;
  pbVar4 = (byte *)param_1[1];
  do {
    iVar3 = iVar3 + -1;
    if (iVar3 < 0) {
      FUN_00494b00(*param_1,(undefined4 *)param_1[10]);
      param_1[10] = 0;
      *param_2 = uVar5;
      return;
    }
    bVar1 = *pbVar4;
    pbVar4[2] = (&DAT_00569830)[bVar1];
    if ((bVar1 == 0x12) || (bVar1 == 0x7b)) {
      if ((int)uVar5 < (int)(uint)pbVar4[3]) {
        uVar5 = (uint)pbVar4[3];
      }
    }
    else if (bVar1 == 0x23) {
      if (*(int *)(pbVar4 + 8) != 0) {
LAB_0048938a:
        param_1[0x18] = param_1[0x18] & 0xfffffeff;
      }
    }
    else {
      if (bVar1 == 0x7f) goto LAB_0048938a;
      if (bVar1 == 0x8c) {
        if ((int)uVar5 < (int)*(uint *)(pbVar4 + 8)) {
          uVar5 = *(uint *)(pbVar4 + 8);
        }
      }
      else if (bVar1 == 0x88) {
        if ((int)uVar5 < (int)*(uint *)(pbVar4 + -0x10)) {
          uVar5 = *(uint *)(pbVar4 + -0x10);
        }
      }
      else if ((bVar1 == 0x5f) || (bVar1 == 0x51)) {
        *(code **)(pbVar4 + 0x10) = FUN_00490c90;
        pbVar4[1] = 0xed;
      }
      else if (bVar1 == 0x5c) {
        *(code **)(pbVar4 + 0x10) = FUN_00491450;
        pbVar4[1] = 0xed;
      }
    }
    if (((pbVar4[2] & 1) != 0) && (*(int *)(pbVar4 + 8) < 0)) {
      *(undefined4 *)(pbVar4 + 8) = *(undefined4 *)(iVar2 - (*(int *)(pbVar4 + 8) * 4 + 4));
    }
    pbVar4 = pbVar4 + 0x14;
  } while( true );
}


/* FUN_0048935a @ 0048935a  kind=gamemisc  attributed-by=none  size=209 */

void FUN_0048935a(void)

{
  byte bVar1;
  uint *puVar2;
  byte *in_EAX;
  int unaff_EBX;
  int unaff_EBP;
  uint unaff_ESI;
  int *unaff_EDI;
  
  do {
    bVar1 = *in_EAX;
    in_EAX[2] = (&DAT_00569830)[bVar1];
    if ((bVar1 == 0x12) || (bVar1 == 0x7b)) {
      if ((int)unaff_ESI < (int)(uint)in_EAX[3]) {
        unaff_ESI = (uint)in_EAX[3];
      }
    }
    else if (bVar1 == 0x23) {
      if (*(int *)(in_EAX + 8) != 0) {
LAB_0048938a:
        unaff_EDI[0x18] = unaff_EDI[0x18] & 0xfffffeff;
      }
    }
    else {
      if (bVar1 == 0x7f) goto LAB_0048938a;
      if (bVar1 == 0x8c) {
        if ((int)unaff_ESI < (int)*(uint *)(in_EAX + 8)) {
          unaff_ESI = *(uint *)(in_EAX + 8);
        }
      }
      else if (bVar1 == 0x88) {
        if ((int)unaff_ESI < (int)*(uint *)(in_EAX + -0x10)) {
          unaff_ESI = *(uint *)(in_EAX + -0x10);
        }
      }
      else if ((bVar1 == 0x5f) || (bVar1 == 0x51)) {
        *(code **)(in_EAX + 0x10) = FUN_00490c90;
        in_EAX[1] = 0xed;
      }
      else if (bVar1 == 0x5c) {
        *(code **)(in_EAX + 0x10) = FUN_00491450;
        in_EAX[1] = 0xed;
      }
    }
    if (((in_EAX[2] & 1) != 0) && (*(int *)(in_EAX + 8) < 0)) {
      *(undefined4 *)(in_EAX + 8) =
           *(undefined4 *)(*(int *)(unaff_EBP + 8) - (*(int *)(in_EAX + 8) * 4 + 4));
    }
    in_EAX = in_EAX + 0x14;
    unaff_EBX = unaff_EBX + -1;
    if (unaff_EBX < 0) {
      FUN_00494b00(*unaff_EDI,(undefined4 *)unaff_EDI[10]);
      puVar2 = *(uint **)(unaff_EBP + 0xc);
      unaff_EDI[10] = 0;
      *puVar2 = unaff_ESI;
      return;
    }
  } while( true );
}


/* FUN_00489430 @ 00489430  kind=gamemisc  attributed-by=none  size=234 */

undefined4 __cdecl FUN_00489430(int param_1,undefined4 *param_2)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  ushort uVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  byte bVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  undefined8 local_54;
  undefined8 local_4c;
  ulonglong local_44;
  undefined8 local_3c;
  code *local_34;
  code *local_30;
  int *local_2c;
  int local_24;
  undefined4 *local_20;
  int local_1c;
  uint local_18;
  int *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if ((*(ushort *)((int)param_2 + 6) & 2) != 0) {
    return 1;
  }
  local_c = *(int *)(param_1 + 0x10);
  piVar2 = *(int **)(param_1 + 8);
  local_8 = *piVar2;
  if ((*(ushort *)((int)param_2 + 6) & 0x10) == 0) {
    FUN_004a99a0(piVar2,param_2,local_c);
    if (piVar2[0x11] == 0) {
      if (*(char *)(local_8 + 0x38) != '\0') {
        return 2;
      }
      return 1;
    }
  }
  else {
    local_20 = param_2;
    local_18 = (uint)(param_2[0xf] != 0);
    do {
      iVar8 = local_c;
      *(ushort *)((int)param_2 + 6) = *(ushort *)((int)param_2 + 6) | 2;
      local_4c = 0;
      local_44 = 0;
      local_3c = 0;
      local_54 = ZEXT48(piVar2);
      uVar4 = FUN_004a69e0((int *)&local_54,param_2[0x12]);
      if (CONCAT22(extraout_var,uVar4) != 0) {
        return 2;
      }
      uVar4 = FUN_004a69e0((int *)&local_54,param_2[0x13]);
      if (CONCAT22(extraout_var_00,uVar4) != 0) {
        return 2;
      }
      local_3c._0_5_ = CONCAT14(1,(undefined4)local_3c);
      local_54 = CONCAT44(param_2[10],(int)local_54);
      local_44 = CONCAT44(local_44._4_4_,iVar8);
      local_14 = (int *)*param_2;
      iVar8 = 0;
      bVar5 = 0;
      if (0 < *local_14) {
        iVar7 = 0;
        do {
          uVar4 = FUN_004a69e0((int *)&local_54,*(int *)(iVar7 + local_14[2]));
          if (CONCAT22(extraout_var_01,uVar4) != 0) {
            return 2;
          }
          iVar8 = iVar8 + 1;
          iVar7 = iVar7 + 0x14;
        } while (iVar8 < *local_14);
        bVar5 = local_3c._4_1_;
      }
      local_10 = 0;
      if (0 < *(short *)param_2[10]) {
        local_14 = (int *)0x0;
        do {
          piVar3 = local_14;
          iVar8 = param_2[10];
          if (*(int *)((int)local_14 + iVar8 + 0x1c) != 0) {
            local_1c = piVar2[0x81];
            iVar9 = 0;
            for (iVar7 = local_c; iVar7 != 0; iVar7 = *(int *)(iVar7 + 0x10)) {
              iVar9 = iVar9 + *(int *)(iVar7 + 0x14);
            }
            iVar7 = *(int *)((int)local_14 + iVar8 + 0x10);
            if (iVar7 != 0) {
              piVar2[0x81] = iVar7;
            }
            local_34 = FUN_00488dd0;
            local_30 = FUN_00489430;
            local_24 = local_c;
            local_2c = piVar2;
            FUN_004bb100((int)&local_34,*(undefined4 **)((int)local_14 + iVar8 + 0x1c));
            piVar2[0x81] = local_1c;
            if (piVar2[0x11] != 0) {
              return 2;
            }
            iVar7 = local_c;
            if (*(char *)(local_8 + 0x38) != '\0') {
              return 2;
            }
            for (; iVar7 != 0; iVar7 = *(int *)(iVar7 + 0x10)) {
              iVar9 = iVar9 - *(int *)(iVar7 + 0x14);
            }
            puVar1 = (uint *)((int)piVar3 + iVar8 + 0x2c);
            *puVar1 = *puVar1 ^ ((uint)(iVar9 != 0) * 2 ^ *(uint *)((int)piVar3 + iVar8 + 0x2c)) & 2
            ;
          }
          local_10 = local_10 + 1;
          local_14 = local_14 + 0x12;
        } while (local_10 < *(short *)param_2[10]);
        bVar5 = local_3c._4_1_;
      }
      piVar3 = (int *)param_2[0xc];
      if ((piVar3 == (int *)0x0) && ((bVar5 & 2) == 0)) {
        local_3c = CONCAT35(local_3c._5_3_,CONCAT14(bVar5,(undefined4)local_3c)) &
                   0xfffffffeffffffff;
      }
      else {
        *(ushort *)((int)param_2 + 6) = *(ushort *)((int)param_2 + 6) | 4;
      }
      if ((param_2[0xd] != 0) && (piVar3 == (int *)0x0)) {
        pcVar10 = "a GROUP BY clause is required before HAVING";
LAB_00489707:
        FUN_004962b0(piVar2,(byte *)pcVar10);
        return 2;
      }
      local_4c = CONCAT44(local_4c._4_4_,*param_2);
      uVar4 = FUN_004a69e0((int *)&local_54,param_2[0xb]);
      if (CONCAT22(extraout_var_02,uVar4) != 0) {
        return 2;
      }
      uVar4 = FUN_004a69e0((int *)&local_54,param_2[0xd]);
      if (CONCAT22(extraout_var_03,uVar4) != 0) {
        return 2;
      }
      local_3c = local_3c | 0x100000000;
      local_44 = local_44 & 0xffffffff00000000;
      if ((local_18 == 0) &&
         (iVar8 = FUN_004891f0((int *)&local_54,param_2,(int *)param_2[0xe],"ORDER"), iVar8 != 0)) {
        return 2;
      }
      iVar8 = local_8;
      if (*(char *)(local_8 + 0x38) != '\0') {
        return 2;
      }
      if (piVar3 != (int *)0x0) {
        iVar7 = FUN_004891f0((int *)&local_54,param_2,piVar3,"GROUP");
        if (iVar7 != 0) {
          return 2;
        }
        if (*(char *)(iVar8 + 0x38) != '\0') {
          return 2;
        }
        piVar6 = (int *)piVar3[2];
        iVar8 = 0;
        if (0 < *piVar3) {
          do {
            if ((*(byte *)(*piVar6 + 2) & 2) != 0) {
              pcVar10 = "aggregate functions are not allowed in the GROUP BY clause";
              goto LAB_00489707;
            }
            iVar8 = iVar8 + 1;
            piVar6 = piVar6 + 5;
          } while (iVar8 < *piVar3);
        }
      }
      param_2 = (undefined4 *)param_2[0xf];
    } while (param_2 != (undefined4 *)0x0);
    if ((local_18 == 0) || (iVar8 = FUN_00488b10(piVar2,local_20), iVar8 == 0)) {
      return 1;
    }
  }
  return 2;
}


/* FUN_0048951a @ 0048951a  kind=gamemisc  attributed-by=none  size=559 */

undefined4 FUN_0048951a(void)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ushort uVar8;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  int *in_EAX;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  byte bVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int unaff_EBX;
  int iVar13;
  int unaff_EBP;
  int unaff_ESI;
  int iVar14;
  undefined4 *unaff_EDI;
  char *pcVar15;
  
  do {
    do {
      uVar8 = FUN_004a69e0((int *)(unaff_EBP + -0x50),*(int *)(unaff_EBX + in_EAX[2]));
      if (CONCAT22(extraout_var_01,uVar8) != 0) {
        return 2;
      }
      in_EAX = *(int **)(unaff_EBP + -0x10);
      unaff_ESI = unaff_ESI + 1;
      unaff_EBX = unaff_EBX + 0x14;
    } while (unaff_ESI < *in_EAX);
    bVar9 = *(byte *)(unaff_EBP + -0x34);
    do {
      psVar2 = (short *)unaff_EDI[10];
      iVar12 = 0;
      *(undefined4 *)(unaff_EBP + -0xc) = 0;
      if (0 < *psVar2) {
        iVar10 = 0;
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        do {
          iVar13 = unaff_EDI[10] + iVar10;
          if (*(int *)(iVar13 + 0x1c) != 0) {
            iVar12 = *(int *)(unaff_EBP + 0xc);
            iVar10 = *(int *)(unaff_EBP + -8);
            iVar14 = 0;
            *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(iVar12 + 0x204);
            for (iVar3 = iVar10; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x10)) {
              iVar14 = iVar14 + *(int *)(iVar3 + 0x14);
            }
            if (*(int *)(iVar13 + 0x10) != 0) {
              *(int *)(iVar12 + 0x204) = *(int *)(iVar13 + 0x10);
            }
            puVar4 = *(undefined4 **)(iVar13 + 0x1c);
            *(code **)(unaff_EBP + -0x30) = FUN_00488dd0;
            *(code **)(unaff_EBP + -0x2c) = FUN_00489430;
            *(int *)(unaff_EBP + -0x28) = iVar12;
            *(int *)(unaff_EBP + -0x20) = iVar10;
            FUN_004bb100(unaff_EBP + -0x30,puVar4);
            iVar12 = *(int *)(unaff_EBP + 0xc);
            *(undefined4 *)(iVar12 + 0x204) = *(undefined4 *)(unaff_EBP + -0x18);
            if (*(int *)(iVar12 + 0x44) != 0) {
              return 2;
            }
            if (*(char *)(*(int *)(unaff_EBP + -4) + 0x38) != '\0') {
              return 2;
            }
            for (iVar12 = *(int *)(unaff_EBP + -8); iVar12 != 0; iVar12 = *(int *)(iVar12 + 0x10)) {
              iVar14 = iVar14 - *(int *)(iVar12 + 0x14);
            }
            iVar10 = *(int *)(unaff_EBP + -0x10);
            iVar12 = *(int *)(unaff_EBP + -0xc);
            *(uint *)(iVar13 + 0x2c) =
                 *(uint *)(iVar13 + 0x2c) ^ ((uint)(iVar14 != 0) * 2 ^ *(uint *)(iVar13 + 0x2c)) & 2
            ;
          }
          iVar12 = iVar12 + 1;
          sVar1 = *(short *)unaff_EDI[10];
          iVar10 = iVar10 + 0x48;
          *(int *)(unaff_EBP + -0xc) = iVar12;
          *(int *)(unaff_EBP + -0x10) = iVar10;
        } while (iVar12 < sVar1);
        bVar9 = *(byte *)(unaff_EBP + -0x34);
      }
      piVar5 = (int *)unaff_EDI[0xc];
      if ((piVar5 == (int *)0x0) && ((bVar9 & 2) == 0)) {
        *(byte *)(unaff_EBP + -0x34) = bVar9 & 0xfe;
      }
      else {
        *(ushort *)((int)unaff_EDI + 6) = *(ushort *)((int)unaff_EDI + 6) | 4;
      }
      if ((unaff_EDI[0xd] != 0) && (piVar5 == (int *)0x0)) {
        pcVar15 = "a GROUP BY clause is required before HAVING";
LAB_00489707:
        FUN_004962b0(*(int **)(unaff_EBP + 0xc),(byte *)pcVar15);
        return 2;
      }
      *(undefined4 *)(unaff_EBP + -0x48) = *unaff_EDI;
      uVar8 = FUN_004a69e0((int *)(unaff_EBP + -0x50),unaff_EDI[0xb]);
      if (CONCAT22(extraout_var_02,uVar8) != 0) {
        return 2;
      }
      uVar8 = FUN_004a69e0((int *)(unaff_EBP + -0x50),unaff_EDI[0xd]);
      if (CONCAT22(extraout_var_03,uVar8) != 0) {
        return 2;
      }
      *(byte *)(unaff_EBP + -0x34) = *(byte *)(unaff_EBP + -0x34) | 1;
      *(undefined4 *)(unaff_EBP + -0x40) = 0;
      if ((*(int *)(unaff_EBP + -0x14) == 0) &&
         (iVar12 = FUN_004891f0((int *)(unaff_EBP + -0x50),unaff_EDI,(int *)unaff_EDI[0xe],"ORDER"),
         iVar12 != 0)) {
        return 2;
      }
      iVar12 = *(int *)(unaff_EBP + -4);
      if (*(char *)(iVar12 + 0x38) != '\0') {
        return 2;
      }
      if (piVar5 != (int *)0x0) {
        iVar10 = FUN_004891f0((int *)(unaff_EBP + -0x50),unaff_EDI,piVar5,"GROUP");
        if (iVar10 != 0) {
          return 2;
        }
        if (*(char *)(iVar12 + 0x38) != '\0') {
          return 2;
        }
        piVar11 = (int *)piVar5[2];
        iVar12 = 0;
        if (0 < *piVar5) {
          do {
            if ((*(byte *)(*piVar11 + 2) & 2) != 0) {
              pcVar15 = "aggregate functions are not allowed in the GROUP BY clause";
              goto LAB_00489707;
            }
            iVar12 = iVar12 + 1;
            piVar11 = piVar11 + 5;
          } while (iVar12 < *piVar5);
        }
      }
      unaff_EDI = (undefined4 *)unaff_EDI[0xf];
      if (unaff_EDI == (undefined4 *)0x0) {
        if ((*(int *)(unaff_EBP + -0x14) != 0) &&
           (iVar12 = FUN_00488b10(*(int **)(unaff_EBP + 0xc),*(undefined4 **)(unaff_EBP + -0x1c)),
           iVar12 != 0)) {
          return 2;
        }
        return 1;
      }
      uVar6 = *(undefined4 *)(unaff_EBP + -8);
      uVar7 = *(undefined4 *)(unaff_EBP + 0xc);
      *(ushort *)((int)unaff_EDI + 6) = *(ushort *)((int)unaff_EDI + 6) | 2;
      *(undefined8 *)(unaff_EBP + -0x50) = 0;
      *(undefined8 *)(unaff_EBP + -0x48) = 0;
      *(undefined8 *)(unaff_EBP + -0x40) = 0;
      *(undefined8 *)(unaff_EBP + -0x38) = 0;
      *(undefined4 *)(unaff_EBP + -0x50) = uVar7;
      uVar8 = FUN_004a69e0((int *)(unaff_EBP + -0x50),unaff_EDI[0x12]);
      if (CONCAT22(extraout_var,uVar8) != 0) {
        return 2;
      }
      uVar8 = FUN_004a69e0((int *)(unaff_EBP + -0x50),unaff_EDI[0x13]);
      if (CONCAT22(extraout_var_00,uVar8) != 0) {
        return 2;
      }
      bVar9 = 0;
      *(undefined1 *)(unaff_EBP + -0x34) = 1;
      *(undefined4 *)(unaff_EBP + -0x4c) = unaff_EDI[10];
      *(undefined4 *)(unaff_EBP + -0x40) = uVar6;
      in_EAX = (int *)*unaff_EDI;
      unaff_ESI = 0;
      *(int **)(unaff_EBP + -0x10) = in_EAX;
    } while (*in_EAX < 1);
    unaff_EBX = 0;
  } while( true );
}


/* FUN_00489750 @ 00489750  kind=gamemisc  attributed-by=none  size=369 */

void __cdecl FUN_00489750(int *param_1,void *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  piVar4 = (int *)param_1[2];
  if (piVar4 == (int *)0x0) {
    piVar4 = FUN_004af150(*param_1);
    param_1[2] = (int)piVar4;
    if (piVar4 != (int *)0x0) {
      FUN_004ae760(piVar4,0x94);
    }
  }
  param_1[0x13] = param_1[0x13] + 1;
  iVar2 = param_1[0x13];
  piVar5 = FUN_00494b90(*param_1,8);
  if (piVar5 != (int *)0x0) {
    *piVar5 = param_3;
    piVar5[1] = param_4;
  }
  iVar7 = piVar4[7];
  if ((iVar7 < piVar4[8]) || (iVar6 = FUN_0047de10(piVar4), iVar6 == 0)) {
    iVar6 = piVar4[1];
    piVar4[7] = piVar4[7] + 1;
    *(undefined2 *)(iVar6 + iVar7 * 0x14) = 8;
    *(undefined1 *)(iVar6 + 3 + iVar7 * 0x14) = 0;
    *(undefined4 *)(iVar6 + 4 + iVar7 * 0x14) = 0;
    *(int *)(iVar6 + 8 + iVar7 * 0x14) = iVar2;
    *(undefined4 *)(iVar6 + 0xc + iVar7 * 0x14) = 0;
    *(undefined4 *)(iVar6 + 0x10 + iVar7 * 0x14) = 0;
  }
  else {
    iVar7 = 1;
  }
  iVar6 = piVar4[1];
  iVar3 = *piVar4;
  if ((iVar6 == 0) || (*(char *)(iVar3 + 0x38) != '\0')) {
    FUN_0047bc80(iVar3,0xfffffff3,piVar5);
  }
  else {
    if (iVar7 < 0) {
      iVar7 = piVar4[7] + -1;
    }
    iVar1 = iVar6 + iVar7 * 0x14;
    FUN_0047bc80(iVar3,(int)*(char *)(iVar1 + 1),*(int **)(iVar6 + 0x10 + iVar7 * 0x14));
    *(undefined4 *)(iVar1 + 0x10) = 0;
    if (piVar5 == (int *)0x0) {
      *(undefined4 *)(iVar1 + 0x10) = 0;
      *(undefined1 *)(iVar1 + 1) = 0;
    }
    else {
      *(int **)(iVar1 + 0x10) = piVar5;
      *(undefined1 *)(iVar1 + 1) = 0xf3;
    }
  }
  FUN_004b8c50(piVar4,1);
  if (*(char *)(*piVar4 + 0x38) == '\0') {
    FUN_004b79e0((int *)piVar4[4],param_2,0xffffffff,'\x01',(undefined *)0x0);
  }
  iVar7 = piVar4[7];
  if ((piVar4[8] <= iVar7) && (iVar6 = FUN_0047de10(piVar4), iVar6 != 0)) {
    return;
  }
  iVar6 = piVar4[1];
  piVar4[7] = piVar4[7] + 1;
  *(undefined2 *)(iVar6 + iVar7 * 0x14) = 0x10;
  *(undefined1 *)(iVar6 + 3 + iVar7 * 0x14) = 0;
  *(int *)(iVar6 + 4 + iVar7 * 0x14) = iVar2;
  *(undefined4 *)(iVar6 + 8 + iVar7 * 0x14) = 1;
  *(undefined4 *)(iVar6 + 0xc + iVar7 * 0x14) = 0;
  *(undefined4 *)(iVar6 + 0x10 + iVar7 * 0x14) = 0;
  return;
}


/* FUN_004898d0 @ 004898d0  kind=gamemisc  attributed-by=none  size=108 */

undefined4 __cdecl FUN_004898d0(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint local_14 [2];
  undefined4 local_c;
  
  puVar2 = local_14;
  do {
    if (param_1 == (uint *)0x0) {
LAB_00489908:
      puVar2[2] = (uint)param_2;
      return local_c;
    }
    if (param_2 == (uint *)0x0) {
      if (param_1 != (uint *)0x0) {
        puVar2[2] = (uint)param_1;
        return local_c;
      }
      goto LAB_00489908;
    }
    uVar1 = param_1[1];
    if (((int)param_2[1] < (int)uVar1) ||
       (((int)param_2[1] <= (int)uVar1 && (*param_2 <= *param_1)))) {
      if (((int)uVar1 < (int)param_2[1]) ||
         (((int)uVar1 <= (int)param_2[1] && (*param_1 <= *param_2)))) goto LAB_00489901;
      puVar2[2] = (uint)param_2;
      param_2 = (uint *)param_2[2];
      puVar2 = (uint *)puVar2[2];
    }
    else {
      puVar2[2] = (uint)param_1;
      puVar2 = param_1;
LAB_00489901:
      param_1 = (uint *)param_1[2];
    }
  } while( true );
}


/* FUN_00489940 @ 00489940  kind=gamemisc  attributed-by=none  size=242 */

void __cdecl FUN_00489940(uint *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint local_bc [40];
  uint local_1c [2];
  uint *local_14;
  uint *local_c;
  uint *local_8;
  
  memset(local_bc,0,0xa0);
  puVar3 = param_1;
  do {
    if (puVar3 == (uint *)0x0) {
      puVar3 = (uint *)0x0;
      uVar5 = 0;
      do {
        puVar3 = (uint *)FUN_004898d0(puVar3,(uint *)local_bc[uVar5]);
        uVar5 = uVar5 + 1;
      } while (uVar5 < 0x28);
      return;
    }
    puVar4 = (uint *)0x0;
    local_c = (uint *)puVar3[2];
    puVar3[2] = 0;
    param_1 = (uint *)0x0;
    if (local_bc[0] != 0) {
      local_8 = local_bc;
      do {
        puVar1 = (uint *)*local_8;
        puVar4 = local_1c;
        puVar2 = local_8;
        while (puVar1 != (uint *)0x0) {
          if (puVar3 == (uint *)0x0) {
            if (puVar1 != (uint *)0x0) {
              puVar4[2] = (uint)puVar1;
              goto LAB_004899cf;
            }
            break;
          }
          uVar5 = puVar1[1];
          local_8 = puVar2;
          if (((int)puVar3[1] < (int)uVar5) ||
             (((int)puVar3[1] <= (int)uVar5 && (*puVar3 <= *puVar1)))) {
            if (((int)uVar5 < (int)puVar3[1]) ||
               (((int)uVar5 <= (int)puVar3[1] && (*puVar1 <= *puVar3)))) goto LAB_004899bf;
            puVar4[2] = (uint)puVar3;
            puVar3 = (uint *)puVar3[2];
            puVar4 = (uint *)puVar4[2];
            puVar2 = local_8;
          }
          else {
            puVar4[2] = (uint)puVar1;
            puVar4 = puVar1;
LAB_004899bf:
            puVar1 = (uint *)puVar1[2];
            puVar2 = local_8;
          }
        }
        puVar4[2] = (uint)puVar3;
LAB_004899cf:
        puVar3 = local_14;
        *puVar2 = 0;
        puVar4 = (uint *)((int)param_1 + 1);
        local_8 = local_bc + (int)puVar4;
        param_1 = puVar4;
      } while (local_bc[(int)puVar4] != 0);
    }
    puVar1 = local_c;
    local_bc[(int)puVar4] = (uint)puVar3;
    puVar3 = puVar1;
  } while( true );
}


/* FUN_00489a0a @ 00489a0a  kind=gamemisc  attributed-by=none  size=33 */

void FUN_00489a0a(void)

{
  uint *in_EAX;
  int unaff_EBP;
  uint unaff_ESI;
  
  do {
    in_EAX = (uint *)FUN_004898d0(in_EAX,*(uint **)(unaff_EBP + -0xb8 + unaff_ESI * 4));
    unaff_ESI = unaff_ESI + 1;
  } while (unaff_ESI < 0x28);
  return;
}


/* FUN_00489a60 @ 00489a60  kind=gamemisc  attributed-by=none  size=166 */

int __cdecl FUN_00489a60(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar4;
  int iVar5;
  
  iVar5 = 1;
  iVar3 = *(int *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar4 = param_1;
  while (iVar2 = iVar3, iVar2 != 0) {
    param_1 = *(int *)(iVar2 + 8);
    *(int *)(iVar2 + 0xc) = iVar4;
    iVar3 = param_1;
    iVar4 = iVar2;
    if (param_1 != 0) {
      if (iVar5 == 1) {
        iVar1 = *(int *)(param_1 + 8);
        *(undefined4 *)(param_1 + 8) = 0;
        *(undefined4 *)(param_1 + 0xc) = 0;
        param_1 = iVar1;
      }
      else {
        iVar3 = FUN_00489b10(&param_1,iVar5 + -1);
        iVar1 = param_1;
        iVar4 = extraout_EDX;
        if (param_1 != 0) {
          *(int *)(param_1 + 0xc) = iVar3;
          param_1 = *(int *)(param_1 + 8);
          iVar3 = FUN_00489b10(&param_1,iVar5 + -1);
          *(int *)(iVar1 + 8) = iVar3;
          iVar3 = iVar1;
          iVar4 = extraout_EDX_00;
        }
      }
    }
    *(int *)(iVar4 + 8) = iVar3;
    iVar5 = iVar5 + 1;
    iVar3 = param_1;
    iVar4 = iVar2;
  }
  return iVar4;
}


/* FUN_00489b10 @ 00489b10  kind=gamemisc  attributed-by=none  size=95 */

int __cdecl FUN_00489b10(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    return iVar1;
  }
  if (param_2 == 1) {
    *param_1 = *(int *)(iVar1 + 8);
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    return iVar1;
  }
  iVar2 = FUN_00489b10(param_1,param_2 + -1);
  iVar1 = *param_1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0xc) = iVar2;
    *param_1 = *(int *)(iVar1 + 8);
    iVar2 = FUN_00489b10(param_1,param_2 + -1);
    *(int *)(iVar1 + 8) = iVar2;
    iVar2 = iVar1;
  }
  return iVar2;
}


/* FUN_00489b70 @ 00489b70  kind=gamemisc  attributed-by=none  size=69 */

void __cdecl FUN_00489b70(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_2;
  iVar1 = param_1;
  do {
    iVar3 = iVar1;
    if (*(int *)(iVar3 + 0xc) == 0) {
      *piVar2 = iVar3;
    }
    else {
      FUN_00489b70(*(int *)(iVar3 + 0xc),piVar2,&param_1);
      *(int *)(param_1 + 8) = iVar3;
    }
    piVar2 = (int *)(iVar3 + 8);
    iVar1 = *(int *)(iVar3 + 8);
  } while (*(int *)(iVar3 + 8) != 0);
  *param_3 = iVar3;
  return;
}


/* FUN_00489bc0 @ 00489bc0  kind=gamemisc  attributed-by=none  size=68 */

uint __cdecl FUN_00489bc0(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 8);
  while( true ) {
    if (uVar1 == 0) {
      return 0;
    }
    if (((uVar1 != param_3) &&
        (((param_2 == 0 || (*(int *)(uVar1 + 0x18) == param_2)) &&
         (*(char *)(uVar1 + 0x5b) == '\x01')))) && (uVar2 = FUN_00489c10(uVar1), uVar2 != 0)) break;
    uVar1 = *(uint *)(uVar1 + 8);
  }
  return uVar2;
}


/* FUN_00489d30 @ 00489d30  kind=gamemisc  attributed-by=none  size=724 */

void __cdecl FUN_00489d30(int *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint *puVar9;
  code *pcVar10;
  int iVar11;
  int iVar12;
  ushort uVar13;
  uint uVar14;
  int local_10;
  int local_c;
  
  local_c = 0;
  iVar5 = *param_1;
  if (*(int *)(iVar5 + 0x14) < 1) {
    return;
  }
  local_10 = 0;
LAB_00489d57:
  uVar14 = 0;
  piVar6 = *(int **)(local_10 + 4 + *(int *)(iVar5 + 0x10));
  if (piVar6 != (int *)0x0) {
    if ((char)piVar6[2] == '\0') {
      piVar7 = (int *)piVar6[1];
      FUN_0048fbc0(piVar6);
      if (((char)piVar6[2] != '\x02') && ((char)piVar6[2] != '\x01')) {
        if (((*(ushort *)((int)piVar7 + 0x16) & 0x40) == 0) || (*(int *)piVar7[0x13] == 0)) {
          iVar11 = piVar6[1];
          if (*(char *)((int)piVar6 + 9) == '\0') {
LAB_00489de8:
            uVar14 = 0;
            uVar13 = *(ushort *)((int)piVar7 + 0x16) & 0xfff7;
            *(ushort *)((int)piVar7 + 0x16) = uVar13;
            if (piVar7[0xb] == 0) {
              *(ushort *)((int)piVar7 + 0x16) = uVar13 | 8;
            }
LAB_00489e00:
            if (piVar7[3] == 0) goto code_r0x00489e06;
            if (uVar14 != 0) goto LAB_00489e1b;
            goto LAB_00489e57;
          }
          if ((*(int **)(iVar11 + 0x4c) == piVar6) || ((*(byte *)(iVar11 + 0x16) & 0x20) == 0)) {
            for (puVar8 = *(undefined4 **)(iVar11 + 0x48); puVar8 != (undefined4 *)0x0;
                puVar8 = (undefined4 *)puVar8[3]) {
              if ((((int *)*puVar8 != piVar6) && (puVar8[1] == 1)) &&
                 (*(char *)(puVar8 + 2) != '\x01')) goto LAB_00489da3;
            }
            goto LAB_00489de8;
          }
          uVar14 = 0x106;
        }
        else {
LAB_00489da3:
          uVar14 = 0x106;
        }
      }
      goto LAB_00489ec8;
    }
    goto LAB_00489f0c;
  }
  goto LAB_00489fe1;
code_r0x00489e06:
  uVar14 = FUN_0047fc00(piVar7);
  if (uVar14 != 0) {
LAB_00489e1b:
    if ((*(char *)((int)piVar7 + 0x13) == '\0') && (piVar7[3] != 0)) {
      puVar8 = *(undefined4 **)(piVar7[3] + 0x44);
      if (puVar8 != (undefined4 *)0x0) {
        puVar9 = (uint *)puVar8[4];
        FUN_004a3a80(puVar8);
        if (*(int *)(puVar9[0x2d] + 0xc) == 0) {
          FUN_00484370(puVar9);
        }
      }
      piVar7[3] = 0;
    }
LAB_00489e57:
    if (((char)uVar14 != '\x05') || (*(char *)((int)piVar7 + 0x13) != '\0')) goto LAB_00489e96;
    iVar11 = piVar7[1];
    if (((undefined4 *)(iVar11 + 0x1ac) == (undefined4 *)0x0) ||
       ((pcVar10 = *(code **)(iVar11 + 0x1ac), pcVar10 == (code *)0x0 ||
        (*(int *)(iVar11 + 0x1b4) < 0)))) goto LAB_00489e96;
    iVar12 = (*pcVar10)(*(undefined4 *)(iVar11 + 0x1b0),*(int *)(iVar11 + 0x1b4));
    if (iVar12 == 0) goto LAB_00489e8f;
    *(int *)(iVar11 + 0x1b4) = *(int *)(iVar11 + 0x1b4) + 1;
  }
  goto LAB_00489e00;
LAB_00489e8f:
  *(undefined4 *)(iVar11 + 0x1b4) = 0xffffffff;
LAB_00489e96:
  if (uVar14 == 0) {
    if (((char)piVar6[2] == '\0') &&
       (piVar7[10] = piVar7[10] + 1, *(char *)((int)piVar6 + 9) != '\0')) {
      *(undefined1 *)(piVar6 + 9) = 1;
      piVar6[10] = piVar7[0x12];
      piVar7[0x12] = (int)(piVar6 + 7);
    }
    *(undefined1 *)(piVar6 + 2) = 1;
    if (*(char *)((int)piVar7 + 0x13) == '\0') {
      *(undefined1 *)((int)piVar7 + 0x13) = 1;
    }
  }
LAB_00489ec8:
  if (*(char *)((int)piVar6 + 9) != '\0') {
    piVar7 = piVar6 + 3;
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      if (*(int *)(piVar6[1] + 0x38) != 0) {
        (*DAT_00582b20)(*(int *)(piVar6[1] + 0x38));
      }
      *(undefined1 *)((int)piVar6 + 10) = 0;
    }
  }
  if ((uVar14 == 7) || (uVar14 == 0xc0a)) {
    *(undefined1 *)(iVar5 + 0x38) = 1;
  }
  if (uVar14 != 0) {
    return;
  }
  uVar14 = 1;
LAB_00489f0c:
  iVar11 = piVar6[1];
  FUN_0048fbc0(piVar6);
  iVar11 = *(int *)(*(int *)(iVar11 + 0xc) + 0x38);
  uVar1 = *(undefined1 *)(iVar11 + 0x28);
  uVar2 = *(undefined1 *)(iVar11 + 0x29);
  uVar3 = *(undefined1 *)(iVar11 + 0x2a);
  uVar4 = *(undefined1 *)(iVar11 + 0x2b);
  if (*(char *)((int)piVar6 + 9) != '\0') {
    piVar7 = piVar6 + 3;
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      if (*(int *)(piVar6[1] + 0x38) != 0) {
        (*DAT_00582b20)(*(int *)(piVar6[1] + 0x38));
      }
      *(undefined1 *)((int)piVar6 + 10) = 0;
    }
  }
  piVar7 = *(int **)(local_10 + 0xc + *(int *)(iVar5 + 0x10));
  if (CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),uVar4) != *piVar7) {
    FUN_004a7960((int)piVar7);
    if (local_c != 1) {
      FUN_004a7960(*(int *)(*(int *)(iVar5 + 0x10) + 0x1c));
    }
    param_1[3] = 0x11;
  }
  if (uVar14 != 0) {
    FUN_0048fbc0(piVar6);
    uVar14 = FUN_0048f2f0(piVar6,(char *)0x0);
    if (uVar14 == 0) {
      FUN_0048f390(piVar6,0);
    }
    if (*(char *)((int)piVar6 + 9) != '\0') {
      piVar7 = piVar6 + 3;
      *piVar7 = *piVar7 + -1;
      if (*piVar7 == 0) {
        if (*(int *)(piVar6[1] + 0x38) != 0) {
          (*DAT_00582b20)(*(int *)(piVar6[1] + 0x38));
        }
        *(undefined1 *)((int)piVar6 + 10) = 0;
      }
    }
  }
LAB_00489fe1:
  local_c = local_c + 1;
  local_10 = local_10 + 0x10;
  if (*(int *)(iVar5 + 0x14) <= local_c) {
    return;
  }
  goto LAB_00489d57;
}


/* FUN_0048a010 @ 0048a010  kind=gamemisc  attributed-by=none  size=105 */

undefined4 __cdecl FUN_0048a010(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint local_8;
  
  local_8 = param_3 & 0x7fffffff;
  iVar1 = (*(code *)PTR_SetFilePointer_005837dc)(*(undefined4 *)(param_1 + 8),param_2,&local_8,0);
  if (iVar1 == -1) {
    iVar1 = (*(code *)PTR_GetLastError_005836a4)();
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x14) = iVar1;
      FUN_004c23f0(0x160a,iVar1);
      return 1;
    }
  }
  return 0;
}


/* FUN_0048a080 @ 0048a080  kind=gamemisc  attributed-by=none  size=313 */

void __cdecl FUN_0048a080(int *param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 *puVar5;
  char *pcVar6;
  longlong local_34 [4];
  char *local_14;
  size_t local_10;
  int local_c;
  undefined4 *local_8;
  
  local_c = *param_1;
  if (*(char *)(local_c + 0x38) == '\0') {
    local_34[0] = (ulonglong)(uint)param_4[10] << 0x20;
    local_34[1] = 0;
    local_34[2] = 0;
    local_34[3] = 0;
    local_8 = *(undefined4 **)(*param_4 + 8);
    if (0 < param_2) {
      pcVar6 = (char *)(param_3 + 0x15);
      do {
        iVar1 = local_c;
        local_14 = (char *)*local_8;
        pcVar3 = FUN_004750b0((int *)local_34,local_14,(undefined4 *)0x0,(undefined4 *)0x0,
                              (undefined4 *)0x0);
        if (pcVar3 == (char *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          cVar2 = *pcVar3;
          pcVar4 = pcVar3;
          while (cVar2 != '\0') {
            pcVar4 = pcVar4 + 1;
            cVar2 = *pcVar4;
          }
          local_10 = ((int)pcVar4 - (int)pcVar3 & 0x3fffffffU) + 1;
          puVar5 = FUN_00494b90(iVar1,local_10);
          if (puVar5 != (undefined4 *)0x0) {
            memcpy(puVar5,pcVar3,local_10);
          }
        }
        pcVar3 = local_14;
        *(undefined4 **)(pcVar6 + -9) = puVar5;
        cVar2 = FUN_00496480(local_14);
        *pcVar6 = cVar2;
        if (cVar2 == '\0') {
          *pcVar6 = 'b';
        }
        puVar5 = (undefined4 *)FUN_004984d0(param_1,pcVar3);
        if (puVar5 != (undefined4 *)0x0) {
          pcVar3 = (char *)*puVar5;
          if (pcVar3 == (char *)0x0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            cVar2 = *pcVar3;
            pcVar4 = pcVar3;
            while (cVar2 != '\0') {
              pcVar4 = pcVar4 + 1;
              cVar2 = *pcVar4;
            }
            local_14 = (char *)(((int)pcVar4 - (int)pcVar3 & 0x3fffffffU) + 1);
            puVar5 = FUN_00494b90(local_c,(int)local_14);
            if (puVar5 != (undefined4 *)0x0) {
              memcpy(puVar5,pcVar3,(size_t)local_14);
            }
          }
          *(undefined4 **)(pcVar6 + -5) = puVar5;
        }
        local_8 = local_8 + 5;
        pcVar6 = pcVar6 + 0x18;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
  }
  return;
}


/* FUN_0048a1c0 @ 0048a1c0  kind=gamemisc  attributed-by=none  size=127 */

undefined4 __cdecl FUN_0048a1c0(int param_1,int param_2)

{
  int *piVar1;
  short *psVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  
  if ((*(ushort *)(param_2 + 6) & 0x20) != 0) {
    return 0;
  }
  *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x20;
  piVar1 = *(int **)(param_1 + 8);
  psVar2 = *(short **)(param_2 + 0x28);
  iVar7 = 0;
  if (*psVar2 < 1) {
    return 0;
  }
  piVar6 = (int *)(psVar2 + 0xe);
  do {
    iVar3 = piVar6[-1];
    if ((iVar3 != 0) && ((*(byte *)(iVar3 + 0x2a) & 2) != 0)) {
      piVar4 = (int *)*piVar6;
      for (piVar5 = (int *)((int *)*piVar6)[0xf]; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[0xf])
      {
        piVar4 = piVar5;
      }
      FUN_0048a080(piVar1,(int)*(short *)(iVar3 + 0x26),*(int *)(iVar3 + 4),piVar4);
    }
    iVar7 = iVar7 + 1;
    piVar6 = piVar6 + 0x12;
  } while (iVar7 < *psVar2);
  return 0;
}


/* FUN_0048a240 @ 0048a240  kind=gamemisc  attributed-by=none  size=378 */

undefined4 __cdecl FUN_0048a240(int *param_1,int *param_2,undefined2 *param_3,undefined4 *param_4)

{
  size_t _Size;
  char cVar1;
  byte bVar2;
  int iVar3;
  char *_Src;
  char *pcVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *local_20;
  int local_1c;
  int local_18;
  int local_10;
  int local_c;
  undefined4 *local_8;
  
  iVar3 = *param_1;
  if (param_2 == (int *)0x0) {
    local_10 = 0;
    local_8 = (undefined4 *)0x0;
  }
  else {
    local_10 = *param_2;
    local_8 = FUN_00494b90(iVar3,local_10 * 0x18);
    if (local_8 != (undefined4 *)0x0) {
      memset(local_8,0,local_10 * 0x18);
    }
  }
  *param_3 = (short)local_10;
  *param_4 = local_8;
  local_c = 0;
  iVar11 = 0;
  if (0 < local_10) {
    local_1c = 0;
    local_20 = local_8;
    do {
      for (pcVar4 = *(char **)(param_2[2] + local_1c);
          (pcVar4 != (char *)0x0 && ((*pcVar4 == '\\' || (*pcVar4 == '\x18'))));
          pcVar4 = *(char **)(pcVar4 + 8)) {
      }
      _Src = (char *)((undefined4 *)(param_2[2] + local_1c))[1];
      if (_Src == (char *)0x0) {
        cVar1 = *pcVar4;
        while (cVar1 == 'v') {
          pcVar4 = *(char **)(pcVar4 + 0xc);
          cVar1 = *pcVar4;
        }
        pbVar5 = (byte *)FUN_004a02d0(iVar3,&DAT_0056de50);
      }
      else {
        cVar1 = *_Src;
        pcVar4 = _Src;
        while (cVar1 != '\0') {
          pcVar4 = pcVar4 + 1;
          cVar1 = *pcVar4;
        }
        _Size = ((int)pcVar4 - (int)_Src & 0x3fffffffU) + 1;
        pbVar5 = (byte *)FUN_00494b90(iVar3,_Size);
        if (pbVar5 != (byte *)0x0) {
          memcpy(pbVar5,_Src,_Size);
        }
      }
      if (*(char *)(iVar3 + 0x38) != '\0') {
        FUN_00494b00(iVar3,(undefined4 *)pbVar5);
        iVar11 = local_c;
        break;
      }
      uVar8 = 0;
      if (pbVar5 != (byte *)0x0) {
        bVar2 = *pbVar5;
        pbVar7 = pbVar5;
        while (bVar2 != 0) {
          pbVar7 = pbVar7 + 1;
          bVar2 = *pbVar7;
        }
        uVar8 = (int)pbVar7 - (int)pbVar5 & 0x3fffffff;
      }
      local_18 = 0;
      pbVar7 = pbVar5;
      if (0 < local_c) {
        do {
          pbVar6 = (byte *)local_8[local_18 * 6];
          bVar2 = *pbVar6;
          pbVar9 = pbVar7;
          while ((bVar2 != 0 && ((&DAT_00569620)[bVar2] == (&DAT_00569620)[*pbVar9]))) {
            pbVar5 = pbVar6 + 1;
            pbVar6 = pbVar6 + 1;
            pbVar9 = pbVar9 + 1;
            bVar2 = *pbVar5;
          }
          pbVar5 = pbVar7;
          if ((&DAT_00569620)[*pbVar6] == (&DAT_00569620)[*pbVar9]) {
            pbVar7[uVar8] = 0;
            pbVar5 = (byte *)FUN_004a02d0(iVar3,(byte *)"%s:%d");
            FUN_00494b00(iVar3,(undefined4 *)pbVar7);
            local_18 = -1;
            if (pbVar5 == (byte *)0x0) break;
          }
          local_18 = local_18 + 1;
          pbVar7 = pbVar5;
        } while (local_18 < local_c);
      }
      *local_20 = pbVar5;
      local_20 = local_20 + 6;
      iVar11 = local_c + 1;
      local_1c = local_1c + 0x14;
      local_c = iVar11;
    } while (iVar11 < local_10);
  }
  if (*(char *)(iVar3 + 0x38) == '\0') {
    return 0;
  }
  puVar10 = local_8;
  if (0 < iVar11) {
    do {
      FUN_00494b00(iVar3,(undefined4 *)*puVar10);
      iVar11 = iVar11 + -1;
      puVar10 = puVar10 + 6;
    } while (iVar11 != 0);
  }
  FUN_00494b00(iVar3,local_8);
  *param_4 = 0;
  *param_3 = 0;
  return 7;
}


/* FUN_0048a3ba @ 0048a3ba  kind=gamemisc  attributed-by=none  size=263 */

undefined4 __fastcall FUN_0048a3ba(undefined4 param_1,byte *param_2)

{
  size_t _Size;
  char cVar1;
  byte bVar2;
  char *_Src;
  byte in_AL;
  char *pcVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  uint unaff_EBX;
  int unaff_EBP;
  byte *unaff_ESI;
  undefined4 *puVar7;
  byte *unaff_EDI;
  int iVar8;
  
  do {
    if ((&DAT_00569620)[in_AL] == (&DAT_00569620)[*unaff_ESI]) {
      in_AL = param_2[1];
      param_2 = param_2 + 1;
      unaff_ESI = unaff_ESI + 1;
      goto joined_r0x0048a3db;
    }
    do {
      if ((&DAT_00569620)[*param_2] == (&DAT_00569620)[*unaff_ESI]) {
        unaff_EDI[unaff_EBX] = 0;
        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
        unaff_ESI = (byte *)FUN_004a02d0(*(int *)(unaff_EBP + 8),(byte *)"%s:%d");
        FUN_00494b00(*(int *)(unaff_EBP + 8),(undefined4 *)unaff_EDI);
        iVar4 = -1;
        if (unaff_ESI != (byte *)0x0) goto LAB_0048a42a;
LAB_0048a437:
        do {
          puVar7 = *(undefined4 **)(unaff_EBP + -0x1c);
          iVar5 = *(int *)(unaff_EBP + -0x18);
          iVar4 = *(int *)(unaff_EBP + 8);
          *puVar7 = unaff_ESI;
          iVar8 = *(int *)(unaff_EBP + -8) + 1;
          iVar5 = iVar5 + 0x14;
          *(undefined4 **)(unaff_EBP + -0x1c) = puVar7 + 6;
          *(int *)(unaff_EBP + -8) = iVar8;
          *(int *)(unaff_EBP + -0x18) = iVar5;
          if (*(int *)(unaff_EBP + -0xc) <= iVar8) {
LAB_0048a470:
            puVar7 = *(undefined4 **)(unaff_EBP + -4);
            if (*(char *)(iVar4 + 0x38) == '\0') {
              return 0;
            }
            if (0 < iVar8) {
              do {
                FUN_00494b00(iVar4,(undefined4 *)*puVar7);
                puVar7 = puVar7 + 6;
                iVar8 = iVar8 + -1;
              } while (iVar8 != 0);
            }
            FUN_00494b00(iVar4,*(undefined4 **)(unaff_EBP + -4));
            **(undefined4 **)(unaff_EBP + 0x14) = 0;
            **(undefined2 **)(unaff_EBP + 0x10) = 0;
            return 7;
          }
          puVar7 = (undefined4 *)(*(int *)(*(int *)(unaff_EBP + 0xc) + 8) + iVar5);
          for (pcVar3 = (char *)*puVar7;
              (pcVar3 != (char *)0x0 && ((*pcVar3 == '\\' || (*pcVar3 == '\x18'))));
              pcVar3 = *(char **)(pcVar3 + 8)) {
          }
          _Src = (char *)puVar7[1];
          if (_Src == (char *)0x0) {
            cVar1 = *pcVar3;
            while (cVar1 == 'v') {
              pcVar3 = *(char **)(pcVar3 + 0xc);
              cVar1 = *pcVar3;
            }
            unaff_ESI = (byte *)FUN_004a02d0(iVar4,&DAT_0056de50);
          }
          else {
            cVar1 = *_Src;
            pcVar3 = _Src;
            while (cVar1 != '\0') {
              pcVar3 = pcVar3 + 1;
              cVar1 = *pcVar3;
            }
            _Size = ((int)pcVar3 - (int)_Src & 0x3fffffffU) + 1;
            unaff_ESI = (byte *)FUN_00494b90(*(int *)(unaff_EBP + 8),_Size);
            if (unaff_ESI != (byte *)0x0) {
              memcpy(unaff_ESI,_Src,_Size);
            }
            iVar4 = *(int *)(unaff_EBP + 8);
          }
          if (*(char *)(iVar4 + 0x38) != '\0') {
            FUN_00494b00(iVar4,(undefined4 *)unaff_ESI);
            iVar8 = *(int *)(unaff_EBP + -8);
            goto LAB_0048a470;
          }
          unaff_EBX = 0;
          if (unaff_ESI != (byte *)0x0) {
            bVar2 = *unaff_ESI;
            pbVar6 = unaff_ESI;
            while (bVar2 != 0) {
              pbVar6 = pbVar6 + 1;
              bVar2 = *pbVar6;
            }
            unaff_EBX = (int)pbVar6 - (int)unaff_ESI & 0x3fffffff;
          }
          iVar4 = 0;
          *(undefined4 *)(unaff_EBP + -0x10) = 0;
          *(undefined4 *)(unaff_EBP + -0x14) = 0;
        } while (*(int *)(unaff_EBP + -8) < 1);
      }
      else {
        iVar4 = *(int *)(unaff_EBP + -0x14);
        unaff_ESI = unaff_EDI;
LAB_0048a42a:
        iVar4 = iVar4 + 1;
        *(int *)(unaff_EBP + -0x14) = iVar4;
        if (*(int *)(unaff_EBP + -8) <= iVar4) goto LAB_0048a437;
      }
      param_2 = *(byte **)(*(int *)(unaff_EBP + -4) + iVar4 * 0x18);
      in_AL = *param_2;
      unaff_EDI = unaff_ESI;
joined_r0x0048a3db:
    } while (in_AL == 0);
  } while( true );
}


/* FUN_0048abe0 @ 0048abe0  kind=gamemisc  attributed-by=none  size=1718 */

void __cdecl
FUN_0048abe0(int *param_1,int param_2,int *param_3,undefined4 param_4,int *param_5,int *param_6,
            int param_7,char *param_8,int param_9,undefined4 param_10)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  undefined1 *puVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined2 *puVar16;
  int iVar17;
  int *piVar18;
  int local_24;
  int local_14;
  
  piVar7 = param_1;
  cVar4 = *param_8;
  piVar5 = (int *)param_1[2];
  iVar6 = *(int *)(param_8 + 4);
  if (piVar5 == (int *)0x0) {
    return;
  }
  if (param_7 == 0) {
    cVar8 = '\0';
  }
  else {
    cVar8 = *(char *)(param_7 + 1);
  }
  if ((param_6 == (int *)0x0) && (cVar8 == '\0')) {
    FUN_00473870(piVar5,param_2,param_9);
  }
  piVar18 = param_5;
  if ((int)param_5 < 1) {
    piVar18 = (int *)*param_3;
  }
  if (*(int *)(param_8 + 8) == 0) {
    *(int *)(param_8 + 8) = param_1[0x13] + 1;
    *(int **)(param_8 + 0xc) = piVar18;
    param_1[0x13] = param_1[0x13] + (int)piVar18;
  }
  iVar15 = *(int *)(param_8 + 8);
  if ((int)param_5 < 1) {
    if (cVar4 != '\x03') {
      FUN_00496a90((int)param_1);
      FUN_00497010((int)param_1,param_3,iVar15,(uint)(cVar4 == '\x05'));
    }
  }
  else {
    iVar17 = 0;
    if (0 < (int)param_5) {
      do {
        iVar13 = piVar5[7];
        if ((iVar13 < piVar5[8]) || (iVar10 = FUN_0047de10(piVar5), iVar10 == 0)) {
          piVar5[7] = piVar5[7] + 1;
          iVar10 = piVar5[1];
          *(undefined2 *)(iVar10 + iVar13 * 0x14) = 0x1d;
          iVar10 = iVar10 + iVar13 * 0x14;
          *(undefined4 *)(iVar10 + 4) = param_4;
          *(undefined1 *)(iVar10 + 3) = 0;
          *(int *)(iVar10 + 8) = iVar17;
          *(int *)(iVar10 + 0xc) = iVar17 + iVar15;
          *(undefined4 *)(iVar10 + 0x10) = 0;
        }
        iVar17 = iVar17 + 1;
      } while (iVar17 < (int)param_5);
    }
  }
  if (cVar8 != '\0') {
    if (*(char *)(param_7 + 1) == '\x01') {
      iVar17 = piVar5[1];
      if (iVar17 != 0) {
        puVar2 = (undefined8 *)(iVar17 + *(int *)(param_7 + 8) * 0x14);
        FUN_0047bc80(*piVar5,(int)*(char *)((int)puVar2 + 1),
                     *(int **)(iVar17 + 0x10 + *(int *)(param_7 + 8) * 0x14));
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined4 *)(puVar2 + 2) = 0;
        *(undefined1 *)puVar2 = 0x95;
      }
    }
    else if (*(char *)(param_7 + 1) == '\x02') {
      piVar1 = (int *)(param_1[0x13] + 1);
      param_1[0x13] = param_1[0x13] + (int)piVar18;
      iVar17 = piVar5[1];
      if (iVar17 != 0) {
        puVar2 = (undefined8 *)(iVar17 + *(int *)(param_7 + 8) * 0x14);
        FUN_0047bc80(*piVar5,(int)*(char *)((int)puVar2 + 1),
                     *(int **)(iVar17 + 0x10 + *(int *)(param_7 + 8) * 0x14));
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined4 *)(puVar2 + 2) = 0;
        *(undefined1 *)puVar2 = 0x95;
      }
      iVar17 = *(int *)(param_7 + 8);
      if (iVar17 < 0) {
        iVar17 = piVar5[7] + -1;
      }
      if (*(char *)(*piVar5 + 0x38) == '\0') {
        puVar11 = (undefined1 *)(piVar5[1] + iVar17 * 0x14);
      }
      else {
        puVar11 = &DAT_00583fc4;
      }
      *puVar11 = 10;
      *(undefined4 *)(puVar11 + 4) = 1;
      *(int **)(puVar11 + 8) = piVar1;
      iVar17 = piVar5[7];
      local_14 = 0;
      if (0 < (int)piVar18) {
        local_24 = 0;
        param_1 = piVar1;
        do {
          piVar12 = (int *)FUN_004984d0(piVar7,*(char **)(local_24 + param_3[2]));
          iVar13 = piVar5[7];
          if (local_14 < (int)piVar18 + -1) {
            if ((iVar13 < piVar5[8]) || (iVar10 = FUN_0047de10(piVar5), iVar10 == 0)) {
              piVar5[7] = piVar5[7] + 1;
              puVar16 = (undefined2 *)(piVar5[1] + iVar13 * 0x14);
              *(int *)(puVar16 + 2) = (iVar15 - (int)piVar1) + (int)param_1;
              *puVar16 = 0x4b;
              iVar13 = iVar17 + (int)piVar18;
LAB_0048ae5a:
              *(undefined4 *)(puVar16 + 8) = 0;
              *(int **)(puVar16 + 6) = param_1;
              *(int *)(puVar16 + 4) = iVar13;
              *(undefined1 *)((int)puVar16 + 3) = 0;
            }
          }
          else if ((iVar13 < piVar5[8]) || (iVar10 = FUN_0047de10(piVar5), iVar10 == 0)) {
            piVar5[7] = piVar5[7] + 1;
            puVar16 = (undefined2 *)(piVar5[1] + iVar13 * 0x14);
            *(int *)(puVar16 + 2) = (iVar15 - (int)piVar1) + (int)param_1;
            *puVar16 = 0x4c;
            iVar13 = param_9;
            goto LAB_0048ae5a;
          }
          iVar13 = piVar5[1];
          iVar10 = *piVar5;
          if ((iVar13 == 0) || (*(char *)(iVar10 + 0x38) != '\0')) {
            FUN_0047bc80(iVar10,0xfffffffc,piVar12);
          }
          else {
            iVar3 = iVar13 + (piVar5[7] + -1) * 0x14;
            FUN_0047bc80(iVar10,(int)*(char *)(iVar3 + 1),
                         *(int **)(iVar13 + 0x10 + (piVar5[7] + -1) * 0x14));
            *(undefined4 *)(iVar3 + 0x10) = 0;
            if (piVar12 == (int *)0x0) {
              *(undefined4 *)(iVar3 + 0x10) = 0;
              *(undefined1 *)(iVar3 + 1) = 0;
            }
            else {
              *(int **)(iVar3 + 0x10) = piVar12;
              *(undefined1 *)(iVar3 + 1) = 0xfc;
            }
          }
          if (piVar5[1] != 0) {
            *(undefined1 *)(piVar5[1] + -0x11 + piVar5[7] * 0x14) = 0x80;
          }
          param_1 = (int *)((int)param_1 + 1);
          local_14 = local_14 + 1;
          local_24 = local_24 + 0x14;
        } while (local_14 < (int)piVar18);
      }
      iVar17 = piVar5[7];
      if ((iVar17 < piVar5[8]) || (iVar13 = FUN_0047de10(piVar5), iVar13 == 0)) {
        piVar5[7] = piVar5[7] + 1;
        iVar13 = piVar5[1];
        *(undefined2 *)(iVar13 + iVar17 * 0x14) = 0xe;
        iVar13 = iVar13 + iVar17 * 0x14;
        *(int *)(iVar13 + 4) = iVar15;
        *(int **)(iVar13 + 8) = piVar1;
        *(undefined1 *)(iVar13 + 3) = 0;
        *(int *)(iVar13 + 0xc) = (int)piVar18 + -1;
        *(undefined4 *)(iVar13 + 0x10) = 0;
      }
    }
    else {
      FUN_00473550((int)param_1,*(undefined4 *)(param_7 + 4),param_9,piVar18,iVar15);
    }
    if (((param_6 == (int *)0x0) && (*(int *)(param_2 + 0xc) != 0)) && (param_9 != 0)) {
      FUN_004ae830(piVar5,0x14,*(int *)(param_2 + 0xc),0xffffffff);
      uVar14 = FUN_004ae7d0(piVar5,0x79,*(undefined4 *)(param_2 + 0xc));
      FUN_004ae830(piVar5,1,0,param_9);
      if ((-1 < (int)uVar14) && (uVar14 < (uint)piVar5[7])) {
        *(int *)(piVar5[1] + 8 + uVar14 * 0x14) = piVar5[7];
      }
    }
  }
  switch(cVar4) {
  case '\x01':
    if (*(char *)((int)piVar7 + 0x13) == '\0') {
      piVar7[0x13] = piVar7[0x13] + 1;
      iVar17 = piVar7[0x13];
    }
    else {
      bVar9 = *(char *)((int)piVar7 + 0x13) - 1;
      *(byte *)((int)piVar7 + 0x13) = bVar9;
      iVar17 = piVar7[bVar9 + 7];
    }
    FUN_004ae890(piVar5,0x1f,iVar15,piVar18,iVar17);
    FUN_004ae830(piVar5,0x61,iVar6,iVar17);
LAB_0048b019:
    FUN_004a68f0((int)piVar7,iVar17);
    break;
  case '\x02':
    FUN_004ae890(piVar5,0x62,iVar6,iVar15,piVar18);
    break;
  case '\x03':
    FUN_004ae830(piVar5,7,1,iVar6);
    break;
  case '\x05':
  case '\n':
    if (param_6 != (int *)0x0) {
      if (*(char *)((int)piVar7 + 0x13) == '\0') {
        piVar7[0x13] = piVar7[0x13] + 1;
        iVar17 = piVar7[0x13];
      }
      else {
        bVar9 = *(char *)((int)piVar7 + 0x13) - 1;
        *(byte *)((int)piVar7 + 0x13) = bVar9;
        iVar17 = piVar7[bVar9 + 7];
      }
      FUN_004ae890(piVar5,0x1f,iVar15,piVar18,iVar17);
      FUN_00487240((int)piVar7,param_6,param_2,iVar17);
      goto LAB_0048b019;
    }
    if (cVar4 == '\n') {
      FUN_004ae7d0(piVar5,4,*(undefined4 *)(param_8 + 4));
    }
    else {
      FUN_004ae830(piVar5,0x10,iVar15,piVar18);
      FUN_00496d90((int)piVar7,iVar15,(int)piVar18);
    }
    goto LAB_0048b029;
  case '\x06':
    if (param_6 == (int *)0x0) {
      FUN_00497600((int)piVar7,iVar15,iVar6,1);
      goto LAB_0048b029;
    }
    FUN_00487240((int)piVar7,param_6,param_2,iVar15);
    break;
  case '\a':
    piVar18 = (int *)(param_8 + 1);
    iVar17 = FUN_00493750(*(char **)param_3[2],(char)*piVar18);
    *(char *)piVar18 = (char)iVar17;
    if (param_6 == (int *)0x0) {
      if (*(char *)((int)piVar7 + 0x13) == '\0') {
        piVar7[0x13] = piVar7[0x13] + 1;
        iVar17 = piVar7[0x13];
      }
      else {
        bVar9 = *(char *)((int)piVar7 + 0x13) - 1;
        *(byte *)((int)piVar7 + 0x13) = bVar9;
        iVar17 = piVar7[bVar9 + 7];
      }
      FUN_004ae8f0(piVar5,0x1f,iVar15,1,iVar17,piVar18,1);
      FUN_00496d90((int)piVar7,iVar15,1);
      FUN_004ae830(piVar5,0x61,iVar6,iVar17);
      FUN_004a68f0((int)piVar7,iVar17);
      goto LAB_0048b029;
    }
    FUN_00487240((int)piVar7,param_6,param_2,iVar15);
    break;
  case '\b':
  case '\t':
    if (*(char *)((int)piVar7 + 0x13) == '\0') {
      piVar7[0x13] = piVar7[0x13] + 1;
      iVar17 = piVar7[0x13];
    }
    else {
      bVar9 = *(char *)((int)piVar7 + 0x13) - 1;
      *(byte *)((int)piVar7 + 0x13) = bVar9;
      iVar17 = piVar7[bVar9 + 7];
    }
    FUN_004ae890(piVar5,0x1f,iVar15,piVar18,iVar17);
    if (param_6 == (int *)0x0) {
      if (*(char *)((int)piVar7 + 0x13) == '\0') {
        piVar7[0x13] = piVar7[0x13] + 1;
        iVar15 = piVar7[0x13];
      }
      else {
        bVar9 = *(char *)((int)piVar7 + 0x13) - 1;
        *(byte *)((int)piVar7 + 0x13) = bVar9;
        iVar15 = piVar7[bVar9 + 7];
      }
      FUN_004ae830(piVar5,0x38,iVar6,iVar15);
      FUN_004ae890(piVar5,0x39,iVar6,iVar17,iVar15);
      if (piVar5[1] != 0) {
        *(undefined1 *)(piVar5[1] + -0x11 + piVar5[7] * 0x14) = 8;
      }
      FUN_004a68f0((int)piVar7,iVar15);
      FUN_004a68f0((int)piVar7,iVar17);
    }
    else {
      FUN_00487240((int)piVar7,param_6,param_2,iVar17);
      FUN_004a68f0((int)piVar7,iVar17);
    }
  }
  if (param_6 == (int *)0x0) {
LAB_0048b029:
    iVar6 = *(int *)(param_2 + 8);
    if ((iVar6 != 0) &&
       ((iVar15 = piVar5[7], iVar15 < piVar5[8] || (iVar17 = FUN_0047de10(piVar5), iVar17 == 0)))) {
      piVar5[7] = piVar5[7] + 1;
      puVar16 = (undefined2 *)(piVar5[1] + iVar15 * 0x14);
      *puVar16 = 0x7a;
      *(undefined1 *)((int)puVar16 + 3) = 0;
      *(int *)(puVar16 + 2) = iVar6;
      *(undefined4 *)(puVar16 + 4) = param_10;
      *(undefined4 *)(puVar16 + 6) = 0xffffffff;
      *(undefined4 *)(puVar16 + 8) = 0;
    }
  }
  return;
}


/* FUN_0048b2c0 @ 0048b2c0  kind=gamemisc  attributed-by=none  size=20 */

undefined4 __cdecl FUN_0048b2c0(int param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  return 2;
}


/* FUN_0048b2e0 @ 0048b2e0  kind=gamemisc  attributed-by=none  size=45 */

char * __cdecl FUN_0048b2e0(int param_1)

{
  if (param_1 == 0x71) {
    return "UNION ALL";
  }
  if (param_1 != 0x72) {
    if (param_1 != 0x73) {
      return "UNION";
    }
    return "INTERSECT";
  }
  return "EXCEPT";
}


/* FUN_0048b310 @ 0048b310  kind=gamemisc  attributed-by=none  size=355 */

uint __cdecl FUN_0048b310(char *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  int *piVar5;
  uint local_34 [6];
  ushort local_1c;
  uint local_14;
  int local_10;
  int *local_c;
  uint local_8;
  
  piVar5 = *(int **)(param_1 + 0x34);
  cVar1 = *param_1;
  local_10 = *(int *)(param_1 + 0x48);
  local_c = piVar5;
  uVar2 = FUN_00471320(param_1);
  if (uVar2 != 0) {
    *param_1 = cVar1;
    return uVar2;
  }
  local_14 = (uint)*(ushort *)(param_1 + 0x10);
  iVar3 = 0;
  local_8 = 0;
  if (local_14 != 0) {
    do {
      puVar4 = (undefined1 *)
               ((uint)(CONCAT11(*(undefined1 *)(*(int *)(param_1 + 0x40) + iVar3 * 2),
                                *(undefined1 *)(*(int *)(param_1 + 0x40) + 1 + iVar3 * 2)) &
                      *(ushort *)(param_1 + 0x12)) + *(int *)(param_1 + 0x38));
      if ((local_8 == 0) && (FUN_00471710((int)param_1,(uint)puVar4,local_34), local_1c != 0)) {
        uVar2 = (uint)local_1c;
        FUN_004870c0(*(int **)(param_1 + 0x34),
                     CONCAT31(CONCAT21(CONCAT11(puVar4[uVar2],puVar4[uVar2 + 1]),puVar4[uVar2 + 2]),
                              puVar4[uVar2 + 3]),'\x03',*(int *)(param_1 + 0x48),&local_8);
      }
      piVar5 = local_c;
      if (param_1[3] == '\0') {
        FUN_004870c0(local_c,CONCAT31(CONCAT21(CONCAT11(*puVar4,puVar4[1]),puVar4[2]),puVar4[3]),
                     '\x05',local_10,&local_8);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)local_14);
  }
  if (param_1[3] != '\0') {
    *param_1 = cVar1;
    return local_8;
  }
  iVar3 = (uint)(byte)param_1[5] + *(int *)(param_1 + 0x38);
  FUN_004870c0(piVar5,CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar3 + 8),
                                                 *(undefined1 *)(iVar3 + 9)),
                                        *(undefined1 *)(iVar3 + 10)),*(undefined1 *)(iVar3 + 0xb)),
               '\x05',local_10,&local_8);
  *param_1 = cVar1;
  return local_8;
}


/* FUN_0048b480 @ 0048b480  kind=gamemisc  attributed-by=none  size=118 */

undefined4 __cdecl FUN_0048b480(int param_1,ulonglong *param_2)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  double local_c;
  
  piVar1 = (int *)**(int **)(param_1 + 8);
  if ((*piVar1 < 2) || ((code *)piVar1[0x12] == (code *)0x0)) {
    iVar2 = (*(code *)piVar1[0x10])(piVar1,&local_c);
    local_c = local_c * 86400000.0;
    uVar3 = FUN_0054a946();
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


/* FUN_0048b500 @ 0048b500  kind=gamemisc  attributed-by=none  size=48 */

void __cdecl FUN_0048b500(int param_1,undefined4 param_2)

{
  for (; param_1 != 0; param_1 = *(int *)(param_1 + 0xc)) {
    *(ushort *)(param_1 + 2) = *(ushort *)(param_1 + 2) | 1;
    *(short *)(param_1 + 0x20) = (short)param_2;
    FUN_0048b500(*(int *)(param_1 + 8),param_2);
  }
  return;
}


/* FUN_0048b530 @ 0048b530  kind=gamemisc  attributed-by=none  size=105 */

void __cdecl FUN_0048b530(int param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    uVar2 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x30))(*(int **)(param_1 + 0x3c));
    if ((uVar2 & 0x1000) == 0) {
      pcVar1 = *(code **)(**(int **)(param_1 + 0x3c) + 0x2c);
      if (pcVar1 == (code *)0x0) {
        *(undefined4 *)(param_1 + 0x7c) = 0x1000;
        return;
      }
      iVar3 = (*pcVar1)(*(int **)(param_1 + 0x3c));
      if (iVar3 < 0x20) {
        *(undefined4 *)(param_1 + 0x7c) = 0x200;
        return;
      }
      if (0x10000 < iVar3) {
        iVar3 = 0x10000;
      }
      *(int *)(param_1 + 0x7c) = iVar3;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x7c) = 0x200;
  return;
}


/* FUN_0048b5a0 @ 0048b5a0  kind=gamemisc  attributed-by=none  size=177 */

undefined4 __cdecl FUN_0048b5a0(undefined8 *param_1,int param_2,byte param_3)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = param_2;
  puVar2 = param_1;
  iVar1 = *(int *)((int)param_1 + 4);
  for (piVar4 = *(int **)(iVar1 + 0x48); piVar4 != (int *)0x0; piVar4 = (int *)piVar4[3]) {
    if ((piVar4[1] == param_2) && ((undefined8 *)*piVar4 == param_1)) goto LAB_0048b635;
  }
  if (DAT_00582ac8 == 0) {
    param_1 = (undefined8 *)(*DAT_00582ae8)(0x10);
  }
  else {
    if (DAT_00583f40 != 0) {
      (*DAT_00582b18)(DAT_00583f40);
    }
    FUN_00480650(0x10,(int *)&param_1);
    if (DAT_00583f40 != 0) {
      (*DAT_00582b20)(DAT_00583f40);
    }
  }
  if ((int *)param_1 == (int *)0x0) {
    return 7;
  }
  *(int *)((int)param_1 + 0) = 0;
  *(int *)((int)param_1 + 4) = 0;
  *(int *)((int)param_1 + 8) = 0;
  *(int *)((int)param_1 + 0xc) = 0;
  *(int *)((int)param_1 + 4) = iVar3;
  *(undefined8 **)param_1 = puVar2;
  *(int *)((int)param_1 + 0xc) = *(int *)(iVar1 + 0x48);
  *(undefined8 **)(iVar1 + 0x48) = param_1;
  piVar4 = (int *)param_1;
LAB_0048b635:
  if (*(byte *)(piVar4 + 2) < param_3) {
    *(byte *)(piVar4 + 2) = param_3;
  }
  return 0;
}


/* FUN_0048b660 @ 0048b660  kind=gamemisc  attributed-by=none  size=277 */

undefined4 __cdecl FUN_0048b660(int param_1,undefined4 *param_2,uint param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0xec) != 0) {
    return 5;
  }
  if (*(char *)(param_1 + 0xeb) != '\0') {
    FUN_00466dd0(*(int *)(param_1 + 0x104));
  }
  uVar3 = param_3 & 0xfffffff8;
  if ((int)uVar3 < 5) {
    uVar3 = 0;
  }
  if (param_4 < 0) {
    param_4 = 0;
  }
  if ((uVar3 == 0) || (param_4 == 0)) {
    uVar3 = 0;
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = param_2;
    if (param_2 == (undefined4 *)0x0) {
      if (DAT_00583e74 != (code *)0x0) {
        (*DAT_00583e74)();
      }
      puVar1 = (undefined4 *)FUN_004a0350(uVar3 * param_4);
      if (DAT_00583e78 != (code *)0x0) {
        (*DAT_00583e78)();
      }
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = (*DAT_00582af0._4_4_)(puVar1);
        param_4 = iVar2 / (int)uVar3;
      }
    }
  }
  *(undefined4 **)(param_1 + 0x104) = puVar1;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(short *)(param_1 + 0xe8) = (short)uVar3;
  if (puVar1 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x108) = 0;
    *(undefined2 *)(param_1 + 0xea) = 0;
    return 0;
  }
  while (param_4 = param_4 + -1, -1 < param_4) {
    *puVar1 = *(undefined4 *)(param_1 + 0x100);
    *(undefined4 **)(param_1 + 0x100) = puVar1;
    puVar1 = (undefined4 *)((int)puVar1 + uVar3);
  }
  *(undefined4 **)(param_1 + 0x108) = puVar1;
  *(bool *)(param_1 + 0xeb) = param_2 == (undefined4 *)0x0;
  *(undefined1 *)(param_1 + 0xea) = 1;
  return 0;
}


/* FUN_0048b780 @ 0048b780  kind=gamemisc  attributed-by=none  size=52 */

void __cdecl
FUN_0048b780(undefined4 *param_1,int *param_2,int param_3,undefined4 *param_4,undefined4 *param_5)

{
  char *pcVar1;
  
  pcVar1 = FUN_004a1440(param_2,param_3,(char *)*param_4,(char *)*param_5,(undefined4 *)0x0);
  *param_1 = pcVar1;
  param_1[1] = param_4[1];
  param_1[2] = param_5[2];
  return;
}


/* FUN_0048b7c0 @ 0048b7c0  kind=gamemisc  attributed-by=none  size=94 */

void __cdecl FUN_0048b7c0(undefined4 *param_1,int *param_2,int param_3,int *param_4)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_00496510(*param_2,param_3,param_4,1);
  FUN_00496a30(*param_2,(int)puVar1,(undefined4 *)0x0,(undefined4 *)0x0);
  if ((puVar1 != (undefined4 *)0x0) && (*(int *)(*param_2 + 0x5c) < (int)puVar1[5])) {
    FUN_004962b0(param_2,(byte *)"Expression tree is too large (maximum depth %d)");
  }
  *param_1 = puVar1;
  param_1[1] = *param_4;
  param_1[2] = param_4[1] + *param_4;
  return;
}


/* FUN_0048b820 @ 0048b820  kind=gamemisc  attributed-by=none  size=139 */

void __cdecl
FUN_0048b820(undefined4 *param_1,int *param_2,undefined1 param_3,undefined4 *param_4,int *param_5)

{
  undefined4 *puVar1;
  undefined4 *_Dst;
  
  puVar1 = (undefined4 *)*param_4;
  _Dst = FUN_00494b90(*param_2,0x2c);
  if (_Dst != (undefined4 *)0x0) {
    memset(_Dst,0,0x2c);
    *(undefined1 *)_Dst = param_3;
    *(undefined2 *)((int)_Dst + 0x1e) = 0xffff;
    _Dst[5] = 1;
  }
  FUN_00496a30(*param_2,(int)_Dst,puVar1,(undefined4 *)0x0);
  if ((_Dst != (undefined4 *)0x0) && (*(int *)(*param_2 + 0x5c) < (int)_Dst[5])) {
    FUN_004962b0(param_2,(byte *)"Expression tree is too large (maximum depth %d)");
  }
  *param_1 = _Dst;
  param_1[1] = param_4[1];
  param_1[2] = param_5[1] + *param_5;
  return;
}


/* FUN_0048b8b0 @ 0048b8b0  kind=gamemisc  attributed-by=none  size=136 */

void __cdecl
FUN_0048b8b0(undefined4 *param_1,int *param_2,undefined1 param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  undefined4 *puVar1;
  undefined4 *_Dst;
  
  puVar1 = (undefined4 *)*param_4;
  _Dst = FUN_00494b90(*param_2,0x2c);
  if (_Dst != (undefined4 *)0x0) {
    memset(_Dst,0,0x2c);
    *(undefined1 *)_Dst = param_3;
    *(undefined2 *)((int)_Dst + 0x1e) = 0xffff;
    _Dst[5] = 1;
  }
  FUN_00496a30(*param_2,(int)_Dst,puVar1,(undefined4 *)0x0);
  if ((_Dst != (undefined4 *)0x0) && (*(int *)(*param_2 + 0x5c) < (int)_Dst[5])) {
    FUN_004962b0(param_2,(byte *)"Expression tree is too large (maximum depth %d)");
  }
  *param_1 = _Dst;
  param_1[1] = *param_5;
  param_1[2] = param_4[2];
  return;
}


/* FUN_0048b940 @ 0048b940  kind=gamemisc  attributed-by=none  size=28 */

int __cdecl FUN_0048b940(int param_1)

{
  if (param_1 < 0) {
    if (param_1 == -0x80000000) {
      return 0x7fffffff;
    }
    param_1 = -param_1;
  }
  return param_1;
}


/* FUN_0048b960 @ 0048b960  kind=gamemisc  attributed-by=none  size=94 */

void __cdecl FUN_0048b960(int *param_1,undefined4 *param_2)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = param_1[0x7f];
  if ((iVar1 == 0) || (*(char *)((int)param_1 + 0x1d5) != '\0')) {
    FUN_00498790(*param_1,param_2);
  }
  else {
    puVar2 = FUN_00498f00(param_1,*(uint **)(iVar1 + 0x18),param_2);
    *(uint **)(iVar1 + 0x18) = puVar2;
    if (param_1[0x68] != 0) {
      FUN_004992e0(param_1,(int *)puVar2,param_1 + 0x67,1);
      return;
    }
  }
  return;
}


/* FUN_0048b9c0 @ 0048b9c0  kind=gamemisc  attributed-by=none  size=135 */

void __cdecl FUN_0048b9c0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  byte *pbVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_1[0x7f];
  if (iVar1 != 0) {
    iVar4 = *param_1;
    iVar5 = *(short *)(iVar1 + 0x26) + -1;
    pbVar2 = (byte *)FUN_004a0d40(iVar4,param_2);
    if (pbVar2 != (byte *)0x0) {
      piVar3 = FUN_004a0000(param_1,pbVar2);
      if (piVar3 == (int *)0x0) {
        FUN_00494b00(iVar4,(undefined4 *)pbVar2);
      }
      else {
        *(byte **)(*(int *)(iVar1 + 4) + 0x10 + iVar5 * 0x18) = pbVar2;
        iVar4 = *(int *)(iVar1 + 8);
        if (iVar4 != 0) {
          do {
            if (**(int **)(iVar4 + 4) == iVar5) {
              **(undefined4 **)(iVar4 + 0x20) =
                   *(undefined4 *)(*(int *)(iVar1 + 4) + 0x10 + iVar5 * 0x18);
            }
            iVar4 = *(int *)(iVar4 + 0x14);
          } while (iVar4 != 0);
          return;
        }
      }
    }
  }
  return;
}


/* FUN_0048ba50 @ 0048ba50  kind=gamemisc  attributed-by=none  size=317 */

void __cdecl FUN_0048ba50(int *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  
  iVar2 = *param_1;
  iVar3 = param_1[0x7f];
  if (iVar3 != 0) {
    if (*(int *)(iVar2 + 0x58) < *(short *)(iVar3 + 0x26) + 1) {
      FUN_004962b0(param_1,(byte *)"too many columns on %s");
      return;
    }
    pbVar4 = (byte *)FUN_004a0d40(iVar2,param_2);
    if (pbVar4 != (byte *)0x0) {
      iVar5 = (int)*(short *)(iVar3 + 0x26);
      iVar7 = 0;
      if (0 < iVar5) {
        puVar6 = *(undefined4 **)(iVar3 + 4);
        cVar1 = (&DAT_00569620)[*pbVar4];
        do {
          if ((cVar1 == (&DAT_00569620)[*(byte *)*puVar6]) &&
             (iVar5 = FUN_004bcc60(pbVar4 + 1,(byte *)*puVar6 + 1), iVar5 == 0)) {
            FUN_004962b0(param_1,(byte *)"duplicate column name: %s");
            FUN_00494b00(iVar2,(undefined4 *)pbVar4);
            return;
          }
          iVar5 = (int)*(short *)(iVar3 + 0x26);
          iVar7 = iVar7 + 1;
          puVar6 = puVar6 + 6;
        } while (iVar7 < iVar5);
      }
      if ((*(ushort *)(iVar3 + 0x26) & 7) == 0) {
        puVar6 = FUN_00494cf0(iVar2,*(undefined4 **)(iVar3 + 4),(iVar5 * 3 + 0x18) * 8);
        if (puVar6 == (undefined4 *)0x0) {
          FUN_00494b00(iVar2,(undefined4 *)pbVar4);
          return;
        }
        *(undefined4 **)(iVar3 + 4) = puVar6;
      }
      iVar5 = (int)*(short *)(iVar3 + 0x26);
      iVar2 = *(int *)(iVar3 + 4);
      *(undefined8 *)(iVar2 + iVar5 * 0x18) = 0;
      *(undefined8 *)(iVar2 + 8 + iVar5 * 0x18) = 0;
      *(undefined8 *)(iVar2 + 0x10 + iVar5 * 0x18) = 0;
      *(byte **)(iVar2 + iVar5 * 0x18) = pbVar4;
      *(undefined1 *)(iVar2 + 0x15 + iVar5 * 0x18) = 0x62;
      *(short *)(iVar3 + 0x26) = *(short *)(iVar3 + 0x26) + 1;
    }
  }
  return;
}


/* FUN_0048bb90 @ 0048bb90  kind=gamemisc  attributed-by=none  size=67 */

void __cdecl FUN_0048bb90(int *param_1,undefined4 *param_2)

{
  int iVar1;
  char cVar2;
  byte *pbVar3;
  
  iVar1 = param_1[0x7f];
  if ((iVar1 != 0) && (0 < *(short *)(iVar1 + 0x26))) {
    iVar1 = *(int *)(iVar1 + 4) + *(short *)(iVar1 + 0x26) * 0x18;
    pbVar3 = (byte *)FUN_004a0d40(*param_1,param_2);
    *(byte **)(iVar1 + -0xc) = pbVar3;
    cVar2 = FUN_0048bf70(pbVar3);
    *(char *)(iVar1 + -3) = cVar2;
  }
  return;
}


/* FUN_0048bbe0 @ 0048bbe0  kind=gamemisc  attributed-by=none  size=249 */

void __cdecl FUN_0048bbe0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  size_t _Size;
  code *local_1c;
  code *local_18;
  int local_c;
  void *local_8;
  
  iVar1 = param_1[0x7f];
  iVar2 = *param_1;
  if (iVar1 != 0) {
    local_c = 2;
    iVar1 = *(int *)(iVar1 + 4) + *(short *)(iVar1 + 0x26) * 0x18;
    local_1c = FUN_00478e60;
    local_18 = FUN_0048b2c0;
    FUN_004bb020(&local_1c,*param_2);
    if (local_c == 0) {
      FUN_004962b0(param_1,(byte *)"default value of column [%s] is not constant");
      FUN_00498790(iVar2,(undefined4 *)*param_2);
      return;
    }
    FUN_00498790(iVar2,*(undefined4 **)(iVar1 + -0x14));
    puVar3 = FUN_00478bb0(iVar2,(undefined4 *)*param_2,1,(int *)0x0);
    *(undefined4 **)(iVar1 + -0x14) = puVar3;
    FUN_00494b00(iVar2,*(undefined4 **)(iVar1 + -0x10));
    local_8 = (void *)param_2[1];
    _Size = param_2[2] - (int)local_8;
    if (local_8 == (void *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = FUN_00494b90(iVar2,_Size + 1);
      if (puVar3 != (undefined4 *)0x0) {
        memcpy(puVar3,local_8,_Size);
        *(undefined1 *)((int)puVar3 + _Size) = 0;
      }
    }
    *(undefined4 **)(iVar1 + -0x10) = puVar3;
  }
  FUN_00498790(iVar2,(undefined4 *)*param_2);
  return;
}


/* FUN_0048bce0 @ 0048bce0  kind=gamemisc  attributed-by=none  size=155 */

undefined4 __cdecl FUN_0048bce0(uint *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if (param_3 < 0) {
    if (((int)uVar2 < 1) && ((int)uVar2 < 0)) {
      iVar4 = (-0x80000000 - uVar2) - (uint)(1 < uVar1);
      iVar3 = param_3 + (uint)(0xfffffffe < param_2);
      if (iVar3 <= iVar4) {
        if (iVar3 < iVar4) {
          return 1;
        }
        if (param_2 + 1 < 1 - uVar1) {
          return 1;
        }
      }
    }
  }
  else if ((-1 < (int)uVar2) && ((0 < (int)uVar2 || (uVar1 != 0)))) {
    if (((int)(0x7fffffff - uVar2) <= param_3) &&
       (((int)(0x7fffffff - uVar2) < param_3 || (-uVar1 - 1 < param_2)))) {
      return 1;
    }
  }
  param_1[1] = uVar2 + param_3 + (uint)CARRY4(uVar1,param_2);
  *param_1 = uVar1 + param_2;
  return 0;
}


/* FUN_0048bd80 @ 0048bd80  kind=gamemisc  attributed-by=none  size=138 */

void __cdecl FUN_0048bd80(int *param_1,uint *param_2,int param_3,int param_4,int param_5)

{
  byte *pbVar1;
  ushort *puVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  int iVar11;
  int local_c;
  int local_8;
  
  iVar4 = param_1[0x7f];
  iVar11 = -1;
  if ((iVar4 != 0) && (*(char *)((int)param_1 + 0x1d5) == '\0')) {
    if ((*(byte *)(iVar4 + 0x2a) & 4) != 0) {
      FUN_004962b0(param_1,(byte *)"table \"%s\" has more than one primary key");
      goto LAB_0048bdbf;
    }
    *(byte *)(iVar4 + 0x2a) = *(byte *)(iVar4 + 0x2a) | 4;
    if (param_2 == (uint *)0x0) {
      iVar11 = *(short *)(iVar4 + 0x26) + -1;
      puVar2 = (ushort *)(*(int *)(iVar4 + 4) + 0x16 + iVar11 * 0x18);
      *puVar2 = *puVar2 | 1;
    }
    else {
      local_8 = 0;
      if (0 < (int)*param_2) {
        local_c = 0;
        do {
          iVar7 = (int)*(short *)(iVar4 + 0x26);
          iVar11 = 0;
          if (0 < iVar7) {
            puVar9 = *(undefined4 **)(iVar4 + 4);
            pbVar5 = *(byte **)(param_2[2] + 4 + local_c);
            do {
              pbVar10 = (byte *)*puVar9;
              bVar3 = *pbVar5;
              pbVar6 = pbVar5;
              while ((bVar3 != 0 && ((&DAT_00569620)[bVar3] == (&DAT_00569620)[*pbVar10]))) {
                pbVar1 = pbVar6 + 1;
                pbVar6 = pbVar6 + 1;
                pbVar10 = pbVar10 + 1;
                bVar3 = *pbVar1;
              }
              if ((&DAT_00569620)[*pbVar6] == (&DAT_00569620)[*pbVar10]) break;
              iVar11 = iVar11 + 1;
              puVar9 = puVar9 + 6;
            } while (iVar11 < iVar7);
          }
          if (iVar11 < iVar7) {
            puVar2 = (ushort *)(*(int *)(iVar4 + 4) + 0x16 + iVar11 * 0x18);
            *puVar2 = *puVar2 | 1;
          }
          local_8 = local_8 + 1;
          local_c = local_c + 0x14;
        } while (local_8 < (int)*param_2);
      }
      if (1 < (int)*param_2) goto LAB_0048bf0a;
    }
    if ((((iVar11 < 0) || (*(short *)(iVar4 + 0x26) <= iVar11)) ||
        (pbVar5 = *(byte **)(*(int *)(iVar4 + 4) + 0xc + iVar11 * 0x18), pbVar5 == (byte *)0x0)) ||
       ((iVar7 = FUN_004bcc60(pbVar5,(byte *)"INTEGER"), iVar7 != 0 || (param_5 != 0)))) {
LAB_0048bf0a:
      if (param_4 != 0) {
        FUN_004962b0(param_1,(byte *)"AUTOINCREMENT is only allowed on an INTEGER PRIMARY KEY");
        FUN_00499060(*param_1,(int *)param_2);
        return;
      }
      piVar8 = FUN_004940f0(param_1,(undefined4 *)0x0,0,(short *)0x0,param_2,param_3,0,0,
                            (char)param_5,0);
      if (piVar8 != (int *)0x0) {
        *(undefined1 *)((int)piVar8 + 0x2d) = 2;
      }
      FUN_00499060(*param_1,(int *)0x0);
      return;
    }
    *(undefined1 *)(iVar4 + 0x2b) = (undefined1)param_3;
    *(byte *)(iVar4 + 0x2a) = *(byte *)(iVar4 + 0x2a) | (char)param_4 << 3;
    *(short *)(iVar4 + 0x24) = (short)iVar11;
  }
LAB_0048bdbf:
  FUN_00499060(*param_1,(int *)param_2);
  return;
}


/* FUN_0048be0a @ 0048be0a  kind=gamemisc  attributed-by=none  size=48 */

void __fastcall FUN_0048be0a(int param_1)

{
  ushort *puVar1;
  int *piVar2;
  int in_EAX;
  byte *pbVar3;
  int iVar4;
  int *piVar5;
  byte bVar6;
  int iVar7;
  int unaff_EBX;
  undefined4 *puVar8;
  int unaff_EBP;
  uint *unaff_ESI;
  byte *pbVar9;
  int iVar10;
  
  do {
    iVar7 = (int)*(short *)(unaff_EBX + 0x26);
    iVar10 = 0;
    *(int *)(unaff_EBP + -0xc) = iVar7;
    if (0 < iVar7) {
      puVar8 = *(undefined4 **)(unaff_EBX + 4);
      pbVar3 = *(byte **)(unaff_ESI[2] + 4 + param_1);
      *(byte **)(unaff_EBP + -0x10) = pbVar3;
      do {
        bVar6 = *pbVar3;
        pbVar9 = (byte *)*puVar8;
        if (bVar6 != 0) {
          do {
            if ((&DAT_00569620)[bVar6] != (&DAT_00569620)[*pbVar9]) break;
            bVar6 = pbVar3[1];
            pbVar3 = pbVar3 + 1;
            pbVar9 = pbVar9 + 1;
          } while (bVar6 != 0);
          iVar7 = *(int *)(unaff_EBP + -0xc);
        }
        if ((&DAT_00569620)[*pbVar3] == (&DAT_00569620)[*pbVar9]) break;
        pbVar3 = *(byte **)(unaff_EBP + -0x10);
        iVar10 = iVar10 + 1;
        puVar8 = puVar8 + 6;
      } while (iVar10 < iVar7);
      unaff_EBX = *(int *)(unaff_EBP + -0x14);
      unaff_ESI = *(uint **)(unaff_EBP + 0xc);
      in_EAX = *(int *)(unaff_EBP + -4);
      param_1 = *(int *)(unaff_EBP + -8);
    }
    if (iVar10 < iVar7) {
      puVar1 = (ushort *)(*(int *)(unaff_EBX + 4) + 0x16 + iVar10 * 0x18);
      *puVar1 = *puVar1 | 1;
      in_EAX = *(int *)(unaff_EBP + -4);
      param_1 = *(int *)(unaff_EBP + -8);
    }
    in_EAX = in_EAX + 1;
    param_1 = param_1 + 0x14;
    *(int *)(unaff_EBP + -4) = in_EAX;
    *(int *)(unaff_EBP + -8) = param_1;
    if ((int)*unaff_ESI <= in_EAX) {
      if (((((int)*unaff_ESI < 2) && (-1 < iVar10)) && (iVar10 < *(short *)(unaff_EBX + 0x26))) &&
         (pbVar3 = *(byte **)(*(int *)(unaff_EBX + 4) + 0xc + iVar10 * 0x18), pbVar3 != (byte *)0x0)
         ) {
        iVar4 = FUN_004bcc60(pbVar3,(byte *)"INTEGER");
        iVar7 = *(int *)(unaff_EBP + 0x18);
        if ((iVar4 == 0) && (iVar7 == 0)) {
          *(undefined1 *)(unaff_EBX + 0x2b) = *(undefined1 *)(unaff_EBP + 0x10);
          *(byte *)(unaff_EBX + 0x2a) =
               *(byte *)(unaff_EBX + 0x2a) | *(char *)(unaff_EBP + 0x14) << 3;
          *(short *)(unaff_EBX + 0x24) = (short)iVar10;
          FUN_00499060(**(int **)(unaff_EBP + 8),(int *)unaff_ESI);
          return;
        }
      }
      else {
        iVar7 = *(int *)(unaff_EBP + 0x18);
      }
      piVar2 = *(int **)(unaff_EBP + 8);
      if (*(int *)(unaff_EBP + 0x14) == 0) {
        piVar5 = FUN_004940f0(piVar2,(undefined4 *)0x0,0,(short *)0x0,unaff_ESI,
                              *(int *)(unaff_EBP + 0x10),0,0,(char)iVar7,0);
        if (piVar5 != (int *)0x0) {
          *(undefined1 *)((int)piVar5 + 0x2d) = 2;
        }
        FUN_00499060(*piVar2,(int *)0x0);
        return;
      }
      FUN_004962b0(piVar2,(byte *)"AUTOINCREMENT is only allowed on an INTEGER PRIMARY KEY");
      FUN_00499060(*piVar2,(int *)unaff_ESI);
      return;
    }
  } while( true );
}


/* FUN_0048be3a @ 0048be3a  kind=gamemisc  attributed-by=none  size=303 */

void __fastcall FUN_0048be3a(byte param_1)

{
  ushort *puVar1;
  int iVar2;
  uint *puVar3;
  byte *pbVar4;
  int *piVar5;
  byte *in_EAX;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 *unaff_EBX;
  int unaff_EBP;
  byte *unaff_ESI;
  int unaff_EDI;
  
LAB_0048be40:
  if ((&DAT_00569620)[param_1] == (&DAT_00569620)[*unaff_ESI]) goto code_r0x0048be54;
  goto LAB_0048be5d;
code_r0x0048be54:
  param_1 = in_EAX[1];
  in_EAX = in_EAX + 1;
  unaff_ESI = unaff_ESI + 1;
  if (param_1 == 0) {
LAB_0048be5d:
    iVar9 = *(int *)(unaff_EBP + -0xc);
    do {
      if ((&DAT_00569620)[*in_EAX] == (&DAT_00569620)[*unaff_ESI]) {
LAB_0048be83:
        iVar2 = *(int *)(unaff_EBP + -0x14);
        puVar3 = *(uint **)(unaff_EBP + 0xc);
        iVar6 = *(int *)(unaff_EBP + -4);
        iVar8 = *(int *)(unaff_EBP + -8);
        do {
          if (unaff_EDI < iVar9) {
            puVar1 = (ushort *)(*(int *)(iVar2 + 4) + 0x16 + unaff_EDI * 0x18);
            *puVar1 = *puVar1 | 1;
            iVar6 = *(int *)(unaff_EBP + -4);
            iVar8 = *(int *)(unaff_EBP + -8);
          }
          iVar6 = iVar6 + 1;
          iVar8 = iVar8 + 0x14;
          *(int *)(unaff_EBP + -4) = iVar6;
          *(int *)(unaff_EBP + -8) = iVar8;
          if ((int)*puVar3 <= iVar6) {
            if (((((int)*puVar3 < 2) && (-1 < unaff_EDI)) && (unaff_EDI < *(short *)(iVar2 + 0x26)))
               && (pbVar4 = *(byte **)(*(int *)(iVar2 + 4) + 0xc + unaff_EDI * 0x18),
                  pbVar4 != (byte *)0x0)) {
              iVar6 = FUN_004bcc60(pbVar4,(byte *)"INTEGER");
              iVar9 = *(int *)(unaff_EBP + 0x18);
              if ((iVar6 == 0) && (iVar9 == 0)) {
                *(undefined1 *)(iVar2 + 0x2b) = *(undefined1 *)(unaff_EBP + 0x10);
                *(byte *)(iVar2 + 0x2a) = *(byte *)(iVar2 + 0x2a) | *(char *)(unaff_EBP + 0x14) << 3
                ;
                *(short *)(iVar2 + 0x24) = (short)unaff_EDI;
                FUN_00499060(**(int **)(unaff_EBP + 8),(int *)puVar3);
                return;
              }
            }
            else {
              iVar9 = *(int *)(unaff_EBP + 0x18);
            }
            piVar5 = *(int **)(unaff_EBP + 8);
            if (*(int *)(unaff_EBP + 0x14) == 0) {
              piVar7 = FUN_004940f0(piVar5,(undefined4 *)0x0,0,(short *)0x0,puVar3,
                                    *(int *)(unaff_EBP + 0x10),0,0,(char)iVar9,0);
              if (piVar7 != (int *)0x0) {
                *(undefined1 *)((int)piVar7 + 0x2d) = 2;
              }
              FUN_00499060(*piVar5,(int *)0x0);
              return;
            }
            FUN_004962b0(piVar5,(byte *)"AUTOINCREMENT is only allowed on an INTEGER PRIMARY KEY");
            FUN_00499060(*piVar5,(int *)puVar3);
            return;
          }
          iVar9 = (int)*(short *)(iVar2 + 0x26);
          unaff_EDI = 0;
          *(int *)(unaff_EBP + -0xc) = iVar9;
        } while (iVar9 < 1);
        unaff_EBX = *(undefined4 **)(iVar2 + 4);
        in_EAX = *(byte **)(puVar3[2] + 4 + iVar8);
        *(byte **)(unaff_EBP + -0x10) = in_EAX;
      }
      else {
        in_EAX = *(byte **)(unaff_EBP + -0x10);
        unaff_EDI = unaff_EDI + 1;
        unaff_EBX = unaff_EBX + 6;
        if (iVar9 <= unaff_EDI) goto LAB_0048be83;
      }
      param_1 = *in_EAX;
      unaff_ESI = (byte *)*unaff_EBX;
    } while (param_1 == 0);
  }
  goto LAB_0048be40;
}


/* FUN_0048bf70 @ 0048bf70  kind=gamemisc  attributed-by=none  size=188 */

char __cdecl FUN_0048bf70(byte *param_1)

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
    uVar3 = uVar3 * 0x100 + (uint)(byte)(&DAT_00569620)[bVar2];
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
      if ((cVar1 != 'c') && (cVar1 != 'e')) goto LAB_0048c00a;
      cVar1 = 'b';
    }
    else if (uVar3 == 0x7265616c) {
      if (cVar1 != 'c') goto LAB_0048c00a;
      cVar1 = 'e';
    }
    else if (uVar3 == 0x666c6f61) {
      if (cVar1 == 'c') {
        cVar1 = 'e';
      }
      else {
LAB_0048c00a:
        if ((uVar3 & 0xffffff) == 0x696e74) {
          return 'd';
        }
      }
    }
    else {
      if ((uVar3 != 0x646f7562) || (cVar1 != 'c')) goto LAB_0048c00a;
      cVar1 = 'e';
    }
    bVar2 = *param_1;
    if (bVar2 == 0) {
      return cVar1;
    }
  } while( true );
}


/* FUN_0048c830 @ 0048c830  kind=gamemisc  attributed-by=none  size=42 */

uint __cdecl FUN_0048c830(int param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  int local_c;
  byte *local_8;
  
  for (puVar1 = *(undefined4 **)(*(int *)(param_2 * 0x10 + 0xc + *(int *)(param_1 + 0x10)) + 0x20);
      puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
    iVar4 = puVar1[2];
    puVar2 = *(uint **)(iVar4 + 8);
    uVar6 = *(uint *)(*(int *)(iVar4 + 0xc) + 0x1c);
    if (uVar6 < 10) {
      uVar6 = 10;
    }
    *puVar2 = uVar6;
    iVar3 = 1;
    uVar6 = 10;
    if (0 < *(int *)(iVar4 + 0x24)) {
      do {
        puVar2[iVar3] = uVar6;
        if (5 < uVar6) {
          uVar6 = uVar6 - 1;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 <= *(int *)(iVar4 + 0x24));
    }
    if (*(char *)(iVar4 + 0x2c) != '\0') {
      puVar2[*(int *)(iVar4 + 0x24)] = 1;
    }
  }
  local_c = param_1;
  local_8 = *(byte **)(param_2 * 0x10 + *(int *)(param_1 + 0x10));
  iVar4 = FUN_00499c30(param_1,(byte *)"sqlite_stat1",local_8);
  if (iVar4 == 0) {
    return 1;
  }
  pbVar5 = (byte *)FUN_004a02d0(param_1,(byte *)"SELECT tbl,idx,stat FROM %Q.sqlite_stat1");
  if (pbVar5 == (byte *)0x0) {
    *(undefined1 *)(param_1 + 0x38) = 1;
    return 7;
  }
  uVar6 = FUN_00463120(param_1,pbVar5,FUN_0046c6c0,&local_c,(int *)0x0);
  FUN_00494b00(param_1,(undefined4 *)pbVar5);
  if (uVar6 == 7) {
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  return uVar6;
}


/* FUN_0048c930 @ 0048c930  kind=gamemisc  attributed-by=none  size=319 */

void __thiscall FUN_0048c930(void *this,int *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *local_8;
  
  iVar1 = *param_1;
  local_8 = this;
  if ((*(char *)(iVar1 + 0x81) == '\0') && (iVar2 = FUN_0049ddb0(iVar1,param_1 + 1), iVar2 != 0)) {
    param_1[0x11] = param_1[0x11] + 1;
    param_1[3] = iVar2;
    return;
  }
  if (param_2 == (undefined4 *)0x0) {
    iVar2 = 0;
    if (*(int *)(iVar1 + 0x14) < 1) {
      return;
    }
    do {
      if (iVar2 != 1) {
        FUN_0046ca90(param_1,iVar2);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(iVar1 + 0x14));
    return;
  }
  if (*(int *)(param_3 + 4) == 0) {
    pbVar3 = (byte *)FUN_004a0d40(iVar1,param_2);
    iVar2 = FUN_00499540(iVar1,pbVar3);
    FUN_00494b00(iVar1,(undefined4 *)pbVar3);
    if (-1 < iVar2) {
      FUN_0046ca90(param_1,iVar2);
      return;
    }
    pbVar4 = (byte *)FUN_004a0d40(iVar1,param_2);
    if (pbVar4 == (byte *)0x0) {
      return;
    }
    piVar5 = (int *)FUN_00499af0(iVar1,pbVar4,(byte *)0x0);
    if (piVar5 != (int *)0x0) goto LAB_0048c9f4;
    pbVar3 = (byte *)0x0;
LAB_0048ca42:
    piVar7 = (int *)FUN_004a0080(param_1,0,pbVar4,pbVar3);
    if (piVar7 == (int *)0x0) goto LAB_0048ca5e;
    piVar5 = (int *)0x0;
  }
  else {
    uVar6 = FUN_004ab150(param_1,param_2,param_3,(int *)&local_8);
    if ((int)uVar6 < 0) {
      return;
    }
    pbVar3 = *(byte **)(*(int *)(iVar1 + 0x10) + uVar6 * 0x10);
    pbVar4 = (byte *)FUN_004a0d40(iVar1,local_8);
    if (pbVar4 == (byte *)0x0) {
      return;
    }
    piVar5 = (int *)FUN_00499af0(iVar1,pbVar4,pbVar3);
    if (piVar5 == (int *)0x0) goto LAB_0048ca42;
LAB_0048c9f4:
    piVar7 = (int *)piVar5[3];
  }
  FUN_0046dec0(param_1,piVar7,piVar5);
LAB_0048ca5e:
  FUN_00494b00(iVar1,(undefined4 *)pbVar4);
  return;
}


/* FUN_0048cc10 @ 0048cc10  kind=gamemisc  attributed-by=none  size=115 */

undefined4 * __cdecl
FUN_0048cc10(int param_1,undefined4 *param_2,size_t param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = *param_4;
  puVar3 = param_2;
  if ((uVar1 & uVar1 - 1) == 0) {
    iVar2 = 1;
    if (uVar1 != 0) {
      iVar2 = uVar1 * 2;
    }
    puVar3 = FUN_00494cf0(param_1,param_2,iVar2 * param_3);
    if (puVar3 == (undefined4 *)0x0) {
      *param_5 = 0xffffffff;
      return param_2;
    }
  }
  memset((undefined4 *)(uVar1 * param_3 + (int)puVar3),0,param_3);
  *param_5 = uVar1;
  *param_4 = *param_4 + 1;
  return puVar3;
}


/* FUN_0048cc90 @ 0048cc90  kind=gamemisc  attributed-by=none  size=1578 */

undefined4 __cdecl FUN_0048cc90(byte *param_1,double *param_2,uint param_3,char param_4)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  double dVar12;
  longlong lVar13;
  undefined8 local_2c;
  uint local_24;
  int local_20;
  int local_14;
  int local_10;
  uint local_8;
  
  pbVar7 = param_1 + param_3;
  iVar9 = 0;
  dVar12 = 0.0;
  iVar5 = (param_4 != '\x01') + 1;
  local_20 = 1;
  local_2c = 0;
  local_14 = 0;
  local_24 = 1;
  bVar1 = true;
  local_10 = 0;
  *param_2 = 0.0;
  if (param_4 == '\x03') {
    param_1 = param_1 + 1;
  }
  while( true ) {
    if (pbVar7 <= param_1) {
      return 0;
    }
    if (((&DAT_00569720)[*param_1] & 1) == 0) break;
    param_1 = param_1 + iVar5;
  }
  if (pbVar7 <= param_1) {
    return 0;
  }
  if (*param_1 == 0x2d) {
    local_20 = -1;
LAB_0048cd28:
    param_1 = param_1 + iVar5;
  }
  else if (*param_1 == 0x2b) goto LAB_0048cd28;
  local_2c._0_4_ = 0;
  local_2c._4_4_ = 0;
  for (; param_1 < pbVar7; param_1 = param_1 + iVar5) {
    if (*param_1 != 0x30) {
      param_3 = local_2c._4_4_;
      local_8 = (uint)local_2c;
      if (param_1 < pbVar7) goto LAB_0048cd80;
      break;
    }
    local_10 = local_10 + 1;
  }
  local_8 = 0;
  param_3 = 0;
  goto LAB_0048cd52;
  while( true ) {
    uVar10 = local_8 >> 0x1e;
    uVar6 = (int)(char)*param_1 - 0x30;
    bVar11 = CARRY4(local_8,local_8 * 4);
    uVar2 = local_8 * 5;
    uVar8 = local_8 * 10;
    local_8 = uVar6 + uVar8;
    param_3 = ((int)uVar6 >> 0x1f) +
              ((param_3 + (param_3 << 2 | uVar10) + (uint)bVar11) * 2 | uVar2 >> 0x1f) +
              (uint)CARRY4(uVar6,uVar8);
    local_10 = local_10 + 1;
    param_1 = param_1 + iVar5;
    local_2c = CONCAT44(param_3,local_8);
    if (pbVar7 <= param_1) break;
LAB_0048cd80:
    if (((((&DAT_00569720)[*param_1] & 4) == 0) || (0xccccccc < (int)param_3)) ||
       ((0xccccccb < (int)param_3 && (0xccccccca < local_8)))) {
      if (param_1 < pbVar7) goto LAB_0048ce00;
      break;
    }
  }
  goto LAB_0048cd52;
  while( true ) {
    local_10 = local_10 + 1;
    local_14 = local_14 + 1;
    param_1 = param_1 + iVar5;
    if (pbVar7 <= param_1) break;
LAB_0048ce00:
    if (((&DAT_00569720)[*param_1] & 4) == 0) {
      if (param_1 < pbVar7) {
        if (*param_1 != 0x2e) goto LAB_0048cee1;
        param_1 = param_1 + iVar5;
        if (param_1 < pbVar7) goto LAB_0048ce42;
      }
      break;
    }
  }
  goto LAB_0048cd52;
  while( true ) {
    uVar10 = local_8 >> 0x1e;
    uVar6 = (int)(char)*param_1 - 0x30;
    bVar11 = CARRY4(local_8,local_8 * 4);
    uVar2 = local_8 * 5;
    uVar8 = local_8 * 10;
    local_8 = uVar6 + uVar8;
    param_3 = ((int)uVar6 >> 0x1f) +
              ((param_3 + (param_3 << 2 | uVar10) + (uint)bVar11) * 2 | uVar2 >> 0x1f) +
              (uint)CARRY4(uVar6,uVar8);
    local_10 = local_10 + 1;
    local_14 = local_14 + -1;
    param_1 = param_1 + iVar5;
    local_2c = CONCAT44(param_3,local_8);
    if (pbVar7 <= param_1) break;
LAB_0048ce42:
    if (((((&DAT_00569720)[*param_1] & 4) == 0) || (0xccccccc < (int)param_3)) ||
       ((0xccccccb < (int)param_3 && (0xccccccca < local_8)))) {
      if (param_1 < pbVar7) goto LAB_0048cec0;
      break;
    }
  }
  goto LAB_0048cd52;
LAB_0048cee1:
  iVar9 = 0;
  if (param_1 < pbVar7) {
    if ((*param_1 == 0x65) || (*param_1 == 0x45)) {
      param_1 = param_1 + iVar5;
      bVar1 = false;
      if (pbVar7 <= param_1) goto LAB_0048cd52;
      if (*param_1 == 0x2d) {
        local_24 = -1;
LAB_0048cf21:
        param_1 = param_1 + iVar5;
      }
      else if (*param_1 == 0x2b) goto LAB_0048cf21;
      while ((param_1 < pbVar7 && (((&DAT_00569720)[*param_1] & 4) != 0))) {
        if (iVar9 < 10000) {
          iVar9 = (int)(char)*param_1 + iVar9 * 10 + -0x30;
        }
        else {
          iVar9 = 10000;
        }
        param_1 = param_1 + iVar5;
        bVar1 = true;
      }
    }
    if ((local_10 != 0) && (bVar1)) {
      while ((param_1 < pbVar7 && (((&DAT_00569720)[*param_1] & 1) != 0))) {
        param_1 = param_1 + iVar5;
      }
    }
  }
  goto LAB_0048cd52;
  while( true ) {
    local_10 = local_10 + 1;
    param_1 = param_1 + iVar5;
    if (pbVar7 <= param_1) break;
LAB_0048cec0:
    if (((&DAT_00569720)[*param_1] & 4) == 0) goto LAB_0048cee1;
  }
LAB_0048cd52:
  lVar4 = CONCAT44(param_3,local_8);
  local_14 = iVar9 * local_24 + local_14;
  if (local_14 < 0) {
    iVar9 = -1;
    local_14 = -local_14;
  }
  else {
    iVar9 = 1;
  }
  if (local_8 == 0 && param_3 == 0) {
    if ((local_20 < 0) && (local_10 != 0)) {
      dVar12 = -0.0;
    }
  }
  else {
    if (iVar9 < 1) {
      lVar13 = __alldiv(local_8,param_3,10,0);
      uVar10 = (uint)(lVar13 * 5);
      if (local_8 + uVar10 * -2 == 0 &&
          param_3 - ((int)((ulonglong)(lVar13 * 5) >> 0x20) << 1 | uVar10 >> 0x1f) ==
          (uint)(local_8 < uVar10 * 2)) {
        do {
          lVar3 = lVar13;
          local_24 = (uint)((ulonglong)lVar3 >> 0x20);
          uVar10 = (uint)lVar3;
          if (local_14 < 1) break;
          local_14 = local_14 + -1;
          lVar13 = __alldiv(uVar10,local_24,10,0);
          uVar8 = (uint)(lVar13 * 5);
          local_2c = lVar3;
          lVar4 = lVar3;
        } while (uVar10 + uVar8 * -2 == 0 &&
                 local_24 - ((int)((ulonglong)(lVar13 * 5) >> 0x20) << 1 | uVar8 >> 0x1f) ==
                 (uint)(uVar10 < uVar8 * 2));
      }
    }
    else {
      lVar4 = CONCAT44(param_3,local_8);
      if (((int)param_3 < 0xccccccd) &&
         (((int)param_3 < 0xccccccc || (lVar4 = CONCAT44(param_3,local_8), local_8 < 0xcccccccc))))
      {
        while (lVar4 = CONCAT44(param_3,local_8), 0 < local_14) {
          local_14 = local_14 + -1;
          param_3 = (param_3 + (param_3 << 2 | local_8 >> 0x1e) + (uint)CARRY4(local_8,local_8 * 4))
                    * 2 | local_8 * 5 >> 0x1f;
          local_8 = local_8 * 10;
          local_2c = CONCAT44(param_3,local_8);
          if ((0xccccccb < (int)param_3) &&
             ((lVar4 = local_2c, 0xccccccc < (int)param_3 || (0xcccccccb < local_8)))) break;
        }
      }
    }
    if (local_20 < 0) {
      local_2c = CONCAT44(-((int)((ulonglong)lVar4 >> 0x20) + (uint)((int)lVar4 != 0)),-(int)lVar4);
    }
    if (local_14 == 0) {
      dVar12 = (double)local_2c;
    }
    else {
      dVar12 = 1.0;
      if (local_14 < 0x134) {
        if (local_14 < 0x156) {
          if (local_14 != (local_14 / 0x16) * 0x16) {
            do {
              local_14 = local_14 + -1;
              dVar12 = dVar12 * 10.0;
            } while (local_14 != (local_14 / 0x16) * 0x16);
          }
          if (0 < local_14) {
            iVar5 = (local_14 - 1U) / 0x16 + 1;
            do {
              dVar12 = dVar12 * 1e+22;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          if (iVar9 < 0) {
            dVar12 = (double)local_2c / dVar12;
          }
          else {
            dVar12 = (double)local_2c * dVar12;
          }
          goto LAB_0048d294;
        }
      }
      else if (local_14 < 0x156) {
        if (local_14 != (local_14 / 0x134) * 0x134) {
          do {
            local_14 = local_14 + -1;
            dVar12 = dVar12 * 10.0;
          } while (local_14 != (local_14 / 0x134) * 0x134);
        }
        if (iVar9 < 0) {
          dVar12 = ((double)local_2c / dVar12) / 1e+308;
        }
        else {
          dVar12 = (double)local_2c * dVar12 * 1e+308;
        }
        goto LAB_0048d294;
      }
      if (iVar9 < 0) {
        dVar12 = (double)local_2c * 0.0;
      }
      else {
        dVar12 = (double)local_2c * INFINITY;
      }
    }
  }
LAB_0048d294:
  *param_2 = dVar12;
  if (((pbVar7 <= param_1) && (0 < local_10)) && (bVar1)) {
    return 1;
  }
  return 0;
}


/* FUN_0048d2d0 @ 0048d2d0  kind=gamemisc  attributed-by=none  size=44 */

uint __cdecl FUN_0048d2d0(char *param_1)

{
  uint local_8;
  
  local_8 = 0;
  if (param_1 != (char *)0x0) {
    FUN_0049ca30(param_1,&local_8);
    return local_8;
  }
  return 0;
}


/* FUN_0048d300 @ 0048d300  kind=gamemisc  attributed-by=none  size=423 */

undefined4 __cdecl FUN_0048d300(byte *param_1,uint *param_2,int param_3,char param_4)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  byte *pbVar7;
  char cVar8;
  byte *pbVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  byte *pbVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  uint local_1c;
  uint uStack_18;
  
  cVar8 = param_4;
  pbVar13 = param_1 + param_3;
  iVar12 = (param_4 != '\x01') + 1;
  bVar6 = false;
  _param_4 = 0;
  if (cVar8 == '\x03') {
    param_1 = param_1 + 1;
  }
  for (; pbVar7 = param_1, param_1 < pbVar13; param_1 = param_1 + iVar12) {
    if (((&DAT_00569720)[*param_1] & 1) == 0) {
      if (pbVar13 <= param_1) break;
      if (*param_1 == 0x2d) {
        bVar6 = true;
      }
      else if (*param_1 != 0x2b) break;
      param_1 = param_1 + iVar12;
      pbVar7 = param_1;
      break;
    }
  }
  for (; (pbVar7 < pbVar13 && (*pbVar7 == 0x30)); pbVar7 = pbVar7 + iVar12) {
  }
  local_1c = 0;
  uStack_18 = 0;
  param_3 = 0;
  pbVar9 = pbVar7;
  iVar10 = 0;
  if (pbVar7 < pbVar13) {
    do {
      _param_4 = (uint)(char)*pbVar9;
      if (9 < _param_4 - 0x30) break;
      uVar3 = local_1c >> 0x1e;
      bVar16 = CARRY4(local_1c,local_1c * 4);
      uVar5 = local_1c * 5;
      uVar4 = local_1c * 10;
      uVar15 = uVar4 + _param_4;
      local_1c = uVar15 - 0x30;
      uStack_18 = ((uStack_18 + (uStack_18 << 2 | uVar3) + (uint)bVar16) * 2 | uVar5 >> 0x1f) +
                  ((int)_param_4 >> 0x1f) + (uint)CARRY4(uVar4,_param_4) + -1 +
                  (uint)(0x2f < uVar15);
      pbVar9 = pbVar9 + iVar12;
      param_3 = param_3 + iVar12;
    } while (pbVar9 < pbVar13);
    iVar10 = param_3;
    if ((0x7ffffffe < uStack_18) && (0x7fffffff < uStack_18)) {
      *param_2 = 0;
      param_2[1] = 0x80000000;
      goto LAB_0048d423;
    }
  }
  if (bVar6) {
    bVar16 = local_1c != 0;
    local_1c = -local_1c;
    uStack_18 = -(uStack_18 + bVar16);
  }
  param_2[1] = uStack_18;
  *param_2 = local_1c;
LAB_0048d423:
  if ((((_param_4 != 0) && (pbVar7 + iVar10 < pbVar13)) || ((iVar10 == 0 && (param_1 == pbVar7))))
     || (iVar12 * 0x13 < iVar10)) {
    return 1;
  }
  if (iVar12 * 0x13 <= iVar10) {
    iVar10 = 0;
    iVar14 = 0;
    pbVar13 = pbVar7;
    do {
      if (0x11 < iVar14) {
        if (iVar10 == 0) {
          iVar10 = (char)pbVar7[iVar12 * 0x12] + -0x38;
        }
        break;
      }
      pcVar1 = &DAT_0056dde4 + iVar14;
      bVar2 = *pbVar13;
      iVar14 = iVar14 + 1;
      pbVar13 = pbVar13 + iVar12;
      iVar10 = ((int)(char)bVar2 - (int)*pcVar1) * 10;
    } while (iVar10 == 0);
    if (-1 < iVar10) {
      if (0 < iVar10) {
        return 1;
      }
      uVar11 = 2;
      if (bVar6) {
        uVar11 = 0;
      }
      return uVar11;
    }
  }
  return 0;
}


/* FUN_0048d4b0 @ 0048d4b0  kind=gamemisc  attributed-by=none  size=135 */

int __cdecl
FUN_0048d4b0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
      FUN_004962b0(param_1,(byte *)"not authorized");
      param_1[3] = 0x17;
      return 1;
    }
    if ((iVar1 != 0) && (iVar1 != 2)) {
      iVar1 = 1;
      FUN_004bcd90(param_1);
    }
    return iVar1;
  }
  return 0;
}


/* FUN_0048d540 @ 0048d540  kind=gamemisc  attributed-by=none  size=222 */

void __cdecl FUN_0048d540(int *param_1,char *param_2,int param_3,short *param_4)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar3 = *param_1;
  puVar5 = (undefined4 *)0x0;
  if ((*(int *)(iVar3 + 0x10c) != 0) && (param_3 != 0)) {
    iVar4 = 0;
    if (0 < *(int *)(iVar3 + 0x14)) {
      piVar1 = (int *)(*(int *)(iVar3 + 0x10) + 0xc);
      do {
        if (*piVar1 == param_3) break;
        iVar4 = iVar4 + 1;
        piVar1 = piVar1 + 4;
      } while (iVar4 < *(int *)(iVar3 + 0x14));
      if (iVar4 < 0) {
        return;
      }
    }
    if (*param_2 == '<') {
      puVar5 = (undefined4 *)param_1[0x6d];
    }
    else {
      iVar3 = 0;
      if (0 < *param_4) {
        piVar1 = (int *)(param_4 + 0x1a);
        do {
          if (*(int *)(param_2 + 0x18) == *piVar1) {
            puVar5 = *(undefined4 **)(param_4 + iVar3 * 0x24 + 0xc);
            break;
          }
          iVar3 = iVar3 + 1;
          piVar1 = piVar1 + 0x12;
        } while (iVar3 < *param_4);
      }
    }
    if (puVar5 != (undefined4 *)0x0) {
      if (*(short *)(param_2 + 0x1c) < 0) {
        if (*(short *)(puVar5 + 9) < 0) {
          pcVar2 = "ROWID";
        }
        else {
          pcVar2 = *(char **)(puVar5[1] + *(short *)(puVar5 + 9) * 0x18);
        }
      }
      else {
        pcVar2 = *(char **)(puVar5[1] + *(short *)(param_2 + 0x1c) * 0x18);
      }
      iVar3 = FUN_0048d620(param_1,*puVar5,pcVar2,iVar4);
      if (iVar3 == 2) {
        *param_2 = 'b';
      }
    }
  }
  return;
}


/* FUN_0048d620 @ 0048d620  kind=gamemisc  attributed-by=none  size=196 */

int __cdecl FUN_0048d620(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = (**(code **)(iVar1 + 0x10c))
                    (*(undefined4 *)(iVar1 + 0x110),0x14,param_2,param_3,
                     *(undefined4 *)(*(int *)(iVar1 + 0x10) + param_4 * 0x10),param_1[0x81]);
  if (iVar2 != 1) {
    if ((iVar2 != 2) && (iVar2 != 0)) {
      FUN_004962b0(param_1,(byte *)"authorizer malfunction");
      param_1[3] = 1;
    }
    return iVar2;
  }
  if ((*(int *)(iVar1 + 0x14) < 3) && (param_4 == 0)) {
    FUN_004962b0(param_1,(byte *)"access to %s.%s is prohibited");
    param_1[3] = 0x17;
    return 1;
  }
  FUN_004962b0(param_1,(byte *)"access to %s.%s.%s is prohibited");
  param_1[3] = 0x17;
  return 1;
}


/* FUN_0048d6f0 @ 0048d6f0  kind=gamemisc  attributed-by=none  size=196 */

void __cdecl FUN_0048d6f0(int param_1)

{
  bool bVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  bVar1 = true;
  if (DAT_00583e68 != 0) {
    iVar4 = 0;
    do {
      if (DAT_00582acc == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*DAT_00582b10)(2);
        if (iVar3 != 0) {
          (*DAT_00582b18)(iVar3);
        }
      }
      if (iVar4 < DAT_00583e68) {
        pcVar2 = *(code **)(DAT_00583e6c + iVar4 * 4);
      }
      else {
        pcVar2 = (code *)0x0;
        bVar1 = false;
      }
      if (iVar3 != 0) {
        (*DAT_00582b20)(iVar3);
      }
      local_8 = 0;
      if ((pcVar2 != (code *)0x0) &&
         (iVar3 = (*pcVar2)(param_1,&local_8,&PTR_FUN_0056a290), iVar3 != 0)) {
        FUN_004961f0(param_1,iVar3,(byte *)"automatic extension loading failed: %s");
        bVar1 = false;
      }
      FUN_00466dd0(local_8);
      iVar4 = iVar4 + 1;
    } while (bVar1);
  }
  return;
}


/* FUN_0048d7c0 @ 0048d7c0  kind=gamemisc  attributed-by=none  size=1018 */

void __cdecl FUN_0048d7c0(int *param_1)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  void *extraout_EDX;
  
  iVar3 = *param_1;
  piVar4 = (int *)param_1[2];
  for (puVar5 = (undefined4 *)param_1[0x6b]; puVar5 != (undefined4 *)0x0;
      puVar5 = (undefined4 *)*puVar5) {
    iVar6 = puVar5[3];
    FUN_004a0f40(param_1,0,puVar5[2],
                 *(int **)(*(int *)(*(int *)(iVar3 + 0x10) + 0xc + puVar5[2] * 0x10) + 0x48),0x27);
    iVar13 = piVar4[7];
    if ((iVar13 < piVar4[8]) || (iVar9 = FUN_0047de10(piVar4), iVar9 == 0)) {
      piVar4[7] = piVar4[7] + 1;
      puVar1 = (undefined2 *)(piVar4[1] + iVar13 * 0x14);
      *puVar1 = 10;
      *(undefined1 *)((int)puVar1 + 3) = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      *(int *)(puVar1 + 4) = iVar6;
      *(int *)(puVar1 + 6) = iVar6 + 1;
      *(undefined4 *)(puVar1 + 8) = 0;
    }
    iVar13 = piVar4[7];
    piVar7 = *(int **)puVar5[1];
    if ((iVar13 < piVar4[8]) || (iVar9 = FUN_0047de10(piVar4), iVar9 == 0)) {
      piVar4[7] = piVar4[7] + 1;
      puVar1 = (undefined2 *)(piVar4[1] + iVar13 * 0x14);
      *(int *)(puVar1 + 4) = iVar6 + -1;
      *puVar1 = 0x5e;
      *(undefined1 *)((int)puVar1 + 3) = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      *(undefined4 *)(puVar1 + 6) = 0;
      *(undefined4 *)(puVar1 + 8) = 0;
      iVar9 = iVar13;
    }
    else {
      iVar9 = 1;
    }
    iVar12 = piVar4[1];
    iVar8 = *piVar4;
    if ((iVar12 == 0) || (*(char *)(iVar8 + 0x38) != '\0')) {
      FUN_0047bc80(iVar8,0,piVar7);
    }
    else {
      if (iVar9 < 0) {
        iVar9 = piVar4[7] + -1;
      }
      iVar2 = iVar12 + iVar9 * 0x14;
      FUN_0047bc80(iVar8,(int)*(char *)(iVar2 + 1),*(int **)(iVar12 + 0x10 + iVar9 * 0x14));
      *(undefined4 *)(iVar2 + 0x10) = 0;
      if (piVar7 == (int *)0x0) {
        *(undefined4 *)(iVar2 + 0x10) = 0;
        *(undefined1 *)(iVar2 + 1) = 0;
      }
      else {
        uVar10 = FUN_004aa9b0((char *)piVar7);
        puVar11 = FUN_00494e00(*piVar4,extraout_EDX,uVar10);
        *(undefined4 **)(iVar2 + 0x10) = puVar11;
        *(undefined1 *)(iVar2 + 1) = 0xff;
      }
    }
    iVar9 = piVar4[7];
    if ((iVar9 < piVar4[8]) || (iVar12 = FUN_0047de10(piVar4), iVar12 == 0)) {
      piVar4[7] = piVar4[7] + 1;
      puVar1 = (undefined2 *)(piVar4[1] + iVar9 * 0x14);
      *puVar1 = 0x48;
      *(undefined1 *)((int)puVar1 + 3) = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      *(int *)(puVar1 + 4) = iVar13 + 9;
      *(undefined4 *)(puVar1 + 6) = 0;
      *(undefined4 *)(puVar1 + 8) = 0;
    }
    iVar9 = piVar4[7];
    if ((iVar9 < piVar4[8]) || (iVar12 = FUN_0047de10(piVar4), iVar12 == 0)) {
      iVar12 = piVar4[1];
      piVar4[7] = piVar4[7] + 1;
      *(undefined2 *)(iVar12 + iVar9 * 0x14) = 0x1d;
      *(undefined1 *)(iVar12 + 3 + iVar9 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 4 + iVar9 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 8 + iVar9 * 0x14) = 0;
      *(int *)(iVar12 + 0xc + iVar9 * 0x14) = iVar6;
      *(undefined4 *)(iVar12 + 0x10 + iVar9 * 0x14) = 0;
    }
    iVar9 = piVar4[7];
    if ((iVar9 < piVar4[8]) || (iVar12 = FUN_0047de10(piVar4), iVar12 == 0)) {
      piVar4[7] = piVar4[7] + 1;
      puVar1 = (undefined2 *)(piVar4[1] + iVar9 * 0x14);
      *(int *)(puVar1 + 2) = iVar6 + -1;
      *puVar1 = 0x4b;
      *(undefined1 *)((int)puVar1 + 3) = 0;
      *(int *)(puVar1 + 4) = iVar13 + 7;
      *(int *)(puVar1 + 6) = iVar6;
      *(undefined4 *)(puVar1 + 8) = 0;
    }
    if (piVar4[1] != 0) {
      *(undefined1 *)(piVar4[1] + -0x11 + piVar4[7] * 0x14) = 8;
    }
    iVar9 = piVar4[7];
    if ((iVar9 < piVar4[8]) || (iVar12 = FUN_0047de10(piVar4), iVar12 == 0)) {
      piVar4[7] = piVar4[7] + 1;
      puVar1 = (undefined2 *)(piVar4[1] + iVar9 * 0x14);
      *puVar1 = 0x41;
      *(undefined1 *)((int)puVar1 + 3) = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      *(int *)(puVar1 + 4) = iVar6 + 1;
      *(undefined4 *)(puVar1 + 6) = 0;
      *(undefined4 *)(puVar1 + 8) = 0;
    }
    iVar9 = piVar4[7];
    if ((iVar9 < piVar4[8]) || (iVar12 = FUN_0047de10(piVar4), iVar12 == 0)) {
      iVar12 = piVar4[1];
      piVar4[7] = piVar4[7] + 1;
      *(undefined2 *)(iVar12 + iVar9 * 0x14) = 0x1d;
      *(undefined1 *)(iVar12 + 3 + iVar9 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 4 + iVar9 * 0x14) = 0;
      *(undefined4 *)(iVar12 + 8 + iVar9 * 0x14) = 1;
      *(int *)(iVar12 + 0xc + iVar9 * 0x14) = iVar6;
      *(undefined4 *)(iVar12 + 0x10 + iVar9 * 0x14) = 0;
    }
    iVar9 = piVar4[7];
    if ((iVar9 < piVar4[8]) || (iVar12 = FUN_0047de10(piVar4), iVar12 == 0)) {
      piVar4[7] = piVar4[7] + 1;
      puVar1 = (undefined2 *)(piVar4[1] + iVar9 * 0x14);
      *puVar1 = 1;
      *(undefined1 *)((int)puVar1 + 3) = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      *(int *)(puVar1 + 4) = iVar13 + 9;
      *(undefined4 *)(puVar1 + 6) = 0;
      *(undefined4 *)(puVar1 + 8) = 0;
    }
    iVar9 = piVar4[7];
    if ((iVar9 < piVar4[8]) || (iVar12 = FUN_0047de10(piVar4), iVar12 == 0)) {
      piVar4[7] = piVar4[7] + 1;
      puVar1 = (undefined2 *)(piVar4[1] + iVar9 * 0x14);
      *puVar1 = 0x5f;
      *(undefined1 *)((int)puVar1 + 3) = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      *(int *)(puVar1 + 4) = iVar13 + 2;
      *(undefined4 *)(puVar1 + 6) = 0;
      *(undefined4 *)(puVar1 + 8) = 0;
    }
    iVar13 = piVar4[7];
    if ((iVar13 < piVar4[8]) || (iVar9 = FUN_0047de10(piVar4), iVar9 == 0)) {
      iVar9 = piVar4[1];
      piVar4[7] = piVar4[7] + 1;
      *(undefined2 *)(iVar9 + iVar13 * 0x14) = 7;
      *(undefined1 *)(iVar9 + 3 + iVar13 * 0x14) = 0;
      *(undefined4 *)(iVar9 + 4 + iVar13 * 0x14) = 0;
      *(int *)(iVar9 + 8 + iVar13 * 0x14) = iVar6;
      *(undefined4 *)(iVar9 + 0xc + iVar13 * 0x14) = 0;
      *(undefined4 *)(iVar9 + 0x10 + iVar13 * 0x14) = 0;
    }
    iVar6 = piVar4[7];
    if ((iVar6 < piVar4[8]) || (iVar13 = FUN_0047de10(piVar4), iVar13 == 0)) {
      iVar13 = piVar4[1];
      piVar4[7] = piVar4[7] + 1;
      *(undefined2 *)(iVar13 + iVar6 * 0x14) = 0x2d;
      *(undefined1 *)(iVar13 + 3 + iVar6 * 0x14) = 0;
      *(undefined4 *)(iVar13 + 4 + iVar6 * 0x14) = 0;
      *(undefined4 *)(iVar13 + 8 + iVar6 * 0x14) = 0;
      *(undefined4 *)(iVar13 + 0xc + iVar6 * 0x14) = 0;
      *(undefined4 *)(iVar13 + 0x10 + iVar6 * 0x14) = 0;
    }
  }
  return;
}


/* FUN_0048dbc0 @ 0048dbc0  kind=gamemisc  attributed-by=none  size=1148 */

void __cdecl FUN_0048dbc0(int *param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  uint local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  puVar2 = (undefined4 *)param_1[0x6b];
  iVar3 = *param_1;
  piVar4 = (int *)param_1[2];
  do {
    if (puVar2 == (undefined4 *)0x0) {
      return;
    }
    iVar6 = puVar2[2];
    iVar8 = puVar2[3];
    iVar7 = *(int *)(iVar3 + 0x10);
    if (*(char *)((int)param_1 + 0x13) == '\0') {
      param_1[0x13] = param_1[0x13] + 1;
      local_8 = param_1[0x13];
    }
    else {
      bVar5 = *(char *)((int)param_1 + 0x13) - 1;
      *(byte *)((int)param_1 + 0x13) = bVar5;
      local_8 = param_1[bVar5 + 7];
    }
    FUN_004a0f40(param_1,0,puVar2[2],*(int **)(*(int *)(iVar6 * 0x10 + iVar7 + 0xc) + 0x48),0x28);
    local_14 = piVar4[7];
    if (((int)local_14 < piVar4[8]) || (iVar6 = FUN_0047de10(piVar4), iVar6 == 0)) {
      piVar4[7] = piVar4[7] + 1;
      puVar1 = (undefined2 *)(piVar4[1] + local_14 * 0x14);
      *puVar1 = 0x4a;
      *(undefined1 *)((int)puVar1 + 3) = 0;
      *(int *)(puVar1 + 2) = iVar8 + 1;
      *(undefined4 *)(puVar1 + 4) = 0;
      *(undefined4 *)(puVar1 + 6) = 0;
      *(undefined4 *)(puVar1 + 8) = 0;
    }
    else {
      local_14 = 1;
    }
    uVar10 = piVar4[7];
    if (((int)uVar10 < piVar4[8]) || (iVar6 = FUN_0047de10(piVar4), iVar6 == 0)) {
      iVar6 = piVar4[1];
      piVar4[7] = piVar4[7] + 1;
      *(undefined2 *)(iVar6 + uVar10 * 0x14) = 0x48;
      *(undefined1 *)(iVar6 + 3 + uVar10 * 0x14) = 0;
      *(undefined4 *)(iVar6 + 4 + uVar10 * 0x14) = 0;
      *(undefined4 *)(iVar6 + 8 + uVar10 * 0x14) = 0;
      *(undefined4 *)(iVar6 + 0xc + uVar10 * 0x14) = 0;
      *(undefined4 *)(iVar6 + 0x10 + uVar10 * 0x14) = 0;
    }
    else {
      uVar10 = 1;
    }
    local_c = piVar4[7];
    if ((local_c < piVar4[8]) || (iVar6 = FUN_0047de10(piVar4), iVar6 == 0)) {
      piVar4[7] = piVar4[7] + 1;
      iVar6 = piVar4[1];
      *(undefined2 *)(iVar6 + local_c * 0x14) = 0x1d;
      *(undefined1 *)(iVar6 + 3 + local_c * 0x14) = 0;
      *(undefined4 *)(iVar6 + 4 + local_c * 0x14) = 0;
      *(undefined4 *)(iVar6 + 8 + local_c * 0x14) = 0;
      *(int *)(iVar6 + 0xc + local_c * 0x14) = local_8;
      *(undefined4 *)(iVar6 + 0x10 + local_c * 0x14) = 0;
    }
    else {
      local_c = 1;
    }
    local_10 = piVar4[7];
    if (((int)local_10 < piVar4[8]) || (iVar6 = FUN_0047de10(piVar4), iVar6 == 0)) {
      piVar4[7] = piVar4[7] + 1;
      puVar1 = (undefined2 *)(piVar4[1] + local_10 * 0x14);
      *(int *)(puVar1 + 2) = iVar8 + -1;
      *puVar1 = 0x4c;
      *(undefined1 *)((int)puVar1 + 3) = 0;
      *(undefined4 *)(puVar1 + 4) = 0;
      *(int *)(puVar1 + 6) = local_8;
      *(undefined4 *)(puVar1 + 8) = 0;
    }
    else {
      local_10 = 1;
    }
    iVar6 = piVar4[7];
    if ((iVar6 < piVar4[8]) || (iVar7 = FUN_0047de10(piVar4), iVar7 == 0)) {
      piVar4[7] = piVar4[7] + 1;
      iVar7 = piVar4[1];
      *(undefined2 *)(iVar7 + iVar6 * 0x14) = 0x5f;
      *(undefined1 *)(iVar7 + 3 + iVar6 * 0x14) = 0;
      *(undefined4 *)(iVar7 + 4 + iVar6 * 0x14) = 0;
      *(int *)(iVar7 + 8 + iVar6 * 0x14) = local_c;
      *(undefined4 *)(iVar7 + 0xc + iVar6 * 0x14) = 0;
      *(undefined4 *)(iVar7 + 0x10 + iVar6 * 0x14) = 0;
    }
    if ((-1 < (int)uVar10) && (uVar10 < (uint)piVar4[7])) {
      *(int *)(piVar4[1] + 8 + uVar10 * 0x14) = piVar4[7];
    }
    iVar6 = piVar4[7];
    if ((iVar6 < piVar4[8]) || (iVar7 = FUN_0047de10(piVar4), iVar7 == 0)) {
      piVar4[7] = piVar4[7] + 1;
      puVar1 = (undefined2 *)(piVar4[1] + iVar6 * 0x14);
      *puVar1 = 0x38;
      *(undefined1 *)((int)puVar1 + 3) = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      *(int *)(puVar1 + 4) = iVar8 + 1;
      *(undefined4 *)(puVar1 + 6) = 0;
      *(undefined4 *)(puVar1 + 8) = 0;
    }
    uVar10 = piVar4[7];
    if (((int)uVar10 < piVar4[8]) || (iVar6 = FUN_0047de10(piVar4), iVar6 == 0)) {
      iVar6 = piVar4[1];
      piVar4[7] = piVar4[7] + 1;
      *(undefined2 *)(iVar6 + uVar10 * 0x14) = 1;
      *(undefined1 *)(iVar6 + 3 + uVar10 * 0x14) = 0;
      *(undefined4 *)(iVar6 + 4 + uVar10 * 0x14) = 0;
      *(undefined4 *)(iVar6 + 8 + uVar10 * 0x14) = 0;
      *(undefined4 *)(iVar6 + 0xc + uVar10 * 0x14) = 0;
      *(undefined4 *)(iVar6 + 0x10 + uVar10 * 0x14) = 0;
    }
    else {
      uVar10 = 1;
    }
    if ((-1 < (int)local_10) && (local_10 < (uint)piVar4[7])) {
      *(int *)(piVar4[1] + 8 + local_10 * 0x14) = piVar4[7];
    }
    iVar6 = piVar4[7];
    if ((iVar6 < piVar4[8]) || (iVar7 = FUN_0047de10(piVar4), iVar7 == 0)) {
      piVar4[7] = piVar4[7] + 1;
      iVar7 = piVar4[1];
      *(undefined2 *)(iVar7 + iVar6 * 0x14) = 0x41;
      iVar7 = iVar7 + iVar6 * 0x14;
      *(undefined1 *)(iVar7 + 3) = 0;
      *(undefined4 *)(iVar7 + 4) = 0;
      *(int *)(iVar7 + 8) = iVar8 + 1;
      *(undefined4 *)(iVar7 + 0xc) = 0;
      *(undefined4 *)(iVar7 + 0x10) = 0;
    }
    if ((-1 < (int)local_14) && (local_14 < (uint)piVar4[7])) {
      *(int *)(piVar4[1] + 8 + local_14 * 0x14) = piVar4[7];
    }
    if ((-1 < (int)uVar10) && (uVar10 < (uint)piVar4[7])) {
      *(int *)(piVar4[1] + 8 + uVar10 * 0x14) = piVar4[7];
    }
    iVar6 = piVar4[7];
    if ((iVar6 < piVar4[8]) || (iVar7 = FUN_0047de10(piVar4), iVar7 == 0)) {
      piVar4[7] = piVar4[7] + 1;
      puVar1 = (undefined2 *)(piVar4[1] + iVar6 * 0x14);
      *(int *)(puVar1 + 2) = iVar8 + -1;
      *puVar1 = 0x1f;
      *(undefined1 *)((int)puVar1 + 3) = 0;
      *(undefined4 *)(puVar1 + 4) = 2;
      *(int *)(puVar1 + 6) = local_8;
      *(undefined4 *)(puVar1 + 8) = 0;
    }
    iVar6 = piVar4[7];
    if ((iVar6 < piVar4[8]) || (iVar7 = FUN_0047de10(piVar4), iVar7 == 0)) {
      piVar4[7] = piVar4[7] + 1;
      puVar1 = (undefined2 *)(piVar4[1] + iVar6 * 0x14);
      *(int *)(puVar1 + 4) = local_8;
      *puVar1 = 0x39;
      *(undefined1 *)((int)puVar1 + 3) = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      *(int *)(puVar1 + 6) = iVar8 + 1;
      *(undefined4 *)(puVar1 + 8) = 0;
    }
    if (piVar4[1] != 0) {
      *(undefined1 *)(piVar4[1] + -0x11 + piVar4[7] * 0x14) = 8;
    }
    iVar6 = piVar4[7];
    if ((iVar6 < piVar4[8]) || (iVar8 = FUN_0047de10(piVar4), iVar8 == 0)) {
      iVar8 = piVar4[1];
      piVar4[7] = piVar4[7] + 1;
      *(undefined2 *)(iVar8 + iVar6 * 0x14) = 0x2d;
      *(undefined1 *)(iVar8 + 3 + iVar6 * 0x14) = 0;
      *(undefined4 *)(iVar8 + 4 + iVar6 * 0x14) = 0;
      *(undefined4 *)(iVar8 + 8 + iVar6 * 0x14) = 0;
      *(undefined4 *)(iVar8 + 0xc + iVar6 * 0x14) = 0;
      *(undefined4 *)(iVar8 + 0x10 + iVar6 * 0x14) = 0;
    }
    if ((local_8 != 0) && (*(byte *)((int)param_1 + 0x13) < 8)) {
      iVar6 = 0;
      piVar9 = param_1 + 0x19;
      do {
        if (piVar9[4] == local_8) {
          *(undefined1 *)(piVar9 + 2) = 1;
          goto LAB_0048e022;
        }
        iVar6 = iVar6 + 1;
        piVar9 = piVar9 + 6;
      } while (iVar6 < 10);
      param_1[*(byte *)((int)param_1 + 0x13) + 7] = local_8;
      *(char *)((int)param_1 + 0x13) = *(char *)((int)param_1 + 0x13) + '\x01';
    }
LAB_0048e022:
    puVar2 = (undefined4 *)*puVar2;
  } while( true );
}


/* FUN_0048e5e0 @ 0048e5e0  kind=gamemisc  attributed-by=none  size=57 */

void __cdecl FUN_0048e5e0(int *param_1,byte param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = param_1;
  if ((int *)param_1[0x6c] != (int *)0x0) {
    piVar1 = (int *)param_1[0x6c];
  }
  FUN_00493400(param_1,param_3);
  piVar1[0x55] = piVar1[0x55] | 1 << ((byte)param_3 & 0x1f);
  *(byte *)((int)piVar1 + 0x17) = *(byte *)((int)piVar1 + 0x17) | param_2;
  return;
}


/* FUN_0048e620 @ 0048e620  kind=gamemisc  attributed-by=none  size=76 */

void __cdecl FUN_0048e620(int *param_1,char *param_2,char *param_3)

{
  uint uVar1;
  
  if ((*(ushort *)(param_2 + 2) & 0x100) != 0) {
    FUN_004984d0(param_1,param_2);
    return;
  }
  if (((param_3 == (char *)0x0) || ((*(ushort *)(param_3 + 2) & 0x100) == 0)) &&
     (uVar1 = FUN_004984d0(param_1,param_2), uVar1 != 0)) {
    return;
  }
  FUN_004984d0(param_1,param_3);
  return;
}


/* FUN_0048e670 @ 0048e670  kind=gamemisc  attributed-by=none  size=584 */

uint __cdecl FUN_0048e670(uint param_1,uint *param_2)

{
  void *pvVar1;
  undefined1 uVar2;
  byte bVar3;
  bool bVar4;
  uint *_Dst;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  byte *pbVar8;
  size_t _Size;
  uint *puVar9;
  uint uVar10;
  int local_24;
  int local_1c;
  uint local_18;
  uint local_10;
  int local_c;
  void *local_8;
  
  local_18 = 0xffffffff;
  _Dst = (uint *)FUN_004a0350(0x200);
  if (_Dst != (uint *)0x0) {
    memset(_Dst,0,0x200);
    *_Dst = param_1;
  }
  _Size = ((int)(((int)(param_1 + 7) >> 0x1f & 7U) + param_1 + 7) >> 3) + 1;
  local_8 = (void *)FUN_004a0350(_Size);
  if (local_8 != (void *)0x0) {
    memset(local_8,0,_Size);
  }
  iVar5 = FUN_004bc920();
  if (iVar5 == 0) {
    puVar6 = (uint *)FUN_004a0350(0x200);
  }
  else {
    puVar6 = (uint *)0x0;
  }
  if (((_Dst != (uint *)0x0) && (local_8 != (void *)0x0)) && (puVar6 != (uint *)0x0)) {
    uVar7 = *param_2;
    local_c = 0;
    while (uVar7 != 0) {
      if (((int)uVar7 < 1) || ((2 < (int)uVar7 && (uVar7 != 5)))) {
        local_24 = 2;
        iVar5 = 4;
        puVar9 = &local_10;
        if (DAT_00582acc == 0) {
          local_1c = 0;
        }
        else {
          local_1c = (*DAT_00582b10)(5);
          if (local_1c != 0) {
            (*DAT_00582b18)(local_1c);
          }
        }
        do {
          uVar2 = FUN_00487580();
          *(undefined1 *)puVar9 = uVar2;
          puVar9 = (uint *)((int)puVar9 + 1);
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        if (local_1c != 0) {
          (*DAT_00582b20)(local_1c);
        }
      }
      else {
        local_10 = param_2[local_c + 2] - 1;
        local_24 = 4;
        param_2[local_c + 2] = param_2[local_c + 3] + param_2[local_c + 2];
      }
      param_2[local_c + 1] = param_2[local_c + 1] - 1;
      if (0 < (int)param_2[local_c + 1]) {
        local_24 = 0;
      }
      local_c = local_c + local_24;
      local_10 = (uint)((longlong)(ulonglong)(local_10 & 0x7fffffff) % (longlong)(int)param_1);
      uVar10 = local_10 + 1;
      pbVar8 = (byte *)(((int)uVar10 >> 3) + (int)local_8);
      bVar3 = '\x01' << ((byte)uVar10 & 7);
      if ((uVar7 & 1) == 0) {
        *pbVar8 = *pbVar8 & ~bVar3;
        FUN_0048e8c0(_Dst,uVar10,puVar6);
      }
      else {
        *pbVar8 = *pbVar8 | bVar3;
        if ((uVar7 != 5) && (uVar7 = FUN_0048ea60(_Dst,uVar10), uVar7 != 0)) goto LAB_0048e896;
      }
      uVar7 = param_2[local_c];
    }
    bVar4 = FUN_0048ec40(_Dst,param_1 + 1);
    pvVar1 = local_8;
    uVar7 = CONCAT31(extraout_var,bVar4) + (*_Dst - param_1);
    uVar10 = 1;
    local_18 = uVar7;
    if (0 < (int)param_1) {
      do {
        bVar4 = FUN_0048ec40(_Dst,uVar10);
        local_18 = uVar10;
        if ((uint)((*(byte *)(((int)uVar10 >> 3) + (int)pvVar1) & (byte)(1 << ((byte)uVar10 & 7)))
                  != 0) != CONCAT31(extraout_var_00,bVar4)) break;
        uVar10 = uVar10 + 1;
        local_18 = uVar7;
      } while ((int)uVar10 <= (int)param_1);
    }
  }
LAB_0048e896:
  FUN_00466dd0((int)puVar6);
  FUN_00466dd0((int)local_8);
  FUN_0048e9a0((int)_Dst);
  return local_18;
}


/* FUN_0048e8c0 @ 0048e8c0  kind=gamemisc  attributed-by=none  size=209 */

void __cdecl FUN_0048e8c0(uint *param_1,int param_2,uint *param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  
  if (param_1 != (uint *)0x0) {
    uVar4 = param_2 - 1;
    uVar3 = param_1[2];
    while (uVar3 != 0) {
      uVar3 = uVar4 / param_1[2];
      uVar4 = uVar4 % param_1[2];
      param_1 = (uint *)param_1[uVar3 + 3];
      if (param_1 == (uint *)0x0) {
        return;
      }
      uVar3 = param_1[2];
    }
    if (*param_1 < 0xfa1) {
      pbVar1 = (byte *)((uVar4 >> 3) + 0xc + (int)param_1);
      *pbVar1 = *pbVar1 & ~('\x01' << ((byte)uVar4 & 7));
      return;
    }
    puVar7 = param_1 + 3;
    puVar8 = param_3;
    for (iVar5 = 0x7d; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    memset(param_1 + 3,0,500);
    param_1[1] = 0;
    uVar3 = 0;
    do {
      uVar2 = param_3[uVar3];
      if ((uVar2 != 0) && (uVar2 != uVar4 + 1)) {
        uVar6 = (uVar2 - 1) % 0x7d;
        param_1[1] = param_1[1] + 1;
        uVar2 = param_1[uVar6 + 3];
        while (uVar2 != 0) {
          uVar6 = uVar6 + 1 & -(uint)(uVar6 + 1 < 0x7d);
          uVar2 = param_1[uVar6 + 3];
        }
        param_1[uVar6 + 3] = param_3[uVar3];
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x7d);
  }
  return;
}


/* FUN_0048ed00 @ 0048ed00  kind=gamemisc  attributed-by=none  size=73 */

undefined4 __cdecl FUN_0048ed00(undefined4 *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)param_1[1];
  FUN_0048fbc0(param_1);
  uVar2 = FUN_004a2310(*piVar1,param_2);
  if (*(char *)((int)param_1 + 9) != '\0') {
    piVar1 = param_1 + 3;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      if (*(int *)(param_1[1] + 0x38) != 0) {
        (*DAT_00582b20)(*(int *)(param_1[1] + 0x38));
      }
      *(undefined1 *)((int)param_1 + 10) = 0;
    }
  }
  return uVar2;
}


/* FUN_0048ed50 @ 0048ed50  kind=gamemisc  attributed-by=none  size=640 */

uint __cdecl FUN_0048ed50(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int iVar4;
  code *pcVar5;
  byte bVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  
  piVar1 = (int *)param_1[1];
  uVar9 = 0;
  FUN_0048fbc0(param_1);
  if ((char)param_1[2] != '\x02') {
    if (((char)param_1[2] == '\x01') && (param_2 == 0)) goto LAB_0048efa4;
    if ((*(ushort *)((int)piVar1 + 0x16) & 1) == 0) {
      if ((param_2 == 0) || (*(char *)((int)piVar1 + 0x13) != '\x02')) goto LAB_0048eda2;
LAB_0048eda6:
      piVar7 = (int *)piVar1[0x13];
LAB_0048ee0b:
      if (*piVar7 != 0) {
        uVar9 = 0x106;
        goto LAB_0048efa4;
      }
    }
    else {
      if (param_2 != 0) {
        uVar9 = 8;
        goto LAB_0048efa4;
      }
LAB_0048eda2:
      if ((*(ushort *)((int)piVar1 + 0x16) & 0x40) != 0) goto LAB_0048eda6;
      if (1 < param_2) {
        for (piVar7 = (int *)piVar1[0x12]; piVar7 != (int *)0x0; piVar7 = (int *)piVar7[3]) {
          if ((int *)*piVar7 != param_1) {
            piVar7 = (int *)*piVar7;
            goto LAB_0048ee0b;
          }
        }
      }
    }
    uVar9 = FUN_00487510((int)param_1,1,'\x01');
    if (uVar9 == 0) {
      *(ushort *)((int)piVar1 + 0x16) = *(ushort *)((int)piVar1 + 0x16) & 0xfff7;
      if (piVar1[0xb] == 0) {
        *(ushort *)((int)piVar1 + 0x16) = *(ushort *)((int)piVar1 + 0x16) | 8;
      }
LAB_0048edf2:
      if (piVar1[3] == 0) goto code_r0x0048edf8;
      if (uVar9 != 0) goto LAB_0048ee6b;
      if (param_2 != 0) {
        if ((*(byte *)((int)piVar1 + 0x16) & 1) == 0) {
          uVar9 = FUN_004a1670(*piVar1,(uint)(1 < param_2),*(char *)(*param_1 + 0x37) == '\x02');
          if ((uVar9 == 0) && (uVar9 = FUN_00483380((int)piVar1), uVar9 == 0)) goto LAB_0048eead;
        }
        else {
          uVar9 = 8;
        }
        goto LAB_0048ee6b;
      }
      goto LAB_0048eead;
    }
    goto LAB_0048efa4;
  }
  goto LAB_0048ef8c;
code_r0x0048edf8:
  uVar9 = FUN_0047fc00(piVar1);
  if (uVar9 != 0) {
LAB_0048ee6b:
    if ((*(char *)((int)piVar1 + 0x13) == '\0') && (piVar1[3] != 0)) {
      puVar2 = *(undefined4 **)(piVar1[3] + 0x44);
      if (puVar2 != (undefined4 *)0x0) {
        puVar3 = (uint *)puVar2[4];
        FUN_004a3a80(puVar2);
        if (*(int *)(puVar3[0x2d] + 0xc) == 0) {
          FUN_00484370(puVar3);
        }
      }
      piVar1[3] = 0;
    }
LAB_0048eead:
    if (((char)uVar9 != '\x05') || (*(char *)((int)piVar1 + 0x13) != '\0')) goto LAB_0048eef2;
    iVar4 = piVar1[1];
    if (((undefined4 *)(iVar4 + 0x1ac) == (undefined4 *)0x0) ||
       ((pcVar5 = *(code **)(iVar4 + 0x1ac), pcVar5 == (code *)0x0 || (*(int *)(iVar4 + 0x1b4) < 0))
       )) goto LAB_0048eef2;
    iVar8 = (*pcVar5)(*(undefined4 *)(iVar4 + 0x1b0),*(int *)(iVar4 + 0x1b4));
    if (iVar8 == 0) goto LAB_0048eee8;
    *(int *)(iVar4 + 0x1b4) = *(int *)(iVar4 + 0x1b4) + 1;
  }
  goto LAB_0048edf2;
LAB_0048eee8:
  *(undefined4 *)(iVar4 + 0x1b4) = 0xffffffff;
LAB_0048eef2:
  if (uVar9 != 0) goto LAB_0048efa4;
  if (((char)param_1[2] == '\0') &&
     (piVar1[10] = piVar1[10] + 1, *(char *)((int)param_1 + 9) != '\0')) {
    *(undefined1 *)(param_1 + 9) = 1;
    param_1[10] = piVar1[0x12];
    piVar1[0x12] = (int)(param_1 + 7);
  }
  bVar6 = (param_2 != 0) + 1;
  *(byte *)(param_1 + 2) = bVar6;
  if (*(byte *)((int)piVar1 + 0x13) < bVar6) {
    *(byte *)((int)piVar1 + 0x13) = bVar6;
  }
  if (param_2 == 0) goto LAB_0048efa4;
  iVar4 = piVar1[3];
  *(ushort *)((int)piVar1 + 0x16) = *(ushort *)((int)piVar1 + 0x16) & 0xffdf;
  piVar1[0x13] = (int)param_1;
  if (1 < param_2) {
    *(ushort *)((int)piVar1 + 0x16) = *(ushort *)((int)piVar1 + 0x16) | 0x20;
  }
  iVar8 = FUN_0049c920((undefined1 *)(*(int *)(iVar4 + 0x38) + 0x1c));
  if (piVar1[0xb] != iVar8) {
    uVar9 = FUN_004a2c80(*(undefined4 **)(iVar4 + 0x44));
    if (uVar9 != 0) goto LAB_0048efa4;
    FUN_004a5f90((undefined1 *)(*(int *)(iVar4 + 0x38) + 0x1c),piVar1[0xb]);
  }
LAB_0048ef8c:
  if (param_2 != 0) {
    uVar9 = FUN_004a2310(*piVar1,*(int *)(*param_1 + 0x1e0));
  }
LAB_0048efa4:
  if (*(char *)((int)param_1 + 9) != '\0') {
    piVar1 = param_1 + 3;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      if (*(int *)(param_1[1] + 0x38) != 0) {
        (*DAT_00582b20)(*(int *)(param_1[1] + 0x38));
      }
      *(undefined1 *)((int)param_1 + 10) = 0;
    }
  }
  return uVar9;
}


/* FUN_0048efd0 @ 0048efd0  kind=gamemisc  attributed-by=none  size=32 */

void __cdecl FUN_0048efd0(int param_1)

{
  FUN_00466dd0(*(int *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x5b) = 0;
  return;
}


/* FUN_0048eff0 @ 0048eff0  kind=gamemisc  attributed-by=none  size=126 */

uint __cdecl FUN_0048eff0(undefined4 *param_1,uint param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  piVar1 = (int *)param_1[1];
  FUN_0048fbc0(param_1);
  uVar3 = FUN_00489bc0((int)piVar1,param_2,0);
  if (uVar3 == 0) {
    for (iVar2 = *(int *)(param_1[1] + 8); iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
      if (*(char *)(iVar2 + 0x5c) != '\0') {
        *(undefined1 *)(iVar2 + 0x5b) = 0;
      }
    }
    uVar3 = FUN_00472b70(piVar1,param_2,0,param_3);
  }
  if (*(char *)((int)param_1 + 9) != '\0') {
    piVar1 = param_1 + 3;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      if (*(int *)(param_1[1] + 0x38) != 0) {
        (*DAT_00582b20)(*(int *)(param_1[1] + 0x38));
      }
      *(undefined1 *)((int)param_1 + 10) = 0;
    }
  }
  return uVar3;
}


/* FUN_0048f290 @ 0048f290  kind=gamemisc  attributed-by=none  size=84 */

uint __cdecl FUN_0048f290(int *param_1)

{
  int *piVar1;
  uint uVar2;
  
  FUN_0048fbc0(param_1);
  uVar2 = FUN_0048f2f0(param_1,(char *)0x0);
  if (uVar2 == 0) {
    uVar2 = FUN_0048f390(param_1,0);
  }
  if (*(char *)((int)param_1 + 9) != '\0') {
    piVar1 = param_1 + 3;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      if (*(int *)(param_1[1] + 0x38) != 0) {
        (*DAT_00582b20)(*(int *)(param_1[1] + 0x38));
      }
      *(undefined1 *)((int)param_1 + 10) = 0;
    }
  }
  return uVar2;
}


/* FUN_0048f2f0 @ 0048f2f0  kind=gamemisc  attributed-by=none  size=151 */

uint __cdecl FUN_0048f2f0(undefined4 *param_1,char *param_2)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(char *)(param_1 + 2) == '\x02') {
    piVar1 = (int *)param_1[1];
    FUN_0048fbc0(param_1);
    if (*(char *)((int)piVar1 + 0x11) != '\0') {
      uVar2 = FUN_0046e160(piVar1);
      if (uVar2 != 0) {
        if (*(char *)((int)param_1 + 9) != '\0') {
          piVar1 = param_1 + 3;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            if (*(int *)(param_1[1] + 0x38) != 0) {
              (*DAT_00582b20)(*(int *)(param_1[1] + 0x38));
            }
            *(undefined1 *)((int)param_1 + 10) = 0;
          }
        }
        return uVar2;
      }
    }
    uVar2 = FUN_004a19a0((uint *)*piVar1,param_2,0);
    if (*(char *)((int)param_1 + 9) != '\0') {
      piVar1 = param_1 + 3;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        if (*(int *)(param_1[1] + 0x38) != 0) {
          (*DAT_00582b20)(*(int *)(param_1[1] + 0x38));
        }
        *(undefined1 *)((int)param_1 + 10) = 0;
      }
    }
  }
  return uVar2;
}


/* FUN_0048f390 @ 0048f390  kind=gamemisc  attributed-by=none  size=131 */

int __cdecl FUN_0048f390(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if ((char)param_1[2] == '\0') {
    return 0;
  }
  FUN_0048fbc0(param_1);
  if ((char)param_1[2] == '\x02') {
    puVar2 = (undefined4 *)param_1[1];
    iVar3 = FUN_004a1bb0((int *)*puVar2);
    if ((iVar3 != 0) && (param_2 == 0)) {
      FUN_00490750((int)param_1);
      return iVar3;
    }
    *(undefined1 *)((int)puVar2 + 0x13) = 1;
  }
  FUN_00471200(param_1);
  if (*(char *)((int)param_1 + 9) != '\0') {
    piVar1 = param_1 + 3;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      if (*(int *)(param_1[1] + 0x38) != 0) {
        (*DAT_00582b20)(*(int *)(param_1[1] + 0x38));
      }
      *(undefined1 *)((int)param_1 + 10) = 0;
    }
  }
  return 0;
}


/* FUN_0048f420 @ 0048f420  kind=gamemisc  attributed-by=none  size=270 */

int __cdecl FUN_0048f420(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int local_3c;
  undefined4 *local_38;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 *local_24;
  undefined8 local_c;
  
  FUN_0048fbc0(param_1);
  FUN_0048fbc0(param_2);
  piVar1 = *(int **)(*(int *)param_1[1] + 0x3c);
  if (*piVar1 != 0) {
    uVar2 = *(uint *)(param_2[1] + 0x20);
    local_c = __allmul(*(uint *)(param_2[1] + 0x2c),0,uVar2,(int)uVar2 >> 0x1f);
    iVar3 = (**(code **)(*piVar1 + 0x28))(piVar1,0xb,&local_c);
    if ((iVar3 != 0xc) && (iVar3 != 0)) goto LAB_0048f4df;
  }
  memset(&local_3c,0,0x30);
  local_28 = *param_2;
  local_24 = param_2;
  local_38 = param_1;
  local_2c = 1;
  FUN_004673c0(&local_3c,0x7fffffff);
  iVar3 = FUN_00467dc0(&local_3c);
  if (iVar3 == 0) {
    *(ushort *)(param_1[1] + 0x16) = *(ushort *)(param_1[1] + 0x16) & 0xfffd;
  }
  else {
    FUN_004a1760(*(int *)local_38[1]);
  }
LAB_0048f4df:
  if (*(char *)((int)param_2 + 9) != '\0') {
    piVar1 = param_2 + 3;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      if (*(int *)(param_2[1] + 0x38) != 0) {
        (*DAT_00582b20)(*(int *)(param_2[1] + 0x38));
      }
      *(undefined1 *)((int)param_2 + 10) = 0;
    }
  }
  if (*(char *)((int)param_1 + 9) != '\0') {
    piVar1 = param_1 + 3;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      if (*(int *)(param_1[1] + 0x38) != 0) {
        (*DAT_00582b20)(*(int *)(param_1[1] + 0x38));
      }
      *(undefined1 *)((int)param_1 + 10) = 0;
    }
  }
  return iVar3;
}


/* FUN_0048f530 @ 0048f530  kind=gamemisc  attributed-by=none  size=519 */

int __cdecl FUN_0048f530(int *param_1,uint *param_2)

{
  short *psVar1;
  short sVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined1 *puVar10;
  bool bVar11;
  uint local_8;
  
  piVar6 = param_1;
  if (param_1[6] == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    return 0;
  }
  iVar7 = FUN_00480c70(param_1);
  if (iVar7 == 0) {
    local_8 = 0;
    param_1 = (int *)0x0;
    do {
      iVar8 = (int)*(short *)((int)piVar6 + 0x5e);
      iVar7 = piVar6[iVar8 + 0x22];
      if ((*(char *)(iVar7 + 3) != '\0') || (*(char *)(iVar7 + 2) == '\0')) {
        bVar11 = CARRY4((uint)param_1,(uint)*(ushort *)(iVar7 + 0x10));
        param_1 = (int *)((int)param_1 + (uint)*(ushort *)(iVar7 + 0x10));
        local_8 = local_8 + bVar11;
      }
      if (*(char *)(iVar7 + 3) != '\0') {
        do {
          if (*(short *)((int)piVar6 + 0x5e) == 0) {
            *param_2 = (uint)param_1;
            param_2[1] = local_8;
            return 0;
          }
          if ((piVar6[*(short *)((int)piVar6 + 0x5e) + 0x22] != 0) &&
             (puVar3 = *(undefined4 **)(piVar6[*(short *)((int)piVar6 + 0x5e) + 0x22] + 0x44),
             puVar3 != (undefined4 *)0x0)) {
            psVar1 = (short *)((int)puVar3 + 0x1a);
            *psVar1 = *psVar1 + -1;
            puVar4 = (uint *)puVar3[4];
            if (*psVar1 == 0) {
              *(int *)(puVar3[7] + 0xc) = *(int *)(puVar3[7] + 0xc) + -1;
              if ((*(byte *)(puVar3 + 6) & 2) == 0) {
                iVar7 = puVar3[7];
                if (*(int *)(iVar7 + 0x1c) != 0) {
                  if (puVar3[5] == 1) {
                    *(undefined4 *)(iVar7 + 0x2c) = 0;
                  }
                  (*DAT_00582b4c)(*(undefined4 *)(iVar7 + 0x28),*puVar3,0);
                }
              }
              else {
                FUN_00486ed0((int)puVar3);
                piVar5 = (int *)puVar3[7];
                iVar7 = *piVar5;
                puVar3[8] = iVar7;
                if (iVar7 != 0) {
                  *(undefined4 **)(iVar7 + 0x24) = puVar3;
                }
                *piVar5 = (int)puVar3;
                if (piVar5[1] == 0) {
                  piVar5[1] = (int)puVar3;
                }
                if ((piVar5[2] == 0) && ((*(byte *)(puVar3 + 6) & 4) == 0)) {
                  piVar5[2] = (int)puVar3;
                }
              }
            }
            if (*(int *)(puVar4[0x2d] + 0xc) == 0) {
              FUN_00484370(puVar4);
            }
          }
          *(short *)((int)piVar6 + 0x5e) = *(short *)((int)piVar6 + 0x5e) + -1;
          sVar2 = *(short *)((int)piVar6 + 0x5e);
          *(undefined2 *)((int)piVar6 + 0x42) = 0;
          *(undefined1 *)((int)piVar6 + 0x5a) = 0;
        } while (*(ushort *)(piVar6[sVar2 + 0x22] + 0x10) <=
                 *(ushort *)((int)piVar6 + sVar2 * 2 + 0x60));
        psVar1 = (short *)((int)piVar6 + sVar2 * 2 + 0x60);
        *psVar1 = *psVar1 + 1;
        iVar8 = (int)*(short *)((int)piVar6 + 0x5e);
        iVar7 = piVar6[iVar8 + 0x22];
      }
      uVar9 = (uint)*(ushort *)((int)piVar6 + iVar8 * 2 + 0x60);
      if (uVar9 == *(ushort *)(iVar7 + 0x10)) {
        iVar7 = (uint)*(byte *)(iVar7 + 5) + *(int *)(iVar7 + 0x38);
        uVar9 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar7 + 8),*(undefined1 *)(iVar7 + 9)),
                                  *(undefined1 *)(iVar7 + 10)),*(undefined1 *)(iVar7 + 0xb));
      }
      else {
        puVar10 = (undefined1 *)
                  ((uint)(CONCAT11(*(undefined1 *)(*(int *)(iVar7 + 0x40) + uVar9 * 2),
                                   *(undefined1 *)(*(int *)(iVar7 + 0x40) + 1 + uVar9 * 2)) &
                         *(ushort *)(iVar7 + 0x12)) + *(int *)(iVar7 + 0x38));
        uVar9 = CONCAT31(CONCAT21(CONCAT11(*puVar10,puVar10[1]),puVar10[2]),puVar10[3]);
      }
      iVar7 = FUN_00480a70((int)piVar6,uVar9);
    } while (iVar7 == 0);
    return iVar7;
  }
  return iVar7;
}


