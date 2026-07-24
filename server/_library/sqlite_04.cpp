// sqlite_04 (_library) -- server. 81 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "sqlite_04.h"

/* FUN_004bc440 @ 004bc440  kind=lib  attributed-by=lib-island  size=651 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
FUN_004bc440(undefined4 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_ESI;
  undefined4 *puVar3;
  undefined4 unaff_EDI;
  
  uVar2 = 0;
  if (DAT_00582b90 == 0) {
    switch(param_1) {
    case 1:
      DAT_00582acc = 0;
      DAT_00582ad0 = 0;
      return 0;
    case 2:
      DAT_00582ad0 = 0;
      DAT_00582acc = 1;
      return 0;
    case 3:
      DAT_00582acc = 1;
      DAT_00582ad0 = 1;
      return 0;
    case 4:
      _DAT_00582ae8 = *param_2;
      DAT_00582af0 = param_2[1];
      _DAT_00582af8 = param_2[2];
      DAT_00582b00 = param_2[3];
      return 0;
    case 5:
      if (DAT_00582ae8 == 0) {
        FUN_004bc440(4,(undefined8 *)&PTR_FUN_0056a9dc,unaff_EDI,unaff_ESI);
      }
      *param_2 = _DAT_00582ae8;
      param_2[1] = DAT_00582af0;
      param_2[2] = _DAT_00582af8;
      param_2[3] = DAT_00582b00;
      return 0;
    case 6:
      DAT_00582b70 = param_2;
      DAT_00582b74 = param_3;
      DAT_00582b78 = param_4;
      return 0;
    case 7:
      DAT_00582b7c = param_2;
      DAT_00582b80 = param_3;
      DAT_00582b84 = param_4;
      return 0;
    default:
      uVar2 = 1;
switchD_004bc47c_caseD_e:
      return uVar2;
    case 9:
      DAT_00582ac8 = param_2;
      return 0;
    case 10:
      DAT_00582b08 = *param_2;
      _DAT_00582b10 = param_2[1];
      _DAT_00582b18 = param_2[2];
      _DAT_00582b20 = param_2[3];
      DAT_00582b28 = *(undefined4 *)(param_2 + 4);
      return 0;
    case 0xb:
      *param_2 = DAT_00582b08;
      param_2[1] = _DAT_00582b10;
      param_2[2] = _DAT_00582b18;
      param_2[3] = _DAT_00582b20;
      *(undefined4 *)(param_2 + 4) = DAT_00582b28;
      return 0;
    case 0xd:
      DAT_00582ae0 = param_2;
      DAT_00582ae4 = param_3;
      return 0;
    case 0xe:
      goto switchD_004bc47c_caseD_e;
    case 0x10:
      DAT_00582bac = param_2;
      DAT_00582bb0 = param_3;
      return 0;
    case 0x11:
      DAT_00582ad4 = param_2;
      return 0;
    case 0x12:
      puVar3 = &DAT_00582b2c;
      for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *(undefined4 *)param_2;
        param_2 = (undefined8 *)((int)param_2 + 4);
        puVar3 = puVar3 + 1;
      }
      return 0;
    case 0x13:
      if (DAT_00582b34 == 0) {
        FUN_004bc440(0x12,(undefined8 *)&DAT_00569e0c,unaff_EDI,unaff_ESI);
      }
      puVar3 = &DAT_00582b2c;
      for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(undefined4 *)param_2 = *puVar3;
        puVar3 = puVar3 + 1;
        param_2 = (undefined8 *)((int)param_2 + 4);
      }
      return 0;
    case 0x14:
      DAT_00582ad8 = param_2;
      return 0;
    }
  }
  FUN_004683f0(0x15,"misuse at line %d of [%.10s]");
  return 0x15;
}


/* FUN_004bc720 @ 004bc720  kind=lib  attributed-by=lib-island  size=129 */

undefined4 __cdecl FUN_004bc720(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b18)(*(int *)(param_1 + 0xc));
  }
  FUN_0048fca0(param_1);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 4 + iVar2);
      if ((iVar1 != 0) &&
         (iVar1 = *(int *)(*(int *)(**(int **)(iVar1 + 4) + 0xb4) + 0x28), iVar1 != 0)) {
        (*DAT_00582b5c)(iVar1);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0x14));
  }
  FUN_00490780(param_1);
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(param_1 + 0xc));
  }
  return 0;
}


/* FUN_004bc7b0 @ 004bc7b0  kind=lib  attributed-by=lib-string  size=357 */

undefined4 __cdecl FUN_004bc7b0(int *param_1,int param_2,int param_3)

{
  size_t _Size;
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  void *_Dst;
  
  iVar4 = param_2;
  if ((param_1[3] == 0) && (param_3 != 0)) {
    iVar4 = param_2 * 2;
  }
  if (param_1[2] < param_1[5] + iVar4) {
    iVar4 = iVar4 + param_1[2] * 2;
    param_1[2] = iVar4;
    iVar5 = *param_1;
    iVar3 = FUN_004bc920();
    if ((iVar3 != 0) || (iVar4 = FUN_004a6140(iVar5,iVar4 * 4), iVar4 == 0)) {
LAB_004bc8fa:
      param_1[6] = 7;
      return 1;
    }
    *param_1 = iVar4;
  }
  if (param_1[3] == 0) {
    iVar4 = 0;
    param_1[4] = param_2;
    if (0 < param_2) {
      do {
        iVar5 = FUN_004666d0(&DAT_0056de50);
        if (iVar5 == 0) goto LAB_004bc8fa;
        iVar4 = iVar4 + 1;
        *(int *)(*param_1 + param_1[5] * 4) = iVar5;
        param_1[5] = param_1[5] + 1;
      } while (iVar4 < param_2);
    }
  }
  else if (param_1[4] != param_2) {
    FUN_00466dd0(param_1[1]);
    iVar4 = FUN_004666d0((byte *)"sqlite3_get_table() called with two or more incompatible queries")
    ;
    param_1[1] = iVar4;
    param_1[6] = 1;
    return 1;
  }
  if (param_3 != 0) {
    iVar4 = 0;
    if (0 < param_2) {
      do {
        pcVar2 = *(char **)(param_3 + iVar4 * 4);
        if (pcVar2 == (char *)0x0) {
          _Dst = (void *)0x0;
        }
        else {
          cVar1 = *pcVar2;
          pcVar6 = pcVar2;
          while (cVar1 != '\0') {
            pcVar6 = pcVar6 + 1;
            cVar1 = *pcVar6;
          }
          _Size = ((int)pcVar6 - (int)pcVar2 & 0x3fffffffU) + 1;
          iVar5 = FUN_004bc920();
          if ((iVar5 != 0) || (_Dst = (void *)FUN_004a0350(_Size), _Dst == (void *)0x0))
          goto LAB_004bc8fa;
          memcpy(_Dst,*(void **)(param_3 + iVar4 * 4),_Size);
        }
        iVar4 = iVar4 + 1;
        *(void **)(*param_1 + param_1[5] * 4) = _Dst;
        param_1[5] = param_1[5] + 1;
      } while (iVar4 < param_2);
    }
    param_1[3] = param_1[3] + 1;
  }
  return 0;
}


/* FUN_004bc920 @ 004bc920  kind=lib  attributed-by=lib-island  size=548 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004bc920(void)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  
  if (DAT_00582b90 != 0) {
    return 0;
  }
  iVar1 = FUN_004a0cd0();
  if (iVar1 != 0) {
    return iVar1;
  }
  if (DAT_00582acc == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*DAT_00582b10)(2);
    if (iVar1 != 0) {
      (*DAT_00582b18)(iVar1);
    }
  }
  _DAT_00582b98 = 1;
  iVar2 = 0;
  if ((DAT_00582b9c != 0) || (iVar2 = FUN_004a0440(unaff_EDI), iVar2 == 0)) {
    DAT_00582b9c = 1;
    if (DAT_00582ba4 == 0) {
      if (DAT_00582acc != 0) {
        DAT_00582ba4 = (*DAT_00582b10)(1);
      }
      if ((DAT_00582acc != 0) && (DAT_00582ba4 == 0)) {
        iVar2 = 7;
        goto LAB_004bc9d1;
      }
    }
    DAT_00582ba8 = DAT_00582ba8 + 1;
  }
LAB_004bc9d1:
  if (iVar1 != 0) {
    (*DAT_00582b20)(iVar1);
  }
  if (iVar2 != 0) {
    return iVar2;
  }
  if (DAT_00582ba4 != 0) {
    (*DAT_00582b18)(DAT_00582ba4);
  }
  iVar2 = 0;
  if ((DAT_00582b90 != 0) || (DAT_00582b94 != 0)) goto LAB_004bcae2;
  DAT_00582b94 = 1;
  memset(&DAT_00583f68,0,0x5c);
  FUN_004a65c0();
  if (DAT_00582ba0 == 0) {
    if (DAT_00582b34 == (code *)0x0) {
      FUN_004bc440(0x12,(undefined8 *)&DAT_00569e0c,unaff_EDI,unaff_ESI);
    }
    iVar2 = (*DAT_00582b34)(DAT_00582b30);
    if (iVar2 == 0) goto LAB_004bca72;
  }
  else {
LAB_004bca72:
    DAT_00582ba0 = 1;
    iVar2 = FUN_004bc920();
    if ((iVar2 == 0) && (iVar2 = FUN_004a0350(10), iVar2 != 0)) {
      FUN_00466dd0(iVar2);
      iVar2 = FUN_004bcbc0();
      if (iVar2 == 0) {
        FUN_004a13b0(DAT_00582b7c,DAT_00582b80,DAT_00582b84);
        DAT_00582b90 = 1;
      }
    }
    else {
      iVar2 = 7;
    }
  }
  DAT_00582b94 = 0;
LAB_004bcae2:
  if (DAT_00582ba4 != 0) {
    (*DAT_00582b20)(DAT_00582ba4);
  }
  if (iVar1 != 0) {
    (*DAT_00582b18)(iVar1);
  }
  DAT_00582ba8 = DAT_00582ba8 + -1;
  if (DAT_00582ba8 < 1) {
    if (DAT_00582ba4 != 0) {
      (*DAT_00582b14)(DAT_00582ba4);
    }
    DAT_00582ba4 = 0;
  }
  if (iVar1 != 0) {
    (*DAT_00582b20)(iVar1);
  }
  return iVar2;
}


/* FUN_004bcbc0 @ 004bcbc0  kind=lib  attributed-by=lib-island  size=159 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004bcbc0(void)

{
  int iVar1;
  
  _DAT_00584660 = 0;
  _DAT_00584668 = 0;
  _DAT_00584670 = 0;
  _DAT_00584678 = 0;
  _DAT_00584680 = 0;
  (*(code *)PTR_GetSystemInfo_005836bc)(&DAT_00584660);
  iVar1 = FUN_004bc920();
  if (iVar1 == 0) {
    if (DAT_00582acc == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*DAT_00582b10)(2);
      if (iVar1 != 0) {
        (*DAT_00582b18)(iVar1);
      }
    }
    FUN_004bfd90(0x583460);
    _DAT_0058346c = DAT_00583e70;
    DAT_00583e70 = &DAT_00583460;
    if (iVar1 != 0) {
      (*DAT_00582b20)(iVar1);
    }
    return 0;
  }
  return 0;
}


/* FUN_004bcc60 @ 004bcc60  kind=lib  attributed-by=lib-island  size=70 */

int __cdecl FUN_004bcc60(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  
  bVar2 = *param_1;
  while ((bVar2 != 0 && ((&DAT_00569620)[bVar2] == (&DAT_00569620)[*param_2]))) {
    pbVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    bVar2 = *pbVar1;
  }
  return (uint)(byte)(&DAT_00569620)[*param_1] - (uint)(byte)(&DAT_00569620)[*param_2];
}


/* FUN_004bcd90 @ 004bcd90  kind=lib  attributed-by=lib-island  size=31 */

void __cdecl FUN_004bcd90(int *param_1)

{
  FUN_004962b0(param_1,(byte *)"authorizer malfunction");
  param_1[3] = 1;
  return;
}


/* FUN_004bce20 @ 004bce20  kind=lib  attributed-by=lib-island  size=249 */

void __cdecl FUN_004bce20(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  
  iVar2 = param_2;
  puVar4 = *(uint **)(param_2 + 4);
  if (puVar4 != (uint *)0x0) {
    param_2 = 0;
    if (0 < *(short *)(iVar2 + 0x26)) {
      do {
        puVar1 = (undefined4 *)*puVar4;
        if (param_1 == 0) {
LAB_004bcec2:
          FUN_00466dd0((int)puVar1);
        }
        else if (*(int *)(param_1 + 0x1f0) == 0) {
          if (((puVar1 == (undefined4 *)0x0) || (puVar1 < *(undefined4 **)(param_1 + 0x104))) ||
             (*(undefined4 **)(param_1 + 0x108) <= puVar1)) goto LAB_004bcec2;
          *puVar1 = *(undefined4 *)(param_1 + 0x100);
          *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + -1;
          *(undefined4 **)(param_1 + 0x100) = puVar1;
        }
        else if (((puVar1 == (undefined4 *)0x0) || (puVar1 < *(undefined4 **)(param_1 + 0x104))) ||
                (*(undefined4 **)(param_1 + 0x108) <= puVar1)) {
          iVar3 = (*DAT_00582af0._4_4_)(puVar1);
          **(int **)(param_1 + 0x1f0) = **(int **)(param_1 + 0x1f0) + iVar3;
        }
        else {
          **(int **)(param_1 + 0x1f0) =
               **(int **)(param_1 + 0x1f0) + (uint)*(ushort *)(param_1 + 0xe8);
        }
        FUN_00498790(param_1,(undefined4 *)puVar4[1]);
        FUN_00494b00(param_1,(undefined4 *)puVar4[2]);
        FUN_00494b00(param_1,(undefined4 *)puVar4[3]);
        FUN_00494b00(param_1,(undefined4 *)puVar4[4]);
        param_2 = param_2 + 1;
        puVar4 = puVar4 + 6;
      } while (param_2 < *(short *)(iVar2 + 0x26));
    }
    FUN_00494b00(param_1,*(undefined4 **)(iVar2 + 4));
  }
  return;
}


/* FUN_004bcf20 @ 004bcf20  kind=lib  attributed-by=lib-island  size=515 */

undefined4 __cdecl FUN_004bcf20(int *param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  char *pcVar3;
  short *psVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  int *local_20;
  short *local_1c;
  int local_18;
  int *local_14;
  int *local_10;
  uint local_c;
  int local_8;
  
  psVar4 = *(short **)(param_2 + 0x28);
  local_8 = 0;
  if (0 < *psVar4 + -1) {
    piVar7 = (int *)(psVar4 + 0x40);
    local_10 = (int *)(psVar4 + 0xc);
    local_1c = psVar4;
    do {
      local_18 = piVar7[-8];
      if ((*local_10 != 0) && (local_18 != 0)) {
        local_c = *(byte *)(piVar7 + -4) >> 5 & 1;
        local_20 = piVar7;
        if ((*(byte *)(piVar7 + -4) & 4) != 0) {
          if ((*piVar7 != 0) || (piVar7[1] != 0)) {
            pcVar3 = "a NATURAL join may not have an ON or USING clause";
LAB_004bd0df:
            FUN_004962b0(param_1,(byte *)pcVar3);
            return 1;
          }
          uVar5 = 0;
          if (0 < *(short *)(local_18 + 0x26)) {
            local_14 = (int *)(local_8 + 1);
            iVar6 = 0;
            do {
              iVar2 = FUN_004bd8f0((int)psVar4,(int)local_14,
                                   *(byte **)(iVar6 + *(int *)(local_18 + 4)),&local_28,
                                   (int *)&local_24);
              if (iVar2 != 0) {
                FUN_0046b9f0(param_1,(int)psVar4,local_28,local_24,(int)local_14,uVar5,local_c,
                             (undefined4 *)(param_2 + 0x2c));
              }
              uVar5 = uVar5 + 1;
              iVar6 = iVar6 + 0x18;
            } while ((int)uVar5 < (int)*(short *)(local_18 + 0x26));
          }
        }
        piVar7 = local_20;
        if (*local_20 != 0) {
          if (local_20[1] != 0) {
            FUN_004962b0(param_1,(byte *)"cannot have both ON and USING clauses in the same join");
            return 1;
          }
          if (local_c != 0) {
            FUN_0048b500(*local_20,local_20[-1]);
          }
          pcVar3 = FUN_004966d0(*param_1,*(char **)(param_2 + 0x2c),(char *)*piVar7);
          *(char **)(param_2 + 0x2c) = pcVar3;
          *piVar7 = 0;
        }
        local_14 = (int *)piVar7[1];
        if ((local_14 != (int *)0x0) && (iVar6 = 0, 0 < local_14[1])) {
          do {
            pbVar1 = *(byte **)(*local_14 + iVar6 * 8);
            local_20 = (int *)FUN_00474f60(local_18,pbVar1);
            if (((int)local_20 < 0) ||
               (iVar2 = FUN_004bd8f0((int)local_1c,local_8 + 1,pbVar1,&local_30,(int *)&local_2c),
               psVar4 = local_1c, iVar2 == 0)) {
              pcVar3 = "cannot join using column %s - column not present in both tables";
              goto LAB_004bd0df;
            }
            FUN_0046b9f0(param_1,(int)local_1c,local_30,local_2c,local_8 + 1,(uint)local_20,local_c,
                         (undefined4 *)(param_2 + 0x2c));
            iVar6 = iVar6 + 1;
          } while (iVar6 < local_14[1]);
        }
      }
      local_10 = local_10 + 0x12;
      local_8 = local_8 + 1;
      piVar7 = piVar7 + 0x12;
    } while (local_8 < *psVar4 + -1);
  }
  return 0;
}


/* FUN_004bd130 @ 004bd130  kind=lib  attributed-by=lib-island  size=213 */

void __cdecl FUN_004bd130(int param_1,int param_2)

{
  ushort *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar4 = param_1;
  iVar2 = *(int *)(param_2 * 0x10 + 0xc + *(int *)(param_1 + 0x10));
  if ((*(byte *)(iVar2 + 0x4e) & 2) != 0) {
    for (puVar3 = *(undefined4 **)(iVar2 + 0x10); puVar3 != (undefined4 *)0x0;
        puVar3 = (undefined4 *)*puVar3) {
      iVar2 = puVar3[2];
      if (*(int *)(iVar2 + 0xc) != 0) {
        puVar5 = *(undefined4 **)(iVar2 + 4);
        if (puVar5 != (undefined4 *)0x0) {
          param_1 = 0;
          if (0 < *(short *)(iVar2 + 0x26)) {
            do {
              FUN_00494b00(iVar4,(undefined4 *)*puVar5);
              FUN_00498790(iVar4,(undefined4 *)puVar5[1]);
              FUN_00494b00(iVar4,(undefined4 *)puVar5[2]);
              FUN_00494b00(iVar4,(undefined4 *)puVar5[3]);
              FUN_00494b00(iVar4,(undefined4 *)puVar5[4]);
              param_1 = param_1 + 1;
              puVar5 = puVar5 + 6;
            } while (param_1 < *(short *)(iVar2 + 0x26));
          }
          FUN_00494b00(iVar4,*(undefined4 **)(iVar2 + 4));
        }
        *(undefined4 *)(iVar2 + 4) = 0;
        *(undefined2 *)(iVar2 + 0x26) = 0;
      }
    }
    puVar1 = (ushort *)(*(int *)(param_2 * 0x10 + 0xc + *(int *)(iVar4 + 0x10)) + 0x4e);
    *puVar1 = *puVar1 & 0xfffd;
  }
  return;
}


/* FUN_004bd210 @ 004bd210  kind=lib  attributed-by=lib-island  size=54 */

uint __cdecl FUN_004bd210(byte *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  for (; 0 < param_2; param_2 = param_2 + -1) {
    uVar1 = uVar1 ^ (uint)(byte)(&DAT_00569620)[*param_1] ^ uVar1 * 8;
    param_1 = param_1 + 1;
  }
  return uVar1;
}


/* FUN_004bd250 @ 004bd250  kind=lib  attributed-by=lib-island  size=253 */

undefined4 __cdecl FUN_004bd250(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  piVar1 = (int *)(param_1 + 0x10);
  uVar2 = *(uint *)(param_1 + 0x14);
  iVar3 = *(int *)(*piVar1 + 0x60);
  param_1 = 0;
  if (0 < iVar3) {
    puVar8 = (undefined4 *)(*(int *)(*piVar1 + 0x5c) + 0x10);
    do {
      if (uVar2 <= (uint)puVar8[1]) {
        puVar4 = (uint *)*puVar8;
        if (((puVar4 == (uint *)0x0) || (*puVar4 < uVar2)) || (uVar2 == 0)) {
          return 1;
        }
        uVar7 = uVar2 - 1;
        uVar6 = puVar4[2];
        while (uVar6 != 0) {
          uVar5 = uVar7 / uVar6;
          uVar7 = uVar7 % uVar6;
          puVar4 = (uint *)puVar4[uVar5 + 3];
          if (puVar4 == (uint *)0x0) {
            return 1;
          }
          uVar6 = puVar4[2];
        }
        if (*puVar4 < 0xfa1) {
          if ((*(byte *)((uVar7 >> 3) + 0xc + (int)puVar4) & (byte)(1 << ((byte)uVar7 & 7))) == 0) {
            return 1;
          }
        }
        else {
          uVar5 = uVar7 % 0x7d;
          uVar6 = puVar4[uVar5 + 3];
          if (uVar6 == 0) {
            return 1;
          }
          while (uVar6 != uVar7 + 1) {
            uVar5 = (uVar5 + 1) % 0x7d;
            uVar6 = puVar4[uVar5 + 3];
            if (uVar6 == 0) {
              return 1;
            }
          }
        }
      }
      param_1 = param_1 + 1;
      puVar8 = puVar8 + 0xc;
    } while (param_1 < iVar3);
  }
  return 0;
}


/* FUN_004bd350 @ 004bd350  kind=lib  attributed-by=lib-island  size=199 */

void __cdecl FUN_004bd350(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar4 = param_1;
  piVar1 = *(int **)(param_1 + 0x10);
  if (*(char *)((int)piVar1 + 5) != '\x02') {
    iVar5 = FUN_00483b10(piVar1);
    if (iVar5 != 0) {
      return;
    }
    lVar6 = __allmul(piVar1[0xd],0,piVar1[0x20] + 4U,(int)(piVar1[0x20] + 4U) >> 0x1f);
    uVar2 = *(undefined4 *)(iVar4 + 0x14);
    uVar3 = *(undefined4 *)(iVar4 + 4);
    param_1 = CONCAT13((char)uVar2,
                       CONCAT12((char)((uint)uVar2 >> 8),
                                CONCAT11((char)((uint)uVar2 >> 0x10),(char)((uint)uVar2 >> 0x18))));
    iVar5 = (**(code **)(*(int *)piVar1[0x11] + 0xc))((int *)piVar1[0x11],&param_1,4,lVar6);
    if (iVar5 != 0) {
      return;
    }
    iVar5 = (**(code **)(*(int *)piVar1[0x11] + 0xc))
                      ((int *)piVar1[0x11],uVar3,piVar1[0x20],lVar6 + 4);
    if (iVar5 != 0) {
      return;
    }
  }
  piVar1[0xd] = piVar1[0xd] + 1;
  FUN_0046b780((int)piVar1,*(uint *)(iVar4 + 0x14));
  return;
}


/* FUN_004bd420 @ 004bd420  kind=lib  attributed-by=lib-island  size=184 */

char * __cdecl FUN_004bd420(int param_1,char *param_2,int param_3,int param_4)

{
  char *pcVar1;
  
  if (param_2 == (char *)0x0) {
    return (char *)0x0;
  }
  if ((*param_2 == -0x68) && (*(int *)(param_2 + 0x18) == param_3)) {
    if (*(short *)(param_2 + 0x1c) < 0) {
      *param_2 = 'b';
      return param_2;
    }
    pcVar1 = (char *)FUN_00478bb0(param_1,*(undefined4 **)
                                           (*(int *)(param_4 + 8) +
                                           *(short *)(param_2 + 0x1c) * 0x14),0,(int *)0x0);
    FUN_00498790(param_1,(undefined4 *)param_2);
    return pcVar1;
  }
  pcVar1 = FUN_004bd420(param_1,*(char **)(param_2 + 8),param_3,param_4);
  *(char **)(param_2 + 8) = pcVar1;
  pcVar1 = FUN_004bd420(param_1,*(char **)(param_2 + 0xc),param_3,param_4);
  *(char **)(param_2 + 0xc) = pcVar1;
  if ((*(ushort *)(param_2 + 2) & 0x800) != 0) {
    FUN_004bd520(param_1,*(int **)(param_2 + 0x10),param_3,param_4);
    return param_2;
  }
  FUN_004bd4e0(param_1,*(int **)(param_2 + 0x10),param_3,param_4);
  return param_2;
}


/* FUN_004bd4e0 @ 004bd4e0  kind=lib  attributed-by=lib-island  size=63 */

void __cdecl FUN_004bd4e0(int param_1,int *param_2,int param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  if ((param_2 != (int *)0x0) && (iVar2 = 0, 0 < *param_2)) {
    iVar3 = 0;
    do {
      pcVar1 = FUN_004bd420(param_1,*(char **)(iVar3 + param_2[2]),param_3,param_4);
      iVar2 = iVar2 + 1;
      *(char **)(iVar3 + param_2[2]) = pcVar1;
      iVar3 = iVar3 + 0x14;
    } while (iVar2 < *param_2);
  }
  return;
}


/* FUN_004bd520 @ 004bd520  kind=lib  attributed-by=lib-island  size=174 */

void __cdecl FUN_004bd520(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  short *psVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    FUN_004bd4e0(param_1,(int *)*param_2,param_3,param_4);
    FUN_004bd4e0(param_1,(int *)param_2[0xc],param_3,param_4);
    FUN_004bd4e0(param_1,(int *)param_2[0xe],param_3,param_4);
    pcVar1 = FUN_004bd420(param_1,(char *)param_2[0xd],param_3,param_4);
    param_2[0xd] = pcVar1;
    pcVar1 = FUN_004bd420(param_1,(char *)param_2[0xb],param_3,param_4);
    param_2[0xb] = pcVar1;
    FUN_004bd520(param_1,(undefined4 *)param_2[0xf],param_3,param_4);
    psVar3 = (short *)param_2[10];
    if ((psVar3 != (short *)0x0) && (iVar2 = (int)*psVar3, 0 < iVar2)) {
      psVar3 = psVar3 + 0xe;
      do {
        FUN_004bd520(param_1,*(undefined4 **)psVar3,param_3,param_4);
        iVar2 = iVar2 + -1;
        psVar3 = psVar3 + 0x24;
      } while (0 < iVar2);
    }
  }
  return;
}


/* FUN_004bd5d0 @ 004bd5d0  kind=lib  attributed-by=lib-island  size=494 */

void __cdecl FUN_004bd5d0(uint param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [4];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  if ((*(int *)(param_1 + 0xb8) != 0) || (iVar2 = FUN_004854a0(param_1,4), iVar2 == 0)) {
    if (*(char *)(param_1 + 7) == '\0') {
      if ((**(int **)(param_1 + 0x40) == 0) || (*(char *)(param_1 + 5) == '\x04')) {
        *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x48);
        *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x4c);
      }
      else {
        uVar3 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x30))(*(int **)(param_1 + 0x3c));
        if ((uVar3 & 0x200) == 0) {
          local_14 = 0xf905d5d9;
          local_10 = 0xd763a120;
          FUN_004a5f90(local_c,*(undefined4 *)(param_1 + 0x2c));
          lVar5 = FUN_0047f590(param_1);
          iVar2 = (**(code **)(**(int **)(param_1 + 0x40) + 8))
                            (*(int **)(param_1 + 0x40),&local_1c,8,lVar5);
          if ((((iVar2 != 0) ||
               (((local_1c == -0x6fa2a27 && (local_18 == -0x289c5ee0)) &&
                (iVar2 = (**(code **)(**(int **)(param_1 + 0x40) + 0xc))
                                   (*(int **)(param_1 + 0x40),&DAT_005699af,1,lVar5), iVar2 != 0))))
              && (iVar2 != 0x20a)) ||
             ((((*(char *)(param_1 + 8) != '\0' && ((uVar3 & 0x400) == 0)) &&
               (iVar2 = (**(code **)(**(int **)(param_1 + 0x40) + 0x14))
                                  (*(int **)(param_1 + 0x40),*(undefined1 *)(param_1 + 0xb)),
               iVar2 != 0)) ||
              (iVar2 = (**(code **)(**(int **)(param_1 + 0x40) + 0xc))
                                 (*(int **)(param_1 + 0x40),&local_14,0xc,
                                  *(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54)),
              iVar2 != 0)))) goto LAB_004bd7af;
        }
        if ((uVar3 & 0x400) == 0) {
          bVar4 = 0;
          if (*(char *)(param_1 + 0xb) == '\x03') {
            bVar4 = 0x10;
          }
          iVar2 = (**(code **)(**(int **)(param_1 + 0x40) + 0x14))
                            (*(int **)(param_1 + 0x40),bVar4 | *(byte *)(param_1 + 0xb));
          if (iVar2 != 0) goto LAB_004bd7af;
        }
        *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x48);
        *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x4c);
        if ((param_2 != 0) && ((uVar3 & 0x200) == 0)) {
          *(undefined4 *)(param_1 + 0x2c) = 0;
          iVar2 = FUN_004c29f0(param_1);
          if (iVar2 != 0) {
            __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
            return;
          }
        }
      }
    }
    piVar1 = *(int **)(param_1 + 0xb4);
    for (iVar2 = *piVar1; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x20)) {
      *(ushort *)(iVar2 + 0x18) = *(ushort *)(iVar2 + 0x18) & 0xfffb;
    }
    piVar1[2] = piVar1[1];
    *(undefined1 *)(param_1 + 0xf) = 4;
  }
LAB_004bd7af:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004bd7c0 @ 004bd7c0  kind=lib  attributed-by=lib-island  size=276 */

undefined4 __cdecl FUN_004bd7c0(int param_1,undefined8 *param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  int local_c;
  
  pbVar3 = *(byte **)param_2;
  local_c = 0;
  while( true ) {
    bVar1 = (&DAT_005699ac)[local_c];
    if (pbVar3 == (byte *)0x0) {
      iVar7 = *(int *)(param_1 + 8);
    }
    else {
      bVar2 = *pbVar3;
      pbVar5 = pbVar3;
      while (bVar2 != 0) {
        pbVar5 = pbVar5 + 1;
        bVar2 = *pbVar5;
      }
      uVar6 = (int)pbVar5 - (int)pbVar3 & 0x3fffffff;
      if (*(int *)(param_1 + 0x1a8) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        pbVar5 = pbVar3;
        uVar9 = uVar6;
        if (uVar6 != 0) {
          do {
            uVar9 = uVar9 - 1;
            uVar10 = uVar10 ^ (uint)(byte)(&DAT_00569620)[*pbVar5] ^ uVar10 * 8;
            pbVar5 = pbVar5 + 1;
          } while (0 < (int)uVar9);
        }
        uVar10 = uVar10 % *(uint *)(param_1 + 0x19c);
      }
      puVar4 = FUN_00479af0(param_1 + 0x19c,pbVar3,uVar6,uVar10);
      if (puVar4 == (undefined4 *)0x0) {
        iVar7 = 0;
      }
      else {
        iVar7 = puVar4[2];
      }
    }
    puVar8 = (undefined8 *)0x0;
    if (iVar7 != 0) {
      puVar8 = (undefined8 *)(iVar7 + (uint)bVar1 * 0x14 + -0x14);
    }
    if (*(int *)((int)puVar8 + 0xc) != 0) break;
    local_c = local_c + 1;
    if (2 < local_c) {
      return 1;
    }
  }
  *param_2 = *puVar8;
  param_2[1] = puVar8[1];
  *(undefined4 *)(param_2 + 2) = 0;
  return 0;
}


/* FUN_004bd8f0 @ 004bd8f0  kind=lib  attributed-by=lib-island  size=193 */

undefined4 __cdecl FUN_004bd8f0(int param_1,int param_2,byte *param_3,int *param_4,int *param_5)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  int iVar8;
  int local_8;
  
  local_8 = 0;
  if (0 < param_2) {
    piVar4 = (int *)(param_1 + 0x18);
    do {
      iVar8 = 0;
      iVar5 = (int)*(short *)(*piVar4 + 0x26);
      if (0 < iVar5) {
        puVar6 = *(undefined4 **)(*piVar4 + 4);
        do {
          pbVar3 = (byte *)*puVar6;
          bVar2 = *pbVar3;
          pbVar7 = param_3;
          while ((bVar2 != 0 && ((&DAT_00569620)[bVar2] == (&DAT_00569620)[*pbVar7]))) {
            pbVar1 = pbVar3 + 1;
            pbVar3 = pbVar3 + 1;
            pbVar7 = pbVar7 + 1;
            bVar2 = *pbVar1;
          }
          if ((&DAT_00569620)[*pbVar3] == (&DAT_00569620)[*pbVar7]) {
            if (-1 < iVar8) {
              if (param_4 != (int *)0x0) {
                *param_4 = local_8;
                *param_5 = iVar8;
              }
              return 1;
            }
            break;
          }
          iVar8 = iVar8 + 1;
          puVar6 = puVar6 + 6;
        } while (iVar8 < iVar5);
      }
      local_8 = local_8 + 1;
      piVar4 = piVar4 + 0x12;
    } while (local_8 < param_2);
  }
  return 0;
}


/* FUN_004bd9c0 @ 004bd9c0  kind=lib  attributed-by=lib-island  size=95 */

