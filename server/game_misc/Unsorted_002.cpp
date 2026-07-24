// Unsorted_002 (game_misc) -- server. 150 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Unsorted_002.h"

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


/* FUN_004907e0 @ 004907e0  kind=gamemisc  attributed-by=none  size=47 */

void __cdecl FUN_004907e0(int *param_1)

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
        (*DAT_00582b20)(iVar3);
      }
      *(undefined1 *)(iVar2 + 10) = 0;
    }
  }
  return;
}


/* FUN_00491f10 @ 00491f10  kind=gamemisc  attributed-by=none  size=67 */

undefined1 __cdecl FUN_00491f10(undefined4 *param_1)

{
  undefined1 uVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1[1];
  FUN_0048fbc0(param_1);
  uVar1 = *(undefined1 *)(*piVar2 + 7);
  if (*(char *)((int)param_1 + 9) != '\0') {
    piVar2 = param_1 + 3;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      if (*(int *)(param_1[1] + 0x38) != 0) {
        (*DAT_00582b20)(*(int *)(param_1[1] + 0x38));
      }
      *(undefined1 *)((int)param_1 + 10) = 0;
    }
  }
  return uVar1;
}


/* FUN_00492650 @ 00492650  kind=gamemisc  attributed-by=none  size=178 */

void __cdecl FUN_00492650(int *param_1)

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
    iVar2 = (*DAT_00582af0._4_4_)(piVar1);
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
  FUN_00466dd0((int)piVar1);
  return;
}


/* FUN_004975c0 @ 004975c0  kind=gamemisc  attributed-by=none  size=63 */

void __cdecl FUN_004975c0(int *param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  
  for (; (*param_2 == 0x9d || (*param_2 == 0x9c)); param_2 = *(byte **)(param_2 + 8)) {
  }
  bVar1 = *param_2;
  if (bVar1 == 0x84) {
    bVar1 = param_2[0x23];
  }
  if ((bVar1 != 0x5e) && ((bVar1 < 0x81 || (0x83 < bVar1)))) {
    FUN_004ae830(param_1,0x49,param_3,param_4);
    return;
  }
  return;
}


/* FUN_004993e0 @ 004993e0  kind=gamemisc  attributed-by=none  size=106 */

bool __cdecl FUN_004993e0(char *param_1,char param_2)

{
  char cVar1;
  bool bVar2;
  
  if (param_2 != 'b') {
    for (; (*param_1 == -99 || (*param_1 == -100)); param_1 = *(char **)(param_1 + 8)) {
    }
    cVar1 = *param_1;
    if (cVar1 == -0x7c) {
      cVar1 = param_1[0x23];
    }
    switch(cVar1) {
    case '^':
      return param_2 == 'a';
    default:
      goto switchD_0049941f_caseD_5f;
    case -0x7e:
      bVar2 = param_2 == 'e';
      break;
    case -0x7d:
      goto switchD_0049941f_caseD_83;
    case -0x68:
      if (-1 < *(short *)(param_1 + 0x1c)) {
        return false;
      }
    case -0x7f:
      bVar2 = param_2 == 'd';
    }
    if ((!bVar2) && (param_2 != 'c')) {
switchD_0049941f_caseD_5f:
      return false;
    }
  }
switchD_0049941f_caseD_83:
  return true;
}


/* FUN_004a0990 @ 004a0990  kind=gamemisc  attributed-by=none  size=133 */

undefined4 __cdecl FUN_004a0990(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  if (DAT_00583f40 != 0) {
    (*DAT_00582b18)(DAT_00583f40);
  }
  DAT_00583f50 = param_1;
  DAT_00583f54 = param_2;
  DAT_00583f48 = param_3;
  DAT_00583f4c = param_4;
  if ((-1 < param_4) && ((0 < param_4 || (param_3 != 0)))) {
    if ((param_4 <= (int)DAT_00583e18 >> 0x1f) &&
       ((param_4 < (int)DAT_00583e18 >> 0x1f || (param_3 <= DAT_00583e18)))) {
      DAT_00583f64 = 1;
      goto LAB_004a0a01;
    }
  }
  DAT_00583f64 = 0;
LAB_004a0a01:
  if (DAT_00583f40 != 0) {
    (*DAT_00582b20)(DAT_00583f40);
  }
  return 0;
}


/* FUN_004a12e0 @ 004a12e0  kind=gamemisc  attributed-by=none  size=105 */

int __cdecl
FUN_004a12e0(int param_1,undefined4 param_2,undefined4 *param_3,uint param_4,undefined4 param_5)

{
  size_t _Size;
  void *_Dst;
  int iVar1;
  
  _Size = *(size_t *)(param_1 + 4);
  _Dst = (void *)FUN_004a0350(_Size);
  if (_Dst == (void *)0x0) {
    return 7;
  }
  memset(_Dst,0,_Size);
  iVar1 = (**(code **)(param_1 + 0x18))(param_1,param_2,_Dst,param_4 & 0x87f7f,param_5);
  if (iVar1 != 0) {
    FUN_00466dd0((int)_Dst);
    return iVar1;
  }
  *param_3 = _Dst;
  return 0;
}


/* FUN_004a1c90 @ 004a1c90  kind=gamemisc  attributed-by=none  size=77 */

int __cdecl FUN_004a1c90(int param_1)

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
    iVar4 = (*DAT_00582b44)(iVar3);
  }
  iVar3 = (*DAT_00582af0._4_4_)(param_1);
  return iVar3 + iVar4 * (iVar2 + 0x3c + (uint)uVar1) + *(int *)(param_1 + 0x80);
}


/* FUN_004a5e90 @ 004a5e90  kind=gamemisc  attributed-by=none  size=256 */

uint __cdecl
FUN_004a5e90(uint param_1,byte *param_2,size_t param_3,byte param_4,undefined4 *param_5,int *param_6
            )

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  int local_8;
  
  uVar4 = 0;
  local_8 = 0;
  *param_5 = 0;
  iVar2 = FUN_004a7850(param_1);
  if (iVar2 == 0) {
    FUN_004683f0(0x15,"misuse at line %d of [%.10s]");
    return 0x15;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b18)(*(int *)(param_1 + 0xc));
  }
  pbVar3 = (byte *)FUN_004ad190(param_1,param_2,param_3,'\x02');
  if (pbVar3 != (byte *)0x0) {
    uVar4 = FUN_004a0180(param_1,pbVar3,0xffffffff,param_4,0,param_5,&local_8);
    if ((local_8 != 0) && (param_6 != (int *)0x0)) {
      iVar2 = FUN_004ad230(pbVar3,local_8 - (int)pbVar3);
      iVar2 = FUN_004ad150(param_2,iVar2);
      *param_6 = (int)(param_2 + iVar2);
    }
  }
  FUN_00494b00(param_1,(undefined4 *)pbVar3);
  if ((*(char *)(param_1 + 0x38) != '\0') || (uVar4 == 0xc0a)) {
    FUN_004961f0(param_1,7,(byte *)0x0);
    *(undefined1 *)(param_1 + 0x38) = 0;
    uVar4 = 7;
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(param_1 + 0xc));
  }
  return uVar1 & uVar4;
}


/* FUN_004ad150 @ 004ad150  kind=gamemisc  attributed-by=none  size=57 */

int __cdecl FUN_004ad150(byte *param_1,int param_2)

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


/* FUN_004ad190 @ 004ad190  kind=gamemisc  attributed-by=none  size=145 */

undefined4 __cdecl FUN_004ad190(uint param_1,void *param_2,size_t param_3,char param_4)

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
  FUN_004b79e0((int *)&local_2c,param_2,param_3,param_4,(undefined *)0x0);
  if (((local_14 & 0x200000000) != 0) && (local_14._7_1_ != '\x01')) {
    FUN_004b7dc0((int *)&local_2c,'\x01');
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    if ((local_14 & 0x246000000000) != 0) {
      FUN_004b7720((int *)&local_2c);
    }
    FUN_00494b00((int)local_2c,local_c._4_4_);
    return 0;
  }
  return local_2c._4_4_;
}


/* FUN_004ad280 @ 004ad280  kind=gamemisc  attributed-by=none  size=109 */

uint __cdecl FUN_004ad280(int *param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  
  uVar2 = (uint)*(byte *)*param_1;
  pbVar3 = (byte *)*param_1 + 1;
  *param_1 = (int)pbVar3;
  if (0xbf < uVar2) {
    uVar2 = (uint)(byte)(&DAT_0056c6f8)[uVar2];
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


/* FUN_004b7be0 @ 004b7be0  kind=gamemisc  attributed-by=none  size=91 */

void __cdecl FUN_004b7be0(int *param_1,int param_2)

{
  if ((*(ushort *)(param_1 + 7) & 0x2460) != 0) {
    FUN_004b7720(param_1);
  }
  FUN_00494b00(*param_1,(undefined4 *)param_1[9]);
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


/* FUN_004bcb50 @ 004bcb50  kind=gamemisc  attributed-by=none  size=106 */

uint __cdecl FUN_004bcb50(int *param_1,char *param_2,char *param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1[3] != 0) {
    (*DAT_00582b18)(param_1[3]);
  }
  uVar2 = FUN_0049fde0(param_1,param_2,param_3,param_4);
  if (((char)param_1[0xe] != '\0') || (uVar2 == 0xc0a)) {
    FUN_004961f0((int)param_1,7,(byte *)0x0);
    *(undefined1 *)(param_1 + 0xe) = 0;
    uVar2 = 7;
  }
  uVar1 = param_1[0xc];
  if (param_1[3] != 0) {
    (*DAT_00582b20)(param_1[3]);
  }
  return uVar1 & uVar2;
}


/* FUN_004bccb0 @ 004bccb0  kind=gamemisc  attributed-by=none  size=162 */

byte * __cdecl FUN_004bccb0(char *param_1,byte *param_2)

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
LAB_004bcd07:
        uVar8 = -(uint)bVar10 | 1;
        goto joined_r0x004bcd10;
      }
      if (bVar3 == 0) break;
      bVar3 = pbVar6[1];
      bVar10 = bVar3 < pbVar7[1];
      if (bVar3 != pbVar7[1]) goto LAB_004bcd07;
      pbVar6 = pbVar6 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar3 != 0);
    uVar8 = 0;
joined_r0x004bcd10:
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


/* FUN_004bcd60 @ 004bcd60  kind=gamemisc  attributed-by=none  size=48 */

void * __cdecl FUN_004bcd60(undefined4 param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = FUN_00480740(param_1);
  if (pvVar1 == (void *)0x0) {
    return (void *)0x0;
  }
  pvVar2 = FUN_004bdc10(pvVar1);
  FUN_00466dd0((int)pvVar1);
  return pvVar2;
}


/* FUN_004bdb80 @ 004bdb80  kind=gamemisc  attributed-by=none  size=129 */

void * __cdecl FUN_004bdb80(undefined4 param_1)

{
  int iVar1;
  size_t _Size;
  void *_Dst;
  
  iVar1 = (*(code *)PTR_AreFileApisANSI_0058356c)();
  _Size = (*(code *)PTR_WideCharToMultiByte_00583824)(iVar1 == 0,0,param_1,0xffffffff,0,0,0,0);
  if (_Size == 0) {
    return (void *)0x0;
  }
  _Dst = (void *)FUN_004a0350(_Size);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,_Size);
    if (_Dst != (void *)0x0) {
      iVar1 = (*(code *)PTR_WideCharToMultiByte_00583824)
                        (iVar1 == 0,0,param_1,0xffffffff,_Dst,_Size,0,0);
      if (iVar1 == 0) {
        FUN_00466dd0((int)_Dst);
        _Dst = (void *)0x0;
      }
      return _Dst;
    }
  }
  return (void *)0x0;
}


/* FUN_004bdc10 @ 004bdc10  kind=gamemisc  attributed-by=none  size=122 */

void * __cdecl FUN_004bdc10(undefined4 param_1)

{
  size_t _Size;
  void *_Dst;
  int iVar1;
  
  _Size = (*(code *)PTR_WideCharToMultiByte_00583824)(0xfde9,0,param_1,0xffffffff,0,0,0,0);
  if (_Size == 0) {
    return (void *)0x0;
  }
  _Dst = (void *)FUN_004a0350(_Size);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,_Size);
    if (_Dst != (void *)0x0) {
      iVar1 = (*(code *)PTR_WideCharToMultiByte_00583824)
                        (0xfde9,0,param_1,0xffffffff,_Dst,_Size,0,0);
      if (iVar1 == 0) {
        FUN_00466dd0((int)_Dst);
        _Dst = (void *)0x0;
      }
      return _Dst;
    }
  }
  return (void *)0x0;
}


/* FUN_004bdc90 @ 004bdc90  kind=gamemisc  attributed-by=none  size=189 */

void __cdecl FUN_004bdc90(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_9c [4];
  int local_8c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  if (DAT_00583f38 == 0) {
    local_9c[0] = 0x94;
    (*(code *)PTR_GetVersionExA_00583704)(local_9c);
    DAT_00583f38 = (local_8c == 2) + 1;
  }
  if (DAT_00583f38 == 2) {
    uVar2 = 0x1fe;
    iVar1 = DAT_00582bb8 + 2;
  }
  else {
    uVar2 = 1;
    iVar1 = DAT_00582bb8 + 2 + (int)*(short *)(param_1 + 0xe);
  }
  iVar1 = FUN_004c28e0((undefined4 *)(param_1 + 8),iVar1,0,uVar2,0);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_GetLastError_005836a4)();
    if (iVar1 != 0x9e) {
      *(int *)(param_1 + 0x14) = iVar1;
      FUN_004c23f0(0x80a,iVar1);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004bebc0 @ 004bebc0  kind=gamemisc  attributed-by=none  size=120 */

void * __cdecl FUN_004bebc0(undefined4 param_1)

{
  int iVar1;
  void *_Dst;
  
  iVar1 = (*(code *)PTR_MultiByteToWideChar_005837ac)(0xfde9,0,param_1,0xffffffff,0,0);
  if (iVar1 == 0) {
    return (void *)0x0;
  }
  _Dst = (void *)FUN_004a0350(iVar1 * 2);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,iVar1 * 2);
    if (_Dst != (void *)0x0) {
      iVar1 = (*(code *)PTR_MultiByteToWideChar_005837ac)(0xfde9,0,param_1,0xffffffff,_Dst,iVar1);
      if (iVar1 == 0) {
        FUN_00466dd0((int)_Dst);
        _Dst = (void *)0x0;
      }
      return _Dst;
    }
  }
  return (void *)0x0;
}


/* FUN_004c2230 @ 004c2230  kind=gamemisc  attributed-by=none  size=234 */

void __cdecl FUN_004c2230(undefined4 param_1)

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
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  if (DAT_00583f38 == 0) {
    local_c0[0] = 0x94;
    (*(code *)PTR_GetVersionExA_00583704)(local_c0);
    DAT_00583f38 = (local_b0 == 2) + 1;
  }
  if (DAT_00583f38 == 2) {
    iVar3 = 0;
    local_2c = 0;
    local_24 = 0;
    local_1c = 0;
    local_14 = 0;
    local_c = 0;
    while( true ) {
      iVar1 = (*(code *)PTR_GetFileAttributesExW_00583674)(param_1,0,&local_2c);
      if (iVar1 != 0) break;
      iVar1 = (*(code *)PTR_GetLastError_005836a4)();
      if ((DAT_00582bbc <= iVar3) || (((iVar1 != 5 && (iVar1 != 0x21)) && (iVar1 != 0x20))))
      goto LAB_004c230b;
      iVar3 = iVar3 + 1;
      (*(code *)PTR_Sleep_005837e8)(iVar3 * DAT_00582bc0);
    }
    uVar2 = (uint)local_2c;
  }
  else {
    uVar2 = (*(code *)PTR_GetFileAttributesA_0058365c)(param_1);
  }
  if ((uVar2 != 0xffffffff) && ((uVar2 & 0x10) != 0)) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
LAB_004c230b:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004c2320 @ 004c2320  kind=gamemisc  attributed-by=none  size=201 */

void __cdecl
FUN_004c2320(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_9c [4];
  int local_8c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  if (DAT_00583f38 == 0) {
    local_9c[0] = 0x94;
    (*(code *)PTR_GetVersionExA_00583704)(local_9c);
    DAT_00583f38 = (local_8c == 2) + 1;
  }
  if (DAT_00583f38 == 2) {
    _local_a8 = CONCAT44(param_4,param_3);
    local_b0 = 0;
    local_a0 = 0;
    (*(code *)PTR_LockFileEx_00583794)(*param_1,param_2,0,param_5,param_6,&local_b0);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  (*(code *)PTR_LockFile_00583788)(*param_1,param_3,param_4,param_5,param_6);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004c23f0 @ 004c23f0  kind=gamemisc  attributed-by=none  size=179 */

void __cdecl FUN_004c23f0(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char local_1fc [500];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_1fc[0] = '\0';
  FUN_0047d250(param_2,500,local_1fc);
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
  FUN_004683f0(param_1,"os_win.c:%d: (%d) %s(%s) - %s");
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004c24f0 @ 004c24f0  kind=gamemisc  attributed-by=none  size=796 */

int __cdecl FUN_004c24f0(int param_1)

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
  
  puVar5 = (undefined8 *)FUN_004a0350(0x10);
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
  _Dst = (int *)FUN_004a0350(uVar11 + 0x59);
  if (_Dst == (int *)0x0) {
    FUN_00466dd0((int)puVar5);
    return 0xc0a;
  }
  memset(_Dst,0,uVar11 + 0x59);
  _Dst[1] = (int)(_Dst + 0x12);
  FUN_00466a80(uVar11 + 0xf,_Dst + 0x12,(byte *)"%s-shm");
  piVar13 = DAT_00583e84;
  if ((DAT_00582acc != 0) && (iVar6 = (*DAT_00582b10)(2), piVar13 = DAT_00583e84, iVar6 != 0)) {
    (*DAT_00582b18)(iVar6);
    piVar13 = DAT_00583e84;
  }
  for (; piVar13 != (int *)0x0; piVar13 = (int *)piVar13[0x11]) {
    pbVar9 = (byte *)piVar13[1];
    pbVar12 = (byte *)_Dst[1];
    bVar3 = *pbVar9;
    while ((bVar3 != 0 && ((&DAT_00569620)[bVar3] == (&DAT_00569620)[*pbVar12]))) {
      pbVar1 = pbVar9 + 1;
      pbVar9 = pbVar9 + 1;
      pbVar12 = pbVar12 + 1;
      bVar3 = *pbVar1;
    }
    if ((&DAT_00569620)[*pbVar9] == (&DAT_00569620)[*pbVar12]) {
      FUN_00466dd0((int)_Dst);
      goto LAB_004c2789;
    }
  }
  _Dst[4] = -1;
  _Dst[0x11] = (int)DAT_00583e84;
  DAT_00583e84 = _Dst;
  iVar6 = FUN_004bc920();
  if (iVar6 == 0) {
    iVar6 = (*DAT_00582b10)(0);
  }
  else {
    iVar6 = 0;
  }
  *_Dst = iVar6;
  if (iVar6 == 0) {
    iVar6 = 0xc0a;
  }
  else {
    iVar6 = FUN_0046a100(*(undefined4 *)(param_1 + 4),(char *)_Dst[1],(undefined8 *)(_Dst + 2),
                         0x80006,(int *)0x0);
    if (iVar6 == 0) {
      iVar6 = FUN_004c2320(_Dst + 4,3,0x80,0,1,0);
      if (iVar6 == 0) {
        iVar6 = (*(code *)PTR_GetLastError_005836a4)();
        _Dst[0xe] = iVar6;
      }
      else {
        iVar6 = FUN_00466390((int)(_Dst + 2),0,0);
        if (iVar6 != 0) {
          uVar8 = (*(code *)PTR_GetLastError_005836a4)
                            ("winOpenShm",*(undefined4 *)(param_1 + 0x1c),0x819a);
          iVar6 = FUN_004c23f0(0x120a,uVar8);
          if (iVar6 != 0) goto LAB_004c2634;
        }
      }
      iVar6 = FUN_004c28e0(_Dst + 4,0x80,0,1,0);
      if (iVar6 == 0) {
        iVar6 = (*(code *)PTR_GetLastError_005836a4)();
        _Dst[0xe] = iVar6;
      }
      iVar6 = FUN_004c2320(_Dst + 4,1,0x80,0,1,0);
      if (iVar6 == 0) {
        iVar6 = (*(code *)PTR_GetLastError_005836a4)();
        _Dst[0xe] = iVar6;
        iVar6 = 5;
      }
      else {
        iVar6 = 0;
      }
      piVar13 = _Dst;
      if (iVar6 == 0) {
LAB_004c2789:
        *(int **)puVar5 = piVar13;
        piVar13[0xf] = piVar13[0xf] + 1;
        *(undefined8 **)(param_1 + 0x18) = puVar5;
        if ((DAT_00582acc != 0) && (iVar6 = (*DAT_00582b10)(2), iVar6 != 0)) {
          (*DAT_00582b20)(iVar6);
        }
        if (*piVar13 != 0) {
          (*DAT_00582b18)(*piVar13);
        }
        *(int *)((int)puVar5 + 4) = piVar13[0x10];
        piVar13[0x10] = (int)puVar5;
        if (*piVar13 != 0) {
          (*DAT_00582b20)(*piVar13);
        }
        return 0;
      }
    }
  }
LAB_004c2634:
  iVar7 = FUN_004c28e0(_Dst + 4,0x80,0,1,0);
  if (iVar7 == 0) {
    iVar7 = (*(code *)PTR_GetLastError_005836a4)();
    _Dst[0xe] = iVar7;
  }
  FUN_004c2810(*(undefined4 *)(param_1 + 4),0);
  FUN_00466dd0((int)puVar5);
  FUN_00466dd0(0);
  if ((DAT_00582acc != 0) && (iVar7 = (*DAT_00582b10)(2), iVar7 != 0)) {
    (*DAT_00582b20)(iVar7);
  }
  return iVar6;
}


/* FUN_004c2810 @ 004c2810  kind=gamemisc  attributed-by=none  size=200 */

void __cdecl FUN_004c2810(undefined4 param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)&DAT_00583e84;
  piVar1 = DAT_00583e84;
  while (piVar1 != (int *)0x0) {
    if (piVar1[0xf] == 0) {
      if (*piVar1 != 0) {
        (*DAT_00582b14)(*piVar1);
      }
      iVar3 = 0;
      if (0 < piVar1[0xc]) {
        do {
          (*(code *)PTR_UnmapViewOfFile_00583818)(*(undefined4 *)(piVar1[0xd] + 4 + iVar3 * 8));
          (*(code *)PTR_CloseHandle_00583590)(*(undefined4 *)(piVar1[0xd] + iVar3 * 8));
          iVar3 = iVar3 + 1;
        } while (iVar3 < piVar1[0xc]);
      }
      if (piVar1[4] != -1) {
        FUN_00465070((int)(piVar1 + 2));
      }
      if (param_2 != 0) {
        if (DAT_00583e74 != (code *)0x0) {
          (*DAT_00583e74)();
        }
        FUN_0046a520(param_1,piVar1[1]);
        if (DAT_00583e78 != (code *)0x0) {
          (*DAT_00583e78)();
        }
      }
      *piVar2 = piVar1[0x11];
      FUN_00466dd0(piVar1[0xd]);
      FUN_00466dd0((int)piVar1);
    }
    else {
      piVar2 = piVar1 + 0x11;
    }
    piVar1 = (int *)*piVar2;
  }
  return;
}


/* FUN_004c28e0 @ 004c28e0  kind=gamemisc  attributed-by=none  size=198 */

void __cdecl
FUN_004c28e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_9c [4];
  int local_8c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  if (DAT_00583f38 == 0) {
    local_9c[0] = 0x94;
    (*(code *)PTR_GetVersionExA_00583704)(local_9c);
    DAT_00583f38 = (local_8c == 2) + 1;
  }
  if (DAT_00583f38 == 2) {
    _local_a8 = CONCAT44(param_3,param_2);
    local_b0 = 0;
    local_a0 = 0;
    (*(code *)PTR_UnlockFileEx_0058380c)(*param_1,0,param_4,param_5,&local_b0);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  (*(code *)PTR_UnlockFile_00583800)(*param_1,param_2,param_3,param_4,param_5);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004c64b0 @ 004c64b0  kind=gamemisc  attributed-by=none  size=49 */

float * __thiscall FUN_004c64b0(void *this,int *param_1)

{
  *(float *)this = (float)*param_1;
  *(float *)((int)this + 4) = (float)param_1[1];
  *(float *)((int)this + 8) = (float)param_1[2];
  return this;
}


/* FUN_004c670e @ 004c670e  kind=gamemisc  attributed-by=none  size=89 */

void FUN_004c670e(void)

{
  basic_ostream<char,std::char_traits<char>_> *this;
  int *piVar1;
  bool bVar2;
  int *unaff_EBX;
  int unaff_EBP;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EBP + -4) = 1;
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)(*(int *)(*unaff_EBX + 4) + (int)unaff_EBX),
             unaff_EDI,false);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  bVar2 = std::uncaught_exception();
  this = *(basic_ostream<char,std::char_traits<char>_> **)(unaff_EBP + -0x24);
  if (!bVar2) {
    std::basic_ostream<char,std::char_traits<char>_>::_Osfx(this);
  }
  piVar1 = *(int **)((int)&this[0xe].vbtablePtr +
                    this->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* FUN_004c8170 @ 004c8170  kind=gamemisc  attributed-by=none  size=23 */

void __cdecl FUN_004c8170(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}


/* FUN_004c8350 @ 004c8350  kind=gamemisc  attributed-by=none  size=94 */

undefined4 * __thiscall FUN_004c8350(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  *(undefined4 *)((int)this + 0x28) = param_1[10];
  *(undefined4 *)((int)this + 0x2c) = param_1[0xb];
  *(undefined4 *)((int)this + 0x30) = param_1[0xc];
  *(undefined4 *)((int)this + 0x34) = param_1[0xd];
  *(undefined4 *)((int)this + 0x38) = param_1[0xe];
  return this;
}


/* FUN_004ce200 @ 004ce200  kind=gamemisc  attributed-by=none  size=22 */

void __thiscall FUN_004ce200(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)this;
  *param_1 = iVar1;
  *(int *)this = iVar1 + 0x188;
  return;
}


/* FUN_004ce660 @ 004ce660  kind=gamemisc  attributed-by=none  size=54 */

void FUN_004ce660(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0xc);
  if (puVar1 != (void *)0x0) {
    if (param_1 == (undefined4 *)0x0) {
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


/* FUN_004cea80 @ 004cea80  kind=gamemisc  attributed-by=none  size=4604 */

void __thiscall FUN_004cea80(void *this,uint *param_1,void *param_2,undefined4 *param_3)

{
  ushort uVar1;
  float *pfVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *pvVar5;
  float *pfVar6;
  char cVar7;
  uint uVar8;
  float *pfVar9;
  undefined4 uVar10;
  float *pfVar11;
  int iVar12;
  undefined4 *puVar13;
  int *piVar14;
  undefined1 *puVar15;
  void *pvVar16;
  uint uVar17;
  float fVar18;
  int iVar19;
  bool bVar20;
  float10 fVar21;
  float fVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  undefined4 local_31c;
  int local_318;
  undefined4 *local_314;
  int local_310;
  float *local_30c;
  float *local_308;
  float *local_304;
  void *local_300;
  float local_2fc;
  void *local_2f8;
  void *local_2f4;
  char local_2ed;
  undefined4 *local_2ec;
  float *local_2e8;
  uint local_2e4;
  uint local_2e0;
  uint local_2dc;
  uint local_2d8;
  undefined8 local_2d4;
  undefined8 local_2cc;
  int local_2c4;
  int iStack_2c0;
  undefined1 local_2bc [280];
  float local_1a4;
  float local_1a0;
  char local_19c;
  undefined1 local_19b;
  undefined4 local_198;
  undefined4 local_194;
  undefined2 local_190;
  undefined1 local_18e;
  undefined2 local_18c;
  undefined1 local_188 [256];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  int local_7c;
  undefined1 local_74 [16];
  int local_64;
  int local_60;
  undefined1 local_54 [40];
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0055495b;
  local_10 = ExceptionList;
  uVar8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_300 = param_2;
  local_2ec = param_3;
  local_30c = (float *)(param_1 + 2);
  pfVar9 = (float *)((int)this + 4);
  local_304 = pfVar9;
  local_2f4 = this;
  local_14 = uVar8;
  FUN_00530600(pfVar9,(int *)&local_2e8,(uint *)local_30c);
  pfVar9 = (float *)*pfVar9;
  if (((local_2e8 != pfVar9) && (local_2f8 = (void *)local_2e8[6], local_2f8 != (void *)0x0)) &&
     (0.0 < *(float *)((int)local_2f8 + 0x16c))) {
    if ((*(int *)((int)this + 0xb8) == 0) && (*(char *)((int)local_2f8 + 0x60) == '\0')) {
      FUN_00428400(local_300,param_1);
    }
    else {
      FUN_00530600((void *)((int)this + 4),(int *)&local_2e8,param_1);
      pvVar16 = local_2f8;
      if (local_2e8 == pfVar9) {
        fVar18 = 0.0;
      }
      else {
        fVar18 = local_2e8[6];
      }
      local_2fc = fVar18;
      if (0.0 < (float)param_1[4]) {
        dVar23 = 2.0;
        libm_sse2_pow_precise(uVar8);
        fVar22 = *(float *)((int)pvVar16 + 0x1190) - ((float)param_1[4] * 0.25) / (float)dVar23;
        *(float *)((int)pvVar16 + 0x1190) = fVar22;
        if (fVar22 < 0.0) {
          *(undefined4 *)((int)pvVar16 + 0x1190) = 0;
        }
        if (*(char *)((int)pvVar16 + 0x68) == 'T') {
          *(undefined1 *)((int)pvVar16 + 0x68) = 0;
          *(undefined4 *)((int)pvVar16 + 300) = 3000;
        }
      }
      if ((0.0 <= (float)param_1[4]) && (fVar18 != 0.0)) {
        *(uint *)((int)fVar18 + 0x11d0) = param_1[2];
        *(uint *)((int)fVar18 + 0x11d4) = param_1[3];
        *(uint *)((int)pvVar16 + 0x11d0) = *param_1;
        *(uint *)((int)pvVar16 + 0x11d4) = param_1[1];
        pfVar9 = (float *)FUN_00402b10((void *)((int)fVar18 + 0x13ac),param_1 + 2);
        *pfVar9 = *pfVar9 + 1.0;
        uVar10 = FUN_0040f5a0((int)fVar18);
        if ((char)uVar10 == '\0') {
          if (*(int *)((int)fVar18 + 100) == 0x19) {
            pfVar9 = (float *)FUN_00402b10((void *)((int)pvVar16 + 0x13a4),param_1);
            fVar22 = (float)param_1[4] * 10.0;
          }
          else if (((*(char *)((int)fVar18 + 0xaa8) == '\x03') &&
                   (cVar7 = FUN_0040f8b0((char *)((int)fVar18 + 0xaa8)), cVar7 != '\0')) &&
                  (*(char *)((int)fVar18 + 0x141) == '\x01')) {
            pfVar9 = (float *)FUN_00402b10((void *)((int)pvVar16 + 0x13a4),param_1);
            fVar22 = (float)param_1[4] * 20.0;
          }
          else {
            pfVar9 = (float *)FUN_00402b10((void *)((int)pvVar16 + 0x13a4),param_1);
            fVar22 = (float)param_1[4] * 2.0;
          }
        }
        else {
          pfVar9 = (float *)FUN_00402b10((void *)((int)pvVar16 + 0x13a4),param_1);
          fVar22 = (float)param_1[4];
        }
        *pfVar9 = fVar22 + 0.01 + *pfVar9;
        FUN_004d5f40((int)fVar18,(int)pvVar16,(int)local_300);
      }
      if ((*(ushort *)((int)pvVar16 + 0x7e) & 0x2000) == 0) {
LAB_004ced90:
        pvVar5 = local_2f8;
        if (*(char *)((int)param_1 + 0x45) != '\x03') {
          if (0.0 <= (float)param_1[4]) {
            fVar22 = (float)param_1[0xe];
            fVar24 = (float)param_1[0xf];
            fVar25 = (float)param_1[0x10];
            if ((0 < *(int *)((int)pvVar16 + 300)) && ((int)param_1[6] < 1)) {
              fVar22 = fVar22 * 0.1;
              fVar24 = fVar24 * 0.1;
              fVar25 = fVar25 * 0.1;
            }
            if ((*(char *)((int)pvVar16 + 0x60) != '\x06') &&
               ((((*(char *)((int)local_2f4 + 0xb4) == '\0' &&
                  (*(char *)((int)pvVar16 + 0x60) != '\0')) ||
                 (pvVar16 == *(void **)((int)local_2f4 + 0xb8))) &&
                (*(float *)((int)pvVar16 + 0x4c) * *(float *)((int)pvVar16 + 0x4c) +
                 *(float *)((int)pvVar16 + 0x50) * *(float *)((int)pvVar16 + 0x50) +
                 *(float *)((int)pvVar16 + 0x54) * *(float *)((int)pvVar16 + 0x54) <=
                 fVar24 * fVar24 + fVar22 * fVar22 + fVar25 * fVar25)))) {
              *(float *)((int)pvVar16 + 0x4c) = fVar22;
              *(float *)((int)pvVar16 + 0x50) = fVar24;
              *(float *)((int)pvVar16 + 0x54) = fVar25;
            }
            if (0 < (int)param_1[6]) {
              *(undefined4 *)((int)pvVar16 + 0x34) = 0;
              *(undefined4 *)((int)pvVar16 + 0x38) = 0;
              *(undefined4 *)((int)pvVar16 + 0x3c) = 0;
            }
          }
          uVar8 = param_1[7];
          if (0 < (int)uVar8) {
            if ((int)uVar8 < (int)*(uint *)((int)pvVar16 + 0x130)) {
              uVar8 = *(uint *)((int)pvVar16 + 0x130);
            }
            *(uint *)((int)pvVar16 + 0x130) = uVar8;
          }
          if (*(char *)((int)param_1 + 0x45) == '\x01') {
            fVar18 = *(float *)((int)pvVar16 + 0x170) + 0.25;
            *(float *)((int)pvVar16 + 0x170) = fVar18;
            if (1.0 < fVar18) {
              *(undefined4 *)((int)pvVar16 + 0x170) = 0x3f800000;
            }
          }
          else if (*(char *)((int)param_1 + 0x45) == '\x04') {
            FUN_00408230(pvVar16,(int)local_300);
          }
          else {
            uVar8 = param_1[6];
            if (0 < (int)uVar8) {
              if ((int)uVar8 < (int)*(uint *)((int)pvVar16 + 300)) {
                uVar8 = *(uint *)((int)pvVar16 + 300);
              }
              *(uint *)((int)pvVar16 + 300) = uVar8;
            }
            if ((*(char *)((int)local_2f4 + 0xb4) == '\0') ||
               (pvVar16 == *(void **)((int)local_2f4 + 0xb8))) {
              fVar22 = (float)param_1[4];
              if (fVar22 <= 0.0) {
                if (fVar22 < 0.0) {
                  local_2e8 = (float *)(*(float *)((int)pvVar16 + 0x16c) - fVar22);
                  *(float **)((int)pvVar16 + 0x16c) = local_2e8;
                  fVar21 = FUN_0040fda0((int)pvVar16);
                  local_308 = (float *)(float)fVar21;
                  if ((float)local_308 < (float)local_2e8) {
                    fVar21 = FUN_0040fda0((int)pvVar16);
                    *(float *)((int)pvVar16 + 0x16c) = (float)fVar21;
                  }
                  if ((*(char *)((int)local_2f4 + 0xb4) == '\0') &&
                     (local_2e8 = (float *)**(float **)((int)local_2f4 + 4),
                     local_2e8 != *(float **)((int)local_2f4 + 4))) {
                    do {
                      pfVar9 = local_2e8;
                      if ((local_2e8[6] != 0.0) &&
                         ((uVar10 = FUN_004cfcc0((int)local_2fc,(int)local_2e8[6]),
                          (char)uVar10 != '\0' &&
                          (iVar12 = *(int *)((int)pfVar9[6] + 0x13a4),
                          piVar14 = (int *)FUN_00530600((void *)((int)pfVar9[6] + 0x13a4),
                                                        (int *)&local_308,
                                                        (uint *)((int)local_2f8 + 8)),
                          fVar18 = local_2fc, *piVar14 != iVar12)))) {
                        pfVar11 = (float *)FUN_00402b10((void *)((int)pfVar9[6] + 0x13a4),
                                                        (uint *)((int)local_2fc + 8));
                        *pfVar11 = *pfVar11 - (float)param_1[4] * 0.1;
                        FUN_004d5f40((int)fVar18,(int)pfVar9[6],(int)local_300);
                      }
                      FUN_00407a50((int *)&local_2e8);
                    } while (local_2e8 != (float *)*local_304);
                  }
                }
              }
              else if (*(char *)((int)param_1 + 0x45) == '\x05') {
                piVar14 = (int *)**(int **)((int)pvVar16 + 0x1178);
                if (piVar14 != *(int **)((int)pvVar16 + 0x1178)) {
                  do {
                    if ((char)piVar14[2] == '\x06') {
                      fVar18 = (float)piVar14[3];
                      fVar22 = (float)param_1[4];
                      piVar14[3] = (int)(fVar18 - fVar22);
                      if (fVar18 - fVar22 <= 0.0) {
                        piVar14[3] = 0;
                        piVar14[4] = 0;
                      }
                      FUN_004063d0((int)&local_2e4);
                      local_2e4 = *param_1;
                      local_2d4 = *(ulonglong *)(piVar14 + 2);
                      local_2e0 = param_1[1];
                      local_2dc = param_1[2];
                      local_2d8 = param_1[3];
                      local_2cc = *(undefined8 *)(piVar14 + 4);
                      local_2c4 = piVar14[6];
                      iStack_2c0 = piVar14[7];
                      FUN_00411040((void *)((int)local_300 + 0x58),(undefined8 *)&local_2e4);
                    }
                    piVar14 = (int *)*piVar14;
                  } while (piVar14 != (int *)*(int *)((int)pvVar5 + 0x1178));
                }
              }
              else {
                uVar8 = FUN_00409620((int)pvVar16);
                if (((char)uVar8 != '\0') &&
                   ((fVar18 == 0.0 || (uVar8 = FUN_00409620((int)fVar18), (char)uVar8 != '\0')))) {
                  *(float *)((int)pvVar16 + 0x16c) =
                       *(float *)((int)pvVar16 + 0x16c) - (float)param_1[4];
                }
              }
              pvVar16 = local_2f8;
              if (*(float *)((int)local_2f8 + 0x16c) <= 0.0) {
                *(undefined4 *)((int)local_2f8 + 0x16c) = 0;
                local_18 = 0x3f800000;
                FUN_00402550(&local_2c,(longlong *)((int)local_2f8 + 0x10));
                local_1c = 0x3f800000;
                local_20 = 3.78351e-44;
                FUN_00428590((void *)((int)local_300 + 8),&local_2c);
                *(undefined4 *)((int)pvVar16 + 0x6c) = 0;
                iVar12 = FUN_00406290(local_2f4,*(uint *)((int)pvVar16 + 0x1b0),
                                      *(uint *)((int)pvVar16 + 0x1b4));
                if (iVar12 != 0) {
                  iVar19 = 0;
                  for (piVar14 = *(int **)(iVar12 + 0xc); piVar14 != *(int **)(iVar12 + 0x10);
                      piVar14 = piVar14 + 0x62) {
                    if (((*piVar14 == 5) && (piVar14[0x5e] == *(int *)((int)pvVar16 + 0x1b8))) &&
                       ((char)piVar14[0xc] != '\0')) {
                      FUN_004d8c90(piVar14,(int)local_300,'\0');
                      local_80 = *(undefined4 *)((int)pvVar16 + 0x1b4);
                      local_84 = *(undefined4 *)((int)pvVar16 + 0x1b0);
                      local_7c = iVar19;
                      FUN_00422da0(local_74,piVar14);
                      FUN_004284f0((void *)((int)local_300 + 0x30),&local_84);
                      break;
                    }
                    iVar19 = iVar19 + 1;
                  }
                }
                FUN_004d2ae0(local_2f4,(int)pvVar16,local_2ec);
                pfVar9 = local_304;
                local_2e8 = *(float **)*local_304;
                if (local_2e8 != (float *)*local_304) {
                  do {
                    if ((local_2e8[6] != 0.0) && (*(char *)((int)local_2e8[6] + 0x60) == '\0')) {
                      FUN_00402c50((void *)((int)local_2e8[6] + 0x10),(uint *)&local_2c,
                                   (uint *)((int)pvVar16 + 0x10));
                    }
                    FUN_00407a50((int *)&local_2e8);
                  } while (local_2e8 != (float *)*pfVar9);
                }
                pfVar9 = (float *)((int)pvVar16 + 0x11c8);
                local_308 = pfVar9;
                if (*(int *)((int)pvVar16 + 0x11c8) != 0 || *(int *)((int)pvVar16 + 0x11cc) != 0) {
                  FUN_00530600(local_304,(int *)&local_2ec,(uint *)pfVar9);
                  puVar13 = (undefined4 *)*local_304;
                  if ((local_2ec != puVar13) && (local_2ec[6] != 0)) {
                    FUN_00530600(local_304,(int *)&local_2ec,(uint *)pfVar9);
                    if (local_2ec == puVar13) {
                      iVar12 = 0;
                    }
                    else {
                      iVar12 = local_2ec[6];
                    }
                    *(undefined4 *)(iVar12 + 0x16c) = 0;
                  }
                }
                fVar21 = FUN_00407d60((float)(int)((uint)*(byte *)((int)pvVar16 + 0x1a8) +
                                                  *(int *)((int)pvVar16 + 400)));
                local_2ec = (undefined4 *)(float)fVar21;
                local_2fc = (float)local_2ec * 20.0;
                if (local_2fc < 1.0) {
                  local_2fc = 1.0;
                }
                iVar12 = FUN_0040f650((int)pvVar16);
                if ((char)iVar12 != '\0') {
                  local_2fc = local_2fc * 20.0;
                }
                uVar1 = *(ushort *)((int)pvVar16 + 0x7e);
                if ((uVar1 & 0x200) != 0) {
                  local_2fc = local_2fc * 10.0;
                }
                if ((uVar1 & 0x800) != 0) {
                  local_2fc = 0.0;
                }
                local_2ed = '\0';
                local_2e4 = 0;
                local_2e0 = 0;
                local_2dc = 0;
                local_2d8 = 0;
                local_2d4 = local_2d4 & 0xffff000000000000;
                local_2cc = 0;
                local_2c4 = 0;
                iStack_2c0 = 0;
                if ((((*(char *)((int)local_2f4 + 0xb4) == '\0') &&
                     (iVar12 = FUN_004286f0(local_2f4,
                                            (int)(*(int *)((int)pvVar16 + 0x1b0) +
                                                 (*(int *)((int)pvVar16 + 0x1b0) >> 0x1f & 7U)) >> 3
                                            ,(int)(*(int *)((int)pvVar16 + 0x1b4) +
                                                  (*(int *)((int)pvVar16 + 0x1b4) >> 0x1f & 7U)) >>
                                             3), iVar12 != 0)) &&
                    (*(char *)(iVar12 + 0x41) != '\x02')) &&
                   (((uVar1 & 0x2000) != 0 ||
                    ((*(int *)(iVar12 + 0x34) == 5 && (*(char *)((int)pvVar16 + 0x1d38) != '\0')))))
                   ) {
                  pfVar9 = *(float **)((int)pvVar16 + 0x13a4);
                  local_2e8 = (float *)*pfVar9;
                  while (local_2e8 != pfVar9) {
                    if (0.0 < local_2e8[6]) {
                      pfVar11 = local_2e8 + 4;
                      FUN_00530600(local_304,(int *)&local_2ec,(uint *)pfVar11);
                      if (((local_2ec != (undefined4 *)*local_304) && (local_2ec[6] != 0)) &&
                         (uVar8 = FUN_00405420(local_2f4,(uint *)pfVar11),
                         *(char *)(uVar8 + 0x60) == '\0')) {
                        switch(*(undefined4 *)(iVar12 + 0x34)) {
                        case 1:
                        case 2:
                        case 3:
                        case 4:
                        case 5:
                        case 0xd:
switchD_004cf51a_caseD_1:
                          local_2ed = '\x01';
                          *(undefined1 *)(iVar12 + 0x41) = 2;
                          break;
                        default:
                          goto switchD_004cf51a_caseD_6;
                        case 7:
                        case 8:
                        case 9:
                        case 10:
                        case 0xb:
                        case 0xc:
                          *(int *)(iVar12 + 0x44) = *(int *)(iVar12 + 0x44) + 1;
                          *(undefined1 *)(iVar12 + 0x41) = 1;
                          if (*(int *)(iVar12 + 0x48) <= *(int *)(iVar12 + 0x44))
                          goto switchD_004cf51a_caseD_1;
                        }
                        FUN_00423c90(&local_2e4,(undefined4 *)(iVar12 + 0x2c));
                        FUN_00422d00(&local_64);
                        pvVar16 = local_2f8;
                        local_64 = (int)(*(int *)((int)local_2f8 + 0x1b0) +
                                        (*(int *)((int)local_2f8 + 0x1b0) >> 0x1f & 7U)) >> 3;
                        local_60 = (int)((*(int *)((int)local_2f8 + 0x1b4) >> 0x1f & 7U) +
                                        *(int *)((int)local_2f8 + 0x1b4)) >> 3;
                        FUN_00423c90(local_54,&local_2e4);
                        FUN_004284a0((void *)((int)local_300 + 0x60),&local_64);
                        if ((local_2ed != '\0') &&
                           (pfVar9 = (float *)((*(int *)((int)pvVar16 + 0x1b0) >> 0x1f & 7U) +
                                               *(int *)((int)pvVar16 + 0x1b0) & 0xfffffff8),
                           local_2e8 = pfVar9, (int)pfVar9 < (int)(pfVar9 + 2))) {
                          do {
                            uVar8 = (*(int *)((int)pvVar16 + 0x1b4) >> 0x1f & 7U) +
                                    *(int *)((int)pvVar16 + 0x1b4) & 0xfffffff8;
                            local_2e8 = pfVar9;
                            if ((int)uVar8 < (int)(uVar8 + 8)) {
                              do {
                                puVar13 = (undefined4 *)FUN_00406290(local_2f4,(uint)pfVar9,uVar8);
                                local_2ec = puVar13;
                                if (puVar13 != (undefined4 *)0x0) {
                                  iVar12 = puVar13[6];
                                  iVar19 = puVar13[0x28];
                                  if (iVar19 < puVar13[7] - iVar12 >> 2) {
                                    do {
                                      puVar3 = *(undefined4 **)(iVar12 + iVar19 * 4);
                                      if (puVar3 != (undefined4 *)0x0) {
                                        (**(code **)*puVar3)(1);
                                      }
                                      iVar12 = puVar13[6];
                                      iVar19 = iVar19 + 1;
                                    } while (iVar19 < puVar13[7] - iVar12 >> 2);
                                  }
                                  FUN_0045f080(puVar13 + 6,local_2ec[0x28]);
                                  pfVar9 = local_2e8;
                                }
                                uVar8 = uVar8 + 1;
                              } while ((int)uVar8 <
                                       ((int)(*(int *)((int)local_2f8 + 0x1b4) +
                                             (*(int *)((int)local_2f8 + 0x1b4) >> 0x1f & 7U)) >> 3)
                                       * 8 + 8);
                            }
                            pfVar9 = (float *)((int)pfVar9 + 1);
                            pvVar16 = local_2f8;
                            local_2e8 = pfVar9;
                          } while ((int)pfVar9 <
                                   ((int)(*(int *)((int)local_2f8 + 0x1b0) +
                                         (*(int *)((int)local_2f8 + 0x1b0) >> 0x1f & 7U)) >> 3) * 8
                                   + 8);
                        }
                        break;
                      }
                    }
                    FUN_00407a50((int *)&local_2e8);
                  }
                }
switchD_004cf51a_caseD_6:
                pfVar9 = *(float **)*local_304;
                pfVar11 = local_304;
                if (pfVar9 != (float *)*local_304) {
                  do {
                    fVar18 = pfVar9[6];
                    if (fVar18 != 0.0) {
                      if (((*(float *)((int)fVar18 + 0x11d0) == *local_30c) &&
                          (*(float *)((int)fVar18 + 0x11d4) == local_30c[1])) ||
                         ((*(float *)((int)fVar18 + 0x11d0) == *local_308 &&
                          (*(float *)((int)fVar18 + 0x11d4) == local_308[1])))) {
                        *(undefined4 *)((int)fVar18 + 0x11d0) = 0;
                        *(undefined4 *)((int)fVar18 + 0x11d4) = 0;
                      }
                      local_310 = 0;
                      puVar13 = (undefined4 *)FUN_004ce660((undefined4 *)0x0,(undefined4 *)0x0);
                      pfVar11 = (float *)**(float **)((int)pfVar9[6] + 0x13a4);
                      local_8 = 0;
                      local_314 = puVar13;
                      local_2e8 = pfVar11;
                      if (pfVar11 != *(float **)((int)pfVar9[6] + 0x13a4)) {
                        do {
                          fVar18 = pfVar11[4];
                          if (((fVar18 == *local_30c) &&
                              (fVar18 = pfVar11[4], pfVar11[5] == local_30c[1])) ||
                             ((fVar18 == *local_308 && (pfVar11[5] == local_308[1])))) {
                            iVar12 = FUN_0052dfb0(puVar13,(undefined4 *)puVar13[1],&local_2e8);
                            if (local_310 == 0x15555554) goto LAB_004cfc8a;
                            puVar13[1] = iVar12;
                            local_310 = local_310 + 1;
                            **(int **)(iVar12 + 4) = iVar12;
                          }
                          if (*(char *)((int)pfVar11 + 0xd) == '\0') {
                            pfVar2 = (float *)pfVar11[2];
                            if (*(char *)((int)pfVar2 + 0xd) == '\0') {
                              cVar7 = *(char *)((int)*pfVar2 + 0xd);
                              pfVar11 = pfVar2;
                              pfVar2 = (float *)*pfVar2;
                              while (local_2e8 = pfVar11, cVar7 == '\0') {
                                cVar7 = *(char *)((int)*pfVar2 + 0xd);
                                pfVar11 = pfVar2;
                                pfVar2 = (float *)*pfVar2;
                              }
                            }
                            else {
                              cVar7 = *(char *)((int)pfVar11[1] + 0xd);
                              pfVar6 = (float *)pfVar11[1];
                              pfVar2 = pfVar11;
                              while ((pfVar11 = pfVar6, local_2e8 = pfVar11, cVar7 == '\0' &&
                                     (pfVar2 == (float *)pfVar11[2]))) {
                                cVar7 = *(char *)((int)pfVar11[1] + 0xd);
                                pfVar6 = (float *)pfVar11[1];
                                pfVar2 = pfVar11;
                              }
                            }
                          }
                        } while (pfVar11 != *(float **)((int)pfVar9[6] + 0x13a4));
                      }
                      for (puVar3 = (undefined4 *)*puVar13; puVar3 != puVar13;
                          puVar3 = (undefined4 *)*puVar3) {
                        FUN_0040a1d0((void *)((int)pfVar9[6] + 0x13a4),&local_31c,(int *)puVar3[2]);
                      }
                      if ((*(char *)((int)local_2f8 + 0x60) == '\x01') &&
                         (*(char *)((int)pfVar9[6] + 0x60) == '\0')) {
                        iVar12 = *(int *)((int)local_2f8 + 0x13a4);
                        piVar14 = (int *)FUN_00530600((void *)((int)local_2f8 + 0x13a4),&local_318,
                                                      (uint *)(pfVar9 + 4));
                        pvVar16 = local_300;
                        if (*piVar14 != iVar12) {
                          local_24 = *local_30c;
                          local_20 = local_30c[1];
                          local_1c = *(undefined4 *)((int)local_2f8 + 100);
                          local_2c = pfVar9[4];
                          local_28 = pfVar9[5];
                          local_18 = (int)local_2fc;
                          local_2ec = *(undefined4 **)((int)local_300 + 0x48);
                          iVar19 = FUN_004203c0(local_2ec,(undefined4 *)local_2ec[1],
                                                (undefined8 *)&local_2c);
                          iVar12 = *(int *)((int)pvVar16 + 0x4c);
                          if (iVar12 == 0x7fffffe) goto LAB_004cfc8a;
                          *(int *)((int)pvVar16 + 0x4c) = iVar12 + 1;
                          local_2ec[1] = iVar19;
                          **(int **)(iVar19 + 4) = iVar19;
                          FUN_004d61c0(local_2f4,(uint *)&local_2c);
                        }
                        if (local_2ed != '\0') {
                          local_2e8 = (float *)(uint)local_2d4._4_1_;
                          fVar21 = FUN_00407d60((float)((int)local_2e8 + (int)local_2d4));
                          local_2ec = (undefined4 *)(float)fVar21;
                          fVar18 = (float)local_2ec * 50.0;
                          local_19b = 0;
                          local_198 = 0;
                          local_194 = 0;
                          local_190 = 0;
                          local_18e = 0;
                          local_88 = 0;
                          memset(local_188,0,0x100);
                          pvVar16 = local_300;
                          local_1a4 = pfVar9[4];
                          local_1a0 = pfVar9[5];
                          local_18c = (undefined2)(int)(fVar18 + 1.0);
                          local_2ec = *(undefined4 **)((int)local_300 + 0x40);
                          local_19c = '\r';
                          iVar12 = FUN_00420380(local_2ec,(undefined4 *)local_2ec[1],&local_1a4);
                          if (*(int *)((int)pvVar16 + 0x44) == 0xdd67c7) {
LAB_004cfc8a:
                    /* WARNING: Subroutine does not return */
                            std::_Xlength_error("list<T> too long");
                          }
                          *(int *)((int)pvVar16 + 0x44) = *(int *)((int)pvVar16 + 0x44) + 1;
                          local_2ec[1] = iVar12;
                          **(int **)(iVar12 + 4) = iVar12;
                          if (pfVar9[6] == *(float *)((int)local_2f4 + 0xb8)) {
                            FUN_00427000((void *)((int)pfVar9[6] + 0x11dc),&local_19c,-1);
                          }
                          uVar8 = rand();
                          uVar8 = uVar8 & 0x80000001;
                          bVar20 = uVar8 == 0;
                          if ((int)uVar8 < 0) {
                            bVar20 = (uVar8 - 1 | 0xfffffffe) == 0xffffffff;
                          }
                          if (bVar20) {
                            puVar15 = (undefined1 *)
                                      FUN_00528bf0(local_2bc,(short)local_2d4,(char)local_2e8,
                                                   (uint)*(byte *)((int)pfVar9[6] + 0x140));
                          }
                          else {
                            puVar15 = (undefined1 *)
                                      FUN_0052c4e0(local_2bc,(short)local_2d4,(char)local_2e8,
                                                   (uint)*(byte *)((int)pfVar9[6] + 0x140));
                          }
                          FUN_00402a70(&local_19c,puVar15);
                          local_2ec = *(undefined4 **)((int)pvVar16 + 0x40);
                          iVar12 = FUN_00420380(local_2ec,(undefined4 *)local_2ec[1],&local_1a4);
                          if (*(int *)((int)pvVar16 + 0x44) == 0xdd67c7) goto LAB_004cfc8a;
                          *(int *)((int)pvVar16 + 0x44) = *(int *)((int)pvVar16 + 0x44) + 1;
                          local_2ec[1] = iVar12;
                          **(int **)(iVar12 + 4) = iVar12;
                          if (pfVar9[6] == *(float *)((int)local_2f4 + 0xb8)) {
                            FUN_00427000((void *)((int)pfVar9[6] + 0x11dc),&local_19c,-1);
                          }
                        }
                      }
                      puVar3 = (undefined4 *)*puVar13;
                      *puVar13 = puVar13;
                      local_8 = 0xffffffff;
                      puVar13[1] = puVar13;
                      local_310 = 0;
                      while (puVar3 != puVar13) {
                        puVar4 = (undefined4 *)*puVar3;
                        operator_delete(puVar3);
                        puVar3 = puVar4;
                      }
                      operator_delete(puVar13);
                      pfVar11 = local_304;
                    }
                    if (*(char *)((int)pfVar9 + 0xd) == '\0') {
                      pfVar2 = (float *)pfVar9[2];
                      if (*(char *)((int)pfVar2 + 0xd) == '\0') {
                        cVar7 = *(char *)((int)*pfVar2 + 0xd);
                        pfVar9 = pfVar2;
                        pfVar2 = (float *)*pfVar2;
                        while (cVar7 == '\0') {
                          cVar7 = *(char *)((int)*pfVar2 + 0xd);
                          pfVar9 = pfVar2;
                          pfVar2 = (float *)*pfVar2;
                        }
                      }
                      else {
                        cVar7 = *(char *)((int)pfVar9[1] + 0xd);
                        pfVar6 = (float *)pfVar9[1];
                        pfVar2 = pfVar9;
                        while ((pfVar9 = pfVar6, cVar7 == '\0' && (pfVar2 == (float *)pfVar9[2]))) {
                          cVar7 = *(char *)((int)pfVar9[1] + 0xd);
                          pfVar6 = (float *)pfVar9[1];
                          pfVar2 = pfVar9;
                        }
                      }
                    }
                  } while (pfVar9 != (float *)*pfVar11);
                }
                uVar8 = *(uint *)((int)local_2f8 + 0x1b0);
                uVar17 = *(uint *)((int)local_2f8 + 0x1b4);
                if ((((-1 < (int)uVar8) && (-1 < (int)uVar17)) && ((int)uVar8 < 0x10000)) &&
                   ((int)uVar17 < 0x10000)) {
                  iVar12 = (int)(uVar8 + ((int)uVar8 >> 0x1f & 0x3fU)) >> 6;
                  iVar19 = (int)(((int)uVar17 >> 0x1f & 0x3fU) + uVar17) >> 6;
                  if (((-1 < iVar12) && (-1 < iVar19)) &&
                     ((iVar12 < 0x400 &&
                      ((iVar19 < 0x400 &&
                       (iVar12 = *(int *)((int)local_2f4 + (iVar12 * 0x400 + iVar19) * 4 + 0xbc),
                       iVar12 != 0)))))) {
                    uVar8 = uVar8 & 0x8000003f;
                    if ((int)uVar8 < 0) {
                      uVar8 = (uVar8 - 1 | 0xffffffc0) + 1;
                    }
                    uVar17 = uVar17 & 0x8000003f;
                    if ((int)uVar17 < 0) {
                      uVar17 = (uVar17 - 1 | 0xffffffc0) + 1;
                    }
                    iVar12 = *(int *)(iVar12 + 0x10018 + (uVar8 * 0x40 + uVar17) * 4);
                    if (((iVar12 != 0) && (iVar19 = *(int *)((int)local_2f8 + 0x1b8), -1 < iVar19))
                       && (iVar19 < *(int *)(iVar12 + 0x1c) - *(int *)(iVar12 + 0x18) >> 2)) {
                      *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x18) + iVar19 * 4) + 0x38) =
                           1200000;
                      *(undefined4 *)
                       (*(int *)(*(int *)(iVar12 + 0x18) + *(int *)((int)local_2f8 + 0x1b8) * 4) +
                       0x3c) = *(undefined4 *)((int)local_2f4 + 0x800160);
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        pfVar9 = *(float **)((int)pvVar16 + 0x13a4);
        local_2e8 = (float *)*pfVar9;
        while (local_2e8 != pfVar9) {
          if (((0.0 < local_2e8[6]) &&
              (FUN_00530600(local_304,(int *)&local_308,(uint *)(local_2e8 + 4)),
              local_308 != (float *)*local_304)) &&
             ((local_308[6] != 0.0 &&
              (pvVar16 = local_2f8, *(char *)((int)local_308[6] + 0x60) == '\0'))))
          goto LAB_004ced90;
          FUN_00407a50((int *)&local_2e8);
        }
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004cfd50 @ 004cfd50  kind=gamemisc  attributed-by=none  size=6604 */

void __thiscall
FUN_004cfd50(void *this,float param_1,void *param_2,float param_3,char param_4,char param_5,
            float param_6,undefined4 param_7,float *param_8,undefined4 *param_9,undefined4 *param_10
            ,char param_11,int param_12,undefined4 param_13,char param_14)

{
  undefined4 *puVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  void *pvVar9;
  float10 fVar10;
  float fVar11;
  double dVar12;
  undefined1 auVar13 [16];
  float fVar14;
  undefined1 auStack_348 [4];
  undefined4 *local_344;
  undefined8 *local_340;
  float local_33c;
  void *local_338;
  float local_334;
  float local_330;
  float local_32c;
  undefined4 *local_328;
  float local_324;
  void *local_320;
  undefined4 *local_31c;
  int *local_318;
  int local_314;
  int *local_310;
  undefined4 local_30c;
  int *local_308;
  int local_304;
  undefined4 local_300;
  float fStack_2fc;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  float local_2c0;
  float local_2bc;
  float local_2b8;
  undefined4 local_2b4;
  float local_2b0;
  undefined4 local_2ac;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  float local_29c;
  float local_298;
  undefined4 local_294;
  undefined8 local_290;
  undefined4 local_288;
  undefined4 local_284;
  float local_280;
  char local_27c;
  int local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  float local_258;
  float local_254;
  float local_250;
  char local_24c;
  undefined2 local_24b;
  float local_244;
  float local_240;
  undefined4 local_23c;
  float local_238;
  float local_234;
  float local_230;
  undefined4 local_22c;
  float local_228;
  undefined4 local_224;
  float local_220;
  float local_21c;
  float local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  float local_208;
  float local_204;
  float local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  uint local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  float local_1c8;
  undefined1 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  undefined1 local_193;
  float local_18c;
  float local_188;
  float local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  float local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  float local_134;
  float local_130;
  float local_12c;
  uint local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  float local_118;
  undefined1 local_114;
  undefined4 local_110;
  undefined1 local_108 [24];
  float local_f0;
  float local_ec;
  float local_e8;
  undefined1 local_e3;
  undefined4 local_e0 [3];
  undefined4 local_d4;
  float local_d0;
  undefined4 local_cc;
  uint local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  float local_b8;
  undefined1 local_b4;
  undefined4 local_b0;
  undefined1 local_a8 [24];
  float local_90;
  float local_8c;
  float local_88;
  undefined1 local_83;
  undefined4 local_80 [3];
  undefined4 local_74;
  float local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  float local_58;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005549b1;
  local_14 = ExceptionList;
  local_1c = DAT_00583cc8 ^ (uint)auStack_348;
  uVar4 = DAT_00583cc8 ^ (uint)&stack0xfffffcb0;
  ExceptionList = &local_14;
  local_33c = param_1;
  local_338 = param_2;
  local_328 = param_9;
  local_31c = param_10;
  local_320 = this;
  if ((*(float *)((int)param_1 + 0x16c) <= 0.0) ||
     ((*(char *)((int)this + 0xb4) != '\0' && (param_1 == *(float *)((int)this + 0xb8)))))
  goto LAB_004d16f7;
  if (param_2 == (void *)0x0) {
    rand();
    *(undefined4 *)((int)param_1 + 0x1184) = 0x3f000000;
    local_334 = param_3;
  }
  else {
    cVar2 = *(char *)((int)param_2 + 0x68);
    if (((cVar2 == '[') || (cVar2 == 'J')) && ((*(byte *)((int)param_1 + 0x5c) & 1) == 0))
    goto LAB_004d16f7;
    if (cVar2 == '\x1c') {
      local_180 = *(undefined4 *)((int)param_1 + 0x10);
      local_17c = *(undefined4 *)((int)param_1 + 0x14);
      local_178 = *(undefined4 *)((int)param_1 + 0x18);
      local_174 = *(undefined4 *)((int)param_1 + 0x1c);
      local_170 = *(undefined4 *)((int)param_1 + 0x20);
      local_16c = *(undefined4 *)((int)param_1 + 0x24);
      local_140 = 0x40400000;
      iVar5 = rand();
      local_144 = 1;
      local_14c = ((float)iVar5 * 0.1) / 32767.0 + 0.1;
      local_168 = 0;
      local_164 = 0;
      local_160 = 0x41200000;
      local_148 = 8;
      local_15c = 0x3f19999a;
      local_158 = 0x3f19999a;
      local_154 = 0x3f800000;
      local_150 = 0x3f800000;
      FUN_00428540(param_9 + 4,&local_180);
    }
    if ((*(char *)((int)param_1 + 0x60) == '\x01') &&
       (((*(byte *)((int)param_1 + 0x124) & 0x80) != 0 ||
        ((*(byte *)((int)param_1 + 0x5c) & 0x20) != 0)))) {
      local_6c = 0x3f800000;
      FUN_00402550(local_80,(longlong *)((int)param_1 + 0x10));
      iVar5 = rand();
      local_70 = ((float)iVar5 * 0.3) / 32767.0 + 1.0;
      local_74 = 0x18;
      FUN_00428590(local_328 + 2,local_80);
      FUN_00422a90((int)&local_128);
      FUN_00402a40(local_108,(undefined4 *)((int)param_1 + 0x10));
      puVar1 = local_328;
      local_128 = *(uint *)((int)local_338 + 8);
      local_124 = *(undefined4 *)((int)local_338 + 0xc);
      local_120 = *(undefined4 *)((int)param_1 + 8);
      local_11c = *(undefined4 *)((int)param_1 + 0xc);
      local_118 = param_3;
      local_f0 = *param_8;
      local_ec = param_8[1];
      local_e8 = param_8[2];
      local_e3 = 3;
      local_114 = 0;
      local_110 = 0;
      FUN_00428400(local_328,&local_128);
      if (*(char *)((int)local_320 + 0xb4) == '\0') {
        FUN_004cea80(local_320,&local_128,puVar1,local_31c);
      }
      goto LAB_004d16f7;
    }
    if (((param_14 != '\0') && (cVar2 = FUN_0040f610((int)param_1), cVar2 != '\0')) &&
       (0.0 < *(float *)((int)param_1 + 0x174))) {
      fVar10 = FUN_004094a0((int)param_1);
      local_340 = (undefined8 *)(param_3 / (float)fVar10);
      fVar11 = *(float *)((int)param_1 + 0x174) + *(float *)((int)param_1 + 0x170);
      fVar14 = *(float *)((int)param_1 + 0x174) + *(float *)((int)param_1 + 0x144);
      *(float *)((int)param_1 + 0x170) = fVar11;
      *(float *)((int)param_1 + 0x144) = fVar14;
      if (1.0 < fVar11) {
        *(undefined4 *)((int)param_1 + 0x170) = 0x3f800000;
      }
      if (*(float *)((int)param_1 + 0x170) < fVar14) {
        *(float *)((int)param_1 + 0x144) = *(float *)((int)param_1 + 0x170);
      }
      FUN_00422a90((int)&local_c8);
      FUN_00402a40(local_a8,(undefined4 *)((int)param_1 + 0x10));
      local_c8 = *(uint *)((int)local_338 + 8);
      local_c4 = *(undefined4 *)((int)local_338 + 0xc);
      local_c0 = *(undefined4 *)((int)param_1 + 8);
      local_bc = *(undefined4 *)((int)param_1 + 0xc);
      local_b8 = param_3;
      local_90 = *param_8 * 0.5;
      local_8c = param_8[1] * 0.5;
      fVar11 = *(float *)((int)param_1 + 0x174) - (float)local_340;
      local_88 = param_8[2] * 0.5;
      local_83 = 1;
      local_b4 = 0;
      local_b0 = 0;
      *(float *)((int)param_1 + 0x174) = fVar11;
      if (fVar11 < -1.0) {
        *(undefined4 *)((int)param_1 + 0x174) = 0xbf800000;
      }
      FUN_00428400(param_9,&local_c8);
      local_cc = 0x3f800000;
      FUN_00402550(local_e0,(longlong *)((int)param_1 + 0x10));
      iVar5 = rand();
      local_d4 = 0x18;
      local_d0 = ((float)iVar5 * 0.3) / 32767.0 + 1.0;
      FUN_00428590(param_9 + 2,local_e0);
      if (*(char *)((int)local_320 + 0xb4) == '\0') {
        FUN_004cea80(local_320,&local_c8,param_9,local_31c);
      }
      goto LAB_004d16f7;
    }
    local_340 = (undefined8 *)0x0;
    for (puVar1 = (undefined4 *)**(undefined4 **)((int)param_1 + 0x1178);
        puVar1 != *(undefined4 **)((int)param_1 + 0x1178); puVar1 = (undefined4 *)*puVar1) {
      if (*(char *)(puVar1 + 2) == '\x06') {
        local_340 = (undefined8 *)((float)local_340 + (float)puVar1[3]);
      }
    }
    local_330 = (float)*(int *)((int)local_338 + 0x70);
    iVar5 = FUN_0040fcf0((int)local_338);
    if (local_330 / (float)iVar5 <= 1.0) {
      local_330 = (float)*(int *)((int)local_338 + 0x70);
      iVar5 = FUN_0040fcf0((int)local_338);
      local_32c = local_330 / (float)iVar5;
    }
    else {
      local_32c = 1.0;
    }
    local_32c = 1.0 - local_32c;
    local_330 = local_32c * (float)local_340;
    if (local_330 <= 0.0) {
      local_334 = param_3;
    }
    else {
      FUN_00422a90((int)&local_1d8);
      local_1b8 = *(undefined4 *)((int)param_1 + 0x10);
      local_1b4 = *(undefined4 *)((int)param_1 + 0x14);
      local_1b0 = *(undefined4 *)((int)param_1 + 0x18);
      local_1ac = *(undefined4 *)((int)param_1 + 0x1c);
      local_1a8 = *(undefined4 *)((int)param_1 + 0x20);
      local_1a4 = *(undefined4 *)((int)param_1 + 0x24);
      local_1d8 = *(uint *)((int)local_338 + 8);
      local_1d4 = *(undefined4 *)((int)local_338 + 0xc);
      local_1d0 = *(undefined4 *)((int)param_1 + 8);
      local_1cc = *(undefined4 *)((int)param_1 + 0xc);
      local_1c8 = param_3;
      local_1a0 = *param_8 * 0.5;
      local_19c = param_8[1] * 0.5;
      local_198 = param_8[2] * 0.5;
      local_193 = 5;
      local_1c4 = 0;
      local_1c0 = 0;
      local_134 = local_1a0;
      local_130 = local_19c;
      local_12c = local_198;
      FUN_00428400(param_9,&local_1d8);
      local_224 = 0x3f800000;
      local_238 = (float)*(longlong *)((int)param_1 + 0x10) * 1.5258789e-05;
      local_340 = (undefined8 *)(float)*(longlong *)((int)param_1 + 0x20);
      local_234 = (float)*(longlong *)((int)param_1 + 0x18) * 1.5258789e-05;
      local_230 = (float)local_340 * 1.5258789e-05;
      iVar5 = rand();
      local_22c = 0x5b;
      local_228 = ((float)iVar5 * 0.3) / 32767.0 + 1.0;
      FUN_00428590(param_9 + 2,&local_238);
      if (*(char *)((int)local_320 + 0xb4) == '\0') {
        FUN_004cea80(local_320,&local_1d8,param_9,local_31c);
      }
      local_334 = param_3 - local_330;
      if (local_334 <= 0.0) goto LAB_004d16f7;
    }
    if (param_11 == '\0') {
      fVar10 = FUN_00408300((int)param_1);
    }
    else {
      fVar10 = FUN_00411540((int)param_1);
    }
    pvVar9 = local_338;
    local_340 = (undefined8 *)(float)fVar10;
    local_334 = local_334 - local_32c * (float)local_340;
    if (local_334 < 0.0) {
      local_334 = 0.0;
    }
    local_324 = (float)*(int *)((int)local_338 + 0x70);
    iVar5 = FUN_0040fcf0((int)local_338);
    local_324 = local_324 / (float)iVar5;
    if (0.25 < local_324) {
      local_244 = *param_8;
      local_240 = param_8[1];
      fVar11 = local_240 * local_240 + local_244 * local_244 + param_8[2] * param_8[2];
      if (0.0 < fVar11) {
        dVar12 = (double)fVar11;
        libm_sse2_sqrt_precise();
        local_240 = (1.0 / (float)dVar12) * param_8[1];
        local_244 = *param_8 * (1.0 / (float)dVar12);
      }
      local_244 = local_244 * 4.0;
      local_240 = local_240 * 4.0;
      local_23c = 0x40a00000;
      FUN_00409270(pvVar9,&local_310);
      puVar1 = local_328;
      local_c = 0;
      piVar6 = (int *)*local_310;
      if (piVar6 != local_310) {
        local_340 = (undefined8 *)((int)param_1 + 0x10);
        do {
          FUN_004d2190(local_340,(undefined8 *)&local_244,local_324,param_5,piVar6[2],(int)puVar1);
          piVar6 = (int *)*piVar6;
          param_1 = local_33c;
        } while (piVar6 != local_310);
      }
      piVar6 = (int *)*local_310;
      *local_310 = (int)local_310;
      local_c = 0xffffffff;
      local_310[1] = (int)local_310;
      local_30c = 0;
      if (piVar6 != local_310) {
        do {
          piVar8 = (int *)*piVar6;
          operator_delete(piVar6);
          piVar6 = piVar8;
        } while (piVar8 != local_310);
      }
      operator_delete(local_310);
      pvVar9 = local_338;
    }
    if ((param_5 != '\0') && (0.0 < local_324)) {
      FUN_00409270(pvVar9,&local_318);
      local_c = 1;
      piVar6 = local_318;
      if (local_314 != 0) {
        piVar8 = (int *)*local_318;
        local_33c = 0.0;
        local_330 = 0.1 / (float)((double)local_314 +
                                 *(double *)(&DAT_0055ac20 + (local_314 >> 0x1f) * -8));
        if (piVar8 != local_318) {
          do {
            iVar5 = piVar8[2];
            local_340 = (undefined8 *)0x0;
            if (0 < *(int *)(iVar5 + 0x114)) {
              local_32c = 3.36312e-44;
              do {
                switch(*(undefined1 *)(iVar5 + -1 + (int)local_32c)) {
                case 0x80:
                  fVar10 = FUN_00407d60((float)*(int *)((int)local_32c + piVar8[2]));
                  local_344 = (undefined4 *)(float)fVar10;
                  local_334 = (float)local_344 * local_330 * local_324 + local_334;
                  break;
                case 0x81:
                  fVar10 = FUN_00407d60((float)*(int *)((int)local_32c + piVar8[2]));
                  local_344 = (undefined4 *)(float)fVar10;
                  fVar11 = (float)local_344 * local_330 * local_324;
                  local_334 = fVar11 * 0.5 + local_334;
                  local_33c = fVar11 * 2.0 + local_33c;
                  break;
                case 0x82:
                  fVar10 = FUN_00407d60((float)*(int *)((int)local_32c + piVar8[2]));
                  local_344 = (undefined4 *)(float)fVar10;
                  local_334 = (float)local_344 * local_330 * 0.25 * local_324 + local_334;
                  *(int *)((int)param_1 + 0x134) =
                       (int)(local_324 * 500.0 + (float)*(int *)((int)param_1 + 0x134));
                  break;
                case 0x83:
                  fVar10 = FUN_00407d60((float)*(int *)((int)local_32c + piVar8[2]));
                  local_344 = (undefined4 *)(float)fVar10;
                  local_334 = (float)local_344 * local_330 * 0.25 * local_324 + local_334;
                  *(int *)((int)local_338 + 0x138) =
                       (int)(local_324 * 500.0 + (float)*(int *)((int)local_338 + 0x138));
                }
                local_340 = (undefined8 *)((int)local_340 + 1);
                iVar5 = piVar8[2];
                local_32c = (float)((int)local_32c + 8);
                piVar6 = local_318;
              } while ((int)local_340 < *(int *)(iVar5 + 0x114));
            }
            piVar8 = (int *)*piVar8;
          } while (piVar8 != piVar6);
        }
        pvVar9 = local_338;
        if (5000 < *(int *)((int)param_1 + 0x134)) {
          *(undefined4 *)((int)param_1 + 0x134) = 5000;
        }
        if (5000 < *(int *)((int)local_338 + 0x138)) {
          *(undefined4 *)((int)local_338 + 0x138) = 5000;
        }
        if (0.0 < local_33c) {
          FUN_00422a90((int)&local_68);
          puVar1 = local_328;
          local_48 = *(undefined4 *)((int)pvVar9 + 0x10);
          local_64 = *(undefined4 *)((int)pvVar9 + 0xc);
          local_58 = -local_33c;
          local_44 = *(undefined4 *)((int)pvVar9 + 0x14);
          local_40 = *(undefined4 *)((int)pvVar9 + 0x18);
          local_3c = *(undefined4 *)((int)pvVar9 + 0x1c);
          local_38 = *(undefined4 *)((int)pvVar9 + 0x20);
          local_34 = *(undefined4 *)((int)pvVar9 + 0x24);
          local_68 = *(undefined4 *)((int)pvVar9 + 8);
          local_344 = (undefined4 *)*local_328;
          local_60 = local_68;
          local_5c = local_64;
          iVar7 = FUN_004202b0(local_344,(undefined4 *)local_344[1],&local_68);
          iVar5 = puVar1[1];
          if (iVar5 == 0x3333332) {
                    /* WARNING: Subroutine does not return */
            std::_Xlength_error("list<T> too long");
          }
          puVar1[1] = iVar5 + 1;
          local_344[1] = iVar7;
          **(int **)(iVar7 + 4) = iVar7;
          *(float *)((int)local_338 + 0x16c) = *(float *)((int)local_338 + 0x16c) + local_33c;
          piVar6 = local_318;
        }
      }
      piVar8 = (int *)*piVar6;
      *piVar6 = (int)piVar6;
      local_c = 0xffffffff;
      local_318[1] = (int)local_318;
      local_314 = 0;
      if (piVar8 != local_318) {
        do {
          piVar6 = (int *)*piVar8;
          operator_delete(piVar8);
          piVar8 = piVar6;
        } while (piVar6 != local_318);
      }
      operator_delete(local_318);
    }
    param_9 = local_328;
    pvVar9 = local_338;
    if (*(char *)((int)local_338 + 0x68) == '\x1c') {
      if (*(float *)((int)param_1 + 0x1184) <= 0.3 && *(float *)((int)param_1 + 0x1184) != 0.3) {
        *(undefined4 *)((int)param_1 + 0x1184) = 0x3e99999a;
      }
    }
    else {
      if (param_14 == '\0') goto LAB_004d0e7e;
      *(undefined4 *)((int)param_1 + 0x1184) = 0x3f800000;
    }
    if (param_14 != '\0') {
      if (param_11 == '\0') {
        if (param_12 != 0x1c) {
          local_294 = 0x3f800000;
          local_2a8 = (float)*(longlong *)((int)param_1 + 0x10) * 1.5258789e-05;
          local_344 = (undefined4 *)(float)*(longlong *)((int)param_1 + 0x20);
          local_2a4 = (float)*(longlong *)((int)param_1 + 0x18) * 1.5258789e-05;
          local_2a0 = (float)local_344 * 1.5258789e-05;
          FUN_00409270(local_338,&local_308);
          local_340 = (undefined8 *)0xffffffff;
          local_c = 2;
          if (local_304 != 0) {
            local_340 = (undefined8 *)(uint)*(byte *)(*(int *)(*local_308 + 8) + 1);
          }
          if (*(char *)((int)pvVar9 + 0x68) == 'D') {
            local_340 = (undefined8 *)0x11;
          }
          iVar5 = rand();
          local_298 = ((float)iVar5 * 0.2) / 32767.0 + 0.9;
          if (param_4 == '\0') {
            switch(local_340) {
            case (undefined8 *)0x0:
            case (undefined8 *)0x1:
              local_298 = local_298 + 0.1;
            case (undefined8 *)0xf:
            case (undefined8 *)0x10:
              local_33c = 1.4013e-45;
              break;
            default:
              local_33c = 7.00649e-45;
              break;
            case (undefined8 *)0x3:
            case (undefined8 *)0x4:
              local_33c = 9.80909e-45;
              break;
            case (undefined8 *)0x5:
              local_33c = 4.2039e-45;
              break;
            case (undefined8 *)0x6:
            case (undefined8 *)0x7:
            case (undefined8 *)0x8:
              local_33c = 1.26117e-44;
            }
          }
          else {
            switch(local_340) {
            case (undefined8 *)0x0:
            case (undefined8 *)0x1:
              local_298 = local_298 + 0.1;
            case (undefined8 *)0xf:
            case (undefined8 *)0x10:
              local_33c = 2.8026e-45;
              break;
            default:
              local_33c = 8.40779e-45;
              break;
            case (undefined8 *)0x3:
            case (undefined8 *)0x4:
              local_33c = 1.12104e-44;
              break;
            case (undefined8 *)0x5:
              local_33c = 5.60519e-45;
              break;
            case (undefined8 *)0x6:
            case (undefined8 *)0x7:
            case (undefined8 *)0x8:
              local_33c = 1.4013e-44;
            }
          }
          FUN_0040f2b0((int)pvVar9);
          param_9 = local_328;
          if (*(char *)((int)pvVar9 + 0x68) == '6') {
            local_29c = 1.54143e-44;
          }
          else {
            local_29c = local_33c;
            if (*(char *)((int)pvVar9 + 0x68) == '\n') {
              local_29c = 7.00649e-45;
            }
          }
          FUN_00428590(local_328 + 2,&local_2a8);
          local_c = 0xffffffff;
          FUN_00423710((int *)&local_308);
        }
      }
      else if (*(char *)((int)local_338 + 0x141) == '\x01') {
        local_1f4 = 0x3f800000;
        local_208 = (float)*(longlong *)((int)param_1 + 0x10) * 1.5258789e-05;
        local_344 = (undefined4 *)(float)*(longlong *)((int)param_1 + 0x20);
        local_204 = (float)*(longlong *)((int)param_1 + 0x18) * 1.5258789e-05;
        local_1f8 = 0x3f800000;
        local_200 = (float)local_344 * 1.5258789e-05;
        local_1fc = 0x2a;
        FUN_00428590(local_328 + 2,&local_208);
      }
      else {
        local_1dc = 0x3f800000;
        local_1f0 = (float)*(longlong *)((int)param_1 + 0x10) * 1.5258789e-05;
        local_344 = (undefined4 *)(float)*(longlong *)((int)param_1 + 0x20);
        local_1ec = (float)*(longlong *)((int)param_1 + 0x18) * 1.5258789e-05;
        local_1e0 = 0x3fc00000;
        local_1e8 = (float)local_344 * 1.5258789e-05;
        local_1e4 = 0x27;
        FUN_00428590(local_328 + 2,&local_1f0);
      }
    }
  }
LAB_004d0e7e:
  local_340 = (undefined8 *)
              (*(float *)((int)param_1 + 0x34) * *(float *)((int)param_1 + 0x34) +
               *(float *)((int)param_1 + 0x38) * *(float *)((int)param_1 + 0x38) +
              *(float *)((int)param_1 + 0x3c) * *(float *)((int)param_1 + 0x3c));
  fVar11 = *param_8 * *param_8 + param_8[1] * param_8[1] + param_8[2] * param_8[2];
  if ((float)local_340 < fVar11) {
    local_340 = (undefined8 *)fVar11;
  }
  if ((float)local_340 <
      *(float *)((int)param_1 + 0x34) * *(float *)((int)param_1 + 0x34) +
      *(float *)((int)param_1 + 0x38) * *(float *)((int)param_1 + 0x38) +
      *(float *)((int)param_1 + 0x3c) * *(float *)((int)param_1 + 0x3c)) {
    dVar12 = (double)(*(float *)((int)param_1 + 0x38) * *(float *)((int)param_1 + 0x38) +
                      *(float *)((int)param_1 + 0x34) * *(float *)((int)param_1 + 0x34) +
                     *(float *)((int)param_1 + 0x3c) * *(float *)((int)param_1 + 0x3c));
    libm_sse2_sqrt_precise(uVar4);
    local_32c = 1.0 / (float)dVar12;
    local_344 = (undefined4 *)(local_32c * *(float *)((int)param_1 + 0x34));
    local_330 = local_32c * *(float *)((int)param_1 + 0x38);
    local_32c = local_32c * *(float *)((int)param_1 + 0x3c);
    dVar12 = (double)(float)local_340;
    libm_sse2_sqrt_precise();
    local_184 = (float)dVar12;
    local_18c = local_184 * (float)local_344;
    local_188 = local_184 * local_330;
    local_184 = local_184 * local_32c;
    *(float *)((int)param_1 + 0x34) = local_18c;
    *(float *)((int)param_1 + 0x38) = local_188;
    *(float *)((int)param_1 + 0x3c) = local_184;
  }
  local_270 = *(undefined4 *)((int)param_1 + 0x10);
  local_26c = *(undefined4 *)((int)param_1 + 0x14);
  local_268 = *(undefined4 *)((int)param_1 + 0x18);
  local_264 = *(undefined4 *)((int)param_1 + 0x1c);
  local_260 = *(undefined4 *)((int)param_1 + 0x20);
  local_25c = *(undefined4 *)((int)param_1 + 0x24);
  local_274 = 0;
  local_24b = 0;
  if (local_338 == (void *)0x0) {
    local_290 = 0;
  }
  else {
    local_290 = *(undefined8 *)((int)local_338 + 8);
  }
  for (puVar1 = (undefined4 *)**(undefined4 **)((int)param_1 + 0x1178);
      puVar1 != *(undefined4 **)((int)param_1 + 0x1178); puVar1 = (undefined4 *)*puVar1) {
    if (*(char *)(puVar1 + 2) == '\x01') {
      local_334 = (float)puVar1[3] * local_334;
    }
  }
  local_288 = *(undefined4 *)((int)param_1 + 8);
  local_284 = *(undefined4 *)((int)param_1 + 0xc);
  local_27c = param_4;
  local_258 = *param_8;
  local_254 = param_8[1];
  local_250 = param_8[2];
  local_278 = 0;
  local_24c = param_5;
  local_280 = local_334;
  if (param_12 == 0x11) {
    local_2f0 = *(undefined4 *)((int)local_338 + 8);
    fStack_2fc = local_334 * 0.1;
    uStack_2ec = *(undefined4 *)((int)local_338 + 0xc);
    local_344 = *(undefined4 **)((int)param_1 + 0x1178);
    local_2f8 = 3000;
    local_300 = CONCAT31(local_300._1_3_,4);
    iVar5 = FUN_004203c0(local_344,(undefined4 *)local_344[1],(undefined8 *)&local_300);
    if (*(int *)((int)param_1 + 0x117c) == 0x7fffffe) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    local_2d8 = CONCAT44(fStack_2fc,local_300);
    *(int *)((int)param_1 + 0x117c) = *(int *)((int)param_1 + 0x117c) + 1;
    local_2d0 = CONCAT44(uStack_2f4,local_2f8);
    local_344[1] = iVar5;
    local_2c8 = CONCAT44(uStack_2ec,local_2f0);
    **(int **)(iVar5 + 4) = iVar5;
    local_2e8 = *(undefined4 *)((int)local_338 + 8);
    local_2e4 = *(undefined4 *)((int)local_338 + 0xc);
    local_344 = (undefined4 *)param_9[0x16];
    local_2e0 = *(undefined4 *)((int)param_1 + 8);
    local_2dc = *(undefined4 *)((int)param_1 + 0xc);
    iVar5 = FUN_00420080(local_344,(undefined4 *)local_344[1],(undefined8 *)&local_2e8);
    if (param_9[0x17] == 0x5555554) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    param_9[0x17] = param_9[0x17] + 1;
    local_344[1] = iVar5;
    **(int **)(iVar5 + 4) = iVar5;
  }
  if ((param_4 != '\0') && (*(char *)((int)param_1 + 0x60) != '\x06')) {
    local_2ac = 0x3f800000;
    local_2c0 = (float)*(longlong *)((int)param_1 + 0x10) * 1.5258789e-05;
    local_344 = (undefined4 *)(float)*(longlong *)((int)param_1 + 0x20);
    local_2bc = (float)*(longlong *)((int)param_1 + 0x18) * 1.5258789e-05;
    local_2b8 = (float)local_344 * 1.5258789e-05;
    iVar5 = rand();
    local_2b0 = ((float)iVar5 * 0.1) / 32767.0 + 1.0;
    switch(*(undefined4 *)((int)param_1 + 100)) {
    case 0:
      local_2b4 = 0x3c;
      break;
    case 1:
      local_2b4 = 0x3d;
      break;
    case 2:
    case 0x2b:
      local_2b4 = 0x3e;
      break;
    case 3:
    case 0x2d:
      local_2b4 = 0x3f;
      break;
    case 4:
      local_2b4 = 0x40;
      break;
    case 5:
      local_2b4 = 0x41;
      break;
    default:
      goto switchD_004d12bd_caseD_6;
    case 7:
      local_2b4 = 0x42;
      break;
    case 8:
      local_2b4 = 0x43;
      break;
    case 9:
      local_2b4 = 0x44;
      break;
    case 10:
      local_2b4 = 0x45;
      break;
    case 0xb:
      local_2b4 = 0x46;
      break;
    case 0xc:
      local_2b4 = 0x47;
      break;
    case 0xd:
      local_2b4 = 0x4a;
      break;
    case 0xe:
      local_2b4 = 0x4b;
      break;
    case 0xf:
      local_2b4 = 0x48;
      break;
    case 0x10:
      local_2b4 = 0x49;
      break;
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
      local_2b4 = 0x4f;
      break;
    case 0x2e:
    case 0x6c:
    case 0x6d:
    case 0x72:
    case 0x73:
      local_2b4 = 0x4d;
      break;
    case 0x30:
    case 0x33:
    case 0x57:
      local_2b4 = 0x4e;
      break;
    case 0x60:
      local_2b4 = 0x50;
      break;
    case 0x77:
      local_2b4 = 0x4c;
    }
    FUN_00428590(param_9 + 2,&local_2c0);
  }
switchD_004d12bd_caseD_6:
  if (local_338 != (void *)0x0) {
    if ((*(int *)((int)param_1 + 300) < -3000) && (*(char *)((int)param_1 + 0x60) != '\x06')) {
      cVar2 = *(char *)((int)local_338 + 0x68);
      if ((cVar2 == ':') ||
         ((((cVar2 == '\f' || (cVar2 == 'D')) || (cVar2 == ']')) || (cVar2 == 'E')))) {
        param_6 = 1.0;
      }
      iVar5 = FUN_0040f650((int)param_1);
      if ((char)iVar5 != '\0') {
        param_6 = param_6 * 0.15;
      }
      iVar5 = FUN_0040f650((int)local_338);
      if (((char)iVar5 == '\0') && (*(char *)((int)local_338 + 0x60) != '\0')) {
        param_6 = param_6 * 0.1;
      }
      if ((*(char *)((int)local_338 + 0x68) == '[') || (*(char *)((int)local_338 + 0x68) == 'J')) {
        param_6 = 1.0;
      }
      if (*(char *)((int)param_1 + 0x68) == 'T') {
        param_6 = 1.0;
      }
      fVar10 = FUN_00407d60((float)*(int *)((int)local_338 + 400));
      local_344 = (undefined4 *)(float)fVar10;
      fVar10 = FUN_00407d60((float)*(int *)((int)param_1 + 400));
      local_340 = (undefined8 *)(float)fVar10;
      auVar13 = ZEXT816(0x4000000000000000);
      libm_sse2_pow_precise();
      fVar11 = (float)auVar13._0_8_ * param_6;
      if (1.0 < fVar11) {
        fVar11 = 1.0;
      }
      local_340 = (undefined8 *)(fVar11 * 0.9);
      for (puVar1 = (undefined4 *)**(undefined4 **)((int)param_1 + 0x1178);
          puVar1 != *(undefined4 **)((int)param_1 + 0x1178); puVar1 = (undefined4 *)*puVar1) {
        if (*(char *)(puVar1 + 2) == '\x01') {
          local_340 = (undefined8 *)0x0;
        }
      }
      iVar5 = rand();
      if ((float)iVar5 / 32767.0 < (float)local_340) {
        local_278 = FUN_0040ffe0((int)param_1);
        local_20c = 0x3f800000;
        local_250 = 10.0;
        local_220 = (float)*(longlong *)((int)param_1 + 0x10) * 1.5258789e-05;
        local_21c = (float)*(longlong *)((int)param_1 + 0x18) * 1.5258789e-05;
        local_344 = (undefined4 *)param_9[2];
        local_218 = (float)*(longlong *)((int)param_1 + 0x20) * 1.5258789e-05;
        local_210 = 0x3f800000;
        local_214 = 0x17;
        iVar5 = FUN_004f3ba0(local_344,(undefined4 *)local_344[1],&local_220);
        if (param_9[3] == 0x7fffffe) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("list<T> too long");
        }
        param_9[3] = param_9[3] + 1;
        local_344[1] = iVar5;
        **(int **)(iVar5 + 4) = iVar5;
      }
    }
    uVar3 = local_24b._1_1_;
    if (*(char *)((int)local_338 + 0x68) == '\x1c') {
      uVar3 = 1;
    }
    local_24b = CONCAT11(uVar3,(undefined1)local_24b);
  }
  puVar1 = (undefined4 *)*param_9;
  iVar5 = FUN_004202b0(puVar1,(undefined4 *)puVar1[1],(undefined4 *)&local_290);
  if (param_9[1] == 0x3333332) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  param_9[1] = param_9[1] + 1;
  puVar1[1] = iVar5;
  **(int **)(iVar5 + 4) = iVar5;
  if (*(char *)((int)local_320 + 0xb4) == '\0') {
    FUN_004cea80(local_320,(uint *)&local_290,param_9,local_31c);
  }
LAB_004d16f7:
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)auStack_348);
  return;
}


/* FUN_004d1860 @ 004d1860  kind=gamemisc  attributed-by=none  size=82 */

undefined4 __thiscall FUN_004d1860(void *this,undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar2 = *(undefined4 **)((int)this + 0x800154);
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


/* FUN_004d18c0 @ 004d18c0  kind=gamemisc  attributed-by=none  size=143 */

int FUN_004d18c0(int param_1,int param_2)

{
  char cVar1;
  undefined4 in_EAX;
  uint3 uVar4;
  uint uVar2;
  uint uVar3;
  
  uVar4 = (uint3)((uint)in_EAX >> 8);
  if (param_1 == param_2) {
    return (uint)uVar4 << 8;
  }
  cVar1 = *(char *)(param_1 + 0x60);
  uVar3 = CONCAT31(uVar4,cVar1);
  if ((cVar1 == '\x06') || (*(char *)(param_2 + 0x60) == '\x06')) {
    return CONCAT31(uVar4,1);
  }
  if (cVar1 == '\x01') {
    if (*(char *)(param_2 + 0x60) != '\x01') goto LAB_004d193e;
    uVar2 = FUN_0040f710(param_1);
    uVar3 = FUN_0040f710(param_2);
    if ((char)uVar3 != (char)uVar2) goto LAB_004d193e;
  }
  if (*(char *)(param_2 + 0x60) == '\x01') {
    if (*(char *)(param_1 + 0x60) != '\x01') goto LAB_004d193e;
    uVar2 = FUN_0040f710(param_1);
    uVar3 = FUN_0040f710(param_2);
    if ((char)uVar2 != (char)uVar3) goto LAB_004d193e;
  }
  if (((*(byte *)(param_1 + 0x124) & 0x20) == 0) && ((*(byte *)(param_2 + 0x124) & 0x20) == 0)) {
    return uVar3 & 0xffffff00;
  }
LAB_004d193e:
  return CONCAT31((int3)(uVar3 >> 8),1);
}


/* FUN_004d2190 @ 004d2190  kind=gamemisc  attributed-by=none  size=431 */

void FUN_004d2190(undefined8 *param_1,undefined8 *param_2,float param_3,char param_4,int param_5,
                 int param_6)

{
  undefined4 *puVar1;
  float *pfVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  float local_70 [4];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  float local_40;
  undefined8 local_3c;
  undefined8 local_34;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  float local_18 [4];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  iVar5 = 0;
  if (0 < *(int *)(param_5 + 0x114)) {
    pbVar3 = (byte *)(param_5 + 0x17);
    do {
      if (0x7f < *pbVar3) {
        local_60 = *param_1;
        local_58 = param_1[1];
        local_50 = param_1[2];
        local_48 = *param_2;
        local_40 = *(float *)(param_2 + 1);
        local_20 = 0x40400000;
        local_2c = 0x3dcccccd;
        local_24 = 2;
        local_18[0] = 1.0;
        iVar4 = (int)(param_3 * 3.0 + 1.0);
        local_18[1] = 1.0;
        local_18[2] = 1.0;
        local_18[3] = 1.0;
        local_28 = iVar4;
        pfVar2 = FUN_00413df0(local_70,(uint)*pbVar3,local_18,param_3 * 0.5);
        local_3c = *(undefined8 *)pfVar2;
        local_34 = *(undefined8 *)(pfVar2 + 2);
        if (param_4 != '\0') {
          local_28 = iVar4 + 10;
          local_48 = CONCAT44(local_48._4_4_ * 2.0,(float)local_48 * 2.0);
          local_40 = local_40 * 2.0;
        }
        puVar1 = *(undefined4 **)(param_6 + 0x10);
        iVar4 = FUN_00420470(puVar1,(undefined4 *)puVar1[1],(undefined4 *)&local_60);
        if (*(int *)(param_6 + 0x14) == 0x3333332) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("list<T> too long");
        }
        *(int *)(param_6 + 0x14) = *(int *)(param_6 + 0x14) + 1;
        puVar1[1] = iVar4;
        **(int **)(iVar4 + 4) = iVar4;
      }
      iVar5 = iVar5 + 1;
      pbVar3 = pbVar3 + 8;
    } while (iVar5 < *(int *)(param_5 + 0x114));
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004d2810 @ 004d2810  kind=gamemisc  attributed-by=none  size=715 */

void FUN_004d2810(undefined1 *param_1,uint *param_2,float param_3,float param_4,void *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  void *this;
  undefined8 uVar8;
  undefined4 local_164;
  undefined1 *local_160;
  void *local_15c;
  void *local_158;
  uint local_154;
  undefined2 local_150 [140];
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  float local_20;
  float local_1c;
  int local_14;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_160 = param_1;
  local_15c = param_5;
  FUN_0041d8d0(local_150);
  local_154 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar7 = param_2[3];
  local_20 = param_3;
  local_1c = local_1c * param_4;
  local_28 = param_2[4];
  local_24 = param_2[5];
  local_38 = local_154;
  local_34 = uVar3;
  local_30 = uVar2;
  local_2c = uVar7;
  iVar1 = rand();
  local_c = *(undefined4 *)((int)local_158 + 0x800160);
  local_14 = iVar1 % 300 + 500;
  uVar8 = __alldiv(uVar2,uVar7,0x10000,0);
  uVar2 = (int)((int)uVar8 + ((int)uVar8 >> 0x1f & 0xffU)) >> 8;
  uVar8 = __alldiv(local_154,uVar3,0x10000,0);
  local_154 = FUN_00406290(local_158,(int)((int)uVar8 + ((int)uVar8 >> 0x1f & 0xffU)) >> 8,uVar2);
  if (local_154 != 0) {
    FUN_00402a70(local_150,local_160);
    iVar1 = rand();
    local_20 = ((float)iVar1 * 360.0) / 32767.0;
    if (((int)local_24 < 1) && ((int)local_24 < 0)) {
      uVar8 = __alldiv(local_28,local_24,0x10000,0);
      iVar1 = (int)uVar8 + -1;
    }
    else {
      uVar8 = __alldiv(local_28,local_24,0x10000,0);
      iVar1 = (int)uVar8;
    }
    uVar8 = __alldiv(local_30,local_2c,0x10000,0);
    uVar3 = (uint)uVar8;
    uVar8 = __alldiv(local_38,local_34,0x10000,0);
    uVar2 = (uint)uVar8;
    do {
      if (((((int)uVar2 < 0) || ((int)uVar3 < 0)) || (0xffffff < (int)uVar2)) ||
         ((0xffffff < (int)uVar3 ||
          (iVar4 = FUN_00406290(local_158,(int)(uVar2 + ((int)uVar2 >> 0x1f & 0xffU)) >> 8,
                                (int)(uVar3 + ((int)uVar3 >> 0x1f & 0xffU)) >> 8), iVar4 == 0)))) {
LAB_004d2a64:
        puVar5 = &DAT_00584248;
      }
      else {
        uVar7 = uVar3 & 0x800000ff;
        if ((int)uVar7 < 0) {
          uVar7 = (uVar7 - 1 | 0xffffff00) + 1;
        }
        uVar6 = uVar2 & 0x800000ff;
        if ((int)uVar6 < 0) {
          uVar6 = (uVar6 - 1 | 0xffffff00) + 1;
        }
        this = (void *)((uVar7 * 0x100 + uVar6) * 0x20 + *(int *)(iVar4 + 0xa8));
        if ((this == (void *)0x0) || (iVar4 = *(int *)((int)this + 0x10), iVar1 < iVar4))
        goto LAB_004d2a64;
        if (iVar1 < *(int *)((int)this + 0x1c) + iVar4) {
          puVar5 = FUN_00405f20(this,iVar1 - iVar4);
          if ((((puVar5[3] & 0x1f) == 0) && (iVar1 < 1)) && ((puVar5[3] & 0x40) == 0)) {
            puVar5 = &DAT_00584240;
          }
        }
        else {
          puVar5 = &DAT_00584240;
          if (0 < iVar1) {
            puVar5 = &DAT_00584244;
          }
        }
      }
      if (((puVar5[3] & 0x1f) != 0) && ((puVar5[3] & 0x1f) != 2)) goto LAB_004d2a7f;
      iVar1 = iVar1 + -1;
    } while( true );
  }
LAB_004d2ac8:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
LAB_004d2a7f:
  local_28 = iVar1 + 1;
  local_24 = ((int)local_28 >> 0x1f) << 0x10 | local_28 >> 0x10;
  local_28 = local_28 * 0x10000;
  FUN_0041f5b0((void *)(local_154 + 0x30),(undefined1 *)local_150);
  FUN_004da680(local_15c,&local_164,'\0',&local_154,(uint)DAT_0058423e);
  goto LAB_004d2ac8;
}


/* FUN_004d2ae0 @ 004d2ae0  kind=gamemisc  attributed-by=none  size=4682 */

void __thiscall FUN_004d2ae0(void *this,int param_1,void *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  int *piVar8;
  code *pcVar9;
  bool bVar10;
  float10 fVar11;
  float fVar12;
  ulonglong uVar13;
  float fVar14;
  void *pvVar15;
  int local_18c;
  void *local_188;
  void *local_184;
  undefined4 local_180;
  int local_17c;
  void *local_178;
  void *local_174;
  int *local_170;
  float local_16c;
  byte local_168 [4];
  undefined4 local_164;
  undefined4 local_160;
  undefined2 local_15c;
  undefined1 local_15a;
  undefined2 local_158;
  undefined1 local_154 [256];
  undefined4 local_54;
  uint local_50 [7];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  float local_20 [3];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pcVar9 = rand_exref;
  local_8 = 0xffffffff;
  puStack_c = &LAB_005549eb;
  local_10 = ExceptionList;
  local_14 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_178 = param_2;
  local_174 = this;
  if (((*(char *)(param_1 + 0x60) == '\0') || (*(char *)(param_1 + 0x60) == '\x03')) ||
     ((*(ushort *)(param_1 + 0x7e) & 0x800) != 0)) goto LAB_004d3d18;
  rand();
  local_188 = (void *)0x0;
  local_184 = (void *)0x0;
  local_180 = 0;
  local_8 = 0;
  if (*(char *)(param_1 + 0x990) != '\0') {
    local_170 = (int *)(param_1 + 0x990);
    FUN_004f2be0(&local_188,&local_170);
  }
  if (*(char *)(param_1 + 0xaa8) != '\0') {
    local_170 = (int *)(param_1 + 0xaa8);
    FUN_004f2be0(&local_188,&local_170);
  }
  if (*(char *)(param_1 + 0x530) != '\0') {
    local_170 = (int *)(param_1 + 0x530);
    FUN_004f2be0(&local_188,&local_170);
  }
  if (*(char *)(param_1 + 0x878) != '\0') {
    local_170 = (int *)(param_1 + 0x878);
    FUN_004f2be0(&local_188,&local_170);
  }
  if (*(char *)(param_1 + 0x760) != '\0') {
    local_170 = (int *)(param_1 + 0x760);
    FUN_004f2be0(&local_188,&local_170);
  }
  if (*(char *)(param_1 + 0x648) != '\0') {
    local_170 = (int *)(param_1 + 0x648);
    FUN_004f2be0(&local_188,&local_170);
  }
  if (*(char *)(param_1 + 0x418) != '\0') {
    local_170 = (int *)(param_1 + 0x418);
    FUN_004f2be0(&local_188,&local_170);
  }
  if (local_188 != local_184) {
    uVar2 = rand();
    uVar2 = uVar2 & 0x80000003;
    bVar10 = uVar2 == 0;
    if ((int)uVar2 < 0) {
      bVar10 = (uVar2 - 1 | 0xfffffffc) == 0xffffffff;
    }
    if ((bVar10) || ((*(ushort *)(param_1 + 0x7e) & 0x200) != 0)) {
      iVar3 = rand();
      local_20[0] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
      iVar3 = rand();
      local_20[1] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
      local_20[2] = 0.0;
      FUN_00402510((int)(local_50 + 6));
      uVar2 = rand();
      iVar7 = (int)local_184 - (int)local_188;
      fVar14 = 1.0;
      pvVar15 = local_178;
      iVar3 = rand();
      fVar12 = ((float)iVar3 * 360.0) / 32767.0;
      puVar4 = FUN_00402cb0((void *)(param_1 + 0x10),local_50,local_50 + 6);
      FUN_004d2810(*(undefined1 **)((int)local_188 + (uVar2 % (uint)(iVar7 >> 2)) * 4),puVar4,fVar12
                   ,fVar14,pvVar15);
    }
  }
  if (((*(char *)(param_1 + 0x60) == '\x01') || (*(int *)(param_1 + 100) == 0x8f)) &&
     (iVar3 = rand(), iVar3 % 10 == 0)) {
    uVar2 = rand();
    uVar2 = uVar2 & 0x80000001;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
    }
    iVar3 = *(int *)(param_1 + 400) + -1 + uVar2;
    if (iVar3 < 1) {
      iVar3 = 1;
    }
    uVar2 = rand();
    uVar2 = uVar2 & 0x80000001;
    bVar10 = uVar2 == 0;
    if ((int)uVar2 < 0) {
      bVar10 = (uVar2 - 1 | 0xfffffffe) == 0xffffffff;
    }
    iVar7 = -1;
    if (bVar10) {
      iVar5 = FUN_0052bf40((uint)*(byte *)(param_1 + 0x1a8),'\0');
      FUN_00528bf0(local_168,(short)iVar3,(char)iVar5,iVar7);
    }
    else {
      iVar5 = FUN_0052bf40((uint)*(byte *)(param_1 + 0x1a8),'\0');
      FUN_0052c4e0(local_168,(short)iVar3,(char)iVar5,iVar7);
    }
    FUN_00414470(local_168,0.05,'\x01');
    iVar3 = rand();
    local_20[0] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
    iVar3 = rand();
    local_20[1] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
    local_20[2] = 0.0;
    FUN_00402510((int)(local_50 + 6));
    fVar14 = 1.0;
    pvVar15 = local_178;
    iVar3 = rand();
    fVar12 = ((float)iVar3 * 360.0) / 32767.0;
    puVar4 = FUN_00402cb0((void *)(param_1 + 0x10),local_50,local_50 + 6);
    FUN_004d2810(local_168,puVar4,fVar12,fVar14,pvVar15);
    iVar3 = rand();
    if (iVar3 % 5 == 0) {
      FUN_0052bf40((uint)*(byte *)(param_1 + 0x1a8),'\0');
      FUN_0052b3f0(local_174,local_168);
      FUN_00414470(local_168,0.05,'\x01');
      iVar3 = rand();
      local_20[0] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
      iVar3 = rand();
      local_20[1] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
      local_20[2] = 0.0;
      FUN_00402510((int)(local_50 + 6));
      fVar14 = 1.0;
      pvVar15 = local_178;
      iVar3 = rand();
      fVar12 = ((float)iVar3 * 360.0) / 32767.0;
      puVar4 = FUN_00402cb0((void *)(param_1 + 0x10),local_50,local_50 + 6);
      FUN_004d2810(local_168,puVar4,fVar12,fVar14,pvVar15);
    }
  }
  iVar3 = rand();
  local_17c = 0;
  iVar3 = iVar3 % 3 + 1;
  if (0 < iVar3) {
    do {
      local_168[0] = 0;
      local_168[1] = 0;
      local_164 = 0;
      local_160 = 0;
      local_15c = 0;
      local_15a = 0;
      local_54 = 0;
      memset(local_154,0,0x100);
      local_16c = 0.75;
      local_158 = 1;
      switch(*(undefined4 *)(param_1 + 100)) {
      case 0x3a:
        local_168[0] = 0xb;
        local_168[1] = 2;
        local_15c = CONCAT11(0x13,(undefined1)local_15c);
        local_16c = 0.8;
        break;
      default:
        if (local_168[0] == 0) goto LAB_004d3488;
        break;
      case 0x46:
        local_168[0] = 0xb;
        local_168[1] = 0x12;
        local_16c = 0.8;
        break;
      case 0x47:
        local_168[0] = 0xb;
        local_168[1] = 0x15;
        local_16c = 0.8;
        break;
      case 0x78:
      case 0x79:
      case 0x7c:
      case 0x7e:
        uVar2 = (*pcVar9)();
        uVar2 = uVar2 & 0x80000001;
        bVar10 = uVar2 == 0;
        if ((int)uVar2 < 0) {
          bVar10 = (uVar2 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (bVar10) {
          local_168[0] = 0xb;
          local_168[1] = 5;
          local_15c = CONCAT11(0x15,(undefined1)local_15c);
          local_16c = 0.8;
        }
        else {
          local_168[0] = 0xb;
          local_168[1] = 1;
          local_15c = CONCAT11(2,(undefined1)local_15c);
          local_16c = 0.8;
        }
        break;
      case 0x7a:
        local_168[0] = 0xb;
        local_168[1] = 0x1b;
        goto LAB_004d3284;
      case 0x7b:
        local_168[0] = 0xb;
        local_168[1] = 0xb;
        local_15c = CONCAT11(0x1b,(undefined1)local_15c);
        local_16c = 0.8;
        break;
      case 0x7d:
        local_168[0] = 0xb;
        local_168[1] = 6;
LAB_004d3284:
        local_15c = local_15c & 0xff;
        local_16c = 0.8;
        break;
      case 0x7f:
        local_168[0] = 0xb;
        local_168[1] = 0x14;
        local_16c = 0.8;
        break;
      case 0x80:
        local_168[0] = 0xb;
        local_168[1] = 0x17;
        local_16c = 0.8;
        break;
      case 0x83:
        local_168[0] = 0xb;
        local_168[1] = 0;
        local_15c = CONCAT11(0xb,(undefined1)local_15c);
        local_16c = 3.0;
        break;
      case 0x84:
        local_168[0] = 0xb;
        local_168[1] = 0;
        local_15c = CONCAT11(1,(undefined1)local_15c);
        local_16c = 3.0;
        break;
      case 0x85:
        local_168[0] = 0xb;
        local_168[1] = 0;
        local_15c = CONCAT11(0xc,(undefined1)local_15c);
        local_16c = 3.0;
        break;
      case 0x86:
        local_168[0] = 0xb;
        local_168[1] = 0;
        local_15c = CONCAT11(0x11,(undefined1)local_15c);
        local_16c = 0.8;
        break;
      case 0x87:
        local_168[0] = 0xb;
        local_168[1] = 0;
        local_15c = 0xd01;
        local_16c = 3.0;
        break;
      case 0x88:
        local_168[0] = 0xb;
        local_168[1] = 0;
        local_15c = 0xe02;
        local_16c = 3.0;
        break;
      case 0x89:
        local_168[0] = 0xb;
        local_168[1] = 0;
        local_15c = 0xf03;
        local_16c = 3.0;
        break;
      case 0x8a:
        local_168[0] = 0xb;
        local_168[1] = 0;
        local_15c = 0x1004;
        local_16c = 3.0;
        break;
      case 0x8b:
        local_168[0] = 0xb;
        local_168[1] = 8;
        local_15c = CONCAT11(0x16,(undefined1)local_15c);
        local_16c = 0.8;
      }
      iVar7 = (*pcVar9)();
      local_20[0] = 1.0 - ((float)iVar7 * 2.0) / 32767.0;
      iVar7 = (*pcVar9)();
      local_20[2] = 0.0;
      iVar5 = 0;
      local_20[1] = 1.0 - ((float)iVar7 * 2.0) / 32767.0;
      do {
        local_170 = (int *)(local_20[iVar5] * 65536.0);
        uVar13 = FUN_0054a946();
        pcVar9 = rand_exref;
        local_50[iVar5 * 2] = (uint)uVar13;
        local_50[iVar5 * 2 + 1] = (uint)(uVar13 >> 0x20);
        iVar5 = iVar5 + 1;
      } while (iVar5 < 3);
      local_50[6] = *(uint *)(param_1 + 0x10) + local_50[0];
      local_34 = *(int *)(param_1 + 0x14) + local_50[1] +
                 (uint)CARRY4(*(uint *)(param_1 + 0x10),local_50[0]);
      local_30 = *(uint *)(param_1 + 0x18) + local_50[2];
      local_2c = *(int *)(param_1 + 0x1c) + local_50[3] +
                 (uint)CARRY4(*(uint *)(param_1 + 0x18),local_50[2]);
      local_28 = *(uint *)(param_1 + 0x20) + local_50[4];
      local_24 = *(int *)(param_1 + 0x24) + local_50[5] +
                 (uint)CARRY4(*(uint *)(param_1 + 0x20),local_50[4]);
      fVar12 = local_16c;
      pvVar15 = local_178;
      iVar7 = rand();
      FUN_004d2810(local_168,local_50 + 6,((float)iVar7 * 360.0) / 32767.0,fVar12,pvVar15);
      local_17c = local_17c + 1;
    } while (local_17c < iVar3);
  }
LAB_004d3488:
  if ((*(char *)(param_1 + 0x60) == '\x01') || (*(int *)(param_1 + 100) == 0x8f)) {
    iVar3 = (*pcVar9)();
    if (iVar3 % 0x32 == 0) {
      iVar3 = (*pcVar9)();
      local_20[0] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
      iVar3 = (*pcVar9)();
      local_20[2] = 0.0;
      iVar7 = 0;
      local_20[1] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
      do {
        local_170 = (int *)(local_20[iVar7] * 65536.0);
        uVar13 = FUN_0054a946();
        pcVar9 = rand_exref;
        local_50[iVar7 * 2] = (uint)uVar13;
        local_50[iVar7 * 2 + 1] = (uint)(uVar13 >> 0x20);
        iVar7 = iVar7 + 1;
      } while (iVar7 < 3);
      local_50[6] = *(uint *)(param_1 + 0x10) + local_50[0];
      local_34 = *(int *)(param_1 + 0x14) + local_50[1] +
                 (uint)CARRY4(*(uint *)(param_1 + 0x10),local_50[0]);
      local_30 = *(uint *)(param_1 + 0x18) + local_50[2];
      local_2c = *(int *)(param_1 + 0x1c) + local_50[3] +
                 (uint)CARRY4(*(uint *)(param_1 + 0x18),local_50[2]);
      local_28 = *(uint *)(param_1 + 0x20) + local_50[4];
      local_24 = *(int *)(param_1 + 0x24) + local_50[5] +
                 (uint)CARRY4(*(uint *)(param_1 + 0x20),local_50[4]);
      fVar14 = 0.75;
      pvVar15 = local_178;
      iVar3 = rand();
      fVar12 = ((float)iVar3 * 360.0) / 32767.0;
      puVar4 = local_50 + 6;
      iVar3 = FUN_0052bf40(*(byte *)(param_1 + 0x1a8) + 1,'\0');
      puVar6 = (undefined1 *)
               FUN_0052a760(local_168,(short)*(undefined4 *)(param_1 + 400),(char)iVar3);
      FUN_004d2810(puVar6,puVar4,fVar12,fVar14,pvVar15);
    }
    if ((*(ushort *)(param_1 + 0x7e) & 0x18) == 0) {
      fVar11 = FUN_00410f00();
      local_170 = (int *)((float)fVar11 * 10.0);
      iVar3 = (*pcVar9)();
      fVar12 = (((float)iVar3 * 2.0) / 32767.0 + 1.0) * (float)local_170;
      if ((*(ushort *)(param_1 + 0x7e) & 0x200) != 0) {
        fVar12 = fVar12 * 10.0;
      }
      local_17c = (int)fVar12 / 100;
      iVar3 = (int)fVar12 % 100;
      local_170 = (int *)(local_17c / 100);
      local_17c = local_17c % 100;
      if (iVar3 != 0) {
        FUN_00406fd0((undefined2 *)local_168);
        local_168[0] = 0xc;
        local_168[1] = 0;
        local_15c = CONCAT11(10,(undefined1)local_15c);
        local_158 = (undefined2)iVar3;
        iVar3 = (*pcVar9)();
        local_20[0] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
        iVar3 = (*pcVar9)();
        local_20[1] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
        local_20[2] = 0.0;
        FUN_00402510((int)(local_50 + 6));
        fVar14 = 0.75;
        pvVar15 = local_178;
        iVar3 = (*pcVar9)();
        fVar12 = ((float)iVar3 * 360.0) / 32767.0;
        puVar4 = FUN_00402cb0((void *)(param_1 + 0x10),local_50,local_50 + 6);
        FUN_004d2810(local_168,puVar4,fVar12,fVar14,pvVar15);
      }
      if (local_17c != 0) {
        FUN_00406fd0((undefined2 *)local_168);
        local_168[0] = 0xc;
        local_168[1] = 0;
        local_15c = CONCAT11(0xc,(undefined1)local_15c);
        local_158 = (undefined2)local_17c;
        iVar3 = (*pcVar9)();
        local_20[0] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
        iVar3 = (*pcVar9)();
        local_20[1] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
        local_20[2] = 0.0;
        FUN_00402510((int)(local_50 + 6));
        fVar14 = 0.75;
        pvVar15 = local_178;
        iVar3 = (*pcVar9)();
        fVar12 = ((float)iVar3 * 360.0) / 32767.0;
        puVar4 = FUN_00402cb0((void *)(param_1 + 0x10),local_50,local_50 + 6);
        FUN_004d2810(local_168,puVar4,fVar12,fVar14,pvVar15);
      }
      piVar8 = local_170;
      if (local_170 != (int *)0x0) {
        FUN_00406fd0((undefined2 *)local_168);
        local_168[0] = 0xc;
        local_168[1] = 0;
        local_15c = CONCAT11(0xb,(undefined1)local_15c);
        local_158 = SUB42(piVar8,0);
        iVar3 = (*pcVar9)();
        local_20[0] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
        iVar3 = (*pcVar9)();
        local_20[1] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
        local_20[2] = 0.0;
        FUN_00402510((int)(local_50 + 6));
        fVar14 = 0.75;
        pvVar15 = local_178;
        iVar3 = (*pcVar9)();
        fVar12 = ((float)iVar3 * 360.0) / 32767.0;
        puVar4 = FUN_00402cb0((void *)(param_1 + 0x10),local_50,local_50 + 6);
LAB_004d3ab6:
        FUN_004d2810(local_168,puVar4,fVar12,fVar14,pvVar15);
      }
    }
    else {
      iVar3 = (*pcVar9)();
      iVar3 = iVar3 % 1000 + (uint)*(byte *)(param_1 + 0x1a8) * 0x14;
      if (iVar3 < 700) {
        local_16c = 0.0;
      }
      else if (iVar3 < 0x3b6) {
        local_16c = 1.4013e-45;
      }
      else {
        local_16c = (float)((0x3e6 < iVar3) + 2);
      }
      if (((*(ushort *)(param_1 + 0x7e) & 0x200) != 0) &&
         (local_16c = (float)((int)local_16c + 1), 3 < (uint)local_16c)) {
        local_16c = 4.2039e-45;
      }
      iVar3 = (*pcVar9)();
      if ((iVar3 % 0x14 == 0) && (local_16c != 0.0)) {
        FUN_00406fd0((undefined2 *)local_168);
        local_168[0] = 0xe;
        local_164 = (*pcVar9)();
        local_158 = *(undefined2 *)(param_1 + 400);
        local_15c = CONCAT11(local_15c._1_1_,SUB41(local_16c,0));
        iVar3 = (*pcVar9)();
        local_20[0] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
        iVar3 = (*pcVar9)();
        local_20[1] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
        local_20[2] = 0.0;
        FUN_00402510((int)(local_50 + 6));
        fVar14 = 0.75;
        pvVar15 = local_178;
        iVar3 = (*pcVar9)();
        fVar12 = ((float)iVar3 * 360.0) / 32767.0;
        puVar4 = FUN_00402cb0((void *)(param_1 + 0x10),local_50,local_50 + 6);
        goto LAB_004d3ab6;
      }
    }
  }
  if (*(char *)(param_1 + 0x60) == '\x01') {
    iVar3 = *(int *)(param_1 + 0x11dc);
    if ((iVar3 != *(int *)(param_1 + 0x11e0)) &&
       (local_16c = 0.0, 0 < (*(int *)(param_1 + 0x11e0) - iVar3) / 0xc)) {
      local_17c = 0;
      do {
        piVar8 = *(int **)(local_17c + iVar3);
        local_170 = piVar8;
        if (piVar8 != *(int **)(local_17c + 4 + *(int *)(param_1 + 0x11dc))) {
          do {
            piVar1 = piVar8 + 1;
            if ((((char)piVar8[1] != '\0') && (*piVar8 != 0)) &&
               (local_18c = 0, local_170 = piVar8, 0 < *piVar8)) {
              do {
                if (((char)*piVar1 != '\x01') || (*(char *)((int)piVar8 + 5) != '\x01')) {
                  iVar3 = (*pcVar9)();
                  local_20[0] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
                  iVar3 = (*pcVar9)();
                  local_20[2] = 0.0;
                  iVar7 = 0;
                  local_20[1] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
                  do {
                    uVar13 = FUN_0054a946();
                    pcVar9 = rand_exref;
                    local_50[iVar7 * 2] = (uint)uVar13;
                    local_50[iVar7 * 2 + 1] = (uint)(uVar13 >> 0x20);
                    iVar7 = iVar7 + 1;
                  } while (iVar7 < 3);
                  local_50[6] = *(uint *)(param_1 + 0x10) + local_50[0];
                  local_34 = *(int *)(param_1 + 0x14) + local_50[1] +
                             (uint)CARRY4(*(uint *)(param_1 + 0x10),local_50[0]);
                  local_30 = *(uint *)(param_1 + 0x18) + local_50[2];
                  local_2c = *(int *)(param_1 + 0x1c) + local_50[3] +
                             (uint)CARRY4(*(uint *)(param_1 + 0x18),local_50[2]);
                  local_28 = *(uint *)(param_1 + 0x20) + local_50[4];
                  local_24 = *(int *)(param_1 + 0x24) + local_50[5] +
                             (uint)CARRY4(*(uint *)(param_1 + 0x20),local_50[4]);
                  fVar12 = 0.75;
                  pvVar15 = local_178;
                  iVar3 = rand();
                  FUN_004d2810((undefined1 *)piVar1,local_50 + 6,((float)iVar3 * 360.0) / 32767.0,
                               fVar12,pvVar15);
                  piVar8 = local_170;
                }
                local_18c = local_18c + 1;
              } while (local_18c < *piVar8);
            }
            piVar8 = piVar8 + 0x47;
            local_170 = piVar8;
          } while (piVar8 != *(int **)(local_17c + 4 + *(int *)(param_1 + 0x11dc)));
        }
        iVar3 = *(int *)(param_1 + 0x11dc);
        local_16c = (float)((int)local_16c + 1);
        local_17c = local_17c + 0xc;
      } while ((int)local_16c < (*(int *)(param_1 + 0x11e0) - iVar3) / 0xc);
    }
  }
  if (local_188 != (void *)0x0) {
    operator_delete(local_188);
  }
LAB_004d3d18:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004d5740 @ 004d5740  kind=gamemisc  attributed-by=none  size=806 */

void __thiscall FUN_004d5740(void *this,uint *param_1,float *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  void *this_00;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  uint local_50 [13];
  int local_1c;
  int local_18;
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_14 = 0.0;
  local_10 = 0.0;
  local_c = 0.2;
  iVar8 = 0;
  do {
    uVar10 = FUN_0054a946();
    local_50[iVar8 * 2 + 6] = (uint)uVar10;
    local_50[iVar8 * 2 + 7] = (uint)(uVar10 >> 0x20);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 3);
  iVar8 = 0;
  local_14 = *param_2 * 0.5;
  local_10 = param_2[1] * 0.5;
  local_c = param_2[2] * 0.5;
  do {
    uVar10 = FUN_0054a946();
    local_50[iVar8 * 2] = (uint)uVar10;
    local_50[iVar8 * 2 + 1] = (uint)(uVar10 >> 0x20);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 3);
  uVar9 = *param_1;
  uVar7 = param_1[1];
  uVar6 = param_1[2];
  uVar5 = param_1[3];
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  local_50[0xc] = (uVar9 - local_50[0]) - local_50[6];
  local_1c = (((uVar7 - local_50[1]) - (uint)(uVar9 < local_50[0])) - local_50[7]) -
             (uint)(uVar9 - local_50[0] < local_50[6]);
  local_18 = (uVar6 - local_50[2]) - local_50[8];
  local_14 = (float)((((uVar5 - local_50[3]) - (uint)(uVar6 < local_50[2])) - local_50[9]) -
                    (uint)(uVar6 - local_50[2] < local_50[8]));
  local_10 = (float)((uVar1 - local_50[4]) - local_50[10]);
  local_c = (float)((((uVar2 - local_50[5]) - (uint)(uVar1 < local_50[4])) - local_50[0xb]) -
                   (uint)(uVar1 - local_50[4] < local_50[10]));
  FUN_00405450((int *)(local_50 + 3),local_50 + 0xc);
  local_14 = *param_2 * 0.5;
  local_10 = param_2[1] * 0.5;
  iVar8 = 0;
  local_c = param_2[2] * 0.5;
  do {
    uVar10 = FUN_0054a946();
    local_50[iVar8 * 2 + 6] = (uint)uVar10;
    local_50[iVar8 * 2 + 7] = (uint)(uVar10 >> 0x20);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 3);
  local_68 = uVar9 + local_50[6];
  local_64 = uVar7 + local_50[7] + (uint)CARRY4(uVar9,local_50[6]);
  local_60 = uVar6 + local_50[8];
  local_5c = uVar5 + local_50[9] + (uint)CARRY4(uVar6,local_50[8]);
  local_58 = uVar1 + local_50[10];
  local_54 = uVar2 + local_50[0xb] + (uint)CARRY4(uVar1,local_50[10]);
  FUN_00405450((int *)&local_14,&local_68);
  fVar4 = local_10;
  uVar9 = local_50[4];
  uVar7 = local_50[3];
  if ((int)local_50[3] <= (int)local_14) {
    do {
      uVar6 = uVar9;
      if ((int)uVar9 <= (int)fVar4) {
        do {
          if (((((int)uVar7 < 0) || ((int)uVar9 < 0)) || (0xffffff < (int)uVar7)) ||
             ((0xffffff < (int)uVar9 ||
              (iVar8 = FUN_00406290(this,(int)(uVar7 + ((int)uVar7 >> 0x1f & 0xffU)) >> 8,
                                    (int)(uVar9 + ((int)uVar9 >> 0x1f & 0xffU)) >> 8), iVar8 == 0)))
             ) {
LAB_004d5a1f:
            puVar3 = &DAT_00584248;
          }
          else {
            uVar6 = uVar9 & 0x800000ff;
            if ((int)uVar6 < 0) {
              uVar6 = (uVar6 - 1 | 0xffffff00) + 1;
            }
            uVar5 = uVar7 & 0x800000ff;
            if ((int)uVar5 < 0) {
              uVar5 = (uVar5 - 1 | 0xffffff00) + 1;
            }
            this_00 = (void *)((uVar6 * 0x100 + uVar5) * 0x20 + *(int *)(iVar8 + 0xa8));
            if ((this_00 == (void *)0x0) ||
               (iVar8 = *(int *)((int)this_00 + 0x10), (int)local_50[5] < iVar8)) goto LAB_004d5a1f;
            if ((int)local_50[5] < *(int *)((int)this_00 + 0x1c) + iVar8) {
              puVar3 = FUN_00405f20(this_00,local_50[5] - iVar8);
              if ((((puVar3[3] & 0x1f) == 0) && ((int)local_50[5] < 1)) && ((puVar3[3] & 0x40) == 0)
                 ) {
                puVar3 = &DAT_00584240;
              }
            }
            else {
              puVar3 = &DAT_00584240;
              if (0 < (int)local_50[5]) {
                puVar3 = &DAT_00584244;
              }
            }
          }
          if (((puVar3[3] & 0x1f) != 0) && ((puVar3[3] & 0x1f) != 2)) {
            __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
            return;
          }
          uVar9 = uVar9 + 1;
          fVar4 = local_10;
          uVar6 = local_50[4];
        } while ((int)uVar9 <= (int)local_10);
      }
      uVar7 = uVar7 + 1;
      uVar9 = uVar6;
    } while ((int)uVar7 <= (int)local_14);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004d5c80 @ 004d5c80  kind=gamemisc  attributed-by=none  size=166 */

float10 __thiscall FUN_004d5c80(void *param_1,uint *param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = __alldiv(param_2[4],param_2[5],0x10000,0);
  uVar4 = __alldiv(param_2[2],param_2[3],0x10000,0);
  uVar5 = __alldiv(*param_2,param_2[1],0x10000,0);
  pbVar1 = FUN_00405fd0(param_1,(uint)uVar5,(uint)uVar4,(int)uVar3,0);
  bVar2 = pbVar1[3] & 0x1f;
  if (bVar2 == 0xd) {
    bVar2 = 0xff;
  }
  else if (((pbVar1[3] & 0x1f) == 0) || (bVar2 == 2)) {
    bVar2 = *pbVar1;
    if (bVar2 < 5) {
      bVar2 = 5;
    }
  }
  else {
    bVar2 = 0;
  }
  return (float10)((float)bVar2 / 255.0);
}


/* FUN_004d61c0 @ 004d61c0  kind=gamemisc  attributed-by=none  size=395 */

void __thiscall FUN_004d61c0(void *this,uint *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *local_10;
  int local_c;
  int local_8;
  
  FUN_00530600((void *)((int)this + 4),&local_8,param_1);
  if (local_8 == *(int *)((int)this + 4)) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(local_8 + 0x18);
  }
  FUN_00530600((void *)((int)this + 4),&local_8,param_1 + 2);
  if (local_8 == *(int *)((int)this + 4)) {
    local_8 = 0;
  }
  else {
    local_8 = *(int *)(local_8 + 0x18);
  }
  if ((iVar3 != 0) && (local_8 != 0)) {
    if (local_8 == *(int *)((int)this + 0xb8)) {
      local_10 = (uint *)(*(int *)((int)this + 0xb8) + 0x11c8);
      FUN_00530600((void *)((int)this + 4),&local_c,local_10);
      if ((local_c != *(int *)((int)this + 4)) && (*(int *)(local_c + 0x18) != 0)) {
        uVar2 = FUN_00405420(this,local_10);
        *(undefined4 *)(uVar2 + 0x16c) = 0;
        uVar2 = FUN_00405420(this,(uint *)(*(int *)((int)this + 0xb8) + 0x11c8));
        FUN_004f8520((int *)(uVar2 + 0x13a4));
      }
      iVar1 = *(int *)((int)this + 0xb8);
      *(undefined4 *)(iVar1 + 0x11d0) = 0;
      *(undefined4 *)(iVar1 + 0x11d4) = 0;
    }
    iVar1 = *(int *)((int)this + 0xb8);
    if (((iVar1 != 0) && (iVar1 == iVar3)) && (*(char *)(local_8 + 0x60) == '\x01')) {
      *(int *)(iVar1 + 0x194) = *(int *)(iVar1 + 0x194) + param_1[5];
      FUN_00412550(*(int *)((int)this + 0xb8));
    }
    if (*(char *)((int)this + 0xb4) == '\0') {
      FUN_00530600((void *)((int)this + 4),(int *)&local_10,(uint *)(iVar3 + 0x11c8));
      if (((local_10 != *(uint **)((int)this + 4)) && (uVar2 = local_10[6], uVar2 != 0)) &&
         (0.0 < *(float *)(uVar2 + 0x16c))) {
        *(int *)(uVar2 + 0x194) = *(int *)(uVar2 + 0x194) + param_1[5];
        FUN_00412550(uVar2);
        *(undefined4 *)(iVar3 + 0x1024) = *(undefined4 *)(uVar2 + 0x194);
        *(undefined2 *)(iVar3 + 0x1030) = *(undefined2 *)(uVar2 + 400);
        FUN_00402a70((void *)(iVar3 + 0x1d48),(undefined1 *)(iVar3 + 0x1020));
      }
    }
  }
  return;
}


/* FUN_004d7960 @ 004d7960  kind=gamemisc  attributed-by=none  size=131 */

void __thiscall FUN_004d7960(void *this,int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if ((((-1 < param_1) && (-1 < param_2)) && (param_1 < 0x400)) && (param_2 < 0x400)) {
    piVar1 = (int *)((int)this + (param_1 * 0x400 + 0x2f + param_2) * 4);
    puVar2 = (undefined4 *)*piVar1;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_004d7c50(this,param_1,param_2);
      EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x8000c0));
      EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x8000d8));
      *piVar1 = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x8000d8));
      LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x8000c0));
      (**(code **)*puVar2)(1);
    }
  }
  return;
}


/* FUN_004d79f0 @ 004d79f0  kind=gamemisc  attributed-by=none  size=230 */

void __thiscall FUN_004d79f0(void *this,uint param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = (int)(param_1 + ((int)param_1 >> 0x1f & 0x3fU)) >> 6;
  iVar4 = (int)(((int)param_2 >> 0x1f & 0x3fU) + param_2) >> 6;
  if ((((-1 < iVar2) && (-1 < iVar4)) && (iVar2 < 0x400)) &&
     ((iVar4 < 0x400 &&
      (iVar2 = *(int *)((int)this + (iVar2 * 0x400 + iVar4) * 4 + 0xbc), iVar2 != 0)))) {
    uVar6 = param_1 & 0x8000003f;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xffffffc0) + 1;
    }
    uVar5 = param_2 & 0x8000003f;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xffffffc0) + 1;
    }
    piVar3 = (int *)(iVar2 + (uVar6 * 0x40 + uVar5) * 4 + 0x10018);
    puVar1 = (undefined4 *)*piVar3;
    if (puVar1 != (undefined4 *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x8000d8));
      EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x8000c0));
      *piVar3 = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x8000c0));
      LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x8000d8));
      if (*(char *)((int)this + 0xb4) == '\0') {
        FUN_004d81b0(this,(int)puVar1);
      }
      (**(code **)*puVar1)(1);
    }
  }
  return;
}


/* FUN_004d7ae0 @ 004d7ae0  kind=gamemisc  attributed-by=none  size=364 */

void FUN_004d7ae0(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  void *this;
  int *piVar8;
  int *local_20;
  undefined4 local_1c;
  int *local_18;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00554a68;
  local_10 = ExceptionList;
  uVar6 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = 0;
  local_20 = (int *)FUN_004ce660((undefined4 *)0x0,(undefined4 *)0x0);
  local_8 = 0;
  piVar1 = (int *)((int)local_14 + 4);
  piVar8 = (int *)**(int **)((int)local_14 + 4);
  this = local_14;
  local_18 = piVar8;
  if (piVar8 != *(int **)((int)local_14 + 4)) {
    do {
      iVar3 = piVar8[6];
      if (((((iVar3 != 0) && (*(char *)(iVar3 + 0x60) != '\0')) &&
           (*(char *)(iVar3 + 0x60) != '\x05')) &&
          ((iVar7 = FUN_00406290(this,*(uint *)(iVar3 + 0x1b0),*(uint *)(iVar3 + 0x1b4)),
           this = local_14, iVar7 != 0 && (iVar3 = *(int *)(iVar3 + 0x1b8), -1 < iVar3)))) &&
         (iVar3 < *(int *)(iVar7 + 0x1c) - *(int *)(iVar7 + 0x18) >> 2)) {
        *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x18) + iVar3 * 4) + 0x38) = 0;
        FUN_004d6620(&local_20,&local_18);
        this = local_14;
        if ((undefined4 *)piVar8[6] != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)piVar8[6])(1,uVar6);
          this = local_14;
        }
      }
      if (*(char *)((int)piVar8 + 0xd) == '\0') {
        piVar4 = (int *)piVar8[2];
        if (*(char *)((int)piVar4 + 0xd) == '\0') {
          cVar2 = *(char *)(*piVar4 + 0xd);
          piVar8 = piVar4;
          piVar4 = (int *)*piVar4;
          while (local_18 = piVar8, cVar2 == '\0') {
            cVar2 = *(char *)(*piVar4 + 0xd);
            piVar8 = piVar4;
            piVar4 = (int *)*piVar4;
          }
        }
        else {
          cVar2 = *(char *)(piVar8[1] + 0xd);
          piVar5 = (int *)piVar8[1];
          piVar4 = piVar8;
          while ((piVar8 = piVar5, local_18 = piVar8, cVar2 == '\0' && (piVar4 == (int *)piVar8[2]))
                ) {
            cVar2 = *(char *)(piVar8[1] + 0xd);
            piVar5 = (int *)piVar8[1];
            piVar4 = piVar8;
          }
        }
      }
    } while (piVar8 != (int *)*piVar1);
  }
  piVar4 = local_20;
  for (piVar8 = (int *)*local_20; piVar8 != piVar4; piVar8 = (int *)*piVar8) {
    FUN_0040a1d0(piVar1,&local_18,(int *)piVar8[2]);
  }
  piVar1 = (int *)*piVar4;
  *piVar4 = (int)piVar4;
  piVar4[1] = (int)piVar4;
  while (piVar1 != piVar4) {
    piVar8 = (int *)*piVar1;
    operator_delete(piVar1);
    piVar1 = piVar8;
  }
  operator_delete(piVar4);
  ExceptionList = local_10;
  return;
}


/* FUN_004d8c90 @ 004d8c90  kind=gamemisc  attributed-by=none  size=294 */

void FUN_004d8c90(int *param_1,int param_2,char param_3)

{
  undefined4 *puVar1;
  int iVar2;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  if ((char)param_1[0xc] != param_3) {
    iVar2 = 1000 - param_1[0xd];
    param_1[0xd] = iVar2;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    param_1[0xd] = iVar2;
    iVar2 = *param_1;
    *(char *)(param_1 + 0xc) = param_3;
    if (iVar2 == 5) {
      local_14 = 0x33;
    }
    else if (iVar2 == 6) {
      if (param_3 == '\0') goto LAB_004d8da5;
      local_14 = 0x35;
    }
    else if (iVar2 == 7) {
      if (param_3 == '\0') goto LAB_004d8da5;
      local_14 = 0x34;
    }
    else {
      local_14 = 0x36;
    }
    local_10 = 0x3f800000;
    local_c = 0x3f800000;
    local_20 = (float)*(longlong *)(param_1 + 2) * 1.5258789e-05;
    local_1c = (float)*(longlong *)(param_1 + 4) * 1.5258789e-05;
    puVar1 = *(undefined4 **)(param_2 + 8);
    local_18 = (float)*(longlong *)(param_1 + 6) * 1.5258789e-05;
    iVar2 = FUN_004f3ba0(puVar1,(undefined4 *)puVar1[1],&local_20);
    if (*(int *)(param_2 + 0xc) == 0x7fffffe) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
    puVar1[1] = iVar2;
    **(int **)(iVar2 + 4) = iVar2;
  }
LAB_004d8da5:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004d8e10 @ 004d8e10  kind=gamemisc  attributed-by=none  size=29 */

void FUN_004d8e10(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return;
}


/* FUN_004d9160 @ 004d9160  kind=gamemisc  attributed-by=none  size=676 */

void __thiscall FUN_004d9160(void *this,int param_1,int *param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void **ppvVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054bae8;
  if (param_1 < 0) {
    param_1 = 0;
  }
  piVar12 = param_2;
  if ((int)param_2 < 0) {
    piVar12 = (int *)0x0;
  }
  if ((int)param_3 < 0) {
    param_3 = 0;
  }
  if ((int)param_4 < 0) {
    param_4 = 0;
  }
  iVar5 = param_3 + ((int)param_3 >> 0x1f & 0xffU);
  uVar6 = (int)((int)piVar12 + ((int)piVar12 >> 0x1f & 0xffU)) >> 8;
  uVar10 = (int)((param_1 >> 0x1f & 0xffU) + param_1) >> 8;
  iVar1 = ((int)param_4 >> 0x1f & 0xffU) + param_4;
  ppvVar4 = &local_10;
  param_4 = uVar6;
  do {
    local_10 = ExceptionList;
    param_3 = uVar6;
    if (iVar5 >> 8 < (int)uVar10) {
      return;
    }
    for (; ExceptionList = ppvVar4, (int)param_3 <= iVar1 >> 8; param_3 = param_3 + 1) {
      if ((((-1 < (int)uVar10) && (-1 < (int)param_3)) && ((int)uVar10 < 0x10000)) &&
         ((int)param_3 < 0x10000)) {
        iVar7 = (int)(uVar10 + ((int)uVar10 >> 0x1f & 0x3fU)) >> 6;
        iVar11 = (int)(((int)param_3 >> 0x1f & 0x3fU) + param_3) >> 6;
        if (((-1 < iVar7) && (-1 < iVar11)) &&
           ((iVar7 < 0x400 &&
            ((iVar11 < 0x400 &&
             (iVar7 = *(int *)((int)this + (iVar7 * 0x400 + iVar11) * 4 + 0xbc), iVar7 != 0)))))) {
          uVar6 = uVar10 & 0x8000003f;
          if ((int)uVar6 < 0) {
            uVar6 = (uVar6 - 1 | 0xffffffc0) + 1;
          }
          uVar8 = param_3 & 0x8000003f;
          if ((int)uVar8 < 0) {
            uVar8 = (uVar8 - 1 | 0xffffffc0) + 1;
          }
          iVar7 = *(int *)(iVar7 + 0x10018 + (uVar6 * 0x40 + uVar8) * 4);
          if (iVar7 != 0) {
            local_20 = 0;
            puVar9 = (undefined4 *)FUN_004ce660((undefined4 *)0x0,(undefined4 *)0x0);
            local_8 = 0;
            piVar12 = (int *)**(int **)(iVar7 + 4);
            param_2 = piVar12;
            if (piVar12 != *(int **)(iVar7 + 4)) {
              do {
                if (((*(byte *)(piVar12 + 0x10) & 2) != 0) &&
                   (param_2 = piVar12,
                   iVar11 = FUN_00406050(this,piVar12[4],piVar12[5],piVar12[6],piVar12[7],
                                         piVar12[8] - 0x10000,
                                         piVar12[9] - (uint)((uint)piVar12[8] < 0x10000),0),
                   (*(byte *)(iVar11 + 3) & 0x1f) == 0)) {
                  iVar11 = FUN_0052dfb0(puVar9,(undefined4 *)puVar9[1],&param_2);
                  if (local_20 == 0x15555554) {
                    /* WARNING: Subroutine does not return */
                    std::_Xlength_error("list<T> too long");
                  }
                  puVar9[1] = iVar11;
                  local_20 = local_20 + 1;
                  **(int **)(iVar11 + 4) = iVar11;
                }
                piVar12 = (int *)*piVar12;
                param_2 = piVar12;
              } while (piVar12 != (int *)*(int *)(iVar7 + 4));
            }
            for (puVar2 = (undefined4 *)*puVar9; puVar2 != puVar9; puVar2 = (undefined4 *)*puVar2) {
              piVar12 = (int *)puVar2[2];
              if (piVar12 != *(int **)(iVar7 + 4)) {
                *(int *)piVar12[1] = *piVar12;
                *(int *)(*piVar12 + 4) = piVar12[1];
                operator_delete(piVar12);
                *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + -1;
              }
            }
            puVar2 = (undefined4 *)*puVar9;
            *puVar9 = puVar9;
            local_8 = 0xffffffff;
            puVar9[1] = puVar9;
            while (puVar2 != puVar9) {
              puVar3 = (undefined4 *)*puVar2;
              operator_delete(puVar2);
              puVar2 = puVar3;
            }
            operator_delete(puVar9);
          }
        }
      }
      uVar6 = param_4;
      ppvVar4 = ExceptionList;
    }
    uVar10 = uVar10 + 1;
    ppvVar4 = ExceptionList;
    ExceptionList = local_10;
  } while( true );
}


/* FUN_004d9410 @ 004d9410  kind=gamemisc  attributed-by=none  size=770 */

void __thiscall FUN_004d9410(void *this,int *param_1,uint *param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  uint uVar17;
  int iVar18;
  float fVar19;
  undefined8 uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  float local_30;
  int local_2c;
  int iStack_28;
  int local_24;
  uint local_20;
  int iStack_1c;
  uint local_18;
  int iStack_14;
  uint local_10;
  int iStack_c;
  
  uVar8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  uVar3 = param_2[1];
  uVar4 = *param_2;
  uVar20 = __alldiv(uVar4,uVar3,0x10000,0);
  uVar5 = param_2[3];
  uVar6 = param_2[2];
  iVar15 = (int)(((int)uVar20 >> 0x1f & 7U) + (int)uVar20) >> 3;
  uVar20 = __alldiv(uVar6,uVar5,0x10000,0);
  fVar19 = -1.0;
  uVar17 = iVar15 - 1;
  iVar15 = iVar15 + 1;
  iVar9 = (int)((int)uVar20 + ((int)uVar20 >> 0x1f & 7U)) >> 3;
  local_30 = -1.0;
  local_2c = 0;
  iStack_28 = 0;
  local_24 = -1;
  if ((int)uVar17 <= iVar15) {
    uVar1 = iVar9 - 1;
    iVar18 = -1;
    uVar7 = uVar1;
    do {
      for (; (int)uVar7 <= iVar9 + 1; uVar7 = uVar7 + 1) {
        if ((((-1 < (int)uVar17) && (-1 < (int)uVar7)) && ((int)uVar17 < 0x200000)) &&
           (((int)uVar7 < 0x200000 &&
            (iVar10 = FUN_00406290(this,(int)(uVar17 + ((int)uVar17 >> 0x1f & 0x1fU)) >> 5,
                                   (int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5),
            fVar19 = local_30, iVar10 != 0)))) {
          uVar13 = uVar7 & 0x8000001f;
          if ((int)uVar13 < 0) {
            uVar13 = (uVar13 - 1 | 0xffffffe0) + 1;
          }
          uVar12 = uVar17 & 0x8000001f;
          if ((int)uVar12 < 0) {
            uVar12 = (uVar12 - 1 | 0xffffffe0) + 1;
          }
          piVar2 = (int *)(*(int *)(iVar10 + 0xac) + (uVar13 * 0x20 + uVar12) * 8);
          if (piVar2 != (int *)0x0) {
            piVar2 = (int *)*piVar2;
            piVar16 = (int *)*piVar2;
            if (piVar16 != piVar2) {
              uVar13 = param_2[4];
              uVar12 = param_2[5];
              do {
                iVar10 = piVar16[2];
                local_20 = (uint)*(undefined8 *)(iVar10 + 8);
                iStack_1c = (int)((ulonglong)*(undefined8 *)(iVar10 + 8) >> 0x20);
                iVar11 = (iStack_1c - uVar3) - (uint)(local_20 < uVar4);
                local_18 = (uint)*(undefined8 *)(iVar10 + 0x10);
                iStack_14 = (int)((ulonglong)*(undefined8 *)(iVar10 + 0x10) >> 0x20);
                iVar18 = (iStack_14 - uVar5) - (uint)(local_18 < uVar6);
                local_10 = (uint)*(undefined8 *)(iVar10 + 0x18);
                iStack_c = (int)((ulonglong)*(undefined8 *)(iVar10 + 0x18) >> 0x20);
                uVar14 = local_10 - uVar13;
                iVar10 = (iStack_c - uVar12) - (uint)(local_10 < uVar13);
                lVar21 = __allmul(local_20 - uVar4,iVar11,local_20 - uVar4,iVar11);
                lVar21 = __alldiv((uint)lVar21,(uint)((ulonglong)lVar21 >> 0x20),0x10000,0);
                lVar22 = __allmul(uVar14,iVar10,uVar14,iVar10);
                lVar22 = __alldiv((uint)lVar22,(uint)((ulonglong)lVar22 >> 0x20),0x10000,0);
                lVar23 = __allmul(local_18 - uVar6,iVar18,local_18 - uVar6,iVar18);
                lVar23 = __alldiv((uint)lVar23,(uint)((ulonglong)lVar23 >> 0x20),0x10000,0);
                fVar19 = (float)(lVar21 + lVar23 + lVar22) * 1.5258789e-05;
                if ((local_24 < 0) || (fVar19 < local_30)) {
                  local_2c = piVar16[3];
                  iStack_28 = piVar16[4];
                  local_24 = piVar16[5];
                  local_30 = fVar19;
                }
                piVar16 = (int *)*piVar16;
                iVar18 = local_24;
                fVar19 = local_30;
              } while (piVar16 != piVar2);
            }
          }
        }
      }
      uVar17 = uVar17 + 1;
      uVar7 = uVar1;
    } while ((int)uVar17 <= iVar15);
    if ((0.0 <= fVar19) && (fVar19 <= 16.0)) {
      *param_1 = local_2c;
      param_1[2] = iVar18;
      param_1[1] = iStack_28;
      __security_check_cookie(uVar8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = -1;
  __security_check_cookie(uVar8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004d9720 @ 004d9720  kind=gamemisc  attributed-by=none  size=571 */

float * FUN_004d9720(float *param_1)

{
  float10 fVar1;
  double dVar2;
  ulonglong uVar3;
  undefined8 local_1c;
  
  uVar3 = FUN_0054a946();
  dVar2 = (double)(longlong)uVar3 * 1.52587890625e-05;
  uVar3 = FUN_0054a946();
  fVar1 = FUN_004d5d30(SUB84((double)(longlong)uVar3 * 1.52587890625e-05,0),
                       (int)((ulonglong)((double)(longlong)uVar3 * 1.52587890625e-05) >> 0x20),dVar2
                      );
  *param_1 = (float)fVar1 * 2.0;
  uVar3 = FUN_0054a946();
  local_1c = CONCAT44(-(uint)(0x20f60000 < (uint)uVar3) - (int)(uVar3 >> 0x20),
                      0x20f60000 - (uint)uVar3);
  dVar2 = (double)local_1c * 1.52587890625e-05;
  uVar3 = FUN_0054a946();
  local_1c = CONCAT44(-(uint)(0xd7f0000 < (uint)uVar3) - (int)(uVar3 >> 0x20),
                      0xd7f0000 - (uint)uVar3);
  fVar1 = FUN_004d5d30(SUB84((double)local_1c * 1.52587890625e-05,0),
                       (int)((ulonglong)((double)local_1c * 1.52587890625e-05) >> 0x20),dVar2);
  param_1[1] = (float)fVar1 * 2.0;
  uVar3 = FUN_0054a946();
  local_1c = CONCAT44(-(uint)(0x14e10000 < (uint)uVar3) - (int)(uVar3 >> 0x20),
                      0x14e10000 - (uint)uVar3);
  dVar2 = (double)local_1c * 1.52587890625e-05;
  uVar3 = FUN_0054a946();
  local_1c = CONCAT44(-(uint)(0x108a0000 < (uint)uVar3) - (int)(uVar3 >> 0x20),
                      0x108a0000 - (uint)uVar3);
  fVar1 = FUN_004d5d30(SUB84((double)local_1c * 1.52587890625e-05,0),
                       (int)((ulonglong)((double)local_1c * 1.52587890625e-05) >> 0x20),dVar2);
  param_1[2] = (float)fVar1 + 0.5;
  return param_1;
}


/* FUN_004d9a10 @ 004d9a10  kind=gamemisc  attributed-by=none  size=152 */

undefined4 * __thiscall FUN_004d9a10(void *this,int *param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00554c71;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = FUN_004daed0(this);
  *(undefined2 *)(puVar1 + 3) = 0;
  local_8 = 1;
  if (puVar1 + 4 != (undefined4 *)0x0) {
    FUN_004daa80(puVar1 + 4,param_1);
    puVar1[7] = param_1[3];
    puVar1[8] = param_1[4];
    puVar1[9] = param_1[5];
    puVar1[10] = param_1[6];
    puVar1[0xb] = param_1[7];
    puVar1[0xc] = param_1[8];
  }
  ExceptionList = local_10;
  return puVar1;
}


/* FUN_004d9be0 @ 004d9be0  kind=gamemisc  attributed-by=none  size=116 */

void __thiscall FUN_004d9be0(void *this,int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  iVar2 = *(int *)this;
  puVar7 = FUN_004d9d20(this,*(undefined4 **)(*param_1 + 4),iVar2,param_2);
  *(undefined4 **)(iVar2 + 4) = puVar7;
  piVar3 = *(int **)this;
  *(int *)((int)this + 4) = param_1[1];
  piVar4 = (int *)piVar3[1];
  if (*(char *)((int)piVar4 + 0xd) != '\0') {
    *piVar3 = (int)piVar3;
    *(int *)(*(int *)this + 8) = *(int *)this;
    return;
  }
  cVar1 = *(char *)(*piVar4 + 0xd);
  piVar6 = (int *)*piVar4;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*piVar6 + 0xd);
    piVar4 = piVar6;
    piVar6 = (int *)*piVar6;
  }
  *piVar3 = (int)piVar4;
  iVar2 = *(int *)(*(int *)this + 4);
  iVar5 = *(int *)(iVar2 + 8);
  cVar1 = *(char *)(iVar5 + 0xd);
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*(int *)(iVar5 + 8) + 0xd);
    iVar2 = iVar5;
    iVar5 = *(int *)(iVar5 + 8);
  }
  *(int *)(*(int *)this + 8) = iVar2;
  return;
}


/* FUN_004d9c60 @ 004d9c60  kind=gamemisc  attributed-by=none  size=159 */

undefined4 * __thiscall
FUN_004d9c60(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00554cc0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = *(undefined4 **)this;
  if (*(char *)((int)param_1 + 0xd) == '\0') {
    puVar1 = FUN_004d9a10(this,param_1 + 4);
    puVar1[1] = param_2;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 3);
    if (*(char *)((int)puVar3 + 0xd) != '\0') {
      puVar3 = puVar1;
    }
    local_8 = 0;
    puVar2 = FUN_004d9c60(this,(undefined4 *)*param_1,puVar1,param_3);
    *puVar1 = puVar2;
    puVar2 = FUN_004d9c60(this,(undefined4 *)param_1[2],puVar1,param_3);
    puVar1[2] = puVar2;
  }
  ExceptionList = local_10;
  return puVar3;
}


/* FUN_004d9d20 @ 004d9d20  kind=gamemisc  attributed-by=none  size=159 */

undefined4 * __thiscall
FUN_004d9d20(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00554ce0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = *(undefined4 **)this;
  if (*(char *)((int)param_1 + 0xd) == '\0') {
    puVar1 = FUN_004d9ac0(this,param_1 + 4);
    puVar1[1] = param_2;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 3);
    if (*(char *)((int)puVar3 + 0xd) != '\0') {
      puVar3 = puVar1;
    }
    local_8 = 0;
    puVar2 = FUN_004d9d20(this,(undefined4 *)*param_1,puVar1,param_3);
    *puVar1 = puVar2;
    puVar2 = FUN_004d9d20(this,(undefined4 *)param_1[2],puVar1,param_3);
    puVar1[2] = puVar2;
  }
  ExceptionList = local_10;
  return puVar3;
}


/* FUN_004da9c0 @ 004da9c0  kind=gamemisc  attributed-by=none  size=41 */

void __cdecl FUN_004da9c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return;
}


/* FUN_004da9f0 @ 004da9f0  kind=gamemisc  attributed-by=none  size=138 */

void __thiscall FUN_004da9f0(void *this,int *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  void *local_8;
  
  local_8 = this;
  while (param_1 != param_2) {
    piVar2 = *(int **)this;
    piVar3 = FUN_004d9a10(this,param_1 + 4);
    FUN_004da210(this,&local_8,piVar2,piVar3 + 4,piVar3);
    if (*(char *)((int)param_1 + 0xd) == '\0') {
      piVar2 = (int *)param_1[2];
      if (*(char *)((int)piVar2 + 0xd) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0xd);
        param_1 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0xd);
          param_1 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(param_1[1] + 0xd);
        piVar3 = (int *)param_1[1];
        piVar2 = param_1;
        while ((param_1 = piVar3, cVar1 == '\0' && (piVar2 == (int *)param_1[2]))) {
          cVar1 = *(char *)(param_1[1] + 0xd);
          piVar3 = (int *)param_1[1];
          piVar2 = param_1;
        }
      }
    }
  }
  return;
}


/* FUN_004dae20 @ 004dae20  kind=gamemisc  attributed-by=none  size=103 */

undefined4 __thiscall FUN_004dae20(void *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (0x3fffffff < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  pvVar1 = operator_new(param_1 * 4);
  if (pvVar1 != (void *)0x0) {
    *(void **)this = pvVar1;
    *(void **)((int)this + 4) = pvVar1;
    pvVar1 = (void *)((int)pvVar1 + param_1 * 4);
    *(void **)((int)this + 8) = pvVar1;
    return CONCAT31((int3)((uint)pvVar1 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_alloc();
}


/* FUN_004db1b0 @ 004db1b0  kind=gamemisc  attributed-by=none  size=76 */

void __thiscall FUN_004db1b0(void *this,int *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  
  puVar1 = *(uint **)this;
  puVar5 = puVar1;
  if (*(char *)((int)puVar1[1] + 0xd) == '\0') {
    puVar3 = (uint *)puVar1[1];
    do {
      if (puVar3[4] < *param_2) {
        puVar4 = (uint *)puVar3[2];
      }
      else {
        puVar4 = (uint *)*puVar3;
        puVar5 = puVar3;
      }
      puVar3 = puVar4;
    } while (*(char *)((int)puVar4 + 0xd) == '\0');
  }
  if ((puVar5 == puVar1) || (uVar2 = *param_2, param_2 = puVar5, uVar2 < puVar5[4])) {
    param_2 = puVar1;
  }
  *param_1 = (int)param_2;
  return;
}


/* FUN_004db200 @ 004db200  kind=gamemisc  attributed-by=none  size=7104 */

void FUN_004db200(void *param_1,int param_2)

{
  int **ppiVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint *puVar8;
  ulonglong uVar9;
  void *this;
  int *piVar10;
  undefined4 *puVar11;
  char cVar12;
  char cVar13;
  byte bVar14;
  int *piVar15;
  int *piVar16;
  uint *puVar17;
  undefined4 *puVar18;
  float *pfVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  float *pfVar23;
  uint *puVar24;
  int iVar25;
  undefined4 *puVar26;
  void *pvVar27;
  bool bVar28;
  double dVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  undefined1 auStack_3ec [3];
  byte local_3e9;
  void *local_3e8;
  float *local_3e4;
  float *local_3e0;
  int **local_3dc;
  uint *local_3d8;
  char local_3d2;
  char local_3d1;
  float *local_3d0;
  float local_3cc;
  float *local_3c8;
  int *local_3c4;
  undefined8 local_3c0;
  uint *local_3b8;
  int local_3b4;
  uint *local_3b0;
  int local_3ac;
  undefined8 local_3a8;
  uint *local_3a0;
  undefined4 *local_39c;
  int local_398;
  uint *local_394;
  undefined4 local_390;
  int local_38c;
  int *local_388;
  undefined4 local_384;
  float *local_380;
  void *local_37c;
  int *local_378;
  undefined4 local_374;
  undefined8 local_370;
  float *local_364;
  undefined4 local_360;
  undefined4 local_35c;
  undefined8 local_358;
  undefined8 local_350;
  float local_344;
  int *local_340;
  float local_33c;
  float local_338;
  uint *local_334;
  undefined4 local_330;
  undefined4 local_32c;
  undefined8 local_328;
  undefined8 local_320;
  uint *local_318;
  int local_314;
  uint *local_310;
  int local_30c;
  uint *local_308;
  int local_304;
  uint *local_300;
  int local_2fc;
  ulonglong local_2f8;
  uint *local_2f0;
  int local_2ec;
  ulonglong local_2e8;
  undefined4 local_2dc [2];
  undefined8 local_2d4;
  float local_2cc;
  float *local_2c8;
  float local_2c4;
  int local_2bc;
  int iStack_2b8;
  int local_2b4;
  int local_2b0;
  int iStack_2ac;
  int local_2a8;
  int iStack_2a4;
  int local_2a0;
  int iStack_29c;
  float local_298 [6];
  uint local_280;
  uint local_27c;
  uint local_278;
  float local_274 [2];
  float *local_26c;
  uint local_268 [8];
  float *local_248;
  float local_244 [3];
  uint local_238 [7];
  float local_21c [3];
  uint local_210 [7];
  int local_1f4;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  int local_1e4;
  undefined8 local_1e0;
  undefined8 local_1d8;
  int local_1d0;
  int local_1cc;
  uint *local_1c8;
  uint *local_1c4;
  uint *local_1c0;
  int local_1bc;
  undefined8 local_1b8;
  uint local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  int local_19c;
  uint *local_198;
  int local_194;
  uint *local_190;
  int local_18c;
  undefined8 local_188;
  uint local_180;
  int local_17c;
  int local_178;
  int local_174;
  int local_170;
  int local_16c;
  uint local_168;
  int local_164;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  int local_14c [4];
  int local_13c;
  int local_134;
  int local_130;
  int local_12c;
  uint *local_128;
  int local_124;
  uint *local_120;
  int local_11c;
  undefined8 local_118;
  int local_110;
  int local_10c;
  int local_108;
  int local_104 [4];
  uint local_f4;
  uint local_f0;
  uint local_ec;
  int local_e8;
  uint local_e4;
  int local_dc;
  int local_d8;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  int local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  int local_a0;
  uint local_9c;
  int local_98;
  uint local_94;
  int local_84 [3];
  int local_78 [3];
  int local_6c [3];
  uint local_60 [7];
  int local_44 [3];
  uint local_38 [7];
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00554e12;
  local_14 = ExceptionList;
  local_1c = DAT_00583cc8 ^ (uint)auStack_3ec;
  ExceptionList = &local_14;
  *(undefined4 *)((int)param_1 + 0x40) = 0;
  *(undefined4 *)((int)param_1 + 0x44) = 0;
  *(undefined4 *)((int)param_1 + 0x48) = 0;
  local_3e8 = param_1;
  local_274[0] = 0.0;
  local_3c8 = (float *)(0.5 - *(float *)((int)param_1 + 0x88) * 0.5);
  local_274[1] = 0.0;
  iVar25 = 0;
  local_26c = local_3c8;
  do {
    local_3d0 = (float *)(local_274[iVar25] * 65536.0);
    uVar33 = FUN_0054a946();
    local_238[iVar25 * 2] = (uint)uVar33;
    local_238[iVar25 * 2 + 1] = (uint)(uVar33 >> 0x20);
    iVar25 = iVar25 + 1;
  } while (iVar25 < 3);
  local_180 = *(uint *)((int)param_1 + 0x10) + local_238[0];
  local_3a0 = (uint *)((int)param_1 + 0x10);
  local_17c = *(int *)((int)param_1 + 0x14) + local_238[1] +
              (uint)CARRY4(*(uint *)((int)param_1 + 0x10),local_238[0]);
  local_178 = *(uint *)((int)param_1 + 0x18) + local_238[2];
  local_174 = *(int *)((int)param_1 + 0x1c) + local_238[3] +
              (uint)CARRY4(*(uint *)((int)param_1 + 0x18),local_238[2]);
  local_170 = *(uint *)((int)param_1 + 0x20) + local_238[4];
  local_16c = *(int *)((int)param_1 + 0x24) + local_238[5] +
              (uint)CARRY4(*(uint *)((int)param_1 + 0x20),local_238[4]);
  piVar15 = (int *)FUN_00405450(local_6c,&local_180);
  pvVar27 = local_3e8;
  local_3d8 = (uint *)((int)local_3e8 + 0x1440);
  piVar16 = (int *)FUN_00405450(local_78,local_3d8);
  uVar33 = CONCAT44(local_3cc,local_3e0);
  local_134 = *piVar16 - *piVar15;
  local_12c = piVar16[2] - piVar15[2];
  local_130 = piVar16[1] - piVar15[1];
  if ((float)(local_134 * local_134 + local_12c * local_12c + local_130 * local_130) <=
      *(float *)((int)pvVar27 + 0x1458) * *(float *)((int)pvVar27 + 0x1458)) {
    FUN_00405330((int)pvVar27);
    uVar33 = CONCAT44(local_3cc,local_3e0);
    goto LAB_004dcfc6;
  }
  if (*(int *)((int)pvVar27 + 0x1464) == 0) goto LAB_004dcfc6;
  if (3000 < *(int *)((int)pvVar27 + 0x145c)) {
    local_268[6] = 0;
    local_268[7] = 0;
    local_248 = local_3c8;
    FUN_00402510((int)local_60);
    puVar17 = FUN_00402cb0((void *)((int)pvVar27 + 0x10),local_38,local_60);
    *(uint *)((int)pvVar27 + 0x1428) = *puVar17;
    *(uint *)((int)pvVar27 + 0x142c) = puVar17[1];
    *(uint *)((int)pvVar27 + 0x1430) = puVar17[2];
    *(uint *)((int)pvVar27 + 0x1434) = puVar17[3];
    *(uint *)((int)pvVar27 + 0x1438) = puVar17[4];
    *(uint *)((int)pvVar27 + 0x143c) = puVar17[5];
    FUN_004dd2e0(local_37c,pvVar27);
  }
  uVar33 = CONCAT44(local_3cc,local_3e0);
  local_3c4 = *(int **)((int)pvVar27 + 0x1464);
  if (local_3c4 == (int *)0x0) goto LAB_004dcfc6;
  puVar17 = *(uint **)((int)pvVar27 + 0x1460);
  puVar24 = (uint *)*puVar17;
  local_38c = -1;
  piVar15 = local_3c4;
  local_3b0 = puVar24;
  if (puVar24 != puVar17) {
    local_3d0 = (float *)(*(float *)((int)local_3e8 + 0x88) * 0.5 * 65536.0);
    local_370 = FUN_0054a946();
    local_328 = 0;
    local_2e8 = FUN_0054a946();
    local_3d0 = *(float **)((int)local_3e8 + 0x18);
    local_3c8 = *(float **)((int)local_3e8 + 0x1c);
    local_3dc = *(int ***)((int)local_3e8 + 0x20);
    local_3c0._0_4_ = *(float **)((int)local_3e8 + 0x24);
    uVar33 = local_2e8;
    do {
      local_2f8 = uVar33;
      local_3e4 = (float *)(local_2f8 >> 0x20);
      local_3e0 = (float *)local_2f8;
      local_1b0 = (int)*local_3a0 - (int)local_3e0;
      local_1ac = (local_3a0[1] - (int)local_3e4) - (uint)((float *)*local_3a0 < local_3e0);
      local_1a8 = (int)local_3d0 - (int)local_3e0;
      local_3a8._0_4_ = local_3c8;
      local_1a4 = (int)local_3c8 + (-(uint)(local_3d0 < local_3e0) - (int)local_3e4);
      local_380 = (float *)local_3dc;
      local_1a0 = (int)local_3dc - (int)(float *)local_370;
      local_19c = (int)(float *)local_3c0 +
                  (-(uint)(local_3dc < (float *)local_370) - local_370._4_4_);
      local_3b8 = (uint *)(float *)local_3c0;
      piVar15 = (int *)FUN_00405450(local_84,&local_1b0);
      local_2b4 = piVar15[2] - puVar24[4];
      iStack_2b8 = piVar15[1] - puVar24[3];
      local_2bc = *piVar15 - puVar24[2];
      iVar25 = local_2b4 * local_2b4 + iStack_2b8 * iStack_2b8 + local_2bc * local_2bc;
      if ((local_38c < 0) || (iVar25 <= local_38c)) {
        local_3b0 = puVar24;
        local_38c = iVar25;
      }
      puVar24 = (uint *)*puVar24;
      uVar33 = CONCAT44(local_3e4,local_3e0);
    } while (puVar24 != puVar17);
    piVar15 = local_3c4;
    if (local_38c == 0) {
      *(undefined4 *)((int)local_3e8 + 0x145c) = 0;
      piVar15 = *(int **)((int)local_3e8 + 0x1464);
    }
  }
  puVar24 = local_3b0;
  if (((*(byte *)((int)local_3e8 + 0x5c) & 0x40) == 0) && (piVar15 < (int *)0x1e)) {
    uVar20 = puVar17[1];
    piVar15 = (int *)FUN_00405450(local_44,local_3d8);
    local_10c = *(int *)(uVar20 + 0xc) - piVar15[1];
    local_108 = *(int *)(uVar20 + 0x10) - piVar15[2];
    local_110 = *(int *)(uVar20 + 8) - *piVar15;
    if ((float)(local_108 * local_108 + local_10c * local_10c + local_110 * local_110) <=
        *(float *)((int)local_3e8 + 0x1458) * *(float *)((int)local_3e8 + 0x1458))
    goto LAB_004db6ef;
    local_3d2 = '\x01';
    pvVar27 = local_3e8;
  }
  else {
LAB_004db6ef:
    pvVar27 = local_3e8;
    local_3d2 = '\0';
    if (local_38c == 0) {
      puVar17 = (uint *)((int)local_3e8 + 0x141c);
      iVar25 = FUN_004156e0(puVar24 + 2,(int)puVar17);
      if ((char)iVar25 != '\0') {
        *puVar17 = puVar24[2];
        *(uint *)((int)pvVar27 + 0x1420) = puVar24[3];
        *(uint *)((int)pvVar27 + 0x1424) = puVar24[4];
        local_280 = puVar24[2];
        local_27c = puVar24[3];
        local_278 = puVar24[4];
        FUN_004d99d0((void *)((int)pvVar27 + 0x1428),&local_280);
        local_378 = (int *)0x0;
        local_374 = 0;
        local_378 = (int *)FUN_0042f040();
        this = local_3e8;
        iVar25 = *(int *)((int)pvVar27 + 0x1418);
        local_c = 0;
        local_3e0 = (float *)0x46;
        if ((0x45 < iVar25) || (local_3e0 = (float *)iVar25, 0 < iVar25)) {
          do {
            piVar16 = (int *)0x0;
            piVar15 = (int *)**(int **)((int)pvVar27 + 0x1414);
            local_3e4 = (float *)0xffffffff;
            if (piVar15 != *(int **)((int)pvVar27 + 0x1414)) {
              do {
                puVar18 = (undefined4 *)piVar15[4];
                puVar18 = FUN_004dd0f0(this,(undefined4 *)*puVar18,puVar18[1],puVar18[2]);
                if ((puVar18 != (undefined4 *)0x0) &&
                   (((int)local_3e4 < 0 || ((int)puVar18[1] < (int)local_3e4)))) {
                  local_3e4 = (float *)puVar18[1];
                  piVar16 = piVar15;
                }
                if (*(char *)((int)piVar15 + 0xd) == '\0') {
                  piVar3 = (int *)piVar15[2];
                  if (*(char *)((int)piVar3 + 0xd) == '\0') {
                    cVar12 = *(char *)(*piVar3 + 0xd);
                    piVar15 = piVar3;
                    piVar3 = (int *)*piVar3;
                    while (cVar12 == '\0') {
                      cVar12 = *(char *)(*piVar3 + 0xd);
                      piVar15 = piVar3;
                      piVar3 = (int *)*piVar3;
                    }
                  }
                  else {
                    cVar12 = *(char *)(piVar15[1] + 0xd);
                    piVar10 = (int *)piVar15[1];
                    piVar3 = piVar15;
                    while ((piVar15 = piVar10, cVar12 == '\0' && (piVar3 == (int *)piVar15[2]))) {
                      cVar12 = *(char *)(piVar15[1] + 0xd);
                      piVar10 = (int *)piVar15[1];
                      piVar3 = piVar15;
                    }
                  }
                }
              } while (piVar15 != *(int **)((int)this + 0x1414));
              if (-1 < (int)local_3e4) {
                FUN_004da790(&local_378,local_2dc,'\0',piVar16 + 4,(uint)DAT_0058426a);
                FUN_0040a4f0((void *)((int)this + 0x1414),(undefined4 *)&local_328,piVar16);
              }
            }
            local_3e0 = (float *)((int)local_3e0 + -1);
            pvVar27 = this;
          } while (local_3e0 != (float *)0x0);
          local_3e0 = (float *)0x0;
          puVar24 = local_3b0;
          pvVar27 = local_3e8;
        }
        ppiVar1 = (int **)((int)pvVar27 + 0x1414);
        local_3dc = ppiVar1;
        if (ppiVar1 != &local_378) {
          FUN_00402ed0((int *)(*ppiVar1)[1]);
          local_3d0 = (float *)((uint)local_3d0 & 0xffffff00);
          (*ppiVar1)[1] = (int)*ppiVar1;
          **ppiVar1 = (int)*ppiVar1;
          (*ppiVar1)[2] = (int)*ppiVar1;
          *(undefined4 *)((int)pvVar27 + 0x1418) = 0;
          FUN_004d9be0(ppiVar1,(int *)&local_378,local_3d0);
        }
        local_398 = 0;
        local_39c = (undefined4 *)FUN_004ce660((undefined4 *)0x0,(undefined4 *)0x0);
        local_c._0_1_ = 1;
        local_388 = (int *)0x0;
        local_384 = 0;
        local_388 = (int *)FUN_00407ad0();
        local_c = CONCAT31(local_c._1_3_,2);
        local_3e0 = (float *)FUN_004dd0f0(pvVar27,(undefined4 *)puVar24[2],puVar24[3],puVar24[4]);
        piVar15 = (int *)**ppiVar1;
        local_3c4 = piVar15;
        if (piVar15 != *ppiVar1) {
          do {
            puVar18 = (undefined4 *)piVar15[4];
            local_3e4 = (float *)FUN_004dd0f0(local_3e8,(undefined4 *)*puVar18,puVar18[1],puVar18[2]
                                             );
            local_394 = (uint *)0x0;
            local_390 = 0;
            local_394 = (uint *)FUN_00407ad0();
            local_c._0_1_ = 3;
            local_364 = (float *)0x0;
            local_360 = 0;
            local_35c = 0;
            FUN_0045f080(&local_364,3);
            local_c = CONCAT31(local_c._1_3_,4);
            FUN_004dab90(&local_364,piVar15 + 4);
            pvVar27 = local_3e8;
            if (local_3e4 == (float *)0x0) {
LAB_004dba99:
              if (local_3e4 == local_3e0) goto LAB_004dbade;
              iVar25 = FUN_0052dfb0(local_39c,(undefined4 *)local_39c[1],&local_3c4);
              if (local_398 == 0x15555554) {
                    /* WARNING: Subroutine does not return */
                std::_Xlength_error("list<T> too long");
              }
              local_398 = local_398 + 1;
              local_39c[1] = iVar25;
              **(int **)(iVar25 + 4) = iVar25;
            }
            else {
              while (local_3e4 != local_3e0) {
                local_3c8 = (float *)FUN_004dd0f0(pvVar27,(undefined4 *)local_3e4[3],
                                                  (int)local_3e4[4],(int)local_3e4[5]);
                if ((local_3c8 == local_3e4) || (local_3c8 == (float *)0x0)) goto LAB_004dba99;
                pfVar19 = (float *)FUN_004daca0(&local_394,(int *)&local_364);
                *pfVar19 = *local_3e4;
                pfVar19[1] = local_3e4[1];
                pfVar19[2] = local_3e4[2];
                pfVar19[3] = local_3e4[3];
                pfVar19[4] = local_3e4[4];
                pfVar19[5] = local_3e4[5];
                *local_364 = local_3e4[3];
                local_364[1] = local_3e4[4];
                local_364[2] = local_3e4[5];
                local_3e4 = local_3c8;
              }
LAB_004dbade:
              FUN_004da9f0(&local_388,(int *)*local_394,(int *)local_394);
            }
            if (local_364 != (float *)0x0) {
              operator_delete(local_364);
              local_364 = (float *)0x0;
              local_360 = 0;
              local_35c = 0;
            }
            local_c = CONCAT31(local_c._1_3_,2);
            FUN_0040a430(&local_394,&local_340,(int *)*local_394,(int *)local_394);
            operator_delete(local_394);
            if (*(char *)((int)piVar15 + 0xd) == '\0') {
              piVar16 = (int *)piVar15[2];
              if (*(char *)((int)piVar16 + 0xd) == '\0') {
                cVar12 = *(char *)(*piVar16 + 0xd);
                piVar15 = piVar16;
                piVar16 = (int *)*piVar16;
                while (local_3c4 = piVar15, cVar12 == '\0') {
                  cVar12 = *(char *)(*piVar16 + 0xd);
                  piVar15 = piVar16;
                  piVar16 = (int *)*piVar16;
                }
              }
              else {
                cVar12 = *(char *)(piVar15[1] + 0xd);
                piVar3 = (int *)piVar15[1];
                piVar16 = piVar15;
                while ((piVar15 = piVar3, local_3c4 = piVar15, cVar12 == '\0' &&
                       (piVar16 == (int *)piVar15[2]))) {
                  cVar12 = *(char *)(piVar15[1] + 0xd);
                  piVar3 = (int *)piVar15[1];
                  piVar16 = piVar15;
                }
              }
            }
          } while (piVar15 != *(int **)((int)pvVar27 + 0x1414));
        }
        local_334 = (uint *)0x0;
        local_330 = 0;
        local_32c = 0;
        FUN_0045f080(&local_334,3);
        *local_334 = puVar24[2];
        local_334[1] = puVar24[3];
        local_334[2] = puVar24[4];
        local_c = CONCAT31(local_c._1_3_,5);
        pfVar19 = (float *)FUN_004daca0(&local_388,(int *)&local_334);
        *pfVar19 = *local_3e0;
        pfVar19[1] = local_3e0[1];
        pfVar19[2] = local_3e0[2];
        pfVar19[3] = local_3e0[3];
        pfVar19[4] = local_3e0[4];
        pfVar19[5] = local_3e0[5];
        iVar25 = FUN_004daca0(&local_388,(int *)&local_334);
        puVar5 = local_39c;
        ppiVar1 = local_3dc;
        *(uint *)(iVar25 + 0xc) = puVar24[2];
        *(uint *)(iVar25 + 0x10) = puVar24[3];
        *(uint *)(iVar25 + 0x14) = puVar24[4];
        for (puVar18 = (undefined4 *)*local_39c; puVar18 != puVar5; puVar18 = (undefined4 *)*puVar18
            ) {
          FUN_0040a4f0(ppiVar1,&local_338,(int *)puVar18[2]);
          puVar24 = local_3b0;
          pvVar27 = local_3e8;
        }
        ppiVar1 = (int **)((int)pvVar27 + 0x140c);
        if (ppiVar1 != &local_388) {
          FUN_00402ed0((int *)(*ppiVar1)[1]);
          local_3c8 = (float *)((uint)local_3c8 & 0xffffff00);
          (*ppiVar1)[1] = (int)*ppiVar1;
          **ppiVar1 = (int)*ppiVar1;
          (*ppiVar1)[2] = (int)*ppiVar1;
          *(undefined4 *)((int)pvVar27 + 0x1410) = 0;
          piVar15 = *ppiVar1;
          puVar18 = FUN_004d9c60((void *)((int)pvVar27 + 0x140c),(undefined4 *)local_388[1],piVar15,
                                 local_3c8);
          piVar15[1] = (int)puVar18;
          piVar15 = *(int **)((int)pvVar27 + 0x140c);
          *(undefined4 *)((int)pvVar27 + 0x1410) = local_384;
          piVar16 = (int *)piVar15[1];
          if (*(char *)((int)piVar16 + 0xd) == '\0') {
            cVar12 = *(char *)(*piVar16 + 0xd);
            piVar3 = (int *)*piVar16;
            while (cVar12 == '\0') {
              cVar12 = *(char *)(*piVar3 + 0xd);
              piVar16 = piVar3;
              piVar3 = (int *)*piVar3;
            }
            *piVar15 = (int)piVar16;
            iVar25 = *(int *)((int)pvVar27 + 0x140c);
            iVar22 = *(int *)(iVar25 + 4);
            iVar4 = *(int *)(iVar22 + 8);
            cVar12 = *(char *)(iVar4 + 0xd);
            while (cVar12 == '\0') {
              cVar12 = *(char *)(*(int *)(iVar4 + 8) + 0xd);
              iVar22 = iVar4;
              iVar4 = *(int *)(iVar4 + 8);
            }
            *(int *)(iVar25 + 8) = iVar22;
          }
          else {
            *piVar15 = (int)piVar15;
            iVar25 = *(int *)((int)pvVar27 + 0x140c);
            *(int *)(iVar25 + 8) = iVar25;
          }
        }
        puVar18 = *(undefined4 **)((int)pvVar27 + 0x140c);
        *(undefined4 **)((int)pvVar27 + 0x1408) = puVar18;
        puVar5 = (undefined4 *)*puVar18;
        puVar26 = puVar18;
        while (puVar5 != puVar18) {
          if ((puVar26 == puVar18) || ((int)puVar5[8] < (int)puVar26[8])) {
            *(undefined4 **)((int)pvVar27 + 0x1408) = puVar5;
            puVar26 = puVar5;
          }
          if (*(char *)((int)puVar5 + 0xd) == '\0') {
            puVar6 = (undefined4 *)puVar5[2];
            if (*(char *)((int)puVar6 + 0xd) == '\0') {
              cVar12 = *(char *)((int)*puVar6 + 0xd);
              puVar5 = puVar6;
              puVar6 = (undefined4 *)*puVar6;
              while (cVar12 == '\0') {
                cVar12 = *(char *)((int)*puVar6 + 0xd);
                puVar5 = puVar6;
                puVar6 = (undefined4 *)*puVar6;
              }
            }
            else {
              cVar12 = *(char *)((int)puVar5[1] + 0xd);
              puVar11 = (undefined4 *)puVar5[1];
              puVar6 = puVar5;
              while ((puVar5 = puVar11, cVar12 == '\0' && (puVar6 == (undefined4 *)puVar5[2]))) {
                cVar12 = *(char *)((int)puVar5[1] + 0xd);
                puVar11 = (undefined4 *)puVar5[1];
                puVar6 = puVar5;
              }
            }
          }
        }
        if (local_334 != (uint *)0x0) {
          operator_delete(local_334);
        }
        local_c = CONCAT31(local_c._1_3_,1);
        FUN_0040a430(&local_388,&local_344,(int *)*local_388,local_388);
        operator_delete(local_388);
        puVar5 = local_39c;
        puVar18 = (undefined4 *)*local_39c;
        *local_39c = local_39c;
        local_39c[1] = local_39c;
        while (puVar18 != puVar5) {
          puVar26 = (undefined4 *)*puVar18;
          operator_delete(puVar18);
          puVar18 = puVar26;
          puVar24 = local_3b0;
        }
        operator_delete(local_39c);
        local_c = 0xffffffff;
        FUN_0040a430(&local_378,&local_33c,(int *)*local_378,local_378);
        operator_delete(local_378);
      }
    }
  }
  local_3c0._0_4_ = (float *)puVar24[4];
  local_3dc = (int **)(*(float *)((int)pvVar27 + 0x88) * 0.5 * 65536.0);
  pfVar19 = (float *)((int)pvVar27 + 0x80);
  local_3e9 = 0;
  local_380 = pfVar19;
  local_350 = FUN_0054a946();
  local_320 = FUN_0054a946();
  local_3cc = (float)(local_320 >> 0x20);
  puVar17 = (uint *)local_320;
  uVar20 = puVar24[2];
  local_3e4 = (float *)(puVar24 + 2);
  local_9c = ((int)uVar20 >> 0x1f) << 0x10 | uVar20 >> 0x10;
  uVar21 = puVar24[3];
  uVar7 = puVar24[4];
  local_94 = ((int)uVar21 >> 0x1f) << 0x10 | uVar21 >> 0x10;
  local_a0 = uVar20 * 0x10000;
  local_98 = uVar21 * 0x10000;
  local_1e0 = local_320 + CONCAT44(local_9c,local_a0);
  local_3e0 = (float *)((ulonglong)local_1e0 >> 0x20);
  local_1d8 = local_320 + CONCAT44(local_94,local_98);
  local_1d0 = uVar7 * 0x10000 + (uint)local_350;
  local_1cc = (((int)uVar7 >> 0x1f) << 0x10 | uVar7 >> 0x10) + local_350._4_4_ +
              (uint)CARRY4(uVar7 * 0x10000,(uint)local_350);
  local_3d8 = puVar17;
  local_310 = puVar17;
  local_30c = (int)local_3cc;
  cVar12 = FUN_004d5740(local_37c,(uint *)&local_1e0,pfVar19);
  local_3e0 = (float *)(uint)local_3e9;
  if (cVar12 != '\0') {
    local_3e0 = (float *)0x1;
  }
  local_3e9 = '\x01';
  local_3d1 = '\0';
  pfVar19 = (float *)local_3c0;
  puVar24 = puVar17;
  local_358 = CONCAT44(local_358._4_4_,(float)local_358);
  local_1b8 = CONCAT44(local_1b8._4_4_,(undefined4)local_1b8);
  if ((local_3d2 == '\0') &&
     (local_358 = CONCAT44(local_358._4_4_,(float)local_358),
     local_1b8 = CONCAT44(local_1b8._4_4_,(undefined4)local_1b8),
     local_3b0 != *(uint **)(*(int *)((int)local_3e8 + 0x1460) + 4))) {
    puVar8 = (uint *)*local_3b0;
    local_3dc = (int **)(*(float *)((int)local_3e8 + 0x88) * 0.5 * 65536.0);
    local_3e9 = '\0';
    local_3a8._0_4_ = (float *)puVar8[4];
    pfVar19 = (float *)((int)local_3e8 + 0x80);
    local_3b0 = puVar8;
    local_358 = FUN_0054a946();
    puVar24 = local_3d8;
    local_2ec = (int)local_3cc;
    local_2fc = (int)local_3cc;
    uVar20 = puVar8[2];
    local_3e4 = (float *)(puVar8 + 2);
    local_b4 = ((int)uVar20 >> 0x1f) << 0x10 | uVar20 >> 0x10;
    uVar21 = puVar8[3];
    uVar7 = puVar8[4];
    local_ac = ((int)uVar21 >> 0x1f) << 0x10 | uVar21 >> 0x10;
    local_b8 = uVar20 * 0x10000;
    local_b0 = uVar21 * 0x10000;
    local_1c8 = local_3d8 + uVar20 * 0x4000;
    local_3b8 = (uint *)(local_b4 + (int)local_3cc + (uint)CARRY4(local_b8,(uint)local_3d8));
    local_1c0 = local_3d8 + uVar21 * 0x4000;
    local_1bc = local_ac + (int)local_3cc + (uint)CARRY4(local_b0,(uint)local_3d8);
    local_1b8 = local_358 + CONCAT44(((int)uVar7 >> 0x1f) << 0x10 | uVar7 >> 0x10,uVar7 * 0x10000);
    local_300 = puVar17;
    local_2f0 = puVar17;
    local_1c4 = local_3b8;
    cVar13 = FUN_004d5740(local_37c,(uint *)&local_1c8,pfVar19);
    cVar12 = (char)local_3e0;
    pfVar19 = (float *)local_3a8;
    if (cVar13 == '\0') goto LAB_004dc101;
    bVar14 = '\x01';
  }
  else {
LAB_004dc101:
    cVar12 = (char)local_3e0;
    local_3d1 = '\x01';
    bVar14 = local_3e9;
  }
  local_3e9 = '\x01';
  puVar17 = puVar24;
  local_3c0 = CONCAT44(local_3c0._4_4_,(float *)local_3c0);
  local_188 = CONCAT44(local_188._4_4_,(undefined4)local_188);
  if ((local_3d2 == '\0') &&
     ((((cVar12 != '\0' ||
        (local_3c0 = CONCAT44(local_3c0._4_4_,(float *)local_3c0),
        local_188 = CONCAT44(local_188._4_4_,(undefined4)local_188), bVar14 != '\0')) &&
       (local_3c0 = CONCAT44(local_3c0._4_4_,(float *)local_3c0),
       local_188 = CONCAT44(local_188._4_4_,(undefined4)local_188), pfVar19 != (float *)local_3c0))
      && (local_3c0 = CONCAT44(local_3c0._4_4_,(float *)local_3c0),
         local_188 = CONCAT44(local_188._4_4_,(undefined4)local_188),
         local_3b0 != *(uint **)(*(int *)((int)local_3e8 + 0x1460) + 4))))) {
    uVar20 = *local_3b0;
    pfVar19 = (float *)((int)local_3e8 + 0x80);
    local_3dc = (int **)(*(float *)((int)local_3e8 + 0x88) * 0.5 * 65536.0);
    local_3e9 = '\0';
    local_3c0 = FUN_0054a946();
    puVar17 = local_3d8;
    local_3b4 = (int)local_3cc;
    local_3ac = (int)local_3cc;
    uVar21 = *(uint *)(uVar20 + 8);
    local_3e4 = (float *)(uVar20 + 8);
    uVar7 = *(uint *)(uVar20 + 0xc);
    local_f4 = ((int)uVar21 >> 0x1f) << 0x10 | uVar21 >> 0x10;
    uVar20 = *(uint *)(uVar20 + 0x10);
    local_ec = ((int)uVar7 >> 0x1f) << 0x10 | uVar7 >> 0x10;
    local_e4 = ((int)uVar20 >> 0x1f) << 0x10 | uVar20 >> 0x10;
    local_104[3] = uVar21 * 0x10000;
    local_f0 = uVar7 * 0x10000;
    local_e8 = uVar20 * 0x10000;
    local_198 = local_3d8 + uVar21 * 0x4000;
    local_194 = local_f4 + (int)local_3cc + (uint)CARRY4(local_104[3],(uint)local_3d8);
    local_190 = local_3d8 + uVar7 * 0x4000;
    local_18c = local_ec + (int)local_3cc + (uint)CARRY4(local_f0,(uint)local_3d8);
    local_188 = local_3c0 + CONCAT44(local_e4,local_e8);
    local_3b8 = puVar24;
    local_3b0 = puVar24;
    cVar12 = FUN_004d5740(local_37c,(uint *)&local_198,pfVar19);
    if (cVar12 != '\0') {
      local_3e9 = '\x01';
      local_3d1 = '\0';
    }
  }
  local_3dc = (int **)(*(float *)((int)local_3e8 + 0x88) * 0.5 * 65536.0);
  local_3a8 = FUN_0054a946();
  iVar25 = local_38c;
  puVar24 = local_3a0;
  pvVar27 = local_3e8;
  uVar33 = CONCAT44(local_3cc,local_3e0);
  local_314 = (int)local_3cc;
  local_304 = (int)local_3cc;
  uVar20 = (uint)*local_3e4;
  uVar21 = (uint)local_3e4[1];
  local_cc = ((int)uVar20 >> 0x1f) << 0x10 | uVar20 >> 0x10;
  uVar7 = (uint)local_3e4[2];
  local_c4 = ((int)uVar21 >> 0x1f) << 0x10 | uVar21 >> 0x10;
  local_bc = ((int)uVar7 >> 0x1f) << 0x10 | uVar7 >> 0x10;
  local_d0 = uVar20 * 0x10000;
  local_c8 = uVar21 * 0x10000;
  local_c0 = uVar7 * 0x10000;
  local_128 = local_3d8 + uVar20 * 0x4000;
  local_124 = local_cc + (int)local_3cc + (uint)CARRY4(local_d0,(uint)local_3d8);
  local_120 = local_3d8 + uVar21 * 0x4000;
  local_11c = local_c4 + (int)local_3cc + (uint)CARRY4(local_c8,(uint)local_3d8);
  local_118 = local_3a8 + CONCAT44(local_bc,local_c0);
  local_2b0 = (int)local_128 - *local_3a0;
  iStack_2ac = (local_124 - local_3a0[1]) - (uint)(local_128 < (uint *)*local_3a0);
  local_2a8 = (int)local_120 - local_3a0[2];
  iStack_2a4 = (local_11c - local_3a0[3]) - (uint)(local_120 < (uint *)local_3a0[2]);
  local_2a0 = (uint)local_118 - local_3a0[4];
  iStack_29c = ((int)((ulonglong)local_118 >> 0x20) - local_3a0[5]) -
               (uint)((uint)local_118 < local_3a0[4]);
  local_3e4 = (float *)((float)CONCAT44(iStack_2ac,local_2b0) * 1.5258789e-05);
  local_3b0 = (uint *)((float)CONCAT44(iStack_2a4,local_2a8) * 1.5258789e-05);
  local_3dc = (int **)(float)CONCAT44(iStack_29c,local_2a0);
  local_3d8 = (uint *)((float)local_3dc * 1.5258789e-05);
  if (((local_38c < 4) && ((*(byte *)((int)local_3e8 + 0x5c) & 4) != 0)) &&
     ((char)local_3e0 == '\0')) {
    bVar28 = true;
  }
  else {
    bVar28 = false;
  }
  if (bVar28) {
    *(ushort *)(local_3a0 + 0x45) = (ushort)local_3a0[0x45] | 1;
  }
  else {
    *(ushort *)(local_3a0 + 0x45) = (ushort)local_3a0[0x45] & 0xfffe;
  }
  if (((1.0 < (float)local_3d8) || ((*(byte *)((int)local_3e8 + 0x5c) & 0x40) != 0)) ||
     (((char)local_3e0 == '\0' || (bVar28 = local_3e9 == '\0', local_3e9 = '\x01', bVar28)))) {
    local_3e9 = '\0';
  }
  fVar30 = (float)local_3b0 * (float)local_3b0 + (float)local_3e4 * (float)local_3e4 +
           (float)local_3d8 * (float)local_3d8;
  local_3d0 = (float *)local_3dc;
  local_318 = puVar17;
  local_308 = puVar17;
  local_2c8 = local_3e4;
  local_2c4 = (float)local_3b0;
  if (fVar30 <= 0.001) goto LAB_004dcfc6;
  if (1.0 < fVar30) {
    dVar29 = (double)fVar30;
    libm_sse2_sqrt_precise();
    fVar30 = 1.0 / (float)dVar29;
    local_3e4 = (float *)(fVar30 * (float)local_2c8);
    local_3d8 = (uint *)(fVar30 * (float)local_3d8);
    local_3b0 = (uint *)(fVar30 * local_2c4);
  }
  uVar33 = CONCAT44(local_3cc,local_3e0);
  if ((float)local_3d8 <= 0.0) {
    if (((float)local_3d8 < 0.0) && ((*(byte *)((int)pvVar27 + 0x5c) & 2) != 0)) {
      local_3d8 = (uint *)0xc0000000;
    }
  }
  else {
    local_3d8 = (uint *)0x3f800000;
  }
  if ((*(byte *)((int)pvVar27 + 0x5c) & 0x40) != 0) {
    local_3d8 = (uint *)0x40400000;
    iVar25 = 0;
    local_244[0] = *local_380 * 0.5;
    local_244[1] = *(float *)((int)pvVar27 + 0x84) * 0.5;
    local_244[2] = *(float *)((int)pvVar27 + 0x88) * 0.5;
    do {
      local_3d0 = (float *)(local_244[iVar25] * 65536.0);
      uVar33 = FUN_0054a946();
      local_210[iVar25 * 2] = (uint)uVar33;
      local_210[iVar25 * 2 + 1] = (uint)(uVar33 >> 0x20);
      iVar25 = iVar25 + 1;
    } while (iVar25 < 3);
    uVar20 = *puVar24;
    local_168 = uVar20 - local_210[0];
    local_164 = (puVar24[1] - local_210[1]) - (uint)(uVar20 < local_210[0]);
    local_160 = *(uint *)((int)local_3e8 + 0x18) - local_210[2];
    local_15c = (*(int *)((int)local_3e8 + 0x1c) - local_210[3]) -
                (uint)(*(uint *)((int)local_3e8 + 0x18) < local_210[2]);
    local_158 = *(uint *)((int)local_3e8 + 0x20) - local_210[4];
    local_154 = (*(int *)((int)local_3e8 + 0x24) - local_210[5]) -
                (uint)(*(uint *)((int)local_3e8 + 0x20) < local_210[4]);
    FUN_00405450(&local_dc,&local_168);
    pvVar27 = local_3e8;
    iVar25 = 0;
    local_298[0] = *local_380 * 0.5;
    local_298[1] = *(float *)((int)local_3e8 + 0x84) * 0.5;
    local_298[2] = *(float *)((int)local_3e8 + 0x88) * 0.5;
    do {
      local_3d0 = (float *)(local_298[iVar25] * 65536.0);
      uVar33 = FUN_0054a946();
      local_268[iVar25 * 2] = (uint)uVar33;
      local_268[iVar25 * 2 + 1] = (uint)(uVar33 >> 0x20);
      iVar25 = iVar25 + 1;
    } while (iVar25 < 3);
    local_210[6] = *local_3a0 + local_268[0];
    local_1f4 = local_3a0[1] + local_268[1] + (uint)CARRY4(*local_3a0,local_268[0]);
    local_1f0 = *(uint *)((int)pvVar27 + 0x18) + local_268[2];
    local_1ec = *(int *)((int)pvVar27 + 0x1c) + local_268[3] +
                (uint)CARRY4(*(uint *)((int)pvVar27 + 0x18),local_268[2]);
    local_1e8 = *(uint *)((int)pvVar27 + 0x20) + local_268[4];
    local_1e4 = *(int *)((int)pvVar27 + 0x24) + local_268[5] +
                (uint)CARRY4(*(uint *)((int)pvVar27 + 0x20),local_268[4]);
    FUN_00405450(local_14c + 3,local_210 + 6);
    uVar33 = CONCAT44(local_3cc,local_3e0);
    local_21c[0] = 1.0;
    local_21c[1] = 1.0;
    local_21c[2] = 0.0;
    iVar25 = 0;
    do {
      iVar22 = iVar25 + 4;
      *(int *)((int)local_104 + iVar25) = (int)*(float *)((int)local_21c + iVar25);
      iVar25 = iVar22;
    } while (iVar22 < 0xc);
    local_298[3] = 1.0;
    local_298[4] = 1.0;
    local_298[5] = 0.0;
    iVar25 = 0;
    do {
      iVar22 = iVar25 + 4;
      *(int *)((int)local_14c + iVar25) = (int)*(float *)((int)local_298 + iVar25 + 0xc);
      iVar25 = iVar22;
    } while (iVar22 < 0xc);
    piVar15 = (int *)((int)((local_dc - local_104[0]) + (local_dc - local_104[0] >> 0x1f & 7U)) >> 3
                     );
    pfVar19 = (float *)((int)((local_d8 - local_104[1]) + (local_d8 - local_104[1] >> 0x1f & 7U)) >>
                       3);
    local_3d0 = (float *)((int)(local_14c[3] + local_14c[0] +
                               (local_14c[3] + local_14c[0] >> 0x1f & 7U)) >> 3);
    iVar22 = (int)(local_13c + local_14c[1] + (local_13c + local_14c[1] >> 0x1f & 7U)) >> 3;
    local_328 = CONCAT44(local_328._4_4_,iVar22);
    iVar25 = local_38c;
    local_3c8 = pfVar19;
    local_3c4 = piVar15;
    uVar9 = local_3c0;
    uVar34 = local_3a8;
    if ((int)piVar15 <= (int)local_3d0) {
      do {
        local_3a8._4_4_ = (undefined4)(uVar34 >> 0x20);
        local_3a8._0_4_ = (float *)uVar34;
        local_3c0._4_4_ = (undefined4)(uVar9 >> 0x20);
        local_3c0._0_4_ = (float *)uVar9;
        uVar34 = CONCAT44((float *)local_3a8,(float *)local_3c0);
        pfVar23 = pfVar19;
        local_3dc = (int **)pfVar19;
        local_3c4 = piVar15;
        if ((int)pfVar19 <= iVar22) {
          do {
            local_3a8._0_4_ = (float *)(uVar34 >> 0x20);
            local_3c0._0_4_ = (float *)uVar34;
            local_3cc = (float)(uVar33 >> 0x20);
            local_3e0 = (float *)uVar33;
            local_3dc = (int **)pfVar19;
            local_340 = (int *)FUN_0041c9e0(local_37c,(uint)piVar15,(uint)pfVar19,0);
            uVar34 = CONCAT44((float *)local_3a8,(float *)local_3c0);
            uVar33 = CONCAT44(local_3cc,local_3e0);
            if ((local_340 != (int *)0x0) &&
               (piVar16 = *(int **)*local_340, uVar9 = local_358, piVar16 != (int *)*local_340)) {
              do {
                local_358._4_4_ = (undefined4)(uVar9 >> 0x20);
                local_3a8._0_4_ = (float *)(uVar34 >> 0x20);
                local_3e0 = (float *)uVar33;
                piVar15 = (int *)piVar16[2];
                if (((*piVar15 == 1) || (*piVar15 == 2)) && ((char)piVar15[0xc] != '\0')) {
                  local_2cc = (float)piVar15[0xb];
                  uVar2 = *(undefined8 *)(piVar15 + 9);
                  uVar20 = piVar15[8] & 0x80000001;
                  bVar28 = uVar20 == 0;
                  if ((int)uVar20 < 0) {
                    bVar28 = (uVar20 - 1 | 0xfffffffe) == 0xffffffff;
                  }
                  local_2d4._0_4_ = (float)uVar2;
                  local_2d4._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
                  if (bVar28) {
                    local_3cc = local_2d4._4_4_;
                    local_2d4._4_4_ = (float)local_2d4;
                  }
                  else {
                    local_3cc = (float)local_2d4;
                  }
                  local_358._0_4_ = *local_380 * 0.5 * 65536.0;
                  local_3c0._0_4_ = (float *)local_2d4._4_4_;
                  local_2d4 = uVar2;
                  uVar33 = FUN_0054a946();
                  local_3e0 = (float *)(uVar33 >> 0x20);
                  local_3a8._0_4_ = (float *)uVar33;
                  local_350 = CONCAT44(local_350._4_4_,(float)(float *)local_3c0 * 0.5 * 65536.0);
                  uVar33 = FUN_0054a946();
                  local_394 = (uint *)(uVar33 >> 0x20);
                  uVar21 = (uint)uVar33;
                  local_3c0._0_4_ = (float *)(piVar15[2] - uVar21);
                  iVar22 = (piVar15[3] - (int)local_394) - (uint)((uint)piVar15[2] < uVar21);
                  local_370 = CONCAT44(local_370._4_4_,uVar21);
                  uVar20 = *local_3a0;
                  local_3b8 = (uint *)(uVar20 + (int)(float *)local_3a8 + 0x10000);
                  iVar25 = local_3a0[1] + (int)local_3e0 +
                           (uint)CARRY4(uVar20,(uint)(float *)local_3a8) +
                           (uint)(0xfffeffff < uVar20 + (int)(float *)local_3a8);
                  uVar33 = CONCAT44(local_3cc,local_3e0);
                  if ((iVar22 <= iVar25) &&
                     ((iVar22 < iVar25 ||
                      (uVar33 = CONCAT44(local_3cc,local_3e0), (float *)local_3c0 <= local_3b8)))) {
                    iVar25 = ((local_3a0[1] - (int)local_3e0) - (uint)(uVar20 < (float *)local_3a8))
                             - (uint)(uVar20 - (int)(float *)local_3a8 < 0x10000);
                    iVar22 = (int)local_394 + (uint)CARRY4(uVar21,piVar15[2]) + piVar15[3];
                    uVar33 = CONCAT44(local_3cc,local_3e0);
                    if ((iVar25 <= iVar22) &&
                       ((iVar25 < iVar22 ||
                        (uVar33 = CONCAT44(local_3cc,local_3e0),
                        (uVar20 - (int)(float *)local_3a8) - 0x10000 < uVar21 + piVar15[2])))) {
                      local_39c = (undefined4 *)(*(float *)((int)local_3e8 + 0x84) * 0.5 * 65536.0);
                      uVar33 = FUN_0054a946();
                      local_3a8._0_4_ = (float *)(uVar33 >> 0x20);
                      local_3c0._0_4_ = (float *)uVar33;
                      local_33c = local_3cc * 0.5 * 65536.0;
                      puVar17 = *(uint **)((int)local_3e8 + 0x18);
                      uVar33 = FUN_0054a946();
                      pvVar27 = local_3e8;
                      local_3cc = (float)(uVar33 >> 0x20);
                      local_3e0 = (float *)uVar33;
                      local_3b8 = (uint *)((int)puVar17 + (int)(float *)local_3c0 + 0x10000);
                      iVar22 = *(int *)((int)local_3e8 + 0x1c) + (int)(float *)local_3a8 +
                               (uint)CARRY4((uint)puVar17,(uint)(float *)local_3c0) +
                               (uint)(0xfffeffff < (uint)((int)puVar17 + (int)(float *)local_3c0));
                      local_394 = (uint *)(piVar15[4] - (int)local_3e0);
                      iVar25 = (piVar15[5] - (int)local_3cc) - (uint)((uint)piVar15[4] < local_3e0);
                      if ((iVar25 <= iVar22) && ((iVar25 < iVar22 || (local_394 <= local_3b8)))) {
                        iVar22 = ((*(int *)((int)local_3e8 + 0x1c) - (int)(float *)local_3a8) -
                                 (uint)(puVar17 < (float *)local_3c0)) -
                                 (uint)((uint)((int)puVar17 - (int)(float *)local_3c0) < 0x10000);
                        iVar25 = (int)local_3cc + piVar15[5] +
                                 (uint)CARRY4((uint)local_3e0,piVar15[4]);
                        if ((iVar22 <= iVar25) &&
                           ((iVar22 < iVar25 ||
                            (((int)puVar17 - (int)(float *)local_3c0) - 0x10000U <
                             (uint)((int)local_3e0 + piVar15[4]))))) {
                          local_344 = *(float *)((int)local_3e8 + 0x88) * 0.5 * 65536.0;
                          uVar34 = FUN_0054a946();
                          local_3a8._0_4_ = (float *)(uVar34 >> 0x20);
                          local_3c0._0_4_ = (float *)uVar34;
                          iVar25 = *(int *)((int)pvVar27 + 0x24) + (int)(float *)local_3a8 +
                                   (uint)CARRY4(*(uint *)((int)pvVar27 + 0x20),
                                                (uint)(float *)local_3c0);
                          uVar33 = CONCAT44(local_3cc,local_3e0);
                          uVar9 = CONCAT44(local_358._4_4_,(float)local_358);
                          if ((piVar15[7] <= iVar25) &&
                             ((piVar15[7] < iVar25 ||
                              (uVar33 = CONCAT44(local_3cc,local_3e0),
                              uVar9 = CONCAT44(local_358._4_4_,(float)local_358),
                              (uint)piVar15[6] <=
                              *(uint *)((int)pvVar27 + 0x20) + (int)(float *)local_3c0)))) {
                            local_338 = local_2cc * 65536.0;
                            uVar33 = FUN_0054a946();
                            local_3b8 = (uint *)((uint)uVar33 + piVar15[6]);
                            iVar22 = (int)(uVar33 >> 0x20) + piVar15[7] +
                                     (uint)CARRY4((uint)uVar33,piVar15[6]);
                            iVar25 = (*(int *)((int)pvVar27 + 0x24) - (int)(float *)local_3a8) -
                                     (uint)(*(uint *)((int)pvVar27 + 0x20) < (float *)local_3c0);
                            uVar34 = CONCAT44((float *)local_3a8,(float *)local_3c0);
                            uVar33 = CONCAT44(local_3cc,local_3e0);
                            uVar9 = CONCAT44(local_358._4_4_,(float)local_358);
                            if ((iVar25 <= iVar22) &&
                               ((iVar25 < iVar22 ||
                                (uVar34 = CONCAT44((float *)local_3a8,(float *)local_3c0),
                                uVar33 = CONCAT44(local_3cc,local_3e0),
                                uVar9 = CONCAT44(local_358._4_4_,(float)local_358),
                                (uint *)(*(uint *)((int)pvVar27 + 0x20) - (int)(float *)local_3c0) <
                                local_3b8)))) {
                              *(undefined1 *)(piVar15 + 0xc) = 0;
                              *(undefined4 *)(piVar16[2] + 0x34) = 0;
                              uVar34 = CONCAT44((float *)local_3a8,(float *)local_3c0);
                              uVar33 = CONCAT44(local_3cc,local_3e0);
                              uVar9 = CONCAT44(local_358._4_4_,(float)local_358);
                            }
                          }
                          goto LAB_004dcb95;
                        }
                      }
                    }
                  }
                  uVar34 = CONCAT44((float *)local_3a8,(float *)local_3c0);
                  pvVar27 = local_3e8;
                  uVar9 = CONCAT44(local_358._4_4_,(float)local_358);
                }
LAB_004dcb95:
                local_358 = uVar9;
                piVar16 = (int *)*piVar16;
                piVar15 = local_3c4;
                uVar9 = local_358;
              } while (piVar16 != (int *)*local_340);
            }
            local_3a8._0_4_ = (float *)(uVar34 >> 0x20);
            local_3c0._0_4_ = (float *)uVar34;
            pfVar19 = (float *)((int)local_3dc + 1);
            iVar22 = (int)local_328;
            pfVar23 = local_3c8;
            local_3dc = (int **)pfVar19;
            uVar9 = CONCAT44(local_3c0._4_4_,(float *)local_3c0);
          } while ((int)pfVar19 <= (int)local_328);
        }
        local_3c0 = uVar9;
        piVar15 = (int *)((int)piVar15 + 1);
        pfVar19 = pfVar23;
        iVar25 = local_38c;
        local_3c4 = piVar15;
        uVar9 = local_3c0;
        uVar34 = local_3a8;
      } while ((int)piVar15 <= (int)local_3d0);
    }
  }
  if ((local_3d2 != '\0') && ((*(byte *)((int)pvVar27 + 0x124) & 1) == 0)) goto LAB_004dcfc6;
  if (iVar25 < 4) {
    if (local_3d2 == '\0') {
      if ((0.0 <= (float)local_3d8) && (local_3e9 == '\0')) {
        fVar30 = (float)local_3d8 * 4.0;
        iVar25 = 0;
        if (3 < param_2) {
          iVar22 = (param_2 - 4U >> 2) + 1;
          iVar25 = iVar22 * 4;
          do {
            fVar31 = (fVar30 - *(float *)((int)pvVar27 + 0x3c)) * 0.05 +
                     *(float *)((int)pvVar27 + 0x3c);
            fVar31 = (fVar30 - fVar31) * 0.05 + fVar31;
            fVar31 = (fVar30 - fVar31) * 0.05 + fVar31;
            *(float *)((int)pvVar27 + 0x3c) = (fVar30 - fVar31) * 0.05 + fVar31;
            iVar22 = iVar22 + -1;
          } while (iVar22 != 0);
        }
        if (iVar25 < param_2) {
          iVar25 = param_2 - iVar25;
          do {
            *(float *)((int)pvVar27 + 0x3c) =
                 (fVar30 - *(float *)((int)pvVar27 + 0x3c)) * 0.05 + *(float *)((int)pvVar27 + 0x3c)
            ;
            iVar25 = iVar25 + -1;
          } while (iVar25 != 0);
        }
      }
LAB_004dccea:
      fVar30 = 6.0;
      if ((*(byte *)((int)pvVar27 + 0x124) & 0x40) != 0) {
        fVar30 = 12.0;
      }
      iVar25 = 0;
      if (local_3d1 == '\0') {
        fVar31 = fVar30 * (float)local_3e4;
        if (3 < param_2) {
          iVar22 = (param_2 - 4U >> 2) + 1;
          iVar25 = iVar22 * 4;
          do {
            fVar32 = (fVar31 - *(float *)((int)pvVar27 + 0x34)) * 0.001 +
                     *(float *)((int)pvVar27 + 0x34);
            fVar32 = (fVar31 - fVar32) * 0.001 + fVar32;
            fVar32 = (fVar31 - fVar32) * 0.001 + fVar32;
            *(float *)((int)pvVar27 + 0x34) = (fVar31 - fVar32) * 0.001 + fVar32;
            iVar22 = iVar22 + -1;
          } while (iVar22 != 0);
        }
        if (iVar25 < param_2) {
          iVar25 = param_2 - iVar25;
          do {
            *(float *)((int)pvVar27 + 0x34) =
                 (fVar31 - *(float *)((int)pvVar27 + 0x34)) * 0.001 +
                 *(float *)((int)pvVar27 + 0x34);
            iVar25 = iVar25 + -1;
          } while (iVar25 != 0);
        }
        fVar30 = fVar30 * (float)local_3b0;
        iVar25 = 0;
        if (3 < param_2) {
          iVar22 = (param_2 - 4U >> 2) + 1;
          iVar25 = iVar22 * 4;
          do {
            fVar31 = (fVar30 - *(float *)((int)pvVar27 + 0x38)) * 0.001 +
                     *(float *)((int)pvVar27 + 0x38);
            fVar31 = (fVar30 - fVar31) * 0.001 + fVar31;
            fVar31 = (fVar30 - fVar31) * 0.001 + fVar31;
            *(float *)((int)pvVar27 + 0x38) = (fVar30 - fVar31) * 0.001 + fVar31;
            iVar22 = iVar22 + -1;
          } while (iVar22 != 0);
        }
        if (iVar25 < param_2) {
          iVar25 = param_2 - iVar25;
          do {
            *(float *)((int)pvVar27 + 0x38) =
                 (fVar30 - *(float *)((int)pvVar27 + 0x38)) * 0.001 +
                 *(float *)((int)pvVar27 + 0x38);
            iVar25 = iVar25 + -1;
          } while (iVar25 != 0);
        }
      }
      else {
        fVar30 = (float)local_3e4 * 8.0;
        if (3 < param_2) {
          iVar22 = (param_2 - 4U >> 2) + 1;
          iVar25 = iVar22 * 4;
          do {
            fVar31 = (fVar30 - *(float *)((int)pvVar27 + 0x34)) * 0.01 +
                     *(float *)((int)pvVar27 + 0x34);
            fVar31 = (fVar30 - fVar31) * 0.01 + fVar31;
            fVar31 = (fVar30 - fVar31) * 0.01 + fVar31;
            *(float *)((int)pvVar27 + 0x34) = (fVar30 - fVar31) * 0.01 + fVar31;
            iVar22 = iVar22 + -1;
          } while (iVar22 != 0);
        }
        if (iVar25 < param_2) {
          iVar25 = param_2 - iVar25;
          do {
            *(float *)((int)pvVar27 + 0x34) =
                 (fVar30 - *(float *)((int)pvVar27 + 0x34)) * 0.01 + *(float *)((int)pvVar27 + 0x34)
            ;
            iVar25 = iVar25 + -1;
          } while (iVar25 != 0);
        }
        iVar25 = 0;
        fVar30 = (float)local_3b0 * 8.0;
        if (3 < param_2) {
          iVar22 = (param_2 - 4U >> 2) + 1;
          iVar25 = iVar22 * 4;
          do {
            fVar31 = (fVar30 - *(float *)((int)pvVar27 + 0x38)) * 0.01 +
                     *(float *)((int)pvVar27 + 0x38);
            fVar31 = (fVar30 - fVar31) * 0.01 + fVar31;
            fVar31 = (fVar30 - fVar31) * 0.01 + fVar31;
            *(float *)((int)pvVar27 + 0x38) = (fVar30 - fVar31) * 0.01 + fVar31;
            iVar22 = iVar22 + -1;
          } while (iVar22 != 0);
        }
        if (iVar25 < param_2) {
          iVar25 = param_2 - iVar25;
          do {
            *(float *)((int)pvVar27 + 0x38) =
                 (fVar30 - *(float *)((int)pvVar27 + 0x38)) * 0.01 + *(float *)((int)pvVar27 + 0x38)
            ;
            iVar25 = iVar25 + -1;
          } while (iVar25 != 0);
        }
      }
    }
    else {
      if ((float)local_3d8 < 0.0) goto LAB_004dccea;
      *(float *)((int)pvVar27 + 0x34) = (float)local_3e4 * 8.0;
      *(float *)((int)pvVar27 + 0x38) = (float)local_3b0 * 8.0;
      *(float *)((int)pvVar27 + 0x3c) = (float)local_3d8 * 8.0;
    }
    *(float *)((int)pvVar27 + 0x40) = (float)local_3e4 * 20.0;
    *(float *)((int)pvVar27 + 0x44) = (float)local_3b0 * 20.0;
    *(float *)((int)pvVar27 + 0x48) = (float)local_3d8 * 20.0;
  }
  else {
    *(float *)((int)pvVar27 + 0x40) = (float)local_3e4 * 40.0;
    *(float *)((int)pvVar27 + 0x44) = (float)local_3b0 * 40.0;
    *(float *)((int)pvVar27 + 0x48) = (float)local_3d8 * 40.0;
  }
  *(undefined4 *)((int)pvVar27 + 0x4c) = 0;
  *(undefined4 *)((int)pvVar27 + 0x50) = 0;
  *(undefined4 *)((int)pvVar27 + 0x54) = 0;
LAB_004dcfc6:
  local_3cc = (float)(uVar33 >> 0x20);
  local_3e0 = (float *)uVar33;
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)auStack_3ec);
  return;
}


/* FUN_004dde00 @ 004dde00  kind=gamemisc  attributed-by=none  size=144 */

void __thiscall FUN_004dde00(void *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = *(float *)((int)this + 0x14);
  *param_1 = *(float *)((int)this + 0x10) * fVar2 + fVar1 * *(float *)this +
             *(float *)((int)this + 0x20) * fVar3;
  fVar5 = *(float *)((int)this + 0x18);
  param_1[1] = *(float *)((int)this + 4) * fVar1 + fVar4 * fVar2 +
               *(float *)((int)this + 0x24) * fVar3;
  param_1[2] = *(float *)((int)this + 8) * fVar1 + fVar5 * fVar2 +
               *(float *)((int)this + 0x28) * fVar3;
  return;
}


/* FUN_004e1560 @ 004e1560  kind=gamemisc  attributed-by=none  size=141 */

void __cdecl FUN_004e1560(int param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_2;
  while( true ) {
    iVar3 = iVar4 * 2 + 2;
    if (param_3 <= iVar3) break;
    fVar2 = *(float *)(*param_5 + 0x18 + *(int *)(param_1 + -4 + iVar3 * 4) * 0x1c);
    pfVar1 = (float *)(*param_5 + 0x18 + *(int *)(param_1 + iVar3 * 4) * 0x1c);
    if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
      iVar3 = iVar4 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar4 * 4) = *(undefined4 *)(param_1 + iVar3 * 4);
    iVar4 = iVar3;
  }
  if (iVar3 == param_3) {
    *(undefined4 *)(param_1 + iVar4 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    iVar4 = param_3 + -1;
  }
  FUN_004e1950(param_1,iVar4,param_2,param_4,param_5);
  return;
}


/* FUN_004e15f0 @ 004e15f0  kind=gamemisc  attributed-by=none  size=256 */

void __cdecl FUN_004e15f0(int *param_1,int *param_2,int *param_3)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *local_8;
  
  if ((param_1 != param_2) && (piVar5 = param_1 + 1, piVar5 != param_2)) {
    do {
      iVar3 = *piVar5;
      fVar2 = *(float *)(*param_3 + 0x18 + iVar3 * 0x1c);
      if (*(float *)(*param_3 + 0x18 + *param_1 * 0x1c) <= fVar2) {
        iVar4 = piVar5[-1];
        piVar6 = piVar5;
        local_8 = piVar5;
        if (fVar2 < *(float *)(*param_3 + 0x18 + iVar4 * 0x1c)) {
          do {
            local_8 = piVar6 + -1;
            *piVar6 = iVar4;
            iVar4 = piVar6[-2];
            fVar2 = *(float *)(*param_3 + 0x18 + iVar4 * 0x1c);
            pfVar1 = (float *)(*param_3 + 0x18 + iVar3 * 0x1c);
            piVar6 = local_8;
          } while (*pfVar1 <= fVar2 && fVar2 != *pfVar1);
        }
        *local_8 = iVar3;
      }
      else {
        iVar4 = (int)piVar5 - (int)param_1 >> 2;
        memmove(piVar5 + (1 - iVar4),param_1,iVar4 * 4);
        *param_1 = iVar3;
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != param_2);
  }
  return;
}


/* FUN_004e16f0 @ 004e16f0  kind=gamemisc  attributed-by=none  size=206 */

void __cdecl FUN_004e16f0(int param_1,int param_2,int *param_3)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_10;
  int local_c;
  int local_8;
  
  iVar6 = param_2 - param_1 >> 2;
  iVar4 = iVar6 - (param_2 - param_1 >> 0x1f) >> 1;
  if (0 < iVar4) {
    local_c = iVar4 * 2 + 2;
    do {
      iVar4 = iVar4 + -1;
      local_10 = *(int *)(param_1 + iVar4 * 4);
      local_c = local_c + -2;
      local_8 = iVar4;
      for (iVar5 = local_c; iVar5 < iVar6; iVar5 = iVar5 * 2 + 2) {
        fVar2 = *(float *)(*param_3 + 0x18 + *(int *)(param_1 + -4 + iVar5 * 4) * 0x1c);
        pfVar1 = (float *)(*param_3 + 0x18 + *(int *)(param_1 + iVar5 * 4) * 0x1c);
        if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
          iVar5 = iVar5 + -1;
        }
        *(undefined4 *)(param_1 + local_8 * 4) = *(undefined4 *)(param_1 + iVar5 * 4);
        local_8 = iVar5;
      }
      iVar3 = local_8;
      if (iVar5 == iVar6) {
        *(undefined4 *)(param_1 + local_8 * 4) = *(undefined4 *)(param_1 + -4 + iVar6 * 4);
        iVar3 = iVar6 + -1;
      }
      FUN_004e1950(param_1,iVar3,iVar4,&local_10,param_3);
    } while (0 < iVar4);
  }
  return;
}


/* FUN_004e17c0 @ 004e17c0  kind=gamemisc  attributed-by=none  size=168 */

void __cdecl FUN_004e17c0(int *param_1,int *param_2,int *param_3,int *param_4)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = *param_2;
  fVar2 = *(float *)(*param_4 + 0x18 + *param_1 * 0x1c);
  pfVar1 = (float *)(*param_4 + 0x18 + iVar3 * 0x1c);
  if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
    *param_2 = *param_1;
    *param_1 = iVar3;
  }
  iVar3 = *param_3;
  fVar2 = *(float *)(*param_4 + 0x18 + *param_2 * 0x1c);
  pfVar1 = (float *)(*param_4 + 0x18 + iVar3 * 0x1c);
  if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
    *param_3 = *param_2;
    *param_2 = iVar3;
    fVar2 = *(float *)(*param_4 + 0x18 + *param_1 * 0x1c);
    pfVar1 = (float *)(*param_4 + 0x18 + iVar3 * 0x1c);
    if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
      *param_2 = *param_1;
      *param_1 = iVar3;
    }
  }
  return;
}


/* FUN_004e1870 @ 004e1870  kind=gamemisc  attributed-by=none  size=159 */

void __cdecl FUN_004e1870(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = (int)param_3 - (int)param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_004e17c0(param_1,param_1 + iVar1,param_1 + iVar1 * 2,param_4);
    FUN_004e17c0(param_2 + -iVar1,param_2,param_2 + iVar1,param_4);
    FUN_004e17c0(param_3 + iVar1 * -2,param_3 + -iVar1,param_3,param_4);
    FUN_004e17c0(param_1 + iVar1,param_2,param_3 + -iVar1,param_4);
    return;
  }
  FUN_004e17c0(param_1,param_2,param_3,param_4);
  return;
}


/* FUN_004e1910 @ 004e1910  kind=gamemisc  attributed-by=none  size=64 */

void __cdecl FUN_004e1910(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  for (; param_1 != param_2; param_1 = (undefined8 *)((int)param_1 + 0x1c)) {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3[2] = param_1[2];
    *(undefined4 *)(param_3 + 3) = *(undefined4 *)(param_1 + 3);
    param_3 = (undefined8 *)((int)param_3 + 0x1c);
  }
  return;
}


/* FUN_004e1950 @ 004e1950  kind=gamemisc  attributed-by=none  size=158 */

void __cdecl FUN_004e1950(int param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 <= param_3) {
    *(int *)(param_1 + param_2 * 4) = *param_4;
    return;
  }
  do {
    iVar4 = (param_2 + -1) / 2;
    iVar3 = *(int *)(param_1 + iVar4 * 4);
    fVar2 = *(float *)(*param_5 + 0x18 + *param_4 * 0x1c);
    pfVar1 = (float *)(*param_5 + 0x18 + iVar3 * 0x1c);
    if (fVar2 < *pfVar1 || fVar2 == *pfVar1) {
      *(int *)(param_1 + param_2 * 4) = *param_4;
      return;
    }
    *(int *)(param_1 + param_2 * 4) = iVar3;
    param_2 = iVar4;
  } while (param_3 < iVar4);
  *(int *)(param_1 + iVar4 * 4) = *param_4;
  return;
}


/* FUN_004e1ae0 @ 004e1ae0  kind=gamemisc  attributed-by=none  size=82 */

void __cdecl FUN_004e1ae0(undefined4 *param_1,int param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_3;
  uVar2 = param_2 - (int)param_1;
  while (4 < (int)(uVar2 & 0xfffffffc)) {
    param_2 = *(int *)((int)param_1 + (uVar2 - 4));
    *(undefined4 *)((int)param_1 + (uVar2 - 4)) = *param_1;
    uVar2 = uVar2 - 4;
    FUN_004e1560((int)param_1,0,(int)uVar2 >> 2,&param_2,piVar1);
  }
  return;
}


/* FUN_004e1b40 @ 004e1b40  kind=gamemisc  attributed-by=none  size=532 */

void __cdecl FUN_004e1b40(uint *param_1,int *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *local_10;
  int *local_c;
  int *local_8;
  
  local_c = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                      1);
  FUN_004e1870(param_2,local_c,param_3 + -1,param_4);
  piVar5 = local_c + 1;
  if (param_2 < local_c) {
    do {
      piVar1 = local_c + -1;
      fVar2 = *(float *)(*param_4 + 0x18 + *piVar1 * 0x1c);
      fVar3 = *(float *)(*param_4 + 0x18 + *local_c * 0x1c);
      if ((fVar2 < fVar3) || (fVar3 < fVar2)) break;
      local_c = piVar1;
    } while (param_2 < piVar1);
  }
  local_10 = piVar5;
  piVar1 = piVar5;
  piVar6 = local_c;
  if (piVar5 < param_3) {
    fVar2 = *(float *)(*param_4 + 0x18 + *local_c * 0x1c);
    do {
      fVar3 = *(float *)(*param_4 + 0x18 + *piVar5 * 0x1c);
      local_10 = piVar5;
      piVar1 = piVar5;
      if ((fVar3 < fVar2) || (fVar2 < fVar3)) break;
      piVar5 = piVar5 + 1;
      local_10 = piVar5;
      piVar1 = piVar5;
    } while (piVar5 < param_3);
  }
joined_r0x004e1c15:
  do {
    piVar7 = local_c;
    if (param_3 <= piVar5) {
joined_r0x004e1c74:
      while (local_c = piVar7, param_2 < local_c) {
        piVar7 = local_c + -1;
        fVar2 = *(float *)(*param_4 + 0x18 + local_c[-1] * 0x1c);
        fVar3 = *(float *)(*param_4 + 0x18 + *piVar6 * 0x1c);
        piVar5 = local_10;
        if (fVar3 <= fVar2) {
          if (fVar3 < fVar2) break;
          iVar4 = piVar6[-1];
          piVar6 = piVar6 + -1;
          *piVar6 = *piVar7;
          *piVar7 = iVar4;
        }
      }
      if (local_c == param_2) {
        if (piVar5 == param_3) {
          *param_1 = (uint)piVar6;
          param_1[1] = (uint)piVar1;
          return;
        }
        if (piVar1 != piVar5) {
          iVar4 = *piVar6;
          *piVar6 = *piVar1;
          *piVar1 = iVar4;
        }
        iVar4 = *piVar6;
        *piVar6 = *piVar5;
        *piVar5 = iVar4;
        piVar5 = local_10 + 1;
        local_10 = local_10 + 1;
        piVar1 = piVar1 + 1;
        piVar6 = piVar6 + 1;
      }
      else {
        local_c = local_c + -1;
        if (piVar5 == param_3) {
          piVar6 = piVar6 + -1;
          if (local_c != piVar6) {
            iVar4 = *local_c;
            *local_c = *piVar6;
            *piVar6 = iVar4;
          }
          iVar4 = *piVar6;
          *piVar6 = piVar1[-1];
          piVar1[-1] = iVar4;
          piVar1 = piVar1 + -1;
        }
        else {
          iVar4 = *piVar5;
          *piVar5 = *local_c;
          *local_c = iVar4;
          piVar5 = piVar5 + 1;
          local_10 = piVar5;
        }
      }
      goto joined_r0x004e1c15;
    }
    fVar2 = *(float *)(*param_4 + 0x18 + *piVar6 * 0x1c);
    fVar3 = *(float *)(*param_4 + 0x18 + *piVar5 * 0x1c);
    local_8 = piVar1;
    if (fVar3 <= fVar2) {
      local_10 = piVar5;
      if (fVar3 < fVar2) goto joined_r0x004e1c74;
      local_8 = piVar1 + 1;
      iVar4 = *piVar1;
      *piVar1 = *piVar5;
      *piVar5 = iVar4;
    }
    piVar5 = piVar5 + 1;
    local_10 = piVar5;
    piVar1 = local_8;
  } while( true );
}


/* FUN_004e1db0 @ 004e1db0  kind=gamemisc  attributed-by=none  size=72 */

void __cdecl FUN_004e1db0(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0xc);
    do {
      if (puVar1 != (undefined4 *)0xc) {
        puVar1[-3] = 0;
        puVar1[-2] = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
      }
      puVar1 = puVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


/* FUN_004e1e00 @ 004e1e00  kind=gamemisc  attributed-by=none  size=68 */

void __cdecl FUN_004e1e00(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  for (; param_1 != param_2; param_1 = (undefined8 *)((int)param_1 + 0x1c)) {
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      *(undefined4 *)(param_3 + 3) = *(undefined4 *)(param_1 + 3);
    }
    param_3 = (undefined8 *)((int)param_3 + 0x1c);
  }
  return;
}


/* FUN_004e1e50 @ 004e1e50  kind=gamemisc  attributed-by=none  size=54 */

undefined4 * __cdecl FUN_004e1e50(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
    }
    param_1 = param_1 + 2;
    param_3 = param_3 + 2;
  } while (param_1 != param_2);
  return param_3;
}


/* FUN_004e23b0 @ 004e23b0  kind=gamemisc  attributed-by=none  size=75 */

uint __thiscall FUN_004e23b0(void *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x1c;
  if (0x9249249 - (uVar1 >> 1) < uVar1) {
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


/* FUN_004e26c0 @ 004e26c0  kind=gamemisc  attributed-by=none  size=111 */

int __thiscall FUN_004e26c0(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 8) - *(int *)((int)this + 4);
  iVar2 = iVar3 * -0x6db6db6d;
  if ((uint)(iVar3 / 0x1c) < param_1) {
    iVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x1c;
    if (0x9249249U - iVar2 < param_1) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("vector<T> too long");
    }
    uVar1 = FUN_004e23b0(this,iVar2 + param_1);
    iVar2 = FUN_004e2400(this,uVar1);
  }
  return iVar2;
}


/* FUN_004e2730 @ 004e2730  kind=gamemisc  attributed-by=none  size=115 */

void __thiscall FUN_004e2730(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 <= (uint)(*(int *)((int)this + 8) - *(int *)((int)this + 4) >> 5)) {
    return;
  }
  iVar2 = *(int *)((int)this + 4) - *(int *)this >> 5;
  if (0x7ffffffU - iVar2 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar3 = iVar2 + param_1;
  uVar1 = *(int *)((int)this + 8) - *(int *)this >> 5;
  if (0x7ffffff - (uVar1 >> 1) < uVar1) {
    uVar1 = 0;
    if (uVar3 != 0) {
      uVar1 = uVar3;
    }
    FUN_004e2500(this,uVar1);
    return;
  }
  uVar1 = uVar1 + (uVar1 >> 1);
  if (uVar1 < uVar3) {
    uVar1 = uVar3;
  }
  FUN_004e2500(this,uVar1);
  return;
}


/* FUN_004f38a0 @ 004f38a0  kind=gamemisc  attributed-by=none  size=147 */

void __cdecl FUN_004f38a0(int param_1,int param_2,int param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_2;
  while( true ) {
    iVar4 = iVar3 * 2 + 2;
    if (param_3 <= iVar4) break;
    fVar2 = *(float *)(param_1 + -0xc + iVar4 * 0xc);
    pfVar1 = (float *)(param_1 + iVar4 * 0xc);
    if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
      iVar4 = iVar3 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar3 * 0xc) = *(undefined4 *)(param_1 + iVar4 * 0xc);
    *(undefined4 *)(param_1 + 4 + iVar3 * 0xc) = *(undefined4 *)(param_1 + 4 + iVar4 * 0xc);
    *(undefined4 *)(param_1 + 8 + iVar3 * 0xc) = *(undefined4 *)(param_1 + 8 + iVar4 * 0xc);
    iVar3 = iVar4;
  }
  if (iVar4 == param_3) {
    *(undefined4 *)(param_1 + iVar3 * 0xc) = *(undefined4 *)(param_1 + -0xc + param_3 * 0xc);
    *(undefined4 *)(param_1 + 4 + iVar3 * 0xc) = *(undefined4 *)(param_1 + -8 + param_3 * 0xc);
    *(undefined4 *)(param_1 + 8 + iVar3 * 0xc) = *(undefined4 *)(param_1 + -4 + param_3 * 0xc);
    iVar3 = param_3 + -1;
  }
  FUN_004f5ac0(param_1,iVar3,param_2,param_4);
  return;
}


/* FUN_004f3a80 @ 004f3a80  kind=gamemisc  attributed-by=none  size=148 */

void __cdecl FUN_004f3a80(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_2;
  while( true ) {
    iVar4 = iVar3 * 2 + 2;
    if (param_3 <= iVar4) break;
    fVar2 = *(float *)(param_1 + 8 + iVar4 * 0xc);
    pfVar1 = (float *)(param_1 + -4 + iVar4 * 0xc);
    if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
      iVar4 = iVar3 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar3 * 0xc) = *(undefined4 *)(param_1 + iVar4 * 0xc);
    *(undefined4 *)(param_1 + 4 + iVar3 * 0xc) = *(undefined4 *)(param_1 + 4 + iVar4 * 0xc);
    *(undefined4 *)(param_1 + 8 + iVar3 * 0xc) = *(undefined4 *)(param_1 + 8 + iVar4 * 0xc);
    iVar3 = iVar4;
  }
  if (iVar4 == param_3) {
    *(undefined4 *)(param_1 + iVar3 * 0xc) = *(undefined4 *)(param_1 + -0xc + param_3 * 0xc);
    *(undefined4 *)(param_1 + 4 + iVar3 * 0xc) = *(undefined4 *)(param_1 + -8 + param_3 * 0xc);
    *(undefined4 *)(param_1 + 8 + iVar3 * 0xc) = *(undefined4 *)(param_1 + -4 + param_3 * 0xc);
    iVar3 = param_3 + -1;
  }
  FUN_004f5c40(param_1,iVar3,param_2,param_4);
  return;
}


/* FUN_004f4860 @ 004f4860  kind=gamemisc  attributed-by=none  size=217 */

void __cdecl FUN_004f4860(float *param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float *pfVar6;
  uint uVar7;
  float *pfVar8;
  
  uVar7 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  pfVar6 = param_1;
  if (param_1 != param_2) {
    while (pfVar6 = pfVar6 + 3, pfVar6 != param_2) {
      fVar2 = *pfVar6;
      uVar5 = *(undefined8 *)(pfVar6 + 1);
      uVar4 = *(undefined8 *)(pfVar6 + 1);
      if (*param_1 <= fVar2) {
        fVar3 = pfVar6[-3];
        pfVar8 = pfVar6;
        while (fVar2 < fVar3) {
          *pfVar8 = fVar3;
          pfVar8[1] = pfVar8[-2];
          pfVar8[2] = pfVar8[-1];
          fVar3 = pfVar8[-6];
          pfVar8 = pfVar8 + -3;
        }
        *pfVar8 = fVar2;
        *(undefined8 *)(pfVar8 + 1) = uVar5;
      }
      else {
        if (param_1 != pfVar6) {
          pfVar8 = pfVar6 + 4;
          do {
            pfVar8[-4] = pfVar8[-7];
            pfVar8[-3] = pfVar8[-6];
            pfVar8[-2] = pfVar8[-5];
            pfVar1 = pfVar8 + -7;
            pfVar8 = pfVar8 + -3;
          } while (pfVar1 != param_1);
        }
        *param_1 = fVar2;
        *(undefined8 *)(param_1 + 1) = uVar4;
      }
    }
  }
  __security_check_cookie(uVar7 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004f4ab0 @ 004f4ab0  kind=gamemisc  attributed-by=none  size=58 */

void __cdecl FUN_004f4ab0(undefined8 *param_1,undefined8 *param_2)

{
  float *pfVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar5 = param_1;
  if (param_1 != param_2) {
    while (puVar4 = (undefined8 *)((int)puVar5 + 0xc), puVar4 != param_2) {
      fVar2 = *(float *)(puVar4 + 1);
      uVar3 = *puVar4;
      if (fVar2 < *(float *)(param_1 + 1) || fVar2 == *(float *)(param_1 + 1)) {
        puVar7 = puVar4;
        puVar6 = puVar4;
        if (*(float *)(puVar5 + 1) <= fVar2 && fVar2 != *(float *)(puVar5 + 1)) {
          do {
            puVar6 = (undefined8 *)((int)puVar7 + -0xc);
            *(undefined4 *)puVar7 = *(undefined4 *)puVar6;
            *(undefined4 *)((int)puVar7 + 4) = *(undefined4 *)(puVar7 + -1);
            *(undefined4 *)(puVar7 + 1) = *(undefined4 *)((int)puVar7 + -4);
            pfVar1 = (float *)(puVar7 + -2);
            puVar7 = puVar6;
          } while (*pfVar1 <= fVar2 && fVar2 != *pfVar1);
        }
        *puVar6 = uVar3;
        *(float *)(puVar6 + 1) = fVar2;
        puVar5 = puVar4;
      }
      else {
        if (param_1 != puVar4) {
          puVar5 = puVar5 + 4;
          do {
            *(undefined4 *)((int)puVar5 + -0x14) = *(undefined4 *)(puVar5 + -4);
            *(undefined4 *)(puVar5 + -2) = *(undefined4 *)((int)puVar5 + -0x1c);
            *(undefined4 *)((int)puVar5 + -0xc) = *(undefined4 *)(puVar5 + -3);
            puVar7 = puVar5 + -4;
            puVar5 = (undefined8 *)((int)puVar5 + -0xc);
          } while (puVar7 != param_1);
        }
        *param_1 = uVar3;
        *(float *)(param_1 + 1) = fVar2;
        puVar5 = puVar4;
      }
    }
  }
  return;
}


/* FUN_004f4b50 @ 004f4b50  kind=gamemisc  attributed-by=none  size=345 */

void __cdecl FUN_004f4b50(int param_1,int param_2)

{
  undefined8 *puVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  uVar7 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  iVar5 = (param_2 - param_1) / 0xc;
  iVar12 = iVar5 / 2;
  if (0 < iVar12) {
    iVar10 = iVar12 * 2 + 2;
    iVar8 = param_1 + iVar12 * 0xc + 8;
    do {
      puVar1 = (undefined8 *)(iVar8 + -0x10);
      fVar3 = *(float *)(iVar8 + -0x14);
      iVar8 = iVar8 + -0xc;
      uVar6 = *puVar1;
      iVar10 = iVar10 + -2;
      iVar12 = iVar12 + -1;
      iVar11 = iVar10;
      iVar9 = iVar12;
      while (iVar13 = iVar11, iVar13 < iVar5) {
        fVar4 = *(float *)(param_1 + -0xc + iVar13 * 0xc);
        pfVar2 = (float *)(param_1 + iVar13 * 0xc);
        if (*pfVar2 <= fVar4 && fVar4 != *pfVar2) {
          iVar13 = iVar13 + -1;
        }
        *(undefined4 *)(param_1 + iVar9 * 0xc) = *(undefined4 *)(param_1 + iVar13 * 0xc);
        *(undefined4 *)(param_1 + 4 + iVar9 * 0xc) = *(undefined4 *)(param_1 + 4 + iVar13 * 0xc);
        *(undefined4 *)(param_1 + 8 + iVar9 * 0xc) = *(undefined4 *)(param_1 + 8 + iVar13 * 0xc);
        iVar9 = iVar13;
        iVar11 = iVar13 * 2 + 2;
      }
      if (iVar13 == iVar5) {
        *(undefined4 *)(param_1 + iVar9 * 0xc) = *(undefined4 *)(param_1 + -0xc + iVar5 * 0xc);
        *(undefined4 *)(param_1 + 4 + iVar9 * 0xc) = *(undefined4 *)(param_1 + -8 + iVar5 * 0xc);
        *(undefined4 *)(param_1 + 8 + iVar9 * 0xc) = *(undefined4 *)(param_1 + -4 + iVar5 * 0xc);
        iVar9 = iVar5 + -1;
      }
      while (iVar12 < iVar9) {
        iVar11 = (iVar9 + -1) / 2;
        fVar4 = *(float *)(param_1 + iVar11 * 0xc);
        if (fVar3 <= fVar4) break;
        *(float *)(param_1 + iVar9 * 0xc) = fVar4;
        *(undefined4 *)(param_1 + 4 + iVar9 * 0xc) = *(undefined4 *)(param_1 + 4 + iVar11 * 0xc);
        *(undefined4 *)(param_1 + 8 + iVar9 * 0xc) = *(undefined4 *)(param_1 + 8 + iVar11 * 0xc);
        iVar9 = iVar11;
      }
      *(float *)(param_1 + iVar9 * 0xc) = fVar3;
      *(undefined8 *)(param_1 + 4 + iVar9 * 0xc) = uVar6;
    } while (0 < iVar12);
  }
  __security_check_cookie(uVar7 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004f4f30 @ 004f4f30  kind=gamemisc  attributed-by=none  size=279 */

void __cdecl FUN_004f4f30(int param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 local_14;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  iVar3 = (param_2 - param_1) / 0xc;
  iVar8 = iVar3 / 2;
  if (0 < iVar8) {
    iVar7 = iVar8 * 2 + 2;
    iVar5 = param_1 + iVar8 * 0xc;
    do {
      local_14 = *(undefined8 *)(iVar5 + -0xc);
      iVar7 = iVar7 + -2;
      local_c = *(undefined4 *)(iVar5 + -4);
      iVar8 = iVar8 + -1;
      iVar4 = iVar7;
      iVar6 = iVar8;
      while (iVar9 = iVar4, iVar9 < iVar3) {
        fVar2 = *(float *)(param_1 + 8 + iVar9 * 0xc);
        pfVar1 = (float *)(param_1 + -4 + iVar9 * 0xc);
        if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
          iVar9 = iVar9 + -1;
        }
        *(undefined4 *)(param_1 + iVar6 * 0xc) = *(undefined4 *)(param_1 + iVar9 * 0xc);
        *(undefined4 *)(param_1 + 4 + iVar6 * 0xc) = *(undefined4 *)(param_1 + 4 + iVar9 * 0xc);
        *(undefined4 *)(param_1 + 8 + iVar6 * 0xc) = *(undefined4 *)(param_1 + 8 + iVar9 * 0xc);
        iVar6 = iVar9;
        iVar4 = iVar9 * 2 + 2;
      }
      if (iVar9 == iVar3) {
        *(undefined4 *)(param_1 + iVar6 * 0xc) = *(undefined4 *)(param_1 + -0xc + iVar3 * 0xc);
        *(undefined4 *)(param_1 + 4 + iVar6 * 0xc) = *(undefined4 *)(param_1 + -8 + iVar3 * 0xc);
        *(undefined4 *)(param_1 + 8 + iVar6 * 0xc) = *(undefined4 *)(param_1 + -4 + iVar3 * 0xc);
        iVar6 = iVar3 + -1;
      }
      FUN_004f5c40(param_1,iVar6,iVar8,(undefined4 *)&local_14);
      iVar5 = iVar5 + -0xc;
    } while (0 < iVar8);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004f50e0 @ 004f50e0  kind=gamemisc  attributed-by=none  size=141 */

void __cdecl FUN_004f50e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  fVar1 = (float)param_2[2];
  if ((float)param_1[2] <= fVar1 && fVar1 != (float)param_1[2]) {
    uVar2 = *param_2;
    uVar3 = param_2[1];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    *param_1 = uVar2;
    param_1[1] = uVar3;
    param_1[2] = fVar1;
  }
  fVar1 = (float)param_3[2];
  if ((float)param_2[2] <= fVar1 && fVar1 != (float)param_2[2]) {
    uVar2 = *param_3;
    uVar3 = param_3[1];
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    param_3[2] = param_2[2];
    *param_2 = uVar2;
    param_2[1] = uVar3;
    param_2[2] = fVar1;
    if ((float)param_1[2] <= fVar1 && fVar1 != (float)param_1[2]) {
      uVar3 = param_2[1];
      *param_2 = *param_1;
      param_2[1] = param_1[1];
      param_2[2] = param_1[2];
      *param_1 = uVar2;
      param_1[1] = uVar3;
      param_1[2] = fVar1;
    }
  }
  return;
}


/* FUN_004f5170 @ 004f5170  kind=gamemisc  attributed-by=none  size=899 */

void __cdecl FUN_004f5170(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  
  fVar1 = *param_1;
  iVar5 = ((int)param_3 - (int)param_1) / 0xc;
  if (iVar5 < 0x29) {
    fVar2 = *param_2;
    if (fVar2 < fVar1) {
      fVar3 = param_2[1];
      fVar4 = param_2[2];
      *param_2 = fVar1;
      param_2[1] = param_1[1];
      param_2[2] = param_1[2];
      *param_1 = fVar2;
      param_1[1] = fVar3;
      param_1[2] = fVar4;
    }
    fVar1 = *param_3;
    if (fVar1 < *param_2) {
      fVar2 = param_3[1];
      fVar3 = param_3[2];
      *param_3 = *param_2;
      param_3[1] = param_2[1];
      param_3[2] = param_2[2];
      *param_2 = fVar1;
      param_2[1] = fVar2;
      param_2[2] = fVar3;
      fVar1 = *param_2;
      if (fVar1 < *param_1) {
        *param_2 = *param_1;
        param_2[1] = param_1[1];
        param_2[2] = param_1[2];
        *param_1 = fVar1;
        param_1[1] = fVar2;
        param_1[2] = fVar3;
      }
    }
  }
  else {
    iVar5 = iVar5 + 1;
    iVar5 = (int)(iVar5 + (iVar5 >> 0x1f & 7U)) >> 3;
    fVar2 = param_1[iVar5 * 3];
    if (fVar2 < fVar1) {
      fVar3 = param_1[iVar5 * 3 + 2];
      fVar4 = param_1[iVar5 * 3 + 1];
      param_1[iVar5 * 3] = fVar1;
      param_1[iVar5 * 3 + 1] = param_1[1];
      param_1[iVar5 * 3 + 2] = param_1[2];
      *param_1 = fVar2;
      param_1[2] = fVar3;
      param_1[1] = fVar4;
    }
    fVar1 = param_1[iVar5 * 6];
    if (fVar1 < param_1[iVar5 * 3]) {
      fVar2 = param_1[iVar5 * 6 + 1];
      fVar3 = param_1[iVar5 * 6 + 2];
      param_1[iVar5 * 6] = param_1[iVar5 * 3];
      param_1[iVar5 * 6 + 1] = param_1[iVar5 * 3 + 1];
      param_1[iVar5 * 6 + 2] = param_1[iVar5 * 3 + 2];
      param_1[iVar5 * 3] = fVar1;
      param_1[iVar5 * 3 + 1] = fVar2;
      param_1[iVar5 * 3 + 2] = fVar3;
      fVar1 = param_1[iVar5 * 3];
      if (fVar1 < *param_1) {
        param_1[iVar5 * 3] = *param_1;
        param_1[iVar5 * 3 + 1] = param_1[1];
        param_1[iVar5 * 3 + 2] = param_1[2];
        *param_1 = fVar1;
        param_1[1] = fVar2;
        param_1[2] = fVar3;
      }
    }
    fVar1 = *param_2;
    pfVar6 = param_2 + iVar5 * -3;
    if (fVar1 < *pfVar6) {
      fVar2 = param_2[1];
      fVar3 = param_2[2];
      *param_2 = *pfVar6;
      param_2[1] = pfVar6[1];
      param_2[2] = pfVar6[2];
      *pfVar6 = fVar1;
      pfVar6[1] = fVar2;
      pfVar6[2] = fVar3;
    }
    fVar1 = param_2[iVar5 * 3];
    if (fVar1 < *param_2) {
      fVar2 = param_2[iVar5 * 3 + 1];
      fVar3 = param_2[iVar5 * 3 + 2];
      param_2[iVar5 * 3] = *param_2;
      param_2[iVar5 * 3 + 1] = param_2[1];
      param_2[iVar5 * 3 + 2] = param_2[2];
      *param_2 = fVar1;
      param_2[1] = fVar2;
      param_2[2] = fVar3;
      fVar1 = *param_2;
      if (fVar1 < *pfVar6) {
        *param_2 = *pfVar6;
        param_2[1] = pfVar6[1];
        param_2[2] = pfVar6[2];
        *pfVar6 = fVar1;
        pfVar6[1] = fVar2;
        pfVar6[2] = fVar3;
      }
    }
    pfVar7 = param_3 + iVar5 * -6;
    pfVar6 = param_3 + iVar5 * -3;
    fVar1 = *pfVar6;
    if (fVar1 < *pfVar7) {
      fVar2 = pfVar6[2];
      fVar3 = pfVar6[1];
      *pfVar6 = *pfVar7;
      pfVar6[1] = pfVar7[1];
      pfVar6[2] = pfVar7[2];
      *pfVar7 = fVar1;
      pfVar7[2] = fVar2;
      pfVar7[1] = fVar3;
    }
    fVar1 = *param_3;
    if (fVar1 < *pfVar6) {
      fVar2 = param_3[1];
      fVar3 = param_3[2];
      *param_3 = *pfVar6;
      param_3[1] = pfVar6[1];
      param_3[2] = pfVar6[2];
      *pfVar6 = fVar1;
      pfVar6[1] = fVar2;
      pfVar6[2] = fVar3;
      fVar1 = *pfVar6;
      if (fVar1 < *pfVar7) {
        fVar2 = pfVar6[1];
        *pfVar6 = *pfVar7;
        pfVar6[1] = pfVar7[1];
        pfVar6[2] = pfVar7[2];
        *pfVar7 = fVar1;
        pfVar7[1] = fVar2;
        pfVar7[2] = fVar3;
      }
    }
    fVar1 = *param_2;
    if (fVar1 < param_1[iVar5 * 3]) {
      fVar2 = param_2[1];
      fVar3 = param_2[2];
      *param_2 = param_1[iVar5 * 3];
      param_2[1] = param_1[iVar5 * 3 + 1];
      param_2[2] = param_1[iVar5 * 3 + 2];
      param_1[iVar5 * 3] = fVar1;
      param_1[iVar5 * 3 + 1] = fVar2;
      param_1[iVar5 * 3 + 2] = fVar3;
    }
    fVar1 = *pfVar6;
    if (fVar1 < *param_2) {
      fVar2 = pfVar6[1];
      fVar3 = pfVar6[2];
      *pfVar6 = *param_2;
      pfVar6[1] = param_2[1];
      pfVar6[2] = param_2[2];
      *param_2 = fVar1;
      param_2[1] = fVar2;
      param_2[2] = fVar3;
      fVar1 = *param_2;
      if (fVar1 < param_1[iVar5 * 3]) {
        *param_2 = param_1[iVar5 * 3];
        param_2[1] = param_1[iVar5 * 3 + 1];
        param_2[2] = param_1[iVar5 * 3 + 2];
        param_1[iVar5 * 3] = fVar1;
        param_1[iVar5 * 3 + 1] = fVar2;
        param_1[iVar5 * 3 + 2] = fVar3;
        return;
      }
    }
  }
  return;
}


/* FUN_004f5940 @ 004f5940  kind=gamemisc  attributed-by=none  size=167 */

void __cdecl FUN_004f5940(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = ((int)param_3 - (int)param_1) / 0xc;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_004f50e0(param_1,param_1 + iVar1 * 3,param_1 + iVar1 * 6);
    FUN_004f50e0(param_2 + iVar1 * -3,param_2,param_2 + iVar1 * 3);
    FUN_004f50e0(param_3 + iVar1 * -6,param_3 + iVar1 * -3,param_3);
    FUN_004f50e0(param_1 + iVar1 * 3,param_2,param_3 + iVar1 * -3);
    return;
  }
  FUN_004f50e0(param_1,param_2,param_3);
  return;
}


/* FUN_004f59f0 @ 004f59f0  kind=gamemisc  attributed-by=none  size=202 */

undefined1 * __cdecl FUN_004f59f0(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (param_1 != param_2) {
    puVar5 = param_1 + 1;
    do {
      *param_3 = *(undefined1 *)(puVar5 + -1);
      param_3[1] = *(undefined1 *)((int)puVar5 + -3);
      *(undefined4 *)(param_3 + 4) = *puVar5;
      *(undefined4 *)(param_3 + 8) = puVar5[1];
      param_3[0xc] = *(undefined1 *)(puVar5 + 2);
      param_3[0xd] = *(undefined1 *)((int)puVar5 + 9);
      param_3[0xe] = *(undefined1 *)((int)puVar5 + 10);
      *(undefined2 *)(param_3 + 0x10) = *(undefined2 *)(puVar5 + 3);
      puVar3 = (undefined1 *)((int)puVar5 + 0x13);
      puVar2 = param_3 + 0x15;
      iVar4 = 0x20;
      do {
        puVar2[-1] = puVar3[-3];
        *puVar2 = puVar2[(int)puVar5 + (-4 - (int)param_3)];
        puVar2[1] = puVar3[-1];
        puVar2[2] = *puVar3;
        *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(puVar3 + 1);
        puVar3 = puVar3 + 8;
        puVar2 = puVar2 + 8;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      *(undefined4 *)(param_3 + 0x114) = puVar5[0x44];
      puVar1 = puVar5 + 0x45;
      param_3 = param_3 + 0x118;
      puVar5 = puVar5 + 0x46;
    } while (puVar1 != param_2);
    return param_3;
  }
  return param_3;
}


/* FUN_004f5ac0 @ 004f5ac0  kind=gamemisc  attributed-by=none  size=117 */

void __cdecl FUN_004f5ac0(int param_1,int param_2,int param_3,float *param_4)

{
  float fVar1;
  int iVar2;
  
  while (param_3 < param_2) {
    iVar2 = (param_2 + -1) / 2;
    fVar1 = *(float *)(param_1 + iVar2 * 0xc);
    if (*param_4 <= fVar1) break;
    *(float *)(param_1 + param_2 * 0xc) = fVar1;
    *(undefined4 *)(param_1 + 4 + param_2 * 0xc) = *(undefined4 *)(param_1 + 4 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 8 + param_2 * 0xc) = *(undefined4 *)(param_1 + 8 + iVar2 * 0xc);
    param_2 = iVar2;
  }
  *(float *)(param_1 + param_2 * 0xc) = *param_4;
  *(float *)(param_1 + 4 + param_2 * 0xc) = param_4[1];
  *(float *)(param_1 + 8 + param_2 * 0xc) = param_4[2];
  return;
}


/* FUN_004f5c40 @ 004f5c40  kind=gamemisc  attributed-by=none  size=116 */

void __cdecl FUN_004f5c40(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  float fVar1;
  int iVar2;
  
  while ((param_3 < param_2 &&
         (iVar2 = (param_2 + -1) / 2, fVar1 = *(float *)(param_1 + 8 + iVar2 * 0xc),
         (float)param_4[2] <= fVar1 && fVar1 != (float)param_4[2]))) {
    *(undefined4 *)(param_1 + param_2 * 0xc) = *(undefined4 *)(param_1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 4 + param_2 * 0xc) = *(undefined4 *)(param_1 + 4 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 8 + param_2 * 0xc) = *(undefined4 *)(param_1 + 8 + iVar2 * 0xc);
    param_2 = iVar2;
  }
  *(undefined4 *)(param_1 + param_2 * 0xc) = *param_4;
  *(undefined4 *)(param_1 + 4 + param_2 * 0xc) = param_4[1];
  *(undefined4 *)(param_1 + 8 + param_2 * 0xc) = param_4[2];
  return;
}


/* FUN_004f6080 @ 004f6080  kind=gamemisc  attributed-by=none  size=310 */

void __cdecl FUN_004f6080(float *param_1,float *param_2,int param_3,undefined4 param_4)

{
  float *pfVar1;
  undefined4 *puVar2;
  int iVar3;
  float *pfVar4;
  undefined4 local_c [2];
  
  iVar3 = (int)param_2 - (int)param_1;
  do {
    iVar3 = iVar3 / 0xc;
    if (iVar3 < 0x21) {
LAB_004f6158:
      if (1 < iVar3) {
        FUN_004f4ab0((undefined8 *)param_1,(undefined8 *)param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar3) {
        if (1 < ((int)param_2 - (int)param_1) / 0xc) {
          FUN_004f4f30((int)param_1,(int)param_2);
        }
        FUN_004f63f0(param_1,param_2);
        return;
      }
      goto LAB_004f6158;
    }
    puVar2 = (undefined4 *)FUN_004f6db0(local_c,param_1,param_2);
    pfVar4 = (float *)*puVar2;
    pfVar1 = (float *)puVar2[1];
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if (((int)pfVar4 - (int)param_1) / 0xc < ((int)param_2 - (int)pfVar1) / 0xc) {
      FUN_004f6080(param_1,pfVar4,param_3,param_4);
      param_1 = pfVar1;
      pfVar4 = param_2;
    }
    else {
      FUN_004f6080(pfVar1,param_2,param_3,param_4);
    }
    iVar3 = (int)pfVar4 - (int)param_1;
    param_2 = pfVar4;
  } while( true );
}


/* FUN_004f61c0 @ 004f61c0  kind=gamemisc  attributed-by=none  size=192 */

void __cdecl FUN_004f61c0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  if (1 < (param_2 - (int)param_1) / 0xc) {
    puVar1 = (undefined4 *)(param_2 + -8);
    do {
      local_10 = *puVar1;
      local_14 = (float)puVar1[-1];
      local_c = puVar1[1];
      puVar1[-1] = *param_1;
      *puVar1 = param_1[1];
      puVar1[1] = param_1[2];
      FUN_004f38a0((int)param_1,0,((-4 - (int)param_1) + (int)puVar1) / 0xc,&local_14);
      puVar1 = puVar1 + -3;
    } while (1 < ((8 - (int)param_1) + (int)puVar1) / 0xc);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004f63f0 @ 004f63f0  kind=gamemisc  attributed-by=none  size=167 */

void __cdecl FUN_004f63f0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 local_14;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  iVar1 = (int)param_2 - (int)param_1;
  while (1 < iVar1 / 0xc) {
    local_14 = *(undefined8 *)(param_2 + -3);
    puVar2 = param_2 + -3;
    local_c = param_2[-1];
    *puVar2 = *param_1;
    param_2[-2] = param_1[1];
    param_2[-1] = param_1[2];
    FUN_004f3a80((int)param_1,0,(iVar1 + -0xc) / 0xc,(undefined4 *)&local_14);
    param_2 = puVar2;
    iVar1 = (int)puVar2 - (int)param_1;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004f64a0 @ 004f64a0  kind=gamemisc  attributed-by=none  size=170 */

void __cdecl FUN_004f64a0(undefined4 *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  float *pfVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *local_64;
  
  uVar5 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_64 = param_2 + (((int)param_3 - (int)param_2) / 0x18) * 3;
  FUN_004f5170(param_2,local_64,param_3 + -3);
  pfVar6 = local_64 + 3;
  for (; param_2 < local_64; local_64 = local_64 + -3) {
    if ((local_64[-3] < *local_64) || (*local_64 < local_64[-3])) break;
  }
  pfVar4 = pfVar6;
  pfVar9 = local_64;
  if (pfVar6 < param_3) {
    if (3 < ((int)param_3 + (0xb - (int)pfVar6)) / 0xc) {
      fVar1 = *local_64;
      do {
        pfVar4 = pfVar6;
        if ((*pfVar6 < fVar1) || (fVar1 < *pfVar6)) goto joined_r0x004f65d3;
        if ((pfVar6[3] < fVar1) || (fVar1 < pfVar6[3])) {
          pfVar6 = pfVar6 + 3;
          pfVar4 = pfVar6;
          goto joined_r0x004f65d3;
        }
        if ((pfVar6[6] < fVar1) || (fVar1 < pfVar6[6])) {
          pfVar6 = pfVar6 + 6;
          pfVar4 = pfVar6;
          goto joined_r0x004f65d3;
        }
        if ((pfVar6[9] < fVar1) || (fVar1 < pfVar6[9])) {
          pfVar6 = pfVar6 + 9;
          pfVar4 = pfVar6;
          goto joined_r0x004f65d3;
        }
        pfVar6 = pfVar6 + 0xc;
      } while ((int)pfVar6 < (int)(param_3 + -9));
    }
    pfVar4 = pfVar6;
    if (pfVar6 < param_3) {
      do {
        pfVar4 = pfVar6;
        if ((*pfVar6 < *local_64) || (*local_64 < *pfVar6)) break;
        pfVar6 = pfVar6 + 3;
        pfVar4 = pfVar6;
      } while (pfVar6 < param_3);
    }
  }
joined_r0x004f65d3:
  do {
    if (param_3 <= pfVar4) {
joined_r0x004f6629:
      for (; param_2 < local_64; local_64 = local_64 + -3) {
        fVar1 = local_64[-3];
        pfVar7 = pfVar9;
        if (*pfVar9 <= fVar1) {
          if (*pfVar9 < fVar1) break;
          fVar2 = pfVar9[-3];
          pfVar7 = pfVar9 + -3;
          uVar3 = *(undefined8 *)(pfVar9 + -2);
          *pfVar7 = fVar1;
          pfVar9[-2] = local_64[-2];
          pfVar9[-1] = local_64[-1];
          local_64[-3] = fVar2;
          *(undefined8 *)(local_64 + -2) = uVar3;
        }
        pfVar9 = pfVar7;
      }
      if (local_64 == param_2) {
        if (pfVar4 == param_3) {
          *param_1 = pfVar9;
          param_1[1] = pfVar6;
          __security_check_cookie(uVar5 ^ (uint)&stack0xfffffffc);
          return;
        }
        if (pfVar6 != pfVar4) {
          fVar1 = *pfVar9;
          uVar3 = *(undefined8 *)(pfVar9 + 1);
          *pfVar9 = *pfVar6;
          pfVar9[1] = pfVar6[1];
          pfVar9[2] = pfVar6[2];
          *pfVar6 = fVar1;
          *(undefined8 *)(pfVar6 + 1) = uVar3;
        }
        fVar1 = *pfVar9;
        uVar3 = *(undefined8 *)(pfVar9 + 1);
        *pfVar9 = *pfVar4;
        pfVar9[1] = pfVar4[1];
        pfVar9[2] = pfVar4[2];
        *pfVar4 = fVar1;
        *(undefined8 *)(pfVar4 + 1) = uVar3;
        pfVar6 = pfVar6 + 3;
        pfVar4 = pfVar4 + 3;
        pfVar9 = pfVar9 + 3;
      }
      else {
        pfVar7 = local_64 + -3;
        if (pfVar4 == param_3) {
          pfVar10 = pfVar9 + -3;
          if (pfVar7 != pfVar10) {
            fVar1 = *pfVar7;
            uVar3 = *(undefined8 *)(local_64 + -2);
            *pfVar7 = *pfVar10;
            local_64[-2] = pfVar9[-2];
            local_64[-1] = pfVar9[-1];
            *pfVar10 = fVar1;
            *(undefined8 *)(pfVar9 + -2) = uVar3;
          }
          fVar1 = *pfVar10;
          uVar3 = *(undefined8 *)(pfVar9 + -2);
          pfVar8 = pfVar6 + -3;
          *pfVar10 = *pfVar8;
          pfVar9[-2] = pfVar6[-2];
          pfVar9[-1] = pfVar6[-1];
          *pfVar8 = fVar1;
          *(undefined8 *)(pfVar6 + -2) = uVar3;
          pfVar6 = pfVar8;
          local_64 = pfVar7;
          pfVar9 = pfVar10;
        }
        else {
          fVar1 = *pfVar4;
          uVar3 = *(undefined8 *)(pfVar4 + 1);
          *pfVar4 = *pfVar7;
          pfVar4[1] = local_64[-2];
          pfVar4[2] = local_64[-1];
          *pfVar7 = fVar1;
          *(undefined8 *)(local_64 + -2) = uVar3;
          pfVar4 = pfVar4 + 3;
          local_64 = pfVar7;
        }
      }
      goto joined_r0x004f65d3;
    }
    fVar1 = *pfVar4;
    pfVar7 = pfVar6;
    if (fVar1 <= *pfVar9) {
      if (fVar1 < *pfVar9) goto joined_r0x004f6629;
      pfVar7 = pfVar6 + 3;
      fVar2 = *pfVar6;
      uVar3 = *(undefined8 *)(pfVar6 + 1);
      *pfVar6 = fVar1;
      pfVar6[1] = pfVar4[1];
      pfVar6[2] = pfVar4[2];
      *pfVar4 = fVar2;
      *(undefined8 *)(pfVar4 + 1) = uVar3;
    }
    pfVar6 = pfVar7;
    pfVar4 = pfVar4 + 3;
  } while( true );
}


/* FUN_004f6db0 @ 004f6db0  kind=gamemisc  attributed-by=none  size=802 */

void __cdecl FUN_004f6db0(undefined4 *param_1,float *param_2,float *param_3)

{
  float fVar1;
  undefined8 uVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *local_18;
  undefined8 local_14;
  float local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_18 = param_2 + (((int)param_3 - (int)param_2) / 0x18) * 3;
  FUN_004f5940(param_2,local_18,param_3 + -3);
  pfVar6 = local_18 + 3;
  for (; param_2 < local_18; local_18 = local_18 + -3) {
    if ((local_18[2] < local_18[-1]) || (local_18[-1] < local_18[2])) break;
  }
  pfVar3 = pfVar6;
  pfVar8 = local_18;
  if (pfVar6 < param_3) {
    if (3 < ((int)param_3 + (0xb - (int)pfVar6)) / 0xc) {
      fVar1 = local_18[2];
      do {
        pfVar3 = pfVar6;
        if ((fVar1 < pfVar6[2]) || (pfVar6[2] < fVar1)) goto joined_r0x004f6ef2;
        if ((fVar1 < pfVar6[5]) || (pfVar6[5] < fVar1)) {
          pfVar6 = pfVar6 + 3;
          pfVar3 = pfVar6;
          goto joined_r0x004f6ef2;
        }
        if ((fVar1 < pfVar6[8]) || (pfVar6[8] < fVar1)) {
          pfVar6 = pfVar6 + 6;
          pfVar3 = pfVar6;
          goto joined_r0x004f6ef2;
        }
        if ((fVar1 < pfVar6[0xb]) || (pfVar6[0xb] < fVar1)) {
          pfVar6 = pfVar6 + 9;
          pfVar3 = pfVar6;
          goto joined_r0x004f6ef2;
        }
        pfVar6 = pfVar6 + 0xc;
      } while ((int)pfVar6 < (int)(param_3 + -9));
    }
    pfVar3 = pfVar6;
    if (pfVar6 < param_3) {
      do {
        pfVar3 = pfVar6;
        if ((local_18[2] < pfVar6[2]) || (pfVar6[2] < local_18[2])) break;
        pfVar6 = pfVar6 + 3;
        pfVar3 = pfVar6;
      } while (pfVar6 < param_3);
    }
  }
joined_r0x004f6ef2:
  do {
    if (param_3 <= pfVar3) {
LAB_004f6f45:
      if (param_2 < local_18) {
        pfVar5 = local_18 + -1;
        pfVar7 = pfVar8;
        do {
          pfVar8 = pfVar7;
          if (*pfVar5 <= pfVar7[2]) {
            if (*pfVar5 < pfVar7[2]) break;
            pfVar8 = pfVar7 + -3;
            local_14 = *(undefined8 *)(pfVar7 + -3);
            local_c = pfVar7[-1];
            *pfVar8 = pfVar5[-2];
            pfVar7[-2] = pfVar5[-1];
            pfVar7[-1] = *pfVar5;
            iVar4 = 0;
            do {
              *(undefined4 *)((int)pfVar5 + iVar4 + -8) = *(undefined4 *)((int)&local_14 + iVar4);
              iVar4 = iVar4 + 4;
            } while (iVar4 < 8);
            *pfVar5 = local_c;
          }
          local_18 = local_18 + -3;
          pfVar5 = pfVar5 + -3;
          pfVar7 = pfVar8;
        } while (param_2 < local_18);
      }
      if (local_18 == param_2) {
        if (pfVar3 == param_3) {
          *param_1 = pfVar8;
          param_1[1] = pfVar6;
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
        if (pfVar6 != pfVar3) {
          uVar2 = *(undefined8 *)pfVar8;
          fVar1 = pfVar8[2];
          *pfVar8 = *pfVar6;
          pfVar8[1] = pfVar6[1];
          pfVar8[2] = pfVar6[2];
          *(undefined8 *)pfVar6 = uVar2;
          pfVar6[2] = fVar1;
        }
        uVar2 = *(undefined8 *)pfVar8;
        fVar1 = pfVar8[2];
        *pfVar8 = *pfVar3;
        pfVar8[1] = pfVar3[1];
        pfVar8[2] = pfVar3[2];
        *(undefined8 *)pfVar3 = uVar2;
        pfVar3[2] = fVar1;
        pfVar6 = pfVar6 + 3;
        pfVar3 = pfVar3 + 3;
        pfVar8 = pfVar8 + 3;
      }
      else {
        pfVar5 = local_18 + -3;
        if (pfVar3 == param_3) {
          pfVar7 = pfVar8 + -3;
          if (pfVar5 != pfVar7) {
            uVar2 = *(undefined8 *)pfVar5;
            fVar1 = local_18[-1];
            *pfVar5 = *pfVar7;
            local_18[-2] = pfVar8[-2];
            local_18[-1] = pfVar8[-1];
            *(undefined8 *)pfVar7 = uVar2;
            pfVar8[-1] = fVar1;
          }
          uVar2 = *(undefined8 *)pfVar7;
          fVar1 = pfVar8[-1];
          *pfVar7 = pfVar6[-3];
          pfVar8[-2] = pfVar6[-2];
          pfVar8[-1] = pfVar6[-1];
          *(undefined8 *)(pfVar6 + -3) = uVar2;
          pfVar6[-1] = fVar1;
          pfVar6 = pfVar6 + -3;
          local_18 = pfVar5;
          pfVar8 = pfVar7;
        }
        else {
          uVar2 = *(undefined8 *)pfVar3;
          fVar1 = pfVar3[2];
          *pfVar3 = *pfVar5;
          pfVar3[1] = local_18[-2];
          pfVar3[2] = local_18[-1];
          *(undefined8 *)pfVar5 = uVar2;
          local_18[-1] = fVar1;
          pfVar3 = pfVar3 + 3;
          local_18 = pfVar5;
        }
      }
      goto joined_r0x004f6ef2;
    }
    pfVar5 = pfVar6;
    if (pfVar8[2] <= pfVar3[2]) {
      if (pfVar8[2] < pfVar3[2]) goto LAB_004f6f45;
      pfVar5 = pfVar6 + 3;
      uVar2 = *(undefined8 *)pfVar6;
      fVar1 = pfVar6[2];
      *pfVar6 = *pfVar3;
      pfVar6[1] = pfVar3[1];
      pfVar6[2] = pfVar3[2];
      *(undefined8 *)pfVar3 = uVar2;
      pfVar3[2] = fVar1;
    }
    pfVar6 = pfVar5;
    pfVar3 = pfVar3 + 3;
  } while( true );
}


/* FUN_004f71e0 @ 004f71e0  kind=gamemisc  attributed-by=none  size=66 */

undefined4 * __cdecl FUN_004f71e0(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar1 + (int)param_3);
        param_3[1] = *(undefined4 *)(iVar1 + 4 + (int)param_3);
        param_3[2] = *(undefined4 *)(iVar1 + 8 + (int)param_3);
      }
      param_3 = param_3 + 3;
    } while (iVar1 + (int)param_3 != param_2);
    return param_3;
  }
  return param_3;
}


/* FUN_004f7230 @ 004f7230  kind=gamemisc  attributed-by=none  size=60 */

undefined4 * __cdecl FUN_004f7230(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


/* FUN_004f7a70 @ 004f7a70  kind=gamemisc  attributed-by=none  size=55 */

void __thiscall FUN_004f7a70(void *this,float *param_1,float param_2)

{
  *param_1 = *(float *)this / param_2;
  param_1[1] = *(float *)((int)this + 4) / param_2;
  param_1[2] = *(float *)((int)this + 8) / param_2;
  return;
}


/* FUN_004f8230 @ 004f8230  kind=gamemisc  attributed-by=none  size=159 */

void __thiscall FUN_004f8230(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 <= (uint)((*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0xc)) {
    return;
  }
  iVar1 = (*(int *)((int)this + 4) - *(int *)this) / 0xc;
  if (0x15555555U - iVar1 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar2 = (*(int *)((int)this + 8) - *(int *)this) / 0xc;
  uVar3 = iVar1 + param_1;
  if (0x15555555 - (uVar2 >> 1) < uVar2) {
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = uVar3;
    }
    FUN_004f7ef0(this,uVar2);
    return;
  }
  uVar2 = uVar2 + (uVar2 >> 1);
  if (uVar2 < uVar3) {
    uVar2 = uVar3;
  }
  FUN_004f7ef0(this,uVar2);
  return;
}


/* FUN_004feec0 @ 004feec0  kind=gamemisc  attributed-by=none  size=721 */

void __thiscall FUN_004feec0(void *this,int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  float10 fVar14;
  float10 fVar15;
  uint *local_60;
  int local_4c;
  undefined8 local_18;
  undefined8 local_10;
  
  uVar7 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  iVar8 = (int)(param_1 + -0x4000 + (param_1 + -0x4000 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar9 = (int)(param_2 + -0x4000 + (param_2 + -0x4000 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar10 = (int)(param_1 + 0x4000 + (param_1 + 0x4000 >> 0x1f & 0x3fffU)) >> 0xe;
  fVar14 = FUN_004d5d30(SUB84((double)param_2 * 0.0005,0),
                        (int)((ulonglong)((double)param_2 * 0.0005) >> 0x20),3423.0);
  fVar15 = FUN_004d5d30(SUB84((double)param_1 * 0.0005,0),
                        (int)((ulonglong)((double)param_1 * 0.0005) >> 0x20),23421.0);
  uVar11 = (uint)((float)param_1 + (float)fVar14 * 3.0 * 256.0);
  uVar12 = (uint)((float)param_2 + (float)fVar15 * 3.0 * 256.0);
  local_60 = (uint *)0x0;
  local_4c = 0;
  if (iVar8 <= iVar10) {
    iVar13 = iVar8 * 0x400 + 0x2f;
    iVar4 = iVar9;
    puVar5 = local_60;
    iVar6 = local_4c;
    do {
      for (; iVar4 <= (int)(param_2 + 0x4000 + (param_2 + 0x4000 >> 0x1f & 0x3fffU)) >> 0xe;
          iVar4 = iVar4 + 1) {
        local_60 = puVar5;
        local_4c = iVar6;
        if ((((-1 < iVar8) && (-1 < iVar4)) && (iVar13 < 0x10002f)) &&
           ((iVar4 < 0x400 &&
            (puVar1 = *(uint **)((int)this + (iVar13 + iVar4) * 4 + 0x400000), puVar1 != (uint *)0x0
            )))) {
          uVar2 = *puVar1;
          uVar3 = puVar1[1];
          local_18 = CONCAT44(((((int)uVar2 >> 0x1f) << 0x10 | uVar2 >> 0x10) -
                              (((int)uVar11 >> 0x1f) << 0x10 | uVar11 >> 0x10)) -
                              (uint)(uVar2 * 0x10000 < uVar11 * 0x10000),
                              uVar2 * 0x10000 + uVar11 * -0x10000);
          local_10 = CONCAT44(((((int)uVar3 >> 0x1f) << 0x10 | uVar3 >> 0x10) -
                              (((int)uVar12 >> 0x1f) << 0x10 | uVar12 >> 0x10)) -
                              (uint)(uVar3 * 0x10000 < uVar12 * 0x10000),
                              uVar3 * 0x10000 + uVar12 * -0x10000);
          local_4c = (int)((float)local_10 * 1.5258789e-05 * (float)local_10 * 1.5258789e-05 +
                          (float)local_18 * 1.5258789e-05 * (float)local_18 * 1.5258789e-05);
          local_60 = puVar1;
          if ((puVar5 != (uint *)0x0) && (iVar6 <= local_4c)) {
            local_60 = puVar5;
            local_4c = iVar6;
          }
        }
        puVar5 = local_60;
        iVar6 = local_4c;
      }
      iVar8 = iVar8 + 1;
      iVar13 = iVar13 + 0x400;
      iVar4 = iVar9;
    } while (iVar8 <= iVar10);
  }
  __security_check_cookie(uVar7 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0050c550 @ 0050c550  kind=gamemisc  attributed-by=none  size=3330 */

/* WARNING: Type propagation algorithm not settling */

void __thiscall FUN_0050c550(void *this,uint param_1,uint param_2,int param_3)

{
  char cVar1;
  undefined4 *puVar2;
  float fVar3;
  undefined4 *puVar4;
  float *pfVar5;
  float **ppfVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  void *pvVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  int *piVar17;
  float *pfVar18;
  int iVar19;
  float *pfVar20;
  bool bVar21;
  float10 fVar22;
  float fVar23;
  undefined8 uVar24;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  int local_d0;
  undefined4 *local_cc;
  int local_c8;
  undefined4 *local_c4;
  int local_c0;
  float *local_bc;
  float *local_b8 [4];
  uint local_a8;
  float local_a4;
  uint local_a0;
  int local_9c;
  int *local_98;
  int *local_94;
  float *local_90;
  int *local_8c;
  void *local_88;
  int *local_84;
  int *local_80;
  float *local_7c;
  uint local_78;
  uint local_74;
  float **local_70;
  float **local_6c;
  float **local_68;
  uint *local_64;
  uint local_60;
  uint local_5c;
  undefined8 local_58;
  uint local_50;
  uint local_4c;
  float *local_48;
  uint local_44;
  uint local_40;
  undefined1 local_3c;
  undefined1 local_3b;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  undefined8 local_28;
  float local_20;
  int *local_1c;
  int *piStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  local_8 = 0xff;
  uStack_7 = 0xffffff;
  puStack_c = &LAB_00555a29;
  local_10 = ExceptionList;
  uVar7 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_78 = param_1;
  local_74 = param_2;
  local_d0 = param_3;
  local_88 = this;
  local_14 = uVar7;
  if (*(int *)((int)this + 0xa4) == 0) goto LAB_0050d23a;
  iVar19 = 0;
  local_c8 = 0;
  puVar8 = (undefined4 *)FUN_004ce660((undefined4 *)0x0,(undefined4 *)0x0);
  pfVar18 = (float *)((int)this + 4);
  piVar11 = (int *)**(int **)((int)this + 4);
  local_8 = 0;
  uStack_7 = 0;
  bVar21 = piVar11 == *(int **)((int)this + 4);
  local_cc = puVar8;
  local_80 = piVar11;
  local_7c = pfVar18;
  while (!bVar21) {
    puVar2 = (undefined4 *)piVar11[6];
    if ((((*(ushort *)((int)puVar2 + 0x7e) & 0x2000) != 0) &&
        (pfVar18 = local_7c, (int)(puVar2[0x6c] + ((int)puVar2[0x6c] >> 0x1f & 7U)) >> 3 == local_78
        )) && ((int)(puVar2[0x6d] + ((int)puVar2[0x6d] >> 0x1f & 7U)) >> 3 == local_74)) {
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1,uVar7);
      }
      iVar9 = FUN_0052dfb0(puVar8,(undefined4 *)puVar8[1],&local_80);
      if (iVar19 == 0x15555554) goto LAB_0050d1b6;
      puVar8[1] = iVar9;
      iVar19 = iVar19 + 1;
      **(int **)(iVar9 + 4) = iVar9;
      pfVar18 = local_7c;
      local_c8 = iVar19;
    }
    if (*(char *)((int)piVar11 + 0xd) == '\0') {
      local_80 = (int *)piVar11[2];
      if (*(char *)((int)local_80 + 0xd) != '\0') {
        cVar1 = *(char *)(piVar11[1] + 0xd);
        piVar12 = (int *)piVar11[1];
        piVar17 = piVar11;
        while ((piVar11 = piVar12, local_80 = piVar11, cVar1 == '\0' &&
               (piVar17 == (int *)piVar11[2]))) {
          cVar1 = *(char *)(piVar11[1] + 0xd);
          piVar12 = (int *)piVar11[1];
          piVar17 = piVar11;
        }
        goto LAB_0050c6a5;
      }
      piVar17 = (int *)*local_80;
      piVar11 = local_80;
      if (*(char *)(*local_80 + 0xd) != '\0') goto LAB_0050c6a5;
      do {
        piVar11 = piVar17;
        piVar17 = (int *)*piVar11;
      } while (*(char *)(*piVar11 + 0xd) == '\0');
      bVar21 = piVar11 == (int *)*pfVar18;
      local_80 = piVar11;
    }
    else {
LAB_0050c6a5:
      bVar21 = piVar11 == (int *)*pfVar18;
    }
  }
  for (puVar2 = (undefined4 *)*puVar8; puVar2 != puVar8; puVar2 = (undefined4 *)*puVar2) {
    FUN_0040a1d0(pfVar18,&local_98,(int *)puVar2[2]);
    pfVar18 = local_7c;
  }
  piVar17 = (int *)(local_78 * 8);
  piVar11 = piVar17 + 2;
  local_94 = piVar11;
  local_84 = piVar17;
  local_80 = piVar17;
  if ((int)piVar17 < (int)piVar11) {
    uVar7 = local_74 * 8;
    iVar19 = uVar7 + 8;
    local_a8 = uVar7;
    local_9c = iVar19;
    do {
      uVar15 = uVar7;
      local_84 = piVar17;
      if ((int)uVar7 < iVar19) {
        do {
          if (((-1 < (int)piVar17) && (-1 < (int)uVar15)) &&
             (((int)piVar17 < 0x10000 && ((int)uVar15 < 0x10000)))) {
            iVar9 = (int)((int)piVar17 + ((int)piVar17 >> 0x1f & 0x3fU)) >> 6;
            iVar14 = (int)(((int)uVar15 >> 0x1f & 0x3fU) + uVar15) >> 6;
            if ((((-1 < iVar9) && (-1 < iVar14)) && (iVar9 < 0x400)) &&
               ((iVar14 < 0x400 &&
                (iVar9 = *(int *)((int)local_88 + (iVar9 * 0x400 + iVar14) * 4 + 0xbc), iVar9 != 0))
               )) {
              uVar7 = (uint)piVar17 & 0x8000003f;
              if ((int)uVar7 < 0) {
                uVar7 = (uVar7 - 1 | 0xffffffc0) + 1;
              }
              uVar10 = uVar15 & 0x8000003f;
              if ((int)uVar10 < 0) {
                uVar10 = (uVar10 - 1 | 0xffffffc0) + 1;
              }
              uVar7 = *(uint *)(iVar9 + 0x10018 + (uVar7 * 0x40 + uVar10) * 4);
              local_a0 = uVar7;
              if (uVar7 != 0) {
                iVar19 = *(int *)(uVar7 + 0xa0);
                iVar9 = *(int *)(uVar7 + 0x18);
                if (iVar19 < *(int *)(uVar7 + 0x1c) - iVar9 >> 2) {
                  do {
                    puVar8 = *(undefined4 **)(iVar9 + iVar19 * 4);
                    if (puVar8 != (undefined4 *)0x0) {
                      (**(code **)*puVar8)(1);
                    }
                    iVar9 = *(int *)(uVar7 + 0x18);
                    iVar19 = iVar19 + 1;
                  } while (iVar19 < *(int *)(uVar7 + 0x1c) - iVar9 >> 2);
                }
                FUN_0045f080((int *)(uVar7 + 0x18),*(uint *)(local_a0 + 0xa0));
                piVar17 = local_84;
                iVar19 = local_9c;
              }
            }
          }
          uVar15 = uVar15 + 1;
          piVar11 = local_94;
          uVar7 = local_a8;
        } while ((int)uVar15 < iVar19);
      }
      piVar17 = (int *)((int)piVar17 + 1);
      local_84 = piVar17;
    } while ((int)piVar17 < (int)piVar11);
  }
  if (((-1 < (int)local_78) && (-1 < (int)local_74)) &&
     (((int)local_78 < 0x2000 && ((int)local_74 < 0x2000)))) {
    iVar19 = (int)((int)local_80 + ((int)local_80 >> 0x1f & 0x3fU)) >> 6;
    iVar9 = (int)(((int)(local_74 * 8) >> 0x1f & 0x3fU) + local_74 * 8) >> 6;
    if ((((-1 < iVar19) && (-1 < iVar9)) && (iVar19 < 0x400)) &&
       ((iVar9 < 0x400 &&
        (iVar19 = *(int *)((int)local_88 + (iVar19 * 0x400 + iVar9) * 4 + 0xbc), iVar19 != 0)))) {
      uVar7 = local_78 & 0x80000007;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xfffffff8) + 1;
      }
      uVar15 = local_74 & 0x80000007;
      if ((int)uVar15 < 0) {
        uVar15 = (uVar15 - 1 | 0xfffffff8) + 1;
      }
      local_64 = (uint *)((uVar15 + uVar7 * 8) * 0x68 + 0x14018 + iVar19);
      if (local_64 != (uint *)0x0) {
        local_64[0xd] = 0;
        *(undefined1 *)((int)local_64 + 0x41) = 0;
        local_64[0x11] = 0;
        local_64[0x12] = 0;
        uVar7 = local_64[6];
        if (uVar7 != 10) {
          local_70 = (float **)0x0;
          local_6c = (float **)0x0;
          local_68 = (float **)0x0;
          _local_8 = CONCAT31(uStack_7,1);
          if (uVar7 == 0xe) {
            FUN_00426d30(&local_70,1);
LAB_0050ca5a:
            if (local_6c != (float **)0x0) {
              *local_6c = (float *)0x5;
            }
          }
          else if (uVar7 == 1) {
            FUN_00426eb0(&local_70,1);
            if (local_6c != (float **)0x0) {
              *local_6c = (float *)0x9;
            }
            local_6c = local_6c + 1;
            local_b8[0] = (float *)0x3;
            if ((local_b8 < local_6c) && (local_70 <= local_b8)) {
              iVar19 = (int)local_b8 - (int)local_70;
              if (local_6c == local_68) {
                FUN_00426eb0(&local_70,1);
              }
              if (local_6c != (float **)0x0) {
                *local_6c = local_70[iVar19 >> 2];
              }
            }
            else {
              if (local_6c == local_68) {
                FUN_00426eb0(&local_70,1);
              }
              if (local_6c != (float **)0x0) {
                *local_6c = (float *)0x3;
              }
            }
            local_6c = local_6c + 1;
            local_bc = (float *)0x4;
            if ((&local_bc < local_6c) && (local_70 <= &local_bc)) {
              iVar19 = (int)&local_bc - (int)local_70;
              if (local_6c == local_68) {
                FUN_00426eb0(&local_70,1);
              }
              if (local_6c != (float **)0x0) {
                *local_6c = local_70[iVar19 >> 2];
              }
            }
            else {
              if (local_6c == local_68) {
                FUN_00426eb0(&local_70,1);
              }
              if (local_6c != (float **)0x0) {
                *local_6c = (float *)0x4;
              }
            }
          }
          else {
            if (uVar7 != 0) {
              FUN_00426eb0(&local_70,1);
              goto LAB_0050ca5a;
            }
            FUN_00426eb0(&local_70,1);
            if (local_6c != (float **)0x0) {
              *local_6c = (float *)0x1;
            }
          }
          ppfVar6 = local_70;
          local_6c = local_6c + 1;
          iVar9 = (int)local_6c - (int)local_70;
          uVar7 = rand();
          iVar19 = 0;
          local_84 = (int *)0x0;
          local_8c = (int *)0x0;
          local_c0 = 0;
          pfVar18 = ppfVar6[uVar7 % (uint)(iVar9 >> 2)];
          local_7c = pfVar18;
          puVar8 = (undefined4 *)FUN_004ce660((undefined4 *)0x0,(undefined4 *)0x0);
          local_8 = 2;
          piVar11 = (int *)**(int **)((int)local_88 + 4);
          local_c4 = puVar8;
          if (piVar11 != *(int **)((int)local_88 + 4)) {
            do {
              piVar17 = piVar11 + 6;
              if ((piVar11[6] != 0) && (*(char *)(piVar11[6] + 0x60) == '\0')) {
                iVar9 = FUN_0052dfb0(puVar8,(undefined4 *)puVar8[1],piVar17);
                if (iVar19 == 0x15555554) goto LAB_0050d1b6;
                iVar19 = iVar19 + 1;
                local_c4[1] = iVar9;
                **(int **)(iVar9 + 4) = iVar9;
                if ((local_84 == (int *)0x0) ||
                   (piVar12 = *(int **)(*piVar17 + 400), (int)piVar12 < (int)local_84)) {
                  piVar12 = *(int **)(*piVar17 + 400);
                  local_84 = piVar12;
                }
                puVar8 = local_c4;
                local_c0 = iVar19;
                if ((local_8c == (int *)0x0) || ((int)local_8c < (int)piVar12)) {
                  local_8c = piVar12;
                }
              }
              if (*(char *)((int)piVar11 + 0xd) == '\0') {
                piVar17 = (int *)piVar11[2];
                if (*(char *)((int)piVar17 + 0xd) == '\0') {
                  cVar1 = *(char *)(*piVar17 + 0xd);
                  piVar11 = piVar17;
                  piVar17 = (int *)*piVar17;
                  while (cVar1 == '\0') {
                    cVar1 = *(char *)(*piVar17 + 0xd);
                    piVar11 = piVar17;
                    piVar17 = (int *)*piVar17;
                  }
                }
                else {
                  cVar1 = *(char *)(piVar11[1] + 0xd);
                  piVar12 = (int *)piVar11[1];
                  piVar17 = piVar11;
                  while ((piVar11 = piVar12, cVar1 == '\0' && (piVar17 == (int *)piVar11[2]))) {
                    cVar1 = *(char *)(piVar11[1] + 0xd);
                    piVar12 = (int *)piVar11[1];
                    piVar17 = piVar11;
                  }
                }
              }
              pfVar18 = local_7c;
            } while (piVar11 != *(int **)((int)local_88 + 4));
          }
          if (pfVar18 == (float *)0x7) {
            pvVar13 = FUN_0052ae10();
            puVar16 = local_64;
            local_64[0xe] = (uint)pvVar13;
            uVar7 = rand();
            uVar7 = uVar7 & 0x80000007;
            if ((int)uVar7 < 0) {
              uVar7 = (uVar7 - 1 | 0xfffffff8) + 1;
            }
            puVar16[0x12] = uVar7 + 0x19;
            puVar16[0x13] = 0xffffffff;
            puVar16[0x14] = 0xffffffff;
LAB_0050d119:
            uVar7 = rand();
            iVar9 = local_d0;
            puVar16[0xc] = uVar7;
            *(char *)(puVar16 + 0x10) = (char)puVar16[10];
            puVar16[0xf] = (uint)local_8c;
            local_60 = local_78;
            puVar16[0xd] = (uint)pfVar18;
            local_5c = local_74;
            local_50 = puVar16[0xb];
            local_4c = puVar16[0xc];
            local_44 = puVar16[0xe];
            local_40 = puVar16[0xf];
            puVar8 = *(undefined4 **)(local_d0 + 0x60);
            local_3c = (undefined1)puVar16[0x10];
            local_3b = *(undefined1 *)((int)puVar16 + 0x41);
            local_38 = puVar16[0x11];
            local_34 = puVar16[0x12];
            local_30 = puVar16[0x13];
            local_2c = puVar16[0x14];
            local_58 = 0;
            local_48 = pfVar18;
            iVar14 = FUN_00420400(puVar8,(undefined4 *)puVar8[1],&local_60);
            iVar19 = *(int *)(iVar9 + 100);
            if (iVar19 == 0x3fffffe) {
LAB_0050d1b6:
                    /* WARNING: Subroutine does not return */
              std::_Xlength_error("list<T> too long");
            }
            *(int *)(iVar9 + 100) = iVar19 + 1;
            puVar8[1] = iVar14;
            **(int **)(iVar14 + 4) = iVar14;
          }
          else {
            if (pfVar18 == (float *)0xa) {
              pvVar13 = FUN_0052ae10();
              puVar16 = local_64;
              local_64[0xe] = (uint)pvVar13;
              iVar19 = rand();
              uVar7 = iVar19 % 5 + 10;
LAB_0050cc3f:
              puVar16[0x12] = uVar7;
              puVar16[0x13] = 0xffffffff;
              puVar16[0x14] = 0xffffffff;
              goto LAB_0050d119;
            }
            if (pfVar18 == (float *)0xb) {
              pvVar13 = FUN_0052ae10();
              puVar16 = local_64;
              local_64[0xe] = (uint)pvVar13;
              iVar19 = rand();
              uVar7 = iVar19 % 5 + 0xf;
              goto LAB_0050cc3f;
            }
            if (pfVar18 == (float *)0x1) {
              local_64[0xe] = local_64[0x15];
              local_64[0x13] = local_64[0x18];
              local_64[0x14] = local_64[0x19];
              puVar16 = local_64;
              goto LAB_0050d119;
            }
            pfVar20 = (float *)0x0;
            pfVar18 = (float *)0x0;
            local_b8[1] = (float *)0x0;
            local_b8[2] = (float *)0x0;
            local_90 = (float *)0x0;
            local_b8[3] = (float *)0x0;
            local_98 = (int *)(local_74 * 0x800 + 0x80);
            local_a0 = local_78 * 0x800 + 0x80;
            local_8 = 3;
            local_9c = 0;
            do {
              local_1c = local_80;
              local_dc = ((int)local_a0 >> 0x1f) << 0x10 | local_a0 >> 0x10;
              local_e0 = local_a0 << 0x10;
              local_84 = (int *)(local_74 * 8);
              local_a8 = 0;
              local_94 = local_98;
              do {
                pfVar5 = local_90;
                local_d4 = ((int)local_94 >> 0x1f) << 0x10 | (uint)local_94 >> 0x10;
                local_d8 = (int)local_94 << 0x10;
                piStack_18 = local_84;
                fVar22 = FUN_0052c820(local_64,&local_e0,&local_d8);
                local_a4 = (float)fVar22;
                fVar23 = 1.0 - local_a4;
                if ((0.0 < fVar23) && (local_a4 = fVar23 * fVar23, 0.0 < local_a4)) {
                  if ((local_7c == (float *)0xc) || (local_7c == (float *)0xd)) {
                    uVar7 = (int)local_84 + (int)local_80 & 0x80000001;
                    bVar21 = uVar7 == 0;
                    if ((int)uVar7 < 0) {
                      bVar21 = (uVar7 - 1 | 0xfffffffe) == 0xffffffff;
                    }
                    if (!bVar21) {
                      local_a4 = local_a4 * 2.0;
                    }
                  }
                  uVar24 = CONCAT44(piStack_18,local_1c);
                  local_28 = uVar24;
                  local_20 = local_a4;
                  if ((&local_28 < pfVar18) && (pfVar20 <= &local_28)) {
                    iVar19 = ((int)&local_28 - (int)pfVar20) / 0xc;
                    if ((pfVar18 == local_90) &&
                       (iVar9 = (int)local_90 - (int)pfVar18 >> 0x1f,
                       ((int)local_90 - (int)pfVar18) / 0xc + iVar9 == iVar9)) {
                      iVar9 = ((int)pfVar18 - (int)pfVar20) / 0xc;
                      if (iVar9 == 0x15555555) {
LAB_0050cfb3:
                    /* WARNING: Subroutine does not return */
                        std::_Xlength_error("vector<T> too long");
                      }
                      uVar7 = iVar9 + 1;
                      uVar15 = ((int)local_90 - (int)pfVar20) / 0xc;
                      if (0x15555555 - (uVar15 >> 1) < uVar15) {
                        uVar15 = 0;
                      }
                      else {
                        uVar15 = uVar15 + (uVar15 >> 1);
                      }
                      if (uVar15 < uVar7) {
                        uVar15 = uVar7;
                      }
                      FUN_004f7fe0(local_b8 + 1,uVar15);
                      local_90 = local_b8[3];
                      pfVar18 = local_b8[2];
                      pfVar20 = local_b8[1];
                    }
                    if (pfVar18 != (float *)0x0) {
                      *pfVar18 = pfVar20[iVar19 * 3];
                      pfVar18[1] = pfVar20[iVar19 * 3 + 1];
                      pfVar18[2] = pfVar20[iVar19 * 3 + 2];
                    }
                  }
                  else {
                    if ((pfVar18 == pfVar5) &&
                       (iVar19 = (int)pfVar5 - (int)pfVar18 >> 0x1f,
                       ((int)pfVar5 - (int)pfVar18) / 0xc + iVar19 == iVar19)) {
                      iVar19 = ((int)pfVar18 - (int)pfVar20) / 0xc;
                      if (iVar19 == 0x15555555) goto LAB_0050cfb3;
                      uVar15 = ((int)pfVar5 - (int)pfVar20) / 0xc;
                      uVar7 = iVar19 + 1;
                      if (0x15555555 - (uVar15 >> 1) < uVar15) {
                        uVar15 = 0;
                      }
                      else {
                        uVar15 = uVar15 + (uVar15 >> 1);
                      }
                      if (uVar15 < uVar7) {
                        uVar15 = uVar7;
                      }
                      FUN_004f7fe0(local_b8 + 1,uVar15);
                      uVar24 = CONCAT44(piStack_18,local_1c);
                      local_90 = local_b8[3];
                      pfVar18 = local_b8[2];
                      pfVar20 = local_b8[1];
                    }
                    if (pfVar18 != (float *)0x0) {
                      *(undefined8 *)pfVar18 = uVar24;
                      pfVar18[2] = local_a4;
                    }
                  }
                  pfVar18 = pfVar18 + 3;
                  local_b8[2] = pfVar18;
                }
                local_a8 = local_a8 + 1;
                local_84 = (int *)((int)local_84 + 1);
                local_94 = local_94 + 0x40;
              } while ((int)local_a8 < 8);
              local_80 = (int *)((int)local_80 + 1);
              local_9c = local_9c + 1;
              local_a0 = local_a0 + 0x100;
            } while (local_9c < 8);
            if (pfVar20 != pfVar18) {
              local_98 = (int *)((uint)local_98 & 0xffffff00);
              FUN_004f6080(pfVar20,pfVar18,((int)pfVar18 - (int)pfVar20) / 0xc,local_98);
              fVar23 = *pfVar20;
              fVar3 = pfVar20[1];
              if (local_7c == (float *)0x3) {
                pvVar13 = (void *)FUN_0052b230(local_88,local_78,local_74,(int)local_8c);
LAB_0050d0f5:
                local_64[0xe] = (uint)pvVar13;
              }
              else {
                if ((local_7c == (float *)0x2) || (local_7c == (float *)0x4)) {
                  pvVar13 = FUN_005290d0(local_88,(float)((int)fVar23 * 0x100 + 0x80),
                                         (float)((int)fVar3 * 0x100 + 0x80),(int)(float)local_64[5],
                                         0);
                  goto LAB_0050d0f5;
                }
                if ((local_7c == (float *)0xc) || (local_7c == (float *)0xd)) {
                  pvVar13 = FUN_005290d0(local_88,(float)((int)fVar23 * 0x100 + 0x80),
                                         (float)((int)fVar3 * 0x100 + 0x80),(int)(float)local_64[5],
                                         1);
                  local_64[0xe] = (uint)pvVar13;
                  if (local_7c == (float *)0xc) {
                    iVar19 = rand();
                    local_64[0x12] = iVar19 % 5 + 6;
                  }
                }
                else {
                  pvVar13 = FUN_0052ae10();
                  local_64[0xe] = (uint)pvVar13;
                  iVar19 = rand();
                  local_64[0x12] = iVar19 % 10 + 10;
                }
              }
              puVar16 = local_64;
              local_64[0x13] = (uint)fVar23;
              local_64[0x14] = (uint)fVar3;
              local_8 = 2;
              operator_delete(pfVar20);
              pfVar18 = local_7c;
              goto LAB_0050d119;
            }
            if (pfVar20 != (float *)0x0) {
              operator_delete(pfVar20);
            }
          }
          puVar2 = local_c4;
          puVar8 = (undefined4 *)*local_c4;
          *local_c4 = local_c4;
          local_c4[1] = local_c4;
          while (puVar8 != puVar2) {
            puVar4 = (undefined4 *)*puVar8;
            operator_delete(puVar8);
            puVar8 = puVar4;
          }
          operator_delete(puVar2);
          if (local_70 != (float **)0x0) {
            operator_delete(local_70);
          }
        }
      }
    }
  }
  puVar2 = local_cc;
  puVar8 = (undefined4 *)*local_cc;
  *local_cc = local_cc;
  local_cc[1] = local_cc;
  while (puVar8 != puVar2) {
    puVar4 = (undefined4 *)*puVar8;
    operator_delete(puVar8);
    puVar8 = puVar4;
  }
  operator_delete(puVar2);
LAB_0050d23a:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0050d8d0 @ 0050d8d0  kind=gamemisc  attributed-by=none  size=419 */

void __thiscall FUN_0050d8d0(void *this,int param_1,int param_2,int param_3)

{
  float fVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 **this_00;
  undefined4 *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  void *pvVar13;
  undefined4 *puVar14;
  int *piVar15;
  int iVar16;
  uint *puVar17;
  undefined4 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  int *local_c4;
  undefined4 local_c0;
  undefined4 *local_bc;
  undefined4 *local_b8;
  undefined4 local_b4;
  uint local_b0;
  int local_ac;
  undefined4 *local_a8;
  undefined4 *local_a4;
  undefined4 local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  uint *local_84;
  uint *local_80;
  uint *local_7c;
  int local_78;
  uint local_74;
  undefined4 *local_70;
  int local_6c;
  void *local_68;
  uint local_64;
  uint uStack_60;
  undefined8 local_5c;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  undefined1 local_40;
  undefined1 local_3f;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  undefined8 local_2c;
  undefined8 local_24;
  uint local_1c [3];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00555ae9;
  local_10 = ExceptionList;
  local_1c[2] = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8c = param_1;
  local_98 = param_2;
  local_88 = param_3;
  local_68 = this;
  if (((*(char *)((int)this + 0xb4) == '\0') && (*(int *)((int)this + 0xa4) != 0)) &&
     (local_94 = *(int *)((int)this + (param_1 * 0x400 + param_2) * 4 + 0xbc), local_94 != 0)) {
    iVar16 = 0;
    local_9c = 0;
    local_c0 = 0;
    local_c4 = (int *)FUN_004ce660((undefined4 *)0x0,(undefined4 *)0x0);
    local_8 = 0;
    local_74 = **(int **)((int)this + 4);
    if ((int *)local_74 != *(int **)((int)this + 4)) {
      do {
        piVar15 = (int *)(local_74 + 0x18);
        if ((*(int *)(local_74 + 0x18) != 0) &&
           (*(char *)(*(int *)(local_74 + 0x18) + 0x60) == '\0')) {
          FUN_004d6620(&local_c4,piVar15);
          if ((iVar16 == 0) || (iVar7 = *(int *)(*piVar15 + 400), iVar7 < iVar16)) {
            iVar7 = *(int *)(*piVar15 + 400);
            iVar16 = iVar7;
          }
          if ((local_9c == 0) || (local_9c < iVar7)) {
            local_9c = iVar7;
          }
        }
        FUN_00407a50((int *)&local_74);
      } while (local_74 != *(uint *)((int)this + 4));
    }
    local_bc = (undefined4 *)0x0;
    local_b8 = (undefined4 *)0x0;
    local_b4 = 0;
    local_a8 = (undefined4 *)0x0;
    local_a4 = (undefined4 *)0x0;
    local_a0 = 0;
    puVar11 = (uint *)0x0;
    local_84 = (uint *)0x0;
    local_80 = (uint *)0x0;
    local_7c = (uint *)0x0;
    local_8 = CONCAT31(local_8._1_3_,3);
    uVar12 = (int)((local_98 * 0x40 >> 0x1f & 7U) + local_98 * 0x40) >> 3;
    local_6c = 0;
    local_2c = CONCAT44(uVar12,(uint)local_2c);
    local_74 = (int)((local_8c * 0x40 >> 0x1f & 7U) + local_8c * 0x40) >> 3;
    local_78 = local_74 * 8;
    local_b0 = uVar12;
    do {
      local_ac = 0;
      local_90 = uVar12 * 8;
      do {
        if (((((int)local_74 < 0) || ((int)local_b0 < 0)) || (0xffff < local_78)) ||
           (0x1fff < (int)local_b0)) {
LAB_0050db2f:
          puVar17 = (uint *)0x0;
        }
        else {
          iVar16 = (int)(local_78 + (local_78 >> 0x1f & 0x3fU)) >> 6;
          iVar7 = (int)((local_90 >> 0x1f & 0x3fU) + local_90) >> 6;
          if (((iVar16 < 0) || (iVar7 < 0)) ||
             ((0x3ff < iVar16 ||
              ((0x3ff < iVar7 ||
               (iVar16 = *(int *)((int)local_68 + (iVar16 * 0x400 + iVar7) * 4 + 0xbc), iVar16 == 0)
               ))))) goto LAB_0050db2f;
          uVar8 = local_74 & 0x80000007;
          if ((int)uVar8 < 0) {
            uVar8 = (uVar8 - 1 | 0xfffffff8) + 1;
          }
          uVar5 = local_b0 & 0x80000007;
          if ((int)uVar5 < 0) {
            uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
          }
          puVar17 = (uint *)(iVar16 + 0x14018 + (uVar5 + uVar8 * 8) * 0x68);
        }
        local_1c[0] = local_74;
        local_1c[1] = local_b0;
        uVar19 = __alldiv(puVar17[2],puVar17[3],0x10000,0);
        uVar20 = __alldiv(*puVar17,puVar17[1],0x10000,0);
        pvVar13 = local_68;
        iVar7 = FUN_004feec0(local_68,(int)uVar20,(int)uVar19);
        iVar16 = local_88;
        if (iVar7 == local_94) {
          if (puVar17[0xd] != 0) {
            puVar17[0xd] = 0;
            puVar17[0x11] = 0;
            local_54 = puVar17[0xb];
            local_50 = puVar17[0xc];
            local_4c = puVar17[0xd];
            local_48 = puVar17[0xe];
            local_44 = puVar17[0xf];
            local_40 = (undefined1)puVar17[0x10];
            local_3f = *(undefined1 *)((int)puVar17 + 0x41);
            local_3c = puVar17[0x11];
            local_38 = puVar17[0x12];
            local_34 = puVar17[0x13];
            local_30 = puVar17[0x14];
            local_70 = *(undefined4 **)(local_88 + 0x60);
            local_5c = 0;
            local_64 = local_1c[0];
            uStack_60 = local_1c[1];
            iVar6 = FUN_00420400(local_70,(undefined4 *)local_70[1],&local_64);
            iVar7 = *(int *)(iVar16 + 100);
            if (iVar7 == 0x3fffffe) {
                    /* WARNING: Subroutine does not return */
              std::_Xlength_error("list<T> too long");
            }
            *(int *)(iVar16 + 100) = iVar7 + 1;
            local_70[1] = iVar6;
            **(int **)(iVar6 + 4) = iVar6;
            pvVar13 = local_68;
          }
          if (puVar17[0x15] != 0) {
            puVar17[0x15] = 0;
            puVar17[0x16] = 0;
            *(undefined1 *)(puVar17 + 0x17) = 0;
          }
          if (puVar17[6] == 0) {
            iVar16 = FUN_0042e220(pvVar13,local_8c,local_98);
            fVar1 = *(float *)(iVar16 + 0x10);
            local_70 = (undefined4 *)0x1;
            iVar7 = 10;
            if (fVar1 < 0.2) {
              local_70 = (undefined4 *)0xa;
              iVar7 = 0x14;
            }
            if ((*(float *)(iVar16 + 0xc) < 0.2) && (0.8 < fVar1)) {
              local_70 = (undefined4 *)0xf;
              iVar7 = 0x19;
            }
            if ((0.8 < *(float *)(iVar16 + 0xc)) && (0.8 < fVar1)) {
              local_70 = (undefined4 *)0xa;
              iVar7 = 0x14;
            }
            if (*(char *)(iVar16 + 8) == '\x01') {
              local_70 = (undefined4 *)0x14;
              iVar7 = 0x1e;
            }
            iVar16 = rand();
            *(undefined1 *)(puVar17 + 0x17) = 0;
            uVar8 = iVar16 % ((iVar7 - (int)local_70) + 1) + (int)local_70;
            puVar17[0x16] = uVar8;
            uVar8 = FUN_0052b230(local_68,local_8c,local_98,uVar8);
            puVar17[0x15] = uVar8;
            uVar8 = rand();
            uVar8 = uVar8 & 0x80000003;
            if ((int)uVar8 < 0) {
              uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
            }
            uVar8 = local_90 + 2 + uVar8;
            uVar5 = rand();
            uVar5 = uVar5 & 0x80000003;
            if ((int)uVar5 < 0) {
              uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
            }
            uVar5 = uVar5 + local_78 + 2;
            local_24 = CONCAT44(uVar8,uVar5);
            puVar17[0x18] = uVar5;
            puVar17[0x19] = uVar8;
            if ((local_1c < puVar11) && (local_84 <= local_1c)) {
              iVar16 = (int)local_1c - (int)local_84 >> 3;
              if (puVar11 == local_7c) {
                FUN_004e27b0(&local_84,1);
                puVar11 = local_80;
              }
              if (puVar11 != (uint *)0x0) {
                *puVar11 = local_84[iVar16 * 2];
                puVar11[1] = local_84[iVar16 * 2 + 1];
              }
            }
            else {
              if (puVar11 == local_7c) {
                FUN_004e27b0(&local_84,1);
                puVar11 = local_80;
              }
              if (puVar11 != (uint *)0x0) {
                *puVar11 = local_1c[0];
                puVar11[1] = local_1c[1];
              }
            }
            puVar11 = puVar11 + 2;
            local_80 = puVar11;
          }
          iVar16 = local_9c;
          uVar8 = puVar17[6];
          if ((((uVar8 != 0) && (uVar8 != 10)) && ((int)puVar17[9] <= local_9c + 2)) &&
             ((uVar8 != 1 || (iVar7 = rand(), iVar7 % 0x32 == 0)))) {
            this_00 = &local_bc;
            if (iVar16 + -2 <= (int)puVar17[9]) {
              this_00 = &local_a8;
            }
            FUN_00528730(this_00,local_1c);
          }
        }
        puVar4 = local_bc;
        local_ac = local_ac + 1;
        local_b0 = local_b0 + 1;
        local_90 = local_90 + 8;
      } while (local_ac < 8);
      local_6c = local_6c + 1;
      local_74 = local_74 + 1;
      local_78 = local_78 + 8;
      if (7 < local_6c) goto LAB_0050de5d;
      local_b0 = local_2c._4_4_;
    } while( true );
  }
  goto LAB_0050e05a;
LAB_0050de5d:
  local_6c = 2;
  puVar14 = local_b8;
  puVar18 = local_a4;
  do {
    iVar16 = rand();
    if ((iVar16 % 6 == 0) && (puVar4 != puVar14)) {
LAB_0050def0:
      uVar12 = rand();
      uVar12 = uVar12 % (uint)((int)puVar14 - (int)puVar4 >> 3);
      uVar19 = *(undefined8 *)(puVar4 + uVar12 * 2);
      for (puVar9 = puVar4 + uVar12 * 2 + 2; puVar9 != puVar14; puVar9 = puVar9 + 2) {
        puVar9[-2] = *puVar9;
        puVar9[-1] = puVar9[1];
      }
      puVar14 = puVar14 + -2;
      local_2c._4_4_ = (uint)((ulonglong)uVar19 >> 0x20);
      local_2c._0_4_ = (uint)uVar19;
      uVar12 = (uint)local_2c;
      uVar8 = local_2c._4_4_;
      local_b8 = puVar14;
      local_2c = uVar19;
LAB_0050df3c:
      FUN_0050c550(local_68,uVar12,uVar8,local_88);
    }
    else {
      if (local_a8 != puVar18) {
        uVar12 = rand();
        uVar12 = uVar12 % (uint)((int)puVar18 - (int)local_a8 >> 3);
        uVar19 = *(undefined8 *)(local_a8 + uVar12 * 2);
        for (puVar9 = local_a8 + uVar12 * 2 + 2; puVar9 != puVar18; puVar9 = puVar9 + 2) {
          puVar9[-2] = *puVar9;
          puVar9[-1] = puVar9[1];
        }
        puVar18 = puVar18 + -2;
        local_24._4_4_ = (uint)((ulonglong)uVar19 >> 0x20);
        local_24._0_4_ = (uint)uVar19;
        uVar12 = (uint)local_24;
        uVar8 = local_24._4_4_;
        local_a4 = puVar18;
        local_24 = uVar19;
        goto LAB_0050df3c;
      }
      if (puVar4 != puVar14) goto LAB_0050def0;
    }
    puVar11 = local_84;
    local_6c = local_6c + -1;
  } while (local_6c != 0);
  iVar16 = 0;
  local_6c = 0;
  puVar17 = local_80;
  do {
    if (puVar11 == puVar17) break;
    uVar12 = rand();
    uVar12 = uVar12 % (uint)((int)puVar17 - (int)puVar11 >> 3);
    uVar19 = *(undefined8 *)(puVar11 + uVar12 * 2);
    for (puVar10 = puVar11 + uVar12 * 2 + 2; puVar10 != puVar17; puVar10 = puVar10 + 2) {
      puVar10[-2] = *puVar10;
      puVar10[-1] = puVar10[1];
    }
    local_24._4_4_ = (uint)((ulonglong)uVar19 >> 0x20);
    uVar12 = local_24._4_4_;
    puVar17 = puVar17 + -2;
    local_24._0_4_ = (uint)uVar19;
    local_80 = puVar17;
    uVar8 = (uint)local_24;
    local_24 = uVar19;
    FUN_0050c550(local_68,uVar8,uVar12,local_88);
    iVar16 = iVar16 + 1;
  } while (iVar16 < 2);
  piVar15 = (int *)(local_94 + 0x10018);
  local_6c = 0x40;
  do {
    pvVar13 = local_68;
    iVar16 = 0x40;
    do {
      if (*piVar15 != 0) {
        FUN_0050d260(pvVar13,*piVar15);
      }
      piVar15 = piVar15 + 1;
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
    local_6c = local_6c + -1;
  } while (local_6c != 0);
  *(undefined1 *)(local_94 + 0x15a18) = 1;
  if (local_84 != (uint *)0x0) {
    operator_delete(local_84);
  }
  if (local_a8 != (undefined4 *)0x0) {
    operator_delete(local_a8);
  }
  if (local_bc != (undefined4 *)0x0) {
    operator_delete(local_bc);
  }
  piVar3 = local_c4;
  piVar15 = (int *)*local_c4;
  *local_c4 = (int)local_c4;
  local_c4[1] = (int)local_c4;
  while (piVar15 != piVar3) {
    piVar2 = (int *)*piVar15;
    operator_delete(piVar15);
    piVar15 = piVar2;
  }
  operator_delete(piVar3);
LAB_0050e05a:
  ExceptionList = local_10;
  __security_check_cookie(local_1c[2] ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00522580 @ 00522580  kind=gamemisc  attributed-by=none  size=659 */

void __thiscall FUN_00522580(void *this,uint param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  SequentialBehavior *pSVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  CombatBehavior *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00555f21;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = operator_new(0xc);
  local_8 = 0;
  if (local_14 == (CombatBehavior *)0x0) {
    pSVar3 = (SequentialBehavior *)0x0;
  }
  else {
    pSVar3 = cube::SequentialBehavior::SequentialBehavior((SequentialBehavior *)local_14);
  }
  local_8 = 0xffffffff;
  local_14 = operator_new(0x14);
  local_8 = 1;
  if (local_14 == (CombatBehavior *)0x0) {
    local_14 = (CombatBehavior *)0x0;
  }
  else {
    local_14 = cube::CombatBehavior::CombatBehavior(local_14,0x41a00000);
  }
  puVar1 = (pSVar3->SequentialBehavior_data).offset_0x0;
  local_8 = 0xffffffff;
  iVar4 = FUN_0052dfb0(puVar1,(undefined4 *)puVar1[1],&local_14);
  iVar2 = (pSVar3->SequentialBehavior_data).offset_0x4;
  if (iVar2 == 0x15555554) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  (pSVar3->SequentialBehavior_data).offset_0x4 = iVar2 + 1;
  puVar1[1] = iVar4;
  **(int **)(iVar4 + 4) = iVar4;
  local_14 = operator_new(0x10);
  local_8 = 2;
  if (local_14 == (CombatBehavior *)0x0) {
    local_14 = (CombatBehavior *)0x0;
  }
  else {
    local_14 = (CombatBehavior *)
               cube::CompanionBehavior::CompanionBehavior((CompanionBehavior *)local_14);
  }
  (local_14->CombatBehavior_data).offset_0x4 = param_1;
  (local_14->CombatBehavior_data).offset_0x8 = param_2;
  puVar1 = (pSVar3->SequentialBehavior_data).offset_0x0;
  local_8 = 0xffffffff;
  iVar5 = FUN_0052dfb0(puVar1,(undefined4 *)puVar1[1],&local_14);
  iVar4 = param_3;
  iVar2 = (pSVar3->SequentialBehavior_data).offset_0x4;
  if (iVar2 == 0x15555554) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  (pSVar3->SequentialBehavior_data).offset_0x4 = iVar2 + 1;
  puVar1[1] = iVar5;
  **(int **)(iVar5 + 4) = iVar5;
  if (*(void **)(param_3 + 0x13e4) != (void *)0x0) {
    operator_delete(*(void **)(param_3 + 0x13e4));
  }
  *(undefined8 *)(iVar4 + 0x178) = 0x3f80000042c80000;
  *(undefined8 *)(iVar4 + 0x180) = 0x3f8000003f800000;
  *(undefined4 *)(iVar4 + 0x188) = 0x3f800000;
  iVar2 = *(int *)(iVar4 + 100);
  *(SequentialBehavior **)(iVar4 + 0x13e4) = pSVar3;
  if (iVar2 == 0x19) {
    *(undefined4 *)(iVar4 + 0x178) = 0x43960000;
    *(undefined4 *)(iVar4 + 0x184) = 0x40a00000;
    *(undefined4 *)(iVar4 + 0x188) = 0x40a00000;
    *(undefined4 *)(iVar4 + 0x180) = 0x3dcccccd;
  }
  else if (iVar2 == 0x56) {
    *(undefined2 *)(iVar4 + 0x140) = 0x103;
  }
  else if (iVar2 == 0x68) {
    *(undefined2 *)(iVar4 + 0x140) = 0x102;
  }
  FUN_00530600((void *)((int)this + 4),&param_3,&param_1);
  if ((param_3 != *(int *)((int)this + 4)) && (iVar2 = *(int *)(param_3 + 0x18), iVar2 != 0)) {
    if (*(int *)(iVar2 + 400) < *(int *)(iVar4 + 400)) {
      *(int *)(iVar4 + 400) = *(int *)(iVar2 + 400);
    }
    *(uint *)(iVar4 + 0x198) = param_1;
    *(undefined4 *)(iVar4 + 0x19c) = param_2;
    fVar6 = FUN_00407c80(*(int *)(iVar2 + 0x1138));
    *(float *)(iVar4 + 0x178) = ((float)fVar6 * 0.5 + 1.0) * *(float *)(iVar4 + 0x178);
    *(undefined4 *)(iVar2 + 0x11c8) = *(undefined4 *)(iVar4 + 8);
    *(undefined4 *)(iVar2 + 0x11cc) = *(undefined4 *)(iVar4 + 0xc);
  }
  ExceptionList = local_10;
  return;
}


/* FUN_00524500 @ 00524500  kind=gamemisc  attributed-by=none  size=58 */

void __fastcall FUN_00524500(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0xb4) == '\0') {
    piVar1 = (int *)(param_1 + 0xbc);
    iVar3 = 0x400;
    do {
      iVar2 = 0x400;
      do {
        if (*piVar1 != 0) {
          *(undefined1 *)(*piVar1 + 0x15a18) = 0;
        }
        piVar1 = piVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}


/* FUN_0052ae10 @ 0052ae10  kind=gamemisc  attributed-by=none  size=934 */

/* WARNING: Type propagation algorithm not settling */

void * FUN_0052ae10(void)

{
  void *pvVar1;
  void **ppvVar2;
  void **ppvVar3;
  uint uVar4;
  int iVar5;
  void **local_3c;
  void **local_38;
  void **local_34;
  void *local_30;
  void *local_2c;
  void *local_28;
  void *local_24;
  void *local_20;
  void *local_1c;
  void *local_18;
  void *local_14 [4];
  
  local_14[2] = &LAB_00556148;
  local_14[1] = ExceptionList;
  ExceptionList = local_14 + 1;
  local_3c = (void **)0x0;
  local_38 = (void **)0x0;
  local_34 = (void **)0x0;
  local_14[3] = (void *)0x0;
  FUN_00426eb0(&local_3c,1);
  if (local_38 != (void **)0x0) {
    *local_38 = (void *)0x30;
  }
  local_38 = local_38 + 1;
  local_14[0] = (void *)0x33;
  if ((local_14 < local_38) && (local_3c <= local_14)) {
    iVar5 = (int)local_14 - (int)local_3c;
    if (local_38 == local_34) {
      FUN_00426eb0(&local_3c,1);
    }
    if (local_38 != (void **)0x0) {
      *local_38 = local_3c[iVar5 >> 2];
    }
  }
  else {
    if (local_38 == local_34) {
      FUN_00426eb0(&local_3c,1);
    }
    if (local_38 != (void **)0x0) {
      *local_38 = (void *)0x33;
    }
  }
  local_38 = local_38 + 1;
  local_18 = (void *)0x60;
  if ((&local_18 < local_38) && (local_3c <= &local_18)) {
    iVar5 = (int)&local_18 - (int)local_3c;
    if (local_38 == local_34) {
      FUN_00426eb0(&local_3c,1);
    }
    if (local_38 != (void **)0x0) {
      *local_38 = local_3c[iVar5 >> 2];
    }
  }
  else {
    if (local_38 == local_34) {
      FUN_00426eb0(&local_3c,1);
    }
    if (local_38 != (void **)0x0) {
      *local_38 = (void *)0x60;
    }
  }
  local_38 = local_38 + 1;
  local_1c = (void *)0x50;
  if ((&local_1c < local_38) && (local_3c <= &local_1c)) {
    iVar5 = (int)&local_1c - (int)local_3c;
    if (local_38 == local_34) {
      FUN_00426eb0(&local_3c,1);
    }
    if (local_38 != (void **)0x0) {
      *local_38 = local_3c[iVar5 >> 2];
    }
  }
  else {
    if (local_38 == local_34) {
      FUN_00426eb0(&local_3c,1);
    }
    if (local_38 != (void **)0x0) {
      *local_38 = (void *)0x50;
    }
  }
  local_38 = local_38 + 1;
  local_20 = (void *)0x4c;
  if ((&local_20 < local_38) && (local_3c <= &local_20)) {
    iVar5 = (int)&local_20 - (int)local_3c;
    if (local_38 == local_34) {
      FUN_00426eb0(&local_3c,1);
    }
    if (local_38 != (void **)0x0) {
      *local_38 = local_3c[iVar5 >> 2];
    }
  }
  else {
    if (local_38 == local_34) {
      FUN_00426eb0(&local_3c,1);
    }
    if (local_38 != (void **)0x0) {
      *local_38 = (void *)0x4c;
    }
  }
  local_38 = local_38 + 1;
  local_24 = (void *)0x28;
  if ((&local_24 < local_38) && (local_3c <= &local_24)) {
    iVar5 = (int)&local_24 - (int)local_3c;
    if (local_38 == local_34) {
      FUN_00426eb0(&local_3c,1);
    }
    if (local_38 != (void **)0x0) {
      *local_38 = local_3c[iVar5 >> 2];
    }
  }
  else {
    if (local_38 == local_34) {
      FUN_00426eb0(&local_3c,1);
    }
    if (local_38 != (void **)0x0) {
      *local_38 = (void *)0x28;
    }
  }
  local_38 = local_38 + 1;
  local_28 = (void *)0x2b;
  if ((&local_28 < local_38) && (local_3c <= &local_28)) {
    iVar5 = (int)&local_28 - (int)local_3c;
    if (local_38 == local_34) {
      FUN_00426eb0(&local_3c,1);
    }
    if (local_38 != (void **)0x0) {
      *local_38 = local_3c[iVar5 >> 2];
    }
  }
  else {
    if (local_38 == local_34) {
      FUN_00426eb0(&local_3c,1);
    }
    if (local_38 != (void **)0x0) {
      *local_38 = (void *)0x2b;
    }
  }
  local_38 = local_38 + 1;
  local_2c = (void *)0x2d;
  if ((&local_2c < local_38) && (local_3c <= &local_2c)) {
    iVar5 = (int)&local_2c - (int)local_3c;
    if (local_38 == local_34) {
      FUN_00426eb0(&local_3c,1);
    }
    if (local_38 != (void **)0x0) {
      *local_38 = local_3c[iVar5 >> 2];
    }
  }
  else {
    if (local_38 == local_34) {
      FUN_00426eb0(&local_3c,1);
    }
    if (local_38 != (void **)0x0) {
      *local_38 = (void *)0x2d;
    }
  }
  local_38 = local_38 + 1;
  local_30 = (void *)0x34;
  if ((&local_30 < local_38) && (local_3c <= &local_30)) {
    iVar5 = (int)&local_30 - (int)local_3c;
    if (local_38 == local_34) {
      FUN_00426eb0(&local_3c,1);
    }
    if (local_38 != (void **)0x0) {
      *local_38 = local_3c[iVar5 >> 2];
    }
  }
  else {
    if (local_38 == local_34) {
      FUN_00426eb0(&local_3c,1);
    }
    if (local_38 != (void **)0x0) {
      *local_38 = (void *)0x34;
    }
  }
  ppvVar3 = local_38;
  ppvVar2 = local_3c;
  uVar4 = rand();
  pvVar1 = ppvVar2[uVar4 % (uint)((int)ppvVar3 + (4 - (int)ppvVar2) >> 2)];
  if (ppvVar2 != (void **)0x0) {
    operator_delete(ppvVar2);
  }
  ExceptionList = local_14[1];
  return pvVar1;
}


/* FUN_0052b230 @ 0052b230  kind=gamemisc  attributed-by=none  size=448 */

undefined4 __thiscall FUN_0052b230(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  void *local_1c;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00556178;
  local_10 = ExceptionList;
  if ((((-1 < param_1) && (-1 < param_2)) && (param_1 < 0x400)) &&
     ((param_2 < 0x400 &&
      (iVar1 = *(int *)((int)this + (param_1 * 0x400 + param_2) * 4 + 0x4000bc), iVar1 != 0)))) {
    local_1c = (void *)0x0;
    local_18 = 0;
    local_14 = 0;
    local_8 = 0;
    param_1 = 0x6c;
    if (*(float *)(iVar1 + 0x10) <= 0.2) {
      param_1 = 0x72;
    }
    ExceptionList = &local_10;
    FUN_004f2be0(&local_1c,&param_1);
    param_1 = 0x77;
    if (*(float *)(iVar1 + 0x10) <= 0.2) {
      param_1 = 0x74;
    }
    FUN_004f2be0(&local_1c,&param_1);
    iVar3 = param_3;
    if (10 < param_3) {
      param_1 = 0x73;
      FUN_004f2be0(&local_1c,&param_1);
    }
    if (0x14 < iVar3) {
      param_1 = 0x75;
      FUN_004f2be0(&local_1c,&param_1);
    }
    if (0x32 < iVar3) {
      if (0.2 < *(float *)(iVar1 + 0x10) || *(float *)(iVar1 + 0x10) == 0.2) {
        param_1 = 0x70;
        if (*(char *)(iVar1 + 8) != '\x01') {
          param_1 = 0x6f;
        }
      }
      else {
        param_1 = 0x71;
      }
      FUN_004f2be0(&local_1c,&param_1);
      param_1 = 0x6d;
      FUN_004f2be0(&local_1c,&param_1);
    }
    if (0x46 < iVar3) {
      param_1 = 0x6e;
      FUN_004f2be0(&local_1c,&param_1);
    }
    uVar4 = rand();
    uVar2 = *(undefined4 *)((int)local_1c + (uVar4 % (uint)(local_18 - (int)local_1c >> 2)) * 4);
    if (local_1c != (void *)0x0) {
      operator_delete(local_1c);
    }
    ExceptionList = local_10;
    return uVar2;
  }
  return 0x6c;
}


/* FUN_0052e040 @ 0052e040  kind=gamemisc  attributed-by=none  size=116 */

void __thiscall FUN_0052e040(void *this,int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  iVar2 = *(int *)this;
  puVar7 = FUN_0052e120(this,*(undefined4 **)(*param_1 + 4),iVar2,param_2);
  *(undefined4 **)(iVar2 + 4) = puVar7;
  piVar3 = *(int **)this;
  *(int *)((int)this + 4) = param_1[1];
  piVar4 = (int *)piVar3[1];
  if (*(char *)((int)piVar4 + 0xd) != '\0') {
    *piVar3 = (int)piVar3;
    *(int *)(*(int *)this + 8) = *(int *)this;
    return;
  }
  cVar1 = *(char *)(*piVar4 + 0xd);
  piVar6 = (int *)*piVar4;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*piVar6 + 0xd);
    piVar4 = piVar6;
    piVar6 = (int *)*piVar6;
  }
  *piVar3 = (int)piVar4;
  iVar2 = *(int *)(*(int *)this + 4);
  iVar5 = *(int *)(iVar2 + 8);
  cVar1 = *(char *)(iVar5 + 0xd);
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*(int *)(iVar5 + 8) + 0xd);
    iVar2 = iVar5;
    iVar5 = *(int *)(iVar5 + 8);
  }
  *(int *)(*(int *)this + 8) = iVar2;
  return;
}


/* FUN_0052e0c0 @ 0052e0c0  kind=gamemisc  attributed-by=none  size=86 */

undefined4 * __cdecl FUN_0052e0c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != param_2) {
    puVar2 = param_1 + 4;
    do {
      *param_3 = puVar2[-4];
      param_3[1] = puVar2[-3];
      param_3[2] = puVar2[-2];
      param_3[3] = puVar2[-1];
      param_3[4] = *puVar2;
      param_3[5] = puVar2[1];
      param_3[6] = puVar2[2];
      puVar1 = puVar2 + 4;
      param_3 = param_3 + 8;
      puVar2 = puVar2 + 8;
    } while (puVar1 != param_2);
    return param_3;
  }
  return param_3;
}


/* FUN_0052e120 @ 0052e120  kind=gamemisc  attributed-by=none  size=159 */

undefined4 * __thiscall
FUN_0052e120(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00556240;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = *(undefined4 **)this;
  if (*(char *)((int)param_1 + 0xd) == '\0') {
    puVar1 = FUN_0052df80(this,param_1 + 4);
    puVar1[1] = param_2;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 3);
    if (*(char *)((int)puVar3 + 0xd) != '\0') {
      puVar3 = puVar1;
    }
    local_8 = 0;
    puVar2 = FUN_0052e120(this,(undefined4 *)*param_1,puVar1,param_3);
    *puVar1 = puVar2;
    puVar2 = FUN_0052e120(this,(undefined4 *)param_1[2],puVar1,param_3);
    puVar1[2] = puVar2;
  }
  ExceptionList = local_10;
  return puVar3;
}


/* FUN_0052e1e0 @ 0052e1e0  kind=gamemisc  attributed-by=none  size=101 */

void __cdecl FUN_0052e1e0(int *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  if (param_1 != param_2) {
    iVar4 = *param_3;
    do {
      iVar4 = iVar4 + 1;
      *param_3 = iVar4;
      if (*(char *)((int)param_1 + 0xd) == '\0') {
        piVar2 = (int *)param_1[2];
        if (*(char *)((int)piVar2 + 0xd) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0xd);
          param_1 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0xd);
            param_1 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(param_1[1] + 0xd);
          piVar3 = (int *)param_1[1];
          piVar2 = param_1;
          while ((param_1 = piVar3, cVar1 == '\0' && (piVar2 == (int *)param_1[2]))) {
            cVar1 = *(char *)(param_1[1] + 0xd);
            piVar3 = (int *)param_1[1];
            piVar2 = param_1;
          }
        }
      }
    } while (param_1 != param_2);
  }
  return;
}


/* FUN_0052e250 @ 0052e250  kind=gamemisc  attributed-by=none  size=511 */

void __thiscall
FUN_0052e250(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  if (0xaaaaaa8 < *(uint *)((int)this + 4)) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("map/set<T> too long");
  }
  piVar3 = FUN_0052df80(this,param_4);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  piVar3[1] = (int)param_3;
  if (param_3 == *(undefined4 **)this) {
    (*(undefined4 **)this)[1] = piVar3;
    **(undefined4 **)this = piVar3;
    iVar4 = *(int *)this;
  }
  else {
    if (param_2 != '\0') {
      *param_3 = piVar3;
      if (param_3 == (undefined4 *)**(int **)this) {
        **(int **)this = (int)piVar3;
      }
      goto LAB_0052e2ae;
    }
    param_3[2] = piVar3;
    iVar4 = *(int *)this;
    if (param_3 != *(undefined4 **)(iVar4 + 8)) goto LAB_0052e2ae;
  }
  *(int **)(iVar4 + 8) = piVar3;
LAB_0052e2ae:
  cVar1 = *(char *)(piVar3[1] + 0xc);
  piVar5 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)this + 4) + 0xc) = 1;
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
          if (piVar7 == *(int **)(*(int *)this + 4)) {
            *(int **)(*(int *)this + 4) = piVar5;
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
        if (piVar7 == *(int **)(*(int *)this + 4)) {
          *(int **)(*(int *)this + 4) = piVar6;
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
        goto LAB_0052e42a;
      }
LAB_0052e381:
      *(undefined1 *)(piVar7 + 3) = 1;
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
      piVar5 = *(int **)(piVar5[1] + 4);
    }
    else {
      if ((char)piVar6[3] == '\0') goto LAB_0052e381;
      if (piVar5 == (int *)*piVar7) {
        iVar4 = *piVar7;
        *piVar7 = *(int *)(iVar4 + 8);
        if (*(char *)(*(int *)(iVar4 + 8) + 0xd) == '\0') {
          *(int **)(*(int *)(iVar4 + 8) + 4) = piVar7;
        }
        *(int *)(iVar4 + 4) = piVar7[1];
        if (piVar7 == *(int **)(*(int *)this + 4)) {
          *(int *)(*(int *)this + 4) = iVar4;
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
      if (piVar7 == *(int **)(*(int *)this + 4)) {
        *(int **)(*(int *)this + 4) = piVar6;
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
LAB_0052e42a:
      piVar7[1] = (int)piVar6;
    }
    cVar1 = *(char *)(piVar5[1] + 0xc);
  } while( true );
}


/* FUN_0052e450 @ 0052e450  kind=gamemisc  attributed-by=none  size=310 */

undefined4 * __thiscall
FUN_0052e450(void *this,undefined4 *param_1,char param_2,uint *param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint **ppuVar4;
  undefined4 *puVar5;
  uint *puVar6;
  bool local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00556260;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = *(uint **)this;
  local_8 = 0;
  local_18 = true;
  puVar6 = puVar1;
  if (*(char *)((int)puVar1[1] + 0xd) == '\0') {
    uVar2 = param_3[1];
    puVar3 = (uint *)puVar1[1];
    do {
      puVar6 = puVar3;
      if (param_2 == '\0') {
        if (((int)puVar6[5] < (int)uVar2) ||
           (((int)puVar6[5] <= (int)uVar2 && (puVar6[4] <= *param_3)))) {
          local_18 = false;
          goto LAB_0052e4ec;
        }
        puVar3 = (uint *)*puVar6;
        local_18 = true;
      }
      else {
        if (((int)uVar2 < (int)puVar6[5]) ||
           (((int)uVar2 <= (int)puVar6[5] && (*param_3 <= puVar6[4])))) {
          local_18 = false;
        }
        else {
          local_18 = true;
        }
        local_18 = !local_18;
        if (local_18) {
          puVar3 = (uint *)*puVar6;
        }
        else {
LAB_0052e4ec:
          puVar3 = (uint *)puVar6[2];
        }
      }
    } while (*(char *)((int)puVar3 + 0xd) == '\0');
  }
  _param_2 = puVar6;
  if (local_18) {
    if (puVar6 == (uint *)*puVar1) {
      ppuVar4 = (uint **)&param_2;
      local_18 = true;
      goto LAB_0052e514;
    }
    FUN_004dad80((int *)&param_2);
  }
  if (((int)param_3[1] < (int)_param_2[5]) ||
     (((int)param_3[1] <= (int)_param_2[5] && (*param_3 <= _param_2[4])))) {
    *param_1 = _param_2;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return param_1;
  }
  ppuVar4 = &param_3;
LAB_0052e514:
  puVar5 = (undefined4 *)FUN_0052e250(this,ppuVar4,local_18,puVar6,param_3);
  *param_1 = *puVar5;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return param_1;
}


/* FUN_0052e590 @ 0052e590  kind=gamemisc  attributed-by=none  size=155 */

void __thiscall FUN_0052e590(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00556280;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    if (param_2 == param_3) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = FUN_0052df40(param_1,(undefined4 *)param_1[1],param_2);
    if (*(int *)((int)this + 4) == 0xaaaaaa9) break;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    param_1[1] = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    param_2 = param_2 + 4;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_0052e660 @ 0052e660  kind=gamemisc  attributed-by=none  size=80 */

void __cdecl FUN_0052e660(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != param_2) {
    puVar2 = param_1 + 4;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = puVar2[-4];
        param_3[1] = puVar2[-3];
        param_3[2] = puVar2[-2];
        param_3[3] = puVar2[-1];
        param_3[4] = *puVar2;
        param_3[5] = puVar2[1];
        param_3[6] = puVar2[2];
      }
      param_3 = param_3 + 8;
      puVar1 = puVar2 + 4;
      puVar2 = puVar2 + 8;
    } while (puVar1 != param_2);
  }
  return;
}


/* FUN_0052e6b0 @ 0052e6b0  kind=gamemisc  attributed-by=none  size=92 */

undefined4 * __cdecl FUN_0052e6b0(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_1 != param_2) {
    puVar3 = (undefined4 *)(param_1 + 8);
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3 + 3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar2 + -0xc + (int)puVar1);
        puVar1[-2] = puVar3[-1];
        puVar1[-1] = *puVar3;
        *puVar1 = puVar3[1];
      }
      puVar1 = puVar1 + 4;
      param_3 = param_3 + 4;
      puVar3 = puVar3 + 4;
    } while (iVar2 + -0xc + (int)puVar1 != param_2);
    return param_3;
  }
  return param_3;
}


/* FUN_0052e710 @ 0052e710  kind=gamemisc  attributed-by=none  size=42 */

void __cdecl FUN_0052e710(float *param_1,float *param_2,int param_3,float param_4)

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
    iVar2 = param_3 - iVar2;
    do {
      *param_1 = (*param_2 - *param_1) * param_4 + *param_1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}


/* FUN_0052e7c0 @ 0052e7c0  kind=gamemisc  attributed-by=none  size=197 */

void __cdecl FUN_0052e7c0(float *param_1,undefined8 *param_2,int param_3,float param_4)

{
  float fVar1;
  uint uVar2;
  float local_14;
  float fStack_10;
  
  uVar2 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
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


/* FUN_0052e950 @ 0052e950  kind=gamemisc  attributed-by=none  size=132 */

undefined4 * __thiscall FUN_0052e950(void *this,int param_1)

{
  undefined4 *this_00;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005562d8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this_00 = (undefined4 *)((int)this + 8);
  *(undefined4 *)this = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 100);
  puVar1 = *(undefined4 **)(param_1 + 0x40);
  puVar2 = *(undefined4 **)(param_1 + 0x3c);
  *this_00 = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar3 = FUN_004268f0((undefined4 *)0x0,(undefined4 *)0x0);
  *this_00 = uVar3;
  local_8 = 0;
  FUN_0052dfd0(this_00,puVar2,puVar1);
  ExceptionList = local_10;
  return this;
}


/* FUN_0052e9e0 @ 0052e9e0  kind=gamemisc  attributed-by=none  size=136 */

void * __thiscall FUN_0052e9e0(void *this,undefined4 *param_1)

{
  FUN_00423350(this,param_1);
  FUN_0052e890((void *)((int)this + 0x78),param_1 + 0x1e);
  *(undefined4 *)((int)this + 0x80) = param_1[0x20];
  *(undefined4 *)((int)this + 0x84) = param_1[0x21];
  *(undefined4 *)((int)this + 0x88) = param_1[0x22];
  *(undefined4 *)((int)this + 0x8c) = param_1[0x23];
  *(undefined4 *)((int)this + 0x90) = param_1[0x24];
  *(undefined4 *)((int)this + 0x94) = param_1[0x25];
  *(undefined4 *)((int)this + 0x98) = param_1[0x26];
  *(undefined4 *)((int)this + 0x9c) = param_1[0x27];
  return this;
}


/* FUN_0052ec10 @ 0052ec10  kind=gamemisc  attributed-by=none  size=19 */

void __thiscall FUN_0052ec10(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)this;
  *param_1 = iVar1;
  *(undefined4 *)this = *(undefined4 *)(iVar1 + 4);
  return;
}


/* FUN_0052ec30 @ 0052ec30  kind=gamemisc  attributed-by=none  size=76 */

float * __thiscall FUN_0052ec30(void *this,float *param_1)

{
  float fVar1;
  
  *param_1 = *(float *)this;
  param_1[1] = *(float *)((int)this + 4);
  fVar1 = *(float *)((int)this + 8);
  *param_1 = *param_1 * -1.0;
  param_1[2] = fVar1;
  param_1[1] = param_1[1] * -1.0;
  param_1[2] = param_1[2] * -1.0;
  return param_1;
}


/* FUN_0052ecc0 @ 0052ecc0  kind=gamemisc  attributed-by=none  size=101 */

uint __thiscall FUN_0052ecc0(void *this,uint param_1)

{
  uint in_EAX;
  void *pvVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (param_1 == 0) {
    return in_EAX & 0xffffff00;
  }
  if (0x7ffffff < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  pvVar1 = operator_new(param_1 * 0x20);
  if (pvVar1 != (void *)0x0) {
    *(void **)this = pvVar1;
    *(void **)((int)this + 4) = pvVar1;
    pvVar1 = (void *)((int)pvVar1 + param_1 * 0x20);
    *(void **)((int)this + 8) = pvVar1;
    return CONCAT31((int3)((uint)pvVar1 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_alloc();
}


/* FUN_0052ee80 @ 0052ee80  kind=gamemisc  attributed-by=none  size=115 */

void __thiscall FUN_0052ee80(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 <= (uint)(*(int *)((int)this + 8) - *(int *)((int)this + 4) >> 4)) {
    return;
  }
  iVar2 = *(int *)((int)this + 4) - *(int *)this >> 4;
  if (0xfffffffU - iVar2 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar3 = iVar2 + param_1;
  uVar1 = *(int *)((int)this + 8) - *(int *)this >> 4;
  if (0xfffffff - (uVar1 >> 1) < uVar1) {
    uVar1 = 0;
    if (uVar3 != 0) {
      uVar1 = uVar3;
    }
    FUN_0052eda0(this,uVar1);
    return;
  }
  uVar1 = uVar1 + (uVar1 >> 1);
  if (uVar1 < uVar3) {
    uVar1 = uVar3;
  }
  FUN_0052eda0(this,uVar1);
  return;
}


/* FUN_00530470 @ 00530470  kind=gamemisc  attributed-by=none  size=203 */

void __thiscall FUN_00530470(void *this,uint param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  void *this_00;
  uint uVar3;
  
  if ((((-1 < (int)param_1) && (-1 < (int)param_2)) && ((int)param_1 < 0x1000000)) &&
     (((int)param_2 < 0x1000000 &&
      (iVar1 = FUN_00406290(this,(int)(param_1 + ((int)param_1 >> 0x1f & 0xffU)) >> 8,
                            (int)(param_2 + ((int)param_2 >> 0x1f & 0xffU)) >> 8), iVar1 != 0)))) {
    uVar2 = param_2 & 0x800000ff;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xffffff00) + 1;
    }
    uVar3 = param_1 & 0x800000ff;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xffffff00) + 1;
    }
    this_00 = (void *)((uVar2 * 0x100 + uVar3) * 0x20 + *(int *)(iVar1 + 0xa8));
    if (((this_00 != (void *)0x0) && (iVar1 = *(int *)((int)this_00 + 0x10), iVar1 <= param_3)) &&
       (param_3 < *(int *)((int)this_00 + 0x1c) + iVar1)) {
      if (param_3 < 1) {
        FUN_0041fe60(this_00,param_3 - iVar1,&DAT_005842d4);
        return;
      }
      FUN_0041fe60(this_00,param_3 - iVar1,&DAT_005842d8);
    }
  }
  return;
}


/* FUN_00530560 @ 00530560  kind=gamemisc  attributed-by=none  size=77 */

int __thiscall FUN_00530560(void *this,uint *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int local_c;
  undefined4 local_8;
  
  puVar3 = (undefined4 *)FUN_00426b80(this,&local_c,param_1);
  piVar1 = (int *)*puVar3;
  piVar2 = (int *)puVar3[1];
  param_1 = (uint *)0x0;
  FUN_0052e1e0(piVar1,piVar2,(int *)&param_1);
  FUN_004fc060(this,&local_8,piVar1,piVar2);
  return (int)param_1;
}


/* FUN_00530600 @ 00530600  kind=gamemisc  attributed-by=none  size=115 */

void __thiscall FUN_00530600(void *this,int *param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = *(undefined4 **)this;
  puVar4 = puVar1;
  if (*(char *)((int)puVar1[1] + 0xd) == '\0') {
    puVar2 = (undefined4 *)puVar1[1];
    do {
      if (((int)param_2[1] < (int)puVar2[5]) ||
         (((int)param_2[1] <= (int)puVar2[5] && (*param_2 <= (uint)puVar2[4])))) {
        puVar3 = (undefined4 *)*puVar2;
        puVar4 = puVar2;
      }
      else {
        puVar3 = (undefined4 *)puVar2[2];
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar3 + 0xd) == '\0');
  }
  if (puVar4 != puVar1) {
    if (((int)puVar4[5] <= (int)param_2[1]) &&
       (((int)puVar4[5] < (int)param_2[1] || ((uint)puVar4[4] <= *param_2)))) {
      *param_1 = (int)puVar4;
      return;
    }
  }
  *param_1 = (int)puVar1;
  return;
}


/* FUN_005306d0 @ 005306d0  kind=gamemisc  attributed-by=none  size=282 */

float10 __cdecl FUN_005306d0(float param_1,float param_2,float param_3)

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


/* FUN_00530840 @ 00530840  kind=gamemisc  attributed-by=none  size=99 */

void __thiscall FUN_00530840(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 **)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 **)((int)this + 8)) {
      FUN_0052ee80(this,1);
    }
    param_1 = (undefined4 *)(((int)param_1 - (int)puVar2 & 0xfffffff0U) + *(int *)this);
  }
  else if (puVar1 == *(undefined4 **)((int)this + 8)) {
    FUN_0052ee80(this,1);
  }
  puVar1 = *(undefined4 **)((int)this + 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
    puVar1[3] = param_1[3];
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x10;
  return;
}


/* FUN_005308b0 @ 005308b0  kind=gamemisc  attributed-by=none  size=458 */

void __thiscall FUN_005308b0(void *this,int param_1)

{
  uint *puVar1;
  int *piVar2;
  bool bVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined *puVar9;
  uint extraout_ECX;
  int iVar10;
  uint uVar11;
  void *pvVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined1 *puVar17;
  bool bVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  ulonglong uVar24;
  undefined8 uVar25;
  char local_2e8 [4];
  char local_2e4 [4];
  undefined2 local_2e0;
  undefined1 local_2de;
  float local_2dc;
  uint local_2d8;
  uint local_2d4;
  float local_2d0;
  uint local_2cc;
  uint local_2c8;
  void *local_2c4;
  float local_2c0;
  float local_2bc;
  int local_2b8;
  uint local_2b4;
  uint local_2b0;
  float local_2ac;
  int *local_2a8;
  float local_2a4;
  float local_2a0;
  float local_29c;
  float local_298;
  float local_294;
  char local_28d;
  float local_28c;
  float local_288;
  float local_284;
  float local_27c;
  float local_278;
  float local_274;
  uint local_24c [12];
  float local_21c;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  uint local_204;
  int local_200;
  int local_1fc;
  int local_1f8;
  int local_1f4;
  int local_1f0;
  uint local_1ec;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  int local_1dc;
  int local_1d8;
  uint local_1d4 [12];
  float local_1a4 [4];
  float local_194;
  float local_190;
  uint local_18c [6];
  float local_174 [3];
  int local_168;
  int iStack_164;
  int local_160;
  int iStack_15c;
  int local_158;
  int iStack_154;
  int local_150;
  int iStack_14c;
  int local_148;
  int iStack_144;
  int local_140;
  int iStack_13c;
  float local_138;
  float fStack_134;
  float local_130;
  float local_12c;
  float fStack_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float fStack_110;
  float local_10c;
  float local_108;
  float fStack_104;
  float local_100;
  float local_fc;
  float fStack_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  uint local_a4;
  float local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  float local_8c;
  float fStack_88;
  float local_84;
  float local_80;
  float fStack_7c;
  float local_78;
  float local_74;
  float fStack_70;
  float local_6c;
  float local_68;
  float fStack_64;
  float local_60;
  float local_5c;
  float fStack_58;
  float local_54;
  float local_50;
  float fStack_4c;
  float local_48;
  float local_44;
  float fStack_40;
  float local_3c;
  undefined8 local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  float fStack_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_2c4 = this;
  local_2b8 = param_1;
  if (0.0 < *(float *)(param_1 + 0x16c) || *(float *)(param_1 + 0x16c) == 0.0) {
    local_2d8 = 0;
LAB_005308f0:
    local_2bc = *(float *)(local_2b8 + 0x80);
    local_2a4 = *(float *)(local_2b8 + 0x84);
    local_29c = *(float *)(local_2b8 + 0x88);
    local_1a4[0] = *(float *)(local_2b8 + 0x80) * 0.5;
    iVar14 = 0;
    local_1a4[1] = *(float *)(local_2b8 + 0x84) * 0.5;
    local_1a4[2] = *(float *)(local_2b8 + 0x88) * 0.5;
    do {
      local_294 = local_1a4[iVar14] * 65536.0;
      uVar24 = FUN_0054a946();
      local_18c[iVar14 * 2] = (uint)uVar24;
      local_18c[iVar14 * 2 + 1] = (uint)(uVar24 >> 0x20);
      iVar14 = iVar14 + 1;
    } while (iVar14 < 3);
    local_2d4 = *(uint *)(local_2b8 + 0x10);
    local_2c8 = *(uint *)(local_2b8 + 0x14);
    local_2cc = *(uint *)(local_2b8 + 0x18);
    local_2c0 = *(float *)(local_2b8 + 0x1c);
    local_204 = local_2d4 - local_18c[0];
    local_2b0 = *(uint *)(local_2b8 + 0x20);
    local_2ac = *(float *)(local_2b8 + 0x24);
    local_200 = (local_2c8 - local_18c[1]) - (uint)(local_2d4 < local_18c[0]);
    local_1fc = local_2cc - local_18c[2];
    local_1f8 = ((int)local_2c0 - local_18c[3]) - (uint)(local_2cc < local_18c[2]);
    local_1f4 = local_2b0 - local_18c[4];
    local_1f0 = ((int)local_2ac - local_18c[5]) - (uint)(local_2b0 < local_18c[4]);
    local_298 = local_2c0;
    FUN_00405450((int *)&local_a4,&local_204);
    iVar14 = 0;
    local_174[0] = local_2bc * 0.5;
    local_174[1] = local_2a4 * 0.5;
    local_174[2] = local_29c * 0.5;
    do {
      local_2d0 = local_174[iVar14] * 65536.0;
      uVar24 = FUN_0054a946();
      local_1d4[iVar14 * 2] = (uint)uVar24;
      local_1d4[iVar14 * 2 + 1] = (uint)(uVar24 >> 0x20);
      iVar14 = iVar14 + 1;
    } while (iVar14 < 3);
    local_1ec = local_2d4 + local_1d4[0];
    local_1e8 = local_2c8 + local_1d4[1] + (uint)CARRY4(local_2d4,local_1d4[0]);
    local_1e4 = local_2cc + local_1d4[2];
    local_1e0 = (int)local_298 + local_1d4[3] + (uint)CARRY4(local_2cc,local_1d4[2]);
    local_1dc = local_2b0 + local_1d4[4];
    local_1d8 = (int)local_2ac + local_1d4[5] + (uint)CARRY4(local_2b0,local_1d4[4]);
    FUN_00405450(&local_98,&local_1ec);
    piVar13 = (int *)(extraout_ECX & 0xffffff00);
    local_2b0 = local_a4;
    iVar14 = local_94;
    fVar21 = local_a0;
    local_2a8 = piVar13;
    if ((int)local_a4 <= local_98) {
      do {
        local_29c = fVar21;
        iVar15 = local_9c;
        fVar21 = local_29c;
        if ((int)local_29c <= iVar14) {
          do {
            if (iVar15 <= local_90) {
              iVar14 = ((int)local_29c >> 0x1f & 0xffU) + (int)local_29c;
              uVar16 = iVar14 >> 8;
              uVar6 = (int)(local_2b0 + ((int)local_2b0 >> 0x1f & 0xffU)) >> 8;
              local_2b4 = uVar6;
              do {
                if ((((-1 < (int)uVar6) && (-1 < (int)uVar16)) && ((int)uVar6 < 0x10000)) &&
                   ((int)uVar16 < 0x10000)) {
                  iVar7 = (int)(local_2b4 + ((int)local_2b4 >> 0x1f & 0x3fU)) >> 6;
                  iVar10 = (int)((iVar14 >> 0x1f & 0x3fU) + uVar16) >> 6;
                  uVar6 = local_2b4;
                  piVar13 = local_2a8;
                  if (((-1 < iVar7) && (-1 < iVar10)) &&
                     ((iVar7 < 0x400 &&
                      ((iVar10 < 0x400 &&
                       (iVar7 = *(int *)((int)local_2c4 + (iVar7 * 0x400 + iVar10) * 4 + 0xbc),
                       iVar7 != 0)))))) {
                    uVar11 = local_2b4 & 0x8000003f;
                    if ((int)uVar11 < 0) {
                      uVar11 = (uVar11 - 1 | 0xffffffc0) + 1;
                    }
                    uVar8 = uVar16 & 0x8000003f;
                    if ((int)uVar8 < 0) {
                      uVar8 = (uVar8 - 1 | 0xffffffc0) + 1;
                    }
                    iVar10 = uVar11 * 0x40 + uVar8;
                    if (*(int *)(iVar7 + 0x10018 + iVar10 * 4) != 0) {
                      if ((((((int)local_2b0 < 0) || ((int)local_29c < 0)) ||
                           (0xffffff < (int)local_2b0)) ||
                          ((0xffffff < (int)local_29c || (iVar7 == 0)))) ||
                         (iVar7 = *(int *)(iVar7 + 0x10018 + iVar10 * 4), iVar7 == 0)) {
LAB_00530d2c:
                        puVar9 = &DAT_005842dc;
                      }
                      else {
                        uVar6 = (uint)local_29c & 0x800000ff;
                        if ((int)uVar6 < 0) {
                          uVar6 = (uVar6 - 1 | 0xffffff00) + 1;
                        }
                        uVar11 = local_2b0 & 0x800000ff;
                        if ((int)uVar11 < 0) {
                          uVar11 = (uVar11 - 1 | 0xffffff00) + 1;
                        }
                        pvVar12 = (void *)((uVar6 * 0x100 + uVar11) * 0x20 + *(int *)(iVar7 + 0xa8))
                        ;
                        if ((pvVar12 == (void *)0x0) ||
                           (iVar7 = *(int *)((int)pvVar12 + 0x10), iVar15 < iVar7))
                        goto LAB_00530d2c;
                        if (iVar15 < *(int *)((int)pvVar12 + 0x1c) + iVar7) {
                          puVar9 = FUN_00405f20(pvVar12,iVar15 - iVar7);
                          if ((((puVar9[3] & 0x1f) == 0) && (iVar15 < 1)) &&
                             ((puVar9[3] & 0x40) == 0)) {
                            puVar9 = &DAT_005842d4;
                          }
                        }
                        else {
                          puVar9 = &DAT_005842d4;
                          if (0 < iVar15) {
                            puVar9 = &DAT_005842d8;
                          }
                        }
                      }
                      uVar6 = local_2b4;
                      piVar13 = local_2a8;
                      if (((puVar9[3] & 0x1f) != 0) &&
                         (piVar13 = (int *)((uint)local_2a8 & 0xff), local_2a8 = piVar13,
                         (puVar9[3] & 0x1f) != 2)) {
                        piVar13 = (int *)0x1;
                        local_2a8 = piVar13;
                      }
                    }
                  }
                }
                iVar7 = local_2b8;
                iVar15 = iVar15 + 1;
              } while (iVar15 <= local_90);
              iVar15 = local_9c;
              if ((char)piVar13 != '\0') {
                local_2dc = *(float *)(local_2b8 + 0x88) * 0.5 * 65536.0;
                uVar24 = FUN_0054a946();
                local_2c0 = (float)(uVar24 >> 0x20);
                local_2c8 = (uint)uVar24;
                uVar6 = *(uint *)(iVar7 + 0x20);
                uVar16 = uVar6 - local_2c8;
                uVar6 = (*(int *)(iVar7 + 0x24) - (int)local_2c0) - (uint)(uVar6 < local_2c8);
                if (((int)uVar6 < 1) && ((int)uVar6 < 0)) {
                  uVar25 = __alldiv(uVar16,uVar6,0x10000,0);
                  uVar6 = (int)uVar25 - 1;
                }
                else {
                  uVar25 = __alldiv(uVar16,uVar6,0x10000,0);
                  uVar6 = (uint)uVar25;
                }
                bVar18 = CARRY4(uVar6 * 0x10000,local_2c8);
                iVar15 = uVar6 * 0x10000 + local_2c8;
                iVar14 = (((int)uVar6 >> 0x1f) << 0x10 | uVar6 >> 0x10) + (int)local_2c0;
                uVar24 = FUN_0054a946();
                local_2d8 = local_2d8 + 1;
                *(ulonglong *)(local_2b8 + 0x20) = uVar24 + CONCAT44(iVar14 + (uint)bVar18,iVar15);
                *(undefined4 *)(local_2b8 + 0x1180) = 0;
                if ((int)local_2d8 < 1) goto LAB_005308f0;
                goto LAB_00530dbf;
              }
            }
            local_29c = (float)((int)local_29c + 1);
            iVar14 = local_94;
            fVar21 = local_a0;
          } while ((int)local_29c <= local_94);
        }
        local_2b0 = local_2b0 + 1;
      } while ((int)local_2b0 <= local_98);
    }
LAB_00530dbf:
    piVar13 = (int *)**(int **)((int)local_2c4 + 0xc);
    pvVar12 = local_2c4;
    iVar14 = local_2b8;
    local_2a8 = piVar13;
    if (piVar13 != *(int **)((int)local_2c4 + 0xc)) {
LAB_00530de0:
      fVar21 = (float)piVar13[6];
      local_298 = fVar21;
      if (fVar21 != 0.0) {
        local_2d8 = *(uint *)(iVar14 + 0x10);
        local_2c8 = *(uint *)(iVar14 + 0x14);
        local_2a4 = *(float *)(iVar14 + 0x18);
        local_29c = *(float *)(local_2b8 + 0x1c);
        local_2a0 = *(float *)(local_2b8 + 0x24);
        local_2ac = *(float *)(local_2b8 + 0x20);
        local_168 = local_2d8 - *(uint *)((int)fVar21 + 0x80U);
        iStack_164 = (local_2c8 - *(int *)((int)fVar21 + 0x84)) -
                     (uint)(local_2d8 < *(uint *)((int)fVar21 + 0x80U));
        local_160 = (int)local_2a4 - (int)*(float *)((int)fVar21 + 0x88U);
        iStack_15c = ((int)local_29c - *(int *)((int)fVar21 + 0x8c)) -
                     (uint)((uint)local_2a4 < (uint)*(float *)((int)fVar21 + 0x88U));
        local_158 = (int)local_2ac - (int)*(float *)((int)fVar21 + 0x90U);
        iStack_154 = ((int)local_2a0 - *(int *)((int)fVar21 + 0x94)) -
                     (uint)((uint)local_2ac < (uint)*(float *)((int)fVar21 + 0x90U));
        local_120 = (float)CONCAT44(iStack_164,local_168) * 1.5258789e-05;
        local_294 = (float)CONCAT44(iStack_154,local_158);
        local_11c = (float)CONCAT44(iStack_15c,local_160) * 1.5258789e-05;
        local_118 = local_294 * 1.5258789e-05;
        pvVar12 = local_2c4;
        iVar14 = local_2b8;
        piVar13 = local_2a8;
        local_2c0 = local_29c;
        if (((local_11c * local_11c + local_120 * local_120 + local_118 * local_118 <= 4096.0) &&
            (0x280c < (int)(*(int *)((int)local_2c4 + 0x24) - *(int *)((int)local_2c4 + 0x20) &
                           0xfffffffcU))) &&
           (local_2d0 = *(float *)(*(int *)((int)local_2c4 + 0x20) + 0x280c), local_2d0 != 0.0)) {
          local_2b0 = *(uint *)((int)local_2d0 + 0x48);
          local_2cc = *(uint *)((int)local_2d0 + 0x44);
          local_2d4 = *(uint *)((int)local_2d0 + 0x4c);
          fVar20 = (float)(int)local_2b0 * 0.5 * 0.0;
          fVar22 = (float)(int)local_2d4 * 0.5 * 0.0;
          fVar23 = (float)(int)local_2cc * 0.5 * 0.0;
          local_c0 = fVar20 + (float)(int)local_2cc * 0.5 + fVar22 + 0.0;
          fVar20 = fVar23 + fVar20;
          local_bc = fVar23 + (float)(int)local_2b0 * 0.5 + fVar22 + 0.0;
          local_b8 = fVar20 + (float)(int)local_2d4 * 0.5 + 0.0;
          local_b4 = fVar20 + fVar22 + 1.0;
          local_2c0 = *(float *)((int)fVar21 + 0x98);
          local_294 = -local_2c0 * 0.017453292;
          dVar19 = (double)local_294;
          libm_sse2_cos_precise();
          local_2bc = (float)dVar19;
          dVar19 = (double)local_294;
          libm_sse2_sin_precise();
          local_ec = (float)dVar19;
          fVar20 = local_ec * 0.0;
          local_150 = local_2d8 - *(uint *)((int)fVar21 + 0x80U);
          local_f0 = local_2bc + fVar20;
          local_d8 = local_2bc * 0.0;
          local_dc = local_2bc - fVar20;
          local_e0 = local_d8 - local_ec;
          local_ec = local_ec + local_d8;
          local_e8 = local_d8 + fVar20;
          local_d8 = local_d8 - fVar20;
          local_e4 = local_e8;
          local_d4 = local_d8;
          iStack_14c = (local_2c8 - *(int *)((int)fVar21 + 0x84)) -
                       (uint)(local_2d8 < *(uint *)((int)fVar21 + 0x80U));
          local_148 = (int)local_2a4 - (int)*(float *)((int)fVar21 + 0x88U);
          iStack_144 = ((int)local_29c - *(int *)((int)fVar21 + 0x8c)) -
                       (uint)((uint)local_2a4 < (uint)*(float *)((int)fVar21 + 0x88U));
          local_140 = (int)local_2ac - (int)*(float *)((int)fVar21 + 0x90U);
          iStack_13c = ((int)local_2a0 - *(int *)((int)fVar21 + 0x94)) -
                       (uint)((uint)local_2ac < (uint)*(float *)((int)fVar21 + 0x90U));
          local_b0 = (float)CONCAT44(iStack_14c,local_150) * 1.5258789e-05;
          local_ac = (float)CONCAT44(iStack_144,local_148) * 1.5258789e-05;
          local_a8 = (float)CONCAT44(iStack_13c,local_140) * 1.5258789e-05;
          local_294 = local_a8 * 0.0;
          local_c0 = local_ac * local_e0 + local_b0 * local_f0 + local_294 + local_c0;
          local_bc = local_ac * local_dc + local_b0 * local_ec + local_294 + local_bc;
          local_2ac = local_ac * local_d8 + local_b0 * local_e8 + local_a8 + local_b8;
          local_b8 = local_2ac;
          local_298 = local_ac * local_d8 + local_b0 * local_e8 + local_294 + local_b4;
          local_b4 = local_298;
          local_114 = local_e0 * 0.0 + local_f0 * 0.0 + 0.0 + local_c0;
          local_10c = local_d8 * 0.0 + local_e8 * 0.0 + 0.0 + local_2ac;
          fStack_110 = local_dc * 0.0 + local_ec * 0.0 + 0.0 + local_bc;
          local_c = 1.0 / (local_d8 * 0.0 + local_e8 * 0.0 + 0.0 + local_298);
          fVar21 = local_114 * local_c;
          local_2bc = *(float *)(local_2b8 + 0x84);
          fVar20 = fStack_110 * local_c;
          _local_14 = CONCAT44(fVar20,fVar21);
          local_c = local_10c * local_c;
          local_2a4 = *(float *)(local_2b8 + 0x80);
          local_21c = *(float *)(local_2b8 + 0x80) * 0.5;
          local_218 = *(float *)(local_2b8 + 0x84) * 0.5;
          local_2a0 = *(float *)(local_2b8 + 0x88);
          local_214 = *(float *)(local_2b8 + 0x88) * 0.5;
          _local_44 = CONCAT44(fVar20 - local_218,fVar21 - local_21c);
          local_3c = local_c - local_214;
          iVar14 = 0;
          do {
            uVar24 = FUN_0054a946();
            local_24c[iVar14 * 2 + 6] = (uint)uVar24;
            local_24c[iVar14 * 2 + 7] = (uint)(uVar24 >> 0x20);
            iVar14 = iVar14 + 1;
          } while (iVar14 < 3);
          FUN_00405450((int *)&local_2c,local_24c + 6);
          piVar13 = local_2a8;
          local_50 = (float)_local_14;
          local_210 = local_2a4 * 0.5;
          local_20c = local_2bc * 0.5;
          fStack_4c = (float)((ulonglong)_local_14 >> 0x20);
          local_208 = local_2a0 * 0.5;
          _local_50 = CONCAT44(fStack_4c + local_2bc * 0.5,local_50 + local_2a4 * 0.5);
          local_48 = local_c + local_2a0 * 0.5;
          iVar14 = 0;
          do {
            uVar24 = FUN_0054a946();
            local_24c[iVar14 * 2] = (uint)uVar24;
            local_24c[iVar14 * 2 + 1] = (uint)(uVar24 >> 0x20);
            iVar14 = iVar14 + 1;
          } while (iVar14 < 3);
          FUN_00405450(&local_20,local_24c);
          fVar21 = local_2a4;
          piVar2 = local_2a8;
          local_28d = '\0';
          local_2ac = local_2c;
          local_298 = local_2c;
          while (pvVar12 = local_2c4, iVar14 = local_2b8, (int)local_298 <= local_20) {
            local_29c = local_28;
            while ((int)local_29c <= local_1c) {
              local_294 = local_24;
              if ((int)local_24 <= local_18) {
                local_2e0 = 0;
                local_2de = 0;
                do {
                  if (((((int)local_298 < 0) || ((int)local_29c < 0)) ||
                      (((int)local_294 < 0 ||
                       (((int)local_2cc <= (int)local_298 || ((int)local_2b0 <= (int)local_29c))))))
                     || ((int)local_2d4 <= (int)local_294)) {
                    puVar17 = &DAT_00583dfc;
                  }
                  else {
                    puVar17 = (undefined1 *)
                              (((local_2b0 * (int)local_294 + (int)local_29c) * local_2cc +
                               (int)local_298) * 3 + *(int *)((int)local_2d0 + 0x30));
                  }
                  iVar15 = 0;
                  do {
                    if (((char *)((int)&local_2e0 + iVar15))[(int)puVar17 - (int)&local_2e0] !=
                        *(char *)((int)&local_2e0 + iVar15)) {
                      local_28d = '\x01';
                      break;
                    }
                    iVar15 = iVar15 + 1;
                  } while (iVar15 < 3);
                  local_294 = (float)((int)local_294 + 1);
                } while ((int)local_294 <= local_18);
                piVar13 = local_2a8;
                if (local_28d != '\0') {
                  fVar20 = -1.0;
                  local_298 = (float)((int)local_2c + 1);
                  local_28d = 1;
                  bVar18 = true;
                  if (local_20 + 1 < (int)local_298) goto LAB_00531988;
                  local_2e4[0] = '\0';
                  local_2e4[1] = '\0';
                  local_2e4[2] = 0;
                  goto LAB_005318a0;
                }
              }
              local_29c = (float)((int)local_29c + 1);
            }
            local_298 = (float)((int)local_298 + 1);
          }
        }
      }
      goto LAB_00531823;
    }
  }
LAB_00532273:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
LAB_005318a0:
  do {
    local_29c = local_28;
    do {
      local_294 = local_24;
      do {
        if ((((((int)local_298 < 0) || ((int)local_29c < 0)) || ((int)local_294 < 0)) ||
            (((int)local_2cc <= (int)local_298 || ((int)local_2b0 <= (int)local_29c)))) ||
           ((int)local_2d4 <= (int)local_294)) {
          puVar17 = &DAT_00583dfc;
        }
        else {
          puVar17 = (undefined1 *)
                    (((local_2b0 * (int)local_294 + (int)local_29c) * local_2cc + (int)local_298) *
                     3 + *(int *)((int)local_2d0 + 0x30));
        }
        iVar15 = 0;
        do {
          if ((local_2e4 + iVar15)[(int)puVar17 - (int)local_2e4] != local_2e4[iVar15]) {
            local_28d = 0;
            bVar18 = false;
            break;
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 < 3);
        local_294 = (float)((int)local_294 + 1);
      } while ((int)local_294 <= local_18);
      if (!bVar18) {
        local_298 = local_30;
        goto LAB_00531a45;
      }
      local_29c = (float)((int)local_29c + 1);
    } while ((int)local_29c <= local_1c);
    local_298 = (float)((int)local_298 + 1);
  } while ((int)local_298 <= local_20 + 1);
LAB_00531988:
  fStack_104 = fStack_10;
  local_100 = local_c;
  local_108 = (float)(int)local_2c + 1.05 + local_2a4 * 0.5;
  local_54 = local_c - local_c;
  local_298 = local_c;
  fVar22 = fStack_10 - fStack_10;
  fVar20 = local_108 - local_14;
  _local_5c = CONCAT44(fVar22,fVar20);
  local_38 = CONCAT44(fStack_10,local_108);
  local_30 = local_c;
  fVar20 = fVar22 * fVar22 + fVar20 * fVar20 + local_54 * local_54;
LAB_00531a45:
  local_29c = (float)((int)local_2c - 1);
  local_28d = 1;
  bVar18 = true;
  if ((int)local_29c <= local_20 + -1) {
    local_2e8[0] = '\0';
    local_2e8[1] = '\0';
    local_2e8[2] = 0;
    do {
      local_2a4 = local_28;
      do {
        local_294 = local_24;
        do {
          if ((((int)local_29c < 0) || ((int)local_2a4 < 0)) ||
             (((int)local_294 < 0 ||
              ((((int)local_2cc <= (int)local_29c || ((int)local_2b0 <= (int)local_2a4)) ||
               ((int)local_2d4 <= (int)local_294)))))) {
            puVar17 = &DAT_00583dfc;
          }
          else {
            puVar17 = (undefined1 *)
                      (((local_2b0 * (int)local_294 + (int)local_2a4) * local_2cc + (int)local_29c)
                       * 3 + *(int *)((int)local_2d0 + 0x30));
          }
          iVar15 = 0;
          do {
            if ((local_2e8 + iVar15)[(int)puVar17 - (int)local_2e8] != local_2e8[iVar15]) {
              local_28d = 0;
              bVar18 = false;
              break;
            }
            iVar15 = iVar15 + 1;
          } while (iVar15 < 3);
          local_294 = (float)((int)local_294 + 1);
        } while ((int)local_294 <= local_18);
        if (!bVar18) goto LAB_00531c46;
        local_2a4 = (float)((int)local_2a4 + 1);
      } while ((int)local_2a4 <= local_1c);
      local_29c = (float)((int)local_29c + 1);
    } while ((int)local_29c <= local_20 + -1);
  }
  fStack_f8 = fStack_10;
  local_f4 = local_c;
  local_fc = ((float)local_20 - 0.05) - fVar21 * 0.5;
  fStack_64 = fStack_10 - fStack_10;
  local_68 = local_fc - local_14;
  local_60 = local_c - local_c;
  fVar21 = fStack_64 * fStack_64 + local_68 * local_68 + local_60 * local_60;
  if ((fVar20 < 0.0) || (fVar21 < fVar20)) {
    local_38 = CONCAT44(fStack_10,local_fc);
    local_298 = local_c;
    local_30 = local_c;
    fVar20 = fVar21;
  }
LAB_00531c46:
  bVar18 = true;
  local_28d = 1;
  bVar3 = true;
  local_29c = local_2c;
  local_2a0 = (float)((int)local_28 + 1U);
  local_2a4 = (float)((int)local_28 + 1U);
  do {
    if ((int)local_2a4 <= local_1c + 1) {
      local_2dc = (float)((uint)local_2dc & 0xff000000);
      bVar18 = bVar3;
      do {
        local_294 = local_24;
        do {
          if ((((int)local_29c < 0) || ((int)local_2a4 < 0)) ||
             (((int)local_294 < 0 ||
              ((((int)local_2cc <= (int)local_29c || ((int)local_2b0 <= (int)local_2a4)) ||
               ((int)local_2d4 <= (int)local_294)))))) {
            puVar17 = &DAT_00583dfc;
          }
          else {
            puVar17 = (undefined1 *)
                      (((local_2b0 * (int)local_294 + (int)local_2a4) * local_2cc + (int)local_29c)
                       * 3 + *(int *)((int)local_2d0 + 0x30));
          }
          iVar15 = 0;
          do {
            if (((char *)((int)&local_2dc + iVar15))[(int)puVar17 - (int)&local_2dc] !=
                *(char *)((int)&local_2dc + iVar15)) {
              local_28d = 0;
              bVar18 = false;
              break;
            }
            iVar15 = iVar15 + 1;
          } while (iVar15 < 3);
          local_294 = (float)((int)local_294 + 1);
        } while ((int)local_294 <= local_18);
        if (!bVar18) goto LAB_00531e33;
        local_2a4 = (float)((int)local_2a4 + 1);
        bVar3 = bVar18;
      } while ((int)local_2a4 <= local_1c + 1);
    }
    if (!bVar18) goto LAB_00531e33;
    local_29c = (float)((int)local_29c + 1);
    local_2a4 = local_2a0;
  } while ((int)local_29c <= local_20);
  local_138 = local_14;
  local_130 = local_c;
  fStack_134 = (float)(int)local_28 + 1.05 + local_2bc * 0.5;
  local_6c = local_c - local_c;
  fStack_70 = fStack_134 - fStack_10;
  local_74 = local_14 - local_14;
  fVar21 = fStack_70 * fStack_70 + local_74 * local_74 + local_6c * local_6c;
  if ((fVar20 < 0.0) || (fVar21 < fVar20)) {
    local_38 = CONCAT44(fStack_134,local_14);
    local_298 = local_c;
    local_30 = local_c;
    fVar20 = fVar21;
  }
LAB_00531e33:
  local_298 = local_30;
  cVar5 = '\x01';
  local_28d = '\x01';
  local_2a0 = (float)((int)local_28 - 1U);
  fVar21 = (float)((int)local_28 - 1U);
  do {
    local_2a4 = fVar21;
    if ((int)fVar21 <= local_1c + -1) {
      local_2b4 = local_2b4 & 0xff000000;
      do {
        local_294 = local_24;
        do {
          if ((((int)local_2ac < 0) || ((int)fVar21 < 0)) ||
             (((int)local_294 < 0 ||
              ((((int)local_2cc <= (int)local_2ac || ((int)local_2b0 <= (int)fVar21)) ||
               ((int)local_2d4 <= (int)local_294)))))) {
            puVar17 = &DAT_00583dfc;
          }
          else {
            puVar17 = (undefined1 *)
                      (((local_2b0 * (int)local_294 + (int)fVar21) * local_2cc + (int)local_2ac) * 3
                      + *(int *)((int)local_2d0 + 0x30));
          }
          iVar15 = 0;
          do {
            if (((char *)((int)&local_2b4 + iVar15))[(int)puVar17 - (int)&local_2b4] !=
                *(char *)((int)&local_2b4 + iVar15)) {
              local_28d = '\0';
              break;
            }
            iVar15 = iVar15 + 1;
          } while (iVar15 < 3);
          local_294 = (float)((int)local_294 + 1);
        } while ((int)local_294 <= local_18);
        local_2a4 = fVar21;
        if (local_28d == '\0') goto LAB_00532027;
        fVar21 = (float)((int)fVar21 + 1);
        local_2a4 = fVar21;
        cVar5 = local_28d;
      } while ((int)fVar21 <= local_1c + -1);
    }
    if (cVar5 == '\0') goto LAB_00532027;
    local_2ac = (float)((int)local_2ac + 1);
    fVar21 = local_2a0;
  } while ((int)local_2ac <= local_20);
  local_12c = local_14;
  local_124 = local_c;
  fStack_128 = ((float)local_1c - 0.05) - local_2bc * 0.5;
  fStack_88 = fStack_128 - fStack_10;
  local_8c = local_14 - local_14;
  local_84 = local_c - local_c;
  fVar21 = fStack_88 * fStack_88 + local_8c * local_8c + local_84 * local_84;
  if ((fVar20 < 0.0) || (fVar21 < fVar20)) {
    local_38 = CONCAT44(fStack_128,local_14);
    local_30 = local_c;
    fVar20 = fVar21;
  }
LAB_00532027:
  fVar21 = local_30;
  uVar25 = local_38;
  piVar13 = piVar2;
  if (0.0 <= fVar20) {
    local_2c0 = local_2c0 * 0.017453292;
    dVar19 = (double)local_2c0;
    libm_sse2_cos_precise();
    local_2bc = (float)dVar19;
    dVar19 = (double)local_2c0;
    libm_sse2_sin_precise();
    fVar23 = (float)dVar19;
    fVar20 = fVar23 * 0.0;
    iVar14 = 0;
    local_2a0 = fVar20 + local_2bc;
    local_28c = local_2a0;
    fVar22 = local_2bc * 0.0;
    local_2bc = local_2bc - fVar20;
    local_294 = fVar23 + fVar22;
    local_2c0 = fVar22 - fVar20;
    local_80 = (float)uVar25;
    fStack_7c = (float)((ulonglong)uVar25 >> 0x20);
    fStack_7c = fStack_7c - fStack_10;
    local_80 = local_80 - local_14;
    local_278 = local_2bc;
    local_78 = fVar21 - local_c;
    local_274 = local_2c0;
    local_288 = local_294;
    local_27c = fVar22 - fVar23;
    local_284 = fVar22 + fVar20;
    local_1a4[3] = fStack_7c * (fVar22 - fVar23) + local_80 * local_2a0 + local_78 * 0.0;
    local_194 = fStack_7c * local_2bc + local_80 * local_294 + local_78 * 0.0;
    local_190 = fStack_7c * local_2c0 + local_80 * (fVar22 + fVar20) + local_78;
    do {
      uVar24 = FUN_0054a946();
      local_1d4[iVar14 * 2 + 6] = (uint)uVar24;
      local_1d4[iVar14 * 2 + 7] = (uint)(uVar24 >> 0x20);
      iVar14 = iVar14 + 1;
    } while (iVar14 < 3);
    *(uint *)(local_2b8 + 0x10) = local_2d8 + local_1d4[6];
    *(uint *)(local_2b8 + 0x14) = local_2c8 + local_1d4[7] + (uint)CARRY4(local_2d8,local_1d4[6]);
    puVar1 = (uint *)(local_2b8 + 0x18);
    uVar6 = *puVar1;
    *puVar1 = *puVar1 + local_1d4[8];
    *(int *)(local_2b8 + 0x1c) =
         *(int *)(local_2b8 + 0x1c) + local_1d4[9] + (uint)CARRY4(uVar6,local_1d4[8]);
    puVar1 = (uint *)(local_2b8 + 0x20);
    uVar6 = *puVar1;
    *puVar1 = *puVar1 + local_1d4[10];
    *(int *)(local_2b8 + 0x24) =
         *(int *)(local_2b8 + 0x24) + local_1d4[0xb] + (uint)CARRY4(uVar6,local_1d4[10]);
    pvVar12 = local_2c4;
    iVar14 = local_2b8;
  }
LAB_00531823:
  if (*(char *)((int)piVar13 + 0xd) == '\0') {
    piVar2 = (int *)piVar13[2];
    if (*(char *)((int)piVar2 + 0xd) == '\0') {
      cVar5 = *(char *)(*piVar2 + 0xd);
      piVar13 = piVar2;
      piVar2 = (int *)*piVar2;
      while (local_2a8 = piVar13, cVar5 == '\0') {
        cVar5 = *(char *)(*piVar2 + 0xd);
        piVar13 = piVar2;
        piVar2 = (int *)*piVar2;
      }
    }
    else {
      cVar5 = *(char *)(piVar13[1] + 0xd);
      piVar4 = (int *)piVar13[1];
      piVar2 = piVar13;
      while ((piVar13 = piVar4, local_2a8 = piVar13, cVar5 == '\0' && (piVar2 == (int *)piVar13[2]))
            ) {
        cVar5 = *(char *)(piVar13[1] + 0xd);
        piVar4 = (int *)piVar13[1];
        piVar2 = piVar13;
      }
    }
  }
  if (piVar13 == *(int **)((int)pvVar12 + 0xc)) goto LAB_00532273;
  goto LAB_00530de0;
}


/* FUN_00536290 @ 00536290  kind=gamemisc  attributed-by=none  size=125 */

/* WARNING (jumptable): Unable to track spacebase fully for stack */

void FUN_00536290(void)

{
  undefined8 uVar1;
  ushort uVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  int *piVar9;
  char *pcVar10;
  Creature *pCVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  int iVar17;
  long lVar18;
  undefined4 *puVar19;
  undefined3 extraout_var;
  SequentialBehavior *pSVar20;
  CombatBehavior *pCVar21;
  CompanionBehavior *pCVar22;
  RandomWalkBehavior *pRVar23;
  int iVar24;
  uint *puVar25;
  void *pvVar26;
  uint uVar27;
  float *pfVar28;
  float *pfVar29;
  pair<unsigned___int64,unsigned___int64> *ppVar30;
  longlong *plVar31;
  undefined4 *puVar32;
  undefined8 *puVar33;
  void *pvVar34;
  int *piVar35;
  undefined *puVar36;
  undefined3 extraout_var_00;
  CRefTime *pCVar37;
  long lVar38;
  ulonglong *puVar39;
  int iVar40;
  float *pfVar41;
  float *pfVar42;
  undefined1 *puVar43;
  undefined1 *puVar44;
  ulonglong *puVar45;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  uint *puVar46;
  byte *pbVar47;
  uint uVar48;
  uint extraout_ECX;
  Creature_vftable *pCVar49;
  uint unaff_EBP;
  void *unaff_ESI;
  void *pvVar50;
  code *pcVar51;
  SequentialBehavior_data *this;
  uint uVar52;
  int *piVar53;
  float10 fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined4 uStack00000008;
  ulonglong uVar59;
  ulonglong in_stack_ffffffe8;
  ulonglong uVar60;
  uint uVar61;
  undefined4 uVar62;
  float *in_stack_fffffff0;
  undefined4 uVar63;
  ulonglong *puVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  int iVar67;
  
  do {
    iVar8 = FUN_00402bc0((int *)(unaff_EBP - 0x2b68));
    iVar8 = *(int *)(iVar8 + 8);
    *(int *)(unaff_EBP - 0x2b14) = iVar8;
    if (iVar8 == 0) goto LAB_00545be1;
    piVar53 = (int *)(iVar8 + 0x130c);
    FUN_00428070(piVar53,(undefined4 *)(unaff_EBP - 0x2c58));
    piVar9 = (int *)FUN_00530550(piVar53,(undefined4 *)(unaff_EBP - 0x2de8));
    bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c58),piVar9);
    if (bVar3) {
      do {
        pcVar10 = (char *)FUN_0052eb90((int *)(unaff_EBP - 0x2c58));
        *(char **)(unaff_EBP - 0x2b1c) = pcVar10;
        switch(pcVar10[0x128]) {
        case '\x01':
          if (*(char *)((int)unaff_ESI + 0xb4) == '\0') {
            if ((*pcVar10 == '\x01') && (pcVar10[1] == '\a')) {
              pvVar26 = *(void **)(unaff_EBP - 0x2b6c);
              *(undefined8 *)(unaff_EBP - 0x2c28) = 0;
              FUN_00428070(pvVar26,(undefined4 *)(unaff_EBP - 0x2c64));
              piVar53 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),
                                            (undefined4 *)(unaff_EBP - 0x2d78));
              bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c64),piVar53);
              uVar27 = *(uint *)(unaff_EBP - 0x2c24);
              uVar52 = *(uint *)(unaff_EBP - 0x2c28);
              if (bVar3) {
                do {
                  puVar25 = (uint *)FUN_00402bc0((int *)(unaff_EBP - 0x2c64));
                  if (puVar25[2] != 0) {
                    uVar48 = *puVar25;
                    uVar61 = puVar25[1];
                    if (((int)uVar61 <= (int)uVar27) &&
                       (((int)uVar61 < (int)uVar27 || (uVar48 < uVar52)))) {
                      *(uint *)(unaff_EBP - 0x2c28) = uVar48;
                      *(uint *)(unaff_EBP - 0x2c24) = uVar61;
                      uVar52 = uVar48;
                      uVar27 = uVar61;
                    }
                  }
                  FUN_00407a30((void *)(unaff_EBP - 0x2c64),(int *)(unaff_EBP - 0x3078));
                  piVar53 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),
                                                (undefined4 *)(unaff_EBP - 0x2d78));
                  bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c64),piVar53);
                } while (bVar3);
              }
              *(uint *)(unaff_EBP - 0x2c28) = uVar52 - 1;
              *(uint *)(unaff_EBP - 0x2c24) = (uVar27 - 1) + (uint)(uVar52 != 0);
              pCVar11 = operator_new(0x1e60);
              *(Creature **)(unaff_EBP - 0x2b30) = pCVar11;
              *(undefined1 *)(unaff_EBP - 4) = 0x10;
              if (pCVar11 == (Creature *)0x0) {
                pCVar11 = (Creature *)0x0;
              }
              else {
                pCVar11 = cube::Creature::Creature(pCVar11,(undefined4 *)(unaff_EBP - 0x2c28));
              }
              pvVar26 = *(void **)(unaff_EBP - 0x2b6c);
              *(undefined1 *)(unaff_EBP - 4) = 5;
              puVar25 = FUN_00402b10(pvVar26,(uint *)(unaff_EBP - 0x2c28));
              *puVar25 = (uint)pCVar11;
              FUN_00402a40(&(pCVar11->Creature_data).offset_0xc,
                           (undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 0x10));
              pCVar11[0x14].vftablePtr =
                   (Creature_vftable *)(int)*(short *)(*(int *)(unaff_EBP - 0x2b1c) + 0x10);
              pCVar11[5].vftablePtr = (Creature_vftable *)0x90;
              *(undefined1 *)&pCVar11[4].Creature_data.offset_0xc = 6;
              in_stack_fffffff0 = (float *)0x536fca;
              FUN_0040a840((uint *)(pCVar11 + 5),(int)(pCVar11 + 6),(undefined4 *)0x0);
            }
            else {
              fVar54 = FUN_00413be0(pcVar10);
              *(float *)(unaff_EBP - 0x2b40) = (float)fVar54;
              *(float *)(*(int *)(unaff_EBP - 0x2b14) + 0x16c) =
                   *(float *)(unaff_EBP - 0x2b40) + *(float *)(*(int *)(unaff_EBP - 0x2b14) + 0x16c)
              ;
              FUN_004c8530(unaff_EBP - 0x878);
              plVar31 = (longlong *)(*(int *)(unaff_EBP - 0x2b14) + 0x10);
              FUN_00402550((void *)(unaff_EBP - 0x878),plVar31);
              pvVar26 = *(void **)(unaff_EBP - 0x2b28);
              *(undefined4 *)(unaff_EBP - 0x868) = 0x3f800000;
              *(undefined4 *)(unaff_EBP - 0x86c) = 0x2c;
              FUN_00428590((void *)((int)pvVar26 + 8),(undefined4 *)(unaff_EBP - 0x878));
              FUN_00422a90(unaff_EBP - 0xf48);
              FUN_00402a40((void *)(unaff_EBP - 0xf28),(undefined4 *)plVar31);
              *(undefined4 *)(unaff_EBP - 0xf40) = *(undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 8)
              ;
              iVar8 = *(int *)(unaff_EBP - 0x2b14);
              *(undefined8 *)(unaff_EBP - 0xf48) = 0;
              uVar27 = *(uint *)(unaff_EBP - 0x2b40);
              *(undefined4 *)(unaff_EBP - 0xf3c) = *(undefined4 *)(iVar8 + 0xc);
              *(uint *)(unaff_EBP - 0xf38) = uVar27 ^ 0x80000000;
              *(undefined1 *)(unaff_EBP - 0xf34) = 0;
              FUN_00428400(pvVar26,(undefined4 *)(unaff_EBP - 0xf48));
            }
            goto LAB_005377fe;
          }
          break;
        case '\x02':
          if (*(char *)((int)unaff_ESI + 0xb4) == '\0') {
            FUN_00428070((void *)((int)unaff_ESI + 4),(undefined4 *)(unaff_EBP - 0x2c54));
            piVar53 = (int *)FUN_00530550((void *)((int)unaff_ESI + 4),
                                          (undefined4 *)(unaff_EBP - 0x2d70));
            bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c54),piVar53);
            if (bVar3) {
              do {
                iVar8 = FUN_00402bc0((int *)(unaff_EBP - 0x2c54));
                iVar8 = *(int *)(iVar8 + 8);
                if ((iVar8 != 0) &&
                   (iVar17 = FUN_004137c0((void *)(iVar8 + 0x1b0),(int)(pcVar10 + 0x118)),
                   (char)iVar17 != '\0')) {
                  if ((*(char *)(iVar8 + 0x140) == -0x7c) &&
                     ((iVar17 = *(int *)(*(int *)(unaff_EBP - 0x2b18) + 0x80015c), 64799999 < iVar17
                      || (iVar17 < 0x1499701)))) {
                    unaff_ESI = *(void **)(unaff_EBP - 0x2b18);
                    *(int *)((int)unaff_ESI + 0x800160) = *(int *)((int)unaff_ESI + 0x800160) + 1;
                    *(undefined4 *)((int)unaff_ESI + 0x80015c) = 25200000;
                    FUN_004c8530(unaff_EBP - 0x770);
                    iVar8 = *(int *)(unaff_EBP - 0x2b14);
                    *(undefined4 *)(unaff_EBP - 0x764) = 0x1d;
                    FUN_00402550((void *)(unaff_EBP - 0x770),(longlong *)(iVar8 + 0x10));
                    iVar8 = *(int *)(unaff_EBP - 0x2b28);
                    *(undefined4 *)(unaff_EBP - 0x75c) = 0x3f400000;
                    FUN_00428590((void *)(iVar8 + 8),(undefined4 *)(unaff_EBP - 0x770));
                    FUN_004d7ae0();
                    FUN_00524500((int)unaff_ESI);
                    goto LAB_00537804;
                  }
                  if ((*(byte *)(iVar8 + 0x7e) & 0x80) != 0) break;
                }
                FUN_00407a30((void *)(unaff_EBP - 0x2c54),(int *)(unaff_EBP - 0x3050));
                piVar53 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),
                                              (undefined4 *)(unaff_EBP - 0x2d70));
                bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c54),piVar53);
              } while (bVar3);
              goto LAB_005377fe;
            }
          }
          break;
        case '\x03':
          iVar8 = *(int *)(unaff_EBP - 0x2b14);
          if (*(char *)(iVar8 + 0x68) == 'O') {
            *(undefined1 *)(iVar8 + 0x68) = 0;
            *(undefined4 *)(iVar8 + 0x1190) = 0;
          }
          pcVar10 = pcVar10 + 0x118;
          *(char **)(unaff_EBP - 0x2b20) = pcVar10;
          puVar25 = (uint *)FUN_004013d0(pcVar10,1);
          uVar27 = *puVar25;
          puVar25 = (uint *)FUN_004013d0(pcVar10,0);
          iVar8 = FUN_00406290(*(void **)(unaff_EBP - 0x2b18),*puVar25,uVar27);
          if (iVar8 == 0) {
LAB_005377fe:
            unaff_ESI = *(void **)(unaff_EBP - 0x2b18);
            break;
          }
          piVar53 = (int *)FUN_004013d0(pcVar10,2);
          iVar17 = *piVar53;
          if (iVar17 < 0) goto LAB_005377fe;
          piVar53 = (int *)(iVar8 + 0xc);
          *(int **)(unaff_EBP - 0x2b64) = piVar53;
          iVar8 = FUN_0041cb40(piVar53);
          if (iVar8 <= iVar17) goto LAB_005377fe;
          piVar53 = (int *)FUN_0041ba70(piVar53,iVar17);
          *(int **)(unaff_EBP - 0x2b5c) = piVar53;
          iVar8 = *piVar53;
          if (iVar8 == 0x2d) {
            unaff_ESI = *(void **)(unaff_EBP - 0x2b18);
            if (*(int *)(unaff_EBP - 0x2b14) == *(int *)((int)unaff_ESI + 0xb8)) {
              puVar25 = (uint *)(*(int *)(unaff_EBP - 0x2b14) + 0x10);
              FUN_004d9410(*(void **)(unaff_EBP - 0x2b18),(int *)(unaff_EBP - 0x4c0),puVar25);
              puVar16 = (uint *)FUN_004013d0((void *)(unaff_EBP - 0x4c0),1);
              uVar27 = *puVar16;
              puVar16 = (uint *)FUN_004013d0((void *)(unaff_EBP - 0x4c0),0);
              iVar8 = FUN_00406290(*(void **)(unaff_EBP - 0x2b18),*puVar16,uVar27);
              *(int *)(unaff_EBP - 0x2b1c) = iVar8;
              if (((iVar8 != 0) && (iVar17 = piVar53[0x5e], -1 < iVar17)) &&
                 (iVar8 = FUN_0041cb40((int *)(iVar8 + 0xc)), iVar17 < iVar8)) {
                FUN_004c8530(unaff_EBP - 0x638);
                *(undefined4 *)(unaff_EBP - 0x62c) = 0x2f;
                *(undefined4 *)(unaff_EBP - 0x628) = 0x3f800000;
                FUN_00402550((void *)(unaff_EBP - 0x638),(longlong *)puVar25);
                puVar19 = (undefined4 *)(unaff_EBP - 0x638);
                uVar63 = 0x536868;
                FUN_00428590((void *)(*(int *)(unaff_EBP - 0x2b28) + 8),puVar19);
                uVar65 = 0;
                uVar66 = 0x536874;
                FUN_004cde40(&stack0xfffffff8,0);
                in_stack_ffffffe8 = 0x536880;
                FUN_004cde40(&stack0xfffffff0,0);
                FUN_004cde40(&stack0xffffffe8,2);
                puVar15 = FUN_00406380((void *)(unaff_EBP - 0x1f14),(int)in_stack_ffffffe8,
                                       (int)(in_stack_ffffffe8 >> 0x20),uVar66,uVar65,uVar63,puVar19
                                      );
                puVar16 = (uint *)(unaff_EBP - 0x2304);
                in_stack_fffffff0 = (float *)0x5368b9;
                iVar8 = FUN_0041ba70((void *)(*(int *)(unaff_EBP - 0x2b1c) + 0xc),
                                     *(int *)(*(int *)(unaff_EBP - 0x2b5c) + 0x178));
                puVar16 = FUN_00402cb0((void *)(iVar8 + 8),puVar16,puVar15);
                FUN_00402a40(puVar25,puVar16);
              }
              goto LAB_005377fe;
            }
            break;
          }
          if ((((((iVar8 != 0x10) && (iVar8 != 0x12)) && (iVar8 != 0x13)) &&
               ((iVar8 != 0x45 && (iVar8 != 0x44)))) || (piVar53[0x10] != 0 || piVar53[0x11] != 0))
             || (((cVar4 = *(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x68), cVar4 != '\0' &&
                  (cVar4 != 'S')) && (cVar4 != 'T')))) {
            unaff_ESI = *(void **)(unaff_EBP - 0x2b18);
            if (*(char *)((int)unaff_ESI + 0xb4) == '\0') {
              if ((iVar8 == 10) && ((char)piVar53[0xc] == '\x02')) {
                piVar53 = (int *)(*(int *)(unaff_EBP - 0x2b5c) + 0x48);
                iVar8 = 0;
                *(undefined4 *)(unaff_EBP - 0x2b40) = 0;
                iVar17 = FUN_00420020(piVar53);
                if (0 < iVar17) {
                  do {
                    puVar19 = (undefined4 *)(unaff_EBP - 0x2c5c);
                    pvVar26 = (void *)FUN_0041e2e0(piVar53,iVar8);
                    FUN_00530550(pvVar26,puVar19);
                    puVar19 = (undefined4 *)(unaff_EBP - 0x2e38);
                    pvVar26 = (void *)FUN_0041e2e0(piVar53,iVar8);
                    piVar9 = (int *)FUN_004d3de0(pvVar26,puVar19);
                    bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c5c),piVar9);
                    if (bVar3) {
                      do {
                        piVar53 = (int *)FUN_004ce1f0((undefined4 *)(unaff_EBP - 0x2c5c));
                        if (*piVar53 != 0) {
                          iVar8 = *(int *)(unaff_EBP - 0x2b5c);
                          do {
                            uVar66 = 0;
                            iVar17 = rand();
                            fVar56 = 2.0 - ((float)iVar17 * 4.0) / 32767.0;
                            iVar17 = rand();
                            FUN_00401080((void *)(unaff_EBP - 0x1250),
                                         2.0 - ((float)iVar17 * 4.0) / 32767.0,fVar56,uVar66);
                            FUN_00402510(unaff_EBP - 0x1808);
                            pvVar26 = (void *)(unaff_EBP - 0x2be8);
                            fVar57 = 1.0;
                            iVar17 = rand();
                            fVar56 = ((float)iVar17 * 360.0) / 32767.0;
                            in_stack_fffffff0 =
                                 (float *)FUN_00402cb0((void *)(iVar8 + 8),
                                                       (uint *)(unaff_EBP - 0x1f74),
                                                       (uint *)(unaff_EBP - 0x1808));
                            in_stack_ffffffe8 = CONCAT44(piVar53 + 1,0x536d15);
                            FUN_004d2810((undefined1 *)(piVar53 + 1),(uint *)in_stack_fffffff0,
                                         fVar56,fVar57,pvVar26);
                            FUN_00405550(piVar53);
                          } while (*piVar53 != 0);
                          iVar8 = *(int *)(unaff_EBP - 0x2b40);
                        }
                        FUN_00402c10((void *)(unaff_EBP - 0x2c5c),(int *)(unaff_EBP - 0x2b30));
                        puVar19 = (undefined4 *)(unaff_EBP - 0x2e38);
                        piVar53 = (int *)(*(int *)(unaff_EBP - 0x2b5c) + 0x48);
                        pvVar26 = (void *)FUN_0041e2e0(piVar53,iVar8);
                        piVar9 = (int *)FUN_004d3de0(pvVar26,puVar19);
                        bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c5c),piVar9);
                      } while (bVar3);
                    }
                    iVar8 = iVar8 + 1;
                    *(int *)(unaff_EBP - 0x2b40) = iVar8;
                    iVar17 = FUN_00420020(piVar53);
                  } while (iVar8 < iVar17);
                }
                unaff_ESI = *(void **)(unaff_EBP - 0x2b18);
                piVar53 = *(int **)(unaff_EBP - 0x2b5c);
              }
              iVar8 = *piVar53;
              if ((((iVar8 == 9) || (iVar8 == 1)) || (iVar8 == 2)) ||
                 ((iVar8 == 3 || (iVar8 == 10)))) {
                in_stack_fffffff0 = (float *)0x536dc8;
                FUN_004d8c90(piVar53,*(int *)(unaff_EBP - 0x2b28),(char)piVar53[0xc] == '\0');
                puVar19 = FUN_00422d70((void *)(unaff_EBP - 0x295c),
                                       *(undefined4 **)(unaff_EBP - 0x2b20),piVar53);
                FUN_004284f0((void *)(*(int *)(unaff_EBP - 0x2b28) + 0x30),puVar19);
              }
              if (*piVar53 == 9) {
                iVar8 = piVar53[0x5e];
                if ((iVar8 < 0) ||
                   (iVar17 = FUN_0041cb40(*(int **)(unaff_EBP - 0x2b64)), iVar17 <= iVar8))
                goto LAB_005377fe;
                uVar59 = (ulonglong)
                         CONCAT14((char)piVar53[0xc] != '\0',*(undefined4 *)(unaff_EBP - 0x2b28));
                piVar9 = (int *)FUN_0041ba70(*(void **)(unaff_EBP - 0x2b64),iVar8);
                unaff_ESI = *(void **)(unaff_EBP - 0x2b18);
                in_stack_fffffff0 = (float *)0x536e3e;
                FUN_004d8c90(piVar9,(int)uVar59,(char)(uVar59 >> 0x20));
                puVar19 = FUN_00422d70((void *)(unaff_EBP - 0x2854),
                                       *(undefined4 **)(unaff_EBP - 0x2b20),piVar53);
                FUN_004284f0((void *)(*(int *)(unaff_EBP - 0x2b28) + 0x30),puVar19);
              }
            }
            break;
          }
          unaff_ESI = *(void **)(unaff_EBP - 0x2b18);
          if (*(char *)((int)unaff_ESI + 0xb4) == '\0') {
            piVar53[0x10] = *(int *)(*(int *)(unaff_EBP - 0x2b14) + 8);
            piVar53[0x11] = *(int *)(*(int *)(unaff_EBP - 0x2b14) + 0xc);
            switch(iVar8) {
            case 0x10:
            case 0x12:
              pfVar28 = (float *)FUN_004013d0((void *)(*(int *)(unaff_EBP - 0x2b14) + 0x80),2);
              *(float *)(unaff_EBP - 0x2b1c) = *pfVar28 * 0.5;
              pfVar28 = (float *)FUN_004013d0(piVar53 + 9,2);
              FUN_00401080((void *)(unaff_EBP - 0x19a0),0,0,
                           *(float *)(unaff_EBP - 0x2b1c) + *pfVar28);
              FUN_00402510(unaff_EBP - 0x17c0);
              puVar25 = FUN_00402cb0(piVar53 + 2,(uint *)(unaff_EBP - 0x1f44),
                                     (uint *)(unaff_EBP - 0x17c0));
              FUN_00402a40((void *)(*(int *)(unaff_EBP - 0x2b14) + 0x10),puVar25);
              puVar19 = FUN_00401080((void *)(unaff_EBP - 0x1220),0,0,0);
              FUN_00401060((void *)(*(int *)(unaff_EBP - 0x2b14) + 0x34),puVar19);
              iVar8 = piVar53[8];
              pfVar28 = (float *)FUN_004013d0((void *)(*(int *)(unaff_EBP - 0x2b14) + 0x28),2);
              *pfVar28 = (float)((iVar8 + 2) * 0x5a);
              *(undefined1 *)(*(int *)(unaff_EBP - 0x2b14) + 0x68) = 0x53;
              break;
            default:
              goto switchD_0053694e_caseD_11;
            case 0x13:
            case 0x44:
            case 0x45:
              pfVar28 = (float *)FUN_004013d0((void *)(*(int *)(unaff_EBP - 0x2b14) + 0x80),2);
              *(float *)(unaff_EBP - 0x2b1c) = *pfVar28 * 0.5;
              pfVar28 = (float *)FUN_004013d0(piVar53 + 9,2);
              FUN_00401080((void *)(unaff_EBP - 0x1610),0,0,
                           *(float *)(unaff_EBP - 0x2b1c) + *pfVar28);
              FUN_00402510(unaff_EBP - 0x17e4);
              puVar25 = FUN_00402cb0(piVar53 + 2,(uint *)(unaff_EBP - 0x2664),
                                     (uint *)(unaff_EBP - 0x17e4));
              FUN_00402a40((void *)(*(int *)(unaff_EBP - 0x2b14) + 0x10),puVar25);
              puVar19 = FUN_00401080((void *)(unaff_EBP - 0x1238),0,0,0);
              FUN_00401060((void *)(*(int *)(unaff_EBP - 0x2b14) + 0x34),puVar19);
              iVar8 = piVar53[8];
              pfVar28 = (float *)FUN_004013d0((void *)(*(int *)(unaff_EBP - 0x2b14) + 0x28),2);
              *pfVar28 = (float)(iVar8 * 0x5a);
              *(undefined1 *)(*(int *)(unaff_EBP - 0x2b14) + 0x68) = 0x54;
            }
            unaff_ESI = *(void **)(unaff_EBP - 0x2b18);
switchD_0053694e_caseD_11:
            puVar19 = FUN_00422d70((void *)(unaff_EBP - 0x28ac),*(undefined4 **)(unaff_EBP - 0x2b20)
                                   ,piVar53);
            FUN_004284f0((void *)(*(int *)(unaff_EBP - 0x2b28) + 0x30),puVar19);
          }
          in_stack_fffffff0 = (float *)0x536b89;
          puVar19 = FUN_00401080((void *)(unaff_EBP - 0x1838),0,0,0);
          FUN_00401060((void *)(*(int *)(unaff_EBP - 0x2b14) + 0x40),puVar19);
          break;
        case '\x05':
          if (*(char *)((int)unaff_ESI + 0xb4) == '\0') {
            pcVar10 = pcVar10 + 0x118;
            puVar25 = (uint *)FUN_004013d0(pcVar10,1);
            uVar27 = *puVar25;
            puVar25 = (uint *)FUN_004013d0(pcVar10,0);
            iVar8 = FUN_00406290(*(void **)(unaff_EBP - 0x2b18),*puVar25,uVar27);
            *(int *)(unaff_EBP - 0x2b48) = iVar8;
            if (iVar8 != 0) {
              piVar53 = (int *)FUN_004013d0(pcVar10,2);
              iVar17 = *piVar53;
              *(int **)(unaff_EBP - 0x2b90) = piVar53;
              if (-1 < iVar17) {
                piVar53 = (int *)(iVar8 + 0x30);
                iVar8 = FUN_00420000(piVar53);
                if (iVar17 < iVar8) {
                  pcVar10 = (char *)FUN_004ce1d0(piVar53,iVar17);
                  bVar3 = FUN_00409660(*(void **)(unaff_EBP - 0x2b14),pcVar10);
                  if (bVar3) {
                    puVar25 = FUN_00402c50(pcVar10 + 0x118,(uint *)(unaff_EBP - 0x24e4),
                                           (uint *)(*(int *)(unaff_EBP - 0x2b14) + 0x10));
                    pfVar28 = FUN_00402550((void *)(unaff_EBP - 0x1208),(longlong *)puVar25);
                    fVar54 = FUN_004021b0(pfVar28);
                    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
                    if (*(float *)(unaff_EBP - 0x2b1c) <= 16.0) {
                      FUN_004d4f60((void *)(unaff_EBP - 0x2be8),(undefined4 *)(unaff_EBP - 0x338c),
                                   (uint *)(unaff_EBP - 0x2b48));
                      FUN_004c83d0(unaff_EBP - 0x27fc);
                      iVar8 = *(int *)(unaff_EBP - 0x2b14);
                      *(undefined4 *)(unaff_EBP - 0x27fc) = *(undefined4 *)(iVar8 + 8);
                      *(undefined4 *)(unaff_EBP - 0x27f8) = *(undefined4 *)(iVar8 + 0xc);
                      FUN_00402a70((void *)(unaff_EBP - 0x27f4),pcVar10);
                      FUN_004d65d0((void *)(*(int *)(unaff_EBP - 0x2b28) + 0x40),
                                   (undefined4 *)(unaff_EBP - 0x27fc));
                      if ((*(int *)(unaff_EBP - 0x2b14) ==
                           *(int *)(*(int *)(unaff_EBP - 0x2b18) + 0xb8)) && (*pcVar10 != '\x19')) {
                        FUN_00427000((void *)(*(int *)(unaff_EBP - 0x2b14) + 0x11dc),pcVar10,-1);
                      }
                      FUN_004c8530(unaff_EBP - 0x6b0);
                      *(undefined4 *)(unaff_EBP - 0x6a4) = 0x2d;
                      iVar17 = rand();
                      iVar8 = *(int *)(unaff_EBP - 0x2b14);
                      *(float *)(unaff_EBP - 0x6a0) = ((float)iVar17 * 0.1) / 32767.0 + 1.0;
                      FUN_00402550((void *)(unaff_EBP - 0x6b0),(longlong *)(iVar8 + 0x10));
                      FUN_00428590((void *)(*(int *)(unaff_EBP - 0x2b28) + 8),
                                   (undefined4 *)(unaff_EBP - 0x6b0));
                      iVar8 = **(int **)(unaff_EBP - 0x2b90);
                      piVar9 = (int *)(unaff_EBP - 0x3058);
                      in_stack_fffffff0 = (float *)0x5366ee;
                      pvVar26 = (void *)FUN_00530550(piVar53,(undefined4 *)(unaff_EBP - 0x2fa4));
                      puVar19 = (undefined4 *)FUN_004ce250(pvVar26,piVar9,iVar8);
                      FUN_004d4430(piVar53,(undefined4 *)(unaff_EBP - 0x2fc4),(void *)*puVar19);
                    }
                  }
                }
              }
            }
            goto LAB_005377fe;
          }
          break;
        case '\x06':
          if (*(char *)((int)unaff_ESI + 0xb4) == '\0') {
            pfVar28 = (float *)(*(int *)(unaff_EBP - 0x2b14) + 0x10);
            in_stack_ffffffe8 = CONCAT44(pcVar10,0x5377c8);
            in_stack_fffffff0 = pfVar28;
            FUN_004d2810(pcVar10,(uint *)pfVar28,0.0,1.0,(void *)(unaff_EBP - 0x2be8));
            FUN_004c8530(unaff_EBP - 0x9e0);
            *(undefined4 *)(unaff_EBP - 0x9d4) = 0x39;
            FUN_00402550((void *)(unaff_EBP - 0x9e0),(longlong *)pfVar28);
            FUN_00428590((void *)(*(int *)(unaff_EBP - 0x2b28) + 8),
                         (undefined4 *)(unaff_EBP - 0x9e0));
            goto LAB_005377fe;
          }
          break;
        case '\a':
          unaff_ESI = *(void **)(unaff_EBP - 0x2b18);
          if (*(char *)((int)unaff_ESI + 0xb4) == '\0') {
            iVar8 = FUN_004d1860(unaff_ESI,
                                 (undefined4 *)(int)*(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x18d))
            ;
            *(int *)(unaff_EBP - 0x2b50) = iVar8;
            if (iVar8 != 0) {
              FUN_00401080((void *)(unaff_EBP - 0x1628),0x3f000000,0x3f000000,0x3f000000);
              FUN_00402510(unaff_EBP - 0x182c);
              FUN_00402510(unaff_EBP - 0x1850);
              puVar25 = (uint *)(unaff_EBP - 0x182c);
              puVar16 = (uint *)(unaff_EBP - 0x2334);
              puVar15 = FUN_00402cb0((void *)(*(int *)(unaff_EBP - 0x2b14) + 0x10),
                                     (uint *)(unaff_EBP - 0x1fa4),(uint *)(unaff_EBP - 0x1850));
              puVar25 = FUN_00402cb0(puVar15,puVar16,puVar25);
              FUN_004c64f0((void *)(unaff_EBP - 100),puVar25);
              puVar19 = (undefined4 *)
                        FUN_004d8e10((undefined4 *)(unaff_EBP - 0x1268),
                                     (undefined4 *)(unaff_EBP - 100));
              FUN_00401060((void *)(unaff_EBP - 100),puVar19);
              FUN_00401cd0((undefined4 *)(unaff_EBP - 0x1b6c));
              FUN_00402030((void *)(unaff_EBP - 0x1b6c),
                           (float)(int)*(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x18c) * 90.0);
              fVar57 = 0.0;
              iVar17 = FUN_00402160(iVar8);
              fVar56 = (float)iVar17 * -0.5;
              iVar17 = FUN_00402150(iVar8);
              FUN_004023b0((void *)(unaff_EBP - 0x1b6c),(float)iVar17 * -0.5,fVar56,fVar57);
              FUN_004d3e00((int)unaff_ESI);
              iVar17 = 0;
              *(undefined4 *)(unaff_EBP - 0x2b3c) = 0;
              iVar40 = FUN_00402150(iVar8);
              if (0 < iVar40) {
                do {
                  *(undefined4 *)(unaff_EBP - 0x2b5c) = 0;
                  iVar40 = FUN_00402160(iVar8);
                  if (0 < iVar40) {
                    do {
                      iVar17 = FUN_00402170(iVar8);
                      iVar8 = *(int *)(unaff_EBP - 0x2b50);
                      *(undefined4 *)(unaff_EBP - 0x2b20) = 0;
                      iVar40 = 0;
                      iVar8 = FUN_00402170(iVar8);
                      if (0 < iVar8) {
                        do {
                          puVar44 = &DAT_00583dfc;
                          puVar43 = FUN_00430730(*(void **)(unaff_EBP - 0x2b50),
                                                 *(int *)(unaff_EBP - 0x2b3c),
                                                 *(int *)(unaff_EBP - 0x2b5c),iVar40);
                          cVar4 = FUN_004079c0(puVar43,(int)puVar44);
                          if (cVar4 != '\0') {
                            if (iVar40 < iVar17) {
                              iVar17 = iVar40;
                            }
                            iVar8 = *(int *)(unaff_EBP - 0x2b20);
                            if (*(int *)(unaff_EBP - 0x2b20) < iVar40) {
                              iVar8 = iVar40;
                            }
                            *(int *)(unaff_EBP - 0x2b20) = iVar8;
                          }
                          iVar40 = iVar40 + 1;
                          iVar8 = FUN_00402170(*(int *)(unaff_EBP - 0x2b50));
                        } while (iVar40 < iVar8);
                      }
                      iVar40 = 0;
                      iVar8 = FUN_00402170(*(int *)(unaff_EBP - 0x2b50));
                      if (0 < iVar8) {
                        do {
                          puVar43 = FUN_00430730(*(void **)(unaff_EBP - 0x2b50),
                                                 *(int *)(unaff_EBP - 0x2b3c),
                                                 *(int *)(unaff_EBP - 0x2b5c),iVar40);
                          FUN_00401020((void *)(unaff_EBP - 0x2c0c),puVar43);
                          pfVar29 = (float *)FUN_00401080((void *)(unaff_EBP - 0x1ac0),0x3f000000,
                                                          0x3f000000,0x3f000000);
                          pfVar28 = (float *)(unaff_EBP - 0x1280);
                          puVar19 = FUN_00401080((void *)(unaff_EBP - 0x1640),
                                                 (float)*(int *)(unaff_EBP - 0x2b3c),
                                                 (float)*(int *)(unaff_EBP - 0x2b5c),(float)iVar40);
                          pfVar28 = (float *)FUN_004014f0(puVar19,pfVar28,pfVar29);
                          FUN_004021f0((void *)(unaff_EBP - 0x1b6c),(float *)(unaff_EBP - 0x1298),
                                       pfVar28);
                          FUN_00402510(unaff_EBP - 0x1874);
                          puVar25 = (uint *)(unaff_EBP - 0x1874);
                          puVar16 = (uint *)(unaff_EBP - 0x2514);
                          piVar53 = FUN_004d99d0((void *)(unaff_EBP - 0x1fd4),
                                                 (uint *)(unaff_EBP - 100));
                          puVar25 = FUN_00402cb0(piVar53,puVar16,puVar25);
                          FUN_004c64f0((void *)(unaff_EBP - 200),puVar25);
                          cVar4 = FUN_0042edb0((void *)(unaff_EBP - 0x2c0c),0x583dfc);
                          if (cVar4 == '\0') {
                            iVar8 = FUN_004013d0((void *)(unaff_EBP - 200),2);
                            *(int *)(unaff_EBP - 0x2b64) = iVar8;
                            iVar8 = FUN_004013d0((void *)(unaff_EBP - 200),1);
                            *(int *)(unaff_EBP - 0x2b54) = iVar8;
                            puVar16 = (uint *)FUN_004013d0((void *)(unaff_EBP - 200),0);
                            iVar8 = **(int **)(unaff_EBP - 0x2b64);
                            puVar25 = *(uint **)(unaff_EBP - 0x2b54);
                            *(uint **)(unaff_EBP - 0x2b40) = puVar16;
                            puVar36 = FUN_00405fd0(*(void **)(unaff_EBP - 0x2b18),*puVar16,*puVar25,
                                                   iVar8,0);
                            if ((puVar36[3] & 0x40) == 0) {
                              iVar8 = 0;
                              puVar43 = FUN_00401370((void *)(unaff_EBP - 0x2fa8),
                                                     (undefined1 *)(unaff_EBP - 0x2c0c),0x46);
                              FUN_0041ff00(*(void **)(unaff_EBP - 0x2b18),
                                           **(float **)(unaff_EBP - 0x2b40),
                                           **(uint **)(unaff_EBP - 0x2b54),
                                           **(int **)(unaff_EBP - 0x2b64),puVar43,iVar8);
                              FUN_0041d7e0(unaff_EBP - 0x440);
                              puVar43 = FUN_00401370((void *)(unaff_EBP - 0x306c),
                                                     (undefined1 *)(unaff_EBP - 0x2c0c),0x46);
                              FUN_00405610((void *)(unaff_EBP - 0x434),puVar43);
                              *(undefined4 *)(unaff_EBP - 0x430) =
                                   *(undefined4 *)(*(int *)(unaff_EBP - 0x2b18) + 0x800160);
                              puVar19 = FUN_00402990((void *)(unaff_EBP - 0x185c),
                                                     **(undefined4 **)(unaff_EBP - 0x2b40),
                                                     **(undefined4 **)(unaff_EBP - 0x2b54),
                                                     **(undefined4 **)(unaff_EBP - 0x2b64));
                              FUN_00401060((void *)(unaff_EBP - 0x440),puVar19);
                              FUN_00528400((void *)(*(int *)(unaff_EBP - 0x2b28) + 0x18),
                                           (undefined4 *)(unaff_EBP - 0x440));
                            }
                          }
                          else if ((iVar17 < iVar40) && (iVar40 < *(int *)(unaff_EBP - 0x2b20))) {
                            iVar12 = 0;
                            puVar43 = FUN_00401370((void *)(unaff_EBP - 0x3084),
                                                   (undefined1 *)(unaff_EBP - 0x2c0c),0x40);
                            piVar53 = (int *)FUN_004013d0((void *)(unaff_EBP - 200),2);
                            iVar8 = *piVar53;
                            puVar25 = (uint *)FUN_004013d0((void *)(unaff_EBP - 200),1);
                            uVar27 = *puVar25;
                            pfVar28 = (float *)FUN_004013d0((void *)(unaff_EBP - 200),0);
                            FUN_0041ff00(*(void **)(unaff_EBP - 0x2b18),*pfVar28,uVar27,iVar8,
                                         puVar43,iVar12);
                          }
                          iVar40 = iVar40 + 1;
                          iVar8 = FUN_00402170(*(int *)(unaff_EBP - 0x2b50));
                        } while (iVar40 < iVar8);
                      }
                      iVar8 = *(int *)(unaff_EBP - 0x2b50);
                      iVar40 = *(int *)(unaff_EBP - 0x2b5c) + 1;
                      *(int *)(unaff_EBP - 0x2b5c) = iVar40;
                      iVar17 = FUN_00402160(iVar8);
                    } while (iVar40 < iVar17);
                    iVar17 = *(int *)(unaff_EBP - 0x2b3c);
                  }
                  iVar17 = iVar17 + 1;
                  *(int *)(unaff_EBP - 0x2b3c) = iVar17;
                  iVar40 = FUN_00402150(iVar8);
                } while (iVar17 < iVar40);
              }
              pvVar26 = *(void **)(unaff_EBP - 0x2b18);
              if (*(int *)((int)pvVar26 + 0xb8) == 0) {
                piVar53 = (int *)FUN_004013d0((void *)(unaff_EBP - 100),1);
                *(float *)(unaff_EBP - 0x2b40) = (float)*piVar53;
                piVar53 = (int *)FUN_004013d0((void *)(unaff_EBP - 100),0);
                iVar67 = 0;
                iVar24 = 8;
                *(float *)(unaff_EBP - 0x2b20) = (float)*piVar53;
                iVar17 = FUN_00402170(iVar8);
                iVar17 = (int)((float)iVar17 * 0.5 + *(float *)(unaff_EBP - 0x2b40));
                iVar40 = FUN_00402160(iVar8);
                iVar40 = (int)((float)iVar40 * 0.5 + *(float *)(unaff_EBP - 0x2b20));
                iVar12 = FUN_00402160(iVar8);
                uVar27 = (uint)(*(float *)(unaff_EBP - 0x2b40) - (float)iVar12 * 0.5);
                iVar8 = FUN_00402150(iVar8);
                FUN_004d1a70(pvVar26,(int)(*(float *)(unaff_EBP - 0x2b20) - (float)iVar8 * 0.5),
                             uVar27,iVar40,iVar17,iVar24,iVar67);
              }
              puVar19 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 100),1);
              piVar53 = (int *)*puVar19;
              *(undefined4 **)(unaff_EBP - 0x2b48) = puVar19;
              puVar19 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 100),0);
              iVar8 = *(int *)(unaff_EBP - 0x2b50);
              in_stack_fffffff0 = (float *)*puVar19;
              *(undefined4 **)(unaff_EBP - 0x2b1c) = puVar19;
              iVar8 = FUN_00402160(iVar8);
              uVar27 = iVar8 + (int)piVar53;
              iVar8 = FUN_00402150(*(int *)(unaff_EBP - 0x2b50));
              in_stack_ffffffe8 = 0x5376ee00000000;
              FUN_004d9160(*(void **)(unaff_EBP - 0x2b18),(int)in_stack_fffffff0,piVar53,
                           iVar8 + (int)in_stack_fffffff0,uVar27);
              iVar8 = FUN_00406290(*(void **)(unaff_EBP - 0x2b18),
                                   (int)((**(int **)(unaff_EBP - 0x2b1c) >> 0x1f & 0xffU) +
                                        **(int **)(unaff_EBP - 0x2b1c)) >> 8,
                                   (int)(**(int **)(unaff_EBP - 0x2b48) +
                                        (**(int **)(unaff_EBP - 0x2b48) >> 0x1f & 0xffU)) >> 8);
              *(int *)(unaff_EBP - 0x2b1c) = iVar8;
              if (iVar8 != 0) {
                FUN_00401060((void *)(unaff_EBP - 0x210),(undefined4 *)(unaff_EBP - 100));
                *(int *)(unaff_EBP - 0x214) = (int)*(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x18d);
                FUN_00530840((void *)(iVar8 + 0x3c),(undefined4 *)(unaff_EBP - 0x214));
                FUN_004d4f60((void *)(unaff_EBP - 0x2cd4),(undefined4 *)(unaff_EBP - 0x339c),
                             (uint *)(unaff_EBP - 0x2b1c));
              }
              unaff_ESI = *(void **)(unaff_EBP - 0x2b18);
              FUN_004d5c70((int)unaff_ESI);
            }
          }
          break;
        case '\b':
          if (*(char *)((int)unaff_ESI + 0xb4) == '\0') {
            uVar27 = FUN_00405420(unaff_ESI,(uint *)(*(int *)(unaff_EBP - 0x2b14) + 0x11c8));
            if (uVar27 != 0) {
              FUN_004f8520((int *)(uVar27 + 0x13a4));
              puVar16 = (uint *)(*(int *)(unaff_EBP - 0x2b14) + 0x10);
              puVar25 = FUN_00402c50((void *)(uVar27 + 0x10),(uint *)(unaff_EBP - 0x1ee4),puVar16);
              pfVar28 = FUN_00402550((void *)(unaff_EBP - 0x15f8),(longlong *)puVar25);
              fVar54 = FUN_004021b0(pfVar28);
              *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
              if (40000.0 < *(float *)(unaff_EBP - 0x2b1c)) {
                FUN_00402a40((void *)(uVar27 + 0x10),puVar16);
              }
            }
            FUN_004f8520((int *)(*(int *)(unaff_EBP - 0x2b14) + 0x13ac));
            iVar8 = *(int *)(unaff_EBP - 0x2b14);
            *(undefined4 *)(iVar8 + 0x11d0) = 0;
            *(undefined4 *)(iVar8 + 0x11d4) = 0;
            goto LAB_005377fe;
          }
        }
LAB_00537804:
        FUN_0052ebf0((void *)(unaff_EBP - 0x2c58),(undefined4 *)(unaff_EBP - 0x2b30));
        piVar53 = (int *)(*(int *)(unaff_EBP - 0x2b14) + 0x130c);
        piVar9 = (int *)FUN_00530550(piVar53,(undefined4 *)(unaff_EBP - 0x2de8));
        bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c58),piVar9);
      } while (bVar3);
    }
    if (*(char *)((int)unaff_ESI + 0xb4) == '\0') {
      FUN_00426f60(piVar53);
    }
    fVar54 = FUN_0040fda0(*(int *)(unaff_EBP - 0x2b14));
    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
    iVar8 = *(int *)(unaff_EBP - 0x2b14);
    if (*(float *)(unaff_EBP - 0x2b1c) <= *(float *)(iVar8 + 0x16c) &&
        *(float *)(iVar8 + 0x16c) != *(float *)(unaff_EBP - 0x2b1c)) {
      fVar54 = FUN_0040fda0(iVar8);
      iVar8 = *(int *)(unaff_EBP - 0x2b14);
      *(float *)(iVar8 + 0x16c) = (float)fVar54;
    }
    if (*(float *)(iVar8 + 0x16c) <= 0.0) goto LAB_00545be1;
    iVar17 = *(int *)(unaff_EBP - 0x2b18);
    if ((*(char *)(iVar8 + 0x60) != '\0') && (*(char *)(iVar17 + 0xb4) == '\0')) {
      *(int *)(iVar8 + 0x13c4) = *(int *)(iVar8 + 0x13c4) + *(int *)(unaff_EBP - 0x2b24);
      if (*(int *)(iVar8 + 300) < 1) {
        if (0x1f < *(int *)(iVar8 + 0x13c4)) {
          if (*(int *)(iVar8 + 0x13e4) != 0) {
            in_stack_fffffff0 = *(float **)(unaff_EBP - 0x2b14);
            (**(code **)**(undefined4 **)(iVar8 + 0x13e4))();
            iVar8 = *(int *)(unaff_EBP - 0x2b14);
          }
          *(undefined4 *)(iVar8 + 0x13c4) = 0;
        }
        if (0 < *(int *)(iVar8 + 300)) goto LAB_00537920;
      }
      else {
LAB_00537920:
        FUN_00405570((void *)(iVar8 + 0x10),0x80,'\0');
        iVar8 = *(int *)(unaff_EBP - 0x2b14);
      }
      iVar17 = *(int *)(unaff_EBP - 0x2b18);
    }
    if (*(int *)(iVar8 + 100) == 0x90) {
      if (*(char *)(iVar17 + 0xb4) == '\0') {
        fVar56 = *(float *)(iVar8 + 0x16c) - *(float *)(unaff_EBP - 0x2b88) * 0.025;
        *(float *)(iVar8 + 0x16c) = fVar56;
        if (fVar56 < 0.0) {
          *(undefined4 *)(iVar8 + 0x16c) = 0;
        }
        goto LAB_00537987;
      }
LAB_00537ac7:
      pvVar26 = *(void **)(unaff_EBP - 0x2b18);
    }
    else {
LAB_00537987:
      if (*(char *)(iVar17 + 0xb4) != '\0') goto LAB_00537ac7;
      puVar25 = (uint *)(iVar8 + 0x10);
      FUN_00405570(puVar25,0x80,'\0');
      piVar53 = (int *)(*(int *)(unaff_EBP - 0x2b14) + 0x1460);
      bVar3 = FUN_00530540((int)piVar53);
      iVar8 = *(int *)(unaff_EBP - 0x2b14);
      if (bVar3) goto LAB_00537ac7;
      if (*(int *)(iVar8 + 300) < 1) {
        FUN_00405570(puVar25,4,'\0');
        cVar4 = FUN_004db200(*(void **)(unaff_EBP - 0x2b14),*(int *)(unaff_EBP - 0x2b24));
        if (cVar4 == '\0') {
          bVar3 = FUN_00530540((int)piVar53);
          if (!bVar3) {
            uVar66 = 0x537a17;
            FUN_00405570(puVar25,4,'\x01');
            puVar16 = (uint *)(unaff_EBP - 0x2364);
            uVar60 = 0x3fe0000000000000;
            puVar46 = puVar25;
            FUN_004dab30((ulonglong *)&stack0xfffffff0);
            uVar59 = 0x3fe0000000000000;
            FUN_004dab30((ulonglong *)&stack0xffffffe8);
            FUN_004dab30((ulonglong *)&stack0xffffffe0);
            puVar13 = FUN_00406380((void *)(unaff_EBP - 0x2004),(int)uVar59,(int)(uVar59 >> 0x20),
                                   (int)uVar60,(int)(uVar60 >> 0x20),in_stack_fffffff0,uVar66);
            puVar15 = (uint *)(unaff_EBP - 0x2604);
            puVar14 = (uint *)FUN_0052eba0(piVar53);
            piVar53 = FUN_004d99d0((void *)(unaff_EBP - 0x2034),puVar14);
            puVar15 = FUN_00402cb0(piVar53,puVar15,puVar13);
            puVar16 = FUN_00402c50(puVar15,puVar16,puVar46);
            FUN_00402550((void *)(*(int *)(unaff_EBP - 0x2b14) + 0x160),(longlong *)puVar16);
          }
          FUN_00405570(puVar25,0x80,'\x01');
          iVar8 = *(int *)(unaff_EBP - 0x2b14);
          goto LAB_00537ac7;
        }
        pvVar26 = *(void **)(unaff_EBP - 0x2b18);
        FUN_004dafe0(*(void **)(unaff_EBP - 0x2b14));
        iVar8 = *(int *)(unaff_EBP - 0x2b14);
      }
      else {
        pvVar26 = *(void **)(unaff_EBP - 0x2b18);
        iVar8 = *(int *)(unaff_EBP - 0x2b14);
      }
    }
    iVar40 = *(int *)(unaff_EBP - 0x2b24);
    *(int *)(iVar8 + 0x130) = *(int *)(iVar8 + 0x130) - iVar40;
    iVar17 = *(int *)(iVar8 + 0x130);
    if (0 < iVar17) {
      iVar17 = FUN_004084b0(iVar8);
      iVar8 = *(int *)(unaff_EBP - 0x2b14);
      iVar40 = *(int *)(unaff_EBP - 0x2b24);
      *(int *)(iVar8 + 0x6c) = iVar17 + 1;
      iVar17 = *(int *)(iVar8 + 0x130);
    }
    if (iVar17 < 0) {
      *(undefined4 *)(iVar8 + 0x130) = 0;
    }
    piVar53 = (int *)(iVar8 + 0x134);
    *piVar53 = *piVar53 - iVar40;
    uVar66 = *(undefined4 *)(iVar8 + 0x134);
    if (*piVar53 < 0) {
      uVar66 = 0;
    }
    iVar8 = *(int *)(unaff_EBP - 0x2b14);
    *(undefined4 *)(iVar8 + 0x134) = uVar66;
    piVar53 = (int *)(iVar8 + 0x138);
    *piVar53 = *piVar53 - iVar40;
    uVar66 = *(undefined4 *)(iVar8 + 0x138);
    if (*piVar53 < 0) {
      uVar66 = 0;
    }
    iVar8 = *(int *)(unaff_EBP - 0x2b14);
    *(undefined4 *)(iVar8 + 0x138) = uVar66;
    if ((*(float *)(iVar8 + 0x13c) < 0.0) &&
       (fVar56 = *(float *)(unaff_EBP - 0x2ba0) / 180.0 + *(float *)(iVar8 + 0x13c),
       *(float *)(iVar8 + 0x13c) = fVar56, 0.0 < fVar56)) {
      *(undefined4 *)(iVar8 + 0x13c) = 0;
    }
    cVar4 = *(char *)(iVar8 + 0x68);
    switch(cVar4) {
    case '\x01':
    case '\x02':
    case '\x03':
    case '\x04':
    case '\x05':
    case '\x06':
    case '\a':
    case '\t':
    case '\n':
    case '\v':
    case '\f':
    case '\r':
    case '\x0e':
    case '\x0f':
    case '\x10':
    case '\x11':
    case '\x12':
    case '\x13':
    case '\x14':
    case '\x15':
    case '\x1e':
    case '\x1f':
    case ' ':
    case '!':
    case '3':
    case '6':
    case '9':
    case ':':
    case '<':
    case '=':
    case '>':
    case 'A':
    case 'B':
    case 'C':
    case 'D':
    case 'E':
    case 'F':
    case 'H':
    case 'J':
    case 'K':
    case 'L':
    case 'M':
    case 'N':
    case 'V':
    case 'W':
    case 'X':
    case '[':
    case ']':
    case 'h':
      pvVar50 = *(void **)(unaff_EBP - 0x2b14);
      if (((*(char *)((int)pvVar26 + 0xb4) == '\0') && (*(char *)((int)pvVar50 + 0x60) == '\0')) &&
         (pvVar50 != *(void **)((int)pvVar26 + 0xb8))) break;
      if ((((*(char *)((int)pvVar50 + 0x140) == '\x04') &&
           (*(char *)((int)pvVar50 + 0x141) == '\x01')) &&
          ((cVar4 == '\x11' || ((cVar4 == '\x05' || (cVar4 == '\x14')))))) &&
         (*(int *)((int)pvVar50 + 0x6c) == 0)) {
        *(undefined4 *)((int)pvVar50 + 0x128) = 600;
      }
      iVar8 = FUN_00407db0(pvVar50,0xffffffff);
      pvVar26 = *(void **)(unaff_EBP - 0x2b14);
      cVar4 = *(char *)((int)pvVar26 + 0x68);
      if ((cVar4 == 'W') || (cVar4 == 'X')) {
        iVar17 = *(int *)((int)pvVar26 + 0x6c);
        iVar40 = FUN_00407db0(pvVar26,0xffffffff);
        pcVar51 = rand_exref;
        if ((iVar17 < iVar40) && (iVar17 / 200 != (iVar17 + *(int *)(unaff_EBP - 0x2b24)) / 200)) {
          FUN_004c8530(unaff_EBP - 0x6f8);
          FUN_00402550((void *)(unaff_EBP - 0x6f8),(longlong *)(*(int *)(unaff_EBP - 0x2b14) + 0x10)
                      );
          pcVar51 = rand_exref;
          iVar40 = rand();
          iVar17 = *(int *)(unaff_EBP - 0x2b28);
          *(undefined4 *)(unaff_EBP - 0x6ec) = 0x24;
          *(float *)(unaff_EBP - 0x6e8) = ((float)iVar40 * 0.25) / 32767.0 + 1.0;
          FUN_00428590((void *)(iVar17 + 8),(undefined4 *)(unaff_EBP - 0x6f8));
        }
        iVar40 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
        iVar17 = *(int *)(unaff_EBP - 0x2b24);
        if (*(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c) - iVar17 < iVar40) {
          iVar17 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
          if (*(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c) < iVar17) goto LAB_0053824a;
          FUN_004c8510(unaff_EBP - 0xf90);
          plVar31 = (longlong *)(*(int *)(unaff_EBP - 0x2b14) + 0x10);
          FUN_00402a40((void *)(unaff_EBP - 0xf90),(undefined4 *)plVar31);
          *(undefined4 *)(unaff_EBP - 0xf5c) = 0x3e800000;
          *(undefined4 *)(unaff_EBP - 0xf54) = 1;
          *(undefined4 *)(unaff_EBP - 0xf50) = 0x41a00000;
          puVar19 = FUN_00401080((void *)(unaff_EBP - 0x1658),0,0,0x40000000);
          FUN_00401060((void *)(unaff_EBP - 0xf78),puVar19);
          *(undefined4 *)(unaff_EBP - 0xf58) = 0x50;
          FUN_004c8530(unaff_EBP - 0x8a8);
          FUN_00402550((void *)(unaff_EBP - 0x8a8),plVar31);
          iVar17 = *(int *)(unaff_EBP - 0x2b28);
          *(undefined4 *)(unaff_EBP - 0x898) = 0x3f800000;
          *(undefined4 *)(unaff_EBP - 0x89c) = 0x51;
          FUN_00428590((void *)(iVar17 + 8),(undefined4 *)(unaff_EBP - 0x8a8));
          puVar19 = (undefined4 *)(unaff_EBP - 0xf90);
LAB_00538498:
          FUN_00428540((void *)(iVar17 + 0x10),puVar19);
LAB_005384a1:
          pvVar26 = *(void **)(unaff_EBP - 0x2b14);
          pcVar51 = rand_exref;
          goto LAB_005384ad;
        }
        pvVar26 = *(void **)(unaff_EBP - 0x2b14);
      }
      else {
        if ((((cVar4 == '\x1e') || (cVar4 == '\x1f')) || (cVar4 == ' ')) || (cVar4 == '!')) {
          iVar17 = *(int *)((int)pvVar26 + 0x6c);
          iVar40 = FUN_00407db0(pvVar26,0xffffffff);
          pcVar51 = rand_exref;
          if ((iVar17 < iVar40) && (iVar17 / 200 != (iVar17 + *(int *)(unaff_EBP - 0x2b24)) / 200))
          {
            FUN_004c8530(unaff_EBP - 0x6c8);
            FUN_00402550((void *)(unaff_EBP - 0x6c8),
                         (longlong *)(*(int *)(unaff_EBP - 0x2b14) + 0x10));
            pcVar51 = rand_exref;
            iVar40 = rand();
            iVar17 = *(int *)(unaff_EBP - 0x2b28);
            *(undefined4 *)(unaff_EBP - 0x6bc) = 0x24;
            *(float *)(unaff_EBP - 0x6b8) = ((float)iVar40 * 0.25) / 32767.0 + 1.0;
            FUN_00428590((void *)(iVar17 + 8),(undefined4 *)(unaff_EBP - 0x6c8));
          }
          iVar17 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
          if (*(int *)((int)*(void **)(unaff_EBP - 0x2b14) + 0x6c) < iVar17) {
            iVar12 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
            iVar40 = *(int *)(unaff_EBP - 0x2b14);
            iVar17 = *(int *)(unaff_EBP - 0x2b24);
            if (iVar12 <= *(int *)(iVar40 + 0x6c) + iVar17) {
              FUN_004c8510(unaff_EBP - 0xce0);
              FUN_00402510(unaff_EBP - 0x1898);
              plVar31 = (longlong *)(iVar40 + 0x10);
              puVar25 = FUN_00402cb0(plVar31,(uint *)(unaff_EBP - 0x2394),
                                     (uint *)(unaff_EBP - 0x1898));
              FUN_00402a40((void *)(unaff_EBP - 0xce0),puVar25);
              iVar17 = *(int *)(unaff_EBP - 0x2b14);
              *(undefined4 *)(unaff_EBP - 0xcac) = 0x3e800000;
              if (*(char *)(iVar17 + 0x141) == '\x01') {
                *(undefined4 *)(unaff_EBP - 0xca4) = 2;
                ppVar30 = (pair<unsigned___int64,unsigned___int64> *)
                          FUN_004010b0((void *)(unaff_EBP - 0x1c1c),0,0x3e4ccccd,0x3f800000,
                                       0x3f800000);
                std::pair<unsigned___int64,unsigned___int64>::
                operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                          ((pair<unsigned___int64,unsigned___int64> *)(unaff_EBP - 0xcbc),ppVar30);
              }
              else {
                *(undefined4 *)(unaff_EBP - 0xca4) = 1;
              }
              *(undefined4 *)(unaff_EBP - 0xca0) = 0x41000000;
              puVar19 = FUN_00401080((void *)(unaff_EBP - 0x12b0),0,0,0x40000000);
              FUN_00401060((void *)(unaff_EBP - 0xcc8),puVar19);
              *(undefined4 *)(unaff_EBP - 0xca8) = 0x14;
              FUN_004c8530(unaff_EBP - 0x818);
              FUN_00402550((void *)(unaff_EBP - 0x818),plVar31);
              iVar17 = *(int *)(unaff_EBP - 0x2b28);
              uVar66 = 0x26;
              if (*(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x141) == '\x01') {
                uVar66 = 0x29;
              }
              *(undefined4 *)(unaff_EBP - 0x80c) = uVar66;
              *(undefined4 *)(unaff_EBP - 0x808) = 0x3f800000;
              FUN_00428590((void *)(iVar17 + 8),(undefined4 *)(unaff_EBP - 0x818));
              puVar19 = (undefined4 *)(unaff_EBP - 0xce0);
              goto LAB_00538498;
            }
            pvVar26 = *(void **)(unaff_EBP - 0x2b14);
            pcVar51 = rand_exref;
            goto LAB_005384b3;
          }
LAB_0053824a:
          pvVar26 = *(void **)(unaff_EBP - 0x2b14);
        }
        else {
          pcVar51 = rand_exref;
          if (*(int *)((int)pvVar26 + 0x6c) == 0) {
            cVar4 = FUN_0040f2b0((int)pvVar26);
            pvVar26 = *(void **)(unaff_EBP - 0x2b14);
            pcVar51 = rand_exref;
            if (cVar4 != '\0') {
              if (*(char *)((int)pvVar26 + 0x68) == '[') goto LAB_005384a1;
              FUN_004c8530(unaff_EBP - 0x8d8);
              FUN_00402550((void *)(unaff_EBP - 0x8d8),
                           (longlong *)(*(int *)(unaff_EBP - 0x2b14) + 0x10));
              pcVar51 = rand_exref;
              iVar40 = rand();
              iVar17 = *(int *)(unaff_EBP - 0x2b28);
              *(undefined4 *)(unaff_EBP - 0x8cc) = 0x11;
              *(float *)(unaff_EBP - 0x8c8) = ((float)iVar40 * 0.1) / 32767.0 + 1.0;
              FUN_00428590((void *)(iVar17 + 8),(undefined4 *)(unaff_EBP - 0x8d8));
              goto LAB_0053824a;
            }
          }
        }
LAB_005384ad:
        iVar17 = *(int *)(unaff_EBP - 0x2b24);
      }
LAB_005384b3:
      if (iVar8 < *(int *)((int)pvVar26 + 0x6c)) {
        iVar8 = *(int *)(unaff_EBP - 0x2b28);
        iVar40 = *(int *)(unaff_EBP - 0x2b14);
      }
      else {
        iVar40 = *(int *)(unaff_EBP - 0x2b14);
        if ((iVar8 < *(int *)((int)pvVar26 + 0x6c) + iVar17) && (*(char *)(iVar40 + 0x68) != '[')) {
          FUN_004c8530(unaff_EBP - 0x168);
          FUN_00402550((void *)(unaff_EBP - 0x168),(longlong *)(*(int *)(unaff_EBP - 0x2b14) + 0x10)
                      );
          iVar8 = (*pcVar51)();
          cVar4 = *(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x68);
          fVar56 = ((float)iVar8 * 0.2) / 32767.0 + 0.9;
          *(float *)(unaff_EBP - 0x158) = fVar56;
          if (cVar4 == '\n') {
            iVar8 = *(int *)(unaff_EBP - 0x2b28);
            *(undefined4 *)(unaff_EBP - 0x15c) = 0x10;
            FUN_00428590((void *)(iVar8 + 8),(undefined4 *)(unaff_EBP - 0x168));
            iVar40 = *(int *)(unaff_EBP - 0x2b14);
          }
          else if (cVar4 == '\v') {
            iVar8 = *(int *)(unaff_EBP - 0x2b28);
            *(undefined4 *)(unaff_EBP - 0x15c) = 0x30;
            FUN_00428590((void *)(iVar8 + 8),(undefined4 *)(unaff_EBP - 0x168));
            iVar40 = *(int *)(unaff_EBP - 0x2b14);
          }
          else if (cVar4 == '6') {
            iVar8 = *(int *)(unaff_EBP - 0x2b28);
            *(undefined4 *)(unaff_EBP - 0x15c) = 0xe;
            FUN_00428590((void *)(iVar8 + 8),(undefined4 *)(unaff_EBP - 0x168));
            iVar40 = *(int *)(unaff_EBP - 0x2b14);
          }
          else {
            fVar56 = fVar56 * 1.5;
            iVar8 = *(int *)(unaff_EBP - 0x2b14);
            *(float *)(unaff_EBP - 0x2b1c) = fVar56;
            *(float *)(unaff_EBP - 0x158) = fVar56;
            cVar4 = FUN_0040f2b0(iVar8);
            if ((((cVar4 != '\0') ||
                 (cVar4 = *(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x68), cVar4 == 'D')) ||
                (cVar4 == ']')) || (cVar4 == 'E')) {
              *(float *)(unaff_EBP - 0x158) = *(float *)(unaff_EBP - 0x2b1c) * 0.5;
            }
            iVar8 = *(int *)(unaff_EBP - 0x2b28);
            *(undefined4 *)(unaff_EBP - 0x15c) = 0xf;
            FUN_00428590((void *)(iVar8 + 8),(undefined4 *)(unaff_EBP - 0x168));
            iVar40 = *(int *)(unaff_EBP - 0x2b14);
          }
        }
        else {
          iVar8 = *(int *)(unaff_EBP - 0x2b28);
        }
      }
      cVar4 = *(char *)(iVar40 + 0x68);
      if (((cVar4 == '9') || (cVar4 == '<')) || ((cVar4 == ':' || (cVar4 == 'J')))) {
        iVar17 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
        iVar40 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
        if (*(int *)((int)*(void **)(unaff_EBP - 0x2b14) + 0x6c) < iVar40 + iVar17 / 2) {
          iVar40 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
          iVar12 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
          iVar17 = *(int *)(unaff_EBP - 0x2b14);
          if (iVar12 + iVar40 / 2 <= *(int *)(iVar17 + 0x6c) + *(int *)(unaff_EBP - 0x2b24)) {
            FUN_004c8530(unaff_EBP - 0x728);
            FUN_00402550((void *)(unaff_EBP - 0x728),(longlong *)(iVar17 + 0x10));
            iVar17 = rand();
            *(undefined4 *)(unaff_EBP - 0x71c) = 0xc;
            *(float *)(unaff_EBP - 0x718) = ((float)iVar17 * 0.25) / 32767.0 + 1.0;
            FUN_00428590((void *)(iVar8 + 8),(undefined4 *)(unaff_EBP - 0x728));
          }
        }
      }
      iVar8 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      iVar17 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      pvVar26 = *(void **)(unaff_EBP - 0x2b14);
      iVar17 = iVar8 / 2 + -100 + iVar17;
      *(int *)(unaff_EBP - 0x2b3c) = iVar17;
      iVar8 = FUN_00411d60(pvVar26,0xffffffff);
      iVar40 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      pvVar26 = *(void **)(unaff_EBP - 0x2b14);
      *(int *)(unaff_EBP - 0x2b50) = iVar40 + iVar8 / 2;
      iVar8 = FUN_00407db0(pvVar26,0xffffffff);
      if (iVar17 < iVar8) {
        iVar8 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
        *(int *)(unaff_EBP - 0x2b3c) = iVar8;
      }
      iVar8 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      iVar17 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      if (iVar8 + iVar17 <= *(int *)(unaff_EBP - 0x2b50)) {
        iVar8 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
        iVar17 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
        *(int *)(unaff_EBP - 0x2b50) = iVar17 + iVar8 + -1;
      }
      cVar4 = *(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x68);
      if ((cVar4 == 'D') || (cVar4 == 'E')) {
        iVar8 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
        iVar17 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
        *(int *)(unaff_EBP - 0x2b3c) = iVar8 / 3 + iVar17;
      }
      pvVar26 = *(void **)(unaff_EBP - 0x2b14);
      if (*(char *)((int)pvVar26 + 0x68) == ']') {
        iVar8 = FUN_00411d60(pvVar26,0xffffffff);
        iVar17 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
        pvVar26 = *(void **)(unaff_EBP - 0x2b14);
        *(int *)(unaff_EBP - 0x2b3c) = iVar17 + iVar8 / 5;
        iVar8 = FUN_00407db0(pvVar26,0xffffffff);
        iVar17 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
        pvVar26 = *(void **)(unaff_EBP - 0x2b14);
        *(int *)(unaff_EBP - 0x2b50) = iVar8 + iVar17;
      }
      cVar4 = *(char *)((int)pvVar26 + 0x68);
      *(undefined1 *)(unaff_EBP - 0x2c70) = 0;
      if ((((cVar4 == 'H') || (cVar4 == 'V')) || (cVar4 == '\x1e')) ||
         ((((cVar4 == '\x1f' || (cVar4 == ' ')) ||
           ((cVar4 == '!' || ((cVar4 == '\v' || (cVar4 == '\x05')))))) || (cVar4 == '[')))) {
        iVar8 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
        if (*(int *)((int)*(void **)(unaff_EBP - 0x2b14) + 0x6c) < iVar8) {
          pvVar26 = *(void **)(unaff_EBP - 0x2b14);
LAB_00538dfd:
          iVar8 = FUN_00407db0(pvVar26,0xffffffff);
          *(int *)(unaff_EBP - 0x2b3c) = iVar8;
          *(int *)(unaff_EBP - 0x2b50) = iVar8;
          goto LAB_00538e12;
        }
        iVar8 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
        iVar17 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
        pvVar26 = *(void **)(unaff_EBP - 0x2b14);
        if (iVar8 + iVar17 <= *(int *)((int)pvVar26 + 0x6c)) goto LAB_00538dfd;
        iVar8 = 0xfa;
        if (*(char *)((int)pvVar26 + 0x68) == '[') {
          iVar8 = 1000;
        }
        if (*(char *)((int)pvVar26 + 0x68) == '\v') {
          iVar8 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
          iVar8 = iVar8 / 3;
        }
        pvVar26 = *(void **)(unaff_EBP - 0x2b14);
        if (*(char *)((int)pvVar26 + 0x68) == '\x05') {
          iVar8 = FUN_00411d60(pvVar26,0xffffffff);
          iVar8 = iVar8 / 3;
          pvVar26 = *(void **)(unaff_EBP - 0x2b14);
        }
        if ((*(char *)((int)pvVar26 + 0x68) == '\x1e') || (*(char *)((int)pvVar26 + 0x68) == ' ')) {
          iVar8 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
          iVar8 = iVar8 / 6;
        }
        cVar4 = *(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x68);
        if ((cVar4 == '\x1f') || (cVar4 == '!')) {
          iVar8 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
          iVar8 = iVar8 / 0xc;
        }
        iVar40 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
        iVar17 = *(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c);
        iVar12 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
        pvVar26 = *(void **)(unaff_EBP - 0x2b14);
        iVar12 = iVar12 + ((iVar17 - iVar40) / iVar8) * iVar8;
        *(int *)(unaff_EBP - 0x2b3c) = iVar12;
        *(int *)(unaff_EBP - 0x2b50) = iVar12 + 100;
        iVar12 = FUN_00407db0(pvVar26,0xffffffff);
        iVar17 = *(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c);
        iVar40 = *(int *)(unaff_EBP - 0x2b24);
        iVar24 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
        iVar24 = iVar24 + (((iVar17 + iVar40) - iVar12) / iVar8) * iVar8;
        *(int *)(unaff_EBP - 0x2b1c) = iVar24;
        if (iVar24 != *(int *)(unaff_EBP - 0x2b3c)) {
          iVar17 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
          iVar40 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
          if (*(int *)(unaff_EBP - 0x2b1c) < iVar17 + iVar40) {
            iVar17 = *(int *)(unaff_EBP - 0x2b14);
            *(undefined4 *)(iVar17 + 0x1314) = *(undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 0x70);
            *(undefined1 *)(unaff_EBP - 0x2c70) = 1;
            FUN_004f8520((int *)(iVar17 + 0x11ac));
            FUN_004f8520((int *)(*(int *)(unaff_EBP - 0x2b14) + 0x11b4));
          }
        }
        iVar17 = *(int *)(unaff_EBP - 0x2b24);
        uVar27 = *(uint *)(unaff_EBP - 0x2c70) & 0xff;
        if (*(int *)(unaff_EBP - 0x2b50) < *(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c) + iVar17) {
          uVar27 = 1;
        }
        pvVar26 = *(void **)(unaff_EBP - 0x2b14);
        *(uint *)(unaff_EBP - 0x2c70) = uVar27;
        if (*(char *)((int)pvVar26 + 0x68) != '\x05') {
          iVar40 = FUN_00407db0(pvVar26,0xffffffff);
          if (iVar40 <= *(int *)((int)*(void **)(unaff_EBP - 0x2b14) + 0x6c) - iVar17) {
            iVar12 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
            iVar40 = *(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c);
            iVar24 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
            if ((*(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c) - iVar24) / iVar8 ==
                ((iVar40 + iVar17) - iVar12) / iVar8) goto LAB_00538e12;
          }
          FUN_004c8530(unaff_EBP - 0x848);
          plVar31 = (longlong *)(*(int *)(unaff_EBP - 0x2b14) + 0x10);
          FUN_00402550((void *)(unaff_EBP - 0x848),plVar31);
          iVar17 = rand();
          iVar8 = *(int *)(unaff_EBP - 0x2b28);
          *(undefined4 *)(unaff_EBP - 0x83c) = 0xf;
          *(float *)(unaff_EBP - 0x838) = ((float)iVar17 * 0.25) / 32767.0 + 1.0;
          FUN_00428590((void *)(iVar8 + 8),(undefined4 *)(unaff_EBP - 0x848));
          if (*(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x68) == '[') {
            FUN_004c8530(unaff_EBP - 0x758);
            FUN_00402550((void *)(unaff_EBP - 0x758),plVar31);
            iVar17 = rand();
            *(undefined4 *)(unaff_EBP - 0x74c) = 0x52;
            *(float *)(unaff_EBP - 0x748) = ((float)iVar17 * 0.1) / 32767.0 + 0.5;
            FUN_00428590((void *)(iVar8 + 8),(undefined4 *)(unaff_EBP - 0x758));
          }
          goto LAB_00538e12;
        }
      }
      else {
LAB_00538e12:
        pvVar26 = *(void **)(unaff_EBP - 0x2b14);
      }
      iVar8 = FUN_00407db0(pvVar26,0xffffffff);
      pvVar26 = *(void **)(unaff_EBP - 0x2b14);
      if (*(int *)((int)pvVar26 + 0x6c) <= iVar8) {
        *(undefined4 *)((int)pvVar26 + 0x1314) = *(undefined4 *)((int)pvVar26 + 0x70);
        piVar9 = (int *)((int)pvVar26 + 0x11b4);
        FUN_00428070(piVar9,(undefined4 *)(unaff_EBP - 0x2c60));
        piVar53 = (int *)FUN_00530550(piVar9,(undefined4 *)(unaff_EBP - 0x2d80));
        bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c60),piVar53);
        if (bVar3) {
          iVar8 = *(int *)(unaff_EBP - 0x2b14);
          do {
            puVar25 = (uint *)FUN_00402bc0((int *)(unaff_EBP - 0x2c60));
            piVar53 = (int *)FUN_00530550((void *)(iVar8 + 0x11ac),
                                          (undefined4 *)(unaff_EBP - 0x2fec));
            pvVar26 = (void *)FUN_00530600((void *)(iVar8 + 0x11ac),(int *)(unaff_EBP - 0x3010),
                                           puVar25);
            bVar3 = FUN_004078d0(pvVar26,piVar53);
            if ((bVar3) &&
               (pvVar26 = (void *)FUN_00405420(*(void **)(unaff_EBP - 0x2b18),puVar25),
               pvVar26 != (void *)0x0)) {
              FUN_00408230(pvVar26,*(int *)(unaff_EBP - 0x2b28));
              FUN_00422a90(unaff_EBP - 0xc98);
              *(undefined4 *)(unaff_EBP - 0xc98) = *(undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 8)
              ;
              iVar17 = *(int *)(unaff_EBP - 0x2b14);
              *(undefined4 *)(unaff_EBP - 0xc88) = 0;
              *(undefined4 *)(unaff_EBP - 0xc94) = *(undefined4 *)(iVar17 + 0xc);
              *(undefined4 *)(unaff_EBP - 0xc90) = *(undefined4 *)((int)pvVar26 + 8);
              *(undefined4 *)(unaff_EBP - 0xc8c) = *(undefined4 *)((int)pvVar26 + 0xc);
              *(undefined1 *)(unaff_EBP - 0xc53) = 4;
              *(undefined1 *)(unaff_EBP - 0xc84) = 0;
              FUN_00402a40((void *)(unaff_EBP - 0xc78),(undefined4 *)((int)pvVar26 + 0x10));
              FUN_00428400(*(void **)(unaff_EBP - 0x2b28),(undefined4 *)(unaff_EBP - 0xc98));
            }
            FUN_00407a30((void *)(unaff_EBP - 0x2c60),(int *)(unaff_EBP - 0x3018));
            piVar9 = (int *)(*(int *)(unaff_EBP - 0x2b14) + 0x11b4);
            piVar53 = (int *)FUN_00530550(piVar9,(undefined4 *)(unaff_EBP - 0x2d80));
            bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c60),piVar53);
          } while (bVar3);
        }
        FUN_004f8520((int *)(*(int *)(unaff_EBP - 0x2b14) + 0x11ac));
        FUN_004f8520(piVar9);
        pvVar26 = *(void **)(unaff_EBP - 0x2b14);
        *(undefined1 *)((int)pvVar26 + 0x13b8) = 0;
      }
      if (*(char *)((int)pvVar26 + 0x68) == 'J') {
        iVar8 = FUN_00411d60(pvVar26,0xffffffff);
        pvVar26 = *(void **)(unaff_EBP - 0x2b14);
        iVar17 = FUN_00407db0(pvVar26,0xffffffff);
        if (*(int *)((int)pvVar26 + 0x6c) < iVar17 + iVar8 / 2) {
          iVar8 = FUN_00411d60(pvVar26,0xffffffff);
          iVar17 = FUN_00407db0(pvVar26,0xffffffff);
          if (iVar17 + iVar8 / 2 <= *(int *)((int)pvVar26 + 0x6c) + *(int *)(unaff_EBP - 0x2b24)) {
            FUN_004c8530(unaff_EBP - 0x908);
            FUN_00402550((void *)(unaff_EBP - 0x908),(longlong *)((int)pvVar26 + 0x10));
            iVar17 = rand();
            iVar8 = *(int *)(unaff_EBP - 0x2b28);
            *(undefined4 *)(unaff_EBP - 0x8fc) = 0x52;
            *(float *)(unaff_EBP - 0x8f8) = ((float)iVar17 * 0.1) / 32767.0 + 0.5;
            FUN_00428590((void *)(iVar8 + 8),(undefined4 *)(unaff_EBP - 0x908));
          }
        }
        pvVar26 = *(void **)(unaff_EBP - 0x2b14);
      }
      iVar8 = *(int *)(unaff_EBP - 0x2b50);
      if (iVar8 <= *(int *)((int)pvVar26 + 0x6c)) {
        piVar53 = (int *)((int)pvVar26 + 0x11b4);
        FUN_00428070(piVar53,(undefined4 *)(unaff_EBP - 0x2c68));
        piVar9 = (int *)FUN_00530550(piVar53,(undefined4 *)(unaff_EBP - 0x2e18));
        bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c68),piVar9);
        if (bVar3) {
          iVar8 = *(int *)(unaff_EBP - 0x2b14);
          do {
            puVar25 = (uint *)FUN_00402bc0((int *)(unaff_EBP - 0x2c68));
            piVar53 = (int *)FUN_00530550((void *)(iVar8 + 0x11ac),
                                          (undefined4 *)(unaff_EBP - 0x3048));
            pvVar26 = (void *)FUN_00530600((void *)(iVar8 + 0x11ac),(int *)(unaff_EBP - 0x3064),
                                           puVar25);
            bVar3 = FUN_004078d0(pvVar26,piVar53);
            if ((bVar3) &&
               (pvVar26 = (void *)FUN_00405420(*(void **)(unaff_EBP - 0x2b18),puVar25),
               pvVar26 != (void *)0x0)) {
              FUN_00408230(pvVar26,*(int *)(unaff_EBP - 0x2b28));
              FUN_00422a90(unaff_EBP - 0xd70);
              iVar17 = *(int *)(unaff_EBP - 0x2b14);
              *(undefined4 *)(unaff_EBP - 0xd60) = 0;
              *(undefined4 *)(unaff_EBP - 0xd70) = *(undefined4 *)(iVar17 + 8);
              *(undefined4 *)(unaff_EBP - 0xd6c) = *(undefined4 *)(iVar17 + 0xc);
              *(undefined4 *)(unaff_EBP - 0xd68) = *(undefined4 *)((int)pvVar26 + 8);
              *(undefined4 *)(unaff_EBP - 0xd64) = *(undefined4 *)((int)pvVar26 + 0xc);
              *(undefined1 *)(unaff_EBP - 0xd2b) = 4;
              *(undefined1 *)(unaff_EBP - 0xd5c) = 0;
              FUN_00402a40((void *)(unaff_EBP - 0xd50),(undefined4 *)((int)pvVar26 + 0x10));
              FUN_00428400(*(void **)(unaff_EBP - 0x2b28),(undefined4 *)(unaff_EBP - 0xd70));
            }
            FUN_00407a30((void *)(unaff_EBP - 0x2c68),(int *)(unaff_EBP - 0x3014));
            piVar53 = (int *)(*(int *)(unaff_EBP - 0x2b14) + 0x11b4);
            piVar9 = (int *)FUN_00530550(piVar53,(undefined4 *)(unaff_EBP - 0x2e18));
            bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c68),piVar9);
          } while (bVar3);
          iVar8 = *(int *)(unaff_EBP - 0x2b50);
        }
        FUN_004f8520(piVar53);
        pvVar26 = *(void **)(unaff_EBP - 0x2b14);
      }
      if (*(char *)((int)pvVar26 + 0x13b8) == '\0') {
        iVar17 = FUN_00407db0(pvVar26,0xffffffff);
        iVar40 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
        if (iVar17 + iVar40 <=
            *(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c) + *(int *)(unaff_EBP - 0x2b24)) {
          iVar17 = FUN_004084b0(*(int *)(unaff_EBP - 0x2b14));
          pvVar26 = *(void **)(unaff_EBP - 0x2b14);
          if (iVar17 <= *(int *)((int)pvVar26 + 0x6c)) goto LAB_005392b7;
          if (*(int *)((int)pvVar26 + 0x128) == 0) {
            fVar54 = FUN_00412150((int)pvVar26);
            *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
            iVar17 = *(int *)(unaff_EBP - 0x2b14);
            *(undefined4 *)(iVar17 + 0x70) = 0;
            fVar54 = FUN_00412150(iVar17);
            *(float *)(unaff_EBP - 0x2b48) = (float)fVar54;
            *(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c) =
                 (int)((*(float *)(unaff_EBP - 0x2b1c) / *(float *)(unaff_EBP - 0x2b48)) *
                      (float)*(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c));
          }
        }
        pvVar26 = *(void **)(unaff_EBP - 0x2b14);
      }
LAB_005392b7:
      if ((*(char *)((int)pvVar26 + 0x68) == '\x1f') || (*(char *)((int)pvVar26 + 0x68) == '!')) {
        pvVar26 = *(void **)(unaff_EBP - 0x2b14);
        iVar17 = FUN_00407db0(pvVar26,0xffffffff);
        if (iVar17 < *(int *)((int)pvVar26 + 0x6c)) {
LAB_00539356:
          pvVar26 = *(void **)(unaff_EBP - 0x2b14);
          goto LAB_0053935c;
        }
        iVar17 = FUN_00407db0(pvVar26,0xffffffff);
        iVar40 = *(int *)(unaff_EBP - 0x2b24);
        if (iVar17 < *(int *)((int)pvVar26 + 0x6c) + iVar40) {
          *(undefined4 *)((int)pvVar26 + 0x13b4) = 0x3dcccccd;
          fVar54 = FUN_0040fb20((int)pvVar26,(uint)*(byte *)((int)pvVar26 + 0x68),-1);
          *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
          fVar56 = *(float *)((int)pvVar26 + 0x170) - *(float *)(unaff_EBP - 0x2b1c);
          *(float *)((int)pvVar26 + 0x170) = fVar56;
          if (fVar56 < 0.0) {
            *(undefined4 *)((int)pvVar26 + 0x170) = 0;
          }
          goto LAB_00539356;
        }
      }
      else {
        pvVar26 = *(void **)(unaff_EBP - 0x2b14);
        if (*(int *)((int)pvVar26 + 0x6c) == 0) {
          iVar17 = *(int *)(unaff_EBP - 0x2b14);
          *(undefined1 *)((int)pvVar26 + 0x13c0) = 0;
          *(undefined4 *)((int)pvVar26 + 0x13b4) = 0;
          fVar54 = FUN_0040fb20(iVar17,(uint)*(byte *)((int)pvVar26 + 0x68),-1);
          *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
          if (*(float *)(unaff_EBP - 0x2b1c) <= 0.0) {
            cVar4 = *(char *)(iVar17 + 0x68);
            if (((cVar4 == '\x11') || (cVar4 == '\x14')) || (cVar4 == '\x05')) {
              *(undefined4 *)(iVar17 + 0x13b4) = *(undefined4 *)(iVar17 + 0x170);
              pvVar26 = *(void **)(unaff_EBP - 0x2b14);
              *(undefined4 *)((int)pvVar26 + 0x170) = 0;
              puVar19 = FUN_0040ef90(pvVar26,0xb);
              if (puVar19 != (undefined4 *)0x0) {
                FUN_004029b0((undefined1 *)(unaff_EBP - 0x2f4c));
                pvVar26 = *(void **)(unaff_EBP - 0x2b14);
                *(undefined1 *)(unaff_EBP - 0x2f4c) = 0xb;
                *(undefined4 *)(unaff_EBP - 0x2f44) = 0;
                FUN_00411740(pvVar26,(char *)(unaff_EBP - 0x2f4c));
                FUN_004063d0(unaff_EBP - 0x3124);
                uVar66 = *(undefined4 *)((int)pvVar26 + 0xc);
                uVar65 = *(undefined4 *)((int)pvVar26 + 8);
                *(undefined8 *)(unaff_EBP - 0x3114) = *(undefined8 *)(unaff_EBP - 0x2f4c);
                uVar1 = *(undefined8 *)(unaff_EBP - 0x2f44);
                *(undefined4 *)(unaff_EBP - 0x3120) = uVar66;
                *(undefined4 *)(unaff_EBP - 0x3118) = uVar66;
                iVar17 = *(int *)(unaff_EBP - 0x2b28);
                *(undefined4 *)(unaff_EBP - 0x3124) = uVar65;
                *(undefined4 *)(unaff_EBP - 0x311c) = uVar65;
                *(undefined8 *)(unaff_EBP - 0x310c) = uVar1;
                *(undefined8 *)(unaff_EBP - 0x3104) = *(undefined8 *)(unaff_EBP - 0x2f3c);
                FUN_00411040((void *)(iVar17 + 0x58),(undefined8 *)(unaff_EBP - 0x3124));
                *(undefined1 *)((int)pvVar26 + 0x13c0) = 1;
              }
            }
            else if (((cVar4 == '6') || (cVar4 == '\x15')) || ((cVar4 == 'W' || (cVar4 == 'X')))) {
              *(undefined4 *)(iVar17 + 0x13b4) = 0x3f800000;
            }
          }
          else {
            fVar54 = FUN_0040fb20(iVar17,(uint)*(byte *)(iVar17 + 0x68),-1);
            *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
            fVar56 = *(float *)(unaff_EBP - 0x2b1c);
            *(float *)(iVar17 + 0x13b4) = fVar56;
            *(float *)(iVar17 + 0x170) = *(float *)(iVar17 + 0x170) - fVar56;
          }
          goto LAB_00539356;
        }
LAB_0053935c:
        iVar40 = *(int *)(unaff_EBP - 0x2b24);
      }
      if (0.0 < *(float *)((int)pvVar26 + 0x144)) {
        *(float *)((int)pvVar26 + 0x13b4) = *(float *)((int)pvVar26 + 0x144);
        *(float *)((int)pvVar26 + 0x170) =
             *(float *)((int)pvVar26 + 0x170) - *(float *)((int)pvVar26 + 0x144);
        *(undefined1 *)((int)pvVar26 + 0x13b8) = 0;
        if ((*(char *)((int)pvVar26 + 0x68) == '\v') || (*(char *)((int)pvVar26 + 0x68) == '\x05'))
        {
          *(float *)(*(int *)(unaff_EBP - 0x2b14) + 0x13b4) =
               *(float *)(*(int *)(unaff_EBP - 0x2b14) + 0x13b4) * 0.5;
        }
        pvVar26 = *(void **)(unaff_EBP - 0x2b14);
      }
      *(undefined4 *)((int)pvVar26 + 0x144) = 0;
      if (*(float *)((int)pvVar26 + 0x170) <= 0.0 && *(float *)((int)pvVar26 + 0x170) != 0.0) {
        *(undefined4 *)((int)pvVar26 + 0x170) = 0;
      }
      if ((0.0 < *(float *)((int)pvVar26 + 0x13b4)) || (*(char *)((int)pvVar26 + 0x68) == '\v')) {
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
      }
      pvVar50 = *(void **)(unaff_EBP - 0x2b14);
      *(undefined1 *)(unaff_EBP - 0x2c04) = uVar5;
      if ((*(int *)((int)pvVar50 + 0x6c) <= *(int *)(unaff_EBP - 0x2b3c)) ||
         (iVar8 < *(int *)((int)pvVar50 + 0x6c))) goto LAB_0053e0c5;
      FUN_00401cd0((undefined4 *)(unaff_EBP - 0x1d1c));
      pfVar28 = (float *)FUN_004013d0((void *)((int)pvVar50 + 0x28),2);
      FUN_00402030((void *)(unaff_EBP - 0x1d1c),*pfVar28);
      *(undefined4 *)(unaff_EBP - 0x2b1c) = 0x3fc00000;
      pfVar28 = (float *)FUN_004013d0((void *)((int)pvVar50 + 0x80),0);
      fVar56 = *pfVar28;
      cVar4 = *(char *)((int)pvVar50 + 0x68);
      fVar57 = fVar56 * 1.5;
      *(float **)(unaff_EBP - 0x2bb8) = pfVar28;
      *(float *)(unaff_EBP - 0x2b4c) = fVar57;
      if ((((((((cVar4 == '\r') || (cVar4 == '\x0e')) || (cVar4 == '\x02')) ||
             ((cVar4 == '\x01' || (cVar4 == '\t')))) || (cVar4 == '\x04')) ||
           ((cVar4 == '\x03' || (cVar4 == '\a')))) || (cVar4 == '\x06')) ||
         ((cVar4 == '\x12' || (cVar4 == '\x13')))) {
        fVar58 = 1.0;
        fVar57 = fVar56 * 2.0;
        *(float *)(unaff_EBP - 0x2b4c) = fVar57;
      }
      else {
        fVar58 = *(float *)(unaff_EBP - 0x2b1c);
      }
      if ((cVar4 == '\x14') || (cVar4 == '\x15')) {
        fVar57 = fVar57 * 2.0;
        *(float *)(unaff_EBP - 0x2b4c) = fVar57;
      }
      if ((cVar4 == 'D') || (cVar4 == 'F')) {
        fVar58 = 0.0;
      }
      if (((cVar4 == 'V') || (cVar4 == ']')) || (cVar4 == 'h')) {
        fVar57 = fVar57 * 2.0;
        fVar58 = 0.0;
        *(float *)(unaff_EBP - 0x2b4c) = fVar57;
      }
      if ((cVar4 == 'W') || (cVar4 == 'X')) {
        fVar57 = 8.0;
        fVar58 = 0.0;
        *(undefined4 *)(unaff_EBP - 0x2b4c) = 0x41000000;
      }
      if ((cVar4 == '\x1e') || (cVar4 == ' ')) {
        fVar57 = 3.0;
        fVar58 = 0.0;
        *(undefined4 *)(unaff_EBP - 0x2b4c) = 0x40400000;
      }
      if ((cVar4 == '\x1f') || (cVar4 == '!')) {
        fVar57 = 5.0;
        fVar58 = 0.0;
        *(undefined4 *)(unaff_EBP - 0x2b4c) = 0x40a00000;
      }
      if ((cVar4 == '[') || (cVar4 == 'J')) {
        fVar57 = 20.0;
        fVar58 = 0.0;
        *(undefined4 *)(unaff_EBP - 0x2b4c) = 0x41a00000;
      }
      if ((((cVar4 == 'H') || (cVar4 == 'N')) || (cVar4 == 'M')) || (cVar4 == 'L')) {
        fVar58 = 0.0;
        *(float *)(unaff_EBP - 0x2b4c) = fVar57 * 1.2;
      }
      pfVar29 = (float *)FUN_00401080((void *)(unaff_EBP - 0x12c8),0,fVar56 * fVar58,0);
      FUN_004dde00((void *)(unaff_EBP - 0x1d1c),(float *)(unaff_EBP - 0x19c4),pfVar29);
      FUN_00402510(unaff_EBP - 0x18bc);
      puVar19 = (undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 0x10);
      FUN_00402cb0(puVar19,(uint *)(unaff_EBP - 0x110),(uint *)(unaff_EBP - 0x18bc));
      iVar8 = *(int *)(unaff_EBP - 0x2b14);
      cVar4 = *(char *)(iVar8 + 0x68);
      if (((cVar4 == '\x1e') || (cVar4 == '\x1f')) || ((cVar4 == ' ' || (cVar4 == '!')))) {
        FUN_00402510(unaff_EBP - 0x18e0);
        puVar25 = FUN_00402cb0(puVar19,(uint *)(unaff_EBP - 0x2064),(uint *)(unaff_EBP - 0x18e0));
        FUN_00402a40((void *)(unaff_EBP - 0x110),puVar25);
        iVar8 = *(int *)(unaff_EBP - 0x2b14);
      }
      if ((*(char *)(iVar8 + 0x68) == 'K') || (*(char *)(iVar8 + 0x68) == 'E')) {
        FUN_004013d0((void *)(iVar8 + 0x80),2);
        FUN_00402a10((ulonglong *)(unaff_EBP - 0x3080));
        puVar25 = (uint *)(unaff_EBP - 0x3080);
        pvVar26 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x110),2);
        FUN_00402eb0(pvVar26,puVar25);
        iVar8 = *(int *)(unaff_EBP - 0x2b14);
      }
      cVar4 = *(char *)(iVar8 + 0x68);
      if (((cVar4 == '\v') || (cVar4 == '=')) || (cVar4 == '6')) {
        FUN_00402a40((void *)(unaff_EBP - 0x110),puVar19);
        fVar56 = *(float *)(unaff_EBP - 0x2b4c) * 3.0;
        *(float *)(unaff_EBP - 0x2b4c) = fVar56;
      }
      else {
        fVar56 = *(float *)(unaff_EBP - 0x2b4c);
      }
      pvVar50 = *(void **)(unaff_EBP - 0x2b14);
      if (((*(char *)(*(int *)(unaff_EBP - 0x2b18) + 0xb4) == '\0') && (4.0 < *pfVar28)) &&
         ((cVar4 = *(char *)((int)pvVar50 + 0x68), cVar4 != 'W' &&
          ((cVar4 != '[' && (cVar4 != 'J')))))) {
        *(undefined1 *)(unaff_EBP - 0x2b29) = 0;
        iVar8 = (int)fVar56;
        if (8 < iVar8) {
          iVar8 = 8;
        }
        iVar40 = -iVar8;
        *(int *)(unaff_EBP - 0x2b48) = iVar8;
        *(int *)(unaff_EBP - 0x2b90) = iVar40;
        *(int *)(unaff_EBP - 0x2b5c) = iVar40;
        iVar17 = iVar40;
        if (-iVar8 == iVar8 || SBORROW4(iVar40,iVar8) != iVar8 * -2 < 0) {
          do {
            *(int *)(unaff_EBP - 0x2b64) = iVar17;
            iVar12 = iVar17;
            if (iVar17 <= iVar8) {
              do {
                if (iVar12 <= iVar8) {
                  iVar24 = iVar8 * iVar8;
                  do {
                    puVar25 = FUN_00402990((void *)(unaff_EBP - 0x12e0),iVar40,iVar17,iVar12);
                    FUN_004d99d0((void *)(unaff_EBP - 0x1904),puVar25);
                    FUN_00402cb0((void *)(unaff_EBP - 0x110),(uint *)(unaff_EBP - 0x42c),
                                 (uint *)(unaff_EBP - 0x1904));
                    puVar25 = FUN_00402c50((void *)(unaff_EBP - 0x42c),(uint *)(unaff_EBP - 0x2544),
                                           (uint *)(unaff_EBP - 0x110));
                    pfVar28 = FUN_00402550((void *)(unaff_EBP - 0x1670),(longlong *)puVar25);
                    fVar54 = FUN_004021b0(pfVar28);
                    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
                    if (*(float *)(unaff_EBP - 0x2b1c) <= (float)iVar24 &&
                        (float)iVar24 != *(float *)(unaff_EBP - 0x2b1c)) {
                      iVar8 = FUN_004e2320((void *)(unaff_EBP - 0x42c),2);
                      *(int *)(unaff_EBP - 0x2b40) = iVar8;
                      iVar8 = FUN_004e2320((void *)(unaff_EBP - 0x42c),1);
                      *(int *)(unaff_EBP - 0x2b3c) = iVar8;
                      puVar16 = (uint *)FUN_004e2320((void *)(unaff_EBP - 0x42c),0);
                      puVar25 = *(uint **)(unaff_EBP - 0x2b40);
                      uVar27 = puVar25[1];
                      *(uint **)(unaff_EBP - 0x2b1c) = puVar16;
                      iVar8 = FUN_00406050(*(void **)(unaff_EBP - 0x2b18),*puVar16,puVar16[1],
                                           **(uint **)(unaff_EBP - 0x2b3c),
                                           (*(uint **)(unaff_EBP - 0x2b3c))[1],*puVar25,uVar27,0);
                      *(int *)(unaff_EBP - 0x2b20) = iVar8;
                      bVar6 = FUN_005306c0(iVar8);
                      if (bVar6 != 0) {
                        FUN_004c8510(unaff_EBP - 0x1020);
                        FUN_00402a40((void *)(unaff_EBP - 0x1020),(undefined4 *)(unaff_EBP - 0x42c))
                        ;
                        pvVar26 = *(void **)(unaff_EBP - 0x2b20);
                        uVar66 = 0x3f800000;
                        *(undefined4 *)(unaff_EBP - 0xfec) = 0x3f000000;
                        pbVar47 = (byte *)FUN_004013e0(pvVar26,2);
                        fVar56 = (float)*pbVar47 / 255.0;
                        pbVar47 = (byte *)FUN_004013e0(*(void **)(unaff_EBP - 0x2b20),1);
                        fVar57 = (float)*pbVar47 / 255.0;
                        pbVar47 = (byte *)FUN_004013e0(*(void **)(unaff_EBP - 0x2b20),0);
                        ppVar30 = (pair<unsigned___int64,unsigned___int64> *)
                                  FUN_004010b0((void *)(unaff_EBP - 0x1b8c),(float)*pbVar47 / 255.0,
                                               fVar57,fVar56,uVar66);
                        std::pair<unsigned___int64,unsigned___int64>::
                        operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                                  ((pair<unsigned___int64,unsigned___int64> *)(unaff_EBP - 0xffc),
                                   ppVar30);
                        puVar19 = FUN_00401080((void *)(unaff_EBP - 0x12f8),0,0,0x41200000);
                        FUN_00401060((void *)(unaff_EBP - 0x1008),puVar19);
                        iVar8 = *(int *)(unaff_EBP - 0x2b28);
                        *(undefined4 *)(unaff_EBP - 0xfe8) = 3;
                        FUN_00428540((void *)(iVar8 + 0x10),(undefined4 *)(unaff_EBP - 0x1020));
                        lVar38 = CRefTime::Millisecs(*(CRefTime **)(unaff_EBP - 0x2b40));
                        uVar27 = CRefTime::Millisecs(*(CRefTime **)(unaff_EBP - 0x2b3c));
                        uVar52 = CRefTime::Millisecs(*(CRefTime **)(unaff_EBP - 0x2b1c));
                        FUN_00530470(*(void **)(unaff_EBP - 0x2b18),uVar52,uVar27,lVar38);
                        FUN_0041d7e0(unaff_EBP - 0x4b4);
                        puVar19 = FUN_004c64f0((void *)(unaff_EBP - 0x1880),
                                               (uint *)(unaff_EBP - 0x42c));
                        FUN_00401060((void *)(unaff_EBP - 0x4b4),puVar19);
                        *(undefined4 *)(unaff_EBP - 0x4a4) =
                             *(undefined4 *)(*(int *)(unaff_EBP - 0x2b18) + 0x800160);
                        FUN_00405610((void *)(unaff_EBP - 0x4a8),&DAT_005842d8);
                        FUN_00528400((void *)(*(int *)(unaff_EBP - 0x2b28) + 0x18),
                                     (undefined4 *)(unaff_EBP - 0x4b4));
                        *(undefined1 *)(unaff_EBP - 0x2b29) = 1;
                      }
                    }
                    iVar8 = *(int *)(unaff_EBP - 0x2b48);
                    iVar17 = *(int *)(unaff_EBP - 0x2b64);
                    iVar40 = *(int *)(unaff_EBP - 0x2b5c);
                    iVar12 = iVar12 + 1;
                  } while (iVar12 <= iVar8);
                  iVar12 = *(int *)(unaff_EBP - 0x2b90);
                }
                iVar17 = iVar17 + 1;
                *(int *)(unaff_EBP - 0x2b64) = iVar17;
              } while (iVar17 <= iVar8);
            }
            iVar40 = iVar40 + 1;
            *(int *)(unaff_EBP - 0x2b5c) = iVar40;
            iVar17 = iVar12;
          } while (iVar40 <= iVar8);
          if (*(char *)(unaff_EBP - 0x2b29) != '\0') {
            FUN_004c8530(unaff_EBP - 0x608);
            FUN_00402550((void *)(unaff_EBP - 0x608),
                         (longlong *)(*(int *)(unaff_EBP - 0x2b14) + 0x10));
            iVar17 = rand();
            iVar8 = *(int *)(unaff_EBP - 0x2b28);
            *(undefined4 *)(unaff_EBP - 0x5fc) = 2;
            *(float *)(unaff_EBP - 0x5f8) = ((float)iVar17 * 0.4) / 32767.0 + 0.5;
            FUN_00428590((void *)(iVar8 + 8),(undefined4 *)(unaff_EBP - 0x608));
            if (*(int *)(*(int *)(unaff_EBP - 0x2b18) + 0xb8) == 0) {
              pvVar26 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x110),1);
              pvVar50 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x110),0);
              iVar17 = 0;
              iVar8 = 8;
              pCVar37 = (CRefTime *)FUN_00401530(pvVar26,(int *)(unaff_EBP - 0x33ac));
              lVar38 = CRefTime::Millisecs(pCVar37);
              pCVar37 = (CRefTime *)FUN_00401530(pvVar50,(int *)(unaff_EBP - 0x33bc));
              lVar18 = CRefTime::Millisecs(pCVar37);
              pCVar37 = (CRefTime *)FUN_004014b0(pvVar26,(int *)(unaff_EBP - 0x33cc));
              uVar27 = CRefTime::Millisecs(pCVar37);
              pCVar37 = (CRefTime *)FUN_004014b0(pvVar50,(int *)(unaff_EBP - 0x33dc));
              uVar52 = CRefTime::Millisecs(pCVar37);
              FUN_004d1a70(*(void **)(unaff_EBP - 0x2b18),uVar52,uVar27,lVar18,lVar38,iVar8,iVar17);
            }
            pvVar26 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x110),1);
            pvVar50 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x110),0);
            pCVar37 = (CRefTime *)FUN_00401530(pvVar26,(int *)(unaff_EBP - 0x33ec));
            uVar27 = CRefTime::Millisecs(pCVar37);
            pCVar37 = (CRefTime *)FUN_00401530(pvVar50,(int *)(unaff_EBP - 0x33fc));
            uVar52 = CRefTime::Millisecs(pCVar37);
            pCVar37 = (CRefTime *)FUN_004014b0(pvVar26,(int *)(unaff_EBP - 0x340c));
            piVar53 = (int *)CRefTime::Millisecs(pCVar37);
            pCVar37 = (CRefTime *)FUN_004014b0(pvVar50,(int *)(unaff_EBP - 0x341c));
            lVar38 = CRefTime::Millisecs(pCVar37);
            FUN_004d9160(*(void **)(unaff_EBP - 0x2b18),lVar38,piVar53,uVar52,uVar27);
          }
        }
        pvVar50 = *(void **)(unaff_EBP - 0x2b14);
      }
      cVar4 = *(char *)((int)pvVar50 + 0x68);
      *(undefined4 *)(unaff_EBP - 0x2b5c) = 0x3f800000;
      if (((cVar4 == '<') || (cVar4 == '\v')) || (cVar4 == '>')) {
        *(undefined4 *)(unaff_EBP - 0x2b5c) = 0;
      }
      *(undefined1 *)(unaff_EBP - 0x2b29) = 0;
      if (((cVar4 == '\x1f') &&
          (iVar8 = FUN_00407db0(pvVar50,0xffffffff), iVar8 <= *(int *)((int)pvVar50 + 0x6c))) &&
         (puVar19 = FUN_0040ef90(pvVar50,9), puVar19 != (undefined4 *)0x0)) {
        FUN_004029b0((undefined1 *)(unaff_EBP - 0x2f04));
        *(undefined1 *)(unaff_EBP - 0x2f04) = 9;
        *(undefined4 *)(unaff_EBP - 0x2efc) = 0;
        FUN_00411740(pvVar50,(char *)(unaff_EBP - 0x2f04));
        FUN_004063d0(unaff_EBP - 0x3174);
        uVar66 = *(undefined4 *)((int)pvVar50 + 0xc);
        uVar65 = *(undefined4 *)((int)pvVar50 + 8);
        *(undefined8 *)(unaff_EBP - 0x3164) = *(undefined8 *)(unaff_EBP - 0x2f04);
        uVar1 = *(undefined8 *)(unaff_EBP - 0x2efc);
        *(undefined4 *)(unaff_EBP - 0x3170) = uVar66;
        *(undefined4 *)(unaff_EBP - 0x3168) = uVar66;
        iVar8 = *(int *)(unaff_EBP - 0x2b28);
        *(undefined4 *)(unaff_EBP - 0x3174) = uVar65;
        *(undefined4 *)(unaff_EBP - 0x316c) = uVar65;
        *(undefined8 *)(unaff_EBP - 0x315c) = uVar1;
        uVar66 = *(undefined4 *)(unaff_EBP - 0x2ef0);
        *(undefined4 *)(unaff_EBP - 0x3154) = *(undefined4 *)(unaff_EBP - 0x2ef4);
        *(undefined4 *)(unaff_EBP - 0x3150) = uVar66;
        FUN_00411040((void *)(iVar8 + 0x58),(undefined8 *)(unaff_EBP - 0x3174));
      }
      FUN_00428070(*(void **)(unaff_EBP - 0x2b6c),(undefined4 *)(unaff_EBP - 0x2c78));
      piVar53 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),
                                    (undefined4 *)(unaff_EBP - 0x2d88));
      bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c78),piVar53);
      if (bVar3) {
        do {
          iVar8 = FUN_00402bc0((int *)(unaff_EBP - 0x2c78));
          iVar8 = *(int *)(iVar8 + 8);
          *(int *)(unaff_EBP - 0x2b64) = iVar8;
          if ((iVar8 != 0) && (0.0 < *(float *)(iVar8 + 0x16c))) {
            *(int *)(unaff_EBP - 0x2b98) = iVar8 + 8;
            piVar53 = (int *)FUN_00530550((void *)((int)pvVar50 + 0x11ac),
                                          (undefined4 *)(unaff_EBP - 0x2fac));
            pvVar26 = (void *)FUN_00530600((void *)((int)pvVar50 + 0x11ac),
                                           (int *)(unaff_EBP - 0x304c),(uint *)(iVar8 + 8));
            bVar3 = FUN_0042c6f0(pvVar26,piVar53);
            if (!bVar3) {
              pfVar28 = (float *)FUN_004013d0((void *)(iVar8 + 0x80),0);
              puVar19 = (undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 0x10);
              *(float *)(unaff_EBP - 0x2b1c) = *pfVar28 * 0.7 + *(float *)(unaff_EBP - 0x2b4c);
              uVar66 = 0x53a01f;
              FUN_00402a40((void *)(unaff_EBP - 0xe70),puVar19);
              cVar4 = *(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x68);
              if ((((cVar4 == '\x1e') || (cVar4 == '\x1f')) || (cVar4 == ' ')) || (cVar4 == '!')) {
                uVar65 = *(undefined4 *)(unaff_EBP - 0x2b4c);
                uVar63 = 0x53a054;
                FUN_00402a10((ulonglong *)&stack0xfffffff8);
                uVar59 = 0x53a060;
                FUN_004cde40(&stack0xfffffff0,0);
                FUN_004cde40(&stack0xffffffe8,0);
                puVar25 = FUN_00406380((void *)(unaff_EBP - 0x2094),(int)uVar59,
                                       (int)(uVar59 >> 0x20),uVar63,uVar65,uVar66,puVar19);
                puVar25 = FUN_00402cb0((void *)(unaff_EBP - 0x110),(uint *)(unaff_EBP - 0x23c4),
                                       puVar25);
                FUN_00402a40((void *)(unaff_EBP - 0xe70),puVar25);
              }
              puVar16 = (uint *)(*(int *)(unaff_EBP - 0x2b64) + 0x10);
              puVar25 = (uint *)(unaff_EBP - 0x34ac);
              *(uint **)(unaff_EBP - 0x2b40) = puVar16;
              puVar16 = FUN_00402c50((void *)(unaff_EBP - 0x110),(uint *)(unaff_EBP - 0x20c4),
                                     puVar16);
              ppVar30 = (pair<unsigned___int64,unsigned___int64> *)FUN_0041cba0(puVar16);
              ppVar30 = std::pair<unsigned___int64,unsigned___int64>::
                        operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                                  ((pair<unsigned___int64,unsigned___int64> *)(unaff_EBP - 0x1c0c),
                                   ppVar30);
              puVar25 = FUN_0041ce90(ppVar30,puVar25);
              uVar66 = FUN_004dade0(puVar25);
              if ((char)uVar66 != '\0') {
                puVar25 = (uint *)FUN_004e2320(*(void **)(unaff_EBP - 0x2b40),2);
                piVar53 = (int *)(unaff_EBP - 0x34dc);
                pvVar26 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x110),2);
                plVar31 = (longlong *)FUN_00401490(pvVar26,piVar53,puVar25);
                fVar54 = FUN_00401420(plVar31);
                fVar54 = FUN_00401ca0((float)fVar54);
                *(float *)(unaff_EBP - 0x2b48) = (float)fVar54;
                pfVar29 = (float *)FUN_004013d0((void *)(iVar8 + 0x80),2);
                pvVar50 = *(void **)(unaff_EBP - 0x2b14);
                *(float *)(unaff_EBP - 0x2b1c) = *pfVar29 * 0.5;
                pfVar29 = (float *)FUN_004013d0((void *)((int)pvVar50 + 0x80),2);
                fVar56 = *(float *)(unaff_EBP - 0x2b1c) + *pfVar29 + *(float *)(unaff_EBP - 0x2b4c);
                if ((fVar56 < *(float *)(unaff_EBP - 0x2b48) ||
                     fVar56 == *(float *)(unaff_EBP - 0x2b48)) ||
                   (cVar4 = FUN_004d4d80((uint *)(unaff_EBP - 0xe70),*(uint **)(unaff_EBP - 0x2b40),
                                         '\x01',200.0), cVar4 == '\0')) goto LAB_0053a977;
                fVar56 = *(float *)(unaff_EBP - 0x2b64);
                uVar66 = FUN_004d18c0(*(int *)(unaff_EBP - 0x2b14),(int)fVar56);
                if ((char)uVar66 == '\0') {
                  puVar25 = (uint *)((int)fVar56 + 8);
                }
                else {
                  if (*(int *)((int)fVar56 + 0x128) != 0) {
                    FUN_00530690((void *)(*(int *)(unaff_EBP - 0x2b14) + 0x11b4),
                                 (undefined4 *)(unaff_EBP - 0x34fc),(uint *)((int)fVar56 + 8));
                    goto LAB_0053a971;
                  }
                  puVar25 = FUN_00402c50((void *)((int)fVar56 + 0x10),(uint *)(unaff_EBP - 0x26c4),
                                         (uint *)(*(int *)(unaff_EBP - 0x2b14) + 0x10));
                  FUN_00402550((void *)(unaff_EBP - 0xe0),(longlong *)puVar25);
                  puVar19 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 0xe0),2);
                  *puVar19 = 0;
                  fVar54 = FUN_004021b0((float *)(unaff_EBP - 0xe0));
                  *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
                  if (0.01 < *(float *)(unaff_EBP - 0x2b1c)) {
                    FUN_00401fb0((float *)(unaff_EBP - 0xe0));
                  }
                  iVar8 = *(int *)(unaff_EBP - 0x2b14);
                  *puVar19 = 0x3e800000;
                  if (*(char *)(iVar8 + 0x13c0) == '\0') {
                    bVar3 = FUN_0040f520(iVar8);
                    *(undefined1 *)(unaff_EBP - 0x2c08) = 0;
                    if (bVar3) goto LAB_0053a28f;
                  }
                  else {
LAB_0053a28f:
                    *(undefined1 *)(unaff_EBP - 0x2c08) = 1;
                  }
                  pvVar26 = *(void **)(unaff_EBP - 0x2b14);
                  fVar54 = FUN_0040f8f0((int)pvVar26,(uint)*(byte *)((int)pvVar26 + 0x68));
                  pfVar29 = *(float **)(unaff_EBP - 0x2bb8);
                  *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
                  fVar54 = FUN_004024e0(*pfVar29 / *pfVar28);
                  FUN_00401610((void *)(unaff_EBP - 0xe0),(float)fVar54);
                  FUN_00401610((void *)(unaff_EBP - 0xe0),*(float *)(unaff_EBP - 0x2b1c));
                  bVar6 = *(byte *)((int)pvVar26 + 0x68);
                  if (((bVar6 == 0x57) || (bVar6 == 0x58)) ||
                     ((bVar6 == 0x1e || (((bVar6 == 0x1f || (bVar6 == 0x20)) || (bVar6 == 0x21))))))
                  {
                    fVar54 = FUN_00409d10((uint)bVar6);
                    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
                    fVar54 = FUN_00411ad0(pvVar26);
                    fVar56 = *(float *)(unaff_EBP - 0x2b1c);
                    *(float *)(unaff_EBP - 0x2b48) = (float)fVar54;
                    *(float *)(unaff_EBP - 0x2b1c) = fVar56 * *(float *)(unaff_EBP - 0x2b48);
                    iVar8 = rand();
                    fVar56 = (1.25 - ((float)iVar8 * 0.5) / 32767.0) *
                             *(float *)(unaff_EBP - 0x2b1c) * 1.0;
                  }
                  else {
                    *(undefined4 *)(unaff_EBP - 0x2b90) = *(undefined4 *)((int)pvVar26 + 0x13b4);
                    fVar54 = FUN_00409d10((uint)bVar6);
                    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
                    fVar54 = FUN_00408f70(pvVar26);
                    fVar56 = *(float *)(unaff_EBP - 0x2b90);
                    *(float *)(unaff_EBP - 0x2b48) = (float)fVar54;
                    *(float *)(unaff_EBP - 0x2b1c) =
                         *(float *)(unaff_EBP - 0x2b1c) * *(float *)(unaff_EBP - 0x2b48) *
                         (fVar56 * fVar56 * 5.0 + *(float *)(unaff_EBP - 0x2b5c));
                    iVar8 = rand();
                    fVar56 = ((1.25 - ((float)iVar8 * 0.5) / 32767.0) + 0.0) *
                             *(float *)(unaff_EBP - 0x2b1c);
                  }
                  cVar4 = *(char *)(unaff_EBP - 0x2c08);
                  *(float *)(unaff_EBP - 0x2b20) = fVar56;
                  if (cVar4 != '\0') {
                    *(float *)(unaff_EBP - 0x2b20) = fVar56 * 2.0;
                  }
                  iVar8 = *(int *)(unaff_EBP - 0x2b14);
                  bVar3 = FUN_00530540(iVar8 + 0x11ac);
                  if ((!bVar3) ||
                     (*(undefined1 *)(unaff_EBP - 0x2b31) = 1, 0 < *(int *)(iVar8 + 300))) {
                    *(undefined1 *)(unaff_EBP - 0x2b31) = 0;
                  }
                  puVar25 = *(uint **)(unaff_EBP - 0x2b98);
                  FUN_00530690((void *)(iVar8 + 0x11ac),(undefined4 *)(unaff_EBP - 0x350c),puVar25);
                  iVar8 = *(int *)(unaff_EBP - 0x2b14);
                  *(undefined1 *)(iVar8 + 0x13b8) = 1;
                  bVar6 = *(byte *)(iVar8 + 0x68);
                  if (((bVar6 == 0x1e) || (bVar6 == 0x1f)) || ((bVar6 == 0x20 || (bVar6 == 0x21))))
                  {
                    cVar4 = '\x01';
                  }
                  else {
                    cVar4 = '\0';
                  }
                  pvVar26 = *(void **)(unaff_EBP - 0x2b14);
                  fVar56 = *(float *)(unaff_EBP - 0x2b64);
                  cVar4 = FUN_004cfd50(*(void **)(unaff_EBP - 0x2b18),fVar56,pvVar26,
                                       *(float *)(unaff_EBP - 0x2b20),
                                       (char)*(undefined4 *)(unaff_EBP - 0x2c08),
                                       (char)*(undefined4 *)(unaff_EBP - 0x2c04),
                                       *(float *)((int)pvVar26 + 0x13b4),(int)pvVar26 + 0x10,
                                       (float *)(unaff_EBP - 0xe0),
                                       *(undefined4 **)(unaff_EBP - 0x2b28),
                                       (undefined4 *)(unaff_EBP - 0x2be8),cVar4,(uint)bVar6,0,'\x01'
                                      );
                  if (cVar4 != '\0') {
                    pvVar26 = *(void **)(unaff_EBP - 0x2b14);
                    if (*(char *)((int)pvVar26 + 0x68) == '\x1e') {
                      bVar3 = FUN_0040f220(pvVar26,0.25);
                      pvVar26 = *(void **)(unaff_EBP - 0x2b14);
                      if (bVar3) {
                        if (*(char *)((int)pvVar26 + 0x141) == '\0') {
                          FUN_004029b0((undefined1 *)(unaff_EBP - 0x2f94));
                          pvVar26 = *(void **)(unaff_EBP - 0x2b14);
                          *(undefined1 *)(unaff_EBP - 0x2f94) = 9;
                          *(undefined4 *)(unaff_EBP - 0x2f8c) = 30000;
                          FUN_00411740(pvVar26,(char *)(unaff_EBP - 0x2f94));
                          FUN_004063d0(unaff_EBP - 0x30ac);
                          uVar66 = *(undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 8);
                          uVar65 = *(undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 0xc);
                          *(undefined8 *)(unaff_EBP - 0x309c) = *(undefined8 *)(unaff_EBP - 0x2f94);
                          uVar1 = *(undefined8 *)(unaff_EBP - 0x2f8c);
                          *(undefined4 *)(unaff_EBP - 0x30a8) = uVar65;
                          *(undefined4 *)(unaff_EBP - 0x30a0) = uVar65;
                          iVar8 = *(int *)(unaff_EBP - 0x2b28);
                          *(undefined4 *)(unaff_EBP - 0x30ac) = uVar66;
                          *(undefined4 *)(unaff_EBP - 0x30a4) = uVar66;
                          *(undefined8 *)(unaff_EBP - 0x3094) = uVar1;
                          uVar66 = *(undefined4 *)(unaff_EBP - 0x2f80);
                          *(undefined4 *)(unaff_EBP - 0x308c) = *(undefined4 *)(unaff_EBP - 0x2f84);
                          *(undefined4 *)(unaff_EBP - 0x3088) = uVar66;
                          FUN_00411040((void *)(iVar8 + 0x58),(undefined8 *)(unaff_EBP - 0x30ac));
                          FUN_004c8530(unaff_EBP - 0x9c8);
                          iVar8 = *(int *)(unaff_EBP - 0x2b14);
                          *(undefined4 *)(unaff_EBP - 0x9bc) = 0x2f;
                          FUN_00402550((void *)(unaff_EBP - 0x9c8),(longlong *)(iVar8 + 0x10));
                          FUN_00428590((void *)(*(int *)(unaff_EBP - 0x2b28) + 8),
                                       (undefined4 *)(unaff_EBP - 0x9c8));
                        }
                        pvVar26 = *(void **)(unaff_EBP - 0x2b14);
                      }
                    }
                    if (*(char *)(unaff_EBP - 0x2b31) != '\0') {
                      *(int *)((int)pvVar26 + 0x70) = *(int *)((int)pvVar26 + 0x70) + 1;
                      FUN_004103a0((int)pvVar26);
                      *(undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 0x74) = 0;
                    }
                    cVar4 = *(char *)(unaff_EBP - 0x2c04);
                    iVar8 = *(int *)(unaff_EBP - 0x2b14);
                    if ((((cVar4 != '\0') && (*(char *)(iVar8 + 0x140) == '\x04')) &&
                        (*(char *)(iVar8 + 0x141) == '\0')) &&
                       (fVar57 = *(float *)(iVar8 + 0x13b4) + *(float *)(iVar8 + 0x1190),
                       *(float *)(iVar8 + 0x1190) = fVar57, 1.0 < fVar57)) {
                      *(undefined4 *)(iVar8 + 0x1190) = 0x3f800000;
                    }
                    if (((*(char *)(*(int *)(unaff_EBP - 0x2b18) + 0xb4) == '\0') ||
                        (iVar8 == *(int *)(*(int *)(unaff_EBP - 0x2b18) + 0xb8))) &&
                       (((*(char *)(unaff_EBP - 0x2b29) == '\0' &&
                         ((cVar4 == '\0' && (*(char *)(iVar8 + 0x68) != '\x1e')))) &&
                        (*(char *)(iVar8 + 0x68) != ' ')))) {
                      iVar17 = rand();
                      iVar8 = *(int *)(unaff_EBP - 0x2b14);
                      *(float *)(unaff_EBP - 0x2b1c) =
                           (1.0 - ((float)iVar17 * 2.0) / 32767.0) * 0.05 + 0.1;
                      iVar8 = FUN_004084b0(iVar8);
                      *(float *)(unaff_EBP - 0x2b40) =
                           ((float)iVar8 / 500.0) * *(float *)(unaff_EBP - 0x2b1c);
                      uVar27 = rand();
                      uVar27 = uVar27 & 0x80000007;
                      bVar3 = uVar27 == 0;
                      if ((int)uVar27 < 0) {
                        bVar3 = (uVar27 - 1 | 0xfffffff8) == 0xffffffff;
                      }
                      fVar57 = *(float *)(unaff_EBP - 0x2b40);
                      if (bVar3) {
                        fVar57 = fVar57 * 1.5;
                      }
                      iVar8 = *(int *)(unaff_EBP - 0x2b14);
                      fVar57 = *(float *)(iVar8 + 0x170) + fVar57;
                      *(float *)(iVar8 + 0x170) = fVar57;
                      if (1.0 < fVar57) {
                        *(undefined4 *)(iVar8 + 0x170) = 0x3f800000;
                      }
                    }
                    *(undefined1 *)(unaff_EBP - 0x2b29) = 1;
                  }
                }
                cVar4 = *(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x68);
                if ((((cVar4 == '!') || (cVar4 == ' ')) && (*(char *)(unaff_EBP - 0x2c70) != '\0'))
                   && ((uVar66 = FUN_004d18c0(*(int *)(unaff_EBP - 0x2b14),(int)fVar56),
                       (char)uVar66 == '\0' &&
                       (*(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x141) == '\x01')))) {
                  FUN_00422a90(unaff_EBP - 0xd28);
                  FUN_00402a40((void *)(unaff_EBP - 0xd08),(undefined4 *)((int)fVar56 + 0x10));
                  iVar8 = rand();
                  pvVar26 = *(void **)(unaff_EBP - 0x2b14);
                  *(float *)(unaff_EBP - 0x2b48) = 1.25 - ((float)iVar8 * 0.5) / 32767.0;
                  fVar54 = FUN_00411ad0(pvVar26);
                  *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
                  iVar8 = *(int *)(unaff_EBP - 0x2b14);
                  *(float *)(unaff_EBP - 0xd18) =
                       *(float *)(unaff_EBP - 0x2b1c) * *(float *)(unaff_EBP - 0x2b48) * 1.0 * -0.1;
                  bVar3 = FUN_0040f520(iVar8);
                  iVar8 = *(int *)(unaff_EBP - 0x2b14);
                  *(bool *)(unaff_EBP - 0xd14) = bVar3;
                  *(undefined4 *)(unaff_EBP - 0xd28) = *(undefined4 *)(iVar8 + 8);
                  pvVar26 = *(void **)(unaff_EBP - 0x2b28);
                  *(undefined4 *)(unaff_EBP - 0xd24) = *(undefined4 *)(iVar8 + 0xc);
                  *(uint *)(unaff_EBP - 0xd20) = *puVar25;
                  *(uint *)(unaff_EBP - 0xd1c) = puVar25[1];
                  FUN_00428400(pvVar26,(undefined4 *)(unaff_EBP - 0xd28));
                  FUN_004c8530(unaff_EBP - 0x590);
                  fVar57 = *(float *)(unaff_EBP - 0x2b14);
                  FUN_00402550((void *)(unaff_EBP - 0x590),(longlong *)((int)fVar57 + 0x10));
                  iVar8 = *(int *)(unaff_EBP - 0x2b28);
                  *(undefined4 *)(unaff_EBP - 0x580) = 0x3f800000;
                  *(undefined4 *)(unaff_EBP - 0x584) = 0x2a;
                  FUN_00428590((void *)(iVar8 + 8),(undefined4 *)(unaff_EBP - 0x590));
                  pvVar26 = *(void **)(unaff_EBP - 0x2b18);
                  if ((*(char *)((int)pvVar26 + 0xb4) == '\0') ||
                     ((fVar57 == *(float *)((int)pvVar26 + 0xb8) &&
                      (fVar56 == *(float *)((int)pvVar26 + 0xb8))))) {
                    FUN_004cea80(pvVar26,(uint *)(unaff_EBP - 0xd28),*(void **)(unaff_EBP - 0x2b28),
                                 (undefined4 *)(unaff_EBP - 0x2be8));
                  }
                }
              }
            }
LAB_0053a971:
            pvVar50 = *(void **)(unaff_EBP - 0x2b14);
          }
LAB_0053a977:
          FUN_00407a30((void *)(unaff_EBP - 0x2c78),(int *)(unaff_EBP - 0x2fb4));
          piVar53 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),
                                        (undefined4 *)(unaff_EBP - 0x2d88));
          bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c78),piVar53);
        } while (bVar3);
        if (*(char *)(unaff_EBP - 0x2b29) != '\0') {
          iVar8 = *(int *)(unaff_EBP - 0x2b14);
          if ((*(char *)(iVar8 + 0x991) != '\r') &&
             ((*(char *)(iVar8 + 0xaa8) == '\0' || (*(char *)(iVar8 + 0x990) == '\x03')))) {
            FUN_004084b0(iVar8);
            FUN_00537cef();
            return;
          }
          goto code_r0x00537cef;
        }
      }
      goto LAB_0053b968;
    case '\b':
      pvVar50 = *(void **)(unaff_EBP - 0x2b14);
      if (((*(char *)((int)pvVar26 + 0xb4) != '\0') || (*(char *)((int)pvVar50 + 0x60) == '\0')) &&
         (pvVar50 != *(void **)((int)pvVar26 + 0xb8))) break;
      iVar8 = FUN_00407db0(pvVar50,0xffffffff);
      if (*(int *)((int)*(void **)(unaff_EBP - 0x2b14) + 0x6c) <= iVar8) {
        iVar17 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
        iVar8 = *(int *)(unaff_EBP - 0x2b14);
        if (iVar17 < *(int *)(iVar8 + 0x6c) + *(int *)(unaff_EBP - 0x2b24)) {
          FUN_004c8530(unaff_EBP - 0x7e8);
          FUN_00402550((void *)(unaff_EBP - 0x7e8),(longlong *)(iVar8 + 0x10));
          iVar17 = rand();
          iVar8 = *(int *)(unaff_EBP - 0x2b28);
          *(undefined4 *)(unaff_EBP - 0x7dc) = 0x10;
          *(float *)(unaff_EBP - 0x7d8) = ((float)iVar17 * 0.25) / 32767.0 + 1.0;
          FUN_00428590((void *)(iVar8 + 8),(undefined4 *)(unaff_EBP - 0x7e8));
        }
      }
      iVar8 = *(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c);
      if (iVar8 / 200 != (iVar8 + *(int *)(unaff_EBP - 0x2b24)) / 200) {
        FUN_004c8530(unaff_EBP - 0x698);
        FUN_00402550((void *)(unaff_EBP - 0x698),(longlong *)(*(int *)(unaff_EBP - 0x2b14) + 0x10));
        iVar8 = *(int *)(unaff_EBP - 0x2b28);
        fVar56 = *(float *)(*(int *)(unaff_EBP - 0x2b14) + 0x144);
        *(undefined4 *)(unaff_EBP - 0x68c) = 0x37;
        *(float *)(unaff_EBP - 0x688) = fVar56 * 0.5 + 1.0;
        FUN_00428590((void *)(iVar8 + 8),(undefined4 *)(unaff_EBP - 0x698));
      }
      goto LAB_00537cf5;
    case '\x16':
    case '\x17':
    case '\x1a':
      pvVar50 = *(void **)(unaff_EBP - 0x2b14);
      if (((*(char *)((int)pvVar26 + 0xb4) != '\0') || (*(char *)((int)pvVar50 + 0x60) == '\0')) &&
         (pvVar50 != *(void **)((int)pvVar26 + 0xb8))) goto LAB_00537d01;
      iVar8 = FUN_00407db0(pvVar50,0xffffffff);
      if ((*(int *)((int)pvVar50 + 0x6c) <= iVar8) &&
         (iVar8 = FUN_00407db0(pvVar50,0xffffffff),
         iVar8 < *(int *)((int)pvVar50 + 0x6c) + *(int *)(unaff_EBP - 0x2b24))) {
        fVar54 = FUN_0040fb20((int)pvVar50,(uint)*(byte *)((int)pvVar50 + 0x68),-1);
        *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
        if (*(float *)(unaff_EBP - 0x2b1c) <= 0.0) {
          fVar56 = *(float *)((int)pvVar50 + 0x170) - *(float *)((int)pvVar50 + 0x144);
        }
        else {
          fVar54 = FUN_0040fb20((int)pvVar50,(uint)*(byte *)((int)pvVar50 + 0x68),-1);
          fVar56 = *(float *)((int)pvVar50 + 0x170);
          *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
          fVar56 = fVar56 - *(float *)(unaff_EBP - 0x2b1c);
        }
        *(float *)((int)pvVar50 + 0x170) = fVar56;
        if (*(float *)((int)pvVar50 + 0x170) <= 0.0 && *(float *)((int)pvVar50 + 0x170) != 0.0) {
          *(undefined4 *)((int)pvVar50 + 0x170) = 0;
        }
        *(undefined4 *)((int)pvVar50 + 0x13b4) = *(undefined4 *)((int)pvVar50 + 0x144);
        *(undefined4 *)((int)pvVar50 + 0x144) = 0;
      }
      iVar8 = FUN_00407db0(pvVar50,0xffffffff);
      if (iVar8 < *(int *)((int)pvVar50 + 0x6c)) {
        iVar40 = *(int *)(unaff_EBP - 0x2b24);
LAB_0053cf44:
        if ((*(char *)((int)pvVar50 + 0x68) == '\x1a') && (0.0 < *(float *)((int)pvVar50 + 0x13b4)))
        {
          iVar8 = FUN_00407db0(pvVar50,0xffffffff);
          if (iVar8 + 300 < *(int *)((int)pvVar50 + 0x6c)) goto LAB_00537cfb;
          iVar8 = FUN_00407db0(pvVar50,0xffffffff);
          iVar40 = *(int *)(unaff_EBP - 0x2b24);
          if (iVar8 + 300 < *(int *)((int)pvVar50 + 0x6c) + iVar40) goto LAB_0053cf9b;
        }
        goto LAB_00537d01;
      }
      iVar8 = FUN_00407db0(pvVar50,0xffffffff);
      iVar40 = *(int *)(unaff_EBP - 0x2b24);
      if (*(int *)((int)pvVar50 + 0x6c) + iVar40 <= iVar8) goto LAB_0053cf44;
LAB_0053cf9b:
      FUN_00422890((undefined4 *)(unaff_EBP - 0x578));
      pfVar28 = FUN_00412670((void *)((int)pvVar50 + 0x160),(float *)(unaff_EBP - 0x19e8));
      puVar19 = (undefined4 *)FUN_004e1520((float *)(unaff_EBP - 0x13a0),100.0,pfVar28);
      FUN_00401060((void *)(unaff_EBP - 0x53c),puVar19);
      bVar6 = *(byte *)((int)pvVar50 + 0x68);
      fVar56 = *(float *)((int)pvVar50 + 0x13b4);
      *(undefined4 *)(unaff_EBP - 0x510) = 0;
      *(undefined4 *)(unaff_EBP - 0x52c) = 0x3f000000;
      if (bVar6 == 0x1a) {
        *(float *)(unaff_EBP - 0x2b40) = fVar56 * 0.2;
        *(float *)(unaff_EBP - 0x524) = fVar56 * 0.2;
        *(float *)(unaff_EBP - 0x52c) = fVar56 * 2.0 + 2.0;
      }
      else {
        *(float *)(unaff_EBP - 0x2b40) = fVar56;
        *(float *)(unaff_EBP - 0x524) = fVar56;
      }
      fVar54 = FUN_0040fb20((int)pvVar50,(uint)bVar6,-1);
      *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
      if (*(float *)(unaff_EBP - 0x2b1c) <= 0.0) {
        uVar66 = *(undefined4 *)(unaff_EBP - 0x2b40);
      }
      else {
        fVar54 = FUN_0040fb20((int)pvVar50,(uint)*(byte *)((int)pvVar50 + 0x68),-1);
        *(float *)(unaff_EBP - 0x524) = (float)fVar54;
        uVar66 = *(undefined4 *)(unaff_EBP - 0x524);
      }
      *(undefined4 *)(unaff_EBP - 0x520) = uVar66;
      if ((0.0 < *(float *)((int)pvVar50 + 0x13b4)) ||
         (cVar4 = *(char *)((int)pvVar50 + 0x68), *(undefined1 *)(unaff_EBP - 0x51c) = 0,
         cVar4 == '\x17')) {
        *(undefined1 *)(unaff_EBP - 0x51c) = 1;
      }
      FUN_00402a40((void *)(unaff_EBP - 0x560),(undefined4 *)((int)pvVar50 + 0x10));
      pvVar26 = *(void **)(unaff_EBP - 0x2b14);
      *(undefined4 *)(unaff_EBP - 0x578) = *(undefined4 *)((int)pvVar26 + 8);
      *(undefined4 *)(unaff_EBP - 0x574) = *(undefined4 *)((int)pvVar26 + 0xc);
      FUN_00401060((void *)(unaff_EBP - 0x570),(undefined4 *)((int)pvVar26 + 0x1b0));
      if ((*(char *)(unaff_EBP - 0x51c) != '\0') &&
         (puVar19 = FUN_0040ef90(pvVar26,10), puVar19 != (undefined4 *)0x0)) {
        FUN_004029b0((undefined1 *)(unaff_EBP - 0x2f34));
        *(undefined1 *)(unaff_EBP - 0x2f34) = 10;
        *(undefined4 *)(unaff_EBP - 0x2f2c) = 0;
        FUN_00411740(pvVar26,(char *)(unaff_EBP - 0x2f34));
        FUN_004063d0(unaff_EBP - 0x319c);
        uVar66 = *(undefined4 *)((int)pvVar26 + 8);
        uVar1 = *(undefined8 *)(unaff_EBP - 0x2f34);
        uVar65 = *(undefined4 *)((int)pvVar26 + 0xc);
        *(undefined4 *)(unaff_EBP - 0x319c) = uVar66;
        *(undefined4 *)(unaff_EBP - 0x3194) = uVar66;
        *(undefined8 *)(unaff_EBP - 0x318c) = uVar1;
        iVar8 = *(int *)(unaff_EBP - 0x2b28);
        *(undefined8 *)(unaff_EBP - 0x3184) = *(undefined8 *)(unaff_EBP - 0x2f2c);
        uVar1 = *(undefined8 *)(unaff_EBP - 0x2f24);
        *(undefined4 *)(unaff_EBP - 0x3198) = uVar65;
        *(undefined4 *)(unaff_EBP - 0x3190) = uVar65;
        *(undefined8 *)(unaff_EBP - 0x317c) = uVar1;
        FUN_00411040((void *)(iVar8 + 0x58),(undefined8 *)(unaff_EBP - 0x319c));
      }
      bVar6 = *(byte *)((int)pvVar26 + 0x68);
      if (bVar6 == 0x1a) {
        uVar66 = *(undefined4 *)((int)pvVar26 + 0xb0);
        *(undefined4 *)(unaff_EBP - 0x518) = 2;
        *(undefined4 *)(unaff_EBP - 0x528) = uVar66;
      }
      else {
        *(undefined4 *)(unaff_EBP - 0x518) = 0;
      }
      *(undefined4 *)(unaff_EBP - 0x2b40) = 0x40a00000;
      if (bVar6 == 0x1a) {
        *(undefined4 *)(unaff_EBP - 0x2b40) = 0x3f800000;
      }
      *(undefined4 *)(unaff_EBP - 0x2b20) = 0x3f800000;
      if (0.0 < *(float *)(unaff_EBP - 0x524)) {
        *(undefined4 *)(unaff_EBP - 0x2b20) = 0x3dcccccd;
      }
      if (bVar6 == 0x17) {
        *(undefined4 *)(unaff_EBP - 0x2b20) = 0;
      }
      *(undefined4 *)(unaff_EBP - 0x2b90) = *(undefined4 *)((int)pvVar26 + 0x13b4);
      fVar54 = FUN_00409d10((uint)bVar6);
      *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
      fVar54 = FUN_00408f70(pvVar26);
      fVar56 = *(float *)(unaff_EBP - 0x2b90);
      *(float *)(unaff_EBP - 0x2b48) = (float)fVar54;
      *(float *)(unaff_EBP - 0x2b1c) =
           *(float *)(unaff_EBP - 0x2b1c) * *(float *)(unaff_EBP - 0x2b48) *
           (fVar56 * fVar56 * *(float *)(unaff_EBP - 0x2b40) + *(float *)(unaff_EBP - 0x2b20));
      iVar17 = rand();
      iVar8 = *(int *)(unaff_EBP - 0x2b18);
      *(float *)(unaff_EBP - 0x530) =
           ((1.25 - ((float)iVar17 * 0.5) / 32767.0) + 0.0) * *(float *)(unaff_EBP - 0x2b1c);
      FUN_00428360((void *)(iVar8 + 0x14),(undefined4 *)(unaff_EBP - 0x578));
      FUN_00428360((void *)(*(int *)(unaff_EBP - 0x2b28) + 0x20),(undefined4 *)(unaff_EBP - 0x578));
      FUN_004c8530(unaff_EBP - 0x180);
      FUN_00402550((void *)(unaff_EBP - 0x180),(longlong *)((int)pvVar50 + 0x10));
      pvVar50 = *(void **)(unaff_EBP - 0x2b14);
      cVar4 = *(char *)((int)pvVar50 + 0x68);
      if ((cVar4 == '\x16') || (cVar4 == '\x17')) {
        iVar8 = rand();
        fVar56 = ((float)iVar8 * 0.5) / 32767.0;
        if (*(char *)(unaff_EBP - 0x51c) == '\0') {
          fVar56 = fVar56 + 2.0;
          goto LAB_0053d3c2;
        }
        fVar56 = fVar56 + 1.0;
        *(undefined4 *)(unaff_EBP - 0x174) = 0x16;
      }
      else if (cVar4 == '\x1a') {
        iVar8 = rand();
        fVar56 = ((float)iVar8 * 0.51) / 32767.0 + 0.7;
LAB_0053d3c2:
        *(undefined4 *)(unaff_EBP - 0x174) = 0xf;
      }
      else {
        iVar8 = rand();
        *(undefined4 *)(unaff_EBP - 0x174) = 0x16;
        fVar56 = ((float)iVar8 * 0.5) / 32767.0 + 1.0;
      }
      iVar8 = *(int *)(unaff_EBP - 0x2b28);
      *(float *)(unaff_EBP - 0x170) = fVar56;
      FUN_00428590((void *)(iVar8 + 8),(undefined4 *)(unaff_EBP - 0x180));
      pvVar26 = *(void **)(unaff_EBP - 0x2b18);
      goto LAB_00537cfb;
    case '\x18':
    case '\x19':
    case '\x1b':
    case '$':
    case ';':
    case '?':
    case '@':
      iVar8 = *(int *)(unaff_EBP - 0x2b14);
      if (((*(char *)((int)pvVar26 + 0xb4) == '\0') && (*(char *)(iVar8 + 0x60) != '\0')) ||
         (iVar8 == *(int *)((int)pvVar26 + 0xb8))) {
        if (*(int *)(iVar8 + 0x6c) / 200 == (*(int *)(iVar8 + 0x6c) + iVar40) / 200)
        goto LAB_00537cf5;
        FUN_004c8530(unaff_EBP - 0x740);
        pvVar50 = *(void **)(unaff_EBP - 0x2b14);
        FUN_00402550((void *)(unaff_EBP - 0x740),(longlong *)((int)pvVar50 + 0x10));
        fVar56 = *(float *)((int)pvVar50 + 0x144);
        iVar8 = *(int *)(unaff_EBP - 0x2b28);
        *(undefined4 *)(unaff_EBP - 0x734) = 0x37;
        *(float *)(unaff_EBP - 0x730) = fVar56 * 0.5 + 1.0;
        FUN_00428590((void *)(iVar8 + 8),(undefined4 *)(unaff_EBP - 0x740));
        goto LAB_00537cfb;
      }
      break;
    case '\x1c':
    case '^':
    case '_':
      pvVar50 = *(void **)(unaff_EBP - 0x2b14);
      if (((*(char *)((int)pvVar26 + 0xb4) == '\0') && (*(char *)((int)pvVar50 + 0x60) != '\0')) ||
         (pvVar50 == *(void **)((int)pvVar26 + 0xb8))) {
        if (cVar4 == 'h') {
          if (*(int *)((int)pvVar50 + 0x6c) == 0) {
            fVar56 = *(float *)((int)pvVar50 + 0x170) - *(float *)((int)pvVar50 + 0x144);
            *(float *)((int)pvVar50 + 0x170) = fVar56;
            if (fVar56 < 0.0) {
              *(undefined4 *)((int)pvVar50 + 0x170) = 0;
            }
            pvVar34 = *(void **)(unaff_EBP - 0x2b14);
            *(undefined4 *)((int)pvVar34 + 0x13b4) = *(undefined4 *)((int)pvVar50 + 0x144);
            *(undefined4 *)((int)pvVar34 + 0x144) = 0;
            pvVar50 = pvVar34;
          }
        }
        else {
          if (cVar4 == '\x1c') {
            *(float *)((int)pvVar50 + 0x170) =
                 *(float *)((int)pvVar50 + 0x170) - *(float *)(unaff_EBP - 0x2b88) * 0.0002;
          }
          else {
            iVar8 = FUN_00407db0(pvVar50,0xffffffff);
            pvVar50 = *(void **)(unaff_EBP - 0x2b14);
            if (iVar8 < *(int *)((int)pvVar50 + 0x6c)) {
LAB_0053bc5a:
              iVar40 = *(int *)(unaff_EBP - 0x2b24);
            }
            else {
              iVar8 = FUN_00407db0(pvVar50,0xffffffff);
              iVar40 = *(int *)(unaff_EBP - 0x2b24);
              if (iVar8 < *(int *)((int)pvVar50 + 0x6c) + iVar40) {
                fVar54 = FUN_0040fb20((int)pvVar50,(uint)*(byte *)((int)pvVar50 + 0x68),-1);
                *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
                *(float *)((int)pvVar50 + 0x170) =
                     *(float *)((int)pvVar50 + 0x170) - *(float *)(unaff_EBP - 0x2b1c);
                puVar19 = FUN_0040ef90(pvVar50,9);
                if (puVar19 != (undefined4 *)0x0) {
                  FUN_004029b0((undefined1 *)(unaff_EBP - 0x2ed4));
                  *(undefined1 *)(unaff_EBP - 0x2ed4) = 9;
                  *(undefined4 *)(unaff_EBP - 0x2ecc) = 0;
                  FUN_00411740(pvVar50,(char *)(unaff_EBP - 0x2ed4));
                  FUN_004063d0(unaff_EBP - 0x314c);
                  uVar66 = *(undefined4 *)((int)pvVar50 + 0xc);
                  uVar65 = *(undefined4 *)((int)pvVar50 + 8);
                  *(undefined8 *)(unaff_EBP - 0x313c) = *(undefined8 *)(unaff_EBP - 0x2ed4);
                  uVar1 = *(undefined8 *)(unaff_EBP - 0x2ecc);
                  *(undefined4 *)(unaff_EBP - 0x3148) = uVar66;
                  *(undefined4 *)(unaff_EBP - 0x3140) = uVar66;
                  iVar8 = *(int *)(unaff_EBP - 0x2b28);
                  *(undefined4 *)(unaff_EBP - 0x314c) = uVar65;
                  *(undefined4 *)(unaff_EBP - 0x3144) = uVar65;
                  *(undefined8 *)(unaff_EBP - 0x3134) = uVar1;
                  *(undefined8 *)(unaff_EBP - 0x312c) = *(undefined8 *)(unaff_EBP - 0x2ec4);
                  FUN_00411040((void *)(iVar8 + 0x58),(undefined8 *)(unaff_EBP - 0x314c));
                }
                goto LAB_0053bc5a;
              }
            }
            pvVar50 = *(void **)(unaff_EBP - 0x2b14);
          }
          if (*(float *)((int)pvVar50 + 0x170) <= 0.0 && *(float *)((int)pvVar50 + 0x170) != 0.0) {
            *(undefined4 *)((int)pvVar50 + 0x170) = 0;
            break;
          }
        }
        iVar8 = FUN_00407db0(pvVar50,0xffffffff);
        pvVar50 = *(void **)(unaff_EBP - 0x2b14);
        iVar40 = *(int *)(unaff_EBP - 0x2b24);
        if (*(int *)((int)pvVar50 + 0x6c) + iVar40 < iVar8) goto LAB_00537d01;
        iVar8 = FUN_00407db0(pvVar50,0xffffffff);
        iVar17 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
        if (iVar8 + iVar17 <= *(int *)((int)*(void **)(unaff_EBP - 0x2b14) + 0x6c))
        goto LAB_00537cf5;
        iVar8 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
        pvVar50 = *(void **)(unaff_EBP - 0x2b14);
        if (*(int *)((int)pvVar50 + 0x6c) <= iVar8) {
          iVar8 = FUN_00407db0(pvVar50,0xffffffff);
          iVar40 = *(int *)(unaff_EBP - 0x2b24);
          if (*(int *)((int)pvVar50 + 0x6c) + iVar40 <= iVar8) goto LAB_0053bc91;
LAB_0053bd1c:
          puVar19 = (undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 0x160);
          *(undefined4 **)(unaff_EBP - 0x2b50) = puVar19;
          FUN_00401060((void *)(unaff_EBP - 0x40),puVar19);
          fVar54 = FUN_004021b0((float *)(unaff_EBP - 0x40));
          *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
          if (0.0 < *(float *)(unaff_EBP - 0x2b1c)) {
            FUN_00401fb0((float *)(unaff_EBP - 0x40));
          }
          FUN_00411800(*(void **)(unaff_EBP - 0x2b14),(uint *)(unaff_EBP - 0x314));
          uVar59 = 0x100000000;
          fVar56 = 200.0;
          pfVar28 = FUN_00412670(puVar19,(float *)(unaff_EBP - 0x1328));
          fVar54 = (float10)FUN_004d6730(*(void **)(unaff_EBP - 0x2b18),(uint *)(unaff_EBP - 0x314),
                                         pfVar28,fVar56,(char)uVar59,(char)(uVar59 >> 0x20));
          *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
          if (*(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x68) == 'h') {
            uVar66 = 0x41200000;
          }
          else {
            uVar66 = *(undefined4 *)(unaff_EBP - 0x2b1c);
          }
          piVar53 = (int *)(*(int *)(unaff_EBP - 0x2b14) + 0x11ac);
          *(undefined4 *)(unaff_EBP - 0x2b3c) = uVar66;
          *(int **)(unaff_EBP - 0x2b64) = piVar53;
          FUN_004f8520(piVar53);
          FUN_004f8520((int *)(*(int *)(unaff_EBP - 0x2b14) + 0x11b4));
          pvVar26 = *(void **)(unaff_EBP - 0x2b14);
          *(undefined1 *)(unaff_EBP - 0x2b29) = 0;
          if ((*(char *)((int)pvVar26 + 0x140) == '\x03') &&
             (*(char *)((int)pvVar26 + 0x141) == '\x01')) {
            iVar8 = FUN_00407db0(pvVar26,0xffffffff);
            if ((*(int *)((int)*(void **)(unaff_EBP - 0x2b14) + 0x6c) <= iVar8) &&
               (iVar8 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff),
               iVar8 < *(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c) + *(int *)(unaff_EBP - 0x2b24))
               ) {
              FUN_00422890((undefined4 *)(unaff_EBP - 0xb08));
              pvVar26 = *(void **)(unaff_EBP - 0x2b14);
              *(undefined4 *)(unaff_EBP - 0xaa8) = 3;
              *(undefined1 *)(unaff_EBP - 0xaac) = 0;
              *(undefined4 *)(unaff_EBP - 0xab4) = 0;
              *(undefined4 *)(unaff_EBP - 0xab0) = 0;
              fVar54 = FUN_00411ad0(pvVar26);
              *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
              fVar56 = *(float *)(unaff_EBP - 0x2b1c);
              *(undefined4 *)(unaff_EBP - 0xb08) = *(undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 8)
              ;
              *(undefined4 *)(unaff_EBP - 0xb04) =
                   *(undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 0xc);
              *(float *)(unaff_EBP - 0xac0) = fVar56 * 0.1;
              *(undefined4 *)(unaff_EBP - 0xabc) = 0x40800000;
              *(undefined1 *)(unaff_EBP - 0xaa4) = 2;
              pfVar28 = FUN_00412670(puVar19,(float *)(unaff_EBP - 0x1a78));
              FUN_004e1520((float *)(unaff_EBP - 0x1340),*(float *)(unaff_EBP - 0x2b3c),pfVar28);
              FUN_00402510(unaff_EBP - 0x194c);
              puVar25 = FUN_00402cb0((void *)(unaff_EBP - 0x314),(uint *)(unaff_EBP - 0x2154),
                                     (uint *)(unaff_EBP - 0x194c));
              FUN_00402a40((void *)(unaff_EBP - 0xaf0),puVar25);
              *(undefined4 *)(unaff_EBP - 0xab8) = 0x3f800000;
              *(undefined4 *)(unaff_EBP - 0xaa0) = 0;
              puVar32 = FUN_00401080((void *)(unaff_EBP - 0x16a0),0,0,0);
              FUN_00401060((void *)(unaff_EBP - 0xacc),puVar32);
              FUN_00428360((void *)(*(int *)(unaff_EBP - 0x2b18) + 0x14),
                           (undefined4 *)(unaff_EBP - 0xb08));
              FUN_00428360((void *)(*(int *)(unaff_EBP - 0x2b28) + 0x20),
                           (undefined4 *)(unaff_EBP - 0xb08));
            }
          }
          fVar56 = *(float *)(unaff_EBP - 0x2b3c);
          *(undefined4 *)(unaff_EBP - 0x2b40) = 0;
          if (0.0 < fVar56) {
            pvVar26 = *(void **)(unaff_EBP - 0x2b6c);
            *(undefined4 *)(unaff_EBP - 0x2b54) = 0;
            do {
              FUN_00428070(pvVar26,(undefined4 *)(unaff_EBP - 0x2c94));
              piVar53 = (int *)FUN_00530550(pvVar26,(undefined4 *)(unaff_EBP - 0x2ce4));
              bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c94),piVar53);
              if (bVar3) {
                do {
                  iVar8 = FUN_00402bc0((int *)(unaff_EBP - 0x2c94));
                  fVar56 = *(float *)(iVar8 + 8);
                  if ((fVar56 != 0.0) && (fVar56 != *(float *)(unaff_EBP - 0x2b14))) {
                    if (((*(int *)((int)fVar56 + 8) !=
                          *(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x11c0)) ||
                        (*(int *)((int)fVar56 + 0xc) !=
                         *(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x11c4))) &&
                       (0.0 < *(float *)((int)fVar56 + 0x16c))) {
                      piVar53 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b64),
                                                    (undefined4 *)(unaff_EBP - 0x2fbc));
                      pvVar26 = (void *)FUN_00530600(*(void **)(unaff_EBP - 0x2b64),
                                                     (int *)(unaff_EBP - 0x3068),
                                                     (uint *)((int)fVar56 + 8));
                      bVar3 = FUN_0042c6f0(pvVar26,piVar53);
                      if ((!bVar3) && (*(int *)((int)fVar56 + 0x128) == 0)) {
                        FUN_004013d0((void *)((int)fVar56 + 0x80),0);
                        puVar25 = (uint *)(unaff_EBP - 0x353c);
                        puVar16 = FUN_00402c50((void *)(unaff_EBP - 0x314),
                                               (uint *)(unaff_EBP - 0x2424),
                                               (uint *)((int)fVar56 + 0x10));
                        ppVar30 = (pair<unsigned___int64,unsigned___int64> *)FUN_0041cba0(puVar16);
                        ppVar30 = std::pair<unsigned___int64,unsigned___int64>::
                                  operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                                            ((pair<unsigned___int64,unsigned___int64> *)
                                             (unaff_EBP - 0x1bac),ppVar30);
                        puVar25 = FUN_0041ce90(ppVar30,puVar25);
                        uVar66 = FUN_004dade0(puVar25);
                        if ((char)uVar66 != '\0') {
                          puVar25 = (uint *)FUN_004e2320((void *)((int)fVar56 + 0x10),2);
                          piVar53 = (int *)(unaff_EBP - 0x354c);
                          pvVar26 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x314),2);
                          plVar31 = (longlong *)FUN_00401490(pvVar26,piVar53,puVar25);
                          fVar54 = FUN_00401420(plVar31);
                          fVar54 = FUN_00401ca0((float)fVar54);
                          *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
                          pfVar28 = (float *)FUN_004013d0((void *)((int)fVar56 + 0x80),2);
                          fVar57 = *pfVar28 * 0.5 + 1.0;
                          if (*(float *)(unaff_EBP - 0x2b1c) <= fVar57 &&
                              fVar57 != *(float *)(unaff_EBP - 0x2b1c)) {
                            FUN_00530690(*(void **)(unaff_EBP - 0x2b64),
                                         (undefined4 *)(unaff_EBP - 0x355c),
                                         (uint *)((int)fVar56 + 8));
                            bVar3 = FUN_0040f520(*(int *)(unaff_EBP - 0x2b14));
                            *(bool *)(unaff_EBP - 0x2ba8) = bVar3;
                            puVar25 = FUN_00402c50((void *)((int)fVar56 + 0x10),
                                                   (uint *)(unaff_EBP - 0x2184),
                                                   (uint *)(*(int *)(unaff_EBP - 0x2b14) + 0x10));
                            FUN_00402550((void *)(unaff_EBP - 0x2a8),(longlong *)puVar25);
                            puVar19 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 0x2a8),2);
                            *puVar19 = 0;
                            fVar54 = FUN_004021b0((float *)(unaff_EBP - 0x2a8));
                            *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
                            if (0.01 < *(float *)(unaff_EBP - 0x2b1c)) {
                              FUN_00401fb0((float *)(unaff_EBP - 0x2a8));
                            }
                            *puVar19 = 0x3e800000;
                            iVar8 = rand();
                            pvVar26 = *(void **)(unaff_EBP - 0x2b14);
                            *(float *)(unaff_EBP - 0x2b48) = ((float)iVar8 * 0.05) / 32767.0 + 1.0;
                            fVar54 = FUN_00411ad0(pvVar26);
                            *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
                            iVar8 = *(int *)(unaff_EBP - 0x2b14);
                            cVar4 = *(char *)(iVar8 + 0x68);
                            fVar57 = *(float *)(unaff_EBP - 0x2b1c) * 1.5 *
                                     *(float *)(unaff_EBP - 0x2b48);
                            *(float *)(unaff_EBP - 0x2b5c) = fVar57;
                            if (cVar4 == 'h') {
                              *(undefined4 *)(unaff_EBP - 0x2b90) = *(undefined4 *)(iVar8 + 0x13b4);
                              fVar54 = FUN_00409d10(0x68);
                              *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
                              fVar54 = FUN_00408f70(*(void **)(unaff_EBP - 0x2b14));
                              *(float *)(unaff_EBP - 0x2b48) = (float)fVar54;
                              *(float *)(unaff_EBP - 0x2b1c) =
                                   *(float *)(unaff_EBP - 0x2b1c) * *(float *)(unaff_EBP - 0x2b48) *
                                   *(float *)(unaff_EBP - 0x2b90) * *(float *)(unaff_EBP - 0x2b90) *
                                   10.0;
                              iVar17 = rand();
                              iVar8 = *(int *)(unaff_EBP - 0x2b14);
                              fVar57 = ((1.25 - ((float)iVar17 * 0.5) / 32767.0) + 0.0) *
                                       *(float *)(unaff_EBP - 0x2b1c);
                              *(float *)(unaff_EBP - 0x2b5c) = fVar57;
                            }
                            if (*(char *)(unaff_EBP - 0x2ba8) != '\0') {
                              *(float *)(unaff_EBP - 0x2b5c) = fVar57 * 2.0;
                            }
                            uVar66 = FUN_004d18c0(iVar8,(int)fVar56);
                            if ((char)uVar66 != '\0') {
                              *(undefined4 *)(unaff_EBP - 0x2b20) = 0;
                              FUN_00401080((void *)(unaff_EBP - 0x284),0,0,0);
                              cVar4 = *(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x68);
                              if (cVar4 == '_') {
                                *(undefined4 *)(unaff_EBP - 0x2b20) = 0x3dcccccd;
                              }
                              puVar19 = *(undefined4 **)(unaff_EBP - 0x2b50);
                              if (cVar4 == 'h') {
                                pfVar28 = (float *)(unaff_EBP - 0x1358);
                                fVar57 = 10.0;
                                *(undefined4 *)(unaff_EBP - 0x2b20) =
                                     *(undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 0x13b4);
                                pfVar29 = FUN_00412670(puVar19,(float *)(unaff_EBP - 0x18a4));
                                puVar32 = (undefined4 *)FUN_004079f0(pfVar29,pfVar28,fVar57);
                                FUN_00401060((void *)(unaff_EBP - 0x284),puVar32);
                                puVar32 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 0x284),2);
                                *puVar32 = 0x40a00000;
                              }
                              cVar4 = *(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x68);
                              if (((cVar4 == '_') || (cVar4 == '^')) || (cVar4 == '\x1c')) {
                                cVar7 = '\x01';
                              }
                              else {
                                cVar7 = '\0';
                              }
                              if ((cVar4 == '_') || (cVar4 == 'h')) {
                                cVar4 = '\x01';
                              }
                              else {
                                cVar4 = '\0';
                              }
                              pvVar26 = *(void **)(unaff_EBP - 0x2b18);
                              cVar4 = FUN_004cfd50(pvVar26,fVar56,*(void **)(unaff_EBP - 0x2b14),
                                                   *(float *)(unaff_EBP - 0x2b5c),
                                                   (char)*(undefined4 *)(unaff_EBP - 0x2ba8),cVar4,
                                                   *(float *)(unaff_EBP - 0x2b20),unaff_EBP - 0x314,
                                                   (float *)(unaff_EBP - 0x284),
                                                   *(undefined4 **)(unaff_EBP - 0x2b28),
                                                   (undefined4 *)(unaff_EBP - 0x2be8),cVar7,0,0,
                                                   '\x01');
                              pvVar50 = *(void **)(unaff_EBP - 0x2b14);
                              if ((cVar4 != '\0') && (*(char *)((int)pvVar50 + 0x141) == '\x02')) {
                                FUN_00422a90(unaff_EBP - 0xe38);
                                FUN_00402a40((void *)(unaff_EBP - 0xe18),
                                             (undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 0x10));
                                iVar8 = *(int *)(unaff_EBP - 0x2b14);
                                uVar27 = *(uint *)(unaff_EBP - 0x2b5c) ^ 0x80000000;
                                *(undefined1 *)(unaff_EBP - 0xe24) =
                                     *(undefined1 *)(unaff_EBP - 0x2ba8);
                                uVar66 = *(undefined4 *)(iVar8 + 8);
                                uVar65 = *(undefined4 *)(iVar8 + 0xc);
                                *(undefined4 *)(unaff_EBP - 0xe38) = uVar66;
                                *(undefined4 *)(unaff_EBP - 0xe30) = uVar66;
                                *(undefined4 *)(unaff_EBP - 0xe34) = uVar65;
                                *(undefined4 *)(unaff_EBP - 0xe2c) = uVar65;
                                pvVar50 = *(void **)(unaff_EBP - 0x2b28);
                                *(uint *)(unaff_EBP - 0x2b5c) = uVar27;
                                *(uint *)(unaff_EBP - 0xe28) = uVar27;
                                FUN_00428400(pvVar50,(undefined4 *)(unaff_EBP - 0xe38));
                                if (*(char *)((int)pvVar26 + 0xb4) == '\0') {
                                  iVar8 = *(int *)(unaff_EBP - 0x2b14);
                                  *(float *)(iVar8 + 0x16c) =
                                       *(float *)(iVar8 + 0x16c) - *(float *)(unaff_EBP - 0x2b5c);
                                  fVar54 = FUN_0040fda0(iVar8);
                                  *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
                                  pvVar50 = *(void **)(unaff_EBP - 0x2b14);
                                  if (*(float *)(unaff_EBP - 0x2b1c) <=
                                      *(float *)((int)pvVar50 + 0x16c) &&
                                      *(float *)((int)pvVar50 + 0x16c) !=
                                      *(float *)(unaff_EBP - 0x2b1c)) {
                                    fVar54 = FUN_0040fda0((int)pvVar50);
                                    pvVar50 = *(void **)(unaff_EBP - 0x2b14);
                                    *(float *)((int)pvVar50 + 0x16c) = (float)fVar54;
                                  }
                                }
                                else {
                                  pvVar50 = *(void **)(unaff_EBP - 0x2b14);
                                }
                              }
                              if ((*(char *)((int)pvVar50 + 0x140) == '\x03') &&
                                 (*(char *)((int)pvVar50 + 0x141) == '\x01')) {
                                iVar8 = FUN_00407db0(pvVar50,0xffffffff);
                                if ((*(int *)((int)*(void **)(unaff_EBP - 0x2b14) + 0x6c) <= iVar8)
                                   && (iVar8 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),
                                                            0xffffffff),
                                      iVar8 < *(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c) +
                                              *(int *)(unaff_EBP - 0x2b24))) {
                                  FUN_00422890((undefined4 *)(unaff_EBP - 0xa98));
                                  pvVar50 = *(void **)(unaff_EBP - 0x2b14);
                                  *(undefined4 *)(unaff_EBP - 0xa38) = 3;
                                  *(undefined1 *)(unaff_EBP - 0xa3c) = 0;
                                  *(undefined4 *)(unaff_EBP - 0xa44) = 0;
                                  *(undefined4 *)(unaff_EBP - 0xa40) = 0;
                                  fVar54 = FUN_00411ad0(pvVar50);
                                  *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
                                  iVar8 = *(int *)(unaff_EBP - 0x2b14);
                                  fVar56 = *(float *)(unaff_EBP - 0x2b1c);
                                  *(undefined4 *)(unaff_EBP - 0xa98) = *(undefined4 *)(iVar8 + 8);
                                  *(undefined4 *)(unaff_EBP - 0xa94) = *(undefined4 *)(iVar8 + 0xc);
                                  *(float *)(unaff_EBP - 0xa50) = fVar56 * 0.1;
                                  *(undefined4 *)(unaff_EBP - 0xa4c) = 0x40800000;
                                  *(undefined1 *)(unaff_EBP - 0xa34) = 2;
                                  FUN_00402a40((void *)(unaff_EBP - 0xa80),
                                               (undefined4 *)(unaff_EBP - 0x314));
                                  *(undefined4 *)(unaff_EBP - 0xa48) = 0x3f800000;
                                  *(undefined4 *)(unaff_EBP - 0xa30) = 0;
                                  puVar32 = FUN_00401080((void *)(unaff_EBP - 0x1370),0,0,0);
                                  FUN_00401060((void *)(unaff_EBP - 0xa5c),puVar32);
                                  FUN_00428360((void *)((int)pvVar26 + 0x14),
                                               (undefined4 *)(unaff_EBP - 0xa98));
                                  FUN_00428360((void *)(*(int *)(unaff_EBP - 0x2b28) + 0x20),
                                               (undefined4 *)(unaff_EBP - 0xa98));
                                }
                              }
                              *(undefined1 *)(unaff_EBP - 0x2b29) = 1;
                              goto LAB_0053c6e7;
                            }
                          }
                        }
                      }
                    }
                    puVar19 = *(undefined4 **)(unaff_EBP - 0x2b50);
                  }
LAB_0053c6e7:
                  FUN_00407a30((void *)(unaff_EBP - 0x2c94),(int *)(unaff_EBP - 0x2f98));
                  pvVar26 = *(void **)(unaff_EBP - 0x2b6c);
                  piVar53 = (int *)FUN_00530550(pvVar26,(undefined4 *)(unaff_EBP - 0x2ce4));
                  bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c94),piVar53);
                } while (bVar3);
              }
              FUN_00402510(unaff_EBP - 0x1970);
              FUN_00402e30((void *)(unaff_EBP - 0x314),(uint *)(unaff_EBP - 0x1970));
              fVar56 = *(float *)(unaff_EBP - 0x2b3c);
              iVar8 = *(int *)(unaff_EBP - 0x2b40) + 1;
              fVar57 = (float)iVar8;
              *(int *)(unaff_EBP - 0x2b40) = iVar8;
              *(float *)(unaff_EBP - 0x2b54) = fVar57;
            } while (fVar57 < fVar56);
            if (*(char *)(unaff_EBP - 0x2b29) != '\0') {
              iVar8 = *(int *)(unaff_EBP - 0x2b14);
              *(int *)(iVar8 + 0x70) = *(int *)(iVar8 + 0x70) + 1;
              FUN_004103a0(iVar8);
              *(undefined4 *)(iVar8 + 0x74) = 0;
            }
            piVar53 = *(int **)(unaff_EBP - 0x2b64);
          }
          bVar3 = FUN_00530540((int)piVar53);
          pvVar50 = *(void **)(unaff_EBP - 0x2b14);
          if ((bVar3) && (*(char *)((int)pvVar50 + 0x68) != 'h')) {
            FUN_004c8510(unaff_EBP - 0xfd8);
            pfVar28 = FUN_00412670(puVar19,(float *)(unaff_EBP - 0x10b8));
            FUN_004e1520((float *)(unaff_EBP - 0x16b8),*(float *)(unaff_EBP - 0x2b3c),pfVar28);
            FUN_00402510(unaff_EBP - 0x1994);
            puVar25 = FUN_00402cb0((void *)((int)pvVar50 + 0x10),(uint *)(unaff_EBP - 0x2634),
                                   (uint *)(unaff_EBP - 0x1994));
            FUN_00402a40((void *)(unaff_EBP - 0xfd8),puVar25);
            *(undefined4 *)(unaff_EBP - 4000) = 5;
            *(undefined4 *)(unaff_EBP - 0xfa4) = 0x3dcccccd;
            *(undefined4 *)(unaff_EBP - 0xf9c) = 1;
            ppVar30 = (pair<unsigned___int64,unsigned___int64> *)
                      FUN_00401080((void *)(unaff_EBP - 0x1bec),0x3f800000,0x3e4ccccd,0x3f000000);
            std::pair<unsigned___int64,unsigned___int64>::
            operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                      ((pair<unsigned___int64,unsigned___int64> *)(unaff_EBP - 0xfb4),ppVar30);
            pfVar28 = FUN_0052ec30((void *)(unaff_EBP - 0x40),(float *)(unaff_EBP - 5000));
            FUN_00401060((void *)(unaff_EBP - 0xfc0),pfVar28);
            iVar8 = *(int *)(unaff_EBP - 0x2b28);
            FUN_00428540((void *)(iVar8 + 0x10),(undefined4 *)(unaff_EBP - 0xfd8));
            fVar54 = FUN_00412150((int)pvVar50);
            *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
            *(undefined4 *)((int)pvVar50 + 0x70) = 0;
            fVar54 = FUN_00412150((int)pvVar50);
            *(float *)(unaff_EBP - 0x2b48) = (float)fVar54;
            *(int *)((int)pvVar50 + 0x6c) =
                 (int)((*(float *)(unaff_EBP - 0x2b1c) / *(float *)(unaff_EBP - 0x2b48)) *
                      (float)*(int *)((int)pvVar50 + 0x6c));
          }
          else {
            iVar8 = *(int *)(unaff_EBP - 0x2b28);
          }
          if (((*(char *)((int)pvVar50 + 0x68) == '^') &&
              (iVar17 = FUN_00407db0(pvVar50,0xffffffff), *(int *)((int)pvVar50 + 0x6c) <= iVar17))
             && (iVar17 = FUN_00407db0(pvVar50,0xffffffff),
                iVar17 < *(int *)((int)pvVar50 + 0x6c) + *(int *)(unaff_EBP - 0x2b24))) {
            FUN_004c8530(unaff_EBP - 0x5d8);
            FUN_00402550((void *)(unaff_EBP - 0x5d8),(longlong *)((int)pvVar50 + 0x10));
            iVar17 = rand();
            *(undefined4 *)(unaff_EBP - 0x5cc) = 0x28;
            *(float *)(unaff_EBP - 0x5c8) = ((float)iVar17 * 0.1) / 32767.0 + 1.0;
            FUN_00428590((void *)(iVar8 + 8),(undefined4 *)(unaff_EBP - 0x5d8));
            pvVar26 = *(void **)(unaff_EBP - 0x2b18);
          }
          else {
            if ((*(char *)((int)pvVar50 + 0x68) == 'h') &&
               (iVar17 = FUN_00407db0(pvVar50,0xffffffff), *(int *)((int)pvVar50 + 0x6c) <= iVar17))
            {
              iVar17 = FUN_00407db0(pvVar50,0xffffffff);
              iVar40 = *(int *)(unaff_EBP - 0x2b24);
              if (iVar17 < *(int *)((int)pvVar50 + 0x6c) + iVar40) {
                FUN_004c8530(unaff_EBP - 2000);
                FUN_00402550((void *)(unaff_EBP - 2000),(longlong *)((int)pvVar50 + 0x10));
                iVar17 = rand();
                uVar66 = 0x10;
                if (*(char *)(unaff_EBP - 0x2b29) != '\0') {
                  uVar66 = 5;
                }
                *(undefined4 *)(unaff_EBP - 0x7c4) = uVar66;
                *(float *)(unaff_EBP - 0x7c0) = ((float)iVar17 * 0.25) / 32767.0 + 1.0;
                FUN_00428590((void *)(iVar8 + 8),(undefined4 *)(unaff_EBP - 2000));
                pvVar26 = *(void **)(unaff_EBP - 0x2b18);
                goto LAB_00537cfb;
              }
            }
            else {
              iVar40 = *(int *)(unaff_EBP - 0x2b24);
            }
            if (*(char *)((int)pvVar50 + 0x68) == '^') goto LAB_0053e0c5;
            if (*(int *)((int)pvVar50 + 0x6c) / 200 ==
                (*(int *)((int)pvVar50 + 0x6c) + iVar40) / 200) goto code_r0x00537cef;
            FUN_004c8530(unaff_EBP - 0x800);
            pvVar50 = *(void **)(unaff_EBP - 0x2b14);
            FUN_00402550((void *)(unaff_EBP - 0x800),(longlong *)((int)pvVar50 + 0x10));
            iVar17 = rand();
            cVar4 = *(char *)(unaff_EBP - 0x2b29);
            *(float *)(unaff_EBP - 0x7f0) = ((float)iVar17 * 0.25) / 32767.0 + 1.0;
            *(uint *)(unaff_EBP - 0x7f4) = (cVar4 != '\0') + 0x24;
            FUN_00428590((void *)(iVar8 + 8),(undefined4 *)(unaff_EBP - 0x800));
            pvVar26 = *(void **)(unaff_EBP - 0x2b18);
          }
          goto LAB_00537cfb;
        }
        iVar40 = *(int *)(unaff_EBP - 0x2b24);
LAB_0053bc91:
        if ((*(char *)((int)pvVar50 + 0x68) == '_') || (*(char *)((int)pvVar50 + 0x68) == '\x1c')) {
          iVar40 = FUN_00407db0(pvVar50,0xffffffff);
          iVar8 = *(int *)((int)pvVar50 + 0x6c);
          iVar17 = *(int *)(unaff_EBP - 0x2b24);
          iVar12 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
          if ((*(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c) - iVar12) / 200 ==
              ((iVar8 + iVar17) - iVar40) / 200) goto LAB_00537cf5;
          iVar8 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
          pvVar50 = *(void **)(unaff_EBP - 0x2b14);
          iVar40 = *(int *)(unaff_EBP - 0x2b24);
          if (iVar8 < *(int *)((int)pvVar50 + 0x6c) + iVar40) goto LAB_0053bd1c;
        }
        goto LAB_00537d01;
      }
      break;
    case '\"':
      iVar8 = *(int *)((int)*(void **)(unaff_EBP - 0x2b14) + 0x6c);
      iVar17 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      if ((iVar8 < iVar17) && (iVar8 / 200 != (iVar8 + *(int *)(unaff_EBP - 0x2b24)) / 200)) {
        FUN_004c8530(unaff_EBP - 0x620);
        FUN_00402550((void *)(unaff_EBP - 0x620),(longlong *)(*(int *)(unaff_EBP - 0x2b14) + 0x10));
        iVar17 = rand();
        iVar8 = *(int *)(unaff_EBP - 0x2b28);
        *(undefined4 *)(unaff_EBP - 0x614) = 0x24;
        *(float *)(unaff_EBP - 0x610) = ((float)iVar17 * 0.25) / 32767.0 + 1.0;
        FUN_00428590((void *)(iVar8 + 8),(undefined4 *)(unaff_EBP - 0x620));
      }
      pvVar50 = *(void **)(unaff_EBP - 0x2b14);
      if (((*(char *)((int)pvVar26 + 0xb4) == '\0') && (*(char *)((int)pvVar50 + 0x60) != '\0')) ||
         (pvVar50 == *(void **)((int)pvVar26 + 0xb8))) {
        iVar8 = FUN_00407db0(pvVar50,0xffffffff);
        pvVar50 = *(void **)(unaff_EBP - 0x2b14);
        if (*(int *)((int)pvVar50 + 0x6c) <= iVar8) goto LAB_00537cfb;
        iVar8 = FUN_00407db0(pvVar50,0xffffffff);
        iVar17 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
        if (iVar8 + iVar17 < *(int *)((int)*(void **)(unaff_EBP - 0x2b14) + 0x6c))
        goto LAB_00537cf5;
        iVar40 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
        pvVar26 = *(void **)(unaff_EBP - 0x2b14);
        iVar12 = FUN_00407db0(pvVar26,0xffffffff);
        iVar8 = *(int *)((int)pvVar26 + 0x6c);
        iVar17 = *(int *)(unaff_EBP - 0x2b24);
        iVar24 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
        if ((*(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c) - iVar24) / (int)((float)iVar40 * 0.125)
            != ((iVar8 + iVar17) - iVar12) / (int)((float)iVar40 * 0.125)) {
          fVar54 = FUN_0040fb20(*(int *)(unaff_EBP - 0x2b14),
                                (uint)*(byte *)(*(int *)(unaff_EBP - 0x2b14) + 0x68),-1);
          iVar8 = *(int *)(unaff_EBP - 0x2b14);
          *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
          if (*(float *)(unaff_EBP - 0x2b1c) <= *(float *)(iVar8 + 0x170)) {
            fVar54 = FUN_0040fb20(*(int *)(unaff_EBP - 0x2b14),(uint)*(byte *)(iVar8 + 0x68),-1);
            iVar8 = *(int *)(unaff_EBP - 0x2b14);
            pvVar26 = *(void **)(unaff_EBP - 0x2b18);
            *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
            *(float *)(iVar8 + 0x170) = *(float *)(iVar8 + 0x170) - *(float *)(unaff_EBP - 0x2b1c);
            pvVar50 = (void *)FUN_00405420(pvVar26,(uint *)(iVar8 + 0x1a0));
            pvVar26 = *(void **)(unaff_EBP - 0x2b14);
            if (pvVar50 == (void *)0x0) {
              pvVar50 = pvVar26;
            }
            FUN_00422a90(unaff_EBP - 0xc50);
            FUN_00402a40((void *)(unaff_EBP - 0xc30),(undefined4 *)((int)pvVar50 + 0x10));
            iVar8 = rand();
            *(float *)(unaff_EBP - 0x2b48) = 1.25 - ((float)iVar8 * 0.5) / 32767.0;
            fVar54 = FUN_00411ad0(pvVar26);
            *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
            *(float *)(unaff_EBP - 0xc40) =
                 *(float *)(unaff_EBP - 0x2b1c) * -2.0 * *(float *)(unaff_EBP - 0x2b48);
            bVar3 = FUN_0040f520((int)pvVar26);
            pvVar34 = *(void **)(unaff_EBP - 0x2b28);
            *(bool *)(unaff_EBP - 0xc3c) = bVar3;
            *(undefined4 *)(unaff_EBP - 0xc50) = *(undefined4 *)((int)pvVar26 + 8);
            *(undefined4 *)(unaff_EBP - 0xc4c) = *(undefined4 *)((int)pvVar26 + 0xc);
            *(undefined4 *)(unaff_EBP - 0xc48) = *(undefined4 *)((int)pvVar50 + 8);
            *(undefined4 *)(unaff_EBP - 0xc44) = *(undefined4 *)((int)pvVar50 + 0xc);
            FUN_00428400(pvVar34,(undefined4 *)(unaff_EBP - 0xc50));
            FUN_004c8530(unaff_EBP - 0x650);
            FUN_00402550((void *)(unaff_EBP - 0x650),(longlong *)((int)pvVar26 + 0x10));
            iVar8 = *(int *)(unaff_EBP - 0x2b28);
            *(undefined4 *)(unaff_EBP - 0x640) = 0x3f800000;
            *(undefined4 *)(unaff_EBP - 0x644) = 0x29;
            FUN_00428590((void *)(iVar8 + 8),(undefined4 *)(unaff_EBP - 0x650));
            pvVar34 = *(void **)(unaff_EBP - 0x2b18);
            if (*(char *)((int)pvVar34 + 0xb4) == '\0') {
LAB_0053ad1c:
              FUN_004cea80(pvVar34,(uint *)(unaff_EBP - 0xc50),*(void **)(unaff_EBP - 0x2b28),
                           (undefined4 *)(unaff_EBP - 0x2be8));
              FUN_00537cef();
              return;
            }
            if ((pvVar26 == *(void **)((int)pvVar34 + 0xb8)) &&
               (pvVar50 == *(void **)((int)pvVar34 + 0xb8))) {
              pvVar34 = *(void **)(unaff_EBP - 0x2b18);
              goto LAB_0053ad1c;
            }
          }
        }
code_r0x00537cef:
        pvVar26 = *(void **)(unaff_EBP - 0x2b18);
      }
      goto LAB_00537cf5;
    case '%':
    case '&':
    case '\'':
    case '(':
    case ')':
    case '*':
    case '+':
    case ',':
    case '-':
    case '.':
    case 'l':
      pvVar50 = *(void **)(unaff_EBP - 0x2b14);
      if (((*(char *)((int)pvVar26 + 0xb4) != '\0') || (*(char *)((int)pvVar50 + 0x60) == '\0')) &&
         (pvVar50 != *(void **)((int)pvVar26 + 0xb8))) goto LAB_00537d01;
      iVar8 = *(int *)((int)pvVar50 + 0x6c);
      iVar17 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      if ((iVar17 + -200 < iVar8) || (iVar8 / 200 == (iVar8 + *(int *)(unaff_EBP - 0x2b24)) / 200))
      {
        pvVar26 = *(void **)(unaff_EBP - 0x2b14);
      }
      else {
        FUN_004c8530(unaff_EBP - 0x8c0);
        pvVar26 = *(void **)(unaff_EBP - 0x2b14);
        FUN_00402550((void *)(unaff_EBP - 0x8c0),(longlong *)((int)pvVar26 + 0x10));
        iVar17 = rand();
        iVar8 = *(int *)(unaff_EBP - 0x2b28);
        *(undefined4 *)(unaff_EBP - 0x8b4) = 0x24;
        *(float *)(unaff_EBP - 0x8b0) = ((float)iVar17 * 0.25) / 32767.0 + 1.0;
        FUN_00428590((void *)(iVar8 + 8),(undefined4 *)(unaff_EBP - 0x8c0));
      }
      iVar8 = FUN_00407db0(pvVar26,0xffffffff);
      if ((*(char *)((int)pvVar26 + 0x68) == '.') || (*(char *)((int)pvVar26 + 0x68) == '-')) {
        iVar12 = FUN_00411d60(pvVar26,0xffffffff);
        iVar24 = FUN_00407db0(pvVar26,0xffffffff);
        iVar17 = *(int *)((int)pvVar26 + 0x6c);
        iVar40 = *(int *)(unaff_EBP - 0x2b24);
        iVar8 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
        pvVar26 = *(void **)(unaff_EBP - 0x2b14);
        iVar8 = (iVar12 / 3) * (((iVar17 + iVar40) - iVar24) / (iVar12 / 3)) + iVar8;
        iVar17 = FUN_00407db0(pvVar26,0xffffffff);
        if (iVar8 < iVar17) {
          iVar8 = FUN_00407db0(pvVar26,0xffffffff);
        }
      }
      iVar17 = FUN_00407db0(pvVar26,0xffffffff);
      if ((*(int *)((int)pvVar26 + 0x6c) <= iVar17) &&
         (iVar17 = FUN_00407db0(pvVar26,0xffffffff),
         iVar17 < *(int *)((int)pvVar26 + 0x6c) + *(int *)(unaff_EBP - 0x2b24))) {
        fVar54 = FUN_004021b0((float *)((int)pvVar26 + 0x160));
        *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
        if (0.0 < *(float *)(unaff_EBP - 0x2b1c)) {
          fVar54 = FUN_0040fb20((int)pvVar26,(uint)*(byte *)((int)pvVar26 + 0x68),-1);
          fVar56 = *(float *)((int)pvVar26 + 0x170);
          *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
          fVar56 = fVar56 - *(float *)(unaff_EBP - 0x2b1c);
          *(float *)((int)pvVar26 + 0x170) = fVar56;
          if (fVar56 < 0.0) {
            *(undefined4 *)((int)pvVar26 + 0x170) = 0;
          }
        }
      }
      *(undefined4 *)(unaff_EBP - 0x2b1c) = *(undefined4 *)((int)pvVar26 + 0x6c);
      iVar12 = FUN_00407db0(pvVar26,0xffffffff);
      iVar24 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      iVar40 = *(int *)(unaff_EBP - 0x2b24);
      iVar17 = *(int *)(unaff_EBP - 0x2b1c);
      pvVar50 = *(void **)(unaff_EBP - 0x2b14);
      if (((iVar17 < iVar12 + iVar24) && (iVar17 <= iVar8)) && (iVar8 < iVar17 + iVar40)) {
        pfVar28 = (float *)((int)pvVar50 + 0x160);
        fVar54 = FUN_004021b0(pfVar28);
        *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
        if (*(float *)(unaff_EBP - 0x2b1c) <= 0.0) goto LAB_0053b968;
        FUN_00422890((undefined4 *)(unaff_EBP - 0x3e4));
        if (*(char *)((int)pvVar50 + 0xaa9) == '\f') {
          pfVar41 = FUN_00412670(pfVar28,(float *)(unaff_EBP - 0x18c8));
          pfVar29 = (float *)(unaff_EBP - 0x13d0);
          fVar56 = 100.0;
        }
        else {
          pfVar41 = FUN_00412670(pfVar28,(float *)(unaff_EBP - 0x16e8));
          pfVar29 = (float *)(unaff_EBP - 0x13e8);
          fVar56 = 50.0;
        }
        puVar19 = (undefined4 *)FUN_004e1520(pfVar29,fVar56,pfVar41);
        FUN_00401060((void *)(unaff_EBP - 0x3a8),puVar19);
        *(undefined4 *)(unaff_EBP - 0x37c) = 0;
        fVar56 = *(float *)((int)pvVar50 + 0x144);
        plVar31 = (longlong *)((int)pvVar50 + 0x10);
        *(longlong **)(unaff_EBP - 0x2b1c) = plVar31;
        *(float *)(unaff_EBP - 0x398) = fVar56 * 4.0 + 0.5;
        FUN_00402a40((void *)(unaff_EBP - 0x3cc),(undefined4 *)plVar31);
        iVar8 = *(int *)(unaff_EBP - 0x2b14);
        *(undefined4 *)(unaff_EBP - 0x390) = *(undefined4 *)(iVar8 + 0x144);
        *(float *)(unaff_EBP - 0x394) = *(float *)(iVar8 + 0x144) + 0.5;
        if (*(int *)(iVar8 + 100) == 0x65) {
          FUN_004013d0((void *)(iVar8 + 0x80),1);
          FUN_00402a10((ulonglong *)(unaff_EBP - 0x3038));
          puVar25 = (uint *)(unaff_EBP - 0x3038);
          pvVar26 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x3cc),1);
          FUN_00402e60(pvVar26,puVar25);
          FUN_004013d0((void *)(iVar8 + 0x80),2);
          FUN_00402a10((ulonglong *)(unaff_EBP - 0x2ff4));
          puVar25 = (uint *)(unaff_EBP - 0x2ff4);
          pvVar26 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x3cc),2);
          FUN_00402e60(pvVar26,puVar25);
          plVar31 = *(longlong **)(unaff_EBP - 0x2b1c);
          iVar8 = *(int *)(unaff_EBP - 0x2b14);
        }
        *(undefined4 *)(unaff_EBP - 0x3e4) = *(undefined4 *)(iVar8 + 8);
        *(undefined4 *)(unaff_EBP - 0x3e0) = *(undefined4 *)(iVar8 + 0xc);
        FUN_00401060((void *)(unaff_EBP - 0x3dc),(undefined4 *)(iVar8 + 0x1b0));
        iVar8 = *(int *)(unaff_EBP - 0x2b14);
        if (*(char *)(iVar8 + 0x68) == 'l') {
          *(undefined4 *)(unaff_EBP - 900) = 4;
          fVar54 = FUN_00409d10((uint)*(byte *)(iVar8 + 0x68));
          pvVar26 = *(void **)(unaff_EBP - 0x2b14);
          *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
          fVar54 = FUN_00408f70(pvVar26);
          fVar56 = *(float *)(unaff_EBP - 0x2b1c);
          *(float *)(unaff_EBP - 0x2b48) = (float)fVar54;
          *(float *)(unaff_EBP - 0x2b1c) = fVar56 * *(float *)(unaff_EBP - 0x2b48);
          iVar8 = rand();
          *(undefined4 *)(unaff_EBP - 0x394) = 0x40800000;
          *(undefined4 *)(unaff_EBP - 0x390) = 0x3f800000;
          fVar56 = *(float *)(unaff_EBP - 0x2b1c);
          *(undefined1 *)(unaff_EBP - 0x388) = 1;
          *(float *)(unaff_EBP - 0x39c) =
               (1.25 - ((float)iVar8 * 0.5) / 32767.0) * fVar56 * 1.0 * 5.0;
          pfVar28 = FUN_00412670(pfVar28,(float *)(unaff_EBP - 0x1b14));
          puVar19 = (undefined4 *)FUN_004e1520((float *)(unaff_EBP - 0x1400),100.0,pfVar28);
          FUN_00401060((void *)(unaff_EBP - 0x3a8),puVar19);
          pvVar26 = *(void **)(unaff_EBP - 0x2b14);
        }
        else {
          pvVar26 = *(void **)(unaff_EBP - 0x2b14);
          *(undefined4 *)(unaff_EBP - 900) = 1;
          bVar6 = *(byte *)((int)pvVar26 + 0x68);
          if ((((bVar6 == 0x26) || (bVar6 == 0x27)) ||
              ((bVar6 == 0x28 || ((bVar6 == 0x2c || (bVar6 == 0x29)))))) || (bVar6 == 0x2a)) {
            fVar54 = FUN_00409d10((uint)bVar6);
            *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
            fVar54 = FUN_00411ad0(pvVar26);
            fVar56 = *(float *)(unaff_EBP - 0x2b1c);
            *(float *)(unaff_EBP - 0x2b48) = (float)fVar54;
            *(float *)(unaff_EBP - 0x2b1c) = fVar56 * *(float *)(unaff_EBP - 0x2b48);
            iVar8 = rand();
            fVar56 = (1.25 - ((float)iVar8 * 0.5) / 32767.0) * *(float *)(unaff_EBP - 0x2b1c) * 1.0;
          }
          else if ((bVar6 == 0x2e) || (bVar6 == 0x2d)) {
            fVar54 = FUN_00409d10((uint)bVar6);
            *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
            fVar54 = FUN_00411ad0(pvVar26);
            fVar56 = *(float *)(unaff_EBP - 0x2b1c);
            *(float *)(unaff_EBP - 0x2b48) = (float)fVar54;
            *(float *)(unaff_EBP - 0x2b1c) = fVar56 * *(float *)(unaff_EBP - 0x2b48);
            iVar8 = rand();
            *(undefined4 *)(unaff_EBP - 0x390) = 0x3e800000;
            fVar56 = (1.25 - ((float)iVar8 * 0.5) / 32767.0) * *(float *)(unaff_EBP - 0x2b1c) * 1.0;
            *(float *)(unaff_EBP - 0x394) = *(float *)(unaff_EBP - 0x394) + 0.5;
          }
          else {
            fVar54 = FUN_00409d10((uint)bVar6);
            *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
            fVar54 = FUN_00411ad0(pvVar26);
            fVar56 = *(float *)(unaff_EBP - 0x2b1c);
            *(float *)(unaff_EBP - 0x2b48) = (float)fVar54;
            *(float *)(unaff_EBP - 0x2b1c) = fVar56 * *(float *)(unaff_EBP - 0x2b48);
            iVar8 = rand();
            *(undefined4 *)(unaff_EBP - 0x390) = 0x3f800000;
            fVar56 = (1.25 - ((float)iVar8 * 0.5) / 32767.0) * *(float *)(unaff_EBP - 0x2b1c) * 1.0;
            *(float *)(unaff_EBP - 0x394) = *(float *)(unaff_EBP - 0x394) + 1.0;
          }
          *(float *)(unaff_EBP - 0x39c) = fVar56;
        }
        if (*(char *)((int)pvVar26 + 0x140) == '\x03') {
          *(char *)(unaff_EBP - 0x380) = (*(char *)((int)pvVar26 + 0x141) == '\x01') + '\x01';
        }
        cVar4 = *(char *)((int)pvVar26 + 0x68);
        if ((((cVar4 == '.') || (cVar4 == '-')) || (cVar4 == '%')) ||
           (*(undefined1 *)(unaff_EBP - 0x388) = 0, cVar4 == '+')) {
          *(undefined1 *)(unaff_EBP - 0x388) = 1;
        }
        FUN_00428360((void *)(*(int *)(unaff_EBP - 0x2b18) + 0x14),(undefined4 *)(unaff_EBP - 0x3e4)
                    );
        if (0.0 < *(float *)((int)pvVar26 + 0x144)) {
          fVar56 = *(float *)((int)pvVar26 + 0x170) - *(float *)((int)pvVar26 + 0x144);
          *(float *)((int)pvVar26 + 0x170) = fVar56;
          if (fVar56 < 0.0) {
            *(undefined4 *)((int)pvVar26 + 0x170) = 0;
          }
          *(undefined4 *)((int)pvVar26 + 0x144) = 0;
        }
        if ((*(char *)(unaff_EBP - 0x388) != '\0') &&
           (puVar19 = FUN_0040ef90(pvVar26,9), puVar19 != (undefined4 *)0x0)) {
          FUN_004029b0((undefined1 *)(unaff_EBP - 0x2ebc));
          *(undefined1 *)(unaff_EBP - 0x2ebc) = 9;
          *(undefined4 *)(unaff_EBP - 0x2eb4) = 0;
          FUN_00411740(pvVar26,(char *)(unaff_EBP - 0x2ebc));
          FUN_004063d0(unaff_EBP - 0x240);
          uVar66 = *(undefined4 *)((int)pvVar26 + 0xc);
          uVar65 = *(undefined4 *)((int)pvVar26 + 8);
          *(undefined8 *)(unaff_EBP - 0x230) = *(undefined8 *)(unaff_EBP - 0x2ebc);
          uVar1 = *(undefined8 *)(unaff_EBP - 0x2eb4);
          *(undefined4 *)(unaff_EBP - 0x23c) = uVar66;
          *(undefined4 *)(unaff_EBP - 0x234) = uVar66;
          iVar8 = *(int *)(unaff_EBP - 0x2b28);
          *(undefined4 *)(unaff_EBP - 0x240) = uVar65;
          *(undefined4 *)(unaff_EBP - 0x238) = uVar65;
          *(undefined8 *)(unaff_EBP - 0x228) = uVar1;
          uVar66 = *(undefined4 *)(unaff_EBP - 0x2ea8);
          *(undefined4 *)(unaff_EBP - 0x220) = *(undefined4 *)(unaff_EBP - 0x2eac);
          *(undefined4 *)(unaff_EBP - 0x21c) = uVar66;
          FUN_00411040((void *)(iVar8 + 0x58),(undefined8 *)(unaff_EBP - 0x240));
        }
        FUN_00428360((void *)(*(int *)(unaff_EBP - 0x2b28) + 0x20),(undefined4 *)(unaff_EBP - 0x3e4)
                    );
        FUN_004c8530(unaff_EBP - 0x278);
        FUN_00402550((void *)(unaff_EBP - 0x278),plVar31);
        cVar4 = *(char *)(unaff_EBP - 0x380);
        pvVar50 = *(void **)(unaff_EBP - 0x2b14);
        *(undefined4 *)(unaff_EBP - 0x268) = 0x3f800000;
        cVar7 = *(char *)((int)pvVar50 + 0x68);
        *(undefined4 *)(unaff_EBP - 0x264) = 0x3f666666;
        if (cVar4 == '\x02') {
          *(undefined4 *)(unaff_EBP - 0x26c) = 0x29;
          if (((cVar7 == ',') || (cVar7 == ')')) || (cVar7 == '*')) {
            *(undefined4 *)(unaff_EBP - 0x268) = 0x3fa00000;
          }
        }
        else {
          *(undefined4 *)(unaff_EBP - 0x26c) = 0x26;
          if (((cVar7 == '&') || (cVar7 == '\'')) || (cVar7 == '(')) {
            *(undefined4 *)(unaff_EBP - 0x268) = 0x40000000;
          }
        }
        FUN_00428590((void *)(*(int *)(unaff_EBP - 0x2b28) + 8),(undefined4 *)(unaff_EBP - 0x278));
        pvVar26 = *(void **)(unaff_EBP - 0x2b18);
        goto LAB_00537cfb;
      }
LAB_0053e0c5:
      pvVar26 = *(void **)(unaff_EBP - 0x2b18);
      goto LAB_00537d01;
    case '/':
    case '0':
      iVar8 = *(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c);
      if ((iVar8 < 1) && (0 < iVar8 + iVar40)) {
        FUN_004c8530(unaff_EBP - 0x668);
        pvVar50 = *(void **)(unaff_EBP - 0x2b14);
        FUN_00402550((void *)(unaff_EBP - 0x668),(longlong *)((int)pvVar50 + 0x10));
        iVar17 = rand();
        iVar8 = *(int *)(unaff_EBP - 0x2b28);
        *(undefined4 *)(unaff_EBP - 0x65c) = 0xe;
        *(float *)(unaff_EBP - 0x658) = ((float)iVar17 * 0.25) / 32767.0 + 1.0;
        FUN_00428590((void *)(iVar8 + 8),(undefined4 *)(unaff_EBP - 0x668));
        goto LAB_00537cfb;
      }
      break;
    case '1':
      pvVar50 = *(void **)(unaff_EBP - 0x2b14);
      if (((*(char *)((int)pvVar26 + 0xb4) == '\0') && (*(char *)((int)pvVar50 + 0x60) != '\0')) ||
         (pvVar50 == *(void **)((int)pvVar26 + 0xb8))) {
        iVar8 = FUN_00407db0(pvVar50,0xffffffff);
        pvVar50 = *(void **)(unaff_EBP - 0x2b14);
        if (iVar8 < *(int *)((int)pvVar50 + 0x6c)) goto LAB_00537cfb;
        iVar8 = FUN_00407db0(pvVar50,0xffffffff);
        iVar40 = *(int *)(unaff_EBP - 0x2b24);
        if (*(int *)((int)pvVar50 + 0x6c) + iVar40 <= iVar8) goto LAB_00537d01;
        FUN_00402510(unaff_EBP - 0x1928);
        *(void **)(unaff_EBP - 0x2b64) = (void *)((int)pvVar50 + 0x10);
        FUN_00402cb0((void *)((int)pvVar50 + 0x10),(uint *)(unaff_EBP - 0x204),
                     (uint *)(unaff_EBP - 0x1928));
        *(undefined4 *)(unaff_EBP - 0x2b20) = 0x43c80000;
        uVar59 = CONCAT44((undefined4 *)(unaff_EBP - 0x204),0x53b2f6);
        FUN_00402a40((void *)(unaff_EBP - 0x920),(undefined4 *)(unaff_EBP - 0x204));
        *(undefined4 *)(unaff_EBP - 0x2b5c) = 0xfffffffc;
        *(int *)(unaff_EBP - 0x2b40) = (int)pvVar50 + 0x80;
        do {
          uVar27 = 0xfffffffc;
          do {
            uVar52 = 0xfffffffe;
            do {
              uVar65 = 0x53b32b;
              uVar48 = uVar52;
              FUN_004cde40(&stack0xfffffff8,uVar52);
              uVar66 = 0x53b336;
              uVar61 = uVar27;
              FUN_004cde40(&stack0xfffffff0,uVar27);
              FUN_004cde40(&stack0xffffffe8,*(uint *)(unaff_EBP - 0x2b5c));
              puVar25 = FUN_00406380((void *)(unaff_EBP - 0x20f4),uVar66,uVar61,uVar65,uVar48,
                                     (int)uVar59,(int)(uVar59 >> 0x20));
              FUN_00402cb0((void *)(unaff_EBP - 0x204),(uint *)(unaff_EBP - 0x98c),puVar25);
              uVar59 = ZEXT48(*(float **)(unaff_EBP - 0x2b40));
              puVar25 = (uint *)(unaff_EBP - 0x98c);
              uVar48 = 0x53b37e;
              cVar4 = FUN_004d4f90(*(void **)(unaff_EBP - 0x2b18),puVar25,
                                   *(float **)(unaff_EBP - 0x2b40),'\0');
              if (cVar4 == '\0') {
                puVar25 = (uint *)0x53b39b;
                puVar16 = FUN_00402c50((void *)(unaff_EBP - 0x98c),(uint *)(unaff_EBP - 0x23f4),
                                       (uint *)(unaff_EBP - 0x204));
                uVar66 = 0x53b3a7;
                pfVar28 = FUN_00402550((void *)(unaff_EBP - 0x1688),(longlong *)puVar16);
                uVar59 = CONCAT44(0x53b3ae,uVar66);
                fVar54 = FUN_004021b0(pfVar28);
                *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
                fVar56 = *(float *)(unaff_EBP - 0x2b20);
                if (*(float *)(unaff_EBP - 0x2b1c) < fVar56) {
                  *(float *)(unaff_EBP - 0x2b20) = *(float *)(unaff_EBP - 0x2b1c);
                  uVar59 = CONCAT44((undefined4 *)(unaff_EBP - 0x98c),&LAB_0053b3e3);
                  FUN_00402a40((void *)(unaff_EBP - 0x920),(undefined4 *)(unaff_EBP - 0x98c));
                  goto LAB_0053b3e3;
                }
              }
              else {
LAB_0053b3e3:
                fVar56 = *(float *)(unaff_EBP - 0x2b20);
              }
              uVar52 = uVar52 + 1;
            } while ((int)uVar52 < 7);
            uVar27 = uVar27 + 1;
          } while ((int)uVar27 < 5);
          iVar8 = *(int *)(unaff_EBP - 0x2b5c) + 1;
          *(int *)(unaff_EBP - 0x2b5c) = iVar8;
        } while (iVar8 < 5);
        if (400.0 <= fVar56) goto code_r0x00537cef;
        pvVar50 = *(void **)(unaff_EBP - 0x2b64);
        FUN_00402a40(pvVar50,(undefined4 *)(unaff_EBP - 0x920));
        pvVar26 = *(void **)(unaff_EBP - 0x2b40);
        goto LAB_0053b440;
      }
      break;
    case '2':
    case '7':
    case '`':
      pvVar50 = *(void **)(unaff_EBP - 0x2b14);
      if (((*(char *)((int)pvVar26 + 0xb4) != '\0') || (*(char *)((int)pvVar50 + 0x60) == '\0')) &&
         (pvVar50 != *(void **)((int)pvVar26 + 0xb8))) goto LAB_00537d01;
      iVar8 = FUN_00407db0(pvVar50,0xffffffff);
      if ((*(int *)((int)pvVar50 + 0x6c) <= iVar8) &&
         (iVar8 = FUN_00407db0(pvVar50,0xffffffff),
         iVar8 < *(int *)((int)pvVar50 + 0x6c) + *(int *)(unaff_EBP - 0x2b24))) {
        *(undefined4 *)((int)pvVar50 + 0x13b4) = *(undefined4 *)((int)pvVar50 + 0x144);
        *(float *)((int)pvVar50 + 0x170) =
             *(float *)((int)pvVar50 + 0x170) - *(float *)((int)pvVar50 + 0x144);
        *(undefined4 *)((int)pvVar50 + 0x144) = 0;
        puVar19 = FUN_0040ef90(pvVar50,10);
        if (puVar19 != (undefined4 *)0x0) {
          FUN_004029b0((undefined1 *)(unaff_EBP - 0x2eec));
          *(undefined1 *)(unaff_EBP - 0x2eec) = 10;
          *(undefined4 *)(unaff_EBP - 0x2ee4) = 0;
          FUN_00411740(pvVar50,(char *)(unaff_EBP - 0x2eec));
          FUN_004063d0(unaff_EBP - 0x2e6c);
          uVar66 = *(undefined4 *)((int)pvVar50 + 0xc);
          uVar65 = *(undefined4 *)((int)pvVar50 + 8);
          *(undefined8 *)(unaff_EBP - 0x2e5c) = *(undefined8 *)(unaff_EBP - 0x2eec);
          uVar1 = *(undefined8 *)(unaff_EBP - 0x2ee4);
          *(undefined4 *)(unaff_EBP - 0x2e68) = uVar66;
          *(undefined4 *)(unaff_EBP - 0x2e60) = uVar66;
          iVar8 = *(int *)(unaff_EBP - 0x2b28);
          *(undefined4 *)(unaff_EBP - 0x2e6c) = uVar65;
          *(undefined4 *)(unaff_EBP - 0x2e64) = uVar65;
          *(undefined8 *)(unaff_EBP - 0x2e54) = uVar1;
          uVar66 = *(undefined4 *)(unaff_EBP - 0x2ed8);
          *(undefined4 *)(unaff_EBP - 0x2e4c) = *(undefined4 *)(unaff_EBP - 0x2edc);
          *(undefined4 *)(unaff_EBP - 0x2e48) = uVar66;
          FUN_00411040((void *)(iVar8 + 0x58),(undefined8 *)(unaff_EBP - 0x2e6c));
        }
      }
      iVar8 = FUN_00411d60(pvVar50,0xffffffff);
      iVar17 = (int)((iVar8 >> 0x1f & 3U) + iVar8) >> 2;
      iVar8 = FUN_00407db0(pvVar50,0xffffffff);
      if (iVar8 <= *(int *)((int)pvVar50 + 0x6c)) {
        *(undefined4 *)(unaff_EBP - 0x2b40) = *(undefined4 *)((int)pvVar50 + 0x6c);
        iVar8 = FUN_00407db0(pvVar50,0xffffffff);
        iVar40 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
        pvVar50 = *(void **)(unaff_EBP - 0x2b14);
        if ((*(int *)(unaff_EBP - 0x2b40) < iVar8 + iVar40) &&
           (*(int *)(unaff_EBP - 0x2b40) / iVar17 !=
            (*(int *)(unaff_EBP - 0x2b40) + *(int *)(unaff_EBP - 0x2b24)) / iVar17)) {
          fVar54 = FUN_004021b0((float *)((int)pvVar50 + 0x160));
          *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
          if (0.0 < *(float *)(unaff_EBP - 0x2b1c)) {
            FUN_004c8530(unaff_EBP - 0x890);
            FUN_00402550((void *)(unaff_EBP - 0x890),(longlong *)((int)pvVar50 + 0x10));
            iVar17 = rand();
            iVar8 = *(int *)(unaff_EBP - 0x2b28);
            *(undefined4 *)(unaff_EBP - 0x884) = 0x16;
            *(float *)(unaff_EBP - 0x880) = ((float)iVar17 * 0.5) / 32767.0 + 1.0;
            FUN_00428590((void *)(iVar8 + 8),(undefined4 *)(unaff_EBP - 0x890));
            FUN_00422890((undefined4 *)(unaff_EBP - 0xde0));
            pfVar28 = FUN_00412670((float *)((int)pvVar50 + 0x160),(float *)(unaff_EBP - 0x16d0));
            puVar19 = (undefined4 *)FUN_004e1520((float *)(unaff_EBP - 0x13b8),150.0,pfVar28);
            FUN_00401060((void *)(unaff_EBP - 0xda4),puVar19);
            fVar56 = *(float *)(*(int *)(unaff_EBP - 0x2b14) + 0x13b4);
            *(undefined4 *)(unaff_EBP - 0xd78) = 0;
            *(undefined4 *)(unaff_EBP - 0xd94) = 0x3f000000;
            *(float *)(unaff_EBP - 0xd8c) = fVar56 * 0.25;
            *(undefined4 *)(unaff_EBP - 0xd88) = 0;
            *(undefined1 *)(unaff_EBP - 0xd84) = 1;
            FUN_00402a40((void *)(unaff_EBP - 0xdc8),(undefined4 *)((int)pvVar50 + 0x10));
            pvVar50 = *(void **)(unaff_EBP - 0x2b14);
            *(undefined4 *)(unaff_EBP - 0xde0) = *(undefined4 *)((int)pvVar50 + 8);
            *(undefined4 *)(unaff_EBP - 0xddc) = *(undefined4 *)((int)pvVar50 + 0xc);
            FUN_00401060((void *)(unaff_EBP - 0xdd8),(undefined4 *)((int)pvVar50 + 0x1b0));
            bVar6 = *(byte *)((int)pvVar50 + 0x68);
            *(undefined4 *)(unaff_EBP - 0xd80) = 0;
            *(undefined4 *)(unaff_EBP - 0x2b40) = 0x3f800000;
            if (bVar6 == 0x37) {
              *(undefined4 *)(unaff_EBP - 0x2b40) = 0x3dcccccd;
            }
            *(undefined4 *)(unaff_EBP - 0x2b90) = *(undefined4 *)((int)pvVar50 + 0x13b4);
            fVar54 = FUN_00409d10((uint)bVar6);
            *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
            fVar54 = FUN_00408f70(pvVar50);
            fVar56 = *(float *)(unaff_EBP - 0x2b90);
            *(float *)(unaff_EBP - 0x2b48) = (float)fVar54;
            *(float *)(unaff_EBP - 0x2b1c) =
                 *(float *)(unaff_EBP - 0x2b1c) * *(float *)(unaff_EBP - 0x2b48) *
                 (fVar56 * fVar56 * 5.0 + *(float *)(unaff_EBP - 0x2b40));
            iVar17 = rand();
            iVar8 = *(int *)(unaff_EBP - 0x2b18);
            *(float *)(unaff_EBP - 0xd98) =
                 ((1.25 - ((float)iVar17 * 0.5) / 32767.0) + 0.0) * *(float *)(unaff_EBP - 0x2b1c);
            FUN_00428360((void *)(iVar8 + 0x14),(undefined4 *)(unaff_EBP - 0xde0));
            FUN_00428360((void *)(*(int *)(unaff_EBP - 0x2b28) + 0x20),
                         (undefined4 *)(unaff_EBP - 0xde0));
            pvVar26 = *(void **)(unaff_EBP - 0x2b18);
            goto LAB_00537cfb;
          }
        }
      }
LAB_0053b968:
      pvVar26 = *(void **)(unaff_EBP - 0x2b18);
      goto LAB_00537cfb;
    case 'I':
      pvVar50 = *(void **)(unaff_EBP - 0x2b14);
      if (*(char *)((int)pvVar26 + 0xb4) == '\0') {
        iVar8 = FUN_00407db0(pvVar50,0xffffffff);
        if (*(int *)((int)pvVar50 + 0x6c) < iVar8) {
          iVar8 = FUN_00407db0(pvVar50,0xffffffff);
          iVar40 = *(int *)(unaff_EBP - 0x2b24);
          if (*(int *)((int)pvVar50 + 0x6c) + iVar40 < iVar8) goto LAB_00537d01;
          FUN_004c8530(unaff_EBP - 0x830);
          FUN_00402550((void *)(unaff_EBP - 0x830),(longlong *)((int)pvVar50 + 0x10));
          iVar17 = rand();
          iVar8 = *(int *)(unaff_EBP - 0x2b28);
          *(undefined4 *)(unaff_EBP - 0x824) = 0x2b;
          *(float *)(unaff_EBP - 0x820) = ((float)iVar17 * 0.25) / 32767.0 + 0.6;
          FUN_00428590((void *)(iVar8 + 8),(undefined4 *)(unaff_EBP - 0x830));
        }
        goto LAB_00537cfb;
      }
      goto LAB_00537d0a;
    case 'Y':
    case 'Z':
      iVar8 = *(int *)((int)*(void **)(unaff_EBP - 0x2b14) + 0x6c);
      iVar17 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      if ((iVar8 < iVar17) && (iVar8 / 200 != (iVar8 + *(int *)(unaff_EBP - 0x2b24)) / 200)) {
        FUN_004c8530(unaff_EBP - 0x6e0);
        FUN_00402550((void *)(unaff_EBP - 0x6e0),(longlong *)(*(int *)(unaff_EBP - 0x2b14) + 0x10));
        iVar17 = rand();
        iVar8 = *(int *)(unaff_EBP - 0x2b28);
        *(undefined4 *)(unaff_EBP - 0x6d4) = 0x24;
        *(float *)(unaff_EBP - 0x6d0) = ((float)iVar17 * 0.25) / 32767.0 + 1.0;
        FUN_00428590((void *)(iVar8 + 8),(undefined4 *)(unaff_EBP - 0x6e0));
      }
      pvVar50 = *(void **)(unaff_EBP - 0x2b14);
      if (((*(char *)((int)pvVar26 + 0xb4) == '\0') && (*(char *)((int)pvVar50 + 0x60) != '\0')) ||
         (pvVar50 == *(void **)((int)pvVar26 + 0xb8))) {
        iVar8 = FUN_00407db0(pvVar50,0xffffffff);
        pvVar50 = *(void **)(unaff_EBP - 0x2b14);
        if (iVar8 < *(int *)((int)pvVar50 + 0x6c)) goto LAB_00537cfb;
        iVar8 = FUN_00407db0(pvVar50,0xffffffff);
        iVar40 = *(int *)(unaff_EBP - 0x2b24);
        if (*(int *)((int)pvVar50 + 0x6c) + iVar40 <= iVar8) goto LAB_00537d01;
        FUN_004c8530(unaff_EBP - 0x710);
        FUN_00402550((void *)(unaff_EBP - 0x710),(longlong *)((int)pvVar50 + 0x10));
        iVar17 = rand();
        iVar8 = *(int *)(unaff_EBP - 0x2b28);
        *(undefined4 *)(unaff_EBP - 0x704) = 0x26;
        *(float *)(unaff_EBP - 0x700) = ((float)iVar17 * 0.25) / 32767.0 + 1.0;
        FUN_00428590((void *)(iVar8 + 8),(undefined4 *)(unaff_EBP - 0x710));
        FUN_00422890((undefined4 *)(unaff_EBP - 0xb78));
        iVar8 = *(int *)(unaff_EBP - 0x2b14);
        *(undefined4 *)(unaff_EBP - 0xb18) = 3;
        bVar6 = *(byte *)(iVar8 + 0x68);
        *(undefined1 *)(unaff_EBP - 0xb1c) = 0;
        *(undefined4 *)(unaff_EBP - 0xb24) = 0;
        *(undefined4 *)(unaff_EBP - 0xb20) = 0;
        fVar54 = FUN_00409d10((uint)bVar6);
        pvVar34 = *(void **)(unaff_EBP - 0x2b14);
        *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
        fVar54 = FUN_00411ad0(pvVar34);
        iVar8 = *(int *)(unaff_EBP - 0x2b14);
        *(float *)(unaff_EBP - 0x2b48) = (float)fVar54;
        fVar56 = *(float *)(unaff_EBP - 0x2b1c);
        fVar57 = *(float *)(unaff_EBP - 0x2b48);
        cVar4 = *(char *)(iVar8 + 0x68);
        *(undefined4 *)(unaff_EBP - 0xb78) = *(undefined4 *)(iVar8 + 8);
        *(undefined4 *)(unaff_EBP - 0xb74) = *(undefined4 *)(iVar8 + 0xc);
        *(float *)(unaff_EBP - 0xb30) = fVar56 * fVar57 * 2.0;
        *(undefined4 *)(unaff_EBP - 0xb2c) = 0x41000000;
        *(char *)(unaff_EBP - 0xb14) = (cVar4 == 'Z') + '\x01';
        FUN_00402a40((void *)(unaff_EBP - 0xb60),(undefined4 *)((int)pvVar50 + 0x10));
        *(undefined4 *)(unaff_EBP - 0xb28) = 0x3f800000;
        *(undefined4 *)(unaff_EBP - 0xb10) = 0;
        puVar19 = FUN_00401080((void *)(unaff_EBP - 0x1310),0,0,0);
        FUN_00401060((void *)(unaff_EBP - 0xb3c),puVar19);
        FUN_00428360((void *)((int)pvVar26 + 0x14),(undefined4 *)(unaff_EBP - 0xb78));
        FUN_00428360((void *)(*(int *)(unaff_EBP - 0x2b28) + 0x20),(undefined4 *)(unaff_EBP - 0xb78)
                    );
      }
LAB_00537cf5:
      pvVar50 = *(void **)(unaff_EBP - 0x2b14);
LAB_00537cfb:
      iVar40 = *(int *)(unaff_EBP - 0x2b24);
      goto LAB_00537d01;
    case '\\':
      pvVar50 = *(void **)(unaff_EBP - 0x2b14);
      if (((*(char *)((int)pvVar26 + 0xb4) == '\0') && (*(char *)((int)pvVar50 + 0x60) != '\0')) ||
         (pvVar50 == *(void **)((int)pvVar26 + 0xb8))) {
        iVar8 = FUN_00407db0(pvVar50,0xffffffff);
        pvVar50 = *(void **)(unaff_EBP - 0x2b14);
        if (iVar8 < *(int *)((int)pvVar50 + 0x6c)) goto LAB_00537cfb;
        iVar8 = FUN_00407db0(pvVar50,0xffffffff);
        iVar40 = *(int *)(unaff_EBP - 0x2b24);
        if (iVar8 < *(int *)((int)pvVar50 + 0x6c) + iVar40) {
          pvVar26 = *(void **)(unaff_EBP - 0x2b6c);
          *(undefined4 *)(unaff_EBP - 0x2b20) = 0;
          *(undefined8 *)(unaff_EBP - 0x2c30) = 0;
          FUN_00428070(pvVar26,(undefined4 *)(unaff_EBP - 0x2c80));
          piVar53 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),
                                        (undefined4 *)(unaff_EBP - 0x2df0));
          bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c80),piVar53);
          uVar27 = *(uint *)(unaff_EBP - 0x2c2c);
          uVar52 = *(uint *)(unaff_EBP - 0x2c30);
          if (bVar3) {
            do {
              puVar25 = (uint *)FUN_00402bc0((int *)(unaff_EBP - 0x2c80));
              if (puVar25[2] != 0) {
                if ((*(int *)(puVar25[2] + 0x198) == *(int *)(*(int *)(unaff_EBP - 0x2b14) + 8)) &&
                   (*(int *)(puVar25[2] + 0x19c) == *(int *)(*(int *)(unaff_EBP - 0x2b14) + 0xc))) {
                  *(int *)(unaff_EBP - 0x2b20) = *(int *)(unaff_EBP - 0x2b20) + 1;
                }
                uVar48 = *puVar25;
                uVar61 = puVar25[1];
                if (((int)uVar61 <= (int)uVar27) &&
                   (((int)uVar61 < (int)uVar27 || (uVar48 < uVar52)))) {
                  *(uint *)(unaff_EBP - 0x2c30) = uVar48;
                  *(uint *)(unaff_EBP - 0x2c2c) = uVar61;
                  uVar52 = uVar48;
                  uVar27 = uVar61;
                }
              }
              FUN_00407a30((void *)(unaff_EBP - 0x2c80),(int *)(unaff_EBP - 0x301c));
              piVar53 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),
                                            (undefined4 *)(unaff_EBP - 0x2df0));
              bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c80),piVar53);
            } while (bVar3);
            if (2 < *(int *)(unaff_EBP - 0x2b20)) goto code_r0x00537cef;
          }
          *(uint *)(unaff_EBP - 0x2c30) = uVar52 - 1;
          *(uint *)(unaff_EBP - 0x2c2c) = (uVar27 - 1) + (uint)(uVar52 != 0);
          pCVar11 = operator_new(0x1e60);
          *(Creature **)(unaff_EBP - 0x2b30) = pCVar11;
          *(undefined1 *)(unaff_EBP - 4) = 0x11;
          if (pCVar11 == (Creature *)0x0) {
            pCVar11 = (Creature *)0x0;
          }
          else {
            pCVar11 = cube::Creature::Creature(pCVar11,(undefined4 *)(unaff_EBP - 0x2c30));
          }
          iVar8 = *(int *)(unaff_EBP - 0x2b14);
          *(undefined1 *)(unaff_EBP - 4) = 5;
          piVar53 = (int *)(iVar8 + 0x13f8);
          *(char *)&pCVar11[4].Creature_data.offset_0xc =
               (*(char *)(iVar8 + 0x60) == '\0') * '\x02' + '\x01';
          bVar3 = FUN_004e28d0(piVar53);
          if (bVar3) {
            iVar8 = *(int *)(unaff_EBP - 0x2b14);
            pCVar49 = (Creature_vftable *)0x25;
          }
          else {
            uVar27 = FUN_0041fff0(piVar53);
            uVar52 = rand();
            iVar8 = *(int *)(unaff_EBP - 0x2b14);
            puVar25 = (uint *)FUN_00402bb0((void *)(iVar8 + 0x13f8),uVar52 % uVar27);
            pCVar49 = (Creature_vftable *)*puVar25;
          }
          if (*(int *)(iVar8 + 0x13f4) == 1) {
            pCVar11[5].vftablePtr = *(Creature_vftable **)(iVar8 + 100);
            FUN_0041de30(&pCVar11[0x26].Creature_data.offset_0x4,(undefined1 *)(iVar8 + 0x300));
            FUN_00407730(pCVar11 + 6,(undefined1 *)(iVar8 + 0x78));
          }
          else if (*(int *)(iVar8 + 0x13f4) == 2) {
            uVar27 = FUN_00405420(*(void **)(unaff_EBP - 0x2b18),(uint *)(iVar8 + 0x11d0));
            if (uVar27 == 0) {
              uVar27 = *(uint *)(unaff_EBP - 0x2b14);
            }
            pCVar11[5].vftablePtr = *(Creature_vftable **)(uVar27 + 100);
            FUN_0041de30(&pCVar11[0x26].Creature_data.offset_0x4,(undefined1 *)(uVar27 + 0x300));
            FUN_00407730(pCVar11 + 6,(undefined1 *)(uVar27 + 0x78));
            iVar8 = *(int *)(unaff_EBP - 0x2b14);
          }
          else {
            pCVar11[5].vftablePtr = pCVar49;
            FUN_0040a840((uint *)(pCVar11 + 5),(int)(pCVar11 + 6),(undefined4 *)0x0);
          }
          *(ushort *)&pCVar11[6].Creature_data.field_0x2 =
               *(ushort *)&pCVar11[6].Creature_data.field_0x2 & 0xfdff | 0x800;
          pCVar11[0x14].vftablePtr = *(Creature_vftable **)(iVar8 + 400);
          fVar54 = FUN_0040fda0(iVar8);
          *(float *)&pCVar11[0x12].Creature_data = (float)fVar54;
          FUN_00402a40(&(pCVar11->Creature_data).offset_0xc,(undefined4 *)(iVar8 + 0x10));
          pSVar20 = operator_new(0xc);
          *(SequentialBehavior **)(unaff_EBP - 0x2b30) = pSVar20;
          *(undefined1 *)(unaff_EBP - 4) = 0x12;
          if (pSVar20 == (SequentialBehavior *)0x0) {
            pSVar20 = (SequentialBehavior *)0x0;
            *(undefined4 *)(unaff_EBP - 0x2b40) = 0;
          }
          else {
            pSVar20 = cube::SequentialBehavior::SequentialBehavior(pSVar20);
            *(SequentialBehavior **)(unaff_EBP - 0x2b40) = pSVar20;
          }
          *(undefined1 *)(unaff_EBP - 4) = 5;
          pCVar21 = operator_new(0x14);
          *(CombatBehavior **)(unaff_EBP - 0x2b30) = pCVar21;
          *(undefined1 *)(unaff_EBP - 4) = 0x13;
          if (pCVar21 == (CombatBehavior *)0x0) {
            pCVar21 = (CombatBehavior *)0x0;
          }
          else {
            pCVar21 = cube::CombatBehavior::CombatBehavior(pCVar21,0x41a00000);
          }
          *(CombatBehavior **)(unaff_EBP - 0x2b1c) = pCVar21;
          this = &pSVar20->SequentialBehavior_data;
          *(undefined1 *)(unaff_EBP - 4) = 5;
          FUN_004d6620(this,(undefined4 *)(unaff_EBP - 0x2b1c));
          pCVar22 = operator_new(0x10);
          *(CompanionBehavior **)(unaff_EBP - 0x2b30) = pCVar22;
          *(undefined1 *)(unaff_EBP - 4) = 0x14;
          if (pCVar22 == (CompanionBehavior *)0x0) {
            pCVar22 = (CompanionBehavior *)0x0;
          }
          else {
            pCVar22 = cube::CompanionBehavior::CompanionBehavior(pCVar22);
          }
          iVar8 = *(int *)(unaff_EBP - 0x2b14);
          *(CompanionBehavior **)(unaff_EBP - 0x2b1c) = pCVar22;
          (pCVar22->CompanionBehavior_data).offset_0x4 = *(undefined4 *)(iVar8 + 8);
          (pCVar22->CompanionBehavior_data).offset_0x8 = *(undefined4 *)(iVar8 + 0xc);
          *(undefined1 *)(unaff_EBP - 4) = 5;
          FUN_004d6620(this,(undefined4 *)(unaff_EBP - 0x2b1c));
          pRVar23 = operator_new(8);
          *(RandomWalkBehavior **)(unaff_EBP - 0x2b30) = pRVar23;
          *(undefined1 *)(unaff_EBP - 4) = 0x15;
          if (pRVar23 == (RandomWalkBehavior *)0x0) {
            pRVar23 = (RandomWalkBehavior *)0x0;
          }
          else {
            pRVar23 = cube::RandomWalkBehavior::RandomWalkBehavior(pRVar23);
          }
          *(RandomWalkBehavior **)(unaff_EBP - 0x2b1c) = pRVar23;
          *(undefined1 *)(unaff_EBP - 4) = 5;
          FUN_004d6620(this,(undefined4 *)(unaff_EBP - 0x2b1c));
          pvVar50 = *(void **)(unaff_EBP - 0x2b14);
          pvVar26 = *(void **)(unaff_EBP - 0x2b6c);
          pCVar11[0xfe].Creature_data.offset_0x8 = *(undefined4 *)(unaff_EBP - 0x2b40);
          pCVar11[0x14].Creature_data.offset_0x4 = *(undefined4 *)((int)pvVar50 + 8);
          pCVar11[0x14].Creature_data.offset_0x8 = *(undefined4 *)((int)pvVar50 + 0xc);
          puVar25 = FUN_00402b10(pvVar26,(uint *)(unaff_EBP - 0x2c30));
          *puVar25 = (uint)pCVar11;
          goto LAB_0053b968;
        }
        goto LAB_00537d01;
      }
      break;
    case 'e':
      iVar8 = *(int *)(unaff_EBP - 0x2b14);
      if ((((*(char *)((int)pvVar26 + 0xb4) == '\0') && (*(char *)(iVar8 + 0x60) != '\0')) ||
          (iVar8 == *(int *)((int)pvVar26 + 0xb8))) && (*(int *)(iVar8 + 0x6c) == 0)) {
        FUN_004c8530(unaff_EBP - 0x680);
        pvVar50 = *(void **)(unaff_EBP - 0x2b14);
        FUN_00402550((void *)(unaff_EBP - 0x680),(longlong *)((int)pvVar50 + 0x10));
        iVar8 = *(int *)(unaff_EBP - 0x2b28);
        *(undefined4 *)(unaff_EBP - 0x670) = 0x3f800000;
        *(undefined4 *)(unaff_EBP - 0x674) = 0x19;
        FUN_00428590((void *)(iVar8 + 8),(undefined4 *)(unaff_EBP - 0x680));
        FUN_004029b0((undefined1 *)(unaff_EBP - 0x2f1c));
        *(undefined4 *)(unaff_EBP - 0x2f14) = 10000;
        *(undefined1 *)(unaff_EBP - 0x2f1c) = 1;
        FUN_00411740(pvVar50,(char *)(unaff_EBP - 0x2f1c));
        if (0 < *(int *)((int)pvVar50 + 300)) {
          *(undefined4 *)((int)pvVar50 + 300) = 0;
        }
        FUN_004063d0(unaff_EBP - 0x30d4);
        pvVar50 = *(void **)(unaff_EBP - 0x2b14);
        uVar66 = *(undefined4 *)((int)pvVar50 + 0xc);
        uVar65 = *(undefined4 *)((int)pvVar50 + 8);
        *(undefined8 *)(unaff_EBP - 0x30c4) = *(undefined8 *)(unaff_EBP - 0x2f1c);
        uVar1 = *(undefined8 *)(unaff_EBP - 0x2f14);
        *(undefined4 *)(unaff_EBP - 0x30d0) = uVar66;
        *(undefined4 *)(unaff_EBP - 0x30c8) = uVar66;
        iVar8 = *(int *)(unaff_EBP - 0x2b28);
        *(undefined4 *)(unaff_EBP - 0x30d4) = uVar65;
        *(undefined4 *)(unaff_EBP - 0x30cc) = uVar65;
        *(undefined8 *)(unaff_EBP - 0x30bc) = uVar1;
        uVar66 = *(undefined4 *)(unaff_EBP - 0x2f08);
        *(undefined4 *)(unaff_EBP - 0x30b4) = *(undefined4 *)(unaff_EBP - 0x2f0c);
        *(undefined4 *)(unaff_EBP - 0x30b0) = uVar66;
        FUN_00411040((void *)(iVar8 + 0x58),(undefined8 *)(unaff_EBP - 0x30d4));
        goto LAB_00537cfb;
      }
      break;
    case 'g':
      iVar8 = *(int *)(unaff_EBP - 0x2b14);
      if ((((*(char *)((int)pvVar26 + 0xb4) == '\0') && (*(char *)(iVar8 + 0x60) != '\0')) ||
          (iVar8 == *(int *)((int)pvVar26 + 0xb8))) && (*(int *)(iVar8 + 0x6c) == 0)) {
        FUN_004c8530(unaff_EBP - 0x5f0);
        pvVar50 = *(void **)(unaff_EBP - 0x2b14);
        FUN_00402550((void *)(unaff_EBP - 0x5f0),(longlong *)((int)pvVar50 + 0x10));
        iVar8 = *(int *)(unaff_EBP - 0x2b28);
        *(undefined4 *)(unaff_EBP - 0x5e0) = 0x3f800000;
        *(undefined4 *)(unaff_EBP - 0x5e4) = 0x19;
        FUN_00428590((void *)(iVar8 + 8),(undefined4 *)(unaff_EBP - 0x5f0));
        FUN_004029b0((undefined1 *)(unaff_EBP - 0x2e84));
        *(undefined4 *)(unaff_EBP - 0x2e7c) = 30000;
        fVar54 = FUN_00411ad0(pvVar50);
        *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
        *(float *)(unaff_EBP - 0x2e80) = *(float *)(unaff_EBP - 0x2b1c) * 4.0;
        *(undefined1 *)(unaff_EBP - 0x2e84) = 6;
        FUN_00411740(pvVar50,(char *)(unaff_EBP - 0x2e84));
        if (0 < *(int *)((int)pvVar50 + 300)) {
          *(undefined4 *)((int)pvVar50 + 300) = 0;
        }
        FUN_004063d0(unaff_EBP - 0x30fc);
        pvVar50 = *(void **)(unaff_EBP - 0x2b14);
        uVar66 = *(undefined4 *)((int)pvVar50 + 0xc);
        uVar65 = *(undefined4 *)((int)pvVar50 + 8);
        *(undefined8 *)(unaff_EBP - 0x30ec) = *(undefined8 *)(unaff_EBP - 0x2e84);
        uVar1 = *(undefined8 *)(unaff_EBP - 0x2e7c);
        *(undefined4 *)(unaff_EBP - 0x30f8) = uVar66;
        *(undefined4 *)(unaff_EBP - 0x30f0) = uVar66;
        iVar8 = *(int *)(unaff_EBP - 0x2b28);
        *(undefined4 *)(unaff_EBP - 0x30fc) = uVar65;
        *(undefined4 *)(unaff_EBP - 0x30f4) = uVar65;
        *(undefined8 *)(unaff_EBP - 0x30e4) = uVar1;
        uVar66 = *(undefined4 *)(unaff_EBP - 0x2e70);
        *(undefined4 *)(unaff_EBP - 0x30dc) = *(undefined4 *)(unaff_EBP - 0x2e74);
        *(undefined4 *)(unaff_EBP - 0x30d8) = uVar66;
        FUN_00411040((void *)(iVar8 + 0x58),(undefined8 *)(unaff_EBP - 0x30fc));
        goto LAB_00537cfb;
      }
      break;
    case 'i':
      if (*(void **)(unaff_EBP - 0x2b14) == *(void **)((int)pvVar26 + 0xb8)) {
        iVar8 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
        pvVar50 = *(void **)(unaff_EBP - 0x2b14);
        if (iVar8 < *(int *)((int)pvVar50 + 0x6c)) goto LAB_00537cfb;
        iVar8 = FUN_00407db0(pvVar50,0xffffffff);
        iVar40 = *(int *)(unaff_EBP - 0x2b24);
        if (iVar8 < *(int *)((int)pvVar50 + 0x6c) + iVar40) {
          iVar8 = *(int *)((int)pvVar26 + 0xb8);
          pCVar37 = (CRefTime *)FUN_004e2320((void *)(iVar8 + 0x10),1);
          lVar38 = CRefTime::Millisecs(pCVar37);
          pCVar37 = (CRefTime *)FUN_004e2320((void *)(iVar8 + 0x10),0);
          lVar18 = CRefTime::Millisecs(pCVar37);
          iVar8 = FUN_004feec0(pvVar26,lVar18,lVar38);
          if (iVar8 != 0) {
            pvVar26 = (void *)(iVar8 + 0x14018);
            *(undefined4 *)(unaff_EBP - 0x2b20) = 8;
            do {
              iVar8 = 8;
              *(undefined4 *)(unaff_EBP - 0x2b40) = 8;
              do {
                if (*(int *)((int)pvVar26 + 0x18) == 1) {
                  pvVar34 = (void *)(*(int *)(unaff_EBP - 0x2b14) + 0x10);
                  puVar19 = (undefined4 *)FUN_004e2320(pvVar26,0);
                  pvVar50 = (void *)FUN_004e2320(pvVar34,0);
                  FUN_004cde20(pvVar50,puVar19);
                  puVar19 = (undefined4 *)FUN_004e2320(pvVar26,1);
                  pvVar50 = (void *)FUN_004e2320(pvVar34,1);
                  FUN_004cde20(pvVar50,puVar19);
                  uVar27 = 0;
                  pvVar50 = (void *)FUN_004e2320(pvVar34,2);
                  FUN_004cde40(pvVar50,uVar27);
                  iVar8 = *(int *)(unaff_EBP - 0x2b40);
                }
                pvVar26 = (void *)((int)pvVar26 + 0x68);
                iVar8 = iVar8 + -1;
                *(int *)(unaff_EBP - 0x2b40) = iVar8;
              } while (iVar8 != 0);
              piVar53 = (int *)(unaff_EBP - 0x2b20);
              *piVar53 = *piVar53 + -1;
            } while (*piVar53 != 0);
            goto code_r0x00537cef;
          }
          goto LAB_00537cf5;
        }
        goto LAB_00537d01;
      }
      break;
    case 'n':
      pvVar50 = *(void **)(unaff_EBP - 0x2b14);
      if (*(char *)((int)pvVar26 + 0xb4) == '\0') {
        iVar8 = FUN_00407db0(pvVar50,0xffffffff);
        if (*(int *)((int)pvVar50 + 0x6c) < iVar8) {
          iVar8 = FUN_00407db0(pvVar50,0xffffffff);
          iVar40 = *(int *)(unaff_EBP - 0x2b24);
          if (*(int *)((int)pvVar50 + 0x6c) + iVar40 < iVar8) goto LAB_00537d01;
          uVar27 = FUN_00405420(pvVar26,(uint *)((int)pvVar50 + 0x11d0));
          if (((uVar27 == 0) || (*(char *)(uVar27 + 0x1020) != '\x14')) ||
             ((uint)*(byte *)(uVar27 + 0x1021) != *(uint *)((int)pvVar50 + 100))) goto LAB_0053b968;
          FUN_004c8530(unaff_EBP - 0x860);
          FUN_00402550((void *)(unaff_EBP - 0x860),(longlong *)((int)pvVar50 + 0x10));
          iVar17 = rand();
          iVar8 = *(int *)(unaff_EBP - 0x2b28);
          *(undefined4 *)(unaff_EBP - 0x854) = 0x2c;
          *(float *)(unaff_EBP - 0x850) = ((float)iVar17 * 0.2) / 32767.0 + 0.9;
          FUN_00428590((void *)(iVar8 + 8),(undefined4 *)(unaff_EBP - 0x860));
          FUN_00422a90(unaff_EBP - 0xbc0);
          iVar8 = *(int *)(unaff_EBP - 0x2b14);
          *(undefined4 *)(unaff_EBP - 0xbc0) = *(undefined4 *)(iVar8 + 8);
          *(undefined4 *)(unaff_EBP - 0xbbc) = *(undefined4 *)(iVar8 + 0xc);
          *(undefined4 *)(unaff_EBP - 3000) = *(undefined4 *)(uVar27 + 8);
          uVar66 = *(undefined4 *)(uVar27 + 0xc);
          *(undefined4 *)(unaff_EBP - 0xbb0) = 0;
          *(undefined1 *)(unaff_EBP - 0xb7b) = 6;
          *(undefined1 *)(unaff_EBP - 0xbac) = 0;
          *(undefined4 *)(unaff_EBP - 0xbb4) = uVar66;
          FUN_00402a40((void *)(unaff_EBP - 0xba0),(undefined4 *)((int)pvVar50 + 0x10));
          FUN_00428400(*(void **)(unaff_EBP - 0x2b28),(undefined4 *)(unaff_EBP - 0xbc0));
          pvVar26 = (void *)(*(int *)(unaff_EBP - 0x2b14) + 0x1178);
          *(undefined4 *)(unaff_EBP - 0x2b64) = 0;
          FUN_00428070(pvVar26,(undefined4 *)(unaff_EBP - 0x2c50));
          piVar53 = (int *)FUN_00530550(pvVar26,(undefined4 *)(unaff_EBP - 0x2e30));
          bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c50),piVar53);
          if (bVar3) {
            do {
              pcVar10 = (char *)FUN_0052eb90((int *)(unaff_EBP - 0x2c50));
              if (*pcVar10 == '\a') {
                *(undefined4 *)(unaff_EBP - 0x2b64) = *(undefined4 *)(pcVar10 + 4);
              }
              FUN_0052ebf0((void *)(unaff_EBP - 0x2c50),(undefined4 *)(unaff_EBP - 0x2b30));
              piVar53 = (int *)FUN_00530550(pvVar26,(undefined4 *)(unaff_EBP - 0x2e30));
              bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c50),piVar53);
            } while (bVar3);
          }
          fVar56 = *(float *)(unaff_EBP - 0x2b64) + 0.2;
          pvVar50 = *(void **)(unaff_EBP - 0x2b14);
          *(int *)((int)pvVar50 + 0x70) = *(int *)((int)pvVar50 + 0x70) + 1;
          *(undefined4 *)((int)pvVar50 + 0x74) = 0;
          *(float *)(unaff_EBP - 0x2b64) = fVar56;
          if (1.0 <= fVar56) {
            pvVar26 = *(void **)(unaff_EBP - 0x2b18);
            *(undefined1 *)((int)pvVar50 + 0x60) = 5;
            uVar66 = *(undefined4 *)(uVar27 + 0xc);
            *(undefined4 *)(unaff_EBP - 0x2b64) = 0x3f800000;
            FUN_00522580(pvVar26,*(uint *)(uVar27 + 8),uVar66,(int)pvVar50);
          }
          FUN_004029b0((undefined1 *)(unaff_EBP - 0x2ea4));
          uVar66 = *(undefined4 *)(unaff_EBP - 0x2b64);
          iVar8 = *(int *)(unaff_EBP - 0x2b28);
          *(undefined1 *)(unaff_EBP - 0x2ea4) = 7;
          *(undefined4 *)(unaff_EBP - 0x2e9c) = 5000;
          *(undefined4 *)(unaff_EBP - 0x2ea0) = uVar66;
          *(undefined4 *)(unaff_EBP - 0x2e94) = *(undefined4 *)((int)pvVar50 + 0x198);
          *(undefined4 *)(unaff_EBP - 0x2e90) = *(undefined4 *)((int)pvVar50 + 0x19c);
          FUN_004ce9f0(pvVar50,(char *)(unaff_EBP - 0x2ea4),iVar8);
          pvVar26 = *(void **)(unaff_EBP - 0x2b18);
        }
        goto LAB_00537cfb;
      }
      goto LAB_00537d0a;
    }
    pvVar50 = *(void **)(unaff_EBP - 0x2b14);
LAB_00537d01:
    if (*(char *)((int)pvVar26 + 0xb4) == '\0') {
LAB_00537d16:
      *(int *)((int)pvVar50 + 0x74) = *(int *)((int)pvVar50 + 0x74) + iVar40;
      if (4000 < *(int *)((int)pvVar50 + 0x74)) {
        fVar54 = FUN_00412150((int)pvVar50);
        *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
        *(undefined4 *)((int)pvVar50 + 0x70) = 0;
        fVar54 = FUN_00412150((int)pvVar50);
        *(float *)(unaff_EBP - 0x2b48) = (float)fVar54;
        pvVar26 = (void *)((int)pvVar50 + 0x139c);
        *(int *)((int)pvVar50 + 0x6c) =
             (int)((*(float *)(unaff_EBP - 0x2b1c) / *(float *)(unaff_EBP - 0x2b48)) *
                  (float)*(int *)((int)pvVar50 + 0x6c));
        FUN_00428070(pvVar26,(undefined4 *)(unaff_EBP - 0x2c9c));
        piVar53 = (int *)FUN_00530550(pvVar26,(undefined4 *)(unaff_EBP - 0x2d98));
        bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c9c),piVar53);
        if (bVar3) {
          do {
            puVar19 = (undefined4 *)FUN_00402bc0((int *)(unaff_EBP - 0x2c9c));
            cVar4 = FUN_0040f6d0();
            if (cVar4 != '\0') {
              iVar8 = FUN_00409780(*(void **)(unaff_EBP - 0x2b14),*puVar19,-1);
              puVar19[1] = iVar8;
            }
            FUN_00407a30((void *)(unaff_EBP - 0x2c9c),(int *)(unaff_EBP - 0x3024));
            piVar53 = (int *)FUN_00530550(pvVar26,(undefined4 *)(unaff_EBP - 0x2d98));
            bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c9c),piVar53);
          } while (bVar3);
          pvVar50 = *(void **)(unaff_EBP - 0x2b14);
        }
      }
    }
    else {
LAB_00537d0a:
      if (pvVar50 == *(void **)((int)pvVar26 + 0xb8)) goto LAB_00537d16;
    }
    pvVar26 = (void *)((int)pvVar50 + 0x139c);
    FUN_00428070(pvVar26,(undefined4 *)(unaff_EBP - 0x2c6c));
    piVar53 = (int *)FUN_00530550(pvVar26,(undefined4 *)(unaff_EBP - 0x2df8));
    bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c6c),piVar53);
    if (bVar3) {
      do {
        iVar8 = FUN_00402bc0((int *)(unaff_EBP - 0x2c6c));
        cVar4 = FUN_0040f6d0();
        if (cVar4 == '\0') {
          piVar53 = (int *)(iVar8 + 4);
          *piVar53 = *piVar53 - *(int *)(unaff_EBP - 0x2b24);
          if (*piVar53 < 0) {
            *(undefined4 *)(iVar8 + 4) = 0;
          }
        }
        FUN_00407a30((void *)(unaff_EBP - 0x2c6c),(int *)(unaff_EBP - 0x2fcc));
        piVar53 = (int *)FUN_00530550(pvVar26,(undefined4 *)(unaff_EBP - 0x2df8));
        bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c6c),piVar53);
      } while (bVar3);
      pvVar50 = *(void **)(unaff_EBP - 0x2b14);
    }
    FUN_004c8280((undefined4 *)(unaff_EBP - 0x2bf8));
    pvVar50 = (void *)((int)pvVar50 + 0x1178);
    *(undefined1 *)(unaff_EBP - 4) = 0x16;
    FUN_00428070(pvVar50,(undefined4 *)(unaff_EBP - 0x2ba4));
    piVar53 = (int *)FUN_00530550(pvVar50,(undefined4 *)(unaff_EBP - 0x2ce8));
    bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2ba4),piVar53);
    if (bVar3) {
      do {
        pcVar10 = (char *)FUN_0052eb90((int *)(unaff_EBP - 0x2ba4));
        iVar8 = *(int *)(unaff_EBP - 0x2b24);
        *(int *)(pcVar10 + 8) = *(int *)(pcVar10 + 8) - iVar8;
        iVar17 = *(int *)(pcVar10 + 8);
        if (iVar17 < 1) {
          FUN_004d6620((void *)(unaff_EBP - 0x2bf8),(undefined4 *)(unaff_EBP - 0x2ba4));
        }
        else if (*pcVar10 == '\x01') {
          if (0 < *(int *)(*(int *)(unaff_EBP - 0x2b14) + 300)) {
            *(undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 300) = 0;
          }
        }
        else if (((*pcVar10 == '\x04') && (*(char *)(*(int *)(unaff_EBP - 0x2b18) + 0xb4) == '\0'))
                && (iVar17 / 400 != (iVar8 + iVar17) / 400)) {
          pvVar26 = (void *)FUN_00405420(*(void **)(unaff_EBP - 0x2b18),(uint *)(pcVar10 + 0x10));
          uVar59 = 0;
          iVar8 = 0;
          cVar4 = '\x01';
          puVar19 = (undefined4 *)(unaff_EBP - 0x2be8);
          puVar32 = *(undefined4 **)(unaff_EBP - 0x2b28);
          pfVar28 = (float *)FUN_00401080((void *)(unaff_EBP - 0x1700),0,0,0);
          FUN_004cfd50(*(void **)(unaff_EBP - 0x2b18),*(float *)(unaff_EBP - 0x2b14),pvVar26,
                       *(float *)(pcVar10 + 4),'\0','\0',0.0,
                       (int)*(float *)(unaff_EBP - 0x2b14) + 0x1320,pfVar28,puVar32,puVar19,cVar4,
                       iVar8,(int)uVar59,(char)(uVar59 >> 0x20));
        }
        FUN_0052ebf0((void *)(unaff_EBP - 0x2ba4),(undefined4 *)(unaff_EBP - 0x2b30));
        pvVar50 = (void *)(*(int *)(unaff_EBP - 0x2b14) + 0x1178);
        piVar53 = (int *)FUN_00530550(pvVar50,(undefined4 *)(unaff_EBP - 0x2ce8));
        bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2ba4),piVar53);
      } while (bVar3);
    }
    FUN_00428070((void *)(unaff_EBP - 0x2bf8),(undefined4 *)(unaff_EBP - 0x2c8c));
    piVar53 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2bf8),(undefined4 *)(unaff_EBP - 0x2cec));
    bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c8c),piVar53);
    if (bVar3) {
      do {
        puVar19 = (undefined4 *)FUN_0052eb90((int *)(unaff_EBP - 0x2c8c));
        FUN_005305b0(pvVar50,(int *)(unaff_EBP - 0x3054),(int *)*puVar19);
        FUN_0052ebf0((void *)(unaff_EBP - 0x2c8c),(undefined4 *)(unaff_EBP - 0x2b30));
        piVar53 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2bf8),
                                      (undefined4 *)(unaff_EBP - 0x2cec));
        bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c8c),piVar53);
      } while (bVar3);
    }
    pvVar26 = *(void **)(unaff_EBP - 0x2b14);
    *(int *)((int)pvVar26 + 300) = *(int *)((int)pvVar26 + 300) - *(int *)(unaff_EBP - 0x2b24);
    if (0 < *(int *)((int)pvVar26 + 300)) {
      *(undefined4 *)((int)pvVar26 + 0x6c) = 0;
      *(undefined1 *)((int)pvVar26 + 0x68) = 0;
    }
    if (*(char *)((int)pvVar26 + 0x60) == '\x06') {
LAB_0053e357:
      if (*(char *)((int)pvVar26 + 0x68) == '\0') {
        piVar9 = (int *)((int)pvVar26 + 0x11b4);
        FUN_00428070(piVar9,(undefined4 *)(unaff_EBP - 0x2c38));
        piVar53 = (int *)FUN_00530550(piVar9,(undefined4 *)(unaff_EBP - 0x2cf0));
        bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c38),piVar53);
        if (bVar3) {
          iVar8 = *(int *)(unaff_EBP - 0x2b14);
          do {
            puVar25 = (uint *)FUN_00402bc0((int *)(unaff_EBP - 0x2c38));
            piVar53 = (int *)FUN_00530550((void *)(iVar8 + 0x11ac),
                                          (undefined4 *)(unaff_EBP - 0x2fd4));
            pvVar26 = (void *)FUN_00530600((void *)(iVar8 + 0x11ac),(int *)(unaff_EBP - 0x2f9c),
                                           puVar25);
            bVar3 = FUN_004078d0(pvVar26,piVar53);
            if ((bVar3) &&
               (pvVar26 = (void *)FUN_00405420(*(void **)(unaff_EBP - 0x2b18),puVar25),
               pvVar26 != (void *)0x0)) {
              FUN_00408230(pvVar26,*(int *)(unaff_EBP - 0x2b28));
              FUN_00422a90(unaff_EBP - 0xc08);
              iVar17 = *(int *)(unaff_EBP - 0x2b14);
              *(undefined4 *)(unaff_EBP - 0xbf8) = 0;
              *(undefined4 *)(unaff_EBP - 0xc08) = *(undefined4 *)(iVar17 + 8);
              *(undefined4 *)(unaff_EBP - 0xc04) = *(undefined4 *)(iVar17 + 0xc);
              *(undefined4 *)(unaff_EBP - 0xc00) = *(undefined4 *)((int)pvVar26 + 8);
              *(undefined4 *)(unaff_EBP - 0xbfc) = *(undefined4 *)((int)pvVar26 + 0xc);
              *(undefined1 *)(unaff_EBP - 0xbc3) = 4;
              *(undefined1 *)(unaff_EBP - 0xbf4) = 0;
              FUN_00402a40((void *)(unaff_EBP - 0xbe8),(undefined4 *)((int)pvVar26 + 0x10));
              FUN_00428400(*(void **)(unaff_EBP - 0x2b28),(undefined4 *)(unaff_EBP - 0xc08));
            }
            FUN_00407a30((void *)(unaff_EBP - 0x2c38),(int *)(unaff_EBP - 0x2fa0));
            piVar9 = (int *)(*(int *)(unaff_EBP - 0x2b14) + 0x11b4);
            piVar53 = (int *)FUN_00530550(piVar9,(undefined4 *)(unaff_EBP - 0x2cf0));
            bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c38),piVar53);
          } while (bVar3);
        }
        FUN_004f8520((int *)(*(int *)(unaff_EBP - 0x2b14) + 0x11ac));
        FUN_004f8520(piVar9);
        pvVar26 = *(void **)(unaff_EBP - 0x2b14);
      }
    }
    else if ((-1 < *(int *)((int)pvVar26 + 0x6c)) || (*(char *)((int)pvVar26 + 0x68) == '\0')) {
      if (*(int *)((int)pvVar26 + 0x6c) == 0) {
        bVar6 = *(byte *)((int)pvVar26 + 0x68);
        *(uint *)(unaff_EBP - 0x2b1c) = (uint)bVar6;
        piVar53 = FUN_004cde60((void *)((int)pvVar26 + 0x139c),(int *)(unaff_EBP - 0x2b1c));
        iVar8 = FUN_00409780(*(void **)(unaff_EBP - 0x2b14),(uint)bVar6,-1);
        *piVar53 = iVar8;
        pvVar26 = *(void **)(unaff_EBP - 0x2b14);
      }
      *(int *)((int)pvVar26 + 0x6c) = *(int *)((int)pvVar26 + 0x6c) + *(int *)(unaff_EBP - 0x2b24);
      if (((*(char *)((int)pvVar26 + 0x68) == '6') &&
          (iVar8 = FUN_00407db0(pvVar26,0xffffffff), iVar8 < *(int *)((int)pvVar26 + 0x6c))) &&
         (iVar8 = FUN_004084b0((int)pvVar26), *(int *)((int)pvVar26 + 0x6c) < iVar8)) {
        iVar8 = FUN_00407db0(pvVar26,0xffffffff);
        pvVar26 = *(void **)(unaff_EBP - 0x2b14);
        iVar17 = FUN_00411d60(pvVar26,0xffffffff);
        if (*(int *)((int)pvVar26 + 0x6c) < iVar8 + iVar17) {
          puVar19 = (undefined4 *)FUN_004013d0((void *)((int)pvVar26 + 0x34),2);
          *puVar19 = 0xc2700000;
        }
      }
      goto LAB_0053e357;
    }
    uVar66 = FUN_0040f690((int)pvVar26);
    cVar4 = *(char *)((int)pvVar26 + 0x68);
    if ((char)uVar66 == '\0') {
      if ((((cVar4 != '\x18') && (cVar4 != '\x19')) && (cVar4 != '\x1b')) &&
         (((cVar4 != ';' && (cVar4 != '?')) && ((cVar4 != '@' && (cVar4 != '\b')))))) {
        fVar56 = *(float *)((int)pvVar26 + 0x170) - *(float *)(unaff_EBP - 0x2b88) * 5e-05;
        goto LAB_0053e567;
      }
    }
    else if ((cVar4 != '\x1c') &&
            ((((cVar4 != '_' && (cVar4 != '%')) &&
              ((cVar4 != '.' &&
               ((((cVar4 != '-' && (cVar4 != '\x1f')) && (cVar4 != '!')) &&
                ((cVar4 != '+' && (cVar4 != '\"')))))))) ||
             (iVar8 = FUN_004084b0((int)pvVar26), iVar8 <= *(int *)((int)pvVar26 + 0x6c))))) {
      fVar56 = *(float *)(unaff_EBP - 0x2b88) * 0.0001 + *(float *)((int)pvVar26 + 0x170);
LAB_0053e567:
      *(float *)((int)pvVar26 + 0x170) = fVar56;
    }
    if (*(float *)((int)pvVar26 + 0x170) <= 0.0 && *(float *)((int)pvVar26 + 0x170) != 0.0) {
      *(undefined4 *)((int)pvVar26 + 0x170) = 0;
    }
    if (1.0 < *(float *)((int)pvVar26 + 0x170)) {
      *(undefined4 *)((int)pvVar26 + 0x170) = 0x3f800000;
    }
    cVar4 = FUN_0040f610((int)pvVar26);
    if (cVar4 == '\0') {
      *(float *)((int)pvVar26 + 0x174) =
           *(float *)(unaff_EBP - 0x2b88) / 2000.0 + *(float *)((int)pvVar26 + 0x174);
    }
    else if (0.0 < *(float *)((int)pvVar26 + 0x174)) {
      if ((*(char *)((int)pvVar26 + 0x990) == '\x03') && (*(char *)((int)pvVar26 + 0x991) == '\r'))
      {
        fVar56 = *(float *)(unaff_EBP - 0x2b88) / 1200.0;
      }
      else {
        fVar56 = *(float *)(unaff_EBP - 0x2b88) / 600.0;
      }
      fVar56 = *(float *)((int)pvVar26 + 0x174) - fVar56;
      *(float *)((int)pvVar26 + 0x174) = fVar56;
      if (fVar56 < 0.0) {
        *(undefined4 *)((int)pvVar26 + 0x174) = 0;
      }
    }
    if (1.0 < *(float *)((int)pvVar26 + 0x174)) {
      *(undefined4 *)((int)pvVar26 + 0x174) = 0x3f800000;
    }
    if (*(char *)((int)pvVar26 + 0x68) != '\0') {
      FUN_00405570((void *)((int)pvVar26 + 0x10),0x10,'\0');
    }
    fVar54 = FUN_004021b0((float *)((int)pvVar26 + 0x40));
    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
    if (0.0 < *(float *)(unaff_EBP - 0x2b1c)) {
      FUN_00405570((void *)((int)pvVar26 + 0x10),0x400,'\0');
    }
    if ((*(char *)((int)pvVar26 + 0x68) == 'S') || (*(char *)((int)pvVar26 + 0x68) == 'T')) {
      fVar54 = FUN_004021b0((float *)((int)pvVar26 + 0x40));
      *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
      if (0.0 < *(float *)(unaff_EBP - 0x2b1c)) {
        *(undefined1 *)((int)pvVar26 + 0x68) = 0;
      }
    }
    if ((((*(char *)(*(int *)(unaff_EBP - 0x2b18) + 0xb4) == '\0') &&
         (*(char *)((int)pvVar26 + 0x60) != '\0')) ||
        (pvVar26 == *(void **)(*(int *)(unaff_EBP - 0x2b18) + 0xb8))) &&
       ((*(char *)((int)pvVar26 + 0x68) == 'P' || (*(char *)((int)pvVar26 + 0x68) == 'Q')))) {
      pcVar10 = (char *)((int)pvVar26 + 0x1e8);
      iVar17 = *(int *)((int)pvVar26 + 0x6c) - *(int *)(unaff_EBP - 0x2b24);
      *(int *)(unaff_EBP - 0x2b1c) = *(int *)((int)pvVar26 + 0x6c);
      iVar8 = FUN_00413aa0(pcVar10);
      if ((iVar17 < iVar8) && (*(int *)(unaff_EBP - 0x2b1c) / 200 != iVar17 / 200)) {
        iVar17 = FUN_00413aa0(pcVar10);
        iVar8 = *(int *)(unaff_EBP - 0x2b14);
        cVar4 = *(char *)(iVar8 + 0x60);
        *(float *)(unaff_EBP - 0x2b20) = 200.0 / (float)iVar17;
        if (cVar4 != '\0') {
          *(float *)(unaff_EBP - 0x2b20) = (200.0 / (float)iVar17) * 0.5;
        }
        fVar54 = FUN_00413be0(pcVar10);
        *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
        fVar56 = *(float *)(unaff_EBP - 0x2b1c) * *(float *)(unaff_EBP - 0x2b20);
        *(float *)(unaff_EBP - 0x2b40) = fVar56;
        if (0.0 < fVar56) {
          FUN_00422a90(unaff_EBP - 0x508);
          FUN_00402a40((void *)(unaff_EBP - 0x4e8),(undefined4 *)(iVar8 + 0x10));
          uVar27 = *(uint *)(unaff_EBP - 0x2b40);
          pvVar26 = *(void **)(unaff_EBP - 0x2b28);
          *(undefined4 *)(unaff_EBP - 0x500) = *(undefined4 *)(iVar8 + 8);
          *(undefined4 *)(unaff_EBP - 0x4fc) = *(undefined4 *)(iVar8 + 0xc);
          *(undefined4 *)(unaff_EBP - 0x508) = 0xffffffff;
          *(undefined4 *)(unaff_EBP - 0x504) = 0xffffffff;
          *(uint *)(unaff_EBP - 0x4f8) = uVar27 ^ 0x80000000;
          *(undefined1 *)(unaff_EBP - 0x4f4) = 0;
          FUN_00428400(pvVar26,(undefined4 *)(unaff_EBP - 0x508));
          *(float *)(iVar8 + 0x16c) = *(float *)(unaff_EBP - 0x2b40) + *(float *)(iVar8 + 0x16c);
          fVar54 = FUN_0040fda0(iVar8);
          *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
          if (*(float *)(unaff_EBP - 0x2b1c) <= *(float *)(iVar8 + 0x16c) &&
              *(float *)(iVar8 + 0x16c) != *(float *)(unaff_EBP - 0x2b1c)) {
            fVar54 = FUN_0040fda0(iVar8);
            *(float *)(iVar8 + 0x16c) = (float)fVar54;
          }
        }
        fVar54 = FUN_00414200(pcVar10);
        *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
        fVar54 = FUN_004055a0(2.0);
        *(float *)(unaff_EBP - 0x2b48) = (float)fVar54;
        fVar57 = (*(float *)(unaff_EBP - 0x2b1c) / *(float *)(unaff_EBP - 0x2b48)) *
                 *(float *)(unaff_EBP - 0x2b20);
        fVar56 = fVar57 + *(float *)(iVar8 + 0x13c);
        *(float *)(iVar8 + 0x13c) = fVar56;
        if (0.0 <= fVar56) {
          if (fVar56 - fVar57 < 0.0) {
            FUN_004c8530(unaff_EBP - 0x1ec);
            *(undefined4 *)(unaff_EBP - 0x1e0) = 0x2f;
            FUN_00402550((void *)(unaff_EBP - 0x1ec),(longlong *)(iVar8 + 0x10));
            FUN_00428590((void *)(*(int *)(unaff_EBP - 0x2b28) + 8),
                         (undefined4 *)(unaff_EBP - 0x1ec));
          }
          *(undefined4 *)(iVar8 + 0x13c) = 0;
        }
        if (*(int *)(iVar8 + 0x6c) / 400 !=
            (*(int *)(iVar8 + 0x6c) - *(int *)(unaff_EBP - 0x2b24)) / 400) {
          FUN_004c8530(unaff_EBP - 0x5a8);
          pvVar26 = *(void **)(unaff_EBP - 0x2b14);
          FUN_00402550((void *)(unaff_EBP - 0x5a8),(longlong *)((int)pvVar26 + 0x10));
          iVar8 = *(int *)(unaff_EBP - 0x2b28);
          *(undefined4 *)(unaff_EBP - 0x598) = 0x3f800000;
          *(undefined4 *)(unaff_EBP - 0x59c) = 0x2c;
          FUN_00428590((void *)(iVar8 + 8),(undefined4 *)(unaff_EBP - 0x5a8));
          goto LAB_0053e9a3;
        }
      }
      pvVar26 = *(void **)(unaff_EBP - 0x2b14);
    }
LAB_0053e9a3:
    FUN_004c8280((undefined4 *)(unaff_EBP - 0x2cdc));
    pvVar50 = (void *)((int)pvVar26 + 0x13a4);
    *(undefined1 *)(unaff_EBP - 4) = 0x17;
    FUN_00428070(pvVar50,(undefined4 *)(unaff_EBP - 0x2b7c));
    piVar53 = (int *)FUN_00530550(pvVar50,(undefined4 *)(unaff_EBP - 0x2cf8));
    bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b7c),piVar53);
    if (bVar3) {
      *(float *)(unaff_EBP - 0x2b1c) = *(float *)(unaff_EBP - 0x2b88) * 0.00025;
      do {
        puVar25 = (uint *)FUN_00402bc0((int *)(unaff_EBP - 0x2b7c));
        pvVar26 = *(void **)(unaff_EBP - 0x2b18);
        fVar56 = (float)puVar25[2] - *(float *)(unaff_EBP - 0x2b1c);
        *(float *)(unaff_EBP - 0x2b48) = fVar56;
        puVar25[2] = (uint)fVar56;
        uVar27 = FUN_00405420(pvVar26,puVar25);
        if (uVar27 != 0) {
          if ((0.0 < *(float *)(uVar27 + 0x16c)) &&
             (*(float *)(unaff_EBP - 0x2b48) <= 0.01 && *(float *)(unaff_EBP - 0x2b48) != 0.01)) {
            puVar25[2] = 0x3c23d70a;
          }
          if (((float)puVar25[2] <= 0.0) ||
             ((*puVar25 != 0 || puVar25[1] != 0 && (*(float *)(uVar27 + 0x16c) <= 0.0)))) {
            FUN_004d6620((void *)(unaff_EBP - 0x2cdc),(undefined4 *)(unaff_EBP - 0x2b7c));
          }
        }
        FUN_00407a30((void *)(unaff_EBP - 0x2b7c),(int *)(unaff_EBP - 0x2fb0));
        piVar53 = (int *)FUN_00530550(pvVar50,(undefined4 *)(unaff_EBP - 0x2cf8));
        bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b7c),piVar53);
      } while (bVar3);
      pvVar26 = *(void **)(unaff_EBP - 0x2b14);
    }
    FUN_00428070((void *)(unaff_EBP - 0x2cdc),(undefined4 *)(unaff_EBP - 0x2c4c));
    piVar53 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2cdc),(undefined4 *)(unaff_EBP - 0x2d00));
    bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c4c),piVar53);
    if (bVar3) {
      do {
        puVar19 = (undefined4 *)FUN_0052eb90((int *)(unaff_EBP - 0x2c4c));
        FUN_0040a1d0(pvVar50,(undefined4 *)(unaff_EBP - 0x2fb8),(int *)*puVar19);
        FUN_0052ebf0((void *)(unaff_EBP - 0x2c4c),(undefined4 *)(unaff_EBP - 0x2b30));
        piVar53 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2cdc),
                                      (undefined4 *)(unaff_EBP - 0x2d00));
        bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c4c),piVar53);
      } while (bVar3);
    }
    FUN_004c8280((undefined4 *)(unaff_EBP - 0x2ccc));
    pvVar50 = (void *)((int)pvVar26 + 0x13ac);
    *(undefined1 *)(unaff_EBP - 4) = 0x18;
    FUN_00428070(pvVar50,(undefined4 *)(unaff_EBP - 0x2b80));
    piVar53 = (int *)FUN_00530550(pvVar50,(undefined4 *)(unaff_EBP - 0x2ddc));
    bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b80),piVar53);
    if (bVar3) {
      *(undefined4 *)(unaff_EBP - 0x2d08) = 0;
      do {
        puVar25 = (uint *)FUN_00402bc0((int *)(unaff_EBP - 0x2b80));
        FUN_0052e710((float *)(puVar25 + 2),(float *)(unaff_EBP - 0x2d08),
                     *(int *)(unaff_EBP - 0x2b24),0.001);
        uVar27 = FUN_00405420(*(void **)(unaff_EBP - 0x2b18),puVar25);
        if ((uVar27 == 0) || (*(float *)(uVar27 + 0x16c) <= 0.0)) {
          FUN_004d6620((void *)(unaff_EBP - 0x2ccc),(undefined4 *)(unaff_EBP - 0x2b80));
        }
        FUN_00407a30((void *)(unaff_EBP - 0x2b80),(int *)(unaff_EBP - 0x2fc0));
        piVar53 = (int *)FUN_00530550(pvVar50,(undefined4 *)(unaff_EBP - 0x2ddc));
        bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b80),piVar53);
      } while (bVar3);
      pvVar26 = *(void **)(unaff_EBP - 0x2b14);
    }
    FUN_00428070((void *)(unaff_EBP - 0x2ccc),(undefined4 *)(unaff_EBP - 0x2c84));
    piVar53 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2ccc),(undefined4 *)(unaff_EBP - 0x2de4));
    bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c84),piVar53);
    if (bVar3) {
      do {
        puVar19 = (undefined4 *)FUN_0052eb90((int *)(unaff_EBP - 0x2c84));
        FUN_0040a1d0(pvVar50,(undefined4 *)(unaff_EBP - 0x2fc8),(int *)*puVar19);
        FUN_0052ebf0((void *)(unaff_EBP - 0x2c84),(undefined4 *)(unaff_EBP - 0x2b30));
        piVar53 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2ccc),
                                      (undefined4 *)(unaff_EBP - 0x2de4));
        bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c84),piVar53);
      } while (bVar3);
    }
    pvVar50 = *(void **)(unaff_EBP - 0x2b18);
    if ((((*(char *)((int)pvVar50 + 0xb4) == '\0') && (*(char *)((int)pvVar26 + 0x60) == '\x01')) &&
        (0.0 < *(float *)((int)pvVar26 + 0x16c))) &&
       (bVar3 = FUN_00530540((int)pvVar26 + 0x13a4), bVar3)) {
      fVar54 = FUN_0040fda0((int)pvVar26);
      *(float *)((int)pvVar26 + 0x16c) = (float)fVar54;
    }
    fVar56 = *(float *)(unaff_EBP - 0x2ba0);
    *(undefined1 *)(unaff_EBP - 0x2b29) = 1;
    FUN_004e1520((float *)(unaff_EBP - 0x1c),fVar56,(float *)((int)pvVar26 + 0x40));
    if (0 < *(int *)((int)pvVar26 + 300)) {
      puVar19 = FUN_00401080((void *)(unaff_EBP - 0x1418),0,0,0);
      FUN_00401060((void *)(unaff_EBP - 0x1c),puVar19);
    }
    if ((((*(byte *)((int)pvVar26 + 0x124) & 1) == 0) &&
        ((*(byte *)((int)pvVar26 + 0x5c) & 0x10) != 0)) &&
       (pfVar28 = (float *)FUN_004013d0((void *)(unaff_EBP - 0x1c),2), 0.0 < *pfVar28)) {
      *pfVar28 = 0.0;
    }
    puVar19 = (undefined4 *)FUN_0041cba0(unaff_EBP - 0x1c);
    *(undefined4 **)(unaff_EBP - 0x2b30) = puVar19;
    FUN_004cde20((void *)(unaff_EBP - 0xa4),puVar19);
    *(undefined4 *)(unaff_EBP - 0x2b78) = 0;
    fVar54 = FUN_00402180((float *)(unaff_EBP - 0xa4));
    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
    if (0.01 < *(float *)(unaff_EBP - 0x2b1c)) {
      puVar19 = (undefined4 *)FUN_0041cba0((int)pvVar26 + 0x34);
      FUN_004cde20((void *)(unaff_EBP - 0x94),puVar19);
      fVar54 = FUN_00402180((float *)(unaff_EBP - 0x94));
      *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
      if (0.01 < *(float *)(unaff_EBP - 0x2b1c)) {
        FUN_00401f50((float *)(unaff_EBP - 0xa4));
        FUN_00401f50((float *)(unaff_EBP - 0x94));
        pfVar28 = (float *)FUN_004013d0((void *)(unaff_EBP - 0x94),1);
        pfVar29 = (float *)FUN_004013d0((void *)(unaff_EBP - 0xa4),0);
        *(float *)(unaff_EBP - 0x2b1c) = *pfVar28 * *pfVar29;
        pfVar28 = (float *)FUN_004013d0((void *)(unaff_EBP - 0x94),0);
        pfVar29 = (float *)FUN_004013d0((void *)(unaff_EBP - 0xa4),1);
        fVar57 = *(float *)(unaff_EBP - 0x2b1c) - *pfVar28 * *pfVar29;
        fVar56 = -1.0;
        if ((fVar57 < -1.0) || (fVar56 = 1.0, 1.0 < fVar57)) {
          fVar57 = fVar56;
        }
        fVar54 = FUN_00402480(fVar57);
        *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
        pvVar26 = *(void **)(unaff_EBP - 0x2b14);
        *(float *)(unaff_EBP - 0x2b78) = (*(float *)(unaff_EBP - 0x2b1c) / 3.1415927) * 180.0 * 0.5;
      }
    }
    *(void **)(unaff_EBP - 0x2bb0) = (void *)((int)pvVar26 + 0x80);
    pfVar28 = (float *)FUN_004013d0((void *)((int)pvVar26 + 0x80),0);
    fVar56 = *pfVar28;
    *(float **)(unaff_EBP - 0x2b4c) = pfVar28;
    if (2.0 < fVar56) {
      *(float *)(unaff_EBP - 0x2b78) = (2.0 / fVar56) * *(float *)(unaff_EBP - 0x2b78);
    }
    cVar4 = FUN_0040f6e0((int)pvVar26);
    if (cVar4 == '\0') {
      *(void **)(unaff_EBP - 0x2b64) = (void *)((int)pvVar26 + 0x28);
      pfVar28 = (float *)FUN_004013d0((void *)((int)pvVar26 + 0x28),1);
      fVar56 = 0.005;
    }
    else {
      fVar56 = *(float *)(unaff_EBP - 0x2b78) * 40.0;
      *(float *)(unaff_EBP - 0x2b78) = fVar56;
      if (fVar56 <= 90.0) {
        if (fVar56 < -90.0) {
          *(undefined4 *)(unaff_EBP - 0x2b78) = 0xc2b40000;
        }
      }
      else {
        *(undefined4 *)(unaff_EBP - 0x2b78) = 0x42b40000;
      }
      *(void **)(unaff_EBP - 0x2b64) = (void *)((int)pvVar26 + 0x28);
      pfVar28 = (float *)FUN_004013d0((void *)((int)pvVar26 + 0x28),1);
      fVar56 = 0.001;
    }
    iVar8 = *(int *)(unaff_EBP - 0x2b24);
    *(float **)(unaff_EBP - 0x2b40) = pfVar28;
    FUN_0052e710(pfVar28,(float *)(unaff_EBP - 0x2b78),iVar8,fVar56);
    *(int *)(unaff_EBP - 0x2b3c) = (int)pvVar26 + 0x34;
    puVar19 = (undefined4 *)FUN_0041cba0((int)pvVar26 + 0x34);
    *(undefined4 **)(unaff_EBP - 0x2b5c) = puVar19;
    FUN_004cde20((void *)(unaff_EBP - 0xde8),puVar19);
    *(undefined4 *)(unaff_EBP - 0x2b60) = 0x40c00000;
    iVar8 = FUN_0040f650((int)pvVar26);
    if (((char)iVar8 != '\0') || ((*(ushort *)((int)pvVar26 + 0x7e) & 0x200) != 0)) {
      *(undefined4 *)(unaff_EBP - 0x2b60) = 0x41000000;
    }
    if (*(char *)((int)pvVar26 + 0x60) == '\x05') {
      *(undefined4 *)(unaff_EBP - 0x2b60) = 0x41400000;
    }
    if (*(char *)((int)pvVar26 + 0x68) == 'k') {
      if ((*(byte *)((int)pvVar26 + 0x5c) & 2) != 0) {
        fVar54 = FUN_004095d0(*(int *)((int)pvVar26 + 0x114c));
        *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
        fVar56 = *(float *)(unaff_EBP - 0x2b1c);
LAB_0053f086:
        *(float *)(unaff_EBP - 0x2b60) = fVar56 * *(float *)(unaff_EBP - 0x2b60);
      }
    }
    else if ((*(byte *)((int)pvVar26 + 0x5c) & 2) != 0) {
      fVar54 = FUN_004120f0(*(int *)((int)pvVar26 + 0x1148));
      *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
      fVar56 = *(float *)(unaff_EBP - 0x2b1c);
      goto LAB_0053f086;
    }
    if (pvVar26 == *(void **)((int)pvVar50 + 0xb8)) {
      if (((*(char *)((int)pvVar26 + 0x68) == 'k') && ((*(uint *)((int)pvVar26 + 0x5c) & 1) != 0))
         && ((*(uint *)((int)pvVar26 + 0x5c) & 2) == 0)) {
        *(undefined1 *)((int)pvVar26 + 0x68) = 0;
      }
      if ((pvVar26 == *(void **)((int)pvVar50 + 0xb8)) && (*(char *)((int)pvVar26 + 0x68) == 'j')) {
        puVar25 = (uint *)((int)pvVar26 + 0x11c8);
        uVar27 = FUN_00405420(pvVar50,puVar25);
        if ((uVar27 == 0) ||
           (uVar27 = FUN_00405420(pvVar50,puVar25), *(float *)(uVar27 + 0x16c) < 0.0)) {
LAB_0053f18c:
          pvVar26 = *(void **)(unaff_EBP - 0x2b14);
          bVar3 = pvVar26 == *(void **)((int)pvVar50 + 0xb8);
        }
        else {
          uVar27 = FUN_00405420(pvVar50,puVar25);
          uVar27 = FUN_0040f7f0(*(int *)(uVar27 + 100));
          if ((char)uVar27 == '\0') goto LAB_0053f18c;
          fVar54 = FUN_004116f0(*(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x113c));
          *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
          if (*(float *)(unaff_EBP - 0x2b1c) == 0.0) {
            *(undefined1 *)(*(int *)(unaff_EBP - 0x2b14) + 0x68) = 0;
            uVar27 = FUN_00405420(pvVar50,puVar25);
            pvVar26 = *(void **)(unaff_EBP - 0x2b14);
            bVar3 = uVar27 == 0;
          }
          else {
            *(float *)(unaff_EBP - 0x2b60) =
                 *(float *)(unaff_EBP - 0x2b1c) * *(float *)(unaff_EBP - 0x2b60);
            uVar27 = FUN_00405420(pvVar50,puVar25);
            pvVar26 = *(void **)(unaff_EBP - 0x2b14);
            bVar3 = uVar27 == 0;
          }
        }
        if (bVar3) {
          *(undefined1 *)((int)pvVar26 + 0x68) = 0;
        }
        fVar54 = FUN_004021b0((float *)(*(int *)((int)pvVar50 + 0xb8) + 0x40));
        *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
        if (0.0 < *(float *)(unaff_EBP - 0x2b1c)) {
          *(float *)((int)pvVar26 + 0x1198) =
               *(float *)((int)pvVar26 + 0x1198) - *(float *)(unaff_EBP - 0x2ba0) * 0.002;
        }
        if (*(float *)((int)pvVar26 + 0x1198) <= 0.0) {
          *(undefined4 *)((int)pvVar26 + 0x1198) = 0;
          *(undefined1 *)((int)pvVar26 + 0x68) = 0;
        }
        if ((*(byte *)((int)pvVar26 + 0x124) & 1) != 0) {
          *(undefined1 *)((int)pvVar26 + 0x68) = 0;
        }
      }
    }
    if ((pvVar26 == *(void **)((int)pvVar50 + 0xb8)) && ((*(byte *)((int)pvVar50 + 0x84) & 1) != 0))
    {
      *(undefined4 *)(unaff_EBP - 0x2b60) = 0x41a00000;
    }
    if ((*(byte *)((int)pvVar26 + 0x124) & 0x10) != 0) {
      fVar54 = FUN_0040a7f0(*(int *)((int)pvVar26 + 0x1144));
      *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
      if (*(float *)(unaff_EBP - 0x2b1c) <= 0.0) {
        *(ushort *)((int)pvVar26 + 0x124) = *(ushort *)((int)pvVar26 + 0x124) & 0xffef;
      }
      else if ((*(byte *)((int)pvVar26 + 0x5c) & 1) == 0) {
        *(float *)(unaff_EBP - 0x2b60) =
             *(float *)(unaff_EBP - 0x2b1c) * *(float *)(unaff_EBP - 0x2b60);
      }
    }
    if ((*(byte *)((int)pvVar26 + 0x124) & 1) == 0) {
LAB_0053f36a:
      fVar56 = *(float *)(unaff_EBP - 0x2b88);
    }
    else {
      fVar54 = FUN_004021b0((float *)((int)pvVar26 + 0x40));
      *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
      if (*(float *)(unaff_EBP - 0x2b1c) <= 0.0) goto LAB_0053f36a;
      fVar54 = FUN_00409740(*(int *)((int)pvVar26 + 0x1140));
      *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
      if (*(float *)(unaff_EBP - 0x2b1c) <= 0.0) {
        *(ushort *)((int)pvVar26 + 0x124) = *(ushort *)((int)pvVar26 + 0x124) & 0xfffe;
        goto LAB_0053f36a;
      }
      if (((*(byte *)((int)pvVar26 + 0x124) & 0x10) != 0) ||
         ((*(uint *)((int)pvVar26 + 0x5c) & 4) == 0)) goto LAB_0053f36a;
      fVar56 = *(float *)(unaff_EBP - 0x2b88);
      if ((*(uint *)((int)pvVar26 + 0x5c) & 1) == 0) {
        fVar57 = *(float *)((int)pvVar26 + 0x1194) -
                 (1.0 - *(float *)(unaff_EBP - 0x2b1c)) * 0.0005 * fVar56;
        *(float *)((int)pvVar26 + 0x1194) = fVar57;
        if (fVar57 < 0.0) {
          *(undefined4 *)((int)pvVar26 + 0x1194) = 0;
        }
        if (*(float *)((int)pvVar26 + 0x1194) <= 0.01 && *(float *)((int)pvVar26 + 0x1194) != 0.01)
        {
          *(ushort *)((int)pvVar26 + 0x124) = *(ushort *)((int)pvVar26 + 0x124) & 0xfffe;
        }
      }
    }
    if (*(char *)((int)pvVar26 + 0x68) == 'O') {
      fVar54 = FUN_00409de0((int)pvVar26,0x4f,-1);
      *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
      *(float *)(unaff_EBP - 0x2b60) =
           (*(float *)(unaff_EBP - 0x2b1c) * 0.4 + 0.5) * *(float *)(unaff_EBP - 0x2b60);
      iVar8 = FUN_0041cae0((int)pvVar50);
      fVar54 = FUN_004055a0(((float)iVar8 * 2.0) / 8.64e+07 - 1.0);
      *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
      fVar54 = FUN_004055a0(1.0 - *(float *)(unaff_EBP - 0x2b1c));
      *(float *)(unaff_EBP - 0x2b48) = (float)fVar54;
      puVar25 = (uint *)((int)pvVar26 + 0x10);
      *(uint **)(unaff_EBP - 0x2b20) = puVar25;
      fVar54 = FUN_004d5c80(pvVar50,puVar25);
      *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
      *(float *)(unaff_EBP - 0x2b54) =
           *(float *)(unaff_EBP - 0x2b1c) * *(float *)(unaff_EBP - 0x2b48);
      FUN_00428070((void *)(unaff_EBP - 0x2bf0),(undefined4 *)(unaff_EBP - 0x2c7c));
      piVar53 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2bf0),(undefined4 *)(unaff_EBP - 0x2e04))
      ;
      bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c7c),piVar53);
      if (bVar3) {
        do {
          piVar53 = (int *)FUN_00402bc0((int *)(unaff_EBP - 0x2c7c));
          iVar8 = *piVar53;
          FUN_00428070((void *)(iVar8 + 4),(undefined4 *)(unaff_EBP - 0x2c34));
          piVar9 = (int *)FUN_00530550((void *)(iVar8 + 4),(undefined4 *)(unaff_EBP - 0x2dec));
          bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c34),piVar9);
          if (bVar3) {
            do {
              iVar8 = FUN_0052eb90((int *)(unaff_EBP - 0x2c34));
              if ((*(byte *)(iVar8 + 0x38) & 1) != 0) {
                puVar25 = FUN_00402c50((void *)(iVar8 + 8),(uint *)(unaff_EBP - 0x21b4),
                                       *(uint **)(unaff_EBP - 0x2b20));
                pfVar28 = FUN_00402550((void *)(unaff_EBP - 0x18ec),(longlong *)puVar25);
                fVar54 = FUN_004021b0(pfVar28);
                *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
                if (*(float *)(unaff_EBP - 0x2b1c) < 256.0) {
                  fVar56 = 1.0 - *(float *)(unaff_EBP - 0x2b1c) * 0.00390625;
                  *(float *)(unaff_EBP - 0x2b54) =
                       fVar56 * fVar56 * 0.5 + *(float *)(unaff_EBP - 0x2b54);
                }
              }
              FUN_0052ebf0((void *)(unaff_EBP - 0x2c34),(undefined4 *)(unaff_EBP - 0x2b74));
              piVar9 = (int *)FUN_00530550((void *)(*piVar53 + 4),(undefined4 *)(unaff_EBP - 0x2dec)
                                          );
              bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c34),piVar9);
            } while (bVar3);
          }
          iVar8 = *piVar53;
          FUN_00530550((void *)(iVar8 + 0xc),(undefined4 *)(unaff_EBP - 0x2c3c));
          piVar9 = (int *)FUN_004d3de0((void *)(iVar8 + 0xc),(undefined4 *)(unaff_EBP - 0x2df4));
          bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c3c),piVar9);
          if (bVar3) {
            do {
              piVar9 = (int *)FUN_004ce1f0((undefined4 *)(unaff_EBP - 0x2c3c));
              if (*piVar9 == 0x32) {
                puVar25 = FUN_00402c50(piVar9 + 2,(uint *)(unaff_EBP - 0x2454),
                                       *(uint **)(unaff_EBP - 0x2b20));
                pfVar28 = FUN_00402550((void *)(unaff_EBP - 0x1430),(longlong *)puVar25);
                fVar54 = FUN_004021b0(pfVar28);
                *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
                if (*(float *)(unaff_EBP - 0x2b1c) < 256.0) {
                  fVar56 = 1.0 - *(float *)(unaff_EBP - 0x2b1c) * 0.00390625;
                  *(float *)(unaff_EBP - 0x2b54) =
                       fVar56 * fVar56 * 0.5 + *(float *)(unaff_EBP - 0x2b54);
                }
              }
              FUN_004ce200((void *)(unaff_EBP - 0x2c3c),(int *)(unaff_EBP - 0x2b74));
              piVar9 = (int *)FUN_004d3de0((void *)(*piVar53 + 0xc),
                                           (undefined4 *)(unaff_EBP - 0x2df4));
              bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c3c),piVar9);
            } while (bVar3);
          }
          iVar8 = *piVar53;
          FUN_00530550((void *)(iVar8 + 0x30),(undefined4 *)(unaff_EBP - 0x2c74));
          piVar9 = (int *)FUN_004d3de0((void *)(iVar8 + 0x30),(undefined4 *)(unaff_EBP - 0x2dfc));
          bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c74),piVar9);
          if (bVar3) {
            do {
              pcVar10 = (char *)FUN_004ce1f0((undefined4 *)(unaff_EBP - 0x2c74));
              if (*pcVar10 == '\x12') {
                puVar25 = FUN_00402c50(pcVar10 + 0x118,(uint *)(unaff_EBP - 0x21e4),
                                       *(uint **)(unaff_EBP - 0x2b20));
                pfVar28 = FUN_00402550((void *)(unaff_EBP - 0x1718),(longlong *)puVar25);
                fVar54 = FUN_004021b0(pfVar28);
                *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
                if (*(float *)(unaff_EBP - 0x2b1c) < 256.0) {
                  fVar56 = 1.0 - *(float *)(unaff_EBP - 0x2b1c) * 0.00390625;
                  *(float *)(unaff_EBP - 0x2b54) =
                       fVar56 * fVar56 * 0.5 + *(float *)(unaff_EBP - 0x2b54);
                }
              }
              FUN_0041e300((void *)(unaff_EBP - 0x2c74),(int *)(unaff_EBP - 0x2b74));
              piVar9 = (int *)FUN_004d3de0((void *)(*piVar53 + 0x30),
                                           (undefined4 *)(unaff_EBP - 0x2dfc));
              bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c74),piVar9);
            } while (bVar3);
          }
          FUN_00407a30((void *)(unaff_EBP - 0x2c7c),(int *)(unaff_EBP - 0x2fd0));
          piVar53 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2bf0),
                                        (undefined4 *)(unaff_EBP - 0x2e04));
          bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c7c),piVar53);
        } while (bVar3);
        puVar25 = *(uint **)(unaff_EBP - 0x2b20);
        pvVar50 = *(void **)(unaff_EBP - 0x2b18);
      }
      if (1.0 < *(float *)(unaff_EBP - 0x2b54)) {
        *(undefined4 *)(unaff_EBP - 0x2b54) = 0x3f800000;
      }
      FUN_00428070((void *)((int)pvVar50 + 4),(undefined4 *)(unaff_EBP - 0x2c40));
      piVar53 = (int *)FUN_00530550((void *)((int)pvVar50 + 4),(undefined4 *)(unaff_EBP - 0x2e0c));
      bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c40),piVar53);
      if (bVar3) {
        pvVar26 = *(void **)(unaff_EBP - 0x2b6c);
        do {
          iVar8 = FUN_00402bc0((int *)(unaff_EBP - 0x2c40));
          iVar8 = *(int *)(iVar8 + 8);
          if ((iVar8 != 0) && ((*(ushort *)(iVar8 + 0x124) & 0x200) != 0)) {
            puVar16 = FUN_00402c50((void *)(iVar8 + 0x10),(uint *)(unaff_EBP - 0x25a4),puVar25);
            pfVar28 = FUN_00402550((void *)(unaff_EBP - 0x1448),(longlong *)puVar16);
            fVar54 = FUN_004021b0(pfVar28);
            *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
            if (*(float *)(unaff_EBP - 0x2b1c) < 100.0) {
              fVar56 = 1.0 - *(float *)(unaff_EBP - 0x2b1c) / 100.0;
              *(float *)(unaff_EBP - 0x2b54) = fVar56 * fVar56 + *(float *)(unaff_EBP - 0x2b54);
            }
          }
          FUN_00407a30((void *)(unaff_EBP - 0x2c40),(int *)(unaff_EBP - 0x2fd8));
          piVar53 = (int *)FUN_00530550(pvVar26,(undefined4 *)(unaff_EBP - 0x2e0c));
          bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c40),piVar53);
        } while (bVar3);
        pvVar50 = *(void **)(unaff_EBP - 0x2b18);
      }
      pvVar26 = *(void **)(unaff_EBP - 0x2b14);
      fVar54 = FUN_00409de0((int)pvVar26,0x4f,-1);
      *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
      *(float *)(unaff_EBP - 0x2b90) =
           1.0 - (0.9 - *(float *)(unaff_EBP - 0x2b1c) * 0.5) * *(float *)(unaff_EBP - 0x2b54);
      fVar54 = FUN_00409de0((int)pvVar26,0x4f,-1);
      *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
      *(float *)(unaff_EBP - 0x2b1c) = 0.5 - *(float *)(unaff_EBP - 0x2b1c) * 0.5;
      fVar54 = FUN_00401d80((float *)((int)pvVar26 + 0x34));
      *(float *)(unaff_EBP - 0x2b48) = (float)fVar54;
      fVar56 = (*(float *)(unaff_EBP - 0x2b90) -
               *(float *)(unaff_EBP - 0x2b1c) * *(float *)(unaff_EBP - 0x2b48)) *
               *(float *)(unaff_EBP - 0x2b88) * 0.0005 + *(float *)((int)pvVar26 + 0x1190);
      *(float *)((int)pvVar26 + 0x1190) = fVar56;
      if (fVar56 < 0.0) {
        *(undefined4 *)((int)pvVar26 + 0x1190) = 0;
      }
      fVar56 = *(float *)((int)pvVar26 + 0x1190);
LAB_0053fa21:
      if (1.0 < fVar56) {
        *(undefined4 *)((int)pvVar26 + 0x1190) = 0x3f800000;
      }
    }
    else {
      if ((*(ushort *)((int)pvVar26 + 0x124) & 0x400) != 0) {
        fVar54 = FUN_00409de0((int)pvVar26,99,-1);
        *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
        fVar56 = (*(float *)(unaff_EBP - 0x2b1c) * 0.0005 + 1e-05) * *(float *)(unaff_EBP - 0x2b88)
                 + *(float *)((int)pvVar26 + 0x1190);
        *(float *)((int)pvVar26 + 0x1190) = fVar56;
        goto LAB_0053fa21;
      }
      fVar56 = *(float *)((int)pvVar26 + 0x1190) - fVar56 * 0.0005;
      *(float *)((int)pvVar26 + 0x1190) = fVar56;
      if (fVar56 < 0.0) {
        *(undefined4 *)((int)pvVar26 + 0x1190) = 0;
      }
    }
    puVar19 = FUN_0040ef90(pvVar26,3);
    if (puVar19 != (undefined4 *)0x0) {
      *(undefined4 *)((int)pvVar26 + 0x1190) = 0x3f800000;
    }
    fVar56 = *(float *)(unaff_EBP - 0x2b88);
    fVar57 = fVar56 * 0.00025 * *(float *)((int)pvVar26 + 0x1190) + *(float *)((int)pvVar26 + 0x170)
    ;
    *(float *)((int)pvVar26 + 0x170) = fVar57;
    if (1.0 < fVar57) {
      *(undefined4 *)((int)pvVar26 + 0x170) = 0x3f800000;
    }
    uVar2 = *(ushort *)((int)pvVar26 + 0x124);
    if (((uVar2 & 0x10) == 0) || ((*(byte *)((int)pvVar26 + 0x5c) & 1) != 0)) {
      if (((uVar2 & 1) == 0) ||
         ((((uVar2 & 0x10) != 0 || ((*(uint *)((int)pvVar26 + 0x5c) & 4) == 0)) ||
          ((*(uint *)((int)pvVar26 + 0x5c) & 1) != 0)))) {
        fVar56 = fVar56 * 0.0001 + *(float *)((int)pvVar26 + 0x1194);
        goto LAB_0053fb19;
      }
    }
    else if ((uVar2 & 0x40) != 0) {
      fVar56 = *(float *)((int)pvVar26 + 0x1194) - fVar56 * 0.0002;
LAB_0053fb19:
      *(float *)((int)pvVar26 + 0x1194) = fVar56;
    }
    if (*(float *)((int)pvVar26 + 0x1194) <= 0.0 && *(float *)((int)pvVar26 + 0x1194) != 0.0) {
      *(undefined4 *)((int)pvVar26 + 0x1194) = 0;
    }
    if (1.0 < *(float *)((int)pvVar26 + 0x1194)) {
      *(undefined4 *)((int)pvVar26 + 0x1194) = 0x3f800000;
    }
    uVar2 = *(ushort *)((int)pvVar26 + 0x124);
    if ((((uVar2 & 0x40) != 0) &&
        (((uVar2 & 1) == 0 || ((*(byte *)((int)pvVar26 + 0x5c) & 4) == 0)))) &&
       (((uVar2 & 0x10) == 0 || ((*(byte *)((int)pvVar26 + 0x5c) & 1) != 0)))) {
      *(float *)(unaff_EBP - 0x2b60) = *(float *)(unaff_EBP - 0x2b60) * 2.0;
    }
    puVar19 = FUN_0040ef90(pvVar26,0xc);
    if (puVar19 != (undefined4 *)0x0) {
      fVar54 = FUN_00409de0((int)pvVar26,100,-1);
      *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
      *(float *)(unaff_EBP - 0x2b60) =
           (*(float *)(unaff_EBP - 0x2b1c) + 1.0) * *(float *)(unaff_EBP - 0x2b60);
    }
    if (*(char *)((int)pvVar26 + 0x68) == '0') {
LAB_0053fc10:
      *(undefined4 *)(unaff_EBP - 0x2b60) = 0x42200000;
    }
    else {
      if (*(char *)((int)pvVar26 + 0x68) == '6') {
        iVar8 = FUN_00407db0(pvVar26,0xffffffff);
        iVar17 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
        pvVar26 = *(void **)(unaff_EBP - 0x2b14);
        if (*(int *)((int)pvVar26 + 0x6c) < iVar8 + iVar17) goto LAB_0053fc10;
      }
      if (((*(char *)((int)pvVar26 + 0x68) == '2') || (*(char *)((int)pvVar26 + 0x68) == '`')) &&
         (*(int *)((int)pvVar26 + 0x6c) < 500)) goto LAB_0053fc10;
    }
    cVar4 = *(char *)((int)pvVar26 + 0x68);
    *(undefined1 *)(unaff_EBP - 0x2c90) = 0;
    if ((cVar4 == '0') ||
       ((((((((cVar4 == ':' || (cVar4 == 'A')) || (cVar4 == 'B')) ||
            ((cVar4 == 'C' || (cVar4 == '\f')))) || (cVar4 == '\x10')) ||
          ((cVar4 == '\x03' || (cVar4 == '>')))) ||
         (((((cVar4 == '\v' || (((cVar4 == '\x04' || (cVar4 == '\x01')) || (cVar4 == '\t')))) ||
            ((cVar4 == '\x02' || (cVar4 == '\x06')))) || (cVar4 == '\a')) ||
          (((((cVar4 == '\x0e' || (cVar4 == '\r')) ||
             ((cVar4 == '\x0f' || (((cVar4 == '\x14' || (cVar4 == '\x13')) || (cVar4 == '\x12'))))))
            || ((cVar4 == '\x11' || (cVar4 == '\x05')))) || (cVar4 == '\n')))))) &&
        (*(int *)((int)pvVar26 + 0x6c) < 200)))) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (((pvVar26 == *(void **)((int)pvVar50 + 0xb8)) || (*(char *)((int)pvVar50 + 0xb4) == '\0'))
       && (bVar3)) {
      FUN_00428070(*(void **)(unaff_EBP - 0x2b6c),(undefined4 *)(unaff_EBP - 0x2c88));
      piVar53 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),
                                    (undefined4 *)(unaff_EBP - 0x2e14));
      bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c88),piVar53);
      if (bVar3) {
        do {
          iVar8 = FUN_00402bc0((int *)(unaff_EBP - 0x2c88));
          piVar53 = (int *)(iVar8 + 8);
          pvVar50 = (void *)*piVar53;
          if ((((pvVar50 != (void *)0x0) && (pvVar50 != pvVar26)) &&
              (0.0 < *(float *)((int)pvVar50 + 0x16c))) &&
             (uVar66 = FUN_004d18c0((int)pvVar26,(int)pvVar50), (char)uVar66 != '\0')) {
            iVar8 = *piVar53;
            FUN_004013d0((void *)(iVar8 + 0x80),0);
            puVar25 = (uint *)(unaff_EBP - 0x360c);
            puVar16 = FUN_00402c50((void *)(*(int *)(unaff_EBP - 0x2b14) + 0x10),
                                   (uint *)(unaff_EBP - 0x2214),(uint *)(iVar8 + 0x10));
            ppVar30 = (pair<unsigned___int64,unsigned___int64> *)FUN_0041cba0(puVar16);
            ppVar30 = std::pair<unsigned___int64,unsigned___int64>::
                      operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                                ((pair<unsigned___int64,unsigned___int64> *)(unaff_EBP - 0x1bcc),
                                 ppVar30);
            puVar25 = FUN_0041ce90(ppVar30,puVar25);
            uVar66 = FUN_004dade0(puVar25);
            pvVar26 = *(void **)(unaff_EBP - 0x2b14);
            if ((char)uVar66 != '\0') {
              pvVar50 = (void *)FUN_004e2320((void *)((int)pvVar26 + 0x10),2);
              plVar31 = (longlong *)FUN_00401490(pvVar50,(int *)(unaff_EBP - 0x361c),pvVar50);
              fVar54 = FUN_00401420(plVar31);
              fVar54 = FUN_00401ca0((float)fVar54);
              iVar8 = *piVar53;
              *(float *)(unaff_EBP - 0x2b48) = (float)fVar54;
              pfVar28 = (float *)FUN_004013d0((void *)(iVar8 + 0x80),2);
              *(float *)(unaff_EBP - 0x2b1c) = *pfVar28 * 0.5;
              pfVar28 = (float *)FUN_004013d0((void *)((int)pvVar26 + 0x80),2);
              uVar27 = *(uint *)(unaff_EBP - 0x2c90) & 0xff;
              fVar56 = *(float *)(unaff_EBP - 0x2b1c) + *pfVar28 + 1.0;
              if (*(float *)(unaff_EBP - 0x2b48) <= fVar56 &&
                  fVar56 != *(float *)(unaff_EBP - 0x2b48)) {
                uVar27 = 1;
              }
              *(uint *)(unaff_EBP - 0x2c90) = uVar27;
            }
          }
          FUN_00407a30((void *)(unaff_EBP - 0x2c88),(int *)(unaff_EBP - 0x2fe0));
          piVar53 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),
                                        (undefined4 *)(unaff_EBP - 0x2e14));
          bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c88),piVar53);
        } while (bVar3);
        cVar4 = (char)*(undefined4 *)(unaff_EBP - 0x2c90);
        if (cVar4 == '\0') goto LAB_0053feb1;
LAB_0053febe:
        if (*(char *)((int)pvVar26 + 0x68) == '0') {
          *(undefined4 *)((int)pvVar26 + 0x13b4) = 0;
          *(undefined4 *)((int)pvVar26 + 0x170) = 0x3f800000;
          *(undefined1 *)((int)pvVar26 + 0x68) = 0;
          *(undefined4 *)((int)pvVar26 + 0x6c) = 0;
          if (*(char *)((int)pvVar26 + 0xaa8) == '\x03') {
            if (*(char *)((int)pvVar26 + 0xaa9) == '\x05') {
              *(undefined1 *)((int)pvVar26 + 0x68) = 5;
            }
            else {
              uVar5 = 0x14;
              if (*(char *)((int)pvVar26 + 0xaa9) == '\x03') {
                uVar5 = 0x11;
              }
              *(undefined1 *)((int)pvVar26 + 0x68) = uVar5;
            }
          }
        }
        if (*(char *)((int)pvVar26 + 0x68) == '/') {
          *(undefined4 *)((int)pvVar26 + 0x13b4) = 0;
          *(undefined1 *)((int)pvVar26 + 0x68) = 0x36;
        }
        if (cVar4 == '\0') goto LAB_0053ff2b;
      }
      else {
        cVar4 = (char)*(undefined4 *)(unaff_EBP - 0x2c90);
LAB_0053feb1:
        if (500 < *(int *)((int)pvVar26 + 0x6c)) goto LAB_0053febe;
LAB_0053ff2b:
        FUN_00401cd0((undefined4 *)(unaff_EBP - 0x1c9c));
        pfVar28 = (float *)FUN_004013d0((void *)((int)pvVar26 + 0x28),2);
        FUN_00402030((void *)(unaff_EBP - 0x1c9c),*pfVar28);
        pfVar28 = (float *)FUN_00401080((void *)(unaff_EBP - 0x1a0c),0,
                                        *(float *)(unaff_EBP - 0x2b60) * 2.0,0);
        pfVar28 = (float *)FUN_004dde00((void *)(unaff_EBP - 0x1c9c),(float *)(unaff_EBP - 0x1460),
                                        pfVar28);
        FUN_00401650((void *)(unaff_EBP - 0x1c),pfVar28);
      }
      pvVar50 = *(void **)(unaff_EBP - 0x2b18);
    }
    if (*(char *)((int)pvVar26 + 0x68) == 'Q') {
      iVar8 = FUN_00413aa0((char *)((int)pvVar26 + 0x1e8));
      if (iVar8 < *(int *)((int)pvVar26 + 0x6c)) {
        *(undefined1 *)((int)pvVar26 + 0x68) = 0x53;
      }
      else {
        *(undefined4 *)(unaff_EBP - 0x2b60) = 0;
      }
    }
    if ((*(int *)((int)pvVar26 + 0x128) != 0) &&
       (((*(char *)((int)pvVar26 + 0x68) != '2' && (*(char *)((int)pvVar26 + 0x68) != '`')) ||
        (iVar8 = FUN_004084b0((int)pvVar26), iVar8 < *(int *)((int)pvVar26 + 0x6c))))) {
      if ((*(char *)((int)pvVar26 + 0x140) == '\x04') && (*(char *)((int)pvVar26 + 0x141) == '\x01')
         ) {
        cVar4 = *(char *)((int)pvVar26 + 0x68);
        if (((cVar4 != '\x05') && (cVar4 != '\x14')) && (cVar4 != '\x11')) {
          *(undefined1 *)((int)pvVar26 + 0x68) = 0;
        }
      }
      else {
        *(undefined1 *)((int)pvVar26 + 0x68) = 0;
        *(undefined4 *)((int)pvVar26 + 0x144) = 0;
      }
    }
    cVar4 = *(char *)((int)pvVar26 + 0x68);
    *(undefined1 *)(unaff_EBP - 0x2b84) = 0;
    if ((((cVar4 == 'D') || (cVar4 == ']')) || (cVar4 == 'E')) &&
       (iVar8 = FUN_00407db0(pvVar26,0xffffffff), *(int *)((int)pvVar26 + 0x6c) <= iVar8)) {
      *(undefined4 *)(unaff_EBP - 0x2b60) = 0;
    }
    cVar4 = *(char *)((int)pvVar26 + 0x68);
    if ((((cVar4 == 'D') || (cVar4 == ']')) || (cVar4 == 'E')) &&
       (iVar8 = FUN_00407db0(pvVar26,0xffffffff), iVar8 < *(int *)((int)pvVar26 + 0x6c))) {
      iVar8 = FUN_00411d60(pvVar26,0xffffffff);
      iVar17 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      pvVar26 = *(void **)(unaff_EBP - 0x2b14);
      if (*(int *)((int)pvVar26 + 0x6c) <
          iVar17 + ((int)((iVar8 * 3 >> 0x1f & 3U) + iVar8 * 3) >> 2)) {
        FUN_00401cd0((undefined4 *)(unaff_EBP - 0x1cdc));
        pfVar28 = (float *)FUN_004013d0((void *)((int)pvVar26 + 0x28),2);
        FUN_00402030((void *)(unaff_EBP - 0x1cdc),*pfVar28);
        pfVar28 = (float *)FUN_00401080((void *)(unaff_EBP - 0x1730),0,0x3f800000,0);
        pfVar28 = (float *)FUN_004dde00((void *)(unaff_EBP - 0x1cdc),(float *)(unaff_EBP - 0x1478),
                                        pfVar28);
        puVar19 = (undefined4 *)FUN_004e1520((float *)(unaff_EBP - 0x1910),20.0,pfVar28);
        FUN_00401060((void *)(unaff_EBP - 0x1c),puVar19);
        *(undefined4 *)(unaff_EBP - 0x2b60) = 0x42480000;
        *(undefined1 *)(unaff_EBP - 0x2b84) = 1;
      }
    }
    if ((*(char *)((int)pvVar26 + 0x68) == 'M') &&
       (iVar8 = FUN_00407db0(pvVar26,0xffffffff), iVar8 < *(int *)((int)pvVar26 + 0x6c))) {
      iVar8 = FUN_00407db0(pvVar26,0xffffffff);
      iVar17 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      if (*(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c) < iVar8 + iVar17) {
        FUN_00401cd0((undefined4 *)(unaff_EBP - 0x1d5c));
        pfVar28 = (float *)FUN_004013d0(*(void **)(unaff_EBP - 0x2b64),2);
        FUN_00402030((void *)(unaff_EBP - 0x1d5c),*pfVar28);
        pfVar28 = (float *)FUN_00401080((void *)(unaff_EBP - 0x1490),0xbf800000,0,0);
        pfVar28 = (float *)FUN_004dde00((void *)(unaff_EBP - 0x1d5c),(float *)(unaff_EBP - 0x1748),
                                        pfVar28);
        puVar19 = (undefined4 *)FUN_004e1520((float *)(unaff_EBP - 0x14a8),20.0,pfVar28);
        FUN_00401060((void *)(unaff_EBP - 0x1c),puVar19);
        *(undefined4 *)(unaff_EBP - 0x2b60) = 0x42700000;
        *(undefined1 *)(unaff_EBP - 0x2b84) = 1;
      }
      pvVar26 = *(void **)(unaff_EBP - 0x2b14);
    }
    if ((*(char *)((int)pvVar26 + 0x68) == 'N') &&
       (iVar8 = FUN_00407db0(pvVar26,0xffffffff), iVar8 < *(int *)((int)pvVar26 + 0x6c))) {
      iVar8 = FUN_00407db0(pvVar26,0xffffffff);
      iVar17 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      if (*(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c) < iVar8 + iVar17) {
        FUN_00401cd0((undefined4 *)(unaff_EBP - 0x1ddc));
        pfVar28 = (float *)FUN_004013d0(*(void **)(unaff_EBP - 0x2b64),2);
        FUN_00402030((void *)(unaff_EBP - 0x1ddc),*pfVar28);
        pfVar28 = (float *)FUN_00401080((void *)(unaff_EBP - 0x1a9c),0x3f800000,0,0);
        pfVar28 = (float *)FUN_004dde00((void *)(unaff_EBP - 0x1ddc),(float *)(unaff_EBP - 0x14c0),
                                        pfVar28);
        puVar19 = (undefined4 *)FUN_004e1520((float *)(unaff_EBP - 0x1760),20.0,pfVar28);
        FUN_00401060((void *)(unaff_EBP - 0x1c),puVar19);
        *(undefined4 *)(unaff_EBP - 0x2b60) = 0x42700000;
        *(undefined1 *)(unaff_EBP - 0x2b84) = 1;
      }
      pvVar26 = *(void **)(unaff_EBP - 0x2b14);
    }
    if ((*(char *)((int)pvVar26 + 0x68) == 'L') &&
       (iVar8 = FUN_00407db0(pvVar26,0xffffffff), iVar8 < *(int *)((int)pvVar26 + 0x6c))) {
      iVar8 = FUN_00407db0(pvVar26,0xffffffff);
      iVar17 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      if (*(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c) < iVar8 + iVar17) {
        FUN_00401cd0((undefined4 *)(unaff_EBP - 0x1d9c));
        pfVar28 = (float *)FUN_004013d0(*(void **)(unaff_EBP - 0x2b64),2);
        FUN_00402030((void *)(unaff_EBP - 0x1d9c),*pfVar28);
        pfVar28 = (float *)FUN_00401080((void *)(unaff_EBP - 0x14d8),0,0x3f800000,0);
        pfVar28 = (float *)FUN_004dde00((void *)(unaff_EBP - 0x1d9c),(float *)(unaff_EBP - 0x1934),
                                        pfVar28);
        puVar19 = (undefined4 *)FUN_004e1520((float *)(unaff_EBP - 0x14f0),20.0,pfVar28);
        FUN_00401060((void *)(unaff_EBP - 0x1c),puVar19);
        *(undefined4 *)(unaff_EBP - 0x2b60) = 0x42700000;
        *(undefined1 *)(unaff_EBP - 0x2b84) = 1;
      }
      pvVar26 = *(void **)(unaff_EBP - 0x2b14);
    }
    if ((*(char *)((int)pvVar26 + 0x68) == 'G') &&
       (iVar8 = FUN_004084b0((int)pvVar26), *(int *)((int)pvVar26 + 0x6c) < iVar8)) {
      *(undefined4 *)(unaff_EBP - 0x2b60) = 0;
      *(undefined1 *)(unaff_EBP - 0x2b84) = 1;
    }
    if ((*(char *)((int)pvVar26 + 0x68) == 'H') &&
       (iVar8 = FUN_004084b0((int)pvVar26), *(int *)((int)pvVar26 + 0x6c) < iVar8)) {
      pfVar28 = (float *)FUN_004013d0((void *)((int)pvVar26 + 0x28),2);
      fVar56 = *(float *)(unaff_EBP - 0x2ba0);
      *(undefined1 *)(unaff_EBP - 0x2b84) = 1;
      *pfVar28 = fVar56 * 720.0 + *pfVar28;
      *(undefined4 *)(unaff_EBP - 0x2b60) = 0x41400000;
    }
    cVar4 = *(char *)((int)pvVar26 + 0x68);
    if ((((cVar4 == 'D') || (cVar4 == ']')) || (cVar4 == 'E')) &&
       (iVar8 = FUN_00407db0(pvVar26,0xffffffff), iVar8 < *(int *)((int)pvVar26 + 0x6c))) {
      iVar8 = FUN_004084b0((int)pvVar26);
      uVar27 = *(uint *)(unaff_EBP - 0x2b84) & 0xff;
      if (*(int *)((int)pvVar26 + 0x6c) < iVar8) {
        uVar27 = 1;
      }
      *(uint *)(unaff_EBP - 0x2b84) = uVar27;
    }
    if (*(char *)((int)pvVar26 + 0x60) == '\x04') {
      *(undefined4 *)(unaff_EBP - 0x2b60) = 0x41f00000;
    }
    if (((*(char *)((int)pvVar26 + 0x68) == '9') || (*(char *)((int)pvVar26 + 0x68) == 'J')) &&
       ((iVar8 = FUN_004084b0((int)pvVar26), *(int *)((int)pvVar26 + 0x6c) < iVar8 &&
        ((iVar8 = FUN_00407db0(pvVar26,0xffffffff), iVar8 <= *(int *)((int)pvVar26 + 0x6c) &&
         (iVar8 = FUN_00407db0(pvVar26,0xffffffff), iVar8 <= *(int *)((int)pvVar26 + 0x6c))))))) {
      *(undefined4 *)(unaff_EBP - 0x2b60) = 0x3dcccccd;
      *(undefined1 *)(unaff_EBP - 0x2b84) = 1;
    }
    if (*(char *)((int)pvVar26 + 0x68) == '$') {
      fVar54 = FUN_00412150((int)pvVar26);
      *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
      *(float *)((int)pvVar26 + 0x144) =
           *(float *)(unaff_EBP - 0x2b1c) * *(float *)(unaff_EBP - 0x2b88) * 0.0005 +
           *(float *)((int)pvVar26 + 0x144);
    }
    cVar4 = *(char *)((int)pvVar26 + 0x68);
    if ((((((cVar4 == '\x18') || (cVar4 == '\x19')) || (cVar4 == '\x1b')) ||
         ((cVar4 == '\b' || (cVar4 == ';')))) || ((cVar4 == '?' || (cVar4 == '@')))) &&
       (iVar8 = FUN_00407db0(pvVar26,0xffffffff), iVar8 <= *(int *)((int)pvVar26 + 0x6c))) {
      fVar54 = FUN_00412150((int)pvVar26);
      *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
      cVar4 = *(char *)((int)pvVar26 + 0x140);
      *(float *)(unaff_EBP - 0x2b20) =
           *(float *)(unaff_EBP - 0x2b1c) * *(float *)(unaff_EBP - 0x2b88) * 0.00075;
      if ((cVar4 == '\x02') && (*(char *)((int)pvVar26 + 0x141) == '\0')) {
        *(float *)(unaff_EBP - 0x2b1c) = (float)*(int *)((int)pvVar26 + 0x70);
        iVar8 = FUN_0040fcf0((int)pvVar26);
        if (*(float *)(unaff_EBP - 0x2b1c) / (float)iVar8 <= 4.0) {
          *(float *)(unaff_EBP - 0x2b1c) = (float)*(int *)((int)pvVar26 + 0x70);
          iVar8 = FUN_0040fcf0((int)pvVar26);
          fVar56 = *(float *)(unaff_EBP - 0x2b1c) / (float)iVar8;
        }
        else {
          fVar56 = 4.0;
        }
        *(float *)(unaff_EBP - 0x2b20) = (fVar56 + 1.0) * *(float *)(unaff_EBP - 0x2b20);
      }
      puVar19 = FUN_0040ef90(pvVar26,2);
      if (puVar19 == (undefined4 *)0x0) {
        fVar56 = *(float *)(unaff_EBP - 0x2b20);
      }
      else {
        fVar54 = FUN_00409de0((int)pvVar26,0x66,-1);
        *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
        fVar56 = (*(float *)(unaff_EBP - 0x2b1c) * 9.0 + 1.0) * *(float *)(unaff_EBP - 0x2b20);
      }
      *(float *)((int)pvVar26 + 0x144) = fVar56 + *(float *)((int)pvVar26 + 0x144);
      puVar19 = FUN_0040ef90(pvVar26,10);
      if (puVar19 != (undefined4 *)0x0) {
        *(undefined4 *)((int)pvVar26 + 0x144) = *(undefined4 *)((int)pvVar26 + 0x170);
      }
    }
    if (*(float *)((int)pvVar26 + 0x170) < *(float *)((int)pvVar26 + 0x144)) {
      *(float *)((int)pvVar26 + 0x144) = *(float *)((int)pvVar26 + 0x170);
    }
    fVar56 = *(float *)(unaff_EBP - 0x2b60);
    if (*(int *)((int)pvVar26 + 0x134) != 0) {
      fVar56 = fVar56 * 0.5;
      *(float *)(unaff_EBP - 0x2b60) = fVar56;
    }
    if (*(int *)((int)pvVar26 + 0x138) != 0) {
      *(float *)(unaff_EBP - 0x2b60) = fVar56 * 1.5;
    }
    if ((((*(byte *)((int)pvVar26 + 0x124) & 4) != 0) && (*(int *)((int)pvVar26 + 0x128) == 0)) &&
       (((*(char *)((int)pvVar26 + 0x68) != '2' && (*(char *)((int)pvVar26 + 0x68) != '`')) ||
        (1000 < *(int *)((int)pvVar26 + 0x6c))))) {
      puVar19 = (undefined4 *)FUN_0041cba0((int)pvVar26 + 0x160);
      pfVar28 = (float *)FUN_004cde20((void *)(unaff_EBP - 0xec0),
                                      *(undefined4 **)(unaff_EBP - 0x2b5c));
      pfVar29 = (float *)FUN_004cde20((void *)(unaff_EBP - 0xe40),puVar19);
      fVar54 = FUN_00401570(pfVar29,pfVar28);
      *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
      if (*(float *)(unaff_EBP - 0x2b1c) <= 0.0 && *(float *)(unaff_EBP - 0x2b1c) != 0.0) {
        FUN_004cde20((void *)(unaff_EBP - 0x84),puVar19);
        FUN_004cde20((void *)(unaff_EBP - 0x260),*(undefined4 **)(unaff_EBP - 0x2b5c));
        FUN_00401f50((float *)(unaff_EBP - 0x84));
        FUN_00401f50((float *)(unaff_EBP - 0x260));
        fVar54 = FUN_00401570((float *)(unaff_EBP - 0x84),(float *)(unaff_EBP - 0x260));
        *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
        *(float *)(unaff_EBP - 0x2b60) =
             (*(float *)(unaff_EBP - 0x2b1c) * 0.5 + 1.0) * *(float *)(unaff_EBP - 0x2b60);
      }
    }
    FUN_00401650(*(void **)(unaff_EBP - 0x2b3c),(float *)(unaff_EBP - 0x1c));
    pfVar28 = (float *)FUN_004cde20((void *)(unaff_EBP - 0xe90),*(undefined4 **)(unaff_EBP - 0x2b5c)
                                   );
    fVar54 = FUN_00402180(pfVar28);
    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
    if (*(float *)(unaff_EBP - 0x2b60) * *(float *)(unaff_EBP - 0x2b60) <
        *(float *)(unaff_EBP - 0x2b1c)) {
      FUN_004cde20((void *)(unaff_EBP - 0x8c),*(undefined4 **)(unaff_EBP - 0x2b5c));
      FUN_00401f50((float *)(unaff_EBP - 0x8c));
      FUN_004015e0((void *)(unaff_EBP - 0x8c),*(float *)(unaff_EBP - 0x2b60));
      puVar19 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 0x8c),0);
      puVar32 = (undefined4 *)FUN_004013d0(*(void **)(unaff_EBP - 0x2b3c),0);
      *puVar32 = *puVar19;
      puVar19 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 0x8c),1);
      puVar32 = (undefined4 *)FUN_004013d0(*(void **)(unaff_EBP - 0x2b3c),1);
      *puVar32 = *puVar19;
    }
    iVar8 = *(int *)(unaff_EBP - 0x2b14);
    if ((((*(ushort *)(iVar8 + 0x124) & 1) == 0) || ((*(ushort *)(iVar8 + 0x124) & 0x10) != 0)) ||
       ((*(byte *)(iVar8 + 0x5c) & 4) == 0)) {
      if (((*(byte *)(iVar8 + 0x7e) & 2) == 0) || (0 < *(int *)(iVar8 + 300))) {
        cVar4 = FUN_0040f6e0(iVar8);
        if (cVar4 == '\0') {
          pfVar28 = (float *)FUN_004013d0((void *)(iVar8 + 0x34),2);
          fVar56 = *pfVar28;
          *(float **)(unaff_EBP - 0x2bb4) = pfVar28;
          if (0.0 <= fVar56) {
            plVar31 = (longlong *)FUN_004e2320((void *)(iVar8 + 0x10),2);
            fVar54 = FUN_00401420(plVar31);
            *(float *)(iVar8 + 0x13bc) = (float)fVar54;
            pfVar28 = *(float **)(unaff_EBP - 0x2bb4);
          }
          *pfVar28 = *pfVar28 - *(float *)(unaff_EBP - 0x2ba0) * 30.0;
          goto LAB_00540a07;
        }
      }
      pfVar28 = (float *)FUN_004013d0((void *)(iVar8 + 0x34),2);
      fVar56 = *(float *)(unaff_EBP - 0x2ba0);
      fVar57 = *pfVar28;
      *(float **)(unaff_EBP - 0x2bb4) = pfVar28;
      *pfVar28 = fVar57 - fVar56 * 0.1 * 30.0;
LAB_0054099d:
      plVar31 = (longlong *)FUN_004e2320((void *)(iVar8 + 0x10),2);
      fVar54 = FUN_00401420(plVar31);
      *(float *)(iVar8 + 0x13bc) = (float)fVar54;
    }
    else {
      iVar17 = *(int *)(unaff_EBP - 0x2b24);
      fVar56 = 0.0025;
      puVar33 = (undefined8 *)FUN_00401080((void *)(unaff_EBP - 0x1778),0,0,0);
      FUN_0052e7c0((float *)(iVar8 + 0x34),puVar33,iVar17,fVar56);
      pfVar28 = (float *)FUN_004013d0((void *)(iVar8 + 0x34),2);
      fVar56 = *pfVar28;
      *(float **)(unaff_EBP - 0x2bb4) = pfVar28;
      if (-10.0 < fVar56) goto LAB_0054099d;
    }
LAB_00540a07:
    if ((iVar8 == *(int *)((int)pvVar50 + 0xb8)) && ((*(byte *)(iVar8 + 0x124) & 0x10) != 0)) {
      uVar27 = *(uint *)(iVar8 + 0x5c);
      if ((uVar27 & 2) == 0) {
        if ((uVar27 & 1) == 0) {
          if ((uVar27 & 4) != 0) {
            fVar54 = FUN_004021b0((float *)(iVar8 + 0x34));
            *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
            if (64.0 < *(float *)(unaff_EBP - 0x2b1c)) {
              fVar54 = FUN_004015a0((float *)(iVar8 + 0x11a0),(float *)(iVar8 + 0x34));
              *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
              if (*(float *)(unaff_EBP - 0x2b1c) <= -4.0 && *(float *)(unaff_EBP - 0x2b1c) != -4.0)
              {
                iVar17 = FUN_0040ffe0(iVar8);
                *(int *)(iVar8 + 300) = iVar17;
                FUN_00405570((longlong *)(iVar8 + 0x10),0x10,'\0');
                FUN_004c8530(unaff_EBP - 0x5c0);
                FUN_00402550((void *)(unaff_EBP - 0x5c0),(longlong *)(iVar8 + 0x10));
                iVar8 = *(int *)(unaff_EBP - 0x2b28);
                *(undefined4 *)(unaff_EBP - 0x5b0) = 0x3f800000;
                *(undefined4 *)(unaff_EBP - 0x5b4) = 0x17;
                FUN_00428590((void *)(iVar8 + 8),(undefined4 *)(unaff_EBP - 0x5c0));
                iVar8 = *(int *)(unaff_EBP - 0x2b14);
              }
            }
          }
          if ((*(byte *)(iVar8 + 0x124) & 0x40) != 0) {
            fVar56 = **(float **)(unaff_EBP - 0x2bb4);
            if (fVar56 < 0.0) {
              **(float **)(unaff_EBP - 0x2bb4) = *(float *)(unaff_EBP - 0x2ba0) * 30.0 + fVar56;
            }
          }
          pfVar28 = FUN_004d9720((float *)(unaff_EBP - 0x1508));
          pfVar28 = (float *)FUN_004e1520((float *)(unaff_EBP - 0x1a30),
                                          *(float *)(unaff_EBP - 0x2ba0),pfVar28);
          FUN_00401650((void *)(iVar8 + 0x34),pfVar28);
        }
        else {
          fVar54 = FUN_00401ca0(**(float **)(unaff_EBP - 0x2b40));
          *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
          if (40.0 < *(float *)(unaff_EBP - 0x2b1c)) {
            iVar17 = FUN_0040ffe0(iVar8);
            *(int *)(iVar8 + 300) = iVar17;
            FUN_00405570((longlong *)(iVar8 + 0x10),0x10,'\0');
            FUN_004c8530(unaff_EBP - 0x8f0);
            FUN_00402550((void *)(unaff_EBP - 0x8f0),(longlong *)(iVar8 + 0x10));
            iVar8 = *(int *)(unaff_EBP - 0x2b28);
            *(undefined4 *)(unaff_EBP - 0x8e0) = 0x3f800000;
            *(undefined4 *)(unaff_EBP - 0x8e4) = 0x17;
            FUN_00428590((void *)(iVar8 + 8),(undefined4 *)(unaff_EBP - 0x8f0));
            iVar8 = *(int *)(unaff_EBP - 0x2b14);
          }
        }
      }
      else {
        FUN_00405570((void *)(iVar8 + 0x10),0x10,'\0');
      }
    }
    if (0 < *(int *)(iVar8 + 300)) {
      FUN_00405570((void *)(iVar8 + 0x10),0x10,'\0');
      FUN_00405570((void *)(iVar8 + 0x10),1,'\0');
      iVar8 = *(int *)(unaff_EBP - 0x2b14);
      *(undefined4 *)(iVar8 + 0x144) = 0;
    }
    if ((*(char *)(iVar8 + 0x68) != '\0') &&
       (iVar17 = FUN_004084b0(iVar8), *(int *)(iVar8 + 0x6c) < iVar17)) {
      FUN_00405570((void *)(iVar8 + 0x10),0x10,'\0');
      FUN_00405570((void *)(iVar8 + 0x10),1,'\0');
      iVar8 = *(int *)(unaff_EBP - 0x2b14);
    }
    *(float **)(unaff_EBP - 0x2b74) = (float *)(iVar8 + 0x4c);
    pfVar28 = (float *)FUN_004014f0((void *)(iVar8 + 0x34),(float *)(unaff_EBP - 0x1520),
                                    (float *)(iVar8 + 0x4c));
    puVar19 = (undefined4 *)
              FUN_004e1520((float *)(unaff_EBP - 0x1790),*(float *)(unaff_EBP - 0x2ba0),pfVar28);
    FUN_00401060((void *)(unaff_EBP - 0x1c),puVar19);
    if (((*(char *)(iVar8 + 0x60) != '\x06') && (*(char *)(iVar8 + 0x68) != 'S')) &&
       (*(char *)(iVar8 + 0x68) != 'T')) {
      FUN_00428070((void *)((int)pvVar50 + 4),(undefined4 *)(unaff_EBP - 0x2c98));
      piVar53 = (int *)FUN_00530550((void *)((int)pvVar50 + 4),(undefined4 *)(unaff_EBP - 0x2e1c));
      bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c98),piVar53);
      if (bVar3) {
        do {
          iVar8 = FUN_00402bc0((int *)(unaff_EBP - 0x2c98));
          piVar53 = (int *)(iVar8 + 8);
          iVar8 = *piVar53;
          if ((((iVar8 != 0) && (iVar17 = *(int *)(unaff_EBP - 0x2b14), iVar8 != iVar17)) &&
              ((*(char *)(iVar17 + 0x60) != '\0' ||
               ((*(char *)(iVar8 + 0x60) == '\x01' || (*(char *)(iVar8 + 0x60) == '\x06')))))) &&
             (0.0 < *(float *)(iVar8 + 0x16c))) {
            FUN_00401060((void *)(unaff_EBP - 0x1bc),(undefined4 *)(iVar8 + 0x80));
            if (*(char *)(*piVar53 + 0x60) != '\x06') {
              piVar9 = FUN_00402990((void *)(unaff_EBP - 0x1538),1,1,0);
              FUN_004c64b0((void *)(unaff_EBP - 0x974),piVar9);
              FUN_00401650((void *)(unaff_EBP - 0x1bc),(float *)(unaff_EBP - 0x974));
            }
            iVar8 = FUN_004013d0((void *)(unaff_EBP - 0x1bc),0);
            pvVar50 = (void *)(iVar17 + 0x10);
            *(int *)(unaff_EBP - 0x2b20) = iVar8;
            iVar8 = FUN_004e2320(pvVar50,0);
            *(int *)(unaff_EBP - 0x2b3c) = iVar8;
            piVar9 = (int *)(unaff_EBP - 0x367c);
            pvVar26 = (void *)FUN_004e2320((void *)(*piVar53 + 0x10),0);
            puVar25 = (uint *)FUN_004014b0(pvVar26,piVar9);
            pvVar26 = (void *)FUN_00401530(*(void **)(unaff_EBP - 0x2b3c),
                                           (int *)(unaff_EBP - 0x368c));
            uVar27 = FUN_004ce380(pvVar26,puVar25);
            if ((char)uVar27 != '\0') {
              piVar9 = (int *)(unaff_EBP - 0x369c);
              pvVar26 = (void *)FUN_004e2320((void *)(*piVar53 + 0x10),0);
              puVar25 = (uint *)FUN_00401530(pvVar26,piVar9);
              pvVar26 = (void *)FUN_004014b0(*(void **)(unaff_EBP - 0x2b3c),
                                             (int *)(unaff_EBP - 0x36ac));
              uVar27 = FUN_004ce350(pvVar26,puVar25);
              if ((char)uVar27 != '\0') {
                iVar8 = FUN_004013d0((void *)(unaff_EBP - 0x1bc),1);
                pvVar26 = *(void **)(unaff_EBP - 0x2bb0);
                *(int *)(unaff_EBP - 0x2b20) = iVar8;
                iVar8 = FUN_004013d0(pvVar26,1);
                *(int *)(unaff_EBP - 0x2b3c) = iVar8;
                iVar8 = FUN_004e2320(pvVar50,1);
                *(int *)(unaff_EBP - 0x2b50) = iVar8;
                piVar9 = (int *)(unaff_EBP - 0x36bc);
                pvVar26 = (void *)FUN_004e2320((void *)(*piVar53 + 0x10),1);
                puVar25 = (uint *)FUN_004014b0(pvVar26,piVar9);
                pvVar26 = (void *)FUN_00401530(*(void **)(unaff_EBP - 0x2b50),
                                               (int *)(unaff_EBP - 0x36cc));
                uVar27 = FUN_004ce380(pvVar26,puVar25);
                if ((char)uVar27 != '\0') {
                  piVar9 = (int *)(unaff_EBP - 0x373c);
                  pvVar26 = (void *)FUN_004e2320((void *)(*piVar53 + 0x10),1);
                  puVar25 = (uint *)FUN_00401530(pvVar26,piVar9);
                  pvVar26 = (void *)FUN_004014b0(*(void **)(unaff_EBP - 0x2b50),
                                                 (int *)(unaff_EBP - 0x374c));
                  uVar27 = FUN_004ce350(pvVar26,puVar25);
                  if ((char)uVar27 != '\0') {
                    iVar8 = FUN_004013d0((void *)(unaff_EBP - 0x1bc),2);
                    pvVar26 = *(void **)(unaff_EBP - 0x2bb0);
                    *(int *)(unaff_EBP - 0x2b20) = iVar8;
                    iVar8 = FUN_004013d0(pvVar26,2);
                    *(int *)(unaff_EBP - 0x2b3c) = iVar8;
                    iVar8 = FUN_004e2320(pvVar50,2);
                    *(int *)(unaff_EBP - 0x2b50) = iVar8;
                    piVar9 = (int *)(unaff_EBP - 0x31e4);
                    pvVar26 = (void *)FUN_004e2320((void *)(*piVar53 + 0x10),2);
                    puVar25 = (uint *)FUN_004014b0(pvVar26,piVar9);
                    pvVar26 = (void *)FUN_00401530(*(void **)(unaff_EBP - 0x2b50),
                                                   (int *)(unaff_EBP - 0x35b4));
                    uVar27 = FUN_004ce380(pvVar26,puVar25);
                    if ((char)uVar27 != '\0') {
                      piVar9 = (int *)(unaff_EBP - 0x3454);
                      pvVar26 = (void *)FUN_004e2320((void *)(*piVar53 + 0x10),2);
                      puVar25 = (uint *)FUN_00401530(pvVar26,piVar9);
                      pvVar26 = (void *)FUN_004014b0(*(void **)(unaff_EBP - 0x2b50),
                                                     (int *)(unaff_EBP - 0x31ac));
                      uVar27 = FUN_004ce350(pvVar26,puVar25);
                      if ((char)uVar27 != '\0') {
                        puVar25 = FUN_00402c50(pvVar50,(uint *)(unaff_EBP - 0x1df4),
                                               (uint *)(*piVar53 + 0x10));
                        FUN_00402550((void *)(unaff_EBP - 0x150),(longlong *)puVar25);
                        puVar19 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 0x150),2);
                        *puVar19 = 0;
                        fVar54 = FUN_004021b0((float *)(unaff_EBP - 0x150));
                        *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
                        if (0.0 < *(float *)(unaff_EBP - 0x2b1c)) {
                          FUN_00401fb0((float *)(unaff_EBP - 0x150));
                          if (0 < *(int *)(*(int *)(unaff_EBP - 0x2b14) + 300)) {
                            FUN_00401610((void *)(unaff_EBP - 0x150),0.1);
                          }
                          pfVar28 = (float *)(unaff_EBP - 0x150);
                          pfVar29 = (float *)FUN_004013d0((void *)(*piVar53 + 0x80),0);
                          pfVar28 = (float *)FUN_004e1520((float *)(unaff_EBP - 0x1958),
                                                          (*(float *)(unaff_EBP - 0x2ba0) * 5.0 *
                                                          *pfVar29) /
                                                          **(float **)(unaff_EBP - 0x2b4c),pfVar28);
                          FUN_00401650((void *)(unaff_EBP - 0x1c),pfVar28);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          FUN_00407a30((void *)(unaff_EBP - 0x2c98),(int *)(unaff_EBP - 0x2c1c));
          piVar53 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),
                                        (undefined4 *)(unaff_EBP - 0x2e1c));
          bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c98),piVar53);
        } while (bVar3);
        pvVar50 = *(void **)(unaff_EBP - 0x2b18);
        iVar8 = *(int *)(unaff_EBP - 0x2b14);
      }
    }
    fVar54 = FUN_00401d80((float *)(unaff_EBP - 0x1c));
    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar54;
    iVar17 = (int)(*(float *)(unaff_EBP - 0x2b1c) + 1.0);
    *(int *)(unaff_EBP - 0x2b1c) = iVar17;
    FUN_00401610((void *)(unaff_EBP - 0x1c),1.0 / (float)iVar17);
    *(undefined1 *)(unaff_EBP - 0x2bac) = 0;
    *(undefined4 **)(unaff_EBP - 0x2b60) = (undefined4 *)(iVar8 + 0x10);
    FUN_00402a40((void *)(unaff_EBP - 0x1b2c),(undefined4 *)(iVar8 + 0x10));
    cVar4 = *(char *)((int)pvVar50 + 0xb4);
    *(undefined1 *)(unaff_EBP - 0x2bc5) = 0;
    *(undefined1 *)(unaff_EBP - 0x2b94) = 0;
    if (((cVar4 == '\0') || (iVar8 == *(int *)((int)pvVar50 + 0xb8))) &&
       (*(char *)(iVar8 + 0x60) != '\x06')) {
      FUN_005308b0(pvVar50,iVar8);
    }
    iVar17 = *(int *)(unaff_EBP - 0x2b1c);
    *(undefined4 *)(unaff_EBP - 0x2b48) = 0;
    if (0 < iVar17) {
      iVar8 = FUN_004013d0((void *)(unaff_EBP - 0x2d8),0);
      *(int *)(unaff_EBP - 0x2e24) = iVar8;
      iVar8 = FUN_004013d0((void *)(unaff_EBP - 0x2f0),0);
      *(int *)(unaff_EBP - 0x2b50) = iVar8;
LAB_00541280:
      FUN_004cde40((void *)(unaff_EBP - 0x2dac),0);
      iVar17 = 0;
      *(undefined4 *)(unaff_EBP - 0x2b54) = 0;
LAB_00541295:
      iVar8 = FUN_004013d0((void *)(unaff_EBP - 0x1c),iVar17);
      *(int *)(unaff_EBP - 0x2bb8) = iVar8;
      FUN_00402a10((ulonglong *)(unaff_EBP - 0x3060));
      pvVar26 = *(void **)(unaff_EBP - 0x2b60);
      pvVar34 = (void *)FUN_004e2320(pvVar26,*(int *)(unaff_EBP - 0x2b54));
      *(void **)(unaff_EBP - 0x2b90) = pvVar34;
      FUN_00402e60(pvVar34,(uint *)(unaff_EBP - 0x3060));
      pfVar28 = *(float **)(unaff_EBP - 0x2bb0);
      *(undefined1 *)(unaff_EBP - 0x2b31) = 0;
      FUN_004e1520((float *)(unaff_EBP - 0x1550),0.5,pfVar28);
      FUN_00402510(unaff_EBP - 0x19b8);
      puVar25 = FUN_00402c50(pvVar26,(uint *)(unaff_EBP - 0x2244),(uint *)(unaff_EBP - 0x19b8));
      FUN_00405450((int *)(unaff_EBP - 0x2d8),puVar25);
      FUN_004e1520((float *)(unaff_EBP - 0x17a8),0.5,*(float **)(unaff_EBP - 0x2bb0));
      FUN_00402510(unaff_EBP - 0x19dc);
      puVar25 = FUN_00402cb0(pvVar26,(uint *)(unaff_EBP - 0x2694),(uint *)(unaff_EBP - 0x19dc));
      FUN_00405450((int *)(unaff_EBP - 0x2f0),puVar25);
      iVar8 = **(int **)(unaff_EBP - 0x2e24);
      piVar53 = *(int **)(unaff_EBP - 0x2b50);
      *(int *)(unaff_EBP - 0x2b20) = iVar8;
      if (iVar8 <= *piVar53) {
        puVar25 = (uint *)FUN_004013d0((void *)(unaff_EBP - 0x2d8),1);
        *(uint **)(unaff_EBP - 0x2b70) = puVar25;
        piVar53 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x2f0),1);
        piVar9 = *(int **)(unaff_EBP - 0x2b50);
        *(int **)(unaff_EBP - 0x2b3c) = piVar53;
        do {
          uVar27 = *puVar25;
          if ((int)uVar27 <= *piVar53) {
            piVar35 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x2d8),2);
            *(int **)(unaff_EBP - 0x2bbc) = piVar35;
            piVar53 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x2f0),2);
            piVar9 = *(int **)(unaff_EBP - 0x2b3c);
            *(int **)(unaff_EBP - 0x2b98) = piVar53;
            do {
              iVar8 = *piVar35;
              if (iVar8 <= *piVar53) {
                do {
                  puVar36 = FUN_00405fd0(*(void **)(unaff_EBP - 0x2b18),
                                         *(uint *)(unaff_EBP - 0x2b20),uVar27,iVar8,0);
                  uVar66 = FUN_004061f0((int)puVar36);
                  if ((char)uVar66 == '\0') {
                    if ((*(ushort *)(*(int *)(unaff_EBP - 0x2b14) + 0x7e) & 0x100) != 0) {
                      puVar36 = FUN_00405fd0(*(void **)(unaff_EBP - 0x2b18),
                                             *(uint *)(unaff_EBP - 0x2b20),uVar27,iVar8,0);
                      bVar6 = FUN_00406280((int)puVar36);
                      if (CONCAT31(extraout_var_00,bVar6) != 2) goto LAB_00541472;
                    }
                    cVar4 = *(char *)(unaff_EBP - 0x2b31);
                  }
                  else {
LAB_00541472:
                    cVar4 = '\x01';
                    *(undefined1 *)(unaff_EBP - 0x2b31) = 1;
                  }
                  piVar53 = *(int **)(unaff_EBP - 0x2b98);
                  iVar8 = iVar8 + 1;
                } while (iVar8 <= *piVar53);
                if (cVar4 != '\0') {
                  if ((*(int *)(unaff_EBP - 0x2b54) != 2) || (*(char *)(unaff_EBP - 0x2bac) != '\0')
                     ) goto LAB_00541f04;
                  goto LAB_005414e8;
                }
                piVar9 = *(int **)(unaff_EBP - 0x2b3c);
              }
              piVar35 = *(int **)(unaff_EBP - 0x2bbc);
              uVar27 = uVar27 + 1;
            } while ((int)uVar27 <= *piVar9);
            iVar8 = *(int *)(unaff_EBP - 0x2b20);
            piVar53 = *(int **)(unaff_EBP - 0x2b3c);
            piVar9 = *(int **)(unaff_EBP - 0x2b50);
          }
          iVar8 = iVar8 + 1;
          *(int *)(unaff_EBP - 0x2b20) = iVar8;
          if (*piVar9 < iVar8) goto LAB_005414e8;
          puVar25 = *(uint **)(unaff_EBP - 0x2b70);
        } while( true );
      }
      goto LAB_005414ee;
    }
LAB_00542a67:
    uVar27 = *(uint *)(iVar8 + 0x5c);
    *(uint *)(unaff_EBP - 0x2be0) = uVar27 >> 1 & 0xffffff01;
    *(byte *)(unaff_EBP - 0x2b31) = *(byte *)(iVar8 + 0x5c) & 1;
    *(uint *)(unaff_EBP - 0x2bd8) = uVar27 >> 2 & 0xffffff01;
    FUN_00401060((void *)(unaff_EBP - 0x11c),(undefined4 *)(iVar8 + 0x11a0));
    iVar17 = *(int *)(unaff_EBP - 0x2b24);
    *(undefined4 *)(iVar8 + 0x5c) = 0;
    *(int *)(iVar8 + 0x145c) = *(int *)(iVar8 + 0x145c) + iVar17;
    if (*(int *)(iVar8 + 300) < 1) {
      pfVar28 = (float *)FUN_004cde20((void *)(unaff_EBP - 0xe78),
                                      *(undefined4 **)(unaff_EBP - 0x2b5c));
      fVar54 = FUN_00402180(pfVar28);
      *(float *)(unaff_EBP - 0x2b74) = (float)fVar54;
      if (16.0 < *(float *)(unaff_EBP - 0x2b74)) {
        fVar54 = FUN_004021b0((float *)(iVar8 + 0x40));
        *(float *)(unaff_EBP - 0x2b74) = (float)fVar54;
        if (16.0 < *(float *)(unaff_EBP - 0x2b74)) {
          puVar25 = FUN_00402c50((void *)(unaff_EBP - 0x1b2c),(uint *)(unaff_EBP - 0x1f5c),
                                 (uint *)(iVar8 + 0x10));
          pfVar28 = FUN_00402550((void *)(unaff_EBP - 0x12d4),(longlong *)puVar25);
          fVar54 = FUN_004021b0(pfVar28);
          *(float *)(unaff_EBP - 0x2b9c) = (float)fVar54;
          fVar54 = FUN_004021b0((float *)(unaff_EBP - 0x1c));
          *(float *)(unaff_EBP - 0x2b74) = (float)fVar54;
          fVar56 = *(float *)(unaff_EBP - 0x2b74) * 0.01;
          if (*(float *)(unaff_EBP - 0x2b9c) <= fVar56 && fVar56 != *(float *)(unaff_EBP - 0x2b9c))
          {
            *(uint *)(iVar8 + 0x5c) = *(uint *)(iVar8 + 0x5c) | 0x20;
          }
        }
      }
    }
    if (*(char *)(unaff_EBP - 0x2bc5) != '\0') {
      *(uint *)(iVar8 + 0x5c) = *(uint *)(iVar8 + 0x5c) | 0x40;
    }
    pfVar28 = *(float **)(unaff_EBP - 0x2bb0);
    FUN_004e1520((float *)(unaff_EBP - 0x12ec),0.5,pfVar28);
    FUN_00402510(unaff_EBP - 0x1af0);
    puVar25 = FUN_00402c50((void *)(iVar8 + 0x10),(uint *)(unaff_EBP - 0x1f8c),
                           (uint *)(unaff_EBP - 0x1af0));
    FUN_00405450((int *)(unaff_EBP - 0x34),puVar25);
    FUN_004e1520((float *)(unaff_EBP - 0x1304),0.5,pfVar28);
    FUN_00402510(unaff_EBP - 0x9b0);
    puVar25 = FUN_00402cb0((void *)(iVar8 + 0x10),(uint *)(unaff_EBP - 0x1fbc),
                           (uint *)(unaff_EBP - 0x9b0));
    FUN_00405450((int *)(unaff_EBP - 0x28),puVar25);
    piVar53 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x34),0);
    iVar8 = *piVar53;
    *(int **)(unaff_EBP - 0x2b20) = piVar53;
    *(int *)(unaff_EBP - 0x2b3c) = iVar8;
    piVar53 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x28),0);
    *(int **)(unaff_EBP - 0x2b70) = piVar53;
    if (iVar8 <= *piVar53) {
      puVar25 = (uint *)FUN_004013d0((void *)(unaff_EBP - 0x34),1);
      *(uint **)(unaff_EBP - 0x2b9c) = puVar25;
      piVar53 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x28),1);
      *(int **)(unaff_EBP - 0x2b48) = piVar53;
      do {
        uVar27 = *puVar25;
        if ((int)uVar27 <= *piVar53) {
          piVar9 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x34),2);
          *(int **)(unaff_EBP - 0x2b74) = piVar9;
          piVar53 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x28),2);
          *(int **)(unaff_EBP - 0x2b1c) = piVar53;
          do {
            iVar8 = *piVar9;
            if (iVar8 <= *piVar53) {
              do {
                puVar36 = FUN_00405fd0(*(void **)(unaff_EBP - 0x2b18),*(uint *)(unaff_EBP - 0x2b3c),
                                       uVar27,iVar8,0);
                bVar6 = FUN_00406280((int)puVar36);
                if (CONCAT31(extraout_var_01,bVar6) != 2) {
                  puVar25 = (uint *)(*(int *)(unaff_EBP - 0x2b14) + 0x5c);
                  *puVar25 = *puVar25 | 0x10;
                  piVar53 = *(int **)(unaff_EBP - 0x2b1c);
                  break;
                }
                piVar53 = *(int **)(unaff_EBP - 0x2b1c);
                iVar8 = iVar8 + 1;
              } while (iVar8 <= *piVar53);
            }
            if ((*(byte *)(*(int *)(unaff_EBP - 0x2b14) + 0x5c) & 0x10) != 0) break;
            piVar9 = *(int **)(unaff_EBP - 0x2b74);
            uVar27 = uVar27 + 1;
          } while ((int)uVar27 <= **(int **)(unaff_EBP - 0x2b48));
          iVar8 = *(int *)(unaff_EBP - 0x2b3c);
          piVar53 = *(int **)(unaff_EBP - 0x2b48);
        }
        if ((*(byte *)(*(int *)(unaff_EBP - 0x2b14) + 0x5c) & 0x10) != 0) break;
        piVar9 = *(int **)(unaff_EBP - 0x2b70);
        puVar25 = *(uint **)(unaff_EBP - 0x2b9c);
        iVar8 = iVar8 + 1;
        *(int *)(unaff_EBP - 0x2b3c) = iVar8;
      } while (iVar8 <= *piVar9);
      piVar53 = *(int **)(unaff_EBP - 0x2b70);
    }
    iVar8 = *(int *)(unaff_EBP - 0x2b14);
    *(undefined1 *)(unaff_EBP - 0x2bdc) = 0;
    if (*(char *)(iVar8 + 0x60) == '\x06') {
      iVar8 = *(int *)(unaff_EBP - 0x2b14);
      pvVar26 = *(void **)(unaff_EBP - 0x2bb0);
    }
    else {
      puVar25 = (uint *)FUN_004013d0((void *)(unaff_EBP - 0x34),2);
      uVar27 = *puVar25;
      *(uint **)(unaff_EBP - 0x2b48) = puVar25;
      piVar9 = *(int **)(unaff_EBP - 0x2b20);
      *(uint *)(unaff_EBP - 0x2b54) = uVar27;
      iVar8 = *piVar9;
      *(int *)(unaff_EBP - 0x2b3c) = iVar8;
      if (iVar8 <= *piVar53) {
        piVar9 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x34),1);
        *(int **)(unaff_EBP - 0x2b9c) = piVar9;
        piVar53 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x28),1);
        piVar35 = *(int **)(unaff_EBP - 0x2b70);
        iVar8 = *(int *)(unaff_EBP - 0x2b3c);
        *(int **)(unaff_EBP - 0x2b1c) = piVar53;
        do {
          iVar17 = *piVar9;
          *(int *)(unaff_EBP - 0x2b50) = iVar17;
          if (iVar17 <= *piVar53) {
            piVar9 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x28),2);
            piVar53 = *(int **)(unaff_EBP - 0x2b1c);
            piVar35 = *(int **)(unaff_EBP - 0x2b48);
            *(int **)(unaff_EBP - 0x2b74) = piVar9;
            do {
              iVar8 = *piVar35;
              iVar40 = iVar8;
              if (iVar8 <= *piVar9) {
                do {
                  iVar40 = iVar40 + 1;
                  puVar36 = FUN_00405fd0(*(void **)(unaff_EBP - 0x2b18),
                                         *(uint *)(unaff_EBP - 0x2b3c),*(uint *)(unaff_EBP - 0x2b50)
                                         ,iVar8,0);
                  bVar6 = FUN_00406280((int)puVar36);
                  if (CONCAT31(extraout_var_02,bVar6) == 2) {
                    iVar17 = *(int *)(unaff_EBP - 0x2b54);
                    if (*(int *)(unaff_EBP - 0x2b54) < iVar40) {
                      iVar17 = iVar40;
                    }
                    *(int *)(unaff_EBP - 0x2b54) = iVar17;
                    iVar17 = *(int *)(unaff_EBP - 0x2b14);
                    *(undefined1 *)(unaff_EBP - 0x2bdc) = 1;
                    puVar25 = (uint *)(iVar17 + 0x5c);
                    *puVar25 = *puVar25 | 2;
                  }
                  piVar9 = *(int **)(unaff_EBP - 0x2b74);
                  iVar8 = iVar8 + 1;
                } while (iVar8 <= *piVar9);
                iVar17 = *(int *)(unaff_EBP - 0x2b50);
                piVar53 = *(int **)(unaff_EBP - 0x2b1c);
                piVar35 = *(int **)(unaff_EBP - 0x2b48);
              }
              iVar17 = iVar17 + 1;
              *(int *)(unaff_EBP - 0x2b50) = iVar17;
            } while (iVar17 <= *piVar53);
            iVar8 = *(int *)(unaff_EBP - 0x2b3c);
            piVar9 = *(int **)(unaff_EBP - 0x2b9c);
            piVar35 = *(int **)(unaff_EBP - 0x2b70);
          }
          iVar8 = iVar8 + 1;
          *(int *)(unaff_EBP - 0x2b3c) = iVar8;
        } while (iVar8 <= *piVar35);
        uVar27 = *(uint *)(unaff_EBP - 0x2b54);
      }
      iVar8 = *(int *)(unaff_EBP - 0x2b14);
      if ((*(byte *)(iVar8 + 0x5c) & 2) == 0) {
        pvVar26 = (void *)(iVar8 + 0x80);
      }
      else {
        puVar25 = (uint *)FUN_004e2320((void *)(iVar8 + 0x10),2);
        piVar53 = (int *)(unaff_EBP - 0x31bc);
        piVar9 = FUN_004cde40((void *)(unaff_EBP - 0x31cc),uVar27);
        plVar31 = (longlong *)FUN_00401490(piVar9,piVar53,puVar25);
        fVar54 = FUN_00401420(plVar31);
        *(float *)(unaff_EBP - 0x2b74) = (float)fVar54;
        pvVar26 = (void *)(iVar8 + 0x80);
        pfVar28 = (float *)FUN_004013d0(pvVar26,2);
        fVar57 = *(float *)(unaff_EBP - 0x2b74) / (*pfVar28 * 0.5);
        fVar56 = 0.0;
        if (0.0 < fVar57) {
          if (1.0 <= fVar57) {
            fVar56 = 1.0;
          }
          else {
            fVar56 = fVar57 + 1.0;
          }
          if (*(char *)(iVar8 + 0x68) == 'k') {
            fVar56 = fVar57 + 1.0;
          }
        }
        **(float **)(unaff_EBP - 0x2bb4) =
             *(float *)(unaff_EBP - 0x2ba0) * 30.0 * fVar56 + **(float **)(unaff_EBP - 0x2bb4);
      }
    }
    *(undefined4 *)(unaff_EBP - 0x2b3c) = 0x3ba3d70a;
    fVar54 = FUN_004021b0((float *)(iVar8 + 0x40));
    *(float *)(unaff_EBP - 0x2b74) = (float)fVar54;
    if (0.0 < *(float *)(unaff_EBP - 0x2b74)) {
      *(undefined4 *)(unaff_EBP - 0x2b3c) = 0x3b23d70a;
    }
    if ((*(byte *)(iVar8 + 0x5c) & 2) == 0) {
      piVar53 = (int *)(unaff_EBP - 0x337c);
      FUN_004013d0(pvVar26,2);
      piVar9 = (int *)(unaff_EBP - 0x342c);
      pvVar26 = (void *)FUN_004e2320(*(void **)(unaff_EBP - 0x2b60),2);
      pvVar26 = (void *)FUN_004014b0(pvVar26,piVar9);
      puVar25 = (uint *)FUN_004014b0(pvVar26,piVar53);
      uVar59 = FUN_00405510(puVar25);
      *(int *)(unaff_EBP - 0x2b1c) = (int)uVar59;
      uVar27 = **(uint **)(unaff_EBP - 0x2b20);
      if ((int)uVar27 <= **(int **)(unaff_EBP - 0x2b70)) {
        puVar25 = (uint *)FUN_004013d0((void *)(unaff_EBP - 0x34),1);
        *(uint **)(unaff_EBP - 0x2b9c) = puVar25;
        piVar53 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x28),1);
        *(int **)(unaff_EBP - 0x2b74) = piVar53;
        do {
          uVar52 = *puVar25;
          if ((int)uVar52 <= *piVar53) {
            do {
              puVar36 = FUN_00405fd0(*(void **)(unaff_EBP - 0x2b18),uVar27,uVar52,
                                     *(int *)(unaff_EBP - 0x2b1c),0);
              uVar66 = FUN_004061f0((int)puVar36);
              if ((char)uVar66 != '\0') {
                puVar25 = (uint *)(*(int *)(unaff_EBP - 0x2b14) + 0x5c);
                *puVar25 = *puVar25 | 1;
              }
              puVar36 = FUN_00405fd0(*(void **)(unaff_EBP - 0x2b18),uVar27,uVar52,
                                     *(int *)(unaff_EBP - 0x2b1c),0);
              bVar6 = FUN_00406280((int)puVar36);
              uVar48 = *(uint *)(unaff_EBP - 0x2bdc) & 0xff;
              if (CONCAT31(extraout_var_03,bVar6) == 3) {
                uVar48 = 1;
              }
              piVar53 = *(int **)(unaff_EBP - 0x2b74);
              uVar52 = uVar52 + 1;
              *(uint *)(unaff_EBP - 0x2bdc) = uVar48;
            } while ((int)uVar52 <= *piVar53);
          }
          if ((*(byte *)(*(int *)(unaff_EBP - 0x2b14) + 0x5c) & 1) != 0) break;
          puVar25 = *(uint **)(unaff_EBP - 0x2b9c);
          uVar27 = uVar27 + 1;
        } while ((int)uVar27 <= **(int **)(unaff_EBP - 0x2b70));
      }
      iVar8 = *(int *)(unaff_EBP - 0x2b14);
    }
    if ((((*(char *)(unaff_EBP - 0x2bdc) != '\0') && (*(char *)(iVar8 + 0x60) == '\x05')) &&
        (uVar27 = FUN_00405420(*(void **)(unaff_EBP - 0x2b18),(uint *)(iVar8 + 0x198)), uVar27 != 0)
        ) && ((*(float *)(uVar27 + 0x1198) < 1.0 &&
              (fVar56 = *(float *)(unaff_EBP - 0x2ba0) * 0.05 + *(float *)(uVar27 + 0x1198),
              *(float *)(uVar27 + 0x1198) = fVar56, 1.0 < fVar56)))) {
      *(undefined4 *)(uVar27 + 0x1198) = 0x3f800000;
    }
    if ((*(char *)(unaff_EBP - 0x2b31) != '\0') && (*(char *)(unaff_EBP - 0x2b29) != '\0')) {
      pfVar28 = (float *)FUN_004cde20((void *)(unaff_EBP - 0xdf0),
                                      *(undefined4 **)(unaff_EBP - 0x2b30));
      fVar54 = FUN_00402180(pfVar28);
      *(float *)(unaff_EBP - 0x2b30) = (float)fVar54;
      if ((0.0 < *(float *)(unaff_EBP - 0x2b30)) &&
         (((*(byte *)(iVar8 + 0x5c) & 3) == 0 &&
          (pfVar28 = (float *)FUN_004013d0((void *)(unaff_EBP - 0x1c),2), *pfVar28 <= 0.0)))) {
        iVar17 = FUN_004013d0((void *)(iVar8 + 0x80),2);
        *(int *)(unaff_EBP - 0x2b74) = iVar17;
        pvVar26 = (void *)FUN_004e2320((void *)(iVar8 + 0x10),2);
        piVar53 = (int *)(unaff_EBP - 0x344c);
        *(void **)(unaff_EBP - 0x2b30) = pvVar26;
        pvVar26 = (void *)FUN_004014b0(pvVar26,(int *)(unaff_EBP - 0x345c));
        puVar25 = (uint *)FUN_004014b0(pvVar26,piVar53);
        uVar59 = FUN_00405510(puVar25);
        *(int *)(unaff_EBP - 0x2b1c) = (int)uVar59;
        uVar27 = **(uint **)(unaff_EBP - 0x2b20);
        if ((int)uVar27 <= **(int **)(unaff_EBP - 0x2b70)) {
          puVar25 = (uint *)FUN_004013d0((void *)(unaff_EBP - 0x34),1);
          *(uint **)(unaff_EBP - 0x2b9c) = puVar25;
          piVar53 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x28),1);
          *(int **)(unaff_EBP - 0x2b48) = piVar53;
          do {
            uVar52 = *puVar25;
            if ((int)uVar52 <= *piVar53) {
              do {
                puVar36 = FUN_00405fd0(*(void **)(unaff_EBP - 0x2b18),uVar27,uVar52,
                                       *(int *)(unaff_EBP - 0x2b1c),0);
                uVar66 = FUN_004061f0((int)puVar36);
                if ((char)uVar66 != '\0') {
                  pvVar26 = *(void **)(unaff_EBP - 0x2b30);
                  puVar25 = (uint *)(*(int *)(unaff_EBP - 0x2b14) + 0x5c);
                  *puVar25 = *puVar25 | 1;
                  FUN_004014b0(pvVar26,(int *)(unaff_EBP - 0x2dc8));
                  piVar53 = (int *)(unaff_EBP - 0x346c);
                  piVar9 = (int *)(unaff_EBP - 0x347c);
                  piVar35 = FUN_004cde40((void *)(unaff_EBP - 0x348c),*(uint *)(unaff_EBP - 0x2b1c))
                  ;
                  pvVar50 = (void *)FUN_00401530(piVar35,piVar9);
                  puVar19 = (undefined4 *)FUN_00401530(pvVar50,piVar53);
                  FUN_004cde20(pvVar26,puVar19);
                  plVar31 = (longlong *)
                            FUN_00401490(pvVar26,(int *)(unaff_EBP - 0x349c),
                                         (uint *)(unaff_EBP - 0x2dc8));
                  fVar54 = FUN_00401420(plVar31);
                  *(float *)(*(int *)(unaff_EBP - 0x2b14) + 0x1180) = (float)fVar54;
                  piVar53 = *(int **)(unaff_EBP - 0x2b48);
                  break;
                }
                piVar53 = *(int **)(unaff_EBP - 0x2b48);
                uVar52 = uVar52 + 1;
              } while ((int)uVar52 <= *piVar53);
            }
            if ((*(byte *)(*(int *)(unaff_EBP - 0x2b14) + 0x5c) & 1) != 0) break;
            puVar25 = *(uint **)(unaff_EBP - 0x2b9c);
            uVar27 = uVar27 + 1;
          } while ((int)uVar27 <= **(int **)(unaff_EBP - 0x2b70));
        }
      }
    }
    if ((*(char *)(unaff_EBP - 0x2bac) == '\0') && (*(char *)(unaff_EBP - 0x2b94) == '\0')) {
      pvVar26 = *(void **)(unaff_EBP - 0x2b14);
    }
    else {
      pvVar26 = *(void **)(unaff_EBP - 0x2b14);
      *(uint *)((int)pvVar26 + 0x5c) = *(uint *)((int)pvVar26 + 0x5c) | 1;
    }
    if ((*(char *)((int)pvVar26 + 0x68) == 'k') && ((*(byte *)((int)pvVar26 + 0x5c) & 2) != 0)) {
      fVar56 = *(float *)(unaff_EBP - 0x2b3c) * 0.1;
      pfVar28 = (float *)(unaff_EBP - 0x2e44);
      iVar8 = *(int *)(unaff_EBP - 0x2b24);
      *(undefined4 *)(unaff_EBP - 0x2e44) = 0;
      *(float *)(unaff_EBP - 0x2b30) = fVar56;
      pfVar29 = (float *)FUN_004013d0((void *)((int)pvVar26 + 0x34),0);
      FUN_0052e710(pfVar29,pfVar28,iVar8,fVar56);
      fVar56 = *(float *)(unaff_EBP - 0x2b30);
      pfVar28 = (float *)(unaff_EBP - 0x2e28);
      iVar8 = *(int *)(unaff_EBP - 0x2b24);
      *(undefined4 *)(unaff_EBP - 0x2e28) = 0;
      pfVar29 = (float *)FUN_004013d0((void *)((int)pvVar26 + 0x34),1);
      FUN_0052e710(pfVar29,pfVar28,iVar8,fVar56);
      fVar56 = *(float *)(unaff_EBP - 0x2b3c);
      iVar8 = *(int *)(unaff_EBP - 0x2b24);
      *(undefined4 *)(unaff_EBP - 0x2e00) = 0;
      FUN_0052e710(*(float **)(unaff_EBP - 0x2bb4),(float *)(unaff_EBP - 0x2e00),iVar8,fVar56);
    }
    if (((*(byte *)((int)pvVar26 + 0x5c) & 1) == 0) || (*(char *)((int)pvVar26 + 0x68) == '0')) {
LAB_00543507:
      iVar8 = *(int *)(unaff_EBP - 0x2b24);
    }
    else {
      if (*(char *)((int)pvVar26 + 0x68) == '6') {
        iVar8 = FUN_00407db0(pvVar26,0xffffffff);
        iVar17 = FUN_00411d60(pvVar26,0xffffffff);
        if (*(int *)((int)pvVar26 + 0x6c) <= iVar8 + iVar17) goto LAB_00543507;
      }
      cVar4 = *(char *)((int)pvVar26 + 0x68);
      if (((((cVar4 == '\x06') || (cVar4 == '\a')) || (cVar4 == '\x14')) ||
          (((cVar4 == '\x13' || (cVar4 == '\x12')) || ((cVar4 == '\x11' || (cVar4 == '\n')))))) &&
         (iVar8 = FUN_00407db0(pvVar26,0xffffffff), *(int *)((int)pvVar26 + 0x6c) < iVar8))
      goto LAB_00543507;
      fVar56 = *(float *)(unaff_EBP - 0x2b3c);
      iVar8 = *(int *)(unaff_EBP - 0x2b24);
      iVar17 = iVar8;
      puVar33 = (undefined8 *)FUN_00401080((void *)(unaff_EBP - 0x131c),0,0,0);
      FUN_0052e7c0((float *)((int)pvVar26 + 0x34),puVar33,iVar17,fVar56);
    }
    if ((((*(byte *)((int)pvVar26 + 0x5c) & 3) != 0) ||
        ((*(byte *)((int)pvVar26 + 0x124) & 0x10) != 0)) ||
       (bVar3 = FUN_00530540((int)pvVar26 + 0x1460), !bVar3)) {
      fVar56 = *(float *)(unaff_EBP - 0x2b3c);
      puVar33 = (undefined8 *)FUN_00401080((void *)(unaff_EBP - 0x1334),0,0,0);
      FUN_0052e7c0((float *)((int)pvVar26 + 0x4c),puVar33,iVar8,fVar56);
    }
    FUN_00401cd0((undefined4 *)(unaff_EBP - 0x1c5c));
    pfVar28 = (float *)FUN_004013d0((void *)((int)pvVar26 + 0x28),2);
    fVar56 = *pfVar28;
    *(float **)(unaff_EBP - 0x2b3c) = pfVar28;
    FUN_00402030((void *)(unaff_EBP - 0x1c5c),fVar56);
    pfVar28 = (float *)FUN_00401080((void *)(unaff_EBP - 0x134c),0,0x3f800000,0);
    FUN_004dde00((void *)(unaff_EBP - 0x1c5c),(float *)(unaff_EBP - 0x58),pfVar28);
    puVar19 = FUN_00401080((void *)(unaff_EBP - 0x1364),0,0,0);
    FUN_00401060((void *)((int)pvVar26 + 0x11a0),puVar19);
    pfVar28 = (float *)FUN_004013d0((void *)((int)pvVar26 + 0x80),1);
    if (*(char *)((int)pvVar26 + 0x60) == '\0') {
      *(float **)(unaff_EBP - 0x2b50) = pfVar28;
      pvVar26 = (void *)FUN_004e2320((void *)((int)pvVar26 + 0x10),1);
      piVar53 = (int *)(unaff_EBP - 0x34bc);
      piVar9 = (int *)(unaff_EBP - 0x34cc);
      *(void **)(unaff_EBP - 0x2b54) = pvVar26;
    }
    else {
      *(float **)(unaff_EBP - 0x2b50) = pfVar28;
      pvVar26 = (void *)FUN_004e2320((void *)((int)pvVar26 + 0x10),1);
      fVar56 = *pfVar28;
      piVar53 = (int *)(unaff_EBP - 0x34ec);
      piVar9 = (int *)(unaff_EBP - 0x356c);
      *(void **)(unaff_EBP - 0x2b54) = pvVar26;
      pvVar26 = (void *)FUN_00405660(pvVar26,(int *)(unaff_EBP - 0x357c),(int)(fVar56 * 0.5 + 0.5));
    }
    pvVar26 = (void *)FUN_004014b0(pvVar26,piVar9);
    pCVar37 = (CRefTime *)FUN_004014b0(pvVar26,piVar53);
    lVar38 = CRefTime::Millisecs(pCVar37);
    piVar53 = *(int **)(unaff_EBP - 0x2b70);
    *(long *)(unaff_EBP - 0x2b1c) = lVar38;
    uVar27 = **(uint **)(unaff_EBP - 0x2b20);
    if ((int)uVar27 <= *piVar53) {
      piVar53 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x34),2);
      *(int **)(unaff_EBP - 0x2b74) = piVar53;
      piVar9 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x28),2);
      *(int **)(unaff_EBP - 0x2b30) = piVar9;
      while( true ) {
        iVar8 = *piVar53;
        if (iVar8 <= *piVar9) {
          do {
            puVar36 = FUN_00405fd0(*(void **)(unaff_EBP - 0x2b18),uVar27,
                                   *(uint *)(unaff_EBP - 0x2b1c),iVar8,0);
            uVar66 = FUN_004061f0((int)puVar36);
            if ((char)uVar66 != '\0') {
              iVar8 = *(int *)(unaff_EBP - 0x2b14);
              puVar25 = (uint *)(iVar8 + 0x5c);
              *puVar25 = *puVar25 | 4;
              puVar19 = (undefined4 *)FUN_004013d0((void *)(iVar8 + 0x11a0),1);
              piVar53 = *(int **)(unaff_EBP - 0x2b70);
              *puVar19 = 0x3f800000;
              goto LAB_00543767;
            }
            piVar9 = *(int **)(unaff_EBP - 0x2b30);
            iVar8 = iVar8 + 1;
          } while (iVar8 <= *piVar9);
        }
        piVar53 = *(int **)(unaff_EBP - 0x2b70);
        uVar27 = uVar27 + 1;
        if (*piVar53 < (int)uVar27) break;
        piVar53 = *(int **)(unaff_EBP - 0x2b74);
      }
    }
LAB_00543767:
    if (*(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x60) == '\0') {
      piVar9 = (int *)(unaff_EBP - 0x358c);
      pvVar26 = *(void **)(unaff_EBP - 0x2b54);
      piVar35 = (int *)(unaff_EBP - 0x359c);
    }
    else {
      piVar9 = (int *)(unaff_EBP - 0x35ac);
      piVar35 = (int *)(unaff_EBP - 0x35bc);
      pvVar26 = (void *)FUN_00405690(*(void **)(unaff_EBP - 0x2b54),(int *)(unaff_EBP - 0x35cc),
                                     (int)(**(float **)(unaff_EBP - 0x2b50) * 0.5 + 0.5));
    }
    pvVar26 = (void *)FUN_00401530(pvVar26,piVar35);
    pCVar37 = (CRefTime *)FUN_00401530(pvVar26,piVar9);
    lVar38 = CRefTime::Millisecs(pCVar37);
    *(long *)(unaff_EBP - 0x2b1c) = lVar38;
    uVar27 = **(uint **)(unaff_EBP - 0x2b20);
    if ((int)uVar27 <= *piVar53) {
      piVar35 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x34),2);
      *(int **)(unaff_EBP - 0x2b74) = piVar35;
      piVar53 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x28),2);
      piVar9 = *(int **)(unaff_EBP - 0x2b70);
      *(int **)(unaff_EBP - 0x2b30) = piVar53;
      while( true ) {
        iVar8 = *piVar35;
        if (iVar8 <= *piVar53) {
          do {
            puVar36 = FUN_00405fd0(*(void **)(unaff_EBP - 0x2b18),uVar27,
                                   *(uint *)(unaff_EBP - 0x2b1c),iVar8,0);
            uVar66 = FUN_004061f0((int)puVar36);
            if ((char)uVar66 != '\0') {
              iVar8 = *(int *)(unaff_EBP - 0x2b14);
              puVar25 = (uint *)(iVar8 + 0x5c);
              *puVar25 = *puVar25 | 4;
              puVar19 = (undefined4 *)FUN_004013d0((void *)(iVar8 + 0x11a0),1);
              *puVar19 = 0xbf800000;
              goto LAB_005438b1;
            }
            piVar53 = *(int **)(unaff_EBP - 0x2b30);
            iVar8 = iVar8 + 1;
          } while (iVar8 <= *piVar53);
          piVar9 = *(int **)(unaff_EBP - 0x2b70);
        }
        uVar27 = uVar27 + 1;
        if (*piVar9 < (int)uVar27) break;
        piVar35 = *(int **)(unaff_EBP - 0x2b74);
      }
    }
LAB_005438b1:
    if (*(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x60) == '\0') {
      pvVar26 = (void *)FUN_004e2320(*(void **)(unaff_EBP - 0x2b60),0);
      piVar53 = (int *)(unaff_EBP - 0x35dc);
      piVar9 = (int *)(unaff_EBP - 0x35ec);
      *(void **)(unaff_EBP - 0x2b70) = pvVar26;
    }
    else {
      pvVar26 = (void *)FUN_004e2320(*(void **)(unaff_EBP - 0x2b60),0);
      piVar53 = (int *)(unaff_EBP - 0x35fc);
      piVar9 = (int *)(unaff_EBP - 0x362c);
      pfVar28 = *(float **)(unaff_EBP - 0x2b4c);
      *(void **)(unaff_EBP - 0x2b70) = pvVar26;
      pvVar26 = (void *)FUN_00405660(pvVar26,(int *)(unaff_EBP - 0x363c),(int)(*pfVar28 * 0.5 + 0.5)
                                    );
    }
    pvVar26 = (void *)FUN_004014b0(pvVar26,piVar9);
    pCVar37 = (CRefTime *)FUN_004014b0(pvVar26,piVar53);
    lVar38 = CRefTime::Millisecs(pCVar37);
    *(long *)(unaff_EBP - 0x2b1c) = lVar38;
    puVar25 = (uint *)FUN_004013d0((void *)(unaff_EBP - 0x34),1);
    uVar27 = *puVar25;
    *(uint **)(unaff_EBP - 0x2b48) = puVar25;
    piVar53 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x28),1);
    *(int **)(unaff_EBP - 0x2b20) = piVar53;
    if ((int)uVar27 <= *piVar53) {
      piVar35 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x34),2);
      *(int **)(unaff_EBP - 0x2b74) = piVar35;
      piVar53 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x28),2);
      piVar9 = *(int **)(unaff_EBP - 0x2b20);
      *(int **)(unaff_EBP - 0x2b30) = piVar53;
      while( true ) {
        iVar8 = *piVar35;
        if (iVar8 <= *piVar53) {
          do {
            puVar36 = FUN_00405fd0(*(void **)(unaff_EBP - 0x2b18),*(uint *)(unaff_EBP - 0x2b1c),
                                   uVar27,iVar8,0);
            uVar66 = FUN_004061f0((int)puVar36);
            if ((char)uVar66 != '\0') {
              iVar8 = *(int *)(unaff_EBP - 0x2b14);
              puVar25 = (uint *)(iVar8 + 0x5c);
              *puVar25 = *puVar25 | 4;
              puVar19 = (undefined4 *)FUN_004013d0((void *)(iVar8 + 0x11a0),0);
              *puVar19 = 0x3f800000;
              goto LAB_00543a2b;
            }
            piVar53 = *(int **)(unaff_EBP - 0x2b30);
            iVar8 = iVar8 + 1;
          } while (iVar8 <= *piVar53);
          piVar9 = *(int **)(unaff_EBP - 0x2b20);
        }
        uVar27 = uVar27 + 1;
        if (*piVar9 < (int)uVar27) break;
        piVar35 = *(int **)(unaff_EBP - 0x2b74);
      }
LAB_00543a2b:
      puVar25 = *(uint **)(unaff_EBP - 0x2b48);
    }
    if (*(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x60) == '\0') {
      piVar53 = (int *)(unaff_EBP - 0x366c);
      pvVar26 = *(void **)(unaff_EBP - 0x2b70);
      piVar9 = (int *)(unaff_EBP - 0x36dc);
    }
    else {
      piVar53 = (int *)(unaff_EBP - 0x36fc);
      piVar9 = (int *)(unaff_EBP - 0x371c);
      pvVar26 = (void *)FUN_00405690(*(void **)(unaff_EBP - 0x2b70),(int *)(unaff_EBP - 0x372c),
                                     (int)(**(float **)(unaff_EBP - 0x2b4c) * 0.5 + 0.5));
    }
    pvVar26 = (void *)FUN_00401530(pvVar26,piVar9);
    pCVar37 = (CRefTime *)FUN_00401530(pvVar26,piVar53);
    lVar38 = CRefTime::Millisecs(pCVar37);
    uVar27 = *puVar25;
    *(long *)(unaff_EBP - 0x2b1c) = lVar38;
    if ((int)uVar27 <= **(int **)(unaff_EBP - 0x2b20)) {
      piVar35 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x34),2);
      *(int **)(unaff_EBP - 0x2b74) = piVar35;
      piVar53 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x28),2);
      piVar9 = *(int **)(unaff_EBP - 0x2b20);
      *(int **)(unaff_EBP - 0x2b30) = piVar53;
      while( true ) {
        iVar8 = *piVar35;
        if (iVar8 <= *piVar53) {
          do {
            puVar36 = FUN_00405fd0(*(void **)(unaff_EBP - 0x2b18),*(uint *)(unaff_EBP - 0x2b1c),
                                   uVar27,iVar8,0);
            uVar66 = FUN_004061f0((int)puVar36);
            if ((char)uVar66 != '\0') {
              iVar8 = *(int *)(unaff_EBP - 0x2b14);
              *(uint *)(iVar8 + 0x5c) = *(uint *)(iVar8 + 0x5c) | 4;
              puVar19 = (undefined4 *)FUN_004013d0((void *)(iVar8 + 0x11a0),0);
              *puVar19 = 0xbf800000;
              goto LAB_00543b83;
            }
            piVar53 = *(int **)(unaff_EBP - 0x2b30);
            iVar8 = iVar8 + 1;
          } while (iVar8 <= *piVar53);
          piVar9 = *(int **)(unaff_EBP - 0x2b20);
        }
        uVar27 = uVar27 + 1;
        if (*piVar9 < (int)uVar27) break;
        piVar35 = *(int **)(unaff_EBP - 0x2b74);
      }
    }
    iVar8 = *(int *)(unaff_EBP - 0x2b14);
LAB_00543b83:
    if ((*(byte *)(iVar8 + 0x5c) & 4) == 0) {
      pfVar28 = (float *)FUN_00401080((void *)(unaff_EBP - 0x137c),0x3f333333,0x3f333333,0);
      fVar54 = FUN_004015a0((float *)(unaff_EBP - 0x58),pfVar28);
      *(float *)(unaff_EBP - 0x2b30) = (float)fVar54;
      if (*(float *)(unaff_EBP - 0x2b30) <= 0.1) {
        if (*(char *)(iVar8 + 0x60) == '\0') {
          piVar53 = (int *)(unaff_EBP - 0x31b4);
          pvVar26 = (void *)FUN_004014b0(*(void **)(unaff_EBP - 0x2b70),(int *)(unaff_EBP - 0x3614))
          ;
          pCVar37 = (CRefTime *)FUN_004014b0(pvVar26,piVar53);
          lVar38 = CRefTime::Millisecs(pCVar37);
          *(long *)(unaff_EBP - 0x2b48) = lVar38;
          piVar53 = (int *)(unaff_EBP - 0x3274);
          pvVar26 = *(void **)(unaff_EBP - 0x2b54);
          piVar9 = (int *)(unaff_EBP - 0x34e4);
        }
        else {
          piVar53 = (int *)(unaff_EBP - 0x3284);
          piVar9 = (int *)(unaff_EBP - 0x36b4);
          pvVar26 = (void *)FUN_00405660(*(void **)(unaff_EBP - 0x2b70),(int *)(unaff_EBP - 0x3294),
                                         (int)(**(float **)(unaff_EBP - 0x2b4c) * 0.5 + 0.5));
          pvVar26 = (void *)FUN_004014b0(pvVar26,piVar9);
          pCVar37 = (CRefTime *)FUN_004014b0(pvVar26,piVar53);
          lVar38 = CRefTime::Millisecs(pCVar37);
          *(long *)(unaff_EBP - 0x2b48) = lVar38;
          piVar53 = (int *)(unaff_EBP - 0x34f4);
          piVar9 = (int *)(unaff_EBP - 0x32a4);
          pvVar26 = (void *)FUN_00405660(*(void **)(unaff_EBP - 0x2b54),(int *)(unaff_EBP - 0x3624),
                                         (int)(**(float **)(unaff_EBP - 0x2b50) * 0.5 + 0.5));
        }
        pvVar26 = (void *)FUN_004014b0(pvVar26,piVar9);
        pCVar37 = (CRefTime *)FUN_004014b0(pvVar26,piVar53);
        lVar38 = CRefTime::Millisecs(pCVar37);
        *(long *)(unaff_EBP - 0x2b1c) = lVar38;
        piVar53 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x34),2);
        iVar8 = *piVar53;
        piVar53 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x28),2);
        if (iVar8 <= *piVar53) {
          do {
            puVar36 = FUN_00405fd0(*(void **)(unaff_EBP - 0x2b18),*(uint *)(unaff_EBP - 0x2b48),
                                   *(uint *)(unaff_EBP - 0x2b1c),iVar8,0);
            uVar66 = FUN_004061f0((int)puVar36);
            if ((char)uVar66 != '\0') {
              iVar8 = *(int *)(unaff_EBP - 0x2b14);
              *(uint *)(iVar8 + 0x5c) = *(uint *)(iVar8 + 0x5c) | 4;
              puVar19 = (undefined4 *)FUN_004013d0((void *)(iVar8 + 0x11a0),0);
              *puVar19 = 0x3f800000;
              puVar19 = (undefined4 *)FUN_004013d0((void *)(iVar8 + 0x11a0),1);
              *puVar19 = 0x3f800000;
              goto LAB_00543d89;
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 <= *piVar53);
        }
        iVar8 = *(int *)(unaff_EBP - 0x2b14);
      }
LAB_00543d89:
      if ((*(byte *)(iVar8 + 0x5c) & 4) == 0) {
        pfVar28 = (float *)FUN_00401080((void *)(unaff_EBP - 0x1394),0xbf333333,0x3f333333,0);
        fVar54 = FUN_004015a0((float *)(unaff_EBP - 0x58),pfVar28);
        *(float *)(unaff_EBP - 0x2b30) = (float)fVar54;
        if (*(float *)(unaff_EBP - 0x2b30) <= 0.1) {
          if (*(char *)(iVar8 + 0x60) == '\0') {
            piVar53 = (int *)(unaff_EBP - 0x32b4);
            pvVar26 = (void *)FUN_00401530(*(void **)(unaff_EBP - 0x2b70),
                                           (int *)(unaff_EBP - 0x3504));
            pCVar37 = (CRefTime *)FUN_00401530(pvVar26,piVar53);
            lVar38 = CRefTime::Millisecs(pCVar37);
            *(long *)(unaff_EBP - 0x2b48) = lVar38;
            piVar53 = (int *)(unaff_EBP - 0x32c4);
            pvVar26 = *(void **)(unaff_EBP - 0x2b54);
            piVar9 = (int *)(unaff_EBP - 0x3704);
          }
          else {
            piVar53 = (int *)(unaff_EBP - 0x32d4);
            piVar9 = (int *)(unaff_EBP - 0x3514);
            pvVar26 = (void *)FUN_00405690(*(void **)(unaff_EBP - 0x2b70),
                                           (int *)(unaff_EBP - 0x32e4),
                                           (int)(**(float **)(unaff_EBP - 0x2b4c) * 0.5 + 0.5));
            pvVar26 = (void *)FUN_00401530(pvVar26,piVar9);
            pCVar37 = (CRefTime *)FUN_00401530(pvVar26,piVar53);
            lVar38 = CRefTime::Millisecs(pCVar37);
            *(long *)(unaff_EBP - 0x2b48) = lVar38;
            piVar53 = (int *)(unaff_EBP - 0x3634);
            piVar9 = (int *)(unaff_EBP - 0x32f4);
            pvVar26 = (void *)FUN_00405660(*(void **)(unaff_EBP - 0x2b54),
                                           (int *)(unaff_EBP - 0x3524),
                                           (int)(**(float **)(unaff_EBP - 0x2b50) * 0.5 + 0.5));
          }
          pvVar26 = (void *)FUN_004014b0(pvVar26,piVar9);
          pCVar37 = (CRefTime *)FUN_004014b0(pvVar26,piVar53);
          lVar38 = CRefTime::Millisecs(pCVar37);
          *(long *)(unaff_EBP - 0x2b1c) = lVar38;
          piVar53 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x34),2);
          iVar8 = *piVar53;
          piVar53 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x28),2);
          if (iVar8 <= *piVar53) {
            do {
              puVar36 = FUN_00405fd0(*(void **)(unaff_EBP - 0x2b18),*(uint *)(unaff_EBP - 0x2b48),
                                     *(uint *)(unaff_EBP - 0x2b1c),iVar8,0);
              uVar66 = FUN_004061f0((int)puVar36);
              if ((char)uVar66 != '\0') {
                iVar8 = *(int *)(unaff_EBP - 0x2b14);
                *(uint *)(iVar8 + 0x5c) = *(uint *)(iVar8 + 0x5c) | 4;
                puVar19 = (undefined4 *)FUN_004013d0((void *)(iVar8 + 0x11a0),0);
                *puVar19 = 0xbf800000;
                puVar19 = (undefined4 *)FUN_004013d0((void *)(iVar8 + 0x11a0),1);
                *puVar19 = 0x3f800000;
                goto LAB_00543fc4;
              }
              iVar8 = iVar8 + 1;
            } while (iVar8 <= *piVar53);
          }
          iVar8 = *(int *)(unaff_EBP - 0x2b14);
        }
LAB_00543fc4:
        if ((*(byte *)(iVar8 + 0x5c) & 4) == 0) {
          pfVar28 = (float *)FUN_00401080((void *)(unaff_EBP - 0x13ac),0x3f333333,0xbf333333,0);
          fVar54 = FUN_004015a0((float *)(unaff_EBP - 0x58),pfVar28);
          *(float *)(unaff_EBP - 0x2b30) = (float)fVar54;
          if (*(float *)(unaff_EBP - 0x2b30) <= 0.1) {
            if (*(char *)(iVar8 + 0x60) == '\0') {
              piVar53 = (int *)(unaff_EBP - 0x3304);
              pvVar26 = (void *)FUN_004014b0(*(void **)(unaff_EBP - 0x2b70),
                                             (int *)(unaff_EBP - 0x36c4));
              pCVar37 = (CRefTime *)FUN_004014b0(pvVar26,piVar53);
              lVar38 = CRefTime::Millisecs(pCVar37);
              *(long *)(unaff_EBP - 0x2b48) = lVar38;
              piVar53 = (int *)(unaff_EBP - 0x3314);
              pvVar26 = *(void **)(unaff_EBP - 0x2b54);
              piVar9 = (int *)(unaff_EBP - 0x3534);
            }
            else {
              piVar53 = (int *)(unaff_EBP - 0x3324);
              piVar9 = (int *)(unaff_EBP - 0x3644);
              pvVar26 = (void *)FUN_00405660(*(void **)(unaff_EBP - 0x2b70),
                                             (int *)(unaff_EBP - 0x3334),
                                             (int)(**(float **)(unaff_EBP - 0x2b4c) * 0.5 + 0.5));
              pvVar26 = (void *)FUN_004014b0(pvVar26,piVar9);
              pCVar37 = (CRefTime *)FUN_004014b0(pvVar26,piVar53);
              lVar38 = CRefTime::Millisecs(pCVar37);
              *(long *)(unaff_EBP - 0x2b48) = lVar38;
              piVar53 = (int *)(unaff_EBP - 0x3544);
              piVar9 = (int *)(unaff_EBP - 0x3344);
              pvVar26 = (void *)FUN_00405690(*(void **)(unaff_EBP - 0x2b54),
                                             (int *)(unaff_EBP - 0x3744),
                                             (int)(**(float **)(unaff_EBP - 0x2b50) * 0.5 + 0.5));
            }
            pvVar26 = (void *)FUN_00401530(pvVar26,piVar9);
            pCVar37 = (CRefTime *)FUN_00401530(pvVar26,piVar53);
            lVar38 = CRefTime::Millisecs(pCVar37);
            *(long *)(unaff_EBP - 0x2b1c) = lVar38;
            piVar53 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x34),2);
            iVar8 = *piVar53;
            piVar53 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x28),2);
            if (iVar8 <= *piVar53) {
              do {
                puVar36 = FUN_00405fd0(*(void **)(unaff_EBP - 0x2b18),*(uint *)(unaff_EBP - 0x2b48),
                                       *(uint *)(unaff_EBP - 0x2b1c),iVar8,0);
                uVar66 = FUN_004061f0((int)puVar36);
                if ((char)uVar66 != '\0') {
                  iVar8 = *(int *)(unaff_EBP - 0x2b14);
                  *(uint *)(iVar8 + 0x5c) = *(uint *)(iVar8 + 0x5c) | 4;
                  puVar19 = (undefined4 *)FUN_004013d0((void *)(iVar8 + 0x11a0),0);
                  *puVar19 = 0x3f800000;
                  puVar19 = (undefined4 *)FUN_004013d0((void *)(iVar8 + 0x11a0),1);
                  *puVar19 = 0xbf800000;
                  goto LAB_00544204;
                }
                iVar8 = iVar8 + 1;
              } while (iVar8 <= *piVar53);
            }
            iVar8 = *(int *)(unaff_EBP - 0x2b14);
          }
LAB_00544204:
          if ((*(byte *)(iVar8 + 0x5c) & 4) == 0) {
            pfVar28 = (float *)FUN_00401080((void *)(unaff_EBP - 0x13c4),0xbf333333,0xbf333333,0);
            fVar54 = FUN_004015a0((float *)(unaff_EBP - 0x58),pfVar28);
            *(float *)(unaff_EBP - 0x2b30) = (float)fVar54;
            if (*(float *)(unaff_EBP - 0x2b30) <= 0.1) {
              if (*(char *)(iVar8 + 0x60) == '\0') {
                piVar53 = (int *)(unaff_EBP - 0x3354);
                pvVar26 = (void *)FUN_00401530(*(void **)(unaff_EBP - 0x2b70),
                                               (int *)(unaff_EBP - 0x3554));
                pCVar37 = (CRefTime *)FUN_00401530(pvVar26,piVar53);
                lVar38 = CRefTime::Millisecs(pCVar37);
                *(long *)(unaff_EBP - 0x2b48) = lVar38;
                piVar53 = (int *)(unaff_EBP - 0x3364);
                pvVar26 = *(void **)(unaff_EBP - 0x2b54);
                piVar9 = (int *)(unaff_EBP - 0x3654);
              }
              else {
                piVar53 = (int *)(unaff_EBP - 0x3374);
                piVar9 = (int *)(unaff_EBP - 0x3564);
                pvVar26 = (void *)FUN_00405690(*(void **)(unaff_EBP - 0x2b70),
                                               (int *)(unaff_EBP - 0x3384),
                                               (int)(**(float **)(unaff_EBP - 0x2b4c) * 0.5 + 0.5));
                pvVar26 = (void *)FUN_00401530(pvVar26,piVar9);
                pCVar37 = (CRefTime *)FUN_00401530(pvVar26,piVar53);
                lVar38 = CRefTime::Millisecs(pCVar37);
                *(long *)(unaff_EBP - 0x2b48) = lVar38;
                piVar53 = (int *)(unaff_EBP - 0x36d4);
                piVar9 = (int *)(unaff_EBP - 0x3394);
                pvVar26 = (void *)FUN_00405690(*(void **)(unaff_EBP - 0x2b54),
                                               (int *)(unaff_EBP - 0x3574),
                                               (int)(**(float **)(unaff_EBP - 0x2b50) * 0.5 + 0.5));
              }
              pvVar26 = (void *)FUN_00401530(pvVar26,piVar9);
              pCVar37 = (CRefTime *)FUN_00401530(pvVar26,piVar53);
              lVar38 = CRefTime::Millisecs(pCVar37);
              *(long *)(unaff_EBP - 0x2b1c) = lVar38;
              piVar53 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x34),2);
              iVar8 = *piVar53;
              piVar53 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x28),2);
              if (iVar8 <= *piVar53) {
                do {
                  puVar36 = FUN_00405fd0(*(void **)(unaff_EBP - 0x2b18),
                                         *(uint *)(unaff_EBP - 0x2b48),*(uint *)(unaff_EBP - 0x2b1c)
                                         ,iVar8,0);
                  uVar66 = FUN_004061f0((int)puVar36);
                  if ((char)uVar66 != '\0') {
                    iVar8 = *(int *)(unaff_EBP - 0x2b14);
                    *(uint *)(iVar8 + 0x5c) = *(uint *)(iVar8 + 0x5c) | 4;
                    puVar19 = (undefined4 *)FUN_004013d0((void *)(iVar8 + 0x11a0),0);
                    *puVar19 = 0xbf800000;
                    puVar19 = (undefined4 *)FUN_004013d0((void *)(iVar8 + 0x11a0),1);
                    *puVar19 = 0xbf800000;
                    goto LAB_00544444;
                  }
                  iVar8 = iVar8 + 1;
                } while (iVar8 <= *piVar53);
              }
              iVar8 = *(int *)(unaff_EBP - 0x2b14);
            }
          }
        }
      }
    }
LAB_00544444:
    if (((*(byte *)(iVar8 + 0x5c) & 2) == 0) || (*(char *)(iVar8 + 0x68) == 'k')) {
      pfVar28 = (float *)(unaff_EBP - 0x2d90);
      iVar17 = *(int *)(unaff_EBP - 0x2b24);
      fVar56 = 0.01;
      *(undefined4 *)(unaff_EBP - 0x2d90) = 0;
      pfVar29 = (float *)FUN_004013d0((void *)(iVar8 + 0x28),0);
      FUN_0052e710(pfVar29,pfVar28,iVar17,fVar56);
    }
    else {
      iVar17 = *(int *)(unaff_EBP - 0x2b24);
      fVar56 = 0.005;
      iVar40 = iVar17;
      puVar33 = (undefined8 *)FUN_00401080((void *)(unaff_EBP - 0x13dc),0,0,0);
      FUN_0052e7c0((float *)(iVar8 + 0x34),puVar33,iVar40,fVar56);
      if ((*(char *)(iVar8 + 0x60) != '\x06') && ((*(byte *)(iVar8 + 0x7e) & 1) == 0)) {
        pfVar28 = (float *)(unaff_EBP - 0x2cf4);
        fVar56 = 0.01;
        *(undefined4 *)(unaff_EBP - 0x2cf4) = 0xc2700000;
        pfVar29 = (float *)FUN_004013d0((void *)(iVar8 + 0x28),0);
        FUN_0052e710(pfVar29,pfVar28,iVar17,fVar56);
      }
      if ((*(char *)(unaff_EBP - 0x2be0) == '\0') &&
         (**(float **)(unaff_EBP - 0x2bb4) <= -3.0 && **(float **)(unaff_EBP - 0x2bb4) != -3.0)) {
        FUN_004c8510(unaff_EBP - 0x968);
        FUN_00402a40((void *)(unaff_EBP - 0x968),(undefined4 *)(iVar8 + 0x10));
        *(undefined4 *)(unaff_EBP - 0x934) = 0x3ecccccd;
        ppVar30 = (pair<unsigned___int64,unsigned___int64> *)
                  FUN_004010b0((void *)(unaff_EBP - 0x1b7c),0x3e4ccccd,0x3f333333,0x3f800000,
                               0x3f800000);
        std::pair<unsigned___int64,unsigned___int64>::
        operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                  ((pair<unsigned___int64,unsigned___int64> *)(unaff_EBP - 0x944),ppVar30);
        puVar19 = FUN_00401080((void *)(unaff_EBP - 0x13f4),0,0,0x41200000);
        FUN_00401060((void *)(unaff_EBP - 0x950),puVar19);
        iVar17 = *(int *)(unaff_EBP - 0x2b28);
        *(undefined4 *)(unaff_EBP - 0x930) = 0xf;
        FUN_00428540((void *)(iVar17 + 0x10),(undefined4 *)(unaff_EBP - 0x968));
        FUN_004c8530(unaff_EBP - 0x7c);
        *(undefined4 *)(unaff_EBP - 0x70) = 0x1f;
        iVar17 = rand();
        *(float *)(unaff_EBP - 0x6c) = (float)iVar17 / 32767.0 + 0.9;
        FUN_00402550((void *)(unaff_EBP - 0x7c),(longlong *)(iVar8 + 0x10));
        iVar17 = *(int *)(unaff_EBP - 0x2b28);
        *(undefined4 *)(unaff_EBP - 0x68) = 0x3f800000;
        FUN_00428590((void *)(iVar17 + 8),(undefined4 *)(unaff_EBP - 0x7c));
      }
    }
    pvVar26 = *(void **)(unaff_EBP - 0x2b18);
    if (iVar8 == *(int *)((int)pvVar26 + 0xb8)) {
      fVar54 = FUN_004015a0((float *)(unaff_EBP - 0x58),(float *)(unaff_EBP - 0x11c));
      *(float *)(unaff_EBP - 0x2b30) = (float)fVar54;
      if ((((*(float *)(unaff_EBP - 0x2b30) <= 0.0) && ((*(ushort *)(iVar8 + 0x124) & 1) != 0)) &&
          ((*(ushort *)(iVar8 + 0x124) & 0x10) == 0)) &&
         ((*(char *)(unaff_EBP - 0x2bd8) != '\0' && ((*(byte *)(iVar8 + 0x5c) & 4) == 0)))) {
        puVar19 = (undefined4 *)FUN_0041cba0(iVar8 + 0x40);
        pfVar28 = (float *)FUN_004cde20((void *)(unaff_EBP - 0xe98),puVar19);
        fVar54 = FUN_00402180(pfVar28);
        *(float *)(unaff_EBP - 0x2b30) = (float)fVar54;
        if (0.0 < *(float *)(unaff_EBP - 0x2b30)) {
          puVar19 = (undefined4 *)
                    FUN_004e1520((float *)(unaff_EBP - 0x140c),-5.0,(float *)(unaff_EBP - 0x11c));
          FUN_00401060((void *)(iVar8 + 0x34),puVar19);
        }
      }
    }
    if (*(int *)(iVar8 + 100) == 0x65) {
      if ((*(char *)(iVar8 + 0x68) == '3') && (*(int *)(iVar8 + 0x6c) < 1000)) {
        *(undefined4 *)(unaff_EBP - 0x2d10) = 0x42700000;
        pfVar28 = (float *)(unaff_EBP - 0x2d10);
      }
      else {
        *(undefined4 *)(unaff_EBP - 0x2cb8) = 0;
        pfVar28 = (float *)(unaff_EBP - 0x2cb8);
      }
      iVar17 = *(int *)(unaff_EBP - 0x2b24);
      fVar56 = 0.01;
      pfVar29 = (float *)FUN_004013d0((void *)(iVar8 + 0x28),0);
      FUN_0052e710(pfVar29,pfVar28,iVar17,fVar56);
    }
    uVar27 = FUN_00405420(pvVar26,(uint *)(iVar8 + 0x11c0));
    if (uVar27 == 0) {
LAB_005447a6:
      pvVar26 = *(void **)(unaff_EBP - 0x2b14);
LAB_005447ac:
      uVar27 = *(uint *)((int)pvVar26 + 0x5c);
      *(uint *)(unaff_EBP - 0x2b1c) = uVar27;
      uVar52 = uVar27 & 1;
      if ((((uVar52 == 0) && ((*(byte *)((int)pvVar26 + 0x7e) & 2) == 0)) &&
          (((*(byte *)((int)pvVar26 + 0x124) & 1) == 0 || ((uVar27 & 4) == 0)))) &&
         ((uVar27 & 2) == 0)) {
LAB_00544d53:
        if (((uVar52 == 0) && ((uVar27 & 2) == 0)) &&
           (((*(byte *)((int)pvVar26 + 0x124) & 1) == 0 || ((uVar27 & 4) == 0)))) {
          pfVar28 = *(float **)(unaff_EBP - 0x2b4c);
          *(undefined4 *)((int)pvVar26 + 0x118c) = 0;
          fVar54 = FUN_004024e0(0.8 / *pfVar28);
          *(float *)(unaff_EBP - 0x2b30) = (float)fVar54;
          fVar56 = *(float *)(unaff_EBP - 0x2b30) * *(float *)(unaff_EBP - 0x2ba0);
LAB_00544db0:
          *(float *)((int)pvVar26 + 0x1188) = fVar56 + *(float *)((int)pvVar26 + 0x1188);
        }
        goto LAB_00544dc0;
      }
      fVar54 = FUN_004021b0((float *)((int)pvVar26 + 0x34));
      *(float *)(unaff_EBP - 0x2b30) = (float)fVar54;
      if ((*(float *)(unaff_EBP - 0x2b30) <= 0.5) || (*(char *)((int)pvVar26 + 0x68) == 'k')) {
        uVar27 = *(uint *)(unaff_EBP - 0x2b1c);
        goto LAB_00544d53;
      }
      if (((*(byte *)((int)pvVar26 + 0x124) & 1) != 0) &&
         ((*(byte *)((int)pvVar26 + 0x5c) & 4) != 0)) {
        fVar54 = FUN_004024e0(0.8 / **(float **)(unaff_EBP - 0x2b4c));
        *(float *)(unaff_EBP - 0x2b74) = (float)fVar54;
        fVar54 = FUN_00401d80((float *)((int)pvVar26 + 0x34));
        *(float *)(unaff_EBP - 0x2b30) = (float)fVar54;
        fVar56 = *(float *)(unaff_EBP - 0x2ba0) * 0.2;
        *(float *)((int)pvVar26 + 0x118c) =
             *(float *)(unaff_EBP - 0x2b74) *
             *(float *)(unaff_EBP - 0x2b30) * *(float *)(unaff_EBP - 0x2ba0) * 6.0 +
             *(float *)((int)pvVar26 + 0x118c);
        goto LAB_00544db0;
      }
      puVar19 = *(undefined4 **)(unaff_EBP - 0x2b5c);
      *(undefined4 *)(unaff_EBP - 0x2b74) = *(undefined4 *)((int)pvVar26 + 0x118c);
      pfVar28 = (float *)FUN_004cde20((void *)(unaff_EBP - 0xeb8),puVar19);
      fVar54 = FUN_00401d40(pfVar28);
      *(float *)(unaff_EBP - 0x2b20) = (float)fVar54;
      if ((*(byte *)((int)pvVar26 + 0x5c) & 1) != 0) {
        if (((*(char *)((int)pvVar26 + 0x68) == '0') ||
            ((*(char *)((int)pvVar26 + 0x68) == '6' &&
             (iVar8 = FUN_004084b0((int)pvVar26), *(int *)((int)pvVar26 + 0x6c) < iVar8)))) ||
           ((((cVar4 = *(char *)((int)pvVar26 + 0x68), cVar4 == '\x06' ||
              (((cVar4 == '\a' || (cVar4 == '\x14')) || (cVar4 == '\x13')))) ||
             (((cVar4 == '\x12' || (cVar4 == '\x11')) || (cVar4 == '\n')))) &&
            (iVar8 = FUN_00407db0(pvVar26,0xffffffff), *(int *)((int)pvVar26 + 0x6c) < iVar8)))) {
          fVar54 = FUN_004024e0(0.8 / **(float **)(unaff_EBP - 0x2b4c));
          *(float *)(unaff_EBP - 0x2b30) = (float)fVar54;
          fVar56 = *(float *)(unaff_EBP - 0x2b20);
          fVar58 = *(float *)(unaff_EBP - 0x2b30);
          fVar57 = *(float *)(unaff_EBP - 0x2ba0);
          fVar55 = *(float *)(unaff_EBP - 0x2b88) * 0.000100000005 * fVar56 * 1.5;
LAB_00544b21:
          fVar58 = fVar58 * fVar55;
        }
        else {
          fVar54 = FUN_004024e0(0.8 / **(float **)(unaff_EBP - 0x2b4c));
          fVar56 = *(float *)(unaff_EBP - 0x2b20);
          fVar57 = *(float *)(unaff_EBP - 0x2ba0);
          fVar55 = fVar56 * fVar57 * 1.5;
          if (*(char *)((int)pvVar26 + 0x68) != 'O') {
            *(float *)(unaff_EBP - 0x2b30) = (float)fVar54;
            fVar58 = *(float *)(unaff_EBP - 0x2b30);
            goto LAB_00544b21;
          }
          *(float *)(unaff_EBP - 0x2b30) = (float)fVar54;
          fVar58 = *(float *)(unaff_EBP - 0x2b30) * fVar55 * 2.0;
        }
        pvVar50 = *(void **)(unaff_EBP - 0x2b18);
        *(float *)((int)pvVar26 + 0x118c) = fVar58 + *(float *)((int)pvVar26 + 0x118c);
        *(float *)((int)pvVar26 + 0x1188) = *(float *)((int)pvVar26 + 0x1188) + fVar57;
        if (((*(int *)((int)pvVar50 + 0xb8) != 0) && (*(int *)((int)pvVar26 + 0x128) == 0)) &&
           (((*(byte *)((int)pvVar26 + 0x5c) & 2) == 0 &&
            ((5.0 < fVar56 &&
             ((int)(*(float *)(unaff_EBP - 0x2b74) / 3.1415927) <
              (int)(*(float *)((int)pvVar26 + 0x118c) / 3.1415927))))))) {
          FUN_004c8530(unaff_EBP - 0xf8);
          piVar53 = (int *)(unaff_EBP - 0x3584);
          FUN_004013d0((void *)((int)pvVar26 + 0x80),2);
          piVar9 = (int *)(unaff_EBP - 0x33c4);
          pvVar34 = (void *)FUN_004e2320((void *)((int)pvVar26 + 0x10),2);
          pvVar34 = (void *)FUN_004014b0(pvVar34,piVar9);
          puVar25 = (uint *)FUN_004014b0(pvVar34,piVar53);
          iVar8 = FUN_00406050(pvVar50,**(uint **)(unaff_EBP - 0x2b70),
                               (*(uint **)(unaff_EBP - 0x2b70))[1],**(uint **)(unaff_EBP - 0x2b54),
                               (*(uint **)(unaff_EBP - 0x2b54))[1],*puVar25,puVar25[1],0);
          bVar6 = FUN_00406280(iVar8);
          if (CONCAT31(extraout_var_04,bVar6) == 3) {
            iVar8 = rand();
            *(undefined4 *)(unaff_EBP - 0xe8) = 0x3f800000;
            *(int *)(unaff_EBP - 0xec) = iVar8 % 3 + 0x21;
          }
          else {
            *(undefined4 *)(unaff_EBP - 0xec) = 0x20;
            iVar8 = rand();
            *(float *)(unaff_EBP - 0xe8) = ((float)iVar8 * 0.2) / 32767.0 + 1.0;
          }
          FUN_00402550((void *)(unaff_EBP - 0xf8),(longlong *)((int)pvVar26 + 0x10));
          iVar8 = *(int *)(unaff_EBP - 0x2b28);
          *(undefined4 *)(unaff_EBP - 0xe4) = 0x3f800000;
          FUN_00428590((void *)(iVar8 + 8),(undefined4 *)(unaff_EBP - 0xf8));
        }
        goto LAB_00544dc0;
      }
      fVar54 = FUN_004024e0(0.8 / **(float **)(unaff_EBP - 0x2b4c));
      *(float *)(unaff_EBP - 0x2b30) = (float)fVar54;
      fVar56 = *(float *)(unaff_EBP - 0x2b88);
      *(float *)((int)pvVar26 + 0x118c) =
           *(float *)(unaff_EBP - 0x2b30) * fVar56 * 0.002 * *(float *)(unaff_EBP - 0x2b20) * 1.5 +
           *(float *)((int)pvVar26 + 0x118c);
      *(float *)((int)pvVar26 + 0x1188) =
           *(float *)((int)pvVar26 + 0x1188) + *(float *)(unaff_EBP - 0x2ba0);
    }
    else {
      if (*(float *)(uVar27 + 0x16c) <= 0.0) {
        *(uint *)(iVar8 + 0x11c0) = 0;
        *(undefined4 *)(iVar8 + 0x11c4) = 0;
        goto LAB_005447a6;
      }
      pvVar26 = *(void **)(unaff_EBP - 0x2b14);
      if (*(char *)((int)pvVar26 + 0x60) == '\x05') goto LAB_005447ac;
      FUN_00401080((void *)(unaff_EBP - 0x1424),0,0,1.5 - *(float *)(uVar27 + 0x1180));
      FUN_00402510(unaff_EBP - 0x488);
      puVar25 = FUN_00402cb0((void *)(uVar27 + 0x10),(uint *)(unaff_EBP - 0x1fec),
                             (uint *)(unaff_EBP - 0x488));
      FUN_00402a40((void *)((int)pvVar26 + 0x10),puVar25);
      puVar19 = FUN_00401080((void *)(unaff_EBP - 0x143c),0,0,0);
      FUN_00401060((void *)((int)pvVar26 + 0x34),puVar19);
      pfVar28 = (float *)FUN_00401080((void *)(unaff_EBP - 0x1454),0x41a00000,0,0);
      puVar19 = (undefined4 *)
                FUN_004014f0((void *)(uVar27 + 0x28),(float *)(unaff_EBP - 0x146c),pfVar28);
      FUN_00401060((void *)((int)pvVar26 + 0x28),puVar19);
      puVar19 = FUN_00401080((void *)(unaff_EBP - 0x1484),0,0,0);
      FUN_00401060((void *)((int)pvVar26 + 0x40),puVar19);
      *(float *)((int)pvVar26 + 0x1188) = *(float *)(uVar27 + 0x1188) * 0.5;
      *(undefined4 *)((int)pvVar26 + 0x118c) = *(undefined4 *)(uVar27 + 0x118c);
LAB_00544dc0:
      fVar56 = *(float *)(unaff_EBP - 0x2b88);
    }
    if ((*(char *)((int)pvVar26 + 0xf08) != '\x17') || (*(char *)((int)pvVar26 + 0xf09) != '\0')) {
      *(ushort *)((int)pvVar26 + 0x124) = *(ushort *)((int)pvVar26 + 0x124) & 0xffef;
    }
    if (*(char *)((int)pvVar26 + 0xdf0) != '\x18') {
      *(ushort *)((int)pvVar26 + 0x124) = *(ushort *)((int)pvVar26 + 0x124) & 0xfdff;
    }
    if (1.0 < *(float *)((int)pvVar26 + 0x1188)) {
      *(float *)((int)pvVar26 + 0x1188) = 1.0;
    }
    iVar8 = *(int *)(unaff_EBP - 0x2b24);
    *(undefined4 *)(unaff_EBP - 0x2cc0) = 0;
    FUN_0052e710((float *)((int)pvVar26 + 0x1188),(float *)(unaff_EBP - 0x2cc0),iVar8,0.005);
    pfVar28 = (float *)((int)pvVar26 + 0x1180);
    if (0.0 < *pfVar28 || *pfVar28 == 0.0) {
      *(undefined4 *)(unaff_EBP - 0x2ca0) = 0;
      fVar57 = 0.02;
      pfVar29 = (float *)(unaff_EBP - 0x2ca0);
    }
    else {
      *(undefined4 *)(unaff_EBP - 0x2cbc) = 0;
      fVar57 = 0.01;
      pfVar29 = (float *)(unaff_EBP - 0x2cbc);
    }
    FUN_0052e710(pfVar28,pfVar29,iVar8,fVar57);
    *(undefined4 *)(unaff_EBP - 0x2c18) = 0;
    FUN_0052e710((float *)((int)pvVar26 + 0x1184),(float *)(unaff_EBP - 0x2c18),iVar8,0.0075);
    if ((((*(ushort *)((int)pvVar26 + 0x124) & 1) == 0) ||
        ((*(byte *)((int)pvVar26 + 0x5c) & 4) == 0)) ||
       ((*(ushort *)((int)pvVar26 + 0x124) & 0x10) != 0)) {
      pfVar28 = (float *)((int)pvVar26 + 0x58);
      fVar54 = FUN_00548b20(fVar56 * -0.01);
      iVar8 = *(int *)(unaff_EBP - 0x2b14);
      *(float *)(unaff_EBP - 0x2b30) = (float)fVar54;
      *pfVar28 = *(float *)(unaff_EBP - 0x2b30) * *pfVar28;
      if (((*(byte *)(iVar8 + 0x124) & 4) == 0) || (0 < *(int *)(iVar8 + 300))) {
        if (*(int *)(iVar8 + 0x128) == 0) {
          puVar19 = *(undefined4 **)(unaff_EBP - 0x2b5c);
          pfVar28 = (float *)FUN_004cde20((void *)(unaff_EBP - 0xe58),puVar19);
          fVar54 = FUN_00402180(pfVar28);
          *(float *)(unaff_EBP - 0x2b30) = (float)fVar54;
          if (0.02 < *(float *)(unaff_EBP - 0x2b30)) {
            fVar54 = FUN_004015a0((float *)(iVar8 + 0x34),(float *)(iVar8 + 0x40));
            *(float *)(unaff_EBP - 0x2b30) = (float)fVar54;
            if ((0.0 < *(float *)(unaff_EBP - 0x2b30)) && (*(char *)(unaff_EBP - 0x2b84) == '\0')) {
              FUN_004cde20((void *)(unaff_EBP - 0x124),puVar19);
              FUN_00401f50((float *)(unaff_EBP - 0x124));
              pfVar28 = (float *)FUN_004013d0((void *)(unaff_EBP - 0x124),1);
              if (1.0 < *pfVar28) {
                *pfVar28 = 1.0;
              }
              if (*pfVar28 <= -1.0 && *pfVar28 != -1.0) {
                *pfVar28 = -1.0;
              }
              pfVar29 = (float *)FUN_004013d0((void *)(unaff_EBP - 0x124),0);
              if (*pfVar29 <= 0.0) {
                fVar54 = FUN_00548b00(*pfVar28);
                *(float *)(unaff_EBP - 0x2b30) = (float)fVar54;
                fVar56 = *(float *)(unaff_EBP - 0x2b30);
              }
              else {
                fVar54 = FUN_00548b00(*pfVar28);
                *(float *)(unaff_EBP - 0x2b30) = (float)fVar54;
                fVar56 = -*(float *)(unaff_EBP - 0x2b30);
              }
              **(float **)(unaff_EBP - 0x2b3c) = (fVar56 / 3.1415927) * 180.0;
              goto LAB_005453eb;
            }
          }
        }
      }
      else {
        puVar19 = (undefined4 *)FUN_0041cba0(iVar8 + 0x138c);
        FUN_004cde20((void *)(unaff_EBP - 0x9c),puVar19);
        fVar54 = FUN_00402180((float *)(unaff_EBP - 0x9c));
        *(float *)(unaff_EBP - 0x2b30) = (float)fVar54;
        if ((0.0 < *(float *)(unaff_EBP - 0x2b30)) && (*(char *)(unaff_EBP - 0x2b84) == '\0')) {
          FUN_00401f50((float *)(unaff_EBP - 0x9c));
          pfVar29 = (float *)FUN_004013d0((void *)(unaff_EBP - 0x9c),1);
          if (1.0 < *pfVar29) {
            *pfVar29 = 1.0;
          }
          if (*pfVar29 <= -1.0 && *pfVar29 != -1.0) {
            *pfVar29 = -1.0;
          }
          pfVar41 = (float *)FUN_004013d0((void *)(unaff_EBP - 0x9c),0);
          fVar56 = 1.0;
          if (*pfVar41 <= 0.0) {
            fVar54 = FUN_00548b00(*pfVar29);
            *(float *)(unaff_EBP - 0x2b30) = (float)fVar54;
            fVar57 = *(float *)(unaff_EBP - 0x2b30);
          }
          else {
            fVar54 = FUN_00548b00(*pfVar29);
            *(float *)(unaff_EBP - 0x2b30) = (float)fVar54;
            fVar57 = -*(float *)(unaff_EBP - 0x2b30);
          }
          pfVar29 = *(float **)(unaff_EBP - 0x2b3c);
          fVar54 = FUN_005306d0(*pfVar29,(fVar57 / 3.1415927) * 180.0,fVar56);
          *(float *)(unaff_EBP - 0x2b30) = (float)fVar54;
          FUN_0052e710(pfVar29,(float *)(unaff_EBP - 0x2b30),*(int *)(unaff_EBP - 0x2b24),0.1);
          iVar8 = *(int *)(unaff_EBP - 0x2b14);
        }
        FUN_00401060((void *)(unaff_EBP - 0x2b4),(undefined4 *)(iVar8 + 0x138c));
        fVar54 = FUN_004021b0((float *)(unaff_EBP - 0x2b4));
        *(float *)(unaff_EBP - 0x2b30) = (float)fVar54;
        if (0.0 < *(float *)(unaff_EBP - 0x2b30)) {
          FUN_00401fb0((float *)(unaff_EBP - 0x2b4));
          fVar56 = 1.0;
          pfVar29 = (float *)FUN_004013d0((void *)(unaff_EBP - 0x2b4),2);
          fVar54 = FUN_00402480(*pfVar29);
          *(float *)(unaff_EBP - 0x2b30) = (float)fVar54;
          fVar54 = FUN_005306d0(*pfVar28,(*(float *)(unaff_EBP - 0x2b30) / 3.1415927) * 180.0,fVar56
                               );
          *(float *)(unaff_EBP - 0x2b30) = (float)fVar54;
          FUN_0052e710(pfVar28,(float *)(unaff_EBP - 0x2b30),*(int *)(unaff_EBP - 0x2b24),0.005);
        }
      }
    }
    else {
      *(undefined4 *)(unaff_EBP - 0x2bcc) = 0x42340000;
      FUN_0052e710((float *)((int)pvVar26 + 0x58),(float *)(unaff_EBP - 0x2bcc),iVar8,0.005);
      FUN_0052ec30((void *)((int)pvVar26 + 0x11a0),(float *)(unaff_EBP - 800));
      FUN_00401fb0((float *)(unaff_EBP - 800));
      pfVar28 = (float *)FUN_004013d0((void *)(unaff_EBP - 800),1);
      if (1.0 < *pfVar28) {
        *pfVar28 = 1.0;
      }
      if (*pfVar28 <= -1.0 && *pfVar28 != -1.0) {
        *pfVar28 = -1.0;
      }
      pfVar29 = (float *)FUN_004013d0((void *)(unaff_EBP - 800),0);
      fVar56 = 1.0;
      if (*pfVar29 <= 0.0) {
        fVar54 = FUN_00548b00(*pfVar28);
        *(float *)(unaff_EBP - 0x2b30) = (float)fVar54;
        fVar57 = *(float *)(unaff_EBP - 0x2b30);
      }
      else {
        fVar54 = FUN_00548b00(*pfVar28);
        *(float *)(unaff_EBP - 0x2b30) = (float)fVar54;
        fVar57 = -*(float *)(unaff_EBP - 0x2b30);
      }
      pfVar28 = *(float **)(unaff_EBP - 0x2b3c);
      fVar54 = FUN_005306d0(*pfVar28,(fVar57 / 3.1415927) * 180.0,fVar56);
      *(float *)(unaff_EBP - 0x2b30) = (float)fVar54;
      FUN_0052e710(pfVar28,(float *)(unaff_EBP - 0x2b30),*(int *)(unaff_EBP - 0x2b24),0.005);
LAB_005453eb:
      iVar8 = *(int *)(unaff_EBP - 0x2b14);
    }
    pvVar26 = *(void **)(unaff_EBP - 0x2b18);
    iVar17 = *(int *)(unaff_EBP - 0x2b24);
    if (((*(int *)((int)pvVar26 + 0xb8) != 0) && (500 < *(int *)(iVar8 + 0x128))) &&
       (*(int *)(iVar8 + 0x128) - iVar17 < 0x1f5)) {
      FUN_004c8530(unaff_EBP - 0x1d4);
      FUN_00402550((void *)(unaff_EBP - 0x1d4),(longlong *)(iVar8 + 0x10));
      iVar17 = *(int *)(unaff_EBP - 0x2b28);
      *(undefined4 *)(unaff_EBP - 0x1c4) = 0x3f800000;
      *(undefined4 *)(unaff_EBP - 0x1c8) = 0x1a;
      FUN_00428590((void *)(iVar17 + 8),(undefined4 *)(unaff_EBP - 0x1d4));
      iVar17 = *(int *)(unaff_EBP - 0x2b24);
    }
    *(undefined4 *)(iVar8 + 0x1318) = *(undefined4 *)(iVar8 + 0x128);
    if (*(int *)(iVar8 + 0x128) != 0) {
      *(int *)(iVar8 + 0x128) = *(int *)(iVar8 + 0x128) - iVar17;
    }
    if (*(int *)(iVar8 + 0x128) < 0) {
      *(undefined4 *)(iVar8 + 0x128) = 0;
    }
    if (*(char *)((int)pvVar26 + 0xb4) == '\0') {
      puVar25 = (uint *)(iVar8 + 0x1d30);
      if (*(int *)(iVar8 + 0x1d30) == 0 && *(int *)(iVar8 + 0x1d34) == 0) {
        pvVar26 = *(void **)(unaff_EBP - 0x2b18);
      }
      else {
        pvVar26 = *(void **)(unaff_EBP - 0x2b18);
        piVar53 = (int *)FUN_00530550((void *)((int)pvVar26 + 0xc),
                                      (undefined4 *)(unaff_EBP - 0x3020));
        pvVar50 = (void *)FUN_00530600((void *)((int)pvVar26 + 0xc),(int *)(unaff_EBP - 0x3030),
                                       puVar25);
        bVar3 = FUN_0042c6f0(pvVar50,piVar53);
        if (bVar3) {
          iVar8 = FUN_004013f0((void *)((int)pvVar26 + 0x1c),0xa03);
          FUN_00401cd0((undefined4 *)(unaff_EBP - 0xf00));
          puVar16 = FUN_00402b10((void *)(*(int *)(unaff_EBP - 0x2b18) + 0xc),puVar25);
          FUN_00402030((void *)(unaff_EBP - 0xf00),*(float *)(*puVar16 + 0x98));
          iVar17 = FUN_00402170(iVar8);
          fVar56 = (float)iVar17 * -0.5;
          iVar17 = FUN_00402160(iVar8);
          fVar57 = (float)iVar17 * -0.5;
          iVar17 = FUN_00402150(iVar8);
          FUN_004023b0((void *)(unaff_EBP - 0xf00),(float)iVar17 * -0.5,fVar57,fVar56);
          *(undefined4 *)(unaff_EBP - 0x2b30) = 0;
          piVar53 = FUN_00431020((void *)(iVar8 + 0x28),(int *)(unaff_EBP - 0x2b30));
          bVar3 = FUN_00530540((int)piVar53);
          if (!bVar3) {
            pfVar28 = (float *)FUN_004013d0(*(void **)(unaff_EBP - 0x2bb0),2);
            FUN_00401080((void *)(unaff_EBP - 0x149c),0,0,*pfVar28 * 0.5 + 0.001);
            FUN_00402510(unaff_EBP - 0x4a0);
            *(undefined4 *)(unaff_EBP - 0x2b30) = 0;
            piVar53 = FUN_00431020((void *)(iVar8 + 0x28),(int *)(unaff_EBP - 0x2b30));
            piVar53 = (int *)FUN_00530680(piVar53);
            FUN_004c64b0((void *)(unaff_EBP - 0x29c),piVar53);
            FUN_004021f0((void *)(unaff_EBP - 0xf00),(float *)(unaff_EBP - 0x10c4),
                         (float *)(unaff_EBP - 0x29c));
            FUN_00402510(unaff_EBP - 0x458);
            puVar46 = FUN_00402b10((void *)(*(int *)(unaff_EBP - 0x2b18) + 0xc),puVar25);
            puVar16 = (uint *)(unaff_EBP - 0x4a0);
            puVar15 = (uint *)(unaff_EBP - 0x198);
            puVar46 = FUN_00402cb0((void *)(*puVar46 + 0x80),(uint *)(unaff_EBP - 0x201c),
                                   (uint *)(unaff_EBP - 0x458));
            FUN_00402cb0(puVar46,puVar15,puVar16);
            pvVar26 = *(void **)(unaff_EBP - 0x2b60);
            puVar16 = FUN_00402c50(pvVar26,(uint *)(unaff_EBP - 0x204c),(uint *)(unaff_EBP - 0x198))
            ;
            pfVar28 = FUN_00402550((void *)(unaff_EBP - 0x14b4),(longlong *)puVar16);
            fVar54 = FUN_004021b0(pfVar28);
            *(float *)(unaff_EBP - 0x2b30) = (float)fVar54;
            if (1.0 < *(float *)(unaff_EBP - 0x2b30)) {
              FUN_00402a40(pvVar26,(undefined4 *)(unaff_EBP - 0x198));
            }
          }
          pvVar26 = *(void **)(unaff_EBP - 0x2b18);
          puVar25 = FUN_00402b10((void *)((int)pvVar26 + 0xc),puVar25);
          iVar8 = *(int *)(unaff_EBP - 0x2b14);
          **(undefined4 **)(unaff_EBP - 0x2b3c) = *(undefined4 *)(*puVar25 + 0x98);
        }
        else {
          iVar8 = *(int *)(unaff_EBP - 0x2b14);
        }
      }
    }
    if (*(char *)(iVar8 + 0x60) == '\x05') {
      puVar25 = (uint *)(iVar8 + 0x198);
      uVar27 = FUN_00405420(pvVar26,puVar25);
      if ((uVar27 == 0) || (uVar27 = FUN_00405420(pvVar26,puVar25), *(char *)(uVar27 + 0x68) != 'j')
         ) {
        iVar8 = *(int *)(unaff_EBP - 0x2b14);
        goto LAB_00545940;
      }
      uVar27 = FUN_00405420(pvVar26,puVar25);
      pvVar26 = *(void **)(unaff_EBP - 0x2bb0);
      *(uint *)(unaff_EBP - 0x2b20) = uVar27;
      pfVar28 = (float *)FUN_004013d0(pvVar26,2);
      pfVar29 = (float *)FUN_004013d0((void *)(uVar27 + 0x80),2);
      FUN_00401080((void *)(unaff_EBP - 0x14cc),0,0,(*pfVar28 * 0.5 - *pfVar29 * 0.5) + 0.01);
      FUN_00402510(unaff_EBP - 0x368);
      puVar25 = FUN_00402cb0((void *)(*(int *)(unaff_EBP - 0x2b20) + 0x1350),
                             (uint *)(unaff_EBP - 0x207c),(uint *)(unaff_EBP - 0x368));
      FUN_00402a40((void *)(*(int *)(unaff_EBP - 0x2b14) + 0x1350),puVar25);
      FUN_00401060((void *)(*(int *)(unaff_EBP - 0x2b14) + 0x1374),
                   (undefined4 *)(*(int *)(unaff_EBP - 0x2b20) + 0x1374));
      FUN_00401080((void *)(unaff_EBP - 0x14e4),0,0,(*pfVar28 * 0.5 - *pfVar29 * 0.5) + 0.01);
      FUN_00402510(unaff_EBP - 0x344);
      iVar17 = *(int *)(unaff_EBP - 0x2b20);
      puVar25 = FUN_00402cb0((void *)(iVar17 + 0x10),(uint *)(unaff_EBP - 0x20ac),
                             (uint *)(unaff_EBP - 0x344));
      FUN_00402a40(*(void **)(unaff_EBP - 0x2b60),puVar25);
      FUN_00401060(*(void **)(unaff_EBP - 0x2b64),(undefined4 *)(iVar17 + 0x28));
      iVar8 = *(int *)(unaff_EBP - 0x2b14);
      *(undefined4 *)(iVar8 + 0x1180) = *(undefined4 *)(iVar17 + 0x1180);
      *(undefined4 *)(iVar8 + 0x1188) = *(undefined4 *)(iVar17 + 0x1188);
      *(undefined4 *)(iVar8 + 0x118c) = *(undefined4 *)(iVar17 + 0x118c);
      puVar19 = FUN_00401080((void *)(unaff_EBP - 0x14fc),0,0,0);
      FUN_00401060((void *)(iVar8 + 0x34),puVar19);
      puVar19 = FUN_00401080((void *)(unaff_EBP - 0x1514),0,0,0);
      pvVar26 = (void *)(iVar8 + 0x40);
LAB_00545b0e:
      FUN_00401060(pvVar26,puVar19);
    }
    else {
LAB_00545940:
      if (*(int *)(iVar8 + 0x1398) < 1) {
        FUN_00402a40((void *)(iVar8 + 0x1350),(undefined4 *)(iVar8 + 0x10));
        puVar19 = (undefined4 *)(iVar8 + 0x28);
        pvVar26 = (void *)(iVar8 + 0x1374);
        goto LAB_00545b0e;
      }
      uVar27 = *(uint *)(unaff_EBP - 0x2b24);
      iVar17 = 0x3c75c28f;
      *(undefined4 *)(unaff_EBP - 0x2b58) = 0;
      *(undefined4 *)(unaff_EBP - 0x2b8c) = 0x3f800000;
      FUN_0052e710((float *)(unaff_EBP - 0x2b58),(float *)(unaff_EBP - 0x2b8c),uVar27,0.015);
      puVar16 = (uint *)(iVar8 + 0x1350);
      FUN_00402a10((ulonglong *)&stack0xfffffff8);
      puVar19 = (undefined4 *)(unaff_EBP - 0x20dc);
      puVar25 = FUN_00402c50(*(void **)(unaff_EBP - 0x2b60),(uint *)(unaff_EBP - 0x210c),puVar16);
      puVar25 = FUN_00402bd0(puVar25,puVar19,uVar27,iVar17);
      FUN_00402e30(puVar16,puVar25);
      puVar16 = (uint *)FUN_004e2320(puVar16,2);
      puVar39 = (ulonglong *)(unaff_EBP - 0x364c);
      piVar53 = (int *)(unaff_EBP - 0x365c);
      puVar25 = puVar16;
      pvVar26 = (void *)FUN_004e2320(*(void **)(unaff_EBP - 0x2b60),2);
      FUN_00401490(pvVar26,piVar53,puVar25);
      puVar39 = FUN_0052ebb0(puVar39);
      FUN_00402e60(puVar16,(uint *)puVar39);
      pvVar26 = (void *)(*(int *)(unaff_EBP - 0x2b14) + 0x1374);
      pfVar28 = (float *)FUN_004013d0(pvVar26,0);
      fVar56 = *(float *)(unaff_EBP - 0x2b58);
      pfVar29 = (float *)FUN_004013d0(*(void **)(unaff_EBP - 0x2b64),0);
      fVar54 = FUN_005306d0(*pfVar28,*pfVar29,fVar56);
      *pfVar28 = (float)fVar54;
      pfVar28 = (float *)FUN_004013d0(pvVar26,1);
      fVar54 = FUN_005306d0(*pfVar28,**(float **)(unaff_EBP - 0x2b40),*(float *)(unaff_EBP - 0x2b58)
                           );
      *pfVar28 = (float)fVar54;
      pfVar28 = (float *)FUN_004013d0(pvVar26,2);
      fVar54 = FUN_005306d0(*pfVar28,**(float **)(unaff_EBP - 0x2b3c),*(float *)(unaff_EBP - 0x2b58)
                           );
      *pfVar28 = (float)fVar54;
      iVar8 = *(int *)(unaff_EBP - 0x2b14);
      *(undefined4 *)(iVar8 + 0x1180) = 0;
    }
    iVar17 = *(int *)(unaff_EBP - 0x2b24);
    *(undefined4 *)(unaff_EBP - 0x2b38) = 0;
    *(undefined4 *)(unaff_EBP - 0x2b44) = 0x3f800000;
    FUN_0052e710((float *)(unaff_EBP - 0x2b38),(float *)(unaff_EBP - 0x2b44),iVar17,0.025);
    fVar56 = *(float *)(unaff_EBP - 0x2b38);
    pfVar28 = (float *)(unaff_EBP - 0x152c);
    pfVar29 = (float *)(iVar8 + 0x138c);
    in_stack_fffffff0 = (float *)(unaff_EBP - 0x1544);
    puVar19 = (undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 0x160);
    in_stack_ffffffe8 = 0x545b8100000000;
    pvVar26 = (void *)FUN_00401450(puVar19,in_stack_fffffff0,pfVar29);
    pfVar28 = (float *)FUN_004079f0(pvVar26,pfVar28,fVar56);
    FUN_00401650(pfVar29,pfVar28);
    iVar8 = *(int *)(unaff_EBP - 0x2b14);
    if (((*(char *)(iVar8 + 0x68) == '\0') || (*(int *)(iVar8 + 0x6c) == 0)) ||
       (iVar8 = FUN_004084b0(iVar8), iVar8 < *(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c))) {
      FUN_00401060(pfVar29,puVar19);
    }
    FUN_00423710((int *)(unaff_EBP - 0x2ccc));
    FUN_00423710((int *)(unaff_EBP - 0x2cdc));
    *(undefined1 *)(unaff_EBP - 4) = 5;
    FUN_00423710((int *)(unaff_EBP - 0x2bf8));
LAB_00545be1:
    FUN_00407a30((void *)(unaff_EBP - 0x2b68),(int *)(unaff_EBP - 0x2bc0));
    piVar53 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),(undefined4 *)(unaff_EBP - 0x2d34))
    ;
    bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b68),piVar53);
    unaff_ESI = *(void **)(unaff_EBP - 0x2b18);
  } while (bVar3);
  pvVar26 = (void *)(*(int *)(unaff_EBP - 0x2b18) + 0xc);
  *(void **)(unaff_EBP - 0x2cb8) = pvVar26;
  FUN_00428070(pvVar26,(undefined4 *)(unaff_EBP - 0x2b40));
  piVar53 = (int *)FUN_00530550(pvVar26,(undefined4 *)(unaff_EBP - 0x2d3c));
  bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b40),piVar53);
  if (bVar3) {
    do {
      FUN_00407a30((void *)(unaff_EBP - 0x2b40),(int *)(unaff_EBP - 0x2bc0));
      piVar53 = (int *)FUN_00530550(pvVar26,(undefined4 *)(unaff_EBP - 0x2d3c));
      bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b40),piVar53);
    } while (bVar3);
  }
  FUN_00428070(pvVar26,(undefined4 *)(unaff_EBP - 0x2bac));
  piVar53 = (int *)FUN_00530550(pvVar26,(undefined4 *)(unaff_EBP - 0x2d54));
  bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2bac),piVar53);
  if (bVar3) {
    do {
      iVar8 = FUN_00402bc0((int *)(unaff_EBP - 0x2bac));
      piVar53 = (int *)(iVar8 + 8);
      if (*piVar53 != 0) {
        FUN_00402a40((void *)(unaff_EBP - 0x198),(undefined4 *)(*piVar53 + 0x80));
        iVar8 = *piVar53;
        cVar4 = *(char *)(*(int *)(unaff_EBP - 0x2b18) + 0xb4);
        *(undefined4 *)(unaff_EBP - 0x2b40) = *(undefined4 *)(iVar8 + 0x98);
        if (cVar4 != '\0') goto LAB_005463ff;
        cVar4 = *(char *)(iVar8 + 0x70);
        if (cVar4 == '\x01') {
          puVar25 = FUN_00402c50((void *)(iVar8 + 0x38),(uint *)(unaff_EBP - 0x213c),
                                 (uint *)(iVar8 + 0x10));
          FUN_00402550((void *)(unaff_EBP - 0x40),(longlong *)puVar25);
          fVar54 = FUN_004021b0((float *)(unaff_EBP - 0x40));
          *(float *)(unaff_EBP - 0x2b44) = (float)fVar54;
          if (0.001 <= *(float *)(unaff_EBP - 0x2b44)) {
            if (100.0 < *(float *)(unaff_EBP - 0x2b44)) {
              FUN_00401fb0((float *)(unaff_EBP - 0x40));
              FUN_00401610((void *)(unaff_EBP - 0x40),10.0);
            }
            puVar19 = (undefined4 *)(unaff_EBP - 0x40);
LAB_00545db4:
            FUN_00401060((void *)(*piVar53 + 0x28),puVar19);
          }
          else {
            puVar19 = FUN_00401080((void *)(unaff_EBP - 0x155c),0,0,0);
            FUN_00401060((void *)(*piVar53 + 0x28),puVar19);
            *(undefined1 *)(*piVar53 + 0x70) = 2;
          }
LAB_00545dbf:
          pfVar28 = (float *)(*piVar53 + 0x34);
          fVar54 = FUN_005306d0(*pfVar28,*(float *)(*piVar53 + 0x50),1.0);
          fVar56 = 0.005;
LAB_005463e3:
          iVar8 = *(int *)(unaff_EBP - 0x2b24);
          *(float *)(unaff_EBP - 0x2b44) = (float)fVar54;
          FUN_0052e710(pfVar28,(float *)(unaff_EBP - 0x2b44),iVar8,fVar56);
        }
        else {
          if (cVar4 == '\0') {
            fVar56 = (-*(float *)(iVar8 + 0x50) * 3.1415927) / 180.0;
            *(float *)(unaff_EBP - 0x2b8c) = fVar56;
            uVar66 = 0x41a00000;
            fVar54 = FUN_004024a0(fVar56);
            *(float *)(unaff_EBP - 0x2b44) = (float)fVar54;
            fVar56 = *(float *)(unaff_EBP - 0x2b44) * -50.0;
            fVar54 = FUN_004024c0(*(float *)(unaff_EBP - 0x2b8c));
            *(float *)(unaff_EBP - 0x2b44) = (float)fVar54;
            FUN_00401080((void *)(unaff_EBP - 0x1574),*(float *)(unaff_EBP - 0x2b44) * -50.0,fVar56,
                         uVar66);
            FUN_00402510(unaff_EBP - 0x344);
            puVar25 = (uint *)(*piVar53 + 0x10);
            puVar16 = (uint *)(unaff_EBP - 0x216c);
            puVar15 = FUN_00402cb0((void *)(*piVar53 + 0x38),(uint *)(unaff_EBP - 0x219c),
                                   (uint *)(unaff_EBP - 0x344));
            puVar25 = FUN_00402c50(puVar15,puVar16,puVar25);
            FUN_00402550((void *)(unaff_EBP - 0x58),(longlong *)puVar25);
            fVar54 = FUN_004021b0((float *)(unaff_EBP - 0x58));
            *(float *)(unaff_EBP - 0x2b44) = (float)fVar54;
            if (0.001 < *(float *)(unaff_EBP - 0x2b44) || *(float *)(unaff_EBP - 0x2b44) == 0.001) {
              FUN_00401fb0((float *)(unaff_EBP - 0x58));
              FUN_00401610((void *)(unaff_EBP - 0x58),10.0);
              puVar19 = (undefined4 *)(unaff_EBP - 0x58);
              goto LAB_00545db4;
            }
            puVar19 = FUN_00401080((void *)(unaff_EBP - 0x158c),0,0,0);
            FUN_00401060((void *)(*piVar53 + 0x28),puVar19);
            *(undefined1 *)(*piVar53 + 0x70) = 1;
            goto LAB_00545dbf;
          }
          if (cVar4 == '\x02') {
            fVar56 = (-*(float *)(iVar8 + 0x50) * 3.1415927) / 180.0;
            *(float *)(unaff_EBP - 0x2b8c) = fVar56;
            uVar66 = 0x41a00000;
            fVar54 = FUN_004024a0(fVar56);
            *(float *)(unaff_EBP - 0x2b44) = (float)fVar54;
            fVar56 = *(float *)(unaff_EBP - 0x2b44) * 50.0;
            fVar54 = FUN_004024c0(*(float *)(unaff_EBP - 0x2b8c));
            *(float *)(unaff_EBP - 0x2b44) = (float)fVar54;
            FUN_00401080((void *)(unaff_EBP - 0x15a4),*(float *)(unaff_EBP - 0x2b44) * 50.0,fVar56,
                         uVar66);
            FUN_00402510(unaff_EBP - 0x368);
            puVar25 = (uint *)(*piVar53 + 0x10);
            puVar16 = (uint *)(unaff_EBP - 0x21cc);
            puVar15 = FUN_00402cb0((void *)(*piVar53 + 0x38),(uint *)(unaff_EBP - 0x21fc),
                                   (uint *)(unaff_EBP - 0x368));
            puVar25 = FUN_00402c50(puVar15,puVar16,puVar25);
            FUN_00402550((void *)(unaff_EBP - 0xd4),(longlong *)puVar25);
            fVar54 = FUN_004021b0((float *)(unaff_EBP - 0xd4));
            *(float *)(unaff_EBP - 0x2b44) = (float)fVar54;
            if (0.001 < *(float *)(unaff_EBP - 0x2b44) || *(float *)(unaff_EBP - 0x2b44) == 0.001) {
              FUN_00401fb0((float *)(unaff_EBP - 0xd4));
              FUN_00401610((void *)(unaff_EBP - 0xd4),10.0);
              puVar19 = (undefined4 *)(unaff_EBP - 0xd4);
              goto LAB_00545db4;
            }
            puVar19 = FUN_00401080((void *)(unaff_EBP - 0x15bc),0,0,0);
            FUN_00401060((void *)(*piVar53 + 0x28),puVar19);
            *(undefined1 *)(*piVar53 + 0x70) = 3;
            goto LAB_00545dbf;
          }
          if (cVar4 == '\x03') {
            puVar25 = FUN_00402c50((void *)(iVar8 + 0x58),(uint *)(unaff_EBP - 0x222c),
                                   (uint *)(iVar8 + 0x10));
            FUN_00402550((void *)(unaff_EBP - 0x4c),(longlong *)puVar25);
            puVar19 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 0x4c),2);
            *(undefined4 **)(unaff_EBP - 0x2cbc) = puVar19;
            *puVar19 = 0;
            fVar54 = FUN_004021b0((float *)(unaff_EBP - 0x4c));
            *(float *)(unaff_EBP - 0x2b44) = (float)fVar54;
            if (0.001 <= *(float *)(unaff_EBP - 0x2b44)) {
              if (900.0 < *(float *)(unaff_EBP - 0x2b44)) {
                FUN_00401fb0((float *)(unaff_EBP - 0x4c));
                FUN_00401610((void *)(unaff_EBP - 0x4c),30.0);
              }
              iVar8 = *(int *)(unaff_EBP - 0x2b24);
              fVar56 = 0.001;
              iVar17 = iVar8;
              pfVar28 = (float *)FUN_004013d0((void *)(unaff_EBP - 0x4c),0);
              pfVar29 = (float *)FUN_004013d0((void *)(*piVar53 + 0x28),0);
              FUN_0052e710(pfVar29,pfVar28,iVar17,fVar56);
              fVar56 = 0.001;
              pfVar28 = (float *)FUN_004013d0((void *)(unaff_EBP - 0x4c),1);
              pfVar29 = (float *)FUN_004013d0((void *)(*piVar53 + 0x28),1);
              FUN_0052e710(pfVar29,pfVar28,iVar8,fVar56);
            }
            else {
              puVar19 = FUN_00401080((void *)(unaff_EBP - 0x15d4),0,0,0);
              FUN_00401060((void *)(*piVar53 + 0x28),puVar19);
              *(undefined1 *)(*piVar53 + 0x70) = 0;
            }
            pvVar26 = (void *)(*piVar53 + 0x10);
            iVar8 = 0;
            *(void **)(unaff_EBP - 0x2b8c) = pvVar26;
            pCVar37 = (CRefTime *)FUN_004e2320(pvVar26,1);
            uVar27 = CRefTime::Millisecs(pCVar37);
            pCVar37 = (CRefTime *)FUN_004e2320(pvVar26,0);
            uVar52 = CRefTime::Millisecs(pCVar37);
            iVar8 = FUN_00406100(*(void **)(unaff_EBP - 0x2b18),uVar52,uVar27,iVar8);
            iVar17 = 0;
            *(int *)(unaff_EBP - 0x2b44) = iVar8;
            if (iVar8 != 0) {
              iVar17 = FUN_004061d0(iVar8);
              iVar8 = FUN_00406250(*(int *)(unaff_EBP - 0x2b44));
              iVar17 = iVar17 + iVar8;
              if (iVar17 < 0) {
                iVar17 = 0;
              }
            }
            pvVar26 = (void *)FUN_004e2320(*(void **)(unaff_EBP - 0x2b8c),2);
            *(void **)(unaff_EBP - 0x2b44) = pvVar26;
            iVar8 = FUN_00402d10(pvVar26,iVar17 + 100);
            if ((char)iVar8 == '\0') {
              iVar8 = FUN_00405750(*(void **)(unaff_EBP - 0x2b44),iVar17 + 0x96);
              if ((char)iVar8 == '\0') {
                *(undefined4 *)(unaff_EBP - 0x2ca0) = 0;
                pfVar28 = (float *)(unaff_EBP - 0x2ca0);
              }
              else {
                *(undefined4 *)(unaff_EBP - 0x2c18) = 0xc1200000;
                pfVar28 = (float *)(unaff_EBP - 0x2c18);
              }
            }
            else {
              *(undefined4 *)(unaff_EBP - 0x2bcc) = 0x41200000;
              pfVar28 = (float *)(unaff_EBP - 0x2bcc);
            }
            iVar8 = *(int *)(unaff_EBP - 0x2b24);
            fVar56 = 0.001;
            pfVar29 = (float *)FUN_004013d0((void *)(*piVar53 + 0x28),2);
            FUN_0052e710(pfVar29,pfVar28,iVar8,fVar56);
            FUN_00401060((void *)(unaff_EBP - 0x4c),(undefined4 *)(*piVar53 + 0x28));
            **(undefined4 **)(unaff_EBP - 0x2cbc) = 0;
            fVar54 = FUN_004021b0((float *)(unaff_EBP - 0x4c));
            *(float *)(unaff_EBP - 0x2b44) = (float)fVar54;
            if (*(float *)(unaff_EBP - 0x2b44) <= 0.0) goto LAB_005463ff;
            FUN_00401fb0((float *)(unaff_EBP - 0x4c));
            pfVar28 = (float *)FUN_004013d0((void *)(unaff_EBP - 0x4c),1);
            fVar56 = *pfVar28;
            *(float **)(unaff_EBP - 0x2b38) = pfVar28;
            if (1.0 < fVar56) {
              *pfVar28 = 1.0;
            }
            if (*pfVar28 <= -1.0 && *pfVar28 != -1.0) {
              *pfVar28 = -1.0;
            }
            pfVar29 = (float *)FUN_004013d0((void *)(unaff_EBP - 0x4c),0);
            pfVar28 = (float *)(*piVar53 + 0x34);
            fVar56 = 1.0;
            if (*pfVar29 <= 0.0) {
              fVar54 = FUN_00548b00(**(float **)(unaff_EBP - 0x2b38));
              *(float *)(unaff_EBP - 0x2b44) = (float)fVar54;
              fVar57 = *(float *)(unaff_EBP - 0x2b44);
            }
            else {
              fVar54 = FUN_00548b00(**(float **)(unaff_EBP - 0x2b38));
              *(float *)(unaff_EBP - 0x2b44) = (float)fVar54;
              fVar57 = -*(float *)(unaff_EBP - 0x2b44);
            }
            fVar54 = FUN_005306d0(*pfVar28,(fVar57 / 3.1415927) * 180.0,fVar56);
            fVar56 = 0.001;
            goto LAB_005463e3;
          }
        }
LAB_005463ff:
        FUN_004e1520((float *)(unaff_EBP - 0x15ec),*(float *)(unaff_EBP - 0x2ba0),
                     (float *)(*piVar53 + 0x28));
        FUN_00402510(unaff_EBP - 0x458);
        FUN_00402e30((void *)(*piVar53 + 0x10),(uint *)(unaff_EBP - 0x458));
        uVar27 = *(uint *)(unaff_EBP - 0x2b24);
        iVar17 = 0x3c23d70a;
        *(undefined4 *)(unaff_EBP - 0x2b1c) = 0;
        *(undefined4 *)(unaff_EBP - 0x2cc0) = 0x3f800000;
        FUN_0052e710((float *)(unaff_EBP - 0x2b1c),(float *)(unaff_EBP - 0x2cc0),uVar27,0.01);
        iVar8 = *piVar53;
        FUN_00402a10((ulonglong *)&stack0xfffffff8);
        puVar19 = (undefined4 *)(unaff_EBP - 0x225c);
        puVar25 = FUN_00402c50((void *)(iVar8 + 0x10),(uint *)(unaff_EBP - 0x228c),
                               (uint *)(iVar8 + 0x80));
        puVar25 = FUN_00402bd0(puVar25,puVar19,uVar27,iVar17);
        FUN_00402e30((void *)(*piVar53 + 0x80),puVar25);
        pfVar28 = (float *)(*piVar53 + 0x98);
        fVar54 = FUN_005306d0(*pfVar28,*(float *)(*piVar53 + 0x34),1.0);
        *(float *)(unaff_EBP - 0x2b44) = (float)fVar54;
        in_stack_ffffffe8 = 0x54650c00000000;
        FUN_0052e710(pfVar28,(float *)(unaff_EBP - 0x2b44),*(int *)(unaff_EBP - 0x2b24),0.01);
        FUN_004c8280((undefined4 *)(unaff_EBP - 0x2bf8));
        iVar8 = *piVar53;
        *(undefined1 *)(unaff_EBP - 4) = 0x19;
        FUN_00428070((void *)(iVar8 + 0x78),(undefined4 *)(unaff_EBP - 0x2b20));
        piVar9 = (int *)FUN_00530550((void *)(iVar8 + 0x78),(undefined4 *)(unaff_EBP - 0x2d44));
        bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b20),piVar9);
        if (bVar3) {
          do {
            puVar25 = (uint *)FUN_00402bc0((int *)(unaff_EBP - 0x2b20));
            uVar27 = FUN_00405420(*(void **)(unaff_EBP - 0x2b18),puVar25);
            *(uint *)(unaff_EBP - 0x2b8c) = uVar27;
            if (uVar27 == 0) {
LAB_0054670d:
              FUN_004d6620((void *)(unaff_EBP - 0x2bf8),(undefined4 *)(unaff_EBP - 0x2b20));
            }
            else {
              puVar25 = FUN_00402c50((void *)(uVar27 + 0x10),(uint *)(unaff_EBP - 0x22bc),
                                     (uint *)(*piVar53 + 0x10));
              pfVar28 = FUN_00402550((void *)(unaff_EBP - 0x1604),(longlong *)puVar25);
              fVar54 = FUN_004021b0(pfVar28);
              *(float *)(unaff_EBP - 0x2b44) = (float)fVar54;
              if (4096.0 < *(float *)(unaff_EBP - 0x2b44)) goto LAB_0054670d;
              FUN_00401cd0((undefined4 *)(unaff_EBP - 0xf00));
              FUN_00402030((void *)(unaff_EBP - 0xf00),
                           *(float *)(*piVar53 + 0x98) - *(float *)(unaff_EBP - 0x2b40));
              puVar25 = FUN_00402c50((void *)(uVar27 + 0x1350),(uint *)(unaff_EBP - 0x22ec),
                                     (uint *)(unaff_EBP - 0x198));
              FUN_00402550((void *)(unaff_EBP - 0x29c),(longlong *)puVar25);
              FUN_004021f0((void *)(unaff_EBP - 0xf00),(float *)(unaff_EBP - 0x161c),
                           (float *)(unaff_EBP - 0x29c));
              FUN_00402510(unaff_EBP - 0x4a0);
              puVar25 = FUN_00402cb0((void *)(*piVar53 + 0x80),(uint *)(unaff_EBP - 0x231c),
                                     (uint *)(unaff_EBP - 0x4a0));
              FUN_00402a40((void *)(uVar27 + 0x1350),puVar25);
              pfVar28 = (float *)FUN_004013d0((void *)(uVar27 + 0x1374),2);
              *pfVar28 = (*(float *)(*piVar53 + 0x98) - *(float *)(unaff_EBP - 0x2b40)) + *pfVar28;
              puVar25 = FUN_00402c50((void *)(uVar27 + 0x10),(uint *)(unaff_EBP - 0x234c),
                                     (uint *)(unaff_EBP - 0x198));
              FUN_00402550((void *)(unaff_EBP - 0x290),(longlong *)puVar25);
              FUN_004021f0((void *)(unaff_EBP - 0xf00),(float *)(unaff_EBP - 0x10d0),
                           (float *)(unaff_EBP - 0x290));
              FUN_00402510(unaff_EBP - 0x488);
              puVar25 = FUN_00402cb0((void *)(*piVar53 + 0x80),(uint *)(unaff_EBP - 0x237c),
                                     (uint *)(unaff_EBP - 0x488));
              FUN_00402a40((void *)(uVar27 + 0x10),puVar25);
              pfVar28 = (float *)FUN_004013d0((void *)(uVar27 + 0x28),2);
              *pfVar28 = (*(float *)(*piVar53 + 0x98) - *(float *)(unaff_EBP - 0x2b40)) + *pfVar28;
            }
            FUN_00407a30((void *)(unaff_EBP - 0x2b20),(int *)(unaff_EBP - 0x2c44));
            piVar9 = (int *)FUN_00530550((void *)(*piVar53 + 0x78),
                                         (undefined4 *)(unaff_EBP - 0x2d44));
            bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b20),piVar9);
          } while (bVar3);
        }
        FUN_00428070((void *)(unaff_EBP - 0x2bf8),(undefined4 *)(unaff_EBP - 0x2b68));
        piVar9 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2bf8),(undefined4 *)(unaff_EBP - 0x2d4c)
                                    );
        bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b68),piVar9);
        if (bVar3) {
          do {
            puVar19 = (undefined4 *)FUN_0052eb90((int *)(unaff_EBP - 0x2b68));
            FUN_0040a1d0((void *)(*piVar53 + 0x78),(undefined4 *)(unaff_EBP - 0x2ce0),
                         (int *)*puVar19);
            FUN_0052ebf0((void *)(unaff_EBP - 0x2b68),(undefined4 *)(unaff_EBP - 0x2bc0));
            piVar9 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2bf8),
                                         (undefined4 *)(unaff_EBP - 0x2d4c));
            bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b68),piVar9);
          } while (bVar3);
        }
        *(undefined1 *)(unaff_EBP - 4) = 5;
        FUN_00423710((int *)(unaff_EBP - 0x2bf8));
        pvVar26 = *(void **)(unaff_EBP - 0x2cb8);
      }
      FUN_00407a30((void *)(unaff_EBP - 0x2bac),(int *)(unaff_EBP - 0x2c1c));
      piVar53 = (int *)FUN_00530550(pvVar26,(undefined4 *)(unaff_EBP - 0x2d54));
      bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2bac),piVar53);
    } while (bVar3);
  }
  FUN_004c8280((undefined4 *)(unaff_EBP - 0x2c20));
  pvVar26 = (void *)(*(int *)(unaff_EBP - 0x2b18) + 0x14);
  *(undefined1 *)(unaff_EBP - 4) = 0x1a;
  FUN_00428070(pvVar26,(undefined4 *)(unaff_EBP - 0x2b50));
  piVar53 = (int *)FUN_00530550(pvVar26,(undefined4 *)(unaff_EBP - 0x2d6c));
  bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b50),piVar53);
joined_r0x00546872:
  if (!bVar3) {
    FUN_00428070((void *)(unaff_EBP - 0x2c20),(undefined4 *)(unaff_EBP - 0x2b68));
    piVar53 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2c20),(undefined4 *)(unaff_EBP - 0x2d7c));
    bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b68),piVar53);
    if (bVar3) {
      do {
        puVar19 = (undefined4 *)FUN_0052eb90((int *)(unaff_EBP - 0x2b68));
        FUN_005305b0(pvVar26,(int *)(unaff_EBP - 0x2bc0),(int *)*puVar19);
        FUN_0052ebf0((void *)(unaff_EBP - 0x2b68),(undefined4 *)(unaff_EBP - 0x2c44));
        piVar53 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2c20),
                                      (undefined4 *)(unaff_EBP - 0x2d7c));
        bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b68),piVar53);
      } while (bVar3);
    }
    *(undefined1 *)(unaff_EBP - 4) = 5;
    FUN_00423710((int *)(unaff_EBP - 0x2c20));
    FUN_00428070(*(void **)(unaff_EBP - 0x2b6c),(undefined4 *)(unaff_EBP - 0x2b68));
    piVar53 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),(undefined4 *)(unaff_EBP - 0x2d84))
    ;
    bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b68),piVar53);
    if (bVar3) {
      do {
        iVar17 = FUN_00402bc0((int *)(unaff_EBP - 0x2b68));
        iVar8 = *(int *)(iVar17 + 8);
        if (iVar8 != 0) {
          puVar25 = (uint *)(iVar8 + 0x11d0);
          uVar27 = FUN_00405420(*(void **)(unaff_EBP - 0x2b18),puVar25);
          if ((uVar27 != 0) &&
             (uVar27 = FUN_00405420(*(void **)(unaff_EBP - 0x2b18),puVar25),
             *(float *)(uVar27 + 0x16c) <= 0.0)) {
            *puVar25 = 0;
            *(undefined4 *)(iVar8 + 0x11d4) = 0;
          }
          iVar8 = *(int *)(iVar17 + 8);
          *(int *)(unaff_EBP - 0x2b94) = iVar8;
          if (*(char *)(iVar8 + 0x60) == '\x05') {
            puVar25 = (uint *)(iVar8 + 0x198);
            uVar27 = FUN_00405420(*(void **)(unaff_EBP - 0x2b18),puVar25);
            if ((uVar27 != 0) &&
               (uVar27 = FUN_00405420(*(void **)(unaff_EBP - 0x2b18),puVar25),
               *(char *)(uVar27 + 0x68) == 'j')) {
              uVar27 = FUN_00405420(*(void **)(unaff_EBP - 0x2b18),puVar25);
              *(uint *)(unaff_EBP - 0x2b40) = uVar27;
              pfVar28 = (float *)FUN_004013d0((void *)(iVar8 + 0x80),2);
              pfVar29 = (float *)FUN_004013d0((void *)(uVar27 + 0x80),2);
              FUN_00401080((void *)(unaff_EBP - 0x1754),0,0,(*pfVar28 * 0.5 - *pfVar29 * 0.5) + 0.01
                          );
              FUN_00402510(unaff_EBP - 0x344);
              puVar25 = FUN_00402cb0((void *)(*(int *)(unaff_EBP - 0x2b40) + 0x1350),
                                     (uint *)(unaff_EBP - 0x255c),(uint *)(unaff_EBP - 0x344));
              FUN_00402a40((void *)(*(int *)(unaff_EBP - 0x2b94) + 0x1350),puVar25);
              FUN_00401060((void *)(*(int *)(unaff_EBP - 0x2b94) + 0x1374),
                           (undefined4 *)(*(int *)(unaff_EBP - 0x2b40) + 0x1374));
              FUN_00401080((void *)(unaff_EBP - 0x176c),0,0,(*pfVar28 * 0.5 - *pfVar29 * 0.5) + 0.01
                          );
              FUN_00402510(unaff_EBP - 0x368);
              iVar8 = *(int *)(unaff_EBP - 0x2b40);
              puVar25 = FUN_00402cb0((void *)(iVar8 + 0x10),(uint *)(unaff_EBP - 0x258c),
                                     (uint *)(unaff_EBP - 0x368));
              iVar17 = *(int *)(unaff_EBP - 0x2b94);
              FUN_00402a40((void *)(iVar17 + 0x10),puVar25);
              FUN_00401060((void *)(iVar17 + 0x28),(undefined4 *)(iVar8 + 0x28));
              *(undefined4 *)(iVar17 + 0x1180) = *(undefined4 *)(iVar8 + 0x1180);
              *(undefined4 *)(iVar17 + 0x1188) = *(undefined4 *)(iVar8 + 0x1188);
              *(undefined4 *)(iVar17 + 0x118c) = *(undefined4 *)(iVar8 + 0x118c);
              puVar19 = FUN_00401080((void *)(unaff_EBP - 0x1784),0,0,0);
              FUN_00401060((void *)(iVar17 + 0x34),puVar19);
              puVar19 = FUN_00401080((void *)(unaff_EBP - 0x179c),0,0,0);
              FUN_00401060((void *)(iVar17 + 0x40),puVar19);
            }
          }
        }
        FUN_00407a30((void *)(unaff_EBP - 0x2b68),(int *)(unaff_EBP - 0x2bc0));
        piVar53 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),
                                      (undefined4 *)(unaff_EBP - 0x2d84));
        bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b68),piVar53);
      } while (bVar3);
    }
    FUN_00428070((void *)(unaff_EBP - 0x2be8),(undefined4 *)(unaff_EBP - 0x2b68));
    piVar53 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2be8),(undefined4 *)(unaff_EBP - 0x2d8c));
    bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b68),piVar53);
    if (bVar3) {
      iVar8 = *(int *)(unaff_EBP - 0x2b28);
      do {
        piVar53 = (int *)FUN_00402bc0((int *)(unaff_EBP - 0x2b68));
        *(undefined1 *)(*piVar53 + 0x75) = 1;
        puVar19 = FUN_00422c00((void *)(unaff_EBP - 0xe88),*piVar53);
        *(undefined1 *)(unaff_EBP - 4) = 0x1b;
        FUN_00428450((void *)(iVar8 + 0x28),puVar19);
        *(undefined1 *)(unaff_EBP - 4) = 5;
        FUN_00423770(unaff_EBP - 0xe88);
        FUN_00407a30((void *)(unaff_EBP - 0x2b68),(int *)(unaff_EBP - 0x2bc0));
        piVar53 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2be8),
                                      (undefined4 *)(unaff_EBP - 0x2d8c));
        bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b68),piVar53);
      } while (bVar3);
    }
    iVar8 = *(int *)(unaff_EBP - 0x2b28);
    pvVar26 = (void *)(iVar8 + 0x30);
    FUN_00428070(pvVar26,(undefined4 *)(unaff_EBP - 0x2b68));
    piVar53 = (int *)FUN_00530550(pvVar26,(undefined4 *)(unaff_EBP - 0x2d94));
    bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b68),piVar53);
    if (bVar3) {
      do {
        pvVar50 = (void *)FUN_0052eb90((int *)(unaff_EBP - 0x2b68));
        puVar25 = (uint *)FUN_004013d0(pvVar50,1);
        uVar27 = *puVar25;
        puVar25 = (uint *)FUN_004013d0(pvVar50,0);
        iVar8 = FUN_00406290(*(void **)(unaff_EBP - 0x2b18),*puVar25,uVar27);
        if (iVar8 != 0) {
          *(undefined1 *)(iVar8 + 0x76) = 1;
        }
        FUN_0052ebf0((void *)(unaff_EBP - 0x2b68),(undefined4 *)(unaff_EBP - 0x2bc0));
        piVar53 = (int *)FUN_00530550(pvVar26,(undefined4 *)(unaff_EBP - 0x2d94));
        bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b68),piVar53);
      } while (bVar3);
      iVar8 = *(int *)(unaff_EBP - 0x2b28);
    }
    FUN_00428070((void *)(unaff_EBP - 0x2cd4),(undefined4 *)(unaff_EBP - 0x2b68));
    piVar53 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2cd4),(undefined4 *)(unaff_EBP - 0x2db4));
    bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b68),piVar53);
    if (bVar3) {
      do {
        piVar53 = (int *)FUN_00402bc0((int *)(unaff_EBP - 0x2b68));
        puVar19 = FUN_0052e950((void *)(unaff_EBP - 0xe50),*piVar53);
        *(undefined1 *)(unaff_EBP - 4) = 0x1c;
        FUN_005307f0((void *)(iVar8 + 0x38),puVar19);
        *(undefined1 *)(unaff_EBP - 4) = 5;
        FUN_00423770(unaff_EBP - 0xe50);
        FUN_00407a30((void *)(unaff_EBP - 0x2b68),(int *)(unaff_EBP - 0x2bc0));
        piVar53 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2cd4),
                                      (undefined4 *)(unaff_EBP - 0x2db4));
        bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b68),piVar53);
      } while (bVar3);
    }
    pvVar26 = (void *)(*(int *)(unaff_EBP - 0x2b28) + 0x18);
    FUN_00428070(pvVar26,(undefined4 *)(unaff_EBP - 0x2b20));
    piVar53 = (int *)FUN_00530550(pvVar26,(undefined4 *)(unaff_EBP - 0x2dbc));
    bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b20),piVar53);
    if (bVar3) {
      do {
        pvVar50 = (void *)FUN_0052eb90((int *)(unaff_EBP - 0x2b20));
        piVar53 = (int *)FUN_004013d0(pvVar50,1);
        uVar27 = (int)(*piVar53 + (*piVar53 >> 0x1f & 0xffU)) >> 8;
        piVar53 = (int *)FUN_004013d0(pvVar50,0);
        iVar8 = FUN_00406290(*(void **)(unaff_EBP - 0x2b18),
                             (int)(*piVar53 + (*piVar53 >> 0x1f & 0xffU)) >> 8,uVar27);
        if (iVar8 != 0) {
          puVar19 = (undefined4 *)FUN_0052eb90((int *)(unaff_EBP - 0x2b20));
          FUN_0041f4d0((void *)(iVar8 + 0x68),puVar19);
        }
        FUN_0052ebf0((void *)(unaff_EBP - 0x2b20),(undefined4 *)(unaff_EBP - 0x2bc0));
        piVar53 = (int *)FUN_00530550(pvVar26,(undefined4 *)(unaff_EBP - 0x2dbc));
        bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b20),piVar53);
      } while (bVar3);
    }
    FUN_004f7710((undefined4 *)(unaff_EBP - 0x2cd4));
    FUN_004f7710((undefined4 *)(unaff_EBP - 0x2be8));
    FUN_004f7710((undefined4 *)(unaff_EBP - 0x2bf0));
    FUN_00423710((int *)(unaff_EBP - 0x2bd4));
    ExceptionList = *(void **)(unaff_EBP - 0xc);
    uStack00000008 = 0x54721f;
    __security_check_cookie(*(uint *)(unaff_EBP - 0x10) ^ unaff_EBP);
    return;
  }
  puVar25 = (uint *)FUN_0052eb90((int *)(unaff_EBP - 0x2b50));
  if (puVar25[0x18] != 1) {
    if (puVar25[0x18] != 2) {
      pfVar28 = (float *)FUN_004013d0(puVar25 + 0xf,2);
      *pfVar28 = *pfVar28 - *(float *)(unaff_EBP - 0x2ba0) * 30.0 * 0.25;
      goto LAB_00546a5d;
    }
    uVar52 = 0x5468ae;
    puVar16 = puVar25;
    uVar27 = FUN_00405420(*(void **)(unaff_EBP - 0x2b18),puVar25);
    uVar66 = (undefined4)(in_stack_ffffffe8 >> 0x20);
    *(uint *)(unaff_EBP - 0x2b8c) = uVar27;
    if ((uVar27 != 0) && (uVar48 = puVar25[0x1a], (int)uVar48 < 0x4b1)) {
      if ((int)uVar48 < 0x44d) {
        if ((int)uVar48 < 0x321) {
          FUN_00402510(unaff_EBP - 0x344);
          pfVar28 = (float *)(unaff_EBP - 0x167c);
          iVar8 = *(int *)(unaff_EBP - 0x2b24);
          fVar57 = 0.05;
          fVar56 = 5.0;
          puVar16 = puVar25 + 6;
          puVar15 = (uint *)(unaff_EBP - 0x249c);
          puVar46 = FUN_00402cb0((void *)(uVar27 + 0x10),(uint *)(unaff_EBP - 0x24cc),
                                 (uint *)(unaff_EBP - 0x344));
          puVar16 = FUN_00402c50(puVar46,puVar15,puVar16);
          pfVar29 = FUN_00402550((void *)(unaff_EBP - 0x1694),(longlong *)puVar16);
          puVar33 = (undefined8 *)FUN_004079f0(pfVar29,pfVar28,fVar56);
          in_stack_ffffffe8 = 0x546a2a00000000;
          FUN_0052e7c0((float *)(puVar25 + 0xf),puVar33,iVar8,fVar57);
        }
        else {
          pfVar28 = (float *)(unaff_EBP - 0x164c);
          fVar56 = 10.0;
          in_stack_ffffffe8 = 0x54699500000000;
          puVar16 = FUN_00402c50((void *)(uVar27 + 0x10),(uint *)(unaff_EBP - 0x246c),puVar25 + 6);
          pfVar29 = FUN_00402550((void *)(unaff_EBP - 0x1664),(longlong *)puVar16);
          puVar19 = (undefined4 *)FUN_004079f0(pfVar29,pfVar28,fVar56);
          FUN_00401060(puVar25 + 0xf,puVar19);
        }
      }
      else {
        *(float *)(unaff_EBP - 0x2b44) = (float)(int)(uVar48 - 0x44c) / 100.0;
        puVar15 = puVar25 + 6;
        iVar8 = 0x546906;
        FUN_00402a10((ulonglong *)&stack0xfffffff8);
        puVar19 = (undefined4 *)(unaff_EBP - 0x23ac);
        FUN_00402a10((ulonglong *)&stack0xffffffec);
        in_stack_ffffffe8 = CONCAT44(uVar66,unaff_EBP - 0x23dc);
        puVar46 = FUN_00402c50((void *)(*(int *)(unaff_EBP - 0x2b8c) + 0x10),
                               (uint *)(unaff_EBP - 0x240c),puVar15);
        puVar32 = FUN_00402bd0(puVar46,(undefined4 *)in_stack_ffffffe8,
                               (uint)(in_stack_ffffffe8 >> 0x20),iVar8);
        puVar16 = FUN_00402bd0(puVar32,puVar19,uVar52,(int)puVar16);
        puVar16 = FUN_00402cb0(puVar15,(uint *)(unaff_EBP - 0x243c),puVar16);
        FUN_00402a40(puVar15,puVar16);
      }
      goto LAB_00546a5d;
    }
    goto LAB_00546b28;
  }
LAB_00546a5d:
  FUN_004e1520((float *)(unaff_EBP - 0x11c),*(float *)(unaff_EBP - 0x2ba0),(float *)(puVar25 + 0xf))
  ;
  puVar25[0x1a] = puVar25[0x1a] + *(int *)(unaff_EBP - 0x2b24);
  if ((puVar25[0x18] != 2) && (5000 < (int)puVar25[0x1a])) {
    if (puVar25[0x18] != 3) {
      pvVar26 = *(void **)(unaff_EBP - 0x2b18);
      uVar27 = FUN_00405420(pvVar26,puVar25);
      if (uVar27 != 0) {
        uVar27 = FUN_00405420(pvVar26,puVar25);
        fVar54 = FUN_00412150(uVar27);
        *(float *)(unaff_EBP - 0x2b44) = (float)fVar54;
        uVar27 = FUN_00405420(pvVar26,puVar25);
        *(undefined4 *)(uVar27 + 0x70) = 0;
        uVar27 = FUN_00405420(pvVar26,puVar25);
        uVar52 = FUN_00405420(*(void **)(unaff_EBP - 0x2b18),puVar25);
        fVar54 = FUN_00412150(uVar52);
        *(float *)(unaff_EBP - 0x2b8c) = (float)fVar54;
        *(int *)(uVar27 + 0x6c) =
             (int)((*(float *)(unaff_EBP - 0x2b44) / *(float *)(unaff_EBP - 0x2b8c)) *
                  (float)*(int *)(uVar27 + 0x6c));
      }
    }
    goto LAB_00546b28;
  }
  pvVar26 = *(void **)(unaff_EBP - 0x2b18);
  *(undefined4 *)(unaff_EBP - 0x2b4c) = 0;
  uVar27 = FUN_00405420(pvVar26,puVar25);
  if (uVar27 != 0) {
    uVar27 = FUN_00405420(*(void **)(unaff_EBP - 0x2b18),puVar25);
    *(uint *)(unaff_EBP - 0x2b4c) = uVar27;
  }
  fVar54 = FUN_00401d80((float *)(unaff_EBP - 0x11c));
  *(float *)(unaff_EBP - 0x2b44) = (float)fVar54;
  iVar8 = (int)(*(float *)(unaff_EBP - 0x2b44) * 2.0 + 1.0);
  *(int *)(unaff_EBP - 0x2c08) = iVar8;
  FUN_004f7a70((void *)(unaff_EBP - 0x11c),(float *)(unaff_EBP - 0x40),(float)iVar8);
  FUN_00401060((void *)(unaff_EBP - 0xb0),puVar25 + 0xf);
  fVar54 = FUN_004021b0((float *)(unaff_EBP - 0xb0));
  *(float *)(unaff_EBP - 0x2b44) = (float)fVar54;
  if (0.0 < *(float *)(unaff_EBP - 0x2b44)) {
    FUN_00401fb0((float *)(unaff_EBP - 0xb0));
  }
  FUN_00401610((void *)(unaff_EBP - 0xb0),(float)puVar25[0x15] * 5.0);
  *(float *)(unaff_EBP - 0x2b44) = (float)puVar25[0x15] * 3.0;
  puVar19 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 0xb0),2);
  pvVar26 = *(void **)(unaff_EBP - 0x2b18);
  *puVar19 = *(undefined4 *)(unaff_EBP - 0x2b44);
  pvVar26 = (void *)FUN_00405420(pvVar26,puVar25);
  iVar8 = *(int *)(unaff_EBP - 0x2c08);
  *(void **)(unaff_EBP - 0x2b84) = pvVar26;
  *(undefined4 *)(unaff_EBP - 0x2c04) = 0;
  if (0 < iVar8) {
    do {
      pvVar50 = *(void **)(unaff_EBP - 0x2b6c);
      *(undefined1 *)(unaff_EBP - 0x2b58) = 0;
      *(undefined1 *)(unaff_EBP - 0x2b64) = 0;
      FUN_00428070(pvVar50,(undefined4 *)(unaff_EBP - 0x2bac));
      piVar53 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),
                                    (undefined4 *)(unaff_EBP - 0x2d5c));
      bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2bac),piVar53);
      if (bVar3) {
        do {
          iVar8 = FUN_00402bc0((int *)(unaff_EBP - 0x2bac));
          pvVar50 = *(void **)(iVar8 + 8);
          *(void **)(unaff_EBP - 0x2b54) = pvVar50;
          if (((pvVar50 != (void *)0x0) && (0.0 < *(float *)((int)pvVar50 + 0x16c))) &&
             ((((puVar25[0x18] == 3 && ((char)puVar25[0x19] == '\x02')) || (pvVar26 == (void *)0x0))
              || (((pvVar50 != pvVar26 &&
                   (uVar66 = FUN_004d18c0((int)pvVar26,(int)pvVar50), (char)uVar66 != '\0')) &&
                  ((pvVar50 = *(void **)(unaff_EBP - 0x2b54),
                   *(int *)((int)pvVar50 + 8) != *(int *)((int)pvVar26 + 0x11c0) ||
                   (*(int *)((int)pvVar50 + 0xc) != *(int *)((int)pvVar26 + 0x11c4))))))))) {
            *(void **)(unaff_EBP - 0x2b38) = (void *)((int)pvVar50 + 0x80);
            iVar8 = FUN_004013d0((void *)((int)pvVar50 + 0x80),0);
            *(int *)(unaff_EBP - 0x2b1c) = iVar8;
            pvVar50 = (void *)(*(int *)(unaff_EBP - 0x2b54) + 0x10);
            *(void **)(unaff_EBP - 0x2b68) = pvVar50;
            iVar8 = FUN_004e2320(pvVar50,0);
            *(int *)(unaff_EBP - 0x2b48) = iVar8;
            iVar8 = FUN_004e2320(puVar25 + 6,0);
            *(int *)(unaff_EBP - 0x2b90) = iVar8;
            puVar16 = (uint *)FUN_004014b0(*(void **)(unaff_EBP - 0x2b48),
                                           (int *)(unaff_EBP - 0x36ec));
            pvVar50 = (void *)FUN_00401530(*(void **)(unaff_EBP - 0x2b90),
                                           (int *)(unaff_EBP - 0x370c));
            uVar27 = FUN_004ce380(pvVar50,puVar16);
            if ((char)uVar27 != '\0') {
              iVar8 = FUN_004013d0(*(void **)(unaff_EBP - 0x2b38),1);
              pvVar50 = *(void **)(unaff_EBP - 0x2b68);
              *(int *)(unaff_EBP - 0x2bb8) = iVar8;
              iVar8 = FUN_004e2320(pvVar50,1);
              *(int *)(unaff_EBP - 0x2b98) = iVar8;
              iVar8 = FUN_004e2320(puVar25 + 6,1);
              *(int *)(unaff_EBP - 0x2bbc) = iVar8;
              puVar16 = (uint *)FUN_004014b0(*(void **)(unaff_EBP - 0x2b98),
                                             (int *)(unaff_EBP - 0x3484));
              pvVar50 = (void *)FUN_00401530(*(void **)(unaff_EBP - 0x2bbc),
                                             (int *)(unaff_EBP - 0x31c4));
              uVar27 = FUN_004ce380(pvVar50,puVar16);
              if ((char)uVar27 != '\0') {
                iVar8 = FUN_004013d0(*(void **)(unaff_EBP - 0x2b38),2);
                pvVar50 = *(void **)(unaff_EBP - 0x2b68);
                *(int *)(unaff_EBP - 0x2b38) = iVar8;
                iVar8 = FUN_004e2320(pvVar50,2);
                *(int *)(unaff_EBP - 0x2b94) = iVar8;
                iVar8 = FUN_004e2320(puVar25 + 6,2);
                *(int *)(unaff_EBP - 0x2ba8) = iVar8;
                puVar16 = (uint *)FUN_004014b0(*(void **)(unaff_EBP - 0x2b94),
                                               (int *)(unaff_EBP - 0x36f4));
                pvVar50 = (void *)FUN_00401530(*(void **)(unaff_EBP - 0x2ba8),
                                               (int *)(unaff_EBP - 0x31d4));
                uVar27 = FUN_004ce380(pvVar50,puVar16);
                if ((char)uVar27 != '\0') {
                  puVar16 = (uint *)FUN_00401530(*(void **)(unaff_EBP - 0x2b48),
                                                 (int *)(unaff_EBP - 0x3494));
                  pvVar50 = (void *)FUN_004014b0(*(void **)(unaff_EBP - 0x2b90),
                                                 (int *)(unaff_EBP - 0x31a4));
                  uVar27 = FUN_004ce350(pvVar50,puVar16);
                  if ((char)uVar27 != '\0') {
                    puVar16 = (uint *)FUN_00401530(*(void **)(unaff_EBP - 0x2b98),
                                                   (int *)(unaff_EBP - 0x35f4));
                    pvVar50 = (void *)FUN_004014b0(*(void **)(unaff_EBP - 0x2bbc),
                                                   (int *)(unaff_EBP - 0x31f4));
                    uVar27 = FUN_004ce350(pvVar50,puVar16);
                    if ((char)uVar27 != '\0') {
                      puVar16 = (uint *)FUN_00401530(*(void **)(unaff_EBP - 0x2b94),
                                                     (int *)(unaff_EBP - 0x34a4));
                      pvVar50 = (void *)FUN_004014b0(*(void **)(unaff_EBP - 0x2ba8),
                                                     (int *)(unaff_EBP - 0x3204));
                      uVar27 = FUN_004ce350(pvVar50,puVar16);
                      if ((char)uVar27 != '\0') {
                        in_stack_ffffffe8 = 0x5476f700000000;
                        cVar4 = FUN_004d4d80(puVar25 + 6,*(uint **)(unaff_EBP - 0x2b68),'\x01',200.0
                                            );
                        if (cVar4 != '\0') {
                          if (*(int *)(*(int *)(unaff_EBP - 0x2b54) + 0x128) != 0) {
                            if (pvVar26 != (void *)0x0) {
                              FUN_00530690((void *)((int)pvVar26 + 0x11b4),
                                           (undefined4 *)(unaff_EBP - 0xd0),
                                           (uint *)(*(int *)(unaff_EBP - 0x2b54) + 8));
                            }
                            goto LAB_00547c9b;
                          }
                          uVar27 = puVar25[0x18];
                          if (((uVar27 == 0) && ((char)puVar25[0x17] == '\0')) ||
                             (((uVar27 == 1 || (uVar27 == 4)) && ((char)puVar25[0x17] == '\0')))) {
LAB_005477df:
                            if (uVar27 != 3) {
                              uVar52 = *(uint *)(unaff_EBP - 0x2b58) & 0xff;
                              if (uVar27 != 2) {
                                uVar52 = 1;
                              }
                              *(uint *)(unaff_EBP - 0x2b58) = uVar52;
                            }
                            pvVar26 = *(void **)(unaff_EBP - 0x2b84);
                            if ((((char)puVar25[0x17] == '\0') && (uVar27 != 3)) &&
                               ((uVar27 != 1 && ((uVar27 != 4 && (pvVar26 != (void *)0x0)))))) {
                              iVar8 = rand();
                              uVar27 = puVar25[0x18];
                              fVar56 = (1.0 - ((float)iVar8 * 2.0) / 32767.0) * 0.05 + 0.1;
                              *(float *)(unaff_EBP - 0x2b38) = fVar56;
                              if (uVar27 == 2) {
                                *(float *)(unaff_EBP - 0x2b38) = fVar56 * 0.2;
                              }
                              iVar8 = FUN_004084b0((int)pvVar26);
                              *(float *)(unaff_EBP - 0x2b38) =
                                   ((float)iVar8 / 300.0) * *(float *)(unaff_EBP - 0x2b38);
                              uVar27 = rand();
                              uVar27 = uVar27 & 0x80000007;
                              bVar3 = uVar27 == 0;
                              if ((int)uVar27 < 0) {
                                bVar3 = (uVar27 - 1 | 0xfffffff8) == 0xffffffff;
                              }
                              fVar56 = *(float *)(unaff_EBP - 0x2b38);
                              if (bVar3) {
                                fVar56 = fVar56 * 2.0;
                              }
                              if (((*(char *)(*(int *)(unaff_EBP - 0x2b18) + 0xb4) == '\0') ||
                                  (pvVar26 == *(void **)(*(int *)(unaff_EBP - 0x2b18) + 0xb8))) &&
                                 (fVar56 = *(float *)((int)pvVar26 + 0x170) + fVar56,
                                 *(float *)((int)pvVar26 + 0x170) = fVar56, 1.0 < fVar56)) {
                                *(undefined4 *)((int)pvVar26 + 0x170) = 0x3f800000;
                              }
                            }
                            bVar3 = false;
                            *(undefined1 *)(unaff_EBP - 0x2b40) = 0;
                            if (pvVar26 != (void *)0x0) {
                              bVar3 = FUN_0040f520((int)pvVar26);
                              *(bool *)(unaff_EBP - 0x2b40) = bVar3;
                            }
                            fVar56 = (float)puVar25[0x12];
                            *(float *)(unaff_EBP - 0x2b78) = fVar56;
                            if (bVar3 != false) {
                              fVar56 = fVar56 * 2.0;
                              *(float *)(unaff_EBP - 0x2b78) = fVar56;
                            }
                            pvVar50 = *(void **)(unaff_EBP - 0x2b4c);
                            if ((pvVar50 != (void *)0x0) &&
                               ((pvVar50 == *(void **)(*(int *)(unaff_EBP - 0x2b18) + 0xb8) ||
                                ((*(char *)(*(int *)(unaff_EBP - 0x2b18) + 0xb4) == '\0' &&
                                 (*(char *)((int)pvVar50 + 0x60) != '\0')))))) {
                              bVar3 = FUN_0040f220(pvVar50,0.15);
                              pvVar50 = *(void **)(unaff_EBP - 0x2b4c);
                              if ((bVar3) &&
                                 ((((char)puVar25[0x17] == '\0' &&
                                   (*(char *)((int)pvVar50 + 0x140) == '\x02')) &&
                                  (*(char *)((int)pvVar50 + 0x141) == '\x01')))) {
                                FUN_004029b0((undefined1 *)(unaff_EBP - 0x2f64));
                                pvVar50 = *(void **)(unaff_EBP - 0x2b4c);
                                *(undefined1 *)(unaff_EBP - 0x2f64) = 10;
                                *(undefined4 *)(unaff_EBP - 0x2f5c) = 30000;
                                FUN_00411740(pvVar50,(char *)(unaff_EBP - 0x2f64));
                                FUN_004063d0(unaff_EBP - 0x240);
                                uVar66 = *(undefined4 *)(*(int *)(unaff_EBP - 0x2b4c) + 8);
                                uVar65 = *(undefined4 *)(*(int *)(unaff_EBP - 0x2b4c) + 0xc);
                                *(undefined8 *)(unaff_EBP - 0x230) =
                                     *(undefined8 *)(unaff_EBP - 0x2f64);
                                uVar1 = *(undefined8 *)(unaff_EBP - 0x2f5c);
                                *(undefined4 *)(unaff_EBP - 0x23c) = uVar65;
                                *(undefined4 *)(unaff_EBP - 0x234) = uVar65;
                                iVar8 = *(int *)(unaff_EBP - 0x2b28);
                                *(undefined4 *)(unaff_EBP - 0x240) = uVar66;
                                *(undefined4 *)(unaff_EBP - 0x238) = uVar66;
                                *(undefined8 *)(unaff_EBP - 0x228) = uVar1;
                                *(undefined8 *)(unaff_EBP - 0x220) =
                                     *(undefined8 *)(unaff_EBP - 0x2f54);
                                FUN_00411040((void *)(iVar8 + 0x58),
                                             (undefined8 *)(unaff_EBP - 0x240));
                                FUN_004c8530(unaff_EBP - 0x1ec);
                                iVar8 = *(int *)(unaff_EBP - 0x2b4c);
                                *(undefined4 *)(unaff_EBP - 0x1e0) = 0x2f;
                                FUN_00402550((void *)(unaff_EBP - 0x1ec),(longlong *)(iVar8 + 0x10))
                                ;
                                FUN_00428590((void *)(*(int *)(unaff_EBP - 0x2b28) + 8),
                                             (undefined4 *)(unaff_EBP - 0x1ec));
                                pvVar50 = *(void **)(unaff_EBP - 0x2b4c);
                              }
                              fVar56 = *(float *)(unaff_EBP - 0x2b78);
                            }
                            if (fVar56 < 0.0) {
                              *(undefined4 *)(unaff_EBP - 0x2b78) = 0;
                            }
                            if ((char)puVar25[0x19] == '\x02') {
                              if (((pvVar50 == (void *)0x0) ||
                                  (uVar66 = FUN_004cfcc0((int)pvVar50,*(int *)(unaff_EBP - 0x2b54)),
                                  (char)uVar66 != '\0')) ||
                                 (*(char *)(*(int *)(unaff_EBP - 0x2b54) + 0x60) == '\x06')) {
                                if ((char)puVar25[0x19] != '\x02') goto LAB_00547be8;
                                goto LAB_00547c6a;
                              }
                              FUN_00422a90(unaff_EBP - 0xa28);
                              FUN_00402a40((void *)(unaff_EBP - 0xa08),
                                           *(undefined4 **)(unaff_EBP - 0x2b68));
                              fVar56 = *(float *)(unaff_EBP - 0x2b78);
                              iVar8 = *(int *)(unaff_EBP - 0x2b4c);
                              *(float *)(unaff_EBP - 0xa18) = -fVar56;
                              if (*(char *)(iVar8 + 0x60) == '\x01') {
                                *(float *)(unaff_EBP - 0xa18) = -fVar56 * 0.5;
                              }
                              iVar8 = *(int *)(unaff_EBP - 0x2b54);
                              *(undefined1 *)(unaff_EBP - 0xa14) =
                                   *(undefined1 *)(unaff_EBP - 0x2b40);
                              *(uint *)(unaff_EBP - 0xa28) = *puVar25;
                              *(uint *)(unaff_EBP - 0xa24) = puVar25[1];
                              *(undefined4 *)(unaff_EBP - 0xa20) = *(undefined4 *)(iVar8 + 8);
                              pvVar50 = *(void **)(unaff_EBP - 0x2b28);
                              *(undefined4 *)(unaff_EBP - 0xa1c) = *(undefined4 *)(iVar8 + 0xc);
                              FUN_00428400(pvVar50,(undefined4 *)(unaff_EBP - 0xa28));
                              pvVar50 = *(void **)(unaff_EBP - 0x2b18);
                              if (*(char *)((int)pvVar50 + 0xb4) == '\0') {
LAB_00547bbe:
                                FUN_004cea80(pvVar50,(uint *)(unaff_EBP - 0xa28),
                                             *(void **)(unaff_EBP - 0x2b28),
                                             (undefined4 *)(unaff_EBP - 0x2be8));
                                goto LAB_00547c6a;
                              }
                              iVar8 = *(int *)(unaff_EBP - 0x2b54);
                              if ((*(int *)(unaff_EBP - 0x2b4c) == *(int *)((int)pvVar50 + 0xb8)) &&
                                 (iVar8 == *(int *)((int)pvVar50 + 0xb8))) goto LAB_00547bbe;
                            }
                            else {
LAB_00547be8:
                              cVar4 = '\x01';
                              iVar8 = FUN_0052eb90((int *)(unaff_EBP - 0x2b50));
                              in_stack_ffffffe8 =
                                   CONCAT44((undefined4 *)(unaff_EBP - 0x2be8),
                                            *(undefined4 **)(unaff_EBP - 0x2b28));
                              cVar4 = FUN_004cfd50(*(void **)(unaff_EBP - 0x2b18),
                                                   *(float *)(unaff_EBP - 0x2b54),pvVar26,
                                                   *(float *)(unaff_EBP - 0x2b78),
                                                   (char)*(undefined4 *)(unaff_EBP - 0x2b40),
                                                   (char)puVar25[0x17],(float)puVar25[0x15],
                                                   puVar25 + 6,(float *)(unaff_EBP - 0xb0),
                                                   *(undefined4 **)(unaff_EBP - 0x2b28),
                                                   (undefined4 *)(unaff_EBP - 0x2be8),
                                                   puVar25[0x18] == 1,0,iVar8,cVar4);
                              uVar27 = *(uint *)(unaff_EBP - 0x2b64) & 0xff;
                              if (cVar4 != '\0') {
                                uVar27 = 1;
                              }
                              *(uint *)(unaff_EBP - 0x2b64) = uVar27;
LAB_00547c6a:
                              iVar8 = *(int *)(unaff_EBP - 0x2b54);
                            }
                            if (*(int *)(iVar8 + 0x134) < (int)puVar25[0x1b]) {
                              *(uint *)(iVar8 + 0x134) = puVar25[0x1b];
                            }
                          }
                          else {
                            if (uVar27 == 3) {
                              uVar27 = puVar25[0x18];
                              if ((int)puVar25[0x1a] / 1000 !=
                                  (int)(puVar25[0x1a] - *(int *)(unaff_EBP - 0x2b24)) / 1000)
                              goto LAB_005477df;
                              pvVar26 = *(void **)(unaff_EBP - 0x2b84);
                            }
                            if (((300 < (int)puVar25[0x1a]) && (uVar27 == 2)) &&
                               ((int)puVar25[0x1a] / 100 !=
                                (int)(puVar25[0x1a] - *(int *)(unaff_EBP - 0x2b24)) / 100)) {
                              uVar27 = puVar25[0x18];
                              goto LAB_005477df;
                            }
                          }
                          uVar27 = puVar25[0x18];
                          if (((uVar27 == 0) || (uVar27 == 1)) || (uVar27 == 4)) {
                            *(undefined1 *)(unaff_EBP - 0x2b58) = 1;
                            break;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            if (*(char *)(unaff_EBP - 0x2b58) != '\0') break;
          }
LAB_00547c9b:
          FUN_00407a30((void *)(unaff_EBP - 0x2bac),(int *)(unaff_EBP - 0x2c44));
          piVar53 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),
                                        (undefined4 *)(unaff_EBP - 0x2d5c));
          bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2bac),piVar53);
        } while (bVar3);
      }
      if (puVar25[0x18] != 3) {
        if ((puVar25[0x18] == 2) &&
           ((int)puVar25[0x1a] / 200 != (int)(puVar25[0x1a] - *(int *)(unaff_EBP - 0x2b24)) / 200))
        {
          FUN_004c8530(unaff_EBP - 0x1d4);
          FUN_00402550((void *)(unaff_EBP - 0x1d4),(longlong *)(puVar25 + 6));
          iVar17 = rand();
          iVar8 = *(int *)(unaff_EBP - 0x2b28);
          *(undefined4 *)(unaff_EBP - 0x1c8) = 0xf;
          *(float *)(unaff_EBP - 0x1c4) = ((float)iVar17 * 0.25) / 32767.0 + 1.0;
          FUN_00428590((void *)(iVar8 + 8),(undefined4 *)(unaff_EBP - 0x1d4));
        }
        FUN_00402510(unaff_EBP - 0x368);
        puVar16 = puVar25 + 6;
        FUN_00402e30(puVar16,(uint *)(unaff_EBP - 0x368));
        uVar27 = puVar25[0x13];
        FUN_00401080((void *)(unaff_EBP - 0x16ac),uVar27,uVar27,uVar27);
        FUN_00402510(unaff_EBP - 0x458);
        FUN_00402c50(puVar16,(uint *)(unaff_EBP - 0x24fc),(uint *)(unaff_EBP - 0x458));
        uVar27 = puVar25[0x13];
        FUN_00401080((void *)(unaff_EBP - 0x16c4),uVar27,uVar27,uVar27);
        FUN_00402510(unaff_EBP - 0x4a0);
        FUN_00402cb0(puVar16,(uint *)(unaff_EBP - 0x252c),(uint *)(unaff_EBP - 0x4a0));
        *(undefined1 *)(unaff_EBP - 0x2b31) = 0;
        iVar8 = FUN_004e2320(puVar16,2);
        *(int *)(unaff_EBP - 0x2b38) = iVar8;
        iVar8 = FUN_004e2320(puVar16,1);
        *(int *)(unaff_EBP - 0x2b1c) = iVar8;
        puVar46 = (uint *)FUN_004e2320(puVar16,0);
        puVar15 = *(uint **)(unaff_EBP - 0x2b38);
        uVar27 = puVar15[1];
        *(uint **)(unaff_EBP - 0x2b44) = puVar46;
        uVar52 = **(uint **)(unaff_EBP - 0x2b1c);
        in_stack_ffffffe8 = CONCAT44(uVar52,puVar46[1]);
        iVar8 = FUN_00406050(*(void **)(unaff_EBP - 0x2b18),*puVar46,puVar46[1],uVar52,
                             (*(uint **)(unaff_EBP - 0x2b1c))[1],*puVar15,uVar27,0);
        uVar66 = FUN_004061f0(iVar8);
        if ((char)uVar66 == '\0') {
          fVar54 = FUN_00401d80((float *)(puVar25 + 0xf));
          *(float *)(unaff_EBP - 0x2b44) = (float)fVar54;
          fVar56 = *(float *)(unaff_EBP - 0x2b44) * *(float *)(unaff_EBP - 0x2ba0);
          uVar59 = 0x100000000;
          pfVar28 = (float *)(unaff_EBP - 0x170c);
          *(float *)(unaff_EBP - 0x2b44) = fVar56;
          pfVar29 = FUN_00412670(puVar25 + 0xf,(float *)(unaff_EBP - 0x1724));
          pfVar28 = FUN_0052ec30(pfVar29,pfVar28);
          in_stack_ffffffe8 = CONCAT44(puVar16,0x548058);
          fVar54 = (float10)FUN_004d6730(*(void **)(unaff_EBP - 0x2b18),puVar16,pfVar28,fVar56,
                                         (char)uVar59,(char)(uVar59 >> 0x20));
          *(float *)(unaff_EBP - 0x2b8c) = (float)fVar54;
          if (*(float *)(unaff_EBP - 0x2b8c) <= *(float *)(unaff_EBP - 0x2b44) &&
              *(float *)(unaff_EBP - 0x2b44) != *(float *)(unaff_EBP - 0x2b8c)) {
            *(undefined1 *)(unaff_EBP - 0x2b31) = 1;
            FUN_00402510(unaff_EBP - 0x9b0);
            FUN_00402e80(puVar16,(uint *)(unaff_EBP - 0x9b0));
          }
LAB_00548093:
          cVar4 = *(char *)(unaff_EBP - 0x2b31);
        }
        else {
          FUN_00402510(unaff_EBP - 0x488);
          FUN_00402e80(puVar16,(uint *)(unaff_EBP - 0x488));
          uVar27 = puVar25[0x18];
          cVar4 = '\x01';
          *(undefined1 *)(unaff_EBP - 0x2b31) = 1;
          if (uVar27 == 0) {
            FUN_004c8510(unaff_EBP - 0x968);
            pfVar28 = (float *)(unaff_EBP - 0x2c0);
            fVar56 = 255.0;
            pbVar47 = (byte *)FUN_00406050(*(void **)(unaff_EBP - 0x2b18),
                                           **(uint **)(unaff_EBP - 0x2b44),
                                           (*(uint **)(unaff_EBP - 0x2b44))[1],
                                           **(uint **)(unaff_EBP - 0x2b1c),
                                           (*(uint **)(unaff_EBP - 0x2b1c))[1],
                                           **(uint **)(unaff_EBP - 0x2b38),
                                           (*(uint **)(unaff_EBP - 0x2b38))[1],0);
            pfVar29 = FUN_004c6470((void *)(unaff_EBP - 0x16dc),pbVar47);
            FUN_004f7a70(pfVar29,pfVar28,fVar56);
            uVar63 = 0x3f800000;
            puVar19 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 0x2c0),2);
            uVar66 = *puVar19;
            puVar19 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 0x2c0),1);
            uVar65 = *puVar19;
            puVar19 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 0x2c0),0);
            in_stack_ffffffe8 = 0x547f8700000000;
            ppVar30 = (pair<unsigned___int64,unsigned___int64> *)
                      FUN_004010b0((void *)(unaff_EBP - 0x1b9c),*puVar19,uVar65,uVar66,uVar63);
            std::pair<unsigned___int64,unsigned___int64>::
            operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                      ((pair<unsigned___int64,unsigned___int64> *)(unaff_EBP - 0x944),ppVar30);
            *(undefined4 *)(unaff_EBP - 0x930) = 4;
            *(undefined4 *)(unaff_EBP - 0x934) = 0x3dcccccd;
            puVar19 = FUN_00401080((void *)(unaff_EBP - 0x16f4),0,0,0x41200000);
            FUN_00401060((void *)(unaff_EBP - 0x950),puVar19);
            FUN_00402a40((void *)(unaff_EBP - 0x968),puVar16);
            FUN_00428540((void *)(*(int *)(unaff_EBP - 0x2b28) + 0x10),
                         (undefined4 *)(unaff_EBP - 0x968));
            goto LAB_00548093;
          }
        }
        cVar7 = (char)*(undefined4 *)(unaff_EBP - 0x2b58);
        pvVar26 = *(void **)(unaff_EBP - 0x2b84);
        if ((((cVar7 == '\0') && (cVar4 != '\0')) && (puVar25[0x18] != 3)) &&
           (pvVar26 != (void *)0x0)) {
          fVar54 = FUN_00412150((int)pvVar26);
          *(float *)(unaff_EBP - 0x2b44) = (float)fVar54;
          *(undefined4 *)((int)pvVar26 + 0x70) = 0;
          fVar54 = FUN_00412150((int)pvVar26);
          *(float *)(unaff_EBP - 0x2b8c) = (float)fVar54;
          *(int *)((int)pvVar26 + 0x6c) =
               (int)((*(float *)(unaff_EBP - 0x2b44) / *(float *)(unaff_EBP - 0x2b8c)) *
                    (float)*(int *)((int)pvVar26 + 0x6c));
          cVar7 = (char)*(undefined4 *)(unaff_EBP - 0x2b58);
        }
        if (puVar25[0x18] == 2) {
          if (((char)*(undefined4 *)(unaff_EBP - 0x2b64) != '\0') && (pvVar26 != (void *)0x0)) {
            *(int *)((int)pvVar26 + 0x70) = *(int *)((int)pvVar26 + 0x70) + 1;
            FUN_004103a0((int)pvVar26);
            *(undefined4 *)((int)pvVar26 + 0x74) = 0;
          }
          if (*(char *)(unaff_EBP - 0x2b31) != '\0') {
            if (puVar25[0x18] != 2) {
              FUN_004c8530(unaff_EBP - 0x1b0);
              FUN_00402550((void *)(unaff_EBP - 0x1b0),(longlong *)(puVar25 + 6));
              iVar17 = rand();
              iVar8 = *(int *)(unaff_EBP - 0x2b28);
              *(undefined4 *)(unaff_EBP - 0x1a4) = 0x13;
              *(float *)(unaff_EBP - 0x1a0) = ((float)iVar17 * 0.4) / 32767.0 + 1.0;
              FUN_00428590((void *)(iVar8 + 8),(undefined4 *)(unaff_EBP - 0x1b0));
              goto LAB_00546b28;
            }
            puVar19 = FUN_00401080((void *)(unaff_EBP - 0x173c),0,0,0);
            FUN_00401060(puVar25 + 0xf,puVar19);
          }
        }
        else if ((cVar7 != '\0') || (*(char *)(unaff_EBP - 0x2b31) != '\0')) {
          if ((puVar25[0x18] != 1) && ((char)puVar25[0x17] == '\0')) goto LAB_005488d0;
          if (cVar7 == '\0') {
            FUN_004c8530(unaff_EBP - 0x7c);
            FUN_00402550((void *)(unaff_EBP - 0x7c),(longlong *)(puVar25 + 6));
            iVar8 = rand();
            uVar27 = puVar25[0x18];
            *(float *)(unaff_EBP - 0x6c) = ((float)iVar8 * 0.4) / 32767.0 + 1.0;
            if (uVar27 == 1) {
              uVar66 = 0x27;
              if ((char)puVar25[0x19] == '\x02') {
                uVar66 = 0x2a;
              }
              *(undefined4 *)(unaff_EBP - 0x70) = uVar66;
            }
            else {
              *(undefined4 *)(unaff_EBP - 0x70) = 0x14;
            }
            FUN_00428590((void *)(*(int *)(unaff_EBP - 0x2b28) + 8),(undefined4 *)(unaff_EBP - 0x7c)
                        );
          }
          pvVar50 = *(void **)(unaff_EBP - 0x2b6c);
          *(char *)(unaff_EBP - 0x2bfc) = (char)puVar25[0x17];
          FUN_00428070(pvVar50,(undefined4 *)(unaff_EBP - 0x2bdc));
          piVar53 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),
                                        (undefined4 *)(unaff_EBP - 0x2d64));
          bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2bdc),piVar53);
          if (!bVar3) goto LAB_005488d0;
          iVar8 = FUN_004e2320(puVar25 + 6,0);
          *(int *)(unaff_EBP - 0x2b48) = iVar8;
          iVar8 = FUN_004e2320(puVar25 + 6,1);
          *(int *)(unaff_EBP - 0x2bb8) = iVar8;
          iVar8 = FUN_004e2320(puVar25 + 6,2);
          *(int *)(unaff_EBP - 0x2b98) = iVar8;
          goto LAB_00548313;
        }
      }
      iVar8 = *(int *)(unaff_EBP - 0x2c04) + 1;
      *(int *)(unaff_EBP - 0x2c04) = iVar8;
      if (*(int *)(unaff_EBP - 0x2c08) <= iVar8) break;
      pvVar26 = *(void **)(unaff_EBP - 0x2b84);
    } while( true );
  }
  goto LAB_00546b3a;
LAB_0053b440:
  uVar59 = ZEXT48(pvVar26);
  uVar62 = 1;
  uVar63 = 0x53b44f;
  FUN_004cde40(&stack0xfffffff0,1);
  uVar65 = 0;
  uVar66 = 0x53b45b;
  FUN_004cde40(&stack0xffffffe8,0);
  FUN_004cde40(&stack0xffffffe0,0);
  puVar25 = FUN_00406380((void *)(unaff_EBP - 0x2124),uVar66,uVar65,uVar63,uVar62,uVar48,puVar25);
  puVar25 = FUN_00402c50(pvVar50,(uint *)(unaff_EBP - 0x2574),puVar25);
  cVar4 = FUN_004d4f90(*(void **)(unaff_EBP - 0x2b18),puVar25,(float *)uVar59,(char)(uVar59 >> 0x20)
                      );
  if (cVar4 != '\0') {
LAB_0053b547:
    plVar31 = (longlong *)FUN_004e2320(pvVar50,2);
    fVar54 = FUN_00401420(plVar31);
    *(float *)(*(int *)(unaff_EBP - 0x2b14) + 0x13bc) = (float)fVar54;
    FUN_00537cef();
    return;
  }
  pvVar50 = (void *)FUN_004e2320(pvVar50,2);
  piVar53 = (int *)(unaff_EBP - 0x351c);
  uVar27 = 1;
  FUN_004013d0(pvVar26,2);
  pvVar34 = (void *)FUN_004014b0(pvVar50,(int *)(unaff_EBP - 0x352c));
  puVar19 = (undefined4 *)FUN_00405660(pvVar34,piVar53,uVar27);
  uVar27 = puVar19[1];
  iVar8 = 0;
  puVar25 = (uint *)*puVar19;
  puVar16 = (uint *)FUN_004e2320(*(void **)(unaff_EBP - 0x2b64),1);
  uVar48 = puVar16[1];
  uVar52 = *puVar16;
  puVar16 = (uint *)FUN_004e2320(*(void **)(unaff_EBP - 0x2b64),0);
  iVar8 = FUN_00406050(*(void **)(unaff_EBP - 0x2b18),*puVar16,puVar16[1],uVar52,uVar48,
                       (uint)puVar25,uVar27,iVar8);
  bVar6 = FUN_00406280(iVar8);
  if (CONCAT31(extraout_var,bVar6) == 2) {
    pvVar50 = *(void **)(unaff_EBP - 0x2b64);
    goto LAB_0053b547;
  }
  FUN_004cde40((void *)(unaff_EBP - 0x2fe8),1);
  FUN_00402eb0(pvVar50,(uint *)(unaff_EBP - 0x2fe8));
  pvVar50 = *(void **)(unaff_EBP - 0x2b64);
  goto LAB_0053b440;
LAB_005414e8:
  pvVar50 = *(void **)(unaff_EBP - 0x2b18);
LAB_005414ee:
  pCVar37 = (CRefTime *)FUN_004e2320(*(void **)(unaff_EBP - 0x2b60),0);
  *(CRefTime **)(unaff_EBP - 0x2b3c) = pCVar37;
  lVar38 = CRefTime::Millisecs(pCVar37);
  iVar8 = (int)((lVar38 >> 0x1f & 7U) + lVar38) >> 3;
  pCVar37 = (CRefTime *)FUN_004e2320(*(void **)(unaff_EBP - 0x2b60),1);
  *(CRefTime **)(unaff_EBP - 0x2bbc) = pCVar37;
  lVar38 = CRefTime::Millisecs(pCVar37);
  uVar27 = iVar8 - 1;
  iVar8 = iVar8 + 1;
  iVar17 = (int)(lVar38 + (lVar38 >> 0x1f & 7U)) >> 3;
  *(uint *)(unaff_EBP - 0x2b20) = uVar27;
  *(int *)(unaff_EBP - 0x2be0) = iVar8;
  if (iVar8 < (int)uVar27) {
    if (*(char *)(unaff_EBP - 0x2b31) == '\0') goto LAB_00541a70;
LAB_00541f0c:
    cVar4 = *(char *)(unaff_EBP - 0x2b29);
    iVar8 = *(int *)(unaff_EBP - 0x2b54);
LAB_00541f18:
    if (iVar8 == 2) {
      pvVar50 = *(void **)(unaff_EBP - 0x2b18);
      pfVar28 = *(float **)(unaff_EBP - 0x2bb4);
      if ((*(int *)((int)pvVar50 + 0xb8) == 0) || (-2.0 < *pfVar28 || *pfVar28 == -2.0)) {
        plVar31 = *(longlong **)(unaff_EBP - 0x2b60);
      }
      else {
        FUN_004c8530(unaff_EBP - 0x470);
        *(undefined4 *)(unaff_EBP - 0x464) = 0x20;
        iVar8 = rand();
        plVar31 = *(longlong **)(unaff_EBP - 0x2b60);
        *(float *)(unaff_EBP - 0x460) = ((float)iVar8 * 0.2) / 32767.0 + 1.0;
        FUN_00402550((void *)(unaff_EBP - 0x470),plVar31);
        iVar8 = *(int *)(unaff_EBP - 0x2b28);
        *(undefined4 *)(unaff_EBP - 0x45c) = 0x3f000000;
        FUN_00428590((void *)(iVar8 + 8),(undefined4 *)(unaff_EBP - 0x470));
        pfVar28 = *(float **)(unaff_EBP - 0x2bb4);
      }
      if (((*(byte *)(*(int *)(unaff_EBP - 0x2b14) + 0x5c) & 2) == 0) &&
         (*pfVar28 <= -5.0 && *pfVar28 != -5.0)) {
        puVar25 = (uint *)FUN_004e2320(plVar31,2);
        puVar16 = (uint *)FUN_004f7a30((int *)(unaff_EBP - 0x3424),
                                       *(undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 0x13bc),
                                       puVar25);
        uVar66 = FUN_00402d40(puVar16);
        if (((char)uVar66 != '\0') &&
           (*(int *)(unaff_EBP - 0x2b14) == *(int *)((int)pvVar50 + 0xb8))) {
          puVar39 = (ulonglong *)(unaff_EBP - 0x3684);
          FUN_0040fda0(*(int *)(unaff_EBP - 0x2b14));
          puVar64 = (ulonglong *)(unaff_EBP - 0x3434);
          piVar53 = (int *)(unaff_EBP - 0x35c4);
          uVar27 = 1;
          puVar45 = (ulonglong *)(unaff_EBP - 0x3444);
          FUN_004f7a30((int *)(unaff_EBP - 0x3734),
                       *(undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 0x13bc),puVar25);
          puVar45 = FUN_004ce310(puVar45);
          FUN_00405660(puVar45,piVar53,uVar27);
          FUN_0052ebb0(puVar64);
          puVar39 = FUN_0052ebb0(puVar39);
          fVar54 = FUN_00401420((longlong *)puVar39);
          *(float *)(unaff_EBP - 0x2b98) = (float)fVar54;
          iVar8 = *(int *)(unaff_EBP - 0x2b14);
          *(float *)(iVar8 + 0x16c) = *(float *)(iVar8 + 0x16c) - *(float *)(unaff_EBP - 0x2b98);
          iVar17 = *(int *)(iVar8 + 300);
          iVar8 = FUN_0040ffe0(iVar8);
          if (iVar17 <= iVar8) {
            iVar17 = FUN_0040ffe0(*(int *)(unaff_EBP - 0x2b14));
          }
          iVar8 = *(int *)(unaff_EBP - 0x2b14);
          *(int *)(iVar8 + 300) = iVar17;
          plVar31 = (longlong *)(iVar8 + 0x10);
          FUN_00405570(plVar31,1,'\0');
          FUN_004c8530(unaff_EBP - 0x1b0);
          FUN_00402550((void *)(unaff_EBP - 0x1b0),plVar31);
          iVar8 = *(int *)(unaff_EBP - 0x2b28);
          *(undefined4 *)(unaff_EBP - 0x1a0) = 0x3f800000;
          *(undefined4 *)(unaff_EBP - 0x1a4) = 0x17;
          FUN_00428590((void *)(iVar8 + 8),(undefined4 *)(unaff_EBP - 0x1b0));
          iVar8 = *(int *)(unaff_EBP - 0x2b14);
          if (*(float *)(iVar8 + 0x16c) <= 0.0 && *(float *)(iVar8 + 0x16c) != 0.0) {
            *(undefined4 *)(iVar8 + 0x16c) = 0;
          }
          FUN_00422a90(unaff_EBP - 0x7b8);
          *(undefined4 *)(unaff_EBP - 0x7b0) = *(undefined4 *)(iVar8 + 8);
          *(undefined4 *)(unaff_EBP - 0x7ac) = *(undefined4 *)(iVar8 + 0xc);
          *(undefined8 *)(unaff_EBP - 0x7b8) = 0;
          *(undefined4 *)(unaff_EBP - 0x7a8) = *(undefined4 *)(unaff_EBP - 0x2b98);
          FUN_00402a40((void *)(unaff_EBP - 0x798),(undefined4 *)(iVar8 + 0x10));
          pvVar26 = *(void **)(unaff_EBP - 0x2b28);
          *(undefined1 *)(unaff_EBP - 0x7a4) = 0;
          FUN_00428400(pvVar26,(undefined4 *)(unaff_EBP - 0x7b8));
        }
      }
      FUN_004013d0((void *)(unaff_EBP - 0x1c),2);
      FUN_00402a10((ulonglong *)(unaff_EBP - 0x3000));
      plVar31 = (longlong *)FUN_004e2320(*(void **)(unaff_EBP - 0x2b60),2);
      FUN_00402eb0(plVar31,(uint *)(unaff_EBP - 0x3000));
      pvVar26 = *(void **)(unaff_EBP - 0x2b74);
      **(undefined4 **)(unaff_EBP - 0x2bb4) = 0;
      puVar19 = (undefined4 *)FUN_004013d0(pvVar26,2);
      *puVar19 = 0;
      fVar54 = FUN_00401420(plVar31);
      iVar8 = *(int *)(unaff_EBP - 0x2b14);
      *(float *)(iVar8 + 0x13bc) = (float)fVar54;
      goto LAB_00542a38;
    }
    iVar8 = *(int *)(unaff_EBP - 0x2b14);
    if ((cVar4 == '\0') || ((*(ushort *)(iVar8 + 0x7e) & 0x100) != 0)) {
      pvVar50 = *(void **)(unaff_EBP - 0x2b18);
LAB_005429f1:
      FUN_00402a10((ulonglong *)(unaff_EBP - 0x300c));
      FUN_00402eb0(*(void **)(unaff_EBP - 0x2b90),(uint *)(unaff_EBP - 0x300c));
      goto LAB_00542a38;
    }
    pfVar28 = *(float **)(unaff_EBP - 0x2bb0);
    *(undefined1 *)(unaff_EBP - 0x2b31) = 0;
    FUN_004e1520((float *)(unaff_EBP - 0x119c),0.5,pfVar28);
    FUN_00402510(unaff_EBP - 0x1a48);
    FUN_00401080((void *)(unaff_EBP - 0x11b4),0,0,0x3f8147ae);
    FUN_00402510(unaff_EBP - 0x1a6c);
    puVar25 = (uint *)(unaff_EBP - 0x1a48);
    puVar16 = (uint *)(unaff_EBP - 0x1e3c);
    puVar15 = FUN_00402cb0(*(void **)(unaff_EBP - 0x2b60),(uint *)(unaff_EBP - 0x1e6c),
                           (uint *)(unaff_EBP - 0x1a6c));
    puVar25 = FUN_00402c50(puVar15,puVar16,puVar25);
    FUN_00405450((int *)(unaff_EBP - 0x2e4),puVar25);
    FUN_004e1520((float *)(unaff_EBP - 0x11cc),0.5,pfVar28);
    FUN_00402510(unaff_EBP - 0x1a90);
    FUN_00401080((void *)(unaff_EBP - 0x11e4),0,0,0x3f8147ae);
    FUN_00402510(unaff_EBP - 0x1ab4);
    puVar25 = (uint *)(unaff_EBP - 0x1a90);
    puVar16 = (uint *)(unaff_EBP - 0x1e9c);
    puVar15 = FUN_00402cb0(*(void **)(unaff_EBP - 0x2b60),(uint *)(unaff_EBP - 0x1ecc),
                           (uint *)(unaff_EBP - 0x1ab4));
    puVar25 = FUN_00402cb0(puVar15,puVar16,puVar25);
    FUN_00405450((int *)(unaff_EBP - 0x350),puVar25);
    piVar53 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x2e4),0);
    iVar8 = *piVar53;
    *(int *)(unaff_EBP - 0x2b3c) = iVar8;
    piVar53 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x350),0);
    *(int **)(unaff_EBP - 0x2b98) = piVar53;
    if (iVar8 <= *piVar53) {
      puVar25 = (uint *)FUN_004013d0((void *)(unaff_EBP - 0x2e4),1);
      *(uint **)(unaff_EBP - 0x2bd8) = puVar25;
      piVar53 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x350),1);
      piVar9 = *(int **)(unaff_EBP - 0x2b98);
      *(int **)(unaff_EBP - 0x2b20) = piVar53;
      do {
        uVar27 = *puVar25;
        if ((int)uVar27 <= *piVar53) {
          piVar35 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x2e4),2);
          *(int **)(unaff_EBP - 0x2be0) = piVar35;
          piVar53 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x350),2);
          piVar9 = *(int **)(unaff_EBP - 0x2b20);
          *(int **)(unaff_EBP - 0x2b9c) = piVar53;
          do {
            iVar8 = *piVar35;
            if (iVar8 <= *piVar53) {
              do {
                puVar36 = FUN_00405fd0(*(void **)(unaff_EBP - 0x2b18),*(uint *)(unaff_EBP - 0x2b3c),
                                       uVar27,iVar8,0);
                uVar66 = FUN_004061f0((int)puVar36);
                if ((char)uVar66 != '\0') {
                  pvVar50 = *(void **)(unaff_EBP - 0x2b18);
                  goto LAB_005429eb;
                }
                piVar53 = *(int **)(unaff_EBP - 0x2b9c);
                iVar8 = iVar8 + 1;
              } while (iVar8 <= *piVar53);
              piVar9 = *(int **)(unaff_EBP - 0x2b20);
            }
            piVar35 = *(int **)(unaff_EBP - 0x2be0);
            uVar27 = uVar27 + 1;
          } while ((int)uVar27 <= *piVar9);
          iVar8 = *(int *)(unaff_EBP - 0x2b3c);
          piVar53 = *(int **)(unaff_EBP - 0x2b20);
          piVar9 = *(int **)(unaff_EBP - 0x2b98);
        }
        puVar25 = *(uint **)(unaff_EBP - 0x2bd8);
        iVar8 = iVar8 + 1;
        *(int *)(unaff_EBP - 0x2b3c) = iVar8;
      } while (iVar8 <= *piVar9);
    }
    pvVar50 = *(void **)(unaff_EBP - 0x2b18);
    FUN_00428070((void *)((int)pvVar50 + 0xc),(undefined4 *)(unaff_EBP - 0x2bfc));
    piVar53 = (int *)FUN_00530550((void *)((int)pvVar50 + 0xc),(undefined4 *)(unaff_EBP - 0x2e3c));
    bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2bfc),piVar53);
    if (bVar3) {
      do {
        if (*(char *)(unaff_EBP - 0x2b31) != '\0') goto LAB_005429eb;
        iVar8 = FUN_00402bc0((int *)(unaff_EBP - 0x2bfc));
        pvVar26 = *(void **)(unaff_EBP - 0x2b60);
        piVar53 = (int *)(iVar8 + 8);
        *(int **)(unaff_EBP - 0x2bbc) = piVar53;
        puVar25 = FUN_00402c50(pvVar26,(uint *)(unaff_EBP - 0x1efc),(uint *)(*piVar53 + 0x80));
        pfVar28 = FUN_00402550((void *)(unaff_EBP - 0x11fc),(longlong *)puVar25);
        fVar54 = FUN_004021b0(pfVar28);
        *(float *)(unaff_EBP - 0x2b9c) = (float)fVar54;
        if ((*(float *)(unaff_EBP - 0x2b9c) <= 4096.0) && (iVar8 = *piVar53, iVar8 != 0)) {
          iVar17 = FUN_004013f0((void *)((int)pvVar50 + 0x1c),0xa03);
          *(int *)(unaff_EBP - 0x2b9c) = iVar17;
          if (iVar17 != 0) {
            FUN_00401cd0((undefined4 *)(unaff_EBP - 0x1060));
            iVar40 = FUN_00402170(iVar17);
            fVar56 = (float)iVar40 * 0.5;
            iVar40 = FUN_00402160(iVar17);
            fVar57 = (float)iVar40 * 0.5;
            iVar17 = FUN_00402150(iVar17);
            FUN_004023b0((void *)(unaff_EBP - 0x1060),(float)iVar17 * 0.5,fVar57,fVar56);
            FUN_00402030((void *)(unaff_EBP - 0x1060),-*(float *)(iVar8 + 0x98));
            puVar25 = FUN_00402c50(*(void **)(unaff_EBP - 0x2b60),(uint *)(unaff_EBP - 0x1f2c),
                                   (uint *)(iVar8 + 0x80));
            FUN_00402550((void *)(unaff_EBP - 0x290),(longlong *)puVar25);
            FUN_004022e0((void *)(unaff_EBP - 0x1060),(float *)(unaff_EBP - 0x290));
            pfVar29 = *(float **)(unaff_EBP - 0x2bb0);
            pfVar41 = (float *)FUN_004e1520((float *)(unaff_EBP - 0x1214),0.5,pfVar29);
            pfVar28 = (float *)(unaff_EBP - 0x122c);
            pfVar42 = (float *)FUN_00401080((void *)(unaff_EBP - 0x1244),0,0,0x3f8147ae);
            pfVar42 = FUN_004021f0((void *)(unaff_EBP - 0x1060),(float *)(unaff_EBP - 0x125c),
                                   pfVar42);
            FUN_00401450(pfVar42,pfVar28,pfVar41);
            FUN_00402510(unaff_EBP - 0x1ad8);
            FUN_00405450((int *)(unaff_EBP - 0x2fc),(uint *)(unaff_EBP - 0x1ad8));
            pfVar29 = (float *)FUN_004e1520((float *)(unaff_EBP - 0x1274),0.5,pfVar29);
            pfVar28 = (float *)(unaff_EBP - 0x128c);
            pfVar41 = (float *)FUN_00401080((void *)(unaff_EBP - 0x12a4),0,0,0x3f8147ae);
            pfVar41 = FUN_004021f0((void *)(unaff_EBP - 0x1060),(float *)(unaff_EBP - 0x12bc),
                                   pfVar41);
            FUN_004014f0(pfVar41,pfVar28,pfVar29);
            FUN_00402510(unaff_EBP - 0x1b08);
            FUN_00405450((int *)(unaff_EBP - 0x32c),(uint *)(unaff_EBP - 0x1b08));
            piVar53 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x2fc),0);
            iVar8 = *piVar53;
            *(int *)(unaff_EBP - 0x2b3c) = iVar8;
            piVar53 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x32c),0);
            *(int **)(unaff_EBP - 0x2b98) = piVar53;
            if (iVar8 <= *piVar53) {
              piVar35 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x2fc),1);
              *(int **)(unaff_EBP - 0x2cc4) = piVar35;
              piVar53 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x32c),1);
              piVar9 = *(int **)(unaff_EBP - 0x2b98);
              *(int **)(unaff_EBP - 0x2b20) = piVar53;
              while( true ) {
                iVar17 = *piVar35;
                if (iVar17 <= *piVar53) {
                  piVar35 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x2fc),2);
                  *(int **)(unaff_EBP - 0x2bd8) = piVar35;
                  piVar53 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x32c),2);
                  piVar9 = *(int **)(unaff_EBP - 0x2b20);
                  *(int **)(unaff_EBP - 0x2be0) = piVar53;
                  do {
                    iVar8 = *piVar35;
                    if (iVar8 <= *piVar53) {
                      do {
                        puVar43 = FUN_00401040((void *)(unaff_EBP - 0x2e8c),0,0,0);
                        puVar44 = FUN_00430730(*(void **)(unaff_EBP - 0x2b9c),
                                               *(int *)(unaff_EBP - 0x2b3c),iVar17,iVar8);
                        cVar4 = FUN_004079c0(puVar44,(int)puVar43);
                        if (cVar4 != '\0') {
                          iVar8 = *(int *)(unaff_EBP - 0x2b14);
                          iVar17 = **(int **)(unaff_EBP - 0x2bbc);
                          *(undefined1 *)(unaff_EBP - 0x2b31) = 1;
                          FUN_00530690((void *)(iVar17 + 0x78),(undefined4 *)(unaff_EBP - 0xd0),
                                       (uint *)(iVar8 + 8));
                          pvVar50 = *(void **)(unaff_EBP - 0x2b18);
                          goto LAB_00542886;
                        }
                        piVar53 = *(int **)(unaff_EBP - 0x2be0);
                        iVar8 = iVar8 + 1;
                      } while (iVar8 <= *piVar53);
                      piVar9 = *(int **)(unaff_EBP - 0x2b20);
                    }
                    piVar35 = *(int **)(unaff_EBP - 0x2bd8);
                    iVar17 = iVar17 + 1;
                  } while (iVar17 <= *piVar9);
                  iVar8 = *(int *)(unaff_EBP - 0x2b3c);
                  piVar53 = *(int **)(unaff_EBP - 0x2b20);
                  piVar9 = *(int **)(unaff_EBP - 0x2b98);
                }
                iVar8 = iVar8 + 1;
                *(int *)(unaff_EBP - 0x2b3c) = iVar8;
                if (*piVar9 < iVar8) break;
                piVar35 = *(int **)(unaff_EBP - 0x2cc4);
              }
            }
          }
          pvVar50 = *(void **)(unaff_EBP - 0x2b18);
        }
        iVar8 = *(int *)(unaff_EBP - 0x2b14);
LAB_00542886:
        FUN_00407a30((void *)(unaff_EBP - 0x2bfc),(int *)(unaff_EBP - 0x2c44));
        piVar53 = (int *)FUN_00530550((void *)((int)pvVar50 + 0xc),
                                      (undefined4 *)(unaff_EBP - 0x2e3c));
        bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2bfc),piVar53);
      } while (bVar3);
      if (*(char *)(unaff_EBP - 0x2b31) != '\0') goto LAB_005429f1;
    }
    puVar19 = (undefined4 *)FUN_004e2320(*(void **)(unaff_EBP - 0x2b60),2);
    FUN_00402eb0(puVar19,(uint *)(unaff_EBP - 0x2dac));
    *(undefined4 *)(unaff_EBP - 0x2da0) = *puVar19;
    *(undefined4 *)(unaff_EBP - 0x2d9c) = puVar19[1];
    pfVar28 = (float *)FUN_004013d0(*(void **)(unaff_EBP - 0x2bb0),2);
    *(float *)(unaff_EBP - 0x2b9c) = *pfVar28 * 0.5;
    FUN_004014b0((void *)(unaff_EBP - 0x2da0),(int *)(unaff_EBP - 0x3044));
    piVar53 = (int *)(unaff_EBP - 0x35d4);
    piVar9 = (int *)(unaff_EBP - 0x3464);
    uVar59 = FUN_00405510((uint *)(unaff_EBP - 0x3044));
    piVar35 = FUN_004cde40((void *)(unaff_EBP - 0x3694),(uint)uVar59);
    pvVar26 = (void *)FUN_00401530(piVar35,piVar9);
    puVar32 = (undefined4 *)FUN_004ce290(pvVar26,piVar53);
    FUN_004cde20(puVar19,puVar32);
    puVar25 = (uint *)FUN_004014b0((void *)(unaff_EBP - 0x2da0),(int *)(unaff_EBP - 0x3474));
    plVar31 = (longlong *)FUN_00401490(puVar19,(int *)(unaff_EBP - 0x35e4),puVar25);
    fVar54 = FUN_00401420(plVar31);
    *(float *)(*(int *)(unaff_EBP - 0x2b14) + 0x1180) = (float)fVar54;
    FUN_00402e60(puVar19,(uint *)(unaff_EBP - 0x2dac));
  }
  else {
    uVar52 = iVar17 - 1;
    iVar17 = iVar17 + 1;
    *(uint *)(unaff_EBP - 0x2b9c) = uVar52;
    *(int *)(unaff_EBP - 0x2bd8) = iVar17;
    while( true ) {
      *(uint *)(unaff_EBP - 0x2b98) = uVar52;
      if (iVar17 < (int)uVar52) {
        if (*(char *)(unaff_EBP - 0x2b31) != '\0') goto LAB_00541f0c;
      }
      else {
        do {
          pvVar26 = (void *)FUN_0041c9e0(pvVar50,uVar27,uVar52,0);
          *(void **)(unaff_EBP - 0x2cc4) = pvVar26;
          if (pvVar26 != (void *)0x0) {
            FUN_00428070(pvVar26,(undefined4 *)(unaff_EBP - 0x2ca4));
            piVar53 = (int *)FUN_00530550(pvVar26,(undefined4 *)(unaff_EBP - 0x2e2c));
            bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2ca4),piVar53);
            if (bVar3) {
              do {
                puVar25 = (uint *)FUN_0052eb90((int *)(unaff_EBP - 0x2ca4));
                iVar8 = *(int *)*puVar25;
                if (((iVar8 != 7) && (iVar8 != 6)) && (iVar8 != 9)) {
                  iVar8 = *(int *)(unaff_EBP - 0x2b14);
                  piVar53 = (int *)FUN_00530550((void *)(iVar8 + 0x1468),
                                                (undefined4 *)(unaff_EBP - 0x2ff8));
                  pvVar26 = (void *)FUN_004db1b0((void *)(iVar8 + 0x1468),
                                                 (int *)(unaff_EBP - 0x3004),puVar25);
                  bVar3 = FUN_0042c6f0(pvVar26,piVar53);
                  if (!bVar3) {
                    piVar53 = (int *)*puVar25;
                    iVar8 = *piVar53;
                    if (((((iVar8 != 1) && (iVar8 != 8)) && (iVar8 != 2)) &&
                        ((iVar8 != 3 && (iVar8 != 5)))) || ((char)piVar53[0xc] != '\0')) {
                      FUN_00401060((void *)(unaff_EBP - 0x144),piVar53 + 9);
                      uVar27 = *(uint *)(*puVar25 + 0x20) & 0x80000001;
                      bVar3 = uVar27 == 0;
                      if ((int)uVar27 < 0) {
                        bVar3 = (uVar27 - 1 | 0xfffffffe) == 0xffffffff;
                      }
                      if (!bVar3) {
                        puVar19 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 0x144),1);
                        puVar32 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 0x144),0);
                        FUN_004c8170(puVar32,puVar19);
                      }
                      puVar39 = (ulonglong *)(unaff_EBP - 0x343c);
                      puVar16 = (uint *)FUN_004e2320((void *)(*puVar25 + 8),
                                                     *(int *)(unaff_EBP - 0x2b54));
                      FUN_00401490(*(void **)(unaff_EBP - 0x2b90),(int *)(unaff_EBP - 0x33a4),
                                   puVar16);
                      puVar39 = FUN_0052ebb0(puVar39);
                      uVar66 = FUN_0052ec80((uint *)puVar39);
                      if ((char)uVar66 == '\0') {
                        FUN_004013d0((void *)(unaff_EBP - 0x144),0);
                        piVar53 = (int *)(unaff_EBP - 0x3664);
                        pvVar26 = (void *)FUN_004e2320((void *)(*puVar25 + 8),0);
                        puVar16 = (uint *)FUN_004014b0(pvVar26,piVar53);
                        pvVar26 = (void *)FUN_00401530(*(void **)(unaff_EBP - 0x2b3c),
                                                       (int *)(unaff_EBP - 0x33b4));
                        uVar27 = FUN_004ce380(pvVar26,puVar16);
                        if ((char)uVar27 != '\0') {
                          piVar53 = (int *)(unaff_EBP - 0x3714);
                          pvVar26 = (void *)FUN_004e2320((void *)(*puVar25 + 8),0);
                          puVar16 = (uint *)FUN_00401530(pvVar26,piVar53);
                          pvVar26 = (void *)FUN_004014b0(*(void **)(unaff_EBP - 0x2b3c),
                                                         (int *)(unaff_EBP - 0x33d4));
                          uVar27 = FUN_004ce350(pvVar26,puVar16);
                          if ((char)uVar27 != '\0') {
                            FUN_004013d0((void *)(unaff_EBP - 0x144),1);
                            iVar8 = FUN_004013d0(*(void **)(unaff_EBP - 0x2bb0),1);
                            uVar27 = *puVar25;
                            *(int *)(unaff_EBP - 0x2b70) = iVar8;
                            piVar53 = (int *)(unaff_EBP - 0x3594);
                            pvVar26 = (void *)FUN_004e2320((void *)(uVar27 + 8),1);
                            puVar16 = (uint *)FUN_004014b0(pvVar26,piVar53);
                            pvVar26 = (void *)FUN_00401530(*(void **)(unaff_EBP - 0x2bbc),
                                                           (int *)(unaff_EBP - 0x33e4));
                            uVar27 = FUN_004ce380(pvVar26,puVar16);
                            if ((char)uVar27 != '\0') {
                              piVar53 = (int *)(unaff_EBP - 0x3674);
                              pvVar26 = (void *)FUN_004e2320((void *)(*puVar25 + 8),1);
                              puVar16 = (uint *)FUN_00401530(pvVar26,piVar53);
                              pvVar26 = (void *)FUN_004014b0(*(void **)(unaff_EBP - 0x2bbc),
                                                             (int *)(unaff_EBP - 0x33f4));
                              uVar27 = FUN_004ce350(pvVar26,puVar16);
                              if ((char)uVar27 != '\0') {
                                FUN_004013d0(*(void **)(unaff_EBP - 0x2bb0),2);
                                iVar8 = FUN_004e2320(*(void **)(unaff_EBP - 0x2b60),2);
                                uVar27 = *puVar25;
                                *(int *)(unaff_EBP - 0x2b70) = iVar8;
                                puVar16 = (uint *)FUN_004e2320((void *)(uVar27 + 8),2);
                                pvVar26 = (void *)FUN_00401530(*(void **)(unaff_EBP - 0x2b70),
                                                               (int *)(unaff_EBP - 0x35a4));
                                uVar27 = FUN_004ce380(pvVar26,puVar16);
                                if ((char)uVar27 != '\0') {
                                  FUN_004013d0((void *)(unaff_EBP - 0x144),2);
                                  piVar53 = (int *)(unaff_EBP - 0x3404);
                                  pvVar26 = (void *)FUN_004e2320((void *)(*puVar25 + 8),2);
                                  puVar25 = (uint *)FUN_00401530(pvVar26,piVar53);
                                  pvVar26 = (void *)FUN_004014b0(*(void **)(unaff_EBP - 0x2b70),
                                                                 (int *)(unaff_EBP - 0x36e4));
                                  uVar27 = FUN_004ce350(pvVar26,puVar25);
                                  if ((char)uVar27 != '\0') {
                                    iVar8 = *(int *)(unaff_EBP - 0x2b54);
                                    if (iVar8 == 2) {
                                      uVar27 = *(uint *)(unaff_EBP - 0x2bac) & 0xff;
                                      if (**(float **)(unaff_EBP - 0x2bb4) <= 0.0 &&
                                          **(float **)(unaff_EBP - 0x2bb4) != 0.0) {
                                        uVar27 = 1;
                                      }
                                      *(uint *)(unaff_EBP - 0x2bac) = uVar27;
                                    }
                                    cVar4 = '\0';
                                    *(undefined1 *)(unaff_EBP - 0x2bc5) = 1;
                                    *(undefined1 *)(unaff_EBP - 0x2b29) = 0;
                                    goto LAB_00541f18;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                FUN_0052ebf0((void *)(unaff_EBP - 0x2ca4),(undefined4 *)(unaff_EBP - 0x2b70));
                piVar53 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2cc4),
                                              (undefined4 *)(unaff_EBP - 0x2e2c));
                bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2ca4),piVar53);
              } while (bVar3);
              uVar52 = *(uint *)(unaff_EBP - 0x2b98);
            }
          }
          if (*(char *)(unaff_EBP - 0x2b31) != '\0') goto LAB_00541f0c;
          iVar17 = *(int *)(unaff_EBP - 0x2bd8);
          uVar27 = *(uint *)(unaff_EBP - 0x2b20);
          pvVar50 = *(void **)(unaff_EBP - 0x2b18);
          uVar52 = uVar52 + 1;
          *(uint *)(unaff_EBP - 0x2b98) = uVar52;
        } while ((int)uVar52 <= iVar17);
        iVar8 = *(int *)(unaff_EBP - 0x2be0);
      }
      uVar27 = uVar27 + 1;
      *(uint *)(unaff_EBP - 0x2b20) = uVar27;
      if (iVar8 < (int)uVar27) break;
      uVar52 = *(uint *)(unaff_EBP - 0x2b9c);
      pvVar50 = *(void **)(unaff_EBP - 0x2b18);
    }
LAB_00541a70:
    pvVar50 = *(void **)(unaff_EBP - 0x2b18);
    FUN_00428070((void *)((int)pvVar50 + 0xc),(undefined4 *)(unaff_EBP - 0x2c00));
    piVar53 = (int *)FUN_00530550((void *)((int)pvVar50 + 0xc),(undefined4 *)(unaff_EBP - 0x2e34));
    bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c00),piVar53);
    if (bVar3) {
      do {
        iVar8 = FUN_00402bc0((int *)(unaff_EBP - 0x2c00));
        pvVar26 = *(void **)(unaff_EBP - 0x2b60);
        piVar53 = (int *)(iVar8 + 8);
        *(int **)(unaff_EBP - 0x2bbc) = piVar53;
        puVar25 = FUN_00402c50(pvVar26,(uint *)(unaff_EBP - 0x2274),(uint *)(*piVar53 + 0x80));
        pfVar28 = FUN_00402550((void *)(unaff_EBP - 0x1568),(longlong *)puVar25);
        fVar54 = FUN_004021b0(pfVar28);
        *(float *)(unaff_EBP - 0x2b9c) = (float)fVar54;
        if ((*(float *)(unaff_EBP - 0x2b9c) <= 4096.0) && (iVar8 = *piVar53, iVar8 != 0)) {
          iVar17 = FUN_004013f0((void *)(*(int *)(unaff_EBP - 0x2b18) + 0x1c),0xa03);
          *(int *)(unaff_EBP - 0x2b98) = iVar17;
          if (iVar17 != 0) {
            FUN_00401cd0((undefined4 *)(unaff_EBP - 0x10a0));
            iVar40 = FUN_00402170(iVar17);
            fVar56 = (float)iVar40 * 0.5;
            iVar40 = FUN_00402160(iVar17);
            fVar57 = (float)iVar40 * 0.5;
            iVar17 = FUN_00402150(iVar17);
            FUN_004023b0((void *)(unaff_EBP - 0x10a0),(float)iVar17 * 0.5,fVar57,fVar56);
            FUN_00402030((void *)(unaff_EBP - 0x10a0),-*(float *)(iVar8 + 0x98));
            puVar25 = FUN_00402c50(*(void **)(unaff_EBP - 0x2b60),(uint *)(unaff_EBP - 0x1e0c),
                                   (uint *)(iVar8 + 0x80));
            FUN_00402550((void *)(unaff_EBP - 0x998),(longlong *)puVar25);
            FUN_004022e0((void *)(unaff_EBP - 0x10a0),(float *)(unaff_EBP - 0x998));
            pfVar29 = *(float **)(unaff_EBP - 0x2bb0);
            pfVar41 = (float *)FUN_004e1520((float *)(unaff_EBP - 0x10e8),0.5,pfVar29);
            pfVar28 = (float *)(unaff_EBP - 0x10f4);
            pfVar42 = (float *)FUN_00401080((void *)(unaff_EBP - 0x110c),0,0,0);
            pfVar42 = FUN_004021f0((void *)(unaff_EBP - 0x10a0),(float *)(unaff_EBP - 0x1124),
                                   pfVar42);
            FUN_00401450(pfVar42,pfVar28,pfVar41);
            FUN_00402510(unaff_EBP - 0x1a00);
            FUN_00405450((int *)(unaff_EBP - 0x2cc),(uint *)(unaff_EBP - 0x1a00));
            pfVar29 = (float *)FUN_004e1520((float *)(unaff_EBP - 0x113c),0.5,pfVar29);
            pfVar28 = (float *)(unaff_EBP - 0x1154);
            pfVar41 = (float *)FUN_00401080((void *)(unaff_EBP - 0x10dc),0,0,0);
            pfVar41 = FUN_004021f0((void *)(unaff_EBP - 0x10a0),(float *)(unaff_EBP - 0x1184),
                                   pfVar41);
            FUN_004014f0(pfVar41,pfVar28,pfVar29);
            FUN_00402510(unaff_EBP - 0x1a24);
            FUN_00405450((int *)(unaff_EBP - 0x374),(uint *)(unaff_EBP - 0x1a24));
            piVar53 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x2cc),0);
            iVar8 = *piVar53;
            *(int *)(unaff_EBP - 0x2b3c) = iVar8;
            piVar53 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x374),0);
            *(int **)(unaff_EBP - 0x2b70) = piVar53;
            if (iVar8 <= *piVar53) {
              piVar35 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x2cc),1);
              *(int **)(unaff_EBP - 0x2bd8) = piVar35;
              piVar53 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x374),1);
              piVar9 = *(int **)(unaff_EBP - 0x2b70);
              *(int **)(unaff_EBP - 0x2b20) = piVar53;
              do {
                iVar17 = *piVar35;
                if (iVar17 <= *piVar53) {
                  piVar35 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x2cc),2);
                  *(int **)(unaff_EBP - 0x2be0) = piVar35;
                  piVar53 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x374),2);
                  piVar9 = *(int **)(unaff_EBP - 0x2b20);
                  *(int **)(unaff_EBP - 0x2b9c) = piVar53;
                  do {
                    iVar8 = *piVar35;
                    if (iVar8 <= *piVar53) {
                      do {
                        puVar43 = FUN_00401040((void *)(unaff_EBP - 0x2e88),0,0,0);
                        puVar44 = FUN_00430730(*(void **)(unaff_EBP - 0x2b98),
                                               *(int *)(unaff_EBP - 0x2b3c),iVar17,iVar8);
                        cVar4 = FUN_004079c0(puVar44,(int)puVar43);
                        if (cVar4 != '\0') {
                          uVar27 = *(uint *)(unaff_EBP - 0x2b94) & 0xff;
                          if (*(int *)(unaff_EBP - 0x2b54) == 2) {
                            uVar27 = 1;
                          }
                          iVar40 = *(int *)(unaff_EBP - 0x2b98);
                          *(undefined1 *)(unaff_EBP - 0x2b31) = 1;
                          *(uint *)(unaff_EBP - 0x2b94) = uVar27;
                          FUN_00402170(iVar40);
                          piVar53 = (int *)(unaff_EBP - 0x3414);
                          pvVar26 = (void *)FUN_004e2320((void *)(**(int **)(unaff_EBP - 0x2bbc) +
                                                                 0x80),2);
                          puVar19 = (undefined4 *)FUN_004014b0(pvVar26,piVar53);
                          FUN_004cde20((void *)(unaff_EBP - 0x2dac),puVar19);
                          FUN_00530690((void *)(**(int **)(unaff_EBP - 0x2bbc) + 0x78),
                                       (undefined4 *)(unaff_EBP - 0x3074),
                                       (uint *)(*(int *)(unaff_EBP - 0x2b14) + 8));
                        }
                        piVar53 = *(int **)(unaff_EBP - 0x2b9c);
                        iVar8 = iVar8 + 1;
                      } while (iVar8 <= *piVar53);
                      piVar9 = *(int **)(unaff_EBP - 0x2b20);
                    }
                    piVar35 = *(int **)(unaff_EBP - 0x2be0);
                    iVar17 = iVar17 + 1;
                  } while (iVar17 <= *piVar9);
                  iVar8 = *(int *)(unaff_EBP - 0x2b3c);
                  piVar53 = *(int **)(unaff_EBP - 0x2b20);
                  piVar9 = *(int **)(unaff_EBP - 0x2b70);
                }
                piVar35 = *(int **)(unaff_EBP - 0x2bd8);
                iVar8 = iVar8 + 1;
                *(int *)(unaff_EBP - 0x2b3c) = iVar8;
              } while (iVar8 <= *piVar9);
            }
          }
        }
        FUN_00407a30((void *)(unaff_EBP - 0x2c00),(int *)(unaff_EBP - 0x2ce0));
        piVar53 = (int *)FUN_00530550((void *)(*(int *)(unaff_EBP - 0x2b18) + 0xc),
                                      (undefined4 *)(unaff_EBP - 0x2e34));
        bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c00),piVar53);
      } while (bVar3);
      cVar4 = *(char *)(unaff_EBP - 0x2b31);
LAB_00541f04:
      if (cVar4 != '\0') goto LAB_00541f0c;
      pvVar50 = *(void **)(unaff_EBP - 0x2b18);
    }
  }
  iVar8 = *(int *)(unaff_EBP - 0x2b14);
LAB_00542a38:
  iVar17 = *(int *)(unaff_EBP - 0x2b54) + 1;
  *(int *)(unaff_EBP - 0x2b54) = iVar17;
  if (2 < iVar17) goto code_r0x00542a4e;
  goto LAB_00541295;
LAB_005429eb:
  iVar8 = *(int *)(unaff_EBP - 0x2b14);
  goto LAB_005429f1;
code_r0x00542a4e:
  iVar17 = *(int *)(unaff_EBP - 0x2b48) + 1;
  *(int *)(unaff_EBP - 0x2b48) = iVar17;
  if (*(int *)(unaff_EBP - 0x2b1c) <= iVar17) goto LAB_00542a67;
  goto LAB_00541280;
LAB_00548313:
  do {
    iVar8 = FUN_00402bc0((int *)(unaff_EBP - 0x2bdc));
    pvVar50 = *(void **)(iVar8 + 8);
    *(void **)(unaff_EBP - 0x2b68) = pvVar50;
    if (pvVar50 != (void *)0x0) {
      iVar8 = *(int *)(unaff_EBP - 0x2b4c);
      if (((iVar8 != 0) && (*(char *)(*(int *)(unaff_EBP - 0x2b18) + 0xb4) == '\0')) &&
         ((*(char *)(iVar8 + 0x60) == '\0' &&
          (iVar8 != *(int *)(*(int *)(unaff_EBP - 0x2b18) + 0xb8))))) break;
      if ((pvVar26 == (void *)0x0) ||
         (((pvVar50 != pvVar26 &&
           (uVar66 = FUN_004d18c0((int)pvVar26,(int)pvVar50), (char)uVar66 != '\0')) &&
          (((pvVar50 = *(void **)(unaff_EBP - 0x2b68),
            *(int *)((int)pvVar50 + 8) != *(int *)((int)pvVar26 + 0x11c0) ||
            (*(int *)((int)pvVar50 + 0xc) != *(int *)((int)pvVar26 + 0x11c4))) &&
           (0.0 < *(float *)((int)pvVar50 + 0x16c))))))) {
        *(void **)(unaff_EBP - 0x2b38) = (void *)((int)pvVar50 + 0x80);
        iVar8 = FUN_004013d0((void *)((int)pvVar50 + 0x80),0);
        *(int *)(unaff_EBP - 0x2b1c) = iVar8;
        pvVar50 = (void *)(*(int *)(unaff_EBP - 0x2b68) + 0x10);
        *(void **)(unaff_EBP - 0x2b94) = pvVar50;
        pvVar50 = (void *)FUN_004e2320(pvVar50,0);
        *(void **)(unaff_EBP - 0x2b44) = pvVar50;
        puVar16 = (uint *)FUN_004014b0(pvVar50,(int *)(unaff_EBP - 0x36a4));
        pvVar50 = (void *)FUN_00401530(*(void **)(unaff_EBP - 0x2b48),(int *)(unaff_EBP - 0x3214));
        uVar27 = FUN_004ce380(pvVar50,puVar16);
        if ((char)uVar27 != '\0') {
          iVar8 = FUN_004013d0(*(void **)(unaff_EBP - 0x2b38),1);
          pvVar50 = *(void **)(unaff_EBP - 0x2b94);
          *(int *)(unaff_EBP - 0x2b90) = iVar8;
          pvVar50 = (void *)FUN_004e2320(pvVar50,1);
          *(void **)(unaff_EBP - 0x2b8c) = pvVar50;
          puVar16 = (uint *)FUN_004014b0(pvVar50,(int *)(unaff_EBP - 0x34b4));
          pvVar50 = (void *)FUN_00401530(*(void **)(unaff_EBP - 0x2bb8),(int *)(unaff_EBP - 0x3224))
          ;
          uVar27 = FUN_004ce380(pvVar50,puVar16);
          if ((char)uVar27 != '\0') {
            iVar8 = FUN_004013d0(*(void **)(unaff_EBP - 0x2b38),2);
            pvVar50 = *(void **)(unaff_EBP - 0x2b94);
            *(int *)(unaff_EBP - 0x2b38) = iVar8;
            pvVar50 = (void *)FUN_004e2320(pvVar50,2);
            *(void **)(unaff_EBP - 0x2bcc) = pvVar50;
            puVar16 = (uint *)FUN_004014b0(pvVar50,(int *)(unaff_EBP - 0x3604));
            pvVar50 = (void *)FUN_00401530(*(void **)(unaff_EBP - 0x2b98),
                                           (int *)(unaff_EBP - 0x3234));
            uVar27 = FUN_004ce380(pvVar50,puVar16);
            if ((char)uVar27 != '\0') {
              puVar16 = (uint *)FUN_00401530(*(void **)(unaff_EBP - 0x2b44),
                                             (int *)(unaff_EBP - 0x34c4));
              pvVar50 = (void *)FUN_004014b0(*(void **)(unaff_EBP - 0x2b48),
                                             (int *)(unaff_EBP - 0x3244));
              uVar27 = FUN_004ce350(pvVar50,puVar16);
              if ((char)uVar27 != '\0') {
                puVar16 = (uint *)FUN_00401530(*(void **)(unaff_EBP - 0x2b8c),
                                               (int *)(unaff_EBP - 0x3724));
                pvVar50 = (void *)FUN_004014b0(*(void **)(unaff_EBP - 0x2bb8),
                                               (int *)(unaff_EBP - 0x3254));
                uVar27 = FUN_004ce350(pvVar50,puVar16);
                if ((char)uVar27 != '\0') {
                  puVar16 = (uint *)FUN_00401530(*(void **)(unaff_EBP - 0x2bcc),
                                                 (int *)(unaff_EBP - 0x34d4));
                  pvVar50 = (void *)FUN_004014b0(*(void **)(unaff_EBP - 0x2b98),
                                                 (int *)(unaff_EBP - 0x3264));
                  uVar27 = FUN_004ce350(pvVar50,puVar16);
                  if ((char)uVar27 != '\0') {
                    in_stack_ffffffe8 = 0x54863700000000;
                    cVar4 = FUN_004d4d80(puVar25 + 6,*(uint **)(unaff_EBP - 0x2b94),'\x01',200.0);
                    if (cVar4 != '\0') {
                      if ((*(int *)(*(int *)(unaff_EBP - 0x2b68) + 0x128) == 0) ||
                         (pvVar26 == (void *)0x0)) {
                        iVar8 = *(int *)(unaff_EBP - 0x2b4c);
                        uVar27 = extraout_ECX & 0xffffff00;
                        *(undefined1 *)(unaff_EBP - 0x2c00) = 0;
                        *(uint *)(unaff_EBP - 0x2b44) = uVar27;
                        pvVar50 = (void *)0x0;
                        if (iVar8 != 0) {
                          bVar3 = FUN_0040f520(iVar8);
                          uVar27 = *(uint *)(unaff_EBP - 0x2b44) & 0xff;
                          if (bVar3) {
                            uVar27 = 1;
                          }
                          pvVar50 = *(void **)(unaff_EBP - 0x2b4c);
                          *(char *)(unaff_EBP - 0x2c00) = (char)uVar27;
                        }
                        fVar56 = (float)puVar25[0x12];
                        *(float *)(unaff_EBP - 0x2b38) = fVar56;
                        if ((char)uVar27 != '\0') {
                          *(float *)(unaff_EBP - 0x2b38) = fVar56 * 2.0;
                        }
                        if (((pvVar50 != (void *)0x0) &&
                            ((pvVar50 == *(void **)(*(int *)(unaff_EBP - 0x2b18) + 0xb8) ||
                             ((*(char *)(*(int *)(unaff_EBP - 0x2b18) + 0xb4) == '\0' &&
                              (*(char *)((int)pvVar50 + 0x60) != '\0')))))) &&
                           ((bVar3 = FUN_0040f220(pvVar50,0.25), bVar3 &&
                            (((*(char *)(unaff_EBP - 0x2bfc) == '\0' && (puVar25[0x18] == 1)) &&
                             ((char)puVar25[0x19] == '\x01')))))) {
                          FUN_004029b0((undefined1 *)(unaff_EBP - 0x2f7c));
                          pvVar50 = *(void **)(unaff_EBP - 0x2b4c);
                          *(undefined1 *)(unaff_EBP - 0x2f7c) = 9;
                          *(undefined4 *)(unaff_EBP - 0x2f74) = 30000;
                          FUN_00411740(pvVar50,(char *)(unaff_EBP - 0x2f7c));
                          FUN_004063d0(unaff_EBP - 0x2e6c);
                          uVar66 = *(undefined4 *)(*(int *)(unaff_EBP - 0x2b4c) + 8);
                          uVar65 = *(undefined4 *)(*(int *)(unaff_EBP - 0x2b4c) + 0xc);
                          *(undefined8 *)(unaff_EBP - 0x2e5c) = *(undefined8 *)(unaff_EBP - 0x2f7c);
                          uVar1 = *(undefined8 *)(unaff_EBP - 0x2f74);
                          *(undefined4 *)(unaff_EBP - 0x2e68) = uVar65;
                          *(undefined4 *)(unaff_EBP - 0x2e60) = uVar65;
                          iVar8 = *(int *)(unaff_EBP - 0x2b28);
                          *(undefined4 *)(unaff_EBP - 0x2e6c) = uVar66;
                          *(undefined4 *)(unaff_EBP - 0x2e64) = uVar66;
                          *(undefined8 *)(unaff_EBP - 0x2e54) = uVar1;
                          *(undefined8 *)(unaff_EBP - 0x2e4c) = *(undefined8 *)(unaff_EBP - 0x2f6c);
                          FUN_00411040((void *)(iVar8 + 0x58),(undefined8 *)(unaff_EBP - 0x2e6c));
                          FUN_004c8530(unaff_EBP - 0x204);
                          iVar8 = *(int *)(unaff_EBP - 0x2b4c);
                          *(undefined4 *)(unaff_EBP - 0x1f8) = 0x2f;
                          FUN_00402550((void *)(unaff_EBP - 0x204),(longlong *)(iVar8 + 0x10));
                          FUN_00428590((void *)(*(int *)(unaff_EBP - 0x2b28) + 8),
                                       (undefined4 *)(unaff_EBP - 0x204));
                        }
                        cVar4 = '\x01';
                        iVar8 = FUN_0052eb90((int *)(unaff_EBP - 0x2b50));
                        in_stack_ffffffe8 =
                             CONCAT44((undefined4 *)(unaff_EBP - 0x2be8),
                                      *(undefined4 **)(unaff_EBP - 0x2b28));
                        cVar4 = FUN_004cfd50(*(void **)(unaff_EBP - 0x2b18),
                                             *(float *)(unaff_EBP - 0x2b68),pvVar26,
                                             *(float *)(unaff_EBP - 0x2b38),
                                             (char)*(undefined4 *)(unaff_EBP - 0x2c00),
                                             (char)*(undefined4 *)(unaff_EBP - 0x2bfc),
                                             (float)puVar25[0x15],puVar25 + 6,
                                             (float *)(unaff_EBP - 0xb0),
                                             *(undefined4 **)(unaff_EBP - 0x2b28),
                                             (undefined4 *)(unaff_EBP - 0x2be8),puVar25[0x18] == 1,0
                                             ,iVar8,cVar4);
                        uVar5 = (undefined1)*(undefined4 *)(unaff_EBP - 0x2b64);
                        if (cVar4 != '\0') {
                          uVar5 = 1;
                        }
                        *(undefined1 *)(unaff_EBP - 0x2b64) = uVar5;
                      }
                      else {
                        FUN_00530690((void *)((int)pvVar26 + 0x11b4),
                                     (undefined4 *)(unaff_EBP - 0x3074),
                                     (uint *)(*(int *)(unaff_EBP - 0x2b68) + 8));
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    FUN_00407a30((void *)(unaff_EBP - 0x2bdc),(int *)(unaff_EBP - 0x2ce0));
    piVar53 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),(undefined4 *)(unaff_EBP - 0x2d64))
    ;
    bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2bdc),piVar53);
  } while (bVar3);
LAB_005488d0:
  if ((((char)*(undefined4 *)(unaff_EBP - 0x2b64) != '\0') && (puVar25[0x18] != 3)) &&
     (pvVar26 != (void *)0x0)) {
    *(int *)((int)pvVar26 + 0x70) = *(int *)((int)pvVar26 + 0x70) + 1;
    FUN_004103a0((int)pvVar26);
    *(undefined4 *)((int)pvVar26 + 0x74) = 0;
  }
  if ((puVar25[0x18] == 1) && ((char)puVar25[0x19] == '\x02')) {
    puVar25[0x18] = 3;
    uVar27 = 3000;
    if ((char)puVar25[0x17] != '\0') {
      uVar27 = 0;
    }
    puVar25[0x1a] = uVar27;
    puVar25[0x12] = (uint)((float)puVar25[0x12] * 0.05);
    puVar25[0x13] = (uint)((float)puVar25[0x15] * 5.0 + 5.0);
    puVar25[0x15] = 0;
    *(undefined1 *)(puVar25 + 0x17) = 0;
  }
  else {
LAB_00546b28:
    FUN_004d6620((void *)(unaff_EBP - 0x2c20),(undefined4 *)(unaff_EBP - 0x2b50));
  }
LAB_00546b3a:
  FUN_0052ebf0((void *)(unaff_EBP - 0x2b50),(undefined4 *)(unaff_EBP - 0x2bc0));
  pvVar26 = (void *)(*(int *)(unaff_EBP - 0x2b18) + 0x14);
  piVar53 = (int *)FUN_00530550(pvVar26,(undefined4 *)(unaff_EBP - 0x2d6c));
  bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b50),piVar53);
  goto joined_r0x00546872;
}


/* FUN_00549200 @ 00549200  kind=gamemisc  attributed-by=none  size=141 */

basic_istream<char,std::char_traits<char>_> *
FUN_00549200(basic_istream<char,std::char_traits<char>_> *param_1,undefined1 *param_2)

{
  bool bVar1;
  int iVar2;
  basic_istream<char,std::char_traits<char>_> *pbVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00556630;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int **)(param_1 + *(int *)(*(int *)param_1 + 4) + 0x38) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + *(int *)(*(int *)param_1 + 4) + 0x38) + 4))();
  }
  local_8 = 0;
  bVar1 = std::basic_istream<char,std::char_traits<char>_>::_Ipfx
                    ((basic_istream<char,std::char_traits<char>_> *)param_1,false);
  local_8 = 1;
  if (bVar1) {
    local_8 = 2;
    iVar2 = std::basic_streambuf<char,std::char_traits<char>_>::sbumpc
                      (*(basic_streambuf<char,std::char_traits<char>_> **)
                        (param_1 + *(int *)(*(int *)param_1 + 4) + 0x38));
    if (iVar2 == -1) {
      pbVar3 = (basic_istream<char,std::char_traits<char>_> *)FUN_005492ad();
      return pbVar3;
    }
    *param_2 = (char)iVar2;
    pbVar3 = (basic_istream<char,std::char_traits<char>_> *)FUN_005492ad();
    return pbVar3;
  }
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)(param_1 + *(int *)(*(int *)param_1 + 4)),0,
             false);
  local_8 = 0xffffffff;
  if (*(int **)(param_1 + *(int *)(*(int *)param_1 + 4) + 0x38) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + *(int *)(*(int *)param_1 + 4) + 0x38) + 8))();
  }
  ExceptionList = local_10;
  return param_1;
}


/* __alldiv @ 0054aa30  kind=gamemisc  attributed-by=none  size=170 */

/* Library Function - Single Match
    __alldiv
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2017 Release,
   Visual Studio 2019 Release */

undefined8 __alldiv(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar10;
  char cVar11;
  uint uVar9;
  
  cVar11 = (int)param_2 < 0;
  if ((bool)cVar11) {
    bVar10 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar10 - param_2;
  }
  if ((int)param_4 < 0) {
    cVar11 = cVar11 + '\x01';
    bVar10 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar10 - param_4;
  }
  uVar3 = param_1;
  uVar5 = param_3;
  uVar6 = param_2;
  uVar9 = param_4;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar8 = uVar9 >> 1;
      uVar5 = uVar5 >> 1 | (uint)((uVar9 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar6 = uVar7;
      uVar9 = uVar8;
    } while (uVar8 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar5;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar5 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar5)) ||
       ((param_2 <= uVar5 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  if (cVar11 == '\x01') {
    bVar10 = iVar4 != 0;
    iVar4 = -iVar4;
    uVar3 = -(uint)bVar10 - uVar3;
  }
  return CONCAT44(uVar3,iVar4);
}


/* ___raise_securityfailure @ 0054ab26  kind=gamemisc  attributed-by=none  size=61 */

/* Library Function - Single Match
    ___raise_securityfailure
   
   Library: Visual Studio 2012 Release */

void __cdecl ___raise_securityfailure(EXCEPTION_POINTERS *param_1)

{
  DAT_0058461c = IsDebuggerPresent();
  _crt_debugger_hook(1);
  __crtUnhandledException(param_1);
  if (DAT_0058461c == 0) {
    _crt_debugger_hook(1);
  }
  __crtTerminateProcess(0xc0000409);
  return;
}


/* ___report_securityfailure @ 0054ac68  kind=gamemisc  attributed-by=none  size=206 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___report_securityfailure
   
   Library: Visual Studio 2012 Release */

void __cdecl ___report_securityfailure(undefined4 param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  uint extraout_EDX;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  undefined2 in_FS;
  undefined2 in_GS;
  byte bVar4;
  byte bVar5;
  byte in_AF;
  byte bVar6;
  byte bVar7;
  byte in_TF;
  byte in_IF;
  byte bVar8;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  longlong lVar9;
  undefined4 unaff_retaddr;
  
  uVar2 = IsProcessorFeaturePresent(0x17);
  bVar4 = 0;
  bVar8 = 0;
  bVar7 = (int)uVar2 < 0;
  bVar6 = uVar2 == 0;
  bVar5 = (POPCOUNT(uVar2 & 0xff) & 1U) == 0;
  lVar9 = (ulonglong)extraout_EDX << 0x20;
  uVar3 = extraout_ECX;
  if (!(bool)bVar6) {
    pcVar1 = (code *)swi(0x29);
    lVar9 = (*pcVar1)();
    uVar3 = extraout_ECX_00;
  }
  _DAT_005843f8 = (undefined4)((ulonglong)lVar9 >> 0x20);
  _DAT_00584400 = (undefined4)lVar9;
  _DAT_00584410 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar8 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar7 & 1) * 0x80 | (uint)(bVar6 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar5 & 1) * 4 | (uint)(bVar4 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_00584414 = &param_1;
  _DAT_00584300 = 0xc0000409;
  _DAT_00584304 = 1;
  _DAT_00584310 = 1;
  DAT_00584314 = param_1;
  _DAT_0058430c = unaff_retaddr;
  _DAT_005843dc = in_GS;
  _DAT_005843e0 = in_FS;
  _DAT_005843e4 = in_ES;
  _DAT_005843e8 = in_DS;
  _DAT_005843ec = unaff_EDI;
  _DAT_005843f0 = unaff_ESI;
  _DAT_005843f4 = unaff_EBX;
  _DAT_005843fc = uVar3;
  _DAT_00584404 = unaff_EBP;
  DAT_00584408 = unaff_retaddr;
  _DAT_0058440c = in_CS;
  _DAT_00584418 = in_SS;
  ___raise_securityfailure((EXCEPTION_POINTERS *)&PTR_DAT_00573d88);
  return;
}


/* `eh_vector_constructor_iterator' @ 0054ad4e  kind=gamemisc  attributed-by=none  size=76 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall `eh vector constructor iterator'(void *,unsigned int,int,void (__thiscall*)(void
   *),void (__thiscall*)(void *))
   
   Library: Visual Studio 2012 Release */

void _eh_vector_constructor_iterator_
               (void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4,
               _func_void_void_ptr *param_5)

{
  int iVar1;
  void *in_stack_ffffffcc;
  
  for (iVar1 = 0; iVar1 < param_3; iVar1 = iVar1 + 1) {
    (*param_4)(in_stack_ffffffcc);
  }
  FUN_0054ada6();
  return;
}


/* __alldvrm @ 0054ae90  kind=gamemisc  attributed-by=none  size=223 */

/* Library Function - Single Match
    __alldvrm
   
   Library: Visual Studio */

undefined8 __alldvrm(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar10;
  char cVar11;
  uint uVar9;
  
  cVar11 = (int)param_2 < 0;
  if ((bool)cVar11) {
    bVar10 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar10 - param_2;
  }
  if ((int)param_4 < 0) {
    cVar11 = cVar11 + '\x01';
    bVar10 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar10 - param_4;
  }
  uVar3 = param_1;
  uVar5 = param_3;
  uVar6 = param_2;
  uVar9 = param_4;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar8 = uVar9 >> 1;
      uVar5 = uVar5 >> 1 | (uint)((uVar9 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar6 = uVar7;
      uVar9 = uVar8;
    } while (uVar8 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar5;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar5 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar5)) ||
       ((param_2 <= uVar5 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  if (cVar11 == '\x01') {
    bVar10 = iVar4 != 0;
    iVar4 = -iVar4;
    uVar3 = -(uint)bVar10 - uVar3;
  }
  return CONCAT44(uVar3,iVar4);
}


/* __allrem @ 0054af70  kind=gamemisc  attributed-by=none  size=178 */

/* Library Function - Single Match
    __allrem
   
   Library: Visual Studio */

undefined8 __allrem(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  
  bVar13 = (int)param_2 < 0;
  if (bVar13) {
    bVar12 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar12 - param_2;
  }
  uVar11 = (uint)bVar13;
  if ((int)param_4 < 0) {
    bVar13 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar13 - param_4;
  }
  uVar3 = param_1;
  uVar4 = param_3;
  uVar8 = param_2;
  uVar9 = param_4;
  if (param_4 == 0) {
    iVar5 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) %
                 (ulonglong)param_3);
    iVar6 = 0;
    if ((int)(uVar11 - 1) < 0) goto LAB_0054b01d;
  }
  else {
    do {
      uVar10 = uVar9 >> 1;
      uVar4 = uVar4 >> 1 | (uint)((uVar9 & 1) != 0) << 0x1f;
      uVar7 = uVar8 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar8 & 1) != 0) << 0x1f;
      uVar8 = uVar7;
      uVar9 = uVar10;
    } while (uVar10 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar4;
    uVar3 = (int)uVar1 * param_4;
    lVar2 = (uVar1 & 0xffffffff) * (ulonglong)param_3;
    uVar8 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar4 = (uint)lVar2;
    uVar9 = uVar8 + uVar3;
    if (((CARRY4(uVar8,uVar3)) || (param_2 < uVar9)) || ((param_2 <= uVar9 && (param_1 < uVar4)))) {
      bVar13 = uVar4 < param_3;
      uVar4 = uVar4 - param_3;
      uVar9 = (uVar9 - param_4) - (uint)bVar13;
    }
    iVar5 = uVar4 - param_1;
    iVar6 = (uVar9 - param_2) - (uint)(uVar4 < param_1);
    if (-1 < (int)(uVar11 - 1)) goto LAB_0054b01d;
  }
  bVar13 = iVar5 != 0;
  iVar5 = -iVar5;
  iVar6 = -(uint)bVar13 - iVar6;
LAB_0054b01d:
  return CONCAT44(iVar6,iVar5);
}


/* __allshl @ 0054b030  kind=gamemisc  attributed-by=none  size=31 */

/* Library Function - Single Match
    __allshl
   
   Library: Visual Studio */

longlong __fastcall __allshl(byte param_1,int param_2)

{
  uint in_EAX;
  
  if (0x3f < param_1) {
    return 0;
  }
  if (param_1 < 0x20) {
    return CONCAT44(param_2 << (param_1 & 0x1f) | in_EAX >> 0x20 - (param_1 & 0x1f),
                    in_EAX << (param_1 & 0x1f));
  }
  return (ulonglong)(in_EAX << (param_1 & 0x1f)) << 0x20;
}


/* __aulldiv @ 0054b050  kind=gamemisc  attributed-by=none  size=104 */

/* Library Function - Single Match
    __aulldiv
   
   Library: Visual Studio */

undefined8 __aulldiv(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar3 = param_1;
  uVar8 = param_4;
  uVar6 = param_2;
  uVar9 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar5 = uVar8 >> 1;
      uVar9 = uVar9 >> 1 | (uint)((uVar8 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar8 = uVar5;
      uVar6 = uVar7;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar9;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar8 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar8)) ||
       ((param_2 <= uVar8 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,iVar4);
}


/* __aulldvrm @ 0054b0c0  kind=gamemisc  attributed-by=none  size=149 */

/* Library Function - Single Match
    __aulldvrm
   
   Library: Visual Studio */

undefined8 __aulldvrm(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar3 = param_1;
  uVar8 = param_4;
  uVar6 = param_2;
  uVar9 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar5 = uVar8 >> 1;
      uVar9 = uVar9 >> 1 | (uint)((uVar8 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar8 = uVar5;
      uVar6 = uVar7;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar9;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar8 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar8)) ||
       ((param_2 <= uVar8 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,iVar4);
}


/* __aullrem @ 0054b160  kind=gamemisc  attributed-by=none  size=117 */

/* Library Function - Single Match
    __aullrem
   
   Library: Visual Studio */

undefined8 __aullrem(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar3 = param_1;
  uVar4 = param_4;
  uVar9 = param_2;
  uVar10 = param_3;
  if (param_4 == 0) {
    iVar6 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) %
                 (ulonglong)param_3);
    iVar7 = 0;
  }
  else {
    do {
      uVar5 = uVar4 >> 1;
      uVar10 = uVar10 >> 1 | (uint)((uVar4 & 1) != 0) << 0x1f;
      uVar8 = uVar9 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar9 & 1) != 0) << 0x1f;
      uVar4 = uVar5;
      uVar9 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar8,uVar3) / (ulonglong)uVar10;
    uVar3 = (int)uVar1 * param_4;
    lVar2 = (uVar1 & 0xffffffff) * (ulonglong)param_3;
    uVar9 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar4 = (uint)lVar2;
    uVar10 = uVar9 + uVar3;
    if (((CARRY4(uVar9,uVar3)) || (param_2 < uVar10)) || ((param_2 <= uVar10 && (param_1 < uVar4))))
    {
      bVar11 = uVar4 < param_3;
      uVar4 = uVar4 - param_3;
      uVar10 = (uVar10 - param_4) - (uint)bVar11;
    }
    iVar6 = -(uVar4 - param_1);
    iVar7 = -(uint)(uVar4 - param_1 != 0) - ((uVar10 - param_2) - (uint)(uVar4 < param_1));
  }
  return CONCAT44(iVar7,iVar6);
}


/* ___tmainCRTStartup @ 0054b2e6  kind=gamemisc  attributed-by=none  size=330 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___tmainCRTStartup
   
   Library: Visual Studio 2012 Release */

int ___tmainCRTStartup(void)

{
  bool bVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  BOOL BVar5;
  
  bVar1 = false;
  do {
    pvVar3 = (void *)0x0;
    LOCK();
    pvVar2 = StackBase;
    if (DAT_00584684 != (void *)0x0) {
      pvVar3 = DAT_00584684;
      pvVar2 = DAT_00584684;
    }
    DAT_00584684 = pvVar2;
    UNLOCK();
    if (pvVar3 == (void *)0x0) goto LAB_0054b321;
  } while (pvVar3 != StackBase);
  bVar1 = true;
LAB_0054b321:
  if (DAT_00584688 == 1) {
    _amsg_exit(0x1f);
  }
  else if (DAT_00584688 == 0) {
    DAT_00584688 = 1;
    iVar4 = initterm_e(&DAT_0055854c,&DAT_00558560);
    if (iVar4 != 0) {
      return 0xff;
    }
  }
  else {
    DAT_00584624 = 1;
  }
  if (DAT_00584688 == 1) {
    initterm(&DAT_00558408,&DAT_00558548);
    DAT_00584688 = 2;
  }
  if (!bVar1) {
    LOCK();
    DAT_00584684 = (void *)0x0;
    UNLOCK();
  }
  if ((DAT_0058468c != (code *)0x0) &&
     (BVar5 = __IsNonwritableInCurrentImage((PBYTE)&DAT_0058468c), BVar5 != 0)) {
    (*DAT_0058468c)(0,2,0);
  }
  pvVar3 = DAT_00584630;
  *(void **)__initenv_exref = DAT_00584630;
  DAT_00584620 = FUN_00549c50(pvVar3);
  if (DAT_00584638 != 0) {
    if (DAT_00584624 == 0) {
      _cexit();
    }
    return DAT_00584620;
  }
                    /* WARNING: Subroutine does not return */
  exit(DAT_00584620);
}