undefined4 __cdecl FUN_004bd9c0(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  byte *pbVar6;
  uint uVar7;
  
  pbVar2 = *(byte **)(param_1 + 4);
  uVar7 = 0;
  if (pbVar2 != (byte *)0x0) {
    bVar1 = *pbVar2;
    pbVar6 = pbVar2;
    while (bVar1 != 0) {
      pbVar6 = pbVar6 + 1;
      bVar1 = *pbVar6;
    }
    uVar7 = (int)pbVar6 - (int)pbVar2 & 0x3fffffff;
  }
  puVar5 = (uint *)(*(int *)(param_1 + 0x18) + 8);
  if (*(int *)(*(int *)(param_1 + 0x18) + 0x14) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004bd210(pbVar2,uVar7);
    uVar3 = uVar3 % *puVar5;
  }
  puVar4 = FUN_00479af0((int)puVar5,pbVar2,uVar7,uVar3);
  if (puVar4 == (undefined4 *)0x0) {
    return 0;
  }
  return puVar4[2];
}


/* FUN_004bda20 @ 004bda20  kind=lib  attributed-by=lib-island  size=241 */

short * __cdecl FUN_004bda20(int *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  
  iVar2 = *param_1;
  psVar4 = (short *)FUN_00494b90(iVar2,0x50);
  if (psVar4 == (short *)0x0) {
    return (short *)0x0;
  }
  memset(psVar4,0,0x50);
  psVar4[1] = 1;
  psVar4 = FUN_004a9fc0(iVar2,psVar4,1,(int)*psVar4);
  if (*(char *)(iVar2 + 0x38) != '\0') {
    FUN_004a9cb0(iVar2,psVar4);
    return (short *)0x0;
  }
  sVar1 = *psVar4;
  pcVar5 = FUN_004a0d40(iVar2,(undefined4 *)(param_2 + 0xc));
  *(char **)(psVar4 + sVar1 * 0x24 + -0x1c) = pcVar5;
  pcVar5 = FUN_004a0d40(iVar2,(undefined4 *)0x0);
  *(char **)(psVar4 + sVar1 * 0x24 + -0x1e) = pcVar5;
  iVar2 = *(int *)(*(int *)(param_2 + 4) + 0x14);
  iVar3 = *param_1;
  if (iVar2 != 0) {
    iVar7 = 0;
    if (0 < *(int *)(iVar3 + 0x14)) {
      piVar8 = (int *)(*(int *)(iVar3 + 0x10) + 0xc);
      do {
        if (*piVar8 == iVar2) break;
        iVar7 = iVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (iVar7 < *(int *)(iVar3 + 0x14));
      if ((iVar7 != 0) && (iVar7 < 2)) {
        return psVar4;
      }
    }
    puVar6 = FUN_00494db0(iVar3,*(char **)(*(int *)(iVar3 + 0x10) + iVar7 * 0x10));
    *(undefined4 **)(psVar4 + *psVar4 * 0x24 + -0x1e) = puVar6;
  }
  return psVar4;
}


/* FUN_004bdd50 @ 004bdd50  kind=lib  attributed-by=lib-island  size=1586 */

void __cdecl FUN_004bdd50(int *param_1,undefined1 *param_2)

{
  int iVar1;
  int *piVar2;
  byte *pbVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int local_2c;
  int local_28;
  int local_24;
  int *local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_c;
  
  piVar4 = param_1;
  piVar2 = (int *)param_1[2];
  local_18 = 0;
  local_1c = 0;
  *param_2 = 1;
  FUN_00496a90((int)param_1);
  piVar5 = *(int **)(param_2 + 0x20);
  local_28 = 0;
  if (0 < *(int *)(param_2 + 0x24)) {
    do {
      local_24 = 0;
      piVar10 = *(int **)(*piVar5 + 0x10);
      if (piVar10 == (int *)0x0) {
        local_14 = 0;
        local_c = 0;
      }
      else {
        local_14 = *piVar10;
        local_c = param_1[0x10];
        if (param_1[0xf] < local_14) {
          local_c = param_1[0x13] + 1;
          param_1[0x13] = param_1[0x13] + local_14;
          FUN_00497010((int)param_1,piVar10,local_c,1);
        }
        else {
          param_1[0x10] = local_c + local_14;
          param_1[0xf] = param_1[0xf] - local_14;
          FUN_00497010((int)param_1,piVar10,local_c,1);
        }
      }
      if (-1 < piVar5[3]) {
        uVar9 = piVar2[9];
        piVar2[9] = uVar9 + 1;
        if ((uVar9 & uVar9 - 1) == 0) {
          puVar7 = (undefined4 *)piVar2[10];
          iVar11 = *piVar2;
          puVar6 = FUN_00494cf0(iVar11,puVar7,uVar9 * 8 + 4);
          if (puVar6 == (undefined4 *)0x0) {
            FUN_00494b00(iVar11,puVar7);
          }
          piVar2[10] = (int)puVar6;
        }
        if (piVar2[10] != 0) {
          *(undefined4 *)(piVar2[10] + uVar9 * 4) = 0xffffffff;
        }
        local_24 = -1 - uVar9;
        FUN_00473550((int)param_1,piVar5[3],local_24,(int *)0x1,local_c);
      }
      if ((*(byte *)(piVar5[1] + 3) & 8) != 0) {
        puVar7 = (undefined4 *)piVar10[2];
        local_20 = (int *)0x0;
        iVar11 = 0;
        do {
          if (local_14 <= iVar11) {
            if (local_20 == (int *)0x0) {
              local_20 = *(int **)(*param_1 + 8);
            }
            break;
          }
          local_20 = (int *)FUN_004984d0(param_1,(char *)*puVar7);
          iVar11 = iVar11 + 1;
          puVar7 = puVar7 + 5;
        } while (local_20 == (int *)0x0);
        if ((local_18 == 0) && (*(int *)(param_2 + 0x1c) != 0)) {
          param_1[0x13] = param_1[0x13] + 1;
          local_18 = param_1[0x13];
        }
        iVar11 = piVar2[7];
        iVar12 = piVar2[8];
        if (iVar11 < iVar12) {
LAB_004bdf58:
          iVar12 = piVar2[1];
          piVar2[7] = piVar2[7] + 1;
          *(int *)(iVar12 + 4 + iVar11 * 0x14) = local_18;
          *(undefined2 *)(iVar12 + iVar11 * 0x14) = 0x11;
          *(undefined1 *)(iVar12 + 3 + iVar11 * 0x14) = 0;
          *(undefined4 *)(iVar12 + 8 + iVar11 * 0x14) = 0;
          *(undefined4 *)(iVar12 + 0xc + iVar11 * 0x14) = 0;
          *(undefined4 *)(iVar12 + 0x10 + iVar11 * 0x14) = 0;
        }
        else {
          if (iVar12 == 0) {
            iVar12 = 0x33;
          }
          else {
            iVar12 = iVar12 * 2;
          }
          puVar7 = FUN_00494cf0(*piVar2,(undefined4 *)piVar2[1],iVar12 * 0x14);
          if (puVar7 != (undefined4 *)0x0) {
            iVar12 = *piVar2;
            if (((iVar12 == 0) || (puVar7 < *(undefined4 **)(iVar12 + 0x104))) ||
               (*(undefined4 **)(iVar12 + 0x108) <= puVar7)) {
              uVar9 = (*DAT_00582af0._4_4_)(puVar7);
            }
            else {
              uVar9 = (uint)*(ushort *)(iVar12 + 0xe8);
            }
            piVar2[8] = uVar9 / 0x14;
            piVar2[1] = (int)puVar7;
            goto LAB_004bdf58;
          }
          iVar11 = 1;
        }
        iVar12 = *piVar2;
        if ((piVar2[1] == 0) || (*(char *)(iVar12 + 0x38) != '\0')) {
          FUN_0047bc80(iVar12,0xfffffffc,local_20);
        }
        else {
          if (iVar11 < 0) {
            iVar11 = piVar2[7] + -1;
          }
          iVar8 = piVar2[1] + iVar11 * 0x14;
          FUN_0047bc80(iVar12,(int)*(char *)(iVar8 + 1),*(int **)(piVar2[1] + 0x10 + iVar11 * 0x14))
          ;
          *(undefined4 *)(iVar8 + 0x10) = 0;
          if (local_20 == (int *)0x0) {
            *(undefined4 *)(iVar8 + 0x10) = 0;
            *(undefined1 *)(iVar8 + 1) = 0;
          }
          else {
            *(int **)(iVar8 + 0x10) = local_20;
            *(undefined1 *)(iVar8 + 1) = 0xfc;
          }
        }
      }
      piVar10 = (int *)piVar5[1];
      iVar11 = piVar5[2];
      iVar12 = piVar2[7];
      iVar8 = piVar2[8];
      if (iVar12 < iVar8) {
LAB_004be07d:
        iVar8 = piVar2[1];
        piVar2[7] = piVar2[7] + 1;
        *(int *)(iVar8 + 8 + iVar12 * 0x14) = local_c;
        *(undefined2 *)(iVar8 + iVar12 * 0x14) = 0x7b;
        *(undefined1 *)(iVar8 + 3 + iVar12 * 0x14) = 0;
        *(undefined4 *)(iVar8 + 4 + iVar12 * 0x14) = 0;
        *(int *)(iVar8 + 0xc + iVar12 * 0x14) = iVar11;
        *(undefined4 *)(iVar8 + 0x10 + iVar12 * 0x14) = 0;
      }
      else {
        if (iVar8 == 0) {
          iVar8 = 0x33;
        }
        else {
          iVar8 = iVar8 * 2;
        }
        puVar7 = FUN_00494cf0(*piVar2,(undefined4 *)piVar2[1],iVar8 * 0x14);
        if (puVar7 != (undefined4 *)0x0) {
          iVar8 = *piVar2;
          if (((iVar8 == 0) || (puVar7 < *(undefined4 **)(iVar8 + 0x104))) ||
             (*(undefined4 **)(iVar8 + 0x108) <= puVar7)) {
            uVar9 = (*DAT_00582af0._4_4_)(puVar7);
          }
          else {
            uVar9 = (uint)*(ushort *)(iVar8 + 0xe8);
          }
          piVar2[1] = (int)puVar7;
          piVar2[8] = uVar9 / 0x14;
          goto LAB_004be07d;
        }
        iVar12 = 1;
      }
      iVar11 = piVar2[1];
      iVar8 = *piVar2;
      if ((iVar11 == 0) || (*(char *)(iVar8 + 0x38) != '\0')) {
        FUN_0047bc80(iVar8,0xfffffffb,piVar10);
      }
      else {
        if (iVar12 < 0) {
          iVar12 = piVar2[7] + -1;
        }
        iVar1 = iVar11 + iVar12 * 0x14;
        FUN_0047bc80(iVar8,(int)*(char *)(iVar1 + 1),*(int **)(iVar11 + 0x10 + iVar12 * 0x14));
        *(undefined4 *)(iVar1 + 0x10) = 0;
        if (piVar10 == (int *)0x0) {
          *(undefined4 *)(iVar1 + 0x10) = 0;
          *(undefined1 *)(iVar1 + 1) = 0;
        }
        else {
          *(int **)(iVar1 + 0x10) = piVar10;
          *(undefined1 *)(iVar1 + 1) = 0xfb;
        }
      }
      if (piVar2[1] != 0) {
        *(char *)(piVar2[1] + -0x11 + piVar2[7] * 0x14) = (char)local_14;
      }
      iVar11 = local_c + local_14 + -1;
      piVar10 = param_1 + 0x1d;
      iVar12 = 10;
      do {
        iVar8 = *piVar10;
        if ((local_c <= iVar8) && (iVar8 <= iVar11)) {
          if ((char)piVar10[-2] != '\0') {
            if (*(byte *)((int)param_1 + 0x13) < 8) {
              param_1[*(byte *)((int)param_1 + 0x13) + 7] = iVar8;
              *(char *)((int)param_1 + 0x13) = *(char *)((int)param_1 + 0x13) + '\x01';
            }
            *(undefined1 *)(piVar10 + -2) = 0;
          }
          *piVar10 = 0;
        }
        piVar10 = piVar10 + 6;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
      piVar10 = param_1 + 0x1d;
      iVar12 = 10;
      do {
        iVar8 = *piVar10;
        if ((local_c <= iVar8) && (iVar8 <= iVar11)) {
          if ((char)piVar10[-2] != '\0') {
            if (*(byte *)((int)param_1 + 0x13) < 8) {
              param_1[*(byte *)((int)param_1 + 0x13) + 7] = iVar8;
              *(char *)((int)param_1 + 0x13) = *(char *)((int)param_1 + 0x13) + '\x01';
            }
            *(undefined1 *)(piVar10 + -2) = 0;
          }
          *piVar10 = 0;
        }
        piVar10 = piVar10 + 6;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
      if (param_1[0xf] < local_14) {
        param_1[0xf] = local_14;
        param_1[0x10] = local_c;
      }
      if (local_24 != 0) {
        if (piVar2[10] != 0) {
          *(int *)(piVar2[10] - (local_24 * 4 + 4)) = piVar2[7];
        }
        FUN_00496a90((int)param_1);
      }
      local_28 = local_28 + 1;
      piVar5 = piVar5 + 4;
    } while (local_28 < *(int *)(param_2 + 0x24));
    if (local_18 != 0) {
      local_1c = piVar2[7];
      if (((int)local_1c < piVar2[8]) || (iVar11 = FUN_0047de10(piVar2), iVar11 == 0)) {
        piVar2[7] = piVar2[7] + 1;
        iVar11 = piVar2[1];
        *(undefined2 *)(iVar11 + local_1c * 0x14) = 0x1b;
        *(undefined1 *)(iVar11 + 3 + local_1c * 0x14) = 0;
        *(int *)(iVar11 + 4 + local_1c * 0x14) = local_18;
        *(undefined4 *)(iVar11 + 8 + local_1c * 0x14) = 0;
        *(undefined4 *)(iVar11 + 0xc + local_1c * 0x14) = 0;
        *(undefined4 *)(iVar11 + 0x10 + local_1c * 0x14) = 0;
      }
      else {
        local_1c = 1;
      }
    }
  }
  FUN_00496a90((int)param_1);
  param_1 = (int *)0x0;
  if (0 < *(int *)(param_2 + 0x1c)) {
    puVar7 = (undefined4 *)(*(int *)(param_2 + 0x14) + 0x14);
    do {
      iVar11 = puVar7[-1];
      pbVar3 = (byte *)*puVar7;
      if ((pbVar3 == (byte *)0x0) || (*pbVar3 != 0x84)) {
        local_24 = FUN_00497780(piVar4,pbVar3,iVar11);
        if (((local_24 != iVar11) && (piVar5 = (int *)piVar4[2], piVar5 != (int *)0x0)) &&
           ((local_2c = piVar5[7], local_2c < piVar5[8] ||
            (iVar12 = FUN_0047de10(piVar5), iVar12 == 0)))) {
          piVar5[7] = piVar5[7] + 1;
          iVar12 = piVar5[1];
          *(undefined2 *)(iVar12 + local_2c * 0x14) = 0xf;
          goto LAB_004be316;
        }
      }
      else {
        local_24 = *(int *)(pbVar3 + 0x18);
        piVar5 = (int *)piVar4[2];
        local_2c = piVar5[7];
        if ((local_2c < piVar5[8]) || (iVar12 = FUN_0047de10(piVar5), iVar12 == 0)) {
          piVar5[7] = piVar5[7] + 1;
          iVar12 = piVar5[1];
          *(undefined2 *)(iVar12 + local_2c * 0x14) = 0xe;
LAB_004be316:
          *(undefined4 *)(iVar12 + 0x10 + local_2c * 0x14) = 0;
          *(undefined4 *)(iVar12 + 0xc + local_2c * 0x14) = 0;
          *(int *)(iVar12 + 8 + local_2c * 0x14) = iVar11;
          *(int *)(iVar12 + 4 + local_2c * 0x14) = local_24;
          *(undefined1 *)(iVar12 + 3 + local_2c * 0x14) = 0;
        }
      }
      param_1 = (int *)((int)param_1 + 1);
      puVar7 = puVar7 + 6;
    } while ((int)param_1 < *(int *)(param_2 + 0x1c));
  }
  *param_2 = 0;
  FUN_00496a90((int)piVar4);
  if (((local_1c != 0) && (-1 < (int)local_1c)) && (local_1c < (uint)piVar2[7])) {
    *(int *)(piVar2[1] + 8 + local_1c * 0x14) = piVar2[7];
  }
  return;
}


/* FUN_004be390 @ 004be390  kind=lib  attributed-by=lib-island  size=2095 */

void __cdecl
FUN_004be390(int *param_1,undefined4 *param_2,int param_3,int param_4,undefined4 *param_5,
            int param_6,undefined4 param_7,int param_8)

{
  undefined2 *puVar1;
  char cVar2;
  short sVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined1 uVar15;
  uint uVar16;
  char *pcVar17;
  uint uVar18;
  char *pcVar19;
  size_t _Size;
  uint local_28;
  int local_24;
  uint *local_1c;
  byte local_18 [4];
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  piVar5 = (int *)param_1[2];
  iVar6 = *param_1;
  for (piVar4 = *(int **)(param_3 + 0x38); (piVar4 != (int *)0x0 && (*piVar4 != iVar6));
      piVar4 = (int *)piVar4[6]) {
  }
  pcVar17 = "_rowid_";
  do {
    pcVar19 = pcVar17;
    pcVar17 = pcVar19 + 1;
  } while (*pcVar17 != '\0');
  uVar18 = (uint)(pcVar19 + -0x570a67) & 0x3fffffff;
  puVar9 = FUN_00494b90(iVar6,uVar18 + 0x2d);
  if (puVar9 != (undefined4 *)0x0) {
    memset(puVar9,0,uVar18 + 0x2d);
    *(undefined2 *)((int)puVar9 + 0x1e) = 0xffff;
    *(undefined1 *)puVar9 = 0x1a;
    if (uVar18 == 0xffffffff) {
      *(ushort *)((int)puVar9 + 2) = *(ushort *)((int)puVar9 + 2) | 0x400;
      puVar9[1] = 0;
    }
    else {
      puVar9[1] = puVar9 + 0xb;
      if (uVar18 != 0) {
        memcpy(puVar9 + 0xb,&DAT_00570a68,uVar18);
      }
      *(undefined1 *)(uVar18 + puVar9[1]) = 0;
    }
    puVar9[5] = 1;
  }
  iVar7 = *param_1;
  local_1c = FUN_00494b90(iVar7,0xc);
  if (local_1c == (uint *)0x0) {
LAB_004be4d6:
    FUN_00498790(iVar7,puVar9);
    FUN_00499060(iVar7,(int *)local_1c);
    local_1c = (uint *)0x0;
  }
  else {
    local_1c[0] = 0;
    local_1c[1] = 0;
    local_1c[2] = 0;
    puVar10 = FUN_00494b90(iVar7,0x14);
    local_1c[2] = (uint)puVar10;
    if (puVar10 == (undefined4 *)0x0) goto LAB_004be4d6;
    uVar18 = *local_1c;
    *local_1c = uVar18 + 1;
    *(undefined8 *)(puVar10 + uVar18 * 5) = 0;
    *(undefined8 *)(puVar10 + uVar18 * 5 + 2) = 0;
    puVar10[uVar18 * 5 + 4] = 0;
    puVar10[uVar18 * 5] = puVar9;
  }
  if (param_5 != (undefined4 *)0x0) {
    puVar9 = FUN_00478bb0(iVar6,param_5,0,(int *)0x0);
    local_1c = FUN_00498f00(param_1,local_1c,puVar9);
  }
  local_28 = 0;
  if (0 < *(short *)(param_3 + 0x26)) {
    local_24 = 0;
    do {
      iVar7 = *(int *)(param_6 + local_28 * 4);
      if (iVar7 < 0) {
        pcVar17 = *(char **)(local_24 + *(int *)(param_3 + 4));
        if (pcVar17 == (char *)0x0) {
          _Size = 0;
        }
        else {
          cVar2 = *pcVar17;
          pcVar19 = pcVar17;
          while (cVar2 != '\0') {
            pcVar19 = pcVar19 + 1;
            cVar2 = *pcVar19;
          }
          _Size = (int)pcVar19 - (int)pcVar17 & 0x3fffffff;
        }
        puVar9 = FUN_00494b90(iVar6,_Size + 0x2d);
        if (puVar9 != (undefined4 *)0x0) {
          memset(puVar9,0,_Size + 0x2d);
          *(undefined2 *)((int)puVar9 + 0x1e) = 0xffff;
          *(undefined1 *)puVar9 = 0x1a;
          if (_Size == 0xffffffff) {
            *(ushort *)((int)puVar9 + 2) = *(ushort *)((int)puVar9 + 2) | 0x400;
            puVar9[1] = 0;
          }
          else {
            puVar9[1] = puVar9 + 0xb;
            if (_Size != 0) {
              memcpy(puVar9 + 0xb,pcVar17,_Size);
            }
            *(undefined1 *)(_Size + puVar9[1]) = 0;
          }
          puVar9[5] = 1;
        }
      }
      else {
        puVar9 = FUN_00478bb0(iVar6,*(undefined4 **)(*(int *)(param_4 + 8) + iVar7 * 0x14),0,
                              (int *)0x0);
      }
      local_1c = FUN_00498f00(param_1,local_1c,puVar9);
      local_28 = local_28 + 1;
      local_24 = local_24 + 0x18;
    } while ((int)local_28 < (int)*(short *)(param_3 + 0x26));
  }
  piVar11 = (int *)FUN_004a97d0(param_1,(int *)local_1c,param_2,param_7,0,0,0,0,0,0);
  iVar7 = param_1[0x12];
  param_1[0x12] = iVar7 + 1;
  iVar8 = piVar5[7];
  uVar18 = (uint)(param_5 != (undefined4 *)0x0);
  sVar3 = *(short *)(param_3 + 0x26);
  if ((iVar8 < piVar5[8]) || (iVar12 = FUN_0047de10(piVar5), iVar12 == 0)) {
    iVar12 = piVar5[1];
    piVar5[7] = piVar5[7] + 1;
    *(undefined2 *)(iVar12 + iVar8 * 0x14) = 0x2a;
    *(undefined1 *)(iVar12 + 3 + iVar8 * 0x14) = 0;
    *(int *)(iVar12 + 4 + iVar8 * 0x14) = iVar7;
    *(uint *)(iVar12 + 8 + iVar8 * 0x14) = uVar18 + 1 + (int)sVar3;
    *(undefined4 *)(iVar12 + 0xc + iVar8 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x10 + iVar8 * 0x14) = 0;
  }
  if (piVar5[1] != 0) {
    *(undefined1 *)(piVar5[1] + -0x11 + piVar5[7] * 0x14) = 8;
  }
  local_18[0] = 8;
  local_18[1] = 0;
  local_10 = 0;
  local_c = 0;
  local_14 = iVar7;
  FUN_004a7e30(param_1,piVar11,local_18);
  param_1[0x13] = param_1[0x13] + 1;
  iVar8 = param_1[0x13];
  param_1[0x13] = *(short *)(param_3 + 0x26) + 1 + iVar8;
  local_28 = piVar5[7];
  if (((int)local_28 < piVar5[8]) || (iVar12 = FUN_0047de10(piVar5), iVar12 == 0)) {
    iVar12 = piVar5[1];
    piVar5[7] = piVar5[7] + 1;
    *(undefined2 *)(iVar12 + local_28 * 0x14) = 0x48;
    *(undefined1 *)(iVar12 + 3 + local_28 * 0x14) = 0;
    *(int *)(iVar12 + 4 + local_28 * 0x14) = iVar7;
    *(undefined4 *)(iVar12 + 8 + local_28 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0xc + local_28 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x10 + local_28 * 0x14) = 0;
  }
  else {
    local_28 = 1;
  }
  iVar12 = piVar5[7];
  if ((iVar12 < piVar5[8]) || (iVar13 = FUN_0047de10(piVar5), iVar13 == 0)) {
    iVar13 = piVar5[1];
    piVar5[7] = piVar5[7] + 1;
    *(int *)(iVar13 + 4 + iVar12 * 0x14) = iVar7;
    *(undefined2 *)(iVar13 + iVar12 * 0x14) = 0x1d;
    *(undefined1 *)(iVar13 + 3 + iVar12 * 0x14) = 0;
    *(undefined4 *)(iVar13 + 8 + iVar12 * 0x14) = 0;
    *(int *)(iVar13 + 0xc + iVar12 * 0x14) = iVar8;
    *(undefined4 *)(iVar13 + 0x10 + iVar12 * 0x14) = 0;
  }
  iVar12 = piVar5[7];
  if ((iVar12 < piVar5[8]) || (iVar13 = FUN_0047de10(piVar5), iVar13 == 0)) {
    piVar5[7] = piVar5[7] + 1;
    puVar1 = (undefined2 *)(piVar5[1] + iVar12 * 0x14);
    *(int *)(puVar1 + 2) = iVar7;
    *(uint *)(puVar1 + 4) = uVar18;
    *puVar1 = 0x1d;
    *(undefined1 *)((int)puVar1 + 3) = 0;
    *(int *)(puVar1 + 6) = iVar8 + 1;
    *(undefined4 *)(puVar1 + 8) = 0;
  }
  iVar12 = 0;
  if (0 < *(short *)(param_3 + 0x26)) {
    do {
      iVar13 = piVar5[7];
      iVar14 = piVar5[8];
      if (iVar13 < iVar14) {
LAB_004be869:
        piVar5[7] = piVar5[7] + 1;
        puVar1 = (undefined2 *)(piVar5[1] + iVar13 * 0x14);
        *(int *)(puVar1 + 2) = iVar7;
        *(uint *)(puVar1 + 4) = uVar18 + 1 + iVar12;
        *puVar1 = 0x1d;
        *(undefined1 *)((int)puVar1 + 3) = 0;
        *(int *)(puVar1 + 6) = iVar8 + 2 + iVar12;
        *(undefined4 *)(puVar1 + 8) = 0;
      }
      else {
        if (iVar14 == 0) {
          iVar14 = 0x33;
        }
        else {
          iVar14 = iVar14 * 2;
        }
        puVar9 = FUN_00494cf0(*piVar5,(undefined4 *)piVar5[1],iVar14 * 0x14);
        if (puVar9 != (undefined4 *)0x0) {
          iVar14 = *piVar5;
          if (((iVar14 == 0) || (puVar9 < *(undefined4 **)(iVar14 + 0x104))) ||
             (*(undefined4 **)(iVar14 + 0x108) <= puVar9)) {
            uVar16 = (*DAT_00582af0._4_4_)(puVar9);
          }
          else {
            uVar16 = (uint)*(ushort *)(iVar14 + 0xe8);
          }
          piVar5[8] = uVar16 / 0x14;
          piVar5[1] = (int)puVar9;
          goto LAB_004be869;
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < *(short *)(param_3 + 0x26));
  }
  FUN_004b9d20(param_1,param_3);
  sVar3 = *(short *)(param_3 + 0x26);
  iVar12 = piVar5[7];
  iVar13 = piVar5[8];
  if (iVar12 < iVar13) {
LAB_004be938:
    iVar13 = piVar5[1];
    piVar5[7] = piVar5[7] + 1;
    *(int *)(iVar13 + 8 + iVar12 * 0x14) = sVar3 + 2;
    *(undefined2 *)(iVar13 + iVar12 * 0x14) = 0x8c;
    *(undefined1 *)(iVar13 + 3 + iVar12 * 0x14) = 0;
    *(undefined4 *)(iVar13 + 4 + iVar12 * 0x14) = 0;
    *(int *)(iVar13 + 0xc + iVar12 * 0x14) = iVar8;
    *(undefined4 *)(iVar13 + 0x10 + iVar12 * 0x14) = 0;
  }
  else {
    if (iVar13 == 0) {
      iVar13 = 0x33;
    }
    else {
      iVar13 = iVar13 * 2;
    }
    puVar9 = FUN_00494cf0(*piVar5,(undefined4 *)piVar5[1],iVar13 * 0x14);
    if (puVar9 != (undefined4 *)0x0) {
      iVar13 = *piVar5;
      if (((iVar13 == 0) || (puVar9 < *(undefined4 **)(iVar13 + 0x104))) ||
         (*(undefined4 **)(iVar13 + 0x108) <= puVar9)) {
        uVar18 = (*DAT_00582af0._4_4_)(puVar9);
      }
      else {
        uVar18 = (uint)*(ushort *)(iVar13 + 0xe8);
      }
      piVar5[8] = uVar18 / 0x14;
      piVar5[1] = (int)puVar9;
      goto LAB_004be938;
    }
    iVar12 = 1;
  }
  iVar8 = piVar5[1];
  if ((iVar8 != 0) && (*(char *)(*piVar5 + 0x38) == '\0')) {
    if (iVar12 < 0) {
      iVar12 = piVar5[7] + -1;
    }
    iVar13 = iVar8 + iVar12 * 0x14;
    FUN_0047bc80(*piVar5,(int)*(char *)(iVar13 + 1),*(int **)(iVar8 + 0x10 + iVar12 * 0x14));
    *(undefined4 *)(iVar13 + 0x10) = 0;
    if (piVar4 == (int *)0x0) {
      *(undefined4 *)(iVar13 + 0x10) = 0;
      *(undefined1 *)(iVar13 + 1) = 0;
    }
    else {
      *(int **)(iVar13 + 0x10) = piVar4;
      *(undefined1 *)(iVar13 + 1) = 0xf6;
      piVar4[3] = piVar4[3] + 1;
    }
  }
  if (piVar5[1] != 0) {
    uVar15 = (undefined1)param_8;
    if (param_8 == 99) {
      uVar15 = 2;
    }
    *(undefined1 *)(piVar5[1] + -0x11 + piVar5[7] * 0x14) = uVar15;
  }
  if ((int *)param_1[0x6c] != (int *)0x0) {
    param_1 = (int *)param_1[0x6c];
  }
  *(undefined1 *)(param_1 + 6) = 1;
  iVar8 = piVar5[7];
  iVar12 = piVar5[8];
  if (iVar8 < iVar12) {
LAB_004bea60:
    piVar5[7] = piVar5[7] + 1;
    puVar1 = (undefined2 *)(piVar5[1] + iVar8 * 0x14);
    *(int *)(puVar1 + 2) = iVar7;
    *puVar1 = 0x5f;
    *(undefined1 *)((int)puVar1 + 3) = 0;
    *(uint *)(puVar1 + 4) = local_28 + 1;
    *(undefined4 *)(puVar1 + 6) = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
  }
  else {
    if (iVar12 == 0) {
      iVar12 = 0x33;
    }
    else {
      iVar12 = iVar12 * 2;
    }
    puVar9 = FUN_00494cf0(*piVar5,(undefined4 *)piVar5[1],iVar12 * 0x14);
    if (puVar9 != (undefined4 *)0x0) {
      iVar12 = *piVar5;
      if (((iVar12 == 0) || (puVar9 < *(undefined4 **)(iVar12 + 0x104))) ||
         (*(undefined4 **)(iVar12 + 0x108) <= puVar9)) {
        uVar18 = (*DAT_00582af0._4_4_)(puVar9);
      }
      else {
        uVar18 = (uint)*(ushort *)(iVar12 + 0xe8);
      }
      piVar5[8] = uVar18 / 0x14;
      piVar5[1] = (int)puVar9;
      goto LAB_004bea60;
    }
  }
  if ((-1 < (int)local_28) && (local_28 < (uint)piVar5[7])) {
    *(int *)(piVar5[1] + 8 + local_28 * 0x14) = piVar5[7];
  }
  iVar8 = piVar5[7];
  iVar12 = piVar5[8];
  if (iVar12 <= iVar8) {
    if (iVar12 == 0) {
      iVar12 = 0x33;
    }
    else {
      iVar12 = iVar12 * 2;
    }
    puVar9 = FUN_00494cf0(*piVar5,(undefined4 *)piVar5[1],iVar12 * 0x14);
    if (puVar9 == (undefined4 *)0x0) goto LAB_004beb47;
    iVar12 = *piVar5;
    if (((iVar12 == 0) || (puVar9 < *(undefined4 **)(iVar12 + 0x104))) ||
       (*(undefined4 **)(iVar12 + 0x108) <= puVar9)) {
      uVar18 = (*DAT_00582af0._4_4_)(puVar9);
    }
    else {
      uVar18 = (uint)*(ushort *)(iVar12 + 0xe8);
    }
    piVar5[8] = uVar18 / 0x14;
    piVar5[1] = (int)puVar9;
  }
  iVar12 = piVar5[1];
  piVar5[7] = piVar5[7] + 1;
  *(undefined2 *)(iVar12 + iVar8 * 0x14) = 0x2d;
  *(undefined1 *)(iVar12 + 3 + iVar8 * 0x14) = 0;
  *(int *)(iVar12 + 4 + iVar8 * 0x14) = iVar7;
  *(undefined4 *)(iVar12 + 8 + iVar8 * 0x14) = 0;
  *(undefined4 *)(iVar12 + 0xc + iVar8 * 0x14) = 0;
  *(undefined4 *)(iVar12 + 0x10 + iVar8 * 0x14) = 0;
LAB_004beb47:
  if (piVar11 != (int *)0x0) {
    FUN_00499060(iVar6,(int *)*piVar11);
    FUN_004a9cb0(iVar6,(short *)piVar11[10]);
    FUN_00498790(iVar6,(undefined4 *)piVar11[0xb]);
    FUN_00499060(iVar6,(int *)piVar11[0xc]);
    FUN_00498790(iVar6,(undefined4 *)piVar11[0xd]);
    FUN_00499060(iVar6,(int *)piVar11[0xe]);
    FUN_004a9650(iVar6,(undefined4 *)piVar11[0xf]);
    FUN_00498790(iVar6,(undefined4 *)piVar11[0x12]);
    FUN_00498790(iVar6,(undefined4 *)piVar11[0x13]);
    FUN_00494b00(iVar6,piVar11);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004bec40 @ 004bec40  kind=lib  attributed-by=lib-island  size=58 */

uint __cdecl FUN_004bec40(int *param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined3 extraout_var;
  char *pcVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  undefined4 *puVar11;
  int *piVar12;
  int **ppiVar13;
  bool bVar14;
  undefined4 uVar15;
  int *local_28;
  int *local_24;
  undefined4 *local_20;
  uint local_1c;
  uint local_18;
  undefined8 local_14;
  int local_c;
  int *local_8;
  
  local_c = 0;
  local_18 = 0;
  uVar4 = FUN_004b9f70((int)param_1,(undefined4 *)(param_2 + 0x34));
  param_2 = 0;
  if (uVar4 != 0) {
    return uVar4;
  }
  local_1c = 0;
  uVar4 = 0;
  while (param_2 < param_1[5]) {
    puVar11 = *(undefined4 **)(param_1[4] + 4 + local_1c);
    if ((puVar11 != (undefined4 *)0x0) && (*(char *)(puVar11 + 2) == '\x02')) {
      local_18 = 1;
      if (param_2 != 1) {
        local_c = local_c + 1;
      }
      FUN_0048fbc0(puVar11);
      uVar4 = 0;
      if (*(int *)(*(int *)puVar11[1] + 0xb8) == 0) {
        uVar4 = FUN_004854a0(*(int *)puVar11[1],4);
      }
      if (*(char *)((int)puVar11 + 9) != '\0') {
        piVar12 = puVar11 + 3;
        *piVar12 = *piVar12 + -1;
        if (*piVar12 == 0) {
          if (*(int *)(puVar11[1] + 0x38) != 0) {
            (*DAT_00582b20)(*(int *)(puVar11[1] + 0x38));
          }
          *(undefined1 *)((int)puVar11 + 10) = 0;
        }
      }
    }
    param_2 = param_2 + 1;
    local_1c = local_1c + 0x10;
    if (uVar4 != 0) {
      return uVar4;
    }
  }
  if (uVar4 != 0) {
    return uVar4;
  }
  if (((local_18 != 0) && ((code *)param_1[0x2b] != (code *)0x0)) &&
     (iVar5 = (*(code *)param_1[0x2b])(param_1[0x2a]), iVar5 != 0)) {
    return 0x13;
  }
  uVar4 = 0;
  pcVar9 = "";
  iVar5 = **(int **)(*(int *)(param_1[4] + 4) + 4);
  if (*(char *)(iVar5 + 0xe) == '\0') {
    pcVar9 = *(char **)(iVar5 + 0x90);
  }
  if (pcVar9 != (char *)0x0) {
    cVar2 = *pcVar9;
    pcVar6 = pcVar9;
    while (cVar2 != '\0') {
      pcVar6 = pcVar6 + 1;
      cVar2 = *pcVar6;
    }
    if ((((int)pcVar6 - (int)pcVar9 & 0x3fffffffU) != 0) && (1 < local_c)) {
      local_c = *param_1;
      local_1c = 0;
      pcVar9 = "";
      if (*(char *)(iVar5 + 0xe) == '\0') {
        pcVar9 = *(char **)(iVar5 + 0x90);
      }
      local_8 = (int *)0x0;
      local_14 = 0;
      if (pcVar9 == (char *)0x0) {
        local_18 = 0;
      }
      else {
        cVar2 = *pcVar9;
        pcVar6 = pcVar9;
        while (cVar2 != '\0') {
          pcVar6 = pcVar6 + 1;
          cVar2 = *pcVar6;
        }
        local_18 = (int)pcVar6 - (int)pcVar9 & 0x3fffffff;
      }
      pcVar9 = (char *)FUN_004a02d0((int)param_1,(byte *)"%s-mjXXXXXX9XXz");
      puVar11 = (undefined4 *)0x0;
      if (pcVar9 == (char *)0x0) {
        return 7;
      }
      do {
        if (puVar11 != (undefined4 *)0x0) {
          if (100 < (int)puVar11) {
            pcVar7 = "MJ delete: %s";
            uVar15 = 0xd;
            pcVar6 = pcVar9;
            FUN_004683f0(0xd,"MJ delete: %s");
            iVar5 = local_c;
            (**(code **)(local_c + 0x1c))(local_c,pcVar9,0,uVar15,pcVar7,pcVar6);
            if (uVar4 != 0) goto LAB_004bf1e4;
            break;
          }
          if (puVar11 == (undefined4 *)0x1) {
            FUN_004683f0(0xd,"MJ collide: %s");
          }
        }
        local_20 = (undefined4 *)((int)puVar11 + 1);
        iVar5 = 4;
        ppiVar13 = &local_24;
        if (DAT_00582acc == 0) {
          iVar10 = 0;
        }
        else {
          iVar10 = (*DAT_00582b10)(5);
          if (iVar10 != 0) {
            (*DAT_00582b18)(iVar10);
          }
        }
        do {
          uVar3 = FUN_00487580();
          *(undefined1 *)ppiVar13 = uVar3;
          ppiVar13 = (int **)((int)ppiVar13 + 1);
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        if (iVar10 != 0) {
          (*DAT_00582b20)(iVar10);
        }
        FUN_00466a80(0xd,pcVar9 + local_18,(byte *)"-mj%06X9%02X");
        iVar5 = local_c;
        uVar4 = (**(code **)(local_c + 0x20))(local_c,pcVar9,0,&local_28);
        if (uVar4 != 0) goto LAB_004bf1e4;
        puVar11 = local_20;
      } while (local_28 != (int *)0x0);
      uVar4 = FUN_004a12e0(iVar5,pcVar9,&local_8,0x4016,0);
      if (uVar4 != 0) {
LAB_004bf1e4:
        FUN_00494b00((int)param_1,(undefined4 *)pcVar9);
        return uVar4;
      }
      local_20 = (undefined4 *)0x0;
      if (0 < param_1[5]) {
        local_18 = local_14._4_4_;
        local_24 = (int *)0x0;
        local_14 = CONCAT44((undefined4)local_14,(undefined4)local_14);
        do {
          uVar4 = local_1c;
          puVar11 = *(undefined4 **)(param_1[4] + 4 + (int)local_24);
          if (((puVar11 != (undefined4 *)0x0) && (*(char *)(puVar11 + 2) == '\x02')) &&
             (pcVar6 = *(char **)(*(int *)puVar11[1] + 0x94), pcVar6 != (char *)0x0)) {
            local_1c = uVar4;
            if ((local_1c == 0) &&
               (uVar3 = FUN_00491f10(puVar11), local_1c = uVar4, CONCAT31(extraout_var,uVar3) == 0))
            {
              local_1c = 1;
            }
            cVar2 = *pcVar6;
            pcVar7 = pcVar6;
            while (cVar2 != '\0') {
              pcVar7 = pcVar7 + 1;
              cVar2 = *pcVar7;
            }
            uVar4 = (**(code **)(*local_8 + 0xc))
                              (local_8,pcVar6,((int)pcVar7 - (int)pcVar6 & 0x3fffffffU) + 1,
                               local_14._4_4_,local_18);
            cVar2 = *pcVar6;
            pcVar7 = pcVar6;
            while (cVar2 != '\0') {
              pcVar7 = pcVar7 + 1;
              cVar2 = *pcVar7;
            }
            uVar8 = ((int)pcVar7 - (int)pcVar6 & 0x3fffffffU) + 1;
            bVar14 = CARRY4(local_14._4_4_,uVar8);
            local_14 = CONCAT44(local_14._4_4_ + uVar8,(undefined4)local_14);
            local_18 = local_18 + bVar14;
            piVar12 = local_8;
            if (uVar4 != 0) goto LAB_004bf079;
          }
          piVar12 = local_8;
          local_20 = (undefined4 *)((int)local_20 + 1);
          local_24 = local_24 + 4;
        } while ((int)local_20 < param_1[5]);
        if (((local_1c != 0) &&
            (uVar4 = (**(code **)(*local_8 + 0x30))(local_8), (uVar4 & 0x400) == 0)) &&
           (uVar4 = (**(code **)(*piVar12 + 0x14))(piVar12,2), uVar4 != 0)) {
LAB_004bf079:
          if (*piVar12 != 0) {
            (**(code **)(*piVar12 + 4))(piVar12);
            *piVar12 = 0;
          }
          FUN_00466dd0((int)piVar12);
          (**(code **)(local_c + 0x1c))(local_c,pcVar9,0);
          FUN_00494b00((int)param_1,(undefined4 *)pcVar9);
          return uVar4;
        }
      }
      uVar4 = 0;
      iVar5 = 0;
      local_24 = (int *)0x0;
      do {
        if (param_1[5] <= iVar5) break;
        puVar11 = *(undefined4 **)(param_1[4] + 4 + (int)local_24);
        if (puVar11 != (undefined4 *)0x0) {
          uVar4 = FUN_0048f2f0(puVar11,pcVar9);
        }
        local_24 = local_24 + 4;
        iVar5 = iVar5 + 1;
      } while (uVar4 == 0);
      piVar12 = local_8;
      if (*local_8 != 0) {
        (**(code **)(*local_8 + 4))(local_8);
        *piVar12 = 0;
      }
      FUN_00466dd0((int)piVar12);
      if (uVar4 != 0) {
        FUN_00494b00((int)param_1,(undefined4 *)pcVar9);
        return uVar4;
      }
      uVar4 = (**(code **)(local_c + 0x1c))(local_c,pcVar9,1);
      local_1c = uVar4;
      FUN_00494b00((int)param_1,(undefined4 *)pcVar9);
      if (uVar4 != 0) {
        return uVar4;
      }
      if (DAT_00583e74 != (code *)0x0) {
        (*DAT_00583e74)();
      }
      if (0 < param_1[5]) {
        param_2 = 0;
        iVar5 = 0;
        do {
          piVar12 = *(int **)(param_1[4] + 4 + param_2);
          if ((piVar12 != (int *)0x0) && ((char)piVar12[2] != '\0')) {
            FUN_0048fbc0(piVar12);
            if ((char)piVar12[2] == '\x02') {
              local_20 = (undefined4 *)piVar12[1];
              local_24 = (int *)*local_20;
              if (local_24[10] == 0) {
                if (((*(char *)((int)local_24 + 0xf) == '\x02') && ((char)local_24[1] != '\0')) &&
                   (*(char *)((int)local_24 + 5) == '\x01')) {
                  *(undefined1 *)((int)local_24 + 0xf) = 1;
                }
                else {
                  uVar4 = FUN_00484760(local_24,(uint)*(byte *)((int)local_24 + 0x12));
                  if (((uVar4 & 0xff) == 0xd) || ((uVar4 & 0xff) == 10)) {
                    local_24[10] = uVar4;
                    *(undefined1 *)((int)local_24 + 0xf) = 6;
                  }
                }
              }
              *(undefined1 *)((int)local_20 + 0x13) = 1;
            }
            FUN_00471200(piVar12);
            if (*(char *)((int)piVar12 + 9) != '\0') {
              piVar1 = piVar12 + 3;
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                if (*(int *)(piVar12[1] + 0x38) != 0) {
                  (*DAT_00582b20)(*(int *)(piVar12[1] + 0x38));
                }
                *(undefined1 *)((int)piVar12 + 10) = 0;
              }
            }
          }
          iVar5 = iVar5 + 1;
          param_2 = param_2 + 0x10;
          uVar4 = local_1c;
        } while (iVar5 < param_1[5]);
      }
      if (DAT_00583e78 != (code *)0x0) {
        (*DAT_00583e78)();
        FUN_004719f0((int)param_1,0x40);
        return uVar4;
      }
      goto LAB_004bf343;
    }
  }
  iVar5 = 0;
  param_2 = 0;
  do {
    if (param_1[5] <= iVar5) break;
    puVar11 = *(undefined4 **)(param_1[4] + 4 + param_2);
    if (puVar11 != (undefined4 *)0x0) {
      uVar4 = FUN_0048f2f0(puVar11,(char *)0x0);
    }
    param_2 = param_2 + 0x10;
    iVar5 = iVar5 + 1;
  } while (uVar4 == 0);
  param_2 = 0;
  if (uVar4 != 0) {
    return uVar4;
  }
  local_24 = (int *)0x0;
  uVar8 = 0;
  while (param_2 < param_1[5]) {
    piVar12 = *(int **)(param_1[4] + 4 + (int)local_24);
    if (piVar12 != (int *)0x0) {
      if ((char)piVar12[2] != '\0') {
        FUN_0048fbc0(piVar12);
        if ((char)piVar12[2] == '\x02') {
          local_20 = (undefined4 *)piVar12[1];
          local_28 = (int *)*local_20;
          uVar8 = local_28[10];
          if (uVar8 != 0) {
LAB_004bf31a:
            if (*(char *)((int)piVar12 + 9) != '\0') {
              piVar1 = piVar12 + 3;
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                if (*(int *)(piVar12[1] + 0x38) != 0) {
                  (*DAT_00582b20)(*(int *)(piVar12[1] + 0x38));
                }
                *(undefined1 *)((int)piVar12 + 10) = 0;
              }
            }
            goto LAB_004bf2c7;
          }
          if (((*(char *)((int)local_28 + 0xf) == '\x02') && ((char)local_28[1] != '\0')) &&
             (*(char *)((int)local_28 + 5) == '\x01')) {
            *(undefined1 *)((int)local_28 + 0xf) = 1;
          }
          else {
            uVar8 = FUN_00484760(local_28,(uint)*(byte *)((int)local_28 + 0x12));
            if (((uVar8 & 0xff) == 0xd) || ((uVar8 & 0xff) == 10)) {
              local_28[10] = uVar8;
              *(undefined1 *)((int)local_28 + 0xf) = 6;
            }
            if (uVar8 != 0) goto LAB_004bf31a;
          }
          *(undefined1 *)((int)local_20 + 0x13) = 1;
        }
        FUN_00471200(piVar12);
        if (*(char *)((int)piVar12 + 9) != '\0') {
          piVar1 = piVar12 + 3;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            if (*(int *)(piVar12[1] + 0x38) != 0) {
              (*DAT_00582b20)(*(int *)(piVar12[1] + 0x38));
            }
            *(undefined1 *)((int)piVar12 + 10) = 0;
          }
        }
      }
      uVar8 = 0;
    }
LAB_004bf2c7:
    param_2 = param_2 + 1;
    local_24 = local_24 + 4;
    if (uVar8 != 0) {
      return uVar8;
    }
  }
  uVar4 = 0;
  if (uVar8 != 0) {
    return uVar8;
  }
LAB_004bf343:
  FUN_004719f0((int)param_1,0x40);
  return uVar4;
}


/* FUN_004bf360 @ 004bf360  kind=lib  attributed-by=lib-island  size=186 */

undefined4 __cdecl FUN_004bf360(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar1 = *(int *)(param_1 + 0x48);
  iVar5 = *(int *)(iVar1 + 0x14) / 2;
  if (param_2 < iVar5) {
    iVar9 = *(int *)(*(int *)(iVar1 + 0x28) + param_2 * 8);
    iVar5 = *(int *)(*(int *)(iVar1 + 0x28) + 4 + param_2 * 8);
  }
  else {
    iVar9 = (param_2 - iVar5) * 2;
    iVar5 = iVar9 + 1;
  }
  iVar8 = iVar9 * 0x30 + *(int *)(iVar1 + 0x24);
  iVar7 = iVar5 * 0x30 + *(int *)(iVar1 + 0x24);
  if (*(int *)(iVar8 + 0x18) != 0) {
    if (*(int *)(iVar7 + 0x18) == 0) {
      *(int *)(*(int *)(iVar1 + 0x28) + param_2 * 4) = iVar9;
      return 0;
    }
    iVar2 = *(int *)(iVar8 + 0x14);
    pbVar3 = *(byte **)(iVar8 + 0x20);
    piVar4 = *(int **)(iVar1 + 0x34);
    if (*(byte **)(iVar7 + 0x20) != (byte *)0x0) {
      FUN_004b8560(*(undefined4 **)(param_1 + 8),*(int *)(iVar7 + 0x14),*(byte **)(iVar7 + 0x20),
                   (uint)piVar4);
    }
    uVar6 = FUN_004b83b0(iVar2,pbVar3,piVar4);
    if ((int)uVar6 < 1) {
      iVar5 = iVar9;
    }
  }
  *(int *)(*(int *)(iVar1 + 0x28) + param_2 * 4) = iVar5;
  return 0;
}


/* FUN_004bf420 @ 004bf420  kind=lib  attributed-by=lib-island  size=158 */

int __cdecl FUN_004bf420(int param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  undefined8 local_c;
  
  puVar1 = *(uint **)(param_2 + 0x48);
  local_c = 0;
  iVar3 = 0;
  do {
    puVar5 = (uint *)(puVar1[9] + iVar3);
    iVar2 = FUN_004bf4c0(param_1,puVar1,puVar1[2],puVar1[3],puVar5,(uint *)&local_c);
    puVar1[2] = puVar5[2];
    uVar4 = puVar5[3];
    puVar1[3] = uVar4;
    if (((iVar2 != 0) || ((int)puVar1[1] < (int)uVar4)) ||
       (((int)puVar1[1] <= (int)uVar4 && (*puVar1 <= puVar1[2])))) break;
    iVar3 = iVar3 + 0x30;
  } while (iVar3 < 0x300);
  uVar4 = puVar1[5];
  while ((iVar2 == 0 && (uVar4 = uVar4 - 1, 0 < (int)uVar4))) {
    iVar2 = FUN_004bf360(param_2,uVar4);
  }
  *param_3 = (uint)local_c;
  local_c._4_4_ = (uint)((ulonglong)local_c >> 0x20);
  param_3[1] = local_c._4_4_;
  return iVar2;
}


/* FUN_004bf4c0 @ 004bf4c0  kind=lib  attributed-by=lib-island  size=268 */

int __cdecl
FUN_004bf4c0(int param_1,uint *param_2,uint param_3,uint param_4,uint *param_5,uint *param_6)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  
  puVar1 = param_5;
  uVar4 = *(uint *)(*(int *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + 4) + 0x20);
  param_5[6] = param_2[0xb];
  *param_5 = param_3;
  param_5[1] = param_4;
  param_5[4] = 0x80;
  puVar2 = FUN_00494b90(param_1,0x80);
  puVar1[7] = (uint)puVar2;
  puVar1[10] = uVar4;
  puVar2 = FUN_00494b90(param_1,uVar4);
  puVar1[9] = (uint)puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    return 7;
  }
  uVar5 = __allrem(param_3,param_4,uVar4,(int)uVar4 >> 0x1f);
  param_5 = (uint *)uVar5;
  if (param_5 != (uint *)0x0) {
    uVar4 = uVar4 - (int)param_5;
    iVar3 = ((int)uVar4 >> 0x1f) + param_4 + (uint)CARRY4(uVar4,param_3);
    if (((int)param_2[1] <= iVar3) && (((int)param_2[1] < iVar3 || (*param_2 < uVar4 + param_3)))) {
      uVar4 = *param_2 - param_3;
    }
    iVar3 = (**(code **)(*(int *)param_2[0xb] + 8))
                      ((int *)param_2[0xb],(int)puVar2 + (int)param_5,uVar4,param_3,param_4);
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  puVar1[2] = *param_2;
  puVar1[3] = param_2[1];
  iVar3 = FUN_004bf7b0(param_1,puVar1,&param_3);
  puVar1[2] = *puVar1 + param_3;
  puVar1[3] = puVar1[1] + param_4 + (uint)CARRY4(*puVar1,param_3);
  uVar4 = *param_6;
  *param_6 = *param_6 + param_3;
  param_6[1] = param_6[1] + param_4 + (uint)CARRY4(uVar4,param_3);
  if (iVar3 == 0) {
    iVar3 = FUN_004bf5d0(param_1,puVar1);
  }
  return iVar3;
}


/* FUN_004bf5d0 @ 004bf5d0  kind=lib  attributed-by=lib-island  size=126 */

int __cdecl FUN_004bf5d0(int param_1,uint *param_2)

{
  int iVar1;
  uint local_c [2];
  
  local_c[0] = 0;
  local_c[1] = 0;
  if (((int)param_2[3] <= (int)param_2[1]) &&
     (((int)param_2[3] < (int)param_2[1] || (param_2[2] <= *param_2)))) {
    FUN_00494b00(param_1,(undefined4 *)param_2[7]);
    FUN_00494b00(param_1,(undefined4 *)param_2[9]);
    memset(param_2,0,0x30);
    return 0;
  }
  iVar1 = FUN_004bf7b0(param_1,param_2,local_c);
  if (iVar1 == 0) {
    param_2[5] = local_c[0];
    iVar1 = FUN_004bf650(param_1,param_2,local_c[0],param_2 + 8);
  }
  return iVar1;
}


/* FUN_004bf650 @ 004bf650  kind=lib  attributed-by=lib-island  size=347 */

int __cdecl FUN_004bf650(int param_1,uint *param_2,uint param_3,uint *param_4)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  
  puVar2 = param_2;
  uVar6 = param_2[10];
  uVar7 = *param_2;
  uVar5 = (int)uVar6 >> 0x1f;
  uVar8 = __allrem(uVar7,param_2[1],uVar6,uVar5);
  param_2 = (uint *)uVar8;
  if (param_2 == (uint *)0x0) {
    iVar4 = (puVar2[3] - puVar2[1]) - (uint)(puVar2[2] < uVar7);
    if ((iVar4 < (int)uVar5) || ((iVar4 <= (int)uVar5 && (puVar2[2] - uVar7 <= uVar6)))) {
      uVar6 = puVar2[2] - uVar7;
    }
    iVar4 = (**(code **)(*(int *)puVar2[6] + 8))((int *)puVar2[6],puVar2[9],uVar6,uVar7,puVar2[1]);
    if (iVar4 != 0) {
      return iVar4;
    }
  }
  uVar6 = param_3;
  uVar7 = puVar2[10] - (int)param_2;
  if ((int)param_3 <= (int)uVar7) {
    *param_4 = puVar2[9] + (int)param_2;
    uVar6 = *puVar2;
    *puVar2 = *puVar2 + param_3;
    puVar2[1] = puVar2[1] + ((int)param_3 >> 0x1f) + (uint)CARRY4(uVar6,param_3);
    return 0;
  }
  uVar5 = puVar2[4];
  if ((int)uVar5 < (int)param_3) {
    do {
      uVar5 = uVar5 * 2;
    } while ((int)uVar5 < (int)param_3);
    puVar1 = (undefined4 *)puVar2[7];
    puVar3 = FUN_00494cf0(param_1,puVar1,uVar5);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_00494b00(param_1,puVar1);
    }
    puVar2[7] = (uint)puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      return 7;
    }
    puVar2[4] = uVar5;
  }
  memcpy((void *)puVar2[7],(void *)(puVar2[9] + (int)param_2),uVar7);
  uVar5 = *puVar2;
  *puVar2 = *puVar2 + uVar7;
  puVar2[1] = puVar2[1] + ((int)uVar7 >> 0x1f) + (uint)CARRY4(uVar5,uVar7);
  uVar6 = uVar6 - uVar7;
  while( true ) {
    if ((int)uVar6 < 1) {
      *param_4 = puVar2[7];
      return 0;
    }
    uVar7 = uVar6;
    if ((int)puVar2[10] < (int)uVar6) {
      uVar7 = puVar2[10];
    }
    iVar4 = FUN_004bf650(param_1,puVar2,uVar7,(uint *)&param_2);
    if (iVar4 != 0) break;
    memcpy((void *)((puVar2[7] - uVar6) + param_3),param_2,uVar7);
    uVar6 = uVar6 - uVar7;
  }
  return iVar4;
}


/* FUN_004bf7b0 @ 004bf7b0  kind=lib  attributed-by=lib-island  size=185 */

void __cdecl FUN_004bf7b0(int param_1,uint *param_2,uint *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  byte *local_20;
  uint *local_1c;
  byte local_18 [16];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_1c = param_3;
  uVar4 = param_2[10];
  uVar5 = __allrem(*param_2,param_2[1],uVar4,(int)uVar4 >> 0x1f);
  iVar3 = (int)uVar5;
  if ((iVar3 != 0) && (8 < (int)(uVar4 - iVar3))) {
    uVar2 = FUN_0049d270((byte *)(param_2[9] + iVar3),local_1c);
    uVar4 = *param_2;
    *param_2 = *param_2 + (uVar2 & 0xff);
    param_2[1] = param_2[1] + (uint)CARRY4(uVar4,uVar2 & 0xff);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  uVar4 = 0;
  do {
    iVar3 = FUN_004bf650(param_1,param_2,1,(uint *)&local_20);
    if (iVar3 != 0) goto LAB_004bf858;
    bVar1 = *local_20;
    uVar2 = uVar4 & 0xf;
    uVar4 = uVar4 + 1;
    local_18[uVar2] = bVar1;
  } while ((char)bVar1 < '\0');
  FUN_0049d270(local_18,local_1c);
LAB_004bf858:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004bf870 @ 004bf870  kind=lib  attributed-by=lib-island  size=294 */

void __cdecl FUN_004bf870(int *param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  size_t sVar5;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_2c;
  undefined8 local_24;
  uint *local_1c;
  int *local_18;
  byte local_14 [12];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  puVar1 = *(uint **)(param_2 + 0x48);
  local_18 = param_1;
  local_44 = 0;
  local_3c = 0;
  local_34 = 0;
  local_2c = 0;
  local_24 = 0;
  local_1c = puVar1;
  if (puVar1[4] == 0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar4 = FUN_004bfb50(param_2);
  if ((iVar4 == 0) &&
     ((puVar1[0xb] != 0 || (iVar4 = FUN_004bfa40(param_1,puVar1 + 0xb), iVar4 == 0)))) {
    FUN_00479360((int)param_1,puVar1[0xb],&local_44,*puVar1,puVar1[1]);
    puVar1[6] = puVar1[6] + 1;
    sVar5 = FUN_004a5fc0(local_14,puVar1[4],(int)puVar1[4] >> 0x1f);
    FUN_004793f0((int *)&local_44,(int)local_14,sVar5);
    piVar3 = (int *)puVar1[0xc];
    piVar2 = param_1;
    while (piVar3 != (int *)0x0) {
      piVar2 = (int *)piVar3[2];
      sVar5 = FUN_004a5fc0(local_14,piVar3[1],piVar3[1] >> 0x1f);
      FUN_004793f0((int *)&local_44,(int)local_14,sVar5);
      FUN_004793f0((int *)&local_44,*piVar3,piVar3[1]);
      FUN_00494b00((int)param_1,piVar3);
      puVar1 = local_1c;
      piVar3 = piVar2;
      piVar2 = local_18;
    }
    puVar1[0xc] = 0;
    FUN_004792d0((int)piVar2,(int *)&local_44,(int *)puVar1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004bf9a0 @ 004bf9a0  kind=lib  attributed-by=lib-island  size=158 */

void __cdecl FUN_004bf9a0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  byte *pbVar2;
  int *piVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  bool bVar7;
  undefined4 local_8;
  
  local_8 = 0;
  puVar6 = &local_8;
  if (param_3 == (undefined4 *)0x0) {
    pbVar5 = (byte *)0x0;
  }
  else {
    pbVar5 = (byte *)*param_3;
  }
  bVar7 = param_2 == (undefined4 *)0x0;
  if (!bVar7) {
    do {
      if (param_3 == (undefined4 *)0x0) break;
      iVar1 = param_2[1];
      pbVar2 = (byte *)*param_2;
      piVar3 = *(int **)(*(int *)(param_1 + 0x48) + 0x34);
      if (pbVar5 != (byte *)0x0) {
        FUN_004b8560(*(undefined4 **)(param_1 + 8),param_3[1],pbVar5,(uint)piVar3);
      }
      uVar4 = FUN_004b83b0(iVar1,pbVar2,piVar3);
      if ((int)uVar4 < 1) {
        *puVar6 = param_2;
        puVar6 = param_2 + 2;
        pbVar5 = (byte *)0x0;
        param_2 = (undefined4 *)*puVar6;
      }
      else {
        *puVar6 = param_3;
        puVar6 = param_3 + 2;
        param_3 = (undefined4 *)*puVar6;
        if (param_3 == (undefined4 *)0x0) break;
        pbVar5 = (byte *)*param_3;
      }
    } while (param_2 != (undefined4 *)0x0);
    bVar7 = param_2 == (undefined4 *)0x0;
  }
  if (!bVar7) {
    param_3 = param_2;
  }
  *puVar6 = param_3;
  *param_4 = local_8;
  return;
}


/* FUN_004bfa40 @ 004bfa40  kind=lib  attributed-by=lib-island  size=103 */

int __cdecl FUN_004bfa40(int *param_1,undefined4 *param_2)

{
  size_t _Size;
  void *_Dst;
  int iVar1;
  
  iVar1 = *param_1;
  _Size = *(size_t *)(iVar1 + 4);
  _Dst = (void *)FUN_004a0350(_Size);
  if (_Dst == (void *)0x0) {
    return 7;
  }
  memset(_Dst,0,_Size);
  iVar1 = (**(code **)(iVar1 + 0x18))(iVar1,0,_Dst,0x101e,&param_1);
  if (iVar1 != 0) {
    FUN_00466dd0((int)_Dst);
    return iVar1;
  }
  *param_2 = _Dst;
  return 0;
}


/* FUN_004bfab0 @ 004bfab0  kind=lib  attributed-by=lib-island  size=145 */

void __cdecl FUN_004bfab0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
joined_r0x004bfab8:
  do {
    if (param_2 == (undefined4 *)0x0) {
      return;
    }
    puVar1 = (undefined4 *)param_2[2];
    if (param_1 != 0) {
      if (*(int *)(param_1 + 0x1f0) != 0) {
        if ((param_2 < *(undefined4 **)(param_1 + 0x104)) ||
           (*(undefined4 **)(param_1 + 0x108) <= param_2)) {
          iVar2 = (*DAT_00582af0._4_4_)(param_2);
          **(int **)(param_1 + 0x1f0) = **(int **)(param_1 + 0x1f0) + iVar2;
          param_2 = puVar1;
        }
        else {
          **(int **)(param_1 + 0x1f0) =
               **(int **)(param_1 + 0x1f0) + (uint)*(ushort *)(param_1 + 0xe8);
          param_2 = puVar1;
        }
        goto joined_r0x004bfab8;
      }
      if ((*(undefined4 **)(param_1 + 0x104) <= param_2) &&
         (param_2 < *(undefined4 **)(param_1 + 0x108))) {
        *param_2 = *(undefined4 *)(param_1 + 0x100);
        *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + -1;
        *(undefined4 **)(param_1 + 0x100) = param_2;
        param_2 = puVar1;
        goto joined_r0x004bfab8;
      }
    }
    FUN_00466dd0((int)param_2);
    param_2 = puVar1;
  } while( true );
}


/* FUN_004bfb50 @ 004bfb50  kind=lib  attributed-by=lib-island  size=211 */

undefined4 __cdecl FUN_004bfb50(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *_Dst;
  int iVar4;
  int iVar5;
  undefined4 *local_8;
  
  iVar2 = *(int *)(param_1 + 0x48);
  _Dst = (int *)FUN_004a0350(0x100);
  if (_Dst != (int *)0x0) {
    memset(_Dst,0,0x100);
    local_8 = *(undefined4 **)(iVar2 + 0x30);
    while (local_8 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)local_8[2];
      iVar5 = 0;
      local_8[2] = 0;
      iVar4 = *_Dst;
      piVar1 = _Dst;
      while (iVar4 != 0) {
        FUN_004bf9a0(param_1,local_8,(undefined4 *)*piVar1,&local_8);
        iVar5 = iVar5 + 1;
        *piVar1 = 0;
        piVar1 = _Dst + iVar5;
        iVar4 = *piVar1;
      }
      _Dst[iVar5] = (int)local_8;
      local_8 = puVar3;
    }
    local_8 = (undefined4 *)0x0;
    iVar4 = 0;
    do {
      FUN_004bf9a0(param_1,local_8,(undefined4 *)_Dst[iVar4],&local_8);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x40);
    *(undefined4 **)(iVar2 + 0x30) = local_8;
    FUN_00466dd0((int)_Dst);
    return 0;
  }
  return 7;
}


/* FUN_004bfc30 @ 004bfc30  kind=lib  attributed-by=lib-island  size=349 */

undefined4 __cdecl FUN_004bfc30(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  
  if (param_1 == (int *)0x0) {
    pcVar3 = "API called with NULL prepared statement";
  }
  else {
    if (*param_1 != 0) {
      iVar2 = *(int *)(*param_1 + 0xc);
      if (iVar2 != 0) {
        (*DAT_00582b18)(iVar2);
      }
      if ((param_1[0xc] == -0x420df25d) && (param_1[0x15] < 0)) {
        if ((0 < param_2) && (param_2 <= (short)param_1[0x13])) {
          iVar2 = param_2 + -1;
          piVar1 = (int *)(param_1[0x11] + iVar2 * 0x28);
          FUN_004b76e0(piVar1);
          *(undefined2 *)(piVar1 + 7) = 1;
          FUN_004961f0(*param_1,0,(byte *)0x0);
          if (((param_1[0x18] & 0x200U) != 0) &&
             (((iVar2 < 0x20 && ((param_1[0x2b] & 1 << ((byte)iVar2 & 0x1f)) != 0)) ||
              (param_1[0x2b] == -1)))) {
            param_1[0x18] = param_1[0x18] | 0x20;
          }
          return 0;
        }
        FUN_004961f0(*param_1,0x19,(byte *)0x0);
        if (*(int *)(*param_1 + 0xc) != 0) {
          (*DAT_00582b20)(*(int *)(*param_1 + 0xc));
        }
        return 0x19;
      }
      FUN_004961f0(*param_1,0x15,(byte *)0x0);
      if (*(int *)(*param_1 + 0xc) != 0) {
        (*DAT_00582b20)(*(int *)(*param_1 + 0xc));
      }
      FUN_004683f0(0x15,"bind on a busy prepared statement: [%s]");
      FUN_004683f0(0x15,"misuse at line %d of [%.10s]");
      return 0x15;
    }
    pcVar3 = "API called with finalized prepared statement";
  }
  FUN_004683f0(0x15,pcVar3);
  FUN_004683f0(0x15,"misuse at line %d of [%.10s]");
  return 0x15;
}


/* FUN_004bfd90 @ 004bfd90  kind=lib  attributed-by=lib-island  size=68 */

void __cdecl FUN_004bfd90(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != 0) {
    if (DAT_00583e70 == param_1) {
      DAT_00583e70 = *(undefined4 *)(param_1 + 0xc);
      return;
    }
    if (DAT_00583e70 != 0) {
      iVar1 = *(int *)(DAT_00583e70 + 0xc);
      iVar3 = DAT_00583e70;
      while ((iVar1 != 0 && (iVar2 = *(int *)(iVar3 + 0xc), iVar2 != param_1))) {
        iVar1 = *(int *)(iVar2 + 0xc);
        iVar3 = iVar2;
      }
      if (*(int *)(iVar3 + 0xc) == param_1) {
        *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(param_1 + 0xc);
      }
    }
  }
  return;
}


/* FUN_004bfde0 @ 004bfde0  kind=lib  attributed-by=lib-string  size=227 */

int __cdecl FUN_004bfde0(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_2 + 0x38);
  if (piVar1 != (int *)0x0) {
    do {
      if (*piVar1 == *param_1) break;
      piVar1 = (int *)piVar1[6];
    } while (piVar1 != (int *)0x0);
  }
  piVar1 = (int *)piVar1[2];
  iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,param_3);
  if (iVar2 != 0) {
    if (iVar2 == 7) {
      *(undefined1 *)(*param_1 + 0x38) = 1;
    }
    else {
      FUN_004962b0(param_1,&DAT_0056de50);
    }
  }
  FUN_00466dd0(piVar1[2]);
  piVar1[2] = 0;
  iVar2 = 0;
  if (*param_3 < 1) {
    return param_1[0x11];
  }
  iVar3 = 0;
  do {
    if ((*(char *)(param_3[1] + 5 + iVar3) == '\0') && (0 < *(int *)(param_3[4] + iVar2 * 8))) {
      FUN_004962b0(param_1,(byte *)"table %s: xBestIndex returned an invalid plan");
    }
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 0xc;
  } while (iVar2 < *param_3);
  return param_1[0x11];
}


/* FUN_004bfed0 @ 004bfed0  kind=lib  attributed-by=lib-island  size=759 */

int __cdecl
FUN_004bfed0(int param_1,int param_2,undefined4 *param_3,undefined *param_4,undefined4 *param_5)

{
  ushort *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  int *local_28;
  int local_24;
  byte *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 *local_c;
  int local_8;
  
  local_14 = 0;
  local_18 = *(undefined4 *)(param_2 + 0x34);
  local_10 = *(undefined4 *)(param_2 + 0x30);
  local_c = (undefined4 *)FUN_004a02d0(param_1,&DAT_0056de50);
  if (local_c == (undefined4 *)0x0) {
    return 7;
  }
  piVar2 = FUN_00494b90(param_1,0x1c);
  if (piVar2 == (int *)0x0) {
    FUN_00494b00(param_1,local_c);
    return 7;
  }
  piVar2[0] = 0;
  piVar2[1] = 0;
  piVar2[2] = 0;
  piVar2[3] = 0;
  piVar2[4] = 0;
  piVar2[5] = 0;
  piVar2[6] = 0;
  *piVar2 = param_1;
  piVar2[1] = (int)param_3;
  iVar3 = FUN_004a7ba0(param_1,*(int *)(param_2 + 0x40));
  *(undefined4 *)(*(int *)(param_2 + 0x34) + 4) =
       *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar3 * 0x10);
  uVar4 = *(undefined4 *)(param_1 + 0x134);
  *(int ***)(param_1 + 0x134) = &local_28;
  local_24 = param_2;
  local_28 = piVar2;
  local_10 = (*(code *)param_4)(param_1,param_3[2],local_10,local_18,piVar2 + 2,&local_14);
  puVar8 = local_c;
  *(undefined4 *)(param_1 + 0x134) = uVar4;
  if (local_10 == 7) {
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  else if (local_10 == 0) {
    if ((undefined4 *)piVar2[2] == (undefined4 *)0x0) {
      FUN_00494b00(param_1,local_c);
      return 0;
    }
    *(undefined4 *)piVar2[2] = *param_3;
    piVar2[3] = 1;
    if (local_24 != 0) {
      uVar4 = FUN_004a02d0(param_1,(byte *)"vtable constructor did not declare schema: %s");
      *param_5 = uVar4;
      FUN_004ba040(piVar2);
      FUN_00494b00(param_1,local_c);
      return 1;
    }
    piVar2[6] = *(int *)(param_2 + 0x38);
    *(int **)(param_2 + 0x38) = piVar2;
    local_18 = 0;
    local_10 = 0;
    if (0 < *(short *)(param_2 + 0x26)) {
      local_8 = 0;
      do {
        iVar3 = 0;
        pbVar7 = *(byte **)(*(int *)(param_2 + 4) + 0xc + local_8);
        if (pbVar7 != (byte *)0x0) {
          uVar5 = FUN_004aa9b0((char *)pbVar7);
          iVar6 = FUN_00468380((byte *)"hidden",pbVar7,6);
          if ((iVar6 == 0) && ((pbVar7[6] == 0 || (pbVar7[6] == 0x20)))) {
LAB_004c0139:
            if (iVar3 < (int)uVar5) {
              local_20 = pbVar7 + iVar3;
              iVar6 = (pbVar7[iVar3 + 6] != 0) + 6;
              if (iVar6 + iVar3 <= (int)uVar5) {
                local_1c = iVar6 - (int)pbVar7;
                pbVar7 = local_20;
                do {
                  *pbVar7 = pbVar7[iVar6];
                  pbVar7 = pbVar7 + 1;
                } while ((int)(pbVar7 + local_1c) <= (int)uVar5);
              }
              if ((*local_20 == 0) && (0 < iVar3)) {
                local_20[-1] = 0;
              }
              puVar1 = (ushort *)(*(int *)(param_2 + 4) + 0x16 + local_8);
              *puVar1 = *puVar1 | 2;
            }
          }
          else {
            iVar3 = 0;
            if (0 < (int)uVar5) {
              do {
                iVar6 = FUN_00468380((byte *)" hidden",pbVar7 + iVar3,7);
                if ((iVar6 == 0) && ((pbVar7[iVar3 + 7] == 0 || (pbVar7[iVar3 + 7] == 0x20)))) {
                  iVar3 = iVar3 + 1;
                  goto LAB_004c0139;
                }
                iVar3 = iVar3 + 1;
              } while (iVar3 < (int)uVar5);
            }
          }
        }
        local_18 = local_18 + 1;
        local_8 = local_8 + 0x18;
      } while (local_18 < *(short *)(param_2 + 0x26));
    }
    iVar3 = local_10;
    FUN_00494b00(param_1,local_c);
    return iVar3;
  }
  if (local_14 == 0) {
    uVar4 = FUN_004a02d0(param_1,(byte *)"vtable constructor failed: %s");
    *param_5 = uVar4;
  }
  else {
    uVar4 = FUN_004a02d0(param_1,&DAT_0056de50);
    *param_5 = uVar4;
    FUN_00466dd0(local_14);
    puVar8 = local_c;
  }
  FUN_00494b00(param_1,piVar2);
  iVar3 = local_10;
  FUN_00494b00(param_1,puVar8);
  return iVar3;
}


/* FUN_004c01d0 @ 004c01d0  kind=lib  attributed-by=lib-island  size=73 */

int * __cdecl FUN_004c01d0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar1 = *(int **)(param_2 + 0x38);
  *(undefined4 *)(param_2 + 0x38) = 0;
  piVar4 = (int *)0x0;
  while (piVar3 = piVar1, piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    piVar1 = (int *)piVar3[6];
    if (iVar2 == param_1) {
      *(int **)(param_2 + 0x38) = piVar3;
      piVar3[6] = 0;
      piVar4 = piVar3;
    }
    else {
      piVar3[6] = *(int *)(iVar2 + 0x13c);
      *(int **)(iVar2 + 0x13c) = piVar3;
    }
  }
  return piVar4;
}


/* FUN_004c0220 @ 004c0220  kind=lib  attributed-by=lib-island  size=78 */

int __cdecl
FUN_004c0220(int param_1,undefined *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  
  do {
    if (*(char *)(param_1 + 0x2b) == '\0') {
      iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x38))
                        (*(int **)(param_1 + 4),param_4,param_5,10);
    }
    else {
      iVar1 = 0;
    }
    if (param_2 == (undefined *)0x0) {
      return iVar1;
    }
    if (iVar1 != 5) {
      return iVar1;
    }
    iVar1 = (*(code *)param_2)(param_3);
  } while (iVar1 != 0);
  return 5;
}


/* FUN_004c0270 @ 004c0270  kind=lib  attributed-by=lib-island  size=851 */

int __cdecl
FUN_004c0270(int param_1,int param_2,undefined *param_3,undefined4 param_4,int param_5,
            undefined4 param_6)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  bool bVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  undefined3 extraout_var;
  int iVar9;
  longlong lVar10;
  uint local_3c;
  int local_38;
  uint local_34;
  int local_30;
  uint local_20;
  uint *local_1c;
  uint local_18;
  uint local_14;
  uint *local_10;
  undefined *local_c;
  uint local_8;
  
  local_14 = (*(ushort *)(param_1 + 0x42) & 1) * 0x10000 + (*(ushort *)(param_1 + 0x42) & 0xfe00);
  iVar9 = **(int **)(param_1 + 0x20);
  puVar6 = (uint *)(iVar9 + 0x60);
  local_1c = (uint *)0x0;
  local_18 = 0;
  local_20 = 0;
  if (*(uint *)(param_1 + 0x44) <= *puVar6) {
    return 0;
  }
  iVar7 = FUN_004c1390(param_1,&local_1c);
  if (iVar7 != 0) {
    return iVar7;
  }
  uVar1 = *(uint *)(param_1 + 0x48);
  local_c = (undefined *)0x0;
  if (param_2 != 0) {
    local_c = param_3;
  }
  uVar8 = *(uint *)(param_1 + 0x44);
  local_10 = (uint *)(iVar9 + 0x68);
  iVar9 = 1;
  iVar7 = 0;
  local_8 = uVar8;
  do {
    uVar2 = *local_10;
    if (uVar2 < uVar8) {
      iVar7 = FUN_004c0220(param_1,local_c,param_4,iVar9 + 3,1);
      if (iVar7 == 0) {
        uVar8 = 0xffffffff;
        if (iVar9 == 1) {
          uVar8 = local_8;
        }
        *local_10 = uVar8;
        uVar8 = local_8;
        if (*(char *)(param_1 + 0x2b) == '\0') {
          (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),iVar9 + 3,1);
          uVar8 = local_8;
        }
      }
      else {
        if (iVar7 != 5) goto LAB_004c05af;
        local_c = (undefined *)0x0;
        uVar8 = uVar2;
        local_8 = uVar2;
      }
    }
    iVar9 = iVar9 + 1;
    local_10 = local_10 + 1;
  } while (iVar9 < 5);
  if ((*puVar6 < uVar8) && (iVar7 = FUN_004c0220(param_1,local_c,param_4,3,1), iVar7 == 0)) {
    uVar8 = *puVar6;
    if ((param_5 == 0) ||
       (iVar7 = (**(code **)(**(int **)(param_1 + 8) + 0x14))(*(int **)(param_1 + 8)), iVar7 == 0))
    {
      uVar2 = local_14;
      local_10 = (uint *)((int)local_14 >> 0x1f);
      lVar10 = __allmul(uVar1,0,local_14,(int)local_10);
      iVar7 = (**(code **)(**(int **)(param_1 + 4) + 0x18))(*(int **)(param_1 + 4));
      if (iVar7 == 0) {
        local_30 = (int)((ulonglong)lVar10 >> 0x20);
        uVar4 = local_8;
        if ((local_38 <= local_30) &&
           ((local_38 < local_30 || (local_34 = (uint)lVar10, local_3c < local_34)))) {
          (**(code **)(**(int **)(param_1 + 4) + 0x28))(*(int **)(param_1 + 4),5);
          uVar4 = local_8;
        }
        do {
          do {
            bVar5 = FUN_004c1520(local_1c,&local_18,(int *)&local_20);
            if (CONCAT31(extraout_var,bVar5) != 0) {
              if (uVar4 == *(uint *)(**(int **)(param_1 + 0x20) + 0x10)) {
                lVar10 = __allmul(*(uint *)(param_1 + 0x48),0,uVar2,(int)local_10);
                iVar7 = (**(code **)(**(int **)(param_1 + 4) + 0x10))(*(int **)(param_1 + 4),lVar10)
                ;
                if ((iVar7 != 0) ||
                   ((param_5 != 0 &&
                    (iVar7 = (**(code **)(**(int **)(param_1 + 4) + 0x14))(*(int **)(param_1 + 4)),
                    iVar7 != 0)))) goto LAB_004c04b0;
              }
              *puVar6 = uVar4;
              goto LAB_004c04b0;
            }
          } while (((local_20 <= uVar8) || (uVar4 < local_20)) || (uVar1 < local_18));
          piVar3 = *(int **)(param_1 + 8);
          iVar9 = *piVar3;
          lVar10 = __allmul(local_14 + 0x18,(int)(local_14 + 0x18) >> 0x1f,local_20 - 1,0);
          iVar7 = (**(code **)(iVar9 + 8))(piVar3,param_6,local_14,lVar10 + 0x38);
          if (iVar7 != 0) break;
          piVar3 = *(int **)(param_1 + 4);
          iVar9 = *piVar3;
          lVar10 = __allmul(local_18 - 1,0,uVar2,(int)local_10);
          iVar7 = (**(code **)(iVar9 + 0xc))(piVar3,param_6,local_14,lVar10);
          uVar4 = local_8;
        } while (iVar7 == 0);
      }
    }
LAB_004c04b0:
    if (*(char *)(param_1 + 0x2b) == '\0') {
      (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),3,1);
    }
  }
  if (iVar7 == 5) {
    iVar7 = 0;
  }
  else if (iVar7 != 0) goto LAB_004c05af;
  if (param_2 != 0) {
    if (*puVar6 < *(uint *)(param_1 + 0x44)) {
      FUN_004a7be0(local_1c);
      return 5;
    }
    if (((param_2 == 2) && (iVar7 = FUN_004c0220(param_1,local_c,param_4,4,4), iVar7 == 0)) &&
       (*(char *)(param_1 + 0x2b) == '\0')) {
      (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),4,4);
    }
  }
LAB_004c05af:
  FUN_004a7be0(local_1c);
  return iVar7;
}


/* FUN_004c05d0 @ 004c05d0  kind=lib  attributed-by=lib-island  size=185 */

void __cdecl FUN_004c05d0(int param_1,uint *param_2,int param_3,int *param_4,int *param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  
  puVar4 = (uint *)(param_3 + (int)param_2);
  if (param_4 == (int *)0x0) {
    iVar7 = 0;
    iVar6 = 0;
  }
  else {
    iVar6 = *param_4;
    iVar7 = param_4[1];
  }
  if (param_1 != 0) {
    do {
      iVar6 = iVar6 + *param_2 + iVar7;
      puVar5 = param_2 + 1;
      param_2 = param_2 + 2;
      iVar7 = iVar7 + *puVar5 + iVar6;
    } while (param_2 < puVar4);
    param_5[1] = iVar7;
    *param_5 = iVar6;
    return;
  }
  puVar5 = param_2 + 1;
  do {
    uVar2 = puVar5[-1];
    uVar3 = *puVar5;
    iVar6 = iVar6 + (uint)*(byte *)((int)puVar5 + -1) +
                    (uVar2 >> 8 & 0xff00) + iVar7 + (uVar2 * 0x10000 + (uVar2 & 0xff00)) * 0x100;
    iVar7 = iVar7 + (uint)*(byte *)((int)puVar5 + 3) +
                    (uVar3 >> 8 & 0xff00) + iVar6 + (uVar3 * 0x10000 + (uVar3 & 0xff00)) * 0x100;
    puVar1 = puVar5 + 1;
    puVar5 = puVar5 + 2;
  } while (puVar1 < puVar4);
  param_5[1] = iVar7;
  *param_5 = iVar6;
  return;
}


/* FUN_004c0690 @ 004c0690  kind=lib  attributed-by=lib-island  size=165 */

void __cdecl FUN_004c0690(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  iVar4 = 0;
  iVar5 = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    uVar3 = *(int *)(param_1 + 0x44) + 0x21U >> 0xc;
    iVar1 = FUN_004c0ae0(param_1,uVar3,&local_8);
    if (iVar1 == 0) {
      iVar4 = local_8 + 0x4000;
      if (uVar3 == 0) {
        iVar1 = local_8 + 0x84;
        local_8 = local_8 + 0x88;
      }
      else {
        iVar5 = (uVar3 - 1) * 0x1000 + 0xfde;
        iVar1 = local_8 + -4;
      }
    }
    else {
      iVar1 = 0;
    }
    iVar5 = *(int *)(param_1 + 0x44) - iVar5;
    iVar2 = 0;
    do {
      if (iVar5 < (int)(uint)*(ushort *)(iVar4 + iVar2 * 2)) {
        *(undefined2 *)(iVar4 + iVar2 * 2) = 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x2000);
    memset((void *)(iVar5 * 4 + 4 + iVar1),0,((iVar4 + iVar5 * -4) - iVar1) - 4);
  }
  return;
}


/* FUN_004c0740 @ 004c0740  kind=lib  attributed-by=lib-island  size=263 */

undefined4 __cdecl
FUN_004c0740(int param_1,int *param_2,undefined4 *param_3,uint *param_4,uint *param_5)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1 + 0x4c);
  if ((*(uint *)(param_1 + 0x54) != param_5[2]) || (*(uint *)(param_1 + 0x58) != param_5[3])) {
    return 0;
  }
  iVar3 = CONCAT31(CONCAT21(CONCAT11((char)*param_5,*(undefined1 *)((int)param_5 + 1)),
                            *(undefined1 *)((int)param_5 + 2)),*(undefined1 *)((int)param_5 + 3));
  if (iVar3 != 0) {
    uVar2 = (uint)(*(char *)(param_1 + 0x41) == '\0');
    FUN_004c05d0(uVar2,param_5,8,piVar1,piVar1);
    FUN_004c05d0(uVar2,param_4,*(int *)(param_1 + 0x24),piVar1,piVar1);
    if ((*piVar1 ==
         CONCAT31(CONCAT21(CONCAT11((char)param_5[4],*(undefined1 *)((int)param_5 + 0x11)),
                           *(undefined1 *)((int)param_5 + 0x12)),
                  *(undefined1 *)((int)param_5 + 0x13))) &&
       (*(int *)(param_1 + 0x50) ==
        CONCAT31(CONCAT21(CONCAT11((char)param_5[5],*(undefined1 *)((int)param_5 + 0x15)),
                          *(undefined1 *)((int)param_5 + 0x16)),*(undefined1 *)((int)param_5 + 0x17)
                ))) {
      *param_2 = iVar3;
      *param_3 = CONCAT31(CONCAT21(CONCAT11((char)param_5[1],*(undefined1 *)((int)param_5 + 5)),
                                   *(undefined1 *)((int)param_5 + 6)),
                          *(undefined1 *)((int)param_5 + 7));
      return 1;
    }
  }
  return 0;
}


/* FUN_004c0850 @ 004c0850  kind=lib  attributed-by=lib-island  size=189 */

void __cdecl
FUN_004c0850(int param_1,undefined4 param_2,undefined4 param_3,uint *param_4,uint *param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  *(char *)param_5 = (char)((uint)param_2 >> 0x18);
  *(char *)((int)param_5 + 3) = (char)param_2;
  *(char *)((int)param_5 + 1) = (char)((uint)param_2 >> 0x10);
  *(char *)((int)param_5 + 2) = (char)((uint)param_2 >> 8);
  *(char *)(param_5 + 1) = (char)((uint)param_3 >> 0x18);
  *(char *)((int)param_5 + 5) = (char)((uint)param_3 >> 0x10);
  *(char *)((int)param_5 + 6) = (char)((uint)param_3 >> 8);
  *(char *)((int)param_5 + 7) = (char)param_3;
  param_5[2] = *(uint *)(param_1 + 0x54);
  param_5[3] = *(uint *)(param_1 + 0x58);
  piVar1 = (int *)(param_1 + 0x4c);
  uVar4 = (uint)(*(char *)(param_1 + 0x41) == '\0');
  FUN_004c05d0(uVar4,param_5,8,piVar1,piVar1);
  FUN_004c05d0(uVar4,param_4,*(int *)(param_1 + 0x24),piVar1,piVar1);
  iVar2 = *piVar1;
  *(char *)(param_5 + 4) = (char)((uint)iVar2 >> 0x18);
  *(char *)((int)param_5 + 0x11) = (char)((uint)iVar2 >> 0x10);
  *(char *)((int)param_5 + 0x12) = (char)((uint)iVar2 >> 8);
  *(char *)((int)param_5 + 0x13) = (char)iVar2;
  uVar3 = *(undefined4 *)(param_1 + 0x50);
  *(char *)(param_5 + 5) = (char)((uint)uVar3 >> 0x18);
  *(char *)((int)param_5 + 0x15) = (char)((uint)uVar3 >> 0x10);
  *(char *)((int)param_5 + 0x16) = (char)((uint)uVar3 >> 8);
  *(char *)((int)param_5 + 0x17) = (char)uVar3;
  return;
}


/* FUN_004c0910 @ 004c0910  kind=lib  attributed-by=lib-island  size=235 */

int __cdecl FUN_004c0910(int param_1,void *param_2,int param_3)

{
  int iVar1;
  short sVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  pvVar4 = param_2;
  uVar8 = (int)param_2 + 0x21U >> 0xc;
  iVar6 = FUN_004c0ae0(param_1,uVar8,&param_2);
  pvVar5 = param_2;
  if (iVar6 == 0) {
    if (uVar8 == 0) {
      param_2 = (void *)((int)param_2 + 0x88);
      iVar7 = 0;
    }
    else {
      iVar7 = (uVar8 - 1) * 0x1000 + 0xfde;
    }
    iVar7 = (int)pvVar4 - iVar7;
    iVar1 = (int)param_2 + -4;
    if (iVar7 == 1) {
      memset(param_2,0,(int)pvVar5 + (0x7ffc - iVar1));
    }
    if (*(int *)(iVar1 + iVar7 * 4) != 0) {
      FUN_004c0690(param_1);
    }
    uVar8 = param_3 * 0x17f & 0x1fff;
    sVar2 = *(short *)((int)pvVar5 + uVar8 * 2 + 0x4000);
    iVar3 = iVar7;
    while (sVar2 != 0) {
      if (iVar3 == 0) {
        FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
        return 0xb;
      }
      uVar8 = uVar8 + 1 & 0x1fff;
      iVar3 = iVar3 + -1;
      sVar2 = *(short *)((int)pvVar5 + uVar8 * 2 + 0x4000);
    }
    *(int *)(iVar1 + iVar7 * 4) = param_3;
    *(short *)((int)pvVar5 + uVar8 * 2 + 0x4000) = (short)iVar7;
  }
  return iVar6;
}


/* FUN_004c0a00 @ 004c0a00  kind=lib  attributed-by=lib-island  size=219 */

void __cdecl FUN_004c0a00(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x2b) == '\x02') {
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x18)) {
      do {
        iVar1 = *(int *)(*(int *)(param_1 + 0x20) + iVar3 * 4);
        if (iVar1 != 0) {
          if (DAT_00582ac8 == 0) {
            (*DAT_00582aec)(iVar1);
          }
          else {
            if (DAT_00583f40 != 0) {
              (*DAT_00582b18)(DAT_00583f40);
            }
            iVar2 = (*DAT_00582af0._4_4_)(iVar1);
            DAT_00583e18 = DAT_00583e18 - iVar2;
            if (DAT_00583e40 < DAT_00583e18) {
              DAT_00583e40 = DAT_00583e18;
            }
            DAT_00583e3c = DAT_00583e3c + -1;
            if (DAT_00583e64 < DAT_00583e3c) {
              DAT_00583e64 = DAT_00583e3c;
            }
            (*DAT_00582aec)(iVar1);
            if (DAT_00583f40 != 0) {
              (*DAT_00582b20)(DAT_00583f40);
            }
          }
        }
        iVar3 = iVar3 + 1;
        *(undefined4 *)(*(int *)(param_1 + 0x20) + -4 + iVar3 * 4) = 0;
      } while (iVar3 < *(int *)(param_1 + 0x18));
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004c0ad9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 4) + 0x40))();
  return;
}


/* FUN_004c0ae0 @ 004c0ae0  kind=lib  attributed-by=lib-island  size=275 */

int __cdecl FUN_004c0ae0(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 < *(int *)(param_1 + 0x18)) {
LAB_004c0b4e:
    iVar3 = param_2 * 4;
    piVar1 = (int *)(*(int *)(param_1 + 0x20) + param_2 * 4);
    if (*piVar1 == 0) {
      if (*(char *)(param_1 + 0x2b) == '\x02') {
        _Dst = (void *)FUN_004a0350(0x8000);
        if (_Dst != (void *)0x0) {
          memset(_Dst,0,0x8000);
        }
        *(void **)(iVar3 + *(int *)(param_1 + 0x20)) = _Dst;
        if (*(int *)(iVar3 + *(int *)(param_1 + 0x20)) == 0) {
          iVar4 = 7;
        }
      }
      else {
        iVar4 = (**(code **)(**(int **)(param_1 + 4) + 0x34))
                          (*(int **)(param_1 + 4),param_2,0x8000,*(undefined1 *)(param_1 + 0x2c),
                           piVar1);
        if (iVar4 == 8) {
          *(byte *)(param_1 + 0x2e) = *(byte *)(param_1 + 0x2e) | 2;
          iVar4 = 0;
        }
      }
    }
    *param_3 = *(undefined4 *)(iVar3 + *(int *)(param_1 + 0x20));
    return iVar4;
  }
  iVar3 = *(int *)(param_1 + 0x20);
  iVar2 = FUN_004bc920();
  if (iVar2 == 0) {
    iVar3 = FUN_004a6140(iVar3,param_2 * 4 + 4);
    if (iVar3 != 0) {
      memset((void *)(iVar3 + *(int *)(param_1 + 0x18) * 4),0,
             (param_2 - *(int *)(param_1 + 0x18)) * 4 + 4);
      *(int *)(param_1 + 0x20) = iVar3;
      *(int *)(param_1 + 0x18) = param_2 + 1;
      goto LAB_004c0b4e;
    }
  }
  *param_3 = 0;
  return 7;
}


/* FUN_004c0c00 @ 004c0c00  kind=lib  attributed-by=lib-island  size=319 */

int __cdecl FUN_004c0c00(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int local_8;
  
  iVar1 = FUN_004c0ae0(param_1,0,&local_8);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (local_8 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = FUN_004c10b0(param_1,param_2);
    iVar2 = 0;
    if (iVar1 == 0) goto LAB_004c0d0f;
  }
  if ((*(byte *)(param_1 + 0x2e) & 2) == 0) {
    if ((*(char *)(param_1 + 0x2b) != '\0') ||
       (iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),0,1,10),
       iVar2 == 0)) {
      *(undefined1 *)(param_1 + 0x2c) = 1;
      iVar2 = FUN_004c0ae0(param_1,0,&local_8);
      if ((iVar2 == 0) && (iVar1 = FUN_004c10b0(param_1,param_2), iVar1 != 0)) {
        iVar2 = FUN_004c0d40(param_1);
        *param_2 = 1;
      }
      *(undefined1 *)(param_1 + 0x2c) = 0;
      if (*(char *)(param_1 + 0x2b) == '\0') {
        (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),0,1,9);
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x2b) == '\0') {
      iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),0,1,6);
      if (iVar2 != 0) goto LAB_004c0d0b;
      if (*(char *)(param_1 + 0x2b) == '\0') {
        (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),0,1,5);
      }
    }
    iVar2 = 0x108;
  }
LAB_004c0d0b:
  if (iVar1 != 0) {
    return iVar2;
  }
LAB_004c0d0f:
  if (*(int *)(param_1 + 0x34) != 0x2de218) {
    FUN_004683f0(0xe,"cannot open file at line %d of [%.10s]");
    iVar2 = 0xe;
  }
  return iVar2;
}


/* FUN_004c0d40 @ 004c0d40  kind=lib  attributed-by=lib-island  size=872 */

void __cdecl FUN_004c0d40(int param_1)

{
  uint uVar1;
  undefined3 uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  int local_5c;
  int local_58;
  uint *local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  uint *local_34;
  uint local_30;
  void *local_2c;
  undefined4 local_28;
  undefined1 local_24 [4];
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10 [4];
  undefined1 local_c [4];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  iVar7 = *(byte *)(param_1 + 0x2d) + 1;
  local_58 = 8 - iVar7;
  local_4c = 0;
  local_48 = 0;
  if ((*(char *)(param_1 + 0x2b) == '\0') &&
     (iVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x38))
                        (*(int **)(param_1 + 4),iVar7,local_58,10), iVar3 != 0)) goto LAB_004c1091;
  memset((void *)(param_1 + 0x34),0,0x30);
  iVar3 = (**(code **)(**(int **)(param_1 + 8) + 0x18))(*(int **)(param_1 + 8),&local_40);
  if (iVar3 == 0) {
    if ((-1 < local_3c) && ((0 < local_3c || (0x20 < local_40)))) {
      iVar3 = (**(code **)(**(int **)(param_1 + 8) + 8))(*(int **)(param_1 + 8),&local_28,0x20,0,0);
      if (iVar3 != 0) goto LAB_004c1073;
      uVar2 = CONCAT21(CONCAT11((undefined1)local_28,local_28._1_1_),local_28._2_1_);
      uVar8 = CONCAT31(CONCAT21(CONCAT11(local_20,local_1f),local_1e),local_1d);
      if ((((CONCAT31(uVar2,local_28._3_1_) & 0xfffffffe) == 0x377f0682) &&
          ((uVar8 & uVar8 - 1) == 0)) && (uVar8 - 0x200 < 0xfe01)) {
        local_30 = CONCAT31(uVar2,local_28._3_1_) & 0xffffff01;
        *(char *)(param_1 + 0x41) = (char)local_30;
        *(uint *)(param_1 + 0x24) = uVar8;
        uVar4 = FUN_0049c920(local_1c);
        *(undefined4 *)(param_1 + 0x68) = uVar4;
        *(undefined4 *)(param_1 + 0x54) = local_18;
        *(undefined4 *)(param_1 + 0x58) = local_14;
        FUN_004c05d0((uint)((char)local_30 == '\0'),&local_28,0x18,(int *)0x0,
                     (int *)(param_1 + 0x4c));
        iVar3 = FUN_0049c920(local_10);
        if ((*(int *)(param_1 + 0x4c) == iVar3) &&
           (iVar3 = FUN_0049c920(local_c), *(int *)(param_1 + 0x50) == iVar3)) {
          iVar3 = FUN_0049c920(local_24);
          if (iVar3 == 0x2de218) {
            iVar3 = FUN_004bc920();
            if ((iVar3 != 0) ||
               (local_34 = (uint *)FUN_004a0350(uVar8 + 0x18), local_34 == (uint *)0x0))
            goto LAB_004c1073;
            local_54 = local_34 + 6;
            uVar1 = uVar8 + 0x18;
            local_30 = (int)uVar1 >> 0x1f;
            iVar6 = local_30 + (0xffffffdf < uVar1);
            local_2c = (void *)0x0;
            local_38 = 0x20;
            local_44 = 0;
            iVar3 = 0;
            if ((iVar6 <= local_3c) && ((iVar6 < local_3c || (uVar8 + 0x38 <= local_40)))) {
              while( true ) {
                local_2c = (void *)((int)local_2c + 1);
                iVar3 = FUN_004a1350(*(int **)(param_1 + 8),local_34,uVar8 + 0x18,local_38,local_44)
                ;
                if ((iVar3 != 0) ||
                   ((iVar6 = FUN_004c0740(param_1,&local_50,&local_5c,local_54,local_34), iVar6 == 0
                    || (iVar3 = FUN_004c0910(param_1,local_2c,local_50), iVar3 != 0)))) break;
                if (local_5c != 0) {
                  *(void **)(param_1 + 0x44) = local_2c;
                  *(int *)(param_1 + 0x48) = local_5c;
                  *(ushort *)(param_1 + 0x42) = CONCAT11(local_20,local_1f) | (ushort)uVar8 & 0xff00
                  ;
                  local_4c = *(undefined4 *)(param_1 + 0x4c);
                  local_48 = *(undefined4 *)(param_1 + 0x50);
                }
                bVar9 = CARRY4(local_38,uVar1);
                local_38 = local_38 + uVar1;
                local_44 = local_44 + local_30 + (uint)bVar9;
                iVar6 = local_30 + local_44 + (uint)CARRY4(uVar1,local_38);
                if ((local_3c <= iVar6) && ((local_3c < iVar6 || (local_40 < uVar1 + local_38))))
                break;
              }
            }
            FUN_00466dd0((int)local_34);
          }
          else {
            iVar3 = FUN_004920e0();
          }
          if (iVar3 != 0) goto LAB_004c1073;
        }
      }
    }
    *(undefined4 *)(param_1 + 0x4c) = local_4c;
    *(undefined4 *)(param_1 + 0x50) = local_48;
    FUN_004c12b0(param_1);
    iVar3 = **(int **)(param_1 + 0x20);
    iVar6 = 4;
    *(undefined4 *)(iVar3 + 0x60) = 0;
    *(undefined4 *)(iVar3 + 100) = 0;
    piVar5 = (int *)(iVar3 + 0x68);
    do {
      *piVar5 = -1;
      piVar5 = piVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    if (*(int *)(param_1 + 0x44) != 0) {
      *(int *)(iVar3 + 0x68) = *(int *)(param_1 + 0x44);
    }
    if (*(int *)(param_1 + 0x48) != 0) {
      FUN_004683f0(0,"Recovered %d frames from WAL file %s");
    }
  }
LAB_004c1073:
  if (*(char *)(param_1 + 0x2b) == '\0') {
    (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),iVar7,local_58,9);
  }
LAB_004c1091:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004c10b0 @ 004c10b0  kind=lib  attributed-by=lib-island  size=496 */

void __cdecl FUN_004c10b0(int param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  puVar7 = (undefined8 *)**(undefined4 **)(param_1 + 0x20);
  uVar1 = *puVar7;
  uVar2 = puVar7[1];
  uVar3 = puVar7[2];
  uVar4 = puVar7[3];
  uVar5 = puVar7[4];
  uVar6 = puVar7[5];
  local_38 = uVar1;
  local_30 = uVar2;
  local_28 = uVar3;
  local_20 = uVar4;
  local_18 = uVar5;
  local_10 = uVar6;
  if (*(char *)(param_1 + 0x2b) != '\x02') {
    (**(code **)(**(int **)(param_1 + 4) + 0x3c))(*(int **)(param_1 + 4));
  }
  local_68 = puVar7[6];
  local_60 = puVar7[7];
  local_58 = puVar7[8];
  local_50 = puVar7[9];
  local_48 = puVar7[10];
  local_40 = puVar7[0xb];
  piVar8 = (int *)&local_38;
  piVar10 = (int *)&local_68;
  uVar11 = 0x2c;
  do {
    if (*piVar8 != *piVar10) goto LAB_004c1295;
    piVar8 = piVar8 + 1;
    piVar10 = piVar10 + 1;
    bVar13 = 3 < uVar11;
    uVar11 = uVar11 - 4;
  } while (bVar13);
  if (local_30._4_1_ != '\0') {
    iVar12 = 0;
    piVar8 = (int *)&local_38;
    iVar9 = 0;
    do {
      iVar9 = iVar9 + *piVar8 + iVar12;
      iVar12 = iVar12 + piVar8[1] + iVar9;
      piVar8 = piVar8 + 2;
    } while (piVar8 < &local_10);
    if ((iVar9 == (int)local_10) && (iVar12 == local_10._4_4_)) {
      piVar8 = (int *)(param_1 + 0x34);
      piVar10 = (int *)&local_38;
      uVar11 = 0x2c;
      do {
        if (*piVar8 != *piVar10) {
          *param_2 = 1;
          *(undefined8 *)(param_1 + 0x34) = uVar1;
          *(undefined8 *)(param_1 + 0x3c) = uVar2;
          *(undefined8 *)(param_1 + 0x44) = uVar3;
          *(undefined8 *)(param_1 + 0x4c) = uVar4;
          *(undefined8 *)(param_1 + 0x54) = uVar5;
          *(undefined8 *)(param_1 + 0x5c) = uVar6;
          *(uint *)(param_1 + 0x24) =
               (*(ushort *)(param_1 + 0x42) & 1) * 0x10000 + (*(ushort *)(param_1 + 0x42) & 0xfe00);
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
        piVar8 = piVar8 + 1;
        piVar10 = piVar10 + 1;
        bVar13 = 3 < uVar11;
        uVar11 = uVar11 - 4;
      } while (bVar13);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
LAB_004c1295:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004c12b0 @ 004c12b0  kind=lib  attributed-by=lib-island  size=215 */

void __cdecl FUN_004c12b0(int param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  puVar2 = (undefined8 *)**(undefined4 **)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x40) = 1;
  *(undefined4 *)(param_1 + 0x34) = 0x2de218;
  piVar3 = (int *)(param_1 + 0x34);
  iVar4 = 0;
  iVar5 = 0;
  do {
    iVar5 = iVar5 + *piVar3 + iVar4;
    piVar1 = piVar3 + 1;
    piVar3 = piVar3 + 2;
    iVar4 = iVar4 + *piVar1 + iVar5;
  } while (piVar3 < (int *)(param_1 + 0x5cU));
  *(int *)(param_1 + 0x5c) = iVar5;
  *(int *)(param_1 + 0x60) = iVar4;
  puVar2[6] = *(undefined8 *)(param_1 + 0x34);
  puVar2[7] = *(undefined8 *)(param_1 + 0x3c);
  puVar2[8] = *(undefined8 *)(param_1 + 0x44);
  puVar2[9] = *(undefined8 *)(param_1 + 0x4c);
  puVar2[10] = *(undefined8 *)(param_1 + 0x54);
  puVar2[0xb] = *(undefined8 *)(param_1 + 0x5c);
  if (*(char *)(param_1 + 0x2b) != '\x02') {
    (**(code **)(**(int **)(param_1 + 4) + 0x3c))(*(int **)(param_1 + 4));
  }
  *puVar2 = *(undefined8 *)(param_1 + 0x34);
  puVar2[1] = *(undefined8 *)(param_1 + 0x3c);
  puVar2[2] = *(undefined8 *)(param_1 + 0x44);
  puVar2[3] = *(undefined8 *)(param_1 + 0x4c);
  puVar2[4] = *(undefined8 *)(param_1 + 0x54);
  puVar2[5] = *(undefined8 *)(param_1 + 0x5c);
  return;
}


/* FUN_004c1390 @ 004c1390  kind=lib  attributed-by=lib-island  size=397 */

int __cdecl FUN_004c1390(int param_1,undefined4 *param_2)

{
  size_t _Size;
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_24;
  int local_14;
  int local_10;
  uint local_c;
  undefined4 *local_8;
  
  uVar1 = *(uint *)(param_1 + 0x44);
  iVar7 = (uVar1 + 0x21 >> 0xc) + 1;
  iVar5 = 0;
  _Size = (uVar1 + iVar7 * 10) * 2 + 8;
  local_8 = FUN_004a7d10(_Size);
  if (local_8 != (undefined4 *)0x0) {
    memset(local_8,0,_Size);
    uVar2 = uVar1;
    if (0x1000 < uVar1) {
      uVar2 = 0x1000;
    }
    local_8[1] = iVar7;
    puVar3 = FUN_004a7d10(uVar2 * 2);
    if (puVar3 == (undefined4 *)0x0) {
      iVar5 = 7;
    }
    iVar8 = param_1;
    for (iVar9 = 0; (iVar5 == 0 && (iVar9 < iVar7)); iVar9 = iVar9 + 1) {
      iVar5 = FUN_004c0ae0(param_1,iVar9,&local_14);
      if (iVar5 == 0) {
        local_24 = local_14 + 0x4000;
        if (iVar9 == 0) {
          local_10 = local_14 + 0x84;
          iVar8 = 0;
          local_14 = local_14 + 0x88;
        }
        else {
          local_10 = local_14 + -4;
          iVar8 = (iVar9 + -1) * 0x1000 + 0xfde;
        }
      }
      if (iVar5 == 0) {
        local_10 = local_10 + 4;
        if (iVar9 + 1 == iVar7) {
          local_c = uVar1 - iVar8;
        }
        else {
          local_c = local_24 - local_10 >> 2;
        }
        iVar4 = iVar8 + local_8[1] * 10;
        iVar8 = iVar8 + 1;
        pvVar6 = (void *)((int)local_8 + iVar4 * 2 + 8);
        iVar4 = 0;
        if (0 < (int)local_c) {
          do {
            *(short *)((int)pvVar6 + iVar4 * 2) = (short)iVar4;
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)local_c);
        }
        FUN_004c1720(local_10,puVar3,pvVar6,&local_c);
        local_8[iVar9 * 5 + 5] = local_c;
        local_8[iVar9 * 5 + 3] = pvVar6;
        local_8[iVar9 * 5 + 6] = iVar8;
        local_8[iVar9 * 5 + 4] = local_10;
      }
    }
    FUN_004a7be0(puVar3);
    if (iVar5 != 0) {
      FUN_004a7be0(local_8);
    }
    *param_2 = local_8;
    return iVar5;
  }
  return 7;
}


/* FUN_004c1520 @ 004c1520  kind=lib  attributed-by=lib-island  size=155 */

bool __cdecl FUN_004c1520(uint *param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint local_8;
  
  uVar1 = *param_1;
  uVar4 = 0xffffffff;
  iVar5 = param_1[1] - 1;
  local_8 = 0xffffffff;
  if (-1 < iVar5) {
    puVar3 = param_1 + iVar5 * 5 + 2;
    do {
      if ((int)*puVar3 < (int)puVar3[3]) {
        do {
          uVar2 = *(uint *)(puVar3[2] + (uint)*(ushort *)(puVar3[1] + *puVar3 * 2) * 4);
          uVar4 = local_8;
          if (uVar1 < uVar2) {
            if (uVar2 < local_8) {
              *param_3 = (uint)*(ushort *)(puVar3[1] + *puVar3 * 2) + puVar3[4];
              uVar4 = uVar2;
              local_8 = uVar2;
            }
            break;
          }
          uVar2 = *puVar3 + 1;
          *puVar3 = uVar2;
        } while ((int)uVar2 < (int)puVar3[3]);
      }
      puVar3 = puVar3 + -5;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  *param_1 = uVar4;
  *param_2 = uVar4;
  return uVar4 == 0xffffffff;
}


/* FUN_004c15c0 @ 004c15c0  kind=lib  attributed-by=lib-island  size=122 */

void __cdecl FUN_004c15c0(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint local_c;
  int local_8;
  
  if (DAT_00583e74 != (code *)0x0) {
    (*DAT_00583e74)();
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x18))(*(int **)(param_1 + 8),&local_c);
  if (((iVar1 == 0) && (param_3 <= local_8)) && ((param_3 < local_8 || (param_2 < local_c)))) {
    iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8),param_2,param_3);
  }
  if (DAT_00583e78 != (code *)0x0) {
    (*DAT_00583e78)();
  }
  if (iVar1 != 0) {
    FUN_004683f0(iVar1,"cannot limit WAL size: %s");
  }
  return;
}


/* FUN_004c1640 @ 004c1640  kind=lib  attributed-by=lib-island  size=42 */

void __cdecl
FUN_004c1640(int param_1,void *param_2,int param_3,int *param_4,int *param_5,void *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  int local_10;
  
  iVar1 = *param_5;
  iVar2 = *param_4;
  iVar4 = 0;
  iVar6 = 0;
  local_10 = 0;
  do {
    if (iVar6 < iVar1) {
      if (iVar4 < param_3) goto LAB_004c16a3;
LAB_004c16ce:
      iVar6 = iVar6 + 1;
      uVar5 = *(ushort *)(iVar2 + -2 + iVar6 * 2);
    }
    else {
      if (param_3 <= iVar4) {
        *param_4 = (int)param_2;
        *param_5 = local_10;
        memcpy(param_2,param_6,local_10 * 2);
        return;
      }
LAB_004c16a3:
      if (iVar6 < iVar1) {
        if (*(uint *)(param_1 + (uint)*(ushort *)(iVar2 + iVar6 * 2) * 4) <=
            *(uint *)(param_1 + (uint)*(ushort *)((int)param_2 + iVar4 * 2) * 4)) goto LAB_004c16ce;
        uVar5 = *(ushort *)((int)param_2 + iVar4 * 2);
        iVar4 = iVar4 + 1;
      }
      else {
        uVar5 = *(ushort *)((int)param_2 + iVar4 * 2);
        iVar4 = iVar4 + 1;
      }
    }
    iVar3 = *(int *)(param_1 + (uint)uVar5 * 4);
    local_10 = local_10 + 1;
    *(ushort *)((int)param_6 + local_10 * 2 + -2) = uVar5;
    if ((iVar4 < param_3) &&
       (*(int *)(param_1 + (uint)*(ushort *)((int)param_2 + iVar4 * 2) * 4) == iVar3)) {
      iVar4 = iVar4 + 1;
    }
  } while( true );
}


/* FUN_004c1720 @ 004c1720  kind=lib  attributed-by=lib-island  size=534 */

void __cdecl FUN_004c1720(int param_1,void *param_2,void *param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  void *_Dst;
  uint uVar9;
  int local_90;
  uint local_88;
  uint local_80;
  void *local_78;
  uint local_74;
  uint local_70 [26];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  uVar1 = *param_4;
  local_74 = 0;
  local_78 = (void *)0x0;
  iVar6 = 0;
  memset(local_70,0,0x68);
  local_80 = 0;
  if ((int)uVar1 < 1) {
    uVar5 = 0;
  }
  else {
    do {
      iVar6 = 0;
      local_74 = 1;
      local_90 = 0;
      pvVar8 = param_3;
      _Dst = param_3;
      local_78 = param_3;
      if ((local_80 & 1) != 0) {
LAB_004c17a0:
        uVar5 = local_70[local_90 * 2];
        _Dst = (void *)local_70[local_90 * 2 + 1];
        iVar6 = 0;
        iVar7 = 0;
        local_88 = 0;
LAB_004c17c3:
        if (iVar7 < (int)local_74) {
          if (iVar6 < (int)uVar5) goto LAB_004c183c;
LAB_004c1867:
          iVar7 = iVar7 + 1;
          uVar4 = *(ushort *)((int)local_78 + iVar7 * 2 + -2);
        }
        else {
          if ((int)uVar5 <= iVar6) goto code_r0x004c17cb;
LAB_004c183c:
          if (iVar7 < (int)local_74) {
            if (*(uint *)(param_1 + (uint)*(ushort *)((int)pvVar8 + iVar7 * 2) * 4) <=
                *(uint *)(param_1 + (uint)*(ushort *)((int)_Dst + iVar6 * 2) * 4))
            goto LAB_004c1867;
            uVar4 = *(ushort *)((int)_Dst + iVar6 * 2);
            iVar6 = iVar6 + 1;
          }
          else {
            uVar4 = *(ushort *)((int)_Dst + iVar6 * 2);
            iVar6 = iVar6 + 1;
          }
        }
        iVar2 = *(int *)(param_1 + (uint)uVar4 * 4);
        local_88 = local_88 + 1;
        *(ushort *)((int)param_2 + local_88 * 2 + -2) = uVar4;
        pvVar8 = local_78;
        if ((iVar6 < (int)uVar5) &&
           (*(int *)(param_1 + (uint)*(ushort *)((int)_Dst + iVar6 * 2) * 4) == iVar2)) {
          iVar6 = iVar6 + 1;
        }
        goto LAB_004c17c3;
      }
LAB_004c1813:
      local_80 = local_80 + 1;
      param_3 = (void *)((int)param_3 + 2);
      local_70[iVar6 * 2 + 1] = (uint)_Dst;
      local_70[iVar6 * 2] = local_74;
      uVar5 = local_74;
    } while ((int)local_80 < (int)uVar1);
  }
  iVar6 = iVar6 + 1;
  bVar3 = (byte)iVar6 & 0x1f;
  uVar9 = 1 << bVar3 | 1U >> 0x20 - bVar3;
  if (0xc < iVar6) {
    *param_4 = uVar5;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  do {
    if ((uVar1 & uVar9) != 0) {
      FUN_004c1640(param_1,(void *)local_70[iVar6 * 2 + 1],local_70[iVar6 * 2],(int *)&local_78,
                   (int *)&local_74,param_2);
    }
    uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0xd);
  *param_4 = local_74;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
code_r0x004c17cb:
  local_74 = local_88;
  local_78 = _Dst;
  memcpy(_Dst,param_2,local_88 * 2);
  iVar6 = local_90 + 1;
  pvVar8 = _Dst;
  local_90 = iVar6;
  if ((local_80 & 1 << ((byte)iVar6 & 0x1f)) == 0) goto LAB_004c1813;
  goto LAB_004c17a0;
}


/* FUN_004c1940 @ 004c1940  kind=lib  attributed-by=lib-island  size=388 */

void __cdecl FUN_004c1940(int *param_1)

{
  int *piVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 local_10;
  int *local_c;
  int local_8;
  
  piVar1 = param_1;
  if ((short)param_1[10] != 0) {
    return;
  }
  local_c = (int *)(*(int *)param_1[8] + 0x60);
  if (*local_c != 0) {
    iVar5 = 4;
    piVar3 = &local_8;
    if (DAT_00582acc == 0) {
      param_1 = (int *)0x0;
    }
    else {
      param_1 = (int *)(*DAT_00582b10)(5);
      if (param_1 != (int *)0x0) {
        (*DAT_00582b18)(param_1);
      }
    }
    do {
      uVar2 = FUN_00487580();
      *(undefined1 *)piVar3 = uVar2;
      piVar3 = (int *)((int)piVar3 + 1);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (param_1 != (int *)0x0) {
      (*DAT_00582b20)(param_1);
    }
    if ((*(char *)((int)piVar1 + 0x2b) == '\0') &&
       (iVar5 = (**(code **)(*(int *)piVar1[1] + 0x38))((int *)piVar1[1],4,4,10), iVar5 != 0)) {
      if (iVar5 != 5) {
        return;
      }
    }
    else {
      piVar1[0x1a] = piVar1[0x1a] + 1;
      piVar1[0x11] = 0;
      iVar5 = CONCAT31(CONCAT21(CONCAT11((char)piVar1[0x15],*(undefined1 *)((int)piVar1 + 0x55)),
                                *(undefined1 *)((int)piVar1 + 0x56)),
                       *(undefined1 *)((int)piVar1 + 0x57)) + 1;
      *(char *)(piVar1 + 0x15) = (char)((uint)iVar5 >> 0x18);
      *(char *)((int)piVar1 + 0x55) = (char)((uint)iVar5 >> 0x10);
      *(char *)((int)piVar1 + 0x56) = (char)((uint)iVar5 >> 8);
      *(char *)((int)piVar1 + 0x57) = (char)iVar5;
      piVar1[0x16] = local_8;
      FUN_004c12b0((int)piVar1);
      *local_c = 0;
      local_c[2] = 0;
      piVar3 = local_c + 3;
      iVar5 = 3;
      do {
        *piVar3 = -1;
        piVar3 = piVar3 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      if (*(char *)((int)piVar1 + 0x2b) != '\0') goto LAB_004c1a9f;
      (**(code **)(*(int *)piVar1[1] + 0x38))((int *)piVar1[1],4,4,9);
    }
  }
  if (*(char *)((int)piVar1 + 0x2b) == '\0') {
    (**(code **)(*(int *)piVar1[1] + 0x38))((int *)piVar1[1],3,1,5);
  }
LAB_004c1a9f:
  *(undefined2 *)(piVar1 + 10) = 0xffff;
  iVar5 = 0;
  do {
    iVar5 = iVar5 + 1;
    iVar4 = FUN_004c1ad0(piVar1,&local_10,1,iVar5);
  } while (iVar4 == -1);
  return;
}


/* FUN_004c1ad0 @ 004c1ad0  kind=lib  attributed-by=lib-island  size=711 */

int __cdecl FUN_004c1ad0(int *param_1,undefined4 *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  uint local_8;
  
  if (5 < param_4) {
    iVar2 = 1;
    if (100 < param_4) {
      return 0xf;
    }
    if (9 < param_4) {
      iVar2 = (param_4 + -9) * 0xee;
    }
    (**(code **)(*param_1 + 0x3c))(*param_1,iVar2);
  }
  if (param_3 == 0) {
    iVar2 = FUN_004c0c00((int)param_1,param_2);
    if (iVar2 == 5) {
      if (*(int *)param_1[8] == 0) {
        return -1;
      }
      if ((*(char *)((int)param_1 + 0x2b) != '\0') ||
         (iVar2 = (**(code **)(*(int *)param_1[1] + 0x38))((int *)param_1[1],2,1,6), iVar2 == 0)) {
        FUN_004c1da0((int)param_1,2);
        return -1;
      }
      if (iVar2 == 5) {
        return 0x105;
      }
    }
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  iVar6 = 0;
  iVar2 = *(int *)param_1[8];
  if ((param_3 == 0) && (*(int *)(iVar2 + 0x60) == param_1[0x11])) {
    if (*(char *)((int)param_1 + 0x2b) == '\0') {
      iVar6 = (**(code **)(*(int *)param_1[1] + 0x38))((int *)param_1[1],3,1,6);
    }
    else {
      iVar6 = 0;
    }
    if (*(char *)((int)param_1 + 0x2b) != '\x02') {
      (**(code **)(*(int *)param_1[1] + 0x3c))((int *)param_1[1]);
    }
    if (iVar6 == 0) {
      piVar5 = param_1 + 0xd;
      piVar3 = *(int **)param_1[8];
      uVar7 = 0x2c;
      do {
        if (*piVar3 != *piVar5) {
          FUN_004c1da0((int)param_1,3);
          return -1;
        }
        piVar3 = piVar3 + 1;
        piVar5 = piVar5 + 1;
        bVar8 = 3 < uVar7;
        uVar7 = uVar7 - 4;
      } while (bVar8);
      *(undefined2 *)(param_1 + 10) = 0;
      return 0;
    }
    if (iVar6 != 5) {
      return iVar6;
    }
  }
  local_8 = 0;
  param_4 = 0;
  iVar1 = 1;
  puVar4 = (uint *)(iVar2 + 0x68);
  do {
    uVar7 = *puVar4;
    if ((local_8 <= uVar7) && (uVar7 <= (uint)param_1[0x11])) {
      local_8 = uVar7;
      param_4 = iVar1;
    }
    iVar1 = iVar1 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar1 < 5);
  if ((*(byte *)((int)param_1 + 0x2e) & 2) == 0) {
    if (((uint)param_1[0x11] <= local_8) && (param_4 != 0)) goto LAB_004c1cf1;
    iVar1 = 1;
    do {
      if (*(char *)((int)param_1 + 0x2b) != '\0') {
        iVar6 = 0;
LAB_004c1ca4:
        local_8 = param_1[0x11];
        *(uint *)(iVar2 + 100 + iVar1 * 4) = local_8;
        param_4 = iVar1;
        if (*(char *)((int)param_1 + 0x2b) == '\0') {
          (**(code **)(*(int *)param_1[1] + 0x38))((int *)param_1[1],iVar1 + 3,1,9);
        }
        break;
      }
      iVar6 = (**(code **)(*(int *)param_1[1] + 0x38))((int *)param_1[1],iVar1 + 3,1,10);
      if (iVar6 == 0) goto LAB_004c1ca4;
      if (iVar6 != 5) {
        return iVar6;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 5);
  }
  if (param_4 == 0) {
    iVar2 = 0x208;
    if (iVar6 == 5) {
      iVar2 = -1;
    }
    return iVar2;
  }
LAB_004c1cf1:
  if ((*(char *)((int)param_1 + 0x2b) == '\0') &&
     (iVar6 = (**(code **)(*(int *)param_1[1] + 0x38))((int *)param_1[1],param_4 + 3,1,6),
     iVar6 != 0)) {
    if (iVar6 == 5) {
      iVar6 = -1;
    }
    return iVar6;
  }
  if (*(char *)((int)param_1 + 0x2b) != '\x02') {
    (**(code **)(*(int *)param_1[1] + 0x3c))((int *)param_1[1]);
  }
  if (*(uint *)(iVar2 + 100 + param_4 * 4) == local_8) {
    piVar5 = param_1 + 0xd;
    piVar3 = *(int **)param_1[8];
    uVar7 = 0x2c;
    while (*piVar3 == *piVar5) {
      piVar3 = piVar3 + 1;
      piVar5 = piVar5 + 1;
      bVar8 = uVar7 < 4;
      uVar7 = uVar7 - 4;
      if (bVar8) {
        *(short *)(param_1 + 10) = (short)param_4;
        return 0;
      }
    }
  }
  if (*(char *)((int)param_1 + 0x2b) == '\0') {
    (**(code **)(*(int *)param_1[1] + 0x38))((int *)param_1[1],param_4 + 3,1,5);
  }
  return -1;
}


/* FUN_004c1da0 @ 004c1da0  kind=lib  attributed-by=lib-island  size=35 */

void __cdecl FUN_004c1da0(int param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0x2b) == '\0') {
    (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),param_2,1,5);
  }
  return;
}


/* FUN_004c1dd0 @ 004c1dd0  kind=lib  attributed-by=lib-island  size=171 */

void __cdecl FUN_004c1dd0(int param_1,int param_2,uint param_3,uint param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = param_1;
  param_1 = param_5;
  if ((param_5 <= *(int *)(iVar1 + 0xc)) &&
     ((param_5 < *(int *)(iVar1 + 0xc) || (param_4 < *(uint *)(iVar1 + 8))))) {
    iVar3 = ((int)param_3 >> 0x1f) + param_5 + (uint)CARRY4(param_3,param_4);
    if ((*(int *)(iVar1 + 0xc) <= iVar3) &&
       ((*(int *)(iVar1 + 0xc) < iVar3 || (*(uint *)(iVar1 + 8) <= param_3 + param_4)))) {
      uVar2 = *(int *)(iVar1 + 8) - param_4;
      iVar3 = (**(code **)(**(int **)(iVar1 + 4) + 0xc))
                        (*(int **)(iVar1 + 4),param_2,uVar2,param_4,param_5);
      if (iVar3 != 0) {
        return;
      }
      bVar4 = CARRY4(param_4,uVar2);
      param_4 = param_4 + uVar2;
      param_1 = param_5 + ((int)uVar2 >> 0x1f) + (uint)bVar4;
      param_2 = param_2 + uVar2;
      param_3 = param_3 - uVar2;
      iVar3 = (**(code **)(**(int **)(iVar1 + 4) + 0x14))
                        (*(int **)(iVar1 + 4),*(undefined4 *)(iVar1 + 0x10));
      if (param_3 == 0) {
        return;
      }
      if (iVar3 != 0) {
        return;
      }
    }
  }
  (**(code **)(**(int **)(iVar1 + 4) + 0xc))(*(int **)(iVar1 + 4),param_2,param_3,param_4,param_1);
  return;
}


/* FUN_004c1e80 @ 004c1e80  kind=lib  attributed-by=lib-island  size=120 */

void __cdecl FUN_004c1e80(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = param_1[6];
  iVar2 = *(int *)*param_1;
  puVar4 = (undefined4 *)param_1[8];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    if ((*(byte *)((int)puVar4 + 0x12) & 1) != 0) {
      FUN_00498790(iVar2,(undefined4 *)*puVar4);
    }
    if (((*(byte *)((int)puVar4 + 0x12) & 0x10) != 0) ||
       ((*(byte *)((int)puVar4 + 0x12) & 0x20) != 0)) {
      puVar3 = (undefined4 *)puVar4[3];
      FUN_004c1e80(puVar3);
      FUN_00494b00(iVar2,puVar3);
    }
    puVar4 = puVar4 + 10;
  }
  if ((undefined4 *)param_1[8] != param_1 + 10) {
    FUN_00494b00(iVar2,(undefined4 *)param_1[8]);
  }
  return;
}


/* FUN_004c1f00 @ 004c1f00  kind=lib  attributed-by=lib-island  size=250 */

int __cdecl FUN_004c1f00(undefined4 *param_1,char *param_2,byte param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *_Dst;
  uint uVar3;
  
  if ((int)param_1[7] <= (int)param_1[6]) {
    puVar1 = (undefined4 *)param_1[8];
    iVar2 = *(int *)*param_1;
    _Dst = FUN_00494b90(iVar2,param_1[7] * 0x50);
    param_1[8] = _Dst;
    if (_Dst == (undefined4 *)0x0) {
      if ((param_3 & 1) != 0) {
        FUN_00498790(iVar2,(undefined4 *)param_2);
      }
      param_1[8] = puVar1;
      return 0;
    }
    memcpy(_Dst,puVar1,param_1[6] * 0x28);
    if (puVar1 != param_1 + 10) {
      FUN_00494b00(iVar2,puVar1);
    }
    uVar3 = param_1[8];
    if ((((iVar2 == 0) || (uVar3 == 0)) || (uVar3 < *(uint *)(iVar2 + 0x104))) ||
       (*(uint *)(iVar2 + 0x108) <= uVar3)) {
      uVar3 = (*DAT_00582af0._4_4_)(uVar3);
    }
    else {
      uVar3 = (uint)*(ushort *)(iVar2 + 0xe8);
    }
    param_1[7] = uVar3 / 0x28;
  }
  iVar2 = param_1[6];
  puVar1 = (undefined4 *)(param_1[8] + iVar2 * 0x28);
  param_1[6] = iVar2 + 1;
  for (; (param_2 != (char *)0x0 && ((*param_2 == '\\' || (*param_2 == '\x18'))));
      param_2 = *(char **)(param_2 + 8)) {
  }
  *puVar1 = param_2;
  puVar1[5] = param_1;
  *(byte *)((int)puVar1 + 0x12) = param_3;
  puVar1[1] = 0xffffffff;
  return iVar2;
}


/* FUN_004c2000 @ 004c2000  kind=lib  attributed-by=lib-island  size=108 */

undefined4 * __cdecl FUN_004c2000(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = FUN_0049ae70(param_2);
  puVar2 = (undefined4 *)0x0;
  for (; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0xc)) {
    iVar1 = *param_1;
    if (puVar2 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)FUN_004a02d0(iVar1,(byte *)"name=%Q");
    }
    else {
      puVar4 = (undefined4 *)FUN_004a02d0(iVar1,(byte *)"%s OR name=%Q");
      FUN_00494b00(iVar1,puVar2);
    }
    puVar2 = puVar4;
  }
  return puVar2;
}


/* FUN_004c2070 @ 004c2070  kind=lib  attributed-by=lib-island  size=158 */

void __cdecl FUN_004c2070(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint *puVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    iVar2 = 0;
    if (0 < (int)param_2[7]) {
      puVar3 = param_2 + 0xe;
      do {
        puVar1 = (undefined4 *)puVar3[0x14];
        if (puVar1 != (undefined4 *)0x0) {
          if (puVar1[7] != 0) {
            FUN_00466dd0(puVar1[6]);
          }
          FUN_00494b00(param_1,puVar1);
        }
        if (((*puVar3 & 0x20000000) != 0) &&
           (puVar1 = (undefined4 *)puVar3[4], puVar1 != (undefined4 *)0x0)) {
          FUN_00494b00(param_1,(undefined4 *)puVar1[4]);
          FUN_00494b00(param_1,puVar1);
        }
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 0x16;
      } while (iVar2 < (int)param_2[7]);
    }
    FUN_004c1e80((undefined4 *)param_2[8]);
    FUN_00494b00(param_1,param_2);
  }
  return;
}


/* FUN_004c2110 @ 004c2110  kind=lib  attributed-by=lib-island  size=74 */

void __cdecl FUN_004c2110(undefined4 *param_1,byte *param_2,uint param_3)

{
  *(char *)(param_1 + 5) = (char)param_3;
  if (param_2 != (byte *)0x0) {
    while (*param_2 == param_3) {
      FUN_004c2110(param_1,*(byte **)(param_2 + 8),param_3);
      param_2 = *(byte **)(param_2 + 0xc);
      *(char *)(param_1 + 5) = (char)param_3;
      if (param_2 == (byte *)0x0) {
        return;
      }
    }
    FUN_004c1f00(param_1,(char *)param_2,0);
  }
  return;
}


/* FUN_004c2160 @ 004c2160  kind=lib  attributed-by=lib-island  size=191 */

undefined4 __cdecl FUN_004c2160(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  iVar1 = *param_1;
  puVar6 = (undefined4 *)0x0;
  iVar2 = *(int *)(*(int *)(iVar1 + 0x10) + 0x1c);
  if (param_2[0x10] == iVar2) {
    return 0;
  }
  iVar3 = FUN_004aaf60(param_1,param_2);
  if (iVar3 != 0) {
    do {
      puVar4 = puVar6;
      if (*(int *)(iVar3 + 0x14) == iVar2) {
        if (puVar6 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)FUN_004a02d0(iVar1,(byte *)"name=%Q");
        }
        else {
          puVar4 = (undefined4 *)FUN_004a02d0(iVar1,(byte *)"%s OR name=%Q");
          FUN_00494b00(iVar1,puVar6);
        }
      }
      iVar3 = *(int *)(iVar3 + 0x20);
      puVar6 = puVar4;
    } while (iVar3 != 0);
    if (puVar4 != (undefined4 *)0x0) {
      uVar5 = FUN_004a02d0(*param_1,(byte *)"type=\'trigger\' AND (%s)");
      FUN_00494b00(*param_1,puVar4);
      return uVar5;
    }
  }
  return 0;
}


/* FUN_004c29b0 @ 004c29b0  kind=lib  attributed-by=lib-island  size=61 */

void __cdecl FUN_004c29b0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = param_4;
  uVar1 = (uint)param_4 >> 0x18;
  uVar2 = (uint)param_4 >> 0x10;
  param_4 = CONCAT13((char)uVar3,
                     CONCAT12((char)((uint)uVar3 >> 8),CONCAT11((char)uVar2,(char)uVar1)));
  (**(code **)(*param_1 + 0xc))(param_1,&param_4,4,param_2,param_3);
  return;
}


/* FUN_004c29f0 @ 004c29f0  kind=lib  attributed-by=lib-island  size=526 */

int __cdecl FUN_004c29f0(uint param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  int iVar11;
  longlong lVar12;
  int local_8;
  
  uVar4 = param_1;
  puVar2 = *(undefined8 **)(param_1 + 0xb0);
  uVar7 = *(uint *)(param_1 + 0x80);
  if (*(uint *)(param_1 + 0x7c) < *(uint *)(param_1 + 0x80)) {
    uVar7 = *(uint *)(param_1 + 0x7c);
  }
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0x60)) {
    iVar11 = 0;
    do {
      iVar8 = *(int *)(param_1 + 0x5c) + iVar11;
      if (*(int *)(iVar8 + 8) == 0 && *(int *)(iVar8 + 0xc) == 0) {
        *(undefined4 *)(iVar8 + 8) = *(undefined4 *)(param_1 + 0x48);
        *(undefined4 *)(iVar8 + 0xc) = *(undefined4 *)(param_1 + 0x4c);
      }
      iVar9 = iVar9 + 1;
      iVar11 = iVar11 + 0x30;
    } while (iVar9 < *(int *)(param_1 + 0x60));
  }
  iVar9 = *(int *)(param_1 + 0x48);
  if (iVar9 == 0 && *(int *)(param_1 + 0x4c) == 0) {
    lVar12 = 0;
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x7c);
    lVar12 = __alldiv(iVar9 - 1,*(int *)(param_1 + 0x4c) - (uint)(iVar9 == 0),uVar6,0);
    lVar12 = __allmul((uint)(lVar12 + 1),(int)((ulonglong)(lVar12 + 1) >> 0x20),uVar6,0);
  }
  *(longlong *)(param_1 + 0x48) = lVar12;
  *(longlong *)(param_1 + 0x50) = lVar12;
  if (((*(char *)(param_1 + 7) == '\0') && (*(char *)(param_1 + 5) != '\x04')) &&
     (uVar6 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x30))(*(int **)(param_1 + 0x3c)),
     (uVar6 & 0x200) == 0)) {
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 0;
  }
  else {
    *(undefined4 *)puVar2 = 0xf905d5d9;
    *(undefined4 *)((int)puVar2 + 4) = 0xd763a120;
    *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  }
  puVar10 = (undefined1 *)(param_1 + 0x30);
  iVar9 = 4;
  if (DAT_00582acc == 0) {
    local_8 = 0;
  }
  else {
    local_8 = (*DAT_00582b10)(5);
    if (local_8 != 0) {
      (*DAT_00582b18)(local_8);
    }
  }
  do {
    uVar5 = FUN_00487580();
    *puVar10 = uVar5;
    puVar10 = puVar10 + 1;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  if (local_8 != 0) {
    (*DAT_00582b20)(local_8);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  *(char *)((int)puVar2 + 0xc) = (char)((uint)uVar3 >> 0x18);
  *(char *)((int)puVar2 + 0xf) = (char)uVar3;
  *(char *)((int)puVar2 + 0xd) = (char)((uint)uVar3 >> 0x10);
  *(char *)((int)puVar2 + 0xe) = (char)((uint)uVar3 >> 8);
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  *(char *)(puVar2 + 2) = (char)((uint)uVar3 >> 0x18);
  *(char *)((int)puVar2 + 0x11) = (char)((uint)uVar3 >> 0x10);
  *(char *)((int)puVar2 + 0x13) = (char)uVar3;
  *(char *)((int)puVar2 + 0x12) = (char)((uint)uVar3 >> 8);
  uVar3 = *(undefined4 *)(param_1 + 0x7c);
  *(char *)((int)puVar2 + 0x14) = (char)((uint)uVar3 >> 0x18);
  *(char *)((int)puVar2 + 0x15) = (char)((uint)uVar3 >> 0x10);
  *(char *)((int)puVar2 + 0x16) = (char)((uint)uVar3 >> 8);
  *(char *)((int)puVar2 + 0x17) = (char)uVar3;
  uVar3 = *(undefined4 *)(param_1 + 0x80);
  *(char *)(puVar2 + 3) = (char)((uint)uVar3 >> 0x18);
  *(char *)((int)puVar2 + 0x19) = (char)((uint)uVar3 >> 0x10);
  *(char *)((int)puVar2 + 0x1a) = (char)((uint)uVar3 >> 8);
  *(char *)((int)puVar2 + 0x1b) = (char)uVar3;
  memset((void *)((int)puVar2 + 0x1c),0,uVar7 - 0x1c);
  param_1 = 0;
  do {
    if (*(uint *)(uVar4 + 0x7c) <= param_1) {
      return 0;
    }
    iVar9 = (**(code **)(**(int **)(uVar4 + 0x40) + 0xc))
                      (*(int **)(uVar4 + 0x40),puVar2,uVar7,*(undefined4 *)(uVar4 + 0x48),
                       *(undefined4 *)(uVar4 + 0x4c));
    puVar1 = (uint *)(uVar4 + 0x48);
    uVar6 = *puVar1;
    *puVar1 = *puVar1 + uVar7;
    *(int *)(uVar4 + 0x4c) = *(int *)(uVar4 + 0x4c) + (uint)CARRY4(uVar6,uVar7);
    param_1 = param_1 + uVar7;
  } while (iVar9 == 0);
  return iVar9;
}


/* FUN_004c2c10 @ 004c2c10  kind=lib  attributed-by=lib-island  size=422 */

int __cdecl FUN_004c2c10(int param_1,char *param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  longlong lVar8;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  
  iVar4 = 0;
  local_14 = 0;
  if (((param_2 != (char *)0x0) && (*(char *)(param_1 + 5) != '\x04')) &&
     (*(char *)(param_1 + 5) != '\x02')) {
    *(undefined1 *)(param_1 + 0x12) = 1;
    cVar3 = *param_2;
    uVar6 = 0;
    if (cVar3 != '\0') {
      uVar6 = 0;
      do {
        uVar6 = uVar6 + 1;
        iVar4 = iVar4 + cVar3;
        cVar3 = param_2[uVar6];
        local_14 = iVar4;
      } while (cVar3 != '\0');
    }
    if (*(char *)(param_1 + 8) != '\0') {
      lVar8 = FUN_0047f590(param_1);
      *(longlong *)(param_1 + 0x48) = lVar8;
    }
    local_c = *(uint *)(param_1 + 0x48);
    local_10 = *(int *)(param_1 + 0x4c);
    iVar4 = DAT_00582bb8 / *(int *)(param_1 + 0x80) + 1;
    local_8 = (undefined1)((uint)iVar4 >> 0x18);
    local_7 = (undefined1)((uint)iVar4 >> 0x10);
    local_6 = (undefined1)((uint)iVar4 >> 8);
    local_5 = (undefined1)iVar4;
    iVar4 = (**(code **)(**(int **)(param_1 + 0x40) + 0xc))
                      (*(int **)(param_1 + 0x40),&local_8,4,local_c,local_10);
    if ((iVar4 == 0) &&
       (iVar4 = (**(code **)(**(int **)(param_1 + 0x40) + 0xc))
                          (*(int **)(param_1 + 0x40),param_2,uVar6,local_c + 4,
                           local_10 + (uint)(0xfffffffb < local_c)), iVar4 == 0)) {
      bVar7 = CARRY4(uVar6,local_c);
      local_c = uVar6 + local_c;
      iVar5 = ((int)uVar6 >> 0x1f) + local_10 + (uint)bVar7;
      iVar4 = FUN_004c29b0(*(int **)(param_1 + 0x40),local_c + 4,
                           iVar5 + (uint)(0xfffffffb < local_c),uVar6);
      uVar2 = local_c;
      if ((iVar4 == 0) &&
         ((iVar4 = FUN_004c29b0(*(int **)(param_1 + 0x40),local_c + 8,
                                iVar5 + (uint)(0xfffffff7 < local_c),local_14), iVar4 == 0 &&
          (iVar4 = (**(code **)(**(int **)(param_1 + 0x40) + 0xc))
                             (*(int **)(param_1 + 0x40),&DAT_0056a700,8,uVar2 + 0xc,
                              iVar5 + (uint)(0xfffffff3 < uVar2)), iVar4 == 0)))) {
        uVar6 = uVar6 + 0x14;
        puVar1 = (uint *)(param_1 + 0x48);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 + uVar6;
        *(int *)(param_1 + 0x4c) =
             *(int *)(param_1 + 0x4c) + ((int)uVar6 >> 0x1f) + (uint)CARRY4(uVar2,uVar6);
        iVar4 = (**(code **)(**(int **)(param_1 + 0x40) + 0x18))
                          (*(int **)(param_1 + 0x40),&local_1c);
        if (iVar4 == 0) {
          iVar5 = *(int *)(param_1 + 0x4c);
          if ((iVar5 <= local_18) && ((iVar5 < local_18 || (*(uint *)(param_1 + 0x48) < local_1c))))
          {
            iVar4 = FUN_004a1370(*(int **)(param_1 + 0x40),*(uint *)(param_1 + 0x48),iVar5);
          }
        }
      }
    }
    return iVar4;
  }
  return 0;
}


/* FUN_004c2dc0 @ 004c2dc0  kind=lib  attributed-by=lib-island  size=46 */

bool __cdecl FUN_004c2dc0(byte *param_1,byte *param_2)

{
  int iVar1;
  
  if (param_1 == (byte *)0x0) {
    return param_2 == (byte *)0x0;
  }
  if (param_2 == (byte *)0x0) {
    return false;
  }
  iVar1 = FUN_004bcc60(param_1,param_2);
  return (bool)('\x01' - (iVar1 != 0));
}


/* FUN_004c2df0 @ 004c2df0  kind=lib  attributed-by=lib-island  size=158 */

undefined4 __cdecl FUN_004c2df0(int param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if ((*(int *)(param_1 + 0x24) != *(int *)(param_2 + 0x24)) ||
     (*(char *)(param_1 + 0x2c) != *(char *)(param_2 + 0x2c))) {
    return 0;
  }
  iVar6 = 0;
  if (*(int *)(param_2 + 0x24) < 1) {
    return 1;
  }
  iVar4 = *(int *)(param_2 + 4);
  iVar2 = *(int *)(param_1 + 4) - iVar4;
  while( true ) {
    iVar5 = *(int *)(param_2 + 0x24);
    if ((*(int *)(iVar4 + iVar6 * 4) != *(int *)(iVar2 + iVar4 + iVar6 * 4)) ||
       (*(char *)(iVar6 + *(int *)(param_2 + 0x1c)) != *(char *)(iVar6 + *(int *)(param_1 + 0x1c))))
    {
      return 0;
    }
    pbVar3 = *(byte **)(*(int *)(param_1 + 0x20) + iVar6 * 4);
    pbVar1 = *(byte **)(*(int *)(param_2 + 0x20) + iVar6 * 4);
    if (pbVar1 != (byte *)0x0) {
      if (pbVar3 == (byte *)0x0) {
        return 0;
      }
      pbVar3 = (byte *)FUN_004bcc60(pbVar1,pbVar3);
      iVar5 = *(int *)(param_2 + 0x24);
    }
    if (pbVar3 != (byte *)0x0) break;
    iVar6 = iVar6 + 1;
    if (iVar5 <= iVar6) {
      return 1;
    }
    iVar4 = *(int *)(param_2 + 4);
  }
  return 0;
}


/* FUN_004c2e90 @ 004c2e90  kind=lib  attributed-by=lib-island  size=1393 */

undefined4 __cdecl FUN_004c2e90(int *param_1,int *param_2,int *param_3,uint param_4,int param_5)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int *piVar8;
  undefined3 extraout_var;
  int iVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int *piVar17;
  int extraout_EDX;
  void *extraout_EDX_00;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined1 uVar20;
  uint local_24;
  int local_14;
  
  bVar5 = false;
  if (param_3 == (int *)0x0) {
    return 0;
  }
  iVar7 = FUN_004aaf60(param_1,param_2);
  if ((iVar7 == 0) && ((*(byte *)((int)param_2 + 0x2a) & 0x10) == 0)) {
    if ((param_4 == 99) &&
       (((short)param_2[9] < 0 || (param_4 = (uint)*(byte *)((int)param_2 + 0x2b), param_4 == 99))))
    {
      param_4 = 2;
    }
    psVar2 = (short *)param_3[10];
    if (((((((*psVar2 == 1) && (*(int *)(psVar2 + 0xe) == 0)) && (param_3[0xb] == 0)) &&
          ((param_3[0xe] == 0 && (param_3[0xc] == 0)))) && (param_3[0x12] == 0)) &&
        (((param_3[0xf] == 0 && ((*(byte *)((int)param_3 + 6) & 1) == 0)) &&
         ((*(int *)*param_3 == 1 &&
          (((**(char **)((int *)*param_3)[2] == 'q' &&
            (piVar8 = (int *)FUN_004a0120(param_1,0,(int *)(psVar2 + 4)), piVar8 != (int *)0x0)) &&
           (piVar8 != param_2)))))))) &&
       ((((*(byte *)((int)piVar8 + 0x2a) & 0x10) == 0 && (piVar8[3] == 0)) &&
        ((sVar1 = *(short *)((int)param_2 + 0x26), sVar1 == *(short *)((int)piVar8 + 0x26) &&
         ((short)param_2[9] == (short)piVar8[9])))))) {
      iVar7 = 0;
      if (0 < sVar1) {
        puVar18 = (undefined4 *)(param_2[1] + 0x10);
        puVar19 = (undefined4 *)(piVar8[1] + 0x10);
        do {
          if (*(char *)((int)puVar18 + 5) != *(char *)((int)puVar19 + 5)) {
            return 0;
          }
          bVar6 = FUN_004c2dc0((byte *)*puVar18,(byte *)*puVar19);
          if (CONCAT31(extraout_var,bVar6) == 0) {
            return 0;
          }
          if ((*(char *)(puVar18 + 1) != '\0') && (*(char *)(puVar19 + 1) == '\0')) {
            return 0;
          }
          iVar7 = iVar7 + 1;
          puVar18 = puVar18 + 6;
          puVar19 = puVar19 + 6;
        } while (iVar7 < sVar1);
      }
      iVar7 = param_2[2];
      if (iVar7 != 0) {
        iVar3 = piVar8[2];
        do {
          if (*(char *)(iVar7 + 0x2c) != '\0') {
            bVar5 = true;
          }
          iVar10 = iVar3;
          if (iVar3 == 0) {
            return 0;
          }
          while (iVar9 = FUN_004c2df0(iVar7,iVar10), iVar9 == 0) {
            iVar10 = *(int *)(iVar10 + 0x14);
            if (iVar10 == 0) {
              return 0;
            }
          }
          iVar7 = *(int *)(iVar7 + 0x14);
        } while (iVar7 != 0);
      }
      if (((int *)param_2[6] == (int *)0x0) ||
         (iVar7 = FUN_00498fe0((int *)piVar8[6],(int *)param_2[6]), iVar7 == 0)) {
        uVar12 = *(uint *)(*param_1 + 0x18);
        if ((((uVar12 & 0x40000) == 0) || (param_2[4] == 0)) && ((uVar12 & 0x10) == 0)) {
          iVar10 = FUN_004a7ba0(*param_1,piVar8[0x10]);
          piVar11 = FUN_0049d4d0(param_1);
          FUN_00493400(param_1,iVar10);
          iVar3 = param_1[0x12];
          iVar7 = iVar3 + 1;
          param_1[0x12] = iVar3 + 2;
          iVar9 = FUN_0046e0c0(param_1,param_5,(int)param_2);
          FUN_004a0f40(param_1,iVar3 + 1,param_5,param_2,0x28);
          if (((((short)param_2[9] < 0) && (param_2[2] != 0)) || (bVar5)) ||
             ((param_4 != 2 && (param_4 != 1)))) {
            uVar12 = FUN_004ae830(piVar11,0x48,iVar7,0);
            local_24 = FUN_004ae830(piVar11,1,0,0);
            FUN_004b6720((int)piVar11,uVar12);
          }
          else {
            local_24 = 0;
          }
          FUN_004a0f40(param_1,iVar3,iVar10,piVar8,0x27);
          uVar12 = FUN_004ae830(piVar11,0x48,iVar3,0);
          iVar13 = FUN_0049cb40((int)param_1);
          iVar14 = FUN_0049cb40(extraout_EDX);
          if ((short)param_2[9] < 0) {
            if (param_2[2] == 0) {
              uVar20 = 0x38;
              iVar9 = iVar3 + 1;
            }
            else {
              uVar20 = 0x41;
              iVar9 = iVar3;
            }
            local_14 = FUN_004ae830(piVar11,uVar20,iVar9,iVar14);
          }
          else {
            local_14 = FUN_004ae830(piVar11,0x41,iVar3,iVar14);
            uVar15 = FUN_004ae890(piVar11,0x36,iVar3 + 1,0,iVar14);
            FUN_0049d510(param_1,param_4,(int *)"PRIMARY KEY must be unique",0xfffffffe);
            FUN_004b6720((int)piVar11,uVar15);
            FUN_0046e140((int)param_1,iVar9,iVar14);
          }
          FUN_004ae830(piVar11,0x40,iVar3,iVar13);
          FUN_004ae890(piVar11,0x39,iVar3 + 1,iVar13,iVar14);
          FUN_004aee30((int)piVar11,0xb);
          iVar9 = piVar11[1];
          piVar17 = (int *)*param_2;
          iVar4 = *piVar11;
          if ((iVar9 == 0) || (*(char *)(iVar4 + 0x38) != '\0')) {
            FUN_0047bc80(iVar4,0,piVar17);
          }
          else {
            iVar16 = iVar9 + (piVar11[7] + -1) * 0x14;
            FUN_0047bc80(iVar4,(int)*(char *)(iVar16 + 1),
                         *(int **)(iVar9 + 0x10 + (piVar11[7] + -1) * 0x14));
            *(undefined4 *)(iVar16 + 0x10) = 0;
            if (piVar17 == (int *)0x0) {
              *(undefined4 *)(iVar16 + 0x10) = 0;
              *(undefined1 *)(iVar16 + 1) = 0;
            }
            else {
              uVar15 = FUN_004aa9b0((char *)piVar17);
              puVar18 = FUN_00494e00(*piVar11,extraout_EDX_00,uVar15);
              *(undefined4 **)(iVar16 + 0x10) = puVar18;
              *(undefined1 *)(iVar16 + 1) = 0xff;
            }
          }
          FUN_004ae830(piVar11,0x5f,iVar3,local_14);
          for (iVar9 = param_2[2]; iVar9 != 0; iVar9 = *(int *)(iVar9 + 0x14)) {
            iVar4 = piVar8[2];
            while ((iVar4 != 0 && (iVar16 = FUN_004c2df0(iVar9,iVar4), iVar16 == 0))) {
              iVar4 = *(int *)(iVar4 + 0x14);
            }
            FUN_004ae830(piVar11,0x2d,iVar3,0);
            FUN_004ae830(piVar11,0x2d,iVar7,0);
            piVar17 = FUN_0049dbf0(param_1,iVar4);
            FUN_004ae8f0(piVar11,0x27,iVar3,*(undefined4 *)(iVar4 + 0x28),iVar10,piVar17,0xfffffff0)
            ;
            piVar17 = FUN_0049dbf0(param_1,iVar9);
            FUN_004ae8f0(piVar11,0x28,iVar3 + 1,*(undefined4 *)(iVar9 + 0x28),param_5,piVar17,
                         0xfffffff0);
            uVar15 = FUN_004ae830(piVar11,0x48,iVar3,0);
            FUN_004ae830(piVar11,0x3f,iVar3,iVar13);
            FUN_004ae890(piVar11,0x61,iVar7,iVar13,1);
            FUN_004ae830(piVar11,0x5f,iVar3,uVar15 + 1);
            FUN_004b6720((int)piVar11,uVar15);
          }
          FUN_004b6720((int)piVar11,uVar12);
          FUN_004a68f0((int)param_1,iVar14);
          FUN_004a68f0((int)param_1,iVar13);
          FUN_004ae830(piVar11,0x2d,iVar3,0);
          FUN_004ae830(piVar11,0x2d,iVar3 + 1,0);
          if (local_24 == 0) {
            return 1;
          }
          FUN_004ae830(piVar11,6,0,0);
          FUN_004b6720((int)piVar11,local_24);
          FUN_004ae830(piVar11,0x2d,iVar3 + 1,0);
        }
      }
    }
  }
  return 0;
}


/* FUN_004c3410 @ 004c3410  kind=lib  attributed-by=lib-island  size=74 */

void __cdecl FUN_004c3410(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  *param_1 = *param_1 + -1;
  iVar1 = *param_1;
  piVar2 = (int *)param_1[2];
  iVar3 = *param_1;
  while ((-1 < iVar1 && (-1 < iVar3))) {
    FUN_004c34a0((int)param_1,*(undefined1 *)((int)param_1 + iVar3 * 0x10 + 0xe),
                 param_1 + iVar3 * 4 + 4);
    *param_1 = *param_1 + -1;
    iVar1 = *param_1;
    iVar3 = *param_1;
  }
  FUN_004962b0(piVar2,(byte *)"parser stack overflow");
  param_1[2] = (int)piVar2;
  return;
}


/* FUN_004c3460 @ 004c3460  kind=lib  attributed-by=lib-island  size=60 */

void __cdecl FUN_004c3460(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1[2];
  iVar2 = *param_1;
  iVar1 = iVar2;
  while ((-1 < iVar1 && (-1 < iVar2))) {
    FUN_004c34a0((int)param_1,*(undefined1 *)((int)param_1 + iVar2 * 0x10 + 0xe),
                 param_1 + iVar2 * 4 + 4);
    *param_1 = *param_1 + -1;
    iVar1 = *param_1;
    iVar2 = *param_1;
  }
  param_1[2] = iVar3;
  return;
}


/* FUN_004c34a0 @ 004c34a0  kind=lib  attributed-by=lib-island  size=199 */

void __cdecl FUN_004c34a0(int param_1,undefined1 param_2,undefined4 *param_3)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 8);
  switch(param_2) {
  case 0xa0:
  case 0xc2:
    FUN_004a9650(*piVar1,(undefined4 *)*param_3);
    return;
  case 0xad:
  case 0xae:
  case 199:
  case 0xc9:
  case 0xd2:
  case 0xe0:
  case 0xe2:
  case 0xec:
  case 0xf1:
    FUN_00498790(*piVar1,(undefined4 *)*param_3);
    return;
  case 0xb2:
  case 0xbb:
  case 0xc5:
  case 200:
  case 0xca:
  case 0xcc:
  case 0xd6:
  case 0xd7:
  case 0xd8:
  case 0xdc:
  case 0xe1:
    FUN_00499060(*piVar1,(int *)*param_3);
    return;
  case 0xc1:
  case 0xc6:
  case 0xce:
  case 0xcf:
    FUN_004a9cb0(*piVar1,(short *)*param_3);
    return;
  case 0xd3:
  case 0xd5:
  case 0xda:
    FUN_0049d910(*piVar1,(int *)*param_3);
    return;
  case 0xdb:
    FUN_00499060(*piVar1,(int *)*param_3);
    FUN_004a9650(*piVar1,(undefined4 *)param_3[1]);
    return;
  case 0xe8:
  case 0xed:
    FUN_00495480(*piVar1,(undefined4 *)*param_3);
    return;
  case 0xea:
    FUN_0049d910(*piVar1,(int *)param_3[1]);
  }
  return;
}


/* FUN_004c35e0 @ 004c35e0  kind=lib  attributed-by=lib-island  size=141 */

undefined2 __cdecl FUN_004c35e0(int *param_1,byte param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (uint)*(ushort *)(param_1 + *param_1 * 4 + 3);
  if (uVar3 < 0x1a1) {
    while (*(short *)(&DAT_0056bc60 + uVar3 * 2) != -0x46) {
      uVar1 = (int)*(short *)(&DAT_0056bc60 + uVar3 * 2) + (uint)param_2;
      if ((uVar1 < 0x61c) && ((&DAT_0056b640)[uVar1] == param_2)) {
LAB_004c3660:
        return *(undefined2 *)(&DAT_0056aa08 + uVar1 * 2);
      }
      if (param_2 == 0) break;
      if ((0x42 < param_2) || ((&DAT_0056c758)[param_2] == 0)) {
        iVar2 = uVar1 - param_2;
        uVar1 = iVar2 + 0x43;
        if ((-1 < (int)uVar1) && ((&DAT_0056b683)[iVar2] == 'C')) goto LAB_004c3660;
        break;
      }
      param_2 = (&DAT_0056c758)[param_2];
      if (0x1a0 < uVar3) break;
    }
  }
  return *(undefined2 *)(&DAT_0056c270 + uVar3 * 2);
}


/* FUN_004c3670 @ 004c3670  kind=lib  attributed-by=lib-island  size=8156 */

void FUN_004c3670(int *param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  short *psVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  int extraout_EDX;
  uint uVar13;
  ushort *puVar14;
  int iVar15;
  uint *puVar16;
  int *piVar17;
  undefined1 uVar18;
  uint *local_2c;
  undefined8 local_28;
  int local_20;
  undefined4 *local_1c;
  byte local_18 [4];
  undefined4 *local_14;
  int local_10;
  undefined4 *local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  puVar12 = (undefined4 *)0x0;
  iVar3 = *param_1;
  pbVar4 = (byte *)param_1[2];
  iVar5 = iVar3 * 0x10;
  local_28 = 0;
  local_1c = (undefined4 *)0x0;
  local_20 = 0;
  if (0x13e < param_2 - 5U) goto switchD_004c36ca_caseD_b3;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)&PTR_caseD_b2_004c5914 + param_2 + 3)) {
  case 0:
    pbVar4[0x1d4] = 0;
    pbVar4[0x1cc] = 0;
    pbVar4[0x1cd] = 0;
    pbVar4[0x1ce] = 0;
    pbVar4[0x1cf] = 0;
    break;
  case 1:
    pbVar4[0x1d4] = 1;
    pbVar4[0x1cc] = 0;
    pbVar4[0x1cd] = 0;
    pbVar4[0x1ce] = 0;
    pbVar4[0x1cf] = 0;
    break;
  case 2:
    pbVar4[0x1d4] = 2;
    pbVar4[0x1cc] = 0;
    pbVar4[0x1cd] = 0;
    pbVar4[0x1ce] = 0;
    pbVar4[0x1cf] = 0;
    break;
  case 3:
    FUN_00499d70((int *)pbVar4);
    puVar12 = local_1c;
    break;
  case 4:
    FUN_0048e0b0((int *)pbVar4,param_1[iVar3 * 4]);
    puVar12 = local_1c;
    break;
  case 5:
    local_28 = 7;
    break;
  case 6:
    local_28 = (ulonglong)*(byte *)((int)param_1 + iVar5 + 0xe);
    break;
  case 7:
    FUN_004936f0((int *)pbVar4);
    puVar12 = local_1c;
    break;
  case 8:
    FUN_004a6d60((int *)pbVar4);
    puVar12 = local_1c;
    break;
  case 9:
    FUN_004a78d0((int *)pbVar4,0,param_1 + iVar3 * 4 + 4);
    puVar12 = local_1c;
    break;
  case 10:
    FUN_004a78d0((int *)pbVar4,1,param_1 + iVar3 * 4 + 4);
    puVar12 = local_1c;
    break;
  case 0xb:
    FUN_004a78d0((int *)pbVar4,2,param_1 + iVar3 * 4 + 4);
    puVar12 = local_1c;
    break;
  case 0xc:
    FUN_004aa1c0((int *)pbVar4,param_1 + iVar3 * 4,(int)(param_1 + iVar3 * 4 + 4),
                 param_1[iVar3 * 4 + -0xc],0,0,param_1[iVar3 * 4 + -4]);
    puVar12 = local_1c;
    break;
  case 0xd:
    *(undefined1 *)(*(int *)pbVar4 + 0xea) = 0;
  case 0x14:
    local_28 = *(ulonglong *)(param_1 + iVar3 * 4 + 4);
    break;
  case 0xf:
    local_28 = 1;
    break;
  case 0x10:
    FUN_00495df0((int *)pbVar4,param_1 + iVar3 * 4,param_1 + iVar3 * 4 + 4,(int *)0x0);
    puVar12 = local_1c;
    break;
  case 0x11:
    FUN_00495df0((int *)pbVar4,(int *)0x0,(int *)0x0,(int *)param_1[iVar3 * 4 + 4]);
    FUN_004a9650(*(int *)pbVar4,(undefined4 *)param_1[iVar3 * 4 + 4]);
    puVar12 = local_1c;
    break;
  case 0x12:
    local_28 = CONCAT44((*(int *)(pbVar4 + 0x214) + *(int *)(pbVar4 + 0x210)) -
                        param_1[iVar3 * 4 + -4],param_1[iVar3 * 4 + -4]);
    break;
  case 0x13:
    FUN_0048ba50((int *)pbVar4,param_1 + iVar3 * 4 + 4);
    local_28 = *(ulonglong *)(param_1 + iVar3 * 4 + 4);
    pbVar4[0x1a0] = 0;
    pbVar4[0x1a1] = 0;
    pbVar4[0x1a2] = 0;
    pbVar4[0x1a3] = 0;
    puVar12 = local_1c;
    break;
  case 0x15:
    FUN_0048bb90((int *)pbVar4,param_1 + iVar3 * 4 + 4);
    puVar12 = local_1c;
    break;
  case 0x16:
    local_28 = CONCAT44((param_1[iVar3 * 4 + 5] + param_1[iVar3 * 4 + 4]) - param_1[iVar3 * 4 + -8],
                        param_1[iVar3 * 4 + -8]);
    break;
  case 0x17:
    local_28 = CONCAT44((param_1[iVar3 * 4 + 5] + param_1[iVar3 * 4 + 4]) -
                        param_1[iVar3 * 4 + -0x10],param_1[iVar3 * 4 + -0x10]);
    break;
  case 0x18:
    local_28 = CONCAT44((param_1[iVar3 * 4 + 5] + param_1[iVar3 * 4 + 4]) - param_1[iVar3 * 4],
                        param_1[iVar3 * 4]);
    break;
  case 0x19:
    *(int *)(pbVar4 + 0x19c) = param_1[iVar3 * 4 + 4];
    *(int *)(pbVar4 + 0x1a0) = param_1[iVar3 * 4 + 5];
    break;
  case 0x1a:
    FUN_0048bbe0((int *)pbVar4,param_1 + iVar3 * 4 + 4);
    puVar12 = local_1c;
    break;
  case 0x1b:
    FUN_0048bbe0((int *)pbVar4,param_1 + iVar3 * 4);
    puVar12 = local_1c;
    break;
  case 0x1c:
    local_2c = (uint *)param_1[iVar3 * 4 + 4];
    puVar12 = FUN_00494b90(*(int *)pbVar4,0x2c);
    if (puVar12 != (undefined4 *)0x0) {
      memset(puVar12,0,0x2c);
      *(undefined1 *)puVar12 = 0x9c;
      *(undefined2 *)((int)puVar12 + 0x1e) = 0xffff;
      puVar12[5] = 1;
    }
    FUN_00496a30(*(int *)pbVar4,(int)puVar12,local_2c,(undefined4 *)0x0);
    if ((puVar12 != (undefined4 *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)puVar12[5])) {
      FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
    }
    local_10 = param_1[iVar3 * 4];
    local_c = (undefined4 *)param_1[iVar3 * 4 + 6];
    local_14 = puVar12;
    FUN_0048bbe0((int *)pbVar4,(int *)&local_14);
    puVar12 = local_1c;
    break;
  case 0x1d:
    FUN_0048b7c0(&local_14,(int *)pbVar4,0x5e,param_1 + iVar3 * 4 + 4);
    FUN_0048bbe0((int *)pbVar4,(int *)&local_14);
    puVar12 = local_1c;
    break;
  case 0x1e:
    iVar5 = *(int *)(pbVar4 + 0x1fc);
    if ((iVar5 != 0) && (0 < *(short *)(iVar5 + 0x26))) {
      *(char *)(*(int *)(iVar5 + 4) + -4 + *(short *)(iVar5 + 0x26) * 0x18) =
           (char)param_1[iVar3 * 4 + 4];
      puVar12 = local_1c;
    }
    break;
  case 0x1f:
    FUN_0048bd80((int *)pbVar4,(uint *)0x0,param_1[iVar3 * 4],param_1[iVar3 * 4 + 4],
                 param_1[iVar3 * 4 + -4]);
    puVar12 = local_1c;
    break;
  case 0x20:
    FUN_004940f0((int *)pbVar4,(undefined4 *)0x0,0,(short *)0x0,(uint *)0x0,param_1[iVar3 * 4 + 4],0
                 ,0,0,0);
    puVar12 = local_1c;
    break;
  case 0x21:
    FUN_0048b960((int *)pbVar4,(undefined4 *)param_1[iVar3 * 4]);
    puVar12 = local_1c;
    break;
  case 0x22:
    FUN_00493bd0((int *)pbVar4,(int *)0x0,param_1 + iVar3 * 4 + -4,(int *)param_1[iVar3 * 4],
                 param_1[iVar3 * 4 + 4]);
    puVar12 = local_1c;
    break;
  case 0x23:
    FUN_00494ea0((int)pbVar4,(char)param_1[iVar3 * 4 + 4]);
    puVar12 = (undefined4 *)extraout_EDX;
    break;
  case 0x24:
    FUN_0048b9c0((int *)pbVar4,param_1 + iVar3 * 4 + 4);
    puVar12 = local_1c;
    break;
  case 0x25:
    local_28 = (ulonglong)
               (uint)(~param_1[iVar3 * 4 + 5] & param_1[iVar3 * 4] | param_1[iVar3 * 4 + 4]);
    break;
  case 0x26:
  case 0x44:
    local_28 = 0;
    break;
  case 0x27:
    local_28 = CONCAT44(0xff,param_1[iVar3 * 4 + 4]);
    break;
  case 0x28:
    local_28 = CONCAT44(0xff00,param_1[iVar3 * 4 + 4] << 8);
    break;
  case 0x29:
    local_28 = 8;
    break;
  case 0x2a:
    local_28 = 9;
    break;
  case 0x2b:
    local_28 = 6;
    break;
  case 0x2d:
  case 0xe:
    local_28 = 0;
    break;
  case 0x2e:
    local_28 = *(ulonglong *)(param_1 + iVar3 * 4);
    break;
  case 0x2f:
    pbVar4[0x1a0] = 0;
    pbVar4[0x1a1] = 0;
    pbVar4[0x1a2] = 0;
    pbVar4[0x1a3] = 0;
    break;
  case 0x30:
    FUN_0048bd80((int *)pbVar4,(uint *)param_1[iVar3 * 4 + -8],param_1[iVar3 * 4 + 4],
                 param_1[iVar3 * 4 + -4],0);
    puVar12 = local_1c;
    break;
  case 0x31:
    FUN_004940f0((int *)pbVar4,(undefined4 *)0x0,0,(short *)0x0,(uint *)param_1[iVar3 * 4 + -4],
                 param_1[iVar3 * 4 + 4],0,0,0,0);
    puVar12 = local_1c;
    break;
  case 0x32:
    FUN_0048b960((int *)pbVar4,(undefined4 *)param_1[iVar3 * 4 + -4]);
    puVar12 = local_1c;
    break;
  case 0x33:
    FUN_00493bd0((int *)pbVar4,(int *)param_1[iVar3 * 4 + -0x14],param_1 + iVar3 * 4 + -8,
                 (int *)param_1[iVar3 * 4 + -4],param_1[iVar3 * 4]);
    FUN_00494ea0((int)pbVar4,(char)param_1[iVar3 * 4 + 4]);
    puVar12 = local_1c;
    break;
  case 0x34:
    local_28 = 99;
    break;
  case 0x35:
    local_28 = 99;
    break;
  case 0x36:
    local_28 = (ulonglong)*(byte *)(param_1 + iVar3 * 4 + 4);
    break;
  case 0x37:
    local_28 = 4;
    break;
  case 0x38:
    local_28 = 5;
    break;
  case 0x39:
    FUN_004957f0((int *)pbVar4,(short *)param_1[iVar3 * 4 + 4],0,param_1[iVar3 * 4]);
    puVar12 = local_1c;
    break;
  case 0x3a:
    FUN_00494960((int *)pbVar4,param_1 + iVar3 * 4 + -0x18,param_1 + iVar3 * 4 + -8,
                 (int)(param_1 + iVar3 * 4 + -4),(undefined4 *)param_1[iVar3 * 4 + 4],
                 param_1[iVar3 * 4 + -0x14],param_1[iVar3 * 4 + -0xc]);
    puVar12 = local_1c;
    break;
  case 0x3b:
    FUN_004957f0((int *)pbVar4,(short *)param_1[iVar3 * 4 + 4],1,param_1[iVar3 * 4]);
    puVar12 = local_1c;
    break;
  case 0x3c:
    local_18[0] = 5;
    local_18[1] = 0;
    local_14 = (undefined4 *)0x0;
    local_10 = 0;
    local_c = (undefined4 *)0x0;
    FUN_004a7e30((int *)pbVar4,(int *)param_1[iVar3 * 4 + 4],local_18);
    FUN_004a9650(*(int *)pbVar4,(undefined4 *)param_1[iVar3 * 4 + 4]);
    puVar12 = local_1c;
    break;
  case 0x3d:
    if (param_1[iVar3 * 4 + 4] != 0) {
      *(char *)(param_1[iVar3 * 4 + 4] + 4) = (char)param_1[iVar3 * 4];
      *(int *)(param_1[iVar3 * 4 + 4] + 0x3c) = param_1[iVar3 * 4 + -4];
      local_28 = (ulonglong)(uint)param_1[iVar3 * 4 + 4];
      break;
    }
    FUN_004a9650(*(int *)pbVar4,(undefined4 *)param_1[iVar3 * 4 + -4]);
    puVar12 = local_1c;
  case 0x2c:
    local_28 = CONCAT44(local_28._4_4_,param_1[iVar3 * 4 + 4]);
    break;
  case 0x3e:
    local_28 = 0x71;
    break;
  case 0x3f:
    uVar8 = FUN_004a97d0((int *)pbVar4,(int *)param_1[iVar3 * 4 + -0x14],
                         (undefined4 *)param_1[iVar3 * 4 + -0x10],param_1[iVar3 * 4 + -0xc],
                         param_1[iVar3 * 4 + -8],param_1[iVar3 * 4 + -4],param_1[iVar3 * 4],
                         param_1[iVar3 * 4 + -0x18],param_1[iVar3 * 4 + 4],param_1[iVar3 * 4 + 5]);
    local_28 = CONCAT44(local_28._4_4_,uVar8);
    puVar12 = local_1c;
    break;
  case 0x41:
    puVar16 = FUN_00498f00((int *)pbVar4,(uint *)param_1[iVar3 * 4 + -4],
                           (undefined4 *)param_1[iVar3 * 4]);
    local_28 = CONCAT44(local_28._4_4_,puVar16);
    if (param_1[iVar3 * 4 + 5] != 0) {
      FUN_004992e0((int *)pbVar4,(int *)puVar16,param_1 + iVar3 * 4 + 4,1);
    }
    FUN_00499360((int *)pbVar4,(int *)puVar16,(int)(param_1 + iVar3 * 4));
    puVar12 = local_1c;
    break;
  case 0x42:
    puVar12 = FUN_00494b90(*(int *)pbVar4,0x2d);
    if (puVar12 != (undefined4 *)0x0) {
      memset(puVar12,0,0x2d);
      *(undefined2 *)((int)puVar12 + 0x1e) = 0xffff;
      *(undefined1 *)puVar12 = 0x71;
      puVar12[1] = puVar12 + 0xb;
      *(undefined1 *)(puVar12 + 0xb) = 0;
      puVar12[5] = 1;
    }
    puVar16 = FUN_00498f00((int *)pbVar4,(uint *)param_1[iVar3 * 4],puVar12);
    local_28 = CONCAT44(local_28._4_4_,puVar16);
    puVar12 = local_1c;
    break;
  case 0x43:
    puVar16 = FUN_00496510(*(int *)pbVar4,0x71,param_1 + iVar3 * 4 + 4,1);
    local_2c = puVar16;
    FUN_00496a30(*(int *)pbVar4,(int)puVar16,(undefined4 *)0x0,(undefined4 *)0x0);
    if ((puVar16 != (uint *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)puVar16[5])) {
      FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
    }
    puVar12 = FUN_00496510(*(int *)pbVar4,0x1a,param_1 + iVar3 * 4 + -4,1);
    FUN_00496a30(*(int *)pbVar4,(int)puVar12,(undefined4 *)0x0,(undefined4 *)0x0);
    if ((puVar12 != (undefined4 *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)puVar12[5])) {
      FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
    }
    puVar9 = FUN_00494b90(*(int *)pbVar4,0x2c);
    if (puVar9 != (undefined4 *)0x0) {
      memset(puVar9,0,0x2c);
      *(undefined1 *)puVar9 = 0x76;
      *(undefined2 *)((int)puVar9 + 0x1e) = 0xffff;
      puVar9[5] = 1;
    }
    FUN_00496a30(*(int *)pbVar4,(int)puVar9,puVar12,local_2c);
    if ((puVar9 != (undefined4 *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)puVar9[5])) {
      FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
    }
    puVar16 = FUN_00498f00((int *)pbVar4,(uint *)param_1[iVar3 * 4 + -8],puVar9);
    local_28 = CONCAT44(local_28._4_4_,puVar16);
    puVar12 = local_1c;
    break;
  case 0x45:
    puVar12 = FUN_00494c20(*(int *)pbVar4,0x50);
    local_28 = CONCAT44(local_28._4_4_,puVar12);
    puVar12 = local_1c;
    break;
  case 0x46:
    local_28 = ZEXT48((short *)param_1[iVar3 * 4 + 4]);
    FUN_004aa180((short *)param_1[iVar3 * 4 + 4]);
    puVar12 = local_1c;
    break;
  case 0x47:
    psVar10 = (short *)param_1[iVar3 * 4];
    local_28 = ZEXT48(psVar10);
    if ((psVar10 != (short *)0x0) && (0 < *psVar10)) {
      *(char *)(psVar10 + *psVar10 * 0x24 + -0x10) = (char)param_1[iVar3 * 4 + 4];
    }
    break;
  case 0x48:
    psVar10 = FUN_004a9b80((int *)pbVar4,(short *)param_1[iVar3 * 4 + -0x14],
                           param_1 + iVar3 * 4 + -0x10,param_1 + iVar3 * 4 + -0xc,
                           param_1 + iVar3 * 4 + -8,(undefined4 *)0x0,
                           (undefined4 *)param_1[iVar3 * 4],(int *)param_1[iVar3 * 4 + 4]);
    local_28 = CONCAT44(local_28._4_4_,psVar10);
    FUN_004aa0e0((int *)pbVar4,psVar10,param_1 + iVar3 * 4 + -4);
    puVar12 = local_1c;
    break;
  case 0x49:
    psVar10 = FUN_004a9b80((int *)pbVar4,(short *)param_1[iVar3 * 4 + -0x14],(int *)0x0,(int *)0x0,
                           param_1 + iVar3 * 4 + -4,(undefined4 *)param_1[iVar3 * 4 + -0xc],
                           (undefined4 *)param_1[iVar3 * 4],(int *)param_1[iVar3 * 4 + 4]);
    local_28 = CONCAT44(local_28._4_4_,psVar10);
    puVar12 = local_1c;
    break;
  case 0x4a:
    if ((((param_1[iVar3 * 4 + -0x14] == 0) && (param_1[iVar3 * 4 + -3] == 0)) &&
        (param_1[iVar3 * 4] == 0)) && (param_1[iVar3 * 4 + 4] == 0)) {
      local_28 = (ulonglong)(uint)param_1[iVar3 * 4 + -0xc];
    }
    else {
      FUN_004aa180((short *)param_1[iVar3 * 4 + -0xc]);
      puVar12 = (undefined4 *)
                FUN_004a97d0((int *)pbVar4,(int *)0x0,(undefined4 *)param_1[iVar3 * 4 + -0xc],0,0,0,
                             0,0,0,0);
      psVar10 = FUN_004a9b80((int *)pbVar4,(short *)param_1[iVar3 * 4 + -0x14],(int *)0x0,(int *)0x0
                             ,param_1 + iVar3 * 4 + -4,puVar12,(undefined4 *)param_1[iVar3 * 4],
                             (int *)param_1[iVar3 * 4 + 4]);
      local_28 = CONCAT44(local_28._4_4_,psVar10);
      puVar12 = local_1c;
    }
    break;
  case 0x4b:
    psVar10 = FUN_004a9ac0(*(int *)pbVar4,(short *)0x0,param_1 + iVar3 * 4,param_1 + iVar3 * 4 + 4);
    local_28 = CONCAT44(local_28._4_4_,psVar10);
    puVar12 = local_1c;
    break;
  case 0x4c:
    uVar13 = FUN_0049f970((int *)pbVar4,(int)(param_1 + iVar3 * 4),0,0);
    local_28 = CONCAT44(local_28._4_4_,uVar13);
    puVar12 = local_1c;
    break;
  case 0x4d:
    uVar13 = FUN_0049f970((int *)pbVar4,(int)(param_1 + iVar3 * 4 + -4),param_1 + iVar3 * 4,0);
    local_28 = CONCAT44(local_28._4_4_,uVar13);
    puVar12 = local_1c;
    break;
  case 0x4e:
    uVar13 = FUN_0049f970((int *)pbVar4,(int)(param_1 + iVar3 * 4 + -8),param_1 + iVar3 * 4 + -4,
                          param_1 + iVar3 * 4);
    local_28 = CONCAT44(local_28._4_4_,uVar13);
    puVar12 = local_1c;
    break;
  case 0x4f:
    local_28 = 0x100000000;
    break;
  case 0x50:
    puVar16 = FUN_00498f00((int *)pbVar4,(uint *)param_1[iVar3 * 4 + -8],
                           (undefined4 *)param_1[iVar3 * 4]);
    local_28 = CONCAT44(local_28._4_4_,puVar16);
    puVar12 = local_1c;
    if (puVar16 != (uint *)0x0) {
      *(char *)((puVar16[2] - 8) + *puVar16 * 0x14) = (char)param_1[iVar3 * 4 + 4];
    }
    break;
  case 0x51:
    puVar16 = FUN_00498f00((int *)pbVar4,(uint *)0x0,(undefined4 *)param_1[iVar3 * 4]);
    local_28 = CONCAT44(local_28._4_4_,puVar16);
    puVar12 = local_1c;
    if ((puVar16 != (uint *)0x0) && (puVar16[2] != 0)) {
      *(char *)(puVar16[2] + 0xc) = (char)param_1[iVar3 * 4 + 4];
    }
    break;
  case 0x52:
    local_28 = (ulonglong)(uint)param_1[iVar3 * 4 + 4];
    break;
  case 0x53:
    local_28 = CONCAT44(param_1[iVar3 * 4 + 4],param_1[iVar3 * 4 + -4]);
    break;
  case 0x54:
    local_28 = CONCAT44(param_1[iVar3 * 4 + -4],param_1[iVar3 * 4 + 4]);
    break;
  case 0x55:
    FUN_004aa0e0((int *)pbVar4,(short *)param_1[iVar3 * 4 + -4],param_1 + iVar3 * 4);
    FUN_00494ec0((int *)pbVar4,(short *)param_1[iVar3 * 4 + -4],(byte *)param_1[iVar3 * 4 + 4]);
    puVar12 = local_1c;
    break;
  case 0x56:
    FUN_004aa0e0((int *)pbVar4,(short *)param_1[iVar3 * 4 + -0xc],param_1 + iVar3 * 4 + -8);
    FUN_00498fb0((int *)pbVar4,(int *)param_1[iVar3 * 4]);
    FUN_004ab480((int *)pbVar4,(short *)param_1[iVar3 * 4 + -0xc],(int *)param_1[iVar3 * 4],
                 (byte *)param_1[iVar3 * 4 + 4],(int *)(uint)*(byte *)(param_1 + iVar3 * 4 + -0x10))
    ;
    puVar12 = local_1c;
    break;
  case 0x57:
    puVar12 = (undefined4 *)param_1[iVar3 * 4 + 4];
    puVar16 = (uint *)param_1[iVar3 * 4 + -0xc];
    goto LAB_004c407a;
  case 0x58:
    puVar12 = (undefined4 *)param_1[iVar3 * 4 + 4];
    puVar16 = (uint *)0x0;
LAB_004c407a:
    puVar16 = FUN_00498f00((int *)pbVar4,puVar16,puVar12);
    local_28 = CONCAT44(local_28._4_4_,puVar16);
    FUN_004992e0((int *)pbVar4,(int *)puVar16,param_1 + iVar3 * 4 + -4,1);
    puVar12 = local_1c;
    break;
  case 0x59:
    FUN_0049e570((int *)pbVar4,(short *)param_1[iVar3 * 4 + -4],(int *)param_1[iVar3 * 4 + 4],
                 (int *)param_1[iVar3 * 4 + 5],(int *)param_1[iVar3 * 4],
                 (int *)(uint)*(byte *)(param_1 + iVar3 * 4 + -0xc));
    puVar12 = local_1c;
    break;
  case 0x5a:
    FUN_0049e570((int *)pbVar4,(short *)param_1[iVar3 * 4 + -4],(int *)0x0,
                 (int *)param_1[iVar3 * 4 + 4],(int *)param_1[iVar3 * 4],
                 (int *)(uint)*(byte *)(param_1 + iVar3 * 4 + -0xc));
    puVar12 = local_1c;
    break;
  case 0x5b:
    FUN_0049e570((int *)pbVar4,(short *)param_1[iVar3 * 4 + -8],(int *)0x0,(int *)0x0,
                 (int *)param_1[iVar3 * 4 + -4],(int *)(uint)*(byte *)(param_1 + iVar3 * 4 + -0x10))
    ;
    puVar12 = local_1c;
    break;
  case 0x5c:
    local_28 = 5;
    break;
  case 0x5d:
    local_28 = (ulonglong)(uint)param_1[iVar3 * 4];
    break;
  case 0x5e:
    puVar12 = (undefined4 *)
              FUN_004a97d0((int *)pbVar4,(int *)param_1[iVar3 * 4],(undefined4 *)0x0,0,0,0,0,0,0,0);
    if ((int *)param_1[iVar3 * 4 + -0xc] != (int *)0x0) {
      iVar5 = FUN_004a97d0((int *)pbVar4,(int *)param_1[iVar3 * 4 + -0xc],(undefined4 *)0x0,0,0,0,0,
                           0,0,0);
      param_1[iVar3 * 4 + -0xb] = iVar5;
      param_1[iVar3 * 4 + -0xc] = 0;
    }
    local_28 = local_28 & 0xffffffff00000000;
    if ((param_1[iVar3 * 4 + -0xb] == 0) || (puVar12 == (undefined4 *)0x0)) {
      FUN_004a9650(*(int *)pbVar4,puVar12);
      FUN_004a9650(*(int *)pbVar4,(undefined4 *)param_1[iVar3 * 4 + -0xb]);
      local_28 = local_28 & 0xffffffff;
      puVar12 = local_1c;
    }
    else {
      *(undefined1 *)(puVar12 + 1) = 0x71;
      iVar5 = param_1[iVar3 * 4 + -0xb];
      *(ushort *)((int)puVar12 + 6) = *(ushort *)((int)puVar12 + 6) | 0x80;
      puVar12[0xf] = iVar5;
      puVar14 = (ushort *)(iVar5 + 6);
      *puVar14 = *puVar14 | 0x80;
      local_28 = ZEXT48(puVar12) << 0x20;
      puVar12 = local_1c;
    }
    break;
  case 0x5f:
    piVar6 = FUN_0049d890(*(int *)pbVar4,(int *)param_1[iVar3 * 4 + -4],param_1 + iVar3 * 4 + 4);
    local_28 = CONCAT44(local_28._4_4_,piVar6);
    puVar12 = local_1c;
    break;
  case 0x60:
    iVar5 = *(int *)pbVar4;
    piVar6 = FUN_00494b90(iVar5,8);
    if (piVar6 != (int *)0x0) {
      piVar6[0] = 0;
      piVar6[1] = 0;
      puVar12 = FUN_0048cc10(iVar5,(undefined4 *)*piVar6,8,(uint *)(piVar6 + 1),(uint *)&local_2c);
      *piVar6 = (int)puVar12;
      if (-1 < (int)local_2c) {
        pcVar7 = FUN_004a0d40(iVar5,param_1 + iVar3 * 4 + 4);
        *(char **)(*piVar6 + (int)local_2c * 8) = pcVar7;
        local_28 = CONCAT44(local_28._4_4_,piVar6);
        puVar12 = local_1c;
        break;
      }
      FUN_0049d910(iVar5,piVar6);
    }
    local_28 = local_28 & 0xffffffff00000000;
    puVar12 = local_1c;
    break;
  case 0x61:
    local_28 = *(ulonglong *)(param_1 + iVar3 * 4 + 4);
    puVar12 = (undefined4 *)param_1[iVar3 * 4 + 6];
    break;
  case 0x62:
    puVar12 = (undefined4 *)(param_1[iVar3 * 4 + 5] + param_1[iVar3 * 4 + 4]);
    local_28 = CONCAT44(param_1[iVar3 * 4 + -4],param_1[iVar3 * 4]);
    break;
  case 99:
    uVar13 = (uint)*(byte *)((int)param_1 + iVar5 + 0xe);
    goto LAB_004c4261;
  case 100:
    uVar13 = 0x1a;
LAB_004c4261:
    FUN_0048b7c0((undefined4 *)&local_28,(int *)pbVar4,uVar13,param_1 + iVar3 * 4 + 4);
    puVar12 = (undefined4 *)local_20;
    break;
  case 0x65:
    puVar16 = FUN_00496510(*(int *)pbVar4,0x1a,param_1 + iVar3 * 4 + -4,1);
    local_2c = puVar16;
    FUN_00496a30(*(int *)pbVar4,(int)puVar16,(undefined4 *)0x0,(undefined4 *)0x0);
    if ((puVar16 != (uint *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)puVar16[5])) {
      FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
    }
    puVar12 = FUN_00496510(*(int *)pbVar4,0x1a,param_1 + iVar3 * 4 + 4,1);
    FUN_00496a30(*(int *)pbVar4,(int)puVar12,(undefined4 *)0x0,(undefined4 *)0x0);
    if ((puVar12 != (undefined4 *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)puVar12[5])) {
      FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
    }
    puVar9 = FUN_00494b90(*(int *)pbVar4,0x2c);
    if (puVar9 != (undefined4 *)0x0) {
      memset(puVar9,0,0x2c);
      *(undefined1 *)puVar9 = 0x76;
      *(undefined2 *)((int)puVar9 + 0x1e) = 0xffff;
      puVar9[5] = 1;
    }
    FUN_00496a30(*(int *)pbVar4,(int)puVar9,local_2c,puVar12);
    if ((puVar9 != (undefined4 *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)puVar9[5])) {
      FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
    }
    local_28 = CONCAT44(param_1[iVar3 * 4 + -4],puVar9);
    puVar12 = (undefined4 *)(param_1[iVar3 * 4 + 5] + param_1[iVar3 * 4 + 4]);
    break;
  case 0x66:
    puVar12 = FUN_00496510(*(int *)pbVar4,0x1a,param_1 + iVar3 * 4 + -0xc,1);
    local_c = puVar12;
    FUN_00496a30(*(int *)pbVar4,(int)puVar12,(undefined4 *)0x0,(undefined4 *)0x0);
    if ((puVar12 != (undefined4 *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)puVar12[5])) {
      FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
    }
    puVar16 = FUN_00496510(*(int *)pbVar4,0x1a,param_1 + iVar3 * 4 + -4,1);
    local_2c = puVar16;
    FUN_00496a30(*(int *)pbVar4,(int)puVar16,(undefined4 *)0x0,(undefined4 *)0x0);
    if ((puVar16 != (uint *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)puVar16[5])) {
      FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
    }
    puVar12 = FUN_00496510(*(int *)pbVar4,0x1a,param_1 + iVar3 * 4 + 4,1);
    FUN_00496a30(*(int *)pbVar4,(int)puVar12,(undefined4 *)0x0,(undefined4 *)0x0);
    if ((puVar12 != (undefined4 *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)puVar12[5])) {
      FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
    }
    local_1c = FUN_00494b90(*(int *)pbVar4,0x2c);
    if (local_1c != (undefined4 *)0x0) {
      memset(local_1c,0,0x2c);
      *(undefined1 *)local_1c = 0x76;
      *(undefined2 *)((int)local_1c + 0x1e) = 0xffff;
      local_1c[5] = 1;
    }
    FUN_00496a30(*(int *)pbVar4,(int)local_1c,local_2c,puVar12);
    if ((local_1c != (undefined4 *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)local_1c[5])) {
      FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
    }
    local_2c = FUN_00494b90(*(int *)pbVar4,0x2c);
    if (local_2c != (uint *)0x0) {
      memset(local_2c,0,0x2c);
      *(undefined1 *)local_2c = 0x76;
      *(undefined2 *)((int)local_2c + 0x1e) = 0xffff;
      local_2c[5] = 1;
    }
    FUN_00496a30(*(int *)pbVar4,(int)local_2c,local_c,local_1c);
    puVar16 = local_2c;
    if ((local_2c != (uint *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)local_2c[5])) {
      FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
    }
    local_28 = CONCAT44(param_1[iVar3 * 4 + -0xc],puVar16);
    puVar12 = (undefined4 *)(param_1[iVar3 * 4 + 5] + param_1[iVar3 * 4 + 4]);
    break;
  case 0x67:
    puVar16 = (uint *)(param_1 + iVar3 * 4 + 4);
    if (pbVar4[0x12] == 0) {
      FUN_004962b0((int *)pbVar4,(byte *)"near \"%T\": syntax error");
      local_28 = (ulonglong)*puVar16 << 0x20;
      puVar12 = (undefined4 *)(param_1[iVar3 * 4 + 5] + *puVar16);
    }
    else {
      local_2c = FUN_00496510(*(int *)pbVar4,0x84,puVar16,1);
      FUN_00496a30(*(int *)pbVar4,(int)local_2c,(undefined4 *)0x0,(undefined4 *)0x0);
      if ((local_2c != (uint *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)local_2c[5])) {
        FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
      }
      local_28 = CONCAT44(local_28._4_4_,local_2c);
      if (local_2c != (uint *)0x0) {
        FUN_0049ca30((char *)(*puVar16 + 1),local_2c + 6);
      }
      local_28 = CONCAT44(*puVar16,(undefined4 *)local_28);
      puVar12 = (undefined4 *)(param_1[iVar3 * 4 + 5] + *puVar16);
    }
    break;
  case 0x68:
    FUN_0048b7c0((undefined4 *)&local_28,(int *)pbVar4,0x85,param_1 + iVar3 * 4 + 4);
    FUN_004967a0((int *)pbVar4,(int)(undefined4 *)local_28);
    iVar5 = param_1[iVar3 * 4 + 4];
    local_28 = CONCAT44(iVar5,(undefined4 *)local_28);
    puVar12 = (undefined4 *)(param_1[iVar3 * 4 + 5] + iVar5);
    break;
  case 0x69:
    puVar12 = FUN_00496440((int *)pbVar4,(undefined4 *)param_1[iVar3 * 4 + -4],
                           param_1 + iVar3 * 4 + 4);
    local_28 = CONCAT44(param_1[iVar3 * 4 + -3],puVar12);
    puVar12 = (undefined4 *)(param_1[iVar3 * 4 + 5] + param_1[iVar3 * 4 + 4]);
    break;
  case 0x6a:
    puVar12 = (undefined4 *)param_1[iVar3 * 4 + -8];
    puVar9 = FUN_00496510(*(int *)pbVar4,0x25,param_1 + iVar3 * 4,1);
    FUN_00496a30(*(int *)pbVar4,(int)puVar9,puVar12,(undefined4 *)0x0);
    if ((puVar9 != (undefined4 *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)puVar9[5])) {
      FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
    }
    local_28 = CONCAT44(param_1[iVar3 * 4 + -0x10],puVar9);
    puVar12 = (undefined4 *)(param_1[iVar3 * 4 + 5] + param_1[iVar3 * 4 + 4]);
    break;
  case 0x6b:
    if (((int *)param_1[iVar3 * 4] != (int *)0x0) &&
       (*(int *)(*(int *)pbVar4 + 0x68) < *(int *)param_1[iVar3 * 4])) {
      FUN_004962b0((int *)pbVar4,(byte *)"too many arguments on function %T");
    }
    puVar9 = FUN_00498830((int *)pbVar4,(int *)param_1[iVar3 * 4],param_1 + iVar3 * 4 + -0xc);
    puVar12 = (undefined4 *)(param_1[iVar3 * 4 + 5] + param_1[iVar3 * 4 + 4]);
    local_28 = CONCAT44(param_1[iVar3 * 4 + -0xc],puVar9);
    if ((param_1[iVar3 * 4 + -4] != 0) && (puVar9 != (undefined4 *)0x0)) {
      *(ushort *)((int)puVar9 + 2) = *(ushort *)((int)puVar9 + 2) | 0x10;
    }
    break;
  case 0x6c:
    puVar12 = FUN_00498830((int *)pbVar4,(int *)0x0,param_1 + iVar3 * 4 + -8);
    local_28 = CONCAT44(param_1[iVar3 * 4 + -8],puVar12);
    puVar12 = (undefined4 *)(param_1[iVar3 * 4 + 5] + param_1[iVar3 * 4 + 4]);
    break;
  case 0x6d:
    puVar12 = FUN_00498830((int *)pbVar4,(int *)0x0,param_1 + iVar3 * 4 + 4);
    if (puVar12 != (undefined4 *)0x0) {
      *(undefined1 *)puVar12 = 0x9b;
    }
    iVar5 = param_1[iVar3 * 4 + 4];
    local_28 = CONCAT44(iVar5,puVar12);
    puVar12 = (undefined4 *)(param_1[iVar3 * 4 + 5] + iVar5);
    break;
  case 0x6e:
    FUN_0048b780((undefined4 *)&local_28,(int *)pbVar4,(uint)*(byte *)((int)param_1 + iVar5 + -2),
                 param_1 + iVar3 * 4 + -4,param_1 + iVar3 * 4 + 4);
    puVar12 = (undefined4 *)local_20;
    break;
  case 0x6f:
    local_28 = *(ulonglong *)(param_1 + iVar3 * 4 + 4);
    puVar12 = (undefined4 *)0;
    break;
  case 0x70:
    local_28 = *(ulonglong *)(param_1 + iVar3 * 4 + 4);
    puVar12 = (undefined4 *)1;
    break;
  case 0x71:
    puVar16 = FUN_00498f00((int *)pbVar4,(uint *)0x0,(undefined4 *)param_1[iVar3 * 4 + 4]);
    puVar16 = FUN_00498f00((int *)pbVar4,puVar16,(undefined4 *)param_1[iVar3 * 4 + -4]);
    puVar9 = FUN_00498830((int *)pbVar4,(int *)puVar16,param_1 + iVar3 * 4);
    local_28 = CONCAT44(local_28._4_4_,puVar9);
    if (param_1[iVar3 * 4 + 2] != 0) {
      puVar9 = FUN_00494b90(*(int *)pbVar4,0x2c);
      if (puVar9 != (undefined4 *)0x0) {
        memset(puVar9,0,0x2c);
        *(undefined1 *)puVar9 = 0x13;
        *(undefined2 *)((int)puVar9 + 0x1e) = 0xffff;
        puVar9[5] = 1;
      }
      FUN_00496a30(*(int *)pbVar4,(int)puVar9,(undefined4 *)local_28,(undefined4 *)0x0);
      if ((puVar9 != (undefined4 *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)puVar9[5])) {
        FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
      }
      local_28 = ZEXT48(puVar9);
    }
    iVar5 = param_1[iVar3 * 4 + -3];
    goto LAB_004c47cb;
  case 0x72:
    puVar16 = FUN_00498f00((int *)pbVar4,(uint *)0x0,(undefined4 *)param_1[iVar3 * 4 + -4]);
    puVar16 = FUN_00498f00((int *)pbVar4,puVar16,(undefined4 *)param_1[iVar3 * 4 + -0xc]);
    puVar16 = FUN_00498f00((int *)pbVar4,puVar16,(undefined4 *)param_1[iVar3 * 4 + 4]);
    puVar9 = FUN_00498830((int *)pbVar4,(int *)puVar16,param_1 + iVar3 * 4 + -8);
    local_28 = CONCAT44(local_28._4_4_,puVar9);
    if (param_1[iVar3 * 4 + -6] != 0) {
      puVar9 = FUN_00494b90(*(int *)pbVar4,0x2c);
      if (puVar9 != (undefined4 *)0x0) {
        memset(puVar9,0,0x2c);
        *(undefined1 *)puVar9 = 0x13;
        *(undefined2 *)((int)puVar9 + 0x1e) = 0xffff;
        puVar9[5] = 1;
      }
      FUN_00496a30(*(int *)pbVar4,(int)puVar9,(undefined4 *)local_28,(undefined4 *)0x0);
      if ((puVar9 != (undefined4 *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)puVar9[5])) {
        FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
      }
      local_28 = ZEXT48(puVar9);
    }
    iVar5 = param_1[iVar3 * 4 + -0xb];
LAB_004c47cb:
    puVar12 = (undefined4 *)param_1[iVar3 * 4 + 6];
    local_28 = CONCAT44(iVar5,(undefined4 *)local_28);
    if (puVar9 != (undefined4 *)0x0) {
      *(ushort *)((int)puVar9 + 2) = *(ushort *)((int)puVar9 + 2) | 0x80;
    }
    break;
  case 0x73:
    FUN_0048b820((undefined4 *)&local_28,(int *)pbVar4,*(undefined1 *)((int)param_1 + iVar5 + 0xe),
                 param_1 + iVar3 * 4,param_1 + iVar3 * 4 + 4);
    puVar12 = (undefined4 *)local_20;
    break;
  case 0x74:
    FUN_0048b820((undefined4 *)&local_28,(int *)pbVar4,0x4a,param_1 + iVar3 * 4 + -4,
                 param_1 + iVar3 * 4 + 4);
    puVar12 = (undefined4 *)local_20;
    break;
  case 0x75:
    FUN_0048b780((undefined4 *)&local_28,(int *)pbVar4,0x46,param_1 + iVar3 * 4 + -4,
                 param_1 + iVar3 * 4 + 4);
    FUN_004709a0((int *)pbVar4,(char *)param_1[iVar3 * 4 + 4],(undefined1 *)(undefined4 *)local_28,
                 0x49);
    puVar12 = (undefined4 *)local_20;
    break;
  case 0x76:
    FUN_0048b780((undefined4 *)&local_28,(int *)pbVar4,0x92,param_1 + iVar3 * 4 + -8,
                 param_1 + iVar3 * 4 + 4);
    FUN_004709a0((int *)pbVar4,(char *)param_1[iVar3 * 4 + 4],(undefined1 *)(undefined4 *)local_28,
                 0x4a);
    puVar12 = (undefined4 *)local_20;
    break;
  case 0x77:
    FUN_0048b8b0((undefined4 *)&local_28,(int *)pbVar4,*(undefined1 *)((int)param_1 + iVar5 + -2),
                 param_1 + iVar3 * 4 + 4,param_1 + iVar3 * 4);
    puVar12 = (undefined4 *)local_20;
    break;
  case 0x78:
    FUN_0048b8b0((undefined4 *)&local_28,(int *)pbVar4,0x9c,param_1 + iVar3 * 4 + 4,
                 param_1 + iVar3 * 4);
    puVar12 = (undefined4 *)local_20;
    break;
  case 0x79:
    FUN_0048b8b0((undefined4 *)&local_28,(int *)pbVar4,0x9d,param_1 + iVar3 * 4 + 4,
                 param_1 + iVar3 * 4);
    puVar12 = (undefined4 *)local_20;
    break;
  case 0x7a:
    puVar16 = FUN_00498f00((int *)pbVar4,(uint *)0x0,(undefined4 *)param_1[iVar3 * 4 + -4]);
    local_2c = FUN_00498f00((int *)pbVar4,puVar16,(undefined4 *)param_1[iVar3 * 4 + 4]);
    local_c = (undefined4 *)param_1[iVar3 * 4 + -0xc];
    puVar12 = FUN_00494b90(*(int *)pbVar4,0x2c);
    if (puVar12 != (undefined4 *)0x0) {
      memset(puVar12,0,0x2c);
      *(undefined1 *)puVar12 = 0x47;
      *(undefined2 *)((int)puVar12 + 0x1e) = 0xffff;
      puVar12[5] = 1;
    }
    FUN_00496a30(*(int *)pbVar4,(int)puVar12,local_c,(undefined4 *)0x0);
    if ((puVar12 != (undefined4 *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)puVar12[5])) {
      FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
    }
    local_28 = CONCAT44(local_28._4_4_,puVar12);
    if (puVar12 == (undefined4 *)0x0) {
      FUN_00499060(*(int *)pbVar4,(int *)local_2c);
    }
    else {
      puVar12[4] = local_2c;
    }
    if (param_1[iVar3 * 4 + -8] != 0) {
      local_2c = FUN_00494b90(*(int *)pbVar4,0x2c);
      if (local_2c != (uint *)0x0) {
        memset(local_2c,0,0x2c);
        *(undefined1 *)local_2c = 0x13;
        *(undefined2 *)((int)local_2c + 0x1e) = 0xffff;
        local_2c[5] = 1;
      }
      FUN_00496a30(*(int *)pbVar4,(int)local_2c,puVar12,(undefined4 *)0x0);
      puVar16 = local_2c;
      if ((local_2c != (uint *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)local_2c[5])) {
        FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
      }
      local_28 = ZEXT48(puVar16);
    }
    local_28 = CONCAT44(param_1[iVar3 * 4 + -0xb],(undefined4 *)local_28);
    puVar12 = (undefined4 *)param_1[iVar3 * 4 + 6];
    break;
  case 0x7b:
    if (param_1[iVar3 * 4] == 0) {
      puVar12 = FUN_00496510(*(int *)pbVar4,0x81,&PTR_DAT_00569820 + param_1[iVar3 * 4 + -8] * 2,1);
      FUN_00496a30(*(int *)pbVar4,(int)puVar12,(undefined4 *)0x0,(undefined4 *)0x0);
      if ((puVar12 != (undefined4 *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)puVar12[5])) {
        FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
      }
      local_28 = CONCAT44(local_28._4_4_,puVar12);
      FUN_00498790(*(int *)pbVar4,(undefined4 *)param_1[iVar3 * 4 + -0xc]);
      local_28 = CONCAT44(param_1[iVar3 * 4 + -0xb],(undefined4 *)local_28);
      puVar12 = (undefined4 *)(param_1[iVar3 * 4 + 5] + param_1[iVar3 * 4 + 4]);
      break;
    }
    local_c = (undefined4 *)param_1[iVar3 * 4 + -0xc];
    puVar12 = FUN_00494b90(*(int *)pbVar4,0x2c);
    if (puVar12 != (undefined4 *)0x0) {
      memset(puVar12,0,0x2c);
      *(undefined1 *)puVar12 = 0x48;
      *(undefined2 *)((int)puVar12 + 0x1e) = 0xffff;
      puVar12[5] = 1;
    }
    FUN_00496a30(*(int *)pbVar4,(int)puVar12,local_c,(undefined4 *)0x0);
    if ((puVar12 != (undefined4 *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)puVar12[5])) {
      FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
    }
    local_28 = CONCAT44(local_28._4_4_,puVar12);
    if (puVar12 == (undefined4 *)0x0) {
      FUN_00499060(*(int *)pbVar4,(int *)param_1[iVar3 * 4]);
    }
    else {
      puVar12[4] = param_1[iVar3 * 4];
      FUN_004994a0((int *)pbVar4,(int)puVar12);
    }
    goto LAB_004c4b8a;
  case 0x7c:
    puVar12 = FUN_00494b90(*(int *)pbVar4,0x2c);
    if (puVar12 != (undefined4 *)0x0) {
      memset(puVar12,0,0x2c);
      *(undefined1 *)puVar12 = 0x74;
      *(undefined2 *)((int)puVar12 + 0x1e) = 0xffff;
      puVar12[5] = 1;
    }
    FUN_00496a30(*(int *)pbVar4,(int)puVar12,(undefined4 *)0x0,(undefined4 *)0x0);
    if ((puVar12 != (undefined4 *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)puVar12[5])) {
      FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
    }
    local_28 = CONCAT44(local_28._4_4_,puVar12);
    if (puVar12 == (undefined4 *)0x0) {
      FUN_004a9650(*(int *)pbVar4,(undefined4 *)param_1[iVar3 * 4]);
      local_28 = CONCAT44(param_1[iVar3 * 4 + -4],(undefined4 *)local_28);
      puVar12 = (undefined4 *)(param_1[iVar3 * 4 + 5] + param_1[iVar3 * 4 + 4]);
    }
    else {
      puVar12[4] = param_1[iVar3 * 4];
      *(ushort *)((int)puVar12 + 2) = *(ushort *)((int)puVar12 + 2) | 0x800;
      FUN_004994a0((int *)pbVar4,(int)puVar12);
      local_28 = CONCAT44(param_1[iVar3 * 4 + -4],(undefined4 *)local_28);
      puVar12 = (undefined4 *)(param_1[iVar3 * 4 + 5] + param_1[iVar3 * 4 + 4]);
    }
    break;
  case 0x7d:
    local_c = (undefined4 *)param_1[iVar3 * 4 + -0xc];
    puVar12 = FUN_00494b90(*(int *)pbVar4,0x2c);
    if (puVar12 != (undefined4 *)0x0) {
      memset(puVar12,0,0x2c);
      *(undefined1 *)puVar12 = 0x48;
      *(undefined2 *)((int)puVar12 + 0x1e) = 0xffff;
      puVar12[5] = 1;
    }
    FUN_00496a30(*(int *)pbVar4,(int)puVar12,local_c,(undefined4 *)0x0);
    if ((puVar12 != (undefined4 *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)puVar12[5])) {
      FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
    }
    local_28 = CONCAT44(local_28._4_4_,puVar12);
    if (puVar12 == (undefined4 *)0x0) {
      FUN_004a9650(*(int *)pbVar4,(undefined4 *)param_1[iVar3 * 4]);
    }
    else {
      puVar12[4] = param_1[iVar3 * 4];
      *(ushort *)((int)puVar12 + 2) = *(ushort *)((int)puVar12 + 2) | 0x800;
      FUN_004994a0((int *)pbVar4,(int)puVar12);
    }
LAB_004c4b8a:
    if (param_1[iVar3 * 4 + -8] != 0) {
      local_2c = FUN_00494b90(*(int *)pbVar4,0x2c);
      if (local_2c != (uint *)0x0) {
        memset(local_2c,0,0x2c);
        *(undefined1 *)local_2c = 0x13;
        *(undefined2 *)((int)local_2c + 0x1e) = 0xffff;
        local_2c[5] = 1;
      }
      FUN_00496a30(*(int *)pbVar4,(int)local_2c,puVar12,(undefined4 *)0x0);
      puVar16 = local_2c;
      if ((local_2c != (uint *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)local_2c[5])) {
        FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
      }
      local_28 = ZEXT48(puVar16);
    }
    local_28 = CONCAT44(param_1[iVar3 * 4 + -0xb],(undefined4 *)local_28);
    puVar12 = (undefined4 *)(param_1[iVar3 * 4 + 5] + param_1[iVar3 * 4 + 4]);
    break;
  case 0x7e:
    local_2c = (uint *)FUN_004a9ac0(*(int *)pbVar4,(short *)0x0,param_1 + iVar3 * 4,
                                    param_1 + iVar3 * 4 + 4);
    local_c = (undefined4 *)param_1[iVar3 * 4 + -8];
    puVar12 = FUN_00494b90(*(int *)pbVar4,0x2c);
    if (puVar12 != (undefined4 *)0x0) {
      memset(puVar12,0,0x2c);
      *(undefined1 *)puVar12 = 0x48;
      *(undefined2 *)((int)puVar12 + 0x1e) = 0xffff;
      puVar12[5] = 1;
    }
    FUN_00496a30(*(int *)pbVar4,(int)puVar12,local_c,(undefined4 *)0x0);
    if ((puVar12 != (undefined4 *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)puVar12[5])) {
      FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
    }
    local_28 = CONCAT44(local_28._4_4_,puVar12);
    if (puVar12 == (undefined4 *)0x0) {
      FUN_004a9cb0(*(int *)pbVar4,(short *)local_2c);
    }
    else {
      uVar8 = FUN_004a97d0((int *)pbVar4,(int *)0x0,local_2c,0,0,0,0,0,0,0);
      puVar12[4] = uVar8;
      *(ushort *)((int)puVar12 + 2) = *(ushort *)((int)puVar12 + 2) | 0x800;
      FUN_004994a0((int *)pbVar4,(int)puVar12);
    }
    if (param_1[iVar3 * 4 + -4] != 0) {
      local_2c = FUN_00494b90(*(int *)pbVar4,0x2c);
      if (local_2c != (uint *)0x0) {
        memset(local_2c,0,0x2c);
        *(undefined1 *)local_2c = 0x13;
        *(undefined2 *)((int)local_2c + 0x1e) = 0xffff;
        local_2c[5] = 1;
      }
      FUN_00496a30(*(int *)pbVar4,(int)local_2c,puVar12,(undefined4 *)0x0);
      puVar16 = local_2c;
      if ((local_2c != (uint *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)local_2c[5])) {
        FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
      }
      local_28 = ZEXT48(puVar16);
    }
    local_28 = CONCAT44(param_1[iVar3 * 4 + -7],(undefined4 *)local_28);
    if (param_1[iVar3 * 4 + 4] == 0) {
      puVar12 = (undefined4 *)(param_1[iVar3 * 4 + 1] + param_1[iVar3 * 4]);
    }
    else {
      puVar12 = (undefined4 *)(param_1[iVar3 * 4 + 5] + param_1[iVar3 * 4 + 4]);
    }
    break;
  case 0x7f:
    puVar12 = FUN_00494b90(*(int *)pbVar4,0x2c);
    if (puVar12 != (undefined4 *)0x0) {
      memset(puVar12,0,0x2c);
      *(undefined1 *)puVar12 = 0x14;
      *(undefined2 *)((int)puVar12 + 0x1e) = 0xffff;
      puVar12[5] = 1;
    }
    FUN_00496a30(*(int *)pbVar4,(int)puVar12,(undefined4 *)0x0,(undefined4 *)0x0);
    if ((puVar12 != (undefined4 *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)puVar12[5])) {
      FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
    }
    local_28 = CONCAT44(local_28._4_4_,puVar12);
    if (puVar12 == (undefined4 *)0x0) {
      FUN_004a9650(*(int *)pbVar4,(undefined4 *)param_1[iVar3 * 4]);
      local_28 = CONCAT44(param_1[iVar3 * 4 + -8],(undefined4 *)local_28);
      puVar12 = (undefined4 *)(param_1[iVar3 * 4 + 5] + param_1[iVar3 * 4 + 4]);
    }
    else {
      puVar12[4] = param_1[iVar3 * 4];
      *(ushort *)((int)puVar12 + 2) = *(ushort *)((int)puVar12 + 2) | 0x800;
      FUN_004994a0((int *)pbVar4,(int)puVar12);
      local_28 = CONCAT44(param_1[iVar3 * 4 + -8],(undefined4 *)local_28);
      puVar12 = (undefined4 *)(param_1[iVar3 * 4 + 5] + param_1[iVar3 * 4 + 4]);
    }
    break;
  case 0x80:
    local_c = (undefined4 *)param_1[iVar3 * 4];
    puVar12 = (undefined4 *)param_1[iVar3 * 4 + -8];
    puVar9 = FUN_00494b90(*(int *)pbVar4,0x2c);
    if (puVar9 != (undefined4 *)0x0) {
      memset(puVar9,0,0x2c);
      *(undefined1 *)puVar9 = 0x86;
      *(undefined2 *)((int)puVar9 + 0x1e) = 0xffff;
      puVar9[5] = 1;
    }
    FUN_00496a30(*(int *)pbVar4,(int)puVar9,puVar12,local_c);
    if ((puVar9 != (undefined4 *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)puVar9[5])) {
      FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
    }
    local_28 = CONCAT44(local_28._4_4_,puVar9);
    if (puVar9 == (undefined4 *)0x0) {
      FUN_00499060(*(int *)pbVar4,(int *)param_1[iVar3 * 4 + -4]);
      local_28 = CONCAT44(param_1[iVar3 * 4 + -0xc],(undefined4 *)local_28);
      puVar12 = (undefined4 *)(param_1[iVar3 * 4 + 5] + param_1[iVar3 * 4 + 4]);
    }
    else {
      puVar9[4] = param_1[iVar3 * 4 + -4];
      FUN_004994a0((int *)pbVar4,(int)puVar9);
      local_28 = CONCAT44(param_1[iVar3 * 4 + -0xc],(undefined4 *)local_28);
      puVar12 = (undefined4 *)(param_1[iVar3 * 4 + 5] + param_1[iVar3 * 4 + 4]);
    }
    break;
  case 0x81:
    puVar12 = (undefined4 *)param_1[iVar3 * 4 + -4];
    puVar16 = (uint *)param_1[iVar3 * 4 + -0xc];
    goto LAB_004c4ff4;
  case 0x82:
    puVar12 = (undefined4 *)param_1[iVar3 * 4 + -4];
    puVar16 = (uint *)0x0;
LAB_004c4ff4:
    puVar16 = FUN_00498f00((int *)pbVar4,puVar16,puVar12);
    puVar16 = FUN_00498f00((int *)pbVar4,puVar16,(undefined4 *)param_1[iVar3 * 4 + 4]);
    local_28 = CONCAT44(local_28._4_4_,puVar16);
    puVar12 = local_1c;
    break;
  case 0x83:
    puVar16 = FUN_00498f00((int *)pbVar4,(uint *)param_1[iVar3 * 4 + -4],
                           (undefined4 *)param_1[iVar3 * 4 + 4]);
    local_28 = CONCAT44(local_28._4_4_,puVar16);
    puVar12 = local_1c;
    break;
  case 0x84:
    puVar16 = FUN_00498f00((int *)pbVar4,(uint *)0x0,(undefined4 *)param_1[iVar3 * 4 + 4]);
    local_28 = CONCAT44(local_28._4_4_,puVar16);
    puVar12 = local_1c;
    break;
  case 0x85:
    iVar5 = param_1[iVar3 * 4 + -0x18];
    piVar6 = param_1 + iVar3 * 4 + 4;
    uVar18 = 0;
    piVar17 = param_1 + iVar3 * 4 + -0x24;
    iVar15 = param_1[iVar3 * 4 + -0x20];
    puVar16 = (uint *)param_1[iVar3 * 4];
    psVar10 = FUN_004a9ac0(*(int *)pbVar4,(short *)0x0,param_1 + iVar3 * 4 + -8,(int *)0x0);
    FUN_004940f0((int *)pbVar4,param_1 + iVar3 * 4 + -0x14,(int)(param_1 + iVar3 * 4 + -0x10),
                 psVar10,puVar16,iVar15,(int)piVar17,piVar6,uVar18,iVar5);
    puVar12 = local_1c;
    break;
  case 0x86:
    local_28 = 2;
    break;
  case 0x87:
    puVar12 = FUN_00496440((int *)pbVar4,(undefined4 *)0x0,param_1 + iVar3 * 4);
    puVar16 = (uint *)param_1[iVar3 * 4 + -0xc];
    goto LAB_004c50a1;
  case 0x88:
    puVar12 = FUN_00496440((int *)pbVar4,(undefined4 *)0x0,param_1 + iVar3 * 4);
    puVar16 = (uint *)0x0;
LAB_004c50a1:
    puVar16 = FUN_00498f00((int *)pbVar4,puVar16,puVar12);
    local_28 = CONCAT44(local_28._4_4_,puVar16);
    FUN_004992e0((int *)pbVar4,(int *)puVar16,param_1 + iVar3 * 4 + -4,1);
    FUN_00498fb0((int *)pbVar4,(int *)puVar16);
    puVar12 = local_1c;
    if (puVar16 != (uint *)0x0) {
      *(char *)((puVar16[2] - 8) + *puVar16 * 0x14) = (char)param_1[iVar3 * 4 + 4];
    }
    break;
  case 0x89:
    FUN_00495600((int *)pbVar4,(short *)param_1[iVar3 * 4 + 4],param_1[iVar3 * 4]);
    puVar12 = local_1c;
    break;
  case 0x8a:
    FUN_004ae1b0((int *)pbVar4);
    puVar12 = local_1c;
    break;
  case 0x8b:
    FUN_004a3bb0((int *)pbVar4,param_1 + iVar3 * 4,param_1 + iVar3 * 4 + 4,(undefined4 *)0x0,0);
    puVar12 = local_1c;
    break;
  case 0x8c:
    iVar5 = 0;
    goto LAB_004c5133;
  case 0x8d:
    FUN_004a3bb0((int *)pbVar4,param_1 + iVar3 * 4 + -0xc,param_1 + iVar3 * 4 + -8,
                 param_1 + iVar3 * 4,0);
    puVar12 = local_1c;
    break;
  case 0x8e:
    iVar5 = 1;
LAB_004c5133:
    FUN_004a3bb0((int *)pbVar4,param_1 + iVar3 * 4 + -8,param_1 + iVar3 * 4 + -4,
                 param_1 + iVar3 * 4 + 4,iVar5);
    puVar12 = local_1c;
    break;
  case 0x8f:
    FUN_004a3bb0((int *)pbVar4,param_1 + iVar3 * 4 + -0xc,param_1 + iVar3 * 4 + -8,
                 param_1 + iVar3 * 4,1);
    puVar12 = local_1c;
    break;
  case 0x90:
    local_10 = param_1[iVar3 * 4 + -8];
    local_c = (undefined4 *)((param_1[iVar3 * 4 + 5] + param_1[iVar3 * 4 + 4]) - local_10);
    FUN_0049a050((int *)pbVar4,(undefined4 *)param_1[iVar3 * 4],&local_10);
    puVar12 = local_1c;
    break;
  case 0x91:
    FUN_0048e1f0(pbVar4,(byte *)(param_1 + iVar3 * 4 + -0x18),(int)(param_1 + iVar3 * 4 + -0x14),
                 param_1[iVar3 * 4 + -0x10],(char)param_1[iVar3 * 4 + -0xc],
                 (int *)param_1[iVar3 * 4 + -0xb],(short *)param_1[iVar3 * 4 + -4],
                 (undefined4 *)param_1[iVar3 * 4 + 4],param_1[iVar3 * 4 + -0x24],
                 param_1[iVar3 * 4 + -0x1c]);
    puVar12 = local_1c;
    if (param_1[iVar3 * 4 + -0x13] == 0) {
      local_28 = *(ulonglong *)(param_1 + iVar3 * 4 + -0x18);
    }
    else {
      local_28 = *(ulonglong *)(param_1 + iVar3 * 4 + -0x14);
    }
    break;
  case 0x92:
    local_28 = 0x22;
    break;
  case 0x93:
    local_28 = 0x1e;
    break;
  case 0x94:
    local_28 = 0x30;
    break;
  case 0x95:
    local_28 = (ulonglong)*(byte *)((int)param_1 + iVar5 + 0xe);
    break;
  case 0x96:
    local_28 = CONCAT44(param_1[iVar3 * 4 + 4],0x6b);
    break;
  case 0x97:
    *(int *)(*(int *)(param_1[iVar3 * 4 + -4] + 0x24) + 0x20) = param_1[iVar3 * 4];
    *(int *)(param_1[iVar3 * 4 + -4] + 0x24) = param_1[iVar3 * 4];
    local_28 = (ulonglong)(uint)param_1[iVar3 * 4 + -4];
    break;
  case 0x98:
    *(int *)(param_1[iVar3 * 4] + 0x24) = param_1[iVar3 * 4];
  case 0x40:
    local_28 = (ulonglong)(uint)param_1[iVar3 * 4];
    break;
  case 0x99:
    local_28 = *(ulonglong *)(param_1 + iVar3 * 4 + 4);
    FUN_004962b0((int *)pbVar4,
                 (byte *)
                 "qualified table names are not allowed on INSERT, UPDATE, and DELETE statements within triggers"
                );
    puVar12 = local_1c;
    break;
  case 0x9a:
    FUN_004962b0((int *)pbVar4,
                 (byte *)
                 "the INDEXED BY clause is not allowed on UPDATE or DELETE statements within triggers"
                );
    puVar12 = local_1c;
    break;
  case 0x9b:
    FUN_004962b0((int *)pbVar4,
                 (byte *)
                 "the NOT INDEXED clause is not allowed on UPDATE or DELETE statements within triggers"
                );
    puVar12 = local_1c;
    break;
  case 0x9c:
    puVar12 = FUN_004ab040(*(int *)pbVar4,param_1 + iVar3 * 4 + -0xc,(int *)param_1[iVar3 * 4],
                           (undefined4 *)param_1[iVar3 * 4 + 4],(char)param_1[iVar3 * 4 + -0x10]);
    local_28 = CONCAT44(local_28._4_4_,puVar12);
    puVar12 = local_1c;
    break;
  case 0x9d:
    puVar12 = FUN_004aaea0(*(int *)pbVar4,param_1 + iVar3 * 4 + -4,(int *)param_1[iVar3 * 4],
                           (int *)param_1[iVar3 * 4 + 4],(undefined4 *)param_1[iVar3 * 4 + 5],
                           (char)param_1[iVar3 * 4 + -0xc]);
    local_28 = CONCAT44(local_28._4_4_,puVar12);
    puVar12 = local_1c;
    break;
  case 0x9e:
    puVar12 = FUN_004aaea0(*(int *)pbVar4,param_1 + iVar3 * 4 + -4,(int *)param_1[iVar3 * 4],
                           (int *)0x0,(undefined4 *)param_1[iVar3 * 4 + 4],
                           (char)param_1[iVar3 * 4 + -0xc]);
    local_28 = CONCAT44(local_28._4_4_,puVar12);
    puVar12 = local_1c;
    break;
  case 0x9f:
    puVar12 = FUN_004aae20(*(int *)pbVar4,param_1 + iVar3 * 4 + -4,
                           (undefined4 *)param_1[iVar3 * 4 + 4]);
    local_28 = CONCAT44(local_28._4_4_,puVar12);
    puVar12 = local_1c;
    break;
  case 0xa0:
    puVar11 = FUN_004aafd0(*(int *)pbVar4,(undefined4 *)param_1[iVar3 * 4 + 4]);
    local_28 = CONCAT44(local_28._4_4_,puVar11);
    puVar12 = local_1c;
    break;
  case 0xa1:
    puVar12 = FUN_00494b90(*(int *)pbVar4,0x2c);
    if (puVar12 != (undefined4 *)0x0) {
      memset(puVar12,0,0x2c);
      *(undefined1 *)puVar12 = 0x38;
      *(undefined2 *)((int)puVar12 + 0x1e) = 0xffff;
      puVar12[5] = 1;
    }
    FUN_00496a30(*(int *)pbVar4,(int)puVar12,(undefined4 *)0x0,(undefined4 *)0x0);
    if ((puVar12 != (undefined4 *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)puVar12[5])) {
      FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
    }
    if (puVar12 != (undefined4 *)0x0) {
      *(undefined1 *)((int)puVar12 + 1) = 4;
    }
    local_28 = CONCAT44(param_1[iVar3 * 4 + -8],puVar12);
    puVar12 = (undefined4 *)(param_1[iVar3 * 4 + 5] + param_1[iVar3 * 4 + 4]);
    break;
  case 0xa2:
    puVar12 = FUN_00496510(*(int *)pbVar4,0x38,param_1 + iVar3 * 4,1);
    FUN_00496a30(*(int *)pbVar4,(int)puVar12,(undefined4 *)0x0,(undefined4 *)0x0);
    if ((puVar12 != (undefined4 *)0x0) && (*(int *)(*(int *)pbVar4 + 0x5c) < (int)puVar12[5])) {
      FUN_004962b0((int *)pbVar4,(byte *)"Expression tree is too large (maximum depth %d)");
    }
    if (puVar12 != (undefined4 *)0x0) {
      *(char *)((int)puVar12 + 1) = (char)param_1[iVar3 * 4 + -8];
    }
    local_28 = CONCAT44(param_1[iVar3 * 4 + -0x10],puVar12);
    puVar12 = (undefined4 *)(param_1[iVar3 * 4 + 5] + param_1[iVar3 * 4 + 4]);
    break;
  case 0xa3:
    local_28 = 3;
    break;
  case 0xa4:
    FUN_00495a40((int *)pbVar4,(short *)param_1[iVar3 * 4 + 4],param_1[iVar3 * 4]);
    puVar12 = local_1c;
    break;
  case 0xa5:
    FUN_00473230((int *)pbVar4,0x18,(int *)&DAT_00569bb8,(char *)param_1[iVar3 * 4 + -8],
                 (byte *)param_1[iVar3 * 4 + -8],(byte *)param_1[iVar3 * 4],
                 (byte *)param_1[iVar3 * 4 + 4]);
    puVar12 = local_1c;
    break;
  case 0xa6:
    FUN_00473230((int *)pbVar4,0x19,(int *)&DAT_00569b4c,(char *)param_1[iVar3 * 4 + 4],(byte *)0x0,
                 (byte *)0x0,(byte *)param_1[iVar3 * 4 + 4]);
    puVar12 = local_1c;
    break;
  case 0xa7:
    FUN_004a6750((int *)pbVar4,(undefined4 *)0x0,(int *)0x0);
    puVar12 = local_1c;
    break;
  case 0xa8:
    FUN_004a6750((int *)pbVar4,param_1 + iVar3 * 4,param_1 + iVar3 * 4 + 4);
    puVar12 = local_1c;
    break;
  case 0xa9:
    FUN_0048c930(param_1,(int *)pbVar4,(undefined4 *)0x0,0);
    puVar12 = local_1c;
    break;
  case 0xaa:
    FUN_0048c930(param_1,(int *)pbVar4,param_1 + iVar3 * 4,(int)(param_1 + iVar3 * 4 + 4));
    puVar12 = local_1c;
    break;
  case 0xab:
    FUN_0048c4f0((int *)pbVar4,(short *)param_1[iVar3 * 4 + -8],param_1 + iVar3 * 4 + 4);
    puVar12 = local_1c;
    break;
  case 0xac:
    FUN_0048c240((int *)pbVar4,param_1 + iVar3 * 4 + 4);
    puVar12 = local_1c;
    break;
  case 0xad:
    *(undefined1 *)(*(int *)pbVar4 + 0xea) = 0;
    FUN_0048c030((int *)pbVar4,(short *)param_1[iVar3 * 4 + 4]);
    puVar12 = local_1c;
    break;
  case 0xae:
    FUN_004b9b90((int *)pbVar4,(int *)0x0);
    puVar12 = local_1c;
    break;
  case 0xaf:
    FUN_004b9b90((int *)pbVar4,param_1 + iVar3 * 4 + 4);
    puVar12 = local_1c;
    break;
  case 0xb0:
    FUN_004b9790((int *)pbVar4,param_1 + iVar3 * 4 + -8,(int)(param_1 + iVar3 * 4 + -4),
                 param_1 + iVar3 * 4 + 4,param_1[iVar3 * 4 + -0xc]);
    puVar12 = local_1c;
    break;
  case 0xb1:
    FUN_0046b680((int *)pbVar4);
    pbVar4[0x218] = 0;
    pbVar4[0x219] = 0;
    pbVar4[0x21a] = 0;
    pbVar4[0x21b] = 0;
    pbVar4[0x21c] = 0;
    pbVar4[0x21d] = 0;
    pbVar4[0x21e] = 0;
    pbVar4[0x21f] = 0;
    puVar12 = local_1c;
    break;
  case 0xb2:
    FUN_004b96b0((int)pbVar4,param_1 + iVar3 * 4 + 4);
    puVar12 = local_1c;
  }
switchD_004c36ca_caseD_b3:
  bVar1 = (&DAT_0056c810)[param_2 * 2];
  local_1c = (undefined4 *)(uint)bVar1;
  uVar13 = (uint)(byte)(&DAT_0056c811)[param_2 * 2];
  *param_1 = *param_1 - uVar13;
  puVar14 = (ushort *)(param_1 + iVar3 * 4 + uVar13 * -4 + 3);
  uVar2 = *(ushort *)
           (&DAT_0056aa08 +
           ((int)*(short *)(&DAT_0056bfe0 + (uint)*puVar14 * 2) + (int)local_1c) * 2);
  if (0x272 < uVar2) {
    FUN_004c3460(param_1);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar3 = *param_1 + 1;
  if (uVar13 == 0) {
    *param_1 = iVar3;
    if (iVar3 < 100) {
      *(ushort *)(param_1 + iVar3 * 4 + 3) = uVar2;
      *(ulonglong *)(param_1 + iVar3 * 4 + 4) = local_28;
      *(byte *)((int)param_1 + iVar3 * 0x10 + 0xe) = bVar1;
      param_1[iVar3 * 4 + 6] = (int)puVar12;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_004c3410(param_1);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  *param_1 = iVar3;
  *(ulonglong *)(puVar14 + 10) = local_28;
  puVar14[8] = uVar2;
  *(byte *)(puVar14 + 9) = bVar1;
  *(undefined4 **)(puVar14 + 0xe) = puVar12;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004c5a60 @ 004c5a60  kind=lib  attributed-by=lib-island  size=206 */

int __cdecl FUN_004c5a60(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_c;
  int local_8;
  
  iVar3 = 0;
  if (*(int *)(param_1 + 0x48) != 0 || *(int *)(param_1 + 0x4c) != 0) {
    iVar1 = *(int *)(param_1 + 0x8c);
    uVar2 = *(uint *)(param_1 + 0x88);
    if ((param_2 == 0) && (uVar2 != 0 || iVar1 != 0)) {
      iVar3 = (**(code **)(**(int **)(param_1 + 0x40) + 0xc))
                        (*(int **)(param_1 + 0x40),&DAT_0056bfc4,0x1c,0,0);
    }
    else {
      iVar3 = (**(code **)(**(int **)(param_1 + 0x40) + 0x10))(*(int **)(param_1 + 0x40),0,0);
    }
    if ((((iVar3 == 0) &&
         ((((*(char *)(param_1 + 7) != '\0' ||
            (iVar3 = (**(code **)(**(int **)(param_1 + 0x40) + 0x14))
                               (*(int **)(param_1 + 0x40),*(byte *)(param_1 + 0xb) | 0x10),
            iVar3 == 0)) && (-1 < iVar1)) && ((0 < iVar1 || (uVar2 != 0)))))) &&
        (iVar3 = (**(code **)(**(int **)(param_1 + 0x40) + 0x18))
                           (*(int **)(param_1 + 0x40),&local_c), iVar3 == 0)) &&
       ((iVar1 <= local_8 && ((iVar1 < local_8 || (uVar2 < local_c)))))) {
      iVar3 = (**(code **)(**(int **)(param_1 + 0x40) + 0x10))
                        (*(int **)(param_1 + 0x40),uVar2,iVar1);
    }
  }
  return iVar3;
}


/* FUN_004c5b30 @ 004c5b30  kind=lib  attributed-by=lib-island  size=210 */

void __cdecl FUN_004c5b30(undefined1 *param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  undefined1 *puVar5;
  
  iVar2 = *(int *)(param_1 + 0x34);
  iVar3 = *(int *)(param_1 + 0x38);
  bVar1 = param_1[5];
  if ((*(byte *)(iVar2 + 0x16) & 4) != 0) {
    memset((void *)((uint)bVar1 + iVar3),0,*(int *)(iVar2 + 0x24) - (uint)bVar1);
  }
  puVar5 = (undefined1 *)((uint)bVar1 + iVar3);
  *puVar5 = (char)param_2;
  uVar4 = (~(ushort)(param_2 >> 3) & 1) * 4 + 8 + (ushort)bVar1;
  *(undefined4 *)(puVar5 + 1) = 0;
  puVar5[7] = 0;
  puVar5[5] = (char)((uint)*(undefined4 *)(iVar2 + 0x24) >> 8);
  puVar5[6] = *(undefined1 *)(iVar2 + 0x24);
  *(ushort *)(param_1 + 0xe) = *(short *)(iVar2 + 0x24) - uVar4;
  FUN_00476810((int)param_1,param_2);
  param_1[5] = bVar1;
  *(ushort *)(param_1 + 0xc) = uVar4;
  *(int *)(param_1 + 0x3c) = *(int *)(iVar2 + 0x24) + iVar3;
  *(uint *)(param_1 + 0x40) = (uint)uVar4 + iVar3;
  param_1[1] = 0;
  *(short *)(param_1 + 0x12) = *(short *)(iVar2 + 0x20) + -1;
  *(undefined2 *)(param_1 + 0x10) = 0;
  *param_1 = 1;
  return;
}


